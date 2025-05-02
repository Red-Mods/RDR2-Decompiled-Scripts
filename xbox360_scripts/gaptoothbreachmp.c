//Decompiled with MagicRDR v1.0
//Function Count : 459
//Statics Count : 567
//Natives Count : 473
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	bool bLocal_18 = false;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	bool bLocal_42 = false;
	float fLocal_43 = 0.0f;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	bool bLocal_47 = false;
	struct<5> Local_48 = { 0, 0, 16, 0, 0 } ;
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
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<5> Local_83 = { 0, 0, 0, 0, 0 } ;
	bool bLocal_88 = false;
	bool bLocal_89 = false;
	int iLocal_90 = 0;
	bool bLocal_91 = false;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = false;
	bool bLocal_99 = false;
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	bool bLocal_102 = false;
	bool bLocal_103 = false;
	bool bLocal_104 = false;
	struct<521> Local_105 = { 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_15 = 0;
	iLocal_16 = 0;
	fLocal_43 = 60.0f;
	iLocal_90 = 0;
	bLocal_91 = false;
	iLocal_92 = 0;
	iLocal_93 = 0;
	iLocal_94 = 0;
	iLocal_95 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	bLocal_549 = true;
	iLocal_551 = 0;
	Local_339 = Global_30658[3];
	if (!Function_442(&Local_339))
	{
		TERMINATE_THIS_SCRIPT();
	}
	iLocal_384 = 4294967295;
	iLocal_554 = 6;
	while (!IS_EXITFLAG_SET() && Function_86())
	{
		WAIT(false);
	}
	UNK_0x444C3C32(1, 4, 0);
	UNK_0x2148AC15(4294967295, 0);
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x82 / 130
{
	Function_75(Local_105);
	Function_74();
	Function_12(&Local_339);
	if (IS_ACTOR_VALID(bLocal_385))
	{
		RELEASE_ACTOR(bLocal_385);
	}
	if (IS_OBJECT_VALID(bLocal_394))
	{
		RELEASE_OBJECT_REF(bLocal_394);
	}
	if (IS_ACTOR_VALID(bLocal_386))
	{
		RELEASE_ACTOR(bLocal_386);
	}
	if (IS_BLIP_VALID(bLocal_387))
	{
		REMOVE_BLIP(bLocal_387);
	}
	if (IS_BLIP_VALID(bLocal_388))
	{
		REMOVE_BLIP(bLocal_388);
	}
	if (IS_BLIP_VALID(bLocal_389))
	{
		REMOVE_BLIP(bLocal_389);
	}
	Function_10(&uLocal_553, 1, 0, 4294967295, 4294967295);
	Function_6();
	DISABLE_CHILD_SECTOR("mp_gap_mineLid01x");
	Function_2(&bLocal_367);
	return;
}

void Function_2(bool bParam0) //Position: 0x11A / 282
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_3(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x140 / 320
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

void Function_4(var uParam0, int iParam1) //Position: 0x26E / 622
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0x288 / 648
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0x2A5 / 677
{
	int iVar0;
	
	iLocal_540[0] = Function_8(Local_339, "gaptoothBreach", "supplyShack01props01", 4);
	iLocal_540[1] = Function_8(Local_339, "gaptoothBreach", "supplyShack01props01", 1);
	iLocal_540[2] = Function_8(Local_339, "gaptoothBreach", "supplyShack01props01", 5);
	iLocal_540[3] = Function_8(Local_339, "gaptoothBreach", "supplyShack01props01", 2);
	iLocal_540[4] = Function_8(Local_339, "gaptoothBreach", "supplyShack01props01", 3);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_540)
	{
		Function_7(iLocal_540[iVar0], 1);
		iVar0++;
	}
	iLocal_546[0] = Function_8(Local_339, "gaptoothBreach", "cartStop01props01", 2);
	iLocal_546[1] = Function_8(Local_339, "gaptoothBreach", "cartStop01props01", 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_546)
	{
		Function_7(iLocal_546[iVar0], 1);
		iVar0++;
	}
	return;
}

void Function_7(bool bParam0, bool bParam1) //Position: 0x45C / 1116
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

var Function_8(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x4B0 / 1200
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_9(iParam0))
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

bool Function_9(int iParam0) //Position: 0x54C / 1356
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_10(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x562 / 1378
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_11(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_11(int iParam0) //Position: 0x586 / 1414
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "EVERYTHING";
		
		case 0x00000000:
			return "SILENT";
		
		case 0x00000001:
			return "IDLE";
		
		case 0x00000002:
			return "IDLE_2";
		
		case 0x00000003:
			return "PASTORAL";
		
		case 0x00000004:
			return "PASTORAL_LOW";
		
		case 0x00000005:
			return "PASTORAL_HIGH";
		
		case 0x00000006:
			return "SUSPENSE";
		
		case 0x00000007:
			return "SUSPENSE_LOW";
		
		case 0x00000008:
			return "SUSPENSE_HIGH";
		
		case 0x00000009:
			return "SUSPENSE_DRUM";
		
		case 0x0000000A:
			return "DRAMATIC";
		
		case 0x0000000B:
			return "DRAMATIC_LOW";
		
		case 0x0000000C:
			return "DRAMATIC_LOW_2";
		
		case 0x0000000D:
			return "DRAMATIC_LOW_3";
		
		case 0x0000000E:
			return "DRAMATIC_LOW_4";
		
		case 0x0000000F:
			return "DRAMATIC_SUSPENSE";
		
		case 0x00000010:
			return "DRAMATIC_SUSPENSE_2";
		
		case 0x00000011:
			return "DRAMATIC_HIGH";
		
		case 0x00000012:
			return "DRAMATIC_GUNFIGHT";
		
		case 0x00000013:
			return "DRAMATIC_ALT";
		
		case 0x00000014:
			return "DRAMATIC_2";
		
		case 0x00000015:
			return "DRAMATIC_3";
		
		case 0x00000016:
			return "DRAMATIC_4";
		
		case 0x00000017:
			return "CHASE";
		
		case 0x00000018:
			return "CHASE_EXTRA_LOW";
		
		case 0x00000019:
			return "nCHASE_LOW";
		
		case 0x0000001A:
			return "CHASE_HIGH";
		
		case 0x0000001B:
			return "nCHASE_ELK";
		
		case 0x0000001C:
			return "nCHASE_ALT";
		
		case 0x0000001D:
			return "MERCH_CHASE";
		
		case 0x0000001E:
			return "ARMY_GUNFIGHT";
		
		case 0x0000001F:
			return "ARMY_GUNFIGHT_LOW";
		
		case 0x00000020:
			return "ARMY_GUNFIGHT_HIGH";
		
		case 0x00000021:
			return "REBEL_GUNFIGHT";
		
		case 0x00000022:
			return "GUNFIGHT";
		
		case 0x00000023:
			return "GUNFIGHT_2";
		
		case 0x00000024:
			return "GUNFIGHT_4";
		
		case 0x00000025:
			return "GUNFIGHT_EX";
		
		case 0x00000026:
			return "GUNFIGHT_LOW";
		
		case 0x00000027:
			return "GUNFIGHT_LOW_2";
		
		case 0x00000028:
			return "GUNFIGHT_HIGH";
		
		case 0x00000029:
			return "GUNFIGHT_HIGH_2";
		
		case 0x0000002A:
			return "GUNFIGHT_ALT_HIGH";
		
		case 0x0000002B:
			return "GUNFIGHT_ELK";
		
		case 0x0000002C:
			return "GUNFIGHT_CHASE_HIGH";
		
		case 0x0000002D:
			return "INTENSE_GUNFIGHT";
		
		case 0x0000002E:
			return "SUSPENSE_GUNFIGHT_HIGH";
		
		case 0x0000002F:
			return "nMERCH_GUN";
		
		case 0x00000030:
			return "HAPPY";
		
		case 0x00000031:
			return "nHAPPY_LOW";
		
		case 0x00000032:
			return "HAPPY_HIGH";
		
		case 0x00000033:
			return "RIDING_1";
		
		case 0x00000034:
			return "RIDING_2";
		
		case 0x00000035:
			return "RIDING_3";
		
		case 0x00000036:
			return "RIDING_4";
		
		case 0x00000037:
			return "RIDING_ALT";
		
		case 0x00000038:
			return "TRAP";
		
		case 0x00000039:
			return "BARN";
		
		case 0x0000003A:
			return "MP_IDLE";
		
		case 0x0000003B:
			return "MP_SUSP";
		
		case 0x0000003C:
			return "CAR";
		
		case 0x0000003D:
			return "FINISHED";
		
		default:
	}
	iVar0 = "";
	return iVar0;
}

void Function_12(int iParam0) //Position: 0xAC3 / 2755
{
	var uVar0;
	bool bVar16;
	
	PLAYSTAT_MP_DEED_COMPLETE_EX(GET_SHORT_SCRIPT_NAME(), CEIL(Function_69(iParam0 + 16 + 8)), NET_SCRIPT_GET_NUM_PARTICIPANTS(), iParam0->f_92);
	RELEASE_LAYOUT_REF(bLocal_39);
	Function_59();
	Function_58();
	HUD_CLEAR_OBJECTIVE();
	if (!Global_3403)
	{
		UI_EXIT("XpHud");
	}
	UI_EXIT("MpLinearSuppressor");
	Function_57(256);
	Function_57(4096);
	Function_56(64);
	Function_55(1);
	Function_53(8);
	if (*iParam0 != 4294967294)
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52(*iParam0), 16);
		Function_51("net_player_left_region", UI_GET_STRING(&uVar0));
		bVar16 = StackVal;
		if (IS_VOLUME_VALID(bVar16))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar16);
		}
	}
	Global_78480.f_24 = 4294967294;
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	NET_UNREGISTER_AS_NET_SCRIPT();
	Function_13(iParam0);
	return;
}

void Function_13(int iParam0) //Position: 0xB9A / 2970
{
	SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	Function_17(iParam0);
	Function_14();
	return;
}

void Function_14() //Position: 0xBAC / 2988
{
	Function_16();
	Function_15();
	return;
}

void Function_15() //Position: 0xBB8 / 3000
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_89);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_88);
	}
	return;
}

void Function_16() //Position: 0xBD8 / 3032
{
	UI_EXIT("AAPrompts_PlayerList");
	UI_EXIT("AAPrompts_Stats");
	return;
}

void Function_17(int iParam0) //Position: 0xC0D / 3085
{
	Function_49(131072);
	HUD_ENABLE(true);
	UI_INCLUDE("nMP_Ticker");
	UI_INCLUDE("WeaponAmmo");
	if (IS_WEAPON_DRAWN(Function_48()))
	{
		UI_ENTER("WeaponAmmo");
	}
	UI_UNFOCUS("HudGamerList");
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	Function_16();
	if (iLocal_90)
	{
		ENABLE_USE_CONTEXTS(1);
		iLocal_90 = 0;
	}
	if (Function_45())
	{
		Function_43();
		Function_39();
		Function_38();
	}
	NET_PLAYER_LIST_RESET();
	if (iLocal_94)
	{
		iLocal_94 = 0;
		Function_18(TO_FLOAT(iParam0->f_92), "XP_AA_complete");
	}
	Function_55(1);
	Function_53(8);
	iLocal_16 = 3;
	return;
}

int Function_18(float fParam0, int iParam1) //Position: 0xCC7 / 3271
{
	if (!Function_35())
	{
		Global_83822 = 1;
	}
	Function_19(487, (fParam0 * Global_3362), iParam1);
	return 1;
}

void Function_19(int iParam0, bool bParam1, int iParam2) //Position: 0xCE8 / 3304
{
	Function_20(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_20(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0xD04 / 3332
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(bParam1));
	Function_34(iParam0, TO_FLOAT(bParam1), 1);
	Function_33(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_21(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, uParam3);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xF24 / 3876
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
			bParam2 = (bParam2 * 3,28084f);
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_32(390))), 32);
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
					bVar19 = (Function_31(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_31(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_29(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_26(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_23(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_22(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_22() //Position: 0x1551 / 5457
{
	int iVar0;
	
	return iVar0;
}

var Function_23(int iParam0) //Position: 0x1559 / 5465
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_24(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x156A / 5482
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_25(char* cParam0, char* cParam1) //Position: 0x165F / 5727
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_26(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1678 / 5752
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_28(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_27(Function_28(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_27(int iParam0, int iParam1) //Position: 0x16DD / 5853
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_28(int iParam0, bool bParam1) //Position: 0x16EF / 5871
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_29(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1701 / 5889
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
	if (((Function_30(iParam0) != 19 || Function_30(iParam0) != 17) || Function_30(iParam0) != 10) || Function_30(iParam0) != 9)
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

int Function_30(int iParam0) //Position: 0x1831 / 6193
{
	return Global_35278[iParam020].f_48;
}

float Function_31(int iParam0) //Position: 0x1840 / 6208
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_32(int iParam0) //Position: 0x1879 / 6265
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_33(int iParam0) //Position: 0x18B6 / 6326
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

int Function_34(int iParam0, bool bParam1, bool bParam2) //Position: 0x1A50 / 6736
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
		Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
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

bool Function_35() //Position: 0x1C6A / 7274
{
	if (Function_37())
	{
		return (Function_36() != 1 || Function_36() != 0);
	}
	return 0;
}

int Function_36() //Position: 0x1C83 / 7299
{
	return Global_79349.f_16;
}

bool Function_37() //Position: 0x1C8F / 7311
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_38() //Position: 0x1C98 / 7320
{
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
	{
		bLocal_89 = ADD_SCRIPT_USE_CONTEXT("mp_aa_vote_replay", true, 15, false, 0, 0, 0, 4294967295, 0);
	}
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
	{
		bLocal_88 = ADD_SCRIPT_USE_CONTEXT("mp_aa_vote_skip", true, 13, false, 0, 0, 0, 4294967295, 0);
	}
	return;
}

void Function_39() //Position: 0x1CF2 / 7410
{
	Function_40(1024, 0, 1);
	Function_40(1, 0, 0);
	return;
}

void Function_40(int iParam0, bool bParam1, int iParam2) //Position: 0x1D06 / 7430
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_42(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_41(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_41(int iParam0, int iParam1) //Position: 0x1D2E / 7470
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_42(int iParam0, int iParam1) //Position: 0x1D41 / 7489
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_43() //Position: 0x1D50 / 7504
{
	if (Function_45())
	{
		Function_44();
	}
	Function_40(4096, 0, 1);
	return;
}

void Function_44() //Position: 0x1D67 / 7527
{
	Function_40(32768, 1, 0);
	return;
}

bool Function_45() //Position: 0x1D76 / 7542
{
	return (Function_46(4096) || Function_46(4));
}

bool Function_46(bool bParam0) //Position: 0x1D87 / 7559
{
	return Function_47(Global_76905.f_132, bParam0);
}

bool Function_47(var uParam0, bool bParam1) //Position: 0x1D98 / 7576
{
	return (uParam0 && bParam1) == 0;
}

var Function_48() //Position: 0x1DA5 / 7589
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_49(int iParam0) //Position: 0x1DBA / 7610
{
	Function_50(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_50(var uParam0, int iParam1) //Position: 0x1E13 / 7699
{
	Function_42(uParam0, iParam1);
	return;
}

void Function_51(bool bParam0, int iParam1) //Position: 0x1E20 / 7712
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), iParam1, 0, 0, 0, 0, 0);
	return;
}

struct<32> Function_52(int iParam0) //Position: 0x1E35 / 7733
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_9(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, Global_29155[iParam010].f_20, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(StackVal))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_53(int iParam0) //Position: 0x1EF2 / 7922
{
	Function_54(&Global_79338, iParam0);
	return;
}

void Function_54(var uParam0, int iParam1) //Position: 0x1F01 / 7937
{
	Function_41(uParam0, iParam1);
	return;
}

void Function_55(int iParam0) //Position: 0x1F0E / 7950
{
	Function_54(&Global_83864 + 1252, iParam0);
	return;
}

void Function_56(int iParam0) //Position: 0x1F20 / 7968
{
	Function_54(&Global_78617 + 52, iParam0);
	return;
}

void Function_57(int iParam0) //Position: 0x1F31 / 7985
{
	Function_54(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_58() //Position: 0x1F6A / 8042
{
	(&Global_83591 + 140)->f_4 = 0;
	Global_83591.f_140 = "";
	return;
}

void Function_59() //Position: 0x1F81 / 8065
{
	struct<17> Var0;
	
	Function_61();
	Var0.f_4 = 0;
	Var0 = 0;
	Var0.f_8 = 4294967286;
	Var0.f_16 = 0.0f;
	Function_60(&Var0);
	return;
}

void Function_60(int iParam0) //Position: 0x1FA3 / 8099
{
	Local_83 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_61() //Position: 0x1FB1 / 8113
{
	Function_62();
	return;
}

void Function_62() //Position: 0x1FBA / 8122
{
	Function_63(4294967286);
	return;
}

void Function_63(bool bParam0) //Position: 0x1FC6 / 8134
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_68(&uVar0);
		Function_67(&vVar1);
		vVar1.z = uVar0;
		Function_60(&vVar1);
	}
	Function_66(&uVar0, bParam0);
	Function_65(&uVar0);
	if (NET_IS_IN_SESSION())
	{
		Function_64(&uVar0, GET_LOCAL_SLOT());
	}
	return;
}

void Function_64(var uParam0, int iParam1) //Position: 0x2003 / 8195
{
	Local_50[iParam12] = *uParam0;
	return;
}

void Function_65(int iParam0) //Position: 0x2012 / 8210
{
	Local_48 = *iParam0;
	return;
}

void Function_66(var uParam0, int iParam1) //Position: 0x201D / 8221
{
	*uParam0 = iParam1;
	return;
}

void Function_67(int iParam0) //Position: 0x2028 / 8232
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Local_83 };
	return;
}

void Function_68(int iParam0) //Position: 0x2036 / 8246
{
	*iParam0 = Local_48;
	return;
}

float Function_69(var uParam0) //Position: 0x2041 / 8257
{
	if (Function_73(uParam0))
	{
		if (Function_72(uParam0))
		{
			return StackVal;
		}
		Function_70();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_70() //Position: 0x2112 / 8466
{
	if (!Function_71())
	{
	}
	return;
}

bool Function_71() //Position: 0x211F / 8479
{
	return NET_IS_IN_SESSION();
}

bool Function_72(int iParam0) //Position: 0x2128 / 8488
{
	return Function_47(*iParam0, 2);
}

bool Function_73(var uParam0) //Position: 0x2135 / 8501
{
	return Function_47(*uParam0, 1);
}

void Function_74() //Position: 0x2142 / 8514
{
	Function_2(&Local_105 + 4);
	RELEASE_LAYOUT_REF(Local_105);
	return;
}

void Function_75(int iParam0) //Position: 0x2154 / 8532
{
	if (IS_ACTORSET_VALID(bLocal_18))
	{
		Function_85(bLocal_18);
	}
	Function_83(iParam0);
	Function_76(1);
	return;
}

void Function_76(bool bParam0) //Position: 0x2170 / 8560
{
	bool bVar0;
	
	if (bParam0)
	{
		Function_82(1);
	}
	else
	{
		Function_81(1);
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_77(bVar0, bParam0);
		}
		bVar0++;
	}
	return;
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x21A8 / 8616
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_80(GET_LOCAL_SLOT(), bParam0) && !Function_78(2))
		{
			return;
		}
		if (!Function_78(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
	}
	return;
}

bool Function_78(int iParam0) //Position: 0x21F5 / 8693
{
	return Function_79(Global_79337, iParam0);
}

bool Function_79(var uParam0, int iParam1) //Position: 0x2204 / 8708
{
	return (uParam0 && iParam1) == 0;
}

int Function_80(bool bParam0, bool bParam1) //Position: 0x2211 / 8721
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = NET_GET_GAMER_POSSE_LEADER(bParam0);
	bVar1 = NET_GET_GAMER_POSSE_LEADER(bParam1);
	if (bVar0 != bVar1 && bVar0 < 4294967295)
	{
		return 1;
	}
	return 0;
}

void Function_81(int iParam0) //Position: 0x2235 / 8757
{
	Function_54(&Global_79337, iParam0);
	return;
}

void Function_82(int iParam0) //Position: 0x2244 / 8772
{
	Function_50(&Global_79337, iParam0);
	return;
}

void Function_83(bool bParam0) //Position: 0x2253 / 8787
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		LOG_ERROR("Failed to create iterator to release actors to netLayout");
		return;
	}
	ITERATE_IN_LAYOUT(bVar0, bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			Function_84(bVar2);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_84(bool bParam0) //Position: 0x22F2 / 8946
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("nnetLayout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		return;
	}
	if (IS_OBJECT_VALID(bParam0))
	{
		GIVE_OBJECT_TO_LAYOUT(bParam0, bVar0);
	}
	return;
}

void Function_85(bool bParam0) //Position: 0x2323 / 8995
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0))))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)));
			}
		}
		bVar0++;
	}
	return;
}

int Function_86() //Position: 0x236E / 9070
{
	if (!Function_398(&Local_339, &Local_105, 61423, 0))
	{
		return 0;
	}
	if ((&Local_339 + 16)->f_36 && !IS_ACTOR_VALID(bLocal_385))
	{
		Function_396();
	}
	if (!IS_ACTOR_VALID(bLocal_386))
	{
		if (Function_395())
		{
			SET_ACTOR_INVULNERABILITY(bLocal_386, true);
			ENABLE_VEHICLE_SEAT(bLocal_386, false, 0);
			ENABLE_VEHICLE_SEAT(bLocal_386, true, 0);
		}
	}
	TRAIN_ENABLE_VISUAL_DEBUG(uLocal_550);
	if (StackVal != 11)
	{
		if (Function_73(&uLocal_555))
		{
			if (Function_69(&uLocal_555) <= 0.0f)
			{
				Function_393(&uLocal_553, iLocal_554, 40, 38, 10.0f);
				Function_392(&uLocal_555, 5.0f);
			}
		}
		else
		{
			Function_391(&uLocal_555, 5.0f);
		}
	}
	switch (StackVal)
	{
		case 0x00000000:
			Function_296();
			UNK_0x2148AC15(322, 8);
			UNK_0x444C3C32(0, 4, 0);
			break;
		
		case 0x00000001:
			Function_263();
			break;
		
		case 0x00000002:
			Function_243();
			UNK_0x2148AC15(322, 12);
			break;
		
		case 0x00000003:
			Function_238();
			break;
		
		case 0x0000000B:
			Function_87();
			break;
	}
	return 1;
}

void Function_87() //Position: 0x2469 / 9321
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_231();
			Function_229(bLocal_18);
			Function_225();
			if (IS_BLIP_VALID(bLocal_387))
			{
				REMOVE_BLIP(bLocal_387);
			}
			if (IS_BLIP_VALID(bLocal_388))
			{
				REMOVE_BLIP(bLocal_388);
			}
			if (IS_BLIP_VALID(bLocal_389))
			{
				REMOVE_BLIP(bLocal_389);
			}
			ENABLE_VEHICLE_SEAT(bLocal_386, false, 1);
			ENABLE_VEHICLE_SEAT(bLocal_386, true, 1);
			ENABLE_VEHICLE_SEAT(bLocal_385, false, 0);
			ENABLE_VEHICLE_SEAT(bLocal_385, true, 0);
			SET_VEHICLE_PASSENGERS_ALLOWED(bLocal_385, 0);
			Function_223(bLocal_552);
			Function_10(&uLocal_553, 1, 0, 4294967295, 4294967295);
			Local_339.f_8 = 6;
			break;
		
		case 0x00000006:
			if (Function_89(&Local_339))
			{
				Function_88();
			}
			break;
	}
	return;
}

void Function_88() //Position: 0x2510 / 9488
{
	if (IS_ACTOR_VALID(bLocal_385))
	{
		DESTROY_ACTOR(bLocal_385);
	}
	if (IS_OBJECT_VALID(bLocal_394))
	{
		DESTROY_OBJECT(bLocal_394);
	}
	return;
}

bool Function_89(int iParam0) //Position: 0x2534 / 9524
{
	int iVar0;
	int iVar1;
	char* cVar2[16];
	bool bVar6;
	
	iVar1 = 0;
	switch (iLocal_95)
	{
		case 0x00000000:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_222(iParam0 + 16 + 8);
			}
			if (!bLocal_91)
			{
				Function_20(458, 1, 0, 0);
				strcpy(&cVar2, "FM Level - ", 16);
				stradd(&cVar2, I2STR(Global_83864.f_1264), 16);
				PLAYSTAT_MP_COOP_COMPLETE(GET_SHORT_SCRIPT_NAME(), CEIL(Function_69(iParam0 + 16 + 8)), (iParam0 + 16)->f_20, Function_221(), Function_220(29), &cVar2);
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				AUDIO_MUSIC_FORCE_TRACK(iParam0->f_100, "IDLE", 2.0f, 2, 4294967295, 3212836864, 0);
				Function_148(iParam0);
				Function_145(iParam0);
				if (NET_GET_PLAYMODE() == 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(40))
					{
						if ((((((Global_56612[09].f_24 != 1 && Global_56612[19].f_24 != 1) && Global_56612[29].f_24 != 1) && Global_56612[39].f_24 != 1) && Global_56612[49].f_24 != 1) && Global_56612[69].f_24 != 1) && Global_56612[59].f_24 != 1)
						{
							if (Function_144())
							{
								if (Global_56612[79].f_24 == 1)
								{
									AWARD_ACHIEVEMENT(40);
								}
							}
							else
							{
								AWARD_ACHIEVEMENT(40);
							}
						}
					}
				}
			}
			else
			{
				Function_143("MP_AA_already_finished");
			}
			if ((iParam0 + 16)->f_28 == 2)
			{
				iLocal_95 = 1;
			}
			else
			{
				iLocal_95 = 15;
			}
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_ONE_SHOT(Function_142(*iParam0), 0, 0, 0, 0, 0);
			HUD_ENABLE(false);
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				if (IS_ACTOR_VALID(Function_48()))
				{
					Function_140(Function_48(), 0);
					if (IS_ACTOR_INSIDE_VEHICLE(Function_48()))
					{
						bVar6 = GET_VEHICLE(Function_48());
						if (IS_ACTOR_VALID(bVar6))
						{
							START_VEHICLE(bVar6);
						}
					}
				}
				SET_PLAYER_CONTROL(0, 0, 1, 1);
			}
			Function_57(131072);
			CANCEL_DEADEYE();
			ENABLE_USE_CONTEXTS(0);
			iLocal_90 = 1;
			SET_SWITCH_CAMERA_BUTTON_ENABLED(0);
			UI_EXCLUDE("nMP_Ticker");
			UI_EXIT("WeaponAmmo");
			UI_EXCLUDE("WeaponAmmo");
			UI_SET_TEXT("mp_aa_stats_vote_skip", "Common_Null");
			UI_SET_TEXT("mp_aa_stats_vote_replay", "Common_Null");
			iLocal_95 = 2;
			break;
		
		case 0x00000002:
			iLocal_96++;
			if (iLocal_96 >= 5)
			{
				iLocal_95 = 6;
			}
			break;
		
		case 0x00000006:
			Function_135(iParam0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_129(*iParam0, Function_130());
			}
			iLocal_95 = 7;
			break;
		
		case 0x00000007:
			iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
			if (iLocal_16 != 3)
			{
				if (IS_LOCAL_PLAYER_VALID(0))
				{
					if (IS_PLAYER_CONTROLLABLE(0))
					{
						SET_PLAYER_CONTROL(0, 0, 1, 1);
					}
				}
				if (IS_BUTTON_RELEASED(iVar0, 4, 1, true))
				{
					Function_44();
					if (iLocal_16 == 2)
					{
						Function_135(iParam0);
					}
					else if (iLocal_16 == 1)
					{
						Function_126();
					}
				}
				else if (Function_125(15, 1, 1))
				{
					Function_124(1);
					Function_17(iParam0);
				}
				else if (Function_125(13, 1, 1))
				{
					Function_124(0);
					Function_17(iParam0);
				}
				else if (Function_123())
				{
					if (iLocal_16 == 1)
					{
						Function_135(iParam0);
					}
					else if (iLocal_16 == 2)
					{
						Function_126();
					}
				}
			}
			else
			{
				if (UI_ISACTIVE("NotorietyMeter") && !iLocal_93)
				{
					Function_15();
					iLocal_93 = 1;
				}
				else if (!UI_ISACTIVE("NotorietyMeter") && iLocal_93)
				{
					iLocal_93 = 0;
					Function_38();
				}
				if (!UI_ISACTIVE("RadialWeaponQuickPick"))
				{
					if (iLocal_92)
					{
						iLocal_92 = 0;
						Function_38();
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_89))
						{
							Function_124(1);
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_88))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_88))
						{
							Function_124(0);
						}
					}
				}
				else if (!iLocal_92)
				{
					iLocal_92 = 1;
					Function_15();
				}
			}
			Function_119();
			switch (Function_116(iParam0))
			{
				case 0x00000001:
					if (Function_102(99, 1, 0x3f800000))
					{
						Function_143("mp_aa_vote_replay_passed");
						PLAYSTAT_INT("AA vote passed", true);
						(iParam0 + 16)->f_28 = 1;
						Function_101(84);
						NET_ALLOW_PLAYERS_TO_JOIN(0);
						if (IS_ACTOR_VALID(Global_12976.f_36))
						{
							Function_100(Global_12976.f_36);
							if (Function_98(StackVal, StackVal, Function_100(Global_12976.f_36)))
							{
								DESTROY_ACTOR(Global_12976.f_36);
							}
						}
						iLocal_95 = 11;
					}
					break;
				
				case 0x00000000:
					Function_143("mp_aa_vote_skip_passed");
					PLAYSTAT_INT("AA vote passed", false);
					(iParam0 + 16)->f_28 = 0;
					iLocal_95 = 15;
					break;
				
				case 0x00000002:
					Function_61();
					break;
			}
			break;
		
		case 0x0000000B:
			iVar1 = 1;
			if (!Function_97(8))
			{
				Function_96(1792, 0);
				Function_90(1, 0, 0);
				RESET_PROPS_IN_WORLD();
				CLEAR_ALL_CORPSES();
				iLocal_95 = 16;
			}
			break;
		
		case 0x0000000F:
			Function_56(64);
			Function_76(1);
			iLocal_95 = 16;
			break;
		
		case 0x00000010:
			break;
	}
	return iVar1;
}

void Function_90(var uParam0, bool bParam1, int iParam2) //Position: 0x2A2D / 10797
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_9(Global_29006))
		{
			Function_95(&(Global_29008[Global_29006]), 131072);
			Function_94(&(Global_29008[Global_29006]), 2097152);
			Function_92(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_91(&(Global_29008[iVar0]), 4) || Function_91(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_94(&(Global_29008[iVar0]), 2097155);
					Function_95(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_37())
			{
			}
			WAIT(false);
		}
		if (uParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

bool Function_91(var uParam0, int iParam1) //Position: 0x2B38 / 11064
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_92(int iParam0) //Position: 0x2B54 / 11092
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_93())
			{
				return;
			}
		}
		if (!Function_91(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_93() //Position: 0x2BD3 / 11219
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_91(&(Global_29008[iVar0]), 4) || Function_91(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_94(var uParam0, int iParam1) //Position: 0x2C30 / 11312
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_95(var uParam0, int iParam1) //Position: 0x2C47 / 11335
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_96(int iParam0, bool bParam1) //Position: 0x2C56 / 11350
{
	if (bParam1)
	{
		Function_42(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_41(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

bool Function_97(int iParam0) //Position: 0x2C91 / 11409
{
	return Function_79(Global_78617.f_52, iParam0);
}

bool Function_98(vector3 vParam0) //Position: 0x2CA2 / 11426
{
	var uVar0[8];
	int iVar9;
	
	Function_99(&uVar0);
	iVar9 = 0;
	while (iVar9 <= 8)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				return 1;
			}
		}
		iVar9++;
	}
	return 0;
}

void Function_99(int iParam0) //Position: 0x2CF3 / 11507
{
	(*iParam0)[0] = Global_30640[2];
	(*iParam0)[1] = Global_30658[0];
	(*iParam0)[2] = Global_30658[3];
	(*iParam0)[3] = Global_30658[2];
	(*iParam0)[4] = Global_30679[1];
	(*iParam0)[5] = Global_30668[2];
	(*iParam0)[6] = Global_30685[2];
	(*iParam0)[7] = Global_30685[1];
	return;
}

vector3 Function_100(bool bParam0) //Position: 0x2D51 / 11601
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_101(int iParam0) //Position: 0x2D62 / 11618
{
	Function_50(&Global_78617 + 52, iParam0);
	return;
}

bool Function_102(bool bParam0, bool bParam1, float fParam2) //Position: 0x2D73 / 11635
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_115(bParam0);
	}
	Function_67(&Var0);
	fVar5 = NET_GET_NET_TIME();
	iVar6 = 0;
	if ((fVar5 - Var0.f_12) <= fParam2)
	{
		Var0.f_12 = fVar5;
		iVar6 = 1;
		Function_60(&Var0);
	}
	if (Function_114(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_113(&Var0, 0);
		Function_60(&Var0);
		Function_62();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), 0);
		return 1;
	}
	if (Function_112(bParam0, iVar6, &uVar7))
	{
		if (Function_111())
		{
			if (!Function_110(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_109(&Var0, 1);
				Function_60(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar5;
			Function_60(&Var0);
		}
		else
		{
			fVar10 = (fVar5 - Var0.f_16);
			if (fVar10 <= 60.0f || (uVar7 && fVar10 <= 25.0f))
			{
				if (Function_103(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", 0, 0, 0, 0);
					Var11 = GET_LOCAL_SLOT();
					Var11.f_4 = fVar5;
					NET_SCRIPTMSG_SEND(1, 104, &Var11, 3, 1);
				}
			}
		}
	}
	else
	{
		Var0.f_16 = 0.0f;
		Function_60(&Var0);
	}
	return 0;
}

bool Function_103(int iParam0) //Position: 0x2FC6 / 12230
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_108(bVar0))
		{
			iVar1 = Function_104(bVar0);
			if (iVar1 == iParam0)
			{
				if (bVar0 == bVar2)
				{
					return 1;
				}
				return 0;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_104(bool bParam0) //Position: 0x3009 / 12297
{
	int iVar0;
	
	Function_107(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_68(&iVar0);
	}
	else
	{
		Function_106(&iVar0, bParam0);
	}
	return Function_105(&iVar0);
}

int Function_105(int iParam0) //Position: 0x3030 / 12336
{
	return *iParam0;
}

void Function_106(var uParam0, int iParam1) //Position: 0x3039 / 12345
{
	*uParam0 = Local_50[iParam12];
	return;
}

void Function_107(int iParam0) //Position: 0x3048 / 12360
{
	Function_66(iParam0, 4294967286);
	return;
}

bool Function_108(bool bParam0) //Position: 0x3056 / 12374
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_50, bParam0);
}

void Function_109(var uParam0, bool bParam1) //Position: 0x3063 / 12387
{
	if (bParam1)
	{
		Function_42(uParam0, 2);
	}
	else
	{
		Function_41(uParam0, 2);
	}
	return;
}

bool Function_110(bool bParam0) //Position: 0x307D / 12413
{
	return Function_47(*bParam0, 2);
}

bool Function_111() //Position: 0x308A / 12426
{
	if (NET_IS_SCRIPT_REGISTERED_AS_NET_SCRIPT())
	{
		return NET_IS_HOST_OF_THIS_SCRIPT();
	}
	if (NET_IS_IN_SESSION())
	{
		return NET_IS_SESSION_HOST();
	}
	return 0;
}

bool Function_112(int iParam0, var uParam1, int iParam2) //Position: 0x30A8 / 12456
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = 0;
	bVar3 = false;
	uParam1 = uParam1;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_108(iVar0))
		{
			iVar1 = Function_104(iVar0);
			if (iVar1 != iParam0)
			{
				if (iVar1 != 4294967286)
				{
					*iParam2 = 1;
				}
				bVar3 = true;
			}
			iVar2 = 1;
		}
		iVar0++;
	}
	return (iVar2 && !bVar3);
}

void Function_113(int iParam0, bool bParam1) //Position: 0x30F9 / 12537
{
	if (bParam1)
	{
		Function_42(iParam0, 1);
	}
	else
	{
		Function_41(iParam0, 1);
	}
	return;
}

bool Function_114(int iParam0) //Position: 0x3113 / 12563
{
	return Function_47(*iParam0, 1);
}

void Function_115(int iParam0) //Position: 0x3120 / 12576
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_68(&iVar1);
	if (Function_105(&iVar1) != bVar0)
	{
		Function_67(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar7, "Next lockstep state same as last state (", 64);
			stradd(&cVar7, I2STR(bVar0), 64);
			stradd(&cVar7, "). May be fine.", 64);
			if (Function_47(Var2, 4))
			{
			}
		}
		bVar23 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar23), I2STR(bVar23), I2STR(bVar0), 0);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_63(bVar0);
		Function_109(&Var2, 0);
		Function_60(&Var2);
	}
	return;
}

bool Function_116(int iParam0) //Position: 0x321D / 12829
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar2 = false;
	iVar3 = (NET_SCRIPT_GET_NUM_PARTICIPANTS() / 2) + 1;
	bVar4 = false;
	while (bVar4 <= 16)
	{
		if (Function_118(bVar4))
		{
			switch (Function_117(bVar4))
			{
				case 0x00000000:
					bVar1++;
					break;
				
				case 0x00000001:
					bVar2++;
					break;
				}
		}
		bVar4++;
	}
	UI_SET_STRING("mp_aa_vote_total_replays", INT_TO_STRING(bVar2));
	UI_SET_STRING("mp_aa_vote_total_continues", INT_TO_STRING(bVar1));
	UI_SET_STRING("mp_aa_vote_total_required", INT_TO_STRING(NET_SCRIPT_GET_NUM_PARTICIPANTS()));
	if (iLocal_16 == 2)
	{
		UI_SET_TEXT("mp_aa_plist_vote_skip", "mp_aa_vote_skip");
		UI_SET_TEXT("mp_aa_plist_vote_replay", "mp_aa_vote_replay");
		UI_REFRESH("mp_aa_plist_vote_skip");
		UI_REFRESH("mp_aa_plist_vote_replay");
	}
	else if (iLocal_16 == 1)
	{
		UI_SET_TEXT("mp_aa_stats_vote_skip", "mp_aa_vote_skip");
		UI_SET_TEXT("mp_aa_stats_vote_replay", "mp_aa_vote_replay");
		UI_REFRESH("mp_aa_stats_vote_skip");
		UI_REFRESH("mp_aa_stats_vote_replay");
	}
	if (bVar2 > iVar3)
	{
		Function_13(iParam0);
		iVar0 = 1;
	}
	else if (bVar1 > iVar3)
	{
		Function_13(iParam0);
		iVar0 = 0;
	}
	else if (bVar1 + bVar2) == NET_SCRIPT_GET_NUM_PARTICIPANTS()
	{
		Function_13(iParam0);
		iVar0 = 0;
	}
	else
	{
		iVar0 = 2;
	}
	return iVar0;
}

int Function_117(int iParam0) //Position: 0x3459 / 13401
{
	return StackVal;
}

bool Function_118(bool bParam0) //Position: 0x3467 / 13415
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return NET_IS_PLAYER_PARTICIPANT(bParam0);
}

void Function_119() //Position: 0x347D / 13437
{
	Function_122(8);
	Function_120(&Global_79298);
	return;
}

void Function_120(int iParam0) //Position: 0x348F / 13455
{
	Function_121(iParam0, 0.0f);
	return;
}

void Function_121(int iParam0, float fParam1) //Position: 0x349B / 13467
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_42(iParam0, 1);
	Function_41(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_122(int iParam0) //Position: 0x34BC / 13500
{
	Function_50(&Global_79338, iParam0);
	return;
}

bool Function_123() //Position: 0x34CB / 13515
{
	return Function_46(32768);
}

void Function_124(bool bParam0) //Position: 0x34D8 / 13528
{
	PLAYSTAT_INT("Local AA vote", bParam0);
	Function_56(64);
	Local_50[GET_LOCAL_SLOT()2].f_4 = bParam0;
	return;
}

bool Function_125(int iParam0, int iParam1, bool bParam2) //Position: 0x3503 / 13571
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_RELEASED(iVar0, iParam0, iParam1, bParam2);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (((IS_BUTTON_RELEASED(iVar0, 15, iParam1, bParam2) || IS_BUTTON_RELEASED(iVar0, 13, iParam1, bParam2)) || IS_BUTTON_DOWN(iVar0, 15, iParam1, bParam2)) || IS_BUTTON_DOWN(iVar0, 13, iParam1, bParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (((IS_BUTTON_RELEASED(iVar0, 14, iParam1, bParam2) || IS_BUTTON_RELEASED(iVar0, 12, iParam1, bParam2)) || IS_BUTTON_DOWN(iVar0, 14, iParam1, bParam2)) || IS_BUTTON_DOWN(iVar0, 12, iParam1, bParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

void Function_126() //Position: 0x35B0 / 13744
{
	UI_FOCUS("HudGamerList");
	UI_ENTER("AAPrompts_PlayerList");
	Function_128();
	Function_127();
	iLocal_16 = 2;
	return;
}

void Function_127() //Position: 0x35EB / 13803
{
	Function_40(1025, 1, 0);
	return;
}

void Function_128() //Position: 0x35F9 / 13817
{
	if (!Function_45())
	{
		Function_44();
	}
	Function_40(4096, 1, 1);
	return;
}

void Function_129(var uParam0, var uParam1) //Position: 0x3611 / 13841
{
	struct<8> Var0;
	struct<5> Var8;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52(uParam0) };
	Var8 = uParam0;
	Var8.f_4 = uParam1;
	NET_SCRIPTMSG_SEND(2, 81, &Var8, 3, 1);
	return;
}

var Function_130() //Position: 0x3636 / 13878
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 <= 16)
	{
		if (Function_118(iVar2))
		{
			iVar3 = Function_131(iVar2);
			if (iVar3 >= iVar1)
			{
				iVar1 = iVar3;
				iVar0 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar0;
}

int Function_131(bool bParam0) //Position: 0x3675 / 13941
{
	return Function_132(0, bParam0);
}

int Function_132(int iParam0, bool bParam1) //Position: 0x3681 / 13953
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_134(iParam0);
	}
	if (!Function_133(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

bool Function_133(bool bParam0) //Position: 0x36E8 / 14056
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

int Function_134(int iParam0) //Position: 0x3789 / 14217
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_135(int iParam0) //Position: 0x3799 / 14233
{
	char* cVar0[32];
	int iVar8;
	bool bVar9;
	
	Function_139(1);
	Function_128();
	Function_127();
	UI_UNFOCUS("HudGamerList");
	UI_ENTER("AAPrompts_Stats");
	Function_40(16384, 1, 1);
	Function_40(32768, 0, 1);
	NET_PLAYER_LIST_SET_TEMPLATE(7);
	NET_PLAYER_LIST_SET_HEADER(0, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(1, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(2, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(3, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	strcpy(&Global_76905 + 64, "mp_plist_personal_stats", 64);
	NET_PLAYER_LIST_SET_TITLE(&Global_76905 + 64);
	iVar8 = 100;
	itos(&cVar0, Function_221(), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_score_alt"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	itos(&cVar0, iParam0->f_88, 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_bonus_score_alt"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	Stack.Push(iVar8);
	Call_Loc(iParam0->f_96);
	iVar8 = (iVar8 - 1);
	if (iParam0->f_104)
	{
		bVar9 = "mp_plist_target_bonus_casual";
	}
	else
	{
		switch (GET_PLAYER_COMBATMODE())
		{
			case 0x00000002:
				bVar9 = "mp_plist_target_bonus_casual";
				break;
			
			case 0x00000000:
				bVar9 = "mp_plist_target_bonus_normal";
				break;
			
			case 0x00000001:
				bVar9 = "mp_plist_target_bonus_expert";
				break;
			
			default:
				bVar9 = "mp_plist_target_bonus";
				break;
			}
	}
	itos(&cVar0, Function_134(3), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING(bVar9), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	itos(&cVar0, iParam0->f_92, 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_total_xp"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_kills"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_220(29));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_deaths"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_138());
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_assists"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_220(38));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_defends"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_220(28));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_combo_streak"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bLocal_42);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_headshots"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_220(34));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_time"), iVar8);
	Function_136(0, Function_69(iParam0 + 16 + 8));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iLocal_16 = 1;
	return;
}

void Function_136(bool bParam0, int iParam1) //Position: 0x3BBD / 15293
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_137(iParam1) };
	bVar4 = FLOOR((Var0.f_12 * 100.0f));
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", UI_GET_STRING("MP_Time_Fmt1"), I2STR((bVar4 / 10)), I2STR((bVar4 % 10)), 0);
	UI_SET_STRING_FORMAT(StackVal, StackVal, "GENERIC_DBUFFER10_1", I2STR((I2STR((UI_GET_STRING("MP_Time_Fmt1") / 10)) % 10)), 0);
	UI_SET_STRING_FORMAT(StackVal, "GENERIC_DBUFFER10_2", I2STR(UI_GET_STRING("MP_Time_Fmt")), UI_GET_STRING("GENERIC_DBUFFER10_1"), UI_GET_STRING("GENERIC_DBUFFER10_0"));
	if (Var0 >= 0)
	{
		if (StackVal <= 10)
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_3", UI_GET_STRING("MP_time_Fmt1"), I2STR(false), UI_GET_STRING("GENERIC_DBUFFER10_2"), 0);
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_3"), 0);
		}
		else
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_2"), 0);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER10_2"));
	}
	return;
}

struct<16> Function_137(var uParam0) //Position: 0x3DEA / 15850
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

int Function_138() //Position: 0x3E5B / 15963
{
	return Function_220(12);
}

void Function_139(bool bParam0) //Position: 0x3E66 / 15974
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_40(16384, 0, 1);
	return;
}

void Function_140(bool bParam0, bool bParam1) //Position: 0x3E80 / 16000
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_141(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_141(bool bParam0, bool bParam1) //Position: 0x3EDD / 16093
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_142(int iParam0) //Position: 0x3EFC / 16124
{
	if (iParam0 != Global_30685[2] || iParam0 != Global_30685[1])
	{
		return "MEX_MISSION_COMPLETE_SONG_01";
	}
	return "FTR_MISSION_COMPLETE_SONG_01";
}

void Function_143(bool bParam0) //Position: 0x3F5A / 16218
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), 0, 0, 0, 0, 0, 0);
	return;
}

bool Function_144() //Position: 0x3F6E / 16238
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_145(int iParam0) //Position: 0x3F7D / 16253
{
	Function_147(iParam0, Global_30668[2], &Global_56612, 0);
	Function_147(iParam0, Global_30679[1], &Global_56612, 1);
	Function_147(iParam0, Global_30658[0], &Global_56612, 2);
	Function_147(iParam0, Global_30658[3], &Global_56612, 3);
	Function_147(iParam0, Global_30685[2], &Global_56612, 4);
	Function_147(iParam0, Global_30640[2], &Global_56612, 6);
	Function_147(iParam0, Global_30685[1], &Global_56612, 5);
	Function_147(iParam0, Global_30658[2], &Global_56612, 7);
	Function_146(iParam0, Global_30668[2], &Global_56688, 0);
	Function_146(iParam0, Global_30679[1], &Global_56688, 1);
	Function_146(iParam0, Global_30658[0], &Global_56688, 2);
	Function_146(iParam0, Global_30658[3], &Global_56688, 3);
	Function_146(iParam0, Global_30685[2], &Global_56688, 4);
	Function_146(iParam0, Global_30640[2], &Global_56688, 6);
	Function_146(iParam0, Global_30685[1], &Global_56688, 5);
	Function_146(iParam0, Global_30658[2], &Global_56688, 7);
	return;
}

void Function_146(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x4076 / 16502
{
	if (*uParam0 != iParam1 && uParam2[776][iParam39]->f_20 != 1)
	{
		(*uParam2[776])[iParam39] = iParam1;
		uParam2[776][iParam39]->f_24 = 1;
		uParam2[776][iParam39]->f_8 = Function_138();
	}
	if (*uParam0 != iParam1 && uParam2[876][iParam39]->f_20 != 1)
	{
		(*uParam2[876])[iParam39] = iParam1;
		uParam2[876][iParam39]->f_24 = 1;
		uParam2[876][iParam39]->f_8 = Function_138();
	}
	if (*uParam0 != iParam1 && uParam2[976][iParam39]->f_20 != 1)
	{
		(*uParam2[976])[iParam39] = iParam1;
		uParam2[976][iParam39]->f_24 = 1;
		uParam2[976][iParam39]->f_8 = Function_138();
	}
}

void Function_147(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x413A / 16698
{
	if (*uParam0 != iParam1 && uParam2[iParam39]->f_20 != 1)
	{
		(*uParam2)[iParam39] = iParam1;
		uParam2[iParam39]->f_20 = 0;
		uParam2[iParam39]->f_24 = 1;
		uParam2[iParam39]->f_8 = Function_138();
	}
}

void Function_148(int iParam0) //Position: 0x417B / 16763
{
	struct<5> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_219(*iParam0) };
	Function_215(iParam0);
	Function_214(13, iParam0->f_92);
	Function_214(0, iParam0->f_92);
	iParam0->f_92 = (iParam0->f_92 + Function_134(2));
	if (iParam0->f_104)
	{
		Function_213(3, 5);
	}
	else
	{
		Function_213(3, 100);
	}
	iParam0->f_92 = (iParam0->f_92 + Function_134(3));
	Function_119();
	Function_214(13, iParam0->f_92);
	iLocal_94 = 1;
	Function_149(Var0, 4294967295, 0, 0);
	return;
}

void Function_149(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x41E7 / 16871
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_212(5, 1);
	Function_57(4096);
	switch (Function_36())
	{
		case 0x00000011:
		case 0x00000002:
			Function_174(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_168();
	Function_167();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(0);
			Function_166(&Global_78480 + 220, &uVar0, 0);
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), iParam0, iParam1, &uVar0);
			if (bParam3)
			{
				uVar0[0] = uVar0[11];
				NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 5, iParam1, &uVar0);
				uVar0[0] = uVar0[7];
				NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 3, iParam1, &uVar0);
			}
			uVar0[0] = uVar0[13];
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 6, iParam1, &uVar0);
			NET_END_LB_UPDATE();
			Global_84364.f_776 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_166(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_150(bParam2);
}

void Function_150(bool bParam0) //Position: 0x42F9 / 17145
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, 0, 0);
	Function_122(2);
	if (bParam0)
	{
		Function_122(1);
	}
	else
	{
		Function_53(1);
	}
	Function_151();
	return;
}

void Function_151() //Position: 0x4382 / 17282
{
	Function_164();
	Function_163();
	Function_163();
	Function_162();
	Function_162();
	Function_161();
	Function_161();
	Function_158();
	Function_158();
	if (!Function_37())
	{
		Function_156();
		Function_155();
		Function_154();
		Function_153();
	}
	Function_152();
	return;
}

void Function_152() //Position: 0x43B5 / 17333
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

void Function_153() //Position: 0x44BB / 17595
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

void Function_154() //Position: 0x44EE / 17646
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = bVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_155() //Position: 0x467C / 18044
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = bVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_156() //Position: 0x4830 / 18480
{
	Function_157(&Global_28260, 1, 0);
	return;
}

void Function_157(int iParam0, bool bParam1, var uParam2) //Position: 0x483E / 18494
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_48();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || uParam2)
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
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = bVar8;
					iParam0->f_1120 = bVar8;
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

struct<8> Function_158() //Position: 0x4A2F / 18991
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
				iVar2 = ((Function_160((50 + iVar4)) + Function_160((183 + iVar4))) + Function_160((90 + iVar4)));
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
	Function_159(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_159(int iParam0, bool bParam1, bool bParam2) //Position: 0x4ACA / 19146
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
		Function_34(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_33(iParam0);
	if (bParam2)
	{
		Function_21(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_160(bool bParam0) //Position: 0x4D65 / 19813
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_161() //Position: 0x4DA6 / 19878
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
		iVar2 = ((Function_160((50 + iVar3) + 15) + Function_160((183 + iVar3) + 15)) + Function_160((90 + iVar3) + 15));
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
	Function_159(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_162() //Position: 0x4E2F / 20015
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
			iVar2 = ((Function_160((50 + iVar3) + 8) + Function_160((183 + iVar3) + 8)) + Function_160((90 + iVar3) + 8));
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
	Function_159(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_163() //Position: 0x4EC6 / 20166
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
		iVar2 = ((Function_160((50 + iVar3)) + Function_160((183 + iVar3))) + Function_160((90 + iVar3)));
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
	Function_159(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_164() //Position: 0x4F45 / 20293
{
	Function_165(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_159(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_165(int iParam0, bool bParam1, int iParam2) //Position: 0x4F6B / 20331
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
	Function_34(iParam0, bParam1, 1);
	Function_33(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_21(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_166(var uParam0, var uParam1, bool bParam2) //Position: 0x5175 / 20853
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 40)
	{
		(*uParam1)[iVar0] = (*uParam0)[iVar0];
		iVar0++;
	}
	if (bParam2)
	{
		iVar0 = 40;
		while (iVar0 < 66)
		{
			(*uParam1)[iVar0] = 0;
			iVar0++;
		}
	}
	return;
}

void Function_167() //Position: 0x51BA / 20922
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 259)
	{
		Global_56092[iVar0] = 0;
		Global_56352[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

void Function_168() //Position: 0x51E4 / 20964
{
	Function_169(&(Global_50170[522]));
	Function_169(&(Global_50170[622]));
	Function_169(&(Global_50170[722]));
	Function_169(&(Global_50170[822]));
	Function_169(&(Global_50170[922]));
	Function_169(&(Global_50170[1022]));
	Function_169(&(Global_50170[1122]));
	return;
}

void Function_169(bool bParam0) //Position: 0x522D / 21037
{
	Global_56092[*bParam0] = 0;
	Function_170(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_170(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x5247 / 21063
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_173(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_172(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_173(iParam0), &cVar0, 2, 2, true);
		Function_171(Function_173(iParam0), 0);
	}
}

void Function_171(bool bParam0, bool bParam1) //Position: 0x52F5 / 21237
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

struct<16> Function_172(int iParam0) //Position: 0x531A / 21274
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_173(int iParam0) //Position: 0x534E / 21326
{
	return Global_50170[iParam022].f_24;
}

void Function_174(var uParam0, var uParam1, int iParam2) //Position: 0x535D / 21341
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_211(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_203(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_210(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_202(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_170(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_211(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_203(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_210(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_202(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_170(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_211(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_175(17, 150, Function_210(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_202(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_170(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_175(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x5506 / 21766
{
	Function_200(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_173(iParam0), 1.0f, false, 0);
	Function_196(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_193(iParam3);
	}
	Function_187(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_176();
}

void Function_176() //Position: 0x556C / 21868
{
	if (!Function_37())
	{
		if (!Function_186(1, 3, 1, 1))
		{
			Function_178(1);
			Function_177(1, 8);
		}
	}
	else
	{
		Function_150(0);
	}
	return;
}

void Function_177(var uParam0, int iParam1) //Position: 0x5595 / 21909
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_37())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_178(bool bParam0) //Position: 0x55D7 / 21975
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_179();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_151();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_41(&Global_63095, 1);
		Function_41(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_179() //Position: 0x5628 / 22056
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_181(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_181(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_180(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0,5f);
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

bool Function_180(vector3 vParam0) //Position: 0x56C9 / 22217
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_181(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x56E1 / 22241
{
	int iVar0;
	
	iVar0 = Function_184(uParam2, uParam3);
	if (Function_183(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_42(&Global_63095, 1);
			Function_41(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_42(&Global_63095, 2);
			Function_41(&Global_63095, 1);
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
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_42(&Global_63095, 2);
		Function_41(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_182();
	return StackVal, StackVal, Function_182();
}

vector3 Function_182() //Position: 0x57C8 / 22472
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_183(int iParam0) //Position: 0x57D1 / 22481
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_184(bool bParam0, bool bParam1) //Position: 0x57E7 / 22503
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
				fVar2 = Function_185(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_185(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_183(bVar0) && !bParam1)
	{
		bVar0 = Function_184(bParam0, 1);
	}
	return bVar0;
}

float Function_185(vector3 vParam0, vector3 vParam3) //Position: 0x58AE / 22702
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_186(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x58CB / 22731
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

void Function_187(bool bParam0, bool bParam1, bool bParam2) //Position: 0x596F / 22895
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_192();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_191(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_190(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_189(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_188(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_191(), iVar1 + 1);
	return;
}

struct<16> Function_188(int iParam0) //Position: 0x59E1 / 23009
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_189(int iParam0) //Position: 0x5A02 / 23042
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_190(int iParam0) //Position: 0x5A23 / 23075
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_191() //Position: 0x5A44 / 23108
{
	return "CQueue_Count";
}

var Function_192() //Position: 0x5A59 / 23129
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_193(int iParam0) //Position: 0x5A88 / 23176
{
	Function_194(iParam0, 1);
	return;
}

void Function_194(int iParam0, bool bParam1) //Position: 0x5A94 / 23188
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_42(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_195((iVar0 % 32)));
	}
	else
	{
		Function_41(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_195((iVar0 % 32)));
	}
	return;
}

int Function_195(bool bParam0) //Position: 0x5AEA / 23274
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_196(int iParam0, int iParam1) //Position: 0x5AF6 / 23286
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_199(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_173(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_198(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_172(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_197(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_173(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_173(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_173(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_197(int iParam0) //Position: 0x5B78 / 23416
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_172(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_198(int iParam0) //Position: 0x5B98 / 23448
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_199(int iParam0) //Position: 0x5BC9 / 23497
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

void Function_200(bool bParam0, bool bParam1) //Position: 0x5D47 / 23879
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_201();
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

var Function_201() //Position: 0x5E93 / 24211
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_202(var uParam0, bool bParam1, bool bParam2) //Position: 0x5EE0 / 24288
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_203(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x5EF8 / 24312
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_172(iParam0) };
	Function_187(&Var0, iParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_202(&fParam5, bParam8, iParam9);
	Function_170(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_205(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_193(iParam12);
	}
	Function_204(iParam0, 4);
	Function_176();
}

void Function_204(int iParam0, int iParam1) //Position: 0x5F6E / 24430
{
	Function_41(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_205(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x5F82 / 24450
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_199(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_173(iParam0));
	if ((bParam3 && Function_209(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_173(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_198(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_172(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_208(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_207(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_197(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_173(iParam0), &Var7, 0, 2, Function_209(iParam0, 4));
			if (!bParam3)
			{
				Function_206(iParam0, 4);
			}
		}
	}
}

void Function_206(int iParam0, int iParam1) //Position: 0x603F / 24639
{
	Function_42(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_207(int iParam0) //Position: 0x6053 / 24659
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_208(int iParam0) //Position: 0x6081 / 24705
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_209(int iParam0, bool bParam1) //Position: 0x60B1 / 24753
{
	return Function_47(Global_50170[iParam022].f_32, bParam1);
}

bool Function_210() //Position: 0x60C5 / 24773
{
	return "MP_Unstoppable_Icon_128";
}

float Function_211(int iParam0) //Position: 0x60E5 / 24805
{
	return Global_50170[iParam022].f_12;
}

void Function_212(int iParam0, int iParam1) //Position: 0x60F4 / 24820
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_213(int iParam0, int iParam1) //Position: 0x6119 / 24857
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_214(int iParam0, int iParam1) //Position: 0x6142 / 24898
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_215(int iParam0) //Position: 0x615C / 24924
{
	struct<17> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_219(*iParam0) };
	bVar5 = TO_FLOAT(CEIL((Function_69(iParam0 + 16 + 8) / Var0.f_12)));
	switch (Function_216(11))
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			fVar6 = 1.0f;
			break;
		
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			fVar6 = 2.0f;
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
			fVar6 = 3.0f;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
			fVar6 = 4.0f;
			break;
	}
	fVar7 = (((TO_FLOAT(Function_220(29)) * fVar6) * Var0.f_16) * TO_FLOAT(bLocal_42));
	bVar8 = (fVar7 / bVar5);
	iParam0->f_88 = (StackVal + CEIL(bVar8));
	iParam0->f_92 = (Function_221() + iParam0->f_88);
	return;
}

int Function_216(int iParam0) //Position: 0x623D / 25149
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Function_220(iParam0);
	iVar2 = 0;
	while (iVar2 <= 16)
	{
		if (Function_218(iVar2))
		{
			if (Function_217(iParam0, iVar2) >= iVar0)
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	return iVar1;
}

int Function_217(int iParam0, bool bParam1) //Position: 0x6279 / 25209
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_220(iParam0);
	}
	if (!Function_133(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

bool Function_218(bool bParam0) //Position: 0x62E7 / 25319
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_133(bParam0);
}

struct<20> Function_219(int iParam0) //Position: 0x62FD / 25341
{
	struct<5> Var0;
	
	Var0.f_12 = 30.0f;
	Var0.f_16 = 5.0f;
	if (iParam0 == Global_30640[2])
	{
		Var0 = 15;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30679[1])
	{
		Var0 = 17;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 500;
	}
	else if (iParam0 == Global_30658[3])
	{
		Var0 = 14;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 500;
	}
	else if (iParam0 == Global_30685[1])
	{
		Var0 = 21;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30668[2])
	{
		Var0 = 13;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 900;
	}
	else if (iParam0 == Global_30658[2])
	{
		Var0 = 18;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 600;
	}
	else if (iParam0 == Global_30685[2])
	{
		Var0 = 16;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30658[0])
	{
		Var0 = 20;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 500;
	}
	else if (iParam0 == Global_30717[3])
	{
		Var0 = 19;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 500;
	}
	else
	{
		Var0 = 4294967295;
		Var0.f_4 = 300.0f;
	}
	return StackVal, StackVal, StackVal, StackVal, Var0;
}

int Function_220(int iParam0) //Position: 0x6452 / 25682
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_221() //Position: 0x646B / 25707
{
	return Function_134(0);
}

void Function_222(int iParam0) //Position: 0x6475 / 25717
{
	if (Function_73(iParam0))
	{
		if (!Function_72(iParam0))
		{
			Function_70();
			iParam0->f_8 = (StackVal - NET_GET_NET_TIME());
			Function_42(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_223(bool bParam0) //Position: 0x653D / 25917
{
	if (IS_OBJECT_VALID(bParam0))
	{
		Function_224(bParam0);
	}
	return;
}

void Function_224(bool bParam0) //Position: 0x6550 / 25936
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "volrestrict"))
		{
			bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(bVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				if (DECOR_CHECK_EXIST(bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(bVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar0);
				}
			}
		}
		DESTROY_OBJECT(bParam0);
	}
	return;
}

void Function_225() //Position: 0x65DA / 26074
{
	SQUADS_MERGE(bLocal_99, bLocal_98);
	SQUADS_MERGE(bLocal_100, bLocal_98);
	SQUADS_MERGE(bLocal_101, bLocal_98);
	SQUADS_MERGE(bLocal_102, bLocal_98);
	SQUADS_MERGE(bLocal_103, bLocal_98);
	SQUADS_MERGE(bLocal_104, bLocal_98);
	Function_228(bLocal_98);
	SQUAD_GOALS_CLEAR(bLocal_98);
	Function_227(bLocal_98);
	Function_226(bLocal_98);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_98, false, 1, 4294967295);
	TASK_FLEE_ACTORSET(false, Global_78576, -1.0f, -1.0f, 0, 0, 0);
	return;
}

void Function_226(bool bParam0) //Position: 0x6634 / 26164
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_ANIMAL(bVar1))
			{
				if (!IS_ACTOR_VEHICLE(bVar1))
				{
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar1);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_227(bool bParam0) //Position: 0x667A / 26234
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_228(bool bParam0) //Position: 0x66C7 / 26311
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_229(bool bParam0) //Position: 0x66F9 / 26361
{
	bool bVar0;
	
	Function_230(&bParam0);
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
			{
				RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_230(var uParam0) //Position: 0x6741 / 26433
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*uParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*uParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(*uParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(*uParam0, GET_ACTOR_FROM_ACTORSET(*uParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_231() //Position: 0x679A / 26522
{
	Function_232();
	if (IS_VOLUME_VALID(Local_105.f_308))
	{
		DESTROY_VOLUME(Local_105.f_308);
	}
	if (IS_VOLUME_VALID(Local_105.f_324))
	{
		DESTROY_VOLUME(Local_105.f_324);
	}
	if (IS_VOLUME_VALID(Local_105.f_340))
	{
		DESTROY_VOLUME(Local_105.f_340);
	}
	if (IS_VOLUME_VALID(Local_105.f_360))
	{
		DESTROY_VOLUME(Local_105.f_360);
	}
	if (!IS_VOLUME_VALID(Local_105.f_308))
	{
		Local_105.f_308 = CREATE_VOLUME_SET_IN_LAYOUT(Local_105, "SpawnVol_0_set");
		(*&Local_105 + 292)[0] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_0_sub_0", 2, -4460,319f, 8,578414f, 3318,9f, 0.0f, -205,8026f, 0.0f, 10,92786f, 6,922777f, 5,143715f);
		ADD_TO_VOLUME_SET(Local_105.f_308, (*&Local_105 + 292)[0]);
		(*&Local_105 + 292)[1] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_0_sub_1", 2, -4490,132f, 8,578414f, 3303,858f, 0.0f, -209,7857f, 0.0f, 10,92786f, 6,922777f, 5,143715f);
		ADD_TO_VOLUME_SET(Local_105.f_308, (*&Local_105 + 292)[1]);
		(*&Local_105 + 292)[2] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_0_sub_2", 2, -4514,15f, 8,578414f, 3278,909f, 0.0f, -232,3972f, 0.0f, 10,92786f, 6,922777f, 5,143715f);
	}
	return;
}

void Function_232() //Position: 0x6908 / 26888
{
	Function_233();
	return;
}

void Function_233() //Position: 0x6911 / 26897
{
	Function_237();
	Function_235();
	Function_234();
	return;
}

void Function_234() //Position: 0x6920 / 26912
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bLocal_385))
	{
		if (!IS_OBJECT_VALID(bLocal_394))
		{
			NET_OBJECT_REPLICATION_MODE_START(17, 0);
			Function_182();
			Function_182();
			bLocal_394 = CREATE_PROP_IN_LAYOUT(Local_105, "gapAA_cart_rocks", "p_gen_rockGoldCart01x", Function_182(), Function_182(), 1);
			SET_OBJECT_COLLIDE_WITH_MOVABLES(bLocal_394, 0);
			NET_OBJECT_REPLICATION_MODE_END(17);
			Function_182();
			vVar0 = { StackVal, StackVal, Function_182() };
			vVar0.f_4 = 0,783448f;
			Function_182();
			ATTACH_OBJECTS(bLocal_394, bLocal_385, "", vVar0, Function_182(), 4294967295);
		}
	}
	return;
}

void Function_235() //Position: 0x69AD / 27053
{
	Function_228(bLocal_98);
	Function_228(bLocal_99);
	Function_236(bLocal_98, Local_105.f_224, 1, 4294967295);
	Function_236(bLocal_99, Local_105.f_244, 1, 4294967295);
	return;
}

var Function_236(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x69D5 / 27093
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return iVar0;
	}
	iVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, iParam2, bParam1, iParam3);
	iVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, false, bParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, iVar1, iVar0);
	return iVar0;
}

void Function_237() //Position: 0x6A10 / 27152
{
	if (IS_ACTOR_VALID(bLocal_385))
	{
		ENABLE_VEHICLE_SEAT(bLocal_385, false, 1);
		ENABLE_VEHICLE_SEAT(bLocal_385, true, 0);
		SET_ALLOW_JACK(bLocal_385, 0);
	}
	else
	{
		LOG_ERROR("Failed to add MineCart to single car train!");
	}
	return;
}

void Function_238() //Position: 0x6A6C / 27244
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_242(&Local_339, 0);
			Function_232();
			if (Function_240())
			{
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_239("GAP_MP_obj4", 0x40f00000, 1, 2, 0, 0, 0);
			}
			if (IS_BLIP_VALID(bLocal_387))
			{
				REMOVE_BLIP(bLocal_387);
			}
			if (IS_BLIP_VALID(bLocal_388))
			{
				REMOVE_BLIP(bLocal_388);
			}
			Local_339.f_8 = 6;
			break;
		
		case 0x00000006:
			if (!Function_240())
			{
				if (Function_102(11, 1, 0x3f800000))
				{
					Local_339.f_8 = 106;
				}
			}
			else
			{
				Function_61();
			}
			break;
		
		case 0x0000006A:
			Local_339.f_8 = 0;
			Local_339.f_4 = 11;
			break;
	}
	return;
}

void Function_239(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x6B18 / 27416
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, iVar0, iParam5, iParam6);
	}
}

bool Function_240() //Position: 0x6B6B / 27499
{
	if (((Function_241(bLocal_103, Local_105.f_248) < 0 || Function_241(bLocal_102, Local_105.f_248) < 0) || Function_241(bLocal_101, Local_105.f_248) < 0) || Function_241(bLocal_100, Local_105.f_248) < 0)
	{
		return 1;
	}
	return 0;
}

int Function_241(bool bParam0, bool bParam1) //Position: 0x6BA6 / 27558
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_IN_VOLUME(bVar2, bParam1))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_242(var uParam0, bool bParam1) //Position: 0x6BF8 / 27640
{
	struct<9> Var0;
	
	vVar0 = GET_LOCAL_SLOT();
	vVar0.f_4 = *uParam0;
	vVar0.f_8 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 78, &vVar0, 4, 1);
	if (bParam1)
	{
		NET_SCRIPTMSG_SEND(2, 78, &vVar0, 4, 1);
	}
	return;
}

void Function_243() //Position: 0x6C2F / 27695
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_242(&Local_339, 0);
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_239("GAP_MP_obj2", 0x40f00000, 1, 2, 0, 0, 0);
			iLocal_390 = 0;
			Function_233();
			Local_339.f_8 = 6;
			break;
		
		case 0x00000006:
			if (Function_262(bLocal_98) >= 5 && !iLocal_391)
			{
				SQUAD_GOALS_CLEAR(bLocal_98);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_98, 0);
				Function_236(bLocal_98, Local_105.f_236, 1, 4294967295);
				iLocal_391 = 1;
			}
			Function_244();
			if ((&Local_339 + 16)->f_32)
			{
				if (Function_102(3, 1, 0x3f800000))
				{
					Local_339.f_8 = 106;
				}
			}
			else
			{
				Function_61();
			}
			break;
		
		case 0x0000006A:
			Local_339.f_8 = 0;
			Local_339.f_4 = 3;
			break;
	}
	return;
}

void Function_244() //Position: 0x6CEA / 27882
{
	int iVar0;
	
	if (!IS_ACTOR_VALID(bLocal_385))
	{
		return;
	}
	iVar0 = 4294967295;
	if (Function_261(bLocal_385, &iVar0))
	{
		if (!iVar0 != iLocal_384)
		{
			Function_260(iVar0);
			iLocal_384 = iVar0;
			if (GET_LOCAL_SLOT() == iLocal_384)
			{
				iLocal_554 = 10;
				Function_259();
			}
		}
		Function_253(bLocal_385);
		VEHICLE_SET_HANDBRAKE(bLocal_385, 1.0f);
	}
	else
	{
		iLocal_554 = 6;
		if (!iLocal_390)
		{
			VEHICLE_SET_HANDBRAKE(bLocal_385, 1.0f);
			Function_260(4294967295);
			iLocal_384 = 4294967295;
			Function_223(bLocal_552);
		}
	}
	if (GET_LOCAL_SLOT() == iLocal_384)
	{
		if ((IS_VOLUME_VALID(Local_105.f_252) && !iLocal_551) && (&Local_339 + 16)->f_48 != 0)
		{
			Function_251(Local_105, Local_105.f_252, &bLocal_552);
			Function_250(8);
			iLocal_551 = 1;
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_385)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_385));
		}
		Function_248();
	}
	else if (iVar0 != 4294967295)
	{
		if (GET_BLIP_ICON(bLocal_387) == 330)
		{
			REMOVE_BLIP(bLocal_387);
		}
		if (!IS_BLIP_VALID(bLocal_387))
		{
			bLocal_387 = ADD_BLIP_FOR_OBJECT(bLocal_385, 325, 0f, 2, 0);
			SET_BLIP_PRIORITY(bLocal_387, 4);
		}
	}
	if ((&Local_339 + 16)->f_40 && !iLocal_559)
	{
		Function_247();
		iLocal_559 = 1;
	}
	else if ((&Local_339 + 16)->f_44 && !iLocal_560)
	{
		Function_245();
		iLocal_560 = 1;
	}
	return;
}

void Function_245() //Position: 0x6E17 / 28183
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_546)
	{
		Function_246(iLocal_546[iVar0], 1);
		iVar0++;
	}
	return;
}

void Function_246(bool bParam0, bool bParam1) //Position: 0x6E3F / 28223
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

void Function_247() //Position: 0x6E90 / 28304
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_540)
	{
		Function_246(iLocal_540[iVar0], 1);
		iVar0++;
	}
	return;
}

void Function_248() //Position: 0x6EB8 / 28344
{
	if (IS_ACTOR_VALID(bLocal_385))
	{
		if (IS_VOLUME_VALID(Local_105.f_204))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_385, Local_105.f_204))
			{
				Function_249(2);
			}
		}
		if (IS_VOLUME_VALID(Local_105.f_208))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_385, Local_105.f_208))
			{
				Function_249(3);
			}
		}
		if (IS_VOLUME_VALID(Local_105.f_212))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_385, Local_105.f_212))
			{
				Function_249(4);
			}
		}
		if (IS_VOLUME_VALID(Local_105.f_216))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_385, Local_105.f_216))
			{
				Function_249(5);
			}
		}
		if (IS_VOLUME_VALID(Local_105.f_220))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_385, Local_105.f_220) && !(&Local_339 + 16)->f_32)
			{
				Function_249(98);
			}
		}
		Function_259();
	}
	return;
}

void Function_249(int iParam0) //Position: 0x6F5B / 28507
{
	var uVar0;
	
	uVar0 = iParam0;
	NET_SCRIPTMSG_SEND(3, 83, &uVar0, 1, 1);
	return;
}

void Function_250(int iParam0) //Position: 0x6F70 / 28528
{
	var uVar0;
	
	uVar0 = iParam0;
	NET_SCRIPTMSG_SEND(3, 85, &uVar0, 1, 1);
	return;
}

void Function_251(var uParam0, bool bParam1, bool bParam2) //Position: 0x6F85 / 28549
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_VOLUME(bParam1), &vVar0);
	if (IS_OBJECT_VALID(*bParam2))
	{
		DESTROY_OBJECT(*bParam2);
	}
	*bParam2 = Function_252(StackVal, StackVal, uParam0, Function_22(), vVar0, 0.0f, 0.0f, 0.0f, Function_48(), 1,5f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
	return;
}

var Function_252(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, var uParam9, int iParam10, int iParam11, bool bParam12, int iParam13, var uParam14, float fParam15, float fParam16, var uParam17) //Position: 0x6FD1 / 28625
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, iParam8, iParam10, iParam13, 0, uParam14, uParam17);
	if (IS_OBJECT_VALID(bVar3))
	{
		strcpy(&cVar4, bParam1, 32);
		if (IS_STRING_VALID(bParam1))
		{
			stradd(&cVar4, "restrict", 32);
		}
		bVar12 = CREATE_VOLUME_IN_LAYOUT(bParam0, &cVar4, 2, vParam2, vParam5, 5.0f, 5.0f, 5.0f);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		if (bParam12 != 4294967295)
		{
			bVar13 = ADD_BLIP_FOR_OBJECT(bVar3, bParam12, 0.0f, 2, 0);
		}
		if (fParam15 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(bVar13, fParam15);
		}
		if (fParam16 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(bVar13, fParam16);
		}
		DECOR_SET_OBJECT(bVar3, "volrestrict", bVar12);
	}
	return bVar3;
}

void Function_253(bool bParam0) //Position: 0x709C / 28828
{
	switch ((&Local_339 + 16)->f_48)
	{
		case 0x00000008:
			if (IS_VOLUME_VALID(Local_105.f_252))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_105.f_252))
				{
					DESTROY_VOLUME(Local_105.f_252);
					Function_223(bLocal_552);
					Function_255();
					Function_254(9);
				}
			}
			break;
		
		case 0x00000009:
			if (IS_VOLUME_VALID(Local_105.f_256))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_105.f_256))
				{
					DESTROY_VOLUME(Local_105.f_256);
					Function_223(bLocal_552);
					Function_255();
					Function_254(10);
				}
			}
			break;
		
		case 0x0000000A:
			if (IS_VOLUME_VALID(Local_105.f_260))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_105.f_260))
				{
					DESTROY_VOLUME(Local_105.f_260);
					Function_223(bLocal_552);
					Function_255();
					Function_254(11);
				}
			}
			break;
		
		case 0x0000000B:
			if (IS_VOLUME_VALID(Local_105.f_264))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_105.f_264))
				{
					DESTROY_VOLUME(Local_105.f_264);
					Function_223(bLocal_552);
					Function_255();
					Function_254(12);
				}
			}
			break;
		
		case 0x0000000C:
			if (IS_VOLUME_VALID(Local_105.f_268))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_105.f_268))
				{
					DESTROY_VOLUME(Local_105.f_268);
					Function_223(bLocal_552);
					Function_255();
					Function_254(13);
				}
			}
			break;
		
		case 0x0000000D:
			if (IS_VOLUME_VALID(Local_105.f_272))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_105.f_272))
				{
					DESTROY_VOLUME(Local_105.f_272);
					Function_223(bLocal_552);
					Function_255();
					Function_254(14);
				}
			}
			break;
		
		case 0x0000000E:
			if (IS_VOLUME_VALID(Local_105.f_276))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_105.f_276))
				{
					DESTROY_VOLUME(Local_105.f_276);
					Function_223(bLocal_552);
					Function_255();
					Function_254(15);
				}
			}
			break;
		
		case 0x0000000F:
			if (IS_VOLUME_VALID(Local_105.f_280))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_105.f_280))
				{
					DESTROY_VOLUME(Local_105.f_280);
					Function_223(bLocal_552);
					Function_255();
					Function_254(16);
				}
			}
			break;
		
		case 0x00000010:
			if (IS_VOLUME_VALID(Local_105.f_284))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_105.f_284))
				{
					Function_223(bLocal_552);
					Function_255();
					DESTROY_VOLUME(Local_105.f_284);
					Function_254(17);
				}
			}
			break;
	}
	return;
}

void Function_254(int iParam0) //Position: 0x729A / 29338
{
	Function_250(iParam0);
	return;
}

void Function_255() //Position: 0x72A5 / 29349
{
	Function_257(FLOOR(25.0f), "XP_GAP_Checkpoint", 0);
	Function_256(2, FLOOR(25.0f));
	return;
}

void Function_256(int iParam0, bool bParam1) //Position: 0x72D7 / 29399
{
	Function_213(iParam0, (Function_134(iParam0) + bParam1));
	return;
}

void Function_257(var uParam0, bool bParam1, int iParam2) //Position: 0x72EA / 29418
{
	Function_258(uParam0);
	if (iParam2 != 0)
	{
		UNK_0xA6403262(Function_221(), UI_GET_STRING_BY_HASH(iParam2));
	}
	else
	{
		if (!IS_STRING_VALID(bParam1))
		{
			bParam1 = "Common_Null";
		}
		UNK_0xA6403262(Function_221(), UI_GET_STRING(bParam1));
	}
	return;
}

void Function_258(var uParam0) //Position: 0x732D / 29485
{
	Function_256(0, uParam0);
	return;
}

void Function_259() //Position: 0x7339 / 29497
{
	switch ((&Local_339 + 16)->f_48)
	{
		case 0x00000008:
			if (IS_VOLUME_VALID(Local_105.f_252) && !IS_OBJECT_VALID(bLocal_552))
			{
				Function_251(Local_105, Local_105.f_252, &bLocal_552);
			}
			break;
		
		case 0x00000009:
			if (IS_VOLUME_VALID(Local_105.f_256) && !IS_OBJECT_VALID(bLocal_552))
			{
				Function_251(Local_105, Local_105.f_256, &bLocal_552);
			}
			break;
		
		case 0x0000000A:
			if (IS_VOLUME_VALID(Local_105.f_260) && !IS_OBJECT_VALID(bLocal_552))
			{
				Function_251(Local_105, Local_105.f_260, &bLocal_552);
			}
			break;
		
		case 0x0000000B:
			if (IS_VOLUME_VALID(Local_105.f_264) && !IS_OBJECT_VALID(bLocal_552))
			{
				Function_251(Local_105, Local_105.f_264, &bLocal_552);
			}
			break;
		
		case 0x0000000C:
			if (IS_VOLUME_VALID(Local_105.f_268) && !IS_OBJECT_VALID(bLocal_552))
			{
				Function_251(Local_105, Local_105.f_268, &bLocal_552);
			}
			break;
		
		case 0x0000000D:
			if (IS_VOLUME_VALID(Local_105.f_272) && !IS_OBJECT_VALID(bLocal_552))
			{
				Function_251(Local_105, Local_105.f_272, &bLocal_552);
			}
			break;
		
		case 0x0000000E:
			if (IS_VOLUME_VALID(Local_105.f_276) && !IS_OBJECT_VALID(bLocal_552))
			{
				Function_251(Local_105, Local_105.f_276, &bLocal_552);
			}
			break;
		
		case 0x0000000F:
			if (IS_VOLUME_VALID(Local_105.f_280) && !IS_OBJECT_VALID(bLocal_552))
			{
				Function_251(Local_105, Local_105.f_280, &bLocal_552);
			}
			break;
		
		case 0x00000010:
			if (IS_VOLUME_VALID(Local_105.f_284) && !IS_OBJECT_VALID(bLocal_552))
			{
				Function_251(Local_105, Local_105.f_284, &bLocal_552);
			}
			break;
		
		case 0x00000011:
			if (IS_VOLUME_VALID(Local_105.f_288) && !IS_OBJECT_VALID(bLocal_552))
			{
				Function_251(Local_105, Local_105.f_288, &bLocal_552);
			}
			break;
	}
	return;
}

void Function_260(int iParam0) //Position: 0x74E3 / 29923
{
	var uVar0;
	
	uVar0 = iParam0;
	NET_SCRIPTMSG_SEND(3, 84, &uVar0, 1, 1);
	return;
}

bool Function_261(bool bParam0, int iParam1) //Position: 0x74F8 / 29944
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar2 = GET_ACTOR_IN_VEHICLE_SEAT(bParam0, false);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar0 = false;
			while (bVar0 < 15)
			{
				if (IS_SLOT_VALID(bVar0))
				{
					bVar1 = GET_SLOT_ACTOR(bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						if (bVar1 == bVar2)
						{
							*iParam1 = bVar0;
							return 1;
						}
					}
				}
				bVar0++;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int Function_262(bool bParam0) //Position: 0x7554 / 30036
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1++;
			}
		}
		bVar0++;
	}
	return bVar1;
}

void Function_263() //Position: 0x75A4 / 30116
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_242(&Local_339, 0);
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_239("GAP_MP_obj0", 0x40f00000, 1, 2, 0, 0, 0);
			if (!IS_BLIP_VALID(bLocal_389))
			{
				bLocal_389 = ADD_BLIP_FOR_COORD(&Local_105 + 496, 330, 0, 2, 0);
				SET_BLIP_PRIORITY(bLocal_389, 3);
			}
			Local_339.f_8 = 6;
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_265();
			}
			Function_264();
			if (IS_ACTOR_VALID(Function_48()))
			{
				if (IS_ACTOR_IN_VOLUME(Function_48(), Local_105.f_240) && !(&Local_339 + 16)->f_36)
				{
					Function_249(7);
				}
			}
			if ((&Local_339 + 16)->f_36 && IS_ACTOR_VALID(bLocal_385))
			{
				if (Function_102(2, 1, 0x3f800000))
				{
					Local_339.f_8 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			Local_339.f_8 = 0;
			Local_339.f_4 = 2;
			break;
	}
	return;
}

void Function_264() //Position: 0x767C / 30332
{
	if (!iLocal_393)
	{
		if (((&Local_339 + 16)->f_24 || IS_ACTOR_IN_VOLUME(Function_48(), Local_105.f_224)) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_558))
		{
			if (SQUAD_GET_SIZE(bLocal_98) >= 2)
			{
				Function_235();
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_558);
				EVENT_TRAP_CLEAR_EVENTS(bLocal_558);
				iLocal_393 = 1;
			}
		}
	}
	return;
}

void Function_265() //Position: 0x76C1 / 30401
{
	if (!iLocal_561)
	{
		if (Function_73(&iLocal_562))
		{
			if (Function_69(&iLocal_562) < 0,5f)
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				switch ((&Local_339 + 16)->f_60)
				{
					case 0x00000000:
						Function_291();
						Function_290(Local_105.f_176, bLocal_18, 0, 0);
						break;
					
					case 0x00000001:
						Function_275();
						Function_290(Local_105.f_200, bLocal_18, 0, 0);
						break;
					
					case 0x00000002:
						Function_270();
						break;
				}
				(&Local_339 + 16)->f_60++;
				Function_269(&iLocal_562);
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
		}
		else
		{
			Function_266(&iLocal_562);
		}
		if ((&Local_339 + 16)->f_60 >= 3)
		{
			iLocal_561 = 1;
		}
	}
	return;
}

void Function_266(int iParam0) //Position: 0x7765 / 30565
{
	if (!Function_73(iParam0))
	{
		Function_267(iParam0, 0.0f);
	}
	return;
}

void Function_267(var uParam0, float fParam1) //Position: 0x777A / 30586
{
	Function_70();
	Function_268(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_268(var uParam0, int iParam1) //Position: 0x778E / 30606
{
	uParam0->f_4 = iParam1;
	Function_42(uParam0, 1);
	Function_41(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_269(var uParam0) //Position: 0x77AB / 30635
{
	Function_267(uParam0, 0.0f);
	return;
}

void Function_270() //Position: 0x77B7 / 30647
{
	bLocal_386 = Function_271(StackVal, StackVal, StackVal, StackVal, Local_105, Function_22(), 1177, 976, *(&Local_105 + 392), *(&Local_105 + 392 + 12), 0, 976, 976, 976, 2);
	NET_ACTOR_SET_SCRIPT_INT(bLocal_386, 199);
	SET_ACTOR_INVULNERABILITY(bLocal_386, true);
	ENABLE_VEHICLE_SEAT(bLocal_386, false, 0);
	ENABLE_VEHICLE_SEAT(bLocal_386, true, 0);
	return;
}

bool Function_271(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x780A / 30730
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	bool bVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam4, vParam7);
	if (!IS_ACTOR_VALID(bVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return bVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(bVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(bVar0);
		if (iParam14 > iVar10 && iParam14 < 0)
		{
			iVar10 = iParam14;
		}
		bVar9 = false;
		while (bVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, bVar9, 16);
			bVar15 = "";
			if (Function_274(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_273(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_272(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[bVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (bVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = iParam11;
						break;
					
					case 0x00000002:
						bVar17 = iParam12;
						break;
					
					case 0x00000003:
						bVar17 = iParam13;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return bVar0;
				}
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar17, vParam4, vParam7);
			}
			if (IS_ACTOR_VALID(bVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, bVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			bVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, bVar18, 0);
			bVar18++;
		}
	}
	return bVar0;
}

bool Function_272(int iParam0, int iParam1) //Position: 0x7A3E / 31294
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if ((*iParam1)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_273(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x7A70 / 31344
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_274(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7A88 / 31368
{
	if (!IS_POPSET_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(bParam0, bParam1, bParam2);
}

void Function_275() //Position: 0x7AAF / 31407
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_105.f_200 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "GAP_Sniper_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_s1", 515, -4466,322f, 15,72828f, 3214,935f, 0.0f, 186,8692f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_200);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 6);
	Function_276(bVar0, 6);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_s2", 515, -4417,417f, 16.0f, 3220,918f, 0.0f, 122,5537f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_200);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 6);
	Function_276(bVar0, 6);
	return;
}

void Function_276(bool bParam0, int iParam1) //Position: 0x7BCC / 31692
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_289(bParam0);
			break;
		
		case 0x00000001:
			Function_288(bParam0);
			break;
		
		case 0x00000002:
			Function_287(bParam0);
			break;
		
		case 0x00000005:
			Function_286(bParam0);
			break;
		
		case 0x00000004:
			Function_285(bParam0);
			break;
		
		case 0x00000003:
			Function_284(bParam0);
			break;
		
		case 0x00000006:
			Function_283(bParam0);
			break;
		
		case 0x00000007:
			Function_282(bParam0);
			break;
		
		case 0x00000008:
			Function_281(bParam0);
			break;
		
		case 0x00000009:
			Function_279(bParam0);
			break;
		
		default:
			Function_277(bParam0);
			break;
	}
	if (GET_ACTORENUM_SPECIES(GET_ACTOR_ENUM(bParam0)) == 12)
	{
		if (RAND_INT_RANGE(false, 10000) <= 3000)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bParam0, 6, true);
		}
	}
	return;
}

void Function_277(bool bParam0) //Position: 0x7C98 / 31896
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0,75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_278(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_278(var uParam0, bool bParam1) //Position: 0x8000 / 32768
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

void Function_279(bool bParam0) //Position: 0x8022 / 32802
{
	Function_277(bParam0);
	Function_280(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 90.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 180.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, true);
	return;
}

void Function_280(bool bParam0, int iParam1) //Position: 0x81BF / 33215
{
	int iVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	iVar0 = AI_PREDICATE_FIND_NAMED("Guard", 0);
	if (AI_PREDICATE_IS_VALID(iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar0, iParam1);
	}
	return;
}

void Function_281(bool bParam0) //Position: 0x81F2 / 33266
{
	Function_277(bParam0);
	Function_280(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 85.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,65f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 150.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2,25f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, true);
	return;
}

void Function_282(bool bParam0) //Position: 0x839B / 33691
{
	Function_277(bParam0);
	Function_280(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 135.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, true);
	return;
}

void Function_283(bool bParam0) //Position: 0x852C / 34092
{
	Function_277(bParam0);
	Function_280(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, false);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 240.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_284(bool bParam0) //Position: 0x865E / 34398
{
	Function_277(bParam0);
	Function_280(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 70.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	return;
}

void Function_285(bool bParam0) //Position: 0x87E6 / 34790
{
	Function_277(bParam0);
	Function_280(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2,25f);
	return;
}

void Function_286(bool bParam0) //Position: 0x8940 / 35136
{
	Function_277(bParam0);
	Function_280(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_287(bool bParam0) //Position: 0x8A7E / 35454
{
	Function_277(bParam0);
	Function_280(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

void Function_288(bool bParam0) //Position: 0x8AA1 / 35489
{
	Function_277(bParam0);
	Function_280(bParam0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,25f);
	return;
}

void Function_289(bool bParam0) //Position: 0x8C0B / 35851
{
	Function_277(bParam0);
	Function_280(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

void Function_290(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x8C46 / 35910
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTORSET_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (iParam3 != 0 || (iParam3 != 1 && IS_ACTOR_HUMAN(bVar1)))
			{
				if (!IS_ACTOR_IN_ACTORSET(bParam1, bVar1))
				{
					ADD_ACTORSET_MEMBER(bParam1, bVar1);
				}
				if (bParam2)
				{
					SQUAD_LEAVE(bVar1);
				}
				else
				{
					bVar0++;
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
}

void Function_291() //Position: 0x8CC8 / 36040
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_105.f_176 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "GAP_Initial_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_i01", 505, -4437,929f, 8,600296f, 3266,494f, 0.0f, 101,5957f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_176);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 0);
	Function_292(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_i03", 507, -4436,271f, 8,599081f, 3233,77f, 0.0f, 201,2575f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 0);
	Function_292(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_i05", 509, -4440,166f, 8,646785f, 3243,891f, 0.0f, 126,1414f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 24, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 0);
	Function_292(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_i06", 505, -4486,824f, 8,567596f, 3266,323f, 0.0f, -74,47482f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 0);
	Function_292(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_i07", 515, -4459,496f, 9,223372f, 3231,497f, 0.0f, 185,9752f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 0);
	Function_292(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_i08", 510, -4446,994f, 12,57603f, 3207,818f, 0.0f, 176,0723f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 0);
	Function_292(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_i10", 505, -4464,393f, 8,975292f, 3234,299f, 0.0f, 203,6067f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 0);
	Function_292(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_i11", 513, -4426,504f, 8,768061f, 3207,319f, 0.0f, 155,1555f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 0);
	Function_292(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_i12", 515, -4430,636f, 8,768061f, 3206,114f, 0.0f, 186,8692f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 0);
	Function_292(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_292(bool bParam0, bool bParam1) //Position: 0x91F2 / 37362
{
	switch (bParam1)
	{
		case 0x00000000:
			SQUAD_JOIN(bParam0, bLocal_98);
			break;
		
		case 0x00000001:
			SQUAD_JOIN(bParam0, bLocal_99);
			SET_ACTOR_SKIP_VISIBILITY_CHECK(bParam0, 1);
			break;
		
		case 0x00000002:
			SQUAD_JOIN(bParam0, bLocal_100);
			break;
		
		case 0x00000003:
			SQUAD_JOIN(bParam0, bLocal_101);
			break;
		
		case 0x00000004:
			TASK_GO_NEAR_ACTORSET(bParam0, Global_78576, 25.0f, 2);
			SQUAD_JOIN(bParam0, bLocal_102);
			break;
		
		case 0x00000005:
			TASK_GO_NEAR_ACTORSET(bParam0, Global_78576, 25.0f, 2);
			SQUAD_JOIN(bParam0, bLocal_103);
			break;
		
		case 0x00000006:
			SQUAD_JOIN(bParam0, bLocal_104);
			break;
		
		default:
			SQUAD_JOIN(bParam0, bLocal_98);
			break;
	}
	Function_295(bParam0);
	Function_293(bParam0, 1);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 100.0f, 1);
	AI_SET_WEAPON_MAX_RANGE(bParam0, 75.0f);
	Function_276(bParam0, GET_ACTOR_COMBAT_CLASS(bParam0));
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 210.0f);
	return;
}

void Function_293(bool bParam0, bool bParam1) //Position: 0x92D3 / 37587
{
	int iVar0;
	float fVar1;
	
	if (bParam1)
	{
		iVar0 = NET_SCRIPT_GET_NUM_PARTICIPANTS();
	}
	else
	{
		iVar0 = GET_NUM_PLAYERS();
	}
	fVar1 = Function_294(iVar0);
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_ALIVE(bParam0))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, (GET_ACTOR_MAX_HEALTH(bParam0) * fVar1));
		SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
	}
	return;
}

var Function_294(int iParam0) //Position: 0x9317 / 37655
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			return 1.0f;
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
			return 1,2f;
			break;
		
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
			return 1,4f;
			break;
		
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
			return 1,5f;
			break;
		
		default:
			return 1.0f;
			break;
	}
	return 1.0f;
}

void Function_295(bool bParam0) //Position: 0x93AA / 37802
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM_STRING(bParam0);
	if (STRING_CONTAINS_STRING(bVar0, "_easy"))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, 30.0f);
	}
	else if (STRING_CONTAINS_STRING(bVar0, "_medium"))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, 40.0f);
	}
	else if (STRING_CONTAINS_STRING(bVar0, "_hard"))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, 50.0f);
	}
	else
	{
		LOG_ERROR("BOURASSA : we could not find the enum, something is wrong with this actor");
		SET_ACTOR_MAX_HEALTH(bParam0, 30.0f);
	}
	return;
}

void Function_296() //Position: 0x9469 / 37993
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (StackVal)
	{
		case 0x00000000:
			Function_388();
			Function_386();
			Function_378(&uLocal_395, 0);
			Local_339.f_100 = "FTR_SONG_07";
			Local_339.f_8 = 1;
			break;
		
		case 0x00000001:
			if (Function_371() && Function_362(&Local_339))
			{
				Local_339.f_8 = 6;
			}
			break;
		
		case 0x00000006:
			Function_359();
			Function_357(&Local_339, Local_105);
			Function_321(Local_105, &uLocal_395, 1, 1);
			Function_6();
			Function_320();
			ENABLE_CHILD_SECTOR("mp_gap_mineLid01x");
			iVar0 = 39842;
			iVar1 = 39610;
			iVar2 = 39580;
			NET_SCRIPTMSG_REGISTER_HANDLER(83, iVar0);
			NET_SCRIPTMSG_REGISTER_HANDLER(84, iVar1);
			NET_SCRIPTMSG_REGISTER_HANDLER(85, iVar2);
			Function_303(&Local_339, 39514);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_07", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_558 = CREATE_EVENT_TRAP("InjuryTrap", 1, Local_105);
			EVENT_TRAP_ON_VOLUME(bLocal_558, Local_105.f_224);
			Local_339.f_8 = 7;
			break;
		
		case 0x00000007:
			if (Function_301())
			{
				Local_339.f_8 = 106;
			}
			break;
		
		case 0x0000006A:
			if ((&Local_339 + 16)->f_36)
			{
				if (IS_ACTOR_VALID(bLocal_385))
				{
					Function_297(&Local_339);
				}
			}
			else
			{
				Function_297(&Local_339);
			}
			break;
	}
	return;
}

void Function_297(int iParam0) //Position: 0x95C0 / 38336
{
	iParam0->f_8 = 0;
	if (iParam0->f_16 != 0)
	{
		iParam0->f_4 = iParam0->f_16;
		Function_299(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0);
	}
	else
	{
		iParam0->f_4 = 1;
		Function_299(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0);
	}
	switch (iParam0->f_16)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			iParam0->f_4 = 1;
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000009:
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000B:
			Function_298();
			break;
		
		default:
			LOG_ERROR("Trying to sync to an invalid host stage??");
			break;
	}
	return;
}

void Function_298() //Position: 0x96A2 / 38562
{
	bLocal_91 = true;
	return;
}

void Function_299(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26) //Position: 0x96AB / 38571
{
	if (iParam0 == Global_30668[2])
	{
		Function_300(0);
	}
	else if (iParam0 == Global_30679[1])
	{
		Function_300(1);
	}
	else if (iParam0 == Global_30658[0])
	{
		Function_300(2);
	}
	else if (iParam0 == Global_30658[3])
	{
		Function_300(3);
	}
	else if (iParam0 == Global_30685[2])
	{
		Function_300(4);
	}
	else if (iParam0 == Global_30640[2])
	{
		Function_300(6);
	}
	else if (iParam0 == Global_30685[1])
	{
		Function_300(5);
	}
	else if (iParam0 == Global_30658[2])
	{
		Function_300(7);
	}
}

void Function_300(int iParam0) //Position: 0x9740 / 38720
{
	Global_56612[iParam09].f_20 = 1;
	Global_56688[776][iParam09].f_20 = 1;
	Global_56688[776][iParam09].f_24 = 0;
	Global_56688[776][iParam09].f_8 = 0;
	Global_56688[876][iParam09].f_20 = 1;
	Global_56688[876][iParam09].f_24 = 0;
	Global_56688[876][iParam09].f_8 = 0;
	Global_56688[976][iParam09].f_20 = 1;
	Global_56688[976][iParam09].f_24 = 0;
	Global_56688[976][iParam09].f_8 = 0;
	Global_56612[iParam09].f_12 = 0;
	return;
}

bool Function_301() //Position: 0x97D5 / 38869
{
	if (!IS_LAYOUTREF_VALID(bLocal_565))
	{
		bLocal_565 = CREATE_LAYOUT(Function_22());
	}
	if (!IS_OBJECT_VALID(bLocal_566))
	{
		bLocal_566 = CREATE_WORLD_SECTOR(bLocal_565, "GaptoothBreach");
	}
	if (IS_WORLD_SECTOR_LOADED(bLocal_566))
	{
		Function_302(bLocal_565, "pot0", Local_105.f_364);
		Function_302(bLocal_565, "bottle", Local_105.f_364);
		Function_302(bLocal_565, "jug0", Local_105.f_364);
		Function_302(bLocal_565, "crate04", Local_105.f_364);
		Function_302(bLocal_565, "crate08", Local_105.f_364);
		Function_302(bLocal_565, "crate06", Local_105.f_364);
		Function_302(bLocal_565, "crate13", Local_105.f_364);
		Function_302(bLocal_565, "crate14", Local_105.f_364);
		Function_302(bLocal_565, "bucket", Local_105.f_364);
		Function_302(bLocal_565, "jar0", Local_105.f_364);
		Function_302(bLocal_565, "debris", Local_105.f_364);
		Function_302(bLocal_565, "boiler", Local_105.f_364);
		Function_302(bLocal_565, "shovel", Local_105.f_364);
		Function_302(bLocal_565, "pan0", Local_105.f_364);
		Function_302(bLocal_565, "hammer", Local_105.f_364);
		Function_302(bLocal_565, "mug0", Local_105.f_364);
		Function_302(bLocal_565, "basin", Local_105.f_364);
		Function_302(bLocal_565, "package", Local_105.f_228);
		Function_302(bLocal_565, "book", Local_105.f_228);
		Function_302(bLocal_565, "glass", Local_105.f_228);
		Function_302(bLocal_565, "broom", Local_105.f_228);
		Function_302(bLocal_565, "ashtray", Local_105.f_228);
		Function_302(bLocal_565, "can0", Local_105.f_228);
		Function_302(bLocal_565, "spittoon", Local_105.f_228);
		DESTROY_LAYOUT(bLocal_565);
		return 1;
	}
	return 0;
}

void Function_302(bool bParam0, bool bParam1, bool bParam2) //Position: 0x99F5 / 39413
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), bParam0, 4294967295, 1);
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

void Function_303(char* cParam0, int iParam1) //Position: 0x9A4E / 39502
{
	cParam0->f_96 = iParam1;
	return;
}

void Function_304(int iParam0) //Position: 0x9A5A / 39514
{
	char* cVar0[32];
	
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("XP_GAP_Checkpoint"), iParam0);
	itos(&cVar0, Function_134(2), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	return;
}

void Function_305(int iParam0) //Position: 0x9A9C / 39580
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		(&Local_339 + 16)->f_48 = uVar0;
	}
	return;
}

void Function_306(int iParam0) //Position: 0x9ABA / 39610
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 1);
	if (IS_BLIP_VALID(bLocal_387))
	{
		REMOVE_BLIP(bLocal_387);
	}
	if (iVar0 == GET_LOCAL_SLOT())
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_239("GAP_MP_obj2_1", 0x40f00000, 1, 2, 0, 0, 0);
		iLocal_390 = 0;
		Function_269(&uLocal_537);
	}
	else if (iVar0 == 4294967295)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_239("GAP_MP_obj2", 0x40f00000, 1, 2, 0, 0, 0);
		if (!IS_BLIP_VALID(bLocal_387))
		{
			bLocal_387 = ADD_BLIP_FOR_ACTOR(bLocal_385, 330, 0, 2, 0);
			SET_BLIP_PRIORITY(bLocal_387, 4);
		}
		iLocal_390 = 1;
	}
	else
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_239("GAP_MP_obj2_2", 0x40f00000, 1, 2, 0, 0, 0);
		if (!IS_BLIP_VALID(bLocal_387))
		{
			bLocal_387 = ADD_BLIP_FOR_ACTOR(bLocal_385, 325, 0, 2, 0);
			SET_BLIP_PRIORITY(bLocal_387, 4);
		}
		iLocal_390 = 1;
		Function_269(&uLocal_537);
	}
	return;
}

void Function_307(int iParam0) //Position: 0x9BA2 / 39842
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 1);
	switch (iVar0)
	{
		case 0x00000002:
			if (IS_VOLUME_VALID(Local_105.f_204))
			{
				DESTROY_VOLUME(Local_105.f_204);
			}
			if (IS_VOLUME_VALID(Local_105.f_308))
			{
				DESTROY_VOLUME(Local_105.f_308);
			}
			Function_247();
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_319();
				Function_315(StackVal, StackVal, 2, "A", *(&Local_105 + 840));
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_314(&bLocal_100, bLocal_549);
				Function_290(Local_105.f_184, bLocal_18, 0, 0);
				(&Local_339 + 16)->f_40 = 1;
			}
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_239("GAP_MP_WaveOne", 0x40f00000, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000003:
			if (IS_VOLUME_VALID(Local_105.f_208))
			{
				DESTROY_VOLUME(Local_105.f_208);
			}
			if (IS_VOLUME_VALID(Local_105.f_324))
			{
				DESTROY_VOLUME(Local_105.f_324);
			}
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_290(Local_105.f_188, bLocal_18, 0, 0);
				iVar1 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_ACTOR(0, bLocal_385, 10.0f, 4);
				TASK_SEQUENCE_CLOSE();
				Function_313(Local_105.f_188, iVar1, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (IS_VOLUME_VALID(Local_105.f_212))
			{
				DESTROY_VOLUME(Local_105.f_212);
			}
			Function_245();
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_312();
				Function_315(StackVal, StackVal, 4, "C", *(&Local_105 + 888));
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_314(&bLocal_102, bLocal_549);
				Function_290(Local_105.f_192, bLocal_18, 0, 0);
				(&Local_339 + 16)->f_44 = 1;
			}
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_239("GAP_MP_WaveThree", 0x40f00000, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000005:
			if (IS_VOLUME_VALID(Local_105.f_216))
			{
				DESTROY_VOLUME(Local_105.f_216);
			}
			if (IS_VOLUME_VALID(Local_105.f_340))
			{
				DESTROY_VOLUME(Local_105.f_340);
			}
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_315(StackVal, StackVal, 5, "D", *(&Local_105 + 912));
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_314(&bLocal_103, bLocal_549);
				Function_290(Local_105.f_196, bLocal_18, 0, 0);
			}
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_239("GAP_MP_WaveFour", 0x40f00000, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000062:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				(&Local_339 + 16)->f_32 = 1;
			}
			break;
		
		case 0x00000007:
			if ((NET_IS_HOST_OF_THIS_SCRIPT() && !(&Local_339 + 16)->f_36) && !iLocal_392)
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_310();
				Function_309();
				Function_308();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_314(&bLocal_99, bLocal_549);
				Function_290(Local_105.f_180, bLocal_18, 0, 0);
				if (IS_ACTOR_VALID(bLocal_385))
				{
					VEHICLE_SET_HANDBRAKE(bLocal_385, 1.0f);
					SET_ACTOR_INVULNERABILITY(bLocal_385, true);
					TRAIN_SET_ENGINE_ENABLED(bLocal_383, 0);
					TRAIN_SET_AUTOPILOT_ENABLE(bLocal_383, 0);
					TRAIN_SET_TARGET_SPEED(bLocal_383, 0.0f);
					UNK_0xF1A53C41(&uVar2, &Local_105 + 368 + 12, 1, 0);
					TRAIN_SET_POSITION_DIRECTION(bLocal_383, &Local_105 + 368, &uVar2);
				}
				(&Local_339 + 16)->f_36 = 1;
			}
			if (IS_BLIP_VALID(bLocal_389))
			{
				REMOVE_BLIP(bLocal_389);
			}
			iLocal_392 = 1;
			break;
	}
	return;
}

void Function_308() //Position: 0x9E70 / 40560
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_105.f_180 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "nGAP_Mine1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_m01", 505, -4424,247f, 7,561572f, 3179,37f, 0.0f, 155,1555f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_m03", 506, -4430,021f, 0,4975434f, 3130,007f, 0.0f, 156,8811f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_m05", 515, -4407,297f, 2,225f, 3106,878f, 0.0f, 155,1555f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 15, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_m06", 509, -4444,183f, 4,744f, 3106,413f, 0.0f, 155,1555f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_m010", 514, -4432,065f, 0,5280859f, 3123,92f, 0.0f, 155,1555f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 15, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_m011", 507, -4434,454f, 0,4550136f, 3121,782f, 0.0f, 155,1555f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, false, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_m012", 506, -4409,872f, 2,225f, 3103,451f, 0.0f, 235,4531f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, false, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_m013", 514, -4407,841f, 2,225f, 3103,079f, 0.0f, 211,9939f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 6, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_m014", 514, -4431,091f, 0,4550136f, 3123,339f, 0.0f, 155,1555f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_180);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 24, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_309() //Position: 0xA2DD / 41693
{
	bLocal_383 = TRAIN_CREATE_NEW_TRAIN(1, "rail__mctrack_01x", 0);
	if (bLocal_383 > 0)
	{
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_383, 1203);
		bLocal_385 = GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bLocal_383, false));
		if (IS_ACTOR_VALID(bLocal_385))
		{
			UNK_0x1306549E(bLocal_385, Local_105);
			NET_ACTOR_SET_SCRIPT_INT(bLocal_385, 99);
		}
	}
	else
	{
		LOG_ERROR("Failed to create single car train for MineCart!");
	}
	return;
}

void Function_310() //Position: 0xA36D / 41837
{
	bool bVar0;
	
	bLocal_366 = Function_311();
	switch (bLocal_366)
	{
		case 0x00000003:
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "GAP_guard_d08", 505, *(&Local_105 + 524[16]), *(&Local_105 + 524[16] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "GAP_guard_d07", 513, *(&Local_105 + 524[26]), *(&Local_105 + 524[26] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "GAP_guard_d06", 515, *(&Local_105 + 524[36]), *(&Local_105 + 524[36] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "GAP_guard_d05", 509, *(&Local_105 + 524[46]), *(&Local_105 + 524[46] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			GIVE_WEAPON_TO_ACTOR(bVar0, 16, 15.0f, 1, 1);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
		
		case 0x00000002:
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "GAP_guard_d04", 515, *(&Local_105 + 524[66]), *(&Local_105 + 524[66] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "GAP_guard_d03", 509, *(&Local_105 + 524[76]), *(&Local_105 + 524[76] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "GAP_guard_d11", 509, *(&Local_105 + 524[96]), *(&Local_105 + 524[96] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
		
		case 0x00000001:
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "GAP_guard_d01", 514, *(&Local_105 + 524[106]), *(&Local_105 + 524[106] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "GAP_guard_d10", 505, *(&Local_105 + 524[116]), *(&Local_105 + 524[116] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			GIVE_WEAPON_TO_ACTOR(bVar0, 5, 10.0f, 1, 1);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, 1);
			break;
	}
	Function_276(bVar0, 3);
	return;
}

int Function_311() //Position: 0xA5E2 / 42466
{
	int iVar0;
	int iVar1;
	
	iVar1 = NET_SCRIPT_GET_NUM_PARTICIPANTS();
	if (iVar1 <= 4)
	{
		iVar0 = 1;
	}
	else if (iVar1 <= 4 && iVar1 > 11)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void Function_312() //Position: 0xA611 / 42513
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_105.f_192 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "GAP_Renforcements_Wave3"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w301", 508, -4513,481f, 15,82716f, 3256,987f, 0.0f, 216,7509f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_192);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w302", 513, -4510,079f, 15,82716f, 3254,784f, 0.0f, 216,7509f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_192);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w303", 505, -4511,167f, 15,82716f, 3257,39f, 0.0f, -66,81388f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_192);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w304", 505, -4510,515f, 15,82716f, 3256,922f, 0.0f, -55,17881f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_192);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w305", 508, -4510,987f, 15,82716f, 3258,991f, 0.0f, 216,7509f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_192);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w306", 508, -4510,831f, 15,82716f, 3254,54f, 0.0f, -55,17881f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_192);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w307", 507, -4512,821f, 15,82716f, 3255,924f, 0.0f, -55,17881f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_192);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w308", 505, -4509,938f, 15,82716f, 3257,751f, 0.0f, -55,17881f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_192);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w309", 505, -4512,011f, 15,82716f, 3254,771f, 0.0f, -55,17881f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_192);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_313(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xAA21 / 43553
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_SEQUENCE_PERFORM(bVar1, bParam1);
			TASK_PRIORITY_SET(bVar1, bParam2);
		}
		bVar0++;
	}
	if (bParam3)
	{
		TASK_SEQUENCE_RELEASE(bParam1, 1);
	}
}

void Function_314(bool bParam0, bool bParam1) //Position: 0xAA77 / 43639
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(*bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(*bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_SQUAD_AI_COMBAT_SET_NEW_STATE_MACHINE was passed an invalid squad");
	}
	return;
}

void Function_315(char* cParam0, int iParam1, vector3 vParam2) //Position: 0xAB13 / 43795
{
	float fVar0;
	float fVar1;
	
	bLocal_366 = Function_311();
	fVar0 = 10.0f;
	fVar1 = 65.0f;
	switch (bLocal_366)
	{
		case 0x00000003:
			Function_316(StackVal, StackVal, cParam0, iParam1, vParam2, 515, "GAP_backup_dyn_01_", fVar0, fVar1, 8);
			Function_316(StackVal, StackVal, cParam0, iParam1, vParam2, 514, "GAP_backup_dyn_02_", fVar0, fVar1, 7);
			Function_316(StackVal, StackVal, cParam0, iParam1, vParam2, 513, "GAP_backup_dyn_03_", fVar0, fVar1, 8);
		
		case 0x00000002:
			Function_316(StackVal, StackVal, cParam0, iParam1, vParam2, 515, "GAP_backup_dyn_05_", fVar0, fVar1, 3);
			Function_316(StackVal, StackVal, cParam0, iParam1, vParam2, 515, "GAP_backup_dyn_04_", fVar0, fVar1, 7);
			Function_316(StackVal, StackVal, cParam0, iParam1, vParam2, 510, "GAP_backup_dyn_06_", fVar0, fVar1, 3);
		
		case 0x00000001:
			Function_316(StackVal, StackVal, cParam0, iParam1, vParam2, 507, "GAP_backup_dyn_08_", fVar0, fVar1, 3);
			Function_316(StackVal, StackVal, cParam0, iParam1, vParam2, 505, "GAP_backup_dyn_09_", fVar0, fVar1, 4);
			Function_316(StackVal, StackVal, cParam0, iParam1, vParam2, 509, "GAP_backup_dyn_011_", fVar0, fVar1, 4);
			break;
	}
}

void Function_316(var uParam0, char* cParam1, vector3 vParam2, var uParam5, char* cParam6, float fParam7, float fParam8, int iParam9) //Position: 0xACB7 / 44215
{
	char* cVar0[32];
	bool bVar8;
	
	strcpy(&cVar0, cParam6, 32);
	stradd(&cVar0, cParam1, 32);
	bVar8 = Function_318(StackVal, StackVal, vParam2, &Local_105, uParam5, &cVar0, fParam7, fParam8);
	Function_276(bVar8, iParam9);
	Function_317(bVar8, uParam0);
}

void Function_317(bool bParam0, bool bParam1) //Position: 0xACEC / 44268
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_292(bParam0, bParam1);
		SET_ACTOR_FACTION(bParam0, 19);
		NET_ACTOR_SET_SCRIPT_INT(bParam0, bParam1);
	}
	return;
}

var Function_318(vector3 vParam0, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0xAD0F / 44303
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	bool bVar9;
	vector3 vVar10;
	
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(fParam6, bParam7);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(4);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 0.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1536, 0.0f, 0);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 20.0f, 0.0f);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		vVar10.x = 0.0f;
		vVar10.f_8 = 0.0f;
		vVar10.f_4 = 0.0f;
		if (FIND_GROUND_INTERSECTION(&vVar0, 5.0f, &vVar3, &uVar6))
		{
		}
		else
		{
			vVar3 = { StackVal, StackVal, vVar0 };
		}
		if (!Function_180(StackVal, StackVal, vVar3))
		{
			bVar9 = CREATE_ACTOR_IN_LAYOUT(*uParam3, bParam5, bParam4, vVar3, vVar10);
		}
	}
	return bVar9;
}

void Function_319() //Position: 0xAD9B / 44443
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_105.f_184 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "GAP_Renforcements_Wave1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w01", 513, -4453,651f, 9,035381f, 3224,474f, 0.0f, -0,7184591f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_184);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 24, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w02", 505, -4457,109f, 9,035381f, 3224,642f, 0.0f, -82,97761f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w03", 505, -4456,071f, 9,035381f, 3227,856f, 0.0f, -82,97761f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w04", 509, -4460,169f, 9,035381f, 3225,02f, 0.0f, -82,97761f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w05", 510, -4456,026f, 9,035381f, 3220,586f, 0.0f, -82,97761f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w06", 505, -4453,666f, 9,035381f, 3222,258f, 0.0f, -71,16527f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w07", 505, -4456,395f, 15,78755f, 3218,696f, 0.0f, -45,6481f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w08", 514, -4456,139f, 15,78755f, 3217,817f, 0.0f, -55,58385f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_105, "gap_guard_w09", 505, -4454,945f, 15,79641f, 3216,566f, 0.0f, -0,7184591f, 0.0f);
	SQUAD_JOIN(bVar0, Local_105.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, false, 0,42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_276(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_320() //Position: 0xB214 / 45588
{
	bLocal_98 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "SQUAD_Inital"));
	bLocal_99 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "SQUAD_Mine"));
	bLocal_100 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "SQUAD_Wave_One"));
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_100, 0);
	Function_236(bLocal_100, Local_105.f_224, 1, 4294967295);
	bLocal_101 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "SQUAD_Wave_Two"));
	bLocal_102 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "SQUAD_Wave_Three"));
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_102, 0);
	Function_236(bLocal_102, Local_105.f_228, 1, 4294967295);
	bLocal_103 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "SQUAD_Wave_Four"));
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_103, 0);
	Function_236(bLocal_103, Local_105.f_232, 1, 4294967295);
	bLocal_104 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_105, "SQUAD_Sniper_Squad"));
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_104, false, 1, 4294967295);
	TASK_CROUCH(false, -1.0f);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_104, 0);
	Function_236(bLocal_104, Local_105.f_232, 1, 4294967295);
	return;
}

int Function_321(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0xB332 / 45874
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	char* cVar17[64];
	char* cVar33[64];
	bool bVar49;
	bool bVar50;
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_356()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_355()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_355(), bParam0, 17, 0);
	}
	iVar2 = 0;
	iVar4 = 0;
	bVar5 = false;
	bVar6 = false;
	iVar13 = Function_28(32, GET_OBJECTSET_SIZE(bVar0));
	bVar6 = false;
	while (bVar6 <= iVar13)
	{
		bVar14 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, bVar0);
		bVar49 = false;
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_354(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_353(bVar14);
				vVar7 = { StackVal, StackVal, Function_353(bVar14) };
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2,5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2,5f, "");
				Function_352(bVar14);
				vVar10 = { StackVal, StackVal, Function_352(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_350(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_349());
							if (Function_348(bVar5))
							{
								if (Function_347((*iParam1 + 228)[bVar52]))
								{
									Function_328(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
									Function_323(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
									if (bParam2)
									{
										SET_BLIP_NAME(GET_BLIP_ON_OBJECT(bVar16), GET_WEAPON_DISPLAY_NAME((*iParam1 + 228)[bVar52]));
									}
								}
								else
								{
									cVar33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar17 };
									stradd(&cVar33, " is using undefined pickup slot #", 64);
									stradd(&cVar33, I2STR(bVar5), 64);
									bVar49 = true;
								}
							}
							break;
						
						case 0x00000005:
							if ((iParam1 + 228)->f_224 < 0.0f)
							{
								Function_328(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_322(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_328(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
							break;
					}
					if (!bVar49)
					{
						ADD_OBJECT_TO_OBJECTSET(bVar15, bVar1);
					}
				}
			}
		}
		DESTROY_OBJECT(bVar14);
		bVar6++;
	}
	CLEAN_OBJECTSET(bVar0);
	if (GET_OBJECTSET_SIZE(bVar0) == 0)
	{
		DESTROY_OBJECTSET(bVar0);
		bVar50 = GET_LOCAL_SLOT();
		NET_SCRIPTMSG_SEND(1, 19, &bVar50, 1, 1);
		return 1;
	}
	return 0;
}

var Function_322() //Position: 0xB566 / 46438
{
	return "XPBonus";
}

void Function_323(bool bParam0, struct<2> Param1, var uParam3) //Position: 0xB576 / 46454
{
	bool bVar0;
	
	if (Function_347(Param1))
	{
		bVar0 = Function_325(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_324(), bVar0);
	}
}

var Function_324() //Position: 0xB59C / 46492
{
	return "PackedWeapon";
}

var Function_325(struct<5> Param0) //Position: 0xB5B1 / 46513
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_326())) || SHIFT_LEFT(bParam2, Function_326() + 8));
}

bool Function_326() //Position: 0xB5CF / 46543
{
	return Function_327(39);
}

int Function_327(int iParam0) //Position: 0xB5DA / 46554
{
	float fVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	fVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, true);
		fVar0++;
	}
	return fVar0;
}

void Function_328(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0xB608 / 46600
{
	Function_339(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_333(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_332(), Function_331(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_330(), Function_329(iParam13, iParam14));
}

var Function_329(var uParam0, bool bParam1) //Position: 0xB659 / 46681
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_330() //Position: 0xB669 / 46697
{
	return "PackedGrass";
}

var Function_331(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB67D / 46717
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = 1;
	}
	if (bParam1)
	{
		iVar0 += 2;
	}
	return (iVar0 || SHIFT_LEFT(bParam2, 2));
}

var Function_332() //Position: 0xB6A2 / 46754
{
	return "PackedMetadata";
}

void Function_333(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0xB6B9 / 46777
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;
	
	switch (iParam2)
	{
		case 0x00000001:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 379, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 379, 0f, 2, 0);
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_324(), &uVar5))
				{
					Function_337(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_336();
				vVar0 = { StackVal, StackVal, Function_336() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 380, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 380, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_335();
				vVar0 = { StackVal, StackVal, Function_335() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 381, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 381, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_334();
				vVar0 = { StackVal, StackVal, Function_334() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 3, vVar0, 0);
			}
			break;
	}
	SET_BLIP_MAX_DISTANCE(bVar3, 1.0f);
	UNK_0x1E98AFEC(bVar3, 1);
	UNK_0xFF3DB575(bVar4, 1);
}

vector3 Function_334() //Position: 0xB7DF / 47071
{
	return 0.0f, 0,101f, -0,195f;
}

vector3 Function_335() //Position: 0xB7F0 / 47088
{
	return 0.0f, 0,127f, -0,177f;
}

vector3 Function_336() //Position: 0xB801 / 47105
{
	return 0.0f, 0,158f, -0,163f;
}

void Function_337(var uParam0, int iParam1) //Position: 0xB812 / 47122
{
	*iParam1 = Function_338(uParam0, Function_326(), 0);
	iParam1->f_4 = Function_338(uParam0, Function_326() + 8, Function_326());
	return;
}

var Function_338(var uParam0, int iParam1, bool bParam2) //Position: 0xB835 / 47157
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_195((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

int Function_339(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0xB854 / 47188
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_346();
			Function_335();
			vVar1 = { StackVal, StackVal, Function_335() };
			break;
		
		case 0x00000001:
			bVar0 = Function_345();
			Function_336();
			vVar1 = { StackVal, StackVal, Function_336() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_344();
			Function_334();
			vVar1 = { StackVal, StackVal, Function_334() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_343(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_341(Function_343()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_340(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_340() //Position: 0xB958 / 47448
{
	return "MPItemGiver";
}

struct<32> Function_341(bool bParam0) //Position: 0xB96C / 47468
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_342("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_342(char* cParam0, char* cParam1, char* cParam2) //Position: 0xB9D6 / 47574
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_343() //Position: 0xB9F5 / 47605
{
	return "PBox_";
}

var Function_344() //Position: 0xBA03 / 47619
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_345() //Position: 0xBA29 / 47657
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_346() //Position: 0xBA51 / 47697
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_347(int iParam0) //Position: 0xBA77 / 47735
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_348(bool bParam0) //Position: 0xBA89 / 47753
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_349() //Position: 0xBA99 / 47769
{
	return "ID";
}

bool Function_350(bool bParam0, int iParam1) //Position: 0xBAA4 / 47780
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_79((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_351())
			{
				return 0;
			}
			return !Function_79((bParam0 + 228)->f_220, 2);
			break;
		
		case 0x00000005:
			return !Function_79((bParam0 + 228)->f_220, 4);
			break;
	}
	return 1;
}

bool Function_351() //Position: 0xBAF9 / 47865
{
	return Function_47(Global_79962, 1024);
}

vector3 Function_352(bool bParam0) //Position: 0xBB09 / 47881
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_353(bool bParam0) //Position: 0xBB30 / 47920
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_354() //Position: 0xBB57 / 47959
{
	return "Type";
}

var Function_355() //Position: 0xBB64 / 47972
{
	return "PickupsSet";
}

var Function_356() //Position: 0xBB77 / 47991
{
	return "PickupFlagsSet";
}

void Function_357(var uParam0, bool bParam1) //Position: 0xBB8E / 48014
{
	Function_358(bParam1);
	PLAYSTAT_MP_DEED_START(GET_SHORT_SCRIPT_NAME());
	UNK_0x5C4CAE3A(bParam1);
	bLocal_18 = CREATE_ACTORSET_IN_LAYOUT(bParam1, "currentPopulation", 1);
	bLocal_41 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bLocal_41, 15);
	ITERATE_IN_LAYOUT(bLocal_41, bParam1);
	START_OBJECT_ITERATOR(bLocal_41);
	Global_78480.f_24 = *uParam0;
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_242(uParam0, 1);
	}
	Function_49(256);
	Function_101(64);
	Function_76(0);
	return;
}

void Function_358(var uParam0) //Position: 0xBBFF / 48127
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_359() //Position: 0xBC0D / 48141
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
	
	Function_361(4, 1);
	uVar0 = uVar0;
	Local_105 = CREATE_LAYOUT("GaptoothBreachMP_layout");
	Local_105.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Wave_Trigger1", 2, -4431,403f, 7,437463f, 3171,842f, 0.0f, 37,86579f, 0.0f, 7,697229f, 6,647546f, 1,743462f);
	Local_105.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Wave_Trigger2", 2, -4448,769f, 8,127755f, 3240,264f, 0.0f, -53,71848f, 0.0f, 32,67002f, 8,13928f, 9,261744f);
	Local_105.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Wave_Trigger3", 2, -4462,914f, 6,082295f, 3270,275f, 5,624571f, -18,59461f, -1,513871f, 22,44938f, 12,87067f, 5,935745f);
	Local_105.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Wave_Trigger4", 2, -4514,333f, 19,70016f, 3209,907f, -5,356577f, -174,3076f, 0,817673f, 9,705028f, 8,13928f, 10,35566f);
	Local_105.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Finish_Trigger", 2, -4469,582f, 28,83931f, 3103,474f, 0.0f, 41,38668f, 0.0f, 11,14913f, 5,54348f, 12,11272f);
	Local_105.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Defend_Vol", 2, -4436,889f, 16,74192f, 3232,038f, 0.0f, -30,12365f, 0.0f, 110,4622f, 29,5437f, 153,3621f);
	Local_105.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_105, "nHouse_Vol", 2, -4509,548f, 15,20351f, 3258,064f, 0.0f, -51,79939f, 0.0f, 22,07405f, 7,692403f, 14,0144f);
	Local_105.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_105, "nTower_Vol", 2, -4471,421f, 36,44719f, 3140,938f, 0.0f, -49,20515f, 0.0f, 23,06402f, 17,67281f, 33,58749f);
	Local_105.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Mine_Cart_Vol", 2, -4437,441f, 3,773274f, 3121,883f, -1,857684f, -14,85628f, 2,175175f, 43,03187f, 8,441209f, 47,50266f);
	Local_105.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Mine_Trigger", 2, -4427,531f, 9,736547f, 3205,615f, -0,05781954f, 345,3889f, -360,0581f, 14,00741f, 8,873666f, 9,627782f);
	Local_105.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Mine_Vol", 2, -4437,626f, 4,600298f, 3133,47f, -0,06462839f, 329,9643f, -360,0403f, 97,88824f, 29,13563f, 114,0392f);
	Local_105.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_105, "BadGuy_Check_Vol", 2, -4481,403f, 33,21836f, 3137,135f, 0.0f, 41,38668f, 0.0f, 113,4812f, 34,53939f, 84,57018f);
	Local_105.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Cart_GateWay1", 2, -4430,837f, 2,113245f, 3147,281f, 0.0f, -28,01026f, 0.0f, 2,976343f, 1,460104f, 0,8981802f);
	Local_105.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Cart_GateWay2", 2, -4442,802f, 2,785223f, 3154,093f, 0.0f, -28,01026f, 0.0f, 2,976343f, 1,460104f, 0,8981802f);
	Local_105.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Cart_GateWay3", 2, -4428,189f, 7,275308f, 3173,07f, 0.0f, 44,03556f, 0.0f, 2,369584f, 1,460104f, 0,8981802f);
	Local_105.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Cart_GateWay4", 2, -4428,428f, 8,671342f, 3213,734f, 0.0f, -10,26962f, 0.0f, 2,736396f, 2,270834f, 1,284401f);
	Local_105.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Cart_GateWay5", 2, -4462,384f, 8,628625f, 3249,22f, 0.0f, -10,26962f, 0.0f, 2,736396f, 2,270834f, 1,284401f);
	Local_105.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Cart_GateWay6", 2, -4473,047f, 8,500752f, 3289,336f, 0.0f, -69,94133f, 0.0f, 2,961648f, 2,270834f, 1,284401f);
	Local_105.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Cart_GateWay7", 2, -4502,507f, 12,22783f, 3266,321f, 0.0f, -143,4877f, 0.0f, 2,961648f, 2,270834f, 1,284401f);
	Local_105.f_280 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Cart_GateWay8", 2, -4514,25f, 24,25793f, 3183,852f, 0.0f, -180,8445f, 0.0f, 2,961648f, 2,270834f, 1,284401f);
	Local_105.f_284 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Cart_GateWay9", 2, -4474,301f, 28,58221f, 3150,367f, 0.0f, -231,985f, 0.0f, 2,961648f, 2,270834f, 1,284401f);
	Local_105.f_288 = CREATE_VOLUME_IN_LAYOUT(Local_105, "Cart_GateWay10", 2, -4469,302f, 28,37611f, 3104,444f, 0.0f, -140,4397f, 0.0f, 2,961648f, 2,270834f, 1,284401f);
	Local_105.f_308 = CREATE_VOLUME_SET_IN_LAYOUT(Local_105, "SpawnVol_0_set");
	(*&Local_105 + 292)[0] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_0_sub_0", 2, -4460,319f, 8,578414f, 3318,9f, 0.0f, -205,8026f, 0.0f, 10,92786f, 6,922777f, 5,143715f);
	ADD_TO_VOLUME_SET(Local_105.f_308, (*&Local_105 + 292)[0]);
	(*&Local_105 + 292)[1] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_0_sub_1", 2, -4490,132f, 8,578414f, 3303,858f, 0.0f, -209,7857f, 0.0f, 10,92786f, 6,922777f, 5,143715f);
	ADD_TO_VOLUME_SET(Local_105.f_308, (*&Local_105 + 292)[1]);
	(*&Local_105 + 292)[2] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_0_sub_2", 2, -4514,15f, 8,578414f, 3278,909f, 0.0f, -232,3972f, 0.0f, 10,92786f, 6,922777f, 5,143715f);
	ADD_TO_VOLUME_SET(Local_105.f_308, (*&Local_105 + 292)[2]);
	Local_105.f_324 = CREATE_VOLUME_SET_IN_LAYOUT(Local_105, "SpawnVol_1_set");
	(*&Local_105 + 312)[0] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_1_sub_0", 2, -4442,569f, 0,5051158f, 3119,469f, 350,6519f, 79,23355f, -12,02419f, 3,978073f, 2,356987f, 2,896699f);
	ADD_TO_VOLUME_SET(Local_105.f_324, (*&Local_105 + 312)[0]);
	(*&Local_105 + 312)[1] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_1_sub_1", 2, -4428,015f, 1,551075f, 3115,471f, 362,9982f, -69,51904f, 0,2091332f, 3,701197f, 2,344701f, 2,218517f);
	ADD_TO_VOLUME_SET(Local_105.f_324, (*&Local_105 + 312)[1]);
	Local_105.f_340 = CREATE_VOLUME_SET_IN_LAYOUT(Local_105, "SpawnVol_2_set");
	(*&Local_105 + 328)[0] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_2_Sub_0", 2, -4426,492f, 9,638123f, 3192,671f, -2,75873f, 340,4675f, -357,5094f, 2,481727f, 2,329498f, 2,516625f);
	ADD_TO_VOLUME_SET(Local_105.f_340, (*&Local_105 + 328)[0]);
	(*&Local_105 + 328)[1] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_2_Sub_1", 2, -4425,611f, 8,14677f, 3176,341f, -3,027948f, 390,8262f, -359,985f, 2,481727f, 2,329498f, 2,516625f);
	ADD_TO_VOLUME_SET(Local_105.f_340, (*&Local_105 + 328)[1]);
	Local_105.f_360 = CREATE_VOLUME_SET_IN_LAYOUT(Local_105, "SpawnVol_3_set");
	(*&Local_105 + 344)[0] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_3_sub_0", 2, -4500,459f, 13,62498f, 3268,863f, -0,7905401f, 209,9895f, -0,6050537f, 5,147435f, 3,26089f, 2,422885f);
	ADD_TO_VOLUME_SET(Local_105.f_360, (*&Local_105 + 344)[0]);
	(*&Local_105 + 344)[1] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_3_sub_1", 2, -4517,026f, 10,73883f, 3270,203f, -0,6944196f, 170,4002f, -1,116028f, 5,147435f, 3,26089f, 2,422885f);
	ADD_TO_VOLUME_SET(Local_105.f_360, (*&Local_105 + 344)[1]);
	(*&Local_105 + 344)[2] = CREATE_VOLUME_IN_LAYOUT(Local_105, "spawnvol_3_sub_2", 2, -4513,749f, 16,86174f, 3231,906f, -0,6848934f, 178,6203f, -1,016708f, 5,147435f, 3,26089f, 2,422885f);
	ADD_TO_VOLUME_SET(Local_105.f_360, (*&Local_105 + 344)[2]);
	Local_105.f_364 = CREATE_VOLUME_IN_LAYOUT(Local_105, "v_gap_total", 2, -4452,508f, 16,74192f, 3258,957f, 0.0f, -30,12365f, 0.0f, 395,4724f, 92,84851f, 407,3367f);
	*(&Local_105 + 368) = { -4431,305f, 0,6350126f, 3124,681f };
	*(&Local_105 + 368 + 12) = { 0.0f, -164,3784f, 0.0f };
	*(&Local_105 + 392) = { -4472,429f, 28,21577f, 3118,393f };
	*(&Local_105 + 392 + 12) = { 0.0f, -321,0774f, 0.0f };
	Local_105.f_416 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_105, 8, 0);
	*(&Local_105 + 420[06]) = { -4443,662f, -0,4372853f, 3114,823f };
	*(&Local_105 + 420[06] + 12) = { 177,7811f, -121,9402f, -178,6095f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_105, "f_WeaponPickUp", -4443,662f, -0,4372853f, 3114,823f, 177,7811f, -121,9402f, -178,6095f);
	Function_360(bVar1, 1, 1);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_105.f_416);
	*(&Local_105 + 420[16]) = { -4475,665f, 9,056845f, 3250,445f };
	*(&Local_105 + 420[16] + 12) = { -6,102783f, -281,1082f, -6,481982f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_105, "f_AmmoPickUp", -4475,665f, 9,056845f, 3250,445f, -6,102783f, -281,1082f, -6,481982f);
	Function_360(bVar2, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_105.f_416);
	*(&Local_105 + 420[26]) = { -4440,85f, -0,1909981f, 3124,574f };
	*(&Local_105 + 420[26] + 12) = { -9,619679f, -466,9226f, 7,863541f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_105, "f_AmmoPickUp1", -4440,85f, -0,1909981f, 3124,574f, -9,619679f, -466,9226f, 7,863541f);
	Function_360(bVar3, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_105.f_416);
	*(&Local_105 + 496) = { -4427,829f, 8,712235f, 3204,29f };
	*(&Local_105 + 496 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_105.f_520 = CREATE_OBJECTSET_IN_LAYOUT("Dynamic_SpawnSet", Local_105, 8, 0);
	*(&Local_105 + 524[06]) = { -4443,107f, 4,887225f, 3104,458f };
	*(&Local_105 + 524[06] + 12) = { 1,218658f, -164,3784f, -0,820905f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_105, "f_DynamicSpawn_01", -4443,107f, 4,887225f, 3104,458f, 1,218658f, -164,3784f, -0,820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_105.f_520);
	*(&Local_105 + 524[16]) = { -4423,854f, 0,6002281f, 3113,293f };
	*(&Local_105 + 524[16] + 12) = { 1,218658f, -164,3784f, -0,820905f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_105, "f_DynamicSpawn_02", -4423,854f, 0,6002281f, 3113,293f, 1,218658f, -164,3784f, -0,820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_105.f_520);
	*(&Local_105 + 524[26]) = { -4442,171f, 3,83816f, 3164,478f };
	*(&Local_105 + 524[26] + 12) = { 1,218658f, -164,3784f, -0,820905f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_105, "f_DynamicSpawn_03", -4442,171f, 3,83816f, 3164,478f, 1,218658f, -164,3784f, -0,820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_105.f_520);
	*(&Local_105 + 524[36]) = { -4443,498f, 2,576138f, 3151,306f };
	*(&Local_105 + 524[36] + 12) = { 1,218658f, -164,3784f, -0,820905f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_105, "f_DynamicSpawn_04", -4443,498f, 2,576138f, 3151,306f, 1,218658f, -164,3784f, -0,820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_105.f_520);
	*(&Local_105 + 524[46]) = { -4445,221f, 2,587423f, 3149,456f };
	*(&Local_105 + 524[46] + 12) = { 1,218658f, -164,3784f, -0,820905f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_105, "f_DynamicSpawn_05", -4445,221f, 2,587423f, 3149,456f, 1,218658f, -164,3784f, -0,820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_105.f_520);
	*(&Local_105 + 524[56]) = { -4436,348f, 1,591955f, 3153,222f };
	*(&Local_105 + 524[56] + 12) = { 1,218658f, -164,3784f, -0,820905f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_105, "f_DynamicSpawn_06", -4436,348f, 1,591955f, 3153,222f, 1,218658f, -164,3784f, -0,820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_105.f_520);
	*(&Local_105 + 524[66]) = { -4430,512f, 1,485163f, 3146,721f };
	*(&Local_105 + 524[66] + 12) = { 1,218658f, -164,3784f, -0,820905f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_105, "f_DynamicSpawn_07", -4430,512f, 1,485163f, 3146,721f, 1,218658f, -164,3784f, -0,820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_105.f_520);
	*(&Local_105 + 524[76]) = { -4430,569f, 0,5442817f, 3138,123f };
	*(&Local_105 + 524[76] + 12) = { 1,218658f, -164,3784f, -0,820905f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_105, "f_DynamicSpawn_08", -4430,569f, 0,5442817f, 3138,123f, 1,218658f, -164,3784f, -0,820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_105.f_520);
	*(&Local_105 + 524[86]) = { -4407,213f, 2,24857f, 3104,375f };
	*(&Local_105 + 524[86] + 12) = { 1,218658f, -164,3784f, -0,820905f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_105, "f_DynamicSpawn_09", -4407,213f, 2,24857f, 3104,375f, 1,218658f, -164,3784f, -0,820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_105.f_520);
	*(&Local_105 + 524[96]) = { -4408,979f, 2,273875f, 3104,869f };
	*(&Local_105 + 524[96] + 12) = { 1,218658f, -164,3784f, -0,820905f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_105, "f_DynamicSpawn_010", -4408,979f, 2,273875f, 3104,869f, 1,218658f, -164,3784f, -0,820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_105.f_520);
	*(&Local_105 + 524[106]) = { -4430,784f, 0,5736949f, 3127,585f };
	*(&Local_105 + 524[106] + 12) = { 1,218658f, -164,3784f, -0,820905f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_105, "f_DynamicSpawn_011", -4430,784f, 0,5736949f, 3127,585f, 1,218658f, -164,3784f, -0,820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_105.f_520);
	*(&Local_105 + 524[116]) = { -4433,008f, 0,5702545f, 3126,483f };
	*(&Local_105 + 524[116] + 12) = { 1,218658f, -164,3784f, -0,820905f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_105, "f_DynamicSpawn_012", -4433,008f, 0,5702545f, 3126,483f, 1,218658f, -164,3784f, -0,820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_105.f_520);
	*(&Local_105 + 524[126]) = { -4451,673f, 5,345598f, 3102,684f };
	*(&Local_105 + 524[126] + 12) = { 1,218658f, -164,3784f, -0,820905f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_105, "f_DynamicSpawn_013", -4451,673f, 5,345598f, 3102,684f, 1,218658f, -164,3784f, -0,820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_105.f_520);
	*(&Local_105 + 840) = { -4452,271f, 8,803034f, 3240,174f };
	*(&Local_105 + 840 + 12) = { 0.0f, -46,25061f, 0.0f };
	*(&Local_105 + 864) = { -4483,997f, 8,065142f, 3296,002f };
	*(&Local_105 + 864 + 12) = { 0.0f, -46,25061f, 0.0f };
	*(&Local_105 + 888) = { -4507,521f, 24,03768f, 3185,738f };
	*(&Local_105 + 888 + 12) = { 0.0f, -46,25061f, 0.0f };
	*(&Local_105 + 912) = { -4495,986f, 30,2688f, 3103,521f };
	*(&Local_105 + 912 + 12) = { 0.0f, -46,25061f, 0.0f };
	return;
}

void Function_360(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCEEC / 52972
{
	DECOR_SET_INT(bParam0, Function_354(), bParam1);
	if (bParam2 != 4294967286)
	{
		DECOR_SET_INT(bParam0, Function_349(), bParam2);
	}
	return;
}

void Function_361(int iParam0, int iParam1) //Position: 0xCF10 / 53008
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

int Function_362(int iParam0) //Position: 0xCF59 / 53081
{
	switch (iLocal_97)
	{
		case 0x00000000:
			Function_369(1);
			REGISTER_HOST_BROADCAST_VARIABLES(iParam0 + 16, 18);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_50, 33);
			bLocal_39 = CREATE_LAYOUT("dynamicAALayout");
			bLocal_40 = CREATE_EVENT_TRAP("AAObjReplication", 77, bLocal_39);
			EVENT_TRAP_STORE_EVENTS(bLocal_40, 1);
			Function_368();
			Function_391(&uLocal_44, 5.0f);
			iLocal_97 = 1;
			break;
		
		case 0x00000001:
			if (Function_367())
			{
				iLocal_97 = 2;
			}
			else if (Function_363(&uLocal_44))
			{
				Function_368();
				Function_392(&uLocal_44, 5.0f);
			}
			break;
		
		case 0x00000002:
			if (iParam0->f_16 != 4294967295)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_363(int iParam0) //Position: 0xD005 / 53253
{
	if (Function_365(iParam0))
	{
		Function_364(iParam0);
		return 1;
	}
	return 0;
}

void Function_364(int iParam0) //Position: 0xD01B / 53275
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_365(int iParam0) //Position: 0xD02F / 53295
{
	if (Function_73(iParam0))
	{
		if (Function_366(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_366(float fParam0) //Position: 0xD04A / 53322
{
	return -Function_69(fParam0);
}

bool Function_367() //Position: 0xD056 / 53334
{
	return iLocal_19;
}

void Function_368() //Position: 0xD05E / 53342
{
	struct<13> Var0;
	
	Var0 = 0;
	Var0.f_4 = GET_LOCAL_SLOT();
	Var0.f_8 = NET_GET_HOST_OF_THIS_SCRIPT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_369(bool bParam0) //Position: 0xD08A / 53386
{
	struct<17> Var0;
	
	Function_67(&Var0);
	if (StackVal != 0)
	{
	}
	strcpy(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
	Var0.f_4 = STRING_TO_HASH(STRING_LOWER(&cVar5));
	Var0 = 0;
	Var0.f_16 = 0.0f;
	if (bParam0)
	{
		Function_42(&Var0, 4);
	}
	Function_60(&Var0);
	Function_61();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 53461);
	return;
}

void Function_370(int iParam0) //Position: 0xD0D5 / 53461
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	Function_67(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), 0, 0);
		return;
	}
	Function_68(&iVar7);
	if (Function_114(&Var2))
	{
	}
	bVar8 = Function_105(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), 0, 0);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_113(&Var2, 1);
	Function_60(&Var2);
	return;
}

int Function_371() //Position: 0xD1D8 / 53720
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_372(&Local_105 + 4))
		{
			return 0;
		}
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[Local_33910].f_32))
		{
			return 0;
		}
		if (!Function_372(&bLocal_367))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_372(bool bParam0) //Position: 0xD212 / 53778
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_377();
	iVar1 = 0;
	if (!Function_5(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_376(bParam0[iVar03], 8);
		}
		else if (Function_375())
		{
			iVar1 = 1;
			Function_376(bParam0[iVar03], 8);
		}
		Function_376(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_5(bParam0[iVar03], 4))
		{
			if (!Function_5(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_5(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_5(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_376(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_5(bParam0[iVar03], 4))
		{
			if (!Function_5(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_376(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_376(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_376(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_376(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_376(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_376(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_376(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_376(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_376(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_376(bParam0[iVar03], 2);
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
	Function_373();
	return 1;
}

void Function_373() //Position: 0xD58D / 54669
{
	if (!Function_374(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_374(int iParam0) //Position: 0xD5CD / 54733
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_375() //Position: 0xD5E9 / 54761
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

void Function_376(var uParam0, int iParam1) //Position: 0xD614 / 54804
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_377() //Position: 0xD625 / 54821
{
	if (!Function_374(128))
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

void Function_378(int iParam0, bool bParam1) //Position: 0xD667 / 54887
{
	Function_382(iParam0);
	Function_382(iParam0 + 228);
	if (bParam1)
	{
		Function_379(iParam0);
	}
	return;
}

void Function_379(int iParam0) //Position: 0xD683 / 54915
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_380(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_380(var uParam0, int iParam1) //Position: 0xD6A3 / 54947
{
	Function_381(uParam0, iParam1, 0);
	return;
}

void Function_381(int iParam0, int iParam1, int iParam2) //Position: 0xD6B1 / 54961
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_382(int iParam0) //Position: 0xD6C2 / 54978
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_384(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_383(iParam0, 0.0f);
	return;
}

void Function_383(var uParam0, int iParam1) //Position: 0xD6EF / 55023
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_384(int iParam0) //Position: 0xD6FB / 55035
{
	Function_385(iParam0, 4294967295, 0, 1);
	return;
}

void Function_385(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xD709 / 55049
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

void Function_386() //Position: 0xD733 / 55091
{
	Function_387(&Local_105 + 4, 505, 2, 1);
	Function_387(&Local_105 + 4, 507, 2, 1);
	Function_387(&Local_105 + 4, 509, 2, 1);
	Function_387(&Local_105 + 4, 515, 2, 1);
	Function_387(&Local_105 + 4, 510, 2, 1);
	Function_387(&Local_105 + 4, 513, 2, 1);
	Function_387(&Local_105 + 4, 506, 2, 1);
	Function_387(&Local_105 + 4, 514, 2, 1);
	Function_387(&Local_105 + 4, 976, 2, 1);
	Function_387(&Local_105 + 4, 508, 2, 1);
	Function_387(&Local_105 + 4, 982, 2, 1);
	Function_387(&Local_105 + 4, 981, 2, 1);
	Function_387(&Local_105 + 4, 978, 2, 1);
	Function_387(&Local_105 + 4, 977, 2, 1);
	return;
}

var Function_387(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xD7EF / 55279
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_376(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_376(uParam0[iVar03], 8);
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

void Function_388() //Position: 0xD8BF / 55487
{
	Function_389(&bLocal_367, "mp_action_areas", 10, 0);
	Function_387(&bLocal_367, 1177, 2, 1);
	Function_387(&bLocal_367, 976, 2, 1);
	Function_387(&bLocal_367, 1203, 2, 1);
	Function_389(&bLocal_367, "p_gen_rockGoldCart01x", 0, 1);
	return;
}

var Function_389(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xD926 / 55590
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_390(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_376(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_390(var uParam0, int iParam1, int iParam2) //Position: 0xD95E / 55646
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_376(uParam0[iVar03], 4);
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

void Function_391(var uParam0, float fParam1) //Position: 0xDA22 / 55842
{
	if (!Function_73(uParam0))
	{
		Function_392(uParam0, fParam1);
	}
	return;
}

void Function_392(var uParam0, float fParam1) //Position: 0xDA38 / 55864
{
	Function_267(uParam0, -fParam1);
	return;
}

void Function_393(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4) //Position: 0xDA46 / 55878
{
	int iVar0;
	
	if (IS_PLAYER_IN_COMBAT(0))
	{
		iVar0 = Function_394(uParam4);
		if (0 == iVar0)
		{
			Function_10(uParam0, uParam2, 0, 4294967295, 4294967295);
		}
		else if (1 == iVar0)
		{
			Function_10(uParam0, iParam3, 0, 4294967295, 4294967295);
		}
	}
	else
	{
		Function_10(uParam0, iParam1, 0, 4294967295, 4294967295);
	}
}

int Function_394(float fParam0) //Position: 0xDA8C / 55948
{
	if (IS_PLAYER_IN_COMBAT(0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Function_48())) > fParam0)
		{
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Function_48())) > fParam0)
		{
			return 0;
		}
		return 1;
	}
	return 2;
}

bool Function_395() //Position: 0xDAC0 / 56000
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (!IS_LAYOUTREF_VALID(Local_105))
	{
		return 0;
	}
	bVar1 = CREATE_OBJECT_ITERATOR(Local_105);
	ITERATE_IN_LAYOUT(bVar1, Local_105);
	ITERATE_ON_OBJECT_TYPE(bVar1, 15);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if (IS_ACTOR_VALID(bVar3))
		{
			if (NET_ACTOR_GET_SCRIPT_INT(bVar3) == 199)
			{
				bLocal_386 = bVar3;
				iVar0 = 1;
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_396() //Position: 0xDB2A / 56106
{
	bool bVar0;
	
	bVar0 = false;
	if (!IS_LAYOUTREF_VALID(Local_105))
	{
		return 0;
	}
	bVar0 = Function_397("train_layout");
	if (!bVar0)
	{
		bVar0 = Function_397(GET_LAYOUT_NAME(GET_GC_LAYOUT()));
		if (!bVar0)
		{
			bVar0 = Function_397("nnetlayout");
		}
	}
	return bVar0;
}

int Function_397(bool bParam0) //Position: 0xDB7C / 56188
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	bVar1 = FIND_NAMED_LAYOUT(bParam0);
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		bVar2 = CREATE_OBJECT_ITERATOR(Local_105);
		ITERATE_IN_LAYOUT(bVar2, bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar2, 15);
		bVar3 = START_OBJECT_ITERATOR(bVar2);
		while (IS_OBJECT_VALID(bVar3))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(bVar3);
			if (IS_ACTOR_VALID(bVar4))
			{
				if (NET_ACTOR_GET_SCRIPT_INT(bVar4) == 99)
				{
					bLocal_385 = bVar4;
					GIVE_OBJECT_TO_LAYOUT(bVar4, FIND_NAMED_LAYOUT("train_layout"));
					iVar0 = 1;
				}
			}
			bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
		}
		DESTROY_ITERATOR(bVar2);
	}
	return iVar0;
}

bool Function_398(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xDC05 / 56325
{
	if (!Function_438())
	{
		return 0;
	}
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(41))
	{
		if (Function_220(38) <= 10 && NET_GET_PLAYMODE() != 0)
		{
			AWARD_ACHIEVEMENT(41);
		}
	}
	if (!uParam0->f_104 && GET_PLAYER_COMBATMODE() != 2)
	{
		uParam0->f_104 = 1;
	}
	if (bParam3)
	{
		Function_433();
	}
	Function_431(3);
	Function_430();
	if (StackVal != 0)
	{
		Function_428(bLocal_40, *uParam1, uParam2, 1);
		Function_427(uParam0);
	}
	if (StackVal >= bLocal_42)
	{
		bLocal_42 = StackVal;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_424(uParam0);
	}
	switch (iLocal_16)
	{
		case 0x00000000:
		case 0x00000003:
			Function_410(59635, 59315);
			break;
		
		case 0x00000002:
			Function_410(56836, 56522);
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_399(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xDCCA / 56522
{
	bool bVar0;
	bool bVar1;
	
	if (Global_76943[bParam096].f_24 == Global_78480.f_24)
	{
		Function_402(bParam1, uParam2, uParam3);
		bVar0 = Function_217(29, bParam0);
		bVar1 = false;
		if (!bParam1)
		{
			Function_400(bParam0, bVar0, 0);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_217(12, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_217(38, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_217(28, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_131(bParam0));
			bVar1++;
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
		}
	}
	return 0;
}

bool Function_400(bool bParam0, int iParam1, int iParam2) //Position: 0xDD6D / 56685
{
	var uVar0;
	
	return Function_401(bParam0, iParam1, &uVar0, iParam2);
}

int Function_401(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xDD7E / 56702
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

void Function_402(bool bParam0, int iParam1, char* cParam2) //Position: 0xDDE3 / 56803
{
	if (bParam0)
	{
		if (Function_123())
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

int Function_403() //Position: 0xDE04 / 56836
{
	if (!Function_404(1))
	{
		return 0;
	}
	if (Function_46(4096) || Function_46(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_40(8192, 1, 1);
	}
	else
	{
		Function_40(8192, 0, 1);
	}
	NET_PLAYER_LIST_SET_TEAM_SORT(1);
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_kills");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_deaths");
	NET_PLAYER_LIST_SET_HEADER(4, "mp_plist_assists");
	NET_PLAYER_LIST_SET_HEADER(5, "mp_plist_defends");
	NET_PLAYER_LIST_SET_HEADER(6, "mp_plist_score");
	return 1;
}

bool Function_404(bool bParam0) //Position: 0xDEC0 / 57024
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_123() || Function_409(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_407(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_123())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_405(Function_123());
	return 1;
}

void Function_405(bool bParam0) //Position: 0xDF41 / 57153
{
	if (bParam0 || Function_46(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_46(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_46(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_46(1048576) || Function_46(4)) || Function_406(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_40(0x20000000, 0, 1);
	}
	return;
}

var Function_406(int iParam0, bool bParam1) //Position: 0xDFCA / 57290
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

struct<64> Function_407(var uParam0) //Position: 0xDFEA / 57322
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_408(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_408(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xDFFE / 57342
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

int Function_409(bool bParam0, bool bParam1) //Position: 0xE043 / 57411
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

void Function_410(int iParam0, int iParam1) //Position: 0xE077 / 57463
{
	Function_411(iParam0, iParam1, 59308);
	return;
}

void Function_411(var uParam0, var uParam1, int iParam2) //Position: 0xE088 / 57480
{
	if (Function_46(0x4000000))
	{
		Function_44();
		Function_40(0x4000000, 0, 1);
	}
	if (Function_46(0x10000000))
	{
		Function_44();
		Function_40(0x10000000, 0, 1);
	}
	if (Function_46(2) != Function_46(0x2000000))
	{
		Function_44();
		Function_40(0x2000000, Function_46(2), 1);
	}
	if (Function_123())
	{
		Function_139(!Function_46(16));
	}
	if (Function_46(16))
	{
		Function_413(&uParam0, &uParam1, &iParam2);
		if (Function_46(8192))
		{
			if (!Function_46(4194304))
			{
				Function_40(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_46(8388608))
			{
				Function_40(8388608, 1, 1);
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
			Function_412();
		}
		Function_40(16384, 1, 1);
	}
	else if (!Function_46(32))
	{
		Function_412();
	}
	Function_40(32768, 0, 1);
	return;
}

void Function_412() //Position: 0xE221 / 57889
{
	if (Function_46(4194304))
	{
		Function_40(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_46(8388608))
	{
		Function_40(8388608, 0, 1);
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

void Function_413(var uParam0, var uParam1, int iParam2) //Position: 0xE32A / 58154
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_40(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_46(0x40000000);
	bVar3 = !Function_46(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_133(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_414(bVar1, 2048, 1))
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
				if (Function_400(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_46(4))
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
			if (Function_400(bVar1, (4294966296 - bVar1), 1))
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

bool Function_414(bool bParam0, int iParam1, bool bParam2) //Position: 0xE4A2 / 58530
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_406(iParam1, bParam2);
	}
	if (!Function_133(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_415(iParam1), 64);
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

var Function_415(int iParam0) //Position: 0xE523 / 58659
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

int Function_416() //Position: 0xE7AC / 59308
{
	return 1;
}

int Function_417(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0xE7B3 / 59315
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	Function_402(bParam1, iParam2, cParam3);
	iVar0 = Function_421(bParam0);
	if (iVar0 == Function_420())
	{
		iVar1 = ((CEIL(Function_418(1, bParam0)) / 1000) + 5000000);
	}
	else
	{
		iVar1 = ((CEIL(Function_418(1, bParam0)) / 1000) + iVar0 * 10000);
	}
	if (!bParam1)
	{
		Function_400(bParam0, iVar1, 0);
	}
	bVar2 = false;
	memcpy(&uVar3, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52(iVar0), 16);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, UI_GET_STRING(&uVar3));
	bVar2++;
	if (Function_414(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, "<SKULL>");
	}
	return 0;
}

var Function_418(int iParam0, bool bParam1) //Position: 0xE84B / 59467
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_419(iParam0);
	}
	if (!Function_133(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

var Function_419(int iParam0) //Position: 0xE8B4 / 59572
{
	return (*&Global_78480 + 176)[iParam0];
}

int Function_420() //Position: 0xE8C4 / 59588
{
	return Global_78480;
}

int Function_421(bool bParam0) //Position: 0xE8CE / 59598
{
	if (!Function_133(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_420();
	}
	return Global_76943[bParam096];
}

int Function_422() //Position: 0xE8F3 / 59635
{
	if (!Function_404(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_TEAM_SORT(0);
	NET_PLAYER_LIST_SET_HEADER(0, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_region");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_mw");
	NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_423();
	return 1;
}

void Function_423() //Position: 0xE98F / 59791
{
	if (Function_46(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_40(8192, 1, 1);
	}
	else if (Function_46(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_40(8192, 1, 1);
	}
	else
	{
		Function_40(8192, 0, 1);
	}
	return;
}

void Function_424(int iParam0) //Position: 0xE9CC / 59852
{
	int iVar0;
	int iVar1;
	
	if (!NET_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = NET_SCRIPT_GET_NUM_PARTICIPANTS();
	iParam0->f_16 = StackVal;
	(iParam0 + 16)->f_4 = StackVal;
	(iParam0 + 16)->f_24 = iLocal_20;
	if (iVar0 >= (iParam0 + 16)->f_20)
	{
		(iParam0 + 16)->f_20 = iVar0;
	}
	if (iLocal_17)
	{
		Function_426(&bLocal_18);
		iLocal_17 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= iLocal_22)
	{
		if (iLocal_22[iVar1] >= 4294967295)
		{
			iLocal_22[iVar1] = 4294967295;
			Function_425(iVar1);
		}
		iVar1++;
	}
	return;
}

void Function_425(int iParam0) //Position: 0xEA45 / 59973
{
	struct<13> Var0;
	
	Var0 = 1;
	Var0.f_4 = iParam0;
	Var0.f_8 = GET_LOCAL_SLOT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_426(int iParam0) //Position: 0xEA70 / 60016
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*iParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0)))
			{
				DESTROY_ACTOR(GET_ACTOR_FROM_ACTORSET(*iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_427(int iParam0) //Position: 0xEAB7 / 60087
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	
	if (!IS_ITERATOR_VALID(bLocal_41))
	{
		return;
	}
	bVar0 = OBJECT_ITERATOR_CURRENT(bLocal_41);
	if (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_IN_ACTORSET(bLocal_18, bVar1))
			{
				bVar2 = StackVal;
				if (IS_VOLUME_VALID(bVar2))
				{
					if (!IS_ACTOR_IN_VOLUME(bVar1, bVar2))
					{
						if (!DECOR_CHECK_EXIST(bVar1, "out_of_bounds_time"))
						{
							Function_100(bVar1);
							vVar3 = { StackVal, StackVal, Function_100(bVar1) };
							DECOR_SET_FLOAT(bVar1, "out_of_bounds_time", GET_CURRENT_GAME_TIME());
						}
						else if (GET_CURRENT_GAME_TIME() < (DECOR_GET_FLOAT(bVar1, "out_of_bounds_time") + fLocal_43))
						{
							bVar6 = GET_BLIP_ON_ACTOR(bVar1);
							if (IS_BLIP_VALID(bVar6))
							{
								REMOVE_BLIP(bVar6);
							}
							REMOVE_ACTORSET_MEMBER(bLocal_18, bVar1);
							TASK_FLEE_ACTORSET(bVar1, Global_78576, -1.0f, -1.0f, 0, 0, 0);
							RELEASE_ACTOR(bVar1);
						}
					}
					else if (DECOR_CHECK_EXIST(bVar1, "out_of_bounds_time"))
					{
						DECOR_REMOVE(bVar1, "out_of_bounds_time");
					}
				}
			}
		}
		OBJECT_ITERATOR_NEXT(bLocal_41);
	}
	else
	{
		START_OBJECT_ITERATOR(bLocal_41);
	}
	return;
}

int Function_428(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0xEBF3 / 60403
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		if (!IS_LAYOUTREF_VALID(bParam1))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
			EVENT_TRAP_CLEAR_EVENTS(bParam0);
			return 0;
		}
	}
	iVar0 = 0;
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bParam0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bParam1);
		if (!IS_ITERATOR_VALID(bVar1))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
			EVENT_TRAP_CLEAR_EVENTS(bParam0);
			return 0;
		}
		ITERATE_IN_EVENT_TRAP(bVar1, bParam0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		while (IS_OBJECT_VALID(bVar2))
		{
			bVar5 = GET_EVENT_FROM_OBJECT(bVar2);
			bVar3 = GET_EVENT_TARGET_AS_OBJECT(bVar5);
			bVar4 = GET_EVENT_PERPETRATOR(bVar5);
			bVar6 = GET_ACTOR_FROM_OBJECT(bVar3);
			if (IS_OBJECT_VALID(bVar4))
			{
				if (IS_ACTOR_VALID(bVar6))
				{
					if (bParam3)
					{
						if (Function_429(bVar4) == bParam1)
						{
							Stack.Push(bVar6);
							Call_Loc(uParam2);
						}
					}
					else
					{
						Stack.Push(bVar6);
						Call_Loc(uParam2);
					}
				}
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
		EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
		EVENT_TRAP_CLEAR_EVENTS(bParam0);
		DESTROY_ITERATOR(bVar1);
	}
	if (iVar0 >= 0)
	{
		return 1;
	}
	return 0;
}

int Function_429(bool bParam0) //Position: 0xECD5 / 60629
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 1)
		{
			bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
		}
		while (!IS_LAYOUTREF_VALID(bVar0) && IS_OBJECT_VALID(bParam0))
		{
			bParam0 = GET_OBJECT_OWNER(bParam0);
			if (GET_OBJECT_TYPE(bParam0) == 1)
			{
				bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			return bVar0;
		}
	}
	return "";
}

void Function_430() //Position: 0xED2F / 60719
{
	Function_431(4);
	return;
}

void Function_431(int iParam0) //Position: 0xED39 / 60729
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
			Function_432(iParam0);
		}
	}
	return;
}

void Function_432(int iParam0) //Position: 0xED6B / 60779
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_433() //Position: 0xED7A / 60794
{
	bool bVar0;
	
	if (!iLocal_21)
	{
		bVar0 = Function_48();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTORSET_VALID(bLocal_18))
			{
				if (Function_435(bVar0, bLocal_18, 1, 0, 0, -1.0f))
				{
					Function_434();
					iLocal_21 = 1;
				}
			}
		}
	}
	return;
}

void Function_434() //Position: 0xEDAF / 60847
{
	int iVar0;
	
	iVar0 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 80, &iVar0, 1, 1);
	return;
}

bool Function_435(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xEDC8 / 60872
{
	bool bVar0;
	
	if (!IS_ACTORSET_VALID(bParam1) || !IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (Function_437(bParam1, 0, 0, 0, 0, 0) < 0)
	{
		return 0;
	}
	bVar0 = GET_ACTOR_FROM_ACTORSET(bParam1, iLocal_47);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_436(bParam0, bVar0, uParam2, uParam3, uParam4, uParam5))
		{
			return 1;
		}
	}
	bLocal_47++;
	if (bLocal_47 > GET_ACTORSET_SIZE(bParam1))
	{
		bLocal_47 = false;
	}
	return 0;
}

bool Function_436(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xEE31 / 60977
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (bParam0 == bParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(bParam1) == bParam0)
		{
			CLEAR_LAST_HIT(bParam1);
			return 1;
		}
	}
	if (bParam3)
	{
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
		{
			return 1;
		}
	}
	if (bParam4)
	{
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int Function_437(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xEF1E / 61214
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar2 = false;
		while (bVar2 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			bVar1 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar2);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_ALIVE(bVar1))
				{
					bVar3 = true;
					if (bParam1)
					{
						if (IS_ACTOR_CRIPPLED(bVar1, 3) || IS_ACTOR_CRIPPLED(bVar1, 4))
						{
							bVar3 = false;
						}
					}
					if (bParam2)
					{
						if (IS_ACTOR_HOGTIED(bVar1))
						{
							bVar3 = false;
						}
					}
					if (bParam3)
					{
						if (IS_ACTOR_BEING_DRAGGED(bVar1, 1.0f))
						{
							bVar3 = false;
						}
					}
					if (bParam4)
					{
						bParam4 = bParam4;
					}
					if (bParam5)
					{
						if (!IS_ACTOR_RIDING(bVar1) && !IS_ACTOR_RIDING_VEHICLE(bVar1))
						{
							bVar3 = false;
						}
					}
					if (bVar3)
					{
						iVar0++;
					}
				}
			}
			bVar2++;
		}
	}
	return iVar0;
}

bool Function_438() //Position: 0xEFCC / 61388
{
	int iVar0;
	
	if (!Function_35())
	{
		return 0;
	}
	iVar0 = NET_GET_SCRIPT_STATUS();
	if (iVar0 != 0 || iVar0 != 3)
	{
		return 0;
	}
	return 1;
}

void Function_439(bool bParam0) //Position: 0xEFEF / 61423
{
	if (Function_440(bParam0))
	{
		Function_292(bParam0, NET_ACTOR_GET_SCRIPT_INT(bParam0));
		ADD_ACTOR_STAY_WITHIN_VOLUME(StackVal, bParam0);
	}
	else if (NET_ACTOR_GET_SCRIPT_INT(bParam0) == 199)
	{
		bLocal_386 = bParam0;
	}
	return;
}

bool Function_440(bool bParam0) //Position: 0xF02B / 61483
{
	bool bVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return 0;
	}
	if (Function_441(bParam0))
	{
		if (!IS_ACTOR_IN_ACTORSET(bLocal_18, bParam0))
		{
			ADD_ACTORSET_MEMBER(bLocal_18, bParam0);
		}
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
		{
			bVar0 = ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
			SET_BLIP_MAX_DISTANCE(bVar0, 3.0f);
		}
		return 1;
	}
	return 0;
}

bool Function_441(bool bParam0) //Position: 0xF078 / 61560
{
	if (IS_ACTOR_HORSE(bParam0) || IS_ACTOR_VEHICLE(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_HUMAN(bParam0) && NET_ACTOR_GET_SCRIPT_INT(bParam0) > 100)
	{
		return 1;
	}
	return 0;
}

bool Function_442(int iParam0) //Position: 0xF0A5 / 61605
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (*iParam0 != 4294967294)
	{
		bVar0 = StackVal;
		if (IS_VOLUME_VALID(bVar0))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
		}
	}
	Function_61();
	if (!Function_457(16, 0))
	{
		return 0;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
	}
	iParam0->f_4 = 0;
	iParam0->f_8 = 0;
	iParam0->f_104 = 0;
	iParam0->f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	iParam0->f_16 = 4294967295;
	(iParam0 + 16)->f_4 = 0;
	(iParam0 + 16)->f_24 = 0;
	(iParam0 + 16)->f_28 = 2;
	(iParam0 + 16)->f_32 = 0;
	(iParam0 + 16)->f_36 = 0;
	(iParam0 + 16)->f_48 = 0;
	(iParam0 + 16)->f_68 = 0.0f;
	Function_266(iParam0 + 16 + 8);
	Function_303(iParam0, 62669);
	iVar1 = 0;
	while (iVar1 <= Local_50)
	{
		Local_50[iVar12] = 4294967295;
		Local_50[iVar12].f_4 = 2;
		iVar1++;
	}
	Local_48 = 4294967295;
	Local_48.f_4 = 2;
	iVar2 = 0;
	while (iVar2 <= iLocal_22)
	{
		iLocal_22[iVar2] = 4294967295;
		iVar2++;
	}
	Function_448(2);
	Function_447(1);
	iVar3 = 62041;
	NET_SCRIPTMSG_REGISTER_HANDLER(8, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(78, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(77, 61922);
	NET_SCRIPTMSG_REGISTER_HANDLER(80, 61883);
	return 1;
}

void Function_443(int iParam0) //Position: 0xF1BB / 61883
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 1);
	if (NET_IS_HOST_OF_THIS_SCRIPT() && !iLocal_20)
	{
		if (iVar0 == STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()))
		{
			iLocal_20 = 1;
		}
	}
	return;
}

void Function_444(int iParam0) //Position: 0xF1E2 / 61922
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	if (Var0.f_12 == STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()))
	{
		if (Var0 == 1)
		{
			if (StackVal == GET_LOCAL_SLOT())
			{
				if (StackVal == NET_GET_HOST_OF_THIS_SCRIPT())
				{
					iLocal_19 = 1;
				}
			}
		}
		else if (Var0 == 0)
		{
			if (StackVal == GET_LOCAL_SLOT())
			{
				if (NET_IS_HOST_OF_THIS_SCRIPT())
				{
					if (IS_SLOT_VALID(StackVal))
					{
						iLocal_22[StackVal] = StackVal;
					}
				}
			}
		}
	}
	return;
}

void Function_445(int iParam0) //Position: 0xF259 / 62041
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	bVar4 = Var0;
	if (StackVal || (StackVal != STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()) && Var0.f_12 != Global_29006))
	{
		if (IS_SLOT_VALID(bVar4))
		{
			iVar5 = GET_SLOT_ACTOR(bVar4);
			if (IS_ACTORSET_VALID(bLocal_18))
			{
				Function_446(&bLocal_18, &iVar5);
			}
		}
	}
	return;
}

void Function_446(var uParam0, int iParam1) //Position: 0xF2A6 / 62118
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTORSET_VALID(*uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(*iParam1))
	{
		return;
	}
	bVar1 = false;
	while (bVar1 <= GET_ACTORSET_SIZE(*uParam0))
	{
		bVar0 = GET_ACTOR_FROM_ACTORSET(*uParam0, bVar1);
		if (IS_ACTOR_VALID(bVar0))
		{
			MEMORY_IDENTIFY(bVar0, *iParam1);
			MEMORY_CONSIDER_AS_ENEMY(bVar0, *iParam1);
		}
		bVar1++;
	}
	return;
}

void Function_447(int iParam0) //Position: 0xF2FB / 62203
{
	Function_50(&Global_83864 + 1252, iParam0);
	return;
}

void Function_448(int iParam0) //Position: 0xF30D / 62221
{
	UNK_0xA6403262(0, UI_GET_STRING("Common_Null"));
	if (iParam0 != 0)
	{
		if (iParam0 == 1)
		{
			UI_ENTER("XpHud");
			UI_EXIT("XpMultiplier");
		}
		else
		{
			UI_EXIT("XpHud");
		}
		UI_SET_STRING("mp_killchain_header", UI_GET_STRING("sn_kc"));
	}
	Function_167();
	Function_168();
	switch (iParam0)
	{
		case 0x00000001:
			Function_49(12288);
			Function_57(16384);
			break;
		
		case 0x00000002:
			Function_49(20480);
			Function_57(8192);
			break;
		
		default:
			Function_57(28672);
			break;
	}
	Function_57(2048);
	Function_450(0, 0);
	Function_449();
	return;
}

void Function_449() //Position: 0xF3D1 / 62417
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_450(bool bParam0, bool bParam1) //Position: 0xF3EA / 62442
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_455(&Global_78480);
	Function_454(&Global_78480);
	uVar0 = Function_220(37);
	Function_452();
	if (!bParam0)
	{
		Function_214(37, uVar0);
	}
	Function_96(18264, 0);
	Function_451();
	return;
}

void Function_451() //Position: 0xF436 / 62518
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_452() //Position: 0xF455 / 62549
{
	Function_453(&Global_78480 + 220);
	return;
}

void Function_453(int iParam0) //Position: 0xF464 / 62564
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_454(int iParam0) //Position: 0xF485 / 62597
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 132)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_455(int iParam0) //Position: 0xF4A9 / 62633
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 176)[iVar0] = 0.0f;
		iVar0++;
	}
	return;
}

void Function_456(var uParam0) //Position: 0xF4CD / 62669
{
	uParam0 = uParam0;
	return;
}

bool Function_457(var uParam0, bool bParam1) //Position: 0xF4D7 / 62679
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	iVar1 = NET_GET_SCRIPT_STATUS();
	bVar2 = Function_458("freemodetest");
	while (iVar1 == 2 && !IS_EXITFLAG_SET())
	{
		WAIT(false);
		if (bVar2)
		{
			DRAW_STRING_CURRENT_FONT(0,05f, 0,05f, "Registering Net Script...", 1.0f, 1.0f, 1.0f, 1.0f);
		}
		if (NET_IS_IN_SESSION())
		{
			if (iVar1 == 0)
			{
				NET_SET_THIS_SCRIPT_IS_NET_SCRIPT(uParam0);
			}
			else if (GET_CURRENT_GAME_TIME() < (fVar0 + 10.0f) && bParam1)
			{
				return 0;
			}
			if (iVar1 != 4 || iVar1 != 5)
			{
				if (bParam1)
				{
					return 0;
				}
				NET_UNREGISTER_AS_NET_SCRIPT();
			}
			iVar1 = NET_GET_SCRIPT_STATUS();
		}
	}
	return 1;
}

int Function_458(bool bParam0) //Position: 0xF58A / 62858
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

