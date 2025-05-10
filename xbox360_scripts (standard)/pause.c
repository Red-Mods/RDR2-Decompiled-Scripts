//Decompiled with MagicRDR v1.0
//Function Count : 311
//Statics Count : 60
//Natives Count : 383
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
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0.0f;
	var uLocal_28 = 0;
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
	bool bLocal_58 = false;
	int iLocal_59 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iLocal_24 = 31;
	iLocal_25 = 33;
	iLocal_26 = 1;
	fLocal_27 = 2.0f;
	REQUEST_STRING_TABLE("blips");
	REQUEST_STRING_TABLE("stats");
	Global_88794 = !Global_34165.f_44;
	bVar0 = Global_88794 != true;
	bVar1 = true;
	Function_307(&Global_34581, &Global_35278, 0);
	Function_299();
	Function_298();
	if (Function_297(StackVal) >= 0 || Function_296())
	{
		UI_EXIT("pauseBounty");
		UI_EXIT("pauseBountyValue");
		UI_EXCLUDE("pauseBounty");
		UI_EXCLUDE("pauseBountyValue");
	}
	else
	{
		UI_SET_MONEY(StackVal, "BountyAmount", Function_297("PlayerBounty"));
		UI_INCLUDE("pauseBounty");
		UI_INCLUDE("pauseBountyValue");
		UI_ENTER("pauseBounty");
		UI_ENTER("pauseBountyValue");
		UI_REFRESH("pauseBounty");
		UI_REFRESH("pauseBountyValue");
	}
	if (Function_296())
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
	Function_295();
	Function_294();
	bLocal_58 = GET_TARGETED_JOURNAL_ENTRY();
	while (!IS_EXITFLAG_SET())
	{
		if ((bVar1 && (UI_ISFOCUSED("PM_Stats") || UI_ISFOCUSED("PM_Collections"))) && HAS_STRING_TABLE_LOADED("stats"))
		{
			bVar1 = false;
			Function_307(&Global_34581, &Global_35278, 0);
		}
		else if (!(UI_ISFOCUSED("PM_Stats") || UI_ISFOCUSED("PM_Collections")))
		{
			bVar1 = true;
		}
		Function_289();
		if (!Global_88794 && bVar0)
		{
			Function_298();
			bVar0 = false;
		}
		Function_288();
		Function_287();
		Function_262();
		Function_260();
		Function_250();
		Function_221();
		if (bVar2)
		{
			Function_213(&uLocal_28);
		}
		WAIT(false);
	}
	Function_14();
	Function_5();
	if (bVar2)
	{
		Function_4(&uLocal_28);
	}
	REMOVE_STRING_TABLE("stats");
	REMOVE_STRING_TABLE("blips");
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	if (Function_296())
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

void Function_1(int iParam0, bool bParam1) //Position: 0x3FF / 1023
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

void Function_2(int iParam0, int iParam1) //Position: 0x43A / 1082
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x44D / 1101
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_4(var uParam0) //Position: 0x45C / 1116
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

void Function_5() //Position: 0x49B / 1179
{
	bool bVar0;
	
	if (Function_296())
	{
		return;
	}
	bVar0 = GET_TARGETED_JOURNAL_ENTRY();
	if (bVar0 != 0 || bVar0 != 4294967295)
	{
		return;
	}
	if (!GET_JOURNAL_ENTRY_TYPE(bVar0) != 4)
	{
		return;
	}
	if (bVar0 != Global_26303.f_36 && Function_12() != 1)
	{
		Function_6();
	}
	return;
}

int Function_6() //Position: 0x4DB / 1243
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
	Function_7(0,7f, 0.0f, 0.0f);
	return 1;
}

void Function_7(var uParam0, var uParam1, bool bParam2) //Position: 0x59B / 1435
{
	Global_28185.f_60 = 5;
	Global_28185.f_64 = uParam0;
	Global_28185.f_68 = uParam1;
	Global_28185.f_72 = bParam2;
	return;
}

void Function_8(vector3 vParam0, var uParam3, var uParam4, var uParam5) //Position: 0x5BC / 1468
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

void Function_9(bool bParam0) //Position: 0x678 / 1656
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

void Function_10() //Position: 0x6B8 / 1720
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

bool Function_11(int iParam0) //Position: 0x6E3 / 1763
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_12() //Position: 0x6F9 / 1785
{
	return Function_13(StackVal, 1);
}

bool Function_13(bool bParam0, bool bParam1) //Position: 0x708 / 1800
{
	return (bParam0 && bParam1) == 0;
}

void Function_14() //Position: 0x715 / 1813
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
					if (Function_16(iVar0, 0, &bVar1))
					{
						Global_34108[iVar0] = 0;
						UI_CHEAT_SET_VALUE(iVar0, 0);
					}
				}
			}
			else if (iVar2 == 1)
			{
				if (!Function_16(iVar0, 1, &bVar1))
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

void Function_15(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7C8 / 1992
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

bool Function_16(int iParam0, bool bParam1, int iParam2) //Position: 0x813 / 2067
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
					SET_ACTOR_INVULNERABILITY(Global_34573, true);
					return 1;
				}
				SET_ACTOR_INVULNERABILITY(Global_34573, false);
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
				SET_DEADEYE_REGENERATION_RATE(0, 0,25f, 0);
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
				Function_212(500, 1);
				UI_CHEAT_SET_VALUE(6, 0);
				UI_SET_HAS_CHEATED(1);
				return 0;
			}
			break;
		
		case 0x0000000A:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_211(4096);
				Function_211(8192);
				Function_211(16384);
				return 1;
			}
			Function_210(4096);
			Function_210(8192);
			Function_210(16384);
			return 1;
			break;
		
		case 0x0000000B:
			if (bParam1)
			{
				Function_209(StackVal, 500);
				UI_CHEAT_SET_VALUE(11, 0);
				UI_SET_HAS_CHEATED(1);
				return 0;
			}
			break;
		
		case 0x0000000C:
			if (bParam1)
			{
				Function_208(StackVal, 500);
				UI_CHEAT_SET_VALUE(12, 0);
				UI_SET_HAS_CHEATED(1);
				return 0;
			}
			break;
		
		case 0x0000000D:
			if (bParam1)
			{
				Function_205(StackVal, 0);
				Function_203(0);
				Global_26401.f_2212 = 0;
				(*&Global_26401 + 36[11181][35])[0] = StackVal;
				Function_202();
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
				Function_201(3, 10000, 0);
				Function_199(4, "sr_ntr6", 1, 1);
				UI_CHEAT_SET_VALUE(19, 0);
				Global_12976.f_156 = 5;
				return 0;
			}
			break;
		
		case 0x00000014:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_201(3, 0, 0);
				Function_199(4, "sr_ntr1", 1, 1);
				UI_CHEAT_SET_VALUE(20, 0);
				Global_12976.f_156 = 0;
				return 0;
			}
			break;
		
		case 0x00000015:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_201(1, 5000, 0);
				Function_199(2, "sr_hnr1", 1, 1);
				Global_12976.f_152 = 6;
				UI_CHEAT_SET_VALUE(21, 0);
				return 0;
			}
			break;
		
		case 0x00000016:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_201(1, 4294962296, 0);
				Function_199(2, "sr_hnr7", 1, 1);
				Global_12976.f_152 = 0;
				UI_CHEAT_SET_VALUE(22, 0);
				return 0;
			}
			break;
		
		case 0x00000017:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_201(1, 0, 0);
				Function_199(2, "sr_hnr4", 1, 1);
				Global_12976.f_152 = 3;
				UI_CHEAT_SET_VALUE(23, 0);
				return 0;
			}
			break;
		
		case 0x0000001D:
			if (bParam1)
			{
				if (((Function_198(0, 0, 1, 1) || Function_194(Global_34573, 0, 0)) || Function_193()) || Global_63096)
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
			if (!Function_198(0, 0, 1, 1))
			{
				UI_SET_HAS_CHEATED(1);
				iVar1 = Function_192();
				iVar1++;
				if (iVar1 >= 5)
				{
					iVar1 = 0;
				}
				Function_191(iVar1, 0);
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
			if ((!Function_198(0, 0, 1, 1) && !Global_63096) && !Global_3387)
			{
				if (bParam1)
				{
					if (IS_POPSET_VALID(Global_30750[6]))
					{
						UI_SET_HAS_CHEATED(1);
						bVar2 = Function_190(Global_30750[6], 0, 23, 0);
					}
					else
					{
						bVar2 = 976;
					}
					if (Function_189(bVar2))
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
						Global_34107 = CREATE_ACTOR_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_188(), bVar2, vVar9, 0.0f, 0.0f, 0.0f);
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
			if ((!Function_198(0, 0, 1, 1) && !Global_63096) && !Global_3387)
			{
				if (bParam1)
				{
					UI_SET_HAS_CHEATED(1);
					bVar2 = 1000;
					if (Function_189(bVar2))
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
						Global_34107 = CREATE_ACTOR_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_188(), bVar2, vVar9, 0.0f, 0.0f, 0.0f);
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
			if ((!Function_198(0, 0, 1, 1) && !Global_63096) && !Global_3387)
			{
				if (bParam1)
				{
					if (IS_POPSET_VALID(Global_30750[9]))
					{
						UI_SET_HAS_CHEATED(1);
						bVar2 = Function_190(Global_30750[9], 0, 0, 0);
					}
					else
					{
						bVar2 = 1177;
					}
					if (Function_189(bVar2))
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
						Global_34107 = Function_184(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_188(), bVar2, 4294967295, vVar9, 0.0f, 0.0f, 0.0f, 1, 976, 976, 976, 4);
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
				Function_183(3, 0, 1);
				Function_183(15, 0, 1);
				Function_183(11, 0, 1);
				Function_183(1, 0, 1);
				UI_SET_HAS_CHEATED(1);
				UI_CHEAT_SET_VALUE(30, 0);
				return 0;
			}
			break;
		
		case 0x0000001F:
			if (bParam1)
			{
				if (Function_182(57, 0))
				{
					Function_183(12, 0, 1);
					Function_183(10, 0, 1);
					Function_183(9, 0, 1);
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
				if (IS_PS3())
				{
					Function_183(4, 0, 1);
				}
				Function_183(5, 0, 1);
				Function_183(6, 0, 1);
				Function_183(7, 0, 1);
				Function_183(8, 0, 1);
				UI_SET_HAS_CHEATED(1);
				UI_CHEAT_SET_VALUE(32, 0);
				return 0;
			}
			break;
		
		case 0x00000021:
			if (bParam1)
			{
				Function_180(&Global_30640);
				Function_180(&Global_30668);
				Function_180(&Global_30658);
				Function_180(&Global_30679);
				Function_180(&Global_30685);
				Function_180(&Global_30693);
				Function_180(&Global_30707);
				Function_180(&Global_30723);
				Function_180(&Global_30717);
				Function_177(Global_30628[0]);
				Function_177(Global_30628[1]);
				Function_177(Global_30628[2]);
				Function_177(Global_30628[3]);
				Function_177(Global_30633[0]);
				Function_177(Global_30633[2]);
				Function_177(Global_30633[1]);
				Function_177(Global_30637[0]);
				Function_177(Global_30637[1]);
				UI_SET_HAS_CHEATED(1);
				UI_CHEAT_SET_VALUE(33, 0);
				return 0;
			}
			break;
		
		case 0x00000022:
			if ((!Function_198(0, 0, 1, 1) && !Function_194(Global_34573, 0, 0)) && !Global_63096)
			{
				if (bParam1)
				{
					HUD_FADE_OUT(0.0f, 1f, 1);
					iVar15 = 0;
					while (iVar15 <= 58)
					{
						if (Function_174(Function_176(iVar15)))
						{
							Function_97(Function_176(iVar15), 0, 0, 0, 1);
						}
						iVar15++;
					}
					Global_6269 = 57;
					Function_96(0x1000000);
					Function_93();
					Function_22(1);
					if (!Function_21(38))
					{
						Function_19(38, 1);
					}
					if (!Function_21(39))
					{
						Function_19(39, 1);
					}
					if (!Function_21(40))
					{
						Function_19(40, 1);
					}
					if (!Function_21(41))
					{
						Function_19(41, 1);
					}
					if (!Function_21(42))
					{
						Function_19(42, 1);
					}
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
			if (!Function_198(0, 0, 1, 1))
			{
				if (bParam1)
				{
					if (Function_18(390) != 1)
					{
						UI_SET_HAS_CHEATED(1);
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, false);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_17(390, 3.0f);
						Function_201(390, 1, 1);
						return 1;
					}
				}
				if (Global_25986[2])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					Function_17(390, 3.0f);
					Function_201(390, 3, 1);
					return 1;
				}
				if (Global_25986[1])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
					Function_17(390, 3.0f);
					Function_201(390, 2, 1);
					return 1;
				}
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
				Function_17(390, 3.0f);
				Function_201(390, 1, 1);
				return 1;
			}
			if (bParam1)
			{
				*iParam2 = 1;
			}
			break;
		
		case 0x00000026:
			if (!Function_198(0, 0, 1, 1))
			{
				if (bParam1)
				{
					if (Function_18(390) != 2)
					{
						UI_SET_HAS_CHEATED(1);
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_17(390, 3.0f);
						Function_201(390, 2, 1);
						return 1;
					}
				}
				if (Global_25986[2])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					Function_17(390, 3.0f);
					Function_201(390, 3, 1);
					return 1;
				}
				if (Global_25986[1])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
					Function_17(390, 3.0f);
					Function_201(390, 2, 1);
					return 1;
				}
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
				Function_17(390, 3.0f);
				Function_201(390, 1, 1);
				return 1;
			}
			if (bParam1)
			{
				*iParam2 = 1;
			}
			break;
		
		case 0x00000027:
			if (!Function_198(0, 0, 1, 1))
			{
				if (bParam1)
				{
					if (Function_18(390) != 3)
					{
						UI_SET_HAS_CHEATED(1);
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_17(390, 3.0f);
						Function_201(390, 3, 1);
						return 1;
					}
				}
				if (Global_25986[2])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					Function_17(390, 3.0f);
					Function_201(390, 3, 1);
					return 1;
				}
				if (Global_25986[1])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
					Function_17(390, 3.0f);
					Function_201(390, 2, 1);
					return 1;
				}
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
				Function_17(390, 3.0f);
				Function_201(390, 1, 1);
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
			if (!Function_198(0, 0, 1, 1))
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
			if (!Function_198(0, 0, 1, 1))
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

int Function_17(int iParam0, int iParam1) //Position: 0x1689 / 5769
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_18(int iParam0) //Position: 0x16C9 / 5833
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_19(int iParam0, bool bParam1) //Position: 0x170A / 5898
{
	Global_74542[iParam010] = 0;
	Global_74542[iParam010].f_4 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		Function_20();
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

void Function_20() //Position: 0x1758 / 5976
{
	bool bVar0;
	
	bVar0 = Function_18(407);
	PRINTSTRING("This is how many quest lines are marked as done now: ");
	PRINTINT(bVar0);
	PRINTNL();
	if (bVar0 > 15)
	{
		AWARD_ACHIEVEMENT(17);
	}
	return;
}

bool Function_21(int iParam0) //Position: 0x17B6 / 6070
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_22(bool bParam0) //Position: 0x17CB / 6091
{
	Function_23(bParam0);
	Function_23(bParam0);
	Function_23(bParam0);
	Function_23(bParam0);
	return;
}

int Function_23(bool bParam0) //Position: 0x17E9 / 6121
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<8> Var6;
	struct<4> Var14;
	
	if (Function_296())
	{
		return 1;
	}
	if (!IS_OBJECT_VALID(Global_34573))
	{
		return 0;
	}
	fVar0 = 1800.0f;
	if (!bParam0 && !Function_92(8192))
	{
		return 0;
	}
	bVar1 = DECOR_GET_INT(Global_34573, "tutorial");
	bVar2 = DECOR_GET_INT(Global_34573, "ntutorial2");
	bVar3 = DECOR_GET_INT(Global_34573, "ntutorial3");
	bVar4 = DECOR_GET_INT(Global_34573, "ntutorial4");
	if (!Function_91(Global_76849, 4))
	{
		if (Function_90(bVar4, 4))
		{
			Function_89(&Global_76849, 4);
			Function_88(Global_34573, 4, 4);
			if (!bParam0)
			{
				Function_15("tutorial_camp_fast_travel", 30.0f, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!Function_91(Global_76846, 0x4000000) && !(((((((Global_3380 || Global_3394) || Global_3382) || Global_3369) || Global_3367) || Global_63096) || Global_3395) || Global_3396))
	{
		if (Function_90(bVar1, 0x4000000))
		{
			Function_89(&Global_76846, 0x4000000);
			if (!bParam0)
			{
				Function_15("tutorial_rare_horse", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if ((Global_3365 && !Function_91(Global_76849, 8)) && !((((Global_3369 || Global_63096) || Global_3384) || Global_3395) || Global_3396))
	{
		if (((GET_ACTOR_HEALTH(Global_34573) > (GET_ACTOR_MAX_HEALTH(Global_34573) * 0,3f) && HAS_ITEM(Function_87(3), Global_34573)) && IS_ACTOR_ALIVE(Global_34573)) && !IS_ACTOR_IN_WATER(Global_34573))
		{
			Function_89(&Global_76849, 8);
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
	if (!bParam0 && ((Function_86() || HUD_IS_FADED()) || HUD_IS_FADING()))
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
			if (Function_85(&Global_3422[iVar540] + 128, 16))
			{
				if (((Global_6269 != Global_3422[iVar540].f_132 || Global_6269 != Global_3422[iVar540].f_136) || Global_6269 != Global_3422[iVar540].f_140) || Global_6269 != Global_3422[iVar540].f_144)
				{
					if (Global_3422[iVar540].f_124)
					{
						if (IS_BLIP_VALID(Global_3422[iVar540].f_100))
						{
							SET_BLIP_BLINK(Global_3422[iVar540].f_100, 1, 0, 5f);
						}
						Var14 = { StackVal, StackVal, StackVal, Function_84(iVar5) };
						strcpy(&Var6, "comp_intro_", 32);
						stradd(&Var6, UI_GET_STRING(&Var14), 32);
						if (iVar5 == 49)
						{
							Function_83(&Var6, 0x40f00000, 1, 2, 0, 0, 0);
						}
						else
						{
							Function_15(&Var6, 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_82(&Global_3422[iVar540] + 128, 16);
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
			if (!Function_91(Global_76847, 0x10000000))
			{
				if (Function_90(bVar2, 0x10000000))
				{
					Function_89(&Global_76847, 0x10000000);
					Function_88(Global_34573, 0x10000000, 2);
					if (!bParam0)
					{
						Function_15("tutorial_aggro_ped", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 1))
			{
				if (Function_90(bVar2, 1))
				{
					Function_89(&Global_76847, 1);
					Function_88(Global_34573, 1, 2);
					if (!bParam0)
					{
						Function_15("tutorial_eyewitness_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 2))
			{
				if (Function_90(bVar2, 2))
				{
					Function_89(&Global_76847, 2);
					Function_88(Global_34573, 2, 2);
					if (!bParam0)
					{
						Function_15("tutorial_eyewitness_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 4))
			{
				if (Function_90(bVar2, 4))
				{
					Function_89(&Global_76847, 4);
					Function_88(Global_34573, 4, 2);
					if (!bParam0)
					{
						Function_15("tutorial_eyewitness_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 4194304))
			{
				if (Function_90(bVar2, 4194304))
				{
					Function_89(&Global_76847, 4194304);
					Function_88(Global_34573, 4194304, 2);
					if (!bParam0)
					{
						Function_15("tutorial_eyewitness_delayed", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 0x2000000))
			{
				if (Function_90(bVar2, 0x2000000))
				{
					Function_89(&Global_76847, 0x2000000);
					Function_88(Global_34573, 0x2000000, 2);
					if (!bParam0)
					{
						Function_15("tutorial_wanted_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 0x4000000))
			{
				if (Function_91(Global_76847, 0x2000000))
				{
					Function_89(&Global_76847, 0x4000000);
					if (!bParam0)
					{
						Function_15("tutorial_law_lost_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 0x8000000))
			{
				if (Function_90(bVar2, 0x8000000))
				{
					Function_89(&Global_76847, 0x8000000);
					Function_88(Global_34573, 0x8000000, 2);
					if (!bParam0)
					{
						Function_15("tutorial_rcm_wanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_90(bVar2, 32768))
			{
				Function_89(&Global_76847, 32768);
				Function_88(Global_34573, 32768, 2);
				Function_15("tutorial_law_local_spawn", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_90(bVar2, 128))
			{
				if (Function_91(Global_76847, 65536))
				{
					Function_89(&Global_76847, 128);
					Function_88(Global_34573, 128, 2);
					Function_15("tutorial_law_posse_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_90(bVar2, 256))
			{
				if (Function_91(Global_76847, 131072))
				{
					Function_89(&Global_76847, 256);
					Function_88(Global_34573, 256, 2);
					Function_15("tutorial_law_marshal_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_90(bVar2, 512))
			{
				if (Function_91(Global_76847, 262144))
				{
					Function_89(&Global_76847, 512);
					Function_88(Global_34573, 512, 2);
					Function_15("tutorial_law_bounty_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_90(bVar2, 1024))
			{
				if (Function_91(Global_76847, 131072))
				{
					Function_89(&Global_76847, 1024);
					Function_88(Global_34573, 1024, 2);
					Function_15("tutorial_law_army_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_91(Global_76847, 64))
			{
				if (Function_90(bVar2, 64))
				{
					Function_89(&Global_76847, 64);
					Function_88(Global_34573, 64, 2);
					if (!bParam0)
					{
						Function_15("tutorial_player_arrested", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 16384))
			{
				if (Function_90(bVar2, 16384))
				{
					Function_89(&Global_76847, 16384);
					Function_88(Global_34573, 16384, 2);
					if (!bParam0)
					{
						Function_15("tutorial_law_captured", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 0x1000000))
			{
				if (Function_90(bVar2, 0x1000000))
				{
					Function_89(&Global_76847, 0x1000000);
					Function_88(Global_34573, 0x1000000, 2);
					if (!bParam0)
					{
						Function_15("tutorial_law_rewanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 8))
			{
				if (Global_3403 && Global_26316.f_176)
				{
					Function_89(&Global_76847, 8);
					if (!bParam0)
					{
						Function_15("tutorial_wanted_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 8388608))
			{
				if (Function_90(bVar2, 8388608))
				{
					Function_89(&Global_76847, 8388608);
					if (!bParam0)
					{
						Function_15("tutorial_law_lost_awareness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 32))
			{
				if (Function_90(bVar2, 32))
				{
					Function_89(&Global_76847, 32);
					Function_88(Global_34573, 32, 2);
					if (!bParam0)
					{
						Function_15("tutorial_law_near", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 4096))
			{
				if (Function_90(bVar2, 4096))
				{
					Function_89(&Global_76847, 4096);
					Function_88(Global_34573, 4096, 2);
					if (!bParam0)
					{
						Function_15("tutorial_law_losing_track", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 16) && Function_91(Global_76847, 8))
			{
				if (Function_90(bVar2, 16))
				{
					Function_89(&Global_76847, 16);
					Function_88(Global_34573, 16, 2);
					if (!bParam0)
					{
						Function_15("tutorial_civilian_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 2048))
			{
				if (Function_90(bVar2, 2048))
				{
					Function_89(&Global_76847, 2048);
					Function_88(Global_34573, 2048, 2);
					if (!bParam0)
					{
						Function_15("tutorial_law_difficulty_increase", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76847, 8192))
			{
				if (Function_90(bVar2, 8192))
				{
					Function_89(&Global_76847, 8192);
					Function_88(Global_34573, 8192, 2);
					if (!bParam0)
					{
						return 0;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_91(Global_76848, 16384))
			{
				if (Function_90(bVar3, 16384))
				{
					Function_89(&Global_76848, 16384);
					Function_88(Global_34573, 16384, 3);
					if (!bParam0)
					{
						Function_15("tutorial_law_bribe", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 32768))
			{
				if (Function_90(bVar3, 32768))
				{
					Function_89(&Global_76848, 32768);
					Function_88(Global_34573, 32768, 3);
					if (!bParam0)
					{
						Function_15("tutorial_law_surrender", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 65536))
			{
				if (Function_90(bVar3, 65536))
				{
					Function_89(&Global_76848, 65536);
					Function_88(Global_34573, 65536, 3);
					if (!bParam0)
					{
						Function_15("tutorial_law_extra_cops1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 131072))
			{
				if (Function_90(bVar3, 131072))
				{
					Function_89(&Global_76848, 131072);
					Function_88(Global_34573, 131072, 3);
					if (!bParam0)
					{
						Function_15("tutorial_law_extra_cops2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 262144))
			{
				if (Function_90(bVar3, 262144))
				{
					Function_89(&Global_76848, 262144);
					Function_88(Global_34573, 262144, 3);
					if (!bParam0)
					{
						Function_15("tutorial_law_less_cops", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_90(bVar2, 524288))
			{
				Function_89(&Global_76847, 524288);
				Function_88(Global_34573, 524288, 2);
				Function_15("tutorial_law_local_end1", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_91(Global_76847, 1048576))
			{
				if (Function_91(Global_76847, 524288))
				{
					Function_89(&Global_76847, 1048576);
					if (!bParam0)
					{
						return 0;
					}
				}
			}
			if (Function_90(bVar2, 2097152))
			{
				Function_89(&Global_76847, 2097152);
				Function_88(Global_34573, 2097152, 2);
				Function_15("tutorial_law_pursuit_end", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_90(bVar2, 65536))
			{
				Function_89(&Global_76847, 65536);
				Function_88(Global_34573, 65536, 2);
				Function_15("tutorial_law_posse_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_90(bVar2, 131072))
			{
				Function_89(&Global_76847, 131072);
				Function_88(Global_34573, 131072, 2);
				Function_15("tutorial_law_marshal_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_90(bVar2, 262144))
			{
				Function_89(&Global_76847, 262144);
				Function_88(Global_34573, 262144, 2);
				Function_15("tutorial_law_bounty_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_91(Global_76848, 0x2000000))
			{
				if (Function_90(bVar3, 0x2000000))
				{
					Function_89(&Global_76848, 0x2000000);
					Function_88(Global_34573, 0x2000000, 3);
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
			if (!Function_91(Global_76846, 0x20000000))
			{
				if (Function_182(8, 0))
				{
					Function_89(&Global_76846, 0x20000000);
					if (!bParam0)
					{
						Function_15("tutorial_first_camp_M1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 0x4000000))
			{
				if (Function_182(8, 0))
				{
					Function_89(&Global_76846, 0x4000000);
					if (!bParam0)
					{
						Function_15("tutorial_loot", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 0x8000000))
			{
				if (Function_90(bVar3, 0x8000000))
				{
					Function_89(&Global_76848, 0x8000000);
					if (!bParam0)
					{
						Function_15("Old_News_Avail", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 8))
			{
				if (Function_90(bVar1, 8))
				{
					Function_89(&Global_76846, 8);
					if (!bParam0)
					{
						Function_15("tutorial_road_to_armadillo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 1))
			{
				if (IS_ACTOR_DRIVING_VEHICLE(Global_34573) && !(Function_182(4, 0) || Function_182(10, 0)))
				{
					if (IS_ACTOR_DRAFT_VEHICLE(GET_VEHICLE(Global_34573)))
					{
						Function_89(&Global_76846, 1);
						if (!bParam0)
						{
							Function_15("tutorial_first_drive_coach", 0x41200000, 1, 0, 2, 1, 0);
							return 0;
						}
					}
				}
			}
			if (!Function_91(Global_76846, 64))
			{
				if (Function_90(bVar1, 64))
				{
					Function_89(&Global_76846, 64);
					Function_88(Global_34573, 64, 1);
					if (!bParam0)
					{
						Function_15("tutorial_first_see_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 256))
			{
				if (Function_90(bVar1, 256))
				{
					Function_89(&Global_76846, 256);
					Function_88(Global_34573, 256, 1);
					if (!bParam0)
					{
						Function_15("tutorial_first_passenger_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 128))
			{
				if (Function_90(bVar1, 128))
				{
					Function_81(5.0f);
					Function_89(&Global_76846, 128);
					Function_88(Global_34573, 128, 1);
					if (!bParam0)
					{
						Function_15("tutorial_first_horse_agitated", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 2097152))
			{
				if (Function_90(bVar1, 2097152))
				{
					Function_89(&Global_76846, 2097152);
					Function_88(Global_34573, 2097152, 1);
					if (!bParam0)
					{
						Function_15("tutorial_rcm_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 4194304))
			{
				if (Function_91(Global_76846, 2097152))
				{
					Function_89(&Global_76846, 4194304);
					Function_88(Global_34573, 4194304, 1);
					if (!bParam0)
					{
						Function_15("tutorial_rcm_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 8388608))
			{
				if (Function_91(Global_76846, 4194304))
				{
					Function_89(&Global_76846, 8388608);
					Function_88(Global_34573, 8388608, 1);
					if (!bParam0)
					{
						Function_15("tutorial_rcm_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 2))
			{
				if (Function_90(bVar1, 2))
				{
					Function_89(&Global_76846, 2);
					Function_88(Global_34573, 2, 1);
					if (!bParam0)
					{
						Function_15("tutorial_first_outfit1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 4))
			{
				if (Function_91(Global_76846, 2))
				{
					Function_89(&Global_76846, 4);
					if (!bParam0)
					{
						Function_15("tutorial_first_outfit2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_80(3))
			{
				if (!Function_91(Global_76846, 512))
				{
					if (Function_90(bVar1, 512))
					{
						Function_89(&Global_76846, 512);
						Function_88(Global_34573, 512, 1);
						if (!bParam0)
						{
							Function_15("tutorial_lost_cards", 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_26(3, 0, 1, 1);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 4096))
			{
				if ((Global_29007 != 2 && !Global_3388) && !Function_198(0, 0, 1, 6))
				{
					Function_89(&Global_76846, 4096);
					if (!bParam0)
					{
						Function_15("tutorial_first_camp", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 8192))
			{
				if (Function_91(Global_76846, 4096))
				{
					Function_89(&Global_76846, 8192);
					if (!bParam0)
					{
						Function_15("tutorial_first_camp2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 1024))
			{
				if (((Global_29007 != 2 && !Global_3388) && !Function_198(0, 0, 1, 1)) && Function_182(4, 0))
				{
					Function_89(&Global_76846, 1024);
					if (!bParam0)
					{
						Function_15("tutorial_first_wilderness1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 2048))
			{
				if (Function_91(Global_76846, 1024))
				{
					Function_89(&Global_76846, 2048);
					if (!bParam0)
					{
						Function_15("tutorial_first_wilderness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 16))
			{
				if (Function_90(bVar1, 16) && !Global_3380)
				{
					Function_89(&Global_76846, 16);
					Function_88(Global_34573, 16, 1);
					if (!bParam0)
					{
						Function_15("tutorial_first_action_area1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 32))
			{
				if (Function_91(Global_76846, 16))
				{
					Function_89(&Global_76846, 32);
					if (!bParam0)
					{
						Function_15("tutorial_first_action_area2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 32768))
			{
				if (Function_90(bVar1, 32768))
				{
					Function_89(&Global_76846, 32768);
					if (!bParam0)
					{
						Function_15("tutorial_kill_job", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 65536))
			{
				if (Function_90(bVar1, 65536))
				{
					Function_88(Global_34573, 65536, 1);
					if (!bParam0)
					{
						Function_15("tutorial_kill_shop", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 131072))
			{
				if (Function_90(bVar1, 131072))
				{
					Function_89(&Global_76846, 131072);
					if (!bParam0)
					{
						Function_15("tutorial_first_headshot_bonus", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 524288))
			{
				if (Function_90(bVar1, 524288))
				{
					Function_89(&Global_76846, 524288);
					if (!bParam0)
					{
						Function_15("tutorial_first_robbery", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 1048576))
			{
				if (Function_90(bVar1, 1048576))
				{
					Function_89(&Global_76846, 1048576);
					if (!bParam0)
					{
						Function_15("tutorial_first_robbery_denial", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 0x1000000))
			{
				if (Function_90(bVar1, 0x1000000))
				{
					Function_89(&Global_76846, 0x1000000);
					if (!bParam0)
					{
						Function_15("tutorial_second_weapon1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 0x2000000))
			{
				if (Function_91(Global_76846, 0x1000000))
				{
					Function_89(&Global_76846, 0x2000000);
					if (!bParam0)
					{
						Function_15("tutorial_second_weapon2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 4194304))
			{
				if (Function_90(bVar3, 4194304))
				{
					Function_89(&Global_76848, 4194304);
					if (!bParam0)
					{
						Function_15("tutorial_random_char", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 524288))
			{
				if (Function_90(bVar3, 524288))
				{
					Function_89(&Global_76848, 524288);
					if (!bParam0)
					{
						Function_15("tutorial_skinning_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 1048576))
			{
				if (Function_91(Global_76848, 524288))
				{
					Function_89(&Global_76848, 1048576);
					if (!bParam0)
					{
						Function_15("tutorial_skinning_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 2097152))
			{
				if (Function_90(bVar3, 2097152))
				{
					Function_89(&Global_76848, 2097152);
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
			if (!Function_91(Global_76846, 262144))
			{
				if (Function_90(bVar1, 262144))
				{
					Function_89(&Global_76846, 262144);
					if (!bParam0)
					{
						Function_15("tutorial_bounty_no_money_first", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 1))
			{
				if (Function_90(bVar3, 1))
				{
					Function_89(&Global_76848, 1);
					Function_88(Global_34573, 1, 3);
					if (!bParam0)
					{
						Function_15("tutorial_first_honor_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 2))
			{
				if (Function_90(bVar3, 2))
				{
					Function_89(&Global_76848, 2);
					Function_88(Global_34573, 2, 3);
					if (!bParam0)
					{
						Function_15("tutorial_first_honor_negative", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 4))
			{
				if (Function_90(bVar3, 4))
				{
					Function_89(&Global_76848, 4);
					Function_88(Global_34573, 4, 3);
					if (!bParam0)
					{
						Function_15("tutorial_first_notoriety_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 8))
			{
				if (Function_25() == 0)
				{
					Function_89(&Global_76848, 8);
					if (!bParam0)
					{
						Function_15("tutorial_very_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 16))
			{
				if (Function_25() == 1)
				{
					Function_89(&Global_76848, 16);
					if (!bParam0)
					{
						Function_15("tutorial_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 32))
			{
				if (Function_25() == 2)
				{
					Function_89(&Global_76848, 32);
					if (!bParam0)
					{
						Function_15("tutorial_medium_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 64))
			{
				if (Function_25() == 4)
				{
					Function_89(&Global_76848, 64);
					if (!bParam0)
					{
						Function_15("tutorial_medium_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 128))
			{
				if (Function_25() == 5)
				{
					Function_89(&Global_76848, 128);
					if (!bParam0)
					{
						Function_15("tutorial_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 256))
			{
				if (Function_25() == 6)
				{
					Function_89(&Global_76848, 256);
					if (!bParam0)
					{
						Function_15("tutorial_very_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 512))
			{
				if (Function_24() == 1)
				{
					Function_89(&Global_76848, 512);
					if (!bParam0)
					{
						Function_15("tutorial_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 1024))
			{
				if (Function_24() == 2)
				{
					Function_89(&Global_76848, 1024);
					if (!bParam0)
					{
						Function_15("tutorial_medium_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 2048))
			{
				if (Function_24() == 3)
				{
					Function_89(&Global_76848, 2048);
					if (!bParam0)
					{
						Function_15("tutorial_medium_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 4096))
			{
				if (Function_24() == 4)
				{
					Function_89(&Global_76848, 4096);
					if (!bParam0)
					{
						Function_15("tutorial_medium_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 8192))
			{
				if (Function_24() == 5)
				{
					Function_89(&Global_76848, 8192);
					if (!bParam0)
					{
						Function_15("tutorial_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 8388608))
			{
				if (Function_90(bVar3, 8388608))
				{
					Function_89(&Global_76848, 8388608);
					Function_88(Global_34573, 8388608, 3);
					if (!bParam0)
					{
						Function_15("tutorial_first_minigame_in_rain", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76848, 0x1000000))
			{
				if (Function_90(bVar3, 0x1000000))
				{
					Function_89(&Global_76848, 0x1000000);
					Function_88(Global_34573, 0x1000000, 3);
					if (!bParam0)
					{
						Function_15("tutorial_first_missed_achievement", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76846, 0x8000000))
			{
				if (Function_90(bVar1, 0x8000000))
				{
					Function_89(&Global_76846, 0x8000000);
					Function_88(Global_34573, 0x8000000, 1);
					if (!bParam0)
					{
						Function_15("tutorial_first_on_donkey", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_90(bVar4, 1) && Function_182(4, 0))
			{
				Function_88(Global_34573, 1, 4);
				if (!bParam0)
				{
					Function_15("tutorial_new_item_in_shops", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_91(Global_76847, 0x20000000))
			{
				if ((((((HAS_ITEM(Function_87(53), Global_34573) || HAS_ITEM(Function_87(54), Global_34573)) || HAS_ITEM(Function_87(55), Global_34573)) || HAS_ITEM(Function_87(56), Global_34573)) || HAS_ITEM(Function_87(57), Global_34573)) || HAS_ITEM(Function_87(58), Global_34573)) || HAS_ITEM(Function_87(10), Global_34573))
				{
					Function_89(&Global_76847, 0x20000000);
					if (!bParam0)
					{
						Function_15("tutorial_outfit_scrap", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_90(bVar4, 2) && Function_182(4, 0))
			{
				if (Function_91(Global_76849, 2))
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
				if (!Function_91(Global_76849, 2))
				{
					if (!bParam0)
					{
						Function_89(&Global_76849, 2);
						Function_15("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
						Global_12976.f_132 = (GET_CURRENT_GAME_TIME() + fVar0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76849, 16))
			{
				if (Function_182(9, 0))
				{
					Function_89(&Global_76849, 16);
					if (!bParam0)
					{
						Function_15("tutorial_place_waypoint", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_91(Global_76849, 32))
			{
				if (Function_90(bVar4, 32))
				{
					Function_89(&Global_76849, 32);
					Function_88(Global_34573, 32, 4);
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

int Function_24() //Position: 0x39F8 / 14840
{
	return Global_12976.f_156;
}

int Function_25() //Position: 0x3A03 / 14851
{
	return Global_12976.f_152;
}

void Function_26(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3A0E / 14862
{
	struct<8> Var0;
	
	if (!Function_79(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_78(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_76(bParam0))
	{
		Function_75(456, 1, 0, 0);
		Function_74(bParam0, 2);
		if (bParam2)
		{
			if (!Function_198(0, 0, 1, 1))
			{
				Function_40(1);
				Function_39(1, 5);
			}
			else
			{
				Function_38();
			}
		}
		Function_32(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_86() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_86() || Global_3380)
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
		if (!Function_91(Global_76846, 2))
		{
			Function_27(Global_34573, 2, 1, 0);
		}
	}
}

void Function_27(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x3B58 / 15192
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_29(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_28(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_28(char* cParam0, int iParam1) //Position: 0x3BC4 / 15300
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

bool Function_29(bool bParam0, var uParam1, int iParam2) //Position: 0x3BFB / 15355
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
		if (Function_31(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_30(uVar0))
		{
			case 0x00000002:
				if (!Function_91(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_30(char* cParam0) //Position: 0x3C73 / 15475
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

int Function_31(int iParam0) //Position: 0x3D14 / 15636
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

void Function_32(bool bParam0) //Position: 0x3D51 / 15697
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
			if (Function_36(bParam0, Function_37(bVar24)))
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
			if (Function_36(bParam0, Function_37(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_35(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_34(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_33(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_33(int iParam0) //Position: 0x3F01 / 16129
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_79(iParam0))
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

void Function_34(bool bParam0, bool bParam1) //Position: 0x3F58 / 16216
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

var Function_35(int iParam0) //Position: 0x3F7D / 16253
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_79(iParam0))
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

bool Function_36(bool bParam0, int iParam1) //Position: 0x3FD3 / 16339
{
	int iVar0;
	
	if (!Function_79(bParam0))
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

int Function_37(bool bParam0) //Position: 0x4051 / 16465
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_38() //Position: 0x405D / 16477
{
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x4063 / 16483
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_296())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_40(bool bParam0) //Position: 0x40A5 / 16549
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_67();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_41();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_2(&Global_63095, 1);
		Function_2(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_41() //Position: 0x40F6 / 16630
{
	Function_52();
	Function_51();
	Function_51();
	Function_50();
	Function_50();
	Function_49();
	Function_49();
	Function_48();
	Function_48();
	if (!Function_296())
	{
		Function_45();
		Function_44();
		Function_43();
		Function_42();
	}
	Function_294();
	return;
}

void Function_42() //Position: 0x4129 / 16681
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

void Function_43() //Position: 0x415C / 16732
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

void Function_44() //Position: 0x42EA / 17130
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

void Function_45() //Position: 0x449E / 17566
{
	Function_46(&Global_28260, 1, 0);
	return;
}

void Function_46(int iParam0, bool bParam1, var uParam2) //Position: 0x44AC / 17580
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
	void fVar11;
	bool bVar12;
	void fVar13;
	
	bVar0 = Function_47();
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
			fVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = fVar11;
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
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
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

int Function_47() //Position: 0x469D / 18077
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_48() //Position: 0x46B2 / 18098
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
				iVar2 = ((Function_18((50 + iVar4)) + Function_18((183 + iVar4))) + Function_18((90 + iVar4)));
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
	Function_201(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_49() //Position: 0x474D / 18253
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
		iVar2 = ((Function_18((50 + iVar3) + 15) + Function_18((183 + iVar3) + 15)) + Function_18((90 + iVar3) + 15));
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
	Function_201(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_50() //Position: 0x47D6 / 18390
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
			iVar2 = ((Function_18((50 + iVar3) + 8) + Function_18((183 + iVar3) + 8)) + Function_18((90 + iVar3) + 8));
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
	Function_201(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_51() //Position: 0x486D / 18541
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
		iVar2 = ((Function_18((50 + iVar3)) + Function_18((183 + iVar3))) + Function_18((90 + iVar3)));
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
	Function_201(179, iVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar4, 8);
	return StackVal, cVar0;
}

void Function_52() //Position: 0x48EC / 18668
{
	Function_53(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_201(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_53(int iParam0, bool bParam1, bool bParam2) //Position: 0x4912 / 18706
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
	Function_66(iParam0, bParam1, 1);
	Function_65(iParam0);
	if (bParam2 && bParam1 == 0.0f)
	{
		Function_54(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_54(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x4B1C / 19228
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_64(390))), 32);
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
					bVar19 = (Function_63(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_63(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_61(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_58(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_55(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_188(), &Var9);
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

var Function_55(int iParam0) //Position: 0x5149 / 20809
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x515A / 20826
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_57(char* cParam0, char* cParam1) //Position: 0x524F / 21071
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x5268 / 21096
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_60(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x52CD / 21197
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x52DF / 21215
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x52F1 / 21233
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
	if (((Function_62(iParam0) != 19 || Function_62(iParam0) != 17) || Function_62(iParam0) != 10) || Function_62(iParam0) != 9)
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

int Function_62(int iParam0) //Position: 0x5421 / 21537
{
	return Global_35278[iParam020].f_48;
}

float Function_63(int iParam0) //Position: 0x5430 / 21552
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x5469 / 21609
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_65(int iParam0) //Position: 0x54A6 / 21670
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x5640 / 22080
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

void Function_67() //Position: 0x585A / 22618
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_69(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_69(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_68(StackVal, StackVal, vVar0))
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

bool Function_68(vector3 vParam0) //Position: 0x58FB / 22779
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_69(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5913 / 22803
{
	int iVar0;
	
	iVar0 = Function_72(uParam2, uParam3);
	if (Function_71(iVar0))
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
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
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
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_70();
	return StackVal, StackVal, Function_70();
}

vector3 Function_70() //Position: 0x59FA / 23034
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_71(int iParam0) //Position: 0x5A03 / 23043
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_72(bool bParam0, bool bParam1) //Position: 0x5A19 / 23065
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
				fVar2 = Function_73(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_73(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_71(bVar0) && !bParam1)
	{
		bVar0 = Function_72(bParam0, 1);
	}
	return bVar0;
}

float Function_73(vector3 vParam0, vector3 vParam3) //Position: 0x5AE0 / 23264
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_74(bool bParam0, int iParam1) //Position: 0x5AFD / 23293
{
	if (!Function_79(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

int Function_75(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5B52 / 23378
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
	Function_66(iParam0, TO_FLOAT(bParam1), 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_54(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

bool Function_76(int iParam0) //Position: 0x5D72 / 23922
{
	if (!Function_79(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_77(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_77(int iParam0, int iParam1) //Position: 0x5DC4 / 24004
{
	int iVar0;
	
	if (!Function_79(iParam0))
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

bool Function_78(int iParam0) //Position: 0x5DF1 / 24049
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_79(int iParam0) //Position: 0x5E0D / 24077
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_80(int iParam0) //Position: 0x5E23 / 24099
{
	if (!Function_79(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_77(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

void Function_81(bool bParam0) //Position: 0x5E74 / 24180
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

void Function_82(var uParam0, int iParam1) //Position: 0x5EF9 / 24313
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_83(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x5F10 / 24336
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

struct<16> Function_84(int iParam0) //Position: 0x5F63 / 24419
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_85(int iParam0, int iParam1) //Position: 0x5F88 / 24456
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_86() //Position: 0x5FA4 / 24484
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

var Function_87(bool bParam0) //Position: 0x5FD1 / 24529
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

void Function_88(bool bParam0, int iParam1, int iParam2) //Position: 0x60C2 / 24770
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
	Function_28(&Var1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &Var1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(bParam0, &Var1);
	DECOR_SET_INT(bParam0, &Var1, (bVar5 - (bVar5 && uVar0)));
	return;
}

void Function_89(var uParam0, int iParam1) //Position: 0x6111 / 24849
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_90(bool bParam0, int iParam1) //Position: 0x6120 / 24864
{
	var uVar0;
	
	uVar0 = iParam1;
	if ((bParam0 && uVar0) >= 0)
	{
		return 1;
	}
	return 0;
}

bool Function_91(var uParam0, int iParam1) //Position: 0x6136 / 24886
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_92(int iParam0) //Position: 0x6149 / 24905
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_93() //Position: 0x6165 / 24933
{
	int iVar0;
	
	if (Function_296())
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
					if (Function_182(25, 0))
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
					if (Function_182(25, 0) && !Function_182(26, 0))
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
					if ((Function_182(25, 0) && Function_182(26, 0)) && !Function_182(29, 0))
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
					if ((Function_182(25, 0) && Function_182(26, 0)) && Function_182(29, 0))
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
					if (Function_182(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
					}
					break;
				
				case 0x00000005:
					if (Function_182(41, 0))
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
					if (Function_182(22, 0) && !Function_182(41, 0))
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
					if (Function_182(22, 0) && Function_182(41, 0))
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
					if (Function_182(34, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("campoMiradaBefore");
						ENABLE_WORLD_SECTOR("campoMiradaAfter");
					}
					break;
				
				case 0x00000009:
					if (Function_182(26, 0) || Function_182(30, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					}
					break;
				
				case 0x0000000A:
					if (Function_182(40, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("fod_gates01x");
						ENABLE_CHILD_SECTOR("fod_gates02x");
						ENABLE_CHILD_SECTOR("fod_gates02Doors01x");
					}
					break;
				
				case 0x0000000B:
					if (Function_182(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("coc_fence01x");
						ENABLE_CHILD_SECTOR("coc_fence01bx");
						ENABLE_CHILD_SECTOR("coc_gates02x");
						DISABLE_CHILD_SECTOR("coc_gates01x");
					}
					break;
				
				case 0x0000000C:
					if (Function_182(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
					}
					break;
				
				case 0x0000000D:
					if (Function_182(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					}
					break;
				
				case 0x0000000E:
					break;
				
				case 0x0000000F:
					if (Function_182(21, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
						ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
					}
					break;
				
				case 0x00000010:
					if (Function_182(57, 0) || Function_94(57))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_silo02x");
						ENABLE_CHILD_SECTOR("beh_silo01x");
					}
					break;
				
				case 0x00000011:
					if (Function_182(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_house02x");
						DISABLE_CHILD_SECTOR("beh_house02props01x");
						ENABLE_CHILD_SECTOR("beh_house01x");
						ENABLE_CHILD_SECTOR("beh_house01props01x");
					}
					break;
				
				case 0x00000012:
					if (Function_182(28, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
						ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
					}
					break;
				
				case 0x00000013:
					if (Function_182(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("esc_villaWall04x");
						ENABLE_CHILD_SECTOR("esc_villaWall05x");
					}
					break;
				
				case 0x00000014:
					if (Function_21(37))
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
					if (Function_182(57, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave02x");
						ENABLE_CHILD_SECTOR("beh_grave03x");
						DISABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_182(25, 0))
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
					}
					break;
				
				case 0x00000019:
					if (Function_182(32, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("emt_caveDoor02x");
						DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					}
					break;
				
				case 0x0000001A:
					if (Function_182(20, 0))
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

int Function_94(int iParam0) //Position: 0x7916 / 30998
{
	int iVar0;
	
	if (!Function_95(iParam0))
	{
		return 0;
	}
	iVar0 = Function_176(iParam0);
	if (!Function_174(Function_176(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_95(int iParam0) //Position: 0x794C / 31052
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_96(bool bParam0) //Position: 0x7962 / 31074
{
	if (Function_13(bParam0, 1) && !Function_13(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_97(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x798F / 31119
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_173(12);
	Function_171(2);
	Function_169((15 - Function_170(105)));
	if (Function_168(bParam0) == 1)
	{
		iVar2 = Function_167(bParam0);
		Function_161(&(Global_3422[iVar240]));
		Function_160(4194304);
		if (bParam3)
		{
			Function_136(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_131(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_136(iVar2, &uVar0, 0);
		}
		bVar1 = Function_130();
		if (bParam1)
		{
			Function_115(iVar2, bParam0, bVar1);
			Function_114();
		}
	}
	Function_100(bParam0, bParam1, uParam2, bVar1);
	if (Function_168(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_99(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_168(bParam0) == 1)
		{
			iVar2 = Function_167(bParam0);
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
	Function_98();
}

void Function_98() //Position: 0x7A7C / 31356
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_182(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

void Function_99(int iParam0, bool bParam1) //Position: 0x7AAC / 31404
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
							Function_27(Global_34573, 0x1000000, 3, 0);
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
							Function_27(Global_34573, 0x1000000, 3, 0);
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
							Function_27(Global_34573, 0x1000000, 3, 0);
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
							Function_27(Global_34573, 0x1000000, 3, 0);
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
							Function_27(Global_34573, 0x1000000, 3, 0);
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
							Function_27(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_99(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_99(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_99(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_99(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_99(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_99(57, 0);
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

void Function_100(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7DA3 / 32163
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_174(bParam0))
	{
		Function_112();
		return;
	}
	iVar0 = Function_168(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_167(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_111(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_110(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_108();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_107("DEED_COMPLETE", bParam0);
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
			Function_102(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (iVar0)
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
						switch (Function_167(bParam0))
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
			Function_40(1);
			Function_39(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_101(bParam0, &Var14);
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

void Function_101(int iParam0, int iParam1) //Position: 0x7FB5 / 32693
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_102(bool bParam0) //Position: 0x7FEF / 32751
{
	int iVar0;
	int iVar1;
	
	if (!Function_106(bParam0))
	{
		return;
	}
	switch (Function_168(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_167(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_75(12, 1, 0, 0);
				Function_105(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_75(13, 1, 0, 0);
				Function_105(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_75(14, 1, 0, 0);
				Function_105(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_75(15, 1, 0, 0);
				Function_105(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_75(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_167(bParam0))
			{
				case 0x00000000:
					if (Function_104(bParam0) == 1)
					{
						iVar0 = Function_103(bParam0);
						if (Function_11(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_105(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_105(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_105(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_105(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_105(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_105(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_105(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_105(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_105(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_105(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_105(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_105(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_105(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_105(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_105(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_105(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_105(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_105(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_105(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_105(4, 19);
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
								Function_75(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_75(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_75(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_103(bParam0) == 0)
			{
				if (Function_104(bParam0) == 1)
				{
					Function_75(458, 1, 0, 0);
					iVar0 = Function_167(bParam0);
					if (Function_11(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_105(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_105(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_105(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_105(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_105(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_105(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_105(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_105(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_104(bParam0) == 1)
			{
				Function_75(400, 1, 0, 0);
			}
			switch (Function_167(bParam0))
			{
				case 0x00000001:
					Function_75(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_105(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_105(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_105(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_75(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_105(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_105(6, 9);
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

int Function_103(bool bParam0) //Position: 0x84CD / 33997
{
	if (!Function_106(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_104(bool bParam0) //Position: 0x84EC / 34028
{
	if (!Function_106(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_105(int iParam0, bool bParam1) //Position: 0x8506 / 34054
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

bool Function_106(int iParam0) //Position: 0x856D / 34157
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_107(char* cParam0, bool bParam1) //Position: 0x8584 / 34180
{
	struct<4> Var0;
	
	if (!Function_174(bParam1))
	{
		return;
	}
	switch (Function_168(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_84(Function_167(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_168(bParam1), Function_167(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_168(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_168(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_168(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_168(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_168(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_108() //Position: 0x86A8 / 34472
{
	int iVar0;
	int iVar1;
	
	if (!Function_95(Global_6269))
	{
		return;
	}
	iVar0 = Function_18(24);
	iVar1 = Function_176(Global_6269);
	if (!Function_95(iVar0) && Function_109(iVar1) < 0)
	{
		Function_201(24, Global_6269, 0);
		Function_199(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_109(Function_176(iVar0)))
	{
		Function_201(24, Global_6269, 0);
		Function_199(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_109(int iParam0) //Position: 0x8728 / 34600
{
	if (!Function_174(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<16> Function_110(int iParam0) //Position: 0x8742 / 34626
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_111(char* cParam0) //Position: 0x876C / 34668
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

void Function_112() //Position: 0x89C2 / 35266
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
			Function_113(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_113(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8C09 / 35849
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

void Function_114() //Position: 0x8C32 / 35890
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

void Function_115(int iParam0, int iParam1, bool bParam2) //Position: 0x8C60 / 35936
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
	
	if (!Function_95(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_129(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_84(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_18(42) - Global_34165.f_116);
				bVar1 = (Function_18(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_84(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_64(49)) - Global_34165.f_124);
				bVar3 = (Function_18(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_84(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_18(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_84(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_84(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_128(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_116(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_110(iParam0) };
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x8EFC / 36604
{
	int iVar0;
	bool bVar1;
	
	if (Function_127(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_18(3);
	Function_125();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_123(3, bVar1);
		if (!bParam2)
		{
			if (!Function_91(Global_76848, 4))
			{
				Function_27(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_75(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_63(3));
	iVar0 = Function_18(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_118(4, Function_122(Global_12976.f_156), 1);
				Function_117(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_118(4, Function_122(Global_12976.f_156), 1);
				Function_117(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_118(4, Function_122(Global_12976.f_156), 1);
				Function_117(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_118(4, Function_122(Global_12976.f_156), 1);
				Function_117(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_118(4, Function_122(Global_12976.f_156), 1);
				Function_117(Global_12976.f_152, Global_12976.f_156);
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

void Function_117(int iParam0, int iParam1) //Position: 0x90BF / 37055
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
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

int Function_118(int iParam0, char* cParam1, bool bParam2) //Position: 0x931D / 37661
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
	Function_199(iParam0, cParam1, 0, 1);
	iVar1 = Function_119();
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

int Function_119() //Position: 0x94A2 / 38050
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
	Function_120();
	return 0;
}

void Function_120() //Position: 0x9541 / 38209
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
		Function_121(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_121(int iParam0) //Position: 0x95F0 / 38384
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

var Function_122(int iParam0) //Position: 0x964E / 38478
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

int Function_123(int iParam0, bool bParam1) //Position: 0x96DD / 38621
{
	bool bVar0;
	int iVar1;
	
	Function_75(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_124(iParam0, 4294967295);
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
	iVar1 = Function_119();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_124(int iParam0, int iParam1) //Position: 0x987A / 39034
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

void Function_125() //Position: 0x98BB / 39099
{
	Function_126(3, 0.0f);
	Function_17(3, 10000.0f);
	return;
}

int Function_126(int iParam0, int iParam1) //Position: 0x98D1 / 39121
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_127(int iParam0) //Position: 0x9911 / 39185
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_128(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x9920 / 39200
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

int Function_129(int iParam0) //Position: 0x9AE8 / 39656
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

var Function_130() //Position: 0x9B7D / 39805
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_131(int iParam0) //Position: 0x9BA2 / 39842
{
	if (!Function_95(iParam0))
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
			Function_116(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_116(25, 1, 0);
			Function_212(1, 1);
			break;
		
		case 0x00000015:
			Function_212(50, 1);
			Function_116(250, 1, 0);
			Function_132(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_116(75, 1, 0);
			Function_132(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_212(50, 1);
			Function_116(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_212(5, 1);
			Function_132(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_116(75, 1, 0);
			Function_132(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_212(5, 1);
			Function_116(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_132(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_212(25, 1);
			Function_116(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_212(10, 1);
			Function_116(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_116(50, 1, 0);
			Function_132(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_116(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_132(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_212(20, 1);
			Function_116(75, 1, 0);
			Function_132(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_212(25, 1);
			Function_116(150, 1, 0);
			Function_132(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_212(10, 1);
			Function_116(150, 1, 0);
			Function_132(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_116(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_132(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_132(100, 1, 0);
			Function_212(5, 1);
			break;
		
		case 0x0000000F:
			Function_212(3, 1);
			Function_116(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_132(125, 1, 0);
			Function_116(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_212(50, 1);
			Function_116(100, 1, 0);
			Function_132(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_212(50, 1);
			Function_116(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_212(75, 1);
			Function_116(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_116(75, 1, 0);
			Function_132(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_116(250, 1, 0);
			Function_132(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_116(75, 1, 0);
			Function_132(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_116(200, 1, 0);
			Function_132(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_116(75, 1, 0);
			Function_132(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_116(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_212(50, 1);
			Function_116(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_212(100, 1);
			Function_116(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_116(200, 1, 0);
			Function_132(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_116(300, 1, 0);
			Function_132(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_116(300, 1, 0);
			Function_132(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_116(300, 1, 0);
			Function_132(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_116(500, 1, 0);
			Function_132(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_116(150, 1, 0);
			Function_132(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_132(25, 1, 0);
			Function_212(100, 1);
			break;
		
		case 0x0000002A:
			Function_116(150, 1, 0);
			Function_132(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_132(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_132(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_132(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_132(150, 1, 0);
			Function_212(100, 1);
			break;
		
		case 0x00000035:
			Function_132(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_132(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_132(150, 1, 0);
			Function_212(100, 1);
			break;
		
		case 0x00000032:
			Function_132(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_132(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_132(int iParam0, bool bParam1, bool bParam2) //Position: 0xA05D / 41053
{
	int iVar0;
	bool bVar1;
	
	if (Function_127(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_18(1);
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
			Function_123(1, bVar1);
			if (!bParam2)
			{
				if (!Function_91(Global_76848, 1))
				{
					Function_27(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_135(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_91(Global_76848, 2))
				{
					Function_27(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_75(1, bVar1, 0, 0);
	}
	else
	{
		Function_134(1, (4294967295 * bVar1), 0);
	}
	if (Function_18(1) <= 4294962296)
	{
		Function_201(1, 4294962296, 0);
	}
	else if (Function_18(1) >= 5000)
	{
		Function_201(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_63(1));
	iVar0 = Function_18(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_118(2, Function_133(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_118(2, Function_133(Global_12976.f_152), 0);
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
				Function_118(2, Function_133(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_118(2, Function_133(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_118(2, Function_133(Global_12976.f_152), 1);
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
				Function_118(2, Function_133(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_118(2, Function_133(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_118(2, Function_133(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_118(2, Function_133(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_118(2, Function_133(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_118(2, Function_133(Global_12976.f_152), 1);
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
				Function_118(2, Function_133(Global_12976.f_152), 0);
			}
			break;
	}
	Function_117(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_133(int iParam0) //Position: 0xA372 / 41842
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

int Function_134(int iParam0, bool bParam1, int iParam2) //Position: 0xA415 / 42005
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
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_54(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_135(int iParam0, bool bParam1) //Position: 0xA610 / 42512
{
	bool bVar0;
	int iVar1;
	
	Function_134(iParam0, bParam1, 0);
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
	iVar1 = Function_124(iParam0, 4294967295);
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
	iVar1 = Function_119();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

void Function_136(int iParam0, var uParam1, bool bParam2) //Position: 0xA7AC / 42924
{
	struct<4> Var0;
	
	if (!Function_95(iParam0))
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
			Function_158(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_177(Global_30640[0]);
			Function_177(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_156(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_177(Global_30668[0]);
			Function_149(0);
			Function_147(2, 1);
			Function_147(0, 1);
			Function_147(1, 1);
			break;
		
		case 0x00000003:
			Function_177(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_177(Global_30668[0]);
			Function_177(Global_30640[0]);
			Function_145(0, 1);
			Function_145(15, 1);
			Function_145(9, 1);
			Function_145(12, 1);
			Function_145(16, 1);
			Function_147(3, 1);
			break;
		
		case 0x00000005:
			Function_177(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_156(21, bParam2, 4);
			Function_177(Global_30668[0]);
			Function_147(39, 1);
			break;
		
		case 0x00000007:
			Function_177(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_177(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_76(4))
					{
						Function_26(4, 0, 0, 1);
					}
				}
			}
			Function_177(Global_30640[0]);
			Function_177(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_177(Global_30640[0]);
			Function_177(Global_30668[2]);
			Function_144(&(Global_29008[Global_30668[2]]), 32768);
			Function_143(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_156(9, bParam2, 4);
			Function_177(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_177(Global_30640[0]);
			Function_177(Global_30658[0]);
			Function_144(&(Global_29008[Global_30658[0]]), 32768);
			Function_143(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_177(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_177(Global_30640[0]);
			Function_177(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_177(Global_30640[1]);
			Function_177(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_177(Global_30679[0]);
			Function_177(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_177(Global_30658[5]);
			Function_177(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_156(21, bParam2, 4);
			Function_177(Global_30640[4]);
			Function_177(Global_30658[4]);
			Function_89(&Global_76847, 0x2000000);
			Function_89(&Global_76847, 0x4000000);
			Function_89(&Global_76847, 4096);
			Function_89(&Global_76847, 8);
			Function_89(&Global_76847, 8388608);
			Function_89(&Global_76847, 524288);
			Function_89(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_177(Global_30640[4]);
			Function_177(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_143(&(Global_29008[Global_30640[4]]), 256);
			Function_177(Global_30640[4]);
			Function_177(Global_30658[0]);
			Function_144(&(Global_29008[Global_30658[0]]), 32768);
			Function_143(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_177(Global_30640[0]);
			Function_177(Global_30640[5]);
			Function_156(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_177(Global_30658[3]);
			Function_144(&(Global_29008[Global_30658[3]]), 32768);
			Function_143(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_156(9, bParam2, 4);
			Function_177(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_144(&(Global_29008[Global_30679[1]]), 32768);
			Function_177(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_156(12, bParam2, 4);
			Function_143(&(Global_29008[Global_30679[1]]), 256);
			Function_177(Global_30668[3]);
			Function_177(Global_30693[0]);
			Function_177(Global_30685[0]);
			Function_149(4);
			Function_145(13, 1);
			Function_145(1, 1);
			Function_145(18, 1);
			Function_147(34, 1);
			Function_147(44, 1);
			Function_147(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_156(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_177(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_177(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_177(Global_30693[0]);
			Function_177(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_177(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_177(Global_30685[0]);
			Function_177(Global_30693[0]);
			Function_177(Global_30693[1]);
			Function_177(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_156(23, bParam2, 3);
			Function_145(23, 1);
			Function_177(Global_30685[0]);
			Function_177(Global_30685[2]);
			Function_144(&(Global_29008[Global_30685[2]]), 32768);
			Function_143(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_156(19, bParam2, 4);
			Function_177(Global_30685[0]);
			Function_177(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_156(24, bParam2, 3);
			Function_145(24, 1);
			Function_177(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_177(Global_30685[0]);
			Function_177(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_177(Global_30693[12]);
			Function_177(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_177(Global_30693[12]);
			Function_177(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_156(25, bParam2, 10);
			Function_177(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_177(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_177(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_156(13, bParam2, 4);
			Function_177(Global_30693[2]);
			Function_177(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_76(8))
				{
					Function_26(8, 0, 0, 1);
				}
			}
			Function_177(Global_30685[0]);
			Function_149(9);
			Function_145(7, 1);
			Function_145(11, 1);
			Function_145(3, 1);
			Function_145(20, 1);
			Function_147(57, 1);
			break;
		
		case 0x0000002A:
			Function_156(2, bParam2, 4);
			Function_177(Global_30717[0]);
			Function_177(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_177(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_177(Global_30717[0]);
			Function_177(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_177(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_177(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_177(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_156(17, bParam2, 4);
			Function_177(Global_30723[0]);
			Function_177(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_80(15))
				{
					Function_183(15, 0, 1);
				}
			}
			Function_143(&(Global_29008[Global_30717[1]]), 256);
			Function_149(11);
			Function_177(Global_30717[1]);
			Function_177(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_177(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_177(Global_30717[1]);
			Function_177(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_177(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_177(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_177(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_177(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_177(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_177(Global_30717[1]);
			Function_137(11);
			Function_149(12);
			Global_16537[1121].f_40 = 0;
			Function_147(56, 1);
			if (!bParam2)
			{
				if (!Function_76(9))
				{
					Function_26(9, 0, 0, 0);
				}
				if (!Function_76(10))
				{
					Function_26(10, 0, 0, 1);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_84(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_137(int iParam0) //Position: 0xB09C / 45212
{
	bool bVar0;
	
	if (!Function_71(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_142(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_142(Global_16537[iParam021].f_72, 0);
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
			Function_138(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_138(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xB20B / 45579
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
		Function_140(Function_141(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_140(Function_141(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_140(StackVal);
				vVar1 = { StackVal, StackVal, Function_140(StackVal) };
				if (Function_139(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_139(vector3 vParam0, vector3 vParam3) //Position: 0xB311 / 45841
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_140(bool bParam0) //Position: 0xB33E / 45886
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = SHIFT_RIGHT(bParam0, 15) & 32767;
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

var Function_141(vector3 vParam0) //Position: 0xB395 / 45973
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

void Function_142(bool bParam0, bool bParam1) //Position: 0xB3E3 / 46051
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

void Function_143(var uParam0, int iParam1) //Position: 0xB437 / 46135
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_144(var uParam0, int iParam1) //Position: 0xB44E / 46158
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_145(int iParam0, int iParam1) //Position: 0xB45D / 46173
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_146(iParam0, iParam1);
	Function_27(Global_34573, 1, 4, 1);
	return 1;
}

int Function_146(int iParam0, int iParam1) //Position: 0xB4D0 / 46288
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_147(int iParam0, int iParam1) //Position: 0xB52C / 46380
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_148(iParam0, iParam1);
	Function_27(Global_34573, 1, 4, 1);
	return 1;
}

int Function_148(int iParam0, int iParam1) //Position: 0xB59D / 46493
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_149(int iParam0) //Position: 0xB5F7 / 46583
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_71(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_155(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_155(Global_16537[iParam021].f_72, 0);
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
			Function_75(468, 1, 0, 0);
			Function_105(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_15("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_138(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_26(14, 1, 0, 0);
				Function_150(14, 1, 0, 0, 0);
			}
			if (!Function_198(0, 0, 1, 1))
			{
				Function_40(1);
				Function_39(1, 6);
			}
			else
			{
				Function_38();
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
			Function_75(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_105(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_150(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xB8A3 / 47267
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_79(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_78(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_77(bParam0, 2))
	{
		Function_75(456, 1, 0, 0);
		Function_74(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_15(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_36(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_74(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_198(0, 0, 1, 1))
			{
				Function_40(1);
				Function_39(1, 0);
			}
			else
			{
				Function_38();
			}
		}
		Function_32(bParam0);
		if (StackVal && !Function_13(((((!Function_86() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_13((((Function_86() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_91(Global_76846, 2))
		{
			Function_27(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_152();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_151(3, bParam1);
				break;
			
			case 0x00000005:
				Function_151(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_151(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_151(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_151(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_151(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_105(2, 24);
				break;
			
			case 0x00000003:
				Function_105(2, 25);
				break;
			
			case 0x0000000F:
				Function_105(2, 26);
				break;
			
			case 0x0000000D:
				Function_105(2, 27);
				break;
			
			case 0x0000000E:
				Function_105(2, 28);
				break;
			}
	}
}

void Function_151(int iParam0, bool bParam1) //Position: 0xBB32 / 47922
{
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	return;
	return;
}

void Function_152() //Position: 0xBB91 / 48017
{
	if (Function_79(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_154(Global_28180);
			Global_28180.f_8 = Function_153(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_154(Global_28180);
			Global_28180.f_8 = Function_153(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_153(int iParam0, int iParam1) //Position: 0xBC0C / 48140
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
					if (Function_182(6, 0) || Function_182(12, 0))
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
					vVar0 = { -2177,057f, 16,426f, 2626,285f };
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
					if (Function_21(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_182(5, 0))
					{
						vVar0 = { -4120,147f, 18,356f, 3039,531f };
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
					vVar0 = { -4178,186f, 32,616f, 4582,207f };
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
					if (Function_21(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_21(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_21(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_21(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_182(26, 0))
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
					if (Function_21(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_21(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_21(27) && iVar18)
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
					if (Function_21(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_21(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_21(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_21(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_182(17, 0) && iVar15)
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
					if (Function_21(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_182(6, 0) && Function_21(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_21(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_182(9, 0) && Function_21(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_21(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_182(8, 0) && iVar19)
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
	if (Function_68(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_68(StackVal, StackVal, vVar3))
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
	if (!Function_68(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_154(int iParam0) //Position: 0xC801 / 51201
{
	int iVar0;
	int iVar1;
	
	if (!Function_79(iParam0))
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

void Function_155(bool bParam0, bool bParam1) //Position: 0xC850 / 51280
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

void Function_156(bool bParam0, bool bParam1, int iParam2) //Position: 0xC8A1 / 51361
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_157(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_158(bParam0, 0, 0);
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

bool Function_157(int iParam0, int iParam1) //Position: 0xC90F / 51471
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

int Function_158(bool bParam0, bool bParam1, int iParam2) //Position: 0xC922 / 51490
{
	if (!Function_159(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_47(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_47(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_47(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_159(int iParam0) //Position: 0xC979 / 51577
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_160(bool bParam0) //Position: 0xC98B / 51595
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

void Function_161(int iParam0) //Position: 0xC9BF / 51647
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
			Function_162(4, 0, 0);
		}
	}
	return;
}

void Function_162(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCA26 / 51750
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
		Function_163(Global_16524, bVar0, 1);
	}
	return;
}

void Function_163(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCB03 / 51971
{
	int iVar0;
	
	Function_166(bParam0);
	Function_165(bParam1);
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
	Function_164();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_164() //Position: 0xCC7C / 52348
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_165(bool bParam0) //Position: 0xCC88 / 52360
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

void Function_166(int iParam0) //Position: 0xCCCE / 52430
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

int Function_167(bool bParam0) //Position: 0xCD14 / 52500
{
	if (!Function_106(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

int Function_168(bool bParam0) //Position: 0xCD34 / 52532
{
	if (!Function_106(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_169(int iParam0) //Position: 0xCD4F / 52559
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_170(105)), 0);
	return;
}

int Function_170(int iParam0) //Position: 0xCD70 / 52592
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_171(bool bParam0) //Position: 0xCD86 / 52614
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_165(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_165(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_165(Global_12976.f_24);
	PRINTNL();
	Function_172(bParam0);
	return;
}

void Function_172(int iParam0) //Position: 0xCE22 / 52770
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_170(90)), 0);
	return;
}

void Function_173(bool bParam0) //Position: 0xCE43 / 52803
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

bool Function_174(int iParam0) //Position: 0xCE5E / 52830
{
	if (!Function_106(iParam0))
	{
		return 0;
	}
	if (!Function_175(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_175(int iParam0) //Position: 0xCE82 / 52866
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_176(int iParam0) //Position: 0xCE97 / 52887
{
	if (!Function_95(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_177(int iParam0) //Position: 0xCEB1 / 52913
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_179(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_144(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_75(473, 1, 0, 0);
		iVar0 = Function_178(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_75(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_75(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_75(476, 1, 0, 0);
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
		Function_105(iVar2, bVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_105(7, 30);
	}
	if (Function_63(473) <= Function_64(473))
	{
		if (!Function_296())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_178(int iParam0) //Position: 0xCFB0 / 53168
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

bool Function_179(var uParam0, int iParam1) //Position: 0xD008 / 53256
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_180(int iParam0) //Position: 0xD024 / 53284
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (!Function_181((*iParam0)[iVar0]))
		{
			Function_177((*iParam0)[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool Function_181(int iParam0) //Position: 0xD055 / 53333
{
	if (!Function_11(iParam0))
	{
		return 0;
	}
	return Function_179(&(Global_29008[iParam0]), 4096);
}

bool Function_182(int iParam0, bool bParam1) //Position: 0xD073 / 53363
{
	int iVar0;
	
	iVar0 = Function_176(iParam0);
	if (!Function_106(iVar0))
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

void Function_183(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD0B0 / 53424
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_79(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_80(bParam0))
	{
		if (!Function_76(bParam0))
		{
			Function_26(bParam0, 1, 0, 0);
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
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_75(457, 1, 0, 0);
		Function_74(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_198(0, 0, 1, 1))
			{
				Function_40(1);
				Function_39(1, 0);
			}
			else
			{
				Function_38();
			}
		}
	}
	return;
}

var Function_184(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0xD24E / 53838
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
			if (Function_187(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_186(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_185(bVar16, &iVar1))
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

bool Function_185(int iParam0, int iParam1) //Position: 0xD482 / 54402
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

var Function_186(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0xD4B4 / 54452
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_187(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD4CC / 54476
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

var Function_188() //Position: 0xD4F3 / 54515
{
	int iVar0;
	
	return iVar0;
}

bool Function_189(bool bParam0) //Position: 0xD4FB / 54523
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_190(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD512 / 54546
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam1, bParam2, bParam3, 0f, 0.0f, 0.0f, 0.0f);
}

void Function_191(var uParam0, var uParam1) //Position: 0xD529 / 54569
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_166(uParam0);
	Function_165(iVar0);
	PRINTNL();
	Function_163(uParam0, iVar0, uParam1);
	return;
}

var Function_192() //Position: 0xD54E / 54606
{
	return StackVal;
}

var Function_193() //Position: 0xD559 / 54617
{
	return Global_34578 != 1;
}

bool Function_194(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD564 / 54628
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0,3f))
	{
		return 1;
	}
	if (Function_197(bParam0))
	{
		return 1;
	}
	if (Function_196(bParam0))
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
	if (Function_195())
	{
		return 1;
	}
	return 0;
}

bool Function_195() //Position: 0xD61A / 54810
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_196(bool bParam0) //Position: 0xD631 / 54833
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_197(bool bParam0) //Position: 0xD63C / 54844
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

bool Function_198(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xD64A / 54858
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

int Function_199(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xD6EE / 55022
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
		Function_200(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_200(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0xDA40 / 55872
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
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_201(int iParam0, bool bParam1, bool bParam2) //Position: 0xDAC3 / 56003
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
		Function_66(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_65(iParam0);
	if (bParam2)
	{
		Function_54(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_202() //Position: 0xDD5E / 56670
{
	return;
}

void Function_203(bool bParam0) //Position: 0xDD64 / 56676
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
		Function_204();
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

void Function_204() //Position: 0xDDEF / 56815
{
	int iVar0;
	
	Global_26960 = Function_297(StackVal);
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

void Function_205(int iParam0, bool bParam1) //Position: 0xDE3D / 56893
{
	if (!Function_207(iParam0))
	{
		return;
	}
	Global_26401[iParam0] = bParam1;
	Function_206((*&Global_26401 + 2220)[iParam0], TO_FLOAT(bParam1), 0);
	Function_206(222, TO_FLOAT((Function_18(223) + Function_18(224))), 0);
	return;
}

int Function_206(int iParam0, bool bParam1, bool bParam2) //Position: 0xDE7E / 56958
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
		Function_66(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_65(iParam0);
	if (bParam2)
	{
		Function_54(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

bool Function_207(int iParam0) //Position: 0xE0EA / 57578
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_208(int iParam0, bool bParam1) //Position: 0xE0FF / 57599
{
	if (!Function_207(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_134(222, Global_26401[iParam0], 0);
		if (Function_18(222) <= 0)
		{
			Function_201(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_201((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_134((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_134(222, bParam1, 0);
	}
	return;
}

void Function_209(int iParam0, bool bParam1) //Position: 0xE188 / 57736
{
	if (!Function_207(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_26401[iParam0] = (Global_26401[iParam0] + bParam1);
	Function_75((*&Global_26401 + 2220)[iParam0], bParam1, 0, 0);
	Function_75(222, bParam1, 0, 0);
	return;
}

void Function_210(int iParam0) //Position: 0xE1CD / 57805
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_211(int iParam0) //Position: 0xE1E0 / 57824
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

int Function_212(bool bParam0, bool bParam1) //Position: 0xE1FD / 57853
{
	bool bVar0;
	
	bVar0 = Function_18(0);
	if ((Function_18(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_75(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_18(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_75(597, bParam0, 0, 0);
	}
	if ((Function_18(597) + Function_18(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_213(int iParam0) //Position: 0xE2C8 / 58056
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	
	if (Function_296())
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
			Function_220(iParam0, iParam0->f_68);
			REFERENCE_OBJECT(iParam0->f_64);
			iParam0->f_68 = "";
			Function_219(iParam0);
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
		iParam0->f_68 = Function_218(iParam0);
		if (IS_OBJECT_VALID(iParam0->f_68))
		{
			STREAMING_UNLOAD_SCENE();
			GET_OBJECT_POSITION(iParam0->f_68, &vVar11);
			GET_OBJECT_ORIENTATION(iParam0->f_68, &vVar14);
			STREAMING_LOAD_SCENE_EXT(vVar11, vVar14, 1);
			iParam0->f_72 = fVar0;
			Function_217(iParam0, Function_47());
			Function_219(iParam0);
		}
	}
	Function_214(iParam0, fVar0);
	if (Function_68(StackVal, StackVal, *(iParam0 + 24)))
	{
	}
	if (Function_68(StackVal, StackVal, *(iParam0 + 36)))
	{
	}
	return;
}

void Function_214(var uParam0, int iParam1) //Position: 0xE454 / 58452
{
	Function_216(uParam0);
	Function_215(uParam0);
	uParam0->f_48 = iParam1;
	return;
}

void Function_215(int iParam0) //Position: 0xE46A / 58474
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 36) };
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 80), vVar0, StackVal) };
	SET_CAMERA_TARGET_POSITION(iParam0->f_60, vVar0, 0);
	return;
}

void Function_216(int iParam0) //Position: 0xE495 / 58517
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(iParam0->f_64, iParam0 + 24);
	GET_OBJECT_AXIS(iParam0->f_64, &vVar0, 2);
	VNORMALIZE(&vVar0);
	VSCALE(&vVar0, -30.0f);
	*(iParam0 + 36) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *(iParam0 + 24), StackVal) };
	return;
}

void Function_217(int iParam0, int iParam1) //Position: 0xE4D2 / 58578
{
	int iVar0;
	
	iParam0->f_64 = iParam1;
	iParam0->f_76 = GET_PROFILE_TIME();
	iVar0 = 31;
	ADD_CAMERA_COLLISION_EXCLUSION(iParam0->f_60, iParam0->f_64, iVar0);
	return;
}

var Function_218(int iParam0) //Position: 0xE4F6 / 58614
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

void Function_219(int iParam0) //Position: 0xE58D / 58765
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

void Function_220(var uParam0, bool bParam1) //Position: 0xE5DB / 58843
{
	if (IS_OBJECT_VALID(bParam1))
	{
		Function_217(uParam0, bParam1);
		Function_219(uParam0);
	}
	return;
}

int Function_221() //Position: 0xE5F5 / 58869
{
	bool bVar0;
	
	Function_249(0);
	if (!IS_ITERATOR_VALID(Global_26149))
	{
		return 0;
	}
	bVar0 = START_OBJECT_ITERATOR(Global_26149);
	while (IS_OBJECT_VALID(bVar0))
	{
		Function_222(GET_EVENT_FROM_OBJECT(bVar0));
		bVar0 = OBJECT_ITERATOR_NEXT(Global_26149);
	}
	return 0;
}

void Function_222(bool bParam0) //Position: 0xE62F / 58927
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
			while (Function_95(Var0) && !bVar89)
			{
				Var80 = { StackVal, StackVal, StackVal, *(&Global_3422[Var040] + 12) };
				Var84 = { StackVal, StackVal, StackVal, Function_110(Var0) };
				if (STRING_TO_HASH(&Var80) != bVar44 || STRING_TO_HASH(&Var84) != bVar44)
				{
					bVar89 = true;
				}
				else
				{
					Var0++;
				}
			}
			if (!Function_95(Var0))
			{
				return;
			}
			if (!Function_198(0, 0, 1, 1))
			{
				Function_40(1);
			}
			Var0.f_16 = 1;
			*(&Var0 + 4) = { StackVal, StackVal, *(&Global_3422[Var040] + 52) };
			bVar88 = Function_248(Var0);
			if (!STRINGS_ARE_EQUAL(bVar88, ""))
			{
				while (!Function_247(bVar88, &vVar90, &vVar93) && !IS_EXITFLAG_SET())
				{
					WAIT(false);
				}
			}
			if (Function_68(StackVal, StackVal, vVar90))
			{
				Function_246(StackVal, StackVal, &vVar90, &vVar93, *(&Var0 + 4), 90.0f, 0);
			}
			VSCALE(&vVar93, (6,28f / 360.0f));
			STREAMING_OVERRIDE_MAIN_POI(vVar90, vVar93);
			STREAMING_SET_CUTSCENE_MODE(1);
			RESET_STORED_DATA();
			STORE_GAME_STATE(&Var0, 44, 1);
			Var80 = { StackVal, StackVal, StackVal, Function_245(Var0) };
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
				if (Function_76(iVar46))
				{
					if (Function_80(iVar46))
					{
						strcpy(&cVar48, "out_", 64);
						stradd(&cVar48, &Global_27774[iVar4613] + 32, 64);
						if (STRING_TO_HASH(&cVar48) == bVar44)
						{
							if (!Global_28178 != iVar46)
							{
								if (Function_244(iVar46, 1, 0))
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
						if (Function_80(iVar46))
						{
							strcpy(&cVar64, UI_GET_STRING("out_wares_complete"), 64);
						}
						else if (Function_76(iVar46))
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
			while (Function_95(iVar47) && !bVar89)
			{
				Var80 = { StackVal, StackVal, StackVal, *(&Global_3422[iVar4740] + 12) };
				Var84 = { StackVal, StackVal, StackVal, Function_110(iVar47) };
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
				if (Function_182(iVar47, 0))
				{
					Function_241(iVar47);
				}
			}
			break;
		
		case 0x0000006D:
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
			Function_223(bVar44);
			break;
	}
	return;
}

void Function_223(int iParam0) //Position: 0xEA51 / 59985
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
				Function_224(&iVar2, iParam0);
			}
			iVar1++;
		}
	}
	return;
}

void Function_224(int iParam0, int iParam1) //Position: 0xEA90 / 60048
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
	
	iVar0 = Function_240(iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (!Global_84611[iVar0140].f_68)
		{
			strcpy(&Var2, "SC_AA", 32);
			Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var2, "_SP") };
			if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nAAID"))
			{
				bVar1 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nAAID");
			}
			Function_234(iParam0);
			Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var2, "_") };
			Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var2, I2STR(bVar1)) };
			Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var2, "_obj1") };
			Var34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var2, "_obj2") };
			Var42 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var2, "_obj3") };
			Var50 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var2, "_globalName") };
			Var58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var2, "_friendName") };
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
					Function_231(iParam0, iVar0, 4, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_TheBest");
					break;
				
				case 0x00000002:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, &Var58);
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_TheirBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_231(iParam0, iVar0, 1, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_Dyn_ScoreLabel");
					break;
				
				case 0x00000001:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, &Var50);
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_TheBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_231(iParam0, iVar0, 0, 2);
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
			Function_227(iParam0);
			Var67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var67, "_") };
			Var67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var67, I2STR(bVar66)) };
			Var83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var67, "_obj1") };
			Var91 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var67, "_globalName") };
			Var99 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var67, "_friendName") };
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
					Function_225(iParam0, iVar0, 4, 2);
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
					Function_225(iParam0, iVar0, 1, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_Dyn_ScoreLabel");
					break;
				
				case 0x00000001:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, &Var91);
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_TheBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_225(iParam0, iVar0, 0, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_TheirBest");
					break;
				}
			}
	}
	return;
}

void Function_225(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xF2D4 / 62164
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
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "_count") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "_compare") };
	Function_226(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, (*&Global_84611[iParam1140] + 144)[iParam212], Var17);
	Function_226(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, (*&Global_84611[iParam1140] + 144)[iParam312], Var9);
	UI_CHALLENGE_SET_TIME_INFO(*iParam0, 0, &Var17);
	UI_CHALLENGE_SET_TIME_INFO(*iParam0, 1, &Var9);
}

void Function_226(char* cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0xF399 / 62361
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

void Function_227(int iParam0) //Position: 0xF3E9 / 62441
{
	int iVar0;
	
	iVar0 = Function_240(iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (Global_84611[iVar0140].f_68)
		{
			Function_228(*iParam0);
		}
	}
	return;
}

void Function_228(char* cParam0) //Position: 0xF416 / 62486
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
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_230(&Var1, "_locked", "") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "_des") };
	if (Function_296())
	{
		UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var9);
		UI_CHALLENGE_SET_TROPHY_TYPE(cParam0, 8);
	}
	else if (SC_CHALLENGE_GET_COMMUNITY_VALUE(cParam0) > SC_CHALLENGE_GET_COMMUNITY_TOTAL(cParam0))
	{
		Function_229(cParam0);
	}
	else
	{
		UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var17);
		UI_CHALLENGE_SET_TROPHY_TYPE(cParam0, 4);
	}
	return;
}

void Function_229(char* cParam0) //Position: 0xF4CC / 62668
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nCCID");
	}
	strcpy(&Var1, "SC_community", 32);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "n_complete") };
	UI_CHALLENGE_SET_TROPHY_TYPE(cParam0, 8);
	UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var9);
	return;
}

struct<32> Function_230(char* cParam0, char* cParam1, char* cParam2) //Position: 0xF545 / 62789
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_231(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xF564 / 62820
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	int iVar33;
	
	strcpy(&Var1, "SC_AA", 32);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nAAID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "n_bestTime") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "_compareTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_232((*&Global_84611[iParam1140] + 144)[iParam212]) };
	UI_SET_STRING(&Var17, &Var25);
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_232((*&Global_84611[iParam1140] + 144)[iParam312]) };
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

struct<32> Function_232(var uParam0) //Position: 0xF6AF / 63151
{
	char* cVar0[32];
	int iVar8;
	int iVar9;
	bool bVar10;
	struct<13> Var11;
	
	Var11 = { StackVal, StackVal, StackVal, Function_233(uParam0) };
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

struct<16> Function_233(var uParam0) //Position: 0xF72F / 63279
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

void Function_234(int iParam0) //Position: 0xF7A0 / 63392
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;
	bool bVar17;
	
	iVar0 = Function_240(iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (!Global_84611[iVar0140].f_68)
		{
			strcpy(&Var9, "SC_AA", 32);
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var9, "_SP") };
			if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nAAID"))
			{
				bVar17 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nAAID");
			}
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var9, "_") };
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var9, I2STR(bVar17)) };
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var9, "_times") };
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
			Function_239(*iParam0, (*&Global_84611[iVar0140] + 144)[412], (*&Global_84611[iVar0140] + 144)[312], (*&Global_84611[iVar0140] + 144)[212]);
			UI_CHALLENGE_SET_TROPHY_TYPE(*iParam0, Function_238(*iParam0));
			if (!Function_237(*iParam0) || !NET_MAILBOX_IS_SIGNED_INTO_SC())
			{
				UI_CHALLENGE_SET_TROPHY_TYPE(*iParam0, 8);
			}
			Function_235(*iParam0);
		}
	}
	return;
}

void Function_235(int iParam0) //Position: 0xF905 / 63749
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	if (SC_CHALLENGE_IS_VAR_VALID(iParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(iParam0, "nAAID");
	}
	iVar2 = Function_240(&iParam0);
	if (iVar2 >= 4294967295)
	{
		if (!Function_236())
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_63(464) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000001:
					if (Function_63(459) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000002:
					if (Function_63(463) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000003:
					if (Function_63(462) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000004:
					if (Function_63(466) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000005:
					if (Function_63(460) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000006:
					if (Function_63(465) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000007:
					if (Function_63(461) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000008:
					if (Function_181(Global_30717[0]))
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

bool Function_236() //Position: 0xFB34 / 64308
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
			iVar3 = Function_240(&iVar2);
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

bool Function_237(char* cParam0) //Position: 0xFB83 / 64387
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
			return Function_63(464) < 0.0f;
			break;
		
		case 0x00000001:
			return Function_63(459) < 0.0f;
			break;
		
		case 0x00000002:
			return Function_63(463) < 0.0f;
			break;
		
		case 0x00000003:
			return Function_63(462) < 0.0f;
			break;
		
		case 0x00000004:
			return Function_63(466) < 0.0f;
			break;
		
		case 0x00000005:
			return Function_63(460) < 0.0f;
			break;
		
		case 0x00000006:
			return Function_63(465) < 0.0f;
			break;
		
		case 0x00000007:
			return Function_63(461) < 0.0f;
			break;
		
		case 0x00000008:
			return Function_181(Global_30717[0]);
			break;
		
		case 0x00000009:
			return StackVal < 3;
			break;
	}
	return iVar1;
}

int Function_238(int iParam0) //Position: 0xFC6B / 64619
{
	int iVar0;
	
	iVar0 = Function_240(&iParam0);
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

void Function_239(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xFCD2 / 64722
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
	
	iVar81 = Function_240(&iParam0);
	strcpy(&Var1, "SC_AA", 32);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(iParam0, "nAAID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, I2STR(bVar0)) };
	Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "_locked") };
	Var49 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_230(&Var1, "_NotSignedDes", "") };
	Var57 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_230(&Var1, "_LockedNotInSP", "") };
	Var65 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "_des") };
	Var73 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "_unlock") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "n_currTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "n_lastTime") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(&Var1, "n_bestTime") };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_232(uParam1) };
	UI_SET_STRING(&Var17, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_232(uParam2) };
	UI_SET_STRING(&Var25, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_232(uParam3) };
	UI_SET_STRING(&Var33, &Var9);
	if (!NET_MAILBOX_IS_SIGNED_INTO_SC())
	{
		UI_CHALLENGE_SET_DESCRIPTION(iParam0, &Var49);
	}
	else if (Function_296())
	{
		UI_CHALLENGE_SET_DESCRIPTION(iParam0, &Var57);
	}
	else if (Function_237(iParam0))
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

var Function_240(int iParam0) //Position: 0xFE7C / 65148
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

void Function_241(int iParam0) //Position: 0xFEAE / 65198
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	char* cVar51[8];
	bool bVar53;
	float fVar54;
	bool bVar55;
	int iVar56;
	
	if (Function_182(iParam0, 1))
	{
		bVar55 = Function_129(iParam0);
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
		iVar56 = Function_128(iParam0, bVar55, bVar53, fVar54, bVar0);
		strcpy(&cVar51, "rank_", 8);
		straddi(&cVar51, iVar56, 8);
		if (bVar2 <= 10)
		{
			UI_SET_STRING_FORMAT("Dmission_time", UI_GET_STRING("mission_time_lowsec"), UI_GET_STRING(Function_242(bVar1)), UI_GET_STRING(Function_242(bVar2)), 0);
		}
		else
		{
			UI_SET_STRING_FORMAT("Dmission_time", UI_GET_STRING("mission_time"), UI_GET_STRING(Function_242(bVar1)), UI_GET_STRING(Function_242(bVar2)), 0);
		}
		SET_JOURNAL_INFO_LABEL(0, "Dmission_time");
		switch (bVar55)
		{
			case 0x00000000:
				UI_SET_STRING_FORMAT("Dmission_headshots", UI_GET_STRING("mission_headshots"), UI_GET_STRING(Function_242(bVar0)), 0, 0);
				UI_SET_STRING("Dpercent_amount", I2STR(ROUND((fVar54 * 100.0f))));
				UI_SET_STRING_FORMAT("Dmission_accuracy", UI_GET_STRING("mission_accuracy"), UI_GET_STRING("Dpercent_format"), 0, 0);
				SET_JOURNAL_INFO_LABEL(1, "Dmission_accuracy");
				SET_JOURNAL_INFO_LABEL(2, "Dmission_headshots");
				break;
			
			case 0x00000001:
				UI_SET_STRING("Dpercent_amount", I2STR(ROUND((fVar54 * 100.0f))));
				UI_SET_STRING_FORMAT("Dmission_accuracy", UI_GET_STRING("mission_accuracy"), UI_GET_STRING("Dpercent_format"), 0, 0);
				SET_JOURNAL_INFO_LABEL(1, "Dmission_accuracy");
				SET_JOURNAL_INFO_LABEL(2, "COMMON_EMPTY");
				break;
			
			case 0x00000002:
				UI_SET_STRING("Dpercent_amount", I2STR(ROUND((fVar54 * 100.0f))));
				UI_SET_STRING_FORMAT("Dmission_accuracy", UI_GET_STRING("mission_stragglers"), UI_GET_STRING("Dpercent_format"), 0, 0);
				UI_SET_STRING_FORMAT("Dmission_headshots", UI_GET_STRING("mission_herd"), UI_GET_STRING(Function_242(bVar0)), 0, 0);
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

var Function_242(bool bParam0) //Position: 0x102E9 / 66281
{
	bool bVar0;
	
	bVar0 = Function_243();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_243() //Position: 0x10300 / 66304
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

bool Function_244(bool bParam0, bool bParam1, bool bParam2) //Position: 0x103BC / 66492
{
	if (Global_28178 == bParam0)
	{
		return 1;
	}
	if (Global_28179 == bParam0)
	{
		return 1;
	}
	if (!Function_79(bParam0))
	{
		LOG_ERROR("Attempting to swap to an invalid outfit");
		return 0;
	}
	if (!Function_80(bParam0) && !bParam2)
	{
		return 0;
	}
	Global_28179 = bParam0;
	if (bParam1)
	{
		Function_74(bParam0, 8192);
	}
	DECOR_SET_BOOL(Global_34573, "playerChangeOutfits", true);
	return 1;
}

struct<16> Function_245(int iParam0) //Position: 0x1044E / 66638
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_95(iParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_3422[iParam040] + 12);
}

var Function_246(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6) //Position: 0x1047F / 66687
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
}

bool Function_247(bool bParam0, int iParam1, int iParam2) //Position: 0x105A6 / 66982
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

var Function_248(int iParam0) //Position: 0x106C4 / 67268
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

void Function_249(bool bParam0) //Position: 0x1103D / 69693
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

int Function_250() //Position: 0x110AE / 69806
{
	if (Function_251(&Global_28210))
	{
		return 1;
	}
	if (Function_251(&Global_28185))
	{
		return 1;
	}
	if (Function_251(&Global_28235))
	{
		return 1;
	}
	return 0;
}

bool Function_251(int iParam0) //Position: 0x110DC / 69852
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
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_256(StackVal, StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_12)), *(iParam0 + 24), 0x41200000, 0, 0x3f800000, 1) };
				Function_255(&Var3);
				*(iParam0 + 48) = { StackVal, StackVal, Function_255(&Var3) };
				Function_254(iParam0->f_60, &uVar0, &uVar1, &uVar2);
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
					if (StackVal || Function_73(StackVal, StackVal, StackVal, (StackVal || Function_73(StackVal, StackVal, StackVal, Function_73(StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), Global_34574) > 15.0f, *(iParam0 + 48), Global_34574) > 15.0f), *(iParam0 + 36), Global_34574) > 15.0f)
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
				Function_253();
			}
			else if (*iParam0 == 2)
			{
				Function_252();
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

void Function_252() //Position: 0x113A7 / 70567
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

void Function_253() //Position: 0x113D2 / 70610
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

void Function_254(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x113FD / 70653
{
	switch (iParam0)
	{
		case 0x00000001:
			*uParam1 = 0,64f;
			*uParam2 = 0,22f;
			*uParam3 = 0,26f;
			break;
		
		case 0x00000002:
			*uParam1 = 0,34f;
			*uParam2 = 0,58f;
			*uParam3 = 0,74f;
			break;
		
		case 0x00000000:
			*uParam1 = 0,83f;
			*uParam2 = 0,65f;
			*uParam3 = 0,36f;
			break;
		
		case 0x00000003:
			*uParam1 = 0,41f;
			*uParam2 = 0,57f;
			*uParam3 = 0,23f;
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
			*uParam1 = 0,71f;
			*uParam2 = 0,64f;
			*uParam3 = 0,57f;
			break;
	}
}

vector3 Function_255(bool bParam0) //Position: 0x114ED / 70893
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_256(bool bParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, int iParam7) //Position: 0x1150C / 70924
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
	Function_255(&Var1);
	bVar20 = VDIST(Function_255(&Var1), vParam1);
	Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
	while (Var1.f_12 >= fParam6 && !bVar0)
	{
		Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		UNK_0x19D652F9(bParam0, FABS(bParam4), &Var7, &Var1);
		Function_255(&Var1);
		bVar21 = VDIST(Function_255(&Var1), vParam1);
		if (bVar21 > bVar20)
		{
			bVar20 = bVar21;
			Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		}
		if (Function_259(&Var1))
		{
			bVar0 = true;
		}
	}
	if (iParam7 < 1 && bParam4 < 1.0f)
	{
		UNK_0x19D652F9(bParam0, (bParam4 / 2.0f), &Var13, &Var1);
		UNK_0x19D652F9(bParam0, (-1.0f * (bParam4 / 2.0f)), &Var13, &Var7);
		return StackVal, StackVal, StackVal, StackVal, StackVal, Function_256(StackVal, StackVal, bParam0, vParam1, (bParam4 / 10.0f), Function_258(Var7.f_12, Var1.f_12), Function_257(Var7.f_12, Var1.f_12), (iParam7 - 1));
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var13;
}

var Function_257(int iParam0, int iParam1) //Position: 0x115FA / 71162
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_258(int iParam0, int iParam1) //Position: 0x1160D / 71181
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_259(int iParam0) //Position: 0x11620 / 71200
{
	if (iParam0->f_12 > 0,001f || iParam0->f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_260() //Position: 0x11641 / 71233
{
	vector3 vVar0;
	
	if (GET_USER_DEFINED_WAYPOINT(&vVar0))
	{
		vVar0.f_4 = 25.0f;
		if (!Function_139(StackVal, StackVal, StackVal, StackVal, vVar0, *(&Global_28210 + 36)))
		{
			Function_261(StackVal, StackVal, vVar0);
		}
	}
	else if (StackVal != 2 && Global_28210 != 1)
	{
		if (IS_USER_DEFINED_WAYPOINT_CLEARED())
		{
			Function_253();
		}
	}
	return;
}

void Function_261(vector3 vParam0) //Position: 0x1168D / 71309
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

void Function_262() //Position: 0x11714 / 71444
{
	bool bVar0;
	
	bVar0 = GET_TARGETED_JOURNAL_ENTRY();
	if (bVar0 != bLocal_58)
	{
		Function_286(bLocal_58);
		Function_263(bVar0);
		bLocal_58 = bVar0;
	}
	return;
}

void Function_263(bool bParam0) //Position: 0x11734 / 71476
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0 != 4294967295 || bParam0 != 0)
	{
		return;
	}
	if (Function_296())
	{
		return;
	}
	bVar0 = GET_JOURNAL_ENTRY_TYPE(bParam0);
	if (bVar0 == 4)
	{
		if (bParam0 != GET_TARGETED_JOURNAL_ENTRY())
		{
			return;
		}
	}
	Function_286(GET_TARGETED_JOURNAL_ENTRY());
	iVar1 = GET_JOURNAL_ENTRY_MISC_FLAG(bParam0);
	switch (bVar0)
	{
		case 0x00000004:
			if (Global_28184)
			{
				return;
			}
			iVar6 = 0;
			while (iVar6 <= Global_27774)
			{
				if (Function_76(iVar6) && !Function_80(iVar6))
				{
					if (bParam0 == Global_27774[iVar613].f_48)
					{
						iVar5 = iVar6;
						bVar4 = true;
					}
				}
				iVar6++;
			}
			if (!bVar4)
			{
				Function_285();
			}
			else if (iVar5 != Global_28180)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
				{
					Function_284(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
			{
				Function_152();
				TARGET_JOURNAL_ENTRY(bParam0);
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
					if (Function_277(&(Global_63541[iVar155]), iVar3))
					{
						Function_3(&Global_63541[iVar155] + 144, 64);
						Function_273(&(Global_63541[iVar155]), iVar3);
						if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
						{
							DESTROY_OBJECT(Global_63541[iVar155].f_192);
							Function_264(&(Global_63541[iVar155]), 7);
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

void Function_264(int iParam0, int iParam1) //Position: 0x118D6 / 71894
{
	int iVar0;
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
	iVar0 = iParam0->f_96;
	iParam0->f_192 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Global_63535, Function_188(), *(iParam0 + 112), 0.0f, 0.0f, 0.0f, iVar0, iVar0, iVar0, 0, Global_34573, iParam1, iParam0->f_92, 0, 1, 1);
	Function_265(iParam0);
	bVar1 = GATEWAY_GET_MARKER(iParam0->f_192);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

void Function_265(int iParam0) //Position: 0x11990 / 72080
{
	float fVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		return;
	}
	iParam0->f_216 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_188(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
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
}

int Function_266(var uParam0, int iParam1) //Position: 0x11A32 / 72242
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
	Function_269(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_267(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_267(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x11B93 / 72595
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_268("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_268(bool bParam0) //Position: 0x11C2E / 72750
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
			memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_230("0", &Var8, ""), 4);
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

int Function_269(bool bParam0) //Position: 0x11C98 / 72856
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
						Function_272(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_270(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_272(iVar0);
						}
					}
					else if (Function_270(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_272(iVar0);
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
			Function_272(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_270(bool bParam0, vector3 vParam1) //Position: 0x11DF9 / 73209
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_271(bParam0);
		vVar0 = { StackVal, StackVal, Function_271(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_271(bool bParam0) //Position: 0x11E73 / 73331
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

void Function_272(int iParam0) //Position: 0x11EDD / 73437
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

void Function_273(int iParam0, int iParam1) //Position: 0x11F3E / 73534
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 112) };
	vVar0.f_4 = (vVar0.y + 0,5f);
	fVar3 = 1.0f;
	fVar4 = 50.0f;
	if (((StackVal && Function_275(StackVal, Function_276(iParam1), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_274(iParam1)) || Global_74542[iParam110].f_12 != 1)
	{
		iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_MAX_DISTANCE(iParam0->f_184, 1,25f);
		iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
		UNK_0xFF3DB575(iParam0->f_188, 1);
		SET_BLIP_PRIORITY(iParam0->f_188, true);
		SET_BLIP_COLOR(iParam0->f_188, 0,58f, 0,35f, 0,72f, fVar3);
		Global_74542[iParam110].f_12 = 1;
	}
	else
	{
		fVar3 = 0,5f;
		vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
		vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 7);
		SET_BLIP_SCALE(iParam0->f_184, fVar4);
	}
	SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
	SET_BLIP_COLOR(iParam0->f_184, 0,58f, 0,35f, 0,72f, fVar3);
	SET_BLIP_PRIORITY(iParam0->f_184, 3);
	return;
}

int Function_274(bool bParam0) //Position: 0x12083 / 73859
{
	if ((Global_74542[bParam010] != 3 || Global_74542[bParam010] != 4) || Global_74542[bParam010] != 5)
	{
		return 1;
	}
	return 0;
}

var Function_275(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7) //Position: 0x120AF / 73903
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, uParam7);
}

bool Function_276(int iParam0) //Position: 0x120CB / 73931
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_277(int iParam0, int iParam1) //Position: 0x120E0 / 73952
{
	if (Function_13(Global_63541[iParam155].f_144, 64))
	{
		return 1;
	}
	if (Function_276(iParam1))
	{
		Function_3(&Global_63541[iParam155] + 144, 64);
		return 1;
	}
	if ((Function_283(iParam1) || Function_21(iParam1)) || Function_282(iParam1))
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
		if (Function_179(&(Global_29008[iParam0->f_132]), 256))
		{
			return 0;
		}
	}
	if (Function_281(iParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!((((Global_63096 || Global_3384) || Global_3369) || iParam0->f_152) || GET_ACTOR_INVULNERABILITY(iParam0->f_204)))
		{
			if (!Function_280(iParam0))
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
	if (!Function_278(iParam0, iParam1))
	{
		return 0;
	}
	Function_3(&Global_63541[iParam155] + 144, 64);
	return 1;
}

bool Function_278(int iParam0, int iParam1) //Position: 0x121F5 / 74229
{
	int iVar0;
	
	if (!iParam0->f_172 != 0)
	{
		if (Function_85(iParam0 + 172, 4))
		{
			if (!Function_279(iParam1))
			{
				return 0;
			}
		}
		if (Function_85(iParam0 + 172, 1))
		{
			if (!Function_21(iParam0->f_168))
			{
				return 0;
			}
		}
		if (Function_85(iParam0 + 172, 2) && Global_3365)
		{
			iVar0 = Function_176(iParam0->f_176);
			if (Function_174(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_85(iParam0 + 172, 8) && Global_3365)
		{
			if (Function_174(iParam0->f_164))
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
				if (!Function_85(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_85(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_85(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_85(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_85(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_85(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_279(int iParam0) //Position: 0x12339 / 74553
{
	return StackVal;
}

bool Function_280(int iParam0) //Position: 0x12349 / 74569
{
	if (!iParam0->f_152)
	{
		if ((((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204)) || IS_PLAYER_TARGETTING_ACTOR(false, iParam0->f_204, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_281(int iParam0) //Position: 0x12390 / 74640
{
	if (!Function_92(1048576) || Global_3381)
	{
		return 1;
	}
	if (!Function_13(Global_63541[iParam055].f_144, 32768))
	{
		if ((Global_3403 || Global_3405) || Global_3404)
		{
			if (!Function_91(Global_76847, 0x8000000))
			{
				Function_27(Global_34573, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool Function_282(int iParam0) //Position: 0x123E9 / 74729
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

int Function_283(int iParam0) //Position: 0x123FE / 74750
{
	if (Global_74542[iParam010] == 0)
	{
		return 1;
	}
	return 0;
}

int Function_284(int iParam0) //Position: 0x12413 / 74771
{
	if (Global_28180 == iParam0)
	{
		return 1;
	}
	if (!Function_79(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_80(iParam0))
	{
		return 0;
	}
	if (!Function_76(iParam0))
	{
		return 0;
	}
	Global_28180 = iParam0;
	Global_28180.f_12 = 1;
	return 1;
}

void Function_285() //Position: 0x1247C / 74876
{
	Global_28180 = 4294967295;
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	Global_28180.f_12 = 1;
	return;
}

void Function_286(bool bParam0) //Position: 0x1249F / 74911
{
	bool bVar0;
	
	if (bParam0 != 4294967295 || bParam0 != 0)
	{
		return;
	}
	bVar0 = GET_JOURNAL_ENTRY_TYPE(bParam0);
	switch (bVar0)
	{
		case 0x00000004:
			Function_285();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_287() //Position: 0x124D9 / 74969
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
				Function_234(&iVar2);
				Function_224(&iVar2, 0);
			}
			iVar1++;
		}
	}
	return;
}

void Function_288() //Position: 0x12530 / 75056
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return;
	}
	bVar0 = GET_ACTOR_ENUM(Global_34573);
	if (!iLocal_59)
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
			iLocal_59 = 1;
		}
	}
	return;
}

void Function_289() //Position: 0x125B6 / 75190
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
			Function_290();
		}
		else
		{
			Global_88794 = 0;
		}
	}
	return;
}

void Function_290() //Position: 0x12601 / 75265
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_293();
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
					if (Function_292(iVar1, iVar0))
					{
						Global_84611[iVar0140].f_76 = 1;
					}
				}
				else if (Function_291(iVar1, iVar0))
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

bool Function_291(int iParam0, int iParam1) //Position: 0x1267B / 75387
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
				iLocal_22 = 0;
				iLocal_23 = 0;
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
				}
				Global_87412[iParam169].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
			if (iLocal_22 <= 30)
			{
				iLocal_22++;
			}
			else
			{
				Global_87412[iParam169].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
		}
		if (iLocal_23 <= 30)
		{
			iLocal_23++;
		}
		else
		{
			Global_87412[iParam169].f_8 = 0;
			return 1;
		}
	}
	return 0;
}

bool Function_292(int iParam0, int iParam1) //Position: 0x12A1B / 76315
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
				iLocal_22 = 0;
				iLocal_23 = 0;
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
			if (iLocal_22 <= 30)
			{
				iLocal_22++;
			}
			else
			{
				Global_87412[iParam169].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
		}
		if (iLocal_23 <= 30)
		{
			iLocal_23++;
		}
		else
		{
			Global_87412[iParam169].f_8 = 0;
			return 1;
		}
	}
	return 0;
}

void Function_293() //Position: 0x12BEB / 76779
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

void Function_294() //Position: 0x12C9F / 76959
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

void Function_295() //Position: 0x12DA5 / 77221
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && Global_29155[iVar010].f_28 == 4294967295 == 1) == 2) == 0)
		{
			if (Function_179(&(Global_29008[iVar0]), 4096) || Function_296())
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
						SET_BLIP_SCALE(Global_9724[iVar1], 0,85f);
						SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0,5f);
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
							SET_BLIP_SCALE(Global_9724[iVar1], 0,85f);
							SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0,5f);
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

bool Function_296() //Position: 0x12FC9 / 77769
{
	return NET_IS_MANAGER_INITIALIZED();
}

int Function_297(int iParam0) //Position: 0x12FD2 / 77778
{
	if (!Function_207(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

void Function_298() //Position: 0x12FEA / 77802
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
				Function_234(&iVar2);
				Function_224(&iVar2, 0);
			}
			iVar1++;
		}
	}
	return;
}

void Function_299() //Position: 0x1302D / 77869
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[32];
	int iVar17;
	bool bVar18;
	
	if (Function_296())
	{
		return;
	}
	if (Function_76(1) && !Function_80(1))
	{
		Function_306(1, 2);
		Function_74(1, 8);
	}
	if (Function_76(15) && !Function_80(15))
	{
		Function_306(15, 2);
	}
	if (Function_76(13) && !Function_80(13))
	{
		Function_306(13, 2);
	}
	if (Function_76(14) && !Function_80(14))
	{
		Function_306(14, 2);
	}
	if (!Function_182(57, 0))
	{
		if (Function_80(10))
		{
			Function_306(10, 4);
		}
		if (Function_80(9))
		{
			Function_306(9, 4);
		}
		if (Function_80(12))
		{
			Function_306(12, 4);
		}
	}
	if (!Function_80(3))
	{
		if (HAS_ITEM(Function_87(10), Global_34573))
		{
			Function_150(3, 1, 0, 0, 0);
			DELETE_ITEM(Function_87(10), Global_34573, 0);
			Global_59675[108].f_24 = 0;
		}
	}
	if (IS_PS3())
	{
		if (!Function_80(4))
		{
			if (HAS_ITEM(Function_87(55), Global_34573))
			{
				Function_150(4, 32, 0, 0, 0);
				DELETE_ITEM(Function_87(55), Global_34573, 0);
				Global_59675[558].f_24 = 0;
			}
		}
	}
	if (!Function_80(5))
	{
		if (HAS_ITEM(Function_87(54), Global_34573))
		{
			Function_150(5, 32, 0, 0, 0);
			DELETE_ITEM(Function_87(54), Global_34573, 0);
			Global_59675[548].f_24 = 0;
		}
	}
	if (!Function_80(6))
	{
		if (HAS_ITEM(Function_87(58), Global_34573))
		{
			Function_150(6, 32, 0, 0, 0);
			DELETE_ITEM(Function_87(58), Global_34573, 0);
			Global_59675[588].f_24 = 0;
		}
	}
	if (!Function_80(7))
	{
		if (HAS_ITEM(Function_87(53), Global_34573))
		{
			Function_150(7, 32, 0, 0, 0);
			DELETE_ITEM(Function_87(53), Global_34573, 0);
			Global_59675[538].f_24 = 0;
		}
	}
	if (!Function_80(8))
	{
		if (HAS_ITEM(Function_87(57), Global_34573))
		{
			Function_150(8, 32, 0, 0, 0);
			DELETE_ITEM(Function_87(57), Global_34573, 0);
			Global_59675[578].f_24 = 0;
		}
	}
	if (!Function_80(9))
	{
		if (HAS_ITEM(Function_87(56), Global_34573))
		{
			Function_150(9, 32, 0, 0, 0);
			DELETE_ITEM(Function_87(56), Global_34573, 0);
			Global_59675[568].f_24 = 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_27774)
	{
		if (Global_27774[iVar013] != 4294967295)
		{
			Function_305(iVar0);
			if (Function_301(iVar0))
			{
				if (Global_27774[iVar013].f_48 >= 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_27774[iVar013].f_48, 0);
				}
			}
			else
			{
				if (Global_27774[iVar013].f_48 >= 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_27774[iVar013].f_48, 1);
				}
				if (Global_28180 == iVar0)
				{
					Function_285();
				}
			}
		}
		iVar0++;
	}
	bVar18 = GET_ACTOR_ENUM(Global_34573);
	iVar0 = 0;
	while (iVar0 <= Global_27774)
	{
		if (Function_79(iVar0))
		{
			if (Global_27774[iVar013] != 4294967295)
			{
				strcpy(&cVar9, "out_", 32);
				stradd(&cVar9, &Global_27774[iVar013] + 32, 32);
				iVar17 = STRING_TO_HASH(&cVar9);
				if (Function_76(iVar0))
				{
					if (Function_80(iVar0))
					{
						SATCHEL_SET_OUTFIT_STATE(iVar17, 3);
					}
					else
					{
						SATCHEL_SET_OUTFIT_STATE(iVar17, 2);
					}
				}
				else if (Function_300(iVar0))
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
	return;
}

bool Function_300(int iParam0) //Position: 0x1337D / 78717
{
	if (!Function_79(iParam0))
	{
		LOG_ERROR("Attempting to check state of invalid outfit");
		return 0;
	}
	if (Function_77(iParam0, 8))
	{
		return 1;
	}
	return 0;
}

bool Function_301(int iParam0) //Position: 0x133CC / 78796
{
	int iVar0;
	
	if (Function_79(iParam0))
	{
		if (Function_76(iParam0) && !Function_80(iParam0))
		{
			iVar0 = Function_154(iParam0);
			switch (iParam0)
			{
				case 0x00000004:
					switch (iVar0)
					{
						case 0x00000001:
							return 1;
							break;
						
						case 0x00000002:
							if (Function_182(6, 0) || Function_182(12, 0))
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
							if (Function_21(13))
							{
								if (Function_302(&(Global_63541[1455]), 14, 1, 1) && !Function_282(14))
								{
									return 1;
								}
								return 0;
							}
							if (Function_21(12))
							{
								if ((Function_302(&(Global_63541[1355]), 13, 1, 1) && !Function_282(13)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1355].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_21(11))
							{
								if ((Function_302(&(Global_63541[1255]), 12, 1, 1) && !Function_282(12)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1255].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_21(10))
							{
								if ((Function_302(&(Global_63541[1155]), 11, 1, 1) && !Function_282(11)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1155].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_182(5, 0))
							{
								if (Function_302(&(Global_63541[1055]), 10, 1, 1) && !Function_282(10))
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
							if (Function_21(26))
							{
								if (Function_302(&(Global_63541[2755]), 27, 1, 1) && !Function_282(27))
								{
									return 1;
								}
								return 0;
							}
							if (Function_21(25))
							{
								if (Function_302(&(Global_63541[2655]), 26, 1, 1) && !Function_282(26))
								{
									return 1;
								}
								return 0;
							}
							if (Function_21(24))
							{
								if (Function_302(&(Global_63541[2555]), 25, 1, 1) && !Function_282(25))
								{
									return 1;
								}
								return 0;
							}
							if (Function_21(23))
							{
								if (Function_302(&(Global_63541[2455]), 24, 1, 1) && !Function_282(24))
								{
									return 1;
								}
								return 0;
							}
							if (Function_182(26, 0))
							{
								if (Function_302(&(Global_63541[2355]), 23, 1, 1) && !Function_282(23))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000008:
							if (Function_21(55))
							{
								if ((Function_302(&(Global_63541[5655]), 56, 1, 1) && !Function_282(56)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5655].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_21(54))
							{
								if ((Function_302(&(Global_63541[5555]), 55, 1, 1) && !Function_282(55)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5555].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_21(27))
							{
								if (Function_302(&(Global_63541[5455]), 54, 1, 1) && !Function_282(54))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_182(41, 0))
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
							if (Function_21(52))
							{
								if ((Function_302(&(Global_63541[5355]), 53, 1, 1) && !Function_282(53)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5355].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_21(51))
							{
								if (Function_302(&(Global_63541[5255]), 52, 1, 1) && !Function_282(52))
								{
									return 1;
								}
								return 0;
							}
							if (Function_21(50))
							{
								if (Function_302(&(Global_63541[5155]), 51, 1, 1) && !Function_282(51))
								{
									return 1;
								}
								return 0;
							}
							if (Function_21(49))
							{
								if (Function_302(&(Global_63541[5055]), 50, 1, 1) && !Function_282(50))
								{
									return 1;
								}
								return 0;
							}
							if (Function_182(17, 0))
							{
								if (Function_302(&(Global_63541[4955]), 49, 1, 1) && !Function_282(49))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_182(57, 0))
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
							if (Function_21(19))
							{
								if (Function_302(&(Global_63541[2055]), 20, 1, 1) && !Function_282(20))
								{
									return 1;
								}
								return 0;
							}
							if (Function_21(18))
							{
								if ((Function_302(&(Global_63541[1955]), 19, 1, 1) && !Function_282(19)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1955].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_21(17))
							{
								if (Function_302(&(Global_63541[1855]), 18, 1, 1) && !Function_282(18))
								{
									return 1;
								}
								return 0;
							}
							if (Function_21(16))
							{
								if ((Function_302(&(Global_63541[1755]), 17, 1, 1) && !Function_282(17)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1755].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_21(15))
							{
								if (Function_302(&(Global_63541[1655]), 16, 1, 1) && !Function_282(16))
								{
									return 1;
								}
								return 0;
							}
							if (Function_182(8, 0))
							{
								if (Function_302(&(Global_63541[1555]), 15, 1, 1) && !Function_282(15))
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

int Function_302(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x13988 / 80264
{
	if (!iParam0->f_172 != 0)
	{
		if (Function_85(iParam0 + 172, 4))
		{
			if (!Function_279(iParam1))
			{
				return 0;
			}
		}
		if (Function_85(iParam0 + 172, 1))
		{
			if (Global_63541[iParam0->f_16855].f_20 != Global_63541[iParam155].f_20 || iParam3)
			{
				if (!Function_21(iParam0->f_168))
				{
					return 0;
				}
			}
		}
		if (Function_85(iParam0 + 172, 2) && Global_3365)
		{
			if (!Function_182(iParam0->f_176, 0))
			{
				return 0;
			}
		}
		if (Function_85(iParam0 + 172, 8) && Global_3365)
		{
			if (!Function_304(iParam0->f_164, 0))
			{
				return 0;
			}
		}
		if (!bParam2)
		{
			return 1;
		}
		return Function_303(iParam0);
	}
	return 1;
}

int Function_303(int iParam0) //Position: 0x13A3C / 80444
{
	if (!iParam0->f_172 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_85(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_85(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_85(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_85(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_85(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_85(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_304(int iParam0, bool bParam1) //Position: 0x13AE8 / 80616
{
	if (!Function_174(iParam0))
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

void Function_305(int iParam0) //Position: 0x13B1E / 80670
{
	int iVar0;
	
	if (!Function_79(iParam0))
	{
		return;
	}
	if (Function_80(iParam0))
	{
		return;
	}
	if (!Function_77(iParam0, 1048576))
	{
		return;
	}
	iVar0 = Function_35(iParam0);
	if (iVar0 >= Global_27774[iParam013].f_24)
	{
		Global_27774[iParam013].f_24 = iVar0;
		if (Global_27774[iParam013].f_24 == Global_27774[iParam013].f_28)
		{
			Function_183(iParam0, 0, 1);
		}
	}
	return;
}

void Function_306(int iParam0, int iParam1) //Position: 0x13B81 / 80769
{
	int iVar0;
	
	if (!Function_79(iParam0))
	{
		LOG_ERROR("Attempting to unset status on invalid outfit");
		return;
	}
	iVar0 = (StackVal && iParam1);
	Global_27774[iParam013].f_8 = (StackVal - iVar0);
	return;
}

void Function_307(var uParam0, var uParam1, bool bParam2) //Position: 0x13BE6 / 80870
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
	
	Function_51();
	Var0 = { StackVal, Function_51() };
	Function_199(179, &Var0, 0, 1);
	Function_50();
	Var0 = { StackVal, Function_50() };
	Function_199(180, &Var0, 0, 1);
	Function_49();
	Var0 = { StackVal, Function_49() };
	Function_199(181, &Var0, 0, 1);
	Function_48();
	Var0 = { StackVal, Function_48() };
	Function_199(182, &Var0, 0, 1);
	strcpy(&Var0, Function_310(1), 8);
	Function_199(401, &Var0, 0, 1);
	strcpy(&Var0, Function_309(1), 8);
	Function_199(404, &Var0, 0, 1);
	Function_52();
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
				strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(Function_308(bVar2), 3, 1), 32);
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
				strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(Function_308(bVar2), 3, 1), 32);
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
				bVar12 = Function_308(bVar2);
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
					strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(Function_308(bVar2), 3, 1), 32);
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
					bVar12 = Function_308(bVar2);
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
				bVar12 = (bVar12 * 3,28084f);
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
	return;
}

bool Function_308(int iParam0) //Position: 0x14AD5 / 84693
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
	fVar1 = Function_63(iParam0);
	if (Function_62(iParam0) != 19 || Function_62(iParam0) != 17)
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

var Function_309(bool bParam0) //Position: 0x14BB6 / 84918
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
			Function_113(Global_13172[iVar911], &iVar0, &iVar1, &iVar2);
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

var Function_310(bool bParam0) //Position: 0x14CF5 / 85237
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
			Function_113(Global_13172[iVar911], &uVar0, &iVar1, &iVar2);
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

