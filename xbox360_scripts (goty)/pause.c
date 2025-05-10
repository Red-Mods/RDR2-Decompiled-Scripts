//Decompiled with MagicRDR v1.0
//Function Count : 322
//Statics Count : 61
//Natives Count : 394
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	float fLocal_28 = 0.0f;
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
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iLocal_25 = 31;
	iLocal_26 = 33;
	iLocal_27 = 1;
	fLocal_28 = 2.0f;
	REQUEST_STRING_TABLE("blips");
	REQUEST_STRING_TABLE("stats");
	bVar0 = !Global_34165.f_44;
	bVar1 = true;
	Function_317(&Global_34581, &Global_35278, 0);
	Function_309();
	Function_308();
	if (Function_307(StackVal) >= 0 || Function_306())
	{
		UI_EXIT("pauseBounty");
		UI_EXIT("pauseBountyValue");
		UI_EXCLUDE("pauseBounty");
		UI_EXCLUDE("pauseBountyValue");
	}
	else
	{
		UI_SET_MONEY(StackVal, "BountyAmount", Function_307("PlayerBounty"));
		UI_INCLUDE("pauseBounty");
		UI_INCLUDE("pauseBountyValue");
		UI_ENTER("pauseBounty");
		UI_ENTER("pauseBountyValue");
		UI_REFRESH("pauseBounty");
		UI_REFRESH("pauseBountyValue");
	}
	if (Function_306())
	{
		if (!Function_304(64) || NET_GET_PLAYMODE() == 0)
		{
			UI_EXIT("pauseMoney");
			UI_EXIT("pauseMoneyValue");
			UI_EXCLUDE("pauseMoney");
			UI_EXCLUDE("pauseMoneyValue");
		}
		else
		{
			UI_INCLUDE("pauseMoney");
			UI_INCLUDE("pauseMoneyValue");
			UI_ENTER("pauseMoney");
			UI_ENTER("pauseMoneyValue");
			UI_REFRESH("pauseMoney");
			UI_REFRESH("pauseMoneyValue");
		}
	}
	else
	{
		UI_INCLUDE("pauseMoney");
		UI_INCLUDE("pauseMoneyValue");
		UI_ENTER("pauseMoney");
		UI_ENTER("pauseMoneyValue");
		UI_REFRESH("pauseMoney");
		UI_REFRESH("pauseMoneyValue");
	}
	bVar2 = false;
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	if (DECOR_CHECK_EXIST(Global_34573, "SwitchOutfitsCamp"))
	{
		DECOR_REMOVE(Global_34573, "SwitchOutfitsCamp");
	}
	else if (DECOR_CHECK_EXIST(Global_34573, "SwitchOutfitsHouse"))
	{
		DECOR_REMOVE(Global_34573, "SwitchOutfitsHouse");
	}
	else
	{
		SATCHEL_ALLOW_OUTFIT_CHANGE(0);
	}
	if (Global_34108[0])
	{
		if (!GET_ACTOR_INVULNERABILITY(Global_34573))
		{
			Global_34108[0] = 0;
			UI_CHEAT_SET_VALUE(0, 0);
		}
	}
	Function_303();
	Function_302();
	iLocal_59 = GET_TARGETED_JOURNAL_ENTRY();
	while (!IS_EXITFLAG_SET())
	{
		if ((bVar1 && (UI_ISFOCUSED("PM_Stats") || UI_ISFOCUSED("PM_Collections"))) && HAS_STRING_TABLE_LOADED("stats"))
		{
			bVar1 = false;
			Function_317(&Global_34581, &Global_35278, 0);
		}
		else if (!(UI_ISFOCUSED("PM_Stats") || UI_ISFOCUSED("PM_Collections")))
		{
			bVar1 = true;
		}
		Function_297();
		if (!Global_88794 && bVar0)
		{
			Function_308();
			bVar0 = false;
		}
		Function_296();
		Function_295();
		Function_270();
		Function_268();
		Function_258();
		Function_228();
		if (bVar2)
		{
			Function_220(&uLocal_29);
		}
		WAIT(false);
	}
	Function_14();
	Function_5();
	if (bVar2)
	{
		Function_4(&uLocal_29);
	}
	REMOVE_STRING_TABLE("stats");
	REMOVE_STRING_TABLE("blips");
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	if (Function_306())
	{
		switch (GET_PLAYER_COMBATMODE())
		{
			case 0x00000000:
				Function_1(1572864, 0);
				break;
			
			case 0x00000001:
				Function_1(524288, 0);
				Function_1(1048576, 1);
				break;
			
			case 0x00000002:
				Function_1(524288, 1);
				Function_1(1048576, 0);
				break;
			}
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0, bool bParam1) //Position: 0x476 / 1142
{
	if (bParam1)
	{
		Function_3(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_2(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_2(int iParam0, int iParam1) //Position: 0x4B1 / 1201
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x4C4 / 1220
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_4(var uParam0) //Position: 0x4D3 / 1235
{
	if (IS_OBJECT_VALID(uParam0->f_60))
	{
		REMOVE_CAMERA_FROM_CHANNEL(uParam0->f_60, 0);
		DESTROY_CAMERA(uParam0->f_60);
	}
	if (IS_OBJECT_VALID(uParam0->f_64))
	{
		DEREFERENCE_OBJECT(uParam0->f_64);
	}
	STREAMING_SET_CUTSCENE_MODE(0);
	STREAMING_UNLOAD_SCENE();
	STREAMING_SET_POI_LIMIT(1);
	Global_30841 = 1;
	return;
}

void Function_5() //Position: 0x512 / 1298
{
	int iVar0;
	
	if (Function_306())
	{
		return;
	}
	iVar0 = GET_TARGETED_JOURNAL_ENTRY();
	if (iVar0 != 0 || iVar0 != 4294967295)
	{
		return;
	}
	if (!GET_JOURNAL_ENTRY_TYPE(iVar0) != 4)
	{
		return;
	}
	if (iVar0 != Global_26303.f_36 && Function_12() != 1)
	{
		Function_6();
	}
	return;
}

int Function_6() //Position: 0x552 / 1362
{
	vector3 vVar0;
	
	if (Function_12() == 0)
	{
		LOG_ERROR("Attempting to hunt to an invalid bounty hunter target");
		return 0;
	}
	if (StackVal || !Function_11(Global_26303.f_24) != 1)
	{
		LOG_ERROR("Attempting to hunt at an invalid region");
		return 0;
	}
	GET_VOLUME_CENTER(StackVal, &vVar0);
	Function_10();
	Function_8(StackVal, StackVal, vVar0, 4, 131088, 1);
	Function_7(0.7f, 0.0f, 0.0f);
	return 1;
}

void Function_7(var uParam0, var uParam1, bool bParam2) //Position: 0x612 / 1554
{
	Global_28185.f_60 = 5;
	Global_28185.f_64 = uParam0;
	Global_28185.f_68 = uParam1;
	Global_28185.f_72 = bParam2;
	return;
}

void Function_8(vector3 vParam0, var uParam3, var uParam4, var uParam5) //Position: 0x633 / 1587
{
	*(&Global_28185 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28185 + 36) = { StackVal, StackVal, vParam0 };
	Global_28185 = 2;
	Global_28185.f_4 = 0;
	Global_28185.f_60 = uParam3;
	Global_28185.f_16 = uParam4;
	if (uParam4 & 16 >= 0)
	{
		Global_28185.f_16 |= 131072;
	}
	if (uParam4 & 32 >= 0)
	{
		Global_28185.f_16 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28185.f_12) >= 0)
	{
		Function_9(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = uParam5;
}

void Function_9(bool bParam0) //Position: 0x6EF / 1775
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

void Function_10() //Position: 0x72F / 1839
{
	if (Global_28235 == 3)
	{
		Global_28235.f_4 = 3;
	}
	*(&Global_28235 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28235 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(2);
	return;
}

bool Function_11(int iParam0) //Position: 0x75A / 1882
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_12() //Position: 0x770 / 1904
{
	return Function_13(StackVal, 1);
}

bool Function_13(bool bParam0, bool bParam1) //Position: 0x77F / 1919
{
	return (bParam0 && bParam1) == 0;
}

void Function_14() //Position: 0x78C / 1932
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 56)
	{
		if (UI_CHEAT_GET_STATE(iVar0) == 1)
		{
			iVar2 = UI_CHEAT_GET_VALUE(iVar0);
			if (Global_34108[iVar0])
			{
				if (iVar2 == 0)
				{
					if (Function_18(iVar0, 0, &bVar1))
					{
						Global_34108[iVar0] = 0;
						UI_CHEAT_SET_VALUE(iVar0, 0);
					}
				}
			}
			else if (iVar2 == 1)
			{
				if (!Function_18(iVar0, 1, &bVar1))
				{
					Global_34108[iVar0] = 0;
					UI_CHEAT_SET_VALUE(iVar0, 0);
				}
				else
				{
					Global_34108[iVar0] = 1;
				}
			}
			if (bVar1)
			{
				UI_CHEAT_SET_VALUE(iVar0, 0);
				Global_34108[iVar0] = 0;
				Function_15("no_cheat_mission", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		iVar0++;
	}
	return;
}

void Function_15(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x83F / 2111
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_16(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_16(int iParam0) //Position: 0x8BA / 2234
{
	char* cVar0[16];
	
	if (!Function_17())
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

bool Function_17() //Position: 0x8F9 / 2297
{
	if (Function_13(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_18(int iParam0, bool bParam1, int iParam2) //Position: 0x914 / 2324
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	int iVar15;
	
	*iParam2 = 0;
	switch (iParam0)
	{
		case 0x00000000:
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (bParam1)
				{
					UI_SET_HAS_CHEATED(1);
					SET_ACTOR_INVULNERABILITY(Global_34573, 1);
					return 1;
				}
				SET_ACTOR_INVULNERABILITY(Global_34573, 0);
				return 1;
			}
			break;
		
		case 0x00000001:
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				if (bParam1)
				{
					UI_SET_HAS_CHEATED(1);
					SET_DEADEYE_REGENERATION_RATE(0, 100.0f, 0);
					return 1;
				}
				SET_DEADEYE_REGENERATION_RATE(0, 0.25f, 0);
				return 1;
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (bParam1)
				{
					UI_SET_HAS_CHEATED(1);
					iVar0 = 0;
					while (iVar0 <= 17)
					{
						_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, iVar0, true);
						iVar0++;
					}
					return 1;
				}
				iVar0 = 0;
				while (iVar0 <= 17)
				{
					_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, iVar0, false);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				Function_219(500, 1);
				UI_CHEAT_SET_VALUE(6, 0);
				UI_SET_HAS_CHEATED(1);
				return 0;
			}
			break;
		
		case 0x0000000A:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_218(4096);
				Function_218(8192);
				Function_218(16384);
				return 1;
			}
			Function_217(4096);
			Function_217(8192);
			Function_217(16384);
			return 1;
			break;
		
		case 0x0000000B:
			if (bParam1)
			{
				Function_216(StackVal, 500);
				UI_CHEAT_SET_VALUE(11, 0);
				UI_SET_HAS_CHEATED(1);
				return 0;
			}
			break;
		
		case 0x0000000C:
			if (bParam1)
			{
				Function_215(StackVal, 500);
				UI_CHEAT_SET_VALUE(12, 0);
				UI_SET_HAS_CHEATED(1);
				return 0;
			}
			break;
		
		case 0x0000000D:
			if (bParam1)
			{
				Function_212(StackVal, 0);
				Function_210(0);
				Global_26401.f_2212 = 0;
				(*&Global_26401 + 36[11181][35])[0] = StackVal;
				Function_209();
				RELEASE_LAYOUT_OBJECTS(Global_26314);
				if (IS_SCRIPT_VALID(Global_26316.f_60))
				{
					TERMINATE_SCRIPT(Global_26316.f_60);
				}
				UI_CHEAT_SET_VALUE(13, 0);
				UI_SET_HAS_CHEATED(1);
				return 0;
			}
			break;
		
		case 0x00000013:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_208(3, 10000, 0);
				Function_206(4, "sr_ntr6", 1, 1);
				UI_CHEAT_SET_VALUE(19, 0);
				Global_12976.f_156 = 5;
				return 0;
			}
			break;
		
		case 0x00000014:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_208(3, 0, 0);
				Function_206(4, "sr_ntr1", 1, 1);
				UI_CHEAT_SET_VALUE(20, 0);
				Global_12976.f_156 = 0;
				return 0;
			}
			break;
		
		case 0x00000015:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_208(1, 5000, 0);
				Function_206(2, "sr_hnr1", 1, 1);
				Global_12976.f_152 = 6;
				UI_CHEAT_SET_VALUE(21, 0);
				return 0;
			}
			break;
		
		case 0x00000016:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_208(1, 4294962296, 0);
				Function_206(2, "sr_hnr7", 1, 1);
				Global_12976.f_152 = 0;
				UI_CHEAT_SET_VALUE(22, 0);
				return 0;
			}
			break;
		
		case 0x00000017:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_208(1, 0, 0);
				Function_206(2, "sr_hnr4", 1, 1);
				Global_12976.f_152 = 3;
				UI_CHEAT_SET_VALUE(23, 0);
				return 0;
			}
			break;
		
		case 0x0000001D:
			if (bParam1)
			{
				if (((Function_205(0, 0, 1, 1) || Function_201(Global_34573, 0, 0)) || Function_200()) || Global_63096)
				{
					*iParam2 = 1;
					return 0;
				}
				DECOR_SET_INT(Global_34573, "iDrunk", 4294967295);
				UI_SET_HAS_CHEATED(1);
				return 1;
			}
			DECOR_SET_INT(Global_34573, "iDrunk", false);
			return 1;
			break;
		
		case 0x0000000E:
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (bParam1)
				{
					UI_SET_HAS_CHEATED(1);
					SET_WEAPONENUM_LOCKED(false, 0);
					SET_WEAPONENUM_LOCKED(12, 0);
					SET_WEAPONENUM_LOCKED(16, 0);
					GIVE_WEAPON_TO_ACTOR(Global_34573, false, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 12, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 16, 1.0f, 0, 1);
					UI_CHEAT_SET_VALUE(14, 0);
					return 0;
				}
			}
			break;
		
		case 0x0000000F:
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (bParam1)
				{
					UI_SET_HAS_CHEATED(1);
					SET_WEAPONENUM_LOCKED(5, 0);
					SET_WEAPONENUM_LOCKED(true, 0);
					SET_WEAPONENUM_LOCKED(9, 0);
					SET_WEAPONENUM_LOCKED(14, 0);
					SET_WEAPONENUM_LOCKED(15, 0);
					SET_WEAPONENUM_LOCKED(23, 0);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 5, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, true, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 9, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 14, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 23, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 15, 1.0f, 0, 1);
					_ADD_AMMO_OF_TYPE(Global_34573, 4, 3.0f, 0, 1);
					UI_CHEAT_SET_VALUE(15, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000010:
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (bParam1)
				{
					UI_SET_HAS_CHEATED(1);
					SET_WEAPONENUM_LOCKED(6, 0);
					SET_WEAPONENUM_LOCKED(2, 0);
					SET_WEAPONENUM_LOCKED(10, 0);
					SET_WEAPONENUM_LOCKED(19, 0);
					SET_WEAPONENUM_LOCKED(24, 0);
					SET_WEAPONENUM_LOCKED(17, 0);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 6, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 2, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 10, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 19, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 24, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 17, 1.0f, 0, 1);
					_ADD_AMMO_OF_TYPE(Global_34573, 5, 3.0f, 0, 1);
					UI_CHEAT_SET_VALUE(16, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000011:
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (bParam1)
				{
					UI_SET_HAS_CHEATED(1);
					SET_WEAPONENUM_LOCKED(7, 0);
					SET_WEAPONENUM_LOCKED(3, 0);
					SET_WEAPONENUM_LOCKED(11, 0);
					SET_WEAPONENUM_LOCKED(13, 0);
					SET_WEAPONENUM_LOCKED(20, 0);
					SET_WEAPONENUM_LOCKED(25, 0);
					SET_WEAPONENUM_LOCKED(18, 0);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 7, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 3, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 11, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 13, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 20, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 25, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 18, 1.0f, 0, 1);
					_ADD_AMMO_OF_TYPE(Global_34573, 3, 3.0f, 0, 1);
					UI_CHEAT_SET_VALUE(17, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000018:
			if (!Function_205(0, 0, 1, 1))
			{
				UI_SET_HAS_CHEATED(1);
				iVar1 = Function_199();
				iVar1++;
				if (iVar1 >= 5)
				{
					iVar1 = 0;
				}
				Function_198(iVar1, 0);
				Global_16524 = iVar1;
				UI_CHEAT_SET_VALUE(24, 0);
				return 0;
			}
			if (bParam1)
			{
				*iParam2 = 1;
			}
			break;
		
		case 0x00000008:
			if ((!Function_205(0, 0, 1, 1) && !Global_63096) && !Global_3387)
			{
				if (bParam1)
				{
					if (IS_POPSET_VALID(Global_30750[6]))
					{
						UI_SET_HAS_CHEATED(1);
						bVar2 = Function_197(Global_30750[6], 0, 23, 0);
					}
					else
					{
						bVar2 = 976;
					}
					if (Function_196(bVar2))
					{
						STREAMING_REQUEST_ACTOR(bVar2, true, false);
						GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar3);
						GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar6);
						VSCALE(&vVar3, -7.0f);
						vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar6, StackVal) };
						FIND_GROUND_INTERSECTION(&vVar6, 80.0f, &vVar9, &uVar12);
						if (IS_ACTOR_VALID(Global_34107))
						{
							if (GET_VEHICLE(Global_34573) == Global_34107)
							{
								TASK_VEHICLE_LEAVE(Global_34573);
							}
							else if (GET_MOUNT(Global_34573) == Global_34107)
							{
								ACTOR_DISMOUNT_NOW(Global_34573);
							}
							DESTROY_ACTOR(Global_34107);
						}
						Global_34107 = CREATE_ACTOR_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_195(), bVar2, vVar9, 0.0f, 0.0f, 0.0f);
						ACCESSORIZE_HORSE(Global_34107, 3);
						STREAMING_EVICT_ACTOR(bVar2, 4294967295);
						RELEASE_ACTOR(Global_34107);
						UI_CHEAT_SET_VALUE(8, 0);
						return 0;
					}
				}
			}
			if (bParam1)
			{
				*iParam2 = 1;
			}
			break;
		
		case 0x00000007:
			if ((!Function_205(0, 0, 1, 1) && !Global_63096) && !Global_3387)
			{
				if (bParam1)
				{
					UI_SET_HAS_CHEATED(1);
					bVar2 = 1000;
					if (Function_196(bVar2))
					{
						STREAMING_REQUEST_ACTOR(bVar2, true, false);
						GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar3);
						GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar6);
						VSCALE(&vVar3, -7.0f);
						vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar6, StackVal) };
						FIND_GROUND_INTERSECTION(&vVar6, 80.0f, &vVar9, &uVar12);
						if (IS_ACTOR_VALID(Global_34107))
						{
							if (GET_VEHICLE(Global_34573) == Global_34107)
							{
								TASK_VEHICLE_LEAVE(Global_34573);
							}
							else if (GET_MOUNT(Global_34573) == Global_34107)
							{
								ACTOR_DISMOUNT_NOW(Global_34573);
							}
							DESTROY_ACTOR(Global_34107);
						}
						Global_34107 = CREATE_ACTOR_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_195(), bVar2, vVar9, 0.0f, 0.0f, 0.0f);
						ACCESSORIZE_HORSE(Global_34107, 3);
						STREAMING_EVICT_ACTOR(bVar2, 4294967295);
						RELEASE_ACTOR(Global_34107);
						UI_CHEAT_SET_VALUE(7, 0);
						return 0;
					}
				}
			}
			if (bParam1)
			{
				*iParam2 = 1;
			}
			break;
		
		case 0x00000009:
			if ((!Function_205(0, 0, 1, 1) && !Global_63096) && !Global_3387)
			{
				if (bParam1)
				{
					if (IS_POPSET_VALID(Global_30750[9]))
					{
						UI_SET_HAS_CHEATED(1);
						bVar2 = Function_197(Global_30750[9], 0, 0, 0);
					}
					else
					{
						bVar2 = 1177;
					}
					if (Function_196(bVar2))
					{
						STREAMING_REQUEST_ACTOR(bVar2, true, false);
						GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar3);
						GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar6);
						VSCALE(&vVar3, -7.0f);
						vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar6, StackVal) };
						FIND_GROUND_INTERSECTION(&vVar6, 80.0f, &vVar9, &uVar12);
						if (IS_ACTOR_VALID(Global_34107))
						{
							if (GET_VEHICLE(Global_34573) == Global_34107)
							{
								TASK_VEHICLE_LEAVE(Global_34573);
							}
							else if (GET_MOUNT(Global_34573) == Global_34107)
							{
								ACTOR_DISMOUNT_NOW(Global_34573);
							}
							DESTROY_ACTOR(Global_34107);
						}
						Global_34107 = Function_191(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_195(), bVar2, 4294967295, vVar9, 0.0f, 0.0f, 0.0f, 1, 976, 976, 976, 4);
						STREAMING_EVICT_ACTOR(bVar2, 4294967295);
						RELEASE_ACTOR(Global_34107);
						UI_CHEAT_SET_VALUE(9, 0);
						return 0;
					}
				}
			}
			if (bParam1)
			{
				*iParam2 = 1;
			}
			break;
		
		case 0x0000001E:
			if (bParam1)
			{
				Function_190(3, 0, 1);
				Function_190(15, 0, 1);
				Function_190(11, 0, 1);
				Function_190(1, 0, 1);
				UI_SET_HAS_CHEATED(1);
				UI_CHEAT_SET_VALUE(30, 0);
				return 0;
			}
			break;
		
		case 0x0000001F:
			if (bParam1)
			{
				if (Function_189(57, 0))
				{
					Function_190(12, 0, 1);
					Function_190(10, 0, 1);
					Function_190(9, 0, 1);
					UI_SET_HAS_CHEATED(1);
					UI_CHEAT_SET_VALUE(31, 0);
					return 0;
				}
				*iParam2 = 1;
			}
			break;
		
		case 0x00000020:
			if (bParam1)
			{
				if (IS_PS3() || Function_188())
				{
					Function_190(4, 0, 1);
				}
				Function_190(5, 0, 1);
				Function_190(6, 0, 1);
				Function_190(7, 0, 1);
				Function_190(8, 0, 1);
				UI_SET_HAS_CHEATED(1);
				UI_CHEAT_SET_VALUE(32, 0);
				return 0;
			}
			break;
		
		case 0x00000021:
			if (bParam1)
			{
				Function_186(&Global_30640);
				Function_186(&Global_30668);
				Function_186(&Global_30658);
				Function_186(&Global_30679);
				Function_186(&Global_30685);
				Function_186(&Global_30693);
				Function_186(&Global_30707);
				Function_186(&Global_30723);
				Function_186(&Global_30717);
				Function_183(Global_30628[0]);
				Function_183(Global_30628[1]);
				Function_183(Global_30628[2]);
				Function_183(Global_30628[3]);
				Function_183(Global_30633[0]);
				Function_183(Global_30633[2]);
				Function_183(Global_30633[1]);
				Function_183(Global_30637[0]);
				Function_183(Global_30637[1]);
				UI_SET_HAS_CHEATED(1);
				UI_CHEAT_SET_VALUE(33, 0);
				return 0;
			}
			break;
		
		case 0x00000022:
			if ((!Function_205(0, 0, 1, 1) && !Function_201(Global_34573, 0, 0)) && !Global_63096)
			{
				if (bParam1)
				{
					HUD_FADE_OUT(0.0f, 1f, 1);
					iVar15 = 0;
					while (iVar15 <= 58)
					{
						if (Function_180(Function_182(iVar15)))
						{
							Function_102(Function_182(iVar15), 0, 0, 0, 1);
						}
						iVar15++;
					}
					Global_6269 = 57;
					Function_101(0x1000000);
					Function_98();
					Function_61(1);
					if (!Function_60(38))
					{
						Function_58(38, 1);
					}
					if (!Function_60(39))
					{
						Function_58(39, 1);
					}
					if (!Function_60(40))
					{
						Function_58(40, 1);
					}
					if (!Function_60(41))
					{
						Function_58(41, 1);
					}
					if (!Function_60(42))
					{
						Function_58(42, 1);
					}
					Function_21(1);
					UI_SET_HAS_CHEATED(1);
				}
				UI_CHEAT_SET_VALUE(34, 0);
				return 0;
			}
			if (bParam1)
			{
				*iParam2 = 1;
			}
			break;
		
		case 0x00000023:
			if (bParam1)
			{
				SET_GLOBAL_ACTOR_WEAPON_BIAS(1.0f);
				UI_SET_HAS_CHEATED(1);
				return 1;
			}
			RESET_GLOBAL_ACTOR_WEAPON_BIAS();
			return 1;
			break;
		
		case 0x00000024:
			if (bParam1)
			{
				SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(3, Global_34573, 4);
				SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(4, Global_34573, 4);
				SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(6, Global_34573, 4);
				UI_SET_HAS_CHEATED(1);
				return 1;
			}
			SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(3, Global_34573, 2);
			SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(4, Global_34573, 2);
			SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(6, Global_34573, 2);
			return 1;
			break;
		
		case 0x00000002:
			if (!bParam1)
			{
				HORSE_SET_INFINITE_FRESHNESS_CHEAT(0);
				return 1;
			}
			HORSE_SET_INFINITE_FRESHNESS_CHEAT(1);
			UI_SET_HAS_CHEATED(1);
			return 1;
			break;
		
		case 0x00000025:
			if (!Function_205(0, 0, 1, 1))
			{
				if (bParam1)
				{
					if (Function_20(390) != 1)
					{
						UI_SET_HAS_CHEATED(1);
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, false);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_19(390, 3.0f);
						Function_208(390, 1, 1);
						return 1;
					}
				}
				if (Global_25986[2])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					Function_19(390, 3.0f);
					Function_208(390, 3, 1);
					return 1;
				}
				if (Global_25986[1])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
					Function_19(390, 3.0f);
					Function_208(390, 2, 1);
					return 1;
				}
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
				Function_19(390, 3.0f);
				Function_208(390, 1, 1);
				return 1;
			}
			if (bParam1)
			{
				*iParam2 = 1;
			}
			break;
		
		case 0x00000026:
			if (!Function_205(0, 0, 1, 1))
			{
				if (bParam1)
				{
					if (Function_20(390) != 2)
					{
						UI_SET_HAS_CHEATED(1);
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_19(390, 3.0f);
						Function_208(390, 2, 1);
						return 1;
					}
				}
				if (Global_25986[2])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					Function_19(390, 3.0f);
					Function_208(390, 3, 1);
					return 1;
				}
				if (Global_25986[1])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
					Function_19(390, 3.0f);
					Function_208(390, 2, 1);
					return 1;
				}
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
				Function_19(390, 3.0f);
				Function_208(390, 1, 1);
				return 1;
			}
			if (bParam1)
			{
				*iParam2 = 1;
			}
			break;
		
		case 0x00000027:
			if (!Function_205(0, 0, 1, 1))
			{
				if (bParam1)
				{
					if (Function_20(390) != 3)
					{
						UI_SET_HAS_CHEATED(1);
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_19(390, 3.0f);
						Function_208(390, 3, 1);
						return 1;
					}
				}
				if (Global_25986[2])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					Function_19(390, 3.0f);
					Function_208(390, 3, 1);
					return 1;
				}
				if (Global_25986[1])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
					Function_19(390, 3.0f);
					Function_208(390, 2, 1);
					return 1;
				}
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
				Function_19(390, 3.0f);
				Function_208(390, 1, 1);
				return 1;
			}
			if (bParam1)
			{
				*iParam2 = 1;
			}
			break;
		
		case 0x00000004:
		case 0x00000005:
		case 0x00000012:
		case 0x0000001A:
		case 0x0000001B:
			return 1;
			break;
		
		case 0x0000001C:
			if (!Function_205(0, 0, 1, 1))
			{
				if (bParam1)
				{
					FIRE_SET_GUNS_BLAZING_ACTIVE(1);
					UI_SET_HAS_CHEATED(1);
					return 1;
				}
				FIRE_SET_GUNS_BLAZING_ACTIVE(0);
				return 1;
			}
			if (bParam1)
			{
				*iParam2 = 1;
			}
			break;
		
		case 0x00000019:
			if (!Function_205(0, 0, 1, 1))
			{
				if (bParam1)
				{
					SET_ACTOR_IS_THE_BEASTMASTER(Global_34573, 1);
					UI_SET_HAS_CHEATED(1);
					return 1;
				}
				SET_ACTOR_IS_THE_BEASTMASTER(Global_34573, 0);
				return 1;
			}
			if (bParam1)
			{
				*iParam2 = 1;
			}
			break;
	}
	return 0;
}

int Function_19(int iParam0, int iParam1) //Position: 0x1792 / 6034
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_20(int iParam0) //Position: 0x17D2 / 6098
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_21(bool bParam0) //Position: 0x1813 / 6163
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_48();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_22();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_2(&Global_63095, 1);
		Function_2(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_22() //Position: 0x1864 / 6244
{
	Function_33();
	Function_32();
	Function_32();
	Function_31();
	Function_31();
	Function_30();
	Function_30();
	Function_29(0);
	Function_29(0);
	if (!Function_306())
	{
		Function_26();
		Function_25();
		Function_24();
		Function_23();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_302();
	return;
}

void Function_23() //Position: 0x18B6 / 6326
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

void Function_24() //Position: 0x18E9 / 6377
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

void Function_25() //Position: 0x1A77 / 6775
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

void Function_26() //Position: 0x1C2B / 7211
{
	Function_27(&Global_28260, 1, 0);
	return;
}

void Function_27(int iParam0, bool bParam1, var uParam2) //Position: 0x1C39 / 7225
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
	
	bVar0 = Function_28();
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

int Function_28() //Position: 0x1E2A / 7722
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_29(char* cParam0) //Position: 0x1E3F / 7743
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
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_20((50 + iVar4)) + Function_20((183 + iVar4))) + Function_20((90 + iVar4)));
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
	Function_208(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_30() //Position: 0x1EE5 / 7909
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
		iVar2 = ((Function_20((50 + iVar3) + 15) + Function_20((183 + iVar3) + 15)) + Function_20((90 + iVar3) + 15));
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
	Function_208(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_31() //Position: 0x1F6E / 8046
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
			iVar2 = ((Function_20((50 + iVar3) + 8) + Function_20((183 + iVar3) + 8)) + Function_20((90 + iVar3) + 8));
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
	Function_208(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_32() //Position: 0x2005 / 8197
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_20((50 + iVar3)) + Function_20((183 + iVar3))) + Function_20((90 + iVar3)));
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
	Function_208(179, iVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar4, 8);
	return StackVal, cVar0;
}

void Function_33() //Position: 0x2084 / 8324
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_34(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_208(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_34(int iParam0, bool bParam1, bool bParam2) //Position: 0x20BD / 8381
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
	Function_47(iParam0, bParam1, 1);
	Function_46(iParam0);
	if (bParam2 && bParam1 == 0.0f)
	{
		Function_35(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_35(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x22C7 / 8903
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_45(390))), 32);
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
					bVar19 = (Function_44(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_44(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_42(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_39(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_36(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_195(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_36(int iParam0) //Position: 0x28F4 / 10484
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_37(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2905 / 10501
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_38(char* cParam0, bool bParam1) //Position: 0x29FA / 10746
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_39(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2A13 / 10771
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_41(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_40(Function_41(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_40(int iParam0, int iParam1) //Position: 0x2A78 / 10872
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_41(int iParam0, bool bParam1) //Position: 0x2A8A / 10890
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_42(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2A9C / 10908
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
	if (((Function_43(iParam0) != 19 || Function_43(iParam0) != 17) || Function_43(iParam0) != 10) || Function_43(iParam0) != 9)
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

int Function_43(int iParam0) //Position: 0x2BCC / 11212
{
	return Global_35278[iParam020].f_48;
}

float Function_44(int iParam0) //Position: 0x2BDB / 11227
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_45(int iParam0) //Position: 0x2C14 / 11284
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_46(int iParam0) //Position: 0x2C51 / 11345
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

int Function_47(int iParam0, bool bParam1, bool bParam2) //Position: 0x2DEB / 11755
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

void Function_48() //Position: 0x302F / 12335
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_17())
	{
		Function_55(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_55(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_50(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_50(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_49(StackVal, StackVal, vVar0))
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

bool Function_49(vector3 vParam0) //Position: 0x30EA / 12522
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_50(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3102 / 12546
{
	int iVar0;
	
	iVar0 = Function_53(uParam2, uParam3);
	if (Function_52(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_3(&Global_63095, 1);
			Function_2(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_3(&Global_63095, 2);
			Function_2(&Global_63095, 1);
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
		Function_3(&Global_63095, 2);
		Function_2(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_51();
	return StackVal, StackVal, Function_51();
}

vector3 Function_51() //Position: 0x31E9 / 12777
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_52(int iParam0) //Position: 0x31F2 / 12786
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_53(bool bParam0, bool bParam1) //Position: 0x3208 / 12808
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
				fVar2 = Function_54(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_54(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_52(bVar0) && !bParam1)
	{
		bVar0 = Function_53(bParam0, 1);
	}
	return bVar0;
}

float Function_54(vector3 vParam0, vector3 vParam3) //Position: 0x32CF / 13007
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_55(var uParam0, int iParam1) //Position: 0x32EC / 13036
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_57(Global_34573, &vVar4);
	if (!Function_56(Global_30640[0]))
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
	if (!Function_56(Global_30640[2]))
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
	if (!Function_56(Global_30640[1]))
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
	if (!Function_56(Global_30658[1]))
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
	if (!Function_56(Global_30658[3]))
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
	if (!Function_56(Global_30658[2]))
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
	if (!Function_56(Global_30658[4]))
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
	if (!Function_56(Global_30668[0]))
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
	if (!Function_56(Global_30668[1]))
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
	if (!Function_56(Global_30668[2]))
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
	if (!Function_56(Global_30679[0]))
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
	if (!Function_56(Global_30685[0]))
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
	if (!Function_56(Global_30685[1]))
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
	if (!Function_56(Global_30685[2]))
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
	if (!Function_56(Global_30693[0]))
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
	if (!Function_56(Global_30693[1]))
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
	if (!Function_56(Global_30693[2]))
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
	if (!Function_56(Global_30707[2]))
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
	if (!Function_56(Global_30707[3]))
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
	if (!Function_56(Global_30707[0]))
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
	if (!Function_56(Global_30717[0]))
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
	if (!Function_56(Global_30723[2]))
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
	if (!Function_56(Global_30723[1]))
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
	if (!Function_56(Global_30723[0]))
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
	if (!Function_56(Global_30679[1]))
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
	if (!Function_56(Global_30707[1]))
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
	Function_3(&Global_63095, 2);
	Function_2(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_49(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_56(int iParam0) //Position: 0x3B11 / 15121
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_13(uVar0, 0x1000000) || Function_13(uVar0, 0x2000000)) || Function_13(uVar0, 0x4000000)) || !Function_13(uVar0, 0x10000000));
}

void Function_57(bool bParam0, bool bParam1) //Position: 0x3B4C / 15180
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_58(int iParam0, bool bParam1) //Position: 0x3B59 / 15193
{
	Global_74542[iParam010] = 0;
	Global_74542[iParam010].f_4 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		Function_59();
	}
	if (bParam1)
	{
		if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[iParam055].f_140, 0))
		{
			REMOVE_JOURNAL_ENTRY(Global_63541[iParam055].f_140, false);
		}
	}
	return;
}

void Function_59() //Position: 0x3BA7 / 15271
{
	bool bVar0;
	
	bVar0 = Function_20(407);
	PRINTSTRING("This is how many quest lines are marked as done now: ");
	PRINTINT(bVar0);
	PRINTNL();
	if (bVar0 > 15)
	{
		AWARD_ACHIEVEMENT(17);
	}
	return;
}

bool Function_60(int iParam0) //Position: 0x3C05 / 15365
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_61(bool bParam0) //Position: 0x3C1A / 15386
{
	Function_62(bParam0);
	Function_62(bParam0);
	Function_62(bParam0);
	Function_62(bParam0);
	return;
}

int Function_62(bool bParam0) //Position: 0x3C38 / 15416
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<8> Var6;
	struct<4> Var14;
	
	if (Function_306())
	{
		return 1;
	}
	if (!IS_OBJECT_VALID(Global_34573))
	{
		return 0;
	}
	fVar0 = 1800.0f;
	if (!bParam0 && !Function_97(8192))
	{
		return 0;
	}
	bVar1 = DECOR_GET_INT(Global_34573, "tutorial");
	bVar2 = DECOR_GET_INT(Global_34573, "ntutorial2");
	bVar3 = DECOR_GET_INT(Global_34573, "ntutorial3");
	bVar4 = DECOR_GET_INT(Global_34573, "ntutorial4");
	if (!Function_96(Global_76849, 4))
	{
		if (Function_95(bVar4, 4))
		{
			Function_94(&Global_76849, 4);
			Function_93(Global_34573, 4, 4);
			if (!bParam0)
			{
				Function_15("tutorial_camp_fast_travel", 30.0f, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!Function_96(Global_76846, 0x4000000) && !(((((((Global_3380 || Global_3394) || Global_3382) || Global_3369) || Global_3367) || Global_63096) || Global_3395) || Global_3396))
	{
		if (Function_95(bVar1, 0x4000000))
		{
			Function_94(&Global_76846, 0x4000000);
			if (!bParam0)
			{
				Function_15("tutorial_rare_horse", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if ((Global_3365 && !Function_96(Global_76849, 8)) && !((((Global_3369 || Global_63096) || Global_3384) || Global_3395) || Global_3396))
	{
		if (((GET_ACTOR_HEALTH(Global_34573) > (GET_ACTOR_MAX_HEALTH(Global_34573) * 0.3f) && HAS_ITEM(Function_92(3), Global_34573)) && IS_ACTOR_ALIVE(Global_34573)) && !IS_ACTOR_IN_WATER(Global_34573))
		{
			Function_94(&Global_76849, 8);
			if (!bParam0)
			{
				Function_15("tutorial_first_health", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!bParam0 && ((((((((((Global_59353 || Global_3380) || Global_3382) || Global_3367) || Global_63096) || Global_3395) || Global_3394) || Global_3384) || Global_3369) || Global_3396) || !IS_ACTOR_ALIVE(Global_34573)))
	{
		return 0;
	}
	if (!bParam0 && ((Function_91() || HUD_IS_FADED()) || HUD_IS_FADING()))
	{
		return 0;
	}
	if (!bParam0 && (Global_26281 + 5.0f) < GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	if (!bParam0)
	{
		iVar5 = 0;
		while (iVar5 <= Global_3422)
		{
			if (Function_90(&Global_3422[iVar540] + 128, 16))
			{
				if (((Global_6269 != Global_3422[iVar540].f_132 || Global_6269 != Global_3422[iVar540].f_136) || Global_6269 != Global_3422[iVar540].f_140) || Global_6269 != Global_3422[iVar540].f_144)
				{
					if (Global_3422[iVar540].f_124)
					{
						if (IS_BLIP_VALID(Global_3422[iVar540].f_100))
						{
							SET_BLIP_BLINK(Global_3422[iVar540].f_100, 1, 0, 5f);
						}
						Var14 = { StackVal, StackVal, StackVal, Function_89(iVar5) };
						strcpy(&Var6, "comp_intro_", 32);
						stradd(&Var6, UI_GET_STRING(&Var14), 32);
						if (iVar5 == 49)
						{
							Function_88(&Var6, 0x40f00000, 1, 2, 0, 0, 0, 0);
						}
						else
						{
							Function_15(&Var6, 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_87(&Global_3422[iVar540] + 128, 16);
						return 0;
					}
				}
			}
			iVar5++;
		}
	}
	switch (iLocal_0)
	{
		case 0x00000000:
			if (!Function_96(Global_76847, 0x10000000))
			{
				if (Function_95(bVar2, 0x10000000))
				{
					Function_94(&Global_76847, 0x10000000);
					Function_93(Global_34573, 0x10000000, 2);
					if (!bParam0)
					{
						Function_15("tutorial_aggro_ped", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 1))
			{
				if (Function_95(bVar2, 1))
				{
					Function_94(&Global_76847, 1);
					Function_93(Global_34573, 1, 2);
					if (!bParam0)
					{
						Function_15("tutorial_eyewitness_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 2))
			{
				if (Function_95(bVar2, 2))
				{
					Function_94(&Global_76847, 2);
					Function_93(Global_34573, 2, 2);
					if (!bParam0)
					{
						Function_15("tutorial_eyewitness_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 4))
			{
				if (Function_95(bVar2, 4))
				{
					Function_94(&Global_76847, 4);
					Function_93(Global_34573, 4, 2);
					if (!bParam0)
					{
						Function_15("tutorial_eyewitness_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 4194304))
			{
				if (Function_95(bVar2, 4194304))
				{
					Function_94(&Global_76847, 4194304);
					Function_93(Global_34573, 4194304, 2);
					if (!bParam0)
					{
						Function_15("tutorial_eyewitness_delayed", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 0x2000000))
			{
				if (Function_95(bVar2, 0x2000000))
				{
					Function_94(&Global_76847, 0x2000000);
					Function_93(Global_34573, 0x2000000, 2);
					if (!bParam0)
					{
						Function_15("tutorial_wanted_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 0x4000000))
			{
				if (Function_96(Global_76847, 0x2000000))
				{
					Function_94(&Global_76847, 0x4000000);
					if (!bParam0)
					{
						Function_15("tutorial_law_lost_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 0x8000000))
			{
				if (Function_95(bVar2, 0x8000000))
				{
					Function_94(&Global_76847, 0x8000000);
					Function_93(Global_34573, 0x8000000, 2);
					if (!bParam0)
					{
						Function_15("tutorial_rcm_wanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_95(bVar2, 32768))
			{
				Function_94(&Global_76847, 32768);
				Function_93(Global_34573, 32768, 2);
				Function_15("tutorial_law_local_spawn", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_95(bVar2, 128))
			{
				if (Function_96(Global_76847, 65536))
				{
					Function_94(&Global_76847, 128);
					Function_93(Global_34573, 128, 2);
					Function_15("tutorial_law_posse_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_95(bVar2, 256))
			{
				if (Function_96(Global_76847, 131072))
				{
					Function_94(&Global_76847, 256);
					Function_93(Global_34573, 256, 2);
					Function_15("tutorial_law_marshal_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_95(bVar2, 512))
			{
				if (Function_96(Global_76847, 262144))
				{
					Function_94(&Global_76847, 512);
					Function_93(Global_34573, 512, 2);
					Function_15("tutorial_law_bounty_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_95(bVar2, 1024))
			{
				if (Function_96(Global_76847, 131072))
				{
					Function_94(&Global_76847, 1024);
					Function_93(Global_34573, 1024, 2);
					Function_15("tutorial_law_army_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_96(Global_76847, 64))
			{
				if (Function_95(bVar2, 64))
				{
					Function_94(&Global_76847, 64);
					Function_93(Global_34573, 64, 2);
					if (!bParam0)
					{
						Function_15("tutorial_player_arrested", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 16384))
			{
				if (Function_95(bVar2, 16384))
				{
					Function_94(&Global_76847, 16384);
					Function_93(Global_34573, 16384, 2);
					if (!bParam0)
					{
						Function_15("tutorial_law_captured", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 0x1000000))
			{
				if (Function_95(bVar2, 0x1000000))
				{
					Function_94(&Global_76847, 0x1000000);
					Function_93(Global_34573, 0x1000000, 2);
					if (!bParam0)
					{
						Function_15("tutorial_law_rewanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 8))
			{
				if (Global_3403 && Global_26316.f_176)
				{
					Function_94(&Global_76847, 8);
					if (!bParam0)
					{
						Function_15("tutorial_wanted_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 8388608))
			{
				if (Function_95(bVar2, 8388608))
				{
					Function_94(&Global_76847, 8388608);
					if (!bParam0)
					{
						Function_15("tutorial_law_lost_awareness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 32))
			{
				if (Function_95(bVar2, 32))
				{
					Function_94(&Global_76847, 32);
					Function_93(Global_34573, 32, 2);
					if (!bParam0)
					{
						Function_15("tutorial_law_near", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 4096))
			{
				if (Function_95(bVar2, 4096))
				{
					Function_94(&Global_76847, 4096);
					Function_93(Global_34573, 4096, 2);
					if (!bParam0)
					{
						Function_15("tutorial_law_losing_track", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 16) && Function_96(Global_76847, 8))
			{
				if (Function_95(bVar2, 16))
				{
					Function_94(&Global_76847, 16);
					Function_93(Global_34573, 16, 2);
					if (!bParam0)
					{
						Function_15("tutorial_civilian_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 2048))
			{
				if (Function_95(bVar2, 2048))
				{
					Function_94(&Global_76847, 2048);
					Function_93(Global_34573, 2048, 2);
					if (!bParam0)
					{
						Function_15("tutorial_law_difficulty_increase", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76847, 8192))
			{
				if (Function_95(bVar2, 8192))
				{
					Function_94(&Global_76847, 8192);
					Function_93(Global_34573, 8192, 2);
					if (!bParam0)
					{
						return 0;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_96(Global_76848, 16384))
			{
				if (Function_95(bVar3, 16384))
				{
					Function_94(&Global_76848, 16384);
					Function_93(Global_34573, 16384, 3);
					if (!bParam0)
					{
						Function_15("tutorial_law_bribe", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 32768))
			{
				if (Function_95(bVar3, 32768))
				{
					Function_94(&Global_76848, 32768);
					Function_93(Global_34573, 32768, 3);
					if (!bParam0)
					{
						Function_15("tutorial_law_surrender", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 65536))
			{
				if (Function_95(bVar3, 65536))
				{
					Function_94(&Global_76848, 65536);
					Function_93(Global_34573, 65536, 3);
					if (!bParam0)
					{
						Function_15("tutorial_law_extra_cops1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 131072))
			{
				if (Function_95(bVar3, 131072))
				{
					Function_94(&Global_76848, 131072);
					Function_93(Global_34573, 131072, 3);
					if (!bParam0)
					{
						Function_15("tutorial_law_extra_cops2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 262144))
			{
				if (Function_95(bVar3, 262144))
				{
					Function_94(&Global_76848, 262144);
					Function_93(Global_34573, 262144, 3);
					if (!bParam0)
					{
						Function_15("tutorial_law_less_cops", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_95(bVar2, 524288))
			{
				Function_94(&Global_76847, 524288);
				Function_93(Global_34573, 524288, 2);
				Function_15("tutorial_law_local_end1", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_96(Global_76847, 1048576))
			{
				if (Function_96(Global_76847, 524288))
				{
					Function_94(&Global_76847, 1048576);
					if (!bParam0)
					{
						return 0;
					}
				}
			}
			if (Function_95(bVar2, 2097152))
			{
				Function_94(&Global_76847, 2097152);
				Function_93(Global_34573, 2097152, 2);
				Function_15("tutorial_law_pursuit_end", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_95(bVar2, 65536))
			{
				Function_94(&Global_76847, 65536);
				Function_93(Global_34573, 65536, 2);
				Function_15("tutorial_law_posse_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_95(bVar2, 131072))
			{
				Function_94(&Global_76847, 131072);
				Function_93(Global_34573, 131072, 2);
				Function_15("tutorial_law_marshal_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_95(bVar2, 262144))
			{
				Function_94(&Global_76847, 262144);
				Function_93(Global_34573, 262144, 2);
				Function_15("tutorial_law_bounty_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_96(Global_76848, 0x2000000))
			{
				if (Function_95(bVar3, 0x2000000))
				{
					Function_94(&Global_76848, 0x2000000);
					Function_93(Global_34573, 0x2000000, 3);
					Function_15("whistle_GotEvilHorse", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000002:
			if (Global_3403 || Global_3404)
			{
				break;
			}
			if (!Function_96(Global_76846, 0x20000000))
			{
				if (Function_189(8, 0))
				{
					Function_94(&Global_76846, 0x20000000);
					if (!bParam0)
					{
						Function_15("tutorial_first_camp_M1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 0x4000000))
			{
				if (Function_189(8, 0))
				{
					Function_94(&Global_76846, 0x4000000);
					if (!bParam0)
					{
						Function_15("tutorial_loot", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 0x8000000))
			{
				if (Function_95(bVar3, 0x8000000))
				{
					Function_94(&Global_76848, 0x8000000);
					if (!bParam0)
					{
						Function_15("Old_News_Avail", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 8))
			{
				if (Function_95(bVar1, 8))
				{
					Function_94(&Global_76846, 8);
					if (!bParam0)
					{
						Function_15("tutorial_road_to_armadillo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 1))
			{
				if (IS_ACTOR_DRIVING_VEHICLE(Global_34573) && !(Function_189(4, 0) || Function_189(10, 0)))
				{
					if (IS_ACTOR_DRAFT_VEHICLE(GET_VEHICLE(Global_34573)))
					{
						Function_94(&Global_76846, 1);
						if (!bParam0)
						{
							Function_15("tutorial_first_drive_coach", 0x41200000, 1, 0, 2, 1, 0);
							return 0;
						}
					}
				}
			}
			if (!Function_96(Global_76846, 64))
			{
				if (Function_95(bVar1, 64))
				{
					Function_94(&Global_76846, 64);
					Function_93(Global_34573, 64, 1);
					if (!bParam0)
					{
						Function_15("tutorial_first_see_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 256))
			{
				if (Function_95(bVar1, 256))
				{
					Function_94(&Global_76846, 256);
					Function_93(Global_34573, 256, 1);
					if (!bParam0)
					{
						Function_15("tutorial_first_passenger_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 128))
			{
				if (Function_95(bVar1, 128))
				{
					Function_86(5.0f);
					Function_94(&Global_76846, 128);
					Function_93(Global_34573, 128, 1);
					if (!bParam0)
					{
						Function_15("tutorial_first_horse_agitated", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 2097152))
			{
				if (Function_95(bVar1, 2097152))
				{
					Function_94(&Global_76846, 2097152);
					Function_93(Global_34573, 2097152, 1);
					if (!bParam0)
					{
						Function_15("tutorial_rcm_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 4194304))
			{
				if (Function_96(Global_76846, 2097152))
				{
					Function_94(&Global_76846, 4194304);
					Function_93(Global_34573, 4194304, 1);
					if (!bParam0)
					{
						Function_15("tutorial_rcm_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 8388608))
			{
				if (Function_96(Global_76846, 4194304))
				{
					Function_94(&Global_76846, 8388608);
					Function_93(Global_34573, 8388608, 1);
					if (!bParam0)
					{
						Function_15("tutorial_rcm_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 2))
			{
				if (Function_95(bVar1, 2))
				{
					Function_94(&Global_76846, 2);
					Function_93(Global_34573, 2, 1);
					if (!bParam0)
					{
						Function_15("tutorial_first_outfit1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 4))
			{
				if (Function_96(Global_76846, 2))
				{
					Function_94(&Global_76846, 4);
					if (!bParam0)
					{
						Function_15("tutorial_first_outfit2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_85(3))
			{
				if (!Function_96(Global_76846, 512))
				{
					if (Function_95(bVar1, 512))
					{
						Function_94(&Global_76846, 512);
						Function_93(Global_34573, 512, 1);
						if (!bParam0)
						{
							Function_15("tutorial_lost_cards", 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_65(3, 0, 1, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 4096))
			{
				if ((Global_29007 != 2 && !Global_3388) && !Function_205(0, 0, 1, 6))
				{
					Function_94(&Global_76846, 4096);
					if (!bParam0)
					{
						Function_15("tutorial_first_camp", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 8192))
			{
				if (Function_96(Global_76846, 4096))
				{
					Function_94(&Global_76846, 8192);
					if (!bParam0)
					{
						Function_15("tutorial_first_camp2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 1024))
			{
				if (((Global_29007 != 2 && !Global_3388) && !Function_205(0, 0, 1, 1)) && Function_189(4, 0))
				{
					Function_94(&Global_76846, 1024);
					if (!bParam0)
					{
						Function_15("tutorial_first_wilderness1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 2048))
			{
				if (Function_96(Global_76846, 1024))
				{
					Function_94(&Global_76846, 2048);
					if (!bParam0)
					{
						Function_15("tutorial_first_wilderness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 16))
			{
				if (Function_95(bVar1, 16) && !Global_3380)
				{
					Function_94(&Global_76846, 16);
					Function_93(Global_34573, 16, 1);
					if (!bParam0)
					{
						Function_15("tutorial_first_action_area1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 32))
			{
				if (Function_96(Global_76846, 16))
				{
					Function_94(&Global_76846, 32);
					if (!bParam0)
					{
						Function_15("tutorial_first_action_area2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 32768))
			{
				if (Function_95(bVar1, 32768))
				{
					Function_94(&Global_76846, 32768);
					if (!bParam0)
					{
						Function_15("tutorial_kill_job", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 65536))
			{
				if (Function_95(bVar1, 65536))
				{
					Function_93(Global_34573, 65536, 1);
					if (!bParam0)
					{
						Function_15("tutorial_kill_shop", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 131072))
			{
				if (Function_95(bVar1, 131072))
				{
					Function_94(&Global_76846, 131072);
					if (!bParam0)
					{
						Function_15("tutorial_first_headshot_bonus", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 524288))
			{
				if (Function_95(bVar1, 524288))
				{
					Function_94(&Global_76846, 524288);
					if (!bParam0)
					{
						Function_15("tutorial_first_robbery", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 1048576))
			{
				if (Function_95(bVar1, 1048576))
				{
					Function_94(&Global_76846, 1048576);
					if (!bParam0)
					{
						Function_15("tutorial_first_robbery_denial", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 0x1000000))
			{
				if (Function_95(bVar1, 0x1000000))
				{
					Function_94(&Global_76846, 0x1000000);
					if (!bParam0)
					{
						Function_15("tutorial_second_weapon1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 0x2000000))
			{
				if (Function_96(Global_76846, 0x1000000))
				{
					Function_94(&Global_76846, 0x2000000);
					if (!bParam0)
					{
						Function_15("tutorial_second_weapon2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 4194304))
			{
				if (Function_95(bVar3, 4194304))
				{
					Function_94(&Global_76848, 4194304);
					if (!bParam0)
					{
						Function_15("tutorial_random_char", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 524288))
			{
				if (Function_95(bVar3, 524288))
				{
					Function_94(&Global_76848, 524288);
					if (!bParam0)
					{
						Function_15("tutorial_skinning_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 1048576))
			{
				if (Function_96(Global_76848, 524288))
				{
					Function_94(&Global_76848, 1048576);
					if (!bParam0)
					{
						Function_15("tutorial_skinning_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 2097152))
			{
				if (Function_95(bVar3, 2097152))
				{
					Function_94(&Global_76848, 2097152);
					if (!bParam0)
					{
						Function_15("tutorial_skinning_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (Global_3403 || Global_3404)
			{
				break;
			}
			if (!Function_96(Global_76846, 262144))
			{
				if (Function_95(bVar1, 262144))
				{
					Function_94(&Global_76846, 262144);
					if (!bParam0)
					{
						Function_15("tutorial_bounty_no_money_first", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 1))
			{
				if (Function_95(bVar3, 1))
				{
					Function_94(&Global_76848, 1);
					Function_93(Global_34573, 1, 3);
					if (!bParam0)
					{
						Function_15("tutorial_first_honor_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 2))
			{
				if (Function_95(bVar3, 2))
				{
					Function_94(&Global_76848, 2);
					Function_93(Global_34573, 2, 3);
					if (!bParam0)
					{
						Function_15("tutorial_first_honor_negative", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 4))
			{
				if (Function_95(bVar3, 4))
				{
					Function_94(&Global_76848, 4);
					Function_93(Global_34573, 4, 3);
					if (!bParam0)
					{
						Function_15("tutorial_first_notoriety_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 8))
			{
				if (Function_64() == 0)
				{
					Function_94(&Global_76848, 8);
					if (!bParam0)
					{
						Function_15("tutorial_very_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 16))
			{
				if (Function_64() == 1)
				{
					Function_94(&Global_76848, 16);
					if (!bParam0)
					{
						Function_15("tutorial_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 32))
			{
				if (Function_64() == 2)
				{
					Function_94(&Global_76848, 32);
					if (!bParam0)
					{
						Function_15("tutorial_medium_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 64))
			{
				if (Function_64() == 4)
				{
					Function_94(&Global_76848, 64);
					if (!bParam0)
					{
						Function_15("tutorial_medium_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 128))
			{
				if (Function_64() == 5)
				{
					Function_94(&Global_76848, 128);
					if (!bParam0)
					{
						Function_15("tutorial_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 256))
			{
				if (Function_64() == 6)
				{
					Function_94(&Global_76848, 256);
					if (!bParam0)
					{
						Function_15("tutorial_very_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 512))
			{
				if (Function_63() == 1)
				{
					Function_94(&Global_76848, 512);
					if (!bParam0)
					{
						Function_15("tutorial_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 1024))
			{
				if (Function_63() == 2)
				{
					Function_94(&Global_76848, 1024);
					if (!bParam0)
					{
						Function_15("tutorial_medium_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 2048))
			{
				if (Function_63() == 3)
				{
					Function_94(&Global_76848, 2048);
					if (!bParam0)
					{
						Function_15("tutorial_medium_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 4096))
			{
				if (Function_63() == 4)
				{
					Function_94(&Global_76848, 4096);
					if (!bParam0)
					{
						Function_15("tutorial_medium_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 8192))
			{
				if (Function_63() == 5)
				{
					Function_94(&Global_76848, 8192);
					if (!bParam0)
					{
						Function_15("tutorial_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 8388608))
			{
				if (Function_95(bVar3, 8388608))
				{
					Function_94(&Global_76848, 8388608);
					Function_93(Global_34573, 8388608, 3);
					if (!bParam0)
					{
						Function_15("tutorial_first_minigame_in_rain", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76848, 0x1000000))
			{
				if (Function_95(bVar3, 0x1000000))
				{
					Function_94(&Global_76848, 0x1000000);
					Function_93(Global_34573, 0x1000000, 3);
					if (!bParam0)
					{
						Function_15("tutorial_first_missed_achievement", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76846, 0x8000000))
			{
				if (Function_95(bVar1, 0x8000000))
				{
					Function_94(&Global_76846, 0x8000000);
					Function_93(Global_34573, 0x8000000, 1);
					if (!bParam0)
					{
						Function_15("tutorial_first_on_donkey", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_95(bVar4, 1) && Function_189(4, 0))
			{
				Function_93(Global_34573, 1, 4);
				if (!bParam0)
				{
					Function_15("tutorial_new_item_in_shops", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_96(Global_76847, 0x20000000))
			{
				if ((((((HAS_ITEM(Function_92(53), Global_34573) || HAS_ITEM(Function_92(54), Global_34573)) || HAS_ITEM(Function_92(55), Global_34573)) || HAS_ITEM(Function_92(56), Global_34573)) || HAS_ITEM(Function_92(57), Global_34573)) || HAS_ITEM(Function_92(58), Global_34573)) || HAS_ITEM(Function_92(10), Global_34573))
				{
					Function_94(&Global_76847, 0x20000000);
					if (!bParam0)
					{
						Function_15("tutorial_outfit_scrap", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_95(bVar4, 2) && Function_189(4, 0))
			{
				if (Function_96(Global_76849, 2))
				{
					if (GET_CURRENT_GAME_TIME() < Global_12976.f_132)
					{
						if (!bParam0)
						{
							Function_15("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
							Global_12976.f_132 = (GET_CURRENT_GAME_TIME() + fVar0);
							return 0;
						}
					}
				}
				if (!Function_96(Global_76849, 2))
				{
					if (!bParam0)
					{
						Function_94(&Global_76849, 2);
						Function_15("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
						Global_12976.f_132 = (GET_CURRENT_GAME_TIME() + fVar0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76849, 16))
			{
				if (Function_189(9, 0))
				{
					Function_94(&Global_76849, 16);
					if (!bParam0)
					{
						Function_15("tutorial_place_waypoint", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_76849, 32))
			{
				if (Function_95(bVar4, 32))
				{
					Function_94(&Global_76849, 32);
					Function_93(Global_34573, 32, 4);
					if (!bParam0)
					{
						Function_15("tutorial_bait_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
	}
	iLocal_0++;
	if (iLocal_0 >= 3)
	{
		iLocal_0 = 0;
	}
	return 0;
}

int Function_63() //Position: 0x5E4A / 24138
{
	return Global_12976.f_156;
}

int Function_64() //Position: 0x5E55 / 24149
{
	return Global_12976.f_152;
}

void Function_65(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x5E60 / 24160
{
	struct<8> Var0;
	
	if (!Function_84(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_83(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_81(bParam0))
	{
		Function_80(456, 1, 0, 0);
		Function_79(bParam0, 2);
		if (bParam2)
		{
			if (!Function_205(0, 0, 1, 1))
			{
				Function_21(1);
				Function_78(1, 5);
			}
			else
			{
				Function_77();
			}
		}
		Function_71(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_91() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (Function_91() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_15(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_17())
		{
			if (!Function_96(Global_76846, 2))
			{
				Function_66(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_66(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5FB5 / 24501
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_68(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_67(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_67(char* cParam0, int iParam1) //Position: 0x6021 / 24609
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(cParam0, "4", 16);
	}
	return;
}

bool Function_68(bool bParam0, var uParam1, int iParam2) //Position: 0x6058 / 24664
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_3380)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		if (Function_70(DECOR_GET_INT(bParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		if (Global_3403 || Global_3404)
		{
			return 0;
		}
	}
	if (iParam2 == 2)
	{
		switch (Function_69(uVar0))
		{
			case 0x00000002:
				if (!Function_96(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_69(char* cParam0) //Position: 0x60D0 / 24784
{
	switch (cParam0)
	{
		case 0x00000001:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00004000:
		case 0x00008000:
		case 0x00010000:
		case 0x00020000:
		case 0x00040000:
		case 0x00200000:
			return 0;
			break;
		
		case 0x00000004:
		case 0x00000008:
		case 0x00000020:
		case 0x00001000:
		case 0x00080000:
		case 0x00100000:
			return 1;
			break;
		
		case 0x00000002:
		case 0x00000010:
		case 0x00000800:
		case 0x00002000:
		case 0x00400000:
			return 2;
			break;
	}
	return 0;
}

int Function_70(int iParam0) //Position: 0x6171 / 24945
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_2(&iVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 >= 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_71(bool bParam0) //Position: 0x61AE / 25006
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_75(bParam0, Function_76(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_75(bParam0, Function_76(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_74(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_73(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_72(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_72(int iParam0) //Position: 0x635E / 25438
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_84(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

void Function_73(char* cParam0, bool bParam1) //Position: 0x63B5 / 25525
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_74(int iParam0) //Position: 0x63DA / 25562
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_84(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

bool Function_75(bool bParam0, int iParam1) //Position: 0x6430 / 25648
{
	int iVar0;
	
	if (!Function_84(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_76(bool bParam0) //Position: 0x648F / 25743
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_77() //Position: 0x649B / 25755
{
	return;
}

void Function_78(bool bParam0, int iParam1) //Position: 0x64A1 / 25761
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_306())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_79(bool bParam0, int iParam1) //Position: 0x64E3 / 25827
{
	if (!Function_84(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

int Function_80(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x6538 / 25912
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
	Function_47(iParam0, TO_FLOAT(bParam1), 1);
	Function_46(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_35(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

bool Function_81(int iParam0) //Position: 0x6758 / 26456
{
	if (!Function_84(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_82(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_82(int iParam0, int iParam1) //Position: 0x67AA / 26538
{
	int iVar0;
	
	if (!Function_84(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_83(int iParam0) //Position: 0x67D7 / 26583
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_84(int iParam0) //Position: 0x67F3 / 26611
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_85(int iParam0) //Position: 0x6809 / 26633
{
	if (!Function_84(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_82(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

void Function_86(bool bParam0) //Position: 0x685A / 26714
{
	if (bParam0 < 0.0f)
	{
		FLASH_SET_FLOAT("testInventory", "staminaBlinking", bParam0);
	}
	else
	{
		LOG_ERROR("RADAR_BLINK_HORSE_STAMINA_BAR: called with a negative or zero duration!");
	}
	return;
}

void Function_87(var uParam0, bool bParam1) //Position: 0x68DF / 26847
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_88(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x68F6 / 26870
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
			Var0 = { StackVal, StackVal, StackVal, Function_16(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

struct<16> Function_89(int iParam0) //Position: 0x697B / 27003
{
	char* cVar0[16];
	
	if (!Function_17())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_90(int iParam0, int iParam1) //Position: 0x69B5 / 27061
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_91() //Position: 0x69D1 / 27089
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

var Function_92(bool bParam0) //Position: 0x69FE / 27134
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

void Function_93(bool bParam0, int iParam1, int iParam2) //Position: 0x6AEF / 27375
{
	var uVar0;
	struct<4> Var1;
	bool bVar5;
	
	uVar0 = iParam1;
	strcpy(&Var1, "tutorial", 16);
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	Function_67(&Var1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &Var1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(bParam0, &Var1);
	DECOR_SET_INT(bParam0, &Var1, (bVar5 - (bVar5 && uVar0)));
	return;
}

void Function_94(var uParam0, int iParam1) //Position: 0x6B3E / 27454
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_95(bool bParam0, int iParam1) //Position: 0x6B4D / 27469
{
	var uVar0;
	
	uVar0 = iParam1;
	if ((bParam0 && uVar0) >= 0)
	{
		return 1;
	}
	return 0;
}

bool Function_96(var uParam0, int iParam1) //Position: 0x6B63 / 27491
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_97(int iParam0) //Position: 0x6B76 / 27510
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_98() //Position: 0x6B92 / 27538
{
	int iVar0;
	
	if (Function_306())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Global_26003)
	{
		if (!Global_26003[iVar0])
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_189(25, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("ramitaBayaBefore");
						ENABLE_WORLD_SECTOR("ramitaBayaAfter");
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdROAD_fom_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
					}
					break;
				
				case 0x00000001:
					if (Function_189(25, 0) && !Function_189(26, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
					}
					break;
				
				case 0x00000002:
					if ((Function_189(25, 0) && Function_189(26, 0)) && !Function_189(29, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeB");
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
					}
					break;
				
				case 0x00000003:
					if ((Function_189(25, 0) && Function_189(26, 0)) && Function_189(29, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
					}
					break;
				
				case 0x00000004:
					if (Function_189(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
					}
					break;
				
				case 0x00000005:
					if (Function_189(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("dixonCrossingBefore");
						ENABLE_WORLD_SECTOR("dixonCrossingAfter");
						ENABLE_CURVE("rsdROAD_thi_blk_road", true);
						ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
					}
					break;
				
				case 0x00000006:
					if (Function_189(22, 0) && !Function_189(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("hen_barn01x");
						DISABLE_CHILD_SECTOR("hen_barn01props01x");
						DISABLE_CHILD_SECTOR("hen_barn01props02x");
						ENABLE_CHILD_SECTOR("hen_barn02x");
						ENABLE_CHILD_SECTOR("hen_barn02props01x");
					}
					break;
				
				case 0x00000007:
					if (Function_189(22, 0) && Function_189(41, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("hen_barn01x");
						ENABLE_CHILD_SECTOR("hen_barn01props01x");
						ENABLE_CHILD_SECTOR("hen_barn01props02x");
						DISABLE_CHILD_SECTOR("hen_barn02x");
						DISABLE_CHILD_SECTOR("hen_barn02props01x");
					}
					break;
				
				case 0x00000008:
					if (Function_189(34, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("campoMiradaBefore");
						ENABLE_WORLD_SECTOR("campoMiradaAfter");
					}
					break;
				
				case 0x00000009:
					if (Function_189(26, 0) || Function_189(30, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					}
					break;
				
				case 0x0000000A:
					if (Function_189(40, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("fod_gates01x");
						ENABLE_CHILD_SECTOR("fod_gates02x");
						ENABLE_CHILD_SECTOR("fod_gates02Doors01x");
					}
					break;
				
				case 0x0000000B:
					if (Function_189(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("coc_fence01x");
						ENABLE_CHILD_SECTOR("coc_fence01bx");
						ENABLE_CHILD_SECTOR("coc_gates02x");
						DISABLE_CHILD_SECTOR("coc_gates01x");
					}
					break;
				
				case 0x0000000C:
					if (Function_189(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
					}
					break;
				
				case 0x0000000D:
					if (Function_189(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					}
					break;
				
				case 0x0000000E:
					break;
				
				case 0x0000000F:
					if (Function_189(21, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
						ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
					}
					break;
				
				case 0x00000010:
					if (Function_189(57, 0) || Function_99(57))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_silo02x");
						ENABLE_CHILD_SECTOR("beh_silo01x");
					}
					break;
				
				case 0x00000011:
					if (Function_189(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_house02x");
						DISABLE_CHILD_SECTOR("beh_house02props01x");
						ENABLE_CHILD_SECTOR("beh_house01x");
						ENABLE_CHILD_SECTOR("beh_house01props01x");
					}
					break;
				
				case 0x00000012:
					if (Function_189(28, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
						ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
					}
					break;
				
				case 0x00000013:
					if (Function_189(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("esc_villaWall04x");
						ENABLE_CHILD_SECTOR("esc_villaWall05x");
					}
					break;
				
				case 0x00000014:
					if (Function_60(37))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("icarus");
					}
					break;
				
				case 0x00000015:
					break;
				
				case 0x00000016:
					break;
				
				case 0x00000017:
					if (Function_189(57, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave02x");
						ENABLE_CHILD_SECTOR("beh_grave03x");
						DISABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_189(25, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_path", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve495", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve12", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve13", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_loop1", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve10", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve8", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve6", true);
						ENABLE_CURVE("rsdTRAIL_las_nos_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve10detachedCurve1", true);
						ENABLE_CURVE("rsdTRAIL_curve44", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve18", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_roaddetachedCurve4", true);
						ENABLE_CURVE("rsdROAD_las_roaddetachedCurve2", true);
						ENABLE_CURVE("rsdROAD_curve69", true);
						ENABLE_CURVE("rsdROAD_las_road", true);
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve98", true);
						ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4detachedCurve2", true);
						ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve634", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve635", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve636", true);
						ENABLE_CURVE("rsdTRAIL_curve637", true);
						ENABLE_CURVE("rsdTRAIL_curve638", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_curve70", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve10", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve8", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve6", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_path3detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_path3", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop09_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop06__path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve6", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20detachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve16", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve12", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve14", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve163", true);
						ENABLE_CURVE("rsdTRAIL_curve297", true);
						ENABLE_CURVE("rsdTRAIL_curve71", true);
						ENABLE_CURVE("rsdTRAIL_curve72", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop08_path", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve77", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve78", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve78", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve79", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve4", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_path", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop02_path", true);
						ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve8", true);
						ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve6", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", true);
					}
					break;
				
				case 0x00000019:
					if (Function_189(32, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("emt_caveDoor02x");
						DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					}
					break;
				
				case 0x0000001A:
					if (Function_189(20, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("thi_window02x");
						DISABLE_CHILD_SECTOR("thi_window01x");
					}
					break;
				
				default:
					LOG_ERROR("world state error");
					break;
				}
		}
		iVar0++;
	}
	return;
}

int Function_99(int iParam0) //Position: 0x8394 / 33684
{
	int iVar0;
	
	if (!Function_100(iParam0))
	{
		return 0;
	}
	iVar0 = Function_182(iParam0);
	if (!Function_180(Function_182(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_100(int iParam0) //Position: 0x83CA / 33738
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_101(bool bParam0) //Position: 0x83E0 / 33760
{
	if (Function_13(bParam0, 1) && !Function_13(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_102(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x840D / 33805
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_179(12);
	Function_177(2);
	Function_175((15 - Function_176(105)));
	if (Function_174(bParam0) == 1)
	{
		iVar2 = Function_173(bParam0);
		Function_167(&(Global_3422[iVar240]));
		Function_166(4194304);
		if (bParam3)
		{
			Function_142(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_137(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_142(iVar2, &uVar0, 0);
		}
		bVar1 = Function_136();
		if (bParam1)
		{
			Function_121(iVar2, bParam0, bVar1);
			Function_120();
		}
	}
	Function_105(bParam0, bParam1, uParam2, bVar1);
	if (Function_174(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_104(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_174(bParam0) == 1)
		{
			iVar2 = Function_173(bParam0);
			if (iVar2 != 1)
			{
				(&Global_12976 + 36)->f_32++;
				if ((&Global_12976 + 36)->f_32 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_103();
}

void Function_103() //Position: 0x84FA / 34042
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_189(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

void Function_104(int iParam0, bool bParam1) //Position: 0x852A / 34090
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		return;
	}
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000018:
			iVar0 = 2;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_66(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_66(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_66(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_66(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_66(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_66(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_104(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_104(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_104(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_104(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_104(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_104(57, 0);
			}
			break;
	}
	if (iVar0 != 4294967295)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			AWARD_ACHIEVEMENT(iVar0);
		}
	}
	return;
}

void Function_105(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8821 / 34849
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_180(bParam0))
	{
		Function_118();
		return;
	}
	bVar0 = Function_174(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_117())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_173(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_116(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_16(Global_6269) };
		}
		if (Function_117())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_114();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
		}
	}
	if (Function_117())
	{
		Function_113();
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_112("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_107(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (bVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_173(bParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_21(1);
			Function_78(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_106(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_106(int iParam0, int iParam1) //Position: 0x8A75 / 35445
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_107(bool bParam0) //Position: 0x8AAF / 35503
{
	int iVar0;
	int iVar1;
	
	if (!Function_111(bParam0))
	{
		return;
	}
	switch (Function_174(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_173(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_80(12, 1, 0, 0);
				Function_110(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_80(13, 1, 0, 0);
				Function_110(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_80(14, 1, 0, 0);
				Function_110(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_80(15, 1, 0, 0);
				Function_110(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_80(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_173(bParam0))
			{
				case 0x00000000:
					if (Function_109(bParam0) == 1)
					{
						iVar0 = Function_108(bParam0);
						if (Function_11(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_110(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_110(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_110(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_110(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_110(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_110(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_110(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_110(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_110(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_110(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_110(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_110(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_110(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_110(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_110(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_110(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_110(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_110(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_110(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_110(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_80(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_80(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_80(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_108(bParam0) == 0)
			{
				if (Function_109(bParam0) == 1)
				{
					Function_80(458, 1, 0, 0);
					iVar0 = Function_173(bParam0);
					if (Function_11(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_110(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_110(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_110(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_110(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_110(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_110(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_110(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_110(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_109(bParam0) == 1)
			{
				Function_80(400, 1, 0, 0);
			}
			switch (Function_173(bParam0))
			{
				case 0x00000001:
					Function_80(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_110(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_110(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_110(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_80(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_110(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_110(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

int Function_108(bool bParam0) //Position: 0x8F8B / 36747
{
	if (!Function_111(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

int Function_109(bool bParam0) //Position: 0x8FAA / 36778
{
	if (!Function_111(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_110(int iParam0, bool bParam1) //Position: 0x8FC4 / 36804
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

bool Function_111(int iParam0) //Position: 0x902B / 36907
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_112(char* cParam0, bool bParam1) //Position: 0x9042 / 36930
{
	struct<4> Var0;
	
	if (!Function_180(bParam1))
	{
		return;
	}
	switch (Function_174(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_89(Function_173(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_174(bParam1), Function_173(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_174(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_174(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_174(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_174(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_174(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_113() //Position: 0x9166 / 37222
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_20(0));
	PLAYSTAT_INT("HC_FAME", Function_20(3));
	PLAYSTAT_INT("HC_HONOR", Function_20(1));
	return;
}

void Function_114() //Position: 0x92BE / 37566
{
	int iVar0;
	int iVar1;
	
	if (!Function_100(Global_6269))
	{
		return;
	}
	iVar0 = Function_20(24);
	iVar1 = Function_182(Global_6269);
	if (!Function_100(iVar0) && Function_115(iVar1) < 0)
	{
		Function_208(24, Global_6269, 0);
		Function_206(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_115(Function_182(iVar0)))
	{
		Function_208(24, Global_6269, 0);
		Function_206(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_115(int iParam0) //Position: 0x933E / 37694
{
	if (!Function_180(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<24> Function_116(char* cParam0) //Position: 0x9358 / 37720
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_117() //Position: 0x95AE / 38318
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_118() //Position: 0x95D9 / 38361
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_119(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_119(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x9820 / 38944
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

void Function_120() //Position: 0x9849 / 38985
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_121(int iParam0, int iParam1, bool bParam2) //Position: 0x9877 / 39031
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_100(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_135(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_89(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_20(42) - Global_34165.f_116);
				bVar1 = (Function_20(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_89(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_45(49)) - Global_34165.f_124);
				bVar3 = (Function_20(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_89(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_20(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_89(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_89(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_134(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_122(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_3422[iParam040] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_16(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_34165.f_136 = 0.0f;
	Global_34165.f_140 = 0.0f;
	Global_34165.f_116 = 0;
	Global_34165.f_120 = 0;
	Global_34165.f_124 = 0;
	Global_34165.f_128 = 0;
	return;
}

void Function_122(int iParam0, bool bParam1, bool bParam2) //Position: 0x9B13 / 39699
{
	int iVar0;
	bool bVar1;
	
	if (Function_133(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_117())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_20(3);
	Function_131();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_129(3, bVar1);
		if (!bParam2)
		{
			if (!Function_96(Global_76848, 4))
			{
				Function_66(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_80(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_44(3));
	iVar0 = Function_20(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_124(4, Function_128(Global_12976.f_156), 1);
				Function_123(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_124(4, Function_128(Global_12976.f_156), 1);
				Function_123(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_124(4, Function_128(Global_12976.f_156), 1);
				Function_123(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_124(4, Function_128(Global_12976.f_156), 1);
				Function_123(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_124(4, Function_128(Global_12976.f_156), 1);
				Function_123(Global_12976.f_152, Global_12976.f_156);
				if (Global_12976.f_152 != 6 || Global_12976.f_152 != 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

void Function_123(int iParam0, int iParam1) //Position: 0x9CE2 / 40162
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_124(int iParam0, char* cParam1, bool bParam2) //Position: 0x9F40 / 40768
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_206(iParam0, cParam1, 0, 1);
	iVar1 = Function_125();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

int Function_125() //Position: 0xA0C5 / 41157
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_48 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_126();
	return 0;
}

void Function_126() //Position: 0xA164 / 41316
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_49199 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_49199[iVar0] = Global_49199[iVar1];
		Global_49205[iVar020] = { StackVal, Global_49205[iVar120] };
		*(&Global_49205[iVar020] + 8) = { StackVal, *(&Global_49205[iVar120] + 8) };
		*(&Global_49205[iVar020] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_49205[iVar120] + 16) };
		Global_49205[iVar020].f_48 = Global_49205[iVar120].f_48;
		Global_49205[iVar020].f_68 = Global_49205[iVar120].f_68;
		Global_49205[iVar020].f_72 = Global_49205[iVar120].f_72;
		Function_127(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_127(int iParam0) //Position: 0xA213 / 41491
{
	Global_49199[iParam0] = 0.0f;
	strcpy(&(Global_49205[iParam020]), "", 8);
	strcpy(&Global_49205[iParam020] + 8, "", 8);
	strcpy(&Global_49205[iParam020] + 16, "", 32);
	Global_49205[iParam020].f_48 = 4294967295;
	Global_49205[iParam020].f_52 = 4294967295;
	Global_49205[iParam020].f_68 = 4294967295;
	Global_49205[iParam020].f_72 = 4294967295;
	return;
}

var Function_128(int iParam0) //Position: 0xA271 / 41585
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_ntr1";
			break;
		
		case 0x00000001:
			return "sr_ntr2";
			break;
		
		case 0x00000002:
			return "sr_ntr3";
			break;
		
		case 0x00000003:
			return "sr_ntr4";
			break;
		
		case 0x00000004:
			return "sr_ntr5";
			break;
		
		case 0x00000005:
			return "sr_ntr6";
			break;
	}
	return "sr_ntr1";
}

int Function_129(int iParam0, bool bParam1) //Position: 0xA300 / 41728
{
	bool bVar0;
	int iVar1;
	
	Function_80(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_130(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_125();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_130(int iParam0, int iParam1) //Position: 0xA49D / 42141
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_68 == iParam0)
		{
			if (iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_131() //Position: 0xA4DE / 42206
{
	Function_132(3, 0.0f);
	Function_19(3, 10000.0f);
	return;
}

int Function_132(int iParam0, int iParam1) //Position: 0xA4F4 / 42228
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_133(int iParam0) //Position: 0xA534 / 42292
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_134(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0xA543 / 42307
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_5743[iParam09] + 12)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_5743[iParam09] + 12)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	bParam3 = (bParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (bParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (bParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (bParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (bParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (bParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (bParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			iVar2 = 3;
			iVar3 = (iVar0 + iVar1);
			if (iVar3 > 6)
			{
				return 1;
			}
			if (iVar3 > 4)
			{
				return 2;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (bParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (bParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (bParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (bParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		default:
			iVar1 = 3;
			iVar2 = 3;
			if (iVar0 == 3)
			{
				return 1;
			}
			if (iVar0 == 2)
			{
				return 2;
			}
			return 3;
			break;
	}
	iVar3 = ((iVar0 + iVar1) + iVar2);
	if (iVar3 > 9)
	{
		return 1;
	}
	if (iVar3 > 6)
	{
		return 2;
	}
	return 3;
}

int Function_135(int iParam0) //Position: 0xA70B / 42763
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

var Function_136() //Position: 0xA7A0 / 42912
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_137(int iParam0) //Position: 0xA7C5 / 42949
{
	if (!Function_100(iParam0))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_122(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_122(25, 1, 0);
			Function_219(1, 1);
			break;
		
		case 0x00000015:
			Function_219(50, 1);
			Function_122(250, 1, 0);
			Function_138(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_122(75, 1, 0);
			Function_138(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_122(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_219(50, 1);
			Function_122(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_219(5, 1);
			Function_138(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_122(75, 1, 0);
			Function_138(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_219(5, 1);
			Function_122(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_122(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_138(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_219(25, 1);
			Function_122(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_219(10, 1);
			Function_122(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_122(50, 1, 0);
			Function_138(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_122(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_122(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_138(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_219(20, 1);
			Function_122(75, 1, 0);
			Function_138(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_219(25, 1);
			Function_122(150, 1, 0);
			Function_138(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_219(10, 1);
			Function_122(150, 1, 0);
			Function_138(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_122(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_138(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_138(100, 1, 0);
			Function_219(5, 1);
			break;
		
		case 0x0000000F:
			Function_219(3, 1);
			Function_122(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_138(125, 1, 0);
			Function_122(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_219(50, 1);
			Function_122(100, 1, 0);
			Function_138(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_219(50, 1);
			Function_122(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_219(75, 1);
			Function_122(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_122(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_122(75, 1, 0);
			Function_138(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_122(250, 1, 0);
			Function_138(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_122(75, 1, 0);
			Function_138(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_122(200, 1, 0);
			Function_138(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_122(75, 1, 0);
			Function_138(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_122(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_219(50, 1);
			Function_122(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_219(100, 1);
			Function_122(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_122(200, 1, 0);
			Function_138(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_122(300, 1, 0);
			Function_138(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_122(300, 1, 0);
			Function_138(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_122(300, 1, 0);
			Function_138(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_122(500, 1, 0);
			Function_138(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_122(150, 1, 0);
			Function_138(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_138(25, 1, 0);
			Function_219(100, 1);
			break;
		
		case 0x0000002A:
			Function_122(150, 1, 0);
			Function_138(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_138(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_138(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_138(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_138(150, 1, 0);
			Function_219(100, 1);
			break;
		
		case 0x00000035:
			Function_138(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_138(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_138(150, 1, 0);
			Function_219(100, 1);
			break;
		
		case 0x00000032:
			Function_138(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_138(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_138(int iParam0, bool bParam1, bool bParam2) //Position: 0xAC80 / 44160
{
	int iVar0;
	bool bVar1;
	
	if (Function_133(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_117())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_20(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_129(1, bVar1);
			if (!bParam2)
			{
				if (!Function_96(Global_76848, 1))
				{
					Function_66(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_141(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_96(Global_76848, 2))
				{
					Function_66(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_80(1, bVar1, 0, 0);
	}
	else
	{
		Function_140(1, (4294967295 * bVar1), 0);
	}
	if (Function_20(1) <= 4294962296)
	{
		Function_208(1, 4294962296, 0);
	}
	else if (Function_20(1) >= 5000)
	{
		Function_208(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_44(1));
	iVar0 = Function_20(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_124(2, Function_139(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_124(2, Function_139(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_124(2, Function_139(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_124(2, Function_139(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_124(2, Function_139(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_124(2, Function_139(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_124(2, Function_139(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_124(2, Function_139(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_124(2, Function_139(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_124(2, Function_139(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_124(2, Function_139(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_12976.f_152 = 5;
				Function_124(2, Function_139(Global_12976.f_152), 0);
			}
			break;
	}
	Function_123(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_139(int iParam0) //Position: 0xAFA1 / 44961
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

int Function_140(int iParam0, bool bParam1, int iParam2) //Position: 0xB044 / 45124
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(bParam1));
	Function_46(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_35(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

int Function_141(int iParam0, bool bParam1) //Position: 0xB23F / 45631
{
	bool bVar0;
	int iVar1;
	
	Function_140(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_130(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_125();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_142(int iParam0, var uParam1, bool bParam2) //Position: 0xB3DB / 46043
{
	struct<4> Var0;
	
	if (!Function_100(iParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_164(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_183(Global_30640[0]);
			Function_183(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_162(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_183(Global_30668[0]);
			Function_155(0);
			Function_153(2, 1);
			Function_153(0, 1);
			Function_153(1, 1);
			break;
		
		case 0x00000003:
			Function_183(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_183(Global_30668[0]);
			Function_183(Global_30640[0]);
			Function_151(0, 1);
			Function_151(15, 1);
			Function_151(9, 1);
			Function_151(12, 1);
			Function_151(16, 1);
			Function_153(3, 1);
			break;
		
		case 0x00000005:
			Function_183(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_162(21, bParam2, 4);
			Function_183(Global_30668[0]);
			Function_153(39, 1);
			break;
		
		case 0x00000007:
			Function_183(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_183(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_188())
				{
					if (!Function_81(4))
					{
						Function_65(4, 0, 0, 1, 0);
					}
				}
			}
			Function_183(Global_30640[0]);
			Function_183(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_183(Global_30640[0]);
			Function_183(Global_30668[2]);
			Function_150(&(Global_29008[Global_30668[2]]), 32768);
			Function_149(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_162(9, bParam2, 4);
			Function_183(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_183(Global_30640[0]);
			Function_183(Global_30658[0]);
			Function_150(&(Global_29008[Global_30658[0]]), 32768);
			Function_149(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_183(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_183(Global_30640[0]);
			Function_183(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_183(Global_30640[1]);
			Function_183(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_183(Global_30679[0]);
			Function_183(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_183(Global_30658[5]);
			Function_183(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_162(21, bParam2, 4);
			Function_183(Global_30640[4]);
			Function_183(Global_30658[4]);
			Function_94(&Global_76847, 0x2000000);
			Function_94(&Global_76847, 0x4000000);
			Function_94(&Global_76847, 4096);
			Function_94(&Global_76847, 8);
			Function_94(&Global_76847, 8388608);
			Function_94(&Global_76847, 524288);
			Function_94(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_183(Global_30640[4]);
			Function_183(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_149(&(Global_29008[Global_30640[4]]), 256);
			Function_183(Global_30640[4]);
			Function_183(Global_30658[0]);
			Function_150(&(Global_29008[Global_30658[0]]), 32768);
			Function_149(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_183(Global_30640[0]);
			Function_183(Global_30640[5]);
			Function_162(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_183(Global_30658[3]);
			Function_150(&(Global_29008[Global_30658[3]]), 32768);
			Function_149(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_162(9, bParam2, 4);
			Function_183(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_150(&(Global_29008[Global_30679[1]]), 32768);
			Function_183(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_162(12, bParam2, 4);
			Function_149(&(Global_29008[Global_30679[1]]), 256);
			Function_183(Global_30668[3]);
			Function_183(Global_30693[0]);
			Function_183(Global_30685[0]);
			Function_155(4);
			Function_151(13, 1);
			Function_151(1, 1);
			Function_151(18, 1);
			Function_153(34, 1);
			Function_153(44, 1);
			Function_153(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_162(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_183(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_183(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_183(Global_30693[0]);
			Function_183(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_183(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_183(Global_30685[0]);
			Function_183(Global_30693[0]);
			Function_183(Global_30693[1]);
			Function_183(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_162(23, bParam2, 3);
			Function_151(23, 1);
			Function_183(Global_30685[0]);
			Function_183(Global_30685[2]);
			Function_150(&(Global_29008[Global_30685[2]]), 32768);
			Function_149(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_162(19, bParam2, 4);
			Function_183(Global_30685[0]);
			Function_183(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_162(24, bParam2, 3);
			Function_151(24, 1);
			Function_183(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_183(Global_30685[0]);
			Function_183(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_183(Global_30693[12]);
			Function_183(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_183(Global_30693[12]);
			Function_183(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_162(25, bParam2, 10);
			Function_183(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_183(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_183(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_162(13, bParam2, 4);
			Function_183(Global_30693[2]);
			Function_183(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_81(8))
				{
					Function_65(8, 0, 0, 1, 0);
				}
			}
			Function_183(Global_30685[0]);
			Function_155(9);
			Function_151(7, 1);
			Function_151(11, 1);
			Function_151(3, 1);
			Function_151(20, 1);
			Function_153(57, 1);
			break;
		
		case 0x0000002A:
			Function_162(2, bParam2, 4);
			Function_183(Global_30717[0]);
			Function_183(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_183(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_183(Global_30717[0]);
			Function_183(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_183(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_183(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_183(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_162(17, bParam2, 4);
			Function_183(Global_30723[0]);
			Function_183(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_85(15))
				{
					Function_190(15, 0, 1);
				}
			}
			Function_110(2, 26);
			Function_149(&(Global_29008[Global_30717[1]]), 256);
			Function_155(11);
			Function_183(Global_30717[1]);
			Function_183(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_183(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_183(Global_30717[1]);
			Function_183(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_183(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_183(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_183(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_183(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_183(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_183(Global_30717[1]);
			Function_143(11);
			Function_155(12);
			Global_16537[1121].f_40 = 0;
			Function_153(56, 1);
			if (!bParam2)
			{
				if (!Function_81(9))
				{
					Function_65(9, 0, 0, 0, 0);
				}
				if (!Function_81(10))
				{
					Function_65(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_89(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_143(int iParam0) //Position: 0xBCD9 / 48345
{
	bool bVar0;
	
	if (!Function_52(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_148(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_148(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), false);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_144(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_REMOVE(Global_16537[iParam021].f_80, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_144(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xBE48 / 48712
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal && Global_8723[iVar04] != iParam0 != iParam1)
			{
				Global_8723[iVar04] = 4294967294;
				Global_8723[iVar04].f_4 = 0;
				Global_8723[iVar04].f_8 = 0;
				if (IS_BLIP_VALID(Global_9724[iVar0]))
				{
					REMOVE_BLIP(Global_9724[iVar0]);
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_146(Function_147(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_146(Function_147(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_146(StackVal);
				vVar1 = { StackVal, StackVal, Function_146(StackVal) };
				if (Function_145(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
				{
					Global_8723[iVar04] = 4294967294;
					Global_8723[iVar04].f_4 = 0;
					Global_8723[iVar04].f_8 = 0;
					if (IS_BLIP_VALID(Global_9724[iVar0]))
					{
						REMOVE_BLIP(Global_9724[iVar0]);
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_145(vector3 vParam0, vector3 vParam3) //Position: 0xBF4E / 48974
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_146(bool bParam0) //Position: 0xBF7B / 49019
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = (SHIFT_RIGHT(bParam0, 15) && 32767);
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if ((bParam0 && 1073741824) == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((bParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_147(vector3 vParam0) //Position: 0xBFD2 / 49106
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

void Function_148(bool bParam0, bool bParam1) //Position: 0xC020 / 49184
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

void Function_149(var uParam0, int iParam1) //Position: 0xC074 / 49268
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_150(var uParam0, int iParam1) //Position: 0xC08B / 49291
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_151(int iParam0, int iParam1) //Position: 0xC09A / 49306
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_152(iParam0, iParam1);
	Function_66(Global_34573, 1, 4, 1);
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0xC10D / 49421
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0xC169 / 49513
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_154(iParam0, iParam1);
	Function_66(Global_34573, 1, 4, 1);
	return 1;
}

int Function_154(int iParam0, int iParam1) //Position: 0xC1DA / 49626
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_155(int iParam0) //Position: 0xC234 / 49716
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_52(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_161(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_161(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), true);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Function_80(468, 1, 0, 0);
			Function_110(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_15("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_144(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_65(14, 1, 0, 0, 0);
				Function_156(14, 1, 0, 0, 0);
			}
			if (!Function_205(0, 0, 1, 1))
			{
				Function_21(1);
				Function_78(1, 6);
			}
			else
			{
				Function_77();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			bVar1 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar1))
			{
				DECOR_REMOVE(bVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_15("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_80(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_110(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_156(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xC4E1 / 50401
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_84(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_83(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_82(bParam0, 2))
	{
		Function_80(456, 1, 0, 0);
		Function_79(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_15(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_75(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_79(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_205(0, 0, 1, 1))
			{
				Function_21(1);
				Function_78(1, 0);
			}
			else
			{
				Function_77();
			}
		}
		Function_71(bParam0);
		if (StackVal && !Function_13(((((!Function_91() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_13((((Function_91() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_17())
		{
			if (!Function_96(Global_76846, 2))
			{
				Function_66(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_158();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_157(3, bParam1);
				break;
			
			case 0x00000005:
				Function_157(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_157(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_157(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_157(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_157(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_110(2, 24);
				break;
			
			case 0x00000003:
				Function_110(2, 25);
				break;
			
			case 0x0000000F:
				Function_110(2, 26);
				break;
			
			case 0x0000000D:
				Function_110(2, 27);
				break;
			
			case 0x0000000E:
				Function_110(2, 28);
				break;
			}
	}
}

void Function_157(int iParam0, bool bParam1) //Position: 0xC777 / 51063
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_158() //Position: 0xC7E2 / 51170
{
	if (Function_84(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_160(Global_28180);
			Global_28180.f_8 = Function_159(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_160(Global_28180);
			Global_28180.f_8 = Function_159(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_159(int iParam0, int iParam1) //Position: 0xC85D / 51293
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_189(6, 0) || Function_189(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_60(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_189(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_60(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_60(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_60(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_60(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_189(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_60(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_60(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_60(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_60(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_60(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_60(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_60(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_189(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_60(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_189(6, 0) && Function_60(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_60(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_189(9, 0) && Function_60(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_60(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_189(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_49(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_49(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_49(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_160(int iParam0) //Position: 0xD44E / 54350
{
	int iVar0;
	int iVar1;
	
	if (!Function_84(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

void Function_161(bool bParam0, bool bParam1) //Position: 0xD49D / 54429
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0xD4EE / 54510
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_163(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_164(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_3381 && iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_163(int iParam0, int iParam1) //Position: 0xD55C / 54620
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

int Function_164(bool bParam0, bool bParam1, int iParam2) //Position: 0xD56F / 54639
{
	if (!Function_165(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_28(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_28(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_28(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_165(int iParam0) //Position: 0xD5C6 / 54726
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_166(bool bParam0) //Position: 0xD5D8 / 54744
{
	bool bVar0;
	
	if (Function_13(bParam0, 1) && Function_13(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_167(int iParam0) //Position: 0xD60C / 54796
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_168(4, 0, 0);
		}
	}
	return;
}

void Function_168(int iParam0, int iParam1, int iParam2) //Position: 0xD673 / 54899
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
		Function_169(Global_16524, bVar0, 1);
	}
	return;
}

void Function_169(int iParam0, bool bParam1, bool bParam2) //Position: 0xD759 / 55129
{
	int iVar0;
	
	Function_172(iParam0);
	Function_171(bParam1);
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
	Function_170();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_170() //Position: 0xD8D2 / 55506
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_171(bool bParam0) //Position: 0xD8DE / 55518
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

void Function_172(int iParam0) //Position: 0xD924 / 55588
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

int Function_173(bool bParam0) //Position: 0xD96A / 55658
{
	if (!Function_111(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

int Function_174(bool bParam0) //Position: 0xD98A / 55690
{
	if (!Function_111(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_175(int iParam0) //Position: 0xD9A5 / 55717
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_176(105)), 0);
	return;
}

int Function_176(int iParam0) //Position: 0xD9C6 / 55750
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_177(bool bParam0) //Position: 0xD9DC / 55772
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_171(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_171(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_171(Global_12976.f_24);
	PRINTNL();
	Function_178(bParam0);
	return;
}

void Function_178(int iParam0) //Position: 0xDA78 / 55928
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_176(90)), 0);
	return;
}

void Function_179(bool bParam0) //Position: 0xDA99 / 55961
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

bool Function_180(int iParam0) //Position: 0xDAB4 / 55988
{
	if (!Function_111(iParam0))
	{
		return 0;
	}
	if (!Function_181(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_181(int iParam0) //Position: 0xDAD8 / 56024
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_182(int iParam0) //Position: 0xDAED / 56045
{
	if (!Function_100(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_183(int iParam0) //Position: 0xDB07 / 56071
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_185(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_150(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_80(473, 1, 0, 0);
		iVar0 = Function_184(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_80(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_80(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_80(476, 1, 0, 0);
		}
	}
	bVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (bVar1 >= 30)
	{
		bVar1 = (bVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_110(iVar2, bVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_110(7, 30);
	}
	if (Function_44(473) <= Function_45(473))
	{
		if (!Function_306())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_184(int iParam0) //Position: 0xDC06 / 56326
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_11(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

bool Function_185(var uParam0, int iParam1) //Position: 0xDC5E / 56414
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_186(int iParam0) //Position: 0xDC7A / 56442
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (!Function_187((*iParam0)[iVar0]))
		{
			Function_183((*iParam0)[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool Function_187(int iParam0) //Position: 0xDCAB / 56491
{
	if (!Function_11(iParam0))
	{
		return 0;
	}
	return Function_185(&(Global_29008[iParam0]), 4096);
}

bool Function_188() //Position: 0xDCC9 / 56521
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_13(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_189(int iParam0, bool bParam1) //Position: 0xDCF9 / 56569
{
	int iVar0;
	
	iVar0 = Function_182(iParam0);
	if (!Function_111(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

void Function_190(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDD36 / 56630
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_84(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_85(bParam0))
	{
		if (!Function_81(bParam0))
		{
			Function_65(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, false, 0, 2, 0, 0, 0);
			}
		}
		Function_80(457, 1, 0, 0);
		Function_79(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_205(0, 0, 1, 1))
			{
				Function_21(1);
				Function_78(1, 0);
			}
			else
			{
				Function_77();
			}
		}
	}
	return;
}

var Function_191(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0xDED5 / 57045
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
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			bVar15 = "";
			if (Function_194(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_193(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_192(bVar16, &iVar1))
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
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, bVar18, 0);
			bVar18++;
		}
	}
	return bVar0;
}

bool Function_192(int iParam0, int iParam1) //Position: 0xE109 / 57609
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

var Function_193(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0xE13B / 57659
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1, vParam1);
}

int Function_194(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xE153 / 57683
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

var Function_195() //Position: 0xE17A / 57722
{
	int iVar0;
	
	return iVar0;
}

bool Function_196(bool bParam0) //Position: 0xE182 / 57730
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_197(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xE199 / 57753
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam1, bParam2, bParam3, 0, 0.0f, 0.0f, 0.0f);
}

void Function_198(var uParam0, var uParam1) //Position: 0xE1B0 / 57776
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_172(uParam0);
	Function_171(iVar0);
	PRINTNL();
	Function_169(uParam0, iVar0, uParam1);
	return;
}

var Function_199() //Position: 0xE1D5 / 57813
{
	return StackVal;
}

var Function_200() //Position: 0xE1E0 / 57824
{
	return Global_34578 != 1;
}

bool Function_201(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE1EB / 57835
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(false))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_204(bParam0))
	{
		return 1;
	}
	if (Function_203(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(bParam0) && !bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 1;
	}
	if (Function_202())
	{
		return 1;
	}
	return 0;
}

bool Function_202() //Position: 0xE2A1 / 58017
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_203(bool bParam0) //Position: 0xE2B8 / 58040
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_204(bool bParam0) //Position: 0xE2C3 / 58051
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

bool Function_205(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xE2D1 / 58065
{
	iParam0 = iParam0;
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
	if (Global_3393 && iParam2)
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
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

int Function_206(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xE375 / 58229
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_207(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_207(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0xE6C7 / 59079
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_208(int iParam0, bool bParam1, bool bParam2) //Position: 0xE74A / 59210
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
		Function_47(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_46(iParam0);
	if (bParam2)
	{
		Function_35(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_209() //Position: 0xE9E5 / 59877
{
	return;
}

void Function_210(bool bParam0) //Position: 0xE9EB / 59883
{
	if (Global_3403 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_3403 = 1;
		if (!Global_27759)
		{
			if (IS_FACTION_VALID(Global_26361))
			{
				SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 6);
			}
		}
		Global_13111 = 0;
	}
	else
	{
		Global_3403 = 0;
		Global_3405 = 0;
		Function_211();
		if (IS_FACTION_VALID(Global_26361))
		{
			SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 2);
		}
		SET_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
		SET_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
		if (IS_SCRIPT_VALID(Global_26316.f_60))
		{
			TERMINATE_SCRIPT(Global_26316.f_60);
		}
		if (IS_SCRIPT_VALID(Global_26316.f_64))
		{
			TERMINATE_SCRIPT(Global_26316.f_64);
		}
		Global_13111 = 4294967295;
	}
	return;
}

void Function_211() //Position: 0xEA76 / 60022
{
	int iVar0;
	
	Global_26960 = Function_307(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

void Function_212(int iParam0, bool bParam1) //Position: 0xEAC4 / 60100
{
	if (!Function_214(iParam0))
	{
		return;
	}
	Global_26401[iParam0] = bParam1;
	Function_213((*&Global_26401 + 2220)[iParam0], TO_FLOAT(bParam1), 0);
	Function_213(222, TO_FLOAT((Function_20(223) + Function_20(224))), 0);
	return;
}

int Function_213(int iParam0, bool bParam1, bool bParam2) //Position: 0xEB05 / 60165
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > bParam1)
	{
		Function_47(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_46(iParam0);
	if (bParam2)
	{
		Function_35(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

bool Function_214(int iParam0) //Position: 0xED71 / 60785
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_215(int iParam0, bool bParam1) //Position: 0xED86 / 60806
{
	if (!Function_214(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_140(222, Global_26401[iParam0], 0);
		if (Function_20(222) <= 0)
		{
			Function_208(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_208((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_140((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_140(222, bParam1, 0);
	}
	return;
}

void Function_216(int iParam0, bool bParam1) //Position: 0xEE0F / 60943
{
	if (!Function_214(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_26401[iParam0] = (Global_26401[iParam0] + bParam1);
	Function_80((*&Global_26401 + 2220)[iParam0], bParam1, 0, 0);
	Function_80(222, bParam1, 0, 0);
	return;
}

void Function_217(int iParam0) //Position: 0xEE54 / 61012
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_218(int iParam0) //Position: 0xEE67 / 61031
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

int Function_219(bool bParam0, bool bParam1) //Position: 0xEE84 / 61060
{
	bool bVar0;
	
	bVar0 = Function_20(0);
	if ((Function_20(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_80(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_20(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_80(597, bParam0, 0, 0);
	}
	if ((Function_20(597) + Function_20(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_220(int iParam0) //Position: 0xEF4F / 61263
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	
	if (Function_306())
	{
		return;
	}
	if (!IS_OBJECT_VALID(iParam0->f_60))
	{
		return;
	}
	if (Global_3380)
	{
		return;
	}
	fVar0 = GET_PROFILE_TIME();
	if (IS_OBJECT_VALID(iParam0->f_68))
	{
		if ((STREAMING_IS_WORLD_LOADED() && (fVar0 - iParam0->f_72) < 5000000.0f) || (fVar0 - iParam0->f_72) < 1E+07.0f)
		{
			Function_227(iParam0, iParam0->f_68);
			REFERENCE_OBJECT(iParam0->f_64);
			iParam0->f_68 = "";
			Function_226(iParam0);
			STREAMING_UNLOAD_SCENE();
			GET_OBJECT_POSITION(GET_GAME_CAMERA(), &vVar1);
			GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar4);
			STREAMING_LOAD_SCENE_EXT(vVar1, vVar4, 1);
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_64))
	{
		GET_CAMERA_POSITION(iParam0->f_60, &vVar1);
		if (VDIST(vVar1, *(iParam0 + 24)) < 1.0f)
		{
			SET_CAMERA_POSITION(iParam0->f_60, *(iParam0 + 24));
			SET_CAMERA_TARGET_POSITION(iParam0->f_60, *(iParam0 + 36), 0);
			*(iParam0 + 12) = { StackVal, StackVal, *(iParam0 + 36) };
		}
	}
	if (!IS_OBJECT_VALID(iParam0->f_64))
	{
		return;
	}
	GET_OBJECT_POSITION(iParam0->f_64, &vVar8);
	if (((VDIST(vVar8, *iParam0) < 150.0f && !GET_OBJECT_TYPE(iParam0->f_64) != 8) && !IS_OBJECT_VALID(iParam0->f_68)) || !IS_OBJECT_VALID(iParam0->f_64))
	{
		iParam0->f_68 = Function_225(iParam0);
		if (IS_OBJECT_VALID(iParam0->f_68))
		{
			STREAMING_UNLOAD_SCENE();
			GET_OBJECT_POSITION(iParam0->f_68, &vVar11);
			GET_OBJECT_ORIENTATION(iParam0->f_68, &vVar14);
			STREAMING_LOAD_SCENE_EXT(vVar11, vVar14, 1);
			iParam0->f_72 = fVar0;
			Function_224(iParam0, Function_28());
			Function_226(iParam0);
		}
	}
	Function_221(iParam0, fVar0);
	if (Function_49(StackVal, StackVal, *(iParam0 + 24)))
	{
	}
	if (Function_49(StackVal, StackVal, *(iParam0 + 36)))
	{
	}
	return;
}

void Function_221(var uParam0, int iParam1) //Position: 0xF0DB / 61659
{
	Function_223(uParam0);
	Function_222(uParam0);
	uParam0->f_48 = iParam1;
	return;
}

void Function_222(int iParam0) //Position: 0xF0F1 / 61681
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 36) };
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 80), vVar0, StackVal) };
	SET_CAMERA_TARGET_POSITION(iParam0->f_60, vVar0, 0);
	return;
}

void Function_223(int iParam0) //Position: 0xF11C / 61724
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(iParam0->f_64, iParam0 + 24);
	GET_OBJECT_AXIS(iParam0->f_64, &vVar0, 2);
	VNORMALIZE(&vVar0);
	VSCALE(&vVar0, -30.0f);
	*(iParam0 + 36) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *(iParam0 + 24), StackVal) };
	return;
}

void Function_224(int iParam0, int iParam1) //Position: 0xF159 / 61785
{
	int iVar0;
	
	iParam0->f_64 = iParam1;
	iParam0->f_76 = GET_PROFILE_TIME();
	iVar0 = 31;
	ADD_CAMERA_COLLISION_EXCLUSION(iParam0->f_60, iParam0->f_64, iVar0);
	return;
}

var Function_225(int iParam0) //Position: 0xF17D / 61821
{
	bool bVar0;
	var uVar1;
	bool bVar4;
	int iVar5;
	bool bVar6;
	
	bVar0 = CREATE_NAMED_OBJECT_ITERATOR(iParam0->f_112, "pauseTargetSelector");
	GET_OBJECT_POSITION(iParam0->f_64, &uVar1);
	ITERATE_IN_LAYOUT(bVar0, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 8);
	ITERATE_ON_PARTIAL_NAME(bVar0, "nvista_cam");
	bVar4 = RAND_INT_RANGE(false, GET_NUM_ITERATOR_MATCHES(bVar0) * 10000);
	bVar4 = FLOOR((TO_FLOAT(bVar4) / 10000.0f));
	bVar6 = START_OBJECT_ITERATOR(bVar0);
	iVar5 = 0;
	while (iVar5 < (bVar4 - 1))
	{
		bVar6 = OBJECT_ITERATOR_NEXT(bVar0);
		iVar5++;
	}
	DESTROY_ITERATOR(bVar0);
	return bVar6;
}

void Function_226(int iParam0) //Position: 0xF214 / 61972
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(iParam0->f_64, iParam0 + 92);
	iParam0->f_104 = 0.0f;
	GET_OBJECT_POSITION(iParam0->f_64, iParam0 + 24);
	GET_OBJECT_AXIS(iParam0->f_64, &vVar0, 2);
	VNORMALIZE(&vVar0);
	VSCALE(&vVar0, -30.0f);
	*(iParam0 + 36) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *(iParam0 + 24), StackVal) };
	return;
}

void Function_227(var uParam0, bool bParam1) //Position: 0xF262 / 62050
{
	if (IS_OBJECT_VALID(bParam1))
	{
		Function_224(uParam0, bParam1);
		Function_226(uParam0);
	}
	return;
}

int Function_228() //Position: 0xF27C / 62076
{
	bool bVar0;
	
	Function_257(0);
	if (!IS_ITERATOR_VALID(Global_26149))
	{
		return 0;
	}
	bVar0 = START_OBJECT_ITERATOR(Global_26149);
	while (IS_OBJECT_VALID(bVar0))
	{
		Function_229(GET_EVENT_FROM_OBJECT(bVar0));
		bVar0 = OBJECT_ITERATOR_NEXT(Global_26149);
	}
	return 0;
}

void Function_229(bool bParam0) //Position: 0xF2B6 / 62134
{
	struct<17> Var0;
	bool bVar44;
	bool bVar45;
	int iVar46;
	int iVar47;
	char* cVar48[64];
	char* cVar64[64];
	struct<4> Var80;
	struct<4> Var84;
	bool bVar88;
	bool bVar89;
	vector3 vVar90;
	vector3 vVar93;
	bool bVar96;
	
	if (!IS_EVENT_VALID(bParam0))
	{
		return;
	}
	*(&Var0 + 80) = 3;
	bVar96 = GET_EVENT_TYPE(bParam0);
	switch (bVar96)
	{
		case 0x00000063:
			if (!DECOR_CHECK_EXIST(bParam0, "Mission"))
			{
				return;
			}
			bVar44 = DECOR_GET_INT(bParam0, "Mission");
			Var0 = 1;
			bVar89 = false;
			while (Function_100(Var0) && !bVar89)
			{
				Var80 = { StackVal, StackVal, StackVal, *(&Global_3422[Var040] + 12) };
				Var84 = { StackVal, StackVal, StackVal, Function_16(Var0) };
				if (STRING_TO_HASH(&Var80) != bVar44 || STRING_TO_HASH(&Var84) != bVar44)
				{
					bVar89 = true;
				}
				else
				{
					Var0++;
				}
			}
			if (!Function_100(Var0))
			{
				return;
			}
			if (!Function_205(0, 0, 1, 1))
			{
				Function_21(1);
			}
			Var0.f_16 = 1;
			*(&Var0 + 4) = { StackVal, StackVal, *(&Global_3422[Var040] + 52) };
			bVar88 = Function_256(Var0);
			if (!STRINGS_ARE_EQUAL(bVar88, ""))
			{
				while (!Function_255(bVar88, &vVar90, &vVar93) && !IS_EXITFLAG_SET())
				{
					WAIT(false);
				}
			}
			if (Function_49(StackVal, StackVal, vVar90))
			{
				Function_254(StackVal, StackVal, &vVar90, &vVar93, *(&Var0 + 4), 90.0f, 0);
			}
			VSCALE(&vVar93, (6.28f / 360.0f));
			STREAMING_OVERRIDE_MAIN_POI(vVar90, vVar93);
			STREAMING_SET_CUTSCENE_MODE(1);
			RESET_STORED_DATA();
			STORE_GAME_STATE(&Var0, 44, 1);
			Var80 = { StackVal, StackVal, StackVal, Function_253(Var0) };
			UNK_0xC6E36B1D(&Var80);
			RESET_GAME();
			break;
		
		case 0x00000067:
			if (!DECOR_CHECK_EXIST(bParam0, "IdHash"))
			{
				return;
			}
			bVar44 = DECOR_GET_INT(bParam0, "IdHash");
			iVar46 = 0;
			while (iVar46 <= Global_27774)
			{
				if (Function_81(iVar46))
				{
					if (Function_85(iVar46))
					{
						strcpy(&cVar48, "out_", 64);
						stradd(&cVar48, &Global_27774[iVar4613] + 32, 64);
						if (STRING_TO_HASH(&cVar48) == bVar44)
						{
							if (!Global_28178 != iVar46)
							{
								if (Function_252(iVar46, 1, 0))
								{
									bVar45 = true;
								}
							}
						}
					}
				}
				iVar46++;
			}
			UI_POP("PauseMenuScene");
			if (bVar45)
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			break;
		
		case 0x0000006A:
			if (!DECOR_CHECK_EXIST(bParam0, "IdHash"))
			{
				return;
			}
			bVar44 = DECOR_GET_INT(bParam0, "IdHash");
			iVar46 = 0;
			while (iVar46 <= Global_27774)
			{
				if (Global_27774[iVar4613] != 4294967295)
				{
					strcpy(&cVar48, "out_", 64);
					stradd(&cVar48, &Global_27774[iVar4613] + 32, 64);
					if (STRING_TO_HASH(&cVar48) == bVar44)
					{
						if (Function_85(iVar46))
						{
							strcpy(&cVar64, UI_GET_STRING("out_wares_complete"), 64);
						}
						else if (Function_81(iVar46))
						{
							strcpy(&cVar64, INT_TO_STRING(Global_27774[iVar4613].f_24), 64);
							stradd(&cVar64, " / ", 64);
							stradd(&cVar64, INT_TO_STRING(Global_27774[iVar4613].f_28), 64);
							stradd(&cVar64, UI_GET_STRING("out_wares_collect"), 64);
						}
						else
						{
							strcpy(&cVar64, UI_GET_STRING("Common_Null"), 64);
						}
						UI_SET_STRING("OutfitInfo_Scraps", &cVar64);
						UI_REFRESH("OutfitPanel");
					}
				}
				iVar46++;
			}
			break;
		
		case 0x00000068:
			if (!DECOR_CHECK_EXIST(bParam0, "Mission"))
			{
				return;
			}
			bVar44 = DECOR_GET_INT(bParam0, "Mission");
			iVar47 = 1;
			bVar89 = false;
			while (Function_100(iVar47) && !bVar89)
			{
				Var80 = { StackVal, StackVal, StackVal, *(&Global_3422[iVar4740] + 12) };
				Var84 = { StackVal, StackVal, StackVal, Function_16(iVar47) };
				if (STRING_TO_HASH(&Var80) != bVar44 || STRING_TO_HASH(&Var84) != bVar44)
				{
					bVar89 = true;
				}
				else
				{
					iVar47++;
				}
			}
			if (bVar89)
			{
				if (Function_189(iVar47, 0))
				{
					Function_249(iVar47);
				}
			}
			break;
		
		case 0x0000006D:
			Global_88794 = !Global_34165.f_44;
			if (!DECOR_CHECK_EXIST(bParam0, "nChallenge"))
			{
				return;
			}
			if (!DECOR_CHECK_EXIST(bParam0, "Type"))
			{
				return;
			}
			bVar44 = DECOR_GET_INT(bParam0, "Type");
			break;
		
		case 0x0000006F:
			if (!DECOR_CHECK_EXIST(bParam0, "Type"))
			{
				return;
			}
			bVar44 = DECOR_GET_INT(bParam0, "Type");
			bVar44 = bVar44;
			Function_231(bVar44);
			break;
		
		case 0x00000071:
			if (!DECOR_CHECK_EXIST(bParam0, "Option"))
			{
				return;
			}
			Function_230(DECOR_GET_BOOL(bParam0, "Option"));
			break;
	}
	return;
}

void Function_230(int iParam0) //Position: 0xF70F / 63247
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 40)
	{
		if (bVar0 <= 21)
		{
			if (!Function_306())
			{
				SET_WEAPON_GOLD(Global_34573, bVar0, iParam0);
			}
			else
			{
				SET_WEAPON_GOLD(Global_34573, bVar0, (Global_83823[bVar0] && iParam0));
			}
		}
		bVar0++;
	}
	return;
}

void Function_231(int iParam0) //Position: 0xF756 / 63318
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = NET_MAILBOX_GET_MAX_NUM_CHALLENGES();
	iVar1 = 0;
	if (iVar0 >= 0)
	{
		iVar1 = 0;
		while (iVar1 < (iVar0 - 1))
		{
			if (NET_MAILBOX_IS_CHALLENGE_VALID(iVar1))
			{
				iVar2 = NET_MAILBOX_GET_CHALLENGE_BY_INDEX(iVar1);
				Function_232(&iVar2, iParam0);
			}
			iVar1++;
		}
	}
	return;
}

void Function_232(int iParam0, int iParam1) //Position: 0xF795 / 63381
{
	int iVar0;
	bool bVar1;
	struct<8> Var2;
	struct<8> Var26;
	struct<8> Var34;
	struct<8> Var42;
	struct<8> Var50;
	struct<8> Var58;
	bool bVar66;
	struct<8> Var67;
	struct<8> Var83;
	struct<8> Var91;
	struct<8> Var99;
	int iVar107;
	
	iVar0 = Function_248(iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (!Global_84611[iVar0140].f_68)
		{
			strcpy(&Var2, "SC_AA", 32);
			Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var2, "_SP") };
			if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nAAID"))
			{
				bVar1 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nAAID");
			}
			Function_242(iParam0);
			Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var2, "_") };
			Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var2, I2STR(bVar1)) };
			Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var2, "_obj1") };
			Var34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var2, "_obj2") };
			Var42 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var2, "_obj3") };
			Var50 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var2, "_globalName") };
			Var58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var2, "_friendName") };
			strcpy(&Global_84611[iVar0140] + 144[212] + 8, GET_LOCAL_PLAYER_NAME(), 24);
			strcpy(&Global_84611[iVar0140] + 144[412] + 8, GET_LOCAL_PLAYER_NAME(), 24);
			UI_SET_STRING(&Var58, &Global_84611[iVar0140] + 144[112] + 8);
			UI_SET_STRING(&Var50, &Global_84611[iVar0140] + 144[012] + 8);
			UI_SET_STRING("SC_MY_BEST_GamerTag", &Global_84611[iVar0140] + 144[212] + 8);
			UI_SET_STRING("SC_MY_CURRENT_GamerTag", &Global_84611[iVar0140] + 144[412] + 8);
			UI_CHALLENGE_SET_OBJECTIVE(*iParam0, 0, &Var26);
			UI_CHALLENGE_SET_OBJECTIVE(*iParam0, 1, &Var34);
			UI_CHALLENGE_SET_OBJECTIVE(*iParam0, 2, &Var42);
			UI_CHALLENGE_SET_TIME_HEADER(*iParam0, "SCChallenge_completion_time");
			switch (iParam1)
			{
				case 0x00000000:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, "SC_MY_CURRENT_GamerTag");
					if (Global_84611[iVar0140].f_64)
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_CurrentAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_CurrentAttempt"));
					}
					else
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_LastAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_LastAttempt"));
					}
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_239(iParam0, iVar0, 4, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_TheBest");
					break;
				
				case 0x00000002:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, &Var58);
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_TheirBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_239(iParam0, iVar0, 1, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_Dyn_ScoreLabel");
					break;
				
				case 0x00000001:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, &Var50);
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_TheBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_239(iParam0, iVar0, 0, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_TheirBest");
					break;
			}
		}
		else
		{
			iVar107 = "";
			strcpy(&Var67, "SC_community", 32);
			if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nCCID"))
			{
				bVar66 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nCCID");
			}
			Function_235(iParam0);
			Var67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var67, "_") };
			Var67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var67, I2STR(bVar66)) };
			Var83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var67, "_obj1") };
			Var91 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var67, "_globalName") };
			Var99 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var67, "_friendName") };
			strcpy(&Global_84611[iVar0140] + 144[412] + 8, GET_LOCAL_PLAYER_NAME(), 24);
			UI_SET_STRING(&Var99, &Global_84611[iVar0140] + 144[112] + 8);
			UI_SET_STRING(&Var91, &Global_84611[iVar0140] + 144[012] + 8);
			UI_SET_STRING("SC_MY_CURRENT_GamerTag", &Global_84611[iVar0140] + 144[412] + 8);
			UI_CHALLENGE_SET_OBJECTIVE(*iParam0, 0, "");
			UI_CHALLENGE_SET_OBJECTIVE(*iParam0, 1, iVar107);
			UI_CHALLENGE_SET_OBJECTIVE(*iParam0, 2, iVar107);
			UI_CHALLENGE_SET_TIME_HEADER(*iParam0, &Var83);
			switch (iParam1)
			{
				case 0x00000000:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, "SC_MY_CURRENT_GamerTag");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_LastAttempt");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_233(iParam0, iVar0, 4, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_TheBest");
					UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_CurrentAttempt"));
					if (Global_84611[iVar0140].f_64)
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_CurrentAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_CurrentAttempt"));
					}
					else
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_LastAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_LastAttempt"));
					}
					break;
				
				case 0x00000002:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, &Var99);
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_TheirBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_233(iParam0, iVar0, 1, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_Dyn_ScoreLabel");
					break;
				
				case 0x00000001:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, &Var91);
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_TheBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_233(iParam0, iVar0, 0, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_TheirBest");
					break;
				}
			}
	}
	return;
}

void Function_233(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xFFD9 / 65497
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;
	
	strcpy(&Var1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nCCID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "_count") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "_compare") };
	Function_234(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, (*&Global_84611[iParam1140] + 144)[iParam212], Var17);
	Function_234(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, (*&Global_84611[iParam1140] + 144)[iParam312], Var9);
	UI_CHALLENGE_SET_TIME_INFO(*iParam0, 0, &Var17);
	UI_CHALLENGE_SET_TIME_INFO(*iParam0, 1, &Var9);
}

void Function_234(char* cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x1009F / 65695
{
	int iVar0;
	
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nCCID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nCCID");
	}
	if (iVar0 != 0 || iVar0 != 1)
	{
		UI_SET_MONEY("", &uParam2, ROUND(bParam1));
	}
	else
	{
		UI_SET_STRING(&uParam2, I2STR(ROUND(bParam1)));
	}
}

void Function_235(int iParam0) //Position: 0x100EF / 65775
{
	int iVar0;
	
	iVar0 = Function_248(iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (Global_84611[iVar0140].f_68)
		{
			Function_236(*iParam0);
		}
	}
	return;
}

void Function_236(char* cParam0) //Position: 0x1011C / 65820
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;
	
	strcpy(&Var1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nCCID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_238(&Var1, "_locked", "") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "_des") };
	if (Function_306())
	{
		UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var9);
		UI_CHALLENGE_SET_TROPHY_TYPE(cParam0, 8);
	}
	else if (SC_CHALLENGE_GET_COMMUNITY_VALUE(cParam0) > SC_CHALLENGE_GET_COMMUNITY_TOTAL(cParam0))
	{
		Function_237(cParam0);
	}
	else
	{
		UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var17);
		UI_CHALLENGE_SET_TROPHY_TYPE(cParam0, 4);
	}
	return;
}

void Function_237(char* cParam0) //Position: 0x101D2 / 66002
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nCCID");
	}
	strcpy(&Var1, "SC_community", 32);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "n_complete") };
	UI_CHALLENGE_SET_TROPHY_TYPE(cParam0, 8);
	UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var9);
	return;
}

struct<32> Function_238(char* cParam0, char* cParam1, bool bParam2) //Position: 0x1024B / 66123
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, bParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_239(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x1026A / 66154
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	int iVar33;
	
	strcpy(&Var1, "SC_AA", 32);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nAAID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "n_bestTime") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "_compareTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_240((*&Global_84611[iParam1140] + 144)[iParam212]) };
	UI_SET_STRING(&Var17, &Var25);
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_240((*&Global_84611[iParam1140] + 144)[iParam312]) };
	UI_SET_STRING(&Var9, &Var25);
	iVar33 = 0;
	while (iVar33 <= 3)
	{
		if ((*&Global_84611[iParam1140] + 144[iParam212] + 32)[iVar33])
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE(*iParam0, iVar33, 9);
		}
		else
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE(*iParam0, iVar33, 8);
		}
		if ((*&Global_84611[iParam1140] + 144[iParam312] + 32)[iVar33])
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE_B(*iParam0, iVar33, 9);
		}
		else
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE_B(*iParam0, iVar33, 8);
		}
		iVar33++;
	}
	UI_CHALLENGE_SET_TIME_INFO(*iParam0, 0, &Var17);
	UI_CHALLENGE_SET_TIME_INFO(*iParam0, 1, &Var9);
}

struct<32> Function_240(var uParam0) //Position: 0x103B5 / 66485
{
	char* cVar0[32];
	int iVar8;
	int iVar9;
	bool bVar10;
	struct<13> Var11;
	
	Var11 = { StackVal, StackVal, StackVal, Function_241(uParam0) };
	iVar8 = StackVal;
	iVar9 = StackVal;
	bVar10 = FLOOR((Var11.f_12 * 100.0f));
	if (iVar8 <= 10)
	{
		stradd(&cVar0, "0", 32);
	}
	straddi(&cVar0, iVar8, 32);
	stradd(&cVar0, ":", 32);
	if (iVar9 <= 10)
	{
		stradd(&cVar0, "0", 32);
	}
	straddi(&cVar0, iVar9, 32);
	stradd(&cVar0, ".", 32);
	if (bVar10 <= 10)
	{
		stradd(&cVar0, "0", 32);
	}
	straddi(&cVar0, bVar10, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_241(var uParam0) //Position: 0x10435 / 66613
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

void Function_242(int iParam0) //Position: 0x104A6 / 66726
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;
	bool bVar17;
	
	iVar0 = Function_248(iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (!Global_84611[iVar0140].f_68)
		{
			strcpy(&Var9, "SC_AA", 32);
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var9, "_SP") };
			if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nAAID"))
			{
				bVar17 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nAAID");
			}
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var9, "_") };
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var9, I2STR(bVar17)) };
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var9, "_times") };
			if (Global_84611[iVar0140].f_64)
			{
				UI_SET_STRING(&Var1, UI_GET_STRING("SClubStat_CurrentAttempt"));
				UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_CurrentAttempt");
				UI_CHALLENGE_MAKE_CURRENT(*iParam0);
			}
			else
			{
				UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_LastAttempt");
			}
			Function_247(*iParam0, (*&Global_84611[iVar0140] + 144)[412], (*&Global_84611[iVar0140] + 144)[312], (*&Global_84611[iVar0140] + 144)[212]);
			UI_CHALLENGE_SET_TROPHY_TYPE(*iParam0, Function_246(*iParam0));
			if (!Function_245(*iParam0) || !NET_MAILBOX_IS_SIGNED_INTO_SC())
			{
				UI_CHALLENGE_SET_TROPHY_TYPE(*iParam0, 8);
			}
			Function_243(*iParam0);
		}
	}
	return;
}

void Function_243(int iParam0) //Position: 0x1060B / 67083
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	if (SC_CHALLENGE_IS_VAR_VALID(iParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(iParam0, "nAAID");
	}
	iVar2 = Function_248(&iParam0);
	if (iVar2 >= 4294967295)
	{
		if (!Function_244())
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_44(464) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000001:
					if (Function_44(459) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000002:
					if (Function_44(463) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000003:
					if (Function_44(462) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000004:
					if (Function_44(466) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000005:
					if (Function_44(460) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000006:
					if (Function_44(465) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000007:
					if (Function_44(461) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000008:
					if (Function_187(Global_30717[0]))
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000009:
					if (StackVal >= 3)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
			}
			if (bVar1)
			{
				UI_CHALLENGE_MAKE_CURRENT(iParam0);
			}
		}
	}
	return;
}

bool Function_244() //Position: 0x1083A / 67642
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = NET_MAILBOX_GET_MAX_NUM_CHALLENGES();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (NET_MAILBOX_IS_CHALLENGE_VALID(iVar1))
		{
			iVar2 = NET_MAILBOX_GET_CHALLENGE_BY_INDEX(iVar1);
			iVar3 = Function_248(&iVar2);
			if (iVar3 >= 4294967295)
			{
				if (Global_84611[iVar3140].f_64)
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

bool Function_245(char* cParam0) //Position: 0x10889 / 67721
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nAAID");
	}
	switch (iVar0)
	{
		case 0x00000000:
			return Function_44(464) < 0.0f;
			break;
		
		case 0x00000001:
			return Function_44(459) < 0.0f;
			break;
		
		case 0x00000002:
			return Function_44(463) < 0.0f;
			break;
		
		case 0x00000003:
			return Function_44(462) < 0.0f;
			break;
		
		case 0x00000004:
			return Function_44(466) < 0.0f;
			break;
		
		case 0x00000005:
			return Function_44(460) < 0.0f;
			break;
		
		case 0x00000006:
			return Function_44(465) < 0.0f;
			break;
		
		case 0x00000007:
			return Function_44(461) < 0.0f;
			break;
		
		case 0x00000008:
			return Function_187(Global_30717[0]);
			break;
		
		case 0x00000009:
			return StackVal < 3;
			break;
	}
	return iVar1;
}

int Function_246(int iParam0) //Position: 0x10971 / 67953
{
	int iVar0;
	
	iVar0 = Function_248(&iParam0);
	if (iVar0 >= 4294967295)
	{
		switch (StackVal)
		{
			case 0x00000000:
				if (Global_84611[iVar0140].f_96 <= 1)
				{
					return 4;
				}
				return 0;
				break;
			
			case 0x00000001:
				return 3;
				break;
			
			case 0x00000002:
				return 2;
				break;
			
			case 0x00000003:
				return 1;
				break;
			}
	}
	return 0;
}

void Function_247(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x109D8 / 68056
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	struct<8> Var33;
	struct<8> Var41;
	struct<8> Var49;
	struct<8> Var57;
	struct<8> Var65;
	struct<8> Var73;
	int iVar81;
	
	iVar81 = Function_248(&iParam0);
	strcpy(&Var1, "SC_AA", 32);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(iParam0, "nAAID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, I2STR(bVar0)) };
	Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "_locked") };
	Var49 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_238(&Var1, "_NotSignedDes", "") };
	Var57 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_238(&Var1, "_LockedNotInSP", "") };
	Var65 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "_des") };
	Var73 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "_unlock") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "n_currTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "n_lastTime") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(&Var1, "n_bestTime") };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_240(uParam1) };
	UI_SET_STRING(&Var17, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_240(uParam2) };
	UI_SET_STRING(&Var25, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_240(uParam3) };
	UI_SET_STRING(&Var33, &Var9);
	if (!NET_MAILBOX_IS_SIGNED_INTO_SC())
	{
		UI_CHALLENGE_SET_DESCRIPTION(iParam0, &Var49);
	}
	else if (Function_306())
	{
		UI_CHALLENGE_SET_DESCRIPTION(iParam0, &Var57);
	}
	else if (Function_245(iParam0))
	{
		UI_CHALLENGE_SET_DESCRIPTION(iParam0, &Var65);
	}
	else
	{
		UI_CHALLENGE_SET_DESCRIPTION(iParam0, &Var41);
	}
	if (iVar81 >= 4294967295)
	{
		if (StackVal >= 1)
		{
			UI_CHALLENGE_SET_DESCRIPTION(iParam0, &Var73);
		}
	}
}

var Function_248(int iParam0) //Position: 0x10B82 / 68482
{
	int iVar0;
	int iVar1;
	
	iVar0 = *iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_84611[iVar1140] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

void Function_249(int iParam0) //Position: 0x10BB4 / 68532
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	char* cVar51[8];
	bool bVar53;
	float fVar54;
	bool bVar55;
	int iVar56;
	
	if (Function_189(iParam0, 1))
	{
		bVar55 = Function_135(iParam0);
		bVar53 = Global_13172[StackVal11].f_32;
		bVar1 = FLOOR((bVar53 / 60.0f));
		bVar2 = (FLOOR(bVar53) - bVar1 * 60);
		switch (bVar55)
		{
			case 0x00000000:
				bVar0 = Global_13172[StackVal11].f_20;
			
			case 0x00000001:
				fVar54 = Global_13172[StackVal11].f_28;
				break;
			
			case 0x00000002:
				fVar54 = Global_13172[StackVal11].f_28;
				bVar0 = Global_13172[StackVal11].f_20;
				break;
		}
		iVar56 = Function_134(iParam0, bVar55, bVar53, fVar54, bVar0);
		strcpy(&cVar51, "rank_", 8);
		straddi(&cVar51, iVar56, 8);
		if (bVar2 <= 10)
		{
			UI_SET_STRING_FORMAT("Dmission_time", UI_GET_STRING("mission_time_lowsec"), UI_GET_STRING(Function_250(bVar1)), UI_GET_STRING(Function_250(bVar2)), false);
		}
		else
		{
			UI_SET_STRING_FORMAT("Dmission_time", UI_GET_STRING("mission_time"), UI_GET_STRING(Function_250(bVar1)), UI_GET_STRING(Function_250(bVar2)), false);
		}
		SET_JOURNAL_INFO_LABEL(0, "Dmission_time");
		switch (bVar55)
		{
			case 0x00000000:
				UI_SET_STRING_FORMAT("Dmission_headshots", UI_GET_STRING("mission_headshots"), UI_GET_STRING(Function_250(bVar0)), false, false);
				UI_SET_STRING("Dpercent_amount", I2STR(ROUND((fVar54 * 100.0f))));
				UI_SET_STRING_FORMAT("Dmission_accuracy", UI_GET_STRING("mission_accuracy"), UI_GET_STRING("Dpercent_format"), false, false);
				SET_JOURNAL_INFO_LABEL(1, "Dmission_accuracy");
				SET_JOURNAL_INFO_LABEL(2, "Dmission_headshots");
				break;
			
			case 0x00000001:
				UI_SET_STRING("Dpercent_amount", I2STR(ROUND((fVar54 * 100.0f))));
				UI_SET_STRING_FORMAT("Dmission_accuracy", UI_GET_STRING("mission_accuracy"), UI_GET_STRING("Dpercent_format"), false, false);
				SET_JOURNAL_INFO_LABEL(1, "Dmission_accuracy");
				SET_JOURNAL_INFO_LABEL(2, "COMMON_EMPTY");
				break;
			
			case 0x00000002:
				UI_SET_STRING("Dpercent_amount", I2STR(ROUND((fVar54 * 100.0f))));
				UI_SET_STRING_FORMAT("Dmission_accuracy", UI_GET_STRING("mission_stragglers"), UI_GET_STRING("Dpercent_format"), false, false);
				UI_SET_STRING_FORMAT("Dmission_headshots", UI_GET_STRING("mission_herd"), UI_GET_STRING(Function_250(bVar0)), false, false);
				SET_JOURNAL_INFO_LABEL(1, "Dmission_accuracy");
				SET_JOURNAL_INFO_LABEL(2, "Dmission_headshots");
				break;
			
			case 0x00000003:
				SET_JOURNAL_INFO_LABEL(1, "COMMON_EMPTY");
				SET_JOURNAL_INFO_LABEL(2, "COMMON_EMPTY");
				break;
		}
	}
	else
	{
		SET_JOURNAL_INFO_LABEL(0, "rank_cheated_1");
		SET_JOURNAL_INFO_LABEL(1, "rank_cheated_2");
		SET_JOURNAL_INFO_LABEL(2, "COMMON_EMPTY");
	}
	SET_JOURNAL_INFO_LABEL(3, "COMMON_EMPTY");
	return;
}

var Function_250(bool bParam0) //Position: 0x10FE3 / 69603
{
	bool bVar0;
	
	bVar0 = Function_251();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_251() //Position: 0x10FFA / 69626
{
	Global_6285 = (Global_6285 + 1 % 10);
	switch (Global_6285)
	{
		case 0x00000001:
			return "POD2ST1";
		
		case 0x00000002:
			return "POD2ST2";
		
		case 0x00000003:
			return "POD2ST3";
		
		case 0x00000004:
			return "POD2ST4";
		
		case 0x00000005:
			return "POD2ST5";
		
		case 0x00000006:
			return "POD2ST6";
		
		case 0x00000007:
			return "POD2ST7";
		
		case 0x00000008:
			return "POD2ST8";
		
		case 0x00000009:
			return "POD2ST9";
		
		default:
	}
	return "POD2ST0";
}

bool Function_252(bool bParam0, bool bParam1, bool bParam2) //Position: 0x110B6 / 69814
{
	if (Global_28178 == bParam0)
	{
		return 1;
	}
	if (Global_28179 == bParam0)
	{
		return 1;
	}
	if (!Function_84(bParam0))
	{
		LOG_ERROR("Attempting to swap to an invalid outfit");
		return 0;
	}
	if (!Function_85(bParam0) && !bParam2)
	{
		return 0;
	}
	Global_28179 = bParam0;
	if (bParam1)
	{
		Function_79(bParam0, 8192);
	}
	DECOR_SET_BOOL(Global_34573, "playerChangeOutfits", true);
	return 1;
}

struct<16> Function_253(int iParam0) //Position: 0x11148 / 69960
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_100(iParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_3422[iParam040] + 12);
}

var Function_254(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6) //Position: 0x11179 / 70009
{
	bool bVar0;
	
	bVar0 = "";
	switch (iParam6)
	{
		case 0x00000000:
			bVar0 = "roam";
			break;
		
		case 0x00000001:
			bVar0 = "interior";
			break;
		
		case 0x00000002:
			bVar0 = "horse";
			break;
		
		case 0x00000003:
			bVar0 = "wagonDefault";
			break;
		
		case 0x00000004:
			bVar0 = "wagonShotgun";
			break;
		
		case 0x00000005:
			bVar0 = "wagonShotgun";
			break;
	}
	PRINTSTRING("GET_GAME_CAMERA_RESET_POSITION_HELPER called with position ");
	PRINTVECTOR(vParam2);
	PRINTSTRING(" and heading ");
	PRINTFLOAT(bParam5);
	PRINTSTRING(" and with arc ");
	PRINTSTRING(bVar0);
	PRINTNL();
	return GET_GAME_CAMERA_RESET_POSITION(bParam0, uParam1, vParam2, bParam5, bVar0);
}

bool Function_255(bool bParam0, int iParam1, int iParam2) //Position: 0x112A0 / 70304
{
	if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
	{
		LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_GET_CAM_POS_HEADING: missing cutscene!");
		*iParam1 = { 0.0f, 0.0f, 0.0f };
		*iParam2 = { 0.0f, 0.0f, 0.0f };
		return 1;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
	{
		CUTSCENE_MANAGER_LOAD_CUTFILE(bParam0, 0, 0, 0, 0, 0);
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0))
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		return 0;
	}
	if (!CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
	{
		return 0;
	}
	if (!CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(iParam1, iParam2))
	{
		LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_GET_CAM_POS_HEADING: CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT failed!");
		*iParam1 = { 0.0f, 0.0f, 0.0f };
		*iParam2 = { 0.0f, 0.0f, 0.0f };
	}
	return 1;
}

var Function_256(int iParam0) //Position: 0x113BE / 70590
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000002:
			iVar0 = "$/cutscene/RANCH_01/RANCH_01";
			break;
		
		case 0x00000003:
			iVar0 = "$/cutscene/R3/R3";
			break;
		
		case 0x00000004:
			iVar0 = "$/Cutscene/R2/R2";
			break;
		
		case 0x00000005:
			iVar0 = "$/cutscene/r7/r7";
			break;
		
		case 0x00000006:
			iVar0 = "$/cutscene/R6_SEQ/R6_SEQ";
			break;
		
		case 0x00000007:
			iVar0 = "$/cutscene/r8/r8";
			break;
		
		case 0x00000008:
			iVar0 = "$/cutscene/M1/M1";
			break;
		
		case 0x00000009:
			iVar0 = "$/cutscene/M2/M2";
			break;
		
		case 0x0000000A:
			iVar0 = "$/cutscene/MERCHANT_01/MERCHANT_01";
			break;
		
		case 0x0000000B:
			iVar0 = "$/cutscene/Merchant_02/Merchant_02";
			break;
		
		case 0x0000000C:
			iVar0 = "$/cutscene/GRAVE_01/GRAVE_01";
			break;
		
		case 0x0000000D:
			iVar0 = "$/cutscene/Grave_02/Grave_02";
			break;
		
		case 0x0000000E:
			iVar0 = "$/cutscene/Grave_03/Grave_03";
			break;
		
		case 0x0000000F:
			iVar0 = "$/cutscene/MERCHANT_05/MERCHANT_05";
			break;
		
		case 0x00000010:
			iVar0 = "$/cutscene/MERCHANT_03/MERCHANT_03";
			break;
		
		case 0x00000011:
			iVar0 = "$/cutscene/MERCHANT_04/MERCHANT_04";
			break;
		
		case 0x00000012:
			iVar0 = "$/cutscene/Outlaw_01/Outlaw_01";
			break;
		
		case 0x00000013:
			iVar0 = "$/cutscene/OUTLAW_02/OUTLAW_02";
			break;
		
		case 0x00000014:
			iVar0 = "$/cutscene/Outlaw_03/Outlaw_03";
			break;
		
		case 0x00000015:
			iVar0 = "$/cutscene/M4/M4";
			break;
		
		case 0x00000017:
			iVar0 = "$/cutscene/M3/M3";
			break;
		
		case 0x00000016:
			iVar0 = "$/cutscene/R4/R4";
			break;
		
		case 0x00000018:
			iVar0 = "$/cutscene/FORT_01/FORT_01";
			break;
		
		case 0x00000019:
			iVar0 = "$/cutscene/FORT_02/FORT_02";
			break;
		
		case 0x0000001A:
			iVar0 = "$/cutscene/MEXICAN_ARMY_02/MEXICAN_ARMY_02";
			break;
		
		case 0x0000001B:
			iVar0 = "$/cutscene/MEXICAN_ARMY_01/MEXICAN_ARMY_01";
			break;
		
		case 0x0000001C:
			iVar0 = "$/cutscene/MEXICAN_ARMY_03/MEXICAN_ARMY_03";
			break;
		
		case 0x0000001D:
			iVar0 = "$/cutscene/MEXICAN_ARMY_04/MEXICAN_ARMY_04";
			break;
		
		case 0x0000001E:
			iVar0 = "$/cutscene/GUN_01/GUN_01";
			break;
		
		case 0x0000001F:
			iVar0 = "$/cutscene/GUN_05_A/GUN_05_A";
			break;
		
		case 0x00000020:
			iVar0 = "$/cutscene/GUN_03/GUN_03";
			break;
		
		case 0x00000021:
			iVar0 = "$/cutscene/GUN_02/GUN_02";
			break;
		
		case 0x00000022:
			iVar0 = "$/cutscene/MEX_GIRL_01/MEX_GIRL_01";
			break;
		
		case 0x00000023:
			iVar0 = "$/cutscene/MEX_GIRL_03/MEX_GIRL_03";
			break;
		
		case 0x00000024:
			iVar0 = "$/cutscene/MEXICAN_ARMY_05/MEXICAN_ARMY_05";
			break;
		
		case 0x00000025:
			iVar0 = "$/cutscene/REBEL_LEADER_01/REBEL_LEADER_01";
			break;
		
		case 0x00000026:
			iVar0 = "$/cutscene/REBEL_04/REBEL_04";
			break;
		
		case 0x00000027:
			iVar0 = "$/cutscene/REBEL_02/REBEL_02";
			break;
		
		case 0x00000028:
			iVar0 = "$/cutscene/REBEL_LEADER_06/REBEL_LEADER_06";
			break;
		
		case 0x00000029:
			iVar0 = "$/cutscene/REBEL_LEADER_05_A_SEQ/REBEL_LEADER_05_A_SEQ";
			break;
		
		case 0x0000002A:
			iVar0 = "$/cutscene/FBI_05/FBI_05";
			break;
		
		case 0x0000002B:
			iVar0 = "$/cutscene/FBI_01_SEQ/FBI_01_SEQ";
			break;
		
		case 0x0000002C:
			iVar0 = "$/cutscene/ANTHRO_04/ANTHRO_04";
			break;
		
		case 0x0000002D:
			iVar0 = "$/cutscene/ANTHRO_01/ANTHRO_01";
			break;
		
		case 0x0000002E:
			iVar0 = "$/cutscene/Anthro_03/Anthro_03";
			break;
		
		case 0x0000002F:
			iVar0 = "$/cutscene/FBI_02_Seq/FBI_02_Seq";
			break;
		
		case 0x00000030:
			iVar0 = "$/cutscene/FBI_04_INTRO_seq/FBI_04_INTRO_seq";
			break;
		
		case 0x00000031:
			iVar0 = "$/cutscene/HOME_01/HOME_01";
			break;
		
		case 0x00000032:
			iVar0 = "$/cutscene/WIFE_02/WIFE_02";
			break;
		
		case 0x00000033:
			iVar0 = "$/cutscene/WIFE_03/WIFE_03";
			break;
		
		case 0x00000034:
			iVar0 = "$/cutscene/son_01/son_01";
			break;
		
		case 0x00000035:
			iVar0 = "$/cutscene/son_02/son_02";
			break;
		
		case 0x00000036:
			iVar0 = "$/cutscene/SON_03/SON_03";
			break;
		
		case 0x00000037:
			iVar0 = "$/cutscene/UNCLE_01/UNCLE_01";
			break;
		
		case 0x00000038:
			iVar0 = "$/cutscene/UNCLE_03/UNCLE_03";
			break;
		
		case 0x00000039:
			iVar0 = "$/cutscene/home_03/home_03";
			break;
		
		default:
			iVar0 = "";
			break;
	}
	return iVar0;
}

void Function_257(bool bParam0) //Position: 0x11D37 / 73015
{
	if (!IS_ITERATOR_VALID(Global_26149))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Formations")))
		{
			Global_26149 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("Formations"));
		}
	}
	if (!IS_ITERATOR_VALID(Global_26149))
	{
		return;
	}
	ITERATE_EVERYWHERE(Global_26149);
	ITERATE_ON_OBJECT_TYPE(Global_26149, 3);
	if (!bParam0 != "")
	{
		ITERATE_IN_SET(Global_26149, bParam0);
	}
	else
	{
		ITERATE_IN_LAYOUT(Global_26149, GET_EVENT_LAYOUT());
	}
	return;
}

int Function_258() //Position: 0x11DA8 / 73128
{
	if (Function_259(&Global_28210))
	{
		return 1;
	}
	if (Function_259(&Global_28185))
	{
		return 1;
	}
	if (Function_259(&Global_28235))
	{
		return 1;
	}
	return 0;
}

bool Function_259(int iParam0) //Position: 0x11DD6 / 73174
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<6> Var3;
	
	switch (StackVal)
	{
		case 0x00000000:
			if ((*iParam0 != 1 || *iParam0 != 2) || *iParam0 != 3)
			{
				iParam0->f_4 = 1;
			}
			break;
		
		case 0x00000001:
			if (*iParam0 == 3)
			{
				if (StackVal != 0)
				{
					iParam0->f_16 = Global_28185.f_16;
				}
				else
				{
					iParam0->f_16 = 393264;
				}
			}
			else if (*iParam0 == 1)
			{
				iParam0->f_16 = 393264;
			}
			if (GET_OBJECTSET_SIZE(iParam0->f_12) >= 0)
			{
				Function_9(iParam0->f_12);
				CLEAN_OBJECTSET(iParam0->f_12);
			}
			if (FIND_TRAFFIC_PATH(StackVal, iParam0->f_12, &Global_34574, iParam0 + 24, iParam0->f_16, iParam0 + 20))
			{
				*(iParam0 + 80) = { StackVal, StackVal, Global_34574 };
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_264(StackVal, StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_12)), *(iParam0 + 24), 0x41200000, 0, 0x3f800000, 1) };
				Function_263(&Var3);
				*(iParam0 + 48) = { StackVal, StackVal, Function_263(&Var3) };
				Function_262(iParam0->f_60, &uVar0, &uVar1, &uVar2);
				if (*iParam0 == 1)
				{
					SET_GPS_PATH(0, iParam0->f_20, iParam0->f_12, uVar0, uVar1, uVar2, 1.0f, iParam0 + 24, 1);
				}
				else if (*iParam0 == 2)
				{
					SET_GPS_PATH(1, iParam0->f_20, iParam0->f_12, uVar0, uVar1, uVar2, 1.0f, iParam0 + 24, iParam0->f_92);
				}
				else
				{
					SET_GPS_PATH(2, iParam0->f_20, iParam0->f_12, uVar0, uVar1, uVar2, 1.0f, iParam0 + 24, iParam0->f_92);
				}
				iParam0->f_76 = GET_CURRENT_GAME_TIME();
				iParam0->f_4 = 2;
				REGISTER_GPS_CURVE_OBJECTSET(iParam0->f_12);
			}
			else
			{
				LOG_ERROR("Cannot find a path from here to there - check output for locations");
				CLEAR_GPS_PATH(2);
				iParam0->f_4 = 3;
			}
		
		case 0x00000002:
			if ((*iParam0 != 2 || *iParam0 != 1) || *iParam0 != 3)
			{
				if (iParam0->f_96 || *iParam0 != 3)
				{
					if (StackVal || Function_54(StackVal, StackVal, StackVal, (StackVal || Function_54(StackVal, StackVal, StackVal, Function_54(StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), Global_34574) > 15.0f, *(iParam0 + 48), Global_34574) > 15.0f), *(iParam0 + 36), Global_34574) > 15.0f)
					{
						if (*iParam0 == 1)
						{
							CLEAR_GPS_PATH(0);
						}
						else if (*iParam0 == 2)
						{
							CLEAR_GPS_PATH(1);
						}
						else
						{
							CLEAR_GPS_PATH(2);
						}
						iParam0->f_4 = 3;
						return 0;
					}
				}
				if (*iParam0 == 1)
				{
					if (IS_GPS_RECOMPUTE(0))
					{
						iParam0->f_4 = 1;
						return 0;
					}
				}
				if (*iParam0 == 2)
				{
					if (IS_GPS_RECOMPUTE(1))
					{
						iParam0->f_4 = 1;
						return 0;
					}
				}
				if (IS_GPS_RECOMPUTE(2))
				{
					iParam0->f_4 = 1;
					return 0;
				}
			}
			break;
		
		case 0x00000003:
			if (*iParam0 == 1)
			{
				Function_261();
			}
			else if (*iParam0 == 2)
			{
				Function_260();
			}
			else
			{
				Function_10();
			}
			if (IS_OBJECTSET_VALID(iParam0->f_12))
			{
				Function_9(iParam0->f_12);
				CLEAN_OBJECTSET(iParam0->f_12);
			}
			iParam0->f_4 = 0;
			*iParam0 = 0;
			break;
	}
	return 0;
}

void Function_260() //Position: 0x120A1 / 73889
{
	if (Global_28185 == 2)
	{
		Global_28185.f_4 = 3;
	}
	*(&Global_28185 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28185 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(1);
	return;
}

void Function_261() //Position: 0x120CC / 73932
{
	if (Global_28210 == 1)
	{
		Global_28210.f_4 = 3;
	}
	*(&Global_28210 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28210 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(0);
	return;
}

void Function_262(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x120F7 / 73975
{
	switch (iParam0)
	{
		case 0x00000001:
			*uParam1 = 0.64f;
			*uParam2 = 0.22f;
			*uParam3 = 0.26f;
			break;
		
		case 0x00000002:
			*uParam1 = 0.34f;
			*uParam2 = 0.58f;
			*uParam3 = 0.74f;
			break;
		
		case 0x00000000:
			*uParam1 = 0.83f;
			*uParam2 = 0.65f;
			*uParam3 = 0.36f;
			break;
		
		case 0x00000003:
			*uParam1 = 0.41f;
			*uParam2 = 0.57f;
			*uParam3 = 0.23f;
			break;
		
		case 0x00000005:
			*uParam1 = Global_28185.f_64;
			*uParam2 = Global_28185.f_68;
			*uParam3 = Global_28185.f_72;
			break;
		
		case 0x00000004:
			*uParam1 = Global_28235.f_64;
			*uParam2 = Global_28235.f_68;
			*uParam3 = Global_28235.f_72;
			break;
		
		default:
			*uParam1 = 0.71f;
			*uParam2 = 0.64f;
			*uParam3 = 0.57f;
			break;
	}
}

vector3 Function_263(bool bParam0) //Position: 0x121E7 / 74215
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_264(bool bParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, int iParam7) //Position: 0x12206 / 74246
{
	bool bVar0;
	struct<13> Var1;
	float fVar19;
	bool bVar20;
	bool bVar21;
	
	if (!fParam6 <= fParam5)
	{
		fVar19 = fParam6;
		fParam6 = fParam5;
		fParam5 = fVar19;
	}
	GET_CURVE_POINT(bParam0, fParam5, &Var1, 0);
	Function_263(&Var1);
	bVar20 = VDIST(Function_263(&Var1), vParam1);
	Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
	while (Var1.f_12 >= fParam6 && !bVar0)
	{
		Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		UNK_0x19D652F9(bParam0, FABS(bParam4), &Var7, &Var1);
		Function_263(&Var1);
		bVar21 = VDIST(Function_263(&Var1), vParam1);
		if (bVar21 > bVar20)
		{
			bVar20 = bVar21;
			Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		}
		if (Function_267(&Var1))
		{
			bVar0 = true;
		}
	}
	if (iParam7 < 1 && bParam4 < 1.0f)
	{
		UNK_0x19D652F9(bParam0, (bParam4 / 2.0f), &Var13, &Var1);
		UNK_0x19D652F9(bParam0, (-1.0f * (bParam4 / 2.0f)), &Var13, &Var7);
		return StackVal, StackVal, StackVal, StackVal, StackVal, Function_264(StackVal, StackVal, bParam0, vParam1, (bParam4 / 10.0f), Function_266(Var7.f_12, Var1.f_12), Function_265(Var7.f_12, Var1.f_12), (iParam7 - 1));
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var13;
}

var Function_265(int iParam0, int iParam1) //Position: 0x122F4 / 74484
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_266(int iParam0, int iParam1) //Position: 0x12307 / 74503
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_267(int iParam0) //Position: 0x1231A / 74522
{
	if (iParam0->f_12 > 0.001f || iParam0->f_12 < 0.999f)
	{
		return 1;
	}
	return 0;
}

void Function_268() //Position: 0x1233B / 74555
{
	vector3 vVar0;
	
	if (GET_USER_DEFINED_WAYPOINT(&vVar0))
	{
		vVar0.f_4 = 25.0f;
		if (!Function_145(StackVal, StackVal, StackVal, StackVal, vVar0, *(&Global_28210 + 36)))
		{
			Function_269(StackVal, StackVal, vVar0);
		}
	}
	else if (StackVal != 2 && Global_28210 != 1)
	{
		if (IS_USER_DEFINED_WAYPOINT_CLEARED())
		{
			Function_261();
		}
	}
	return;
}

void Function_269(vector3 vParam0) //Position: 0x12387 / 74631
{
	*(&Global_28210 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28210 + 36) = { StackVal, StackVal, vParam0 };
	Global_28210 = 1;
	Global_28210.f_4 = 0;
	Global_28210.f_60 = 3;
	Global_28210.f_16 = 393264;
	if (!IS_OBJECTSET_VALID(Global_28210.f_12))
	{
		Global_28210.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "UserGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28210.f_12) >= 0)
	{
		Function_9(Global_28210.f_12);
		CLEAN_OBJECTSET(Global_28210.f_12);
	}
	Global_28210.f_92 = 1;
	Global_28210.f_96 = 1;
	return;
}

void Function_270() //Position: 0x1240E / 74766
{
	int iVar0;
	
	iVar0 = GET_TARGETED_JOURNAL_ENTRY();
	if (iVar0 != iLocal_59)
	{
		Function_294(iLocal_59);
		Function_271(iVar0);
		iLocal_59 = iVar0;
	}
	return;
}

void Function_271(int iParam0) //Position: 0x1242E / 74798
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 != 4294967295 || iParam0 != 0)
	{
		return;
	}
	if (Function_306())
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(iParam0);
	if (iVar0 == 4)
	{
		if (iParam0 != GET_TARGETED_JOURNAL_ENTRY())
		{
			return;
		}
	}
	Function_294(GET_TARGETED_JOURNAL_ENTRY());
	iVar1 = GET_JOURNAL_ENTRY_MISC_FLAG(iParam0);
	switch (iVar0)
	{
		case 0x00000004:
			if (Global_28184)
			{
				return;
			}
			iVar6 = 0;
			while (iVar6 <= Global_27774)
			{
				if (Function_81(iVar6) && !Function_85(iVar6))
				{
					if (iParam0 == Global_27774[iVar613].f_48)
					{
						iVar5 = iVar6;
						bVar4 = true;
					}
				}
				iVar6++;
			}
			if (!bVar4)
			{
				Function_293();
			}
			else if (iVar5 != Global_28180)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
				{
					Function_292(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
			{
				Function_158();
				TARGET_JOURNAL_ENTRY(iParam0);
			}
			break;
		
		case 0x00000002:
			iVar2 = iVar1;
			while (Global_63541[iVar155].f_20 == iVar2)
			{
				if (IS_BLIP_VALID(Global_63541[iVar155].f_184))
				{
					REMOVE_BLIP(Global_63541[iVar155].f_184);
				}
				if (IS_BLIP_VALID(Global_63541[iVar155].f_188))
				{
					REMOVE_BLIP(Global_63541[iVar155].f_188);
				}
				if (!Function_13(Global_63541[iVar155].f_144, 2048))
				{
					iVar3 = iVar1;
					if (Function_285(&(Global_63541[iVar155]), iVar3))
					{
						Function_3(&Global_63541[iVar155] + 144, 64);
						Function_281(&(Global_63541[iVar155]), iVar3);
						if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
						{
							DESTROY_OBJECT(Global_63541[iVar155].f_192);
							Function_272(&(Global_63541[iVar155]), 7);
						}
					}
				}
				else if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
				{
					DESTROY_OBJECT(Global_63541[iVar155].f_192);
				}
				iVar1++;
			}
			break;
	}
	return;
}

void Function_272(int iParam0, int iParam1) //Position: 0x125D0 / 75216
{
	float fVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_13(iParam0->f_144, 2048) || Global_3380) || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return;
	}
	fVar0 = iParam0->f_96;
	iParam0->f_192 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Global_63535, Function_195(), *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, 0, Global_34573, iParam1, iParam0->f_92, 0, 1, 1);
	Function_273(iParam0);
	bVar1 = GATEWAY_GET_MARKER(iParam0->f_192);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

void Function_273(int iParam0) //Position: 0x1268A / 75402
{
	float fVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		return;
	}
	iParam0->f_216 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_195(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	fVar0 = 20.0f;
	if (Function_11(iParam0->f_132))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	bVar1 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_216, Function_195(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0);
	DECOR_SET_INT(bVar1, "category", 512);
	Function_274(&bVar1, 0);
	return;
}

int Function_274(var uParam0, int iParam1) //Position: 0x1272C / 75564
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*uParam0, &uVar1);
	Function_277(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_275(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_275(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1288D / 75917
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_276("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_276(bool bParam0) //Position: 0x12928 / 76072
{
	char* cVar0[32];
	struct<4> Var8;
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&Var8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&Var8) <= 4)
		{
			memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_238("0", &Var8, ""), 4);
		}
		if (IS_STRING_VALID(&Var8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &Var8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_277(bool bParam0) //Position: 0x12992 / 76178
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_280(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_278(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_280(iVar0);
						}
					}
					else if (Function_278(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_280(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
				}
			}
		}
		else
		{
			Function_280(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_278(bool bParam0, vector3 vParam1) //Position: 0x12AF3 / 76531
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_279(bParam0);
		vVar0 = { StackVal, StackVal, Function_279(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_279(bool bParam0) //Position: 0x12B6D / 76653
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

void Function_280(int iParam0) //Position: 0x12BD7 / 76759
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

void Function_281(int iParam0, int iParam1) //Position: 0x12C38 / 76856
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 112) };
	vVar0.f_4 = (vVar0.y + 0.5f);
	fVar3 = 1.0f;
	fVar4 = 50.0f;
	if (((StackVal && Function_283(StackVal, Function_284(iParam1), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_282(iParam1)) || Global_74542[iParam110].f_12 != 1)
	{
		iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_MAX_DISTANCE(iParam0->f_184, 1.25f);
		iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
		UNK_0xFF3DB575(iParam0->f_188, 1);
		SET_BLIP_PRIORITY(iParam0->f_188, 1);
		SET_BLIP_COLOR(iParam0->f_188, 0.58f, 0.35f, 0.72f, fVar3);
		Global_74542[iParam110].f_12 = 1;
	}
	else
	{
		fVar3 = 0.5f;
		vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
		vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 7);
		SET_BLIP_SCALE(iParam0->f_184, fVar4);
	}
	SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
	SET_BLIP_COLOR(iParam0->f_184, 0.58f, 0.35f, 0.72f, fVar3);
	SET_BLIP_PRIORITY(iParam0->f_184, 3);
	return;
}

int Function_282(bool bParam0) //Position: 0x12D7D / 77181
{
	if ((Global_74542[bParam010] != 3 || Global_74542[bParam010] != 4) || Global_74542[bParam010] != 5)
	{
		return 1;
	}
	return 0;
}

var Function_283(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x12DA9 / 77225
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

bool Function_284(int iParam0) //Position: 0x12DC5 / 77253
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_285(int iParam0, int iParam1) //Position: 0x12DDA / 77274
{
	if (Function_13(Global_63541[iParam155].f_144, 64))
	{
		return 1;
	}
	if (Function_284(iParam1))
	{
		Function_3(&Global_63541[iParam155] + 144, 64);
		return 1;
	}
	if ((Function_291(iParam1) || Function_60(iParam1)) || Function_290(iParam1))
	{
		return 0;
	}
	if (iParam0->f_160)
	{
		if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), iParam0->f_156))
		{
			return 0;
		}
	}
	if (((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return 0;
	}
	if (Function_11(iParam0->f_132))
	{
		if (Function_185(&(Global_29008[iParam0->f_132]), 256))
		{
			return 0;
		}
	}
	if (Function_289(iParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!((((Global_63096 || Global_3384) || Global_3369) || iParam0->f_152) || GET_ACTOR_INVULNERABILITY(iParam0->f_204)))
		{
			if (!Function_288(iParam0))
			{
				return 0;
			}
			if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(iParam0->f_204))
			{
				return 0;
			}
			if (FIRE_IS_ACTOR_ON_FIRE(iParam0->f_204))
			{
				return 0;
			}
			if (IS_ACTOR_DEAD(iParam0->f_204))
			{
				return 0;
			}
		}
	}
	if (!Function_286(iParam0, iParam1))
	{
		return 0;
	}
	Function_3(&Global_63541[iParam155] + 144, 64);
	return 1;
}

bool Function_286(int iParam0, int iParam1) //Position: 0x12EEF / 77551
{
	int iVar0;
	
	if (!iParam0->f_172 != 0)
	{
		if (Function_90(iParam0 + 172, 4))
		{
			if (!Function_287(iParam1))
			{
				return 0;
			}
		}
		if (Function_90(iParam0 + 172, 1))
		{
			if (!Function_60(iParam0->f_168))
			{
				return 0;
			}
		}
		if (Function_90(iParam0 + 172, 2) && Global_3365)
		{
			iVar0 = Function_182(iParam0->f_176);
			if (Function_180(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_90(iParam0 + 172, 8) && Global_3365)
		{
			if (Function_180(iParam0->f_164))
			{
				if (StackVal != 3)
				{
					return 0;
				}
			}
		}
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_90(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_90(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_90(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_90(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_90(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_90(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_287(int iParam0) //Position: 0x13033 / 77875
{
	return StackVal;
}

bool Function_288(int iParam0) //Position: 0x13043 / 77891
{
	if (!iParam0->f_152)
	{
		if (Function_17())
		{
			if (((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204))
			{
				return 0;
			}
			if ((IS_PLAYER_TARGETTING_ACTOR(0, iParam0->f_204, 1) && GET_ACTOR_FACTION(iParam0->f_204) == 20) && GET_ACTOR_FACTION(iParam0->f_204) == 23)
			{
				return 0;
			}
		}
		if ((((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204)) || IS_PLAYER_TARGETTING_ACTOR(0, iParam0->f_204, 1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

bool Function_289(int iParam0) //Position: 0x130E7 / 78055
{
	if (!Function_97(1048576) || Global_3381)
	{
		return 1;
	}
	if (!Function_13(Global_63541[iParam055].f_144, 32768))
	{
		if ((Global_3403 || Global_3405) || Global_3404)
		{
			if (!Function_96(Global_76847, 0x8000000))
			{
				Function_66(Global_34573, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool Function_290(int iParam0) //Position: 0x13140 / 78144
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

int Function_291(int iParam0) //Position: 0x13155 / 78165
{
	if (Global_74542[iParam010] == 0)
	{
		return 1;
	}
	return 0;
}

int Function_292(int iParam0) //Position: 0x1316A / 78186
{
	if (Global_28180 == iParam0)
	{
		return 1;
	}
	if (!Function_84(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_85(iParam0))
	{
		return 0;
	}
	if (!Function_81(iParam0))
	{
		return 0;
	}
	Global_28180 = iParam0;
	Global_28180.f_12 = 1;
	return 1;
}

void Function_293() //Position: 0x131D3 / 78291
{
	Global_28180 = 4294967295;
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	Global_28180.f_12 = 1;
	return;
}

void Function_294(int iParam0) //Position: 0x131F6 / 78326
{
	int iVar0;
	
	if (iParam0 != 4294967295 || iParam0 != 0)
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(iParam0);
	switch (iVar0)
	{
		case 0x00000004:
			Function_293();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_295() //Position: 0x13230 / 78384
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = NET_MAILBOX_GET_MAX_NUM_CHALLENGES();
	iVar1 = 0;
	bVar3 = NET_MAILBOX_IS_SIGNED_INTO_SC();
	if (Global_83821 == bVar3 && iVar0 < 0)
	{
		Global_83821 = bVar3;
		iVar1 = 0;
		while (iVar1 < (iVar0 - 1))
		{
			if (NET_MAILBOX_IS_CHALLENGE_VALID(iVar1))
			{
				iVar2 = NET_MAILBOX_GET_CHALLENGE_BY_INDEX(iVar1);
				Function_242(&iVar2);
				Function_232(&iVar2, 0);
			}
			iVar1++;
		}
	}
	return;
}

void Function_296() //Position: 0x13287 / 78471
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return;
	}
	bVar0 = GET_ACTOR_ENUM(Global_34573);
	if (!iLocal_60)
	{
		if (HAS_STRING_TABLE_LOADED("blips"))
		{
			if (bVar0 != 1 || bVar0 != 638)
			{
				UI_SET_STRING("BLIP_PLAYER", UI_GET_STRING("BLIP_SON"));
			}
			else if (bVar0 == 0)
			{
				UI_SET_STRING("BLIP_PLAYER", UI_GET_STRING("nBLIP_JOHN"));
			}
			iLocal_60 = 1;
		}
	}
	return;
}

void Function_297() //Position: 0x1330D / 78605
{
	if (Global_88794)
	{
		if ((GET_CURRENT_GAME_TIME() - Global_88817) < IntToFloat(SC_CHALLENGE_GET_MIN_LB_REFRESH_DELAY_SECS()) || Global_88817 != 0.0f)
		{
			if (GET_CURRENT_GAME_TIME() - Global_88817) < IntToFloat(SC_CHALLENGE_GET_MIN_LB_REFRESH_DELAY_SECS())
			{
			}
			else if (Global_88817 != 0.0f)
			{
			}
			Function_298();
		}
		else
		{
			Global_88794 = 0;
		}
	}
	return;
}

void Function_298() //Position: 0x13358 / 78680
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_301();
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		iVar1 = Global_84611[iVar0140].f_88;
		if (iVar1 >= 0)
		{
			if (!Global_84611[iVar0140].f_76)
			{
				if (Global_84611[iVar0140].f_68)
				{
					if (Function_300(iVar1, iVar0))
					{
						Global_84611[iVar0140].f_76 = 1;
					}
				}
				else if (Function_299(iVar1, iVar0))
				{
					Global_84611[iVar0140].f_76 = 1;
				}
				return;
			}
		}
		iVar0++;
	}
	return;
}

bool Function_299(int iParam0, int iParam1) //Position: 0x133D2 / 78802
{
	var uVar0[67];
	var uVar68[67];
	var uVar136[67];
	var uVar204[67];
	
	if (!StackVal)
	{
		if (!NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_CREATE_READER(iParam0, 0))
			{
				Global_87412[iParam169].f_8 = 1;
				iLocal_23 = 0;
				iLocal_24 = 0;
			}
			else
			{
				LOG_ERROR("YP Failed to create GAC reader");
			}
		}
		else
		{
			NET_CHALLENGE_LB_DESTROY_READER();
		}
	}
	if (StackVal)
	{
		if (NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_IS_READ_COMPLETE())
			{
				if (NET_CHALLENGE_LB_IS_TOP_FRIEND_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_TOP_FRIEND_STATS(&uVar0))
					{
						(*&Global_84611[iParam1140] + 144)[112] = TO_FLOAT(uVar0[66]);
						(*&Global_84611[iParam1140] + 144[112] + 32)[0] = uVar0[2] != 1;
						(*&Global_84611[iParam1140] + 144[112] + 32)[1] = uVar0[3] != 1;
						(*&Global_84611[iParam1140] + 144[112] + 32)[2] = uVar0[4] != 1;
						(&Global_84611[iParam1140] + 144[112])->f_4 = uVar0[40];
						strcpy(&Global_84611[iParam1140] + 144[112] + 8, NET_CHALLENGE_LB_GET_TOP_FRIEND_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_TOP_SCORER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_TOP_SCORER_STATS(&uVar68))
					{
						(*&Global_84611[iParam1140] + 144)[012] = TO_FLOAT(uVar68[66]);
						(*&Global_84611[iParam1140] + 144[012] + 32)[0] = uVar68[2] != 1;
						(*&Global_84611[iParam1140] + 144[012] + 32)[1] = uVar68[3] != 1;
						(*&Global_84611[iParam1140] + 144[012] + 32)[2] = uVar68[4] != 1;
						(&Global_84611[iParam1140] + 144[012])->f_4 = uVar68[40];
						strcpy(&Global_84611[iParam1140] + 144[012] + 8, NET_CHALLENGE_LB_GET_TOP_SCORER_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_LOCAL_GAMER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_LOCAL_GAMER_STATS(&uVar204))
					{
						if (StackVal || (StackVal > uVar204[40] != uVar204[40] && (*&Global_84611[iParam1140] + 144)[212] < TO_FLOAT(uVar204[66])))
						{
							(*&Global_84611[iParam1140] + 144)[212] = TO_FLOAT(uVar204[66]);
							(*&Global_84611[iParam1140] + 144[212] + 32)[0] = uVar204[2] != 1;
							(*&Global_84611[iParam1140] + 144[212] + 32)[1] = uVar204[3] != 1;
							(*&Global_84611[iParam1140] + 144[212] + 32)[2] = uVar204[4] != 1;
							(&Global_84611[iParam1140] + 144[212])->f_4 = uVar204[40];
						}
						strcpy(&Global_84611[iParam1140] + 144[212] + 8, NET_CHALLENGE_LB_GET_LOCAL_GAMER_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_SCORER_ABOVE_PLAYER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_STATS(&uVar136))
					{
						(*&Global_84611[iParam1140] + 144)[512] = TO_FLOAT(uVar136[66]);
						(*&Global_84611[iParam1140] + 144[512] + 32)[0] = uVar136[2] != 1;
						(*&Global_84611[iParam1140] + 144[512] + 32)[1] = uVar136[3] != 1;
						(*&Global_84611[iParam1140] + 144[512] + 32)[2] = uVar136[4] != 1;
						(&Global_84611[iParam1140] + 144[512])->f_4 = uVar136[40];
						strcpy(&Global_84611[iParam1140] + 144[512] + 8, NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_NAME(), 24);
					}
					else
					{
						(*&Global_84611[iParam1140] + 144)[512] = 0.0f;
					}
				}
				else
				{
					(*&Global_84611[iParam1140] + 144)[512] = 0.0f;
				}
				Global_87412[iParam169].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
			if (iLocal_23 <= 30)
			{
				iLocal_23++;
			}
			else
			{
				Global_87412[iParam169].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
		}
		if (iLocal_24 <= 30)
		{
			iLocal_24++;
		}
		else
		{
			Global_87412[iParam169].f_8 = 0;
			return 1;
		}
	}
	return 0;
}

bool Function_300(int iParam0, int iParam1) //Position: 0x13794 / 79764
{
	var uVar0[67];
	var uVar68[67];
	var uVar136[67];
	
	if (Function_13(Global_88819[iParam1], 2))
	{
		return 1;
	}
	if (!StackVal)
	{
		if (!NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_CREATE_READER(iParam0, 1))
			{
				Global_87412[iParam169].f_8 = 1;
				iLocal_23 = 0;
				iLocal_24 = 0;
			}
			else
			{
				LOG_ERROR("YP Failed to create GS reader");
			}
		}
		else
		{
			NET_CHALLENGE_LB_DESTROY_READER();
		}
	}
	if (StackVal)
	{
		if (NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_IS_READ_COMPLETE())
			{
				if (NET_CHALLENGE_LB_IS_TOP_FRIEND_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_TOP_FRIEND_STATS(&uVar0))
					{
						(*&Global_84611[iParam1140] + 144)[112] = TO_FLOAT(uVar0[1]);
						strcpy(&Global_84611[iParam1140] + 144[112] + 8, NET_CHALLENGE_LB_GET_TOP_FRIEND_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_TOP_SCORER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_TOP_SCORER_STATS(&uVar68))
					{
						(*&Global_84611[iParam1140] + 144)[012] = TO_FLOAT(uVar68[1]);
						strcpy(&Global_84611[iParam1140] + 144[012] + 8, NET_CHALLENGE_LB_GET_TOP_SCORER_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_SCORER_ABOVE_PLAYER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_STATS(&uVar136))
					{
						(*&Global_84611[iParam1140] + 144)[512] = TO_FLOAT(uVar136[1]);
						strcpy(&Global_84611[iParam1140] + 144[512] + 8, NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_NAME(), 24);
					}
				}
				Global_87412[iParam169].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				if (Function_13(Global_88819[iParam1], 1))
				{
					if (!Function_13(Global_88819[iParam1], 2))
					{
						Function_3(&(Global_88819[iParam1]), 2);
					}
				}
				return 1;
			}
			if (iLocal_23 <= 30)
			{
				iLocal_23++;
			}
			else
			{
				Global_87412[iParam169].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
		}
		if (iLocal_24 <= 30)
		{
			iLocal_24++;
		}
		else
		{
			Global_87412[iParam169].f_8 = 0;
			return 1;
		}
	}
	return 0;
}

void Function_301() //Position: 0x13964 / 80228
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<173> Var3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Global_84611[iVar0140].f_88 >= 0)
		{
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Global_84611[iVar0140].f_76)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	if (iVar1 == iVar2)
	{
		iVar0 = 0;
		while (iVar0 <= 20)
		{
			Global_84611[iVar0140].f_76 = 0;
			iVar0++;
		}
		Global_88794 = 0;
		Global_88817 = GET_CURRENT_GAME_TIME();
		*(&Var3 + 80) = 3;
		RETRIEVE_GAME_STATE(&Var3, 44, 1);
		Var3.f_172 = Global_88817;
		STORE_GAME_STATE(&Var3, 44, 1);
	}
	return;
}

void Function_302() //Position: 0x13A18 / 80408
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

void Function_303() //Position: 0x13B1E / 80670
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && Global_29155[iVar010].f_28 == 4294967295 == 1) == 2) == 0)
		{
			if (Function_185(&(Global_29008[iVar0]), 4096) || Function_306())
			{
				SET_REGION_VISITED(Global_29155[iVar010].f_28, 1);
			}
			else
			{
				SET_REGION_VISITED(Global_29155[iVar010].f_28, 0);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= Global_8723)
	{
		if (Global_3380)
		{
			if (IS_BLIP_VALID(Global_9724[iVar1]))
			{
				SET_BLIP_VISIBLE(Global_9724[iVar1], false);
			}
		}
		else if (IS_BLIP_VALID(Global_9724[iVar1]))
		{
			SET_BLIP_VISIBLE(Global_9724[iVar1], true);
			switch (StackVal)
			{
				case 0x00000001:
				case 0x00000002:
				case 0x00000003:
				case 0x00000004:
				case 0x00000005:
				case 0x00000006:
				case 0x00000007:
				case 0x00000008:
				case 0x00000009:
				case 0x0000000A:
				case 0x0000000B:
				case 0x0000000C:
				case 0x0000000D:
				case 0x0000000E:
				case 0x0000000F:
					if ((Global_8723[iVar14].f_12 && Global_63399) >= 0)
					{
						SET_BLIP_SCALE(Global_9724[iVar1], 1.0f);
						SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 1.0f);
					}
					else
					{
						SET_BLIP_SCALE(Global_9724[iVar1], 0.85f);
						SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0.5f);
					}
					break;
				
				case 0x00000010:
				case 0x00000011:
				case 0x00000012:
					break;
				
				case 0x00000013:
					break;
				
				case 0x00000014:
					if (Global_29006 == Global_8723[iVar14])
					{
						if (SQUAD_IS_VALID(StackVal))
						{
							SET_BLIP_SCALE(Global_9724[iVar1], 1.0f);
							SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 1.0f);
						}
						else
						{
							SET_BLIP_SCALE(Global_9724[iVar1], 0.85f);
							SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0.5f);
						}
					}
					else
					{
						SET_BLIP_SCALE(Global_9724[iVar1], 1.0f);
						SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 1.0f);
					}
					break;
				
				case 0x00000016:
					break;
				}
		}
		iVar1++;
	}
	return;
}

bool Function_304(int iParam0) //Position: 0x13D42 / 81218
{
	return Function_305(Global_83864.f_1252, iParam0);
}

int Function_305(var uParam0, bool bParam1) //Position: 0x13D54 / 81236
{
	return (uParam0 && bParam1) == 0;
}

bool Function_306() //Position: 0x13D61 / 81249
{
	return NET_IS_MANAGER_INITIALIZED();
}

int Function_307(int iParam0) //Position: 0x13D6A / 81258
{
	if (!Function_214(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

void Function_308() //Position: 0x13D82 / 81282
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = NET_MAILBOX_GET_MAX_NUM_CHALLENGES();
	iVar1 = 0;
	if (iVar0 >= 0)
	{
		iVar1 = 0;
		while (iVar1 < (iVar0 - 1))
		{
			if (NET_MAILBOX_IS_CHALLENGE_VALID(iVar1))
			{
				uVar2 = NET_MAILBOX_GET_CHALLENGE_BY_INDEX(iVar1);
				Function_242(&uVar2);
				Function_232(&uVar2, 0);
			}
			iVar1++;
		}
	}
	return;
}

void Function_309() //Position: 0x13DC5 / 81349
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[32];
	int iVar17;
	bool bVar18;
	
	if (Function_306())
	{
		return;
	}
	if (Function_81(1) && !Function_85(1))
	{
		Function_316(1, 2);
		Function_79(1, 8);
	}
	if (Function_81(15) && !Function_85(15))
	{
		Function_316(15, 2);
	}
	if (Function_81(13) && !Function_85(13))
	{
		Function_316(13, 2);
	}
	if (Function_81(14) && !Function_85(14))
	{
		Function_316(14, 2);
	}
	if (!Function_189(57, 0))
	{
		if (Function_85(10))
		{
			Function_316(10, 4);
		}
		if (Function_85(9))
		{
			Function_316(9, 4);
		}
		if (Function_85(12))
		{
			Function_316(12, 4);
		}
	}
	if (!Function_85(3))
	{
		if (HAS_ITEM(Function_92(10), Global_34573))
		{
			Function_156(3, 1, 0, 0, 0);
			DELETE_ITEM(Function_92(10), Global_34573, 0);
			Global_59675[108].f_24 = 0;
		}
	}
	if (IS_PS3() || Function_188())
	{
		if (!Function_85(4))
		{
			if (HAS_ITEM(Function_92(55), Global_34573))
			{
				Function_156(4, 32, 0, 0, 0);
				DELETE_ITEM(Function_92(55), Global_34573, 0);
				Global_59675[558].f_24 = 0;
			}
		}
	}
	if (!Function_85(5))
	{
		if (HAS_ITEM(Function_92(54), Global_34573))
		{
			Function_156(5, 32, 0, 0, 0);
			DELETE_ITEM(Function_92(54), Global_34573, 0);
			Global_59675[548].f_24 = 0;
		}
	}
	if (!Function_85(6))
	{
		if (HAS_ITEM(Function_92(58), Global_34573))
		{
			Function_156(6, 32, 0, 0, 0);
			DELETE_ITEM(Function_92(58), Global_34573, 0);
			Global_59675[588].f_24 = 0;
		}
	}
	if (!Function_85(7))
	{
		if (HAS_ITEM(Function_92(53), Global_34573))
		{
			Function_156(7, 32, 0, 0, 0);
			DELETE_ITEM(Function_92(53), Global_34573, 0);
			Global_59675[538].f_24 = 0;
		}
	}
	if (!Function_85(8))
	{
		if (HAS_ITEM(Function_92(57), Global_34573))
		{
			Function_156(8, 32, 0, 0, 0);
			DELETE_ITEM(Function_92(57), Global_34573, 0);
			Global_59675[578].f_24 = 0;
		}
	}
	if (!Function_85(9))
	{
		if (HAS_ITEM(Function_92(56), Global_34573))
		{
			Function_156(9, 32, 0, 0, 0);
			DELETE_ITEM(Function_92(56), Global_34573, 0);
			Global_59675[568].f_24 = 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_27774)
	{
		if (Global_27774[iVar013] != 4294967295)
		{
			Function_315(iVar0);
			if (Function_311(iVar0))
			{
				if (Global_27774[iVar013].f_48 != 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_27774[iVar013].f_48, 0);
				}
			}
			else
			{
				if (Global_27774[iVar013].f_48 != 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_27774[iVar013].f_48, 1);
				}
				if (Global_28180 == iVar0)
				{
					Function_293();
				}
			}
		}
		iVar0++;
	}
	bVar18 = GET_ACTOR_ENUM(Global_34573);
	iVar0 = 0;
	while (iVar0 <= Global_27774)
	{
		if (Function_84(iVar0))
		{
			if (Global_27774[iVar013] != 4294967295)
			{
				strcpy(&cVar9, "out_", 32);
				stradd(&cVar9, &Global_27774[iVar013] + 32, 32);
				iVar17 = STRING_TO_HASH(&cVar9);
				if (Function_81(iVar0) || Function_85(iVar0))
				{
					if (Function_85(iVar0))
					{
						SATCHEL_SET_OUTFIT_STATE(iVar17, 3);
					}
					else
					{
						SATCHEL_SET_OUTFIT_STATE(iVar17, 2);
					}
				}
				else if (Function_310(iVar0))
				{
					SATCHEL_SET_OUTFIT_STATE(iVar17, 0);
				}
				else
				{
					SATCHEL_SET_OUTFIT_STATE(iVar17, 1);
				}
				if (bVar18 == 0)
				{
					strcpy(&cVar1, "john_", 32);
				}
				else if (bVar18 == 1)
				{
					strcpy(&cVar1, "jack_", 32);
				}
				if (Global_27774[iVar013] == 16)
				{
					strcpy(&cVar9, "out_mountainman", 32);
				}
				else if (Global_27774[iVar013] == 17)
				{
					strcpy(&cVar9, "out_bruiser", 32);
				}
				stradd(&cVar1, &cVar9, 32);
				if (SATCHEL_GET_OUTFIT_STATE(iVar17) != 3)
				{
					stradd(&cVar1, "_lock", 32);
				}
				SATCHEL_SET_OUTFIT_TEXTURE(iVar17, &cVar1);
			}
		}
		iVar0++;
	}
	UI_SEND_EVENT("refresh_outfits");
	return;
}

bool Function_310(int iParam0) //Position: 0x14178 / 82296
{
	if (!Function_84(iParam0))
	{
		LOG_ERROR("Attempting to check state of invalid outfit");
		return 0;
	}
	if (Function_82(iParam0, 8))
	{
		return 1;
	}
	return 0;
}

bool Function_311(int iParam0) //Position: 0x141C7 / 82375
{
	int iVar0;
	
	if (Function_84(iParam0))
	{
		if (Function_81(iParam0) && !Function_85(iParam0))
		{
			iVar0 = Function_160(iParam0);
			switch (iParam0)
			{
				case 0x00000004:
					switch (iVar0)
					{
						case 0x00000001:
							return 1;
							break;
						
						case 0x00000002:
							if (Function_189(6, 0) || Function_189(12, 0))
							{
								return 1;
							}
							return 0;
							break;
						
						default:
							return 1;
							break;
					}
					break;
				
				case 0x00000005:
					return 1;
					break;
				
				case 0x00000006:
					switch (iVar0)
					{
						case 0x00000001:
							return 1;
							break;
						
						case 0x00000002:
							if (Function_60(13))
							{
								if (Function_312(&(Global_63541[1455]), 14, 1, 1) && !Function_290(14))
								{
									return 1;
								}
								return 0;
							}
							if (Function_60(12))
							{
								if ((Function_312(&(Global_63541[1355]), 13, 1, 1) && !Function_290(13)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1355].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_60(11))
							{
								if ((Function_312(&(Global_63541[1255]), 12, 1, 1) && !Function_290(12)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1255].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_60(10))
							{
								if ((Function_312(&(Global_63541[1155]), 11, 1, 1) && !Function_290(11)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1155].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_189(5, 0))
							{
								if (Function_312(&(Global_63541[1055]), 10, 1, 1) && !Function_290(10))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						default:
							return 1;
							break;
					}
					break;
				
				case 0x00000007:
					return 1;
					break;
				
				case 0x00000008:
					switch (iVar0)
					{
						case 0x00000002:
							if (Function_60(26))
							{
								if (Function_312(&(Global_63541[2755]), 27, 1, 1) && !Function_290(27))
								{
									return 1;
								}
								return 0;
							}
							if (Function_60(25))
							{
								if (Function_312(&(Global_63541[2655]), 26, 1, 1) && !Function_290(26))
								{
									return 1;
								}
								return 0;
							}
							if (Function_60(24))
							{
								if (Function_312(&(Global_63541[2555]), 25, 1, 1) && !Function_290(25))
								{
									return 1;
								}
								return 0;
							}
							if (Function_60(23))
							{
								if (Function_312(&(Global_63541[2455]), 24, 1, 1) && !Function_290(24))
								{
									return 1;
								}
								return 0;
							}
							if (Function_189(26, 0))
							{
								if (Function_312(&(Global_63541[2355]), 23, 1, 1) && !Function_290(23))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000008:
							if (Function_60(55))
							{
								if ((Function_312(&(Global_63541[5655]), 56, 1, 1) && !Function_290(56)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5655].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_60(54))
							{
								if ((Function_312(&(Global_63541[5555]), 55, 1, 1) && !Function_290(55)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5555].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_60(27))
							{
								if (Function_312(&(Global_63541[5455]), 54, 1, 1) && !Function_290(54))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_189(41, 0))
							{
								return 1;
							}
							return 0;
							break;
						
						default:
							return 1;
							break;
					}
					break;
				
				case 0x00000009:
					switch (iVar0)
					{
						case 0x00000008:
							if (Function_60(52))
							{
								if ((Function_312(&(Global_63541[5355]), 53, 1, 1) && !Function_290(53)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5355].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_60(51))
							{
								if (Function_312(&(Global_63541[5255]), 52, 1, 1) && !Function_290(52))
								{
									return 1;
								}
								return 0;
							}
							if (Function_60(50))
							{
								if (Function_312(&(Global_63541[5155]), 51, 1, 1) && !Function_290(51))
								{
									return 1;
								}
								return 0;
							}
							if (Function_60(49))
							{
								if (Function_312(&(Global_63541[5055]), 50, 1, 1) && !Function_290(50))
								{
									return 1;
								}
								return 0;
							}
							if (Function_189(17, 0))
							{
								if (Function_312(&(Global_63541[4955]), 49, 1, 1) && !Function_290(49))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_189(57, 0))
							{
								return 1;
							}
							return 0;
							break;
						
						default:
							return 1;
							break;
					}
					break;
				
				case 0x00000002:
					switch (iVar0)
					{
						case 0x00000010:
							if (Function_60(19))
							{
								if (Function_312(&(Global_63541[2055]), 20, 1, 1) && !Function_290(20))
								{
									return 1;
								}
								return 0;
							}
							if (Function_60(18))
							{
								if ((Function_312(&(Global_63541[1955]), 19, 1, 1) && !Function_290(19)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1955].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_60(17))
							{
								if (Function_312(&(Global_63541[1855]), 18, 1, 1) && !Function_290(18))
								{
									return 1;
								}
								return 0;
							}
							if (Function_60(16))
							{
								if ((Function_312(&(Global_63541[1755]), 17, 1, 1) && !Function_290(17)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1755].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_60(15))
							{
								if (Function_312(&(Global_63541[1655]), 16, 1, 1) && !Function_290(16))
								{
									return 1;
								}
								return 0;
							}
							if (Function_189(8, 0))
							{
								if (Function_312(&(Global_63541[1555]), 15, 1, 1) && !Function_290(15))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						default:
							return 1;
							break;
					}
					break;
				
				case 0x00000003:
					return 1;
					break;
				
				case 0x00000010:
					return 0;
					break;
				
				case 0x00000011:
					return 0;
					break;
				
				default:
					return 0;
					break;
				}
		}
	}
	else
	{
		LOG_ERROR("Attempting to track an invalid outfit");
		return 0;
	}
	return 0;
}

int Function_312(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x14799 / 83865
{
	if (!iParam0->f_172 != 0)
	{
		if (Function_90(iParam0 + 172, 4))
		{
			if (!Function_287(iParam1))
			{
				return 0;
			}
		}
		if (Function_90(iParam0 + 172, 1))
		{
			if (Global_63541[iParam0->f_16855].f_20 != Global_63541[iParam155].f_20 || iParam3)
			{
				if (!Function_60(iParam0->f_168))
				{
					return 0;
				}
			}
		}
		if (Function_90(iParam0 + 172, 2) && Global_3365)
		{
			if (!Function_189(iParam0->f_176, 0))
			{
				return 0;
			}
		}
		if (Function_90(iParam0 + 172, 8) && Global_3365)
		{
			if (!Function_314(iParam0->f_164, 0))
			{
				return 0;
			}
		}
		if (!bParam2)
		{
			return 1;
		}
		return Function_313(iParam0);
	}
	return 1;
}

int Function_313(int iParam0) //Position: 0x1484D / 84045
{
	if (!iParam0->f_172 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_90(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_90(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_90(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_90(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_90(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_90(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_314(int iParam0, bool bParam1) //Position: 0x148F9 / 84217
{
	if (!Function_180(iParam0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

void Function_315(int iParam0) //Position: 0x1492F / 84271
{
	int iVar0;
	
	if (!Function_84(iParam0))
	{
		return;
	}
	if (Function_85(iParam0))
	{
		return;
	}
	if (!Function_82(iParam0, 1048576))
	{
		return;
	}
	iVar0 = Function_74(iParam0);
	if (iVar0 >= Global_27774[iParam013].f_24)
	{
		Global_27774[iParam013].f_24 = iVar0;
		if (Global_27774[iParam013].f_24 == Global_27774[iParam013].f_28)
		{
			Function_190(iParam0, 0, 1);
		}
	}
	return;
}

void Function_316(int iParam0, int iParam1) //Position: 0x14992 / 84370
{
	int iVar0;
	
	if (!Function_84(iParam0))
	{
		LOG_ERROR("Attempting to unset status on invalid outfit");
		return;
	}
	iVar0 = (StackVal && iParam1);
	Global_27774[iParam013].f_8 = (StackVal - iVar0);
	return;
}

void Function_317(var uParam0, var uParam1, bool bParam2) //Position: 0x149F7 / 84471
{
	struct<2> Var0;
	bool bVar2;
	float fVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	
	Function_32();
	Var0 = { StackVal, Function_32() };
	Function_206(179, &Var0, 0, 1);
	Function_31();
	Var0 = { StackVal, Function_31() };
	Function_206(180, &Var0, 0, 1);
	Function_30();
	Var0 = { StackVal, Function_30() };
	Function_206(181, &Var0, 0, 1);
	Function_29(Function_304(64));
	Var0 = { StackVal, Function_29(Function_304(64)) };
	Function_206(182, &Var0, 0, 1);
	strcpy(&Var0, Function_321(1), 8);
	Function_206(401, &Var0, 0, 1);
	strcpy(&Var0, Function_320(1), 8);
	Function_206(404, &Var0, 0, 1);
	Function_33();
	bVar2 = false;
	while (bVar2 <= *uParam0)
	{
		switch (uParam1[bVar220]->f_48)
		{
			case 0xFFFFFFFF:
				break;
			
			case 0x00000000:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				if (((*uParam0)[bVar2] - IntToFloat(FLOOR((*uParam0)[bVar2]))) < 0.0f)
				{
					strcpy(&cVar4, FLOAT_TO_STRING_FORMATED((*uParam0)[bVar2], 6, 2), 32);
				}
				else
				{
					strcpy(&cVar4, INT_TO_STRING(FLOOR((*uParam0)[bVar2])), 32);
				}
				*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
				break;
			
			case 0x00000001:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				strcpy(&cVar4, INT_TO_STRING(FLOOR((*uParam0)[bVar2])), 32);
				*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
				break;
			
			case 0x00000003:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				if ((*uParam0)[bVar2] < 0.0f)
				{
					if (((*uParam0)[bVar2] - IntToFloat(FLOOR((*uParam0)[bVar2]))) < 0.0f)
					{
						strcpy(&cVar4, FLOAT_TO_STRING_FORMATED((*uParam0)[bVar2], 6, 2), 32);
					}
					else
					{
						strcpy(&cVar4, INT_TO_STRING(FLOOR((*uParam0)[bVar2])), 32);
					}
					*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
					HIDE_STAT(uParam1[bVar220], 0);
					UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
				}
				else
				{
					HIDE_STAT(uParam1[bVar220], 1);
				}
				break;
			
			case 0x00000004:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				if ((*uParam0)[bVar2] < 0.0f)
				{
					strcpy(&cVar4, INT_TO_STRING(FLOOR((*uParam0)[bVar2])), 32);
					*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
					HIDE_STAT(uParam1[bVar220], 0);
					UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
				}
				else
				{
					HIDE_STAT(uParam1[bVar220], 1);
				}
				break;
			
			case 0x00000002:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				break;
			
			case 0x00000005:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				if ((*uParam0)[bVar2] < 0.0f)
				{
					if (((*uParam0)[bVar2] - IntToFloat(FLOOR((*uParam0)[bVar2]))) < 0.0f)
					{
						strcpy(&cVar4, FLOAT_TO_STRING_FORMATED((*uParam0)[bVar2], 6, 2), 32);
					}
					else
					{
						strcpy(&cVar4, INT_TO_STRING(FLOOR((*uParam0)[bVar2])), 32);
					}
					*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
					UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
					HIDE_STAT(uParam1[bVar220], 0);
				}
				else
				{
					strcpy(&cVar4, "0", 32);
					*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
					UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
					HIDE_STAT(uParam1[bVar220], 1);
				}
				break;
			
			case 0x0000000E:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				strcpy(&cVar4, INT_TO_STRING(FLOOR((*uParam0)[bVar2])), 32);
				stradd(&cVar4, "/", 32);
				stradd(&cVar4, INT_TO_STRING(FLOOR(uParam1[bVar220]->f_64)), 32);
				*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
				break;
			
			case 0x00000013:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(Function_319(bVar2), 3, 1), 32);
				stradd(&cVar4, "%", 32);
				*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
				break;
			
			case 0x00000006:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				if (((*uParam0)[bVar2] - IntToFloat(FLOOR((*uParam0)[bVar2]))) < 0.0f)
				{
					strcpy(&cVar4, FLOAT_TO_STRING_FORMATED((*uParam0)[bVar2], 6, 2), 32);
				}
				else
				{
					strcpy(&cVar4, INT_TO_STRING(FLOOR((*uParam0)[bVar2])), 32);
				}
				*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
				break;
			
			case 0x0000000F:
			case 0x00000010:
			case 0x00000011:
			case 0x00000012:
			case 0x00000009:
			case 0x0000000A:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				HIDE_STAT(uParam1[bVar220], 1);
				break;
			
			case 0x00000007:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(Function_319(bVar2), 3, 1), 32);
				stradd(&cVar4, "%", 32);
				*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTSTRING(&cVar4);
					PRINTNL();
				}
				UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
				break;
			
			case 0x00000008:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				bVar12 = Function_319(bVar2);
				strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(bVar12, 3, 1), 32);
				stradd(&cVar4, "%", 32);
				*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTSTRING(&cVar4);
					PRINTNL();
				}
				fVar3 = (bVar12 / 100.0f);
				UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, fVar3);
				break;
			
			case 0x0000000B:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				if ((*uParam0)[bVar2] < 0.0f)
				{
					strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(Function_319(bVar2), 3, 1), 32);
					stradd(&cVar4, "%", 32);
					*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
					HIDE_STAT(uParam1[bVar220], 0);
					UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
				}
				else
				{
					HIDE_STAT(uParam1[bVar220], 1);
				}
				break;
			
			case 0x0000000C:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				if ((*uParam0)[bVar2] < 0.0f)
				{
					bVar12 = Function_319(bVar2);
					strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(bVar12, 3, 1), 32);
					stradd(&cVar4, "%", 32);
					*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
					HIDE_STAT(uParam1[bVar220], 0);
					fVar3 = (bVar12 / 100.0f);
					UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, fVar3);
				}
				else
				{
					HIDE_STAT(uParam1[bVar220], 1);
				}
				break;
			
			case 0x00000014:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				if (IS_STRING_VALID(uParam1[bVar220] + 16))
				{
					HIDE_STAT(uParam1[bVar220], 0);
					UPDATE_STAT(uParam1[bVar220], UI_GET_STRING(uParam1[bVar220] + 16), 3212836864);
				}
				else
				{
					HIDE_STAT(uParam1[bVar220], 1);
				}
				break;
			
			case 0x00000015:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				UI_SET_MONEY("BLAH", "statbuffer", FLOOR((*uParam0)[bVar2]));
				strcpy(uParam1[bVar220] + 16, UI_GET_STRING("statbuffer"), 32);
				UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
				break;
			
			case 0x00000016:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				if ((*uParam0)[bVar2] > 2000.0f)
				{
					bVar12 = (*uParam0)[bVar2];
					bVar13 = false;
				}
				else
				{
					bVar12 = ((*uParam0)[bVar2] / 2000.0f);
					bVar13 = true;
				}
				if ((bVar12 - IntToFloat(FLOOR(bVar12))) < 0.0f)
				{
					strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(bVar12, 6, 2), 32);
				}
				else
				{
					strcpy(&cVar4, INT_TO_STRING(FLOOR(bVar12)), 32);
				}
				stradd(&cVar4, " ", 32);
				if (bVar13)
				{
					stradd(&cVar4, UI_GET_STRING("stat_ton"), 32);
				}
				else
				{
					stradd(&cVar4, UI_GET_STRING("stat_lb"), 32);
				}
				*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
				break;
			
			case 0x00000017:
			case 0x0000000D:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				bVar12 = (*uParam0)[bVar2];
				if (bVar12 <= 60.0f)
				{
					bVar16 = (FLOOR(bVar12) / 60);
					bVar18 = false;
					if (bVar16 > 60)
					{
						bVar15 = (bVar16 / 60);
						bVar16 = (bVar16 - bVar15 * 60);
						bVar17 = FLOOR(((bVar12 - TO_FLOAT(bVar15 * 60 * 60)) - TO_FLOAT(bVar16 * 60)));
						if (bVar15 > 24)
						{
							bVar14 = (bVar15 / 24);
							bVar15 = (bVar15 - bVar14 * 24);
							strcpy(&cVar4, INT_TO_STRING(bVar14), 32);
							stradd(&cVar4, " ", 32);
							if (bVar14 != 1)
							{
								stradd(&cVar4, UI_GET_STRING("nstat_days"), 32);
							}
							else
							{
								stradd(&cVar4, UI_GET_STRING("stat_day"), 32);
							}
							bVar18 = true;
						}
						if (bVar15 >= 0)
						{
							if (bVar14 >= 0)
							{
								stradd(&cVar4, " ", 32);
								stradd(&cVar4, INT_TO_STRING(bVar15), 32);
							}
							else
							{
								strcpy(&cVar4, INT_TO_STRING(bVar15), 32);
							}
							stradd(&cVar4, " ", 32);
							stradd(&cVar4, UI_GET_STRING("stat_hr"), 32);
							bVar18 = true;
						}
						if (bVar16 >= 0)
						{
							if (bVar18)
							{
								stradd(&cVar4, " ", 32);
							}
							stradd(&cVar4, INT_TO_STRING(bVar16), 32);
							stradd(&cVar4, " ", 32);
							stradd(&cVar4, UI_GET_STRING("stat_min"), 32);
							bVar18 = true;
						}
						if (bVar17 >= 0)
						{
							if (bVar18)
							{
								stradd(&cVar4, " ", 32);
							}
							stradd(&cVar4, INT_TO_STRING(bVar17), 32);
							stradd(&cVar4, " ", 32);
							stradd(&cVar4, UI_GET_STRING("stat_sec"), 32);
							bVar18 = false;
						}
					}
					else
					{
						strcpy(&cVar4, INT_TO_STRING(bVar16), 32);
						stradd(&cVar4, " ", 32);
						stradd(&cVar4, UI_GET_STRING("stat_min"), 32);
						bVar17 = FLOOR((bVar12 - TO_FLOAT(bVar16 * 60)));
						if (bVar17 >= 0)
						{
							stradd(&cVar4, " ", 32);
							stradd(&cVar4, INT_TO_STRING(bVar17), 32);
							stradd(&cVar4, " ", 32);
							stradd(&cVar4, UI_GET_STRING("stat_sec"), 32);
						}
					}
				}
				else
				{
					itos(&cVar4, FLOOR(bVar12), 32);
					stradd(&cVar4, " ", 32);
					stradd(&cVar4, UI_GET_STRING("stat_sec"), 32);
				}
				*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
				if (uParam1[bVar220]->f_48 == 13)
				{
					if ((*uParam0)[bVar2] < 0.0f)
					{
						HIDE_STAT(uParam1[bVar220], 0);
					}
					else
					{
						HIDE_STAT(uParam1[bVar220], 1);
					}
				}
				break;
			
			case 0x00000018:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				bVar12 = (*uParam0)[bVar2];
				bVar12 = (bVar12 * 3.28084f);
				if (bVar12 > 5280.0f)
				{
					bVar19 = false;
				}
				else
				{
					bVar12 = (bVar12 / 5280.0f);
					bVar19 = true;
				}
				if ((bVar12 - IntToFloat(FLOOR(bVar12))) < 0.0f)
				{
					strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(bVar12, 6, 2), 32);
				}
				else
				{
					strcpy(&cVar4, INT_TO_STRING(FLOOR(bVar12)), 32);
				}
				stradd(&cVar4, " ", 32);
				if (bVar19)
				{
					stradd(&cVar4, UI_GET_STRING("stat_mi"), 32);
				}
				else
				{
					stradd(&cVar4, UI_GET_STRING("stat_ft"), 32);
				}
				*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
				break;
			
			case 0x00000019:
				if (bParam2)
				{
					PRINTSTRING(uParam1[bVar220]);
					PRINTSTRING("=");
					PRINTFLOAT((*uParam0)[bVar2]);
					PRINTNL();
				}
				bVar12 = (*uParam0)[bVar2];
				if ((bVar12 - IntToFloat(FLOOR(bVar12))) < 0.0f)
				{
					strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(bVar12, 6, 2), 32);
				}
				else
				{
					strcpy(&cVar4, INT_TO_STRING(FLOOR(bVar12)), 32);
				}
				stradd(&cVar4, " ", 32);
				if (bVar12 == 1.0f)
				{
					stradd(&cVar4, UI_GET_STRING("nstat_days"), 32);
				}
				else
				{
					stradd(&cVar4, UI_GET_STRING("stat_day"), 32);
				}
				*(uParam1[bVar220] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(uParam1[bVar220], uParam1[bVar220] + 16, 3212836864);
				break;
			
			case 0x0000001A:
				PRINTSTRING("PAUSE_UPDATE_STATS: Attempting to display a Stat of STAT_TYPE_TEMP_BUFFER_ENTRY: ");
				PRINTINT(bVar2);
				PRINTSTRING(" - ");
				PRINTSTRING(uParam1[bVar220]);
				PRINTNL();
				LOG_WARNING("PAUSE_UPDATE_STATS: Attempting to display a Stat of STAT_TYPE_TEMP_BUFFER_ENTRY. This is an illegal operation.");
				break;
			
			default:
				PRINTSTRING("PAUSE_UPDATE_STATS: Attempting to display an unknown Stat Type: ");
				PRINTINT(bVar2);
				PRINTSTRING(" - ");
				PRINTSTRING(uParam1[bVar220]);
				PRINTNL();
				LOG_WARNING("PAUSE_UPDATE_STATS: Attempting to display an unknown Stat Type!");
				break;
		}
		bVar2++;
	}
	Function_318();
	return;
}

void Function_318() //Position: 0x158EB / 88299
{
	if (!Function_304(512))
	{
		HIDE_STAT(&(Global_35278[59820]), 1);
		HIDE_STAT(&(Global_35278[34920]), 1);
	}
	if (!Function_304(64))
	{
		HIDE_STAT(&(Global_35278[(50 + 31)20]), 1);
		HIDE_STAT(&(Global_35278[(90 + 31)20]), 1);
		HIDE_STAT(&(Global_35278[(183 + 31)20]), 1);
		HIDE_STAT(&(Global_35278[(140 + 31)20]), 1);
	}
	return;
}

bool Function_319(int iParam0) //Position: 0x15950 / 88400
{
	char* cVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0.0f;
	}
	if (Global_35278[iParam020].f_64 != 0.0f)
	{
		fVar2 = 100.0f;
	}
	else
	{
		fVar2 = Global_35278[iParam020].f_64;
	}
	fVar3 = Global_35278[iParam020].f_60;
	fVar1 = Function_44(iParam0);
	if (Function_43(iParam0) != 19 || Function_43(iParam0) != 17)
	{
		if (fVar1 > fVar3)
		{
			fVar1 = fVar3;
		}
		if (fVar1 < fVar2)
		{
			fVar1 = fVar3;
		}
		fVar4 = ((fVar1 - fVar3) / (fVar2 - fVar3));
		cVar0 = (fVar4 * 100.0f);
		return cVar0;
	}
	if (fVar1 <= fVar2)
	{
		return 100.0f;
	}
	cVar0 = ((fVar1 * 100.0f) / fVar2);
	if (cVar0 <= 0.0f)
	{
		return cVar0;
	}
	return 0.0f;
}

var Function_320(bool bParam0) //Position: 0x15A31 / 88625
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar3 = 0;
	iVar8 = "fav_non";
	if (bParam0)
	{
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 <= 275)
		{
			Function_119(Global_13172[iVar911], &iVar0, &iVar1, &iVar2);
			if (iVar2 == 6)
			{
				if (iVar1 != 0)
				{
					if (iVar0 == Global_30717[0])
					{
						iVar4 = (StackVal + (iVar4 + Global_13172[iVar911].f_12));
					}
					else if (iVar0 == Global_30693[0])
					{
						iVar5 = (StackVal + (iVar5 + Global_13172[iVar911].f_12));
					}
					else if (iVar0 == Global_30668[0])
					{
						iVar6 = (StackVal + (iVar6 + Global_13172[iVar911].f_12));
					}
					else if (iVar0 == Global_30640[1])
					{
						iVar7 = (StackVal + (iVar7 + Global_13172[iVar911].f_12));
					}
				}
			}
			iVar9++;
		}
		if (iVar4 >= 0)
		{
			iVar8 = "fav_blk";
			iVar3 = iVar4;
		}
		if (iVar5 >= iVar3)
		{
			iVar8 = "fav_chu";
			iVar3 = iVar5;
		}
		if (iVar6 >= iVar3)
		{
			iVar8 = "fav_hen";
			iVar3 = iVar6;
		}
		if (iVar7 >= iVar3)
		{
			iVar8 = "fav_rwf";
			iVar3 = iVar7;
		}
	}
	return iVar8;
}

var Function_321(bool bParam0) //Position: 0x15B70 / 88944
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[3];
	bool bVar8;
	int iVar9;
	
	iVar3 = 0;
	bVar8 = "fav_non";
	if (bParam0)
	{
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 <= 275)
		{
			Function_119(Global_13172[iVar911], &uVar0, &iVar1, &iVar2);
			if (iVar2 == 6)
			{
				if (iVar1 > 0 || iVar1 < 3)
				{
					LOG_ERROR("GET_FAVORITE_JOB_LABEL: minorIdent out of bounds");
				}
				else
				{
					iVar4[iVar1] = (StackVal + (iVar4[iVar1] + Global_13172[iVar911].f_12));
				}
			}
			iVar9++;
		}
		if (iVar4[1] >= 0)
		{
			bVar8 = "fjob_1";
			iVar3 = iVar4[1];
		}
		if (iVar4[2] >= iVar3)
		{
			bVar8 = "fjob_2";
			iVar3 = iVar4[2];
		}
	}
	return bVar8;
}

