//Decompiled with MagicRDR v1.0
//Function Count : 178
//Statics Count : 489
//Natives Count : 182
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
	struct<697> Local_138 = { 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
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
	Function_175();
	if (Function_174())
	{
		Function_173();
	}
	else
	{
		if (Function_129())
		{
			Function_128(1);
		}
		else
		{
			Function_127(1);
		}
		iVar0 = 10;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_126(64))
			{
				iVar0 = (iVar0 - 1);
				if (iVar0 <= 0)
				{
					Function_125(64, 0);
					Function_123();
					iVar0 = 10;
				}
			}
			Function_111(&iLocal_460, 0,1f, 0,7f, 12, 0.0f, 1.0f, 0.0f, 1.0f);
			Function_98(&uLocal_313);
			Function_22();
			WAIT(false);
		}
	}
	Function_20(&uLocal_313);
	Function_11();
	Function_6();
	Function_1(0, 60, 0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC5 / 197
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || StackVal != 12 != 20)
	{
		Global_16524 = Global_16524.f_40;
	}
	else
	{
		Global_16524 = StackVal;
	}
	Global_16524.f_4 = 4294967295;
	Global_16524.f_16 = 0;
	if (!StackVal != Global_16524)
	{
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, bParam2);
		Function_2(Global_16524, bVar0, 1);
	}
	return;
}

void Function_2(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1A2 / 418
{
	int iVar0;
	
	Function_5(bParam0);
	Function_4(bParam1);
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
	Function_3();
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

void Function_3() //Position: 0x31B / 795
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_4(bool bParam0) //Position: 0x327 / 807
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

void Function_5(int iParam0) //Position: 0x36D / 877
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

void Function_6() //Position: 0x3B3 / 947
{
	Function_7(&Local_138 + 4);
	RELEASE_LAYOUT_REF(Local_138);
	return;
}

void Function_7(int iParam0) //Position: 0x3C5 / 965
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_8(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x3EB / 1003
{
	if (Function_10(uParam0[iParam13], 4))
	{
		if (Function_10(uParam0[iParam13], 1))
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
			Function_9(uParam0[iParam13], 1);
			Function_9(uParam0[iParam13], 2);
			Function_9(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_9(var uParam0, int iParam1) //Position: 0x519 / 1305
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(int iParam0, int iParam1) //Position: 0x533 / 1331
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11() //Position: 0x550 / 1360
{
	Function_19();
	Function_7(&bLocal_38);
	Function_12();
	return;
}

void Function_12() //Position: 0x561 / 1377
{
	Function_13();
	return;
}

void Function_13() //Position: 0x56A / 1386
{
	if (Function_17(4194304))
	{
		Function_14(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_17(8388608))
	{
		Function_14(8388608, 0, 1);
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

void Function_14(int iParam0, bool bParam1, int iParam2) //Position: 0x673 / 1651
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_16(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_15(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x69B / 1691
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x6AE / 1710
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_17(bool bParam0) //Position: 0x6BD / 1725
{
	return Function_18(Global_76905.f_132, bParam0);
}

bool Function_18(var uParam0, bool bParam1) //Position: 0x6CE / 1742
{
	return (uParam0 && bParam1) == 0;
}

void Function_19() //Position: 0x6DB / 1755
{
	if (iLocal_45)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_45 = 0;
	}
	return;
}

void Function_20(int iParam0) //Position: 0x71A / 1818
{
	Function_125(64, 0);
	Function_21(iParam0);
	return;
}

void Function_21(int iParam0) //Position: 0x72B / 1835
{
	if (iParam0->f_580 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_580, 0);
		iParam0->f_580 = "";
	}
	return;
}

void Function_22() //Position: 0x74B / 1867
{
	Function_96();
	if (Function_95(1, 1))
	{
		Function_79(StackVal, StackVal, 7748, vLocal_47, 1, 7635);
	}
	else
	{
		if (!iLocal_46)
		{
			iLocal_46 = 1;
			Function_74(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		Function_25(5036, 3928);
		Function_23();
	}
	return;
}

void Function_23() //Position: 0x796 / 1942
{
	if (IS_OBJECT_VALID(Local_11.f_104))
	{
		DESTROY_OBJECT(Local_11.f_104);
		Function_24(&Local_11);
	}
	return;
}

void Function_24(int iParam0) //Position: 0x7B2 / 1970
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

void Function_25(int iParam0, int iParam1) //Position: 0x7D8 / 2008
{
	Function_26(iParam0, iParam1, 3921);
	return;
}

void Function_26(var uParam0, var uParam1, int iParam2) //Position: 0x7E9 / 2025
{
	if (Function_17(0x4000000))
	{
		Function_35();
		Function_14(0x4000000, 0, 1);
	}
	if (Function_17(0x10000000))
	{
		Function_35();
		Function_14(0x10000000, 0, 1);
	}
	if (Function_17(2) != Function_17(0x2000000))
	{
		Function_35();
		Function_14(0x2000000, Function_17(2), 1);
	}
	if (Function_34())
	{
		Function_33(!Function_17(16));
	}
	if (Function_17(16))
	{
		Function_27(&uParam0, &uParam1, &iParam2);
		if (Function_17(8192))
		{
			if (!Function_17(4194304))
			{
				Function_14(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_17(8388608))
			{
				Function_14(8388608, 1, 1);
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
			Function_13();
		}
		Function_14(16384, 1, 1);
	}
	else if (!Function_17(32))
	{
		Function_13();
	}
	Function_14(32768, 0, 1);
	return;
}

void Function_27(var uParam0, var uParam1, int iParam2) //Position: 0x982 / 2434
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_14(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_17(0x40000000);
	bVar3 = !Function_17(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_32(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_30(bVar1, 2048, 1))
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
				if (Function_28(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_17(4))
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
			if (Function_28(bVar1, (4294966296 - bVar1), 1))
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

bool Function_28(bool bParam0, int iParam1, int iParam2) //Position: 0xAFA / 2810
{
	var uVar0;
	
	return Function_29(bParam0, iParam1, &uVar0, iParam2);
}

int Function_29(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xB0B / 2827
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

bool Function_30(bool bParam0, int iParam1, bool bParam2) //Position: 0xB70 / 2928
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_95(iParam1, bParam2);
	}
	if (!Function_32(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_31(iParam1), 64);
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

var Function_31(int iParam0) //Position: 0xBF1 / 3057
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

bool Function_32(bool bParam0) //Position: 0xE7A / 3706
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

void Function_33(bool bParam0) //Position: 0xF1B / 3867
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_14(16384, 0, 1);
	return;
}

bool Function_34() //Position: 0xF35 / 3893
{
	return Function_17(32768);
}

void Function_35() //Position: 0xF42 / 3906
{
	Function_14(32768, 1, 0);
	return;
}

int Function_36() //Position: 0xF51 / 3921
{
	return 1;
}

int Function_37(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xF58 / 3928
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	Function_54(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_53(bParam0);
	bVar2 = Function_52(bParam0);
	bVar3 = Function_49(bParam0);
	iVar4 = Function_48(bVar3, bVar1, bVar2);
	if (!bParam1)
	{
		Function_28(bParam0, iVar4, 0);
	}
	if (!bParam1)
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar1);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar2);
		bVar0++;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_46(34, bParam0));
		bVar0++;
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, bVar3);
	bVar0++;
	if (!Function_17(4))
	{
		if (Function_43(bParam0, 1, 1))
		{
			if (Function_40(bParam0))
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
		Function_39(bVar0, bParam0);
	}
	if (Function_40(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	if (Function_34() && Function_38())
	{
	}
	return 0;
}

bool Function_38() //Position: 0x105B / 4187
{
	return (Function_17(4096) || Function_17(4));
}

void Function_39(bool bParam0, bool bParam1) //Position: 0x106C / 4204
{
	if (Function_17(4))
	{
		if (Function_30(bParam1, 1024, 1))
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

bool Function_40(bool bParam0) //Position: 0x109F / 4255
{
	if (Function_42(bParam0, 1, 0) != 4294967295 && Function_41() != 4294967295)
	{
		return 0;
	}
	return Function_42(bParam0, 1, 0) != Function_41();
}

int Function_41() //Position: 0x10C7 / 4295
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_42(GET_LOCAL_SLOT(), 1, 0);
}

int Function_42(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10DE / 4318
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_32(bParam0))
			{
				if (!Function_30(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_43(bool bParam0, int iParam1, bool bParam2) //Position: 0x1122 / 4386
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_45(iParam1, bParam2);
	}
	if (!Function_32(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_44(iParam1), 64);
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

var Function_44(int iParam0) //Position: 0x11A3 / 4515
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

var Function_45(int iParam0, bool bParam1) //Position: 0x1232 / 4658
{
	int iVar0;
	
	iVar0 = (Global_78480.f_128 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_46(int iParam0, bool bParam1) //Position: 0x1252 / 4690
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_47(iParam0);
	}
	if (!Function_32(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_47(int iParam0) //Position: 0x12C0 / 4800
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

var Function_48(int iParam0, int iParam1, int iParam2) //Position: 0x12D9 / 4825
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_49(int iParam0) //Position: 0x12EE / 4846
{
	return Function_50(0, iParam0);
}

int Function_50(int iParam0, bool bParam1) //Position: 0x12FA / 4858
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_51(iParam0);
	}
	if (!Function_32(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_51(int iParam0) //Position: 0x1361 / 4961
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_52(bool bParam0) //Position: 0x1371 / 4977
{
	return Function_46(12, bParam0);
}

int Function_53(int iParam0) //Position: 0x137E / 4990
{
	return Function_46(11, iParam0);
}

void Function_54(bool bParam0, int iParam1, char* cParam2) //Position: 0x138B / 5003
{
	if (bParam0)
	{
		if (Function_34())
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

int Function_55() //Position: 0x13AC / 5036
{
	if (!Function_69(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_headshots");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_bagcaptures");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_68();
	Function_56();
	return 1;
}

void Function_56() //Position: 0x1448 / 5192
{
	if (Function_65())
	{
		NET_PLAYER_LIST_SET_TEAM_SORT(1);
		if (Function_64())
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(2);
		}
		else
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(4);
		}
		Function_57(0, 0);
		Function_57(1, 0);
	}
	return;
}

void Function_57(bool bParam0, bool bParam1) //Position: 0x1473 / 5235
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_41())
	{
		bVar0 = 2;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = Function_63(bParam0);
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), 0, 0);
	if (bParam1)
	{
		Function_58(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_58(int iParam0, int iParam1, bool bParam2) //Position: 0x1512 / 5394
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_34())
	{
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000002:
				Var1 = { StackVal, StackVal, StackVal, Function_59(iParam1, 0) };
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
		if (Function_38())
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

struct<16> Function_59(var uParam0, var uParam1) //Position: 0x1605 / 5637
{
	return StackVal, StackVal, StackVal, Function_60(Function_61(uParam0), uParam1);
}

struct<16> Function_60(bool bParam0, bool bParam1) //Position: 0x1617 / 5655
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

int Function_61(int iParam0) //Position: 0x164C / 5708
{
	if (!Function_62())
	{
		return 0;
	}
	return StackVal;
}

bool Function_62() //Position: 0x1665 / 5733
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_63(int iParam0) //Position: 0x1672 / 5746
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_64() //Position: 0x168E / 5774
{
	return Function_41() == 4294967295;
}

bool Function_65() //Position: 0x1699 / 5785
{
	return Function_66(2);
}

int Function_66(int iParam0) //Position: 0x16A3 / 5795
{
	return Function_67(&Global_79349, iParam0);
}

int Function_67(var uParam0, bool bParam1) //Position: 0x16B2 / 5810
{
	return Function_18(uParam0->f_44, bParam1);
}

void Function_68() //Position: 0x16C1 / 5825
{
	if (Function_17(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_14(8192, 1, 1);
	}
	else if (Function_17(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_14(8192, 1, 1);
	}
	else
	{
		Function_14(8192, 0, 1);
	}
	return;
}

bool Function_69(bool bParam0) //Position: 0x16FE / 5886
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_34() || Function_73(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_71(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_34())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_70(Function_34());
	return 1;
}

void Function_70(bool bParam0) //Position: 0x177F / 6015
{
	if (bParam0 || Function_17(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_17(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_17(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_17(1048576) || Function_17(4)) || Function_95(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_14(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_71(int iParam0) //Position: 0x1808 / 6152
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_72(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_72(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x181C / 6172
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

int Function_73(bool bParam0, bool bParam1) //Position: 0x1861 / 6241
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

void Function_74(vector3 vParam0, var uParam3) //Position: 0x1895 / 6293
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_78(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_78(), "TurretFinderVol", false, vParam0, 0.0f, 0.0f, 0.0f, uParam3, uParam3, uParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_75(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_75(bool bParam0) //Position: 0x1948 / 6472
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
	return Function_76(bVar0);
}

int Function_76(bool bParam0) //Position: 0x1983 / 6531
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
	Function_77(bVar0);
	return bVar0;
}

void Function_77(bool bParam0) //Position: 0x19D1 / 6609
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0,4f);
	return;
}

var Function_78() //Position: 0x19E4 / 6628
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_79(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x1A13 / 6675
{
	if (!IS_OBJECT_VALID(Local_11.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_11.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_11.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_80(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_11.f_104, &Local_11) + Vector(0.0f, 2,45f, 0.0f), 1, 7534, 1, 125, 0, 0, 0);
	Function_80(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_11.f_104, &Local_11 + 48) + Vector(0.0f, 2,15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_80(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x1A96 / 6806
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_81(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_81(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) //Position: 0x1AE1 / 6881
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
			Function_24(iParam0);
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
					Function_24(iParam0);
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

var Function_82(float fParam0) //Position: 0x1D60 / 7520
{
	return (fParam0 * 57,29578f);
}

var Function_83(int iParam0, var uParam1) //Position: 0x1D6E / 7534
{
	char* cVar0[64];
	
	uParam1 = uParam1;
	if (Local_11.f_96 != iParam0)
	{
		Local_11.f_96 = iParam0;
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_71(1) };
		stradd(&cVar0, "_title", 64);
		UI_SET_STRING("Generic_Dbuffer128_2", UI_GET_STRING(&cVar0));
	}
	return "Generic_Dbuffer128_2";
}

var Function_84(int iParam0, var uParam1) //Position: 0x1DD3 / 7635
{
	uParam1 = uParam1;
	if (Local_11.f_100 != iParam0)
	{
		Local_11.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("CTF_sym_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), 0);
	}
	return "mp_lobby_summary";
}

var Function_85() //Position: 0x1E44 / 7748
{
	int iVar0;
	
	iVar0 = Function_91(Global_83591.f_140, &vLocal_47, 0.0f, &Global_83591 + 276, 1);
	Function_86(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_86(bool bParam0, int iParam1) //Position: 0x1E71 / 7793
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_90(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_89((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_89((*iParam1)[iVar202], &iVar21))
		{
			if (Function_87((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_87(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x1F80 / 8064
{
	float fVar0;
	
	if (!Function_88(bParam0))
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

bool Function_88(int iParam0) //Position: 0x20A7 / 8359
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_89(bool bParam0, int iParam1) //Position: 0x20B9 / 8377
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

var Function_90() //Position: 0x2115 / 8469
{
	int iVar0;
	
	return iVar0;
}

var Function_91(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x211D / 8477
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
		if (Function_89((*uParam3)[iVar12], &iVar2))
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
		if (Function_89((*uParam3)[iVar12], &iVar2))
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

bool Function_92(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x220B / 8715
{
	if (!Function_88(bParam0))
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

var Function_93(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x239F / 9119
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_94()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_94() //Position: 0x240B / 9227
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_95(bool bParam0, bool bParam1) //Position: 0x2432 / 9266
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_96() //Position: 0x2452 / 9298
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
						Function_97("CTF_sym_help", 4294967295);
						break;
					
					case 0x00000008:
						Function_97("CTF_one_help", 4294967295);
						break;
					
					case 0x00000007:
						Function_97("CTF_mul_help", 4294967295);
						break;
				}
				iLocal_45 = 1;
			}
		}
	}
	else
	{
		Function_19();
	}
	return;
}

void Function_97(char* cParam0, int iParam1) //Position: 0x24E7 / 9447
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

int Function_98(int iParam0) //Position: 0x257E / 9598
{
	int iVar0;
	
	if (!Function_109(*iParam0) || (Function_126(64) && Function_105()))
	{
		iParam0->f_4 = 0;
		Function_21(iParam0);
		if (!Function_109(*iParam0))
		{
		}
		if (Function_126(64))
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
						(iParam0 + 12[Function_102(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_18((iParam0 + 12[StackVal5])->f_16, 32))
							{
								Function_15(iParam0 + 12[StackVal5] + 16, 64);
							}
						}
						else if (!Function_18((iParam0 + 12[StackVal5])->f_16, 32))
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
					if (!Function_18((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_18((iParam0 + 12[StackVal5])->f_16, 2))
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
				Function_21(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_99(3, iParam0->f_576))
			{
				if (iParam0->f_576 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_576);
				}
				else
				{
					iParam0->f_8 = 0;
				}
				if (Function_18((iParam0 + 12[StackVal5])->f_16, 32))
				{
					if (!Function_18((iParam0 + 12[StackVal5])->f_16, 64))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							OPEN_DOOR_DIRECTION((iParam0 + 12[StackVal5])->f_12, false);
							DESTROY_OBJECT((iParam0 + 12[StackVal5])->f_12);
						}
						Function_16(iParam0 + 12[StackVal5] + 16, 64);
					}
				}
				else if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
				{
					if (Function_18((iParam0 + 12[StackVal5])->f_16, 4))
					{
						if (Function_18((iParam0 + 12[StackVal5])->f_16, 8))
						{
							if (StackVal || IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_CLOSING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
							{
								OPEN_DOOR_DIRECTION(StackVal, Function_18((iParam0 + 12[(iParam0 + 12[StackVal5])->f_125])->f_16, 16));
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

int Function_99(int iParam0, int iParam1) //Position: 0x2905 / 10501
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_100(bool bParam0, bool bParam1) //Position: 0x2917 / 10519
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

void Function_101(bool bParam0, bool bParam1) //Position: 0x296B / 10603
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

int Function_102(var uParam0, var uParam1, int iParam2) //Position: 0x29BC / 10684
{
	return Function_103(Global_29006, uParam0, uParam1, iParam2);
}

int Function_103(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x29CE / 10702
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

bool Function_104(int iParam0) //Position: 0x2A6A / 10858
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_105() //Position: 0x2A80 / 10880
{
	return !Function_106();
}

bool Function_106() //Position: 0x2A8A / 10890
{
	if (Function_108())
	{
		return (Function_107() != 1 || Function_107() != 0);
	}
	return 0;
}

int Function_107() //Position: 0x2AA3 / 10915
{
	return Global_79349.f_16;
}

bool Function_108() //Position: 0x2AAF / 10927
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_109(int iParam0) //Position: 0x2AB8 / 10936
{
	if (!Function_104(iParam0))
	{
		return 1;
	}
	return Function_110(&(Global_29008[iParam0]), 4);
}

int Function_110(var uParam0, bool bParam1) //Position: 0x2AD4 / 10964
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_111(int iParam0, float fParam1, float fParam2, bool bParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x2AF0 / 10992
{
	float fVar0;
	
	if (Function_122())
	{
		if (Function_121(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_117(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_115((iParam0 + 8[iParam0->f_1125])->f_12, 0, bParam3, 0, 0);
				Function_112((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_115((iParam0 + 8[iParam0->f_1125])->f_16, 0, bParam3, 0, 0);
				Function_112((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_112(int iParam0, var uParam1, int iParam2) //Position: 0x2B93 / 11155
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

void Function_113(int iParam0) //Position: 0x2BB8 / 11192
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_114(int iParam0) //Position: 0x2BCD / 11213
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_115(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2BE2 / 11234
{
	int iVar0;
	bool bVar1;
	
	Function_5(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_116(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_2(StackVal, bVar1, bParam4);
		}
	}
}

void Function_116(int iParam0, int iParam1) //Position: 0x2C54 / 11348
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_5(iParam0);
	Function_4(iVar0);
	PRINTNL();
	Function_2(iParam0, iVar0, iParam1);
	return;
}

float Function_117(int iParam0) //Position: 0x2C79 / 11385
{
	return -Function_118(iParam0);
}

float Function_118(int iParam0) //Position: 0x2C85 / 11397
{
	if (Function_121(iParam0))
	{
		if (Function_120(iParam0))
		{
			return StackVal;
		}
		Function_119();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_119() //Position: 0x2D56 / 11606
{
	if (!Function_122())
	{
	}
	return;
}

bool Function_120(int iParam0) //Position: 0x2D63 / 11619
{
	return Function_18(*iParam0, 2);
}

bool Function_121(int iParam0) //Position: 0x2D70 / 11632
{
	return Function_18(*iParam0, 1);
}

bool Function_122() //Position: 0x2D7D / 11645
{
	return NET_IS_IN_SESSION();
}

void Function_123() //Position: 0x2D86 / 11654
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_90());
	Function_124(bVar0, "glass", Local_138.f_156);
	Function_124(bVar0, "package", Local_138.f_156);
	Function_124(bVar0, "nlantern05", Local_138.f_156);
	Function_124(bVar0, "p_gen_bucket02x", Local_138.f_156);
	Function_124(bVar0, "potclay", Local_138.f_156);
	Function_124(bVar0, "nwoodboard", Local_138.f_156);
	Function_124(bVar0, "lumber07", Local_138.f_156);
	Function_124(bVar0, "p_gen_chair02x", Local_138.f_156);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_124(bool bParam0, char* cParam1, bool bParam2) //Position: 0x2E43 / 11843
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_90(), bParam0, 4294967295, 1);
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

void Function_125(int iParam0, bool bParam1) //Position: 0x2E9C / 11932
{
	if (bParam1)
	{
		Function_16(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_15(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

bool Function_126(int iParam0) //Position: 0x2EC4 / 11972
{
	return Function_18(StackVal, iParam0);
}

void Function_127(bool bParam0) //Position: 0x2ED7 / 11991
{
	Function_125(16, bParam0);
	return;
}

void Function_128(var uParam0) //Position: 0x2EE4 / 12004
{
	Function_125(8, uParam0);
	return;
}

bool Function_129() //Position: 0x2EF1 / 12017
{
	bool bVar0;
	
	Function_172(&iLocal_460, 0, 9, 30, 1, 1, 0);
	Function_172(&iLocal_460, 1, 9, 30, 2, 2, 2);
	Function_172(&iLocal_460, 2, 12, 0, 4, 4, 4);
	Function_172(&iLocal_460, 3, 12, 0, 0, 0, 1);
	Function_172(&iLocal_460, 4, 23, 0, 1, 0, 1);
	Function_169(&iLocal_460);
	while (!IS_EXITFLAG_SET() && !Function_160())
	{
		WAIT(false);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_158();
	NET_OBJECT_REPLICATION_MODE_END(17);
	bVar0 = CREATE_WORLD_SECTOR(Local_138, "lashermanas");
	while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar0))
	{
		WAIT(false);
	}
	if (!Function_154(Local_138))
	{
		return 0;
	}
	Function_152(Local_138.f_696);
	Function_151("MEX_SONG_03", "MEX_SONG_01", 0, 58, 58, 1);
	Function_144(&Global_83591 + 276, 0);
	Function_142(&Global_83591, 1, 22, 1, 1);
	Function_142(&Global_83591, 2, 5, 10, 1);
	Function_142(&Global_83591, 3, 17, 10, 1);
	Function_137(&Global_83591, 1, 23, 4, 1);
	Function_137(&Global_83591, 2, 6, 10, 1);
	Function_137(&Global_83591, 3, 18, 10, 1);
	Function_137(&Global_83591, 4, 12, 5, 1);
	Function_136(&Global_83591);
	Function_135(&Global_83591 + 276, 4);
	Function_134(0, 8);
	Function_134(1, 1);
	if (!Function_130(&uLocal_313))
	{
		return 0;
	}
	return 1;
}

bool Function_130(bool bParam0) //Position: 0x3049 / 12361
{
	if (!Function_133(bParam0, Global_30693[1]))
	{
		return 0;
	}
	Function_131(bParam0, "LasHermanas", "walls01", 1, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "walls01", 2, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "walls01", 3, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "walls01", 4, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "walls01", 5, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "walls01", 6, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "residence01", 1, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "residence01", 3, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "residence01", 4, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "residence01", 9, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "church01", 1, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "church01", 2, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "church01", 5, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "storageRoom01", 1, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "storageRoom01", 2, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "storageRoom01", 3, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "storageRoom01", 7, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "storageRoom01", 8, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "storageRoom01", 9, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "prayerRoom01", 1, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "prayerRoom01", 2, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "prayerRoom01", 3, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "prayerRoom01", 4, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "prayerRoom01", 5, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "prayerRoom01", 9, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "prayerRoom01", 10, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "prayerRoom01", 11, 1, 0, 1, 1);
	Function_131(bParam0, "LasHermanas", "prayerRoom01", 12, 1, 0, 1, 1);
	return 1;
}

int Function_131(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x34A0 / 13472
{
	int iVar0;
	
	iVar0 = iParam0->f_576;
	if (!Function_132(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	if (bParam4)
	{
		Function_16(iParam0 + 12[iVar05] + 16, 2);
	}
	if (bParam5)
	{
		Function_16(iParam0 + 12[iVar05] + 16, 4);
		if (bParam6)
		{
			Function_16(iParam0 + 12[iVar05] + 16, 8);
			if (bParam7)
			{
				Function_16(iParam0 + 12[iVar05] + 16, 16);
			}
		}
	}
	return 1;
}

bool Function_132(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3511 / 13585
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

bool Function_133(int iParam0, int iParam1) //Position: 0x356D / 13677
{
	int iVar0;
	
	if (!Function_104(iParam1))
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

void Function_134(int iParam0, int iParam1) //Position: 0x35E3 / 13795
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_135(int iParam0, int iParam1) //Position: 0x35F1 / 13809
{
	(iParam0 + 228)->f_220 = 0;
	Function_16(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_136(int iParam0) //Position: 0x3609 / 13833
{
	iParam0->f_844 = 0;
	return;
}

void Function_137(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x3615 / 13845
{
	Function_138(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_138(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x362D / 13869
{
	Function_139(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_139(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3644 / 13892
{
	if (!Function_141(iParam1))
	{
		return;
	}
	Function_140(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_140(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3667 / 13927
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

bool Function_141(int iParam0) //Position: 0x3691 / 13969
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_142(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x36A1 / 13985
{
	Function_143(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_143(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x36B9 / 14009
{
	Function_139(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_144(int iParam0, bool bParam1) //Position: 0x36CE / 14030
{
	Function_148(iParam0);
	Function_148(iParam0 + 228);
	if (bParam1)
	{
		Function_145(iParam0);
	}
	return;
}

void Function_145(int iParam0) //Position: 0x36EA / 14058
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

void Function_146(var uParam0, int iParam1) //Position: 0x370A / 14090
{
	Function_147(uParam0, iParam1, 0);
	return;
}

void Function_147(int iParam0, int iParam1, int iParam2) //Position: 0x3718 / 14104
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_148(int iParam0) //Position: 0x3729 / 14121
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_150(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_149(iParam0, 0.0f);
	return;
}

void Function_149(var uParam0, int iParam1) //Position: 0x3756 / 14166
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_150(bool bParam0) //Position: 0x3762 / 14178
{
	Function_140(bParam0, 4294967295, 0, 1);
	return;
}

void Function_151(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0x3770 / 14192
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

void Function_152(bool bParam0) //Position: 0x3800 / 14336
{
	DECOR_SET_OBJECT(Function_153(), "LobbyGringoSet", bParam0);
	return;
}

var Function_153() //Position: 0x3820 / 14368
{
	return Global_83591.f_140;
}

bool Function_154(int iParam0) //Position: 0x382C / 14380
{
	Function_157(iParam0);
	if (Function_156())
	{
		Function_135(&Global_83591 + 276, 2);
	}
	Function_155();
	vLocal_47 = { StackVal, StackVal, Function_155() };
	return 1;
}

vector3 Function_155() //Position: 0x3850 / 14416
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_153();
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

bool Function_156() //Position: 0x3898 / 14488
{
	return Function_18(Global_79962, 1024);
}

void Function_157(var uParam0) //Position: 0x38A8 / 14504
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_158() //Position: 0x38B6 / 14518
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
	
	Function_159(4, 1);
	uVar0 = uVar0;
	Local_138 = CREATE_LAYOUT("CTF_LSH_layout");
	Local_138.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_138, "playablespace", 2, -1708,741f, 8,124187f, 4216,78f, 0.0f, 0.0f, 0.0f, 100,259f, 52,82163f, 125,061f);
	Local_138.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_138, "v_clear_vol", 2, -1711,811f, 16,93824f, 4223,899f, 0.0f, 0.0f, 0.0f, 85,86184f, 24,71324f, 93,21625f);
	Local_138.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_138, "CapVol_A", 3, -1739,193f, 7,33384f, 4188,944f, 0.0f, -0,9657434f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_138, "CapVol_B", 3, -1683,784f, 8,031363f, 4240,37f, 0.0f, -87,94256f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A0", 3, -1743,328f, 9,287874f, 4186,96f, 0,3349314f, 52,76446f, 3,268049f, 1.0f, 1.0f, 1.0f);
	Local_138.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A1", 3, -1743,031f, 9,287878f, 4210,852f, 0.0f, 128,0549f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A2", 3, -1716.0f, 8,031363f, 4185,816f, 0.0f, 28,50655f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A3", 3, -1730,279f, 8,181478f, 4187,338f, 0.0f, 35,25382f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A4", 3, -1734,292f, 8,205862f, 4214,349f, 0.0f, 77,48016f, 0.0f, 1.0f, 1,835308f, 1.0f);
	Local_138.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A5", 3, -1714,217f, 11,15888f, 4211,151f, 0.0f, -41,91553f, 0.0f, 1.0f, 1,835308f, 1.0f);
	Local_138.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A6", 3, -1699,778f, 8,031364f, 4188.0f, 0.0f, 0,8846117f, 0.0f, 1.0f, 1,835308f, 1.0f);
	Local_138.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_A7", 3, -1714,124f, 11,22662f, 4185,776f, 0.0f, -43,7667f, 0.0f, 1.0f, 0,848598f, 1.0f);
	Local_138.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B0", 3, -1678,658f, 11,23724f, 4229,399f, 0.0f, -70,00093f, 0.0f, 0,7209927f, 0,7209927f, 0,7209927f);
	Local_138.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B1", 3, -1678,548f, 11,23122f, 4252,393f, 0.0f, -132,3001f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B2", 3, -1700.0f, 8,031362f, 4255,3f, 0.0f, 176,8262f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B3", 3, -1689,933f, 8,07091f, 4251,484f, 0.0f, -157,0344f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B4", 3, -1675,641f, 8,338675f, 4226,239f, 0.0f, -150,8896f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B5", 3, -1718,801f, 8,031357f, 4252,292f, 0.0f, -263,5251f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_138.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B6", 3, -1703,453f, 11,0803f, 4259,027f, 0.0f, -185,6955f, 0.0f, 0,8421478f, 0,8421478f, 0,8421478f);
	Local_138.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_138, "T_SpawnVol_B7", 3, -1676,306f, 8,341466f, 4198,712f, 0.0f, -76,31023f, 0.0f, 1.0f, 1.0f, 1.0f);
	*(&Local_138 + 232) = { -1724,195f, 14,22598f, 4211,75f };
	*(&Local_138 + 232 + 12) = { -1,263813f, 31,99192f, 1,171795f };
	Local_138.f_256 = CREATE_POINT_IN_LAYOUT(Local_138, "Showdown_A", -1724,195f, 14,22598f, 4211,75f, -1,263813f, 31,99192f, 1,171795f);
	*(&Local_138 + 260) = { -1724,195f, 14,22598f, 4219,895f };
	*(&Local_138 + 260 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_138.f_284 = CREATE_POINT_IN_LAYOUT(Local_138, "Showdown_B", -1724,195f, 14,22598f, 4219,895f, 0.0f, 0.0f, 0.0f);
	*(&Local_138 + 288) = { -1700,05f, 8,082046f, 4243,555f };
	*(&Local_138 + 288 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_138.f_312 = CREATE_POINT_IN_LAYOUT(Local_138, "LobbyCenter", -1700,05f, 8,082046f, 4243,555f, 0.0f, 0.0f, 0.0f);
	*(&Local_138 + 316) = { -1698,945f, 8,687582f, 4183,835f };
	*(&Local_138 + 316 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_138.f_340 = CREATE_POINT_IN_LAYOUT(Local_138, "FlagSpawn_0", -1698,945f, 8,687582f, 4183,835f, 0.0f, 0.0f, 0.0f);
	*(&Local_138 + 344) = { -1700,05f, 8,082046f, 4218,376f };
	*(&Local_138 + 344 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_138.f_368 = CREATE_POINT_IN_LAYOUT(Local_138, "FlagSpawn_1", -1700,05f, 8,082046f, 4218,376f, 0.0f, 0.0f, 0.0f);
	*(&Local_138 + 372) = { -1720.0f, 8,031362f, 4225,231f };
	*(&Local_138 + 372 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_138.f_396 = CREATE_POINT_IN_LAYOUT(Local_138, "FlagSpawn_2", -1720.0f, 8,031362f, 4225,231f, 0.0f, 0.0f, 0.0f);
	Local_138.f_400 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_138, 8, 0);
	*(&Local_138 + 404[06]) = { -1698,699f, 8,082046f, 4218,334f };
	*(&Local_138 + 404[06] + 12) = { 0.0f, -92,18178f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_138, "npickup_D1", -1698,699f, 8,082046f, 4218,334f, 0.0f, -92,18178f, 0.0f);
	DECOR_SET_INT(bVar1, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_138.f_400);
	*(&Local_138 + 404[16]) = { -1691,579f, 7,984836f, 4199,823f };
	*(&Local_138 + 404[16] + 12) = { 0.0f, 180,8416f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_138, "nPickup_B1", -1691,579f, 7,984836f, 4199,823f, 0.0f, 180,8416f, 0.0f);
	DECOR_SET_INT(bVar2, "type", true);
	DECOR_SET_INT(bVar2, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_138.f_400);
	*(&Local_138 + 404[26]) = { -1712,994f, 11,29332f, 4221,08f };
	*(&Local_138 + 404[26] + 12) = { 0.0f, 269,2995f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_138, "nPickup_B2", -1712,994f, 11,29332f, 4221,08f, 0.0f, 269,2995f, 0.0f);
	DECOR_SET_INT(bVar3, "type", true);
	DECOR_SET_INT(bVar3, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_138.f_400);
	*(&Local_138 + 404[36]) = { -1740,924f, 7,300356f, 4207,248f };
	*(&Local_138 + 404[36] + 12) = { 0.0f, -269,4141f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_138, "nPickup_P1", -1740,924f, 7,300356f, 4207,248f, 0.0f, -269,4141f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_138.f_400);
	*(&Local_138 + 404[46]) = { -1712,867f, 8,082559f, 4204,184f };
	*(&Local_138 + 404[46] + 12) = { 0.0f, -86,15063f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_138, "nPickup_P2", -1712,867f, 8,082559f, 4204,184f, 0.0f, -86,15063f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_138.f_400);
	*(&Local_138 + 404[56]) = { -1694,243f, 8,05441f, 4223,249f };
	*(&Local_138 + 404[56] + 12) = { 0.0f, 0,4436892f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_138, "nPickup_P3", -1694,243f, 8,05441f, 4223,249f, 0.0f, 0,4436892f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_138.f_400);
	*(&Local_138 + 404[66]) = { -1697,769f, 8,07091f, 4247,292f };
	*(&Local_138 + 404[66] + 12) = { 0.0f, 0,7863511f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_138, "nPickup_P4", -1697,769f, 8,07091f, 4247,292f, 0.0f, 0,7863511f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_138.f_400);
	*(&Local_138 + 404[76]) = { -1716,231f, 8,031361f, 4220,451f };
	*(&Local_138 + 404[76] + 12) = { 0.0f, 90,07394f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_138, "nPickup_S1", -1716,231f, 8,031361f, 4220,451f, 0.0f, 90,07394f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_138.f_400);
	*(&Local_138 + 404[86]) = { -1685,834f, 11,45156f, 4197,656f };
	*(&Local_138 + 404[86] + 12) = { 0.0f, 90,15887f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_138, "nPickup_R1", -1685,834f, 11,45156f, 4197,656f, 0.0f, 90,15887f, 0.0f);
	DECOR_SET_INT(bVar9, "type", true);
	DECOR_SET_INT(bVar9, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_138.f_400);
	*(&Local_138 + 404[96]) = { -1715,06f, 11,27752f, 4209,436f };
	*(&Local_138 + 404[96] + 12) = { 0.0f, 0,8645388f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_138, "nPickup_R2", -1715,06f, 11,27752f, 4209,436f, 0.0f, 0,8645388f, 0.0f);
	DECOR_SET_INT(bVar10, "type", true);
	DECOR_SET_INT(bVar10, "ID", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_138.f_400);
	*(&Local_138 + 404[106]) = { -1716,682f, 8,031361f, 4194,687f };
	*(&Local_138 + 404[106] + 12) = { 0.0f, 88,70327f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_138, "nPickup_A1", -1716,682f, 8,031361f, 4194,687f, 0.0f, 88,70327f, 0.0f);
	DECOR_SET_INT(bVar11, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_138.f_400);
	*(&Local_138 + 404[116]) = { -1700,101f, 8,114278f, 4234,953f };
	*(&Local_138 + 404[116] + 12) = { 0.0f, 182,718f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_138, "nPickup_A2", -1700,101f, 8,114278f, 4234,953f, 0.0f, 182,718f, 0.0f);
	DECOR_SET_INT(bVar12, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_138.f_400);
	Local_138.f_696 = CREATE_OBJECTSET_IN_LAYOUT(Function_90(), Local_138, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "smoking_stand_loose", "smoking_stand_loose", -1701,095f, 8,071356f, 4239,305f, 0.0f, -6,861321f, 0.0f), Local_138.f_696);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "Rand_Idle_NearWall_Shoulder_R", "Rand_Idle_NearWall_Shoulder_R", -1701,407f, 8,053353f, 4246,385f, 0.0f, -89,36221f, 0.0f), Local_138.f_696);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "smoking_stand1", "smoking_stand", -1689,909f, 8,031363f, 4231,668f, 0.0f, 116,6206f, 0.0f), Local_138.f_696);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "blacksmith", "blacksmith", -1719,863f, 8,030291f, 4232,398f, 0.0f, -181,2243f, 0.0f), Local_138.f_696);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "sharpen_axe", "sharpen_axe", -1711,276f, 8,031473f, 4237,442f, 0.0f, 56,98805f, 0.0f), Local_138.f_696);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "lean_fence_L", "lean_fence_L", -1711,494f, 8,032317f, 4234,503f, 0.0f, 89,31872f, 0.0f), Local_138.f_696);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "stand_hammer_wall", "stand_hammer_wall", -1715,843f, 8,031f, 4250,29f, 0.0f, 87,97841f, 0.0f), Local_138.f_696);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "lean_table", "lean_table", -1708,688f, 8,032f, 4247,973f, 0.0f, -180,808f, 0.0f), Local_138.f_696);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "stand_chopveggies_w_any", "stand_chopveggies_w_any", -1686,309f, 8,077932f, 4245,075f, 0.0f, -178,7862f, 0.0f), Local_138.f_696);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "opium_pipe", "opium_pipe", -1708.0f, 8,031363f, 4229,472f, 0.0f, -157,4185f, 0.0f), Local_138.f_696);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -1699,522f, 8,031363f, 4230,106f, 0.0f, -175,4147f, 0.0f), Local_138.f_696);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "smoking_stand", "smoking_stand", -1705,67f, 8,090877f, 4237,486f, 0.0f, -79,81244f, 0.0f), Local_138.f_696);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "smoking_stand2", "smoking_stand", -1705,67f, 8,090877f, 4236,18f, 0.0f, -96,62147f, 0.0f), Local_138.f_696);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -1693,921f, 8,062208f, 4238,079f, 0.0f, 75,92284f, 0.0f), Local_138.f_696);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "opium_pipe1", "opium_pipe", -1688,945f, 8,0815f, 4238,354f, 0.0f, -277,4587f, 0.0f), Local_138.f_696);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_138, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -1690,608f, 8,081337f, 4235,712f, 0.0f, -253,4927f, 0.0f), Local_138.f_696);
	return;
}

void Function_159(int iParam0, int iParam1) //Position: 0x494C / 18764
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

bool Function_160() //Position: 0x4995 / 18837
{
	Function_167(&Local_138 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_loose", 1, 0);
	Function_167(&Local_138 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_167(&Local_138 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_167(&Local_138 + 4, "$/content/scripting/gringo/simplegringo/blacksmith", 1, 0);
	Function_167(&Local_138 + 4, "$/content/scripting/gringo/simplegringo/sharpen_axe", 1, 0);
	Function_167(&Local_138 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l", 1, 0);
	Function_167(&Local_138 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_167(&Local_138 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_167(&Local_138 + 4, "$/content/scripting/gringo/simplegringo/stand_chopveggies_w_any", 1, 0);
	Function_167(&Local_138 + 4, "$/content/scripting/gringo/simplegringo/opium_pipe", 1, 0);
	Function_167(&Local_138 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_167(&Local_138 + 4, "$/content/scripting/gringo/simplegringo/stand_fiddle_w_fiddle", 1, 0);
	if (Function_161(&Local_138 + 4))
	{
		return 1;
	}
	return 0;
}

bool Function_161(int iParam0) //Position: 0x4CE7 / 19687
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_166();
	iVar1 = 0;
	if (!Function_10(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_165(iParam0[iVar03], 8);
		}
		else if (Function_164())
		{
			iVar1 = 1;
			Function_165(iParam0[iVar03], 8);
		}
		Function_165(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_10(iParam0[iVar03], 4))
		{
			if (!Function_10(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_10(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_10(iParam0[03], 8) || iVar1));
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
				Function_165(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_10(iParam0[iVar03], 4))
		{
			if (!Function_10(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_165(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_165(iParam0[iVar03], 2);
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
							Function_165(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_165(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_165(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_165(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_165(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_165(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_165(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_165(iParam0[iVar03], 2);
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
	Function_162();
	return 1;
}

void Function_162() //Position: 0x5062 / 20578
{
	if (!Function_163(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_163(int iParam0) //Position: 0x50A2 / 20642
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_164() //Position: 0x50BE / 20670
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

void Function_165(var uParam0, int iParam1) //Position: 0x50E9 / 20713
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_166() //Position: 0x50FA / 20730
{
	if (!Function_163(128))
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

var Function_167(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x513C / 20796
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_168(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_165(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_168(var uParam0, int iParam1, int iParam2) //Position: 0x5174 / 20852
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_10(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_165(uParam0[iVar03], 4);
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

void Function_169(int iParam0) //Position: 0x5238 / 21048
{
	iParam0->f_112 = Global_78578.f_152;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	if (Function_171("pressDemoMP"))
	{
		iParam0->f_112 = 0;
	}
	if ((*iParam0 + 8)[iParam0->f_1125] == 4294967295)
	{
		iParam0->f_112 = 0;
	}
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(StackVal, (*iParam0 + 8)[iParam0->f_1125], false));
	Function_170(StackVal, 0);
	return;
}

void Function_170(var uParam0, int iParam1) //Position: 0x52AA / 21162
{
	Function_5(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_116(StackVal, iParam1);
	}
	return;
}

bool Function_171(char* cParam0) //Position: 0x52DB / 21211
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x52FA / 21242
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_173() //Position: 0x533C / 21308
{
	while (!IS_EXITFLAG_SET())
	{
		Function_25(5036, 3928);
		WAIT(false);
	}
	return;
}

bool Function_174() //Position: 0x5359 / 21337
{
	return Function_126(2);
}

void Function_175() //Position: 0x5363 / 21347
{
	if (Function_174())
	{
		return;
	}
	Function_177();
	Function_167(&bLocal_38, "MP_CTF", 10, 0);
	Function_167(&bLocal_38, "$/fragments/p_gen_skullPost02x", 0, 0);
	while (!Function_161(&bLocal_38))
	{
		WAIT(false);
	}
	fLocal_10 = 5.0f;
	Function_96();
	Function_176();
	return;
}

void Function_176() //Position: 0x53C7 / 21447
{
	while (!Function_126(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

void Function_177() //Position: 0x53E2 / 21474
{
	Local_11.f_96 = 4294967295;
	Local_11.f_100 = 4294967295;
	return;
}

