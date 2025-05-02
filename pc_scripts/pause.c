//Decompiled with MagicRDR v1.0
//Function Count : 322
//Statics Count : 74
//Natives Count : 388
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
	bVar0 = !Global_53524.f_44;
	iVar1 = 1;
	Function_315(&Global_54086, &Global_55480, 0);
	Function_307();
	Function_306();
	if (Function_305(StackVal) >= 0 || 0)
	{
		UI_EXIT("pauseBounty");
		UI_EXIT("pauseBountyValue");
		UI_EXCLUDE("pauseBounty");
		UI_EXCLUDE("pauseBountyValue");
	}
	else
	{
		UI_SET_MONEY(StackVal, "BountyAmount", Function_305("PlayerBounty"));
		UI_INCLUDE("pauseBounty");
		UI_INCLUDE("pauseBountyValue");
		UI_ENTER("pauseBounty");
		UI_ENTER("pauseBountyValue");
		UI_REFRESH("pauseBounty");
		UI_REFRESH("pauseBountyValue");
	}
	UI_INCLUDE("pauseMoney");
	UI_INCLUDE("pauseMoneyValue");
	UI_ENTER("pauseMoney");
	UI_ENTER("pauseMoneyValue");
	UI_REFRESH("pauseMoney");
	UI_REFRESH("pauseMoneyValue");
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
	Function_304();
	Function_303();
	iLocal_72 = GET_TARGETED_JOURNAL_ENTRY();
	while (!IS_EXITFLAG_SET())
	{
		if ((iVar1 && (UI_ISFOCUSED("PM_Stats") || UI_ISFOCUSED("PM_Collections"))) && HAS_STRING_TABLE_LOADED("stats"))
		{
			iVar1 = 0;
			Function_315(&Global_54086, &Global_55480, 0);
		}
		else if (!(UI_ISFOCUSED("PM_Stats") || UI_ISFOCUSED("PM_Collections")))
		{
			iVar1 = 1;
		}
		Function_298();
		if (!Global_140632 && bVar0)
		{
			Function_306();
			bVar0 = false;
		}
		Function_297();
		Function_296();
		Function_271();
		Function_269();
		Function_259();
		Function_229();
		if (bVar2)
		{
			Function_221(&uLocal_36);
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
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x354 / 852
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

void Function_2() //Position: 0x39D / 925
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

int Function_3() //Position: 0x3D6 / 982
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

void Function_4(var uParam0, var uParam1, int iParam2) //Position: 0x497 / 1175
{
	Global_42834.f_68 = 5;
	Global_42834.f_72 = uParam0;
	Global_42834.f_76 = uParam1;
	Global_42834.f_80 = iParam2;
	return;
}

void Function_5(struct<2> Param0, var uParam2, bool bParam3, var uParam4) //Position: 0x4B8 / 1208
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

void Function_6(var uParam0) //Position: 0x579 / 1401
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

void Function_7() //Position: 0x5C2 / 1474
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

bool Function_8(int iParam0) //Position: 0x5ED / 1517
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_9() //Position: 0x603 / 1539
{
	return Function_10(StackVal, 1);
}

bool Function_10(bool bParam0, bool bParam1) //Position: 0x612 / 1554
{
	return (bParam0 && bParam1) == 0;
}

void Function_11() //Position: 0x61F / 1567
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
			if (Global_53410[iVar0])
			{
				if (iVar2 == 0)
				{
					if (Function_15(iVar0, 0, &bVar1))
					{
						Global_53410[iVar0] = 0;
						UI_CHEAT_SET_VALUE(iVar0, 0);
					}
				}
			}
			else if (iVar2 == 1)
			{
				if (!Function_15(iVar0, 1, &bVar1))
				{
					Global_53410[iVar0] = 0;
					UI_CHEAT_SET_VALUE(iVar0, 0);
				}
				else
				{
					Global_53410[iVar0] = 1;
				}
			}
			if (bVar1)
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

void Function_12(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6D2 / 1746
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
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_13(int iParam0) //Position: 0x75D / 1885
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

bool Function_14() //Position: 0x79C / 1948
{
	if (Function_10(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_15(int iParam0, bool bParam1, int iParam2) //Position: 0x7B7 / 1975
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	var uVar9;
	int iVar11;
	
	iParam2 = 0;
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
				SET_DEADEYE_REGENERATION_RATE(0, 0,25f, 0);
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
				Function_220(500, 1, 1);
				UI_CHEAT_SET_VALUE(6, 0);
				UI_SET_HAS_CHEATED(1);
				return 0;
			}
			break;
		
		case 0x0000000A:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_219(4096);
				Function_219(8192);
				Function_219(16384);
				return 1;
			}
			Function_218(4096);
			Function_218(8192);
			Function_218(16384);
			return 1;
			break;
		
		case 0x0000000B:
			if (bParam1)
			{
				Function_217(StackVal, 500);
				UI_CHEAT_SET_VALUE(11, 0);
				UI_SET_HAS_CHEATED(1);
				return 0;
			}
			break;
		
		case 0x0000000C:
			if (bParam1)
			{
				Function_216(StackVal, 500);
				UI_CHEAT_SET_VALUE(12, 0);
				UI_SET_HAS_CHEATED(1);
				return 0;
			}
			break;
		
		case 0x0000000D:
			if (bParam1)
			{
				Function_213(StackVal, 0);
				Function_211(0);
				Global_40060.f_4420 = 0;
				(*&Global_40060 + 68[11181][35])[0] = StackVal;
				Function_210();
				RELEASE_LAYOUT_OBJECTS(&Global_39918);
				if (IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					TERMINATE_SCRIPT(&Global_39922 + 96);
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
				Function_209(3, 10000, 0);
				Function_207(4, "sr_ntr6", 1, 1);
				UI_CHEAT_SET_VALUE(19, 0);
				Global_21369.f_248 = 5;
				return 0;
			}
			break;
		
		case 0x00000014:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_209(3, 0, 0);
				Function_207(4, "sr_ntr1", 1, 1);
				UI_CHEAT_SET_VALUE(20, 0);
				Global_21369.f_248 = 0;
				return 0;
			}
			break;
		
		case 0x00000015:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_209(1, 5000, 0);
				Function_207(2, "sr_hnr1", 1, 1);
				Global_21369.f_244 = 6;
				UI_CHEAT_SET_VALUE(21, 0);
				return 0;
			}
			break;
		
		case 0x00000016:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_209(1, 4294962296, 0);
				Function_207(2, "sr_hnr7", 1, 1);
				Global_21369.f_244 = 0;
				UI_CHEAT_SET_VALUE(22, 0);
				return 0;
			}
			break;
		
		case 0x00000017:
			if (bParam1)
			{
				UI_SET_HAS_CHEATED(1);
				Function_209(1, 0, 0);
				Function_207(2, "sr_hnr4", 1, 1);
				Global_21369.f_244 = 3;
				UI_CHEAT_SET_VALUE(23, 0);
				return 0;
			}
			break;
		
		case 0x0000001D:
			if (bParam1)
			{
				if (((Function_206(0, 0, 1, 1) || Function_202(&Global_54076, 0, 0)) || Function_201()) || Global_99146)
				{
					iParam2 = 1;
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
					SET_WEAPONENUM_LOCKED(25, 0);
					SET_WEAPONENUM_LOCKED(18, 0);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 7, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 3, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 11, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 13, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 20, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 25, 1.0f, 0, 1);
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 18, 1.0f, 0, 1);
					_ADD_AMMO_OF_TYPE(&Global_54076, 3, 3.0f, 0, 1);
					UI_CHEAT_SET_VALUE(17, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000018:
			if (!Function_206(0, 0, 1, 1))
			{
				UI_SET_HAS_CHEATED(1);
				iVar1 = Function_200();
				iVar1++;
				if (iVar1 >= 5)
				{
					iVar1 = 0;
				}
				Function_199(iVar1, 0);
				Global_26182 = iVar1;
				UI_CHEAT_SET_VALUE(24, 0);
				return 0;
			}
			if (bParam1)
			{
				iParam2 = 1;
			}
			break;
		
		case 0x00000008:
			if ((!Function_206(0, 0, 1, 1) && !Global_99146) && !Global_6630)
			{
				if (bParam1)
				{
					if (IS_POPSET_VALID(&(Global_46972[6])))
					{
						UI_SET_HAS_CHEATED(1);
						bVar2 = Function_198(&(Global_46972[6]), 0, 23, 0);
					}
					else
					{
						bVar2 = 976;
					}
					if (Function_197(bVar2))
					{
						STREAMING_REQUEST_ACTOR(bVar2, true, false);
						GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &Var3);
						GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var5);
						VSCALE(&Var3, -7.0f);
						Var5 = Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var5, StackVal);
						FIND_GROUND_INTERSECTION(&Var5, 80.0f, &Var7, &uVar9);
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
						Global_53408 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_AMBIENT_LAYOUT(), Function_196(), bVar2, Var7, Vector(0.0f, 0.0f, 0.0f));
						ACCESSORIZE_HORSE(&Global_53408, 3);
						STREAMING_EVICT_ACTOR(bVar2, 4294967295);
						RELEASE_ACTOR(&Global_53408);
						UI_CHEAT_SET_VALUE(8, 0);
						return 0;
					}
				}
			}
			if (bParam1)
			{
				iParam2 = 1;
			}
			break;
		
		case 0x00000007:
			if ((!Function_206(0, 0, 1, 1) && !Global_99146) && !Global_6630)
			{
				if (bParam1)
				{
					UI_SET_HAS_CHEATED(1);
					bVar2 = 1000;
					if (Function_197(bVar2))
					{
						STREAMING_REQUEST_ACTOR(bVar2, true, false);
						GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &Var3);
						GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var5);
						VSCALE(&Var3, -7.0f);
						Var5 = Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var5, StackVal);
						FIND_GROUND_INTERSECTION(&Var5, 80.0f, &Var7, &uVar9);
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
						Global_53408 = CREATE_ACTOR_IN_LAYOUT(StackVal, GET_AMBIENT_LAYOUT(), Function_196(), bVar2, Var7, Vector(0.0f, 0.0f, 0.0f));
						ACCESSORIZE_HORSE(&Global_53408, 3);
						STREAMING_EVICT_ACTOR(bVar2, 4294967295);
						RELEASE_ACTOR(&Global_53408);
						UI_CHEAT_SET_VALUE(7, 0);
						return 0;
					}
				}
			}
			if (bParam1)
			{
				iParam2 = 1;
			}
			break;
		
		case 0x00000009:
			if ((!Function_206(0, 0, 1, 1) && !Global_99146) && !Global_6630)
			{
				if (bParam1)
				{
					if (IS_POPSET_VALID(&(Global_46972[9])))
					{
						UI_SET_HAS_CHEATED(1);
						bVar2 = Function_198(&(Global_46972[9]), 0, 0, 0);
					}
					else
					{
						bVar2 = 1177;
					}
					if (Function_197(bVar2))
					{
						STREAMING_REQUEST_ACTOR(bVar2, true, false);
						GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &Var3);
						GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var5);
						VSCALE(&Var3, -7.0f);
						Var5 = Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var5, StackVal);
						FIND_GROUND_INTERSECTION(&Var5, 80.0f, &Var7, &uVar9);
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
						Global_53408 = Function_192(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_196(), bVar2, 4294967295, Var7, Vector(0.0f, 0.0f, 0.0f), 1, 976, 976, 976, 4);
						STREAMING_EVICT_ACTOR(bVar2, 4294967295);
						RELEASE_ACTOR(&Global_53408);
						UI_CHEAT_SET_VALUE(9, 0);
						return 0;
					}
				}
			}
			if (bParam1)
			{
				iParam2 = 1;
			}
			break;
		
		case 0x0000001E:
			if (bParam1)
			{
				Function_191(3, 0, 1);
				Function_191(15, 0, 1);
				Function_191(11, 0, 1);
				Function_191(1, 0, 1);
				UI_SET_HAS_CHEATED(1);
				UI_CHEAT_SET_VALUE(30, 0);
				return 0;
			}
			break;
		
		case 0x0000001F:
			if (bParam1)
			{
				if (Function_190(57, 0))
				{
					Function_191(12, 0, 1);
					Function_191(10, 0, 1);
					Function_191(9, 0, 1);
					UI_SET_HAS_CHEATED(1);
					UI_CHEAT_SET_VALUE(31, 0);
					return 0;
				}
				iParam2 = 1;
			}
			break;
		
		case 0x00000020:
			if (bParam1)
			{
				if (IS_PS3() || Function_189())
				{
					Function_191(4, 0, 1);
				}
				Function_191(5, 0, 1);
				Function_191(6, 0, 1);
				Function_191(7, 0, 1);
				Function_191(8, 0, 1);
				UI_SET_HAS_CHEATED(1);
				UI_CHEAT_SET_VALUE(32, 0);
				return 0;
			}
			break;
		
		case 0x00000021:
			if (bParam1)
			{
				Function_187(&Global_46760);
				Function_187(&Global_46816);
				Function_187(&Global_46796);
				Function_187(&Global_46838);
				Function_187(&Global_46850);
				Function_187(&Global_46866);
				Function_187(&Global_46894);
				Function_187(&Global_46926);
				Function_187(&Global_46914);
				Function_184(Global_46736[0]);
				Function_184(Global_46736[1]);
				Function_184(Global_46736[2]);
				Function_184(Global_46736[3]);
				Function_184(Global_46746[0]);
				Function_184(Global_46746[2]);
				Function_184(Global_46746[1]);
				Function_184(Global_46754[0]);
				Function_184(Global_46754[1]);
				Function_183();
				UI_SET_HAS_CHEATED(1);
				UI_CHEAT_SET_VALUE(33, 0);
				return 0;
			}
			break;
		
		case 0x00000022:
			if ((!Function_206(0, 0, 1, 1) && !Function_202(&Global_54076, 0, 0)) && !Global_99146)
			{
				if (bParam1)
				{
					HUD_FADE_OUT(0.0f, 1f, 1);
					iVar11 = 0;
					while (iVar11 <= 58)
					{
						if (Function_180(Function_182(iVar11)))
						{
							Function_102(Function_182(iVar11), 0, 0, 0, 1);
						}
						iVar11++;
					}
					Global_10966 = 57;
					Function_101(0x1000000);
					Function_98();
					Function_60(1);
					if (!Function_59(38))
					{
						Function_57(38, 1);
					}
					if (!Function_59(39))
					{
						Function_57(39, 1);
					}
					if (!Function_59(40))
					{
						Function_57(40, 1);
					}
					if (!Function_59(41))
					{
						Function_57(41, 1);
					}
					if (!Function_59(42))
					{
						Function_57(42, 1);
					}
					Function_18(1);
					UI_SET_HAS_CHEATED(1);
				}
				UI_CHEAT_SET_VALUE(34, 0);
				return 0;
			}
			if (bParam1)
			{
				iParam2 = 1;
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
			if (!Function_206(0, 0, 1, 1))
			{
				if (bParam1)
				{
					if (Function_17(390) != 1)
					{
						UI_SET_HAS_CHEATED(1);
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, false);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_16(390, 3.0f);
						Function_209(390, 1, 1);
						return 1;
					}
				}
				if (Global_39290[2])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					Function_16(390, 3.0f);
					Function_209(390, 3, 1);
					return 1;
				}
				if (Global_39290[1])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
					Function_16(390, 3.0f);
					Function_209(390, 2, 1);
					return 1;
				}
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
				Function_16(390, 3.0f);
				Function_209(390, 1, 1);
				return 1;
			}
			if (bParam1)
			{
				iParam2 = 1;
			}
			break;
		
		case 0x00000026:
			if (!Function_206(0, 0, 1, 1))
			{
				if (bParam1)
				{
					if (Function_17(390) != 2)
					{
						UI_SET_HAS_CHEATED(1);
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_16(390, 3.0f);
						Function_209(390, 2, 1);
						return 1;
					}
				}
				if (Global_39290[2])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					Function_16(390, 3.0f);
					Function_209(390, 3, 1);
					return 1;
				}
				if (Global_39290[1])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
					Function_16(390, 3.0f);
					Function_209(390, 2, 1);
					return 1;
				}
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
				Function_16(390, 3.0f);
				Function_209(390, 1, 1);
				return 1;
			}
			if (bParam1)
			{
				iParam2 = 1;
			}
			break;
		
		case 0x00000027:
			if (!Function_206(0, 0, 1, 1))
			{
				if (bParam1)
				{
					if (Function_17(390) != 3)
					{
						UI_SET_HAS_CHEATED(1);
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_16(390, 3.0f);
						Function_209(390, 3, 1);
						return 1;
					}
				}
				if (Global_39290[2])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					Function_16(390, 3.0f);
					Function_209(390, 3, 1);
					return 1;
				}
				if (Global_39290[1])
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
					Function_16(390, 3.0f);
					Function_209(390, 2, 1);
					return 1;
				}
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
				Function_16(390, 3.0f);
				Function_209(390, 1, 1);
				return 1;
			}
			if (bParam1)
			{
				iParam2 = 1;
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
			if (!Function_206(0, 0, 1, 1))
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
				iParam2 = 1;
			}
			break;
		
		case 0x00000019:
			if (!Function_206(0, 0, 1, 1))
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
				iParam2 = 1;
			}
			break;
	}
	return 0;
}

int Function_16(int iParam0, int iParam1) //Position: 0x16A1 / 5793
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_17(int iParam0) //Position: 0x16E1 / 5857
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

void Function_18(bool bParam0) //Position: 0x1722 / 5922
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_46();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_20();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_19(&Global_99144, 1);
		Function_19(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_19(int iParam0, int iParam1) //Position: 0x1777 / 6007
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_20() //Position: 0x178D / 6029
{
	Function_31();
	Function_30();
	Function_30();
	Function_29();
	Function_29();
	Function_28();
	Function_28();
	Function_27(0);
	Function_27(0);
	Function_24();
	Function_23();
	Function_22();
	Function_21();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_303();
	return;
}

void Function_21() //Position: 0x17D8 / 6104
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

void Function_22() //Position: 0x180B / 6155
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

void Function_23() //Position: 0x199E / 6558
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

void Function_24() //Position: 0x1B57 / 6999
{
	Function_25(&Global_42918, 1, 0);
	return;
}

void Function_25(struct<2317> Param0) //Position: 0x1B65 / 7013
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
	
	uVar0 = Function_26();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || uParam2)
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

int Function_26() //Position: 0x1D82 / 7554
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_27(char* cParam0) //Position: 0x1D97 / 7575
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
					iVar2 = ((Function_17((50 + iVar4)) + Function_17((183 + iVar4))) + Function_17((90 + iVar4)));
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
	Function_209(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_28() //Position: 0x1E3E / 7742
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
		iVar2 = ((Function_17((50 + iVar3) + 15) + Function_17((183 + iVar3) + 15)) + Function_17((90 + iVar3) + 15));
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
	Function_209(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_29() //Position: 0x1EC7 / 7879
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
			iVar2 = ((Function_17((50 + iVar3) + 8) + Function_17((183 + iVar3) + 8)) + Function_17((90 + iVar3) + 8));
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
	Function_209(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_30() //Position: 0x1F5E / 8030
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
		iVar2 = ((Function_17((50 + iVar3)) + Function_17((183 + iVar3))) + Function_17((90 + iVar3)));
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
	Function_209(179, iVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar4, 8);
	return StackVal, cVar0;
}

void Function_31() //Position: 0x1FDD / 8157
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_32(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_209(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_32(int iParam0, bool bParam1, bool bParam2) //Position: 0x201A / 8218
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
	Function_45(iParam0, bParam1, 1);
	Function_44(iParam0);
	if (bParam2 && bParam1 == 0.0f)
	{
		Function_33(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_33(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2226 / 8742
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_43(390))), 32);
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
					bVar19 = (Function_42(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_42(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_40(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_37(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_34(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_196(), &Var9);
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

var Function_34(int iParam0) //Position: 0x2864 / 10340
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_35(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2875 / 10357
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_36(char* cParam0) //Position: 0x296C / 10604
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_37(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2987 / 10631
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_39(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_38(Function_39(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_38(int iParam0, int iParam1) //Position: 0x29EE / 10734
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_39(int iParam0, bool bParam1) //Position: 0x2A00 / 10752
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_40(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2A12 / 10770
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
	if (((Function_41(iParam0) != 19 || Function_41(iParam0) != 17) || Function_41(iParam0) != 10) || Function_41(iParam0) != 9)
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

int Function_41(int iParam0) //Position: 0x2B46 / 11078
{
	return Global_55480[iParam016].f_96;
}

float Function_42(int iParam0) //Position: 0x2B55 / 11093
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_43(int iParam0) //Position: 0x2B8E / 11150
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_44(int iParam0) //Position: 0x2BCB / 11211
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

int Function_45(int iParam0, bool bParam1, bool bParam2) //Position: 0x2D65 / 11621
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

void Function_46() //Position: 0x2FA9 / 12201
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_14())
	{
		Function_54(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_54(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_48(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_48(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_47(StackVal, Var0))
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
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_47(char* cParam0) //Position: 0x3060 / 12384
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_48(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3078 / 12408
{
	int iVar0;
	
	iVar0 = Function_52(&uParam2, &fParam3);
	if (Function_51(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_50(&Global_99144, 1);
			Function_19(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_50(&Global_99144, 2);
			Function_19(&Global_99144, 1);
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
		Function_50(&Global_99144, 2);
		Function_19(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_49();
	return StackVal, Function_49();
}

struct<8> Function_49() //Position: 0x3170 / 12656
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_50(var uParam0, int iParam1) //Position: 0x317A / 12666
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_51(int iParam0) //Position: 0x318B / 12683
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_52(bool bParam0, bool bParam1) //Position: 0x31A1 / 12705
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
				fVar2 = Function_53(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_53(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_51(iVar0) && !&bParam1)
	{
		iVar0 = Function_52(&bParam0, 1);
	}
	return iVar0;
}

float Function_53(struct<2> Param0, struct<2> Param2) //Position: 0x326D / 12909
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_54(float fParam0, int iParam1) //Position: 0x328A / 12938
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_56(&Global_54076, &Var3);
	if (!Function_55(Global_46760[0]))
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
	if (!Function_55(Global_46760[2]))
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
	if (!Function_55(Global_46760[1]))
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
	if (!Function_55(Global_46796[1]))
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
	if (!Function_55(Global_46796[3]))
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
	if (!Function_55(Global_46796[2]))
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
	if (!Function_55(Global_46796[4]))
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
	if (!Function_55(Global_46816[0]))
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
	if (!Function_55(Global_46816[1]))
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
	if (!Function_55(Global_46816[2]))
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
	if (!Function_55(Global_46838[0]))
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
	if (!Function_55(Global_46850[0]))
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
	if (!Function_55(Global_46850[1]))
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
	if (!Function_55(Global_46850[2]))
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
	if (!Function_55(Global_46866[0]))
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
	if (!Function_55(Global_46866[1]))
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
	if (!Function_55(Global_46866[2]))
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
	if (!Function_55(Global_46894[2]))
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
	if (!Function_55(Global_46894[3]))
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
	if (!Function_55(Global_46894[0]))
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
	if (!Function_55(Global_46914[0]))
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
	if (!Function_55(Global_46926[2]))
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
	if (!Function_55(Global_46926[1]))
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
	if (!Function_55(Global_46926[0]))
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
	if (!Function_55(Global_46838[1]))
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
	if (!Function_55(Global_46894[1]))
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
	Function_50(&Global_99144, 2);
	Function_19(&Global_99144, 1);
	iParam1 = 0;
	if (Function_47(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_55(int iParam0) //Position: 0x3AB6 / 15030
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_10(uVar0, 0x1000000) || Function_10(uVar0, 0x2000000)) || Function_10(uVar0, 0x4000000)) || !Function_10(uVar0, 0x10000000));
}

void Function_56(var uParam0, int iParam1) //Position: 0x3AF1 / 15089
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_57(int iParam0, bool bParam1) //Position: 0x3B00 / 15104
{
	Global_116927[iParam06] = 0;
	*(&Global_116927[iParam06] + 8) = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		Function_58();
	}
	if (&bParam1)
	{
		if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 0))
		{
			REMOVE_JOURNAL_ENTRY(Global_99725[iParam043].f_224, false);
		}
	}
	return;
}

void Function_58() //Position: 0x3B52 / 15186
{
	bool bVar0;
	
	bVar0 = Function_17(407);
	PRINTSTRING("This is how many quest lines are marked as done now: ");
	PRINTINT(bVar0);
	PRINTNL();
	if (bVar0 > 15)
	{
		AWARD_ACHIEVEMENT(17);
	}
	return;
}

bool Function_59(int iParam0) //Position: 0x3BB0 / 15280
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_60(bool bParam0) //Position: 0x3BC5 / 15301
{
	Function_61(&bParam0);
	Function_61(&bParam0);
	Function_61(&bParam0);
	Function_61(&bParam0);
	return;
}

int Function_61(bool bParam0) //Position: 0x3BE7 / 15335
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	char* cVar6[32];
	struct<4> Var14;
	
	if (!IS_OBJECT_VALID(&Global_54076))
	{
		return 0;
	}
	fVar0 = 1800.0f;
	if (!&bParam0 && !Function_97(8192))
	{
		return 0;
	}
	bVar1 = DECOR_GET_INT(&Global_54076, "tutorial");
	bVar2 = DECOR_GET_INT(&Global_54076, "ntutorial2");
	bVar3 = DECOR_GET_INT(&Global_54076, "ntutorial3");
	bVar4 = DECOR_GET_INT(&Global_54076, "ntutorial4");
	if (!Function_96(Global_119937, 4))
	{
		if (Function_95(bVar4, 4))
		{
			Function_94(&Global_119937, 4);
			Function_93(&Global_54076, 4, 4);
			if (!&bParam0)
			{
				Function_12("tutorial_camp_fast_travel", 30.0f, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!Function_96(Global_119934, 0x4000000) && !(((((((Global_6623 || Global_6637) || Global_6625) || Global_6610) || Global_6608) || Global_99146) || Global_6638) || Global_6639))
	{
		if (Function_95(bVar1, 0x4000000))
		{
			Function_94(&Global_119934, 0x4000000);
			if (!&bParam0)
			{
				Function_12("tutorial_rare_horse", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if ((Global_6606 && !Function_96(Global_119937, 8)) && !((((Global_6610 || Global_99146) || Global_6627) || Global_6638) || Global_6639))
	{
		if (((GET_ACTOR_HEALTH(&Global_54076) > (GET_ACTOR_MAX_HEALTH(&Global_54076) * 0,3f) && HAS_ITEM(Function_92(3), &Global_54076)) && IS_ACTOR_ALIVE(&Global_54076)) && !IS_ACTOR_IN_WATER(&Global_54076))
		{
			Function_94(&Global_119937, 8);
			if (!&bParam0)
			{
				Function_12("tutorial_first_health", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
		}
	}
	if (!&bParam0 && ((((((((((Global_93258 || Global_6623) || Global_6625) || Global_6608) || Global_99146) || Global_6638) || Global_6637) || Global_6627) || Global_6610) || Global_6639) || !IS_ACTOR_ALIVE(&Global_54076)))
	{
		return 0;
	}
	if (!&bParam0 && ((Function_91() || HUD_IS_FADED()) || HUD_IS_FADING()))
	{
		return 0;
	}
	if (!&bParam0 && (Global_39873 + 5.0f) < GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	if (!&bParam0)
	{
		iVar5 = 0;
		while (iVar5 <= Global_6667)
		{
			if (Function_90(&Global_6667[iVar528] + 184, 16))
			{
				if (((Global_10966 != Global_6667[iVar528].f_188 || Global_10966 != Global_6667[iVar528].f_192) || Global_10966 != Global_6667[iVar528].f_196) || Global_10966 != Global_6667[iVar528].f_200)
				{
					if (Global_6667[iVar528].f_180)
					{
						if (IS_BLIP_VALID(&Global_6667[iVar528] + 144))
						{
							SET_BLIP_BLINK(&Global_6667[iVar528] + 144, 1, 0, 5f);
						}
						Var14 = { StackVal, StackVal, StackVal, Function_89(iVar5) };
						strcpy(&cVar6, "comp_intro_", 32);
						stradd(&cVar6, UI_GET_STRING(&Var14), 32);
						if (iVar5 == 49)
						{
							Function_88(&cVar6, 0x40f00000, 1, 2, 0, 0, 0, 0);
						}
						else
						{
							Function_12(&cVar6, 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_87(&Global_6667[iVar528] + 184, 16);
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
			if (!Function_96(Global_119935, 0x10000000))
			{
				if (Function_95(bVar2, 0x10000000))
				{
					Function_94(&Global_119935, 0x10000000);
					Function_93(&Global_54076, 0x10000000, 2);
					if (!&bParam0)
					{
						Function_12("tutorial_aggro_ped", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 1))
			{
				if (Function_95(bVar2, 1))
				{
					Function_94(&Global_119935, 1);
					Function_93(&Global_54076, 1, 2);
					if (!&bParam0)
					{
						Function_12("tutorial_eyewitness_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 2))
			{
				if (Function_95(bVar2, 2))
				{
					Function_94(&Global_119935, 2);
					Function_93(&Global_54076, 2, 2);
					if (!&bParam0)
					{
						Function_12("tutorial_eyewitness_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 4))
			{
				if (Function_95(bVar2, 4))
				{
					Function_94(&Global_119935, 4);
					Function_93(&Global_54076, 4, 2);
					if (!&bParam0)
					{
						Function_12("tutorial_eyewitness_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 4194304))
			{
				if (Function_95(bVar2, 4194304))
				{
					Function_94(&Global_119935, 4194304);
					Function_93(&Global_54076, 4194304, 2);
					if (!&bParam0)
					{
						Function_12("tutorial_eyewitness_delayed", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 0x2000000))
			{
				if (Function_95(bVar2, 0x2000000))
				{
					Function_94(&Global_119935, 0x2000000);
					Function_93(&Global_54076, 0x2000000, 2);
					if (!&bParam0)
					{
						Function_12("tutorial_wanted_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 0x4000000))
			{
				if (Function_96(Global_119935, 0x2000000))
				{
					Function_94(&Global_119935, 0x4000000);
					if (!&bParam0)
					{
						Function_12("tutorial_law_lost_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 0x8000000))
			{
				if (Function_95(bVar2, 0x8000000))
				{
					Function_94(&Global_119935, 0x8000000);
					Function_93(&Global_54076, 0x8000000, 2);
					if (!&bParam0)
					{
						Function_12("tutorial_rcm_wanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_95(bVar2, 32768))
			{
				Function_94(&Global_119935, 32768);
				Function_93(&Global_54076, 32768, 2);
				Function_12("tutorial_law_local_spawn", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_95(bVar2, 128))
			{
				if (Function_96(Global_119935, 65536))
				{
					Function_94(&Global_119935, 128);
					Function_93(&Global_54076, 128, 2);
					Function_12("tutorial_law_posse_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_95(bVar2, 256))
			{
				if (Function_96(Global_119935, 131072))
				{
					Function_94(&Global_119935, 256);
					Function_93(&Global_54076, 256, 2);
					Function_12("tutorial_law_marshal_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_95(bVar2, 512))
			{
				if (Function_96(Global_119935, 262144))
				{
					Function_94(&Global_119935, 512);
					Function_93(&Global_54076, 512, 2);
					Function_12("tutorial_law_bounty_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (Function_95(bVar2, 1024))
			{
				if (Function_96(Global_119935, 131072))
				{
					Function_94(&Global_119935, 1024);
					Function_93(&Global_54076, 1024, 2);
					Function_12("tutorial_law_army_spawn", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_96(Global_119935, 64))
			{
				if (Function_95(bVar2, 64))
				{
					Function_94(&Global_119935, 64);
					Function_93(&Global_54076, 64, 2);
					if (!&bParam0)
					{
						Function_12("tutorial_player_arrested", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 16384))
			{
				if (Function_95(bVar2, 16384))
				{
					Function_94(&Global_119935, 16384);
					Function_93(&Global_54076, 16384, 2);
					if (!&bParam0)
					{
						Function_12("tutorial_law_captured", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 0x1000000))
			{
				if (Function_95(bVar2, 0x1000000))
				{
					Function_94(&Global_119935, 0x1000000);
					Function_93(&Global_54076, 0x1000000, 2);
					if (!&bParam0)
					{
						Function_12("tutorial_law_rewanted", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 8))
			{
				if (Global_6646 && Global_39922.f_308)
				{
					Function_94(&Global_119935, 8);
					if (!&bParam0)
					{
						Function_12("tutorial_wanted_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 8388608))
			{
				if (Function_95(bVar2, 8388608))
				{
					Function_94(&Global_119935, 8388608);
					if (!&bParam0)
					{
						Function_12("tutorial_law_lost_awareness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 32))
			{
				if (Function_95(bVar2, 32))
				{
					Function_94(&Global_119935, 32);
					Function_93(&Global_54076, 32, 2);
					if (!&bParam0)
					{
						Function_12("tutorial_law_near", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 4096))
			{
				if (Function_95(bVar2, 4096))
				{
					Function_94(&Global_119935, 4096);
					Function_93(&Global_54076, 4096, 2);
					if (!&bParam0)
					{
						Function_12("tutorial_law_losing_track", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 16) && Function_96(Global_119935, 8))
			{
				if (Function_95(bVar2, 16))
				{
					Function_94(&Global_119935, 16);
					Function_93(&Global_54076, 16, 2);
					if (!&bParam0)
					{
						Function_12("tutorial_civilian_awareness", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 2048))
			{
				if (Function_95(bVar2, 2048))
				{
					Function_94(&Global_119935, 2048);
					Function_93(&Global_54076, 2048, 2);
					if (!&bParam0)
					{
						Function_12("tutorial_law_difficulty_increase", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 8192))
			{
				if (Function_95(bVar2, 8192))
				{
					Function_94(&Global_119935, 8192);
					Function_93(&Global_54076, 8192, 2);
					if (!&bParam0)
					{
						return 0;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_96(Global_119936, 16384))
			{
				if (Function_95(bVar3, 16384))
				{
					Function_94(&Global_119936, 16384);
					Function_93(&Global_54076, 16384, 3);
					if (!&bParam0)
					{
						Function_12("tutorial_law_bribe", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 32768))
			{
				if (Function_95(bVar3, 32768))
				{
					Function_94(&Global_119936, 32768);
					Function_93(&Global_54076, 32768, 3);
					if (!&bParam0)
					{
						Function_12("tutorial_law_surrender", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 65536))
			{
				if (Function_95(bVar3, 65536))
				{
					Function_94(&Global_119936, 65536);
					Function_93(&Global_54076, 65536, 3);
					if (!&bParam0)
					{
						Function_12("tutorial_law_extra_cops1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 131072))
			{
				if (Function_95(bVar3, 131072))
				{
					Function_94(&Global_119936, 131072);
					Function_93(&Global_54076, 131072, 3);
					if (!&bParam0)
					{
						Function_12("tutorial_law_extra_cops2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 262144))
			{
				if (Function_95(bVar3, 262144))
				{
					Function_94(&Global_119936, 262144);
					Function_93(&Global_54076, 262144, 3);
					if (!&bParam0)
					{
						Function_12("tutorial_law_less_cops", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_95(bVar2, 524288))
			{
				Function_94(&Global_119935, 524288);
				Function_93(&Global_54076, 524288, 2);
				Function_12("tutorial_law_local_end1", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_96(Global_119935, 1048576))
			{
				if (Function_96(Global_119935, 524288))
				{
					Function_94(&Global_119935, 1048576);
					if (!&bParam0)
					{
						return 0;
					}
				}
			}
			if (Function_95(bVar2, 2097152))
			{
				Function_94(&Global_119935, 2097152);
				Function_93(&Global_54076, 2097152, 2);
				Function_12("tutorial_law_pursuit_end", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_95(bVar2, 65536))
			{
				Function_94(&Global_119935, 65536);
				Function_93(&Global_54076, 65536, 2);
				Function_12("tutorial_law_posse_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_95(bVar2, 131072))
			{
				Function_94(&Global_119935, 131072);
				Function_93(&Global_54076, 131072, 2);
				Function_12("tutorial_law_marshal_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (Function_95(bVar2, 262144))
			{
				Function_94(&Global_119935, 262144);
				Function_93(&Global_54076, 262144, 2);
				Function_12("tutorial_law_bounty_generated", 0x41200000, 1, 0, 2, 1, 0);
				return 0;
			}
			if (!Function_96(Global_119936, 0x2000000))
			{
				if (Function_95(bVar3, 0x2000000))
				{
					Function_94(&Global_119936, 0x2000000);
					Function_93(&Global_54076, 0x2000000, 3);
					Function_12("whistle_GotEvilHorse", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			break;
		
		case 0x00000002:
			if (Global_6646 || Global_6647)
			{
				break;
			}
			if (!Function_96(Global_119934, 0x20000000))
			{
				if (Function_190(8, 0))
				{
					Function_94(&Global_119934, 0x20000000);
					if (!&bParam0)
					{
						Function_12("tutorial_first_camp_M1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 0x4000000))
			{
				if (Function_190(8, 0))
				{
					Function_94(&Global_119934, 0x4000000);
					if (!&bParam0)
					{
						Function_12("tutorial_loot", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 0x8000000))
			{
				if (Function_95(bVar3, 0x8000000))
				{
					Function_94(&Global_119936, 0x8000000);
					if (!&bParam0)
					{
						Function_12("Old_News_Avail", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 8))
			{
				if (Function_95(bVar1, 8))
				{
					Function_94(&Global_119934, 8);
					if (!&bParam0)
					{
						Function_12("tutorial_road_to_armadillo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 1))
			{
				if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076) && !(Function_190(4, 0) || Function_190(10, 0)))
				{
					if (IS_ACTOR_DRAFT_VEHICLE(GET_VEHICLE(&Global_54076)))
					{
						Function_94(&Global_119934, 1);
						if (!&bParam0)
						{
							Function_12("tutorial_first_drive_coach", 0x41200000, 1, 0, 2, 1, 0);
							return 0;
						}
					}
				}
			}
			if (!Function_96(Global_119934, 64))
			{
				if (Function_95(bVar1, 64))
				{
					Function_94(&Global_119934, 64);
					Function_93(&Global_54076, 64, 1);
					if (!&bParam0)
					{
						Function_12("tutorial_first_see_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 256))
			{
				if (Function_95(bVar1, 256))
				{
					Function_94(&Global_119934, 256);
					Function_93(&Global_54076, 256, 1);
					if (!&bParam0)
					{
						Function_12("tutorial_first_passenger_coach", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 128))
			{
				if (Function_95(bVar1, 128))
				{
					Function_86(5.0f);
					Function_94(&Global_119934, 128);
					Function_93(&Global_54076, 128, 1);
					if (!&bParam0)
					{
						Function_12("tutorial_first_horse_agitated", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 2097152))
			{
				if (Function_95(bVar1, 2097152))
				{
					Function_94(&Global_119934, 2097152);
					Function_93(&Global_54076, 2097152, 1);
					if (!&bParam0)
					{
						Function_12("tutorial_rcm_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 4194304))
			{
				if (Function_96(Global_119934, 2097152))
				{
					Function_94(&Global_119934, 4194304);
					Function_93(&Global_54076, 4194304, 1);
					if (!&bParam0)
					{
						Function_12("tutorial_rcm_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 8388608))
			{
				if (Function_96(Global_119934, 4194304))
				{
					Function_94(&Global_119934, 8388608);
					Function_93(&Global_54076, 8388608, 1);
					if (!&bParam0)
					{
						Function_12("tutorial_rcm_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 2))
			{
				if (Function_95(bVar1, 2))
				{
					Function_94(&Global_119934, 2);
					Function_93(&Global_54076, 2, 1);
					if (!&bParam0)
					{
						Function_12("tutorial_first_outfit1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 4))
			{
				if (Function_96(Global_119934, 2))
				{
					Function_94(&Global_119934, 4);
					if (!&bParam0)
					{
						Function_12("tutorial_first_outfit2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_85(3))
			{
				if (!Function_96(Global_119934, 512))
				{
					if (Function_95(bVar1, 512))
					{
						Function_94(&Global_119934, 512);
						Function_93(&Global_54076, 512, 1);
						if (!&bParam0)
						{
							Function_12("tutorial_lost_cards", 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_64(3, 0, 1, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 4096))
			{
				if ((Global_43790 != 2 && !Global_6631) && !Function_206(0, 0, 1, 6))
				{
					Function_94(&Global_119934, 4096);
					if (!&bParam0)
					{
						Function_12("tutorial_first_camp", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 8192))
			{
				if (Function_96(Global_119934, 4096))
				{
					Function_94(&Global_119934, 8192);
					if (!&bParam0)
					{
						Function_12("tutorial_first_camp2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 1024))
			{
				if (((Global_43790 != 2 && !Global_6631) && !Function_206(0, 0, 1, 1)) && Function_190(4, 0))
				{
					Function_94(&Global_119934, 1024);
					if (!&bParam0)
					{
						Function_12("tutorial_first_wilderness1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 2048))
			{
				if (Function_96(Global_119934, 1024))
				{
					Function_94(&Global_119934, 2048);
					if (!&bParam0)
					{
						Function_12("tutorial_first_wilderness2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 16))
			{
				if (Function_95(bVar1, 16) && !Global_6623)
				{
					Function_94(&Global_119934, 16);
					Function_93(&Global_54076, 16, 1);
					if (!&bParam0)
					{
						Function_12("tutorial_first_action_area1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 32))
			{
				if (Function_96(Global_119934, 16))
				{
					Function_94(&Global_119934, 32);
					if (!&bParam0)
					{
						Function_12("tutorial_first_action_area2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 32768))
			{
				if (Function_95(bVar1, 32768))
				{
					Function_94(&Global_119934, 32768);
					if (!&bParam0)
					{
						Function_12("tutorial_kill_job", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 65536))
			{
				if (Function_95(bVar1, 65536))
				{
					Function_93(&Global_54076, 65536, 1);
					if (!&bParam0)
					{
						Function_12("tutorial_kill_shop", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 131072))
			{
				if (Function_95(bVar1, 131072))
				{
					Function_94(&Global_119934, 131072);
					if (!&bParam0)
					{
						Function_12("tutorial_first_headshot_bonus", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 524288))
			{
				if (Function_95(bVar1, 524288))
				{
					Function_94(&Global_119934, 524288);
					if (!&bParam0)
					{
						Function_12("tutorial_first_robbery", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 1048576))
			{
				if (Function_95(bVar1, 1048576))
				{
					Function_94(&Global_119934, 1048576);
					if (!&bParam0)
					{
						Function_12("tutorial_first_robbery_denial", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 0x1000000))
			{
				if (Function_95(bVar1, 0x1000000))
				{
					Function_94(&Global_119934, 0x1000000);
					if (!&bParam0)
					{
						Function_12("tutorial_second_weapon1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 0x2000000))
			{
				if (Function_96(Global_119934, 0x1000000))
				{
					Function_94(&Global_119934, 0x2000000);
					if (!&bParam0)
					{
						Function_12("tutorial_second_weapon2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 4194304))
			{
				if (Function_95(bVar3, 4194304))
				{
					Function_94(&Global_119936, 4194304);
					if (!&bParam0)
					{
						Function_12("tutorial_random_char", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 524288))
			{
				if (Function_95(bVar3, 524288))
				{
					Function_94(&Global_119936, 524288);
					if (!&bParam0)
					{
						Function_12("tutorial_skinning_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 1048576))
			{
				if (Function_96(Global_119936, 524288))
				{
					Function_94(&Global_119936, 1048576);
					if (!&bParam0)
					{
						Function_12("tutorial_skinning_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 2097152))
			{
				if (Function_95(bVar3, 2097152))
				{
					Function_94(&Global_119936, 2097152);
					if (!&bParam0)
					{
						Function_12("tutorial_skinning_3", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (Global_6646 || Global_6647)
			{
				break;
			}
			if (!Function_96(Global_119934, 262144))
			{
				if (Function_95(bVar1, 262144))
				{
					Function_94(&Global_119934, 262144);
					if (!&bParam0)
					{
						Function_12("tutorial_bounty_no_money_first", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 1))
			{
				if (Function_95(bVar3, 1))
				{
					Function_94(&Global_119936, 1);
					Function_93(&Global_54076, 1, 3);
					if (!&bParam0)
					{
						Function_12("tutorial_first_honor_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 2))
			{
				if (Function_95(bVar3, 2))
				{
					Function_94(&Global_119936, 2);
					Function_93(&Global_54076, 2, 3);
					if (!&bParam0)
					{
						Function_12("tutorial_first_honor_negative", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 4))
			{
				if (Function_95(bVar3, 4))
				{
					Function_94(&Global_119936, 4);
					Function_93(&Global_54076, 4, 3);
					if (!&bParam0)
					{
						Function_12("tutorial_first_notoriety_positive", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 8))
			{
				if (Function_63() == 0)
				{
					Function_94(&Global_119936, 8);
					if (!&bParam0)
					{
						Function_12("tutorial_very_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 16))
			{
				if (Function_63() == 1)
				{
					Function_94(&Global_119936, 16);
					if (!&bParam0)
					{
						Function_12("tutorial_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 32))
			{
				if (Function_63() == 2)
				{
					Function_94(&Global_119936, 32);
					if (!&bParam0)
					{
						Function_12("tutorial_medium_low_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 64))
			{
				if (Function_63() == 4)
				{
					Function_94(&Global_119936, 64);
					if (!&bParam0)
					{
						Function_12("tutorial_medium_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 128))
			{
				if (Function_63() == 5)
				{
					Function_94(&Global_119936, 128);
					if (!&bParam0)
					{
						Function_12("tutorial_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 256))
			{
				if (Function_63() == 6)
				{
					Function_94(&Global_119936, 256);
					if (!&bParam0)
					{
						Function_12("tutorial_very_high_honor", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 512))
			{
				if (Function_62() == 1)
				{
					Function_94(&Global_119936, 512);
					if (!&bParam0)
					{
						Function_12("tutorial_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 1024))
			{
				if (Function_62() == 2)
				{
					Function_94(&Global_119936, 1024);
					if (!&bParam0)
					{
						Function_12("tutorial_medium_low_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 2048))
			{
				if (Function_62() == 3)
				{
					Function_94(&Global_119936, 2048);
					if (!&bParam0)
					{
						Function_12("tutorial_medium_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 4096))
			{
				if (Function_62() == 4)
				{
					Function_94(&Global_119936, 4096);
					if (!&bParam0)
					{
						Function_12("tutorial_medium_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 8192))
			{
				if (Function_62() == 5)
				{
					Function_94(&Global_119936, 8192);
					if (!&bParam0)
					{
						Function_12("tutorial_high_notoriety", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 8388608))
			{
				if (Function_95(bVar3, 8388608))
				{
					Function_94(&Global_119936, 8388608);
					Function_93(&Global_54076, 8388608, 3);
					if (!&bParam0)
					{
						Function_12("tutorial_first_minigame_in_rain", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 0x1000000))
			{
				if (Function_95(bVar3, 0x1000000))
				{
					Function_94(&Global_119936, 0x1000000);
					Function_93(&Global_54076, 0x1000000, 3);
					if (!&bParam0)
					{
						Function_12("tutorial_first_missed_achievement", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 0x8000000))
			{
				if (Function_95(bVar1, 0x8000000))
				{
					Function_94(&Global_119934, 0x8000000);
					Function_93(&Global_54076, 0x8000000, 1);
					if (!&bParam0)
					{
						Function_12("tutorial_first_on_donkey", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (Function_95(bVar4, 1) && Function_190(4, 0))
			{
				Function_93(&Global_54076, 1, 4);
				if (!&bParam0)
				{
					Function_12("tutorial_new_item_in_shops", 0x41200000, 1, 0, 2, 1, 0);
					return 0;
				}
			}
			if (!Function_96(Global_119935, 0x20000000))
			{
				if ((((((HAS_ITEM(Function_92(53), &Global_54076) || HAS_ITEM(Function_92(54), &Global_54076)) || HAS_ITEM(Function_92(55), &Global_54076)) || HAS_ITEM(Function_92(56), &Global_54076)) || HAS_ITEM(Function_92(57), &Global_54076)) || HAS_ITEM(Function_92(58), &Global_54076)) || HAS_ITEM(Function_92(10), &Global_54076))
				{
					Function_94(&Global_119935, 0x20000000);
					if (!&bParam0)
					{
						Function_12("tutorial_outfit_scrap", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_95(bVar4, 2) && Function_190(4, 0))
			{
				if (Function_96(Global_119937, 2))
				{
					if (GET_CURRENT_GAME_TIME() < Global_21369.f_224)
					{
						if (!&bParam0)
						{
							Function_12("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
							Global_21369.f_224 = (GET_CURRENT_GAME_TIME() + fVar0);
							return 0;
						}
					}
				}
				if (!Function_96(Global_119937, 2))
				{
					if (!&bParam0)
					{
						Function_94(&Global_119937, 2);
						Function_12("tutorial_gunsmith", 0x41200000, 1, 0, 2, 1, 0);
						Global_21369.f_224 = (GET_CURRENT_GAME_TIME() + fVar0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119937, 16))
			{
				if (Function_190(9, 0))
				{
					Function_94(&Global_119937, 16);
					if (!&bParam0)
					{
						Function_12("tutorial_place_waypoint", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119937, 32))
			{
				if (Function_95(bVar4, 32))
				{
					Function_94(&Global_119937, 32);
					Function_93(&Global_54076, 32, 4);
					if (!&bParam0)
					{
						Function_12("tutorial_bait_1", 0x41200000, 1, 0, 2, 1, 0);
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

int Function_62() //Position: 0x5E95 / 24213
{
	return Global_21369.f_248;
}

int Function_63() //Position: 0x5EA0 / 24224
{
	return Global_21369.f_244;
}

void Function_64(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x5EAB / 24235
{
	char* cVar0[32];
	
	if (!Function_84(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_83(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_81(bParam0))
	{
		Function_79(456, 1, 0, 0);
		Function_78(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_206(0, 0, 1, 1))
			{
				Function_18(1);
				Function_77(1, 5);
			}
			else
			{
				Function_76();
			}
		}
		Function_70(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_91() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_91() || Global_6623)
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
			if (!Function_96(Global_119934, 2))
			{
				Function_65(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_65(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6007 / 24583
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_67(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_66(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_66(char* cParam0) //Position: 0x607C / 24700
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

bool Function_67(int iParam0, var uParam1, int iParam2) //Position: 0x60B6 / 24758
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
		if (Function_69(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_68(uVar0))
		{
			case 0x00000002:
				if (!Function_96(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_68(char* cParam0) //Position: 0x6132 / 24882
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

int Function_69(int iParam0) //Position: 0x61D3 / 25043
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_19(&iVar1, 2147483648);
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

void Function_70(bool bParam0) //Position: 0x6210 / 25104
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
			if (Function_74(bParam0, Function_75(bVar24)))
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
			if (Function_74(bParam0, Function_75(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_73(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_72(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_71(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_71(int iParam0) //Position: 0x63C0 / 25536
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

void Function_72(char* cParam0, bool bParam1) //Position: 0x6417 / 25623
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

var Function_73(int iParam0) //Position: 0x643C / 25660
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
	while (iVar1 <= Global_42265[iParam09].f_28)
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

bool Function_74(bool bParam0, int iParam1) //Position: 0x6492 / 25746
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

int Function_75(bool bParam0) //Position: 0x64F1 / 25841
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_76() //Position: 0x64FD / 25853
{
	return;
}

void Function_77(bool bParam0, int iParam1) //Position: 0x6503 / 25859
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = bParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_78(bool bParam0, int iParam1) //Position: 0x6542 / 25922
{
	if (!Function_84(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

int Function_79(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x6597 / 26007
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
	Function_45(iParam0, TO_FLOAT(bParam1), 1);
	Function_44(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_80(iParam0);
	return 1;
}

void Function_80(int iParam0) //Position: 0x67BF / 26559
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

bool Function_81(int iParam0) //Position: 0x685D / 26717
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

bool Function_82(int iParam0, int iParam1) //Position: 0x68AF / 26799
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

bool Function_83(int iParam0) //Position: 0x68DC / 26844
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_84(int iParam0) //Position: 0x68F8 / 26872
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_85(int iParam0) //Position: 0x690E / 26894
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

void Function_86(float fParam0) //Position: 0x695F / 26975
{
	if (fParam0 < 0.0f)
	{
		FLASH_SET_FLOAT("testInventory", "staminaBlinking", fParam0);
	}
	else
	{
		LOG_ERROR("RADAR_BLINK_HORSE_STAMINA_BAR: called with a negative or zero duration!");
	}
	return;
}

void Function_87(var uParam0, bool bParam1) //Position: 0x69E4 / 27108
{
	int iVar0;
	
	iVar0 = (uParam0 && bParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_88(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7) //Position: 0x69FE / 27134
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_13(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &Var0, 0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &uVar4, &uParam5, &uParam6);
	}
}

struct<16> Function_89(int iParam0) //Position: 0x6A93 / 27283
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
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_90(int iParam0, int iParam1) //Position: 0x6ACD / 27341
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_91() //Position: 0x6AEA / 27370
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

var Function_92(bool bParam0) //Position: 0x6B17 / 27415
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

void Function_93(var uParam0, int iParam1, int iParam2) //Position: 0x6C0B / 27659
{
	var uVar0;
	char* cVar1[16];
	bool bVar5;
	
	uVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	Function_66(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(&uParam0, &cVar1);
	DECOR_SET_INT(&uParam0, &cVar1, (bVar5 - (bVar5 && uVar0)));
	return;
}

void Function_94(var uParam0, int iParam1) //Position: 0x6C5F / 27743
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_95(bool bParam0, int iParam1) //Position: 0x6C70 / 27760
{
	var uVar0;
	
	uVar0 = iParam1;
	if ((bParam0 && uVar0) >= 0)
	{
		return 1;
	}
	return 0;
}

bool Function_96(var uParam0, int iParam1) //Position: 0x6C86 / 27782
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_97(int iParam0) //Position: 0x6C99 / 27801
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_98() //Position: 0x6CB5 / 27829
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_39324)
	{
		if (!Global_39324[iVar0])
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_190(25, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("ramitaBayaBefore");
						ENABLE_WORLD_SECTOR("ramitaBayaAfter");
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdROAD_fom_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
					}
					break;
				
				case 0x00000001:
					if (Function_190(25, 0) && !Function_190(26, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
					}
					break;
				
				case 0x00000002:
					if ((Function_190(25, 0) && Function_190(26, 0)) && !Function_190(29, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeB");
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
					}
					break;
				
				case 0x00000003:
					if ((Function_190(25, 0) && Function_190(26, 0)) && Function_190(29, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
					}
					break;
				
				case 0x00000004:
					if (Function_190(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
					}
					break;
				
				case 0x00000005:
					if (Function_190(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("dixonCrossingBefore");
						ENABLE_WORLD_SECTOR("dixonCrossingAfter");
						ENABLE_CURVE("rsdROAD_thi_blk_road", true);
						ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
					}
					break;
				
				case 0x00000006:
					if (Function_190(22, 0) && !Function_190(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("hen_barn01x");
						DISABLE_CHILD_SECTOR("hen_barn01props01x");
						DISABLE_CHILD_SECTOR("hen_barn01props02x");
						ENABLE_CHILD_SECTOR("hen_barn02x");
						ENABLE_CHILD_SECTOR("hen_barn02props01x");
					}
					break;
				
				case 0x00000007:
					if (Function_190(22, 0) && Function_190(41, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("hen_barn01x");
						ENABLE_CHILD_SECTOR("hen_barn01props01x");
						ENABLE_CHILD_SECTOR("hen_barn01props02x");
						DISABLE_CHILD_SECTOR("hen_barn02x");
						DISABLE_CHILD_SECTOR("hen_barn02props01x");
					}
					break;
				
				case 0x00000008:
					if (Function_190(34, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("campoMiradaBefore");
						ENABLE_WORLD_SECTOR("campoMiradaAfter");
					}
					break;
				
				case 0x00000009:
					if (Function_190(26, 0) || Function_190(30, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					}
					break;
				
				case 0x0000000A:
					if (Function_190(40, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("fod_gates01x");
						ENABLE_CHILD_SECTOR("fod_gates02x");
						ENABLE_CHILD_SECTOR("fod_gates02Doors01x");
					}
					break;
				
				case 0x0000000B:
					if (Function_190(48, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("coc_fence01x");
						ENABLE_CHILD_SECTOR("coc_fence01bx");
						ENABLE_CHILD_SECTOR("coc_gates02x");
						DISABLE_CHILD_SECTOR("coc_gates01x");
					}
					break;
				
				case 0x0000000C:
					if (Function_190(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
					}
					break;
				
				case 0x0000000D:
					if (Function_190(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					}
					break;
				
				case 0x0000000E:
					break;
				
				case 0x0000000F:
					if (Function_190(21, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
						ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
					}
					break;
				
				case 0x00000010:
					if (Function_190(57, 0) || Function_99(57))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_silo02x");
						ENABLE_CHILD_SECTOR("beh_silo01x");
					}
					break;
				
				case 0x00000011:
					if (Function_190(48, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_house02x");
						DISABLE_CHILD_SECTOR("beh_house02props01x");
						ENABLE_CHILD_SECTOR("beh_house01x");
						ENABLE_CHILD_SECTOR("beh_house01props01x");
					}
					break;
				
				case 0x00000012:
					if (Function_190(28, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
						ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
					}
					break;
				
				case 0x00000013:
					if (Function_190(41, 0))
					{
						Global_39324[iVar0] = 1;
						DISABLE_CHILD_SECTOR("esc_villaWall04x");
						ENABLE_CHILD_SECTOR("esc_villaWall05x");
					}
					break;
				
				case 0x00000014:
					if (Function_59(37))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("icarus");
					}
					break;
				
				case 0x00000015:
					break;
				
				case 0x00000016:
					break;
				
				case 0x00000017:
					if (Function_190(57, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave02x");
						ENABLE_CHILD_SECTOR("beh_grave03x");
						DISABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_190(25, 0))
					{
						Global_39324[iVar0] = 1;
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
					if (Function_190(32, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("emt_caveDoor02x");
						DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					}
					break;
				
				case 0x0000001A:
					if (Function_190(20, 0))
					{
						Global_39324[iVar0] = 1;
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

int Function_99(int iParam0) //Position: 0x84A2 / 33954
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

bool Function_100(int iParam0) //Position: 0x84D8 / 34008
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_101(bool bParam0) //Position: 0x84EE / 34030
{
	if (Function_10(bParam0, 1) && !Function_10(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_102(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x851B / 34075
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
		Function_167(&(Global_6667[iVar228]));
		Function_166(4194304);
		if (&bParam3)
		{
			Function_142(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_137(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_142(iVar2, &uVar0, 0);
		}
		bVar1 = Function_136();
		if (&bParam1)
		{
			Function_121(iVar2, bParam0, bVar1);
			Function_120();
		}
	}
	Function_105(bParam0, &bParam1, &uParam2, bVar1);
	if (Function_174(bParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
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
				(&Global_21369 + 72)->f_52++;
				if ((&Global_21369 + 72)->f_52 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_103();
}

void Function_103() //Position: 0x860F / 34319
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_190(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

void Function_104(int iParam0, bool bParam1) //Position: 0x8641 / 34369
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
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_65(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_65(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_65(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_65(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_65(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_65(&Global_54076, 0x1000000, 3, 0);
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

void Function_105(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x893E / 35134
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
		Global_21684[bParam07].f_12++;
		if (Function_117())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_173(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_116(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_13(Global_10966) };
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
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_112("DEED_COMPLETE", bParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[bParam07].f_4 = 4;
		}
		else
		{
			Global_21684[bParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[bParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_107(bParam0);
		}
		if (&bParam1)
		{
			if (&bParam2)
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
			Function_18(1);
			Function_77(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_106(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_10966;
		Var14.f_20 = &bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 48, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_6619 = 1;
}

void Function_106(int iParam0, struct<41> Param1) //Position: 0x8B9C / 35740
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_107(bool bParam0) //Position: 0x8BDA / 35802
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
				Function_79(12, 1, 0, 0);
				Function_110(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_79(13, 1, 0, 0);
				Function_110(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_79(14, 1, 0, 0);
				Function_110(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_79(15, 1, 0, 0);
				Function_110(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_79(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_173(bParam0))
			{
				case 0x00000000:
					if (Function_109(bParam0) == 1)
					{
						iVar0 = Function_108(bParam0);
						if (Function_8(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_110(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_110(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_110(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_110(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_110(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_110(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_110(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_110(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_110(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_110(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_110(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_110(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_110(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_110(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_110(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_110(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_110(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_110(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_110(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_110(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_44085[iVar09];
							}
							else
							{
								iVar0 = Global_44085[iVar09];
								iVar0 = Global_44085[iVar09];
							}
							if (iVar0 == Global_46722[0])
							{
								Function_79(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_79(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_79(365, 1, 0, 0);
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
					Function_79(458, 1, 0, 0);
					iVar0 = Function_173(bParam0);
					if (Function_8(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_110(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_110(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_110(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_110(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_110(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_110(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_110(2, 16);
						}
						else if (iVar0 == Global_46838[1])
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
				Function_79(400, 1, 0, 0);
			}
			switch (Function_173(bParam0))
			{
				case 0x00000001:
					Function_79(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_110(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_110(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_110(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_79(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_110(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
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

int Function_108(bool bParam0) //Position: 0x90B6 / 37046
{
	if (!Function_111(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_109(bool bParam0) //Position: 0x90D5 / 37077
{
	if (!Function_111(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_110(int iParam0, int iParam1) //Position: 0x90EF / 37103
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

bool Function_111(int iParam0) //Position: 0x9159 / 37209
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_112(var uParam0, bool bParam1) //Position: 0x9170 / 37232
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
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_174(bParam1), Function_173(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_174(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_174(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_174(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_174(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_174(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_113() //Position: 0x929A / 37530
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_17(0));
	PLAYSTAT_INT("HC_FAME", Function_17(3));
	PLAYSTAT_INT("HC_HONOR", Function_17(1));
	return;
}

void Function_114() //Position: 0x93FC / 37884
{
	int iVar0;
	int iVar1;
	
	if (!Function_100(Global_10966))
	{
		return;
	}
	iVar0 = Function_17(24);
	iVar1 = Function_182(Global_10966);
	if (!Function_100(iVar0) && Function_115(iVar1) < 0)
	{
		Function_209(24, Global_10966, 0);
		Function_207(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_115(Function_182(iVar0)))
	{
		Function_209(24, Global_10966, 0);
		Function_207(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_115(int iParam0) //Position: 0x947C / 38012
{
	if (!Function_180(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<24> Function_116(char* cParam0) //Position: 0x9496 / 38038
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

bool Function_117() //Position: 0x96EC / 38636
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_118() //Position: 0x9717 / 38679
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
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
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_119(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_119(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x995E / 39262
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_120() //Position: 0x998A / 39306
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_121(int iParam0, int iParam1, bool bParam2) //Position: 0x99B8 / 39352
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
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_89(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_17(42) - Global_53524.f_168);
				bVar1 = (Function_17(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_89(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_43(49)) - Global_53524.f_176);
				bVar3 = (Function_17(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_89(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_17(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_89(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_89(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_134(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
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
		Var16 = { StackVal, StackVal, StackVal, *(&Global_6667[iParam028] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_13(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_53524.f_188 = 0.0f;
	Global_53524.f_192 = 0.0f;
	Global_53524.f_168 = 0;
	Global_53524.f_172 = 0;
	Global_53524.f_176 = 0;
	Global_53524.f_180 = 0;
	return;
}

void Function_122(int iParam0, bool bParam1, bool bParam2) //Position: 0x9C54 / 40020
{
	int iVar0;
	bool bVar1;
	
	if (Function_133(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_117())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_17(3);
	Function_131();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_129(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_96(Global_119936, 4))
			{
				Function_65(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_79(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_42(3));
	iVar0 = Function_17(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_124(4, Function_128(Global_21369.f_248), 1);
				Function_123(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_124(4, Function_128(Global_21369.f_248), 1);
				Function_123(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_124(4, Function_128(Global_21369.f_248), 1);
				Function_123(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_124(4, Function_128(Global_21369.f_248), 1);
				Function_123(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_124(4, Function_128(Global_21369.f_248), 1);
				Function_123(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
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

void Function_123(int iParam0, int iParam1) //Position: 0x9E28 / 40488
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_124(int iParam0, char* cParam1) //Position: 0xA092 / 41106
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_207(iParam0, &cParam1, 0, 1);
	iVar1 = Function_125();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_125() //Position: 0xA222 / 41506
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_126();
	return 0;
}

void Function_126() //Position: 0xA2C3 / 41667
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_127(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_127(int iParam0) //Position: 0xA381 / 41857
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

var Function_128(int iParam0) //Position: 0xA3E7 / 41959
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

int Function_129(int iParam0, bool bParam1) //Position: 0xA476 / 42102
{
	bool bVar0;
	int iVar1;
	
	Function_79(iParam0, bParam1, 0, 0);
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
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_125();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_130(int iParam0, int iParam1) //Position: 0xA622 / 42530
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_131() //Position: 0xA667 / 42599
{
	Function_132(3, 0.0f);
	Function_16(3, 10000.0f);
	return;
}

int Function_132(int iParam0, int iParam1) //Position: 0xA67D / 42621
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_133(int iParam0) //Position: 0xA6BD / 42685
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_134(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0xA6CC / 42700
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_9917[iParam09] + 24)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_9917[iParam09] + 24)[1])
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
			if (bParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (bParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (bParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (bParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (bParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (bParam3 <= Global_9917[iParam09][1])
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
			if (bParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (bParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (bParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (bParam4 > (*&Global_9917[iParam09] + 48)[1])
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

int Function_135(int iParam0) //Position: 0xA894 / 43156
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

var Function_136() //Position: 0xA929 / 43305
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_137(int iParam0) //Position: 0xA94E / 43342
{
	if (!Function_100(iParam0))
	{
		return;
	}
	if (Global_6624)
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
			Function_220(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_220(50, 1, 1);
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
			Function_220(50, 1, 1);
			Function_122(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_220(5, 1, 1);
			Function_138(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_122(75, 1, 0);
			Function_138(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_220(5, 1, 1);
			Function_122(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_122(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_138(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_220(25, 1, 1);
			Function_122(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_220(10, 1, 1);
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
			Function_220(20, 1, 1);
			Function_122(75, 1, 0);
			Function_138(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_220(25, 1, 1);
			Function_122(150, 1, 0);
			Function_138(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_220(10, 1, 1);
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
			Function_220(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_220(3, 1, 1);
			Function_122(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_138(125, 1, 0);
			Function_122(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_220(50, 1, 1);
			Function_122(100, 1, 0);
			Function_138(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_220(50, 1, 1);
			Function_122(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_220(75, 1, 1);
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
			Function_220(50, 1, 1);
			Function_122(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_220(100, 1, 1);
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
			Function_220(100, 1, 1);
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
			Function_220(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_138(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_138(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_138(150, 1, 0);
			Function_220(100, 1, 1);
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

void Function_138(int iParam0, bool bParam1, bool bParam2) //Position: 0xAE1D / 44573
{
	int iVar0;
	bool bVar1;
	
	if (Function_133(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_117())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_17(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_129(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_96(Global_119936, 1))
				{
					Function_65(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_141(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_96(Global_119936, 2))
				{
					Function_65(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_79(1, bVar1, 0, 0);
	}
	else
	{
		Function_140(1, (4294967295 * bVar1), 0);
	}
	if (Function_17(1) <= 4294962296)
	{
		Function_209(1, 4294962296, 0);
	}
	else if (Function_17(1) >= 5000)
	{
		Function_209(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_42(1));
	iVar0 = Function_17(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_124(2, Function_139(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_124(2, Function_139(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_124(2, Function_139(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_124(2, Function_139(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_124(2, Function_139(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_124(2, Function_139(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_124(2, Function_139(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_124(2, Function_139(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_124(2, Function_139(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_124(2, Function_139(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_124(2, Function_139(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
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
				Global_21369.f_244 = 5;
				Function_124(2, Function_139(Global_21369.f_244), 0);
			}
			break;
	}
	Function_123(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_139(int iParam0) //Position: 0xB144 / 45380
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

int Function_140(int iParam0, bool bParam1, int iParam2) //Position: 0xB1E7 / 45543
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_44(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

int Function_141(int iParam0, bool bParam1) //Position: 0xB3E4 / 46052
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
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_125();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

void Function_142(int iParam0, var uParam1, bool bParam2) //Position: 0xB58F / 46479
{
	struct<4> Var0;
	
	if (!Function_100(iParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_164(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_184(Global_46760[0]);
			Function_184(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_162(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_184(Global_46816[0]);
			Function_155(0);
			Function_153(2, 1);
			Function_153(0, 1);
			Function_153(1, 1);
			break;
		
		case 0x00000003:
			Function_184(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_184(Global_46816[0]);
			Function_184(Global_46760[0]);
			Function_151(0, 1);
			Function_151(15, 1);
			Function_151(9, 1);
			Function_151(12, 1);
			Function_151(16, 1);
			Function_153(3, 1);
			break;
		
		case 0x00000005:
			Function_184(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_162(21, &bParam2, 4);
			Function_184(Global_46816[0]);
			Function_153(39, 1);
			break;
		
		case 0x00000007:
			Function_184(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_184(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_189())
				{
					if (!Function_81(4))
					{
						Function_64(4, 0, 0, 1, 0);
					}
				}
			}
			Function_184(Global_46760[0]);
			Function_184(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_184(Global_46760[0]);
			Function_184(Global_46816[2]);
			Function_150(&(Global_43791[Global_46816[2]]), 32768);
			Function_149(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_162(9, &bParam2, 4);
			Function_184(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_184(Global_46760[0]);
			Function_184(Global_46796[0]);
			Function_150(&(Global_43791[Global_46796[0]]), 32768);
			Function_149(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_184(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_184(Global_46760[0]);
			Function_184(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_184(Global_46760[1]);
			Function_184(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_184(Global_46838[0]);
			Function_184(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_184(Global_46796[5]);
			Function_184(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_162(21, &bParam2, 4);
			Function_184(Global_46760[4]);
			Function_184(Global_46796[4]);
			Function_94(&Global_119935, 0x2000000);
			Function_94(&Global_119935, 0x4000000);
			Function_94(&Global_119935, 4096);
			Function_94(&Global_119935, 8);
			Function_94(&Global_119935, 8388608);
			Function_94(&Global_119935, 524288);
			Function_94(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_184(Global_46760[4]);
			Function_184(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_149(&(Global_43791[Global_46760[4]]), 256);
			Function_184(Global_46760[4]);
			Function_184(Global_46796[0]);
			Function_150(&(Global_43791[Global_46796[0]]), 32768);
			Function_149(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_184(Global_46760[0]);
			Function_184(Global_46760[5]);
			Function_162(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_184(Global_46796[3]);
			Function_150(&(Global_43791[Global_46796[3]]), 32768);
			Function_149(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_162(9, &bParam2, 4);
			Function_184(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_150(&(Global_43791[Global_46838[1]]), 32768);
			Function_184(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_162(12, &bParam2, 4);
			Function_149(&(Global_43791[Global_46838[1]]), 256);
			Function_184(Global_46816[3]);
			Function_184(Global_46866[0]);
			Function_184(Global_46850[0]);
			Function_155(4);
			Function_151(13, 1);
			Function_151(1, 1);
			Function_151(18, 1);
			Function_153(34, 1);
			Function_153(44, 1);
			Function_153(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_162(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_184(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_184(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_184(Global_46866[0]);
			Function_184(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_184(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_184(Global_46850[0]);
			Function_184(Global_46866[0]);
			Function_184(Global_46866[1]);
			Function_184(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_162(23, &bParam2, 3);
			Function_151(23, 1);
			Function_184(Global_46850[0]);
			Function_184(Global_46850[2]);
			Function_150(&(Global_43791[Global_46850[2]]), 32768);
			Function_149(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_162(19, &bParam2, 4);
			Function_184(Global_46850[0]);
			Function_184(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_162(24, &bParam2, 3);
			Function_151(24, 1);
			Function_184(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_184(Global_46850[0]);
			Function_184(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_184(Global_46866[12]);
			Function_184(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_184(Global_46866[12]);
			Function_184(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_162(25, &bParam2, 10);
			Function_184(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_184(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_184(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_162(13, &bParam2, 4);
			Function_184(Global_46866[2]);
			Function_184(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_81(8))
				{
					Function_64(8, 0, 0, 1, 0);
				}
			}
			Function_184(Global_46850[0]);
			Function_155(9);
			Function_151(7, 1);
			Function_151(11, 1);
			Function_151(3, 1);
			Function_151(20, 1);
			Function_153(57, 1);
			break;
		
		case 0x0000002A:
			Function_162(2, &bParam2, 4);
			Function_184(Global_46914[0]);
			Function_184(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_184(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_184(Global_46914[0]);
			Function_184(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_184(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_184(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_184(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_162(17, &bParam2, 4);
			Function_184(Global_46926[0]);
			Function_184(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_85(15))
				{
					Function_191(15, 0, 1);
				}
			}
			Function_110(2, 26);
			Function_149(&(Global_43791[Global_46914[1]]), 256);
			Function_155(11);
			Function_184(Global_46914[1]);
			Function_184(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_184(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_184(Global_46914[1]);
			Function_184(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_184(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_184(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_184(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_184(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_184(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_184(Global_46914[1]);
			Function_143(11);
			Function_155(12);
			Global_26200[1114].f_40 = 0;
			Function_153(56, 1);
			if (!&bParam2)
			{
				if (!Function_81(9))
				{
					Function_64(9, 0, 0, 0, 0);
				}
				if (!Function_81(10))
				{
					Function_64(10, 0, 0, 1, 0);
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

void Function_143(int iParam0) //Position: 0xBEAA / 48810
{
	var uVar0;
	
	if (!Function_51(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_148(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_148(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), false);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (!DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Global_26200[iParam014].f_40 = 6;
			Function_144(Global_26200[iParam014].f_48, 16, 0, 0);
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_SET_BOOL(&uVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_REMOVE(&Global_26200[iParam014] + 104, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_144(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xC029 / 49193
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal && Global_15863[iVar02] != iParam0 != iParam1)
			{
				Global_15863[iVar02] = 4294967294;
				Global_15863[iVar02].f_4 = 0;
				Global_15863[iVar02].f_8 = 0;
				if (IS_BLIP_VALID(&(Global_16865[iVar0])))
				{
					REMOVE_BLIP(&(Global_16865[iVar0]));
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_146(Function_147(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_146(Function_147(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_146(StackVal);
				Var1 = Function_146(StackVal);
				if (Function_145(StackVal, StackVal, Var1, Var3))
				{
					Global_15863[iVar02] = 4294967294;
					Global_15863[iVar02].f_4 = 0;
					Global_15863[iVar02].f_8 = 0;
					if (IS_BLIP_VALID(&(Global_16865[iVar0])))
					{
						REMOVE_BLIP(&(Global_16865[iVar0]));
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_145(struct<2> Param0, struct<2> Param2) //Position: 0xC134 / 49460
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_146(int iParam0) //Position: 0xC160 / 49504
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	
	bVar2 = iParam0 & 32767;
	bVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(bVar2);
	Var0.f_8 = TO_FLOAT(bVar3);
	if (iParam0 & 1073741824 == 0)
	{
		Var0 = (Var0 * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		Var0.f_8 = (StackVal * -1.0f);
	}
	return StackVal, Var0;
}

var Function_147(vector3 vParam0) //Position: 0xC1B7 / 49591
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

void Function_148(var uParam0, int iParam1) //Position: 0xC205 / 49669
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "lockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "unlockMe"))
	{
		DECOR_REMOVE(&uParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 1);
	}
	return;
}

void Function_149(var uParam0, int iParam1) //Position: 0xC260 / 49760
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_150(var uParam0, int iParam1) //Position: 0xC27A / 49786
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_151(int iParam0, int iParam1) //Position: 0xC28B / 49803
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_152(iParam0, iParam1);
	Function_65(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0xC300 / 49920
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0xC35D / 50013
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_154(iParam0, iParam1);
	Function_65(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_154(int iParam0, int iParam1) //Position: 0xC3D0 / 50128
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_155(int iParam0) //Position: 0xC42B / 50219
{
	var uVar0;
	var uVar1;
	
	if (!Function_51(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_161(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_161(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), true);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Function_79(468, 1, 0, 0);
			Function_110(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_12("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_144(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_64(14, 1, 0, 0, 0);
				Function_156(14, 1, 0, 0, 0);
			}
			if (!Function_206(0, 0, 1, 1))
			{
				Function_18(1);
				Function_77(1, 6);
			}
			else
			{
				Function_76();
			}
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_REMOVE(&uVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			uVar1 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar1))
			{
				DECOR_REMOVE(&uVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
			}
			Global_26200[iParam014].f_40 = 4;
			Function_12("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_79(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_110(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_156(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xC6EB / 50923
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_84(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_83(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_82(bParam0, 2))
	{
		Function_79(456, 1, 0, 0);
		Function_78(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_12(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_74(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_78(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_206(0, 0, 1, 1))
			{
				Function_18(1);
				Function_77(1, 0);
			}
			else
			{
				Function_76();
			}
		}
		Function_70(bParam0);
		if (StackVal && !Function_10(((((!Function_91() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_10((((Function_91() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_14())
		{
			if (!Function_96(Global_119934, 2))
			{
				Function_65(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_158();
		}
		Global_42827.f_16 = 1;
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

void Function_157(int iParam0, bool bParam1) //Position: 0xC98A / 51594
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_158() //Position: 0xC9F9 / 51705
{
	if (Function_84(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_160(Global_42827);
			*(&Global_42827 + 8) = Function_159(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_160(Global_42827);
			*(&Global_42827 + 8) = Function_159(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_159(int iParam0, int iParam1) //Position: 0xCA79 / 51833
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
					if (Function_190(6, 0) || Function_190(12, 0))
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
					if (Function_59(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_190(5, 0))
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
					if (Function_59(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_59(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_59(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_59(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_190(26, 0))
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
					if (Function_59(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_59(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_59(27) && iVar16)
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
					if (Function_59(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_59(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_59(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_59(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_190(17, 0) && iVar13)
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
					if (Function_59(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_190(6, 0) && Function_59(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_59(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_190(9, 0) && Function_59(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_59(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_190(8, 0) && iVar17)
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
	if (Function_47(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_47(StackVal, vVar2))
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
	if (!Function_47(StackVal, vVar2))
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

int Function_160(int iParam0) //Position: 0xD6DC / 55004
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

void Function_161(var uParam0, int iParam1) //Position: 0xD72B / 55083
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "lockMe"))
	{
		DECOR_REMOVE(&uParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 0);
	}
	return;
}

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0xD783 / 55171
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_163(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_164(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_6624 && &iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_163(int iParam0, int iParam1) //Position: 0xD7F6 / 55286
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

int Function_164(bool bParam0, bool bParam1, int iParam2) //Position: 0xD80A / 55306
{
	if (!Function_165(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_26(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_26(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_26(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_165(int iParam0) //Position: 0xD864 / 55396
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_166(bool bParam0) //Position: 0xD876 / 55414
{
	bool bVar0;
	
	if (Function_10(bParam0, 1) && Function_10(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_167(struct<185> Param0) //Position: 0xD8AA / 55466
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_168(4, 0, 0);
		}
	}
	return;
}

void Function_168(bool bParam0, var uParam1, int iParam2) //Position: 0xD915 / 55573
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_26182 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_26182 = Global_26182.f_48;
	}
	else
	{
		Global_26182 = StackVal;
	}
	Global_26182.f_4 = 4294967295;
	Global_26182.f_24 = 0;
	if (!StackVal != Global_26182)
	{
		bVar0 = MAKE_TIME_OF_DAY(bParam0, &uParam1, &iParam2);
		Function_169(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_169(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD9FF / 55807
{
	int iVar0;
	
	Function_172(bParam0);
	Function_171(&bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, &bParam1);
	Function_170();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&bParam1), 0);
	Global_26182.f_8 = bParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
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
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_170() //Position: 0xDB7E / 56190
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_171(int iParam0) //Position: 0xDB8A / 56202
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

void Function_172(int iParam0) //Position: 0xDBD4 / 56276
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

int Function_173(bool bParam0) //Position: 0xDC1A / 56346
{
	if (!Function_111(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

int Function_174(bool bParam0) //Position: 0xDC3A / 56378
{
	if (!Function_111(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_175(int iParam0) //Position: 0xDC55 / 56405
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_176(105)), 0);
	return;
}

int Function_176(int iParam0) //Position: 0xDC78 / 56440
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_177(int iParam0) //Position: 0xDC8F / 56463
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_171(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_171(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_171(&Global_21369 + 48);
	PRINTNL();
	Function_178(&iParam0);
	return;
}

void Function_178(int iParam0) //Position: 0xDD31 / 56625
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_176(90)), 0);
	return;
}

void Function_179(int iParam0) //Position: 0xDD54 / 56660
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

bool Function_180(int iParam0) //Position: 0xDD71 / 56689
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

bool Function_181(int iParam0) //Position: 0xDD95 / 56725
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_182(int iParam0) //Position: 0xDDAA / 56746
{
	if (!Function_100(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_183() //Position: 0xDDC4 / 56772
{
	if (!Global_39324[0])
	{
		Global_39324[0] = 1;
		DISABLE_WORLD_SECTOR("ramitaBayaBefore");
		ENABLE_WORLD_SECTOR("ramitaBayaAfter");
		ENABLE_CURVE("rsdROAD_frb_road", true);
		ENABLE_CURVE("rsdROAD_fom_frb_road", true);
		ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
	}
	if (!Global_39324[3])
	{
		Global_39324[1] = 1;
		Global_39324[2] = 1;
		Global_39324[3] = 1;
		DISABLE_WORLD_SECTOR("butterBridgeA");
		DISABLE_WORLD_SECTOR("butterBridgeD");
		DISABLE_WORLD_SECTOR("butterBridgeC");
		ENABLE_WORLD_SECTOR("butterBridgeB");
		ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
	}
	if (!Global_39324[9])
	{
		Global_39324[9] = 1;
		DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
		ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
	}
	if (!Global_39324[12])
	{
		Global_39324[12] = 1;
		DISABLE_WORLD_SECTOR("masonBridgeBefore");
		ENABLE_WORLD_SECTOR("masonBridgeAfter");
	}
	if (!Global_39324[4])
	{
		Global_39324[4] = 1;
		DISABLE_WORLD_SECTOR("tannersSpanBefore");
		ENABLE_WORLD_SECTOR("tannersSpanAfter");
	}
	if (!Global_39324[5])
	{
		Global_39324[5] = 1;
		DISABLE_WORLD_SECTOR("dixonCrossingBefore");
		ENABLE_WORLD_SECTOR("dixonCrossingAfter");
		ENABLE_CURVE("rsdROAD_thi_blk_road", true);
		ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
		ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
		ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
	}
	return;
}

void Function_184(int iParam0) //Position: 0xE06A / 57450
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_186(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_150(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_79(473, 1, 0, 0);
		iVar0 = Function_185(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_79(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_79(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_79(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_44085[iParam09].f_64 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_110(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_110(7, 30);
	}
	if (Function_42(473) <= Function_43(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_185(int iParam0) //Position: 0xE15B / 57691
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_8(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

bool Function_186(var uParam0, int iParam1) //Position: 0xE1B3 / 57779
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_187(int[] iParam0) //Position: 0xE1D0 / 57808
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (!Function_188(iParam0[iVar0]))
		{
			Function_184(iParam0[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool Function_188(int iParam0) //Position: 0xE204 / 57860
{
	if (!Function_8(iParam0))
	{
		return 0;
	}
	return Function_186(&(Global_43791[iParam0]), 4096);
}

bool Function_189() //Position: 0xE222 / 57890
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_10(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_190(int iParam0, bool bParam1) //Position: 0xE252 / 57938
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
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

void Function_191(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE290 / 58000
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_84(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_85(bParam0))
	{
		if (!Function_81(bParam0))
		{
			Function_64(bParam0, 1, 0, 0, 1);
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
		Function_79(457, 1, 0, 0);
		Function_78(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_206(0, 0, 1, 1))
			{
				Function_18(1);
				Function_77(1, 0);
			}
			else
			{
				Function_76();
			}
		}
	}
	return;
}

var Function_192(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0xE431 / 58417
{
	var uVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	var uVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param4, Param6);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return &uVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(&uVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(&uVar0);
		if (&iParam12 > iVar10 && &iParam12 < 0)
		{
			iVar10 = &iParam12;
		}
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			uVar15 = "";
			if (Function_195(&(Global_46972[6]), 4, 23, 0) && uParam8)
			{
				bVar16 = Function_194(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_193(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar16, Param4, Param6);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(&uVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = &iParam9;
						break;
					
					case 0x00000002:
						bVar17 = &iParam10;
						break;
					
					case 0x00000003:
						bVar17 = &iParam11;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return &uVar0;
				}
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar17, Param4, Param6);
			}
			if (IS_ACTOR_VALID(&uVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(&uVar15, &uVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return &uVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(&uVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(&uVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(&uVar0, bVar18, 0);
			bVar18++;
		}
	}
	return &uVar0;
}

bool Function_193(int iParam0, bool[] bParam1) //Position: 0xE684 / 59012
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		if (bParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_194(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0xE6B8 / 59064
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_195(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xE6D4 / 59092
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &uParam1, &uParam2);
}

var Function_196() //Position: 0xE700 / 59136
{
	int iVar0;
	
	return &iVar0;
}

bool Function_197(bool bParam0) //Position: 0xE709 / 59145
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_198(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xE720 / 59168
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(StackVal, &uParam0, &iParam1, &iParam2, &iParam3, 0f, Vector(0.0f, 0.0f, 0.0f));
}

void Function_199(var uParam0, bool bParam1) //Position: 0xE73C / 59196
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_172(uParam0);
	Function_171(&uVar0);
	PRINTNL();
	Function_169(uParam0, &uVar0, &bParam1);
	return;
}

var Function_200() //Position: 0xE765 / 59237
{
	return StackVal;
}

var Function_201() //Position: 0xE770 / 59248
{
	return Global_54082 != 1;
}

bool Function_202(int iParam0, bool bParam1, bool bParam2) //Position: 0xE77B / 59259
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
	if (Function_205(&iParam0))
	{
		return 1;
	}
	if (Function_204(&iParam0))
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
	if (Function_203())
	{
		return 1;
	}
	return 0;
}

bool Function_203() //Position: 0xE83F / 59455
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_204(int iParam0) //Position: 0xE856 / 59478
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_205(int iParam0) //Position: 0xE862 / 59490
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

bool Function_206(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xE871 / 59505
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

int Function_207(int iParam0, char* cParam1) //Position: 0xE920 / 59680
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
		Function_208(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, (&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_208(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0xEC77 / 60535
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

int Function_209(int iParam0, bool bParam1, bool bParam2) //Position: 0xECFF / 60671
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
		Function_45(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_44(iParam0);
	if (&bParam2)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_210() //Position: 0xEF9B / 61339
{
	return;
}

void Function_211(bool bParam0) //Position: 0xEFA1 / 61345
{
	if (Global_6646 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_6646 = 1;
		if (!Global_42250)
		{
			if (IS_FACTION_VALID(Global_40000))
			{
				SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 6);
			}
		}
		Global_21575 = 0;
	}
	else
	{
		Global_6646 = 0;
		Global_6648 = 0;
		Function_212();
		if (IS_FACTION_VALID(Global_40000))
		{
			SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 2);
		}
		SET_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
		SET_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
		if (IS_SCRIPT_VALID(&Global_39922 + 96))
		{
			TERMINATE_SCRIPT(&Global_39922 + 96);
		}
		if (IS_SCRIPT_VALID(&Global_39922 + 104))
		{
			TERMINATE_SCRIPT(&Global_39922 + 104);
		}
		Global_21575 = 4294967295;
	}
	return;
}

void Function_212() //Position: 0xF030 / 61488
{
	int iVar0;
	
	Global_41176 = Function_305(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_41176 + 4)[iVar0] = (*&Global_40060 + 68[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

void Function_213(int iParam0, bool bParam1) //Position: 0xF07E / 61566
{
	if (!Function_215(iParam0))
	{
		return;
	}
	Global_40060[iParam0] = bParam1;
	Function_214((*&Global_40060 + 4428)[iParam0], TO_FLOAT(bParam1), 0);
	Function_214(222, TO_FLOAT((Function_17(223) + Function_17(224))), 0);
	return;
}

int Function_214(int iParam0, bool bParam1, bool bParam2) //Position: 0xF0BF / 61631
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > bParam1)
	{
		Function_45(iParam0, bParam1, 0);
	}
	Global_54086[iParam0] = bParam1;
	Function_44(iParam0);
	if (&bParam2)
	{
		Function_33(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

bool Function_215(int iParam0) //Position: 0xF32C / 62252
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_216(int iParam0, bool bParam1) //Position: 0xF341 / 62273
{
	if (!Function_215(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_40060[iParam0])
	{
		Function_140(222, Global_40060[iParam0], 0);
		if (Function_17(222) <= 0)
		{
			Function_209(222, 0, 0);
		}
		Global_40060[iParam0] = 0;
		Function_209((*&Global_40060 + 4428)[iParam0], 0, 0);
	}
	else
	{
		Global_40060[iParam0] = (Global_40060[iParam0] - bParam1);
		Function_140((*&Global_40060 + 4428)[iParam0], bParam1, 0);
		Function_140(222, bParam1, 0);
	}
	return;
}

void Function_217(int iParam0, bool bParam1) //Position: 0xF3CA / 62410
{
	if (!Function_215(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_40060[iParam0] = (Global_40060[iParam0] + bParam1);
	Function_79((*&Global_40060 + 4428)[iParam0], bParam1, 0, 0);
	Function_79(222, bParam1, 0, 0);
	return;
}

void Function_218(int iParam0) //Position: 0xF40F / 62479
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_219(int iParam0) //Position: 0xF422 / 62498
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

int Function_220(bool bParam0, bool bParam1, bool bParam2) //Position: 0xF43F / 62527
{
	bool bVar0;
	
	bVar0 = Function_17(0);
	if ((Function_17(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_79(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_17(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_79(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_17(597) + Function_17(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_221(struct<89> Param0) //Position: 0xF511 / 62737
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
			Function_228(&Param0, &Param0 + 80);
			REFERENCE_OBJECT(&Param0 + 72);
			(&Param0 + 80) = "";
			Function_227(&Param0);
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
		*(&Param0 + 80) = Function_226(&Param0);
		if (IS_OBJECT_VALID(&Param0 + 80))
		{
			STREAMING_UNLOAD_SCENE();
			GET_OBJECT_POSITION(&Param0 + 80, &Var8);
			GET_OBJECT_ORIENTATION(&Param0 + 80, &Var10);
			STREAMING_LOAD_SCENE_EXT(Var8, Var10, 1);
			Param0.f_88 = fVar0;
			Function_225(&Param0, Function_26());
			Function_227(&Param0);
		}
	}
	Function_222(&Param0, fVar0);
	if (Function_47(StackVal, *(&Param0 + 24)))
	{
	}
	if (Function_47(StackVal, *(&Param0 + 36)))
	{
	}
	return;
}

void Function_222(struct<49> Param0) //Position: 0xF6CA / 63178
{
	Function_224(&Param0);
	Function_223(&Param0);
	Param0.f_48 = iParam1;
	return;
}

void Function_223(int iParam0) //Position: 0xF6E3 / 63203
{
	struct<2> Var0;
	
	Var0 = *(&iParam0 + 36);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&iParam0 + 96), Var0, StackVal);
	SET_CAMERA_TARGET_POSITION(&iParam0 + 64, Var0, 0);
	return;
}

void Function_224(int iParam0) //Position: 0xF710 / 63248
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&iParam0 + 72, &iParam0 + 24);
	GET_OBJECT_AXIS(&iParam0 + 72, &Var0, 2);
	VNORMALIZE(&Var0);
	VSCALE(&Var0, -30.0f);
	*(&iParam0 + 36) = Vector(StackVal, StackVal, StackVal) + Vector(Var0, *(&iParam0 + 24), StackVal);
	return;
}

void Function_225(struct<93> Param0) //Position: 0xF753 / 63315
{
	int iVar0;
	
	*(&Param0 + 72) = &iParam1;
	Param0.f_92 = GET_PROFILE_TIME();
	iVar0 = 31;
	ADD_CAMERA_COLLISION_EXCLUSION(&Param0 + 64, &Param0 + 72, iVar0);
	return;
}

var Function_226(int iParam0) //Position: 0xF77F / 63359
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

void Function_227(struct<121> Param0) //Position: 0xF826 / 63526
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&Param0 + 72, &Param0 + 108);
	Param0.f_120 = 0.0f;
	GET_OBJECT_POSITION(&Param0 + 72, &Param0 + 24);
	GET_OBJECT_AXIS(&Param0 + 72, &Var0, 2);
	VNORMALIZE(&Var0);
	VSCALE(&Var0, -30.0f);
	*(&Param0 + 36) = Vector(StackVal, StackVal, StackVal) + Vector(Var0, *(&Param0 + 24), StackVal);
	return;
}

void Function_228(var uParam0, var uParam1) //Position: 0xF87E / 63614
{
	if (IS_OBJECT_VALID(&uParam1))
	{
		Function_225(&uParam0, &uParam1);
		Function_227(&uParam0);
	}
	return;
}

int Function_229() //Position: 0xF89C / 63644
{
	int iVar0;
	
	Function_258(0);
	if (!IS_ITERATOR_VALID(&Global_39613))
	{
		return 0;
	}
	iVar0 = START_OBJECT_ITERATOR(&Global_39613);
	while (IS_OBJECT_VALID(&iVar0))
	{
		Function_230(GET_EVENT_FROM_OBJECT(&iVar0));
		iVar0 = OBJECT_ITERATOR_NEXT(&Global_39613);
	}
	return 0;
}

void Function_230(int iParam0) //Position: 0xF8DD / 63709
{
	struct<17> Var0;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	char* cVar28[64];
	char* cVar44[64];
	struct<4> Var60;
	struct<4> Var64;
	var uVar68;
	bool bVar69;
	struct<2> Var70;
	struct<2> Var72;
	bool bVar74;
	
	if (!IS_EVENT_VALID(&iParam0))
	{
		return;
	}
	*(&Var0 + 80) = 3;
	bVar74 = GET_EVENT_TYPE(&iParam0);
	switch (bVar74)
	{
		case 0x00000063:
			if (!DECOR_CHECK_EXIST(&iParam0, "Mission"))
			{
				return;
			}
			bVar24 = DECOR_GET_INT(&iParam0, "Mission");
			Var0 = 1;
			bVar69 = false;
			while (Function_100(Var0) && !bVar69)
			{
				Var60 = { StackVal, StackVal, StackVal, *(&Global_6667[Var028] + 16) };
				Var64 = { StackVal, StackVal, StackVal, Function_13(Var0) };
				if (STRING_TO_HASH(&Var60) != bVar24 || STRING_TO_HASH(&Var64) != bVar24)
				{
					bVar69 = true;
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
			if (!Function_206(0, 0, 1, 1))
			{
				Function_18(1);
			}
			Var0.f_16 = 1;
			*(&Var0 + 4) = *(&Global_6667[Var028] + 88);
			uVar68 = Function_257(Var0);
			if (!STRINGS_ARE_EQUAL(&uVar68, ""))
			{
				while (!Function_256(&uVar68, &Var70, &Var72) && !IS_EXITFLAG_SET())
				{
					WAIT(false);
				}
			}
			if (Function_47(StackVal, Var70))
			{
				Function_255(StackVal, &Var70, &Var72, *(&Var0 + 4), 90.0f, 0);
			}
			VSCALE(&Var72, (6,28f / 360.0f));
			STREAMING_OVERRIDE_MAIN_POI(Var70, Var72);
			STREAMING_SET_CUTSCENE_MODE(1);
			RESET_STORED_DATA();
			STORE_GAME_STATE(&Var0, 48, 1);
			Var60 = { StackVal, StackVal, StackVal, Function_254(Var0) };
			UNK_0xC6E36B1D(&Var60);
			RESET_GAME();
			break;
		
		case 0x00000067:
			if (!DECOR_CHECK_EXIST(&iParam0, "IdHash"))
			{
				return;
			}
			bVar24 = DECOR_GET_INT(&iParam0, "IdHash");
			iVar26 = 0;
			while (iVar26 <= Global_42265)
			{
				if (Function_81(iVar26))
				{
					if (Function_85(iVar26))
					{
						strcpy(&cVar28, "out_", 64);
						stradd(&cVar28, &Global_42265[iVar269] + 32, 64);
						if (STRING_TO_HASH(&cVar28) == bVar24)
						{
							if (!Global_42825 != iVar26)
							{
								if (Function_253(iVar26, 1, 0))
								{
									bVar25 = true;
									DECOR_REMOVE(&Global_54076, "OutfitChanged");
								}
							}
						}
					}
				}
				iVar26++;
			}
			UI_POP("PauseMenuScene");
			if (bVar25)
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			break;
		
		case 0x0000006A:
			if (!DECOR_CHECK_EXIST(&iParam0, "IdHash"))
			{
				return;
			}
			bVar24 = DECOR_GET_INT(&iParam0, "IdHash");
			iVar26 = 0;
			while (iVar26 <= Global_42265)
			{
				if (Global_42265[iVar269] != 4294967295)
				{
					strcpy(&cVar28, "out_", 64);
					stradd(&cVar28, &Global_42265[iVar269] + 32, 64);
					if (STRING_TO_HASH(&cVar28) == bVar24)
					{
						if (Function_85(iVar26))
						{
							strcpy(&cVar44, UI_GET_STRING("out_wares_complete"), 64);
						}
						else if (Function_81(iVar26))
						{
							strcpy(&cVar44, INT_TO_STRING(Global_42265[iVar269].f_24), 64);
							stradd(&cVar44, " / ", 64);
							stradd(&cVar44, INT_TO_STRING(Global_42265[iVar269].f_28), 64);
							stradd(&cVar44, UI_GET_STRING("out_wares_collect"), 64);
						}
						else
						{
							strcpy(&cVar44, UI_GET_STRING("Common_Null"), 64);
						}
						UI_SET_STRING("OutfitInfo_Scraps", &cVar44);
						UI_REFRESH("OutfitPanel");
					}
				}
				iVar26++;
			}
			break;
		
		case 0x00000068:
			if (!DECOR_CHECK_EXIST(&iParam0, "Mission"))
			{
				return;
			}
			bVar24 = DECOR_GET_INT(&iParam0, "Mission");
			iVar27 = 1;
			bVar69 = false;
			while (Function_100(iVar27) && !bVar69)
			{
				Var60 = { StackVal, StackVal, StackVal, *(&Global_6667[iVar2728] + 16) };
				Var64 = { StackVal, StackVal, StackVal, Function_13(iVar27) };
				if (STRING_TO_HASH(&Var60) != bVar24 || STRING_TO_HASH(&Var64) != bVar24)
				{
					bVar69 = true;
				}
				else
				{
					iVar27++;
				}
			}
			if (bVar69)
			{
				if (Function_190(iVar27, 0))
				{
					Function_250(iVar27);
				}
			}
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
			bVar24 = DECOR_GET_INT(&iParam0, "Type");
			break;
		
		case 0x0000006F:
			if (!DECOR_CHECK_EXIST(&iParam0, "Type"))
			{
				return;
			}
			bVar24 = DECOR_GET_INT(&iParam0, "Type");
			bVar24 = bVar24;
			Function_232(bVar24);
			break;
		
		case 0x00000071:
			if (!DECOR_CHECK_EXIST(&iParam0, "Option"))
			{
				return;
			}
			Function_231(DECOR_GET_BOOL(&iParam0, "Option"));
			break;
	}
	return;
}

void Function_231(int iParam0) //Position: 0xFD61 / 64865
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

void Function_232(int iParam0) //Position: 0xFD8D / 64909
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
				Function_233(&iVar2, iParam0);
			}
			iVar1++;
		}
	}
	return;
}

void Function_233(int iParam0, int iParam1) //Position: 0xFDCD / 64973
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
	
	iVar0 = Function_249(&iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (!Global_132987[iVar0125].f_120)
		{
			strcpy(&cVar2, "SC_AA", 32);
			cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar2, "_SP") };
			if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
			{
				bVar1 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
			}
			Function_243(&iParam0);
			cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar2, "_") };
			cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar2, I2STR(bVar1)) };
			Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar2, "_obj1") };
			Var34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar2, "_obj2") };
			Var42 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar2, "_obj3") };
			Var50 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar2, "_globalName") };
			Var58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar2, "_friendName") };
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
					Function_240(&iParam0, iVar0, 4, 2);
					break;
				
				case 0x00000002:
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 0, &Var58);
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_TheirBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 3, "Common_Null");
					Function_240(&iParam0, iVar0, 1, 2);
					break;
				
				case 0x00000001:
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 0, &Var50);
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_TheBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 3, "Common_Null");
					Function_240(&iParam0, iVar0, 0, 2);
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
			Function_236(&iParam0);
			cVar67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar67, "_") };
			cVar67 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar67, I2STR(bVar66)) };
			Var83 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar67, "_obj1") };
			Var91 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar67, "_globalName") };
			Var99 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar67, "_friendName") };
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
					Function_234(&iParam0, iVar0, 4, 2);
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
					Function_234(&iParam0, iVar0, 1, 2);
					break;
				
				case 0x00000001:
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 0, &Var91);
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 1, "SClubStat_TheBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 2, "SClubStat_YourBest");
					UI_CHALLENGE_SET_COLUMN_HEADER(&iParam0, 3, "Common_Null");
					Function_234(&iParam0, iVar0, 0, 2);
					break;
				}
			}
	}
	return;
}

void Function_234(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x10565 / 66917
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
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "_count") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "_compare") };
	Function_235(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, (*&Global_132987[iParam1125] + 212)[iParam211], Var17);
	Function_235(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, (*&Global_132987[iParam1125] + 212)[iParam311], Var9);
	UI_CHALLENGE_SET_TIME_INFO(&iParam0, 0, &Var17);
	UI_CHALLENGE_SET_TIME_INFO(&iParam0, 1, &Var9);
}

void Function_235(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x10630 / 67120
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

void Function_236(int iParam0) //Position: 0x10682 / 67202
{
	int iVar0;
	
	iVar0 = Function_249(&iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (Global_132987[iVar0125].f_120)
		{
			Function_237(&iParam0);
		}
	}
	return;
}

void Function_237(int iParam0) //Position: 0x106B1 / 67249
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
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_239(&cVar1, "_locked", "") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "_des") };
	if (SC_CHALLENGE_GET_COMMUNITY_VALUE(&iParam0) > SC_CHALLENGE_GET_COMMUNITY_TOTAL(&iParam0))
	{
		Function_238(&iParam0);
	}
	else
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var17);
		UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, 4);
	}
	return;
}

void Function_238(int iParam0) //Position: 0x10757 / 67415
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nCCID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nCCID");
	}
	strcpy(&cVar1, "SC_community", 32);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "n_complete") };
	UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, 8);
	UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var9);
	return;
}

struct<32> Function_239(char* cParam0) //Position: 0x107D4 / 67540
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_240(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x107F6 / 67574
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	int iVar33;
	
	strcpy(&cVar1, "SC_AA", 32);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "n_bestTime") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "_compareTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_241((*&Global_132987[iParam1125] + 212)[iParam211]) };
	UI_SET_STRING(&Var17, &Var25);
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_241((*&Global_132987[iParam1125] + 212)[iParam311]) };
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

struct<32> Function_241(var uParam0) //Position: 0x10949 / 67913
{
	char* cVar0[32];
	int iVar8;
	int iVar9;
	bool bVar10;
	struct<13> Var11;
	
	Function_242(uParam0);
	Var11 = { StackVal, Function_242(uParam0) };
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

struct<8> Function_242(int iParam0) //Position: 0x109C9 / 68041
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

void Function_243(int iParam0) //Position: 0x10A38 / 68152
{
	int iVar0;
	struct<8> Var1;
	char* cVar9[32];
	bool bVar17;
	
	iVar0 = Function_249(&iParam0);
	if (iVar0 < 4294967295 && iVar0 > 20)
	{
		if (!Global_132987[iVar0125].f_120)
		{
			strcpy(&cVar9, "SC_AA", 32);
			cVar9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar9, "_SP") };
			if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
			{
				bVar17 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
			}
			cVar9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar9, "_") };
			cVar9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar9, I2STR(bVar17)) };
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar9, "_times") };
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
			Function_248(&iParam0, (*&Global_132987[iVar0125] + 212)[411], (*&Global_132987[iVar0125] + 212)[311], (*&Global_132987[iVar0125] + 212)[211]);
			UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, Function_247(&iParam0));
			if (!Function_246(&iParam0) || !NET_MAILBOX_IS_SIGNED_INTO_SC())
			{
				UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, 8);
			}
			Function_244(&iParam0);
		}
	}
	return;
}

void Function_244(int iParam0) //Position: 0x10BA9 / 68521
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	iVar2 = Function_249(&iParam0);
	if (iVar2 >= 4294967295)
	{
		if (!Function_245())
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_42(464) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000001:
					if (Function_42(459) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000002:
					if (Function_42(463) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000003:
					if (Function_42(462) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000004:
					if (Function_42(466) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000005:
					if (Function_42(460) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000006:
					if (Function_42(465) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000007:
					if (Function_42(461) < 0.0f)
					{
						if (!Global_132987[iVar2125].f_132)
						{
							Global_132987[iVar2125].f_132 = 1;
							bVar1 = true;
						}
					}
					break;
				
				case 0x00000008:
					if (Function_188(Global_46914[0]))
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

bool Function_245() //Position: 0x10DDC / 69084
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
			iVar3 = Function_249(&iVar2);
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

bool Function_246(int iParam0) //Position: 0x10E2C / 69164
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
			return Function_42(464) < 0.0f;
			break;
		
		case 0x00000001:
			return Function_42(459) < 0.0f;
			break;
		
		case 0x00000002:
			return Function_42(463) < 0.0f;
			break;
		
		case 0x00000003:
			return Function_42(462) < 0.0f;
			break;
		
		case 0x00000004:
			return Function_42(466) < 0.0f;
			break;
		
		case 0x00000005:
			return Function_42(460) < 0.0f;
			break;
		
		case 0x00000006:
			return Function_42(465) < 0.0f;
			break;
		
		case 0x00000007:
			return Function_42(461) < 0.0f;
			break;
		
		case 0x00000008:
			return Function_188(Global_46914[0]);
			break;
		
		case 0x00000009:
			return StackVal < 3;
			break;
	}
	return iVar1;
}

int Function_247(int iParam0) //Position: 0x10F17 / 69399
{
	int iVar0;
	
	iVar0 = Function_249(&iParam0);
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

void Function_248(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x10F7E / 69502
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
	
	iVar81 = Function_249(&iParam0);
	strcpy(&cVar1, "SC_AA", 32);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, I2STR(bVar0)) };
	Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "_locked") };
	Var49 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_239(&cVar1, "_NotSignedDes", "") };
	Var57 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_239(&cVar1, "_LockedNotInSP", "") };
	Var65 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "_des") };
	Var73 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "_unlock") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "n_currTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "n_lastTime") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(&cVar1, "n_bestTime") };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_241(uParam1) };
	UI_SET_STRING(&Var17, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_241(uParam2) };
	UI_SET_STRING(&Var25, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_241(uParam3) };
	UI_SET_STRING(&Var33, &Var9);
	if (!NET_MAILBOX_IS_SIGNED_INTO_SC())
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var49);
	}
	else if (Function_246(&iParam0))
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

var Function_249(int iParam0) //Position: 0x1111F / 69919
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

void Function_250(int iParam0) //Position: 0x11152 / 69970
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	char* cVar51[8];
	bool bVar53;
	float fVar54;
	bool bVar55;
	int iVar56;
	
	if (Function_190(iParam0, 1))
	{
		bVar55 = Function_135(iParam0);
		bVar53 = Global_21684[StackVal7].f_32;
		bVar1 = FLOOR((bVar53 / 60.0f));
		bVar2 = (FLOOR(bVar53) - bVar1 * 60);
		switch (bVar55)
		{
			case 0x00000000:
				bVar0 = Global_21684[StackVal7].f_20;
			
			case 0x00000001:
				fVar54 = Global_21684[StackVal7].f_28;
				break;
			
			case 0x00000002:
				fVar54 = Global_21684[StackVal7].f_28;
				bVar0 = Global_21684[StackVal7].f_20;
				break;
		}
		iVar56 = Function_134(iParam0, bVar55, bVar53, fVar54, bVar0);
		strcpy(&cVar51, "rank_", 8);
		straddi(&cVar51, iVar56, 8);
		if (bVar2 <= 10)
		{
			UI_SET_STRING_FORMAT("Dmission_time", UI_GET_STRING("mission_time_lowsec"), UI_GET_STRING(Function_251(bVar1)), UI_GET_STRING(Function_251(bVar2)), 0);
		}
		else
		{
			UI_SET_STRING_FORMAT("Dmission_time", UI_GET_STRING("mission_time"), UI_GET_STRING(Function_251(bVar1)), UI_GET_STRING(Function_251(bVar2)), 0);
		}
		SET_JOURNAL_INFO_LABEL(0, "Dmission_time");
		switch (bVar55)
		{
			case 0x00000000:
				UI_SET_STRING_FORMAT("Dmission_headshots", UI_GET_STRING("mission_headshots"), UI_GET_STRING(Function_251(bVar0)), 0, 0);
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
				UI_SET_STRING_FORMAT("Dmission_headshots", UI_GET_STRING("mission_herd"), UI_GET_STRING(Function_251(bVar0)), 0, 0);
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

var Function_251(bool bParam0) //Position: 0x11581 / 71041
{
	bool bVar0;
	
	bVar0 = Function_252();
	UI_SET_STRING(&bVar0, I2STR(bParam0));
	return &bVar0;
}

var Function_252() //Position: 0x1159B / 71067
{
	Global_10990 = (Global_10990 + 1 % 10);
	switch (Global_10990)
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

bool Function_253(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11657 / 71255
{
	if (Global_42825 == bParam0)
	{
		return 1;
	}
	if (Global_42826 == bParam0)
	{
		return 1;
	}
	if (!Function_84(bParam0))
	{
		LOG_ERROR("Attempting to swap to an invalid outfit");
		return 0;
	}
	if (!Function_85(bParam0) && !&bParam2)
	{
		return 0;
	}
	Global_42826 = bParam0;
	if (&bParam1)
	{
		Function_78(bParam0, 8192);
	}
	DECOR_SET_BOOL(&Global_54076, "playerChangeOutfits", true);
	return 1;
}

struct<16> Function_254(int iParam0) //Position: 0x116EC / 71404
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_100(iParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, (&Global_6667[iParam028] + 16);
}

var Function_255(var uParam0, var uParam1, struct<2> Param2, bool bParam4, int iParam5) //Position: 0x1171D / 71453
{
	bool bVar0;
	
	bVar0 = "";
	switch (iParam5)
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
	PRINTVECTOR(Param2);
	PRINTSTRING(" and heading ");
	PRINTFLOAT(bParam4);
	PRINTSTRING(" and with arc ");
	PRINTSTRING(&bVar0);
	PRINTNL();
	return GET_GAME_CAMERA_RESET_POSITION(&uParam0, &uParam1, Param2, bParam4, &bVar0);
}

bool Function_256(float fParam0, float fParam1, int iParam2) //Position: 0x1184F / 71759
{
	if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&fParam0))
	{
		LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_GET_CAM_POS_HEADING: missing cutscene!");
		fParam1 = Vector(0.0f, 0.0f, 0.0f);
		iParam2 = Vector(0.0f, 0.0f, 0.0f);
		return 1;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
	{
		CUTSCENE_MANAGER_LOAD_CUTFILE(&fParam0, 0, 0, 0, 0, 0);
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &fParam0))
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		return 0;
	}
	if (!CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
	{
		return 0;
	}
	if (!CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&fParam1, &iParam2))
	{
		LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_GET_CAM_POS_HEADING: CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT failed!");
		fParam1 = Vector(0.0f, 0.0f, 0.0f);
		iParam2 = Vector(0.0f, 0.0f, 0.0f);
	}
	return 1;
}

var Function_257(int iParam0) //Position: 0x11976 / 72054
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
	return &iVar0;
}

void Function_258(int iParam0) //Position: 0x12329 / 74537
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

int Function_259() //Position: 0x123A3 / 74659
{
	if (Function_260(&Global_42862))
	{
		return 1;
	}
	if (Function_260(&Global_42834))
	{
		return 1;
	}
	if (Function_260(&Global_42890))
	{
		return 1;
	}
	return 0;
}

bool Function_260(struct<105> Param0) //Position: 0x123D1 / 74705
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
				Function_265(StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 16)), *(&Param0 + 32), 0x41200000, 0, 0x3f800000, 1);
				vVar3 = { StackVal, StackVal, Function_265(StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 16)), *(&Param0 + 32), 0x41200000, 0, 0x3f800000, 1) };
				Function_264(&vVar3);
				*(&Param0 + 56) = Function_264(&vVar3);
				Function_263(Param0.f_68, &uVar0, &uVar1, &uVar2);
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
					if (StackVal || Function_53(StackVal, (StackVal || Function_53(StackVal, Function_53(StackVal, StackVal, *(&Param0 + 32), Global_54078) > 15.0f, *(&Param0 + 56), Global_54078) > 15.0f), *(&Param0 + 44), Global_54078) > 15.0f)
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
				Function_262();
			}
			else if (Param0 == 2)
			{
				Function_261();
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

void Function_261() //Position: 0x126E6 / 75494
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

void Function_262() //Position: 0x12711 / 75537
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

void Function_263(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1273C / 75580
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

struct<8> Function_264(vector3 vParam0) //Position: 0x12841 / 75841
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

vector3 Function_265(var uParam0, struct<2> Param1, float fParam3, float fParam4, float fParam5, int iParam6) //Position: 0x12863 / 75875
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
	Function_264(&Var1);
	bVar11 = VDIST(Function_264(&Var1), Param1);
	vVar7 = { StackVal, StackVal, Var1 };
	while (Var1.f_12 >= &fParam5 && !bVar0)
	{
		Var4 = { StackVal, StackVal, Var1 };
		UNK_0x19D652F9(&uParam0, FABS(&fParam3), &Var4, &Var1);
		Function_264(&Var1);
		bVar12 = VDIST(Function_264(&Var1), Param1);
		if (bVar12 > bVar11)
		{
			bVar11 = bVar12;
			vVar7 = { StackVal, StackVal, Var1 };
		}
		if (Function_268(&Var1))
		{
			bVar0 = true;
		}
	}
	if (&iParam6 < 1 && &fParam3 < 1.0f)
	{
		UNK_0x19D652F9(&uParam0, (&fParam3 / 2.0f), &vVar7, &Var1);
		UNK_0x19D652F9(&uParam0, (-1.0f * (&fParam3 / 2.0f)), &vVar7, &Var4);
		Function_265(StackVal, &uParam0, Param1, (&fParam3 / 10.0f), Function_267(Var4.f_12, Var1.f_12), Function_266(Var4.f_12, Var1.f_12), (&iParam6 - 1));
		return StackVal, StackVal, Function_265(StackVal, &uParam0, Param1, (&fParam3 / 10.0f), Function_267(Var4.f_12, Var1.f_12), Function_266(Var4.f_12, Var1.f_12), (&iParam6 - 1));
	}
	return StackVal, StackVal, vVar7;
}

var Function_266(int iParam0, int iParam1) //Position: 0x12965 / 76133
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_267(int iParam0, int iParam1) //Position: 0x12978 / 76152
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_268(struct<13> Param0) //Position: 0x1298B / 76171
{
	if (Param0.f_12 > 0,001f || Param0.f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_269() //Position: 0x129AE / 76206
{
	struct<2> Var0;
	
	if (GET_USER_DEFINED_WAYPOINT(&Var0))
	{
		Var0.f_4 = 25.0f;
		if (!Function_145(StackVal, StackVal, Var0, *(&Global_42862 + 44)))
		{
			Function_270(StackVal, Var0);
		}
	}
	else if (StackVal != 2 && Global_42862 != 1)
	{
		if (IS_USER_DEFINED_WAYPOINT_CLEARED())
		{
			Function_262();
		}
	}
	return;
}

void Function_270(struct<2> Param0) //Position: 0x129FA / 76282
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

void Function_271() //Position: 0x12A85 / 76421
{
	int iVar0;
	
	iVar0 = GET_TARGETED_JOURNAL_ENTRY();
	if (iVar0 != iLocal_72)
	{
		Function_295(iLocal_72);
		Function_272(iVar0);
		iLocal_72 = iVar0;
	}
	return;
}

void Function_272(int iParam0) //Position: 0x12AA5 / 76453
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
	Function_295(GET_TARGETED_JOURNAL_ENTRY());
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
				if (Function_81(iVar6) && !Function_85(iVar6))
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
				Function_294();
			}
			else if (iVar5 != Global_42827)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
				{
					Function_293(iVar5);
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
					if (Function_286(&(Global_99725[iVar143]), iVar3))
					{
						Function_50(&Global_99725[iVar143] + 228, 64);
						Function_282(&(Global_99725[iVar143]), iVar3);
						if (IS_OBJECT_VALID(&Global_99725[iVar143] + 288))
						{
							DESTROY_OBJECT(&Global_99725[iVar143] + 288);
							Function_273(&(Global_99725[iVar143]), 7);
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

void Function_273(struct<229> Param0) //Position: 0x12C5F / 76895
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
	*(&Param0 + 288) = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_196(), *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0), 0, &Global_54076, iParam1, Param0.f_176, 0, 1, 1);
	Function_274(&Param0);
	iVar1 = GATEWAY_GET_MARKER(&Param0 + 288);
	if (IS_OBJECT_VALID(&iVar1))
	{
		DESTROY_OBJECT(&iVar1);
	}
	return;
}

void Function_274(struct<217> Param0) //Position: 0x12D2F / 77103
{
	float fVar0;
	var uVar1;
	
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		return;
	}
	*(&Param0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_196(), 2,802597E-45f, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 2.0f, 2.0f));
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
	uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 336, Function_196(), 2,802597E-45f, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0));
	DECOR_SET_INT(&uVar1, "category", 512);
	Function_275(&uVar1, 0);
	return;
}

int Function_275(var uParam0, int iParam1) //Position: 0x12DED / 77293
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
	Function_278(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_276(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_276(int iParam0, var uParam1, struct<2> Param2) //Position: 0x12F57 / 77655
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_277("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

struct<32> Function_277(char* cParam0) //Position: 0x12FFF / 77823
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_239("0", &cVar8, ""), 4);
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

int Function_278(int iParam0) //Position: 0x1306B / 77931
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
						Function_281(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_279(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_281(iVar0);
						}
					}
					else if (Function_279(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_281(iVar0);
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
			Function_281(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_279(var uParam0, struct<2> Param1) //Position: 0x131D9 / 78297
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_280(&uParam0);
		Var0 = Function_280(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_280(int iParam0) //Position: 0x13250 / 78416
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

void Function_281(int iParam0) //Position: 0x132BC / 78524
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

void Function_282(struct<153> Param0) //Position: 0x13324 / 78628
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	struct<9> Var4;
	
	Var0 = *(&Param0 + 196);
	Var0.f_4 = (StackVal + 0,5f);
	fVar2 = 1.0f;
	fVar3 = 50.0f;
	if (((StackVal && Function_284(Function_285(iParam1), Var0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_283(iParam1)) || Global_116927[iParam16].f_20 != 1)
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

int Function_283(int iParam0) //Position: 0x13493 / 78995
{
	if ((Global_116927[iParam06] != 3 || Global_116927[iParam06] != 4) || Global_116927[iParam06] != 5)
	{
		return 1;
	}
	return 0;
}

var Function_284(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x134BF / 79039
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_285(int iParam0) //Position: 0x134E0 / 79072
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_286(struct<249> Param0) //Position: 0x134F5 / 79093
{
	if (Function_10(Global_99725[iParam143].f_228, 64))
	{
		return 1;
	}
	if (Function_285(iParam1))
	{
		Function_50(&Global_99725[iParam143] + 228, 64);
		return 1;
	}
	if ((Function_292(iParam1) || Function_59(iParam1)) || Function_291(iParam1))
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
		if (Function_186(&(Global_43791[Param0.f_216]), 256))
		{
			return 0;
		}
	}
	if (Function_290(iParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(&Param0 + 312))
	{
		if (!((((Global_99146 || Global_6627) || Global_6610) || Param0.f_236) || GET_ACTOR_INVULNERABILITY(&Param0 + 312)))
		{
			if (!Function_289(&Param0))
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
	if (!Function_287(&Param0, iParam1))
	{
		return 0;
	}
	Function_50(&Global_99725[iParam143] + 228, 64);
	return 1;
}

bool Function_287(struct<265> Param0) //Position: 0x13625 / 79397
{
	int iVar0;
	
	if (!Param0.f_260 != 0)
	{
		if (Function_90(&Param0 + 260, 4))
		{
			if (!Function_288(iParam1))
			{
				return 0;
			}
		}
		if (Function_90(&Param0 + 260, 1))
		{
			if (!Function_59(Param0.f_256))
			{
				return 0;
			}
		}
		if (Function_90(&Param0 + 260, 2) && Global_6606)
		{
			iVar0 = Function_182(Param0.f_264);
			if (Function_180(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_90(&Param0 + 260, 8) && Global_6606)
		{
			if (Function_180(Param0.f_252))
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
				if (!Function_90(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_90(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_90(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_90(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_90(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_90(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_288(int iParam0) //Position: 0x13786 / 79750
{
	return Global_116927[iParam06].f_16;
}

bool Function_289(struct<237> Param0) //Position: 0x13796 / 79766
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

bool Function_290(int iParam0) //Position: 0x13865 / 79973
{
	if (!Function_97(1048576) || Global_6624)
	{
		return 1;
	}
	if (!Function_10(Global_99725[iParam043].f_228, 32768))
	{
		if ((Global_6646 || Global_6648) || Global_6647)
		{
			if (!Function_96(Global_119935, 0x8000000))
			{
				Function_65(&Global_54076, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool Function_291(int iParam0) //Position: 0x138C0 / 80064
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

int Function_292(int iParam0) //Position: 0x138D5 / 80085
{
	if (Global_116927[iParam06] == 0)
	{
		return 1;
	}
	return 0;
}

int Function_293(int iParam0) //Position: 0x138EA / 80106
{
	if (Global_42827 == iParam0)
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
	Global_42827 = iParam0;
	Global_42827.f_16 = 1;
	return 1;
}

void Function_294() //Position: 0x13953 / 80211
{
	Global_42827 = 4294967295;
	if (IS_BLIP_VALID(&Global_42827 + 8))
	{
		REMOVE_BLIP(&Global_42827 + 8);
	}
	Global_42827.f_16 = 1;
	return;
}

void Function_295(int iParam0) //Position: 0x13978 / 80248
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
			Function_294();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

void Function_296() //Position: 0x139B2 / 80306
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
				Function_243(&iVar2);
				Function_233(&iVar2, 0);
			}
			iVar1++;
		}
	}
	return;
}

void Function_297() //Position: 0x13A0A / 80394
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

void Function_298() //Position: 0x13A92 / 80530
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
			Function_299();
		}
		else
		{
			Global_140632 = 0;
		}
	}
	return;
}

void Function_299() //Position: 0x13ADD / 80605
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_302();
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
					if (Function_301(iVar1, iVar0))
					{
						Global_132987[iVar0125].f_128 = 1;
					}
				}
				else if (Function_300(iVar1, iVar0))
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

bool Function_300(int iParam0, int iParam1) //Position: 0x13B57 / 80727
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

bool Function_301(int iParam0, int iParam1) //Position: 0x13F19 / 81689
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
						Function_50(&(Global_140678[iParam1]), 2);
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

void Function_302() //Position: 0x140E9 / 82153
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

void Function_303() //Position: 0x1419D / 82333
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

void Function_304() //Position: 0x142A3 / 82595
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && Global_44085[iVar09].f_48 == 4294967295 == 1) == 2) == 0)
		{
			if (Function_186(&(Global_43791[iVar0]), 4096) | 0)
			{
				SET_REGION_VISITED(Global_44085[iVar09].f_48, 1);
			}
			else
			{
				SET_REGION_VISITED(Global_44085[iVar09].f_48, 0);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= Global_15863)
	{
		if (Global_6623)
		{
			if (IS_BLIP_VALID(&(Global_16865[iVar1])))
			{
				SET_BLIP_VISIBLE(&(Global_16865[iVar1]), false);
			}
		}
		else if (IS_BLIP_VALID(&(Global_16865[iVar1])))
		{
			SET_BLIP_VISIBLE(&(Global_16865[iVar1]), true);
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
					if ((Global_15863[iVar12].f_12 && Global_99472) >= 0)
					{
						SET_BLIP_SCALE(&(Global_16865[iVar1]), 1.0f);
						SET_BLIP_COLOR(&(Global_16865[iVar1]), 1.0f, 1.0f, 1.0f, 1.0f);
					}
					else
					{
						SET_BLIP_SCALE(&(Global_16865[iVar1]), 0,85f);
						SET_BLIP_COLOR(&(Global_16865[iVar1]), 1.0f, 1.0f, 1.0f, 0,5f);
					}
					break;
				
				case 0x00000010:
				case 0x00000011:
				case 0x00000012:
					break;
				
				case 0x00000013:
					break;
				
				case 0x00000014:
					if (Global_43789 == Global_15863[iVar12])
					{
						if (SQUAD_IS_VALID(&Global_43660 + 8))
						{
							SET_BLIP_SCALE(&(Global_16865[iVar1]), 1.0f);
							SET_BLIP_COLOR(&(Global_16865[iVar1]), 1.0f, 1.0f, 1.0f, 1.0f);
						}
						else
						{
							SET_BLIP_SCALE(&(Global_16865[iVar1]), 0,85f);
							SET_BLIP_COLOR(&(Global_16865[iVar1]), 1.0f, 1.0f, 1.0f, 0,5f);
						}
					}
					else
					{
						SET_BLIP_SCALE(&(Global_16865[iVar1]), 1.0f);
						SET_BLIP_COLOR(&(Global_16865[iVar1]), 1.0f, 1.0f, 1.0f, 1.0f);
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

int Function_305(int iParam0) //Position: 0x144D5 / 83157
{
	if (!Function_215(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

void Function_306() //Position: 0x144ED / 83181
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
				Function_243(&uVar2);
				Function_233(&uVar2, 0);
			}
			iVar1++;
		}
	}
	return;
}

void Function_307() //Position: 0x14531 / 83249
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[32];
	int iVar17;
	bool bVar18;
	
	if (Function_81(1) && !Function_85(1))
	{
		Function_314(1, 2);
		Function_78(1, 8);
	}
	if (Function_81(15) && !Function_85(15))
	{
		Function_314(15, 2);
	}
	if (Function_81(13) && !Function_85(13))
	{
		Function_314(13, 2);
	}
	if (Function_81(14) && !Function_85(14))
	{
		Function_314(14, 2);
	}
	if (!Function_190(57, 0))
	{
		if (Function_85(10))
		{
			Function_314(10, 4);
		}
		if (Function_85(9))
		{
			Function_314(9, 4);
		}
		if (Function_85(12))
		{
			Function_314(12, 4);
		}
	}
	if (!Function_85(3))
	{
		if (HAS_ITEM(Function_92(10), &Global_54076))
		{
			Function_156(3, 1, 0, 0, 0);
			DELETE_ITEM(Function_92(10), &Global_54076, 0);
			Global_93661[105].f_32 = 0;
		}
	}
	if (IS_PS3() || Function_189())
	{
		if (!Function_85(4))
		{
			if (HAS_ITEM(Function_92(55), &Global_54076))
			{
				Function_156(4, 32, 0, 0, 0);
				DELETE_ITEM(Function_92(55), &Global_54076, 0);
				Global_93661[555].f_32 = 0;
			}
		}
	}
	if (!Function_85(5))
	{
		if (HAS_ITEM(Function_92(54), &Global_54076))
		{
			Function_156(5, 32, 0, 0, 0);
			DELETE_ITEM(Function_92(54), &Global_54076, 0);
			Global_93661[545].f_32 = 0;
		}
	}
	if (!Function_85(6))
	{
		if (HAS_ITEM(Function_92(58), &Global_54076))
		{
			Function_156(6, 32, 0, 0, 0);
			DELETE_ITEM(Function_92(58), &Global_54076, 0);
			Global_93661[585].f_32 = 0;
		}
	}
	if (!Function_85(7))
	{
		if (HAS_ITEM(Function_92(53), &Global_54076))
		{
			Function_156(7, 32, 0, 0, 0);
			DELETE_ITEM(Function_92(53), &Global_54076, 0);
			Global_93661[535].f_32 = 0;
		}
	}
	if (!Function_85(8))
	{
		if (HAS_ITEM(Function_92(57), &Global_54076))
		{
			Function_156(8, 32, 0, 0, 0);
			DELETE_ITEM(Function_92(57), &Global_54076, 0);
			Global_93661[575].f_32 = 0;
		}
	}
	if (!Function_85(9))
	{
		if (HAS_ITEM(Function_92(56), &Global_54076))
		{
			Function_156(9, 32, 0, 0, 0);
			DELETE_ITEM(Function_92(56), &Global_54076, 0);
			Global_93661[565].f_32 = 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_42265)
	{
		if (Global_42265[iVar09] != 4294967295)
		{
			Function_313(iVar0);
			if (Function_309(iVar0))
			{
				if (Global_42265[iVar09].f_64 != 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_42265[iVar09].f_64, 0);
				}
			}
			else
			{
				if (Global_42265[iVar09].f_64 != 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_42265[iVar09].f_64, 1);
				}
				if (Global_42827 == iVar0)
				{
					Function_294();
				}
			}
		}
		iVar0++;
	}
	bVar18 = GET_ACTOR_ENUM(&Global_54076);
	iVar0 = 0;
	while (iVar0 <= Global_42265)
	{
		if (Function_84(iVar0))
		{
			if (Global_42265[iVar09] != 4294967295)
			{
				strcpy(&cVar9, "out_", 32);
				stradd(&cVar9, &Global_42265[iVar09] + 32, 32);
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
				else if (Function_308(iVar0))
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

bool Function_308(int iParam0) //Position: 0x148F2 / 84210
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

bool Function_309(int iParam0) //Position: 0x14941 / 84289
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
							if (Function_190(6, 0) || Function_190(12, 0))
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
							if (Function_59(13))
							{
								if (Function_310(&(Global_99725[1443]), 14, 1, 1) && !Function_291(14))
								{
									return 1;
								}
								return 0;
							}
							if (Function_59(12))
							{
								if ((Function_310(&(Global_99725[1343]), 13, 1, 1) && !Function_291(13)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1343] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_59(11))
							{
								if ((Function_310(&(Global_99725[1243]), 12, 1, 1) && !Function_291(12)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1243] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_59(10))
							{
								if ((Function_310(&(Global_99725[1143]), 11, 1, 1) && !Function_291(11)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1143] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_190(5, 0))
							{
								if (Function_310(&(Global_99725[1043]), 10, 1, 1) && !Function_291(10))
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
							if (Function_59(26))
							{
								if (Function_310(&(Global_99725[2743]), 27, 1, 1) && !Function_291(27))
								{
									return 1;
								}
								return 0;
							}
							if (Function_59(25))
							{
								if (Function_310(&(Global_99725[2643]), 26, 1, 1) && !Function_291(26))
								{
									return 1;
								}
								return 0;
							}
							if (Function_59(24))
							{
								if (Function_310(&(Global_99725[2543]), 25, 1, 1) && !Function_291(25))
								{
									return 1;
								}
								return 0;
							}
							if (Function_59(23))
							{
								if (Function_310(&(Global_99725[2443]), 24, 1, 1) && !Function_291(24))
								{
									return 1;
								}
								return 0;
							}
							if (Function_190(26, 0))
							{
								if (Function_310(&(Global_99725[2343]), 23, 1, 1) && !Function_291(23))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000008:
							if (Function_59(55))
							{
								if ((Function_310(&(Global_99725[5643]), 56, 1, 1) && !Function_291(56)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[5643] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_59(54))
							{
								if ((Function_310(&(Global_99725[5543]), 55, 1, 1) && !Function_291(55)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[5543] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_59(27))
							{
								if (Function_310(&(Global_99725[5443]), 54, 1, 1) && !Function_291(54))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_190(41, 0))
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
							if (Function_59(52))
							{
								if ((Function_310(&(Global_99725[5343]), 53, 1, 1) && !Function_291(53)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[5343] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_59(51))
							{
								if (Function_310(&(Global_99725[5243]), 52, 1, 1) && !Function_291(52))
								{
									return 1;
								}
								return 0;
							}
							if (Function_59(50))
							{
								if (Function_310(&(Global_99725[5143]), 51, 1, 1) && !Function_291(51))
								{
									return 1;
								}
								return 0;
							}
							if (Function_59(49))
							{
								if (Function_310(&(Global_99725[5043]), 50, 1, 1) && !Function_291(50))
								{
									return 1;
								}
								return 0;
							}
							if (Function_190(17, 0))
							{
								if (Function_310(&(Global_99725[4943]), 49, 1, 1) && !Function_291(49))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_190(57, 0))
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
							if (Function_59(19))
							{
								if (Function_310(&(Global_99725[2043]), 20, 1, 1) && !Function_291(20))
								{
									return 1;
								}
								return 0;
							}
							if (Function_59(18))
							{
								if ((Function_310(&(Global_99725[1943]), 19, 1, 1) && !Function_291(19)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1943] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_59(17))
							{
								if (Function_310(&(Global_99725[1843]), 18, 1, 1) && !Function_291(18))
								{
									return 1;
								}
								return 0;
							}
							if (Function_59(16))
							{
								if ((Function_310(&(Global_99725[1743]), 17, 1, 1) && !Function_291(17)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1743] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_59(15))
							{
								if (Function_310(&(Global_99725[1643]), 16, 1, 1) && !Function_291(16))
								{
									return 1;
								}
								return 0;
							}
							if (Function_190(8, 0))
							{
								if (Function_310(&(Global_99725[1543]), 15, 1, 1) && !Function_291(15))
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

int Function_310(struct<265> Param0) //Position: 0x14F3B / 85819
{
	if (!Param0.f_260 != 0)
	{
		if (Function_90(&Param0 + 260, 4))
		{
			if (!Function_288(iParam1))
			{
				return 0;
			}
		}
		if (Function_90(&Param0 + 260, 1))
		{
			if (&Global_99725[Param0.f_25643] + 36 != &Global_99725[iParam143] + 36 || iParam3)
			{
				if (!Function_59(Param0.f_256))
				{
					return 0;
				}
			}
		}
		if (Function_90(&Param0 + 260, 2) && Global_6606)
		{
			if (!Function_190(Param0.f_264, 0))
			{
				return 0;
			}
		}
		if (Function_90(&Param0 + 260, 8) && Global_6606)
		{
			if (!Function_312(Param0.f_252, 0))
			{
				return 0;
			}
		}
		if (!&bParam2)
		{
			return 1;
		}
		return Function_311(&Param0);
	}
	return 1;
}

int Function_311(struct<261> Param0) //Position: 0x15007 / 86023
{
	if (!Param0.f_260 != 0)
	{
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_90(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_90(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_90(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_90(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_90(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_90(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_312(int iParam0, bool bParam1) //Position: 0x150C2 / 86210
{
	if (!Function_180(iParam0))
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

void Function_313(int iParam0) //Position: 0x150F9 / 86265
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
	iVar0 = Function_73(iParam0);
	if (iVar0 >= Global_42265[iParam09].f_24)
	{
		Global_42265[iParam09].f_24 = iVar0;
		if (Global_42265[iParam09].f_24 == Global_42265[iParam09].f_28)
		{
			Function_191(iParam0, 0, 1);
		}
	}
	return;
}

void Function_314(int iParam0, int iParam1) //Position: 0x1515C / 86364
{
	int iVar0;
	
	if (!Function_84(iParam0))
	{
		LOG_ERROR("Attempting to unset status on invalid outfit");
		return;
	}
	iVar0 = (StackVal && iParam1);
	Global_42265[iParam09].f_8 = (StackVal - iVar0);
	return;
}

void Function_315(var[] uParam0, struct<16>[] Param1, bool bParam2) //Position: 0x151C1 / 86465
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
	
	Function_30();
	cVar0 = { StackVal, Function_30() };
	Function_207(179, &cVar0, 0, 1);
	Function_29();
	cVar0 = { StackVal, Function_29() };
	Function_207(180, &cVar0, 0, 1);
	Function_28();
	cVar0 = { StackVal, Function_28() };
	Function_207(181, &cVar0, 0, 1);
	Function_27(Function_320(64));
	cVar0 = { StackVal, Function_27(Function_320(64)) };
	Function_207(182, &cVar0, 0, 1);
	strcpy(&cVar0, Function_319(1), 8);
	Function_207(401, &cVar0, 0, 1);
	strcpy(&cVar0, Function_318(1), 8);
	Function_207(404, &cVar0, 0, 1);
	Function_31();
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
				strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(Function_317(bVar2), 3, 1), 32);
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
				strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(Function_317(bVar2), 3, 1), 32);
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
				bVar12 = Function_317(bVar2);
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
					strcpy(&cVar4, FLOAT_TO_STRING_FORMATED(Function_317(bVar2), 3, 1), 32);
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
					bVar12 = Function_317(bVar2);
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
	Function_316();
	return;
}

void Function_316() //Position: 0x1614D / 90445
{
	if (!Function_320(512))
	{
		HIDE_STAT(&(Global_55480[59816]), 1);
		HIDE_STAT(&(Global_55480[34916]), 1);
	}
	if (!Function_320(64))
	{
		HIDE_STAT(&(Global_55480[(50 + 31)16]), 1);
		HIDE_STAT(&(Global_55480[(90 + 31)16]), 1);
		HIDE_STAT(&(Global_55480[(183 + 31)16]), 1);
		HIDE_STAT(&(Global_55480[(140 + 31)16]), 1);
	}
	return;
}

bool Function_317(int iParam0) //Position: 0x161B2 / 90546
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
	fVar1 = Function_42(iParam0);
	if (Function_41(iParam0) != 19 || Function_41(iParam0) != 17)
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

var Function_318(bool bParam0) //Position: 0x16293 / 90771
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
	if (&bParam0)
	{
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 <= 275)
		{
			Function_119(Global_21684[iVar97], &iVar0, &iVar1, &iVar2);
			if (iVar2 == 6)
			{
				if (iVar1 != 0)
				{
					if (iVar0 == Global_46914[0])
					{
						iVar4 = (StackVal + (iVar4 + Global_21684[iVar97].f_12));
					}
					else if (iVar0 == Global_46866[0])
					{
						iVar5 = (StackVal + (iVar5 + Global_21684[iVar97].f_12));
					}
					else if (iVar0 == Global_46816[0])
					{
						iVar6 = (StackVal + (iVar6 + Global_21684[iVar97].f_12));
					}
					else if (iVar0 == Global_46760[1])
					{
						iVar7 = (StackVal + (iVar7 + Global_21684[iVar97].f_12));
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
	return &iVar8;
}

var Function_319(bool bParam0) //Position: 0x163D9 / 91097
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[3];
	int iVar8;
	int iVar9;
	
	iVar3 = 0;
	iVar8 = "fav_non";
	if (&bParam0)
	{
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 <= 275)
		{
			Function_119(Global_21684[iVar97], &uVar0, &iVar1, &iVar2);
			if (iVar2 == 6)
			{
				if (iVar1 > 0 || iVar1 < 3)
				{
					LOG_ERROR("GET_FAVORITE_JOB_LABEL: minorIdent out of bounds");
				}
				else
				{
					iVar4[iVar1] = (StackVal + (iVar4[iVar1] + Global_21684[iVar97].f_12));
				}
			}
			iVar9++;
		}
		if (iVar4[1] >= 0)
		{
			iVar8 = "fjob_1";
			iVar3 = iVar4[1];
		}
		if (iVar4[2] >= iVar3)
		{
			iVar8 = "fjob_2";
			iVar3 = iVar4[2];
		}
	}
	return &iVar8;
}

bool Function_320(int iParam0) //Position: 0x164C8 / 91336
{
	return Function_321(Global_131807.f_1304, iParam0);
}

int Function_321(var uParam0, bool bParam1) //Position: 0x164DA / 91354
{
	return (uParam0 && bParam1) == 0;
}

