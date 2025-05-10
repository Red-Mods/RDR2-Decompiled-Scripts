//Decompiled with MagicRDR v1.0
//Function Count : 180
//Statics Count : 612
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
	struct<885> Local_139 = { 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1[6];
	bool bVar8[6];
	bool bVar15;
	int iVar16;
	
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
	Function_169();
	if (Function_168())
	{
		Function_166();
	}
	else
	{
		if (Function_130())
		{
			Function_129(1);
		}
		else
		{
			Function_128(1);
		}
		while (!Function_127() && !IS_EXITFLAG_SET())
		{
			WAIT(0);
		}
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			bVar1[iVar0] = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_139, Function_126(), "script_wagon_fire_grave02", *(&Local_139 + 548[iVar06]));
			if (IS_OBJECT_VALID(bVar1[iVar0]))
			{
				UNK_0x6745191B(bVar1[iVar0], 0.0f, 0.0f, 0.0f);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			bVar8[iVar0] = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_139, Function_126(), "fire_comp_smoke_plume", *(&Local_139 + 700[iVar06]));
			if (IS_OBJECT_VALID(bVar8[iVar0]))
			{
				UNK_0x6745191B(bVar8[iVar0], 0.0f, 0.0f, 0.0f);
			}
			iVar0++;
		}
		Function_125(0, 3);
		bVar15 = CREATE_WORLD_SECTOR(Local_139, "nArmadillo");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar15))
		{
			WAIT(0);
		}
		iVar16 = 2;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_124(64))
			{
				iVar16 = (iVar16 - 1);
				if (iVar16 <= 0)
				{
					Function_123(64, 0);
					Function_121();
					iVar16 = 2;
				}
			}
			Function_105(&iLocal_583, 0.2f, 0.7f, 12, 1.0f, 1.0f, 1.0f, 0.0f);
			Function_92(&uLocal_361);
			Function_17();
			WAIT(0);
		}
	}
	Function_15(&uLocal_361);
	RESET_RMPTFX_ALL();
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_arm_base01x", 0);
	DISABLE_CHILD_SECTOR("mp_arm_base01x");
	Function_6();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x1F8 / 504
{
	Function_2(&Local_139 + 4);
	RELEASE_LAYOUT_REF(Local_139);
	return;
}

void Function_2(int iParam0) //Position: 0x20A / 522
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

void Function_3(var uParam0, int iParam1) //Position: 0x230 / 560
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

void Function_4(var uParam0, int iParam1) //Position: 0x35E / 862
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0x378 / 888
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0x395 / 917
{
	Function_14();
	Function_2(&bLocal_39);
	Function_7();
	return;
}

void Function_7() //Position: 0x3A6 / 934
{
	Function_8();
	return;
}

void Function_8() //Position: 0x3AF / 943
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

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x4B8 / 1208
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

void Function_10(var uParam0, int iParam1) //Position: 0x4E0 / 1248
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x4F3 / 1267
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_12(bool bParam0) //Position: 0x502 / 1282
{
	return Function_13(Global_76905.f_132, bParam0);
}

bool Function_13(var uParam0, bool bParam1) //Position: 0x513 / 1299
{
	return (uParam0 && bParam1) == 0;
}

void Function_14() //Position: 0x520 / 1312
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_15(int iParam0) //Position: 0x55F / 1375
{
	Function_123(64, 0);
	Function_16(iParam0);
	return;
}

void Function_16(int iParam0) //Position: 0x570 / 1392
{
	if (iParam0->f_880 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_880, 0);
		iParam0->f_880 = "";
	}
	return;
}

void Function_17() //Position: 0x590 / 1424
{
	Function_90();
	if (Function_89(1, 1))
	{
		Function_74(StackVal, StackVal, 7504, vLocal_48, 1, 7391);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_69(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_20(4792, 3629);
		Function_18();
	}
	return;
}

void Function_18() //Position: 0x5DB / 1499
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_19(&Local_12);
	}
	return;
}

void Function_19(int iParam0) //Position: 0x5F7 / 1527
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

void Function_20(int iParam0, int iParam1) //Position: 0x61D / 1565
{
	Function_21(iParam0, iParam1, 3622);
	return;
}

void Function_21(var uParam0, var uParam1, int iParam2) //Position: 0x62E / 1582
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

void Function_22(var uParam0, var uParam1, int iParam2) //Position: 0x7C7 / 1991
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

bool Function_23(bool bParam0, int iParam1, int iParam2) //Position: 0x93F / 2367
{
	var uVar0;
	
	return Function_24(bParam0, iParam1, &uVar0, iParam2);
}

int Function_24(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x950 / 2384
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

bool Function_25(bool bParam0, int iParam1, bool bParam2) //Position: 0x9B5 / 2485
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_89(iParam1, bParam2);
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

var Function_26(int iParam0) //Position: 0xA36 / 2614
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

bool Function_27(bool bParam0) //Position: 0xD4F / 3407
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

void Function_28(bool bParam0) //Position: 0xDF0 / 3568
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_9(16384, 0, 1);
	return;
}

bool Function_29() //Position: 0xE0A / 3594
{
	return Function_12(32768);
}

void Function_30() //Position: 0xE17 / 3607
{
	Function_9(32768, 1, 0);
	return;
}

int Function_31() //Position: 0xE26 / 3622
{
	return 1;
}

int Function_32(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xE2D / 3629
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_49(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_48(bParam0);
	bVar2 = Function_47(bParam0);
	bVar3 = Function_44(bParam0);
	iVar4 = Function_43(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_23(bParam0, iVar4, 0);
	}
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_41(34, bParam0));
		bVar0++;
	}
	if (Function_38(bParam0))
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
		if (Function_35(bParam0, 1, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "<SWAG_Y_RET>");
		}
	}
	else
	{
		Function_34(bVar0, bParam0);
	}
	if (Function_29() && Function_33())
	{
	}
	return 0;
}

bool Function_33() //Position: 0xF04 / 3844
{
	return (Function_12(4096) || Function_12(4));
}

void Function_34(bool bParam0, bool bParam1) //Position: 0xF15 / 3861
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

bool Function_35(bool bParam0, int iParam1, bool bParam2) //Position: 0xF48 / 3912
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

var Function_36(int iParam0) //Position: 0xFC9 / 4041
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

var Function_37(int iParam0, bool bParam1) //Position: 0x10BB / 4283
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_38(bool bParam0) //Position: 0x10DB / 4315
{
	if (Function_40(bParam0, 1, 0) != 4294967295 && Function_39() != 4294967295)
	{
		return 0;
	}
	return Function_40(bParam0, 1, 0) != Function_39();
}

int Function_39() //Position: 0x1103 / 4355
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_40(GET_LOCAL_SLOT(), 1, 0);
}

int Function_40(bool bParam0, bool bParam1, bool bParam2) //Position: 0x111A / 4378
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_27(bParam0))
			{
				if (!Function_25(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

int Function_41(int iParam0, bool bParam1) //Position: 0x115E / 4446
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_42(iParam0);
	}
	if (!Function_27(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_42(int iParam0) //Position: 0x11CC / 4556
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_43(int iParam0, int iParam1, int iParam2) //Position: 0x11E5 / 4581
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_44(bool bParam0) //Position: 0x11FA / 4602
{
	return Function_45(0, bParam0);
}

int Function_45(int iParam0, bool bParam1) //Position: 0x1206 / 4614
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_46(iParam0);
	}
	if (!Function_27(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_46(int iParam0) //Position: 0x126D / 4717
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_47(bool bParam0) //Position: 0x127D / 4733
{
	return Function_41(12, bParam0);
}

int Function_48(int iParam0) //Position: 0x128A / 4746
{
	return Function_41(11, iParam0);
}

void Function_49(bool bParam0, int iParam1, char* cParam2) //Position: 0x1297 / 4759
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

int Function_50() //Position: 0x12B8 / 4792
{
	if (!Function_64(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_headshots");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_bagcaptures");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_63();
	Function_51();
	return 1;
}

void Function_51() //Position: 0x1354 / 4948
{
	if (Function_60())
	{
		NET_PLAYER_LIST_SET_TEAM_SORT(1);
		if (Function_59())
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(2);
		}
		else
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(4);
		}
		Function_52(0, 0);
		Function_52(1, 0);
	}
	return;
}

void Function_52(bool bParam0, bool bParam1) //Position: 0x137F / 4991
{
	int iVar0;
	bool bVar1;
	
	if (bParam0 == Function_39())
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	bVar1 = Function_58(bParam0);
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), false, false);
	if (bParam1)
	{
		Function_53(iVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(iVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(iVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_53(int iParam0, int iParam1, bool bParam2) //Position: 0x141E / 5150
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_29())
	{
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000002:
				Var1 = { StackVal, StackVal, StackVal, Function_54(iParam1, 0) };
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
		if (Function_33())
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

struct<16> Function_54(var uParam0, var uParam1) //Position: 0x1511 / 5393
{
	return StackVal, StackVal, StackVal, Function_55(Function_56(uParam0), uParam1);
}

struct<16> Function_55(bool bParam0, bool bParam1) //Position: 0x1523 / 5411
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

int Function_56(int iParam0) //Position: 0x1558 / 5464
{
	if (!Function_57())
	{
		return 0;
	}
	return StackVal;
}

bool Function_57() //Position: 0x1571 / 5489
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_58(int iParam0) //Position: 0x157E / 5502
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_59() //Position: 0x159A / 5530
{
	return Function_39() == 4294967295;
}

bool Function_60() //Position: 0x15A5 / 5541
{
	return Function_61(2);
}

int Function_61(int iParam0) //Position: 0x15AF / 5551
{
	return Function_62(&Global_79349, iParam0);
}

int Function_62(var uParam0, bool bParam1) //Position: 0x15BE / 5566
{
	return Function_13(uParam0->f_44, bParam1);
}

void Function_63() //Position: 0x15CD / 5581
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

bool Function_64(bool bParam0) //Position: 0x160A / 5642
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_29() || Function_68(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66(1) };
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
	Function_65(Function_29());
	return 1;
}

void Function_65(bool bParam0) //Position: 0x168B / 5771
{
	if (bParam0 || Function_12(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_12(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_12(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_12(1048576) || Function_12(4)) || Function_89(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_9(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_66(int iParam0) //Position: 0x1714 / 5908
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_67(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1728 / 5928
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

int Function_68(bool bParam0, bool bParam1) //Position: 0x176D / 5997
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

void Function_69(vector3 vParam0, float fParam3) //Position: 0x17A1 / 6049
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_73(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_73(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_70(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_70(bool bParam0) //Position: 0x1854 / 6228
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
	return Function_71(bVar0);
}

int Function_71(bool bParam0) //Position: 0x188F / 6287
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
	Function_72(bVar0);
	return bVar0;
}

void Function_72(bool bParam0) //Position: 0x18DD / 6365
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_73() //Position: 0x18F0 / 6384
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_74(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x191F / 6431
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_75(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 7290, 1, 125, 0, 0, 0);
	Function_75(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_75(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x19A2 / 6562
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_76(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_76(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x19ED / 6637
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
			fVar14 = Function_77(iParam0->f_36);
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

var Function_77(float fParam0) //Position: 0x1C6C / 7276
{
	return (fParam0 * 57.29578f);
}

var Function_78(int iParam0, var uParam1) //Position: 0x1C7A / 7290
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_79(int iParam0, var uParam1) //Position: 0x1CDF / 7391
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_one_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_80() //Position: 0x1D50 / 7504
{
	int iVar0;
	
	iVar0 = Function_85(Global_83591.f_140, &vLocal_48, 0.0f, &Global_83591 + 276, 1);
	Function_81(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_81(bool bParam0, int iParam1) //Position: 0x1D7D / 7549
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_126(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_84((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_84((*iParam1)[iVar202], &iVar21))
		{
			if (Function_82((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_82(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1E8C / 7820
{
	float fVar0;
	
	if (!Function_83(bParam0))
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

bool Function_83(int iParam0) //Position: 0x1FB3 / 8115
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_84(bool bParam0, int iParam1) //Position: 0x1FC5 / 8133
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

var Function_85(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x2021 / 8225
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_87(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_84((*uParam3)[iVar12], &iVar2))
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
		if (Function_84((*uParam3)[iVar12], &iVar2))
		{
			if (Function_86((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_86(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x210F / 8463
{
	if (!Function_83(bParam0))
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

var Function_87(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x22A0 / 8864
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_88()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_88() //Position: 0x230C / 8972
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_89(bool bParam0, bool bParam1) //Position: 0x2333 / 9011
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_90() //Position: 0x2353 / 9043
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
						Function_91("CTF_sym_help", 4294967295);
						break;
					
					case 0x00000008:
						Function_91("CTF_one_help", 4294967295);
						break;
					
					case 0x00000007:
						Function_91("CTF_mul_help", 4294967295);
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

void Function_91(char* cParam0, int iParam1) //Position: 0x23E8 / 9192
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

int Function_92(int iParam0) //Position: 0x247F / 9343
{
	int iVar0;
	
	if (!Function_103(*iParam0) || (Function_124(64) && Function_99()))
	{
		iParam0->f_4 = 0;
		Function_16(iParam0);
		if (!Function_103(*iParam0))
		{
		}
		if (Function_124(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_103(*iParam0))
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
						(iParam0 + 12[Function_96(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
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
								Function_95((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_94((iParam0 + 12[StackVal5])->f_12, 1);
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
			while (iVar0 <= Function_93(3, iParam0->f_876))
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

int Function_93(int iParam0, int iParam1) //Position: 0x2806 / 10246
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_94(bool bParam0, bool bParam1) //Position: 0x2818 / 10264
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

void Function_95(bool bParam0, bool bParam1) //Position: 0x286C / 10348
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

int Function_96(var uParam0, var uParam1, int iParam2) //Position: 0x28BD / 10429
{
	return Function_97(Global_29006, uParam0, uParam1, iParam2);
}

int Function_97(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x28CF / 10447
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_98(iParam0))
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

bool Function_98(int iParam0) //Position: 0x296B / 10603
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_99() //Position: 0x2981 / 10625
{
	return !Function_100();
}

bool Function_100() //Position: 0x298B / 10635
{
	if (Function_102())
	{
		return (Function_101() != 1 || Function_101() != 0);
	}
	return 0;
}

int Function_101() //Position: 0x29A4 / 10660
{
	return Global_79349.f_16;
}

bool Function_102() //Position: 0x29B0 / 10672
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_103(int iParam0) //Position: 0x29B9 / 10681
{
	if (!Function_98(iParam0))
	{
		return 1;
	}
	return Function_104(&(Global_29008[iParam0]), 4);
}

int Function_104(var uParam0, bool bParam1) //Position: 0x29D5 / 10709
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_105(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x29F1 / 10737
{
	float fVar0;
	
	if (Function_120())
	{
		if (Function_119(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_115(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_109((iParam0 + 8[iParam0->f_1125])->f_12, 0, iParam3, 0, 0);
				Function_106((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_109((iParam0 + 8[iParam0->f_1125])->f_16, 0, iParam3, 0, 0);
				Function_106((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_106(int iParam0, var uParam1, int iParam2) //Position: 0x2A94 / 10900
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_108(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_107(iParam2);
	}
	return;
}

void Function_107(int iParam0) //Position: 0x2AB9 / 10937
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_108(int iParam0) //Position: 0x2ACE / 10958
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_109(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2AE3 / 10979
{
	int iVar0;
	bool bVar1;
	
	Function_114(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_113(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_110(StackVal, bVar1, bParam4);
		}
	}
}

void Function_110(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B55 / 11093
{
	int iVar0;
	
	Function_114(iParam0);
	Function_112(bParam1);
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
	Function_111();
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

void Function_111() //Position: 0x2CCE / 11470
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_112(bool bParam0) //Position: 0x2CDA / 11482
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

void Function_113(int iParam0, int iParam1) //Position: 0x2D20 / 11552
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_114(iParam0);
	Function_112(iVar0);
	PRINTNL();
	Function_110(iParam0, iVar0, iParam1);
	return;
}

void Function_114(int iParam0) //Position: 0x2D45 / 11589
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

float Function_115(int iParam0) //Position: 0x2D8B / 11659
{
	return -Function_116(iParam0);
}

float Function_116(int iParam0) //Position: 0x2D97 / 11671
{
	if (Function_119(iParam0))
	{
		if (Function_118(iParam0))
		{
			return StackVal;
		}
		Function_117();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_117() //Position: 0x2E68 / 11880
{
	if (!Function_120())
	{
	}
	return;
}

bool Function_118(int iParam0) //Position: 0x2E75 / 11893
{
	return Function_13(*iParam0, 2);
}

bool Function_119(int iParam0) //Position: 0x2E82 / 11906
{
	return Function_13(*iParam0, 1);
}

bool Function_120() //Position: 0x2E8F / 11919
{
	return NET_IS_IN_SESSION();
}

void Function_121() //Position: 0x2E98 / 11928
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_126());
	Function_122(bVar0, "bottle", Local_139.f_156);
	Function_122(bVar0, "mug0", Local_139.f_156);
	Function_122(bVar0, "glass", Local_139.f_156);
	Function_122(bVar0, "crate14", Local_139.f_156);
	Function_122(bVar0, "package", Local_139.f_156);
	Function_122(bVar0, "nlantern05", Local_139.f_156);
	Function_122(bVar0, "arm_gunsmith01_flag", Local_139.f_156);
	Function_122(bVar0, "c_gen_blanket15", Local_139.f_156);
	Function_122(bVar0, "arm_fs01_flag", Local_139.f_156);
	Function_122(bVar0, "c_tes_blanket", Local_139.f_156);
	Function_122(bVar0, "p_gen_bucket02x", Local_139.f_156);
	Function_122(bVar0, "p_gen_bucket03x", Local_139.f_156);
	Function_122(bVar0, "p_gen_wagonwheel01x", Local_139.f_156);
	Function_122(bVar0, "p_gen_basin01x", Local_139.f_156);
	Function_122(bVar0, "p_gen_can01x", Local_139.f_156);
	Function_122(bVar0, "p_gen_can02x", Local_139.f_156);
	Function_122(bVar0, "jar0", Local_139.f_156);
	Function_122(bVar0, "book", Local_139.f_156);
	Function_122(bVar0, "p_gen_hatbox01x", Local_139.f_156);
	Function_122(bVar0, "spittoon", Local_139.f_156);
	Function_122(bVar0, "milkcan", Local_139.f_156);
	Function_122(bVar0, "jug0", Local_139.f_156);
	Function_122(bVar0, "broom", Local_139.f_156);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_122(bool bParam0, bool bParam1, bool bParam2) //Position: 0x30A7 / 12455
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_126(), bParam0, 4294967295, 1);
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

void Function_123(int iParam0, bool bParam1) //Position: 0x3100 / 12544
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

bool Function_124(int iParam0) //Position: 0x3128 / 12584
{
	return Function_13(StackVal, iParam0);
}

void Function_125(int iParam0, var uParam1) //Position: 0x313B / 12603
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = uParam1;
	return;
}

var Function_126() //Position: 0x315C / 12636
{
	bool bVar0;
	
	return bVar0;
}

bool Function_127() //Position: 0x3164 / 12644
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(-2191.48f, 17.45f, 2643.93f, 5.0f, "gatling", 1);
	bVar1 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(-2157.38f, 20.14f, 2601.73f, 5.0f, "gatling", 1);
	bVar2 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(-2131.38f, 20.14f, 2623.73f, 5.0f, "gatling", 1);
	bVar3 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(-2082.38f, 16.14f, 2585.73f, 5.0f, "gatling", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		DECOR_SET_FLOAT(GET_OBJECT_FROM_PHYSINST(bVar0), "fRestrictRotation", 160.0f);
	}
	else
	{
		return 0;
	}
	if (IS_PHYSINST_VALID(bVar1))
	{
		DECOR_SET_FLOAT(GET_OBJECT_FROM_PHYSINST(bVar1), "fRestrictRotation", 100.0f);
	}
	else
	{
		return 0;
	}
	if (IS_PHYSINST_VALID(bVar2))
	{
		DECOR_SET_FLOAT(GET_OBJECT_FROM_PHYSINST(bVar2), "fRestrictRotation", 100.0f);
	}
	else
	{
		return 0;
	}
	if (IS_PHYSINST_VALID(bVar3))
	{
		DECOR_SET_FLOAT(GET_OBJECT_FROM_PHYSINST(bVar3), "fRestrictRotation", 140.0f);
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_128(bool bParam0) //Position: 0x32A7 / 12967
{
	Function_123(16, bParam0);
	return;
}

void Function_129(var uParam0) //Position: 0x32B4 / 12980
{
	Function_123(8, uParam0);
	return;
}

bool Function_130() //Position: 0x32C1 / 12993
{
	Function_165(&iLocal_583, 0, 9, 30, 0, 0, 2);
	Function_165(&iLocal_583, 1, 9, 30, 2, 2, 2);
	Function_165(&iLocal_583, 2, 12, 0, 1, 0, 1);
	Function_165(&iLocal_583, 3, 12, 0, 1, 1, 0);
	Function_165(&iLocal_583, 4, 23, 0, 0, 0, 1);
	Function_162(&iLocal_583);
	Global_83591 = 5;
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_160();
	ENABLE_CHILD_SECTOR("mp_arm_base01x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_arm_base01x", 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	if (!Function_156(Local_139))
	{
		return 0;
	}
	Function_155("FTR_SONG_03", "FTR_SONG_02", 0, 58, 58, 1);
	Function_153(Local_139.f_848);
	Function_146(&Global_83591 + 276, 0);
	Function_144(&Global_83591, 1, 22, 1, 1);
	Function_144(&Global_83591, 2, 5, 10, 1);
	Function_144(&Global_83591, 3, 9, 10, 1);
	Function_144(&Global_83591, 4, 15, 15, 1);
	Function_139(&Global_83591, 1, 19, 5, 1);
	Function_139(&Global_83591, 2, 7, 10, 1);
	Function_139(&Global_83591, 3, 16, 15, 1);
	Function_139(&Global_83591, 4, 11, 10, 1);
	Function_138(&Global_83591);
	Function_137(&Global_83591 + 276, 4);
	Function_136(0, 6);
	Function_136(1, 1);
	if (!Function_131(&uLocal_361))
	{
		return 0;
	}
	return 1;
}

bool Function_131(int iParam0) //Position: 0x3415 / 13333
{
	if (!Function_135(iParam0, Global_30640[0]))
	{
		return 0;
	}
	Function_134(iParam0, "narmadillo", "trainstation01", 1, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "trainstation01", 2, 1, 0, 1, 1);
	Function_132(iParam0, "narmadillo", "ncattlePen", 1);
	Function_132(iParam0, "narmadillo", "ncattlePen", 2);
	Function_132(iParam0, "narmadillo", "ncattlePen", 3);
	Function_132(iParam0, "narmadillo", "blacksmith01", 1);
	Function_132(iParam0, "narmadillo", "blacksmith01", 2);
	Function_132(iParam0, "narmadillo", "stable", 1);
	Function_132(iParam0, "narmadillo", "stable", 2);
	Function_132(iParam0, "narmadillo", "stable", 3);
	Function_132(iParam0, "narmadillo", "stable", 4);
	Function_134(iParam0, "narmadillo", "saloon01", 1, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "saloon01", 3, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "saloon01", 4, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "saloon01", 5, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "saloon01", 6, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "saloon01", 7, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "saloon01", 8, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "saloon01", 9, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "saloon01", 13, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "saloon01", 14, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "freightstation01", 1, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "freightstation01", 2, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "freightstation01", 3, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "generalStore", 1, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "generalStore", 2, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "generalStore", 3, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "generalStore", 9, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "ruinedBank", 1, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "ruinedBank", 2, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "ruinedBank", 3, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "ruinedBank", 4, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "schoolhouse", 1, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "schoolhouse", 2, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "schoolhouse", 3, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "sheriffsOffice01", 1, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "sheriffsOffice01", 2, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "sheriffsOffice01", 3, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "doctorsOffice01", 1, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "gunsmith01", 1, 1, 0, 1, 1);
	Function_134(iParam0, "narmadillo", "gunsmith01", 2, 1, 0, 1, 1);
	Function_132(iParam0, "narmadillo", "corralPens01", 1);
	return 1;
}

int Function_132(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x3A0D / 14861
{
	int iVar0;
	
	iVar0 = iParam0->f_876;
	if (!Function_133(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	Function_11(iParam0 + 12[iVar05] + 16, 32);
	return 1;
}

bool Function_133(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3A3F / 14911
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

int Function_134(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x3A9B / 15003
{
	int iVar0;
	
	iVar0 = iParam0->f_876;
	if (!Function_133(iParam0, uParam1, uParam2, iParam3))
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

bool Function_135(int iParam0, int iParam1) //Position: 0x3B0C / 15116
{
	int iVar0;
	
	if (!Function_98(iParam1))
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

void Function_136(int iParam0, int iParam1) //Position: 0x3B82 / 15234
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_137(int iParam0, int iParam1) //Position: 0x3B90 / 15248
{
	(iParam0 + 228)->f_220 = 0;
	Function_11(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_138(int iParam0) //Position: 0x3BA8 / 15272
{
	iParam0->f_844 = 0;
	return;
}

void Function_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3BB4 / 15284
{
	Function_140(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_140(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3BCC / 15308
{
	Function_141(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_141(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3BE3 / 15331
{
	if (!Function_143(iParam1))
	{
		return;
	}
	Function_142(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_142(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3C06 / 15366
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

bool Function_143(int iParam0) //Position: 0x3C30 / 15408
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_144(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3C40 / 15424
{
	Function_145(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_145(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3C58 / 15448
{
	Function_141(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_146(int iParam0, bool bParam1) //Position: 0x3C6D / 15469
{
	Function_150(iParam0);
	Function_150(iParam0 + 228);
	if (bParam1)
	{
		Function_147(iParam0);
	}
	return;
}

void Function_147(int iParam0) //Position: 0x3C89 / 15497
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_148(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_148(var uParam0, int iParam1) //Position: 0x3CA9 / 15529
{
	Function_149(uParam0, iParam1, 0);
	return;
}

void Function_149(int iParam0, int iParam1, int iParam2) //Position: 0x3CB7 / 15543
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_150(int iParam0) //Position: 0x3CC8 / 15560
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_152(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_151(iParam0, 0.0f);
	return;
}

void Function_151(var uParam0, int iParam1) //Position: 0x3CF5 / 15605
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_152(int iParam0) //Position: 0x3D01 / 15617
{
	Function_142(iParam0, 4294967295, 0, 1);
	return;
}

void Function_153(bool bParam0) //Position: 0x3D0F / 15631
{
	DECOR_SET_OBJECT(Function_154(), "LobbyGringoSet", bParam0);
	return;
}

var Function_154() //Position: 0x3D2F / 15663
{
	return Global_83591.f_140;
}

void Function_155(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x3D3B / 15675
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

bool Function_156(int iParam0) //Position: 0x3DCB / 15819
{
	Function_159(iParam0);
	if (Function_158())
	{
		Function_137(&Global_83591 + 276, 2);
	}
	Function_157();
	vLocal_48 = { StackVal, StackVal, Function_157() };
	return 1;
}

vector3 Function_157() //Position: 0x3DEF / 15855
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_154();
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

bool Function_158() //Position: 0x3E37 / 15927
{
	return Function_13(Global_79962, 1024);
}

void Function_159(var uParam0) //Position: 0x3E47 / 15943
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_160() //Position: 0x3E55 / 15957
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
	
	Function_161(4, 1);
	uVar0 = uVar0;
	Local_139 = CREATE_LAYOUT("CTF_ARM_layout");
	Local_139.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_139, "playablespace", 2, -2141.891f, 16.09741f, 2611.108f, 0.0f, -54.89782f, 0.0f, 224.8741f, 95.86294f, 205.0992f);
	Local_139.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_139, "v_clear_vol", 2, -2141.653f, 17.97647f, 2595.312f, 0.0f, 0.0f, 0.0f, 203.2629f, 24.89766f, 211.4093f);
	CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_A", 3, -2094.745f, 16.88746f, 2604.671f, 0.0f, -63.57409f, 0.0f, 1.5f, 0.729394f, 1.5f);
	CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_B", 3, -2185.963f, 16.37292f, 2605.687f, 0.0f, 89.4496f, 0.0f, 1.5f, 1.538974f, 1.5f);
	CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A0", 2, -2077.031f, 23.63431f, 2616.557f, 0.0f, -424.2065f, 0.0f, 3.740126f, 1.926144f, 2.866025f);
	CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A1", 2, -2078.096f, 17.77231f, 2596.518f, 0.0f, -487.2594f, 0.0f, 4.731f, 2.396129f, 2.805853f);
	CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A2", 2, -2076.0f, 16.70666f, 2621.615f, 0.0f, -424.866f, 0.0f, 2.313593f, 2.396129f, 4.102636f);
	CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A3", 2, -2106.84f, 16.28978f, 2633.706f, 0.0f, -449.0757f, 0.0f, 4.290207f, 2.396129f, 3.652205f);
	CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A4", 2, -2104.258f, 16.32345f, 2591.543f, 0.0f, -151.1903f, 0.0f, 3.587987f, 2.396129f, 4.539114f);
	Local_139.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A5", 3, -2129.224f, 16.59198f, 2624.553f, 0.0f, 180.8507f, 0.0f, 2.839402f, 1.0f, 1.0f);
	Local_139.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A6", 3, -2110.382f, 22.16126f, 2598.58f, 0.0f, 265.6631f, 0.0f, 0.9406268f, 1.0f, 1.0f);
	Local_139.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A7", 3, -2070.752f, 19.4169f, 2646.956f, 0.0f, 224.9632f, 0.0f, 0.5134988f, 1.0f, 2.077729f);
	Local_139.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A8", 3, -2121.405f, 16.6142f, 2597.137f, 0.0f, 180.273f, 0.0f, 0.425142f, 1.0f, 0.7359129f);
	CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B0", 2, -2172.402f, 16.44941f, 2635.511f, 0.0f, -320.9752f, 0.0f, 2.576726f, 1.328179f, 2.273309f);
	CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B1", 2, -2210.032f, 16.50301f, 2619.269f, 0.0f, -330.9711f, 0.0f, 1.030395f, 1.286289f, 1.093301f);
	CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B2", 2, -2198.446f, 16.0f, 2593.185f, 0.0f, -269.0887f, 0.0f, 2.158688f, 2.670383f, 2.059409f);
	CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B3", 2, -2205.244f, 16.17675f, 2610.248f, 0.1745673f, -683.3621f, 0.1388724f, 2.625432f, 2.841631f, 2.705596f);
	CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B4", 2, -2179.456f, 16.27993f, 2584.015f, 0.0f, -605.5997f, 0.0f, 3.994965f, 2.233602f, 4.474218f);
	Local_139.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B5", 3, -2148.902f, 16.77384f, 2626.238f, 0.0f, 172.9171f, 0.0f, 0.9303712f, 1.0f, 1.19438f);
	Local_139.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B6", 3, -2164.468f, 20.08108f, 2625.391f, 0.0f, 88.76717f, 0.0f, 0.9406268f, 1.0f, 1.0f);
	Local_139.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B7", 3, -2194.246f, 16.2219f, 2560f, 0.0f, 15.85728f, 0.0f, 0.5134988f, 1.0f, 2.077729f);
	Local_139.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B8", 3, -2159.756f, 16.87441f, 2588.129f, 0.0f, 272.1148f, 0.0f, 0.5801867f, 1.0f, 0.6370139f);
	*(&Local_139 + 192) = { -2139.306f, 16.09741f, 2607.122f };
	*(&Local_139 + 192 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_216 = CREATE_POINT_IN_LAYOUT(Local_139, "Showdown_A", -2139.306f, 16.09741f, 2607.122f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 220) = { -2139.346f, 16.09741f, 2615.102f };
	*(&Local_139 + 220 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_244 = CREATE_POINT_IN_LAYOUT(Local_139, "Showdown_B", -2139.346f, 16.09741f, 2615.102f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_0", -2139.079f, 16.09741f, 2611.201f, 0.0f, 90.39666f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_1", -2140.524f, 16.44941f, 2643.42f, 0.0f, -178.6001f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_2", -2135.944f, 16.62463f, 2562.755f, 0.0f, -1.076112f, 0.0f);
	Local_139.f_248 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_139, 8, 0);
	*(&Local_139 + 252[06]) = { -2116.377f, 16.36346f, 2629.35f };
	*(&Local_139 + 252[06] + 12) = { 12.25118f, -92.18165f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P1", -2116.377f, 16.36346f, 2629.35f, 12.25118f, -92.18165f, 0.0f);
	DECOR_SET_INT(bVar1, "type", true);
	DECOR_SET_INT(bVar1, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_139.f_248);
	*(&Local_139 + 252[16]) = { -2165.131f, 19.92763f, 2598.645f };
	*(&Local_139 + 252[16] + 12) = { 0.0f, -359.868f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P2", -2165.131f, 19.92763f, 2598.645f, 0.0f, -359.868f, 0.0f);
	DECOR_SET_INT(bVar2, "type", true);
	DECOR_SET_INT(bVar2, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_139.f_248);
	*(&Local_139 + 252[26]) = { -2204.0f, 15.97112f, 2568.0f };
	*(&Local_139 + 252[26] + 12) = { 0.0f, -314.5535f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_S1", -2204.0f, 15.97112f, 2568.0f, 0.0f, -314.5535f, 0.0f);
	DECOR_SET_INT(bVar3, "type", true);
	DECOR_SET_INT(bVar3, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_139.f_248);
	*(&Local_139 + 252[36]) = { -2069.983f, 18.79698f, 2642.017f };
	*(&Local_139 + 252[36] + 12) = { 0.0f, 133.4704f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_S2", -2069.983f, 18.79698f, 2642.017f, 0.0f, 133.4704f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_139.f_248);
	*(&Local_139 + 252[46]) = { -2152.242f, 16.77385f, 2623.815f };
	*(&Local_139 + 252[46] + 12) = { 0.0f, 91.91957f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_B1", -2152.242f, 16.77385f, 2623.815f, 0.0f, 91.91957f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_139.f_248);
	*(&Local_139 + 252[56]) = { -2136.835f, 16.87215f, 2595.289f };
	*(&Local_139 + 252[56] + 12) = { 0.0f, 1.040575f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_B2", -2136.835f, 16.87215f, 2595.289f, 0.0f, 1.040575f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_139.f_248);
	*(&Local_139 + 252[66]) = { -2172.759f, 16.44941f, 2629.386f };
	*(&Local_139 + 252[66] + 12) = { 0.0f, 270.3396f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R1", -2172.759f, 16.44941f, 2629.386f, 0.0f, 270.3396f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_139.f_248);
	*(&Local_139 + 252[76]) = { -2108.071f, 16.64206f, 2588.195f };
	*(&Local_139 + 252[76] + 12) = { 0.0f, 91.06483f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R2", -2108.071f, 16.64206f, 2588.195f, 0.0f, 91.06483f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_139.f_248);
	*(&Local_139 + 252[86]) = { -2167.898f, 16.46976f, 2606.878f };
	*(&Local_139 + 252[86] + 12) = { 0.0f, 0.3488827f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_D1", -2167.898f, 16.46976f, 2606.878f, 0.0f, 0.3488827f, 0.0f);
	DECOR_SET_INT(bVar9, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_139.f_248);
	*(&Local_139 + 252[96]) = { -2107.098f, 16.44941f, 2624.512f };
	*(&Local_139 + 252[96] + 12) = { 0.0f, 88.06414f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_D2", -2107.098f, 16.44941f, 2624.512f, 0.0f, 88.06414f, 0.0f);
	DECOR_SET_INT(bVar10, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_139.f_248);
	*(&Local_139 + 252[106]) = { -2156.518f, 16.44941f, 2578.414f };
	*(&Local_139 + 252[106] + 12) = { 0.0f, 92.83203f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_A1", -2156.518f, 16.44941f, 2578.414f, 0.0f, 92.83203f, 0.0f);
	DECOR_SET_INT(bVar11, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_139.f_248);
	*(&Local_139 + 252[116]) = { -2124.098f, 16.44941f, 2638.697f };
	*(&Local_139 + 252[116] + 12) = { 0.0f, 88.37368f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_A2", -2124.098f, 16.44941f, 2638.697f, 0.0f, 88.37368f, 0.0f);
	DECOR_SET_INT(bVar12, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_139.f_248);
	Local_139.f_544 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagsSet", Local_139, 8, 0);
	*(&Local_139 + 548[06]) = { -2153.677f, 17.45727f, 2643.974f };
	*(&Local_139 + 548[06] + 12) = { 0.0f, 5.217005f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_139, "Fire_01", -2153.677f, 17.45727f, 2643.974f, 0.0f, 5.217005f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_139.f_544);
	*(&Local_139 + 548[16]) = { -2150.691f, 17.30603f, 2647.929f };
	*(&Local_139 + 548[16] + 12) = { 0.0f, 21.58788f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_139, "Fire_02", -2150.691f, 17.30603f, 2647.929f, 0.0f, 21.58788f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_139.f_544);
	*(&Local_139 + 548[26]) = { -2147.511f, 17.48266f, 2651.801f };
	*(&Local_139 + 548[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_139, "Fire_03", -2147.511f, 17.48266f, 2651.801f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_139.f_544);
	*(&Local_139 + 548[36]) = { -2118.82f, 17.67888f, 2574.736f };
	*(&Local_139 + 548[36] + 12) = { 0.0f, -0.5296193f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_139, "Fire_04", -2118.82f, 17.67888f, 2574.736f, 0.0f, -0.5296193f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_139.f_544);
	*(&Local_139 + 548[46]) = { -2120.977f, 17.33451f, 2569.97f };
	*(&Local_139 + 548[46] + 12) = { 0.0f, 15.4013f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_139, "Fire_05", -2120.977f, 17.33451f, 2569.97f, 0.0f, 15.4013f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_139.f_544);
	*(&Local_139 + 548[56]) = { -2123.296f, 17.51812f, 2565.515f };
	*(&Local_139 + 548[56] + 12) = { 0.0f, -2.269914f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_139, "Fire_06", -2123.296f, 17.51812f, 2565.515f, 0.0f, -2.269914f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_139.f_544);
	Local_139.f_696 = CREATE_OBJECTSET_IN_LAYOUT("SmokeFlagsSet", Local_139, 8, 0);
	*(&Local_139 + 700[06]) = { -2153.741f, 17.64862f, 2644.003f };
	*(&Local_139 + 700[06] + 12) = { 0.0f, -4.734074f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_139, "Smoke_01", -2153.741f, 17.64862f, 2644.003f, 0.0f, -4.734074f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_139.f_696);
	*(&Local_139 + 700[16]) = { -2150.484f, 17.40979f, 2647.944f };
	*(&Local_139 + 700[16] + 12) = { 0.0f, 19.20798f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_139, "Smoke_02", -2150.484f, 17.40979f, 2647.944f, 0.0f, 19.20798f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_139.f_696);
	*(&Local_139 + 700[26]) = { -2147.274f, 17.44317f, 2651.552f };
	*(&Local_139 + 700[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_139, "Smoke_03", -2147.274f, 17.44317f, 2651.552f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_139.f_696);
	*(&Local_139 + 700[36]) = { -2123.218f, 17.55745f, 2565.541f };
	*(&Local_139 + 700[36] + 12) = { 0.0f, -15.6966f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_139, "Smoke_04", -2123.218f, 17.55745f, 2565.541f, 0.0f, -15.6966f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_139.f_696);
	*(&Local_139 + 700[46]) = { -2120.998f, 17.42773f, 2569.963f };
	*(&Local_139 + 700[46] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_139, "Smoke_05", -2120.998f, 17.42773f, 2569.963f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_139.f_696);
	*(&Local_139 + 700[56]) = { -2118.798f, 17.67373f, 2574.733f };
	*(&Local_139 + 700[56] + 12) = { 0.0f, -20.82627f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_139, "Smoke_06", -2118.798f, 17.67373f, 2574.733f, 0.0f, -20.82627f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_139.f_696);
	Local_139.f_848 = CREATE_OBJECTSET_IN_LAYOUT(Function_126(), Local_139, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand", "smoking_stand", -2152.593f, 16.44941f, 2575.259f, 0.0f, -97.28159f, 0.0f), Local_139.f_848);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand1", "smoking_stand", -2158.838f, 16.57014f, 2565.314f, 0.0f, -209.5068f, 0.0f), Local_139.f_848);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand2", "smoking_stand", -2144.351f, 16.60254f, 2568.241f, 0.0f, 112.6558f, 0.0f), Local_139.f_848);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_chopwood_w_any", "stand_chopwood_w_any", -2145.777f, 16.44941f, 2579.104f, 0.0f, -54.104f, 0.0f), Local_139.f_848);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "repair_kneel", "repair_kneel", -2142.03f, 16.46156f, 2573.172f, 0.0f, -89.6236f, 0.0f), Local_139.f_848);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "rand_idle_stand", "rand_idle_stand", -2162.88f, 16.62463f, 2564.0f, 0.0f, -157.0545f, 0.0f), Local_139.f_848);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "rand_idle_stand1", "rand_idle_stand", -2152.235f, 16.55283f, 2565.279f, 0.0f, -175.3769f, 0.0f), Local_139.f_848);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "sharpen_axe", "sharpen_axe", -2155.889f, 16.51797f, 2565.408f, 0.0f, 150.0f, 0.0f), Local_139.f_848);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "drink_from_barrel", "drink_from_barrel", -2165.785f, 16.50934f, 2567.38f, 0.0f, 52.26007f, 0.0f), Local_139.f_848);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "rand_idle_stand2", "rand_idle_stand", -2164.281f, 16.46638f, 2573.677f, 0.0f, -88.73591f, 0.0f), Local_139.f_848);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "knl_watertrough", "knl_watertrough", -2158.693f, 16.44941f, 2576.211f, 0.0f, 180.0f, 0.0f), Local_139.f_848);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -2150.452f, 16.44941f, 2576.049f, 0.0f, 58.75054f, 0.0f), Local_139.f_848);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunkdancing_e_any", "stand_drunkdancing_e_any", -2154.418f, 16.44941f, 2573.157f, 0.0f, -86.69936f, 0.0f), Local_139.f_848);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "opium_pipe", "opium_pipe", -2153.774f, 16.44941f, 2574.763f, 0.0f, -49.96101f, 0.0f), Local_139.f_848);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_yelling_mid", "stand_yelling_mid", -2149.583f, 16.45459f, 2574.785f, 0.0f, 75.47908f, 0.0f), Local_139.f_848);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -2155.998f, 16.47018f, 2568.389f, 0.0f, 200.9247f, 0.0f), Local_139.f_848);
	Local_139.f_852 = CREATE_OBJECTSET_IN_LAYOUT(Function_126(), Local_139, 17, 0);
	Local_139.f_856 = CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x0", "p_gen_skullPost02x", -2190.431f, 16.425f, 2639.644f, 0.0f, 0.0f, 0.0f, 1);
	Local_139.f_860 = CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x1", "p_gen_skullPost02x", -2191.583f, 16.225f, 2649.165f, 0.0f, 0.0f, 0.0f, 1);
	Local_139.f_864 = CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x2", "p_gen_skullPost02x", -2159.939f, 20.00423f, 2605.951f, 0.0f, 0.0f, 0.0f, 1);
	Local_139.f_868 = CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x3", "p_gen_skullPost02x", -2155.528f, 20.01279f, 2602.876f, 0.0f, 0.0f, 0.0f, 1);
	Local_139.f_872 = CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x4", "p_gen_skullPost02x", -2133.688f, 19.90342f, 2622.876f, 0.0f, 0.0f, 0.0f, 1);
	Local_139.f_876 = CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x5", "p_gen_skullPost02x", -2132.137f, 19.90342f, 2620.933f, 0.0f, 0.0f, 0.0f, 1);
	Local_139.f_880 = CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x6", "p_gen_skullPost02x", -2084.168f, 16.0903f, 2587.923f, 0.0f, 0.0f, 0.0f, 1);
	Local_139.f_884 = CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x7", "p_gen_skullPost02x", -2083.27f, 16.06f, 2580.144f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_161(int iParam0, int iParam1) //Position: 0x558C / 21900
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

void Function_162(int iParam0) //Position: 0x55D5 / 21973
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_164("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_163(StackVal, 0);
	return;
}

void Function_163(var uParam0, int iParam1) //Position: 0x5647 / 22087
{
	Function_114(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_113(StackVal, iParam1);
	}
	return;
}

bool Function_164(char* cParam0) //Position: 0x5678 / 22136
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_165(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5697 / 22167
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_166() //Position: 0x56D9 / 22233
{
	while (!IS_EXITFLAG_SET())
	{
		Function_20(4792, 22263);
		WAIT(0);
	}
	return;
}

int Function_167(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x56F7 / 22263
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	Function_49(bParam1, iParam2, cParam3);
	bVar0 = false;
	bVar1 = Function_48(bParam0);
	bVar2 = Function_47(bParam0);
	bVar3 = Function_44(bParam0);
	iVar4 = Function_43(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_23(bParam0, iVar4, 0);
	}
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_41(34, bParam0));
		bVar0++;
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_12(4))
	{
		if (Function_35(bParam0, 1, 1))
		{
			if (Function_38(bParam0))
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
		Function_34(bVar0, bParam0);
	}
	if (Function_38(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	if (Function_29() && Function_33())
	{
	}
	return 0;
}

bool Function_168() //Position: 0x57FA / 22522
{
	return Function_124(2);
}

void Function_169() //Position: 0x5804 / 22532
{
	if (Function_168())
	{
		return;
	}
	Function_179();
	Function_177(&bLocal_39, "MP_CTF", 10, 0);
	Function_177(&bLocal_39, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_171(&bLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_90();
	Function_170();
	return;
}

void Function_170() //Position: 0x5868 / 22632
{
	while (!Function_124(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_171(int iParam0) //Position: 0x5883 / 22659
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_176();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_175(iParam0[iVar03], 8);
		}
		else if (Function_174())
		{
			iVar1 = 1;
			Function_175(iParam0[iVar03], 8);
		}
		Function_175(iParam0[iVar03], 16);
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
				Function_175(iParam0[iVar03], 1);
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
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_175(iParam0[iVar03], 2);
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
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_175(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_175(iParam0[iVar03], 2);
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
	Function_172();
	return 1;
}

void Function_172() //Position: 0x5BFE / 23550
{
	if (!Function_173(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_173(int iParam0) //Position: 0x5C3E / 23614
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_174() //Position: 0x5C5A / 23642
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

void Function_175(var uParam0, int iParam1) //Position: 0x5C85 / 23685
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_176() //Position: 0x5C96 / 23702
{
	if (!Function_173(128))
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

var Function_177(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5CD8 / 23768
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_178(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_175(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_178(var uParam0, int iParam1, int iParam2) //Position: 0x5D10 / 23824
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_175(uParam0[iVar03], 4);
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

void Function_179() //Position: 0x5DD4 / 24020
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

