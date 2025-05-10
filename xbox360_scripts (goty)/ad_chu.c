//Decompiled with MagicRDR v1.0
//Function Count : 194
//Statics Count : 195
//Natives Count : 211
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
	var uLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 11;
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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 11;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	float fLocal_68 = 0.0f;
	struct<105> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9 } ;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 9;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	
	iLocal_10 = 0;
	iLocal_12 = 0;
	fLocal_68 = 1.0f;
	iLocal_146 = 4294967295;
	iLocal_147 = 4294967295;
	iLocal_148 = 0;
	iLocal_149 = 0;
	Function_182();
	if (Function_181())
	{
		Function_180();
	}
	else
	{
		if (Function_132())
		{
			Function_131(1);
		}
		else
		{
			Function_130(1);
		}
		STREAMING_ENABLE_FORCE_CHILD_SECTOR_HIGH_LOD("mp_chu_base01x");
		iVar0 = 30;
		iVar1 = 0;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_129(64))
			{
				iVar0 = (iVar0 - 1);
				if (iVar0 <= 0)
				{
					iVar1++;
					if (iVar1 >= 10)
					{
						Function_128(64, 0);
					}
					Function_125();
					iVar0 = 30;
				}
			}
			Function_24();
			Function_22();
			WAIT(0);
		}
	}
	STREAMING_DISABLE_FORCE_CHILD_SECTOR_HIGH_LOD("mp_chu_base01x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_chu_base01x", 0);
	DISABLE_CHILD_SECTOR("mp_chu_base01x");
	Function_20(512);
	Function_16();
	Function_15(Global_83864.f_1284, 0, 1);
	Function_14();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xF3 / 243
{
	Function_10(&uLocal_127);
	Function_3();
	Function_2();
	return;
}

void Function_2() //Position: 0x104 / 260
{
	if (iLocal_148)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_148 = 0;
	}
	return;
}

void Function_3() //Position: 0x143 / 323
{
	Function_4();
	return;
}

void Function_4() //Position: 0x14C / 332
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

void Function_5(int iParam0, bool bParam1, int iParam2) //Position: 0x255 / 597
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

void Function_6(var uParam0, int iParam1) //Position: 0x27D / 637
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x290 / 656
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_8(int iParam0) //Position: 0x29F / 671
{
	return Function_9(Global_76905.f_132, iParam0);
}

bool Function_9(var uParam0, int iParam1) //Position: 0x2B0 / 688
{
	return (uParam0 && iParam1) == 0;
}

void Function_10(int iParam0) //Position: 0x2BD / 701
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

void Function_11(var uParam0, int iParam1) //Position: 0x2E3 / 739
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

void Function_12(var uParam0, int iParam1) //Position: 0x411 / 1041
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_13(int iParam0, int iParam1) //Position: 0x42B / 1067
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_14() //Position: 0x448 / 1096
{
	RELEASE_LAYOUT_REF(Local_150);
	return;
}

void Function_15(var uParam0, bool bParam1, bool bParam2) //Position: 0x453 / 1107
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

void Function_16() //Position: 0x480 / 1152
{
	Function_17(Function_19());
	return;
}

void Function_17(int iParam0) //Position: 0x48C / 1164
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

bool Function_18(int iParam0) //Position: 0x4B9 / 1209
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_19() //Position: 0x4D0 / 1232
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_20(int iParam0) //Position: 0x4EA / 1258
{
	Function_21(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x523 / 1315
{
	Function_6(uParam0, iParam1);
	return;
}

void Function_22() //Position: 0x530 / 1328
{
	switch (Function_23(3))
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
		
		default:
			break;
	}
	return;
}

int Function_23(int iParam0) //Position: 0x55D / 1373
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

void Function_24() //Position: 0x57D / 1405
{
	Function_123();
	if (Function_122(1, 1))
	{
		Function_91();
	}
	else
	{
		if (!iLocal_149)
		{
			iLocal_149 = 1;
			Function_86(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_83();
		if (Local_123)
		{
			Function_66(7074, 7049, 5389);
		}
		else
		{
			Function_33(3775, 1785);
		}
		if (!Function_31())
		{
			if (Function_30(1))
			{
				Stack.Push(0);
				Stack.Push(Function_29());
				Stack.Push(0);
				Stack.Push(Function_29());
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uLocal_143);
				Function_28(StackVal, StackVal);
			}
			else if (Function_30(2))
			{
				Stack.Push(0);
				Stack.Push(Function_29());
				Stack.Push(0);
				Stack.Push(Function_29());
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uLocal_144);
				Function_28(StackVal, StackVal);
			}
			else if (Function_30(4))
			{
				Stack.Push(0);
				Stack.Push(Function_29());
				Stack.Push(0);
				Stack.Push(Function_29());
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uLocal_145);
				Function_28(StackVal, StackVal);
			}
		}
		Function_27();
		Function_25();
	}
	return;
}

void Function_25() //Position: 0x62D / 1581
{
	if (IS_OBJECT_VALID(Local_96.f_104))
	{
		DESTROY_OBJECT(Local_96.f_104);
		Function_26(&Local_96);
	}
	return;
}

void Function_26(int iParam0) //Position: 0x649 / 1609
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

void Function_27() //Position: 0x66F / 1647
{
	if (IS_OBJECT_VALID(Local_69.f_104))
	{
		DESTROY_OBJECT(Local_69.f_104);
		Function_26(&Local_69);
	}
	return;
}

void Function_28(int iParam0, var uParam1) //Position: 0x68B / 1675
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = uParam1;
	return;
}

var Function_29() //Position: 0x6AC / 1708
{
	return Global_83591.f_140;
}

bool Function_30(bool bParam0) //Position: 0x6B8 / 1720
{
	return Function_9((&Global_83591 + 140)->f_56, bParam0);
}

bool Function_31() //Position: 0x6CB / 1739
{
	return IS_OBJECT_VALID(Function_32());
}

int Function_32() //Position: 0x6D7 / 1751
{
	return Function_23(0);
}

void Function_33(int iParam0, int iParam1) //Position: 0x6E1 / 1761
{
	Function_66(iParam0, iParam1, 1778);
	return;
}

int Function_34() //Position: 0x6F2 / 1778
{
	return 1;
}

int Function_35(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x6F9 / 1785
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_53(bParam1, uParam2, uParam3);
	bVar0 = false;
	iVar1 = Function_52(iParam0);
	iVar2 = Function_49(iParam0);
	iVar3 = Function_48(iParam0);
	iVar4 = Function_47((iVar3 / CEIL(25.0f)), iVar1, iVar2);
	iVar5 = Function_45(4, iParam0);
	if (!bParam1)
	{
		Function_43(iParam0, iVar4, 0);
	}
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("TDM_team_FMT"), I2STR(iVar3), 0, 0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	bVar0++;
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, iVar5);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, iVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, iVar2);
		bVar0++;
		Function_42(bVar0, iParam0);
	}
	if (Function_36(iParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	return 0;
}

bool Function_36(bool bParam0) //Position: 0x7F1 / 2033
{
	if (Function_38(bParam0, 1, 0) != 4294967295 && Function_37() != 4294967295)
	{
		return 0;
	}
	return Function_38(bParam0, 1, 0) != Function_37();
}

int Function_37() //Position: 0x819 / 2073
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_38(GET_LOCAL_SLOT(), 1, 0);
}

int Function_38(int iParam0, bool bParam1, bool bParam2) //Position: 0x830 / 2096
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(iParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_41(iParam0))
			{
				if (!Function_39(iParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[iParam0];
}

bool Function_39(bool bParam0, int iParam1, bool bParam2) //Position: 0x874 / 2164
{
	char* cVar0[64];
	int iVar16;
	
	if (iParam0 == GET_LOCAL_SLOT())
	{
		return Function_122(iParam1, bParam2);
	}
	if (!Function_41(iParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_40(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(iParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_40(int iParam0) //Position: 0x8F5 / 2293
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

bool Function_41(bool bParam0) //Position: 0xC0E / 3086
{
	char* cVar0[64];
	
	if (iParam0 > 0 || iParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(iParam0), 64);
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

void Function_42(bool bParam0, int iParam1) //Position: 0xCAF / 3247
{
	if (Function_8(4))
	{
		if (Function_39(iParam1, 1024, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(iParam0, "<VRE>");
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, "");
		}
	}
	return;
}

bool Function_43(int iParam0, int iParam1, int iParam2) //Position: 0xCE2 / 3298
{
	var uVar0;
	
	return Function_44(iParam0, iParam1, &uVar0, iParam2);
}

int Function_44(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xCF3 / 3315
{
	char* cVar0[32];
	
	if (NET_PLAYER_LIST_SET_CURRENT_ITEM_BY_SLOT(iParam0) != 4294967295)
	{
		*uParam2 = 0;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_PRIORITY(iParam1);
		return 1;
	}
	*uParam2 = 1;
	if (bParam3)
	{
		strcpy(&cVar0, "WWWWWWWWWWWWWW", 32);
		if (iParam0 <= 10)
		{
			stradd(&cVar0, "0", 32);
		}
		stradd(&cVar0, I2STR(iParam0), 32);
		return NET_PLAYER_LIST_ADD_ITEM(&cVar0, iParam1);
	}
	return NET_PLAYER_LIST_ADD_GAMER_SLOT(bParam0, iParam1);
}

int Function_45(int iParam0, bool bParam1) //Position: 0xD58 / 3416
{
	char* cVar0[64];
	
	if (iParam1 == GET_LOCAL_SLOT())
	{
		return Function_46(iParam0);
	}
	if (!Function_41(iParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(iParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_46(int iParam0) //Position: 0xDBF / 3519
{
	return (*&Global_78480 + 132)[iParam0];
}

var Function_47(int iParam0, int iParam1, int iParam2) //Position: 0xDCF / 3535
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_48(int iParam0) //Position: 0xDE4 / 3556
{
	return Function_45(0, iParam0);
}

int Function_49(int iParam0) //Position: 0xDF0 / 3568
{
	return Function_50(12, iParam0);
}

int Function_50(int iParam0, bool bParam1) //Position: 0xDFD / 3581
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (iParam1 == GET_LOCAL_SLOT())
	{
		return Function_51(iParam0);
	}
	if (!Function_41(iParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(iParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_51(int iParam0) //Position: 0xE6B / 3691
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_52(int iParam0) //Position: 0xE84 / 3716
{
	return Function_50(11, iParam0);
}

void Function_53(bool bParam0, int iParam1, char* cParam2) //Position: 0xE91 / 3729
{
	if (bParam0)
	{
		if (Function_54())
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

bool Function_54() //Position: 0xEB2 / 3762
{
	return Function_8(32768);
}

int Function_55() //Position: 0xEBF / 3775
{
	if (!Function_61(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "AD_LB_PtsCapped");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	NET_PLAYER_LIST_SET_TEAM_SORT(1);
	if (Function_60())
	{
		NET_PLAYER_LIST_SET_TOP_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_TOP_TEAM(4);
	}
	Function_57(0);
	Function_57(1);
	Function_56();
	return 1;
}

void Function_56() //Position: 0xF6C / 3948
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

void Function_57(int iParam0) //Position: 0xFA9 / 4009
{
	int iVar0;
	
	if (iParam0 == Function_37())
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	if (Function_58() > 0)
	{
		if (Function_58() == iParam0)
		{
			NET_PLAYER_LIST_SET_TEAM_SCORE(iVar0, 1, UI_GET_STRING("AD_Team_Won"));
		}
		else
		{
			NET_PLAYER_LIST_SET_TEAM_SCORE(iVar0, 0, UI_GET_STRING("AD_Team_lost"));
		}
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(iVar0, 0, "--");
	}
	return;
}

int Function_58() //Position: 0x100F / 4111
{
	if (!Function_59())
	{
		return 4294967295;
	}
	return Global_78578.f_108;
}

bool Function_59() //Position: 0x1024 / 4132
{
	return UNK_0xA80C6DE6(&Global_78578);
}

bool Function_60() //Position: 0x1031 / 4145
{
	return Function_37() == 4294967295;
}

bool Function_61(bool bParam0) //Position: 0x103C / 4156
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_54() || Function_65(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_54())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_62(Function_54());
	return 1;
}

void Function_62(bool bParam0) //Position: 0x10BD / 4285
{
	if (bParam0 || Function_8(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_8(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_8(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_8(1048576) || Function_8(4)) || Function_122(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_5(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_63(var uParam0) //Position: 0x1146 / 4422
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_64(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x115A / 4442
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

int Function_65(int iParam0, int iParam1) //Position: 0x119F / 4511
{
	if (IS_STRING_VALID(iParam0) != IS_STRING_VALID(iParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(iParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

void Function_66(int iParam0, int iParam1, int iParam2) //Position: 0x11D3 / 4563
{
	if (Function_8(0x4000000))
	{
		Function_69();
		Function_5(0x4000000, 0, 1);
	}
	if (Function_8(0x10000000))
	{
		Function_69();
		Function_5(0x10000000, 0, 1);
	}
	if (Function_8(2) != Function_8(0x2000000))
	{
		Function_69();
		Function_5(0x2000000, Function_8(2), 1);
	}
	if (Function_54())
	{
		Function_68(!Function_8(16));
	}
	if (Function_8(16))
	{
		Function_67(&iParam0, &iParam1, &iParam2);
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

void Function_67(var uParam0, var uParam1, int iParam2) //Position: 0x136C / 4972
{
	int iVar0;
	int iVar1;
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
	iVar1 = 0;
	while (iVar1 <= 16)
	{
		if (IS_SLOT_VALID(iVar1))
		{
			iVar0 = 0;
			if (!Function_41(iVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_39(iVar1, 2048, 1))
			{
				iVar0 = 4294967294;
			}
			else
			{
				Stack.Push(iVar1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push("");
				Call_Loc(*uParam1);
				iVar0 = StackVal;
			}
			if (iVar0 == 0 && bVar3)
			{
				if (Function_43(iVar1, (4294966296 - iVar1), 0))
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
			if (Function_43(iVar1, (4294966296 - iVar1), 1))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		iVar1++;
	}
	Call_Loc(*iParam2);
	if (!StackVal)
	{
		return;
	}
	return;
}

void Function_68(bool bParam0) //Position: 0x14E4 / 5348
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_5(16384, 0, 1);
	return;
}

void Function_69() //Position: 0x14FE / 5374
{
	Function_5(32768, 1, 0);
	return;
}

int Function_70() //Position: 0x150D / 5389
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<8> Var3;
	char* cVar11[64];
	int iVar27;
	float fVar28[2];
	var uVar31[2];
	float fVar34;
	float fVar35;
	bool bVar36;
	bool bVar37;
	char* cVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	
	if (Function_54())
	{
		bVar1 = Function_23(3) != 7;
		iVar2 = 0;
		iVar27 = Function_37();
		if (StackVal == 1)
		{
			NET_PLAYER_LIST_ADD_ITEM("", Function_77(&iVar2));
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(4, "");
			return 1;
		}
		cVar38 = Function_29();
		if (!IS_LAYOUTREF_VALID(cVar38))
		{
			return 1;
		}
		iVar0 = 1;
		while (iVar0 < Local_123.f_12)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76("AD_T0", I2STR(iVar0)) };
			bVar36 = DECOR_GET_FLOAT_VERBOSE(cVar38, &Var3, &fVar34);
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76("AD_T1", I2STR(bVar0)) };
			bVar37 = DECOR_GET_FLOAT_VERBOSE(cVar38, &Var3, &fVar35);
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75(&Global_79349, "_Goal_", I2STR(bVar0)) };
			if (bVar36 || bVar37)
			{
				cVar11 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("<0xFFFFFF>", UI_GET_STRING(&Var3), "</0x>") };
			}
			else
			{
				strcpy(&cVar11, UI_GET_STRING(&Var3), 64);
			}
			NET_PLAYER_LIST_ADD_ITEM(&cVar11, Function_77(&iVar2));
			if (StackVal || bVar0 > Local_123.f_12 <= 2)
			{
				if (bVar36)
				{
					fVar28[0] = (fVar28[0] + fVar34);
					uVar31[0]++;
					Function_72(0, fVar34, iVar27 != 0);
				}
				else
				{
					Function_71(0, iVar27 != 0, "<SKULL>", 0);
				}
			}
			if (StackVal || bVar0 > Local_123.f_12 <= 2)
			{
				if (bVar1)
				{
					if (bVar37)
					{
						fVar28[1] = (fVar28[1] + fVar35);
						uVar31[1]++;
						Function_72(1, fVar35, iVar27 != 1);
					}
					else
					{
						Function_71(1, iVar27 != 1, "<SKULL>", 0);
					}
				}
				else
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "<QUESTION_MARK>");
				}
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "");
			}
			bVar0++;
		}
		if (StackVal <= 3)
		{
			return 1;
		}
		NET_PLAYER_LIST_ADD_ITEM("", Function_77(&iVar2));
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("AD_PointsCaptured"), Function_77(&iVar2));
		if (StackVal <= 4)
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "");
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "");
			return 1;
		}
		if (iVar27 == 0)
		{
			iVar39 = "AD_PointsCapBlue";
			bVar41 = "AD_PointsBlue";
			iVar40 = "AD_PointsCapRed";
			bVar42 = "AD_PointsRed";
		}
		else
		{
			iVar39 = "AD_PointsCapRed";
			bVar41 = "AD_PointsRed";
			iVar40 = "AD_PointsCapBlue";
			bVar42 = "AD_PointsBlue";
		}
		UI_SET_STRING(iVar39, I2STR(uVar31[0]));
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING(bVar41));
		if (bVar1)
		{
			if (StackVal <= 5)
			{
				return 1;
			}
			UI_SET_STRING(iVar40, I2STR(uVar31[1]));
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING(bVar42));
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "--");
		}
		if (StackVal <= 6)
		{
			return 1;
		}
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("AD_TimeElapsed"), Function_77(&iVar2));
		if (StackVal <= 7)
		{
			return 1;
		}
		Function_72(0, fVar28[0], iVar27 != 0);
		if (bVar1)
		{
			if (StackVal <= 8)
			{
				return 1;
			}
			Function_72(1, fVar28[1], iVar27 != 1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "--:--");
		}
		if (StackVal <= 9)
		{
			return 1;
		}
		NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("AD_LivesLost"), Function_77(&iVar2));
		if (StackVal <= 10)
		{
			return 1;
		}
		Function_71(0, iVar27 != 0, I2STR(DECOR_GET_INT(cVar38, "AD_L0")), 0);
		if (bVar1)
		{
			if (StackVal <= 11)
			{
				return 1;
			}
			Function_71(1, iVar27 != 1, I2STR(DECOR_GET_INT(bVar38, "AD_L1")), 0);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "--");
		}
		if (bVar1)
		{
			if (StackVal <= 12)
			{
				return 1;
			}
			NET_PLAYER_LIST_ADD_ITEM("", Function_77(&iVar2));
			bVar43 = Function_58();
			if (bVar43 > 0)
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar43, UI_GET_STRING("nAD_Winner"));
			}
			else if (bVar43 == 4294967291)
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING("AD_Tie"));
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING("AD_Tie"));
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "");
			}
		}
	}
	return 1;
}

void Function_71(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x199C / 6556
{
	struct<16> Var0;
	
	if (bParam3)
	{
		if (bParam1)
		{
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("<blue>", UI_GET_STRING(bParam2), "</blue>") };
		}
		else
		{
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("<red>", UI_GET_STRING(bParam2), "</red>") };
		}
	}
	else if (bParam1)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("<blue>", bParam2, "</blue>") };
	}
	else
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_74("<red>", bParam2, "</red>") };
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(iParam0, &Var0);
}

void Function_72(bool bParam0, float fParam1, bool bParam2) //Position: 0x1A3A / 6714
{
	struct<9> Var0;
	
	vVar0 = { StackVal, StackVal, StackVal, Function_73(fParam1) };
	if (fParam1 < 0.0f)
	{
		if (vVar0.z <= 10)
		{
			memcpy(&uVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75(I2STR(vVar0.y), ":0", I2STR(vVar0.z)), 4);
		}
		else
		{
			memcpy(&uVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75(I2STR(vVar0.y), ":", I2STR(vVar0.z)), 4);
		}
		Function_71(bParam0, bParam2, &uVar4, 0);
	}
	else
	{
		Function_71(bParam0, bParam2, "--:--", 0);
	}
	return;
}

struct<16> Function_73(var uParam0) //Position: 0x1AB0 / 6832
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = uParam0;
	Var0 = FLOOR((iVar4 / 3600.0f));
	while (iVar4 <= 3600.0f)
	{
		iVar4 = (iVar4 - 3600.0f);
	}
	Var0.f_4 = FLOOR((iVar4 / 60.0f));
	while (iVar4 <= 60.0f)
	{
		iVar4 = (iVar4 - 60.0f);
	}
	Var0.f_8 = FLOOR(iVar4);
	Var0.f_12 = (StackVal - IntToFloat(iVar4));
	return StackVal, StackVal, StackVal, Var0;
}

struct<64> Function_74(char* cParam0, char* cParam1, bool bParam2) //Position: 0x1B21 / 6945
{
	char* cVar0[64];
	
	strcpy(&cVar0, cParam0, 64);
	stradd(&cVar0, cParam1, 64);
	stradd(&cVar0, bParam2, 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_75(char* cParam0, char* cParam1, bool bParam2) //Position: 0x1B40 / 6976
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, bParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_76(char* cParam0, bool bParam1) //Position: 0x1B5F / 7007
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_77(int iParam0) //Position: 0x1B78 / 7032
{
	*iParam0 = (*iParam0 - 1);
	return *iParam0;
}

int Function_78(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1B89 / 7049
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	uParam2 = uParam2;
	uParam3 = uParam3;
	return 0;
}

int Function_79() //Position: 0x1BA2 / 7074
{
	struct<4> Var0;
	
	Function_5(131072, 1, 0);
	if (Function_23(3) == 6)
	{
		if (Function_54())
		{
			NET_PLAYER_LIST_SET_TITLE("AD_SwitchingSides");
		}
	}
	else if (!Function_61(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "Common_Null");
	Var0 = { StackVal, StackVal, StackVal, Function_80(0, 0) };
	if (Function_37() == 0)
	{
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_0", UI_GET_STRING("showdown_your_team"), UI_GET_STRING(&Var0), 0, 0);
		Var0 = { StackVal, StackVal, StackVal, Function_80(1, 0) };
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_1", UI_GET_STRING("showdown_their_team"), UI_GET_STRING(&Var0), 0, 0);
	}
	else
	{
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_0", UI_GET_STRING("showdown_their_team"), UI_GET_STRING(&Var0), 0, 0);
		Var0 = { StackVal, StackVal, StackVal, Function_80(1, 0) };
		UI_SET_STRING_FORMAT("GENERIC_DBUFFER64_1", UI_GET_STRING("showdown_your_team"), UI_GET_STRING(&Var0), 0, 0);
	}
	NET_PLAYER_LIST_SET_HEADER(2, "GENERIC_DBUFFER64_0");
	NET_PLAYER_LIST_SET_HEADER(3, "GENERIC_DBUFFER64_1");
	NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	NET_PLAYER_LIST_SET_TEMPLATE(7);
	Function_5(8192, 1, 1);
	return 1;
}

struct<16> Function_80(int iParam0, int iParam1) //Position: 0x1D73 / 7539
{
	return StackVal, StackVal, StackVal, Function_81(Function_82(iParam0), iParam1);
}

struct<16> Function_81(bool bParam0, bool bParam1) //Position: 0x1D85 / 7557
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

int Function_82(int iParam0) //Position: 0x1DBA / 7610
{
	if (!Function_59())
	{
		return 0;
	}
	return StackVal;
}

void Function_83() //Position: 0x1DD3 / 7635
{
	if (UI_ISACTIVE("LobbyNew_Toggle"))
	{
		if (Function_85(4, 1, 1))
		{
			PLAY_SOUND_FRONTEND("HUD_MENU_MAP_ACTIVATE_MASTER");
			Local_123 = !Local_123;
			if (Local_123)
			{
				UI_UNFOCUS("HudGamerList");
				UI_SET_TEXT("LobbyNew_Toggle", "mp_aa_stats_toggle_scoreboard");
			}
			else
			{
				UI_SET_TEXT("LobbyNew_Toggle", "Lobby_toggle");
				if (!IS_PS3())
				{
					UI_FOCUS("HudGamerList");
				}
			}
			Function_69();
		}
	}
	if (Function_129(512) && !Local_123)
	{
		return;
	}
	if (Function_129(32) && Function_8(16))
	{
		Local_123 = 1;
		if (StackVal && StackVal >= 0.0f > 13)
		{
			Function_69();
			if (StackVal == 0)
			{
				Local_123.f_12 = 1;
				Function_128(512, 0);
			}
			UI_UNFOCUS("HudGamerList");
			Local_123.f_4 = StackVal + 1;
			if (Function_23(3) == 6)
			{
				switch (StackVal)
				{
					case 0x00000004:
					case 0x00000007:
					case 0x0000000A:
						Local_123.f_4 = StackVal + 1;
						break;
					}
			}
			if (StackVal == 13)
			{
				Function_128(512, 1);
			}
			else if (StackVal == 3)
			{
				if (Local_123.f_12 <= Function_23(4))
				{
					Local_123.f_12++;
					Local_123.f_4 = 2;
				}
			}
			PLAY_SOUND_FRONTEND(Function_84(StackVal, &Local_123 + 8));
		}
		else
		{
			Local_123.f_8 = (StackVal - GET_UNWARPED_REALTIME_SECONDS());
		}
	}
	else if (Local_123)
	{
		Local_123.f_8 = 0.0f;
		Local_123 = 0;
		Local_123.f_4 = 0;
	}
	return;
}

var Function_84(int iParam0, int iParam1) //Position: 0x1FAA / 8106
{
	switch (iParam0)
	{
		case 0x00000001:
			*iParam1 = 0.5f;
			return "";
		
		case 0x00000002:
			if (Function_23(3) == 6)
			{
				*iParam1 = 0.65f;
			}
			else
			{
				*iParam1 = 0.8f;
			}
			return "HUD_MP_BREAKDOWN_MASTER";
		
		case 0x00000003:
			*iParam1 = 1.0f;
			return "HUD_MP_BREAKDOWN_FINAL_MASTER";
		
		case 0x00000004:
			*iParam1 = 0.5f;
			return "HUD_MP_BREAKDOWN_MASTER";
		
		case 0x00000005:
			*iParam1 = 0.8f;
			return "HUD_MP_BREAKDOWN_MASTER";
		
		case 0x00000006:
			*iParam1 = 0.8f;
			return "HUD_MP_BREAKDOWN_FINAL_MASTER";
		
		case 0x00000007:
			*iParam1 = 0.5f;
			return "HUD_MP_BREAKDOWN_MASTER";
		
		case 0x00000008:
			*iParam1 = 0.8f;
			return "HUD_MP_BREAKDOWN_MASTER";
		
		case 0x00000009:
			*iParam1 = 1.0f;
			return "HUD_MP_BREAKDOWN_FINAL_MASTER";
		
		case 0x0000000A:
			*iParam1 = 1.0f;
			return "HUD_MP_BREAKDOWN_FINAL_MASTER";
		
		case 0x0000000B:
			*iParam1 = 1.2f;
			return "HUD_MP_BREAKDOWN_FINAL_MASTER";
		
		case 0x0000000C:
			if (Function_23(3) == 6)
			{
				*iParam1 = 4.0f;
				return "";
			}
			*iParam1 = 2.0f;
			switch (Function_58())
			{
				case 0xFFFFFFFB:
					return "HUD_MP_AWARDS_FAIL_MASTER";
				
				case 0x00000000:
				case 0x00000001:
					return "HUD_MP_AWARDS_GOLD_MASTER";
				
				default:
			}
			return "";
			break;
	}
	*iParam1 = 2.0f;
	return "";
}

bool Function_85(int iParam0, int iParam1, int iParam2) //Position: 0x2204 / 8708
{
	var uVar0;
	bool bVar1;
	
	uVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_PRESSED(uVar0, iParam0, iParam1, iParam2);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_PRESSED(uVar0, 15, iParam1, iParam2) || IS_BUTTON_PRESSED(uVar0, 13, iParam1, iParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_PRESSED(uVar0, 14, iParam1, iParam2) || IS_BUTTON_PRESSED(uVar0, 12, iParam1, iParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

void Function_86(vector3 vParam0, float fParam3) //Position: 0x2281 / 8833
{
	var uVar0;
	char* cVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_90(), 4294967295, 0);
	cVar1 = CREATE_VOLUME_IN_LAYOUT(Function_90(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	iVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(uVar0, cVar1, "p_gen_gatlingGun01x", 1);
	iVar2 = (iVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(iVar0, cVar1, "p_gen_cannon02x", 1));
	iVar3 = 0;
	while (iVar3 <= iVar2)
	{
		Function_87(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar3, iVar0));
		iVar3++;
	}
	DESTROY_OBJECTSET(iVar0);
	DESTROY_VOLUME(cVar1);
}

int Function_87(int iParam0) //Position: 0x2334 / 9012
{
	int iVar0;
	
	if (!IS_OBJECT_VALID(iParam0))
	{
		return "";
	}
	iVar0 = FIND_OBJECT_IN_OBJECT(iParam0, "shootBabyShoot");
	if (!IS_OBJECT_VALID(iVar0))
	{
		return "";
	}
	return Function_88(iVar0);
}

int Function_88(int iParam0) //Position: 0x236F / 9071
{
	int iVar0;
	
	iVar0 = GET_BLIP_ON_OBJECT(iParam0);
	if (!IS_BLIP_VALID(iVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(iParam0), "cannon"))
		{
			iVar0 = ADD_BLIP_FOR_OBJECT(iParam0, 523, 0f, 2, 0);
		}
		else
		{
			iVar0 = ADD_BLIP_FOR_OBJECT(iParam0, 524, 0f, 2, 0);
		}
	}
	Function_89(iVar0);
	return iVar0;
}

void Function_89(var uParam0) //Position: 0x23BD / 9149
{
	SET_BLIP_COLOR(uParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_90() //Position: 0x23D0 / 9168
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_91() //Position: 0x23FF / 9215
{
	int iVar0;
	char* cVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	
	if (!IS_OBJECT_VALID(Local_69.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Local_69.f_104 = Function_118();
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_69.f_104, 411, 0.0f, 3, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	if (!IS_OBJECT_VALID(Local_96.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Local_96.f_104 = Function_105();
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_96.f_104, 411, 0.0f, 3, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	if (iLocal_146 == 4294967295)
	{
		iLocal_146 = 0;
		iVar0 = 0;
		while (iVar0 <= 6)
		{
			if ((*&Global_83591 + 276)[iVar02] != 4294967295)
			{
				iLocal_146 = iVar0;
			}
			iVar0++;
		}
		iLocal_146 = (iLocal_146 - 1);
	}
	if (iLocal_147 == 4294967295)
	{
		cVar1 = Function_104();
		iLocal_147 = (DECOR_GET_INT(cVar1, "AD_WeaponCount") - 1);
	}
	if (GET_CAMERA_CHANNEL_POSITION(&vVar2, 0))
	{
		Function_103(0.0f, 0.0f, 2.5f, 65.0f);
		vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_103(0.0f, 0.0f, 2.5f, 65.0f), vLocal_140, StackVal) };
		iVar8 = (SHIFT_LEFT(125, 16) + SHIFT_LEFT(0, 8));
		iVar9 = (SHIFT_LEFT(180, 16) + SHIFT_LEFT(180, 8)) + 180;
		uVar10 = GET_CURRENT_GAME_TIME();
		uVar11 = GET_LAST_FRAME_TIME();
		Function_100(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_69, vVar2, uVar10, Vector(vVar5, Local_69.f_104, uVar11) + Vector(0.0f, 2.45f, 0.0f), 1, 10604, 1, iVar8, 0, 0, 0);
		Function_100(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_69 + 48, vVar2, uVar10, Vector(vVar5, Local_69.f_104, uVar11) + Vector(0.0f, 2.15f, 0.0f), iLocal_146, 9925, 0, iVar9, 0, 0, 0);
		Function_103(0.0f, 0.0f, -2.5f, 65.0f);
		vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_103(0.0f, 0.0f, -2.5f, 65.0f), vLocal_140, StackVal) };
		Function_100(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_96, vVar2, uVar10, Vector(vVar5, Local_96.f_104, uVar11) + Vector(0.0f, 2.45f, 0.0f), 1, 9892, 1, iVar8, 0, 0, 0);
		Function_100(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Local_96 + 48, vVar2, uVar10, Vector(vVar5, Local_96.f_104, uVar11) + Vector(0.0f, 2.15f, 0.0f), iLocal_147, 9696, 0, iVar9, 0, 0, 0);
	}
	return;
}

var Function_92(int iParam0, var uParam1) //Position: 0x25E0 / 9696
{
	bool bVar0;
	char* cVar1[32];
	int iVar9;
	
	uParam1 = uParam1;
	bVar0 = Function_104();
	strcpy(&cVar1, "AD_WeaponData_", 32);
	straddi(&cVar1, iParam0 + 1, 32);
	Function_93(DECOR_GET_INT(bVar0, &cVar1), &iVar9);
	return GET_WEAPON_DISPLAY_NAME(iVar9);
}

void Function_93(int iParam0, int iParam1) //Position: 0x261D / 9757
{
	*iParam1 = Function_94(iParam0, Function_96(), 0);
	iParam1->f_4 = Function_94(iParam0, Function_96() + 8, Function_96());
	return;
}

var Function_94(var uParam0, int iParam1, int iParam2) //Position: 0x2640 / 9792
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_95((iParam1 - 1)), 1) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), iParam2);
}

var Function_95(int iParam0) //Position: 0x265F / 9823
{
	return SHIFT_LEFT(1, iParam0);
}

int Function_96() //Position: 0x266B / 9835
{
	return Function_97(39);
}

int Function_97(int iParam0) //Position: 0x2676 / 9846
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

var Function_98(var uParam0, var uParam1) //Position: 0x26A4 / 9892
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	return "AD_chu_SUMMARY_D";
}

var Function_99(int iParam0, var uParam1) //Position: 0x26C5 / 9925
{
	uParam1 = uParam1;
	return GET_WEAPON_DISPLAY_NAME((*&Global_83591 + 276)[iParam0 + 22]);
}

void Function_100(int iParam0, vector3 vParam1, float fParam4, float fParam5, char* cParam6, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16) //Position: 0x26DF / 9951
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	var uVar14;
	
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
		fVar5 = fLocal_68;
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
				RELEASE_SOUND_ID(PLAY_SOUND_FROM_OBJECT(cParam6, "HUD_STINGER_TEXT_MASTER"));
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
			Stack.Push(cParam6);
			Stack.Push(iParam15);
			Stack.Push(iParam0->f_40);
			Stack.Push(iParam14);
			Call_Loc(iParam11);
			*iParam0 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, vVar1, 0.0f, iParam0->f_36, 0.0f, iParam13);
			if (iParam16 >= 4294967295)
			{
				Stack.Push(cParam6);
				Stack.Push("");
				Stack.Push(iParam0->f_40);
				Stack.Push(iParam14);
				Call_Loc(iParam11);
				iParam0->f_4 = CREATE_MP_TEXT(StackVal, StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal), 0.0f, iParam0->f_36, 0.0f, iParam16);
			}
		}
		else
		{
			uVar14 = Function_101(iParam0->f_36);
			SET_OBJECT_POSITION(*iParam0, vVar1);
			if (!SET_OBJECT_ORIENTATION(*iParam0, 0.0f, uVar14, 0.0f))
			{
			}
			if (iParam16 >= 4294967295)
			{
				SET_OBJECT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar11, vVar1, StackVal));
				if (!SET_OBJECT_ORIENTATION(StackVal, 0.0f, uVar14, 0.0f))
				{
				}
			}
		}
	}
}

var Function_101(float fParam0) //Position: 0x295E / 10590
{
	return (fParam0 * 57.29578f);
}

var Function_102(var uParam0, var uParam1) //Position: 0x296C / 10604
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	return "AD_chu_SUMMARY_A";
}

vector3 Function_103(vector3 vParam0, float fParam3) //Position: 0x298D / 10637
{
	ROTATE_VECTOR_XZ(&vParam0, fParam3, 0);
	return StackVal, StackVal, vParam0;
}

var Function_104() //Position: 0x29A1 / 10657
{
	int iVar0;
	
	iVar0 = FIND_OBJECT_IN_LAYOUT(Function_29(), "AD_WeaponThingy");
	if (!IS_OBJECT_VALID(iVar0))
	{
		iVar0 = CREATE_POINT_IN_LAYOUT(Function_29(), "AD_WeaponThingy", *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f);
	}
	return iVar0;
}

var Function_105() //Position: 0x29F1 / 10737
{
	struct<2> Var0[27];
	bool bVar57;
	int iVar58;
	int iVar59;
	char* cVar60[32];
	vector3 vVar68;
	int iVar71;
	
	Function_114(&Var0);
	bVar57 = Function_104();
	iVar59 = DECOR_GET_INT(bVar57, "AD_WeaponCount");
	iVar58 = 0;
	while (iVar58 <= iVar59)
	{
		strcpy(&cVar60, "AD_WeaponData_", 32);
		straddi(&cVar60, iVar58, 32);
		Function_93(DECOR_GET_INT(bVar57, &cVar60), &(Var0[iVar582]));
		iVar58++;
	}
	Function_103(0.0f, 0.0f, -2.5f, 65.0f);
	vVar68 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_103(0.0f, 0.0f, -2.5f, 65.0f), vLocal_140, StackVal) };
	iVar71 = Function_108(Global_83591.f_140, &vVar68, (65.0f + 180.0f), &Var0, 1);
	ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), iVar71, 0);
	Function_107(iVar71);
	Function_106("p_gen_floursackstack01x", iVar71, 1.056f, 0.0f, 0.464f, 0.0f, -180.0f, 0.0f);
	Function_106("p_gen_floursackstack02x", iVar71, 1.046f, 0.0f, 1.265f, 0.0f, 30.0f, 0.0f);
	Function_106("p_gen_floursackstack02x", iVar71, -2.233f, 0.0f, 0.384f, 0.0f, -30.0f, 0.0f);
	return iVar71;
}

void Function_106(char* cParam0, int iParam1, vector3 vParam2, vector3 vParam5) //Position: 0x2B35 / 11061
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_OBJECT_RELATIVE_POSITION(iParam1, vParam2, &vVar0);
	GET_OBJECT_RELATIVE_ORIENTATION(iParam1, vParam5, &vVar3);
	SNAP_OBJECT_TO_GROUND(CREATE_PROP_IN_LAYOUT(iParam1, "", cParam0, vVar0, vVar3, 1), 3.0f, 0, 1092616192);
}

void Function_107(int iParam0) //Position: 0x2B73 / 11123
{
	vector3 vVar0;
	
	GET_OBJECT_RELATIVE_POSITION(iParam0, 0.0f, 3.0f, 1.2f, &vVar0);
	CREATE_POINT_LIGHT_IN_LAYOUT(iParam0, "", vVar0, 0.75f, 0.75f, 0.75f, 4.0f);
	return;
}

var Function_108(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4) //Position: 0x2BA5 / 11173
{
	char* cVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10[3];
	
	cVar0 = Function_112(uParam0, uParam1, fParam2, iParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_111((*iParam3)[iVar12], &iVar2))
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
		if (Function_111((*iParam3)[iVar12], &iVar2))
		{
			if (Function_109((*iParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
			{
				iVar9 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(vVar6, Vector("", cVar0, StackVal) + Vector(*uParam1, vVar3, GET_WEAPON_FRAGMENT_NAME((*iParam3)[iVar12])), StackVal) + Vector(0.0f, fParam2, 0.0f), 1);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(iVar9, 0);
				if (IS_OBJECT_VALID(iVar9))
				{
					ATTACH_OBJECTS(iVar9, cVar0, "", vVar3, vVar6, 4294967295);
				}
				iVar10[iVar2] = (iVar10[iVar2] - 1);
			}
		}
		iVar1++;
	}
	return cVar0;
}

bool Function_109(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x2C93 / 11411
{
	if (!Function_110(iParam0))
	{
		return 0;
	}
	switch (UNK_0xDB679ED9(iParam0))
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

bool Function_110(int iParam0) //Position: 0x2E24 / 11812
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_111(int iParam0, int iParam1) //Position: 0x2E36 / 11830
{
	switch (UNK_0xDB679ED9(iParam0))
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

var Function_112(var uParam0, var uParam1, float fParam2, bool bParam3) //Position: 0x2E92 / 11922
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar3 = { StackVal, StackVal, *uParam1 };
	if (bParam3)
	{
		if (!FIND_GROUND_INTERSECTION(&vVar3, 2.0f, uParam1, &uVar0))
		{
			*uParam1 = { StackVal, StackVal, vVar3 };
		}
	}
	else
	{
		*uParam1 = { StackVal, StackVal, vVar3 };
	}
	vVar6 = { 0.2f, 0.0f, -0.065f };
	ROTATE_VECTOR_XZ(&vVar6, fParam2, 0);
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *uParam1, Function_113()), 0.0f, (fParam2 + 180.0f), 0.0f, 1);
}

var Function_113() //Position: 0x2EFE / 12030
{
	return "$/fragments/p_gen_dressForm01x";
}

void Function_114(int iParam0) //Position: 0x2F25 / 12069
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_116(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_115(iParam0, 0.0f);
	return;
}

void Function_115(var uParam0, int iParam1) //Position: 0x2F52 / 12114
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_116(int iParam0) //Position: 0x2F5E / 12126
{
	Function_117(iParam0, 4294967295, 0, 1);
	return;
}

void Function_117(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2F6C / 12140
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

var Function_118() //Position: 0x2F96 / 12182
{
	vector3 vVar0;
	int iVar3;
	
	Function_103(0.0f, 0.0f, 2.5f, 65.0f);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_103(0.0f, 0.0f, 2.5f, 65.0f), vLocal_140, StackVal) };
	iVar3 = Function_108(Global_83591.f_140, &vVar0, 65.0f, &Global_83591 + 276, 1);
	Function_107(iVar3);
	Function_119(iVar3, &Global_83591 + 276 + 228);
	ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), iVar3, 0);
	return iVar3;
}

var Function_119(int iParam0, int iParam1) //Position: 0x2FED / 12269
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	int iVar12;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	GET_OBJECT_RELATIVE_POSITION(iParam0, 0.2f, 0.0f, 0.51f, &vVar0);
	GET_OBJECT_RELATIVE_ORIENTATION(iParam0, 0.0f, 0.0f, 0.0f, &vVar3);
	vVar9 = { StackVal, StackVal, vVar0 };
	if (!FIND_GROUND_INTERSECTION(&vVar9, 2.0f, &vVar0, &uVar6))
	{
		vVar0 = { StackVal, StackVal, vVar9 };
	}
	iVar12 = CREATE_PROP_IN_LAYOUT(iParam0, Function_121(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_111((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_111((*iParam1)[iVar202], &iVar21))
		{
			if (Function_120((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
			{
				GET_OBJECT_RELATIVE_POSITION(iVar12, vVar13, &vVar0);
				GET_OBJECT_RELATIVE_ORIENTATION(iVar12, vVar16, &vVar3);
				CREATE_PROP_IN_LAYOUT(iVar12, "", GET_WEAPON_FRAGMENT_NAME((*iParam1)[iVar202]), vVar0, vVar3, 1);
				iVar22++;
			}
		}
		iVar20++;
	}
	return iVar12;
}

bool Function_120(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4) //Position: 0x30FC / 12540
{
	float fVar0;
	
	if (!Function_110(iParam0))
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		iParam4 = 3;
		iParam3 = 1;
	}
	fVar0 = (((TO_FLOAT(iParam3) / TO_FLOAT((iParam4 - 1))) * (0.535f - -0.46f)) + -0.46f);
	switch (UNK_0xDB679ED9(iParam0))
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

var Function_121() //Position: 0x3223 / 12835
{
	int iVar0;
	
	return iVar0;
}

bool Function_122(bool bParam0, bool bParam1) //Position: 0x322B / 12843
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_123() //Position: 0x324B / 12875
{
	if (HUD_IS_FADED())
	{
		if (!iLocal_148)
		{
			if (UI_ISACTIVE("LoadingMissionName"))
			{
				Function_124("AD_help", 4294967295);
				iLocal_148 = 1;
			}
		}
	}
	else
	{
		Function_2();
	}
	return;
}

void Function_124(char* cParam0, int iParam1) //Position: 0x328F / 12943
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

void Function_125() //Position: 0x3326 / 13094
{
	var uVar0;
	
	uVar0 = CREATE_VOLUME_IN_LAYOUT(Local_150, "v_clear_vol0", 3, -2699.431f, 39.221f, 4256.921f, 0.0f, 7.418f, 0.0f, 70.0f, 20.0f, 60.0f);
	Function_126(&uVar0);
	DESTROY_VOLUME(uVar0);
	return;
}

void Function_126(int iParam0) //Position: 0x3372 / 13170
{
	char* cVar0;
	
	cVar0 = CREATE_LAYOUT(Function_121());
	Function_127(cVar0, "p_gen_chair", *iParam0);
	Function_127(cVar0, "p_gen_footlocker", *iParam0);
	Function_127(cVar0, "p_gen_bucket", *iParam0);
	Function_127(cVar0, "p_gen_treestump", *iParam0);
	Function_127(cVar0, "np_gen_log", *iParam0);
	Function_127(cVar0, "p_gen_stool", *iParam0);
	Function_127(cVar0, "p_gen_furnace", *iParam0);
	Function_127(cVar0, "np_gen_pot", *iParam0);
	Function_127(cVar0, "p_gen_boil", *iParam0);
	Function_127(cVar0, "bottle", *iParam0);
	Function_127(cVar0, "mug0", *iParam0);
	Function_127(cVar0, "cards", *iParam0);
	Function_127(cVar0, "plate", *iParam0);
	Function_127(cVar0, "glass", *iParam0);
	Function_127(cVar0, "package", *iParam0);
	Function_127(cVar0, "nlantern05", *iParam0);
	Function_127(cVar0, "p_gen_bucket02x", *iParam0);
	Function_127(cVar0, "p_gen_bucket03x", *iParam0);
	Function_127(cVar0, "p_gen_can01x", *iParam0);
	Function_127(cVar0, "p_gen_can02x", *iParam0);
	Function_127(cVar0, "jar0", *iParam0);
	Function_127(cVar0, "book", *iParam0);
	Function_127(cVar0, "spittoon", *iParam0);
	Function_127(cVar0, "milkcan", *iParam0);
	Function_127(cVar0, "jug0", *iParam0);
	Function_127(cVar0, "broom", *iParam0);
	DESTROY_LAYOUT(cVar0);
	return;
}

void Function_127(int iParam0, char* cParam1, int iParam2) //Position: 0x358C / 13708
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	uVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_121(), iParam0, 4294967295, 1);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(uVar1, iParam2, cParam1, 1);
	uVar2 = CREATE_OBJECT_ITERATOR(iParam0);
	ITERATE_IN_SET(uVar2, iVar1);
	iVar3 = START_OBJECT_ITERATOR(uVar2);
	while (IS_OBJECT_VALID(iVar3))
	{
		DESTROY_OBJECT(iVar3);
		iVar0++;
		iVar3 = OBJECT_ITERATOR_NEXT(uVar2);
	}
	DESTROY_OBJECTSET(iVar1);
	DESTROY_ITERATOR(uVar2);
	return;
}

void Function_128(int iParam0, bool bParam1) //Position: 0x35E5 / 13797
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

bool Function_129(int iParam0) //Position: 0x360D / 13837
{
	return Function_9(StackVal, iParam0);
}

void Function_130(bool bParam0) //Position: 0x3620 / 13856
{
	Function_128(16, bParam0);
	return;
}

void Function_131(var uParam0) //Position: 0x362D / 13869
{
	Function_128(8, uParam0);
	return;
}

bool Function_132() //Position: 0x363A / 13882
{
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(20, 0, 0));
	Function_174(0, 0);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_164();
	ENABLE_CHILD_SECTOR("mp_chu_base01x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_chu_base01x", 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_148(Local_150, 15597, 14873, 14873, 40, 25);
	Function_144(&Global_83591 + 276, 0);
	Function_140(&Global_83591, 1, 22, 1, 1);
	Function_140(&Global_83591, 2, 6, 10, 1);
	Function_140(&Global_83591, 3, 9, 10, 1);
	Function_140(&Global_83591, 4, 17, 10, 1);
	Function_140(&Global_83591, 5, 24, 1, 1);
	Function_138(22, 1, 1);
	Function_138(8, 4, 1);
	Function_138(7, 10, 1);
	Function_138(16, 10, 1);
	Function_138(23, 1, 1);
	Function_137(&Global_83591);
	Function_136(&Global_83591 + 276, 4);
	Function_134(512);
	Function_133(Global_83864.f_1284);
	Function_17(981);
	Function_15(Global_83864.f_1284, 0, 1);
	return 1;
}

void Function_133(int iParam0) //Position: 0x3739 / 14137
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

void Function_134(int iParam0) //Position: 0x3768 / 14184
{
	Function_135(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_135(var uParam0, int iParam1) //Position: 0x37C1 / 14273
{
	Function_7(uParam0, iParam1);
	return;
}

void Function_136(int iParam0, int iParam1) //Position: 0x37CE / 14286
{
	(iParam0 + 228)->f_220 = 0;
	Function_7(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_137(int iParam0) //Position: 0x37E6 / 14310
{
	iParam0->f_844 = 0;
	return;
}

void Function_138(bool bParam0, int iParam1, bool bParam2) //Position: 0x37F2 / 14322
{
	bool bVar0;
	int iVar1;
	char* cVar2[32];
	struct<2> Var10;
	
	bVar0 = Function_104();
	iVar1 = DECOR_GET_INT(bVar0, "AD_WeaponCount");
	DECOR_SET_INT(bVar0, "AD_WeaponCount", iVar1 + 1);
	strcpy(&cVar2, "AD_WeaponData_", 32);
	straddi(&cVar2, iVar1, 32);
	Var10 = bParam0;
	Var10.f_4 = iParam1;
	if (bParam2)
	{
		Var10.f_4 = (StackVal * CEIL(GET_WEAPON_MAX_AMMO(bParam0)));
	}
	DECOR_SET_INT(StackVal, bVar0, Function_139(&cVar2, Var10, 0));
	return;
}

var Function_139(struct<5> Param0) //Position: 0x387B / 14459
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_96())) || SHIFT_LEFT(iParam2, Function_96() + 8));
}

void Function_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3899 / 14489
{
	Function_141(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_141(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x38B1 / 14513
{
	Function_142(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_142(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x38C6 / 14534
{
	if (!Function_143(iParam1))
	{
		return;
	}
	Function_117(uParam0[iParam12], bParam2, iParam3, bParam4);
}

bool Function_143(int iParam0) //Position: 0x38E9 / 14569
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_144(int iParam0, bool bParam1) //Position: 0x38F9 / 14585
{
	Function_114(iParam0);
	Function_114(iParam0 + 228);
	if (bParam1)
	{
		Function_145(iParam0);
	}
	return;
}

void Function_145(int iParam0) //Position: 0x3915 / 14613
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_146(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_146(var uParam0, int iParam1) //Position: 0x3935 / 14645
{
	Function_147(uParam0, iParam1, 0);
	return;
}

void Function_147(int iParam0, int iParam1, bool bParam2) //Position: 0x3943 / 14659
{
	(*iParam0 + 456)[iParam1] = bParam2;
	return;
}

void Function_148(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x3954 / 14676
{
	uLocal_143 = uParam1;
	uLocal_144 = uParam2;
	uLocal_145 = uParam3;
	(&Global_83591 + 140)->f_56 = 0;
	Function_28(0, 0);
	Function_28(1, uParam4);
	Function_28(2, uParam5);
	if (Function_151())
	{
		Function_136(&Global_83591 + 276, 2);
	}
	Function_150(uParam0);
	Global_83591.f_4 = 2;
	Global_83591.f_16 = (4.0f * 60.0f);
	Function_149();
	vLocal_140 = { StackVal, StackVal, Function_149() };
}

vector3 Function_149() //Position: 0x39B3 / 14771
{
	char* cVar0;
	vector3 vVar1;
	int iVar4;
	
	cVar0 = Function_29();
	vVar1 = { StackVal, StackVal, *(&Global_79349 + 28) };
	if (IS_LAYOUTREF_VALID(cVar0))
	{
		iVar4 = FIND_OBJECT_IN_LAYOUT(cVar0, "LobbyCenter");
		if (IS_OBJECT_VALID(iVar4))
		{
			GET_OBJECT_POSITION(iVar4, &vVar1);
		}
	}
	return StackVal, StackVal, vVar1;
}

void Function_150(var uParam0) //Position: 0x39FB / 14843
{
	Global_83591.f_140 = uParam0;
	return;
}

bool Function_151() //Position: 0x3A09 / 14857
{
	return Function_9(Global_79962, 1024);
}

var Function_152(char* cParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x3A19 / 14873
{
	int iVar0;
	
	if (bParam3)
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_121(), 4, 1);
	}
	else
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "AD_chu_defend", 4, 1);
	}
	Function_153(&iVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(iVar0))
	{
		DESTROY_OBJECT(iVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(iVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(iVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(iVar0, uParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return iVar0;
}

void Function_153(var uParam0, char* cParam1) //Position: 0x3A94 / 14996
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_157(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_156(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_155(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_154(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__StreamingComplete", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 8.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 1, 2, 6.0f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 2, 3, 7.0f, 4, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 3, 1.0f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 3, 6);
	return;
}

void Function_154(int iParam0) //Position: 0x3B45 / 15173
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2765.636f, 44.47093f, 4279.569f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.240611f, -1.08041f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_155(int iParam0) //Position: 0x3BAF / 15279
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2728.445f, 45.64098f, 4299.174f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.227557f, -0.46027f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_156(int iParam0) //Position: 0x3C19 / 15385
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2692.866f, 43.07958f, 4294.582f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.158208f, -0.092239f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_157(bool bParam0) //Position: 0x3C83 / 15491
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -2669.734f, 42.27202f, 4282.608f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, -0.124231f, 0.313491f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

var Function_158(char* cParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x3CED / 15597
{
	int iVar0;
	
	if (bParam3)
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_121(), 4, 1);
	}
	else
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "AD_chu_attack", 4, 1);
	}
	Function_159(&iVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(iVar0))
	{
		DESTROY_OBJECT(iVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(iVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(iVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(iVar0, uParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return iVar0;
}

void Function_159(var uParam0, char* cParam1) //Position: 0x3D68 / 15720
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_163(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_162(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_161(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_160(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__StreamingComplete", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 1.0f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 7.5f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 2, 5.0f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 2, 3, 8.5f, 4, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 3, 1.0f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 3, 6);
	return;
}

void Function_160(int iParam0) //Position: 0x3E1D / 15901
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2696.708f, 40.34999f, 4249.032f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.10721f, -1.790206f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_161(int iParam0) //Position: 0x3E87 / 16007
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2737.655f, 50.65932f, 4314.089f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.180467f, -0.650535f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_162(int iParam0) //Position: 0x3EF1 / 16113
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2782.38f, 56.97729f, 4267.608f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.387222f, -1.51804f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_163(var uParam0) //Position: 0x3F5B / 16219
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55.51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -2818.347f, 24.72812f, 4253.905f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0.108389f, -0.667879f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_164() //Position: 0x3FC5 / 16325
{
	var uVar0;
	
	Function_173(4, 1);
	uVar0 = uVar0;
	Local_150 = CREATE_LAYOUT("ad_chu_layout");
	Local_150.f_44 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_1_set");
	(*&Local_150 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_1", 3, -2744.332f, 32.607f, 4255.031f, 0.0f, 3.670166f, 0.0f, 2.5f, 1.5f, 2.5f);
	Function_171((*&Local_150 + 4)[0], 2);
	Function_169((*&Local_150 + 4)[0], 1);
	Function_167((*&Local_150 + 4)[0], 30.0f);
	Function_165((*&Local_150 + 4)[0], 120.0f);
	ADD_TO_VOLUME_SET(Local_150.f_44, (*&Local_150 + 4)[0]);
	(*&Local_150 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_0", 2, -2779.594f, 28.929f, 4245.797f, 0.0f, 78.84167f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_44, (*&Local_150 + 4)[1]);
	(*&Local_150 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_1", 2, -2794.396f, 29.578f, 4270.135f, 0.0f, 99.90143f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_44, (*&Local_150 + 4)[2]);
	(*&Local_150 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_2", 2, -2756.334f, 32.126f, 4291.85f, 0.0f, 158.3146f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_44, (*&Local_150 + 4)[3]);
	(*&Local_150 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn1_3", 2, -2729.934f, 32.126f, 4304.552f, 0.0f, 192.8142f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_44, (*&Local_150 + 4)[4]);
	(*&Local_150 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn1_0", 2, -2704.186f, 32.137f, 4224.386f, 0.0f, 356.2168f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_44, (*&Local_150 + 4)[5]);
	(*&Local_150 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn1_1", 2, -2669.722f, 32.043f, 4225.022f, 0.0f, 327.9281f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_44, (*&Local_150 + 4)[6]);
	(*&Local_150 + 4)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn1_2", 2, -2660.471f, 31.386f, 4255.642f, 0.0f, -100.2759f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_44, (*&Local_150 + 4)[7]);
	(*&Local_150 + 4)[8] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn1_3", 2, -2664.541f, 31.184f, 4274.648f, 0.0f, -128.1556f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_44, (*&Local_150 + 4)[8]);
	Local_150.f_88 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_2_set");
	(*&Local_150 + 48)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_2", 3, -2726.052f, 32.828f, 4277.954f, 0.0f, 3.670166f, 0.0f, 3.0f, 1.5f, 3.0f);
	Function_171((*&Local_150 + 48)[0], 2);
	Function_169((*&Local_150 + 48)[0], 1);
	Function_167((*&Local_150 + 48)[0], 20.0f);
	Function_165((*&Local_150 + 48)[0], 150.0f);
	ADD_TO_VOLUME_SET(Local_150.f_88, (*&Local_150 + 48)[0]);
	(*&Local_150 + 48)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_0", 2, -2763.094f, 32.12549f, 4255.094f, 0.0f, 26.02849f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_88, (*&Local_150 + 48)[1]);
	(*&Local_150 + 48)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_1", 2, -2735.892f, 32.97035f, 4243.167f, 0.0f, 0.2074945f, 0.0f, 3.0f, 2.0f, 3.0f);
	ADD_TO_VOLUME_SET(Local_150.f_88, (*&Local_150 + 48)[2]);
	(*&Local_150 + 48)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_2", 2, -2759.589f, 32.12549f, 4284.412f, 0.0f, 155.0318f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_88, (*&Local_150 + 48)[3]);
	(*&Local_150 + 48)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn2_3", 2, -2714.366f, 31.22703f, 4304f, 0.0f, 260.1314f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_88, (*&Local_150 + 48)[4]);
	(*&Local_150 + 48)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn2_0", 2, -2704.186f, 32.137f, 4224.386f, 0.0f, -346.9999f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_88, (*&Local_150 + 48)[5]);
	(*&Local_150 + 48)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn2_1", 2, -2669.722f, 32.043f, 4225.022f, 0.0f, -389.9215f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_88, (*&Local_150 + 48)[6]);
	(*&Local_150 + 48)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn2_2", 2, -2660.471f, 31.386f, 4255.642f, 0.0f, -87.98445f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_88, (*&Local_150 + 48)[7]);
	(*&Local_150 + 48)[8] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn2_3", 2, -2664.541f, 31.184f, 4274.648f, 0.0f, -140.7632f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_88, (*&Local_150 + 48)[8]);
	Local_150.f_132 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_3_set");
	(*&Local_150 + 92)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_3", 3, -2682.433f, 32.5f, 4222.714f, 0.0f, -101.3896f, 0.0f, 2.0f, 1.0f, 2.0f);
	Function_171((*&Local_150 + 92)[0], 2);
	Function_169((*&Local_150 + 92)[0], 2);
	Function_167((*&Local_150 + 92)[0], 10.0f);
	Function_165((*&Local_150 + 92)[0], 120.0f);
	ADD_TO_VOLUME_SET(Local_150.f_132, (*&Local_150 + 92)[0]);
	(*&Local_150 + 92)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn3_0", 2, -2735.892f, 32.97035f, 4243.167f, 0.0f, 0.2074945f, 0.0f, 3.0f, 2.0f, 3.0f);
	ADD_TO_VOLUME_SET(Local_150.f_132, (*&Local_150 + 92)[1]);
	(*&Local_150 + 92)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn3_1", 2, -2752.0f, 32.12549f, 4256.852f, 0.0f, 50.85155f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_132, (*&Local_150 + 92)[2]);
	(*&Local_150 + 92)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn3_2", 2, -2739.458f, 32.36738f, 4281.126f, 0.0f, 142.6022f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_132, (*&Local_150 + 92)[3]);
	(*&Local_150 + 92)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn3_3", 2, -2724f, 32.82832f, 4290.595f, 0.0f, 156.0273f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_132, (*&Local_150 + 92)[4]);
	(*&Local_150 + 92)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn3_0", 2, -2664f, 31.10629f, 4273.979f, 0.0f, -493.372f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_132, (*&Local_150 + 92)[5]);
	(*&Local_150 + 92)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn3_1", 2, -2660f, 31.12157f, 4255.799f, 0.0f, -450.7461f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_132, (*&Local_150 + 92)[6]);
	(*&Local_150 + 92)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn3_2", 2, -2638.662f, 30.83886f, 4244f, 0.0f, -129.7169f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_132, (*&Local_150 + 92)[7]);
	(*&Local_150 + 92)[8] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn3_3", 2, -2655.797f, 31.9444f, 4223.566f, 0.0f, 32.47483f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_132, (*&Local_150 + 92)[8]);
	Local_150.f_176 = CREATE_VOLUME_SET_IN_LAYOUT(Local_150, "Stage_4_set");
	(*&Local_150 + 136)[0] = CREATE_VOLUME_IN_LAYOUT(Local_150, "Cap_4", 3, -2668.187f, 35.673f, 4253.981f, 0.0f, 214.4653f, 0.0f, 3.0f, 1.5f, 3.0f);
	Function_171((*&Local_150 + 136)[0], 3);
	Function_169((*&Local_150 + 136)[0], 1);
	Function_167((*&Local_150 + 136)[0], 30.0f);
	ADD_TO_VOLUME_SET(Local_150.f_176, (*&Local_150 + 136)[0]);
	(*&Local_150 + 136)[1] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_0", 2, -2735.892f, 32.97035f, 4243.167f, 0.0f, 0.2074945f, 0.0f, 3.0f, 2.0f, 3.0f);
	ADD_TO_VOLUME_SET(Local_150.f_176, (*&Local_150 + 136)[1]);
	(*&Local_150 + 136)[2] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_1", 2, -2704.0f, 32.13754f, 4224f, 0.0f, 15.29518f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_176, (*&Local_150 + 136)[2]);
	(*&Local_150 + 136)[3] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_2", 2, -2696f, 31.12158f, 4287.083f, 0.0f, 149.8294f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_176, (*&Local_150 + 136)[3]);
	(*&Local_150 + 136)[4] = CREATE_VOLUME_IN_LAYOUT(Local_150, "A_Spawn4_3", 2, -2725.979f, 32.82832f, 4274.021f, 0.0f, 160.9689f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_176, (*&Local_150 + 136)[4]);
	(*&Local_150 + 136)[5] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn4_0", 2, -2637.973f, 30.81281f, 4244f, 0.0f, -117.7321f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_176, (*&Local_150 + 136)[5]);
	(*&Local_150 + 136)[6] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn4_1", 2, -2640.261f, 30.24233f, 4276f, 0.0f, -118.6319f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_176, (*&Local_150 + 136)[6]);
	(*&Local_150 + 136)[7] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn4_2", 2, -2655.206f, 31.92993f, 4223.81f, 0.0f, 34.20289f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_176, (*&Local_150 + 136)[7]);
	(*&Local_150 + 136)[8] = CREATE_VOLUME_IN_LAYOUT(Local_150, "D_Spawn4_3", 2, -2667.826f, 30.78242f, 4303.827f, 0.0f, -82.94545f, 0.0f, 5.0f, 2.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_150.f_176, (*&Local_150 + 136)[8]);
	return;
}

void Function_165(int iParam0, float fParam1) //Position: 0x4A33 / 18995
{
	DECOR_SET_FLOAT(uParam0, Function_166(), fParam1);
	return;
}

var Function_166() //Position: 0x4A44 / 19012
{
	return "ADTimerBonus";
}

void Function_167(int iParam0, float fParam1) //Position: 0x4A59 / 19033
{
	DECOR_SET_FLOAT(uParam0, Function_168(), fParam1);
	return;
}

var Function_168() //Position: 0x4A6A / 19050
{
	return "ADTimer";
}

void Function_169(bool bParam0, int iParam1) //Position: 0x4A7A / 19066
{
	DECOR_SET_INT(uParam0, Function_170(), iParam1);
	return;
}

var Function_170() //Position: 0x4A8B / 19083
{
	return "ADObjective";
}

void Function_171(bool bParam0, int iParam1) //Position: 0x4A9F / 19103
{
	DECOR_SET_INT(uParam0, Function_172(), iParam1);
	return;
}

var Function_172() //Position: 0x4AB0 / 19120
{
	return "ADReward";
}

void Function_173(int iParam0, int iParam1) //Position: 0x4AC1 / 19137
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

void Function_174(var uParam0, int iParam1) //Position: 0x4B0A / 19210
{
	Function_179(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_175(StackVal, iParam1);
	}
	return;
}

void Function_175(int iParam0, int iParam1) //Position: 0x4B3B / 19259
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_179(iParam0);
	Function_178(uVar0);
	PRINTNL();
	Function_176(iParam0, uVar0, iParam1);
	return;
}

void Function_176(int iParam0, int iParam1, bool bParam2) //Position: 0x4B60 / 19296
{
	int iVar0;
	
	Function_179(iParam0);
	Function_178(iParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, iParam1);
	Function_177();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(iParam1), 0);
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

void Function_177() //Position: 0x4CD9 / 19673
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_178(int iParam0) //Position: 0x4CE5 / 19685
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(iParam0));
	return;
}

void Function_179(int iParam0) //Position: 0x4D2B / 19755
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

void Function_180() //Position: 0x4D71 / 19825
{
	while (!IS_EXITFLAG_SET())
	{
		Function_123();
		Function_33(3775, 1785);
		WAIT(0);
	}
	return;
}

bool Function_181() //Position: 0x4D91 / 19857
{
	return Function_129(2);
}

void Function_182() //Position: 0x4D9B / 19867
{
	if (Function_181())
	{
		return;
	}
	Function_193();
	Function_192();
	Function_190(&uLocal_127, Function_113(), 0, 0);
	Function_190(&uLocal_127, "p_gen_floursackstack01x", 0, 0);
	Function_190(&uLocal_127, "p_gen_floursackstack02x", 0, 0);
	Function_190(&uLocal_127, "dlc_mpfreepack_atkdef", 10, 0);
	while (!Function_184(&uLocal_127))
	{
		WAIT(0);
	}
	fLocal_68 = 1.5f;
	Function_123();
	Function_183();
	return;
}

void Function_183() //Position: 0x4E3B / 20027
{
	while (!Function_129(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_184(int iParam0) //Position: 0x4E56 / 20054
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_189();
	iVar1 = 0;
	if (!Function_13(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_188(iParam0[iVar03], 8);
		}
		else if (Function_187())
		{
			iVar1 = 1;
			Function_188(iParam0[iVar03], 8);
		}
		Function_188(iParam0[iVar03], 16);
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
				Function_188(iParam0[iVar03], 1);
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
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_188(iParam0[iVar03], 2);
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
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_188(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_188(iParam0[iVar03], 2);
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
	Function_185();
	return 1;
}

void Function_185() //Position: 0x51D1 / 20945
{
	if (!Function_186(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_186(int iParam0) //Position: 0x5211 / 21009
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_187() //Position: 0x522D / 21037
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

void Function_188(var uParam0, int iParam1) //Position: 0x5258 / 21080
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_189() //Position: 0x5269 / 21097
{
	if (!Function_186(128))
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

var Function_190(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x52AB / 21163
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(uParam1, iParam2);
	iVar0 = Function_191(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_188(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_191(var uParam0, int iParam1, int iParam2) //Position: 0x52E3 / 21219
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_13(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_188(uParam0[iVar03], 4);
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

void Function_192() //Position: 0x53A7 / 21415
{
	Local_96.f_96 = 4294967295;
	Local_96.f_100 = 4294967295;
	return;
}

void Function_193() //Position: 0x53B7 / 21431
{
	Local_69.f_96 = 4294967295;
	Local_69.f_100 = 4294967295;
	return;
}

