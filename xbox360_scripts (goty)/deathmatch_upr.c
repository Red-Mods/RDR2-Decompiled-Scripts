//Decompiled with MagicRDR v1.0
//Function Count : 281
//Statics Count : 392
//Natives Count : 255
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
	struct<681> Local_136 = { 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	
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
	Function_276();
	if (Function_275())
	{
		Function_274();
	}
	else
	{
		if (Function_133())
		{
			Function_132(1);
		}
		else
		{
			Function_131(1);
		}
		bVar0 = CREATE_WORLD_SECTOR(Local_136, "unionPacific");
		while (!IS_EXITFLAG_SET() && !IS_WORLD_SECTOR_LOADED(bVar0))
		{
			WAIT(0);
		}
		iVar1 = 2;
		while (!IS_EXITFLAG_SET())
		{
			if (Function_130(64))
			{
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					Function_129(64, 0);
					Function_127();
					iVar1 = 2;
				}
			}
			Function_115(&iLocal_363, 0.2f, 0.6f, 12, 0.0f, 0.0f, 1.0f, 1.0f);
			Function_102(&uLocal_326);
			Function_27();
			Function_24();
			WAIT(0);
		}
	}
	Function_22(&uLocal_326);
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_upr_ffa02x", 0);
	DISABLE_CHILD_SECTOR("mp_upr_ffa02x");
	Function_21();
	Function_8();
	Function_3(0, 60, 0);
	if (IS_ACTOR_VALID(bLocal_309))
	{
		TRAIN_DESTROY_TRAIN(iLocal_308);
	}
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x133 / 307
{
	Function_2(uLocal_307);
	return;
}

int Function_2(bool bParam0) //Position: 0x140 / 320
{
	if (IS_OBJECT_VALID(bParam0))
	{
		DESTROY_OBJECT(bParam0);
		return 1;
	}
	return 0;
}

void Function_3(int iParam0, int iParam1, int iParam2) //Position: 0x156 / 342
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
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
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
		bVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_4(Global_16524, bVar0, 1);
	}
	return;
}

void Function_4(int iParam0, bool bParam1, bool bParam2) //Position: 0x23C / 572
{
	int iVar0;
	
	Function_7(iParam0);
	Function_6(bParam1);
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
	Function_5();
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

void Function_5() //Position: 0x3B5 / 949
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_6(bool bParam0) //Position: 0x3C1 / 961
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

void Function_7(int iParam0) //Position: 0x407 / 1031
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

void Function_8() //Position: 0x44D / 1101
{
	Function_17(&iLocal_39);
	Function_10();
	Function_9();
	return;
}

void Function_9() //Position: 0x45E / 1118
{
	if (iLocal_46)
	{
		UI_SET_TEXT("LoadingTip", "Common_Null");
		UI_REFRESH("LoadingScreen");
		iLocal_46 = 0;
	}
	return;
}

void Function_10() //Position: 0x49D / 1181
{
	Function_11();
	return;
}

void Function_11() //Position: 0x4A6 / 1190
{
	if (Function_15(4194304))
	{
		Function_12(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_15(8388608))
	{
		Function_12(8388608, 0, 1);
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

void Function_12(int iParam0, bool bParam1, int iParam2) //Position: 0x5AF / 1455
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_14(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_13(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x5D7 / 1495
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x5EA / 1514
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_15(int iParam0) //Position: 0x5F9 / 1529
{
	return Function_16(Global_76905.f_132, iParam0);
}

bool Function_16(var uParam0, int iParam1) //Position: 0x60A / 1546
{
	return (uParam0 && iParam1) == 0;
}

void Function_17(int iParam0) //Position: 0x617 / 1559
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_18(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_18(var uParam0, int iParam1) //Position: 0x63D / 1597
{
	if (Function_20(uParam0[iParam13], 4))
	{
		if (Function_20(uParam0[iParam13], 1))
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
			Function_19(uParam0[iParam13], 1);
			Function_19(uParam0[iParam13], 2);
			Function_19(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_19(var uParam0, int iParam1) //Position: 0x76B / 1899
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_20(int iParam0, int iParam1) //Position: 0x785 / 1925
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_21() //Position: 0x7A2 / 1954
{
	Function_17(&Local_136 + 4);
	RELEASE_LAYOUT_REF(Local_136);
	return;
}

void Function_22(int iParam0) //Position: 0x7B4 / 1972
{
	Function_129(64, 0);
	Function_23(iParam0);
	return;
}

void Function_23(int iParam0) //Position: 0x7C5 / 1989
{
	if (iParam0->f_140 != "")
	{
		DYNAMICMIXER_DETRIGGERSTATE(iParam0->f_140, 0);
		iParam0->f_140 = "";
	}
	return;
}

void Function_24() //Position: 0x7E2 / 2018
{
	Function_25(2);
	return;
}

void Function_25(int iParam0) //Position: 0x7EC / 2028
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
			Function_26(iParam0);
		}
	}
	return;
}

void Function_26(var uParam0) //Position: 0x81E / 2078
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(uParam0, &uVar0, 0);
	return;
}

void Function_27() //Position: 0x82D / 2093
{
	Function_100();
	if (Function_99(1, 1))
	{
		Function_83(StackVal, StackVal, 8187, vLocal_43, 1, 8079);
	}
	else
	{
		if (!iLocal_47)
		{
			iLocal_47 = 1;
			Function_78(StackVal, StackVal, *(&Global_79349 + 28), 1000.0f);
		}
		if (Function_75())
		{
			Function_54(5936, 5560);
		}
		else
		{
			Function_54(4094, 2254);
		}
		Function_28();
	}
	return;
}

void Function_28() //Position: 0x88C / 2188
{
	if (IS_OBJECT_VALID(Local_12.f_104))
	{
		DESTROY_OBJECT(Local_12.f_104);
		Function_29(&Local_12);
	}
	return;
}

void Function_29(int iParam0) //Position: 0x8A8 / 2216
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

int Function_30(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x8CE / 2254
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_45(bParam1, uParam2, uParam3);
	bVar0 = false;
	bVar1 = Function_44(bParam0);
	bVar2 = Function_43(bParam0);
	bVar3 = Function_40(bParam0);
	iVar4 = Function_39((bVar3 / CEIL(25.0f)), bVar1, bVar2);
	if (!bParam1)
	{
		Function_37(bParam0, iVar4, 0);
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
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_35(38, bParam0));
		bVar0++;
		Function_31(bVar0, bParam0);
	}
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(3);
	return 0;
}

void Function_31(bool bParam0, bool bParam1) //Position: 0x9B3 / 2483
{
	if (Function_15(4))
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

bool Function_32(bool bParam0, int iParam1, bool bParam2) //Position: 0x9E6 / 2534
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_99(iParam1, bParam2);
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

var Function_33(int iParam0) //Position: 0xA67 / 2663
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

bool Function_34(bool bParam0) //Position: 0xD80 / 3456
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

int Function_35(int iParam0, bool bParam1) //Position: 0xE21 / 3617
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_36(iParam0);
	}
	if (!Function_34(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

int Function_36(int iParam0) //Position: 0xE8F / 3727
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

bool Function_37(bool bParam0, int iParam1, int iParam2) //Position: 0xEA8 / 3752
{
	var uVar0;
	
	return Function_38(bParam0, iParam1, &uVar0, iParam2);
}

int Function_38(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xEB9 / 3769
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

var Function_39(int iParam0, int iParam1, int iParam2) //Position: 0xF1E / 3870
{
	return (((iParam0 * 100000) + iParam1 * 100) - iParam2);
}

int Function_40(bool bParam0) //Position: 0xF33 / 3891
{
	return Function_41(0, bParam0);
}

int Function_41(int iParam0, bool bParam1) //Position: 0xF3F / 3903
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_42(iParam0);
	}
	if (!Function_34(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

var Function_42(int iParam0) //Position: 0xFA6 / 4006
{
	return (*&Global_78480 + 132)[iParam0];
}

int Function_43(bool bParam0) //Position: 0xFB6 / 4022
{
	return Function_35(12, bParam0);
}

int Function_44(int iParam0) //Position: 0xFC3 / 4035
{
	return Function_35(11, iParam0);
}

void Function_45(bool bParam0, int iParam1, char* cParam2) //Position: 0xFD0 / 4048
{
	if (bParam0)
	{
		if (Function_46())
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

bool Function_46() //Position: 0xFF1 / 4081
{
	return Function_15(32768);
}

int Function_47() //Position: 0xFFE / 4094
{
	if (!Function_49(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_killstolen");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_48();
	return 1;
}

void Function_48() //Position: 0x1092 / 4242
{
	if (Function_15(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_12(8192, 1, 1);
	}
	else if (Function_15(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_12(8192, 1, 1);
	}
	else
	{
		Function_12(8192, 0, 1);
	}
	return;
}

bool Function_49(bool bParam0) //Position: 0x10CF / 4303
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_46() || Function_53(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_51(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_46())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_50(Function_46());
	return 1;
}

void Function_50(bool bParam0) //Position: 0x1150 / 4432
{
	if (bParam0 || Function_15(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_15(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_15(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_15(1048576) || Function_15(4)) || Function_99(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_12(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_51(int iParam0) //Position: 0x11D9 / 4569
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, iParam0);
}

struct<64> Function_52(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x11ED / 4589
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

int Function_53(bool bParam0, bool bParam1) //Position: 0x1232 / 4658
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

void Function_54(int iParam0, int iParam1) //Position: 0x1266 / 4710
{
	Function_55(iParam0, iParam1, 5553);
	return;
}

void Function_55(var uParam0, var uParam1, int iParam2) //Position: 0x1277 / 4727
{
	if (Function_15(0x4000000))
	{
		Function_58();
		Function_12(0x4000000, 0, 1);
	}
	if (Function_15(0x10000000))
	{
		Function_58();
		Function_12(0x10000000, 0, 1);
	}
	if (Function_15(2) != Function_15(0x2000000))
	{
		Function_58();
		Function_12(0x2000000, Function_15(2), 1);
	}
	if (Function_46())
	{
		Function_57(!Function_15(16));
	}
	if (Function_15(16))
	{
		Function_56(&uParam0, &uParam1, &iParam2);
		if (Function_15(8192))
		{
			if (!Function_15(4194304))
			{
				Function_12(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_15(8388608))
			{
				Function_12(8388608, 1, 1);
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
			Function_11();
		}
		Function_12(16384, 1, 1);
	}
	else if (!Function_15(32))
	{
		Function_11();
	}
	Function_12(32768, 0, 1);
	return;
}

void Function_56(var uParam0, var uParam1, int iParam2) //Position: 0x1410 / 5136
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_12(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_15(0x40000000);
	bVar3 = !Function_15(131072);
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
				if (Function_37(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_15(4))
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
			if (Function_37(bVar1, (4294966296 - bVar1), 1))
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

void Function_57(bool bParam0) //Position: 0x1588 / 5512
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_12(16384, 0, 1);
	return;
}

void Function_58() //Position: 0x15A2 / 5538
{
	Function_12(32768, 1, 0);
	return;
}

int Function_59() //Position: 0x15B1 / 5553
{
	return 1;
}

int Function_60(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0x15B8 / 5560
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	Function_45(bParam1, iParam2, cParam3);
	bVar0 = false;
	bVar1 = Function_44(bParam0);
	bVar2 = Function_43(bParam0);
	bVar3 = Function_40(bParam0);
	iVar4 = Function_39((bVar3 / CEIL(25.0f)), bVar1, bVar2);
	if (!bParam1)
	{
		Function_37(bParam0, iVar4, 0);
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
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar0, Function_35(38, bParam0));
		bVar0++;
		Function_31(bVar0, bParam0);
	}
	if (Function_61(bParam0))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
	}
	return 0;
}

bool Function_61(bool bParam0) //Position: 0x16AD / 5805
{
	if (Function_63(bParam0, 1, 0) != 4294967295 && Function_62() != 4294967295)
	{
		return 0;
	}
	return Function_63(bParam0, 1, 0) != Function_62();
}

int Function_62() //Position: 0x16D5 / 5845
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_63(GET_LOCAL_SLOT(), 1, 0);
}

int Function_63(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16EC / 5868
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

int Function_64() //Position: 0x1730 / 5936
{
	if (!Function_49(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_score");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_killstolen");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_65();
	Function_48();
	return 1;
}

void Function_65() //Position: 0x17C7 / 6087
{
	if (Function_75())
	{
		NET_PLAYER_LIST_SET_TEAM_SORT(1);
		if (Function_74())
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(2);
		}
		else
		{
			NET_PLAYER_LIST_SET_TOP_TEAM(4);
		}
		Function_66(0, 0);
		Function_66(1, 0);
	}
	return;
}

void Function_66(bool bParam0, bool bParam1) //Position: 0x17F2 / 6130
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 == Function_62())
	{
		bVar0 = 2;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = Function_73(bParam0);
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_SB_TFMT"), I2STR(bVar1), false, false);
	if (bParam1)
	{
		Function_67(bVar0, bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, 4294967295, "");
	}
	else
	{
		NET_PLAYER_LIST_SET_TEAM_SCORE(bVar0, bVar1, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	return;
}

void Function_67(int iParam0, int iParam1, bool bParam2) //Position: 0x1891 / 6289
{
	bool bVar0;
	struct<4> Var1;
	
	if (iParam0 > 0 || iParam0 <= 7)
	{
		LOG_ERROR("Tried to set bad team in SCOREBOARD_ADD_TEAM_HEADER");
		return;
	}
	bVar0 = false;
	if (Function_46())
	{
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000002:
				Var1 = { StackVal, StackVal, StackVal, Function_69(iParam1, 0) };
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
		if (Function_68())
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

bool Function_68() //Position: 0x1984 / 6532
{
	return (Function_15(4096) || Function_15(4));
}

struct<16> Function_69(var uParam0, var uParam1) //Position: 0x1995 / 6549
{
	return StackVal, StackVal, StackVal, Function_70(Function_71(uParam0), uParam1);
}

struct<16> Function_70(bool bParam0, bool bParam1) //Position: 0x19A7 / 6567
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

int Function_71(int iParam0) //Position: 0x19DC / 6620
{
	if (!Function_72())
	{
		return 0;
	}
	return StackVal;
}

bool Function_72() //Position: 0x19F5 / 6645
{
	return UNK_0xA80C6DE6(&Global_78578);
}

int Function_73(int iParam0) //Position: 0x1A02 / 6658
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return Global_78578[iParam02];
}

bool Function_74() //Position: 0x1A1E / 6686
{
	return Function_62() == 4294967295;
}

bool Function_75() //Position: 0x1A29 / 6697
{
	return Function_76(2);
}

int Function_76(int iParam0) //Position: 0x1A33 / 6707
{
	return Function_77(&Global_79349, iParam0);
}

int Function_77(var uParam0, int iParam1) //Position: 0x1A42 / 6722
{
	return Function_16(uParam0->f_44, iParam1);
}

void Function_78(vector3 vParam0, float fParam3) //Position: 0x1A51 / 6737
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("TurretFinderSet", Function_82(), 4294967295, 0);
	bVar1 = CREATE_VOLUME_IN_LAYOUT(Function_82(), "TurretFinderVol", 0, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, fParam3);
	bVar2 = LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_gatlingGun01x", 1);
	bVar2 = (bVar2 + LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar0, bVar1, "p_gen_cannon02x", 1));
	bVar3 = false;
	while (bVar3 <= bVar2)
	{
		Function_79(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0));
		bVar3++;
	}
	DESTROY_OBJECTSET(bVar0);
	DESTROY_VOLUME(bVar1);
}

int Function_79(bool bParam0) //Position: 0x1B04 / 6916
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
	return Function_80(bVar0);
}

int Function_80(bool bParam0) //Position: 0x1B3F / 6975
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
	Function_81(bVar0);
	return bVar0;
}

void Function_81(bool bParam0) //Position: 0x1B8D / 7053
{
	SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.4f);
	return;
}

var Function_82() //Position: 0x1BA0 / 7072
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_83(var uParam0, vector3 vParam1, var uParam4, var uParam5) //Position: 0x1BCF / 7119
{
	if (!IS_OBJECT_VALID(Local_12.f_104))
	{
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		Call_Loc(uParam0);
		Local_12.f_104 = StackVal;
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_12.f_104, 411, 0f, 2, 0), "Lobby_blip");
		NET_OBJECT_REPLICATION_MODE_END(17);
	}
	Function_84(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12) + Vector(0.0f, 2.45f, 0.0f), 1, 7978, 1, 125, 0, 0, 0);
	Function_84(StackVal, StackVal, StackVal, StackVal, Vector(vParam1, Local_12.f_104, &Local_12 + 48) + Vector(0.0f, 2.15f, 0.0f), uParam4, uParam5, 1, 180, 180, 180, 0);
}

void Function_84(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11) //Position: 0x1C52 / 7250
{
	vector3 vVar0;
	int iVar3;
	
	if (GET_CAMERA_CHANNEL_POSITION(&vVar0, 0))
	{
		iVar3 = ((SHIFT_LEFT(bParam8, 16) + SHIFT_LEFT(bParam9, 8)) + iParam10);
		Function_85(StackVal, StackVal, StackVal, StackVal, uParam0, vVar0, GET_CURRENT_GAME_TIME(), GET_LAST_FRAME_TIME(), uParam1, vParam2, uParam5, uParam6, iParam7, iVar3, iParam11, "", 0);
	}
}

void Function_85(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, vector3 vParam7, int iParam10, var uParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16) //Position: 0x1C9D / 7325
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
			Function_29(iParam0);
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
					Function_29(iParam0);
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
			fVar14 = Function_86(iParam0->f_36);
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

var Function_86(float fParam0) //Position: 0x1F1C / 7964
{
	return (fParam0 * 57.29578f);
}

var Function_87(int iParam0, var uParam1) //Position: 0x1F2A / 7978
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

var Function_88(int iParam0, var uParam1) //Position: 0x1F8F / 8079
{
	uParam1 = uParam1;
	if (Local_12.f_100 != iParam0)
	{
		Local_12.f_100 = iParam0;
		UI_SET_STRING_FORMAT("mp_lobby_summary", UI_GET_STRING("DM_summary"), I2STR(Global_83591), I2STR(CEIL((Global_83591.f_16 / 60.0f))), false);
	}
	return "mp_lobby_summary";
}

var Function_89() //Position: 0x1FFB / 8187
{
	int iVar0;
	
	iVar0 = Function_95(Global_83591.f_140, &vLocal_43, 0.0f, &Global_83591 + 276, 1);
	Function_90(iVar0, &Global_83591 + 276 + 228);
	return iVar0;
}

var Function_90(bool bParam0, int iParam1) //Position: 0x2028 / 8232
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
	bVar12 = CREATE_PROP_IN_LAYOUT(bParam0, Function_94(), "p_gen_crateMultiplayerWeapon01x", vVar0, vVar3, 1);
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_93((*iParam1)[iVar202], &iVar21))
		{
			iVar19++;
		}
		iVar20++;
	}
	iVar22 = 0;
	iVar20 = 0;
	while (iVar20 <= 6)
	{
		if (Function_93((*iParam1)[iVar202], &iVar21))
		{
			if (Function_91((*iParam1)[iVar202], &vVar13, &vVar16, iVar22, iVar19))
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

bool Function_91(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x2137 / 8503
{
	float fVar0;
	
	if (!Function_92(bParam0))
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

bool Function_92(int iParam0) //Position: 0x225E / 8798
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_93(bool bParam0, int iParam1) //Position: 0x2270 / 8816
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

var Function_94() //Position: 0x22CC / 8908
{
	int iVar0;
	
	return iVar0;
}

var Function_95(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x22D4 / 8916
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10[3];
	
	bVar0 = Function_97(uParam0, uParam1, uParam2, uParam4);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		if (Function_93((*uParam3)[iVar12], &iVar2))
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
		if (Function_93((*uParam3)[iVar12], &iVar2))
		{
			if (Function_96((*uParam3)[iVar12], &vVar3, &vVar6, (iVar10[iVar2] - 1)))
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

bool Function_96(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0x23C2 / 9154
{
	if (!Function_92(bParam0))
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

var Function_97(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2553 / 9555
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
	return CREATE_PROP_IN_LAYOUT(StackVal, StackVal, StackVal, Vector("", uParam0, StackVal) + Vector(vVar6, *iParam1, Function_98()), 0.0f, (bParam2 + 180.0f), 0.0f, 1);
}

var Function_98() //Position: 0x25BF / 9663
{
	return "$/fragments/p_gen_dressForm01x";
}

bool Function_99(bool bParam0, bool bParam1) //Position: 0x25E6 / 9702
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_100() //Position: 0x2606 / 9734
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
						Function_101("DM_help", 4294967295);
						break;
					
					case 0x00000011:
						Function_101("TDM_help", 4294967295);
						break;
				}
				iLocal_46 = 1;
			}
		}
	}
	else
	{
		Function_9();
	}
	return;
}

void Function_101(char* cParam0, int iParam1) //Position: 0x2676 / 9846
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

int Function_102(int iParam0) //Position: 0x270D / 9997
{
	int iVar0;
	
	if (!Function_113(*iParam0) || (Function_130(64) && Function_109()))
	{
		iParam0->f_4 = 0;
		Function_23(iParam0);
		if (!Function_113(*iParam0))
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
			if (Function_113(*iParam0))
			{
				iParam0->f_4 = 1;
				iParam0->f_8 = 0;
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_DOOR_MUTE", iParam0 + 140);
			}
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_136)
				{
					if (!IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
					{
						(iParam0 + 12[Function_106(StackVal, StackVal, StackVal)5])->f_12 = StackVal;
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_16((iParam0 + 12[StackVal5])->f_16, 32))
							{
								Function_13(iParam0 + 12[StackVal5] + 16, 64);
							}
						}
						else if (!Function_16((iParam0 + 12[StackVal5])->f_16, 32))
						{
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_136)
			{
				iParam0->f_8 = 0;
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (StackVal <= iParam0->f_136)
				{
					if (!Function_16((iParam0 + 12[StackVal5])->f_16, 32))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							if (Function_16((iParam0 + 12[StackVal5])->f_16, 2))
							{
								Function_105((iParam0 + 12[StackVal5])->f_12, 1);
							}
							else
							{
								Function_104((iParam0 + 12[StackVal5])->f_12, 1);
							}
						}
					}
					iParam0->f_8 = StackVal + 1;
				}
				iVar0++;
			}
			if (StackVal > iParam0->f_136)
			{
				iParam0->f_144 = GET_CURRENT_GAME_TIME();
				iParam0->f_8 = 0;
				iParam0->f_4 = 3;
			}
			break;
		
		case 0x00000003:
			if ((GET_CURRENT_GAME_TIME() - iParam0->f_144) < 3.0f)
			{
				iParam0->f_4 = 4;
				Function_23(iParam0);
			}
		
		case 0x00000004:
			iVar0 = 0;
			while (iVar0 <= Function_103(3, iParam0->f_136))
			{
				if (iParam0->f_136 > 2)
				{
					iParam0->f_8 = (StackVal + 1 % iParam0->f_136);
				}
				else
				{
					iParam0->f_8 = 0;
				}
				if (Function_16((iParam0 + 12[StackVal5])->f_16, 32))
				{
					if (!Function_16((iParam0 + 12[StackVal5])->f_16, 64))
					{
						if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
						{
							OPEN_DOOR_DIRECTION((iParam0 + 12[StackVal5])->f_12, false);
							DESTROY_OBJECT((iParam0 + 12[StackVal5])->f_12);
						}
						Function_14(iParam0 + 12[StackVal5] + 16, 64);
					}
				}
				else if (IS_DOOR_VALID((iParam0 + 12[StackVal5])->f_12))
				{
					if (Function_16((iParam0 + 12[StackVal5])->f_16, 4))
					{
						if (Function_16((iParam0 + 12[StackVal5])->f_16, 8))
						{
							if (StackVal || IS_DOOR_CLOSED((iParam0 + 12[IS_DOOR_CLOSING((iParam0 + 12[StackVal5])->f_12)5])->f_12))
							{
								OPEN_DOOR_DIRECTION(StackVal, Function_16((iParam0 + 12[(iParam0 + 12[StackVal5])->f_125])->f_16, 16));
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

int Function_103(int iParam0, bool bParam1) //Position: 0x2A8A / 10890
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_104(bool bParam0, bool bParam1) //Position: 0x2A9C / 10908
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

void Function_105(bool bParam0, bool bParam1) //Position: 0x2AF0 / 10992
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

int Function_106(var uParam0, var uParam1, int iParam2) //Position: 0x2B41 / 11073
{
	return Function_107(Global_29006, uParam0, uParam1, iParam2);
}

int Function_107(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x2B53 / 11091
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_108(iParam0))
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

bool Function_108(int iParam0) //Position: 0x2BEF / 11247
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_109() //Position: 0x2C05 / 11269
{
	return !Function_110();
}

bool Function_110() //Position: 0x2C0F / 11279
{
	if (Function_112())
	{
		return (Function_111() != 1 || Function_111() != 0);
	}
	return 0;
}

int Function_111() //Position: 0x2C28 / 11304
{
	return Global_79349.f_16;
}

bool Function_112() //Position: 0x2C34 / 11316
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_113(int iParam0) //Position: 0x2C3D / 11325
{
	if (!Function_108(iParam0))
	{
		return 1;
	}
	return Function_114(&(Global_29008[iParam0]), 4);
}

int Function_114(var uParam0, bool bParam1) //Position: 0x2C59 / 11353
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_115(int iParam0, float fParam1, float fParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x2C75 / 11381
{
	float fVar0;
	
	if (Function_126())
	{
		if (Function_125(&Global_78578 + 96))
		{
			fVar0 = (1.0f - (Function_121(&Global_78578 + 96) / Global_83591.f_16));
			if (fVar0 < fParam1 && !*iParam0)
			{
				Function_119((iParam0 + 8[iParam0->f_1125])->f_12, 0, iParam3, 0, 0);
				Function_116((iParam0 + 8[iParam0->f_1125])->f_12, uParam4, uParam5);
				*iParam0 = 1;
			}
			else if (StackVal && !fVar0 < fParam2)
			{
				Function_119((iParam0 + 8[iParam0->f_1125])->f_16, 0, iParam3, 0, 0);
				Function_116((iParam0 + 8[iParam0->f_1125])->f_16, uParam6, iParam7);
				iParam0->f_4 = 1;
			}
		}
	}
}

void Function_116(int iParam0, var uParam1, int iParam2) //Position: 0x2D18 / 11544
{
	if (iParam0 != 3 || iParam0 != 4)
	{
		Function_118(uParam1);
	}
	else if (iParam0 == 4)
	{
		Function_117(iParam2);
	}
	return;
}

void Function_117(int iParam0) //Position: 0x2D3D / 11581
{
	Global_16524.f_28 = iParam0;
	SET_LIGHTNING_AMOUNT(Global_16524.f_28);
	return;
}

void Function_118(int iParam0) //Position: 0x2D52 / 11602
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_119(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2D67 / 11623
{
	int iVar0;
	bool bVar1;
	
	Function_7(iParam0);
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
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_4(StackVal, bVar1, bParam4);
		}
	}
}

void Function_120(int iParam0, int iParam1) //Position: 0x2DD9 / 11737
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_7(iParam0);
	Function_6(iVar0);
	PRINTNL();
	Function_4(iParam0, iVar0, iParam1);
	return;
}

float Function_121(int iParam0) //Position: 0x2DFE / 11774
{
	return -Function_122(iParam0);
}

float Function_122(int iParam0) //Position: 0x2E0A / 11786
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

void Function_123() //Position: 0x2EDB / 11995
{
	if (!Function_126())
	{
	}
	return;
}

bool Function_124(int iParam0) //Position: 0x2EE8 / 12008
{
	return Function_16(*iParam0, 2);
}

bool Function_125(int iParam0) //Position: 0x2EF5 / 12021
{
	return Function_16(*iParam0, 1);
}

bool Function_126() //Position: 0x2F02 / 12034
{
	return NET_IS_IN_SESSION();
}

void Function_127() //Position: 0x2F0B / 12043
{
	bool bVar0;
	
	bVar0 = CREATE_LAYOUT(Function_94());
	Function_128(bVar0, "bottle", Local_136.f_92);
	Function_128(bVar0, "crate14", Local_136.f_92);
	Function_128(bVar0, "p_gen_crate03x", Local_136.f_92);
	Function_128(bVar0, "package", Local_136.f_92);
	Function_128(bVar0, "nlantern05", Local_136.f_92);
	Function_128(bVar0, "p_gen_bucket02x", Local_136.f_92);
	Function_128(bVar0, "np_gen_can", Local_136.f_92);
	Function_128(bVar0, "p_gen_bedrollclosed01x", Local_136.f_92);
	Function_128(bVar0, "spittoon", Local_136.f_92);
	Function_128(bVar0, "milkcan", Local_136.f_92);
	Function_128(bVar0, "jug", Local_136.f_92);
	Function_128(bVar0, "broom", Local_136.f_92);
	Function_128(bVar0, "stool", Local_136.f_92);
	Function_128(bVar0, "boots", Local_136.f_92);
	Function_128(bVar0, "chairbroken", Local_136.f_92);
	Function_128(bVar0, "kettle", Local_136.f_92);
	Function_128(bVar0, "sawhorse", Local_136.f_92);
	Function_128(bVar0, "debrisboard", Local_136.f_92);
	Function_128(bVar0, "p_gen_woodplane01x", Local_136.f_92);
	Function_128(bVar0, "pot", Local_136.f_92);
	Function_128(bVar0, "cauldron", Local_136.f_92);
	Function_128(bVar0, "p_gen_lumber07x", Local_136.f_92);
	Function_128(bVar0, "saw", Local_136.f_92);
	Function_128(bVar0, "p_gen_woodboard01x", Local_136.f_92);
	DESTROY_LAYOUT(bVar0);
	return;
}

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x311D / 12573
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_94(), bParam0, 4294967295, 1);
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

void Function_129(int iParam0, bool bParam1) //Position: 0x3176 / 12662
{
	if (bParam1)
	{
		Function_14(&Global_83591 + 140 + 4, iParam0);
	}
	else
	{
		Function_13(&Global_83591 + 140 + 4, iParam0);
	}
	return;
}

bool Function_130(int iParam0) //Position: 0x319E / 12702
{
	return Function_16(StackVal, iParam0);
}

void Function_131(bool bParam0) //Position: 0x31B1 / 12721
{
	Function_129(16, bParam0);
	return;
}

void Function_132(var uParam0) //Position: 0x31BE / 12734
{
	Function_129(8, uParam0);
	return;
}

bool Function_133() //Position: 0x31CB / 12747
{
	var uVar0;
	
	Function_273(&iLocal_363, 0, 9, 30, 0, 0, 1);
	Function_273(&iLocal_363, 1, 9, 30, 3, 3, 3);
	Function_273(&iLocal_363, 2, 12, 0, 2, 2, 1);
	Function_273(&iLocal_363, 3, 12, 0, 1, 1, 0);
	Function_273(&iLocal_363, 4, 23, 0, 0, 0, 1);
	Function_270(&iLocal_363);
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	Function_268();
	ENABLE_CHILD_SECTOR("mp_upr_ffa02x");
	SET_SECTOR_PROPS_SUPER_LOCKED("mp_upr_ffa02x", 1);
	NET_OBJECT_REPLICATION_MODE_END(17);
	Function_261(&Global_83591 + 276, 0);
	Function_259(&Global_83591, 1, 22, 1, 1);
	Function_259(&Global_83591, 2, 0, 10, 1);
	Function_259(&Global_83591, 3, 15, 10, 1);
	Function_259(&Global_83591, 4, 9, 10, 1);
	Function_254(&Global_83591, 1, 1, 10, 1);
	Function_254(&Global_83591, 2, 16, 10, 1);
	Function_254(&Global_83591, 3, 24, 5, 1);
	Function_253(&Global_83591);
	Function_252(&Global_83591 + 276, 4);
	Function_251(0, 6);
	Function_251(1, 1);
	if (!Function_247(&uLocal_326))
	{
		return 0;
	}
	Function_232();
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	iLocal_308 = TRAIN_CREATE_NEW_TRAIN(5, "rail_upr__rrtrack_01x", 0);
	if (iLocal_308 > 0)
	{
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_308, 1166);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_308, 1167);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_308, 1160);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_308, 1164);
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_308, 1162);
		bLocal_309 = GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_308, 0));
		UNK_0xF1A53C41(&uVar0, &Local_136 + 652 + 12, 1, 0);
		if (IS_ACTOR_VALID(bLocal_309))
		{
			TRAIN_SET_POSITION_DIRECTION(iLocal_308, &Local_136 + 652, &uVar0);
			TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iLocal_308, 4294967295, 0);
		}
	}
	else
	{
		LOG_ERROR("Failed to createtrain for UPR curve!");
	}
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_134();
	return 1;
}

void Function_134() //Position: 0x33A0 / 13216
{
	NET_SCRIPTMSG_REGISTER_HANDLER(6, 13326);
	uLocal_307 = Function_135("DLCPVP");
	return;
}

var Function_135(bool bParam0) //Position: 0x33BE / 13246
{
	bool bVar0;
	
	bVar0 = Function_136();
	return CREATE_OBJECTSET_IN_LAYOUT(bParam0, bVar0, 3, 1);
}

var Function_136() //Position: 0x33D2 / 13266
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(bVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return bVar0;
}

void Function_137(var uParam0) //Position: 0x340E / 13326
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
			bVar11 = Function_76(16384);
			if (StackVal == bVar12)
			{
				if (Var0.f_32 == 0)
				{
					if (Function_231())
					{
					}
					else
					{
						if (bVar11)
						{
							switch (Function_111())
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
							Function_228(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23122] + 4, &Global_50170[23122] + 8, &Global_50170[23122] + 12, Var0);
							Function_224(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_50170[23022] + 4, &Global_50170[23022] + 8, &Global_50170[23022] + 12, Var0);
							Function_140(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0);
						}
						if (Function_110() || Function_138(4096))
						{
							if (Function_99(131072, 1))
							{
							}
							if (Function_32(Var0, 131072, 1))
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
			if (bVar11 && !Function_138(2048))
			{
				if (IS_SLOT_VALID(StackVal))
				{
				}
			}
			break;
	}
	return;
}

bool Function_138(int iParam0) //Position: 0x3572 / 13682
{
	return Function_139(Global_79336, iParam0);
}

bool Function_139(var uParam0, bool bParam1) //Position: 0x3581 / 13697
{
	return (uParam0 && bParam1) == 0;
}

void Function_140(struct<29> Param0) //Position: 0x358E / 13710
{
	var uVar0;
	var uVar1;
	
	uVar0 = "challenge_01lvl2_128";
	uVar1 = "challenge_01_128";
	switch (Param0.f_12)
	{
		case 0x0000001D:
			Function_145(&(Global_50170[22822]), 0, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, uVar1);
			if (Param0.f_28)
			{
				Function_145(&(Global_50170[22922]), 0, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, uVar0);
				if (StackVal == 10)
				{
					SET_WEAPON_GOLD(Function_144(), 29, 1);
					Global_83823[29] = 1;
					Function_141(6002);
					Function_141(6005);
					Function_141(6009);
				}
			}
			if (StackVal == 10)
			{
				Function_141(6001);
				Function_141(6004);
			}
			break;
	}
}

void Function_141(int iParam0) //Position: 0x366F / 13935
{
	Function_142(iParam0, 1);
	return;
}

void Function_142(int iParam0, bool bParam1) //Position: 0x367B / 13947
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_14(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_143((iVar0 % 32)));
	}
	else
	{
		Function_13(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_143((iVar0 % 32)));
	}
	return;
}

int Function_143(bool bParam0) //Position: 0x36D1 / 14033
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_144() //Position: 0x36DD / 14045
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_145(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5, int iParam6, float fParam7, int iParam8, var uParam9) //Position: 0x36F2 / 14066
{
	if (Global_83864.f_1264 > iParam1)
	{
		Function_146(uParam0, iParam1, iParam2, fParam3, iParam4, fParam5, iParam6, fParam7, 4294967295, iParam8, uParam9);
	}
}

void Function_146(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7, int iParam8, var uParam9, var uParam10) //Position: 0x371E / 14110
{
	switch (StackVal)
	{
		case 0x00000000:
			if (StackVal == 0)
			{
				Function_223(uParam0, uParam2, uParam3);
			}
			Function_147(uParam0, iParam1, uParam2, iParam8, 1, uParam3, uParam9, bParam4, uParam5, uParam10);
			break;
		
		case 0x00000001:
			Function_147(uParam0, iParam1, bParam4, iParam8, 2, uParam5, uParam9, bParam6, uParam7, uParam10);
			break;
		
		case 0x00000002:
			Function_147(uParam0, iParam1, bParam6, iParam8, 3, uParam7, uParam9, 0, 0.0f, uParam10);
			break;
	}
}

void Function_147(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, float fParam8, var uParam9) //Position: 0x379B / 14235
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = Function_222(*uParam0);
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
					Function_220(uParam0, uParam5, uParam9);
				}
				else
				{
					Function_165(uParam0, iParam4, uParam5, uParam6, uParam9);
					Function_154(uParam0, bVar1, iParam7, fParam8);
				}
			}
		}
		else if (bVar1 > 0)
		{
			uParam0->f_12 = Function_153(1.0f, (TO_FLOAT(bVar1) / TO_FLOAT(bParam2)));
			if (uParam0->f_12 == fVar0)
			{
				Function_148(*uParam0, uParam0->f_12, 1, bVar1, 4294967295, 4294967295);
			}
		}
	}
}

void Function_148(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x3869 / 14441
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_152(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_151(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_152(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_150(iParam0, 4))
	{
		Function_149(Function_152(iParam0), 0);
	}
}

void Function_149(var uParam0, int iParam1) //Position: 0x3920 / 14624
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

bool Function_150(int iParam0, int iParam1) //Position: 0x3945 / 14661
{
	return Function_16(Global_50170[iParam022].f_32, iParam1);
}

struct<16> Function_151(int iParam0) //Position: 0x3959 / 14681
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_152(int iParam0) //Position: 0x398D / 14733
{
	return Global_50170[iParam022].f_24;
}

var Function_153(int iParam0, int iParam1) //Position: 0x399C / 14748
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_154(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x39AF / 14767
{
	Function_162(*uParam0);
	Function_155(*uParam0, bParam2, CEIL(bParam3), 0);
	if (bParam2 != 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_152(*uParam0), (TO_FLOAT(bParam1) / TO_FLOAT(bParam2)), 0, 0);
	}
	else
	{
		LOG_ERROR("Divide by zero attempt in MP_WEAPON_CHALLENGE_LEVEL_START.... ya thats bad bail out");
		SET_JOURNAL_ENTRY_PROGRESS(Function_152(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
}

void Function_155(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3A54 / 14932
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_161(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_152(iParam0));
	if ((bParam3 && Function_150(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_152(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_160(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_151(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_159(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_158(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_157(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_152(iParam0), &Var7, 0, 2, Function_150(iParam0, 4));
			if (!bParam3)
			{
				Function_156(iParam0, 4);
			}
		}
	}
}

void Function_156(int iParam0, int iParam1) //Position: 0x3B11 / 15121
{
	Function_14(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<16> Function_157(int iParam0) //Position: 0x3B25 / 15141
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_151(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_158(int iParam0) //Position: 0x3B45 / 15173
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_159(int iParam0) //Position: 0x3B73 / 15219
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_160(int iParam0) //Position: 0x3BA3 / 15267
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_161(int iParam0) //Position: 0x3BD4 / 15316
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

void Function_162(int iParam0) //Position: 0x3D52 / 15698
{
	Function_163(iParam0, 0, Global_50170[iParam022].f_28);
	return;
}

int Function_163(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3D68 / 15720
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_164();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

var Function_164() //Position: 0x3DDD / 15837
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_165(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3E2A / 15914
{
	struct<4> Var0;
	
	Function_219(*uParam0, bParam3);
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_151(*uParam0) };
	Function_214(&Var0, CEIL(bParam2), bParam4);
	uParam0->f_8 = uParam1;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0.0f;
	Function_213(*uParam0, 4);
	Function_166();
}

void Function_166() //Position: 0x3E88 / 16008
{
	if (!Function_112())
	{
		if (!Function_212(1, 3, 1, 1))
		{
			Function_200(1);
			Function_199(1, 8);
		}
	}
	else
	{
		Function_167(0);
	}
	return;
}

void Function_167(bool bParam0) //Position: 0x3EB1 / 16049
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_197(2);
	if (bParam0)
	{
		Function_197(1);
	}
	else
	{
		Function_195(1);
	}
	Function_168();
	return;
}

void Function_168() //Position: 0x3F3A / 16186
{
	Function_193();
	Function_192();
	Function_192();
	Function_191();
	Function_191();
	Function_190();
	Function_190();
	Function_175(0);
	Function_175(0);
	if (!Function_112())
	{
		Function_173();
		Function_172();
		Function_171();
		Function_170();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_169();
	return;
}

void Function_169() //Position: 0x3F8C / 16268
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

void Function_170() //Position: 0x4094 / 16532
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

void Function_171() //Position: 0x40C7 / 16583
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

void Function_172() //Position: 0x4255 / 16981
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

void Function_173() //Position: 0x4409 / 17417
{
	Function_174(&Global_28260, 1, 0);
	return;
}

void Function_174(int iParam0, bool bParam1, int iParam2) //Position: 0x4417 / 17431
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
	
	bVar0 = Function_144();
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

struct<8> Function_175(int iParam0) //Position: 0x4608 / 17928
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
					iVar2 = ((Function_189((50 + iVar4)) + Function_189((183 + iVar4))) + Function_189((90 + iVar4)));
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
	Function_176(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_176(int iParam0, bool bParam1, bool bParam2) //Position: 0x46AE / 18094
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
		Function_188(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_187(iParam0);
	if (bParam2)
	{
		Function_177(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_177(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x4949 / 18761
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_186(390))), 32);
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
					bVar19 = (Function_185(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_185(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_183(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_181(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_179(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_178(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_94(), &Var9);
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

var Function_178(int iParam0) //Position: 0x4F76 / 20342
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_179(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4F87 / 20359
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_180("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_180("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_180("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_180(char* cParam0, bool bParam1) //Position: 0x507C / 20604
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_181(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x5095 / 20629
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_103(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_182(Function_103(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_182(int iParam0, int iParam1) //Position: 0x50FA / 20730
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_183(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x510C / 20748
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
	if (((Function_184(iParam0) != 19 || Function_184(iParam0) != 17) || Function_184(iParam0) != 10) || Function_184(iParam0) != 9)
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

int Function_184(int iParam0) //Position: 0x523C / 21052
{
	return Global_35278[iParam020].f_48;
}

float Function_185(int iParam0) //Position: 0x524B / 21067
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_186(int iParam0) //Position: 0x5284 / 21124
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_187(int iParam0) //Position: 0x52C1 / 21185
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

int Function_188(int iParam0, bool bParam1, bool bParam2) //Position: 0x545B / 21595
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

int Function_189(bool bParam0) //Position: 0x569F / 22175
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_190() //Position: 0x56E0 / 22240
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
		iVar2 = ((Function_189((50 + iVar3) + 15) + Function_189((183 + iVar3) + 15)) + Function_189((90 + iVar3) + 15));
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
	Function_176(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_191() //Position: 0x5769 / 22377
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
			iVar2 = ((Function_189((50 + iVar3) + 8) + Function_189((183 + iVar3) + 8)) + Function_189((90 + iVar3) + 8));
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
	Function_176(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_192() //Position: 0x5800 / 22528
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
		iVar2 = ((Function_189((50 + iVar3)) + Function_189((183 + iVar3))) + Function_189((90 + iVar3)));
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
	Function_176(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_193() //Position: 0x587F / 22655
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_194(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_176(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_194(int iParam0, bool bParam1, int iParam2) //Position: 0x58B8 / 22712
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
	Function_188(iParam0, bParam1, 1);
	Function_187(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_177(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_195(int iParam0) //Position: 0x5AC2 / 23234
{
	Function_196(&Global_79338, iParam0);
	return;
}

void Function_196(var uParam0, int iParam1) //Position: 0x5AD1 / 23249
{
	Function_13(uParam0, iParam1);
	return;
}

void Function_197(int iParam0) //Position: 0x5ADE / 23262
{
	Function_198(&Global_79338, iParam0);
	return;
}

void Function_198(var uParam0, int iParam1) //Position: 0x5AED / 23277
{
	Function_14(uParam0, iParam1);
	return;
}

void Function_199(var uParam0, int iParam1) //Position: 0x5AFA / 23290
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_112())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_200(bool bParam0) //Position: 0x5B3C / 23356
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_201();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_168();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_13(&Global_63095, 1);
		Function_13(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_201() //Position: 0x5B8D / 23437
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_211())
	{
		Function_208(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_208(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_203(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_203(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_202(StackVal, StackVal, vVar0))
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

bool Function_202(vector3 vParam0) //Position: 0x5C48 / 23624
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_203(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5C60 / 23648
{
	int iVar0;
	
	iVar0 = Function_206(uParam2, uParam3);
	if (Function_205(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_14(&Global_63095, 1);
			Function_13(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_14(&Global_63095, 2);
			Function_13(&Global_63095, 1);
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
		Function_14(&Global_63095, 2);
		Function_13(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_204();
	return StackVal, StackVal, Function_204();
}

vector3 Function_204() //Position: 0x5D47 / 23879
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_205(int iParam0) //Position: 0x5D50 / 23888
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_206(bool bParam0, bool bParam1) //Position: 0x5D66 / 23910
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
				fVar2 = Function_207(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_207(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_205(bVar0) && !bParam1)
	{
		bVar0 = Function_206(bParam0, 1);
	}
	return bVar0;
}

float Function_207(vector3 vParam0, vector3 vParam3) //Position: 0x5E2D / 24109
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_208(var uParam0, int iParam1) //Position: 0x5E4A / 24138
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_210(Global_34573, &vVar4);
	if (!Function_209(Global_30640[0]))
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
	if (!Function_209(Global_30640[2]))
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
	if (!Function_209(Global_30640[1]))
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
	if (!Function_209(Global_30658[1]))
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
	if (!Function_209(Global_30658[3]))
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
	if (!Function_209(Global_30658[2]))
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
	if (!Function_209(Global_30658[4]))
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
	if (!Function_209(Global_30668[0]))
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
	if (!Function_209(Global_30668[1]))
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
	if (!Function_209(Global_30668[2]))
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
	if (!Function_209(Global_30679[0]))
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
	if (!Function_209(Global_30685[0]))
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
	if (!Function_209(Global_30685[1]))
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
	if (!Function_209(Global_30685[2]))
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
	if (!Function_209(Global_30693[0]))
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
	if (!Function_209(Global_30693[1]))
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
	if (!Function_209(Global_30693[2]))
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
	if (!Function_209(Global_30707[2]))
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
	if (!Function_209(Global_30707[3]))
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
	if (!Function_209(Global_30707[0]))
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
	if (!Function_209(Global_30717[0]))
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
	if (!Function_209(Global_30723[2]))
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
	if (!Function_209(Global_30723[1]))
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
	if (!Function_209(Global_30723[0]))
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
	if (!Function_209(Global_30679[1]))
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
	if (!Function_209(Global_30707[1]))
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
	Function_14(&Global_63095, 2);
	Function_13(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_202(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_209(int iParam0) //Position: 0x666F / 26223
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_16(uVar0, 0x1000000) || Function_16(uVar0, 0x2000000)) || Function_16(uVar0, 0x4000000)) || !Function_16(uVar0, 0x10000000));
}

void Function_210(bool bParam0, int iParam1) //Position: 0x66AA / 26282
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_211() //Position: 0x66B7 / 26295
{
	if (Function_16(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_212(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x66D2 / 26322
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

void Function_213(int iParam0, int iParam1) //Position: 0x6776 / 26486
{
	Function_13(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_214(bool bParam0, bool bParam1, bool bParam2) //Position: 0x678A / 26506
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_82();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_218(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_217(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_216(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_215(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_218(), iVar1 + 1);
	return;
}

struct<16> Function_215(int iParam0) //Position: 0x67FC / 26620
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_216(int iParam0) //Position: 0x681D / 26653
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_217(int iParam0) //Position: 0x683E / 26686
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_218() //Position: 0x685F / 26719
{
	return "CQueue_Count";
}

void Function_219(bool bParam0, bool bParam1) //Position: 0x6874 / 26740
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_164();
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

void Function_220(var uParam0, bool bParam1, bool bParam2) //Position: 0x69C0 / 27072
{
	Function_219(*uParam0, 1);
	uParam0->f_8 = 10;
	uParam0->f_4 = 2;
	uParam0->f_12 = 1.0f;
	SET_JOURNAL_ENTRY_PROGRESS(Function_152(*uParam0), 1.0f, 0, 0);
	Function_221(*uParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	Function_214(&Global_50170[*uParam022] + 16, CEIL(bParam1), bParam2);
	Function_166();
	return;
}

void Function_221(int iParam0, int iParam1) //Position: 0x6A25 / 27173
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_161(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_152(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_160(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_151(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_157(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_152(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_152(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_152(iParam0), 1.0f, 0, 0);
	}
	return;
}

float Function_222(int iParam0) //Position: 0x6AA7 / 27303
{
	return Global_50170[iParam022].f_12;
}

void Function_223(var uParam0, bool bParam1, bool bParam2) //Position: 0x6AB6 / 27318
{
	Function_162(*uParam0);
	if (!Function_150(*uParam0, 2))
	{
		Function_155(*uParam0, bParam1, CEIL(bParam2), 0);
		Function_156(*uParam0, 2);
		SET_JOURNAL_ENTRY_PROGRESS(Function_152(*uParam0), 0.0f, 0, 0);
	}
	uParam0->f_4 = 1;
	return;
}

void Function_224(var uParam0, var uParam1, var uParam2, struct<41> Param3) //Position: 0x6AF3 / 27379
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_222(230);
				if (StackVal == GET_LOCAL_SLOT())
				{
					if (IS_SLOT_VALID(Param3))
					{
						if (!Function_61(Param3) && Param3.f_12 != 29)
						{
							if (Function_139(Param3.f_40, 1048576))
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
					Function_226(230, 150, Function_227(), 4294967295);
					Function_141(6007);
					Function_141(6008);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_225(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_148(230, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_225(var uParam0, bool bParam1, int iParam2) //Position: 0x6BB5 / 27573
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(iParam2));
	return;
}

void Function_226(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x6BCD / 27597
{
	Function_219(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_152(iParam0), 1.0f, 0, 0);
	Function_221(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_141(iParam3);
	}
	Function_214(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_166();
}

bool Function_227() //Position: 0x6C33 / 27699
{
	return "MP_TrickShot_Icon_128";
}

void Function_228(var uParam0, var uParam1, var uParam2, struct<13> Param3) //Position: 0x6C51 / 27729
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 0)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_222(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 1)
				{
					Function_229(231, uParam0, 2, uParam1, 1, *uParam2, 0, 50, bVar0, 3, 100, Function_230(), 4294967295);
					*uParam2 = 0.0f;
					bVar0 = false;
					Function_141(6006);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_225(uParam2, bVar0, 1);
					if (*uParam2 == fVar1)
					{
						Function_148(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_222(231);
				if (Param3 != Global_56352[231] && Param3.f_12 != 29)
				{
					Global_56092[231]++;
				}
				bVar0 = Global_56092[231];
				if (bVar0 > 3)
				{
					Function_226(231, 100, Function_230(), 4294967295);
					Function_141(6003);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_225(uParam2, bVar0, 3);
					if (*uParam2 == fVar1)
					{
						Function_148(231, *uParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
}

void Function_229(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, int iParam12) //Position: 0x6D79 / 28025
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_151(uParam0) };
	Function_214(&Var0, uParam7, bParam11);
	*uParam1 = uParam2;
	*uParam3 = uParam4;
	Function_225(&uParam5, uParam8, uParam9);
	Function_148(uParam0, uParam5, uParam6, uParam8, 4294967295, 4294967295);
	Function_155(uParam0, uParam9, uParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_141(iParam12);
	}
	Function_213(uParam0, 4);
	Function_166();
}

var Function_230() //Position: 0x6DEF / 28143
{
	return "MP_Revenge_Icon_128";
}

bool Function_231() //Position: 0x6E0B / 28171
{
	if (Function_138(2048))
	{
		if ((IntToFloat(ABS(CEIL(GET_CURRENT_UNWARPED_TIME()))) - Global_78617.f_56) >= 3.0f)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void Function_232() //Position: 0x6E35 / 28213
{
	Function_243(Local_136);
	Function_241(Local_136.f_680);
	if (Function_75())
	{
		Function_240("NRT_SONG_03", "NRT_SONG_02", 0, 58, 58, 1);
	}
	else
	{
		Function_240("NRT_SONG_02", "NRT_SONG_01", 0, 58, 58, 1);
	}
	Function_239(&iLocal_310, 1166, 2, 0);
	Function_239(&iLocal_310, 1167, 2, 0);
	Function_239(&iLocal_310, 1160, 2, 0);
	Function_239(&iLocal_310, 1164, 2, 0);
	Function_239(&iLocal_310, 1162, 2, 0);
	while (!Function_233(&iLocal_310))
	{
		WAIT(0);
	}
	return;
}

bool Function_233(int iParam0) //Position: 0x6EE6 / 28390
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_238();
	iVar1 = 0;
	if (!Function_20(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_237(iParam0[iVar03], 8);
		}
		else if (Function_236())
		{
			iVar1 = 1;
			Function_237(iParam0[iVar03], 8);
		}
		Function_237(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_20(iParam0[iVar03], 4))
		{
			if (!Function_20(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_20(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_20(iParam0[03], 8) || iVar1));
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
				Function_237(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_20(iParam0[iVar03], 4))
		{
			if (!Function_20(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_237(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_237(iParam0[iVar03], 2);
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
							Function_237(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_237(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_237(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_237(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_237(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_237(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_237(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_237(iParam0[iVar03], 2);
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
	Function_234();
	return 1;
}

void Function_234() //Position: 0x7261 / 29281
{
	if (!Function_235(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_235(int iParam0) //Position: 0x72A1 / 29345
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_236() //Position: 0x72BD / 29373
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

void Function_237(var uParam0, int iParam1) //Position: 0x72E8 / 29416
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_238() //Position: 0x72F9 / 29433
{
	if (!Function_235(128))
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

var Function_239(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x733B / 29499
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_20(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_237(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_237(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_240(char* cParam0, char* cParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x740B / 29707
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

void Function_241(bool bParam0) //Position: 0x749B / 29851
{
	DECOR_SET_OBJECT(Function_242(), "LobbyGringoSet", bParam0);
	return;
}

var Function_242() //Position: 0x74BB / 29883
{
	return Global_83591.f_140;
}

void Function_243(var uParam0) //Position: 0x74C7 / 29895
{
	if (Function_246())
	{
		Function_252(&Global_83591 + 276, 2);
	}
	Function_245(uParam0);
	Global_83591.f_4 = 2;
	Function_244();
	vLocal_43 = { StackVal, StackVal, Function_244() };
	return;
}

vector3 Function_244() //Position: 0x74F1 / 29937
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	bVar0 = Function_242();
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

void Function_245(var uParam0) //Position: 0x7539 / 30009
{
	Global_83591.f_140 = uParam0;
	return;
}

bool Function_246() //Position: 0x7547 / 30023
{
	return Function_16(Global_79962, 1024);
}

bool Function_247(int iParam0) //Position: 0x7557 / 30039
{
	if (!Function_250(iParam0, Global_30723[2]))
	{
		return 0;
	}
	Function_248(iParam0, "unionPacific", "nfactory01", 1);
	Function_248(iParam0, "unionPacific", "nfactory01", 2);
	Function_248(iParam0, "unionPacific", "nfactory01", 3);
	Function_248(iParam0, "unionPacific", "repairStructure01", 1);
	Function_248(iParam0, "unionPacific", "repairStructure01", 2);
	Function_248(iParam0, "unionPacific", "repairStructure01", 3);
	return 1;
}

int Function_248(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x7653 / 30291
{
	int iVar0;
	
	iVar0 = iParam0->f_136;
	if (!Function_249(iParam0, uParam1, uParam2, iParam3))
	{
		return 0;
	}
	Function_14(iParam0 + 12[iVar05] + 16, 32);
	return 1;
}

bool Function_249(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7684 / 30340
{
	if (iParam0->f_136 > 6)
	{
		return 0;
	}
	(*iParam0 + 12)[iParam0->f_1365] = uParam1;
	(iParam0 + 12[iParam0->f_1365])->f_4 = uParam2;
	(iParam0 + 12[iParam0->f_1365])->f_8 = uParam3;
	(iParam0 + 12[iParam0->f_1365])->f_16 = 0;
	iParam0->f_136++;
	return 1;
}

bool Function_250(int iParam0, int iParam1) //Position: 0x76D8 / 30424
{
	int iVar0;
	
	if (!Function_108(iParam1))
	{
		return 0;
	}
	*iParam0 = iParam1;
	iParam0->f_136 = 0;
	iParam0->f_4 = 0;
	iParam0->f_140 = "";
	iVar0 = 0;
	while (iVar0 <= 6)
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

void Function_251(int iParam0, int iParam1) //Position: 0x774B / 30539
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	return;
}

void Function_252(int iParam0, int iParam1) //Position: 0x7759 / 30553
{
	(iParam0 + 228)->f_220 = 0;
	Function_14(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_253(int iParam0) //Position: 0x7771 / 30577
{
	iParam0->f_844 = 0;
	return;
}

void Function_254(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x777D / 30589
{
	Function_255(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_255(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7795 / 30613
{
	Function_256(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_256(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x77AC / 30636
{
	if (!Function_258(iParam1))
	{
		return;
	}
	Function_257(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_257(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x77CF / 30671
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

bool Function_258(int iParam0) //Position: 0x77F9 / 30713
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_259(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x7809 / 30729
{
	Function_260(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_260(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x7821 / 30753
{
	Function_256(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_261(int iParam0, bool bParam1) //Position: 0x7836 / 30774
{
	Function_265(iParam0);
	Function_265(iParam0 + 228);
	if (bParam1)
	{
		Function_262(iParam0);
	}
	return;
}

void Function_262(int iParam0) //Position: 0x7852 / 30802
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_263(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_263(var uParam0, int iParam1) //Position: 0x7872 / 30834
{
	Function_264(uParam0, iParam1, 0);
	return;
}

void Function_264(int iParam0, int iParam1, int iParam2) //Position: 0x7880 / 30848
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_265(int iParam0) //Position: 0x7891 / 30865
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_267(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_266(iParam0, 0.0f);
	return;
}

void Function_266(var uParam0, int iParam1) //Position: 0x78BE / 30910
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_267(var uParam0) //Position: 0x78CA / 30922
{
	Function_257(uParam0, 4294967295, 0, 1);
	return;
}

void Function_268() //Position: 0x78D8 / 30936
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
	
	Function_269(4, 1);
	uVar0 = uVar0;
	Local_136 = CREATE_LAYOUT("Deathmatch_UPR_layout");
	Local_136.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_136, "v_clear_vol", 2, -242.2954f, 84.1787f, 2107.223f, 0.0f, 0.0f, 0.0f, 204.0777f, 31.63f, 111.7695f);
	Local_136.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_136, "playablespace", 3, -241.5794f, 85.2767f, 2100.484f, 0.0f, 2.712623f, 0.0f, 122.9632f, 24.25337f, 79.83437f);
	Local_136.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_0", 3, -319.0659f, 84.41656f, 2081.279f, 0.0f, 88.57652f, 0.0f, 0.63779f, 1.296958f, 0.63779f);
	Local_136.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_1", 3, -332f, 85.46159f, 2084.0f, 0.0f, -27.5042f, 0.0f, 0.6828145f, 0.5221075f, 0.6828145f);
	Local_136.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_2", 3, -246.2404f, 84.35153f, 2088.422f, 0.0f, -47.50488f, 0.0f, 0.9901252f, 1.035971f, 0.9901252f);
	Local_136.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_3", 3, -252.5421f, 84.35153f, 2123.544f, 0.0f, 90.7117f, 0.0f, 0.599103f, 0.9386033f, 0.599103f);
	Local_136.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_4", 3, -277.8582f, 84.3515f, 2120.516f, 0.0f, 143.1245f, 0.0f, 0.7678013f, 2.249764f, 0.7678013f);
	Local_136.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_5", 3, -298.68f, 84.35147f, 2090.983f, 0.0f, 118.1119f, 0.0f, 0.6958052f, 2.038805f, 0.6958052f);
	Local_136.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_6", 3, -278.7705f, 85.09893f, 2125.329f, 0.0f, -304.4354f, 0.0f, 0.5572469f, 0.5640756f, 0.5572469f);
	Local_136.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_7", 3, -317.0653f, 85.24416f, 2134.78f, 0.0f, 213.7701f, 0.0f, 1.128405f, 0.9537593f, 1.128405f);
	Local_136.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_8", 3, -305.2015f, 82.21853f, 2144.346f, 0.0f, 147.0229f, 0.0f, 1.771514f, 1.672348f, 1.771514f);
	Local_136.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_9", 3, -254.336f, 82.32f, 2158.137f, 0.0f, 238.3584f, 0.0f, 1.529594f, 1.31074f, 1.529594f);
	Local_136.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_10", 3, -223.4249f, 84.0345f, 2141.011f, 0.0f, -90.69182f, 0.0f, 1.012778f, 0.8083526f, 1.012778f);
	Local_136.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_11", 3, -180.378f, 84.26f, 2041.17f, 0.0f, 395.7721f, 0.0f, 1.230193f, 1.463213f, 1.230193f);
	Local_136.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_12", 3, -220.2021f, 83.62152f, 2095.43f, 0.0f, 88.72132f, 0.0f, 0.8455517f, 2.477583f, 0.8455517f);
	Local_136.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_13", 3, -236.6582f, 83.92953f, 2080.262f, 0.0f, -3.505865f, 0.0f, 0.9994495f, 1.045527f, 0.9994495f);
	Local_136.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_14", 3, -256.0918f, 84.32647f, 2073.073f, 0.0f, 79.95204f, 0.0f, 0.6110595f, 1.790489f, 0.6110595f);
	Local_136.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_15", 3, -282.8363f, 84.23399f, 2075.718f, 0.0f, -31.10461f, 0.0f, 0.6635249f, 1.32301f, 0.6635249f);
	Local_136.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_16", 3, -296.7938f, 85.31701f, 2096.906f, 0.0f, -1.473733f, 0.0f, 0.7771606f, 0.4863359f, 0.7771606f);
	Local_136.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_17", 3, -210.0457f, 83.75115f, 2064.842f, 0.0f, -16.08353f, 0.0f, 0.8439148f, 1.682691f, 0.8439148f);
	Local_136.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_18", 3, -259.1844f, 84.32647f, 2074.73f, 0.0f, -10.17031f, 0.0f, 0.7129893f, 2.089157f, 0.7129893f);
	Local_136.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_19", 3, -177.5886f, 83.32544f, 2084.279f, 0.0f, -17.54044f, 0.0f, 1.03245f, 1.011124f, 1.03245f);
	Local_136.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_20", 3, -184.9661f, 83.32544f, 2093.412f, 0.0f, -1.473733f, 0.0f, 1.302845f, 1.117024f, 1.302845f);
	Local_136.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_21", 3, -213.4859f, 82.91f, 2149.64f, 0.0f, 156.3362f, 0.0f, 1.526999f, 0.9941695f, 1.526999f);
	Local_136.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_22", 3, -146.043f, 77.30186f, 2114.043f, 0.0f, -107.1518f, 0.0f, 2.081588f, 1.719169f, 2.081588f);
	Local_136.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_23", 3, -190.2278f, 83.32544f, 2093.557f, 0.0f, -91.54257f, 0.0f, 1.719456f, 1.277589f, 1.719456f);
	Local_136.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_24", 3, -168.9931f, 84.5758f, 2072.975f, 0.0f, -1.473733f, 0.0f, 0.7004838f, 0.4686829f, 0.7004838f);
	Local_136.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_25", 3, -326.8252f, 84.34729f, 2114.804f, -0.05372727f, -179.0082f, 0.001943148f, 0.6252569f, 0.7436916f, 0.6252569f);
	Local_136.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_26", 3, -298.9082f, 84.63981f, 2063.926f, 0.0f, -38.4072f, 0.0f, 0.9235454f, 1.841468f, 0.9235454f);
	Local_136.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_27", 3, -189.4412f, 83.66798f, 2122.778f, 0.0f, -206.999f, 0.0f, 1.016899f, 2.027606f, 1.016899f);
	Local_136.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_28", 3, -142.966f, 83.50543f, 2081.126f, 0.0f, -40.30092f, 0.0f, 2.081588f, 1.303484f, 2.081588f);
	Local_136.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_29", 3, -180.65f, 84.33f, 2136.73f, 0.0f, -125.6805f, 0.0f, 2.081588f, 1.690284f, 2.081588f);
	Local_136.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_30", 3, -309.6854f, 84.35149f, 2099.037f, 0.0f, 270.7159f, 0.0f, 1.362163f, 0.7754225f, 1.362163f);
	Local_136.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_31", 3, -260.6994f, 85.68996f, 2090.077f, 0.0f, 269.9576f, 0.0f, 0.8814763f, 1.009637f, 0.8814763f);
	Local_136.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_32", 3, -274.4105f, 85.68996f, 2101.507f, 0.0f, 359.5774f, 0.0f, 0.9661919f, 1.10667f, 0.9661919f);
	Local_136.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_33", 3, -291.8141f, 88.22102f, 2106.193f, 0.0f, 272.5823f, 0.0f, 0.9661919f, 0.7439415f, 0.9661919f);
	Local_136.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_34", 3, -306.7046f, 84.49184f, 2094.177f, 0.0f, 177.7941f, 0.0f, 0.85294f, 0.6567405f, 0.85294f);
	Local_136.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_35", 3, -306.6948f, 86.61697f, 2097.66f, 0.0f, -2.116269f, 0.0f, 0.8057687f, 0.62042f, 0.8057687f);
	Local_136.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_36", 3, -266.0598f, 84.35342f, 2131.404f, 0.0f, 267.983f, 0.0f, 0.85294f, 0.6567405f, 0.85294f);
	Local_136.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_37", 3, -277.074f, 84.59988f, 2094.773f, 0.0f, 449.332f, 0.0f, 0.6183671f, 0.4761258f, 0.6183671f);
	Local_136.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_38", 3, -260.4616f, 84.59988f, 2093.989f, 0.0f, 629.1451f, 0.0f, 0.4373344f, 0.3367356f, 0.4373344f);
	Local_136.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_39", 3, -171.9853f, 84.65691f, 2072.302f, 0.0f, 541.179f, 0.0f, 0.7979109f, 0.6143696f, 0.7979109f);
	Local_136.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_40", 3, -186.545f, 84.86f, 2115.299f, 0.0f, 629.6637f, 0.0f, 0.5437815f, 0.4186969f, 0.5437815f);
	Local_136.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_41", 3, -331.4499f, 85.75198f, 2102.483f, 0.0f, 176.6276f, 0.0f, 0.6468537f, 0.7258542f, 0.6468537f);
	Local_136.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_42", 3, -306.5954f, 84.35152f, 2118.933f, 0.0f, 358.3906f, 0.0f, 0.7269071f, 2.129938f, 0.7269071f);
	Local_136.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_43", 3, -294.3123f, 84.35148f, 2124.184f, 0.0f, 308.6634f, 0.0f, 1.152296f, 1.437081f, 1.152296f);
	Local_136.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_44", 3, -296.1275f, 84.35148f, 2136.075f, 0.0f, 237.0177f, 0.0f, 1.152296f, 1.437081f, 1.152296f);
	Local_136.f_280 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_45", 3, -314.4356f, 84.35148f, 2125.258f, 0.0f, 449.6511f, 0.0f, 1.152296f, 1.437081f, 1.152296f);
	Local_136.f_284 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_46", 3, -263.3276f, 87.30747f, 2130.507f, 0.0f, 271.0156f, 0.0f, 0.5524543f, 0.3583037f, 0.5524543f);
	Local_136.f_288 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_47", 3, -249.7818f, 84.35342f, 2130.006f, 0.0f, 88.30676f, 0.0f, 0.8693901f, 1.034068f, 0.8693901f);
	Local_136.f_292 = CREATE_VOLUME_IN_LAYOUT(Local_136, "SpawnVol_48", 3, -244.3782f, 83.56f, 2056.17f, 0.0f, 88.30676f, 0.0f, 1.230193f, 1.463213f, 1.230193f);
	*(&Local_136 + 296) = { -285.9283f, 84.3819f, 2074.795f };
	*(&Local_136 + 296 + 12) = { 0.0f, -128.2285f, 0.0f };
	Local_136.f_320 = CREATE_POINT_IN_LAYOUT(Local_136, "Showdown_A", -285.9283f, 84.3819f, 2074.795f, 0.0f, -128.2285f, 0.0f);
	*(&Local_136 + 324) = { -292.1121f, 84.60413f, 2069.98f };
	*(&Local_136 + 324 + 12) = { 0.0f, 52.31951f, 0.0f };
	Local_136.f_348 = CREATE_POINT_IN_LAYOUT(Local_136, "Showdown_B", -292.1121f, 84.60413f, 2069.98f, 0.0f, 52.31951f, 0.0f);
	*(&Local_136 + 352) = { -268.4771f, 84.23435f, 2078.81f };
	*(&Local_136 + 352 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_136.f_376 = CREATE_POINT_IN_LAYOUT(Local_136, "StandoffCenter", -268.4771f, 84.23435f, 2078.81f, 0.0f, 0.0f, 0.0f);
	Local_136.f_380 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_136, 8, 0);
	*(&Local_136 + 384[06]) = { -204.0943f, 85.11f, 2115.134f };
	*(&Local_136 + 384[06] + 12) = { 0.0f, -88.25211f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_D1", -204.0943f, 85.11f, 2115.134f, 0.0f, -88.25211f, 0.0f);
	DECOR_SET_INT(bVar1, "type", 4);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_136.f_380);
	*(&Local_136 + 384[16]) = { -204.8254f, 83.32549f, 2101.611f };
	*(&Local_136 + 384[16] + 12) = { 0.0f, -137.3432f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_B1", -204.8254f, 83.32549f, 2101.611f, 0.0f, -137.3432f, 0.0f);
	DECOR_SET_INT(bVar2, "type", true);
	DECOR_SET_INT(bVar2, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_136.f_380);
	*(&Local_136 + 384[26]) = { -261.7299f, 85.11237f, 2123.228f };
	*(&Local_136 + 384[26] + 12) = { 0.00115124f, -179.8524f, -0.4468799f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_B2", -261.7299f, 85.11237f, 2123.228f, 0.00115124f, -179.8524f, -0.4468799f);
	DECOR_SET_INT(bVar3, "type", true);
	DECOR_SET_INT(bVar3, "ID", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_136.f_380);
	*(&Local_136 + 384[36]) = { -297.4786f, 84.35147f, 2085.076f };
	*(&Local_136 + 384[36] + 12) = { 0.0f, -0.5082616f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_P1", -297.4786f, 84.35147f, 2085.076f, 0.0f, -0.5082616f, 0.0f);
	DECOR_SET_INT(bVar4, "type", true);
	DECOR_SET_INT(bVar4, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_136.f_380);
	*(&Local_136 + 384[46]) = { -296.8163f, 84.35149f, 2128.139f };
	*(&Local_136 + 384[46] + 12) = { 0.0f, -61.64834f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_P2", -296.8163f, 84.35149f, 2128.139f, 0.0f, -61.64834f, 0.0f);
	DECOR_SET_INT(bVar5, "type", true);
	DECOR_SET_INT(bVar5, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_136.f_380);
	*(&Local_136 + 384[56]) = { -243.6803f, 84.35148f, 2125.581f };
	*(&Local_136 + 384[56] + 12) = { 0.0f, -89.36001f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_P3", -243.6803f, 84.35148f, 2125.581f, 0.0f, -89.36001f, 0.0f);
	DECOR_SET_INT(bVar6, "type", true);
	DECOR_SET_INT(bVar6, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_136.f_380);
	*(&Local_136 + 384[66]) = { -255.6441f, 84.55697f, 2093.853f };
	*(&Local_136 + 384[66] + 12) = { 0.0f, -271.4762f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_P4", -255.6441f, 84.55697f, 2093.853f, 0.0f, -271.4762f, 0.0f);
	DECOR_SET_INT(bVar7, "type", true);
	DECOR_SET_INT(bVar7, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_136.f_380);
	*(&Local_136 + 384[76]) = { -200.5022f, 83.32547f, 2083.459f };
	*(&Local_136 + 384[76] + 12) = { 0.0f, -542.1815f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_P5", -200.5022f, 83.32547f, 2083.459f, 0.0f, -542.1815f, 0.0f);
	DECOR_SET_INT(bVar8, "type", true);
	DECOR_SET_INT(bVar8, "ID", 3);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_136.f_380);
	*(&Local_136 + 384[86]) = { -181.7833f, 83.66752f, 2114.811f };
	*(&Local_136 + 384[86] + 12) = { 0.0f, -268.0482f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_P6", -181.7833f, 83.66752f, 2114.811f, 0.0f, -268.0482f, 0.0f);
	DECOR_SET_INT(bVar9, "type", true);
	DECOR_SET_INT(bVar9, "ID", true);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_136.f_380);
	*(&Local_136 + 384[96]) = { -312.2364f, 84.35147f, 2131.491f };
	*(&Local_136 + 384[96] + 12) = { 0.0f, -332.1739f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_A1", -312.2364f, 84.35147f, 2131.491f, 0.0f, -332.1739f, 0.0f);
	DECOR_SET_INT(bVar10, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_136.f_380);
	*(&Local_136 + 384[106]) = { -246.1035f, 84.35151f, 2109.9f };
	*(&Local_136 + 384[106] + 12) = { 0.0f, -179.7552f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_136, "npickup_A2", -246.1035f, 84.35151f, 2109.9f, 0.0f, -179.7552f, 0.0f);
	DECOR_SET_INT(bVar11, "type", 2);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_136.f_380);
	*(&Local_136 + 652) = { -232.9754f, 84.11607f, 2114.923f };
	*(&Local_136 + 652 + 12) = { 0.0f, 269.1284f, 0.0f };
	Local_136.f_676 = CREATE_POINT_IN_LAYOUT(Local_136, "f_carspawn1", -232.9754f, 84.11607f, 2114.923f, 0.0f, 269.1284f, 0.0f);
	Local_136.f_680 = CREATE_OBJECTSET_IN_LAYOUT(Function_94(), Local_136, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "smoking_stand3", "smoking_stand", -298.6332f, 84.32938f, 2132.0f, 0.0f, 74.24701f, 0.0f), Local_136.f_680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "smoking_stand", "smoking_stand", -302.9257f, 84.32941f, 2131.319f, 0.0f, 85.53125f, 0.0f), Local_136.f_680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_dnd_rowdydrink2", "stand_dnd_rowdydrink", -303.4368f, 84.33514f, 2130.466f, 0.0f, -240.4274f, 0.0f), Local_136.f_680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "smoking_stand_loose", "smoking_stand_loose", -305.2578f, 84.32941f, 2128.851f, 0.0f, -151.9608f, 0.0f), Local_136.f_680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_dnd_rowdydrink3", "stand_dnd_rowdydrink", -307.1403f, 84.32941f, 2130.459f, 0.0f, -193.7396f, 0.0f), Local_136.f_680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -309.5937f, 84.32941f, 2133.33f, 0.0f, -68.27383f, 0.0f), Local_136.f_680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_fiddle_w_fiddle2", "stand_fiddle_w_fiddle", -307.9366f, 84.32941f, 2132.0f, 0.0f, -82.01376f, 0.0f), Local_136.f_680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -310.8121f, 84.32936f, 2128.0f, 0.0f, -84.88094f, 0.0f), Local_136.f_680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_stirringpot_w_any", "stand_stirringpot_w_any", -307.6281f, 84.329f, 2119.976f, 0.0f, 87.223f, 0.0f), Local_136.f_680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "lean_table", "lean_table", -306.0982f, 84.35149f, 2127.514f, 0.0f, -6.017395f, 0.0f), Local_136.f_680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", -298.0682f, 84.3515f, 2126.068f, 0.0f, -220.8979f, 0.0f), Local_136.f_680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_fiddle_w_fiddle1", "stand_fiddle_w_fiddle", -310.9259f, 84.35149f, 2123.696f, 0.0f, -127.0933f, 0.0f), Local_136.f_680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "smoking_stand1", "smoking_stand", -303.6776f, 84.32731f, 2133.453f, 0.0f, 28.47769f, 0.0f), Local_136.f_680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -305.4127f, 84.32683f, 2134.119f, 0.0f, -15.97797f, 0.0f), Local_136.f_680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "smoking_stand2", "smoking_stand", -309.369f, 84.33086f, 2131.135f, 0.0f, -83.28706f, 0.0f), Local_136.f_680);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_136, "smoking_stand5", "smoking_stand", -301.0825f, 84.35152f, 2131.7f, 0.0f, 85.53125f, 0.0f), Local_136.f_680);
	return;
}

void Function_269(int iParam0, int iParam1) //Position: 0x90B7 / 37047
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

void Function_270(int iParam0) //Position: 0x9100 / 37120
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

void Function_271(var uParam0, int iParam1) //Position: 0x9172 / 37234
{
	Function_7(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_120(StackVal, iParam1);
	}
	return;
}

bool Function_272(char* cParam0) //Position: 0x91A3 / 37283
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_273(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x91C2 / 37314
{
	(*iParam0 + 8)[iParam15] = iParam2;
	(iParam0 + 8[iParam15])->f_4 = iParam3;
	(iParam0 + 8[iParam15])->f_8 = iParam4;
	(iParam0 + 8[iParam15])->f_12 = iParam5;
	(iParam0 + 8[iParam15])->f_16 = iParam6;
}

void Function_274() //Position: 0x9204 / 37380
{
	while (!IS_EXITFLAG_SET())
	{
		Function_100();
		if (Function_75())
		{
			Function_54(5936, 5560);
		}
		else
		{
			Function_54(4094, 2254);
		}
		WAIT(0);
	}
	return;
}

bool Function_275() //Position: 0x9236 / 37430
{
	return Function_130(2);
}

void Function_276() //Position: 0x9240 / 37440
{
	if (Function_275())
	{
		return;
	}
	Function_280();
	Function_278(&iLocal_39, Function_98(), 0, 0);
	while (!Function_233(&iLocal_39))
	{
		WAIT(0);
	}
	fLocal_11 = 5.0f;
	Function_100();
	Function_277();
	return;
}

void Function_277() //Position: 0x9274 / 37492
{
	while (!Function_130(4) && !IS_EXITFLAG_SET())
	{
		WAIT(250);
	}
	return;
}

var Function_278(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x928F / 37519
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_279(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_237(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_279(var uParam0, int iParam1, int iParam2) //Position: 0x92C7 / 37575
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_20(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_237(uParam0[iVar03], 4);
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

void Function_280() //Position: 0x938B / 37771
{
	Local_12.f_96 = 4294967295;
	Local_12.f_100 = 4294967295;
	return;
}

