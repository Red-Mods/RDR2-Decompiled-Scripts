//Decompiled with MagicRDR v1.0
//Function Count : 222
//Statics Count : 117
//Natives Count : 343
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
	float fLocal_20 = 0.0f;
	int iLocal_21 = 0;
	float fLocal_22 = 0.0f;
	float fLocal_23 = 0.0f;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	bool bLocal_41 = false;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = false;
	bool bLocal_49 = false;
	float fLocal_50 = 0.0f;
	vector3 vLocal_51 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_54 = false;
	char* cLocal_55[16] = "";
	float fLocal_59 = 0.0f;
	var uLocal_60 = 0;
	float fLocal_61 = 0.0f;
	bool bLocal_62 = false;
	char* cLocal_63 = NULL;
	bool bLocal_64 = false;
	int iLocal_65 = 0;
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3[3];
	int iVar7[3];
	bool bVar11;
	int iVar46;
	var uVar47;
	bool bVar48;
	int iVar49;
	int iVar50;
	vector3 vVar51;
	vector3 vVar54;
	int iVar57;
	int iVar58;
	int iVar59;
	bool bVar60;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_21 = 155;
	fLocal_22 = 0.0f;
	fLocal_23 = 0.0f;
	iLocal_24 = 0;
	iLocal_25 = 0;
	iLocal_33 = 1;
	bLocal_34 = true;
	bLocal_36 = false;
	iLocal_38 = 1;
	iLocal_39 = 0;
	iLocal_40 = 0;
	bLocal_41 = false;
	iLocal_42 = 0;
	iLocal_43 = 0;
	iLocal_44 = 0;
	iLocal_45 = 0;
	iLocal_46 = 0;
	iLocal_47 = 0;
	bLocal_48 = false;
	bLocal_49 = false;
	strcpy(&cLocal_55, "thief", 16);
	fLocal_59 = 9999.0f;
	fLocal_61 = 0.0f;
	bLocal_62 = false;
	bLocal_64 = false;
	iLocal_65 = 0;
	iVar0 = 0;
	uVar1 = Function_208(Global_29005, 0x42a00000, 0x469c4000, 0, 0, 4294967295);
	bVar2 = CREATE_LAYOUT(Function_207());
	bVar11 = 11;
	Function_206(&uLocal_26, 0.0f);
	iVar46 = 0;
	uVar47 = Function_204(1, 1, 1, 0, 0);
	switch (Global_29004)
	{
		case 0x00000000:
			if (Function_203(3, 2) == 0)
			{
				iVar7[0] = 50;
			}
			else
			{
				iVar7[0] = 167;
			}
			break;
		
		case 0x00000001:
			iVar7[0] = 304;
			break;
		
		case 0x00000002:
			if (Function_203(3, 2) == 0)
			{
				iVar7[0] = 226;
			}
			else
			{
				iVar7[0] = 227;
			}
			break;
	}
	if (!IS_POPSET_VALID(Global_30750[6]) || !IS_POPSET_VALID(Global_30750[0]))
	{
		iVar0 = 5;
	}
	else
	{
		iVar7[1] = Function_201(Global_30750[0], 1, 2, 1);
		iVar7[2] = Function_191(64, 0, 4, 23, 1);
		if ((iVar7[0] != 4294967295 || iVar7[1] != 4294967295) || iVar7[2] != 4294967295)
		{
			iVar0 = 5;
		}
		else
		{
			Function_190(&bVar11, iVar7[0], 3, 0);
			Function_190(&bVar11, iVar7[1], 3, 0);
			Function_190(&bVar11, iVar7[2], 3, 0);
			Function_188(&bVar11, "pointing", 5, 0);
			Function_188(&bVar11, "custom/pointing", 8, 0);
			Function_188(&bVar11, "thanks", 5, 0);
			Function_188(&bVar11, "custom/thanks", 8, 0);
			Function_188(&bVar11, "nthank_you", 5, 0);
			Function_188(&bVar11, "custom/thank_you", 8, 0);
			Function_188(&bVar11, "Stolen_Pleading_Panic_Return", 5, 0);
			Function_188(&bVar11, "custom/Stolen_Pleading_Panic_Return", 8, 0);
		}
	}
	if (iVar0 != 5)
	{
		Function_187(&iVar7, 2);
	}
	bVar48 = false;
	iVar49 = 0;
	iVar50 = 0;
	vVar51.x = 0.2f;
	iVar58 = 0;
	if (Global_3382 == 1)
	{
		iVar0 = 5;
	}
	iVar59 = 0;
	bVar60 = false;
	while (!IS_EXITFLAG_SET())
	{
		iVar57 = 600;
		if (Function_186(&bVar60, &iVar0, &iVar59, &iVar57, bVar48))
		{
			if (bVar60)
			{
				Function_184(&bVar3, 4294967295);
			}
			else
			{
				Function_182(&bVar3, 4294967295);
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (Function_176(&bVar11))
				{
					iVar0 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_135(&ScriptParam_0, &iVar57, &iVar50, &iVar49, 1))
				{
					iVar0 = 2;
				}
				else if (iVar49 == 1)
				{
					iVar0 = 5;
				}
				break;
			
			case 0x00000002:
				Function_134(&iLocal_24, 2);
				Function_134(&iLocal_24, 16);
				if (!Function_128(ScriptParam_0.f_56, 0, &iLocal_39, &iVar58, 0, 1, 1, 1))
				{
					iVar0 = 5;
					iVar57 = 0;
					break;
				}
				if (Function_125(StackVal, StackVal, *(&ScriptParam_0 + 8), 1.0f, Function_126(), 1, 1, 0))
				{
					PRINTVECTOR(*(&ScriptParam_0 + 8));
					PRINTNL();
					PRINTVECTOR(Global_34574);
					PRINTNL();
					iVar0 = 5;
					iVar57 = 0;
					break;
				}
				if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) > Function_126())
				{
					PRINTVECTOR(*(&ScriptParam_0 + 8));
					PRINTNL();
					PRINTVECTOR(Global_34574);
					PRINTNL();
					iVar0 = 5;
					iVar57 = 0;
					break;
				}
				else
				{
					bVar3[0] = Function_123(StackVal, StackVal, StackVal, StackVal, bVar2, &cLocal_55, iVar7[0], Function_207(), iVar7[2], *(&ScriptParam_0 + 8), *(&ScriptParam_0 + 20));
					Function_119(&(bVar3[0]), 0x44898000);
					SET_ACTOR_UPDATE_PRIORITY(bVar3[0], false);
					SET_ACTOR_CAN_PLAY_GESTURES(bVar3[0], false);
					Function_118(bVar3[0]);
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar3[0]);
					vVar51.x = (vVar51.x + vVar51.x);
					vVar54 = { StackVal, StackVal, Vector(*(&ScriptParam_0 + 20), StackVal, StackVal) + Vector(0.0f, 90.0f, 0.0f) };
					bVar3[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, StackVal, Vector(Function_207(), bVar2, StackVal) + Vector(vVar51, *(&ScriptParam_0 + 8), iVar7[1]), vVar54);
					SET_ACTOR_CAN_PLAY_GESTURES(bVar3[1], false);
					DECOR_SET_BOOL(bVar3[1], "criminal", 1);
					Function_117(bVar3[1], 0);
					TASK_OVERRIDE_SET_MOVETYPE(bVar3[1], 4);
					bVar3[2] = GET_MOUNT(bVar3[0]);
					SET_ACTOR_CAN_BE_HARDLOCKED(bVar3[2], 0);
					MEMORY_CONSIDER_AS_ENEMY(Global_34573, bVar3[1]);
					MEMORY_CONSIDER_AS_ENEMY(bVar3[1], Global_34573);
					Function_119(&(bVar3[1]), 0x44898000);
					TASK_STAND_STILL(bVar3[2], -1.0f, 0, 0);
					TASK_PRIORITY_SET(bVar3[2], 0);
					TASK_MOUNT(bVar3[1], bVar3[2], 1, 1, 2, 2147483647);
					SET_ACTOR_UPDATE_PRIORITY(bVar3[1], false);
					TASK_PRIORITY_SET(bVar3[1], 1);
					Function_116(bVar3[1]);
					Function_116(bVar3[2]);
					AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar3[0], 0);
					UNK_0x99AFD2D1(bVar3[0], 1, 1);
					iVar0 = 3;
					iVar57 = 0;
				}
				break;
			
			case 0x00000003:
				Function_103(&bVar3, 3, &bVar48, ScriptParam_0.f_56, 100, 0x42a00000, 1);
				if (!Function_128(ScriptParam_0.f_56, bVar3[0], &iLocal_39, &iVar58, iLocal_46, 1, 1, 1))
				{
					if (Global_3404 || Global_3403)
					{
						Function_101("crimeGnrcFail01", iLocal_46, 1);
						bLocal_48 = true;
						TASK_FLEE_ACTOR(bVar3[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
						Function_100(bVar3[0]);
					}
					iVar0 = 5;
					iVar57 = 0;
					break;
				}
				if (iLocal_46)
				{
					if (Function_98(bVar3[1], 1) && bLocal_34)
					{
						if (!IS_ACTOR_RIDING(bVar3[1]))
						{
							ADD_BLIP_FOR_ACTOR(bVar3[1], 322, 0, 2, 0);
							bLocal_34 = false;
						}
					}
				}
				if ((!IS_ACTOR_MOUNTED(bVar3[2]) && iVar46 > 7) && iVar46 < 0)
				{
					if (Function_98(bVar3[0], 0))
					{
						RESET_ANIM_SET_FOR_ACTOR(bVar3[0], 1);
						if (Function_97(bVar3[0], bVar3[2]) > 20.0f || !bLocal_41)
						{
							if (Function_97(Global_34573, bVar3[0]) < 50.0f)
							{
								iVar46 = 12;
							}
							else
							{
								iVar46 = 11;
							}
						}
					}
				}
				if (IS_ACTOR_VALID(bVar3[2]))
				{
					if (!IS_ACTOR_ALIVE(bVar3[2]))
					{
						Function_101("crimeHorseThief09", iLocal_46, 1);
						iVar0 = 5;
						iVar57 = 0;
						break;
					}
					else if (!Function_96(bVar3[2], Global_34573, fLocal_59))
					{
						if (iLocal_46)
						{
							if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bVar3[2], 1065353216, 1117126656, 1, 1, 0) || !GET_RIDER(bVar3[2]) != bVar3[1])
							{
								Function_101("crimeHorseThief11", iLocal_46, 1);
							}
							else
							{
								Function_101("crimeHorseThief08", iLocal_46, 1);
							}
							if (Function_98(bVar3[0], 0))
							{
								Function_100(bVar3[0]);
								AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3[0], Global_34573, -1.0f, 1);
								uLocal_60 = TASK_SEQUENCE_OPEN();
								TASK_PRIORITY_SET(bVar3[0], 2);
								TASK_TAUNT_ACTOR_IN_PLACE(0, Global_34573, 5.0f);
								TASK_WANDER(false, 3212836864);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bVar3[0], uLocal_60);
								TASK_SEQUENCE_RELEASE(uLocal_60, 1);
								TASK_PRIORITY_SET(bVar3[0], 2);
								bLocal_48 = true;
							}
						}
						iVar0 = 5;
						iVar57 = 0;
						break;
					}
				}
				if (Function_98(bVar3[0], 0))
				{
					if (iVar46 >= 6)
					{
						if (IS_ACTOR_VALID(bVar3[1]) && Function_97(Global_34573, bVar3[0]) > 30.0f)
						{
							Function_94(bVar3[1]);
							TASK_FLEE_ACTOR(bVar3[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
						}
					}
					if (IS_ACTOR_VALID(bVar3[1]))
					{
						if (Function_97(bVar3[0], bVar3[1]) < 15.0f)
						{
							Function_93(&iLocal_24, 2);
						}
						else
						{
							Function_134(&iLocal_24, 2);
						}
					}
					if (Function_90(bVar3[0], &iLocal_37, &fLocal_22, iLocal_24, 0, 0x40400000))
					{
						switch (iLocal_37)
						{
							case 0x00000001:
								Function_101("victimFailAggroDanger", iLocal_46, 1);
								break;
							
							case 0x00000002:
								Function_101("victimFailAggroShot", iLocal_46, 1);
								break;
							
							case 0x00000004:
								Function_101("victimFailAggroHostile", iLocal_46, 1);
								break;
							
							case 0x00000008:
								Function_101("victimFailAggroAttacked", iLocal_46, 1);
								Function_89(bVar3[0], &Global_34573);
								Function_100(bVar3[0]);
								bLocal_48 = true;
								iVar0 = 5;
								iVar57 = 0;
								break;
								break;
						}
						if (!bLocal_48)
						{
							Function_100(bVar3[0]);
							CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bVar3[0]);
							RESET_ANIM_SET_FOR_ACTOR(bVar3[0], 1);
							bLocal_48 = true;
							TASK_FLEE_ACTOR(bVar3[0], Global_34573, -1.0f, -1.0f, 0, 0, 0);
							iVar0 = 5;
							break;
							iVar57 = 0;
						}
					}
					else if (iLocal_47)
					{
						if (!Function_96(bVar3[0], Global_34573, (fLocal_50 + IntToFloat(iLocal_21))))
						{
							Function_101("crimeHorseThief11", iLocal_46, 1);
							iVar0 = 5;
							iVar57 = 0;
							break;
						}
					}
				}
				else
				{
					Function_101("crimeHorseThief10", iLocal_46, 1);
					iVar0 = 5;
					iVar57 = 0;
					break;
				}
				if (iVar0 != 5)
				{
					if (Function_15(&iVar46, &bVar3, &iVar57, bVar2, uVar47))
					{
						iVar0 = 5;
						iVar57 = 0;
					}
				}
				break;
			
			case 0x00000005:
				iVar0 = 6;
				iVar57 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar57 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar57);
		}
	}
	if (bLocal_64)
	{
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	}
	Function_182(&bVar3, 4294967295);
	Function_14(&iVar7, 2);
	if (ScriptParam_0.f_32)
	{
		Global_3399 = 0;
	}
	if (IS_BLIP_VALID(bLocal_54))
	{
		REMOVE_BLIP(bLocal_54);
	}
	Function_94(bVar3[0]);
	Function_94(bVar3[1]);
	if (!bVar48)
	{
		Function_8(ScriptParam_0.f_56, 0.0f, 0, 1, 0);
	}
	if (!bVar48)
	{
		Function_6(&bVar3, 4294967295);
		if (IS_OBJECT_VALID(bVar2))
		{
			UNK_0xA936E73B(bVar2, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(bVar2, 1);
		}
	}
	else
	{
		if (IS_ACTOR_VALID(bVar3[0]))
		{
			Function_94(bVar3[0]);
			AI_GOAL_LOOK_CLEAR(bVar3[0]);
			Function_5(bVar3[0]);
			if (!bLocal_49)
			{
				RESET_ANIM_SET_FOR_ACTOR(bVar3[0], 1);
			}
			AI_GOAL_LOOK_CLEAR(bVar3[0]);
			if (!bLocal_48)
			{
				TASK_WANDER(bVar3[0], -1.0f);
				TASK_PRIORITY_SET(bVar3[0], 2);
			}
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(bVar3[0], 1);
			UNK_0x99AFD2D1(bVar3[0], 0, 0);
		}
		if (IS_ACTOR_VALID(bVar3[1]))
		{
			TASK_FLEE_ACTOR(bVar3[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bVar3[1], 2);
		}
	}
	Function_1(&bVar11);
	RELEASE_LAYOUT_REF(bVar2);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xA83 / 2691
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

void Function_2(var uParam0, int iParam1) //Position: 0xAA9 / 2729
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

void Function_3(var uParam0, int iParam1) //Position: 0xBD7 / 3031
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_4(var uParam0, int iParam1) //Position: 0xBF1 / 3057
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0) //Position: 0xC0E / 3086
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, 1);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	}
	return;
}

void Function_6(var uParam0, int iParam1) //Position: 0xC28 / 3112
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_7(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_7(int iParam0) //Position: 0xC55 / 3157
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 0);
		TASK_FLEE_ACTOR(*iParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(*iParam0, 0);
	}
	return;
}

bool Function_8(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xC80 / 3200
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
		Function_10("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_9(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_9(bVar0);
		}
		if (!bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_30842[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_9(bVar0);
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

void Function_9(bool bParam0) //Position: 0xEDD / 3805
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

void Function_10(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF23 / 3875
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_11(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_11(int iParam0) //Position: 0xF9A / 3994
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

bool Function_12() //Position: 0xFD9 / 4057
{
	if (Function_13(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_13(int iParam0, int iParam1) //Position: 0xFF4 / 4084
{
	return (iParam0 && iParam1) == 0;
}

void Function_14(var uParam0, int iParam1) //Position: 0x1001 / 4097
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

bool Function_15(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x1023 / 4131
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (Function_96((*uParam1)[0], Global_34573, 70.0f) || Function_88((*uParam1)[0], 1.0f, 110.0f, 1, 1, 0))
			{
				if (GET_MOUNT((*uParam1)[1]) == (*uParam1)[2])
				{
					Function_87(uParam1[1], uParam1[0]);
					if (Function_88((*uParam1)[0], 1.0f, 110.0f, 1, 1, 0))
					{
						TASK_STAND_STILL((*uParam1)[0], -1.0f, 0, 0);
						TASK_PRIORITY_SET((*uParam1)[0], 0);
						*uParam0 = 1;
					}
					else
					{
						*iParam2 = 0;
						Function_86(uParam1[0], &Global_34573, &bLocal_36, bParam3, 50.0f, &bLocal_35, iLocal_32, &uLocal_26, &bLocal_41, 15.0f, 1, 2, -4.0f, 35.0f, "crimeHorseThief01", 0);
						*uParam0 = 4;
					}
				}
			}
			break;
		
		case 0x00000001:
			Function_85(uParam1[1], uParam1[0]);
			if (!IS_ACTOR_REACTING((*uParam1)[0]))
			{
				Function_206(&uLocal_26, 0.0f);
				*uParam0 = 3;
				*iParam2 = 0;
			}
			break;
		
		case 0x00000002:
			Function_85(uParam1[1], uParam1[0]);
			if (Function_81(&uLocal_26, 0.5f))
			{
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "default_character_Main/AI_Taunt/TauntIdle/TauntB/TauntB");
				Function_206(&uLocal_26, 0.0f);
				*uParam0 = 3;
				*iParam2 = 0;
			}
			break;
		
		case 0x00000003:
			Function_85(uParam1[1], uParam1[0]);
			*iParam2 = 0;
			RESET_ANIM_SET_FOR_ACTOR((*uParam1)[0], 1);
			Function_86(uParam1[0], &Global_34573, &bLocal_36, bParam3, 50.0f, &bLocal_35, iLocal_32, &uLocal_26, &bLocal_41, 15.0f, 1, 2, -4.0f, 35.0f, "crimeHorseThief01", 0);
			*uParam0 = 4;
			break;
		
		case 0x00000004:
			*iParam2 = 0;
			Function_85(uParam1[1], uParam1[0]);
			if (Function_86(uParam1[0], &Global_34573, &bLocal_36, bParam3, 50.0f, &bLocal_35, iLocal_32, &uLocal_26, &bLocal_41, 15.0f, 1, 2, -4.0f, 35.0f, "crimeHorseThief01", 0))
			{
				if (bLocal_35 && !IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]))
				{
					if (Function_98((*uParam1)[1], 0))
					{
						if (Function_96((*uParam1)[1], Global_34573, 160.0f))
						{
							Function_79();
							Function_206(&uLocal_26, 0.0f);
							Function_78((*uParam1)[0], Global_34573, "crimeHorseThief02", "crimeHorseThief02", 5, 60, 1, 1);
							AI_GOAL_LOOK_AT_ACTOR((*uParam1)[0], Global_34573, 1, 1.0f, 10.0f, 10.0f, 0);
							SET_ANIM_SET_FOR_ACTOR((*uParam1)[0], "Stolen_Pleading_Panic_Return", 0);
							SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "Stolen_Pleading_Panic_Return/Stolen_pleading");
							*uParam0 = 5;
						}
						else
						{
							return 1;
						}
					}
					Function_206(&uLocal_26, 0.0f);
					Function_78((*uParam1)[0], Global_34573, "crimeHorseThief02", "crimeHorseThief02", 5, 60, 1, 1);
					AI_GOAL_LOOK_AT_ACTOR((*uParam1)[0], Global_34573, 1, 1.0f, 10.0f, 10.0f, 0);
					SET_ANIM_SET_FOR_ACTOR((*uParam1)[0], "Stolen_Pleading_Panic_Return", 0);
					SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "Stolen_Pleading_Panic_Return/Stolen_panic");
					*uParam0 = 5;
				}
			}
			else
			{
				TASK_WANDER((*uParam1)[0], -1.0f);
				TASK_PRIORITY_SET((*uParam1)[0], 2);
				return 1;
			}
			if (bLocal_41 && !IS_BLIP_VALID(GET_BLIP_ON_ACTOR((*uParam1)[0])))
			{
				iLocal_39 = 1;
				ADD_BLIP_FOR_ACTOR((*uParam1)[0], 325, 0, 2, 0);
			}
			break;
		
		case 0x00000005:
			if (Function_81(&uLocal_26, 2.0f))
			{
				Function_77((*uParam1)[0]);
				vLocal_51 = { StackVal, StackVal, Function_77((*uParam1)[0]) };
				fLocal_59 = (Function_97(Global_34573, (*uParam1)[1]) + 75.0f);
				if (fLocal_59 > 225.0f)
				{
					fLocal_59 = 225.0f;
				}
				Function_206(&uLocal_29, 0.0f);
				Function_76("crimeHorseThief04", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_46 = 1;
				Function_94((*uParam1)[0]);
				bLocal_54 = ADD_BLIP_FOR_ACTOR((*uParam1)[2], 325, 0.0f, 3, 0);
				SET_BLIP_NAME(bLocal_54, "crimeHorseThief_blip");
				SET_BLIP_BLINK(bLocal_54, 1, 0, 5f);
				Function_206(&uLocal_26, 0.0f);
				*uParam0 = 6;
			}
			break;
		
		case 0x00000006:
			if (!iLocal_65)
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[1], 1.0f, 45.0f, 1, 1, 0))
				{
					iLocal_65 = 1;
					AUDIO_MUSIC_SET_MOOD("CHASE_HIGH", 0, 4294967295, 4294967295);
				}
			}
			if (iLocal_33 && !IS_AMBIENT_SPEECH_PLAYING((*uParam1)[0]))
			{
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "Stolen_Pleading_Panic_Return/Stolen_panic");
				iLocal_33 = 0;
			}
			if (Function_81(&uLocal_26, 4.0f))
			{
				fLocal_59 = (fLocal_59 * 0.9f);
				if (fLocal_59 > 75.0f)
				{
					fLocal_59 = 75.0f;
				}
				Function_206(&uLocal_26, 0.0f);
			}
			if (!iLocal_44)
			{
				if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[1], 1.0f, 110.0f, 1, 1, 0) && iLocal_45)
				{
					TASK_FLEE_ACTOR((*uParam1)[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
					TASK_PRIORITY_SET((*uParam1)[1], 0);
					iLocal_44 = 1;
				}
				else if (Function_97(Global_34573, (*uParam1)[1]) > 60.0f)
				{
					TASK_FLEE_ACTOR((*uParam1)[1], Global_34573, -1.0f, -1.0f, 0, 0, 0);
					TASK_PRIORITY_SET((*uParam1)[1], 0);
					iLocal_44 = 1;
				}
				else
				{
					*iParam2 = 0;
					Function_85(uParam1[1], uParam1[0]);
				}
			}
			if (!iLocal_43)
			{
				if ((CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[1], 1.0f, 20.0f, 1, 1, 0) && MEMORY_GET_IS_VISIBLE((*uParam1)[1], Global_34573)) && iLocal_42)
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE((*uParam1)[1]);
					Function_89((*uParam1)[1], &Global_34573);
					iLocal_43 = 1;
				}
			}
			if ((!Function_98((*uParam1)[1], 0) && !iLocal_40) || (!bLocal_34 && !iLocal_40))
			{
				if (Function_98((*uParam1)[2], 0))
				{
					Function_78(Global_34573, (*uParam1)[1], "crimeHorseThiefPlayer_msg01", "crimeHorseThiefPlayer_msg01", 5, 60, 1, 1);
					TASK_CLEAR((*uParam1)[2]);
					iLocal_40 = 1;
					uLocal_60 = TASK_SEQUENCE_OPEN();
					TASK_FLEE_ACTOR(false, Global_34573, 35.0f, 15.0f, 0, 0, 0);
					TASK_WANDER(false, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*uParam1)[2], uLocal_60);
					TASK_SEQUENCE_RELEASE(uLocal_60, 1);
				}
			}
			if (Function_90((*uParam1)[1], &iLocal_37, &fLocal_23, iLocal_25, iLocal_42, 0x40400000))
			{
				iLocal_42 = 1;
			}
			if (Function_98((*uParam1)[2], 0) && iLocal_38)
			{
				if (!IS_ACTOR_VALID(GET_RIDER((*uParam1)[2])))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_76("crimeHorseThief14", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_38 = 0;
				}
			}
			if ((CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 15.0f, 1, 1, 0) && Function_97((*uParam1)[0], (*uParam1)[2]) > 15.0f) && !Function_98((*uParam1)[1], 0))
			{
				if (GET_MOUNT(Global_34573) == (*uParam1)[2])
				{
					TASK_STAND_STILL((*uParam1)[2], -1.0f, 0, 0);
					Function_76("crimeHorseThief06", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				else if (GET_LASSO_TARGET(Global_34573) == (*uParam1)[2])
				{
					TASK_STAND_STILL((*uParam1)[2], -1.0f, 0, 0);
					Function_75("crimeHorseThief13", 0x41200000, 1, 0, 2, 1, 0);
				}
				*uParam0 = 10;
			}
			else if (GET_MOUNT(Global_34573) != (*uParam1)[2] || GET_LASSO_TARGET(Global_34573) != (*uParam1)[2])
			{
				if (IS_ACTOR_VALID((*uParam1)[1]))
				{
					Function_89((*uParam1)[1], &Global_34573);
				}
				TASK_FACE_ACTOR((*uParam1)[0], Global_34573, 1, 3212836864);
				iLocal_47 = 1;
				fLocal_50 = Function_74(&Global_34574, &vLocal_51);
				Function_94((*uParam1)[2]);
				HUD_CLEAR_OBJECTIVE();
				AUDIO_MUSIC_SET_MOOD("nCHASE_LOW", 0, 4294967295, 4294967295);
				Function_76("crimeHorseThief05", 0x40f00000, 1, 2, 0, 0, 0, 0);
				bLocal_54 = ADD_BLIP_FOR_ACTOR((*uParam1)[0], 325, 0.0f, 3, 0);
				SET_BLIP_PRIORITY(bLocal_54, 3);
				SET_BLIP_BLINK(bLocal_54, 1, 0, 5f);
				*uParam0 = 9;
			}
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000009:
			if (!Function_73((*uParam1)[2], (*uParam1)[0]))
			{
				*uParam0 = 6;
			}
			if (Function_97((*uParam1)[2], (*uParam1)[0]) > 40.0f)
			{
				TASK_FACE_ACTOR((*uParam1)[0], Global_34573, 1, -1.0f);
				SET_ANIM_SET_FOR_ACTOR((*uParam1)[0], "Stolen_Pleading_Panic_Return", 0);
				SET_ACTION_NODE_FOR_ACTOR((*uParam1)[0], "Stolen_Pleading_Panic_Return/excited_return/mobile_and_loop/loop");
				*uParam0 = 7;
			}
			break;
		
		case 0x00000007:
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), (*uParam1)[0], 1.0f, 22.0f, 1, 1, 0) && Function_97((*uParam1)[0], (*uParam1)[2]) > 30.0f)
			{
				if (GET_MOUNT(Global_34573) == (*uParam1)[2])
				{
					TASK_STAND_STILL((*uParam1)[2], -1.0f, 0, 0);
					Function_76("crimeHorseThief06", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				else if (GET_LASSO_TARGET(Global_34573) == (*uParam1)[2])
				{
					TASK_STAND_STILL((*uParam1)[2], -1.0f, 0, 0);
					Function_75("crimeHorseThief13", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_78(Global_34573, (*uParam1)[0], "crimeHorseThiefPlayer_msg03", 0, 5, 60, 1, 1);
				*uParam0 = 10;
			}
			break;
		
		case 0x0000000A:
			if (GET_LASSO_TARGET(Global_34573) == (*uParam1)[2] && GET_MOUNT(Global_34573) == (*uParam1)[2])
			{
				RESET_ANIM_SET_FOR_ACTOR((*uParam1)[0], 1);
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_HELP();
				bLocal_35 = false;
				Function_62(uParam1[0], &Global_34573, &fLocal_61, &bLocal_62, &uLocal_26, bParam3, 25.0f, &bLocal_35, iLocal_32, iParam2, "thanks", "thanks", "crimeHorseThief07", "crimeHorseThief07", 30.0f, 2, -5.0f, 0, 4.0f, 0, "crimeHorseThiefPlayer_msg03", 0, 0, 0, 0x40800000);
				*uParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_62(uParam1[0], &Global_34573, &fLocal_61, &bLocal_62, &uLocal_26, bParam3, 25.0f, &bLocal_35, iLocal_32, iParam2, "thanks", "thanks", "crimeHorseThief07", "crimeHorseThief07", 30.0f, 2, -5.0f, 0, 4.0f, 0, "crimeHorseThiefPlayer_msg03", 0, 0, 0, 0x40800000))
			{
				if (bLocal_35)
				{
					AI_GOAL_LOOK_CLEAR((*uParam1)[0]);
					TASK_MOUNT((*uParam1)[0], (*uParam1)[2], 1, 1, 1, 2147483647);
					TASK_PRIORITY_SET((*uParam1)[0], 0);
					Function_206(&uLocal_26, 0.0f);
					*uParam0 = 13;
				}
			}
			else if (Function_98((*uParam1)[0], 0))
			{
				TASK_MOUNT((*uParam1)[0], (*uParam1)[2], 1, 1, 1, 2147483647);
				TASK_PRIORITY_SET((*uParam1)[0], 0);
				Function_206(&uLocal_26, 0.0f);
				*uParam0 = 13;
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x0000000C:
			Function_57(20, 1, 0);
			TOGGLE_ACTOR_ACTION_SIGNAL_ON((*uParam1)[0], 8, "FASTWALK");
			SET_ANIM_SET_FOR_ACTOR((*uParam1)[0], "nthank_you", 0);
			uLocal_60 = TASK_SEQUENCE_OPEN();
			TASK_FACE_ACTOR(0, Global_34573, 0, 3212836864);
			TASK_ACTION_PERFORM(0, "nthank_you");
			Function_78(Global_34573, (*uParam1)[0], "crimeHorseThief07", 0, 5, 60, 1, 1);
			TASK_MOUNT((*uParam1)[0], (*uParam1)[2], 1, 1, 1, 2147483647);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM((*uParam1)[0], uLocal_60);
			TASK_SEQUENCE_RELEASE(uLocal_60, 1);
			Function_206(&uLocal_26, 0.0f);
			*uParam0 = 13;
			break;
		
		case 0x0000000D:
			*iParam2 = 0;
			if (GET_MOUNT((*uParam1)[0]) != (*uParam1)[2] && IS_ACTOR_RIDING_AND_IN_SADDLE((*uParam1)[0]))
			{
				AI_SPEECH_SET_ALLOW_FOR_ACTOR((*uParam1)[0], 1);
				UNK_0x99AFD2D1((*uParam1)[0], 0, 0);
				if (IS_ACTOR_ALIVE((*uParam1)[1]))
				{
					Function_35(100, 1, 0);
				}
				else
				{
					Function_35(50, 1, 0);
				}
				Function_34(3);
				Function_57(20, 1, 0);
				Function_18(uParam4, 1);
				REMOVE_BLIP(bLocal_54);
				bLocal_48 = true;
				Function_16((*uParam1)[0], 0.0f, 0.0f, 0.0f, 0, 0, 2, 1);
				TASK_PRIORITY_SET((*uParam1)[0], 2);
				return 1;
			}
			if (Function_81(&uLocal_26, 8.0f) && GET_MOUNT(Global_34573) != (*uParam1)[2])
			{
				Function_35(4294967246, 1, 0);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF((*uParam1)[0]);
				AI_GOAL_LOOK_AT_ACTOR_NEW((*uParam1)[0], Global_34573, -1.0f, 1);
				TASK_PRIORITY_SET((*uParam1)[0], 2);
				uLocal_60 = TASK_SEQUENCE_OPEN();
				TASK_TAUNT_ACTOR_IN_PLACE(0, Global_34573, 5.0f);
				TASK_WANDER(false, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*uParam1)[0], uLocal_60);
				TASK_SEQUENCE_RELEASE(uLocal_60, 1);
				TASK_PRIORITY_SET((*uParam1)[0], 2);
				bLocal_48 = true;
				return 1;
			}
			break;
	}
	return 0;
}

void Function_16(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x1E41 / 7745
{
	if (!IS_OBJECTSET_VALID(Global_28842.f_60))
	{
		Global_28842.f_60 = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", Global_28841, 15, 1);
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam4 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideCurve", bParam4);
	}
	if (!Function_17(StackVal, StackVal, vParam1))
	{
		DECOR_SET_VECTOR(bParam0, "overrideDest", vParam1);
	}
	if (bParam5 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideSpeed", bParam5);
	}
	if (bParam6 != 2)
	{
		DECOR_SET_INT(bParam0, "overridePriority", bParam6);
	}
	else
	{
		TASK_PRIORITY_SET(bParam0, 2);
	}
	if (bParam7)
	{
		DECOR_SET_INT(bParam0, "quickRelease", bParam6);
	}
	if (!IS_OBJECT_IN_OBJECTSET(bParam0, Global_28842.f_60))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam0, Global_28842.f_60);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
}

bool Function_17(vector3 vParam0) //Position: 0x1F49 / 8009
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_18(bool bParam0, bool bParam1) //Position: 0x1F61 / 8033
{
	bool bVar0;
	
	bVar0 = Function_33(0);
	if ((Function_33(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_19(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_33(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_19(597, bParam0, 0, 0);
	}
	if ((Function_33(597) + Function_33(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

int Function_19(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x202C / 8236
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
	Function_32(iParam0, TO_FLOAT(bParam1), 1);
	Function_31(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_20(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_20(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x224C / 8780
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_30(390))), 32);
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
					bVar19 = (Function_29(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_29(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_27(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_24(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_21(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_207(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_21(int iParam0) //Position: 0x2879 / 10361
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_22(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x288A / 10378
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_23(char* cParam0, bool bParam1) //Position: 0x297F / 10623
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_24(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2998 / 10648
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_26(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_25(Function_26(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_25(int iParam0, int iParam1) //Position: 0x29FD / 10749
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_26(int iParam0, int iParam1) //Position: 0x2A0F / 10767
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_27(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2A21 / 10785
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
	if (((Function_28(iParam0) != 19 || Function_28(iParam0) != 17) || Function_28(iParam0) != 10) || Function_28(iParam0) != 9)
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

int Function_28(int iParam0) //Position: 0x2B51 / 11089
{
	return Global_35278[iParam020].f_48;
}

float Function_29(int iParam0) //Position: 0x2B60 / 11104
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_30(int iParam0) //Position: 0x2B99 / 11161
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_31(int iParam0) //Position: 0x2BD6 / 11222
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

int Function_32(int iParam0, bool bParam1, bool bParam2) //Position: 0x2D70 / 11632
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

int Function_33(int iParam0) //Position: 0x2FB4 / 12212
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_34(int iParam0) //Position: 0x2FF5 / 12277
{
	Global_16876[iParam06].f_16++;
	if (Global_16876[iParam06].f_16 == 1)
	{
		Function_19(409, 1, 0, 0);
	}
	return;
}

void Function_35(int iParam0, bool bParam1, bool bParam2) //Position: 0x3026 / 12326
{
	int iVar0;
	bool bVar1;
	
	if (Function_56(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_55())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_33(1);
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
			Function_54(1, bVar1);
			if (!bParam2)
			{
				if (!Function_53(Global_76848, 1))
				{
					Function_48(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_46(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_53(Global_76848, 2))
				{
					Function_48(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_19(1, bVar1, 0, 0);
	}
	else
	{
		Function_45(1, (4294967295 * bVar1), 0);
	}
	if (Function_33(1) <= 4294962296)
	{
		Function_44(1, 4294962296, 0);
	}
	else if (Function_33(1) >= 5000)
	{
		Function_44(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_29(1));
	iVar0 = Function_33(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_37(2, Function_43(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_37(2, Function_43(Global_12976.f_152), 0);
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
				Function_37(2, Function_43(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_37(2, Function_43(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_37(2, Function_43(Global_12976.f_152), 1);
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
				Function_37(2, Function_43(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_37(2, Function_43(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_37(2, Function_43(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_37(2, Function_43(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_37(2, Function_43(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_37(2, Function_43(Global_12976.f_152), 1);
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
				Function_37(2, Function_43(Global_12976.f_152), 0);
			}
			break;
	}
	Function_36(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_36(int iParam0, int iParam1) //Position: 0x3347 / 13127
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_37(int iParam0, char* cParam1, bool bParam2) //Position: 0x35A5 / 13733
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
	Function_41(iParam0, cParam1, 0, 1);
	iVar1 = Function_38();
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

int Function_38() //Position: 0x372A / 14122
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
	Function_39();
	return 0;
}

void Function_39() //Position: 0x37C9 / 14281
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
		Function_40(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_40(int iParam0) //Position: 0x3878 / 14456
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

int Function_41(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x38D6 / 14550
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
		Function_42(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_42(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3C28 / 15400
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

var Function_43(int iParam0) //Position: 0x3CAB / 15531
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

int Function_44(int iParam0, bool bParam1, bool bParam2) //Position: 0x3D4E / 15694
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
		Function_32(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_31(iParam0);
	if (bParam2)
	{
		Function_20(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_45(int iParam0, bool bParam1, int iParam2) //Position: 0x3FE9 / 16361
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
	Function_31(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_20(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_46(int iParam0, bool bParam1) //Position: 0x41EA / 16874
{
	bool bVar0;
	int iVar1;
	
	Function_45(iParam0, bParam1, 0);
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
	iVar1 = Function_47(iParam0, 4294967295);
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
	iVar1 = Function_38();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_47(int iParam0, int iParam1) //Position: 0x4386 / 17286
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

void Function_48(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x43C7 / 17351
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_50(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_49(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_49(char* cParam0, int iParam1) //Position: 0x4433 / 17459
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

bool Function_50(bool bParam0, var uParam1, int iParam2) //Position: 0x446A / 17514
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
		if (Function_52(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_51(uVar0))
		{
			case 0x00000002:
				if (!Function_53(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_51(char* cParam0) //Position: 0x44E2 / 17634
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

int Function_52(int iParam0) //Position: 0x4583 / 17795
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_93(&iVar1, 2147483648);
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

bool Function_53(var uParam0, int iParam1) //Position: 0x45C0 / 17856
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_54(int iParam0, bool bParam1) //Position: 0x45D3 / 17875
{
	bool bVar0;
	int iVar1;
	
	Function_19(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_47(iParam0, 4294967295);
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
	iVar1 = Function_38();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

bool Function_55() //Position: 0x4770 / 18288
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_56(int iParam0) //Position: 0x479B / 18331
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_57(int iParam0, bool bParam1, bool bParam2) //Position: 0x47AA / 18346
{
	int iVar0;
	bool bVar1;
	
	if (Function_56(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_55())
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
	iVar0 = Function_33(3);
	Function_59();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_54(3, bVar1);
		if (!bParam2)
		{
			if (!Function_53(Global_76848, 4))
			{
				Function_48(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_19(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_29(3));
	iVar0 = Function_33(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_37(4, Function_58(Global_12976.f_156), 1);
				Function_36(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_37(4, Function_58(Global_12976.f_156), 1);
				Function_36(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_37(4, Function_58(Global_12976.f_156), 1);
				Function_36(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_37(4, Function_58(Global_12976.f_156), 1);
				Function_36(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_37(4, Function_58(Global_12976.f_156), 1);
				Function_36(Global_12976.f_152, Global_12976.f_156);
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

var Function_58(int iParam0) //Position: 0x4979 / 18809
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

void Function_59() //Position: 0x4A08 / 18952
{
	Function_61(3, 0.0f);
	Function_60(3, 10000.0f);
	return;
}

int Function_60(int iParam0, int iParam1) //Position: 0x4A1E / 18974
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_61(int iParam0, bool bParam1) //Position: 0x4A5E / 19038
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = bParam1;
	return 1;
}

bool Function_62(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, float fParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14, int iParam15, float fParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, int iParam23, float fParam24) //Position: 0x4A9E / 19102
{
	var uVar0;
	
	*uParam9 = *uParam9;
	iParam18 = iParam18;
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
				*uParam2 = Function_97(*uParam0, Global_34573);
				AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
				bParam8 = CREATE_POINT_IN_LAYOUT(bParam5, Function_207(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bParam8, *uParam1, Function_207(), 0.0f, 0.5f, fParam16, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0) || Function_97(Global_34573, *uParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam8, 1.0f, iParam15);
					TASK_PRIORITY_SET(*uParam0, 1);
				}
				*uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_97(*uParam0, *uParam1) - *uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0))
			{
				uVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, *uParam1, 0, 3212836864);
				TASK_FACE_ACTOR(0, *uParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(*uParam0, uVar0);
				TASK_SEQUENCE_RELEASE(uVar0, 1);
				TASK_PRIORITY_SET(*uParam0, 1);
				*uParam9 = 0;
				*uParam3 = 4;
			}
			else if (!Function_98(*uParam0, 0))
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
			if (GET_NTH_TASK_STATUS(*uParam0, 0) != 0 || bParam21)
			{
				if (!bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
				}
				if (bParam19)
				{
					Function_78(*uParam0, Global_34573, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_78(*uParam0, Global_34573, bParam12, iParam13, 5, 60, 1, 1);
				}
				*uParam3 = 5;
				Function_206(uParam4, 0.0f);
			}
			else if (!Function_98(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (iParam23 && !Function_72(*uParam0))
			{
				if (fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
						Function_63(*uParam0, 4, 0, 1);
					}
				}
				else if (Function_81(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_63(*uParam0, 4, 0, 1);
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
							Function_78(Global_34573, *uParam0, bParam20, bParam20, 5, 60, 1, 1);
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
			if (iParam23 && !Function_72(*uParam0))
			{
				if (Function_81(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_63(*uParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, bParam11) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
				*fParam7 = 1;
				if (bParam17)
				{
					Function_63(*uParam0, 4, 0, iParam15);
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

int Function_63(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x4E44 / 20036
{
	int iVar0;
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
			iVar0 = 0;
			while (iVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(iVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_64(bVar1, 0, 0, 0, 1);
				}
				iVar0++;
			}
		}
		Function_64(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_64(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x4F24 / 20260
{
	char* cVar0[32];
	
	Function_71();
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
	if (Function_70(bParam0) == 1)
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
	Function_69(bParam0, 0);
	Function_68(bParam0, iParam1);
	Function_67(bParam0, uParam2);
	Function_66(bParam0, uParam3);
	if (Function_65(bParam0) != 5)
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

int Function_65(bool bParam0) //Position: 0x5172 / 20850
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_66(bool bParam0, bool bParam1) //Position: 0x5195 / 20885
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_67(bool bParam0, bool bParam1) //Position: 0x51B8 / 20920
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_68(bool bParam0, bool bParam1) //Position: 0x51DC / 20956
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_69(bool bParam0, bool bParam1) //Position: 0x5202 / 20994
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_70(bool bParam0) //Position: 0x5225 / 21029
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_71() //Position: 0x5243 / 21059
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

bool Function_72(bool bParam0) //Position: 0x528D / 21133
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

bool Function_73(bool bParam0, bool bParam1) //Position: 0x52B2 / 21170
{
	bool bVar0;
	
	bVar0 = true;
	if (GET_MOUNT(Global_34573) == bParam0)
	{
		bVar0 = false;
	}
	else if (GET_LASSO_TARGET(Global_34573) == bParam0)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Function_94(bParam1);
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_76("crimeHorseThief14", 0x40f00000, 1, 2, 0, 0, 0, 0);
		bLocal_54 = ADD_BLIP_FOR_ACTOR(bParam0, 325, 0, 2, 0);
		SET_BLIP_NAME(bLocal_54, "crimeHorseThief_blip");
		return 0;
	}
	return 1;
}

float Function_74(var uParam0, int iParam1) //Position: 0x5339 / 21305
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

void Function_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5357 / 21335
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_11(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

void Function_76(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x53D2 / 21458
{
	struct<4> Var0;
	var uVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_11(Global_6269) };
		}
		PRINT_OBJECTIVE_B(uParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(uParam0, iParam1, iParam7, iParam3, iParam2, uVar4, iParam5, iParam6);
	}
}

vector3 Function_77(bool bParam0) //Position: 0x5457 / 21591
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_78(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x5468 / 21608
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_97(bParam0, Global_34573) >= IntToFloat(iParam5))
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

void Function_79() //Position: 0x54F8 / 21752
{
	int iVar0;
	
	bLocal_64 = true;
	if (Global_29004 == 0)
	{
		iVar0 = Function_80(3);
		if (iVar0 == 0)
		{
			cLocal_63 = "FTR_SONG_02";
		}
		else if (iVar0 == 1)
		{
			cLocal_63 = "FTR_SONG_03";
		}
		else if (iVar0 == 2)
		{
			cLocal_63 = "FTR_SONG_05";
		}
	}
	else if (Global_29004 == 2)
	{
		cLocal_63 = "NRT_SONG_05";
	}
	else if (Global_29004 == 1)
	{
		iVar0 = Function_80(3);
		if (iVar0 == 0)
		{
			cLocal_63 = "MEX_SONG_04";
		}
		else if (iVar0 == 1)
		{
			cLocal_63 = "MEX_SONG_05";
		}
		else if (iVar0 == 2)
		{
			cLocal_63 = "MEX_SONG_06";
		}
	}
	AUDIO_MUSIC_FORCE_TRACK(cLocal_63, "IDLE", 0.0f, 500, 4294967295, 3212836864, 0);
	return;
}

int Function_80(bool bParam0) //Position: 0x55DF / 21983
{
	bParam0 = (bParam0 * 1000 - 1);
	return (RAND_INT_RANGE(0, bParam0) / 1000);
}

bool Function_81(var uParam0, float fParam1) //Position: 0x55F8 / 22008
{
	if (Function_84(uParam0))
	{
		if (Function_82(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_82(int iParam0) //Position: 0x5614 / 22036
{
	if (Function_84(iParam0))
	{
		if (Function_83(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_83(int iParam0) //Position: 0x56DC / 22236
{
	return Function_13(*iParam0, 2);
}

bool Function_84(int iParam0) //Position: 0x56E9 / 22249
{
	return Function_13(*iParam0, 1);
}

void Function_85(var uParam0, bool bParam1) //Position: 0x56F6 / 22262
{
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (iLocal_45)
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, 110.0f, 1, 1, 0))
			{
				Function_87(uParam0, bParam1);
				iLocal_45 = 0;
			}
		}
		else if (!Function_96(*uParam0, Global_34573, 110.0f))
		{
			TASK_STAND_STILL(*uParam0, -1.0f, 0, 0);
			TASK_PRIORITY_SET(*uParam0, 0);
			iLocal_45 = 1;
		}
	}
	return;
}

bool Function_86(var uParam0, var uParam1, var uParam2, bool bParam3, float fParam4, float fParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, bool bParam10, int iParam11, float fParam12, float fParam13, float fParam14, int iParam15) //Position: 0x5751 / 22353
{
	float fVar0;
	
	if (!IS_ACTOR_VALID(*uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		return 0;
	}
	if (fParam13 == 0.0f && !*uParam8)
	{
		if (fParam13 > bParam9)
		{
			LOG_ERROR("firstAudioDist is too low to ever work");
		}
		else if (Function_97(*uParam0, *uParam1) > fParam13)
		{
			*uParam8 = 1;
			Function_78(*uParam0, Global_34573, fParam14, fParam14, 5, 60, 1, iParam15);
			Function_206(uParam7, 0.0f);
		}
	}
	switch (*uParam2)
	{
		case 0x00000000:
			SET_ACTOR_UPDATE_PRIORITY(*uParam0, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
			fLocal_20 = Function_97(*uParam0, Global_34573);
			AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
			bParam6 = CREATE_POINT_IN_LAYOUT(bParam3, Function_207(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			ATTACH_OBJECTS(bParam6, *uParam1, Function_207(), 0.0f, 0.5f, fParam12, 0.0f, 0.0f, 0.0f, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam6, 1.0f, iParam11);
			TASK_PRIORITY_SET(*uParam0, 1);
			*uParam2 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ON_FOOT(Global_34573))
			{
				fVar0 = (bParam9 - 3.0f);
			}
			else
			{
				fVar0 = bParam9;
			}
			if ((Function_97(*uParam0, *uParam1) - fLocal_20) < fParam4)
			{
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, fVar0, 1, 1, 0))
			{
				if (bParam10)
				{
					TASK_CLEAR(*uParam0);
					TASK_FACE_ACTOR(*uParam0, *uParam1, 1, 3212836864);
				}
				else
				{
					AI_GOAL_LOOK_CLEAR(*uParam0);
				}
				*fParam5 = 1;
				return 1;
			}
			if (!Function_98(*uParam0, 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void Function_87(var uParam0, bool bParam1) //Position: 0x58DF / 22751
{
	uLocal_60 = TASK_SEQUENCE_OPEN();
	TASK_FLEE_ACTOR(false, *bParam1, -1.0f, -1.0f, 0, 0, 0);
	TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(*uParam0, uLocal_60);
	TASK_SEQUENCE_RELEASE(uLocal_60, 1);
	TASK_PRIORITY_SET(*uParam0, 0);
	return;
}

bool Function_88(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x591A / 22810
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

int Function_89(bool bParam0, bool bParam1) //Position: 0x5934 / 22836
{
	if (IS_ACTOR_HUMAN(bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) == 0)
		{
			TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bParam0, 0);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(*bParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, *bParam1, 1);
	TASK_KILL_CHAR(bParam0, *bParam1);
	TASK_PRIORITY_SET(bParam0, 1);
	return 1;
}

bool Function_90(bool bParam0, int iParam1, float fParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x5A19 / 23065
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
		fVar0 = Function_97(bParam0, Global_34573);
		if (!Function_13(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*iParam1 = 8;
				Function_91(bParam0);
				return 1;
			}
		}
		if (!Function_13(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*iParam1 = 2;
				Function_91(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*iParam1 = 2;
				Function_91(bParam0);
				return 1;
			}
		}
		if (!Function_13(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*fParam2 > 0.0f)
				{
					*iParam1 = 4;
					Function_91(bParam0);
					return 1;
				}
				if (*fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *fParam2) < 1.3f)
					{
						*iParam1 = 4;
						Function_91(bParam0);
						return 1;
					}
				}
				*fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_13(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*iParam1 = 1;
				Function_91(bParam0);
				return 1;
			}
		}
		if (!Function_13(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*iParam1 = 16;
					Function_91(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_91(bool bParam0) //Position: 0x5BB0 / 23472
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_92(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_92(bool bParam0) //Position: 0x5BE4 / 23524
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_93(int iParam0, int iParam1) //Position: 0x5BFB / 23547
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

int Function_94(bool bParam0) //Position: 0x5C0E / 23566
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_95(bParam0);
		return 1;
	}
	return 0;
}

void Function_95(bool bParam0) //Position: 0x5C24 / 23588
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

bool Function_96(bool bParam0, bool bParam1, int iParam2) //Position: 0x5C50 / 23632
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, iParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

float Function_97(bool bParam0, bool bParam1) //Position: 0x5D61 / 23905
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

bool Function_98(bool bParam0, bool bParam1) //Position: 0x5E52 / 24146
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
			Function_94(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_94(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_99(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_99(bool bParam0, int iParam1) //Position: 0x5EEE / 24302
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

void Function_100(bool bParam0) //Position: 0x5F38 / 24376
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "nnostickup"))
		{
			DECOR_REMOVE(bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
		TASK_PRIORITY_SET(bParam0, 2);
	}
	return;
}

void Function_101(var uParam0, bool bParam1, bool bParam2) //Position: 0x5F84 / 24452
{
	if (bParam1)
	{
		HUD_CLEAR_HELP_QUEUE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Function_76(uParam0, 0x40f00000, 1, 2, 0, 0, 0, 0);
		if (bParam2)
		{
			Function_102();
		}
	}
	return;
}

void Function_102() //Position: 0x5FAD / 24493
{
	switch (Global_29004)
	{
		case 0x00000000:
			AUDIO_MUSIC_ONE_SHOT("FTR_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_ONE_SHOT("MEX_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_ONE_SHOT("NRT_BEAT_FAIL_SONG_01", 0, 0, 0, 0, 0);
			break;
	}
	return;
}

void Function_103(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x6036 / 24630
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
			Function_115(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_114(0);
		}
		if (bParam6)
		{
			Function_112(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Global_3401 = 1;
			Function_110(iParam3);
		}
		Function_108(iParam3);
		if (Function_107(StackVal, 32768))
		{
			Function_104(1);
		}
		Global_16876[iParam36].f_12++;
		Function_19(408, 1, 0, 0);
	}
}

void Function_104(bool bParam0) //Position: 0x6123 / 24867
{
	if (bParam0)
	{
		Function_106(0x10000000);
	}
	else
	{
		Function_105(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_105(int iParam0) //Position: 0x6147 / 24903
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_106(int iParam0) //Position: 0x6164 / 24932
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_107(var uParam0, int iParam1) //Position: 0x6177 / 24951
{
	return (uParam0 && iParam1) == 0;
}

void Function_108(int iParam0) //Position: 0x6184 / 24964
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_13(StackVal, 524288))
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
			bVar1 = Function_109(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_109(int iParam0) //Position: 0x6228 / 25128
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_110(int iParam0) //Position: 0x623E / 25150
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
	Function_111(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_111(var uParam0, var uParam1, int iParam2) //Position: 0x62DC / 25308
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_112(int iParam0, int iParam1) //Position: 0x62F4 / 25332
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
			Function_113(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_113(int iParam0) //Position: 0x6376 / 25462
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

void Function_114(int iParam0) //Position: 0x63C4 / 25540
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_109(900)), 0);
	return;
}

void Function_115(int iParam0) //Position: 0x63E6 / 25574
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_109(200)), 0);
	return;
}

void Function_116(bool bParam0) //Position: 0x6407 / 25607
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", 1);
	}
	return;
}

void Function_117(bool bParam0, bool bParam1) //Position: 0x643B / 25659
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_118(bool bParam0) //Position: 0x645B / 25691
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bParam0, 0);
	}
	return;
}

void Function_119(var uParam0, float fParam1) //Position: 0x6475 / 25717
{
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(*uParam0);
	SET_ACTOR_VOLUME_PARAMETERS(*uParam0, 4, 1);
	if (IS_VOLUME_VALID(StackVal))
	{
		if (Function_120(StackVal, *uParam0) > fParam1)
		{
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(StackVal, *uParam0);
		}
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		if (Function_120(StackVal, *uParam0) > fParam1)
		{
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(StackVal, *uParam0);
		}
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		if (Function_120(StackVal, *uParam0) > fParam1)
		{
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(StackVal, *uParam0);
		}
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		if (Function_120(StackVal, *uParam0) > fParam1)
		{
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(StackVal, *uParam0);
		}
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		if (Function_120(StackVal, *uParam0) > fParam1)
		{
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(StackVal, *uParam0);
		}
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		if (Function_120(StackVal, *uParam0) > fParam1)
		{
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(StackVal, *uParam0);
		}
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		if (Function_120(StackVal, *uParam0) > fParam1)
		{
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(StackVal, *uParam0);
		}
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		if (Function_120(StackVal, *uParam0) > fParam1)
		{
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(StackVal, *uParam0);
		}
	}
	SET_ACTOR_VOLUME_PARAMETERS(*uParam0, 4, 1);
	return;
}

float Function_120(bool bParam0, bool bParam1) //Position: 0x6689 / 26249
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_122(bParam0);
		vVar0 = { StackVal, StackVal, Function_122(bParam0) };
		Function_121(bParam1);
		vVar3 = { StackVal, StackVal, Function_121(bParam1) };
		return VDIST(vVar0, vVar3);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

vector3 Function_121(bool bParam0) //Position: 0x6706 / 26374
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_122(bool bParam0) //Position: 0x6717 / 26391
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

var Function_123(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x6781 / 26497
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_124(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_124(bParam4))
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

bool Function_124(bool bParam0) //Position: 0x68A6 / 26790
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_125(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x68BD / 26813
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

float Function_126() //Position: 0x68D9 / 26841
{
	float fVar0;
	bool bVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_127(&fVar0, &bVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

void Function_127(float fParam0, bool bParam1) //Position: 0x690A / 26890
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*fParam0 = 65.0f;
		*bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*fParam0 = 115.0f;
		*bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*fParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
		else
		{
			*fParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
	}
	return;
}

bool Function_128(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x6993 / 27027
{
	if (StackVal & 64 == 64)
	{
		if (!*iParam2)
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (Function_97(Global_34573, bParam1) > 15.0f)
				{
					*iParam2 = 1;
				}
			}
		}
		if (Global_3394 && !*iParam2)
		{
			return 0;
		}
		if ((Global_3367 && Global_6281 == GET_THIS_SCRIPT_ID()) && !*iParam2)
		{
			return 0;
		}
		if (Function_131() && !*iParam2)
		{
			return 0;
		}
		if (Function_130(iParam0) && !*iParam2)
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
		if (Global_3403 && iParam7)
		{
			*iParam3 = 1;
			return 0;
		}
		if (Global_3404 && iParam7)
		{
			*iParam3 = 1;
			return 0;
		}
		if (Global_3392 && !*iParam2)
		{
			return 0;
		}
		if (Global_3393 && !*iParam2)
		{
			return 0;
		}
		if (bParam6)
		{
			if (Global_63096 && !*iParam2)
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
		if (!Function_129(iParam0, iParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_129(int iParam0, int iParam1) //Position: 0x6AC1 / 27329
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

int Function_130(int iParam0) //Position: 0x6AE2 / 27362
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

int Function_131() //Position: 0x6B20 / 27424
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
						if (Function_132(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_132(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_132(bool bParam0, bool bParam1) //Position: 0x6BDB / 27611
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_122(bParam0);
			vVar0 = { StackVal, StackVal, Function_122(bParam0) };
			Function_133(bParam1);
			vVar3 = { StackVal, StackVal, Function_133(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_133(bool bParam0) //Position: 0x6C7B / 27771
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

void Function_134(int iParam0, int iParam1) //Position: 0x6CE7 / 27879
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_135(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x6CF6 / 27894
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_174(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_172(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_170(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_136(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_10("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_10("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_8(iParam0->f_56, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_174("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_172(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_170(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_136(int iParam0) //Position: 0x7088 / 28808
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
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
			Function_169(iParam0 + 4);
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
				vVar3 = { 0.0f, 0.0f, Function_168(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_168(1));
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
						bVar0 = Function_167(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_166(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_165(StackVal, StackVal, StackVal, vVar9, Function_126());
				}
				else
				{
					bVar0 = Function_164(StackVal, StackVal, StackVal, vVar9, Function_126(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_169(iParam0 + 4);
			ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
			fVar13 = 130.0f;
			bVar12 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
			ITERATE_IN_SPHERE(StackVal, StackVal, vVar3);
			bVar1 = START_OBJECT_ITERATOR(StackVal);
			while (IS_OBJECT_VALID(bVar1) && !IS_OBJECT_VALID(bVar0))
			{
				if (DECOR_CHECK_EXIST(bVar1, "regid"))
				{
					bVar14 = DECOR_GET_INT(bVar1, "regid");
					if (Function_163(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_168(1))
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
				Function_162(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_161(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_161(&vVar9, &vVar6) };
				if (!Function_17(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_127(&fVar13, &bVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((bVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_158(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_154(iParam0);
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
					if (!Function_153(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_152(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_13(StackVal, 131072))
				{
					if (StackVal || Function_151(StackVal, Function_151(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_150(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_146(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				bVar12 = 150.0f;
				vVar3 = { 0.0f, 0.0f, ((fVar13 + bVar12) * -0.5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				uVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_145((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_145((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) >= 0)
			{
				iVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(uVar23, iVar21, &Var15);
				Function_144(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_144(&Var15) };
				iParam0->f_20 = Var15.f_12;
				(iParam0 + 20)->f_4 = Var15.f_16;
				iParam0->f_48 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar23, iVar21);
				UNK_0xDF93BD7C(uVar23);
			}
			else
			{
				UNK_0xDF93BD7C(uVar23);
				return 0;
			}
			if (iParam0->f_60 == 2)
			{
				if (!Function_153(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_152(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_153(StackVal, Function_152(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_13(StackVal, 131072))
			{
				if (StackVal || Function_151(StackVal, Function_151(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_146(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_141((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_138(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_138(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_137(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_137(vector3 vParam0) //Position: 0x78B2 / 30898
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= GET_OBJECTSET_SIZE(Global_25964))
	{
		if (IS_POINT_IN_VOLUME(vParam0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, Global_25964))))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x78E7 / 30951
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
								return Function_139(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_139(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_139(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_139(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_139(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_139(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_139(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_139(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_139(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_139(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_139(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_139(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_139(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_139(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_139(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_139(&Global_6704, &Global_7790, bParam3);
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
								return Function_139(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_139(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_139(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_139(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_139(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_139(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_139(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_139(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_139(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_139(&Global_7027, &Global_8268, bParam3);
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
		return Function_139(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_139(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_139(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_139(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_139(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_139(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_139(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_139(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_139(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_139(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_139(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_139(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_139(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_139(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_139(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_139(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_139(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_139(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_139(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_139(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_139(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_139(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_139(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_139(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_139(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_139(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_139(var uParam0, var uParam1, bool bParam2) //Position: 0x7EFC / 32508
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_140(uParam0[iVar02], 2))
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

bool Function_140(var uParam0, int iParam1) //Position: 0x7F4E / 32590
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_141(int iParam0) //Position: 0x7F6A / 32618
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
			if (Function_142(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_142(bool bParam0) //Position: 0x7FC5 / 32709
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_143(bParam0);
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

var Function_143(bool bParam0) //Position: 0x8000 / 32768
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	iVar1 = 0;
	while (iVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, iVar1);
		if (IS_ACTOR_VALID(bVar0) && IS_ACTOR_ALIVE(bVar0))
		{
			return bVar0;
		}
		iVar1++;
	}
	return "";
}

vector3 Function_144(int iParam0) //Position: 0x8046 / 32838
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_145(int iParam0, int iParam1) //Position: 0x8065 / 32869
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

bool Function_146(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x8095 / 32917
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
	Function_147(4294967295);
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
			else if (Function_74(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

int Function_147(bool bParam0) //Position: 0x8165 / 33125
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
						Function_149(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_148(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_149(iVar0);
						}
					}
					else if (Function_148(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_149(iVar0);
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
			Function_149(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_148(bool bParam0, vector3 vParam1) //Position: 0x82C6 / 33478
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_122(bParam0);
		vVar0 = { StackVal, StackVal, Function_122(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_149(int iParam0) //Position: 0x8340 / 33600
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

bool Function_150(vector3 vParam0) //Position: 0x83A1 / 33697
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
					fVar6 = VDIST(vParam0, vVar3);
					if ((fVar6 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
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

int Function_151(vector3 vParam0) //Position: 0x8442 / 33858
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

bool Function_152(vector3 vParam0) //Position: 0x848E / 33934
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

bool Function_153(vector3 vParam0) //Position: 0x84E7 / 34023
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

int Function_154(int iParam0) //Position: 0x8564 / 34148
{
	float fVar0;
	bool bVar1;
	
	Function_127(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_157(0);
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
		Function_156(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_155(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_155(struct<33> Param0) //Position: 0x86FF / 34559
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

void Function_156(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x882B / 34859
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

void Function_157(float fParam0) //Position: 0x887C / 34940
{
	if (fParam0 < 0.1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * fParam0), fParam0);
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

int Function_158(int iParam0, vector3 vParam1) //Position: 0x88C0 / 35008
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_160();
	Function_157(0);
	Function_159(0);
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
		Function_156(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_155(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_159(bool bParam0) //Position: 0x8A62 / 35426
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

void Function_160() //Position: 0x8B15 / 35605
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_161(var uParam0, int iParam1) //Position: 0x8B24 / 35620
{
	var uVar0;
	bool bVar6;
	float fVar7;
	bool bVar8;
	float fVar9;
	var uVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	int iVar25;
	int iVar31;
	
	uVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(uVar10) < 0)
	{
		UNK_0xDF93BD7C(uVar10);
		vVar11 = { 0.0f, 0.0f, 0.0f };
		return StackVal, StackVal, vVar11;
	}
	GET_POINT_FROM_CURVE_QUERY(uVar10, 0, &uVar0);
	bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar10, 0);
	if (IS_OBJECT_VALID(bVar6))
	{
		vVar16 = { StackVal, StackVal, *iParam1 };
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &iVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &iVar31);
		Function_144(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_144(&iVar25), StackVal) };
		Function_144(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_144(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_127(&fVar7, &bVar8);
		fVar9 = ((fVar7 + bVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(uVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &iVar31);
			Function_144(&iVar31);
			vVar11 = { StackVal, StackVal, Function_144(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_144(&iVar25);
			vVar11 = { StackVal, StackVal, Function_144(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(uVar10);
	return StackVal, StackVal, vVar11;
}

int Function_162(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x8C31 / 35889
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
		if (!Function_17(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*uParam0 = (*uParam0 + 0.01f);
		uParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_17(StackVal, StackVal, *iParam2))
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
		WAIT(0);
	}
	return 0;
}

bool Function_163(bool bParam0) //Position: 0x8D63 / 36195
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_164(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x8D79 / 36217
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	
	fVar4 = 50.0f;
	fVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		fVar2 = VDIST(vVar5, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (fVar2 < fParam4)
				{
					if (fVar3 > 0.0f || fVar2 > fVar3)
					{
						if (Function_146(&vVar5, &fVar4, 0, 0))
						{
							fVar3 = fVar2;
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

var Function_165(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x8E21 / 36385
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	vector3 vVar5;
	
	fVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		fVar2 = VDIST(vVar5, vParam1);
		if (fVar2 < fParam4)
		{
			if (fVar3 > 0.0f || fVar2 > fVar3)
			{
				if (Function_146(&vVar5, &uVar4, 0, 0))
				{
					fVar3 = fVar2;
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

var Function_166(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x8EAA / 36522
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		fVar2 = VDIST(vVar4, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (fVar2 < fParam4)
				{
					if (fVar3 > 0.0f || fVar2 > fVar3)
					{
						fVar3 = fVar2;
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

var Function_167(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x8F3F / 36671
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		fVar2 = VDIST(vVar4, vParam1);
		if (fVar2 < fParam4)
		{
			if (fVar3 > 0.0f || fVar2 > fVar3)
			{
				fVar3 = fVar2;
				bVar1 = bVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

float Function_168(bool bParam0) //Position: 0x8FBC / 36796
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_127(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

int Function_169(int iParam0) //Position: 0x8FF7 / 36855
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_207());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_207());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_170(bool bParam0, int iParam1) //Position: 0x9028 / 36904
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
	Function_147(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_171(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_171(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x9189 / 37257
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_174("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_172(bool bParam0, vector3 vParam1) //Position: 0x9224 / 37412
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_173(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_173(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x9254 / 37460
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

struct<32> Function_174(bool bParam0) //Position: 0x9277 / 37495
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_175("0", &cVar8, ""), 4);
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

struct<32> Function_175(char* cParam0, char* cParam1, char* cParam2) //Position: 0x92E1 / 37601
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_176(int iParam0) //Position: 0x9300 / 37632
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_181();
	iVar1 = 0;
	if (!Function_4(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_180(iParam0[iVar03], 8);
		}
		else if (Function_179())
		{
			iVar1 = 1;
			Function_180(iParam0[iVar03], 8);
		}
		Function_180(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_4(iParam0[03], 8) || iVar1));
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
				Function_180(iParam0[iVar03], 1);
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
							Function_180(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_180(iParam0[iVar03], 2);
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
							Function_180(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_180(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_180(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_180(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_180(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_180(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_180(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_180(iParam0[iVar03], 2);
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
	Function_177();
	return 1;
}

void Function_177() //Position: 0x967B / 38523
{
	if (!Function_178(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_178(int iParam0) //Position: 0x96BB / 38587
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_179() //Position: 0x96D7 / 38615
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

void Function_180(var uParam0, int iParam1) //Position: 0x9702 / 38658
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_181() //Position: 0x9713 / 38675
{
	if (!Function_178(128))
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

void Function_182(bool bParam0, int iParam1) //Position: 0x9755 / 38741
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *bParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_183(bParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_183(int iParam0) //Position: 0x9782 / 38786
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(*iParam0);
		if (IS_ACTOR_ANIMAL(*iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(*iParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(*iParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(*iParam0, 1);
		}
	}
	return;
}

void Function_184(var uParam0, int iParam1) //Position: 0x97C4 / 38852
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		Function_185(uParam0[iVar0]);
		iVar0++;
	}
	return;
}

void Function_185(int iParam0) //Position: 0x97F1 / 38897
{
	if (IS_ACTOR_VALID(*iParam0))
	{
		SET_DRAW_ACTOR(*iParam0, 0);
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

bool Function_186(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9834 / 38964
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

void Function_187(var uParam0, int iParam1) //Position: 0x989C / 39068
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

var Function_188(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x98BE / 39102
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_189(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_180(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_189(var uParam0, int iParam1, int iParam2) //Position: 0x98F6 / 39158
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_4(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_180(uParam0[iVar03], 4);
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

var Function_190(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x99BA / 39354
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
			Function_180(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_180(uParam0[iVar03], 8);
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

int Function_191(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9A8A / 39562
{
	return Function_192(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_192(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x9AA3 / 39587
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_195(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_195(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_195(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_195(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_195(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_195(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_195(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_195(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_195(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_195(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_195(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_195(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_195(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_195(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_193(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_193(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x9CF8 / 40184
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_194(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_194(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_194(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_194(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_194(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_194(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_194(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_194(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_194(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_194(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_194(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_194(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_194(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_194(Global_30750[13], bVar0);
	}
	return Function_195(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_194(bool bParam0, bool bParam1) //Position: 0x9E49 / 40521
{
	int iVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		iVar0++;
	}
	return;
}

var Function_195(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x9F07 / 40711
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
		Function_200();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_124(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_199(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_199(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_198(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_124(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_198(bVar0))
				{
					Function_197();
				}
				Function_196(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_124(bVar1))
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

void Function_196(int iParam0) //Position: 0xA1FA / 41466
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

void Function_197() //Position: 0xA2AE / 41646
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

bool Function_198(bool bParam0) //Position: 0xA2E8 / 41704
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

void Function_199(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA315 / 41749
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

void Function_200() //Position: 0xA466 / 42086
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_197();
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
	Function_197();
	return;
}

int Function_201(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xA4B1 / 42161
{
	return Function_202(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_202(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA4C5 / 42181
{
	return Function_195(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

int Function_203(int iParam0, int iParam1) //Position: 0xA4DE / 42206
{
	int iVar0;
	
	iVar0 = (Global_16876[iParam06].f_12 % iParam1);
	return iVar0;
}

var Function_204(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xA4F4 / 42228
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0.75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1.25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0.75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_33(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_205(17), Global_34573))
		{
			bVar0 = (bVar0 * 1.2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1.1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_205(bool bParam0) //Position: 0xA5F6 / 42486
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

void Function_206(var uParam0, float fParam1) //Position: 0xA6E7 / 42727
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_134(uParam0, 1);
	Function_93(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_207() //Position: 0xA708 / 42760
{
	bool bVar0;
	
	return bVar0;
}

var Function_208(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0xA710 / 42768
{
	int iVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	vector3 vVar296;
	vector3 vVar299;
	float fVar302;
	float fVar303;
	float fVar304[146];
	float fVar451[146];
	int iVar598;
	int iVar599;
	int iVar600;
	int iVar601;
	int iVar602;
	int iVar603;
	struct<8> Var604;
	
	iVar0 = 4294967295;
	fVar303 = 1.001638E+07.0f;
	iVar601 = 0;
	iVar602 = 0;
	iVar603 = 0;
	iVar598 = 0;
	while (iVar598 < 145)
	{
		iVar1[iVar598] = 4294967295;
		iVar148[iVar598] = 4294967295;
		iVar598++;
	}
	if (!Function_163(iParam0))
	{
		iParam0 = Global_29005;
	}
	iVar295 = Function_220(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	iVar598 = 0;
	while (iVar598 < 145)
	{
		Function_121(StackVal);
		vVar296 = { StackVal, StackVal, Function_121(StackVal) };
		fVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_220(Global_29155[iVar59810]) || iParam0 != 4294967295)) != 1) && Function_219(&(Global_29008[iVar598]), 8192)) && iVar598 == 0)
		{
			if (iVar598 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (fVar302 > fVar303)
			{
				fVar303 = fVar302;
				iVar600 = iVar598;
			}
			if (fVar302 < fParam1 && fVar302 > fParam2)
			{
				iVar1[iVar601] = iVar598;
				fVar304[iVar601] = fVar302;
				iVar601++;
				if (Function_212(Function_214(iVar598, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[iVar602] = iVar598;
					fVar451[iVar602] = fVar302;
					iVar602++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (iVar601 == iVar1)
		{
			iVar598 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		iVar598++;
	}
	if (iParam5 != 4294967295)
	{
		Function_211(&iVar1, &fVar304, iVar601);
		Function_211(&iVar148, &fVar451, iVar602);
	}
	if (iVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_26(3, iVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_26(5, iVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_26(7, iVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_26(10, iVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_26(5, iVar602);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar148[iVar599];
		if (Function_163(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_210();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_209(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_121(StackVal);
		vVar296 = { StackVal, StackVal, Function_121(StackVal) };
		fVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(fVar302);
		PRINTNL();
	}
	else if (iVar601 >= 0)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_26(3, iVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_26(5, iVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_26(7, iVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_26(10, iVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_26(5, iVar601);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		iVar0 = iVar1[iVar599];
		if (Function_163(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_210();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_209(iVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_121(StackVal);
		vVar296 = { StackVal, StackVal, Function_121(StackVal) };
		fVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(fVar302);
		PRINTNL();
	}
	else
	{
		LOG_ERROR("No valid landmark picked");
		PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK found no valid landmarks");
		PRINTNL();
		return iVar600;
	}
	return iVar0;
}

struct<32> Function_209(int iParam0) //Position: 0xADB9 / 44473
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_163(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, Global_29155[iParam010].f_20, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(StackVal))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_210() //Position: 0xAE76 / 44662
{
	if (Global_29004 == 0)
	{
		return Global_30640[6];
	}
	if (Global_29004 == 1)
	{
		return Global_30693[3];
	}
	return Global_30723[5];
}

void Function_211(int iParam0, float fParam1, int iParam2) //Position: 0xAEA4 / 44708
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = (*fParam1)[iVar0];
		uVar2 = (*iParam0)[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if ((*fParam1)[iVar1] < fVar3)
			{
				(*fParam1)[iVar1 + 1] = (*fParam1)[iVar1];
				(*iParam0)[iVar1 + 1] = (*iParam0)[iVar1];
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					iVar4 = 1;
				}
			}
			else
			{
				iVar4 = 1;
			}
		}
		(*iParam0)[iVar1 + 1] = uVar2;
		(*fParam1)[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

int Function_212(int iParam0) //Position: 0xAF32 / 44850
{
	if (!Function_213(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_213(int iParam0) //Position: 0xAF4C / 44876
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_214(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAF63 / 44899
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_218(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_215(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_215(bParam0, bParam1, bParam2, 4294967295);
}

int Function_215(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xAFC1 / 44993
{
	var uVar0;
	
	if (!Function_217(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_218(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_216(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_216(int iParam0) //Position: 0xB116 / 45334
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_217(int iParam0) //Position: 0xB154 / 45396
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_218(int iParam0, int iParam1, int iParam2) //Position: 0xB169 / 45417
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_219(var uParam0, int iParam1) //Position: 0xB189 / 45449
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_220(int iParam0) //Position: 0xB1A5 / 45477
{
	return Function_221(iParam0);
}

int Function_221(int iParam0) //Position: 0xB1B0 / 45488
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_163(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

