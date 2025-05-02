//Decompiled with MagicRDR v1.0
//Function Count : 40
//Statics Count : 89
//Natives Count : 122
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
	var uLocal_8 = 2;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
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
	var uLocal_46 = 4;
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
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = false;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar2;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_27 = 0;
	uLocal_38 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_Escort_Layout"), "TWR_Captive");
	uLocal_40 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TwinRocks_AALayout"), "PaulTheHelper");
	Function_38(&uLocal_46, "action_areas", 10, 0);
	Function_38(&uLocal_46, "custom/AA_twin_rocks_hostage", 8, 0);
	Function_38(&uLocal_46, "AA_twin_rocks_hostage", 5, 0);
	Function_38(&uLocal_46, "twin_rocks_hostage", 1, 0);
	while (!IS_EXITFLAG_SET())
	{
		if (!IS_ACTOR_VALID(&Global_54076) || !IS_ACTOR_ALIVE(&Global_54076))
		{
			iLocal_27 = 5;
		}
		bLocal_85 = 600;
		switch (iLocal_27)
		{
			case 0x00000000:
				if (Function_32(&uLocal_46))
				{
					iLocal_27 = 2;
				}
				bLocal_85 = false;
				break;
			
			case 0x00000002:
				uLocal_28 = CREATE_LAYOUT("TWR_BossLayout");
				uLocal_42 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_28, "nbossSquad"));
				uLocal_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_28, "hostageSquad"));
				Function_31(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_hostageGringo"));
				uVar0 = Function_31(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_hostageGringo"));
				uLocal_30 = LOCATE_GRINGO_OF_TYPE("twin_rocks_hostage", &uVar0, 3.0f, 1);
				uLocal_32 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_28, "BigBossMan", 492, Vector(-2421,027f, 26,165f, 2128,84f), Vector(0.0f, 132,55f, 0.0f));
				TASK_STAND_STILL(&uLocal_32, -1.0f, 0, 0);
				SQUAD_JOIN(&uLocal_32, &uLocal_42);
				Function_30(&uLocal_32, 50.0f, 2.0f, 2.0f);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uLocal_32, 1);
				uLocal_34 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_28, "Henchman01", 493, Vector(-2419,745f, 26,165f, 2127,355f), Vector(0.0f, 135,738f, 0.0f));
				TASK_STAND_STILL(&uLocal_34, -1.0f, 0, 0);
				SQUAD_JOIN(&uLocal_34, &uLocal_42);
				Function_30(&uLocal_34, 50.0f, 2.0f, 2.0f);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uLocal_34, 1);
				Function_31(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_badGuy"));
				Function_29(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_badGuy"));
				uLocal_36 = CREATE_ACTOR_IN_LAYOUT(&uLocal_28, "HostageGuy", 488, Function_31(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_badGuy")), Function_29(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_badGuy")));
				SET_ACTOR_STAY_WITHIN_VOLUME(&uLocal_36, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_badGuyStayIn"), 4, true);
				MEMORY_CONSIDER_AS(&uLocal_36, &Global_54076, false);
				MEMORY_CONSIDER_AS(&uLocal_36, &uLocal_38, false);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&uLocal_36);
				GIVE_WEAPON_TO_ACTOR(&uLocal_36, 8, 0f, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(&uLocal_36, 8, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uLocal_36, 0);
				SET_ACTOR_ONE_SHOT_DEATH(&uLocal_36, 1);
				SET_ALLOW_EXECUTE(&uLocal_36, 0);
				DECOR_SET_BOOL(&uLocal_36, "CanBeLasso", 0);
				if (IS_GRINGO_VALID(&uLocal_30))
				{
					TASK_PRIORITY_SET(&uLocal_36, true);
					TASK_USE_GRINGO(&uLocal_36, &uLocal_30, "UseCase1", 4294967295, 1);
					DECOR_SET_BOOL(&Global_54076, "TaskGirlNow", 1);
				}
				else
				{
					LOG_ERROR("GRINGO NOT FOUND FOR BAD GUY");
				}
				SQUAD_JOIN(&uLocal_36, &uLocal_44);
				ADD_BLIP_FOR_ACTOR(&uLocal_36, 322, 0, 2, 0);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&uLocal_32);
				SET_WEAPONENUM_LOCKED(false, 0);
				GIVE_WEAPON_TO_ACTOR(&uLocal_32, false, 0f, 1, 1);
				Function_28(&uLocal_42, &Global_54076, 4);
				Function_28(&uLocal_44, &Global_54076, 0);
				Function_27(&uLocal_42, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_31(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_hostageGuyShoot"));
				uLocal_86 = Function_31(FIND_OBJECT_IN_LAYOUT(&Global_46715, "f_hostageGuyShoot"));
				iLocal_27 = 3;
				Function_25(1);
				Function_24(&uLocal_36);
				uVar2 = Function_24(&uLocal_36);
				DECOR_SET_BOOL(&Global_54076, "BossScriptRunning", 1);
				bLocal_85 = false;
				break;
			
			case 0x00000003:
				if (!iLocal_84)
				{
					if (DECOR_CHECK_EXIST(&Global_54076, "ReadyForBoss"))
					{
						DECOR_REMOVE(&Global_54076, "ReadyForBoss");
						TASK_CLEAR(&uLocal_32);
						TASK_CLEAR(&uLocal_34);
						SQUAD_GOALS_CLEAR(&uLocal_42);
						SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uLocal_32, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_bossLeave"), 4, 1);
						ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uLocal_34, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_bossLeave"));
						SET_ACTOR_STAY_WITHIN_VOLUME(&uLocal_32, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_bossDefend"), 4, true);
						ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uLocal_34, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_bossDefend"));
						DECOR_SET_BOOL(&Global_54076, "GuysRunOut", 1);
						Function_23(&iLocal_72);
						Function_19(&iLocal_72);
						Function_18(&uLocal_42, &Global_54076);
						SQUAD_SET_FACTION(&uLocal_42, 19);
						SQUAD_GOAL_ADD_GENERAL_TASK(&uLocal_42, 0, 1, 4294967295);
						Function_17(&uLocal_42, -1.0f);
						iLocal_84 = 1;
					}
				}
				if (!iLocal_81)
				{
					if (Function_16(&iLocal_72))
					{
						if (Function_14(&iLocal_72) < 5.0f)
						{
							DECOR_SET_BOOL(&Global_54076, "PlayGirlAudio", 1);
							iLocal_81 = 1;
						}
					}
				}
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_42) == 0)
				{
					if (!iLocal_77)
					{
						DECOR_SET_BOOL(&Global_54076, "TW_BlipCaptive", 1);
						DECOR_SET_BOOL(&Global_54076, "TW_RemoveHelperBlip", 1);
						DECOR_SET_BOOL(&Global_54076, "TW_FatherCover", 1);
						HUD_CLEAR_OBJECTIVE();
						Function_10("TWR_ObjCutHostageFree", 0x40f00000, 1, 2, 0, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("TwinRocksJournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("TwinRocksJournalID"), "TWR_ObjCutHostageFree", 0, 0, 0);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("TwinRocksJournalID"), 0);
						DECOR_SET_BOOL(&Global_54076, "TWR_AA_Key", 1);
						iLocal_77 = 1;
					}
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "TWR_AA_Key"))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_hostageCheck")) || IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_hostageCheck1")))
					{
						if (!iLocal_76)
						{
							iLocal_76 = 1;
							if (IS_ACTOR_VALID(&uLocal_36))
							{
								DECOR_SET_BOOL(&uLocal_36, "PlayerInHouse", 1);
							}
							Function_23(&iLocal_64);
							Function_19(&iLocal_64);
							iLocal_27 = 4;
						}
					}
				}
				break;
			
			case 0x00000004:
				if (!iLocal_80)
				{
					if (Function_16(&iLocal_64))
					{
						if (Function_14(&iLocal_64) <= 4.0f)
						{
							DECOR_SET_BOOL(&Global_54076, "PlayHostageLine", 1);
							iLocal_80 = 1;
						}
					}
				}
				if (!iLocal_83)
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_TeleportJohn")))
					{
						if (IS_ACTOR_VALID(&uLocal_36))
						{
							DECOR_SET_BOOL(&uLocal_36, "Instant_Kill", 1);
							iLocal_83 = 1;
						}
					}
				}
				if (!iLocal_79)
				{
					if (IS_GRINGO_VALID(&uLocal_30))
					{
						MEMORY_CONSIDER_AS(&uLocal_36, &Global_54076, 4);
						MEMORY_CONSIDER_AS(&uLocal_36, &uLocal_38, 4);
						MEMORY_CONSIDER_AS(&uLocal_36, &uLocal_40, 4);
						Function_28(&uLocal_44, &Global_54076, 4);
						iLocal_79 = 1;
					}
				}
				if ((IS_PLAYER_TARGETTING_ACTOR(0, &uLocal_36, 1) && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && !iLocal_82)
				{
					DECOR_SET_BOOL(&uLocal_36, "PlayerTargeting", 1);
					if (!DECOR_CHECK_EXIST(&Global_54076, "PlayHostageLine"))
					{
						DECOR_SET_BOOL(&Global_54076, "PlayHostageLine", 1);
					}
					Function_23(&iLocal_68);
					Function_19(&iLocal_68);
					iLocal_82 = 1;
				}
				if (!iLocal_78)
				{
					if (!IS_ACTOR_ALIVE(&uLocal_38) && IS_ACTOR_ALIVE(&uLocal_36))
					{
						TASK_CLEAR(&uLocal_36);
						Function_9(&uLocal_44);
						MEMORY_REPORT_POSITION_AUTO(&uLocal_36, &Global_54076, 1);
						Function_5(&uLocal_44, &Global_54076, 0);
						TASK_SHOOT_ENEMIES_FROM_POSITION(&uLocal_36, &uLocal_86, -141,328f, -1.0f);
						iLocal_78 = 1;
					}
				}
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&uLocal_44) == 0)
				{
					DECOR_SET_BOOL(&Global_54076, "AllGuysDead", 1);
				}
				break;
			
			case 0x00000005:
				iLocal_27 = 6;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_85 = false;
				break;
		}
		WAIT(bLocal_85);
	}
	Function_1(&uLocal_46);
	RELEASE_LAYOUT_REF(&uLocal_28);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x8EB / 2283
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_2(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x913 / 2323
{
	if (Function_4(&(Param0[iParam12]), 4))
	{
		if (Function_4(&(Param0[iParam12]), 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP(&(Param0[iParam12]));
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET(&(Param0[iParam12]));
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR(&(Param0[iParam12]), 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO(&(Param0[iParam12]));
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT(&(Param0[iParam12]));
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iParam12]), 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY(&(Param0[iParam12]));
					break;
				
				default:
					break;
			}
			Function_3(&(Param0[iParam12]), 1);
			Function_3(&(Param0[iParam12]), 2);
			Function_3(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_3(struct<13> Param0) //Position: 0xA5E / 2654
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0xA7B / 2683
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(var uParam0, int iParam1, bool bParam2) //Position: 0xA99 / 2713
{
	Function_8(&uParam0, &iParam1, 1);
	Function_7(&uParam0, 1);
	Function_6(&uParam0, &iParam1, 4);
	Function_18(&uParam0, &iParam1);
	if (&bParam2)
	{
		Function_27(&uParam0, 322, 4294967295, 0.0f, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_6(var uParam0, var uParam1, bool bParam2) //Position: 0xAE2 / 2786
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0xB2E / 2862
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_8(var uParam0, var uParam1, bool bParam2) //Position: 0xB73 / 2931
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&uVar1, &uParam1, 1);
				}
				else
				{
					GET_POSITION(&uParam1, &uVar2);
					MEMORY_REPORT_POSITION(&uVar1, &uParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_9(bool bParam0) //Position: 0xBEB / 3051
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_10(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7) //Position: 0xC20 / 3104
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
			Var0 = { StackVal, StackVal, StackVal, Function_11(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &Var0, 0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &uVar4, &uParam5, &uParam6);
	}
}

struct<16> Function_11(int iParam0) //Position: 0xCB5 / 3253
{
	char* cVar0[16];
	
	if (!Function_12())
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

bool Function_12() //Position: 0xCF4 / 3316
{
	if (Function_13(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_13(var uParam0, int iParam1) //Position: 0xD0F / 3343
{
	return (uParam0 && iParam1) == 0;
}

float Function_14(vector3 vParam0) //Position: 0xD1C / 3356
{
	if (Function_16(&vParam0))
	{
		if (Function_15(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_15(int iParam0) //Position: 0xDE9 / 3561
{
	return Function_13(iParam0, 2);
}

bool Function_16(int iParam0) //Position: 0xDF7 / 3575
{
	return Function_13(iParam0, 1);
}

void Function_17(var uParam0, int iParam1) //Position: 0xE05 / 3589
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&uParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&uVar1, iParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_18(var uParam0, int iParam1) //Position: 0xE56 / 3670
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_IDENTIFY(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_19(int iParam0) //Position: 0xEB1 / 3761
{
	Function_20(&iParam0, 0.0f);
	return;
}

void Function_20(vector3 vParam0) //Position: 0xEBE / 3774
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_22(&vParam0, 1);
	Function_21(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0xEE3 / 3811
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0xEF9 / 3833
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_23(int iParam0) //Position: 0xF0A / 3850
{
	if (!Function_16(&iParam0))
	{
		Function_20(&iParam0, 0.0f);
	}
	return;
}

struct<8> Function_24(int iParam0) //Position: 0xF21 / 3873
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_25(bool bParam0) //Position: 0xF33 / 3891
{
	if (!Global_15852[&bParam0])
	{
		Global_15852[&bParam0] = 1;
		if (&bParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_26())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

bool Function_26() //Position: 0xF6C / 3948
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_15852[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_27(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xF91 / 3985
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, iParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, iParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			if (&iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != &iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2, &iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2);
			}
			if (GET_BLIP_ICON(&uVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_28(var uParam0, int iParam1, bool bParam2) //Position: 0x10A1 / 4257
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &iParam1, bParam2);
			MEMORY_IDENTIFY(&uVar1, &iParam1);
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_IDENTIFY(&iParam1, &uVar1);
				MEMORY_CONSIDER_AS(&iParam1, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

struct<8> Function_29(int iParam0) //Position: 0x111E / 4382
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_30(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0x1147 / 4423
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 54, 0.0f);
		}
	}
}

struct<8> Function_31(bool bParam0) //Position: 0x1198 / 4504
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

bool Function_32(struct<2>[] Param0) //Position: 0x11C1 / 4545
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_37();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_36(&(Param0[iVar02]), 8);
		}
		else if (Function_35())
		{
			iVar1 = 1;
			Function_36(&(Param0[iVar02]), 8);
		}
		Function_36(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_4(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_4(&(Param0[02]), 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iVar02])), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO(&(Param0[iVar02]));
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT(&(Param0[iVar02]));
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iVar02]), 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY(&(Param0[iVar02]));
						break;
					
					default:
						break;
				}
				Function_36(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_4(&(Param0[iVar02]), 4))
		{
			if (!Function_4(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED(&(Param0[iVar02]), 4294967295))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_36(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_36(&(Param0[iVar02]), 2);
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
	Function_33();
	return 1;
}

void Function_33() //Position: 0x1583 / 5507
{
	if (!Function_34(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_34(int iParam0) //Position: 0x15C3 / 5571
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_35() //Position: 0x15DF / 5599
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == &Global_99725[iVar043] + 296)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_36(struct<13> Param0) //Position: 0x160D / 5645
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_37() //Position: 0x1620 / 5664
{
	if (!Function_34(128))
	{
		return;
	}
	if (Global_21646.f_132 == 0)
	{
		strcpy(&Global_21646, "nStreaming", 64);
		Global_21646.f_132 = 1;
		Global_21646.f_128 = GET_CURRENT_GAME_TIME();
		Global_21646.f_136 = Global_21610.f_128;
	}
	return;
}

var Function_38(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1662 / 5730
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_39(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_36(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_39(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x16A0 / 5792
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_36(&(Param0[iVar02]), 4);
			return iVar0;
		}
		if (StackVal && &iParam1 != &Param0[iVar02] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

