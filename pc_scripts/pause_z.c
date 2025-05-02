//Decompiled with MagicRDR v1.0
//Function Count : 197
//Statics Count : 74
//Natives Count : 296
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
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	float fLocal_35 = 0.0f;
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
	int iLocal_72 = 0;
	int iLocal_73 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_32 = 31;
	iLocal_33 = 33;
	iLocal_34 = 1;
	fLocal_35 = 2.0f;
	REQUEST_STRING_TABLE("blips");
	REQUEST_STRING_TABLE("stats");
	REQUEST_STRING_TABLE("dlc_zombiepack_rcm");
	bVar0 = !Global_53524.f_44;
	iVar1 = 1;
	Function_193(&Global_54086, &Global_55480, 0);
	Function_150();
	Function_149();
	UI_EXIT("pauseBounty");
	UI_EXIT("pauseBountyValue");
	UI_EXCLUDE("pauseBounty");
	UI_EXCLUDE("pauseBountyValue");
	UI_EXIT("pauseMoney");
	UI_EXIT("pauseMoneyValue");
	UI_EXCLUDE("pauseMoney");
	UI_EXCLUDE("pauseMoneyValue");
	bVar2 = false;
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	if (DECOR_CHECK_EXIST(&Global_54076, "SwitchOutfitsCamp"))
	{
		DECOR_REMOVE(&Global_54076, "SwitchOutfitsCamp");
	}
	else if (DECOR_CHECK_EXIST(&Global_54076, "SwitchOutfitsHouse"))
	{
		DECOR_REMOVE(&Global_54076, "SwitchOutfitsHouse");
	}
	else
	{
		SATCHEL_ALLOW_OUTFIT_CHANGE(0);
	}
	if (Global_53410[0])
	{
		if (!GET_ACTOR_INVULNERABILITY(&Global_54076))
		{
			Global_53410[0] = 0;
			UI_CHEAT_SET_VALUE(0, 0);
		}
	}
	Function_148();
	Function_147();
	iLocal_72 = GET_TARGETED_JOURNAL_ENTRY();
	while (!IS_EXITFLAG_SET())
	{
		if ((iVar1 && (UI_ISFOCUSED("PM_Stats") || UI_ISFOCUSED("PM_Collections"))) && HAS_STRING_TABLE_LOADED("stats"))
		{
			iVar1 = 0;
			Function_193(&Global_54086, &Global_55480, 0);
		}
		else if (!(UI_ISFOCUSED("PM_Stats") || UI_ISFOCUSED("PM_Collections")))
		{
			iVar1 = 1;
		}
		Function_142();
		if (!Global_140632 && bVar0)
		{
			Function_149();
			bVar0 = false;
		}
		Function_141();
		Function_140();
		Function_95();
		Function_92();
		Function_81();
		Function_51();
		if (bVar2)
		{
			Function_41(&uLocal_36);
		}
		WAIT(false);
	}
	Function_11();
	Function_2();
	if (bVar2)
	{
		Function_1(&uLocal_36);
	}
	REMOVE_STRING_TABLE("stats");
	REMOVE_STRING_TABLE("blips");
	REMOVE_STRING_TABLE("dlc_zombiepack_rcm");
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x2AF / 687
{
	if (IS_OBJECT_VALID(&iParam0 + 64))
	{
		REMOVE_CAMERA_FROM_CHANNEL(&iParam0 + 64, 0);
		DESTROY_CAMERA(&iParam0 + 64);
	}
	if (IS_OBJECT_VALID(&iParam0 + 72))
	{
		DEREFERENCE_OBJECT(&iParam0 + 72);
	}
	STREAMING_SET_CUTSCENE_MODE(0);
	STREAMING_UNLOAD_SCENE();
	STREAMING_SET_POI_LIMIT(1);
	Global_47150 = 1;
	return;
}

void Function_2() //Position: 0x2F8 / 760
{
	int iVar0;
	
	iVar0 = GET_TARGETED_JOURNAL_ENTRY();
	if (iVar0 != 0 || iVar0 != 4294967295)
	{
		return;
	}
	if (!GET_JOURNAL_ENTRY_TYPE(iVar0) != 4)
	{
		return;
	}
	if (iVar0 != Global_39906.f_36 && Function_9() != 1)
	{
		Function_3();
	}
	return;
}

int Function_3() //Position: 0x331 / 817
{
	struct<2> Var0;
	
	if (Function_9() == 0)
	{
		LOG_ERROR("Attempting to hunt to an invalid bounty hunter target");
		return 0;
	}
	if (StackVal || !Function_8(Global_39906.f_24) != 1)
	{
		LOG_ERROR("Attempting to hunt at an invalid region");
		return 0;
	}
	GET_VOLUME_CENTER(&Global_44085[Global_39906.f_249] + 8, &Var0);
	Function_7();
	Function_5(StackVal, Var0, 4, 131088, 1);
	Function_4(0,7f, 0.0f, 0.0f);
	return 1;
}

void Function_4(var uParam0, var uParam1, int iParam2) //Position: 0x3F2 / 1010
{
	Global_42834.f_68 = 5;
	Global_42834.f_72 = uParam0;
	Global_42834.f_76 = uParam1;
	Global_42834.f_80 = iParam2;
	return;
}

void Function_5(struct<2> Param0, var uParam2, bool bParam3, var uParam4) //Position: 0x413 / 1043
{
	*(&Global_42834 + 32) = Param0;
	*(&Global_42834 + 44) = Param0;
	Global_42834 = 2;
	Global_42834.f_4 = 0;
	Global_42834.f_68 = uParam2;
	Global_42834.f_24 = bParam3;
	if ((bParam3 && 16) >= 0)
	{
		Global_42834.f_24 |= 131072;
	}
	if ((bParam3 && 32) >= 0)
	{
		Global_42834.f_24 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42834 + 16) >= 0)
	{
		Function_6(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &uParam4;
}

void Function_6(var uParam0) //Position: 0x4D4 / 1236
{
	var uVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &uParam0);
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&uVar0));
		}
	}
	return;
}

void Function_7() //Position: 0x51D / 1309
{
	if (Global_42890 == 3)
	{
		Global_42890.f_4 = 3;
	}
	*(&Global_42890 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42890 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(2);
	return;
}

bool Function_8(int iParam0) //Position: 0x548 / 1352
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_9() //Position: 0x55E / 1374
{
	return Function_10(StackVal, 1);
}

bool Function_10(var uParam0, bool bParam1) //Position: 0x56D / 1389
{
	return (uParam0 && bParam1) == 0;
}

void Function_11() //Position: 0x57A / 1402
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 56)
	{
		if (UI_CHEAT_GET_STATE(iVar0) == 1)
		{
			iVar3 = UI_CHEAT_GET_VALUE(iVar0);
			if (Global_53410[iVar0])
			{
				if (iVar3 == 0)
				{
					if (Function_15(iVar0, 0, &bVar1, &bVar2))
					{
						Global_53410[iVar0] = 0;
						UI_CHEAT_SET_VALUE(iVar0, 0);
					}
				}
			}
			else if (iVar3 == 1)
			{
				if (!Function_15(iVar0, 1, &bVar1, &bVar2))
				{
					Global_53410[iVar0] = 0;
					UI_CHEAT_SET_VALUE(iVar0, 0);
				}
				else
				{
					Global_53410[iVar0] = 1;
				}
			}
			if (bVar2)
			{
				UI_CHEAT_SET_VALUE(iVar0, 0);
				Global_53410[iVar0] = 0;
				Function_12("no_cheat_unavailable", 0x41200000, 1, 0, 2, 1, 0);
			}
			else if (bVar1)
			{
				UI_CHEAT_SET_VALUE(iVar0, 0);
				Global_53410[iVar0] = 0;
				Function_12("no_cheat_mission", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		iVar0++;
	}
	return;
}

void Function_12(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x66B / 1643
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_13(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_13(int iParam0) //Position: 0x6F6 / 1782
{
	char* cVar0[16];
	
	if (!Function_14())
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

bool Function_14() //Position: 0x735 / 1845
{
	if (Function_10(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_15(int iParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x750 / 1872
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	var uVar8;
	
	uParam2 = 0;
	switch (iParam0)
	{
		case 0x00000000:
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (bParam1)
				{
					UI_SET_HAS_CHEATED(1);
					SET_ACTOR_INVULNERABILITY(&Global_54076, true);
					return 1;
				}
				SET_ACTOR_INVULNERABILITY(&Global_54076, false);
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
				SET_DEADEYE_REGENERATION_RATE(0, (0,25f * 1,25f), 0);
				return 1;
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (bParam1)
				{
					UI_SET_HAS_CHEATED(1);
					iVar0 = 0;
					while (iVar0 <= 17)
					{
						_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, iVar0, 1);
						iVar0++;
					}
					return 1;
				}
				iVar0 = 0;
				while (iVar0 <= 17)
				{
					_SET_ACTOR_INFINITE_AMMO_FLAG(&Global_54076, iVar0, 0);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
				return 0;
			}
			break;
		
		case 0x0000000A:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
				return 0;
			}
			break;
		
		case 0x0000000B:
			if (bParam1)
			{
				uParam2 = 1;
				return 0;
			}
			break;
		
		case 0x0000000C:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
				return 0;
			}
			break;
		
		case 0x0000000D:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
				return 0;
			}
			break;
		
		case 0x00000013:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
				return 0;
			}
			break;
		
		case 0x00000014:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
				return 0;
			}
			break;
		
		case 0x00000015:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
				return 0;
			}
			break;
		
		case 0x00000016:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
				return 0;
			}
			break;
		
		case 0x00000017:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
				return 0;
			}
			break;
		
		case 0x0000001D:
			if (bParam1)
			{
				if (((Function_40(0, 0, 1, 1) || Function_36(&Global_54076, 0, 0)) || Function_35()) || Global_99146)
				{
					uParam2 = 1;
					return 0;
				}
				DECOR_SET_INT(&Global_54076, "iDrunk", 4294967295);
				UI_SET_HAS_CHEATED(1);
				return 1;
			}
			DECOR_SET_INT(&Global_54076, "iDrunk", false);
			return 1;
			break;
		
		case 0x0000000E:
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (bParam1)
				{
					UI_SET_HAS_CHEATED(1);
					SET_WEAPONENUM_LOCKED(false, 0);
					SET_WEAPONENUM_LOCKED(12, 0);
					SET_WEAPONENUM_LOCKED(16, 0);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, false, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 12, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 16, 1.0f, 0, 1);
					UI_CHEAT_SET_VALUE(14, 0);
					return 0;
				}
			}
			break;
		
		case 0x0000000F:
			if (IS_ACTOR_VALID(&Global_54076))
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
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 5, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, true, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 9, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 14, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 23, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 15, 1.0f, 0, 1);
					_ADD_AMMO_OF_TYPE(&Global_54076, 4, 3.0f, 0, 1);
					UI_CHEAT_SET_VALUE(15, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000010:
			if (IS_ACTOR_VALID(&Global_54076))
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
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 6, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 2, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 10, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 19, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 24, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 17, 1.0f, 0, 1);
					_ADD_AMMO_OF_TYPE(&Global_54076, 5, 3.0f, 0, 1);
					UI_CHEAT_SET_VALUE(16, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000011:
			if (IS_ACTOR_VALID(&Global_54076))
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
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 7, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 3, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 11, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 13, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 20, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 18, 1.0f, 0, 1);
					UI_CHEAT_SET_VALUE(17, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000018:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
				return 0;
			}
			break;
		
		case 0x00000008:
			if ((!Function_40(0, 0, 1, 1) && !Global_99146) && !Global_6630)
			{
				if (bParam1)
				{
					if (IS_POPSET_VALID(&(Global_46972[6])))
					{
						UI_SET_HAS_CHEATED(1);
						bVar1 = Function_34(&(Global_46972[6]), 0, 23, 0);
					}
					else
					{
						bVar1 = 976;
					}
					if (Function_33(bVar1))
					{
						STREAMING_REQUEST_ACTOR(bVar1, true, false);
						GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &Var2);
						GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var4);
						VSCALE(&Var2, -7.0f);
						Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var4, StackVal);
						FIND_GROUND_INTERSECTION(&Var4, 80.0f, &Var6, &uVar8);
						if (IS_ACTOR_VALID(&Global_53408))
						{
							if (GET_VEHICLE(&Global_54076) == &Global_53408)
							{
								TASK_VEHICLE_LEAVE(&Global_54076);
							}
							else if (GET_MOUNT(&Global_54076) == &Global_53408)
							{
								ACTOR_DISMOUNT_NOW(&Global_54076);
							}
							DESTROY_ACTOR(&Global_53408);
						}
						Global_53408 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_AMBIENT_LAYOUT(), Function_32(), bVar1, Var6, Vector(0.0f, 0.0f, 0.0f));
						ACCESSORIZE_HORSE(&Global_53408, 3);
						STREAMING_EVICT_ACTOR(bVar1, 4294967295);
						RELEASE_ACTOR(&Global_53408);
						UI_CHEAT_SET_VALUE(8, 0);
						return 0;
					}
				}
			}
			if (bParam1)
			{
				uParam2 = 1;
			}
			break;
		
		case 0x00000007:
			if ((!Function_40(0, 0, 1, 1) && !Global_99146) && !Global_6630)
			{
				if (bParam1)
				{
					UI_SET_HAS_CHEATED(1);
					bVar1 = 1000;
					if (Function_33(bVar1))
					{
						STREAMING_REQUEST_ACTOR(bVar1, true, false);
						GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &Var2);
						GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var4);
						VSCALE(&Var2, -7.0f);
						Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var4, StackVal);
						FIND_GROUND_INTERSECTION(&Var4, 80.0f, &Var6, &uVar8);
						if (IS_ACTOR_VALID(&Global_53408))
						{
							if (GET_VEHICLE(&Global_54076) == &Global_53408)
							{
								TASK_VEHICLE_LEAVE(&Global_54076);
							}
							else if (GET_MOUNT(&Global_54076) == &Global_53408)
							{
								ACTOR_DISMOUNT_NOW(&Global_54076);
							}
							DESTROY_ACTOR(&Global_53408);
						}
						Global_53408 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_AMBIENT_LAYOUT(), Function_32(), bVar1, Var6, Vector(0.0f, 0.0f, 0.0f));
						ACCESSORIZE_HORSE(&Global_53408, 3);
						STREAMING_EVICT_ACTOR(bVar1, 4294967295);
						RELEASE_ACTOR(&Global_53408);
						UI_CHEAT_SET_VALUE(7, 0);
						return 0;
					}
				}
			}
			if (bParam1)
			{
				uParam2 = 1;
			}
			break;
		
		case 0x00000009:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
				return 0;
			}
			break;
		
		case 0x0000001E:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
				return 0;
			}
			break;
		
		case 0x0000001F:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
				return 0;
			}
			break;
		
		case 0x00000020:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
				return 0;
			}
			break;
		
		case 0x00000021:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
				return 0;
			}
			break;
		
		case 0x00000022:
			if (bParam1)
			{
				uParam2 = 1;
				uParam3 = 1;
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
				SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(3, &Global_54076, 4);
				SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(4, &Global_54076, 4);
				SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(6, &Global_54076, 4);
				UI_SET_HAS_CHEATED(1);
				return 1;
			}
			SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(3, &Global_54076, 2);
			SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(4, &Global_54076, 2);
			SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(6, &Global_54076, 2);
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
			if (!Function_40(0, 0, 1, 1))
			{
				if (bParam1)
				{
					if (Function_31(390) != 1)
					{
						UI_SET_HAS_CHEATED(1);
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, false);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_30(390, 3.0f);
						Function_16(390, 1, 1);
						return 1;
					}
				}
				if (Global_39290[2])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					Function_30(390, 3.0f);
					Function_16(390, 3, 1);
					return 1;
				}
				if (Global_39290[1])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
					Function_30(390, 3.0f);
					Function_16(390, 2, 1);
					return 1;
				}
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
				Function_30(390, 3.0f);
				Function_16(390, 1, 1);
				return 1;
			}
			if (bParam1)
			{
				uParam2 = 1;
			}
			break;
		
		case 0x00000026:
			if (!Function_40(0, 0, 1, 1))
			{
				if (bParam1)
				{
					if (Function_31(390) != 2)
					{
						UI_SET_HAS_CHEATED(1);
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_30(390, 3.0f);
						Function_16(390, 2, 1);
						return 1;
					}
				}
				if (Global_39290[2])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					Function_30(390, 3.0f);
					Function_16(390, 3, 1);
					return 1;
				}
				if (Global_39290[1])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
					Function_30(390, 3.0f);
					Function_16(390, 2, 1);
					return 1;
				}
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
				Function_30(390, 3.0f);
				Function_16(390, 1, 1);
				return 1;
			}
			if (bParam1)
			{
				uParam2 = 1;
			}
			break;
		
		case 0x00000027:
			if (!Function_40(0, 0, 1, 1))
			{
				if (bParam1)
				{
					if (Function_31(390) != 3)
					{
						UI_SET_HAS_CHEATED(1);
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_30(390, 3.0f);
						Function_16(390, 3, 1);
						return 1;
					}
				}
				if (Global_39290[2])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					Function_30(390, 3.0f);
					Function_16(390, 3, 1);
					return 1;
				}
				if (Global_39290[1])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
					Function_30(390, 3.0f);
					Function_16(390, 2, 1);
					return 1;
				}
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
				Function_30(390, 3.0f);
				Function_16(390, 1, 1);
				return 1;
			}
			if (bParam1)
			{
				uParam2 = 1;
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
			if (!Function_40(0, 0, 1, 1))
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
				uParam2 = 1;
			}
			break;
		
		case 0x00000019:
			if (!Function_40(0, 0, 1, 1))
			{
				if (bParam1)
				{
					SET_ACTOR_IS_THE_BEASTMASTER(&Global_54076, 1);
					UI_SET_HAS_CHEATED(1);
					return 1;
				}
				SET_ACTOR_IS_THE_BEASTMASTER(&Global_54076, 0);
				return 1;
			}
			if (bParam1)
			{
				uParam2 = 1;
			}
			break;
	}
	return 0;
}

int Function_16(int iParam0, bool bParam1, bool bParam2) //Position: 0x1281 / 4737
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_29(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_28(iParam0);
	if (&bParam2)
	{
		Function_17(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_17(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x151D / 5405
{
	char* cVar0[32];
	bool bVar8;
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
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_27(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_26(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_26(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_24(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_21(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_19(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_18(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_32(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_18(int iParam0) //Position: 0x1B5B / 7003
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_19(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1B6C / 7020
{
	char* cVar0[32];
	
	if (&bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_20(char* cParam0) //Position: 0x1C63 / 7267
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_21(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1C7E / 7294
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_23(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_22(Function_23(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_22(int iParam0, int iParam1) //Position: 0x1CE5 / 7397
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_23(int iParam0, bool bParam1) //Position: 0x1CF7 / 7415
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_24(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1D09 / 7433
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
	if (((Function_25(iParam0) != 19 || Function_25(iParam0) != 17) || Function_25(iParam0) != 10) || Function_25(iParam0) != 9)
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_25(int iParam0) //Position: 0x1E3D / 7741
{
	return Global_55480[iParam016].f_96;
}

float Function_26(int iParam0) //Position: 0x1E4C / 7756
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_27(int iParam0) //Position: 0x1E85 / 7813
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_28(int iParam0) //Position: 0x1EC2 / 7874
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_29(int iParam0, bool bParam1, bool bParam2) //Position: 0x205C / 8284
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
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
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

int Function_30(int iParam0, int iParam1) //Position: 0x22A0 / 8864
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_31(bool bParam0) //Position: 0x22E0 / 8928
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

var Function_32() //Position: 0x2321 / 8993
{
	int iVar0;
	
	return &iVar0;
}

bool Function_33(bool bParam0) //Position: 0x232A / 9002
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_34(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2341 / 9025
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(StackVal, &uParam0, &uParam1, &uParam2, &uParam3, 0f, Vector(0.0f, 0.0f, 0.0f));
}

var Function_35() //Position: 0x235D / 9053
{
	return Global_54082 != 1;
}

int Function_36(int iParam0, bool bParam1, bool bParam2) //Position: 0x2368 / 9064
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
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
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_39(&iParam0))
	{
		return 1;
	}
	if (Function_38(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_37())
	{
		return 1;
	}
	return 0;
}

bool Function_37() //Position: 0x242C / 9260
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_38(int iParam0) //Position: 0x2443 / 9283
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_39(int iParam0) //Position: 0x244F / 9295
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

bool Function_40(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x245E / 9310
{
	iParam0 = &iParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && iParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_41(struct<89> Param0) //Position: 0x250D / 9485
{
	float fVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var6;
	struct<2> Var8;
	struct<2> Var10;
	
	if (!IS_OBJECT_VALID(&Param0 + 64))
	{
		return;
	}
	if (Global_6623)
	{
		return;
	}
	fVar0 = GET_PROFILE_TIME();
	if (IS_OBJECT_VALID(&Param0 + 80))
	{
		if ((STREAMING_IS_WORLD_LOADED() && (fVar0 - Param0.f_88) < 5000000.0f) || (fVar0 - Param0.f_88) < 1E+07.0f)
		{
			Function_50(&Param0, &Param0 + 80);
			REFERENCE_OBJECT(&Param0 + 72);
			(&Param0 + 80) = "";
			Function_49(&Param0);
			STREAMING_UNLOAD_SCENE();
			GET_OBJECT_POSITION(GET_GAME_CAMERA(), &Var1);
			GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &Var3);
			STREAMING_LOAD_SCENE_EXT(Var1, Var3, 1);
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 72))
	{
		GET_CAMERA_POSITION(&Param0 + 64, &Var1);
		if (VDIST(Var1, *(&Param0 + 24)) < 1.0f)
		{
			SET_CAMERA_POSITION(&Param0 + 64, *(&Param0 + 24));
			SET_CAMERA_TARGET_POSITION(&Param0 + 64, *(&Param0 + 36), 0);
			*(&Param0 + 12) = *(&Param0 + 36);
		}
	}
	if (!IS_OBJECT_VALID(&Param0 + 72))
	{
		return;
	}
	GET_OBJECT_POSITION(&Param0 + 72, &Var6);
	if (((VDIST(Var6, Param0) < 150.0f && !GET_OBJECT_TYPE(&Param0 + 72) != 8) && !IS_OBJECT_VALID(&Param0 + 80)) || !IS_OBJECT_VALID(&Param0 + 72))
	{
		*(&Param0 + 80) = Function_48(&Param0);
		if (IS_OBJECT_VALID(&Param0 + 80))
		{
			STREAMING_UNLOAD_SCENE();
			GET_OBJECT_POSITION(&Param0 + 80, &Var8);
			GET_OBJECT_ORIENTATION(&Param0 + 80, &Var10);
			STREAMING_LOAD_SCENE_EXT(Var8, Var10, 1);
			Param0.f_88 = fVar0;
			Function_46(&Param0, Function_47());
			Function_49(&Param0);
		}
	}
	Function_43(&Param0, fVar0);
	if (Function_42(StackVal, *(&Param0 + 24)))
	{
	}
	if (Function_42(StackVal, *(&Param0 + 36)))
	{
	}
	return;
}

bool Function_42(char* cParam0) //Position: 0x26C6 / 9926
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

void Function_43(struct<49> Param0) //Position: 0x26DE / 9950
{
	Function_45(&Param0);
	Function_44(&Param0);
	Param0.f_48 = iParam1;
	return;
}

void Function_44(int iParam0) //Position: 0x26F7 / 9975
{
	struct<2> Var0;
	
	Var0 = *(&iParam0 + 36);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&iParam0 + 96), Var0, StackVal);
	SET_CAMERA_TARGET_POSITION(&iParam0 + 64, Var0, 0);
	return;
}

void Function_45(int iParam0) //Position: 0x2724 / 10020
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&iParam0 + 72, &iParam0 + 24);
	GET_OBJECT_AXIS(&iParam0 + 72, &Var0, 2);
	VNORMALIZE(&Var0);
	VSCALE(&Var0, -30.0f);
	*(&iParam0 + 36) = Vector(StackVal, StackVal, StackVal) + Vector(Var0, *(&iParam0 + 24), StackVal);
	return;
}

void Function_46(struct<93> Param0) //Position: 0x2767 / 10087
{
	int iVar0;
	
	*(&Param0 + 72) = &uParam1;
	Param0.f_92 = GET_PROFILE_TIME();
	iVar0 = 31;
	ADD_CAMERA_COLLISION_EXCLUSION(&Param0 + 64, &Param0 + 72, iVar0);
	return;
}

var Function_47() //Position: 0x2793 / 10131
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

var Function_48(int iParam0) //Position: 0x27A8 / 10152
{
	var uVar0;
	var uVar1;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	uVar0 = CREATE_NAMED_OBJECT_ITERATOR(&iParam0 + 128, "pauseTargetSelector");
	GET_OBJECT_POSITION(&iParam0 + 72, &uVar1);
	ITERATE_IN_LAYOUT(&uVar0, &Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "nvista_cam");
	bVar3 = RAND_INT_RANGE(false, GET_NUM_ITERATOR_MATCHES(&uVar0) * 10000);
	bVar3 = FLOOR((TO_FLOAT(bVar3) / 10000.0f));
	iVar5 = START_OBJECT_ITERATOR(&uVar0);
	iVar4 = 0;
	while (iVar4 < (bVar3 - 1))
	{
		iVar5 = OBJECT_ITERATOR_NEXT(&uVar0);
		iVar4++;
	}
	DESTROY_ITERATOR(&uVar0);
	return &iVar5;
}

void Function_49(struct<121> Param0) //Position: 0x284F / 10319
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&Param0 + 72, &Param0 + 108);
	Param0.f_120 = 0.0f;
	GET_OBJECT_POSITION(&Param0 + 72, &Param0 + 24);
	GET_OBJECT_AXIS(&Param0 + 72, &Var0, 2);
	VNORMALIZE(&Var0);
	VSCALE(&Var0, -30.0f);
	*(&Param0 + 36) = Vector(StackVal, StackVal, StackVal) + Vector(Var0, (&Param0 + 24), StackVal);
	return;
}

void Function_50(var uParam0, var uParam1) //Position: 0x28A7 / 10407
{
	if (IS_OBJECT_VALID(&uParam1))
	{
		Function_46(&uParam0, &uParam1);
		Function_49(&uParam0);
	}
	return;
}

int Function_51() //Position: 0x28C5 / 10437
{
	int iVar0;
	
	Function_80(0);
	if (!IS_ITERATOR_VALID(&Global_39613))
	{
		return 0;
	}
	iVar0 = START_OBJECT_ITERATOR(&Global_39613);
	while (IS_OBJECT_VALID(&iVar0))
	{
		Function_52(GET_EVENT_FROM_OBJECT(&iVar0));
		iVar0 = OBJECT_ITERATOR_NEXT(&Global_39613);
	}
	return 0;
}

void Function_52(int iParam0) //Position: 0x2906 / 10502
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[64];
	char* cVar19[64];
	bool bVar35;
	
	if (!IS_EVENT_VALID(&iParam0))
	{
		return;
	}
	bVar35 = GET_EVENT_TYPE(&iParam0);
	switch (bVar35)
	{
		case 0x00000063:
			break;
		
		case 0x00000067:
			if (!DECOR_CHECK_EXIST(&iParam0, "IdHash"))
			{
				return;
			}
			bVar0 = DECOR_GET_INT(&iParam0, "IdHash");
			iVar2 = 0;
			while (iVar2 <= (Global_42265 - 1))
			{
				if (Function_79(iVar2))
				{
					if (Function_77(iVar2))
					{
						strcpy(&cVar3, "out_", 64);
						stradd(&cVar3, &Global_42265[iVar29] + 32, 64);
						if (STRING_TO_HASH(&cVar3) == bVar0)
						{
							if (!Global_42825 != iVar2)
							{
								if (Function_74(iVar2, 1, 0))
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
			if (!DECOR_CHECK_EXIST(&iParam0, "IdHash"))
			{
				return;
			}
			bVar0 = DECOR_GET_INT(&iParam0, "IdHash");
			iVar2 = 0;
			while (iVar2 <= Global_42265)
			{
				if (Global_42265[iVar29] != 4294967295)
				{
					strcpy(&cVar3, "out_", 64);
					stradd(&cVar3, &Global_42265[iVar29] + 32, 64);
					if (STRING_TO_HASH(&cVar3) == bVar0)
					{
						if (Function_77(iVar2))
						{
							strcpy(&cVar19, UI_GET_STRING("out_wares_complete"), 64);
						}
						else if (Function_79(iVar2))
						{
							strcpy(&cVar19, INT_TO_STRING(Global_42265[iVar29].f_24), 64);
							stradd(&cVar19, " / ", 64);
							stradd(&cVar19, INT_TO_STRING(Global_42265[iVar29].f_28), 64);
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
			Global_140632 = !Global_53524.f_44;
			if (!DECOR_CHECK_EXIST(&iParam0, "nChallenge"))
			{
				return;
			}
			if (!DECOR_CHECK_EXIST(&iParam0, "Type"))
			{
				return;
			}
			bVar0 = DECOR_GET_INT(&iParam0, "Type");
			break;
		
		case 0x0000006F:
			if (!DECOR_CHECK_EXIST(&iParam0, "Type"))
			{
				return;
			}
			bVar0 = DECOR_GET_INT(&iParam0, "Type");
			bVar0 = bVar0;
			Function_54(bVar0);
			break;
		
		case 0x00000071:
			if (!DECOR_CHECK_EXIST(&iParam0, "Option"))
			{
				return;
			}
			Function_53(DECOR_GET_BOOL(&iParam0, "Option"));
			break;
	}
	return;
}

void Function_53(int iParam0) //Position: 0x2BBA / 11194
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 40)
	{
		if (bVar0 <= 21)
		{
			SET_WEAPON_GOLD(&Global_54076, bVar0, &iParam0);
		}
		bVar0++;
	}
	return;
}

void Function_54(int iParam0) //Position: 0x2BE6 / 11238
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
				Function_55(&iVar2, iParam0);
			}
			iVar1++;
		}
	}
	return;
}

void Function_55(int iParam0, int iParam1) //Position: 0x2C26 / 11302
{
	int iVar0;
	bool bVar1;
	char* cVar2[32];
	struct<8> Var26;
	struct<8> Var34;
	struct<8> Var42;
	struct<8> Var50;
	struct<8> Var58;
	bool bVar66;
	char* cVar67[32];
	struct<8> Var83;
	struct<8> Var91;
	struct<8> Var99;
	char* cVar107[32];
	
	iVar0 = Function_73(&iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (!Global_132987[iVar0125].f_120)
		{
			strcpy(&cVar2, "SC_AA", 32);
			cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar2, "_SP") };
			if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
			{
				bVar1 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
			}
			Function_65(&iParam0);
			cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar2, "_") };
			cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar2, I2STR(bVar1)) };
			Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar2, "_obj1") };
			Var34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar2, "_obj2") };
			Var42 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar2, "_obj3") };
			Var50 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar2, "_globalName") };
			Var58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar2, "_friendName") };
			strcpy(&Global_132987[iVar0125] + 212[211] + 8, GET_LOCAL_PLAYER_NAME(), 24);
			strcpy(&Global_132987[iVar0125] + 212[411] + 8, GET_LOCAL_PLAYER_NAME(), 24);
			UI_SET_STRING(&Var58, &Global_132987[iVar0125] + 212[111] + 8);
			UI_SET_STRING(&Var50, &Global_132987[iVar0125] + 212[011] + 8);
			UI_SET_STRING("SC_MY_BEST_GamerTag", &Global_132987[iVar0125] + 212[211] + 8);
			UI_SET_STRING("SC_MY_CURRENT_GamerTag", &Global_132987[iVar0125] + 212[411] + 8);
			UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 0, &Var26);
			UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 1, &Var34);
			UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 2, &Var42);
			UI_CHALLENGE_SET_TIME_HEADER(&iParam0, "SCChallenge_completion_time");
			switch (iParam1)
			{
				case 0x00000000:
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 0, "SC_MY_CURRENT_GamerTag");
					if (Global_132987[iVar0125].f_116)
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_CurrentAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_CurrentAttempt"));
					}
					else
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_LastAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_LastAttempt"));
					}
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 3, "Common_Null");
					Function_62(&iParam0, iVar0, 4, 2);
					break;
				
				case 0x00000002:
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 0, &Var58);
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_TheirBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 3, "Common_Null");
					Function_62(&iParam0, iVar0, 1, 2);
					break;
				
				case 0x00000001:
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 0, &Var50);
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_TheBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 3, "Common_Null");
					Function_62(&iParam0, iVar0, 0, 2);
					break;
			}
		}
		else
		{
			cVar107 = "";
			strcpy(&cVar67, "SC_community", 32);
			if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
			{
				bVar66 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
			}
			Function_58(&iParam0);
			cVar67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar67, "_") };
			cVar67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar67, I2STR(bVar66)) };
			Var83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar67, "_obj1") };
			Var91 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar67, "_globalName") };
			Var99 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar67, "_friendName") };
			strcpy(&Global_132987[iVar0125] + 212[411] + 8, GET_LOCAL_PLAYER_NAME(), 24);
			UI_SET_STRING(&Var99, &Global_132987[iVar0125] + 212[111] + 8);
			UI_SET_STRING(&Var91, &Global_132987[iVar0125] + 212[011] + 8);
			UI_SET_STRING("SC_MY_CURRENT_GamerTag", &Global_132987[iVar0125] + 212[411] + 8);
			UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 0, "");
			UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 1, &cVar107);
			UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 2, &cVar107);
			UI_CHALLENGE_SET_TIME_HEADER(&iParam0, &Var83);
			switch (iParam1)
			{
				case 0x00000000:
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 0, "SC_MY_CURRENT_GamerTag");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_LastAttempt");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 3, "Common_Null");
					Function_56(&iParam0, iVar0, 4, 2);
					UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_CurrentAttempt"));
					if (Global_132987[iVar0125].f_116)
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_CurrentAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_CurrentAttempt"));
					}
					else
					{
						UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_LastAttempt");
						UI_SET_STRING("SClubStat_Dyn_ScoreLabel", UI_GET_STRING("SClubStat_LastAttempt"));
					}
					break;
				
				case 0x00000002:
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 0, &Var99);
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_TheirBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 3, "Common_Null");
					Function_56(&iParam0, iVar0, 1, 2);
					break;
				
				case 0x00000001:
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 0, &Var91);
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_TheBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 3, "Common_Null");
					Function_56(&iParam0, iVar0, 0, 2);
					break;
				}
			}
	}
	return;
}

void Function_56(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x33AD / 13229
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	struct<8> Var17;
	
	strcpy(&cVar1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "_count") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "_compare") };
	Function_57(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, (*&Global_132987[iParam1125] + 212)[iParam211], Var17);
	Function_57(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, (*&Global_132987[iParam1125] + 212)[iParam311], Var9);
	UI_CHALLENGE_SET_TIME_INFO(&iParam0, 0, &Var17);
	UI_CHALLENGE_SET_TIME_INFO(&iParam0, 1, &Var9);
}

void Function_57(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x3478 / 13432
{
	int iVar0;
	
	if (SC_CHALLENGE_IS_VAR_VALID(&uParam0, "nCCID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(&uParam0, "nCCID");
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

void Function_58(int iParam0) //Position: 0x34CA / 13514
{
	int iVar0;
	
	iVar0 = Function_73(&iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (Global_132987[iVar0125].f_120)
		{
			Function_59(&iParam0);
		}
	}
	return;
}

void Function_59(int iParam0) //Position: 0x34F9 / 13561
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	struct<8> Var17;
	
	strcpy(&cVar1, "SC_community", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(&cVar1, "_locked", "") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "_des") };
	if (SC_CHALLENGE_GET_COMMUNITY_VALUE(&iParam0) > SC_CHALLENGE_GET_COMMUNITY_TOTAL(&iParam0))
	{
		Function_60(&iParam0);
	}
	else
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var17);
		UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, 4);
	}
	return;
}

void Function_60(int iParam0) //Position: 0x359F / 13727
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
	}
	strcpy(&cVar1, "SC_community", 32);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "n_complete") };
	UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, 8);
	UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var9);
	return;
}

struct<32> Function_61(char* cParam0) //Position: 0x361C / 13852
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_62(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x363E / 13886
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	int iVar33;
	
	strcpy(&cVar1, "SC_AA", 32);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "n_bestTime") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "_compareTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63((*&Global_132987[iParam1125] + 212)[iParam211]) };
	UI_SET_STRING(&Var17, &Var25);
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63((*&Global_132987[iParam1125] + 212)[iParam311]) };
	UI_SET_STRING(&Var9, &Var25);
	iVar33 = 0;
	while (iVar33 <= 3)
	{
		if ((*&Global_132987[iParam1125] + 212[iParam211] + 56)[iVar33])
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE(&iParam0, iVar33, 9);
		}
		else
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE(&iParam0, iVar33, 8);
		}
		if ((*&Global_132987[iParam1125] + 212[iParam311] + 56)[iVar33])
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE_B(&iParam0, iVar33, 9);
		}
		else
		{
			UI_CHALLENGE_SET_OBJECTIVE_STYLE_B(&iParam0, iVar33, 8);
		}
		iVar33++;
	}
	UI_CHALLENGE_SET_TIME_INFO(&iParam0, 0, &Var17);
	UI_CHALLENGE_SET_TIME_INFO(&iParam0, 1, &Var9);
}

struct<32> Function_63(var uParam0) //Position: 0x3791 / 14225
{
	char* cVar0[32];
	int iVar8;
	int iVar9;
	bool bVar10;
	struct<13> Var11;
	
	Function_64(uParam0);
	Var11 = { StackVal, Function_64(uParam0) };
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

struct<8> Function_64(int iParam0) //Position: 0x3811 / 14353
{
	struct<2> Var0;
	bool bVar2;
	
	bVar2 = iParam0;
	Var0 = FLOOR((bVar2 / 3600.0f));
	while (bVar2 <= 3600.0f)
	{
		bVar2 = (bVar2 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar2 / 60.0f));
	while (bVar2 <= 60.0f)
	{
		bVar2 = (bVar2 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar2);
	Var0.f_12 = (StackVal - IntToFloat(bVar2));
	return StackVal, Var0;
}

void Function_65(int iParam0) //Position: 0x3880 / 14464
{
	int iVar0;
	struct<8> Var1;
	char* cVar9[32];
	bool bVar17;
	
	iVar0 = Function_73(&iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (!Global_132987[iVar0125].f_120)
		{
			strcpy(&cVar9, "SC_AA", 32);
			cVar9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar9, "_SP") };
			if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
			{
				bVar17 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
			}
			cVar9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar9, "_") };
			cVar9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar9, I2STR(bVar17)) };
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar9, "_times") };
			if (Global_132987[iVar0125].f_116)
			{
				UI_SET_STRING(&Var1, UI_GET_STRING("SClubStat_CurrentAttempt"));
				UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_CurrentAttempt");
				UI_CHALLENGE_MAKE_CURRENT(&iParam0);
			}
			else
			{
				UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_LastAttempt");
			}
			Function_72(&iParam0, (*&Global_132987[iVar0125] + 212)[411], (*&Global_132987[iVar0125] + 212)[311], (*&Global_132987[iVar0125] + 212)[211]);
			UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, Function_71(&iParam0));
			if (!Function_70(&iParam0) || !NET_MAILBOX_IS_SIGNED_INTO_SC())
			{
				UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, 8);
			}
			Function_66(&iParam0);
		}
	}
	return;
}

void Function_66(int iParam0) //Position: 0x39F1 / 14833
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	iVar2 = Function_73(&iParam0);
	if (iVar2 >= 4294967295)
	{
		if (!Function_69())
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_26(464) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000001:
					if (Function_26(459) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000002:
					if (Function_26(463) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000003:
					if (Function_26(462) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000004:
					if (Function_26(466) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000005:
					if (Function_26(460) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000006:
					if (Function_26(465) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000007:
					if (Function_26(461) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000008:
					if (Function_67(Global_46914[0]))
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000009:
					if (StackVal >= 3)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
			}
			if (bVar1)
			{
				UI_CHALLENGE_MAKE_CURRENT(&iParam0);
			}
		}
	}
	return;
}

bool Function_67(int iParam0) //Position: 0x3C24 / 15396
{
	if (!Function_8(iParam0))
	{
		return 0;
	}
	return Function_68(&(Global_43791[iParam0]), 4096);
}

bool Function_68(int iParam0, int iParam1) //Position: 0x3C42 / 15426
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_69() //Position: 0x3C5F / 15455
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
			iVar3 = Function_73(&iVar2);
			if (iVar3 >= 4294967295)
			{
				if (Global_132987[iVar3125].f_116)
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

bool Function_70(int iParam0) //Position: 0x3CAF / 15535
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	switch (iVar0)
	{
		case 0x00000000:
			return Function_26(464) < 0.0f;
			break;
		
		case 0x00000001:
			return Function_26(459) < 0.0f;
			break;
		
		case 0x00000002:
			return Function_26(463) < 0.0f;
			break;
		
		case 0x00000003:
			return Function_26(462) < 0.0f;
			break;
		
		case 0x00000004:
			return Function_26(466) < 0.0f;
			break;
		
		case 0x00000005:
			return Function_26(460) < 0.0f;
			break;
		
		case 0x00000006:
			return Function_26(465) < 0.0f;
			break;
		
		case 0x00000007:
			return Function_26(461) < 0.0f;
			break;
		
		case 0x00000008:
			return Function_67(Global_46914[0]);
			break;
		
		case 0x00000009:
			return StackVal < 3;
			break;
	}
	return iVar1;
}

int Function_71(int iParam0) //Position: 0x3D9A / 15770
{
	int iVar0;
	
	iVar0 = Function_73(&iParam0);
	if (iVar0 >= 4294967295)
	{
		switch (StackVal)
		{
			case 0x00000000:
				if (Global_132987[iVar0125].f_148 <= 1)
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

void Function_72(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3E01 / 15873
{
	bool bVar0;
	char* cVar1[32];
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
	
	iVar81 = Function_73(&iParam0);
	strcpy(&cVar1, "SC_AA", 32);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, I2STR(bVar0)) };
	Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "_locked") };
	Var49 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(&cVar1, "_NotSignedDes", "") };
	Var57 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61(&cVar1, "_LockedNotInSP", "") };
	Var65 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "_des") };
	Var73 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "_unlock") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "n_currTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "n_lastTime") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(&cVar1, "n_bestTime") };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(uParam1) };
	UI_SET_STRING(&Var17, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(uParam2) };
	UI_SET_STRING(&Var25, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(uParam3) };
	UI_SET_STRING(&Var33, &Var9);
	if (!NET_MAILBOX_IS_SIGNED_INTO_SC())
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var49);
	}
	else if (Function_70(&iParam0))
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var65);
	}
	else
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var41);
	}
	if (iVar81 >= 4294967295)
	{
		if (StackVal >= 1)
		{
			UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var73);
		}
	}
}

var Function_73(int iParam0) //Position: 0x3FA2 / 16290
{
	int iVar0;
	int iVar1;
	
	iVar0 = &iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_132987[iVar1125] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

bool Function_74(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3FD5 / 16341
{
	if (Global_42825 == bParam0)
	{
		return 1;
	}
	if (Global_42826 == bParam0)
	{
		return 1;
	}
	if (!Function_76(bParam0))
	{
		LOG_ERROR("Attempting to swap to an invalid outfit");
		return 0;
	}
	if (!Function_77(bParam0) && !&bParam2)
	{
		return 0;
	}
	Global_42826 = bParam0;
	if (&bParam1)
	{
		Function_75(bParam0, 8192);
	}
	DECOR_SET_BOOL(&Global_54076, "playerChangeOutfits", true);
	return 1;
}

void Function_75(bool bParam0, int iParam1) //Position: 0x4073 / 16499
{
	if (!Function_76(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_76(int iParam0) //Position: 0x40C8 / 16584
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_77(int iParam0) //Position: 0x40DE / 16606
{
	if (!Function_76(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_78(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_78(int iParam0, int iParam1) //Position: 0x412F / 16687
{
	int iVar0;
	
	if (!Function_76(iParam0))
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

bool Function_79(int iParam0) //Position: 0x415C / 16732
{
	if (!Function_76(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_78(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_80(int iParam0) //Position: 0x41AE / 16814
{
	if (!IS_ITERATOR_VALID(&Global_39613))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Formations")))
		{
			Global_39613 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("Formations"));
		}
	}
	if (!IS_ITERATOR_VALID(&Global_39613))
	{
		return;
	}
	ITERATE_EVERYWHERE(&Global_39613);
	ITERATE_ON_OBJECT_TYPE(&Global_39613, 3);
	if (!&iParam0 != "")
	{
		ITERATE_IN_SET(&Global_39613, &iParam0);
	}
	else
	{
		ITERATE_IN_LAYOUT(&Global_39613, GET_EVENT_LAYOUT());
	}
	return;
}

int Function_81() //Position: 0x4228 / 16936
{
	if (Function_82(&Global_42862))
	{
		return 1;
	}
	if (Function_82(&Global_42834))
	{
		return 1;
	}
	if (Function_82(&Global_42890))
	{
		return 1;
	}
	return 0;
}

bool Function_82(struct<105> Param0) //Position: 0x4256 / 16982
{
	var uVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	
	switch (StackVal)
	{
		case 0x00000000:
			if ((Param0 != 1 || Param0 != 2) || Param0 != 3)
			{
				Param0.f_4 = 1;
			}
			break;
		
		case 0x00000001:
			if (Param0 == 3)
			{
				if (StackVal != 0)
				{
					Param0.f_24 = Global_42834.f_24;
				}
				else
				{
					Param0.f_24 = 393264;
				}
			}
			else if (Param0 == 1)
			{
				Param0.f_24 = 393264;
			}
			if (GET_OBJECTSET_SIZE(&Param0 + 16) >= 0)
			{
				Function_6(&Param0 + 16);
				CLEAN_OBJECTSET(&Param0 + 16);
			}
			if (FIND_TRAFFIC_PATH(&Param0 + 8, &Param0 + 16, &Global_54078, &Param0 + 32, Param0.f_24, &Param0 + 28))
			{
				(&Param0 + 88) = Global_54078;
				Function_88(StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 16)), *(&Param0 + 32), 0x41200000, 0, 0x3f800000, 1);
				vVar3 = { StackVal, StackVal, Function_88(StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 16)), *(&Param0 + 32), 0x41200000, 0, 0x3f800000, 1) };
				Function_87(&vVar3);
				*(&Param0 + 56) = Function_87(&vVar3);
				Function_86(Param0.f_68, &uVar0, &uVar1, &uVar2);
				if (Param0 == 1)
				{
					SET_GPS_PATH(0, Param0.f_28, &Param0 + 16, uVar0, uVar1, uVar2, 1.0f, &Param0 + 32, 1);
				}
				else if (Param0 == 2)
				{
					SET_GPS_PATH(1, Param0.f_28, &Param0 + 16, uVar0, uVar1, uVar2, 1.0f, &Param0 + 32, Param0.f_100);
				}
				else
				{
					SET_GPS_PATH(2, Param0.f_28, &Param0 + 16, uVar0, uVar1, uVar2, 1.0f, &Param0 + 32, Param0.f_100);
				}
				Param0.f_84 = GET_CURRENT_GAME_TIME();
				Param0.f_4 = 2;
				REGISTER_GPS_CURVE_OBJECTSET(&Param0 + 16);
			}
			else
			{
				LOG_ERROR("Cannot find a path from here to there - check output for locations");
				CLEAR_GPS_PATH(2);
				Param0.f_4 = 3;
			}
		
		case 0x00000002:
			if ((Param0 != 2 || Param0 != 1) || Param0 != 3)
			{
				if (Param0.f_104 || Param0 != 3)
				{
					if (StackVal || Function_85(StackVal, (StackVal || Function_85(StackVal, Function_85(StackVal, StackVal, *(&Param0 + 32), Global_54078) > 15.0f, *(&Param0 + 56), Global_54078) > 15.0f), *(&Param0 + 44), Global_54078) > 15.0f)
					{
						if (Param0 == 1)
						{
							CLEAR_GPS_PATH(0);
						}
						else if (Param0 == 2)
						{
							CLEAR_GPS_PATH(1);
						}
						else
						{
							CLEAR_GPS_PATH(2);
						}
						Param0.f_4 = 3;
						return 0;
					}
				}
				if (Param0 == 1)
				{
					if (IS_GPS_RECOMPUTE(0))
					{
						Param0.f_4 = 1;
						return 0;
					}
				}
				if (Param0 == 2)
				{
					if (IS_GPS_RECOMPUTE(1))
					{
						Param0.f_4 = 1;
						return 0;
					}
				}
				if (IS_GPS_RECOMPUTE(2))
				{
					Param0.f_4 = 1;
					return 0;
				}
			}
			break;
		
		case 0x00000003:
			if (Param0 == 1)
			{
				Function_84();
			}
			else if (Param0 == 2)
			{
				Function_83();
			}
			else
			{
				Function_7();
			}
			if (IS_OBJECTSET_VALID(&Param0 + 16))
			{
				Function_6(&Param0 + 16);
				CLEAN_OBJECTSET(&Param0 + 16);
			}
			Param0.f_4 = 0;
			Param0 = 0;
			break;
	}
	return 0;
}

void Function_83() //Position: 0x456B / 17771
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	*(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

void Function_84() //Position: 0x4596 / 17814
{
	if (Global_42862 == 1)
	{
		Global_42862.f_4 = 3;
	}
	*(&Global_42862 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42862 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(0);
	return;
}

float Function_85(struct<2> Param0, struct<2> Param2) //Position: 0x45C1 / 17857
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

void Function_86(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x45DE / 17886
{
	switch (iParam0)
	{
		case 0x00000001:
			uParam1 = 0,64f;
			uParam2 = 0,22f;
			uParam3 = 0,26f;
			break;
		
		case 0x00000002:
			uParam1 = 0,34f;
			uParam2 = 0,58f;
			uParam3 = 0,74f;
			break;
		
		case 0x00000000:
			uParam1 = 0,83f;
			uParam2 = 0,65f;
			uParam3 = 0,36f;
			break;
		
		case 0x00000003:
			uParam1 = 0,41f;
			uParam2 = 0,57f;
			uParam3 = 0,23f;
			break;
		
		case 0x00000005:
			uParam1 = Global_42834.f_72;
			uParam2 = Global_42834.f_76;
			uParam3 = Global_42834.f_80;
			break;
		
		case 0x00000004:
			uParam1 = Global_42890.f_72;
			uParam2 = Global_42890.f_76;
			uParam3 = Global_42890.f_80;
			break;
		
		default:
			uParam1 = 0,71f;
			uParam2 = 0,64f;
			uParam3 = 0,57f;
			break;
	}
}

struct<8> Function_87(vector3 vParam0) //Position: 0x46E3 / 18147
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

vector3 Function_88(var uParam0, struct<2> Param1, float fParam3, float fParam4, float fParam5, int iParam6) //Position: 0x4705 / 18181
{
	bool bVar0;
	struct<13> Var1;
	
	if (!&fParam5 <= &fParam4)
	{
		fVar10 = &fParam5;
		fParam5 = &fParam4;
		fParam4 = fVar10;
	}
	GET_CURVE_POINT(&uParam0, &fParam4, &Var1, 0);
	Function_87(&Var1);
	bVar11 = VDIST(Function_87(&Var1), Param1);
	vVar7 = { StackVal, StackVal, Var1 };
	while (Var1.f_12 >= &fParam5 && !bVar0)
	{
		Var4 = { StackVal, StackVal, Var1 };
		UNK_0x19D652F9(&uParam0, FABS(&fParam3), &Var4, &Var1);
		Function_87(&Var1);
		bVar12 = VDIST(Function_87(&Var1), Param1);
		if (bVar12 > bVar11)
		{
			bVar11 = bVar12;
			vVar7 = { StackVal, StackVal, Var1 };
		}
		if (Function_91(&Var1))
		{
			bVar0 = true;
		}
	}
	if (&iParam6 < 1 && &fParam3 < 1.0f)
	{
		UNK_0x19D652F9(&uParam0, (&fParam3 / 2.0f), &vVar7, &Var1);
		UNK_0x19D652F9(&uParam0, (-1.0f * (&fParam3 / 2.0f)), &vVar7, &Var4);
		Function_88(StackVal, &uParam0, Param1, (&fParam3 / 10.0f), Function_90(Var4.f_12, Var1.f_12), Function_89(Var4.f_12, Var1.f_12), (&iParam6 - 1));
		return StackVal, StackVal, Function_88(StackVal, &uParam0, Param1, (&fParam3 / 10.0f), Function_90(Var4.f_12, Var1.f_12), Function_89(Var4.f_12, Var1.f_12), (&iParam6 - 1));
	}
	return StackVal, StackVal, vVar7;
}

var Function_89(int iParam0, int iParam1) //Position: 0x4807 / 18439
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_90(int iParam0, int iParam1) //Position: 0x481A / 18458
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_91(struct<13> Param0) //Position: 0x482D / 18477
{
	if (Param0.f_12 > 0,001f || Param0.f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_92() //Position: 0x4850 / 18512
{
	struct<2> Var0;
	
	if (GET_USER_DEFINED_WAYPOINT(&Var0))
	{
		Var0.f_4 = 25.0f;
		if (!Function_94(StackVal, StackVal, Var0, *(&Global_42862 + 44)))
		{
			Function_93(StackVal, Var0);
		}
	}
	else if (StackVal != 2 && Global_42862 != 1)
	{
		if (IS_USER_DEFINED_WAYPOINT_CLEARED())
		{
			Function_84();
		}
	}
	return;
}

void Function_93(struct<2> Param0) //Position: 0x489C / 18588
{
	*(&Global_42862 + 32) = Param0;
	*(&Global_42862 + 44) = Param0;
	Global_42862 = 1;
	Global_42862.f_4 = 0;
	Global_42862.f_68 = 3;
	Global_42862.f_24 = 393264;
	if (!IS_OBJECTSET_VALID(&Global_42862 + 16))
	{
		*(&Global_42862 + 16) = CREATE_OBJECTSET_IN_LAYOUT("UserGPSPath", &Global_42862 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42862 + 16) >= 0)
	{
		Function_6(&Global_42862 + 16);
		CLEAN_OBJECTSET(&Global_42862 + 16);
	}
	Global_42862.f_100 = 1;
	Global_42862.f_104 = 1;
	return;
}

bool Function_94(struct<2> Param0, struct<2> Param2) //Position: 0x4927 / 18727
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_95() //Position: 0x4953 / 18771
{
	int iVar0;
	
	iVar0 = GET_TARGETED_JOURNAL_ENTRY();
	if (iVar0 != iLocal_72)
	{
		Function_139(iLocal_72);
		Function_96(iVar0);
		iLocal_72 = iVar0;
	}
	return;
}

void Function_96(int iParam0) //Position: 0x4973 / 18803
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
	iVar0 = GET_JOURNAL_ENTRY_TYPE(iParam0);
	if (iVar0 == 4)
	{
		if (iParam0 != GET_TARGETED_JOURNAL_ENTRY())
		{
			return;
		}
	}
	Function_139(GET_TARGETED_JOURNAL_ENTRY());
	iVar1 = GET_JOURNAL_ENTRY_MISC_FLAG(iParam0);
	switch (iVar0)
	{
		case 0x00000004:
			if (Global_42833)
			{
				return;
			}
			iVar6 = 0;
			while (iVar6 <= Global_42265)
			{
				if (Function_79(iVar6) && !Function_77(iVar6))
				{
					if (iParam0 == Global_42265[iVar69].f_64)
					{
						iVar5 = iVar6;
						bVar4 = true;
					}
				}
				iVar6++;
			}
			if (!bVar4)
			{
				Function_138();
			}
			else if (iVar5 != Global_42827)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
				{
					Function_137(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
			{
				Function_133();
				TARGET_JOURNAL_ENTRY(iParam0);
			}
			break;
		
		case 0x00000002:
			iVar2 = iVar1;
			while (&Global_99725[iVar143] + 36 == iVar2)
			{
				if (IS_BLIP_VALID(&Global_99725[iVar143] + 272))
				{
					REMOVE_BLIP(&Global_99725[iVar143] + 272);
				}
				if (IS_BLIP_VALID(&Global_99725[iVar143] + 280))
				{
					REMOVE_BLIP(&Global_99725[iVar143] + 280);
				}
				if (!Function_10(Global_99725[iVar143].f_228, 2048))
				{
					iVar3 = iVar1;
					if (Function_111(&(Global_99725[iVar143]), iVar3))
					{
						Function_110(&Global_99725[iVar143] + 228, 64);
						Function_106(&(Global_99725[iVar143]), iVar3);
						if (IS_OBJECT_VALID(&Global_99725[iVar143] + 288))
						{
							DESTROY_OBJECT(&Global_99725[iVar143] + 288);
							Function_97(&(Global_99725[iVar143]), 7);
						}
					}
				}
				else if (IS_OBJECT_VALID(&Global_99725[iVar143] + 288))
				{
					DESTROY_OBJECT(&Global_99725[iVar143] + 288);
				}
				iVar1++;
			}
			break;
	}
	return;
}

void Function_97(struct<229> Param0) //Position: 0x4B2D / 19245
{
	float fVar0;
	int iVar1;
	
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_10(Param0.f_228, 2048) || Global_6623) || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		return;
	}
	fVar0 = Param0.f_180;
	*(&Param0 + 288) = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_32(), *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0), 0, &Global_54076, iParam1, Param0.f_176, 0, 1, 1);
	Function_98(&Param0);
	iVar1 = GATEWAY_GET_MARKER(&Param0 + 288);
	if (IS_OBJECT_VALID(&iVar1))
	{
		DESTROY_OBJECT(&iVar1);
	}
	return;
}

void Function_98(struct<217> Param0) //Position: 0x4BFD / 19453
{
	float fVar0;
	var uVar1;
	
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		return;
	}
	*(&Param0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_32(), 2,802597E-45f, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 2.0f, 2.0f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	fVar0 = 20.0f;
	if (Function_8(Param0.f_216))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 336, Function_32(), 2,802597E-45f, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0));
	DECOR_SET_INT(&uVar1, "category", 512);
	Function_99(&uVar1, 0);
	return;
}

int Function_99(var uParam0, int iParam1) //Position: 0x4CBB / 19643
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_102(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_100(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_100(int iParam0, var uParam1, struct<2> Param2) //Position: 0x4E25 / 20005
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_101("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

struct<32> Function_101(char* cParam0) //Position: 0x4ECD / 20173
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_102(int iParam0) //Position: 0x4F39 / 20281
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_105(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_103(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_105(iVar0);
						}
					}
					else if (Function_103(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_105(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &iParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&iParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_105(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_103(var uParam0, struct<2> Param1) //Position: 0x50A7 / 20647
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_104(&uParam0);
		Var0 = Function_104(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_104(int iParam0) //Position: 0x511E / 20766
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_105(int iParam0) //Position: 0x518A / 20874
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

void Function_106(struct<153> Param0) //Position: 0x51F2 / 20978
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	struct<9> Var4;
	
	Var0 = *(&Param0 + 196);
	Var0.f_4 = (StackVal + 0,5f);
	fVar2 = 1.0f;
	fVar3 = 50.0f;
	if (((StackVal && Function_108(Function_109(iParam1), Var0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_107(iParam1)) || Global_116927[iParam16].f_20 != 1)
	{
		*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 7);
		SET_BLIP_MAX_DISTANCE(&Param0 + 272, 1,25f);
		*(&Param0 + 280) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 7);
		SET_BLIP_NAME(&Param0 + 280, &Param0 + 4);
		UNK_0xFF3DB575(&Param0 + 280, 1);
		SET_BLIP_PRIORITY(&Param0 + 280, true);
		SET_BLIP_COLOR(&Param0 + 280, 0,58f, 0,35f, 0,72f, fVar2);
		Global_116927[iParam16].f_20 = 1;
	}
	else
	{
		fVar2 = 0,5f;
		vVar4 = *(&Param0 + 196);
		vVar4 = (vVar4.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar4.f_8 = (vVar4.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&vVar4, 440, 0.0f, 2, 7);
		SET_BLIP_SCALE(&Param0 + 272, fVar3);
	}
	SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
	SET_BLIP_COLOR(&Param0 + 272, 0,58f, 0,35f, 0,72f, fVar2);
	SET_BLIP_PRIORITY(&Param0 + 272, 3);
	return;
}

int Function_107(int iParam0) //Position: 0x5361 / 21345
{
	if ((Global_116927[iParam06] != 3 || Global_116927[iParam06] != 4) || Global_116927[iParam06] != 5)
	{
		return 1;
	}
	return 0;
}

var Function_108(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x538D / 21389
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_109(int iParam0) //Position: 0x53AE / 21422
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

void Function_110(var uParam0, int iParam1) //Position: 0x53C3 / 21443
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_111(struct<249> Param0) //Position: 0x53D4 / 21460
{
	if (Function_10(Global_99725[iParam143].f_228, 64))
	{
		return 1;
	}
	if (Function_109(iParam1))
	{
		Function_110(&Global_99725[iParam143] + 228, 64);
		return 1;
	}
	if ((Function_132(iParam1) || Function_131(iParam1)) || Function_130(iParam1))
	{
		return 0;
	}
	if (Param0.f_248)
	{
		if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Param0 + 240))
		{
			return 0;
		}
	}
	if (((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		return 0;
	}
	if (Function_8(Param0.f_216))
	{
		if (Function_68(&(Global_43791[Param0.f_216]), 256))
		{
			return 0;
		}
	}
	if (Function_121(iParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(&Param0 + 312))
	{
		if (!((((Global_99146 || Global_6627) || Global_6610) || Param0.f_236) || GET_ACTOR_INVULNERABILITY(&Param0 + 312)))
		{
			if (!Function_120(&Param0))
			{
				return 0;
			}
			if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(&Param0 + 312))
			{
				return 0;
			}
			if (FIRE_IS_ACTOR_ON_FIRE(&Param0 + 312))
			{
				return 0;
			}
			if (IS_ACTOR_DEAD(&Param0 + 312))
			{
				return 0;
			}
		}
	}
	if (!Function_112(&Param0, iParam1))
	{
		return 0;
	}
	Function_110(&Global_99725[iParam143] + 228, 64);
	return 1;
}

bool Function_112(struct<265> Param0) //Position: 0x5504 / 21764
{
	int iVar0;
	
	if (!Param0.f_260 != 0)
	{
		if (Function_119(&Param0 + 260, 4))
		{
			if (!Function_118(iParam1))
			{
				return 0;
			}
		}
		if (Function_119(&Param0 + 260, 1))
		{
			if (!Function_131(Param0.f_256))
			{
				return 0;
			}
		}
		if (Function_119(&Param0 + 260, 2) && Global_6606)
		{
			iVar0 = Function_116(Param0.f_264);
			if (Function_113(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_119(&Param0 + 260, 8) && Global_6606)
		{
			if (Function_113(Param0.f_252))
			{
				if (StackVal != 3)
				{
					return 0;
				}
			}
		}
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_119(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_119(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_119(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_119(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_119(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_119(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_113(int iParam0) //Position: 0x5665 / 22117
{
	if (!Function_115(iParam0))
	{
		return 0;
	}
	if (!Function_114(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_114(int iParam0) //Position: 0x5689 / 22153
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_115(int iParam0) //Position: 0x569E / 22174
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_116(int iParam0) //Position: 0x56B5 / 22197
{
	if (!Function_117(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_117(int iParam0) //Position: 0x56CF / 22223
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_118(int iParam0) //Position: 0x56E5 / 22245
{
	return Global_116927[iParam06].f_16;
}

bool Function_119(var uParam0, int iParam1) //Position: 0x56F5 / 22261
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_120(struct<237> Param0) //Position: 0x5712 / 22290
{
	if (!Param0.f_236)
	{
		if (Function_14())
		{
			if (((AI_IS_AGGROING(&Param0 + 312, &Global_54076) || AI_IS_HOSTILE_OR_ENEMY(&Param0 + 312, &Global_54076)) || GET_LAST_ATTACKER(&Param0 + 312) != &Global_54076) || IS_ACTOR_HANDSUP(&Param0 + 312))
			{
				return 0;
			}
			if ((IS_PLAYER_TARGETTING_ACTOR(false, &Param0 + 312, 1) && GET_ACTOR_FACTION(&Param0 + 312) == 20) && GET_ACTOR_FACTION(&Param0 + 312) == 23)
			{
				return 0;
			}
		}
		if ((((AI_IS_AGGROING(&Param0 + 312, &Global_54076) || AI_IS_HOSTILE_OR_ENEMY(&Param0 + 312, &Global_54076)) || GET_LAST_ATTACKER(&Param0 + 312) != &Global_54076) || IS_ACTOR_HANDSUP(&Param0 + 312)) || IS_PLAYER_TARGETTING_ACTOR(false, &Param0 + 312, 1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

bool Function_121(int iParam0) //Position: 0x57E1 / 22497
{
	if (!Function_129(1048576) || Global_6624)
	{
		return 1;
	}
	if (!Function_10(Global_99725[iParam043].f_228, 32768))
	{
		if ((Global_6646 || Global_6648) || Global_6647)
		{
			if (!Function_128(Global_119935, 0x8000000))
			{
				Function_122(&Global_54076, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

void Function_122(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x583C / 22588
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_124(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_123(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_123(char* cParam0) //Position: 0x58B1 / 22705
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_124(int iParam0, var uParam1, int iParam2) //Position: 0x58EB / 22763
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_126(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_125(uVar0))
		{
			case 0x00000002:
				if (!Function_128(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_125(char* cParam0) //Position: 0x5967 / 22887
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

int Function_126(int iParam0) //Position: 0x5A08 / 23048
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_127(&iVar1, 2147483648);
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

void Function_127(int iParam0, int iParam1) //Position: 0x5A45 / 23109
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_128(var uParam0, int iParam1) //Position: 0x5A5B / 23131
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_129(int iParam0) //Position: 0x5A6E / 23150
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_130(int iParam0) //Position: 0x5A8A / 23178
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_131(int iParam0) //Position: 0x5A9F / 23199
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_132(int iParam0) //Position: 0x5AB4 / 23220
{
	if (Global_116927[iParam06] == 0)
	{
		return 1;
	}
	return 0;
}

void Function_133() //Position: 0x5AC9 / 23241
{
	if (Function_76(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_136(Global_42827);
			*(&Global_42827 + 8) = Function_134(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_136(Global_42827);
			*(&Global_42827 + 8) = Function_134(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_134(int iParam0, int iParam1) //Position: 0x5B49 / 23369
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_135(6, 0) || Function_135(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_131(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_135(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_131(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_131(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_131(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_131(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_135(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_131(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_131(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_131(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_131(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_131(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_131(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_131(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_135(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_131(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_135(6, 0) && Function_131(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_131(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_135(9, 0) && Function_131(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_131(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_135(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_42(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_42(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_42(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

bool Function_135(int iParam0, bool bParam1) //Position: 0x67AC / 26540
{
	int iVar0;
	
	iVar0 = Function_116(iParam0);
	if (!Function_115(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_136(int iParam0) //Position: 0x67EA / 26602
{
	int iVar0;
	int iVar1;
	
	if (!Function_76(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

int Function_137(int iParam0) //Position: 0x6839 / 26681
{
	if (Global_42827 == iParam0)
	{
		return 1;
	}
	if (!Function_76(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_77(iParam0))
	{
		return 0;
	}
	if (!Function_79(iParam0))
	{
		return 0;
	}
	Global_42827 = iParam0;
	Global_42827.f_16 = 1;
	return 1;
}

void Function_138() //Position: 0x68A2 / 26786
{
	Global_42827 = 4294967295;
	if (IS_BLIP_VALID(&Global_42827 + 8))
	{
		REMOVE_BLIP(&Global_42827 + 8);
	}
	Global_42827.f_16 = 1;
	return;
}

void Function_139(int iParam0) //Position: 0x68C7 / 26823
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
			Function_138();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_140() //Position: 0x6901 / 26881
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = NET_MAILBOX_GET_MAX_NUM_CHALLENGES();
	iVar1 = 0;
	bVar3 = NET_MAILBOX_IS_SIGNED_INTO_SC();
	if (Global_131723 == bVar3 && iVar0 < 0)
	{
		Global_131723 = bVar3;
		iVar1 = 0;
		while (iVar1 < (iVar0 - 1))
		{
			if (NET_MAILBOX_IS_CHALLENGE_VALID(iVar1))
			{
				iVar2 = NET_MAILBOX_GET_CHALLENGE_BY_INDEX(iVar1);
				Function_65(&iVar2);
				Function_55(&iVar2, 0);
			}
			iVar1++;
		}
	}
	return;
}

void Function_141() //Position: 0x6959 / 26969
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return;
	}
	bVar0 = GET_ACTOR_ENUM(&Global_54076);
	if (!iLocal_73)
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
			iLocal_73 = 1;
		}
	}
	return;
}

void Function_142() //Position: 0x69E1 / 27105
{
	if (Global_140632)
	{
		if ((GET_CURRENT_GAME_TIME() - Global_140676) < IntToFloat(SC_CHALLENGE_GET_MIN_LB_REFRESH_DELAY_SECS()) || Global_140676 != 0.0f)
		{
			if (GET_CURRENT_GAME_TIME() - Global_140676) < IntToFloat(SC_CHALLENGE_GET_MIN_LB_REFRESH_DELAY_SECS())
			{
			}
			else if (Global_140676 != 0.0f)
			{
			}
			Function_143();
		}
		else
		{
			Global_140632 = 0;
		}
	}
	return;
}

void Function_143() //Position: 0x6A2C / 27180
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_146();
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		iVar1 = Global_132987[iVar0125].f_140;
		if (iVar1 >= 0)
		{
			if (!Global_132987[iVar0125].f_128)
			{
				if (Global_132987[iVar0125].f_120)
				{
					if (Function_145(iVar1, iVar0))
					{
						Global_132987[iVar0125].f_128 = 1;
					}
				}
				else if (Function_144(iVar1, iVar0))
				{
					Global_132987[iVar0125].f_128 = 1;
				}
				return;
			}
		}
		iVar0++;
	}
	return;
}

bool Function_144(int iParam0, int iParam1) //Position: 0x6AA6 / 27302
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
				Global_137989[iParam166].f_8 = 1;
				iLocal_30 = 0;
				iLocal_31 = 0;
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
						(*&Global_132987[iParam1125] + 212)[111] = TO_FLOAT(uVar0[66]);
						(*&Global_132987[iParam1125] + 212[111] + 56)[0] = uVar0[2] != 1;
						(*&Global_132987[iParam1125] + 212[111] + 56)[1] = uVar0[3] != 1;
						(*&Global_132987[iParam1125] + 212[111] + 56)[2] = uVar0[4] != 1;
						(&Global_132987[iParam1125] + 212[111])->f_4 = uVar0[40];
						strcpy(&Global_132987[iParam1125] + 212[111] + 8, NET_CHALLENGE_LB_GET_TOP_FRIEND_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_TOP_SCORER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_TOP_SCORER_STATS(&uVar68))
					{
						(*&Global_132987[iParam1125] + 212)[011] = TO_FLOAT(uVar68[66]);
						(*&Global_132987[iParam1125] + 212[011] + 56)[0] = uVar68[2] != 1;
						(*&Global_132987[iParam1125] + 212[011] + 56)[1] = uVar68[3] != 1;
						(*&Global_132987[iParam1125] + 212[011] + 56)[2] = uVar68[4] != 1;
						(&Global_132987[iParam1125] + 212[011])->f_4 = uVar68[40];
						strcpy(&Global_132987[iParam1125] + 212[011] + 8, NET_CHALLENGE_LB_GET_TOP_SCORER_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_LOCAL_GAMER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_LOCAL_GAMER_STATS(&uVar204))
					{
						if (StackVal || (StackVal > uVar204[40] != uVar204[40] && (*&Global_132987[iParam1125] + 212)[211] < TO_FLOAT(uVar204[66])))
						{
							(*&Global_132987[iParam1125] + 212)[211] = TO_FLOAT(uVar204[66]);
							(*&Global_132987[iParam1125] + 212[211] + 56)[0] = uVar204[2] != 1;
							(*&Global_132987[iParam1125] + 212[211] + 56)[1] = uVar204[3] != 1;
							(*&Global_132987[iParam1125] + 212[211] + 56)[2] = uVar204[4] != 1;
							(&Global_132987[iParam1125] + 212[211])->f_4 = uVar204[40];
						}
						strcpy(&Global_132987[iParam1125] + 212[211] + 8, NET_CHALLENGE_LB_GET_LOCAL_GAMER_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_SCORER_ABOVE_PLAYER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_STATS(&uVar136))
					{
						(*&Global_132987[iParam1125] + 212)[511] = TO_FLOAT(uVar136[66]);
						(*&Global_132987[iParam1125] + 212[511] + 56)[0] = uVar136[2] != 1;
						(*&Global_132987[iParam1125] + 212[511] + 56)[1] = uVar136[3] != 1;
						(*&Global_132987[iParam1125] + 212[511] + 56)[2] = uVar136[4] != 1;
						(&Global_132987[iParam1125] + 212[511])->f_4 = uVar136[40];
						strcpy(&Global_132987[iParam1125] + 212[511] + 8, NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_NAME(), 24);
					}
					else
					{
						(*&Global_132987[iParam1125] + 212)[511] = 0.0f;
					}
				}
				else
				{
					(*&Global_132987[iParam1125] + 212)[511] = 0.0f;
				}
				Global_137989[iParam166].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
			if (iLocal_30 <= 30)
			{
				iLocal_30++;
			}
			else
			{
				Global_137989[iParam166].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
		}
		if (iLocal_31 <= 30)
		{
			iLocal_31++;
		}
		else
		{
			Global_137989[iParam166].f_8 = 0;
			return 1;
		}
	}
	return 0;
}

bool Function_145(int iParam0, int iParam1) //Position: 0x6E68 / 28264
{
	var uVar0[67];
	var uVar68[67];
	var uVar136[67];
	
	if (Function_10(Global_140678[iParam1], 2))
	{
		return 1;
	}
	if (!StackVal)
	{
		if (!NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_CREATE_READER(iParam0, 1))
			{
				Global_137989[iParam166].f_8 = 1;
				iLocal_30 = 0;
				iLocal_31 = 0;
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
						(*&Global_132987[iParam1125] + 212)[111] = TO_FLOAT(uVar0[1]);
						strcpy(&Global_132987[iParam1125] + 212[111] + 8, NET_CHALLENGE_LB_GET_TOP_FRIEND_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_TOP_SCORER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_TOP_SCORER_STATS(&uVar68))
					{
						(*&Global_132987[iParam1125] + 212)[011] = TO_FLOAT(uVar68[1]);
						strcpy(&Global_132987[iParam1125] + 212[011] + 8, NET_CHALLENGE_LB_GET_TOP_SCORER_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_SCORER_ABOVE_PLAYER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_STATS(&uVar136))
					{
						(*&Global_132987[iParam1125] + 212)[511] = TO_FLOAT(uVar136[1]);
						strcpy(&Global_132987[iParam1125] + 212[511] + 8, NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_NAME(), 24);
					}
				}
				Global_137989[iParam166].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				if (Function_10(Global_140678[iParam1], 1))
				{
					if (!Function_10(Global_140678[iParam1], 2))
					{
						Function_110(&(Global_140678[iParam1]), 2);
					}
				}
				return 1;
			}
			if (iLocal_30 <= 30)
			{
				iLocal_30++;
			}
			else
			{
				Global_137989[iParam166].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
		}
		if (iLocal_31 <= 30)
		{
			iLocal_31++;
		}
		else
		{
			Global_137989[iParam166].f_8 = 0;
			return 1;
		}
	}
	return 0;
}

void Function_146() //Position: 0x7038 / 28728
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<189> Var3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Global_132987[iVar0125].f_140 >= 0)
		{
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Global_132987[iVar0125].f_128)
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
			Global_132987[iVar0125].f_128 = 0;
			iVar0++;
		}
		Global_140632 = 0;
		Global_140676 = GET_CURRENT_GAME_TIME();
		*(&Var3 + 80) = 3;
		RETRIEVE_GAME_STATE(&Var3, 48, 1);
		Var3.f_188 = Global_140676;
		STORE_GAME_STATE(&Var3, 48, 1);
	}
	return;
}

void Function_147() //Position: 0x70EC / 28908
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_148() //Position: 0x71F2 / 29170
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && Global_44085[iVar09].f_48 == 4294967295 == 1) == 2) == 0)
		{
			SET_REGION_VISITED(Global_44085[iVar09].f_48, 1);
		}
		iVar0++;
	}
	return;
}

void Function_149() //Position: 0x724B / 29259
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
				Function_65(&uVar2);
				Function_55(&uVar2, 0);
			}
			iVar1++;
		}
	}
	return;
}

void Function_150() //Position: 0x728F / 29327
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[32];
	int iVar17;
	bool bVar18;
	
	if (Function_79(15) && !Function_77(15))
	{
		Function_192(15, 2);
	}
	if (Function_79(13) && !Function_77(13))
	{
		Function_192(13, 2);
	}
	if (Function_79(14) && !Function_77(14))
	{
		Function_192(14, 2);
	}
	iVar0 = 0;
	while (iVar0 <= Global_42265)
	{
		if (Global_42265[iVar09] != 4294967295)
		{
			Function_156(iVar0);
			if (Function_152(iVar0))
			{
				if (Global_42265[iVar09].f_64 >= 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_42265[iVar09].f_64, 0);
				}
			}
			else
			{
				if (Global_42265[iVar09].f_64 >= 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_42265[iVar09].f_64, 1);
				}
				if (Global_42827 == iVar0)
				{
					Function_138();
				}
			}
		}
		iVar0++;
	}
	bVar18 = GET_ACTOR_ENUM(&Global_54076);
	iVar0 = 0;
	while (iVar0 <= Global_42265)
	{
		if (Function_76(iVar0))
		{
			if (Global_42265[iVar09] != 4294967295)
			{
				strcpy(&cVar9, "out_", 32);
				stradd(&cVar9, &Global_42265[iVar09] + 32, 32);
				iVar17 = STRING_TO_HASH(&cVar9);
				if (Function_79(iVar0))
				{
					if (Function_77(iVar0))
					{
						SATCHEL_SET_OUTFIT_STATE(iVar17, 3);
					}
					else
					{
						SATCHEL_SET_OUTFIT_STATE(iVar17, 2);
					}
				}
				else if (Function_151(iVar0))
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
				if (Global_42265[iVar09] == 16)
				{
					strcpy(&cVar9, "out_mountainman", 32);
				}
				else if (Global_42265[iVar09] == 17)
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

bool Function_151(int iParam0) //Position: 0x746B / 29803
{
	if (!Function_76(iParam0))
	{
		LOG_ERROR("Attempting to check state of invalid outfit");
		return 0;
	}
	if (Function_78(iParam0, 8))
	{
		return 1;
	}
	return 0;
}

bool Function_152(int iParam0) //Position: 0x74BA / 29882
{
	int iVar0;
	
	if (Function_76(iParam0))
	{
		if (Function_79(iParam0) && !Function_77(iParam0))
		{
			iVar0 = Function_136(iParam0);
			switch (iParam0)
			{
				case 0x00000004:
					switch (iVar0)
					{
						case 0x00000001:
							return 1;
							break;
						
						case 0x00000002:
							if (Function_135(6, 0) || Function_135(12, 0))
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
							if (Function_131(13))
							{
								if (Function_153(&(Global_99725[1443]), 14, 1, 1) && !Function_130(14))
								{
									return 1;
								}
								return 0;
							}
							if (Function_131(12))
							{
								if ((Function_153(&(Global_99725[1343]), 13, 1, 1) && !Function_130(13)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1343] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_131(11))
							{
								if ((Function_153(&(Global_99725[1243]), 12, 1, 1) && !Function_130(12)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1243] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_131(10))
							{
								if ((Function_153(&(Global_99725[1143]), 11, 1, 1) && !Function_130(11)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1143] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_135(5, 0))
							{
								if (Function_153(&(Global_99725[1043]), 10, 1, 1) && !Function_130(10))
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
							if (Function_131(26))
							{
								if (Function_153(&(Global_99725[2743]), 27, 1, 1) && !Function_130(27))
								{
									return 1;
								}
								return 0;
							}
							if (Function_131(25))
							{
								if (Function_153(&(Global_99725[2643]), 26, 1, 1) && !Function_130(26))
								{
									return 1;
								}
								return 0;
							}
							if (Function_131(24))
							{
								if (Function_153(&(Global_99725[2543]), 25, 1, 1) && !Function_130(25))
								{
									return 1;
								}
								return 0;
							}
							if (Function_131(23))
							{
								if (Function_153(&(Global_99725[2443]), 24, 1, 1) && !Function_130(24))
								{
									return 1;
								}
								return 0;
							}
							if (Function_135(26, 0))
							{
								if (Function_153(&(Global_99725[2343]), 23, 1, 1) && !Function_130(23))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000008:
							if (Function_131(55))
							{
								if ((Function_153(&(Global_99725[5643]), 56, 1, 1) && !Function_130(56)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[5643] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_131(54))
							{
								if ((Function_153(&(Global_99725[5543]), 55, 1, 1) && !Function_130(55)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[5543] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_131(27))
							{
								if (Function_153(&(Global_99725[5443]), 54, 1, 1) && !Function_130(54))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_135(41, 0))
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
							if (Function_131(52))
							{
								if ((Function_153(&(Global_99725[5343]), 53, 1, 1) && !Function_130(53)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[5343] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_131(51))
							{
								if (Function_153(&(Global_99725[5243]), 52, 1, 1) && !Function_130(52))
								{
									return 1;
								}
								return 0;
							}
							if (Function_131(50))
							{
								if (Function_153(&(Global_99725[5143]), 51, 1, 1) && !Function_130(51))
								{
									return 1;
								}
								return 0;
							}
							if (Function_131(49))
							{
								if (Function_153(&(Global_99725[5043]), 50, 1, 1) && !Function_130(50))
								{
									return 1;
								}
								return 0;
							}
							if (Function_135(17, 0))
							{
								if (Function_153(&(Global_99725[4943]), 49, 1, 1) && !Function_130(49))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_135(57, 0))
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
							if (Function_131(19))
							{
								if (Function_153(&(Global_99725[2043]), 20, 1, 1) && !Function_130(20))
								{
									return 1;
								}
								return 0;
							}
							if (Function_131(18))
							{
								if ((Function_153(&(Global_99725[1943]), 19, 1, 1) && !Function_130(19)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1943] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_131(17))
							{
								if (Function_153(&(Global_99725[1843]), 18, 1, 1) && !Function_130(18))
								{
									return 1;
								}
								return 0;
							}
							if (Function_131(16))
							{
								if ((Function_153(&(Global_99725[1743]), 17, 1, 1) && !Function_130(17)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1743] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_131(15))
							{
								if (Function_153(&(Global_99725[1643]), 16, 1, 1) && !Function_130(16))
								{
									return 1;
								}
								return 0;
							}
							if (Function_135(8, 0))
							{
								if (Function_153(&(Global_99725[1543]), 15, 1, 1) && !Function_130(15))
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

int Function_153(struct<265> Param0) //Position: 0x7AB4 / 31412
{
	if (!Param0.f_260 != 0)
	{
		if (Function_119(&Param0 + 260, 4))
		{
			if (!Function_118(iParam1))
			{
				return 0;
			}
		}
		if (Function_119(&Param0 + 260, 1))
		{
			if (&Global_99725[Param0.f_25643] + 36 != &Global_99725[iParam143] + 36 || iParam3)
			{
				if (!Function_131(Param0.f_256))
				{
					return 0;
				}
			}
		}
		if (Function_119(&Param0 + 260, 2) && Global_6606)
		{
			if (!Function_135(Param0.f_264, 0))
			{
				return 0;
			}
		}
		if (Function_119(&Param0 + 260, 8) && Global_6606)
		{
			if (!Function_155(Param0.f_252, 0))
			{
				return 0;
			}
		}
		if (!&bParam2)
		{
			return 1;
		}
		return Function_154(&Param0);
	}
	return 1;
}

int Function_154(struct<261> Param0) //Position: 0x7B80 / 31616
{
	if (!Param0.f_260 != 0)
	{
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_119(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_119(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_119(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_119(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_119(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_119(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_155(int iParam0, bool bParam1) //Position: 0x7C3B / 31803
{
	if (!Function_113(iParam0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

void Function_156(int iParam0) //Position: 0x7C72 / 31858
{
	int iVar0;
	
	if (!Function_76(iParam0))
	{
		return;
	}
	if (Function_77(iParam0))
	{
		return;
	}
	if (!Function_78(iParam0, 1048576))
	{
		return;
	}
	iVar0 = Function_191(iParam0);
	if (iVar0 >= Global_42265[iParam09].f_24)
	{
		Global_42265[iParam09].f_24 = iVar0;
		if (Global_42265[iParam09].f_24 == Global_42265[iParam09].f_28)
		{
			Function_157(iParam0, 0, 1);
		}
	}
	return;
}

void Function_157(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7CD5 / 31957
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_76(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_77(bParam0))
	{
		if (!Function_79(bParam0))
		{
			Function_183(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_42265[bParam09].f_64 != 4294967295 || (Global_42265[bParam09].f_64 != 0 && Global_42265[bParam09].f_28 < 0))
		{
			Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_42265[bParam09].f_64);
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, false, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_181(457, 1, 0, 0);
		Function_75(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_40(0, 0, 1, 1))
			{
				Function_160(1);
				Function_159(1, 0);
			}
			else
			{
				Function_158();
			}
		}
	}
	return;
}

void Function_158() //Position: 0x7E76 / 32374
{
	return;
}

void Function_159(int iParam0, int iParam1) //Position: 0x7E7C / 32380
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = iParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_160(bool bParam0) //Position: 0x7EBB / 32443
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_173();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_161();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_127(&Global_99144, 1);
		Function_127(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_161() //Position: 0x7F10 / 32528
{
	Function_171();
	Function_170();
	Function_170();
	Function_169();
	Function_169();
	Function_168();
	Function_168();
	Function_167(0);
	Function_167(0);
	Function_165();
	Function_164();
	Function_163();
	Function_162();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_147();
	return;
}

void Function_162() //Position: 0x7F5B / 32603
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
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
	Global_131716 = fVar0;
	return;
}

void Function_163() //Position: 0x7F8E / 32654
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
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_164() //Position: 0x8155 / 33109
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
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_165() //Position: 0x830E / 33550
{
	Function_166(&Global_42918, 1, 0);
	return;
}

void Function_166(struct<2317> Param0) //Position: 0x831C / 33564
{
	var uVar0;
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
	
	uVar0 = Function_47();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_167(char* cParam0) //Position: 0x8539 / 34105
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
					iVar2 = ((Function_31((50 + iVar4)) + Function_31((183 + iVar4))) + Function_31((90 + iVar4)));
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
	Function_16(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_168() //Position: 0x85E0 / 34272
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
		iVar2 = ((Function_31((50 + iVar3) + 15) + Function_31((183 + iVar3) + 15)) + Function_31((90 + iVar3) + 15));
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
	Function_16(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_169() //Position: 0x8669 / 34409
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
			iVar2 = ((Function_31((50 + iVar3) + 8) + Function_31((183 + iVar3) + 8)) + Function_31((90 + iVar3) + 8));
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
	Function_16(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_170() //Position: 0x8700 / 34560
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
		iVar2 = ((Function_31((50 + iVar3)) + Function_31((183 + iVar3))) + Function_31((90 + iVar3)));
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
	Function_16(179, iVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar4, 8);
	return StackVal, cVar0;
}

void Function_171() //Position: 0x877F / 34687
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_172(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_16(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_172(int iParam0, bool bParam1, int iParam2) //Position: 0x87BC / 34748
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_29(iParam0, bParam1, 1);
	Function_28(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_17(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_173() //Position: 0x89C8 / 35272
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_14())
	{
		Function_178(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_178(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_174(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_174(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_42(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

struct<8> Function_174(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x8A7F / 35455
{
	int iVar0;
	
	iVar0 = Function_177(&uParam2, &fParam3);
	if (Function_176(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_110(&Global_99144, 1);
			Function_127(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_110(&Global_99144, 2);
			Function_127(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_110(&Global_99144, 2);
		Function_127(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_175();
	return StackVal, Function_175();
}

struct<8> Function_175() //Position: 0x8B77 / 35703
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_176(int iParam0) //Position: 0x8B81 / 35713
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_177(bool bParam0, bool bParam1) //Position: 0x8B97 / 35735
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_85(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_85(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_176(iVar0) && !&bParam1)
	{
		iVar0 = Function_177(&bParam0, 1);
	}
	return iVar0;
}

struct<8> Function_178(float fParam0, int iParam1) //Position: 0x8C63 / 35939
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_180(&Global_54076, &Var3);
	if (!Function_179(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_179(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_110(&Global_99144, 2);
	Function_127(&Global_99144, 1);
	iParam1 = 0;
	if (Function_42(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_179(int iParam0) //Position: 0x948F / 38031
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_10(uVar0, 0x1000000) || Function_10(uVar0, 0x2000000)) || Function_10(uVar0, 0x4000000)) || !Function_10(uVar0, 0x10000000));
}

void Function_180(var uParam0, int iParam1) //Position: 0x94CA / 38090
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

int Function_181(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x94D9 / 38105
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_29(iParam0, TO_FLOAT(bParam1), 1);
	Function_28(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_17(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_182(iParam0);
	return 1;
}

void Function_182(int iParam0) //Position: 0x9701 / 38657
{
	switch (iParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

void Function_183(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x979F / 38815
{
	char* cVar0[32];
	
	if (!Function_76(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_190(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_79(bParam0))
	{
		Function_181(456, 1, 0, 0);
		Function_75(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_40(0, 0, 1, 1))
			{
				Function_160(1);
				Function_159(1, 5);
			}
			else
			{
				Function_158();
			}
		}
		Function_185(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_184() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_184() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_12(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_14())
		{
			if (!Function_128(Global_119934, 2))
			{
				Function_122(&Global_54076, 2, 1, 0);
			}
		}
	}
}

bool Function_184() //Position: 0x98FB / 39163
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_185(bool bParam0) //Position: 0x9928 / 39208
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_188(bParam0, Function_189(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_188(bParam0, Function_189(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_191(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_187(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_186(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_186(int iParam0) //Position: 0x9AD8 / 39640
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_76(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_187(char* cParam0, bool bParam1) //Position: 0x9B2F / 39727
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

bool Function_188(bool bParam0, int iParam1) //Position: 0x9B54 / 39764
{
	int iVar0;
	
	if (!Function_76(bParam0))
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

int Function_189(bool bParam0) //Position: 0x9BB3 / 39859
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_190(int iParam0) //Position: 0x9BBF / 39871
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

var Function_191(bool bParam0) //Position: 0x9BDB / 39899
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_76(bParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[bParam09].f_28)
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

void Function_192(int iParam0, int iParam1) //Position: 0x9C31 / 39985
{
	int iVar0;
	
	if (!Function_76(iParam0))
	{
		LOG_ERROR("Attempting to unset status on invalid outfit");
		return;
	}
	iVar0 = (StackVal && iParam1);
	Global_42265[iParam09].f_8 = (StackVal - iVar0);
	return;
}

void Function_193(var[] uParam0, struct<16>[] Param1, bool bParam2) //Position: 0x9C96 / 40086
{
	char* cVar0[8];
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
	
	Function_170();
	cVar0 = { StackVal, Function_170() };
	Function_195(179, &cVar0, 0, 1);
	Function_169();
	cVar0 = { StackVal, Function_169() };
	Function_195(180, &cVar0, 0, 1);
	Function_168();
	cVar0 = { StackVal, Function_168() };
	Function_195(181, &cVar0, 0, 1);
	Function_167(0);
	cVar0 = { StackVal, Function_167(0) };
	Function_195(182, &cVar0, 0, 1);
	Function_171();
	bVar2 = false;
	while (bVar2 <= uParam0)
	{
		switch (Param1[bVar216].f_96)
		{
			case 0xFFFFFFFF:
				break;
			
			case 0x00000000:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				if ((uParam0[bVar2] - IntToFloat(FLOOR(uParam0[bVar2]))) < 0.0f)
				{
					strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(uParam0[bVar2], 6, 2), 32);
				}
				else
				{
					strcpy(&cVar4, INT_TO_STRING(FLOOR(uParam0[bVar2])), 32);
				}
				*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
				break;
			
			case 0x00000001:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				strcpy(&cVar4, INT_TO_STRING(FLOOR(uParam0[bVar2])), 32);
				*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
				break;
			
			case 0x00000003:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				if (uParam0[bVar2] < 0.0f)
				{
					if ((uParam0[bVar2] - IntToFloat(FLOOR(uParam0[bVar2]))) < 0.0f)
					{
						strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(uParam0[bVar2], 6, 2), 32);
					}
					else
					{
						strcpy(&cVar4, INT_TO_STRING(FLOOR(uParam0[bVar2])), 32);
					}
					*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
					HIDE_STAT(&(Param1[bVar216]), 0);
					UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
				}
				else
				{
					HIDE_STAT(&(Param1[bVar216]), 1);
				}
				break;
			
			case 0x00000004:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				if (uParam0[bVar2] < 0.0f)
				{
					strcpy(&cVar4, INT_TO_STRING(FLOOR(uParam0[bVar2])), 32);
					*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
					HIDE_STAT(&(Param1[bVar216]), 0);
					UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
				}
				else
				{
					HIDE_STAT(&(Param1[bVar216]), 1);
				}
				break;
			
			case 0x00000002:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				break;
			
			case 0x00000005:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				if (uParam0[bVar2] < 0.0f)
				{
					if ((uParam0[bVar2] - IntToFloat(FLOOR(uParam0[bVar2]))) < 0.0f)
					{
						strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(uParam0[bVar2], 6, 2), 32);
					}
					else
					{
						strcpy(&cVar4, INT_TO_STRING(FLOOR(uParam0[bVar2])), 32);
					}
					*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
					UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
					HIDE_STAT(&(Param1[bVar216]), 0);
				}
				else
				{
					strcpy(&cVar4, "0", 32);
					*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
					UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
					HIDE_STAT(&(Param1[bVar216]), 1);
				}
				break;
			
			case 0x0000000E:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				strcpy(&cVar4, INT_TO_STRING(FLOOR(uParam0[bVar2])), 32);
				stradd(&cVar4, "/", 32);
				stradd(&cVar4, INT_TO_STRING(FLOOR(Param1[bVar216].f_112)), 32);
				*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
				break;
			
			case 0x00000013:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(Function_194(bVar2), 3, 1), 32);
				stradd(&cVar4, "%", 32);
				*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
				break;
			
			case 0x00000006:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				if ((uParam0[bVar2] - IntToFloat(FLOOR(uParam0[bVar2]))) < 0.0f)
				{
					strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(uParam0[bVar2], 6, 2), 32);
				}
				else
				{
					strcpy(&cVar4, INT_TO_STRING(FLOOR(uParam0[bVar2])), 32);
				}
				*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
				break;
			
			case 0x0000000F:
			case 0x00000010:
			case 0x00000011:
			case 0x00000012:
			case 0x00000009:
			case 0x0000000A:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				HIDE_STAT(&(Param1[bVar216]), 1);
				break;
			
			case 0x00000007:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(Function_194(bVar2), 3, 1), 32);
				stradd(&cVar4, "%", 32);
				*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTSTRING(&cVar4);
					PRINTNL();
				}
				UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
				break;
			
			case 0x00000008:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				bVar12 = Function_194(bVar2);
				strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(bVar12, 3, 1), 32);
				stradd(&cVar4, "%", 32);
				*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTSTRING(&cVar4);
					PRINTNL();
				}
				fVar3 = (bVar12 / 100.0f);
				UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, fVar3);
				break;
			
			case 0x0000000B:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				if (uParam0[bVar2] < 0.0f)
				{
					strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(Function_194(bVar2), 3, 1), 32);
					stradd(&cVar4, "%", 32);
					*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
					HIDE_STAT(&(Param1[bVar216]), 0);
					UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
				}
				else
				{
					HIDE_STAT(&(Param1[bVar216]), 1);
				}
				break;
			
			case 0x0000000C:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				if (uParam0[bVar2] < 0.0f)
				{
					bVar12 = Function_194(bVar2);
					strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(bVar12, 3, 1), 32);
					stradd(&cVar4, "%", 32);
					*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
					HIDE_STAT(&(Param1[bVar216]), 0);
					fVar3 = (bVar12 / 100.0f);
					UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, fVar3);
				}
				else
				{
					HIDE_STAT(&(Param1[bVar216]), 1);
				}
				break;
			
			case 0x00000014:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				if (IS_STRING_VALID(&Param1[bVar216] + 32))
				{
					HIDE_STAT(&(Param1[bVar216]), 0);
					UPDATE_STAT(&(Param1[bVar216]), UI_GET_STRING(&Param1[bVar216] + 32), 3212836864);
				}
				else
				{
					HIDE_STAT(&(Param1[bVar216]), 1);
				}
				break;
			
			case 0x00000015:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				UI_SET_MONEY("BLAH", "statbuffer", FLOOR(uParam0[bVar2]));
				strcpy(&Param1[bVar216] + 32, UI_GET_STRING("statbuffer"), 32);
				UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
				break;
			
			case 0x00000016:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				if (uParam0[bVar2] > 2000.0f)
				{
					bVar12 = uParam0[bVar2];
					bVar13 = false;
				}
				else
				{
					bVar12 = (uParam0[bVar2] / 2000.0f);
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
				*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
				break;
			
			case 0x00000017:
			case 0x0000000D:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				bVar12 = uParam0[bVar2];
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
				*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
				if (Param1[bVar216].f_96 == 13)
				{
					if (uParam0[bVar2] < 0.0f)
					{
						HIDE_STAT(&(Param1[bVar216]), 0);
					}
					else
					{
						HIDE_STAT(&(Param1[bVar216]), 1);
					}
				}
				break;
			
			case 0x00000018:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				bVar12 = uParam0[bVar2];
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
				*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
				break;
			
			case 0x00000019:
				if (bParam2)
				{
					PRINTSTRING(&(Param1[bVar216]));
					PRINTSTRING("=");
					PRINTFLOAT(uParam0[bVar2]);
					PRINTNL();
				}
				bVar12 = uParam0[bVar2];
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
				*(&Param1[bVar216] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar4 };
				UPDATE_STAT(&(Param1[bVar216]), &Param1[bVar216] + 32, 3212836864);
				break;
			
			case 0x0000001A:
				PRINTSTRING("PAUSE_UPDATE_STATS: Attempting to display a Stat of STAT_TYPE_TEMP_BUFFER_ENTRY: ");
				PRINTINT(bVar2);
				PRINTSTRING(" - ");
				PRINTSTRING(&(Param1[bVar216]));
				PRINTNL();
				LOG_WARNING("PAUSE_UPDATE_STATS: Attempting to display a Stat of STAT_TYPE_TEMP_BUFFER_ENTRY. This is an illegal operation.");
				break;
			
			default:
				PRINTSTRING("PAUSE_UPDATE_STATS: Attempting to display an unknown Stat Type: ");
				PRINTINT(bVar2);
				PRINTSTRING(" - ");
				PRINTSTRING(&(Param1[bVar216]));
				PRINTNL();
				LOG_WARNING("PAUSE_UPDATE_STATS: Attempting to display an unknown Stat Type!");
				break;
		}
		bVar2++;
	}
	return;
}

bool Function_194(int iParam0) //Position: 0xABF5 / 44021
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar2 = 100.0f;
	}
	else
	{
		fVar2 = Global_55480[iParam016].f_112;
	}
	fVar3 = Global_55480[iParam016].f_108;
	fVar1 = Function_26(iParam0);
	if (Function_25(iParam0) != 19 || Function_25(iParam0) != 17)
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

int Function_195(int iParam0, char* cParam1) //Position: 0xACD6 / 44246
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_196(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_196(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0xB02D / 45101
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

