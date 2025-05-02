//Decompiled with MagicRDR v1.0
//Function Count : 159
//Statics Count : 38
//Natives Count : 355
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 3;
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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	struct<2> Local_28 = { 0, 0 } ;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	float fLocal_33 = 0.0f;
	int iLocal_34 = 0;
	float fLocal_35 = 0.0f;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_28 = Vector(-3270.0f, 15,844f, 2726.0f);
	iLocal_31 = 2;
	iLocal_32 = 4;
	fLocal_33 = 70.0f;
	uScriptParam_0 = &uScriptParam_0;
	*(&iVar0 + 48) = 5;
	*(&iVar0 + 96) = 2;
	*(&iVar0 + 120) = 9;
	*(&iVar0 + 272) = 5;
	*(&iVar0 + 360) = 2;
	Function_158(&iVar0, "", "");
	while (IS_GRINGO_ACTIVE() && !IS_EXITFLAG_SET())
	{
		Function_28(&iVar0, GRINGO_GET_MY_OBJECT_REF(), 1, 0, 0, 0, "", -1.0f, 1, 0x43160000);
		GRINGO_WAIT(250);
	}
	Function_1(&iVar0);
	return;
}

void Function_1(struct<473> Param0) //Position: 0x98 / 152
{
	bool bVar0;
	
	Global_39620 = (Global_39620 - 1);
	if (Param0.f_428)
	{
		if (SQUAD_IS_VALID(&Param0 + 392))
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&Param0 + 392))
			{
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0)))
				{
					if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0), "nconvAdded"))
					{
						AI_CONVERSE_DISABLE(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0));
						AI_CONVERSE_REMOVE_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0));
					}
				}
				bVar0++;
			}
		}
		Param0.f_428 = 0;
	}
	if (SQUAD_IS_VALID(&Param0 + 392))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&Param0 + 392))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0)))
			{
				if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0), "nconvAdded"))
				{
					DECOR_REMOVE(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0), "nconvAdded");
				}
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0));
			}
			bVar0++;
		}
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		UNK_0xE18028C1(&Param0);
		DESTROY_OBJECT(&Param0);
	}
	if (Param0.f_464 >= 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(Param0.f_464);
	}
	if (Param0.f_468 >= 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(Param0.f_468);
	}
	if (Param0.f_468 >= 0)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(Param0.f_472);
	}
	Function_24(&Param0 + 120);
	if (IS_BLIP_VALID(&Param0 + 400))
	{
		REMOVE_BLIP(&Param0 + 400);
	}
	Function_3();
	if (IS_ITERATOR_VALID(&Param0 + 456))
	{
		DESTROY_ITERATOR(&Param0 + 456);
	}
	Function_2();
	RELEASE_LAYOUT_REF(&Param0 + 16);
	return;
}

void Function_2() //Position: 0x246 / 582
{
	Function_3();
	return;
}

void Function_3() //Position: 0x24F / 591
{
	RELEASE_LAYOUT_REF(&uLocal_26);
	Function_4(2, &uLocal_20, &iLocal_18, &uLocal_4, &uLocal_24, 4294967295);
	return;
}

void Function_4(bool bParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5) //Position: 0x26B / 619
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	var uVar10;
	
	bVar1 = false;
	if (SQUAD_IS_VALID(&iParam2))
	{
		if (&iParam5 > 0)
		{
			Function_21(&(Global_6667[&iParam528]));
		}
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam2))
		{
			iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam2, bVar0);
			if (IS_ACTOR_VALID(&iVar2))
			{
				if (IS_ACTOR_HUMAN(&iVar2))
				{
					if (&iVar2 != &iParam1)
					{
						SET_ACTOR_IS_COMPANION(&iVar2, 0);
						SET_ACTOR_FACTION(&iVar2, 21);
						MEMORY_CONSIDER_AS(&iVar2, &Global_54076, 2);
						if (!Global_6621)
						{
							AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iVar2, 1);
						}
					}
				}
				else if (IS_ACTOR_VEHICLE(&iVar2))
				{
					bVar3 = false;
					while (bVar3 <= GET_NUM_DRAFT_POSITIONS(&iVar2))
					{
						uVar4 = GET_DRAFT_ACTOR(bVar3, &iVar2);
						if (IS_ACTOR_VALID(&uVar4))
						{
							SET_ACTOR_IS_COMPANION(&uVar4, 0);
							SET_ACTOR_FACTION(&uVar4, 21);
							MEMORY_CONSIDER_AS(&uVar4, &Global_54076, 2);
						}
						bVar3++;
					}
				}
			}
			bVar0++;
		}
		if (!Global_6621)
		{
			Function_20(&iParam2);
		}
		SQUAD_GOALS_CLEAR(&iParam2);
		if (Function_19(&iParam2, &Global_54076))
		{
			bVar1 = true;
		}
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam2))
		{
			iVar5 = SQUAD_GET_ACTOR_BY_INDEX(&iParam2, bVar0);
			if (IS_ACTOR_VALID(&iVar5))
			{
				uVar6 = GET_CURRENT_GRINGO(&iVar5);
				if (IS_GRINGO_VALID(&uVar6) && Global_6621)
				{
					if (Function_18(GET_OBJECT_FROM_GRINGO(&uVar6), &uParam4))
					{
						DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar6), "missioncampfireobj", 1);
						GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(&uVar6), &Global_10998);
					}
				}
				if (&iVar5 != &iParam1)
				{
					RELEASE_ACTOR(&iVar5);
				}
			}
			bVar0++;
		}
	}
	bVar9 = false;
	switch (&iParam5)
	{
		case 0x00000037:
		case 0x00000038:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
		case 0x00000033:
		case 0x00000039:
			if (GET_LAST_ATTACKER(&iParam1) != &Global_54076 || ((((Global_6667[&iParam528].f_208 && !Function_13(&iParam1, &uVar8, &uVar7, 0, 0, 0x40400000)) && !HUD_IS_FADED()) && !HUD_IS_FADING()) && !Global_6638))
			{
				UI_SET_TEXT("Death_Explanation", "kill_family_help");
				KILL_ACTOR(&Global_54076);
			}
			else if (Global_6667[&iParam528].f_208 && Function_13(&iParam1, &uVar8, &uVar7, 0, 0, 0x40400000))
			{
				if (bParam0 == 11)
				{
					Function_12(StackVal, &iParam1, Vector(-105,606f, 119,513f, 1362,295f), 10.0f, 1, 120.0f, 0x40c00000);
				}
				if (bParam0 == 12)
				{
					Function_12(StackVal, &iParam1, Vector(-104,413f, 119,521f, 1367,917f), 10.0f, 1, 120.0f, 0x40c00000);
				}
				if (bParam0 == 13)
				{
					Function_12(StackVal, &iParam1, Vector(-102,615f, 119,513f, 1364,342f), 10.0f, 1, 120.0f, 0x40c00000);
				}
				SAY_SINGLE_LINE_CONTEXT_OVER_PAIN(&iParam1, 60, &Global_54076, 1, 0, 0, 4294967295, 4294967295, 0);
				bVar9 = true;
			}
			Function_9(&iParam5);
			break;
	}
	if (DECOR_CHECK_EXIST(&iParam1, "bACTOR_AVOID_SMALLBRAINS"))
	{
		DECOR_REMOVE(&iParam1, "bACTOR_AVOID_SMALLBRAINS");
	}
	Function_6(bParam0, DECOR_CHECK_EXIST(&iParam1, "hidden"), (Global_6621 || bVar9), 1, 1);
	if (IS_ACTOR_VALID(&iParam1))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam1);
		MEMORY_ALLOW_SHOOTING(&iParam1, false);
		MEMORY_PREFER_MELEE(&iParam1, 0);
		SET_ACTOR_FACTION(&iParam1, 20);
		MEMORY_CONSIDER_AS(&iParam1, &Global_54076, false);
		if (!Global_6621)
		{
			AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iParam1, 1);
		}
	}
	if (!Global_6621 && !bVar9)
	{
		switch (&iParam5)
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
				if (SQUAD_IS_VALID(&iParam2))
				{
					bVar0 = false;
					while (bVar0 <= SQUAD_GET_SIZE(&iParam2))
					{
						uVar10 = SQUAD_GET_ACTOR_BY_INDEX(&iParam2, bVar0);
						if (IS_ACTOR_VALID(&uVar10))
						{
							if (bVar1)
							{
								TASK_FLEE_ACTOR(&uVar10, &Global_54076, 50.0f, -1.0f, 0, 0, 0);
							}
							else
							{
								Function_5(&uVar10, 1);
								TASK_WANDER(&uVar10, -1.0f);
							}
						}
						bVar0++;
					}
				}
				break;
		}
	}
	else if (Global_6621)
	{
	}
	Function_24(&uParam3);
	if (IS_LAYOUTREF_VALID(&uParam4))
	{
		RELEASE_LAYOUT_OBJECTS(&uParam4);
		RELEASE_LAYOUT_REF(&uParam4);
	}
}

void Function_5(var uParam0, bool bParam1) //Position: 0x6DD / 1757
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[0]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[0]), 0);
	}
	return;
}

int Function_6(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x711 / 1809
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
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
	if (Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 0;
		STREAMING_EVICT_ACTOR(&Global_15402[iParam014] + 16, 4294967295);
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		if (uParam4 && IS_ACTOR_HUMAN(&Global_15402[iParam014] + 8))
		{
			ACTOR_HOLSTER_WEAPON(&Global_15402[iParam014] + 8, 1);
		}
		if (&bParam1)
		{
			RESET_ANIM_SET_FOR_ACTOR(&Global_15402[iParam014] + 8, 1);
			TASK_CLEAR(&Global_15402[iParam014] + 8);
			MEMORY_CLEAR_ALL(&Global_15402[iParam014] + 8);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&Global_15402[iParam014] + 8, 0);
		}
		Function_8(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_7(&Global_15402[iParam014] + 8);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			MEMORY_CLEAR_RIDING_PREFERENCE(&Global_15402[iParam014] + 8);
			DEREFERENCE_ACTOR(&Global_15402[iParam014] + 8);
			if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
			{
				DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
			}
			if (&bParam2)
			{
				DECOR_SET_BOOL(&(Global_15402[iParam014]), "KeepLastTask", 1);
			}
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
			uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
			bVar1 = GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 0);
		}
		else
		{
			if (&bParam1)
			{
				DESTROY_ACTOR(&Global_15402[iParam014] + 8);
			}
			else if (&bParam3)
			{
				RELEASE_ACTOR(&Global_15402[iParam014] + 8);
				if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
				{
					DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
				}
			}
			bVar1 = true;
		}
	}
	(&Global_15402[iParam014] + 8) = "";
	return bVar1;
}

void Function_7(var uParam0) //Position: 0xA53 / 2643
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		}
	}
	return;
}

void Function_8(int iParam0) //Position: 0xA86 / 2694
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

void Function_9(int iParam0) //Position: 0xA9D / 2717
{
	if (Function_11(&Global_6667[iParam028] + 184, 8388608))
	{
		Function_10(&Global_6667[iParam028] + 184, 8388608);
	}
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0xAC9 / 2761
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_11(int iParam0, int iParam1) //Position: 0xAE3 / 2787
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(float fParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6) //Position: 0xB00 / 2816
{
	var uVar0;
	bool bVar1;
	
	uVar0 = FIND_NEAREST_COVER_LOCATION(&fParam1, bParam3, GET_HEADING(&fParam0), 120.0f, 7);
	if (!IS_COVER_LOCATION_VALID(&uVar0))
	{
		PRINTSTRING("Failed to find cover location for ");
		PRINTSTRING(GET_ACTOR_NAME(&fParam0));
		PRINTSTRING(", hiding at position instead.");
		PRINTNL();
		bVar1 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(0, &fParam1, 4);
		TASK_CROUCH(false, &fParam5);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&fParam0, bVar1);
		TASK_SEQUENCE_RELEASE(bVar1, 1);
		TASK_PRIORITY_SET(&fParam0, bParam4);
	}
	else
	{
		TASK_HIDE_AT_COVER(&fParam0, &uVar0, &fParam5, &iParam6, 1);
		TASK_PRIORITY_SET(&fParam0, bParam4);
	}
}

bool Function_13(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0xBC6 / 3014
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_17(&iParam0, &Global_54076);
		if (!Function_16(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_14(&iParam0);
				return 1;
			}
		}
		if (!Function_16(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_14(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_14(&iParam0);
				return 1;
			}
		}
		if (!Function_16(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_14(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_14(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_16(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_14(&iParam0);
				return 1;
			}
		}
		if (!Function_16(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_14(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_14(int iParam0) //Position: 0xD8F / 3471
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_15(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_15(int iParam0) //Position: 0xDCC / 3532
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

bool Function_16(var uParam0, int iParam1) //Position: 0xDE5 / 3557
{
	return (uParam0 && iParam1) == 0;
}

var Function_17(var uParam0, int iParam1) //Position: 0xDF2 / 3570
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_18(bool bParam0, var uParam1) //Position: 0xEE7 / 3815
{
	var uVar0;
	int iVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam1))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam1);
	ITERATE_IN_LAYOUT(&uVar0, &uParam1);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (&iVar1 == &bParam0)
		{
			DESTROY_ITERATOR(&uVar0);
			return 1;
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 0;
}

bool Function_19(var uParam0, int iParam1) //Position: 0xF4D / 3917
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (GET_LAST_ATTACKER(&uVar2) == &iParam1)
			{
				CLEAR_LAST_HIT(&uVar2);
				iVar1 = 1;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_20(int iParam0) //Position: 0xFAF / 4015
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

int Function_21(struct<209> Param0) //Position: 0xFE4 / 4068
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	int iVar4;
	
	iVar0 = Param0.f_56;
	if (iVar0 < 16 || iVar0 > 0)
	{
		return 0;
	}
	if (Global_6657)
	{
		return 0;
	}
	if (!Param0.f_208)
	{
		if (SQUAD_IS_VALID(&Param0 + 216))
		{
			bVar3 = false;
			while (bVar3 <= SQUAD_GET_SIZE(&Param0 + 216))
			{
				iVar4 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 216, bVar3);
				if (IS_ACTOR_VALID(&iVar4))
				{
					if (!IS_ACTOR_VEHICLE(&iVar4))
					{
						if (GET_LAST_ATTACKER(&iVar4) == &Global_54076)
						{
							Function_20(&Param0 + 216);
							SQUAD_GOALS_CLEAR(&Param0 + 216);
							Param0.f_208 = 1;
							if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
									}
								}
							}
							return 1;
						}
						if (Function_13(&iVar4, &uVar2, &uVar1, 0, 0, 0x40400000) && ((Param0.f_56 != 11 || Param0.f_56 != 12) || Param0.f_56 != 13))
						{
							Function_20(&Param0 + 216);
							SQUAD_GOALS_CLEAR(&Param0 + 216);
							Param0.f_208 = 1;
							if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
									}
								}
							}
							return 1;
						}
					}
					else if (GET_LAST_ATTACK_TARGET(&Global_54076) == &iVar4)
					{
						Function_20(&Param0 + 216);
						SQUAD_GOALS_CLEAR(&Param0 + 216);
						Param0.f_208 = 1;
						if (GET_OBJECT_TYPE(&Param0 + 64) == 12)
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
							{
								if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
								{
									GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
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
	else if (Function_22(StackVal, &Global_54076, *(&Param0 + 88)) < 100.0f)
	{
		Param0.f_208 = 0;
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
		{
			if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), true);
			}
		}
		return 0;
	}
	return 1;
	return 0;
}

float Function_22(var uParam0, struct<2> Param1) //Position: 0x11FD / 4605
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_23(&uParam0);
		Var0 = Function_23(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_23(int iParam0) //Position: 0x1274 / 4724
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

void Function_24(int iParam0) //Position: 0x12E0 / 4832
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_25(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_25(struct<2>[] Param0, int iParam1) //Position: 0x1308 / 4872
{
	if (Function_27(&(Param0[iParam12]), 4))
	{
		if (Function_27(&(Param0[iParam12]), 1))
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
			Function_26(&(Param0[iParam12]), 1);
			Function_26(&(Param0[iParam12]), 2);
			Function_26(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_26(struct<13> Param0) //Position: 0x1453 / 5203
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_27(struct<13> Param0) //Position: 0x1470 / 5232
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_28(struct<477> Param0) //Position: 0x148E / 5262
{
	var uVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var9;
	bool bVar11;
	int iVar12;
	
	uParam5 = uParam5;
	bVar1 = false;
	bVar11 = 0 & Function_157();
	iVar12 = 600;
	if (!Function_156(8))
	{
		Param0.f_8 = 12;
	}
	if (bVar11)
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
			if (Function_155("npressDemo"))
			{
				if (((Global_38379 + 2000.0f) < GET_CURRENT_GAME_TIME() && !bParam2) && !Global_6611)
				{
					iVar12 = 1000;
					break;
				}
			}
			else if ((((Global_38379 + 200.0f) < GET_CURRENT_GAME_TIME() && !bParam2) && !Global_6611) && 1)
			{
				iVar12 = 1000;
				break;
			}
			if ((!bParam2 && !Global_6611) && 1)
			{
				if (GET_WEATHER() != 3 || GET_WEATHER() != 4)
				{
					iVar12 = 1000;
					break;
				}
			}
			GET_OBJECT_POSITION(&uParam1, &Var7);
			GET_OBJECT_ORIENTATION(&uParam1, &Param0 + 336);
			if (Global_99472 == 32)
			{
				iLocal_31 = iLocal_32;
			}
			if (Global_6611)
			{
				if (Function_22(StackVal, &Global_54076, Var7) < 10.0f)
				{
					break;
				}
			}
			if ((Global_39620 + 1 > iLocal_31 || bParam2) || Global_6611)
			{
				if (Function_154(&Var7, 50.0f, &Param0 + 324, 4294967295))
				{
					if (((!bParam2 && !Function_152(&Param0 + 324, &fLocal_33, 256, 0)) && !Global_6611) && 1)
					{
						iVar12 = 1000;
					}
					else
					{
						if (UNK_0x214AFB8C(&Param0 + 32))
						{
							STREAMING_REQUEST_PROP(&Param0 + 32, false);
						}
						if (UNK_0x214AFB8C(&Param0 + 40))
						{
							STREAMING_REQUEST_PROPSET(&Param0 + 40);
						}
						uVar3 = FIND_NAMED_POPULATION_SET(&uParam6);
						if (Global_6623)
						{
							if (STRING_CONTAINS_STRING(&uParam6, "bad_guys"))
							{
								Param0.f_8 = 12;
								break;
							}
						}
						if ((IS_POPSET_VALID(&uVar3) && IS_POPSET_VALID(&(Global_46972[6]))) && !bParam2)
						{
							bVar1 = false;
							if ((iParam3 < 1 && !STRING_CONTAINS_STRING(&uParam6, "bad_guys")) && !STRING_CONTAINS_STRING(&uParam6, "law"))
							{
								(*&Param0 + 48)[0] = Function_151();
								(*&Param0 + 48)[1] = Function_150();
								Function_149(&Param0 + 120, (*&Param0 + 48)[0], 2, 0);
								Function_149(&Param0 + 120, (*&Param0 + 48)[1], 2, 0);
								bVar1 = 2;
							}
							if (iParam3 >= 1)
							{
								(*&Param0 + 96)[0] = Function_142(&(Global_46972[6]), 0, 4, 23, 1);
								(*&Param0 + 96)[1] = Function_142(&(Global_46972[6]), 0, 4, 23, 1);
								if ((*&Param0 + 96)[0] == 4294967295)
								{
									(*&Param0 + 96)[0] = 976;
								}
								if ((*&Param0 + 96)[1] == 4294967295)
								{
									(*&Param0 + 96)[1] = 980;
								}
								Function_149(&Param0 + 120, (*&Param0 + 96)[0], 2, 0);
								Function_149(&Param0 + 120, (*&Param0 + 96)[1], 2, 0);
							}
							else
							{
								(*&Param0 + 96)[0] = Function_142(&(Global_46972[6]), 0, 0, 23, 1);
								if ((*&Param0 + 96)[0] == 4294967295)
								{
									(*&Param0 + 96)[0] = 977;
								}
								(*&Param0 + 96)[1] = 976;
								Function_149(&Param0 + 120, (*&Param0 + 96)[0], 2, 0);
							}
							while (bVar1 <= iParam3)
							{
								if ((bVar1 != 2 && !STRING_CONTAINS_STRING(&uParam6, "bad_guys")) && !STRING_CONTAINS_STRING(&uParam6, "law"))
								{
									(*&Param0 + 48)[bVar1] = Function_142(&uVar3, 1, 1, 4294967295, 1);
								}
								else
								{
									(*&Param0 + 48)[bVar1] = Function_142(&uVar3, 1, 0, 4294967295, 1);
								}
								if ((*&Param0 + 48)[bVar1] == 4294967295)
								{
									Param0.f_8 = 12;
									break;
								}
								Function_149(&Param0 + 120, (*&Param0 + 48)[bVar1], 2, 0);
								bVar1++;
							}
						}
						else if (!bParam2 && 1)
						{
							return 4294967295;
						}
						if (!bParam2 || 0)
						{
							uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, Function_141(), 4,203895E-45f, *(&Param0 + 324), Vector(0.0f, 0.0f, 0.0f), Vector(fLocal_33, 20.0f, fLocal_33));
							DECOR_SET_INT(&uVar0, "script", GET_THIS_SCRIPT_ID());
							DECOR_SET_INT(&uVar0, "category", 256);
							Global_39620++;
							Function_137(&uVar0, 0);
							*(&Param0 + 480) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 16, Function_141(), 4,203895E-45f, *(&Param0 + 324), Vector(0.0f, 0.0f, 0.0f), Vector((&fParam7 + 1,5f), 9.0f, (&fParam7 + 1,5f)));
						}
						Param0.f_8 = 1;
					}
				}
			}
			else
			{
				iVar12 = 1000;
			}
			break;
		
		case 0x00000006:
			Function_112(&Param0, &iVar12);
			break;
		
		case 0x00000001:
			if (Function_108(&Param0 + 120))
			{
				Param0.f_8 = 4;
			}
			iVar12 = 0;
			break;
		
		case 0x00000004:
			if (Function_71(&Param0, &uParam1))
			{
				if (IS_OBJECT_VALID(&Param0 + 352))
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 352), false);
				}
				Param0.f_8 = 8;
			}
			else if (!bParam2)
			{
				LOG_ERROR("Couldn't create the campsire layout");
				Param0.f_8 = 12;
				break;
			}
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				Param0.f_476 = 0;
				*(&Param0 + 456) = CREATE_OBJECT_ITERATOR(&Param0 + 24);
				ITERATE_ON_OBJECT_TYPE(&Param0 + 456, 12);
				ITERATE_IN_LAYOUT(&Param0 + 456, &Param0 + 24);
				START_OBJECT_ITERATOR(&Param0 + 456);
				bVar1 = false;
				uVar4 = OBJECT_ITERATOR_CURRENT(&Param0 + 456);
				while (IS_OBJECT_VALID(&uVar4))
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uVar4)) && bVar1 > iParam3)
					{
						DECOR_SET_BOOL(&uVar4, "ForceAllowSun", 1);
						if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(&uVar4), "horse") && 0)
						{
							DESTROY_OBJECT(&uVar4);
						}
						else if (GRINGO_USABLE_BY_ACTOR_ENUM((*&Param0 + 48)[bVar1], GET_GRINGO_FROM_OBJECT(&uVar4), "UseCase1"))
						{
							*(&Param0 + 272[bVar1]) = &uVar4;
							GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uVar4), "UseCase1", "UseAnim", (*&Param0 + 48)[bVar1]);
							bVar1++;
							Param0.f_476++;
							PRINTINT(Param0.f_476);
						}
					}
					uVar4 = OBJECT_ITERATOR_NEXT(&Param0 + 456);
				}
				if (IS_ITERATOR_VALID(&Param0 + 456))
				{
					DESTROY_ITERATOR(&Param0 + 456);
				}
				Param0.f_8 = 9;
			}
			else
			{
				Param0.f_8 = 2;
			}
			break;
		
		case 0x00000009:
			PRINTINT(Param0.f_476);
			bVar5 = true;
			bVar1 = false;
			while (bVar1 <= Param0.f_476)
			{
				if (IS_OBJECT_VALID(&Param0 + 272[bVar1]))
				{
					if (!GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&Param0 + 272[bVar1]), "UseCase1", "UseAnim", (*&Param0 + 48)[bVar1]))
					{
						bVar5 = false;
					}
				}
				bVar1++;
			}
			if (bVar5)
			{
				Param0.f_8 = 2;
			}
			break;
		
		case 0x00000002:
			if (STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 324), 10.0f))
			{
				if (((Function_22(StackVal, &Global_54076, *(&Param0 + 324)) < 120.0f || bParam2) || Global_6611) || 0)
				{
					if (UNK_0x214AFB8C(&Param0 + 32))
					{
						if (IS_OBJECT_VALID(&Param0 + 352))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 352), true);
						}
						uVar6 = CREATE_PROP_IN_LAYOUT_BY_ID(&Param0 + 16, Function_141(), &Param0 + 32, *(&Param0 + 324), *(&Param0 + 336), 0);
						Param0 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, Function_141(), "amb_campfire_light", &uVar6, Vector(0.0f, 0.0f, 0.0f), 1, &uVar6);
						UNK_0x6745191B(StackVal, &Param0, Vector(0.0f, 0.0f, 0.0f));
						if (GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_OBJECT(&uVar6), "center", &Var7, &Var9))
						{
							Var7 = -Vector(Var7, StackVal, StackVal);
							GET_OBJECT_RELATIVE_POSITION(&uVar6, Var7, &Var9);
							SET_OBJECT_POSITION(&uVar6, Var9);
							SNAP_OBJECT_TO_GROUND(&uVar6, 10.0f, true, 1092616192);
						}
						else
						{
							LOG_ERROR("can't find the center locator for campfire");
						}
					}
					else if (!bParam2 && 1)
					{
						LOG_ERROR("Campfire beacon asset isn't valid.. you won't see a campfire");
					}
					Function_69(StackVal, &Param0 + 464, &Param0 + 472, &Param0 + 468, &fParam7, *(&Param0 + 324));
					Param0.f_8 = 5;
					iVar12 = 0;
					Param0.f_432 = 1;
				}
			}
			else
			{
				iVar12 = 250;
			}
			break;
		
		case 0x00000005:
			DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "DontRun", 1);
			if (UNK_0x214AFB8C(&Param0 + 40))
			{
				NET_OBJECT_REPLICATION_MODE_START(2, 0);
				Function_68(StackVal, StackVal, &Param0 + 16, Function_141(), GET_ASSET_NAME(&Param0 + 40, 7), *(&Param0 + 324), *(&Param0 + 336), 4294967295);
				NET_OBJECT_REPLICATION_MODE_END(2);
				DECOR_SET_BOOL(&uParam1, "PropsCreated", 1);
			}
			else if (!bParam2)
			{
				LOG_ERROR("Propset ID invalid.  Campfire problem");
				Param0.f_8 = 12;
				break;
			}
			Function_67(&Param0 + 24);
			STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(&Param0 + 24));
			bVar1 = false;
			Param0.f_8 = 10;
			iVar12 = 0;
			break;
		
		case 0x0000000A:
			if (!bParam2 && 1)
			{
				*(&Param0 + 392) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 24, Function_141()));
				*(&Param0 + 456) = CREATE_OBJECT_ITERATOR(&Param0 + 24);
				bVar1 = false;
				while (bVar1 <= iParam3)
				{
					Function_65(&Param0 + 16, &Param0 + 456, &Param0 + 392, (*&Param0 + 48)[bVar1], &Param0 + 272[bVar1], &Param0 + 480, bVar1);
					bVar1++;
				}
				if (iParam3 >= 1)
				{
					Function_64(&Param0 + 24, &Param0 + 16, &Param0 + 96, 2, &Param0 + 360);
				}
				else
				{
					Function_64(&Param0 + 24, &Param0 + 16, &Param0 + 96, 1, &Param0 + 360);
				}
				if (SQUAD_IS_VALID(&Param0 + 392))
				{
					if (SQUAD_GET_SIZE(&Param0 + 392) != 0 && iParam3 < 0)
					{
						LOG_ERROR("Campfire no spawn problem! Report to AlanB.");
						Param0.f_8 = 12;
						break;
					}
				}
				if (STRING_CONTAINS_STRING(&uParam6, "bad_guys"))
				{
					Param0.f_416 = 1;
				}
				ITERATE_ON_OBJECT_TYPE(&Param0 + 456, 15);
				ITERATE_IN_LAYOUT(&Param0 + 456, &Param0 + 24);
				uVar2 = START_OBJECT_ITERATOR(&Param0 + 456);
				while (IS_OBJECT_VALID(&uVar2))
				{
					if (IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(&uVar2)))
					{
						*(&Param0 + 384) = GET_ACTOR_FROM_OBJECT(&uVar2);
					}
					uVar2 = OBJECT_ITERATOR_NEXT(&Param0 + 456);
				}
				if (IS_ITERATOR_VALID(&Param0 + 456))
				{
					DESTROY_ITERATOR(&Param0 + 456);
				}
			}
			if ((bParam2 || !bParam4) || bVar11)
			{
				if (IS_OBJECTSET_VALID(&Param0 + 448))
				{
					bVar1 = false;
					bVar1 = false;
					while (bVar1 <= GET_OBJECTSET_SIZE(&Param0 + 448))
					{
						DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &Param0 + 448));
						bVar1++;
					}
				}
				if (IS_OBJECT_VALID(&Param0 + 352))
				{
					DESTROY_OBJECT(&Param0 + 352);
				}
			}
			Param0.f_8 = 11;
			iVar12 = 0;
			break;
		
		case 0x0000000B:
			if (Global_6611)
			{
			}
			if ((!bParam2 && !bVar11) && !Param0.f_428)
			{
				if (SQUAD_IS_VALID(&Param0 + 392))
				{
					if (SQUAD_GET_SIZE(&Param0 + 392) >= 1)
					{
						if (IS_STRING_VALID(&uParam6))
						{
							if ((!STRING_CONTAINS_STRING(&uParam6, "bad") && !STRING_CONTAINS_STRING(&uParam6, "law")) && &iParam8 != 1)
							{
								if (VDIST(*(&Param0 + 324), Global_54078) > 10.0f)
								{
									if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "rand_idle_sit_ground_player"))
									{
										AI_CONVERSE_ENABLE(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, false));
										AI_CONVERSE_ENABLE(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, true));
										AI_CONVERSE_ADD_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, false));
										AI_CONVERSE_ADD_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, true));
										DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, false), "nconvAdded", 1);
										DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, true), "nconvAdded", 1);
										AI_GOAL_LOOK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, false));
										AI_GOAL_LOOK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, true));
										Function_53(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, false));
										fLocal_35 = GET_CURRENT_GAME_TIME();
										Param0.f_428 = 1;
									}
								}
							}
						}
					}
				}
			}
			if ((Param0.f_428 != 1 && !IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "rand_idle_sit_ground_player")) && !Param0.f_436)
			{
				if (SQUAD_IS_VALID(&Param0 + 392) && SQUAD_GET_SIZE(&Param0 + 392) < 0)
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, false)))
					{
						if ((GET_CURRENT_GAME_TIME() - fLocal_35) < 10.0f)
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(&Global_54076, "PLAYER_COMMENT_ON_STORY", SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, false), "GENERIC_GOODBYE", 1, 1, 5, 0);
						}
						Param0.f_436 = 1;
					}
					else
					{
						Param0.f_436 = 1;
					}
				}
				else
				{
					Param0.f_436 = 1;
				}
			}
			if (!bParam2 && !bVar11)
			{
				if (SQUAD_IS_VALID(&Param0 + 392))
				{
					bVar1 = false;
					while (bVar1 <= SQUAD_GET_SIZE(&Param0 + 392))
					{
						if (Function_13(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), &iLocal_34, &Param0 + 488, 0, 0, 0x40400000))
						{
							SET_ACTOR_ALLOW_WEAPON_REACTIONS(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), 1);
							AI_QUICK_EXIT_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), 1);
							Param0.f_440 = 1;
							Function_52(&Param0 + 392, 1);
							Function_51(&Param0 + 392, &Global_54076, -1.0f, -1.0f, 0, 2);
							if (iLocal_34 == 8)
							{
								TASK_KILL_CHAR(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), &Global_54076);
							}
							Param0.f_8 = 12;
							break;
						}
						bVar1++;
					}
					bVar1 = false;
					while (bVar1 <= Param0.f_360)
					{
						if (IS_ACTOR_VALID(&Param0 + 360[bVar1]))
						{
							if (GET_LAST_ATTACKER(&Param0 + 360[bVar1]) != &Global_54076 || GET_RIDER(&Param0 + 360[bVar1]) != &Global_54076)
							{
								Param0.f_440 = 1;
								TASK_CLEAR(&Param0 + 360[bVar1]);
								Function_52(&Param0 + 392, 1);
								Function_51(&Param0 + 392, &Global_54076, -1.0f, -1.0f, 0, 2);
								TASK_KILL_CHAR(Function_50(&Param0 + 392), &Global_54076);
								Param0.f_8 = 12;
								break;
							}
						}
						bVar1++;
					}
				}
			}
			if (bParam4 && !bVar11)
			{
				Function_46(&Param0, bParam2, 0);
			}
			else if (Param0.f_416)
			{
				Function_46(&Param0, bParam2, 1);
			}
			if (!Param0.f_428)
			{
			}
			if (GET_VEHICLE(Function_45()) != &Param0 + 384 && IS_ACTOR_VALID(&Param0 + 384))
			{
				Function_44(&Param0 + 392, Function_45(), 4);
				Function_43(&Param0 + 392, Function_45());
			}
			if (VDIST(*(&Param0 + 324), Global_54078) < (&fParam9 + 30.0f))
			{
				Param0.f_8 = 12;
			}
			Var7 = *(&Param0 + 324);
			Var7.f_4 = (StackVal + 0,5f);
			if (!bParam2 && !bVar11)
			{
				if (Function_42(StackVal, Var7, 1.0f, 80.0f, 1, 1, 0))
				{
					Global_38379 = GET_CURRENT_GAME_TIME();
				}
				if (SQUAD_IS_VALID(&Param0 + 392))
				{
					if (Function_41(&Param0 + 392, 1.0f, 80.0f, 1, 1))
					{
						Global_38379 = GET_CURRENT_GAME_TIME();
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (Param0.f_428)
			{
				if (SQUAD_IS_VALID(&Param0 + 392))
				{
					bVar1 = false;
					while (bVar1 <= SQUAD_GET_SIZE(&Param0 + 392))
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1)))
						{
							if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), "nconvAdded"))
							{
								AI_CONVERSE_DISABLE(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1));
								AI_CONVERSE_REMOVE_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1));
							}
						}
						bVar1++;
					}
				}
				Param0.f_428 = 0;
			}
			bVar1 = false;
			while (bVar1 <= Param0.f_360)
			{
				if (IS_ACTOR_VALID(&Param0 + 360[bVar1]))
				{
					TASK_WANDER(&Param0 + 360[bVar1], 3212836864);
					GIVE_OBJECT_TO_LAYOUT(&Param0 + 360[bVar1], &Global_43578);
					RELEASE_ACTOR(&Param0 + 360[bVar1]);
				}
				bVar1++;
			}
			if (SQUAD_IS_VALID(&Param0 + 392))
			{
				bVar1 = false;
				while (bVar1 <= SQUAD_GET_SIZE(&Param0 + 392))
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1)))
					{
						if (!Param0.f_440)
						{
							MEMORY_PREFER_RIDING(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), false);
							Function_32(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), 4, 0, 2);
						}
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1));
					}
					bVar1++;
				}
			}
			Param0.f_432 = 0;
			if (IS_OBJECT_VALID(&Param0))
			{
				UNK_0xE18028C1(&Param0);
				DESTROY_OBJECT(&Param0);
			}
			if (IS_ITERATOR_VALID(&Param0 + 456))
			{
				DESTROY_ITERATOR(&Param0 + 456);
			}
			Function_3();
			if (SQUAD_IS_VALID(&Param0 + 392))
			{
				Function_30(&Param0 + 392, 0, 0, 0);
			}
			RELEASE_LAYOUT_OBJECTS(&Param0 + 16);
			Param0.f_8 = 13;
			iVar12 = 250;
			break;
		
		case 0x0000000D:
			break;
	}
	Function_29(&Param0);
	return iVar12;
}

void Function_29(struct<62> Param0) //Position: 0x264D / 9805
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	return;
}

void Function_30(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x265F / 9823
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (IS_ACTOR_RIDING_VEHICLE(&uVar1))
			{
				bVar2 = GET_VEHICLE(&uVar1);
				if (&bParam3)
				{
					DESTROY_ACTOR(&uVar1);
					DESTROY_ACTOR(&bVar2);
				}
				else if (&bParam2)
				{
					if (!Function_31(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar1);
					}
					if (!Function_31(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&bVar2);
					}
				}
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&uVar1);
					}
					else
					{
						RELEASE_ACTOR(&uVar1);
					}
				}
				if (IS_ACTOR_VALID(&bVar2))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar2);
					}
					else
					{
						RELEASE_ACTOR(&bVar2);
					}
				}
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				bVar2 = GET_MOUNT(&uVar1);
				if (&bParam3)
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
					}
					DESTROY_ACTOR(&uVar1);
					DESTROY_ACTOR(&bVar2);
				}
				else if (&bParam2)
				{
					if (!Function_31(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar1);
					}
					if (!Function_31(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
						{
							DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
						}
						DESTROY_ACTOR(&bVar2);
					}
				}
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&uVar1);
					}
					else
					{
						RELEASE_ACTOR(&uVar1);
					}
				}
				if (IS_ACTOR_VALID(&bVar2))
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
					}
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar2);
					}
					else
					{
						RELEASE_ACTOR(&bVar2);
					}
				}
			}
			else
			{
				if (&bParam3)
				{
					DESTROY_ACTOR(&uVar1);
				}
				else if (&bParam2)
				{
					if (!Function_31(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar1);
					}
				}
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&uVar1);
					}
					else
					{
						RELEASE_ACTOR(&uVar1);
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

bool Function_31(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2898 / 10392
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

int Function_32(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x28B8 / 10424
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_VEHICLE(&uParam0))
		{
			SQUAD_LEAVE(&uParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&uParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &uParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_33(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_33(&uParam0, &iParam1, &uParam2, &uParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_33(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x29A6 / 10662
{
	char* cVar0[32];
	
	Function_40();
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(&uParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(&uParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_39(&uParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_10998))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&uParam0), 32);
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
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	if (&iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 32, 0);
	}
	Function_38(&uParam0, 0);
	Function_37(&uParam0, iParam1);
	Function_36(&uParam0, &uParam2);
	Function_35(&uParam0, uParam3);
	if (Function_34(&uParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uParam0, 0);
	}
	return 1;
}

int Function_34(int iParam0) //Position: 0x2C12 / 11282
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_35(var uParam0, bool bParam1) //Position: 0x2C36 / 11318
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_36(var uParam0, int iParam1) //Position: 0x2C5A / 11354
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_37(var uParam0, bool bParam1) //Position: 0x2C80 / 11392
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_38(var uParam0, bool bParam1) //Position: 0x2CA7 / 11431
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_39(bool bParam0) //Position: 0x2CCB / 11467
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_40() //Position: 0x2CEA / 11498
{
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		Global_10998 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		Global_26172 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", &Global_10998, 4294967295, 1);
	}
	return;
}

bool Function_41(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x2D39 / 11577
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (Function_31(&uVar1, &uParam1, &uParam2, &uParam3, &uParam4, 0))
				{
					return 1;
				}
			}
			bVar0++;
		}
	}
	return 0;
}

bool Function_42(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x2D95 / 11669
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

void Function_43(var uParam0, int iParam1) //Position: 0x2DB6 / 11702
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

void Function_44(var uParam0, var uParam1, bool bParam2) //Position: 0x2E11 / 11793
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

var Function_45() //Position: 0x2E5D / 11869
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_46(struct<425> Param0) //Position: 0x2E72 / 11890
{
	bool bVar0;
	bool bVar1;
	
	if (Param0.f_424)
	{
		return;
	}
	if (bParam1)
	{
		return;
	}
	if (!SQUAD_IS_VALID(&Param0 + 392))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&Param0 + 392))
	{
		if (!IS_AI_ACTOR_UNALERTED(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0)))
		{
			return;
		}
		bVar0++;
	}
	if (SQUAD_GET_SIZE(&Param0 + 392) <= 1)
	{
		return;
	}
	if (!Function_49(&Param0 + 392))
	{
		return;
	}
	if (!Function_47(StackVal, &Param0 + 392, (&Param0 + 324), 10.0f))
	{
		return;
	}
	if (VDIST(*(&Param0 + 324), Global_54078) > 15.0f)
	{
		AI_GOAL_LOOK_AT_ACTOR(Function_50(&Param0 + 392), &Global_54076, 0, 1065353216, 3212836864, 3212836864, 0);
		FORCE_LOOK_AT_ACTOR(Function_50(&Param0 + 392), &Global_54076, 5.0f);
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(&Param0 + 392))
		{
			AI_GOAL_LOOK_AT_ACTOR_NEW(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), &Global_54076, 15.0f, 1);
			bVar1++;
		}
		if (&bParam2)
		{
			SAY_SINGLE_LINE_CONTEXT(Function_50(&Param0 + 392), 96, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(Function_50(&Param0 + 392), 120, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		Param0.f_424 = 1;
	}
	return;
}

bool Function_47(var uParam0, struct<2> Param1, float fParam3) //Position: 0x2FC5 / 12229
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (Function_48(StackVal, Param1))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (IS_ACTOR_ALIVE(&iVar1))
			{
				Function_23(&iVar1);
				if (VDIST(Function_23(&iVar1), Param1) >= fParam3)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

bool Function_48(vector3 vParam0) //Position: 0x303A / 12346
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_49(var uParam0) //Position: 0x3052 / 12370
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (!IS_ACTOR_DEAD(&iVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

var Function_50(bool bParam0) //Position: 0x30B0 / 12464
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar1);
		if (IS_ACTOR_VALID(&bVar0) && IS_ACTOR_ALIVE(&bVar0))
		{
			return &bVar0;
		}
		bVar1++;
	}
	return "";
}

void Function_51(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x30FD / 12541
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_CLEAR(&uVar1);
			TASK_FLEE_ACTOR(&uVar1, &uParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(&uVar1, bParam5);
		}
		bVar0++;
	}
}

void Function_52(var uParam0, bool bParam1) //Position: 0x3176 / 12662
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_PREFER_RIDING(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_53(var uParam0) //Position: 0x31C5 / 12741
{
	struct<21> Var0;
	
	bVar6 = Function_63(GET_ACTOR_ENUM(&uParam0), &Var0);
	if (bVar6)
	{
		iVar7 = Function_55(&Var0);
		iVar8 = 0;
		if (iVar7 == 2)
		{
			if (Function_54())
			{
				iVar8 = 1;
			}
			else
			{
				iVar8 = 2;
			}
		}
		else if (Var0.f_20)
		{
			iVar8 = 1;
		}
		else if ((&Var0 + 24)->f_20)
		{
			iVar8 = 2;
		}
		else
		{
			iVar8 = 0;
		}
		if (iVar8 == 1)
		{
			AI_SET_CAMPFIRE_STORY_ENABLED(1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 0);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(2, Var0.f_12);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(3, Var0.f_16);
		}
		else if (iVar8 == 2)
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

bool Function_54() //Position: 0x3284 / 12932
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

var Function_55(struct<25> Param0) //Position: 0x3297 / 12951
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = 0;
	Param0.f_20 = 0;
	(&Param0 + 24)->f_20 = 0;
	if (Function_60(Param0, 0))
	{
		uVar0 = Function_56(StackVal);
		uVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(&uVar0), GET_HOUR(&uVar0) + 6, GET_MINUTE(&uVar0), GET_SECOND(&uVar0));
		if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), &uVar2))
		{
			Param0.f_20 = 1;
			iVar1++;
		}
	}
	if (Function_60(Param0.f_24, 0))
	{
		uVar0 = Function_56(StackVal);
		uVar3 = MAKE_TIME_OF_DAY_EX(GET_DAY(&uVar0), GET_HOUR(&uVar0) + 6, GET_MINUTE(&uVar0), GET_SECOND(&uVar0));
		if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), &uVar3))
		{
			(&Param0 + 24)->f_20 = 1;
			iVar1++;
		}
	}
	return iVar1;
}

var Function_56(int iParam0) //Position: 0x335E / 13150
{
	if (!Function_57(iParam0))
	{
		return MAKE_TIME_OF_DAY(false, false, 0);
	}
	return &Global_21684[iParam07] + 40;
}

bool Function_57(int iParam0) //Position: 0x337E / 13182
{
	if (!Function_59(iParam0))
	{
		return 0;
	}
	if (!Function_58(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_58(int iParam0) //Position: 0x33A2 / 13218
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_59(int iParam0) //Position: 0x33B7 / 13239
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_60(int iParam0, bool bParam1) //Position: 0x33CE / 13262
{
	int iVar0;
	
	iVar0 = Function_61(iParam0);
	if (!Function_59(iVar0))
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

var Function_61(int iParam0) //Position: 0x340C / 13324
{
	if (!Function_62(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_62(int iParam0) //Position: 0x3426 / 13350
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_63(int iParam0, struct<6> Param1) //Position: 0x343C / 13372
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (Global_99175[iVar07] == iParam0)
		{
			Param1 = { StackVal, StackVal, StackVal, StackVal, StackVal, (&Global_99175[iVar07] + 4) };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_64(var uParam0, char* cParam1, bool[] bParam2, bool bParam3, var[] uParam4) //Position: 0x3476 / 13430
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	var uVar5;
	var uVar6;
	var uVar7;
	
	iVar0 = 0;
	uVar6 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar6, 12);
	uVar5 = START_OBJECT_ITERATOR(&uVar6);
	while (IS_OBJECT_VALID(&uVar5) && iVar0 > bParam3)
	{
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uVar5)))
		{
			if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(&uVar5), "horse_stay"))
			{
				GET_OBJECT_POSITION(&uVar5, &Var1);
				GET_OBJECT_ORIENTATION(&uVar5, &Var3);
				uVar7 = CREATE_ACTOR_IN_LAYOUT(&cParam1, Function_141(), bParam2[iVar0], Var1, Var3);
				ACCESSORIZE_HORSE(&uVar7, 3);
				uParam4[iVar0] = &uVar7;
				TASK_USE_GRINGO(&uVar7, GET_GRINGO_FROM_OBJECT(&uVar5), "UseCase1", 4294967295, 1);
				SNAP_ACTOR_TO_GRINGO(&uVar7, &uVar5, "UseCase1", true, 0, 0);
				iVar0++;
			}
		}
		uVar5 = OBJECT_ITERATOR_NEXT(&uVar6);
	}
	DESTROY_ITERATOR(&uVar6);
}

void Function_65(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4, var uParam5, int iParam6) //Position: 0x355B / 13659
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	
	iVar1 = 1;
	if (!IS_OBJECT_VALID(&uParam4))
	{
		return;
	}
	if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uParam4)))
	{
		bVar0 = true;
	}
	else
	{
		return;
	}
	GET_OBJECT_POSITION(&uParam4, &Var2);
	GET_OBJECT_ORIENTATION(&uParam4, &Var4);
	uVar6 = CREATE_ACTOR_IN_LAYOUT(&uParam0, Function_141(), bParam3, Var2, Var4);
	SET_ACTOR_STAY_WITHIN_VOLUME(&uVar6, &uParam5, 2, 2);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar6, 1);
	AI_GOAL_LOOK_AT_NEUTRAL(&uVar6, -1.0f);
	if (!IS_ACTOR_VALID(&uVar6))
	{
		LOG_ERROR("CREATE_ACTOR_IN_LAYOUT failed.  Invalid actor returned in campfireCore");
	}
	if (!GRINGO_ACTOR_CAN_USE(GET_GRINGO_FROM_OBJECT(&uParam4), "UseCase1", &uVar6))
	{
		bVar0 = false;
		while (!IS_OBJECT_VALID(&uParam4) && !bVar0)
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uParam4)))
			{
				if (GRINGO_ACTOR_CAN_USE(GET_GRINGO_FROM_OBJECT(&uParam4), "UseCase1", &uVar6))
				{
					bVar0 = true;
				}
			}
			uParam4 = OBJECT_ITERATOR_NEXT(&uParam1);
		}
	}
	if (iParam6 != 0 && STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(&uParam4), "pee"))
	{
		bVar0 = false;
	}
	if (iParam6 == 0)
	{
		iVar1 = 4294967295;
	}
	if (bVar0)
	{
		SNAP_ACTOR_TO_GRINGO(&uVar6, &uParam4, "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(&uVar6, GET_GRINGO_FROM_OBJECT(&uParam4), "UseCase1", iVar1, 1);
		TASK_PRIORITY_SET(&uVar6, 2);
	}
	else
	{
		TASK_WANDER_IN_VOLUME(&uVar6, &uParam5, -1.0f);
		TASK_PRIORITY_SET(&uVar6, 2);
	}
	Function_66(&uVar6, 0);
	SQUAD_JOIN(&uVar6, &uParam2);
	TASK_PRIORITY_SET(&uVar6, 2);
}

void Function_66(var uParam0, bool bParam1) //Position: 0x3712 / 14098
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_CONVERSE_ENABLE(&uParam0);
	}
	else
	{
		AI_CONVERSE_DISABLE(&uParam0);
	}
	return;
}

void Function_67(bool bParam0) //Position: 0x3737 / 14135
{
	var uVar0;
	int iVar1;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&bParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		SNAP_OBJECT_TO_GROUND(&iVar1, 99,9f, false, 1092616192);
		ROTATE_OBJECT_UPRIGHT_TO_GROUND(&iVar1, 1, 5.0f);
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

var Function_68(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x3785 / 14213
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	struct<2> Var4;
	int iVar6;
	bool bVar7;
	
	uVar0 = CREATE_PROPSET_IN_LAYOUT(&uParam0, &uParam1, &uParam2, Param3, Param5);
	uVar1 = GET_LAYOUT_FROM_OBJECT(&uVar0);
	uVar2 = CREATE_OBJECT_ITERATOR(&uVar1);
	ITERATE_IN_LAYOUT(&uVar2, &uVar1);
	iVar3 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&iVar3))
	{
		if (!GET_OBJECT_TYPE(&iVar3) != 57)
		{
			if (!&iParam7 != 4294967295)
			{
				GET_OBJECT_POSITION(&iVar3, &Var4);
				Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 4.0f, 0.0f), Var4, StackVal);
				iVar6 = GET_MATERIAL_AT_VECTOR(&Var4);
				if (!iVar6 != 0 && (iVar6 && iParam7) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(&iVar3);
				}
			}
			if (IS_OBJECT_VALID(&iVar3))
			{
				if (DECOR_CHECK_EXIST(&iVar3, "rstarInfoSnapping_Type"))
				{
					bVar7 = DECOR_CHECK_STRING(&iVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(&iVar3, 10.0f, bVar7, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(&iVar3, 0);
			}
		}
		iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(&uVar0));
	ADD_AI_COVERSET_FOR_PROPSET(&uVar0);
	DESTROY_ITERATOR(&uVar2);
	return &uVar0;
}

void Function_69(var uParam0, var uParam1, var uParam2, float fParam3, struct<2> Param4) //Position: 0x38DC / 14556
{
	var uVar0[5];
	int iVar6;
	
	if (uParam0 != 4294967295)
	{
		uParam0 = CLEAR_AREA_OF_TREE_TYPE(Param4, (fParam3 + 2.0f), "");
	}
	if (uParam1 != 4294967295)
	{
		uParam1 = CLEAR_AREA_OF_BREAKABLE_TREES(Param4, (fParam3 + 2.0f));
	}
	if (uParam2 != 4294967295)
	{
		uParam2 = CLEAR_AREA_OF_GRASS(Param4, fParam3);
	}
	if (IS_LAYOUTREF_VALID(&Global_46715))
	{
		if (Function_70(StackVal, &Global_46715, "player_herb", &uVar0, 20.0f, 5, Param4) >= 0)
		{
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				if (IS_OBJECT_VALID(&(uVar0[iVar6])))
				{
					DESTROY_OBJECT(&(uVar0[iVar6]));
				}
				iVar6++;
			}
		}
	}
}

int Function_70(char* cParam0, var uParam1, char*[] cParam2, float fParam3, int iParam4, struct<2> Param5) //Position: 0x3987 / 14727
{
	int iVar0;
	struct<2> Var1;
	int iVar3;
	var uVar4;
	
	iVar0 = 0;
	iParam4 = iParam4;
	if (IS_LAYOUTREF_VALID(&cParam0))
	{
		uVar4 = CREATE_OBJECT_ITERATOR(&cParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar4, 12);
		ITERATE_ON_PARTIAL_NAME(&uVar4, &uParam1);
		iVar3 = START_OBJECT_ITERATOR(&uVar4);
		while (IS_OBJECT_VALID(&iVar3))
		{
			if (IS_OBJECT_VALID(&iVar3))
			{
				GET_OBJECT_POSITION(&iVar3, &Var1);
				if (VDIST(Param5, Var1) > fParam3)
				{
					cParam2[iVar0] = &iVar3;
					iVar0++;
					if (iVar0 > iParam4)
					{
						DESTROY_ITERATOR(&uVar4);
						return iVar0;
					}
				}
			}
			iVar3 = OBJECT_ITERATOR_NEXT(&uVar4);
		}
		DESTROY_ITERATOR(&uVar4);
		return iVar0;
	}
	return iVar0;
}

bool Function_71(int iParam0, int iParam1) //Position: 0x3A2D / 14893
{
	Function_149(&uLocal_4, 1202, 3, 0);
	Function_105(&uLocal_4, "$/content/scripting/gringo/simplegringo/lean_rail_nospawn", 1, 0);
	Function_105(&uLocal_4, "p_gen_crateMedicine01x", 0, 0);
	if (Function_86(&uLocal_20, &uLocal_4, 15, 1, 1, 1, 0, 0, 0, 0, 0) && !WOULD_ACTOR_BE_VISIBLE(1202, &Local_28, 3212836864))
	{
		if (Function_84(&uLocal_26, "merchant05mobile", &iParam1))
		{
			iLocal_18 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_26, Function_141()));
			*(&Global_6667[1528] + 216) = &iLocal_18;
			*(&iParam0 + 24) = &uLocal_26;
			Function_72();
			return 1;
		}
	}
	return 0;
}

void Function_72() //Position: 0x3B0F / 15119
{
	var uVar0;
	int iVar2;
	
	uLocal_24 = CREATE_LAYOUT("merchant05campfirelayout");
	uLocal_22 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &uLocal_24, "merchant_lean_rail", "lean_rail_nospawn", Vector(-3257,496f, 16,3f, 2732,137f), Vector(0.0f, 89,932f, 0.0f));
	Function_80(StackVal, Vector(-3258,66f, 16,252f, 2732,086f), 0, 0);
	uVar0 = Vector(-3260,515f, 15,786f, 2732,906f);
	TELEPORT_ACTOR(&uLocal_20, &uVar0, 1, 1, 1);
	TASK_STAND_STILL(&uLocal_20, -1.0f, 0, 0);
	AI_IGNORE_ACTOR(&uLocal_20);
	SQUAD_JOIN(&uLocal_20, &iLocal_18);
	RESET_ANIM_SET_FOR_ACTOR(&uLocal_20, 1);
	TASK_USE_GRINGO(&uLocal_20, GET_GRINGO_FROM_OBJECT(&uLocal_22), "UseCase1", 4294967295, 1);
	Function_78(&uLocal_20, &iLocal_18, 1, 1);
	if (!Function_77(1202, &iVar2, &uLocal_24, 0))
	{
		iVar2 = Function_73(StackVal, StackVal, &uLocal_24, "merchant_coach", 1202, 976, Local_28, Vector(0.0f, 68.0f, 0.0f), 1, 976, 976, 976, 4);
	}
	Function_78(&iVar2, &iLocal_18, 1, 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_24, "p_gen_crateMedicine01x1", "p_gen_crateMedicine01x", Vector(-3269,51f, 15,795f, 2727,51f), Vector(180.0f, -88,9998f, -180.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_24, "p_gen_crateMedicine01x2", "p_gen_crateMedicine01x", Vector(-3269,49f, 15,795f, 2726,75f), Vector(0.0f, -89,1063f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_24, "p_gen_crateMedicine01x3", "p_gen_crateMedicine01x", Vector(-3269,47f, 16,0886f, 2726,76f), Vector(158,641f, -88,1115f, -159,525f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_24, "p_gen_crateMedicine01x6", "p_gen_crateMedicine01x", Vector(-3257,99f, 16,3181f, 2727,15f), Vector(-180.0f, -89,9407f, 180.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_24, "p_gen_crateMedicine01x8", "p_gen_crateMedicine01x", Vector(-3257,7f, 16,3266f, 2727,14f), Vector(179,177f, -86,1352f, -180.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_24, "p_gen_crateMedicine01x9", "p_gen_crateMedicine01x", Vector(-3257,72f, 16,614f, 2727,15f), Vector(-180.0f, -88,9998f, 180.0f), 1);
	return;
}

int Function_73(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x3E62 / 15970
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
	int iVar18;
	
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
			if (Function_76(&(Global_46972[6]), 4, 23, 0) && uParam8)
			{
				bVar16 = Function_75(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_74(bVar16, &iVar1))
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
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(&uVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(&uVar0, iVar18, 0);
			iVar18++;
		}
	}
	return &uVar0;
}

bool Function_74(int iParam0, bool[] bParam1) //Position: 0x40B6 / 16566
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

var Function_75(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0x40EA / 16618
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_76(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x4106 / 16646
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

bool Function_77(int iParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x4132 / 16690
{
	var uVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	bool bVar8;
	var uVar9;
	
	uVar1 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar1, GET_GC_LAYOUT());
	uVar2 = START_OBJECT_ITERATOR(&uVar1);
	bVar3 = false;
	while (IS_OBJECT_VALID(&uVar2) && !bVar3)
	{
		if (GET_OBJECT_TYPE(&uVar2) == 15)
		{
			iVar4 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if (IS_ACTOR_VALID(&iVar4))
			{
				if (IS_ACTOR_VEHICLE(&iVar4))
				{
					if (GET_ACTOR_ENUM(&iVar4) == iParam0)
					{
						uVar0 = &iVar4;
						bVar3 = true;
					}
				}
			}
		}
		uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	DESTROY_ITERATOR(&uVar1);
	if (!bVar3)
	{
		return 0;
	}
	bVar5 = false;
	if (!&bParam3)
	{
		if (IS_ACTOR_VALID(&uVar0))
		{
			bVar6 = false;
			while (bVar6 <= GET_NUM_DRAFT_POSITIONS(&uVar0))
			{
				uVar7 = GET_DRAFT_ACTOR(bVar6, &uVar0);
				if (!IS_ACTOR_ALIVE(&uVar7))
				{
					bVar5 = true;
				}
				else
				{
					FIRE_STOP_ON_ACTOR(&uVar7);
				}
				bVar6++;
			}
		}
		if (bVar5)
		{
			bVar8 = false;
			while (bVar8 <= GET_NUM_DRAFT_POSITIONS(&uVar0))
			{
				uVar9 = GET_DRAFT_ACTOR(bVar8, &uVar0);
				if (IS_ACTOR_VALID(&uVar9))
				{
					DESTROY_ACTOR(&uVar9);
				}
				bVar8++;
			}
			DESTROY_ACTOR(&uVar0);
			return 0;
		}
	}
	bParam1 = &uVar0;
	FIRE_STOP_ON_ACTOR(&uVar0);
	GIVE_OBJECT_TO_LAYOUT(&uVar0, &uParam2);
	return 1;
}

void Function_78(var uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x425E / 16990
{
	bool bVar0;
	int iVar1;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(&uParam0, "hidden"))
	{
		if (&bParam2)
		{
			SET_DRAW_ACTOR(&uParam0, 1);
		}
		DECOR_REMOVE(&uParam0, "hidden");
	}
	if (!Function_79(&uParam0, &iParam1, 1))
	{
		SQUAD_JOIN(&uParam0, &iParam1);
	}
	DECOR_SET_BOOL(&uParam0, "MissionCampfireActor", 1);
	if (IS_ACTOR_HUMAN(&uParam0) || IS_ACTOR_HORSE(&uParam0))
	{
		SET_ACTOR_FACTION(&uParam0, 20);
		MEMORY_CONSIDER_AS(&uParam0, &Global_54076, false);
		SET_ACTOR_IS_COMPANION(&uParam0, 1);
		TASK_PRIORITY_SET(&uParam0, 2);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, 1);
		UNK_0x99AFD2D1(&uParam0, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&uParam0, 12, 1);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&uParam0, &iParam3);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&uParam0, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&uParam0, &iParam3);
		SET_ACTOR_CAN_PLAY_GESTURES(&uParam0, &iParam3);
		Function_5(&uParam0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&uParam0, 0);
	}
	else if (IS_ACTOR_VEHICLE(&uParam0))
	{
		ENABLE_VEHICLE_SEAT(&uParam0, 0, 0);
		ENABLE_VEHICLE_SEAT(&uParam0, 1, 0);
		TASK_STAND_STILL(&uParam0, -1.0f, 0, 0);
		MEMORY_CLEAR_ALL(&uParam0);
		AI_GLOBAL_CLEAR_DANGER(&uParam0);
		bVar0 = false;
		while (bVar0 <= GET_NUM_DRAFT_POSITIONS(&uParam0))
		{
			iVar1 = GET_DRAFT_ACTOR(bVar0, &uParam0);
			if (IS_ACTOR_VALID(&iVar1))
			{
				if (!Function_79(&iVar1, &iParam1, 1))
				{
					SQUAD_JOIN(&iVar1, &iParam1);
				}
				SET_ACTOR_IS_COMPANION(&iVar1, 1);
				SET_ACTOR_FACTION(&iVar1, 20);
				MEMORY_CLEAR_ALL(&iVar1);
				MEMORY_CONSIDER_AS(&iVar1, &Global_54076, false);
				AI_GLOBAL_CLEAR_DANGER(&iVar1);
				TASK_STAND_STILL(&iVar1, -1.0f, 0, 0);
				DECOR_SET_BOOL(&iVar1, "MissionCampfireActor", 1);
			}
			bVar0++;
		}
	}
}

bool Function_79(int iParam0, int iParam1, bool bParam2) //Position: 0x441B / 17435
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(&iParam0) == &iParam1)
	{
		if (&bParam2)
		{
		}
		return 1;
	}
	if (&bParam2)
	{
	}
	return 0;
}

int Function_80(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0x4463 / 17507
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_82(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
	iVar3 = 0;
	if (bParam2)
	{
		if (IS_GRINGO_VALID(&(uVar0[0])))
		{
			GRINGO_ENABLE_SPAWN(&(uVar0[0]), 1);
		}
		if (IS_GRINGO_VALID(&(uVar0[1])))
		{
			GRINGO_ENABLE_SPAWN(&(uVar0[1]), 1);
		}
	}
	else
	{
		if (IS_GRINGO_VALID(&(uVar0[0])))
		{
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_81(&(uVar0[0]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar4) && !&iVar4 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar4, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar4, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar4);
			}
			GRINGO_ENABLE_SPAWN(&(uVar0[0]), 0);
			if (&bParam3)
			{
				GRINGO_ALLOW_ACTIVATION(&(uVar0[0]), false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(&(uVar0[1])))
		{
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_81(&(uVar0[1]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar5) && !&iVar5 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar5);
			}
			GRINGO_ENABLE_SPAWN(&(uVar0[1]), 0);
			if (&bParam3)
			{
				GRINGO_ALLOW_ACTIVATION(&(uVar0[1]), false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
	}
	return iVar3;
}

var Function_81(var uParam0, int iParam1) //Position: 0x45E0 / 17888
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_82(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x45EF / 17903
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &bParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &bParam0);
		if (!Function_83())
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &bParam0, 2.0f, 0);
			bParam2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &bParam0, 2.0f, 0);
		}
		else
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch", &bParam0, 2.0f, 0);
			bParam2 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch2", &bParam0, 2.0f, 0);
		}
	}
}

bool Function_83() //Position: 0x4739 / 18233
{
	if (Function_16(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_84(var uParam0, var uParam1, int iParam2) //Position: 0x4754 / 18260
{
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		uParam0 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(&uParam1));
		return 0;
	}
	Function_85(&uParam0, &iParam2);
	return 1;
	return 0;
}

void Function_85(var uParam0, bool bParam1) //Position: 0x4784 / 18308
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(&uParam0))
	{
		if (GET_OBJECT_TYPE(&uParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(StackVal, StackVal, &uParam0, &bParam1, Function_141(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			if (IS_ATTACHMENT_VALID(&iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(&uParam0));
			}
		}
	}
	return;
}

int Function_86(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, var uParam8, var uParam9, var uParam10) //Position: 0x47CF / 18383
{
	var uVar0;
	int iVar1;
	struct<9> Var2;
	
	if (Global_6621)
	{
		return 0;
	}
	if (Global_6623)
	{
		return 0;
	}
	if (Global_6634)
	{
		return 0;
	}
	if (HUD_IS_FADED() && uParam3)
	{
		return 0;
	}
	if (!Function_104(&(Global_6667[iParam228])) && uParam4)
	{
		return 0;
	}
	if (&bParam7)
	{
		uVar0 = Function_103(StackVal, (&Global_6667[iParam228] + 88), 0, 1, 1);
		if (Function_101(uVar0))
		{
			if (Function_108(&iParam1))
			{
				return 1;
			}
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_100();
		MEMORY_PREFER_RIDING(&uParam0, false);
		MEMORY_PREFER_WALKING(&uParam0, 1);
		if (!&bParam6)
		{
			SET_DRAW_ACTOR(&uParam0, &bParam6);
			DECOR_SET_BOOL(&uParam0, "hidden", 1);
		}
		DECOR_SET_BOOL(&uParam0, "bACTOR_AVOID_SMALLBRAINS", 1);
		if (!DECOR_CHECK_EXIST(&uParam0, "bPreventCampTask"))
		{
			TASK_STAND_STILL(&uParam0, -1.0f, 0, 0);
		}
		return 1;
	}
	if (StackVal || !Function_99((!WOULD_ACTOR_BE_VISIBLE(&Global_15402[Global_6667[iParam228].f_5614] + 16, &Global_6667[iParam228] + 88, 3212836864) || !&bParam5), &Global_54076, *(&Global_6667[iParam228] + 88), 50.0f))
	{
		iVar1 = Function_103(StackVal, *(&Global_6667[iParam228] + 88), 0, 1, 1);
		if (Function_101(iVar1))
		{
			if (Function_108(&iParam1))
			{
				if (!IS_ACTOR_VALID(&uParam0))
				{
					switch (iParam2)
					{
						case 0x00000004:
							vVar2 = Vector(-784,289f, 93,83f, 2401,439f);
							break;
						
						default:
							vVar2 = *(&Global_6667[iParam228] + 88);
							break;
					}
					uParam0 = Function_87(Global_6667[iParam228].f_56, 0, 1, vVar2.x, vVar2.y, vVar2.z, &uParam8, &uParam9, &uParam10);
				}
			}
		}
	}
	return 0;
}

var Function_87(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x49AE / 18862
{
	int iVar0;
	bool bVar1;
	var uVar2;
	struct<2> Var3;
	int iVar5;
	
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
	uParam2 = &uParam2;
	if (((iParam0 != 12 || iParam0 != 11) || iParam0 != 13) || iParam0 != 14)
	{
		if (!Function_98(&(Global_43791[Global_46722[3]]), 4))
		{
			return "";
		}
		if (!IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
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
	if (!Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 1;
		STREAMING_REQUEST_ACTOR(&Global_15402[iParam014] + 16, true, false);
		return "";
	}
	if (!STREAMING_IS_ACTOR_LOADED(&Global_15402[iParam014] + 16, 4294967295))
	{
		return "";
	}
	if (&bParam1)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: bCreateMounted option has been discontinued. Please set this as FALSE!");
	}
	if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 1);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(&(Global_15402[iParam014]));
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
		Function_96(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_95(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_90(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &uParam3;
			Var3.f_4 = &uParam4;
			Var3.f_8 = &uParam5;
			if (Function_48(StackVal, Var3))
			{
				iVar5 = 0;
				while (iVar5 <= Global_6667)
				{
					if (IS_SCRIPT_VALID(&Global_6667[iVar528] + 160))
					{
						Var3 = (&Global_6667[iVar528] + 88);
					}
					iVar5++;
				}
			}
			bVar1 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Global_15402[iParam014] + 24, &Global_15402[iParam014] + 36, &Global_15402[iParam014] + 16, Var3, Vector(0.0f, 0.0f, 0.0f));
		}
	}
	if (IS_ACTOR_VALID(&bVar1))
	{
		REFERENCE_ACTOR(&bVar1);
		TASK_CLEAR(&bVar1);
		TASK_PRIORITY_SET(&bVar1, true);
		MAKE_ACTOR_READY_FOR_ACTION(&bVar1, 1);
		SET_ACTOR_UPDATE_PRIORITY(&bVar1, false);
		Function_89(&bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			DECOR_SET_INT(&(Global_15402[iParam014]), "ambientFaction", GET_ACTOR_FACTION(&bVar1));
		}
		SET_ACTOR_FACTION(&bVar1, 20);
		MEMORY_CONSIDER_AS(&bVar1, &Global_54076, false);
		SET_ACTOR_ALLOW_DISARM(&bVar1, false);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&bVar1, 1);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bVar1, 8, "FASTWALK");
		if (IS_ACTOR_HOGTIED(&bVar1))
		{
			FREE_FROM_HOGTIE(&bVar1);
		}
		if (iParam0 == 2)
		{
			RESET_ANIM_SET_FOR_ACTOR(&bVar1, 0);
			SET_ANIM_SET_FOR_ACTOR(&bVar1, "merchant_veh", 0);
		}
		if (iParam0 == 4)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&bVar1, 20, true);
		}
		if (iParam0 != 2 || iParam0 != 9)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bVar1, 8, 0.0f);
		}
		UNK_0x99AFD2D1(&bVar1, 1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 13, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 14, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 64, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 65, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 66, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 67, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 68, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 46, 0);
		LIMIT_BLOOD_ON_ACTOR(&bVar1, 3);
		SET_ACTOR_IS_COMPANION(&bVar1, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bVar1, 0);
		SET_ACTOR_IS_AMBIENT(&bVar1, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bVar1, 0);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&bVar1, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&bVar1, 0);
		Function_88(&bVar1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 111, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 112, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 30, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 31, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(&bVar1, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(&bVar1, 1);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bVar1, 1);
		if (DECOR_CHECK_EXIST(&bVar1, "hidden"))
		{
			DECOR_REMOVE(&bVar1, "hidden");
		}
		SET_DRAW_ACTOR(&bVar1, 1);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bVar1, 1);
		*(&Global_15402[iParam014] + 8) = &bVar1;
		return &bVar1;
	}
	return "";
}

void Function_88(var uParam0, bool bParam1) //Position: 0x4EEE / 20206
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_89(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x4F10 / 20240
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_CRIPPLE_ENABLE(&uParam0, &uParam4);
		SET_ACTOR_ALLOW_DISARM(&uParam0, &uParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&uParam0), "CanBeLasso", &bParam3);
		if (IS_ACTOR_RIDING(&uParam0))
		{
			uVar0 = GET_MOUNT(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				SET_ALLOW_JACK(&uVar0, &uParam2);
			}
		}
	}
}

var Function_90(bool bParam0, int iParam1) //Position: 0x4F71 / 20337
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_94(bParam0))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		return "";
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_26172))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_26172);
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (GET_OBJECT_TYPE(&uVar1) != 15 || GET_OBJECT_TYPE(&uVar1) != 24)
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (GET_ACTOR_ENUM(&uVar2) == bParam0)
					{
						Function_91(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_91(var uParam0, int iParam1) //Position: 0x4FFF / 20479
{
	Function_93(&uParam0);
	Function_92(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_92(int iParam0) //Position: 0x502B / 20523
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_93(int iParam0) //Position: 0x5051 / 20561
{
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_speed");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_options");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_state");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_target");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorroam_lockon");
	return;
}

bool Function_94(bool bParam0) //Position: 0x5127 / 20775
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_95(int iParam0, int iParam1) //Position: 0x513E / 20798
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (GET_OBJECT_TYPE(&iVar1) != 15 || GET_OBJECT_TYPE(&iVar1) != 24)
		{
			iVar2 = GET_ACTOR_FROM_OBJECT(&iVar1);
			if (IS_ACTOR_VALID(&iVar2))
			{
				if (GET_ACTOR_ENUM(&iVar2) == iParam0)
				{
					if (IS_LAYOUTREF_VALID(&iParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(&iVar1, &iParam1);
					}
					DESTROY_ITERATOR(&uVar0);
					LOG_ERROR("found actor in GC!");
					return &iVar2;
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return "";
}

void Function_96(int iParam0, bool bParam1, bool bParam2) //Position: 0x51E4 / 20964
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		uVar0 = GET_OBJECT_FROM_ACTOR(&Global_15402[iParam014] + 8);
	}
	else if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar0 = GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (!IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			(&Global_15402[iParam014] + 104) = ADD_BLIP_FOR_OBJECT(&uVar0, 325, 0.0f, 2, 0);
			if (GET_OBJECT_TYPE(&uVar0) == 15)
			{
				SET_BLIP_NAME(&Global_15402[iParam014] + 104, GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(&uVar0)));
			}
		}
		else
		{
			SET_BLIP_MIN_DISTANCE(&Global_15402[iParam014] + 104, 0.0f);
		}
		SET_BLIP_PRIORITY(&Global_15402[iParam014] + 104, 3);
	}
	else
	{
		if (IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			REMOVE_BLIP(&Global_15402[iParam014] + 104);
		}
		if (&bParam2)
		{
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						Function_7(&uVar1);
					}
				}
				Function_97(&uVar0);
			}
		}
	}
	return;
}

void Function_97(var uParam0) //Position: 0x52F3 / 21235
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_OBJECT(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_OBJECT(&uParam0);
		}
	}
	return;
}

bool Function_98(var uParam0, int iParam1) //Position: 0x5326 / 21286
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_99(int iParam0, struct<2> Param1, float fParam3) //Position: 0x5343 / 21315
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_23(&iParam0);
		if (VDIST(Function_23(&iParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

void Function_100() //Position: 0x53CF / 21455
{
	var uVar0;
	int iVar1;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (GET_OBJECT_TYPE(&iVar1) == 29)
		{
			if (DECOR_CHECK_EXIST(&iVar1, "MissionCampfireActor"))
			{
				DESTROY_OBJECT(&iVar1);
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

bool Function_101(int iParam0) //Position: 0x543F / 21567
{
	if (!Function_102(iParam0))
	{
		return 1;
	}
	return Function_98(&(Global_43791[iParam0]), 4);
}

bool Function_102(int iParam0) //Position: 0x545B / 21595
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_103(struct<2> Param0, int iParam2, int iParam3, bool bParam4) //Position: 0x5471 / 21617
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
			{
				if (!(StackVal != 2 && iParam2))
				{
					iVar1 = iVar0;
					if (StackVal || !(!(StackVal != 6 && iParam3) != 7 && iParam3))
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
	if (&bParam4)
	{
		if (!iVar3 != 4294967295)
		{
		}
	}
	return iVar3;
}

bool Function_104(struct<205> Param0) //Position: 0x5517 / 21783
{
	var uVar0;
	var uVar1;
	
	if (!Param0.f_184 != 0)
	{
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_11(&Param0 + 184, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_11(&Param0 + 184, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_11(&Param0 + 184, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_11(&Param0 + 184, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_11(&Param0 + 184, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_11(&Param0 + 184, 1024))
				{
					return 0;
				}
				break;
		}
		if (Function_11(&Param0 + 184, 4096))
		{
			if (Function_11(&Param0 + 184, 1))
			{
				uVar0 = Function_56(Function_61(Param0.f_188));
				uVar1 = MAKE_TIME_OF_DAY_EX(GET_DAY(&uVar0), GET_HOUR(&uVar0), 0, 0);
				ADD_TIME(&uVar1, 0, Param0.f_204, false, 0);
				if (IS_LATER_THAN(&uVar1, GET_TIME_OF_DAY()))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

var Function_105(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x5622 / 22050
{
	int iVar0;
	int iVar1;
	
	if (Global_47151[32])
	{
	}
	iVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_107(&Param0, &iVar1, iParam2);
	if (&bParam3)
	{
		Function_106(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

void Function_106(struct<13> Param0) //Position: 0x5660 / 22112
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

var Function_107(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x5673 / 22131
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_27(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_106(&(Param0[iVar02]), 4);
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

bool Function_108(struct<2>[] Param0) //Position: 0x5742 / 22338
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_111();
	iVar1 = 0;
	if (!Function_27(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_106(&(Param0[iVar02]), 8);
		}
		else if (Function_110())
		{
			iVar1 = 1;
			Function_106(&(Param0[iVar02]), 8);
		}
		Function_106(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_27(&(Param0[iVar02]), 4))
		{
			if (!Function_27(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_27(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_27(&(Param0[02]), 8) || iVar1));
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
				Function_106(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_27(&(Param0[iVar02]), 4))
		{
			if (!Function_27(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_106(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_106(&(Param0[iVar02]), 2);
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
							Function_106(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_106(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_106(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_106(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_106(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_106(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_106(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_106(&(Param0[iVar02]), 2);
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
	Function_109();
	return 1;
}

void Function_109() //Position: 0x5B04 / 23300
{
	if (!Function_156(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_110() //Position: 0x5B44 / 23364
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

void Function_111() //Position: 0x5B72 / 23410
{
	if (!Function_156(128))
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

void Function_112(vector3 vParam0) //Position: 0x5BB4 / 23476
{
	char* cVar0[32];
	
	if (Global_131396.f_1200)
	{
		strcpy(&cVar0, "a", 32);
		stradd(&cVar0, GET_OBJECT_NAME(&vParam0 + 16), 32);
		Function_113(StackVal, StackVal, StackVal, StackVal, Vector(&vParam0 + 16, StackVal, StackVal) + Vector(Vector(1,5f, 0.0f, 2,5f), *(&vParam0 + 324), 2), *(&vParam0 + 336), &cVar0);
		strcpy(&cVar0, "d", 32);
		stradd(&cVar0, GET_OBJECT_NAME(&vParam0 + 16), 32);
		Function_113(StackVal, StackVal, StackVal, StackVal, Vector(&vParam0 + 16, StackVal, StackVal) - Vector(Vector(2,5f, 0.0f, 1,5f), *(&vParam0 + 324), 4), *(&vParam0 + 336), &cVar0);
	}
	vParam0.f_8 = 1;
	iParam1 = 250;
	return;
}

void Function_113(var uParam0, var uParam1, struct<2> Param2, struct<2> Param4, char* cParam6) //Position: 0x5C4C / 23628
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	Function_114(StackVal, StackVal, &uVar0, &uVar1, &uParam0, Param2, Param4, uParam1, 1, 1, &cParam6, 0, 0);
}

void Function_114(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) //Position: 0x5C7B / 23675
{
	Function_129(StackVal, StackVal, &uParam0, &uParam1, uParam7, &uParam2, Param3, Param5, &uParam10);
	Function_119(&uParam0, &uParam1, uParam7, uParam8, uParam9);
	DECOR_SET_INT(&uParam1, Function_118(), Function_117(uParam8, uParam9, uParam7));
	DECOR_SET_INT(&uParam1, Function_116(), Function_115(&uParam11, &uParam12));
}

var Function_115(var uParam0, bool bParam1) //Position: 0x5CD6 / 23766
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_116() //Position: 0x5CE6 / 23782
{
	return "PackedGrass";
}

var Function_117(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5CFA / 23802
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

var Function_118() //Position: 0x5D1F / 23839
{
	return "PackedMetadata";
}

void Function_119(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x5D36 / 23862
{
	struct<2> Var0;
	var uVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	switch (iParam2)
	{
		case 0x00000001:
			if (bParam3)
			{
				uVar2 = ADD_BLIP_FOR_OBJECT(&uParam0, 379, 0f, 2, 0);
				iVar3 = ADD_BLIP_FOR_OBJECT(&bParam1, 379, 0f, 2, 0);
				if (DECOR_GET_INT_VERBOSE(&bParam1, Function_128(), &uVar4))
				{
					Function_123(uVar4, &bVar5);
					SET_BLIP_NAME(&iVar3, GET_WEAPON_DISPLAY_NAME(bVar5));
				}
			}
			if (bParam4)
			{
				Function_122();
				Var0 = Function_122();
				Var0.f_4 = (StackVal * 2.0f);
				CREATE_OBJECT_GLOW(&uParam0, 0, Var0, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam3)
			{
				uVar2 = ADD_BLIP_FOR_OBJECT(&uParam0, 380, 0f, 2, 0);
				iVar3 = ADD_BLIP_FOR_OBJECT(&bParam1, 380, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_121();
				Var0 = Function_121();
				Var0.f_4 = (StackVal * 2.0f);
				CREATE_OBJECT_GLOW(&uParam0, 0, Var0, 0);
			}
			break;
		
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			if (bParam3)
			{
				uVar2 = ADD_BLIP_FOR_OBJECT(&uParam0, 381, 0f, 2, 0);
				iVar3 = ADD_BLIP_FOR_OBJECT(&bParam1, 381, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_120();
				Var0 = Function_120();
				Var0.f_4 = (StackVal * 2.0f);
				CREATE_OBJECT_GLOW(&uParam0, 3, Var0, 0);
			}
			break;
	}
	if (bParam3)
	{
		SET_BLIP_MAX_DISTANCE(&uVar2, 1.0f);
		UNK_0x1E98AFEC(&uVar2, 1);
		UNK_0xFF3DB575(&iVar3, 1);
	}
}

struct<8> Function_120() //Position: 0x5E72 / 24178
{
	return StackVal, Vector(0.0f, 0,101f, -0,195f);
}

struct<8> Function_121() //Position: 0x5E84 / 24196
{
	return StackVal, Vector(0.0f, 0,127f, -0,177f);
}

struct<8> Function_122() //Position: 0x5E96 / 24214
{
	return StackVal, Vector(0.0f, 0,158f, -0,163f);
}

void Function_123(var uParam0, struct<5> Param1) //Position: 0x5EA8 / 24232
{
	Param1 = Function_124(uParam0, Function_126(), 0);
	Param1.f_4 = Function_124(uParam0, Function_126() + 8, Function_126());
	return;
}

var Function_124(var uParam0, int iParam1, int iParam2) //Position: 0x5ECD / 24269
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_125((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), iParam2);
}

var Function_125(bool bParam0) //Position: 0x5EEC / 24300
{
	return SHIFT_LEFT(true, bParam0);
}

int Function_126() //Position: 0x5EF8 / 24312
{
	return Function_127(39);
}

int Function_127(int iParam0) //Position: 0x5F03 / 24323
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

var Function_128() //Position: 0x5F31 / 24369
{
	return "PackedWeapon";
}

int Function_129(var uParam0, char* cParam1, int iParam2, var uParam3, struct<2> Param4, struct<2> Param6, char* cParam8) //Position: 0x5F46 / 24390
{
	var uVar0;
	struct<2> Var1;
	char* cVar3[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			uVar0 = Function_136();
			Function_121();
			Var1 = Function_121();
			break;
		
		case 0x00000001:
			uVar0 = Function_135();
			Function_122();
			Var1 = Function_122();
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			uVar0 = Function_134();
			Function_120();
			Var1 = Function_120();
			break;
	}
	if (IS_STRING_VALID(&cParam8))
	{
		strcpy(&cVar3, Function_133(), 64);
		stradd(&cVar3, &cParam8, 64);
	}
	else
	{
		memcpy(&cVar3, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_131(Function_133()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	uParam0 = CREATE_PROP_IN_LAYOUT(&uParam3, &cVar3, &uVar0, Param4, Param6, 0);
	SNAP_OBJECT_TO_GROUND(&uParam0, 1.0f, false, 1092616192);
	cParam1 = CREATE_GRINGO_ON_OBJECT(StackVal, &uParam0, Function_130(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", Var1, Vector(0.0f, 0.0f, 0.0f));
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_130() //Position: 0x6053 / 24659
{
	return "MPItemGiver";
}

struct<32> Function_131(char* cParam0) //Position: 0x6067 / 24679
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_132("0", &cVar8, ""), 4);
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

struct<32> Function_132(char* cParam0) //Position: 0x60D3 / 24787
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_133() //Position: 0x60F5 / 24821
{
	return "PBox_";
}

var Function_134() //Position: 0x6103 / 24835
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_135() //Position: 0x6129 / 24873
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_136() //Position: 0x6151 / 24913
{
	return "p_gen_crateMultiplayerAmmo01x";
}

int Function_137(var uParam0, int iParam1) //Position: 0x6177 / 24951
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
	Function_139(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_138(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_138(int iParam0, var uParam1, struct<2> Param2) //Position: 0x62E1 / 25313
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_131("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

int Function_139(bool bParam0) //Position: 0x6389 / 25481
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
						Function_140(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_22(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_140(iVar0);
						}
					}
					else if (Function_22(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_140(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&bParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_140(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_140(int iParam0) //Position: 0x64F7 / 25847
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

var Function_141() //Position: 0x655F / 25951
{
	int iVar0;
	
	return &iVar0;
}

var Function_142(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x6568 / 25960
{
	return Function_143(StackVal, &uParam0, iParam1, &iParam2, &iParam3, &iParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_143(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x6586 / 25990
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_148();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_94(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_147(&uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_147(&uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_146(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_94(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_146(bVar0))
				{
					Function_145();
				}
				Function_144(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_94(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (iParam2 == 0)
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

void Function_144(int iParam0) //Position: 0x687F / 26751
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_145() //Position: 0x6933 / 26931
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_146(bool bParam0) //Position: 0x696E / 26990
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_147(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x699B / 27035
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
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, bVar0), 4294967295))
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

void Function_148() //Position: 0x6AF6 / 27382
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_145();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_145();
	return;
}

var Function_149(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6B42 / 27458
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_27(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_106(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_106(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_150() //Position: 0x6C1E / 27678
{
	int iVar0;
	
	switch (Global_43787)
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

int Function_151() //Position: 0x6D7A / 28026
{
	int iVar0;
	
	switch (Global_43787)
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

bool Function_152(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x6E9A / 28314
{
	var uVar0;
	int iVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	
	if (&bParam3)
	{
		return 1;
	}
	bVar3 = false;
	Function_139(4294967295);
	iVar2 = 0;
	while (iVar2 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar25] + 16))
		{
			bVar5 = DECOR_GET_INT(&Global_39621[iVar25] + 16, "category");
			if (&iParam2 != 0)
			{
				if (bVar5 != &iParam2 && &iParam2 != 256)
				{
					bVar3 = true;
				}
			}
			GET_VOLUME_CENTER(&Global_39621[iVar25] + 16, &uVar0);
			if (&iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_39621[iVar25] + 16))
				{
					return 0;
				}
			}
			fVar4 = uParam1;
			if (bVar3)
			{
				fVar4 = (fVar4 + 170.0f);
			}
			if (Global_6629 && bVar5 != 512)
			{
			}
			else if (Function_153(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_153(struct<2> Param0) //Position: 0x6F76 / 28534
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

bool Function_154(struct<2> Param0, struct<5> Param2) //Position: 0x6F95 / 28565
{
	var uVar0;
	int iVar2;
	struct<2> Var3;
	
	if (iParam3 == 4294967295)
	{
		iVar2 = 4294967294;
	}
	else
	{
		iVar2 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(Param0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var3);
		if (VDIST(Param0, Var3) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(Var3);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(Param0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(Param0, Var3));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
	{
		if (!Function_48(StackVal, Param2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar2 > iParam3)
	{
		Param0 = (Param0 + 0,01f);
		Param0.f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
		{
			if (!Function_48(StackVal, Param2))
			{
				return 1;
			}
		}
		Param2 = Param0;
		Param2.f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar2++;
		}
		WAIT(false);
	}
	return 0;
}

bool Function_155(int iParam0) //Position: 0x70D8 / 28888
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

bool Function_156(int iParam0) //Position: 0x70FA / 28922
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_157() //Position: 0x7116 / 28950
{
	return 0;
}

void Function_158(struct<321> Param0) //Position: 0x711D / 28957
{
	var uVar0;
	
	Param0.f_8 = 0;
	Param0.f_320 = 0;
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_131("campfire"), 4);
	*(&Param0 + 16) = CREATE_LAYOUT(&uVar0);
	if (IS_STRING_VALID(&bParam1))
	{
		if (STRING_LENGTH(&bParam1) >= 0)
		{
			*(&Param0 + 32) = GET_ASSET_ID(&bParam1, 0);
			Function_107(&Param0 + 120, &Param0 + 32, 0);
		}
	}
	if (IS_STRING_VALID(&uParam2))
	{
		if (STRING_LENGTH(&uParam2) >= 0)
		{
			*(&Param0 + 40) = GET_ASSET_ID(&uParam2, 7);
			Function_107(&Param0 + 120, &Param0 + 40, 7);
		}
	}
	return;
}

