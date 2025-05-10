//Decompiled with MagicRDR v1.0
//Function Count : 228
//Statics Count : 223
//Natives Count : 464
//Parameters Count : 23

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
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	struct<677> Local_11 = { 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar8;
	bool bVar9;
	float fVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	bool bVar15;
	
	iLocal_9 = 0;
	Function_221(&Local_11, &ScriptParam_0);
	fVar2 = GET_CURRENT_GAME_TIME();
	iLocal_10 = 0;
	iVar13 = 0;
	Function_220(&iVar13, 1);
	Function_220(&iVar13, 16);
	Function_220(&iVar13, 2);
	while (!IS_EXITFLAG_SET())
	{
		bVar1 = 250;
		Function_216(&Local_11 + 60);
		Function_215(&Local_11);
		Function_214(&Local_11);
		if (IS_ACTOR_VALID(ScriptParam_0.f_48))
		{
			GET_POSITION(ScriptParam_0.f_48, &Local_11 + 416);
		}
		else
		{
			*(&Local_11 + 416) = { StackVal, StackVal, *(&Global_26391 + 8) };
		}
		if (iLocal_10 == 3 && iLocal_10 == 4)
		{
			if (Global_3403 || Global_3404)
			{
				Local_11.f_648 = 24;
				iLocal_10 = 3;
				bVar1 = false;
			}
			if ((Global_3384 || Global_3380) || Global_3378)
			{
				Local_11.f_648 = 24;
				iLocal_10 = 3;
				bVar1 = false;
			}
			if (GET_OBJECTSET_SIZE(Global_26391.f_28) <= 1)
			{
				Local_11.f_648 = 24;
				iLocal_10 = 3;
				bVar1 = false;
			}
			else
			{
				if (!IS_VOLUME_VALID(Local_11.f_412))
				{
					Local_11.f_412 = CREATE_VOLUME_IN_LAYOUT(Local_11.f_336, Function_213(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 30.0f, 20.0f, 30.0f);
				}
				iLocal_199 = ScriptParam_0.f_48;
				ScriptParam_0.f_48 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Global_26391.f_28));
				if (ScriptParam_0.f_48 != iLocal_199)
				{
					if (IS_VOLUME_VALID(Local_11.f_412) && IS_ACTOR_VALID(ScriptParam_0.f_48))
					{
						ATTACH_OBJECTS(Local_11.f_412, ScriptParam_0.f_48, Function_213(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
					}
				}
			}
		}
		Global_26316.f_152 = SQUAD_GET_SIZE(Local_11.f_576);
		if (IS_LAYOUTREF_VALID(Local_11.f_340))
		{
			switch (iLocal_10)
			{
				case 0x00000000:
					if (GET_CURRENT_GAME_TIME() <= (Local_11.f_476 + 10.0f))
					{
						iLocal_10 = 3;
					}
					if (Function_216(&Local_11 + 8) && Function_216(&Local_11 + 60))
					{
						iLocal_10 = 1;
						bVar1 = false;
					}
					Function_210(&Local_11, &ScriptParam_0);
					if (Local_11.f_368 == 0)
					{
						fVar10 = (GET_CURRENT_GAME_TIME() + 15.0f);
					}
					else
					{
						fVar10 = GET_CURRENT_GAME_TIME();
					}
					break;
				
				case 0x00000001:
					if (fVar10 > GET_CURRENT_GAME_TIME())
					{
						if (Function_208(&Local_11, &ScriptParam_0))
						{
							Local_11.f_648 = 0;
							iLocal_10 = 2;
							fLocal_198 = GET_CURRENT_GAME_TIME();
							Local_11.f_476 = GET_CURRENT_GAME_TIME();
							bVar1 = false;
						}
						else
						{
							if (Local_11.f_648 == 24)
							{
								iLocal_10 = 3;
							}
							bVar1 = 50;
						}
						if (GET_CURRENT_GAME_TIME() <= (fVar10 + 10.0f))
						{
							iLocal_10 = 3;
						}
					}
					else
					{
						bVar1 = 50;
					}
					Function_191(&Local_11);
					break;
				
				case 0x00000002:
					bVar15 = false;
					while (bVar15 <= SQUAD_GET_SIZE(Local_11.f_576))
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar15)))
						{
							if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar15))))
							{
								ADD_BLIP_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar15), 345, 0, 2, 0);
								SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar15)), 1.0f, 1.0f, 1.0f, 0,25f);
							}
							if (!bVar14)
							{
								if (IS_ACTOR_VALID(Function_190()))
								{
									if (Function_186(SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar15), &uVar11, &uVar12, iVar13, 0, 0x40400000))
									{
										Function_180(SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar15));
										bVar14 = true;
									}
								}
							}
						}
						bVar15++;
					}
					if (IS_ACTOR_VALID(ScriptParam_0.f_48))
					{
						bVar8 = false;
						while (bVar8 <= GET_OBJECTSET_SIZE(Global_26391.f_28))
						{
							bVar3 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar8, Global_26391.f_28));
							if (IS_ACTOR_VALID(bVar3))
							{
								bVar9 = false;
								while (bVar9 <= SQUAD_GET_SIZE(Local_11.f_576))
								{
									bVar4 = SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar9);
									if (IS_ACTOR_VALID(bVar4))
									{
										MEMORY_CONSIDER_AS(bVar3, bVar4, 4);
									}
									bVar9++;
								}
							}
							bVar8++;
						}
						Function_191(&Local_11);
						if (Function_166(&Local_11, &ScriptParam_0, 0))
						{
							Local_11.f_648 = 24;
							iLocal_10 = 3;
							bVar1 = false;
						}
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_11.f_576) != 0 && Local_11.f_600 <= Local_11.f_596)
						{
							Local_11.f_648 = 24;
							iLocal_10 = 3;
							bVar1 = false;
						}
						bVar1 = Function_97(bVar1, Function_98(&Local_11, &ScriptParam_0));
						Function_92(&Local_11, &ScriptParam_0);
						if ((Function_91() || (fLocal_198 + 15.0f) > GET_CURRENT_GAME_TIME()) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_11.f_576) != 0)
						{
							bVar1 = Function_97(bVar1, Function_60(&Local_11, &ScriptParam_0));
						}
						Function_38(&Local_11, &ScriptParam_0);
						Function_37(&Local_11, 0);
						Function_22(&Local_11, &ScriptParam_0);
						Function_21(&Local_11);
						Function_16(&Local_11);
						Function_14(&Local_11, &ScriptParam_0);
						bVar1 = false;
					}
					break;
				
				case 0x00000003:
					if (SQUAD_GET_SIZE(Local_11.f_576) >= 0)
					{
						bVar0 = false;
						while (bVar0 <= SQUAD_GET_SIZE(Local_11.f_576))
						{
							bVar3 = SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar0);
							GET_POSITION(bVar3, &uVar5);
							TASK_CLEAR(bVar3);
							TASK_WANDER(bVar3, -1.0f);
							TASK_PRIORITY_SET(bVar3, 2);
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar3));
							if (Function_13(bVar3))
							{
								if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bVar3)))
								{
									Function_12(GET_PERS_CHAR_FROM_ACTOR(bVar3));
								}
								DEREFERENCE_ACTOR(bVar3);
								Function_11(bVar3, 0);
								Local_11.f_372 = (Local_11.f_372 - 1);
							}
							else
							{
								RELEASE_ACTOR(bVar3);
							}
							bVar0++;
						}
						Function_10(Local_11.f_576);
					}
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_11.f_576) != 0 && GET_CURRENT_GAME_TIME() < (Local_11.f_364 + 5.0f))
					{
						bVar1 = false;
						iLocal_10 = 4;
					}
					break;
				
				case 0x00000004:
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					bVar1 = false;
					break;
				
				default:
					break;
				}
		}
		WAIT(bVar1);
	}
	Function_6(&Local_11 + 576, 0, 0, 1);
	Function_5(&Local_11 + 580);
	Function_37(&Local_11, 1);
	Function_1(&Local_11 + 8);
	if (IS_OBJECT_VALID(Local_11.f_676))
	{
		NAV_QUERY_STOP(Local_11.f_676);
	}
	Function_1(&Local_11 + 60);
	if (IS_POPSET_VALID(Local_11.f_332))
	{
		DESTROY_POPULATION_SET(Local_11.f_332);
	}
	Global_26391 = 0.0f;
	Global_26391.f_4 = 0.0f;
	Global_26391.f_24 = 0;
	SET_AMBIENT_STREAMING_REQUIRED_POP_ACTOR_SCALE(1.0f);
	RELEASE_LAYOUT_REF(Local_11.f_336);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x535 / 1333
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

void Function_2(var uParam0, int iParam1) //Position: 0x55B / 1371
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

void Function_3(var uParam0, int iParam1) //Position: 0x689 / 1673
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0x6A3 / 1699
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0x6C0 / 1728
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*iParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_6(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x707 / 1799
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	if (SQUAD_GET_SIZE(*uParam0) >= 0)
	{
		Function_9(*uParam0);
		Function_8(*uParam0, 0);
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
				}
				DECOR_SET_BOOL(bVar1, "CanBeLasso", true);
				MEMORY_REPORT_POSITION_AUTO(bVar1, Global_34573, false);
				MEMORY_CONSIDER_AS(bVar1, Global_34573, 2);
				TASK_CLEAR(bVar1);
				if (!bParam3)
				{
					Function_7(bVar1, Global_34573, -1.0f, -1.0f, 0, 0);
				}
				else
				{
					TASK_WANDER(bVar1, -1.0f);
				}
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SQUAD_LEAVE(bVar1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
				}
				if (Function_13(bVar1))
				{
					Function_11(bVar1, 0);
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bVar1)))
					{
						Function_12(GET_PERS_CHAR_FROM_ACTOR(bVar1));
						DEREFERENCE_ACTOR(bVar1);
					}
					else
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
				}
				else
				{
					TASK_PRIORITY_SET(bVar1, 2);
					if (iParam2 == 1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
					else if (bParam1)
					{
						DESTROY_ACTOR(bVar1);
					}
					else
					{
						RELEASE_ACTOR(bVar1);
					}
				}
			}
			bVar0++;
		}
	}
}

void Function_7(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x84E / 2126
{
	if (Function_91())
	{
		MEMORY_REPORT_POSITION_AUTO(bParam0, Global_34573, false);
		MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
		TASK_FLEE_ACTORSET(bParam0, Global_78576, fParam2, fParam3, iParam4, iParam5, 0);
	}
	else if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		TASK_FLEE_ACTOR(bParam0, bParam1, fParam2, fParam3, iParam4, iParam5, 0);
	}
}

void Function_8(bool bParam0, bool bParam1) //Position: 0x8A1 / 2209
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
				SET_ACTOR_VISION_XRAY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_9(bool bParam0) //Position: 0x8EA / 2282
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x91F / 2335
{
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	SQUAD_MAKE_EMPTY(bParam0);
	return;
}

void Function_11(bool bParam0, int iParam1) //Position: 0x934 / 2356
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (iParam1 == 1)
	{
		DECOR_SET_BOOL(bParam0, "nsharedlaw", true);
	}
	else
	{
		DECOR_REMOVE(bParam0, "nsharedlaw");
	}
	return;
}

int Function_12(bool bParam0) //Position: 0x972 / 2418
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			DEREFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

bool Function_13(bool bParam0) //Position: 0xA0C / 2572
{
	return DECOR_CHECK_EXIST(bParam0, "nsharedlaw");
}

void Function_14(var uParam0, int iParam1) //Position: 0xA23 / 2595
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	if (!DECOR_CHECK_EXIST(uParam0->f_576, "nextspeech") || !DECOR_CHECK_EXIST(uParam0->f_576, "nextspeechtarget"))
	{
		if (uParam0->f_452 + 15.0f) > GET_CURRENT_GAME_TIME()
		{
			bVar0 = RAND_INT_RANGE(false, 10000);
			if (bVar0 <= 3333)
			{
				Function_15(uParam0->f_576, 109, iParam1->f_48);
			}
			else if (bVar0 <= 6666)
			{
				Function_15(uParam0->f_576, 58, iParam1->f_48);
			}
			else
			{
				Function_15(uParam0->f_576, 105, iParam1->f_48);
			}
		}
		return;
	}
	bVar1 = DECOR_GET_INT(uParam0->f_576, "nextspeechtarget");
	if (!IS_ACTOR_VALID(bVar1))
	{
		return;
	}
	GET_POSITION(bVar1, &vVar6);
	bVar2 = false;
	while (bVar2 <= SQUAD_GET_SIZE(uParam0->f_576))
	{
		GET_POSITION(SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar2), &vVar3);
		if (VDIST(vVar3, vVar6) > 20.0f)
		{
			bVar9 = DECOR_GET_INT(uParam0->f_576, "nextspeech");
			if (Global_29007 == 3)
			{
				bVar10 = GET_ACTOR_ENUM(SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar2));
				if ((bVar10 != 460 || bVar10 != 428) || bVar10 != 429)
				{
					if (RAND_INT_RANGE(false, true) == 0)
					{
						bVar9 = 110;
					}
				}
				else if ((((bVar10 != 184 || bVar10 != 185) || bVar10 != 186) || bVar10 != 187) || bVar10 != 188)
				{
					if (RAND_INT_RANGE(false, 3) == 0)
					{
						bVar9 = 110;
					}
				}
			}
			if (((uParam0->f_648 > 15 && !uParam0->f_568) && !uParam0->f_552) && !uParam0->f_540)
			{
				SAY_SINGLE_LINE_CONTEXT(SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar2), bVar9, bVar1, 1, 1, 2, 4294967295, 4294967295, 0, 1);
			}
			DECOR_REMOVE(uParam0->f_576, "nextspeechtarget");
			DECOR_REMOVE(uParam0->f_576, "nextspeech");
			uParam0->f_452 = GET_CURRENT_GAME_TIME();
		}
		bVar2++;
	}
	return;
}

bool Function_15(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC1B / 3099
{
	DECOR_SET_INT(bParam0, "nextspeech", bParam1);
	DECOR_SET_INT(bParam0, "nextspeechtarget", bParam2);
	return 1;
}

void Function_16(int iParam0) //Position: 0xC52 / 3154
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	if (!Function_91())
	{
		if (iParam0->f_612 <= 12)
		{
			if (iParam0->f_600 > 1)
			{
				iVar0 = Function_20(iParam0->f_724, *iParam0);
				if (iParam0->f_612 <= iVar0)
				{
					if (iParam0->f_616 < (iParam0->f_612 - 2) && iParam0->f_600 > iParam0->f_596)
					{
						bVar1 = RAND_INT_RANGE(false, (iVar0 - 1));
						iVar2 = 0;
						bVar3 = false;
						while (iVar2 > iVar0 && !bVar3)
						{
							if (!(*iParam0 + 260)[bVar1])
							{
								bVar3 = true;
							}
							else
							{
								bVar1++;
								iVar2++;
								if (bVar1 > iVar0)
								{
									bVar1 = false;
								}
							}
						}
						Function_17(iParam0, bVar1, 0);
						(*iParam0 + 260)[bVar1] = 1;
						iParam0->f_612++;
					}
				}
			}
		}
	}
	return;
}

void Function_17(int iParam0, bool bParam1, bool bParam2) //Position: 0xD0B / 3339
{
	if (!bParam2)
	{
		switch (*iParam0)
		{
			case 0x00000000:
			case 0x00000001:
				if (iParam0->f_724 == 0)
				{
					if (Global_29006 == Global_30717[0])
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_18(iParam0 + 60, 184, 3, 0);
								break;
							
							case 0x00000001:
								Function_18(iParam0 + 60, 185, 3, 0);
								break;
							
							case 0x00000002:
								Function_18(iParam0 + 60, 186, 3, 0);
								break;
							
							case 0x00000003:
								Function_18(iParam0 + 60, 187, 3, 0);
								break;
							
							case 0x00000004:
								Function_18(iParam0 + 60, 188, 3, 0);
								break;
						}
					}
					else if (Global_29004 == 2)
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_18(iParam0 + 60, 438, 3, 0);
								break;
							
							case 0x00000001:
								Function_18(iParam0 + 60, 424, 3, 0);
								break;
							
							case 0x00000002:
								Function_18(iParam0 + 60, 426, 3, 0);
								break;
							
							case 0x00000003:
								Function_18(iParam0 + 60, 434, 3, 0);
								break;
							
							case 0x00000004:
								Function_18(iParam0 + 60, 435, 3, 0);
								break;
							
							case 0x00000005:
								Function_18(iParam0 + 60, 447, 3, 0);
								break;
							
							case 0x00000006:
								Function_18(iParam0 + 60, 448, 3, 0);
								break;
							
							case 0x00000007:
								Function_18(iParam0 + 60, 184, 3, 0);
								break;
							
							case 0x00000008:
								Function_18(iParam0 + 60, 185, 3, 0);
								break;
							
							case 0x00000009:
								Function_18(iParam0 + 60, 186, 3, 0);
								break;
							
							case 0x0000000A:
								Function_18(iParam0 + 60, 187, 3, 0);
								break;
							
							case 0x0000000B:
								Function_18(iParam0 + 60, 188, 3, 0);
								break;
						}
					}
					else if (Global_29004 == 0)
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_18(iParam0 + 60, 436, 3, 0);
								break;
							
							case 0x00000001:
								Function_18(iParam0 + 60, 437, 3, 0);
								break;
							
							case 0x00000002:
								Function_18(iParam0 + 60, 440, 3, 0);
								break;
							
							case 0x00000003:
								Function_18(iParam0 + 60, 441, 3, 0);
								break;
							
							case 0x00000004:
								Function_18(iParam0 + 60, 442, 3, 0);
								break;
							
							case 0x00000005:
								Function_18(iParam0 + 60, 443, 3, 0);
								break;
							
							case 0x00000006:
								Function_18(iParam0 + 60, 444, 3, 0);
								break;
							
							case 0x00000007:
								Function_18(iParam0 + 60, 445, 3, 0);
								break;
							
							case 0x00000008:
								Function_18(iParam0 + 60, 446, 3, 0);
								break;
							
							case 0x00000009:
								Function_18(iParam0 + 60, 425, 3, 0);
								break;
							
							case 0x0000000A:
								Function_18(iParam0 + 60, 427, 3, 0);
								break;
							
							case 0x0000000B:
								Function_18(iParam0 + 60, 428, 3, 0);
								break;
							
							case 0x0000000C:
								Function_18(iParam0 + 60, 429, 3, 0);
								break;
							
							case 0x0000000D:
								Function_18(iParam0 + 60, 430, 3, 0);
								break;
							
							case 0x0000000E:
								Function_18(iParam0 + 60, 431, 3, 0);
								break;
							
							case 0x0000000F:
								Function_18(iParam0 + 60, 432, 3, 0);
								break;
							
							case 0x00000010:
								Function_18(iParam0 + 60, 433, 3, 0);
								break;
							}
					}
				}
				else if (iParam0->f_724 == 1)
				{
					if (Global_30619 > 3)
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_18(iParam0 + 60, 521, 3, 0);
								break;
							
							case 0x00000001:
								Function_18(iParam0 + 60, 522, 3, 0);
								break;
							
							case 0x00000002:
								Function_18(iParam0 + 60, 523, 3, 0);
								break;
							
							case 0x00000003:
								Function_18(iParam0 + 60, 529, 3, 0);
								break;
							
							case 0x00000004:
								Function_18(iParam0 + 60, 530, 3, 0);
								break;
							
							case 0x00000005:
								Function_18(iParam0 + 60, 531, 3, 0);
								break;
						}
					}
					else if (Global_29006 == Global_30685[0])
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_18(iParam0 + 60, 461, 3, 0);
								break;
							
							case 0x00000001:
								Function_18(iParam0 + 60, 462, 3, 0);
								break;
							
							case 0x00000002:
								Function_18(iParam0 + 60, 463, 3, 0);
								break;
							
							case 0x00000003:
								Function_18(iParam0 + 60, 464, 3, 0);
								break;
							
							case 0x00000004:
								Function_18(iParam0 + 60, 465, 3, 0);
								break;
							
							case 0x00000005:
								Function_18(iParam0 + 60, 466, 3, 0);
								break;
						}
					}
					else
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_18(iParam0 + 60, 455, 3, 0);
								break;
							
							case 0x00000001:
								Function_18(iParam0 + 60, 456, 3, 0);
								break;
							
							case 0x00000002:
								Function_18(iParam0 + 60, 457, 3, 0);
								break;
							
							case 0x00000003:
								Function_18(iParam0 + 60, 458, 3, 0);
								break;
							
							case 0x00000004:
								Function_18(iParam0 + 60, 459, 3, 0);
								break;
							
							case 0x00000005:
								Function_18(iParam0 + 60, 460, 3, 0);
								break;
							}
						}
				}
				break;
			
			case 0x00000002:
				if (iParam0->f_724 == 0)
				{
					switch (bParam1)
					{
						case 0x00000000:
							Function_18(iParam0 + 60, 449, 3, 0);
							break;
						
						case 0x00000001:
							Function_18(iParam0 + 60, 450, 3, 0);
							break;
						
						case 0x00000002:
							Function_18(iParam0 + 60, 451, 3, 0);
							break;
						
						case 0x00000003:
							Function_18(iParam0 + 60, 452, 3, 0);
							break;
						
						case 0x00000004:
							Function_18(iParam0 + 60, 453, 3, 0);
							break;
						
						case 0x00000005:
							Function_18(iParam0 + 60, 454, 3, 0);
							break;
					}
				}
				else if (iParam0->f_724 == 1)
				{
					switch (bParam1)
					{
						case 0x00000000:
							Function_18(iParam0 + 60, 379, 3, 0);
							break;
						
						case 0x00000001:
							Function_18(iParam0 + 60, 380, 3, 0);
							break;
						
						case 0x00000002:
							Function_18(iParam0 + 60, 381, 3, 0);
							break;
						
						case 0x00000003:
							Function_18(iParam0 + 60, 391, 3, 0);
							break;
						
						case 0x00000004:
							Function_18(iParam0 + 60, 392, 3, 0);
							break;
						
						case 0x00000005:
							Function_18(iParam0 + 60, 393, 3, 0);
							break;
						}
				}
				break;
			
			case 0x00000003:
				switch (Global_29004)
				{
					case 0x00000000:
						switch (bParam1)
						{
							case 0x00000000:
								Function_18(iParam0 + 60, 397, 3, 0);
								break;
							
							case 0x00000001:
								Function_18(iParam0 + 60, 398, 3, 0);
								break;
							
							case 0x00000002:
								Function_18(iParam0 + 60, 399, 3, 0);
								break;
							
							case 0x00000003:
								Function_18(iParam0 + 60, 400, 3, 0);
								break;
							
							case 0x00000004:
								Function_18(iParam0 + 60, 401, 3, 0);
								break;
							
							case 0x00000005:
								Function_18(iParam0 + 60, 402, 3, 0);
								break;
							
							case 0x00000006:
								Function_18(iParam0 + 60, 403, 3, 0);
								break;
							
							case 0x00000007:
								Function_18(iParam0 + 60, 404, 3, 0);
								break;
							
							case 0x00000008:
								Function_18(iParam0 + 60, 405, 3, 0);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bParam1)
						{
							case 0x00000000:
								Function_18(iParam0 + 60, 415, 3, 0);
								break;
							
							case 0x00000001:
								Function_18(iParam0 + 60, 416, 3, 0);
								break;
							
							case 0x00000002:
								Function_18(iParam0 + 60, 417, 3, 0);
								break;
							
							case 0x00000003:
								Function_18(iParam0 + 60, 418, 3, 0);
								break;
							
							case 0x00000004:
								Function_18(iParam0 + 60, 419, 3, 0);
								break;
							
							case 0x00000005:
								Function_18(iParam0 + 60, 420, 3, 0);
								break;
							
							case 0x00000006:
								Function_18(iParam0 + 60, 421, 3, 0);
								break;
							
							case 0x00000007:
								Function_18(iParam0 + 60, 422, 3, 0);
								break;
							
							case 0x00000008:
								Function_18(iParam0 + 60, 423, 3, 0);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bParam1)
						{
							case 0x00000000:
								Function_18(iParam0 + 60, 406, 3, 0);
								break;
							
							case 0x00000001:
								Function_18(iParam0 + 60, 407, 3, 0);
								break;
							
							case 0x00000002:
								Function_18(iParam0 + 60, 408, 3, 0);
								break;
							
							case 0x00000003:
								Function_18(iParam0 + 60, 409, 3, 0);
								break;
							
							case 0x00000004:
								Function_18(iParam0 + 60, 410, 3, 0);
								break;
							
							case 0x00000005:
								Function_18(iParam0 + 60, 411, 3, 0);
								break;
							
							case 0x00000006:
								Function_18(iParam0 + 60, 412, 3, 0);
								break;
							
							case 0x00000007:
								Function_18(iParam0 + 60, 413, 3, 0);
								break;
							
							case 0x00000008:
								Function_18(iParam0 + 60, 414, 3, 0);
								break;
						}
						break;
				}
				break;
		}
	}
	else if (iParam0->f_724 == 0)
	{
		if (Global_29006 == Global_30717[0])
		{
			switch (bParam1)
			{
				case 0x00000000:
					Function_18(iParam0 + 60, 184, 3, 0);
					break;
				
				case 0x00000001:
					Function_18(iParam0 + 60, 185, 3, 0);
					break;
				
				case 0x00000002:
					Function_18(iParam0 + 60, 186, 3, 0);
					break;
				
				case 0x00000003:
					Function_18(iParam0 + 60, 187, 3, 0);
					break;
				
				case 0x00000004:
					Function_18(iParam0 + 60, 188, 3, 0);
					break;
			}
		}
		else if (Global_29004 == 2)
		{
			switch (bParam1)
			{
				case 0x00000000:
					Function_18(iParam0 + 60, 436, 3, 0);
					break;
				
				case 0x00000001:
					Function_18(iParam0 + 60, 437, 3, 0);
					break;
				
				case 0x00000002:
					Function_18(iParam0 + 60, 438, 3, 0);
					break;
				
				case 0x00000003:
					Function_18(iParam0 + 60, 441, 3, 0);
					break;
				
				case 0x00000004:
					Function_18(iParam0 + 60, 443, 3, 0);
					break;
				
				case 0x00000005:
					Function_18(iParam0 + 60, 447, 3, 0);
					break;
				
				case 0x00000006:
					Function_18(iParam0 + 60, 448, 3, 0);
					break;
				
				case 0x00000007:
					Function_18(iParam0 + 60, 184, 3, 0);
					break;
				
				case 0x00000008:
					Function_18(iParam0 + 60, 185, 3, 0);
					break;
				
				case 0x00000009:
					Function_18(iParam0 + 60, 186, 3, 0);
					break;
				
				case 0x0000000A:
					Function_18(iParam0 + 60, 187, 3, 0);
					break;
				
				case 0x0000000B:
					Function_18(iParam0 + 60, 188, 3, 0);
					break;
			}
		}
		else if (Global_29004 == 0)
		{
			switch (bParam1)
			{
				case 0x00000000:
					Function_18(iParam0 + 60, 436, 3, 0);
					break;
				
				case 0x00000001:
					Function_18(iParam0 + 60, 437, 3, 0);
					break;
				
				case 0x00000002:
					Function_18(iParam0 + 60, 440, 3, 0);
					break;
				
				case 0x00000003:
					Function_18(iParam0 + 60, 441, 3, 0);
					break;
				
				case 0x00000004:
					Function_18(iParam0 + 60, 442, 3, 0);
					break;
				
				case 0x00000005:
					Function_18(iParam0 + 60, 443, 3, 0);
					break;
				
				case 0x00000006:
					Function_18(iParam0 + 60, 444, 3, 0);
					break;
				
				case 0x00000007:
					Function_18(iParam0 + 60, 445, 3, 0);
					break;
				
				case 0x00000008:
					Function_18(iParam0 + 60, 446, 3, 0);
					break;
				
				case 0x00000009:
					Function_18(iParam0 + 60, 425, 3, 0);
					break;
				
				case 0x0000000A:
					Function_18(iParam0 + 60, 427, 3, 0);
					break;
				
				case 0x0000000B:
					Function_18(iParam0 + 60, 428, 3, 0);
					break;
				}
		}
	}
	else if (iParam0->f_724 == 1)
	{
		switch (bParam1)
		{
			case 0x00000000:
				Function_18(iParam0 + 60, 379, 3, 0);
				break;
			
			case 0x00000001:
				Function_18(iParam0 + 60, 380, 3, 0);
				break;
			
			case 0x00000002:
				Function_18(iParam0 + 60, 381, 3, 0);
				break;
			
			case 0x00000003:
				Function_18(iParam0 + 60, 391, 3, 0);
				break;
			
			case 0x00000004:
				Function_18(iParam0 + 60, 392, 3, 0);
				break;
			
			case 0x00000005:
				Function_18(iParam0 + 60, 393, 3, 0);
				break;
			
			case 0x00000006:
				Function_18(iParam0 + 60, 395, 3, 0);
				break;
			
			case 0x00000007:
				Function_18(iParam0 + 60, 396, 3, 0);
				break;
			}
	}
	return;
}

var Function_18(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1953 / 6483
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_19(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_19(uParam0[iVar03], 8);
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

void Function_19(var uParam0, int iParam1) //Position: 0x1A23 / 6691
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

int Function_20(int iParam0, int iParam1) //Position: 0x1A34 / 6708
{
	switch (iParam1)
	{
		case 0x00000000:
		case 0x00000001:
			if (iParam0 == 0)
			{
				if (Global_29006 == Global_30717[0])
				{
					return 5;
				}
				if (Global_29004 == 2)
				{
					return 12;
				}
				if (Global_29004 == 0)
				{
					return 17;
				}
			}
			if (iParam0 == 1)
			{
				if (Global_30619 > 3)
				{
					return 6;
				}
				if (Global_29006 == Global_30685[0])
				{
					return 6;
				}
				return 6;
			}
			break;
		
		case 0x00000002:
			if (iParam0 == 0)
			{
				return 6;
			}
			if (iParam0 == 1)
			{
				return 6;
			}
			break;
		
		case 0x00000005:
			if (iParam0 == 0)
			{
				if (Global_29006 == Global_30717[0])
				{
					return 5;
				}
				if (Global_29004 == 2)
				{
					return 12;
				}
				if (Global_29004 == 0)
				{
					return 12;
				}
			}
			if (iParam0 == 1)
			{
				return 8;
			}
			break;
		
		case 0x00000003:
			switch (Global_29004)
			{
				case 0x00000000:
					return 9;
					break;
				
				case 0x00000002:
					return 9;
					break;
				
				case 0x00000001:
					return 9;
					break;
			}
			break;
	}
	return 4294967295;
}

void Function_21(int iParam0) //Position: 0x1B3B / 6971
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(iParam0->f_576))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_576))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_RIDING(bVar1))
				{
					AI_SET_NAV_MATERIAL_USAGE(bVar1, 96, 0);
				}
				else
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bVar1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x1B91 / 7057
{
	bool bVar0;
	bool bVar1;
	
	if (GET_CURRENT_GAME_TIME() <= uParam0->f_740)
	{
		if ((!uParam0->f_648 != 11 && !uParam0->f_648 != 5) && !uParam0->f_648 != 7)
		{
			return;
		}
		if (Global_29007 == 2)
		{
			return;
		}
		if ((!IS_ACTOR_RIDING(iParam1->f_48) && !IS_ACTOR_DRIVING_VEHICLE(iParam1->f_48)) && !IS_ACTOR_RIDING_VEHICLE(iParam1->f_48))
		{
			return;
		}
		if (!Function_36(Global_30750[6], 0, 4294967295, 0))
		{
			return;
		}
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(uParam0->f_576))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				Function_23(bVar1, uParam0);
			}
			bVar0++;
		}
		uParam0->f_740 = (GET_CURRENT_GAME_TIME() + 3.0f);
	}
	return;
}

void Function_23(bool bParam0, bool bParam1) //Position: 0x1C37 / 7223
{
	vector3 vVar0;
	vector3 vVar3;
	struct<6> Var6;
	bool bVar12;
	
	if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		return;
	}
	if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bParam1->f_576)))
	{
		return;
	}
	if (Function_91())
	{
		if (!NET_IS_OBJECT_LOCAL(bParam0))
		{
			return;
		}
	}
	GET_POSITION(bParam0, &vVar0);
	if (VDIST(vVar0, *(bParam1 + 416)) > 20.0f)
	{
		return;
	}
	if ((GET_CURRENT_GAME_TIME() - GET_LAST_ON_SCREEN_TIME_FOR_ACTOR(bParam0)) > 5.0f)
	{
		return;
	}
	if (WOULD_ACTOR_BE_VISIBLE(976, &vVar0, 3212836864))
	{
		return;
	}
	if (Function_33(GET_OBJECT_FROM_ACTOR(bParam0), 258) != "")
	{
		return;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar3);
	if (Function_91())
	{
		NET_OBJECT_REPLICATION_MODE_START(15, 5);
	}
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_32() };
	bVar12 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Function_24(bParam1->f_336, &Var6, Global_30750[6], vVar0, 0, 0, 23, 0), vVar0, vVar3);
	if (Function_91())
	{
		NET_ACTOR_SET_SCRIPT_INT(bVar12, 875);
		NET_OBJECT_REPLICATION_MODE_END(15);
	}
	ACCESSORIZE_HORSE(bVar12, 3);
	ACTOR_MOUNT_ACTOR(bParam0, bVar12);
	AI_CLEAR_NAV_MATERIAL_USAGE(bParam0);
	return;
}

var Function_24(var uParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7) //Position: 0x1D26 / 7462
{
	return Function_25(StackVal, StackVal, uParam0, uParam4, uParam5, uParam6, uParam7, 1, vParam1);
}

var Function_25(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x1D40 / 7488
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
		Function_31();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_30(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_29(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_29(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_28(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_30(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_28(bVar0))
				{
					Function_27();
				}
				Function_26(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_30(bVar1))
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

void Function_26(int iParam0) //Position: 0x2033 / 8243
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

void Function_27() //Position: 0x20E7 / 8423
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

bool Function_28(bool bParam0) //Position: 0x2121 / 8481
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

void Function_29(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x214E / 8526
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

bool Function_30(bool bParam0) //Position: 0x229F / 8863
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_31() //Position: 0x22B6 / 8886
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_27();
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
	Function_27();
	return;
}

struct<24> Function_32() //Position: 0x2301 / 8961
{
	char* cVar0[24];
	
	strcpy(&cVar0, "lawhorse", 24);
	stradd(&cVar0, INT_TO_STRING(Global_27769), 24);
	Global_27769++;
	if (Global_27769 > 99999)
	{
		Global_27769 = 0;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_33(bool bParam0, int iParam1) //Position: 0x233C / 9020
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return "";
	}
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	if (GET_OBJECT_TYPE(bParam0) == 3)
	{
		bVar1 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bParam0));
	}
	if (!IS_OBJECT_VALID(bVar1))
	{
		bVar1 = bParam0;
	}
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		DESTROY_ITERATOR(bVar0);
		return "";
	}
	GET_OBJECT_POSITION(bVar1, &vVar2);
	ITERATE_IN_LAYOUT(bVar0, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	bVar5 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar5))
	{
		if (DECOR_CHECK_EXIST(bVar5, "locflag"))
		{
			if (Function_35(GET_VOLUME_FROM_OBJECT(bVar5), iParam1))
			{
				if (IS_OBJECT_IN_VOLUME(bParam0, GET_VOLUME_FROM_OBJECT(bVar5)))
				{
					if (!DECOR_CHECK_EXIST(bVar5, "nocrime"))
					{
						DESTROY_ITERATOR(bVar0);
						return bVar5;
					}
				}
				if (IS_POINT_IN_VOLUME(vVar2, GET_VOLUME_FROM_OBJECT(bVar5)))
				{
					if (!DECOR_CHECK_EXIST(bVar5, "nocrime"))
					{
						DESTROY_ITERATOR(bVar0);
						return bVar5;
					}
				}
			}
		}
		bVar5 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	Function_34(&bVar0);
	ITERATE_IN_LAYOUT(bVar0, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 10);
	bVar5 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar5))
	{
		if (DECOR_CHECK_EXIST(bVar5, "locflag"))
		{
			if (Function_35(GET_VOLUME_FROM_OBJECT(bVar5), iParam1))
			{
				if (IS_OBJECT_IN_VOLUME(bParam0, GET_VOLUME_FROM_OBJECT(bVar5)))
				{
					if (!DECOR_CHECK_EXIST(bVar5, "nocrime"))
					{
						DESTROY_ITERATOR(bVar0);
						return bVar5;
					}
				}
				if (IS_POINT_IN_VOLUME(vVar2, GET_VOLUME_FROM_OBJECT(bVar5)))
				{
					if (!DECOR_CHECK_EXIST(bVar5, "nocrime"))
					{
						DESTROY_ITERATOR(bVar0);
						return bVar5;
					}
				}
			}
		}
		bVar5 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return "";
}

int Function_34(bool bParam0) //Position: 0x24D5 / 9429
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_213());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_213());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_35(bool bParam0, int iParam1) //Position: 0x2506 / 9478
{
	if (!DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(bParam0, "locflag") && iParam1) < 0;
}

bool Function_36(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2535 / 9525
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

void Function_37(int iParam0, bool bParam1) //Position: 0x255C / 9564
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	if (SQUAD_IS_VALID(iParam0->f_576))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(iParam0->f_336);
		ITERATE_IN_LAYOUT(bVar0, iParam0->f_336);
		ITERATE_ON_OBJECT_TYPE(bVar0, 15);
		if (!bParam1)
		{
			ITERATE_ON_PARTIAL_NAME(bVar0, "lawHorse");
		}
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar1 = GET_NUM_ITERATOR_MATCHES(bVar0);
		iVar4 = (iVar1 - SQUAD_GET_SIZE(iParam0->f_576));
		if (iVar4 >= 0)
		{
			iVar3 = 1;
		}
		if (iVar3 || bParam1)
		{
			bVar5 = START_OBJECT_ITERATOR(bVar0);
			while (IS_OBJECT_VALID(bVar5))
			{
				if (iVar2 <= iVar4)
				{
					bVar6 = GET_ACTOR_FROM_OBJECT(bVar5);
					if (IS_ACTOR_VALID(bVar6))
					{
						if (IS_ACTOR_HORSE(bVar6))
						{
							if (IS_ACTOR_ALIVE(bVar6))
							{
								if (GET_RIDER(bVar6) == "")
								{
									iVar7 = GET_TASK_STATUS(bVar6, 25);
									if ((iVar7 == 1 || Function_91()) || bParam1)
									{
										Function_7(bVar6, Function_190(), -1.0f, -1.0f, 0, 0);
										RELEASE_ACTOR(bVar6);
										iVar2++;
									}
								}
							}
							else
							{
								RELEASE_ACTOR(bVar6);
								iVar2++;
							}
						}
					}
				}
				bVar5 = OBJECT_ITERATOR_NEXT(bVar0);
			}
		}
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

int Function_38(int iParam0, int iParam1) //Position: 0x2656 / 9814
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar5;
	bool bVar6;
	
	if (GET_CURRENT_GAME_TIME() <= iParam0->f_464)
	{
		if (GET_OBJECTSET_SIZE(Global_62999) < 0)
		{
			return 0;
		}
		bVar1 = false;
		while (bVar1 <= GET_OBJECTSET_SIZE(Global_62999))
		{
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, Global_62999);
			bVar5 = "";
			if (IS_OBJECT_VALID(bVar0))
			{
				if (DECOR_CHECK_EXIST(bVar0, "lateSharedLaw"))
				{
					if (GET_OBJECT_TYPE(bVar0) == 15)
					{
						bVar5 = GET_ACTOR_FROM_OBJECT(bVar0);
						if (IS_ACTOR_VALID(bVar5))
						{
							REFERENCE_ACTOR(bVar5);
							TASK_CLEAR(bVar5);
							MEMORY_REPORT_POSITION_AUTO(bVar5, Global_34573, false);
							TASK_OVERRIDE_CLEAR_MOVETYPE(bVar5);
							DECOR_REMOVE(bVar0, "lateSharedLaw");
						}
					}
					else if (GET_OBJECT_TYPE(bVar0) == 24)
					{
						bVar6 = GET_PERS_CHAR_FROM_OBJECT(bVar0);
						GET_OBJECT_POSITION(bVar6, &uVar2);
						if (!WOULD_ACTOR_BE_VISIBLE(false, &uVar2, 3212836864) || IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(bVar6)))
						{
							ACTIVATE_ACTOR_FOR_PERS_CHAR(bVar6);
							bVar5 = GET_ACTOR_FROM_PERS_CHAR(bVar6);
							if (IS_ACTOR_VALID(bVar5))
							{
								REFERENCE_ACTOR(bVar5);
								TASK_CLEAR(bVar5);
								MEMORY_REPORT_POSITION_AUTO(bVar5, Global_34573, false);
								Function_59(bVar6, 1);
								TASK_OVERRIDE_CLEAR_MOVETYPE(bVar5);
								DECOR_REMOVE(bVar0, "lateSharedLaw");
							}
						}
					}
				}
			}
			if (IS_ACTOR_VALID(bVar5))
			{
				if (IS_ACTOR_ALIVE(bVar5))
				{
					Function_39(iParam0, bVar5, iParam1->f_48);
				}
				iParam0->f_600++;
			}
			bVar1++;
		}
		iParam0->f_464 = (GET_CURRENT_GAME_TIME() + 3.0f);
	}
	return 0;
}

void Function_39(int iParam0, bool bParam1, bool bParam2) //Position: 0x27B3 / 10163
{
	int iVar0;
	bool bVar1;
	
	Function_42(bParam1, Function_56(Function_57(iParam0->f_724), *iParam0));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam1, 31, -1.0f);
	if (Function_91())
	{
		iVar0 = 878;
		switch (*iParam0)
		{
			case 0x00000000:
				iVar0 = 878;
				break;
			
			case 0x00000002:
				iVar0 = 879;
				break;
			
			case 0x00000003:
				iVar0 = 880;
				break;
			
			case 0x00000001:
				iVar0 = 881;
				break;
		}
		NET_ACTOR_SET_SCRIPT_INT(bParam1, iVar0);
		NET_ACTOR_SET_ALLOW_BLIP_SYNC(bParam1, 0);
		bVar1 = Function_41(bParam1);
		if (IS_LAYOUTREF_VALID(bVar1))
		{
			if (bVar1 != iParam0->f_336)
			{
				GIVE_OBJECT_TO_LAYOUT(bParam1, iParam0->f_336);
			}
		}
	}
	SQUAD_JOIN(bParam1, iParam0->f_576);
	SET_ACTOR_UPDATE_PRIORITY(bParam1, false);
	if (!Global_27759)
	{
		MEMORY_CONSIDER_AS_ENEMY(bParam1, bParam2);
	}
	MEMORY_IDENTIFY(bParam1, bParam2);
	MEMORY_REPORT_POSITION_AUTO(bParam1, Global_34573, false);
	MEMORY_REPORT_POSITION(bParam1, bParam2, iParam0 + 500);
	SET_ACTOR_VISION_XRAY(bParam1, false);
	ACTOR_DRAW_LAST_WEAPON(bParam1, 0);
	AI_BEHAVIOR_SET_ALLOW(bParam1, 0, 0);
	TASK_PRIORITY_SET(bParam1, 2);
	SET_TOUGH_ACTOR(bParam1, 1);
	if (*iParam0 == 2 && *iParam0 == 3)
	{
		AI_SET_RANGE_ACCURACY_MODIFIER(bParam1, bParam2, -8.0f);
	}
	AI_SET_NAV_ACTOR_WIDTH(GET_MOUNT(bParam1), 1,5f);
	if (iParam0->f_404)
	{
		DECOR_SET_BOOL(bParam1, "CanBeLasso", false);
	}
	if (Function_40(0x4000000))
	{
		SET_ACTOR_VISION_MAX_RANGE(bParam1, 45.0f, 1);
	}
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam1, 235.0f);
	if (iParam0->f_648 != 14)
	{
		if (!Global_27759 && Global_29006 == Global_30693[1])
		{
		}
	}
	else
	{
		if (IS_ACTOR_VALID(GET_MOUNT(bParam1)))
		{
			Function_7(GET_MOUNT(bParam1), Global_34573, -1.0f, -1.0f, 0, 0);
			RELEASE_ACTOR(GET_MOUNT(bParam1));
		}
		MEMORY_PREFER_WALKING(bParam1, true);
		SET_ACTOR_VISION_XRAY(bParam1, true);
	}
	if (GET_NUM_WEAPONS_IN_INVENTORY(bParam1) == 0)
	{
		if (!DECOR_CHECK_EXIST(bParam1, "lawSetSpawnParams"))
		{
			GIVE_WEAPON_TO_ACTOR(bParam1, 4, false, 1, 1);
		}
	}
	MEMORY_PREFER_MELEE(bParam1, 0);
	MEMORY_ALLOW_SHOOTING(bParam1, true);
	if (!iParam0->f_544)
	{
		AI_SET_SHOTS_PER_BURST(bParam1, 1);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam1, 5.0f, 2.0f);
		AI_SET_BURST_DURATION(bParam1, 0,1f);
		AI_SET_BURST_DURATION_RANDOMNESS(bParam1, 0.0f);
		AI_SET_FIRE_DELAY(bParam1, 2.0f);
		AI_SET_FIRE_DELAY_RANDOMNESS(bParam1, 2.0f);
	}
	DECOR_SET_BOOL(bParam1, "lawSetSpawnParams", true);
	return;
}

bool Function_40(int iParam0) //Position: 0x29E6 / 10726
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_41(bool bParam0) //Position: 0x2A04 / 10756
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

void Function_42(bool bParam0, int iParam1) //Position: 0x2A5E / 10846
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_55(bParam0);
			break;
		
		case 0x00000001:
			Function_54(bParam0);
			break;
		
		case 0x00000002:
			Function_53(bParam0);
			break;
		
		case 0x00000005:
			Function_52(bParam0);
			break;
		
		case 0x00000004:
			Function_51(bParam0);
			break;
		
		case 0x00000003:
			Function_50(bParam0);
			break;
		
		case 0x00000006:
			Function_49(bParam0);
			break;
		
		case 0x00000007:
			Function_48(bParam0);
			break;
		
		case 0x00000008:
			Function_47(bParam0);
			break;
		
		case 0x00000009:
			Function_45(bParam0);
			break;
		
		default:
			Function_43(bParam0);
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

void Function_43(bool bParam0) //Position: 0x2B2A / 11050
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0,75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_44(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_44(var uParam0, bool bParam1) //Position: 0x2E8E / 11918
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

void Function_45(bool bParam0) //Position: 0x2EB0 / 11952
{
	Function_43(bParam0);
	Function_46(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 90.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 180.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, true);
	return;
}

void Function_46(bool bParam0, int iParam1) //Position: 0x304D / 12365
{
	int iVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	iVar0 = AI_PREDICATE_FIND_NAMED("Guard", 0);
	if (AI_PREDICATE_IS_VALID(iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar0, iParam1);
	}
	return;
}

void Function_47(bool bParam0) //Position: 0x3080 / 12416
{
	Function_43(bParam0);
	Function_46(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 85.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,65f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 150.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2,25f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, true);
	return;
}

void Function_48(bool bParam0) //Position: 0x3229 / 12841
{
	Function_43(bParam0);
	Function_46(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 135.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, true);
	return;
}

void Function_49(bool bParam0) //Position: 0x33BA / 13242
{
	Function_43(bParam0);
	Function_46(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, false);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
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
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_50(bool bParam0) //Position: 0x34EC / 13548
{
	Function_43(bParam0);
	Function_46(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 70.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	return;
}

void Function_51(bool bParam0) //Position: 0x3674 / 13940
{
	Function_43(bParam0);
	Function_46(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2,25f);
	return;
}

void Function_52(bool bParam0) //Position: 0x37CE / 14286
{
	Function_43(bParam0);
	Function_46(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_53(bool bParam0) //Position: 0x390C / 14604
{
	Function_43(bParam0);
	Function_46(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

void Function_54(bool bParam0) //Position: 0x392F / 14639
{
	Function_43(bParam0);
	Function_46(bParam0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,25f);
	return;
}

void Function_55(bool bParam0) //Position: 0x3A99 / 15001
{
	Function_43(bParam0);
	Function_46(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

int Function_56(int iParam0, int iParam1) //Position: 0x3AD4 / 15060
{
	if (iParam1 != 2 || iParam0 <= 800)
	{
		return 9;
	}
	if (iParam1 != 3 || iParam0 <= 400)
	{
		return 8;
	}
	return 7;
}

int Function_57(int iParam0) //Position: 0x3AFD / 15101
{
	if (!Function_58(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_58(int iParam0) //Position: 0x3B15 / 15125
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

int Function_59(bool bParam0, bool bParam1) //Position: 0x3B2A / 15146
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			REFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
			if (bParam1)
			{
				if (IS_ACTOR_HOGTIED(bVar0))
				{
					FREE_FROM_HOGTIE(bVar0);
				}
			}
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 1);
			return 1;
		}
	}
	return 0;
}

bool Function_60(int iParam0, bool bParam1) //Position: 0x3BCC / 15308
{
	int iVar0;
	
	if (!Function_88(1))
	{
		return 250;
	}
	if (bParam1->f_60 != Global_29006)
	{
		return 250;
	}
	iVar0 = 16;
	if (Function_91())
	{
		iVar0 = 10;
		if (Function_86(Global_29006) >= iVar0)
		{
			return 250;
		}
	}
	if (Function_85(iParam0, 1) <= iParam0->f_592 || SQUAD_GET_SIZE(iParam0->f_576) <= iVar0)
	{
		return 250;
	}
	if (!IS_ACTOR_VALID(Function_61(iParam0, iParam0->f_336, iParam0->f_576, iParam0 + 596, bParam1->f_48, 1)))
	{
		return 250;
	}
	iParam0->f_344 = GET_CURRENT_GAME_TIME();
	iParam0->f_632 = bParam1->f_44;
	return 0;
}

var Function_61(int iParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x3C59 / 15449
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	var uVar12;
	int iVar14;
	
	if (!SQUAD_IS_VALID(bParam2))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		return "";
	}
	if ((!iParam0->f_672 != 2 && !iParam0->f_672 != 3) && iParam0->f_372 <= iParam0->f_368)
	{
		return "";
	}
	if (iParam0->f_672 == 3)
	{
		iParam0->f_672 = 0;
		return "";
	}
	if (iParam0->f_600 <= *uParam3 && !Function_91())
	{
		if (SQUAD_GET_SIZE(iParam0->f_576) <= 1)
		{
			iParam0->f_648 = 24;
		}
		return "";
	}
	if (!IS_PLAYER_CONTROLLABLE(0))
	{
		return "";
	}
	Function_84(iParam0 + 416, 40.0f, &vVar4, 10);
	Function_84(iParam0 + 680, 40.0f, &vVar1, 10);
	if (iParam0->f_672 == 2)
	{
		if (Function_82(StackVal, StackVal, vVar1))
		{
			iParam0->f_672 = 0;
			return "";
		}
	}
	vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar4, StackVal) };
	vVar7 = { 0.0f, UNK_0x9C40E671(&vVar7), 0.0f };
	if (iParam0->f_372 <= iParam0->f_368)
	{
		bVar11 = true;
		if (!iParam0->f_692)
		{
			bVar10 = true;
		}
	}
	else if (!Global_30767[23])
	{
		bVar10 = false;
	}
	else
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (iParam0->f_648 != 13 || iParam0->f_648 != 14)
		{
			bVar10 = false;
		}
	}
	if (!bVar11)
	{
		if (bVar10)
		{
			if (!Function_81(2))
			{
				bVar10 = false;
				if (!Function_81(1))
				{
					return "";
				}
			}
		}
		if (!Function_81(1))
		{
			return "";
		}
	}
	uVar12 = 1;
	if (!Function_80(StackVal, StackVal, vVar1) || bVar11)
	{
		if (Function_79(&vVar1, iParam0 + 416) > Function_78(iParam0, bVar10))
		{
			bVar0 = Function_62(StackVal, StackVal, StackVal, StackVal, iParam0, bParam1, vVar1, vVar7, &uVar12, iVar14, bVar11, bVar10, bParam5);
		}
		else if (iParam0->f_672 == 2)
		{
			iParam0->f_672 = 0;
		}
	}
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_672 = 0;
		if (IS_ACTOR_ALIVE(bVar0))
		{
			Function_39(iParam0, bVar0, bParam4);
		}
		iParam0->f_600++;
	}
	return bVar0;
}

var Function_62(int iParam0, bool bParam1, vector3 vParam2, vector3 vParam5, var uParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12) //Position: 0x3E4A / 15946
{
	bool bVar0;
	char* cVar1[32];
	int iVar9;
	struct<6> Var10;
	bool bVar16;
	
	if (Function_91())
	{
		NET_OBJECT_REPLICATION_MODE_START(15, 5);
	}
	if (bParam10)
	{
		bVar0 = Function_77(iParam0);
	}
	if (!IS_ACTOR_VALID(bVar0) && !(bParam10 && !bParam12))
	{
		Function_72(iParam0);
		if (iParam0->f_588 > 0)
		{
			if (Function_91())
			{
				cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("mplaw", bParam1) };
			}
			else
			{
				strcpy(&cVar1, Function_213(), 32);
			}
			if (!bParam11)
			{
				bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam1, &cVar1, Function_67(iParam0), vParam2, vParam5);
			}
			else
			{
				iVar9 = Function_66(StackVal, StackVal, Global_30750[6], vParam2, 4, 23, 0);
				if (Function_65(iVar9, uParam8))
				{
					iVar9 = 976;
				}
				(*uParam8)[iParam9] = iVar9;
				Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_32() };
				bVar0 = Function_64(StackVal, StackVal, StackVal, StackVal, bParam1, &cVar1, Function_67(iParam0), &Var10, iVar9, vParam2, vParam5);
			}
		}
		if (IS_ACTOR_VALID(bVar0))
		{
			Function_63(iParam0);
		}
	}
	if (Function_91())
	{
		bVar16 = GET_MOUNT(bVar0);
		if (IS_ACTOR_VALID(bVar16))
		{
			NET_ACTOR_SET_SCRIPT_INT(bVar16, 875);
		}
		NET_OBJECT_REPLICATION_MODE_END(15);
	}
	return bVar0;
}

void Function_63(bool bParam0) //Position: 0x3F49 / 16201
{
	if (bParam0->f_588 > 0)
	{
		bParam0->f_616++;
		(*bParam0 + 208)[bParam0->f_588] = bParam0->f_616;
	}
	return;
}

bool Function_64(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x3F74 / 16244
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_30(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_30(bParam4))
	{
		bParam4 = 976;
	}
	bVar1 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam3, bParam4, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar1);
		return "";
	}
	ACCESSORIZE_HORSE(bVar1, 3);
	ACTOR_MOUNT_ACTOR(bVar0, bVar1);
	return bVar0;
}

bool Function_65(int iParam0, int iParam1) //Position: 0x40CA / 16586
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

var Function_66(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x40FC / 16636
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

var Function_67(int iParam0) //Position: 0x4114 / 16660
{
	int iVar0;
	
	iVar0 = (*iParam0 + 60)[iParam0->f_5883];
	if (Function_30(iVar0))
	{
		return iVar0;
	}
	return 4294967295;
}

struct<32> Function_68(bool bParam0, bool bParam1) //Position: 0x4133 / 16691
{
	struct<8> Var0;
	bool bVar8;
	
	if (!IS_STRING_VALID(bParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69(bParam0) };
	bVar8 = FIND_OBJECT_IN_LAYOUT(bParam1, &Var0);
	while (IS_OBJECT_VALID(bVar8))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_69(bParam0) };
		bVar8 = FIND_OBJECT_IN_LAYOUT(bParam1, &Var0);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

struct<32> Function_69(bool bParam0) //Position: 0x4182 / 16770
{
	char* cVar0[32];
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_91())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_71(bParam0);
	}
	if (!IS_STRING_VALID(bParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&Var8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&Var8) <= 4)
		{
			memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_70("0", &Var8, ""), 4);
		}
		bVar12 = GET_LOCAL_SLOT();
		memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_70(I2STR(bVar12), &Var8, ""), 4);
		while (STRING_LENGTH(&Var8) <= 6)
		{
			memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_70("0", &Var8, ""), 4);
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

struct<32> Function_70(char* cParam0, char* cParam1, char* cParam2) //Position: 0x4231 / 16945
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_71(bool bParam0) //Position: 0x4250 / 16976
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_70("0", &cVar8, ""), 4);
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

void Function_72(int iParam0) //Position: 0x42BA / 17082
{
	iParam0->f_588 = Function_73(iParam0, 1);
	return;
}

int Function_73(int iParam0, bool bParam1) //Position: 0x42CB / 17099
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = RAND_INT_RANGE(false, 11);
	bVar0 = bVar1;
	while (bVar0 < 11)
	{
		if (Function_76(iParam0, bVar0))
		{
			if (!Function_75(iParam0, bVar0))
			{
				return bVar0;
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < bVar1)
	{
		if (Function_76(iParam0, bVar0))
		{
			if (!Function_75(iParam0, bVar0))
			{
				return bVar0;
			}
		}
		bVar0++;
	}
	if (bParam1)
	{
		Function_74(iParam0);
		return Function_73(iParam0, 0);
	}
	return 4294967295;
}

void Function_74(int iParam0) //Position: 0x4342 / 17218
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = (iParam0->f_612 - 4);
	if (iVar1 >= 8)
	{
		iVar1 = 8;
	}
	iVar2 = (iParam0->f_616 - iVar1);
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((*iParam0 + 208)[iVar0] <= iVar2)
		{
			(*iParam0 + 208)[iVar0] = 0;
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 <= 3)
	{
		iVar0 = 0;
		while (iVar0 < 11)
		{
			(*iParam0 + 208)[iVar0] = 0;
			iVar0++;
		}
	}
	return;
}

bool Function_75(int iParam0, bool bParam1) //Position: 0x43BA / 17338
{
	if ((*iParam0 + 208)[bParam1] >= 0)
	{
		return 1;
	}
	return 0;
}

bool Function_76(int iParam0, bool bParam1) //Position: 0x43CF / 17359
{
	bool bVar0;
	
	bVar0 = (*iParam0 + 60)[bParam13];
	if (bVar0 != 0)
	{
		if (STREAMING_IS_ACTOR_LOADED(bVar0, 4294967295))
		{
			return 1;
		}
	}
	return 0;
}

var Function_77(int iParam0) //Position: 0x43F1 / 17393
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (iParam0->f_372 > iParam0->f_368)
	{
		return "";
	}
	if (GET_OBJECTSET_SIZE(Global_62999) < iParam0->f_372)
	{
		return "";
	}
	if (GET_OBJECT_TYPE(GET_INDEXED_OBJECT_IN_OBJECTSET(iParam0->f_372, Global_62999)) == 15)
	{
		bVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iParam0->f_372, Global_62999));
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTOR_ALIVE(bVar0))
			{
				REFERENCE_ACTOR(bVar0);
				TASK_CLEAR(bVar0);
				MEMORY_REPORT_POSITION_AUTO(bVar0, Global_34573, false);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bVar0);
				iParam0->f_372++;
			}
			else
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar0, Global_62999);
				iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
			}
		}
		else
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, Global_62999);
			iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
		}
	}
	else if (GET_OBJECT_TYPE(GET_INDEXED_OBJECT_IN_OBJECTSET(iParam0->f_372, Global_62999)) == 24)
	{
		bVar1 = GET_PERS_CHAR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iParam0->f_372, Global_62999));
		GET_OBJECT_POSITION(bVar1, &uVar2);
		if (!WOULD_ACTOR_BE_VISIBLE(false, &uVar2, 3212836864) || IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(bVar1)))
		{
			ACTIVATE_ACTOR_FOR_PERS_CHAR(bVar1);
			bVar0 = GET_ACTOR_FROM_PERS_CHAR(bVar1);
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_ALIVE(bVar0))
				{
					REFERENCE_ACTOR(bVar0);
					TASK_CLEAR(bVar0);
					MEMORY_REPORT_POSITION_AUTO(bVar0, Global_34573, false);
					iParam0->f_372++;
					Function_59(bVar1, 1);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bVar0);
				}
				else
				{
					REMOVE_OBJECT_FROM_OBJECTSET(bVar1, Global_62999);
					iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
				}
			}
			else if (!IS_PERS_CHAR_ALIVE(bVar1))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar1, Global_62999);
				iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
			}
			else
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_PERS_CHAR(bVar1), "lateSharedLaw", true);
				iParam0->f_372++;
			}
		}
	}
	Function_11(bVar0, 1);
	return bVar0;
}

float Function_78(float fParam0, bool bParam1) //Position: 0x458F / 17807
{
	if (SQUAD_IS_VALID(fParam0->f_580))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(fParam0->f_580) >= 0)
		{
			return 225.0f;
		}
	}
	if (Global_3386)
	{
		if (Global_29006 != Global_30640[4])
		{
			if (!bParam1)
			{
				if (!Function_91())
				{
					return 110.0f;
				}
				return 185.0f;
			}
			return 185.0f;
		}
		return 225.0f;
	}
	return 225.0f;
}

float Function_79(var uParam0, int iParam1) //Position: 0x45FA / 17914
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_80(vector3 vParam0) //Position: 0x4618 / 17944
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_81(int iParam0) //Position: 0x4630 / 17968
{
	if ((GET_MAX_NUM_OBJECTS_OF_TYPE(15) - GET_NUM_OBJECTS_OF_TYPE(15)) > iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_82(vector3 vParam0) //Position: 0x4649 / 17993
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { vParam0.x, (vParam0.y + 0,5f), vParam0.z };
	iVar3 = GET_MATERIAL_AT_VECTOR(&vVar0);
	if (iVar3 >= 0 || Function_83(iVar3, 1024))
	{
		return 1;
	}
	return 0;
}

bool Function_83(var uParam0, int iParam1) //Position: 0x467D / 18045
{
	return (uParam0 && iParam1) == 0;
}

int Function_84(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x468A / 18058
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
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*uParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*uParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*uParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_80(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*uParam0 = (*uParam0 + 0,01f);
		uParam0->f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_80(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *uParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(false);
	}
	return 0;
}

int Function_85(int iParam0, bool bParam1) //Position: 0x47BC / 18364
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(iParam0->f_576))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(iParam0->f_576) < 0)
	{
		return 0;
	}
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_576))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (!IS_ACTOR_HOGTIED(bVar2) || !bParam1)
			{
				if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar2), SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(iParam0->f_576)))
				{
					iVar0++;
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

int Function_86(int iParam0) //Position: 0x4836 / 18486
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (Function_87(iParam0))
	{
		bVar1 = false;
		while (bVar1 <= 16)
		{
			if (IS_SLOT_VALID(bVar1))
			{
				if (Global_76943[bVar196] == iParam0)
				{
					iVar0 = (iVar0 + Global_76943[bVar196].f_116);
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

bool Function_87(int iParam0) //Position: 0x4880 / 18560
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_88(bool bParam0) //Position: 0x4896 / 18582
{
	if (Function_40(256))
	{
		return 0;
	}
	if (Function_40(262144))
	{
		return 0;
	}
	if (Function_90())
	{
		return 0;
	}
	if (!Function_40(1))
	{
		return 0;
	}
	if (!Function_40(4096))
	{
		return 0;
	}
	if (bParam0 && Function_89(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_40(2048))
	{
		return 0;
	}
	if (Function_91() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_89(int iParam0) //Position: 0x490C / 18700
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_90() //Position: 0x491D / 18717
{
	if (Global_30619 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_91() //Position: 0x4936 / 18742
{
	return NET_IS_MANAGER_INITIALIZED();
}

var Function_92(int iParam0, int iParam1) //Position: 0x493F / 18751
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	float fVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	bVar8 = false;
	bVar9 = false;
	if (GET_CURRENT_GAME_TIME() <= iParam0->f_472)
	{
		iParam0->f_472 = (GET_CURRENT_GAME_TIME() + 5.0f);
		bVar8 = true;
	}
	if (SQUAD_GET_SIZE(iParam0->f_576) >= 0)
	{
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_576))
		{
			bVar7 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar1);
			if (IS_ACTOR_VALID(bVar7))
			{
				GET_POSITION(bVar7, &vVar2);
				fVar5 = Function_78(iParam0, !GET_MOUNT(bVar7) != "");
				bVar6 = VDIST(vVar2, *(iParam0 + 416));
				if (!bVar9)
				{
					if (!Function_13(bVar7))
					{
						if (Function_95(bVar7, bVar6, fVar5, bVar8))
						{
							iParam0->f_600 = (iParam0->f_600 - 1);
							iVar0 = 1;
							bVar9 = true;
						}
					}
				}
				Function_93(iParam0, bVar7, bVar6, fVar5, iParam1->f_48);
			}
			bVar1++;
		}
	}
	if (SQUAD_GET_SIZE(iParam0->f_580) >= 0)
	{
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_580))
		{
			if (!bVar9)
			{
				bVar7 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_580, bVar1);
				GET_POSITION(bVar7, &vVar2);
				fVar5 = Function_78(iParam0, 0);
				bVar6 = VDIST(vVar2, *(iParam0 + 416));
				if (Function_95(bVar7, bVar6, fVar5, bVar8))
				{
					bVar9 = true;
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

void Function_93(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x4A6B / 19051
{
	float fVar0;
	vector3 vVar1;
	
	if (!IS_ACTOR_ALIVE(bParam1))
	{
		return;
	}
	if (fParam2 < fParam3)
	{
		return;
	}
	if (!Function_94(iParam0))
	{
		fVar0 = 40.0f;
	}
	else
	{
		fVar0 = 70.0f;
	}
	if ((IS_ACTOR_VALID(GET_MOUNT(bParam1)) && !IS_ACTOR_VALID(GET_MOUNT(bParam4))) && !IS_ACTOR_VALID(GET_VEHICLE(bParam4)))
	{
		if (fParam2 > fVar0 || GET_TASK_STATUS(bParam1, 61) != 4)
		{
			Function_7(GET_MOUNT(bParam1), bParam1, -1.0f, -1.0f, 0, 0);
			TASK_OVERRIDE_SET_MOVETYPE(GET_MOUNT(bParam1), 4);
			TASK_DISMOUNT(bParam1, 1);
			MEMORY_PREFER_WALKING(bParam1, true);
		}
	}
	else if (!IS_ACTOR_VALID(GET_MOUNT(bParam1)) && (IS_ACTOR_VALID(GET_MOUNT(bParam4)) || IS_ACTOR_VALID(GET_VEHICLE(bParam4))))
	{
		if (IS_ACTOR_VALID(GET_MOUNT(bParam4)))
		{
			GET_ACTOR_VELOCITY(GET_MOUNT(bParam4), &vVar1);
		}
		else
		{
			GET_ACTOR_VELOCITY(GET_VEHICLE(bParam4), &vVar1);
		}
		if (VMAG(vVar1) < 0,25f || fParam2 < 10.0f)
		{
			if (GET_TASK_STATUS(bParam1, 12) == 1)
			{
				TASK_CLEAR(bParam1);
			}
			MEMORY_PREFER_RIDING(bParam1, true);
		}
	}
}

bool Function_94(int iParam0) //Position: 0x4B6C / 19308
{
	if (Global_29006 == Global_30693[1])
	{
		if (StackVal && (StackVal && (iParam0->f_416 < -1744,93f && iParam0->f_416 > -1673,62f) > 4261,5f) < 4181,3f)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_95(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x4BB7 / 19383
{
	vector3 vVar0;
	
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		if (bParam1 < fParam2)
		{
			if (!Function_96(bParam0, 1.0f, (fParam2 + 10.0f), 1, 1, 0))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
				{
					Function_7(GET_MOUNT(bParam0), Global_34573, -1.0f, -1.0f, 0, 0);
					RELEASE_ACTOR(GET_MOUNT(bParam0));
				}
				if (IS_ACTOR_VALID(bParam0))
				{
					SQUAD_LEAVE(bParam0);
					TASK_CLEAR(bParam0);
					MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
					Function_7(bParam0, Global_34573, -1.0f, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bParam0, false);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
					}
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bParam0)))
					{
						Function_12(GET_PERS_CHAR_FROM_ACTOR(bParam0));
						DEREFERENCE_ACTOR(bParam0);
					}
					else
					{
						RELEASE_ACTOR(bParam0);
					}
				}
				return 1;
			}
		}
	}
	if (bParam1 < (fParam2 * 0,8f))
	{
		GET_ACTOR_VELOCITY(bParam0, &vVar0);
		if (!DECOR_CHECK_EXIST(bParam0, "nstuckTime"))
		{
			if (VMAG(vVar0) >= 0,25f)
			{
				if (!IS_ACTOR_HOGTIED(bParam0))
				{
					DECOR_SET_FLOAT(bParam0, "nstuckTime", GET_CURRENT_GAME_TIME());
					return 0;
				}
			}
		}
		if (VMAG(vVar0) < 0,25f)
		{
			DECOR_REMOVE(bParam0, "nstuckTime");
			return 0;
		}
		if (DECOR_GET_FLOAT(bParam0, "nstuckTime") + 10.0f) > GET_CURRENT_GAME_TIME()
		{
			if (!Function_96(bParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
				{
					Function_7(GET_MOUNT(bParam0), Global_34573, -1.0f, -1.0f, 0, 0);
					RELEASE_ACTOR(GET_MOUNT(bParam0));
				}
				if (IS_ACTOR_VALID(bParam0))
				{
					SQUAD_LEAVE(bParam0);
					TASK_CLEAR(bParam0);
					MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
					Function_7(bParam0, Global_34573, -1.0f, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bParam0, false);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
					}
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bParam0)))
					{
						Function_12(GET_PERS_CHAR_FROM_ACTOR(bParam0));
						DEREFERENCE_ACTOR(bParam0);
					}
					else
					{
						RELEASE_ACTOR(bParam0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_96(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x4DB7 / 19895
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

int Function_97(int iParam0, bool bParam1) //Position: 0x4DD1 / 19921
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_98(int iParam0, int iParam1) //Position: 0x4DE3 / 19939
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<9> Var3;
	var uVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar25;
	vector3 vVar26;
	
	if ((GET_CURRENT_GAME_TIME() - iParam0->f_356) < 15.0f)
	{
		VSCALE(iParam0 + 512, 0,99f);
	}
	*(iParam0 + 524) = { StackVal, StackVal, *(iParam0 + 512) };
	VSCALE(iParam0 + 524, (GET_CURRENT_GAME_TIME() - iParam0->f_356));
	*(iParam0 + 524) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 500), *(iParam0 + 524), StackVal) };
	Function_84(iParam0 + 524, 10.0f, iParam0 + 524, 10);
	switch (iParam0->f_648)
	{
		case 0x00000000:
			Function_165("LAW_AI_STATE: INIT", 11);
			iVar0 = (Function_85(iParam0, 1) / 2);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_164(iParam0->f_576);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 2, iVar0);
			TASK_GO_TO_COORD_NONSTOP(0, iParam0 + 524, 3, 10.0f);
			iParam0->f_652 = SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 2, 4294967295);
			TASK_GO_NEAR_COORD(false, iParam0 + 488, 10.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_163(iParam0->f_576, 1);
			iParam0->f_648 = 1;
		
		case 0x00000001:
			Function_162(iParam0, iParam1, 0);
			if (!Function_94(iParam0))
			{
				if (Function_161(iParam1->f_52, iParam1->f_48, 1))
				{
					iParam0->f_648 = 4;
					return 0;
				}
				if (Function_159(iParam0->f_576, iParam1->f_48, 20.0f, 1))
				{
					iParam0->f_648 = 4;
					return 0;
				}
				if (Function_159(iParam0->f_580, iParam1->f_48, 20.0f, 1))
				{
					iParam0->f_648 = 4;
					return 0;
				}
				iParam0->f_648 = 6;
				return 0;
			}
			iParam0->f_648 = 6;
			return 0;
			break;
		
		case 0x00000004:
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_164(iParam0->f_576);
			Function_165("LAW_AI_STATE: ARREST - SHOOT", 11);
			if (!Function_94(iParam0) && Global_13094 >= 0,2f)
			{
				SQUAD_GOAL_ADD_COMBAT(iParam0->f_576, 2, 4294967295, 0);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 1, iParam0->f_412, 3, 0);
				Function_163(iParam0->f_576, 1);
				iParam0->f_408 = 0;
			}
			else
			{
				SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, false, 1, 4294967295);
				TASK_KILL_CHAR(false, iParam1->f_48);
				if (!Function_94(iParam0))
				{
					Function_163(iParam0->f_576, 0);
				}
				else
				{
					Function_163(iParam0->f_576, 1);
				}
				iParam0->f_408 = 1;
				iParam0->f_484 = GET_CURRENT_GAME_TIME();
			}
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_164(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_580, 1, iParam0->f_412, 3, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			if (iParam0->f_536 > 0.0f)
			{
				if (*iParam0 != 0 || *iParam0 != 1)
				{
					Function_162(iParam0, iParam1, 1);
				}
			}
			iParam0->f_648 = 5;
		
		case 0x00000005:
			if (Function_155(iParam0))
			{
				return 0;
			}
			if (!StackVal && !Global_29006 != Global_30693[1])
			{
				if ((iParam0->f_560 && (iParam0->f_376 + 5.0f) > GET_CURRENT_GAME_TIME()) && !iParam0->f_568)
				{
					iParam0->f_648 = 13;
					return 0;
				}
			}
			bVar18 = false;
			if (SQUAD_IS_VALID(iParam0->f_580))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(iParam0->f_580) >= 0)
				{
					bVar18 = true;
				}
			}
			if (!bVar18)
			{
				if (!Function_161(iParam1->f_52, iParam1->f_48, 1))
				{
					if (!Function_154(iParam0, 5.0f))
					{
						if (!Function_152(StackVal, StackVal, iParam0->f_576, *(iParam0 + 416), 20.0f))
						{
							if (!iParam0->f_568 && !Function_94(iParam0))
							{
								iParam0->f_648 = 6;
								return 0;
							}
						}
						if (Global_13094 < 0,2f)
						{
							if (!iParam0->f_568 && !iParam0->f_408)
							{
								iParam0->f_648 = 4;
								return 0;
							}
						}
					}
				}
				if (iParam0->f_408)
				{
					if (!iParam0->f_568)
					{
						if (GET_CURRENT_GAME_TIME() <= (iParam0->f_484 + 10.0f))
						{
							if (StackVal && !Function_152(StackVal, (StackVal && Function_152(StackVal, Function_154(iParam0, 10.0f), iParam0->f_576, *(iParam0 + 416), 15.0f)), iParam0->f_576, *(iParam0 + 416), 5.0f))
							{
								iParam0->f_648 = 4;
								return 0;
							}
						}
					}
				}
			}
			if (SQUAD_IS_VALID(iParam0->f_576))
			{
				if (!Function_151(iParam0->f_576, iParam1->f_48, 0))
				{
					if (!iParam0->f_568 && !Function_94(iParam0))
					{
						iParam0->f_648 = 6;
						return 0;
					}
				}
			}
			if (iParam0->f_480 != 0.0f)
			{
				if (Function_159(iParam0->f_576, Function_190(), 25.0f, 0))
				{
					iParam0->f_480 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x00000006:
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_164(iParam0->f_576);
			Function_165("LAW_AI_STATE: GIVE CHASE", 11);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, false, 1, 4294967295);
			TASK_GO_NEAR_ACTOR(0, iParam1->f_48, 15.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_164(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_580, 1, iParam0->f_412, 3, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_163(iParam0->f_576, 1);
			iParam0->f_648 = 7;
		
		case 0x00000007:
			if (Function_155(iParam0))
			{
				return 0;
			}
			*(iParam0 + 500) = { StackVal, StackVal, *(iParam0 + 416) };
			*(iParam0 + 524) = { StackVal, StackVal, *(iParam0 + 500) };
			GET_ACTOR_VELOCITY(iParam1->f_48, iParam0 + 512);
			bVar18 = false;
			if (SQUAD_IS_VALID(iParam0->f_580))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(iParam0->f_580) >= 0)
				{
					bVar18 = true;
				}
			}
			if (!Function_94(iParam0))
			{
				if (Function_152(StackVal, StackVal, iParam0->f_576, *(iParam0 + 416), 20.0f))
				{
					if (!iParam0->f_568)
					{
						iParam0->f_648 = 4;
						return 0;
					}
				}
			}
			if (Function_152(StackVal, StackVal, iParam0->f_576, *(iParam0 + 416), 80.0f))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					return 0;
				}
			}
			if (!bVar18)
			{
				if (Function_161(iParam1->f_52, iParam1->f_48, 1))
				{
					if (!iParam0->f_568)
					{
						iParam0->f_648 = 4;
						return 0;
					}
				}
				if (!Function_154(iParam0, 20.0f) && !Global_29006 != Global_30693[1])
				{
					if (!iParam0->f_568)
					{
						iParam0->f_648 = 8;
						return 0;
					}
				}
			}
			if (SQUAD_IS_VALID(iParam0->f_576))
			{
				if (Function_151(iParam0->f_576, iParam1->f_48, 0))
				{
					if (!iParam0->f_568)
					{
						iParam0->f_648 = 4;
						return 0;
					}
				}
			}
			if (iParam0->f_480 != 0.0f)
			{
				if (Function_159(iParam0->f_576, Function_190(), 25.0f, 0))
				{
					iParam0->f_480 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_150(iParam0))
			{
				iParam0->f_648 = 4;
				return 0;
			}
			break;
		
		case 0x00000008:
			Function_165("LAW_AI_STATE: PURSUE", 11);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_164(iParam0->f_576);
			if (!IS_OBJECT_VALID(iParam0->f_664))
			{
				iParam0->f_664 = CREATE_POINT_IN_LAYOUT(iParam0->f_336, Function_213(), *(iParam0 + 524), 0.0f, 0.0f, 0.0f);
			}
			else
			{
				SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 0, 4294967295);
			TASK_SEARCH_FOR_OBJECT(0, iParam1->f_48, 0, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_164(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_163(iParam0->f_576, 1);
			Function_149(iParam0, 0);
			iParam0->f_648 = 9;
		
		case 0x00000009:
			if (Function_155(iParam0))
			{
				return 0;
			}
			bVar21 = Function_146(iParam1->f_48, 3);
			if (!iParam0->f_348 != bVar21 && IS_CRIME_VALID(bVar21))
			{
				if (IS_CRIME_VALID(bVar21))
				{
					iParam0->f_348 = bVar21;
					GET_CRIME_POSITION(iParam0->f_348, iParam0 + 488);
					if (GET_CRIME_END_TIMESTAMP(iParam0->f_348) < iParam0->f_440)
					{
						iParam0->f_440 = GET_CRIME_END_TIMESTAMP(iParam0->f_348);
					}
				}
			}
			if (IS_OBJECT_VALID(iParam0->f_664))
			{
				if (Function_145(iParam0->f_580) >= 0)
				{
					SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 416));
				}
				else
				{
					SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
				}
			}
			if (Function_154(iParam0, 0x3f800000))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					return 0;
				}
			}
			if (!Function_154(iParam0, 20.0f) && !Global_3386)
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 10;
					return 0;
				}
			}
			break;
		
		case 0x0000000A:
			Function_165("LAW_AI_STATE: PURSUE", 11);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_164(iParam0->f_576);
			if (!IS_OBJECT_VALID(iParam0->f_664))
			{
				iParam0->f_664 = CREATE_POINT_IN_LAYOUT(iParam0->f_336, Function_213(), *(iParam0 + 524), 0.0f, 0.0f, 0.0f);
			}
			else
			{
				SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 0, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(false, iParam0->f_664, 30.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_164(iParam0->f_580);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(false, iParam0->f_664, 15.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_163(iParam0->f_576, 1);
			iParam0->f_648 = 11;
		
		case 0x0000000B:
			if (Function_155(iParam0))
			{
				return 0;
			}
			if (IS_OBJECT_VALID(iParam0->f_664))
			{
				SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
			}
			if (Function_154(iParam0, 0x3f800000))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					return 0;
				}
			}
			if (Function_154(iParam0, 15.0f))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 8;
					return 0;
				}
			}
			break;
		
		case 0x0000000D:
			Function_165("LAW_AI_STATE: SURROUND", 11);
			if (!Function_15(iParam0->f_576, 95, iParam1->f_48))
			{
				Function_143(iParam0->f_576, "law_surround", 5.0f, iParam1->f_64, 30.0f, 0, 0);
			}
			Function_149(iParam0, 0);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_164(iParam0->f_576);
			if (!IS_OBJECT_VALID(iParam0->f_668))
			{
				iParam0->f_668 = Function_142(iParam1->f_48, 256);
			}
			if (!Function_141(iParam0))
			{
				if (IS_OBJECT_VALID(iParam0->f_668) && GET_OBJECT_TYPE(iParam0->f_668) != 9)
				{
					GET_VOLUME_SCALE(GET_VOLUME_FROM_OBJECT(iParam0->f_668), &vVar3);
					GET_OBJECT_POSITION(iParam0->f_668, &vVar6);
					fVar16 = (5.0f + (Function_140(vVar3.x, vVar3.z) / 2.0f));
					bVar20 = GET_VOLUME_FROM_OBJECT(iParam0->f_668);
				}
				else if (IS_OBJECT_VALID(iParam0->f_668) && GET_OBJECT_TYPE(iParam0->f_668) != 10)
				{
					bVar19 = CREATE_OBJECT_ITERATOR(Global_26314);
					ITERATE_IN_VOLUME_SET(bVar19, iParam0->f_668);
					bVar13 = START_OBJECT_ITERATOR(bVar19);
					bVar20 = GET_VOLUME_FROM_OBJECT(bVar13);
					fVar16 = 0.0f;
					while (IS_OBJECT_VALID(bVar13))
					{
						GET_VOLUME_SCALE(GET_VOLUME_FROM_OBJECT(bVar13), &vVar3);
						fVar16 = (fVar16 + Function_140((5.0f + (Function_140(vVar3.x, vVar3.z) / 2.0f)), 20.0f));
						bVar13 = OBJECT_ITERATOR_NEXT(bVar19);
					}
					DESTROY_ITERATOR(bVar19);
				}
				else
				{
					iParam0->f_648 = 4;
					return 0;
				}
				GET_OBJECT_POSITION(iParam0->f_668, &vVar6);
				uVar12 = Function_139(iParam0->f_336, 2, fVar16);
				iParam0->f_656 = SQUAD_GOAL_ADD_COMBAT(iParam0->f_576, 2, 2, 1);
				bVar22 = false;
				if (IS_OBJECT_VALID(iParam0->f_668))
				{
					if (IS_VOLUME_VALID(GET_VOLUME_FROM_OBJECT(iParam0->f_668)))
					{
						bVar22 = true;
					}
				}
				if (bVar22)
				{
					iVar15 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 1, GET_VOLUME_FROM_OBJECT(iParam0->f_668), 4, 0);
				}
				else
				{
					iVar15 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 1, bVar20, 4, 0);
				}
				SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(iParam0->f_576, iVar15, iParam0->f_656);
				bVar2 = false;
				while (bVar2 <= GET_NUM_FORMATION_LOCATIONS(uVar12))
				{
					GET_FORMATION_LOCATION(uVar12, bVar2, &vVar9);
					vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar6, vVar9, StackVal) };
					iVar17 = Function_137(StackVal, StackVal, StackVal, StackVal, vVar9, vVar6);
					Function_84(&vVar9, 15.0f, &vVar3, 2);
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, (5 + bVar2), 1, 1);
					TASK_GO_TO_COORD_AND_STAY(false, &vVar3, 4, iVar17);
					bVar2++;
				}
				Function_8(iParam0->f_576, 1);
			}
			else
			{
				Function_165("LAW_AI_STATE: SURROUND (RIVERBOAT)", 11);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 0, iParam0->f_412, 3, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 0, 4294967295);
				TASK_KILL_CHAR(false, iParam1->f_48);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			}
			Function_135(iParam0 + 576);
			Function_134(iParam0->f_576, 1);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_164(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_163(iParam0->f_576, 1);
			iParam0->f_648 = 14;
		
		case 0x0000000E:
			if (!iParam0->f_560)
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					Function_134(iParam0->f_576, 0);
					Function_8(iParam0->f_576, 0);
					return 0;
				}
			}
			if (!Function_141(iParam0))
			{
				bVar2 = false;
				while (bVar2 <= SQUAD_GET_SIZE(iParam0->f_576))
				{
					bVar23 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar2);
					if (IS_ACTOR_VALID(bVar23))
					{
						if (SQUAD_IS_GOAL_CONTROLLING_ACTOR(iParam0->f_576, iParam0->f_656, bVar23))
						{
							SET_ACTOR_VISION_XRAY(bVar23, false);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar23, 16, false);
						}
						else
						{
							SET_ACTOR_VISION_XRAY(bVar23, true);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar23, 16, true);
						}
					}
					bVar2++;
				}
			}
			if (iParam0->f_480 != 0.0f)
			{
				if (Function_159(iParam0->f_576, Function_190(), 25.0f, 0))
				{
					iParam0->f_480 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x0000000F:
			Function_165("LAW_AI_STATE: SUBMIT CUTSCENE", 11);
			iParam0->f_648 = 16;
			Function_133(&Global_76847, 0x1000000);
			Function_129(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1);
			Function_128(iParam0->f_576, iParam1->f_48, 2);
		
		case 0x00000010:
			if (iParam0->f_716 > GET_CURRENT_GAME_TIME() && !Global_3380)
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
				iParam0->f_648 = 17;
			}
			else if (Global_3380)
			{
				AI_CLEAR_DONT_HARM_ACTOR(iParam1->f_48);
				iParam0->f_648 = 17;
				Function_127(2048);
			}
			iVar1 = 250;
			break;
		
		case 0x00000011:
			if (HUD_IS_FADED())
			{
				Function_111(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				if (SQUAD_IS_VALID(iParam0->f_576))
				{
					SQUAD_GOALS_CLEAR(iParam0->f_576);
				}
				AI_CLEAR_DONT_HARM_ACTOR(iParam1->f_48);
				RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
				iParam0->f_720 = 1;
				iParam0->f_648 = 24;
			}
			iVar1 = 250;
			break;
		
		case 0x00000015:
			Function_165("LAW_AI_STATE: BRIBE CUTSCENE", 11);
			Function_110("law_submit_cutscene", 5.0f, 0, 2, 1, 0);
			iParam0->f_648 = 22;
			bVar14 = Function_108(iParam1->f_48, iParam0->f_576);
			GET_POSITION(iParam1->f_48, iParam0 + 500);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			SQUAD_GOAL_ADD_MEET_AT_POSITION(iParam0->f_576, 1, iParam0 + 500, 4294967295, 5.0f, 1);
			ACTOR_HOLSTER_WEAPON(iParam1->f_48, 1);
			Function_129(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (IS_ACTOR_HOGTIED(bVar14))
			{
				FREE_FROM_HOGTIE(bVar14);
			}
			if (Function_104(&bVar25, &vVar26))
			{
				SET_ACTOR_HEADING(iParam1->f_48, bVar25, 1);
			}
			else
			{
				bVar25 = Function_103(iParam1->f_48);
				Function_102(bVar14);
				vVar26 = { StackVal, StackVal, Function_102(bVar14) };
			}
			MEMORY_CLEAR_ALL(iParam1->f_48);
			MEMORY_CLEAR_ALL(bVar14);
			ACTOR_START_FORCE_HOLSTER(iParam1->f_48, 0, 0);
			ACTOR_START_FORCE_HOLSTER(bVar14, 0, 0);
			RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
			RESET_ANIM_SET_FOR_ACTOR(bVar14, 0);
			TASK_CLEAR(iParam1->f_48);
			TASK_CLEAR(bVar14);
			SET_ANIM_SET_FOR_ACTOR(iParam1->f_48, "stand_shakehands", 0);
			SET_LINKED_ANIM_TARGET(iParam1->f_48, bVar14);
			TASK_ACTION_PERFORM(iParam1->f_48, "stand_shakehands/tip_hat");
			TASK_PRIORITY_SET(iParam1->f_48, true);
			TASK_PRIORITY_SET(bVar14, true);
			AI_IGNORE_ACTOR(iParam1->f_48);
			AI_IGNORE_ACTOR(bVar14);
			SET_ACTOR_CAN_PLAY_GESTURES(bVar14, false);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar14, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			MEMORY_CONSIDER_AS(bVar14, iParam1->f_48, 2);
			AUDIO_STOP_PAIN(Function_190());
			SAY_SINGLE_LINE_STRING_OVER_PAIN(Function_190(), "PLAYER_OFFER_LAW_BRIBE", 1, 1, 0, 0);
			iParam0->f_708 = Function_99(StackVal, StackVal, iParam1->f_48, bVar25, vVar26);
			iParam0->f_716 = GET_CURRENT_GAME_TIME();
		
		case 0x00000016:
			if (iParam0->f_716 + 4.0f) > GET_CURRENT_GAME_TIME()
			{
				iParam0->f_648 = 23;
			}
			iVar1 = 250;
			break;
		
		case 0x00000017:
			Function_111(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			if (iParam0->f_708 != "")
			{
				REMOVE_CAMERA_FROM_CHANNEL(iParam0->f_708, 0);
			}
			RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
			bVar14 = Function_108(iParam1->f_48, iParam0->f_576);
			if (IS_ACTOR_VALID(bVar14))
			{
				SET_ACTOR_CAN_PLAY_GESTURES(bVar14, true);
				SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar14, 1);
			}
			AUDIO_SET_PLAYER_MOOD(0, 1);
			UI_EXIT("WantedMeter");
			UI_EXIT("BountyAmount");
			_HUD_WANTED_METER(0);
			_HUD_WANTED_CRIME(0.0f);
			Global_27761 = 0.0f;
			Global_27773 = 1;
			UNK_0x598815BD(Global_27761);
			UI_SET_STYLE("BountyAmount", 1);
			ACTOR_START_FORCE_HOLSTER(iParam1->f_48, 0, 0);
			iParam0->f_564 = 1;
			iParam0->f_648 = 24;
			iVar1 = 0;
			break;
		
		case 0x00000018:
			Function_165("LAW_AI_STATE: CLEANUP", 11);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_164(iParam0->f_576);
			Function_8(iParam0->f_576, 0);
			if (IS_ACTOR_VALID(iParam1->f_48))
			{
				AI_CLEAR_DONT_HARM_ACTOR(iParam1->f_48);
			}
			if (!iParam0->f_552)
			{
				if (IS_ACTOR_VALID(iParam1->f_48))
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 0, 4294967295);
					if (Function_91())
					{
						TASK_FLEE_ACTORSET(false, Global_78576, -1.0f, -1.0f, 0, 0, 0);
					}
					else
					{
						TASK_FLEE_ACTOR(false, iParam1->f_48, -1.0f, -1.0f, 0, 0, 0);
					}
				}
			}
			else
			{
				SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 0, 4294967295);
				TASK_WANDER(false, -1.0f);
			}
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			iParam0->f_648 = 25;
		
		case 0x00000019:
			break;
	}
	return iVar1;
}

var Function_99(bool bParam0, var uParam1, vector3 vParam2) //Position: 0x5F9C / 24476
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	bVar0 = CREATE_CAMERA_IN_LAYOUT(Global_26314, Function_213(), 0);
	INIT_CAMERA_FROM_GAME_CAMERA(bVar0);
	GET_CAMERA_POSITION(bVar0, &vVar7);
	Function_102(bParam0);
	Function_100(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_102(bParam0), uParam1, vParam2, vVar7, &vVar1, &vVar4);
	SET_CAMERA_POSITION(bVar0, vVar1);
	SET_CAMERA_TARGET_POSITION(bVar0, vVar4, 0);
	if (!Function_80(StackVal, StackVal, vVar1))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(bVar0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		INIT_CAMERA_FROM_GAME_CAMERA(bVar0);
		SET_CURRENT_CAMERA_ON_CHANNEL(bVar0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

int Function_100(vector3 vParam0, var uParam3, vector3 vParam4, vector3 vParam7, var uParam10, var uParam11) //Position: 0x6017 / 24599
{
	struct<5> Var0;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
	float fVar13;
	vector3 vVar14;
	float fVar17;
	bool bVar18;
	vector3 vVar19[8];
	var uVar44;
	var uVar47;
	int iVar50;
	
	Var0 = { StackVal, StackVal, vParam0 };
	Var0.f_4 = (StackVal + 2.0f);
	Var3 = { StackVal, StackVal, vParam0 };
	Var3.f_4 = (StackVal + 1.0f);
	vVar6 = { StackVal, StackVal, vParam4 };
	vVar6.f_4 = (vVar6.y + 2.0f);
	vVar9 = { StackVal, StackVal, vParam4 };
	vVar9.f_4 = (vVar9.y + 1.0f);
	bVar12 = VDIST(Var0, vVar6);
	fVar13 = 1,625f;
	*uParam11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var0, StackVal) };
	VSCALE(uParam11, 0,5f);
	vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar6, StackVal) };
	VSCALE(&vVar14, 0,5f);
	*uParam11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar14, *uParam11, StackVal) };
	VSCALE(uParam11, 0,5f);
	fVar17 = uParam3;
	bVar18 = RAND_FLOAT_RANGE(40.0f, 50.0f);
	vVar19[03] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[13] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[23] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[33] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[43] = { (fVar13 * bVar12), 0.0f, 0.0f };
	vVar19[53] = { (fVar13 * bVar12), 0.0f, 0.0f };
	vVar19[63] = { (fVar13 * bVar12), 0.0f, 0.0f };
	vVar19[73] = { (fVar13 * bVar12), 0.0f, 0.0f };
	ROTATE_VECTOR_XZ(&(vVar19[03]), (fVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[13]), (fVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[23]), (fVar17 + (-1.0f * bVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[33]), (fVar17 + (-1.0f * bVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[43]), (fVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[53]), (fVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[63]), (fVar17 + (-1.0f * bVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[73]), (fVar17 + (-1.0f * bVar18)), 0);
	iVar50 = 0;
	while (iVar50 <= vVar19)
	{
		vVar19[iVar503] = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*uParam11, vVar19[iVar503], StackVal) };
		if (FIND_INTERSECTION(&(vVar19[iVar503]), uParam11, &uVar44, &uVar47, 1, 4294967295, 4194304))
		{
			vVar19[iVar503] = { 0.0f, 0.0f, 0.0f };
		}
		if (!Function_80(StackVal, StackVal, vVar19[iVar503]))
		{
			if (FIND_INTERSECTION(&(vVar19[iVar503]), &Var0, &uVar44, &uVar47, 1, 4294967295, 4194304))
			{
				vVar19[iVar503] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar50++;
	}
	if (!Function_80(StackVal, StackVal, vVar19[03]))
	{
		vVar19[03].f_4 = StackVal;
	}
	if (!Function_80(StackVal, StackVal, vVar19[13]))
	{
		vVar19[13].f_4 = StackVal;
	}
	if (!Function_80(StackVal, StackVal, vVar19[23]))
	{
		vVar19[23].f_4 = StackVal;
	}
	if (!Function_80(StackVal, StackVal, vVar19[33]))
	{
		vVar19[33].f_4 = StackVal;
	}
	if (!Function_80(StackVal, StackVal, vVar19[43]))
	{
		vVar19[43].f_4 = StackVal;
	}
	if (!Function_80(StackVal, StackVal, vVar19[53]))
	{
		vVar19[53].f_4 = StackVal;
	}
	if (!Function_80(StackVal, StackVal, vVar19[63]))
	{
		vVar19[63].f_4 = StackVal;
	}
	if (!Function_80(StackVal, StackVal, vVar19[73]))
	{
		vVar19[73].f_4 = StackVal;
	}
	Function_101(StackVal, StackVal, vParam7, &vVar19);
	*uParam10 = { StackVal, StackVal, Function_101(StackVal, StackVal, vParam7, &vVar19) };
	return 1;
}

vector3 Function_101(vector3 vParam0, var uParam3) //Position: 0x631C / 25372
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	
	bVar4 = 1E+08.0f;
	iVar3 = 0;
	while (iVar3 <= *uParam3)
	{
		if (!Function_80(StackVal, StackVal, *uParam3[iVar33]))
		{
			if (VDIST(*uParam3[iVar33], vParam0) > bVar4)
			{
				bVar4 = VDIST(*uParam3[iVar33], vParam0);
				vVar0 = { StackVal, StackVal, *uParam3[iVar33] };
			}
		}
		iVar3++;
	}
	return StackVal, StackVal, vVar0;
}

vector3 Function_102(bool bParam0) //Position: 0x6384 / 25476
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_103(bool bParam0) //Position: 0x6395 / 25493
{
	return GET_HEADING(bParam0);
}

bool Function_104(float fParam0, int iParam1) //Position: 0x63A0 / 25504
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar7;
	float fVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	
	Function_102(GET_PLAYER_ACTOR(0));
	vVar3 = { StackVal, StackVal, Function_102(GET_PLAYER_ACTOR(0)) };
	uVar6 = Function_103(GET_PLAYER_ACTOR(0));
	vVar7 = { 0.0f, 0.0f, -1,7f };
	GET_ACTOR_OFFSET_WORLD_COORDS(GET_PLAYER_ACTOR(0), &vVar7, &vVar0);
	if (Function_107(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3))
	{
		if (Function_106(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3) > 0,1f)
		{
			*fParam0 = uVar6;
			*iParam1 = { StackVal, StackVal, vVar0 };
			return 1;
		}
	}
	fVar10 = -1.0f;
	fVar11 = -1.0f;
	iVar12 = 0;
	iVar13 = 0;
	while (iVar13 <= 36)
	{
		Function_105(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 10.0f);
		vVar0 = { StackVal, StackVal, Function_105(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 10.0f) };
		if (Function_107(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3))
		{
			fVar14 = Function_106(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3);
			if (fVar11 > 0.0f || fVar14 > fVar11)
			{
				fVar10 = Function_137(StackVal, StackVal, StackVal, StackVal, vVar3, vVar0);
				fVar11 = fVar14;
				*iParam1 = { StackVal, StackVal, vVar0 };
				iVar12 = 1;
			}
		}
		iVar13++;
	}
	*fParam0 = fVar10;
	return iVar12;
}

vector3 Function_105(vector3 vParam0) //Position: 0x647D / 25725
{
	vector3 vVar0;
	
	vParam0 = (vParam0.x - vParam3.x);
	vParam0.f_4 = (vParam0.y - vParam3.y);
	vParam0.f_8 = (vParam0.z - vParam3.z);
	vVar0.x = ((COS_DEGREE(bParam6) * vParam0.x) - (SIN_DEGREE(bParam6) * vParam0.z));
	vVar0.f_8 = ((COS_DEGREE(bParam6) * vParam0.z) + (SIN_DEGREE(bParam6) * vParam0.x));
	vVar0.x = (vVar0.x + vParam3.x);
	vVar0.f_4 = (vVar0.y + vParam3.y);
	vVar0.f_8 = (vVar0.z + vParam3.z);
	return StackVal, StackVal, vVar0;
}

float Function_106(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x64F7 / 25847
{
	struct<5> Var0;
	var uVar6;
	float fVar9;
	
	FIND_GROUND_INTERSECTION(&uParam0, 1,3f, &Var0, &uVar6);
	FIND_GROUND_INTERSECTION(&uParam3, 1,3f, &Var3, &uVar6);
	fVar9 = (StackVal - StackVal);
	if (fVar9 > 0.0f)
	{
		fVar9 = (fVar9 * -1.0f);
	}
	return fVar9;
}

bool Function_107(vector3 vParam0) //Position: 0x6537 / 25911
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	
	vVar3 = { vParam0.x, (vParam0.y + 0,3f), vParam0.z };
	vVar6 = { vParam0.x, (vParam0.y + 1,7f), vParam0.z };
	vVar9 = { vParam3.x, (vParam3.y + 1.0f), vParam3.z };
	if (FIND_INTERSECTION(&vVar9, &vVar3, &uVar0, &uVar0, 0, 4294967295, 4194304) || FIND_INTERSECTION(&vVar9, &vVar6, &uVar0, &uVar0, 0, 4294967295, 4194304))
	{
		return 0;
	}
	return 1;
}

bool Function_108(bool bParam0, bool bParam1) //Position: 0x65A2 / 26018
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+14.0f;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		if (Function_109(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0) > fVar2)
		{
			fVar2 = Function_109(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER!");
	return "";
}

float Function_109(bool bParam0, bool bParam1) //Position: 0x665F / 26207
{
	var uVar0;
	int iVar3;
	bool bVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &iVar3);
	bVar6 = Function_79(&uVar0, &iVar3);
	return bVar6;
}

void Function_110(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x667E / 26238
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Global_3422[Global_626940] + 12, iParam5);
	}
	else
	{
		iVar0 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar0, iParam5);
	}
}

void Function_111(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x66C5 / 26309
{
	bool bVar0;
	
	bParam1 = bParam1;
	if (bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		bVar0 = Function_190();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam2)
			{
				TASK_CLEAR(bVar0);
			}
			if (!bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				}
			}
			if (Function_91())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar0) || IS_ACTOR_USING_LEDGE(bVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(bVar0);
					if (iParam0 != 0 || (iParam0 != 2 && Global_76850))
					{
						ACTOR_DRAW_LAST_WEAPON(bVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
			SET_ACTOR_INVULNERABILITY(bVar0, false);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_114(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_113();
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_112(iParam9);
}

void Function_112(bool bParam0) //Position: 0x67B5 / 26549
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_63096 = 0;
	Global_63097 = 0;
	if (IS_VOLUME_VALID(Global_63117))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
	}
	return;
}

void Function_113() //Position: 0x685A / 26714
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_114(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x686F / 26735
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
	Function_126(iParam0, TO_FLOAT(bParam1), 1);
	Function_125(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_115(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_115(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x6A8F / 27279
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_124(390))), 32);
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
					bVar19 = (Function_123(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_123(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_121(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_119(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_117(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_116(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_213(), &Var9);
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

var Function_116(int iParam0) //Position: 0x70BC / 28860
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_117(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x70CD / 28877
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_118("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_118("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_118("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_118(char* cParam0, char* cParam1) //Position: 0x71C2 / 29122
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_119(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x71DB / 29147
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_97(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_120(Function_97(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_120(int iParam0, int iParam1) //Position: 0x7240 / 29248
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_121(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x7252 / 29266
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
	if (((Function_122(iParam0) != 19 || Function_122(iParam0) != 17) || Function_122(iParam0) != 10) || Function_122(iParam0) != 9)
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

int Function_122(int iParam0) //Position: 0x7382 / 29570
{
	return Global_35278[iParam020].f_48;
}

float Function_123(int iParam0) //Position: 0x7391 / 29585
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_124(int iParam0) //Position: 0x73CA / 29642
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_125(int iParam0) //Position: 0x7407 / 29703
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

int Function_126(int iParam0, float fParam1, bool bParam2) //Position: 0x75A1 / 30113
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
		Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
	}
	else
	{
		Global_34581[iVar1] = fParam1;
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

void Function_127(int iParam0) //Position: 0x77BB / 30651
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x77CE / 30670
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

void Function_129(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x7813 / 30739
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_113();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_190();
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_WEAPON_IN_HAND(bVar1) != 4294967295)
			{
				Global_76850 = 1;
			}
			else
			{
				Global_76850 = 0;
			}
			if (bParam3)
			{
				TASK_CLEAR(bVar1);
			}
			if (bParam11)
			{
				bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					FREE_FROM_HOGTIE(bVar2);
					HOGTIE_ACTOR(bVar2);
				}
			}
			if (Function_91())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar1) || IS_ACTOR_USING_LEDGE(bVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
					}
					if (bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(bVar1, false);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
				}
				if (bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(bVar1, false);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, true);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam8)
		{
			if (IS_VOLUME_VALID(bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(bParam7);
				DELETE_PROJECTILES_IN_VOLUME(bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_102(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_213(), 2, Function_102(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_114(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (bParam10)
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_132()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_132()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, true);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(Global_34573));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_63096 = 1;
	Global_63116 = GET_THIS_SCRIPT_ID();
	Global_63117 = "";
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (Function_131(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_130(0x4000000);
	}
	if (Function_131(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_130(0x8000000);
	}
}

void Function_130(int iParam0) //Position: 0x7ABC / 31420
{
	int iVar0;
	
	if (Function_83(iParam0, 1) && Function_83(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_131(int iParam0) //Position: 0x7AF0 / 31472
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_132() //Position: 0x7B0C / 31500
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 42);
		if (IS_OBJECT_VALID(bVar2))
		{
			while (IS_OBJECT_VALID(bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(bVar2), "bino_camera"))
				{
					return bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return "";
}

void Function_133(var uParam0, int iParam1) //Position: 0x7B8B / 31627
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_134(bool bParam0, bool bParam1) //Position: 0x7B9A / 31642
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
				MEMORY_PREFER_WALKING(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_135(var uParam0) //Position: 0x7BE2 / 31714
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = Function_136();
	bVar1 = false;
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar3 = GET_MOUNT(bVar2);
			if (IS_ACTOR_VALID(bVar3))
			{
				TASK_FLEE_ACTORSET(bVar3, bVar0, -1.0f, -1.0f, 0, 0, 0);
				RELEASE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	return;
}

var Function_136() //Position: 0x7C44 / 31812
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("PlayerLayout");
		if (!IS_LAYOUTREF_VALID(bVar0))
		{
			LOG_WARNING("I created an INVALID PlayerLayout!!!");
		}
	}
	return bVar0;
}

float Function_137(vector3 vParam0, vector3 vParam3) //Position: 0x7CB0 / 31920
{
	var uVar0;
	
	Function_138(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_138(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x7CCA / 31946
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

var Function_139(var uParam0, int iParam1, float fParam2) //Position: 0x7CED / 31981
{
	struct<8> Var0;
	int iVar8;
	bool bVar9;
	vector3 vVar10;
	
	if (!IS_OBJECT_VALID(Global_26121[iParam1]))
	{
		return "";
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_71("llr") };
	iVar8 = CREATE_FORMATION_IN_LAYOUT(uParam0, &Var0, GET_NUM_FORMATION_LOCATIONS(Global_26121[iParam1]));
	bVar9 = false;
	while (bVar9 <= GET_NUM_FORMATION_LOCATIONS(Global_26121[iParam1]))
	{
		GET_FORMATION_LOCATION(Global_26121[iParam1], bVar9, &vVar10);
		vVar10 = { StackVal, StackVal, Vector(vVar10, StackVal, StackVal) * Vector(fParam2, fParam2, fParam2) };
		ADD_FORMATION_LOCATION(iVar8, &vVar10);
		bVar9++;
	}
	return iVar8;
}

float Function_140(int iParam0, int iParam1) //Position: 0x7D64 / 32100
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_141(int iParam0) //Position: 0x7D77 / 32119
{
	if (Global_29006 == Global_30717[0])
	{
		if (iParam0->f_416 < 846.0f)
		{
			return 1;
		}
	}
	return 0;
}

var Function_142(bool bParam0, int iParam1) //Position: 0x7D9A / 32154
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	
	bVar0 = 99999.0f;
	bVar7 = "";
	bVar8 = "";
	bVar9 = "";
	if (!IS_OBJECT_VALID(bParam0))
	{
		return "";
	}
	GET_OBJECT_POSITION(bParam0, &vVar1);
	bVar10 = CREATE_OBJECT_ITERATOR(Global_28841);
	bVar11 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_IN_LAYOUT(bVar10, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar10, 9);
	bVar8 = START_OBJECT_ITERATOR(bVar10);
	while (IS_OBJECT_VALID(bVar8))
	{
		if (DECOR_CHECK_EXIST(bVar8, "locflag"))
		{
			if (Function_35(GET_VOLUME_FROM_OBJECT(bVar8), iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar8), &vVar4);
				if (VDIST(vVar1, vVar4) > bVar0)
				{
					bVar7 = bVar8;
					bVar0 = VDIST(vVar1, vVar4);
				}
			}
		}
		bVar8 = OBJECT_ITERATOR_NEXT(bVar10);
	}
	Function_34(&bVar10);
	ITERATE_IN_LAYOUT(bVar10, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar10, 10);
	bVar8 = START_OBJECT_ITERATOR(bVar10);
	while (IS_OBJECT_VALID(bVar8))
	{
		if (DECOR_CHECK_EXIST(bVar8, "locflag"))
		{
			if (Function_35(GET_VOLUME_FROM_OBJECT(bVar8), iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar8), &vVar4);
				if (VDIST(vVar1, vVar4) > bVar0)
				{
					bVar7 = bVar8;
					bVar0 = VDIST(vVar1, vVar4);
				}
			}
		}
		Function_34(&bVar11);
		ITERATE_IN_LAYOUT(bVar11, Global_30616);
		ITERATE_IN_VOLUME_SET(bVar11, GET_VOLUME_FROM_OBJECT(bVar8));
		bVar9 = START_OBJECT_ITERATOR(bVar11);
		while (IS_OBJECT_VALID(bVar9))
		{
			if (DECOR_CHECK_EXIST(bVar9, "locflag"))
			{
				if (Function_35(GET_VOLUME_FROM_OBJECT(bVar9), iParam1))
				{
					GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar9), &vVar4);
					if (VDIST(vVar1, vVar4) > bVar0)
					{
						bVar7 = bVar9;
						bVar0 = VDIST(vVar1, vVar4);
					}
				}
			}
			bVar9 = OBJECT_ITERATOR_NEXT(bVar11);
		}
		bVar8 = OBJECT_ITERATOR_NEXT(bVar10);
	}
	DESTROY_ITERATOR(bVar10);
	DESTROY_ITERATOR(bVar11);
	return bVar7;
}

void Function_143(int iParam0, char* cParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6) //Position: 0x7F4B / 32587
{
	int iVar0;
	
	iVar0 = Function_144();
	if (iVar0 == 4294967295)
	{
		return;
	}
	strcpy(&(Global_27647[iVar022]), cParam1, 64);
	Global_27647[iVar022].f_64 = fParam2;
	Global_27647[iVar022].f_84 = uParam3;
	Global_27647[iVar022].f_68 = fParam4;
	Global_27647[iVar022].f_72 = iParam5;
	Global_27647[iVar022].f_80 = iParam0;
	Global_27647[iVar022].f_76 = iParam6;
}

var Function_144() //Position: 0x7FAE / 32686
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_27647)
	{
		if (Global_27647[iVar022].f_64 > 0,5f)
		{
			return iVar0;
		}
		if (Global_27647[iVar022].f_76)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int Function_145(bool bParam0) //Position: 0x7FED / 32749
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
		if (IS_ACTOR_VALID(bVar2))
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

var Function_146(bool bParam0, int iParam1) //Position: 0x803F / 32831
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return "";
	}
	if (!Function_148(iParam1))
	{
		return "";
	}
	fVar0 = -1.0f;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar2 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_147(bVar1, bVar2);
	bVar3 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar3))
	{
		bVar5 = GET_CRIME_FROM_OBJECT(bVar3);
		if (GET_CRIME_CRIMINAL(bVar5) != bParam0 && GET_CRIME_WITNESSED(bVar5) <= iParam1)
		{
			if (GET_CRIME_END_TIMESTAMP(bVar5) < fVar0)
			{
				fVar0 = GET_CRIME_END_TIMESTAMP(bVar5);
				bVar4 = bVar5;
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	return bVar4;
}

void Function_147(bool bParam0, bool bParam1) //Position: 0x80DB / 32987
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_148(int iParam0) //Position: 0x810A / 33034
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

void Function_149(int iParam0, bool bParam1) //Position: 0x811F / 33055
{
	if (bParam1)
	{
		iParam0->f_536 = GET_CURRENT_GAME_TIME();
	}
	else
	{
		iParam0->f_536 = (GET_CURRENT_GAME_TIME() - 10.0f);
	}
	iParam0->f_452 = GET_CURRENT_GAME_TIME();
	return;
}

bool Function_150(int iParam0) //Position: 0x814B / 33099
{
	switch (iParam0->f_724)
	{
		case 0x00000000:
			if (StackVal != 1)
			{
				return 1;
			}
			break;
		
		case 0x00000001:
			if (StackVal != 0)
			{
				return 1;
			}
			break;
		
		case 0x00000002:
			return 1;
			break;
	}
	return 0;
}

bool Function_151(bool bParam0, bool bParam1, bool bParam2) //Position: 0x818F / 33167
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(bParam0))
			{
				bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
				if (IS_ACTOR_VALID(bVar0))
				{
					if (MEMORY_GET_IS_VISIBLE(bVar0, bParam1))
					{
						if (bParam2)
						{
							if (MEMORY_GET_IS_IDENTIFIED(bVar0, bParam1))
							{
								return 1;
							}
						}
						return 1;
					}
				}
				bVar1++;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
	return 0;
}

bool Function_152(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x81F7 / 33271
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (Function_80(StackVal, StackVal, vParam1))
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
				Function_153(bVar1);
				if (VDIST(Function_153(bVar1), vParam1) >= fParam4)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

vector3 Function_153(bool bParam0) //Position: 0x8265 / 33381
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

bool Function_154(int iParam0, float fParam1) //Position: 0x82CF / 33487
{
	if ((GET_CURRENT_GAME_TIME() - iParam0->f_356) > fParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_155(int iParam0) //Position: 0x82E7 / 33511
{
	bool bVar0;
	vector3 vVar1;
	
	if (iParam0->f_648 != 12)
	{
		if (StackVal || ((StackVal != 0 && iParam0->f_724 != 1) != 1 && iParam0->f_724 != 0))
		{
			bVar0 = true;
		}
		if (*iParam0 == 3)
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			Function_156(iParam0);
			vVar1 = { StackVal, StackVal, Function_156(iParam0) };
			if (!Function_80(StackVal, StackVal, vVar1))
			{
				if (SQUAD_IS_VALID(iParam0->f_576))
				{
					SQUAD_GOALS_CLEAR(iParam0->f_576);
					Function_164(iParam0->f_576);
					Function_165("LAW_AI_STATE: STAY IN COUNTRY", 11);
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, false, 0, 4294967295);
					TASK_GO_NEAR_COORD(false, &vVar1, 15.0f, 4);
					SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
				}
				if (SQUAD_IS_VALID(iParam0->f_580))
				{
					SQUAD_GOALS_CLEAR(iParam0->f_580);
					Function_164(iParam0->f_580);
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 0, 4294967295);
					TASK_GO_NEAR_COORD(false, &vVar1, 15.0f, 4);
					SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
				}
				iParam0->f_648 = 12;
				return 1;
			}
		}
	}
	return 0;
}

vector3 Function_156(var uParam0) //Position: 0x83EA / 33770
{
	int iVar0;
	
	iVar0 = Function_158(uParam0);
	switch (iVar0)
	{
		case 0x00000000:
			if (uParam0->f_724 == 0)
			{
				return 3,07f, 94,87f, 2704,52f;
			}
			if (uParam0->f_724 == 1)
			{
				return 61,98f, 94,83f, 2782,57f;
			}
			break;
		
		case 0x00000001:
			if (uParam0->f_724 == 0)
			{
				return -2395,41f, 13,94f, 3882,45f;
			}
			if (uParam0->f_724 == 1)
			{
				return -2356,1f, 13,91f, 4019,29f;
			}
			break;
		
		case 0x00000002:
			if (uParam0->f_724 == 0)
			{
				return -3711,54f, 24,11f, 4022,47f;
			}
			if (uParam0->f_724 == 1)
			{
				return -3518,87f, 19,29f, 4208,25f;
			}
			break;
	}
	Function_157();
	return StackVal, StackVal, Function_157();
}

vector3 Function_157() //Position: 0x84BB / 33979
{
	return 0.0f, 0.0f, 0.0f;
}

var Function_158(int iParam0) //Position: 0x84C4 / 33988
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	
	bVar0 = 1,001638E+07.0f;
	iVar1 = 4294967295;
	vVar3 = { 32.0f, 96.0f, 2741.0f };
	bVar2 = VDIST(*(iParam0 + 416), vVar3);
	if (bVar2 > bVar0)
	{
		iVar1 = 0;
		bVar0 = bVar2;
	}
	vVar3 = { -2381.0f, 14.0f, 3935.0f };
	bVar2 = VDIST(*(iParam0 + 416), vVar3);
	if (bVar2 > bVar0)
	{
		iVar1 = 1;
		bVar0 = bVar2;
	}
	vVar3 = { -3571.0f, 21.0f, 4128.0f };
	bVar2 = VDIST(*(iParam0 + 416), vVar3);
	if (bVar2 > bVar0)
	{
		iVar1 = 2;
		bVar0 = bVar2;
	}
	return iVar1;
}

bool Function_159(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x856C / 34156
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (ACTORS_IN_RANGE(bVar1, bParam1, bParam2))
				{
					if (!Function_160(bVar1, 1) || iParam3)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_160(bool bParam0, int iParam1) //Position: 0x8605 / 34309
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(bParam0))
		{
			return 1;
		}
		bVar0 = SQUAD_GET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_161(int iParam0, bool bParam1, bool bParam2) //Position: 0x864F / 34383
{
	bool bVar0;
	vector3 vVar1;
	
	if (GET_OBJECT_TYPE(bParam1) == 15)
	{
		if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, bParam1))
		{
			return 1;
		}
		if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_MOUNT(GET_ACTOR_FROM_OBJECT(bParam1)));
		}
		if (IS_ACTOR_VALID(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bParam1)));
		}
		return 0;
	}
	if (bParam2)
	{
		if (!IS_ITERATOR_VALID(Global_26118))
		{
			LOG_ERROR("MULTI_CAN_ANYONE_OF_FACTION_SEE_OBJECT: NO Ambient Iterator Valid");
			return 0;
		}
		GET_OBJECT_POSITION(bParam1, &vVar1);
		Function_34(&Global_26118);
		ITERATE_IN_LAYOUT(Global_26118, GET_AMBIENT_LAYOUT());
		ITERATE_ON_OBJECT_TYPE(Global_26118, 15);
		ITERATE_IN_SPHERE(Global_26118, vVar1, 25.0f);
		bVar0 = START_OBJECT_ITERATOR(Global_26118);
		while (IS_OBJECT_VALID(bVar0))
		{
			if (GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(bVar0)) == iParam0)
			{
				return 1;
			}
			bVar0 = OBJECT_ITERATOR_NEXT(Global_26118);
		}
		Function_34(&Global_26118);
		ITERATE_IN_LAYOUT(Global_26118, Global_6289);
		ITERATE_ON_OBJECT_TYPE(Global_26118, 24);
		ITERATE_IN_SPHERE(Global_26118, vVar1, 25.0f);
		bVar0 = START_OBJECT_ITERATOR(Global_26118);
		while (IS_OBJECT_VALID(bVar0))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar0))))
			{
				if (GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar0))) == iParam0)
				{
					return 1;
				}
			}
			bVar0 = OBJECT_ITERATOR_NEXT(Global_26118);
		}
	}
	return 0;
}

void Function_162(int iParam0, var uParam1, int iParam2) //Position: 0x87C2 / 34754
{
	if (iParam0->f_536 > 0.0f)
	{
		if ((Function_159(iParam0->f_576, uParam1->f_48, 20.0f, 1) || Function_154(iParam0, 0x3f800000)) || iParam2)
		{
			if (!Function_15(iParam0->f_576, 59, uParam1->f_48))
			{
				if (GET_WEAPON_IN_HAND(uParam1->f_48) == 4294967295)
				{
					Function_143(iParam0->f_576, "law_give_up_unarmed", 2,5f, uParam1->f_64, 20.0f, 1, 0);
				}
				else
				{
					Function_143(iParam0->f_576, "law_give_up", 2,5f, uParam1->f_64, 20.0f, 1, 0);
				}
			}
			Function_149(iParam0, 1);
		}
	}
	return;
}

void Function_163(bool bParam0, int iParam1) //Position: 0x886F / 34927
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (SQUAD_GET_SIZE(bParam0) >= 0)
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(bParam0))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					MEMORY_ALLOW_TAKE_COVER(bVar1, iParam1);
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_164(bool bParam0) //Position: 0x88B4 / 34996
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

void Function_165(bool bParam0, int iParam1) //Position: 0x88E6 / 35046
{
	if (!Function_131(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

bool Function_166(int iParam0, var uParam1, bool bParam2) //Position: 0x8921 / 35105
{
	int iVar0;
	float fVar1;
	
	fVar1 = Function_178(iParam0, uParam1->f_48);
	if ((GET_CURRENT_GAME_TIME() - fVar1) > 5.0f)
	{
		if (bParam2)
		{
			Global_3405 = 0;
		}
		*(iParam0 + 500) = { StackVal, StackVal, *(iParam0 + 416) };
		GET_ACTOR_VELOCITY(uParam1->f_48, iParam0 + 512);
		iParam0->f_444 = GET_CURRENT_GAME_TIME();
	}
	else if (bParam2)
	{
		Global_3405 = 1;
		if (Global_26316.f_176)
		{
			if (!Function_177(Global_76847, 8))
			{
				Function_171(Global_34573, 8, 2, 0);
			}
		}
	}
	if (bParam2)
	{
		if (Global_3386 && Global_3405)
		{
			if (Function_161(uParam1->f_56, GET_OBJECT_FROM_ACTOR(uParam1->f_48), 1))
			{
				Global_3405 = 0;
				*(iParam0 + 500) = { StackVal, StackVal, *(iParam0 + 416) };
				GET_ACTOR_VELOCITY(uParam1->f_48, iParam0 + 512);
				iParam0->f_448 = GET_CURRENT_GAME_TIME();
				Function_170(iParam0->f_576, uParam1->f_48, 0);
				if (!Function_177(Global_76847, 16))
				{
					Function_171(Global_34573, 16, 2, 0);
				}
			}
		}
	}
	iParam0->f_356 = Function_140(Function_140(iParam0->f_440, iParam0->f_444), iParam0->f_448);
	Global_27763 = Function_168(iParam0);
	Global_27764 = iParam0->f_356;
	if (GET_CURRENT_GAME_TIME() < (iParam0->f_356 + Global_27763))
	{
		if (Function_167(iParam0->f_576) >= 0)
		{
			if (!Function_15(iParam0->f_576, 22, uParam1->f_48))
			{
				Function_143(iParam0->f_576, "law_go_unwanted", 5.0f, uParam1->f_64, 20.0f, 0, 0);
			}
		}
		if (Function_91())
		{
			if (Function_86(Global_29006) < Global_78480.f_116)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if (GET_CURRENT_GAME_TIME() < (iParam0->f_356 + 5.0f))
	{
		if (bParam2)
		{
			if (Global_26316.f_176)
			{
				if (!Function_177(Global_76847, 4096))
				{
					Function_171(Global_34573, 4096, 2, 0);
				}
			}
		}
		if (GET_CURRENT_GAME_TIME() < (iParam0->f_352 + 20.0f))
		{
			if (Function_167(iParam0->f_576) >= 0)
			{
				if (!Function_15(iParam0->f_576, 22, uParam1->f_48))
				{
					Function_143(iParam0->f_576, "law_wanted_lost_track", 2,5f, uParam1->f_64, 20.0f, 0, 1);
				}
			}
			iParam0->f_352 = GET_CURRENT_GAME_TIME();
		}
	}
	return iVar0;
}

int Function_167(bool bParam0) //Position: 0x8B43 / 35651
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
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
				iVar2++;
			}
		}
		bVar0++;
	}
	return iVar2;
}

var Function_168(int iParam0) //Position: 0x8B90 / 35728
{
	bool bVar0;
	int iVar1;
	
	if (Function_85(iParam0, 1) == 0)
	{
		return 10.0f;
	}
	if (iParam0->f_628 && !Function_169(0))
	{
		return 20.0f;
	}
	bVar0 = Global_26401[StackVal];
	bVar0 = (bVar0 - 70);
	if (bVar0 <= 0)
	{
		bVar0 = false;
	}
	iVar1 = (22.0f + (TO_FLOAT(bVar0) / 13,043f));
	if (iVar1 > 22.0f)
	{
		iVar1 = 22.0f;
	}
	if (iVar1 < 45.0f)
	{
		iVar1 = 45.0f;
	}
	return iVar1;
	return 45.0f;
}

bool Function_169(int iParam0) //Position: 0x8C1B / 35867
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_170(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8C2A / 35882
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

void Function_171(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x8C95 / 35989
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_173(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_172(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_172(char* cParam0, int iParam1) //Position: 0x8D01 / 36097
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

bool Function_173(bool bParam0, var uParam1, int iParam2) //Position: 0x8D38 / 36152
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
		if (Function_175(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_174(uVar0))
		{
			case 0x00000002:
				if (!Function_177(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_174(char* cParam0) //Position: 0x8DB0 / 36272
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

int Function_175(int iParam0) //Position: 0x8E51 / 36433
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_176(&iVar1, 2147483648);
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

void Function_176(var uParam0, int iParam1) //Position: 0x8E8E / 36494
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

bool Function_177(var uParam0, int iParam1) //Position: 0x8EA1 / 36513
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

var Function_178(var uParam0, int iParam1) //Position: 0x8EB4 / 36532
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if (SQUAD_IS_VALID(uParam0->f_580))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(uParam0->f_580) >= 0)
		{
			return GET_CURRENT_GAME_TIME();
		}
	}
	bVar0 = GET_LASSO_TARGET(Function_190());
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_179(bVar0, uParam0->f_576, 0))
		{
			return GET_CURRENT_GAME_TIME();
		}
	}
	iVar3 = 0.0f;
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(uParam0->f_576))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				if (GET_LAST_ATTACK_TARGET(bVar2) != iParam1 && GET_LAST_ATTACK_TIME(bVar2) <= (GET_CURRENT_GAME_TIME() - 5.0f))
				{
					return GET_CURRENT_GAME_TIME();
				}
				iVar3 = Function_140(MEMORY_GET_POSITION_LAST_KNOWN_TIME(bVar2, iParam1), iVar3);
			}
		}
		bVar1++;
	}
	return iVar3;
}

bool Function_179(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8F5A / 36698
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

void Function_180(bool bParam0) //Position: 0x8F9A / 36762
{
	if (!Global_3403)
	{
		if (IS_ACTOR_VALID(bParam0))
		{
			if (IS_ACTOR_ALIVE(bParam0))
			{
				if (GET_ACTORENUM_ACTOR_BASE_TYPE(GET_ACTOR_ENUM(bParam0)) == 1)
				{
					if ((!Function_185(Function_190(), 35) && !Function_185(Function_190(), 7)) && !Function_185(Function_190(), 12))
					{
						Function_181(1, 35, Function_190(), GET_OBJECT_FROM_ACTOR(bParam0), 1);
					}
				}
			}
		}
	}
	return;
}

var Function_181(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9001 / 36865
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_184(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_183(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(bParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_88(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	bVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(bVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(bVar3, iParam1);
		SET_CRIME_VICTIM(bVar3, bParam3);
		SET_CRIME_CRIMINAL(bVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(bVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_213(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_182();
		}
		SET_CRIME_FACTION(StackVal, bVar3);
		SET_CRIME_TALLIED(bVar3, 0);
		SET_CRIME_COUNTER(bVar3, 1);
		SET_CRIME_WORLD_REGION(bVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(bVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(bVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return bVar3;
}

void Function_182() //Position: 0x9291 / 37521
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_147(bVar0, bVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(bVar3))
		{
			SET_CRIME_WITNESSED(bVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

bool Function_183(int iParam0) //Position: 0x92F4 / 37620
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_184(int iParam0) //Position: 0x930A / 37642
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_185(bool bParam0, bool bParam1) //Position: 0x931F / 37663
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_147(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (GET_CRIME_CRIMINAL(bVar3) != bParam0 && GET_CRIME_TYPE(bVar3) != bParam1)
		{
			DESTROY_ITERATOR(bVar0);
			return 1;
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 0;
}

bool Function_186(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x939B / 37787
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
		fVar0 = Function_189(bParam0, Global_34573);
		if (!Function_83(uParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_187(bParam0);
				return 1;
			}
		}
		if (!Function_83(uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_187(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_187(bParam0);
				return 1;
			}
		}
		if (!Function_83(uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_187(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1,3f)
					{
						*uParam1 = 4;
						Function_187(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_83(uParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_187(bParam0);
				return 1;
			}
		}
		if (!Function_83(uParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_187(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_187(bool bParam0) //Position: 0x9532 / 38194
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_188(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_188(bool bParam0) //Position: 0x9566 / 38246
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_189(bool bParam0, bool bParam1) //Position: 0x957D / 38269
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

bool Function_190() //Position: 0x966E / 38510
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_191(bool bParam0) //Position: 0x9683 / 38531
{
	bool bVar0;
	vector3 vVar1;
	
	switch (bParam0->f_672)
	{
		case 0x00000000:
			bVar0 = Function_82(StackVal, StackVal, *(bParam0 + 416));
			if (bParam0->f_700 > 3)
			{
				bVar0 = true;
			}
			if (bParam0->f_620 <= 3)
			{
				Function_205(StackVal, StackVal, StackVal, StackVal, bParam0, *(bParam0 + 416), *(bParam0 + 500), bVar0);
				*(bParam0 + 680) = { StackVal, StackVal, Function_205(StackVal, StackVal, StackVal, StackVal, bParam0, *(bParam0 + 416), *(bParam0 + 500), bVar0) };
			}
			if (Function_80(StackVal, StackVal, *(bParam0 + 680)))
			{
				Function_200(0);
				*(bParam0 + 680) = { StackVal, StackVal, Function_200(0) };
			}
			if (Function_80(StackVal, StackVal, *(bParam0 + 680)))
			{
				*(bParam0 + 680) = { 0.0f, 0.0f, 0.0f };
				return;
			}
			if (!STREAMING_ARE_BOUNDS_LOADED(*(bParam0 + 680), 1.0f))
			{
				bParam0->f_620++;
				*(bParam0 + 680) = { 0.0f, 0.0f, 0.0f };
				return;
			}
			if (IS_OBJECT_VALID(bParam0->f_676))
			{
				DESTROY_OBJECT(bParam0->f_676);
			}
			bParam0->f_676 = CREATE_NAV_QUERY(bParam0->f_336, Function_213());
			if (!bVar0)
			{
				vVar1 = { StackVal, StackVal, *(bParam0 + 416) };
			}
			else if (Global_29006 != Global_30693[0])
			{
				if (Function_193(StackVal, StackVal, *(bParam0 + 416), 2096, 0.0f, 150.0f, &vVar1, 0) != "")
				{
				}
				else
				{
					vVar1 = { StackVal, StackVal, *(bParam0 + 416) };
				}
			}
			else
			{
				vVar1 = { -2759,01f, 32,06f, 4269,67f };
			}
			if ((Global_3387 || Global_29006 != Global_30693[1]) || bVar0)
			{
				NAV_QUERY_START_CAN_PATH_TO_POINT(bParam0->f_676, *(bParam0 + 680), vVar1, 0);
			}
			else
			{
				NAV_QUERY_START_CAN_PATH_TO_POINT(bParam0->f_676, *(bParam0 + 680), vVar1, 976);
			}
			bParam0->f_696 = GET_CURRENT_GAME_TIME();
			bParam0->f_672 = 1;
			break;
		
		case 0x00000001:
			if (!NAV_QUERY_IS_DONE(bParam0->f_676))
			{
				if (bParam0->f_696 + 2.0f) > GET_CURRENT_GAME_TIME()
				{
					bParam0->f_672 = 0;
					NAV_QUERY_STOP(bParam0->f_676);
					DESTROY_OBJECT(bParam0->f_676);
				}
				return;
			}
			if (!NAV_QUERY_CAN_PATH_TO_POINT(bParam0->f_676))
			{
				bParam0->f_700++;
				bParam0->f_672 = 3;
				NAV_QUERY_STOP(bParam0->f_676);
				DESTROY_OBJECT(bParam0->f_676);
				return;
			}
			NAV_QUERY_STOP(bParam0->f_676);
			DESTROY_OBJECT(bParam0->f_676);
			bParam0->f_672 = 2;
			break;
		
		case 0x00000002:
			bParam0->f_700 = 0;
			if (VDIST(*(bParam0 + 680), *(bParam0 + 416)) > 30.0f)
			{
				bParam0->f_672 = 0;
				return;
			}
			if (Function_192(StackVal, StackVal, *(bParam0 + 680), 1.0f, 75.0f, 1, 1, 0))
			{
				bParam0->f_672 = 0;
			}
			break;
	}
	return;
}

bool Function_192(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x98CB / 39115
{
}

var Function_193(vector3 vParam0, int iParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x98E7 / 39143
{
	vector3 vVar0;
	int iVar3;
	struct<9> Var4;
	
	bVar10 = -1.0f;
	Function_157();
	*uParam6 = { StackVal, StackVal, Function_157() };
	iVar3 = START_CURVE_QUERY(Global_28841, vParam0, iParam3, fParam4, fParam5, Function_199(((fParam5 - fParam4) / 5.0f), 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(iVar3) < 0)
	{
		Function_195(StackVal, StackVal, iVar3, vParam0, iParam3, fParam4, fParam5, Function_199(((fParam5 - fParam4) / 5.0f), 20.0f));
	}
	else
	{
		bVar11 = false;
		while (bVar11 < (GET_NUM_POINTS_IN_CURVE_QUERY(iVar3) - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(iVar3, bVar11, &vVar4);
			if (!bParam7 || !Function_194(&vVar4))
			{
				vVar0.x = vVar4.x;
				vVar0.f_4 = vVar4.y;
				vVar0.f_8 = vVar4.z;
				if (bVar10 > 0.0f || bVar10 < VDIST(vParam0, vVar0))
				{
					bVar10 = VDIST(vParam0, vVar0);
					*uParam6 = { StackVal, StackVal, vVar0 };
					bVar12 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(iVar3, bVar11);
				}
			}
			bVar11++;
		}
	}
	UNK_0xDF93BD7C(iVar3);
	return bVar12;
}

bool Function_194(bool bParam0) //Position: 0x99C5 / 39365
{
	if (bParam0->f_12 > 0,001f || bParam0->f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_195(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x99E6 / 39398
{
	PRINTSTRING("Curve Query Report: NumCurves-");
	PRINTINT(GET_NUM_CURVES_IN_CURVE_QUERY(iParam0));
	PRINTSTRING(" NumPoints-");
	PRINTINT(GET_NUM_POINTS_IN_CURVE_QUERY(iParam0));
	PRINTSTRING(" SearchCenter-");
	PRINTVECTOR(vParam1);
	PRINTSTRING(" curveMask-");
	PRINTINT(bParam4);
	PRINTSTRING(" min/max/freq-");
	PRINTFLOAT(bParam5);
	PRINTSTRING("/");
	PRINTFLOAT(bParam6);
	PRINTSTRING("/");
	PRINTFLOAT(bParam7);
	PRINTNL();
	Function_196(iParam0);
}

void Function_196(bool bParam0) //Position: 0x9A9D / 39581
{
	bool bVar0;
	struct<6> Var1;
	
	bVar0 = false;
	while (bVar0 <= GET_NUM_CURVES_IN_CURVE_QUERY(bParam0))
	{
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bParam0, bVar0)));
		PRINTNL();
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_POINTS_IN_CURVE_QUERY(bParam0))
	{
		GET_POINT_FROM_CURVE_QUERY(bParam0, bVar0, &Var1);
		Function_197(StackVal, StackVal, StackVal, StackVal, StackVal, Var1);
		PRINTSTRING(" from ");
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bParam0, bVar0)));
		PRINTNL();
		bVar0++;
	}
	return;
}

void Function_197(struct<17> Param0) //Position: 0x9B0C / 39692
{
	Function_198(&Param0);
	PRINTVECTOR(Function_198(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
}

vector3 Function_198(bool bParam0) //Position: 0x9B41 / 39745
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

var Function_199(int iParam0, int iParam1) //Position: 0x9B60 / 39776
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

vector3 Function_200(int iParam0) //Position: 0x9B73 / 39795
{
	vector3 vVar0;
	
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	Function_203();
	Function_202(0);
	Function_201(iParam0);
	UNK_0x0AC99007(5.0f, 5.0f);
	UNK_0x30C67D05(1);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	Function_157();
	return StackVal, StackVal, Function_157();
}

void Function_201(bool bParam0) //Position: 0x9BAE / 39854
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000001:
			AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
			break;
		
		case 0x00000007:
		case 0x00000002:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 0);
			break;
		
		case 0x00000006:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 0, 0);
			break;
		
		case 0x00000005:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 1, 0);
			break;
		
		case 0x00000008:
		case 0x00000003:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 0, 1);
			AMBIENT_SET_DISTANCE_FILTER(5.0f, 25.0f);
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000009:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 1);
			break;
		
		default:
			LOG_ERROR("No point type filter set!");
			break;
	}
	return;
}

void Function_202(bool bParam0) //Position: 0x9C61 / 40033
{
	if (bParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * bParam0), bParam0);
	}
	else if (Global_3386)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

void Function_203() //Position: 0x9CA5 / 40101
{
	float fVar0;
	bool bVar1;
	
	Function_204(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_204(var uParam0, bool bParam1) //Position: 0x9CB9 / 40121
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*uParam0 = 65.0f;
		*bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*uParam0 = 115.0f;
		*bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*uParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
		else
		{
			*uParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
	}
	return;
}

vector3 Function_205(int iParam0, vector3 vParam1, vector3 vParam4, bool bParam7) //Position: 0x9D42 / 40258
{
	bool bVar0;
	bool bVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	vector3 vVar12;
	
	if (Function_91())
	{
		Function_157();
		return StackVal, StackVal, Function_157();
	}
	fVar7 = 100.0f;
	fVar8 = 75.0f;
	if (*iParam0 == 1)
	{
		fVar7 = 175.0f;
		fVar8 = 125.0f;
	}
	bVar11 = 4294967295;
	while (!bVar6 && iVar9 > 10)
	{
		iVar10 = START_CURVE_QUERY(iParam0->f_336, vParam1, 6,726233E-44f, fVar8, fVar7, 5.0f, 0);
		if (!GET_NUM_POINTS_IN_CURVE_QUERY(iVar10) < 0)
		{
			UNK_0xDF93BD7C(bVar10);
			fVar8 = fVar7;
			fVar7 = (fVar7 + 25.0f);
		}
		else
		{
			if (!bParam7)
			{
				bVar11 = Function_206(StackVal, StackVal, bVar10, vParam4, 4.0f, 0);
			}
			else
			{
				bVar11 = Function_206(StackVal, StackVal, bVar10, vParam4, 18.0f, 0);
			}
			if (bVar11 == 4294967295)
			{
				UNK_0xDF93BD7C(bVar10);
				fVar8 = fVar7;
				fVar7 = (fVar7 + 25.0f);
			}
			else
			{
				bVar6 = true;
			}
		}
		iVar9++;
	}
	if (iVar9 > 10)
	{
		bVar11 = 4294967295;
	}
	if (bVar11 != 4294967295)
	{
		GET_POINT_FROM_CURVE_QUERY(bVar10, bVar11, &bVar0);
	}
	UNK_0xDF93BD7C(bVar10);
	Function_198(&bVar0);
	vVar12 = { StackVal, StackVal, Function_198(&bVar0) };
	return StackVal, StackVal, vVar12;
}

int Function_206(bool bParam0, vector3 vParam1, float fParam4, int iParam5) //Position: 0x9E3A / 40506
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<6> Var3;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	vector3 vVar18;
	
	if (!IS_CURVE_QUERY_VALID(iParam0))
	{
		LOG_ERROR("Invalid Curve Query");
		return 4294967295;
	}
	switch (iParam5)
	{
		case 0x00000000:
			while ((StackVal || !(StackVal || FABS(((Function_194(&Var3) || !bVar9) - fParam4 != -1.0f)) > fParam4)) && iVar1 > 10)
			{
				bVar0 = RAND_INT_RANGE(false, (GET_NUM_POINTS_IN_CURVE_QUERY(iParam0) - 1));
				GET_POINT_FROM_CURVE_QUERY(bParam0, bVar0, &Var3);
				iVar1++;
				bVar9 = true;
			}
			if (iVar1 < 9 || !bVar9)
			{
				return 4294967295;
			}
			break;
		
		case 0x00000001:
			bVar10 = 1,001638E+07.0f;
			bVar0 = 4294967295;
			bVar2 = false;
			while (bVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(bParam0))
			{
				GET_POINT_FROM_CURVE_QUERY(bParam0, bVar2, &Var3);
				Function_198(&Var3);
				bVar11 = VDIST(Function_198(&Var3), vParam1);
				if (StackVal && (StackVal || FABS((((bVar11 > bVar10 && !Function_194(&Var3)) && !Function_207(&Var3)) - fParam4 != -1.0f)) > fParam4))
				{
					Function_197(StackVal, StackVal, StackVal, StackVal, StackVal, Var3);
					PRINTNL();
					bVar10 = bVar11;
					bVar0 = bVar2;
				}
				else
				{
					Function_197(StackVal, StackVal, StackVal, StackVal, StackVal, Var3);
					PRINTNL();
					if (bVar11 < bVar10)
					{
					}
					else if (Function_194(&Var3))
					{
					}
					else if (Function_207(&Var3))
					{
					}
					else if (StackVal && FABS((StackVal - fParam4 == -1.0f)) < fParam4)
					{
					}
					else if (fParam4 != -1.0f)
					{
					}
				}
				bVar2++;
			}
			GET_POINT_FROM_CURVE_QUERY(bParam0, bVar0, &Var3);
			break;
		
		case 0x00000002:
			bVar10 = 0.0f;
			bVar0 = 4294967295;
			bVar2 = false;
			while (bVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(bParam0))
			{
				GET_POINT_FROM_CURVE_QUERY(bParam0, bVar2, &Var3);
				Function_198(&Var3);
				bVar11 = VDIST(Function_198(&Var3), vParam1);
				if (StackVal && (StackVal || FABS((((bVar11 < bVar10 && !Function_194(&Var3)) && !Function_207(&Var3)) - fParam4 != -1.0f)) > fParam4))
				{
					bVar10 = bVar11;
					bVar0 = bVar2;
				}
				bVar2++;
			}
			GET_POINT_FROM_CURVE_QUERY(bParam0, bVar0, &Var3);
			break;
		
		case 0x00000003:
			return 4294967295;
			break;
		
		case 0x00000004:
			break;
		
		default:
			return 4294967295;
			break;
	}
	if (Function_194(&Var3))
	{
		return 4294967295;
	}
	if (Function_207(&Var3))
	{
		return 4294967295;
	}
	if (Global_30900[1])
	{
		bVar2 = false;
		bVar2 = false;
		while (bVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(bParam0))
		{
			GET_POINT_FROM_CURVE_QUERY(bParam0, bVar2, &iVar12);
			Function_198(&iVar12);
			vVar18 = { StackVal, StackVal, Function_198(&iVar12) };
			bVar2++;
		}
		Function_198(&Var3);
		vVar18 = { StackVal, StackVal, Function_198(&Var3) };
	}
	return bVar0;
}

bool Function_207(bool bParam0) //Position: 0xA09D / 41117
{
	return ((((StackVal && (StackVal && *bParam0 != 0.0f != 0.0f) != 0.0f) && bParam0->f_12 != 0.0f) && bParam0->f_16 != 0.0f) && bParam0->f_20 != 4294967295);
}

bool Function_208(int iParam0, int iParam1) //Position: 0xA0CB / 41163
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 1;
	if (iParam0->f_704)
	{
		iVar0 = 0;
	}
	if (iParam0->f_624 && iVar0)
	{
		if (!IS_ACTOR_VALID(Function_209(iParam0, iParam1, iParam0->f_336, iParam0->f_576, iParam0->f_596, iParam1->f_48, 1)))
		{
			iVar0 = 0;
			if (!IS_ACTOR_VALID(Function_61(iParam0, iParam0->f_336, iParam0->f_576, iParam0 + 596, iParam1->f_48, 1)))
			{
				return 0;
			}
		}
	}
	if (!IS_ACTOR_VALID(Function_61(iParam0, iParam0->f_336, iParam0->f_576, iParam0 + 596, iParam1->f_48, 1)))
	{
		return 0;
	}
	if (iParam0->f_372 <= iParam0->f_368)
	{
		iVar2 = (iParam0->f_368 - iParam0->f_372);
		iVar1 = 0;
		while (iVar1 <= iVar2)
		{
			if (iParam0->f_624 && iVar0)
			{
				Function_209(iParam0, iParam1, iParam0->f_336, iParam0->f_576, iParam0->f_596, iParam1->f_48, 0);
			}
			else
			{
				Function_61(iParam0, iParam0->f_336, iParam0->f_576, iParam0 + 596, iParam1->f_48, 0);
			}
			iVar1++;
		}
	}
	iParam0->f_344 = GET_CURRENT_GAME_TIME();
	if (!Function_15(iParam0->f_576, 59, iParam1->f_48))
	{
		if (GET_WEAPON_IN_HAND(iParam1->f_48) == 4294967295)
		{
			Function_143(iParam0->f_576, "law_go_wanted_unarmed", 5.0f, iParam1->f_64, 20.0f, 1, 0);
		}
		else
		{
			Function_143(iParam0->f_576, "law_go_wanted", 5.0f, iParam1->f_64, 20.0f, 1, 0);
		}
	}
	return 1;
}

var Function_209(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6) //Position: 0xA240 / 41536
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	bool bVar11;
	bool bVar12;
	var uVar13;
	var uVar15;
	
	if (!SQUAD_IS_VALID(bParam3))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(bParam2))
	{
		return "";
	}
	if ((!iParam0->f_672 != 2 && !iParam0->f_672 != 3) && iParam0->f_372 <= iParam0->f_368)
	{
		return "";
	}
	if (iParam0->f_672 == 3)
	{
		iParam0->f_672 = 0;
		return "";
	}
	if (iParam0->f_600 <= iParam4 && iParam0->f_372 <= iParam0->f_368)
	{
		if (SQUAD_GET_SIZE(iParam0->f_576) <= 1)
		{
			iParam0->f_648 = 24;
		}
		return "";
	}
	if (!IS_PLAYER_CONTROLLABLE(0))
	{
		return "";
	}
	if ((GET_MOUNT(uParam1->f_48) != "" && GET_VEHICLE(uParam1->f_48) != "") && iParam0->f_600 > 6)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	Function_84(iParam0 + 500, 40.0f, &vVar5, 10);
	if (iParam0->f_692)
	{
		vVar2 = { StackVal, StackVal, *(iParam0 + 680) };
	}
	else
	{
		Function_84(iParam0 + 680, 40.0f, &vVar2, 10);
	}
	if (iParam0->f_672 == 2)
	{
		if (Function_82(StackVal, StackVal, vVar2))
		{
			iParam0->f_672 = 0;
			return "";
		}
	}
	vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar5, StackVal) };
	vVar8 = { 0.0f, UNK_0x9C40E671(&vVar8), 0.0f };
	if (iParam0->f_372 <= iParam0->f_368)
	{
		bVar12 = true;
		if (!iParam0->f_692)
		{
			bVar11 = true;
		}
	}
	else if (!bVar1 || !Global_30767[23])
	{
		bVar11 = false;
	}
	else
	{
		bVar11 = true;
	}
	if (bVar11)
	{
		if (iParam0->f_648 != 13 || iParam0->f_648 != 14)
		{
			bVar11 = false;
		}
	}
	if (!bVar12)
	{
		if (bVar11)
		{
			if (!Function_81(2))
			{
				bVar11 = false;
				if (!Function_81(1))
				{
					return "";
				}
			}
		}
		if (!Function_81(1))
		{
			return "";
		}
	}
	uVar13 = 1;
	if (!Function_80(StackVal, StackVal, vVar2) || bVar12)
	{
		if (Function_79(&vVar2, iParam0 + 416) > Function_78(iParam0, bVar11))
		{
			bVar0 = Function_62(StackVal, StackVal, StackVal, StackVal, iParam0, bParam2, vVar2, vVar8, &uVar13, uVar15, bVar12, bVar11, iParam6);
		}
		else
		{
			iParam0->f_704 = 1;
		}
	}
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_672 = 0;
		if (IS_ACTOR_ALIVE(bVar0))
		{
			Function_39(iParam0, bVar0, bParam5);
		}
		iParam0->f_600++;
	}
	return bVar0;
}

void Function_210(int iParam0, int iParam1) //Position: 0xA471 / 42097
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	struct<9> Var6;
	
	switch (iParam0->f_672)
	{
		case 0x00000000:
			bVar2 = Function_82(StackVal, StackVal, *(iParam0 + 416));
			if (iParam0->f_700 > 3)
			{
				bVar2 = true;
			}
			if (GET_MOUNT(iParam1->f_48) != "" && GET_VEHICLE(iParam1->f_48) != "")
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			if (Function_40(0x1000000) && Global_13111 == 1)
			{
				Function_212(0x1000000);
				Function_157();
				*(&Global_26316 + 156) = { StackVal, StackVal, Function_157() };
			}
			if (StackVal && !Function_80(StackVal, Function_40(0x1000000), *(&Global_26316 + 156)))
			{
				if (StackVal <= 1000.0f)
				{
					(&Global_26316 + 156)->f_4 = (StackVal - 1000.0f);
				}
				if (STREAMING_ARE_BOUNDS_LOADED(*(&Global_26316 + 156), 1.0f))
				{
					*(iParam0 + 680) = { StackVal, StackVal, *(&Global_26316 + 156) };
				}
			}
			else if ((!bVar0 && IS_LAYOUTREF_VALID(iParam0->f_340)) && !*iParam0 != 1)
			{
				bVar1 = Function_211(iParam0, "nlaw_spawn");
				if (IS_OBJECT_VALID(bVar1))
				{
					GET_OBJECT_POSITION(bVar1, iParam0 + 680);
					iParam0->f_692 = 1;
					if (Function_80(StackVal, StackVal, *(iParam0 + 680)) || VDIST(*(iParam0 + 680), *(iParam0 + 416)) < (110.0f * 0,75f))
					{
						Function_200(0);
						*(iParam0 + 680) = { StackVal, StackVal, Function_200(0) };
					}
				}
			}
			else if (*iParam0 == 3)
			{
				Function_200(0);
				*(iParam0 + 680) = { StackVal, StackVal, Function_200(0) };
			}
			else
			{
				Function_205(StackVal, StackVal, StackVal, StackVal, iParam0, *(iParam0 + 416), *(iParam0 + 500), bVar2);
				*(iParam0 + 680) = { StackVal, StackVal, Function_205(StackVal, StackVal, StackVal, StackVal, iParam0, *(iParam0 + 416), *(iParam0 + 500), bVar2) };
			}
			Function_157();
			*(&Global_26316 + 156) = { StackVal, StackVal, Function_157() };
			if (Function_80(StackVal, StackVal, *(iParam0 + 680)))
			{
				Function_200(0);
				*(iParam0 + 680) = { StackVal, StackVal, Function_200(0) };
			}
			if (Function_80(StackVal, StackVal, *(iParam0 + 680)))
			{
				*(iParam0 + 680) = { 0.0f, 0.0f, 0.0f };
				return;
			}
			if (!bVar2)
			{
				if (StackVal < (StackVal + 10.0f) && !bVar0)
				{
					*(iParam0 + 680) = { 0.0f, 0.0f, 0.0f };
					return;
				}
				if (StackVal > (StackVal - 10.0f) && !bVar0)
				{
					*(iParam0 + 680) = { 0.0f, 0.0f, 0.0f };
					return;
				}
			}
			if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 680), 1.0f))
			{
				*(iParam0 + 680) = { 0.0f, 0.0f, 0.0f };
				return;
			}
			if (IS_ACTOR_VALID(iParam1->f_48))
			{
				if ((*iParam0 != 1 || *iParam0 != 3) || *iParam0 != 2)
				{
					Function_102(iParam1->f_48);
					vVar3 = { StackVal, StackVal, Function_102(iParam1->f_48) };
					vVar6 = { 32.0f, 96.0f, 2741.0f };
					if (VDIST(vVar3, vVar6) >= 70.0f)
					{
						if (iParam0->f_724 == 1)
						{
							if (StackVal > vVar6.z)
							{
								*(iParam0 + 680) = { 0.0f, 0.0f, 0.0f };
								return;
							}
						}
						if (StackVal < vVar6.z)
						{
							*(iParam0 + 680) = { 0.0f, 0.0f, 0.0f };
							return;
						}
					}
				}
			}
			iParam0->f_676 = CREATE_NAV_QUERY(iParam0->f_336, Function_213());
			if (!bVar2)
			{
				vVar9 = { StackVal, StackVal, *(iParam0 + 416) };
			}
			else if (Global_29006 != Global_30693[0])
			{
				if (Function_193(StackVal, StackVal, *(iParam0 + 416), 2096, 0.0f, 150.0f, &vVar9, 0) != "")
				{
				}
				else
				{
					vVar9 = { StackVal, StackVal, *(iParam0 + 416) };
				}
			}
			else
			{
				vVar9 = { -2759,01f, 32,06f, 4269,67f };
			}
			if (bVar0 && !bVar2)
			{
				NAV_QUERY_START_CAN_PATH_TO_POINT(iParam0->f_676, *(iParam0 + 680), vVar9, 976);
			}
			else
			{
				NAV_QUERY_START_CAN_PATH_TO_POINT(iParam0->f_676, *(iParam0 + 680), vVar9, 0);
			}
			iParam0->f_696 = GET_CURRENT_GAME_TIME();
			iParam0->f_672 = 1;
			break;
		
		case 0x00000001:
			if (!NAV_QUERY_IS_DONE(iParam0->f_676))
			{
				if (iParam0->f_696 + 3.0f) > GET_CURRENT_GAME_TIME()
				{
					iParam0->f_672 = 0;
					NAV_QUERY_STOP(iParam0->f_676);
					DESTROY_OBJECT(iParam0->f_676);
				}
				return;
			}
			if (!NAV_QUERY_CAN_PATH_TO_POINT(iParam0->f_676))
			{
				iParam0->f_700++;
				NAV_QUERY_STOP(iParam0->f_676);
				DESTROY_OBJECT(iParam0->f_676);
				iParam0->f_672 = 3;
				return;
			}
			NAV_QUERY_STOP(iParam0->f_676);
			iParam0->f_672 = 2;
			break;
		
		case 0x00000002:
			iParam0->f_700 = 0;
			if (VDIST(*(iParam0 + 680), *(iParam0 + 416)) > 30.0f)
			{
				iParam0->f_672 = 0;
				return;
			}
			if (Function_192(StackVal, StackVal, *(iParam0 + 680), 1.0f, 50.0f, 1, 1, 0))
			{
				iParam0->f_672 = 0;
			}
			break;
	}
	return;
}

var Function_211(var uParam0, bool bParam1) //Position: 0xA89A / 43162
{
	bool bVar0;
	bool bVar1;
	
	if (Function_91())
	{
		return "";
	}
	bVar1 = CREATE_OBJECT_ITERATOR(uParam0->f_336);
	ITERATE_IN_LAYOUT(bVar1, uParam0->f_340);
	ITERATE_ON_OBJECT_TYPE(bVar1, 8);
	ITERATE_ON_PARTIAL_NAME(bVar1, bParam1);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar1);
		return bVar0;
	}
	DESTROY_ITERATOR(bVar1);
	return "";
}

void Function_212(var uParam0) //Position: 0xA8E9 / 43241
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_213() //Position: 0xA906 / 43270
{
	int iVar0;
	
	return iVar0;
}

void Function_214(int iParam0) //Position: 0xA90E / 43278
{
	if (!IS_LAYOUTREF_VALID(iParam0->f_340))
	{
		iParam0->f_340 = Global_30616;
	}
	return;
}

void Function_215(int iParam0) //Position: 0xA928 / 43304
{
	int iVar0;
	float fVar1;
	
	if (!Function_91())
	{
		if (iParam0->f_612 >= 6)
		{
			iVar0 = (iParam0->f_612 - 6);
			fVar1 = (1.0f - (IntToFloat(iVar0) * 0,12f));
			SET_AMBIENT_STREAMING_REQUIRED_POP_ACTOR_SCALE(fVar1);
		}
	}
	return;
}

int Function_216(int iParam0) //Position: 0xA959 / 43353
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_219();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_19(iParam0[iVar03], 8);
		}
		else if (Function_218())
		{
			iVar1 = 1;
			Function_19(iParam0[iVar03], 8);
		}
		Function_19(iParam0[iVar03], 16);
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
				Function_19(iParam0[iVar03], 1);
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
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_19(iParam0[iVar03], 2);
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
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_19(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_19(iParam0[iVar03], 2);
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
	Function_217();
	return 1;
}

void Function_217() //Position: 0xACD4 / 44244
{
	if (!Function_131(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_218() //Position: 0xAD14 / 44308
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

void Function_219() //Position: 0xAD3F / 44351
{
	if (!Function_131(128))
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

void Function_220(int iParam0, int iParam1) //Position: 0xAD81 / 44417
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

void Function_221(int iParam0, int iParam1) //Position: 0xAD90 / 44432
{
	iParam0->f_476 = GET_CURRENT_GAME_TIME();
	*iParam0 = 0;
	iParam0->f_724 = StackVal;
	iParam0->f_4 = 1;
	Global_13094 = 0,01f;
	iParam0->f_336 = CREATE_LAYOUT("AILawResponse");
	Function_226(iParam0, iParam1, GET_GC_LAYOUT(), 0);
	Function_226(iParam0, iParam1, GET_AMBIENT_LAYOUT(), 0);
	Function_226(iParam0, iParam1, Global_28841, 0);
	iParam0->f_592 = Function_120(Function_225(), Function_224(1));
	iParam0->f_596 = iParam1->f_72;
	Function_223(iParam0, iParam0->f_592, 0);
	iParam0->f_576 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_336, "lawSquad"));
	iParam0->f_580 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_336, "dogSquad"));
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(iParam0->f_576, 648);
	SQUAD_SET_FACTION(iParam0->f_576, iParam1->f_52);
	GET_POSITION(iParam1->f_48, iParam0 + 488);
	iParam0->f_440 = GET_CURRENT_GAME_TIME();
	GET_POSITION(iParam1->f_48, iParam0 + 416);
	*(iParam0 + 500) = { StackVal, StackVal, *(iParam0 + 416) };
	iParam0->f_360 = GET_CURRENT_GAME_TIME();
	iParam0->f_444 = iParam0->f_440;
	iParam0->f_448 = iParam0->f_440;
	iParam0->f_340 = Global_26361.f_16;
	Function_222(iParam0, iParam1);
	if (IS_OBJECTSET_VALID(Global_62999))
	{
		CLEAN_OBJECTSET(Global_62999);
		iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
		PRINTINT(iParam0->f_368);
		PRINTNL();
	}
	return;
}

void Function_222(var uParam0, int iParam1) //Position: 0xAEE5 / 44773
{
	uParam0->f_332 = CREATE_POPULATION_SET_IN_LAYOUT(uParam0->f_336, "law_dogs", 1);
	if (iParam1->f_64 == 0)
	{
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1033, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1034, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1035, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1036, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1042, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1043, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1041, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1044, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1037, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1038, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1039, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1040, 10.0f);
		if (Global_29004 == 2)
		{
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1045, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1046, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1047, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1048, 10.0f);
		}
		else
		{
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1042, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1043, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1041, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1044, 10.0f);
		}
	}
	else
	{
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1030, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1031, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1032, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1037, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1038, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1039, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1040, 10.0f);
	}
	return;
}

void Function_223(int iParam0, int iParam1, bool bParam2) //Position: 0xB0C9 / 45257
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = true;
	iVar1 = iParam1;
	iVar2 = 0;
	if (!bParam2)
	{
		iVar3 = Function_20(iParam0->f_724, *iParam0);
	}
	else
	{
		iVar3 = Function_20(iParam0->f_724, 5);
	}
	if (iVar3 > 0)
	{
		iVar4 = 0;
		while (iVar4 <= iParam0->f_260)
		{
			(*iParam0 + 260)[iVar4] = 0;
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= iParam0->f_208)
		{
			(*iParam0 + 208)[iVar4] = 0;
			iVar4++;
		}
		if (iVar1 >= iVar3)
		{
			iVar1 = iVar3;
		}
		while (bVar0)
		{
			bVar5 = RAND_INT_RANGE(false, (iVar3 - 1));
			bVar6 = false;
			while (!bVar6)
			{
				if (!(*iParam0 + 260)[bVar5])
				{
					bVar6 = true;
				}
				else
				{
					bVar5++;
					if (bVar5 > iVar3)
					{
						bVar5 = false;
					}
				}
			}
			if (!bParam2)
			{
				Function_17(iParam0, bVar5, 0);
			}
			else
			{
				Function_17(iParam0, bVar5, 1);
			}
			iVar2++;
			(*iParam0 + 260)[bVar5] = 1;
			if (iVar2 == iVar1)
			{
				bVar0 = false;
			}
		}
		iParam0->f_612 = iParam1;
	}
	return;
}

int Function_224(bool bParam0) //Position: 0xB1C4 / 45508
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar5;
	
	if (!IS_OBJECTSET_VALID(Global_62999))
	{
		return 0;
	}
	if (GET_OBJECTSET_SIZE(Global_62999) < 0)
	{
		return 0;
	}
	bVar1 = false;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_62999))
	{
		bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_62999);
		if (IS_OBJECT_VALID(bVar5))
		{
			if (GET_OBJECT_TYPE(bVar5) == 15)
			{
				if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar5)))
				{
					bVar1++;
				}
			}
			else if (GET_OBJECT_TYPE(bVar5) == 24)
			{
				if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_OBJECT(bVar5)))
				{
					if (bParam0)
					{
						GET_OBJECT_POSITION(GET_PERS_CHAR_FROM_OBJECT(bVar5), &uVar2);
						if (!WOULD_ACTOR_BE_VISIBLE(false, &uVar2, 3212836864) || IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar5))))
						{
							ACTIVATE_ACTOR_FOR_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar5));
						}
					}
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar5))))
					{
						bVar1++;
					}
				}
			}
		}
		bVar0++;
	}
	return bVar1;
}

int Function_225() //Position: 0xB28B / 45707
{
	if (Global_26391.f_24 <= 2)
	{
		return 1;
	}
	if (Global_26391.f_24 <= 5)
	{
		return 2;
	}
	if (Global_26391.f_24 <= 7)
	{
		return 3;
	}
	if (Global_26391.f_24 <= 9)
	{
		return 4;
	}
	if (Global_26391.f_24 <= 11)
	{
		return 5;
	}
	return 6;
}

void Function_226(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0xB2D7 / 45783
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (Function_91())
	{
		if (bParam2 == Global_28841)
		{
			return;
		}
	}
	bVar0 = CREATE_OBJECT_ITERATOR(uParam0->f_336);
	ITERATE_IN_LAYOUT(bVar0, bParam2);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
		if (GET_ACTOR_FACTION(bVar2) != uParam1->f_52 && IS_ACTOR_ALIVE(bVar2))
		{
			bVar3 = true;
			if (Function_91())
			{
				if (!NET_IS_OBJECT_LOCAL(bVar2) && bParam2 != GET_AMBIENT_LAYOUT())
				{
					bVar3 = false;
				}
			}
			if (bVar3)
			{
				if (Function_227(bVar2, Global_62999) && iParam3)
				{
					Function_39(uParam0, bVar2, uParam1->f_48);
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
}

int Function_227(bool bParam0, bool bParam1) //Position: 0xB37A / 45946
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
		ITERATE_EVERYWHERE(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 2);
		ITERATE_ON_PARTIAL_NAME(bVar1, "nSharedLaw");
		bVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(bVar1));
		DESTROY_ITERATOR(bVar1);
	}
	else
	{
		bVar0 = bParam1;
	}
	if (!IS_OBJECTSET_VALID(bVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(bParam0, bVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(bParam0, bVar0);
	CLEAN_OBJECTSET(bVar0);
	return 1;
}

