//Decompiled with MagicRDR v1.0
//Function Count : 148
//Statics Count : 519
//Natives Count : 174
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
	struct<9> Local_11 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	struct<1893> Local_42 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	vector3 vVar1[5];
	
	iLocal_10 = 0;
	fLocal_14 = 1.0f;
	Function_147(4, 1);
	iVar0 = 0;
	Global_83591 = 1;
	if (Function_146(Global_79962, 128))
	{
		Function_145(2, 6500, 1200);
		Function_145(1, 5400, 900);
		Function_145(0, 4700, 600);
		Function_143(2, 9.0f, 500);
		Function_143(1, 12.0f, 250);
		Function_143(0, 30.0f, 100);
		NET_CREATE_FRIEND_SCORE_READER(47);
	}
	else
	{
		Function_145(2, 3200, 970);
		Function_145(1, 2500, 670);
		Function_145(0, 2100, 370);
		Function_143(2, 9.0f, 500);
		Function_143(1, 12.0f, 250);
		Function_143(0, 30.0f, 100);
		NET_CREATE_FRIEND_SCORE_READER(33);
	}
	Function_142(Global_83864.f_1284);
	Function_139(Function_141());
	Function_138(Global_83864.f_1284, 0, 1);
	if (Function_130())
	{
		Local_42.f_1892 = 45.0f;
		vVar1[03] = { -2610.89f, 73.2314f, 3348.81f };
		vVar1[13] = { -2611.76f, 73.6721f, 3343.89f };
		vVar1[23] = { -2607.93f, 73.6831f, 3340.68f };
		vVar1[33] = { -2603.23f, 73.5307f, 3342.39f };
		vVar1[43] = { -2607.7f, 73.6014f, 3344.83f };
		Function_97(&vVar1, 0);
		Function_95(1);
		while (!IS_EXITFLAG_SET())
		{
			if (Function_94(1, 1))
			{
				Function_71(10769);
			}
			else
			{
				Function_70();
				Function_68();
				Function_17(6698, 6441, 3455);
			}
			WAIT(false);
		}
		Function_3();
	}
	Function_1();
	Function_138(Global_83864.f_1284, 0, 1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x1A5 / 421
{
	Function_139(Function_2());
	return;
}

int Function_2() //Position: 0x1B1 / 433
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_3() //Position: 0x1CB / 459
{
	Function_13(&Local_42 + 1828);
	Function_13(&Local_42 + 1812);
	if (IS_LAYOUTREF_VALID(Local_42.f_1808))
	{
		DESTROY_LAYOUT(Local_42.f_1808);
	}
	Function_10();
	Function_4();
	return;
}

void Function_4() //Position: 0x1FA / 506
{
	Function_5();
	return;
}

void Function_5() //Position: 0x203 / 515
{
	if (Function_9(4194304))
	{
		Function_6(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_9(8388608))
	{
		Function_6(8388608, 0, 1);
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

void Function_6(int iParam0, bool bParam1, int iParam2) //Position: 0x30C / 780
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_8(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_7(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x334 / 820
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x347 / 839
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_9(bool bParam0) //Position: 0x356 / 854
{
	return Function_146(Global_76905.f_132, bParam0);
}

void Function_10() //Position: 0x367 / 871
{
	bool bVar0;
	
	bVar0 = Function_11(0);
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	return;
}

var Function_11(bool bParam0) //Position: 0x380 / 896
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_LAYOUT(Function_12(), "EndgameScore");
	if (!IS_OBJECT_VALID(bVar0) && bParam0)
	{
		bVar0 = CREATE_POINT_IN_LAYOUT(Function_12(), "EndgameScore", *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f);
	}
	return bVar0;
}

var Function_12() //Position: 0x3CD / 973
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_13(int iParam0) //Position: 0x3FC / 1020
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_14(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x422 / 1058
{
	if (Function_16(uParam0[iParam13], 4))
	{
		if (Function_16(uParam0[iParam13], 1))
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
			Function_15(uParam0[iParam13], 1);
			Function_15(uParam0[iParam13], 2);
			Function_15(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x550 / 1360
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_16(var uParam0, int iParam1) //Position: 0x56A / 1386
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17(int iParam0, int iParam1, int iParam2) //Position: 0x587 / 1415
{
	if (Function_9(0x4000000))
	{
		Function_26();
		Function_6(0x4000000, 0, 1);
	}
	if (Function_9(0x10000000))
	{
		Function_26();
		Function_6(0x10000000, 0, 1);
	}
	if (Function_9(2) != Function_9(0x2000000))
	{
		Function_26();
		Function_6(0x2000000, Function_9(2), 1);
	}
	if (Function_25())
	{
		Function_24(!Function_9(16));
	}
	if (Function_9(16))
	{
		Function_18(&iParam0, &iParam1, &iParam2);
		if (Function_9(8192))
		{
			if (!Function_9(4194304))
			{
				Function_6(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_9(8388608))
			{
				Function_6(8388608, 1, 1);
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
			Function_5();
		}
		Function_6(16384, 1, 1);
	}
	else if (!Function_9(32))
	{
		Function_5();
	}
	Function_6(32768, 0, 1);
	return;
}

void Function_18(var uParam0, var uParam1, int iParam2) //Position: 0x720 / 1824
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_6(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_9(0x40000000);
	bVar3 = !Function_9(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_23(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_21(bVar1, 2048, 1))
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
				if (Function_19(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_9(4))
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
			if (Function_19(bVar1, (4294966296 - bVar1), 1))
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

bool Function_19(bool bParam0, int iParam1, int iParam2) //Position: 0x898 / 2200
{
	var uVar0;
	
	return Function_20(bParam0, iParam1, &uVar0, iParam2);
}

int Function_20(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x8A9 / 2217
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

bool Function_21(bool bParam0, int iParam1, bool bParam2) //Position: 0x90E / 2318
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_94(iParam1, bParam2);
	}
	if (!Function_23(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_22(iParam1), 64);
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

var Function_22(int iParam0) //Position: 0x98F / 2447
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

bool Function_23(bool bParam0) //Position: 0xCA8 / 3240
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

void Function_24(bool bParam0) //Position: 0xD49 / 3401
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_6(16384, 0, 1);
	return;
}

bool Function_25() //Position: 0xD63 / 3427
{
	return Function_9(32768);
}

void Function_26() //Position: 0xD70 / 3440
{
	Function_6(32768, 1, 0);
	return;
}

int Function_27() //Position: 0xD7F / 3455
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_PLAYERS();
	iVar1 = 4294966296;
	if (Function_25() && Function_9(4))
	{
		Function_31(&iVar0, &iVar1);
		Function_28(iVar0, iVar1);
	}
	return 1;
}

void Function_28(int iParam0, int iParam1) //Position: 0xDA9 / 3497
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4[67];
	
	NET_PLAYER_LIST_SET_HIGHLIGHT((iParam0 - 1));
	bVar0 = true;
	if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE() && iParam0 > 13)
	{
		bVar2 = NET_GET_LOCAL_GAMER_RANK();
		bVar3 = NET_GET_NEAREST_FRIEND_RANK();
		if (bVar2 == 4294967295 && bVar3 == 4294967295)
		{
			bVar0 = false;
			iVar1 = 0;
			while (iVar1 <= ((16 - iParam0) - 4))
			{
				NET_PLAYER_LIST_ADD_ITEM("", Function_30(&iParam1));
				iVar1++;
			}
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("COOP_Leaderboard"), Function_30(&iParam1));
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING("nCOOP_Rank"));
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING("COOP_SCORE"));
			if (bVar3 <= bVar2)
			{
				UNK_0xD7572C68(&uVar4);
				Function_29(NET_GET_NEAREST_FRIEND_NAME(), Function_30(&iParam1), bVar3, uVar4[13]);
				NET_GET_LOCAL_GAMER_SCORE_INFO(&uVar4);
				Function_29(GET_SLOT_NAME(GET_LOCAL_SLOT()), Function_30(&iParam1), bVar2, uVar4[13]);
			}
			else
			{
				NET_GET_LOCAL_GAMER_SCORE_INFO(&uVar4);
				Function_29(GET_SLOT_NAME(GET_LOCAL_SLOT()), Function_30(&iParam1), bVar2, uVar4[13]);
				UNK_0xD7572C68(&uVar4);
				Function_29(NET_GET_NEAREST_FRIEND_NAME(), Function_30(&iParam1), bVar3, uVar4[13]);
			}
		}
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 <= ((16 - iParam0) - 3))
		{
			NET_PLAYER_LIST_ADD_ITEM("", Function_30(&iParam1));
			iVar1++;
		}
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("COOP_Leaderboard"), Function_30(&iParam1));
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("COOP_NoFriends"), Function_30(&iParam1));
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
	}
	return;
}

void Function_29(char* cParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xF32 / 3890
{
	NET_PLAYER_LIST_ADD_ITEM(cParam0, iParam1);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bParam2);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(true, bParam3);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
}

int Function_30(int iParam0) //Position: 0xF55 / 3925
{
	*iParam0 = (*iParam0 - 1);
	return *iParam0 + 1;
}

void Function_31(var uParam0, bool bParam1) //Position: 0xF68 / 3944
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	char* cVar11[32];
	var uVar19;
	var uVar20;
	bool bVar21;
	var uVar22;
	
	bVar0 = false;
	while (bVar0 <= 4)
	{
		if (Function_23(bVar0))
		{
			bVar2 = (bVar2 + Function_55(29, bVar0));
			bVar3 = (bVar3 + Function_55(39, bVar0));
			bVar5 = (bVar5 + Function_55(12, bVar0));
			bVar4 = (bVar4 + Function_55(28, bVar0));
			bVar1 = (bVar1 + Function_52(bVar0));
		}
		bVar0++;
	}
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("coop_total"), Function_30(bParam1));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bVar1);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(true, bVar2);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(2, bVar3);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(3, bVar5);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(4, bVar4);
	*uParam0++;
	if (vLocal_11.x <= 2)
	{
		return;
	}
	NET_PLAYER_LIST_ADD_ITEM("", Function_30(bParam1));
	*uParam0++;
	Function_51(bParam1, "coop_time_spent", 0, 0);
	*uParam0++;
	if (vLocal_11.x <= 3)
	{
		return;
	}
	if (Function_50(&Global_78578 + 96))
	{
		uVar19 = Function_46(&Global_78578 + 96);
		Function_44(1, uVar19);
		if (Function_42() >= 4294967295)
		{
			iVar6 = Function_41(uVar19);
			if (iVar6 >= 4294967295)
			{
				Function_39(iVar6, &uVar19, &bVar10);
			}
		}
	}
	else
	{
		Function_44(1, 0.0f);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bVar10);
	bVar0 = false;
	while (bVar0 <= iVar7)
	{
		if (bVar0 < vLocal_11.z)
		{
			Function_37(bVar0, &iVar9, &bVar8);
			Function_51(bParam1, "", iVar9, 0);
			*uParam0++;
			if (bVar0 > vLocal_11.z || vLocal_11.x <= 6)
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bVar8);
			}
		}
		bVar0++;
	}
	Function_51(bParam1, "COOP_grandTotal", 0, 0);
	*uParam0++;
	Function_36(&bVar8, &iVar6, &uVar20);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, I2STR(bVar8));
	switch (iVar6)
	{
		case 0x00000002:
			bVar21 = "COOP_victory_gold";
			break;
		
		case 0x00000001:
			if (Function_42() >= 4294967295)
			{
				bVar21 = "COOP_victory_Silver";
			}
			else
			{
				bVar21 = "XP_COOP_Consolation";
			}
			break;
		
		case 0x00000000:
			if (Function_42() >= 4294967295)
			{
				bVar21 = "COOP_victory_Bronze";
			}
			else
			{
				bVar21 = "XP_COOP_Consolation";
			}
			break;
		
		case 0xFFFFFFFF:
		default:
			bVar21 = "coop_nothing_earned";
			break;
	}
	Function_51(bParam1, bVar21, 0, 0);
	*uParam0++;
	if (iVar6 >= 4294967295)
	{
		Function_32(iVar6, &uVar22, &bVar10, uVar20);
	}
	else
	{
		bVar10 = false;
	}
	strcpy(&cVar11, "<space>   ", 32);
	stradd(&cVar11, I2STR(bVar10), 32);
	stradd(&cVar11, " <MP_XP>", 32);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar11);
	return;
}

void Function_32(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x123B / 4667
{
	bool bVar0;
	
	*uParam1 = Function_35(uParam0);
	*uParam2 = Function_33(*uParam1, 32, 20);
	*uParam1 = Function_33(*uParam1, 20, 0);
	if (bParam3)
	{
		bVar0 = (TO_FLOAT(*uParam2) * 0.3f);
		bVar0 = (bVar0 / 5.0f);
		*uParam2 = ROUND(bVar0);
		*uParam2 *= 5;
	}
}

var Function_33(var uParam0, int iParam1, bool bParam2) //Position: 0x128C / 4748
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_34((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

var Function_34(bool bParam0) //Position: 0x12AB / 4779
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_35(int iParam0) //Position: 0x12B7 / 4791
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

int Function_36(int iParam0, var uParam1, int iParam2) //Position: 0x12D7 / 4823
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_11(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	if (!(DECOR_GET_INT_VERBOSE(bVar0, "total", iParam0) && DECOR_GET_INT_VERBOSE(bVar0, "medal", &iVar1)))
	{
		return 0;
	}
	*iParam2 = DECOR_GET_BOOL(bVar0, "casual");
	*uParam1 = iVar1;
	return 1;
}

int Function_37(int iParam0, int iParam1, int iParam2) //Position: 0x132A / 4906
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = Function_11(0);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	uVar1 = Function_38(iParam0, 1);
	uVar2 = Function_38(iParam0, 0);
	if (!(DECOR_GET_INT_VERBOSE(bVar0, &uVar1, iParam2) && DECOR_GET_INT_VERBOSE(bVar0, &uVar2, iParam1)))
	{
		return 0;
	}
	return 1;
}

var Function_38(int iParam0, bool bParam1) //Position: 0x136B / 4971
{
	int iVar0;
	
	if (bParam1)
	{
		strcpy(&iVar0, "v", 4);
	}
	else
	{
		strcpy(&iVar0, "n", 4);
	}
	straddi(&iVar0, iParam0, 4);
	return iVar0;
}

void Function_39(int iParam0, var uParam1, int iParam2) //Position: 0x1391 / 5009
{
	float fVar0;
	
	fVar0 = Function_40(iParam0);
	*iParam2 = FLOOR((fVar0 / 1000.0f));
	*uParam1 = (60.0f * (fVar0 - (IntToFloat(*iParam2) * 1000.0f)));
	return;
}

var Function_40(int iParam0) //Position: 0x13C2 / 5058
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return -1.0f;
	}
	return (*&Global_83591 + 140 + 32)[iParam0];
}

var Function_41(float fParam0) //Position: 0x13E2 / 5090
{
	int iVar0;
	float fVar1;
	var uVar2;
	
	iVar0 = 2;
	while (iVar0 > 0)
	{
		Function_39(iVar0, &fVar1, &uVar2);
		if (fParam0 >= fVar1)
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 4294967295);
	}
	return 4294967295;
}

int Function_42() //Position: 0x140F / 5135
{
	if (!Function_43())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

bool Function_43() //Position: 0x1424 / 5156
{
	return UNK_0xA80C6DE6(&Global_78578);
}

void Function_44(bool bParam0, int iParam1) //Position: 0x1431 / 5169
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_45(iParam1) };
	bVar4 = FLOOR((Var0.f_12 * 100.0f));
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", UI_GET_STRING("MP_Time_Fmt1"), I2STR((bVar4 / 10)), I2STR((bVar4 % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, StackVal, "GENERIC_DBUFFER10_1", I2STR((I2STR((UI_GET_STRING("MP_Time_Fmt1") / 10)) % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, "GENERIC_DBUFFER10_2", I2STR(UI_GET_STRING("MP_Time_Fmt")), UI_GET_STRING("GENERIC_DBUFFER10_1"), UI_GET_STRING("GENERIC_DBUFFER10_0"));
	if (Var0 >= 0)
	{
		if (StackVal <= 10)
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_3", UI_GET_STRING("MP_time_Fmt1"), I2STR(false), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_3"), false);
		}
		else
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER10_2"));
	}
	return;
}

struct<16> Function_45(var uParam0) //Position: 0x165E / 5726
{
	struct<4> Var0;
	bool bVar4;
	
	bVar4 = uParam0;
	Var0 = FLOOR((bVar4 / 3600.0f));
	while (bVar4 <= 3600.0f)
	{
		bVar4 = (bVar4 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar4 / 60.0f));
	while (bVar4 <= 60.0f)
	{
		bVar4 = (bVar4 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar4);
	Var0.f_12 = (StackVal - IntToFloat(bVar4));
	return StackVal, StackVal, StackVal, Var0;
}

var Function_46(int iParam0) //Position: 0x16CF / 5839
{
	if (Function_50(iParam0))
	{
		if (Function_49(iParam0))
		{
			return StackVal;
		}
		Function_47();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_47() //Position: 0x17A0 / 6048
{
	if (!Function_48())
	{
	}
	return;
}

bool Function_48() //Position: 0x17AD / 6061
{
	return NET_IS_IN_SESSION();
}

bool Function_49(int iParam0) //Position: 0x17B6 / 6070
{
	return Function_146(*iParam0, 2);
}

bool Function_50(int iParam0) //Position: 0x17C3 / 6083
{
	return Function_146(*iParam0, 1);
}

void Function_51(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x17D0 / 6096
{
	if (iParam2 != 0)
	{
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING_BY_HASH(iParam2), Function_30(bParam0));
	}
	else
	{
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(bParam1), Function_30(bParam0));
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "");
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "");
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "");
	if (bParam3)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
}

int Function_52(int iParam0) //Position: 0x181F / 6175
{
	return Function_53(0, iParam0);
}

int Function_53(int iParam0, bool bParam1) //Position: 0x182B / 6187
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_54(iParam0);
	}
	if (!Function_23(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

int Function_54(int iParam0) //Position: 0x1892 / 6290
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_55(int iParam0, bool bParam1) //Position: 0x18A2 / 6306
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_56(iParam0);
	}
	if (!Function_23(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_56(int iParam0) //Position: 0x1910 / 6416
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_57(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x1929 / 6441
{
	bool bVar0;
	bool bVar1;
	
	Function_60(bParam1, uParam2, uParam3);
	bVar0 = Function_52(bParam0);
	if (!bParam1)
	{
		Function_19(bParam0, bVar0, 0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(5);
	bVar1 = false;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
		bVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_55(29, bParam0));
		bVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_55(39, bParam0));
		bVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_59(bParam0));
		bVar1++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_55(28, bParam0));
		bVar1++;
		Function_58(bVar1, bParam0);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
	}
	return 0;
}

void Function_58(bool bParam0, bool bParam1) //Position: 0x19C9 / 6601
{
	if (Function_9(4))
	{
		if (Function_21(bParam1, 1024, 1))
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

int Function_59(bool bParam0) //Position: 0x19FC / 6652
{
	return Function_55(12, bParam0);
}

void Function_60(bool bParam0, int iParam1, char* cParam2) //Position: 0x1A09 / 6665
{
	if (bParam0)
	{
		if (Function_25())
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

int Function_61() //Position: 0x1A2A / 6698
{
	if (!Function_63(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_TEAM_SORT(1);
	NET_PLAYER_LIST_SET_TOP_TEAM(5);
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_revives");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(6, "mp_plist_defends");
	Function_62();
	return 1;
}

void Function_62() //Position: 0x1AC8 / 6856
{
	if (Function_9(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_6(8192, 1, 1);
	}
	else if (Function_9(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_6(8192, 1, 1);
	}
	else
	{
		Function_6(8192, 0, 1);
	}
	return;
}

bool Function_63(bool bParam0) //Position: 0x1B05 / 6917
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_25() || Function_67(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_25())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_64(Function_25());
	return 1;
}

void Function_64(bool bParam0) //Position: 0x1B86 / 7046
{
	if (bParam0 || Function_9(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_9(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_9(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_9(1048576) || Function_9(4)) || Function_94(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_6(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_65(int iParam0) //Position: 0x1C0F / 7183
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_66(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1C23 / 7203
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

int Function_67(bool bParam0, bool bParam1) //Position: 0x1C68 / 7272
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

void Function_68() //Position: 0x1C9C / 7324
{
	if (Function_69(32) && Function_9(16))
	{
		if (vLocal_11.x != 12)
		{
			if (!IS_PS3())
			{
				UI_FOCUS("HudGamerList");
			}
		}
		vLocal_11 = 12;
	}
	return;
}

bool Function_69(bool bParam0) //Position: 0x1CD4 / 7380
{
	return Function_146(StackVal, bParam0);
}

void Function_70() //Position: 0x1CE7 / 7399
{
	if (IS_LAYOUTREF_VALID(Local_42.f_1808))
	{
		DESTROY_LAYOUT(Local_42.f_1808);
		Function_13(&Local_42 + 1828);
	}
	UNREGISTER_SCRIPT_WITH_AUDIO();
	return;
}

void Function_71(int iParam0) //Position: 0x1D0B / 7435
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	
	Function_88(StackVal, StackVal, 10572, *(&Local_42 + 1896), 1, iParam0);
	bVar1 = true;
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = IS_PLAYER_CONTROLLABLE(0);
	}
	iVar2 = (Function_54(8) - 1);
	if (iVar2 >= 3)
	{
		iVar2 = (iVar2 - 4);
	}
	if (Function_86(1) && !Function_86(2))
	{
		Function_83("COOP_new_challenges", 0x41200000, 1, 0, 2, 1, 0);
		Function_81(2);
	}
	GET_CAMERA_CHANNEL_POSITION(&vVar3, 0);
	fVar8 = GET_CURRENT_GAME_TIME();
	fVar9 = GET_LAST_FRAME_TIME();
	iVar0 = 0;
	while (iVar0 <= Local_42.f_1804)
	{
		if (iVar0 == iVar2)
		{
			iVar6 = 15790320;
			iVar7 = 0;
			if (IS_SCRIPT_USE_CONTEXT_VALID(Local_42[iVar090].f_356))
			{
				RELEASE_SCRIPT_USE_CONTEXT(Local_42[iVar090].f_356);
			}
		}
		else
		{
			iVar6 = 15170838;
			iVar7 = 0;
			if (bVar1)
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(Local_42[iVar090].f_356))
				{
					UI_SET_STRING_FORMAT(Function_80(iVar0), UI_GET_STRING("COOP_Select"), UI_GET_STRING(Function_79(Local_42[iVar090].f_324, 0)), false, false);
					Local_42[iVar090].f_356 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(Function_80(iVar0), Local_42[iVar090].f_352, 0, 4, 0, false, 0, 0, 4294967295, 0);
				}
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(Local_42[iVar090].f_356))
				{
					Function_78(&(Local_42[iVar290]));
					Function_78(&Local_42[iVar290] + 48);
					Function_77(8, Local_42[iVar090].f_324 + 1);
					iVar2 = iVar0;
					HUD_CLEAR_SMALL_TEXT_QUEUE();
					PRINT_SMALL_FORMAT(2.5f, "COOP_Selected", Function_79(Local_42[iVar090].f_324, 0), 0, 0, 0, 2, 0, 0);
					RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(Local_42[iVar090].f_328, "HUD_STINGER_TEXT_SELECTION_MASTER"));
					Function_78(&(Local_42[iVar090]));
					Function_78(&Local_42[iVar090] + 48);
					iVar6 = 15790320;
					iVar7 = 0;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(Local_42[iVar090].f_356))
			{
				RELEASE_SCRIPT_USE_CONTEXT(Local_42[iVar090].f_356);
			}
		}
		Function_74(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &(Local_42[iVar090]), vVar3, fVar8, Vector(*(&Local_42[iVar090] + 332), Local_42[iVar090].f_328, fVar9) + Vector(0.0f, 2.725f, 0.0f), 1, 8854, 0, iVar6, iVar0, "", iVar7);
		if (Function_73(Local_42[iVar090].f_352))
		{
			Function_74(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_42[iVar090] + 48, vVar3, fVar8, Vector(*(&Local_42[iVar090] + 332), Local_42[iVar090].f_328, fVar9) + Vector(0.0f, 2.25f, 0.0f), Local_42[iVar090].f_344, 8109, 0, iVar6, iVar0, "", iVar7);
		}
		else
		{
			Function_78(&Local_42[iVar090] + 48);
		}
		iVar0++;
	}
	return;
}

var Function_72(int iParam0, int iParam1) //Position: 0x1FAD / 8109
{
	return GET_WEAPON_DISPLAY_NAME((*&Local_42[iParam190] + 96)[iParam0 + 12]);
}

bool Function_73(bool bParam0) //Position: 0x1FC4 / 8132
{
	bool bVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= 16)
		{
			if (IS_SLOT_VALID(bVar0))
			{
				bVar1 = GET_SLOT_ACTOR(bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (IS_ACTOR_IN_VOLUME(bVar1, bParam0))
					{
						return 1;
					}
				}
			}
			bVar0++;
		}
	}
	return 0;
}

void Function_74(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16) //Position: 0x2009 / 8201
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
			Function_78(iParam0);
			return;
		}
		vParam1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vParam1, StackVal) };
		fVar5 = fLocal_14;
		if (iParam10 == 1)
		{
			fVar5 = -1.0f;
		}
		else if (iParam0->f_40 != 0 && iParam12)
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
					Function_78(iParam0);
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
			Stack.Push(iParam15);
			Stack.Push(iParam0->f_40);
			Stack.Push(iParam14);
			Call_Loc(iParam11);
			*iParam0 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, vVar1, 0.0f, iParam0->f_36, 0.0f, iParam13);
			if (iParam16 >= 4294967295)
			{
				Stack.Push(bParam6);
				Stack.Push("");
				Stack.Push(iParam0->f_40);
				Stack.Push(iParam14);
				Call_Loc(iParam11);
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

var Function_75(float fParam0) //Position: 0x2288 / 8840
{
	return (fParam0 * 57.29578f);
}

int Function_76(var uParam0, int iParam1) //Position: 0x2296 / 8854
{
	uParam0 = uParam0;
	return Function_79(Local_42[iParam190].f_324, 1);
}

void Function_77(int iParam0, int iParam1) //Position: 0x22AD / 8877
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_78(int iParam0) //Position: 0x22D6 / 8918
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

int Function_79(int iParam0, bool bParam1) //Position: 0x22FC / 8956
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0x00000000:
				return "Class_0_desc";
			
			case 0x00000001:
				return "Class_1_desc";
			
			case 0x00000002:
				return "Class_2_desc";
			
			case 0x00000003:
				return "Class_3_desc";
			
			case 0x00000004:
				return "Class_4_desc";
			
			case 0x00000005:
				return "Class_5_desc";
			
			case 0x00000006:
				return "Class_6_desc";
			
			case 0x00000007:
				return "Class_7_desc";
			
			case 0x00000008:
				return "Class_8_desc";
			
			case 0x00000009:
				return "Class_9_desc";
			
			case 0x0000000A:
				return "Class_10_desc";
			
			case 0x0000000B:
				return "Class_11_desc";
			
			case 0x0000000C:
				return "Class_12_desc";
			
			case 0x0000000D:
				return "Class_13_desc";
			
			case 0x0000000E:
				return "Class_14_desc";
			
			case 0x0000000F:
				return "Class_15_desc";
			
			case 0x00000010:
				return "Class_16_desc";
			
			case 0x00000011:
				return "Class_17_desc";
			
			case 0x00000012:
				return "Class_18_desc";
			
			case 0x00000013:
				return "Class_19_desc";
			
			case 0x00000014:
				return "Class_20_desc";
			
			default:
		}
	}
	switch (iParam0)
	{
		case 0x00000000:
			return "Class_0";
		
		case 0x00000001:
			return "Class_1";
		
		case 0x00000002:
			return "Class_2";
		
		case 0x00000003:
			return "Class_3";
		
		case 0x00000004:
			return "Class_4";
		
		case 0x00000005:
			return "Class_5";
		
		case 0x00000006:
			return "Class_6";
		
		case 0x00000007:
			return "Class_7";
		
		case 0x00000008:
			return "Class_8";
		
		case 0x00000009:
			return "Class_9";
		
		case 0x0000000A:
			return "Class_10";
		
		case 0x0000000B:
			return "Class_11";
		
		case 0x0000000C:
			return "Class_12";
		
		case 0x0000000D:
			return "Class_13";
		
		case 0x0000000E:
			return "Class_14";
		
		case 0x0000000F:
			return "Class_15";
		
		case 0x00000010:
			return "Class_16";
		
		case 0x00000011:
			return "Class_17";
		
		case 0x00000012:
			return "Class_18";
		
		case 0x00000013:
			return "Class_19";
		
		case 0x00000014:
			return "Class_20";
		
		default:
	}
	return "Common_Null";
}

var Function_80(int iParam0) //Position: 0x266F / 9839
{
	switch (iParam0)
	{
		case 0x00000001:
			return "Generic_Dbuffer32_1";
		
		case 0x00000002:
			return "Generic_Dbuffer32_2";
		
		case 0x00000003:
			return "Generic_Dbuffer32_3";
		
		case 0x00000004:
			return "Generic_Dbuffer32_4";
		
		default:
	}
	return "Generic_Dbuffer32_0";
}

void Function_81(int iParam0) //Position: 0x2706 / 9990
{
	Function_82(&Global_83864 + 1256, iParam0);
	return;
}

void Function_82(var uParam0, int iParam1) //Position: 0x2718 / 10008
{
	Function_8(uParam0, iParam1);
	return;
}

void Function_83(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2725 / 10021
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_84(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_84(int iParam0) //Position: 0x27A0 / 10144
{
	char* cVar0[16];
	
	if (!Function_85())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_85() //Position: 0x27DF / 10207
{
	if (Function_146(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_86(int iParam0) //Position: 0x27FA / 10234
{
	return Function_87(Global_83864.f_1256, iParam0);
}

int Function_87(var uParam0, bool bParam1) //Position: 0x280C / 10252
{
	return (uParam0 && bParam1) == 0;
}

void Function_88(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x2819 / 10265
{
	if (!IS_OBJECT_VALID(Local_15.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_15.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_15.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_89(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_15.f_104, &Local_15) + Vector(0.0f, 2.45f, 0.0f), 1, 10471, 1, 125, 0, 0, 0);
	Function_89(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_15.f_104, &Local_15 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_89(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x289C / 10396
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_74(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

var Function_90(int iParam0, var uParam1) //Position: 0x28E7 / 10471
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_15.f_96 != iParam0)
	{
		Local_15.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_91() //Position: 0x294C / 10572
{
	int iVar0;
	
	if (VMAG(*(&Local_42 + 1896)) > 3.0f)
	{
		*(&Local_42 + 1896) = { StackVal, StackVal, *(&Global_79349 + 28) };
	}
	iVar0 = CREATE_PROPSET_IN_LAYOUT(Global_83591.f_140, "TalkingStick", "$/tune/refGroups/refGroups/mp_coop", *(&Local_42 + 1896), 0.0f, Local_42.f_1892, 0.0f);
	Function_92(iVar0, 1);
	return iVar0;
}

void Function_92(bool bParam0, int iParam1) //Position: 0x29C5 / 10693
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
	bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
	ITERATE_IN_LAYOUT(bVar1, bVar0);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar2), iParam1);
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
	DESTROY_ITERATOR(bVar1);
	return;
}

var Function_93(var uParam0, var uParam1) //Position: 0x2A11 / 10769
{
	uParam1 = uParam1;
	uParam0 = uParam0;
	return "FOM_summary";
}

bool Function_94(int iParam0, bool bParam1) //Position: 0x2A2D / 10797
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_95(int iParam0) //Position: 0x2A4D / 10829
{
	Function_96(8, iParam0);
	return;
}

void Function_96(int iParam0, bool bParam1) //Position: 0x2A5A / 10842
{
	if (bParam1)
	{
		Function_8(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_7(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

void Function_97(var uParam0, bool bParam1) //Position: 0x2A82 / 10882
{
	bool bVar1;
	bool bVar2;
	
	Local_42.f_1808 = CREATE_LAYOUT("Coop_Lobby");
	Global_83591.f_140 = Local_42.f_1808;
	while (!Function_124(&Local_42 + 1828) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	Function_123();
	bVar1 = Function_146(Global_79962, 128);
	bVar2 = (Function_54(8) - 1);
	if (bVar2 == 4294967295)
	{
		if (bVar1)
		{
			Function_77(8, GET_LOCAL_SLOT() + 5);
		}
		else
		{
			Function_77(8, GET_LOCAL_SLOT() + 1);
		}
	}
	else
	{
		if (bVar1)
		{
			if (bVar2 <= 4)
			{
				bVar2 += 4;
			}
		}
		else if (bVar2 == 8)
		{
			bVar2 = GET_LOCAL_SLOT();
		}
		else if (bVar2 > 4)
		{
			bVar2 = (bVar2 - 4);
		}
		Function_77(8, bVar2 + 1);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	if (bVar1)
	{
		Local_42.f_1804 = 5;
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_42[090]), *uParam0[03], 4, Local_42.f_1808, *(&Global_79349 + 28), *uParam0[03]), bParam1);
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_42[190]), *uParam0[13], 5, Local_42.f_1808, *(&Global_79349 + 28), *uParam0[13]), bParam1);
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_42[290]), *uParam0[23], 6, Local_42.f_1808, *(&Global_79349 + 28), *uParam0[23]), bParam1);
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_42[390]), *uParam0[33], 7, Local_42.f_1808, *(&Global_79349 + 28), *uParam0[33]), bParam1);
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_42[490]), *uParam0[43], 8, Local_42.f_1808, *(&Global_79349 + 28), *uParam0[43]), bParam1);
	}
	else
	{
		Local_42.f_1804 = 4;
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_42[090]), *uParam0[03], 0, Local_42.f_1808, *(&Global_79349 + 28), *uParam0[03]), bParam1);
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_42[190]), *uParam0[13], 1, Local_42.f_1808, *(&Global_79349 + 28), *uParam0[13]), bParam1);
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_42[290]), *uParam0[23], 2, Local_42.f_1808, *(&Global_79349 + 28), *uParam0[23]), bParam1);
		Function_98(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_121(&(Local_42[390]), *uParam0[33], 3, Local_42.f_1808, *(&Global_79349 + 28), *uParam0[33]), bParam1);
	}
	NET_OBJECT_REPLICATION_MODE_END(17);
	return;
}

void Function_98(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x2CCB / 11467
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	struct<9> Var9;
	bool bVar19;
	bool bVar20;
	
	*(iParam0 + 96) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_107(bParam4, iParam0 + 344) };
	iParam0->f_324 = bParam4;
	if (bParam4 != 8)
	{
		iParam0->f_328 = Function_103(bParam5, &vParam1, fParam6, iParam0 + 96, bParam7);
	}
	else
	{
		iParam0->f_328 = Function_101(bParam5, &vParam1, (fParam6 + 180.0f), bParam7);
		vVar0 = { 0.2f, 1.2f, 0.1f };
		vVar3 = { -10.0f, 0.0f, 0.0f };
		iVar12 = ((SHIFT_LEFT(255, 24) + SHIFT_LEFT(false, 16)) + SHIFT_LEFT(false, 8));
		GET_OBJECT_RELATIVE_POSITION(iParam0->f_328, vVar0, &vVar6);
		GET_OBJECT_RELATIVE_ORIENTATION(iParam0->f_328, vVar3, &vVar9);
		CREATE_MP_TEXT(iParam0->f_328, "", "Custom_deco", vVar6, Function_100(vVar9.x), Function_100(vVar9.y), Function_100(vVar9.z), iVar12);
	}
	*(iParam0 + 332) = { StackVal, StackVal, vParam1 };
	iParam0->f_44 = GET_CURRENT_GAME_TIME();
	(iParam0 + 48)->f_44 = (GET_CURRENT_GAME_TIME() + (0.1f * TO_FLOAT(bParam4)));
	iParam0->f_352 = CREATE_VOLUME_IN_LAYOUT(bParam5, "", 3, *(iParam0 + 332), 0.0f, 0.0f, 0.0f, 2.5f, 3.0f, 2.5f);
	bVar19 = Function_99(bParam4, &vVar13, &vVar16);
	if (STRING_LENGTH(bVar19) >= 0)
	{
		bVar20 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(vVar16, Vector("", bParam5, StackVal) + Vector(*(iParam0 + 332), vVar13, bVar19), StackVal) + Vector(0.0f, fParam6, 0.0f), 1);
		if (IS_OBJECT_VALID(bVar20))
		{
			ATTACH_OBJECTS(bVar20, iParam0->f_328, "", vVar13, vVar16, 4294967295);
		}
	}
}

var Function_99(bool bParam0, var uParam1, int iParam2) //Position: 0x2E48 / 11848
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000000:
			*uParam1 = { 0.2046675f, 1.532547f, -0.2487722f };
			*iParam2 = { 169.4265f, 0.8832794f, -175.2791f };
			return "p_gen_hat01x";
			break;
		
		case 0x00000005:
		case 0x00000001:
			return "";
		
		case 0x00000007:
		case 0x00000003:
			*uParam1 = { 0.3295048f, 1.381993f, -0.2406348f };
			*iParam2 = { 26.62852f, 177.48f, -6.970736f };
			return "p_gen_hat03x";
		
		case 0x00000006:
		case 0x00000002:
			*uParam1 = { 0.188344f, 1.438419f, 0.1520461f };
			*iParam2 = { -17.79215f, 176.5549f, -0.2478271f };
			return "p_gen_hat02x";
			break;
	}
	return "";
}

float Function_100(float fParam0) //Position: 0x2F34 / 12084
{
	return (fParam0 * 0.01745329f);
}

var Function_101(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2F42 / 12098
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_102()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

bool Function_102() //Position: 0x2FAE / 12206
{
	return "$/fragments/p_gen_dressForm01x";
}

var Function_103(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x2FD5 / 12245
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_101(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_106((*uParam3)[iVar12], &iVar2))
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
		if (Function_106((*uParam3)[iVar12], &iVar2))
		{
			if (Function_104((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_104(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x30C3 / 12483
{
	if (!Function_105(bParam0))
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

bool Function_105(int iParam0) //Position: 0x3254 / 12884
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_106(bool bParam0, int iParam1) //Position: 0x3266 / 12902
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

struct<228> Function_107(int iParam0, int iParam1) //Position: 0x32C2 / 12994
{
	struct<57> Var0;
	
	Var0 = 27;
	Function_118(&Var0);
	Function_115(&Var0, 0, 22, 1, 1);
	switch (iParam0)
	{
		case 0x00000000:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 9, 10, 1);
				Function_115(&Var0, 2, 0, 6, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000004:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 11, 6, 1);
				Function_115(&Var0, 2, 0, 8, 1);
				*iParam1 = 2;
			}
			break;
		
		case 0x00000001:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 17, 10, 1);
				Function_115(&Var0, 2, 5, 6, 1);
				Function_115(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000005:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 18, 10, 1);
				Function_115(&Var0, 2, 5, 8, 1);
				Function_115(&Var0, 3, 24, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000002:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 19, 20, 0);
				Function_115(&Var0, 2, 4, 8, 1);
				Function_115(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000006:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 20, 20, 0);
				Function_115(&Var0, 2, 4, 10, 1);
				Function_115(&Var0, 3, 25, 6, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 6, 10, 1);
				Function_115(&Var0, 2, 8, 8, 1);
				Function_115(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000007:
			if (!Function_114(iParam0, &Var0, iParam1))
			{
				Function_115(&Var0, 1, 2, 10, 1);
				Function_115(&Var0, 2, 8, 9, 1);
				Function_115(&Var0, 3, 23, 5, 1);
				*iParam1 = 3;
			}
			break;
		
		case 0x00000008:
			Function_108(&Var0, iParam1);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_108(int iParam0, int iParam1) //Position: 0x34A7 / 13479
{
	int iVar0;
	int iVar1[17];
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	char* cVar24[32];
	struct<5> Var32;
	
	*iParam1 = 1;
	Function_115(iParam0, *iParam1, 4, 4, 1);
	iVar1[7] = 1;
	iVar0 = 1;
	while (iVar0 < Global_83864.f_1264)
	{
		if (StackVal != 4294967295)
		{
			iVar20 = GET_AMMO_ENUM(StackVal);
			iVar19 = 0;
			if (Function_113(iVar20, 1))
			{
				if (!iVar1[iVar20])
				{
					iVar19 = Function_112(&Global_83591 + 276, iVar20) * 2;
					iVar1[iVar20] = 1;
				}
			}
			*iParam1++;
			Function_115(StackVal, iParam0, *iParam1, iVar19, 1);
		}
		iVar0++;
	}
	if (DECOR_GET_INT_VERBOSE(Function_12(), "DLCFM_Weapon", &iVar21))
	{
		iVar23 = 0;
		while (iVar23 <= iVar21)
		{
			strcpy(&cVar24, "DLCFM_Weapon_", 32);
			straddi(&cVar24, iVar23, 32);
			if (DECOR_GET_INT_VERBOSE(Function_12(), &cVar24, &uVar22))
			{
				Function_109(uVar22, &Var32);
				iVar20 = GET_AMMO_ENUM(Var32);
				iVar19 = 0;
				if (Function_113(iVar20, 1))
				{
					if (!iVar1[iVar20])
					{
						iVar19 = StackVal;
						iVar1[iVar20] = 1;
					}
				}
				*iParam1++;
				Function_115(iParam0, *iParam1, Var32, iVar19, 0);
			}
			iVar23++;
		}
	}
	return;
}

void Function_109(var uParam0, var uParam1) //Position: 0x35E4 / 13796
{
	*uParam1 = Function_33(uParam0, Function_110(), 0);
	uParam1->f_4 = Function_33(uParam0, Function_110() + 8, Function_110());
	return;
}

bool Function_110() //Position: 0x3607 / 13831
{
	return Function_111(39);
}

int Function_111(bool bParam0) //Position: 0x3612 / 13842
{
	int iVar0;
	
	if (bParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (bParam0 >= 0)
	{
		bParam0 = SHIFT_RIGHT(bParam0, true);
		iVar0++;
	}
	return iVar0;
}

int Function_112(int iParam0, int iParam1) //Position: 0x3640 / 13888
{
	if (Function_113(iParam1, 1))
	{
		return (*iParam0 + 456)[iParam1];
	}
	return 0;
}

bool Function_113(int iParam0, int iParam1) //Position: 0x365A / 13914
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

bool Function_114(int iParam0, var uParam1, int iParam2) //Position: 0x366D / 13933
{
	if (Function_146(Global_79349.f_44, 4194304))
	{
		switch (iParam0)
		{
			case 0x00000000:
			case 0x00000004:
				Function_115(uParam1, 1, 10, 5, 1);
				Function_115(uParam1, 2, 7, 4, 1);
				Function_115(uParam1, 3, 18, 2, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000001:
			case 0x00000005:
				Function_115(uParam1, 1, 17, 6, 1);
				Function_115(uParam1, 2, 6, 4, 1);
				Function_115(uParam1, 3, 24, 6, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000002:
			case 0x00000006:
				Function_115(uParam1, 1, 13, 8, 1);
				Function_115(uParam1, 2, 16, 9, 1);
				Function_115(uParam1, 3, 2, 3, 1);
				*iParam2 = 3;
				break;
			
			case 0x00000003:
			case 0x00000007:
				Function_115(uParam1, 1, 3, 6, 1);
				Function_115(uParam1, 2, 15, 12, 1);
				Function_115(uParam1, 3, 24, 3, 1);
				*iParam2 = 3;
				break;
		}
		return 1;
	}
	return 0;
}

void Function_115(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x374D / 14157
{
	if (!Function_117(iParam1))
	{
		return;
	}
	Function_116(iParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_116(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3770 / 14192
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

bool Function_117(int iParam0) //Position: 0x379A / 14234
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_118(int iParam0) //Position: 0x37AA / 14250
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_120(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_119(iParam0, 0.0f);
	return;
}

void Function_119(var uParam0, int iParam1) //Position: 0x37D7 / 14295
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_120(bool bParam0) //Position: 0x37E3 / 14307
{
	Function_116(bParam0, 4294967295, 0, 1);
	return;
}

float Function_121(vector3 vParam0, vector3 vParam3) //Position: 0x37F1 / 14321
{
	var uVar0;
	
	Function_122(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_122(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x380B / 14347
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_123() //Position: 0x382E / 14382
{
	Local_15.f_96 = 4294967295;
	Local_15.f_100 = 4294967295;
	return;
}

bool Function_124(int iParam0) //Position: 0x383E / 14398
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_129();
	iVar1 = 0;
	if (!Function_16(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_128(iParam0[iVar03], 8);
		}
		else if (Function_127())
		{
			iVar1 = 1;
			Function_128(iParam0[iVar03], 8);
		}
		Function_128(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_16(iParam0[iVar03], 4))
		{
			if (!Function_16(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_16(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_16(iParam0[03], 8) || iVar1));
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
				Function_128(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_16(iParam0[iVar03], 4))
		{
			if (!Function_16(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_128(iParam0[iVar03], 2);
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
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_128(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_128(iParam0[iVar03], 2);
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
	Function_125();
	return 1;
}

void Function_125() //Position: 0x3BB9 / 15289
{
	if (!Function_126(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_126(int iParam0) //Position: 0x3BF9 / 15353
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_127() //Position: 0x3C15 / 15381
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

void Function_128(var uParam0, int iParam1) //Position: 0x3C40 / 15424
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_129() //Position: 0x3C51 / 15441
{
	if (!Function_126(128))
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

bool Function_130() //Position: 0x3C93 / 15507
{
	var uVar0;
	bool bVar3;
	int iVar4;
	
	if (Function_137())
	{
		while (!IS_EXITFLAG_SET())
		{
			Function_135(6698, 6441);
			WAIT(false);
		}
		return 0;
	}
	if (Function_146(Global_79349.f_44, 4194304))
	{
		Function_133(&Local_42 + 1812, "dlc_zombiepack_mp_gy", 10, 0);
	}
	else
	{
		Function_133(&Local_42 + 1812, "dlc_mpcooppack_mp_coop", 10, 0);
	}
	Function_133(&Local_42 + 1828, Function_102(), 0, 0);
	iVar4 = 0;
	while (iVar4 <= 5)
	{
		bVar3 = Function_99(iVar4, &uVar0, &uVar0);
		if (STRING_LENGTH(bVar3) >= 0)
		{
			Function_133(&Local_42 + 1828, bVar3, 0, 0);
		}
		iVar4++;
	}
	Function_124(&Local_42 + 1828);
	while (!Function_124(&Local_42 + 1812) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	Function_132("nCOOP_help", 4294967295);
	Function_131();
	if (!Function_146(Global_84364, 2147483648))
	{
		Function_8(&Global_84364, 2147483648);
		Function_83("COOP_lobby_help", 0x41200000, 1, 0, 2, 1, 0);
	}
	return 1;
}

void Function_131() //Position: 0x3DC4 / 15812
{
	while (!Function_69(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

void Function_132(char* cParam0, int iParam1) //Position: 0x3DDF / 15839
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

var Function_133(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3E76 / 15990
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_134(iParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_128(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_134(var uParam0, int iParam1, int iParam2) //Position: 0x3EAE / 16046
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_16(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_128(uParam0[iVar03], 4);
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

void Function_135(var uParam0, var uParam1) //Position: 0x3F72 / 16242
{
	Function_17(uParam0, uParam1, 16259);
	return;
}

int Function_136() //Position: 0x3F83 / 16259
{
	return 1;
}

bool Function_137() //Position: 0x3F8A / 16266
{
	return Function_69(2);
}

void Function_138(var uParam0, bool bParam1, bool bParam2) //Position: 0x3F94 / 16276
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_8(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_8(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_139(int iParam0) //Position: 0x3FC1 / 16321
{
	if (!Function_140(iParam0))
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

bool Function_140(int iParam0) //Position: 0x3FEE / 16366
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_141() //Position: 0x4007 / 16391
{
	switch (GET_LOCAL_SLOT())
	{
		case 0x00000000:
			return 986;
			break;
		
		case 0x00000001:
			return 991;
			break;
		
		case 0x00000002:
			return 983;
			break;
		
		case 0x00000003:
			return 989;
			break;
		
		default:
			LOG_ERROR("GET_COOP_HORSE - Player is not in the proper range of slots, 0-3.  Setting to a default horse");
			return 976;
			break;
	}
	return 976;
}

void Function_142(bool bParam0) //Position: 0x40B6 / 16566
{
	if (!Function_140(bParam0))
	{
		return;
	}
	if (bParam0 > 976 || bParam0 < 1007)
	{
		return;
	}
	strcpy(&Global_76870, GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam0), 64);
	return;
}

void Function_143(int iParam0, float fParam1, int iParam2) //Position: 0x40E5 / 16613
{
	Function_144(iParam0, (fParam1 + TO_FLOAT(iParam2 * 1000)));
	return;
}

void Function_144(int iParam0, int iParam1) //Position: 0x40FB / 16635
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 32)[iParam0] = iParam1;
	return;
}

void Function_145(int iParam0, int iParam1, bool bParam2) //Position: 0x411C / 16668
{
	Function_147(iParam0, (iParam1 + SHIFT_LEFT(bParam2, 20)));
	return;
}

bool Function_146(var uParam0, int iParam1) //Position: 0x4131 / 16689
{
	return (uParam0 && iParam1) == 0;
}

void Function_147(int iParam0, int iParam1) //Position: 0x413E / 16702
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = iParam1;
	return;
}

