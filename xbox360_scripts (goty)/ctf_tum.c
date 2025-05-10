//Decompiled with MagicRDR v1.0
//Function Count : 278
//Statics Count : 569
//Natives Count : 254
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
	struct<1189> Local_139 = { 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
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
	Function_267();
	if (Function_266())
	{
		Function_265();
	}
	else
	{
		if (Function_127())
		{
			Function_126(1);
		}
		else
		{
			Function_125(1);
		}
		while (!Function_124() && !IS_EXITFLAG_SET())
		{
			WAIT(0);
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			bVar1 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_139, Function_123(), "script_wagon_fire_grave02", *(&Local_139 + 980[iVar06]));
			bVar2 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_139, Function_123(), "fire_comp_smoke_plume", *(&Local_139 + 1084[iVar06]));
			if (IS_OBJECT_VALID(bVar1) && IS_OBJECT_VALID(bVar2))
			{
				UNK_0x6745191B(bVar1, 0.0f, 0.0f, 0.0f);
				UNK_0x6745191B(bVar2, 0.0f, 0.0f, 0.0f);
			}
			iVar0++;
		}
		Function_122(0, 10);
		bVar3 = CREATE_WORLD_SECTOR(Local_139, "tumbleweed");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar3))
		{
			WAIT(0);
		}
		iVar4 = 2;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_121(64))
			{
				iVar4 = (iVar4 - 1);
				if (iVar4 <= 0)
				{
					Function_120(64, 0);
					Function_118();
					iVar4 = 2;
				}
			}
			Function_102(&iLocal_540, 0.2f, 0.7f, 12, 1.0f, 0.0f, 0.0f, 0.0f);
			Function_89(&uLocal_438);
			Function_29();
			Function_26();
			WAIT(0);
		}
		Function_24(512);
		Function_20();
		Function_19(Global_83864.f_1284, 0, 1);
	}
	Function_17(&uLocal_438);
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_tum_base01x", 0);
	DISABLE_CHILD_SECTOR("mp_tum_base01x");
	Function_8();
	Function_3();
	RESET_RMPTFX_ALL();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x1DF / 479
{
	Function_2(uLocal_437);
	return;
}

int Function_2(bool bParam0) //Position: 0x1EC / 492
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_3() //Position: 0x202 / 514
{
	Function_4(&Local_139 + 4);
	RELEASE_LAYOUT_REF(Local_139);
	return;
}

void Function_4(int iParam0) //Position: 0x214 / 532
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

void Function_5(var uParam0, int iParam1) //Position: 0x23A / 570
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

void Function_6(var uParam0, int iParam1) //Position: 0x368 / 872
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_7(int iParam0, int iParam1) //Position: 0x382 / 898
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8() //Position: 0x39F / 927
{
	Function_16();
	Function_4(&bLocal_39);
	Function_9();
	return;
}

void Function_9() //Position: 0x3B0 / 944
{
	Function_10();
	return;
}

void Function_10() //Position: 0x3B9 / 953
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

void Function_11(int iParam0, bool bParam1, int iParam2) //Position: 0x4C2 / 1218
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

void Function_12(var uParam0, int iParam1) //Position: 0x4EA / 1258
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x4FD / 1277
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_14(bool bParam0) //Position: 0x50C / 1292
{
	return Function_15(Global_76905.f_132, bParam0);
}

bool Function_15(var uParam0, bool bParam1) //Position: 0x51D / 1309
{
	return (uParam0 && bParam1) == 0;
}

void Function_16() //Position: 0x52A / 1322
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_17(int iParam0) //Position: 0x569 / 1385
{
	Function_120(64, 0);
	Function_18(iParam0);
	return;
}

void Function_18(int iParam0) //Position: 0x57A / 1402
{
	if (iParam0->f_400 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_400, 0);
		iParam0->f_400 = "";
	}
	return;
}

void Function_19(var uParam0, bool bParam1, bool bParam2) //Position: 0x59A / 1434
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

void Function_20() //Position: 0x5C7 / 1479
{
	Function_21(Function_23());
	return;
}

void Function_21(int iParam0) //Position: 0x5D3 / 1491
{
	if (!Function_22(iParam0))
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

bool Function_22(int iParam0) //Position: 0x600 / 1536
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_23() //Position: 0x617 / 1559
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_24(int iParam0) //Position: 0x631 / 1585
{
	Function_25(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_25(var uParam0, int iParam1) //Position: 0x66A / 1642
{
	Function_12(uParam0, iParam1);
	return;
}

void Function_26() //Position: 0x677 / 1655
{
	Function_27(2);
	return;
}

void Function_27(int iParam0) //Position: 0x681 / 1665
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
			Function_28(iParam0);
		}
	}
	return;
}

void Function_28(var uParam0) //Position: 0x6B3 / 1715
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

void Function_29() //Position: 0x6C2 / 1730
{
	Function_87();
	if (Function_86(1, 1))
	{
		Function_71(StackVal, StackVal, 7021, vLocal_48, 1, 6908);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_66(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_32(4945, 3935);
		Function_30();
	}
	return;
}

void Function_30() //Position: 0x70D / 1805
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_31(&Local_12);
	}
	return;
}

void Function_31(int iParam0) //Position: 0x729 / 1833
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

void Function_32(int iParam0, int iParam1) //Position: 0x74F / 1871
{
	Function_33(iParam0, iParam1, 3928);
	return;
}

void Function_33(var uParam0, var uParam1, int iParam2) //Position: 0x760 / 1888
{
	if (Function_14(0x4000000))
	{
		Function_42();
		Function_11(0x4000000, 0, 1);
	}
	if (Function_14(0x10000000))
	{
		Function_42();
		Function_11(0x10000000, 0, 1);
	}
	if (Function_14(2) != Function_14(0x2000000))
	{
		Function_42();
		Function_11(0x2000000, Function_14(2), 1);
	}
	if (Function_41())
	{
		Function_40(!Function_14(16));
	}
	if (Function_14(16))
	{
		Function_34(&uParam0, &uParam1, &iParam2);
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

void Function_34(var uParam0, var uParam1, int iParam2) //Position: 0x8F9 / 2297
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
			if (!Function_39(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_37(bVar1, 2048, 1))
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
				if (Function_35(bVar1, (4294966296 - bVar1), 0))
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
			if (Function_35(bVar1, (4294966296 - bVar1), 1))
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

bool Function_35(bool bParam0, int iParam1, int iParam2) //Position: 0xA71 / 2673
{
	var uVar0;
	
	return Function_36(bParam0, iParam1, &uVar0, iParam2);
}

int Function_36(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xA82 / 2690
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

bool Function_37(bool bParam0, int iParam1, bool bParam2) //Position: 0xAE7 / 2791
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_86(iParam1, bParam2);
	}
	if (!Function_39(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_38(iParam1), 64);
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

var Function_38(int iParam0) //Position: 0xB68 / 2920
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

bool Function_39(bool bParam0) //Position: 0xE81 / 3713
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

void Function_40(bool bParam0) //Position: 0xF22 / 3874
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_11(16384, 0, 1);
	return;
}

bool Function_41() //Position: 0xF3C / 3900
{
	return Function_14(32768);
}

void Function_42() //Position: 0xF49 / 3913
{
	Function_11(32768, 1, 0);
	return;
}

int Function_43() //Position: 0xF58 / 3928
{
	return 1;
}

int Function_44(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xF5F / 3935
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_58(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_57(bParam0);
	bVar2 = Function_56(bParam0);
	bVar3 = Function_53(bParam0);
	iVar4 = Function_52(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_35(bParam0, iVar4, 0);
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_50(34, bParam0));
		bVar0++;
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_14(4))
	{
		if (Function_47(bParam0, 1, 1))
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar0, "<SWAG_Y_RET>");
		}
	}
	else
	{
		Function_46(bVar0, bParam0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	if (Function_41() && Function_45())
	{
	}
	return 0;
}

var Function_45() //Position: 0x1020 / 4128
{
	return (Function_14(4096) || Function_14(4));
}

void Function_46(bool bParam0, bool bParam1) //Position: 0x1031 / 4145
{
	if (Function_14(4))
	{
		if (Function_37(bParam1, 1024, 1))
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

bool Function_47(bool bParam0, int iParam1, bool bParam2) //Position: 0x1064 / 4196
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_49(iParam1, bParam2);
	}
	if (!Function_39(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_48(iParam1), 64);
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

var Function_48(int iParam0) //Position: 0x10E5 / 4325
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

var Function_49(int iParam0, bool bParam1) //Position: 0x11D7 / 4567
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_50(int iParam0, bool bParam1) //Position: 0x11F7 / 4599
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_51(iParam0);
	}
	if (!Function_39(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_51(int iParam0) //Position: 0x1265 / 4709
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_52(int iParam0, int iParam1, int iParam2) //Position: 0x127E / 4734
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_53(int iParam0) //Position: 0x1293 / 4755
{
	return Function_54(0, iParam0);
}

int Function_54(int iParam0, bool bParam1) //Position: 0x129F / 4767
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_55(iParam0);
	}
	if (!Function_39(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_55(int iParam0) //Position: 0x1306 / 4870
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_56(bool bParam0) //Position: 0x1316 / 4886
{
	return Function_50(12, bParam0);
}

int Function_57(int iParam0) //Position: 0x1323 / 4899
{
	return Function_50(11, iParam0);
}

void Function_58(bool bParam0, int iParam1, char* cParam2) //Position: 0x1330 / 4912
{
	if (bParam0)
	{
		if (Function_41())
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

int Function_59() //Position: 0x1351 / 4945
{
	if (!Function_61(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_headshots");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_bagcaptures");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_60();
	return 1;
}

void Function_60() //Position: 0x13EA / 5098
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

bool Function_61(bool bParam0) //Position: 0x1427 / 5159
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_41() || Function_65(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_41())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_62(Function_41());
	return 1;
}

void Function_62(bool bParam0) //Position: 0x14A8 / 5288
{
	if (bParam0 || Function_14(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_14(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_14(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_14(1048576) || Function_14(4)) || Function_86(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_11(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_63(int iParam0) //Position: 0x1531 / 5425
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_64(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x1545 / 5445
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

int Function_65(bool bParam0, bool bParam1) //Position: 0x158A / 5514
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

void Function_66(vector3 vParam0, float fParam3) //Position: 0x15BE / 5566
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_70(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_70(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_67(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_67(bool bParam0) //Position: 0x1671 / 5745
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
	return Function_68(bVar0);
}

int Function_68(bool bParam0) //Position: 0x16AC / 5804
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
	Function_69(bVar0);
	return bVar0;
}

void Function_69(bool bParam0) //Position: 0x16FA / 5882
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_70() //Position: 0x170D / 5901
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_71(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x173C / 5948
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_72(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 6807, 1, 125, 0, 0, 0);
	Function_72(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_72(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x17BF / 6079
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_73(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_73(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x180A / 6154
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
			Function_31(iParam0);
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
					Function_31(iParam0);
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
			fVar14 = Function_74(iParam0->f_36);
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

var Function_74(float fParam0) //Position: 0x1A89 / 6793
{
	return (fParam0 * 57.29578f);
}

var Function_75(int iParam0, var uParam1) //Position: 0x1A97 / 6807
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_76(int iParam0, var uParam1) //Position: 0x1AFC / 6908
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_mul_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_77() //Position: 0x1B6D / 7021
{
	int iVar0;
	
	iVar0 = Function_82(Global_83591.f_140, &vLocal_48, 0.0f, &Global_83591 + 276, 1);
	Function_78(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_78(bool bParam0, int iParam1) //Position: 0x1B9A / 7066
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_123(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_81((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_81((*iParam1)[iVar202], &iVar21))
		{
			if (Function_79((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_79(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1CA9 / 7337
{
	float fVar0;
	
	if (!Function_80(bParam0))
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

bool Function_80(int iParam0) //Position: 0x1DD0 / 7632
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_81(bool bParam0, int iParam1) //Position: 0x1DE2 / 7650
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

var Function_82(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1E3E / 7742
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_84(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_81((*uParam3)[iVar12], &iVar2))
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
		if (Function_81((*uParam3)[iVar12], &iVar2))
		{
			if (Function_83((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_83(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x1F2C / 7980
{
	if (!Function_80(bParam0))
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

var Function_84(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x20BD / 8381
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_85()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_85() //Position: 0x2129 / 8489
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_86(bool bParam0, bool bParam1) //Position: 0x2150 / 8528
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_87() //Position: 0x2170 / 8560
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
						Function_88("CTF_sym_help", 4294967295);
						break;
					
					case 0x00000008:
						Function_88("CTF_one_help", 4294967295);
						break;
					
					case 0x00000007:
						Function_88("CTF_mul_help", 4294967295);
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

void Function_88(char* cParam0, int iParam1) //Position: 0x2205 / 8709
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

int Function_89(int iParam0) //Position: 0x229C / 8860
{
	int iVar0;
	
	if (!Function_100(*iParam0) || (Function_121(64) && Function_96()))
	{
		iParam0->f_4 = 0;
		Function_18(iParam0);
		if (!Function_100(*iParam0))
		{
		}
		if (Function_121(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_100(*iParam0))
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
						(iParam0 + 12[Function_93(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_15((iParam0 + 12[StackVal5])->f_16, 32))
							{
								Function_12(iParam0 + 12[StackVal5] + 16, 64);
							}
						}
						else if (!Function_15((iParam0 + 12[StackVal5])->f_16, 32))
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
					if (!Function_15((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_15((iParam0 + 12[StackVal5])->f_16, 2))
							{
								Function_92((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_91((iParam0 + 12[StackVal5])->f_12, 1);
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
				Function_18(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_90(3, iParam0->f_396))
			{
				if (iParam0->f_396 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_396);
				}
				else
				{
					iParam0->f_8 = 0;
				}
				if (Function_15((iParam0 + 12[StackVal5])->f_16, 32))
				{
					if (!Function_15((iParam0 + 12[StackVal5])->f_16, 64))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							OPEN_DOOR_DIRECTION((iParam0 + 12[StackVal5])->f_12, false);
							DESTROY_OBJECT((iParam0 + 12[StackVal5])->f_12);
						}
						Function_13(iParam0 + 12[StackVal5] + 16, 64);
					}
				}
				else if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
				{
					if (Function_15((iParam0 + 12[StackVal5])->f_16, 4))
					{
						if (Function_15((iParam0 + 12[StackVal5])->f_16, 8))
						{
							if (StackVal || IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_CLOSING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
							{
								OPEN_DOOR_DIRECTION(StackVal, Function_15((iParam0 + 12[(iParam0 + 12[StackVal5])->f_125])->f_16, 16));
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

int Function_90(int iParam0, bool bParam1) //Position: 0x2623 / 9763
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_91(bool bParam0, bool bParam1) //Position: 0x2635 / 9781
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

void Function_92(bool bParam0, bool bParam1) //Position: 0x2689 / 9865
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

int Function_93(var uParam0, var uParam1, int iParam2) //Position: 0x26DA / 9946
{
	return Function_94(Global_29006, uParam0, uParam1, iParam2);
}

int Function_94(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x26EC / 9964
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_95(iParam0))
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

bool Function_95(int iParam0) //Position: 0x2788 / 10120
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_96() //Position: 0x279E / 10142
{
	return !Function_97();
}

bool Function_97() //Position: 0x27A8 / 10152
{
	if (Function_99())
	{
		return (Function_98() != 1 || Function_98() != 0);
	}
	return 0;
}

int Function_98() //Position: 0x27C1 / 10177
{
	return Global_79349.f_16;
}

bool Function_99() //Position: 0x27CD / 10189
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_100(int iParam0) //Position: 0x27D6 / 10198
{
	if (!Function_95(iParam0))
	{
		return 1;
	}
	return Function_101(&(Global_29008[iParam0]), 4);
}

int Function_101(var uParam0, bool bParam1) //Position: 0x27F2 / 10226
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_102(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x280E / 10254
{
	float fVar0;
	
	if (Function_117())
	{
		if (Function_116(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_112(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_106((iParam0 + 8[iParam0->f_1125])->f_12, 0, iParam3, 0, 0);
				Function_103((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_106((iParam0 + 8[iParam0->f_1125])->f_16, 0, iParam3, 0, 0);
				Function_103((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_103(int iParam0, var uParam1, int iParam2) //Position: 0x28B1 / 10417
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_105(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_104(iParam2);
	}
	return;
}

void Function_104(int iParam0) //Position: 0x28D6 / 10454
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_105(int iParam0) //Position: 0x28EB / 10475
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_106(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2900 / 10496
{
	int iVar0;
	bool bVar1;
	
	Function_111(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_110(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_107(StackVal, bVar1, bParam4);
		}
	}
}

void Function_107(int iParam0, bool bParam1, bool bParam2) //Position: 0x2972 / 10610
{
	int iVar0;
	
	Function_111(iParam0);
	Function_109(bParam1);
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
	Function_108();
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

void Function_108() //Position: 0x2AEB / 10987
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_109(bool bParam0) //Position: 0x2AF7 / 10999
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

void Function_110(int iParam0, int iParam1) //Position: 0x2B3D / 11069
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_111(iParam0);
	Function_109(iVar0);
	PRINTNL();
	Function_107(iParam0, iVar0, iParam1);
	return;
}

void Function_111(int iParam0) //Position: 0x2B62 / 11106
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

float Function_112(int iParam0) //Position: 0x2BA8 / 11176
{
	return -Function_113(iParam0);
}

float Function_113(int iParam0) //Position: 0x2BB4 / 11188
{
	if (Function_116(iParam0))
	{
		if (Function_115(iParam0))
		{
			return StackVal;
		}
		Function_114();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_114() //Position: 0x2C85 / 11397
{
	if (!Function_117())
	{
	}
	return;
}

bool Function_115(int iParam0) //Position: 0x2C92 / 11410
{
	return Function_15(*iParam0, 2);
}

bool Function_116(int iParam0) //Position: 0x2C9F / 11423
{
	return Function_15(*iParam0, 1);
}

bool Function_117() //Position: 0x2CAC / 11436
{
	return NET_IS_IN_SESSION();
}

void Function_118() //Position: 0x2CB5 / 11445
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_123());
	Function_119(bVar0, "bottle", Local_139.f_128);
	Function_119(bVar0, "mug", Local_139.f_128);
	Function_119(bVar0, "glass", Local_139.f_128);
	Function_119(bVar0, "crate14", Local_139.f_128);
	Function_119(bVar0, "crate13", Local_139.f_128);
	Function_119(bVar0, "crate04", Local_139.f_128);
	Function_119(bVar0, "package", Local_139.f_128);
	Function_119(bVar0, "nlantern05", Local_139.f_128);
	Function_119(bVar0, "arm_gunsmith01_flag", Local_139.f_128);
	Function_119(bVar0, "c_gen_blanket15", Local_139.f_128);
	Function_119(bVar0, "c_gen_curtains", Local_139.f_128);
	Function_119(bVar0, "arm_fs01_flag", Local_139.f_128);
	Function_119(bVar0, "c_tes_blanket", Local_139.f_128);
	Function_119(bVar0, "p_gen_bucket02x", Local_139.f_128);
	Function_119(bVar0, "p_gen_bucket03x", Local_139.f_128);
	Function_119(bVar0, "p_gen_wagonwheel01x", Local_139.f_128);
	Function_119(bVar0, "p_gen_basin01x", Local_139.f_128);
	Function_119(bVar0, "p_gen_can01x", Local_139.f_128);
	Function_119(bVar0, "p_gen_can02x", Local_139.f_128);
	Function_119(bVar0, "jar", Local_139.f_128);
	Function_119(bVar0, "book", Local_139.f_128);
	Function_119(bVar0, "p_gen_bedrollclosed01x", Local_139.f_128);
	Function_119(bVar0, "spittoon", Local_139.f_128);
	Function_119(bVar0, "milkcan", Local_139.f_128);
	Function_119(bVar0, "jug", Local_139.f_128);
	Function_119(bVar0, "stool", Local_139.f_128);
	Function_119(bVar0, "chairbroken", Local_139.f_128);
	Function_119(bVar0, "debrisboard", Local_139.f_128);
	Function_119(bVar0, "pot", Local_139.f_128);
	Function_119(bVar0, "chairrocking02", Local_139.f_128);
	Function_119(bVar0, "wagonwheel01", Local_139.f_128);
	Function_119(bVar0, "fencestandard_qpa", Local_139.f_128);
	Function_119(bVar0, "debrispile", Local_139.f_128);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_119(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2FAA / 12202
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_123(), bParam0, 4294967295, 1);
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

void Function_120(int iParam0, bool bParam1) //Position: 0x3003 / 12291
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

bool Function_121(int iParam0) //Position: 0x302B / 12331
{
	return Function_15(StackVal, iParam0);
}

void Function_122(int iParam0, var uParam1) //Position: 0x303E / 12350
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_83591 + 140 + 8)[iParam0] = uParam1;
	return;
}

var Function_123() //Position: 0x305F / 12383
{
	bool bVar0;
	
	return bVar0;
}

bool Function_124() //Position: 0x3067 / 12391
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

void Function_125(bool bParam0) //Position: 0x310C / 12556
{
	Function_120(16, bParam0);
	return;
}

void Function_126(var uParam0) //Position: 0x3119 / 12569
{
	Function_120(8, uParam0);
	return;
}

bool Function_127() //Position: 0x3126 / 12582
{
	Function_264(&iLocal_540, 0, 9, 30, 1, 1, 0);
	Function_264(&iLocal_540, 1, 9, 30, 3, 3, 3);
	Function_264(&iLocal_540, 2, 12, 0, 1, 1, 0);
	Function_264(&iLocal_540, 3, 12, 0, 0, 0, 1);
	Function_264(&iLocal_540, 4, 23, 0, 2, 2, 1);
	Function_261(&iLocal_540);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_259();
	ENABLE_CHILD_SECTOR("mp_tum_base01x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_tum_base01x", 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	if (!Function_255(Local_139))
	{
		return 0;
	}
	Function_254("FTR_SONG_05", "FTR_SONG_09", 0, 58, 58, 1);
	Function_253(512);
	Function_252(Global_83864.f_1284);
	Function_21(977);
	Function_19(Global_83864.f_1284, 0, 1);
	Function_250(Local_139.f_1184);
	Function_243(&Global_83591 + 276, 0);
	Function_241(&Global_83591, 1, 22, 1, 1);
	Function_241(&Global_83591, 2, 5, 10, 1);
	Function_241(&Global_83591, 3, 9, 10, 1);
	Function_241(&Global_83591, 3, 16, 15, 1);
	Function_236(&Global_83591, 1, 24, 4, 1);
	Function_236(&Global_83591, 2, 6, 10, 1);
	Function_236(&Global_83591, 3, 17, 10, 1);
	Function_236(&Global_83591, 4, 10, 10, 1);
	Function_235(&Global_83591);
	Function_234(&Global_83591 + 276, 4);
	if (!Function_230(&uLocal_438))
	{
		return 0;
	}
	Function_128();
	return 1;
}

void Function_128() //Position: 0x3290 / 12944
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 13054);
	uLocal_437 = Function_129("DLCPVP");
	return;
}

var Function_129(bool bParam0) //Position: 0x32AE / 12974
{
	bool bVar0;
	
	bVar0 = Function_130();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_130() //Position: 0x32C2 / 12994
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_131(var uParam0) //Position: 0x32FE / 13054
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
			bVar11 = Function_228(16384);
			if (StackVal == bVar12)
			{
				if (Var0.f_32 == 0)
				{
					if (Function_227())
					{
					}
					else
					{
						if (bVar11)
						{
							switch (Function_98())
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
							Function_224(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23122] + 4, &Global_50170[23122] + 8, &Global_50170[23122] + 12, Var0);
							Function_217(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23022] + 4, &Global_50170[23022] + 8, &Global_50170[23022] + 12, Var0);
							Function_134(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
						}
						if (Function_97() || Function_132(4096))
						{
							if (Function_86(131072, 1))
							{
							}
							if (Function_37(Var0, 131072, 1))
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
			if (bVar11 && !Function_132(2048))
			{
				if (IS_SLOT_VALID(StackVal))
				{
				}
			}
			break;
	}
	return;
}

bool Function_132(int iParam0) //Position: 0x3462 / 13410
{
	return Function_133(Global_79336, iParam0);
}

bool Function_133(var uParam0, bool bParam1) //Position: 0x3471 / 13425
{
	return (uParam0 && bParam1) == 0;
}

void Function_134(struct<29> Param0) //Position: 0x347E / 13438
{
	var uVar0;
	var uVar1;
	
	uVar0 = "challenge_01lvl2_128";
	uVar1 = "challenge_01_128";
	switch (Param0.f_12)
	{
		case 0x0000001D:
			Function_139(&(Global_50170[22822]), 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_139(&(Global_50170[22922]), 0, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
				if (StackVal == 10)
				{
					SET_WEAPON_GOLD(Function_138(), 29, 1);
					Global_83823[29] = 1;
					Function_135(6002);
					Function_135(6005);
					Function_135(6009);
				}
			}
			if (StackVal == 10)
			{
				Function_135(6001);
				Function_135(6004);
			}
			break;
	}
}

void Function_135(int iParam0) //Position: 0x355F / 13663
{
	Function_136(iParam0, 1);
	return;
}

void Function_136(int iParam0, bool bParam1) //Position: 0x356B / 13675
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_13(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_137((iVar0 % 32)));
	}
	else
	{
		Function_12(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_137((iVar0 % 32)));
	}
	return;
}

int Function_137(bool bParam0) //Position: 0x35C1 / 13761
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_138() //Position: 0x35CD / 13773
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_139(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0x35E2 / 13794
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_140(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, 4294967295, iParam8, uParam9);
	}
}

void Function_140(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, int iParam8, var uParam9, var uParam10) //Position: 0x360E / 13838
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_216(uParam0, uParam2, uParam3);
			}
			Function_141(uParam0, iParam1, uParam2, iParam8, 1, uParam3, uParam9, bParam4, uParam5, uParam10);
			break;
		
		case 0x00000001:
			Function_141(uParam0, iParam1, bParam4, iParam8, 2, uParam5, uParam9, bParam6, uParam7, uParam10);
			break;
		
		case 0x00000002:
			Function_141(uParam0, iParam1, bParam6, iParam8, 3, uParam7, uParam9, 0, 0.0f, uParam10);
			break;
	}
}

void Function_141(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, var uParam9) //Position: 0x368B / 13963
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = Function_215(*uParam0);
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
					Function_213(uParam0, uParam5, uParam9);
				}
				else
				{
					Function_159(uParam0, iParam4, uParam5, uParam6, uParam9);
					Function_148(uParam0, bVar1, iParam7, fParam8);
				}
			}
		}
		else if (bVar1 > 0)
		{
			uParam0->f_12 = Function_147(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
			if (uParam0->f_12 == fVar0)
			{
				Function_142(*uParam0, uParam0->f_12, 1, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_142(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x3759 / 14169
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_146(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_145(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_146(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_144(iParam0, 4))
	{
		Function_143(Function_146(iParam0), 0);
	}
}

void Function_143(var uParam0, int iParam1) //Position: 0x3810 / 14352
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

bool Function_144(int iParam0, bool bParam1) //Position: 0x3835 / 14389
{
	return Function_15(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_145(int iParam0) //Position: 0x3849 / 14409
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_146(int iParam0) //Position: 0x387D / 14461
{
	return Global_50170[iParam022].f_24;
}

var Function_147(int iParam0, int iParam1) //Position: 0x388C / 14476
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_148(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x389F / 14495
{
	Function_156(*uParam0);
	Function_149(*uParam0, bParam2, CEIL(bParam3), 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_146(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), 0, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_146(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
}

void Function_149(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3944 / 14660
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_155(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_146(iParam0));
	if ((bParam3 && Function_144(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_146(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_154(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_145(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_153(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_152(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_151(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_146(iParam0), &Var7, 0, 2, Function_144(iParam0, 4));
			if (!bParam3)
			{
				Function_150(iParam0, 4);
			}
		}
	}
}

void Function_150(int iParam0, int iParam1) //Position: 0x3A01 / 14849
{
	Function_13(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<16> Function_151(int iParam0) //Position: 0x3A15 / 14869
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_145(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_152(int iParam0) //Position: 0x3A35 / 14901
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_153(int iParam0) //Position: 0x3A63 / 14947
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_154(int iParam0) //Position: 0x3A93 / 14995
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_155(int iParam0) //Position: 0x3AC4 / 15044
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

void Function_156(int iParam0) //Position: 0x3C42 / 15426
{
	Function_157(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_157(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3C58 / 15448
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_158();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

var Function_158() //Position: 0x3CCD / 15565
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_159(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3D1A / 15642
{
	struct<4> Var0;
	
	Function_212(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_145(*uParam0) };
	Function_207(&Var0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_206(*uParam0, 4);
	Function_160();
}

void Function_160() //Position: 0x3D78 / 15736
{
	if (!Function_99())
	{
		if (!Function_205(1, 3, 1, 1))
		{
			Function_193(1);
			Function_192(1, 8);
		}
	}
	else
	{
		Function_161(0);
	}
	return;
}

void Function_161(bool bParam0) //Position: 0x3DA1 / 15777
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_190(2);
	if (bParam0)
	{
		Function_190(1);
	}
	else
	{
		Function_189(1);
	}
	Function_162();
	return;
}

void Function_162() //Position: 0x3E2A / 15914
{
	Function_187();
	Function_186();
	Function_186();
	Function_185();
	Function_185();
	Function_184();
	Function_184();
	Function_169(0);
	Function_169(0);
	if (!Function_99())
	{
		Function_167();
		Function_166();
		Function_165();
		Function_164();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_163();
	return;
}

void Function_163() //Position: 0x3E7C / 15996
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

void Function_164() //Position: 0x3F82 / 16258
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

void Function_165() //Position: 0x3FB5 / 16309
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

void Function_166() //Position: 0x4150 / 16720
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

void Function_167() //Position: 0x4304 / 17156
{
	Function_168(&Global_28260, 1, 0);
	return;
}

void Function_168(int iParam0, bool bParam1, int iParam2) //Position: 0x4312 / 17170
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
	
	bVar0 = Function_138();
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

struct<8> Function_169(int iParam0) //Position: 0x4503 / 17667
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
					iVar2 = ((Function_183((50 + iVar4)) + Function_183((183 + iVar4))) + Function_183((90 + iVar4)));
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
	Function_170(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_170(int iParam0, bool bParam1, bool bParam2) //Position: 0x45A9 / 17833
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
		Function_182(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_181(iParam0);
	if (bParam2)
	{
		Function_171(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_171(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x4844 / 18500
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_180(390))), 32);
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
					bVar19 = (Function_179(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_179(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_177(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_175(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_173(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_172(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_123(), &Var9);
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

var Function_172(int iParam0) //Position: 0x4E71 / 20081
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_173(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4E82 / 20098
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_174("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_174("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_174("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_174(char* cParam0, bool bParam1) //Position: 0x4F77 / 20343
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_175(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4F90 / 20368
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_90(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_176(Function_90(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_176(int iParam0, int iParam1) //Position: 0x4FF5 / 20469
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_177(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5007 / 20487
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
	if (((Function_178(iParam0) != 19 || Function_178(iParam0) != 17) || Function_178(iParam0) != 10) || Function_178(iParam0) != 9)
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

int Function_178(int iParam0) //Position: 0x5137 / 20791
{
	return Global_35278[iParam020].f_48;
}

float Function_179(int iParam0) //Position: 0x5146 / 20806
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_180(int iParam0) //Position: 0x517F / 20863
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_181(int iParam0) //Position: 0x51BC / 20924
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

int Function_182(int iParam0, bool bParam1, bool bParam2) //Position: 0x5356 / 21334
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

int Function_183(bool bParam0) //Position: 0x559A / 21914
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_184() //Position: 0x55DB / 21979
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
		iVar2 = ((Function_183((50 + iVar3) + 15) + Function_183((183 + iVar3) + 15)) + Function_183((90 + iVar3) + 15));
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
	Function_170(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_185() //Position: 0x5664 / 22116
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
			iVar2 = ((Function_183((50 + iVar3) + 8) + Function_183((183 + iVar3) + 8)) + Function_183((90 + iVar3) + 8));
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
	Function_170(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_186() //Position: 0x56FB / 22267
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
		iVar2 = ((Function_183((50 + iVar3)) + Function_183((183 + iVar3))) + Function_183((90 + iVar3)));
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
	Function_170(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_187() //Position: 0x577A / 22394
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_188(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_170(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_188(int iParam0, bool bParam1, int iParam2) //Position: 0x57B3 / 22451
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
	Function_182(iParam0, bParam1, 1);
	Function_181(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_171(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_189(int iParam0) //Position: 0x59BD / 22973
{
	Function_25(&Global_79338, iParam0);
	return;
}

void Function_190(int iParam0) //Position: 0x59CC / 22988
{
	Function_191(&Global_79338, iParam0);
	return;
}

void Function_191(var uParam0, int iParam1) //Position: 0x59DB / 23003
{
	Function_13(uParam0, iParam1);
	return;
}

void Function_192(var uParam0, int iParam1) //Position: 0x59E8 / 23016
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_99())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_193(bool bParam0) //Position: 0x5A2A / 23082
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_194();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_162();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_12(&Global_63095, 1);
		Function_12(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_194() //Position: 0x5A7B / 23163
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_204())
	{
		Function_201(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_201(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_196(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_196(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_195(StackVal, StackVal, vVar0))
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

bool Function_195(vector3 vParam0) //Position: 0x5B36 / 23350
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_196(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5B4E / 23374
{
	int iVar0;
	
	iVar0 = Function_199(uParam2, uParam3);
	if (Function_198(iVar0))
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
	Function_197();
	return StackVal, StackVal, Function_197();
}

vector3 Function_197() //Position: 0x5C35 / 23605
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_198(int iParam0) //Position: 0x5C3E / 23614
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_199(bool bParam0, bool bParam1) //Position: 0x5C54 / 23636
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
				fVar2 = Function_200(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_200(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_198(bVar0) && !bParam1)
	{
		bVar0 = Function_199(bParam0, 1);
	}
	return bVar0;
}

float Function_200(vector3 vParam0, vector3 vParam3) //Position: 0x5D1B / 23835
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_201(var uParam0, int iParam1) //Position: 0x5D38 / 23864
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_203(Global_34573, &vVar4);
	if (!Function_202(Global_30640[0]))
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
	if (!Function_202(Global_30640[2]))
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
	if (!Function_202(Global_30640[1]))
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
	if (!Function_202(Global_30658[1]))
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
	if (!Function_202(Global_30658[3]))
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
	if (!Function_202(Global_30658[2]))
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
	if (!Function_202(Global_30658[4]))
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
	if (!Function_202(Global_30668[0]))
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
	if (!Function_202(Global_30668[1]))
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
	if (!Function_202(Global_30668[2]))
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
	if (!Function_202(Global_30679[0]))
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
	if (!Function_202(Global_30685[0]))
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
	if (!Function_202(Global_30685[1]))
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
	if (!Function_202(Global_30685[2]))
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
	if (!Function_202(Global_30693[0]))
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
	if (!Function_202(Global_30693[1]))
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
	if (!Function_202(Global_30693[2]))
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
	if (!Function_202(Global_30707[2]))
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
	if (!Function_202(Global_30707[3]))
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
	if (!Function_202(Global_30707[0]))
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
	if (!Function_202(Global_30717[0]))
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
	if (!Function_202(Global_30723[2]))
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
	if (!Function_202(Global_30723[1]))
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
	if (!Function_202(Global_30723[0]))
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
	if (!Function_202(Global_30679[1]))
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
	if (!Function_202(Global_30707[1]))
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
	if (Function_195(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_202(int iParam0) //Position: 0x655D / 25949
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_15(uVar0, 0x1000000) || Function_15(uVar0, 0x2000000)) || Function_15(uVar0, 0x4000000)) || !Function_15(uVar0, 0x10000000));
}

void Function_203(bool bParam0, int iParam1) //Position: 0x6598 / 26008
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_204() //Position: 0x65A5 / 26021
{
	if (Function_15(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_205(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x65C0 / 26048
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

void Function_206(int iParam0, int iParam1) //Position: 0x6664 / 26212
{
	Function_12(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_207(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6678 / 26232
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_70();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_211(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_210(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_209(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_208(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_211(), iVar1 + 1);
	return;
}

struct<16> Function_208(int iParam0) //Position: 0x66EA / 26346
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_209(int iParam0) //Position: 0x670B / 26379
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_210(int iParam0) //Position: 0x672C / 26412
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_211() //Position: 0x674D / 26445
{
	return "CQueue_Count";
}

void Function_212(bool bParam0, bool bParam1) //Position: 0x6762 / 26466
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_158();
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

void Function_213(var uParam0, bool bParam1, bool bParam2) //Position: 0x68AE / 26798
{
	Function_212(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_146(*uParam0), 1.0f, 0, 0);
	Function_214(*uParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_207(&Global_50170[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_160();
	return;
}

void Function_214(int iParam0, int iParam1) //Position: 0x6913 / 26899
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_155(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_146(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_154(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_145(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_151(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_146(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_146(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_146(iParam0), 1.0f, 0, 0);
	}
	return;
}

float Function_215(int iParam0) //Position: 0x6995 / 27029
{
	return Global_50170[iParam022].f_12;
}

void Function_216(var uParam0, bool bParam1, bool bParam2) //Position: 0x69A4 / 27044
{
	Function_156(*uParam0);
	if (!Function_144(*uParam0, 2))
	{
		Function_149(*uParam0, bParam1, CEIL(bParam2), 0);
		Function_150(*uParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_146(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_217(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0x69E1 / 27105
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_215(230);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3))
					{
						if (!Function_221(Param3) && Param3.f_12 != 29)
						{
							if (Function_133(Param3.f_40, 1048576))
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
					Function_219(230, 150, Function_220(), 4294967295);
					Function_135(6007);
					Function_135(6008);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_218(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_142(230, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_218(var uParam0, bool bParam1, int iParam2) //Position: 0x6AA3 / 27299
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(iParam2));
	return;
}

void Function_219(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6ABB / 27323
{
	Function_212(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_146(iParam0), 1.0f, 0, 0);
	Function_214(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_135(iParam3);
	}
	Function_207(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_160();
}

bool Function_220() //Position: 0x6B21 / 27425
{
	return "MP_TrickShot_Icon_128";
}

bool Function_221(bool bParam0) //Position: 0x6B3F / 27455
{
	if (Function_223(bParam0, 1, 0) != 4294967295 && Function_222() != 4294967295)
	{
		return 0;
	}
	return Function_223(bParam0, 1, 0) != Function_222();
}

int Function_222() //Position: 0x6B67 / 27495
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_223(GET_LOCAL_SLOT(), 1, 0);
}

int Function_223(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6B7E / 27518
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_39(bParam0))
			{
				if (!Function_37(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

void Function_224(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0x6BC2 / 27586
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_215(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 1)
				{
					Function_225(231, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 3, 100, Function_226(), 4294967295);
					*uParam2 = 0.0f;
					bVar0 = false;
					Function_135(6006);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_218(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_142(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_215(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 3)
				{
					Function_219(231, 100, Function_226(), 4294967295);
					Function_135(6003);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_218(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_142(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_225(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, int iParam12) //Position: 0x6CEA / 27882
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_145(uParam0) };
	Function_207(&Var0, uParam7, bParam11);
	*uParam1 = uParam2;
	*uParam3 = uParam4;
	Function_218(&uParam5, uParam8, uParam9);
	Function_142(uParam0, uParam5, uParam6, uParam8, 4294967295, 4294967295);
	Function_149(uParam0, uParam9, uParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_135(iParam12);
	}
	Function_206(uParam0, 4);
	Function_160();
}

var Function_226() //Position: 0x6D60 / 28000
{
	return "MP_Revenge_Icon_128";
}

bool Function_227() //Position: 0x6D7C / 28028
{
	if (Function_132(2048))
	{
		if ((IntToFloat(ABS(CEIL(GET_CURRENT_UNWARPED_TIME()))) - Global_78617.f_56) >= 3.0f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int Function_228(int iParam0) //Position: 0x6DA6 / 28070
{
	return Function_229(&Global_79349, iParam0);
}

int Function_229(var uParam0, bool bParam1) //Position: 0x6DB5 / 28085
{
	return Function_15(uParam0->f_44, bParam1);
}

bool Function_230(bool bParam0) //Position: 0x6DC4 / 28100
{
	if (!Function_233(bParam0, Global_30658[0]))
	{
		return 0;
	}
	Function_231(bParam0, "tumbleweed", "church", 1, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "church", 2, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "saloon", 1, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "saloon", 2, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "saloon", 3, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "saloon", 4, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "saloon", 5, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "ruinedHome", 97, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "ruinedHome", 98, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "mansion", 1, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "mansion", 2, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "mansion", 3, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "mansion", 4, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "mansion", 5, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "mansion", 7, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "mansion", 8, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "mansion", 9, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "mansion", 10, 1, 0, 1, 1);
	Function_231(bParam0, "tumbleweed", "mansion", 11, 1, 0, 1, 1);
	return 1;
}

int Function_231(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x7067 / 28775
{
	int iVar0;
	
	iVar0 = iParam0->f_396;
	if (!Function_232(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	if (bParam4)
	{
		Function_13(iParam0 + 12[iVar05] + 16, 2);
	}
	if (bParam5)
	{
		Function_13(iParam0 + 12[iVar05] + 16, 4);
		if (bParam6)
		{
			Function_13(iParam0 + 12[iVar05] + 16, 8);
			if (bParam7)
			{
				Function_13(iParam0 + 12[iVar05] + 16, 16);
			}
		}
	}
	return 1;
}

bool Function_232(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x70D8 / 28888
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

bool Function_233(int iParam0, int iParam1) //Position: 0x7134 / 28980
{
	int iVar0;
	
	if (!Function_95(iParam1))
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

void Function_234(int iParam0, int iParam1) //Position: 0x71AA / 29098
{
	(iParam0 + 228)->f_220 = 0;
	Function_13(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_235(int iParam0) //Position: 0x71C2 / 29122
{
	iParam0->f_844 = 0;
	return;
}

void Function_236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x71CE / 29134
{
	Function_237(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_237(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x71E6 / 29158
{
	Function_238(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_238(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x71FD / 29181
{
	if (!Function_240(iParam1))
	{
		return;
	}
	Function_239(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_239(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x7220 / 29216
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

bool Function_240(int iParam0) //Position: 0x724A / 29258
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_241(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x725A / 29274
{
	Function_242(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_242(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x7272 / 29298
{
	Function_238(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_243(int iParam0, bool bParam1) //Position: 0x7287 / 29319
{
	Function_247(iParam0);
	Function_247(iParam0 + 228);
	if (bParam1)
	{
		Function_244(iParam0);
	}
	return;
}

void Function_244(int iParam0) //Position: 0x72A3 / 29347
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_245(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_245(var uParam0, int iParam1) //Position: 0x72C3 / 29379
{
	Function_246(uParam0, iParam1, 0);
	return;
}

void Function_246(int iParam0, int iParam1, int iParam2) //Position: 0x72D1 / 29393
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_247(int iParam0) //Position: 0x72E2 / 29410
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_249(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_248(iParam0, 0.0f);
	return;
}

void Function_248(var uParam0, int iParam1) //Position: 0x730F / 29455
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_249(int iParam0) //Position: 0x731B / 29467
{
	Function_239(iParam0, 4294967295, 0, 1);
	return;
}

void Function_250(bool bParam0) //Position: 0x7329 / 29481
{
	DECOR_SET_OBJECT(Function_251(), "LobbyGringoSet", bParam0);
	return;
}

var Function_251() //Position: 0x7349 / 29513
{
	return Global_83591.f_140;
}

void Function_252(int iParam0) //Position: 0x7355 / 29525
{
	if (!Function_22(iParam0))
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

void Function_253(bool bParam0) //Position: 0x7384 / 29572
{
	Function_191(&Global_79336, bParam0);
	if ((bParam0 && 512) != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_254(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x73DD / 29661
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

bool Function_255(int iParam0) //Position: 0x746D / 29805
{
	Function_258(iParam0);
	if (Function_257())
	{
		Function_234(&Global_83591 + 276, 2);
	}
	Function_256();
	vLocal_48 = { StackVal, StackVal, Function_256() };
	return 1;
}

vector3 Function_256() //Position: 0x7491 / 29841
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_251();
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

bool Function_257() //Position: 0x74D9 / 29913
{
	return Function_15(Global_79962, 1024);
}

void Function_258(var uParam0) //Position: 0x74E9 / 29929
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_259() //Position: 0x74F7 / 29943
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
	
	Function_260(4, 1);
	uVar0 = uVar0;
	Local_139 = CREATE_LAYOUT("CTF_FFA_TUM_layout");
	Local_139.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_139, "v_clear_vol", 2, -3988.696f, 35.77234f, 2956.469f, 0.0f, 0.0f, 0.0f, 266.6067f, 30.7673f, 243.6033f);
	Local_139.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_139, "playablespace", 2, -3984.045f, 28.1865f, 2935.856f, 0.0f, 29.50395f, 0.0f, 313.6283f, 118.8916f, 313.6283f);
	Local_139.f_160 = CREATE_VOLUME_SET_IN_LAYOUT(Local_139, "CapVols_set");
	(*&Local_139 + 136)[0] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_0", 3, -4058.478f, 29.61571f, 2892.888f, 0.0f, 101.3496f, 0.0f, 1.5f, 1.5f, 1.5f);
	ADD_TO_VOLUME_SET(Local_139.f_160, (*&Local_139 + 136)[0]);
	(*&Local_139 + 136)[1] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_1", 3, -4056.0f, 30.98055f, 3008f, 0.0f, 96.27155f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_139.f_160, (*&Local_139 + 136)[1]);
	(*&Local_139 + 136)[2] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_2", 3, -3970.6f, 25.09826f, 2861.688f, 0.0f, -43.70324f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_139.f_160, (*&Local_139 + 136)[2]);
	(*&Local_139 + 136)[3] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_3", 3, -3959.438f, 26.10209f, 3018.947f, 0.0f, -45.22885f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_139.f_160, (*&Local_139 + 136)[3]);
	(*&Local_139 + 136)[4] = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_4", 3, -3903.895f, 30.21682f, 2942.283f, 0.0f, -84.44062f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_139.f_160, (*&Local_139 + 136)[4]);
	Local_139.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_0", 3, -4091.142f, 37.58409f, 2925.996f, 0.0f, 61.3784f, 0.0f, 2.713888f, 2.706705f, 2.713888f);
	Local_139.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_1", 3, -4064f, 29.11371f, 2868f, 0.0f, 42.45674f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_2", 3, -4011.248f, 24.09412f, 2846.011f, 0.0f, 31.75775f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_3", 3, -3944f, 26.10193f, 2848f, 0.0f, -366.3711f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_4", 3, -3897.323f, 31.12166f, 2908.532f, 0.0f, 251.1074f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_5", 3, -3908.0f, 31.39465f, 2968.0f, 0.0f, -140.8216f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_6", 3, -3928.0f, 31.57994f, 3016.0f, 0.0f, -110.8904f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_7", 3, -3985.426f, 27.833f, 3033.271f, 0.0f, 145.4214f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_8", 3, -4035.875f, 30.21676f, 3036.362f, 0.0f, 139.7569f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_9", 3, -4080f, 31.81991f, 2995.999f, 0.0f, 113.8994f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_10", 3, -4006.486f, 29.54855f, 2998.782f, 0.0f, 179.505f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_11", 3, -4033.119f, 29.44337f, 2951.85f, 0.0f, 101.23f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_12", 3, -4004f, 27.63472f, 2908.215f, 0.0f, -21.79864f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_13", 3, -3943.82f, 28.90638f, 2912.024f, 0.0f, 229.5649f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_14", 3, -3940.0f, 25.09824f, 2989.031f, 0.0f, 289.4779f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_15", 3, -4108.275f, 38.182f, 2950.125f, 0.0f, 52.94986f, 0.0f, 2.713888f, 4.885954f, 2.713888f);
	Local_139.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_16", 3, -4060.709f, 31.05026f, 2958.737f, 0.0f, 163.2081f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_17", 3, -4034.344f, 28.33999f, 2888.036f, 0.0f, 79.56847f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_18", 3, -4000.335f, 25.09801f, 2868.0f, 0.0f, 26.53247f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_19", 3, -3898.331f, 31.82174f, 2921.273f, 0.0f, -13.60553f, 0.0f, 1.0852f, 7.952068f, 4.194906f);
	Local_139.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_20", 3, -3883.939f, 31.12168f, 2923.278f, 0.0f, -67.84254f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_21", 3, -3932.0f, 27.10593f, 2880.0f, 0.0f, -60.08466f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_22", 3, -3953.312f, 30.50286f, 2939.223f, 0.0f, -46.38773f, 0.0f, 1.930818f, 0.7323853f, 1.843626f);
	Local_139.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_23", 3, -3973.914f, 29.37104f, 2910.746f, 0.0f, -11.68849f, 0.0f, 1.326852f, 0.9177413f, 1.401955f);
	Local_139.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_24", 3, -4057.392f, 31.24279f, 2978.608f, 0.0f, -265.1893f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_25", 3, -3999.427f, 30.47741f, 2948.945f, 0.0f, -109.7381f, 0.0f, 1.959547f, 1.714921f, 2.136512f);
	Local_139.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_26", 3, -3970.471f, 30.11155f, 2967.409f, 0.0f, -344.9128f, 0.0f, 1.400205f, 1.044532f, 1.98453f);
	Local_139.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_27", 3, -3928.0f, 26.10204f, 2972.0f, 0.0f, -138.231f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_28", 3, -3976.581f, 27.82765f, 3065.543f, 0.0f, -182.5675f, 0.0f, 2.713888f, 7.952068f, 2.713888f);
	Local_139.f_280 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_29", 3, -4037.004f, 32.66646f, 3060f, 0.0f, -200.1063f, 0.0f, 2.25141f, 6.596942f, 2.25141f);
	Local_139.f_284 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_30", 3, -4037.906f, 32.31547f, 3006.759f, 0.0f, -181.2774f, 0.0f, 1.892313f, 5.544739f, 1.892313f);
	Local_139.f_288 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_31", 3, -3914.451f, 31.08102f, 2923.866f, 0.5548701f, -178.3191f, 1.071101f, 1.443083f, 5.295927f, 1.370505f);
	Local_139.f_292 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_32", 3, -3975.114f, 28.07007f, 2901.118f, 0.0f, -150.763f, 0.0f, 1.013778f, 0.6932117f, 1.013778f);
	Local_139.f_296 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_33", 3, -3982.488f, 28.83418f, 3052.088f, 0.0f, -179.3267f, 0.0f, 1.010767f, 1.017321f, 1.010767f);
	Local_139.f_300 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_34", 3, -4086.078f, 33.68818f, 2975.819f, 0.0f, -210.6577f, 0.0f, 2.148187f, 6.294487f, 2.148187f);
	Local_139.f_304 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_35", 3, -4001.473f, 29.04794f, 2922.592f, 0.0f, -333.2487f, 0.0f, 1.880421f, 1.628469f, 1.880421f);
	Local_139.f_308 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_36", 3, -3964.47f, 30.55498f, 2961.497f, 0.0f, -526.0065f, 0.0f, 1.146845f, 1.207152f, 1.133981f);
	Local_139.f_312 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_37", 3, -3948.513f, 28.79963f, 2961.508f, 0.0f, -182.4703f, 0.0f, 1.01947f, 1.041453f, 1.118695f);
	Local_139.f_316 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_38", 3, -3977.548f, 32.29787f, 2914.262f, 0.0f, -11.68849f, 0.0f, 1.571095f, 0.8718218f, 1.401955f);
	Local_139.f_320 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_39", 3, -3958.006f, 30.90298f, 2929.4f, 0.0f, -55.96852f, 0.0f, 0.769297f, 0.9428971f, 1.125287f);
	Local_139.f_324 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_40", 3, -4087.934f, 37.87866f, 2944.331f, 0.0f, -298.9574f, 0.0f, 1.206228f, 0.7631982f, 1.206228f);
	Local_139.f_328 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_41", 3, -3987.003f, 28.83418f, 3039.87f, 0.0f, -0.7988213f, 0.0f, 1.010767f, 1.017321f, 1.010767f);
	Local_139.f_332 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_42", 3, -4011.871f, 29.33448f, 2918.047f, 0.0f, 90.79722f, 0.0f, 0.9327946f, 0.6096924f, 0.9327946f);
	Local_139.f_336 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_43", 3, -3983.673f, 28.48914f, 2907.002f, 0.0f, 95.5078f, 0.0f, 0.3829336f, 0.3467969f, 0.4046086f);
	Local_139.f_340 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_44", 3, -3991.205f, 29.57663f, 2928.223f, 0.0f, -156.4049f, 0.0f, 1.282436f, 0.8123176f, 1.282436f);
	Local_139.f_344 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_45", 3, -3979.017f, 29.88895f, 2965.125f, -2.151067f, -165.4856f, -0.3706533f, 1.282436f, 0.8123176f, 1.282436f);
	Local_139.f_348 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_46", 3, -3961.857f, 30.55498f, 2968.425f, 0.0f, -432.7554f, 0.0f, 1.146845f, 1.207152f, 1.133981f);
	Local_139.f_352 = CREATE_VOLUME_IN_LAYOUT(Local_139, "SpawnVol_47", 3, -3953.763f, 30.90298f, 2930.307f, 0.0f, 128.8973f, 0.0f, 0.769297f, 0.9428971f, 1.125287f);
	*(&Local_139 + 356) = { -4009.096f, 28.62745f, 2937.506f };
	*(&Local_139 + 356 + 12) = { 0.0f, 127.5166f, 0.0f };
	Local_139.f_380 = CREATE_POINT_IN_LAYOUT(Local_139, "Showdown_A", -4009.096f, 28.62745f, 2937.506f, 0.0f, 127.5166f, 0.0f);
	*(&Local_139 + 384) = { -4002.591f, 28.74016f, 2933.159f };
	*(&Local_139 + 384 + 12) = { 0.0f, -51.07376f, 0.0f };
	Local_139.f_408 = CREATE_POINT_IN_LAYOUT(Local_139, "Showdown_B", -4002.591f, 28.74016f, 2933.159f, 0.0f, -51.07376f, 0.0f);
	*(&Local_139 + 412) = { -3978.189f, 27.97245f, 2936.659f };
	*(&Local_139 + 412 + 12) = { 0.0f, 92.7494f, 0.0f };
	Local_139.f_436 = CREATE_POINT_IN_LAYOUT(Local_139, "StandoffCenter", -3978.189f, 27.97245f, 2936.659f, 0.0f, 92.7494f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_0", -4084.0f, 33.63136f, 2888f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_1", -4036f, 27.60783f, 2848f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_2", -3972f, 24.19966f, 2841.715f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_3", -3923.174f, 28.56275f, 2871.565f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 440) = { -3876.027f, 30.87167f, 2938.365f };
	*(&Local_139 + 440 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_464 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_4", -3876.027f, 30.87167f, 2938.365f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 468) = { -3920.145f, 31.13043f, 2994.486f };
	*(&Local_139 + 468 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_492 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_5", -3920.145f, 31.13043f, 2994.486f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 496) = { -3952.0f, 27.07925f, 3047.894f };
	*(&Local_139 + 496 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_520 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_6", -3952.0f, 27.07925f, 3047.894f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 524) = { -4009.442f, 29.01965f, 3037.442f };
	*(&Local_139 + 524 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_548 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_7", -4009.442f, 29.01965f, 3037.442f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 552) = { -4072.0f, 32.94128f, 3032f };
	*(&Local_139 + 552 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_576 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_8", -4072.0f, 32.94128f, 3032f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 580) = { -4083.797f, 35.96482f, 2959.437f };
	*(&Local_139 + 580 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_604 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_9", -4083.797f, 35.96482f, 2959.437f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_10", -4026.96f, 27.84851f, 2925.439f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_11", -3968.0f, 25.202f, 2892.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_12", -3940.136f, 28.99602f, 2948.26f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_13", -3972.0f, 27.10597f, 2990.447f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_14", -4017.823f, 30.19597f, 2973.823f, 0.0f, 0.0f, 0.0f);
	Local_139.f_608 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_139, 8, 0);
	*(&Local_139 + 612[06]) = { -3945.451f, 30.01124f, 2935.279f };
	*(&Local_139 + 612[06] + 12) = { 0.0f, -53.93149f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_D1", -3945.451f, 30.01124f, 2935.279f, 0.0f, -53.93149f, 0.0f);
	DECOR_SET_INT(bVar1, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_139.f_608);
	*(&Local_139 + 612[16]) = { -3974.377f, 29.39345f, 2959.274f };
	*(&Local_139 + 612[16] + 12) = { 0.0f, -163.4948f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_D2", -3974.377f, 29.39345f, 2959.274f, 0.0f, -163.4948f, 0.0f);
	DECOR_SET_INT(bVar2, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_139.f_608);
	*(&Local_139 + 612[26]) = { -4019.329f, 26.61257f, 2867.966f };
	*(&Local_139 + 612[26] + 12) = { 0.0f, 153.9039f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_A1", -4019.329f, 26.61257f, 2867.966f, 0.0f, 153.9039f, 0.0f);
	DECOR_SET_INT(bVar3, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_139.f_608);
	*(&Local_139 + 612[36]) = { -3930.531f, 26.15015f, 2991.445f };
	*(&Local_139 + 612[36] + 12) = { 0.0f, -113.4691f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_A2", -3930.531f, 26.15015f, 2991.445f, 0.0f, -113.4691f, 0.0f);
	DECOR_SET_INT(bVar4, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_139.f_608);
	*(&Local_139 + 612[46]) = { -4003.292f, 28.62311f, 2950.668f };
	*(&Local_139 + 612[46] + 12) = { 0.0f, -73.05689f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P1", -4003.292f, 28.62311f, 2950.668f, 0.0f, -73.05689f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_139.f_608);
	*(&Local_139 + 612[56]) = { -3982.791f, 28.60759f, 2970.791f };
	*(&Local_139 + 612[56] + 12) = { 0.0f, 192.3761f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P2", -3982.791f, 28.60759f, 2970.791f, 0.0f, 192.3761f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_139.f_608);
	*(&Local_139 + 612[66]) = { -3955.131f, 29.05244f, 2923.955f };
	*(&Local_139 + 612[66] + 12) = { 0.0f, 211.3746f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P3", -3955.131f, 29.05244f, 2923.955f, 0.0f, 211.3746f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_139.f_608);
	*(&Local_139 + 612[76]) = { -3989.078f, 28.21542f, 2926.726f };
	*(&Local_139 + 612[76] + 12) = { 0.0f, 116.8816f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_B1", -3989.078f, 28.21542f, 2926.726f, 0.0f, 116.8816f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_139.f_608);
	*(&Local_139 + 612[86]) = { -3952.565f, 28.206f, 2961.489f };
	*(&Local_139 + 612[86] + 12) = { 0.0f, 275.8201f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_B2", -3952.565f, 28.206f, 2961.489f, 0.0f, 275.8201f, 0.0f);
	DECOR_SET_INT(bVar9, "type", true);
	DECOR_SET_INT(bVar9, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_139.f_608);
	*(&Local_139 + 612[96]) = { -3928.823f, 30.45762f, 2899.902f };
	*(&Local_139 + 612[96] + 12) = { 0.0f, -121.755f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R1", -3928.823f, 30.45762f, 2899.902f, 0.0f, -121.755f, 0.0f);
	DECOR_SET_INT(bVar10, "type", true);
	DECOR_SET_INT(bVar10, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_139.f_608);
	*(&Local_139 + 612[106]) = { -4002.349f, 29.01959f, 3021.651f };
	*(&Local_139 + 612[106] + 12) = { 0.0f, -162.2583f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R2", -4002.349f, 29.01959f, 3021.651f, 0.0f, -162.2583f, 0.0f);
	DECOR_SET_INT(bVar11, "type", true);
	DECOR_SET_INT(bVar11, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_139.f_608);
	*(&Local_139 + 612[116]) = { -4057.751f, 31.05945f, 2946.249f };
	*(&Local_139 + 612[116] + 12) = { 0.0f, -154.4442f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R3", -4057.751f, 31.05945f, 2946.249f, 0.0f, -154.4442f, 0.0f);
	DECOR_SET_INT(bVar12, "type", true);
	DECOR_SET_INT(bVar12, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_139.f_608);
	*(&Local_139 + 612[126]) = { -4100.566f, 36.033f, 2951.007f };
	*(&Local_139 + 612[126] + 12) = { 0.0f, -30.722f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R4", -4100.566f, 36.033f, 2951.007f, 0.0f, -30.722f, 0.0f);
	DECOR_SET_INT(bVar13, "type", true);
	DECOR_SET_INT(bVar13, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_139.f_608);
	*(&Local_139 + 612[136]) = { -3876.843f, 32.05772f, 2919.324f };
	*(&Local_139 + 612[136] + 12) = { 0.0f, 7.837425f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R5", -3876.843f, 32.05772f, 2919.324f, 0.0f, 7.837425f, 0.0f);
	DECOR_SET_INT(bVar14, "type", true);
	DECOR_SET_INT(bVar14, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_139.f_608);
	*(&Local_139 + 612[146]) = { -3980.426f, 31.92f, 2918.468f };
	*(&Local_139 + 612[146] + 12) = { 0.0f, 166.8512f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_S1", -3980.426f, 31.92f, 2918.468f, 0.0f, 166.8512f, 0.0f);
	DECOR_SET_INT(bVar15, "type", true);
	DECOR_SET_INT(bVar15, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_139.f_608);
	Local_139.f_976 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagsSet", Local_139, 8, 0);
	*(&Local_139 + 980[06]) = { -4001.357f, 29.87307f, 3000.578f };
	*(&Local_139 + 980[06] + 12) = { 0.0f, -189.1299f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_139, "Fire_01", -4001.357f, 29.87307f, 3000.578f, 0.0f, -189.1299f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_139.f_976);
	*(&Local_139 + 980[16]) = { -4029.31f, 31.47009f, 2981.517f };
	*(&Local_139 + 980[16] + 12) = { 0.0f, -169.8443f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_139, "Fire_02", -4029.31f, 31.47009f, 2981.517f, 0.0f, -169.8443f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_139.f_976);
	*(&Local_139 + 980[26]) = { -4034.631f, 29.65251f, 2895.888f };
	*(&Local_139 + 980[26] + 12) = { 0.0f, -190.5793f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_139, "Fire_03", -4034.631f, 29.65251f, 2895.888f, 0.0f, -190.5793f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_139.f_976);
	*(&Local_139 + 980[36]) = { -4001.319f, 30.66134f, 2997.191f };
	*(&Local_139 + 980[36] + 12) = { 0.0f, -174.2278f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_139, "Fire_04", -4001.319f, 30.66134f, 2997.191f, 0.0f, -174.2278f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_139.f_976);
	Local_139.f_1080 = CREATE_OBJECTSET_IN_LAYOUT("SmokeFlagsSet", Local_139, 8, 0);
	*(&Local_139 + 1084[06]) = { -4032.712f, 31.72003f, 2974.983f };
	*(&Local_139 + 1084[06] + 12) = { 0.0f, 10.14039f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_139, "Smoke_01", -4032.712f, 31.72003f, 2974.983f, 0.0f, 10.14039f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_139.f_1080);
	*(&Local_139 + 1084[16]) = { -4001.358f, 30.43634f, 2999.567f };
	*(&Local_139 + 1084[16] + 12) = { 0.0f, -190.4364f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_139, "Smoke_02", -4001.358f, 30.43634f, 2999.567f, 0.0f, -190.4364f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_139.f_1080);
	*(&Local_139 + 1084[26]) = { -4034.568f, 30.07458f, 2896.018f };
	*(&Local_139 + 1084[26] + 12) = { 0.0f, 185.9101f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_139, "Smoke_03", -4034.568f, 30.07458f, 2896.018f, 0.0f, 185.9101f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_139.f_1080);
	*(&Local_139 + 1084[36]) = { -4029.104f, 32.14027f, 2982.197f };
	*(&Local_139 + 1084[36] + 12) = { 0.0f, 185.9101f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_139, "Smoke_04", -4029.104f, 32.14027f, 2982.197f, 0.0f, 185.9101f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_139.f_1080);
	Local_139.f_1184 = CREATE_OBJECTSET_IN_LAYOUT(Function_123(), Local_139, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -3968.121f, 28.24396f, 2949.172f, 0.0f, -154.6229f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -3959.014f, 28.38515f, 2955.877f, 0.0f, 47.46111f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "nsit_docks", "nsit_docks", -3991.309f, 29.38124f, 2950.047f, 0.0f, -75.45819f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_yelling", "stand_yelling", -3998.34f, 28.24254f, 2937.194f, 0.0f, -83.68496f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "lean_rail_nospawn", "lean_rail_nospawn", -3980.157f, 31.94822f, 2918.335f, 0.0f, -193.9807f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -3977.331f, 31.92476f, 2918.599f, 0.0f, 158.0413f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand", "smoking_stand", -3976.0f, 28.10947f, 2941.593f, 0.0f, 136.4706f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand1", "smoking_stand", -3978.667f, 28.38855f, 2950.667f, 0.0f, 0.0f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand2", "smoking_stand", -3973.163f, 28.23132f, 2943.95f, 0.0f, 63.86153f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", -3973.718f, 28.28952f, 2946.885f, 0.0f, 47.46111f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "sit_docks2", "nsit_docks", -3959.799f, 29.90312f, 2938.722f, 0.0f, 126.2242f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "sit_docks1", "nsit_docks", -3967.429f, 29.37085f, 2958.278f, 0.0f, 8.960447f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -3975.475f, 29.38147f, 2959.615f, 0.0f, 11.02271f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunkdancing_e_any", "stand_drunkdancing_e_any", -3975.302f, 28.57661f, 2955.806f, 0.0f, -186.7867f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunkdancing_e_any1", "stand_drunkdancing_e_any", -3976.971f, 28.577f, 2955.291f, 0.0f, 207.789f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunkdancing_e_any2", "stand_drunkdancing_e_any", -3978.748f, 28.577f, 2956.0f, 0.0f, -124.1184f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunkdancing_e_any3", "stand_drunkdancing_e_any", -3978.232f, 28.56048f, 2954.646f, 0.0f, -143.2584f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "sit_ground_smoke", "sit_ground_smoke", -3980.0f, 27.8737f, 2936f, 0.0f, 17.90644f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "sit_ground_play_harmonica", "sit_ground_play_harmonica", -3983.531f, 28.054f, 2929.882f, 0.0f, -131.544f, 0.0f), Local_139.f_1184);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "sit_ground_play_harmonica1", "sit_ground_play_harmonica", -3960.192f, 28.13899f, 2952.723f, 0.0f, 57.35302f, 0.0f), Local_139.f_1184);
	Local_139.f_1188 = CREATE_OBJECTSET_IN_LAYOUT(Function_123(), Local_139, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x0", "p_gen_skullPost02x", -3961.855f, 27.977f, 2911.687f, 0.0f, 0.0f, 0.0f, 1), Local_139.f_1188);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x1", "p_gen_skullPost02x", -3958.355f, 28.249f, 2914.858f, 0.0f, 0.0f, 0.0f, 1), Local_139.f_1188);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x2", "p_gen_skullPost02x", -3995.877f, 29.083f, 2969.403f, 0.0f, 0.0f, 0.0f, 1), Local_139.f_1188);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x3", "p_gen_skullPost02x", -3991.971f, 28.951f, 2972.116f, 0.0f, 0.0f, 0.0f, 1), Local_139.f_1188);
	return;
}

void Function_260(int iParam0, int iParam1) //Position: 0x985B / 39003
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

void Function_261(int iParam0) //Position: 0x98A4 / 39076
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_263("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_262(StackVal, 0);
	return;
}

void Function_262(var uParam0, int iParam1) //Position: 0x9916 / 39190
{
	Function_111(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_110(StackVal, iParam1);
	}
	return;
}

bool Function_263(char* cParam0) //Position: 0x9947 / 39239
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_264(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9966 / 39270
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_265() //Position: 0x99A8 / 39336
{
	while (!IS_EXITFLAG_SET())
	{
		Function_32(4945, 3935);
		WAIT(0);
	}
	return;
}

bool Function_266() //Position: 0x99C5 / 39365
{
	return Function_121(2);
}

void Function_267() //Position: 0x99CF / 39375
{
	if (Function_266())
	{
		return;
	}
	Function_277();
	Function_275(&bLocal_39, "MP_CTF", 10, 0);
	Function_275(&bLocal_39, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_269(&bLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_87();
	Function_268();
	return;
}

void Function_268() //Position: 0x9A33 / 39475
{
	while (!Function_121(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_269(int iParam0) //Position: 0x9A4E / 39502
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_274();
	iVar1 = 0;
	if (!Function_7(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_273(iParam0[iVar03], 8);
		}
		else if (Function_272())
		{
			iVar1 = 1;
			Function_273(iParam0[iVar03], 8);
		}
		Function_273(iParam0[iVar03], 16);
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
				Function_273(iParam0[iVar03], 1);
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
							Function_273(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_273(iParam0[iVar03], 2);
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
							Function_273(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_273(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_273(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_273(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_273(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_273(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_273(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_273(iParam0[iVar03], 2);
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
	Function_270();
	return 1;
}

void Function_270() //Position: 0x9DC9 / 40393
{
	if (!Function_271(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_271(int iParam0) //Position: 0x9E09 / 40457
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_272() //Position: 0x9E25 / 40485
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

void Function_273(var uParam0, int iParam1) //Position: 0x9E50 / 40528
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_274() //Position: 0x9E61 / 40545
{
	if (!Function_271(128))
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

var Function_275(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9EA3 / 40611
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_276(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_273(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_276(var uParam0, int iParam1, int iParam2) //Position: 0x9EDB / 40667
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_7(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_273(uParam0[iVar03], 4);
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

void Function_277() //Position: 0x9F9F / 40863
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

