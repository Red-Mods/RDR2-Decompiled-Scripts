//Decompiled with MagicRDR v1.0
//Function Count : 189
//Statics Count : 502
//Natives Count : 193
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
	struct<105> Local_11 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	struct<929> Local_138 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	fLocal_10 = 1.0f;
	iLocal_50 = 31;
	iLocal_51 = 33;
	iLocal_52 = 1;
	fLocal_53 = 2.0f;
	iLocal_55 = 0;
	iLocal_56 = 0;
	fLocal_83 = 60.0f;
	iLocal_130 = 0;
	iLocal_131 = 0;
	iLocal_132 = 0;
	iLocal_133 = 0;
	iLocal_134 = 0;
	iLocal_135 = 0;
	iLocal_136 = 0;
	iLocal_137 = 0;
	Function_178();
	if (Function_177())
	{
		Function_175();
	}
	else
	{
		if (Function_137())
		{
			Function_136(1);
		}
		else
		{
			Function_135(1);
		}
		while (!Function_134() && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			bVar1 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_138, Function_133(), "fire_comp_smoke_plume", *(&Local_138 + 784[iVar06]));
			if (IS_OBJECT_VALID(bVar1))
			{
				UNK_0x6745191B(bVar1, 0.0f, 0.0f, 0.0f);
			}
			iVar0++;
		}
		Function_132(0, 4);
		bVar2 = CREATE_WORLD_SECTOR(Local_138, "tumbleweed");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar2))
		{
			WAIT(false);
		}
		iVar3 = 2;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_131(64))
			{
				iVar3 = (iVar3 - 1);
				if (iVar3 <= 0)
				{
					Function_130(64, 0);
					Function_128();
					iVar3 = 2;
				}
			}
			Function_112(&iLocal_473, 0,1f, 0,7f, 12, 1.0f, 1.0f, 1.0f, 0.0f);
			Function_99(&uLocal_371);
			Function_24();
			WAIT(false);
		}
		Function_22(512);
		Function_18();
		Function_17(Global_83864.f_1284, 0, 1);
	}
	Function_15(&uLocal_371);
	DISABLE_CHILD_SECTOR("mp_tum_base01x");
	Function_6();
	Function_1();
	RESET_RMPTFX_ALL();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x180 / 384
{
	Function_2(&Local_138 + 4);
	RELEASE_LAYOUT_REF(Local_138);
	return;
}

void Function_2(int iParam0) //Position: 0x192 / 402
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

void Function_3(var uParam0, int iParam1) //Position: 0x1B8 / 440
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

void Function_4(var uParam0, int iParam1) //Position: 0x2E6 / 742
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0x300 / 768
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0x31D / 797
{
	Function_14();
	Function_2(&bLocal_38);
	Function_7();
	return;
}

void Function_7() //Position: 0x32E / 814
{
	Function_8();
	return;
}

void Function_8() //Position: 0x337 / 823
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

void Function_9(int iParam0, bool bParam1, int iParam2) //Position: 0x440 / 1088
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

void Function_10(var uParam0, int iParam1) //Position: 0x468 / 1128
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x47B / 1147
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_12(bool bParam0) //Position: 0x48A / 1162
{
	return Function_13(Global_76905.f_132, bParam0);
}

bool Function_13(var uParam0, bool bParam1) //Position: 0x49B / 1179
{
	return (uParam0 && bParam1) == 0;
}

void Function_14() //Position: 0x4A8 / 1192
{
	if (iLocal_45)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_45 = 0;
	}
	return;
}

void Function_15(int iParam0) //Position: 0x4E7 / 1255
{
	Function_130(64, 0);
	Function_16(iParam0);
	return;
}

void Function_16(int iParam0) //Position: 0x4F8 / 1272
{
	if (iParam0->f_400 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_400, 0);
		iParam0->f_400 = "";
	}
	return;
}

void Function_17(var uParam0, bool bParam1, bool bParam2) //Position: 0x518 / 1304
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_11(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_11(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_18() //Position: 0x545 / 1349
{
	Function_19(Function_21());
	return;
}

void Function_19(int iParam0) //Position: 0x551 / 1361
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

bool Function_20(int iParam0) //Position: 0x57E / 1406
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

int Function_21() //Position: 0x595 / 1429
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_22(int iParam0) //Position: 0x5AF / 1455
{
	Function_23(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x5E8 / 1512
{
	Function_10(uParam0, iParam1);
	return;
}

void Function_24() //Position: 0x5F5 / 1525
{
	Function_97();
	if (Function_96(1, 1))
	{
		Function_81(StackVal, StackVal, 7362, vLocal_47, 1, 7249);
	}
	else
	{
		if (!iLocal_46)
		{
			iLocal_46 = 1;
			Function_76(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_27(4650, 3586);
		Function_25();
	}
	return;
}

void Function_25() //Position: 0x640 / 1600
{
	if (IS_OBJECT_VALID(Local_11.f_104))
	{
		DESTROY_OBJECT(Local_11.f_104);
		Function_26(&Local_11);
	}
	return;
}

void Function_26(int iParam0) //Position: 0x65C / 1628
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

void Function_27(int iParam0, int iParam1) //Position: 0x682 / 1666
{
	Function_28(iParam0, iParam1, 3579);
	return;
}

void Function_28(var uParam0, var uParam1, int iParam2) //Position: 0x693 / 1683
{
	if (Function_12(0x4000000))
	{
		Function_37();
		Function_9(0x4000000, 0, 1);
	}
	if (Function_12(0x10000000))
	{
		Function_37();
		Function_9(0x10000000, 0, 1);
	}
	if (Function_12(2) != Function_12(0x2000000))
	{
		Function_37();
		Function_9(0x2000000, Function_12(2), 1);
	}
	if (Function_36())
	{
		Function_35(!Function_12(16));
	}
	if (Function_12(16))
	{
		Function_29(&uParam0, &uParam1, &iParam2);
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

void Function_29(var uParam0, var uParam1, int iParam2) //Position: 0x82C / 2092
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
			if (!Function_34(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_32(bVar1, 2048, 1))
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
				if (Function_30(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_30(bVar1, (4294966296 - bVar1), 1))
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

bool Function_30(bool bParam0, int iParam1, int iParam2) //Position: 0x9A4 / 2468
{
	var uVar0;
	
	return Function_31(bParam0, iParam1, &uVar0, iParam2);
}

int Function_31(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x9B5 / 2485
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

bool Function_32(bool bParam0, int iParam1, bool bParam2) //Position: 0xA1A / 2586
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_96(iParam1, bParam2);
	}
	if (!Function_34(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_33(iParam1), 64);
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

var Function_33(int iParam0) //Position: 0xA9B / 2715
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

bool Function_34(bool bParam0) //Position: 0xD24 / 3364
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

void Function_35(bool bParam0) //Position: 0xDC5 / 3525
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_9(16384, 0, 1);
	return;
}

bool Function_36() //Position: 0xDDF / 3551
{
	return Function_12(32768);
}

void Function_37() //Position: 0xDEC / 3564
{
	Function_9(32768, 1, 0);
	return;
}

int Function_38() //Position: 0xDFB / 3579
{
	return 1;
}

int Function_39(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xE02 / 3586
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_56(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_55(bParam0);
	bVar2 = Function_54(bParam0);
	bVar3 = Function_51(bParam0);
	iVar4 = Function_50(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_30(bParam0, iVar4, 0);
	}
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_48(34, bParam0));
		bVar0++;
	}
	if (Function_45(bParam0))
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
		if (Function_42(bParam0, 1, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "<SWAG_Y_RET>");
		}
	}
	else
	{
		Function_41(bVar0, bParam0);
	}
	if (Function_36() && Function_40())
	{
	}
	return 0;
}

bool Function_40() //Position: 0xED9 / 3801
{
	return (Function_12(4096) || Function_12(4));
}

void Function_41(bool bParam0, bool bParam1) //Position: 0xEEA / 3818
{
	if (Function_12(4))
	{
		if (Function_32(bParam1, 1024, 1))
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

bool Function_42(bool bParam0, int iParam1, bool bParam2) //Position: 0xF1D / 3869
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_44(iParam1, bParam2);
	}
	if (!Function_34(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_43(iParam1), 64);
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

var Function_43(int iParam0) //Position: 0xF9E / 3998
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

var Function_44(int iParam0, bool bParam1) //Position: 0x102D / 4141
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_45(bool bParam0) //Position: 0x104D / 4173
{
	if (Function_47(bParam0, 1, 0) != 4294967295 && Function_46() != 4294967295)
	{
		return 0;
	}
	return Function_47(bParam0, 1, 0) != Function_46();
}

int Function_46() //Position: 0x1075 / 4213
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_47(GET_LOCAL_SLOT(), 1, 0);
}

int Function_47(bool bParam0, bool bParam1, bool bParam2) //Position: 0x108C / 4236
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_34(bParam0))
			{
				if (!Function_32(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

int Function_48(int iParam0, bool bParam1) //Position: 0x10D0 / 4304
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_49(iParam0);
	}
	if (!Function_34(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_49(int iParam0) //Position: 0x113E / 4414
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_50(int iParam0, int iParam1, int iParam2) //Position: 0x1157 / 4439
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_51(bool bParam0) //Position: 0x116C / 4460
{
	return Function_52(0, bParam0);
}

int Function_52(int iParam0, bool bParam1) //Position: 0x1178 / 4472
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_53(iParam0);
	}
	if (!Function_34(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_53(int iParam0) //Position: 0x11DF / 4575
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_54(bool bParam0) //Position: 0x11EF / 4591
{
	return Function_48(12, bParam0);
}

int Function_55(int iParam0) //Position: 0x11FC / 4604
{
	return Function_48(11, iParam0);
}

void Function_56(bool bParam0, int iParam1, char* cParam2) //Position: 0x1209 / 4617
{
	if (bParam0)
	{
		if (Function_36())
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

int Function_57() //Position: 0x122A / 4650
{
	if (!Function_71(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_headshots");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_bagcaptures");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_70();
	Function_58();
	return 1;
}

void Function_58() //Position: 0x12C6 / 4806
{
	if (Function_67())
	{
		NET_PLAYER_LIST_SET_TEAM_SORT(1);
		if (Function_66())
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(2);
		}
		else
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(4);
		}
		Function_59(0, 0);
		Function_59(1, 0);
	}
	return;
}

void Function_59(bool bParam0, bool bParam1) //Position: 0x12F1 / 4849
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
	bVar1 = Function_65(bParam0);
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), 0, 0);
	if (bParam1)
	{
		Function_60(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_60(int iParam0, int iParam1, bool bParam2) //Position: 0x1390 / 5008
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_36())
	{
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000002:
				Var1 = { StackVal, StackVal, StackVal, Function_61(iParam1, 0) };
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
		if (Function_40())
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

struct<16> Function_61(var uParam0, var uParam1) //Position: 0x1483 / 5251
{
	return StackVal, StackVal, StackVal, Function_62(Function_63(uParam0), uParam1);
}

struct<16> Function_62(bool bParam0, bool bParam1) //Position: 0x1495 / 5269
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

int Function_63(int iParam0) //Position: 0x14CA / 5322
{
	if (!Function_64())
	{
		return 0;
	}
	return StackVal;
}

bool Function_64() //Position: 0x14E3 / 5347
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_65(int iParam0) //Position: 0x14F0 / 5360
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_66() //Position: 0x150C / 5388
{
	return Function_46() == 4294967295;
}

bool Function_67() //Position: 0x1517 / 5399
{
	return Function_68(2);
}

int Function_68(int iParam0) //Position: 0x1521 / 5409
{
	return Function_69(&Global_79349, iParam0);
}

int Function_69(var uParam0, bool bParam1) //Position: 0x1530 / 5424
{
	return Function_13(uParam0->f_44, bParam1);
}

void Function_70() //Position: 0x153F / 5439
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

bool Function_71(bool bParam0) //Position: 0x157C / 5500
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_36() || Function_75(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_36())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_72(Function_36());
	return 1;
}

void Function_72(bool bParam0) //Position: 0x15FD / 5629
{
	if (bParam0 || Function_12(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_12(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_12(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_12(1048576) || Function_12(4)) || Function_96(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_9(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_73(int iParam0) //Position: 0x1686 / 5766
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_74(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x169A / 5786
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

int Function_75(bool bParam0, bool bParam1) //Position: 0x16DF / 5855
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

void Function_76(vector3 vParam0, var uParam3) //Position: 0x1713 / 5907
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_80(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_80(), "TurretFinderVol", false, vParam0, 0.0f, 0.0f, 0.0f, uParam3, uParam3, uParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_77(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_77(bool bParam0) //Position: 0x17C6 / 6086
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
	return Function_78(bVar0);
}

int Function_78(bool bParam0) //Position: 0x1801 / 6145
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
	Function_79(bVar0);
	return bVar0;
}

void Function_79(bool bParam0) //Position: 0x184F / 6223
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0,4f);
	return;
}

var Function_80() //Position: 0x1862 / 6242
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_81(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x1891 / 6289
{
	if (!IS_OBJECT_VALID(Local_11.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_11.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_11.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_82(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_11.f_104, &Local_11) + Vector(0.0f, 2,45f, 0.0f), 1, 7148, 1, 125, 0, 0, 0);
	Function_82(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_11.f_104, &Local_11 + 48) + Vector(0.0f, 2,15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_82(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x1914 / 6420
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_83(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_83(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) //Position: 0x195F / 6495
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
			Function_26(iParam0);
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
					Function_26(iParam0);
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

var Function_84(float fParam0) //Position: 0x1BDE / 7134
{
	return (fParam0 * 57,29578f);
}

var Function_85(int iParam0, var uParam1) //Position: 0x1BEC / 7148
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_11.f_96 != iParam0)
	{
		Local_11.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_86(int iParam0, var uParam1) //Position: 0x1C51 / 7249
{
	uParam1 = uParam1;
	if (Local_11.f_100 != iParam0)
	{
		Local_11.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_one_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), 0);
	}
	return "mp_lobby_summary";
}

var Function_87() //Position: 0x1CC2 / 7362
{
	int iVar0;
	
	iVar0 = Function_92(Global_83591.f_140, &vLocal_47, 0.0f, &Global_83591 + 276, 1);
	Function_88(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_88(bool bParam0, int iParam1) //Position: 0x1CEF / 7407
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_133(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_91((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_91((*iParam1)[iVar202], &iVar21))
		{
			if (Function_89((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_89(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1DFE / 7678
{
	float fVar0;
	
	if (!Function_90(bParam0))
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

bool Function_90(int iParam0) //Position: 0x1F25 / 7973
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_91(bool bParam0, int iParam1) //Position: 0x1F37 / 7991
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

var Function_92(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1F93 / 8083
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_94(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_91((*uParam3)[iVar12], &iVar2))
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
		if (Function_91((*uParam3)[iVar12], &iVar2))
		{
			if (Function_93((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_93(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x2081 / 8321
{
	if (!Function_90(bParam0))
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

var Function_94(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2215 / 8725
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_95()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_95() //Position: 0x2281 / 8833
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_96(bool bParam0, bool bParam1) //Position: 0x22A8 / 8872
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_97() //Position: 0x22C8 / 8904
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
						Function_98("CTF_sym_help", 4294967295);
						break;
					
					case 0x00000008:
						Function_98("CTF_one_help", 4294967295);
						break;
					
					case 0x00000007:
						Function_98("CTF_mul_help", 4294967295);
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

void Function_98(char* cParam0, int iParam1) //Position: 0x235D / 9053
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

int Function_99(int iParam0) //Position: 0x23F4 / 9204
{
	int iVar0;
	
	if (!Function_110(*iParam0) || (Function_131(64) && Function_106()))
	{
		iParam0->f_4 = 0;
		Function_16(iParam0);
		if (!Function_110(*iParam0))
		{
		}
		if (Function_131(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_110(*iParam0))
			{
				iParam0->f_4 = 1;
				iParam0->f_8 = 0;
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_DOOR_MUTE", iParam0 + 400);
			}
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_396)
				{
					if (!IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
					{
						(iParam0 + 12[Function_103(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
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
			if (StackVal > iParam0->f_396)
			{
				iParam0->f_8 = 0;
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_396)
				{
					if (!Function_13((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_13((iParam0 + 12[StackVal5])->f_16, 2))
							{
								Function_102((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_101((iParam0 + 12[StackVal5])->f_12, 1);
							}
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_396)
			{
				iParam0->f_404 = GET_CURRENT_GAME_TIME();
				iParam0->f_8 = 0;
				iParam0->f_4 = 3;
			}
			break;
		
		case 0x00000003:
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_404) < 3.0f)
			{
				iParam0->f_4 = 4;
				Function_16(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_100(3, iParam0->f_396))
			{
				if (iParam0->f_396 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_396);
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

int Function_100(int iParam0, int iParam1) //Position: 0x277B / 10107
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_101(bool bParam0, bool bParam1) //Position: 0x278D / 10125
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

void Function_102(bool bParam0, bool bParam1) //Position: 0x27E1 / 10209
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

int Function_103(var uParam0, var uParam1, int iParam2) //Position: 0x2832 / 10290
{
	return Function_104(Global_29006, uParam0, uParam1, iParam2);
}

int Function_104(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x2844 / 10308
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_105(iParam0))
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

bool Function_105(int iParam0) //Position: 0x28E0 / 10464
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_106() //Position: 0x28F6 / 10486
{
	return !Function_107();
}

bool Function_107() //Position: 0x2900 / 10496
{
	if (Function_109())
	{
		return (Function_108() != 1 || Function_108() != 0);
	}
	return 0;
}

int Function_108() //Position: 0x2919 / 10521
{
	return Global_79349.f_16;
}

bool Function_109() //Position: 0x2925 / 10533
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_110(int iParam0) //Position: 0x292E / 10542
{
	if (!Function_105(iParam0))
	{
		return 1;
	}
	return Function_111(&(Global_29008[iParam0]), 4);
}

int Function_111(var uParam0, bool bParam1) //Position: 0x294A / 10570
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_112(int iParam0, float fParam1, float fParam2, bool bParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x2966 / 10598
{
	float fVar0;
	
	if (Function_127())
	{
		if (Function_126(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_122(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_116((iParam0 + 8[iParam0->f_1125])->f_12, 0, bParam3, 0, 0);
				Function_113((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_116((iParam0 + 8[iParam0->f_1125])->f_16, 0, bParam3, 0, 0);
				Function_113((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_113(int iParam0, var uParam1, int iParam2) //Position: 0x2A09 / 10761
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_115(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_114(iParam2);
	}
	return;
}

void Function_114(int iParam0) //Position: 0x2A2E / 10798
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_115(int iParam0) //Position: 0x2A43 / 10819
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_116(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2A58 / 10840
{
	int iVar0;
	bool bVar1;
	
	Function_121(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_120(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_117(StackVal, bVar1, bParam4);
		}
	}
}

void Function_117(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2ACA / 10954
{
	int iVar0;
	
	Function_121(bParam0);
	Function_119(bParam1);
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
	Function_118();
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

void Function_118() //Position: 0x2C43 / 11331
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_119(bool bParam0) //Position: 0x2C4F / 11343
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

void Function_120(int iParam0, int iParam1) //Position: 0x2C95 / 11413
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_121(iParam0);
	Function_119(iVar0);
	PRINTNL();
	Function_117(iParam0, iVar0, iParam1);
	return;
}

void Function_121(int iParam0) //Position: 0x2CBA / 11450
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

float Function_122(int iParam0) //Position: 0x2D00 / 11520
{
	return -Function_123(iParam0);
}

float Function_123(int iParam0) //Position: 0x2D0C / 11532
{
	if (Function_126(iParam0))
	{
		if (Function_125(iParam0))
		{
			return StackVal;
		}
		Function_124();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_124() //Position: 0x2DDD / 11741
{
	if (!Function_127())
	{
	}
	return;
}

bool Function_125(int iParam0) //Position: 0x2DEA / 11754
{
	return Function_13(*iParam0, 2);
}

bool Function_126(int iParam0) //Position: 0x2DF7 / 11767
{
	return Function_13(*iParam0, 1);
}

bool Function_127() //Position: 0x2E04 / 11780
{
	return NET_IS_IN_SESSION();
}

void Function_128() //Position: 0x2E0D / 11789
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_133());
	Function_129(bVar0, "bottle", Local_138.f_80);
	Function_129(bVar0, "crate14", Local_138.f_80);
	Function_129(bVar0, "crate13", Local_138.f_80);
	Function_129(bVar0, "crate04", Local_138.f_80);
	Function_129(bVar0, "package", Local_138.f_80);
	Function_129(bVar0, "nlantern05", Local_138.f_80);
	Function_129(bVar0, "c_gen_curtains", Local_138.f_80);
	Function_129(bVar0, "c_tes_blanket", Local_138.f_80);
	Function_129(bVar0, "p_gen_bucket03x", Local_138.f_80);
	Function_129(bVar0, "jug0", Local_138.f_80);
	Function_129(bVar0, "chairbroken", Local_138.f_80);
	Function_129(bVar0, "debrisboard", Local_138.f_80);
	Function_129(bVar0, "pot0", Local_138.f_80);
	Function_129(bVar0, "fencestandard_qpa", Local_138.f_80);
	Function_129(bVar0, "debrispile", Local_138.f_80);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_129(bool bParam0, char* cParam1, bool bParam2) //Position: 0x2F62 / 12130
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_133(), bParam0, 4294967295, 1);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar1, bParam2, cParam1, 1);
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

void Function_130(int iParam0, bool bParam1) //Position: 0x2FBB / 12219
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

bool Function_131(int iParam0) //Position: 0x2FE3 / 12259
{
	return Function_13(StackVal, iParam0);
}

void Function_132(int iParam0, var uParam1) //Position: 0x2FF6 / 12278
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = uParam1;
	return;
}

var Function_133() //Position: 0x3017 / 12311
{
	bool bVar0;
	
	return bVar0;
}

bool Function_134() //Position: 0x301F / 12319
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(-3995,48f, 28,45f, 2972,93f, 5.0f, "gatling", 1);
	bVar1 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(-3959,38f, 28,14f, 2912,73f, 5.0f, "gatling", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		DECOR_SET_FLOAT(GET_OBJECT_FROM_PHYSINST(bVar0), "fRestrictRotation", 90.0f);
	}
	else
	{
		return 0;
	}
	if (IS_PHYSINST_VALID(bVar1))
	{
		DECOR_SET_FLOAT(GET_OBJECT_FROM_PHYSINST(bVar1), "fRestrictRotation", 125.0f);
	}
	else
	{
		return 0;
	}
	return 1;
}

void Function_135(bool bParam0) //Position: 0x30C4 / 12484
{
	Function_130(16, bParam0);
	return;
}

void Function_136(var uParam0) //Position: 0x30D1 / 12497
{
	Function_130(8, uParam0);
	return;
}

bool Function_137() //Position: 0x30DE / 12510
{
	Function_174(&iLocal_473, 0, 9, 30, 0, 0, 1);
	Function_174(&iLocal_473, 1, 9, 30, 2, 2, 2);
	Function_174(&iLocal_473, 2, 12, 0, 1, 0, 0);
	Function_174(&iLocal_473, 3, 12, 0, 1, 1, 0);
	Function_174(&iLocal_473, 4, 23, 0, 0, 0, 1);
	Function_171(&iLocal_473);
	ENABLE_CHILD_SECTOR("mp_tum_base01x");
	Global_83591 = 4;
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_169();
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_167(512);
	Function_166(Global_83864.f_1284);
	Function_19(997);
	Function_17(Global_83864.f_1284, 0, 1);
	if (!Function_162(Local_138))
	{
		return 0;
	}
	Function_161("FTR_SONG_04", "FTR_SONG_08", 0, 58, 58, 1);
	Function_159(Local_138.f_908);
	Function_152(&Global_83591 + 276, 0);
	Function_150(&Global_83591, 1, 22, 1, 1);
	Function_150(&Global_83591, 2, 5, 10, 1);
	Function_150(&Global_83591, 3, 9, 10, 1);
	Function_150(&Global_83591, 4, 15, 15, 1);
	Function_145(&Global_83591, 1, 19, 5, 1);
	Function_145(&Global_83591, 2, 7, 10, 1);
	Function_145(&Global_83591, 3, 16, 15, 1);
	Function_145(&Global_83591, 4, 10, 10, 1);
	Function_144(&Global_83591);
	Function_143(&Global_83591 + 276, 4);
	Function_142(0, 6);
	Function_142(1, 1);
	if (!Function_138(&uLocal_371))
	{
		return 0;
	}
	return 1;
}

bool Function_138(bool bParam0) //Position: 0x323F / 12863
{
	if (!Function_141(bParam0, Global_30658[0]))
	{
		return 0;
	}
	Function_139(bParam0, "tumbleweed", "church", 1, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "church", 2, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "saloon", 1, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "saloon", 2, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "saloon", 3, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "saloon", 4, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "saloon", 5, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "ruinedHome", 97, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "ruinedHome", 98, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "mansion", 1, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "mansion", 2, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "mansion", 3, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "mansion", 4, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "mansion", 5, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "mansion", 7, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "mansion", 8, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "mansion", 9, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "mansion", 10, 1, 0, 1, 1);
	Function_139(bParam0, "tumbleweed", "mansion", 11, 1, 0, 1, 1);
	return 1;
}

int Function_139(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x34E2 / 13538
{
	int iVar0;
	
	iVar0 = iParam0->f_396;
	if (!Function_140(iParam0, uParam1, uParam2, iParam3))
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

bool Function_140(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3553 / 13651
{
	if (iParam0->f_396 > 19)
	{
		return 0;
	}
	(*iParam0 + 12)[iParam0->f_3965] = uParam1;
	(iParam0 + 12[iParam0->f_3965])->f_4 = uParam2;
	(iParam0 + 12[iParam0->f_3965])->f_8 = uParam3;
	(iParam0 + 12[iParam0->f_3965])->f_16 = 0;
	iParam0->f_396++;
	return 1;
}

bool Function_141(int iParam0, int iParam1) //Position: 0x35AF / 13743
{
	int iVar0;
	
	if (!Function_105(iParam1))
	{
		return 0;
	}
	*iParam0 = iParam1;
	iParam0->f_396 = 0;
	iParam0->f_4 = 0;
	iParam0->f_400 = "";
	iVar0 = 0;
	while (iVar0 <= 19)
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

void Function_142(int iParam0, int iParam1) //Position: 0x3625 / 13861
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_143(int iParam0, int iParam1) //Position: 0x3633 / 13875
{
	(iParam0 + 228)->f_220 = 0;
	Function_11(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_144(int iParam0) //Position: 0x364B / 13899
{
	iParam0->f_844 = 0;
	return;
}

void Function_145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3657 / 13911
{
	Function_146(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_146(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x366F / 13935
{
	Function_147(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_147(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3686 / 13958
{
	if (!Function_149(iParam1))
	{
		return;
	}
	Function_148(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_148(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x36A9 / 13993
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

bool Function_149(int iParam0) //Position: 0x36D3 / 14035
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x36E3 / 14051
{
	Function_151(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_151(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x36FB / 14075
{
	Function_147(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_152(int iParam0, bool bParam1) //Position: 0x3710 / 14096
{
	Function_156(iParam0);
	Function_156(iParam0 + 228);
	if (bParam1)
	{
		Function_153(iParam0);
	}
	return;
}

void Function_153(int iParam0) //Position: 0x372C / 14124
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_154(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_154(var uParam0, int iParam1) //Position: 0x374C / 14156
{
	Function_155(uParam0, iParam1, 0);
	return;
}

void Function_155(int iParam0, int iParam1, int iParam2) //Position: 0x375A / 14170
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_156(int iParam0) //Position: 0x376B / 14187
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_158(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_157(iParam0, 0.0f);
	return;
}

void Function_157(var uParam0, int iParam1) //Position: 0x3798 / 14232
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_158(int iParam0) //Position: 0x37A4 / 14244
{
	Function_148(iParam0, 4294967295, 0, 1);
	return;
}

void Function_159(bool bParam0) //Position: 0x37B2 / 14258
{
	DECOR_SET_OBJECT(Function_160(), "LobbyGringoSet", bParam0);
	return;
}

var Function_160() //Position: 0x37D2 / 14290
{
	return Global_83591.f_140;
}

void Function_161(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x37DE / 14302
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

bool Function_162(int iParam0) //Position: 0x386E / 14446
{
	Function_165(iParam0);
	if (Function_164())
	{
		Function_143(&Global_83591 + 276, 2);
	}
	Function_163();
	vLocal_47 = { StackVal, StackVal, Function_163() };
	return 1;
}

vector3 Function_163() //Position: 0x3892 / 14482
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_160();
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

bool Function_164() //Position: 0x38DA / 14554
{
	return Function_13(Global_79962, 1024);
}

void Function_165(int iParam0) //Position: 0x38EA / 14570
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_166(bool bParam0) //Position: 0x38F8 / 14584
{
	if (!Function_20(bParam0))
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

void Function_167(int iParam0) //Position: 0x3927 / 14631
{
	Function_168(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_168(var uParam0, int iParam1) //Position: 0x3980 / 14720
{
	Function_11(uParam0, iParam1);
	return;
}

void Function_169() //Position: 0x398D / 14733
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
	
	Function_170(4, 1);
	uVar0 = uVar0;
	Local_138 = CREATE_LAYOUT("CTF_TUM_layout");
	Local_138.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_138, "v_clear_vol", 2, -3989,527f, 34,15663f, 2956,346f, 0.0f, 0.0f, 0.0f, 280,9203f, 31,6715f, 226,9813f);
	Local_138.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_138, "playablespace", 2, -3984,045f, 28,1865f, 2935,856f, 0.0f, 29,50395f, 0.0f, 313,6283f, 118,8916f, 313,6283f);
	CREATE_VOLUME_IN_LAYOUT(Local_138, "CapVol_A", 3, -4084,014f, 35,55047f, 2963,919f, -175,8324f, 125,2337f, -179,3521f, 1.0f, 1.0f, 1.0f);
	Local_138.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_138, "CapVol_B", 3, -3895,516f, 30,69005f, 2941,172f, 0.0f, -81,17687f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A0", 3, -4108,955f, 36,08363f, 2944,417f, 0.0f, -328,2444f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A1", 3, -4082,7f, 35,99003f, 2925,454f, 0.0f, -246,8878f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A2", 3, -4085,991f, 33,12941f, 2978,009f, 0.0f, -270,814f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A3", 3, -4062,121f, 31,47573f, 2953,883f, 0.0f, -229,7489f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A4", 3, -4087,339f, 37,30981f, 2944,71f, 0.0f, -298,6223f, 0.0f, 1.0f, 1,835f, 1.0f);
	Local_138.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A5", 3, -4034,632f, 28,33999f, 2887,992f, 0.0f, -255,8736f, 0.0f, 2,04861f, 7,952068f, 2,05911f);
	Local_138.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A6", 3, -4029,627f, 29,13394f, 3000,005f, 0.0f, -267,7469f, 0.0f, 2,855954f, 7,952068f, 3,094849f);
	Local_138.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A7", 3, -3998,111f, 28,44233f, 3045,889f, 0.0f, 92,45757f, 0.0f, 1.0f, 1,835f, 1.0f);
	Local_138.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A8", 3, -4011,854f, 29,32868f, 2917,966f, 0.0f, 91,38497f, 0.0f, 1.0f, 1,135948f, 1.0f);
	Local_138.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B0", 3, -3885,978f, 31,12165f, 2921,954f, 0.0f, -35,22628f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B1", 3, -3914,113f, 31,10008f, 2905,887f, 0.0f, -131,5188f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B2", 3, -3917,9f, 29,04491f, 2945,788f, 0.0f, -81,52227f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B3", 3, -3875,934f, 30,87167f, 2939,441f, 0.0f, -88,94263f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B4", 3, -3898,25f, 31,82174f, 2921,265f, 0.0f, -16,44685f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B5", 3, -3963,099f, 25,09815f, 2861,149f, 0.0f, 285,5432f, 0.0f, 2,892f, 2,892f, 2,892f);
	Local_138.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B6", 3, -3958,322f, 28,45498f, 2980,139f, 0.0f, 270,8492f, 0.0f, 3,909f, 3,909f, 3,909f);
	Local_138.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B7", 3, -3975,997f, 27,82765f, 3045,696f, 0.0f, -88,78374f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B8", 3, -3975,292f, 27,70122f, 2901,259f, 0.0f, -150,6103f, 0.0f, 1.0f, 1.0f, 1.0f);
	*(&Local_138 + 164) = { -3980,771f, 28,23987f, 2944,13f };
	*(&Local_138 + 164 + 12) = { 0.0f, 46,94275f, 0.0f };
	Local_138.f_188 = CREATE_POINT_IN_LAYOUT(Local_138, "Showdown_A", -3980,771f, 28,23987f, 2944,13f, 0.0f, 46,94275f, 0.0f);
	*(&Local_138 + 192) = { -3973,625f, 28,30903f, 2947,884f };
	*(&Local_138 + 192 + 12) = { 0.0f, 48,62234f, 0.0f };
	Local_138.f_216 = CREATE_POINT_IN_LAYOUT(Local_138, "Showdown_B", -3973,625f, 28,30903f, 2947,884f, 0.0f, 48,62234f, 0.0f);
	*(&Local_138 + 220) = { -4002,275f, 23,59212f, 2841,725f };
	*(&Local_138 + 220 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_138.f_244 = CREATE_POINT_IN_LAYOUT(Local_138, "FlagSpawn_0", -4002,275f, 23,59212f, 2841,725f, 0.0f, 0.0f, 0.0f);
	*(&Local_138 + 248) = { -4000f, 26,10194f, 2893,71f };
	*(&Local_138 + 248 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_138.f_272 = CREATE_POINT_IN_LAYOUT(Local_138, "FlagSpawn_1", -4000f, 26,10194f, 2893,71f, 0.0f, 0.0f, 0.0f);
	*(&Local_138 + 276) = { -3994,614f, 28,76332f, 2985,386f };
	*(&Local_138 + 276 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_138.f_300 = CREATE_POINT_IN_LAYOUT(Local_138, "FlagSpawn_2", -3994,614f, 28,76332f, 2985,386f, 0.0f, 0.0f, 0.0f);
	*(&Local_138 + 304) = { -3989,75f, 28,2689f, 3025,751f };
	*(&Local_138 + 304 + 12) = { 0.0f, 178,9478f, 0.0f };
	Local_138.f_328 = CREATE_POINT_IN_LAYOUT(Local_138, "FlagSpawn_3", -3989,75f, 28,2689f, 3025,751f, 0.0f, 178,9478f, 0.0f);
	Local_138.f_332 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_138, 8, 0);
	*(&Local_138 + 336[06]) = { -4010,178f, 26,10194f, 2878,382f };
	*(&Local_138 + 336[06] + 12) = { 0.0f, -14,22334f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_138, "npickup_D1", -4010,178f, 26,10194f, 2878,382f, 0.0f, -14,22334f, 0.0f);
	DECOR_SET_INT(bVar1, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_138.f_332);
	*(&Local_138 + 336[16]) = { -3987,682f, 28,57711f, 2990,951f };
	*(&Local_138 + 336[16] + 12) = { 0.0f, 189,4556f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_138, "npickup_D2", -3987,682f, 28,57711f, 2990,951f, 0.0f, 189,4556f, 0.0f);
	DECOR_SET_INT(bVar2, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_138.f_332);
	*(&Local_138 + 336[26]) = { -3982,426f, 27,828f, 3041,724f };
	*(&Local_138 + 336[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_138, "npickup_S1", -3982,426f, 27,828f, 3041,724f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar3, "type", true);
	DECOR_SET_INT(bVar3, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_138.f_332);
	*(&Local_138 + 336[36]) = { -3994,41f, 28,773f, 2921,027f };
	*(&Local_138 + 336[36] + 12) = { 0.0f, 30,14622f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_138, "npickup_B1", -3994,41f, 28,773f, 2921,027f, 0.0f, 30,14622f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_138.f_332);
	*(&Local_138 + 336[46]) = { -3994,135f, 29,365f, 2950,788f };
	*(&Local_138 + 336[46] + 12) = { 0.0f, -74,35629f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_138, "npickup_B2", -3994,135f, 29,365f, 2950,788f, 0.0f, -74,35629f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_138.f_332);
	*(&Local_138 + 336[56]) = { -4047,076f, 30,506f, 2944,354f };
	*(&Local_138 + 336[56] + 12) = { 0.0f, -140,647f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_138, "npickup_P1", -4047,076f, 30,506f, 2944,354f, 0.0f, -140,647f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_138.f_332);
	*(&Local_138 + 336[66]) = { -3945,524f, 30,01958f, 2935,4f };
	*(&Local_138 + 336[66] + 12) = { 0.0f, -53,70205f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_138, "npickup_P2", -3945,524f, 30,01958f, 2935,4f, 0.0f, -53,70205f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_138.f_332);
	*(&Local_138 + 336[76]) = { -4083,299f, 36,079f, 2920,652f };
	*(&Local_138 + 336[76] + 12) = { 0.0f, -13,78f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_138, "npickup_R1", -4083,299f, 36,079f, 2920,652f, 0.0f, -13,78f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_138.f_332);
	*(&Local_138 + 336[86]) = { -4067,25f, 32,377f, 2982,104f };
	*(&Local_138 + 336[86] + 12) = { 0.0f, 224,5248f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_138, "npickup_R2", -4067,25f, 32,377f, 2982,104f, 0.0f, 224,5248f, 0.0f);
	DECOR_SET_INT(bVar9, "type", true);
	DECOR_SET_INT(bVar9, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_138.f_332);
	*(&Local_138 + 336[96]) = { -3949,536f, 25,098f, 2878,464f };
	*(&Local_138 + 336[96] + 12) = { 0.0f, 90,12f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_138, "npickup_R3", -3949,536f, 25,098f, 2878,464f, 0.0f, 90,12f, 0.0f);
	DECOR_SET_INT(bVar10, "type", true);
	DECOR_SET_INT(bVar10, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_138.f_332);
	*(&Local_138 + 336[106]) = { -3953,404f, 28,106f, 2983,752f };
	*(&Local_138 + 336[106] + 12) = { 0.0f, 52,02f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_138, "npickup_R4", -3953,404f, 28,106f, 2983,752f, 0.0f, 52,02f, 0.0f);
	DECOR_SET_INT(bVar11, "type", true);
	DECOR_SET_INT(bVar11, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_138.f_332);
	*(&Local_138 + 336[116]) = { -4020,77f, 27,9368f, 2929,856f };
	*(&Local_138 + 336[116] + 12) = { 10,31845f, -174,6739f, 3,855214f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_138, "npickup_A1", -4020,77f, 27,9368f, 2929,856f, 10,31845f, -174,6739f, 3,855214f);
	DECOR_SET_INT(bVar12, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_138.f_332);
	*(&Local_138 + 336[126]) = { -3967,399f, 28,53813f, 2946,341f };
	*(&Local_138 + 336[126] + 12) = { 0.0f, 369,2129f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_138, "npickup_A2", -3967,399f, 28,53813f, 2946,341f, 0.0f, 369,2129f, 0.0f);
	DECOR_SET_INT(bVar13, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_138.f_332);
	Local_138.f_652 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagsSet", Local_138, 8, 0);
	*(&Local_138 + 656[06]) = { -4001,335f, 29,87307f, 3000,631f };
	*(&Local_138 + 656[06] + 12) = { 0.0f, -189,1299f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_138, "Fire_01", -4001,335f, 29,87307f, 3000,631f, 0.0f, -189,1299f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_138.f_652);
	*(&Local_138 + 656[16]) = { -4001,294f, 30,66134f, 2997,132f };
	*(&Local_138 + 656[16] + 12) = { 0.0f, -183,5602f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_138, "Fire_02", -4001,294f, 30,66134f, 2997,132f, 0.0f, -183,5602f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_138.f_652);
	*(&Local_138 + 656[26]) = { -4034,648f, 29,65251f, 2895,94f };
	*(&Local_138 + 656[26] + 12) = { 0.0f, -193,2914f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_138, "Fire_03", -4034,648f, 29,65251f, 2895,94f, 0.0f, -193,2914f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_138.f_652);
	*(&Local_138 + 656[36]) = { -4029,586f, 31,47009f, 2981,539f };
	*(&Local_138 + 656[36] + 12) = { 0.0f, -165,8647f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_138, "Fire_04", -4029,586f, 31,47009f, 2981,539f, 0.0f, -165,8647f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_138.f_652);
	*(&Local_138 + 656[46]) = { -4035,023f, 29,64f, 2924,716f };
	*(&Local_138 + 656[46] + 12) = { 0.0f, -165,8647f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_138, "Fire_05", -4035,023f, 29,64f, 2924,716f, 0.0f, -165,8647f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_138.f_652);
	Local_138.f_780 = CREATE_OBJECTSET_IN_LAYOUT("SmokeFlagsSet", Local_138, 8, 0);
	*(&Local_138 + 784[06]) = { -4032,712f, 31,72003f, 2974,983f };
	*(&Local_138 + 784[06] + 12) = { 0.0f, 10,14039f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_138, "Smoke_01", -4032,712f, 31,72003f, 2974,983f, 0.0f, 10,14039f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_138.f_780);
	*(&Local_138 + 784[16]) = { -4001,219f, 31,14589f, 2999,012f };
	*(&Local_138 + 784[16] + 12) = { 0.0f, -190,4364f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_138, "Smoke_02", -4001,219f, 31,14589f, 2999,012f, 0.0f, -190,4364f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_138.f_780);
	*(&Local_138 + 784[26]) = { -4034,439f, 30,07458f, 2896,005f };
	*(&Local_138 + 784[26] + 12) = { 0.0f, 185,9101f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_138, "Smoke_03", -4034,439f, 30,07458f, 2896,005f, 0.0f, 185,9101f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_138.f_780);
	*(&Local_138 + 784[36]) = { -4029,228f, 32,14027f, 2981,766f };
	*(&Local_138 + 784[36] + 12) = { 0.0f, 185,9101f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_138, "Smoke_04", -4029,228f, 32,14027f, 2981,766f, 0.0f, 185,9101f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_138.f_780);
	*(&Local_138 + 784[46]) = { -4035,023f, 29,64f, 2924,716f };
	*(&Local_138 + 784[46] + 12) = { 0.0f, 185,9101f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_138, "Smoke_05", -4035,023f, 29,64f, 2924,716f, 0.0f, 185,9101f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_138.f_780);
	Local_138.f_908 = CREATE_OBJECTSET_IN_LAYOUT(Function_133(), Local_138, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -3968,541f, 28,4404f, 2948,035f, 0.0f, -87,04878f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -3959,014f, 28,38515f, 2955,877f, 0.0f, 47,46111f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -3978,41f, 31,92476f, 2918,599f, 0.0f, 158,0413f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", -3982,403f, 28,37518f, 2945,597f, 0.0f, -91,18584f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", -3980.0f, 27,99049f, 2940f, 0.0f, -134,0976f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "stand_drunk_rowdydrink5", "stand_drunk_rowdydrink", -3972,724f, 28,27697f, 2945,927f, 0.0f, 85,00707f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "smoking_stand4", "smoking_stand", -3956,483f, 29,899f, 2941,503f, 0.0f, 127,198f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "smoking_stand5", "smoking_stand", -3964,083f, 29,356f, 2958,197f, 0.0f, 12,554f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "smoking_stand6", "smoking_stand", -3974,104f, 29,356f, 2959,421f, 0.0f, 12,554f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "smoking_stand7", "smoking_stand", -3978,291f, 29,249f, 2961,896f, 0.0f, 12,062f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "smoking_stand8", "smoking_stand", -3980,62f, 32,31f, 2962,506f, 0.0f, 15,505f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "stand_yelling", "stand_yelling", -3998,34f, 28,24254f, 2937,194f, 0.0f, -83,68496f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "lean_rail_nospawn", "lean_rail_nospawn", -3980,157f, 31,94822f, 2918,335f, 0.0f, -193,9807f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "smoking_stand", "smoking_stand", -3976.0f, 28,10947f, 2941,593f, 0.0f, 136,4706f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "smoking_stand1", "smoking_stand", -3978,667f, 28,38855f, 2950,667f, 0.0f, 0.0f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "smoking_stand2", "smoking_stand", -3977,316f, 28,10601f, 2942,684f, 0.0f, 0.0f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "smoking_stand3", "smoking_stand", -3980.0f, 28,23919f, 2944,94f, 0.0f, 65,2194f, 0.0f), Local_138.f_908);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "stand_yelling1", "stand_yelling", -3996,419f, 28,24254f, 2936,999f, 0.0f, -264,6033f, 0.0f), Local_138.f_908);
	Local_138.f_912 = CREATE_OBJECTSET_IN_LAYOUT(Function_133(), Local_138, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_138, "cannon02x0", "p_gen_cannon02x", -3995,829f, 32,64456f, 2946,92f, 0.0f, 17,38276f, 0.0f, 1), Local_138.f_912);
	Local_138.f_916 = CREATE_PROP_IN_LAYOUT(Local_138, "skullPost02x0", "p_gen_skullPost02x", -3961,855f, 27,97745f, 2911,688f, 0.0f, 0.0f, 0.0f, 1);
	Local_138.f_920 = CREATE_PROP_IN_LAYOUT(Local_138, "skullPost02x1", "p_gen_skullPost02x", -3958,355f, 28,24875f, 2914,858f, 0.0f, 0.0f, 0.0f, 1);
	Local_138.f_924 = CREATE_PROP_IN_LAYOUT(Local_138, "skullPost02x2", "p_gen_skullPost02x", -3995,877f, 29,08297f, 2969,403f, 0.0f, 0.0f, 0.0f, 1);
	Local_138.f_928 = CREATE_PROP_IN_LAYOUT(Local_138, "skullPost02x3", "p_gen_skullPost02x", -3991,97f, 28,95033f, 2972,116f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_170(int iParam0, int iParam1) //Position: 0x50FC / 20732
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

void Function_171(int iParam0) //Position: 0x5145 / 20805
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_173("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], false));
	Function_172(StackVal, 0);
	return;
}

void Function_172(var uParam0, int iParam1) //Position: 0x51B7 / 20919
{
	Function_121(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_120(StackVal, iParam1);
	}
	return;
}

bool Function_173(char* cParam0) //Position: 0x51E8 / 20968
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_174(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5207 / 20999
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_175() //Position: 0x5249 / 21065
{
	while (!IS_EXITFLAG_SET())
	{
		Function_27(4650, 21095);
		WAIT(false);
	}
	return;
}

int Function_176(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x5267 / 21095
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	Function_56(bParam1, iParam2, cParam3);
	bVar0 = false;
	bVar1 = Function_55(bParam0);
	bVar2 = Function_54(bParam0);
	bVar3 = Function_51(bParam0);
	iVar4 = Function_50(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_30(bParam0, iVar4, 0);
	}
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_48(34, bParam0));
		bVar0++;
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_12(4))
	{
		if (Function_42(bParam0, 1, 1))
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
		Function_41(bVar0, bParam0);
	}
	if (Function_45(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	if (Function_36() && Function_40())
	{
	}
	return 0;
}

bool Function_177() //Position: 0x536A / 21354
{
	return Function_131(2);
}

void Function_178() //Position: 0x5374 / 21364
{
	if (Function_177())
	{
		return;
	}
	Function_188();
	Function_186(&bLocal_38, "MP_CTF", 10, 0);
	Function_186(&bLocal_38, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_180(&bLocal_38))
	{
		WAIT(false);
	}
	fLocal_10 = 5.0f;
	Function_97();
	Function_179();
	return;
}

void Function_179() //Position: 0x53D8 / 21464
{
	while (!Function_131(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_180(int iParam0) //Position: 0x53F3 / 21491
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_185();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_184(iParam0[iVar03], 8);
		}
		else if (Function_183())
		{
			iVar1 = 1;
			Function_184(iParam0[iVar03], 8);
		}
		Function_184(iParam0[iVar03], 16);
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
				Function_184(iParam0[iVar03], 1);
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
							Function_184(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_184(iParam0[iVar03], 2);
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
							Function_184(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_184(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_184(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_184(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_184(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_184(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_184(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_184(iParam0[iVar03], 2);
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
	Function_181();
	return 1;
}

void Function_181() //Position: 0x576E / 22382
{
	if (!Function_182(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_182(int iParam0) //Position: 0x57AE / 22446
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_183() //Position: 0x57CA / 22474
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

void Function_184(var uParam0, int iParam1) //Position: 0x57F5 / 22517
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_185() //Position: 0x5806 / 22534
{
	if (!Function_182(128))
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

var Function_186(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5848 / 22600
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_187(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_184(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_187(var uParam0, int iParam1, int iParam2) //Position: 0x5880 / 22656
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_184(uParam0[iVar03], 4);
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

void Function_188() //Position: 0x5944 / 22852
{
	Local_11.f_96 = 4294967295;
	Local_11.f_100 = 4294967295;
	return;
}

