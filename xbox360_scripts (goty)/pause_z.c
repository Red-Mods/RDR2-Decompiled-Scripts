//Decompiled with MagicRDR v1.0
//Function Count : 197
//Statics Count : 61
//Natives Count : 298
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
	REQUEST_STRING_TABLE("dlc_zombiepack_rcm");
	bVar0 = !Global_34165.f_44;
	bVar1 = true;
	Function_193(&Global_34581, &Global_35278, 0);
	Function_151();
	Function_150();
	UI_EXIT("pauseBounty");
	UI_EXIT("pauseBountyValue");
	UI_EXCLUDE("pauseBounty");
	UI_EXCLUDE("pauseBountyValue");
	UI_EXIT("pauseMoney");
	UI_EXIT("pauseMoneyValue");
	UI_EXCLUDE("pauseMoney");
	UI_EXCLUDE("pauseMoneyValue");
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
	Function_149();
	Function_148();
	iLocal_59 = GET_TARGETED_JOURNAL_ENTRY();
	while (!IS_EXITFLAG_SET())
	{
		if ((bVar1 && (UI_ISFOCUSED("PM_Stats") || UI_ISFOCUSED("PM_Collections"))) && HAS_STRING_TABLE_LOADED("stats"))
		{
			bVar1 = false;
			Function_193(&Global_34581, &Global_35278, 0);
		}
		else if (!(UI_ISFOCUSED("PM_Stats") || UI_ISFOCUSED("PM_Collections")))
		{
			bVar1 = true;
		}
		Function_143();
		if (!Global_88794 && bVar0)
		{
			Function_150();
			bVar0 = false;
		}
		Function_142();
		Function_141();
		Function_98();
		Function_95();
		Function_84();
		Function_55();
		if (bVar2)
		{
			Function_45(&uLocal_29);
		}
		WAIT(false);
	}
	Function_15();
	Function_6();
	if (bVar2)
	{
		Function_5(&uLocal_29);
	}
	REMOVE_STRING_TABLE("stats");
	REMOVE_STRING_TABLE("blips");
	REMOVE_STRING_TABLE("dlc_zombiepack_rcm");
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	if (Function_4())
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

void Function_1(int iParam0, bool bParam1) //Position: 0x2FB / 763
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

void Function_2(int iParam0, int iParam1) //Position: 0x336 / 822
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x349 / 841
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_4() //Position: 0x358 / 856
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_5(var uParam0) //Position: 0x361 / 865
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

void Function_6() //Position: 0x3A0 / 928
{
	int iVar0;
	
	if (Function_4())
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
	if (iVar0 != Global_26303.f_36 && Function_13() != 1)
	{
		Function_7();
	}
	return;
}

int Function_7() //Position: 0x3E0 / 992
{
	vector3 vVar0;
	
	if (Function_13() == 0)
	{
		LOG_ERROR("Attempting to hunt to an invalid bounty hunter target");
		return 0;
	}
	if (StackVal || !Function_12(Global_26303.f_24) != 1)
	{
		LOG_ERROR("Attempting to hunt at an invalid region");
		return 0;
	}
	GET_VOLUME_CENTER(StackVal, &vVar0);
	Function_11();
	Function_9(StackVal, StackVal, vVar0, 4, 131088, 1);
	Function_8(0.7f, 0.0f, 0.0f);
	return 1;
}

void Function_8(var uParam0, var uParam1, bool bParam2) //Position: 0x4A0 / 1184
{
	Global_28185.f_60 = 5;
	Global_28185.f_64 = uParam0;
	Global_28185.f_68 = uParam1;
	Global_28185.f_72 = bParam2;
	return;
}

void Function_9(vector3 vParam0, var uParam3, var uParam4, var uParam5) //Position: 0x4C1 / 1217
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
		Function_10(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = uParam5;
}

void Function_10(bool bParam0) //Position: 0x57D / 1405
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

void Function_11() //Position: 0x5BD / 1469
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

bool Function_12(int iParam0) //Position: 0x5E8 / 1512
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_13() //Position: 0x5FE / 1534
{
	return Function_14(StackVal, 1);
}

bool Function_14(var uParam0, bool bParam1) //Position: 0x60D / 1549
{
	return (uParam0 && bParam1) == 0;
}

void Function_15() //Position: 0x61A / 1562
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
					if (Function_19(iVar0, 0, &bVar1))
					{
						Global_34108[iVar0] = 0;
						UI_CHEAT_SET_VALUE(iVar0, 0);
					}
				}
			}
			else if (iVar2 == 1)
			{
				if (!Function_19(iVar0, 1, &bVar1))
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
				Function_16("no_cheat_mission", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		iVar0++;
	}
	return;
}

void Function_16(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6CD / 1741
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_17(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_17(int iParam0) //Position: 0x748 / 1864
{
	char* cVar0[16];
	
	if (!Function_18())
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

bool Function_18() //Position: 0x787 / 1927
{
	if (Function_14(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_19(int iParam0, bool bParam1, int iParam2) //Position: 0x7A2 / 1954
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	var uVar11;
	
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
				SET_DEADEYE_REGENERATION_RATE(0, (0.25f * 1.25f), 0);
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
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x0000000A:
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x0000000B:
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x0000000C:
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x0000000D:
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x00000013:
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x00000014:
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x00000015:
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x00000016:
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x00000017:
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x0000001D:
			if (bParam1)
			{
				if (((Function_44(0, 0, 1, 1) || Function_40(Global_34573, 0, 0)) || Function_39()) || Global_63096)
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
					SET_WEAPONENUM_LOCKED(18, 0);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 7, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 3, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 11, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 13, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 20, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(Global_34573, 18, 1.0f, 0, 1);
					UI_CHEAT_SET_VALUE(17, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000018:
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x00000008:
			if ((!Function_44(0, 0, 1, 1) && !Global_63096) && !Global_3387)
			{
				if (bParam1)
				{
					if (IS_POPSET_VALID(Global_30750[6]))
					{
						UI_SET_HAS_CHEATED(1);
						bVar1 = Function_38(Global_30750[6], 0, 23, 0);
					}
					else
					{
						bVar1 = 976;
					}
					if (Function_37(bVar1))
					{
						STREAMING_REQUEST_ACTOR(bVar1, true, false);
						GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar2);
						GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar5);
						VSCALE(&vVar2, -7.0f);
						vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar2, vVar5, StackVal) };
						FIND_GROUND_INTERSECTION(&vVar5, 80.0f, &vVar8, &uVar11);
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
						Global_34107 = CREATE_ACTOR_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_36(), bVar1, vVar8, 0.0f, 0.0f, 0.0f);
						ACCESSORIZE_HORSE(Global_34107, 3);
						STREAMING_EVICT_ACTOR(bVar1, 4294967295);
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
			if ((!Function_44(0, 0, 1, 1) && !Global_63096) && !Global_3387)
			{
				if (bParam1)
				{
					UI_SET_HAS_CHEATED(1);
					bVar1 = 1000;
					if (Function_37(bVar1))
					{
						STREAMING_REQUEST_ACTOR(bVar1, true, false);
						GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &vVar2);
						GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar5);
						VSCALE(&vVar2, -7.0f);
						vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar2, vVar5, StackVal) };
						FIND_GROUND_INTERSECTION(&vVar5, 80.0f, &vVar8, &uVar11);
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
						Global_34107 = CREATE_ACTOR_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_36(), bVar1, vVar8, 0.0f, 0.0f, 0.0f);
						ACCESSORIZE_HORSE(Global_34107, 3);
						STREAMING_EVICT_ACTOR(bVar1, 4294967295);
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
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x0000001E:
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x0000001F:
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x00000020:
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x00000021:
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
			}
			break;
		
		case 0x00000022:
			if (bParam1)
			{
				*iParam2 = 1;
				return 0;
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
			if (!Function_44(0, 0, 1, 1))
			{
				if (bParam1)
				{
					if (Function_35(390) != 1)
					{
						UI_SET_HAS_CHEATED(1);
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, false);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_34(390, 3.0f);
						Function_20(390, 1, 1);
						return 1;
					}
				}
				if (Global_25986[2])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					Function_34(390, 3.0f);
					Function_20(390, 3, 1);
					return 1;
				}
				if (Global_25986[1])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
					Function_34(390, 3.0f);
					Function_20(390, 2, 1);
					return 1;
				}
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
				Function_34(390, 3.0f);
				Function_20(390, 1, 1);
				return 1;
			}
			if (bParam1)
			{
				*iParam2 = 1;
			}
			break;
		
		case 0x00000026:
			if (!Function_44(0, 0, 1, 1))
			{
				if (bParam1)
				{
					if (Function_35(390) != 2)
					{
						UI_SET_HAS_CHEATED(1);
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_34(390, 3.0f);
						Function_20(390, 2, 1);
						return 1;
					}
				}
				if (Global_25986[2])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					Function_34(390, 3.0f);
					Function_20(390, 3, 1);
					return 1;
				}
				if (Global_25986[1])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
					Function_34(390, 3.0f);
					Function_20(390, 2, 1);
					return 1;
				}
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
				Function_34(390, 3.0f);
				Function_20(390, 1, 1);
				return 1;
			}
			if (bParam1)
			{
				*iParam2 = 1;
			}
			break;
		
		case 0x00000027:
			if (!Function_44(0, 0, 1, 1))
			{
				if (bParam1)
				{
					if (Function_35(390) != 3)
					{
						UI_SET_HAS_CHEATED(1);
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_34(390, 3.0f);
						Function_20(390, 3, 1);
						return 1;
					}
				}
				if (Global_25986[2])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					Function_34(390, 3.0f);
					Function_20(390, 3, 1);
					return 1;
				}
				if (Global_25986[1])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
					Function_34(390, 3.0f);
					Function_20(390, 2, 1);
					return 1;
				}
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
				Function_34(390, 3.0f);
				Function_20(390, 1, 1);
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
			if (!Function_44(0, 0, 1, 1))
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
			if (!Function_44(0, 0, 1, 1))
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

int Function_20(int iParam0, bool bParam1, bool bParam2) //Position: 0x11B2 / 4530
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
		Function_33(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_32(iParam0);
	if (bParam2)
	{
		Function_21(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x144D / 5197
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_31(390))), 32);
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
					bVar19 = (Function_30(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_30(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_28(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_25(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_22(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_36(), &Var9);
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

var Function_22(int iParam0) //Position: 0x1A7A / 6778
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_23(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1A8B / 6795
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_24(char* cParam0, bool bParam1) //Position: 0x1B80 / 7040
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_25(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1B99 / 7065
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_27(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_26(Function_27(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_26(int iParam0, int iParam1) //Position: 0x1BFE / 7166
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_27(int iParam0, bool bParam1) //Position: 0x1C10 / 7184
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_28(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1C22 / 7202
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
	if (((Function_29(iParam0) != 19 || Function_29(iParam0) != 17) || Function_29(iParam0) != 10) || Function_29(iParam0) != 9)
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

int Function_29(int iParam0) //Position: 0x1D52 / 7506
{
	return Global_35278[iParam020].f_48;
}

float Function_30(int iParam0) //Position: 0x1D61 / 7521
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_31(int iParam0) //Position: 0x1D9A / 7578
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_32(int iParam0) //Position: 0x1DD7 / 7639
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

int Function_33(int iParam0, bool bParam1, bool bParam2) //Position: 0x1F71 / 8049
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

int Function_34(int iParam0, int iParam1) //Position: 0x21B5 / 8629
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_35(bool bParam0) //Position: 0x21F5 / 8693
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

var Function_36() //Position: 0x2236 / 8758
{
	int iVar0;
	
	return iVar0;
}

bool Function_37(bool bParam0) //Position: 0x223E / 8766
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_38(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2255 / 8789
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam1, bParam2, bParam3, 0, 0.0f, 0.0f, 0.0f);
}

var Function_39() //Position: 0x226C / 8812
{
	return Global_34578 != 1;
}

int Function_40(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2277 / 8823
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
	if (Function_43(bParam0))
	{
		return 1;
	}
	if (Function_42(bParam0))
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
	if (Function_41())
	{
		return 1;
	}
	return 0;
}

bool Function_41() //Position: 0x232D / 9005
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_42(bool bParam0) //Position: 0x2344 / 9028
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_43(bool bParam0) //Position: 0x234F / 9039
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

bool Function_44(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x235D / 9053
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

void Function_45(int iParam0) //Position: 0x2401 / 9217
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	
	if (Function_4())
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
			Function_54(iParam0, iParam0->f_68);
			REFERENCE_OBJECT(iParam0->f_64);
			iParam0->f_68 = "";
			Function_53(iParam0);
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
		iParam0->f_68 = Function_52(iParam0);
		if (IS_OBJECT_VALID(iParam0->f_68))
		{
			STREAMING_UNLOAD_SCENE();
			GET_OBJECT_POSITION(iParam0->f_68, &vVar11);
			GET_OBJECT_ORIENTATION(iParam0->f_68, &vVar14);
			STREAMING_LOAD_SCENE_EXT(vVar11, vVar14, 1);
			iParam0->f_72 = fVar0;
			Function_50(iParam0, Function_51());
			Function_53(iParam0);
		}
	}
	Function_47(iParam0, fVar0);
	if (Function_46(StackVal, StackVal, *(iParam0 + 24)))
	{
	}
	if (Function_46(StackVal, StackVal, *(iParam0 + 36)))
	{
	}
	return;
}

bool Function_46(vector3 vParam0) //Position: 0x258D / 9613
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_47(var uParam0, int iParam1) //Position: 0x25A5 / 9637
{
	Function_49(uParam0);
	Function_48(uParam0);
	uParam0->f_48 = iParam1;
	return;
}

void Function_48(int iParam0) //Position: 0x25BB / 9659
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 36) };
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 80), vVar0, StackVal) };
	SET_CAMERA_TARGET_POSITION(iParam0->f_60, vVar0, 0);
	return;
}

void Function_49(int iParam0) //Position: 0x25E6 / 9702
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(iParam0->f_64, iParam0 + 24);
	GET_OBJECT_AXIS(iParam0->f_64, &vVar0, 2);
	VNORMALIZE(&vVar0);
	VSCALE(&vVar0, -30.0f);
	*(iParam0 + 36) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, *(iParam0 + 24), StackVal) };
	return;
}

void Function_50(int iParam0, var uParam1) //Position: 0x2623 / 9763
{
	int iVar0;
	
	iParam0->f_64 = uParam1;
	iParam0->f_76 = GET_PROFILE_TIME();
	iVar0 = 31;
	ADD_CAMERA_COLLISION_EXCLUSION(iParam0->f_60, iParam0->f_64, iVar0);
	return;
}

var Function_51() //Position: 0x2647 / 9799
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_52(int iParam0) //Position: 0x265C / 9820
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

void Function_53(int iParam0) //Position: 0x26F3 / 9971
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

void Function_54(var uParam0, bool bParam1) //Position: 0x2741 / 10049
{
	if (IS_OBJECT_VALID(bParam1))
	{
		Function_50(uParam0, bParam1);
		Function_53(uParam0);
	}
	return;
}

int Function_55() //Position: 0x275B / 10075
{
	bool bVar0;
	
	Function_83(0);
	if (!IS_ITERATOR_VALID(Global_26149))
	{
		return 0;
	}
	bVar0 = START_OBJECT_ITERATOR(Global_26149);
	while (IS_OBJECT_VALID(bVar0))
	{
		Function_56(GET_EVENT_FROM_OBJECT(bVar0));
		bVar0 = OBJECT_ITERATOR_NEXT(Global_26149);
	}
	return 0;
}

void Function_56(bool bParam0) //Position: 0x2795 / 10133
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[64];
	char* cVar19[64];
	bool bVar35;
	
	if (!IS_EVENT_VALID(bParam0))
	{
		return;
	}
	bVar35 = GET_EVENT_TYPE(bParam0);
	switch (bVar35)
	{
		case 0x00000063:
			break;
		
		case 0x00000067:
			if (!DECOR_CHECK_EXIST(bParam0, "IdHash"))
			{
				return;
			}
			bVar0 = DECOR_GET_INT(bParam0, "IdHash");
			iVar2 = 0;
			while (iVar2 <= (Global_27774 - 1))
			{
				if (Function_82(iVar2))
				{
					if (Function_80(iVar2))
					{
						strcpy(&cVar3, "out_", 64);
						stradd(&cVar3, &Global_27774[iVar213] + 32, 64);
						if (STRING_TO_HASH(&cVar3) == bVar0)
						{
							if (!Global_28178 != iVar2)
							{
								if (Function_77(iVar2, 1, 0))
								{
									bVar1 = true;
								}
							}
						}
					}
				}
				iVar2++;
			}
			UI_POP("PauseMenuScene");
			if (bVar1)
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			break;
		
		case 0x0000006A:
			if (!DECOR_CHECK_EXIST(bParam0, "IdHash"))
			{
				return;
			}
			bVar0 = DECOR_GET_INT(bParam0, "IdHash");
			iVar2 = 0;
			while (iVar2 <= Global_27774)
			{
				if (Global_27774[iVar213] != 4294967295)
				{
					strcpy(&cVar3, "out_", 64);
					stradd(&cVar3, &Global_27774[iVar213] + 32, 64);
					if (STRING_TO_HASH(&cVar3) == bVar0)
					{
						if (Function_80(iVar2))
						{
							strcpy(&cVar19, UI_GET_STRING("out_wares_complete"), 64);
						}
						else if (Function_82(iVar2))
						{
							strcpy(&cVar19, INT_TO_STRING(Global_27774[iVar213].f_24), 64);
							stradd(&cVar19, " / ", 64);
							stradd(&cVar19, INT_TO_STRING(Global_27774[iVar213].f_28), 64);
							stradd(&cVar19, UI_GET_STRING("out_wares_collect"), 64);
						}
						else
						{
							strcpy(&cVar19, UI_GET_STRING("Common_Null"), 64);
						}
						UI_SET_STRING("OutfitInfo_Scraps", &cVar19);
						UI_REFRESH("OutfitPanel");
					}
				}
				iVar2++;
			}
			break;
		
		case 0x00000068:
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
			bVar0 = DECOR_GET_INT(bParam0, "Type");
			break;
		
		case 0x0000006F:
			if (!DECOR_CHECK_EXIST(bParam0, "Type"))
			{
				return;
			}
			bVar0 = DECOR_GET_INT(bParam0, "Type");
			bVar0 = bVar0;
			Function_57(bVar0);
			break;
	}
	return;
}

void Function_57(int iParam0) //Position: 0x2A0F / 10767
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
				Function_58(&iVar2, iParam0);
			}
			iVar1++;
		}
	}
	return;
}

void Function_58(int iParam0, int iParam1) //Position: 0x2A4E / 10830
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
	
	iVar0 = Function_76(iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (!Global_84611[iVar0140].f_68)
		{
			strcpy(&Var2, "SC_AA", 32);
			Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var2, "_SP") };
			if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nAAID"))
			{
				bVar1 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nAAID");
			}
			Function_68(iParam0);
			Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var2, "_") };
			Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var2, I2STR(bVar1)) };
			Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var2, "_obj1") };
			Var34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var2, "_obj2") };
			Var42 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var2, "_obj3") };
			Var50 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var2, "_globalName") };
			Var58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var2, "_friendName") };
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
					Function_65(iParam0, iVar0, 4, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_TheBest");
					break;
				
				case 0x00000002:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, &Var58);
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_TheirBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_65(iParam0, iVar0, 1, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_Dyn_ScoreLabel");
					break;
				
				case 0x00000001:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, &Var50);
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_TheBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_65(iParam0, iVar0, 0, 2);
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
			Function_61(iParam0);
			Var67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var67, "_") };
			Var67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var67, I2STR(bVar66)) };
			Var83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var67, "_obj1") };
			Var91 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var67, "_globalName") };
			Var99 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var67, "_friendName") };
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
					Function_59(iParam0, iVar0, 4, 2);
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
					Function_59(iParam0, iVar0, 1, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_Dyn_ScoreLabel");
					break;
				
				case 0x00000001:
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 0, &Var91);
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 1, "SClubStat_TheBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(*iParam0, 3, "Common_Null");
					Function_59(iParam0, iVar0, 0, 2);
					UI_BUTTON_SET_TEXT("scps_filter", "SClubStat_TheirBest");
					break;
				}
			}
	}
	return;
}

void Function_59(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x3292 / 12946
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
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "_count") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "_compare") };
	Function_60(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, (*&Global_84611[iParam1140] + 144)[iParam212], Var17);
	Function_60(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0, (*&Global_84611[iParam1140] + 144)[iParam312], Var9);
	UI_CHALLENGE_SET_TIME_INFO(*iParam0, 0, &Var17);
	UI_CHALLENGE_SET_TIME_INFO(*iParam0, 1, &Var9);
}

void Function_60(char* cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x3357 / 13143
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

void Function_61(int iParam0) //Position: 0x33A7 / 13223
{
	int iVar0;
	
	iVar0 = Function_76(iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (Global_84611[iVar0140].f_68)
		{
			Function_62(*iParam0);
		}
	}
	return;
}

void Function_62(char* cParam0) //Position: 0x33D4 / 13268
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
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64(&Var1, "_locked", "") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "_des") };
	if (Function_4())
	{
		UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var9);
		UI_CHALLENGE_SET_TROPHY_TYPE(cParam0, 8);
	}
	else if (SC_CHALLENGE_GET_COMMUNITY_VALUE(cParam0) > SC_CHALLENGE_GET_COMMUNITY_TOTAL(cParam0))
	{
		Function_63(cParam0);
	}
	else
	{
		UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var17);
		UI_CHALLENGE_SET_TROPHY_TYPE(cParam0, 4);
	}
	return;
}

void Function_63(char* cParam0) //Position: 0x348A / 13450
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nCCID");
	}
	strcpy(&Var1, "SC_community", 32);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "n_complete") };
	UI_CHALLENGE_SET_TROPHY_TYPE(cParam0, 8);
	UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var9);
	return;
}

struct<32> Function_64(char* cParam0, char* cParam1, bool bParam2) //Position: 0x3503 / 13571
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, bParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_65(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x3522 / 13602
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	int iVar33;
	
	strcpy(&Var1, "SC_AA", 32);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nAAID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "n_bestTime") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "_compareTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66((*&Global_84611[iParam1140] + 144)[iParam212]) };
	UI_SET_STRING(&Var17, &Var25);
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66((*&Global_84611[iParam1140] + 144)[iParam312]) };
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

struct<32> Function_66(var uParam0) //Position: 0x366D / 13933
{
	char* cVar0[32];
	int iVar8;
	int iVar9;
	bool bVar10;
	struct<13> Var11;
	
	Var11 = { StackVal, StackVal, StackVal, Function_67(uParam0) };
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

struct<16> Function_67(var uParam0) //Position: 0x36ED / 14061
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

void Function_68(int iParam0) //Position: 0x375E / 14174
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;
	bool bVar17;
	
	iVar0 = Function_76(iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (!Global_84611[iVar0140].f_68)
		{
			strcpy(&Var9, "SC_AA", 32);
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var9, "_SP") };
			if (SC_CHALLENGE_IS_VAR_VALID(*iParam0, "nAAID"))
			{
				bVar17 = SC_CHALLENGE_GET_VAR_INT(*iParam0, "nAAID");
			}
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var9, "_") };
			Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var9, I2STR(bVar17)) };
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var9, "_times") };
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
			Function_75(*iParam0, (*&Global_84611[iVar0140] + 144)[412], (*&Global_84611[iVar0140] + 144)[312], (*&Global_84611[iVar0140] + 144)[212]);
			UI_CHALLENGE_SET_TROPHY_TYPE(*iParam0, Function_74(*iParam0));
			if (!Function_73(*iParam0) || !NET_MAILBOX_IS_SIGNED_INTO_SC())
			{
				UI_CHALLENGE_SET_TROPHY_TYPE(*iParam0, 8);
			}
			Function_69(*iParam0);
		}
	}
	return;
}

void Function_69(int iParam0) //Position: 0x38C3 / 14531
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	if (SC_CHALLENGE_IS_VAR_VALID(iParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(iParam0, "nAAID");
	}
	iVar2 = Function_76(&iParam0);
	if (iVar2 >= 4294967295)
	{
		if (!Function_72())
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_30(464) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000001:
					if (Function_30(459) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000002:
					if (Function_30(463) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000003:
					if (Function_30(462) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000004:
					if (Function_30(466) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000005:
					if (Function_30(460) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000006:
					if (Function_30(465) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000007:
					if (Function_30(461) < 0.0f)
					{
						if (!Global_84611[iVar2140].f_80)
						{
							Global_84611[iVar2140].f_80 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000008:
					if (Function_70(Global_30717[0]))
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

bool Function_70(int iParam0) //Position: 0x3AF2 / 15090
{
	if (!Function_12(iParam0))
	{
		return 0;
	}
	return Function_71(&(Global_29008[iParam0]), 4096);
}

bool Function_71(int iParam0, int iParam1) //Position: 0x3B10 / 15120
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_72() //Position: 0x3B2C / 15148
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
			iVar3 = Function_76(&iVar2);
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

bool Function_73(char* cParam0) //Position: 0x3B7B / 15227
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
			return Function_30(464) < 0.0f;
			break;
		
		case 0x00000001:
			return Function_30(459) < 0.0f;
			break;
		
		case 0x00000002:
			return Function_30(463) < 0.0f;
			break;
		
		case 0x00000003:
			return Function_30(462) < 0.0f;
			break;
		
		case 0x00000004:
			return Function_30(466) < 0.0f;
			break;
		
		case 0x00000005:
			return Function_30(460) < 0.0f;
			break;
		
		case 0x00000006:
			return Function_30(465) < 0.0f;
			break;
		
		case 0x00000007:
			return Function_30(461) < 0.0f;
			break;
		
		case 0x00000008:
			return Function_70(Global_30717[0]);
			break;
		
		case 0x00000009:
			return StackVal < 3;
			break;
	}
	return iVar1;
}

int Function_74(int iParam0) //Position: 0x3C63 / 15459
{
	int iVar0;
	
	iVar0 = Function_76(&iParam0);
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

void Function_75(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3CCA / 15562
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
	
	iVar81 = Function_76(&iParam0);
	strcpy(&Var1, "SC_AA", 32);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(iParam0, "nAAID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, I2STR(bVar0)) };
	Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "_locked") };
	Var49 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64(&Var1, "_NotSignedDes", "") };
	Var57 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64(&Var1, "_LockedNotInSP", "") };
	Var65 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "_des") };
	Var73 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "_unlock") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "n_currTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "n_lastTime") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&Var1, "n_bestTime") };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66(uParam1) };
	UI_SET_STRING(&Var17, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66(uParam2) };
	UI_SET_STRING(&Var25, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66(uParam3) };
	UI_SET_STRING(&Var33, &Var9);
	if (!NET_MAILBOX_IS_SIGNED_INTO_SC())
	{
		UI_CHALLENGE_SET_DESCRIPTION(iParam0, &Var49);
	}
	else if (Function_4())
	{
		UI_CHALLENGE_SET_DESCRIPTION(iParam0, &Var57);
	}
	else if (Function_73(iParam0))
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

var Function_76(int iParam0) //Position: 0x3E74 / 15988
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

bool Function_77(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3EA6 / 16038
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
		Function_78(bParam0, 8192);
	}
	DECOR_SET_BOOL(Global_34573, "playerChangeOutfits", true);
	return 1;
}

void Function_78(bool bParam0, int iParam1) //Position: 0x3F38 / 16184
{
	if (!Function_79(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_79(int iParam0) //Position: 0x3F8D / 16269
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_80(int iParam0) //Position: 0x3FA3 / 16291
{
	if (!Function_79(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_81(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_81(int iParam0, int iParam1) //Position: 0x3FF4 / 16372
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

bool Function_82(int iParam0) //Position: 0x4022 / 16418
{
	if (!Function_79(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_81(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_83(bool bParam0) //Position: 0x4074 / 16500
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

int Function_84() //Position: 0x40E5 / 16613
{
	if (Function_85(&Global_28210))
	{
		return 1;
	}
	if (Function_85(&Global_28185))
	{
		return 1;
	}
	if (Function_85(&Global_28235))
	{
		return 1;
	}
	return 0;
}

bool Function_85(int iParam0) //Position: 0x4113 / 16659
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
				Function_10(iParam0->f_12);
				CLEAN_OBJECTSET(iParam0->f_12);
			}
			if (FIND_TRAFFIC_PATH(StackVal, iParam0->f_12, &Global_34574, iParam0 + 24, iParam0->f_16, iParam0 + 20))
			{
				*(iParam0 + 80) = { StackVal, StackVal, Global_34574 };
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_91(StackVal, StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_12)), *(iParam0 + 24), 0x41200000, 0, 0x3f800000, 1) };
				Function_90(&Var3);
				*(iParam0 + 48) = { StackVal, StackVal, Function_90(&Var3) };
				Function_89(iParam0->f_60, &uVar0, &uVar1, &uVar2);
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
					if (StackVal || Function_88(StackVal, StackVal, StackVal, (StackVal || Function_88(StackVal, StackVal, StackVal, Function_88(StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), Global_34574) > 15.0f, *(iParam0 + 48), Global_34574) > 15.0f), *(iParam0 + 36), Global_34574) > 15.0f)
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
				Function_87();
			}
			else if (*iParam0 == 2)
			{
				Function_86();
			}
			else
			{
				Function_11();
			}
			if (IS_OBJECTSET_VALID(iParam0->f_12))
			{
				Function_10(iParam0->f_12);
				CLEAN_OBJECTSET(iParam0->f_12);
			}
			iParam0->f_4 = 0;
			*iParam0 = 0;
			break;
	}
	return 0;
}

void Function_86() //Position: 0x43DE / 17374
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

void Function_87() //Position: 0x4409 / 17417
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

float Function_88(vector3 vParam0, vector3 vParam3) //Position: 0x4434 / 17460
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_89(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4451 / 17489
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

vector3 Function_90(bool bParam0) //Position: 0x4541 / 17729
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_91(bool bParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, int iParam7) //Position: 0x4560 / 17760
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
	Function_90(&Var1);
	bVar20 = VDIST(Function_90(&Var1), vParam1);
	Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
	while (Var1.f_12 >= fParam6 && !bVar0)
	{
		Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		UNK_0x19D652F9(bParam0, FABS(bParam4), &Var7, &Var1);
		Function_90(&Var1);
		bVar21 = VDIST(Function_90(&Var1), vParam1);
		if (bVar21 > bVar20)
		{
			bVar20 = bVar21;
			Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		}
		if (Function_94(&Var1))
		{
			bVar0 = true;
		}
	}
	if (iParam7 < 1 && bParam4 < 1.0f)
	{
		UNK_0x19D652F9(bParam0, (bParam4 / 2.0f), &Var13, &Var1);
		UNK_0x19D652F9(bParam0, (-1.0f * (bParam4 / 2.0f)), &Var13, &Var7);
		return StackVal, StackVal, StackVal, StackVal, StackVal, Function_91(StackVal, StackVal, bParam0, vParam1, (bParam4 / 10.0f), Function_93(Var7.f_12, Var1.f_12), Function_92(Var7.f_12, Var1.f_12), (iParam7 - 1));
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var13;
}

var Function_92(int iParam0, int iParam1) //Position: 0x464E / 17998
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_93(int iParam0, int iParam1) //Position: 0x4661 / 18017
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_94(int iParam0) //Position: 0x4674 / 18036
{
	if (iParam0->f_12 > 0.001f || iParam0->f_12 < 0.999f)
	{
		return 1;
	}
	return 0;
}

void Function_95() //Position: 0x4695 / 18069
{
	vector3 vVar0;
	
	if (GET_USER_DEFINED_WAYPOINT(&vVar0))
	{
		vVar0.f_4 = 25.0f;
		if (!Function_97(StackVal, StackVal, StackVal, StackVal, vVar0, *(&Global_28210 + 36)))
		{
			Function_96(StackVal, StackVal, vVar0);
		}
	}
	else if (StackVal != 2 && Global_28210 != 1)
	{
		if (IS_USER_DEFINED_WAYPOINT_CLEARED())
		{
			Function_87();
		}
	}
	return;
}

void Function_96(vector3 vParam0) //Position: 0x46E1 / 18145
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
		Function_10(Global_28210.f_12);
		CLEAN_OBJECTSET(Global_28210.f_12);
	}
	Global_28210.f_92 = 1;
	Global_28210.f_96 = 1;
	return;
}

bool Function_97(vector3 vParam0, vector3 vParam3) //Position: 0x4768 / 18280
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_98() //Position: 0x4795 / 18325
{
	int iVar0;
	
	iVar0 = GET_TARGETED_JOURNAL_ENTRY();
	if (iVar0 != iLocal_59)
	{
		Function_140(iLocal_59);
		Function_99(iVar0);
		iLocal_59 = iVar0;
	}
	return;
}

void Function_99(int iParam0) //Position: 0x47B5 / 18357
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
	if (Function_4())
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
	Function_140(GET_TARGETED_JOURNAL_ENTRY());
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
				if (Function_82(iVar6) && !Function_80(iVar6))
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
				Function_139();
			}
			else if (iVar5 != Global_28180)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
				{
					Function_138(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
			{
				Function_134();
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
				if (!Function_14(Global_63541[iVar155].f_144, 2048))
				{
					iVar3 = iVar1;
					if (Function_113(&(Global_63541[iVar155]), iVar3))
					{
						Function_3(&Global_63541[iVar155] + 144, 64);
						Function_109(&(Global_63541[iVar155]), iVar3);
						if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
						{
							DESTROY_OBJECT(Global_63541[iVar155].f_192);
							Function_100(&(Global_63541[iVar155]), 7);
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

void Function_100(int iParam0, int iParam1) //Position: 0x4957 / 18775
{
	float fVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_14(iParam0->f_144, 2048) || Global_3380) || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return;
	}
	fVar0 = iParam0->f_96;
	iParam0->f_192 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Global_63535, Function_36(), *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, 0, Global_34573, iParam1, iParam0->f_92, 0, 1, 1);
	Function_101(iParam0);
	bVar1 = GATEWAY_GET_MARKER(iParam0->f_192);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

void Function_101(int iParam0) //Position: 0x4A11 / 18961
{
	float fVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		return;
	}
	iParam0->f_216 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_36(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	fVar0 = 20.0f;
	if (Function_12(iParam0->f_132))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	bVar1 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_216, Function_36(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0);
	DECOR_SET_INT(bVar1, "category", 512);
	Function_102(&bVar1, 0);
	return;
}

int Function_102(var uParam0, int iParam1) //Position: 0x4AB3 / 19123
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
	Function_105(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_103(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_103(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x4C14 / 19476
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_104("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

struct<32> Function_104(bool bParam0) //Position: 0x4CAF / 19631
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
			memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("0", &Var8, ""), 4);
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

int Function_105(bool bParam0) //Position: 0x4D19 / 19737
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
						Function_108(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_106(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_108(iVar0);
						}
					}
					else if (Function_106(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_108(iVar0);
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
			Function_108(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_106(bool bParam0, vector3 vParam1) //Position: 0x4E7A / 20090
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_107(bParam0);
		vVar0 = { StackVal, StackVal, Function_107(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_107(bool bParam0) //Position: 0x4EF4 / 20212
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

void Function_108(int iParam0) //Position: 0x4F5E / 20318
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

void Function_109(int iParam0, int iParam1) //Position: 0x4FBF / 20415
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 112) };
	vVar0.f_4 = (vVar0.y + 0.5f);
	fVar3 = 1.0f;
	fVar4 = 50.0f;
	if (((StackVal && Function_111(StackVal, Function_112(iParam1), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_110(iParam1)) || Global_74542[iParam110].f_12 != 1)
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

int Function_110(bool bParam0) //Position: 0x5104 / 20740
{
	if ((Global_74542[bParam010] != 3 || Global_74542[bParam010] != 4) || Global_74542[bParam010] != 5)
	{
		return 1;
	}
	return 0;
}

var Function_111(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x5130 / 20784
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

bool Function_112(int iParam0) //Position: 0x514C / 20812
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_113(int iParam0, int iParam1) //Position: 0x5161 / 20833
{
	if (Function_14(Global_63541[iParam155].f_144, 64))
	{
		return 1;
	}
	if (Function_112(iParam1))
	{
		Function_3(&Global_63541[iParam155] + 144, 64);
		return 1;
	}
	if ((Function_133(iParam1) || Function_132(iParam1)) || Function_131(iParam1))
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
	if (Function_12(iParam0->f_132))
	{
		if (Function_71(&(Global_29008[iParam0->f_132]), 256))
		{
			return 0;
		}
	}
	if (Function_123(iParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!((((Global_63096 || Global_3384) || Global_3369) || iParam0->f_152) || GET_ACTOR_INVULNERABILITY(iParam0->f_204)))
		{
			if (!Function_122(iParam0))
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
	if (!Function_114(iParam0, iParam1))
	{
		return 0;
	}
	Function_3(&Global_63541[iParam155] + 144, 64);
	return 1;
}

bool Function_114(int iParam0, int iParam1) //Position: 0x5276 / 21110
{
	int iVar0;
	
	if (!iParam0->f_172 != 0)
	{
		if (Function_121(iParam0 + 172, 4))
		{
			if (!Function_120(iParam1))
			{
				return 0;
			}
		}
		if (Function_121(iParam0 + 172, 1))
		{
			if (!Function_132(iParam0->f_168))
			{
				return 0;
			}
		}
		if (Function_121(iParam0 + 172, 2) && Global_3365)
		{
			iVar0 = Function_118(iParam0->f_176);
			if (Function_115(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_121(iParam0 + 172, 8) && Global_3365)
		{
			if (Function_115(iParam0->f_164))
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
				if (!Function_121(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_121(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_121(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_121(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_121(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_121(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_115(int iParam0) //Position: 0x53BA / 21434
{
	if (!Function_117(iParam0))
	{
		return 0;
	}
	if (!Function_116(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_116(int iParam0) //Position: 0x53DE / 21470
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_117(int iParam0) //Position: 0x53F3 / 21491
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_118(int iParam0) //Position: 0x540A / 21514
{
	if (!Function_119(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_119(int iParam0) //Position: 0x5424 / 21540
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_120(int iParam0) //Position: 0x543A / 21562
{
	return StackVal;
}

bool Function_121(var uParam0, int iParam1) //Position: 0x544A / 21578
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_122(int iParam0) //Position: 0x5466 / 21606
{
	if (!iParam0->f_152)
	{
		if (Function_18())
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

bool Function_123(int iParam0) //Position: 0x550A / 21770
{
	if (!Function_130(1048576) || Global_3381)
	{
		return 1;
	}
	if (!Function_14(Global_63541[iParam055].f_144, 32768))
	{
		if ((Global_3403 || Global_3405) || Global_3404)
		{
			if (!Function_129(Global_76847, 0x8000000))
			{
				Function_124(Global_34573, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

void Function_124(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5563 / 21859
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_126(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_125(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_125(char* cParam0, int iParam1) //Position: 0x55CF / 21967
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

bool Function_126(bool bParam0, var uParam1, int iParam2) //Position: 0x5606 / 22022
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
		if (Function_128(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_127(uVar0))
		{
			case 0x00000002:
				if (!Function_129(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_127(char* cParam0) //Position: 0x567E / 22142
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

int Function_128(int iParam0) //Position: 0x571F / 22303
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

bool Function_129(var uParam0, int iParam1) //Position: 0x575C / 22364
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_130(int iParam0) //Position: 0x576F / 22383
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_131(int iParam0) //Position: 0x578B / 22411
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_132(int iParam0) //Position: 0x57A0 / 22432
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_133(int iParam0) //Position: 0x57B5 / 22453
{
	if (Global_74542[iParam010] == 0)
	{
		return 1;
	}
	return 0;
}

void Function_134() //Position: 0x57CA / 22474
{
	if (Function_79(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_137(Global_28180);
			Global_28180.f_8 = Function_135(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_137(Global_28180);
			Global_28180.f_8 = Function_135(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_135(int iParam0, int iParam1) //Position: 0x5845 / 22597
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
					if (Function_136(6, 0) || Function_136(12, 0))
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
					if (Function_132(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_136(5, 0))
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
					if (Function_132(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_132(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_132(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_132(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_136(26, 0))
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
					if (Function_132(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_132(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_132(27) && iVar18)
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
					if (Function_132(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_132(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_132(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_132(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_136(17, 0) && iVar15)
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
					if (Function_132(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_136(6, 0) && Function_132(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_132(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_136(9, 0) && Function_132(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_132(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_136(8, 0) && iVar19)
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
	if (Function_46(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_46(StackVal, StackVal, vVar3))
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
	if (!Function_46(StackVal, StackVal, vVar3))
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

bool Function_136(int iParam0, bool bParam1) //Position: 0x6436 / 25654
{
	int iVar0;
	
	iVar0 = Function_118(iParam0);
	if (!Function_117(iVar0))
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

int Function_137(int iParam0) //Position: 0x6473 / 25715
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

int Function_138(int iParam0) //Position: 0x64C2 / 25794
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
	if (!Function_82(iParam0))
	{
		return 0;
	}
	Global_28180 = iParam0;
	Global_28180.f_12 = 1;
	return 1;
}

void Function_139() //Position: 0x652B / 25899
{
	Global_28180 = 4294967295;
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	Global_28180.f_12 = 1;
	return;
}

void Function_140(int iParam0) //Position: 0x654E / 25934
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
			Function_139();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_141() //Position: 0x6588 / 25992
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
				Function_68(&iVar2);
				Function_58(&iVar2, 0);
			}
			iVar1++;
		}
	}
	return;
}

void Function_142() //Position: 0x65DF / 26079
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

void Function_143() //Position: 0x6665 / 26213
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
			Function_144();
		}
		else
		{
			Global_88794 = 0;
		}
	}
	return;
}

void Function_144() //Position: 0x66B0 / 26288
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_147();
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
					if (Function_146(iVar1, iVar0))
					{
						Global_84611[iVar0140].f_76 = 1;
					}
				}
				else if (Function_145(iVar1, iVar0))
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

bool Function_145(int iParam0, int iParam1) //Position: 0x672A / 26410
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

bool Function_146(int iParam0, int iParam1) //Position: 0x6AEC / 27372
{
	var uVar0[67];
	var uVar68[67];
	var uVar136[67];
	
	if (Function_14(Global_88819[iParam1], 2))
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
				if (Function_14(Global_88819[iParam1], 1))
				{
					if (!Function_14(Global_88819[iParam1], 2))
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

void Function_147() //Position: 0x6CBC / 27836
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

void Function_148() //Position: 0x6D70 / 28016
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

void Function_149() //Position: 0x6E76 / 28278
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && Global_29155[iVar010].f_28 == 4294967295 == 1) == 2) == 0)
		{
			SET_REGION_VISITED(Global_29155[iVar010].f_28, 1);
		}
		iVar0++;
	}
	return;
}

void Function_150() //Position: 0x6ECF / 28367
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
				Function_68(&uVar2);
				Function_58(&uVar2, 0);
			}
			iVar1++;
		}
	}
	return;
}

void Function_151() //Position: 0x6F12 / 28434
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[32];
	int iVar17;
	bool bVar18;
	
	if (Function_4())
	{
		return;
	}
	if (Function_82(15) && !Function_80(15))
	{
		Function_192(15, 2);
	}
	if (Function_82(13) && !Function_80(13))
	{
		Function_192(13, 2);
	}
	if (Function_82(14) && !Function_80(14))
	{
		Function_192(14, 2);
	}
	iVar0 = 0;
	while (iVar0 <= Global_27774)
	{
		if (Global_27774[iVar013] != 4294967295)
		{
			Function_157(iVar0);
			if (Function_153(iVar0))
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
					Function_139();
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
				if (Function_82(iVar0))
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
				else if (Function_152(iVar0))
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
	return;
}

bool Function_152(int iParam0) //Position: 0x70DF / 28895
{
	if (!Function_79(iParam0))
	{
		LOG_ERROR("Attempting to check state of invalid outfit");
		return 0;
	}
	if (Function_81(iParam0, 8))
	{
		return 1;
	}
	return 0;
}

bool Function_153(int iParam0) //Position: 0x712E / 28974
{
	int iVar0;
	
	if (Function_79(iParam0))
	{
		if (Function_82(iParam0) && !Function_80(iParam0))
		{
			iVar0 = Function_137(iParam0);
			switch (iParam0)
			{
				case 0x00000004:
					switch (iVar0)
					{
						case 0x00000001:
							return 1;
							break;
						
						case 0x00000002:
							if (Function_136(6, 0) || Function_136(12, 0))
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
							if (Function_132(13))
							{
								if (Function_154(&(Global_63541[1455]), 14, 1, 1) && !Function_131(14))
								{
									return 1;
								}
								return 0;
							}
							if (Function_132(12))
							{
								if ((Function_154(&(Global_63541[1355]), 13, 1, 1) && !Function_131(13)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1355].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_132(11))
							{
								if ((Function_154(&(Global_63541[1255]), 12, 1, 1) && !Function_131(12)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1255].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_132(10))
							{
								if ((Function_154(&(Global_63541[1155]), 11, 1, 1) && !Function_131(11)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1155].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_136(5, 0))
							{
								if (Function_154(&(Global_63541[1055]), 10, 1, 1) && !Function_131(10))
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
							if (Function_132(26))
							{
								if (Function_154(&(Global_63541[2755]), 27, 1, 1) && !Function_131(27))
								{
									return 1;
								}
								return 0;
							}
							if (Function_132(25))
							{
								if (Function_154(&(Global_63541[2655]), 26, 1, 1) && !Function_131(26))
								{
									return 1;
								}
								return 0;
							}
							if (Function_132(24))
							{
								if (Function_154(&(Global_63541[2555]), 25, 1, 1) && !Function_131(25))
								{
									return 1;
								}
								return 0;
							}
							if (Function_132(23))
							{
								if (Function_154(&(Global_63541[2455]), 24, 1, 1) && !Function_131(24))
								{
									return 1;
								}
								return 0;
							}
							if (Function_136(26, 0))
							{
								if (Function_154(&(Global_63541[2355]), 23, 1, 1) && !Function_131(23))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000008:
							if (Function_132(55))
							{
								if ((Function_154(&(Global_63541[5655]), 56, 1, 1) && !Function_131(56)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5655].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_132(54))
							{
								if ((Function_154(&(Global_63541[5555]), 55, 1, 1) && !Function_131(55)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5555].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_132(27))
							{
								if (Function_154(&(Global_63541[5455]), 54, 1, 1) && !Function_131(54))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_136(41, 0))
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
							if (Function_132(52))
							{
								if ((Function_154(&(Global_63541[5355]), 53, 1, 1) && !Function_131(53)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5355].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_132(51))
							{
								if (Function_154(&(Global_63541[5255]), 52, 1, 1) && !Function_131(52))
								{
									return 1;
								}
								return 0;
							}
							if (Function_132(50))
							{
								if (Function_154(&(Global_63541[5155]), 51, 1, 1) && !Function_131(51))
								{
									return 1;
								}
								return 0;
							}
							if (Function_132(49))
							{
								if (Function_154(&(Global_63541[5055]), 50, 1, 1) && !Function_131(50))
								{
									return 1;
								}
								return 0;
							}
							if (Function_136(17, 0))
							{
								if (Function_154(&(Global_63541[4955]), 49, 1, 1) && !Function_131(49))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_136(57, 0))
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
							if (Function_132(19))
							{
								if (Function_154(&(Global_63541[2055]), 20, 1, 1) && !Function_131(20))
								{
									return 1;
								}
								return 0;
							}
							if (Function_132(18))
							{
								if ((Function_154(&(Global_63541[1955]), 19, 1, 1) && !Function_131(19)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1955].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_132(17))
							{
								if (Function_154(&(Global_63541[1855]), 18, 1, 1) && !Function_131(18))
								{
									return 1;
								}
								return 0;
							}
							if (Function_132(16))
							{
								if ((Function_154(&(Global_63541[1755]), 17, 1, 1) && !Function_131(17)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1755].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_132(15))
							{
								if (Function_154(&(Global_63541[1655]), 16, 1, 1) && !Function_131(16))
								{
									return 1;
								}
								return 0;
							}
							if (Function_136(8, 0))
							{
								if (Function_154(&(Global_63541[1555]), 15, 1, 1) && !Function_131(15))
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

int Function_154(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x7700 / 30464
{
	if (!iParam0->f_172 != 0)
	{
		if (Function_121(iParam0 + 172, 4))
		{
			if (!Function_120(iParam1))
			{
				return 0;
			}
		}
		if (Function_121(iParam0 + 172, 1))
		{
			if (Global_63541[iParam0->f_16855].f_20 != Global_63541[iParam155].f_20 || iParam3)
			{
				if (!Function_132(iParam0->f_168))
				{
					return 0;
				}
			}
		}
		if (Function_121(iParam0 + 172, 2) && Global_3365)
		{
			if (!Function_136(iParam0->f_176, 0))
			{
				return 0;
			}
		}
		if (Function_121(iParam0 + 172, 8) && Global_3365)
		{
			if (!Function_156(iParam0->f_164, 0))
			{
				return 0;
			}
		}
		if (!bParam2)
		{
			return 1;
		}
		return Function_155(iParam0);
	}
	return 1;
}

int Function_155(int iParam0) //Position: 0x77B4 / 30644
{
	if (!iParam0->f_172 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_121(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_121(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_121(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_121(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_121(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_121(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_156(int iParam0, bool bParam1) //Position: 0x7860 / 30816
{
	if (!Function_115(iParam0))
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

void Function_157(int iParam0) //Position: 0x7896 / 30870
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
	if (!Function_81(iParam0, 1048576))
	{
		return;
	}
	iVar0 = Function_191(iParam0);
	if (iVar0 >= Global_27774[iParam013].f_24)
	{
		Global_27774[iParam013].f_24 = iVar0;
		if (Global_27774[iParam013].f_24 == Global_27774[iParam013].f_28)
		{
			Function_158(iParam0, 0, 1);
		}
	}
	return;
}

void Function_158(bool bParam0, bool bParam1, bool bParam2) //Position: 0x78F9 / 30969
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
		if (!Function_82(bParam0))
		{
			Function_183(bParam0, 1, 0, 0, 1);
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
		Function_182(457, 1, 0, 0);
		Function_78(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_44(0, 0, 1, 1))
			{
				Function_161(1);
				Function_160(1, 0);
			}
			else
			{
				Function_159();
			}
		}
	}
	return;
}

void Function_159() //Position: 0x7A98 / 31384
{
	return;
}

void Function_160(int iParam0, int iParam1) //Position: 0x7A9E / 31390
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_4())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_161(bool bParam0) //Position: 0x7AE0 / 31456
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_174();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_162();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_2(&Global_63095, 1);
		Function_2(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_162() //Position: 0x7B31 / 31537
{
	Function_172();
	Function_171();
	Function_171();
	Function_170();
	Function_170();
	Function_169();
	Function_169();
	Function_168(0);
	Function_168(0);
	if (!Function_4())
	{
		Function_166();
		Function_165();
		Function_164();
		Function_163();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_148();
	return;
}

void Function_163() //Position: 0x7B83 / 31619
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

void Function_164() //Position: 0x7BB6 / 31670
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

void Function_165() //Position: 0x7D44 / 32068
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

void Function_166() //Position: 0x7EF8 / 32504
{
	Function_167(&Global_28260, 1, 0);
	return;
}

void Function_167(int iParam0, bool bParam1, int iParam2) //Position: 0x7F06 / 32518
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
	
	bVar0 = Function_51();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || iParam2)
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

struct<8> Function_168(char* cParam0) //Position: 0x80F9 / 33017
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
					iVar2 = ((Function_35((50 + iVar4)) + Function_35((183 + iVar4))) + Function_35((90 + iVar4)));
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
	Function_20(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_169() //Position: 0x819F / 33183
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
		iVar2 = ((Function_35((50 + iVar3) + 15) + Function_35((183 + iVar3) + 15)) + Function_35((90 + iVar3) + 15));
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
	Function_20(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_170() //Position: 0x8228 / 33320
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
			iVar2 = ((Function_35((50 + iVar3) + 8) + Function_35((183 + iVar3) + 8)) + Function_35((90 + iVar3) + 8));
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
	Function_20(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_171() //Position: 0x82BF / 33471
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
		iVar2 = ((Function_35((50 + iVar3)) + Function_35((183 + iVar3))) + Function_35((90 + iVar3)));
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
	Function_20(179, iVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar4, 8);
	return StackVal, cVar0;
}

void Function_172() //Position: 0x833E / 33598
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_173(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_20(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_173(int iParam0, bool bParam1, int iParam2) //Position: 0x8377 / 33655
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
	Function_33(iParam0, bParam1, 1);
	Function_32(iParam0);
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

void Function_174() //Position: 0x8581 / 34177
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_18())
	{
		Function_179(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_179(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_175(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_175(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_46(StackVal, StackVal, vVar0))
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

vector3 Function_175(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x863C / 34364
{
	int iVar0;
	
	iVar0 = Function_178(uParam2, uParam3);
	if (Function_177(iVar0))
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
	Function_176();
	return StackVal, StackVal, Function_176();
}

vector3 Function_176() //Position: 0x8723 / 34595
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_177(int iParam0) //Position: 0x872C / 34604
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_178(bool bParam0, bool bParam1) //Position: 0x8742 / 34626
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_88(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_88(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_177(iVar0) && !bParam1)
	{
		iVar0 = Function_178(bParam0, 1);
	}
	return iVar0;
}

vector3 Function_179(var uParam0, int iParam1) //Position: 0x8809 / 34825
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_181(Global_34573, &vVar4);
	if (!Function_180(Global_30640[0]))
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
	if (!Function_180(Global_30640[2]))
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
	if (!Function_180(Global_30640[1]))
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
	if (!Function_180(Global_30658[1]))
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
	if (!Function_180(Global_30658[3]))
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
	if (!Function_180(Global_30658[2]))
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
	if (!Function_180(Global_30658[4]))
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
	if (!Function_180(Global_30668[0]))
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
	if (!Function_180(Global_30668[1]))
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
	if (!Function_180(Global_30668[2]))
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
	if (!Function_180(Global_30679[0]))
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
	if (!Function_180(Global_30685[0]))
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
	if (!Function_180(Global_30685[1]))
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
	if (!Function_180(Global_30685[2]))
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
	if (!Function_180(Global_30693[0]))
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
	if (!Function_180(Global_30693[1]))
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
	if (!Function_180(Global_30693[2]))
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
	if (!Function_180(Global_30707[2]))
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
	if (!Function_180(Global_30707[3]))
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
	if (!Function_180(Global_30707[0]))
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
	if (!Function_180(Global_30717[0]))
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
	if (!Function_180(Global_30723[2]))
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
	if (!Function_180(Global_30723[1]))
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
	if (!Function_180(Global_30723[0]))
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
	if (!Function_180(Global_30679[1]))
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
	if (!Function_180(Global_30707[1]))
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
	if (Function_46(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_180(int iParam0) //Position: 0x902E / 36910
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_14(uVar0, 0x1000000) || Function_14(uVar0, 0x2000000)) || Function_14(uVar0, 0x4000000)) || !Function_14(uVar0, 0x10000000));
}

void Function_181(bool bParam0, bool bParam1) //Position: 0x9069 / 36969
{
	GET_POSITION(bParam0, bParam1);
	return;
}

int Function_182(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9076 / 36982
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
	Function_33(iParam0, TO_FLOAT(bParam1), 1);
	Function_32(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_21(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_183(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9296 / 37526
{
	char* cVar0[32];
	
	if (!Function_79(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_190(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_82(bParam0))
	{
		Function_182(456, 1, 0, 0);
		Function_78(bParam0, 2);
		if (bParam2)
		{
			if (!Function_44(0, 0, 1, 1))
			{
				Function_161(1);
				Function_160(1, 5);
			}
			else
			{
				Function_159();
			}
		}
		Function_185(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_184() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (Function_184() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_16(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_18())
		{
			if (!Function_129(Global_76846, 2))
			{
				Function_124(Global_34573, 2, 1, 0);
			}
		}
	}
}

bool Function_184() //Position: 0x93EB / 37867
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_185(bool bParam0) //Position: 0x9418 / 37912
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
			if (Function_188(bParam0, Function_189(bVar24)))
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
			if (Function_188(bParam0, Function_189(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_191(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_187(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_186(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_186(int iParam0) //Position: 0x95C8 / 38344
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

void Function_187(char* cParam0, bool bParam1) //Position: 0x961F / 38431
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

bool Function_188(bool bParam0, int iParam1) //Position: 0x9644 / 38468
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

int Function_189(bool bParam0) //Position: 0x96A3 / 38563
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_190(int iParam0) //Position: 0x96AF / 38575
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

var Function_191(bool bParam0) //Position: 0x96CB / 38603
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_79(bParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[bParam013].f_28)
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

void Function_192(int iParam0, int iParam1) //Position: 0x9721 / 38689
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

void Function_193(var uParam0, var uParam1, bool bParam2) //Position: 0x9786 / 38790
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
	
	Function_171();
	Var0 = { StackVal, Function_171() };
	Function_195(179, &Var0, 0, 1);
	Function_170();
	Var0 = { StackVal, Function_170() };
	Function_195(180, &Var0, 0, 1);
	Function_169();
	Var0 = { StackVal, Function_169() };
	Function_195(181, &Var0, 0, 1);
	Function_168(0);
	Var0 = { StackVal, Function_168(0) };
	Function_195(182, &Var0, 0, 1);
	Function_172();
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
				strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(Function_194(bVar2), 3, 1), 32);
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
				strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(Function_194(bVar2), 3, 1), 32);
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
				bVar12 = Function_194(bVar2);
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
					strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(Function_194(bVar2), 3, 1), 32);
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
					bVar12 = Function_194(bVar2);
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
	return;
}

bool Function_194(int iParam0) //Position: 0xA64D / 42573
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
	fVar1 = Function_30(iParam0);
	if (Function_29(iParam0) != 19 || Function_29(iParam0) != 17)
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

int Function_195(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xA72E / 42798
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
		Function_196(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_196(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0xAA80 / 43648
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

