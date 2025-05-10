//Decompiled with MagicRDR v1.0
//Function Count : 287
//Statics Count : 519
//Natives Count : 252
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
	struct<989> Local_139 = { 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
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
	Function_276();
	if (Function_275())
	{
		Function_274();
	}
	else
	{
		if (Function_140())
		{
			Function_139(1);
		}
		else
		{
			Function_138(1);
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			bVar1 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_139, Function_137(), "script_wagon_fire_grave02", *(&Local_139 + 716[iVar06]));
			bVar2 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_139, Function_137(), "fire_comp_smoke_plume", *(&Local_139 + 844[iVar06]));
			if (IS_OBJECT_VALID(bVar1) && IS_OBJECT_VALID(bVar2))
			{
				UNK_0x6745191B(bVar1, 0.0f, 0.0f, 0.0f);
				UNK_0x6745191B(bVar2, 0.0f, 0.0f, 0.0f);
			}
			iVar0++;
		}
		bVar3 = CREATE_WORLD_SECTOR(Local_139, "tumbleweed");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar3))
		{
			WAIT(0);
		}
		iVar4 = 2;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_136(64))
			{
				iVar4 = (iVar4 - 1);
				if (iVar4 <= 0)
				{
					Function_135(64, 0);
					Function_133();
					iVar4 = 2;
				}
			}
			Function_117(&iLocal_490, 0.1f, 0.7f, 12, 1.0f, 1.0f, 1.0f, 0.0f);
			Function_104(&uLocal_388);
			Function_29();
			Function_26();
			WAIT(0);
		}
		Function_24(512);
		Function_20();
		Function_19(Global_83864.f_1284, 0, 1);
	}
	Function_17(&uLocal_388);
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_tum_base01x", 0);
	DISABLE_CHILD_SECTOR("mp_tum_base01x");
	Function_8();
	Function_3();
	RESET_RMPTFX_ALL();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x1C6 / 454
{
	Function_2(uLocal_387);
	return;
}

int Function_2(bool bParam0) //Position: 0x1D3 / 467
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_3() //Position: 0x1E9 / 489
{
	Function_4(&Local_139 + 4);
	RELEASE_LAYOUT_REF(Local_139);
	return;
}

void Function_4(int iParam0) //Position: 0x1FB / 507
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

void Function_5(var uParam0, int iParam1) //Position: 0x221 / 545
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

void Function_6(var uParam0, int iParam1) //Position: 0x34F / 847
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_7(int iParam0, int iParam1) //Position: 0x369 / 873
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8() //Position: 0x386 / 902
{
	Function_16();
	Function_4(&bLocal_39);
	Function_9();
	return;
}

void Function_9() //Position: 0x397 / 919
{
	Function_10();
	return;
}

void Function_10() //Position: 0x3A0 / 928
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

void Function_11(int iParam0, bool bParam1, int iParam2) //Position: 0x4A9 / 1193
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

void Function_12(var uParam0, int iParam1) //Position: 0x4D1 / 1233
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x4E4 / 1252
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_14(bool bParam0) //Position: 0x4F3 / 1267
{
	return Function_15(Global_76905.f_132, bParam0);
}

bool Function_15(var uParam0, bool bParam1) //Position: 0x504 / 1284
{
	return (uParam0 && bParam1) == 0;
}

void Function_16() //Position: 0x511 / 1297
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_17(int iParam0) //Position: 0x550 / 1360
{
	Function_135(64, 0);
	Function_18(iParam0);
	return;
}

void Function_18(int iParam0) //Position: 0x561 / 1377
{
	if (iParam0->f_400 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_400, 0);
		iParam0->f_400 = "";
	}
	return;
}

void Function_19(var uParam0, bool bParam1, bool bParam2) //Position: 0x581 / 1409
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

void Function_20() //Position: 0x5AE / 1454
{
	Function_21(Function_23());
	return;
}

void Function_21(int iParam0) //Position: 0x5BA / 1466
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

bool Function_22(int iParam0) //Position: 0x5E7 / 1511
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_23() //Position: 0x5FE / 1534
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_24(int iParam0) //Position: 0x618 / 1560
{
	Function_25(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_25(var uParam0, int iParam1) //Position: 0x651 / 1617
{
	Function_12(uParam0, iParam1);
	return;
}

void Function_26() //Position: 0x65E / 1630
{
	Function_27(2);
	return;
}

void Function_27(int iParam0) //Position: 0x668 / 1640
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

void Function_28(var uParam0) //Position: 0x69A / 1690
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

void Function_29() //Position: 0x6A9 / 1705
{
	Function_102();
	if (Function_101(1, 1))
	{
		Function_86(StackVal, StackVal, 7829, vLocal_48, 1, 7716);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_81(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_32(5117, 3910);
		Function_30();
	}
	return;
}

void Function_30() //Position: 0x6F4 / 1780
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_31(&Local_12);
	}
	return;
}

void Function_31(int iParam0) //Position: 0x710 / 1808
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

void Function_32(int iParam0, int iParam1) //Position: 0x736 / 1846
{
	Function_33(iParam0, iParam1, 3903);
	return;
}

void Function_33(var uParam0, var uParam1, int iParam2) //Position: 0x747 / 1863
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

void Function_34(var uParam0, var uParam1, int iParam2) //Position: 0x8E0 / 2272
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

bool Function_35(bool bParam0, int iParam1, int iParam2) //Position: 0xA58 / 2648
{
	var uVar0;
	
	return Function_36(bParam0, iParam1, &uVar0, iParam2);
}

int Function_36(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xA69 / 2665
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

bool Function_37(bool bParam0, int iParam1, bool bParam2) //Position: 0xACE / 2766
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_101(iParam1, bParam2);
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

var Function_38(int iParam0) //Position: 0xB4F / 2895
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

bool Function_39(bool bParam0) //Position: 0xE68 / 3688
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

void Function_40(bool bParam0) //Position: 0xF09 / 3849
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_11(16384, 0, 1);
	return;
}

bool Function_41() //Position: 0xF23 / 3875
{
	return Function_14(32768);
}

void Function_42() //Position: 0xF30 / 3888
{
	Function_11(32768, 1, 0);
	return;
}

int Function_43() //Position: 0xF3F / 3903
{
	return 1;
}

int Function_44(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xF46 / 3910
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	Function_61(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_60(bParam0);
	bVar2 = Function_59(bParam0);
	bVar3 = Function_56(bParam0);
	iVar4 = Function_55(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_35(bParam0, iVar4, 0);
	}
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_53(34, bParam0));
		bVar0++;
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_14(4))
	{
		if (Function_50(bParam0, 1, 1))
		{
			if (Function_47(bParam0))
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
		Function_46(bVar0, bParam0);
	}
	if (Function_47(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	if (Function_41() && Function_45())
	{
	}
	return 0;
}

bool Function_45() //Position: 0x1049 / 4169
{
	return (Function_14(4096) || Function_14(4));
}

void Function_46(bool bParam0, bool bParam1) //Position: 0x105A / 4186
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

bool Function_47(bool bParam0) //Position: 0x108D / 4237
{
	if (Function_49(bParam0, 1, 0) != 4294967295 && Function_48() != 4294967295)
	{
		return 0;
	}
	return Function_49(bParam0, 1, 0) != Function_48();
}

int Function_48() //Position: 0x10B5 / 4277
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_49(GET_LOCAL_SLOT(), 1, 0);
}

int Function_49(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10CC / 4300
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

bool Function_50(bool bParam0, int iParam1, bool bParam2) //Position: 0x1110 / 4368
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_52(iParam1, bParam2);
	}
	if (!Function_39(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_51(iParam1), 64);
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

var Function_51(int iParam0) //Position: 0x1191 / 4497
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

var Function_52(int iParam0, bool bParam1) //Position: 0x1283 / 4739
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_53(int iParam0, bool bParam1) //Position: 0x12A3 / 4771
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_54(iParam0);
	}
	if (!Function_39(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_54(int iParam0) //Position: 0x1311 / 4881
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_55(int iParam0, int iParam1, int iParam2) //Position: 0x132A / 4906
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_56(int iParam0) //Position: 0x133F / 4927
{
	return Function_57(0, iParam0);
}

int Function_57(int iParam0, bool bParam1) //Position: 0x134B / 4939
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_58(iParam0);
	}
	if (!Function_39(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_58(int iParam0) //Position: 0x13B2 / 5042
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_59(bool bParam0) //Position: 0x13C2 / 5058
{
	return Function_53(12, bParam0);
}

int Function_60(int iParam0) //Position: 0x13CF / 5071
{
	return Function_53(11, iParam0);
}

void Function_61(bool bParam0, int iParam1, char* cParam2) //Position: 0x13DC / 5084
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

int Function_62() //Position: 0x13FD / 5117
{
	if (!Function_76(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_headshots");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_bagcaptures");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_75();
	Function_63();
	return 1;
}

void Function_63() //Position: 0x1499 / 5273
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
		Function_64(0, 0);
		Function_64(1, 0);
	}
	return;
}

void Function_64(bool bParam0, bool bParam1) //Position: 0x14C4 / 5316
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_48())
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
		Function_65(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_65(int iParam0, int iParam1, bool bParam2) //Position: 0x1563 / 5475
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_41())
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
		if (Function_45())
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

struct<16> Function_66(var uParam0, var uParam1) //Position: 0x1656 / 5718
{
	return StackVal, StackVal, StackVal, Function_67(Function_68(uParam0), uParam1);
}

struct<16> Function_67(bool bParam0, bool bParam1) //Position: 0x1668 / 5736
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

int Function_68(int iParam0) //Position: 0x169D / 5789
{
	if (!Function_69())
	{
		return 0;
	}
	return StackVal;
}

bool Function_69() //Position: 0x16B6 / 5814
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_70(int iParam0) //Position: 0x16C3 / 5827
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_71() //Position: 0x16DF / 5855
{
	return Function_48() == 4294967295;
}

bool Function_72() //Position: 0x16EA / 5866
{
	return Function_73(2);
}

int Function_73(int iParam0) //Position: 0x16F4 / 5876
{
	return Function_74(&Global_79349, iParam0);
}

int Function_74(var uParam0, bool bParam1) //Position: 0x1703 / 5891
{
	return Function_15(uParam0->f_44, bParam1);
}

void Function_75() //Position: 0x1712 / 5906
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

bool Function_76(bool bParam0) //Position: 0x174F / 5967
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_41() || Function_80(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_78(1) };
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
	Function_77(Function_41());
	return 1;
}

void Function_77(bool bParam0) //Position: 0x17D0 / 6096
{
	if (bParam0 || Function_14(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_14(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_14(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_14(1048576) || Function_14(4)) || Function_101(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_11(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_78(int iParam0) //Position: 0x1859 / 6233
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_79(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_79(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x186D / 6253
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

int Function_80(bool bParam0, bool bParam1) //Position: 0x18B2 / 6322
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

void Function_81(vector3 vParam0, float fParam3) //Position: 0x18E6 / 6374
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_85(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_85(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_82(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_82(bool bParam0) //Position: 0x1999 / 6553
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
	return Function_83(bVar0);
}

int Function_83(bool bParam0) //Position: 0x19D4 / 6612
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
	Function_84(bVar0);
	return bVar0;
}

void Function_84(bool bParam0) //Position: 0x1A22 / 6690
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_85() //Position: 0x1A35 / 6709
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_86(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x1A64 / 6756
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_87(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 7615, 1, 125, 0, 0, 0);
	Function_87(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_87(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x1AE7 / 6887
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_88(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_88(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x1B32 / 6962
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
			fVar14 = Function_89(iParam0->f_36);
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

var Function_89(float fParam0) //Position: 0x1DB1 / 7601
{
	return (fParam0 * 57.29578f);
}

var Function_90(int iParam0, var uParam1) //Position: 0x1DBF / 7615
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_12.f_96 != iParam0)
	{
		Local_12.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_78(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_91(int iParam0, var uParam1) //Position: 0x1E24 / 7716
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_sym_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_92() //Position: 0x1E95 / 7829
{
	int iVar0;
	
	iVar0 = Function_97(Global_83591.f_140, &vLocal_48, 0.0f, &Global_83591 + 276, 1);
	Function_93(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_93(bool bParam0, int iParam1) //Position: 0x1EC2 / 7874
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_137(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_96((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_96((*iParam1)[iVar202], &iVar21))
		{
			if (Function_94((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_94(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1FD1 / 8145
{
	float fVar0;
	
	if (!Function_95(bParam0))
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

bool Function_95(int iParam0) //Position: 0x20F8 / 8440
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_96(bool bParam0, int iParam1) //Position: 0x210A / 8458
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

var Function_97(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x2166 / 8550
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_99(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_96((*uParam3)[iVar12], &iVar2))
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
		if (Function_96((*uParam3)[iVar12], &iVar2))
		{
			if (Function_98((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_98(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x2254 / 8788
{
	if (!Function_95(bParam0))
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

var Function_99(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x23E5 / 9189
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_100()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_100() //Position: 0x2451 / 9297
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_101(bool bParam0, bool bParam1) //Position: 0x2478 / 9336
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_102() //Position: 0x2498 / 9368
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
						Function_103("CTF_sym_help", 4294967295);
						break;
					
					case 0x00000008:
						Function_103("CTF_one_help", 4294967295);
						break;
					
					case 0x00000007:
						Function_103("CTF_mul_help", 4294967295);
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

void Function_103(char* cParam0, int iParam1) //Position: 0x252D / 9517
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

int Function_104(int iParam0) //Position: 0x25C4 / 9668
{
	int iVar0;
	
	if (!Function_115(*iParam0) || (Function_136(64) && Function_111()))
	{
		iParam0->f_4 = 0;
		Function_18(iParam0);
		if (!Function_115(*iParam0))
		{
		}
		if (Function_136(64))
		{
		}
		return 0;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_115(*iParam0))
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
						(iParam0 + 12[Function_108(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
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
								Function_107((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_106((iParam0 + 12[StackVal5])->f_12, 1);
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
			while (iVar0 <= Function_105(3, iParam0->f_396))
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

int Function_105(int iParam0, bool bParam1) //Position: 0x294B / 10571
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_106(bool bParam0, bool bParam1) //Position: 0x295D / 10589
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

void Function_107(bool bParam0, bool bParam1) //Position: 0x29B1 / 10673
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

int Function_108(var uParam0, var uParam1, int iParam2) //Position: 0x2A02 / 10754
{
	return Function_109(Global_29006, uParam0, uParam1, iParam2);
}

int Function_109(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x2A14 / 10772
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_110(iParam0))
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

bool Function_110(int iParam0) //Position: 0x2AB0 / 10928
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_111() //Position: 0x2AC6 / 10950
{
	return !Function_112();
}

bool Function_112() //Position: 0x2AD0 / 10960
{
	if (Function_114())
	{
		return (Function_113() != 1 || Function_113() != 0);
	}
	return 0;
}

int Function_113() //Position: 0x2AE9 / 10985
{
	return Global_79349.f_16;
}

bool Function_114() //Position: 0x2AF5 / 10997
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_115(int iParam0) //Position: 0x2AFE / 11006
{
	if (!Function_110(iParam0))
	{
		return 1;
	}
	return Function_116(&(Global_29008[iParam0]), 4);
}

int Function_116(var uParam0, bool bParam1) //Position: 0x2B1A / 11034
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_117(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x2B36 / 11062
{
	float fVar0;
	
	if (Function_132())
	{
		if (Function_131(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_127(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_121((iParam0 + 8[iParam0->f_1125])->f_12, 0, iParam3, 0, 0);
				Function_118((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_121((iParam0 + 8[iParam0->f_1125])->f_16, 0, iParam3, 0, 0);
				Function_118((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_118(int iParam0, var uParam1, int iParam2) //Position: 0x2BD9 / 11225
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_120(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_119(iParam2);
	}
	return;
}

void Function_119(int iParam0) //Position: 0x2BFE / 11262
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_120(int iParam0) //Position: 0x2C13 / 11283
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_121(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2C28 / 11304
{
	int iVar0;
	bool bVar1;
	
	Function_126(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_125(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_122(StackVal, bVar1, bParam4);
		}
	}
}

void Function_122(int iParam0, bool bParam1, bool bParam2) //Position: 0x2C9A / 11418
{
	int iVar0;
	
	Function_126(iParam0);
	Function_124(bParam1);
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
	Function_123();
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

void Function_123() //Position: 0x2E13 / 11795
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_124(bool bParam0) //Position: 0x2E1F / 11807
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

void Function_125(int iParam0, int iParam1) //Position: 0x2E65 / 11877
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_126(iParam0);
	Function_124(iVar0);
	PRINTNL();
	Function_122(iParam0, iVar0, iParam1);
	return;
}

void Function_126(int iParam0) //Position: 0x2E8A / 11914
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

float Function_127(int iParam0) //Position: 0x2ED0 / 11984
{
	return -Function_128(iParam0);
}

float Function_128(int iParam0) //Position: 0x2EDC / 11996
{
	if (Function_131(iParam0))
	{
		if (Function_130(iParam0))
		{
			return StackVal;
		}
		Function_129();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_129() //Position: 0x2FAD / 12205
{
	if (!Function_132())
	{
	}
	return;
}

bool Function_130(int iParam0) //Position: 0x2FBA / 12218
{
	return Function_15(*iParam0, 2);
}

bool Function_131(int iParam0) //Position: 0x2FC7 / 12231
{
	return Function_15(*iParam0, 1);
}

bool Function_132() //Position: 0x2FD4 / 12244
{
	return NET_IS_IN_SESSION();
}

void Function_133() //Position: 0x2FDD / 12253
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_137());
	Function_134(bVar0, "bottle", Local_139.f_140);
	Function_134(bVar0, "mug", Local_139.f_140);
	Function_134(bVar0, "glass", Local_139.f_140);
	Function_134(bVar0, "crate14", Local_139.f_140);
	Function_134(bVar0, "crate04", Local_139.f_140);
	Function_134(bVar0, "crate13", Local_139.f_140);
	Function_134(bVar0, "package", Local_139.f_140);
	Function_134(bVar0, "nlantern05", Local_139.f_140);
	Function_134(bVar0, "arm_gunsmith01_flag", Local_139.f_140);
	Function_134(bVar0, "c_gen_blanket15", Local_139.f_140);
	Function_134(bVar0, "c_gen_curtains", Local_139.f_140);
	Function_134(bVar0, "arm_fs01_flag", Local_139.f_140);
	Function_134(bVar0, "c_tes_blanket", Local_139.f_140);
	Function_134(bVar0, "p_gen_bucket02x", Local_139.f_140);
	Function_134(bVar0, "p_gen_bucket03x", Local_139.f_140);
	Function_134(bVar0, "p_gen_wagonwheel01x", Local_139.f_140);
	Function_134(bVar0, "p_gen_basin01x", Local_139.f_140);
	Function_134(bVar0, "p_gen_can01x", Local_139.f_140);
	Function_134(bVar0, "p_gen_can02x", Local_139.f_140);
	Function_134(bVar0, "jar", Local_139.f_140);
	Function_134(bVar0, "book", Local_139.f_140);
	Function_134(bVar0, "p_gen_bedrollclosed01x", Local_139.f_140);
	Function_134(bVar0, "spittoon", Local_139.f_140);
	Function_134(bVar0, "milkcan", Local_139.f_140);
	Function_134(bVar0, "jug", Local_139.f_140);
	Function_134(bVar0, "stool", Local_139.f_140);
	Function_134(bVar0, "chairbroken", Local_139.f_140);
	Function_134(bVar0, "debrisboard", Local_139.f_140);
	Function_134(bVar0, "pot", Local_139.f_140);
	Function_134(bVar0, "chairrocking02", Local_139.f_140);
	Function_134(bVar0, "wagonwheel01", Local_139.f_140);
	Function_134(bVar0, "fencestandard_qpa", Local_139.f_140);
	Function_134(bVar0, "debrispile", Local_139.f_140);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_134(bool bParam0, bool bParam1, bool bParam2) //Position: 0x32D2 / 13010
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_137(), bParam0, 4294967295, 1);
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

void Function_135(int iParam0, bool bParam1) //Position: 0x332B / 13099
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

bool Function_136(int iParam0) //Position: 0x3353 / 13139
{
	return Function_15(StackVal, iParam0);
}

var Function_137() //Position: 0x3366 / 13158
{
	int iVar0;
	
	return iVar0;
}

void Function_138(bool bParam0) //Position: 0x336E / 13166
{
	Function_135(16, bParam0);
	return;
}

void Function_139(var uParam0) //Position: 0x337B / 13179
{
	Function_135(8, uParam0);
	return;
}

bool Function_140() //Position: 0x3388 / 13192
{
	Function_273(&iLocal_490, 0, 9, 30, 1, 1, 0);
	Function_273(&iLocal_490, 1, 9, 30, 3, 3, 3);
	Function_273(&iLocal_490, 2, 12, 0, 1, 1, 0);
	Function_273(&iLocal_490, 3, 12, 0, 0, 0, 1);
	Function_273(&iLocal_490, 4, 23, 0, 2, 2, 1);
	Function_270(&iLocal_490);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_268();
	ENABLE_CHILD_SECTOR("mp_tum_base01x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_tum_base01x", 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_267(512);
	Function_266(Global_83864.f_1284);
	Function_21(997);
	Function_19(Global_83864.f_1284, 0, 1);
	if (!Function_262(Local_139))
	{
		return 0;
	}
	Function_261("FTR_SONG_09", "FTR_SONG_05", 0, 58, 58, 1);
	Function_259(Local_139.f_968);
	Function_252(&Global_83591 + 276, 0);
	Function_250(&Global_83591, 1, 22, 1, 1);
	Function_250(&Global_83591, 2, 5, 10, 1);
	Function_250(&Global_83591, 3, 15, 10, 1);
	Function_250(&Global_83591, 4, 12, 15, 1);
	Function_245(&Global_83591, 1, 19, 8, 1);
	Function_245(&Global_83591, 2, 6, 8, 1);
	Function_245(&Global_83591, 3, 18, 9, 1);
	Function_245(&Global_83591, 4, 13, 8, 1);
	Function_244(&Global_83591);
	Function_243(&Global_83591 + 276, 4);
	Function_242(0, 6);
	Function_242(1, 1);
	if (!Function_238(&uLocal_388))
	{
		return 0;
	}
	Function_141();
	return 1;
}

void Function_141() //Position: 0x34FC / 13564
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 13674);
	uLocal_387 = Function_142("DLCPVP");
	return;
}

var Function_142(bool bParam0) //Position: 0x351A / 13594
{
	bool bVar0;
	
	bVar0 = Function_143();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_143() //Position: 0x352E / 13614
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_144(var uParam0) //Position: 0x356A / 13674
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
			bVar11 = Function_73(16384);
			if (StackVal == bVar12)
			{
				if (Var0.f_32 == 0)
				{
					if (Function_237())
					{
					}
					else
					{
						if (bVar11)
						{
							switch (Function_113())
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
							Function_234(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23122] + 4, &Global_50170[23122] + 8, &Global_50170[23122] + 12, Var0);
							Function_230(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23022] + 4, &Global_50170[23022] + 8, &Global_50170[23022] + 12, Var0);
							Function_147(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
						}
						if (Function_112() || Function_145(4096))
						{
							if (Function_101(131072, 1))
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
			if (bVar11 && !Function_145(2048))
			{
				if (IS_SLOT_VALID(StackVal))
				{
				}
			}
			break;
	}
	return;
}

bool Function_145(int iParam0) //Position: 0x36CE / 14030
{
	return Function_146(Global_79336, iParam0);
}

bool Function_146(var uParam0, bool bParam1) //Position: 0x36DD / 14045
{
	return (uParam0 && bParam1) == 0;
}

void Function_147(struct<29> Param0) //Position: 0x36EA / 14058
{
	var uVar0;
	var uVar1;
	
	uVar0 = "challenge_01lvl2_128";
	uVar1 = "challenge_01_128";
	switch (Param0.f_12)
	{
		case 0x0000001D:
			Function_152(&(Global_50170[22822]), 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_152(&(Global_50170[22922]), 0, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
				if (StackVal == 10)
				{
					SET_WEAPON_GOLD(Function_151(), 29, 1);
					Global_83823[29] = 1;
					Function_148(6002);
					Function_148(6005);
					Function_148(6009);
				}
			}
			if (StackVal == 10)
			{
				Function_148(6001);
				Function_148(6004);
			}
			break;
	}
}

void Function_148(int iParam0) //Position: 0x37CB / 14283
{
	Function_149(iParam0, 1);
	return;
}

void Function_149(int iParam0, bool bParam1) //Position: 0x37D7 / 14295
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_13(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_150((iVar0 % 32)));
	}
	else
	{
		Function_12(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_150((iVar0 % 32)));
	}
	return;
}

int Function_150(bool bParam0) //Position: 0x382D / 14381
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_151() //Position: 0x3839 / 14393
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_152(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0x384E / 14414
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_153(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, 4294967295, iParam8, uParam9);
	}
}

void Function_153(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, int iParam8, var uParam9, var uParam10) //Position: 0x387A / 14458
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_229(uParam0, uParam2, uParam3);
			}
			Function_154(uParam0, iParam1, uParam2, iParam8, 1, uParam3, uParam9, bParam4, uParam5, uParam10);
			break;
		
		case 0x00000001:
			Function_154(uParam0, iParam1, bParam4, iParam8, 2, uParam5, uParam9, bParam6, uParam7, uParam10);
			break;
		
		case 0x00000002:
			Function_154(uParam0, iParam1, bParam6, iParam8, 3, uParam7, uParam9, 0, 0.0f, uParam10);
			break;
	}
}

void Function_154(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, var uParam9) //Position: 0x38F7 / 14583
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = Function_228(*uParam0);
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
					Function_226(uParam0, uParam5, uParam9);
				}
				else
				{
					Function_172(uParam0, iParam4, uParam5, uParam6, uParam9);
					Function_161(uParam0, bVar1, iParam7, fParam8);
				}
			}
		}
		else if (bVar1 > 0)
		{
			uParam0->f_12 = Function_160(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
			if (uParam0->f_12 == fVar0)
			{
				Function_155(*uParam0, uParam0->f_12, 1, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_155(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x39C5 / 14789
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_159(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_158(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_159(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_157(iParam0, 4))
	{
		Function_156(Function_159(iParam0), 0);
	}
}

void Function_156(var uParam0, int iParam1) //Position: 0x3A7C / 14972
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

bool Function_157(int iParam0, bool bParam1) //Position: 0x3AA1 / 15009
{
	return Function_15(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_158(int iParam0) //Position: 0x3AB5 / 15029
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_159(int iParam0) //Position: 0x3AE9 / 15081
{
	return Global_50170[iParam022].f_24;
}

var Function_160(int iParam0, int iParam1) //Position: 0x3AF8 / 15096
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_161(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3B0B / 15115
{
	Function_169(*uParam0);
	Function_162(*uParam0, bParam2, CEIL(bParam3), 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_159(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), 0, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_159(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
}

void Function_162(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3BB0 / 15280
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_168(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_159(iParam0));
	if ((bParam3 && Function_157(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_159(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_167(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_158(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_166(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_165(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_164(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_159(iParam0), &Var7, 0, 2, Function_157(iParam0, 4));
			if (!bParam3)
			{
				Function_163(iParam0, 4);
			}
		}
	}
}

void Function_163(int iParam0, int iParam1) //Position: 0x3C6D / 15469
{
	Function_13(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<16> Function_164(int iParam0) //Position: 0x3C81 / 15489
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_158(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_165(int iParam0) //Position: 0x3CA1 / 15521
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_166(int iParam0) //Position: 0x3CCF / 15567
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_167(int iParam0) //Position: 0x3CFF / 15615
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_168(int iParam0) //Position: 0x3D30 / 15664
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

void Function_169(int iParam0) //Position: 0x3EAE / 16046
{
	Function_170(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_170(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3EC4 / 16068
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_171();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

var Function_171() //Position: 0x3F39 / 16185
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_172(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3F86 / 16262
{
	struct<4> Var0;
	
	Function_225(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_158(*uParam0) };
	Function_220(&Var0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_219(*uParam0, 4);
	Function_173();
}

void Function_173() //Position: 0x3FE4 / 16356
{
	if (!Function_114())
	{
		if (!Function_218(1, 3, 1, 1))
		{
			Function_206(1);
			Function_205(1, 8);
		}
	}
	else
	{
		Function_174(0);
	}
	return;
}

void Function_174(bool bParam0) //Position: 0x400E / 16398
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_203(2);
	if (bParam0)
	{
		Function_203(1);
	}
	else
	{
		Function_202(1);
	}
	Function_175();
	return;
}

void Function_175() //Position: 0x4097 / 16535
{
	Function_200();
	Function_199();
	Function_199();
	Function_198();
	Function_198();
	Function_197();
	Function_197();
	Function_182(0);
	Function_182(0);
	if (!Function_114())
	{
		Function_180();
		Function_179();
		Function_178();
		Function_177();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_176();
	return;
}

void Function_176() //Position: 0x40E9 / 16617
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

void Function_177() //Position: 0x41EF / 16879
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

void Function_178() //Position: 0x4222 / 16930
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

void Function_179() //Position: 0x43B0 / 17328
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

void Function_180() //Position: 0x4564 / 17764
{
	Function_181(&Global_28260, 1, 0);
	return;
}

void Function_181(int iParam0, bool bParam1, int iParam2) //Position: 0x4572 / 17778
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
	
	bVar0 = Function_151();
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

struct<8> Function_182(int iParam0) //Position: 0x4763 / 18275
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
					iVar2 = ((Function_196((50 + iVar4)) + Function_196((183 + iVar4))) + Function_196((90 + iVar4)));
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
	Function_183(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_183(int iParam0, bool bParam1, bool bParam2) //Position: 0x4809 / 18441
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
		Function_195(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_194(iParam0);
	if (bParam2)
	{
		Function_184(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_184(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x4AA4 / 19108
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_193(390))), 32);
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
					bVar19 = (Function_192(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_192(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_190(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_188(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_186(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_185(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_137(), &Var9);
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

var Function_185(int iParam0) //Position: 0x50D1 / 20689
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_186(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x50E2 / 20706
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_187("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_187("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_187("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_187(char* cParam0, bool bParam1) //Position: 0x51D7 / 20951
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_188(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x51F0 / 20976
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_105(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_189(Function_105(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_189(int iParam0, int iParam1) //Position: 0x5255 / 21077
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_190(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x5267 / 21095
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
	if (((Function_191(iParam0) != 19 || Function_191(iParam0) != 17) || Function_191(iParam0) != 10) || Function_191(iParam0) != 9)
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

int Function_191(int iParam0) //Position: 0x5397 / 21399
{
	return Global_35278[iParam020].f_48;
}

float Function_192(int iParam0) //Position: 0x53A6 / 21414
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_193(int iParam0) //Position: 0x53DF / 21471
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_194(int iParam0) //Position: 0x541C / 21532
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

int Function_195(int iParam0, bool bParam1, bool bParam2) //Position: 0x55B6 / 21942
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

int Function_196(bool bParam0) //Position: 0x57FA / 22522
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_197() //Position: 0x583B / 22587
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
		iVar2 = ((Function_196((50 + iVar3) + 15) + Function_196((183 + iVar3) + 15)) + Function_196((90 + iVar3) + 15));
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
	Function_183(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_198() //Position: 0x58C4 / 22724
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
			iVar2 = ((Function_196((50 + iVar3) + 8) + Function_196((183 + iVar3) + 8)) + Function_196((90 + iVar3) + 8));
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
	Function_183(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_199() //Position: 0x595B / 22875
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
		iVar2 = ((Function_196((50 + iVar3)) + Function_196((183 + iVar3))) + Function_196((90 + iVar3)));
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
	Function_183(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_200() //Position: 0x59DA / 23002
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_201(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_183(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_201(int iParam0, bool bParam1, int iParam2) //Position: 0x5A13 / 23059
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
	Function_195(iParam0, bParam1, 1);
	Function_194(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_184(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_202(int iParam0) //Position: 0x5C1D / 23581
{
	Function_25(&Global_79338, iParam0);
	return;
}

void Function_203(int iParam0) //Position: 0x5C2C / 23596
{
	Function_204(&Global_79338, iParam0);
	return;
}

void Function_204(var uParam0, int iParam1) //Position: 0x5C3B / 23611
{
	Function_13(uParam0, iParam1);
	return;
}

void Function_205(var uParam0, int iParam1) //Position: 0x5C48 / 23624
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

void Function_206(bool bParam0) //Position: 0x5C8A / 23690
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_207();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_175();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_12(&Global_63095, 1);
		Function_12(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_207() //Position: 0x5CDB / 23771
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_217())
	{
		Function_214(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_214(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_209(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_209(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_208(StackVal, StackVal, vVar0))
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

bool Function_208(vector3 vParam0) //Position: 0x5D96 / 23958
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_209(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5DAE / 23982
{
	int iVar0;
	
	iVar0 = Function_212(uParam2, uParam3);
	if (Function_211(iVar0))
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
	Function_210();
	return StackVal, StackVal, Function_210();
}

vector3 Function_210() //Position: 0x5E95 / 24213
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_211(int iParam0) //Position: 0x5E9E / 24222
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_212(bool bParam0, bool bParam1) //Position: 0x5EB4 / 24244
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
				fVar2 = Function_213(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_213(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_211(bVar0) && !bParam1)
	{
		bVar0 = Function_212(bParam0, 1);
	}
	return bVar0;
}

float Function_213(vector3 vParam0, vector3 vParam3) //Position: 0x5F7B / 24443
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_214(var uParam0, int iParam1) //Position: 0x5F98 / 24472
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_216(Global_34573, &vVar4);
	if (!Function_215(Global_30640[0]))
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
	if (!Function_215(Global_30640[2]))
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
	if (!Function_215(Global_30640[1]))
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
	if (!Function_215(Global_30658[1]))
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
	if (!Function_215(Global_30658[3]))
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
	if (!Function_215(Global_30658[2]))
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
	if (!Function_215(Global_30658[4]))
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
	if (!Function_215(Global_30668[0]))
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
	if (!Function_215(Global_30668[1]))
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
	if (!Function_215(Global_30668[2]))
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
	if (!Function_215(Global_30679[0]))
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
	if (!Function_215(Global_30685[0]))
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
	if (!Function_215(Global_30685[1]))
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
	if (!Function_215(Global_30685[2]))
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
	if (!Function_215(Global_30693[0]))
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
	if (!Function_215(Global_30693[1]))
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
	if (!Function_215(Global_30693[2]))
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
	if (!Function_215(Global_30707[2]))
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
	if (!Function_215(Global_30707[3]))
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
	if (!Function_215(Global_30707[0]))
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
	if (!Function_215(Global_30717[0]))
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
	if (!Function_215(Global_30723[2]))
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
	if (!Function_215(Global_30723[1]))
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
	if (!Function_215(Global_30723[0]))
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
	if (!Function_215(Global_30679[1]))
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
	if (!Function_215(Global_30707[1]))
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
	if (Function_208(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_215(int iParam0) //Position: 0x67BD / 26557
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_15(uVar0, 0x1000000) || Function_15(uVar0, 0x2000000)) || Function_15(uVar0, 0x4000000)) || !Function_15(uVar0, 0x10000000));
}

void Function_216(bool bParam0, int iParam1) //Position: 0x67F8 / 26616
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_217() //Position: 0x6805 / 26629
{
	if (Function_15(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_218(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x6820 / 26656
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

void Function_219(int iParam0, int iParam1) //Position: 0x68C4 / 26820
{
	Function_12(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_220(bool bParam0, bool bParam1, bool bParam2) //Position: 0x68D8 / 26840
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_85();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_224(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_223(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_222(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_221(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_224(), iVar1 + 1);
	return;
}

struct<16> Function_221(int iParam0) //Position: 0x694A / 26954
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_222(int iParam0) //Position: 0x696B / 26987
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_223(int iParam0) //Position: 0x698C / 27020
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_224() //Position: 0x69AD / 27053
{
	return "CQueue_Count";
}

void Function_225(bool bParam0, bool bParam1) //Position: 0x69C2 / 27074
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_171();
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

void Function_226(var uParam0, bool bParam1, bool bParam2) //Position: 0x6B0E / 27406
{
	Function_225(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_159(*uParam0), 1.0f, 0, 0);
	Function_227(*uParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_220(&Global_50170[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_173();
	return;
}

void Function_227(int iParam0, int iParam1) //Position: 0x6B73 / 27507
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_168(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_159(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_167(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_158(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_164(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_159(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_159(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_159(iParam0), 1.0f, 0, 0);
	}
	return;
}

float Function_228(int iParam0) //Position: 0x6BF5 / 27637
{
	return Global_50170[iParam022].f_12;
}

void Function_229(var uParam0, bool bParam1, bool bParam2) //Position: 0x6C04 / 27652
{
	Function_169(*uParam0);
	if (!Function_157(*uParam0, 2))
	{
		Function_162(*uParam0, bParam1, CEIL(bParam2), 0);
		Function_163(*uParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_159(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_230(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0x6C41 / 27713
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_228(230);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3))
					{
						if (!Function_47(Param3) && Param3.f_12 != 29)
						{
							if (Function_146(Param3.f_40, 1048576))
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
					Function_232(230, 150, Function_233(), 4294967295);
					Function_148(6007);
					Function_148(6008);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_231(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_155(230, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_231(var uParam0, bool bParam1, int iParam2) //Position: 0x6D03 / 27907
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(iParam2));
	return;
}

void Function_232(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6D1B / 27931
{
	Function_225(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_159(iParam0), 1.0f, 0, 0);
	Function_227(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_148(iParam3);
	}
	Function_220(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_173();
}

bool Function_233() //Position: 0x6D81 / 28033
{
	return "MP_TrickShot_Icon_128";
}

void Function_234(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0x6D9F / 28063
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_228(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 1)
				{
					Function_235(231, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 3, 100, Function_236(), 4294967295);
					*uParam2 = 0.0f;
					bVar0 = false;
					Function_148(6006);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_231(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_155(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_228(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 3)
				{
					Function_232(231, 100, Function_236(), 4294967295);
					Function_148(6003);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_231(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_155(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_235(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, int iParam12) //Position: 0x6EC7 / 28359
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_158(uParam0) };
	Function_220(&Var0, uParam7, bParam11);
	*uParam1 = uParam2;
	*uParam3 = uParam4;
	Function_231(&uParam5, uParam8, uParam9);
	Function_155(uParam0, uParam5, uParam6, uParam8, 4294967295, 4294967295);
	Function_162(uParam0, uParam9, uParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_148(iParam12);
	}
	Function_219(uParam0, 4);
	Function_173();
}

var Function_236() //Position: 0x6F3D / 28477
{
	return "MP_Revenge_Icon_128";
}

bool Function_237() //Position: 0x6F59 / 28505
{
	if (Function_145(2048))
	{
		if ((IntToFloat(ABS(CEIL(GET_CURRENT_UNWARPED_TIME()))) - Global_78617.f_56) >= 3.0f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_238(bool bParam0) //Position: 0x6F83 / 28547
{
	if (!Function_241(bParam0, Global_30658[0]))
	{
		return 0;
	}
	Function_239(bParam0, "tumbleweed", "church", 1, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "church", 2, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "saloon", 1, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "saloon", 2, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "saloon", 3, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "saloon", 4, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "saloon", 5, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "ruinedHome", 97, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "ruinedHome", 98, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "mansion", 1, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "mansion", 2, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "mansion", 3, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "mansion", 4, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "mansion", 5, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "mansion", 7, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "mansion", 8, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "mansion", 9, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "mansion", 10, 1, 0, 1, 1);
	Function_239(bParam0, "tumbleweed", "mansion", 11, 1, 0, 1, 1);
	return 1;
}

int Function_239(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x7226 / 29222
{
	int iVar0;
	
	iVar0 = iParam0->f_396;
	if (!Function_240(iParam0, uParam1, uParam2, iParam3))
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

bool Function_240(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7297 / 29335
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

bool Function_241(int iParam0, int iParam1) //Position: 0x72F3 / 29427
{
	int iVar0;
	
	if (!Function_110(iParam1))
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

void Function_242(int iParam0, int iParam1) //Position: 0x7369 / 29545
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_243(int iParam0, int iParam1) //Position: 0x7377 / 29559
{
	(iParam0 + 228)->f_220 = 0;
	Function_13(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_244(int iParam0) //Position: 0x738F / 29583
{
	iParam0->f_844 = 0;
	return;
}

void Function_245(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x739B / 29595
{
	Function_246(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_246(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x73B3 / 29619
{
	Function_247(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_247(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x73CA / 29642
{
	if (!Function_249(iParam1))
	{
		return;
	}
	Function_248(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_248(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x73ED / 29677
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

bool Function_249(int iParam0) //Position: 0x7417 / 29719
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_250(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x7427 / 29735
{
	Function_251(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_251(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x743F / 29759
{
	Function_247(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_252(int iParam0, bool bParam1) //Position: 0x7454 / 29780
{
	Function_256(iParam0);
	Function_256(iParam0 + 228);
	if (bParam1)
	{
		Function_253(iParam0);
	}
	return;
}

void Function_253(int iParam0) //Position: 0x7470 / 29808
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_254(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_254(var uParam0, int iParam1) //Position: 0x7490 / 29840
{
	Function_255(uParam0, iParam1, 0);
	return;
}

void Function_255(int iParam0, int iParam1, int iParam2) //Position: 0x749E / 29854
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_256(int iParam0) //Position: 0x74AF / 29871
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_258(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_257(iParam0, 0.0f);
	return;
}

void Function_257(var uParam0, int iParam1) //Position: 0x74DC / 29916
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_258(int iParam0) //Position: 0x74E8 / 29928
{
	Function_248(iParam0, 4294967295, 0, 1);
	return;
}

void Function_259(bool bParam0) //Position: 0x74F6 / 29942
{
	DECOR_SET_OBJECT(Function_260(), "LobbyGringoSet", bParam0);
	return;
}

var Function_260() //Position: 0x7516 / 29974
{
	return Global_83591.f_140;
}

void Function_261(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x7522 / 29986
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

bool Function_262(int iParam0) //Position: 0x75B2 / 30130
{
	Function_265(iParam0);
	if (Function_264())
	{
		Function_243(&Global_83591 + 276, 2);
	}
	Function_263();
	vLocal_48 = { StackVal, StackVal, Function_263() };
	return 1;
}

vector3 Function_263() //Position: 0x75D6 / 30166
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_260();
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

bool Function_264() //Position: 0x761E / 30238
{
	return Function_15(Global_79962, 1024);
}

void Function_265(int iParam0) //Position: 0x762E / 30254
{
	Global_83591.f_140 = iParam0;
	return;
}

void Function_266(int iParam0) //Position: 0x763C / 30268
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

void Function_267(var uParam0) //Position: 0x766B / 30315
{
	Function_204(&Global_79336, uParam0);
	if (uParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_268() //Position: 0x76C4 / 30404
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
	
	Function_269(4, 1);
	uVar0 = uVar0;
	Local_139 = CREATE_LAYOUT("CTF_TUM_layout");
	Local_139.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_139, "v_clear_vol", 2, -3989.527f, 34.15663f, 2956.346f, 0.0f, 0.0f, 0.0f, 280.9203f, 31.6715f, 226.9813f);
	Local_139.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_139, "playablespace", 2, -3984.045f, 28.1865f, 2935.856f, 0.0f, 29.50395f, 0.0f, 313.6283f, 118.8916f, 313.6283f);
	CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_A", 3, -4084.014f, 35.55047f, 2963.919f, -175.8324f, 125.2337f, -179.3521f, 1.0f, 1.0f, 1.0f);
	Local_139.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_139, "CapVol_B", 3, -3895.516f, 30.69005f, 2941.172f, 0.0f, -81.17687f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_139.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A0", 3, -4108.955f, 36.08363f, 2944.417f, 0.0f, -328.2444f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_139.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A1", 3, -4082.7f, 35.99003f, 2925.454f, 0.0f, -246.8878f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_139.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A2", 3, -4085.991f, 33.12941f, 2978.009f, 0.0f, -270.814f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_139.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A3", 3, -4062.121f, 31.47573f, 2953.883f, 0.0f, -229.7489f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_139.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A4", 3, -4087.339f, 37.30981f, 2944.71f, 0.0f, -298.6223f, 0.0f, 1.0f, 1.835f, 1.0f);
	Local_139.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A5", 3, -4034.632f, 28.33999f, 2887.992f, 0.0f, -255.8736f, 0.0f, 2.04861f, 7.952068f, 2.05911f);
	Local_139.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A6", 3, -4029.627f, 29.13394f, 3000.005f, 0.0f, -267.7469f, 0.0f, 2.855954f, 7.952068f, 3.094849f);
	Local_139.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A7", 3, -3998.111f, 28.44233f, 3045.889f, 0.0f, 92.45757f, 0.0f, 1.0f, 1.835f, 1.0f);
	Local_139.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_A8", 3, -4011.854f, 29.32868f, 2917.966f, 0.0f, 91.38497f, 0.0f, 1.0f, 1.135948f, 1.0f);
	Local_139.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B0", 3, -3885.978f, 31.12165f, 2921.954f, 0.0f, -35.22628f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_139.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B1", 3, -3914.113f, 31.10008f, 2905.887f, 0.0f, -131.5188f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_139.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B2", 3, -3917.9f, 29.04491f, 2945.788f, 0.0f, -81.52227f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_139.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B3", 3, -3875.934f, 30.87167f, 2939.441f, 0.0f, -88.94263f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_139.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B4", 3, -3898.25f, 31.82174f, 2921.265f, 0.0f, -16.44685f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_139.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B5", 3, -3963.099f, 25.09815f, 2861.149f, 0.0f, 285.5432f, 0.0f, 2.892f, 2.892f, 2.892f);
	Local_139.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B6", 3, -3958.322f, 28.45498f, 2980.139f, 0.0f, 270.8492f, 0.0f, 3.909f, 3.909f, 3.909f);
	Local_139.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B7", 3, -3975.997f, 27.82765f, 3045.696f, 0.0f, -88.78374f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_139.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_139, "T_SpawnVol_B8", 3, -3975.292f, 27.70122f, 2901.259f, 0.0f, -150.6103f, 0.0f, 1.0f, 1.0f, 1.0f);
	*(&Local_139 + 224) = { -3980.771f, 28.23987f, 2944.13f };
	*(&Local_139 + 224 + 12) = { 0.0f, 46.94275f, 0.0f };
	Local_139.f_248 = CREATE_POINT_IN_LAYOUT(Local_139, "Showdown_A", -3980.771f, 28.23987f, 2944.13f, 0.0f, 46.94275f, 0.0f);
	*(&Local_139 + 252) = { -3973.625f, 28.30903f, 2947.884f };
	*(&Local_139 + 252 + 12) = { 0.0f, 48.62234f, 0.0f };
	Local_139.f_276 = CREATE_POINT_IN_LAYOUT(Local_139, "Showdown_B", -3973.625f, 28.30903f, 2947.884f, 0.0f, 48.62234f, 0.0f);
	*(&Local_139 + 280) = { -4002.275f, 23.59212f, 2841.725f };
	*(&Local_139 + 280 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_304 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_0", -4002.275f, 23.59212f, 2841.725f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 308) = { -4000f, 26.10194f, 2893.71f };
	*(&Local_139 + 308 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_332 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_1", -4000f, 26.10194f, 2893.71f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 336) = { -3994.614f, 28.76332f, 2985.386f };
	*(&Local_139 + 336 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_139.f_360 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_2", -3994.614f, 28.76332f, 2985.386f, 0.0f, 0.0f, 0.0f);
	*(&Local_139 + 364) = { -3989.75f, 28.2689f, 3025.751f };
	*(&Local_139 + 364 + 12) = { 0.0f, 178.9478f, 0.0f };
	Local_139.f_388 = CREATE_POINT_IN_LAYOUT(Local_139, "FlagSpawn_3", -3989.75f, 28.2689f, 3025.751f, 0.0f, 178.9478f, 0.0f);
	Local_139.f_392 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_139, 8, 0);
	*(&Local_139 + 396[06]) = { -4009.0f, 26.11f, 2877.946f };
	*(&Local_139 + 396[06] + 12) = { 0.0f, -14.22334f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_D1", -4009.0f, 26.11f, 2877.946f, 0.0f, -14.22334f, 0.0f);
	DECOR_SET_INT(bVar1, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_139.f_392);
	*(&Local_139 + 396[16]) = { -3987.682f, 28.53747f, 2990.951f };
	*(&Local_139 + 396[16] + 12) = { 0.0f, 189.4556f, -3.901524f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_D2", -3987.682f, 28.53747f, 2990.951f, 0.0f, 189.4556f, -3.901524f);
	DECOR_SET_INT(bVar2, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_139.f_392);
	*(&Local_139 + 396[26]) = { -3982.426f, 27.828f, 3041.724f };
	*(&Local_139 + 396[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_S1", -3982.426f, 27.828f, 3041.724f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar3, "type", true);
	DECOR_SET_INT(bVar3, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_139.f_392);
	*(&Local_139 + 396[36]) = { -3994.41f, 28.773f, 2921.027f };
	*(&Local_139 + 396[36] + 12) = { 0.0f, 30.14622f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_B1", -3994.41f, 28.773f, 2921.027f, 0.0f, 30.14622f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_139.f_392);
	*(&Local_139 + 396[46]) = { -3994.135f, 29.365f, 2950.788f };
	*(&Local_139 + 396[46] + 12) = { 0.0f, -74.35629f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_B2", -3994.135f, 29.365f, 2950.788f, 0.0f, -74.35629f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_139.f_392);
	*(&Local_139 + 396[56]) = { -4047.916f, 30.506f, 2944.616f };
	*(&Local_139 + 396[56] + 12) = { 0.0f, -158.3264f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P1", -4047.916f, 30.506f, 2944.616f, 0.0f, -158.3264f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_139.f_392);
	*(&Local_139 + 396[66]) = { -3945.524f, 30.01958f, 2935.4f };
	*(&Local_139 + 396[66] + 12) = { 0.0f, -53.70205f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_P2", -3945.524f, 30.01958f, 2935.4f, 0.0f, -53.70205f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_139.f_392);
	*(&Local_139 + 396[76]) = { -4092.768f, 36.48504f, 2916.069f };
	*(&Local_139 + 396[76] + 12) = { 0.0f, -38.02159f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R1", -4092.768f, 36.48504f, 2916.069f, 0.0f, -38.02159f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_139.f_392);
	*(&Local_139 + 396[86]) = { -4067.25f, 32.377f, 2982.104f };
	*(&Local_139 + 396[86] + 12) = { 0.0f, 224.5248f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R2", -4067.25f, 32.377f, 2982.104f, 0.0f, 224.5248f, 0.0f);
	DECOR_SET_INT(bVar9, "type", true);
	DECOR_SET_INT(bVar9, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_139.f_392);
	*(&Local_139 + 396[96]) = { -3949.536f, 25.098f, 2878.464f };
	*(&Local_139 + 396[96] + 12) = { 0.0f, 90.12f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R3", -3949.536f, 25.098f, 2878.464f, 0.0f, 90.12f, 0.0f);
	DECOR_SET_INT(bVar10, "type", true);
	DECOR_SET_INT(bVar10, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_139.f_392);
	*(&Local_139 + 396[106]) = { -3953.404f, 28.106f, 2983.752f };
	*(&Local_139 + 396[106] + 12) = { 0.0f, 52.02f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_R4", -3953.404f, 28.106f, 2983.752f, 0.0f, 52.02f, 0.0f);
	DECOR_SET_INT(bVar11, "type", true);
	DECOR_SET_INT(bVar11, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_139.f_392);
	*(&Local_139 + 396[116]) = { -4020.894f, 27.94808f, 2929.908f };
	*(&Local_139 + 396[116] + 12) = { 0.0f, -175.385f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_A1", -4020.894f, 27.94808f, 2929.908f, 0.0f, -175.385f, 0.0f);
	DECOR_SET_INT(bVar12, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_139.f_392);
	*(&Local_139 + 396[126]) = { -3967.399f, 28.53813f, 2946.341f };
	*(&Local_139 + 396[126] + 12) = { 0.0f, 369.2129f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_139, "npickup_A2", -3967.399f, 28.53813f, 2946.341f, 0.0f, 369.2129f, 0.0f);
	DECOR_SET_INT(bVar13, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_139.f_392);
	Local_139.f_712 = CREATE_OBJECTSET_IN_LAYOUT("FireFlagsSet", Local_139, 8, 0);
	*(&Local_139 + 716[06]) = { -4001.335f, 29.87307f, 3000.631f };
	*(&Local_139 + 716[06] + 12) = { 0.0f, -189.1299f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_139, "Fire_01", -4001.335f, 29.87307f, 3000.631f, 0.0f, -189.1299f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_139.f_712);
	*(&Local_139 + 716[16]) = { -4001.294f, 30.66134f, 2997.132f };
	*(&Local_139 + 716[16] + 12) = { 0.0f, -183.5602f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_139, "Fire_02", -4001.294f, 30.66134f, 2997.132f, 0.0f, -183.5602f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_139.f_712);
	*(&Local_139 + 716[26]) = { -4034.648f, 29.65251f, 2895.94f };
	*(&Local_139 + 716[26] + 12) = { 0.0f, -193.2914f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_139, "Fire_03", -4034.648f, 29.65251f, 2895.94f, 0.0f, -193.2914f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_139.f_712);
	*(&Local_139 + 716[36]) = { -4029.586f, 31.47009f, 2981.539f };
	*(&Local_139 + 716[36] + 12) = { 0.0f, -165.8647f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_139, "Fire_04", -4029.586f, 31.47009f, 2981.539f, 0.0f, -165.8647f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_139.f_712);
	*(&Local_139 + 716[46]) = { -4035.023f, 29.64f, 2924.716f };
	*(&Local_139 + 716[46] + 12) = { 0.0f, -165.8647f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_139, "Fire_05", -4035.023f, 29.64f, 2924.716f, 0.0f, -165.8647f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_139.f_712);
	Local_139.f_840 = CREATE_OBJECTSET_IN_LAYOUT("SmokeFlagsSet", Local_139, 8, 0);
	*(&Local_139 + 844[06]) = { -4032.712f, 31.72003f, 2974.983f };
	*(&Local_139 + 844[06] + 12) = { 0.0f, 10.14039f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_139, "Smoke_01", -4032.712f, 31.72003f, 2974.983f, 0.0f, 10.14039f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_139.f_840);
	*(&Local_139 + 844[16]) = { -4001.219f, 31.14589f, 2999.012f };
	*(&Local_139 + 844[16] + 12) = { 0.0f, -190.4364f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_139, "Smoke_02", -4001.219f, 31.14589f, 2999.012f, 0.0f, -190.4364f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_139.f_840);
	*(&Local_139 + 844[26]) = { -4034.439f, 30.07458f, 2896.005f };
	*(&Local_139 + 844[26] + 12) = { 0.0f, 185.9101f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_139, "Smoke_03", -4034.439f, 30.07458f, 2896.005f, 0.0f, 185.9101f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_139.f_840);
	*(&Local_139 + 844[36]) = { -4029.228f, 32.14027f, 2981.766f };
	*(&Local_139 + 844[36] + 12) = { 0.0f, 185.9101f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_139, "Smoke_04", -4029.228f, 32.14027f, 2981.766f, 0.0f, 185.9101f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_139.f_840);
	*(&Local_139 + 844[46]) = { -4035.023f, 29.64f, 2924.716f };
	*(&Local_139 + 844[46] + 12) = { 0.0f, 185.9101f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_139, "Smoke_05", -4035.023f, 29.64f, 2924.716f, 0.0f, 185.9101f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_139.f_840);
	Local_139.f_968 = CREATE_OBJECTSET_IN_LAYOUT(Function_137(), Local_139, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -3968.121f, 28.24396f, 2949.172f, 0.0f, -154.6229f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -3959.014f, 28.38515f, 2955.877f, 0.0f, 47.46111f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "nsit_docks", "nsit_docks", -3991.309f, 29.38124f, 2950.047f, 0.0f, -75.45819f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_yelling", "stand_yelling", -3998.34f, 28.24254f, 2937.194f, 0.0f, -83.68496f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "lean_rail_nospawn", "lean_rail_nospawn", -3980.157f, 31.94822f, 2918.335f, 0.0f, -193.9807f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -3977.331f, 31.92476f, 2918.599f, 0.0f, 158.0413f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand", "smoking_stand", -3976.0f, 28.10947f, 2941.593f, 0.0f, 136.4706f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand1", "smoking_stand", -3978.667f, 28.38855f, 2950.667f, 0.0f, 0.0f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "smoking_stand2", "smoking_stand", -3973.163f, 28.24901f, 2943.95f, 0.0f, 63.86153f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", -3973.718f, 28.28375f, 2946.885f, 0.0f, 47.46111f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "sit_docks2", "nsit_docks", -3959.799f, 29.90312f, 2938.722f, 0.0f, 126.2242f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "sit_docks1", "nsit_docks", -3967.429f, 29.37085f, 2958.278f, 0.0f, 8.960447f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -3975.268f, 29.38077f, 2959.482f, 0.0f, 11.02271f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunkdancing_e_any", "stand_drunkdancing_e_any", -3975.302f, 28.57661f, 2955.806f, 0.0f, -186.7867f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunkdancing_e_any1", "stand_drunkdancing_e_any", -3976.971f, 28.577f, 2955.291f, 0.0f, 207.789f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunkdancing_e_any2", "stand_drunkdancing_e_any", -3978.232f, 28.577f, 2956.0f, 0.0f, -124.1184f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "stand_drunkdancing_e_any3", "stand_drunkdancing_e_any", -3978.232f, 28.56048f, 2954.646f, 0.0f, -143.2584f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "sit_ground_smoke", "sit_ground_smoke", -3980.0f, 27.8737f, 2936f, 0.0f, 17.90644f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "sit_ground_play_harmonica", "sit_ground_play_harmonica", -3983.531f, 28.054f, 2929.882f, 0.0f, -131.544f, 0.0f), Local_139.f_968);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_139, "sit_ground_play_harmonica1", "sit_ground_play_harmonica", -3960.192f, 28.13899f, 2952.723f, 0.0f, 57.35302f, 0.0f), Local_139.f_968);
	Local_139.f_972 = CREATE_OBJECTSET_IN_LAYOUT(Function_137(), Local_139, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_139, "cannon02x0", "p_gen_cannon02x", -3995.829f, 32.64456f, 2946.92f, 0.0f, 17.38276f, 0.0f, 1), Local_139.f_972);
	Local_139.f_976 = CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x0", "p_gen_skullPost02x", -3961.855f, 27.97745f, 2911.688f, 0.0f, 0.0f, 0.0f, 1);
	Local_139.f_980 = CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x1", "p_gen_skullPost02x", -3958.355f, 28.24875f, 2914.858f, 0.0f, 0.0f, 0.0f, 1);
	Local_139.f_984 = CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x2", "p_gen_skullPost02x", -3995.877f, 29.08297f, 2969.403f, 0.0f, 0.0f, 0.0f, 1);
	Local_139.f_988 = CREATE_PROP_IN_LAYOUT(Local_139, "skullPost02x3", "p_gen_skullPost02x", -3991.97f, 28.95033f, 2972.116f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

void Function_269(int iParam0, int iParam1) //Position: 0x8F1B / 36635
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

void Function_270(int iParam0) //Position: 0x8F64 / 36708
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_272("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], 0));
	Function_271(StackVal, 0);
	return;
}

void Function_271(var uParam0, int iParam1) //Position: 0x8FD6 / 36822
{
	Function_126(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_125(StackVal, iParam1);
	}
	return;
}

bool Function_272(char* cParam0) //Position: 0x9007 / 36871
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_273(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9026 / 36902
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_274() //Position: 0x9068 / 36968
{
	while (!IS_EXITFLAG_SET())
	{
		Function_32(5117, 3910);
		WAIT(0);
	}
	return;
}

bool Function_275() //Position: 0x9085 / 36997
{
	return Function_136(2);
}

void Function_276() //Position: 0x908F / 37007
{
	if (Function_275())
	{
		return;
	}
	Function_286();
	Function_284(&bLocal_39, "MP_CTF", 10, 0);
	Function_284(&bLocal_39, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_278(&bLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_102();
	Function_277();
	return;
}

void Function_277() //Position: 0x90F3 / 37107
{
	while (!Function_136(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

bool Function_278(int iParam0) //Position: 0x910E / 37134
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_283();
	iVar1 = 0;
	if (!Function_7(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_282(iParam0[iVar03], 8);
		}
		else if (Function_281())
		{
			iVar1 = 1;
			Function_282(iParam0[iVar03], 8);
		}
		Function_282(iParam0[iVar03], 16);
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
				Function_282(iParam0[iVar03], 1);
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
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_282(iParam0[iVar03], 2);
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
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_282(iParam0[iVar03], 2);
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
	Function_279();
	return 1;
}

void Function_279() //Position: 0x9489 / 38025
{
	if (!Function_280(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_280(int iParam0) //Position: 0x94C9 / 38089
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_281() //Position: 0x94E5 / 38117
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

void Function_282(var uParam0, int iParam1) //Position: 0x9510 / 38160
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_283() //Position: 0x9521 / 38177
{
	if (!Function_280(128))
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

var Function_284(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9563 / 38243
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_285(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_282(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_285(var uParam0, int iParam1, int iParam2) //Position: 0x959B / 38299
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_7(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_282(uParam0[iVar03], 4);
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

void Function_286() //Position: 0x965F / 38495
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

