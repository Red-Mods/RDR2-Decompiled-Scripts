//Decompiled with MagicRDR v1.0
//Function Count : 187
//Statics Count : 499
//Natives Count : 194
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
	struct<105> Local_12 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	struct<925> Local_136 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	iLocal_10 = 0;
	fLocal_11 = 1.0f;
	iLocal_46 = 0;
	iLocal_47 = 0;
	iLocal_48 = 31;
	iLocal_49 = 33;
	iLocal_50 = 1;
	fLocal_51 = 2.0f;
	iLocal_53 = 0;
	iLocal_54 = 0;
	fLocal_81 = 60.0f;
	iLocal_128 = 0;
	iLocal_129 = 0;
	iLocal_130 = 0;
	iLocal_131 = 0;
	iLocal_132 = 0;
	iLocal_133 = 0;
	iLocal_134 = 0;
	iLocal_135 = 0;
	iVar0 = 0;
	Function_184();
	if (Function_183())
	{
		Function_182();
	}
	else
	{
		if (Function_135())
		{
			Function_134(1);
		}
		else
		{
			Function_133(1);
		}
		while (!Function_132() && !IS_EXITFLAG_SET())
		{
			WAIT(0);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			bVar2 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_136, Function_131(), "fire_comp_smoke_plume", *(&Local_136 + 796[iVar16]));
			if (IS_OBJECT_VALID(bVar2))
			{
				UNK_0x6745191B(bVar2, 0.0f, 0.0f, 0.0f);
			}
			iVar1++;
		}
		bVar3 = CREATE_WORLD_SECTOR(Local_136, "tumbleweed");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar3))
		{
			WAIT(0);
		}
		iVar4 = 2;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_130(64))
			{
				iVar4 = (iVar4 - 1);
				if (iVar4 <= 0)
				{
					Function_129(64, 0);
					Function_127();
					iVar4 = 2;
				}
			}
			Function_111(&iLocal_470, 0.2f, 0.7f, 12, 1.0f, 0.0f, 0.0f, 0.0f);
			Function_98(&uLocal_368);
			Function_24();
			WAIT(0);
		}
		Function_22(512);
		Function_18();
		Function_17(Global_83864.f_1284, 0, 1);
	}
	Function_15(&uLocal_368);
	DISABLE_CHILD_SECTOR("mp_tum_base01x");
	Function_14();
	Function_1();
	RESET_RMPTFX_ALL();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x187 / 391
{
	Function_10(&iLocal_39);
	Function_3();
	Function_2();
	return;
}

void Function_2() //Position: 0x198 / 408
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_3() //Position: 0x1D7 / 471
{
	Function_4();
	return;
}

void Function_4() //Position: 0x1E0 / 480
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

void Function_5(int iParam0, bool bParam1, int iParam2) //Position: 0x2E9 / 745
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

void Function_6(var uParam0, int iParam1) //Position: 0x311 / 785
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x324 / 804
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_8(int iParam0) //Position: 0x333 / 819
{
	return Function_9(Global_76905.f_132, iParam0);
}

bool Function_9(var uParam0, int iParam1) //Position: 0x344 / 836
{
	return (uParam0 && iParam1) == 0;
}

void Function_10(int iParam0) //Position: 0x351 / 849
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

void Function_11(var uParam0, int iParam1) //Position: 0x377 / 887
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

void Function_12(var uParam0, int iParam1) //Position: 0x4A5 / 1189
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_13(int iParam0, int iParam1) //Position: 0x4BF / 1215
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_14() //Position: 0x4DC / 1244
{
	Function_10(&Local_136 + 4);
	RELEASE_LAYOUT_REF(Local_136);
	return;
}

void Function_15(int iParam0) //Position: 0x4EE / 1262
{
	Function_129(64, 0);
	Function_16(iParam0);
	return;
}

void Function_16(int iParam0) //Position: 0x4FF / 1279
{
	if (iParam0->f_400 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_400, 0);
		iParam0->f_400 = "";
	}
	return;
}

void Function_17(var uParam0, bool bParam1, bool bParam2) //Position: 0x51F / 1311
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

void Function_18() //Position: 0x54C / 1356
{
	Function_19(Function_21());
	return;
}

void Function_19(int iParam0) //Position: 0x558 / 1368
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

bool Function_20(int iParam0) //Position: 0x585 / 1413
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_21() //Position: 0x59C / 1436
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_22(int iParam0) //Position: 0x5B6 / 1462
{
	Function_23(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x5EF / 1519
{
	Function_6(uParam0, iParam1);
	return;
}

void Function_24() //Position: 0x5FC / 1532
{
	Function_96();
	if (Function_95(1, 1))
	{
		Function_80(StackVal, StackVal, 7626, vLocal_43, 1, 7518);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_75(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		if (Function_72())
		{
			Function_51(5375, 4999);
		}
		else
		{
			Function_51(3533, 1693);
		}
		Function_25();
	}
	return;
}

void Function_25() //Position: 0x65B / 1627
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_26(&Local_12);
	}
	return;
}

void Function_26(int iParam0) //Position: 0x677 / 1655
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

int Function_27(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x69D / 1693
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_42(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_41(bParam0);
	bVar2 = Function_40(bParam0);
	bVar3 = Function_37(bParam0);
	iVar4 = Function_36((bVar3 / CEIL(25.0f)), bVar1, bVar2);
	if (!bParam1)
	{
		Function_34(bParam0, iVar4, 0);
	}
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("TDM_team_FMT"), I2STR(bVar3), false, false);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	bVar0++;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_32(38, bParam0));
		bVar0++;
		Function_28(bVar0, bParam0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	return 0;
}

void Function_28(bool bParam0, bool bParam1) //Position: 0x782 / 1922
{
	if (Function_8(4))
	{
		if (Function_29(bParam1, 1024, 1))
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

bool Function_29(bool bParam0, int iParam1, bool bParam2) //Position: 0x7B5 / 1973
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_95(iParam1, bParam2);
	}
	if (!Function_31(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_30(iParam1), 64);
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

var Function_30(int iParam0) //Position: 0x836 / 2102
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

bool Function_31(bool bParam0) //Position: 0xB4F / 2895
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

int Function_32(int iParam0, bool bParam1) //Position: 0xBF0 / 3056
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_33(iParam0);
	}
	if (!Function_31(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_33(int iParam0) //Position: 0xC5E / 3166
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

bool Function_34(bool bParam0, int iParam1, int iParam2) //Position: 0xC77 / 3191
{
	var uVar0;
	
	return Function_35(bParam0, iParam1, &uVar0, iParam2);
}

int Function_35(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xC88 / 3208
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

var Function_36(int iParam0, int iParam1, int iParam2) //Position: 0xCED / 3309
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_37(bool bParam0) //Position: 0xD02 / 3330
{
	return Function_38(0, bParam0);
}

int Function_38(int iParam0, bool bParam1) //Position: 0xD0E / 3342
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_39(iParam0);
	}
	if (!Function_31(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_39(int iParam0) //Position: 0xD75 / 3445
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_40(bool bParam0) //Position: 0xD85 / 3461
{
	return Function_32(12, bParam0);
}

int Function_41(int iParam0) //Position: 0xD92 / 3474
{
	return Function_32(11, iParam0);
}

void Function_42(bool bParam0, int iParam1, char* cParam2) //Position: 0xD9F / 3487
{
	if (bParam0)
	{
		if (Function_43())
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

bool Function_43() //Position: 0xDC0 / 3520
{
	return Function_8(32768);
}

int Function_44() //Position: 0xDCD / 3533
{
	if (!Function_46(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_killstolen");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_45();
	return 1;
}

void Function_45() //Position: 0xE61 / 3681
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

bool Function_46(bool bParam0) //Position: 0xE9E / 3742
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_43() || Function_50(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_43())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_47(Function_43());
	return 1;
}

void Function_47(bool bParam0) //Position: 0xF1F / 3871
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

struct<64> Function_48(int iParam0) //Position: 0xFA8 / 4008
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_49(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_49(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xFBC / 4028
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

int Function_50(bool bParam0, bool bParam1) //Position: 0x1001 / 4097
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

void Function_51(int iParam0, int iParam1) //Position: 0x1035 / 4149
{
	Function_52(iParam0, iParam1, 4992);
	return;
}

void Function_52(var uParam0, var uParam1, int iParam2) //Position: 0x1046 / 4166
{
	if (Function_8(0x4000000))
	{
		Function_55();
		Function_5(0x4000000, 0, 1);
	}
	if (Function_8(0x10000000))
	{
		Function_55();
		Function_5(0x10000000, 0, 1);
	}
	if (Function_8(2) != Function_8(0x2000000))
	{
		Function_55();
		Function_5(0x2000000, Function_8(2), 1);
	}
	if (Function_43())
	{
		Function_54(!Function_8(16));
	}
	if (Function_8(16))
	{
		Function_53(&uParam0, &uParam1, &iParam2);
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

void Function_53(var uParam0, var uParam1, int iParam2) //Position: 0x11DF / 4575
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
			if (!Function_31(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_29(bVar1, 2048, 1))
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
				if (Function_34(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_34(bVar1, (4294966296 - bVar1), 1))
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

void Function_54(bool bParam0) //Position: 0x1357 / 4951
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_5(16384, 0, 1);
	return;
}

void Function_55() //Position: 0x1371 / 4977
{
	Function_5(32768, 1, 0);
	return;
}

int Function_56() //Position: 0x1380 / 4992
{
	return 1;
}

int Function_57(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x1387 / 4999
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_42(bParam1, iParam2, cParam3);
	bVar0 = false;
	bVar1 = Function_41(bParam0);
	bVar2 = Function_40(bParam0);
	bVar3 = Function_37(bParam0);
	iVar4 = Function_36((bVar3 / CEIL(25.0f)), bVar1, bVar2);
	if (!bParam1)
	{
		Function_34(bParam0, iVar4, 0);
	}
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("TDM_team_FMT"), I2STR(bVar3), false, false);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	bVar0++;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_32(38, bParam0));
		bVar0++;
		Function_28(bVar0, bParam0);
	}
	if (Function_58(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	return 0;
}

bool Function_58(bool bParam0) //Position: 0x147C / 5244
{
	if (Function_60(bParam0, 1, 0) != 4294967295 && Function_59() != 4294967295)
	{
		return 0;
	}
	return Function_60(bParam0, 1, 0) != Function_59();
}

int Function_59() //Position: 0x14A4 / 5284
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_60(GET_LOCAL_SLOT(), 1, 0);
}

int Function_60(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14BB / 5307
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_31(bParam0))
			{
				if (!Function_29(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

int Function_61() //Position: 0x14FF / 5375
{
	if (!Function_46(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_killstolen");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_62();
	Function_45();
	return 1;
}

void Function_62() //Position: 0x1596 / 5526
{
	if (Function_72())
	{
		NET_PLAYER_LIST_SET_TEAM_SORT(1);
		if (Function_71())
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(2);
		}
		else
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(4);
		}
		Function_63(0, 0);
		Function_63(1, 0);
	}
	return;
}

void Function_63(bool bParam0, bool bParam1) //Position: 0x15C1 / 5569
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_59())
	{
		bVar0 = 2;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = Function_70(bParam0);
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), false, false);
	if (bParam1)
	{
		Function_64(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_64(int iParam0, int iParam1, bool bParam2) //Position: 0x1660 / 5728
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_43())
	{
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000002:
				Var1 = { StackVal, StackVal, StackVal, Function_66(iParam1, 0) };
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
		if (Function_65())
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

bool Function_65() //Position: 0x1753 / 5971
{
	return (Function_8(4096) || Function_8(4));
}

struct<16> Function_66(var uParam0, var uParam1) //Position: 0x1764 / 5988
{
	return StackVal, StackVal, StackVal, Function_67(Function_68(uParam0), uParam1);
}

struct<16> Function_67(bool bParam0, bool bParam1) //Position: 0x1776 / 6006
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

int Function_68(int iParam0) //Position: 0x17AB / 6059
{
	if (!Function_69())
	{
		return 0;
	}
	return StackVal;
}

bool Function_69() //Position: 0x17C4 / 6084
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_70(int iParam0) //Position: 0x17D1 / 6097
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_71() //Position: 0x17ED / 6125
{
	return Function_59() == 4294967295;
}

bool Function_72() //Position: 0x17F8 / 6136
{
	return Function_73(2);
}

int Function_73(int iParam0) //Position: 0x1802 / 6146
{
	return Function_74(&Global_79349, iParam0);
}

int Function_74(var uParam0, int iParam1) //Position: 0x1811 / 6161
{
	return Function_9(uParam0->f_44, iParam1);
}

void Function_75(vector3 vParam0, float fParam3) //Position: 0x1820 / 6176
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_79(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_79(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_76(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_76(bool bParam0) //Position: 0x18D3 / 6355
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
	return Function_77(bVar0);
}

int Function_77(bool bParam0) //Position: 0x190E / 6414
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
	Function_78(bVar0);
	return bVar0;
}

void Function_78(bool bParam0) //Position: 0x195C / 6492
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_79() //Position: 0x196F / 6511
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_80(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x199E / 6558
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_81(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 7417, 1, 125, 0, 0, 0);
	Function_81(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_81(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x1A21 / 6689
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_82(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_82(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x1A6C / 6764
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
			Function_26(iParam0);
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
			fVar14 = Function_83(iParam0->f_36);
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

var Function_83(float fParam0) //Position: 0x1CEB / 7403
{
	return (fParam0 * 57.29578f);
}

var Function_84(int iParam0, var uParam1) //Position: 0x1CF9 / 7417
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_85(int iParam0, var uParam1) //Position: 0x1D5E / 7518
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("DM_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_86() //Position: 0x1DCA / 7626
{
	int iVar0;
	
	iVar0 = Function_91(Global_83591.f_140, &vLocal_43, 0.0f, &Global_83591 + 276, 1);
	Function_87(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_87(bool bParam0, int iParam1) //Position: 0x1DF7 / 7671
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_131(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_90((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_90((*iParam1)[iVar202], &iVar21))
		{
			if (Function_88((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_88(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1F06 / 7942
{
	float fVar0;
	
	if (!Function_89(bParam0))
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

bool Function_89(int iParam0) //Position: 0x202D / 8237
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_90(bool bParam0, int iParam1) //Position: 0x203F / 8255
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

var Function_91(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x209B / 8347
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
		if (Function_90((*uParam3)[iVar12], &iVar2))
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
		if (Function_90((*uParam3)[iVar12], &iVar2))
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

bool Function_92(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x2189 / 8585
{
	if (!Function_89(bParam0))
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

var Function_93(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x231A / 8986
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

var Function_94() //Position: 0x2386 / 9094
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_95(bool bParam0, bool bParam1) //Position: 0x23AD / 9133
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_96() //Position: 0x23CD / 9165
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_46)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				switch (Global_79349.f_16)
				{
					case 0x00000002:
						Function_97("DM_help", 4294967295);
						break;
					
					case 0x00000011:
						Function_97("TDM_help", 4294967295);
						break;
				}
				iLocal_46 = 1;
			}
		}
	}
	else
	{
		Function_2();
	}
	return;
}

void Function_97(char* cParam0, int iParam1) //Position: 0x243D / 9277
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

int Function_98(int iParam0) //Position: 0x24D4 / 9428
{
	int iVar0;
	
	if (!Function_109(*iParam0) || (Function_130(64) && Function_105()))
	{
		iParam0->f_4 = 0;
		Function_16(iParam0);
		if (!Function_109(*iParam0))
		{
		}
		if (Function_130(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_109(*iParam0))
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
						(iParam0 + 12[Function_102(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_9((iParam0 + 12[StackVal5])->f_16, 32))
							{
								Function_6(iParam0 + 12[StackVal5] + 16, 64);
							}
						}
						else if (!Function_9((iParam0 + 12[StackVal5])->f_16, 32))
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
					if (!Function_9((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_9((iParam0 + 12[StackVal5])->f_16, 2))
							{
								Function_101((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_100((iParam0 + 12[StackVal5])->f_12, 1);
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
			while (iVar0 <= Function_99(3, iParam0->f_396))
			{
				if (iParam0->f_396 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_396);
				}
				else
				{
					iParam0->f_8 = 0;
				}
				if (Function_9((iParam0 + 12[StackVal5])->f_16, 32))
				{
					if (!Function_9((iParam0 + 12[StackVal5])->f_16, 64))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							OPEN_DOOR_DIRECTION((iParam0 + 12[StackVal5])->f_12, false);
							DESTROY_OBJECT((iParam0 + 12[StackVal5])->f_12);
						}
						Function_7(iParam0 + 12[StackVal5] + 16, 64);
					}
				}
				else if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
				{
					if (Function_9((iParam0 + 12[StackVal5])->f_16, 4))
					{
						if (Function_9((iParam0 + 12[StackVal5])->f_16, 8))
						{
							if (StackVal || IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_CLOSING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
							{
								OPEN_DOOR_DIRECTION(StackVal, Function_9((iParam0 + 12[(iParam0 + 12[StackVal5])->f_125])->f_16, 16));
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

int Function_99(int iParam0, int iParam1) //Position: 0x285B / 10331
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_100(bool bParam0, bool bParam1) //Position: 0x286D / 10349
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

void Function_101(bool bParam0, bool bParam1) //Position: 0x28C1 / 10433
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

int Function_102(var uParam0, var uParam1, int iParam2) //Position: 0x2912 / 10514
{
	return Function_103(Global_29006, uParam0, uParam1, iParam2);
}

int Function_103(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x2924 / 10532
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_104(iParam0))
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

bool Function_104(int iParam0) //Position: 0x29C0 / 10688
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_105() //Position: 0x29D6 / 10710
{
	return !Function_106();
}

bool Function_106() //Position: 0x29E0 / 10720
{
	if (Function_108())
	{
		return (Function_107() != 1 || Function_107() != 0);
	}
	return 0;
}

int Function_107() //Position: 0x29F9 / 10745
{
	return Global_79349.f_16;
}

bool Function_108() //Position: 0x2A05 / 10757
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_109(int iParam0) //Position: 0x2A0E / 10766
{
	if (!Function_104(iParam0))
	{
		return 1;
	}
	return Function_110(&(Global_29008[iParam0]), 4);
}

int Function_110(var uParam0, bool bParam1) //Position: 0x2A2A / 10794
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_111(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x2A46 / 10822
{
	float fVar0;
	
	if (Function_126())
	{
		if (Function_125(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_121(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_115((iParam0 + 8[iParam0->f_1125])->f_12, 0, iParam3, 0, 0);
				Function_112((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_115((iParam0 + 8[iParam0->f_1125])->f_16, 0, iParam3, 0, 0);
				Function_112((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_112(int iParam0, var uParam1, int iParam2) //Position: 0x2AE9 / 10985
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_114(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_113(iParam2);
	}
	return;
}

void Function_113(int iParam0) //Position: 0x2B0E / 11022
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_114(int iParam0) //Position: 0x2B23 / 11043
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_115(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2B38 / 11064
{
	int iVar0;
	bool bVar1;
	
	Function_120(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_119(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_116(StackVal, bVar1, bParam4);
		}
	}
}

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BAA / 11178
{
	int iVar0;
	
	Function_120(iParam0);
	Function_118(bParam1);
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
	Function_117();
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

void Function_117() //Position: 0x2D23 / 11555
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_118(bool bParam0) //Position: 0x2D2F / 11567
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

void Function_119(int iParam0, int iParam1) //Position: 0x2D75 / 11637
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_120(iParam0);
	Function_118(iVar0);
	PRINTNL();
	Function_116(iParam0, iVar0, iParam1);
	return;
}

void Function_120(int iParam0) //Position: 0x2D9A / 11674
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

float Function_121(int iParam0) //Position: 0x2DE0 / 11744
{
	return -Function_122(iParam0);
}

float Function_122(int iParam0) //Position: 0x2DEC / 11756
{
	if (Function_125(iParam0))
	{
		if (Function_124(iParam0))
		{
			return StackVal;
		}
		Function_123();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_123() //Position: 0x2EBD / 11965
{
	if (!Function_126())
	{
	}
	return;
}

bool Function_124(int iParam0) //Position: 0x2ECA / 11978
{
	return Function_9(*iParam0, 2);
}

bool Function_125(int iParam0) //Position: 0x2ED7 / 11991
{
	return Function_9(*iParam0, 1);
}

bool Function_126() //Position: 0x2EE4 / 12004
{
	return NET_IS_IN_SESSION();
}

void Function_127() //Position: 0x2EED / 12013
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_131());
	Function_128(bVar0, "bottle", Local_136.f_68);
	Function_128(bVar0, "crate14", Local_136.f_68);
	Function_128(bVar0, "crate13", Local_136.f_68);
	Function_128(bVar0, "crate04", Local_136.f_68);
	Function_128(bVar0, "package", Local_136.f_68);
	Function_128(bVar0, "nlantern05", Local_136.f_68);
	Function_128(bVar0, "c_gen_curtains", Local_136.f_68);
	Function_128(bVar0, "c_tes_blanket", Local_136.f_68);
	Function_128(bVar0, "p_gen_bucket03x", Local_136.f_68);
	Function_128(bVar0, "jug0", Local_136.f_68);
	Function_128(bVar0, "chairbroken", Local_136.f_68);
	Function_128(bVar0, "debrisboard", Local_136.f_68);
	Function_128(bVar0, "pot0", Local_136.f_68);
	Function_128(bVar0, "fencestandard_qpa", Local_136.f_68);
	Function_128(bVar0, "debrispile", Local_136.f_68);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3042 / 12354
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_131(), bParam0, 4294967295, 1);
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

void Function_129(int iParam0, bool bParam1) //Position: 0x309B / 12443
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

bool Function_130(int iParam0) //Position: 0x30C3 / 12483
{
	return Function_9(StackVal, iParam0);
}

var Function_131() //Position: 0x30D6 / 12502
{
	bool bVar0;
	
	return bVar0;
}

bool Function_132() //Position: 0x30DE / 12510
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(-3995.48f, 28.45f, 2972.93f, 5.0f, "gatling", 1);
	bVar1 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(-3959.38f, 28.14f, 2912.73f, 5.0f, "gatling", 1);
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

void Function_133(bool bParam0) //Position: 0x3183 / 12675
{
	Function_129(16, bParam0);
	return;
}

void Function_134(var uParam0) //Position: 0x3190 / 12688
{
	Function_129(8, uParam0);
	return;
}

bool Function_135() //Position: 0x319D / 12701
{
	Function_181(&iLocal_470, 0, 9, 30, 1, 1, 0);
	Function_181(&iLocal_470, 1, 9, 30, 3, 3, 3);
	Function_181(&iLocal_470, 2, 12, 0, 1, 1, 0);
	Function_181(&iLocal_470, 3, 12, 0, 0, 0, 1);
	Function_181(&iLocal_470, 4, 23, 0, 2, 2, 1);
	Function_178(&iLocal_470);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	while (!Function_168())
	{
		if (IS_EXITFLAG_SET())
		{
			return 0;
		}
		WAIT(0);
	}
	ENABLE_CHILD_SECTOR("mp_tum_base01x");
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_166(512);
	Function_165(Global_83864.f_1284);
	Function_19(997);
	Function_17(Global_83864.f_1284, 0, 1);
	Function_158(&Global_83591 + 276, 0);
	Function_156(&Global_83591, 1, 22, 1, 1);
	Function_156(&Global_83591, 2, 5, 10, 1);
	Function_156(&Global_83591, 3, 8, 10, 1);
	Function_156(&Global_83591, 3, 15, 15, 1);
	Function_151(&Global_83591, 1, 20, 2, 1);
	Function_151(&Global_83591, 2, 6, 10, 1);
	Function_151(&Global_83591, 3, 16, 15, 1);
	Function_151(&Global_83591, 4, 10, 10, 1);
	Function_150(&Global_83591);
	Function_149(&Global_83591 + 276, 4);
	Function_148(0, 6);
	Function_148(1, 1);
	if (!Function_144(&uLocal_368))
	{
		return 0;
	}
	Function_138();
	Function_136(Local_136.f_920);
	return 1;
}

void Function_136(bool bParam0) //Position: 0x32E0 / 13024
{
	DECOR_SET_OBJECT(Function_137(), "LobbyGringoSet", bParam0);
	return;
}

var Function_137() //Position: 0x3300 / 13056
{
	return Global_83591.f_140;
}

void Function_138() //Position: 0x330C / 13068
{
	Function_140(Local_136);
	if (Function_72())
	{
		Function_139("FTR_SONG_09", "FTR_SONG_05", 0, 58, 58, 1);
	}
	else
	{
		Function_139("FTR_SONG_05", "FTR_SONG_09", 0, 58, 58, 1);
	}
	return;
}

void Function_139(char* cParam0, char* cParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x3368 / 13160
{
	strcpy(&Global_83591 + 28[09], cParam0, 32);
	(&Global_83591 + 28[09])->f_32 = iParam3;
	strcpy(&Global_83591 + 28[19], cParam1, 32);
	(&Global_83591 + 28[19])->f_32 = iParam4;
	if (IS_STRING_VALID(cParam2))
	{
		strcpy(&Global_83591 + 28[29], bParam2, 32);
		(&Global_83591 + 28[29])->f_32 = iParam5;
	}
	else
	{
		strcpy(&Global_83591 + 28[29], "MP_COUNTDOWN_SONG_02", 32);
		(&Global_83591 + 28[29])->f_32 = 61;
	}
}

void Function_140(var uParam0) //Position: 0x33F8 / 13304
{
	if (Function_143())
	{
		Function_149(&Global_83591 + 276, 2);
	}
	Function_142(uParam0);
	Global_83591.f_4 = 2;
	Function_141();
	vLocal_43 = { StackVal, StackVal, Function_141() };
	return;
}

vector3 Function_141() //Position: 0x3422 / 13346
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

void Function_142(var uParam0) //Position: 0x346A / 13418
{
	Global_83591.f_140 = uParam0;
	return;
}

bool Function_143() //Position: 0x3478 / 13432
{
	return Function_9(Global_79962, 1024);
}

bool Function_144(bool bParam0) //Position: 0x3488 / 13448
{
	if (!Function_147(bParam0, Global_30658[0]))
	{
		return 0;
	}
	Function_145(bParam0, "tumbleweed", "church", 1, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "church", 2, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "saloon", 1, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "saloon", 2, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "saloon", 3, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "saloon", 4, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "saloon", 5, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "ruinedHome", 97, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "ruinedHome", 98, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "mansion", 1, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "mansion", 2, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "mansion", 3, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "mansion", 4, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "mansion", 5, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "mansion", 7, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "mansion", 8, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "mansion", 9, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "mansion", 10, 1, 0, 1, 1);
	Function_145(bParam0, "tumbleweed", "mansion", 11, 1, 0, 1, 1);
	return 1;
}

int Function_145(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x372B / 14123
{
	int iVar0;
	
	iVar0 = iParam0->f_396;
	if (!Function_146(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	if (bParam4)
	{
		Function_7(iParam0 + 12[iVar05] + 16, 2);
	}
	if (bParam5)
	{
		Function_7(iParam0 + 12[iVar05] + 16, 4);
		if (bParam6)
		{
			Function_7(iParam0 + 12[iVar05] + 16, 8);
			if (bParam7)
			{
				Function_7(iParam0 + 12[iVar05] + 16, 16);
			}
		}
	}
	return 1;
}

bool Function_146(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x379C / 14236
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

bool Function_147(int iParam0, int iParam1) //Position: 0x37F8 / 14328
{
	int iVar0;
	
	if (!Function_104(iParam1))
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

void Function_148(int iParam0, int iParam1) //Position: 0x386E / 14446
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_149(int iParam0, int iParam1) //Position: 0x387C / 14460
{
	(iParam0 + 228)->f_220 = 0;
	Function_7(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_150(int iParam0) //Position: 0x3894 / 14484
{
	iParam0->f_844 = 0;
	return;
}

void Function_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x38A0 / 14496
{
	Function_152(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_152(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x38B8 / 14520
{
	Function_153(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_153(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x38CF / 14543
{
	if (!Function_155(iParam1))
	{
		return;
	}
	Function_154(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_154(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x38F2 / 14578
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

bool Function_155(int iParam0) //Position: 0x391C / 14620
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_156(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x392C / 14636
{
	Function_157(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_157(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3944 / 14660
{
	Function_153(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_158(int iParam0, bool bParam1) //Position: 0x3959 / 14681
{
	Function_162(iParam0);
	Function_162(iParam0 + 228);
	if (bParam1)
	{
		Function_159(iParam0);
	}
	return;
}

void Function_159(int iParam0) //Position: 0x3975 / 14709
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_160(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_160(var uParam0, int iParam1) //Position: 0x3995 / 14741
{
	Function_161(uParam0, iParam1, 0);
	return;
}

void Function_161(int iParam0, int iParam1, int iParam2) //Position: 0x39A3 / 14755
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_162(int iParam0) //Position: 0x39B4 / 14772
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_164(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_163(iParam0, 0.0f);
	return;
}

void Function_163(var uParam0, int iParam1) //Position: 0x39E1 / 14817
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_164(int iParam0) //Position: 0x39ED / 14829
{
	Function_154(iParam0, 4294967295, 0, 1);
	return;
}

void Function_165(int iParam0) //Position: 0x39FB / 14843
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

void Function_166(int iParam0) //Position: 0x3A2A / 14890
{
	Function_167(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_167(var uParam0, int iParam1) //Position: 0x3A83 / 14979
{
	Function_7(uParam0, iParam1);
	return;
}

bool Function_168() //Position: 0x3A90 / 14992
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
	
	Function_177(3, 3);
	uVar0 = uVar0;
	Function_175(&Local_136 + 4, "p_gen_skullPost02x", 0, 0);
	Function_175(&Local_136 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_175(&Local_136 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_175(&Local_136 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling", 1, 0);
	Function_175(&Local_136 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	if (!Function_169(&Local_136 + 4))
	{
		return 0;
	}
	Local_136 = FIND_NAMED_LAYOUT("Deathmatch_Tum_layout");
	if (!IS_LAYOUTREF_VALID(Local_136))
	{
		Local_136 = CREATE_LAYOUT("Deathmatch_Tum_layout");
	}
	Local_136.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_136, "v_clear_vol", 2, -3984.0f, 36.00663f, 2948.0f, 0.0f, 0.0f, 0.0f, 262.3495f, 31.12192f, 256.6284f);
	Local_136.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_136, "playablespace", 2, -3984.045f, 28.1865f, 2935.856f, 0.0f, 29.50395f, 0.0f, 313.6283f, 118.8916f, 313.6283f);
	Local_136.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_39", 3, -3958.006f, 30.89664f, 2929.4f, 0.0f, -55.96852f, 0.0f, 0.769297f, 1.511373f, 1.125287f);
	Local_136.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_38", 3, -3977.548f, 32.29787f, 2914.262f, 0.0f, -11.68849f, 0.0f, 1.571095f, 0.8718218f, 1.401955f);
	Local_136.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_37", 3, -3948.513f, 28.79963f, 2961.508f, 0.0f, -182.4703f, 0.0f, 1.01947f, 1.041453f, 1.118695f);
	Local_136.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_36", 3, -3964.47f, 30.55498f, 2961.497f, 0.0f, -526.0065f, 0.0f, 1.146845f, 1.207152f, 1.133981f);
	Local_136.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_35", 3, -4001.473f, 29.04794f, 2922.592f, 0.0f, -333.2487f, 0.0f, 1.880421f, 1.628469f, 1.880421f);
	Local_136.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_34", 3, -4086.078f, 33.68818f, 2975.819f, 0.0f, -210.6577f, 0.0f, 2.148187f, 6.294487f, 2.148187f);
	Local_136.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_33", 3, -3987.414f, 28.83418f, 3044.56f, 0.0f, -88.39367f, 0.0f, 1.686914f, 1.697853f, 1.686914f);
	Local_136.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_32", 3, -3975.114f, 28.07007f, 2901.118f, 0.0f, -150.763f, 0.0f, 1.013778f, 0.6932117f, 1.013778f);
	Local_136.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_31", 3, -3914.451f, 31.08102f, 2923.866f, 0.5548701f, -178.3191f, 1.071101f, 1.443083f, 5.295927f, 1.370505f);
	Local_136.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_30", 3, -4037.906f, 32.31547f, 3006.759f, 0.0f, -181.2774f, 0.0f, 1.892313f, 5.544739f, 1.892313f);
	Local_136.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_29", 3, -4037.004f, 32.66646f, 3060f, 0.0f, -200.1063f, 0.0f, 2.25141f, 6.596942f, 2.25141f);
	Local_136.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_28", 3, -3976.581f, 27.82765f, 3065.543f, 0.0f, -182.5675f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_27", 3, -3928.0f, 26.10204f, 2972.0f, 0.0f, -138.231f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_26", 3, -3970.471f, 30.11155f, 2967.409f, 0.0f, -344.9128f, 0.0f, 1.400205f, 1.044532f, 1.98453f);
	Local_136.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_25", 3, -3999.427f, 30.47741f, 2948.945f, 0.0f, -109.7381f, 0.0f, 1.959547f, 1.714921f, 2.136512f);
	Local_136.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_24", 3, -4057.392f, 31.24279f, 2978.608f, 0.0f, -265.1893f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_23", 3, -3977.303f, 28.45123f, 2913.079f, 0.0f, -11.68849f, 0.0f, 1.571095f, 2.087285f, 1.401955f);
	Local_136.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_22", 3, -3953.312f, 29.96448f, 2939.223f, 0.0f, -35.22628f, 0.0f, 1.930818f, 7.952068f, 1.843626f);
	Local_136.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_21", 3, -3932.0f, 27.10593f, 2880.0f, 0.0f, -60.08466f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_20", 3, -3883.939f, 31.12168f, 2923.278f, 0.0f, -67.84254f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_19", 3, -3898.331f, 31.82174f, 2921.273f, 0.0f, -13.60553f, 0.0f, 1.0852f, 7.952068f, 4.194906f);
	Local_136.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_18", 3, -4000.335f, 25.09801f, 2868.0f, 0.0f, 26.53247f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_17", 3, -4034.344f, 28.33999f, 2888.036f, 0.0f, 79.56847f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_16", 3, -4060.709f, 31.05026f, 2958.737f, 0.0f, 163.2081f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_15", 3, -4108.275f, 38.182f, 2950.125f, 0.0f, 52.94986f, 0.0f, 2.713888f, 4.885954f, 2.713888f);
	Local_136.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_14", 3, -3940.0f, 25.09824f, 2989.031f, 0.0f, 289.4779f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_13", 3, -3943.82f, 28.90638f, 2912.024f, 0.0f, 229.5649f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_12", 3, -4004f, 27.63472f, 2908.215f, 0.0f, -21.79864f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_11", 3, -4033.119f, 29.44337f, 2951.85f, 0.0f, 101.23f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_10", 3, -4008.535f, 29.54855f, 2993.14f, 0.0f, 199.9552f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_9", 3, -4080f, 31.81991f, 2995.999f, 0.0f, 113.8994f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_8", 3, -4035.875f, 30.21676f, 3036.362f, 0.0f, 139.7569f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_7", 3, -3985.426f, 27.833f, 3033.271f, 0.0f, 145.4214f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_6", 3, -3928.0f, 31.57994f, 3016.0f, 0.0f, -110.8904f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_5", 3, -3908.0f, 31.39465f, 2968.0f, 0.0f, -140.8216f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_4", 3, -3899.567f, 31.12166f, 2905.715f, 0.0f, 327.8127f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_3", 3, -3944f, 26.10193f, 2848f, 0.0f, -366.3711f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_2", 3, -4011.248f, 24.09412f, 2846.011f, 0.0f, 31.75775f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_1", 3, -4064f, 29.11371f, 2868f, 0.0f, 42.45674f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_136.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_0", 3, -4092.149f, 37.58409f, 2924.848f, 0.0f, 61.3784f, 0.0f, 2.713888f, 2.706705f, 2.713888f);
	*(&Local_136 + 236) = { -4009.096f, 28.62745f, 2937.506f };
	*(&Local_136 + 236 + 12) = { 0.0f, 127.5166f, 0.0f };
	Local_136.f_260 = CREATE_POINT_IN_LAYOUT(Local_136, "Showdown_A", -4009.096f, 28.62745f, 2937.506f, 0.0f, 127.5166f, 0.0f);
	*(&Local_136 + 264) = { -4002.591f, 28.74016f, 2933.159f };
	*(&Local_136 + 264 + 12) = { 0.0f, -51.07376f, 0.0f };
	Local_136.f_288 = CREATE_POINT_IN_LAYOUT(Local_136, "Showdown_B", -4002.591f, 28.74016f, 2933.159f, 0.0f, -51.07376f, 0.0f);
	*(&Local_136 + 292) = { -3978.189f, 27.97245f, 2936.659f };
	*(&Local_136 + 292 + 12) = { 0.0f, 92.7494f, 0.0f };
	Local_136.f_316 = CREATE_POINT_IN_LAYOUT(Local_136, "StandoffCenter", -3978.189f, 27.97245f, 2936.659f, 0.0f, 92.7494f, 0.0f);
	Local_136.f_320 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_136, 8, 0);
	*(&Local_136 + 324[06]) = { -3945.451f, 30.01124f, 2935.279f };
	*(&Local_136 + 324[06] + 12) = { 0.0f, -53.93149f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_D1", -3945.451f, 30.01124f, 2935.279f, 0.0f, -53.93149f, 0.0f);
	DECOR_SET_INT(bVar1, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_136.f_320);
	*(&Local_136 + 324[16]) = { -3974.377f, 29.39345f, 2959.274f };
	*(&Local_136 + 324[16] + 12) = { 0.0f, -163.4948f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_D2", -3974.377f, 29.39345f, 2959.274f, 0.0f, -163.4948f, 0.0f);
	DECOR_SET_INT(bVar2, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_136.f_320);
	*(&Local_136 + 324[26]) = { -4019.437f, 26.54456f, 2868.186f };
	*(&Local_136 + 324[26] + 12) = { 3.273546f, 153.9039f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_A1", -4019.437f, 26.54456f, 2868.186f, 3.273546f, 153.9039f, 0.0f);
	DECOR_SET_INT(bVar3, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_136.f_320);
	*(&Local_136 + 324[36]) = { -3930.531f, 26.15015f, 2991.445f };
	*(&Local_136 + 324[36] + 12) = { 0.0f, -113.4691f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_A2", -3930.531f, 26.15015f, 2991.445f, 0.0f, -113.4691f, 0.0f);
	DECOR_SET_INT(bVar4, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_136.f_320);
	*(&Local_136 + 324[46]) = { -4003.292f, 28.62311f, 2950.668f };
	*(&Local_136 + 324[46] + 12) = { 0.0f, -73.05689f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_P1", -4003.292f, 28.62311f, 2950.668f, 0.0f, -73.05689f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_136.f_320);
	*(&Local_136 + 324[56]) = { -3982.791f, 28.60759f, 2970.791f };
	*(&Local_136 + 324[56] + 12) = { 0.0f, 192.3761f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_P2", -3982.791f, 28.60759f, 2970.791f, 0.0f, 192.3761f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_136.f_320);
	*(&Local_136 + 324[66]) = { -3955.131f, 29.05244f, 2923.955f };
	*(&Local_136 + 324[66] + 12) = { 0.0f, 211.3746f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_P3", -3955.131f, 29.05244f, 2923.955f, 0.0f, 211.3746f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_136.f_320);
	*(&Local_136 + 324[76]) = { -3989.078f, 28.21542f, 2926.726f };
	*(&Local_136 + 324[76] + 12) = { 0.0f, 116.8816f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_B1", -3989.078f, 28.21542f, 2926.726f, 0.0f, 116.8816f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_136.f_320);
	*(&Local_136 + 324[86]) = { -3952.565f, 28.20646f, 2961.489f };
	*(&Local_136 + 324[86] + 12) = { 0.0f, 275.8201f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_B2", -3952.565f, 28.20646f, 2961.489f, 0.0f, 275.8201f, 0.0f);
	DECOR_SET_INT(bVar9, "type", true);
	DECOR_SET_INT(bVar9, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_136.f_320);
	*(&Local_136 + 324[96]) = { -3928.823f, 30.45762f, 2899.902f };
	*(&Local_136 + 324[96] + 12) = { 0.0f, -121.755f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_R1", -3928.823f, 30.45762f, 2899.902f, 0.0f, -121.755f, 0.0f);
	DECOR_SET_INT(bVar10, "type", true);
	DECOR_SET_INT(bVar10, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_136.f_320);
	*(&Local_136 + 324[106]) = { -4002.349f, 29.01959f, 3021.651f };
	*(&Local_136 + 324[106] + 12) = { 0.0f, -162.2583f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_R2", -4002.349f, 29.01959f, 3021.651f, 0.0f, -162.2583f, 0.0f);
	DECOR_SET_INT(bVar11, "type", true);
	DECOR_SET_INT(bVar11, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_136.f_320);
	*(&Local_136 + 324[116]) = { -4057.751f, 31.05945f, 2946.249f };
	*(&Local_136 + 324[116] + 12) = { 0.0f, -154.4442f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_R3", -4057.751f, 31.05945f, 2946.249f, 0.0f, -154.4442f, 0.0f);
	DECOR_SET_INT(bVar12, "type", true);
	DECOR_SET_INT(bVar12, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_136.f_320);
	*(&Local_136 + 324[126]) = { -4100.566f, 36.03329f, 2951.007f };
	*(&Local_136 + 324[126] + 12) = { 0.0f, -30.722f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_R4", -4100.566f, 36.03329f, 2951.007f, 0.0f, -30.722f, 0.0f);
	DECOR_SET_INT(bVar13, "type", true);
	DECOR_SET_INT(bVar13, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_136.f_320);
	*(&Local_136 + 324[136]) = { -3876.843f, 32.05772f, 2919.324f };
	*(&Local_136 + 324[136] + 12) = { 0.0f, 7.837425f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_R5", -3876.843f, 32.05772f, 2919.324f, 0.0f, 7.837425f, 0.0f);
	DECOR_SET_INT(bVar14, "type", true);
	DECOR_SET_INT(bVar14, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_136.f_320);
	*(&Local_136 + 324[146]) = { -3980.422f, 31.87027f, 2918.475f };
	*(&Local_136 + 324[146] + 12) = { 0.0f, 156.9681f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_S1", -3980.422f, 31.87027f, 2918.475f, 0.0f, 156.9681f, 0.0f);
	DECOR_SET_INT(bVar15, "type", true);
	DECOR_SET_INT(bVar15, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_136.f_320);
	Local_136.f_688 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagsSet", Local_136, 8, 0);
	*(&Local_136 + 692[06]) = { -4001.357f, 29.87307f, 3000.578f };
	*(&Local_136 + 692[06] + 12) = { 0.0f, -189.1299f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_136, "Fire_01", -4001.357f, 29.87307f, 3000.578f, 0.0f, -189.1299f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_136.f_688);
	*(&Local_136 + 692[16]) = { -4029.31f, 31.47009f, 2981.517f };
	*(&Local_136 + 692[16] + 12) = { 0.0f, -169.8443f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_136, "Fire_02", -4029.31f, 31.47009f, 2981.517f, 0.0f, -169.8443f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_136.f_688);
	*(&Local_136 + 692[26]) = { -4034.631f, 29.65251f, 2895.888f };
	*(&Local_136 + 692[26] + 12) = { 0.0f, -190.5793f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_136, "Fire_03", -4034.631f, 29.65251f, 2895.888f, 0.0f, -190.5793f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_136.f_688);
	*(&Local_136 + 692[36]) = { -4001.319f, 30.66134f, 2997.191f };
	*(&Local_136 + 692[36] + 12) = { 0.0f, -174.2278f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_136, "Fire_04", -4001.319f, 30.66134f, 2997.191f, 0.0f, -174.2278f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_136.f_688);
	Local_136.f_792 = CREATE_OBJECTSET_IN_LAYOUT("SmokeFlagsSet", Local_136, 8, 0);
	*(&Local_136 + 796[06]) = { -4032.712f, 31.72003f, 2974.983f };
	*(&Local_136 + 796[06] + 12) = { 0.0f, 10.14039f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_136, "Smoke_01", -4032.712f, 31.72003f, 2974.983f, 0.0f, 10.14039f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_136.f_792);
	*(&Local_136 + 796[16]) = { -4001.358f, 30.43634f, 2999.567f };
	*(&Local_136 + 796[16] + 12) = { 0.0f, -190.4364f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_136, "Smoke_02", -4001.358f, 30.43634f, 2999.567f, 0.0f, -190.4364f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_136.f_792);
	*(&Local_136 + 796[26]) = { -4034.568f, 30.07458f, 2896.018f };
	*(&Local_136 + 796[26] + 12) = { 0.0f, 185.9101f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_136, "Smoke_03", -4034.568f, 30.07458f, 2896.018f, 0.0f, 185.9101f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_136.f_792);
	*(&Local_136 + 796[36]) = { -4029.104f, 32.14027f, 2982.197f };
	*(&Local_136 + 796[36] + 12) = { 0.0f, 185.9101f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_136, "Smoke_04", -4029.104f, 32.14027f, 2982.197f, 0.0f, 185.9101f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_136.f_792);
	*(&Local_136 + 796[46]) = { -4035.104f, 29.64f, 2924.72f };
	*(&Local_136 + 796[46] + 12) = { 0.0f, 185.9101f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_136, "Smoke_05", -4035.104f, 29.64f, 2924.72f, 0.0f, 185.9101f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_136.f_792);
	Local_136.f_920 = CREATE_OBJECTSET_IN_LAYOUT(Function_131(), Local_136, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -3968.541f, 28.4404f, 2948.035f, 0.0f, -87.04878f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -3959.014f, 28.38515f, 2955.877f, 0.0f, 47.46111f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", -3980.0f, 27.99049f, 2940f, 0.0f, -134.0976f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", -3982.403f, 28.37518f, 2945.597f, 0.0f, -91.18584f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_drunk_rowdydrink5", "stand_drunk_rowdydrink", -3972.724f, 28.27697f, 2945.927f, 0.0f, 85.00707f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "smoking_stand5", "smoking_stand", -3964.083f, 29.356f, 2958.197f, 0.0f, 12.554f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "smoking_stand6", "smoking_stand", -3974.104f, 29.356f, 2959.421f, 0.0f, 12.554f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "smoking_stand7", "smoking_stand", -3978.291f, 29.249f, 2961.896f, 0.0f, 12.062f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "smoking_stand8", "smoking_stand", -3980.62f, 32.31f, 2962.506f, 0.0f, 15.505f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_yelling", "stand_yelling", -3998.34f, 28.24254f, 2937.194f, 0.0f, -83.68496f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "lean_rail_nospawn", "lean_rail_nospawn", -3980.157f, 31.94822f, 2918.335f, 0.0f, -193.9807f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -3978.41f, 31.92476f, 2918.599f, 0.0f, 158.0413f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "smoking_stand", "smoking_stand", -3976.0f, 28.10947f, 2941.593f, 0.0f, 136.4706f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "smoking_stand1", "smoking_stand", -3978.667f, 28.38855f, 2950.667f, 0.0f, 0.0f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "smoking_stand2", "smoking_stand", -3977.316f, 28.10601f, 2942.684f, 0.0f, 0.0f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "smoking_stand3", "smoking_stand", -3980.0f, 28.23919f, 2944.94f, 0.0f, 65.2194f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "smoking_stand4", "smoking_stand", -3980.0f, 28.40393f, 2948.0f, 0.0f, 0.0f, 0.0f), Local_136.f_920);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_yelling1", "stand_yelling", -3996.407f, 28.24254f, 2936.98f, 0.0f, -263.4308f, 0.0f), Local_136.f_920);
	Local_136.f_924 = CREATE_OBJECTSET_IN_LAYOUT(Function_131(), Local_136, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_136, "skullPost02x0", "p_gen_skullPost02x", -3961.855f, 27.977f, 2911.687f, 0.0f, 0.0f, 0.0f, 1), Local_136.f_924);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_136, "skullPost02x1", "p_gen_skullPost02x", -3958.355f, 28.249f, 2914.858f, 0.0f, 0.0f, 0.0f, 1), Local_136.f_924);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_136, "skullPost02x2", "p_gen_skullPost02x", -3995.877f, 29.083f, 2969.403f, 0.0f, 0.0f, 0.0f, 1), Local_136.f_924);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_136, "skullPost02x3", "p_gen_skullPost02x", -3991.971f, 28.951f, 2972.116f, 0.0f, 0.0f, 0.0f, 1), Local_136.f_924);
	return 1;
}

bool Function_169(int iParam0) //Position: 0x584F / 22607
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_174();
	iVar1 = 0;
	if (!Function_13(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_173(iParam0[iVar03], 8);
		}
		else if (Function_172())
		{
			iVar1 = 1;
			Function_173(iParam0[iVar03], 8);
		}
		Function_173(iParam0[iVar03], 16);
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
				Function_173(iParam0[iVar03], 1);
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
							Function_173(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_173(iParam0[iVar03], 2);
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
							Function_173(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_173(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_173(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_173(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_173(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_173(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_173(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_173(iParam0[iVar03], 2);
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
	Function_170();
	return 1;
}

void Function_170() //Position: 0x5BCA / 23498
{
	if (!Function_171(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_171(int iParam0) //Position: 0x5C0A / 23562
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_172() //Position: 0x5C26 / 23590
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

void Function_173(var uParam0, int iParam1) //Position: 0x5C51 / 23633
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_174() //Position: 0x5C62 / 23650
{
	if (!Function_171(128))
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

var Function_175(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5CA4 / 23716
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_176(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_173(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_176(var uParam0, int iParam1, int iParam2) //Position: 0x5CDC / 23772
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_13(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_173(uParam0[iVar03], 4);
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

void Function_177(int iParam0, int iParam1) //Position: 0x5DA0 / 23968
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

void Function_178(int iParam0) //Position: 0x5DE9 / 24041
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_180("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_179(StackVal, 0);
	return;
}

void Function_179(var uParam0, int iParam1) //Position: 0x5E5B / 24155
{
	Function_120(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_119(StackVal, iParam1);
	}
	return;
}

bool Function_180(char* cParam0) //Position: 0x5E8C / 24204
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5EAB / 24235
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_182() //Position: 0x5EED / 24301
{
	while (!IS_EXITFLAG_SET())
	{
		Function_96();
		if (Function_72())
		{
			Function_51(5375, 4999);
		}
		else
		{
			Function_51(3533, 1693);
		}
		WAIT(0);
	}
	return;
}

bool Function_183() //Position: 0x5F1F / 24351
{
	return Function_130(2);
}

void Function_184() //Position: 0x5F29 / 24361
{
	if (Function_183())
	{
		return;
	}
	Function_186();
	Function_175(&iLocal_39, Function_94(), 0, 0);
	while (!Function_169(&iLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_96();
	Function_185();
	return;
}

void Function_185() //Position: 0x5F5D / 24413
{
	while (!Function_130(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

void Function_186() //Position: 0x5F78 / 24440
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

