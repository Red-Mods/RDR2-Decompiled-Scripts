//Decompiled with MagicRDR v1.0
//Function Count : 38
//Statics Count : 66
//Natives Count : 121
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 2;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	bool bLocal_22 = false;
	bool bLocal_23 = false;
	bool bLocal_24 = false;
	bool bLocal_25 = false;
	bool bLocal_26 = false;
	bool bLocal_27 = false;
	bool bLocal_28 = false;
	bool bLocal_29 = false;
	bool bLocal_30 = false;
	bool bLocal_31 = true;
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
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = false;
	vector3 vLocal_63 = { 0.0f, 0.0f, 0.0f };
#endregion

void main() //Position: 0x0 / 0
{
	vector3 vVar0;
	vector3 vVar3;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_21 = 0;
	bLocal_27 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TWR_Escort_Layout"), "TWR_Captive");
	bLocal_28 = FIND_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("TwinRocks_AALayout"), "PaulTheHelper");
	Function_36(&bLocal_31, "action_areas", 10, 0);
	Function_36(&bLocal_31, "custom/AA_twin_rocks_hostage", 8, 0);
	Function_36(&bLocal_31, "AA_twin_rocks_hostage", 5, 0);
	Function_36(&bLocal_31, "twin_rocks_hostage", 1, 0);
	while (!IS_EXITFLAG_SET())
	{
		if (!IS_ACTOR_VALID(Global_34573) || !IS_ACTOR_ALIVE(Global_34573))
		{
			iLocal_21 = 5;
		}
		bLocal_62 = 600;
		switch (iLocal_21)
		{
			case 0x00000000:
				if (Function_30(&bLocal_31))
				{
					iLocal_21 = 2;
				}
				bLocal_62 = false;
				break;
			
			case 0x00000002:
				bLocal_22 = CREATE_LAYOUT("TWR_BossLayout");
				bLocal_29 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_22, "nbossSquad"));
				bLocal_30 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_22, "hostageSquad"));
				Function_29(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_hostageGringo"));
				vVar0 = { StackVal, StackVal, Function_29(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_hostageGringo")) };
				bLocal_23 = LOCATE_GRINGO_OF_TYPE("twin_rocks_hostage", &vVar0, 3.0f, 1);
				bLocal_24 = CREATE_ACTOR_IN_LAYOUT(bLocal_22, "BigBossMan", 492, -2421,027f, 26,165f, 2128,84f, 0.0f, 132,55f, 0.0f);
				TASK_STAND_STILL(bLocal_24, -1.0f, 0, 0);
				SQUAD_JOIN(bLocal_24, bLocal_29);
				Function_28(bLocal_24, 50.0f, 2.0f, 2.0f);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_24, true);
				bLocal_25 = CREATE_ACTOR_IN_LAYOUT(bLocal_22, "Henchman01", 493, -2419,745f, 26,165f, 2127,355f, 0.0f, 135,738f, 0.0f);
				TASK_STAND_STILL(bLocal_25, -1.0f, 0, 0);
				SQUAD_JOIN(bLocal_25, bLocal_29);
				Function_28(bLocal_25, 50.0f, 2.0f, 2.0f);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bLocal_25, true);
				Function_29(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_badGuy"));
				Function_27(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_badGuy"));
				bLocal_26 = CREATE_ACTOR_IN_LAYOUT(bLocal_22, "HostageGuy", 488, Function_29(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_badGuy")), Function_27(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_badGuy")));
				SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_26, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_badGuyStayIn"), 4, true);
				MEMORY_CONSIDER_AS(bLocal_26, Global_34573, false);
				MEMORY_CONSIDER_AS(bLocal_26, bLocal_27, false);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_26);
				GIVE_WEAPON_TO_ACTOR(bLocal_26, 8, false, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bLocal_26, 8, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_26, 0);
				SET_ACTOR_ONE_SHOT_DEATH(bLocal_26, true);
				SET_ALLOW_EXECUTE(bLocal_26, 0);
				DECOR_SET_BOOL(bLocal_26, "CanBeLasso", false);
				if (IS_GRINGO_VALID(bLocal_23))
				{
					TASK_PRIORITY_SET(bLocal_26, true);
					TASK_USE_GRINGO(bLocal_26, bLocal_23, "UseCase1", 4294967295, 1);
					DECOR_SET_BOOL(Global_34573, "TaskGirlNow", true);
				}
				else
				{
					LOG_ERROR("GRINGO NOT FOUND FOR BAD GUY");
				}
				SQUAD_JOIN(bLocal_26, bLocal_30);
				ADD_BLIP_FOR_ACTOR(bLocal_26, 322, 0, 2, 0);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_24);
				SET_WEAPONENUM_LOCKED(false, 0);
				GIVE_WEAPON_TO_ACTOR(bLocal_24, false, false, 1, 1);
				Function_26(bLocal_29, Global_34573, 4);
				Function_26(bLocal_30, Global_34573, 0);
				Function_25(bLocal_29, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_29(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_hostageGuyShoot"));
				vLocal_63 = { StackVal, StackVal, Function_29(FIND_OBJECT_IN_LAYOUT(Global_30616, "f_hostageGuyShoot")) };
				iLocal_21 = 3;
				Function_23(1);
				Function_22(bLocal_26);
				vVar3 = { StackVal, StackVal, Function_22(bLocal_26) };
				DECOR_SET_BOOL(Global_34573, "BossScriptRunning", true);
				bLocal_62 = false;
				break;
			
			case 0x00000003:
				if (!iLocal_61)
				{
					if (DECOR_CHECK_EXIST(Global_34573, "ReadyForBoss"))
					{
						DECOR_REMOVE(Global_34573, "ReadyForBoss");
						TASK_CLEAR(bLocal_24);
						TASK_CLEAR(bLocal_25);
						SQUAD_GOALS_CLEAR(bLocal_29);
						SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_24, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_bossLeave"), 4, 1);
						ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_25, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_bossLeave"));
						SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_24, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_bossDefend"), 4, true);
						ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_25, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_bossDefend"));
						DECOR_SET_BOOL(Global_34573, "GuysRunOut", true);
						Function_21(&iLocal_50);
						Function_17(&iLocal_50);
						Function_16(bLocal_29, Global_34573);
						SQUAD_SET_FACTION(bLocal_29, 19);
						SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_29, false, 1, 4294967295);
						Function_15(bLocal_29, -1.0f);
						iLocal_61 = 1;
					}
				}
				if (!iLocal_58)
				{
					if (Function_14(&iLocal_50))
					{
						if (Function_11(&iLocal_50) < 5.0f)
						{
							DECOR_SET_BOOL(Global_34573, "PlayGirlAudio", true);
							iLocal_58 = 1;
						}
					}
				}
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_29) == 0)
				{
					if (!iLocal_54)
					{
						DECOR_SET_BOOL(Global_34573, "TW_BlipCaptive", true);
						DECOR_SET_BOOL(Global_34573, "TW_RemoveHelperBlip", true);
						DECOR_SET_BOOL(Global_34573, "TW_FatherCover", true);
						HUD_CLEAR_OBJECTIVE();
						Function_10("TWR_ObjCutHostageFree", 0x40f00000, 1, 2, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(GET_JOURNAL_ENTRY("TwinRocksJournalID"), 0);
						APPEND_JOURNAL_ENTRY_DETAIL(GET_JOURNAL_ENTRY("TwinRocksJournalID"), "TWR_ObjCutHostageFree", 0, 0, false);
						APPEND_JOURNAL_ENTRY(GET_JOURNAL_ENTRY("TwinRocksJournalID"), 0);
						DECOR_SET_BOOL(Global_34573, "TWR_AA_Key", true);
						iLocal_54 = 1;
					}
				}
				if (DECOR_CHECK_EXIST(Global_34573, "TWR_AA_Key"))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_hostageCheck")) || IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_hostageCheck1")))
					{
						if (!iLocal_53)
						{
							iLocal_53 = 1;
							if (IS_ACTOR_VALID(bLocal_26))
							{
								DECOR_SET_BOOL(bLocal_26, "PlayerInHouse", true);
							}
							Function_21(&iLocal_44);
							Function_17(&iLocal_44);
							iLocal_21 = 4;
						}
					}
				}
				break;
			
			case 0x00000004:
				if (!iLocal_57)
				{
					if (Function_14(&iLocal_44))
					{
						if (Function_11(&iLocal_44) <= 4.0f)
						{
							DECOR_SET_BOOL(Global_34573, "PlayHostageLine", true);
							iLocal_57 = 1;
						}
					}
				}
				if (!iLocal_60)
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, FIND_VOLUME_IN_LAYOUT(Global_30616, "v_TeleportJohn")))
					{
						if (IS_ACTOR_VALID(bLocal_26))
						{
							DECOR_SET_BOOL(bLocal_26, "Instant_Kill", true);
							iLocal_60 = 1;
						}
					}
				}
				if (!iLocal_56)
				{
					if (IS_GRINGO_VALID(bLocal_23))
					{
						MEMORY_CONSIDER_AS(bLocal_26, Global_34573, 4);
						MEMORY_CONSIDER_AS(bLocal_26, bLocal_27, 4);
						MEMORY_CONSIDER_AS(bLocal_26, bLocal_28, 4);
						Function_26(bLocal_30, Global_34573, 4);
						iLocal_56 = 1;
					}
				}
				if ((IS_PLAYER_TARGETTING_ACTOR(false, bLocal_26, 1) && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && !iLocal_59)
				{
					DECOR_SET_BOOL(bLocal_26, "PlayerTargeting", true);
					if (!DECOR_CHECK_EXIST(Global_34573, "PlayHostageLine"))
					{
						DECOR_SET_BOOL(Global_34573, "PlayHostageLine", true);
					}
					Function_21(&iLocal_47);
					Function_17(&iLocal_47);
					iLocal_59 = 1;
				}
				if (!iLocal_55)
				{
					if (!IS_ACTOR_ALIVE(bLocal_27) && IS_ACTOR_ALIVE(bLocal_26))
					{
						TASK_CLEAR(bLocal_26);
						Function_9(bLocal_30);
						MEMORY_REPORT_POSITION_AUTO(bLocal_26, Global_34573, true);
						Function_5(bLocal_30, Global_34573, 0);
						TASK_SHOOT_ENEMIES_FROM_POSITION(bLocal_26, &vLocal_63, -141,328f, -1.0f);
						iLocal_55 = 1;
					}
				}
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_30) == 0)
				{
					DECOR_SET_BOOL(Global_34573, "AllGuysDead", true);
				}
				break;
			
			case 0x00000005:
				iLocal_21 = 6;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_62 = false;
				break;
		}
		WAIT(bLocal_62);
	}
	Function_1(&bLocal_31);
	RELEASE_LAYOUT_REF(bLocal_22);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x86E / 2158
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_2(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_2(var uParam0, int iParam1) //Position: 0x894 / 2196
{
	if (Function_4(uParam0[iParam13], 4))
	{
		if (Function_4(uParam0[iParam13], 1))
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
			Function_3(uParam0[iParam13], 1);
			Function_3(uParam0[iParam13], 2);
			Function_3(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x9C2 / 2498
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x9DC / 2524
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9F9 / 2553
{
	Function_8(bParam0, bParam1, 1);
	Function_7(bParam0, 1);
	Function_6(bParam0, bParam1, 4);
	Function_16(bParam0, bParam1);
	if (bParam2)
	{
		Function_25(bParam0, 322, 4294967295, 0.0f, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_6(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA39 / 2617
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
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_7(bool bParam0, int iParam1) //Position: 0xA7E / 2686
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_8(bool bParam0, bool bParam1, bool bParam2) //Position: 0xABF / 2751
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, true);
				}
				else
				{
					GET_POSITION(bParam1, &uVar2);
					MEMORY_REPORT_POSITION(bVar1, bParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_9(bool bParam0) //Position: 0xB2A / 2858
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

void Function_10(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB5C / 2908
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

float Function_11(int iParam0) //Position: 0xBAF / 2991
{
	if (Function_14(iParam0))
	{
		if (Function_12(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_12(int iParam0) //Position: 0xC77 / 3191
{
	return Function_13(*iParam0, 2);
}

int Function_13(var uParam0, int iParam1) //Position: 0xC84 / 3204
{
	return (uParam0 && iParam1) == 0;
}

bool Function_14(int iParam0) //Position: 0xC91 / 3217
{
	return Function_13(*iParam0, 1);
}

void Function_15(bool bParam0, bool bParam1) //Position: 0xC9E / 3230
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_16(bool bParam0, bool bParam1) //Position: 0xCE7 / 3303
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_IDENTIFY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_17(int iParam0) //Position: 0xD39 / 3385
{
	Function_18(iParam0, 0.0f);
	return;
}

void Function_18(var uParam0, float fParam1) //Position: 0xD45 / 3397
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_20(uParam0, 1);
	Function_19(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_19(var uParam0, int iParam1) //Position: 0xD66 / 3430
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_20(var uParam0, int iParam1) //Position: 0xD79 / 3449
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_21(int iParam0) //Position: 0xD88 / 3464
{
	if (!Function_14(iParam0))
	{
		Function_18(iParam0, 0.0f);
	}
	return;
}

vector3 Function_22(bool bParam0) //Position: 0xD9D / 3485
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_23(bool bParam0) //Position: 0xDAE / 3502
{
	if (!Global_8717[bParam0])
	{
		Global_8717[bParam0] = 1;
		if (bParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_24())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

bool Function_24() //Position: 0xDE3 / 3555
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_8717[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_25(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0xE08 / 3592
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar1 = GET_BLIP_ON_ACTOR(bVar2);
			if (IS_BLIP_VALID(bVar1))
			{
				if (GET_BLIP_ICON(bVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(bVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(bVar1, fParam3);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			else
			{
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, bParam1, fParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			if (iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2, iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2);
			}
			if (GET_BLIP_ICON(bVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_26(bool bParam0, bool bParam1, bool bParam2) //Position: 0xEF2 / 3826
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
			MEMORY_IDENTIFY(bVar1, bParam1);
			if (!bParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_IDENTIFY(bParam1, bVar1);
				MEMORY_CONSIDER_AS(bParam1, bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

vector3 Function_27(bool bParam0) //Position: 0xF60 / 3936
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

void Function_28(bool bParam0, bool bParam1, float fParam2, float fParam3) //Position: 0xF87 / 3975
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, bParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

vector3 Function_29(bool bParam0) //Position: 0xFCE / 4046
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

bool Function_30(int iParam0) //Position: 0xFF5 / 4085
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_35();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_34(iParam0[iVar03], 8);
		}
		else if (Function_33())
		{
			iVar1 = 1;
			Function_34(iParam0[iVar03], 8);
		}
		Function_34(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_4(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_4(iParam0[03], 8) || iVar1));
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
				Function_34(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_4(iParam0[iVar03], 4))
		{
			if (!Function_4(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_34(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_34(iParam0[iVar03], 2);
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
							Function_34(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_34(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_34(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_34(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_34(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_34(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_34(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_34(iParam0[iVar03], 2);
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
	Function_31();
	return 1;
}

void Function_31() //Position: 0x1370 / 4976
{
	if (!Function_32(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_32(int iParam0) //Position: 0x13B0 / 5040
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_33() //Position: 0x13CC / 5068
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

void Function_34(var uParam0, int iParam1) //Position: 0x13F7 / 5111
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_35() //Position: 0x1408 / 5128
{
	if (!Function_32(128))
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

var Function_36(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x144A / 5194
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_37(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_34(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_37(var uParam0, int iParam1, int iParam2) //Position: 0x1482 / 5250
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_34(uParam0[iVar03], 4);
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

