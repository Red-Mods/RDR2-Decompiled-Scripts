//Decompiled with MagicRDR v1.0
//Function Count : 153
//Statics Count : 22
//Natives Count : 350
//Parameters Count : 1

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 1;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	bool bLocal_7 = false;
	bool bLocal_8 = false;
	vector3 vLocal_9 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_12 = false;
	bool bLocal_13 = false;
	bool bLocal_14 = false;
	bool bLocal_15 = false;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	float fLocal_18 = 0.0f;
	int iLocal_19 = 0;
	float fLocal_20 = 0.0f;
	var uScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	vLocal_9 = { -788.844f, 93.669f, 2406.71f };
	iLocal_16 = 2;
	iLocal_17 = 4;
	fLocal_18 = 70.0f;
	uScriptParam_0 = uScriptParam_0;
	*(&iVar0 + 24) = 5;
	*(&iVar0 + 48) = 2;
	*(&iVar0 + 60) = 9;
	*(&iVar0 + 172) = 5;
	*(&iVar0 + 228) = 2;
	Function_151(&iVar0, "", "");
	while (IS_GRINGO_ACTIVE() && !IS_EXITFLAG_SET())
	{
		Function_28(&iVar0, GRINGO_GET_MY_OBJECT_REF(), 1, 0, 0, 0, "", -1.0f, 1, 0x43160000);
		GRINGO_WAIT(250);
	}
	Function_1(&iVar0);
	return;
}

void Function_1(int iParam0) //Position: 0x91 / 145
{
	bool bVar0;
	
	Global_26154 = (Global_26154 - 1);
	if (iParam0->f_268)
	{
		if (SQUAD_IS_VALID(iParam0->f_244))
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_244))
			{
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0)))
				{
					if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0), "nconvAdded"))
					{
						AI_CONVERSE_DISABLE(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0));
						AI_CONVERSE_REMOVE_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0));
					}
				}
				bVar0++;
			}
		}
		iParam0->f_268 = 0;
	}
	if (SQUAD_IS_VALID(iParam0->f_244))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_244))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0)))
			{
				if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0), "nconvAdded"))
				{
					DECOR_REMOVE(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0), "nconvAdded");
				}
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0));
			}
			bVar0++;
		}
	}
	if (IS_OBJECT_VALID(*iParam0))
	{
		UNK_0xE18028C1(*iParam0);
		DESTROY_OBJECT(*iParam0);
	}
	if (iParam0->f_292 >= 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam0->f_292);
	}
	if (iParam0->f_296 >= 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam0->f_296);
	}
	if (iParam0->f_296 >= 0)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(iParam0->f_300);
	}
	Function_24(iParam0 + 60);
	if (IS_BLIP_VALID(iParam0->f_248))
	{
		REMOVE_BLIP(iParam0->f_248);
	}
	Function_3();
	if (IS_ITERATOR_VALID(iParam0->f_288))
	{
		DESTROY_ITERATOR(iParam0->f_288);
	}
	Function_2();
	RELEASE_LAYOUT_REF(StackVal);
	return;
}

void Function_2() //Position: 0x203 / 515
{
	Function_3();
	return;
}

void Function_3() //Position: 0x20C / 524
{
	RELEASE_LAYOUT_REF(bLocal_14);
	Function_4(3, bLocal_7, bLocal_8, &uLocal_3, bLocal_13, 4294967295);
	return;
}

void Function_4(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x224 / 548
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	
	bVar1 = false;
	if (SQUAD_IS_VALID(bParam2))
	{
		if (bParam5 > 0)
		{
			Function_21(&(Global_3422[bParam540]));
		}
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam2))
		{
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam2, bVar0);
			if (IS_ACTOR_VALID(bVar2))
			{
				if (IS_ACTOR_HUMAN(bVar2))
				{
					if (bVar2 != bParam1)
					{
						SET_ACTOR_IS_COMPANION(bVar2, 0);
						SET_ACTOR_FACTION(bVar2, 21);
						MEMORY_CONSIDER_AS(bVar2, Global_34573, 2);
						if (!Global_3378)
						{
							AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar2, true);
						}
					}
				}
				else if (IS_ACTOR_VEHICLE(bVar2))
				{
					bVar3 = false;
					while (bVar3 <= GET_NUM_DRAFT_POSITIONS(bVar2))
					{
						bVar4 = GET_DRAFT_ACTOR(bVar3, bVar2);
						if (IS_ACTOR_VALID(bVar4))
						{
							SET_ACTOR_IS_COMPANION(bVar4, 0);
							SET_ACTOR_FACTION(bVar4, 21);
							MEMORY_CONSIDER_AS(bVar4, Global_34573, 2);
						}
						bVar3++;
					}
				}
			}
			bVar0++;
		}
		if (!Global_3378)
		{
			Function_20(bParam2);
		}
		SQUAD_GOALS_CLEAR(bParam2);
		if (Function_19(bParam2, Global_34573))
		{
			bVar1 = true;
		}
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam2))
		{
			bVar5 = SQUAD_GET_ACTOR_BY_INDEX(bParam2, bVar0);
			if (IS_ACTOR_VALID(bVar5))
			{
				bVar6 = GET_CURRENT_GRINGO(bVar5);
				if (IS_GRINGO_VALID(bVar6) && Global_3378)
				{
					if (Function_18(GET_OBJECT_FROM_GRINGO(bVar6), bParam4))
					{
						DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar6), "missioncampfireobj", true);
						GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(bVar6), Global_6290);
					}
				}
				if (bVar5 != bParam1)
				{
					RELEASE_ACTOR(bVar5);
				}
			}
			bVar0++;
		}
	}
	bVar9 = false;
	switch (bParam5)
	{
		case 0x00000037:
		case 0x00000038:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
		case 0x00000033:
		case 0x00000039:
			if (GET_LAST_ATTACKER(bParam1) != Global_34573 || ((((Global_3422[bParam540].f_152 && !Function_13(bParam1, &uVar8, &uVar7, 0, 0, 0x40400000)) && !HUD_IS_FADED()) && !HUD_IS_FADING()) && !Global_3395))
			{
				UI_SET_TEXT("Death_Explanation", "kill_family_help");
				KILL_ACTOR(Global_34573);
			}
			else if (Global_3422[bParam540].f_152 && Function_13(bParam1, &uVar8, &uVar7, 0, 0, 0x40400000))
			{
				if (bParam0 == 11)
				{
					Function_12(bParam1, -105.606f, 119.513f, 1362.295f, 10.0f, 1, 120.0f, 0x40c00000);
				}
				if (bParam0 == 12)
				{
					Function_12(bParam1, -104.413f, 119.521f, 1367.917f, 10.0f, 1, 120.0f, 0x40c00000);
				}
				if (bParam0 == 13)
				{
					Function_12(bParam1, -102.615f, 119.513f, 1364.342f, 10.0f, 1, 120.0f, 0x40c00000);
				}
				SAY_SINGLE_LINE_CONTEXT_OVER_PAIN(bParam1, 60, Global_34573, 1, 0, 0, 4294967295, 4294967295, 0);
				bVar9 = true;
			}
			Function_9(bParam5);
			break;
	}
	if (DECOR_CHECK_EXIST(bParam1, "bACTOR_AVOID_SMALLBRAINS"))
	{
		DECOR_REMOVE(bParam1, "bACTOR_AVOID_SMALLBRAINS");
	}
	Function_6(bParam0, DECOR_CHECK_EXIST(bParam1, "hidden"), (Global_3378 || bVar9), 1, 1);
	if (IS_ACTOR_VALID(bParam1))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam1);
		MEMORY_ALLOW_SHOOTING(bParam1, 0);
		MEMORY_PREFER_MELEE(bParam1, 0);
		SET_ACTOR_FACTION(bParam1, 20);
		MEMORY_CONSIDER_AS(bParam1, Global_34573, false);
		if (!Global_3378)
		{
			AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam1, true);
		}
	}
	if (!Global_3378 && !bVar9)
	{
		switch (bParam5)
		{
			case 0x0000000A:
			case 0x0000000B:
			case 0x00000037:
			case 0x00000038:
			case 0x00000034:
			case 0x00000035:
			case 0x00000036:
			case 0x00000032:
			case 0x00000033:
			case 0x00000039:
				break;
			
			default:
				if (SQUAD_IS_VALID(bParam2))
				{
					bVar0 = false;
					while (bVar0 <= SQUAD_GET_SIZE(bParam2))
					{
						bVar10 = SQUAD_GET_ACTOR_BY_INDEX(bParam2, bVar0);
						if (IS_ACTOR_VALID(bVar10))
						{
							if (bVar1)
							{
								TASK_FLEE_ACTOR(bVar10, Global_34573, 50.0f, -1.0f, 0, 0, 0);
							}
							else
							{
								Function_5(bVar10, 1);
								TASK_WANDER(bVar10, -1.0f);
							}
						}
						bVar0++;
					}
				}
				break;
		}
	}
	else if (Global_3378)
	{
	}
	Function_24(uParam3);
	if (IS_LAYOUTREF_VALID(bParam4))
	{
		RELEASE_LAYOUT_OBJECTS(bParam4);
		RELEASE_LAYOUT_REF(bParam4);
	}
}

void Function_5(bool bParam0, bool bParam1) //Position: 0x641 / 1601
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[0]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[0], 0);
	}
	return;
}

int Function_6(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x670 / 1648
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: **WARNING** you are releasing COMPANION_DUMMY!");
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: CompanionsList out of bounds.");
		return 0;
	}
	if (Global_8492[iParam014].f_16)
	{
		Global_8492[iParam014].f_16 = 0;
		STREAMING_EVICT_ACTOR(StackVal, 4294967295);
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(StackVal))
	{
		if (StackVal && IS_ACTOR_HUMAN(bParam4))
		{
			ACTOR_HOLSTER_WEAPON(StackVal, 1);
		}
		if (bParam1)
		{
			RESET_ANIM_SET_FOR_ACTOR(StackVal, 1);
			TASK_CLEAR(StackVal);
			MEMORY_CLEAR_ALL(StackVal);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(StackVal, 0);
		}
		Function_8(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, 1);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_7(StackVal);
		if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
		{
			MEMORY_CLEAR_RIDING_PREFERENCE(StackVal);
			DEREFERENCE_ACTOR(StackVal);
			if (DECOR_CHECK_EXIST(StackVal, "bACTOR_AVOID_SMALLBRAINS"))
			{
				DECOR_REMOVE(StackVal, "bACTOR_AVOID_SMALLBRAINS");
			}
			if (bParam2)
			{
				DECOR_SET_BOOL(Global_8492[iParam014], "KeepLastTask", true);
			}
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Global_8492[iParam014], 1);
			bVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "Persistent_Char_Brain");
			bVar1 = GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar2), "ScriptStructure", "stolen_flag", 0);
		}
		else
		{
			if (bParam1)
			{
				DESTROY_ACTOR(StackVal);
			}
			else if (bParam3)
			{
				RELEASE_ACTOR(StackVal);
				if (DECOR_CHECK_EXIST(StackVal, "bACTOR_AVOID_SMALLBRAINS"))
				{
					DECOR_REMOVE(StackVal, "bACTOR_AVOID_SMALLBRAINS");
				}
			}
			bVar1 = true;
		}
	}
	Global_8492[iParam014].f_4 = "";
	return bVar1;
}

void Function_7(bool bParam0) //Position: 0x98E / 2446
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		}
	}
	return;
}

void Function_8(bool bParam0) //Position: 0x9BA / 2490
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_9(int iParam0) //Position: 0x9CF / 2511
{
	if (Function_11(&Global_3422[iParam040] + 128, 8388608))
	{
		Function_10(&Global_3422[iParam040] + 128, 8388608);
	}
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x9FB / 2555
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_11(var uParam0, bool bParam1) //Position: 0xA12 / 2578
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, float fParam7) //Position: 0xA2E / 2606
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = FIND_NEAREST_COVER_LOCATION(&fParam1, fParam4, GET_HEADING(bParam0), 120.0f, 7);
	if (!IS_COVER_LOCATION_VALID(bVar0))
	{
		PRINTSTRING("Failed to find cover location for ");
		PRINTSTRING(GET_ACTOR_NAME(bParam0));
		PRINTSTRING(", hiding at position instead.");
		PRINTNL();
		bVar1 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(false, &fParam1, 4);
		TASK_CROUCH(false, fParam6);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bParam0, bVar1);
		TASK_SEQUENCE_RELEASE(bVar1, 1);
		TASK_PRIORITY_SET(bParam0, iParam5);
	}
	else
	{
		TASK_HIDE_AT_COVER(bParam0, bVar0, fParam6, fParam7, 1);
		TASK_PRIORITY_SET(bParam0, iParam5);
	}
}

bool Function_13(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0xAE8 / 2792
{
	float fVar0;
	
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		if (IS_ACTOR_ON_FOOT(bParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, (fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		fVar0 = Function_17(bParam0, Global_34573);
		if (!Function_16(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_14(bParam0);
				return 1;
			}
		}
		if (!Function_16(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_14(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_14(bParam0);
				return 1;
			}
		}
		if (!Function_16(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_14(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_14(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_16(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_14(bParam0);
				return 1;
			}
		}
		if (!Function_16(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_14(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_14(bool bParam0) //Position: 0xC7F / 3199
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_15(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_15(bool bParam0) //Position: 0xCB3 / 3251
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_16(var uParam0, int iParam1) //Position: 0xCCA / 3274
{
	return (uParam0 && iParam1) == 0;
}

var Function_17(bool bParam0, bool bParam1) //Position: 0xCD7 / 3287
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

bool Function_18(bool bParam0, bool bParam1) //Position: 0xDC8 / 3528
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_IN_LAYOUT(bVar0, bParam1);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (bVar1 == bParam0)
		{
			DESTROY_ITERATOR(bVar0);
			return 1;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 0;
}

bool Function_19(bool bParam0, bool bParam1) //Position: 0xE1F / 3615
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (GET_LAST_ATTACKER(bVar2) == bParam1)
			{
				CLEAR_LAST_HIT(bVar2);
				iVar1 = 1;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_20(bool bParam0) //Position: 0xE78 / 3704
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

int Function_21(int iParam0) //Position: 0xEAA / 3754
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = iParam0->f_36;
	if (iVar0 < 16 || iVar0 > 0)
	{
		return 0;
	}
	if (Global_3414)
	{
		return 0;
	}
	if (!iParam0->f_152)
	{
		if (SQUAD_IS_VALID(iParam0->f_156))
		{
			bVar3 = false;
			while (bVar3 <= SQUAD_GET_SIZE(iParam0->f_156))
			{
				bVar4 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_156, bVar3);
				if (IS_ACTOR_VALID(bVar4))
				{
					if (!IS_ACTOR_VEHICLE(bVar4))
					{
						if (GET_LAST_ATTACKER(bVar4) == Global_34573)
						{
							Function_20(iParam0->f_156);
							SQUAD_GOALS_CLEAR(iParam0->f_156);
							iParam0->f_152 = 1;
							if (GET_OBJECT_TYPE(iParam0->f_40) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), false);
									}
								}
							}
							return 1;
						}
						if (Function_13(bVar4, &uVar2, &uVar1, 0, 0, 0x40400000) && ((iParam0->f_36 != 11 || iParam0->f_36 != 12) || iParam0->f_36 != 13))
						{
							Function_20(iParam0->f_156);
							SQUAD_GOALS_CLEAR(iParam0->f_156);
							iParam0->f_152 = 1;
							if (GET_OBJECT_TYPE(iParam0->f_40) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), false);
									}
								}
							}
							return 1;
						}
					}
					else if (GET_LAST_ATTACK_TARGET(Global_34573) == bVar4)
					{
						Function_20(iParam0->f_156);
						SQUAD_GOALS_CLEAR(iParam0->f_156);
						iParam0->f_152 = 1;
						if (GET_OBJECT_TYPE(iParam0->f_40) == 12)
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
							{
								if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
								{
									GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), false);
								}
							}
						}
						return 1;
					}
				}
				bVar3++;
			}
		}
	}
	else if (Function_22(StackVal, StackVal, Global_34573, *(iParam0 + 52)) < 100.0f)
	{
		iParam0->f_152 = 0;
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
		{
			if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), true);
			}
		}
		return 0;
	}
	return 1;
	return 0;
}

float Function_22(bool bParam0, vector3 vParam1) //Position: 0x1080 / 4224
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_23(bParam0);
		vVar0 = { StackVal, StackVal, Function_23(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_23(bool bParam0) //Position: 0x10FA / 4346
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

void Function_24(int iParam0) //Position: 0x1164 / 4452
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_25(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_25(var uParam0, int iParam1) //Position: 0x118A / 4490
{
	if (Function_27(uParam0[iParam13], 4))
	{
		if (Function_27(uParam0[iParam13], 1))
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
			Function_26(uParam0[iParam13], 1);
			Function_26(uParam0[iParam13], 2);
			Function_26(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_26(var uParam0, int iParam1) //Position: 0x12B8 / 4792
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_27(var uParam0, bool bParam1) //Position: 0x12D2 / 4818
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_28(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, bool bParam6, float fParam7, int iParam8, float fParam9) //Position: 0x12EF / 4847
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	bool bVar13;
	int iVar14;
	
	uParam5 = uParam5;
	bVar1 = false;
	bVar13 = (Function_150() && Function_148());
	iVar14 = 600;
	if (!Function_147(8))
	{
		iParam0->f_4 = 12;
	}
	if (bVar13)
	{
		if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
		{
			if (!DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "MP_ONLY"))
			{
				return 4294967295;
			}
		}
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_146("npressDemo"))
			{
				if (((Global_25266 + 2000.0f) < GET_CURRENT_GAME_TIME() && !bParam2) && !Global_3370)
				{
					iVar14 = 1000;
					break;
				}
			}
			else if ((((Global_25266 + 200.0f) < GET_CURRENT_GAME_TIME() && !bParam2) && !Global_3370) && !Function_150())
			{
				iVar14 = 1000;
				break;
			}
			if ((!bParam2 && !Global_3370) && !Function_150())
			{
				if (GET_WEATHER() != 3 || GET_WEATHER() != 4)
				{
					iVar14 = 1000;
					break;
				}
			}
			GET_OBJECT_POSITION(bParam1, &vVar7);
			GET_OBJECT_ORIENTATION(bParam1, iParam0 + 212);
			if (Global_63399 == 32)
			{
				iLocal_16 = iLocal_17;
			}
			if (Function_150())
			{
				iLocal_16 = 32;
			}
			if (Global_3370)
			{
				if (Function_22(StackVal, StackVal, Global_34573, vVar7) < 10.0f)
				{
					break;
				}
			}
			if ((Global_26154 + 1 > iLocal_16 || bParam2) || Global_3370)
			{
				if (Function_145(&vVar7, 50.0f, iParam0 + 200, 4294967295))
				{
					if (((!bParam2 && !Function_143(iParam0 + 200, &fLocal_18, 256, 0)) && !Global_3370) && !Function_150())
					{
						iVar14 = 1000;
					}
					else
					{
						if (UNK_0x214AFB8C(iParam0->f_16))
						{
							STREAMING_REQUEST_PROP(iParam0->f_16, false);
						}
						if (UNK_0x214AFB8C(iParam0->f_20))
						{
							STREAMING_REQUEST_PROPSET(iParam0->f_20);
						}
						bVar3 = FIND_NAMED_POPULATION_SET(bParam6);
						if (Global_3380)
						{
							if (STRING_CONTAINS_STRING(bParam6, "bad_guys"))
							{
								iParam0->f_4 = 12;
								break;
							}
						}
						if ((IS_POPSET_VALID(bVar3) && IS_POPSET_VALID(Global_30750[6])) && !bParam2)
						{
							bVar1 = false;
							if ((iParam3 < 1 && !STRING_CONTAINS_STRING(bParam6, "bad_guys")) && !STRING_CONTAINS_STRING(bParam6, "law"))
							{
								(*iParam0 + 24)[0] = Function_142();
								(*iParam0 + 24)[1] = Function_141();
								Function_140(iParam0 + 60, (*iParam0 + 24)[0], 2, 0);
								Function_140(iParam0 + 60, (*iParam0 + 24)[1], 2, 0);
								bVar1 = 2;
							}
							if (iParam3 >= 1)
							{
								(*iParam0 + 48)[0] = Function_133(Global_30750[6], 0, 4, 23, 1);
								(*iParam0 + 48)[1] = Function_133(Global_30750[6], 0, 4, 23, 1);
								if ((*iParam0 + 48)[0] == 4294967295)
								{
									(*iParam0 + 48)[0] = 976;
								}
								if ((*iParam0 + 48)[1] == 4294967295)
								{
									(*iParam0 + 48)[1] = 980;
								}
								Function_140(iParam0 + 60, (*iParam0 + 48)[0], 2, 0);
								Function_140(iParam0 + 60, (*iParam0 + 48)[1], 2, 0);
							}
							else
							{
								(*iParam0 + 48)[0] = Function_133(Global_30750[6], 0, 0, 23, 1);
								if ((*iParam0 + 48)[0] == 4294967295)
								{
									(*iParam0 + 48)[0] = 977;
								}
								(*iParam0 + 48)[1] = 976;
								Function_140(iParam0 + 60, (*iParam0 + 48)[0], 2, 0);
							}
							while (bVar1 <= iParam3)
							{
								if ((bVar1 != 2 && !STRING_CONTAINS_STRING(bParam6, "bad_guys")) && !STRING_CONTAINS_STRING(bParam6, "law"))
								{
									(*iParam0 + 24)[bVar1] = Function_133(bVar3, 1, 1, 4294967295, 1);
								}
								else
								{
									(*iParam0 + 24)[bVar1] = Function_133(bVar3, 1, 0, 4294967295, 1);
								}
								if ((*iParam0 + 24)[bVar1] == 4294967295)
								{
									iParam0->f_4 = 12;
									break;
								}
								Function_140(iParam0 + 60, (*iParam0 + 24)[bVar1], 2, 0);
								bVar1++;
							}
						}
						else if (!bParam2 && !Function_150())
						{
							return 4294967295;
						}
						if (!bParam2 || Function_150())
						{
							bVar0 = CREATE_VOLUME_IN_LAYOUT(Global_26150, Function_132(), 3, *(iParam0 + 200), 0.0f, 0.0f, 0.0f, fLocal_18, 20.0f, fLocal_18);
							DECOR_SET_INT(bVar0, "script", GET_THIS_SCRIPT_ID());
							DECOR_SET_INT(bVar0, "category", 256);
							Global_26154++;
							Function_128(&bVar0, 0);
							iParam0->f_308 = CREATE_VOLUME_IN_LAYOUT(StackVal, Function_132(), 3, *(iParam0 + 200), 0.0f, 0.0f, 0.0f, (fParam7 + 1.5f), 9.0f, (fParam7 + 1.5f));
						}
						if (Function_150())
						{
							iParam0->f_4 = 6;
						}
						else
						{
							iParam0->f_4 = 1;
						}
					}
				}
			}
			else
			{
				iVar14 = 1000;
			}
			break;
		
		case 0x00000006:
			Function_103(iParam0, &iVar14);
			break;
		
		case 0x00000001:
			if (Function_98(iParam0 + 60))
			{
				iParam0->f_4 = 4;
			}
			iVar14 = 0;
			break;
		
		case 0x00000004:
			if (Function_88(iParam0, bParam1))
			{
				if (IS_OBJECT_VALID(iParam0->f_224))
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_224), false);
				}
				iParam0->f_4 = 8;
			}
			else if (!bParam2)
			{
				LOG_ERROR("Couldn't create the campsire layout");
				iParam0->f_4 = 12;
				break;
			}
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				iParam0->f_304 = 0;
				iParam0->f_288 = CREATE_OBJECT_ITERATOR(iParam0->f_12);
				ITERATE_ON_OBJECT_TYPE(iParam0->f_288, 12);
				ITERATE_IN_LAYOUT(iParam0->f_288, iParam0->f_12);
				START_OBJECT_ITERATOR(iParam0->f_288);
				bVar1 = false;
				bVar4 = OBJECT_ITERATOR_CURRENT(iParam0->f_288);
				while (IS_OBJECT_VALID(bVar4))
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bVar4)) && bVar1 > iParam3)
					{
						DECOR_SET_BOOL(bVar4, "ForceAllowSun", true);
						if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar4), "horse") && Function_150())
						{
							DESTROY_OBJECT(bVar4);
						}
						else if (GRINGO_USABLE_BY_ACTOR_ENUM((*iParam0 + 24)[bVar1], GET_GRINGO_FROM_OBJECT(bVar4), "UseCase1"))
						{
							(*iParam0 + 172)[bVar1] = bVar4;
							GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bVar4), "UseCase1", "UseAnim", (*iParam0 + 24)[bVar1]);
							bVar1++;
							iParam0->f_304++;
							PRINTINT(iParam0->f_304);
						}
					}
					bVar4 = OBJECT_ITERATOR_NEXT(iParam0->f_288);
				}
				if (IS_ITERATOR_VALID(iParam0->f_288))
				{
					DESTROY_ITERATOR(iParam0->f_288);
				}
				iParam0->f_4 = 9;
			}
			else
			{
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000009:
			PRINTINT(iParam0->f_304);
			bVar5 = true;
			bVar1 = false;
			while (bVar1 <= iParam0->f_304)
			{
				if (IS_OBJECT_VALID((*iParam0 + 172)[bVar1]))
				{
					if (!GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT((*iParam0 + 172)[bVar1]), "UseCase1", "UseAnim", (*iParam0 + 24)[bVar1]))
					{
						bVar5 = false;
					}
				}
				bVar1++;
			}
			if (bVar5)
			{
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			if (STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 200), 10.0f))
			{
				if (((Function_22(StackVal, StackVal, Global_34573, *(iParam0 + 200)) < 120.0f || bParam2) || Global_3370) || Function_150())
				{
					if (UNK_0x214AFB8C(iParam0->f_16))
					{
						if (IS_OBJECT_VALID(iParam0->f_224))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_224), true);
						}
						bVar6 = CREATE_PROP_IN_LAYOUT_BY_ID(StackVal, Function_132(), iParam0->f_16, *(iParam0 + 200), *(iParam0 + 212), 0);
						*iParam0 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_132(), "amb_campfire_light", bVar6, 0.0f, 0.0f, 0.0f, 1, bVar6);
						UNK_0x6745191B(*iParam0, 0.0f, 0.0f, 0.0f);
						if (GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_OBJECT(bVar6), "center", &vVar7, &vVar10))
						{
							vVar7 = { StackVal, StackVal, -Vector(vVar7, StackVal, StackVal) };
							GET_OBJECT_RELATIVE_POSITION(bVar6, vVar7, &vVar10);
							SET_OBJECT_POSITION(bVar6, vVar10);
							SNAP_OBJECT_TO_GROUND(bVar6, 10.0f, true, 1092616192);
						}
						else
						{
							LOG_ERROR("can't find the center locator for campfire");
						}
					}
					else if (!bParam2 && !Function_150())
					{
						LOG_ERROR("Campfire beacon asset isn't valid.. you won't see a campfire");
					}
					Function_86(StackVal, StackVal, iParam0 + 292, iParam0 + 300, iParam0 + 296, fParam7, *(iParam0 + 200));
					iParam0->f_4 = 5;
					iVar14 = 0;
					iParam0->f_272 = 1;
				}
			}
			else
			{
				iVar14 = 250;
			}
			break;
		
		case 0x00000005:
			DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "DontRun", true);
			if (UNK_0x214AFB8C(iParam0->f_20))
			{
				NET_OBJECT_REPLICATION_MODE_START(2, 0);
				Function_85(StackVal, StackVal, StackVal, StackVal, StackVal, Function_132(), GET_ASSET_NAME(iParam0->f_20, 7), *(iParam0 + 200), *(iParam0 + 212), 4294967295);
				NET_OBJECT_REPLICATION_MODE_END(2);
				DECOR_SET_BOOL(bParam1, "PropsCreated", true);
			}
			else if (!bParam2)
			{
				LOG_ERROR("Propset ID invalid.  Campfire problem");
				iParam0->f_4 = 12;
				break;
			}
			Function_84(iParam0->f_12);
			STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(iParam0->f_12));
			bVar1 = false;
			iParam0->f_4 = 10;
			iVar14 = 0;
			break;
		
		case 0x0000000A:
			if (!bParam2 && !Function_150())
			{
				iParam0->f_244 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_12, Function_132()));
				iParam0->f_288 = CREATE_OBJECT_ITERATOR(iParam0->f_12);
				bVar1 = false;
				while (bVar1 <= iParam3)
				{
					Function_82(StackVal, iParam0->f_288, iParam0->f_244, (*iParam0 + 24)[bVar1], (*iParam0 + 172)[bVar1], iParam0->f_308, bVar1);
					bVar1++;
				}
				if (iParam3 >= 1)
				{
					Function_81(StackVal, iParam0->f_12, iParam0 + 48, 2, iParam0 + 228);
				}
				else
				{
					Function_81(StackVal, iParam0->f_12, iParam0 + 48, 1, iParam0 + 228);
				}
				if (SQUAD_IS_VALID(iParam0->f_244))
				{
					if (SQUAD_GET_SIZE(iParam0->f_244) != 0 && iParam3 < 0)
					{
						LOG_ERROR("Campfire no spawn problem! Report to AlanB.");
						iParam0->f_4 = 12;
						break;
					}
				}
				if (STRING_CONTAINS_STRING(bParam6, "bad_guys"))
				{
					iParam0->f_256 = 1;
				}
				ITERATE_ON_OBJECT_TYPE(iParam0->f_288, 15);
				ITERATE_IN_LAYOUT(iParam0->f_288, iParam0->f_12);
				bVar2 = START_OBJECT_ITERATOR(iParam0->f_288);
				while (IS_OBJECT_VALID(bVar2))
				{
					if (IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(bVar2)))
					{
						iParam0->f_240 = GET_ACTOR_FROM_OBJECT(bVar2);
					}
					bVar2 = OBJECT_ITERATOR_NEXT(iParam0->f_288);
				}
				if (IS_ITERATOR_VALID(iParam0->f_288))
				{
					DESTROY_ITERATOR(iParam0->f_288);
				}
			}
			if ((bParam2 || !bParam4) || bVar13)
			{
				if (IS_OBJECTSET_VALID(iParam0->f_284))
				{
					bVar1 = false;
					bVar1 = false;
					while (bVar1 <= GET_OBJECTSET_SIZE(iParam0->f_284))
					{
						DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, iParam0->f_284));
						bVar1++;
					}
				}
				if (IS_OBJECT_VALID(iParam0->f_224))
				{
					DESTROY_OBJECT(iParam0->f_224);
				}
			}
			iParam0->f_4 = 11;
			iVar14 = 0;
			break;
		
		case 0x0000000B:
			if (Global_3370)
			{
			}
			if ((!bParam2 && !bVar13) && !iParam0->f_268)
			{
				if (SQUAD_IS_VALID(iParam0->f_244))
				{
					if (SQUAD_GET_SIZE(iParam0->f_244) >= 1)
					{
						if (IS_STRING_VALID(bParam6))
						{
							if ((!STRING_CONTAINS_STRING(bParam6, "bad") && !STRING_CONTAINS_STRING(bParam6, "law")) && iParam8 != 1)
							{
								if (VDIST(*(iParam0 + 200), Global_34574) > 10.0f)
								{
									if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "rand_idle_sit_ground_player"))
									{
										AI_CONVERSE_ENABLE(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false));
										AI_CONVERSE_ENABLE(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, true));
										AI_CONVERSE_ADD_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false));
										AI_CONVERSE_ADD_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, true));
										DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false), "nconvAdded", true);
										DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, true), "nconvAdded", true);
										AI_GOAL_LOOK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false));
										AI_GOAL_LOOK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, true));
										Function_76(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false));
										fLocal_20 = GET_CURRENT_GAME_TIME();
										iParam0->f_268 = 1;
									}
								}
							}
						}
					}
				}
			}
			if ((iParam0->f_268 != 1 && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "rand_idle_sit_ground_player")) && !iParam0->f_276)
			{
				if (SQUAD_IS_VALID(iParam0->f_244) && SQUAD_GET_SIZE(iParam0->f_244) < 0)
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false)))
					{
						if ((GET_CURRENT_GAME_TIME() - fLocal_20) < 10.0f)
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(Global_34573, "PLAYER_COMMENT_ON_STORY", SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false), "GENERIC_GOODBYE", 1, 1, 5, 0);
						}
						iParam0->f_276 = 1;
					}
					else
					{
						iParam0->f_276 = 1;
					}
				}
				else
				{
					iParam0->f_276 = 1;
				}
			}
			if (!bParam2 && !bVar13)
			{
				if (SQUAD_IS_VALID(iParam0->f_244))
				{
					bVar1 = false;
					while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_244))
					{
						if (Function_13(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), &iLocal_19, iParam0 + 312, 0, 0, 0x40400000))
						{
							SET_ACTOR_ALLOW_WEAPON_REACTIONS(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), 1);
							AI_QUICK_EXIT_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), 1);
							iParam0->f_280 = 1;
							Function_75(iParam0->f_244, 1);
							Function_74(iParam0->f_244, Global_34573, -1.0f, -1.0f, 0, 2);
							if (iLocal_19 == 8)
							{
								TASK_KILL_CHAR(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), Global_34573);
							}
							iParam0->f_4 = 12;
							break;
						}
						bVar1++;
					}
					bVar1 = false;
					while (bVar1 <= iParam0->f_228)
					{
						if (IS_ACTOR_VALID((*iParam0 + 228)[bVar1]))
						{
							if (GET_LAST_ATTACKER((*iParam0 + 228)[bVar1]) != Global_34573 || GET_RIDER((*iParam0 + 228)[bVar1]) != Global_34573)
							{
								iParam0->f_280 = 1;
								TASK_CLEAR((*iParam0 + 228)[bVar1]);
								Function_75(iParam0->f_244, 1);
								Function_74(iParam0->f_244, Global_34573, -1.0f, -1.0f, 0, 2);
								TASK_KILL_CHAR(Function_73(iParam0->f_244), Global_34573);
								iParam0->f_4 = 12;
								break;
							}
						}
						bVar1++;
					}
				}
			}
			if (bParam4 && !bVar13)
			{
				Function_70(iParam0, bParam2, 0);
			}
			else if (iParam0->f_256)
			{
				Function_70(iParam0, bParam2, 1);
			}
			if (!iParam0->f_268)
			{
			}
			if (GET_VEHICLE(Function_69()) != iParam0->f_240 && IS_ACTOR_VALID(iParam0->f_240))
			{
				Function_68(iParam0->f_244, Function_69(), 4);
				Function_67(iParam0->f_244, Function_69());
			}
			if (VDIST(*(iParam0 + 200), Global_34574) < (fParam9 + 30.0f))
			{
				iParam0->f_4 = 12;
			}
			vVar7 = { StackVal, StackVal, *(iParam0 + 200) };
			vVar7.f_4 = (vVar7.y + 0.5f);
			if (!bParam2 && !bVar13)
			{
				if (Function_66(StackVal, StackVal, vVar7, 1.0f, 80.0f, 1, 1, 0))
				{
					Global_25266 = GET_CURRENT_GAME_TIME();
				}
				if (SQUAD_IS_VALID(iParam0->f_244))
				{
					if (Function_65(iParam0->f_244, 1.0f, 80.0f, 1, 1))
					{
						Global_25266 = GET_CURRENT_GAME_TIME();
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (iParam0->f_268)
			{
				if (SQUAD_IS_VALID(iParam0->f_244))
				{
					bVar1 = false;
					while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_244))
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1)))
						{
							if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), "nconvAdded"))
							{
								AI_CONVERSE_DISABLE(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1));
								AI_CONVERSE_REMOVE_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1));
							}
						}
						bVar1++;
					}
				}
				iParam0->f_268 = 0;
			}
			bVar1 = false;
			while (bVar1 <= iParam0->f_228)
			{
				if (IS_ACTOR_VALID((*iParam0 + 228)[bVar1]))
				{
					TASK_WANDER((*iParam0 + 228)[bVar1], 3212836864);
					GIVE_OBJECT_TO_LAYOUT((*iParam0 + 228)[bVar1], Global_28841);
					RELEASE_ACTOR((*iParam0 + 228)[bVar1]);
				}
				bVar1++;
			}
			if (SQUAD_IS_VALID(iParam0->f_244))
			{
				bVar1 = false;
				while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_244))
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1)))
					{
						if (!iParam0->f_280)
						{
							MEMORY_PREFER_RIDING(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), false);
							Function_56(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), 4, 0, 2);
						}
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1));
					}
					bVar1++;
				}
			}
			iParam0->f_272 = 0;
			if (IS_OBJECT_VALID(*iParam0))
			{
				UNK_0xE18028C1(*iParam0);
				DESTROY_OBJECT(*iParam0);
			}
			if (IS_ITERATOR_VALID(iParam0->f_288))
			{
				DESTROY_ITERATOR(iParam0->f_288);
			}
			Function_3();
			if (SQUAD_IS_VALID(iParam0->f_244))
			{
				Function_54(iParam0 + 244, 0, 0, 0);
			}
			RELEASE_LAYOUT_OBJECTS(StackVal);
			iParam0->f_4 = 13;
			iVar14 = 250;
			break;
		
		case 0x0000000D:
			break;
	}
	Function_29(iParam0);
	return iVar14;
}

void Function_29(int iParam0) //Position: 0x22ED / 8941
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0 };
	if (IS_LAYOUTREF_VALID(bLocal_13))
	{
		if (!Function_47(&(Global_3422[540])))
		{
			TASK_WANDER(bLocal_7, 3212836864);
			Function_6(3, 0, 0, 1, 1);
		}
		else if (!Function_46(3))
		{
			bLocal_15 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/chair_sit_attach", &vLocal_9, 3.0f, 0);
			if (IS_GRINGO_VALID(bLocal_15))
			{
				bLocal_7 = Function_33(3, 0, 1, -789.167f, 93.796f, 2407.194f, 0, 0, 0);
				if (!WOULD_ACTOR_BE_VISIBLE(551, &vLocal_9, 3212836864))
				{
					Function_30(1);
				}
				else
				{
					Function_30(0);
				}
			}
		}
	}
	return;
}

void Function_30(bool bParam0) //Position: 0x23B2 / 9138
{
	RESET_ANIM_SET_FOR_ACTOR(bLocal_7, 1);
	if (bParam0)
	{
		TELEPORT_ACTOR(bLocal_7, &vLocal_9, 1, 1, 1);
		SNAP_ACTOR_TO_GRINGO(bLocal_7, GET_OBJECT_FROM_GRINGO(bLocal_15), "UseCase1", 0, 0, 0);
	}
	TASK_USE_GRINGO(bLocal_7, bLocal_15, "UseCase1", 4294967295, 1);
	AI_IGNORE_ACTOR(bLocal_7);
	TASK_PRIORITY_SET(bLocal_7, 0);
	SQUAD_JOIN(bLocal_7, bLocal_8);
	Function_31(bLocal_7, &bLocal_8, 1, 1);
	return;
}

void Function_31(bool bParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x2416 / 9238
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(bParam0, "hidden"))
	{
		if (bParam2)
		{
			SET_DRAW_ACTOR(bParam0, true);
		}
		DECOR_REMOVE(bParam0, "hidden");
	}
	if (!Function_32(bParam0, *uParam1, 1))
	{
		SQUAD_JOIN(bParam0, *uParam1);
	}
	DECOR_SET_BOOL(bParam0, "MissionCampfireActor", true);
	if (IS_ACTOR_HUMAN(bParam0) || IS_ACTOR_HORSE(bParam0))
	{
		SET_ACTOR_FACTION(bParam0, 20);
		MEMORY_CONSIDER_AS(bParam0, Global_34573, false);
		SET_ACTOR_IS_COMPANION(bParam0, 1);
		TASK_PRIORITY_SET(bParam0, 2);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
		UNK_0x99AFD2D1(bParam0, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bParam0, 12, 1);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, bParam3);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bParam0, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(bParam0, bParam3);
		SET_ACTOR_CAN_PLAY_GESTURES(bParam0, bParam3);
		Function_5(bParam0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, false);
	}
	else if (IS_ACTOR_VEHICLE(bParam0))
	{
		ENABLE_VEHICLE_SEAT(bParam0, false, 0);
		ENABLE_VEHICLE_SEAT(bParam0, true, 0);
		TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
		MEMORY_CLEAR_ALL(bParam0);
		AI_GLOBAL_CLEAR_DANGER(bParam0);
		bVar0 = false;
		while (bVar0 <= GET_NUM_DRAFT_POSITIONS(bParam0))
		{
			bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (!Function_32(bVar1, *uParam1, 1))
				{
					SQUAD_JOIN(bVar1, *uParam1);
				}
				SET_ACTOR_IS_COMPANION(bVar1, 1);
				SET_ACTOR_FACTION(bVar1, 20);
				MEMORY_CLEAR_ALL(bVar1);
				MEMORY_CONSIDER_AS(bVar1, Global_34573, false);
				AI_GLOBAL_CLEAR_DANGER(bVar1);
				TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
				DECOR_SET_BOOL(bVar1, "MissionCampfireActor", true);
			}
			bVar0++;
		}
	}
}

bool Function_32(bool bParam0, bool bParam1, bool bParam2) //Position: 0x25A0 / 9632
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(bParam0) == bParam1)
	{
		if (bParam2)
		{
		}
		return 1;
	}
	if (bParam2)
	{
	}
	return 0;
}

bool Function_33(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x25E0 / 9696
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: **WARNING** you are stealing COMPANION_DUMMY!");
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: CompanionsList out of bounds.");
		return "";
	}
	iParam2 = iParam2;
	if (((iParam0 != 12 || iParam0 != 11) || iParam0 != 13) || iParam0 != 14)
	{
		if (!Function_45(&(Global_29008[Global_30621[3]]), 4))
		{
			return "";
		}
		if (!IS_PERS_CHAR_VALID(Global_8492[iParam014]))
		{
			if (iParam0 == 12)
			{
			}
			else if (iParam0 == 11)
			{
			}
			else if (iParam0 == 13)
			{
			}
			else if (iParam0 == 14)
			{
			}
			return "";
		}
	}
	if (!Global_8492[iParam014].f_16)
	{
		Global_8492[iParam014].f_16 = 1;
		STREAMING_REQUEST_ACTOR(StackVal, true, false);
		return "";
	}
	if (!STREAMING_IS_ACTOR_LOADED(StackVal, 4294967295))
	{
		return "";
	}
	if (bParam1)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: bCreateMounted option has been discontinued. Please set this as FALSE!");
	}
	if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
	{
		bVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "Persistent_Char_Brain");
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar2), "ScriptStructure", "stolen_flag", 1);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(Global_8492[iParam014]);
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Global_8492[iParam014], 1);
		Function_43(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_42(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_37(StackVal, iParam7);
		}
		if (!IS_ACTOR_VALID(bVar1))
		{
			vVar3.x = fParam3;
			vVar3.y = fParam4;
			vVar3.z = fParam5;
			if (Function_36(StackVal, StackVal, vVar3))
			{
				iVar6 = 0;
				while (iVar6 <= Global_3422)
				{
					if (IS_SCRIPT_VALID(Global_3422[iVar640].f_108))
					{
						vVar3 = { StackVal, StackVal, *(&Global_3422[iVar640] + 52) };
					}
					iVar6++;
				}
			}
			bVar1 = CREATE_ACTOR_IN_LAYOUT(StackVal, Global_8492[iParam014].f_12, &Global_8492[iParam014] + 20, vVar3, 0.0f, 0.0f, 0.0f);
		}
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		REFERENCE_ACTOR(bVar1);
		TASK_CLEAR(bVar1);
		TASK_PRIORITY_SET(bVar1, 1);
		MAKE_ACTOR_READY_FOR_ACTION(bVar1, 1);
		SET_ACTOR_UPDATE_PRIORITY(bVar1, false);
		Function_35(bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
		{
			DECOR_SET_INT(Global_8492[iParam014], "ambientFaction", GET_ACTOR_FACTION(bVar1));
		}
		SET_ACTOR_FACTION(bVar1, 20);
		MEMORY_CONSIDER_AS(bVar1, Global_34573, false);
		SET_ACTOR_ALLOW_DISARM(bVar1, 0);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar1, 1);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar1, 8, "FASTWALK");
		if (IS_ACTOR_HOGTIED(bVar1))
		{
			FREE_FROM_HOGTIE(bVar1);
		}
		if (iParam0 == 2)
		{
			RESET_ANIM_SET_FOR_ACTOR(bVar1, 0);
			SET_ANIM_SET_FOR_ACTOR(bVar1, "merchant_veh", 0);
		}
		if (iParam0 == 4)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bVar1, 20, true);
		}
		if (iParam0 != 2 || iParam0 != 9)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, 8, 0.0f);
		}
		UNK_0x99AFD2D1(bVar1, 1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 13, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 14, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 64, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 65, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 66, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 67, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 68, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 46, 0);
		LIMIT_BLOOD_ON_ACTOR(bVar1, 3);
		SET_ACTOR_IS_COMPANION(bVar1, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar1, 0);
		SET_ACTOR_IS_AMBIENT(bVar1, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar1, false);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar1, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar1, false);
		Function_34(bVar1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 111, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 112, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 30, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 31, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(bVar1, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(bVar1, 1);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bVar1, 1);
		if (DECOR_CHECK_EXIST(bVar1, "hidden"))
		{
			DECOR_REMOVE(bVar1, "hidden");
		}
		SET_DRAW_ACTOR(bVar1, true);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar1, 1);
		Global_8492[iParam014].f_4 = bVar1;
		return bVar1;
	}
	return "";
}

void Function_34(bool bParam0, bool bParam1) //Position: 0x2ACA / 10954
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_35(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x2AEA / 10986
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_CRIPPLE_ENABLE(bParam0, iParam4);
		SET_ACTOR_ALLOW_DISARM(bParam0, iParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "CanBeLasso", bParam3);
		if (IS_ACTOR_RIDING(bParam0))
		{
			bVar0 = GET_MOUNT(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				SET_ALLOW_JACK(bVar0, iParam2);
			}
		}
	}
}

bool Function_36(vector3 vParam0) //Position: 0x2B3E / 11070
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_37(bool bParam0, bool bParam1) //Position: 0x2B56 / 11094
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_41(bParam0))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		return "";
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_16516))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_16516);
		if (IS_OBJECT_VALID(bVar1))
		{
			if (GET_OBJECT_TYPE(bVar1) != 15 || GET_OBJECT_TYPE(bVar1) != 24)
			{
				bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (GET_ACTOR_ENUM(bVar2) == bParam0)
					{
						Function_38(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x2BD6 / 11222
{
	Function_40(bParam0);
	Function_39(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_39(bool bParam0) //Position: 0x2BFC / 11260
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_40(bool bParam0) //Position: 0x2C20 / 11296
{
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_options");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorroam_lockon");
	return;
}

bool Function_41(bool bParam0) //Position: 0x2CEF / 11503
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_42(int iParam0, bool bParam1) //Position: 0x2D06 / 11526
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(bVar0, GET_GC_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (GET_OBJECT_TYPE(bVar1) != 15 || GET_OBJECT_TYPE(bVar1) != 24)
		{
			bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
			if (IS_ACTOR_VALID(bVar2))
			{
				if (GET_ACTOR_ENUM(bVar2) == iParam0)
				{
					if (IS_LAYOUTREF_VALID(bParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(bVar1, bParam1);
					}
					DESTROY_ITERATOR(bVar0);
					LOG_ERROR("found actor in GC!");
					return bVar2;
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return "";
}

void Function_43(int iParam0, bool bParam1, bool bParam2) //Position: 0x2D99 / 11673
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(StackVal))
	{
		bVar0 = GET_OBJECT_FROM_ACTOR(StackVal);
	}
	else if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
	{
		bVar0 = GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (!IS_BLIP_VALID(Global_8492[iParam014].f_52))
		{
			Global_8492[iParam014].f_52 = ADD_BLIP_FOR_OBJECT(bVar0, 325, 0.0f, 2, 0);
			if (GET_OBJECT_TYPE(bVar0) == 15)
			{
				SET_BLIP_NAME(Global_8492[iParam014].f_52, GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(bVar0)));
			}
		}
		else
		{
			SET_BLIP_MIN_DISTANCE(Global_8492[iParam014].f_52, 0.0f);
		}
		SET_BLIP_PRIORITY(Global_8492[iParam014].f_52, 3);
	}
	else
	{
		if (IS_BLIP_VALID(Global_8492[iParam014].f_52))
		{
			REMOVE_BLIP(Global_8492[iParam014].f_52);
		}
		if (bParam2)
		{
			if (IS_OBJECT_VALID(bVar0))
			{
				if (GET_OBJECT_TYPE(bVar0) == 15)
				{
					bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						Function_7(bVar1);
					}
				}
				Function_44(bVar0);
			}
		}
	}
	return;
}

void Function_44(bool bParam0) //Position: 0x2E90 / 11920
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		}
	}
	return;
}

bool Function_45(var uParam0, int iParam1) //Position: 0x2EBC / 11964
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_46(int iParam0) //Position: 0x2ED8 / 11992
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_HAS_BEEN_STOLEN: CompanionsList out of bounds.");
		return 0;
	}
	if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
	{
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "Persistent_Char_Brain");
		return GRINGO_QUERY_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", &uVar2);
	}
	return IS_ACTOR_VALID(StackVal);
}

bool Function_47(int iParam0) //Position: 0x2F97 / 12183
{
	bool bVar0;
	bool bVar1;
	
	if (!iParam0->f_128 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_11(iParam0 + 128, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_11(iParam0 + 128, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_11(iParam0 + 128, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_11(iParam0 + 128, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_11(iParam0 + 128, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_11(iParam0 + 128, 1024))
				{
					return 0;
				}
				break;
		}
		if (Function_11(iParam0 + 128, 4096))
		{
			if (Function_11(iParam0 + 128, 1))
			{
				bVar0 = Function_48(Function_52(iParam0->f_132));
				bVar1 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar0), GET_HOUR(bVar0), false, false);
				ADD_TIME(&bVar1, 0, iParam0->f_148, false, 0);
				if (IS_LATER_THAN(bVar1, GET_TIME_OF_DAY()))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool Function_48(int iParam0) //Position: 0x3091 / 12433
{
	if (!Function_49(iParam0))
	{
		return MAKE_TIME_OF_DAY(0, 0, 0);
	}
	return Global_13172[iParam011].f_36;
}

bool Function_49(int iParam0) //Position: 0x30B0 / 12464
{
	if (!Function_51(iParam0))
	{
		return 0;
	}
	if (!Function_50(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_50(int iParam0) //Position: 0x30D4 / 12500
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_51(int iParam0) //Position: 0x30E9 / 12521
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_52(int iParam0) //Position: 0x3100 / 12544
{
	if (!Function_53(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_53(int iParam0) //Position: 0x311A / 12570
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_54(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3130 / 12592
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (IS_ACTOR_RIDING_VEHICLE(bVar1))
			{
				bVar2 = GET_VEHICLE(bVar1);
				if (bParam3)
				{
					DESTROY_ACTOR(bVar1);
					DESTROY_ACTOR(bVar2);
				}
				else if (bParam2)
				{
					if (!Function_55(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_55(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar2);
					}
				}
				if (IS_ACTOR_VALID(bVar1))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
					else
					{
						RELEASE_ACTOR(bVar1);
					}
				}
				if (IS_ACTOR_VALID(bVar2))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar2);
					}
					else
					{
						RELEASE_ACTOR(bVar2);
					}
				}
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = GET_MOUNT(bVar1);
				if (bParam3)
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
					}
					DESTROY_ACTOR(bVar1);
					DESTROY_ACTOR(bVar2);
				}
				else if (bParam2)
				{
					if (!Function_55(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_55(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
						{
							DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
						}
						DESTROY_ACTOR(bVar2);
					}
				}
				if (IS_ACTOR_VALID(bVar1))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
					else
					{
						RELEASE_ACTOR(bVar1);
					}
				}
				if (IS_ACTOR_VALID(bVar2))
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
					}
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar2);
					}
					else
					{
						RELEASE_ACTOR(bVar2);
					}
				}
			}
			else
			{
				if (bParam3)
				{
					DESTROY_ACTOR(bVar1);
				}
				else if (bParam2)
				{
					if (!Function_55(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
				}
				if (IS_ACTOR_VALID(bVar1))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
					else
					{
						RELEASE_ACTOR(bVar1);
					}
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
}

bool Function_55(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x332E / 13102
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

int Function_56(bool bParam0, int iParam1, var uParam2, var uParam3) //Position: 0x3348 / 13128
{
	bool bVar0;
	bool bVar1;
	
	if (iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_57(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_57(bParam0, iParam1, uParam2, uParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_57(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x3428 / 13352
{
	char* cVar0[32];
	
	Function_64();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_63(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_62(bParam0, 0);
	Function_61(bParam0, iParam1);
	Function_60(bParam0, uParam2);
	Function_59(bParam0, uParam3);
	if (Function_58(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_58(bool bParam0) //Position: 0x3676 / 13942
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_59(bool bParam0, bool bParam1) //Position: 0x3699 / 13977
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_60(bool bParam0, bool bParam1) //Position: 0x36BC / 14012
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_61(bool bParam0, bool bParam1) //Position: 0x36E0 / 14048
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_62(bool bParam0, bool bParam1) //Position: 0x3706 / 14086
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_63(bool bParam0) //Position: 0x3729 / 14121
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_64() //Position: 0x3747 / 14151
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

bool Function_65(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3791 / 14225
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (Function_55(bVar1, uParam1, uParam2, uParam3, uParam4, 0))
				{
					return 1;
				}
			}
			bVar0++;
		}
	}
	return 0;
}

bool Function_66(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x37E3 / 14307
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

void Function_67(bool bParam0, bool bParam1) //Position: 0x37FF / 14335
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

void Function_68(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3851 / 14417
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

var Function_69() //Position: 0x3896 / 14486
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x38AB / 14507
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0->f_264)
	{
		return;
	}
	if (bParam1)
	{
		return;
	}
	if (!SQUAD_IS_VALID(iParam0->f_244))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_244))
	{
		if (!IS_AI_ACTOR_UNALERTED(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0)))
		{
			return;
		}
		bVar0++;
	}
	if (SQUAD_GET_SIZE(iParam0->f_244) <= 1)
	{
		return;
	}
	if (!Function_72(iParam0->f_244))
	{
		return;
	}
	if (!Function_71(StackVal, StackVal, iParam0->f_244, *(iParam0 + 200), 10.0f))
	{
		return;
	}
	if (VDIST(*(iParam0 + 200), Global_34574) > 15.0f)
	{
		AI_GOAL_LOOK_AT_ACTOR(Function_73(iParam0->f_244), Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
		FORCE_LOOK_AT_ACTOR(Function_73(iParam0->f_244), Global_34573, 5.0f);
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_244))
		{
			AI_GOAL_LOOK_AT_ACTOR_NEW(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), Global_34573, 15.0f, 1);
			bVar1++;
		}
		if (bParam2)
		{
			SAY_SINGLE_LINE_CONTEXT(Function_73(iParam0->f_244), 96, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(Function_73(iParam0->f_244), 120, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		iParam0->f_264 = 1;
	}
	return;
}

bool Function_71(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x39CE / 14798
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (Function_36(StackVal, StackVal, vParam1))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				Function_23(bVar1);
				if (VDIST(Function_23(bVar1), vParam1) >= fParam4)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

bool Function_72(bool bParam0) //Position: 0x3A3C / 14908
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_DEAD(bVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

var Function_73(bool bParam0) //Position: 0x3A93 / 14995
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar0) && IS_ACTOR_ALIVE(bVar0))
		{
			return bVar0;
		}
		bVar1++;
	}
	return "";
}

void Function_74(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x3AD9 / 15065
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
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_CLEAR(bVar1);
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, iParam5);
		}
		bVar0++;
	}
}

void Function_75(bool bParam0, bool bParam1) //Position: 0x3B47 / 15175
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
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_PREFER_RIDING(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_76(bool bParam0) //Position: 0x3B8F / 15247
{
	struct<21> Var0;
	
	bVar12 = Function_80(GET_ACTOR_ENUM(bParam0), &Var0);
	if (bVar12)
	{
		iVar13 = Function_78(&Var0);
		iVar14 = 0;
		if (iVar13 == 2)
		{
			if (Function_77())
			{
				iVar14 = 1;
			}
			else
			{
				iVar14 = 2;
			}
		}
		else if (Var0.f_20)
		{
			iVar14 = 1;
		}
		else if ((&Var0 + 24)->f_20)
		{
			iVar14 = 2;
		}
		else
		{
			iVar14 = 0;
		}
		if (iVar14 == 1)
		{
			AI_SET_CAMPFIRE_STORY_ENABLED(1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 0);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(2, Var0.f_12);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(3, Var0.f_16);
		}
		else if (iVar14 == 2)
		{
			AI_SET_CAMPFIRE_STORY_ENABLED(1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 0);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(2, (&Var0 + 24)->f_12);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(3, (&Var0 + 24)->f_16);
		}
		else
		{
			AI_SET_CAMPFIRE_STORY_ENABLED(0);
		}
	}
	return;
}

bool Function_77() //Position: 0x3C4D / 15437
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

var Function_78(int iParam0) //Position: 0x3C60 / 15456
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	iVar1 = 0;
	iParam0->f_20 = 0;
	(iParam0 + 24)->f_20 = 0;
	if (Function_79(*iParam0, 0))
	{
		bVar0 = Function_48(StackVal);
		bVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar0), GET_HOUR(bVar0) + 6, GET_MINUTE(bVar0), GET_SECOND(bVar0));
		if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar2))
		{
			iParam0->f_20 = 1;
			iVar1++;
		}
	}
	if (Function_79(iParam0->f_24, 0))
	{
		bVar0 = Function_48(StackVal);
		bVar3 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar0), GET_HOUR(bVar0) + 6, GET_MINUTE(bVar0), GET_SECOND(bVar0));
		if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), bVar3))
		{
			(iParam0 + 24)->f_20 = 1;
			iVar1++;
		}
	}
	return iVar1;
}

bool Function_79(int iParam0, bool bParam1) //Position: 0x3D11 / 15633
{
	int iVar0;
	
	iVar0 = Function_52(iParam0);
	if (!Function_51(iVar0))
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

int Function_80(int iParam0, int iParam1) //Position: 0x3D4E / 15694
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (Global_63119[iVar013] == iParam0)
		{
			*iParam1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_63119[iVar013] + 4) };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_81(bool bParam0, bool bParam1, var uParam2, int iParam3, var uParam4) //Position: 0x3D87 / 15751
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	iVar0 = 0;
	bVar8 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar8, 12);
	bVar7 = START_OBJECT_ITERATOR(bVar8);
	while (IS_OBJECT_VALID(bVar7) && iVar0 > iParam3)
	{
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bVar7)))
		{
			if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bVar7), "horse_stay"))
			{
				GET_OBJECT_POSITION(bVar7, &vVar1);
				GET_OBJECT_ORIENTATION(bVar7, &vVar4);
				bVar9 = CREATE_ACTOR_IN_LAYOUT(bParam1, Function_132(), (*uParam2)[iVar0], vVar1, vVar4);
				ACCESSORIZE_HORSE(bVar9, 3);
				(*uParam4)[iVar0] = bVar9;
				TASK_USE_GRINGO(bVar9, GET_GRINGO_FROM_OBJECT(bVar7), "UseCase1", 4294967295, 1);
				SNAP_ACTOR_TO_GRINGO(bVar9, bVar7, "UseCase1", 1, 0, 0);
				iVar0++;
			}
		}
		bVar7 = OBJECT_ITERATOR_NEXT(bVar8);
	}
	DESTROY_ITERATOR(bVar8);
}

void Function_82(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x3E54 / 15956
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	
	iVar1 = 1;
	if (!IS_OBJECT_VALID(bParam4))
	{
		return;
	}
	if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam4)))
	{
		bVar0 = true;
	}
	else
	{
		return;
	}
	GET_OBJECT_POSITION(bParam4, &vVar2);
	GET_OBJECT_ORIENTATION(bParam4, &vVar5);
	bVar8 = CREATE_ACTOR_IN_LAYOUT(bParam0, Function_132(), bParam3, vVar2, vVar5);
	SET_ACTOR_STAY_WITHIN_VOLUME(bVar8, bParam5, 2, 2);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar8, 1);
	AI_GOAL_LOOK_AT_NEUTRAL(bVar8, -1.0f);
	if (!IS_ACTOR_VALID(bVar8))
	{
		LOG_ERROR("CREATE_ACTOR_IN_LAYOUT failed.  Invalid actor returned in campfireCore");
	}
	if (!GRINGO_ACTOR_CAN_USE(GET_GRINGO_FROM_OBJECT(bParam4), "UseCase1", bVar8))
	{
		bVar0 = false;
		while (!IS_OBJECT_VALID(bParam4) && !bVar0)
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam4)))
			{
				if (GRINGO_ACTOR_CAN_USE(GET_GRINGO_FROM_OBJECT(bParam4), "UseCase1", bVar8))
				{
					bVar0 = true;
				}
			}
			bParam4 = OBJECT_ITERATOR_NEXT(bParam1);
		}
	}
	if (iParam6 != 0 && STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bParam4), "pee"))
	{
		bVar0 = false;
	}
	if (iParam6 == 0)
	{
		iVar1 = 4294967295;
	}
	if (bVar0)
	{
		SNAP_ACTOR_TO_GRINGO(bVar8, bParam4, "UseCase1", 1, 0, 0);
		TASK_USE_GRINGO(bVar8, GET_GRINGO_FROM_OBJECT(bParam4), "UseCase1", iVar1, 1);
		TASK_PRIORITY_SET(bVar8, 2);
	}
	else
	{
		TASK_WANDER_IN_VOLUME(bVar8, bParam5, -1.0f);
		TASK_PRIORITY_SET(bVar8, 2);
	}
	Function_83(bVar8, 0);
	SQUAD_JOIN(bVar8, bParam2);
	TASK_PRIORITY_SET(bVar8, 2);
}

void Function_83(bool bParam0, bool bParam1) //Position: 0x3FEB / 16363
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_CONVERSE_ENABLE(bParam0);
	}
	else
	{
		AI_CONVERSE_DISABLE(bParam0);
	}
	return;
}

void Function_84(bool bParam0) //Position: 0x400E / 16398
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		SNAP_OBJECT_TO_GROUND(bVar1, 99.9f, false, 1092616192);
		ROTATE_OBJECT_UPRIGHT_TO_GROUND(bVar1, 1, 5.0f);
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

var Function_85(var uParam0, bool bParam1, char* cParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x4052 / 16466
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	
	bVar0 = CREATE_PROPSET_IN_LAYOUT(uParam0, bParam1, cParam2, vParam3, vParam6);
	bVar1 = GET_LAYOUT_FROM_OBJECT(bVar0);
	bVar2 = CREATE_OBJECT_ITERATOR(bVar1);
	ITERATE_IN_LAYOUT(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		if (!GET_OBJECT_TYPE(bVar3) != 57)
		{
			if (!iParam9 != 4294967295)
			{
				GET_OBJECT_POSITION(bVar3, &vVar4);
				vVar4 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 4.0f, 0.0f) };
				iVar7 = GET_MATERIAL_AT_VECTOR(&vVar4);
				if (!iVar7 != 0 && (iVar7 && iParam9) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(bVar3);
				}
			}
			if (IS_OBJECT_VALID(bVar3))
			{
				if (DECOR_CHECK_EXIST(bVar3, "rstarInfoSnapping_Type"))
				{
					bVar8 = DECOR_CHECK_STRING(bVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(bVar3, 10.0f, bVar8, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(bVar3, 0);
				if (Function_150())
				{
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar3), 1);
				}
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bVar0));
	ADD_AI_COVERSET_FOR_PROPSET(bVar0);
	DESTROY_ITERATOR(bVar2);
	return bVar0;
}

void Function_86(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x419B / 16795
{
	var uVar0[5];
	int iVar6;
	
	if (*uParam0 != 4294967295)
	{
		*uParam0 = CLEAR_AREA_OF_TREE_TYPE(vParam4, (fParam3 + 2.0f), "");
	}
	if (*uParam1 != 4294967295)
	{
		*uParam1 = CLEAR_AREA_OF_BREAKABLE_TREES(vParam4, (fParam3 + 2.0f));
	}
	if (*uParam2 != 4294967295)
	{
		*uParam2 = CLEAR_AREA_OF_GRASS(vParam4, fParam3);
	}
	if (IS_LAYOUTREF_VALID(Global_30616))
	{
		if (Function_87(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
		{
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				if (IS_OBJECT_VALID(uVar0[iVar6]))
				{
					DESTROY_OBJECT(uVar0[iVar6]);
				}
				iVar6++;
			}
		}
	}
}

int Function_87(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x423C / 16956
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 0;
	iParam4 = iParam4;
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar5 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_ON_OBJECT_TYPE(bVar5, 12);
		ITERATE_ON_PARTIAL_NAME(bVar5, bParam1);
		bVar4 = START_OBJECT_ITERATOR(bVar5);
		while (IS_OBJECT_VALID(bVar4))
		{
			if (IS_OBJECT_VALID(bVar4))
			{
				GET_OBJECT_POSITION(bVar4, &vVar1);
				if (VDIST(vParam5, vVar1) > fParam3)
				{
					(*uParam2)[iVar0] = bVar4;
					iVar0++;
					if (iVar0 > iParam4)
					{
						DESTROY_ITERATOR(bVar5);
						return iVar0;
					}
				}
			}
			bVar4 = OBJECT_ITERATOR_NEXT(bVar5);
		}
		DESTROY_ITERATOR(bVar5);
		return iVar0;
	}
	return iVar0;
}

bool Function_88(int iParam0, int iParam1) //Position: 0x42D0 / 17104
{
	if (Function_92(&bLocal_7, &uLocal_3, 5, 1, 1, 1, 0, 0, 0, 0, 0))
	{
		bLocal_15 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/chair_sit_attach", &vLocal_9, 3.0f, 0);
		if (IS_GRINGO_VALID(bLocal_15))
		{
			if (Function_90(&bLocal_14, "ranch07mobile", iParam1))
			{
				bLocal_8 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_14, Function_132()));
				Global_3422[540].f_156 = bLocal_8;
				iParam0->f_12 = bLocal_14;
				Function_89();
				return 1;
			}
		}
	}
	return 0;
}

void Function_89() //Position: 0x4375 / 17269
{
	bLocal_13 = CREATE_LAYOUT("ranch07campfirelayout");
	Function_30(1);
	bLocal_12 = CREATE_VOLUME_IN_LAYOUT(bLocal_13, Function_132(), 2, -788.844f, 93.669f, 2406.71f, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 3.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_12);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_12);
	GRINGO_SET_USE_OWNERSHIP(bLocal_15, "UseCase1", bLocal_7);
	return;
}

bool Function_90(var uParam0, char* cParam1, int iParam2) //Position: 0x43D8 / 17368
{
	if (!IS_LAYOUTREF_VALID(*uParam0))
	{
		*uParam0 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(cParam1));
		return 0;
	}
	Function_91(*uParam0, iParam2);
	return 1;
	return 0;
}

void Function_91(bool bParam0, bool bParam1) //Position: 0x4403 / 17411
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(bParam0, bParam1, Function_132(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (IS_ATTACHMENT_VALID(iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
			}
		}
	}
	return;
}

bool Function_92(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, var uParam8, var uParam9, var uParam10) //Position: 0x4445 / 17477
{
	var uVar0;
	int iVar1;
	struct<9> Var2;
	
	if (Global_3378)
	{
		return 0;
	}
	if (Global_3380)
	{
		return 0;
	}
	if (Global_3391)
	{
		return 0;
	}
	if (HUD_IS_FADED() && uParam3)
	{
		return 0;
	}
	if (!Function_47(&(Global_3422[iParam240])) && uParam4)
	{
		return 0;
	}
	if (bParam7)
	{
		uVar0 = Function_97(StackVal, StackVal, *(&Global_3422[iParam240] + 52), 0, 1, 1);
		if (Function_95(uVar0))
		{
			if (Function_98(iParam1))
			{
				return 1;
			}
			return 0;
		}
	}
	if (IS_ACTOR_VALID(*uParam0))
	{
		Function_94();
		MEMORY_PREFER_RIDING(*uParam0, false);
		MEMORY_PREFER_WALKING(*uParam0, 1);
		if (!bParam6)
		{
			SET_DRAW_ACTOR(*uParam0, bParam6);
			DECOR_SET_BOOL(*uParam0, "hidden", true);
		}
		DECOR_SET_BOOL(*uParam0, "bACTOR_AVOID_SMALLBRAINS", true);
		if (!DECOR_CHECK_EXIST(*uParam0, "bPreventCampTask"))
		{
			TASK_STAND_STILL(*uParam0, -1.0f, 0, 0);
		}
		return 1;
	}
	if (StackVal || !Function_93(StackVal, (!WOULD_ACTOR_BE_VISIBLE(StackVal, &Global_3422[iParam240] + 52, 3212836864) || !bParam5), Global_34573, *(&Global_3422[iParam240] + 52), 50.0f))
	{
		iVar1 = Function_97(StackVal, StackVal, *(&Global_3422[iParam240] + 52), 0, 1, 1);
		if (Function_95(iVar1))
		{
			if (Function_98(iParam1))
			{
				if (!IS_ACTOR_VALID(*uParam0))
				{
					switch (iParam2)
					{
						case 0x00000004:
							vVar2 = { -784.289f, 93.83f, 2401.439f };
							break;
						
						default:
							vVar2 = { StackVal, StackVal, *(&Global_3422[iParam240] + 52) };
							break;
					}
					*uParam0 = Function_33(Global_3422[iParam240].f_36, 0, 1, vVar2.x, vVar2.y, vVar2.z, uParam8, uParam9, uParam10);
				}
			}
		}
	}
	return 0;
}

bool Function_93(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x460E / 17934
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_23(bParam0);
		if (VDIST(Function_23(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

void Function_94() //Position: 0x4698 / 18072
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(bVar0, GET_GC_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (GET_OBJECT_TYPE(bVar1) == 29)
		{
			if (DECOR_CHECK_EXIST(bVar1, "MissionCampfireActor"))
			{
				DESTROY_OBJECT(bVar1);
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

bool Function_95(int iParam0) //Position: 0x46FD / 18173
{
	if (!Function_96(iParam0))
	{
		return 1;
	}
	return Function_45(&(Global_29008[iParam0]), 4);
}

bool Function_96(bool bParam0) //Position: 0x4719 / 18201
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_97(vector3 vParam0, int iParam3, int iParam4, bool bParam5) //Position: 0x472F / 18223
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (!(StackVal != 2 && iParam3))
				{
					iVar1 = iVar0;
					if (StackVal || !(!(StackVal != 6 && iParam4) != 7 && iParam4))
					{
						iVar2 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	iVar3 = iVar2;
	if (iVar3 == 4294967295)
	{
		iVar3 = iVar1;
	}
	if (bParam5)
	{
		if (!iVar3 != 4294967295)
		{
		}
	}
	return iVar3;
}

bool Function_98(int iParam0) //Position: 0x47CF / 18383
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_102();
	iVar1 = 0;
	if (!Function_27(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_101(iParam0[iVar03], 8);
		}
		else if (Function_100())
		{
			iVar1 = 1;
			Function_101(iParam0[iVar03], 8);
		}
		Function_101(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_27(iParam0[iVar03], 4))
		{
			if (!Function_27(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_27(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_27(iParam0[03], 8) || iVar1));
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
				Function_101(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_27(iParam0[iVar03], 4))
		{
			if (!Function_27(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_101(iParam0[iVar03], 2);
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
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_101(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_101(iParam0[iVar03], 2);
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
	Function_99();
	return 1;
}

void Function_99() //Position: 0x4B4A / 19274
{
	if (!Function_147(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_100() //Position: 0x4B8A / 19338
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

void Function_101(var uParam0, int iParam1) //Position: 0x4BB5 / 19381
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_102() //Position: 0x4BC6 / 19398
{
	if (!Function_147(128))
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

void Function_103(int iParam0, bool bParam1) //Position: 0x4C08 / 19464
{
	char* cVar0[32];
	
	if (Global_83591.f_844)
	{
		strcpy(&cVar0, "a", 32);
		stradd(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		Function_104(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(*(iParam0 + 200), 2, StackVal) + Vector(2.5f, 0.0f, 1.5f), *(iParam0 + 212), &cVar0);
		strcpy(&cVar0, "d", 32);
		stradd(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		Function_104(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(*(iParam0 + 200), 4, StackVal) - Vector(1.5f, 0.0f, 2.5f), *(iParam0 + 212), &cVar0);
	}
	iParam0->f_4 = 1;
	*bParam1 = 250;
	return;
}

void Function_104(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, char* cParam8) //Position: 0x4C8C / 19596
{
	var uVar0;
	var uVar1;
	
	uVar0 = uVar0;
	uVar1 = uVar1;
	Function_105(StackVal, StackVal, StackVal, StackVal, &uVar0, &uVar1, uParam0, vParam2, vParam5, uParam1, 1, 1, cParam8, 0, 0);
}

void Function_105(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x4CB5 / 19637
{
	Function_120(StackVal, StackVal, StackVal, StackVal, uParam0, uParam1, uParam9, uParam2, vParam3, vParam6, uParam12);
	Function_110(*uParam0, *uParam1, uParam9, uParam10, uParam11);
	DECOR_SET_INT(*uParam1, Function_109(), Function_108(uParam10, uParam11, uParam9));
	DECOR_SET_INT(*uParam1, Function_107(), Function_106(uParam13, uParam14));
}

var Function_106(var uParam0, bool bParam1) //Position: 0x4D06 / 19718
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_107() //Position: 0x4D16 / 19734
{
	return "PackedGrass";
}

var Function_108(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4D2A / 19754
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

var Function_109() //Position: 0x4D4F / 19791
{
	return "PackedMetadata";
}

void Function_110(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x4D66 / 19814
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
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_119(), &uVar5))
				{
					Function_114(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_113();
				vVar0 = { StackVal, StackVal, Function_113() };
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
				Function_112();
				vVar0 = { StackVal, StackVal, Function_112() };
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
				Function_111();
				vVar0 = { StackVal, StackVal, Function_111() };
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

vector3 Function_111() //Position: 0x4E91 / 20113
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_112() //Position: 0x4EA2 / 20130
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_113() //Position: 0x4EB3 / 20147
{
	return 0.0f, 0.158f, -0.163f;
}

void Function_114(var uParam0, int iParam1) //Position: 0x4EC4 / 20164
{
	*iParam1 = Function_115(uParam0, Function_117(), 0);
	iParam1->f_4 = Function_115(uParam0, Function_117() + 8, Function_117());
	return;
}

var Function_115(var uParam0, int iParam1, bool bParam2) //Position: 0x4EE7 / 20199
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_116((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

var Function_116(bool bParam0) //Position: 0x4F06 / 20230
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_117() //Position: 0x4F12 / 20242
{
	return Function_118(39);
}

int Function_118(bool bParam0) //Position: 0x4F1D / 20253
{
	bool bVar0;
	
	if (bParam0 <= 0)
	{
		return 0x40000000;
	}
	bVar0 = false;
	while (bParam0 >= 0)
	{
		bParam0 = SHIFT_RIGHT(bParam0, true);
		bVar0++;
	}
	return bVar0;
}

var Function_119() //Position: 0x4F4B / 20299
{
	return "PackedWeapon";
}

int Function_120(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x4F60 / 20320
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_127();
			Function_112();
			vVar1 = { StackVal, StackVal, Function_112() };
			break;
		
		case 0x00000001:
			bVar0 = Function_126();
			Function_113();
			vVar1 = { StackVal, StackVal, Function_113() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_125();
			Function_111();
			vVar1 = { StackVal, StackVal, Function_111() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_124(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_122(Function_124()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_121(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_121() //Position: 0x5064 / 20580
{
	return "MPItemGiver";
}

struct<32> Function_122(bool bParam0) //Position: 0x5078 / 20600
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_123("0", &cVar8, ""), 4);
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

struct<32> Function_123(char* cParam0, char* cParam1, char* cParam2) //Position: 0x50E2 / 20706
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_124() //Position: 0x5101 / 20737
{
	return "PBox_";
}

var Function_125() //Position: 0x510F / 20751
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_126() //Position: 0x5135 / 20789
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_127() //Position: 0x515D / 20829
{
	return "p_gen_crateMultiplayerAmmo01x";
}

int Function_128(var uParam0, int iParam1) //Position: 0x5183 / 20867
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
	Function_130(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_129(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_129(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x52E4 / 21220
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_122("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

int Function_130(bool bParam0) //Position: 0x537F / 21375
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
						Function_131(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_22(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_131(iVar0);
						}
					}
					else if (Function_22(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_131(iVar0);
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
			Function_131(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_131(int iParam0) //Position: 0x54E0 / 21728
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

var Function_132() //Position: 0x5541 / 21825
{
	int iVar0;
	
	return iVar0;
}

var Function_133(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x5549 / 21833
{
	return Function_134(bParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_134(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x5562 / 21858
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_139();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_41(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_138(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_138(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_137(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_41(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_137(bVar0))
				{
					Function_136();
				}
				Function_135(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_41(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (bParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return bVar0;
}

void Function_135(int iParam0) //Position: 0x5855 / 22613
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			(*&Global_30742 + 8)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_136() //Position: 0x5909 / 22793
{
	int iVar0;
	
	if (Global_3402)
	{
		Global_30742 = GET_THIS_SCRIPT_ID();
		Global_30742.f_4 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		(*&Global_30742 + 8)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_137(bool bParam0) //Position: 0x5943 / 22851
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x5970 / 22896
{
	bool bVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(bParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(bParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(bParam0, bParam2, bParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		bVar0++;
	}
}

void Function_139() //Position: 0x5AC1 / 23233
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_136();
		}
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_136();
	return;
}

var Function_140(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5B0C / 23308
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_27(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_101(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_101(uParam0[iVar03], 8);
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

int Function_141() //Position: 0x5BDC / 23516
{
	int iVar0;
	
	switch (Global_29004)
	{
		case 0x00000000:
			iVar0 = (RAND_INT_RANGE(false, 8999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 55;
					break;
				
				case 0x00000001:
					return 74;
					break;
				
				case 0x00000002:
					return 96;
					break;
				
				case 0x00000003:
					return 101;
					break;
				
				case 0x00000004:
					return 102;
					break;
				
				case 0x00000005:
					return 151;
					break;
				
				case 0x00000006:
					return 164;
					break;
				
				case 0x00000007:
					return 214;
					break;
				
				case 0x00000008:
					return 217;
					break;
			}
			break;
		
		case 0x00000002:
			iVar0 = (RAND_INT_RANGE(false, 5999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 11;
					break;
				
				case 0x00000001:
					return 15;
					break;
				
				case 0x00000002:
					return 30;
					break;
				
				case 0x00000003:
					return 36;
					break;
				
				case 0x00000004:
					return 42;
					break;
				
				case 0x00000005:
					return 43;
					break;
			}
			break;
		
		case 0x00000001:
			iVar0 = (RAND_INT_RANGE(false, 4999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 275;
					break;
				
				case 0x00000001:
					return 313;
					break;
				
				case 0x00000002:
					return 314;
					break;
				
				case 0x00000003:
					return 319;
					break;
				
				case 0x00000004:
					return 320;
					break;
			}
			break;
	}
	return 55;
}

int Function_142() //Position: 0x5D38 / 23864
{
	int iVar0;
	
	switch (Global_29004)
	{
		case 0x00000000:
			iVar0 = (RAND_INT_RANGE(false, 5999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 180;
					break;
				
				case 0x00000001:
					return 181;
					break;
				
				case 0x00000002:
					return 182;
					break;
				
				case 0x00000003:
					return 232;
					break;
				
				case 0x00000004:
					return 233;
					break;
				
				case 0x00000005:
					return 208;
					break;
			}
			break;
		
		case 0x00000002:
			iVar0 = (RAND_INT_RANGE(false, 3999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 44;
					break;
				
				case 0x00000001:
					return 45;
					break;
				
				case 0x00000002:
					return 183;
					break;
				
				case 0x00000003:
					return 231;
					break;
			}
			break;
		
		case 0x00000001:
			iVar0 = (RAND_INT_RANGE(false, 4999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 300;
					break;
				
				case 0x00000001:
					return 301;
					break;
				
				case 0x00000002:
					return 302;
					break;
				
				case 0x00000003:
					return 322;
					break;
				
				case 0x00000004:
					return 324;
					break;
			}
			break;
	}
	return 180;
}

bool Function_143(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x5E58 / 24152
{
	var uVar0;
	int iVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	if (bParam3)
	{
		return 1;
	}
	bVar4 = false;
	Function_130(4294967295);
	iVar3 = 0;
	while (iVar3 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			bVar6 = DECOR_GET_INT(StackVal, "category");
			if (iParam2 != 0)
			{
				if (bVar6 != iParam2 && iParam2 != 256)
				{
					bVar4 = true;
				}
			}
			GET_VOLUME_CENTER(StackVal, &uVar0);
			if (iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(StackVal, *uParam0))
				{
					return 0;
				}
			}
			fVar5 = *uParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_144(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_144(var uParam0, int iParam1) //Position: 0x5F28 / 24360
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_145(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x5F46 / 24390
{
	var uVar0;
	int iVar3;
	vector3 vVar4;
	
	if (iParam3 == 4294967295)
	{
		iVar3 = 4294967294;
	}
	else
	{
		iVar3 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*iParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*iParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*iParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_36(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*iParam0 = (*iParam0 + 0.01f);
		iParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_36(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *iParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(false);
	}
	return 0;
}

bool Function_146(bool bParam0) //Position: 0x6078 / 24696
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

bool Function_147(int iParam0) //Position: 0x6097 / 24727
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_148() //Position: 0x60B3 / 24755
{
	if (Function_150())
	{
		return (Function_149() != 1 || Function_149() != 0);
	}
	return 0;
}

int Function_149() //Position: 0x60CC / 24780
{
	return Global_79349.f_16;
}

bool Function_150() //Position: 0x60D8 / 24792
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_151(int iParam0, bool bParam1, bool bParam2) //Position: 0x60E1 / 24801
{
	var uVar0;
	
	iParam0->f_4 = 0;
	iParam0->f_196 = 0;
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_122("campfire"), 4);
	iParam0->f_8 = CREATE_LAYOUT(&uVar0);
	if (IS_STRING_VALID(bParam1))
	{
		if (STRING_LENGTH(bParam1) >= 0)
		{
			iParam0->f_16 = GET_ASSET_ID(bParam1, 0);
			Function_152(iParam0 + 60, iParam0->f_16, 0);
		}
	}
	if (IS_STRING_VALID(bParam2))
	{
		if (STRING_LENGTH(bParam2) >= 0)
		{
			iParam0->f_20 = GET_ASSET_ID(bParam2, 7);
			Function_152(iParam0 + 60, iParam0->f_20, 7);
		}
	}
	return;
}

var Function_152(var uParam0, int iParam1, int iParam2) //Position: 0x615E / 24926
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_27(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_101(uParam0[iVar03], 4);
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

