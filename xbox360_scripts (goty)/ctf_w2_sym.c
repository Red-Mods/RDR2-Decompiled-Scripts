//Decompiled with MagicRDR v1.0
//Function Count : 250
//Statics Count : 172
//Natives Count : 214
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
	struct<105> Local_12 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 6;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_10 = 0;
	fLocal_11 = 1.0f;
	Function_239();
	if (Function_237())
	{
		Function_236();
	}
	else
	{
		if (Function_106())
		{
			Function_105(1);
		}
		else
		{
			Function_103(1);
		}
		while (!IS_EXITFLAG_SET())
		{
			Function_27();
			Function_24();
			WAIT(0);
		}
		Function_22(512);
		Function_18();
		Function_17(Global_83864.f_1284, 0, 1);
	}
	SET_DUST_LEVEL(1);
	SET_DUST_LEVEL_MID(1);
	SET_DUST_LEVEL_FAR(1);
	Function_8();
	Function_3();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x70 / 112
{
	Function_2(uLocal_171);
	return;
}

int Function_2(bool bParam0) //Position: 0x7C / 124
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_3() //Position: 0x92 / 146
{
	Function_4(&Local_51 + 4);
	RELEASE_LAYOUT_REF(Local_51);
	return;
}

void Function_4(int iParam0) //Position: 0xA4 / 164
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

void Function_5(var uParam0, int iParam1) //Position: 0xCA / 202
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

void Function_6(var uParam0, int iParam1) //Position: 0x1F8 / 504
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_7(int iParam0, int iParam1) //Position: 0x212 / 530
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8() //Position: 0x22F / 559
{
	Function_16();
	Function_4(&bLocal_39);
	Function_9();
	return;
}

void Function_9() //Position: 0x240 / 576
{
	Function_10();
	return;
}

void Function_10() //Position: 0x249 / 585
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

void Function_11(int iParam0, bool bParam1, int iParam2) //Position: 0x352 / 850
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

void Function_12(var uParam0, int iParam1) //Position: 0x37A / 890
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x38D / 909
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_14(bool bParam0) //Position: 0x39C / 924
{
	return Function_15(Global_76905.f_132, bParam0);
}

bool Function_15(var uParam0, bool bParam1) //Position: 0x3AD / 941
{
	return (uParam0 && bParam1) == 0;
}

void Function_16() //Position: 0x3BA / 954
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_17(var uParam0, bool bParam1, bool bParam2) //Position: 0x3F9 / 1017
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_13(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_13(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_18() //Position: 0x426 / 1062
{
	Function_19(Function_21());
	return;
}

void Function_19(int iParam0) //Position: 0x432 / 1074
{
	if (!Function_20(iParam0))
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

bool Function_20(int iParam0) //Position: 0x45F / 1119
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_21() //Position: 0x476 / 1142
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_22(int iParam0) //Position: 0x490 / 1168
{
	Function_23(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x4C9 / 1225
{
	Function_12(uParam0, iParam1);
	return;
}

void Function_24() //Position: 0x4D6 / 1238
{
	Function_25(2);
	return;
}

void Function_25(int iParam0) //Position: 0x4E0 / 1248
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
			Function_26(iParam0);
		}
	}
	return;
}

void Function_26(var uParam0) //Position: 0x512 / 1298
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

void Function_27() //Position: 0x521 / 1313
{
	Function_101();
	if (Function_100(1, 1))
	{
		Function_84(StackVal, StackVal, 7437, vLocal_48, 1, 7324);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_79(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_30(4725, 3518);
		Function_28();
	}
	return;
}

void Function_28() //Position: 0x56C / 1388
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_29(&Local_12);
	}
	return;
}

void Function_29(int iParam0) //Position: 0x588 / 1416
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

void Function_30(int iParam0, int iParam1) //Position: 0x5AE / 1454
{
	Function_31(iParam0, iParam1, 3511);
	return;
}

void Function_31(var uParam0, var uParam1, int iParam2) //Position: 0x5BF / 1471
{
	if (Function_14(0x4000000))
	{
		Function_40();
		Function_11(0x4000000, 0, 1);
	}
	if (Function_14(0x10000000))
	{
		Function_40();
		Function_11(0x10000000, 0, 1);
	}
	if (Function_14(2) != Function_14(0x2000000))
	{
		Function_40();
		Function_11(0x2000000, Function_14(2), 1);
	}
	if (Function_39())
	{
		Function_38(!Function_14(16));
	}
	if (Function_14(16))
	{
		Function_32(&uParam0, &uParam1, &iParam2);
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

void Function_32(var uParam0, var uParam1, int iParam2) //Position: 0x758 / 1880
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
			if (!Function_37(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_35(bVar1, 2048, 1))
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
				if (Function_33(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_33(bVar1, (4294966296 - bVar1), 1))
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

bool Function_33(bool bParam0, int iParam1, int iParam2) //Position: 0x8D0 / 2256
{
	var uVar0;
	
	return Function_34(bParam0, iParam1, &uVar0, iParam2);
}

int Function_34(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x8E1 / 2273
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

bool Function_35(bool bParam0, int iParam1, bool bParam2) //Position: 0x946 / 2374
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_100(iParam1, bParam2);
	}
	if (!Function_37(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_36(iParam1), 64);
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

var Function_36(int iParam0) //Position: 0x9C7 / 2503
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

bool Function_37(bool bParam0) //Position: 0xCE0 / 3296
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

void Function_38(bool bParam0) //Position: 0xD81 / 3457
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_11(16384, 0, 1);
	return;
}

bool Function_39() //Position: 0xD9B / 3483
{
	return Function_14(32768);
}

void Function_40() //Position: 0xDA8 / 3496
{
	Function_11(32768, 1, 0);
	return;
}

int Function_41() //Position: 0xDB7 / 3511
{
	return 1;
}

int Function_42(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xDBE / 3518
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	Function_59(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_58(bParam0);
	bVar2 = Function_57(bParam0);
	bVar3 = Function_54(bParam0);
	iVar4 = Function_53(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_33(bParam0, iVar4, 0);
	}
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_51(34, bParam0));
		bVar0++;
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_14(4))
	{
		if (Function_48(bParam0, 1, 1))
		{
			if (Function_45(bParam0))
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
		Function_44(bVar0, bParam0);
	}
	if (Function_45(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	if (Function_39() && Function_43())
	{
	}
	return 0;
}

bool Function_43() //Position: 0xEC1 / 3777
{
	return (Function_14(4096) || Function_14(4));
}

void Function_44(bool bParam0, bool bParam1) //Position: 0xED2 / 3794
{
	if (Function_14(4))
	{
		if (Function_35(bParam1, 1024, 1))
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

bool Function_45(bool bParam0) //Position: 0xF05 / 3845
{
	if (Function_47(bParam0, 1, 0) != 4294967295 && Function_46() != 4294967295)
	{
		return 0;
	}
	return Function_47(bParam0, 1, 0) != Function_46();
}

int Function_46() //Position: 0xF2D / 3885
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_47(GET_LOCAL_SLOT(), 1, 0);
}

int Function_47(bool bParam0, bool bParam1, bool bParam2) //Position: 0xF44 / 3908
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_37(bParam0))
			{
				if (!Function_35(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_48(bool bParam0, int iParam1, bool bParam2) //Position: 0xF88 / 3976
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_50(iParam1, bParam2);
	}
	if (!Function_37(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_49(iParam1), 64);
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

var Function_49(int iParam0) //Position: 0x1009 / 4105
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

var Function_50(int iParam0, bool bParam1) //Position: 0x10FB / 4347
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_51(int iParam0, bool bParam1) //Position: 0x111B / 4379
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_52(iParam0);
	}
	if (!Function_37(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_52(int iParam0) //Position: 0x1189 / 4489
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_53(int iParam0, int iParam1, int iParam2) //Position: 0x11A2 / 4514
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_54(int iParam0) //Position: 0x11B7 / 4535
{
	return Function_55(0, iParam0);
}

int Function_55(int iParam0, bool bParam1) //Position: 0x11C3 / 4547
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_56(iParam0);
	}
	if (!Function_37(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_56(int iParam0) //Position: 0x122A / 4650
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_57(bool bParam0) //Position: 0x123A / 4666
{
	return Function_51(12, bParam0);
}

int Function_58(int iParam0) //Position: 0x1247 / 4679
{
	return Function_51(11, iParam0);
}

void Function_59(bool bParam0, int iParam1, char* cParam2) //Position: 0x1254 / 4692
{
	if (bParam0)
	{
		if (Function_39())
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

int Function_60() //Position: 0x1275 / 4725
{
	if (!Function_74(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_headshots");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_bagcaptures");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_73();
	Function_61();
	return 1;
}

void Function_61() //Position: 0x1311 / 4881
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
		Function_62(0, 0);
		Function_62(1, 0);
	}
	return;
}

void Function_62(bool bParam0, bool bParam1) //Position: 0x133C / 4924
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_46())
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
		Function_63(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_63(int iParam0, int iParam1, bool bParam2) //Position: 0x13DB / 5083
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_39())
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
		if (Function_43())
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

struct<16> Function_64(var uParam0, var uParam1) //Position: 0x14CE / 5326
{
	return StackVal, StackVal, StackVal, Function_65(Function_66(uParam0), uParam1);
}

struct<16> Function_65(bool bParam0, bool bParam1) //Position: 0x14E0 / 5344
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

int Function_66(int iParam0) //Position: 0x1515 / 5397
{
	if (!Function_67())
	{
		return 0;
	}
	return StackVal;
}

bool Function_67() //Position: 0x152E / 5422
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_68(int iParam0) //Position: 0x153B / 5435
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_69() //Position: 0x1557 / 5463
{
	return Function_46() == 4294967295;
}

bool Function_70() //Position: 0x1562 / 5474
{
	return Function_71(2);
}

int Function_71(int iParam0) //Position: 0x156C / 5484
{
	return Function_72(&Global_79349, iParam0);
}

int Function_72(var uParam0, bool bParam1) //Position: 0x157B / 5499
{
	return Function_15(uParam0->f_44, bParam1);
}

void Function_73() //Position: 0x158A / 5514
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

bool Function_74(bool bParam0) //Position: 0x15C7 / 5575
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_39() || Function_78(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_39())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_75(Function_39());
	return 1;
}

void Function_75(bool bParam0) //Position: 0x1648 / 5704
{
	if (bParam0 || Function_14(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_14(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_14(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_14(1048576) || Function_14(4)) || Function_100(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_11(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_76(int iParam0) //Position: 0x16D1 / 5841
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_77(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_77(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x16E5 / 5861
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

int Function_78(bool bParam0, bool bParam1) //Position: 0x172A / 5930
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

void Function_79(vector3 vParam0, float fParam3) //Position: 0x175E / 5982
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_83(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_83(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_80(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_80(bool bParam0) //Position: 0x1811 / 6161
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
	return Function_81(bVar0);
}

int Function_81(bool bParam0) //Position: 0x184C / 6220
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
	Function_82(bVar0);
	return bVar0;
}

void Function_82(bool bParam0) //Position: 0x189A / 6298
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_83() //Position: 0x18AD / 6317
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_84(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x18DC / 6364
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_85(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 7223, 1, 125, 0, 0, 0);
	Function_85(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_85(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x195F / 6495
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_86(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_86(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x19AA / 6570
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
			Function_29(iParam0);
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
					Function_29(iParam0);
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
			fVar14 = Function_87(iParam0->f_36);
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

var Function_87(float fParam0) //Position: 0x1C29 / 7209
{
	return (fParam0 * 57.29578f);
}

var Function_88(int iParam0, var uParam1) //Position: 0x1C37 / 7223
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_89(int iParam0, var uParam1) //Position: 0x1C9C / 7324
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_sym_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_90() //Position: 0x1D0D / 7437
{
	int iVar0;
	
	iVar0 = Function_96(Global_83591.f_140, &vLocal_48, 0.0f, &Global_83591 + 276, 1);
	Function_91(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_91(bool bParam0, int iParam1) //Position: 0x1D3A / 7482
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_95(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_94((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_94((*iParam1)[iVar202], &iVar21))
		{
			if (Function_92((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_92(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1E49 / 7753
{
	float fVar0;
	
	if (!Function_93(bParam0))
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

bool Function_93(int iParam0) //Position: 0x1F70 / 8048
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_94(bool bParam0, int iParam1) //Position: 0x1F82 / 8066
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

var Function_95() //Position: 0x1FDE / 8158
{
	int iVar0;
	
	return iVar0;
}

var Function_96(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1FE6 / 8166
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_98(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_94((*uParam3)[iVar12], &iVar2))
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
		if (Function_94((*uParam3)[iVar12], &iVar2))
		{
			if (Function_97((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_97(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x20D4 / 8404
{
	if (!Function_93(bParam0))
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

var Function_98(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2265 / 8805
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_99()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_99() //Position: 0x22D1 / 8913
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_100(bool bParam0, bool bParam1) //Position: 0x22F8 / 8952
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_101() //Position: 0x2318 / 8984
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
						Function_102("CTF_sym_help", 4294967295);
						break;
					
					case 0x00000008:
						Function_102("CTF_one_help", 4294967295);
						break;
					
					case 0x00000007:
						Function_102("CTF_mul_help", 4294967295);
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

void Function_102(char* cParam0, int iParam1) //Position: 0x23AD / 9133
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

void Function_103(bool bParam0) //Position: 0x2444 / 9284
{
	Function_104(16, bParam0);
	return;
}

void Function_104(int iParam0, bool bParam1) //Position: 0x2451 / 9297
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

void Function_105(var uParam0) //Position: 0x2479 / 9337
{
	Function_104(8, uParam0);
	return;
}

bool Function_106() //Position: 0x2486 / 9350
{
	SET_DUST_LEVEL(2);
	SET_DUST_LEVEL_MID(2);
	SET_DUST_LEVEL_FAR(2);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_234();
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_233("MEX_SONG_04", "MEX_SONG_05", 0, 58, 58, 1);
	Function_232(512);
	Function_231(Global_83864.f_1284);
	Function_19(977);
	Function_17(Global_83864.f_1284, 0, 1);
	if (!Function_227(Local_51))
	{
		return 0;
	}
	Function_225(Local_51.f_476);
	Function_218(&Global_83591 + 276, 0);
	Function_216(&Global_83591, 1, 22, 1, 1);
	Function_216(&Global_83591, 2, 6, 10, 1);
	Function_216(&Global_83591, 3, 10, 10, 1);
	Function_216(&Global_83591, 4, 24, 4, 1);
	Function_211(&Global_83591, 1, 7, 10, 1);
	Function_211(&Global_83591, 2, 11, 10, 1);
	Function_210(&Global_83591);
	Function_209(&Global_83591 + 276, 4);
	Function_208(0, 8);
	Function_208(1, 1);
	Function_107();
	return 1;
}

void Function_107() //Position: 0x2576 / 9590
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 9699);
	uLocal_171 = Function_108("DLCPVP");
	return;
}

var Function_108(bool bParam0) //Position: 0x2593 / 9619
{
	bool bVar0;
	
	bVar0 = Function_109();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_109() //Position: 0x25A7 / 9639
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_110(var uParam0) //Position: 0x25E3 / 9699
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
					if (Function_207())
					{
					}
					else
					{
						if (bVar11)
						{
							switch (Function_206())
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
							Function_203(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23122] + 4, &Global_50170[23122] + 8, &Global_50170[23122] + 12, Var0);
							Function_199(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23022] + 4, &Global_50170[23022] + 8, &Global_50170[23022] + 12, Var0);
							Function_115(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
						}
						if (Function_113() || Function_111(4096))
						{
							if (Function_100(131072, 1))
							{
							}
							if (Function_35(Var0, 131072, 1))
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
			if (bVar11 && !Function_111(2048))
			{
				if (IS_SLOT_VALID(StackVal))
				{
				}
			}
			break;
	}
	return;
}

bool Function_111(int iParam0) //Position: 0x2747 / 10055
{
	return Function_112(Global_79336, iParam0);
}

bool Function_112(var uParam0, bool bParam1) //Position: 0x2756 / 10070
{
	return (uParam0 && bParam1) == 0;
}

int Function_113() //Position: 0x2763 / 10083
{
	if (Function_114())
	{
		return (Function_206() != 1 || Function_206() != 0);
	}
	return 0;
}

bool Function_114() //Position: 0x277C / 10108
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_115(struct<29> Param0) //Position: 0x2785 / 10117
{
	var uVar0;
	var uVar1;
	
	uVar0 = "challenge_01lvl2_128";
	uVar1 = "challenge_01_128";
	switch (Param0.f_12)
	{
		case 0x0000001D:
			Function_120(&(Global_50170[22822]), 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_120(&(Global_50170[22922]), 0, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
				if (StackVal == 10)
				{
					SET_WEAPON_GOLD(Function_119(), 29, 1);
					Global_83823[29] = 1;
					Function_116(6002);
					Function_116(6005);
					Function_116(6009);
				}
			}
			if (StackVal == 10)
			{
				Function_116(6001);
				Function_116(6004);
			}
			break;
	}
}

void Function_116(int iParam0) //Position: 0x2866 / 10342
{
	Function_117(iParam0, 1);
	return;
}

void Function_117(int iParam0, bool bParam1) //Position: 0x2872 / 10354
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_13(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_118((iVar0 % 32)));
	}
	else
	{
		Function_12(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_118((iVar0 % 32)));
	}
	return;
}

int Function_118(bool bParam0) //Position: 0x28C8 / 10440
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_119() //Position: 0x28D4 / 10452
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_120(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0x28E9 / 10473
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_121(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, 4294967295, iParam8, uParam9);
	}
}

void Function_121(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, int iParam8, var uParam9, var uParam10) //Position: 0x2915 / 10517
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_198(uParam0, uParam2, uParam3);
			}
			Function_122(uParam0, iParam1, uParam2, iParam8, 1, uParam3, uParam9, bParam4, uParam5, uParam10);
			break;
		
		case 0x00000001:
			Function_122(uParam0, iParam1, bParam4, iParam8, 2, uParam5, uParam9, bParam6, uParam7, uParam10);
			break;
		
		case 0x00000002:
			Function_122(uParam0, iParam1, bParam6, iParam8, 3, uParam7, uParam9, 0, 0.0f, uParam10);
			break;
	}
}

void Function_122(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, var uParam9) //Position: 0x2992 / 10642
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = Function_197(*uParam0);
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
					Function_195(uParam0, uParam5, uParam9);
				}
				else
				{
					Function_140(uParam0, iParam4, uParam5, uParam6, uParam9);
					Function_129(uParam0, bVar1, iParam7, fParam8);
				}
			}
		}
		else if (bVar1 > 0)
		{
			uParam0->f_12 = Function_128(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
			if (uParam0->f_12 == fVar0)
			{
				Function_123(*uParam0, uParam0->f_12, 1, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_123(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2A60 / 10848
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_127(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_126(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_127(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_125(iParam0, 4))
	{
		Function_124(Function_127(iParam0), 0);
	}
}

void Function_124(var uParam0, int iParam1) //Position: 0x2B17 / 11031
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

bool Function_125(int iParam0, bool bParam1) //Position: 0x2B3C / 11068
{
	return Function_15(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_126(int iParam0) //Position: 0x2B50 / 11088
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_127(int iParam0) //Position: 0x2B84 / 11140
{
	return Global_50170[iParam022].f_24;
}

var Function_128(int iParam0, int iParam1) //Position: 0x2B93 / 11155
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_129(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2BA6 / 11174
{
	Function_137(*uParam0);
	Function_130(*uParam0, bParam2, CEIL(bParam3), 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_127(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), 0, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_127(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
}

void Function_130(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2C4B / 11339
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_136(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_127(iParam0));
	if ((bParam3 && Function_125(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_127(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_135(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_126(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_134(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_133(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_132(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_127(iParam0), &Var7, 0, 2, Function_125(iParam0, 4));
			if (!bParam3)
			{
				Function_131(iParam0, 4);
			}
		}
	}
}

void Function_131(int iParam0, int iParam1) //Position: 0x2D08 / 11528
{
	Function_13(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<16> Function_132(int iParam0) //Position: 0x2D1C / 11548
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_126(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_133(int iParam0) //Position: 0x2D3C / 11580
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_134(int iParam0) //Position: 0x2D6A / 11626
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_135(int iParam0) //Position: 0x2D9A / 11674
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_136(int iParam0) //Position: 0x2DCB / 11723
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

void Function_137(int iParam0) //Position: 0x2F49 / 12105
{
	Function_138(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_138(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2F5F / 12127
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_139();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

var Function_139() //Position: 0x2FD4 / 12244
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_140(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3021 / 12321
{
	struct<4> Var0;
	
	Function_194(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_126(*uParam0) };
	Function_189(&Var0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_188(*uParam0, 4);
	Function_141();
}

void Function_141() //Position: 0x307F / 12415
{
	if (!Function_114())
	{
		if (!Function_187(1, 3, 1, 1))
		{
			Function_175(1);
			Function_174(1, 8);
		}
	}
	else
	{
		Function_142(0);
	}
	return;
}

void Function_142(bool bParam0) //Position: 0x30A8 / 12456
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_172(2);
	if (bParam0)
	{
		Function_172(1);
	}
	else
	{
		Function_171(1);
	}
	Function_143();
	return;
}

void Function_143() //Position: 0x3131 / 12593
{
	Function_169();
	Function_168();
	Function_168();
	Function_167();
	Function_167();
	Function_166();
	Function_166();
	Function_150(0);
	Function_150(0);
	if (!Function_114())
	{
		Function_148();
		Function_147();
		Function_146();
		Function_145();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_144();
	return;
}

void Function_144() //Position: 0x3183 / 12675
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

void Function_145() //Position: 0x3289 / 12937
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

void Function_146() //Position: 0x32BC / 12988
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

void Function_147() //Position: 0x344A / 13386
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

void Function_148() //Position: 0x35FE / 13822
{
	Function_149(&Global_28260, 1, 0);
	return;
}

void Function_149(int iParam0, bool bParam1, int iParam2) //Position: 0x360C / 13836
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
	
	bVar0 = Function_119();
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

struct<8> Function_150(int iParam0) //Position: 0x37FD / 14333
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
					iVar2 = ((Function_165((50 + iVar4)) + Function_165((183 + iVar4))) + Function_165((90 + iVar4)));
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
	Function_151(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_151(int iParam0, bool bParam1, bool bParam2) //Position: 0x38A3 / 14499
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
		Function_164(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_163(iParam0);
	if (bParam2)
	{
		Function_152(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_152(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x3B3E / 15166
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_162(390))), 32);
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
					bVar19 = (Function_161(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_161(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_159(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_156(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_154(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_153(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_95(), &Var9);
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

var Function_153(int iParam0) //Position: 0x418B / 16779
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_154(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x419C / 16796
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_155("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_155("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_155("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_155(char* cParam0, bool bParam1) //Position: 0x4291 / 17041
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_156(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x42AA / 17066
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_158(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_157(Function_158(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_157(int iParam0, int iParam1) //Position: 0x430F / 17167
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_158(int iParam0, bool bParam1) //Position: 0x4321 / 17185
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_159(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4333 / 17203
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
	if (((Function_160(iParam0) != 19 || Function_160(iParam0) != 17) || Function_160(iParam0) != 10) || Function_160(iParam0) != 9)
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

int Function_160(int iParam0) //Position: 0x4463 / 17507
{
	return Global_35278[iParam020].f_48;
}

float Function_161(int iParam0) //Position: 0x4472 / 17522
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_162(int iParam0) //Position: 0x44AB / 17579
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_163(int iParam0) //Position: 0x44E8 / 17640
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

int Function_164(int iParam0, bool bParam1, bool bParam2) //Position: 0x4682 / 18050
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

int Function_165(bool bParam0) //Position: 0x48C6 / 18630
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_166() //Position: 0x4907 / 18695
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
		iVar2 = ((Function_165((50 + iVar3) + 15) + Function_165((183 + iVar3) + 15)) + Function_165((90 + iVar3) + 15));
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
	Function_151(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_167() //Position: 0x4990 / 18832
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
			iVar2 = ((Function_165((50 + iVar3) + 8) + Function_165((183 + iVar3) + 8)) + Function_165((90 + iVar3) + 8));
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
	Function_151(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_168() //Position: 0x4A27 / 18983
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
		iVar2 = ((Function_165((50 + iVar3)) + Function_165((183 + iVar3))) + Function_165((90 + iVar3)));
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
	Function_151(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_169() //Position: 0x4AA6 / 19110
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_170(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_151(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_170(int iParam0, bool bParam1, int iParam2) //Position: 0x4ADF / 19167
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
	Function_164(iParam0, bParam1, 1);
	Function_163(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_152(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_171(int iParam0) //Position: 0x4CE9 / 19689
{
	Function_23(&Global_79338, iParam0);
	return;
}

void Function_172(int iParam0) //Position: 0x4CF8 / 19704
{
	Function_173(&Global_79338, iParam0);
	return;
}

void Function_173(var uParam0, int iParam1) //Position: 0x4D07 / 19719
{
	Function_13(uParam0, iParam1);
	return;
}

void Function_174(var uParam0, int iParam1) //Position: 0x4D14 / 19732
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

void Function_175(bool bParam0) //Position: 0x4D56 / 19798
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_176();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_143();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_12(&Global_63095, 1);
		Function_12(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_176() //Position: 0x4DA7 / 19879
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_186())
	{
		Function_183(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_183(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_178(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_178(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_177(StackVal, StackVal, vVar0))
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

bool Function_177(vector3 vParam0) //Position: 0x4E62 / 20066
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_178(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4E7A / 20090
{
	int iVar0;
	
	iVar0 = Function_181(uParam2, uParam3);
	if (Function_180(iVar0))
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
	Function_179();
	return StackVal, StackVal, Function_179();
}

vector3 Function_179() //Position: 0x4F61 / 20321
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_180(int iParam0) //Position: 0x4F6A / 20330
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_181(bool bParam0, bool bParam1) //Position: 0x4F80 / 20352
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
				fVar2 = Function_182(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_182(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_180(bVar0) && !bParam1)
	{
		bVar0 = Function_181(bParam0, 1);
	}
	return bVar0;
}

float Function_182(vector3 vParam0, vector3 vParam3) //Position: 0x5047 / 20551
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_183(var uParam0, int iParam1) //Position: 0x5064 / 20580
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_185(Global_34573, &vVar4);
	if (!Function_184(Global_30640[0]))
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
	if (!Function_184(Global_30640[2]))
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
	if (!Function_184(Global_30640[1]))
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
	if (!Function_184(Global_30658[1]))
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
	if (!Function_184(Global_30658[3]))
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
	if (!Function_184(Global_30658[2]))
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
	if (!Function_184(Global_30658[4]))
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
	if (!Function_184(Global_30668[0]))
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
	if (!Function_184(Global_30668[1]))
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
	if (!Function_184(Global_30668[2]))
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
	if (!Function_184(Global_30679[0]))
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
	if (!Function_184(Global_30685[0]))
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
	if (!Function_184(Global_30685[1]))
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
	if (!Function_184(Global_30685[2]))
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
	if (!Function_184(Global_30693[0]))
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
	if (!Function_184(Global_30693[1]))
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
	if (!Function_184(Global_30693[2]))
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
	if (!Function_184(Global_30707[2]))
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
	if (!Function_184(Global_30707[3]))
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
	if (!Function_184(Global_30707[0]))
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
	if (!Function_184(Global_30717[0]))
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
	if (!Function_184(Global_30723[2]))
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
	if (!Function_184(Global_30723[1]))
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
	if (!Function_184(Global_30723[0]))
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
	if (!Function_184(Global_30679[1]))
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
	if (!Function_184(Global_30707[1]))
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
	if (Function_177(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_184(int iParam0) //Position: 0x5889 / 22665
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_15(uVar0, 0x1000000) || Function_15(uVar0, 0x2000000)) || Function_15(uVar0, 0x4000000)) || !Function_15(uVar0, 0x10000000));
}

void Function_185(bool bParam0, int iParam1) //Position: 0x58C4 / 22724
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_186() //Position: 0x58D1 / 22737
{
	if (Function_15(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_187(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x58EC / 22764
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

void Function_188(int iParam0, int iParam1) //Position: 0x5990 / 22928
{
	Function_12(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_189(bool bParam0, bool bParam1, bool bParam2) //Position: 0x59A4 / 22948
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_83();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_193(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_192(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_191(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_190(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_193(), iVar1 + 1);
	return;
}

struct<16> Function_190(int iParam0) //Position: 0x5A16 / 23062
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_191(int iParam0) //Position: 0x5A37 / 23095
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_192(int iParam0) //Position: 0x5A58 / 23128
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_193() //Position: 0x5A79 / 23161
{
	return "CQueue_Count";
}

void Function_194(bool bParam0, bool bParam1) //Position: 0x5A8E / 23182
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_139();
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

void Function_195(var uParam0, bool bParam1, bool bParam2) //Position: 0x5BDA / 23514
{
	Function_194(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_127(*uParam0), 1.0f, 0, 0);
	Function_196(*uParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_189(&Global_50170[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_141();
	return;
}

void Function_196(int iParam0, int iParam1) //Position: 0x5C3F / 23615
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_136(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_127(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_135(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_126(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_132(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_127(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_127(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_127(iParam0), 1.0f, 0, 0);
	}
	return;
}

float Function_197(int iParam0) //Position: 0x5CC1 / 23745
{
	return Global_50170[iParam022].f_12;
}

void Function_198(var uParam0, bool bParam1, bool bParam2) //Position: 0x5CD0 / 23760
{
	Function_137(*uParam0);
	if (!Function_125(*uParam0, 2))
	{
		Function_130(*uParam0, bParam1, CEIL(bParam2), 0);
		Function_131(*uParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_127(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_199(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0x5D0D / 23821
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_197(230);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3))
					{
						if (!Function_45(Param3) && Param3.f_12 != 29)
						{
							if (Function_112(Param3.f_40, 1048576))
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
					Function_201(230, 150, Function_202(), 4294967295);
					Function_116(6007);
					Function_116(6008);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_200(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_123(230, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_200(var uParam0, bool bParam1, int iParam2) //Position: 0x5DCF / 24015
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(iParam2));
	return;
}

void Function_201(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x5DE7 / 24039
{
	Function_194(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_127(iParam0), 1.0f, 0, 0);
	Function_196(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_116(iParam3);
	}
	Function_189(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_141();
}

bool Function_202() //Position: 0x5E4D / 24141
{
	return "MP_TrickShot_Icon_128";
}

void Function_203(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0x5E6B / 24171
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_197(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 1)
				{
					Function_204(231, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 3, 100, Function_205(), 4294967295);
					*uParam2 = 0.0f;
					bVar0 = false;
					Function_116(6006);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_200(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_123(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_197(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 3)
				{
					Function_201(231, 100, Function_205(), 4294967295);
					Function_116(6003);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_200(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_123(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_204(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, int iParam12) //Position: 0x5F93 / 24467
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_126(uParam0) };
	Function_189(&Var0, uParam7, bParam11);
	*uParam1 = uParam2;
	*uParam3 = uParam4;
	Function_200(&uParam5, uParam8, uParam9);
	Function_123(uParam0, uParam5, uParam6, uParam8, 4294967295, 4294967295);
	Function_130(uParam0, uParam9, uParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_116(iParam12);
	}
	Function_188(uParam0, 4);
	Function_141();
}

var Function_205() //Position: 0x6009 / 24585
{
	return "MP_Revenge_Icon_128";
}

int Function_206() //Position: 0x6025 / 24613
{
	return Global_79349.f_16;
}

bool Function_207() //Position: 0x6031 / 24625
{
	if (Function_111(2048))
	{
		if ((IntToFloat(ABS(CEIL(GET_CURRENT_UNWARPED_TIME()))) - Global_78617.f_56) >= 3.0f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void Function_208(int iParam0, int iParam1) //Position: 0x605B / 24667
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_209(int iParam0, int iParam1) //Position: 0x6069 / 24681
{
	(iParam0 + 228)->f_220 = 0;
	Function_13(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_210(int iParam0) //Position: 0x6081 / 24705
{
	iParam0->f_844 = 0;
	return;
}

void Function_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x608D / 24717
{
	Function_212(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_212(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x60A5 / 24741
{
	Function_213(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_213(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x60BC / 24764
{
	if (!Function_215(iParam1))
	{
		return;
	}
	Function_214(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_214(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x60DF / 24799
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

bool Function_215(int iParam0) //Position: 0x6109 / 24841
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_216(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x6119 / 24857
{
	Function_217(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_217(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x6131 / 24881
{
	Function_213(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_218(int iParam0, bool bParam1) //Position: 0x6146 / 24902
{
	Function_222(iParam0);
	Function_222(iParam0 + 228);
	if (bParam1)
	{
		Function_219(iParam0);
	}
	return;
}

void Function_219(int iParam0) //Position: 0x6162 / 24930
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_220(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_220(var uParam0, int iParam1) //Position: 0x6182 / 24962
{
	Function_221(uParam0, iParam1, 0);
	return;
}

void Function_221(int iParam0, int iParam1, int iParam2) //Position: 0x6190 / 24976
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_222(int iParam0) //Position: 0x61A1 / 24993
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_224(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_223(iParam0, 0.0f);
	return;
}

void Function_223(var uParam0, int iParam1) //Position: 0x61CE / 25038
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_224(int iParam0) //Position: 0x61DA / 25050
{
	Function_214(iParam0, 4294967295, 0, 1);
	return;
}

void Function_225(bool bParam0) //Position: 0x61E8 / 25064
{
	DECOR_SET_OBJECT(Function_226(), "LobbyGringoSet", bParam0);
	return;
}

var Function_226() //Position: 0x6208 / 25096
{
	return Global_83591.f_140;
}

bool Function_227(int iParam0) //Position: 0x6214 / 25108
{
	Function_230(iParam0);
	if (Function_229())
	{
		Function_209(&Global_83591 + 276, 2);
	}
	Function_228();
	vLocal_48 = { StackVal, StackVal, Function_228() };
	return 1;
}

vector3 Function_228() //Position: 0x6238 / 25144
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_226();
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

bool Function_229() //Position: 0x6280 / 25216
{
	return Function_15(Global_79962, 1024);
}

void Function_230(int iParam0) //Position: 0x6290 / 25232
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_231(int iParam0) //Position: 0x629E / 25246
{
	if (!Function_20(iParam0))
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

void Function_232(bool bParam0) //Position: 0x62CD / 25293
{
	Function_173(&Global_79336, bParam0);
	if ((bParam0 && 512) != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_233(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x6326 / 25382
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

void Function_234() //Position: 0x63B6 / 25526
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	Function_235(4, 1);
	uVar0 = uVar0;
	Local_51 = CREATE_LAYOUT("CTF_W2_layout");
	Local_51.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_51, "playablespace", 2, -3702.739f, 49.94859f, 4633.615f, 0.0f, 24.83929f, 0.0f, 603.6339f, 149.7752f, 603.6339f);
	Local_51.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_A", 3, -3582.445f, 5.784747f, 4615.312f, 0.0f, -34.61969f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_51, "CapVol_B", 3, -3837.914f, 5.863094f, 4734.273f, 0.0f, 130.7476f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A0", 3, -3563.028f, 7.988969f, 4564.0f, 0.3014119f, 47.7487f, 3.224498f, 1.0f, 1.0f, 1.0f);
	Local_51.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A1", 3, -3589.863f, 9.684847f, 4642.542f, 178.5945f, 120.5396f, 179.2942f, 1.0f, 1.0f, 1.0f);
	Local_51.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A2", 3, -3659.007f, 7.028153f, 4605.45f, 0.0f, 208.2237f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A3", 3, -3575.872f, 13.56233f, 4720.535f, 0.0f, 261.368f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A4", 3, -3719.804f, 5.912538f, 4577.782f, 0.0f, -32.62962f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A5", 3, -3629.78f, 6.410118f, 4618.109f, 0.0f, 152.7271f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A6", 3, -3671.259f, 7.964409f, 4715.727f, 0.0f, -148.5832f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_A7", 3, -3699.737f, 9.194736f, 4735.093f, -0.3070175f, -131.3081f, 3.232015f, 1.0f, 1.0f, 1.0f);
	Local_51.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B0", 3, -3853.427f, 16.76861f, 4752.067f, 0.0f, 77.88136f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B1", 3, -3828.619f, 7.649792f, 4761.439f, 0.0f, -316.7189f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B2", 3, -3790.192f, 8.336721f, 4678.052f, 0.0f, 175.5779f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B3", 3, -3746.401f, 11.6509f, 4843.261f, 0.0f, -149.3521f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B4", 3, -3792.75f, 6.2948f, 4595.899f, 0.0f, 96.81203f, 0.0f, 1.0f, 1.835308f, 1.0f);
	Local_51.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B5", 3, -3845.084f, 7.027462f, 4670.852f, 0.0f, 86.43288f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B6", 3, -3753.213f, 6.662662f, 4684.305f, 0.0f, 155.2349f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_51.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_51, "T_SpawnVol_B7", 3, -3710.684f, 8.720448f, 4787.116f, 0.0f, 224.7141f, 0.0f, 1.0f, 1.0f, 1.0f);
	*(&Local_51 + 156) = { -3786.832f, 5.773551f, 4558.764f };
	*(&Local_51 + 156 + 12) = { 0.0f, 246.9462f, 0.0f };
	Local_51.f_180 = CREATE_POINT_IN_LAYOUT(Local_51, "LobbyCenter", -3786.832f, 5.773551f, 4558.764f, 0.0f, 246.9462f, 0.0f);
	*(&Local_51 + 184) = { -3779.341f, 5.773549f, 4555.241f };
	*(&Local_51 + 184 + 12) = { 0.0f, 145.0999f, 0.0f };
	Local_51.f_208 = CREATE_POINT_IN_LAYOUT(Local_51, "Showdown_A", -3779.341f, 5.773549f, 4555.241f, 0.0f, 145.0999f, 0.0f);
	*(&Local_51 + 212) = { -3782.425f, 5.773551f, 4558.707f };
	*(&Local_51 + 212 + 12) = { 0.0f, -47.49748f, 0.0f };
	Local_51.f_236 = CREATE_POINT_IN_LAYOUT(Local_51, "Showdown_B", -3782.425f, 5.773551f, 4558.707f, 0.0f, -47.49748f, 0.0f);
	*(&Local_51 + 240) = { -3783.447f, 5.773551f, 4560.101f };
	*(&Local_51 + 240 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_264 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_0", -3783.447f, 5.773551f, 4560.101f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 268) = { -3750.798f, 6.328017f, 4597.19f };
	*(&Local_51 + 268 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_292 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_1", -3750.798f, 6.328017f, 4597.19f, 0.0f, 0.0f, 0.0f);
	*(&Local_51 + 296) = { -3667.297f, 8.436275f, 4734.858f };
	*(&Local_51 + 296 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_51.f_320 = CREATE_POINT_IN_LAYOUT(Local_51, "FlagSpawn_2", -3667.297f, 8.436275f, 4734.858f, 0.0f, 0.0f, 0.0f);
	Local_51.f_324 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_51, 8, 0);
	*(&Local_51 + 328[06]) = { -3775.978f, 6.063649f, 4561.688f };
	*(&Local_51 + 328[06] + 12) = { 0.0f, 228.9727f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_P1", -3775.978f, 6.063649f, 4561.688f, 0.0f, 228.9727f, 0.0f);
	DECOR_SET_INT(bVar1, "type", true);
	DECOR_SET_INT(bVar1, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_51.f_324);
	*(&Local_51 + 328[16]) = { -3726.553f, 6.231258f, 4650.489f };
	*(&Local_51 + 328[16] + 12) = { 0.0f, 291.9199f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_P2", -3726.553f, 6.231258f, 4650.489f, 0.0f, 291.9199f, 0.0f);
	DECOR_SET_INT(bVar2, "type", true);
	DECOR_SET_INT(bVar2, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_51.f_324);
	*(&Local_51 + 328[26]) = { -3720.232f, 7.195164f, 4717.392f };
	*(&Local_51 + 328[26] + 12) = { 0.0f, 123.8754f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_P3", -3720.232f, 7.195164f, 4717.392f, 0.0f, 123.8754f, 0.0f);
	DECOR_SET_INT(bVar3, "type", true);
	DECOR_SET_INT(bVar3, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_51.f_324);
	*(&Local_51 + 328[36]) = { -3671.576f, 9.287254f, 4738.417f };
	*(&Local_51 + 328[36] + 12) = { 0.0f, 62.33342f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_R1", -3671.576f, 9.287254f, 4738.417f, 0.0f, 62.33342f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_51.f_324);
	*(&Local_51 + 328[46]) = { -3749.809f, 9.38159f, 4795.813f };
	*(&Local_51 + 328[46] + 12) = { 0.0f, 218.1758f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_R2", -3749.809f, 9.38159f, 4795.813f, 0.0f, 218.1758f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_51.f_324);
	*(&Local_51 + 328[56]) = { -3746.976f, 6.31923f, 4689.417f };
	*(&Local_51 + 328[56] + 12) = { 6.790278f, 190.7715f, -1.274822f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_51, "nPickup_A1", -3746.976f, 6.31923f, 4689.417f, 6.790278f, 190.7715f, -1.274822f);
	DECOR_SET_INT(bVar6, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_51.f_324);
	Local_51.f_476 = CREATE_OBJECTSET_IN_LAYOUT(Function_95(), Local_51, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand", "smoking_stand", -3770.325f, 5.773548f, 4553.221f, 0.0f, 101.754f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand1", "smoking_stand", -3783.282f, 5.790231f, 4565.95f, 0.0f, 0.0f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand2", "smoking_stand", -3775.655f, 5.773549f, 4550.137f, 0.0f, -198.2947f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand3", "smoking_stand", -3786.323f, 5.77355f, 4561.387f, 0.0f, -24.98796f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "smoking_stand4", "smoking_stand", -3777.207f, 5.89212f, 4559.896f, 0.0f, 37.33065f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -3768.673f, 5.887156f, 4539.499f, 0.0f, 142.2834f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -3787.023f, 5.773549f, 4577.762f, 0.0f, -31.93291f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", -3760.665f, 5.7888f, 4549.963f, 0.0f, 91.3948f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", -3794.042f, 5.905992f, 4555.609f, 0.0f, 273.7831f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "sit_ground_smoke", "sit_ground_smoke", -3782.042f, 5.773551f, 4552.596f, 0.0f, -136.7172f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "sit_ground_smoke1", "sit_ground_smoke", -3787.88f, 5.95858f, 4555.741f, 0.0f, -109.192f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "Sit_Ground_Drink", "Sit_Ground_Drink", -3772.322f, 5.848002f, 4547.896f, 0.0f, -203.4646f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "Sit_Ground_Drink1", "Sit_Ground_Drink", -3787.508f, 5.834729f, 4568.207f, 0.0f, -1.973472f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "sit_ground_play_harmonica", "sit_ground_play_harmonica", -3776.648f, 5.77355f, 4556.145f, 0.0f, 80.0734f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "sit_ground_play_harmonica1", "sit_ground_play_harmonica", -3780.936f, 5.773551f, 4562.514f, 0.0f, -26.63447f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -3774.168f, 5.773549f, 4553.287f, 0.0f, 72.27363f, 0.0f), Local_51.f_476);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_51, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -3783.434f, 5.773551f, 4557.188f, 0.0f, -87.2289f, 0.0f), Local_51.f_476);
	return;
}

void Function_235(int iParam0, int iParam1) //Position: 0x71E9 / 29161
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

void Function_236() //Position: 0x7232 / 29234
{
	while (!IS_EXITFLAG_SET())
	{
		Function_30(4725, 3518);
		WAIT(0);
	}
	return;
}

bool Function_237() //Position: 0x724F / 29263
{
	return Function_238(2);
}

bool Function_238(int iParam0) //Position: 0x7259 / 29273
{
	return Function_15(StackVal, iParam0);
}

void Function_239() //Position: 0x726C / 29292
{
	if (Function_237())
	{
		return;
	}
	Function_249();
	Function_247(&bLocal_39, "MP_CTF", 10, 0);
	Function_247(&bLocal_39, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_241(&bLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_101();
	Function_240();
	return;
}

void Function_240() //Position: 0x72D0 / 29392
{
	while (!Function_238(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_241(int iParam0) //Position: 0x72EB / 29419
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_246();
	iVar1 = 0;
	if (!Function_7(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_245(iParam0[iVar03], 8);
		}
		else if (Function_244())
		{
			iVar1 = 1;
			Function_245(iParam0[iVar03], 8);
		}
		Function_245(iParam0[iVar03], 16);
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
				Function_245(iParam0[iVar03], 1);
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
							Function_245(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_245(iParam0[iVar03], 2);
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
							Function_245(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_245(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_245(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_245(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_245(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_245(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_245(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_245(iParam0[iVar03], 2);
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
	Function_242();
	return 1;
}

void Function_242() //Position: 0x7666 / 30310
{
	if (!Function_243(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_243(int iParam0) //Position: 0x76A6 / 30374
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_244() //Position: 0x76C2 / 30402
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

void Function_245(var uParam0, int iParam1) //Position: 0x76ED / 30445
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_246() //Position: 0x76FE / 30462
{
	if (!Function_243(128))
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

var Function_247(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x7740 / 30528
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_248(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_245(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_248(var uParam0, int iParam1, int iParam2) //Position: 0x7778 / 30584
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_7(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_245(uParam0[iVar03], 4);
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

void Function_249() //Position: 0x783C / 30780
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

