//Decompiled with MagicRDR v1.0
//Function Count : 303
//Statics Count : 101
//Natives Count : 434
//Parameters Count : 51

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
	float fLocal_21 = 0.0f;
	var uLocal_22 = 0;
	bool bLocal_23 = false;
	var uLocal_24[3] = { 0, 0, 0 };
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	bool bLocal_38 = false;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = false;
	bool bLocal_43 = false;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = false;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	struct<109> Var11;
	int iVar157[5];
	var uVar163[5];
	bool bVar169;
	int iVar170;
	bool bVar171;
	bool bVar172;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	fLocal_21 = 0.0f;
	iLocal_28 = 0;
	bLocal_35 = false;
	bLocal_36 = false;
	bLocal_37 = false;
	bLocal_38 = false;
	iLocal_39 = 0;
	iLocal_40 = 3;
	bLocal_42 = RAND_INT_RANGE(false, 4);
	iLocal_45 = 0;
	iLocal_46 = 0;
	bLocal_49 = false;
	bLocal_36 = false;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	bVar5 = 500;
	iVar6 = 0;
	iVar7 = 0;
	vVar89 = { 0.0f, 0.0f, 0.0f };
	bVar105 = false;
	iVar106 = 0;
	iVar107 = 0;
	iVar108 = 0;
	bVar109 = false;
	bVar110 = false;
	bVar111 = 15;
	bVar169 = CREATE_LAYOUT(Function_302());
	if (!IS_LAYOUTREF_VALID(bVar169))
	{
		iVar0 = 5;
	}
	if (!Function_301(64) || !IS_POPSET_VALID(Global_30750[0]))
	{
		iVar0 = 5;
	}
	else
	{
		if (Global_29006 == Global_30668[1])
		{
			iVar73 = 2;
			iLocal_40 = 1;
		}
		else if (Global_29006 == Global_30640[1])
		{
			iVar73 = 3;
			iLocal_40 = 2;
		}
		else if (Global_29006 == Global_30640[0])
		{
			iVar73 = 4;
			iLocal_40 = 2;
		}
		else
		{
			iVar73 = 5;
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		Var11.f_108 = 1;
		Function_299(&bVar111, "shooting_air_horse", 5, 0);
		Function_299(&bVar111, "custom/shooting_air_horse", 8, 0);
		Function_299(&bVar111, "thanks", 5, 0);
		Function_299(&bVar111, "custom/thanks", 8, 0);
		if (Global_29004 == 1)
		{
			if (Function_298(33, 2) == 0)
			{
				iVar157[0] = 496;
			}
			else
			{
				iVar157[0] = 497;
			}
			bLocal_43 = 496;
			iLocal_44 = 504;
		}
		else if (Global_29004 == 2)
		{
			if (Function_298(33, 2) == 0)
			{
				iVar157[0] = 476;
			}
			else
			{
				iVar157[0] = 470;
			}
			bLocal_43 = 467;
			iLocal_44 = 476;
		}
		else if (Global_29005 == Global_30628[0])
		{
			if (Global_29006 != Global_30640[0] || Global_29006 != Global_30640[1])
			{
				if (Function_298(33, 2) == 0)
				{
					iVar157[0] = 490;
				}
				else
				{
					iVar157[0] = 487;
				}
				bLocal_43 = 486;
				iLocal_44 = 493;
			}
			else
			{
				if (Function_298(33, 2) == 0)
				{
					iVar157[0] = 483;
				}
				else
				{
					iVar157[0] = 485;
				}
				bLocal_43 = 477;
				iLocal_44 = 485;
			}
		}
		else if (Global_29005 == Global_30628[1])
		{
			if (Function_298(33, 2) == 0)
			{
				iVar157[0] = 514;
			}
			else
			{
				iVar157[0] = 509;
			}
			bLocal_43 = 505;
			iLocal_44 = 515;
		}
		else if (Global_29005 == Global_30628[2])
		{
			if (Function_298(33, 2) == 0)
			{
				iVar157[0] = 483;
			}
			else
			{
				iVar157[0] = 485;
			}
			bLocal_43 = 477;
			iLocal_44 = 485;
		}
		else if (Global_29005 == Global_30628[3])
		{
			if (Function_298(33, 2) == 0)
			{
				iVar157[0] = 490;
			}
			else
			{
				iVar157[0] = 487;
			}
			bLocal_43 = 486;
			iLocal_44 = 493;
		}
		iLocal_41 = iVar157[0];
		Function_297(&bVar111, iLocal_41, 2, 0);
		bVar72 = false;
		while (bVar72 <= (iVar73 - 1))
		{
			iVar157[bVar72 + 1] = Function_296(bLocal_43, iLocal_44, iLocal_41, iVar157[1], iVar157[2]);
			Function_297(&bVar111, iVar157[bVar72 + 1], 2, 0);
			bVar72++;
		}
		bVar72 = false;
		while (bVar72 <= iVar73)
		{
			uVar163[bVar72] = Function_295(64, 1, 4, 23, 1);
			if (uVar163[bVar72] == 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_297(&bVar111, uVar163[bVar72], 2, 0);
			}
			bVar72++;
		}
		if (iVar0 != 5)
		{
			bVar10 = Function_293(Global_30750[0], 1, 0, 1);
			if (bVar10 == 4294967295)
			{
				iVar0 = 5;
			}
			else
			{
				Function_297(&bVar111, bVar10, 2, 0);
			}
		}
		if (Function_292(0))
		{
			iVar0 = 5;
		}
		if (iVar0 != 5)
		{
			Function_291(&iVar157, 5);
		}
	}
	iVar170 = 0;
	bVar171 = false;
	while (!IS_EXITFLAG_SET())
	{
		bVar5 = 500;
		if (Function_290(&bVar171, &iVar0, &iVar170, &bVar5, bVar105))
		{
			if (bVar171)
			{
				Function_289(&bVar78, 4294967295);
				Function_288(&bVar9);
			}
			else
			{
				Function_287(&bVar78, 4294967295);
				Function_286(&bVar9);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_280(&bVar111))
				{
					iVar0 = 1;
					bVar5 = false;
				}
				break;
			
			case 0x00000001:
				if (!Global_3386)
				{
					(&ScriptParam_0 + 64 + 120)->f_4 = 1;
				}
				if (Function_244(&ScriptParam_0, &bVar5, &iVar1, &iVar2, 1))
				{
					iVar0 = 2;
				}
				else if (iVar2 == 1)
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000002:
				Var11.f_4 = 1;
				Function_243(StackVal, StackVal, &Var11, Global_34574);
				Function_240(StackVal, StackVal, StackVal, StackVal, &Var11, *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20), ScriptParam_0.f_48, 0, 0);
				Var11.f_72 = 4;
				Function_200(&Var11, 0, 0, 0);
				vVar59 = { StackVal, StackVal, *(&ScriptParam_0 + 8) };
				if (VDIST(Global_34574, vVar59) > 75.0f)
				{
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vVar59, 1.0f, 100.0f, 1, 1, 0))
				{
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				Function_199(1.5f, 10);
				*(&Var11 + 52) = { StackVal, Function_199(1.5f, 10) };
				if (!Function_198(&Var11 + 52))
				{
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				iVar104 = CREATE_POINT_IN_LAYOUT(bVar169, Function_302(), vVar59, *(&Var11 + 168));
				Function_180(StackVal, bVar169, iVar73, &iVar157, iVar104, &Var11 + 52, 23, "string", 0);
				iVar102 = SQUAD_GET_SIZE(StackVal);
				bVar72 = false;
				while (bVar72 <= iVar102)
				{
					bVar103 = SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar72);
					SET_ACTOR_CAN_PLAY_GESTURES(bVar103, false);
					bVar78[bVar72] = bVar103;
					if (bVar72 != 0)
					{
						MEMORY_SHOULD_ALWAYS_PATHFIND_IN_FORMATION(bVar103, 1);
					}
					MEMORY_PREFER_RIDING(bVar103, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar103, 1);
					Function_179(bVar103);
					SET_ACTOR_UPDATE_PRIORITY(bVar103, false);
					AI_DONT_HARM_ACTOR(bVar103);
					TASK_STAND_STILL(bVar103, -1.0f, 0, 0);
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar103);
					if (bVar72 == 0)
					{
						MEMORY_ALLOW_SHOOTING(bVar103, 0);
						bLocal_23 = CREATE_POINT_IN_LAYOUT(bVar169, Function_302(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
						ATTACH_OBJECTS(bLocal_23, bVar103, Function_302(), 0.0f, 0.5f, -7.0f, 0.0f, 0.0f, 0.0f, 4294967295);
					}
					else if (bVar72 == 1)
					{
						bVar74[0] = bVar103;
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar74[0], 0);
						GIVE_WEAPON_TO_ACTOR(bVar103, 40, 0, 1, 1);
						ACTOR_PUT_WEAPON_IN_HAND(bVar103, 40, 1);
						ACTOR_DRAW_WEAPON(bVar103, 40, 1);
					}
					else if (bVar72 == 2)
					{
						bVar74[1] = bVar103;
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar74[1], 0);
						GIVE_WEAPON_TO_ACTOR(bVar103, 40, 0, 1, 1);
						ACTOR_PUT_WEAPON_IN_HAND(bVar103, 40, 1);
						ACTOR_DRAW_WEAPON(bVar103, 40, 1);
					}
					else if (bVar72 == 4)
					{
						bVar74[2] = bVar103;
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar74[2], 0);
						GIVE_WEAPON_TO_ACTOR(bVar103, 40, 0, 1, 1);
						ACTOR_PUT_WEAPON_IN_HAND(bVar103, 40, 1);
						ACTOR_DRAW_WEAPON(bVar103, 40, 1);
					}
					bVar72++;
				}
				AI_GLOBAL_SET_PERMANENT_DANGER(Function_178(StackVal), 1);
				ATTACH_OBJECTS(StackVal, Function_178(GET_OBJECT_FROM_VOLUME(bVar88)), Function_302(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				vVar59.x = (vVar59.x + 2.0f);
				if (!bLocal_36)
				{
					bVar9 = CREATE_ACTOR_IN_LAYOUT(bVar169, Function_302(), bVar10, vVar59, 0.0f, 0.0f, 0.0f);
					SET_ACTOR_CAN_PLAY_GESTURES(bVar9, false);
					SET_ACTOR_CAN_BE_HARDLOCKED(bVar9, 0);
					SNAP_OBJECT_TO_GROUND(bVar9, 6.0f, false, 1092616192);
					DECOR_SET_FLOAT(bVar9, "LassoBreakoutTime", 20.0f);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bVar9, bLocal_23, 1.0f, 2);
					TASK_PRIORITY_SET(bVar9, 1);
					SET_ACTOR_MAX_HEALTH(bVar9, (2.0f * GET_ACTOR_MAX_HEALTH(bVar9)));
					SET_ACTOR_HEALTH(bVar9, (2.0f * GET_ACTOR_MAX_HEALTH(bVar9)));
					SET_ACTOR_UPDATE_PRIORITY(Function_178(StackVal), false);
					MEMORY_REPORT_POSITION_AUTO(Function_178(StackVal), bVar9, 1);
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar9);
				}
				DELETE_ALL_WEAPONS_FROM_ACTOR(Function_178(StackVal));
				GIVE_WEAPON_TO_ACTOR(Function_178(StackVal), 21, 0, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(Function_178(StackVal), 21, 1);
				DELETE_ALL_WEAPONS_FROM_ACTOR(bVar9);
				Function_177(&uLocal_29, 0.0f);
				Function_176(&uVar3, 1);
				Function_176(&uVar3, 16);
				bLocal_38 = true;
				iVar0 = 3;
				bVar5 = false;
				break;
			
			case 0x00000003:
				bLocal_37 = true;
				Function_174(4);
				Function_161(&bVar78, 5, &bVar105, ScriptParam_0.f_56, 100, 0x42a00000, 1);
				if (bVar105 && !bVar110)
				{
					Function_160(33);
					bVar110 = true;
				}
				if (bLocal_36)
				{
					if (!Function_159(StackVal, Global_34573, 60.0f, 1) && iVar7 > 4)
					{
						iVar7 = 4;
					}
				}
				if (!iLocal_39)
				{
					if (!Function_159(StackVal, Global_34573, 60.0f, 1))
					{
						iLocal_39 = 1;
					}
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
				bVar109 = false;
				bVar101 = false;
				while (bVar101 <= 5)
				{
					if (Function_157(bVar78[bVar101], 1))
					{
						bVar109 = true;
					}
					bVar101++;
				}
				if (!bVar109 && iVar7 > 6)
				{
					AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
					Function_156(&bVar78, 5, &iVar107, &iVar108, 0);
					if (iLocal_28)
					{
						if (Function_157(bVar9, 0))
						{
							Function_102(GET_ACTOR_ENUM_FACTION(bLocal_43));
							Function_97(50, 1, 0);
							Function_59(100, 1, 0);
							iVar7 = 6;
						}
						else
						{
							Function_102(GET_ACTOR_ENUM_FACTION(bLocal_43));
							Function_97(50, 1, 0);
							Function_59(50, 1, 0);
							iVar0 = 5;
							bVar5 = false;
							break;
						}
					}
				}
				if (!Function_52(StackVal, Function_178(ScriptParam_0.f_56), &iLocal_39, &iVar106, 1, 1, 1, 0) && iVar7 > 6)
				{
					iVar0 = 5;
					break;
				}
				if (!bLocal_49)
				{
					if (Function_159(StackVal, Global_34573, 60.0f, 1))
					{
						Function_49();
					}
				}
				if (!Function_159(StackVal, Global_34573, Function_47(1), 1) && iVar7 > 6)
				{
					bVar172 = Function_46(StackVal, Function_178(Global_34573));
					PRINTFLOAT(bVar172);
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				else if (iVar7 == 3)
				{
					iVar8 = Function_200(&Var11, 0, 0, 0);
				}
				if (iVar8 == 7)
				{
					Function_44(StackVal, bVar9);
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				if (Function_40(&bVar78, 5, &uVar4, &uLocal_22, &fLocal_21, uVar3, iVar6, 0x40200000))
				{
					iVar6 = 1;
				}
				if ((Function_39(StackVal, Global_34573) || iVar6) && iVar7 > 4)
				{
					iVar7 = 4;
				}
				if (Var11 == 0)
				{
					Function_38(StackVal, Global_34573, -1.0f, -1.0f, 0, 0);
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				if (Function_292(0) && !bVar105)
				{
					Function_38(StackVal, Global_34573, -1.0f, -1.0f, 0, 0);
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				bVar101 = false;
				while (bVar101 <= 3)
				{
					if (IS_ACTOR_VALID(Function_178(StackVal)) && IS_ACTOR_VALID(bVar74[bVar101]))
					{
						if (Function_46(Function_178(StackVal), bVar74[bVar101]) < 40.0f && iVar84[bVar101] != 1)
						{
							RESET_ANIM_SET_FOR_ACTOR(bVar74[bVar101], 1);
							AI_GOAL_SHOOT_CLEAR(bVar74[bVar101]);
							iVar84[bVar101] = 0;
						}
					}
					bVar101++;
				}
				if (Function_27(StackVal, &iVar7, bVar9, &bVar74, &iVar84, bVar169, &bVar5))
				{
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				if (bVar105)
				{
					if (!Function_159(StackVal, Global_34573, 110.0f, 1) && iVar7 > 4)
					{
						iVar0 = 5;
						bVar5 = false;
						break;
					}
				}
				if (Global_63096)
				{
					iVar0 = 5;
					bVar5 = false;
					break;
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				bVar5 = false;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar5 = false;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bVar5);
		}
	}
	if (bLocal_49)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	if (bLocal_37)
	{
		Function_25(4);
		Function_174(131072);
	}
	Function_287(&bVar78, 4294967295);
	Function_286(&bVar9);
	Function_24(&iVar157, 5);
	SET_ACTOR_CAN_BE_HARDLOCKED(bVar9, 1);
	bVar101 = false;
	while (bVar101 <= 3)
	{
		if (IS_ACTOR_VALID(bVar74[bVar101]))
		{
			RESET_ANIM_SET_FOR_ACTOR(bVar74[bVar101], 1);
			AI_GOAL_SHOOT_CLEAR(bVar74[bVar101]);
			iVar84[bVar101] = 0;
		}
		bVar101++;
	}
	iVar102 = SQUAD_GET_SIZE(StackVal);
	bVar101 = false;
	while (bVar101 < (iVar102 - 1))
	{
		bVar103 = SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar101);
		Function_22(bVar103);
		if (Function_157(bVar103, 0))
		{
			AI_CLEAR_DONT_HARM_ACTOR(bVar103);
			MEMORY_ALLOW_SHOOTING(bVar103, 1);
			if (!bLocal_35)
			{
				TASK_FLEE_ACTOR(bVar103, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			}
		}
		bVar101++;
	}
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (!bVar105)
	{
		Function_21(&bVar78, 4294967295);
		Function_20(&bVar9);
		if (IS_OBJECT_VALID(bVar169))
		{
			UNK_0xA936E73B(bVar169, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar169, 1);
		}
	}
	else if (IS_ACTOR_VALID(bVar9))
	{
		Function_11(bVar9, 4, 0, 2);
	}
	if (!bLocal_38)
	{
		Function_5(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	Function_1(&bVar111);
	RELEASE_LAYOUT_REF(bVar169);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xB97 / 2967
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

void Function_2(var uParam0, int iParam1) //Position: 0xBBD / 3005
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

void Function_3(var uParam0, int iParam1) //Position: 0xCEB / 3307
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0xD05 / 3333
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_5(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xD22 / 3362
{
	bool bVar0;
	bool bVar1;
	
	if (Global_30842[16])
	{
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
	}
	fParam1 = fParam1;
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_3399 = 0;
		Function_7("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_17483[iParam075].f_116 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_3367)
			{
				if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_3367 = 1;
			Global_6281 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(Global_17483[iParam075].f_260);
		if (Global_30842[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_6(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_6(bVar0);
		}
		if (!bParam3)
		{
			ADD_TIME(&bVar0, 0, false, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, false, 10, 0);
		}
		if (Global_30842[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_6(bVar0);
		}
		Global_17483[iParam075].f_264 = bVar0;
		Global_16876[iParam06] = bVar0;
		if (bParam2)
		{
			Global_16876[iParam06].f_4 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_17483[iParam075].f_116 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_3367)
				{
					if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_3367 = 1;
				Global_6281 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_6(bool bParam0) //Position: 0xF7F / 3967
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

void Function_7(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xFC5 / 4037
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_8(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_8(int iParam0) //Position: 0x103C / 4156
{
	char* cVar0[16];
	
	if (!Function_9())
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

bool Function_9() //Position: 0x107B / 4219
{
	if (Function_10(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_10(bool bParam0, int iParam1) //Position: 0x1096 / 4246
{
	return (bParam0 && iParam1) == 0;
}

int Function_11(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x10A3 / 4259
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
					Function_12(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_12(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_12(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x1183 / 4483
{
	char* cVar0[32];
	
	Function_19();
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
	if (Function_18(bParam0) == 1)
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
	Function_17(bParam0, 0);
	Function_16(bParam0, iParam1);
	Function_15(bParam0, uParam2);
	Function_14(bParam0, uParam3);
	if (Function_13(bParam0) != 5)
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

int Function_13(bool bParam0) //Position: 0x13D1 / 5073
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_14(bool bParam0, bool bParam1) //Position: 0x13F4 / 5108
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_15(bool bParam0, bool bParam1) //Position: 0x1417 / 5143
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_16(bool bParam0, bool bParam1) //Position: 0x143B / 5179
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_17(bool bParam0, bool bParam1) //Position: 0x1461 / 5217
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_18(bool bParam0) //Position: 0x1484 / 5252
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_19() //Position: 0x14A2 / 5282
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

void Function_20(bool bParam0) //Position: 0x14EC / 5356
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*bParam0, 0);
		TASK_FLEE_ACTOR(*bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*bParam0, 0);
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x1517 / 5399
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_20(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

int Function_22(bool bParam0) //Position: 0x1544 / 5444
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_23(bParam0);
		return 1;
	}
	return 0;
}

void Function_23(bool bParam0) //Position: 0x155A / 5466
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

void Function_24(var uParam0, int iParam1) //Position: 0x1586 / 5510
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION((*uParam0)[iVar0]);
		iVar0++;
	}
	return;
}

void Function_25(int iParam0) //Position: 0x15A8 / 5544
{
	Function_26(&Global_28842, iParam0);
	return;
}

void Function_26(var uParam0, int iParam1) //Position: 0x15B6 / 5558
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

bool Function_27(var uParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x15D1 / 5585
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	bool bVar6;
	
	bVar6 = true;
	switch (*uParam0)
	{
		case 0x00000000:
			if (bLocal_36)
			{
				*uParam0 = 3;
			}
			else if (IS_WEAPON_DRAWN(Function_178(bParam1)))
			{
				Function_177(&uLocal_29, 0.0f);
				*uParam0 = 2;
			}
			break;
		
		case 0x00000002:
			bVar6 = true;
			bVar4 = false;
			while (bVar4 <= iLocal_40)
			{
				if (!IS_WEAPON_DRAWN((*uParam3)[bVar4]) && IS_ACTOR_RIDING_AND_IN_SADDLE((*uParam3)[bVar4]))
				{
					bVar6 = false;
				}
				bVar4++;
			}
			if (bVar6)
			{
				if (IMMEDIATELY_LASSO_TARGET(Function_178(bParam1), bParam2, 1))
				{
					bLocal_37 = true;
					Function_25(131072);
					TASK_FLEE_ACTOR(bParam2, Global_34573, -1.0f, -1.0f, 0, 0, 0);
					*uParam0 = 3;
					bVar4 = false;
					while (bVar4 <= iLocal_40)
					{
						if (IS_ACTOR_VALID((*uParam3)[bVar4]))
						{
							(*uParam4)[bVar4] = 1;
							Function_37((*uParam3)[bVar4], &(uLocal_24[bVar4]), uParam5);
						}
						bVar4++;
					}
				}
				else if (Function_33(&uLocal_29, 5.0f))
				{
					bLocal_38 = false;
					*uParam0 = 1;
				}
			}
			else if (Function_33(&uLocal_29, 5.0f))
			{
				*uParam0 = 1;
			}
			break;
		
		case 0x00000001:
			Function_44(bParam1, bParam2);
			*uParam0 = 5;
			break;
		
		case 0x00000003:
			Function_32(bParam1, RAND_FLOAT_RANGE(8.0f, 11.0f));
			break;
		
		case 0x00000004:
			if (!bLocal_49)
			{
				Function_49();
			}
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
			iLocal_39 = 1;
			iLocal_28 = 1;
			Function_31(bParam1, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_30(Global_34573, bParam2, "RoamingGangPlayer_msg02", "RoamingGangPlayer_msg02", 5, 60, 1, 1);
			iVar5 = SQUAD_GET_SIZE(bParam1);
			bVar4 = false;
			while (bVar4 < (iVar5 - 1))
			{
				bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar4);
				if (Function_157(bVar0, 0))
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
					GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0, 1, 1);
					MEMORY_ALLOW_SHOOTING(bVar0, 1);
					AI_GOAL_SHOOT_CLEAR(bVar0);
					vVar1 = { 0.0f, 0.0f, -10.0f };
					TASK_FOLLOW_AND_ATTACK_OBJECT(bVar0, Global_34573, &vVar1, 0, 0, 0, 0, 0, 1);
				}
				bVar4++;
			}
			*uParam0 = 5;
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
			if (IS_ACTOR_VALID(bParam2))
			{
				if (IS_ACTOR_CRIPPLED(bParam2, 5))
				{
					SET_CRIPPLE_FLAG(bParam2, false);
				}
				if (Function_46(Global_34573, bParam2) > 45.0f)
				{
					if (Function_28(&bParam2, &Global_34573, &uLocal_47, &iLocal_45, &uLocal_32, uParam5, 25.0f, &iLocal_46, bLocal_23, uParam6, "thanks", "thanks", "", "", 30.0f, 2, -5.0f, 1, 4.0f, 1, "RoamingGangPlayer_msg01", 0, 1, 0, 0x40800000))
					{
						if (iLocal_46 == 1)
						{
							return 1;
						}
					}
					Function_11(bParam2, 4, 0, 2);
					return 1;
				}
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_28(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, var uParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, float fParam16, bool bParam17, var uParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, var uParam23, float fParam24) //Position: 0x18AF / 6319
{
	bool bVar0;
	
	*uParam9 = *uParam9;
	uParam18 = uParam18;
	bParam17 = bParam17;
	if (!IS_ACTOR_VALID(*uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(*uParam0) == Global_34573)
	{
		TASK_FLEE_ACTOR(*uParam0, Global_34573, 150.0f, -1.0f, 0, 0, 0);
		return 0;
	}
	switch (*uParam3)
	{
		case 0x00000000:
			if (bParam21)
			{
				*uParam3 = 3;
			}
			else
			{
				MEMORY_CLEAR_EVENTS(*uParam0, 0);
				ACTOR_START_FORCE_HOLSTER(*uParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(*uParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
				*uParam2 = Function_46(*uParam0, Global_34573);
				AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
				bParam8 = CREATE_POINT_IN_LAYOUT(bParam5, Function_302(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bParam8, *uParam1, Function_302(), 0.0f, 0.5f, fParam16, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0) || Function_46(Global_34573, *uParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam8, 1.0f, iParam15);
					TASK_PRIORITY_SET(*uParam0, 1);
				}
				*uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_46(*uParam0, *uParam1) - *uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0))
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, *uParam1, 0, 3212836864);
				TASK_FACE_ACTOR(false, *uParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(*uParam0, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(*uParam0, 1);
				*uParam9 = 0;
				*uParam3 = 4;
			}
			else if (!Function_157(*uParam0, 0))
			{
				if (IS_ACTOR_VALID(*uParam0))
				{
					TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				}
				return 0;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
			TASK_FACE_ACTOR(*uParam0, *uParam1, 1, 3212836864);
			*uParam3 = 4;
			break;
		
		case 0x00000004:
			*uParam9 = 0;
			if (GET_NTH_TASK_STATUS(*uParam0, false) != 0 || bParam21)
			{
				if (!bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
				}
				if (bParam19)
				{
					Function_30(*uParam0, Global_34573, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_30(*uParam0, Global_34573, bParam12, bParam13, 5, 60, 1, 1);
				}
				*uParam3 = 5;
				Function_177(uParam4, 0.0f);
			}
			else if (!Function_157(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (uParam23 && !Function_29(*uParam0))
			{
				if (fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
						Function_11(*uParam0, 4, 0, 1);
					}
				}
				else if (Function_33(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_11(*uParam0, 4, 0, 1);
				}
			}
			if (bParam22)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
					{
						if (!IS_STRING_VALID(bParam20))
						{
							SAY_SINGLE_LINE_CONTEXT(Global_34573, 409, *uParam0, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							Function_30(Global_34573, *uParam0, bParam20, bParam20, 5, 60, 1, 1);
						}
						*uParam3 = 6;
					}
				}
			}
			else if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
			{
				*uParam3 = 6;
			}
			break;
		
		case 0x00000006:
			if (uParam23 && !Function_29(*uParam0))
			{
				if (Function_33(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_11(*uParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, bParam11) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
				*uParam7 = 1;
				if (bParam17)
				{
					Function_11(*uParam0, 4, 0, iParam15);
					TASK_PRIORITY_SET(*uParam0, 2);
				}
				AI_GOAL_LOOK_CLEAR(*uParam0);
				ACTOR_END_FORCE_HOLSTER(*uParam0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 4294967295);
				return 1;
			}
			break;
	}
	return 1;
}

bool Function_29(bool bParam0) //Position: 0x1C55 / 7253
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		return 1;
	}
	return 0;
}

void Function_30(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1C7A / 7290
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_46(bParam0, Global_34573) >= IntToFloat(iParam5))
		{
			if (!IS_ACTOR_VALID(bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
			if (bParam6)
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 0, 1))
					{
						bParam3 = bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					bParam3 = bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

void Function_31(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x1D0A / 7434
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
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || uParam6));
			}
		}
		bVar0++;
	}
}

void Function_32(bool bParam0, float fParam1) //Position: 0x1DF4 / 7668
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar3 = false;
	if (Function_33(&uLocal_29, fParam1))
	{
		iVar1 = SQUAD_GET_SIZE(bParam0);
		bVar0 = false;
		while (bVar0 <= iVar1)
		{
			if (!bVar3)
			{
				bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (GET_ACTOR_ENUM(bVar2) == iLocal_41)
				{
					bVar3 = true;
				}
			}
			bVar0++;
		}
		if (bVar3)
		{
			bVar0 = RAND_INT_RANGE_DIFFERENT(bLocal_42, false, 5);
			bLocal_42 = bVar0;
			switch (bVar0)
			{
				case 0x00000000:
					Function_30(bVar2, Global_34573, "RoamingGang_msg01", "RoamingGang_msg01", 5, 60, 0, 1);
					Function_177(&uLocal_29, 0.0f);
					break;
				
				case 0x00000001:
					Function_30(bVar2, Global_34573, "RoamingGang_msg02", "RoamingGang_msg02", 5, 60, 0, 1);
					Function_177(&uLocal_29, 0.0f);
					break;
				
				case 0x00000002:
					Function_30(bVar2, Global_34573, "RoamingGang_msg03", "RoamingGang_msg03", 5, 60, 0, 1);
					Function_177(&uLocal_29, 0.0f);
					break;
				
				case 0x00000003:
					Function_30(bVar2, Global_34573, "RoamingGang_msg04", "RoamingGang_msg04", 5, 60, 0, 1);
					Function_177(&uLocal_29, 0.0f);
					break;
				
				case 0x00000004:
					Function_30(bVar2, Global_34573, "RoamingGang_msg05", "RoamingGang_msg05", 5, 60, 0, 1);
					Function_177(&uLocal_29, 0.0f);
					break;
				
				case 0x00000005:
					Function_30(bVar2, Global_34573, "RoamingGang_msg05", "RoamingGang_msg05", 5, 60, 0, 1);
					Function_177(&uLocal_29, 0.0f);
					break;
				}
			}
	}
	return;
}

bool Function_33(var uParam0, float fParam1) //Position: 0x1FEE / 8174
{
	if (Function_36(uParam0))
	{
		if (Function_34(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_34(int iParam0) //Position: 0x200A / 8202
{
	if (Function_36(iParam0))
	{
		if (Function_35(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_35(int iParam0) //Position: 0x20D2 / 8402
{
	return Function_10(*iParam0, 2);
}

bool Function_36(int iParam0) //Position: 0x20DF / 8415
{
	return Function_10(*iParam0, 1);
}

void Function_37(bool bParam0, var uParam1, bool bParam2) //Position: 0x20EC / 8428
{
	bParam2 = bParam2;
	*uParam1 = *uParam1;
	SET_ANIM_SET_FOR_ACTOR(bParam0, "shooting_air_horse", 0);
	SET_ACTION_NODE_FOR_ACTOR(bParam0, "shooting_air_horse");
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 4.0f, 0.0f);
	return;
}

void Function_38(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x213A / 8506
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

int Function_39(bool bParam0, bool bParam1) //Position: 0x21A8 / 8616
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(bVar3) == bParam1)
				{
					iVar0 = 1;
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_40(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x2211 / 8721
{
	int iVar0;
	
	uParam7 = uParam7;
	if (!bParam6)
	{
		iVar0 = 0;
		while (iVar0 <= iParam1)
		{
			if (Function_41((*uParam0)[iVar0], uParam3, uParam4, uParam5, bParam6, 0x40400000))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool Function_41(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x2259 / 8793
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
		fVar0 = Function_46(bParam0, Global_34573);
		if (!Function_10(bParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_42(bParam0);
				return 1;
			}
		}
		if (!Function_10(bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_42(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_42(bParam0);
				return 1;
			}
		}
		if (!Function_10(bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_42(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_42(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_10(bParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_42(bParam0);
				return 1;
			}
		}
		if (!Function_10(bParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_42(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_42(bool bParam0) //Position: 0x23F0 / 9200
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_43(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_43(bool bParam0) //Position: 0x2424 / 9252
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_44(bool bParam0, bool bParam1) //Position: 0x243B / 9275
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	iVar3 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	while (bVar1 <= iVar3)
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		Function_45(bVar0, &bParam1);
		ACTOR_RESET_ANIMS(bVar0, 1);
		MEMORY_ALLOW_SHOOTING(bVar0, 1);
		bVar2 = TASK_SEQUENCE_OPEN();
		TASK_KILL_CHAR(false, bParam1);
		TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bVar0, bVar2);
		TASK_SEQUENCE_RELEASE(bVar2, 1);
		TASK_PRIORITY_SET(bVar0, 0);
		bVar1++;
	}
	bLocal_35 = true;
	return;
}

int Function_45(bool bParam0, int iParam1) //Position: 0x24A9 / 9385
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(*iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.5f);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, *iParam1, 1);
	return 1;
}

float Function_46(bool bParam0, bool bParam1) //Position: 0x2560 / 9568
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

int Function_47(bool bParam0) //Position: 0x2651 / 9809
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_48(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_48(float fParam0, float fParam1) //Position: 0x268C / 9868
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*fParam0 = 65.0f;
		*fParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*fParam0 = 115.0f;
		*fParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*fParam0 = 130.0f;
			*fParam1 = 190.0f;
		}
		else
		{
			*fParam0 = 130.0f;
			*fParam1 = 190.0f;
		}
	}
	return;
}

void Function_49() //Position: 0x2715 / 10005
{
	int iVar0;
	
	bLocal_49 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_51(3);
		if (iVar0 == 0)
		{
			iLocal_48 = "FTR_SONG_01";
		}
		else if (iVar0 == 1)
		{
			iLocal_48 = "FTR_SONG_05";
		}
		else if (iVar0 == 2)
		{
			iLocal_48 = "FTR_SONG_07";
		}
	}
	else if (Global_29004 == 2)
	{
		iLocal_48 = "NRT_SONG_04";
	}
	else if (Global_29004 == 1)
	{
		if (Function_50())
		{
			iLocal_48 = "MEX_SONG_05";
		}
		else
		{
			iLocal_48 = "MEX_SONG_06";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(iLocal_48, "GUNFIGHT_LOW", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

bool Function_50() //Position: 0x27DF / 10207
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

var Function_51(bool bParam0) //Position: 0x27F2 / 10226
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(false, bParam0) / 1000);
}

bool Function_52(int iParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x280B / 10251
{
	if (StackVal & 64 == 64)
	{
		if (!*uParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_46(Global_34573, bParam1) > 15.0f)
				{
					*uParam2 = 1;
				}
			}
		}
		if (Global_3394 && !*uParam2)
		{
			return 0;
		}
		if ((Global_3367 && Global_6281 == GET_THIS_SCRIPT_ID()) && !*uParam2)
		{
			return 0;
		}
		if (Function_55() && !*uParam2)
		{
			return 0;
		}
		if (Function_54(iParam0) && !*uParam2)
		{
			return 0;
		}
		if (Global_3387 && !bParam4)
		{
			return 0;
		}
		if (Global_3410)
		{
			return 0;
		}
		if (Global_3384)
		{
			return 0;
		}
		if (Global_3403 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3404 && uParam7)
		{
			*uParam3 = 1;
			return 0;
		}
		if (Global_3392 && !*uParam2)
		{
			return 0;
		}
		if (Global_3393 && !*uParam2)
		{
			return 0;
		}
		if (bParam6)
		{
			if (Global_63096 && !*uParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_53(iParam0, uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_53(int iParam0, int iParam1) //Position: 0x2939 / 10553
{
	iParam0 = iParam0;
	if (Global_3382 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_3369 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_54(int iParam0) //Position: 0x295A / 10586
{
	float fVar0;
	
	if (StackVal & 64 == 64)
	{
		fVar0 = GET_LAST_HIT_TIME(Global_34573);
		if (fVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(Global_34573)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_55() //Position: 0x2998 / 10648
{
	int iVar0;
	int iVar1;
	
	if (Global_3386)
	{
		iVar1 = 9;
	}
	else
	{
		iVar1 = 22;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					if (StackVal != DECOR_GET_INT(GET_THIS_SCRIPT_ID(), "script"))
					{
						if (Function_56(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_56(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_56(bool bParam0, bool bParam1) //Position: 0x2A53 / 10835
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_58(bParam0);
			vVar0 = { StackVal, StackVal, Function_58(bParam0) };
			Function_57(bParam1);
			vVar3 = { StackVal, StackVal, Function_57(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_57(bool bParam0) //Position: 0x2AF3 / 10995
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

vector3 Function_58(bool bParam0) //Position: 0x2B5F / 11103
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

void Function_59(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BC9 / 11209
{
	int iVar0;
	bool bVar1;
	
	if (Function_96(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_95())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_94(1);
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
			Function_93(1, bVar1);
			if (!bParam2)
			{
				if (!Function_92(Global_76848, 1))
				{
					Function_86(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_84(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_92(Global_76848, 2))
				{
					Function_86(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_83(1, bVar1, 0, 0);
	}
	else
	{
		Function_82(1, (4294967295 * bVar1), 0);
	}
	if (Function_94(1) <= 4294962296)
	{
		Function_69(1, 4294962296, 0);
	}
	else if (Function_94(1) >= 5000)
	{
		Function_69(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_68(1));
	iVar0 = Function_94(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_61(2, Function_67(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_61(2, Function_67(Global_12976.f_152), 0);
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
				Function_61(2, Function_67(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_61(2, Function_67(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_61(2, Function_67(Global_12976.f_152), 1);
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
				Function_61(2, Function_67(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_61(2, Function_67(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_61(2, Function_67(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_61(2, Function_67(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_61(2, Function_67(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_61(2, Function_67(Global_12976.f_152), 1);
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
				Function_61(2, Function_67(Global_12976.f_152), 0);
			}
			break;
	}
	Function_60(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_60(int iParam0, int iParam1) //Position: 0x2EEA / 12010
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
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

int Function_61(int iParam0, char* cParam1, bool bParam2) //Position: 0x3148 / 12616
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
	Function_65(iParam0, cParam1, 0, 1);
	iVar1 = Function_62();
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

int Function_62() //Position: 0x32CD / 13005
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
	Function_63();
	return 0;
}

void Function_63() //Position: 0x336C / 13164
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
		Function_64(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_64(int iParam0) //Position: 0x341B / 13339
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

int Function_65(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x3479 / 13433
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
		Function_66(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_66(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x37CB / 14283
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

var Function_67(int iParam0) //Position: 0x384E / 14414
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

float Function_68(int iParam0) //Position: 0x38F1 / 14577
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

int Function_69(int iParam0, bool bParam1, bool bParam2) //Position: 0x392A / 14634
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
		Function_81(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_80(iParam0);
	if (bParam2)
	{
		Function_70(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_70(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x3BC5 / 15301
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_79(390))), 32);
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
					bVar19 = (Function_68(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_68(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_77(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_74(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_72(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_71(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_302(), &Var9);
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

var Function_71(int iParam0) //Position: 0x41F3 / 16883
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_72(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4204 / 16900
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_73("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_73(char* cParam0, bool bParam1) //Position: 0x42F9 / 17145
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_74(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4312 / 17170
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_76(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_75(Function_76(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_75(int iParam0, int iParam1) //Position: 0x4377 / 17271
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_76(int iParam0, bool bParam1) //Position: 0x4389 / 17289
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_77(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x439B / 17307
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
	if (((Function_78(iParam0) != 19 || Function_78(iParam0) != 17) || Function_78(iParam0) != 10) || Function_78(iParam0) != 9)
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

int Function_78(int iParam0) //Position: 0x44CB / 17611
{
	return Global_35278[iParam020].f_48;
}

var Function_79(int iParam0) //Position: 0x44DA / 17626
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_80(int iParam0) //Position: 0x4517 / 17687
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

int Function_81(int iParam0, bool bParam1, bool bParam2) //Position: 0x46B1 / 18097
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

int Function_82(int iParam0, bool bParam1, int iParam2) //Position: 0x48F5 / 18677
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
	Function_80(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_70(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_83(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4AF0 / 19184
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
	Function_81(iParam0, TO_FLOAT(bParam1), 1);
	Function_80(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_70(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

int Function_84(int iParam0, bool bParam1) //Position: 0x4D10 / 19728
{
	bool bVar0;
	int iVar1;
	
	Function_82(iParam0, bParam1, 0);
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
	iVar1 = Function_85(iParam0, 4294967295);
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
	iVar1 = Function_62();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_85(int iParam0, int iParam1) //Position: 0x4EAC / 20140
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

void Function_86(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4EED / 20205
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_88(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_87(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_87(char* cParam0, int iParam1) //Position: 0x4F59 / 20313
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

bool Function_88(bool bParam0, var uParam1, int iParam2) //Position: 0x4F90 / 20368
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
		if (Function_90(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_89(uVar0))
		{
			case 0x00000002:
				if (!Function_92(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_89(char* cParam0) //Position: 0x5008 / 20488
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

int Function_90(int iParam0) //Position: 0x50A9 / 20649
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_91(&iVar1, 2147483648);
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

void Function_91(int iParam0, int iParam1) //Position: 0x50E6 / 20710
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_92(var uParam0, int iParam1) //Position: 0x50F9 / 20729
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_93(int iParam0, bool bParam1) //Position: 0x510C / 20748
{
	bool bVar0;
	int iVar1;
	
	Function_83(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_85(iParam0, 4294967295);
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
	iVar1 = Function_62();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

int Function_94(bool bParam0) //Position: 0x52A9 / 21161
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

bool Function_95() //Position: 0x52EA / 21226
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_96(int iParam0) //Position: 0x5315 / 21269
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_97(int iParam0, bool bParam1, bool bParam2) //Position: 0x5324 / 21284
{
	int iVar0;
	bool bVar1;
	
	if (Function_96(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_95())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_94(3);
	Function_99();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_93(3, bVar1);
		if (!bParam2)
		{
			if (!Function_92(Global_76848, 4))
			{
				Function_86(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_83(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_68(3));
	iVar0 = Function_94(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_61(4, Function_98(Global_12976.f_156), 1);
				Function_60(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_61(4, Function_98(Global_12976.f_156), 1);
				Function_60(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_61(4, Function_98(Global_12976.f_156), 1);
				Function_60(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_61(4, Function_98(Global_12976.f_156), 1);
				Function_60(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_61(4, Function_98(Global_12976.f_156), 1);
				Function_60(Global_12976.f_152, Global_12976.f_156);
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

var Function_98(int iParam0) //Position: 0x54F3 / 21747
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

void Function_99() //Position: 0x5582 / 21890
{
	Function_101(3, 0.0f);
	Function_100(3, 10000.0f);
	return;
}

int Function_100(int iParam0, int iParam1) //Position: 0x5598 / 21912
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_101(int iParam0, int iParam1) //Position: 0x55D8 / 21976
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

void Function_102(int iParam0) //Position: 0x5618 / 22040
{
	if (!IS_FACTION_VALID(iParam0))
	{
		return;
	}
	if (!Function_155(3))
	{
		return;
	}
	if (Function_154())
	{
		return;
	}
	if (Function_9())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000019:
			if (IS_PS3() || Function_153())
			{
				Function_103(4, 16, 0, 0, 1);
			}
			break;
		
		case 0x0000000E:
			Function_103(5, 16, 0, 0, 1);
			break;
		
		case 0x0000000C:
			Function_103(7, 16, 0, 0, 1);
			break;
	}
	return;
}

void Function_103(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x5686 / 22150
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_152(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_155(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_151(bParam0, 2))
	{
		Function_83(456, 1, 0, 0);
		Function_150(bParam0, 2);
		if (!bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_149(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_148(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_150(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_147(0, 0, 1, 1))
			{
				Function_123(1);
				Function_122(1, 0);
			}
			else
			{
				Function_121();
			}
		}
		Function_116(bParam0);
		if (StackVal && !Function_10(((((!Function_115() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_10((((Function_115() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_9())
		{
			if (!Function_92(Global_76846, 2))
			{
				Function_86(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_106();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_105(3, bParam1);
				break;
			
			case 0x00000005:
				Function_105(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_105(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_105(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_105(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_105(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_104(2, 24);
				break;
			
			case 0x00000003:
				Function_104(2, 25);
				break;
			
			case 0x0000000F:
				Function_104(2, 26);
				break;
			
			case 0x0000000D:
				Function_104(2, 27);
				break;
			
			case 0x0000000E:
				Function_104(2, 28);
				break;
			}
	}
}

void Function_104(int iParam0, bool bParam1) //Position: 0x591C / 22812
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

void Function_105(int iParam0, bool bParam1) //Position: 0x5983 / 22915
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_106() //Position: 0x59EE / 23022
{
	if (Function_152(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_114(Global_28180);
			Global_28180.f_8 = Function_107(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_114(Global_28180);
			Global_28180.f_8 = Function_107(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_107(int iParam0, int iParam1) //Position: 0x5A69 / 23145
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
					if (Function_110(6, 0) || Function_110(12, 0))
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
					if (Function_109(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_110(5, 0))
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
					if (Function_109(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_109(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_109(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_109(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_110(26, 0))
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
					if (Function_109(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_109(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_109(27) && iVar18)
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
					if (Function_109(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_109(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_109(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_109(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_110(17, 0) && iVar15)
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
					if (Function_109(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_110(6, 0) && Function_109(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_109(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_110(9, 0) && Function_109(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_109(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_110(8, 0) && iVar19)
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
	if (Function_108(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_108(StackVal, StackVal, vVar3))
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
	if (!Function_108(StackVal, StackVal, vVar3))
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

bool Function_108(vector3 vParam0) //Position: 0x665A / 26202
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_109(int iParam0) //Position: 0x6672 / 26226
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_110(int iParam0, bool bParam1) //Position: 0x6687 / 26247
{
	int iVar0;
	
	iVar0 = Function_112(iParam0);
	if (!Function_111(iVar0))
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

bool Function_111(int iParam0) //Position: 0x66C4 / 26308
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_112(int iParam0) //Position: 0x66DB / 26331
{
	if (!Function_113(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_113(int iParam0) //Position: 0x66F5 / 26357
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_114(int iParam0) //Position: 0x670B / 26379
{
	int iVar0;
	int iVar1;
	
	if (!Function_152(iParam0))
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

bool Function_115() //Position: 0x675A / 26458
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_116(bool bParam0) //Position: 0x6787 / 26503
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
			if (Function_148(bParam0, Function_120(bVar24)))
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
			if (Function_148(bParam0, Function_120(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_119(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_118(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_117(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_117(int iParam0) //Position: 0x6937 / 26935
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_152(iParam0))
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

void Function_118(bool bParam0, bool bParam1) //Position: 0x698E / 27022
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

var Function_119(int iParam0) //Position: 0x69B3 / 27059
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_152(iParam0))
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

int Function_120(bool bParam0) //Position: 0x6A09 / 27145
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_121() //Position: 0x6A15 / 27157
{
	return;
}

void Function_122(var uParam0, int iParam1) //Position: 0x6A1B / 27163
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_154())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_123(bool bParam0) //Position: 0x6A5D / 27229
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_138();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_124();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_91(&Global_63095, 1);
		Function_91(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_124() //Position: 0x6AAE / 27310
{
	Function_136();
	Function_135();
	Function_135();
	Function_134();
	Function_134();
	Function_133();
	Function_133();
	Function_132(0);
	Function_132(0);
	if (!Function_154())
	{
		Function_129();
		Function_128();
		Function_127();
		Function_126();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_125();
	return;
}

void Function_125() //Position: 0x6B00 / 27392
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

void Function_126() //Position: 0x6C06 / 27654
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

void Function_127() //Position: 0x6C39 / 27705
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

void Function_128() //Position: 0x6DC7 / 28103
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

void Function_129() //Position: 0x6F7B / 28539
{
	Function_130(&Global_28260, 1, 0);
	return;
}

void Function_130(int iParam0, bool bParam1, var uParam2) //Position: 0x6F89 / 28553
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
	
	bVar0 = Function_131();
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

var Function_131() //Position: 0x717A / 29050
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_132(char* cParam0) //Position: 0x718F / 29071
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
					iVar2 = ((Function_94((50 + iVar4)) + Function_94((183 + iVar4))) + Function_94((90 + iVar4)));
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
	Function_69(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_133() //Position: 0x7235 / 29237
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
		iVar2 = ((Function_94((50 + iVar3) + 15) + Function_94((183 + iVar3) + 15)) + Function_94((90 + iVar3) + 15));
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
	Function_69(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_134() //Position: 0x72BE / 29374
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
			iVar2 = ((Function_94((50 + iVar3) + 8) + Function_94((183 + iVar3) + 8)) + Function_94((90 + iVar3) + 8));
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
	Function_69(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_135() //Position: 0x7355 / 29525
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_94((50 + iVar3)) + Function_94((183 + iVar3))) + Function_94((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			bVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_69(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_136() //Position: 0x73D4 / 29652
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_137(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_69(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_137(int iParam0, bool bParam1, int iParam2) //Position: 0x740D / 29709
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
	Function_81(iParam0, bParam1, 1);
	Function_80(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_70(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_138() //Position: 0x7617 / 30231
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_9())
	{
		Function_144(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_144(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_139(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_139(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_108(StackVal, StackVal, vVar0))
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

vector3 Function_139(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x76D2 / 30418
{
	int iVar0;
	
	iVar0 = Function_142(uParam2, uParam3);
	if (Function_141(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_176(&Global_63095, 1);
			Function_91(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_176(&Global_63095, 2);
			Function_91(&Global_63095, 1);
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
		Function_176(&Global_63095, 2);
		Function_91(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_140();
	return StackVal, StackVal, Function_140();
}

vector3 Function_140() //Position: 0x77B9 / 30649
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_141(int iParam0) //Position: 0x77C2 / 30658
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_142(bool bParam0, bool bParam1) //Position: 0x77D8 / 30680
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
				fVar2 = Function_143(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_143(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_141(bVar0) && !bParam1)
	{
		bVar0 = Function_142(bParam0, 1);
	}
	return bVar0;
}

float Function_143(vector3 vParam0, vector3 vParam3) //Position: 0x789F / 30879
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_144(var uParam0, int iParam1) //Position: 0x78BC / 30908
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_146(Global_34573, &vVar4);
	if (!Function_145(Global_30640[0]))
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
	if (!Function_145(Global_30640[2]))
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
	if (!Function_145(Global_30640[1]))
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
	if (!Function_145(Global_30658[1]))
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
	if (!Function_145(Global_30658[3]))
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
	if (!Function_145(Global_30658[2]))
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
	if (!Function_145(Global_30658[4]))
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
	if (!Function_145(Global_30668[0]))
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
	if (!Function_145(Global_30668[1]))
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
	if (!Function_145(Global_30668[2]))
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
	if (!Function_145(Global_30679[0]))
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
	if (!Function_145(Global_30685[0]))
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
	if (!Function_145(Global_30685[1]))
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
	if (!Function_145(Global_30685[2]))
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
	if (!Function_145(Global_30693[0]))
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
	if (!Function_145(Global_30693[1]))
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
	if (!Function_145(Global_30693[2]))
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
	if (!Function_145(Global_30707[2]))
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
	if (!Function_145(Global_30707[3]))
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
	if (!Function_145(Global_30707[0]))
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
	if (!Function_145(Global_30717[0]))
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
	if (!Function_145(Global_30723[2]))
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
	if (!Function_145(Global_30723[1]))
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
	if (!Function_145(Global_30723[0]))
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
	if (!Function_145(Global_30679[1]))
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
	if (!Function_145(Global_30707[1]))
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
	Function_176(&Global_63095, 2);
	Function_91(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_108(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_145(int iParam0) //Position: 0x80E3 / 32995
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_10(bVar0, 0x1000000) || Function_10(bVar0, 0x2000000)) || Function_10(bVar0, 0x4000000)) || !Function_10(bVar0, 0x10000000));
}

void Function_146(bool bParam0, bool bParam1) //Position: 0x811E / 33054
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_147(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x812B / 33067
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

bool Function_148(bool bParam0, int iParam1) //Position: 0x81CF / 33231
{
	int iVar0;
	
	if (!Function_152(bParam0))
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

void Function_149(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x822E / 33326
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_8(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

void Function_150(int iParam0, int iParam1) //Position: 0x82A9 / 33449
{
	if (!Function_152(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_151(int iParam0, int iParam1) //Position: 0x82FE / 33534
{
	int iVar0;
	
	if (!Function_152(iParam0))
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

bool Function_152(int iParam0) //Position: 0x832B / 33579
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_153() //Position: 0x8341 / 33601
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_10(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_154() //Position: 0x8371 / 33649
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_155(int iParam0) //Position: 0x837A / 33658
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_156(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x8396 / 33686
{
	int iVar0;
	
	*uParam2 = 1;
	*uParam3 = 0;
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (Function_157((*uParam0)[iVar0], bParam4))
		{
			*uParam3 = 1;
		}
		else
		{
			*uParam2 = 0;
		}
		iVar0++;
	}
}

bool Function_157(bool bParam0, bool bParam1) //Position: 0x83D2 / 33746
{
	if (bParam1)
	{
		if (IS_ACTOR_HOGTIED(bParam0))
		{
			if (!(GET_TASK_STATUS(bParam0, 25) != 1 || GET_TASK_STATUS(bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, 1);
			}
			Function_22(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_22(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_158(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

bool Function_158(bool bParam0, int iParam1) //Position: 0x846E / 33902
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

bool Function_159(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x84B8 / 33976
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
				if (ACTORS_IN_RANGE(bVar1, bParam1, iParam2))
				{
					if (!Function_158(bVar1, 1) || iParam3)
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

void Function_160(int iParam0) //Position: 0x8551 / 34129
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_83(409, 1, 0, 0);
	}
	return;
}

void Function_161(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x8582 / 34178
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!*uParam2)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= iParam1)
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar1]))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam0)[iVar1], 1.0f, iParam5, 1, 1, 0))
			{
				*uParam2 = 1;
				if (iParam4 != 0)
				{
					Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam4));
				}
			}
		}
		iVar1++;
	}
	if (*uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_173(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_172(0);
		}
		if (bParam6)
		{
			Function_170(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_168(iParam3);
		}
		Function_166(iParam3);
		if (Function_165(StackVal, 32768))
		{
			Function_162(1);
		}
		Global_16876[iParam36].f_12++;
		Function_83(408, 1, 0, 0);
	}
}

void Function_162(bool bParam0) //Position: 0x866F / 34415
{
	if (bParam0)
	{
		Function_164(0x10000000);
	}
	else
	{
		Function_163(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_163(int iParam0) //Position: 0x8693 / 34451
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_164(int iParam0) //Position: 0x86B0 / 34480
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_165(var uParam0, int iParam1) //Position: 0x86C3 / 34499
{
	return (uParam0 && iParam1) == 0;
}

void Function_166(int iParam0) //Position: 0x86D0 / 34512
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_10(StackVal, 524288))
	{
		if (Global_16876[iParam06].f_16 < 0 && Global_16876[iParam06].f_16 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_16876[iParam06].f_16 <= 2 && Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_167(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, false, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_167(int iParam0) //Position: 0x8774 / 34676
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_168(int iParam0) //Position: 0x878A / 34698
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Global_30842[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_169(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_169(var uParam0, var uParam1, int iParam2) //Position: 0x8828 / 34856
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_170(int iParam0, int iParam1) //Position: 0x8840 / 34880
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_171(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_171(int iParam0) //Position: 0x88C2 / 35010
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

void Function_172(int iParam0) //Position: 0x8910 / 35088
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, false, (iParam0 + Function_167(900)), 0);
	return;
}

void Function_173(int iParam0) //Position: 0x8932 / 35122
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, (iParam0 + Function_167(200)), 0);
	return;
}

void Function_174(int iParam0) //Position: 0x8953 / 35155
{
	Function_175(&Global_28842, iParam0);
	return;
}

void Function_175(var uParam0, int iParam1) //Position: 0x8961 / 35169
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_176(var uParam0, int iParam1) //Position: 0x8984 / 35204
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_177(var uParam0, float fParam1) //Position: 0x8993 / 35219
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_176(uParam0, 1);
	Function_91(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_178(bool bParam0) //Position: 0x89B4 / 35252
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

void Function_179(bool bParam0) //Position: 0x89FA / 35322
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

int Function_180(bool bParam0, bool bParam1, int iParam2, var uParam3, bool bParam4, var uParam5, var uParam6, bool bParam7, bool bParam8) //Position: 0x8A2E / 35374
{
	bool bVar0;
	bool bVar1;
	int iVar2[16];
	vector3 vVar19;
	vector3 vVar22;
	vector3 vVar25;
	struct<8> Var28;
	struct<8> Var36;
	int iVar44;
	int iVar45;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam4))
	{
		return 0;
	}
	if (!Global_30767[23])
	{
		return 0;
	}
	GET_OBJECT_POSITION(bParam4, &vVar19);
	GET_OBJECT_ORIENTATION(bParam4, &vVar22);
	if (Function_108(StackVal, StackVal, vVar19))
	{
		return 0;
	}
	MAKE_NEXT_RAND_ACTORENUMS_UNIQUE(iParam2);
	iVar44 = 0;
	while (iVar44 < (iParam2 - 1))
	{
		iVar45 = Function_188(StackVal, StackVal, 64, vVar19, 4, uParam6, 0);
		if (Function_187(iVar45, &iVar2))
		{
			iVar45 = 976;
		}
		iVar2[iVar44] = iVar45;
		iVar44++;
	}
	iVar44 = 0;
	while (iVar44 < (iParam2 - 1))
	{
		Function_186(uParam5, iVar44);
		GET_OBJECT_RELATIVE_POSITION(bParam4, Function_186(uParam5, iVar44), &vVar19);
		if (!Function_185(&vVar19, 20.0f, &vVar25, 10))
		{
			vVar25 = { StackVal, StackVal, vVar19 };
		}
		if (Function_184((*uParam3)[iVar44]) && !(*uParam3)[iVar44] != 0)
		{
			bVar1 = (*uParam3)[iVar44];
		}
		else
		{
			bVar1 = (*uParam3)[RAND_INT_RANGE(false, (*uParam3 - 1))];
		}
		if (IS_STRING_VALID(cParam7))
		{
			if (STRINGS_ARE_EQUAL(bParam7, ""))
			{
				bVar0 = Function_183(StackVal, StackVal, StackVal, StackVal, bParam0, Function_302(), bVar1, Function_302(), iVar2[iVar44], vVar25, vVar22);
			}
			else
			{
				Var28 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_181(bParam7) };
				strcpy(&Var36, bParam7, 32);
				stradd(&Var36, "H_", 32);
				Var36 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_181(&Var28) };
				bVar0 = Function_183(StackVal, StackVal, StackVal, StackVal, bParam0, &Var28, bVar1, &Var36, iVar2[iVar44], vVar25, vVar22);
			}
		}
		else
		{
			bVar0 = Function_183(StackVal, StackVal, StackVal, StackVal, bParam0, Function_302(), bVar1, Function_302(), iVar2[iVar44], vVar25, vVar22);
		}
		if (IS_ACTOR_VALID(GET_MOUNT(bVar0)))
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(GET_MOUNT(bVar0)), "bNoInjuryEjection", bParam8);
		}
		SQUAD_JOIN(bVar0, bParam1);
		iVar44++;
	}
	return 1;
}

struct<32> Function_181(bool bParam0) //Position: 0x8C04 / 35844
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(bParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_182("0", &cVar8, ""), 4);
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

struct<32> Function_182(char* cParam0, char* cParam1, char* cParam2) //Position: 0x8C6E / 35950
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_183(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x8C8D / 35981
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_184(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_184(bParam4))
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

bool Function_184(bool bParam0) //Position: 0x8DB2 / 36274
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_185(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x8DC9 / 36297
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
		if (!Function_108(StackVal, StackVal, *iParam2))
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
			if (!Function_108(StackVal, StackVal, *iParam2))
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

vector3 Function_186(int iParam0, bool bParam1) //Position: 0x8EFB / 36603
{
	vector3 vVar0;
	
	if (!Function_198(iParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return 0.0f, 0.0f, 0.0f;
	}
	if (bParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(*iParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return 0.0f, 0.0f, 0.0f;
	}
	if (bParam1 >= (GET_NUM_FORMATION_LOCATIONS(*iParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(*iParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(*iParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return 0.0f, 0.0f, 0.0f;
	}
	GET_FORMATION_LOCATION(*iParam0, bParam1, &vVar0);
	vVar0.x = (StackVal * vVar0.x);
	vVar0.f_4 = (StackVal * vVar0.y);
	vVar0.f_8 = (StackVal * vVar0.z);
	return StackVal, StackVal, vVar0;
}

bool Function_187(int iParam0, int iParam1) //Position: 0x903C / 36924
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

var Function_188(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x906E / 36974
{
	return Function_189(StackVal, StackVal, iParam0, 0, bParam4, bParam5, bParam6, 1, vParam1);
}

var Function_189(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x9087 / 36999
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_192(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_192(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_192(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_192(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_192(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_192(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_192(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_192(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_192(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_192(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_192(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_192(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_192(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_192(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_190(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_190(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x92DC / 37596
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_191(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_191(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_191(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_191(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_191(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_191(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_191(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_191(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_191(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_191(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_191(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_191(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_191(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_191(Global_30750[13], bVar0);
	}
	return Function_192(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_191(bool bParam0, bool bParam1) //Position: 0x942D / 37933
{
	bool bVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		bVar0++;
	}
	return;
}

var Function_192(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x94EB / 38123
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
		Function_197();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_184(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_196(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_196(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_195(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_184(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_195(bVar0))
				{
					Function_194();
				}
				Function_193(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_184(bVar1))
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

void Function_193(int iParam0) //Position: 0x97DE / 38878
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

void Function_194() //Position: 0x9892 / 39058
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

bool Function_195(bool bParam0) //Position: 0x98CC / 39116
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

void Function_196(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x98F9 / 39161
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

void Function_197() //Position: 0x9A4A / 39498
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_194();
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
	Function_194();
	return;
}

bool Function_198(int iParam0) //Position: 0x9A95 / 39573
{
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(*iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_199(var uParam0, int iParam1) //Position: 0x9AB7 / 39607
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

int Function_200(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9AD0 / 39632
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	struct<6> Var10;
	bool bVar16;
	bool bVar17;
	
	iVar0 = 0;
	if (!SQUAD_IS_VALID(StackVal) && !(((*bParam0 != 0 || *bParam0 != 18) || *bParam0 != 16) || *bParam0 != 17))
	{
		*bParam0 = 0;
		return 4;
	}
	switch (*bParam0)
	{
		case 0x00000000:
			iVar0 = 2;
			break;
		
		case 0x00000009:
			iVar0 = 2;
			break;
		
		case 0x0000000A:
			iVar0 = 2;
			break;
		
		case 0x0000000C:
			iVar0 = 2;
			break;
		
		case 0x0000000D:
			iVar0 = 2;
			break;
		
		case 0x00000010:
			iVar0 = 2;
			break;
		
		case 0x00000011:
			iVar0 = 2;
			break;
		
		case 0x00000001:
			Function_239(bParam0 + 24);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_239(bParam0 + 24), *(bParam0 + 168), StackVal) };
			Function_239(bParam0 + 24);
			vVar4 = { StackVal, StackVal, Function_239(bParam0 + 24) };
			Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(bParam0 + 24) };
			*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_237(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam0, Var10, bParam0->f_152, vVar1) };
			if (Function_236(bParam0 + 24))
			{
				*bParam0 = 16;
				return 3;
			}
			Function_239(bParam0 + 24);
			*(bParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar4, Function_239(bParam0 + 24), StackVal) };
			*(bParam0 + 168) = { 0.0f, UNK_0x9C40E671(bParam0 + 168), 0.0f };
			if (bParam1)
			{
				Function_228(bParam0, 0);
			}
			*bParam0 = 2;
			return 1;
			break;
		
		case 0x00000002:
			bVar17 = false;
			while (StackVal <= SQUAD_GET_SIZE(bVar17))
			{
				TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar17));
				bVar17++;
			}
			if (Function_221(bParam0, bParam1, bParam3))
			{
				*bParam0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000003:
			if (!SQUAD_IS_VALID(StackVal))
			{
				*bParam0 = 16;
				return 4;
			}
			if (!IS_ACTOR_VALID(Function_178(StackVal)))
			{
				*bParam0 = 16;
				return 5;
			}
			GET_POSITION(Function_178(StackVal), &vVar4);
			*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_220(StackVal, StackVal, vVar4) };
			GET_ACTOR_VELOCITY(Function_178(StackVal), &vVar1);
			GET_POSITION(Function_178(StackVal), &vVar7);
			if (Function_236(bParam0 + 24))
			{
				*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_219(Function_178(StackVal)) };
				return 7;
			}
			if (Function_221(bParam0, bParam1, bParam3))
			{
				*bParam0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000006:
			iParam2 = iParam2;
			if (Function_221(bParam0, bParam1, bParam3))
			{
				*bParam0 = 7;
			}
			else
			{
				return 6;
			}
			if (!Function_208(bParam0))
			{
				*bParam0 = 9;
				return 7;
			}
			if (!Function_221(bParam0, bParam1, bParam3))
			{
				*bParam0 = 16;
				return 6;
			}
			*bParam0 = 7;
		
		case 0x00000008:
			break;
		
		case 0x00000007:
			if (!Function_204(bParam0))
			{
				*bParam0 = 6;
				return 0;
			}
			if (bParam1)
			{
				if (Function_202(bParam0))
				{
					bVar16 = true;
				}
				if (Function_201(StackVal))
				{
					bVar16 = true;
				}
				if (bParam0->f_96 && bParam0->f_72 < 2)
				{
					bVar16 = true;
				}
				if (Global_3403 && bParam0->f_72 == 3)
				{
					bVar16 = true;
				}
				if (bVar16)
				{
					Function_228(bParam0, 0);
				}
			}
			GET_POSITION(Function_178(StackVal), &vVar7);
			if (bParam0->f_88)
			{
				if (!Function_108(StackVal, StackVal, *(bParam0 + 136)))
				{
					if (Function_143(StackVal, StackVal, StackVal, StackVal, vVar7, *(bParam0 + 136)) > bParam0->f_128)
					{
						SQUAD_GOALS_CLEAR(StackVal);
						TASK_GO_TO_COORD(Function_178(StackVal), bParam0 + 136, 1);
						*bParam0 = 8;
						bParam0->f_88 = 0;
						return 8;
					}
				}
			}
			break;
	}
	return iVar0;
}

bool Function_201(bool bParam0) //Position: 0x9DEB / 40427
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		if (AI_GET_TASK_RETREAT_FLAG(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_202(int iParam0) //Position: 0x9E17 / 40471
{
	if (!IS_VOLUME_VALID(Global_28842.f_28))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_203(StackVal, Global_28842.f_28))
		{
			if (!iParam0->f_96)
			{
				iParam0->f_96 = 1;
				return 1;
			}
		}
		if (iParam0->f_96)
		{
			iParam0->f_96 = 0;
			return 1;
		}
	}
	if (iParam0->f_96)
	{
		iParam0->f_96 = 0;
		return 1;
	}
	return 0;
}

bool Function_203(bool bParam0, bool bParam1) //Position: 0x9E86 / 40582
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
	if (!IS_VOLUME_VALID(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_VEHICLE(bVar1))
			{
				if (IS_ACTOR_ALIVE(bVar1))
				{
					if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_204(int iParam0) //Position: 0x9F08 / 40712
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	Function_239(iParam0 + 24);
	bVar6 = Function_207(StackVal, StackVal, StackVal, Function_239(iParam0 + 24));
	GET_POSITION(bVar6, &vVar0);
	Function_239(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_239(iParam0 + 24) };
	if (iParam0->f_156 > 1.0f)
	{
		iParam0->f_156 = Function_206(StackVal, iParam0->f_72);
	}
	if (StackVal > Function_205(VDIST(vVar3, vVar0), Function_206(iParam0->f_156, iParam0->f_72)))
	{
		*iParam0 = 6;
		return 0;
	}
	if (Function_154())
	{
		if (SQUAD_GOAL_GET_STATUS(StackVal, iParam0->f_12) != 3)
		{
			SQUAD_GOALS_CLEAR(StackVal);
			iParam0->f_12 = "";
			return 0;
		}
	}
	return 1;
}

float Function_205(bool bParam0, int iParam1) //Position: 0x9FB2 / 40882
{
	if (bParam0 > iParam1)
	{
		return bParam0;
	}
	return iParam1;
}

int Function_206(bool bParam0, int iParam1) //Position: 0x9FC5 / 40901
{
	float fVar0;
	
	fVar0 = 5.0f;
	if (StackVal == 1)
	{
		fVar0 = 5.0f;
	}
	switch (iParam1)
	{
		case 0x00000001:
		case 0x00000003:
			switch (bParam0)
			{
				case 0x00000005:
				case 0x00000001:
					return (15.0f * fVar0);
					break;
				
				case 0x00000002:
					return (25.0f * fVar0);
					break;
				
				case 0x00000004:
					return (45.0f * fVar0);
					break;
				
				case 0x00000003:
					return (45.0f * fVar0);
					break;
			}
			break;
		
		case 0x00000002:
			switch (bParam0)
			{
				case 0x00000005:
				case 0x00000001:
					return (20.0f * fVar0);
					break;
				
				case 0x00000002:
					return (35.0f * fVar0);
					break;
				
				case 0x00000004:
					return (60.0f * fVar0);
					break;
				
				case 0x00000003:
					return (60.0f * fVar0);
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in FlagBuffer");
			break;
	}
	return (45.0f * fVar0);
}

var Function_207(vector3 vParam0, bool bParam3) //Position: 0xA0D6 / 41174
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_108(StackVal, StackVal, vParam0))
	{
		LOG_WARNING("Invalid test vector passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	if (!SQUAD_IS_VALID(bParam3))
	{
		LOG_WARNING("Invalid squad passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam3) - 1))
	{
		bVar3 = GET_OBJECT_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bParam3, bVar0));
		GET_OBJECT_POSITION(bVar3, &vVar4);
		if (VDIST(vParam0, vVar4) > bVar2 || bVar2 > 0.0f)
		{
			bVar2 = VDIST(vParam0, vVar4);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam3, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR!");
	return "";
}

bool Function_208(bool bParam0) //Position: 0xA257 / 41559
{
	var uVar0;
	bool bVar3;
	
	if (DECOR_CHECK_EXIST(StackVal, "wasstickup"))
	{
		DECOR_REMOVE(StackVal, "wasstickup");
		return 1;
	}
	Function_239(bParam0 + 24);
	bVar3 = Function_207(StackVal, StackVal, StackVal, Function_239(bParam0 + 24));
	GET_POSITION(bVar3, &uVar0);
	*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_209(StackVal, StackVal, StackVal, StackVal, StackVal, bParam0, *(bParam0 + 24), bParam0->f_152, 2.5f, 0) };
	if (Function_236(bParam0 + 24))
	{
		return 0;
	}
	return 1;
}

struct<24> Function_209(int iParam0, struct<6> Param1, bool bParam7, float fParam8, var uParam9) //Position: 0xA2CA / 41674
{
	struct<6> Var0;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	var uVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	var uVar15;
	vector3 vVar18;
	vector3 vVar21;
	float fVar24;
	struct<6> Var25;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	struct<17> Var35;
	struct<6> Var57;
	
	Function_239(&Param1);
	vVar6 = { StackVal, StackVal, Function_239(&Param1) };
	bVar9 = false;
	uVar11 = Function_218(StackVal, iParam0->f_164);
	fVar12 = 0.0f;
	if (IS_OBJECTSET_VALID(iParam0->f_48))
	{
		fVar13 = 5.0f;
	}
	else
	{
		fVar13 = (fParam8 * 2.0f);
	}
	iVar14 = 0;
	GET_OBJECT_POSITION(Function_178(StackVal), &uVar15);
	vVar18 = { 0.0f, 0.0f, -1.0f };
	if (!IS_OBJECTSET_VALID(iParam0->f_160))
	{
		iParam0->f_160 = CREATE_OBJECTSET_IN_LAYOUT(Function_302(), Global_28841, 36, 1);
	}
	bVar32 = 4294967295;
	while (!bVar10)
	{
		bVar31 = START_CURVE_QUERY(Global_28841, vVar6, uVar11, fVar12, fVar13, Function_205(Function_217(iParam0), ((fVar13 - fVar12) / 2.0f)), 0);
		if (IS_OBJECT_VALID(bParam7))
		{
			REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(bVar31, bParam7);
			if (!IS_OBJECT_IN_OBJECTSET(bParam7, iParam0->f_160))
			{
				ADD_OBJECT_TO_OBJECTSET(bParam7, iParam0->f_160);
			}
		}
		if (IS_OBJECTSET_VALID(iParam0->f_48))
		{
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar33 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				if (!IS_OBJECT_IN_OBJECTSET(bVar33, iParam0->f_48))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(bVar31, bVar33);
					RELEASE_CURVE(bVar33);
				}
				bVar9++;
			}
		}
		else
		{
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar33 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				if (IS_OBJECT_IN_OBJECTSET(bVar33, iParam0->f_160))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(bVar31, bVar33);
					RELEASE_CURVE(bVar33);
				}
				bVar9++;
			}
		}
		if (!GET_NUM_CURVES_IN_CURVE_QUERY(bVar31) < 0)
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bParam7, iParam0->f_160);
			UNK_0xDF93BD7C(bVar31);
			Function_216(iParam0->f_160);
			ADD_OBJECT_TO_OBJECTSET(bParam7, iParam0->f_160);
			if (uParam9 || iVar14 > 5)
			{
				fVar12 = fVar13;
				fVar13 = (fVar13 + fParam8);
				iVar14++;
			}
			else
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_215();
			}
		}
		fVar34 = -100000.0f;
		bVar32 = 4294967295;
		bVar9 = false;
		if (IS_OBJECTSET_VALID(iParam0->f_48))
		{
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar33 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				if (IS_OBJECT_IN_OBJECTSET(bVar33, iParam0->f_48))
				{
					GET_POINT_FROM_CURVE_QUERY(bVar31, bVar9, &Var25);
					Function_239(&Var25);
					Function_239(&Param1);
					vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_239(&Param1), Function_239(&Var25), StackVal) };
					fVar24 = VDOT(&vVar21, &vVar18);
					if (fVar24 < fVar34)
					{
						fVar34 = fVar24;
						bVar32 = bVar9;
					}
				}
				RELEASE_CURVE(bVar33);
				bVar9++;
			}
		}
		else if (Function_108(StackVal, StackVal, vVar18))
		{
			bVar32 = ROUND((TO_FLOAT(RAND_INT_RANGE(false, (GET_NUM_CURVES_IN_CURVE_QUERY(bVar31) - 1000))) / 1000.0f));
		}
		else if (Global_3386)
		{
			Function_239(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_239(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_215() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_215() };
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_239(&Param1);
				Function_239(&Var35);
				Function_239(&Param1);
				Function_239(&Var41);
				if (StackVal > Function_143(StackVal, StackVal, StackVal, Function_143(StackVal, StackVal, StackVal, StackVal, Function_239(&Param1), Function_239(&Var35)), Function_239(&Param1), Function_239(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, 0.0f, -5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, 0.0f, 5.0f, &Var25);
				}
				if (Global_30842[12])
				{
					Function_214(StackVal, StackVal, StackVal, StackVal, StackVal, Var25);
					PRINTNL();
				}
				Function_239(&Var25);
				Function_239(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_239(&Param1), Function_239(&Var25), StackVal) };
				VNORMALIZE(&vVar21);
				fVar24 = VDOT(&vVar21, &vVar18);
				fVar24 = (fVar24 * RAND_FLOAT_GAUSSIAN(0.5f, 0.5f));
				if (fVar24 < fVar34)
				{
					fVar34 = fVar24;
					bVar32 = bVar9;
				}
				RELEASE_CURVE(bVar47);
				bVar9++;
			}
		}
		else
		{
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_215() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_215() };
			Function_239(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_239(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_239(&Param1);
				Function_239(&Var35);
				Function_239(&Param1);
				Function_239(&Var41);
				if (StackVal > Function_143(StackVal, StackVal, StackVal, Function_143(StackVal, StackVal, StackVal, StackVal, Function_239(&Param1), Function_239(&Var35)), Function_239(&Param1), Function_239(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, Var35.f_16, 5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, Var41.f_16, 5.0f, &Var25);
				}
				Function_239(&Var25);
				Function_239(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_239(&Param1), Function_239(&Var25), StackVal) };
				VNORMALIZE(&vVar21);
				fVar24 = VDOT(&vVar21, &vVar18);
				fVar24 = (fVar24 * RAND_FLOAT_GAUSSIAN(0.25f, 1.0f));
				if (fVar24 < fVar34)
				{
					fVar34 = fVar24;
					bVar32 = bVar9;
				}
				RELEASE_CURVE(bVar47);
				bVar9++;
			}
		}
		iVar14 = 0;
		if (bVar32 == 4294967295)
		{
			UNK_0xDF93BD7C(bVar31);
			if (uParam9 || iVar14 > 5)
			{
				fVar12 = fVar13;
				fVar13 = (fVar13 + fParam8);
				iVar14++;
			}
			else
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_215();
			}
		}
		bVar10 = true;
	}
	iParam0->f_152 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar32);
	iParam0->f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(iParam0->f_152, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(bVar31, bVar32, &Var0);
	Function_239(&Var0);
	vVar48 = { StackVal, StackVal, Function_239(&Var0) };
	GET_CURVE_POINT(iParam0->f_152, 1.0f, &Var51, 0);
	GET_CURVE_POINT(iParam0->f_152, 0.0f, &Var57, 0);
	if (StackVal < Function_213(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_213(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var51, Param1), Var57, Param1))
	{
		iParam0->f_148 = 1;
		GET_CURVE_POINT(iParam0->f_152, 1.0f, &Var0, 0);
	}
	else
	{
		iParam0->f_148 = 4294967295;
		GET_CURVE_POINT(iParam0->f_152, 0.0f, &Var0, 0);
	}
	if (Global_30900[1])
	{
		bVar9 = false;
		bVar9 = false;
		while (bVar9 <= GET_NUM_POINTS_IN_CURVE_QUERY(bVar31))
		{
			GET_POINT_FROM_CURVE_QUERY(bVar31, bVar9, &Var25);
			Function_239(&Var25);
			vVar48 = { StackVal, StackVal, Function_239(&Var25) };
			bVar9++;
		}
		Function_239(&Var0);
		vVar48 = { StackVal, StackVal, Function_239(&Var0) };
	}
	Function_210(iParam0);
	UNK_0xDF93BD7C(bVar31);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_210(int iParam0) //Position: 0xA7C0 / 42944
{
	if (!Function_212(iParam0))
	{
		return;
	}
	if (!Function_211(StackVal))
	{
		return;
	}
	if (!SQUAD_IS_VALID(StackVal))
	{
		return;
	}
	if (!IS_OBJECT_VALID(iParam0->f_152))
	{
		return;
	}
	if (!iParam0->f_20 < 0)
	{
		return;
	}
	if (!GET_CURVE_TYPE(iParam0->f_152) != 4 && !GET_CURVE_TYPE(iParam0->f_152) != 5)
	{
		LOG_ERROR("Adding a traffic node with a bad pathtype. I thought we filtered this?");
		return;
	}
	return;
}

bool Function_211(int iParam0) //Position: 0xA864 / 43108
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

bool Function_212(bool bParam0) //Position: 0xA879 / 43129
{
	if (*bParam0 == 0)
	{
		return 0;
	}
	return 1;
}

float Function_213(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0xA889 / 43145
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_239(&bParam0);
	vVar0 = { StackVal, StackVal, Function_239(&bParam0) };
	Function_239(&bParam6);
	vVar3 = { StackVal, StackVal, Function_239(&bParam6) };
	return VDIST(vVar0, vVar3);
}

void Function_214(struct<17> Param0) //Position: 0xA8AE / 43182
{
	Function_239(&Param0);
	PRINTVECTOR(Function_239(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
}

struct<24> Function_215() //Position: 0xA8E3 / 43235
{
	struct<6> Var0;
	
	Var0.f_20 = 4294967295;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_216(bool bParam0) //Position: 0xA8F4 / 43252
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

var Function_217(int iParam0) //Position: 0xA934 / 43316
{
	if (IS_OBJECTSET_VALID(iParam0->f_48))
	{
		return 5.0f;
	}
	switch (StackVal)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			switch (iParam0->f_72)
			{
				case 0x00000005:
					return 2.5f;
					break;
				
				case 0x00000001:
					return 3.75f;
					break;
				
				case 0x00000002:
					return 6.25f;
					break;
				
				case 0x00000004:
					return 8.75f;
					break;
				
				case 0x00000003:
					return 12.5f;
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in NextTravelFreq");
			break;
	}
	return 6.25f;
}

int Function_218(int iParam0, int iParam1) //Position: 0xA9EC / 43500
{
	if (iParam1 != 0)
	{
		return iParam1;
	}
	switch (iParam0)
	{
		case 0x00000002:
			return 16;
			break;
		
		case 0x00000001:
			return 48;
			break;
	}
	return 48;
}

struct<24> Function_219(bool bParam0) //Position: 0xAA1C / 43548
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 0.0f, -50.0f, 0.0f };
	GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bParam0), vVar0, &vVar3);
	if (!Function_185(&vVar3, 50.0f, &vVar0, 10))
	{
		vVar0 = { StackVal, StackVal, vVar3 };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Function_220(StackVal, StackVal, vVar0);
}

struct<24> Function_220(vector3 vParam0) //Position: 0xAA5F / 43615
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

bool Function_221(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAA7F / 43647
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!Function_212(bParam0))
	{
		Function_226(bParam0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_178(StackVal));
	if (!SQUAD_GOAL_IS_VALID(bParam0->f_12))
	{
		SQUAD_GOALS_CLEAR(StackVal);
	}
	Function_239(bParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_239(bParam0 + 24) };
	vVar0 = { StackVal, StackVal, vVar3 };
	Function_225(StackVal, StackVal, vVar0, bParam0 + 24);
	if (bParam1)
	{
		bParam0->f_76 = Function_224(StackVal, bParam0->f_76, bParam0->f_80);
		if (!bParam0->f_96 || bParam0->f_72 != 4294967295)
		{
			bParam0->f_72 = bParam0->f_76;
		}
	}
	if (bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_223(Function_178(StackVal)), 0);
	}
	Function_222(bParam0);
	return 1;
}

void Function_222(int iParam0) //Position: 0xAB37 / 43831
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		return;
	}
	iVar1 = 2;
	if (Function_9())
	{
		iVar1 = 0;
	}
	if (iParam0->f_148 == 4294967295)
	{
		iVar0 = 1;
	}
	if (iParam0->f_108)
	{
		iVar1 = 1;
	}
	if (iParam0->f_116)
	{
		if (!iParam0->f_96 && GET_CURVE_TYPE(iParam0->f_152) == 5)
		{
			iParam0->f_116 = 0;
		}
	}
	else
	{
		if (GET_CURVE_TYPE(iParam0->f_152) == 5)
		{
			iParam0->f_116 = 1;
		}
		if (iParam0->f_96)
		{
			iParam0->f_116 = 1;
		}
	}
	if (!SQUAD_GOAL_IS_VALID(iParam0->f_12))
	{
		iParam0->f_12 = SQUAD_GOAL_ADD_FOLLOW_TRAFFIC_CURVE(StackVal, 0, 4294967295, iParam0->f_152, iParam0->f_72, iVar0, iVar1);
		if (iParam0->f_116)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 0);
		}
		if (iParam0->f_84 != 2)
		{
			if (!iParam0->f_104)
			{
				iParam0->f_84 = 2;
			}
			else
			{
				SQUAD_FOLLOW_TRAFFIC_CURVE_SET_TASK_PRIORITY(StackVal, iParam0->f_12, iParam0->f_84);
			}
		}
		if (StackVal && !iParam0->f_112 != 2)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 4, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 4, 0);
		}
		SQUAD_GOAL_ADD_FACTION_STATUS_WITHIN_GOAL(StackVal, 1, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(StackVal, 1);
	}
	else
	{
		if (!SQUAD_FOLLOW_TRAFFIC_CURVE_IS_CURVE_ALREADY_IN_LIST(StackVal, iParam0->f_12, iParam0->f_152, iVar0, 0))
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_ENQUEUE_CURVE(StackVal, iParam0->f_12, iParam0->f_152, iVar0);
		}
		if (iParam0->f_116)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 0);
		}
	}
	return;
}

int Function_223(int iParam0) //Position: 0xACD7 / 44247
{
	switch (iParam0)
	{
		case 0x00000002:
			return 64;
			break;
		
		case 0x00000001:
			return 96;
			break;
	}
	return 96;
}

int Function_224(int iParam0, int iParam1, int iParam2) //Position: 0xACFE / 44286
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_9())
	{
		if (iParam2 != 0)
		{
			return iParam2;
		}
		bVar0 = RAND_INT_RANGE(true, 10000);
		iParam1 = iParam1;
		switch (iParam0)
		{
			case 0x00000001:
				if (bVar0 <= 5000)
				{
					return 2;
				}
				if (bVar0 <= 4000)
				{
					return 4;
				}
				return 3;
				break;
			
			case 0x00000003:
				if (bVar0 <= 5000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				if (bVar0 <= 7500)
				{
					return 2;
				}
				return 4;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in WildSpeed");
				break;
		}
		return 2;
	}
	if (iParam2 != 0)
	{
		return iParam2;
	}
	bVar1 = RAND_INT_RANGE(true, 10000);
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 0x00000001:
			if (bVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000003:
			if (bVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		case 0x00000002:
			if (bVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in WildSpeed");
			break;
	}
	return 2;
}

void Function_225(vector3 vParam0) //Position: 0xAE3C / 44604
{
	*uParam3 = vParam0.x;
	uParam3->f_4 = vParam0.y;
	uParam3->f_8 = vParam0.z;
}

void Function_226(bool bParam0, int iParam1) //Position: 0xAE59 / 44633
{
	struct<5> Var0;
	char* cVar6[16];
	struct<13> Var10;
	
	if (!Global_30900[1] && iParam1)
	{
		return;
	}
	if (!Function_212(bParam0))
	{
		return;
	}
	strcpy(&cVar6, "TRAFFIC NODE", 16);
	switch (bParam0->f_72)
	{
		case 0x00000005:
			Var10 = 1.0f;
			Var10.f_4 = 0.0f;
			Var10.f_8 = 0.0f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000001:
			Var10 = 0.9f;
			Var10.f_4 = 0.55f;
			Var10.f_8 = 0.1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000002:
			Var10 = 0.9f;
			Var10.f_4 = 0.9f;
			Var10.f_8 = 0.1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000004:
			Var10 = 0.2f;
			Var10.f_4 = 0.8f;
			Var10.f_8 = 0.1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000003:
			Var10 = 0.1f;
			Var10.f_4 = 0.1f;
			Var10.f_8 = 1.0f;
			Var10.f_12 = 1.0f;
			break;
	}
	GET_POSITION(Function_178(StackVal), &Var0);
	vVar14 = { 0.0f, 1.0f, 0.0f };
	if (Function_154())
	{
		fVar17 = 0.0f;
		if (!Function_227(bParam0, &fVar17, 0))
		{
			if (fVar17 < 0.0f)
			{
				vVar14 = { 1.0f, 1.0f, 0.0f };
			}
			else
			{
				vVar14 = { 0.0f, 0.0f, 1.0f };
			}
		}
	}
	Var0.f_4 = (StackVal + 2.5f);
	Var0.f_4 = (StackVal + 1.0f);
	Var0.f_4 = (StackVal + 0.5f);
	switch (StackVal)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
	}
	Function_239(bParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_239(bParam0 + 24) };
	return;
}

bool Function_227(bool bParam0, var uParam1, bool bParam2) //Position: 0xAFD2 / 45010
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (StackVal || !SQUAD_IS_VALID(!Function_212(bParam0)))
	{
		*uParam1 = 0.0f;
		return 0;
	}
	bVar2 = true;
	iVar3 = SQUAD_GET_SIZE(StackVal);
	iVar4 = 0;
	bVar1 = false;
	while (bVar1 <= iVar3)
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar1);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (!NET_IS_OBJECT_LOCAL(bVar0))
			{
				iVar4++;
				bVar2 = false;
			}
		}
		bVar1++;
	}
	bVar5 = false;
	if (!bParam2)
	{
		bVar1 = false;
		if (IS_OBJECTSET_VALID(bParam0->f_180))
		{
			bVar5 = GET_OBJECTSET_SIZE(bParam0->f_180);
			bVar1 = false;
			while (bVar1 <= bVar5)
			{
				bVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bParam0->f_180));
				if (IS_ACTOR_VALID(bVar0))
				{
					if (!NET_IS_OBJECT_LOCAL(bVar0))
					{
						iVar4++;
						bVar2 = false;
					}
				}
				bVar1++;
			}
		}
	}
	if (bVar2)
	{
		*uParam1 = 1.0f;
	}
	else if (iVar4 <= (iVar3 + bVar5))
	{
		*uParam1 = 0.5f;
	}
	else
	{
		*uParam1 = 0.0f;
	}
	return bVar2;
}

void Function_228(bool bParam0, int iParam1) //Position: 0xB0B8 / 45240
{
	if (!Function_9())
	{
		Function_235(StackVal);
		if (Global_28842.f_80 != 0)
		{
			bParam0->f_72 = Global_28842.f_80;
			Function_234(StackVal, bParam0->f_72);
		}
		else if (Global_3403 || iParam1)
		{
			if (StackVal == 2)
			{
				bParam0->f_72 = 4;
			}
			else
			{
				bParam0->f_72 = 3;
			}
			Function_234(StackVal, bParam0->f_72);
			if (StackVal == 2)
			{
				Function_233(StackVal, 1);
			}
		}
		else if (StackVal || Function_201((Global_3404 || Function_231(131072))))
		{
			bParam0->f_72 = 4;
			Function_234(StackVal, bParam0->f_72);
			if (StackVal == 2)
			{
				Function_233(StackVal, 1);
			}
		}
		else if (bParam0->f_92)
		{
			bParam0->f_72 = Function_230(StackVal, bParam0->f_80);
			Function_234(StackVal, bParam0->f_72);
		}
		else if (bParam0->f_96)
		{
			bParam0->f_72 = Function_229(StackVal, bParam0->f_80);
			Function_234(StackVal, bParam0->f_72);
			if (StackVal == 2)
			{
				Function_233(StackVal, 0);
			}
		}
		else
		{
			bParam0->f_72 = bParam0->f_76;
			if (StackVal == 2)
			{
				Function_233(StackVal, 1);
			}
		}
	}
	else
	{
		Function_235(StackVal);
		if (Global_28842.f_80 != 0)
		{
			bParam0->f_72 = Global_28842.f_80;
			Function_234(StackVal, bParam0->f_72);
		}
		else if (StackVal || Function_201(Function_231(131072)))
		{
			bParam0->f_72 = 3;
			Function_234(StackVal, bParam0->f_72);
			if (StackVal == 2)
			{
				Function_233(StackVal, 1);
			}
		}
		else if (bParam0->f_92)
		{
			bParam0->f_72 = Function_230(StackVal, bParam0->f_80);
			Function_234(StackVal, bParam0->f_72);
		}
		else if (bParam0->f_96)
		{
			bParam0->f_72 = Function_229(StackVal, bParam0->f_80);
			Function_234(StackVal, bParam0->f_72);
			if (StackVal == 2)
			{
				Function_233(StackVal, 0);
			}
		}
		else
		{
			bParam0->f_72 = bParam0->f_76;
			if (StackVal == 2)
			{
				Function_233(StackVal, 1);
			}
		}
	}
	return;
}

int Function_229(bool bParam0, int iParam1) //Position: 0xB2A0 / 45728
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_9())
	{
		if (iParam1 != 0)
		{
			return iParam1;
		}
		bVar0 = RAND_INT_RANGE(true, 10000);
		switch (bParam0)
		{
			case 0x00000001:
				if (bVar0 <= 9000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				return 1;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in TownSpeed");
				break;
		}
		return 1;
	}
	if (iParam1 != 0)
	{
		return iParam1;
	}
	bVar1 = RAND_INT_RANGE(true, 10000);
	switch (bParam0)
	{
		case 0x00000001:
			if (bVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (bVar1 <= 9000)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in TownSpeed");
			break;
	}
	return 2;
}

int Function_230(int iParam0, bool bParam1) //Position: 0xB38C / 45964
{
	if (!Function_9())
	{
		if (bParam1 != 0)
		{
			return bParam1;
		}
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000003:
				return 1;
				break;
			
			case 0x00000002:
				return 5;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in PlayerNearSpeed");
				break;
		}
		return 5;
	}
	if (bParam1 != 0)
	{
		return bParam1;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000003:
			return 4;
			break;
		
		case 0x00000002:
			return 2;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in PlayerNearSpeed");
			break;
	}
	return 2;
}

bool Function_231(int iParam0) //Position: 0xB457 / 46167
{
	return Function_232(&Global_28842, iParam0);
}

int Function_232(var uParam0, int iParam1) //Position: 0xB465 / 46181
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_233(bool bParam0, int iParam1) //Position: 0xB481 / 46209
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_234(bool bParam0, int iParam1) //Position: 0xB4A9 / 46249
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		TASK_OVERRIDE_SET_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_235(bool bParam0) //Position: 0xB4D1 / 46289
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		TASK_OVERRIDE_CLEAR_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

bool Function_236(bool bParam0) //Position: 0xB4F7 / 46327
{
	return ((((StackVal && (StackVal && *bParam0 != 0.0f != 0.0f) != 0.0f) && bParam0->f_12 != 0.0f) && bParam0->f_16 != 0.0f) && bParam0->f_20 != 4294967295);
}

struct<24> Function_237(int iParam0, struct<6> Param1, bool bParam7, vector3 vParam8) //Position: 0xB525 / 46373
{
	bool bVar0;
	bool bVar6;
	struct<6> Var12;
	
	if (!IS_OBJECT_VALID(bParam7))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
	}
	iParam0->f_148 = Function_238(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam7, Param1, vParam8);
	if (iParam0->f_148 >= 0)
	{
		GET_CURVE_POINT(bParam7, 1.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, 1.0f, &Param1, &bVar0);
		Function_239(&bVar0);
		Function_239(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_239(&Param1), Function_239(&bVar0), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	else
	{
		GET_CURVE_POINT(bParam7, 0.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, -1.0f, &Param1, &bVar6);
		Function_239(&bVar6);
		Function_239(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_239(&Param1), Function_239(&bVar6), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
}

int Function_238(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0xB5C3 / 46531
{
	bool bVar0;
	bool bVar6;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	float fVar19;
	
	UNK_0x19D652F9(bParam0, 1.0f, &bParam1, &bVar0);
	UNK_0x19D652F9(bParam0, -1.0f, &bParam1, &bVar6);
	Function_239(&bVar0);
	Function_239(&bParam1);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_239(&bParam1), Function_239(&bVar0), StackVal) };
	fVar18 = VDOT(&uParam7, &vVar12);
	Function_239(&bVar6);
	Function_239(&bParam1);
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_239(&bParam1), Function_239(&bVar6), StackVal) };
	fVar19 = VDOT(&uParam7, &vVar15);
	if (fVar19 > fVar18)
	{
		return 1;
	}
	return 4294967295;
}

vector3 Function_239(bool bParam0) //Position: 0xB61C / 46620
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

void Function_240(int iParam0, vector3 vParam1, struct<5> Param4, var uParam9) //Position: 0xB63B / 46651
{
	*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_220(StackVal, StackVal, vParam1) };
	(iParam0 + 24)->f_12 = Param4;
	(iParam0 + 24)->f_16 = StackVal;
	iParam0->f_152 = uParam7;
	iParam0->f_112 = uParam9;
	iParam0->f_116 = uParam8;
	Function_241(iParam0);
	iParam0->f_20 = SQUAD_GET_SIZE(StackVal);
	Function_210(iParam0);
}

void Function_241(var uParam0) //Position: 0xB689 / 46729
{
	struct<2> Var0;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		Function_242();
		Var0 = { StackVal, Function_242() };
		uParam0->f_8 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_28841, &Var0));
	}
	*uParam0 = 1;
	return;
}

struct<8> Function_242() //Position: 0xB6B4 / 46772
{
	char* cVar0[8];
	
	strcpy(&cVar0, "", 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	return StackVal, cVar0;
}

void Function_243(int iParam0, vector3 vParam1) //Position: 0xB70B / 46859
{
	*(iParam0 + 168) = { StackVal, StackVal, vParam1 };
}

bool Function_244(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xB71D / 46877
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_181(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_278(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_276(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_245(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_7("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (*uParam2 >= 20)
		{
			*uParam3 = 1;
			Global_26153++;
		}
		*uParam2++;
		*uParam1 = 1000;
		*(iParam0 + 8) = { 0.0f, 0.0f, 0.0f };
		return 0;
	}
	if (iParam0->f_32)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_3399 = 0;
		Function_7("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_5(iParam0->f_56, 0, 1, 0, 0))
		{
			*uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (iParam0->f_52 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_181("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_278(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_276(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_245(int iParam0) //Position: 0xBAAF / 47791
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	bool bVar14;
	struct<17> Var15;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar9);
	switch (iParam0->f_64)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				if (IS_LAYOUTREF_VALID(Global_30616))
				{
					iParam0->f_4 = CREATE_OBJECT_ITERATOR(Global_30616);
				}
				else
				{
					return 0;
				}
			}
			Function_275(iParam0 + 4);
			switch ((iParam0 + 64 + 24)->f_20)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(StackVal, Global_30616);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if (StackVal < 0.0f)
			{
				vVar3 = { 0.0f, 0.0f, Function_47(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_47(1));
			}
			if (!STRINGS_ARE_EQUAL(iParam0 + 64 + 24, ""))
			{
				ITERATE_ON_PARTIAL_NAME(StackVal, iParam0 + 64 + 24);
			}
			if (!4294967295 != (iParam0 + 64 + 24)->f_12)
			{
				ITERATE_ON_OBJECT_TYPE(StackVal, (iParam0 + 64 + 24)->f_12);
			}
			if (GET_NUM_ITERATOR_MATCHES(StackVal) >= 0)
			{
				if (StackVal & 512 == 0 || iParam0->f_36 != 1)
				{
					if ((iParam0 + 64 + 24)->f_16 == 0)
					{
						bVar0 = Function_274(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_273(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_271(StackVal, StackVal, StackVal, vVar9, Function_272());
				}
				else
				{
					bVar0 = Function_270(StackVal, StackVal, StackVal, vVar9, Function_272(), "locflag", (iParam0 + 64 + 24)->f_16);
				}
				if (IS_OBJECT_VALID(bVar0))
				{
					GET_OBJECT_POSITION(bVar0, iParam0 + 8);
					GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
					iParam0->f_48 = bVar0;
					DESTROY_ITERATOR(StackVal);
				}
				else
				{
					DESTROY_ITERATOR(StackVal);
					return 0;
				}
			}
			DESTROY_ITERATOR(StackVal);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				iParam0->f_4 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_275(iParam0 + 4);
			ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
			fVar13 = 130.0f;
			fVar12 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
			ITERATE_IN_SPHERE(StackVal, StackVal, vVar3);
			bVar1 = START_OBJECT_ITERATOR(StackVal);
			while (IS_OBJECT_VALID(bVar1) && !IS_OBJECT_VALID(bVar0))
			{
				if (DECOR_CHECK_EXIST(bVar1, "regid"))
				{
					bVar14 = DECOR_GET_INT(bVar1, "regid");
					if (Function_269(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_47(1))
								{
									bVar0 = bVar1;
								}
							}
						}
					}
				}
				bVar1 = OBJECT_ITERATOR_NEXT(StackVal);
			}
			if (IS_OBJECT_VALID(bVar0))
			{
				GET_OBJECT_POSITION(bVar0, iParam0 + 8);
				Function_185(iParam0 + 8, 99.0f, iParam0 + 8, 10);
				GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
				iParam0->f_48 = DECOR_GET_INT(bVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(StackVal);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_3386 && Global_3388) && ARE_CURVES_IN_RANGE(48, vVar9, 100.0f)) && 8) != 8)
			{
				vVar6 = { 0.0f, 0.0f, -10.0f };
				ROTATE_VECTOR_XZ(&vVar6, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_268(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_268(&vVar9, &vVar6) };
				if (!Function_108(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_48(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_265(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_261(iParam0);
			}
			if (iVar2 == 1)
			{
				if ((iParam0 + 64)->f_128 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(iParam0 + 8)))
							{
								return 0;
							}
						}
					}
				}
				if ((iParam0 + 64)->f_128 == 5)
				{
				}
				if (iParam0->f_60 == 2)
				{
					if (!Function_260(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_259(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_10(StackVal, 131072))
				{
					if (StackVal || Function_258(StackVal, Function_258(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_257(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_252(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar13 = 120.0f;
				fVar12 = 150.0f;
				vVar3 = { 0.0f, 0.0f, ((fVar13 + fVar12) * -0.5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				bVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_218((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				bVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_218((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) >= 0)
			{
				bVar21 = RAND_INT_RANGE(false, (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(bVar23, bVar21, &Var15);
				Function_239(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_239(&Var15) };
				iParam0->f_20 = Var15.f_12;
				(iParam0 + 20)->f_4 = Var15.f_16;
				iParam0->f_48 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar23, bVar21);
				UNK_0xDF93BD7C(bVar23);
			}
			else
			{
				UNK_0xDF93BD7C(bVar23);
				return 0;
			}
			if (iParam0->f_60 == 2)
			{
				if (!Function_260(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_259(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_260(StackVal, Function_259(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_10(StackVal, 131072))
			{
				if (StackVal || Function_258(StackVal, Function_258(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_252(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_250((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_247(StackVal, Global_29004, Global_29005, Global_29006, 1);
					if (IS_PERS_CHAR_VALID(bVar24))
					{
						if (IS_PERS_CHAR_ALIVE(bVar24))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar22 = 0;
					while (StackVal <= (StackVal - iVar22) + 1)
					{
						bVar24 = Function_247(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
						if (IS_PERS_CHAR_VALID(bVar24))
						{
							if (IS_PERS_CHAR_ALIVE(bVar24))
							{
								iVar25++;
							}
						}
						iVar22++;
					}
					if (iVar25 >= 0)
					{
						return 0;
					}
					break;
				
				case 0x00000003:
					if (!IS_ACTOR_IN_VOLUME(StackVal, GET_PLAYER_ACTOR(0)))
					{
						return 0;
					}
					break;
				
				case 0x00000004:
					iParam0->f_48 = StackVal;
					break;
				
				default:
					LOG_ERROR("TRIGGER_NONE event type??");
					return 0;
					break;
			}
			break;
		
		default:
			LOG_ERROR("AMB_EVENT type not defined for BEAT_SET_LAUNCH_PARAMS_FOR_BEAT");
			return 0;
			break;
	}
	if (Function_246(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_246(vector3 vParam0) //Position: 0xC2DA / 49882
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_25964))
	{
		if (IS_POINT_IN_VOLUME(vParam0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_25964))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_247(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xC30F / 49935
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = bParam1;
	bVar1 = bParam2;
	PRINTSTRING("RC_REFERENCE_GLOBAL ");
	PRINTINT(bParam0);
	PRINTSTRING("-");
	PRINTINT(bVar0);
	PRINTSTRING("-");
	PRINTINT(bVar1);
	PRINTSTRING(" ");
	PRINTINT(bParam3);
	PRINTNL();
	if (!bParam4)
	{
		switch (bParam0)
		{
			case 0x00000000:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_248(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_248(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_248(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_248(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_248(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_248(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_248(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_248(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_248(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_248(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_248(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_248(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_248(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_248(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_248(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_248(&Global_6704, &Global_7790, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000001:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_248(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_248(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_248(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_248(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_248(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_248(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_248(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_248(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_248(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_248(&Global_7027, &Global_8268, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000002:
				return "";
				break;
			
			default:
				return "";
				break;
		}
	}
	else if (bVar1 == Global_30640[0])
	{
		return Function_248(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_248(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_248(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_248(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_248(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_248(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_248(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_248(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_248(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_248(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_248(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_248(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_248(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_248(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_248(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_248(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_248(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_248(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_248(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_248(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_248(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_248(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_248(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_248(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_248(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_248(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_248(var uParam0, var uParam1, bool bParam2) //Position: 0xC924 / 51492
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_249(uParam0[iVar02], 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
	return StackVal;
}

bool Function_249(var uParam0, int iParam1) //Position: 0xC976 / 51574
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_250(int iParam0) //Position: 0xC992 / 51602
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 25);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	if (iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(bVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(bVar2))
		{
			if (Function_251(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_251(bool bParam0) //Position: 0xC9ED / 51693
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_178(bParam0);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(bVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(bVar0))
	{
		return 1;
	}
	return 4294967295;
}

bool Function_252(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0xCA25 / 51749
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
	Function_254(4294967295);
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
			fVar5 = *fParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_253(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_253(var uParam0, int iParam1) //Position: 0xCAF5 / 51957
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

int Function_254(bool bParam0) //Position: 0xCB13 / 51987
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
						Function_256(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_255(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_256(iVar0);
						}
					}
					else if (Function_255(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_256(iVar0);
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
			Function_256(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_255(bool bParam0, vector3 vParam1) //Position: 0xCC74 / 52340
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_58(bParam0);
		vVar0 = { StackVal, StackVal, Function_58(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_256(int iParam0) //Position: 0xCCEE / 52462
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

bool Function_257(vector3 vParam0) //Position: 0xCD4F / 52559
{
	struct<9> Var0;
	
	iVar7 = 0;
	while (iVar7 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(StackVal) == 9)
				{
					GET_VOLUME_SCALE(StackVal, &vVar0);
					GET_VOLUME_CENTER(StackVal, &vVar3);
					bVar6 = VDIST(vParam0, vVar3);
					if ((bVar6 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar7++;
	}
	return 0;
}

int Function_258(vector3 vParam0) //Position: 0xCDF0 / 52720
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal == 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_259(vector3 vParam0) //Position: 0xCE3C / 52796
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || StackVal != 3 != 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_260(vector3 vParam0) //Position: 0xCE95 / 52885
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6) != 7)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int Function_261(int iParam0) //Position: 0xCF12 / 53010
{
	float fVar0;
	bool bVar1;
	
	Function_48(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_264(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_263(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_262(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_262(struct<33> Param0) //Position: 0xD0AD / 53421
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTSTRING("n, Radius ");
				PRINTFLOAT(Param0.f_20);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(StackVal, Param0.f_20, 0);
		}
	}
	if (!Param0.f_12 != 4294967295 && !Param0.f_12 != 0)
	{
		AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(Param0.f_12, Param0.f_24, 1);
	}
	if (!Param0.f_16 != 4294967295 && !Param0.f_16 != 0)
	{
		if (Global_30842[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1.43493E-42f, 1);
}

void Function_263(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0xD1D9 / 53721
{
	if (Param0 == 0)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 1)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 2)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 3)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
}

void Function_264(bool bParam0) //Position: 0xD22A / 53802
{
	if (bParam0 < 0.1f)
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

int Function_265(int iParam0, vector3 vParam1) //Position: 0xD26E / 53870
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_267();
	Function_264(0);
	Function_266(0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_263(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_262(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_266(bool bParam0) //Position: 0xD410 / 54288
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

void Function_267() //Position: 0xD4C3 / 54467
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_268(var uParam0, int iParam1) //Position: 0xD4D2 / 54482
{
	var uVar0;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	bool bVar25;
	bool bVar31;
	
	bVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(bVar10) < 0)
	{
		UNK_0xDF93BD7C(bVar10);
		vVar11 = { 0.0f, 0.0f, 0.0f };
		return StackVal, StackVal, vVar11;
	}
	GET_POINT_FROM_CURVE_QUERY(bVar10, false, &uVar0);
	bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar10, false);
	if (IS_OBJECT_VALID(bVar6))
	{
		vVar16 = { StackVal, StackVal, *iParam1 };
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &bVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &bVar31);
		Function_239(&bVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_239(&bVar25), StackVal) };
		Function_239(&bVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_239(&bVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_48(&fVar7, &fVar8);
		fVar9 = ((fVar7 + fVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(bVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &bVar31);
			Function_239(&bVar31);
			vVar11 = { StackVal, StackVal, Function_239(&bVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &bVar25);
			Function_239(&bVar25);
			vVar11 = { StackVal, StackVal, Function_239(&bVar25) };
		}
	}
	UNK_0xDF93BD7C(bVar10);
	return StackVal, StackVal, vVar11;
}

bool Function_269(int iParam0) //Position: 0xD5DF / 54751
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_270(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0xD5F5 / 54773
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_252(&vVar5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							bVar1 = bVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_271(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xD69D / 54941
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	vector3 vVar5;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_252(&vVar5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					bVar1 = bVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_272() //Position: 0xD726 / 55078
{
	float fVar0;
	var uVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_48(&fVar0, &uVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

var Function_273(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0xD757 / 55127
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
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
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
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_274(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xD7EC / 55276
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

int Function_275(int iParam0) //Position: 0xD869 / 55401
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_302());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_302());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_276(bool bParam0, int iParam1) //Position: 0xD89A / 55450
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*bParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*bParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*bParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*bParam0, &uVar1);
	Function_254(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_277(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_277(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xD9FB / 55803
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_181("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_278(bool bParam0, vector3 vParam1) //Position: 0xDA96 / 55958
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_279(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_279(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xDAC6 / 56006
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

bool Function_280(int iParam0) //Position: 0xDAE9 / 56041
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_285();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_284(iParam0[iVar03], 8);
		}
		else if (Function_283())
		{
			iVar1 = 1;
			Function_284(iParam0[iVar03], 8);
		}
		Function_284(iParam0[iVar03], 16);
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
				Function_284(iParam0[iVar03], 1);
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
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_284(iParam0[iVar03], 2);
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
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_284(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_284(iParam0[iVar03], 2);
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
	Function_281();
	return 1;
}

void Function_281() //Position: 0xDE64 / 56932
{
	if (!Function_282(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_282(int iParam0) //Position: 0xDEA4 / 56996
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_283() //Position: 0xDEC0 / 57024
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

void Function_284(var uParam0, int iParam1) //Position: 0xDEEB / 57067
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_285() //Position: 0xDEFC / 57084
{
	if (!Function_282(128))
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

void Function_286(bool bParam0) //Position: 0xDF3E / 57150
{
	if (IS_ACTOR_VALID(*bParam0))
	{
		SET_DRAW_ACTOR(*bParam0, true);
		CLEAR_ACTOR_MAX_SPEED(*bParam0);
		if (IS_ACTOR_ANIMAL(*bParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*bParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*bParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(*bParam0, 1);
		}
	}
	return;
}

void Function_287(bool bParam0, int iParam1) //Position: 0xDF80 / 57216
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_286(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_288(int iParam0) //Position: 0xDFAD / 57261
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, false);
		SET_ACTOR_MAX_SPEED(*iParam0, 5);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(*iParam0, 0);
		}
	}
	return;
}

void Function_289(var uParam0, int iParam1) //Position: 0xDFF0 / 57328
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_288(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_290(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xE01D / 57373
{
	if (Global_63096 && !GET_THIS_SCRIPT_ID() != Global_63116)
	{
		*uParam3 = 0;
		if (!*uParam0)
		{
			*uParam0 = 1;
			if ((*uParam1 < 2 && *uParam1 > 5) && uParam4)
			{
				*uParam2 = *uParam1;
				*uParam1 = 7;
			}
			else
			{
				*uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (*uParam0)
	{
		*uParam0 = 0;
		*uParam1 = *uParam2;
		return 1;
	}
	return 0;
}

void Function_291(var uParam0, int iParam1) //Position: 0xE085 / 57477
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION((*uParam0)[iVar0]);
		iVar0++;
	}
	return;
}

bool Function_292(int iParam0) //Position: 0xE0A7 / 57511
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_3403;
}

var Function_293(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xE11D / 57629
{
	return Function_294(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_294(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xE131 / 57649
{
	return Function_192(bParam0, bParam1, bParam2, bParam3, bParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_295(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xE14A / 57674
{
	return Function_189(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

int Function_296(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xE163 / 57699
{
	int iVar0;
	bool bVar1[40];
	int iVar42;
	bool bVar43;
	int iVar44;
	var uVar45;
	bool bVar46;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (iParam1 > 1311)
	{
		return 4294967295;
	}
	if (iParam2 > 4294967295 || iParam2 <= 1311)
	{
		return 4294967295;
	}
	iVar0 = (iParam1 - iParam0) + 1;
	if (iVar0 < 40 || iVar0 > 1)
	{
		LOG_ERROR("GET_RANDOM_ACTORENUM_FILTERED passed a range with more than 40 enums or less than 1");
		return 4294967295;
	}
	iVar44 = 0;
	iVar42 = 0;
	while (iVar42 <= iVar0)
	{
		bVar43 = (iParam0 + iVar42);
		if (((bVar43 == iParam2 && bVar43 == iParam3) && bVar43 == iParam4) && !STRING_CONTAINS_STRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar43), "_cs"))
		{
			bVar1[iVar44] = bVar43;
			iVar44++;
		}
		iVar42++;
	}
	if (iVar44 == 0)
	{
		return 4294967295;
	}
	bVar46 = RAND_INT_RANGE(false, (iVar44 - 1));
	uVar45 = bVar1[bVar46];
	return uVar45;
}

var Function_297(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xE279 / 57977
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_4(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_284(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_284(bParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*bParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_298(int iParam0, int iParam1) //Position: 0xE349 / 58185
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_299(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xE35F / 58207
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_300(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_284(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_300(var uParam0, int iParam1, int iParam2) //Position: 0xE397 / 58263
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_284(uParam0[iVar03], 4);
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

bool Function_301(bool bParam0) //Position: 0xE45B / 58459
{
	bool bVar0;
	
	switch (bParam0)
	{
		case 0x00000001:
			bVar0 = IS_POPSET_VALID(Global_30750[0]);
			break;
		
		case 0x00000002:
			bVar0 = IS_POPSET_VALID(Global_30750[1]);
			break;
		
		case 0x00000004:
			bVar0 = IS_POPSET_VALID(Global_30750[2]);
			break;
		
		case 0x00000008:
			bVar0 = IS_POPSET_VALID(Global_30750[3]);
			break;
		
		case 0x00000010:
			bVar0 = IS_POPSET_VALID(Global_30750[4]);
			break;
		
		case 0x00000020:
			bVar0 = IS_POPSET_VALID(Global_30750[5]);
			break;
		
		case 0x00000040:
			bVar0 = IS_POPSET_VALID(Global_30750[6]);
			break;
		
		case 0x00000080:
			bVar0 = IS_POPSET_VALID(Global_30750[7]);
			break;
		
		case 0x00000100:
			bVar0 = IS_POPSET_VALID(Global_30750[8]);
			break;
		
		case 0x00000200:
			bVar0 = IS_POPSET_VALID(Global_30750[9]);
			break;
		
		case 0x00000400:
			bVar0 = IS_POPSET_VALID(Global_30750[10]);
			break;
		
		case 0x00000800:
			bVar0 = IS_POPSET_VALID(Global_30750[11]);
			break;
		
		case 0x00001000:
			bVar0 = IS_POPSET_VALID(Global_30750[12]);
			break;
		
		case 0x00002000:
			bVar0 = IS_POPSET_VALID(Global_30750[13]);
			break;
		
		case 0x40000000:
			bVar0 = false;
			break;
		
		default:
			LOG_ERROR("Unhandled case in IS_POPSET_TYPES_FLAG_VALID.");
			bVar0 = false;
			break;
	}
	return bVar0;
}

bool Function_302() //Position: 0xE5CD / 58829
{
	var uVar0;
	
	return uVar0;
}

