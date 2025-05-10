//Decompiled with MagicRDR v1.0
//Function Count : 187
//Statics Count : 671
//Natives Count : 190
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
	struct<105> Local_11 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	struct<957> Local_135 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	
	fLocal_10 = 1.0f;
	iLocal_45 = 0;
	iLocal_46 = 0;
	iLocal_47 = 31;
	iLocal_48 = 33;
	iLocal_49 = 1;
	fLocal_50 = 2.0f;
	iLocal_52 = 0;
	iLocal_53 = 0;
	fLocal_80 = 60.0f;
	iLocal_127 = 0;
	iLocal_128 = 0;
	iLocal_129 = 0;
	iLocal_130 = 0;
	iLocal_131 = 0;
	iLocal_132 = 0;
	iLocal_133 = 0;
	iLocal_134 = 0;
	Function_184();
	if (Function_183())
	{
		Function_182();
	}
	else
	{
		if (Function_134())
		{
			Function_133(1);
		}
		else
		{
			Function_132(1);
		}
		bVar0 = CREATE_WORLD_SECTOR(Local_135, "hennigansRanch");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar0))
		{
			WAIT(false);
		}
		iVar1 = 10;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_131(64))
			{
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					Function_130(64, 0);
					Function_128();
					iVar1 = 10;
				}
			}
			Function_112(&iLocal_642, 0,15f, 0,7f, 12, 0.0f, 0.0f, 0.0f, 0.0f);
			Function_99(&uLocal_375);
			Function_24();
			WAIT(false);
		}
		Function_22(512);
		Function_18();
		Function_17(Global_83864.f_1284, 0, 1);
	}
	Function_15(&uLocal_375);
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_hen_ffa01x", 0);
	DISABLE_CHILD_SECTOR("mp_hen_ffa01x");
	Function_14();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x12D / 301
{
	Function_10(&iLocal_38);
	Function_3();
	Function_2();
	return;
}

void Function_2() //Position: 0x13E / 318
{
	if (iLocal_45)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_45 = 0;
	}
	return;
}

void Function_3() //Position: 0x17D / 381
{
	Function_4();
	return;
}

void Function_4() //Position: 0x186 / 390
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

void Function_5(int iParam0, bool bParam1, int iParam2) //Position: 0x28F / 655
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

void Function_6(var uParam0, int iParam1) //Position: 0x2B7 / 695
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x2CA / 714
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_8(int iParam0) //Position: 0x2D9 / 729
{
	return Function_9(Global_76905.f_132, iParam0);
}

bool Function_9(var uParam0, int iParam1) //Position: 0x2EA / 746
{
	return (uParam0 && iParam1) == 0;
}

void Function_10(int iParam0) //Position: 0x2F7 / 759
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

void Function_11(var uParam0, int iParam1) //Position: 0x31D / 797
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

void Function_12(var uParam0, int iParam1) //Position: 0x44B / 1099
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_13(int iParam0, int iParam1) //Position: 0x465 / 1125
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_14() //Position: 0x482 / 1154
{
	Function_10(&Local_135 + 4);
	RELEASE_LAYOUT_REF(Local_135);
	return;
}

void Function_15(int iParam0) //Position: 0x494 / 1172
{
	Function_130(64, 0);
	Function_16(iParam0);
	return;
}

void Function_16(int iParam0) //Position: 0x4A5 / 1189
{
	if (iParam0->f_1060 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_1060, 0);
		iParam0->f_1060 = "";
	}
	return;
}

void Function_17(var uParam0, bool bParam1, bool bParam2) //Position: 0x4C5 / 1221
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

void Function_18() //Position: 0x4F2 / 1266
{
	Function_19(Function_21());
	return;
}

void Function_19(int iParam0) //Position: 0x4FE / 1278
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

bool Function_20(int iParam0) //Position: 0x52B / 1323
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

int Function_21() //Position: 0x542 / 1346
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_22(int iParam0) //Position: 0x55C / 1372
{
	Function_23(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0x595 / 1429
{
	Function_6(uParam0, iParam1);
	return;
}

void Function_24() //Position: 0x5A2 / 1442
{
	Function_97();
	if (Function_96(1, 1))
	{
		Function_80(StackVal, StackVal, 7392, vLocal_42, 1, 7284);
	}
	else
	{
		if (!iLocal_46)
		{
			iLocal_46 = 1;
			Function_75(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		if (Function_72())
		{
			Function_51(5141, 4765);
		}
		else
		{
			Function_51(3299, 1603);
		}
		Function_25();
	}
	return;
}

void Function_25() //Position: 0x601 / 1537
{
	if (IS_OBJECT_VALID(Local_11.f_104))
	{
		DESTROY_OBJECT(Local_11.f_104);
		Function_26(&Local_11);
	}
	return;
}

void Function_26(int iParam0) //Position: 0x61D / 1565
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

int Function_27(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x643 / 1603
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
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("TDM_team_FMT"), I2STR(bVar3), 0, 0);
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

void Function_28(bool bParam0, bool bParam1) //Position: 0x728 / 1832
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

bool Function_29(bool bParam0, int iParam1, bool bParam2) //Position: 0x75B / 1883
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_96(iParam1, bParam2);
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

var Function_30(int iParam0) //Position: 0x7DC / 2012
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

bool Function_31(bool bParam0) //Position: 0xA65 / 2661
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

int Function_32(int iParam0, bool bParam1) //Position: 0xB06 / 2822
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

int Function_33(int iParam0) //Position: 0xB74 / 2932
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

bool Function_34(bool bParam0, int iParam1, int iParam2) //Position: 0xB8D / 2957
{
	var uVar0;
	
	return Function_35(bParam0, iParam1, &uVar0, iParam2);
}

int Function_35(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xB9E / 2974
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

var Function_36(int iParam0, int iParam1, int iParam2) //Position: 0xC03 / 3075
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_37(bool bParam0) //Position: 0xC18 / 3096
{
	return Function_38(0, bParam0);
}

int Function_38(int iParam0, bool bParam1) //Position: 0xC24 / 3108
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

var Function_39(int iParam0) //Position: 0xC8B / 3211
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_40(bool bParam0) //Position: 0xC9B / 3227
{
	return Function_32(12, bParam0);
}

int Function_41(int iParam0) //Position: 0xCA8 / 3240
{
	return Function_32(11, iParam0);
}

void Function_42(bool bParam0, int iParam1, char* cParam2) //Position: 0xCB5 / 3253
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

bool Function_43() //Position: 0xCD6 / 3286
{
	return Function_8(32768);
}

int Function_44() //Position: 0xCE3 / 3299
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

void Function_45() //Position: 0xD77 / 3447
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

bool Function_46(bool bParam0) //Position: 0xDB4 / 3508
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

void Function_47(bool bParam0) //Position: 0xE35 / 3637
{
	if (bParam0 || Function_8(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_8(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_8(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_8(1048576) || Function_8(4)) || Function_96(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_5(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_48(int iParam0) //Position: 0xEBE / 3774
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_49(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_49(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xED2 / 3794
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

int Function_50(bool bParam0, bool bParam1) //Position: 0xF17 / 3863
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

void Function_51(int iParam0, int iParam1) //Position: 0xF4B / 3915
{
	Function_52(iParam0, iParam1, 4758);
	return;
}

void Function_52(var uParam0, var uParam1, int iParam2) //Position: 0xF5C / 3932
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

void Function_53(var uParam0, var uParam1, int iParam2) //Position: 0x10F5 / 4341
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

void Function_54(bool bParam0) //Position: 0x126D / 4717
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_5(16384, 0, 1);
	return;
}

void Function_55() //Position: 0x1287 / 4743
{
	Function_5(32768, 1, 0);
	return;
}

int Function_56() //Position: 0x1296 / 4758
{
	return 1;
}

int Function_57(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x129D / 4765
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
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("TDM_team_FMT"), I2STR(bVar3), 0, 0);
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

bool Function_58(bool bParam0) //Position: 0x1392 / 5010
{
	if (Function_60(bParam0, 1, 0) != 4294967295 && Function_59() != 4294967295)
	{
		return 0;
	}
	return Function_60(bParam0, 1, 0) != Function_59();
}

int Function_59() //Position: 0x13BA / 5050
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_60(GET_LOCAL_SLOT(), 1, 0);
}

int Function_60(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13D1 / 5073
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

int Function_61() //Position: 0x1415 / 5141
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

void Function_62() //Position: 0x14AC / 5292
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

void Function_63(bool bParam0, bool bParam1) //Position: 0x14D7 / 5335
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
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), 0, 0);
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

void Function_64(int iParam0, int iParam1, bool bParam2) //Position: 0x1576 / 5494
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

bool Function_65() //Position: 0x1669 / 5737
{
	return (Function_8(4096) || Function_8(4));
}

struct<16> Function_66(var uParam0, var uParam1) //Position: 0x167A / 5754
{
	return StackVal, StackVal, StackVal, Function_67(Function_68(uParam0), uParam1);
}

struct<16> Function_67(bool bParam0, bool bParam1) //Position: 0x168C / 5772
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

int Function_68(int iParam0) //Position: 0x16C1 / 5825
{
	if (!Function_69())
	{
		return 0;
	}
	return StackVal;
}

bool Function_69() //Position: 0x16DA / 5850
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_70(int iParam0) //Position: 0x16E7 / 5863
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_71() //Position: 0x1703 / 5891
{
	return Function_59() == 4294967295;
}

bool Function_72() //Position: 0x170E / 5902
{
	return Function_73(2);
}

int Function_73(int iParam0) //Position: 0x1718 / 5912
{
	return Function_74(&Global_79349, iParam0);
}

int Function_74(var uParam0, int iParam1) //Position: 0x1727 / 5927
{
	return Function_9(uParam0->f_44, iParam1);
}

void Function_75(vector3 vParam0, var uParam3) //Position: 0x1736 / 5942
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_79(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_79(), "TurretFinderVol", false, vParam0, 0.0f, 0.0f, 0.0f, uParam3, uParam3, uParam3);
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

int Function_76(bool bParam0) //Position: 0x17E9 / 6121
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

int Function_77(bool bParam0) //Position: 0x1824 / 6180
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

void Function_78(bool bParam0) //Position: 0x1872 / 6258
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0,4f);
	return;
}

var Function_79() //Position: 0x1885 / 6277
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_80(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x18B4 / 6324
{
	if (!IS_OBJECT_VALID(Local_11.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_11.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_11.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_81(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_11.f_104, &Local_11) + Vector(0.0f, 2,45f, 0.0f), 1, 7183, 1, 125, 0, 0, 0);
	Function_81(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_11.f_104, &Local_11 + 48) + Vector(0.0f, 2,15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_81(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x1937 / 6455
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_82(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_82(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) //Position: 0x1982 / 6530
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

var Function_83(float fParam0) //Position: 0x1C01 / 7169
{
	return (fParam0 * 57,29578f);
}

var Function_84(int iParam0, var uParam1) //Position: 0x1C0F / 7183
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_11.f_96 != iParam0)
	{
		Local_11.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_48(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_85(int iParam0, var uParam1) //Position: 0x1C74 / 7284
{
	uParam1 = uParam1;
	if (Local_11.f_100 != iParam0)
	{
		Local_11.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("DM_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), 0);
	}
	return "mp_lobby_summary";
}

var Function_86() //Position: 0x1CE0 / 7392
{
	int iVar0;
	
	iVar0 = Function_92(Global_83591.f_140, &vLocal_42, 0.0f, &Global_83591 + 276, 1);
	Function_87(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_87(bool bParam0, int iParam1) //Position: 0x1D0D / 7437
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_91(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
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

bool Function_88(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1E1C / 7708
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

bool Function_89(int iParam0) //Position: 0x1F43 / 8003
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_90(bool bParam0, int iParam1) //Position: 0x1F55 / 8021
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

var Function_91() //Position: 0x1FB1 / 8113
{
	int iVar0;
	
	return iVar0;
}

var Function_92(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1FB9 / 8121
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

bool Function_93(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x20A7 / 8359
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

var Function_94(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x223B / 8763
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

var Function_95() //Position: 0x22A7 / 8871
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_96(bool bParam0, bool bParam1) //Position: 0x22CE / 8910
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_97() //Position: 0x22EE / 8942
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_45)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				switch (Global_79349.f_16)
				{
					case 0x00000002:
						Function_98("DM_help", 4294967295);
						break;
					
					case 0x00000011:
						Function_98("TDM_help", 4294967295);
						break;
				}
				iLocal_45 = 1;
			}
		}
	}
	else
	{
		Function_2();
	}
	return;
}

void Function_98(char* cParam0, int iParam1) //Position: 0x235E / 9054
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

int Function_99(int iParam0) //Position: 0x23F5 / 9205
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
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_DOOR_MUTE", iParam0 + 1060);
			}
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_1056)
				{
					if (!IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
					{
						(iParam0 + 12[Function_103(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
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
			if (StackVal > iParam0->f_1056)
			{
				iParam0->f_8 = 0;
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_1056)
				{
					if (!Function_9((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_9((iParam0 + 12[StackVal5])->f_16, 2))
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
			if (StackVal > iParam0->f_1056)
			{
				iParam0->f_1064 = GET_CURRENT_GAME_TIME();
				iParam0->f_8 = 0;
				iParam0->f_4 = 3;
			}
			break;
		
		case 0x00000003:
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_1064) < 3.0f)
			{
				iParam0->f_4 = 4;
				Function_16(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_100(3, iParam0->f_1056))
			{
				if (iParam0->f_1056 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_1056);
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

int Function_100(int iParam0, int iParam1) //Position: 0x277C / 10108
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_101(bool bParam0, bool bParam1) //Position: 0x278E / 10126
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

void Function_102(bool bParam0, bool bParam1) //Position: 0x27E2 / 10210
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

int Function_103(var uParam0, var uParam1, int iParam2) //Position: 0x2833 / 10291
{
	return Function_104(Global_29006, uParam0, uParam1, iParam2);
}

int Function_104(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x2845 / 10309
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

bool Function_105(int iParam0) //Position: 0x28E1 / 10465
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_106() //Position: 0x28F7 / 10487
{
	return !Function_107();
}

bool Function_107() //Position: 0x2901 / 10497
{
	if (Function_109())
	{
		return (Function_108() != 1 || Function_108() != 0);
	}
	return 0;
}

int Function_108() //Position: 0x291A / 10522
{
	return Global_79349.f_16;
}

bool Function_109() //Position: 0x2926 / 10534
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_110(int iParam0) //Position: 0x292F / 10543
{
	if (!Function_105(iParam0))
	{
		return 1;
	}
	return Function_111(&(Global_29008[iParam0]), 4);
}

int Function_111(var uParam0, bool bParam1) //Position: 0x294B / 10571
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_112(int iParam0, float fParam1, float fParam2, bool bParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x2967 / 10599
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

void Function_113(int iParam0, var uParam1, int iParam2) //Position: 0x2A0A / 10762
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

void Function_114(int iParam0) //Position: 0x2A2F / 10799
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_115(int iParam0) //Position: 0x2A44 / 10820
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_116(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2A59 / 10841
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

void Function_117(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2ACB / 10955
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

void Function_118() //Position: 0x2C44 / 11332
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_119(bool bParam0) //Position: 0x2C50 / 11344
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

void Function_120(int iParam0, int iParam1) //Position: 0x2C96 / 11414
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_121(iParam0);
	Function_119(iVar0);
	PRINTNL();
	Function_117(iParam0, iVar0, iParam1);
	return;
}

void Function_121(int iParam0) //Position: 0x2CBB / 11451
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

float Function_122(int iParam0) //Position: 0x2D01 / 11521
{
	return -Function_123(iParam0);
}

float Function_123(bool bParam0) //Position: 0x2D0D / 11533
{
	if (Function_126(bParam0))
	{
		if (Function_125(bParam0))
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

void Function_124() //Position: 0x2DDE / 11742
{
	if (!Function_127())
	{
	}
	return;
}

bool Function_125(int iParam0) //Position: 0x2DEB / 11755
{
	return Function_9(*iParam0, 2);
}

bool Function_126(bool bParam0) //Position: 0x2DF8 / 11768
{
	return Function_9(*bParam0, 1);
}

bool Function_127() //Position: 0x2E05 / 11781
{
	return NET_IS_IN_SESSION();
}

void Function_128() //Position: 0x2E0E / 11790
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_91());
	Function_129(bVar0, "bottle", Local_135.f_84);
	Function_129(bVar0, "mug0", Local_135.f_84);
	Function_129(bVar0, "glass", Local_135.f_84);
	Function_129(bVar0, "crate03", Local_135.f_84);
	Function_129(bVar0, "package", Local_135.f_84);
	Function_129(bVar0, "nlantern05", Local_135.f_84);
	Function_129(bVar0, "p_gen_bucket02x", Local_135.f_84);
	Function_129(bVar0, "p_gen_bucket03x", Local_135.f_84);
	Function_129(bVar0, "p_gen_basin01x", Local_135.f_84);
	Function_129(bVar0, "p_gen_can01x", Local_135.f_84);
	Function_129(bVar0, "p_gen_can02x", Local_135.f_84);
	Function_129(bVar0, "jar", Local_135.f_84);
	Function_129(bVar0, "book", Local_135.f_84);
	Function_129(bVar0, "nchalksign", Local_135.f_84);
	Function_129(bVar0, "spittoon", Local_135.f_84);
	Function_129(bVar0, "milkcan", Local_135.f_84);
	Function_129(bVar0, "jug0", Local_135.f_84);
	Function_129(bVar0, "broom", Local_135.f_84);
	Function_129(bVar0, "stool", Local_135.f_84);
	Function_129(bVar0, "boots", Local_135.f_84);
	Function_129(bVar0, "debrisboard", Local_135.f_84);
	Function_129(bVar0, "nwoodboard", Local_135.f_84);
	Function_129(bVar0, "lumber07", Local_135.f_84);
	Function_129(bVar0, "nwoodplane", Local_135.f_84);
	Function_129(bVar0, "pot0", Local_135.f_84);
	Function_129(bVar0, "plate", Local_135.f_84);
	Function_129(bVar0, "basket", Local_135.f_84);
	Function_129(bVar0, "nnewspaper", Local_135.f_84);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_129(bool bParam0, char* cParam1, bool bParam2) //Position: 0x304A / 12362
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_91(), bParam0, 4294967295, 1);
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

void Function_130(int iParam0, bool bParam1) //Position: 0x30A3 / 12451
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

bool Function_131(int iParam0) //Position: 0x30CB / 12491
{
	return Function_9(StackVal, iParam0);
}

void Function_132(bool bParam0) //Position: 0x30DE / 12510
{
	Function_130(16, bParam0);
	return;
}

void Function_133(var uParam0) //Position: 0x30EB / 12523
{
	Function_130(8, uParam0);
	return;
}

bool Function_134() //Position: 0x30F8 / 12536
{
	Function_181(&iLocal_642, 0, 9, 30, 0, 0, 1);
	Function_181(&iLocal_642, 1, 9, 30, 2, 2, 1);
	Function_181(&iLocal_642, 2, 11, 0, 1, 2, 2);
	Function_181(&iLocal_642, 3, 11, 0, 1, 1, 0);
	Function_181(&iLocal_642, 4, 23, 0, 1, 0, 1);
	Function_178(&iLocal_642);
	ENABLE_CHILD_SECTOR("mp_hen_ffa01x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_hen_ffa01x", 1);
	if (!Function_168())
	{
		return 0;
	}
	Function_166(512);
	Function_165(Global_83864.f_1284);
	Function_19(996);
	Function_17(Global_83864.f_1284, 0, 1);
	Function_158(&Global_83591 + 276, 0);
	Function_156(&Global_83591, 1, 22, 1, 1);
	Function_156(&Global_83591, 2, 0, 10, 1);
	Function_156(&Global_83591, 3, 9, 10, 1);
	Function_151(&Global_83591, 1, 19, 10, 1);
	Function_151(&Global_83591, 2, 2, 10, 1);
	Function_151(&Global_83591, 3, 11, 10, 1);
	Function_151(&Global_83591, 4, 23, 5, 1);
	Function_150(&Global_83591);
	Function_149(&Global_83591 + 276, 4);
	if (!Function_144(&uLocal_375))
	{
		return 0;
	}
	Function_143(0, 5);
	Function_143(1, 1);
	Function_137();
	Function_135(Local_135.f_956);
	return 1;
}

void Function_135(bool bParam0) //Position: 0x322A / 12842
{
	DECOR_SET_OBJECT(Function_136(), "LobbyGringoSet", bParam0);
	return;
}

var Function_136() //Position: 0x324A / 12874
{
	return Global_83591.f_140;
}

void Function_137() //Position: 0x3256 / 12886
{
	if (Function_72())
	{
		Function_142("FTR_SONG_06", "FTR_SONG_03", 0, 58, 58, 1);
	}
	else
	{
		Function_142("FTR_SONG_02", "FTR_SONG_08", 0, 58, 58, 1);
	}
	Function_138(Local_135);
	return;
}

void Function_138(var uParam0) //Position: 0x32B2 / 12978
{
	if (Function_141())
	{
		Function_149(&Global_83591 + 276, 2);
	}
	Function_140(uParam0);
	Global_83591.f_4 = 2;
	Function_139();
	vLocal_42 = { StackVal, StackVal, Function_139() };
	return;
}

vector3 Function_139() //Position: 0x32DC / 13020
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

void Function_140(var uParam0) //Position: 0x3324 / 13092
{
	Global_83591.f_140 = uParam0;
	return;
}

bool Function_141() //Position: 0x3332 / 13106
{
	return Function_9(Global_79962, 1024);
}

void Function_142(char* cParam0, char* cParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x3342 / 13122
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

void Function_143(int iParam0, int iParam1) //Position: 0x33D2 / 13266
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

bool Function_144(int iParam0) //Position: 0x33E0 / 13280
{
	if (!Function_148(iParam0, Global_30668[0]))
	{
		return 0;
	}
	Function_147(iParam0, "hennigansRanch", "trainStation01", 1, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "trainStation01", 2, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "trainStation01", 3, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "trainStation01", 4, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "trainStation01", 5, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "trainStation01", 6, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "trainStation01", 7, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "trainStation01", 8, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "trainStation01", 9, 1, 0, 1, 1);
	Function_145(iParam0, "hennigansRanch", "stable02", 1);
	Function_145(iParam0, "hennigansRanch", "stable02", 2);
	Function_145(iParam0, "hennigansRanch", "stable02", 3);
	Function_145(iParam0, "hennigansRanch", "stable02", 4);
	Function_145(iParam0, "hennigansRanch", "stable02", 5);
	Function_145(iParam0, "hennigansRanch", "stable02", 7);
	Function_145(iParam0, "hennigansRanch", "stable02", 8);
	Function_145(iParam0, "hennigansRanch", "stable02", 9);
	Function_145(iParam0, "hennigansRanch", "stable02", 10);
	Function_145(iParam0, "hennigansRanch", "stable02", 11);
	Function_147(iParam0, "hennigansRanch", "stable03", 1, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "stable03", 2, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "stable03", 3, 1, 0, 1, 1);
	Function_145(iParam0, "hennigansRanch", "barn01", 1);
	Function_145(iParam0, "hennigansRanch", "barn01", 2);
	Function_145(iParam0, "hennigansRanch", "barn01", 3);
	Function_145(iParam0, "hennigansRanch", "barn01", 4);
	Function_145(iParam0, "hennigansRanch", "barn01", 5);
	Function_145(iParam0, "hennigansRanch", "barn01", 6);
	Function_145(iParam0, "hennigansRanch", "barn02", 7);
	Function_145(iParam0, "hennigansRanch", "barn02", 8);
	Function_145(iParam0, "hennigansRanch", "barn02", 9);
	Function_145(iParam0, "hennigansRanch", "barn02", 10);
	Function_147(iParam0, "hennigansRanch", "stockade01", 1, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "stockade01", 2, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "stockade01", 3, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "store01", 1, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "store01", 2, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "ncottage03", 1, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "ncottage01", 1, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "ncottage01", 2, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "ncottage02", 1, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "ncottage02", 2, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "blacksmith01", 1, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "stable01", 1, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "stable01", 2, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "stable01", 3, 1, 0, 1, 1);
	Function_147(iParam0, "hennigansRanch", "stable01", 4, 1, 0, 1, 1);
	return 1;
}

int Function_145(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x3B09 / 15113
{
	int iVar0;
	
	iVar0 = iParam0->f_1056;
	if (!Function_146(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	Function_7(iParam0 + 12[iVar05] + 16, 32);
	return 1;
}

bool Function_146(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3B3B / 15163
{
	if (iParam0->f_1056 > 52)
	{
		return 0;
	}
	(*iParam0 + 12)[iParam0->f_10565] = uParam1;
	(iParam0 + 12[iParam0->f_10565])->f_4 = uParam2;
	(iParam0 + 12[iParam0->f_10565])->f_8 = uParam3;
	(iParam0 + 12[iParam0->f_10565])->f_16 = 0;
	iParam0->f_1056++;
	return 1;
}

int Function_147(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x3B97 / 15255
{
	int iVar0;
	
	iVar0 = iParam0->f_1056;
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

bool Function_148(int iParam0, int iParam1) //Position: 0x3C08 / 15368
{
	int iVar0;
	
	if (!Function_105(iParam1))
	{
		return 0;
	}
	*iParam0 = iParam1;
	iParam0->f_1056 = 0;
	iParam0->f_4 = 0;
	iParam0->f_1060 = "";
	iVar0 = 0;
	while (iVar0 <= 52)
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

void Function_149(int iParam0, int iParam1) //Position: 0x3C7E / 15486
{
	(iParam0 + 228)->f_220 = 0;
	Function_7(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_150(int iParam0) //Position: 0x3C96 / 15510
{
	iParam0->f_844 = 0;
	return;
}

void Function_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3CA2 / 15522
{
	Function_152(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_152(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3CBA / 15546
{
	Function_153(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_153(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3CD1 / 15569
{
	if (!Function_155(iParam1))
	{
		return;
	}
	Function_154(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_154(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3CF4 / 15604
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

bool Function_155(int iParam0) //Position: 0x3D1E / 15646
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_156(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3D2E / 15662
{
	Function_157(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_157(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3D46 / 15686
{
	Function_153(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_158(int iParam0, bool bParam1) //Position: 0x3D5B / 15707
{
	Function_162(iParam0);
	Function_162(iParam0 + 228);
	if (bParam1)
	{
		Function_159(iParam0);
	}
	return;
}

void Function_159(int iParam0) //Position: 0x3D77 / 15735
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

void Function_160(var uParam0, int iParam1) //Position: 0x3D97 / 15767
{
	Function_161(uParam0, iParam1, 0);
	return;
}

void Function_161(int iParam0, int iParam1, int iParam2) //Position: 0x3DA5 / 15781
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_162(int iParam0) //Position: 0x3DB6 / 15798
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

void Function_163(var uParam0, int iParam1) //Position: 0x3DE3 / 15843
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_164(int iParam0) //Position: 0x3DEF / 15855
{
	Function_154(iParam0, 4294967295, 0, 1);
	return;
}

void Function_165(bool bParam0) //Position: 0x3DFD / 15869
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

void Function_166(int iParam0) //Position: 0x3E2C / 15916
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

void Function_167(var uParam0, int iParam1) //Position: 0x3E85 / 16005
{
	Function_7(uParam0, iParam1);
	return;
}

bool Function_168() //Position: 0x3E92 / 16018
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
	
	Function_177(3, 3);
	uVar0 = uVar0;
	Function_175(&Local_135 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_175(&Local_135 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_175(&Local_135 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_175(&Local_135 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_175(&Local_135 + 4, "$/content/scripting/gringo/simplegringo/stand_fiddle_w_fiddle", 1, 0);
	Function_175(&Local_135 + 4, "$/content/scripting/gringo/simplegringo/stand_drunkdancing_e_any", 1, 0);
	if (!Function_169(&Local_135 + 4))
	{
		return 0;
	}
	Local_135 = FIND_NAMED_LAYOUT("Deathmatch_HEN_layout");
	if (!IS_LAYOUTREF_VALID(Local_135))
	{
		Local_135 = CREATE_LAYOUT("Deathmatch_HEN_layout");
	}
	Local_135.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_135, "playablespace", 3, -864,8856f, 91,35687f, 2410,064f, 0.0f, 20.0f, 0.0f, 159,1869f, 48,51114f, 150,5444f);
	Local_135.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_135, "v_clear_vol", 2, -873,228f, 90,5929f, 2412,176f, 0.0f, 14,93072f, 0.0f, 308,5795f, 35,10292f, 193,7263f);
	Local_135.f_112 = CREATE_VOLUME_SET_IN_LAYOUT(Local_135, "CapVols_set");
	(*&Local_135 + 88)[0] = CREATE_VOLUME_IN_LAYOUT(Local_135, "CapVol_1", 3, -889,3279f, 90,35291f, 2455,456f, 0.0f, -91,97933f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_135.f_112, (*&Local_135 + 88)[0]);
	(*&Local_135 + 88)[1] = CREATE_VOLUME_IN_LAYOUT(Local_135, "CapVol_2", 3, -893,8458f, 91,35687f, 2365,846f, 0.0f, 20.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_135.f_112, (*&Local_135 + 88)[1]);
	(*&Local_135 + 88)[2] = CREATE_VOLUME_IN_LAYOUT(Local_135, "CapVol_3", 3, -848,7548f, 91,4473f, 2406,545f, 0.0f, 20.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_135.f_112, (*&Local_135 + 88)[2]);
	(*&Local_135 + 88)[3] = CREATE_VOLUME_IN_LAYOUT(Local_135, "CapVol_4", 3, -827,981f, 92,39201f, 2372,403f, 0.0f, -0,4078791f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_135.f_112, (*&Local_135 + 88)[3]);
	(*&Local_135 + 88)[4] = CREATE_VOLUME_IN_LAYOUT(Local_135, "CapVol_0", 3, -777,5994f, 92,52191f, 2437,134f, 0.0f, -135,8822f, 0.0f, 3,626943f, 0,5421041f, 1,5f);
	ADD_TO_VOLUME_SET(Local_135.f_112, (*&Local_135 + 88)[4]);
	Local_135.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_0", 3, -964,7426f, 90,35291f, 2393,901f, 0.0f, 84,48253f, 0.0f, 0,6626928f, 0,7619622f, 0,6626928f);
	Local_135.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_1", 3, -825,9211f, 93,8091f, 2432,491f, 0.0f, 161,5993f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_2", 3, -878,4334f, 91,35687f, 2338,433f, 0.0f, -58,08426f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_3", 3, -878,7861f, 91,07147f, 2430,055f, 0.0f, -72,07296f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_4", 3, -875,3961f, 91,36105f, 2344,317f, 0.0f, -55,93968f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_5", 3, -772,0001f, 93,36469f, 2397,621f, 0.0f, -38,06047f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_6", 3, -838,7493f, 90,35291f, 2465,923f, 0.0f, -70,00797f, 0.0f, 0,6870878f, 0,7900114f, 0,6870878f);
	Local_135.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_7", 3, -889,8019f, 91,35687f, 2400,663f, 0.0f, -147,6535f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_8", 3, -817,9543f, 96,95911f, 2428,589f, 0.0f, -157,5632f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_9", 3, -913,8144f, 90,35291f, 2442,85f, 0.0f, 34,00362f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_10", 3, -865,2033f, 90,35291f, 2440,712f, 0.0f, -69,70387f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_11", 3, -823,1486f, 92,36078f, 2389,426f, 0.0f, -101,4652f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_12", 3, -844,4749f, 99,18674f, 2453,881f, 0.0f, -123,1007f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_13", 3, -864,6239f, 91,63651f, 2381,855f, 0.0f, 91,59521f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_14", 3, -830,5043f, 92,54638f, 2358,676f, 0.0f, 13,15314f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_15", 3, -854,1201f, 90,35291f, 2472f, 0.0f, -72,14406f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_16", 3, -852,1665f, 90,35294f, 2453,489f, 0.0f, 79,90385f, 0.0f, 0,7317246f, 0,8413346f, 0,7317246f);
	Local_135.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_17", 3, -843,2527f, 90,35291f, 2452,484f, 0.0f, -71,08318f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_18", 3, -903,887f, 90,35291f, 2440,319f, 0.0f, 14,41094f, 0.0f, 0,7432537f, 0,8545907f, 0,7432537f);
	Local_135.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_19", 3, -846,361f, 90,35291f, 2470,497f, 0.0f, 145,6762f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_20", 3, -852,2842f, 95,17377f, 2455,892f, 0.0f, 53,66232f, 0.0f, 0,7144589f, 0,8214825f, 0,7144589f);
	Local_135.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_21", 3, -841,3637f, 95,17377f, 2451,877f, 0,297094f, 14,50996f, -0,4451158f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_22", 3, -838,4079f, 95,15403f, 2465,877f, 0.0f, -106,3261f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_23", 3, -846,5422f, 95,15276f, 2468,438f, 0.0f, 183,6068f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_24", 3, -849,3255f, 99,17623f, 2457,486f, 0.0f, 133,7997f, 0.0f, 0,7125192f, 0,8192523f, 0,7125192f);
	Local_135.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_25", 3, -861,5184f, 90,35291f, 2453,076f, 0.0f, -71,3604f, 0.0f, 0,7483366f, 0,860435f, 0,7483366f);
	Local_135.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_26", 3, -839,1577f, 99,20443f, 2467,243f, 0.0f, 195,151f, 0.0f, 0,6761351f, 0,7774179f, 0,6761351f);
	Local_135.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_27", 3, -844,6024f, 99,21014f, 2470,356f, 0.0f, 198,7215f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_28", 3, -828,4791f, 96,95911f, 2434,33f, 0.0f, 206,9888f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_29", 3, -954,3661f, 90,35291f, 2420.0f, 0.0f, 129,1342f, 0.0f, 1,156655f, 1,329918f, 1,156655f);
	Local_135.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_30", 3, -888,0756f, 91,07147f, 2433,381f, 0.0f, 108,0659f, 0.0f, 0,5904461f, 0,678893f, 0,5904461f);
	Local_135.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_31", 3, -855,5285f, 90,35291f, 2467,185f, 0.0f, -71,55739f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_32", 3, -946,694f, 90,55293f, 2429,803f, 0.0f, 207,6127f, 0.0f, 1,000354f, 1,150204f, 1,000354f);
	Local_135.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_33", 3, -780,9899f, 93,36469f, 2387,387f, 0.0f, 164,1376f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_34", 3, -906,3019f, 90,35291f, 2440.0f, 0.0f, 21,22196f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_35", 3, -862,4901f, 90,35291f, 2448,333f, 0.0f, -69,54851f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_36", 3, -870,6909f, 91,35687f, 2352,293f, 0.0f, -59,58487f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_37", 3, -804,2514f, 92,56953f, 2377,448f, 0.0f, -121,9372f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_38", 3, -866,2332f, 91,35687f, 2360.0f, 0.0f, -62,59444f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_39", 3, -911,3191f, 90,35291f, 2442,739f, 0.0f, 15,93598f, 0.0f, 0,6577268f, 0,7562522f, 0,6577268f);
	Local_135.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_40", 3, -839,5899f, 92,54645f, 2370,257f, 0.0f, 3,767457f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_280 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_41", 3, -857,5792f, 90,35294f, 2462,06f, 0.0f, -69,67185f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_284 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_42", 3, -857,8043f, 91,63651f, 2379,264f, 0.0f, -52,59878f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_288 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_43", 3, -902,5246f, 91,35687f, 2408.0f, 0.0f, -148,5523f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_292 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_44", 3, -898,0054f, 91,35687f, 2405,104f, 0.0f, 210,8967f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_296 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_45", 3, -900,0001f, 90,35291f, 2437,428f, 0.0f, 17,82667f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_300 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_46", 3, -881,7861f, 91,35687f, 2396.0f, 0.0f, -143,6582f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_304 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_47", 3, -877,2281f, 91,35687f, 2393,228f, 0.0f, -144,8857f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_308 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_48", 3, -863,5199f, 91,35687f, 2364,794f, 0.0f, -58,96709f, 0.0f, 0,8132938f, 0,9351226f, 0,8132938f);
	Local_135.f_312 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_49", 3, -970,28f, 90,30647f, 2412,295f, 0.0f, 23,03271f, 0.0f, 0,6626928f, 0,7619622f, 0,6626928f);
	Local_135.f_316 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_50", 3, -965,4166f, 90,30117f, 2426,429f, 0.0f, 198,1365f, 0.0f, 0,6626928f, 0,7619622f, 0,6626928f);
	Local_135.f_320 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_51", 3, -956,8411f, 90,71284f, 2431,56f, 0.0f, 21,9239f, 0.0f, 0,6626928f, 0,7619622f, 0,6626928f);
	Local_135.f_324 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_52", 3, -942,0309f, 90,35291f, 2474,402f, 0.0f, 188,858f, 0.0f, 0,6626928f, 0,7619622f, 0,6626928f);
	Local_135.f_328 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_53", 3, -797,9971f, 92,60523f, 2370,066f, 0.0f, 237,5417f, 0.0f, 0,6626928f, 0,7619622f, 0,6626928f);
	Local_135.f_332 = CREATE_VOLUME_IN_LAYOUT(Local_135, "SpawnVol_54", 3, -817,7644f, 92,36078f, 2356,241f, 0.0f, 257,614f, 0.0f, 0,6626928f, 0,7619622f, 0,6626928f);
	CREATE_POINT_IN_LAYOUT(Local_135, "LobbyCenter", -819,9389f, 92,319f, 2377,454f, 0.0f, 0.0f, 0.0f);
	*(&Local_135 + 336) = { -863,2269f, 90,94756f, 2413,235f };
	*(&Local_135 + 336 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_135.f_360 = CREATE_POINT_IN_LAYOUT(Local_135, "Showdown_A", -863,2269f, 90,94756f, 2413,235f, 0.0f, 0.0f, 0.0f);
	*(&Local_135 + 364) = { -874,7907f, 90,3751f, 2416,777f };
	*(&Local_135 + 364 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_135.f_388 = CREATE_POINT_IN_LAYOUT(Local_135, "Showdown_B", -874,7907f, 90,3751f, 2416,777f, 0.0f, 0.0f, 0.0f);
	*(&Local_135 + 392) = { -867,1733f, 90,75781f, 2414,643f };
	*(&Local_135 + 392 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_135.f_416 = CREATE_POINT_IN_LAYOUT(Local_135, "StandoffCenter", -867,1733f, 90,75781f, 2414,643f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_0", -945,9877f, 90,19209f, 2441,771f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_1", -948,0001f, 91,35687f, 2392.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_2", -938,1747f, 91,35687f, 2374,175f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_3", -910,125f, 92,06492f, 2334,125f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_4", -854,9711f, 92,03284f, 2338,399f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_5", -825,6656f, 93,40354f, 2326,771f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_6", -798,2685f, 93,36469f, 2351,829f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_7", -762,0927f, 93,36469f, 2394,093f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_8", -753,4291f, 92,11534f, 2461,246f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_9", -821,9974f, 90,43844f, 2470,08f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_10", -865,5986f, 90,35291f, 2477,599f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_11", -889,9067f, 90,35291f, 2493,906f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_12", -921,9814f, 90,35291f, 2485,981f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_13", -885,2774f, 90,1218f, 2422,615f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_135, "FlagSpawn_14", -806,0948f, 92,11078f, 2412,858f, 0.0f, 0.0f, 0.0f);
	Local_135.f_420 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_135, 8, 0);
	*(&Local_135 + 424[06]) = { -866,1391f, 91,35687f, 2376,495f };
	*(&Local_135 + 424[06] + 12) = { 0.0f, -108,6781f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_D1", -866,1391f, 91,35687f, 2376,495f, 0.0f, -108,6781f, 0.0f);
	DECOR_SET_INT(bVar1, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_135.f_420);
	*(&Local_135 + 424[16]) = { -887,9681f, 90,35291f, 2442,711f };
	*(&Local_135 + 424[16] + 12) = { 0.0f, 112,4466f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_D2", -887,9681f, 90,35291f, 2442,711f, 0.0f, 112,4466f, 0.0f);
	DECOR_SET_INT(bVar2, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_135.f_420);
	*(&Local_135 + 424[26]) = { -820,6144f, 92,36078f, 2344,57f };
	*(&Local_135 + 424[26] + 12) = { 0.0f, -4,508652f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_D3", -820,6144f, 92,36078f, 2344,57f, 0.0f, -4,508652f, 0.0f);
	DECOR_SET_INT(bVar3, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_135.f_420);
	*(&Local_135 + 424[36]) = { -817,4687f, 93,36469f, 2437,383f };
	*(&Local_135 + 424[36] + 12) = { 0.0f, 76,64202f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_D4", -817,4687f, 93,36469f, 2437,383f, 0.0f, 76,64202f, 0.0f);
	DECOR_SET_INT(bVar4, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_135.f_420);
	*(&Local_135 + 424[46]) = { -953,5088f, 90,55421f, 2430,907f };
	*(&Local_135 + 424[46] + 12) = { 0.0f, -161,8697f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_B1", -953,5088f, 90,55421f, 2430,907f, 0.0f, -161,8697f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_135.f_420);
	*(&Local_135 + 424[56]) = { -850,6589f, 90,35296f, 2460,702f };
	*(&Local_135 + 424[56] + 12) = { 0.0f, -247,5792f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_B2", -850,6589f, 90,35296f, 2460,702f, 0.0f, -247,5792f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_135.f_420);
	*(&Local_135 + 424[66]) = { -826,4838f, 92,60349f, 2391,342f };
	*(&Local_135 + 424[66] + 12) = { 0.0f, -8,756636f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_B3", -826,4838f, 92,60349f, 2391,342f, 0.0f, -8,756636f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_135.f_420);
	*(&Local_135 + 424[76]) = { -892,0001f, 91,35687f, 2405,053f };
	*(&Local_135 + 424[76] + 12) = { 0.0f, 31,24724f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_S1", -892,0001f, 91,35687f, 2405,053f, 0.0f, 31,24724f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_135.f_420);
	*(&Local_135 + 424[86]) = { -893,0712f, 90,35291f, 2432,865f };
	*(&Local_135 + 424[86] + 12) = { 0.0f, -71,83684f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_S2", -893,0712f, 90,35291f, 2432,865f, 0.0f, -71,83684f, 0.0f);
	DECOR_SET_INT(bVar9, "type", true);
	DECOR_SET_INT(bVar9, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_135.f_420);
	*(&Local_135 + 424[96]) = { -944,0001f, 91,35687f, 2371,056f };
	*(&Local_135 + 424[96] + 12) = { 0.0f, 75,44411f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_R1", -944,0001f, 91,35687f, 2371,056f, 0.0f, 75,44411f, 0.0f);
	DECOR_SET_INT(bVar10, "type", true);
	DECOR_SET_INT(bVar10, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_135.f_420);
	*(&Local_135 + 424[106]) = { -925,2033f, 90,34173f, 2489,73f };
	*(&Local_135 + 424[106] + 12) = { 0.0f, 162,7675f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_R2", -925,2033f, 90,34173f, 2489,73f, 0.0f, 162,7675f, 0.0f);
	DECOR_SET_INT(bVar11, "type", true);
	DECOR_SET_INT(bVar11, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_135.f_420);
	*(&Local_135 + 424[116]) = { -774,4728f, 93,36469f, 2404,457f };
	*(&Local_135 + 424[116] + 12) = { 0.0f, 54,18897f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_R3", -774,4728f, 93,36469f, 2404,457f, 0.0f, 54,18897f, 0.0f);
	DECOR_SET_INT(bVar12, "type", true);
	DECOR_SET_INT(bVar12, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_135.f_420);
	*(&Local_135 + 424[126]) = { -835,6291f, 92,36078f, 2346,447f };
	*(&Local_135 + 424[126] + 12) = { 0.0f, 32,04984f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_R4", -835,6291f, 92,36078f, 2346,447f, 0.0f, 32,04984f, 0.0f);
	DECOR_SET_INT(bVar13, "type", true);
	DECOR_SET_INT(bVar13, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_135.f_420);
	*(&Local_135 + 424[136]) = { -962,6918f, 90,33936f, 2410,141f };
	*(&Local_135 + 424[136] + 12) = { 0.0f, -250,6569f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_P1", -962,6918f, 90,33936f, 2410,141f, 0.0f, -250,6569f, 0.0f);
	DECOR_SET_INT(bVar14, "type", true);
	DECOR_SET_INT(bVar14, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_135.f_420);
	*(&Local_135 + 424[146]) = { -861,4849f, 90,35291f, 2473,397f };
	*(&Local_135 + 424[146] + 12) = { 0.0f, -67,43402f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_P2", -861,4849f, 90,35291f, 2473,397f, 0.0f, -67,43402f, 0.0f);
	DECOR_SET_INT(bVar15, "type", true);
	DECOR_SET_INT(bVar15, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_135.f_420);
	*(&Local_135 + 424[156]) = { -861,7818f, 91,35687f, 2362,572f };
	*(&Local_135 + 424[156] + 12) = { 0.0f, 122,4349f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_P3", -861,7818f, 91,35687f, 2362,572f, 0.0f, 122,4349f, 0.0f);
	DECOR_SET_INT(bVar16, "type", true);
	DECOR_SET_INT(bVar16, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_135.f_420);
	*(&Local_135 + 424[166]) = { -797,0199f, 92,48051f, 2376,039f };
	*(&Local_135 + 424[166] + 12) = { 0.0f, 60,11293f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_P4", -797,0199f, 92,48051f, 2376,039f, 0.0f, 60,11293f, 0.0f);
	DECOR_SET_INT(bVar17, "type", true);
	DECOR_SET_INT(bVar17, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_135.f_420);
	*(&Local_135 + 424[176]) = { -830,3732f, 93,36469f, 2431,588f };
	*(&Local_135 + 424[176] + 12) = { 0.0f, -103,4116f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_P5", -830,3732f, 93,36469f, 2431,588f, 0.0f, -103,4116f, 0.0f);
	DECOR_SET_INT(bVar18, "type", true);
	DECOR_SET_INT(bVar18, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_135.f_420);
	*(&Local_135 + 424[186]) = { -775,4745f, 92,2878f, 2447,666f };
	*(&Local_135 + 424[186] + 12) = { 0.0f, -45,72199f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_P6", -775,4745f, 92,2878f, 2447,666f, 0.0f, -45,72199f, 0.0f);
	DECOR_SET_INT(bVar19, "type", true);
	DECOR_SET_INT(bVar19, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_135.f_420);
	*(&Local_135 + 424[196]) = { -928,8751f, 90,35291f, 2452,671f };
	*(&Local_135 + 424[196] + 12) = { 0.0f, 51,36609f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_A1", -928,8751f, 90,35291f, 2452,671f, 0.0f, 51,36609f, 0.0f);
	DECOR_SET_INT(bVar20, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_135.f_420);
	*(&Local_135 + 424[206]) = { -857,171f, 91,35687f, 2386,142f };
	*(&Local_135 + 424[206] + 12) = { 0.0f, -27,29489f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_A2", -857,171f, 91,35687f, 2386,142f, 0.0f, -27,29489f, 0.0f);
	DECOR_SET_INT(bVar21, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_135.f_420);
	*(&Local_135 + 424[216]) = { -776,2682f, 93,36469f, 2371,365f };
	*(&Local_135 + 424[216] + 12) = { 0.0f, 113,6733f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_135, "npickup_A3", -776,2682f, 93,36469f, 2371,365f, 0.0f, 113,6733f, 0.0f);
	DECOR_SET_INT(bVar22, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_135.f_420);
	Local_135.f_956 = CREATE_OBJECTSET_IN_LAYOUT(Function_91(), Local_135, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "smoking_stand", "smoking_stand", -831,2397f, 92,35858f, 2370,106f, 0.0f, -128,6384f, 0.0f), Local_135.f_956);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -821,3875f, 92,3f, 2372,911f, 0.0f, 106,4904f, 0.0f), Local_135.f_956);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "rand_idle_stand", "rand_idle_stand", -830,1233f, 92,36078f, 2373,791f, 0.0f, -18,37804f, 0.0f), Local_135.f_956);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -824,1663f, 92,42587f, 2375,948f, 0.0f, -204,507f, 0.0f), Local_135.f_956);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -826,3002f, 92,3095f, 2378,831f, 0.0f, 5,629495f, 0.0f), Local_135.f_956);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_drunkdancing_e_any", "stand_drunkdancing_e_any", -827,3755f, 92,41361f, 2376,586f, 0.0f, -135,6304f, 0.0f), Local_135.f_956);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_drunkdancing_e_any1", "stand_drunkdancing_e_any", -826,2829f, 92,41254f, 2376,17f, 0.0f, 189,6712f, 0.0f), Local_135.f_956);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -828,0958f, 92,39346f, 2377,738f, 0.0f, -122,2383f, 0.0f), Local_135.f_956);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_drunkdancing_e_any2", "stand_drunkdancing_e_any", -825,2252f, 92,41151f, 2375,931f, 0.0f, 167,9487f, 0.0f), Local_135.f_956);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_fiddle_w_fiddle1", "stand_fiddle_w_fiddle", -825,3251f, 92,3095f, 2378,432f, 0.0f, 46,4486f, 0.0f), Local_135.f_956);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_drunkdancing_e_any3", "stand_drunkdancing_e_any", -823,9977f, 92,36305f, 2377,208f, 0.0f, 87,15639f, 0.0f), Local_135.f_956);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -828,9883f, 92,35931f, 2368,409f, 0.0f, -153,9097f, 0.0f), Local_135.f_956);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", -831,1637f, 92,35933f, 2371,819f, 0.0f, -103,1579f, 0.0f), Local_135.f_956);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_fiddle_w_fiddle2", "stand_fiddle_w_fiddle", -823,1794f, 92,45511f, 2372,911f, 0.0f, 189,5432f, 0.0f), Local_135.f_956);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -825,1692f, 92,35933f, 2369,776f, 0.0f, 121,1944f, 0.0f), Local_135.f_956);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_135, "stand_drunkdancing_e_any4", "stand_drunkdancing_e_any", -827,4116f, 92,3095f, 2379,327f, 0.0f, 300,9716f, 0.0f), Local_135.f_956);
	return 1;
}

bool Function_169(int iParam0) //Position: 0x62B7 / 25271
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_13(iParam0[03], 8) || iVar1));
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

void Function_170() //Position: 0x6632 / 26162
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

bool Function_171(int iParam0) //Position: 0x6672 / 26226
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_172() //Position: 0x668E / 26254
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

void Function_173(var uParam0, int iParam1) //Position: 0x66B9 / 26297
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_174() //Position: 0x66CA / 26314
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

var Function_175(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x670C / 26380
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_176(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_173(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_176(var uParam0, int iParam1, int iParam2) //Position: 0x6744 / 26436
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

void Function_177(int iParam0, int iParam1) //Position: 0x6808 / 26632
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

void Function_178(int iParam0) //Position: 0x6851 / 26705
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
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], false));
	Function_179(StackVal, 0);
	return;
}

void Function_179(var uParam0, int iParam1) //Position: 0x68C3 / 26819
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

bool Function_180(char* cParam0) //Position: 0x68F4 / 26868
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6913 / 26899
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_182() //Position: 0x6955 / 26965
{
	while (!IS_EXITFLAG_SET())
	{
		Function_97();
		if (Function_72())
		{
			Function_51(5141, 4765);
		}
		else
		{
			Function_51(3299, 1603);
		}
		WAIT(false);
	}
	return;
}

bool Function_183() //Position: 0x6987 / 27015
{
	return Function_131(2);
}

void Function_184() //Position: 0x6991 / 27025
{
	if (Function_183())
	{
		return;
	}
	Function_186();
	Function_175(&iLocal_38, Function_95(), 0, 0);
	while (!Function_169(&iLocal_38))
	{
		WAIT(false);
	}
	fLocal_10 = 5.0f;
	Function_97();
	Function_185();
	return;
}

void Function_185() //Position: 0x69C5 / 27077
{
	while (!Function_131(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

void Function_186() //Position: 0x69E0 / 27104
{
	Local_11.f_96 = 4294967295;
	Local_11.f_100 = 4294967295;
	return;
}

