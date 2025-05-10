//Decompiled with MagicRDR v1.0
//Function Count : 155
//Statics Count : 20
//Natives Count : 374
//Parameters Count : 7

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
	int iLocal_10 = 0;
	bool bLocal_11 = false;
	int iLocal_12 = 0;
	struct<25> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	var uVar27;
	var uVar30;
	int iVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar46;
	bool bVar47;
	float fVar67;
	var uVar68;
	float fVar69;
	float fVar70;
	float fVar71;
	bool bVar72;
	bool bVar73;
	var uVar74;
	int iVar75;
	bool bVar76;
	bool bVar77;
	var uVar78;
	bool bVar79;
	bool bVar80;
	bool bVar81;
	bool bVar82;
	float fVar83;
	float fVar84;
	float fVar85;
	bool bVar86;
	int iVar87;
	bool bVar88;
	int iVar89;
	bool bVar90;
	vector3 vVar91;
	int iVar94;
	float fVar95;
	vector3 vVar96;
	bool bVar99;
	bool bVar100;
	float fVar101;
	int iVar102;
	bool bVar103;
	vector3 vVar104;
	bool bVar107;
	vector3 vVar108;
	int iVar111;
	bool bVar112;
	vector3 vVar113;
	
	iLocal_10 = 0;
	if (!IS_CRIME_VALID(ScriptParam_0))
	{
		TERMINATE_THIS_SCRIPT();
	}
	if (!Function_154(GET_CRIME_TYPE(ScriptParam_0)))
	{
		TERMINATE_THIS_SCRIPT();
	}
	Global_3404 = 1;
	bVar47 = 6;
	bVar79 = false;
	bVar80 = false;
	bVar82 = true;
	fVar83 = -1.0f;
	fVar85 = GET_CURRENT_GAME_TIME();
	if (!Function_153(Global_76847, 1))
	{
		Function_147(Global_34573, 1, 2, 0);
	}
	bVar73 = Function_145(StackVal, 32768);
	bVar86 = Function_144(ScriptParam_0.f_24);
	Function_142(&bVar47, "pointing", 5, 0);
	Function_142(&bVar47, "custom/pointing", 8, 0);
	Function_142(&bVar47, "witness", 5, 0);
	Function_142(&bVar47, "witness_fema", 5, 0);
	Function_142(&bVar47, "custom/witness", 8, 0);
	Function_141(&bVar47, bVar86, 3, 0);
	fVar69 = 3.5f;
	if (Function_136(&bVar47))
	{
		bVar80 = true;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		GET_OBJECT_POSITION(StackVal, &vVar3);
		GET_OBJECT_POSITION(StackVal, &vVar9);
		if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(StackVal), "road"))
		{
			bVar42 = true;
			fVar69 = 5.0f;
		}
	}
	else
	{
		bVar39 = true;
		fVar71 = (GET_CURRENT_GAME_TIME() + 30.0f);
		iLocal_12 = 1;
	}
	Function_127(&bVar39, &bVar36, &bVar76, &vVar21, &vVar24);
	bVar2 = GET_CRIME_CRIMINAL(ScriptParam_0);
	GET_CRIME_POSITION(ScriptParam_0, &uVar27);
	GET_POSITION(bVar2, &uVar30);
	bVar88 = false;
	PLAYER_RUMBLE("RUMBLE_LGT", 4294967295, 0);
	while (!IS_EXITFLAG_SET())
	{
		iVar89 = 250;
		if (!bVar80)
		{
			if (Function_136(&bVar47))
			{
				bVar80 = true;
			}
		}
		if (!IS_CRIME_VALID(ScriptParam_0) && bVar88 == 11)
		{
			if (bVar88 != 14)
			{
				bVar43 = true;
				bVar88 = 14;
				iVar89 = 0;
			}
		}
		else if (Global_3378)
		{
			if (bVar88 != 14)
			{
				bVar43 = true;
				bVar88 = 14;
				iVar89 = 0;
			}
		}
		else if (Global_3403 && bVar88 > 5)
		{
			if (bVar88 != 14)
			{
				SET_CRIME_WITNESSED(ScriptParam_0, 3);
				Function_126();
				bVar88 = 14;
				bVar38 = true;
				iVar89 = 0;
			}
		}
		else if (!bVar88 != 0)
		{
			GET_OBJECT_POSITION(bVar0, &vVar3);
			GET_POSITION(bVar2, &vVar6);
			if (!IS_ACTOR_VALID(bVar0))
			{
				if (bVar88 != 14)
				{
					bVar43 = true;
					bVar88 = 14;
					iVar89 = 0;
				}
			}
			else if (!IS_ACTOR_ALIVE(bVar0))
			{
				if (bVar88 != 14)
				{
					bVar88 = 14;
					iVar89 = 0;
				}
			}
			else if ((IS_ACTOR_HOGTIED(bVar0) || IS_ACTOR_CRIPPLED(bVar0, 3)) || IS_ACTOR_CRIPPLED(bVar0, 4))
			{
				if (bVar88 != 14)
				{
					bVar88 = 14;
					iVar89 = 0;
				}
			}
			if (!bVar81 && bVar88 == 14)
			{
				if (Global_29007 != iVar33)
				{
					bVar90 = false;
					if (iVar33 != 3 || iVar33 != 4)
					{
						if (Global_29007 == 3 && Global_29007 == 4)
						{
							Function_125(GET_PLAYER_ACTOR(0));
							if (VDIST(vVar3, Function_125(GET_PLAYER_ACTOR(0))) <= 40.0f)
							{
								bVar90 = true;
							}
						}
					}
					else if (Global_29007 != 3 || Global_29007 != 4)
					{
						vVar91 = { StackVal, StackVal, vVar3 };
						Function_125(GET_PLAYER_ACTOR(0));
						if (VDIST(vVar91, Function_125(GET_PLAYER_ACTOR(0))) <= 40.0f)
						{
							bVar90 = true;
						}
					}
					if (bVar90)
					{
						switch (bVar88)
						{
							case 0x00000005:
							case 0x00000004:
							case 0x00000003:
								bVar81 = true;
								fVar84 = (GET_CURRENT_GAME_TIME() + 1.5f);
								Function_124(&bVar0);
								bVar88 = 14;
								iVar89 = 0;
								break;
							
							case 0x00000001:
							case 0x00000002:
								bVar43 = true;
								bVar88 = 14;
								iVar89 = 0;
								break;
							}
					}
					iVar33 = Global_29007;
				}
			}
			if (!bVar39)
			{
				if (VDIST(vVar3, vVar9) > 17.0f)
				{
					if (VDIST(vVar3, vVar6) <= 80.0f || !bVar42)
					{
						MEMORY_PREFER_WALKING(bVar0, 1);
					}
				}
			}
		}
		switch (bVar88)
		{
			case 0x00000000:
				if (GET_OBJECT_TYPE(StackVal) == 24)
				{
					ACTIVATE_ACTOR_FOR_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(StackVal));
					Function_123(GET_PERS_CHAR_FROM_OBJECT(StackVal), 1);
					bVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(StackVal));
					REFERENCE_ACTOR(bVar0);
					SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(GET_PERS_CHAR_FROM_OBJECT(StackVal), 1);
				}
				else
				{
					bVar0 = GET_ACTOR_FROM_OBJECT(StackVal);
					REFERENCE_ACTOR(bVar0);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar0, 1);
				}
				REFERENCE_ACTOR(bVar0);
				TASK_PRIORITY_SET(bVar0, 1);
				SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
				SET_ACTOR_CAN_PLAY_GESTURES(bVar0, false);
				iVar33 = Global_29007;
				TASK_CLEAR(bVar0);
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)))
				{
					AI_QUICK_EXIT_GRINGO(bVar0, 1);
				}
				if (MEMORY_GET_IS_VISIBLE(bVar0, bVar2))
				{
					bVar40 = true;
				}
				else if (IS_ACTOR_VALID(GET_VEHICLE(bVar0)))
				{
					if (Function_122(bVar0, GET_VEHICLE(bVar0), 0))
					{
						bVar40 = true;
					}
				}
				if (bVar40)
				{
					switch (Global_26998[GET_CRIME_TYPE(ScriptParam_0)18].f_20)
					{
						case 0x00000000:
						case 0x00000002:
						case 0x00000003:
							Function_121(StackVal, StackVal, &bVar0, &bVar2, vVar3, fVar69, bVar39, &fVar71);
							SAY_SINGLE_LINE_CONTEXT(bVar0, 85, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
							GET_OBJECT_POSITION(bVar0, &vVar18);
							fVar70 = GET_CURRENT_GAME_TIME();
							bVar88 = 5;
							break;
						
						case 0x00000004:
							SAY_SINGLE_LINE_CONTEXT(bVar0, 105, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
							ADD_BLIP_FOR_ACTOR(bVar0, 344, 0, 2, 0);
							GET_POSITION(bVar2, &vVar6);
							TASK_FOLLOW_OBJECT_AT_DISTANCE(bVar0, Function_120(), 8.0f, 4);
							SAY_SINGLE_LINE_CONTEXT(bVar0, 85, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
							SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(bVar0), 1.0f, 1.0f, 1.0f, 0.5f);
							GET_OBJECT_POSITION(bVar0, &vVar18);
							fVar70 = GET_CURRENT_GAME_TIME();
							bVar88 = 4;
							break;
						
						default:
							break;
					}
				}
				else
				{
					if (IS_ACTOR_VALID(bVar0))
					{
						if (!IS_ACTOR_RIDING_VEHICLE(bVar0))
						{
							TASK_GO_NEAR_COORD(bVar0, &uVar27, fVar69, 4);
							TASK_PRIORITY_SET(bVar0, 1);
						}
						else
						{
							bVar46 = TASK_SEQUENCE_OPEN();
							TASK_VEHICLE_LEAVE(false);
							TASK_GO_NEAR_COORD(false, &uVar27, fVar69, 4);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bVar0, bVar46);
							TASK_SEQUENCE_RELEASE(bVar46, 1);
							MEMORY_PREFER_WALKING(bVar0, 1);
							TASK_PRIORITY_SET(bVar0, 1);
						}
					}
					SAY_SINGLE_LINE_CONTEXT(bVar0, 61, false, 1, 1, 2, 4294967295, 4294967295, 0, 1);
					GET_OBJECT_POSITION(bVar0, &vVar18);
					bVar88 = true;
				}
				if (IS_ACTOR_VALID(bVar0))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar0)))
					{
						ADD_BLIP_FOR_ACTOR(bVar0, 344, 0, 2, 0);
					}
					if (!bVar40)
					{
						SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(bVar0), 1.0f, 1.0f, 1.0f, 0.5f);
						SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(bVar0), 1, 1, 5f);
					}
					GET_OBJECT_POSITION(bVar0, &vVar18);
					fVar70 = GET_CURRENT_GAME_TIME();
				}
				else
				{
					bVar88 = 14;
				}
				break;
			
			case 0x00000001:
				if (VDIST(vVar18, vVar3) < 2.0f)
				{
					vVar18 = { StackVal, StackVal, vVar3 };
					fVar70 = GET_CURRENT_GAME_TIME();
				}
				else if (GET_CURRENT_GAME_TIME() < (fVar70 + 10.0f))
				{
					Function_110(&ScriptParam_0, &bVar0, &uVar74, &vVar3, &vVar9, &vVar18, &fVar70, &bVar77, &bVar88, &iVar89);
					break;
				}
				iVar94 = 0;
				if (Global_29007 == 4 && Global_29007 == 3)
				{
					if (Global_26361.f_48 > 2)
					{
						iVar94 = 1;
					}
				}
				if (!Function_109(bVar2, 2) != ScriptParam_0)
				{
					if (IS_ACTOR_VALID(bVar0))
					{
						ScriptParam_0 = Function_109(bVar2, 2);
						GET_CRIME_POSITION(ScriptParam_0, &uVar27);
						TASK_GO_NEAR_COORD(bVar0, &uVar27, fVar69, 4);
						TASK_PRIORITY_SET(bVar0, 1);
						SAY_SINGLE_LINE_CONTEXT(bVar0, 61, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
					}
				}
				else if ((MEMORY_GET_IS_VISIBLE(bVar0, bVar2) || Function_104(&bVar0, fVar85, &uVar78, &fVar83)) || iVar94)
				{
					if (IS_ACTOR_VALID(bVar0))
					{
						TASK_CLEAR(bVar0);
						if (Function_102(&bVar0))
						{
							Function_101(bVar0, bVar2);
						}
					}
					SAY_SINGLE_LINE_CONTEXT(bVar0, 60, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
					SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(bVar0), 1.0f, 1.0f, 1.0f, 1.0f);
					SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(bVar0), 1, 1, 5f);
					fVar67 = GET_CURRENT_GAME_TIME();
					bVar88 = 3;
				}
				else if (GET_TASK_STATUS(bVar0, 61) == 0)
				{
					if (!IS_ACTOR_RIDING_VEHICLE(bVar0))
					{
						TASK_GO_NEAR_COORD(bVar0, &uVar30, 5.0f, 1);
						TASK_PRIORITY_SET(bVar0, 1);
					}
					else
					{
						bVar46 = TASK_SEQUENCE_OPEN();
						TASK_VEHICLE_LEAVE(false);
						TASK_GO_NEAR_COORD(false, &uVar30, 5.0f, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bVar0, bVar46);
						TASK_SEQUENCE_RELEASE(bVar46, 1);
						MEMORY_PREFER_WALKING(bVar0, 1);
						TASK_PRIORITY_SET(bVar0, 1);
					}
					GET_OBJECT_POSITION(bVar0, &vVar18);
					bVar88 = 2;
				}
				else if (!IS_CRIME_VALID(ScriptParam_0))
				{
					bVar43 = true;
					bVar88 = 14;
				}
				else if (!IS_ACTOR_VALID(bVar0))
				{
					bVar88 = 14;
				}
				break;
			
			case 0x00000002:
				if (VDIST(vVar18, vVar3) < 2.0f)
				{
					vVar18 = { StackVal, StackVal, vVar3 };
					fVar70 = GET_CURRENT_GAME_TIME();
				}
				else if (GET_TASK_STATUS(bVar0, 59) != 1)
				{
					if (GET_CURRENT_GAME_TIME() < (fVar70 + 10.0f))
					{
						Function_110(&ScriptParam_0, &bVar0, &uVar74, &vVar3, &vVar9, &vVar18, &fVar70, &bVar77, &bVar88, &iVar89);
						break;
					}
				}
				else
				{
					vVar18 = { StackVal, StackVal, vVar3 };
					fVar70 = GET_CURRENT_GAME_TIME();
				}
				if (!Function_109(bVar2, 2) != ScriptParam_0)
				{
					if (IS_ACTOR_VALID(bVar0))
					{
						ScriptParam_0 = Function_109(bVar2, 2);
						GET_CRIME_POSITION(ScriptParam_0, &uVar27);
						TASK_GO_NEAR_COORD(bVar0, &uVar27, fVar69, 4);
						TASK_PRIORITY_SET(bVar0, 1);
						SAY_SINGLE_LINE_CONTEXT(bVar0, 61, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
					}
				}
				else if (MEMORY_GET_IS_VISIBLE(bVar0, bVar2) || Function_104(&bVar0, fVar85, &uVar78, &fVar83))
				{
					if (IS_ACTOR_VALID(bVar0))
					{
						TASK_CLEAR(bVar0);
						if (Function_102(&bVar0))
						{
							Function_101(bVar0, bVar2);
						}
					}
					SAY_SINGLE_LINE_CONTEXT(bVar0, 60, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
					SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(bVar0), 1.0f, 1.0f, 1.0f, 1.0f);
					SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(bVar0), 1, 1, 5f);
					if (Function_102(&bVar0))
					{
						Function_101(bVar0, bVar2);
					}
					fVar67 = GET_CURRENT_GAME_TIME();
					bVar88 = 3;
				}
				else if (GET_TASK_STATUS(bVar0, 61) != 0 && !GET_TASK_STATUS(bVar0, 59) != 1)
				{
					TASK_SEARCH(bVar0, 1, 30.0f);
				}
				else if (GET_TASK_STATUS(bVar0, 59) == 0)
				{
					bVar43 = true;
					bVar88 = 14;
				}
				else if (!IS_CRIME_VALID(ScriptParam_0))
				{
					bVar43 = true;
					bVar88 = 14;
				}
				else if (!IS_ACTOR_VALID(bVar0))
				{
					bVar88 = 14;
				}
				break;
			
			case 0x00000004:
				if (!GET_CRIME_TYPE(Function_99(ScriptParam_0, Function_120(), 2, 50)) != GET_CRIME_TYPE(ScriptParam_0) || Function_104(&bVar0, fVar85, &uVar78, &fVar83))
				{
					if (IS_ACTOR_VALID(bVar0))
					{
						Function_121(StackVal, StackVal, &bVar0, &bVar2, vVar3, fVar69, bVar39, &fVar71);
						SAY_SINGLE_LINE_CONTEXT(bVar0, 85, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
						GET_OBJECT_POSITION(bVar0, &vVar18);
						fVar70 = GET_CURRENT_GAME_TIME();
						bVar88 = 5;
						SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(bVar0), 1.0f, 1.0f, 1.0f, 1.0f);
						SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(bVar0), 1, 1, 5f);
					}
				}
				else if (!IS_CRIME_VALID(ScriptParam_0))
				{
					bVar43 = true;
					bVar88 = 14;
				}
				else if (!IS_ACTOR_VALID(bVar0))
				{
					bVar88 = 14;
				}
				else if (!IS_CRIME_IN_PROGRESS(ScriptParam_0))
				{
					Function_121(StackVal, StackVal, &bVar0, &bVar2, vVar3, fVar69, bVar39, &fVar71);
					SAY_SINGLE_LINE_CONTEXT(bVar0, 85, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
					GET_OBJECT_POSITION(bVar0, &vVar18);
					fVar70 = GET_CURRENT_GAME_TIME();
					bVar88 = 5;
					SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(bVar0), 1.0f, 1.0f, 1.0f, 1.0f);
					SET_BLIP_BLINK(GET_BLIP_ON_ACTOR(bVar0), 1, 1, 5f);
				}
				break;
			
			case 0x00000003:
				if ((fVar67 + 1.0f) > GET_CURRENT_GAME_TIME() || VDIST(vVar3, vVar6) > 3.0f)
				{
					if (IS_ACTOR_VALID(bVar0))
					{
						RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
						TASK_CLEAR(bVar0);
						Function_121(StackVal, StackVal, &bVar0, &bVar2, vVar3, fVar69, bVar39, &fVar71);
						SAY_SINGLE_LINE_CONTEXT(bVar0, 85, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
					}
					GET_OBJECT_POSITION(bVar0, &vVar18);
					fVar70 = GET_CURRENT_GAME_TIME();
					bVar88 = 5;
				}
				break;
			
			case 0x00000005:
				if (!bVar79 && !bVar39)
				{
					if (!IS_OBJECT_VALID(bVar77))
					{
						if (IS_LAYOUTREF_VALID(Global_30616))
						{
							bVar77 = CREATE_NAV_QUERY(Global_30616, "witnessQuery");
							NAV_QUERY_START_CAN_PATH_TO_POINT(bVar77, vVar3, vVar9, GET_ACTOR_ENUM(bVar0));
						}
					}
					else if (NAV_QUERY_IS_DONE(bVar77))
					{
						if (NAV_QUERY_CAN_PATH_TO_POINT(bVar77))
						{
							bVar79 = true;
						}
						else
						{
							Function_110(&ScriptParam_0, &bVar0, &uVar74, &vVar3, &vVar9, &vVar18, &fVar70, &bVar77, &bVar88, &iVar89);
							break;
						}
					}
				}
				if (VDIST(vVar18, vVar3) < 2.0f)
				{
					vVar18 = { StackVal, StackVal, vVar3 };
					fVar70 = GET_CURRENT_GAME_TIME();
				}
				else
				{
					if (IS_ACTOR_RIDING_VEHICLE(bVar0))
					{
						fVar95 = 17.0f;
						if (bVar36)
						{
							fVar95 = 20.0f;
						}
						if (!iLocal_12)
						{
							if (bVar39)
							{
								if (GET_CURRENT_GAME_TIME() < (fVar70 + 2.5f))
								{
									iLocal_12 = 1;
									fVar71 = GET_CURRENT_GAME_TIME();
									fVar70 = GET_CURRENT_GAME_TIME();
								}
							}
						}
						Function_125(bVar0);
						if ((GET_CURRENT_GAME_TIME() < (fVar70 + 5.0f) || ((VDIST(Function_125(bVar0), vVar9) > fVar95 && !bVar42) && !bVar39)) || DECOR_GET_BOOL(bVar0, "witnessOutNow"))
						{
							bVar46 = TASK_SEQUENCE_OPEN();
							TASK_VEHICLE_LEAVE(false);
							if (!bVar39)
							{
								TASK_GO_NEAR_COORD(false, &vVar9, fVar69, 4);
							}
							else
							{
								TASK_FLEE_ACTOR(false, bVar2, -1.0f, -1.0f, 0, 0, 0);
							}
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bVar0, bVar46);
							TASK_SEQUENCE_RELEASE(bVar46, 1);
							MEMORY_PREFER_WALKING(bVar0, 1);
							fVar70 = GET_CURRENT_GAME_TIME();
							TASK_PRIORITY_SET(bVar0, 1);
						}
					}
					if (GET_CURRENT_GAME_TIME() < (fVar70 + 10.0f))
					{
						Function_110(&ScriptParam_0, &bVar0, &uVar74, &vVar3, &vVar9, &vVar18, &fVar70, &bVar77, &bVar88, &iVar89);
						break;
					}
				}
				if (bVar39)
				{
					if (!bVar41)
					{
						if (Function_98(GET_PLAYER_ACTOR(0), bVar0) > 50.0f)
						{
							if (GET_CURRENT_GAME_TIME() <= fVar71)
							{
								Function_125(bVar0);
								Function_96(StackVal, StackVal, Function_125(bVar0));
								vVar96 = { StackVal, StackVal, Function_96(StackVal, StackVal, Function_125(bVar0)) };
								if (!Function_95(StackVal, StackVal, vVar96))
								{
									TASK_GO_NEAR_COORD(bVar0, &vVar96, 20.0f, 3);
									TASK_PRIORITY_SET(bVar0, 1);
									fVar71 = (GET_CURRENT_GAME_TIME() + 5.0f);
									bVar41 = true;
								}
								else
								{
									fVar71 = (GET_CURRENT_GAME_TIME() + 30.0f);
									iLocal_12 = 1;
								}
							}
						}
						else
						{
							fVar71 = (GET_CURRENT_GAME_TIME() + 30.0f);
							iLocal_12 = 1;
						}
					}
					else if (GET_CURRENT_GAME_TIME() <= fVar71)
					{
						bVar99 = CREATE_OBJECT_ITERATOR(Global_30616);
						if (IS_ITERATOR_VALID(bVar99))
						{
							ITERATE_ON_OBJECT_TYPE(bVar99, 8);
							ITERATE_ON_PARTIAL_NAME(bVar99, "report_crime");
							Function_125(bVar0);
							bVar100 = Function_94(StackVal, StackVal, bVar99, Function_125(bVar0), 1.0f);
							if (IS_OBJECT_VALID(bVar100))
							{
								if (!STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar100), "road"))
								{
									GET_OBJECT_POSITION(bVar100, &vVar9);
									TASK_GO_NEAR_COORD(bVar0, &vVar9, fVar69, 4);
									TASK_PRIORITY_SET(bVar0, 1);
									bVar42 = false;
									bVar39 = false;
								}
								else
								{
									fVar71 = (GET_CURRENT_GAME_TIME() + 5.0f);
								}
							}
							else
							{
								fVar71 = (GET_CURRENT_GAME_TIME() + 5.0f);
							}
							DESTROY_ITERATOR(bVar99);
						}
						else
						{
							fVar71 = (GET_CURRENT_GAME_TIME() + 5.0f);
						}
					}
				}
				if (Function_92(ScriptParam_0.f_12, GET_OBJECT_FROM_ACTOR(bVar0), 1))
				{
					if (GET_OBJECTSET_SIZE(Global_62999) >= 0)
					{
						bVar1 = Function_90(StackVal, StackVal, vVar3);
					}
					else
					{
						bVar1 = Function_89(StackVal, StackVal, vVar3);
					}
					if (!IS_ACTOR_VALID(bVar1))
					{
					}
					bVar88 = 6;
					bVar82 = false;
					iVar89 = 0;
				}
				else if (!bVar39 && VDIST(vVar3, vVar9) >= fVar69)
				{
					if (!bVar42)
					{
						iVar87 = 1;
						bVar88 = 6;
						iVar89 = 0;
					}
					else
					{
						if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bVar0, 1.0f, 80.0f, 1, 1, 0))
						{
							fVar101 = 35.0f;
						}
						else
						{
							fVar101 = 80.0f;
						}
						if (VDIST(vVar3, vVar6) > fVar101)
						{
							TASK_FLEE_ACTOR(bVar0, bVar2, -1.0f, -1.0f, 0, 0, 0);
							bVar39 = true;
							bVar42 = false;
							iLocal_12 = 1;
							fVar71 = (GET_CURRENT_GAME_TIME() + 30.0f);
						}
						else
						{
							iVar87 = 1;
							bVar88 = 6;
							iVar89 = 0;
						}
					}
				}
				else if (bVar39 && VDIST(vVar3, vVar6) < 140.0f)
				{
					bVar88 = 6;
					iVar89 = 0;
				}
				else if (Global_3403)
				{
					SET_CRIME_WITNESSED(ScriptParam_0, 3);
					Function_126();
					bVar88 = 14;
					bVar38 = true;
					iVar89 = 0;
				}
				else
				{
					if (IS_OBJECT_VALID(bVar73))
					{
						if (IS_POINT_IN_VOLUME(vVar3, GET_VOLUME_FROM_OBJECT(bVar73)))
						{
							iVar87 = 0;
							bVar88 = 6;
							iVar89 = 0;
						}
					}
					if (!bVar39)
					{
						iVar102 = GET_TASK_STATUS(bVar0, 61);
						if (iVar102 == 0)
						{
							TASK_GO_NEAR_COORD(bVar0, &vVar9, fVar69, 4);
							TASK_PRIORITY_SET(bVar0, 1);
						}
					}
					if (VDIST(vVar3, vVar6) > 6.0f && !bVar38)
					{
						if (((((Function_88() <= Function_84(&ScriptParam_0) && GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1) && GET_LAST_ATTACKER(bVar0) == bVar2) && !Function_83()) && !Function_82()) && !IS_ACTOR_ON_LADDER(bVar0))
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
					}
					else
					{
						bVar35 = false;
					}
					if (bVar35)
					{
						if (!IS_SCRIPT_USE_CONTEXT_VALID(bVar34))
						{
							bVar34 = ADD_SCRIPT_USE_CONTEXT("law_pay_witness", 50, 5, 0, 0, 0, 0, 4294967295, 0);
							SET_USE_CONTEXT_TEXT(bVar34, "law_pay_witness", I2STR(Function_84(&ScriptParam_0)), 0, 0, 0);
							if (!Function_153(Global_76847, 2))
							{
								Function_147(Global_34573, 2, 2, 0);
							}
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(bVar34))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bVar34);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(bVar34))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(bVar34))
						{
							RELEASE_SCRIPT_USE_CONTEXT(bVar34);
							bVar88 = 12;
							iVar89 = 0;
						}
					}
				}
				break;
			
			case 0x00000006:
				if (IS_PLAYER_CONTROLLABLE(0))
				{
					Function_124(&bVar0);
					bVar38 = true;
					if (bVar39)
					{
						if (Global_29007 == 4 && Global_29007 == 3)
						{
							*(&Global_26316 + 156) = { StackVal, StackVal, vVar3 };
							Function_81(0x1000000);
							bVar88 = 8;
						}
						else
						{
							bVar81 = true;
							fVar84 = (GET_CURRENT_GAME_TIME() + 1.5f);
							Function_124(&bVar0);
							bVar88 = 14;
							iVar89 = 0;
						}
					}
					else
					{
						bVar88 = 7;
					}
					SET_CRIME_WITNESSED(ScriptParam_0, 3);
					Function_126();
					iVar89 = 0;
				}
				break;
			
			case 0x00000007:
				if (!Function_80(Global_30750[2], 0, 4294967295, 0) || !Function_80(Global_30750[6], 0, 4294967295, 0))
				{
					bVar82 = false;
				}
				if (!bVar42)
				{
					bVar72 = Function_79("jail_leave_start");
					if (Global_29006 == Global_30640[0])
					{
						vVar104 = { -2088.95f, 17.6f, 2604.89f };
						bVar103 = FIND_NEAREST_DOOR(&vVar104, 2.0f);
						if (IS_DOOR_VALID(bVar103))
						{
							if (IS_DOOR_LOCKED(bVar103))
							{
								bVar82 = false;
							}
						}
					}
					else if (Global_29006 == Global_30717[0])
					{
						vVar108 = { 760.86f, 79.8f, 1234.83f };
						bVar107 = FIND_NEAREST_DOOR(&vVar108, 2.0f);
						if (IS_DOOR_VALID(bVar107))
						{
							if (IS_DOOR_LOCKED(bVar107))
							{
								bVar82 = false;
							}
						}
					}
					if (bVar82)
					{
						if (IS_OBJECT_VALID(bVar72))
						{
							GET_OBJECT_POSITION(bVar72, &vVar12);
							vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar9, vVar12, StackVal) };
							VSCALE(&vVar15, 0.5f);
							vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar15, StackVal) };
						}
						else
						{
							LOG_ERROR("We think we are a building law spawn, but dont have a jail_leave_flag. We really aren't");
							iVar87 = 0;
						}
					}
					else
					{
						iVar87 = 0;
					}
					if (STREAMING_IS_ACTOR_LOADED(bVar86, 4294967295))
					{
					}
					else
					{
						bVar82 = false;
					}
					if (bVar82)
					{
						if (!IS_ACTOR_VALID(bVar1))
						{
							bVar1 = CREATE_ACTOR_IN_LAYOUT(Global_30616, Function_78(), bVar86, vVar12, 0.0f, 0.0f, 0.0f);
							Function_77(bVar1, 0);
							SET_ACTOR_UPDATE_PRIORITY(bVar1, false);
						}
					}
					Function_76(ScriptParam_0.f_24, 0, 0, 0, 0);
					if (bVar36)
					{
						if ((((((((((!Function_153(Global_76847, 4) && VDIST(Global_34574, vVar3) < 7.5f) && Global_3386) && !IS_ACTOR_INSIDE_VEHICLE(Function_120())) && iVar87) && !IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Function_120()))) && bVar82) && !Function_75(0, 0, 1, 1)) && GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1) && !Global_3419) && !Function_71(12, 0))
						{
							if (Global_29006 != Global_30668[0] || Global_29006 != Global_30640[0])
							{
								Function_70();
								bVar88 = 10;
							}
							else
							{
								bVar88 = 9;
							}
						}
						else
						{
							bVar88 = 9;
						}
					}
					else
					{
						bVar88 = 9;
					}
				}
				else
				{
					if (!IS_ACTOR_VALID(bVar1))
					{
						if (STREAMING_IS_ACTOR_LOADED(bVar86, 4294967295))
						{
						}
						bVar1 = Function_60(StackVal, StackVal, Global_30616, Function_78(), bVar86, Function_78(), Function_62(Global_30750[6], 0, 0, 0), vVar9, 0.0f, 0.0f, 0.0f);
						Function_77(bVar1, 0);
						SET_ACTOR_UPDATE_PRIORITY(bVar1, false);
					}
					Function_76(ScriptParam_0.f_24, 0, 0, 0, 0);
					bVar88 = 9;
					iVar89 = 0;
				}
				break;
			
			case 0x00000008:
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar0)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar0));
				}
				bVar88 = 9;
				iVar89 = 0;
				break;
			
			case 0x00000009:
				if (Function_56(StackVal, StackVal, StackVal, StackVal, &iVar75, &uVar68, bVar0, bVar1, vVar15, vVar6))
				{
					Global_27765 = (GET_CURRENT_GAME_TIME() + 12.0f);
					if (!IS_ACTOR_VALID(bVar1))
					{
						WAIT(2000);
					}
					bVar88 = 14;
					iVar89 = 0;
				}
				break;
			
			case 0x0000000C:
				TASK_CLEAR(bVar0);
				iVar111 = Function_84(&ScriptParam_0);
				if (iVar111 >= Function_55(255))
				{
					Function_54(255, iVar111, 0);
				}
				Function_52(253, 1, 0, 0);
				Function_38(iVar111, 1);
				Function_37(bVar0, iVar111);
				Function_35();
				bVar88 = 13;
				iVar89 = 0;
				break;
			
			case 0x0000000D:
				if (IS_PLAYER_IN_COMBAT(0))
				{
					if (IS_ACTOR_MALE(bVar0))
					{
						SAY_SINGLE_LINE_STRING_WITH_REPLY_OVER_PAIN(Function_120(), "PLAYER_OFFER_BRIBE_M", bVar0, "Bribe_Accept", 1, 0, 0, 0);
					}
					else
					{
						SAY_SINGLE_LINE_STRING_WITH_REPLY_OVER_PAIN(Function_120(), "PLAYER_OFFER_BRIBE_F", bVar0, "Bribe_Accept", 1, 0, 0, 0);
					}
				}
				else if (IS_ACTOR_MALE(bVar0))
				{
					SAY_SINGLE_LINE_STRING_WITH_REPLY_OVER_PAIN(Function_120(), "PLAYER_OFFER_BRIBE_URGENT_M", bVar0, "Bribe_Accept", 1, 0, 0, 0);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_REPLY_OVER_PAIN(Function_120(), "PLAYER_OFFER_BRIBE_URGENT_F", bVar0, "Bribe_Accept", 1, 0, 0, 0);
				}
				if (GET_CRIME_TYPE(ScriptParam_0) == 28)
				{
					bVar112 = GET_CRIME_VICTIM(ScriptParam_0);
					if (IS_OBJECT_VALID(bVar112))
					{
						if (GET_OBJECT_TYPE(bVar112) != 9 || GET_OBJECT_TYPE(bVar112) != 10)
						{
							if (DECOR_CHECK_EXIST(bVar112, "lawAllowTrespassTime"))
							{
								DECOR_REMOVE(bVar112, "lawAllowTrespassTime");
							}
							DECOR_SET_FLOAT(bVar112, "lawAllowTrespassTime", (GET_CURRENT_GAME_TIME() + 10.0f));
						}
					}
				}
				AUDIO_SET_PLAYER_MOOD(0, 0);
				MEMORY_CLEAR_ALL(bVar0);
				ACTOR_HOLSTER_WEAPON(bVar0, 1);
				MEMORY_CONSIDER_AS(bVar0, bVar2, 2);
				bVar43 = true;
				bVar44 = true;
				bVar88 = 14;
				iVar89 = 0;
				break;
			
			case 0x0000000A:
				if (Global_29006 != Global_30668[0] || Global_29006 != Global_30640[0])
				{
					fVar67 = GET_CURRENT_GAME_TIME();
					Function_34("LAW_AI_STATE: EYEWITNESS ROAD REPORT CUTSCENE", 11);
					Function_30(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1);
					bLocal_11 = true;
					Function_125(Function_120());
					vVar113 = { StackVal, StackVal, Function_125(Function_120()) };
					PREVENT_DESPAWN_SET_SPHERE(vVar113, 10.0f);
					STREAMING_UNLOAD_SCENE();
					GET_OBJECT_POSITION(GET_GAME_CAMERA(), &vVar21);
					GET_OBJECT_ORIENTATION(GET_GAME_CAMERA(), &vVar24);
					STREAMING_LOAD_SCENE_EXT(vVar21, vVar24, 1);
					Function_28(Function_120(), 0);
					Function_24(bVar0, bVar1);
					if (!IS_ACTOR_RAGDOLL(bVar0))
					{
						TELEPORT_ACTOR(bVar0, &vVar9, 1, 1, 1);
					}
					Global_63096 = 1;
					bVar88 = 11;
					iVar75 = 0;
				}
				else
				{
					bVar88 = 9;
				}
				iVar89 = 0;
				break;
			
			case 0x0000000B:
				if (Function_56(StackVal, StackVal, StackVal, StackVal, &iVar75, &uVar68, bVar0, bVar1, vVar15, vVar6))
				{
					Function_20(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					bLocal_11 = false;
					if (IS_ACTOR_INSIDE_VEHICLE(Function_120()))
					{
						if (IS_ACTOR_VALID(GET_VEHICLE(Function_120())))
						{
							START_VEHICLE(GET_VEHICLE(Function_120()));
						}
					}
					DESTROY_OBJECT(bVar76);
					STREAMING_SET_POI_LIMIT(1);
					bVar36 = false;
					bVar88 = 14;
				}
				if (IS_OBJECT_VALID(bVar76))
				{
					PLAY_CUTSCENEOBJECT(bVar76, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
					if (fVar67 + 2.0f) > GET_CURRENT_GAME_TIME()
					{
						if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX(Function_120()), 6, 1, 0))
						{
							if (bVar88 != 14)
							{
								Function_20(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
								bLocal_11 = false;
								if (IS_ACTOR_INSIDE_VEHICLE(Function_120()))
								{
									if (IS_ACTOR_VALID(GET_VEHICLE(Function_120())))
									{
										START_VEHICLE(GET_VEHICLE(Function_120()));
									}
								}
								DESTROY_OBJECT(bVar76);
								STREAMING_SET_POI_LIMIT(1);
								bVar36 = false;
								bVar88 = 9;
							}
						}
					}
				}
				if (!Function_19())
				{
					if (!Function_153(Global_76847, 4))
					{
						Function_15("tutorial_eyewitness_3", 0x41200000, 1, 0, 2, 1, 0);
						Function_14(&Global_76847, 4);
					}
					else if (!Function_153(Global_76847, 32768))
					{
						Function_15("tutorial_law_local_spawn", 0x41200000, 1, 0, 2, 1, 0);
						Function_14(&Global_76847, 32768);
					}
				}
				iVar89 = 0;
				break;
			
			case 0x0000000E:
				iVar89 = 0;
				if (GET_CURRENT_GAME_TIME() <= fVar84 || !bVar81)
				{
					if (bLocal_11)
					{
						Function_20(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						bLocal_11 = false;
					}
					if (IS_ACTOR_VALID(bVar0))
					{
						RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
						if (IS_ACTOR_VALID(bVar2))
						{
							TASK_FLEE_ACTOR(bVar0, bVar2, -1.0f, -1.0f, 0, 0, 0);
						}
						else if (IS_ACTOR_VALID(Global_34573))
						{
							TASK_FLEE_ACTOR(bVar0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
						}
						else
						{
							TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
						}
					}
					if (bVar81)
					{
						if (Global_29007 != 4 || Global_29007 != 3)
						{
							Function_76(Global_26361.f_12, 0, 0, 0, 0);
						}
						else
						{
							Function_81(0x1000000);
							Function_11(StackVal, StackVal, Global_26376.f_12, vVar6);
							*(&Global_26316 + 156) = { StackVal, StackVal, Function_11(StackVal, StackVal, Global_26376.f_12, vVar6) };
							(&Global_26316 + 156)->f_4 = (StackVal + 1000.0f);
						}
						SET_CRIME_WITNESSED(ScriptParam_0, 3);
						Function_126();
						Function_124(&bVar0);
						bVar38 = true;
						WAIT(2000);
					}
					PREVENT_DESPAWN_CLEAR();
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				break;
		}
		iVar89 = 0;
		WAIT(iVar89);
	}
	if (bVar43)
	{
		if (bVar44)
		{
			Function_10();
		}
		else
		{
			Function_6(ScriptParam_0);
		}
	}
	if (bVar36)
	{
		if (IS_OBJECT_VALID(bVar76))
		{
			DESTROY_OBJECT(bVar76);
		}
		STREAMING_UNLOAD_SCENE();
		STREAMING_SET_POI_LIMIT(1);
	}
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_124(&bVar0);
		TASK_CLEAR(bVar0);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bVar34))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bVar34);
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		SET_ACTOR_CAN_PLAY_GESTURES(bVar0, true);
		if (IS_ACTOR_VALID(GET_MOUNT(bVar1)))
		{
			RELEASE_ACTOR(GET_MOUNT(bVar1));
		}
		TASK_CLEAR(bVar1);
		RELEASE_ACTOR(GET_MOUNT(bVar1));
	}
	Function_2(&bVar47);
	if (GET_OBJECT_TYPE(StackVal) == 24)
	{
		Function_1(GET_PERS_CHAR_FROM_OBJECT(StackVal));
		DEREFERENCE_ACTOR(bVar0);
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(GET_PERS_CHAR_FROM_OBJECT(StackVal), 0);
	}
	else
	{
		RELEASE_ACTOR(GET_ACTOR_FROM_OBJECT(StackVal));
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar0, 0);
	}
	if (IS_OBJECT_VALID(bVar77))
	{
		NAV_QUERY_STOP(bVar77);
		DESTROY_OBJECT(bVar77);
	}
	PREVENT_DESPAWN_CLEAR();
	if (Global_26361.f_48 > Global_26361.f_52)
	{
		Global_26361.f_56 = (GET_CURRENT_GAME_TIME() + 60.0f);
	}
	if (bLocal_11)
	{
		Function_20(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	}
	Global_63096 = 0;
	Global_3406 = 1;
	Global_3404 = 0;
	TERMINATE_THIS_SCRIPT();
	return;
}

int Function_1(bool bParam0) //Position: 0x18DB / 6363
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
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, 1);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_2(int iParam0) //Position: 0x1975 / 6517
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_3(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x199B / 6555
{
	if (Function_5(uParam0[iParam13], 4))
	{
		if (Function_5(uParam0[iParam13], 1))
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
			Function_4(uParam0[iParam13], 1);
			Function_4(uParam0[iParam13], 2);
			Function_4(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x1AC9 / 6857
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(var uParam0, int iParam1) //Position: 0x1AE3 / 6883
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(bool bParam0) //Position: 0x1B00 / 6912
{
	if (IS_CRIME_VALID(iParam0))
	{
		Function_8(bParam0);
		Function_7(bParam0);
	}
	return;
}

void Function_7(int iParam0) //Position: 0x1B18 / 6936
{
	bool bVar0;
	
	if (IS_OBJECTSET_VALID(GET_CRIME_OBJECTSET(iParam0)))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(GET_CRIME_OBJECTSET(iParam0)))
		{
			DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, GET_CRIME_OBJECTSET(iParam0)));
			bVar0++;
		}
		DESTROY_OBJECTSET(GET_CRIME_OBJECTSET(iParam0));
	}
	DESTROY_OBJECT(GET_OBJECT_FROM_CRIME(iParam0));
	return;
}

void Function_8(int iParam0) //Position: 0x1B5F / 7007
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	fVar0 = GET_CRIME_END_TIMESTAMP(iParam0);
	bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar2 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_9(bVar1, bVar2);
	bVar3 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar3))
	{
		iVar4 = GET_CRIME_FROM_OBJECT(bVar3);
		if (GET_CRIME_END_TIMESTAMP(iVar4) > fVar0)
		{
			Function_7(iVar4);
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	return;
}

void Function_9(bool bParam0, bool bParam1) //Position: 0x1BCB / 7115
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

void Function_10() //Position: 0x1BFA / 7162
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_9(bVar0, bVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		Function_7(uVar3);
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

vector3 Function_11(int iParam0, vector3 vParam1) //Position: 0x1C54 / 7252
{
	if (iParam0 == Global_30693[2])
	{
		Function_13(StackVal, StackVal, vParam1, -1552.54f, 16.18f, 3947.3f, -1569.48f, 17.08f, 3911.75f);
		return StackVal, StackVal, Function_13(StackVal, StackVal, vParam1, -1552.54f, 16.18f, 3947.3f, -1569.48f, 17.08f, 3911.75f);
	}
	if (iParam0 == Global_30640[0])
	{
		Function_13(StackVal, StackVal, vParam1, -2177.79f, 17.72f, 2615.17f, -2098.61f, 17.52f, 2578.78f);
		return StackVal, StackVal, Function_13(StackVal, StackVal, vParam1, -2177.79f, 17.72f, 2615.17f, -2098.61f, 17.52f, 2578.78f);
	}
	if (iParam0 == Global_30668[0])
	{
		Function_13(StackVal, StackVal, vParam1, -942.84f, 90.12f, 2440.58f, -788.44f, 93.84f, 2427.6f);
		return StackVal, StackVal, Function_13(StackVal, StackVal, vParam1, -942.84f, 90.12f, 2440.58f, -788.44f, 93.84f, 2427.6f);
	}
	if (iParam0 == Global_30658[4])
	{
		Function_13(StackVal, StackVal, vParam1, -3716.79f, 9.25f, 3450.1f, -3723.36f, 9.35f, 3497.21f);
		return StackVal, StackVal, Function_13(StackVal, StackVal, vParam1, -3716.79f, 9.25f, 3450.1f, -3723.36f, 9.35f, 3497.21f);
	}
	if (iParam0 == Global_30717[0])
	{
		Function_13(StackVal, StackVal, vParam1, 557.42f, 90.59f, 1239.03f, 603.39f, 84.17f, 1416.26f);
		return StackVal, StackVal, Function_13(StackVal, StackVal, vParam1, 557.42f, 90.59f, 1239.03f, 603.39f, 84.17f, 1416.26f);
	}
	if (iParam0 == Global_30693[0])
	{
		Function_13(StackVal, StackVal, vParam1, -2778.89f, 33.59f, 4275.72f, -2621.83f, 30.19f, 4222.53f);
		return StackVal, StackVal, Function_13(StackVal, StackVal, vParam1, -2778.89f, 33.59f, 4275.72f, -2621.83f, 30.19f, 4222.53f);
	}
	if (iParam0 == Global_30640[4])
	{
		Function_13(StackVal, StackVal, vParam1, -1810.33f, 22.99f, 2820.15f, -1773.93f, 26.24f, 2896.65f);
		return StackVal, StackVal, Function_13(StackVal, StackVal, vParam1, -1810.33f, 22.99f, 2820.15f, -1773.93f, 26.24f, 2896.65f);
	}
	if (iParam0 == Global_30707[0])
	{
		Function_13(StackVal, StackVal, vParam1, -444.13f, 23.88f, 3979.26f, -480.69f, 21.0f, 3897.62f);
		return StackVal, StackVal, Function_13(StackVal, StackVal, vParam1, -444.13f, 23.88f, 3979.26f, -480.69f, 21.0f, 3897.62f);
	}
	if (iParam0 == Global_30685[0])
	{
		Function_13(StackVal, StackVal, vParam1, -4354.76f, 21.36f, 4469.53f, -4442.29f, 35.29f, 4346.45f);
		return StackVal, StackVal, Function_13(StackVal, StackVal, vParam1, -4354.76f, 21.36f, 4469.53f, -4442.29f, 35.29f, 4346.45f);
	}
	if (iParam0 == Global_30693[1])
	{
		Function_13(StackVal, StackVal, vParam1, -1679.0f, 9.36f, 4279.81f, -1715.42f, 9.5f, 4163.3f);
		return StackVal, StackVal, Function_13(StackVal, StackVal, vParam1, -1679.0f, 9.36f, 4279.81f, -1715.42f, 9.5f, 4163.3f);
	}
	if (iParam0 == Global_30723[1])
	{
		Function_13(StackVal, StackVal, vParam1, -426.93f, 151.16f, 1587.94f, -413.66f, 152.73f, 1661.62f);
		return StackVal, StackVal, Function_13(StackVal, StackVal, vParam1, -426.93f, 151.16f, 1587.94f, -413.66f, 152.73f, 1661.62f);
	}
	if (iParam0 == Global_30723[2])
	{
		Function_13(StackVal, StackVal, vParam1, -228.08f, 83.83f, 2078.84f, -325.82f, 85.37f, 2065.88f);
		return StackVal, StackVal, Function_13(StackVal, StackVal, vParam1, -228.08f, 83.83f, 2078.84f, -325.82f, 85.37f, 2065.88f);
	}
	if (iParam0 == Global_30679[0])
	{
		Function_13(StackVal, StackVal, vParam1, -3126.94f, 43.98f, 3747.1f, -3126.94f, 43.98f, 3747.1f);
		return StackVal, StackVal, Function_13(StackVal, StackVal, vParam1, -3126.94f, 43.98f, 3747.1f, -3126.94f, 43.98f, 3747.1f);
	}
	if (iParam0 == Global_30640[1])
	{
		Function_13(StackVal, StackVal, vParam1, -3269.94f, 15.81f, 2723.35f, -3269.94f, 15.81f, 2723.35f);
		return StackVal, StackVal, Function_13(StackVal, StackVal, vParam1, -3269.94f, 15.81f, 2723.35f, -3269.94f, 15.81f, 2723.35f);
	}
	if (iParam0 == Global_30658[1])
	{
		Function_13(StackVal, StackVal, vParam1, -3695.5f, 41.3f, 2154.66f, -3623.43f, 42.96f, 2146.64f);
		return StackVal, StackVal, Function_13(StackVal, StackVal, vParam1, -3695.5f, 41.3f, 2154.66f, -3623.43f, 42.96f, 2146.64f);
	}
	Function_12();
	return StackVal, StackVal, Function_12();
}

vector3 Function_12() //Position: 0x1F86 / 8070
{
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_13(vector3 vParam0, vector3 vParam3, vector3 vParam6) //Position: 0x1F8F / 8079
{
	if (VDIST(vParam0, vParam3) >= VDIST(vParam0, vParam6))
	{
		return StackVal, StackVal, vParam3;
	}
	return StackVal, StackVal, vParam6;
	Function_12();
	return StackVal, StackVal, Function_12();
}

void Function_14(var uParam0, int iParam1) //Position: 0x1FC5 / 8133
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_15(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1FD4 / 8148
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
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_16(int iParam0) //Position: 0x204F / 8271
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

bool Function_17() //Position: 0x208E / 8334
{
	if (Function_18(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_18(var uParam0, bool bParam1) //Position: 0x20A9 / 8361
{
	return (uParam0 && bParam1) == 0;
}

bool Function_19() //Position: 0x20B6 / 8374
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_20(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x20E3 / 8419
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
		bVar0 = Function_120();
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
			if (Function_23())
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
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_52(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_70();
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
	Function_21(iParam9);
}

void Function_21(int iParam0) //Position: 0x21D3 / 8659
{
	iParam0 = iParam0;
	HUD_ENABLE(iParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_22();
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

void Function_22() //Position: 0x2282 / 8834
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

bool Function_23() //Position: 0x22F4 / 8948
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_24(bool bParam0, bool bParam1) //Position: 0x22FD / 8957
{
	bool bVar0;
	
	bVar0 = IS_ACTOR_RAGDOLL(bParam0);
	if (!bVar0)
	{
		ACTOR_HOLSTER_WEAPON(bParam0, 1);
	}
	MEMORY_CLEAR_ALL(bParam0);
	MEMORY_CLEAR_ALL(bParam1);
	if (!bVar0)
	{
		ACTOR_START_FORCE_HOLSTER(bParam0, 0, 0);
	}
	ACTOR_START_FORCE_HOLSTER(bParam1, 0, 0);
	RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
	RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
	TASK_CLEAR(bParam0);
	TASK_CLEAR(bParam1);
	AI_IGNORE_ACTOR(bParam0);
	AI_IGNORE_ACTOR(bParam1);
	if (!bVar0)
	{
		Function_25(bParam0, bParam1);
	}
	TASK_FACE_ACTOR(bParam1, bParam0, 1, 3212836864);
	return;
}

void Function_25(var uParam0, bool bParam1) //Position: 0x2373 / 9075
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_26(StackVal, StackVal, uParam0, vVar0);
	return;
}

void Function_26(bool bParam0, vector3 vParam1) //Position: 0x238D / 9101
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_27(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_27(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_27(bool bParam0, vector3 vParam1) //Position: 0x23C5 / 9157
{
	vector3 vVar0;
	
	Function_125(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_125(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

void Function_28(bool bParam0, bool bParam1) //Position: 0x2448 / 9288
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_29(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_29(bool bParam0, bool bParam1) //Position: 0x24A5 / 9381
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_30(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11) //Position: 0x24C4 / 9412
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	uParam1 = uParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_70();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_120();
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
			if (Function_23())
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
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
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
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
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
				Function_125(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_78(), 2, Function_125(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_52(19, 1, 0, 0);
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
	if (uParam10 && !Function_17())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_33()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_33()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, 1);
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
	if (Function_32(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_31(0x4000000);
	}
	if (Function_32(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_31(0x8000000);
	}
}

void Function_31(int iParam0) //Position: 0x2772 / 10098
{
	int iVar0;
	
	if (Function_18(iParam0, 1) && Function_18(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_32(int iParam0) //Position: 0x27A6 / 10150
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_33() //Position: 0x27C2 / 10178
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

void Function_34(bool bParam0, var uParam1) //Position: 0x2841 / 10305
{
	if (!Function_32(128))
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

void Function_35() //Position: 0x287C / 10364
{
	AI_GLOBAL_CLEAR_ALL_DANGER();
	Function_36(GET_AMBIENT_LAYOUT());
	Function_36(GET_GC_LAYOUT());
	Function_36(Global_6289);
	Function_36(Global_6288);
	Function_36(Global_28841);
	Function_36(Global_6290);
	Function_36(Global_63535);
	return;
}

void Function_36(bool bParam0) //Position: 0x28AF / 10415
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_IN_LAYOUT(bVar0, bParam0);
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		if (IS_ACTOR_VALID(Function_120()))
		{
			while (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = "";
				if (GET_OBJECT_TYPE(bVar1) == 15)
				{
					bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				}
				else if (GET_OBJECT_TYPE(bVar1) == 24)
				{
					bVar2 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar1));
				}
				if (IS_ACTOR_VALID(bVar2))
				{
					if (GET_ACTOR_FACTION(bVar2) != 4 || GET_ACTOR_FACTION(bVar2) != 6)
					{
						TASK_CLEAR(bVar2);
						MEMORY_CONSIDER_AS(bVar2, Function_120(), 2);
						MEMORY_CLEAR_ALL(bVar2);
					}
				}
				bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
			}
		}
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_37(bool bParam0, bool bParam1) //Position: 0x294B / 10571
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(bParam0, "iAdditionalMoney"))
	{
		bVar0 = DECOR_GET_INT(bParam0, "iAdditionalMoney");
		bVar0 = (bVar0 + bParam1);
		DECOR_SET_INT(bParam0, "iAdditionalMoney", bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, "iAdditionalMoney", bParam1);
	}
	return;
}

int Function_38(int iParam0, bool bParam1) //Position: 0x29C6 / 10694
{
	bool bVar0;
	
	bVar0 = Function_55(0);
	if ((Function_55(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_39(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (iParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_55(0));
	return 1;
}

int Function_39(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A56 / 10838
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
	Function_51(iParam0);
	if (bParam2 && bParam1 == 0)
	{
		Function_40(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_40(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2C51 / 11345
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_50(390))), 32);
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
					bVar19 = (Function_49(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_49(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_47(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_44(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_41(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_78(), &Var9);
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

var Function_41(int iParam0) //Position: 0x327E / 12926
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_42(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x328F / 12943
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_43(char* cParam0, bool bParam1) //Position: 0x3384 / 13188
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_44(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x339D / 13213
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_46(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_45(Function_46(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_45(int iParam0, int iParam1) //Position: 0x3402 / 13314
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_46(int iParam0, bool bParam1) //Position: 0x3414 / 13332
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_47(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3426 / 13350
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
	if (((Function_48(iParam0) != 19 || Function_48(iParam0) != 17) || Function_48(iParam0) != 10) || Function_48(iParam0) != 9)
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

int Function_48(int iParam0) //Position: 0x3556 / 13654
{
	return Global_35278[iParam020].f_48;
}

float Function_49(int iParam0) //Position: 0x3565 / 13669
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_50(int iParam0) //Position: 0x359E / 13726
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_51(int iParam0) //Position: 0x35DB / 13787
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

int Function_52(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3775 / 14197
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
	Function_53(iParam0, TO_FLOAT(bParam1), 1);
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_40(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

int Function_53(int iParam0, bool bParam1, bool bParam2) //Position: 0x3995 / 14741
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

int Function_54(int iParam0, bool bParam1, bool bParam2) //Position: 0x3BD9 / 15321
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
		Function_53(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_51(iParam0);
	if (bParam2)
	{
		Function_40(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_55(bool bParam0) //Position: 0x3E74 / 15988
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

bool Function_56(int iParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x3EB5 / 16053
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam2))
	{
		*iParam0 = 10;
	}
	else if (!IS_ACTOR_ALIVE(bParam2))
	{
		*iParam0 = 10;
	}
	if (!IS_ACTOR_VALID(bParam3))
	{
		*iParam0 = 10;
	}
	else if (!IS_ACTOR_ALIVE(bParam3))
	{
		*iParam0 = 10;
	}
	switch (*iParam0)
	{
		case 0x00000000:
			bVar0 = IS_ACTOR_RAGDOLL(bParam2);
			if (Function_58(&bParam2))
			{
				Function_57(bParam2, Global_34573);
			}
			if (!bVar0)
			{
				SET_MOVER_FROZEN(bParam2, 1);
			}
			TASK_GO_NEAR_COORD(bParam3, &uParam4, 1.0f, 2);
			if (!bVar0)
			{
				TASK_PRIORITY_SET(bParam2, 1);
			}
			TASK_PRIORITY_SET(bParam3, 1);
			if (!bVar0)
			{
				SAY_SINGLE_LINE_CONTEXT(bParam2, 86, Function_120(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
			}
			*iParam0 = 1;
			*uParam1 = GET_CURRENT_GAME_TIME();
		
		case 0x00000001:
			if (GET_TASK_STATUS(bParam3, 4294967295) != 2 || GET_TASK_STATUS(bParam3, 4294967295) != 0)
			{
				*iParam0 = 6;
			}
			if (*uParam1 + 2.0f) > GET_CURRENT_GAME_TIME()
			{
				*iParam0 = 6;
			}
			break;
		
		case 0x00000006:
			ACTOR_DRAW_ANY_WEAPON(bParam3, 1);
			SAY_SINGLE_LINE_CONTEXT(bParam3, 60, bParam2, 1, 0, 2, 4294967295, 4294967295, 0, 1);
			*iParam0 = 7;
			*uParam1 = GET_CURRENT_GAME_TIME();
		
		case 0x00000007:
			if (*uParam1 + 1.5f) > GET_CURRENT_GAME_TIME()
			{
				*iParam0 = 8;
			}
			break;
		
		case 0x00000008:
			GET_POSITION(Function_120(), &uParam7);
			TASK_GO_NEAR_COORD(bParam3, &uParam7, 5.0f, 4);
			if (IS_MOVER_FROZEN(bParam2))
			{
				SET_MOVER_FROZEN(bParam2, 0);
			}
			TASK_FLEE_ACTOR(bParam2, Function_120(), -1.0f, -1.0f, 0, 0, 0);
			*iParam0 = 9;
			*uParam1 = GET_CURRENT_GAME_TIME();
		
		case 0x00000009:
			if (Global_29006 == Global_30668[0])
			{
				if (*uParam1 + 1.0f) > GET_CURRENT_GAME_TIME()
				{
					*iParam0 = 10;
				}
			}
			else if (*uParam1 + 1.5f) > GET_CURRENT_GAME_TIME()
			{
				*iParam0 = 10;
			}
			break;
		
		case 0x0000000A:
			return 1;
			break;
	}
	return 0;
}

void Function_57(bool bParam0, bool bParam1) //Position: 0x4069 / 16489
{
	struct<9> Var0;
	float fVar9;
	
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	vVar6 = { (vVar3.x - vVar0.x), 0.0f, (vVar3.z - vVar0.z) };
	fVar9 = (GET_HEADING(bParam0) - UNK_0x9C40E671(&vVar6));
	if (IS_ACTOR_MALE(bParam0))
	{
		SET_ANIM_SET_FOR_ACTOR(bParam0, "witness", 0);
	}
	else
	{
		SET_ANIM_SET_FOR_ACTOR(bParam0, "witness_fema", 0);
	}
	while (fVar9 > -0.1f || fVar9 < 360.1f)
	{
		if (fVar9 > -0.1f)
		{
			fVar9 = (fVar9 + 360.0f);
		}
		else if (fVar9 < 360.1f)
		{
			fVar9 = (fVar9 - 360.0f);
		}
	}
	if (fVar9 < 90.0f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "witness/right");
	}
	else if (fVar9 < 270.0f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "witness/left");
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "witness/back");
	}
	return;
}

bool Function_58(int iParam0) //Position: 0x416F / 16751
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		if (((!IS_ACTOR_RIDING_VEHICLE(*iParam0) && !IS_ACTOR_RIDING(*iParam0)) && !IS_ACTOR_RAGDOLL(*iParam0)) && !IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(*iParam0))))
		{
			if (Function_59())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_59() //Position: 0x41AF / 16815
{
	if ((HAS_ANIM_SET_LOADED("witness") && HAS_ANIM_SET_LOADED("witness_fema")) && HAS_ACTION_TREE_LOADED("custom/witness"))
	{
		return 1;
	}
	return 0;
}

bool Function_60(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x41F0 / 16880
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_61(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_61(bParam4))
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

bool Function_61(bool bParam0) //Position: 0x4315 / 17173
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_62(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x432C / 17196
{
	return Function_63(uParam0, iParam1, iParam2, 4294967295, iParam3);
}

var Function_63(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x4340 / 17216
{
	return Function_64(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_64(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x4359 / 17241
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
		Function_69();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_61(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_68(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_68(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_67(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_61(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_67(bVar0))
				{
					Function_66();
				}
				Function_65(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_61(bVar1))
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

void Function_65(int iParam0) //Position: 0x464C / 17996
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

void Function_66() //Position: 0x4700 / 18176
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

bool Function_67(bool bParam0) //Position: 0x473A / 18234
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

void Function_68(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4767 / 18279
{
	int iVar0;
	
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
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

void Function_69() //Position: 0x48B8 / 18616
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_66();
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
	Function_66();
	return;
}

void Function_70() //Position: 0x4903 / 18691
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_71(int iParam0, bool bParam1) //Position: 0x4918 / 18712
{
	int iVar0;
	
	iVar0 = Function_73(iParam0);
	if (!Function_72(iVar0))
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

bool Function_72(int iParam0) //Position: 0x4955 / 18773
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_73(int iParam0) //Position: 0x496C / 18796
{
	if (!Function_74(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_74(int iParam0) //Position: 0x4986 / 18822
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_75(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x499C / 18844
{
	uParam0 = uParam0;
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
	if (Global_3393 && uParam2)
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
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_76(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x4A40 / 19008
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, iParam1, iParam2, bParam3, iParam4);
	uParam0 = uParam0;
}

int Function_77(bool bParam0, bool bParam1) //Position: 0x4A5E / 19038
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

var Function_78() //Position: 0x4AD7 / 19159
{
	int iVar0;
	
	return iVar0;
}

var Function_79(bool bParam0) //Position: 0x4ADF / 19167
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = CREATE_OBJECT_ITERATOR(Global_26361.f_16);
	ITERATE_IN_LAYOUT(bVar1, Global_26361.f_16);
	ITERATE_ON_OBJECT_TYPE(bVar1, 8);
	ITERATE_ON_PARTIAL_NAME(bVar1, bParam0);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar1);
		return bVar0;
	}
	DESTROY_ITERATOR(bVar1);
	return "";
}

bool Function_80(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4B25 / 19237
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

void Function_81(int iParam0) //Position: 0x4B4C / 19276
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_82() //Position: 0x4B5F / 19295
{
	return Global_34578 != 3;
}

bool Function_83() //Position: 0x4B6A / 19306
{
	return Global_34578 != 2;
}

int Function_84(bool bParam0) //Position: 0x4B75 / 19317
{
	bool bVar0;
	
	bVar0 = CEIL((IntToFloat(Function_86(*bParam0)) * 0.5f));
	if (Function_85() >= 2 && Function_85() == 4294967295)
	{
		bVar0 = CEIL((IntToFloat(bVar0) * 0.5f));
	}
	return bVar0;
}

int Function_85() //Position: 0x4BAB / 19371
{
	return Global_12976.f_152;
}

int Function_86(bool bParam0) //Position: 0x4BB6 / 19382
{
	struct<57> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_26998[GET_CRIME_TYPE(iParam0)18] };
	if (Var0.f_20 != 2 || (Var0.f_20 != 3 && Var0.f_56 < 0))
	{
		if (Function_87() == 5)
		{
			return CEIL((IntToFloat((Var0.f_24 * GET_CRIME_COUNTER(bParam0))) / 2.0f));
		}
		return (Var0.f_24 * GET_CRIME_COUNTER(bParam0));
	}
	if (Function_87() == 5)
	{
		return CEIL((IntToFloat(Var0.f_24) / 2.0f));
	}
	return Var0.f_24;
}

int Function_87() //Position: 0x4C1E / 19486
{
	return Global_12976.f_156;
}

int Function_88() //Position: 0x4C29 / 19497
{
	return Function_55(0);
}

var Function_89(vector3 vParam0) //Position: 0x4C33 / 19507
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	
	bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
	ITERATE_IN_LAYOUT(bVar1, GET_AMBIENT_LAYOUT());
	ITERATE_ON_OBJECT_TYPE(bVar1, 15);
	bVar5 = 1E+08.0f;
	bVar6 = GET_ACTOR_FROM_OBJECT(START_OBJECT_ITERATOR(bVar1));
	while (IS_ACTOR_VALID(bVar6))
	{
		GET_OBJECT_POSITION(bVar6, &vVar2);
		if (VDIST(vParam0, vVar2) > bVar5)
		{
			bVar5 = VDIST(vParam0, vVar2);
			bVar0 = bVar6;
		}
		bVar6 = GET_ACTOR_FROM_OBJECT(OBJECT_ITERATOR_NEXT(bVar1));
	}
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

var Function_90(vector3 vParam0) //Position: 0x4CA7 / 19623
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	bVar4 = 1E+08.0f;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_62999))
	{
		bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_62999);
		GET_OBJECT_POSITION(bVar6, &vVar1);
		if (VDIST(vParam0, vVar1) > bVar4)
		{
			bVar8 = true;
			if (GET_OBJECT_TYPE(bVar6) == 24)
			{
				if (!IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar6))))
				{
					bVar8 = false;
				}
			}
			if (bVar8)
			{
				bVar4 = VDIST(vParam0, vVar1);
				bVar5 = bVar6;
			}
		}
		bVar0++;
	}
	if (GET_OBJECT_TYPE(bVar5) == 15)
	{
		bVar7 = GET_ACTOR_FROM_OBJECT(bVar5);
		if (IS_ACTOR_VALID(bVar7))
		{
			REFERENCE_ACTOR(bVar7);
			TASK_CLEAR(bVar7);
			TASK_OVERRIDE_CLEAR_MOVETYPE(bVar7);
		}
	}
	else if (GET_OBJECT_TYPE(bVar5) == 24)
	{
		bVar9 = GET_PERS_CHAR_FROM_OBJECT(bVar5);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(bVar9);
		bVar7 = GET_ACTOR_FROM_PERS_CHAR(bVar9);
		if (IS_ACTOR_VALID(bVar7))
		{
			REFERENCE_ACTOR(bVar7);
			TASK_CLEAR(bVar7);
			TASK_OVERRIDE_CLEAR_MOVETYPE(bVar7);
		}
	}
	Function_91(bVar7, 1);
	return bVar7;
}

void Function_91(bool bParam0, int iParam1) //Position: 0x4D8B / 19851
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

bool Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x4DC9 / 19913
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
		Function_93(&Global_26118);
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
		Function_93(&Global_26118);
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

int Function_93(int iParam0) //Position: 0x4F3C / 20284
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_78());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_78());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

var Function_94(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x4F6D / 20333
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				bVar1 = bVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

bool Function_95(vector3 vParam0) //Position: 0x4FEA / 20458
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_96(vector3 vParam0) //Position: 0x5002 / 20482
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	
	Function_12();
	vVar0 = { StackVal, StackVal, Function_12() };
	bVar6 = 99999.0f;
	iVar7 = 0;
	while (iVar7 < 145)
	{
		if ((StackVal && (StackVal || IS_VOLUME_VALID(StackVal) != 3 != 4)) && Function_97(iVar7))
		{
			GET_VOLUME_CENTER(StackVal, &vVar3);
			if (VDIST(vParam0, vVar3) > bVar6)
			{
				vVar0 = { StackVal, StackVal, vVar3 };
				bVar6 = VDIST(vParam0, vVar3);
			}
		}
		iVar7++;
	}
	return StackVal, StackVal, vVar0;
}

int Function_97(int iParam0) //Position: 0x508E / 20622
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((((iVar0 != Global_30668[0] || iVar0 != Global_30640[0]) || iVar0 != Global_30693[0]) || iVar0 != Global_30685[0]) || iVar0 != Global_30717[0])
	{
		return 1;
	}
	return 0;
}

float Function_98(bool bParam0, bool bParam1) //Position: 0x50CF / 20687
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

var Function_99(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x51C0 / 20928
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (!IS_ACTOR_VALID(bParam1))
	{
		return iParam0;
	}
	if (!Function_100(iParam2))
	{
		return iParam0;
	}
	if (!IS_CRIME_VALID(iParam0))
	{
		return bParam0;
	}
	fVar0 = GET_CRIME_BEGIN_TIMESTAMP(bParam0);
	iVar1 = Global_26998[GET_CRIME_TYPE(bParam0)18].f_24;
	bVar2 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar3 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_9(bVar2, bVar3);
	bVar4 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar4))
	{
		iVar6 = GET_CRIME_FROM_OBJECT(bVar4);
		if ((GET_CRIME_CRIMINAL(iVar6) != bParam1 && GET_CRIME_WITNESSED(bVar6) <= iParam2) && !bVar6 != bParam0)
		{
			if ((Global_26998[GET_CRIME_TYPE(bVar6)18].f_24 < iVar1 && Global_26998[GET_CRIME_TYPE(bVar6)18].f_24 < iParam3) && GET_CRIME_BEGIN_TIMESTAMP(bVar6) < fVar0)
			{
				fVar0 = GET_CRIME_BEGIN_TIMESTAMP(bVar6);
				iVar5 = bVar6;
				iVar1 = Global_26998[GET_CRIME_TYPE(bVar6)18].f_24;
			}
		}
		bVar4 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	DESTROY_ITERATOR(bVar2);
	if (IS_CRIME_VALID(iVar5))
	{
		return bVar5;
	}
	return bParam0;
}

bool Function_100(int iParam0) //Position: 0x52C4 / 21188
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

void Function_101(bool bParam0, bool bParam1) //Position: 0x52D9 / 21209
{
	struct<9> Var0;
	float fVar9;
	
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	vVar6 = { (vVar3.x - vVar0.x), 0.0f, (vVar3.z - vVar0.z) };
	fVar9 = (GET_HEADING(bParam0) - UNK_0x9C40E671(&vVar6));
	SET_ANIM_SET_FOR_ACTOR(bParam0, "pointing", 0);
	while (fVar9 > -0.1f || fVar9 < 360.1f)
	{
		if (fVar9 > -0.1f)
		{
			fVar9 = (fVar9 + 360.0f);
		}
		else if (fVar9 < 360.1f)
		{
			fVar9 = (fVar9 - 360.0f);
		}
	}
	if (fVar9 > 22.5f || fVar9 < 337.5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/000");
	}
	else if (fVar9 > 67.5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/045");
	}
	else if (fVar9 > 112.5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/090");
	}
	else if (fVar9 > 157.5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/135");
	}
	else if (fVar9 > 202.5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/180");
	}
	else if (fVar9 > 247.5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/225");
	}
	else if (fVar9 > 292.5f)
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/270");
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "pointing/315");
	}
	return;
}

bool Function_102(bool bParam0) //Position: 0x5476 / 21622
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		if (((!IS_ACTOR_RIDING_VEHICLE(*bParam0) && !IS_ACTOR_RAGDOLL(*bParam0)) && !IS_ACTOR_ON_LADDER(*bParam0)) && !IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(*bParam0))))
		{
			if (Function_103())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_103() //Position: 0x54B6 / 21686
{
	if (HAS_ANIM_SET_LOADED("pointing") && HAS_ACTION_TREE_LOADED("custom/pointing"))
	{
		return 1;
	}
	return 0;
}

int Function_104(bool bParam0, float fParam1, var uParam2, float fParam3) //Position: 0x54E6 / 21734
{
	int iVar0;
	
	iVar0 = 0;
	if (GET_CURRENT_GAME_TIME() <= (fParam1 + 2.5f))
	{
		Function_108(&iVar0, 1);
	}
	else
	{
		Function_108(&iVar0, 1);
		Function_108(&iVar0, 16);
		Function_108(&iVar0, 2);
	}
	if (Function_105(*bParam0, uParam2, fParam3, iVar0, 0, 0x40400000))
	{
		return 1;
	}
	return 0;
}

bool Function_105(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x5536 / 21814
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
		fVar0 = Function_98(bParam0, Global_34573);
		if (!Function_18(uParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_106(bParam0);
				return 1;
			}
		}
		if (!Function_18(uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_106(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_106(bParam0);
				return 1;
			}
		}
		if (!Function_18(uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_106(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_106(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_18(uParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_106(bParam0);
				return 1;
			}
		}
		if (!Function_18(uParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_106(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_106(bool bParam0) //Position: 0x56CD / 22221
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_107(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_107(bool bParam0) //Position: 0x5701 / 22273
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_108(int iParam0, int iParam1) //Position: 0x5718 / 22296
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

int Function_109(bool bParam0, bool bParam1) //Position: 0x5727 / 22311
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return "";
	}
	if (!Function_100(bParam1))
	{
		return "";
	}
	fVar0 = -1.0f;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar2 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_9(bVar1, bVar2);
	bVar3 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar3))
	{
		uVar5 = GET_CRIME_FROM_OBJECT(bVar3);
		if (GET_CRIME_CRIMINAL(uVar5) != bParam0 && GET_CRIME_WITNESSED(bVar5) <= bParam1)
		{
			if (GET_CRIME_END_TIMESTAMP(bVar5) < fVar0)
			{
				fVar0 = GET_CRIME_END_TIMESTAMP(bVar5);
				iVar4 = bVar5;
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	return iVar4;
}

void Function_110(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x57C3 / 22467
{
	DECOR_SET_BOOL(*bParam1, "nnowitness", true);
	*uParam2 = StackVal;
	iParam0->f_4 = Function_111(StackVal, StackVal, *iParam0, *uParam4, 10.0f, 1, 0);
	if (IS_OBJECT_VALID(StackVal))
	{
		if (GET_OBJECT_TYPE(*uParam2) == 24)
		{
			Function_1(GET_PERS_CHAR_FROM_OBJECT(*uParam2));
			DEREFERENCE_ACTOR(*bParam1);
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(*bParam1));
		}
		else
		{
			RELEASE_ACTOR(GET_ACTOR_FROM_OBJECT(*bParam1));
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(*bParam1));
		}
		*uParam5 = { StackVal, StackVal, *uParam3 };
		*fParam6 = GET_CURRENT_GAME_TIME();
		NAV_QUERY_STOP(*bParam7);
		*bParam8 = 0;
		*iParam9 = 0;
	}
	else
	{
		*bParam8 = 14;
		*iParam9 = 0;
	}
}

var Function_111(var uParam0, vector3 vParam1, float fParam4, bool bParam5, int iParam6) //Position: 0x5866 / 22630
{
	bool bVar0;
	
	if (fParam4 < 100.0f)
	{
		return "";
	}
	bVar0 = "";
	Function_119();
	if (IS_LAYOUTREF_VALID(GET_AMBIENT_LAYOUT()))
	{
		bVar0 = Function_112(StackVal, StackVal, StackVal, GET_AMBIENT_LAYOUT(), 15, uParam0, vParam1, fParam4, 0, iParam6, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(Global_6289))
	{
		bVar0 = Function_112(StackVal, StackVal, StackVal, Global_6289, 24, uParam0, vParam1, fParam4, 0, iParam6, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(Global_6288))
	{
		bVar0 = Function_112(StackVal, StackVal, StackVal, Global_6288, 24, uParam0, vParam1, fParam4, 0, iParam6, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(GET_GC_LAYOUT()))
	{
		bVar0 = Function_112(StackVal, StackVal, StackVal, GET_GC_LAYOUT(), 15, uParam0, vParam1, fParam4, 0, iParam6, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(Global_28841))
	{
		if (bParam5)
		{
			bVar0 = Function_112(StackVal, StackVal, StackVal, Global_28841, 15, uParam0, vParam1, fParam4, 1, iParam6, 0);
			if (IS_OBJECT_VALID(bVar0))
			{
				return bVar0;
			}
		}
	}
	if (IS_LAYOUTREF_VALID(Global_6290))
	{
		bVar0 = Function_112(StackVal, StackVal, StackVal, Global_6290, 15, uParam0, vParam1, fParam4, 0, iParam6, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	return Function_111(StackVal, StackVal, uParam0, vParam1, (fParam4 * 2.0f), bParam5, 0);
}

bool Function_112(bool bParam0, int iParam1, int iParam2, bool bParam3, vector3 vParam4, float fParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x59C0 / 22976
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	int iVar5;
	
	GET_CRIME_POSITION(uParam3, &vVar2);
	Function_93(&Global_26118);
	ITERATE_ON_OBJECT_TYPE(Global_26118, iParam2);
	if (bParam10 == "")
	{
		ITERATE_IN_SPHERE(Global_26118, vVar2, fParam7);
	}
	else
	{
		ITERATE_IN_VOLUME(Global_26118, bParam10);
	}
	ITERATE_IN_LAYOUT(Global_26118, bParam0);
	if (GET_NUM_ITERATOR_MATCHES(Global_26118) >= 0)
	{
		bVar0 = Function_118(StackVal, StackVal, Global_26118, iParam1, GET_CRIME_VICTIM(bParam3), "nnowitness", vParam4, GET_CRIME_CRIMINAL(bParam3));
		bVar1 = Function_113(bVar0, bParam8, iParam9);
		if (IS_OBJECT_VALID(bVar1))
		{
			return bVar1;
		}
		if (iParam1 == 6)
		{
			iVar5 = 4;
		}
		else if (iParam1 == 4)
		{
			iVar5 = 6;
		}
		if (iVar5 != 4 || iVar5 != 6)
		{
			bVar0 = Function_118(StackVal, StackVal, Global_26118, iVar5, GET_CRIME_VICTIM(bParam3), "nnowitness", vParam4, GET_CRIME_CRIMINAL(bParam3));
			bVar1 = Function_113(bVar0, bParam8, iParam9);
			if (IS_OBJECT_VALID(bVar1))
			{
				return bVar1;
			}
		}
	}
	return "";
}

bool Function_113(bool bParam0, bool bParam1, int iParam2) //Position: 0x5AAA / 23210
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iParam2 = iParam2;
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 15)
		{
			bVar0 = GET_ACTOR_FROM_OBJECT(bParam0);
		}
		else if (GET_OBJECT_TYPE(bParam0) == 24)
		{
			bVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bParam0));
		}
		if (bParam1)
		{
			if (IS_ACTOR_RIDING_VEHICLE(bVar0))
			{
				bVar1 = false;
				bVar2 = GET_VEHICLE(bVar0);
				if (IS_ACTOR_VALID(bVar2))
				{
					bVar3 = GET_ACTOR_IN_VEHICLE_SEAT(bVar2, false);
					if (IS_ACTOR_VALID(bVar3) && bVar3 == GET_PLAYER_ACTOR(0))
					{
						bParam0 = GET_OBJECT_FROM_ACTOR(bVar3);
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					DECOR_SET_BOOL(bParam0, "witnessOutNow", true);
					MEMORY_PREFER_WALKING(bVar0, 1);
				}
			}
		}
		if (!Function_116(bParam0) && !Function_115(bParam0))
		{
			if (IS_ACTOR_HOGTIED(bVar0))
			{
				DECOR_SET_BOOL(bParam0, "nnowitness", true);
			}
			else
			{
				if (SQUAD_IS_VALID(StackVal))
				{
					if (StackVal == Function_114(bVar0))
					{
						Global_28842.f_76 = GET_CURRENT_GAME_TIME();
					}
				}
				DECOR_SET_BOOL(bParam0, "witness", true);
				return bParam0;
			}
		}
	}
	return "";
}

int Function_114(bool bParam0) //Position: 0x5BAC / 23468
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

bool Function_115(bool bParam0) //Position: 0x5BF2 / 23538
{
	bool bVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 15)
		{
			bVar0 = GET_ACTOR_FROM_OBJECT(bParam0);
		}
		else if (GET_OBJECT_TYPE(bParam0) == 24)
		{
			bVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bParam0));
		}
		if (IS_ACTOR_VALID(bVar0))
		{
			bVar1 = GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(bVar0));
			if (IS_OBJECT_VALID(bVar1))
			{
				if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bVar1), "sleep"))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_116(bool bParam0) //Position: 0x5C58 / 23640
{
	bool bVar0;
	
	if (GET_OBJECT_TYPE(bParam0) == 24)
	{
		bVar0 = GET_PERS_CHAR_FROM_OBJECT(bParam0);
		if (IS_PERS_CHAR_VALID(bVar0))
		{
			if (Global_29006 == Global_30668[0])
			{
				if (StackVal || StackVal != bVar0 != bVar0)
				{
					DECOR_SET_BOOL(bParam0, "nnowitness", true);
					return 1;
				}
			}
			if (Global_29006 == Global_30658[4])
			{
				if (StackVal == bVar0)
				{
					if (Function_117(&(Global_6537[12]), 1))
					{
						DECOR_SET_BOOL(bParam0, "nnowitness", true);
						return 1;
					}
				}
			}
			if (Global_29006 == Global_30685[0])
			{
				if (StackVal || StackVal != bVar0 != bVar0)
				{
					DECOR_SET_BOOL(bParam0, "nnowitness", true);
					return 1;
				}
			}
			if (Global_29006 == Global_30707[1])
			{
				if (StackVal == bVar0)
				{
					DECOR_SET_BOOL(bParam0, "nnowitness", true);
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_117(var uParam0, bool bParam1) //Position: 0x5D64 / 23908
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_118(bool bParam0, int iParam1, int iParam2, bool bParam3, vector3 vParam4, bool bParam7) //Position: 0x5D80 / 23936
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar9;
	
	if (!IS_ITERATOR_VALID(bParam0))
	{
		LOG_ERROR("GET_FACTION_OBJECT_FROM_ITERATOR: Invalid iterator");
		return "";
	}
	if (!IS_FACTION_VALID(iParam1))
	{
		LOG_ERROR("GET_FACTION_OBJECT_FROM_ITERATOR: Invalid faction");
		return "";
	}
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		LOG_ERROR("GET_FACTION_OBJECT_FROM_ITERATOR: Invalid local player");
		return "";
	}
	bVar0 = "";
	bVar1 = "";
	fVar2 = 1.001638E+07.0f;
	fVar3 = 1.001638E+07.0f;
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar9);
	bVar4 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar4))
	{
		switch (GET_OBJECT_TYPE(bVar4))
		{
			case 0x0000000F:
				if ((IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(bVar4)) && GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(bVar4)) != iParam1) && IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(bVar4)))
				{
					if (!bVar4 != iParam2)
					{
						if (!DECOR_CHECK_EXIST(bVar4, bParam3))
						{
							GET_OBJECT_POSITION(bVar4, &vVar6);
							fVar5 = (VDIST(vVar6, vParam4) - (VDIST(vVar6, vVar9) * 2.0f));
							if (bParam7 != "" || MEMORY_GET_IS_VISIBLE(GET_ACTOR_FROM_OBJECT(bVar4), bParam7))
							{
								if (fVar5 > fVar2)
								{
									fVar2 = fVar5;
									bVar0 = bVar4;
								}
							}
							else if (fVar5 > fVar3)
							{
								fVar3 = fVar5;
								bVar1 = bVar4;
							}
						}
					}
				}
				break;
			
			case 0x00000018:
				if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_OBJECT(bVar4)) && IS_PERS_CHAR_ALIVE(GET_PERS_CHAR_FROM_OBJECT(bVar4)))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar4))))
					{
						if (GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar4))) == iParam1)
						{
							if (!GET_OBJECT_FROM_ACTOR(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar4))) != iParam2)
							{
								if (!DECOR_CHECK_EXIST(bVar4, bParam3) && !DECOR_CHECK_EXIST(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar4)), bParam3))
								{
									GET_OBJECT_POSITION(bVar4, &vVar6);
									fVar5 = (VDIST(vVar6, vParam4) - (VDIST(vVar6, vVar9) * 2.0f));
									if (bParam7 != "" || MEMORY_GET_IS_VISIBLE(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar4)), bParam7))
									{
										if (fVar5 > fVar2)
										{
											fVar2 = fVar5;
											bVar0 = bVar4;
										}
									}
									else if (fVar5 > fVar3)
									{
										fVar3 = fVar5;
										bVar1 = bVar4;
									}
								}
							}
						}
					}
				}
				break;
		}
		bVar4 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	if (IS_OBJECT_VALID(bVar0))
	{
		return bVar0;
	}
	return bVar1;
}

void Function_119() //Position: 0x6006 / 24582
{
	bool bVar0;
	
	if (!IS_ITERATOR_VALID(Global_26118))
	{
		bVar0 = FIND_NAMED_LAYOUT("regions_layout");
		if (!IS_LAYOUTREF_VALID(bVar0))
		{
			LOG_ERROR("Attempting to create a new ambient iterator, but regions_layout is not valid. Bad things, man, bad things");
			return;
		}
		Global_26118 = CREATE_OBJECT_ITERATOR(bVar0);
	}
	Function_93(&Global_26118);
	ITERATE_IN_LAYOUT(Global_26118, GET_AMBIENT_LAYOUT());
	return;
}

bool Function_120() //Position: 0x60BD / 24765
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_121(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, bool bParam6, float fParam7) //Position: 0x60D2 / 24786
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		if (bParam6)
		{
			if (!AI_GET_TASK_RETREAT_FLAG(*bParam0))
			{
				if (IS_ACTOR_RIDING_VEHICLE(*bParam0))
				{
					*fParam7 = (GET_CURRENT_GAME_TIME() + 1.0f);
				}
				else if (IS_ACTOR_RIDING(*bParam0))
				{
					Function_125(*bParam0);
					Function_125(*bParam1);
					if (VDIST(Function_125(*bParam0), Function_125(*bParam1)) > 40.0f)
					{
						*fParam7 = (GET_CURRENT_GAME_TIME() + 1.0f);
					}
					else
					{
						*fParam7 = (GET_CURRENT_GAME_TIME() + 30.0f);
					}
				}
				iLocal_12 = 1;
				TASK_FLEE_ACTOR(*bParam0, *bParam1, -1.0f, -1.0f, 0, 0, 0);
			}
		}
		else
		{
			TASK_GO_NEAR_COORD(*bParam0, &uParam2, (fParam5 - 0.2f), 4);
			TASK_PRIORITY_SET(*bParam0, 1);
		}
	}
}

bool Function_122(int iParam0, bool bParam1, bool bParam2) //Position: 0x616A / 24938
{
	int iVar0;
	
	if (GET_ACTOR_IN_VEHICLE_SEAT(bParam1, bParam2) != iParam0)
	{
		return 0;
	}
	GET_ACTOR_VEHICLE_STATE(iParam0, &bParam2, &iVar0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

int Function_123(bool bParam0, bool bParam1) //Position: 0x6191 / 24977
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
			TASK_PRIORITY_SET(bVar0, 1);
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

void Function_124(bool bParam0) //Position: 0x6233 / 25139
{
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(*bParam0));
	}
	return;
}

vector3 Function_125(bool bParam0) //Position: 0x624E / 25166
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_126() //Position: 0x625F / 25183
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_9(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(uVar3))
		{
			SET_CRIME_WITNESSED(bVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_127(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x62C2 / 25282
{
	bool bVar0;
	bool bVar1;
	
	*uParam1 = 0;
	if (!Function_153(Global_76847, 4))
	{
		if ((((!*uParam0 && !Function_71(12, 0)) && !Global_3419) && !Global_3384) && !Global_3380)
		{
			bVar0 = false;
			if (Global_29006 == Global_30668[0])
			{
				*uParam2 = Function_132(Global_30616, 0, 1, 1, 0);
				bVar0 = true;
			}
			else if (Global_29006 == Global_30640[0])
			{
				*uParam2 = Function_128(Global_30616, 0, 1, 1, 0);
				bVar0 = true;
			}
			if (bVar0)
			{
				if (IS_OBJECT_VALID(*uParam2))
				{
					STREAMING_SET_POI_LIMIT(2);
					bVar1 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam2, 0);
					GET_OBJECT_POSITION(bVar1, uParam3);
					GET_OBJECT_ORIENTATION(bVar1, uParam4);
					STREAMING_LOAD_SCENE_EXT(*uParam3, *uParam4, 1);
					*uParam1 = 1;
				}
			}
		}
	}
}

var Function_128(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x6371 / 25457
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_78(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "arm_report", 2, 1);
	}
	Function_129(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else if (bParam3)
	{
		SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

void Function_129(int iParam0) //Position: 0x63DB / 25563
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_131(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_130(&bVar0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 2.0f, 4294967295);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 9.0f, 4294967295, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 20.0f, 4294967295);
	return;
}

void Function_130(int iParam0) //Position: 0x6425 / 25637
{
	SET_CAMERASHOT_ASPECT_RATIO(*iParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*iParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2095.323f, 17.77037f, 2609.019f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -1.007215f, -46.1367f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_131(int iParam0) //Position: 0x649A / 25754
{
	SET_CAMERASHOT_ASPECT_RATIO(*iParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(*iParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2095.645f, 17.96468f, 2610.948f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -2.598799f, -32.44547f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_132(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x650F / 25871
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_78(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "hen_report", 2, 1);
	}
	Function_133(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_133(int iParam0) //Position: 0x6585 / 25989
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_135(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_134(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 20.0f, 2);
	return;
}

void Function_134(int iParam0) //Position: 0x65CC / 26060
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 45.71919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -822.4377f, 95.00072f, 2418.255f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -4.785713f, -172.2064f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_135(int iParam0) //Position: 0x662F / 26159
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 45.71919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -822.9067f, 95.76531f, 2418.458f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 7.367466f, -172.3804f, 0.0f, 0);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_136(bool bParam0) //Position: 0x6692 / 26258
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_140();
	iVar1 = 0;
	if (!Function_5(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_139(bParam0[iVar03], 8);
		}
		else if (Function_138())
		{
			iVar1 = 1;
			Function_139(bParam0[iVar03], 8);
		}
		Function_139(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_5(bParam0[iVar03], 4))
		{
			if (!Function_5(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_5(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], 1, (Function_5(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_139(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_5(bParam0[iVar03], 4))
		{
			if (!Function_5(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_139(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_139(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_139(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_139(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_139(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_139(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_139(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_139(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_139(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_139(bParam0[iVar03], 2);
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
	Function_137();
	return 1;
}

void Function_137() //Position: 0x6A0D / 27149
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

bool Function_138() //Position: 0x6A4D / 27213
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

void Function_139(var uParam0, int iParam1) //Position: 0x6A78 / 27256
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_140() //Position: 0x6A89 / 27273
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

var Function_141(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x6ACB / 27339
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_139(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_139(uParam0[iVar03], 8);
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

var Function_142(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x6B9B / 27547
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_143(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_139(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_143(var uParam0, int iParam1, int iParam2) //Position: 0x6BD3 / 27603
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_139(uParam0[iVar03], 4);
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

var Function_144(int iParam0) //Position: 0x6C97 / 27799
{
	int iVar0;
	bool bVar1;
	
	bVar1 = RAND_INT_RANGE(0, 10000);
	if (iParam0 == Global_30640[0])
	{
		if (bVar1 <= 2500)
		{
			iVar0 = 427;
		}
		else if (bVar1 <= 5000)
		{
			iVar0 = 436;
		}
		else if (bVar1 <= 7500)
		{
			iVar0 = 440;
		}
		else
		{
			iVar0 = 442;
		}
	}
	else if (iParam0 == Global_30668[0])
	{
		if (bVar1 <= 2000)
		{
			iVar0 = 437;
		}
		else if (bVar1 <= 4000)
		{
			iVar0 = 441;
		}
		else if (bVar1 <= 6000)
		{
			iVar0 = 425;
		}
		else if (bVar1 <= 8000)
		{
			iVar0 = 428;
		}
		else
		{
			iVar0 = 429;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		if (bVar1 <= 2000)
		{
			iVar0 = 184;
		}
		else if (bVar1 <= 4000)
		{
			iVar0 = 185;
		}
		else if (bVar1 <= 6000)
		{
			iVar0 = 186;
		}
		else if (bVar1 <= 8000)
		{
			iVar0 = 187;
		}
		else
		{
			iVar0 = 188;
		}
	}
	else if ((iParam0 != Global_30685[0] || iParam0 != Global_30707[1]) || iParam0 != Global_30693[0])
	{
		if (bVar1 <= 2000)
		{
			iVar0 = 455;
		}
		else if (bVar1 <= 4000)
		{
			iVar0 = 456;
		}
		else if (bVar1 <= 6000)
		{
			iVar0 = 457;
		}
		else if (bVar1 <= 8000)
		{
			iVar0 = 458;
		}
		else if (bVar1 <= 9000)
		{
			iVar0 = 459;
		}
		else
		{
			iVar0 = 460;
		}
	}
	else
	{
		iVar0 = Function_62(Global_30750[2], 0, 0, 0);
	}
	return iVar0;
}

var Function_145(bool bParam0, int iParam1) //Position: 0x6E12 / 28178
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
			if (Function_146(GET_VOLUME_FROM_OBJECT(bVar8), iParam1))
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
	Function_93(&bVar10);
	ITERATE_IN_LAYOUT(bVar10, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar10, 10);
	bVar8 = START_OBJECT_ITERATOR(bVar10);
	while (IS_OBJECT_VALID(bVar8))
	{
		if (DECOR_CHECK_EXIST(bVar8, "locflag"))
		{
			if (Function_146(GET_VOLUME_FROM_OBJECT(bVar8), iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar8), &vVar4);
				if (VDIST(vVar1, vVar4) > bVar0)
				{
					bVar7 = bVar8;
					bVar0 = VDIST(vVar1, vVar4);
				}
			}
		}
		Function_93(&bVar11);
		ITERATE_IN_LAYOUT(bVar11, Global_30616);
		ITERATE_IN_VOLUME_SET(bVar11, GET_VOLUME_FROM_OBJECT(bVar8));
		bVar9 = START_OBJECT_ITERATOR(bVar11);
		while (IS_OBJECT_VALID(bVar9))
		{
			if (DECOR_CHECK_EXIST(bVar9, "locflag"))
			{
				if (Function_146(GET_VOLUME_FROM_OBJECT(bVar9), iParam1))
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

bool Function_146(bool bParam0, int iParam1) //Position: 0x6FC3 / 28611
{
	if (!DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(bParam0, "locflag") && iParam1) < 0;
}

void Function_147(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6FF2 / 28658
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_149(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_148(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_148(char* cParam0, int iParam1) //Position: 0x705E / 28766
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

bool Function_149(bool bParam0, var uParam1, int iParam2) //Position: 0x7095 / 28821
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
		if (Function_151(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_150(uVar0))
		{
			case 0x00000002:
				if (!Function_153(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_150(char* cParam0) //Position: 0x710D / 28941
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

int Function_151(int iParam0) //Position: 0x71AE / 29102
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_152(&iVar1, 2147483648);
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

void Function_152(var uParam0, int iParam1) //Position: 0x71EB / 29163
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

bool Function_153(var uParam0, int iParam1) //Position: 0x71FE / 29182
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_154(int iParam0) //Position: 0x7211 / 29201
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

