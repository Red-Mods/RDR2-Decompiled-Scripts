//Decompiled with MagicRDR v1.0
//Function Count : 472
//Statics Count : 568
//Natives Count : 483
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
	bool bLocal_16 = false;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	bool bLocal_19 = false;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	bool bLocal_42 = false;
	bool bLocal_43 = false;
	float fLocal_44 = 0.0f;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	bool bLocal_48 = false;
	struct<5> Local_49 = { 0, 0, 16, 0, 0 } ;
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
	var uLocal_83 = 0;
	struct<5> Local_84 = { 0, 0, 0, 0, 0 } ;
	bool bLocal_89 = false;
	bool bLocal_90 = false;
	int iLocal_91 = 0;
	bool bLocal_92 = false;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = false;
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	bool bLocal_102 = false;
	bool bLocal_103 = false;
	bool bLocal_104 = false;
	bool bLocal_105 = false;
	struct<521> Local_106 = { 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_15 = 0;
	bLocal_16 = false;
	iLocal_17 = 0;
	fLocal_44 = 60.0f;
	iLocal_91 = 0;
	bLocal_92 = false;
	iLocal_93 = 0;
	iLocal_94 = 0;
	iLocal_95 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	iLocal_98 = 0;
	iLocal_550 = 1;
	iLocal_552 = 0;
	Local_340 = Global_30658[3];
	if (!Function_455(&Local_340))
	{
		TERMINATE_THIS_SCRIPT();
	}
	iLocal_385 = 4294967295;
	iLocal_555 = 6;
	while (!IS_EXITFLAG_SET() && Function_89())
	{
		WAIT(false);
	}
	UNK_0x444C3C32(1, 4, 0);
	UNK_0x2148AC15(4294967295, 0);
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x85 / 133
{
	Function_78(Local_106);
	Function_77();
	Function_12(&Local_340);
	if (IS_ACTOR_VALID(bLocal_386))
	{
		TRAIN_RELEASE_TRAIN(iLocal_384, 0);
	}
	if (IS_OBJECT_VALID(bLocal_395))
	{
		RELEASE_OBJECT_REF(bLocal_395);
	}
	if (IS_ACTOR_VALID(bLocal_387))
	{
		RELEASE_ACTOR(bLocal_387);
	}
	if (IS_BLIP_VALID(bLocal_388))
	{
		REMOVE_BLIP(bLocal_388);
	}
	if (IS_BLIP_VALID(bLocal_389))
	{
		REMOVE_BLIP(bLocal_389);
	}
	if (IS_BLIP_VALID(bLocal_390))
	{
		REMOVE_BLIP(bLocal_390);
	}
	Function_10(&uLocal_554, 1, 0, 4294967295, 4294967295);
	Function_6();
	DISABLE_CHILD_SECTOR("mp_gap_mineLid01x");
	Function_2(&bLocal_368);
	if ((&Local_340 + 16)->f_28 == 1)
	{
		DESTROY_GC_OBJECTS(0, 1);
	}
	return;
}

void Function_2(bool bParam0) //Position: 0x12E / 302
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

void Function_3(var uParam0, int iParam1) //Position: 0x154 / 340
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

void Function_4(var uParam0, int iParam1) //Position: 0x282 / 642
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0x29C / 668
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0x2B9 / 697
{
	int iVar0;
	
	iLocal_541[0] = Function_8(Local_340, "gaptoothBreach", "supplyShack01props01", 4);
	iLocal_541[1] = Function_8(Local_340, "gaptoothBreach", "supplyShack01props01", 1);
	iLocal_541[2] = Function_8(Local_340, "gaptoothBreach", "supplyShack01props01", 5);
	iLocal_541[3] = Function_8(Local_340, "gaptoothBreach", "supplyShack01props01", 2);
	iLocal_541[4] = Function_8(Local_340, "gaptoothBreach", "supplyShack01props01", 3);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_541)
	{
		Function_7(iLocal_541[iVar0], 1);
		iVar0++;
	}
	iLocal_547[0] = Function_8(Local_340, "gaptoothBreach", "cartStop01props01", 2);
	iLocal_547[1] = Function_8(Local_340, "gaptoothBreach", "cartStop01props01", 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_547)
	{
		Function_7(iLocal_547[iVar0], 1);
		iVar0++;
	}
	return;
}

void Function_7(bool bParam0, bool bParam1) //Position: 0x470 / 1136
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

var Function_8(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x4C4 / 1220
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

bool Function_9(int iParam0) //Position: 0x560 / 1376
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_10(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x576 / 1398
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_11(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_11(int iParam0) //Position: 0x59A / 1434
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
		
		case 0x0000003E:
			return "SUSPENSE_FOG";
		
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

void Function_12(int iParam0) //Position: 0xAED / 2797
{
	var uVar0;
	bool bVar16;
	
	PLAYSTAT_MP_DEED_COMPLETE_EX(GET_SHORT_SCRIPT_NAME(), CEIL(Function_72(iParam0 + 16 + 8)), NET_SCRIPT_GET_NUM_PARTICIPANTS(), iParam0->f_92);
	RELEASE_LAYOUT_REF(bLocal_40);
	Function_62();
	Function_61();
	HUD_CLEAR_OBJECTIVE();
	if (!Global_3403)
	{
		UI_EXIT("XpHud");
	}
	UI_EXIT("MpLinearSuppressor");
	Function_60(256);
	Function_60(4096);
	Function_59(64);
	Function_58(1);
	Function_56(8);
	if (*iParam0 != 4294967294)
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55(*iParam0), 16);
		Function_54("net_player_left_region", UI_GET_STRING(&uVar0));
		bVar16 = StackVal;
		if (IS_VOLUME_VALID(bVar16))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar16);
		}
	}
	Global_78480.f_24 = 4294967294;
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	NET_UNREGISTER_AS_NET_SCRIPT();
	Function_13(iParam0);
	return;
}

void Function_13(int iParam0) //Position: 0xBC9 / 3017
{
	SET_SWITCH_CAMERA_BUTTON_ENABLED(1);
	Function_17(iParam0);
	Function_14();
	return;
}

void Function_14() //Position: 0xBDB / 3035
{
	Function_16();
	Function_15();
	return;
}

void Function_15() //Position: 0xBE7 / 3047
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_90))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_90);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_89);
	}
	return;
}

void Function_16() //Position: 0xC07 / 3079
{
	UI_EXIT("AAPrompts_PlayerList");
	UI_EXIT("AAPrompts_Stats");
	return;
}

void Function_17(int iParam0) //Position: 0xC3C / 3132
{
	Function_52(131072);
	HUD_ENABLE(true);
	UI_INCLUDE("nMP_Ticker");
	UI_INCLUDE("WeaponAmmo");
	if (IS_WEAPON_DRAWN(Function_51()))
	{
		UI_ENTER("WeaponAmmo");
	}
	UI_UNFOCUS("HudGamerList");
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	Function_16();
	if (iLocal_91)
	{
		ENABLE_USE_CONTEXTS(1);
		iLocal_91 = 0;
	}
	if (Function_48())
	{
		Function_46();
		Function_42();
		Function_41();
	}
	NET_PLAYER_LIST_RESET();
	if (iLocal_95)
	{
		iLocal_95 = 0;
		Function_18(TO_FLOAT(iParam0->f_92), "XP_AA_complete", 1);
	}
	Function_58(1);
	Function_56(8);
	iLocal_17 = 3;
	return;
}

int Function_18(float fParam0, var uParam1, bool bParam2) //Position: 0xCF7 / 3319
{
	if (!Function_38())
	{
		Global_83822 = 1;
	}
	else if (bParam2)
	{
		Function_35(8, fParam0);
	}
	Function_19(487, (fParam0 * Global_3362), uParam1);
	return 1;
}

void Function_19(int iParam0, bool bParam1, int iParam2) //Position: 0xD27 / 3367
{
	Function_20(iParam0, CEIL(bParam1), 1, iParam2);
	Global_83864.f_1280 = 1;
	return;
}

int Function_20(int iParam0, bool bParam1, int iParam2, var uParam3) //Position: 0xD43 / 3395
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

void Function_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xF63 / 3939
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

var Function_22() //Position: 0x1590 / 5520
{
	int iVar0;
	
	return iVar0;
}

var Function_23(int iParam0) //Position: 0x1598 / 5528
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_24(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x15A9 / 5545
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

struct<32> Function_25(char* cParam0, bool bParam1) //Position: 0x169E / 5790
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_26(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x16B7 / 5815
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_28(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_27(Function_28(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_27(int iParam0, int iParam1) //Position: 0x171C / 5916
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_28(int iParam0, bool bParam1) //Position: 0x172E / 5934
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_29(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1740 / 5952
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

int Function_30(int iParam0) //Position: 0x1870 / 6256
{
	return Global_35278[iParam020].f_48;
}

float Function_31(int iParam0) //Position: 0x187F / 6271
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_32(int iParam0) //Position: 0x18B8 / 6328
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_33(int iParam0) //Position: 0x18F5 / 6389
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

int Function_34(int iParam0, bool bParam1, bool bParam2) //Position: 0x1A8F / 6799
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

void Function_35(int iParam0, float fParam1) //Position: 0x1CD3 / 7379
{
	Function_36(iParam0, (Function_37(iParam0) + fParam1));
	return;
}

void Function_36(int iParam0, int iParam1) //Position: 0x1CE6 / 7398
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

float Function_37(int iParam0) //Position: 0x1D0F / 7439
{
	return (*&Global_78480 + 176)[iParam0];
}

bool Function_38() //Position: 0x1D1F / 7455
{
	if (Function_40())
	{
		return (Function_39() != 1 || Function_39() != 0);
	}
	return 0;
}

int Function_39() //Position: 0x1D38 / 7480
{
	return Global_79349.f_16;
}

bool Function_40() //Position: 0x1D44 / 7492
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41() //Position: 0x1D4D / 7501
{
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_90))
	{
		bLocal_90 = ADD_SCRIPT_USE_CONTEXT("mp_aa_vote_replay", 1, 15, 0, 0, 0, 0, 4294967295, 0);
	}
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
	{
		bLocal_89 = ADD_SCRIPT_USE_CONTEXT("mp_aa_vote_skip", 1, 13, 0, 0, 0, 0, 4294967295, 0);
	}
	return;
}

void Function_42() //Position: 0x1DA7 / 7591
{
	Function_43(1024, 0, 1);
	Function_43(1, 0, 0);
	return;
}

void Function_43(int iParam0, bool bParam1, int iParam2) //Position: 0x1DBB / 7611
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_45(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_44(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_44(int iParam0, int iParam1) //Position: 0x1DE3 / 7651
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_45(int iParam0, int iParam1) //Position: 0x1DF6 / 7670
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_46() //Position: 0x1E05 / 7685
{
	if (Function_48())
	{
		Function_47();
	}
	Function_43(4096, 0, 1);
	return;
}

void Function_47() //Position: 0x1E1C / 7708
{
	Function_43(32768, 1, 0);
	return;
}

bool Function_48() //Position: 0x1E2B / 7723
{
	return (Function_49(4096) || Function_49(4));
}

bool Function_49(bool bParam0) //Position: 0x1E3C / 7740
{
	return Function_50(Global_76905.f_132, bParam0);
}

bool Function_50(var uParam0, bool bParam1) //Position: 0x1E4D / 7757
{
	return (uParam0 && bParam1) == 0;
}

var Function_51() //Position: 0x1E5A / 7770
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_52(int iParam0) //Position: 0x1E6F / 7791
{
	Function_53(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_53(var uParam0, int iParam1) //Position: 0x1EC8 / 7880
{
	Function_45(uParam0, iParam1);
	return;
}

void Function_54(bool bParam0, bool bParam1) //Position: 0x1ED5 / 7893
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), bParam1, 0, 0, 0, 0, 0);
	return;
}

struct<32> Function_55(int iParam0) //Position: 0x1EEA / 7914
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

void Function_56(int iParam0) //Position: 0x1FA7 / 8103
{
	Function_57(&Global_79338, iParam0);
	return;
}

void Function_57(var uParam0, int iParam1) //Position: 0x1FB6 / 8118
{
	Function_44(uParam0, iParam1);
	return;
}

void Function_58(int iParam0) //Position: 0x1FC3 / 8131
{
	Function_57(&Global_83864 + 1252, iParam0);
	return;
}

void Function_59(int iParam0) //Position: 0x1FD5 / 8149
{
	Function_57(&Global_78617 + 52, iParam0);
	return;
}

void Function_60(int iParam0) //Position: 0x1FE6 / 8166
{
	Function_57(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_61() //Position: 0x201F / 8223
{
	(&Global_83591 + 140)->f_4 = 0;
	Global_83591.f_140 = "";
	return;
}

void Function_62() //Position: 0x2036 / 8246
{
	struct<17> Var0;
	
	Function_64();
	Var0.f_4 = 0;
	Var0 = 0;
	Var0.f_8 = 4294967286;
	Var0.f_16 = 0.0f;
	Function_63(&Var0);
	return;
}

void Function_63(int iParam0) //Position: 0x2058 / 8280
{
	Local_84 = { StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_64() //Position: 0x2066 / 8294
{
	Function_65();
	return;
}

void Function_65() //Position: 0x206F / 8303
{
	Function_66(4294967286);
	return;
}

void Function_66(bool bParam0) //Position: 0x207B / 8315
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_71(&uVar0);
		Function_70(&vVar1);
		vVar1.z = uVar0;
		Function_63(&vVar1);
	}
	Function_69(&uVar0, bParam0);
	Function_68(&uVar0);
	if (NET_IS_IN_SESSION())
	{
		Function_67(&uVar0, GET_LOCAL_SLOT());
	}
	return;
}

void Function_67(var uParam0, int iParam1) //Position: 0x20B8 / 8376
{
	Local_51[iParam12] = *uParam0;
	return;
}

void Function_68(int iParam0) //Position: 0x20C7 / 8391
{
	Local_49 = *iParam0;
	return;
}

void Function_69(var uParam0, int iParam1) //Position: 0x20D2 / 8402
{
	*uParam0 = iParam1;
	return;
}

void Function_70(int iParam0) //Position: 0x20DD / 8413
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, Local_84 };
	return;
}

void Function_71(int iParam0) //Position: 0x20EB / 8427
{
	*iParam0 = Local_49;
	return;
}

float Function_72(var uParam0) //Position: 0x20F6 / 8438
{
	if (Function_76(uParam0))
	{
		if (Function_75(uParam0))
		{
			return StackVal;
		}
		Function_73();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_73() //Position: 0x21C7 / 8647
{
	if (!Function_74())
	{
	}
	return;
}

bool Function_74() //Position: 0x21D4 / 8660
{
	return NET_IS_IN_SESSION();
}

bool Function_75(int iParam0) //Position: 0x21DD / 8669
{
	return Function_50(*iParam0, 2);
}

bool Function_76(var uParam0) //Position: 0x21EA / 8682
{
	return Function_50(*uParam0, 1);
}

void Function_77() //Position: 0x21F7 / 8695
{
	Function_2(&Local_106 + 4);
	RELEASE_LAYOUT_REF(Local_106);
	return;
}

void Function_78(int iParam0) //Position: 0x2209 / 8713
{
	if (IS_ACTORSET_VALID(bLocal_19))
	{
		Function_88(bLocal_19);
	}
	Function_86(iParam0);
	if (!Function_84(4))
	{
		Function_79(1);
	}
	return;
}

void Function_79(bool bParam0) //Position: 0x222D / 8749
{
	bool bVar0;
	
	if (bParam0)
	{
		if (!Function_84(4))
		{
			Function_83(1);
		}
		else
		{
			return;
		}
	}
	Function_82(1);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_80(bVar0, bParam0);
		}
		bVar0++;
	}
	return;
}

void Function_80(bool bParam0, bool bParam1) //Position: 0x2271 / 8817
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_81(GET_LOCAL_SLOT(), bParam0) && !Function_84(2))
		{
			return;
		}
		if (!Function_84(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
		if (Function_84(4))
		{
			if (!bParam1)
			{
				DECOR_SET_BOOL(bVar0, "ArmUp", true);
			}
		}
		else
		{
			DECOR_REMOVE(bVar0, "ArmUp");
		}
	}
	return;
}

int Function_81(bool bParam0, bool bParam1) //Position: 0x22EE / 8942
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

void Function_82(int iParam0) //Position: 0x2312 / 8978
{
	Function_57(&Global_79337, iParam0);
	return;
}

void Function_83(int iParam0) //Position: 0x2321 / 8993
{
	Function_53(&Global_79337, iParam0);
	return;
}

bool Function_84(int iParam0) //Position: 0x2330 / 9008
{
	return Function_85(Global_79337, iParam0);
}

bool Function_85(var uParam0, int iParam1) //Position: 0x233F / 9023
{
	return (uParam0 && iParam1) == 0;
}

void Function_86(bool bParam0) //Position: 0x234C / 9036
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
			Function_87(bVar2);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_87(bool bParam0) //Position: 0x23EB / 9195
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

void Function_88(bool bParam0) //Position: 0x241C / 9244
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

int Function_89() //Position: 0x2467 / 9319
{
	if (!Function_409(&Local_340, &Local_106, 65513, 0, 0))
	{
		return 0;
	}
	if ((&Local_340 + 16)->f_36 && !IS_ACTOR_VALID(bLocal_386))
	{
		Function_407();
	}
	if (!IS_ACTOR_VALID(bLocal_387))
	{
		if (Function_406())
		{
			SET_ACTOR_INVULNERABILITY(bLocal_387, 1);
			ENABLE_VEHICLE_SEAT(bLocal_387, 0, 0);
			ENABLE_VEHICLE_SEAT(bLocal_387, 1, 0);
		}
	}
	TRAIN_ENABLE_VISUAL_DEBUG(uLocal_551);
	if (StackVal != 11)
	{
		if (Function_76(&uLocal_556))
		{
			if (Function_72(&uLocal_556) <= 0.0f)
			{
				Function_404(&uLocal_554, iLocal_555, 40, 38, 10.0f);
				Function_403(&uLocal_556, 5.0f);
			}
		}
		else
		{
			Function_402(&uLocal_556, 5.0f);
		}
	}
	switch (StackVal)
	{
		case 0x00000000:
			Function_305();
			UNK_0x2148AC15(322, 8);
			UNK_0x444C3C32(0, 4, 0);
			break;
		
		case 0x00000001:
			Function_272();
			break;
		
		case 0x00000002:
			Function_252();
			UNK_0x2148AC15(322, 12);
			break;
		
		case 0x00000003:
			Function_246();
			break;
		
		case 0x0000000B:
			Function_90();
			break;
	}
	return 1;
}

void Function_90() //Position: 0x2563 / 9571
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_239();
			Function_237(bLocal_19);
			Function_233();
			if (IS_BLIP_VALID(bLocal_388))
			{
				REMOVE_BLIP(bLocal_388);
			}
			if (IS_BLIP_VALID(bLocal_389))
			{
				REMOVE_BLIP(bLocal_389);
			}
			if (IS_BLIP_VALID(bLocal_390))
			{
				REMOVE_BLIP(bLocal_390);
			}
			ENABLE_VEHICLE_SEAT(bLocal_387, 0, 1);
			ENABLE_VEHICLE_SEAT(bLocal_387, 1, 1);
			ENABLE_VEHICLE_SEAT(bLocal_386, 0, 0);
			ENABLE_VEHICLE_SEAT(bLocal_386, 1, 0);
			SET_VEHICLE_PASSENGERS_ALLOWED(bLocal_386, 0);
			Function_231(bLocal_553);
			Function_10(&uLocal_554, 1, 0, 4294967295, 4294967295);
			Local_340.f_8 = 6;
			break;
		
		case 0x00000006:
			if (Function_92(&Local_340))
			{
				Function_91();
			}
			break;
	}
	return;
}

void Function_91() //Position: 0x260A / 9738
{
	if (IS_ACTOR_VALID(bLocal_386))
	{
		TRAIN_DESTROY_TRAIN(iLocal_384);
		if (IS_ACTOR_VALID(bLocal_386))
		{
			DESTROY_ACTOR(bLocal_386);
		}
	}
	if (IS_OBJECT_VALID(bLocal_395))
	{
		DESTROY_OBJECT(bLocal_395);
	}
	return;
}

bool Function_92(int iParam0) //Position: 0x263D / 9789
{
	int iVar0;
	int iVar1;
	char* cVar2[16];
	bool bVar6;
	
	iVar1 = 0;
	switch (iLocal_96)
	{
		case 0x00000000:
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_230(iParam0 + 16 + 8);
			}
			if (!bLocal_92)
			{
				if (((*iParam0 == Global_30717[2] && *iParam0 == Global_30640[13]) && *iParam0 == Global_30707[4]) && *iParam0 == Global_30658[7])
				{
					Function_20(458, 1, 0, 0);
				}
				strcpy(&cVar2, "FM Level - ", 16);
				stradd(&cVar2, I2STR(Global_83864.f_1264), 16);
				PLAYSTAT_MP_COOP_COMPLETE(GET_SHORT_SCRIPT_NAME(), CEIL(Function_72(iParam0 + 16 + 8)), (iParam0 + 16)->f_20, Function_229(), Function_228(29), &cVar2);
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				if (IS_STRING_VALID(iParam0->f_100))
				{
					AUDIO_MUSIC_FORCE_TRACK(iParam0->f_100, "IDLE", 2.0f, 2, 4294967295, 3212836864, 0);
				}
				Function_152(iParam0);
				Function_149(iParam0);
				if (NET_GET_PLAYMODE() == 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(40))
					{
						if ((((((Global_56612[09].f_24 != 1 && Global_56612[19].f_24 != 1) && Global_56612[29].f_24 != 1) && Global_56612[39].f_24 != 1) && Global_56612[49].f_24 != 1) && Global_56612[69].f_24 != 1) && Global_56612[59].f_24 != 1)
						{
							if (Function_148())
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
				Function_147("MP_AA_already_finished");
			}
			if ((iParam0 + 16)->f_28 == 2)
			{
				iLocal_96 = 1;
			}
			else
			{
				iLocal_96 = 15;
			}
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_ONE_SHOT(Function_146(*iParam0), 0, 0, 0, 0, 0);
			HUD_ENABLE(false);
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				if (IS_ACTOR_VALID(Function_51()))
				{
					Function_144(Function_51(), 0);
					if (IS_ACTOR_INSIDE_VEHICLE(Function_51()))
					{
						bVar6 = GET_VEHICLE(Function_51());
						if (IS_ACTOR_VALID(bVar6))
						{
							START_VEHICLE(bVar6);
						}
					}
				}
				SET_PLAYER_CONTROL(0, 0, 1, 1);
			}
			Function_60(131072);
			CANCEL_DEADEYE();
			ENABLE_USE_CONTEXTS(0);
			iLocal_91 = 1;
			SET_SWITCH_CAMERA_BUTTON_ENABLED(0);
			UI_EXCLUDE("nMP_Ticker");
			UI_EXIT("WeaponAmmo");
			UI_EXCLUDE("WeaponAmmo");
			UI_SET_TEXT("mp_aa_stats_vote_skip", "Common_Null");
			UI_SET_TEXT("mp_aa_stats_vote_replay", "Common_Null");
			iLocal_96 = 2;
			break;
		
		case 0x00000002:
			iLocal_97++;
			if (iLocal_97 >= 5)
			{
				iLocal_96 = 6;
			}
			break;
		
		case 0x00000006:
			Function_139(iParam0);
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_133(*iParam0, Function_134());
			}
			iLocal_96 = 7;
			break;
		
		case 0x00000007:
			iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
			if (iLocal_17 != 3)
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
					Function_47();
					if (iLocal_17 == 2)
					{
						Function_139(iParam0);
					}
					else if (iLocal_17 == 1)
					{
						Function_130();
					}
				}
				else if (Function_129(15, 1, 1))
				{
					Function_128(1);
					Function_17(iParam0);
				}
				else if (Function_129(13, 1, 1))
				{
					Function_128(0);
					Function_17(iParam0);
				}
				else if (Function_127())
				{
					if (iLocal_17 == 1)
					{
						Function_139(iParam0);
					}
					else if (iLocal_17 == 2)
					{
						Function_130();
					}
				}
			}
			else
			{
				if (UI_ISACTIVE("NotorietyMeter") && !iLocal_94)
				{
					Function_15();
					iLocal_94 = 1;
				}
				else if (!UI_ISACTIVE("NotorietyMeter") && iLocal_94)
				{
					iLocal_94 = 0;
					Function_41();
				}
				if (!UI_ISACTIVE("RadialWeaponQuickPick"))
				{
					if (iLocal_93)
					{
						iLocal_93 = 0;
						Function_41();
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_90))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_90))
						{
							Function_128(1);
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_89))
					{
						if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_89))
						{
							Function_128(0);
						}
					}
				}
				else if (!iLocal_93)
				{
					iLocal_93 = 1;
					Function_15();
				}
			}
			Function_123();
			switch (Function_120(iParam0))
			{
				case 0x00000001:
					if (Function_106(99, 1, 0x3f800000))
					{
						Function_147("mp_aa_vote_replay_passed");
						PLAYSTAT_INT("AA vote passed", true);
						(iParam0 + 16)->f_28 = 1;
						Function_105(84);
						NET_ALLOW_PLAYERS_TO_JOIN(0);
						if (IS_ACTOR_VALID(Global_12976.f_36))
						{
							Function_104(Global_12976.f_36);
							if (Function_101(StackVal, StackVal, Function_104(Global_12976.f_36)))
							{
								DESTROY_ACTOR(Global_12976.f_36);
							}
						}
						iLocal_96 = 11;
					}
					break;
				
				case 0x00000000:
					Function_147("mp_aa_vote_skip_passed");
					PLAYSTAT_INT("AA vote passed", false);
					(iParam0 + 16)->f_28 = 0;
					iLocal_96 = 15;
					break;
				
				case 0x00000002:
					Function_64();
					break;
			}
			break;
		
		case 0x0000000B:
			iVar1 = 1;
			if (!Function_100(8))
			{
				Function_99(1792, 0);
				Function_93(1, 0, 0);
				RESET_PROPS_IN_WORLD();
				CLEAR_ALL_CORPSES();
				iLocal_96 = 16;
			}
			break;
		
		case 0x0000000F:
			Function_59(64);
			if (!Function_84(4))
			{
				Function_79(1);
			}
			iLocal_96 = 16;
			break;
		
		case 0x00000010:
			break;
	}
	return iVar1;
}

void Function_93(var uParam0, bool bParam1, int iParam2) //Position: 0x2B77 / 11127
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
			Function_98(&(Global_29008[Global_29006]), 131072);
			Function_97(&(Global_29008[Global_29006]), 2097152);
			Function_95(Global_29006);
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
				if (Function_94(&(Global_29008[iVar0]), 4) || Function_94(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_97(&(Global_29008[iVar0]), 2097155);
					Function_98(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_40())
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

bool Function_94(var uParam0, int iParam1) //Position: 0x2C82 / 11394
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_95(int iParam0) //Position: 0x2C9E / 11422
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_96())
			{
				return;
			}
		}
		if (!Function_94(&(Global_29008[iParam0]), 2048))
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

bool Function_96() //Position: 0x2D1D / 11549
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_94(&(Global_29008[iVar0]), 4) || Function_94(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_97(var uParam0, int iParam1) //Position: 0x2D86 / 11654
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_98(var uParam0, int iParam1) //Position: 0x2D9D / 11677
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_99(int iParam0, bool bParam1) //Position: 0x2DAC / 11692
{
	if (bParam1)
	{
		Function_45(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_44(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

bool Function_100(int iParam0) //Position: 0x2DE7 / 11751
{
	return Function_85(Global_78617.f_52, iParam0);
}

bool Function_101(vector3 vParam0) //Position: 0x2DF8 / 11768
{
	var uVar0[8];
	int iVar9;
	int iVar10;
	
	Function_103(&uVar0);
	iVar9 = Function_102(StackVal, StackVal, vParam0, 1, 1, 0);
	if (Function_9(iVar9))
	{
		if (StackVal == 7)
		{
			return 1;
		}
	}
	iVar10 = 0;
	while (iVar10 <= 8)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				return 1;
			}
		}
		iVar10++;
	}
	return 0;
}

var Function_102(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2E6C / 11884
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

void Function_103(int iParam0) //Position: 0x2F07 / 12039
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

vector3 Function_104(bool bParam0) //Position: 0x2F65 / 12133
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_105(int iParam0) //Position: 0x2F76 / 12150
{
	Function_53(&Global_78617 + 52, iParam0);
	return;
}

bool Function_106(bool bParam0, bool bParam1, float fParam2) //Position: 0x2F87 / 12167
{
	struct<17> Var0;
	
	if (bParam1)
	{
		Function_119(bParam0);
	}
	Function_70(&Var0);
	fVar5 = NET_GET_NET_TIME();
	iVar6 = 0;
	if ((fVar5 - Var0.f_12) <= fParam2)
	{
		Var0.f_12 = fVar5;
		iVar6 = 1;
		Function_63(&Var0);
	}
	if (Function_118(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_117(&Var0, 0);
		Function_63(&Var0);
		Function_65();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), false);
		return 1;
	}
	if (Function_116(bParam0, iVar6, &uVar7))
	{
		if (Function_115())
		{
			if (!Function_114(&Var0))
			{
				Var8 = bParam0;
				Var8.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var8, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var8)));
				Function_113(&Var0, 1);
				Function_63(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar5;
			Function_63(&Var0);
		}
		else
		{
			fVar10 = (fVar5 - Var0.f_16);
			if (fVar10 <= 60.0f || (uVar7 && fVar10 <= 25.0f))
			{
				if (Function_107(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", false, false, false, false);
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
		Function_63(&Var0);
	}
	return 0;
}

bool Function_107(int iParam0) //Position: 0x31DA / 12762
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_112(bVar0))
		{
			iVar1 = Function_108(bVar0);
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

int Function_108(bool bParam0) //Position: 0x321D / 12829
{
	int iVar0;
	
	Function_111(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_71(&iVar0);
	}
	else
	{
		Function_110(&iVar0, bParam0);
	}
	return Function_109(&iVar0);
}

int Function_109(int iParam0) //Position: 0x3244 / 12868
{
	return *iParam0;
}

void Function_110(var uParam0, int iParam1) //Position: 0x324D / 12877
{
	*uParam0 = Local_51[iParam12];
	return;
}

void Function_111(int iParam0) //Position: 0x325C / 12892
{
	Function_69(iParam0, 4294967286);
	return;
}

bool Function_112(bool bParam0) //Position: 0x326A / 12906
{
	return _IS_CLIENT_DATA_VALID_FOR_SLOT(&Local_51, bParam0);
}

void Function_113(var uParam0, bool bParam1) //Position: 0x3277 / 12919
{
	if (bParam1)
	{
		Function_45(uParam0, 2);
	}
	else
	{
		Function_44(uParam0, 2);
	}
	return;
}

bool Function_114(bool bParam0) //Position: 0x3291 / 12945
{
	return Function_50(*bParam0, 2);
}

bool Function_115() //Position: 0x329E / 12958
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

bool Function_116(int iParam0, var uParam1, int iParam2) //Position: 0x32BC / 12988
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
		if (Function_112(iVar0))
		{
			iVar1 = Function_108(iVar0);
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

void Function_117(int iParam0, bool bParam1) //Position: 0x330D / 13069
{
	if (bParam1)
	{
		Function_45(iParam0, 1);
	}
	else
	{
		Function_44(iParam0, 1);
	}
	return;
}

bool Function_118(int iParam0) //Position: 0x3327 / 13095
{
	return Function_50(*iParam0, 1);
}

void Function_119(int iParam0) //Position: 0x3334 / 13108
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar23;
	
	bVar0 = iParam0;
	Function_71(&iVar1);
	if (Function_109(&iVar1) != bVar0)
	{
		Function_70(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar7, "Next lockstep state same as last state (", 64);
			stradd(&cVar7, I2STR(bVar0), 64);
			stradd(&cVar7, "). May be fine.", 64);
			if (Function_50(Var2, 4))
			{
			}
		}
		bVar23 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar23), I2STR(bVar23), I2STR(bVar0), false);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_66(bVar0);
		Function_113(&Var2, 0);
		Function_63(&Var2);
	}
	return;
}

bool Function_120(int iParam0) //Position: 0x3431 / 13361
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
		if (Function_122(bVar4))
		{
			switch (Function_121(bVar4))
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
	if (iLocal_17 == 2)
	{
		UI_SET_TEXT("mp_aa_plist_vote_skip", "mp_aa_vote_skip");
		UI_SET_TEXT("mp_aa_plist_vote_replay", "mp_aa_vote_replay");
		UI_REFRESH("mp_aa_plist_vote_skip");
		UI_REFRESH("mp_aa_plist_vote_replay");
	}
	else if (iLocal_17 == 1)
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

int Function_121(int iParam0) //Position: 0x366D / 13933
{
	return StackVal;
}

bool Function_122(bool bParam0) //Position: 0x367B / 13947
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return NET_IS_PLAYER_PARTICIPANT(bParam0);
}

void Function_123() //Position: 0x3691 / 13969
{
	Function_126(8);
	Function_124(&Global_79298);
	return;
}

void Function_124(int iParam0) //Position: 0x36A3 / 13987
{
	Function_125(iParam0, 0.0f);
	return;
}

void Function_125(int iParam0, float fParam1) //Position: 0x36AF / 13999
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_45(iParam0, 1);
	Function_44(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_126(int iParam0) //Position: 0x36D0 / 14032
{
	Function_53(&Global_79338, iParam0);
	return;
}

bool Function_127() //Position: 0x36DF / 14047
{
	return Function_49(32768);
}

void Function_128(bool bParam0) //Position: 0x36EC / 14060
{
	PLAYSTAT_INT("Local AA vote", bParam0);
	Function_59(64);
	Local_51[GET_LOCAL_SLOT()2].f_4 = bParam0;
	return;
}

bool Function_129(int iParam0, int iParam1, bool bParam2) //Position: 0x3717 / 14103
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

void Function_130() //Position: 0x37C4 / 14276
{
	UI_FOCUS("HudGamerList");
	UI_ENTER("AAPrompts_PlayerList");
	Function_132();
	Function_131();
	iLocal_17 = 2;
	return;
}

void Function_131() //Position: 0x37FF / 14335
{
	Function_43(1025, 1, 0);
	return;
}

void Function_132() //Position: 0x380D / 14349
{
	if (!Function_48())
	{
		Function_47();
	}
	Function_43(4096, 1, 1);
	return;
}

void Function_133(var uParam0, var uParam1) //Position: 0x3825 / 14373
{
	struct<8> Var0;
	struct<5> Var8;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55(uParam0) };
	Var8 = uParam0;
	Var8.f_4 = uParam1;
	NET_SCRIPTMSG_SEND(2, 81, &Var8, 3, 1);
	return;
}

var Function_134() //Position: 0x384A / 14410
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
		if (Function_122(iVar2))
		{
			iVar3 = Function_135(iVar2);
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

int Function_135(bool bParam0) //Position: 0x3889 / 14473
{
	return Function_136(0, bParam0);
}

int Function_136(int iParam0, bool bParam1) //Position: 0x3895 / 14485
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_138(iParam0);
	}
	if (!Function_137(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 132)[iParam0];
}

bool Function_137(bool bParam0) //Position: 0x38FC / 14588
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

int Function_138(int iParam0) //Position: 0x399D / 14749
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_139(int iParam0) //Position: 0x39AD / 14765
{
	char* cVar0[32];
	int iVar8;
	bool bVar9;
	
	Function_143(1);
	Function_132();
	Function_131();
	UI_UNFOCUS("HudGamerList");
	UI_ENTER("AAPrompts_Stats");
	Function_43(16384, 1, 1);
	Function_43(32768, 0, 1);
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
	itos(&cVar0, Function_229(), 32);
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
	itos(&cVar0, Function_138(3), 32);
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
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_228(29));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_deaths"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_142());
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_assists"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_228(38));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_defends"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_228(28));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_combo_streak"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, bLocal_43);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_headshots"), iVar8);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(false, Function_228(34));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iVar8 = (iVar8 - 1);
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("mp_plist_time"), iVar8);
	Function_140(0, Function_72(iParam0 + 16 + 8));
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	iLocal_17 = 1;
	return;
}

void Function_140(bool bParam0, var uParam1) //Position: 0x3DD1 / 15825
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_141(uParam1) };
	bVar4 = FLOOR((Var0.f_12 * 100.0f));
	UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_0", UI_GET_STRING("MP_Time_Fmt1"), I2STR((bVar4 / 10)), I2STR((bVar4 % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, StackVal, "GENERIC_DBUFFER10_1", I2STR((I2STR((UI_GET_STRING("MP_Time_Fmt1") / 10)) % 10)), false);
	UI_SET_STRING_FORMAT(StackVal, "GENERIC_DBUFFER10_2", I2STR(UI_GET_STRING("MP_Time_Fmt")), UI_GET_STRING("GENERIC_DBUFFER10_1"), UI_GET_STRING("GENERIC_DBUFFER10_0"));
	if (Var0 >= 0)
	{
		if (StackVal <= 10)
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER10_3", UI_GET_STRING("MP_time_Fmt1"), I2STR(false), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_3"), false);
		}
		else
		{
			UI_SET_STRING_FORMAT("GENERIC_DBUFFER32_0", UI_GET_STRING("MP_Time_Fmt2"), I2STR(Var0), UI_GET_STRING("GENERIC_DBUFFER10_2"), false);
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER32_0"));
	}
	else
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bParam0, UI_GET_STRING("GENERIC_DBUFFER10_2"));
	}
	return;
}

struct<16> Function_141(var uParam0) //Position: 0x4000 / 16384
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

int Function_142() //Position: 0x4071 / 16497
{
	return Function_228(12);
}

void Function_143(bool bParam0) //Position: 0x407C / 16508
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_43(16384, 0, 1);
	return;
}

void Function_144(bool bParam0, bool bParam1) //Position: 0x4096 / 16534
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
	else if (!bParam1 || Function_145(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_145(bool bParam0, bool bParam1) //Position: 0x40F3 / 16627
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

var Function_146(int iParam0) //Position: 0x4112 / 16658
{
	if (iParam0 != Global_30685[2] || iParam0 != Global_30685[1])
	{
		return "MEX_MISSION_COMPLETE_SONG_01";
	}
	return "FTR_MISSION_COMPLETE_SONG_01";
}

void Function_147(bool bParam0) //Position: 0x4170 / 16752
{
	NET_TICKER_REPORTF(UI_GET_STRING(bParam0), false, 0, 0, 0, 0, 0);
	return;
}

bool Function_148() //Position: 0x4184 / 16772
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_149(int iParam0) //Position: 0x4193 / 16787
{
	Function_151(iParam0, Global_30668[2], &Global_56612, 0);
	Function_151(iParam0, Global_30679[1], &Global_56612, 1);
	Function_151(iParam0, Global_30658[0], &Global_56612, 2);
	Function_151(iParam0, Global_30658[3], &Global_56612, 3);
	Function_151(iParam0, Global_30685[2], &Global_56612, 4);
	Function_151(iParam0, Global_30640[2], &Global_56612, 6);
	Function_151(iParam0, Global_30685[1], &Global_56612, 5);
	Function_151(iParam0, Global_30658[2], &Global_56612, 7);
	Function_150(iParam0, Global_30668[2], &Global_56688, 0);
	Function_150(iParam0, Global_30679[1], &Global_56688, 1);
	Function_150(iParam0, Global_30658[0], &Global_56688, 2);
	Function_150(iParam0, Global_30658[3], &Global_56688, 3);
	Function_150(iParam0, Global_30685[2], &Global_56688, 4);
	Function_150(iParam0, Global_30640[2], &Global_56688, 6);
	Function_150(iParam0, Global_30685[1], &Global_56688, 5);
	Function_150(iParam0, Global_30658[2], &Global_56688, 7);
	return;
}

void Function_150(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x4289 / 17033
{
	if (*uParam0 != iParam1 && uParam2[776][iParam39]->f_20 != 1)
	{
		(*uParam2[776])[iParam39] = iParam1;
		uParam2[776][iParam39]->f_24 = 1;
		uParam2[776][iParam39]->f_8 = Function_142();
	}
	if (*uParam0 != iParam1 && uParam2[876][iParam39]->f_20 != 1)
	{
		(*uParam2[876])[iParam39] = iParam1;
		uParam2[876][iParam39]->f_24 = 1;
		uParam2[876][iParam39]->f_8 = Function_142();
	}
	if (*uParam0 != iParam1 && uParam2[976][iParam39]->f_20 != 1)
	{
		(*uParam2[976])[iParam39] = iParam1;
		uParam2[976][iParam39]->f_24 = 1;
		uParam2[976][iParam39]->f_8 = Function_142();
	}
}

void Function_151(var uParam0, int iParam1, var uParam2, int iParam3) //Position: 0x434D / 17229
{
	if (*uParam0 != iParam1 && uParam2[iParam39]->f_20 != 1)
	{
		(*uParam2)[iParam39] = iParam1;
		uParam2[iParam39]->f_20 = 0;
		uParam2[iParam39]->f_24 = 1;
		uParam2[iParam39]->f_8 = Function_142();
	}
}

void Function_152(int iParam0) //Position: 0x438E / 17294
{
	struct<5> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_227(*iParam0) };
	Function_225(iParam0);
	Function_224(13, iParam0->f_92);
	Function_224(0, iParam0->f_92);
	iParam0->f_92 = (iParam0->f_92 + Function_138(2));
	if (iParam0->f_104)
	{
		Function_223(3, 5);
	}
	else
	{
		Function_223(3, 100);
	}
	iParam0->f_92 = (iParam0->f_92 + Function_138(3));
	Function_123();
	Function_224(13, iParam0->f_92);
	Function_224(0, iParam0->f_92);
	iLocal_95 = 1;
	Function_153(Var0, 4294967295, 0, 0, 1);
	return;
}

void Function_153(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4403 / 17411
{
	var uVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_222(5, 1);
	Function_60(4096);
	switch (Function_39())
	{
		case 0x00000011:
		case 0x00000002:
			Function_181(&Global_50170[1722] + 4, &Global_50170[1722] + 8, &Global_50170[1722] + 12);
			break;
	}
	Function_174();
	Function_173();
	if (iParam0 >= 0)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(0);
			Function_172(&Global_78480 + 220, &uVar0, 0);
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
			if (bParam4)
			{
				Function_170(iParam1);
			}
			NET_END_LB_UPDATE();
			Global_84364.f_776 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_172(&Global_76943[iVar6896] + 220, &uVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &uVar0);
				}
			}
		}
	}
	Function_154(bParam2);
}

void Function_154(bool bParam0) //Position: 0x451F / 17695
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_126(2);
	if (bParam0)
	{
		Function_126(1);
	}
	else
	{
		Function_56(1);
	}
	Function_155();
	return;
}

void Function_155() //Position: 0x45A8 / 17832
{
	Function_168();
	Function_167();
	Function_167();
	Function_166();
	Function_166();
	Function_165();
	Function_165();
	Function_162(0);
	Function_162(0);
	if (!Function_40())
	{
		Function_160();
		Function_159();
		Function_158();
		Function_157();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_156();
	return;
}

void Function_156() //Position: 0x45FA / 17914
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

void Function_157() //Position: 0x4700 / 18176
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

void Function_158() //Position: 0x4733 / 18227
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

void Function_159() //Position: 0x48C1 / 18625
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

void Function_160() //Position: 0x4A75 / 19061
{
	Function_161(&Global_28260, 1, 0);
	return;
}

void Function_161(int iParam0, bool bParam1, int iParam2) //Position: 0x4A83 / 19075
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
	
	bVar0 = Function_51();
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

struct<8> Function_162(int iParam0) //Position: 0x4C74 / 19572
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
					iVar2 = ((Function_164((50 + iVar4)) + Function_164((183 + iVar4))) + Function_164((90 + iVar4)));
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
	Function_163(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_163(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D1A / 19738
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

int Function_164(bool bParam0) //Position: 0x4FB5 / 20405
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_165() //Position: 0x4FF6 / 20470
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
		iVar2 = ((Function_164((50 + iVar3) + 15) + Function_164((183 + iVar3) + 15)) + Function_164((90 + iVar3) + 15));
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
	Function_163(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_166() //Position: 0x507F / 20607
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
			iVar2 = ((Function_164((50 + iVar3) + 8) + Function_164((183 + iVar3) + 8)) + Function_164((90 + iVar3) + 8));
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
	Function_163(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_167() //Position: 0x5116 / 20758
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
		iVar2 = ((Function_164((50 + iVar3)) + Function_164((183 + iVar3))) + Function_164((90 + iVar3)));
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
	Function_163(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_168() //Position: 0x5195 / 20885
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_169(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_163(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_169(int iParam0, bool bParam1, int iParam2) //Position: 0x51CE / 20942
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

void Function_170(int iParam0) //Position: 0x53D8 / 21464
{
	bool bVar0[67];
	bool bVar68[67];
	
	Function_45(&Global_79338, 32);
	bVar0[13] = FLOOR(Function_37(8));
	bVar0[0] = FLOOR(Function_37(8));
	if (Function_37(8) < 0.0f)
	{
		if (Function_171())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 145, iParam0, &bVar0);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 144, iParam0, &bVar0);
		}
	}
	if (Function_37(7) < 0.0f)
	{
		bVar68[13] = FLOOR(Function_37(7));
		bVar68[0] = bVar68[13];
		if (Function_171())
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 147, iParam0, &bVar68);
		}
		else
		{
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 146, iParam0, &bVar68);
		}
	}
	return;
}

bool Function_171() //Position: 0x547F / 21631
{
	return NET_GET_FREE_ROAM_MODE() != 1;
}

void Function_172(var uParam0, var uParam1, bool bParam2) //Position: 0x548A / 21642
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

void Function_173() //Position: 0x54CF / 21711
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

void Function_174() //Position: 0x54F9 / 21753
{
	if (Global_83864.f_1264 > 6)
	{
		Function_175(&(Global_50170[522]));
		Function_175(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_175(&(Global_50170[722]));
		Function_175(&(Global_50170[822]));
		Function_175(&(Global_50170[922]));
		Function_175(&(Global_50170[1022]));
		Function_175(&(Global_50170[1122]));
	}
	return;
}

void Function_175(bool bParam0) //Position: 0x5559 / 21849
{
	Global_56092[*bParam0] = 0;
	Function_176(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_176(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x5573 / 21875
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_180(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_179(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_180(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_178(iParam0, 4))
	{
		Function_177(Function_180(iParam0), 0);
	}
}

void Function_177(char* cParam0, int iParam1) //Position: 0x562A / 22058
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

bool Function_178(int iParam0, bool bParam1) //Position: 0x564F / 22095
{
	return Function_50(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_179(int iParam0) //Position: 0x5663 / 22115
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_180(int iParam0) //Position: 0x5697 / 22167
{
	return Global_50170[iParam022].f_24;
}

void Function_181(var uParam0, var uParam1, int iParam2) //Position: 0x56A6 / 22182
{
	bool bVar0;
	float fVar1;
	
	if (Global_83864.f_1264 > 30)
	{
		switch (*uParam1)
		{
			case 0x00000000:
				fVar1 = Function_221(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 1)
				{
					Function_214(17, uParam0, 2, uParam1, 1, *iParam2, 0, 50, bVar0, 5, 100, Function_220(), 3031);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_213(iParam2, bVar0, 1);
					if (*iParam2 == fVar1)
					{
						Function_176(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000001:
				fVar1 = Function_221(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 5)
				{
					Function_214(17, uParam0, 2, uParam1, 2, *iParam2, 0, 50, bVar0, 50, 150, Function_220(), 3032);
					*iParam2 = 0.0f;
					bVar0 = false;
				}
				else if (bVar0 >= 4294967295)
				{
					Function_213(iParam2, bVar0, 5);
					if (*iParam2 == fVar1)
					{
						Function_176(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			
			case 0x00000002:
				fVar1 = Function_221(17);
				if (GET_LOCAL_SLOT() == Global_56352[17])
				{
					Global_50170[1722].f_28++;
				}
				bVar0 = Global_50170[1722].f_28;
				if (bVar0 > 50)
				{
					Function_182(17, 150, Function_220(), 3033);
				}
				else if (bVar0 >= 4294967295)
				{
					Function_213(iParam2, bVar0, 50);
					if (*iParam2 == fVar1)
					{
						Function_176(17, *iParam2, 1, bVar0, 4294967295, 4294967295);
					}
				}
				break;
			}
	}
	return;
}

void Function_182(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x584F / 22607
{
	Function_211(iParam0, 1);
	Global_50170[iParam022].f_8 = 10;
	SET_JOURNAL_ENTRY_PROGRESS(Function_180(iParam0), 1.0f, 0, 0);
	Function_207(iParam0, 0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_01_128";
	}
	if (iParam3 != 4294967295)
	{
		Function_204(iParam3);
	}
	Function_198(&Global_50170[iParam022] + 16, bParam1, bParam2);
	Function_183();
}

void Function_183() //Position: 0x58B5 / 22709
{
	if (!Function_40())
	{
		if (!Function_197(1, 3, 1, 1))
		{
			Function_185(1);
			Function_184(1, 8);
		}
	}
	else
	{
		Function_154(0);
	}
	return;
}

void Function_184(var uParam0, int iParam1) //Position: 0x58DE / 22750
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_40())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_185(bool bParam0) //Position: 0x5920 / 22816
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_186();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_155();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_44(&Global_63095, 1);
		Function_44(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_186() //Position: 0x5971 / 22897
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_196())
	{
		Function_193(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_193(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_188(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_188(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_187(StackVal, StackVal, vVar0))
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

bool Function_187(vector3 vParam0) //Position: 0x5A2C / 23084
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_188(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5A44 / 23108
{
	int iVar0;
	
	iVar0 = Function_191(uParam2, uParam3);
	if (Function_190(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_45(&Global_63095, 1);
			Function_44(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_45(&Global_63095, 2);
			Function_44(&Global_63095, 1);
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
		Function_45(&Global_63095, 2);
		Function_44(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_189();
	return StackVal, StackVal, Function_189();
}

vector3 Function_189() //Position: 0x5B2B / 23339
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_190(int iParam0) //Position: 0x5B34 / 23348
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_191(bool bParam0, bool bParam1) //Position: 0x5B4A / 23370
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
				fVar2 = Function_192(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_192(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_190(bVar0) && !bParam1)
	{
		bVar0 = Function_191(bParam0, 1);
	}
	return bVar0;
}

float Function_192(vector3 vParam0, vector3 vParam3) //Position: 0x5C11 / 23569
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_193(var uParam0, int iParam1) //Position: 0x5C2E / 23598
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_195(Global_34573, &vVar4);
	if (!Function_194(Global_30640[0]))
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
	if (!Function_194(Global_30640[2]))
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
	if (!Function_194(Global_30640[1]))
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
	if (!Function_194(Global_30658[1]))
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
	if (!Function_194(Global_30658[3]))
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
	if (!Function_194(Global_30658[2]))
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
	if (!Function_194(Global_30658[4]))
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
	if (!Function_194(Global_30668[0]))
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
	if (!Function_194(Global_30668[1]))
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
	if (!Function_194(Global_30668[2]))
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
	if (!Function_194(Global_30679[0]))
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
	if (!Function_194(Global_30685[0]))
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
	if (!Function_194(Global_30685[1]))
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
	if (!Function_194(Global_30685[2]))
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
	if (!Function_194(Global_30693[0]))
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
	if (!Function_194(Global_30693[1]))
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
	if (!Function_194(Global_30693[2]))
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
	if (!Function_194(Global_30707[2]))
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
	if (!Function_194(Global_30707[3]))
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
	if (!Function_194(Global_30707[0]))
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
	if (!Function_194(Global_30717[0]))
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
	if (!Function_194(Global_30723[2]))
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
	if (!Function_194(Global_30723[1]))
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
	if (!Function_194(Global_30723[0]))
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
	if (!Function_194(Global_30679[1]))
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
	if (!Function_194(Global_30707[1]))
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
	Function_45(&Global_63095, 2);
	Function_44(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_187(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_194(int iParam0) //Position: 0x6453 / 25683
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_50(uVar0, 0x1000000) || Function_50(uVar0, 0x2000000)) || Function_50(uVar0, 0x4000000)) || !Function_50(uVar0, 0x10000000));
}

void Function_195(bool bParam0, int iParam1) //Position: 0x648E / 25742
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_196() //Position: 0x649B / 25755
{
	if (Function_50(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_197(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x64B6 / 25782
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

void Function_198(bool bParam0, bool bParam1, bool bParam2) //Position: 0x655A / 25946
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	bVar0 = Function_203();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(bVar0, Function_202(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_201(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_200(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, STRING_TO_HASH(bParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_199(iVar2) };
	DECOR_SET_INT(bVar0, &Var3, bParam1);
	DECOR_SET_INT(bVar0, Function_202(), iVar1 + 1);
	return;
}

struct<16> Function_199(int iParam0) //Position: 0x65CC / 26060
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_200(int iParam0) //Position: 0x65ED / 26093
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_201(int iParam0) //Position: 0x660E / 26126
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_202() //Position: 0x662F / 26159
{
	return "CQueue_Count";
}

var Function_203() //Position: 0x6644 / 26180
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_204(int iParam0) //Position: 0x6673 / 26227
{
	Function_205(iParam0, 1);
	return;
}

void Function_205(int iParam0, bool bParam1) //Position: 0x667F / 26239
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_45(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_206((iVar0 % 32)));
	}
	else
	{
		Function_44(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_206((iVar0 % 32)));
	}
	return;
}

int Function_206(bool bParam0) //Position: 0x66D5 / 26325
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_207(int iParam0, int iParam1) //Position: 0x66E1 / 26337
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_210(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_180(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_209(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_179(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_208(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_180(iParam0), &Var7, 0, 2, 0);
		PREPEND_JOURNAL_ENTRY(Function_180(iParam0), 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_180(iParam0), 1.0f, 0, 0);
	}
	return;
}

struct<16> Function_208(int iParam0) //Position: 0x6763 / 26467
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_179(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_209(int iParam0) //Position: 0x6783 / 26499
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_210(int iParam0) //Position: 0x67B4 / 26548
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

void Function_211(bool bParam0, bool bParam1) //Position: 0x6932 / 26930
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_212();
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

var Function_212() //Position: 0x6A7E / 27262
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_213(var uParam0, bool bParam1, bool bParam2) //Position: 0x6ACB / 27339
{
	*uParam0 = TO_FLOAT(bParam1);
	*uParam0 = (*uParam0 / IntToFloat(bParam2));
	return;
}

void Function_214(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x6AE3 / 27363
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(bParam11))
	{
		bParam11 = "challenge_01_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_179(iParam0) };
	Function_198(&Var0, iParam7, bParam11);
	*uParam1 = iParam2;
	*uParam3 = iParam4;
	Function_213(&fParam5, bParam8, iParam9);
	Function_176(iParam0, fParam5, bParam6, bParam8, 4294967295, 4294967295);
	Function_216(iParam0, iParam9, iParam10, 0);
	if (iParam12 != 4294967295)
	{
		Function_204(iParam12);
	}
	Function_215(iParam0, 4);
	Function_183();
}

void Function_215(int iParam0, int iParam1) //Position: 0x6B59 / 27481
{
	Function_44(&Global_50170[iParam022] + 32, iParam1);
	return;
}

void Function_216(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6B6D / 27501
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_210(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_180(iParam0));
	if ((bParam3 && Function_178(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_180(iParam0), 0);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_209(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_179(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_219(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_218(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_208(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_180(iParam0), &Var7, 0, 2, Function_178(iParam0, 4));
			if (!bParam3)
			{
				Function_217(iParam0, 4);
			}
		}
	}
}

void Function_217(int iParam0, int iParam1) //Position: 0x6C2A / 27690
{
	Function_45(&Global_50170[iParam022] + 32, iParam1);
	return;
}

struct<24> Function_218(int iParam0) //Position: 0x6C3E / 27710
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_219(int iParam0) //Position: 0x6C6C / 27756
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_220() //Position: 0x6C9C / 27804
{
	return "MP_Unstoppable_Icon_128";
}

float Function_221(int iParam0) //Position: 0x6CBC / 27836
{
	return Global_50170[iParam022].f_12;
}

void Function_222(int iParam0, int iParam1) //Position: 0x6CCB / 27851
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = ((*&Global_78480 + 220)[iParam0] + iParam1);
	return;
}

void Function_223(int iParam0, int iParam1) //Position: 0x6CF0 / 27888
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_224(int iParam0, int iParam1) //Position: 0x6D19 / 27929
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = iParam1;
	return;
}

void Function_225(int iParam0) //Position: 0x6D33 / 27955
{
	struct<13> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, Function_227(*iParam0) };
	fVar5 = (StackVal - Function_72(iParam0 + 16 + 8));
	Function_226(&fVar5, 600.0f, 30.0f);
	bVar6 = TO_FLOAT(bLocal_43);
	bVar7 = TO_FLOAT(Function_228(34));
	fVar8 = ((bVar6 * (bVar6 + 1.0f)) * 0.5f);
	fVar9 = ((bVar7 * (bVar7 + 1.0f)) * 0.5f);
	fVar10 = (fVar8 + fVar9);
	fVar11 = (fVar10 * Var0.f_12);
	bVar12 = (fVar11 / fVar5);
	iParam0->f_88 = (StackVal + CEIL(bVar12));
	iParam0->f_92 = (Function_229() + iParam0->f_88);
	return;
}

void Function_226(var uParam0, int iParam1, int iParam2) //Position: 0x6DC2 / 28098
{
	if (*uParam0 > iParam2)
	{
		*uParam0 = iParam2;
	}
	else if (*uParam0 < iParam1)
	{
		*uParam0 = iParam1;
	}
	return;
}

struct<20> Function_227(int iParam0) //Position: 0x6DE7 / 28135
{
	struct<5> Var0;
	
	Var0.f_12 = 15.0f;
	Var0.f_16 = 5.0f;
	if (iParam0 == Global_30640[2])
	{
		Var0 = 15;
		Var0.f_4 = 0.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30679[1])
	{
		Var0 = 17;
		Var0.f_4 = 75.0f;
		Var0.f_8 = 300;
	}
	else if (iParam0 == Global_30658[3])
	{
		Var0 = 14;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 300;
	}
	else if (iParam0 == Global_30685[1])
	{
		Var0 = 21;
		Var0.f_4 = 90.0f;
		Var0.f_8 = 150;
	}
	else if (iParam0 == Global_30668[2])
	{
		Var0 = 13;
		Var0.f_4 = 165.0f;
		Var0.f_8 = 700;
	}
	else if (iParam0 == Global_30658[2])
	{
		Var0 = 18;
		Var0.f_4 = 0.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30685[2])
	{
		Var0 = 16;
		Var0.f_4 = 135.0f;
		Var0.f_8 = 200;
	}
	else if (iParam0 == Global_30658[0])
	{
		Var0 = 20;
		Var0.f_4 = 150.0f;
		Var0.f_8 = 400;
	}
	else if (iParam0 == Global_30717[3])
	{
		Var0 = 19;
		Var0.f_4 = 300.0f;
		Var0.f_8 = 500;
	}
	else if (iParam0 == Global_30640[15])
	{
		Var0 = 109;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30640[16])
	{
		Var0 = 110;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30685[4])
	{
		Var0 = 111;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30658[6])
	{
		Var0 = 112;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30668[9])
	{
		Var0 = 115;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30693[11])
	{
		Var0 = 113;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30658[5])
	{
		Var0 = 114;
		Var0.f_4 = 120.0f;
		Var0.f_8 = 100;
	}
	else if (iParam0 == Global_30717[2])
	{
		Var0 = 120;
		Var0.f_4 = 250.0f;
		Var0.f_8 = 50;
	}
	else if (iParam0 == Global_30658[7])
	{
		Var0 = 118;
		Var0.f_4 = 250.0f;
		Var0.f_8 = 50;
	}
	else if (iParam0 == Global_30640[13])
	{
		Var0 = 119;
		Var0.f_4 = 250.0f;
		Var0.f_8 = 50;
	}
	else if (iParam0 == Global_30707[4])
	{
		Var0 = 117;
		Var0.f_4 = 250.0f;
		Var0.f_8 = 50;
	}
	else
	{
		Var0 = 4294967295;
		Var0.f_4 = 300.0f;
	}
	return StackVal, StackVal, StackVal, StackVal, Var0;
}

int Function_228(int iParam0) //Position: 0x70A3 / 28835
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

int Function_229() //Position: 0x70BC / 28860
{
	return Function_138(0);
}

void Function_230(int iParam0) //Position: 0x70C6 / 28870
{
	if (Function_76(iParam0))
	{
		if (!Function_75(iParam0))
		{
			Function_73();
			iParam0->f_8 = (StackVal - NET_GET_NET_TIME());
			Function_45(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_231(bool bParam0) //Position: 0x718E / 29070
{
	if (IS_OBJECT_VALID(bParam0))
	{
		Function_232(bParam0);
	}
	return;
}

void Function_232(bool bParam0) //Position: 0x71A1 / 29089
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

void Function_233() //Position: 0x722B / 29227
{
	SQUADS_MERGE(bLocal_100, bLocal_99);
	SQUADS_MERGE(bLocal_101, bLocal_99);
	SQUADS_MERGE(bLocal_102, bLocal_99);
	SQUADS_MERGE(bLocal_103, bLocal_99);
	SQUADS_MERGE(bLocal_104, bLocal_99);
	SQUADS_MERGE(bLocal_105, bLocal_99);
	Function_236(bLocal_99);
	SQUAD_GOALS_CLEAR(bLocal_99);
	Function_235(bLocal_99);
	Function_234(bLocal_99);
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_99, 0, 1, 4294967295);
	TASK_FLEE_ACTORSET(false, Global_78576, -1.0f, -1.0f, 0, 0, 0);
	return;
}

void Function_234(bool bParam0) //Position: 0x7285 / 29317
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

void Function_235(bool bParam0) //Position: 0x72CB / 29387
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

void Function_236(bool bParam0) //Position: 0x7318 / 29464
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

void Function_237(bool bParam0) //Position: 0x734A / 29514
{
	bool bVar0;
	
	Function_238(&bParam0);
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

void Function_238(var uParam0) //Position: 0x7392 / 29586
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

void Function_239() //Position: 0x73EB / 29675
{
	Function_240();
	if (IS_VOLUME_VALID(Local_106.f_308))
	{
		DESTROY_VOLUME(Local_106.f_308);
	}
	if (IS_VOLUME_VALID(Local_106.f_324))
	{
		DESTROY_VOLUME(Local_106.f_324);
	}
	if (IS_VOLUME_VALID(Local_106.f_340))
	{
		DESTROY_VOLUME(Local_106.f_340);
	}
	if (IS_VOLUME_VALID(Local_106.f_360))
	{
		DESTROY_VOLUME(Local_106.f_360);
	}
	if (!IS_VOLUME_VALID(Local_106.f_308))
	{
		Local_106.f_308 = CREATE_VOLUME_SET_IN_LAYOUT(Local_106, "SpawnVol_0_set");
		(*&Local_106 + 292)[0] = CREATE_VOLUME_IN_LAYOUT(Local_106, "spawnvol_0_sub_0", 2, -4460.319f, 8.578414f, 3318.9f, 0.0f, -205.8026f, 0.0f, 10.92786f, 6.922777f, 5.143715f);
		ADD_TO_VOLUME_SET(Local_106.f_308, (*&Local_106 + 292)[0]);
		(*&Local_106 + 292)[1] = CREATE_VOLUME_IN_LAYOUT(Local_106, "spawnvol_0_sub_1", 2, -4490.132f, 8.578414f, 3303.858f, 0.0f, -209.7857f, 0.0f, 10.92786f, 6.922777f, 5.143715f);
		ADD_TO_VOLUME_SET(Local_106.f_308, (*&Local_106 + 292)[1]);
		(*&Local_106 + 292)[2] = CREATE_VOLUME_IN_LAYOUT(Local_106, "spawnvol_0_sub_2", 2, -4514.15f, 8.578414f, 3278.909f, 0.0f, -232.3972f, 0.0f, 10.92786f, 6.922777f, 5.143715f);
	}
	return;
}

void Function_240() //Position: 0x7559 / 30041
{
	Function_241();
	return;
}

void Function_241() //Position: 0x7562 / 30050
{
	Function_245();
	Function_243();
	Function_242();
	return;
}

void Function_242() //Position: 0x7571 / 30065
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bLocal_386))
	{
		if (!IS_OBJECT_VALID(bLocal_395))
		{
			NET_OBJECT_REPLICATION_MODE_START(17, 0);
			Function_189();
			Function_189();
			bLocal_395 = CREATE_PROP_IN_LAYOUT(Local_106, "gapAA_cart_rocks", "p_gen_rockGoldCart01x", Function_189(), Function_189(), 1);
			SET_OBJECT_COLLIDE_WITH_MOVABLES(bLocal_395, 0);
			NET_OBJECT_REPLICATION_MODE_END(17);
			Function_189();
			vVar0 = { StackVal, StackVal, Function_189() };
			vVar0.f_4 = 0.783448f;
			Function_189();
			ATTACH_OBJECTS(bLocal_395, bLocal_386, "", vVar0, Function_189(), 4294967295);
		}
	}
	return;
}

void Function_243() //Position: 0x75FE / 30206
{
	Function_236(bLocal_99);
	Function_236(bLocal_100);
	Function_244(bLocal_99, Local_106.f_224, 1, 4294967295);
	Function_244(bLocal_100, Local_106.f_244, 1, 4294967295);
	return;
}

var Function_244(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x7626 / 30246
{
	var uVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return uVar0;
	}
	uVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, bParam2, bParam1, iParam3);
	uVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, false, bParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, uVar1, uVar0);
	return uVar0;
}

void Function_245() //Position: 0x7661 / 30305
{
	if (IS_ACTOR_VALID(bLocal_386))
	{
		ENABLE_VEHICLE_SEAT(bLocal_386, 0, 1);
		ENABLE_VEHICLE_SEAT(bLocal_386, 1, 0);
		SET_ALLOW_JACK(bLocal_386, 0);
	}
	else
	{
		LOG_ERROR("Failed to add MineCart to single car train!");
	}
	return;
}

void Function_246() //Position: 0x76BD / 30397
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_251(&Local_340, 0);
			Function_240();
			if (Function_249())
			{
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_247("GAP_MP_obj4", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			if (IS_BLIP_VALID(bLocal_388))
			{
				REMOVE_BLIP(bLocal_388);
			}
			if (IS_BLIP_VALID(bLocal_389))
			{
				REMOVE_BLIP(bLocal_389);
			}
			Local_340.f_8 = 6;
			break;
		
		case 0x00000006:
			if (!Function_249())
			{
				if (Function_106(11, 1, 0x3f800000))
				{
					Local_340.f_8 = 106;
				}
			}
			else
			{
				Function_64();
			}
			break;
		
		case 0x0000006A:
			Local_340.f_8 = 0;
			Local_340.f_4 = 11;
			break;
	}
	return;
}

void Function_247(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x776A / 30570
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_248(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

struct<16> Function_248(int iParam0) //Position: 0x77EF / 30703
{
	char* cVar0[16];
	
	if (!Function_196())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_249() //Position: 0x782E / 30766
{
	if (((Function_250(bLocal_104, Local_106.f_248) < 0 || Function_250(bLocal_103, Local_106.f_248) < 0) || Function_250(bLocal_102, Local_106.f_248) < 0) || Function_250(bLocal_101, Local_106.f_248) < 0)
	{
		return 1;
	}
	return 0;
}

int Function_250(bool bParam0, bool bParam1) //Position: 0x7869 / 30825
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

void Function_251(var uParam0, bool bParam1) //Position: 0x78BB / 30907
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

void Function_252() //Position: 0x78F2 / 30962
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_251(&Local_340, 0);
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_247("GAP_MP_obj2", 0x40f00000, 1, 2, 0, 0, 0, 0);
			iLocal_391 = 0;
			Function_241();
			Local_340.f_8 = 6;
			break;
		
		case 0x00000006:
			if (Function_271(bLocal_99) >= 5 && !iLocal_392)
			{
				SQUAD_GOALS_CLEAR(bLocal_99);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_99, 0);
				Function_244(bLocal_99, Local_106.f_236, 1, 4294967295);
				iLocal_392 = 1;
			}
			Function_253();
			if ((&Local_340 + 16)->f_32)
			{
				if (Function_106(3, 1, 0x3f800000))
				{
					Local_340.f_8 = 106;
				}
			}
			else
			{
				Function_64();
			}
			break;
		
		case 0x0000006A:
			Local_340.f_8 = 0;
			Local_340.f_4 = 3;
			break;
	}
	return;
}

void Function_253() //Position: 0x79AE / 31150
{
	int iVar0;
	
	if (!IS_ACTOR_VALID(bLocal_386))
	{
		return;
	}
	iVar0 = 4294967295;
	if (Function_270(bLocal_386, &iVar0))
	{
		if (!iVar0 != iLocal_385)
		{
			Function_269(iVar0);
			iLocal_385 = iVar0;
			if (GET_LOCAL_SLOT() == iLocal_385)
			{
				iLocal_555 = 10;
				Function_268();
			}
		}
		Function_262(bLocal_386);
		VEHICLE_SET_HANDBRAKE(bLocal_386, 1.0f);
	}
	else
	{
		iLocal_555 = 6;
		if (!iLocal_391)
		{
			VEHICLE_SET_HANDBRAKE(bLocal_386, 1.0f);
			Function_269(4294967295);
			iLocal_385 = 4294967295;
			Function_231(bLocal_553);
		}
	}
	if (GET_LOCAL_SLOT() == iLocal_385)
	{
		if ((IS_VOLUME_VALID(Local_106.f_252) && !iLocal_552) && (&Local_340 + 16)->f_48 != 0)
		{
			Function_260(Local_106, Local_106.f_252, &bLocal_553);
			Function_259(8);
			iLocal_552 = 1;
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_386)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_386));
		}
		Function_257();
	}
	else if (iVar0 != 4294967295)
	{
		if (GET_BLIP_ICON(bLocal_388) == 330)
		{
			REMOVE_BLIP(bLocal_388);
		}
		if (!IS_BLIP_VALID(bLocal_388))
		{
			bLocal_388 = ADD_BLIP_FOR_OBJECT(bLocal_386, 325, 0f, 2, 0);
			SET_BLIP_PRIORITY(bLocal_388, 4);
		}
	}
	if ((&Local_340 + 16)->f_40 && !iLocal_560)
	{
		Function_256();
		iLocal_560 = 1;
	}
	else if ((&Local_340 + 16)->f_44 && !iLocal_561)
	{
		Function_254();
		iLocal_561 = 1;
	}
	return;
}

void Function_254() //Position: 0x7ADB / 31451
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_547)
	{
		Function_255(iLocal_547[iVar0], 1);
		iVar0++;
	}
	return;
}

void Function_255(bool bParam0, bool bParam1) //Position: 0x7B03 / 31491
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

void Function_256() //Position: 0x7B54 / 31572
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_541)
	{
		Function_255(iLocal_541[iVar0], 1);
		iVar0++;
	}
	return;
}

void Function_257() //Position: 0x7B7C / 31612
{
	if (IS_ACTOR_VALID(bLocal_386))
	{
		if (IS_VOLUME_VALID(Local_106.f_204))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_386, Local_106.f_204))
			{
				Function_258(2);
			}
		}
		if (IS_VOLUME_VALID(Local_106.f_208))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_386, Local_106.f_208))
			{
				Function_258(3);
			}
		}
		if (IS_VOLUME_VALID(Local_106.f_212))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_386, Local_106.f_212))
			{
				Function_258(4);
			}
		}
		if (IS_VOLUME_VALID(Local_106.f_216))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_386, Local_106.f_216))
			{
				Function_258(5);
			}
		}
		if (IS_VOLUME_VALID(Local_106.f_220))
		{
			if (IS_ACTOR_IN_VOLUME(bLocal_386, Local_106.f_220) && !(&Local_340 + 16)->f_32)
			{
				Function_258(98);
			}
		}
		Function_268();
	}
	return;
}

void Function_258(int iParam0) //Position: 0x7C1F / 31775
{
	var uVar0;
	
	uVar0 = iParam0;
	NET_SCRIPTMSG_SEND(3, 83, &uVar0, 1, 1);
	return;
}

void Function_259(int iParam0) //Position: 0x7C34 / 31796
{
	var uVar0;
	
	uVar0 = iParam0;
	NET_SCRIPTMSG_SEND(3, 85, &uVar0, 1, 1);
	return;
}

void Function_260(var uParam0, bool bParam1, bool bParam2) //Position: 0x7C49 / 31817
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_VOLUME(bParam1), &vVar0);
	if (IS_OBJECT_VALID(*bParam2))
	{
		DESTROY_OBJECT(*bParam2);
	}
	*bParam2 = Function_261(StackVal, StackVal, uParam0, Function_22(), vVar0, 0.0f, 0.0f, 0.0f, Function_51(), 1.5f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
	return;
}

var Function_261(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x7C95 / 31893
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0.75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, iParam8, iParam10, iParam13, 0, iParam14, iParam17);
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
		if (iParam12 != 4294967295)
		{
			bVar13 = ADD_BLIP_FOR_OBJECT(bVar3, iParam12, 0.0f, 2, 0);
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

void Function_262(bool bParam0) //Position: 0x7D60 / 32096
{
	switch ((&Local_340 + 16)->f_48)
	{
		case 0x00000008:
			if (IS_VOLUME_VALID(Local_106.f_252))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_106.f_252))
				{
					DESTROY_VOLUME(Local_106.f_252);
					Function_231(bLocal_553);
					Function_264();
					Function_263(9);
				}
			}
			break;
		
		case 0x00000009:
			if (IS_VOLUME_VALID(Local_106.f_256))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_106.f_256))
				{
					DESTROY_VOLUME(Local_106.f_256);
					Function_231(bLocal_553);
					Function_264();
					Function_263(10);
				}
			}
			break;
		
		case 0x0000000A:
			if (IS_VOLUME_VALID(Local_106.f_260))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_106.f_260))
				{
					DESTROY_VOLUME(Local_106.f_260);
					Function_231(bLocal_553);
					Function_264();
					Function_263(11);
				}
			}
			break;
		
		case 0x0000000B:
			if (IS_VOLUME_VALID(Local_106.f_264))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_106.f_264))
				{
					DESTROY_VOLUME(Local_106.f_264);
					Function_231(bLocal_553);
					Function_264();
					Function_263(12);
				}
			}
			break;
		
		case 0x0000000C:
			if (IS_VOLUME_VALID(Local_106.f_268))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_106.f_268))
				{
					DESTROY_VOLUME(Local_106.f_268);
					Function_231(bLocal_553);
					Function_264();
					Function_263(13);
				}
			}
			break;
		
		case 0x0000000D:
			if (IS_VOLUME_VALID(Local_106.f_272))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_106.f_272))
				{
					DESTROY_VOLUME(Local_106.f_272);
					Function_231(bLocal_553);
					Function_264();
					Function_263(14);
				}
			}
			break;
		
		case 0x0000000E:
			if (IS_VOLUME_VALID(Local_106.f_276))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_106.f_276))
				{
					DESTROY_VOLUME(Local_106.f_276);
					Function_231(bLocal_553);
					Function_264();
					Function_263(15);
				}
			}
			break;
		
		case 0x0000000F:
			if (IS_VOLUME_VALID(Local_106.f_280))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_106.f_280))
				{
					DESTROY_VOLUME(Local_106.f_280);
					Function_231(bLocal_553);
					Function_264();
					Function_263(16);
				}
			}
			break;
		
		case 0x00000010:
			if (IS_VOLUME_VALID(Local_106.f_284))
			{
				if (IS_ACTOR_IN_VOLUME(bParam0, Local_106.f_284))
				{
					Function_231(bLocal_553);
					Function_264();
					DESTROY_VOLUME(Local_106.f_284);
					Function_263(17);
				}
			}
			break;
	}
	return;
}

void Function_263(int iParam0) //Position: 0x7F5E / 32606
{
	Function_259(iParam0);
	return;
}

void Function_264() //Position: 0x7F69 / 32617
{
	Function_266(FLOOR(25.0f), "XP_GAP_Checkpoint", 0);
	Function_265(2, FLOOR(25.0f));
	return;
}

void Function_265(int iParam0, bool bParam1) //Position: 0x7F9B / 32667
{
	Function_223(iParam0, (Function_138(iParam0) + bParam1));
	return;
}

void Function_266(var uParam0, bool bParam1, int iParam2) //Position: 0x7FAE / 32686
{
	Function_267(uParam0);
	if (iParam2 != 0)
	{
		UNK_0xA6403262(Function_229(), UI_GET_STRING_BY_HASH(iParam2));
	}
	else
	{
		if (!IS_STRING_VALID(bParam1))
		{
			bParam1 = "Common_Null";
		}
		UNK_0xA6403262(Function_229(), UI_GET_STRING(bParam1));
	}
	return;
}

void Function_267(var uParam0) //Position: 0x7FF1 / 32753
{
	Function_265(0, uParam0);
	return;
}

void Function_268() //Position: 0x8000 / 32768
{
	switch ((&Local_340 + 16)->f_48)
	{
		case 0x00000008:
			if (IS_VOLUME_VALID(Local_106.f_252) && !IS_OBJECT_VALID(bLocal_553))
			{
				Function_260(Local_106, Local_106.f_252, &bLocal_553);
			}
			break;
		
		case 0x00000009:
			if (IS_VOLUME_VALID(Local_106.f_256) && !IS_OBJECT_VALID(bLocal_553))
			{
				Function_260(Local_106, Local_106.f_256, &bLocal_553);
			}
			break;
		
		case 0x0000000A:
			if (IS_VOLUME_VALID(Local_106.f_260) && !IS_OBJECT_VALID(bLocal_553))
			{
				Function_260(Local_106, Local_106.f_260, &bLocal_553);
			}
			break;
		
		case 0x0000000B:
			if (IS_VOLUME_VALID(Local_106.f_264) && !IS_OBJECT_VALID(bLocal_553))
			{
				Function_260(Local_106, Local_106.f_264, &bLocal_553);
			}
			break;
		
		case 0x0000000C:
			if (IS_VOLUME_VALID(Local_106.f_268) && !IS_OBJECT_VALID(bLocal_553))
			{
				Function_260(Local_106, Local_106.f_268, &bLocal_553);
			}
			break;
		
		case 0x0000000D:
			if (IS_VOLUME_VALID(Local_106.f_272) && !IS_OBJECT_VALID(bLocal_553))
			{
				Function_260(Local_106, Local_106.f_272, &bLocal_553);
			}
			break;
		
		case 0x0000000E:
			if (IS_VOLUME_VALID(Local_106.f_276) && !IS_OBJECT_VALID(bLocal_553))
			{
				Function_260(Local_106, Local_106.f_276, &bLocal_553);
			}
			break;
		
		case 0x0000000F:
			if (IS_VOLUME_VALID(Local_106.f_280) && !IS_OBJECT_VALID(bLocal_553))
			{
				Function_260(Local_106, Local_106.f_280, &bLocal_553);
			}
			break;
		
		case 0x00000010:
			if (IS_VOLUME_VALID(Local_106.f_284) && !IS_OBJECT_VALID(bLocal_553))
			{
				Function_260(Local_106, Local_106.f_284, &bLocal_553);
			}
			break;
		
		case 0x00000011:
			if (IS_VOLUME_VALID(Local_106.f_288) && !IS_OBJECT_VALID(bLocal_553))
			{
				Function_260(Local_106, Local_106.f_288, &bLocal_553);
			}
			break;
	}
	return;
}

void Function_269(int iParam0) //Position: 0x81AA / 33194
{
	var uVar0;
	
	uVar0 = iParam0;
	NET_SCRIPTMSG_SEND(3, 84, &uVar0, 1, 1);
	return;
}

bool Function_270(bool bParam0, int iParam1) //Position: 0x81BF / 33215
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

int Function_271(bool bParam0) //Position: 0x821B / 33307
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

void Function_272() //Position: 0x826B / 33387
{
	switch (StackVal)
	{
		case 0x00000000:
			Function_251(&Local_340, 0);
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_247("GAP_MP_obj0", 0x40f00000, 1, 2, 0, 0, 0, 0);
			if (!IS_BLIP_VALID(bLocal_390))
			{
				bLocal_390 = ADD_BLIP_FOR_COORD(&Local_106 + 496, 330, 0f, 2, 0);
				SET_BLIP_PRIORITY(bLocal_390, 3);
			}
			Local_340.f_8 = 6;
			break;
		
		case 0x00000006:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				Function_274();
			}
			Function_273();
			if (IS_ACTOR_VALID(Function_51()))
			{
				if (IS_ACTOR_IN_VOLUME(Function_51(), Local_106.f_240) && !(&Local_340 + 16)->f_36)
				{
					Function_258(7);
				}
			}
			if ((&Local_340 + 16)->f_36 && IS_ACTOR_VALID(bLocal_386))
			{
				if (Function_106(2, 1, 0x3f800000))
				{
					Local_340.f_8 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			Local_340.f_8 = 0;
			Local_340.f_4 = 2;
			break;
	}
	return;
}

void Function_273() //Position: 0x8344 / 33604
{
	if (!iLocal_394)
	{
		if (((&Local_340 + 16)->f_24 || IS_ACTOR_IN_VOLUME(Function_51(), Local_106.f_224)) || EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_559))
		{
			if (SQUAD_GET_SIZE(bLocal_99) >= 2)
			{
				Function_243();
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_559);
				EVENT_TRAP_CLEAR_EVENTS(bLocal_559);
				iLocal_394 = 1;
			}
		}
	}
	return;
}

void Function_274() //Position: 0x8389 / 33673
{
	if (!iLocal_562)
	{
		if (Function_76(&iLocal_563))
		{
			if (Function_72(&iLocal_563) < 0.5f)
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				switch ((&Local_340 + 16)->f_60)
				{
					case 0x00000000:
						Function_300();
						Function_299(Local_106.f_176, bLocal_19, 0, 0);
						break;
					
					case 0x00000001:
						Function_284();
						Function_299(Local_106.f_200, bLocal_19, 0, 0);
						break;
					
					case 0x00000002:
						Function_279();
						break;
				}
				(&Local_340 + 16)->f_60++;
				Function_278(&iLocal_563);
				NET_OBJECT_REPLICATION_MODE_END(15);
			}
		}
		else
		{
			Function_275(&iLocal_563);
		}
		if ((&Local_340 + 16)->f_60 >= 3)
		{
			iLocal_562 = 1;
		}
	}
	return;
}

void Function_275(int iParam0) //Position: 0x842D / 33837
{
	if (!Function_76(iParam0))
	{
		Function_276(iParam0, 0.0f);
	}
	return;
}

void Function_276(var uParam0, float fParam1) //Position: 0x8442 / 33858
{
	Function_73();
	Function_277(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_277(var uParam0, int iParam1) //Position: 0x8456 / 33878
{
	uParam0->f_4 = iParam1;
	Function_45(uParam0, 1);
	Function_44(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_278(var uParam0) //Position: 0x8473 / 33907
{
	Function_276(uParam0, 0.0f);
	return;
}

void Function_279() //Position: 0x847F / 33919
{
	bLocal_387 = Function_280(StackVal, StackVal, StackVal, StackVal, Local_106, Function_22(), 1177, 976, *(&Local_106 + 392), *(&Local_106 + 392 + 12), 0, 976, 976, 976, 2);
	NET_ACTOR_SET_SCRIPT_INT(bLocal_387, 199);
	SET_ACTOR_INVULNERABILITY(bLocal_387, 1);
	ENABLE_VEHICLE_SEAT(bLocal_387, 0, 0);
	ENABLE_VEHICLE_SEAT(bLocal_387, 1, 0);
	return;
}

bool Function_280(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x84D2 / 34002
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	
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
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			bVar15 = "";
			if (Function_283(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_282(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_281(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (iVar9)
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
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, iVar18, 0);
			iVar18++;
		}
	}
	return bVar0;
}

bool Function_281(int iParam0, int iParam1) //Position: 0x8706 / 34566
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

var Function_282(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x8738 / 34616
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1, vParam1);
}

int Function_283(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8750 / 34640
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

void Function_284() //Position: 0x8777 / 34679
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_106.f_200 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "GAP_Sniper_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_s1", 515, -4466.322f, 15.72828f, 3214.935f, 0.0f, 186.8692f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_200);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 6);
	Function_285(bVar0, 6);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_s2", 515, -4417.417f, 16.0f, 3220.918f, 0.0f, 122.5537f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_200);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 6);
	Function_285(bVar0, 6);
	return;
}

void Function_285(bool bParam0, int iParam1) //Position: 0x8894 / 34964
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_298(bParam0);
			break;
		
		case 0x00000001:
			Function_297(bParam0);
			break;
		
		case 0x00000002:
			Function_296(bParam0);
			break;
		
		case 0x00000005:
			Function_295(bParam0);
			break;
		
		case 0x00000004:
			Function_294(bParam0);
			break;
		
		case 0x00000003:
			Function_293(bParam0);
			break;
		
		case 0x00000006:
			Function_292(bParam0);
			break;
		
		case 0x00000007:
			Function_291(bParam0);
			break;
		
		case 0x00000008:
			Function_290(bParam0);
			break;
		
		case 0x00000009:
			Function_288(bParam0);
			break;
		
		default:
			Function_286(bParam0);
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

void Function_286(bool bParam0) //Position: 0x8960 / 35168
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0.4f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.6f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0.75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_287(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_287(var uParam0, bool bParam1) //Position: 0x8CC4 / 36036
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

void Function_288(bool bParam0) //Position: 0x8CE6 / 36070
{
	Function_286(bParam0);
	Function_289(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 90.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0.5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 180.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 1);
	return;
}

void Function_289(bool bParam0, int iParam1) //Position: 0x8E83 / 36483
{
	var uVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	uVar0 = AI_PREDICATE_FIND_NAMED("Guard", 0);
	if (AI_PREDICATE_IS_VALID(uVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, uVar0, iParam1);
	}
	return;
}

void Function_290(bool bParam0) //Position: 0x8EB6 / 36534
{
	Function_286(bParam0);
	Function_289(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 85.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.65f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0.5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 150.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2.25f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 1);
	return;
}

void Function_291(bool bParam0) //Position: 0x905F / 36959
{
	Function_286(bParam0);
	Function_289(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0.5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 135.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 1);
	return;
}

void Function_292(bool bParam0) //Position: 0x91F0 / 37360
{
	Function_286(bParam0);
	Function_289(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
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
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_293(bool bParam0) //Position: 0x9322 / 37666
{
	Function_286(bParam0);
	Function_289(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 70.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0.5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	return;
}

void Function_294(bool bParam0) //Position: 0x94AA / 38058
{
	Function_286(bParam0);
	Function_289(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2.25f);
	return;
}

void Function_295(bool bParam0) //Position: 0x9604 / 38404
{
	Function_286(bParam0);
	Function_289(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_296(bool bParam0) //Position: 0x9742 / 38722
{
	Function_286(bParam0);
	Function_289(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.85f);
	return;
}

void Function_297(bool bParam0) //Position: 0x9765 / 38757
{
	Function_286(bParam0);
	Function_289(bParam0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.25f);
	return;
}

void Function_298(bool bParam0) //Position: 0x98CF / 39119
{
	Function_286(bParam0);
	Function_289(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.85f);
	return;
}

void Function_299(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x990A / 39178
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

void Function_300() //Position: 0x998C / 39308
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_106.f_176 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "GAP_Initial_Guard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_i01", 505, -4437.929f, 8.600296f, 3266.494f, 0.0f, 101.5957f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, false);
	Function_301(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_i03", 507, -4436.271f, 8.599081f, 3233.77f, 0.0f, 201.2575f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, false);
	Function_301(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_i05", 509, -4440.166f, 8.646785f, 3243.891f, 0.0f, 126.1414f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 24, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, false);
	Function_301(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_i06", 505, -4486.824f, 8.567596f, 3266.323f, 0.0f, -74.47482f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, false);
	Function_301(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_i07", 515, -4459.496f, 9.223372f, 3231.497f, 0.0f, 185.9752f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, false);
	Function_301(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_i08", 510, -4446.994f, 12.57603f, 3207.818f, 0.0f, 176.0723f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, false);
	Function_301(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_i10", 505, -4464.393f, 8.975292f, 3234.299f, 0.0f, 203.6067f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, false);
	Function_301(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_i11", 513, -4426.504f, 8.768061f, 3207.319f, 0.0f, 155.1555f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, false);
	Function_301(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_i12", 515, -4430.636f, 8.768061f, 3206.114f, 0.0f, 186.8692f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_176);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_WANDER(bVar0, 3212836864);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, false);
	Function_301(bVar0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_301(bool bParam0, bool bParam1) //Position: 0x9EB6 / 40630
{
	switch (bParam1)
	{
		case 0x00000000:
			SQUAD_JOIN(bParam0, bLocal_99);
			break;
		
		case 0x00000001:
			SQUAD_JOIN(bParam0, bLocal_100);
			SET_ACTOR_SKIP_VISIBILITY_CHECK(bParam0, 1);
			break;
		
		case 0x00000002:
			SQUAD_JOIN(bParam0, bLocal_101);
			break;
		
		case 0x00000003:
			SQUAD_JOIN(bParam0, bLocal_102);
			break;
		
		case 0x00000004:
			TASK_GO_NEAR_ACTORSET(bParam0, Global_78576, 25.0f, 2);
			SQUAD_JOIN(bParam0, bLocal_103);
			break;
		
		case 0x00000005:
			TASK_GO_NEAR_ACTORSET(bParam0, Global_78576, 25.0f, 2);
			SQUAD_JOIN(bParam0, bLocal_104);
			break;
		
		case 0x00000006:
			SQUAD_JOIN(bParam0, bLocal_105);
			break;
		
		default:
			SQUAD_JOIN(bParam0, bLocal_99);
			break;
	}
	Function_304(bParam0);
	Function_302(bParam0, 1);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 100.0f, 1);
	AI_SET_WEAPON_MAX_RANGE(bParam0, 75.0f);
	Function_285(bParam0, GET_ACTOR_COMBAT_CLASS(bParam0));
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 210.0f);
	return;
}

void Function_302(bool bParam0, bool bParam1) //Position: 0x9F97 / 40855
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
	fVar1 = Function_303(iVar0);
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_ALIVE(bParam0))
	{
		SET_ACTOR_MAX_HEALTH(bParam0, (GET_ACTOR_MAX_HEALTH(bParam0) * fVar1));
		SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
	}
	return;
}

var Function_303(int iParam0) //Position: 0x9FDB / 40923
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
			return 1.2f;
			break;
		
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
			return 1.4f;
			break;
		
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
			return 1.5f;
			break;
		
		default:
			return 1.0f;
			break;
	}
	return 1.0f;
}

void Function_304(bool bParam0) //Position: 0xA06E / 41070
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

void Function_305() //Position: 0xA12D / 41261
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (StackVal)
	{
		case 0x00000000:
			Function_399();
			Function_397();
			Function_390(&uLocal_396, 0);
			Function_387(&uLocal_396, 1, 24, 5, 1);
			Local_340.f_100 = "FTR_SONG_07";
			Local_340.f_8 = 1;
			break;
		
		case 0x00000001:
			if (Function_380() && Function_371(&Local_340))
			{
				Local_340.f_8 = 6;
			}
			break;
		
		case 0x00000006:
			Function_368();
			Function_366(&Local_340, Local_106);
			Function_330(Local_106, &uLocal_396, 1, 1);
			Function_6();
			Function_329();
			ENABLE_CHILD_SECTOR("mp_gap_mineLid01x");
			iVar0 = 43124;
			iVar1 = 42889;
			iVar2 = 42859;
			NET_SCRIPTMSG_REGISTER_HANDLER(83, iVar0);
			NET_SCRIPTMSG_REGISTER_HANDLER(84, iVar1);
			NET_SCRIPTMSG_REGISTER_HANDLER(85, iVar2);
			Function_312(&Local_340, 42793);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_07", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_559 = CREATE_EVENT_TRAP("InjuryTrap", 1, Local_106);
			EVENT_TRAP_ON_VOLUME(bLocal_559, Local_106.f_224);
			Local_340.f_8 = 7;
			break;
		
		case 0x00000007:
			if (Function_310())
			{
				Local_340.f_8 = 106;
			}
			break;
		
		case 0x0000006A:
			if ((&Local_340 + 16)->f_36)
			{
				if (IS_ACTOR_VALID(bLocal_386))
				{
					Function_306(&Local_340);
				}
			}
			else
			{
				Function_306(&Local_340);
			}
			break;
	}
	return;
}

void Function_306(int iParam0) //Position: 0xA28F / 41615
{
	iParam0->f_8 = 0;
	if (iParam0->f_16 != 0)
	{
		iParam0->f_4 = iParam0->f_16;
		Function_308(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0);
	}
	else
	{
		iParam0->f_4 = 1;
		Function_308(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0);
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
			Function_307();
			break;
		
		default:
			LOG_ERROR("Trying to sync to an invalid host stage??");
			break;
	}
	return;
}

void Function_307() //Position: 0xA371 / 41841
{
	bLocal_92 = true;
	return;
}

void Function_308(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26) //Position: 0xA37A / 41850
{
	if (iParam0 == Global_30668[2])
	{
		Function_309(0);
	}
	else if (iParam0 == Global_30679[1])
	{
		Function_309(1);
	}
	else if (iParam0 == Global_30658[0])
	{
		Function_309(2);
	}
	else if (iParam0 == Global_30658[3])
	{
		Function_309(3);
	}
	else if (iParam0 == Global_30685[2])
	{
		Function_309(4);
	}
	else if (iParam0 == Global_30640[2])
	{
		Function_309(6);
	}
	else if (iParam0 == Global_30685[1])
	{
		Function_309(5);
	}
	else if (iParam0 == Global_30658[2])
	{
		Function_309(7);
	}
}

void Function_309(int iParam0) //Position: 0xA40F / 41999
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

bool Function_310() //Position: 0xA4A4 / 42148
{
	if (!IS_LAYOUTREF_VALID(bLocal_566))
	{
		bLocal_566 = CREATE_LAYOUT(Function_22());
	}
	if (!IS_OBJECT_VALID(bLocal_567))
	{
		bLocal_567 = CREATE_WORLD_SECTOR(bLocal_566, "GaptoothBreach");
	}
	if (IS_WORLD_SECTOR_LOADED(bLocal_567))
	{
		Function_311(bLocal_566, "pot0", Local_106.f_364);
		Function_311(bLocal_566, "bottle", Local_106.f_364);
		Function_311(bLocal_566, "jug0", Local_106.f_364);
		Function_311(bLocal_566, "crate04", Local_106.f_364);
		Function_311(bLocal_566, "crate08", Local_106.f_364);
		Function_311(bLocal_566, "crate06", Local_106.f_364);
		Function_311(bLocal_566, "crate13", Local_106.f_364);
		Function_311(bLocal_566, "crate14", Local_106.f_364);
		Function_311(bLocal_566, "bucket", Local_106.f_364);
		Function_311(bLocal_566, "jar0", Local_106.f_364);
		Function_311(bLocal_566, "debris", Local_106.f_364);
		Function_311(bLocal_566, "boiler", Local_106.f_364);
		Function_311(bLocal_566, "shovel", Local_106.f_364);
		Function_311(bLocal_566, "pan0", Local_106.f_364);
		Function_311(bLocal_566, "hammer", Local_106.f_364);
		Function_311(bLocal_566, "mug0", Local_106.f_364);
		Function_311(bLocal_566, "basin", Local_106.f_364);
		Function_311(bLocal_566, "package", Local_106.f_228);
		Function_311(bLocal_566, "book", Local_106.f_228);
		Function_311(bLocal_566, "glass", Local_106.f_228);
		Function_311(bLocal_566, "broom", Local_106.f_228);
		Function_311(bLocal_566, "ashtray", Local_106.f_228);
		Function_311(bLocal_566, "can0", Local_106.f_228);
		Function_311(bLocal_566, "spittoon", Local_106.f_228);
		DESTROY_LAYOUT(bLocal_566);
		return 1;
	}
	return 0;
}

void Function_311(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA6C4 / 42692
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

void Function_312(char* cParam0, int iParam1) //Position: 0xA71D / 42781
{
	cParam0->f_96 = iParam1;
	return;
}

void Function_313(int iParam0) //Position: 0xA729 / 42793
{
	char* cVar0[32];
	
	NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("XP_GAP_Checkpoint"), iParam0);
	itos(&cVar0, Function_138(2), 32);
	stradd(&cVar0, "<XP>", 32);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, &cVar0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(2);
	return;
}

void Function_314(int iParam0) //Position: 0xA76B / 42859
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 1);
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		(&Local_340 + 16)->f_48 = uVar0;
	}
	return;
}

void Function_315(int iParam0) //Position: 0xA789 / 42889
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 1);
	if (IS_BLIP_VALID(bLocal_388))
	{
		REMOVE_BLIP(bLocal_388);
	}
	if (iVar0 == GET_LOCAL_SLOT())
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_247("GAP_MP_obj2_1", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iLocal_391 = 0;
		Function_278(&uLocal_538);
	}
	else if (iVar0 == 4294967295)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_247("GAP_MP_obj2", 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (!IS_BLIP_VALID(bLocal_388))
		{
			bLocal_388 = ADD_BLIP_FOR_ACTOR(bLocal_386, 330, 0, 2, 0);
			SET_BLIP_PRIORITY(bLocal_388, 4);
		}
		iLocal_391 = 1;
	}
	else
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_247("GAP_MP_obj2_2", 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (!IS_BLIP_VALID(bLocal_388))
		{
			bLocal_388 = ADD_BLIP_FOR_ACTOR(bLocal_386, 325, 0, 2, 0);
			SET_BLIP_PRIORITY(bLocal_388, 4);
		}
		iLocal_391 = 1;
		Function_278(&uLocal_538);
	}
	return;
}

void Function_316(int iParam0) //Position: 0xA874 / 43124
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 1);
	switch (iVar0)
	{
		case 0x00000002:
			if (IS_VOLUME_VALID(Local_106.f_204))
			{
				DESTROY_VOLUME(Local_106.f_204);
			}
			if (IS_VOLUME_VALID(Local_106.f_308))
			{
				DESTROY_VOLUME(Local_106.f_308);
			}
			Function_256();
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_328();
				Function_324(StackVal, StackVal, 2, "A", *(&Local_106 + 840));
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_323(&bLocal_101, iLocal_550);
				Function_299(Local_106.f_184, bLocal_19, 0, 0);
				(&Local_340 + 16)->f_40 = 1;
			}
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_247("GAP_MP_WaveOne", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			if (IS_VOLUME_VALID(Local_106.f_208))
			{
				DESTROY_VOLUME(Local_106.f_208);
			}
			if (IS_VOLUME_VALID(Local_106.f_324))
			{
				DESTROY_VOLUME(Local_106.f_324);
			}
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_299(Local_106.f_188, bLocal_19, 0, 0);
				iVar1 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_ACTOR(false, bLocal_386, 10.0f, 4);
				TASK_SEQUENCE_CLOSE();
				Function_322(Local_106.f_188, iVar1, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (IS_VOLUME_VALID(Local_106.f_212))
			{
				DESTROY_VOLUME(Local_106.f_212);
			}
			Function_254();
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_321();
				Function_324(StackVal, StackVal, 4, "C", *(&Local_106 + 888));
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_323(&bLocal_103, iLocal_550);
				Function_299(Local_106.f_192, bLocal_19, 0, 0);
				(&Local_340 + 16)->f_44 = 1;
			}
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_247("GAP_MP_WaveThree", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000005:
			if (IS_VOLUME_VALID(Local_106.f_216))
			{
				DESTROY_VOLUME(Local_106.f_216);
			}
			if (IS_VOLUME_VALID(Local_106.f_340))
			{
				DESTROY_VOLUME(Local_106.f_340);
			}
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_324(StackVal, StackVal, 5, "D", *(&Local_106 + 912));
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_323(&bLocal_104, iLocal_550);
				Function_299(Local_106.f_196, bLocal_19, 0, 0);
			}
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_247("GAP_MP_WaveFour", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000062:
			if (NET_IS_HOST_OF_THIS_SCRIPT())
			{
				(&Local_340 + 16)->f_32 = 1;
			}
			break;
		
		case 0x00000007:
			if ((NET_IS_HOST_OF_THIS_SCRIPT() && !(&Local_340 + 16)->f_36) && !iLocal_393)
			{
				NET_OBJECT_REPLICATION_MODE_START(15, 5);
				Function_319();
				Function_318();
				Function_317();
				NET_OBJECT_REPLICATION_MODE_END(15);
				Function_323(&bLocal_100, iLocal_550);
				Function_299(Local_106.f_180, bLocal_19, 0, 0);
				if (IS_ACTOR_VALID(bLocal_386))
				{
					VEHICLE_SET_HANDBRAKE(bLocal_386, 1.0f);
					SET_ACTOR_INVULNERABILITY(bLocal_386, 1);
					TRAIN_SET_ENGINE_ENABLED(iLocal_384, 0);
					TRAIN_SET_AUTOPILOT_ENABLE(iLocal_384, 0);
					TRAIN_SET_TARGET_SPEED(iLocal_384, 0.0f);
					UNK_0xF1A53C41(&uVar2, &Local_106 + 368 + 12, 1, 0);
					TRAIN_SET_POSITION_DIRECTION(iLocal_384, &Local_106 + 368, &uVar2);
				}
				(&Local_340 + 16)->f_36 = 1;
			}
			if (IS_BLIP_VALID(bLocal_390))
			{
				REMOVE_BLIP(bLocal_390);
			}
			iLocal_393 = 1;
			break;
	}
	return;
}

void Function_317() //Position: 0xAB45 / 43845
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_106.f_180 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "nGAP_Mine1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_m01", 505, -4424.247f, 7.561572f, 3179.37f, 0.0f, 155.1555f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 5, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_m03", 506, -4430.021f, 0.4975434f, 3130.007f, 0.0f, 156.8811f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_m05", 515, -4407.297f, 2.225f, 3106.878f, 0.0f, 155.1555f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 15, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_m06", 509, -4444.183f, 4.744f, 3106.413f, 0.0f, 155.1555f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 12, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_m010", 514, -4432.065f, 0.5280859f, 3123.92f, 0.0f, 155.1555f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 15, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_m011", 507, -4434.454f, 0.4550136f, 3121.782f, 0.0f, 155.1555f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, false, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_m012", 506, -4409.872f, 2.225f, 3103.451f, 0.0f, 235.4531f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, false, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_m013", 514, -4407.841f, 2.225f, 3103.079f, 0.0f, 211.9939f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	GIVE_WEAPON_TO_ACTOR(bVar0, 6, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_m014", 514, -4431.091f, 0.4550136f, 3123.339f, 0.0f, 155.1555f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_180);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 24, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_318() //Position: 0xAFB2 / 44978
{
	iLocal_384 = TRAIN_CREATE_NEW_TRAIN(1, "rail__mctrack_01x", 0);
	if (iLocal_384 > 0)
	{
		TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_384, 1203);
		bLocal_386 = GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_384, 0));
		if (IS_ACTOR_VALID(bLocal_386))
		{
			UNK_0x1306549E(bLocal_386, Local_106);
			NET_ACTOR_SET_SCRIPT_INT(bLocal_386, 99);
		}
	}
	else
	{
		LOG_ERROR("Failed to create single car train for MineCart!");
	}
	return;
}

void Function_319() //Position: 0xB042 / 45122
{
	bool bVar0;
	
	bLocal_367 = Function_320();
	switch (bLocal_367)
	{
		case 0x00000003:
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "GAP_guard_d08", 505, *(&Local_106 + 524[16]), *(&Local_106 + 524[16] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "GAP_guard_d07", 513, *(&Local_106 + 524[26]), *(&Local_106 + 524[26] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "GAP_guard_d06", 515, *(&Local_106 + 524[36]), *(&Local_106 + 524[36] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "GAP_guard_d05", 509, *(&Local_106 + 524[46]), *(&Local_106 + 524[46] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			GIVE_WEAPON_TO_ACTOR(bVar0, 16, 15.0f, 1, 1);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
		
		case 0x00000002:
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "GAP_guard_d04", 515, *(&Local_106 + 524[66]), *(&Local_106 + 524[66] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "GAP_guard_d03", 509, *(&Local_106 + 524[76]), *(&Local_106 + 524[76] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "GAP_guard_d11", 509, *(&Local_106 + 524[96]), *(&Local_106 + 524[96] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
		
		case 0x00000001:
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "GAP_guard_d01", 514, *(&Local_106 + 524[106]), *(&Local_106 + 524[106] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
			bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "GAP_guard_d10", 505, *(&Local_106 + 524[116]), *(&Local_106 + 524[116] + 12));
			SET_ACTOR_FACTION(bVar0, 19);
			GIVE_WEAPON_TO_ACTOR(bVar0, 5, 10.0f, 1, 1);
			NET_ACTOR_SET_SCRIPT_INT(bVar0, true);
			break;
	}
	Function_285(bVar0, 3);
	return;
}

int Function_320() //Position: 0xB2B7 / 45751
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

void Function_321() //Position: 0xB2E6 / 45798
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_106.f_192 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "GAP_Renforcements_Wave3"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w301", 508, -4513.481f, 15.82716f, 3256.987f, 0.0f, 216.7509f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_192);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w302", 513, -4510.079f, 15.82716f, 3254.784f, 0.0f, 216.7509f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_192);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w303", 505, -4511.167f, 15.82716f, 3257.39f, 0.0f, -66.81388f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_192);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w304", 505, -4510.515f, 15.82716f, 3256.922f, 0.0f, -55.17881f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_192);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w305", 508, -4510.987f, 15.82716f, 3258.991f, 0.0f, 216.7509f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_192);
	GIVE_WEAPON_TO_ACTOR(bVar0, 9, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w306", 508, -4510.831f, 15.82716f, 3254.54f, 0.0f, -55.17881f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_192);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w307", 507, -4512.821f, 15.82716f, 3255.924f, 0.0f, -55.17881f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_192);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w308", 505, -4509.938f, 15.82716f, 3257.751f, 0.0f, -55.17881f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_192);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w309", 505, -4512.011f, 15.82716f, 3254.771f, 0.0f, -55.17881f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_192);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 4);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_322(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xB6F6 / 46838
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
			TASK_PRIORITY_SET(bVar1, iParam2);
		}
		bVar0++;
	}
	if (bParam3)
	{
		TASK_SEQUENCE_RELEASE(bParam1, 1);
	}
}

void Function_323(bool bParam0, int iParam1) //Position: 0xB74C / 46924
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
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, iParam1);
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

void Function_324(char* cParam0, int iParam1, vector3 vParam2) //Position: 0xB7E8 / 47080
{
	float fVar0;
	float fVar1;
	
	bLocal_367 = Function_320();
	fVar0 = 10.0f;
	fVar1 = 65.0f;
	switch (bLocal_367)
	{
		case 0x00000003:
			Function_325(StackVal, StackVal, cParam0, iParam1, vParam2, 515, "GAP_backup_dyn_01_", fVar0, fVar1, 8);
			Function_325(StackVal, StackVal, cParam0, iParam1, vParam2, 514, "GAP_backup_dyn_02_", fVar0, fVar1, 7);
			Function_325(StackVal, StackVal, cParam0, iParam1, vParam2, 513, "GAP_backup_dyn_03_", fVar0, fVar1, 8);
		
		case 0x00000002:
			Function_325(StackVal, StackVal, cParam0, iParam1, vParam2, 515, "GAP_backup_dyn_05_", fVar0, fVar1, 3);
			Function_325(StackVal, StackVal, cParam0, iParam1, vParam2, 515, "GAP_backup_dyn_04_", fVar0, fVar1, 7);
			Function_325(StackVal, StackVal, cParam0, iParam1, vParam2, 510, "GAP_backup_dyn_06_", fVar0, fVar1, 3);
		
		case 0x00000001:
			Function_325(StackVal, StackVal, cParam0, iParam1, vParam2, 507, "GAP_backup_dyn_08_", fVar0, fVar1, 3);
			Function_325(StackVal, StackVal, cParam0, iParam1, vParam2, 505, "GAP_backup_dyn_09_", fVar0, fVar1, 4);
			Function_325(StackVal, StackVal, cParam0, iParam1, vParam2, 509, "GAP_backup_dyn_011_", fVar0, fVar1, 4);
			break;
	}
}

void Function_325(var uParam0, char* cParam1, vector3 vParam2, var uParam5, char* cParam6, float fParam7, float fParam8, int iParam9) //Position: 0xB98C / 47500
{
	char* cVar0[32];
	bool bVar8;
	
	strcpy(&cVar0, cParam6, 32);
	stradd(&cVar0, cParam1, 32);
	bVar8 = Function_327(StackVal, StackVal, vParam2, &Local_106, uParam5, &cVar0, fParam7, fParam8);
	Function_285(bVar8, iParam9);
	Function_326(bVar8, uParam0);
}

void Function_326(bool bParam0, bool bParam1) //Position: 0xB9C1 / 47553
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_301(bParam0, bParam1);
		SET_ACTOR_FACTION(bParam0, 19);
		NET_ACTOR_SET_SCRIPT_INT(bParam0, bParam1);
	}
	return;
}

var Function_327(vector3 vParam0, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0xB9E4 / 47588
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
		if (!Function_187(StackVal, StackVal, vVar3))
		{
			bVar9 = CREATE_ACTOR_IN_LAYOUT(*uParam3, bParam5, bParam4, vVar3, vVar10);
		}
	}
	return bVar9;
}

void Function_328() //Position: 0xBA70 / 47728
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_106.f_184 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "GAP_Renforcements_Wave1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w01", 513, -4453.651f, 9.035381f, 3224.474f, 0.0f, -0.7184591f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_184);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 24, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w02", 505, -4457.109f, 9.035381f, 3224.642f, 0.0f, -82.97761f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w03", 505, -4456.071f, 9.035381f, 3227.856f, 0.0f, -82.97761f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w04", 509, -4460.169f, 9.035381f, 3225.02f, 0.0f, -82.97761f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w05", 510, -4456.026f, 9.035381f, 3220.586f, 0.0f, -82.97761f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, 13, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 4);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w06", 505, -4453.666f, 9.035381f, 3222.258f, 0.0f, -71.16527f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w07", 505, -4456.395f, 15.78755f, 3218.696f, 0.0f, -45.6481f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, 8, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w08", 514, -4456.139f, 15.78755f, 3217.817f, 0.0f, -55.58385f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, 16, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 3);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_106, "gap_guard_w09", 505, -4454.945f, 15.79641f, 3216.566f, 0.0f, -0.7184591f, 0.0f);
	SQUAD_JOIN(bVar0, Local_106.f_184);
	GIVE_WEAPON_TO_ACTOR(bVar0, false, 0.42544f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	Function_285(bVar0, 5);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	NET_ACTOR_SET_SCRIPT_INT(bVar0, 2);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0.0f, 0, 1);
	return;
}

void Function_329() //Position: 0xBEE9 / 48873
{
	bLocal_99 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "SQUAD_Inital"));
	bLocal_100 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "SQUAD_Mine"));
	bLocal_101 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "SQUAD_Wave_One"));
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_101, 0);
	Function_244(bLocal_101, Local_106.f_224, 1, 4294967295);
	bLocal_102 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "SQUAD_Wave_Two"));
	bLocal_103 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "SQUAD_Wave_Three"));
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_103, 0);
	Function_244(bLocal_103, Local_106.f_228, 1, 4294967295);
	bLocal_104 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "SQUAD_Wave_Four"));
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_104, 0);
	Function_244(bLocal_104, Local_106.f_232, 1, 4294967295);
	bLocal_105 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_106, "SQUAD_Sniper_Squad"));
	SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_105, 0, 1, 4294967295);
	TASK_CROUCH(false, -1.0f);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(bLocal_105, 0);
	Function_244(bLocal_105, Local_106.f_232, 1, 4294967295);
	return;
}

int Function_330(bool bParam0, int iParam1, bool bParam2, var uParam3) //Position: 0xC009 / 49161
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
	
	bVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_365()));
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 4294967295;
	}
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bParam0, Function_364()));
	if (!IS_OBJECTSET_VALID(bVar1))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_364(), bParam0, 17, 0);
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
		if (DECOR_GET_INT_VERBOSE(bVar14, Function_363(), &iVar2))
		{
			if (iVar2 == 6)
			{
			}
			else
			{
				Function_362(bVar14);
				vVar7 = { StackVal, StackVal, Function_362(bVar14) };
				iVar3 = CLEAR_AREA_OF_GRASS(vVar7, 2.5f);
				iVar4 = CLEAR_AREA_OF_TREE_TYPE(vVar7, 2.5f, "");
				Function_361(bVar14);
				vVar10 = { StackVal, StackVal, Function_361(bVar14) };
				strcpy(&cVar17, GET_OBJECT_NAME(bVar14), 64);
				if (Function_359(iParam1, iVar2))
				{
					switch (iVar2)
					{
						case 0x00000001:
							bVar5 = DECOR_GET_INT(bVar14, Function_358());
							if (Function_357(bVar5))
							{
								if (Function_356((*iParam1 + 228)[bVar52]))
								{
									Function_337(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
									Function_332(StackVal, bVar16, *(iParam1 + 228[bVar52]), bVar5);
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
								Function_337(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
								DECOR_SET_FLOAT(bVar16, Function_331(), (iParam1 + 228)->f_224);
							}
							else
							{
								bVar49 = true;
							}
							break;
						
						default:
							Function_337(StackVal, StackVal, StackVal, StackVal, &bVar15, &bVar16, bParam0, vVar7, vVar10, iVar2, bParam2, uParam3, &cVar17, iVar3, iVar4);
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

var Function_331() //Position: 0xC23D / 49725
{
	return "XPBonus";
}

void Function_332(bool bParam0, struct<2> Param1, var uParam3) //Position: 0xC24D / 49741
{
	bool bVar0;
	
	if (Function_356(Param1))
	{
		bVar0 = Function_334(StackVal, Param1, uParam3);
		DECOR_SET_INT(bParam0, Function_333(), bVar0);
	}
}

var Function_333() //Position: 0xC273 / 49779
{
	return "PackedWeapon";
}

var Function_334(struct<5> Param0) //Position: 0xC288 / 49800
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_335())) || SHIFT_LEFT(bParam2, Function_335() + 8));
}

bool Function_335() //Position: 0xC2A6 / 49830
{
	return Function_336(39);
}

int Function_336(bool bParam0) //Position: 0xC2B1 / 49841
{
	float fVar0;
	
	if (bParam0 <= 0)
	{
		return 0x40000000;
	}
	fVar0 = 0;
	while (bParam0 >= 0)
	{
		bParam0 = SHIFT_RIGHT(bParam0, true);
		fVar0++;
	}
	return fVar0;
}

void Function_337(var uParam0, bool bParam1, bool bParam2, vector3 vParam3, vector3 vParam6, int iParam9, bool bParam10, var uParam11, char* cParam12, int iParam13, int iParam14) //Position: 0xC2DF / 49887
{
	Function_348(StackVal, StackVal, StackVal, StackVal, uParam0, bParam1, iParam9, bParam2, vParam3, vParam6, cParam12);
	Function_342(*uParam0, *bParam1, iParam9, bParam10, uParam11);
	DECOR_SET_INT(*bParam1, Function_341(), Function_340(bParam10, uParam11, iParam9));
	DECOR_SET_INT(*bParam1, Function_339(), Function_338(iParam13, iParam14));
}

var Function_338(var uParam0, bool bParam1) //Position: 0xC330 / 49968
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_339() //Position: 0xC340 / 49984
{
	return "PackedGrass";
}

var Function_340(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC354 / 50004
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

var Function_341() //Position: 0xC379 / 50041
{
	return "PackedMetadata";
}

void Function_342(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0xC390 / 50064
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
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_333(), &uVar5))
				{
					Function_346(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_345();
				vVar0 = { StackVal, StackVal, Function_345() };
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
				Function_344();
				vVar0 = { StackVal, StackVal, Function_344() };
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
				Function_343();
				vVar0 = { StackVal, StackVal, Function_343() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 3, vVar0, 0);
			}
			break;
	}
	if (bParam3)
	{
		SET_BLIP_MAX_DISTANCE(bVar3, 1.0f);
		UNK_0x1E98AFEC(bVar3, 1);
		UNK_0xFF3DB575(bVar4, 1);
	}
}

vector3 Function_343() //Position: 0xC4BB / 50363
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_344() //Position: 0xC4CC / 50380
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_345() //Position: 0xC4DD / 50397
{
	return 0.0f, 0.158f, -0.163f;
}

void Function_346(var uParam0, int iParam1) //Position: 0xC4EE / 50414
{
	*iParam1 = Function_347(uParam0, Function_335(), 0);
	iParam1->f_4 = Function_347(uParam0, Function_335() + 8, Function_335());
	return;
}

var Function_347(var uParam0, int iParam1, bool bParam2) //Position: 0xC511 / 50449
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_206((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

int Function_348(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0xC530 / 50480
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_355();
			Function_344();
			vVar1 = { StackVal, StackVal, Function_344() };
			break;
		
		case 0x00000001:
			bVar0 = Function_354();
			Function_345();
			vVar1 = { StackVal, StackVal, Function_345() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_353();
			Function_343();
			vVar1 = { StackVal, StackVal, Function_343() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_352(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_350(Function_352()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_349(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_349() //Position: 0xC634 / 50740
{
	return "MPItemGiver";
}

struct<32> Function_350(bool bParam0) //Position: 0xC648 / 50760
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_351("0", &cVar8, ""), 4);
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

struct<32> Function_351(char* cParam0, char* cParam1, char* cParam2) //Position: 0xC6B2 / 50866
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_352() //Position: 0xC6D1 / 50897
{
	return "PBox_";
}

var Function_353() //Position: 0xC6DF / 50911
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_354() //Position: 0xC705 / 50949
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_355() //Position: 0xC72D / 50989
{
	return "p_gen_crateMultiplayerAmmo01x";
}

bool Function_356(int iParam0) //Position: 0xC753 / 51027
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool Function_357(bool bParam0) //Position: 0xC765 / 51045
{
	return (bParam0 <= 0 && bParam0 > 27);
}

var Function_358() //Position: 0xC775 / 51061
{
	return "ID";
}

bool Function_359(bool bParam0, int iParam1) //Position: 0xC780 / 51072
{
	switch (iParam1)
	{
		case 0x00000003:
			return !Function_85((bParam0 + 228)->f_220, 1);
			break;
		
		case 0x00000004:
			if (Function_360())
			{
				return 0;
			}
			return !Function_85((bParam0 + 228)->f_220, 2);
			break;
		
		case 0x00000005:
			return !Function_85((bParam0 + 228)->f_220, 4);
			break;
	}
	return 1;
}

bool Function_360() //Position: 0xC7D5 / 51157
{
	return Function_50(Global_79962, 1024);
}

vector3 Function_361(bool bParam0) //Position: 0xC7E5 / 51173
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

vector3 Function_362(bool bParam0) //Position: 0xC80C / 51212
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

var Function_363() //Position: 0xC833 / 51251
{
	return "Type";
}

var Function_364() //Position: 0xC840 / 51264
{
	return "PickupsSet";
}

var Function_365() //Position: 0xC853 / 51283
{
	return "PickupFlagsSet";
}

void Function_366(var uParam0, bool bParam1) //Position: 0xC86A / 51306
{
	Function_367(bParam1);
	PLAYSTAT_MP_DEED_START(GET_SHORT_SCRIPT_NAME());
	UNK_0x5C4CAE3A(bParam1);
	bLocal_19 = CREATE_ACTORSET_IN_LAYOUT(bParam1, "currentPopulation", 1);
	bLocal_42 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bLocal_42, 15);
	ITERATE_IN_LAYOUT(bLocal_42, bParam1);
	START_OBJECT_ITERATOR(bLocal_42);
	Global_78480.f_24 = *uParam0;
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_251(uParam0, 1);
	}
	Function_52(256);
	Function_105(64);
	Function_79(0);
	return;
}

void Function_367(var uParam0) //Position: 0xC8DB / 51419
{
	Global_83591.f_140 = uParam0;
	return;
}

void Function_368() //Position: 0xC8E9 / 51433
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
	
	Function_370(4, 1);
	uVar0 = uVar0;
	Local_106 = CREATE_LAYOUT("GaptoothBreachMP_layout");
	Local_106.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Wave_Trigger1", 2, -4431.403f, 7.437463f, 3171.842f, 0.0f, 37.86579f, 0.0f, 7.697229f, 6.647546f, 1.743462f);
	Local_106.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Wave_Trigger2", 2, -4448.769f, 8.127755f, 3240.264f, 0.0f, -53.71848f, 0.0f, 32.67002f, 8.13928f, 9.261744f);
	Local_106.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Wave_Trigger3", 2, -4462.914f, 6.082295f, 3270.275f, 5.624571f, -18.59461f, -1.513871f, 22.44938f, 12.87067f, 5.935745f);
	Local_106.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Wave_Trigger4", 2, -4514.333f, 19.70016f, 3209.907f, -5.356577f, -174.3076f, 0.817673f, 9.705028f, 8.13928f, 10.35566f);
	Local_106.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Finish_Trigger", 2, -4469.582f, 28.83931f, 3103.474f, 0.0f, 41.38668f, 0.0f, 11.14913f, 5.54348f, 12.11272f);
	Local_106.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Defend_Vol", 2, -4436.889f, 16.74192f, 3232.038f, 0.0f, -30.12365f, 0.0f, 110.4622f, 29.5437f, 153.3621f);
	Local_106.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_106, "nHouse_Vol", 2, -4509.548f, 15.20351f, 3258.064f, 0.0f, -51.79939f, 0.0f, 22.07405f, 7.692403f, 14.0144f);
	Local_106.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_106, "nTower_Vol", 2, -4471.421f, 36.44719f, 3140.938f, 0.0f, -49.20515f, 0.0f, 23.06402f, 17.67281f, 33.58749f);
	Local_106.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Mine_Cart_Vol", 2, -4437.441f, 3.773274f, 3121.883f, -1.857684f, -14.85628f, 2.175175f, 43.03187f, 8.441209f, 47.50266f);
	Local_106.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Mine_Trigger", 2, -4427.531f, 9.736547f, 3205.615f, -0.05781954f, 345.3889f, -360.0581f, 14.00741f, 8.873666f, 9.627782f);
	Local_106.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Mine_Vol", 2, -4437.626f, 4.600298f, 3133.47f, -0.06462839f, 329.9643f, -360.0403f, 97.88824f, 29.13563f, 114.0392f);
	Local_106.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_106, "BadGuy_Check_Vol", 2, -4481.403f, 33.21836f, 3137.135f, 0.0f, 41.38668f, 0.0f, 113.4812f, 34.53939f, 84.57018f);
	Local_106.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Cart_GateWay1", 2, -4430.837f, 2.113245f, 3147.281f, 0.0f, -28.01026f, 0.0f, 2.976343f, 1.460104f, 0.8981802f);
	Local_106.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Cart_GateWay2", 2, -4442.802f, 2.785223f, 3154.093f, 0.0f, -28.01026f, 0.0f, 2.976343f, 1.460104f, 0.8981802f);
	Local_106.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Cart_GateWay3", 2, -4428.189f, 7.275308f, 3173.07f, 0.0f, 44.03556f, 0.0f, 2.369584f, 1.460104f, 0.8981802f);
	Local_106.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Cart_GateWay4", 2, -4428.428f, 8.671342f, 3213.734f, 0.0f, -10.26962f, 0.0f, 2.736396f, 2.270834f, 1.284401f);
	Local_106.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Cart_GateWay5", 2, -4462.384f, 8.628625f, 3249.22f, 0.0f, -10.26962f, 0.0f, 2.736396f, 2.270834f, 1.284401f);
	Local_106.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Cart_GateWay6", 2, -4473.047f, 8.500752f, 3289.336f, 0.0f, -69.94133f, 0.0f, 2.961648f, 2.270834f, 1.284401f);
	Local_106.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Cart_GateWay7", 2, -4502.507f, 12.22783f, 3266.321f, 0.0f, -143.4877f, 0.0f, 2.961648f, 2.270834f, 1.284401f);
	Local_106.f_280 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Cart_GateWay8", 2, -4514.25f, 24.25793f, 3183.852f, 0.0f, -180.8445f, 0.0f, 2.961648f, 2.270834f, 1.284401f);
	Local_106.f_284 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Cart_GateWay9", 2, -4474.301f, 28.58221f, 3150.367f, 0.0f, -231.985f, 0.0f, 2.961648f, 2.270834f, 1.284401f);
	Local_106.f_288 = CREATE_VOLUME_IN_LAYOUT(Local_106, "Cart_GateWay10", 2, -4469.302f, 28.37611f, 3104.444f, 0.0f, -140.4397f, 0.0f, 2.961648f, 2.270834f, 1.284401f);
	Local_106.f_308 = CREATE_VOLUME_SET_IN_LAYOUT(Local_106, "SpawnVol_0_set");
	(*&Local_106 + 292)[0] = CREATE_VOLUME_IN_LAYOUT(Local_106, "spawnvol_0_sub_0", 2, -4460.319f, 8.578414f, 3318.9f, 0.0f, -205.8026f, 0.0f, 10.92786f, 6.922777f, 5.143715f);
	ADD_TO_VOLUME_SET(Local_106.f_308, (*&Local_106 + 292)[0]);
	(*&Local_106 + 292)[1] = CREATE_VOLUME_IN_LAYOUT(Local_106, "spawnvol_0_sub_1", 2, -4490.132f, 8.578414f, 3303.858f, 0.0f, -209.7857f, 0.0f, 10.92786f, 6.922777f, 5.143715f);
	ADD_TO_VOLUME_SET(Local_106.f_308, (*&Local_106 + 292)[1]);
	(*&Local_106 + 292)[2] = CREATE_VOLUME_IN_LAYOUT(Local_106, "spawnvol_0_sub_2", 2, -4514.15f, 8.578414f, 3278.909f, 0.0f, -232.3972f, 0.0f, 10.92786f, 6.922777f, 5.143715f);
	ADD_TO_VOLUME_SET(Local_106.f_308, (*&Local_106 + 292)[2]);
	Local_106.f_324 = CREATE_VOLUME_SET_IN_LAYOUT(Local_106, "SpawnVol_1_set");
	(*&Local_106 + 312)[0] = CREATE_VOLUME_IN_LAYOUT(Local_106, "spawnvol_1_sub_0", 2, -4442.569f, 0.5051158f, 3119.469f, 350.6519f, 79.23355f, -12.02419f, 3.978073f, 2.356987f, 2.896699f);
	ADD_TO_VOLUME_SET(Local_106.f_324, (*&Local_106 + 312)[0]);
	(*&Local_106 + 312)[1] = CREATE_VOLUME_IN_LAYOUT(Local_106, "spawnvol_1_sub_1", 2, -4428.015f, 1.551075f, 3115.471f, 362.9982f, -69.51904f, 0.2091332f, 3.701197f, 2.344701f, 2.218517f);
	ADD_TO_VOLUME_SET(Local_106.f_324, (*&Local_106 + 312)[1]);
	Local_106.f_340 = CREATE_VOLUME_SET_IN_LAYOUT(Local_106, "SpawnVol_2_set");
	(*&Local_106 + 328)[0] = CREATE_VOLUME_IN_LAYOUT(Local_106, "spawnvol_2_Sub_0", 2, -4426.492f, 9.638123f, 3192.671f, -2.75873f, 340.4675f, -357.5094f, 2.481727f, 2.329498f, 2.516625f);
	ADD_TO_VOLUME_SET(Local_106.f_340, (*&Local_106 + 328)[0]);
	(*&Local_106 + 328)[1] = CREATE_VOLUME_IN_LAYOUT(Local_106, "spawnvol_2_Sub_1", 2, -4425.611f, 8.14677f, 3176.341f, -3.027948f, 390.8262f, -359.985f, 2.481727f, 2.329498f, 2.516625f);
	ADD_TO_VOLUME_SET(Local_106.f_340, (*&Local_106 + 328)[1]);
	Local_106.f_360 = CREATE_VOLUME_SET_IN_LAYOUT(Local_106, "SpawnVol_3_set");
	(*&Local_106 + 344)[0] = CREATE_VOLUME_IN_LAYOUT(Local_106, "spawnvol_3_sub_0", 2, -4500.459f, 13.62498f, 3268.863f, -0.7905401f, 209.9895f, -0.6050537f, 5.147435f, 3.26089f, 2.422885f);
	ADD_TO_VOLUME_SET(Local_106.f_360, (*&Local_106 + 344)[0]);
	(*&Local_106 + 344)[1] = CREATE_VOLUME_IN_LAYOUT(Local_106, "spawnvol_3_sub_1", 2, -4517.026f, 10.73883f, 3270.203f, -0.6944196f, 170.4002f, -1.116028f, 5.147435f, 3.26089f, 2.422885f);
	ADD_TO_VOLUME_SET(Local_106.f_360, (*&Local_106 + 344)[1]);
	(*&Local_106 + 344)[2] = CREATE_VOLUME_IN_LAYOUT(Local_106, "spawnvol_3_sub_2", 2, -4513.749f, 16.86174f, 3231.906f, -0.6848934f, 178.6203f, -1.016708f, 5.147435f, 3.26089f, 2.422885f);
	ADD_TO_VOLUME_SET(Local_106.f_360, (*&Local_106 + 344)[2]);
	Local_106.f_364 = CREATE_VOLUME_IN_LAYOUT(Local_106, "v_gap_total", 2, -4452.508f, 16.74192f, 3258.957f, 0.0f, -30.12365f, 0.0f, 395.4724f, 92.84851f, 407.3367f);
	*(&Local_106 + 368) = { -4431.305f, 0.6350126f, 3124.681f };
	*(&Local_106 + 368 + 12) = { 0.0f, -164.3784f, 0.0f };
	*(&Local_106 + 392) = { -4472.429f, 28.21577f, 3118.393f };
	*(&Local_106 + 392 + 12) = { 0.0f, -321.0774f, 0.0f };
	Local_106.f_416 = CREATE_OBJECTSET_IN_LAYOUT("PickupFlagsSet", Local_106, 8, 0);
	*(&Local_106 + 420[06]) = { -4443.662f, -0.4372853f, 3114.823f };
	*(&Local_106 + 420[06] + 12) = { 177.7811f, -121.9402f, -178.6095f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_106, "f_WeaponPickUp", -4443.662f, -0.4372853f, 3114.823f, 177.7811f, -121.9402f, -178.6095f);
	Function_369(bVar1, 1, 1);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_106.f_416);
	*(&Local_106 + 420[16]) = { -4475.665f, 9.056845f, 3250.445f };
	*(&Local_106 + 420[16] + 12) = { -6.102783f, -281.1082f, -6.481982f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_106, "f_AmmoPickUp", -4475.665f, 9.056845f, 3250.445f, -6.102783f, -281.1082f, -6.481982f);
	Function_369(bVar2, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_106.f_416);
	*(&Local_106 + 420[26]) = { -4440.85f, -0.1909981f, 3124.574f };
	*(&Local_106 + 420[26] + 12) = { -9.619679f, -466.9226f, 7.863541f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_106, "f_AmmoPickUp1", -4440.85f, -0.1909981f, 3124.574f, -9.619679f, -466.9226f, 7.863541f);
	Function_369(bVar3, 2, 4294967286);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_106.f_416);
	*(&Local_106 + 496) = { -4427.829f, 8.712235f, 3204.29f };
	*(&Local_106 + 496 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_106.f_520 = CREATE_OBJECTSET_IN_LAYOUT("Dynamic_SpawnSet", Local_106, 8, 0);
	*(&Local_106 + 524[06]) = { -4443.107f, 4.887225f, 3104.458f };
	*(&Local_106 + 524[06] + 12) = { 1.218658f, -164.3784f, -0.820905f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_106, "f_DynamicSpawn_01", -4443.107f, 4.887225f, 3104.458f, 1.218658f, -164.3784f, -0.820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_106.f_520);
	*(&Local_106 + 524[16]) = { -4423.854f, 0.6002281f, 3113.293f };
	*(&Local_106 + 524[16] + 12) = { 1.218658f, -164.3784f, -0.820905f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_106, "f_DynamicSpawn_02", -4423.854f, 0.6002281f, 3113.293f, 1.218658f, -164.3784f, -0.820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_106.f_520);
	*(&Local_106 + 524[26]) = { -4442.171f, 3.83816f, 3164.478f };
	*(&Local_106 + 524[26] + 12) = { 1.218658f, -164.3784f, -0.820905f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_106, "f_DynamicSpawn_03", -4442.171f, 3.83816f, 3164.478f, 1.218658f, -164.3784f, -0.820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_106.f_520);
	*(&Local_106 + 524[36]) = { -4443.498f, 2.576138f, 3151.306f };
	*(&Local_106 + 524[36] + 12) = { 1.218658f, -164.3784f, -0.820905f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_106, "f_DynamicSpawn_04", -4443.498f, 2.576138f, 3151.306f, 1.218658f, -164.3784f, -0.820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_106.f_520);
	*(&Local_106 + 524[46]) = { -4445.221f, 2.587423f, 3149.456f };
	*(&Local_106 + 524[46] + 12) = { 1.218658f, -164.3784f, -0.820905f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_106, "f_DynamicSpawn_05", -4445.221f, 2.587423f, 3149.456f, 1.218658f, -164.3784f, -0.820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_106.f_520);
	*(&Local_106 + 524[56]) = { -4436.348f, 1.591955f, 3153.222f };
	*(&Local_106 + 524[56] + 12) = { 1.218658f, -164.3784f, -0.820905f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_106, "f_DynamicSpawn_06", -4436.348f, 1.591955f, 3153.222f, 1.218658f, -164.3784f, -0.820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_106.f_520);
	*(&Local_106 + 524[66]) = { -4430.512f, 1.485163f, 3146.721f };
	*(&Local_106 + 524[66] + 12) = { 1.218658f, -164.3784f, -0.820905f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_106, "f_DynamicSpawn_07", -4430.512f, 1.485163f, 3146.721f, 1.218658f, -164.3784f, -0.820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_106.f_520);
	*(&Local_106 + 524[76]) = { -4430.569f, 0.5442817f, 3138.123f };
	*(&Local_106 + 524[76] + 12) = { 1.218658f, -164.3784f, -0.820905f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_106, "f_DynamicSpawn_08", -4430.569f, 0.5442817f, 3138.123f, 1.218658f, -164.3784f, -0.820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_106.f_520);
	*(&Local_106 + 524[86]) = { -4407.213f, 2.24857f, 3104.375f };
	*(&Local_106 + 524[86] + 12) = { 1.218658f, -164.3784f, -0.820905f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_106, "f_DynamicSpawn_09", -4407.213f, 2.24857f, 3104.375f, 1.218658f, -164.3784f, -0.820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_106.f_520);
	*(&Local_106 + 524[96]) = { -4408.979f, 2.273875f, 3104.869f };
	*(&Local_106 + 524[96] + 12) = { 1.218658f, -164.3784f, -0.820905f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_106, "f_DynamicSpawn_010", -4408.979f, 2.273875f, 3104.869f, 1.218658f, -164.3784f, -0.820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_106.f_520);
	*(&Local_106 + 524[106]) = { -4430.784f, 0.5736949f, 3127.585f };
	*(&Local_106 + 524[106] + 12) = { 1.218658f, -164.3784f, -0.820905f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_106, "f_DynamicSpawn_011", -4430.784f, 0.5736949f, 3127.585f, 1.218658f, -164.3784f, -0.820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_106.f_520);
	*(&Local_106 + 524[116]) = { -4433.008f, 0.5702545f, 3126.483f };
	*(&Local_106 + 524[116] + 12) = { 1.218658f, -164.3784f, -0.820905f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_106, "f_DynamicSpawn_012", -4433.008f, 0.5702545f, 3126.483f, 1.218658f, -164.3784f, -0.820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_106.f_520);
	*(&Local_106 + 524[126]) = { -4451.673f, 5.345598f, 3102.684f };
	*(&Local_106 + 524[126] + 12) = { 1.218658f, -164.3784f, -0.820905f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_106, "f_DynamicSpawn_013", -4451.673f, 5.345598f, 3102.684f, 1.218658f, -164.3784f, -0.820905f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_106.f_520);
	*(&Local_106 + 840) = { -4452.271f, 8.803034f, 3240.174f };
	*(&Local_106 + 840 + 12) = { 0.0f, -46.25061f, 0.0f };
	*(&Local_106 + 864) = { -4483.997f, 8.065142f, 3296.002f };
	*(&Local_106 + 864 + 12) = { 0.0f, -46.25061f, 0.0f };
	*(&Local_106 + 888) = { -4507.521f, 24.03768f, 3185.738f };
	*(&Local_106 + 888 + 12) = { 0.0f, -46.25061f, 0.0f };
	*(&Local_106 + 912) = { -4495.986f, 30.2688f, 3103.521f };
	*(&Local_106 + 912 + 12) = { 0.0f, -46.25061f, 0.0f };
	return;
}

void Function_369(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDBC3 / 56259
{
	DECOR_SET_INT(iParam0, Function_363(), bParam1);
	if (bParam2 != 4294967286)
	{
		DECOR_SET_INT(bParam0, Function_358(), bParam2);
	}
	return;
}

void Function_370(int iParam0, int iParam1) //Position: 0xDBE7 / 56295
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

int Function_371(int iParam0) //Position: 0xDC30 / 56368
{
	switch (iLocal_98)
	{
		case 0x00000000:
			Function_378(1);
			REGISTER_HOST_BROADCAST_VARIABLES(iParam0 + 16, 18);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&Local_51, 33);
			bLocal_40 = CREATE_LAYOUT("dynamicAALayout");
			bLocal_41 = CREATE_EVENT_TRAP("AAObjReplication", 77, bLocal_40);
			EVENT_TRAP_STORE_EVENTS(bLocal_41, 1);
			Function_377();
			Function_402(&uLocal_45, 5.0f);
			iLocal_98 = 1;
			break;
		
		case 0x00000001:
			if (Function_376())
			{
				iLocal_98 = 2;
			}
			else if (Function_372(&uLocal_45))
			{
				Function_377();
				Function_403(&uLocal_45, 5.0f);
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

bool Function_372(int iParam0) //Position: 0xDCDC / 56540
{
	if (Function_374(iParam0))
	{
		Function_373(iParam0);
		return 1;
	}
	return 0;
}

void Function_373(int iParam0) //Position: 0xDCF2 / 56562
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_374(int iParam0) //Position: 0xDD06 / 56582
{
	if (Function_76(iParam0))
	{
		if (Function_375(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_375(float fParam0) //Position: 0xDD21 / 56609
{
	return -Function_72(fParam0);
}

bool Function_376() //Position: 0xDD2D / 56621
{
	return iLocal_20;
}

void Function_377() //Position: 0xDD35 / 56629
{
	struct<13> Var0;
	
	Var0 = 0;
	Var0.f_4 = GET_LOCAL_SLOT();
	Var0.f_8 = NET_GET_HOST_OF_THIS_SCRIPT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_378(bool bParam0) //Position: 0xDD61 / 56673
{
	struct<17> Var0;
	
	Function_70(&Var0);
	if (StackVal != 0)
	{
	}
	strcpy(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
	Var0.f_4 = STRING_TO_HASH(STRING_LOWER(&cVar5));
	Var0 = 0;
	Var0.f_16 = 0.0f;
	Var0.f_8 = 4294967286;
	if (bParam0)
	{
		Function_45(&Var0, 4);
	}
	Function_63(&Var0);
	Function_64();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 56755);
	return;
}

void Function_379(int iParam0) //Position: 0xDDB3 / 56755
{
	struct<5> Var0;
	int iVar7;
	bool bVar8;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	Function_70(&Var2);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), false, false);
		return;
	}
	Function_71(&iVar7);
	if (Function_118(&Var2))
	{
	}
	bVar8 = Function_109(&iVar7);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar8), false, false);
	if (bVar8 < 4294967286 && bVar8 == Var0)
	{
	}
	Function_117(&Var2, 1);
	Function_63(&Var2);
	return;
}

int Function_380() //Position: 0xDEB6 / 57014
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_381(&Local_106 + 4))
		{
			return 0;
		}
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[Local_34010].f_32))
		{
			return 0;
		}
		if (!Function_381(&bLocal_368))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_381(bool bParam0) //Position: 0xDEF0 / 57072
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_386();
	iVar1 = 0;
	if (!Function_5(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_385(bParam0[iVar03], 8);
		}
		else if (Function_384())
		{
			iVar1 = 1;
			Function_385(bParam0[iVar03], 8);
		}
		Function_385(bParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], 1, (Function_5(bParam0[03], 8) || iVar1));
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
				Function_385(bParam0[iVar03], 1);
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
							Function_385(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_385(bParam0[iVar03], 2);
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
							Function_385(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_385(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_385(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_385(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_385(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_385(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_385(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_385(bParam0[iVar03], 2);
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
	Function_382();
	return 1;
}

void Function_382() //Position: 0xE26B / 57963
{
	if (!Function_383(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_383(int iParam0) //Position: 0xE2AB / 58027
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_384() //Position: 0xE2C7 / 58055
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

void Function_385(var uParam0, int iParam1) //Position: 0xE2F2 / 58098
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_386() //Position: 0xE303 / 58115
{
	if (!Function_383(128))
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

void Function_387(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xE345 / 58181
{
	Function_388(iParam0 + 228, uParam1, uParam2, uParam3, uParam4);
}

void Function_388(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xE35C / 58204
{
	if (!Function_357(iParam1))
	{
		return;
	}
	Function_389(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_389(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xE37F / 58239
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

void Function_390(int iParam0, bool bParam1) //Position: 0xE3A9 / 58281
{
	Function_394(iParam0);
	Function_394(iParam0 + 228);
	if (bParam1)
	{
		Function_391(iParam0);
	}
	return;
}

void Function_391(int iParam0) //Position: 0xE3C5 / 58309
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_392(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_392(var uParam0, int iParam1) //Position: 0xE3E5 / 58341
{
	Function_393(uParam0, iParam1, 0);
	return;
}

void Function_393(int iParam0, int iParam1, int iParam2) //Position: 0xE3F3 / 58355
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_394(int iParam0) //Position: 0xE404 / 58372
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_396(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_395(iParam0, 0.0f);
	return;
}

void Function_395(var uParam0, int iParam1) //Position: 0xE431 / 58417
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_396(var uParam0) //Position: 0xE43D / 58429
{
	Function_389(uParam0, 4294967295, 0, 1);
	return;
}

void Function_397() //Position: 0xE44B / 58443
{
	Function_398(&Local_106 + 4, 505, 2, 1);
	Function_398(&Local_106 + 4, 507, 2, 1);
	Function_398(&Local_106 + 4, 509, 2, 1);
	Function_398(&Local_106 + 4, 515, 2, 1);
	Function_398(&Local_106 + 4, 510, 2, 1);
	Function_398(&Local_106 + 4, 513, 2, 1);
	Function_398(&Local_106 + 4, 506, 2, 1);
	Function_398(&Local_106 + 4, 514, 2, 1);
	Function_398(&Local_106 + 4, 976, 2, 1);
	Function_398(&Local_106 + 4, 508, 2, 1);
	Function_398(&Local_106 + 4, 982, 2, 1);
	Function_398(&Local_106 + 4, 981, 2, 1);
	Function_398(&Local_106 + 4, 978, 2, 1);
	Function_398(&Local_106 + 4, 977, 2, 1);
	return;
}

var Function_398(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xE507 / 58631
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
			Function_385(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_385(uParam0[iVar03], 8);
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

void Function_399() //Position: 0xE5D7 / 58839
{
	Function_400(&bLocal_368, "mp_action_areas", 10, 0);
	Function_398(&bLocal_368, 1177, 2, 1);
	Function_398(&bLocal_368, 976, 2, 1);
	Function_398(&bLocal_368, 1203, 2, 1);
	Function_400(&bLocal_368, "p_gen_rockGoldCart01x", 0, 1);
	return;
}

var Function_400(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xE63E / 58942
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_401(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_385(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_401(var uParam0, int iParam1, int iParam2) //Position: 0xE676 / 58998
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_385(uParam0[iVar03], 4);
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

void Function_402(var uParam0, float fParam1) //Position: 0xE73A / 59194
{
	if (!Function_76(uParam0))
	{
		Function_403(uParam0, fParam1);
	}
	return;
}

void Function_403(var uParam0, float fParam1) //Position: 0xE750 / 59216
{
	Function_276(uParam0, -fParam1);
	return;
}

void Function_404(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4) //Position: 0xE75E / 59230
{
	int iVar0;
	
	if (IS_PLAYER_IN_COMBAT(0))
	{
		iVar0 = Function_405(uParam4);
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

int Function_405(float fParam0) //Position: 0xE7A4 / 59300
{
	if (IS_PLAYER_IN_COMBAT(0))
	{
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Function_51())) > fParam0)
		{
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Function_51())) > fParam0)
		{
			return 0;
		}
		return 1;
	}
	return 2;
}

bool Function_406() //Position: 0xE7D8 / 59352
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (!IS_LAYOUTREF_VALID(Local_106))
	{
		return 0;
	}
	bVar1 = CREATE_OBJECT_ITERATOR(Local_106);
	ITERATE_IN_LAYOUT(bVar1, Local_106);
	ITERATE_ON_OBJECT_TYPE(bVar1, 15);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if (IS_ACTOR_VALID(bVar3))
		{
			if (NET_ACTOR_GET_SCRIPT_INT(bVar3) == 199)
			{
				bLocal_387 = bVar3;
				iVar0 = 1;
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_407() //Position: 0xE842 / 59458
{
	bool bVar0;
	
	bVar0 = false;
	if (!IS_LAYOUTREF_VALID(Local_106))
	{
		return 0;
	}
	bVar0 = Function_408("train_layout");
	if (!bVar0)
	{
		bVar0 = Function_408(GET_LAYOUT_NAME(GET_GC_LAYOUT()));
		if (!bVar0)
		{
			bVar0 = Function_408("nnetlayout");
		}
	}
	return bVar0;
}

int Function_408(bool bParam0) //Position: 0xE894 / 59540
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
		bVar2 = CREATE_OBJECT_ITERATOR(Local_106);
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
					bLocal_386 = bVar4;
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

bool Function_409(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0xE91D / 59677
{
	if (!Function_451())
	{
		return 0;
	}
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(41))
	{
		if (Function_228(38) <= 10 && NET_GET_PLAYMODE() != 0)
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
		Function_446();
	}
	Function_444(3);
	Function_443();
	if (StackVal != 0)
	{
		Function_441(bLocal_41, *uParam1, uParam2, 1);
		Function_440(uParam0, uParam4);
	}
	if (StackVal >= bLocal_43)
	{
		bLocal_43 = StackVal;
	}
	if (NET_IS_HOST_OF_THIS_SCRIPT())
	{
		Function_437(uParam0);
	}
	switch (iLocal_17)
	{
		case 0x00000000:
		case 0x00000003:
			Function_422(63575, 62923);
			break;
		
		case 0x00000002:
			Function_422(60300, 59876);
			break;
		
		default:
			break;
	}
	return 1;
}

int Function_410(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0xE9E4 / 59876
{
	bool bVar0;
	bool bVar1;
	
	if (Global_76943[bParam096].f_24 == Global_78480.f_24)
	{
		Function_414(bParam1, uParam2, uParam3);
		bVar0 = Function_413(29, bParam0);
		bVar1 = false;
		if (!bParam1)
		{
			Function_411(bParam0, bVar0, 0);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_413(12, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_413(38, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_413(28, bParam0));
			bVar1++;
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, Function_135(bParam0));
			bVar1++;
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(bVar1, bVar0);
		}
	}
	return 0;
}

bool Function_411(bool bParam0, bool bParam1, int iParam2) //Position: 0xEA87 / 60039
{
	var uVar0;
	
	return Function_412(bParam0, bParam1, &uVar0, iParam2);
}

int Function_412(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xEA98 / 60056
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

int Function_413(int iParam0, bool bParam1) //Position: 0xEAFD / 60157
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_228(iParam0);
	}
	if (!Function_137(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 220)[iParam0];
}

void Function_414(bool bParam0, int iParam1, char* cParam2) //Position: 0xEB6B / 60267
{
	if (bParam0)
	{
		if (Function_127())
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

int Function_415() //Position: 0xEB8C / 60300
{
	if (!Function_416(1))
	{
		return 0;
	}
	if (Function_49(4096) || Function_49(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_43(8192, 1, 1);
	}
	else
	{
		Function_43(8192, 0, 1);
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

bool Function_416(bool bParam0) //Position: 0xEC48 / 60488
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_127() || Function_421(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_419(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_127())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_417(Function_127());
	return 1;
}

void Function_417(bool bParam0) //Position: 0xECC9 / 60617
{
	if (bParam0 || Function_49(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_49(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_49(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_49(1048576) || Function_49(4)) || Function_418(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_43(0x20000000, 0, 1);
	}
	return;
}

var Function_418(int iParam0, bool bParam1) //Position: 0xED52 / 60754
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

struct<64> Function_419(var uParam0) //Position: 0xED72 / 60786
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_420(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_420(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0xED86 / 60806
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

int Function_421(bool bParam0, bool bParam1) //Position: 0xEDCB / 60875
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

void Function_422(int iParam0, int iParam1) //Position: 0xEDFF / 60927
{
	Function_423(iParam0, iParam1, 62916);
	return;
}

void Function_423(var uParam0, var uParam1, int iParam2) //Position: 0xEE10 / 60944
{
	if (Function_49(0x4000000))
	{
		Function_47();
		Function_43(0x4000000, 0, 1);
	}
	if (Function_49(0x10000000))
	{
		Function_47();
		Function_43(0x10000000, 0, 1);
	}
	if (Function_49(2) != Function_49(0x2000000))
	{
		Function_47();
		Function_43(0x2000000, Function_49(2), 1);
	}
	if (Function_127())
	{
		Function_143(!Function_49(16));
	}
	if (Function_49(16))
	{
		Function_425(&uParam0, &uParam1, &iParam2);
		if (Function_49(8192))
		{
			if (!Function_49(4194304))
			{
				Function_43(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_49(8388608))
			{
				Function_43(8388608, 1, 1);
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
			Function_424();
		}
		Function_43(16384, 1, 1);
	}
	else if (!Function_49(32))
	{
		Function_424();
	}
	Function_43(32768, 0, 1);
	return;
}

void Function_424() //Position: 0xEFA9 / 61353
{
	if (Function_49(4194304))
	{
		Function_43(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_49(8388608))
	{
		Function_43(8388608, 0, 1);
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

void Function_425(var uParam0, var uParam1, int iParam2) //Position: 0xF0B2 / 61618
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_43(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_49(0x40000000);
	bVar3 = !Function_49(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_137(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_426(bVar1, 2048, 1))
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
				if (Function_411(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_49(4))
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
			if (Function_411(bVar1, (4294966296 - bVar1), 1))
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

bool Function_426(bool bParam0, int iParam1, bool bParam2) //Position: 0xF22A / 61994
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_418(iParam1, bParam2);
	}
	if (!Function_137(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_427(iParam1), 64);
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

var Function_427(int iParam0) //Position: 0xF2AB / 62123
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

int Function_428() //Position: 0xF5C4 / 62916
{
	return 1;
}

int Function_429(bool bParam0, bool bParam1, int iParam2, char* cParam3) //Position: 0xF5CB / 62923
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* cVar7[32];
	bool bVar15;
	struct<8> Var16;
	bool bVar24;
	
	Function_414(bParam1, iParam2, cParam3);
	iVar0 = Function_433(bParam0);
	iVar2 = NET_GET_GAMER_POSSE_SIZE(bParam0);
	bVar3 = NET_GET_GAMER_POSSE_LEADER(bParam0);
	bVar4 = (iVar2 < 1 && bVar3 != bParam0);
	if (bLocal_16)
	{
		bVar1 = (iVar2 * 10000000);
		iVar5 = 16;
		if (iVar2 >= 1)
		{
			iVar5 = (16 - bVar3) * 10;
			if (bVar4)
			{
				iVar5++;
			}
		}
		bVar1 = (bVar1 + iVar5 * 10000);
		bVar1 = (bVar1 + Function_28((CEIL(Function_432(1, bParam0)) / 1000), 9999));
	}
	else
	{
		bVar1 = FLOOR(Function_432(8, bParam0));
	}
	if (!bParam1)
	{
		Function_411(bParam0, bVar1, 0);
	}
	iVar6 = 0;
	if (Function_431(1) > 0)
	{
		strcpy(&cVar7, "", 32);
		if (Function_431(1) == Function_433(bParam0))
		{
			if (Function_426(bParam0, 0x8000000, 1))
			{
				strcpy(&cVar7, "<MP_DEFEND> ", 32);
			}
			else
			{
				strcpy(&cVar7, "<SPACE> ", 32);
			}
			if (Function_432(2, bParam0) > 0.0f)
			{
				stradd(&cVar7, "--:--", 32);
			}
			else
			{
				bVar15 = CEIL(Function_432(2, bParam0));
				stradd(&cVar7, I2STR((bVar15 / 60)), 32);
				stradd(&cVar7, ":", 32);
				straddi(&cVar7, ((bVar15 % 60) / 10), 32);
				straddi(&cVar7, ((bVar15 % 60) % 10), 32);
			}
		}
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_430(&iVar6), &cVar7);
	}
	Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55(iVar0) };
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_430(&iVar6), UI_GET_STRING(&Var16));
	bVar24 = Function_432(8, bParam0);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_430(&iVar6), FLOOR(bVar24));
	if (bLocal_16)
	{
		if (bVar4)
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_INT(Function_430(&iVar6), FLOOR(Function_432(9, bParam0)));
		}
		else
		{
			Function_430(&iVar6);
		}
	}
	if (Function_426(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(Function_430(&iVar6), "<SKULL>");
	}
	return 0;
}

var Function_430(int iParam0) //Position: 0xF78C / 63372
{
	*iParam0++;
	return (*iParam0 - 1);
}

int Function_431(int iParam0) //Position: 0xF79F / 63391
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

float Function_432(int iParam0, bool bParam1) //Position: 0xF7BF / 63423
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_37(iParam0);
	}
	if (!Function_137(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

int Function_433(bool bParam0) //Position: 0xF828 / 63528
{
	if (!Function_137(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_434();
	}
	return Global_76943[bParam096];
}

var Function_434() //Position: 0xF84D / 63565
{
	return Global_78480;
}

int Function_435() //Position: 0xF857 / 63575
{
	bool bVar0;
	int iVar1;
	
	if (!Function_416(1))
	{
		return 0;
	}
	bVar0 = false;
	bLocal_16 = false;
	while (bVar0 > 16 && !bLocal_16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			bLocal_16 = NET_GET_GAMER_POSSE_SIZE(bVar0) < 1;
		}
		bVar0++;
	}
	NET_PLAYER_LIST_SET_TEAM_SORT(0);
	NET_PLAYER_LIST_SET_HEADER(0, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	iVar1 = 2;
	if (Function_431(1) > 0)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_430(&iVar1), "FRD_StakeHolder");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_430(&iVar1), "mp_plist_region");
	NET_PLAYER_LIST_SET_HEADER(Function_430(&iVar1), "mp_plist_score_alt");
	if (bLocal_16)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_430(&iVar1), "mp_plist_posse");
	}
	NET_PLAYER_LIST_SET_HEADER(Function_430(&iVar1), "mp_plist_mw");
	Function_436();
	bVar0 = iVar1;
	while (bVar0 < 6)
	{
		NET_PLAYER_LIST_SET_HEADER(Function_430(&iVar1), "Common_Null");
		bVar0++;
	}
	return 1;
}

void Function_436() //Position: 0xF97A / 63866
{
	if (Function_49(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_43(8192, 1, 1);
	}
	else if (Function_49(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_43(8192, 1, 1);
	}
	else
	{
		Function_43(8192, 0, 1);
	}
	return;
}

void Function_437(int iParam0) //Position: 0xF9B7 / 63927
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
	(iParam0 + 16)->f_24 = iLocal_21;
	if (iVar0 >= (iParam0 + 16)->f_20)
	{
		(iParam0 + 16)->f_20 = iVar0;
	}
	if (iLocal_18)
	{
		Function_439(&bLocal_19);
		iLocal_18 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= iLocal_23)
	{
		if (iLocal_23[iVar1] >= 4294967295)
		{
			iLocal_23[iVar1] = 4294967295;
			Function_438(iVar1);
		}
		iVar1++;
	}
	return;
}

void Function_438(int iParam0) //Position: 0xFA30 / 64048
{
	struct<13> Var0;
	
	Var0 = 1;
	Var0.f_4 = iParam0;
	Var0.f_8 = GET_LOCAL_SLOT();
	Var0.f_12 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 77, &Var0, 4, 1);
	return;
}

void Function_439(int iParam0) //Position: 0xFA5B / 64091
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

void Function_440(var uParam0, bool bParam1) //Position: 0xFAA2 / 64162
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	bool bVar6;
	
	if (!IS_ITERATOR_VALID(bLocal_42))
	{
		return;
	}
	bVar0 = OBJECT_ITERATOR_CURRENT(bLocal_42);
	if (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_IN_ACTORSET(bLocal_19, bVar1))
			{
				bVar2 = StackVal;
				if (IS_VOLUME_VALID(bVar2))
				{
					if (!IS_ACTOR_IN_VOLUME(bVar1, bVar2))
					{
						if (!DECOR_CHECK_EXIST(bVar1, "out_of_bounds_time"))
						{
							Function_104(bVar1);
							vVar3 = { StackVal, StackVal, Function_104(bVar1) };
							DECOR_SET_FLOAT(bVar1, "out_of_bounds_time", GET_CURRENT_GAME_TIME());
						}
						else if (GET_CURRENT_GAME_TIME() < (DECOR_GET_FLOAT(bVar1, "out_of_bounds_time") + fLocal_44))
						{
							bVar6 = GET_BLIP_ON_ACTOR(bVar1);
							if (IS_BLIP_VALID(bVar6))
							{
								REMOVE_BLIP(bVar6);
							}
							if (bParam1)
							{
								CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
							}
							REMOVE_ACTORSET_MEMBER(bLocal_19, bVar1);
							SQUAD_LEAVE(bVar1);
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
		OBJECT_ITERATOR_NEXT(bLocal_42);
	}
	else
	{
		START_OBJECT_ITERATOR(bLocal_42);
	}
	return;
}

int Function_441(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0xFBED / 64493
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
						if (Function_442(bVar4) == bParam1)
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

int Function_442(bool bParam0) //Position: 0xFCCF / 64719
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

void Function_443() //Position: 0xFD29 / 64809
{
	Function_444(4);
	return;
}

void Function_444(int iParam0) //Position: 0xFD33 / 64819
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
			Function_445(iParam0);
		}
	}
	return;
}

void Function_445(int iParam0) //Position: 0xFD65 / 64869
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_446() //Position: 0xFD74 / 64884
{
	bool bVar0;
	
	if (!iLocal_22)
	{
		bVar0 = Function_51();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTORSET_VALID(bLocal_19))
			{
				if (Function_448(bVar0, bLocal_19, 1, 0, 0, -1.0f))
				{
					Function_447();
					iLocal_22 = 1;
				}
			}
		}
	}
	return;
}

void Function_447() //Position: 0xFDA9 / 64937
{
	int iVar0;
	
	iVar0 = STRING_TO_HASH(GET_SHORT_SCRIPT_NAME());
	NET_SCRIPTMSG_SEND(3, 80, &iVar0, 1, 1);
	return;
}

bool Function_448(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xFDC2 / 64962
{
	bool bVar0;
	
	if (!IS_ACTORSET_VALID(bParam1) || !IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (Function_450(bParam1, 0, 0, 0, 0, 0) < 0)
	{
		return 0;
	}
	if (bLocal_48 > GET_ACTORSET_SIZE(bParam1))
	{
		bLocal_48 = false;
	}
	bVar0 = GET_ACTOR_FROM_ACTORSET(bParam1, bLocal_48);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_449(bParam0, bVar0, uParam2, uParam3, uParam4, uParam5))
		{
			return 1;
		}
	}
	bLocal_48++;
	return 0;
}

bool Function_449(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xFE2B / 65067
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
		if (fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, fParam5))
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
		if (fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, fParam5))
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

int Function_450(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xFF18 / 65304
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

bool Function_451() //Position: 0xFFC6 / 65478
{
	int iVar0;
	
	if (!Function_38())
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

void Function_452(bool bParam0) //Position: 0xFFE9 / 65513
{
	if (Function_453(bParam0))
	{
		Function_301(bParam0, NET_ACTOR_GET_SCRIPT_INT(bParam0));
		ADD_ACTOR_STAY_WITHIN_VOLUME(StackVal, bParam0);
	}
	else if (NET_ACTOR_GET_SCRIPT_INT(bParam0) == 199)
	{
		bLocal_387 = bParam0;
	}
	return;
}

bool Function_453(bool bParam0) //Position: 0x10025 / 65573
{
	bool bVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return 0;
	}
	if (Function_454(bParam0))
	{
		if (!IS_ACTOR_IN_ACTORSET(bLocal_19, bParam0))
		{
			ADD_ACTORSET_MEMBER(bLocal_19, bParam0);
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

bool Function_454(bool bParam0) //Position: 0x10072 / 65650
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

bool Function_455(int iParam0) //Position: 0x1009F / 65695
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
	Function_64();
	if (!Function_470(16, 0))
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
	Function_275(iParam0 + 16 + 8);
	Function_312(iParam0, 66759);
	iVar1 = 0;
	while (iVar1 <= Local_51)
	{
		Local_51[iVar12] = 4294967295;
		Local_51[iVar12].f_4 = 2;
		iVar1++;
	}
	Local_49 = 4294967295;
	Local_49.f_4 = 2;
	iVar2 = 0;
	while (iVar2 <= iLocal_23)
	{
		iLocal_23[iVar2] = 4294967295;
		iVar2++;
	}
	Function_461(2);
	Function_460(1);
	iVar3 = 66131;
	NET_SCRIPTMSG_REGISTER_HANDLER(8, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(78, iVar3);
	NET_SCRIPTMSG_REGISTER_HANDLER(77, 66012);
	NET_SCRIPTMSG_REGISTER_HANDLER(80, 65973);
	return 1;
}

void Function_456(int iParam0) //Position: 0x101B5 / 65973
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 1);
	if (NET_IS_HOST_OF_THIS_SCRIPT() && !iLocal_21)
	{
		if (iVar0 == STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()))
		{
			iLocal_21 = 1;
		}
	}
	return;
}

void Function_457(int iParam0) //Position: 0x101DC / 66012
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
					iLocal_20 = 1;
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
						iLocal_23[StackVal] = StackVal;
					}
				}
			}
		}
	}
	return;
}

void Function_458(int iParam0) //Position: 0x10253 / 66131
{
	struct<13> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	bVar4 = Var0;
	if (StackVal || (StackVal != STRING_TO_HASH(GET_SHORT_SCRIPT_NAME()) && Var0.f_12 != Global_29006))
	{
		if (IS_SLOT_VALID(bVar4))
		{
			bVar5 = GET_SLOT_ACTOR(bVar4);
			if (IS_ACTORSET_VALID(bLocal_19))
			{
				Function_459(&bLocal_19, &bVar5);
			}
		}
	}
	return;
}

void Function_459(var uParam0, int iParam1) //Position: 0x102A0 / 66208
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

void Function_460(int iParam0) //Position: 0x102F5 / 66293
{
	Function_53(&Global_83864 + 1252, iParam0);
	return;
}

void Function_461(int iParam0) //Position: 0x10307 / 66311
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
	Function_173();
	Function_174();
	switch (iParam0)
	{
		case 0x00000001:
			Function_52(12288);
			Function_60(16384);
			break;
		
		case 0x00000002:
			Function_52(20480);
			Function_60(8192);
			break;
		
		default:
			Function_60(28672);
			break;
	}
	Function_60(2048);
	Function_463(0, 0);
	Function_462();
	return;
}

void Function_462() //Position: 0x103CB / 66507
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_463(bool bParam0, bool bParam1) //Position: 0x103E4 / 66532
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_468(&Global_78480);
	Function_467(&Global_78480);
	uVar0 = Function_228(37);
	Function_465();
	if (!bParam0)
	{
		Function_224(37, uVar0);
	}
	Function_99(18264, 0);
	Function_464();
	return;
}

void Function_464() //Position: 0x10430 / 66608
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_465() //Position: 0x1044F / 66639
{
	Function_466(&Global_78480 + 220);
	return;
}

void Function_466(int iParam0) //Position: 0x1045E / 66654
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

void Function_467(int iParam0) //Position: 0x1047F / 66687
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

void Function_468(int iParam0) //Position: 0x104A3 / 66723
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

void Function_469(var uParam0) //Position: 0x104C7 / 66759
{
	uParam0 = uParam0;
	return;
}

bool Function_470(var uParam0, bool bParam1) //Position: 0x104D1 / 66769
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	iVar1 = NET_GET_SCRIPT_STATUS();
	bVar2 = Function_471("freemodetest");
	while (iVar1 == 2 && !IS_EXITFLAG_SET())
	{
		WAIT(false);
		if (bVar2)
		{
			DRAW_STRING_CURRENT_FONT(0.05f, 0.05f, "Registering Net Script...", 1.0f, 1.0f, 1.0f, 1.0f);
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

int Function_471(bool bParam0) //Position: 0x10584 / 66948
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

