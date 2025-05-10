//Decompiled with MagicRDR v1.0
//Function Count : 163
//Statics Count : 629
//Natives Count : 180
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
	struct<1253> Local_139 = { 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
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
	Function_160();
	if (Function_159())
	{
		Function_158();
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
		Function_111(0, 15);
		iVar0 = 10;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_110(64))
			{
				iVar0 = (iVar0 - 1);
				if (iVar0 <= 0)
				{
					Function_109(64, 0);
					Function_107();
					iVar0 = 10;
				}
			}
			Function_91(&iLocal_600, 0.2f, 0.7f, 12, 0.0f, 1.0f, 0.0f, 1.0f);
			Function_78(&uLocal_453);
			Function_17();
			WAIT(0);
		}
	}
	Function_15(&uLocal_453);
	Function_6();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xC7 / 199
{
	Function_2(&Local_139 + 4);
	RELEASE_LAYOUT_REF(Local_139);
	return;
}

void Function_2(int iParam0) //Position: 0xD9 / 217
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

void Function_3(var uParam0, int iParam1) //Position: 0xFF / 255
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

void Function_4(var uParam0, int iParam1) //Position: 0x22D / 557
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0x247 / 583
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0x264 / 612
{
	Function_14();
	Function_2(&bLocal_39);
	Function_7();
	return;
}

void Function_7() //Position: 0x275 / 629
{
	Function_8();
	return;
}

void Function_8() //Position: 0x27E / 638
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

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x387 / 903
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

void Function_10(var uParam0, int iParam1) //Position: 0x3AF / 943
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x3C2 / 962
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_12(bool bParam0) //Position: 0x3D1 / 977
{
	return Function_13(Global_76905.f_132, bParam0);
}

bool Function_13(var uParam0, bool bParam1) //Position: 0x3E2 / 994
{
	return (uParam0 && bParam1) == 0;
}

void Function_14() //Position: 0x3EF / 1007
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_15(int iParam0) //Position: 0x42E / 1070
{
	Function_109(64, 0);
	Function_16(iParam0);
	return;
}

void Function_16(int iParam0) //Position: 0x43F / 1087
{
	if (iParam0->f_580 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_580, 0);
		iParam0->f_580 = "";
	}
	return;
}

void Function_17() //Position: 0x45F / 1119
{
	Function_76();
	if (Function_75(1, 1))
	{
		Function_59(StackVal, StackVal, 6410, vLocal_48, 1, 6297);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_54(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_20(4334, 3324);
		Function_18();
	}
	return;
}

void Function_18() //Position: 0x4AA / 1194
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_19(&Local_12);
	}
	return;
}

void Function_19(int iParam0) //Position: 0x4C6 / 1222
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

void Function_20(int iParam0, int iParam1) //Position: 0x4EC / 1260
{
	Function_21(iParam0, iParam1, 3317);
	return;
}

void Function_21(var uParam0, var uParam1, int iParam2) //Position: 0x4FD / 1277
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

void Function_22(var uParam0, var uParam1, int iParam2) //Position: 0x696 / 1686
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

bool Function_23(bool bParam0, int iParam1, int iParam2) //Position: 0x80E / 2062
{
	var uVar0;
	
	return Function_24(bParam0, iParam1, &uVar0, iParam2);
}

int Function_24(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x81F / 2079
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

bool Function_25(bool bParam0, int iParam1, bool bParam2) //Position: 0x884 / 2180
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

var Function_26(int iParam0) //Position: 0x905 / 2309
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

bool Function_27(bool bParam0) //Position: 0xC1E / 3102
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

void Function_28(bool bParam0) //Position: 0xCBF / 3263
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_9(16384, 0, 1);
	return;
}

bool Function_29() //Position: 0xCD9 / 3289
{
	return Function_12(32768);
}

void Function_30() //Position: 0xCE6 / 3302
{
	Function_9(32768, 1, 0);
	return;
}

int Function_31() //Position: 0xCF5 / 3317
{
	return 1;
}

int Function_32(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xCFC / 3324
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

var Function_33() //Position: 0xDBD / 3517
{
	return (Function_12(4096) || Function_12(4));
}

void Function_34(bool bParam0, bool bParam1) //Position: 0xDCE / 3534
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

bool Function_35(bool bParam0, int iParam1, bool bParam2) //Position: 0xE01 / 3585
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

var Function_36(int iParam0) //Position: 0xE82 / 3714
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

var Function_37(int iParam0, bool bParam1) //Position: 0xF74 / 3956
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_38(int iParam0, bool bParam1) //Position: 0xF94 / 3988
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

int Function_39(int iParam0) //Position: 0x1002 / 4098
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_40(int iParam0, int iParam1, int iParam2) //Position: 0x101B / 4123
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_41(int iParam0) //Position: 0x1030 / 4144
{
	return Function_42(0, iParam0);
}

int Function_42(int iParam0, bool bParam1) //Position: 0x103C / 4156
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

var Function_43(int iParam0) //Position: 0x10A3 / 4259
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_44(bool bParam0) //Position: 0x10B3 / 4275
{
	return Function_38(12, bParam0);
}

int Function_45(int iParam0) //Position: 0x10C0 / 4288
{
	return Function_38(11, iParam0);
}

void Function_46(bool bParam0, int iParam1, char* cParam2) //Position: 0x10CD / 4301
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

int Function_47() //Position: 0x10EE / 4334
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

void Function_48() //Position: 0x1187 / 4487
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

bool Function_49(bool bParam0) //Position: 0x11C4 / 4548
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

void Function_50(bool bParam0) //Position: 0x1245 / 4677
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

struct<64> Function_51(int iParam0) //Position: 0x12CE / 4814
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_52(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x12E2 / 4834
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

int Function_53(bool bParam0, bool bParam1) //Position: 0x1327 / 4903
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

void Function_54(vector3 vParam0, float fParam3) //Position: 0x135B / 4955
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

int Function_55(bool bParam0) //Position: 0x140E / 5134
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

int Function_56(bool bParam0) //Position: 0x1449 / 5193
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

void Function_57(bool bParam0) //Position: 0x1497 / 5271
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_58() //Position: 0x14AA / 5290
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_59(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x14D9 / 5337
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_60(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 6196, 1, 125, 0, 0, 0);
	Function_60(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_60(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x155C / 5468
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_61(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_61(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x15A7 / 5543
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

var Function_62(float fParam0) //Position: 0x1826 / 6182
{
	return (fParam0 * 57.29578f);
}

var Function_63(int iParam0, var uParam1) //Position: 0x1834 / 6196
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

var Function_64(int iParam0, var uParam1) //Position: 0x1899 / 6297
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_mul_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_65() //Position: 0x190A / 6410
{
	int iVar0;
	
	iVar0 = Function_71(Global_83591.f_140, &vLocal_48, 0.0f, &Global_83591 + 276, 1);
	Function_66(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_66(bool bParam0, int iParam1) //Position: 0x1937 / 6455
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

bool Function_67(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1A46 / 6726
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

bool Function_68(int iParam0) //Position: 0x1B6D / 7021
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_69(bool bParam0, int iParam1) //Position: 0x1B7F / 7039
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

var Function_70() //Position: 0x1BDB / 7131
{
	int iVar0;
	
	return iVar0;
}

var Function_71(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1BE3 / 7139
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

bool Function_72(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1CD1 / 7377
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

var Function_73(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1E62 / 7778
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

var Function_74() //Position: 0x1ECE / 7886
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_75(bool bParam0, bool bParam1) //Position: 0x1EF5 / 7925
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_76() //Position: 0x1F15 / 7957
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

void Function_77(char* cParam0, int iParam1) //Position: 0x1FAA / 8106
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

int Function_78(int iParam0) //Position: 0x2041 / 8257
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
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_DOOR_MUTE", iParam0 + 580);
			}
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_576)
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
			if (StackVal > iParam0->f_576)
			{
				iParam0->f_8 = 0;
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_576)
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
			if (StackVal > iParam0->f_576)
			{
				iParam0->f_584 = GET_CURRENT_GAME_TIME();
				iParam0->f_8 = 0;
				iParam0->f_4 = 3;
			}
			break;
		
		case 0x00000003:
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_584) < 3.0f)
			{
				iParam0->f_4 = 4;
				Function_16(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_79(3, iParam0->f_576))
			{
				if (iParam0->f_576 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_576);
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

int Function_79(int iParam0, int iParam1) //Position: 0x23C8 / 9160
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_80(bool bParam0, bool bParam1) //Position: 0x23DA / 9178
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

void Function_81(bool bParam0, bool bParam1) //Position: 0x242E / 9262
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

int Function_82(var uParam0, var uParam1, int iParam2) //Position: 0x247F / 9343
{
	return Function_83(Global_29006, uParam0, uParam1, iParam2);
}

int Function_83(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x2491 / 9361
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

bool Function_84(int iParam0) //Position: 0x252D / 9517
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_85() //Position: 0x2543 / 9539
{
	return !Function_86();
}

bool Function_86() //Position: 0x254D / 9549
{
	if (Function_88())
	{
		return (Function_87() != 1 || Function_87() != 0);
	}
	return 0;
}

int Function_87() //Position: 0x2566 / 9574
{
	return Global_79349.f_16;
}

bool Function_88() //Position: 0x2572 / 9586
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_89(int iParam0) //Position: 0x257B / 9595
{
	if (!Function_84(iParam0))
	{
		return 1;
	}
	return Function_90(&(Global_29008[iParam0]), 4);
}

int Function_90(var uParam0, bool bParam1) //Position: 0x2597 / 9623
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_91(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x25B3 / 9651
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

void Function_92(int iParam0, var uParam1, int iParam2) //Position: 0x2656 / 9814
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

void Function_93(int iParam0) //Position: 0x267B / 9851
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_94(int iParam0) //Position: 0x2690 / 9872
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_95(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x26A5 / 9893
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

void Function_96(int iParam0, bool bParam1, bool bParam2) //Position: 0x2717 / 10007
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

void Function_97() //Position: 0x2890 / 10384
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_98(bool bParam0) //Position: 0x289C / 10396
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

void Function_99(int iParam0, int iParam1) //Position: 0x28E2 / 10466
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_100(iParam0);
	Function_98(iVar0);
	PRINTNL();
	Function_96(iParam0, iVar0, iParam1);
	return;
}

void Function_100(int iParam0) //Position: 0x2907 / 10503
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

float Function_101(int iParam0) //Position: 0x294D / 10573
{
	return -Function_102(iParam0);
}

float Function_102(int iParam0) //Position: 0x2959 / 10585
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

void Function_103() //Position: 0x2A2A / 10794
{
	if (!Function_106())
	{
	}
	return;
}

bool Function_104(int iParam0) //Position: 0x2A37 / 10807
{
	return Function_13(*iParam0, 2);
}

bool Function_105(int iParam0) //Position: 0x2A44 / 10820
{
	return Function_13(*iParam0, 1);
}

bool Function_106() //Position: 0x2A51 / 10833
{
	return NET_IS_IN_SESSION();
}

void Function_107() //Position: 0x2A5A / 10842
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_70());
	Function_108(bVar0, "glass", Local_139.f_152);
	Function_108(bVar0, "package", Local_139.f_152);
	Function_108(bVar0, "nlantern05", Local_139.f_152);
	Function_108(bVar0, "p_gen_bucket02x", Local_139.f_152);
	Function_108(bVar0, "potclay", Local_139.f_152);
	Function_108(bVar0, "nwoodboard", Local_139.f_152);
	Function_108(bVar0, "lumber07", Local_139.f_152);
	Function_108(bVar0, "p_gen_chair02x", Local_139.f_152);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_108(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2B17 / 11031
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

void Function_109(int iParam0, bool bParam1) //Position: 0x2B70 / 11120
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

bool Function_110(int iParam0) //Position: 0x2B98 / 11160
{
	return Function_13(StackVal, iParam0);
}

void Function_111(int iParam0, int iParam1) //Position: 0x2BAB / 11179
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

void Function_112(bool bParam0) //Position: 0x2BCC / 11212
{
	Function_109(16, bParam0);
	return;
}

void Function_113(var uParam0) //Position: 0x2BD9 / 11225
{
	Function_109(8, uParam0);
	return;
}

bool Function_114() //Position: 0x2BE6 / 11238
{
	bool bVar0;
	
	Function_157(&iLocal_600, 0, 9, 30, 0, 0, 1);
	Function_157(&iLocal_600, 1, 9, 30, 1, 1, 0);
	Function_157(&iLocal_600, 2, 12, 0, 2, 2, 2);
	Function_157(&iLocal_600, 3, 12, 0, 0, 0, 1);
	Function_157(&iLocal_600, 4, 23, 0, 4, 4, 4);
	Function_154(&iLocal_600);
	while (!IS_EXITFLAG_SET() && !Function_145())
	{
		WAIT(0);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_142();
	NET_OBJECT_REPLICATION_MODE_END(17);
	if (!Function_138(Local_139))
	{
		return 0;
	}
	bVar0 = CREATE_WORLD_SECTOR(Local_139, "lashermanas");
	while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar0))
	{
		WAIT(0);
	}
	Function_136(Local_139.f_1252);
	Function_135("MEX_SONG_07", "MEX_SONG_06", 0, 58, 58, 1);
	Function_128(&Global_83591 + 276, 0);
	Function_126(&Global_83591, 1, 22, 1, 1);
	Function_126(&Global_83591, 2, 5, 10, 1);
	Function_126(&Global_83591, 3, 18, 10, 1);
	Function_121(&Global_83591, 1, 23, 4, 1);
	Function_121(&Global_83591, 2, 6, 10, 1);
	Function_121(&Global_83591, 3, 16, 15, 1);
	Function_121(&Global_83591, 4, 13, 10, 1);
	Function_120(&Global_83591);
	Function_119(&Global_83591 + 276, 4);
	if (!Function_115(&uLocal_453))
	{
		return 0;
	}
	return 1;
}

bool Function_115(bool bParam0) //Position: 0x2D33 / 11571
{
	if (!Function_118(bParam0, Global_30693[1]))
	{
		return 0;
	}
	Function_116(bParam0, "LasHermanas", "walls01", 1, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "walls01", 2, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "walls01", 3, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "walls01", 4, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "walls01", 5, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "walls01", 6, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "residence01", 1, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "residence01", 3, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "residence01", 4, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "residence01", 9, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "church01", 1, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "church01", 2, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "church01", 5, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "storageRoom01", 1, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "storageRoom01", 2, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "storageRoom01", 3, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "storageRoom01", 7, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "storageRoom01", 8, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "storageRoom01", 9, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "prayerRoom01", 1, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "prayerRoom01", 2, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "prayerRoom01", 3, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "prayerRoom01", 4, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "prayerRoom01", 5, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "prayerRoom01", 9, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "prayerRoom01", 10, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "prayerRoom01", 11, 1, 0, 1, 1);
	Function_116(bParam0, "LasHermanas", "prayerRoom01", 12, 1, 0, 1, 1);
	return 1;
}

int Function_116(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x318A / 12682
{
	int iVar0;
	
	iVar0 = iParam0->f_576;
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

bool Function_117(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x31FB / 12795
{
	if (iParam0->f_576 > 28)
	{
		return 0;
	}
	(*iParam0 + 12)[iParam0->f_5765] = uParam1;
	(iParam0 + 12[iParam0->f_5765])->f_4 = uParam2;
	(iParam0 + 12[iParam0->f_5765])->f_8 = uParam3;
	(iParam0 + 12[iParam0->f_5765])->f_16 = 0;
	iParam0->f_576++;
	return 1;
}

bool Function_118(int iParam0, int iParam1) //Position: 0x3257 / 12887
{
	int iVar0;
	
	if (!Function_84(iParam1))
	{
		return 0;
	}
	*iParam0 = iParam1;
	iParam0->f_576 = 0;
	iParam0->f_4 = 0;
	iParam0->f_580 = "";
	iVar0 = 0;
	while (iVar0 <= 28)
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

void Function_119(int iParam0, int iParam1) //Position: 0x32CD / 13005
{
	(iParam0 + 228)->f_220 = 0;
	Function_11(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_120(int iParam0) //Position: 0x32E5 / 13029
{
	iParam0->f_844 = 0;
	return;
}

void Function_121(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x32F1 / 13041
{
	Function_122(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_122(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3309 / 13065
{
	Function_123(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_123(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3320 / 13088
{
	if (!Function_125(iParam1))
	{
		return;
	}
	Function_124(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_124(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3343 / 13123
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

bool Function_125(int iParam0) //Position: 0x336D / 13165
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_126(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x337D / 13181
{
	Function_127(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_127(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3395 / 13205
{
	Function_123(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_128(int iParam0, bool bParam1) //Position: 0x33AA / 13226
{
	Function_132(iParam0);
	Function_132(iParam0 + 228);
	if (bParam1)
	{
		Function_129(iParam0);
	}
	return;
}

void Function_129(int iParam0) //Position: 0x33C6 / 13254
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

void Function_130(var uParam0, int iParam1) //Position: 0x33E6 / 13286
{
	Function_131(uParam0, iParam1, 0);
	return;
}

void Function_131(int iParam0, int iParam1, int iParam2) //Position: 0x33F4 / 13300
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_132(int iParam0) //Position: 0x3405 / 13317
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

void Function_133(var uParam0, int iParam1) //Position: 0x3432 / 13362
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_134(bool bParam0) //Position: 0x343E / 13374
{
	Function_124(bParam0, 4294967295, 0, 1);
	return;
}

void Function_135(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x344C / 13388
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

void Function_136(bool bParam0) //Position: 0x34DC / 13532
{
	DECOR_SET_OBJECT(Function_137(), "LobbyGringoSet", bParam0);
	return;
}

var Function_137() //Position: 0x34FC / 13564
{
	return Global_83591.f_140;
}

bool Function_138(int iParam0) //Position: 0x3508 / 13576
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

vector3 Function_139() //Position: 0x352C / 13612
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_137();
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

bool Function_140() //Position: 0x3574 / 13684
{
	return Function_13(Global_79962, 1024);
}

void Function_141(var uParam0) //Position: 0x3584 / 13700
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_142() //Position: 0x3592 / 13714
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
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	
	Function_144(4, 1);
	uVar0 = uVar0;
	Local_139 = CREATE_LAYOUT("CTF_FFA_LSH_layout");
	Local_139.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_139, "v_clear_vol", 2, -1710.085f, 14.35435f, 4223.67f, 0.0f, 0.0f, 0.0f, 78.98049f, 23.32778f, 85.12809f);
	Local_139.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_139, "playablespace", 2, -1707.384f, 9.400227f, 4222.208f, 0.0f, 0.0f, 0.0f, 100.916f, 39.59418f, 125.564f);
	Local_139.f_184 = CREATE_VOLUME_SET_IN_LAYOUT(Local_139, "CapVols_set");
	(*&Local_139 + 160)[0] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_0", 3, -1697.27f, 11.26534f, 4246.774f, 0.0f, -0.8785349f, 0.0f, 1.152046f, 0.6977962f, 1.152046f);
	ADD_TO_VOLUME_SET(Local_139.f_184, (*&Local_139 + 160)[0]);
	(*&Local_139 + 160)[1] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_1", 3, -1700.246f, 8.404261f, 4186.525f, 0.0f, -3.688718f, 0.0f, 1.16104f, 1.16104f, 1.16104f);
	ADD_TO_VOLUME_SET(Local_139.f_184, (*&Local_139 + 160)[1]);
	(*&Local_139 + 160)[2] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_2", 3, -1713.203f, 11.28086f, 4211.807f, 0.0f, -87.11436f, 0.0f, 0.9186575f, 0.535036f, 0.9186575f);
	ADD_TO_VOLUME_SET(Local_139.f_184, (*&Local_139 + 160)[2]);
	(*&Local_139 + 160)[3] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_3", 3, -1715.015f, 11.30559f, 4187.881f, 0.0f, 181.2947f, 0.0f, 1.006183f, 0.4265874f, 1.006183f);
	ADD_TO_VOLUME_SET(Local_139.f_184, (*&Local_139 + 160)[3]);
	(*&Local_139 + 160)[4] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_4", 3, -1696.0f, 8.031362f, 4219.095f, 0.0f, -0.7392048f, 0.0f, 1.423515f, 1.152046f, 0.9489822f);
	ADD_TO_VOLUME_SET(Local_139.f_184, (*&Local_139 + 160)[4]);
	bVar1 = CREATE_VOLUME_SET_IN_LAYOUT(Local_139, "Interiors_set");
	bVar2 = CREATE_VOLUME_IN_LAYOUT(Local_139, "EntryWay", 2, -1699.97f, 12.08542f, 4256.247f, 0.0f, 0.0f, 0.0f, 10.54946f, 11.65664f, 23.29919f);
	ADD_TO_VOLUME_SET(bVar1, bVar2);
	bVar3 = CREATE_VOLUME_IN_LAYOUT(Local_139, "Hallway", 2, -1680.412f, 12.36983f, 4221.66f, 0.0f, 0.0f, 0.0f, 13.0421f, 2.429103f, 12.42961f);
	ADD_TO_VOLUME_SET(bVar1, bVar3);
	bVar4 = CREATE_VOLUME_SET_IN_LAYOUT(Local_139, "LowerWay_set");
	bVar5 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SL_LeftSide", 2, -1675.947f, 9.37984f, 4214.686f, 0.0f, 0.0f, 0.0f, 3.914234f, 2.777781f, 25.88705f);
	ADD_TO_VOLUME_SET(bVar4, bVar5);
	bVar6 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SL_RightSide", 2, -1680.307f, 9.450761f, 4225.891f, 0.0f, 0.0f, 0.0f, 12.05653f, 2.429103f, 2.790675f);
	ADD_TO_VOLUME_SET(bVar1, bVar4);
	ADD_TO_VOLUME_SET(bVar4, bVar6);
	bVar7 = CREATE_VOLUME_SET_IN_LAYOUT(Local_139, "UpperWay_set");
	bVar8 = CREATE_VOLUME_IN_LAYOUT(Local_139, "nInnerSide", 2, -1684.859f, 12.69418f, 4211.868f, 0.0f, 0.0f, 0.0f, 4.199785f, 2.895732f, 31.2463f);
	ADD_TO_VOLUME_SET(bVar7, bVar8);
	bVar9 = CREATE_VOLUME_IN_LAYOUT(Local_139, "WideRoom", 2, -1679.057f, 10.85612f, 4199.548f, 0.0f, 0.0f, 0.0f, 10.2355f, 5.919188f, 6.75903f);
	ADD_TO_VOLUME_SET(bVar1, bVar7);
	ADD_TO_VOLUME_SET(bVar7, bVar9);
	bVar10 = CREATE_VOLUME_SET_IN_LAYOUT(Local_139, "PrayerRoomOpen_set");
	bVar11 = CREATE_VOLUME_IN_LAYOUT(Local_139, "DiningHall", 2, -1725.818f, 10.66201f, 4219.919f, 0.0f, 0.0f, 0.0f, 21.41879f, 6.050751f, 7.358726f);
	ADD_TO_VOLUME_SET(bVar10, bVar11);
	bVar12 = CREATE_VOLUME_IN_LAYOUT(Local_139, "Study1", 2, -1723.8f, 12.40204f, 4219.048f, 0.0f, 0.0f, 0.0f, 23.76833f, 2.587381f, 8.949244f);
	ADD_TO_VOLUME_SET(bVar10, bVar12);
	bVar13 = CREATE_VOLUME_IN_LAYOUT(Local_139, "Study2", 2, -1731.205f, 10.68531f, 4213.898f, 0.0f, 0.0f, 0.0f, 9.957042f, 5.884945f, 10.42521f);
	ADD_TO_VOLUME_SET(bVar1, bVar10);
	ADD_TO_VOLUME_SET(bVar10, bVar13);
	bVar14 = CREATE_VOLUME_IN_LAYOUT(Local_139, "BackRoom", 2, -1721.644f, 9.298462f, 4211.368f, 0.0f, 0.0f, 0.0f, 9.158956f, 2.587381f, 5.343096f);
	ADD_TO_VOLUME_SET(bVar1, bVar14);
	bVar15 = CREATE_VOLUME_IN_LAYOUT(Local_139, "Bedroom", 2, -1720.718f, 12.43488f, 4212.421f, 0.0f, 0.0f, 0.0f, 18.21179f, 2.587381f, 8.141999f);
	ADD_TO_VOLUME_SET(bVar1, bVar15);
	bVar16 = CREATE_VOLUME_IN_LAYOUT(Local_139, "StoreRoom_Up", 2, -1727.526f, 12.14854f, 4185.827f, 0.0f, 0.0f, 0.0f, 17.28528f, 4.079237f, 7.35474f);
	ADD_TO_VOLUME_SET(bVar1, bVar16);
	bVar17 = CREATE_VOLUME_IN_LAYOUT(Local_139, "StoreRoom_Down", 2, -1728.145f, 9.200478f, 4185.827f, 0.0f, 0.0f, 0.0f, 16.22554f, 3.720672f, 7.35474f);
	ADD_TO_VOLUME_SET(bVar1, bVar17);
	bVar18 = CREATE_VOLUME_IN_LAYOUT(Local_139, "nMidCorner", 2, -1715.969f, 9.249637f, 4185.827f, 0.0f, 0.0f, 0.0f, 9.235511f, 3.720672f, 7.35474f);
	ADD_TO_VOLUME_SET(bVar1, bVar18);
	bVar19 = CREATE_VOLUME_IN_LAYOUT(Local_139, "Shed", 2, -1718.718f, 8.408038f, 4228.257f, 0.0f, 0.0f, 0.0f, 7.977721f, 3.720672f, 10.39654f);
	ADD_TO_VOLUME_SET(bVar1, bVar19);
	bVar20 = CREATE_VOLUME_IN_LAYOUT(Local_139, "Forgey_Area", 2, -1719.441f, 8.408038f, 4237.941f, 0.0f, 0.0f, 0.0f, 6.467454f, 3.27684f, 13.14615f);
	ADD_TO_VOLUME_SET(bVar1, bVar20);
	bVar21 = CREATE_VOLUME_IN_LAYOUT(Local_139, "nCourtyard", 2, -1685.345f, 9.205232f, 4248.322f, 0.0f, 0.0f, 0.0f, 11.30977f, 3.27684f, 11.12762f);
	ADD_TO_VOLUME_SET(bVar1, bVar21);
	bVar22 = CREATE_VOLUME_IN_LAYOUT(Local_139, "BackCorner", 2, -1718.526f, 8.408038f, 4249.233f, 0.0f, 0.0f, 0.0f, 8.361689f, 3.27684f, 8.924783f);
	ADD_TO_VOLUME_SET(bVar1, bVar22);
	bVar23 = CREATE_VOLUME_SET_IN_LAYOUT(Local_139, "Church_set");
	bVar24 = CREATE_VOLUME_IN_LAYOUT(Local_139, "MainHall", 2, -1700.0f, 9.519789f, 4188.94f, 0.0f, 0.0f, 0.0f, 13.7406f, 3.671357f, 15.46747f);
	ADD_TO_VOLUME_SET(bVar23, bVar24);
	bVar25 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SideRoom", 2, -1692.545f, 9.519789f, 4194.678f, 0.0f, 0.0f, 0.0f, 7.951605f, 3.671357f, 3.442291f);
	ADD_TO_VOLUME_SET(bVar23, bVar25);
	bVar26 = CREATE_VOLUME_IN_LAYOUT(Local_139, "Entrance", 2, -1699.775f, 9.519789f, 4200.067f, 0.0f, 0.0f, 0.0f, 7.800519f, 3.671357f, 15.46747f);
	ADD_TO_VOLUME_SET(bVar1, bVar23);
	ADD_TO_VOLUME_SET(bVar23, bVar26);
	Local_139.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_0", 2, -1678.539f, 11.23122f, 4250.337f, 0.0f, 178.8585f, 0.0f, 1.822228f, 1.0f, 6.190878f);
	Local_139.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_1", 3, -1742.453f, 9.28788f, 4187.162f, 0.0f, 89.27682f, 0.0f, 0.8521102f, 0.9324868f, 0.8521102f);
	Local_139.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_2", 3, -1721.454f, 11.23147f, 4252.247f, 0.0f, 165.303f, 0.0f, 0.7925131f, 0.8672681f, 0.7925131f);
	Local_139.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_3", 3, -1684.705f, 11.42213f, 4198.116f, 0.0f, 62.79824f, 0.0f, 0.8660001f, 0.9476869f, 0.8660001f);
	Function_143(Local_139.f_200, bVar7);
	Local_139.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_4", 3, -1733.83f, 8.205861f, 4220.664f, 0.0f, 123.1146f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	Function_143(Local_139.f_204, bVar10);
	Local_139.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_5", 3, -1709.49f, 11.72357f, 4186.356f, 0.0f, -37.71192f, 0.0f, 1.417508f, 0.3476295f, 1.448981f);
	Local_139.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_6", 3, -1698.603f, 8.07091f, 4258.942f, 0.0f, 193.7598f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	Function_143(Local_139.f_212, bVar2);
	Local_139.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_7", 3, -1686.876f, 8.106473f, 4199.681f, 0.0f, -13.78426f, 0.0f, 1.548491f, 0.8296183f, 1.486551f);
	Local_139.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_8", 3, -1743.21f, 9.287154f, 4209.956f, 0.0f, 182.4379f, 0.0f, 1.247992f, 0.9146472f, 1.308093f);
	Local_139.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_9", 3, -1678.546f, 11.23586f, 4231.047f, 0.0f, -1.422484f, 0.0f, 0.7064732f, 0.7731124f, 0.7064732f);
	Local_139.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_10", 3, -1720.699f, 8.031363f, 4237.964f, 0.0f, 88.53164f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	Function_143(Local_139.f_228, bVar20);
	Local_139.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_11", 3, -1707.741f, 17.41178f, 4199.205f, 0.0f, 92.53749f, 0.0f, 2.142498f, 0.9476869f, 2.344801f);
	Local_139.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_12", 3, -1709.057f, 11.63805f, 4193.896f, 0.0f, 223.4595f, 0.0f, 1.137298f, 0.3187335f, 1.319873f);
	Local_139.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_13", 3, -1697.034f, 12.00094f, 4258.991f, 0.0f, 268.5282f, 0.0f, 0.7381514f, 0.8077787f, 0.7381514f);
	Function_143(Local_139.f_240, bVar2);
	Local_139.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_14", 3, -1733.705f, 11.26626f, 4185.059f, 0.0f, 66.99979f, 0.0f, 1.3959f, 0.8198009f, 1.477618f);
	Function_143(Local_139.f_244, bVar16);
	Local_139.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_15", 3, -1717.947f, 8.031364f, 4184.902f, 0.0f, 8.687687f, 0.0f, 0.8660001f, 0.9476869f, 0.8660001f);
	Function_143(Local_139.f_248, bVar18);
	Local_139.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_16", 3, -1714.692f, 11.28081f, 4214.787f, 0.0f, 268.6968f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	Function_143(Local_139.f_252, bVar15);
	Local_139.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_17", 3, -1718.596f, 8.031358f, 4252.0f, 0.0f, 103.7526f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	Function_143(Local_139.f_256, bVar22);
	Local_139.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_18", 2, -1684.332f, 11.18858f, 4252.177f, 0.0f, 180.314f, 0.0f, 2.561617f, 1.0f, 2.112239f);
	Local_139.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_19", 3, -1700.025f, 13.77437f, 4251.741f, 0.0f, 196.705f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	Local_139.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_20", 3, -1706.325f, 11.04855f, 4252.162f, 0.0f, 180.0155f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	Local_139.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_21", 3, -1700.265f, 8.07091f, 4263.071f, 0.0f, 178.8806f, 0.0f, 1.36225f, 0.7527589f, 0.6878741f);
	Local_139.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_22", 3, -1719.515f, 11.55941f, 4237.99f, 0.0f, 91.37589f, 0.0f, 2.426219f, 0.9975055f, 1.850649f);
	Local_139.f_280 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_23", 3, -1721.484f, 11.24403f, 4224.455f, 0.0f, 52.11248f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	Local_139.f_284 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_24", 3, -1713.556f, 11.28081f, 4221.56f, 0.0f, 229.68f, 0.0f, 0.6383516f, 0.6985651f, 0.6383516f);
	Function_143(Local_139.f_284, bVar10);
	Local_139.f_288 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_25", 3, -1704.473f, 8.031363f, 4187.081f, 0.0f, 24.24234f, 0.0f, 1.503884f, 0.8581703f, 1.477348f);
	Function_143(Local_139.f_288, bVar23);
	Local_139.f_292 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_26", 3, -1684.0f, 8.031361f, 4252.0f, 0.0f, 218.1471f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	Function_143(Local_139.f_292, bVar21);
	Local_139.f_296 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_27", 3, -1707.261f, 8.03136f, 4252.0f, 0.0f, 178.4097f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	Local_139.f_300 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_28", 3, -1724.721f, 11.28081f, 4212.497f, 0.0f, 107.0706f, 0.0f, 0.7987055f, 0.8740447f, 0.7987055f);
	Function_143(Local_139.f_300, bVar15);
	Local_139.f_304 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_29", 3, -1734.643f, 11.28081f, 4212.792f, 0.0f, 142.8654f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	Function_143(Local_139.f_304, bVar10);
	Local_139.f_308 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_30", 3, -1734.126f, 14.16805f, 4221.208f, 0.0f, 122.5875f, 0.0f, 1.437195f, 0.7585974f, 1.542515f);
	Local_139.f_312 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_31", 3, -1693.02f, 13.16173f, 4186.859f, 0.0f, -1.187355f, 0.0f, 2.232815f, 0.7585974f, 2.638756f);
	Local_139.f_316 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_32", 3, -1676.258f, 8.338675f, 4225.855f, 0.0f, 232.4116f, 0.0f, 1.440719f, 0.9476869f, 0.937914f);
	Function_143(Local_139.f_316, bVar4);
	Local_139.f_320 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_33", 3, -1720.11f, 8.207294f, 4221.409f, 0.0f, 147.409f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	Local_139.f_324 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_34", 3, -1676.773f, 11.42063f, 4225.947f, 0.0f, 269.4992f, 0.0f, 1.255111f, 0.9476869f, 1.542937f);
	Function_143(Local_139.f_324, bVar3);
	Local_139.f_328 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_35", 3, -1724.771f, 8.207294f, 4212.745f, 0.0f, 98.75087f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	Function_143(Local_139.f_328, bVar14);
	Local_139.f_332 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_36", 3, -1734.352f, 8.176961f, 4187.887f, 0.0f, 131.0462f, 0.0f, 0.7268851f, 0.7954496f, 0.7268851f);
	Function_143(Local_139.f_332, bVar17);
	Local_139.f_336 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_37", 3, -1720.0f, 8.031363f, 4225.502f, 0.0f, 97.88023f, 0.0f, 0.9115245f, 0.9975055f, 0.9115245f);
	Function_143(Local_139.f_336, bVar19);
	Local_139.f_340 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_38", 3, -1739.959f, 7.300356f, 4206.479f, 0.0f, 90.09533f, 0.0f, 2.015636f, 0.9975055f, 1.09129f);
	Local_139.f_344 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_39", 3, -1738.095f, 7.33384f, 4191.57f, 0.0f, 66.99979f, 0.0f, 2.070623f, 0.9975055f, 2.015033f);
	Local_139.f_348 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_40", 2, -1690.174f, 11.18858f, 4250.331f, 0.0f, 193.1331f, 0.0f, 5.420168f, 1.0f, 5.962139f);
	Local_139.f_352 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_41", 2, -1742.776f, 9.619265f, 4191.415f, 76.12954f, 88.84176f, 76.63393f, 5.565413f, 1.0f, 1.168585f);
	Local_139.f_356 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_42", 2, -1742.812f, 9.698732f, 4198.682f, 76.12954f, 88.84176f, 76.63393f, 5.565413f, 1.0f, 1.168585f);
	Local_139.f_360 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_43", 2, -1742.843f, 9.604905f, 4205.212f, 76.12954f, 88.84176f, 76.63393f, 5.539093f, 1.0f, 1.168585f);
	*(&Local_139 + 364) = { -1690.626f, 8.031361f, 4219.943f };
	*(&Local_139 + 364 + 12) = { 0.0f, 178.3769f, 0.0f };
	Local_139.f_388 = CREATE_POINT_IN_LAYOUT(Local_139, "Showdown_A", -1690.626f, 8.031361f, 4219.943f, 0.0f, 178.3769f, 0.0f);
	*(&Local_139 + 392) = { -1698.625f, 8.031361f, 4220.057f };
	*(&Local_139 + 392 + 12) = { 0.0f, -0.8824908f, 0.0f };
	Local_139.f_416 = CREATE_POINT_IN_LAYOUT(Local_139, "Showdown_B", -1698.625f, 8.031361f, 4220.057f, 0.0f, -0.8824908f, 0.0f);
	*(&Local_139 + 420) = { -1700.065f, 8.097346f, 4243.729f };
	*(&Local_139 + 420 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_444 = CREATE_POINT_IN_LAYOUT(Local_139, "LobbyCenter", -1700.065f, 8.097346f, 4243.729f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_139.f_444, "narrow", true);
	*(&Local_139 + 448) = { -1700.065f, 8.097346f, 4237.099f };
	*(&Local_139 + 448 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_472 = CREATE_POINT_IN_LAYOUT(Local_139, "StandoffCenter", -1700.065f, 8.097346f, 4237.099f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_139.f_472, "narrow", true);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_0", -1742.92f, 9.358056f, 4198.526f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_1", -1725.584f, 8.213763f, 4186.416f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_2", -1729.127f, 8.073519f, 4201.202f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_3", -1726.161f, 8.207312f, 4217.839f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 476) = { -1714.889f, 11.08841f, 4252.221f };
	*(&Local_139 + 476 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_500 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_4", -1714.889f, 11.08841f, 4252.221f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 504) = { -1676.0f, 8.368969f, 4200.0f };
	*(&Local_139 + 504 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_528 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_5", -1676.0f, 8.368969f, 4200.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 532) = { -1684.945f, 11.4426f, 4223.551f };
	*(&Local_139 + 532 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_556 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_6", -1684.945f, 11.4426f, 4223.551f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 560) = { -1710.295f, 8.031364f, 4229.705f };
	*(&Local_139 + 560 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_584 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_7", -1710.295f, 8.031364f, 4229.705f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 588) = { -1710.113f, 8.031363f, 4241.887f };
	*(&Local_139 + 588 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_612 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_8", -1710.113f, 8.031363f, 4241.887f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 616) = { -1690.297f, 8.05931f, 4237.703f };
	*(&Local_139 + 616 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_640 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_9", -1690.297f, 8.05931f, 4237.703f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 644) = { -1689.807f, 8.103482f, 4220.0f };
	*(&Local_139 + 644 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_668 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_10", -1689.807f, 8.103482f, 4220.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 672) = { -1709.744f, 8.0917f, 4220.0f };
	*(&Local_139 + 672 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_696 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_11", -1709.744f, 8.0917f, 4220.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 700) = { -1712.0f, 8.092801f, 4206.578f };
	*(&Local_139 + 700 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_724 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_12", -1712.0f, 8.092801f, 4206.578f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 728) = { -1700.16f, 8.126415f, 4228.284f };
	*(&Local_139 + 728 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_752 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_13", -1700.16f, 8.126415f, 4228.284f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 756) = { -1740.0f, 7.361313f, 4194.115f };
	*(&Local_139 + 756 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_780 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_14", -1740.0f, 7.361313f, 4194.115f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 784) = { -1699.621f, 8.123296f, 4212.8f };
	*(&Local_139 + 784 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_808 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_15", -1699.621f, 8.123296f, 4212.8f, 0.0f, 0.0f, 0.0f);
	Local_139.f_812 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_139, 8, 0);
	*(&Local_139 + 816[06]) = { -1711.112f, 8.031361f, 4234.483f };
	*(&Local_139 + 816[06] + 12) = { 0.0f, -269.4959f, 0.0f };
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_D1", -1711.112f, 8.031361f, 4234.483f, 0.0f, -269.4959f, 0.0f);
	DECOR_SET_INT(bVar27, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_139.f_812);
	*(&Local_139 + 816[16]) = { -1716.813f, 8.113522f, 4199.153f };
	*(&Local_139 + 816[16] + 12) = { 0.0f, 92.05664f, 0.0f };
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_D2", -1716.813f, 8.113522f, 4199.153f, 0.0f, 92.05664f, 0.0f);
	DECOR_SET_INT(bVar28, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_139.f_812);
	*(&Local_139 + 816[26]) = { -1696.065f, 8.07365f, 4256.716f };
	*(&Local_139 + 816[26] + 12) = { 0.0f, -90.71091f, 0.0f };
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_S1", -1696.065f, 8.07365f, 4256.716f, 0.0f, -90.71091f, 0.0f);
	DECOR_SET_INT(bVar29, "type", true);
	DECOR_SET_INT(bVar29, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_139.f_812);
	*(&Local_139 + 816[36]) = { -1702.711f, 8.687581f, 4182.954f };
	*(&Local_139 + 816[36] + 12) = { 0.0f, -268.6439f, 0.0f };
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_S2", -1702.711f, 8.687581f, 4182.954f, 0.0f, -268.6439f, 0.0f);
	DECOR_SET_INT(bVar30, "type", true);
	DECOR_SET_INT(bVar30, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_139.f_812);
	*(&Local_139 + 816[46]) = { -1690.488f, 8.094166f, 4209.685f };
	*(&Local_139 + 816[46] + 12) = { 0.0f, 91.77116f, 0.0f };
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_B1", -1690.488f, 8.094166f, 4209.685f, 0.0f, 91.77116f, 0.0f);
	DECOR_SET_INT(bVar31, "type", true);
	DECOR_SET_INT(bVar31, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_139.f_812);
	*(&Local_139 + 816[56]) = { -1716.409f, 8.121264f, 4220.0f };
	*(&Local_139 + 816[56] + 12) = { 0.0f, 90.41861f, 0.0f };
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_B2", -1716.409f, 8.121264f, 4220.0f, 0.0f, 90.41861f, 0.0f);
	DECOR_SET_INT(bVar32, "type", true);
	DECOR_SET_INT(bVar32, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_139.f_812);
	*(&Local_139 + 816[66]) = { -1717.157f, 10.99509f, 4247.252f };
	*(&Local_139 + 816[66] + 12) = { 0.0f, 272.672f, 0.0f };
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R1", -1717.157f, 10.99509f, 4247.252f, 0.0f, 272.672f, 0.0f);
	DECOR_SET_INT(bVar33, "type", true);
	DECOR_SET_INT(bVar33, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_139.f_812);
	*(&Local_139 + 816[76]) = { -1687.109f, 11.26531f, 4250.066f };
	*(&Local_139 + 816[76] + 12) = { 0.0f, -162.6097f, 0.0f };
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R2", -1687.109f, 11.26531f, 4250.066f, 0.0f, -162.6097f, 0.0f);
	DECOR_SET_INT(bVar34, "type", true);
	DECOR_SET_INT(bVar34, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_139.f_812);
	*(&Local_139 + 816[86]) = { -1710.739f, 11.68981f, 4186.077f };
	*(&Local_139 + 816[86] + 12) = { 0.0f, 93.36578f, 0.0f };
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R3", -1710.739f, 11.68981f, 4186.077f, 0.0f, 93.36578f, 0.0f);
	DECOR_SET_INT(bVar35, "type", true);
	DECOR_SET_INT(bVar35, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_139.f_812);
	*(&Local_139 + 816[96]) = { -1705.435f, 8.031359f, 4251.998f };
	*(&Local_139 + 816[96] + 12) = { 0.0f, -89.47643f, 0.0f };
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P1", -1705.435f, 8.031359f, 4251.998f, 0.0f, -89.47643f, 0.0f);
	DECOR_SET_INT(bVar36, "type", true);
	DECOR_SET_INT(bVar36, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_139.f_812);
	*(&Local_139 + 816[106]) = { -1693.744f, 8.031359f, 4239.85f };
	*(&Local_139 + 816[106] + 12) = { 0.0f, 1.922261f, 0.0f };
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P2", -1693.744f, 8.031359f, 4239.85f, 0.0f, 1.922261f, 0.0f);
	DECOR_SET_INT(bVar37, "type", true);
	DECOR_SET_INT(bVar37, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_139.f_812);
	*(&Local_139 + 816[116]) = { -1705.091f, 8.031361f, 4217.768f };
	*(&Local_139 + 816[116] + 12) = { 0.0f, -179.4237f, 0.0f };
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P3", -1705.091f, 8.031361f, 4217.768f, 0.0f, -179.4237f, 0.0f);
	DECOR_SET_INT(bVar38, "type", true);
	DECOR_SET_INT(bVar38, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_139.f_812);
	*(&Local_139 + 816[126]) = { -1695.299f, 8.031363f, 4217.692f };
	*(&Local_139 + 816[126] + 12) = { 0.0f, 179.9423f, 0.0f };
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P4", -1695.299f, 8.031363f, 4217.692f, 0.0f, 179.9423f, 0.0f);
	DECOR_SET_INT(bVar39, "type", true);
	DECOR_SET_INT(bVar39, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_139.f_812);
	*(&Local_139 + 816[136]) = { -1685.443f, 8.338675f, 4218.018f };
	*(&Local_139 + 816[136] + 12) = { 0.0f, 89.29523f, 0.0f };
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P5", -1685.443f, 8.338675f, 4218.018f, 0.0f, 89.29523f, 0.0f);
	DECOR_SET_INT(bVar40, "type", true);
	DECOR_SET_INT(bVar40, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_139.f_812);
	*(&Local_139 + 816[146]) = { -1738.232f, 7.298687f, 4200.305f };
	*(&Local_139 + 816[146] + 12) = { 0.0f, -1.033852f, 0.0f };
	bVar41 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P6", -1738.232f, 7.298687f, 4200.305f, 0.0f, -1.033852f, 0.0f);
	DECOR_SET_INT(bVar41, "type", true);
	DECOR_SET_INT(bVar41, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar41, Local_139.f_812);
	*(&Local_139 + 816[156]) = { -1721.078f, 8.082561f, 4191.209f };
	*(&Local_139 + 816[156] + 12) = { 0.0f, 1.477968f, 0.0f };
	bVar42 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P7", -1721.078f, 8.082561f, 4191.209f, 0.0f, 1.477968f, 0.0f);
	DECOR_SET_INT(bVar42, "type", true);
	DECOR_SET_INT(bVar42, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar42, Local_139.f_812);
	*(&Local_139 + 816[166]) = { -1704.287f, 8.031361f, 4233.838f };
	*(&Local_139 + 816[166] + 12) = { 0.0f, -180.2904f, 0.0f };
	bVar43 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_A1", -1704.287f, 8.031361f, 4233.838f, 0.0f, -180.2904f, 0.0f);
	DECOR_SET_INT(bVar43, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar43, Local_139.f_812);
	*(&Local_139 + 816[176]) = { -1740.85f, 7.401089f, 4209.115f };
	*(&Local_139 + 816[176] + 12) = { 0.0f, 179.0599f, 0.0f };
	bVar44 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_A2", -1740.85f, 7.401089f, 4209.115f, 0.0f, 179.0599f, 0.0f);
	DECOR_SET_INT(bVar44, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar44, Local_139.f_812);
	Local_139.f_1252 = CREATE_OBJECTSET_IN_LAYOUT(Function_70(), Local_139, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand_loose", "smoking_stand_loose", -1701.095f, 8.071356f, 4239.305f, 0.0f, -6.861321f, 0.0f), Local_139.f_1252);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "Rand_Idle_NearWall_Shoulder_R", "Rand_Idle_NearWall_Shoulder_R", -1701.407f, 8.053353f, 4246.385f, 0.0f, -89.36221f, 0.0f), Local_139.f_1252);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand1", "smoking_stand", -1689.909f, 8.031363f, 4231.668f, 0.0f, 116.6206f, 0.0f), Local_139.f_1252);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "blacksmith", "blacksmith", -1719.863f, 8.030291f, 4232.398f, 0.0f, -181.2243f, 0.0f), Local_139.f_1252);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "sharpen_axe", "sharpen_axe", -1711.276f, 8.031473f, 4237.442f, 0.0f, 56.98805f, 0.0f), Local_139.f_1252);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "lean_fence_L", "lean_fence_L", -1711.494f, 8.032317f, 4234.503f, 0.0f, 89.31872f, 0.0f), Local_139.f_1252);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_hammer_wall", "stand_hammer_wall", -1715.843f, 8.031f, 4250.29f, 0.0f, 87.97841f, 0.0f), Local_139.f_1252);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "lean_table", "lean_table", -1708.688f, 8.032f, 4247.973f, 0.0f, -180.808f, 0.0f), Local_139.f_1252);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_chopveggies_w_any", "stand_chopveggies_w_any", -1686.309f, 8.077932f, 4245.074f, 0.0f, -178.7862f, 0.0f), Local_139.f_1252);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "opium_pipe", "opium_pipe", -1708.0f, 8.031363f, 4229.472f, 0.0f, -157.4185f, 0.0f), Local_139.f_1252);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -1699.522f, 8.031363f, 4230.106f, 0.0f, -175.4147f, 0.0f), Local_139.f_1252);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand", "smoking_stand", -1705.486f, 8.091421f, 4237.615f, 0.0f, -82.35554f, 0.0f), Local_139.f_1252);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand2", "smoking_stand", -1701.894f, 8.092653f, 4235.112f, 0.0f, -128.7962f, 0.0f), Local_139.f_1252);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -1693.921f, 8.062208f, 4238.079f, 0.0f, 77.60674f, 0.0f), Local_139.f_1252);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -1705.224f, 8.091421f, 4236.64f, 0.0f, -104.7199f, 0.0f), Local_139.f_1252);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand3", "smoking_stand", -1689.073f, 8.12009f, 4245.062f, 0.0f, 45.7972f, 0.0f), Local_139.f_1252);
	return;
}

void Function_143(bool bParam0, bool bParam1) //Position: 0x5B54 / 23380
{
	DECOR_SET_OBJECT(bParam0, "IntSpawn", bParam1);
	return;
}

void Function_144(int iParam0, int iParam1) //Position: 0x5B6D / 23405
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

bool Function_145() //Position: 0x5BB6 / 23478
{
	Function_152(&Local_139 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_loose", 1, 0);
	Function_152(&Local_139 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_152(&Local_139 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_152(&Local_139 + 4, "$/content/scripting/gringo/simplegringo/blacksmith", 1, 0);
	Function_152(&Local_139 + 4, "$/content/scripting/gringo/simplegringo/sharpen_axe", 1, 0);
	Function_152(&Local_139 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_152(&Local_139 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_152(&Local_139 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_152(&Local_139 + 4, "$/content/scripting/gringo/simplegringo/stand_chopveggies_w_any", 1, 0);
	Function_152(&Local_139 + 4, "$/content/scripting/gringo/simplegringo/opium_pipe", 1, 0);
	Function_152(&Local_139 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_152(&Local_139 + 4, "$/content/scripting/gringo/simplegringo/stand_fiddle_w_fiddle", 1, 0);
	if (Function_146(&Local_139 + 4))
	{
		return 1;
	}
	return 0;
}

bool Function_146(int iParam0) //Position: 0x5F08 / 24328
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

void Function_147() //Position: 0x6283 / 25219
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

bool Function_148(int iParam0) //Position: 0x62C3 / 25283
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x62DF / 25311
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

void Function_150(var uParam0, int iParam1) //Position: 0x630A / 25354
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_151() //Position: 0x631B / 25371
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

var Function_152(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x635D / 25437
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

var Function_153(var uParam0, int iParam1, int iParam2) //Position: 0x6395 / 25493
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

void Function_154(int iParam0) //Position: 0x6459 / 25689
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_156("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_155(StackVal, 0);
	return;
}

void Function_155(var uParam0, int iParam1) //Position: 0x64CB / 25803
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

bool Function_156(char* cParam0) //Position: 0x64FC / 25852
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_157(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x651B / 25883
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_158() //Position: 0x655D / 25949
{
	while (!IS_EXITFLAG_SET())
	{
		Function_20(4334, 3324);
		WAIT(0);
	}
	return;
}

bool Function_159() //Position: 0x657A / 25978
{
	return Function_110(2);
}

void Function_160() //Position: 0x6584 / 25988
{
	if (Function_159())
	{
		return;
	}
	Function_162();
	Function_152(&bLocal_39, "MP_CTF", 10, 0);
	Function_152(&bLocal_39, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_146(&bLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_76();
	Function_161();
	return;
}

void Function_161() //Position: 0x65E8 / 26088
{
	while (!Function_110(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

void Function_162() //Position: 0x6603 / 26115
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

