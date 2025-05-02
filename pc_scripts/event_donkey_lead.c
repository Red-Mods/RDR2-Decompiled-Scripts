//Decompiled with MagicRDR v1.0
//Function Count : 180
//Statics Count : 97
//Natives Count : 298
//Parameters Count : 62

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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	bool bLocal_34 = false;
	struct<65> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<2> Var5;
	var uVar8;
	bool bVar10;
	bool bVar11;
	struct<2> Var12;
	struct<2> Var14;
	bool bVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	bool bVar23;
	int iVar24;
	int iVar25;
	bool bVar26;
	var uVar27;
	struct<113> Var30;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_29 = 0;
	iVar0 = 600;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	bVar23 = false;
	iVar24 = 0;
	iVar25 = 0;
	bVar26 = false;
	fVar66 = 0.0f;
	iVar68 = 0;
	uVar71 = 8;
	if (Function_179(7, 2) == 0)
	{
		iVar88[0] = 1000;
		iVar88[1] = 268;
	}
	else
	{
		iVar88[0] = 1001;
		iVar88[1] = 270;
	}
	Function_178(&uVar71, iVar88[0], 2, 0);
	Function_178(&uVar71, iVar88[1], 2, 0);
	Function_177(iVar88[1]);
	Function_175(&uVar71, "pull_leash", 5, 0);
	Function_175(&uVar71, "custom/pull_leash", 8, 0);
	Function_175(&uVar71, "stand_yelling", 5, 0);
	Function_175(&uVar71, "custom/stand_yelling", 8, 0);
	Function_175(&uVar71, "stand_ambient", 5, 0);
	Function_175(&uVar71, "custom/stand_ambient", 8, 0);
	uVar91 = CREATE_LAYOUT(Function_174());
	if (!IS_LAYOUTREF_VALID(&uVar91))
	{
		iVar1 = 5;
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	iVar92 = 0;
	bVar93 = false;
	while (!IS_EXITFLAG_SET())
	{
		iVar0 = 600;
		if (Function_173(&bVar93, &iVar1, &iVar92, &iVar0, bVar23))
		{
			if (bVar93)
			{
				Function_172(&bVar10);
				Function_172(&bVar11);
			}
			else
			{
				Function_171(&bVar10);
				Function_171(&bVar11);
			}
		}
		uVar4 = GET_PLAYER_ACTOR(0);
		GET_POSITION(&uVar4, &Var5);
		switch (iVar1)
		{
			case 0x00000000:
				if (Function_165(&uVar71))
				{
					iVar1 = 1;
					iVar0 = 0;
				}
				break;
			
			case 0x00000001:
				if (Function_130(&ScriptParam_0, &iVar0, &iVar2, &iVar3, 1))
				{
					iVar1 = 2;
				}
				else if (iVar3 == 1)
				{
					iVar1 = 5;
				}
				break;
			
			case 0x00000002:
				if (VDIST(Var5, *(&ScriptParam_0 + 16)) > Function_129())
				{
					iVar1 = 5;
					iVar0 = 0;
					break;
				}
				bVar11 = CREATE_ACTOR_IN_LAYOUT(&uVar91, Function_174(), iVar88[1], *(&ScriptParam_0 + 16), *(&ScriptParam_0 + 28));
				SET_ACTOR_CAN_PLAY_GESTURES(&bVar11, false);
				Var69 = Vector(StackVal, StackVal, StackVal) - Vector(*(&ScriptParam_0 + 16), Global_54078, StackVal);
				Var69 = Vector(StackVal, StackVal, StackVal) / Vector(FtoV(Function_128(Var69, &Global_54076, *(&ScriptParam_0 + 16))), StackVal, StackVal);
				VSCALE(&Var69, 7.0f);
				Var64 = Vector(StackVal, StackVal, StackVal) - Vector(Var69, *(&ScriptParam_0 + 16), StackVal);
				bVar10 = CREATE_ACTOR_IN_LAYOUT(&uVar91, Function_174(), iVar88[0], Var64, *(&ScriptParam_0 + 28));
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bVar11, 1);
				if (!IS_ACTOR_VALID(&bVar10) || !IS_ACTOR_VALID(&bVar11))
				{
					iVar1 = 5;
					iVar0 = 0;
					break;
				}
				iLocal_28 = Function_125(StackVal, Global_54078, 0x42200000, 1);
				if (!Function_124(iLocal_28))
				{
					iVar1 = 5;
					iVar0 = 0;
					break;
				}
				TASK_STAND_STILL(&bVar10, -1.0f, 0, 0);
				uVar27 = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR(&bVar10), Function_174(), 10f, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
				if (IS_OBJECT_VALID(&uVar27))
				{
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uVar27, &bVar10, "LowLip1", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 1);
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &uVar27, &bVar11, "wrist_r", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 1, 1);
					LEASH_CONSTRAIN(&uVar27);
					LEASH_RESTART(&uVar27);
					LEASH_SET_CONSTRAINT_LENGTH(&uVar27, 3,5f);
					LEASH_SET_LEASH_LENGTH(&uVar27, 2,5f);
				}
				MAKE_ACTOR_READY_FOR_ACTION(&bVar11, 1);
				GET_VOLUME_CENTER(&Global_44085[iLocal_289] + 8, &uVar8);
				Function_123(StackVal, &Var30, Global_54078);
				Function_122(&bVar11);
				uVar62 = Function_121(StackVal, Function_122(&bVar11), 16, 0.0f, 35.0f, 2.0f);
				Function_122(&bVar11);
				Function_117(StackVal, StackVal, &Var30, Function_122(&bVar11), Vector(0.0f, Function_120(&bVar11), 0.0f), &uVar62, 1, 1);
				Var30.f_4 = 1;
				Var30.f_112 = 1;
				SQUAD_JOIN(&bVar11, &Var30 + 8);
				Function_75(&Var30, 0, 1, 1);
				fVar20 = GET_CURRENT_GAME_TIME();
				iVar1 = 3;
				iVar0 = 0;
				break;
			
			case 0x00000003:
				PRINTNL();
				Function_67(&bVar11, &bVar10);
				if (!bVar63)
				{
					Function_75(&Var30, 0, 1, 1);
				}
				Function_66();
				Function_52(StackVal, Function_66(), &bVar23, ScriptParam_0.f_64, &bVar11, 100, 0x42a00000, 1);
				if (!Function_45(ScriptParam_0.f_64, &bVar11, &iVar24, &iVar25, 0, 1, 1, 1))
				{
					iVar1 = 5;
					iVar0 = 0;
					break;
				}
				if (IS_ACTOR_VALID(&bVar10))
				{
					if (GET_LAST_ATTACKER(&bVar10) == &Global_54076)
					{
						LEASH_BREAK(&uVar27, 1056964608);
						DESTROY_OBJECT(&uVar27);
						if (Function_41(&bVar11, 0))
						{
							Function_40(&bVar11, &Global_54076);
						}
						TASK_FLEE_ACTOR(&bVar10, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
						TASK_PRIORITY_SET(&bVar10, false);
						iVar68 = 1;
						iVar1 = 5;
						iVar0 = 0;
						break;
					}
				}
				if (Function_37(&bVar11, &iLocal_27, &fVar66, 0, 0, 0x40400000) || GET_LAST_ATTACKER(&bVar10) != &Global_54076)
				{
					LEASH_BREAK(&uVar27, 1056964608);
					DESTROY_OBJECT(&uVar27);
					if (Function_41(&bVar11, 0))
					{
						if (iLocal_27 == 8)
						{
							Function_40(&bVar11, &Global_54076);
						}
						else
						{
							RESET_ANIM_SET_FOR_ACTOR(&bVar11, 1);
							Function_36(&bVar11);
							iVar67 = TASK_SEQUENCE_OPEN();
							TASK_TAUNT_ACTOR(0, &Global_54076, 0.0f, 20.0f, 0, 2.0f);
							TASK_FOLLOW_ACTOR(&bVar11, &bVar10);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bVar11, iVar67);
							TASK_SEQUENCE_RELEASE(iVar67, 1);
						}
					}
					if (Function_41(&bVar10, 0))
					{
						TASK_FLEE_ACTOR(&bVar10, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
						TASK_PRIORITY_SET(&bVar10, false);
					}
					iVar68 = 1;
					iVar1 = 5;
					iVar0 = 0;
					break;
				}
				if (Function_35(&bVar10))
				{
					if (Function_41(&bVar11, 0))
					{
						Function_40(&bVar11, &Global_54076);
					}
					LEASH_BREAK(&uVar27, 1056964608);
					DESTROY_OBJECT(&uVar27);
					if (Function_41(&bVar10, 0))
					{
						TASK_CLEAR(&bVar10);
						TASK_PRIORITY_SET(&bVar10, 2);
					}
					iVar68 = 1;
					iVar1 = 5;
					iVar0 = 0;
					break;
				}
				if (IS_ACTOR_RIDING(&bVar11))
				{
					if (GET_MOUNT(&bVar11) == &bVar10)
					{
						TASK_CLEAR(&bVar11);
						TASK_FLEE_ACTOR(&bVar11, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
						TASK_CLEAR(&bVar10);
						iVar68 = 1;
						iVar1 = 5;
						iVar0 = 0;
						break;
					}
				}
				if (!bVar26)
				{
					if (Function_34(&bVar11, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_18(28);
						bVar26 = true;
					}
				}
				GET_POSITION(&bVar10, &Var12);
				GET_POSITION(&bVar11, &Var14);
				if (((VDIST(Var5, Var12) < Function_16(1) && VDIST(Var5, Var14) < Function_16(1)) || !IS_ACTOR_ALIVE(&bVar10)) || !IS_ACTOR_ALIVE(&bVar11))
				{
					iVar1 = 5;
					iVar0 = 0;
					break;
				}
				fVar19 = (GET_CURRENT_GAME_TIME() - fVar20);
				if (GET_MOUNT(&uVar4) == &bVar10)
				{
					LEASH_BREAK(&uVar27, 1056964608);
					DESTROY_OBJECT(&uVar27);
					if (!bVar18 && fVar19 <= 1.0f)
					{
						bVar18 = true;
						RESET_ANIM_SET_FOR_ACTOR(&bVar11, 0);
						SET_ANIM_SET_FOR_ACTOR(&bVar11, "stand_ambient", 0);
						TASK_CLEAR(&bVar11);
						TASK_FOLLOW_OBJECT_AT_DISTANCE(&bVar11, &uVar4, 0.0f, 2);
					}
					else if (bVar18 && VDIST(Var14, Var5) >= 4.0f)
					{
						bVar18 = false;
						TASK_CLEAR(&bVar11);
						iVar21 = Function_15(&uVar4);
						TASK_SEQUENCE_PERFORM(&bVar11, iVar21);
						TASK_SEQUENCE_RELEASE(iVar21, 1);
						TASK_MOUNT(&bVar11, &bVar10, 1, 1, 2, 2147483647);
						switch (RAND_INT_RANGE(0, 5))
						{
							case 0x00000000:
								Function_13(&bVar11, &Global_54076, "event_donkey_lead_yell_01", "event_donkey_lead_yell_01", 5, 60, 1, 1);
								break;
							
							case 0x00000001:
								Function_13(&bVar11, &Global_54076, "event_donkey_lead_yell_02", "event_donkey_lead_yell_02", 5, 60, 1, 1);
								break;
							
							case 0x00000002:
								Function_13(&bVar11, &Global_54076, "event_donkey_lead_yell_03", "event_donkey_lead_yell_03", 5, 60, 1, 1);
								break;
							
							case 0x00000003:
								Function_13(&bVar11, &Global_54076, "event_donkey_lead_yell_04", "event_donkey_lead_yell_04", 5, 60, 1, 1);
								break;
							
							case 0x00000004:
								Function_13(&bVar11, &Global_54076, "event_donkey_lead_yell_05", "event_donkey_lead_yell_05", 5, 60, 1, 1);
								break;
							
							case 0x00000005:
								Function_13(&bVar11, &Global_54076, "event_donkey_lead_yell_06", "event_donkey_lead_yell_06", 5, 60, 1, 1);
								break;
						}
						fVar20 = GET_CURRENT_GAME_TIME();
					}
				}
				break;
			
			case 0x00000005:
				iVar1 = 6;
				iVar0 = 0;
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iVar0 = 0;
				break;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(iVar0);
		}
	}
	Function_171(&bVar10);
	Function_171(&bVar11);
	if (iVar68 == 0)
	{
		if (IS_OBJECT_VALID(&uVar27))
		{
			LEASH_BREAK(&uVar27, 1056964608);
			DESTROY_OBJECT(&uVar27);
		}
		Function_12(&bVar10);
		Function_12(&bVar11);
	}
	if (!bVar23)
	{
		if (IS_OBJECT_VALID(&uVar27))
		{
			LEASH_BREAK(&uVar27, 1056964608);
			DESTROY_OBJECT(&uVar27);
		}
		Function_12(&bVar10);
		Function_12(&bVar11);
		if (IS_OBJECT_VALID(&uVar91))
		{
			UNK_0xA936E73B(&uVar91, 1);
			MARK_OBJECT_FOR_AGGRESSIVE_CLEANUP(&uVar91, 1);
		}
	}
	if (ScriptParam_0.f_40)
	{
		Global_6642 = 0;
	}
	if (!bVar23)
	{
		Function_6(ScriptParam_0.f_64, 0.0f, 0, 1, 0);
	}
	Function_5(iVar88[1]);
	Function_1(&uVar71);
	RELEASE_LAYOUT_REF(&uVar91);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x9CA / 2506
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x9F2 / 2546
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

void Function_3(struct<13> Param0) //Position: 0xB3D / 2877
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0xB5A / 2906
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(bool bParam0) //Position: 0xB78 / 2936
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

bool Function_6(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xB83 / 2947
{
	bool bVar0;
	bool bVar1;
	
	if (Global_47151[16])
	{
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
	}
	fParam1 = &fParam1;
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_6642 = 0;
		Function_8("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_27462[iParam052].f_184 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_6608)
			{
				if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_6608 = 1;
			Global_10986 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(&Global_27462[iParam052] + 368);
		if (Global_47151[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_7(&bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_7(&bVar0);
		}
		if (!&bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_47151[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_7(&bVar0);
		}
		*(&Global_27462[iParam052] + 376) = &bVar0;
		Global_26652[iParam04] = &bVar0;
		if (&bParam2)
		{
			Global_26652[iParam04].f_8 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_27462[iParam052].f_184 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_6608)
				{
					if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_6608 = 1;
				Global_10986 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_7(bool bParam0) //Position: 0xDEF / 3567
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&bParam0));
	return;
}

void Function_8(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xE39 / 3641
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_9(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

struct<16> Function_9(int iParam0) //Position: 0xEBE / 3774
{
	char* cVar0[16];
	
	if (!Function_10())
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

bool Function_10() //Position: 0xEFD / 3837
{
	if (Function_11(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_11(int iParam0, int iParam1) //Position: 0xF18 / 3864
{
	return (iParam0 && iParam1) == 0;
}

void Function_12(bool bParam0) //Position: 0xF25 / 3877
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bParam0, 0);
		TASK_FLEE_ACTOR(&bParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		TASK_PRIORITY_SET(&bParam0, false);
	}
	return;
}

void Function_13(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0xF55 / 3925
{
	iParam1 = &iParam1;
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0) && Function_14(&uParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&iParam1))
			{
				iParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&uParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&uParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&uParam0, &iParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&uParam0, &iParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&uParam0, &iParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

float Function_14(var uParam0, int iParam1) //Position: 0x1002 / 4098
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

var Function_15(int iParam0) //Position: 0x10F7 / 4343
{
	int iVar0;
	
	iVar0 = TASK_SEQUENCE_OPEN();
	TASK_FACE_ACTOR(0, &iParam0, 0, 3212836864);
	TASK_ACTION_PERFORM(0, "stand_ambient/two_hnd_pause");
	TASK_SEQUENCE_CLOSE();
	return iVar0;
}

float Function_16(bool bParam0) //Position: 0x1137 / 4407
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_17(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_17(float fParam0, int iParam1) //Position: 0x1173 / 4467
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		fParam0 = 65.0f;
		iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		fParam0 = 115.0f;
		iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			fParam0 = 130.0f;
			iParam1 = 190.0f;
		}
		else
		{
			fParam0 = 130.0f;
			iParam1 = 190.0f;
		}
	}
	return;
}

void Function_18(int iParam0) //Position: 0x1204 / 4612
{
	Global_26652[iParam04].f_20++;
	if (Global_26652[iParam04].f_20 == 1)
	{
		Function_19(409, 1, 0, 0);
	}
	return;
}

int Function_19(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1235 / 4661
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
	Function_33(iParam0, TO_FLOAT(bParam1), 1);
	Function_32(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_21(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_20(iParam0);
	return 1;
}

void Function_20(bool bParam0) //Position: 0x145D / 5213
{
	switch (bParam0)
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

void Function_21(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x14FB / 5371
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_31(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_30(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_30(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_28(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_25(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_22(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_174(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_22(int iParam0) //Position: 0x1B39 / 6969
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_23(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1B4A / 6986
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_24(char* cParam0) //Position: 0x1C41 / 7233
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_25(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1C5C / 7260
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_27(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_26(Function_27(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_26(int iParam0, int iParam1) //Position: 0x1CC3 / 7363
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_27(int iParam0, bool bParam1) //Position: 0x1CD5 / 7381
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_28(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1CE7 / 7399
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
	if (((Function_29(iParam0) != 19 || Function_29(iParam0) != 17) || Function_29(iParam0) != 10) || Function_29(iParam0) != 9)
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

int Function_29(int iParam0) //Position: 0x1E1B / 7707
{
	return Global_55480[iParam016].f_96;
}

float Function_30(int iParam0) //Position: 0x1E2A / 7722
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_31(int iParam0) //Position: 0x1E63 / 7779
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_32(int iParam0) //Position: 0x1EA0 / 7840
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

int Function_33(int iParam0, float fParam1, bool bParam2) //Position: 0x203A / 8250
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
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
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

bool Function_34(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x227E / 8830
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

bool Function_35(int iParam0) //Position: 0x229E / 8862
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_36(bool bParam0) //Position: 0x22AD / 8877
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (DECOR_CHECK_EXIST(&bParam0, "nnostickup"))
		{
			DECOR_REMOVE(&bParam0, "nnostickup");
		}
		AI_SET_ENABLE_STICKUP_OVERRIDE(&bParam0, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bParam0, 1);
		SET_ACTOR_CUTSCENE_MODE(&bParam0, 0);
		TASK_PRIORITY_SET(&bParam0, 2);
	}
	return;
}

int Function_37(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x2300 / 8960
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
		fVar0 = Function_14(&iParam0, &Global_54076);
		if (!Function_11(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_38(&iParam0);
				return 1;
			}
		}
		if (!Function_11(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_38(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_38(&iParam0);
				return 1;
			}
		}
		if (!Function_11(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_38(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_38(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_11(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_38(&iParam0);
				return 1;
			}
		}
		if (!Function_11(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_38(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_38(int iParam0) //Position: 0x24C9 / 9417
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_39(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_39(int iParam0) //Position: 0x2506 / 9478
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

int Function_40(int iParam0, int iParam1) //Position: 0x251F / 9503
{
	if (IS_ACTOR_HUMAN(&iParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(&iParam0) == 0)
		{
			TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&iParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(&iParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(&iParam0, &iParam1, 1);
	TASK_KILL_CHAR(&iParam0, &iParam1);
	TASK_PRIORITY_SET(&iParam0, true);
	return 1;
}

bool Function_41(int iParam0, bool bParam1) //Position: 0x2615 / 9749
{
	if (&bParam1)
	{
		if (IS_ACTOR_HOGTIED(&iParam0))
		{
			if (!(GET_TASK_STATUS(&iParam0, 25) != 1 || GET_TASK_STATUS(&iParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(&iParam0, 0);
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&iParam0, true);
			}
			Function_43(&iParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 163840))
		{
			Function_43(&iParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_42(&iParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_42(int iParam0, int iParam1) //Position: 0x26C0 / 9920
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(&iParam0))
		{
			return 1;
		}
		uVar0 = SQUAD_GET(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_43(int iParam0) //Position: 0x2712 / 10002
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_44(&iParam0);
		return 1;
	}
	return 0;
}

void Function_44(bool bParam0) //Position: 0x272A / 10026
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		}
	}
	return;
}

bool Function_45(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x275D / 10077
{
	if (StackVal & 64 == 64)
	{
		if (!uParam2)
		{
			if (IS_ACTOR_VALID(&iParam1))
			{
				if (Function_14(&Global_54076, &iParam1) > 15.0f)
				{
					uParam2 = 1;
				}
			}
		}
		if (Global_6637 && !uParam2)
		{
			return 0;
		}
		if ((Global_6608 && Global_10986 == GET_THIS_SCRIPT_ID()) && !uParam2)
		{
			return 0;
		}
		if (Function_48() && !uParam2)
		{
			return 0;
		}
		if (Function_47(iParam0) && !uParam2)
		{
			return 0;
		}
		if (Global_6630 && !&bParam4)
		{
			return 0;
		}
		if (Global_6653)
		{
			return 0;
		}
		if (Global_6627)
		{
			return 0;
		}
		if (Global_6646 && uParam7)
		{
			uParam3 = 1;
			return 0;
		}
		if (Global_6647 && uParam7)
		{
			uParam3 = 1;
			return 0;
		}
		if (Global_6635 && !uParam2)
		{
			return 0;
		}
		if (Global_6636 && !uParam2)
		{
			return 0;
		}
		if (&bParam6)
		{
			if (Global_99146 && !uParam2)
			{
				return 0;
			}
		}
		if (IS_ACTOR_ON_TRAIN(&Global_54076, 0))
		{
			return 0;
		}
	}
	if (StackVal & 2048 != 2048)
	{
		if (!Function_46(iParam0, &uParam5))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_46(int iParam0, int iParam1) //Position: 0x28A0 / 10400
{
	iParam0 = iParam0;
	if (Global_6625 != 1 && iParam1)
	{
		return 0;
	}
	if (Global_6610 == 1)
	{
		return 0;
	}
	return 1;
}

int Function_47(int iParam0) //Position: 0x28C1 / 10433
{
	float fVar0;
	
	if (StackVal & 64 == 64)
	{
		fVar0 = GET_LAST_HIT_TIME(&Global_54076);
		if (fVar0 < 0.0f)
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&Global_54076)) > 20.0f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_48() //Position: 0x2901 / 10497
{
	int iVar0;
	int iVar1;
	
	if (Global_6629)
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
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					if (GET_THIS_SCRIPT_ID() != DECOR_GET_INT(&Global_39621[iVar05] + 16, "script"))
					{
						if (Function_49(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_49(&Global_54076, &Global_39621[iVar05] + 16) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_49(bool bParam0, var uParam1) //Position: 0x29C4 / 10692
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_51(&bParam0);
			Var0 = Function_51(&bParam0);
			Function_50(&uParam1);
			Var2 = Function_50(&uParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_50(int iParam0) //Position: 0x2A66 / 10854
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

struct<8> Function_51(bool bParam0) //Position: 0x2AD4 / 10964
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		GET_POSITION(&bParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_52(struct<2> Param0, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x2B40 / 11072
{
	int iVar0;
	
	iVar0 = 0;
	if (!uParam2)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(&uParam4))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam4, 1.0f, &uParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			uParam2 = 1;
		}
	}
	else if (!Function_65(StackVal, Param0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, 1.0f, &uParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			uParam2 = 1;
		}
	}
	if (uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_64(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_63(0);
		}
		if (&bParam7)
		{
			Function_61(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_59(iParam3);
			Global_6644 = 1;
		}
		Function_57(iParam3);
		if (Function_56(StackVal, 32768))
		{
			Function_53(1);
		}
		Global_26652[iParam34].f_16++;
		Function_19(408, 1, 0, 0);
	}
}

void Function_53(bool bParam0) //Position: 0x2C55 / 11349
{
	if (bParam0)
	{
		Function_55(0x10000000);
	}
	else
	{
		Function_54(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_54(int iParam0) //Position: 0x2C7A / 11386
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_55(int iParam0) //Position: 0x2C97 / 11415
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_56(var uParam0, int iParam1) //Position: 0x2CAA / 11434
{
	return (uParam0 && iParam1) == 0;
}

void Function_57(int iParam0) //Position: 0x2CB7 / 11447
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_11(StackVal, 524288))
	{
		if (Global_26652[iParam04].f_20 < 0 && Global_26652[iParam04].f_20 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_26652[iParam04].f_20 <= 2 && Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_58(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_58(int iParam0) //Position: 0x2D5D / 11613
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_59(int iParam0) //Position: 0x2D74 / 11636
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Global_47151[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_60(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_60(vector3 vParam0) //Position: 0x2E13 / 11795
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_61(int iParam0, int iParam1) //Position: 0x2E2F / 11823
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_62(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_62(struct<113> Param0) //Position: 0x2EB6 / 11958
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

void Function_63(int iParam0) //Position: 0x2F14 / 12052
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_58(900)), 0);
	return;
}

void Function_64(int iParam0) //Position: 0x2F38 / 12088
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_58(200)), 0);
	return;
}

bool Function_65(vector3 vParam0) //Position: 0x2F5B / 12123
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_66() //Position: 0x2F73 / 12147
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_67(var uParam0, bool bParam1) //Position: 0x2F7D / 12157
{
	bool bVar0;
	
	switch (iLocal_29)
	{
		case 0x00000000:
			if (!IS_AMBIENT_SPEECH_PLAYING(&uParam0))
			{
				bVar0 = FLOOR((TO_FLOAT(RAND_INT_RANGE(0, 19999)) / 5000.0f));
				bLocal_34 = FLOOR((TO_FLOAT(RAND_INT_RANGE(14000, 24999)) / 2000.0f));
				if (bVar0 == 0)
				{
					Function_13(&uParam0, &bParam1, "event_donkey_lead_yell_08", "event_donkey_lead_yell_01", 5, 60, 1, 1);
				}
				else if (bVar0 == 1)
				{
					Function_13(&uParam0, &bParam1, "event_donkey_lead_yell_07", "event_donkey_lead_yell_01", 5, 60, 1, 1);
				}
				else if (bVar0 == 2)
				{
					Function_13(&uParam0, &bParam1, "event_donkey_lead_yell_03", "event_donkey_lead_yell_01", 5, 60, 1, 1);
				}
				else
				{
					Function_13(&uParam0, &bParam1, "event_donkey_lead_yell_06", "event_donkey_lead_yell_01", 5, 60, 1, 1);
				}
				Function_72(&uLocal_30, 0.0f);
				iLocal_29 = 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_AMBIENT_SPEECH_PLAYING(&uParam0))
			{
				if (Function_68(&uLocal_30, TO_FLOAT(bLocal_34)))
				{
					Function_72(&uLocal_30, 0.0f);
					iLocal_29 = 0;
				}
			}
			else
			{
				Function_72(&uLocal_30, 0.0f);
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

bool Function_68(var uParam0, float fParam1) //Position: 0x3140 / 12608
{
	if (Function_71(&uParam0))
	{
		if (Function_69(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_69(vector3 vParam0) //Position: 0x315E / 12638
{
	if (Function_71(&vParam0))
	{
		if (Function_70(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_70(int iParam0) //Position: 0x322B / 12843
{
	return Function_11(iParam0, 2);
}

bool Function_71(int iParam0) //Position: 0x3239 / 12857
{
	return Function_11(iParam0, 1);
}

void Function_72(vector3 vParam0) //Position: 0x3247 / 12871
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_74(&vParam0, 1);
	Function_73(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_73(var uParam0, int iParam1) //Position: 0x326C / 12908
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_74(var uParam0, int iParam1) //Position: 0x3282 / 12930
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_75(struct<169> Param0) //Position: 0x3293 / 12947
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	
	iVar0 = 0;
	if (!SQUAD_IS_VALID(&Param0 + 8) && !(((Param0 != 0 || Param0 != 18) || Param0 != 16) || Param0 != 17))
	{
		Param0 = 0;
		return 4;
	}
	switch (Param0)
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
			Function_116(&Param0 + 36);
			Var1 = Vector(StackVal, StackVal, StackVal) - Vector(Function_116(&Param0 + 36), *(&Param0 + 220), StackVal);
			Function_116(&Param0 + 36);
			Var3 = Function_116(&Param0 + 36);
			vVar7 = { StackVal, StackVal, *(&Param0 + 36) };
			Function_114(StackVal, StackVal, StackVal, &Param0, vVar7, &Param0 + 192, Var1);
			*(&Param0 + 36) = { StackVal, StackVal, Function_114(StackVal, StackVal, StackVal, &Param0, vVar7, &Param0 + 192, Var1) };
			if (Function_113(&Param0 + 36))
			{
				Param0 = 16;
				return 3;
			}
			Function_116(&Param0 + 36);
			*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Var3, Function_116(&Param0 + 36), StackVal);
			*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
			if (&bParam1)
			{
				Function_105(&Param0, 0);
			}
			Param0 = 2;
			return 1;
			break;
		
		case 0x00000002:
			bVar11 = false;
			while (bVar11 <= SQUAD_GET_SIZE(&Param0 + 8))
			{
				TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar11));
				bVar11++;
			}
			if (Function_99(&Param0, &bParam1, &bParam3))
			{
				Param0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000003:
			if (!SQUAD_IS_VALID(&Param0 + 8))
			{
				Param0 = 16;
				return 4;
			}
			if (!IS_ACTOR_VALID(Function_98(&Param0 + 8)))
			{
				Param0 = 16;
				return 5;
			}
			GET_POSITION(Function_98(&Param0 + 8), &Var3);
			Function_97(StackVal, Var3);
			*(&Param0 + 36) = { StackVal, StackVal, Function_97(StackVal, Var3) };
			GET_ACTOR_VELOCITY(Function_98(&Param0 + 8), &Var1);
			GET_POSITION(Function_98(&Param0 + 8), &Var5);
			if (Function_113(&Param0 + 36))
			{
				Function_95(Function_98(&Param0 + 8));
				*(&Param0 + 36) = { StackVal, StackVal, Function_95(Function_98(&Param0 + 8)) };
				return 7;
			}
			if (Function_99(&Param0, &bParam1, &bParam3))
			{
				Param0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000006:
			iParam2 = &iParam2;
			if (Function_99(&Param0, &bParam1, &bParam3))
			{
				Param0 = 7;
			}
			else
			{
				return 6;
			}
			if (!Function_84(&Param0))
			{
				Param0 = 9;
				return 7;
			}
			if (!Function_99(&Param0, &bParam1, &bParam3))
			{
				Param0 = 16;
				return 6;
			}
			Param0 = 7;
		
		case 0x00000008:
			break;
		
		case 0x00000007:
			if (!Function_80(&Param0))
			{
				Param0 = 6;
				return 0;
			}
			if (&bParam1)
			{
				if (Function_78(&Param0))
				{
					bVar10 = true;
				}
				if (Function_77(&Param0 + 8))
				{
					bVar10 = true;
				}
				if (Param0.f_136 && Param0.f_112 < 2)
				{
					bVar10 = true;
				}
				if (Global_6646 && Param0.f_112 == 3)
				{
					bVar10 = true;
				}
				if (bVar10)
				{
					Function_105(&Param0, 0);
				}
			}
			GET_POSITION(Function_98(&Param0 + 8), &Var5);
			if (Param0.f_128)
			{
				if (!Function_65(StackVal, *(&Param0 + 176)))
				{
					if (Function_76(StackVal, StackVal, Var5, *(&Param0 + 176)) > Param0.f_168)
					{
						SQUAD_GOALS_CLEAR(&Param0 + 8);
						TASK_GO_TO_COORD(Function_98(&Param0 + 8), &Param0 + 176, 1);
						Param0 = 8;
						Param0.f_128 = 0;
						return 8;
					}
				}
			}
			break;
	}
	return iVar0;
}

float Function_76(struct<2> Param0, struct<2> Param2) //Position: 0x3605 / 13829
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

bool Function_77(int iParam0) //Position: 0x3622 / 13858
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		if (AI_GET_TASK_RETREAT_FLAG(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0)))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_78(struct<137> Param0) //Position: 0x3650 / 13904
{
	if (!IS_VOLUME_VALID(&Global_43580 + 40))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_79(&Param0 + 8, &Global_43580 + 40))
		{
			if (!Param0.f_136)
			{
				Param0.f_136 = 1;
				return 1;
			}
		}
		if (Param0.f_136)
		{
			Param0.f_136 = 0;
			return 1;
		}
	}
	if (Param0.f_136)
	{
		Param0.f_136 = 0;
		return 1;
	}
	return 0;
}

bool Function_79(var uParam0, int iParam1) //Position: 0x36C9 / 14025
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_VEHICLE(&uVar1))
			{
				if (IS_ACTOR_ALIVE(&uVar1))
				{
					if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_80(struct<201> Param0) //Position: 0x3757 / 14167
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	if (DECOR_CHECK_EXIST(&Param0 + 8, "coachService"))
	{
		return 1;
	}
	Function_116(&Param0 + 36);
	uVar4 = Function_83(StackVal, Function_116(&Param0 + 36), &Param0 + 8);
	GET_POSITION(&uVar4, &Var0);
	Function_116(&Param0 + 36);
	Var2 = Function_116(&Param0 + 36);
	if (Param0.f_200 > 1.0f)
	{
		Param0.f_200 = Function_82(StackVal, Param0.f_112);
	}
	if (StackVal > Function_81(VDIST(Var2, Var0), Function_82(Param0.f_200, Param0.f_112)))
	{
		Param0 = 6;
		return 0;
	}
	return 1;
}

float Function_81(bool bParam0, int iParam1) //Position: 0x37E9 / 14313
{
	if (bParam0 > iParam1)
	{
		return bParam0;
	}
	return iParam1;
}

int Function_82(int iParam0, int iParam1) //Position: 0x37FC / 14332
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
			switch (iParam0)
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
			switch (iParam0)
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

var Function_83(struct<2> Param0, int iParam2) //Position: 0x390D / 14605
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	struct<2> Var4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_65(StackVal, Param0))
	{
		LOG_WARNING("Invalid test vector passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	if (!SQUAD_IS_VALID(&iParam2))
	{
		LOG_WARNING("Invalid squad passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam2) - 1))
	{
		uVar3 = GET_OBJECT_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iParam2, bVar0));
		GET_OBJECT_POSITION(&uVar3, &Var4);
		if (VDIST(Param0, Var4) > bVar2 || bVar2 > 0.0f)
		{
			bVar2 = VDIST(Param0, Var4);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&iParam2, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR!");
	return "";
}

bool Function_84(int iParam0) //Position: 0x3A8C / 14988
{
	var uVar0;
	var uVar2;
	
	if (DECOR_CHECK_EXIST(&iParam0 + 8, "wasstickup"))
	{
		DECOR_REMOVE(&iParam0 + 8, "wasstickup");
		return 1;
	}
	Function_116(&iParam0 + 36);
	uVar2 = Function_83(StackVal, Function_116(&iParam0 + 36), &iParam0 + 8);
	GET_POSITION(&uVar2, &uVar0);
	Function_85(StackVal, StackVal, &iParam0, (&iParam0 + 36), &iParam0 + 192, 2,5f, 0);
	*(&iParam0 + 36) = { StackVal, StackVal, Function_85(StackVal, StackVal, &iParam0, (&iParam0 + 36), &iParam0 + 192, 2,5f, 0) };
	if (Function_113(&iParam0 + 36))
	{
		return 0;
	}
	return 1;
}

vector3 Function_85(struct<217> Param0) //Position: 0x3B0E / 15118
{
	vector3 vVar0;
	struct<2> Var3;
	int iVar5;
	bool bVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	var uVar11;
	struct<2> Var13;
	var uVar15;
	float fVar17;
	vector3 vVar18;
	var uVar21;
	int iVar22;
	var uVar23;
	float fVar24;
	struct<17> Var25;
	
	Function_116(&vParam1);
	Var3 = Function_116(&vParam1);
	iVar5 = 0;
	uVar7 = Function_94(StackVal, Param0.f_216);
	fVar8 = 0.0f;
	if (IS_OBJECTSET_VALID(&Param0 + 64))
	{
		fVar9 = 5.0f;
	}
	else
	{
		fVar9 = (fParam5 * 2.0f);
	}
	iVar10 = 0;
	GET_OBJECT_POSITION(Function_98(&Param0 + 8), &uVar11);
	Var13 = Vector(0.0f, 0.0f, -1.0f);
	if (!IS_OBJECTSET_VALID(&Param0 + 208))
	{
		*(&Param0 + 208) = CREATE_OBJECTSET_IN_LAYOUT(Function_174(), &Global_43578, 36, 1);
	}
	iVar22 = 4294967295;
	while (!bVar6)
	{
		uVar21 = START_CURVE_QUERY(&Global_43578, Var3, uVar7, fVar8, fVar9, Function_81(Function_93(&Param0), ((fVar9 - fVar8) / 2.0f)), 0);
		if (IS_OBJECT_VALID(&uParam4))
		{
			REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar21, &uParam4);
			if (!IS_OBJECT_IN_OBJECTSET(&uParam4, &Param0 + 208))
			{
				ADD_OBJECT_TO_OBJECTSET(&uParam4, &Param0 + 208);
			}
		}
		if (IS_OBJECTSET_VALID(&Param0 + 64))
		{
			iVar5 = 0;
			while (iVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar23 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, iVar5);
				if (!IS_OBJECT_IN_OBJECTSET(&uVar23, &Param0 + 64))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar21, &uVar23);
					RELEASE_CURVE(&uVar23);
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar23 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, iVar5);
				if (IS_OBJECT_IN_OBJECTSET(&uVar23, &Param0 + 208))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar21, &uVar23);
					RELEASE_CURVE(&uVar23);
				}
				iVar5++;
			}
		}
		if (!GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21) < 0)
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&uParam4, &Param0 + 208);
			UNK_0xDF93BD7C(&uVar21);
			Function_92(&Param0 + 208);
			ADD_OBJECT_TO_OBJECTSET(&uParam4, &Param0 + 208);
			if (uParam6 || iVar10 > 5)
			{
				fVar8 = fVar9;
				fVar9 = (fVar9 + fParam5);
				iVar10++;
			}
			else
			{
				Function_91();
				return StackVal, StackVal, Function_91();
			}
		}
		fVar24 = -100000.0f;
		iVar22 = 4294967295;
		iVar5 = 0;
		if (IS_OBJECTSET_VALID(&Param0 + 64))
		{
			iVar5 = 0;
			while (iVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar23 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, iVar5);
				if (IS_OBJECT_IN_OBJECTSET(&uVar23, &Param0 + 64))
				{
					GET_POINT_FROM_CURVE_QUERY(&uVar21, iVar5, &vVar18);
					Function_116(&vVar18);
					Function_116(&vParam1);
					uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_116(&vParam1), Function_116(&vVar18), StackVal);
					fVar17 = VDOT(&uVar15, &Var13);
					if (fVar17 < fVar24)
					{
						fVar24 = fVar17;
						iVar22 = iVar5;
					}
				}
				RELEASE_CURVE(&uVar23);
				iVar5++;
			}
		}
		else if (Function_65(StackVal, Var13))
		{
			iVar22 = ROUND((TO_FLOAT(RAND_INT_RANGE(0, (GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21) - 1000))) / 1000.0f));
		}
		else if (Global_6629)
		{
			Function_116(&vParam1);
			Var13 = Vector(StackVal, StackVal, StackVal) - Vector(Function_116(&vParam1), Global_54078, StackVal);
			VNORMALIZE(&Var13);
			Function_91();
			Var25 = { StackVal, StackVal, Function_91() };
			Function_91();
			Var28 = { StackVal, StackVal, Function_91() };
			iVar5 = 0;
			while (iVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar31 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, iVar5);
				GET_CURVE_POINT(&uVar31, 1.0f, &Var25, 0);
				GET_CURVE_POINT(&uVar31, 0.0f, &Var28, 0);
				Function_116(&vParam1);
				Function_116(&Var25);
				Function_116(&vParam1);
				Function_116(&Var28);
				if (StackVal > Function_76(StackVal, Function_76(StackVal, StackVal, Function_116(&vParam1), Function_116(&Var25)), Function_116(&vParam1), Function_116(&Var28)))
				{
					UNK_0x04D89A35(&uVar31, 1.0f, 0.0f, -5.0f, &vVar18);
				}
				else
				{
					UNK_0x04D89A35(&uVar31, 0.0f, 0.0f, 5.0f, &vVar18);
				}
				if (Global_47151[12])
				{
					Function_90(StackVal, StackVal, vVar18);
					PRINTNL();
				}
				Function_116(&vVar18);
				Function_116(&vParam1);
				uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_116(&vParam1), Function_116(&vVar18), StackVal);
				VNORMALIZE(&uVar15);
				fVar17 = VDOT(&uVar15, &Var13);
				fVar17 = (fVar17 * RAND_FLOAT_GAUSSIAN(0,5f, 0,5f));
				if (fVar17 < fVar24)
				{
					fVar24 = fVar17;
					iVar22 = iVar5;
				}
				RELEASE_CURVE(&uVar31);
				iVar5++;
			}
		}
		else
		{
			Function_91();
			Var25 = { StackVal, StackVal, Function_91() };
			Function_91();
			Var28 = { StackVal, StackVal, Function_91() };
			Function_116(&vParam1);
			Var13 = Vector(StackVal, StackVal, StackVal) - Vector(Function_116(&vParam1), Global_54078, StackVal);
			VNORMALIZE(&Var13);
			iVar5 = 0;
			while (iVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar31 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, iVar5);
				GET_CURVE_POINT(&uVar31, 1.0f, &Var25, 0);
				GET_CURVE_POINT(&uVar31, 0.0f, &Var28, 0);
				Function_116(&vParam1);
				Function_116(&Var25);
				Function_116(&vParam1);
				Function_116(&Var28);
				if (StackVal > Function_76(StackVal, Function_76(StackVal, StackVal, Function_116(&vParam1), Function_116(&Var25)), Function_116(&vParam1), Function_116(&Var28)))
				{
					UNK_0x04D89A35(&uVar31, 1.0f, Var25.f_16, 5.0f, &vVar18);
				}
				else
				{
					UNK_0x04D89A35(&uVar31, 0.0f, Var28.f_16, 5.0f, &vVar18);
				}
				Function_116(&vVar18);
				Function_116(&vParam1);
				uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_116(&vParam1), Function_116(&vVar18), StackVal);
				VNORMALIZE(&uVar15);
				fVar17 = VDOT(&uVar15, &Var13);
				fVar17 = (fVar17 * RAND_FLOAT_GAUSSIAN(0,25f, 1.0f));
				if (fVar17 < fVar24)
				{
					fVar24 = fVar17;
					iVar22 = iVar5;
				}
				RELEASE_CURVE(&uVar31);
				iVar5++;
			}
		}
		iVar10 = 0;
		if (iVar22 == 4294967295)
		{
			UNK_0xDF93BD7C(&uVar21);
			if (uParam6 || iVar10 > 5)
			{
				fVar8 = fVar9;
				fVar9 = (fVar9 + fParam5);
				iVar10++;
			}
			else
			{
				Function_91();
				return StackVal, StackVal, Function_91();
			}
		}
		bVar6 = true;
	}
	*(&Param0 + 192) = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, iVar22);
	Param0.f_200 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(&Param0 + 192, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(&uVar21, iVar22, &vVar0);
	Function_116(&vVar0);
	uVar32 = Function_116(&vVar0);
	GET_CURVE_POINT(&Param0 + 192, 1.0f, &vVar34, 0);
	GET_CURVE_POINT(&Param0 + 192, 0.0f, &vVar37, 0);
	if (StackVal < Function_89(StackVal, StackVal, StackVal, Function_89(StackVal, StackVal, StackVal, StackVal, vVar34, vParam1), vVar37, vParam1))
	{
		Param0.f_188 = 1;
		GET_CURVE_POINT(&Param0 + 192, 1.0f, &vVar0, 0);
	}
	else
	{
		Param0.f_188 = 4294967295;
		GET_CURVE_POINT(&Param0 + 192, 0.0f, &vVar0, 0);
	}
	if (Global_47267[1])
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 <= GET_NUM_POINTS_IN_CURVE_QUERY(&uVar21))
		{
			GET_POINT_FROM_CURVE_QUERY(&uVar21, iVar5, &vVar18);
			Function_116(&vVar18);
			uVar32 = Function_116(&vVar18);
			iVar5++;
		}
		Function_116(&vVar0);
		uVar32 = Function_116(&vVar0);
	}
	Function_86(&Param0);
	UNK_0xDF93BD7C(&uVar21);
	return StackVal, StackVal, vVar0;
}

void Function_86(struct<33> Param0) //Position: 0x4064 / 16484
{
	if (!Function_88(&Param0))
	{
		return;
	}
	if (!Function_87(StackVal))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&Param0 + 192))
	{
		return;
	}
	if (!Param0.f_32 < 0)
	{
		return;
	}
	if (!GET_CURVE_TYPE(&Param0 + 192) != 4 && !GET_CURVE_TYPE(&Param0 + 192) != 5)
	{
		LOG_ERROR("Adding a traffic node with a bad pathtype. I thought we filtered this?");
		return;
	}
	return;
}

bool Function_87(int iParam0) //Position: 0x4113 / 16659
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

bool Function_88(bool bParam0) //Position: 0x4128 / 16680
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return 1;
}

float Function_89(bool bParam0, var uParam1, var uParam2, bool bParam3, var uParam4, var uParam5) //Position: 0x4139 / 16697
{
	struct<2> Var0;
	struct<2> Var2;
	
	Function_116(&bParam0);
	Var0 = Function_116(&bParam0);
	Function_116(&bParam3);
	Var2 = Function_116(&bParam3);
	return VDIST(Var0, Var2);
}

void Function_90(struct<17> Param0) //Position: 0x415C / 16732
{
	Function_116(&Param0);
	PRINTVECTOR(Function_116(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
	return;
}

vector3 Function_91() //Position: 0x418F / 16783
{
	vector3 vVar0;
	
	vVar0.f_20 = 4294967295;
	return StackVal, StackVal, vVar0;
}

void Function_92(var uParam0) //Position: 0x419E / 16798
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

var Function_93(struct<113> Param0) //Position: 0x41E7 / 16871
{
	if (IS_OBJECTSET_VALID(&Param0 + 64))
	{
		return 5.0f;
	}
	switch (StackVal)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			switch (Param0.f_112)
			{
				case 0x00000005:
					return 2,5f;
					break;
				
				case 0x00000001:
					return 3,75f;
					break;
				
				case 0x00000002:
					return 6,25f;
					break;
				
				case 0x00000004:
					return 8,75f;
					break;
				
				case 0x00000003:
					return 12,5f;
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in NextTravelFreq");
			break;
	}
	return 6,25f;
}

int Function_94(int iParam0, int iParam1) //Position: 0x42A3 / 17059
{
	if (&iParam1 != 0)
	{
		return &iParam1;
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

vector3 Function_95(int iParam0) //Position: 0x42D5 / 17109
{
	struct<2> Var0;
	struct<2> Var2;
	
	Var0 = Vector(0.0f, -50.0f, 0.0f);
	GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&iParam0), Var0, &Var2);
	if (!Function_96(&Var2, 50.0f, &Var0, 10))
	{
		Var0 = Var2;
	}
	Function_97(StackVal, Var0);
	return StackVal, StackVal, Function_97(StackVal, Var0);
}

bool Function_96(struct<2> Param0, struct<5> Param2) //Position: 0x4316 / 17174
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
		if (!Function_65(StackVal, Param2))
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
			if (!Function_65(StackVal, Param2))
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
		WAIT(0);
	}
	return 0;
}

vector3 Function_97(vector3 vParam0) //Position: 0x4459 / 17497
{
	vector3 vVar0;
	
	vVar0.x = vParam0.x;
	vVar0.f_4 = vParam0.y;
	vVar0.f_8 = vParam0.z;
	return StackVal, StackVal, vVar0;
}

var Function_98(int iParam0) //Position: 0x4477 / 17527
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		bVar1++;
	}
	return "";
}

bool Function_99(struct<137> Param0) //Position: 0x44C4 / 17604
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!Function_88(&Param0))
	{
		Function_104(&Param0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(&Param0 + 8, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_98(&Param0 + 8));
	if (!SQUAD_GOAL_IS_VALID(&Param0 + 16))
	{
		SQUAD_GOALS_CLEAR(&Param0 + 8);
	}
	Function_116(&Param0 + 36);
	Var2 = Function_116(&Param0 + 36);
	Var0 = Var2;
	Function_103(StackVal, Var0, &Param0 + 36);
	if (&bParam1)
	{
		Param0.f_116 = Function_102(StackVal, Param0.f_116, Param0.f_120);
		if (!Param0.f_136 || Param0.f_112 != 4294967295)
		{
			Param0.f_112 = Param0.f_116;
		}
	}
	if (&bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_101(Function_98(&Param0 + 8)), 0);
	}
	Function_100(&Param0);
	return 1;
}

void Function_100(struct<189> Param0) //Position: 0x4594 / 17812
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		return;
	}
	iVar1 = 2;
	if (Function_10())
	{
		iVar1 = 0;
	}
	if (Param0.f_188 == 4294967295)
	{
		iVar0 = 1;
	}
	if (Param0.f_148)
	{
		iVar1 = 1;
	}
	if (Param0.f_156)
	{
		if (!Param0.f_136 && GET_CURVE_TYPE(&Param0 + 192) == 5)
		{
			Param0.f_156 = 0;
		}
	}
	else
	{
		if (GET_CURVE_TYPE(&Param0 + 192) == 5)
		{
			Param0.f_156 = 1;
		}
		if (Param0.f_136)
		{
			Param0.f_156 = 1;
		}
	}
	if (!SQUAD_GOAL_IS_VALID(&Param0 + 16))
	{
		(&Param0 + 16) = SQUAD_GOAL_ADD_FOLLOW_TRAFFIC_CURVE(&Param0 + 8, 0, 4294967295, &Param0 + 192, Param0.f_112, iVar0, iVar1);
		if (Param0.f_156)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 0);
		}
		if (Param0.f_124 != 2)
		{
			if (!Param0.f_144)
			{
				Param0.f_124 = 2;
			}
			else
			{
				SQUAD_FOLLOW_TRAFFIC_CURVE_SET_TASK_PRIORITY(&Param0 + 8, &Param0 + 16, Param0.f_124);
			}
		}
		if (StackVal && !Param0.f_152 != 2)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 4, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 4, 0);
		}
		SQUAD_GOAL_ADD_FACTION_STATUS_WITHIN_GOAL(&Param0 + 8, 1, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 8, 1);
	}
	else
	{
		if (!SQUAD_FOLLOW_TRAFFIC_CURVE_IS_CURVE_ALREADY_IN_LIST(&Param0 + 8, &Param0 + 16, &Param0 + 192, iVar0, 0))
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_ENQUEUE_CURVE(&Param0 + 8, &Param0 + 16, &Param0 + 192, iVar0);
		}
		if (Param0.f_156)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 0);
		}
	}
	return;
}

int Function_101(int iParam0) //Position: 0x478F / 18319
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

int Function_102(int iParam0, int iParam1, int iParam2) //Position: 0x47B6 / 18358
{
	int iVar0;
	int iVar1;
	
	if (!Function_10())
	{
		if (&iParam2 != 0)
		{
			return &iParam2;
		}
		iVar0 = RAND_INT_RANGE(1, 10000);
		iParam1 = &iParam1;
		switch (iParam0)
		{
			case 0x00000001:
				if (iVar0 <= 5000)
				{
					return 2;
				}
				if (iVar0 <= 4000)
				{
					return 4;
				}
				return 3;
				break;
			
			case 0x00000003:
				if (iVar0 <= 5000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				if (iVar0 <= 7500)
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
	if (&iParam2 != 0)
	{
		return &iParam2;
	}
	iVar1 = RAND_INT_RANGE(1, 10000);
	iParam1 = &iParam1;
	switch (iParam0)
	{
		case 0x00000001:
			if (iVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000003:
			if (iVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		case 0x00000002:
			if (iVar1 <= 7500)
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

void Function_103(vector3 vParam0) //Position: 0x48FC / 18684
{
	vParam2 = vParam0.x;
	vParam2.f_4 = vParam0.y;
	vParam2.f_8 = vParam0.z;
	return;
}

void Function_104(struct<113> Param0) //Position: 0x491A / 18714
{
	struct<5> Var0;
	struct<13> Var8;
	
	if (!Global_47267[1] && iParam1)
	{
		return;
	}
	if (!Function_88(&Param0))
	{
		return;
	}
	strcpy(&cVar4, "TRAFFIC NODE", 16);
	switch (Param0.f_112)
	{
		case 0x00000005:
			Var8 = 1.0f;
			Var8.f_4 = 0.0f;
			Var8.f_8 = 0.0f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000001:
			Var8 = 0,9f;
			Var8.f_4 = 0,55f;
			Var8.f_8 = 0,1f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000002:
			Var8 = 0,9f;
			Var8.f_4 = 0,9f;
			Var8.f_8 = 0,1f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000004:
			Var8 = 0,2f;
			Var8.f_4 = 0,8f;
			Var8.f_8 = 0,1f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000003:
			Var8 = 0,1f;
			Var8.f_4 = 0,1f;
			Var8.f_8 = 1.0f;
			Var8.f_12 = 1.0f;
			break;
	}
	GET_POSITION(Function_98(&Param0 + 8), &Var0);
	fVar10 = Vector(0.0f, 1.0f, 0.0f);
	Var0.f_4 = (StackVal + 2,5f);
	Var0.f_4 = (StackVal + 1.0f);
	Var0.f_4 = (StackVal + 0,5f);
	switch (StackVal)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
	}
	Function_116(&Param0 + 36);
	iVar2 = Function_116(&Param0 + 36);
	return;
}

void Function_105(struct<137> Param0) //Position: 0x4A6C / 19052
{
	if (!Function_10())
	{
		Function_112(&Param0 + 8);
		if (Global_43580.f_104 != 0)
		{
			Param0.f_112 = Global_43580.f_104;
			Function_111(&Param0 + 8, Param0.f_112);
		}
		else if (Global_6646 || iParam1)
		{
			if (StackVal == 2)
			{
				Param0.f_112 = 4;
			}
			else
			{
				Param0.f_112 = 3;
			}
			Function_111(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_110(&Param0 + 8, 1);
			}
		}
		else if ((Global_6647 || Function_108(131072)) || Function_77(&Param0 + 8))
		{
			Param0.f_112 = 4;
			Function_111(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_110(&Param0 + 8, 1);
			}
		}
		else if (Param0.f_132)
		{
			Param0.f_112 = Function_107(StackVal, Param0.f_120);
			Function_111(&Param0 + 8, Param0.f_112);
		}
		else if (Param0.f_136)
		{
			Param0.f_112 = Function_106(StackVal, Param0.f_120);
			Function_111(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_110(&Param0 + 8, 0);
			}
		}
		else
		{
			Param0.f_112 = Param0.f_116;
			if (StackVal == 2)
			{
				Function_110(&Param0 + 8, 1);
			}
		}
	}
	else
	{
		Function_112(&Param0 + 8);
		if (Global_43580.f_104 != 0)
		{
			Param0.f_112 = Global_43580.f_104;
			Function_111(&Param0 + 8, Param0.f_112);
		}
		else if (Function_108(131072) || Function_77(&Param0 + 8))
		{
			Param0.f_112 = 3;
			Function_111(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_110(&Param0 + 8, 1);
			}
		}
		else if (Param0.f_132)
		{
			Param0.f_112 = Function_107(StackVal, Param0.f_120);
			Function_111(&Param0 + 8, Param0.f_112);
		}
		else if (Param0.f_136)
		{
			Param0.f_112 = Function_106(StackVal, Param0.f_120);
			Function_111(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_110(&Param0 + 8, 0);
			}
		}
		else
		{
			Param0.f_112 = Param0.f_116;
			if (StackVal == 2)
			{
				Function_110(&Param0 + 8, 1);
			}
		}
	}
	return;
}

int Function_106(int iParam0, int iParam1) //Position: 0x4CA8 / 19624
{
	int iVar0;
	int iVar1;
	
	if (!Function_10())
	{
		if (iParam1 != 0)
		{
			return iParam1;
		}
		iVar0 = RAND_INT_RANGE(1, 10000);
		switch (iParam0)
		{
			case 0x00000001:
				if (iVar0 <= 9000)
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
	iVar1 = RAND_INT_RANGE(1, 10000);
	switch (iParam0)
	{
		case 0x00000001:
			if (iVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (iVar1 <= 9000)
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

int Function_107(int iParam0, int iParam1) //Position: 0x4D94 / 19860
{
	if (!Function_10())
	{
		if (iParam1 != 0)
		{
			return iParam1;
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
	if (iParam1 != 0)
	{
		return iParam1;
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

int Function_108(int iParam0) //Position: 0x4E5F / 20063
{
	return Function_109(&Global_43580, iParam0);
}

int Function_109(var uParam0, int iParam1) //Position: 0x4E6D / 20077
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_110(var uParam0, int iParam1) //Position: 0x4E8A / 20106
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_111(var uParam0, int iParam1) //Position: 0x4EB4 / 20148
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		TASK_OVERRIDE_SET_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_112(int iParam0) //Position: 0x4EDE / 20190
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		TASK_OVERRIDE_CLEAR_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

bool Function_113(struct<21> Param0) //Position: 0x4F06 / 20230
{
	return ((((StackVal && (StackVal && Param0 != 0.0f != 0.0f) != 0.0f) && Param0.f_12 != 0.0f) && Param0.f_16 != 0.0f) && Param0.f_20 != 4294967295);
}

vector3 Function_114(struct<189> Param0) //Position: 0x4F3A / 20282
{
	bool bVar0;
	bool bVar3;
	vector3 vVar6;
	
	if (!IS_OBJECT_VALID(&uParam4))
	{
		return StackVal, StackVal, vVar6;
	}
	Param0.f_188 = Function_115(StackVal, StackVal, StackVal, &uParam4, vParam1, Param5);
	if (Param0.f_188 >= 0)
	{
		GET_CURVE_POINT(&uParam4, 1.0f, &vVar6, 0);
		UNK_0x19D652F9(&uParam4, 1.0f, &vParam1, &bVar0);
		Function_116(&bVar0);
		Function_116(&vParam1);
		*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Function_116(&vParam1), Function_116(&bVar0), StackVal);
		*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
	}
	else
	{
		GET_CURVE_POINT(&uParam4, 0.0f, &vVar6, 0);
		UNK_0x19D652F9(&uParam4, -1.0f, &vParam1, &bVar3);
		Function_116(&bVar3);
		Function_116(&vParam1);
		*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Function_116(&vParam1), Function_116(&bVar3), StackVal);
		*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
	}
	return StackVal, StackVal, vVar6;
}

int Function_115(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, Vector3 vParam5) //Position: 0x4FE4 / 20452
{
	bool bVar0;
	bool bVar3;
	var uVar6;
	var uVar8;
	float fVar10;
	float fVar11;
	
	UNK_0x19D652F9(&uParam0, 1.0f, &bParam1, &bVar0);
	UNK_0x19D652F9(&uParam0, -1.0f, &bParam1, &bVar3);
	Function_116(&bVar0);
	Function_116(&bParam1);
	uVar6 = Vector(StackVal, StackVal, StackVal) - Vector(Function_116(&bParam1), Function_116(&bVar0), StackVal);
	fVar10 = VDOT(&uParam4, &uVar6);
	Function_116(&bVar3);
	Function_116(&bParam1);
	uVar8 = Vector(StackVal, StackVal, StackVal) - Vector(Function_116(&bParam1), Function_116(&bVar3), StackVal);
	fVar11 = VDOT(&uParam4, &uVar8);
	if (fVar11 > fVar10)
	{
		return 1;
	}
	return 4294967295;
}

struct<8> Function_116(vector3 vParam0) //Position: 0x503D / 20541
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

void Function_117(struct<157> Param0) //Position: 0x505F / 20575
{
	Function_97(StackVal, Param1);
	*(&Param0 + 36) = { StackVal, StackVal, Function_97(StackVal, Param1) };
	(&Param0 + 36)->f_12 = Param3;
	(&Param0 + 36)->f_16 = StackVal;
	*(&Param0 + 192) = &uParam5;
	Param0.f_152 = &uParam7;
	Param0.f_156 = &uParam6;
	Function_118(&Param0);
	Param0.f_32 = SQUAD_GET_SIZE(&Param0 + 8);
	Function_86(&Param0);
}

void Function_118(int iParam0) //Position: 0x50BC / 20668
{
	struct<2> Var0;
	
	if (!SQUAD_IS_VALID(&iParam0 + 8))
	{
		Function_119();
		Var0 = { StackVal, Function_119() };
		*(&iParam0 + 8) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_43578, &Var0));
	}
	iParam0 = 1;
	return;
}

struct<8> Function_119() //Position: 0x50ED / 20717
{
	char* cVar0[8];
	
	strcpy(&cVar0, "", 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	return StackVal, cVar0;
}

var Function_120(bool bParam0) //Position: 0x5144 / 20804
{
	return GET_HEADING(&bParam0);
}

var Function_121(struct<2> Param0, int iParam2, float fParam3, float fParam4, var uParam5) //Position: 0x5150 / 20816
{
	struct<2> Var0;
	var uVar2;
	struct<9> Var3;
	
	bVar7 = -1.0f;
	uVar2 = START_CURVE_QUERY(&Global_43578, Param0, iParam2, fParam3, fParam4, &uParam5, 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar2) < 0)
	{
	}
	else
	{
		iVar8 = 0;
		while (iVar8 < (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar2) - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(&uVar2, iVar8, &vVar3);
			Var0 = vVar3.x;
			Var0.f_4 = vVar3.y;
			Var0.f_8 = vVar3.z;
			if (bVar7 > 0.0f || bVar7 < VDIST(Param0, Var0))
			{
				bVar7 = VDIST(Param0, Var0);
				uVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar2, iVar8);
			}
			iVar8++;
		}
	}
	UNK_0xDF93BD7C(&uVar2);
	return &uVar6;
}

struct<8> Function_122(int iParam0) //Position: 0x51F1 / 20977
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_123(int iParam0, struct<2> Param1) //Position: 0x5203 / 20995
{
	*(&iParam0 + 220) = Param1;
	return;
}

bool Function_124(int iParam0) //Position: 0x5213 / 21011
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_125(struct<2> Param0, float fParam2, int iParam3) //Position: 0x5229 / 21033
{
	int iVar0;
	struct<2> Var1;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 4294967295;
	bVar3 = 99999.0f;
	iVar4 = 0;
	if (Function_65(StackVal, Param0))
	{
		return 4294967295;
	}
	iVar5 = 0;
	while (iVar5 < 145)
	{
		if ((StackVal && (StackVal || IS_VOLUME_VALID(&Global_44085[iVar59] + 8) != 3 != 4)) && !Function_127(iVar5))
		{
			iVar4 = 0;
			if (&iParam3 == 0)
			{
				iVar4 = 1;
			}
			else if (Function_126(Global_43789) == Global_46722[Global_43787])
			{
				iVar4 = 1;
			}
			if (iVar4 == 1)
			{
				GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var1);
				if (VDIST(Param0, Var1) > bVar3 && VDIST(Param0, Var1) < &fParam2)
				{
					iVar0 = iVar5;
					bVar3 = VDIST(Param0, Var1);
				}
			}
		}
		iVar5++;
	}
	if (Function_124(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_126(int iParam0) //Position: 0x5309 / 21257
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_124(iParam0))
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

bool Function_127(int iParam0) //Position: 0x5361 / 21345
{
	if ((((iParam0 != Global_46894[1] || iParam0 != Global_46838[1]) || iParam0 != Global_46816[1]) || iParam0 != Global_46760[4]) || iParam0 != Global_46866[1])
	{
		return 1;
	}
	return 0;
}

float Function_128(var uParam0, struct<2> Param1) //Position: 0x53A1 / 21409
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_51(&uParam0);
		Var0 = Function_51(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

float Function_129() //Position: 0x5418 / 21528
{
	float fVar0;
	int iVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_17(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

bool Function_130(struct<65> Param0) //Position: 0x5449 / 21577
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_163(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_161(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_159(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_131(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_8("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (uParam2 >= 20)
		{
			uParam3 = 1;
			Global_39619++;
		}
		uParam2++;
		uParam1 = 1000;
		*(&Param0 + 16) = Vector(0.0f, 0.0f, 0.0f);
		return 0;
	}
	if (Param0.f_40)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_6642 = 0;
		Function_8("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_6(Param0.f_64, 0, 1, 0, 0))
		{
			uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (Param0.f_60 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_163("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_161(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_159(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_131(struct<73> Param0) //Position: 0x5807 / 22535
{
	var uVar0;
	var uVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	struct<2> Var7;
	float fVar9;
	float fVar10;
	bool bVar11;
	struct<17> Var12;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var7);
	switch (Param0.f_72)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				if (IS_LAYOUTREF_VALID(&Global_46715))
				{
					*(&Param0 + 8) = CREATE_OBJECT_ITERATOR(&Global_46715);
				}
				else
				{
					return 0;
				}
			}
			Function_158(&Param0 + 8);
			switch ((&Param0 + 72 + 36)->f_28)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(&Param0 + 8, &Global_46715);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if ((&Param0 + 72 + 36)->f_16 < 0.0f)
			{
				Var3 = Vector(0.0f, 0.0f, Function_16(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_16(1));
			}
			if (!STRINGS_ARE_EQUAL(&Param0 + 72 + 36, ""))
			{
				ITERATE_ON_PARTIAL_NAME(&Param0 + 8, &Param0 + 72 + 36);
			}
			if (!4294967295 != (&Param0 + 72 + 36)->f_20)
			{
				ITERATE_ON_OBJECT_TYPE(&Param0 + 8, (&Param0 + 72 + 36)->f_20);
			}
			if (GET_NUM_ITERATOR_MATCHES(&Param0 + 8) >= 0)
			{
				if (StackVal & 512 == 0 || Param0.f_44 != 1)
				{
					if ((&Param0 + 72 + 36)->f_24 == 0)
					{
						uVar0 = Function_157(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_156(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_155(StackVal, &Param0 + 8, Var7, Function_129());
				}
				else
				{
					uVar0 = Function_154(StackVal, &Param0 + 8, Var7, Function_129(), "locflag", (&Param0 + 72 + 36)->f_24);
				}
				if (IS_OBJECT_VALID(&uVar0))
				{
					GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
					GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
					Param0.f_56 = &uVar0;
					DESTROY_ITERATOR(&Param0 + 8);
				}
				else
				{
					DESTROY_ITERATOR(&Param0 + 8);
					return 0;
				}
			}
			DESTROY_ITERATOR(&Param0 + 8);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				*(&Param0 + 8) = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_158(&Param0 + 8);
			ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
			fVar10 = 130.0f;
			fVar9 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &Var3);
			ITERATE_IN_SPHERE(StackVal, &Param0 + 8, Var3);
			uVar1 = START_OBJECT_ITERATOR(&Param0 + 8);
			while (IS_OBJECT_VALID(&uVar1) && !IS_OBJECT_VALID(&uVar0))
			{
				if (DECOR_CHECK_EXIST(&uVar1, "regid"))
				{
					bVar11 = DECOR_GET_INT(&uVar1, "regid");
					if (Function_124(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_16(1))
								{
									uVar0 = &uVar1;
								}
							}
						}
					}
				}
				uVar1 = OBJECT_ITERATOR_NEXT(&Param0 + 8);
			}
			if (IS_OBJECT_VALID(&uVar0))
			{
				GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
				Function_96(&Param0 + 16, 99.0f, &Param0 + 16, 10);
				GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
				Param0.f_56 = DECOR_GET_INT(&uVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(&Param0 + 8);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_6629 && Global_6631) && ARE_CURVES_IN_RANGE(48, Var7, 100.0f)) && 8) != 8)
			{
				uVar5 = Vector(0.0f, 0.0f, -10.0f);
				ROTATE_VECTOR_XZ(&uVar5, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_153(&Var7, &uVar5);
				Var3 = Function_153(&Var7, &uVar5);
				if (!Function_65(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_17(&fVar10, &fVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((fVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_150(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_146(&Param0);
			}
			if (iVar2 == 1)
			{
				if ((&Param0 + 72)->f_156 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(&Param0 + 16)))
							{
								return 0;
							}
						}
					}
				}
				if ((&Param0 + 72)->f_156 == 5)
				{
				}
				if (Param0.f_68 == 2)
				{
					if (!Function_145(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_144(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_11(StackVal, 131072))
				{
					if (StackVal || Function_143(Function_143(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_142(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_138(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar10 = 120.0f;
				fVar9 = 150.0f;
				Var3 = Vector(0.0f, 0.0f, ((fVar10 + fVar9) * -0,5f));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_94((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_94((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				iVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, iVar15, &Var12);
				Function_116(&Var12);
				*(&Param0 + 16) = Function_116(&Var12);
				Param0.f_28 = Var12.f_12;
				(&Param0 + 28)->f_4 = Var12.f_16;
				Param0.f_56 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar17, iVar15);
				UNK_0xDF93BD7C(&uVar17);
			}
			else
			{
				UNK_0xDF93BD7C(&uVar17);
				return 0;
			}
			if (Param0.f_68 == 2)
			{
				if (!Function_145(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_144(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_145(Function_144(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_11(StackVal, 131072))
			{
				if (StackVal || Function_143(Function_143(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_138(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_136((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_133(StackVal, Global_43787, Global_43788, Global_43789, 1);
					if (IS_PERS_CHAR_VALID(&iVar18))
					{
						if (IS_PERS_CHAR_ALIVE(&iVar18))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar16 = 0;
					while (StackVal <= (StackVal - iVar16) + 1)
					{
						iVar18 = Function_133(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
						if (IS_PERS_CHAR_VALID(&iVar18))
						{
							if (IS_PERS_CHAR_ALIVE(&iVar18))
							{
								iVar19++;
							}
						}
						iVar16++;
					}
					if (iVar19 >= 0)
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
					Param0.f_56 = StackVal;
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
	if (Function_132(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_132(struct<2> Param0) //Position: 0x60CE / 24782
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_39246))
	{
		if (IS_POINT_IN_VOLUME(Param0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_39246))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int Function_133(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x6105 / 24837
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
	if (!&bParam4)
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
								return Function_134(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_134(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_134(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_134(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_134(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_134(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_134(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_134(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_134(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_134(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_134(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_134(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_134(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_134(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_134(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_134(&Global_11826, &Global_13998, bParam3);
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
								return Function_134(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_134(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_134(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_134(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_134(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_134(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_134(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_134(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_134(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_134(&Global_12472, &Global_14954, bParam3);
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
	else if (bVar1 == Global_46760[0])
	{
		return Function_134(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_134(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_134(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_134(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_134(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_134(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_134(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_134(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_134(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_134(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_134(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_134(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_134(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_134(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_134(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_134(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_134(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_134(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_134(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_134(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_134(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_134(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_134(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_134(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_134(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_134(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_134(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x671B / 26395
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_135(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
	return &vParam1[iVar03] + 16;
}

bool Function_135(var uParam0, int iParam1) //Position: 0x6775 / 26485
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_136(int iParam0) //Position: 0x6792 / 26514
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 25);
	iVar2 = START_OBJECT_ITERATOR(&uVar1);
	if (&iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(&uVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(&iVar2))
		{
			if (Function_137(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_137(int iParam0) //Position: 0x67FA / 26618
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_98(&iParam0);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(&uVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(&uVar0))
	{
		return 1;
	}
	return 4294967295;
}

bool Function_138(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x6838 / 26680
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
	Function_140(4294967295);
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
			fVar4 = fParam1;
			if (bVar3)
			{
				fVar4 = (fVar4 + 170.0f);
			}
			if (Global_6629 && bVar5 != 512)
			{
			}
			else if (Function_139(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_139(struct<2> Param0) //Position: 0x6914 / 26900
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

int Function_140(int iParam0) //Position: 0x6933 / 26931
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
						Function_141(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_128(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_141(iVar0);
						}
					}
					else if (Function_128(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_141(iVar0);
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
			Function_141(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_141(int iParam0) //Position: 0x6AA1 / 27297
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

bool Function_142(struct<2> Param0) //Position: 0x6B09 / 27401
{
	struct<9> Var0;
	
	iVar5 = 0;
	while (iVar5 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar59] + 8))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(&Global_44085[iVar59] + 8) == 9)
				{
					GET_VOLUME_SCALE(&Global_44085[iVar59] + 8, &vVar0);
					GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var2);
					bVar4 = VDIST(Param0, Var2);
					if ((bVar4 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar5++;
	}
	return 0;
}

int Function_143(struct<2> Param0) //Position: 0x6BAE / 27566
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
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

bool Function_144(struct<2> Param0) //Position: 0x6BFC / 27644
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
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

bool Function_145(struct<2> Param0) //Position: 0x6C57 / 27735
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
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

int Function_146(bool bParam0) //Position: 0x6CD6 / 27862
{
	float fVar0;
	bool bVar1;
	
	Function_17(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_149(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((&bParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&bParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&bParam0 + 72 + 84)->f_44, (&bParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&bParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_148(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
	}
	if ((&bParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&bParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&bParam0 + 72 + 84)->f_52, (&bParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&bParam0 + 72 + 84)->f_52);
		}
	}
	Function_147(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&bParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&bParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&bParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&bParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&bParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&bParam0 + 72 + 84)->f_36, (&bParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&bParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

void Function_147(struct<33> Param0) //Position: 0x6E88 / 28296
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_47151[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_47151[34])
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
		if (Global_47151[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1,43493E-42f, 1);
}

void Function_148(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x6FB4 / 28596
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

void Function_149(float fParam0) //Position: 0x7005 / 28677
{
	if (&fParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * &fParam0), &fParam0);
	}
	else if (Global_6629)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

int Function_150(int iParam0, struct<2> Param1) //Position: 0x704C / 28748
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_152();
	Function_149(0);
	Function_151(0);
	if ((&iParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&iParam0 + 72 + 84)->f_44, (&iParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_148(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	}
	if ((&iParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&iParam0 + 72 + 84)->f_52, (&iParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_52);
		}
	}
	Function_147(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&iParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&iParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&iParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&iParam0 + 72 + 84)->f_36, (&iParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&iParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

void Function_151(bool bParam0) //Position: 0x7201 / 29185
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

void Function_152() //Position: 0x72B4 / 29364
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_153(struct<2> Param0) //Position: 0x72C3 / 29379
{
	var uVar0;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	struct<2> Var8;
	float fVar10;
	float fVar11;
	var uVar12;
	var uVar14;
	var uVar16;
	bool bVar18;
	bool bVar21;
	
	uVar7 = START_CURVE_QUERY(&Global_43578, Param0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(&uVar7) < 0)
	{
		UNK_0xDF93BD7C(&uVar7);
		Var8 = Vector(0.0f, 0.0f, 0.0f);
		return StackVal, Var8;
	}
	GET_POINT_FROM_CURVE_QUERY(&uVar7, 0, &uVar0);
	uVar3 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar7, 0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar12 = Param1;
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &bVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &bVar21);
		Function_116(&bVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_116(&bVar18), StackVal);
		Function_116(&bVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_116(&bVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_17(&fVar4, &fVar5);
		fVar6 = ((fVar4 + fVar5) / 2.0f);
		if (fVar11 > 0.0f && fVar10 > 0.0f)
		{
			UNK_0xDF93BD7C(&uVar7);
			Var8 = Vector(0.0f, 0.0f, 0.0f);
			return StackVal, Var8;
		}
		if (fVar11 > fVar10)
		{
			UNK_0x19D652F9(&uVar3, (fVar6 * -1.0f), &uVar0, &bVar21);
			Function_116(&bVar21);
			Var8 = Function_116(&bVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &bVar18);
			Function_116(&bVar18);
			Var8 = Function_116(&bVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

var Function_154(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x73DD / 29661
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	struct<2> Var5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (DECOR_CHECK_EXIST(&fVar0, &iParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &iParam4) && uParam5) >= 0)
			{
				if (bVar2 < fParam3)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_138(&Var5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							uVar1 = &fVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_155(var uParam0, struct<2> Param1, float fParam3) //Position: 0x7492 / 29842
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	struct<2> Var5;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_138(&Var5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					uVar1 = &fVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_156(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x7524 / 29988
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (DECOR_CHECK_EXIST(&fVar0, &iParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &iParam4) && uParam5) >= 0)
			{
				if (bVar2 < fParam3)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						bVar3 = bVar2;
						uVar1 = &fVar0;
						PRINTSTRING("Assigning new closestObject ");
						PRINTNL();
					}
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_157(var uParam0, struct<2> Param1, float fParam3) //Position: 0x75C6 / 30150
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				uVar1 = &fVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

int Function_158(int iParam0) //Position: 0x764C / 30284
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_174());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_174());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_159(var uParam0, int iParam1) //Position: 0x7682 / 30338
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
	Function_140(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_160(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_160(int iParam0, var uParam1, struct<2> Param2) //Position: 0x77EC / 30700
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_163("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_161(var uParam0, struct<2> Param1) //Position: 0x7894 / 30868
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_162(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_162(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x78C2 / 30914
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<32> Function_163(char* cParam0) //Position: 0x78E6 / 30950
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_164("0", &cVar8, ""), 4);
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

struct<32> Function_164(char* cParam0) //Position: 0x7952 / 31058
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_165(struct<2>[] Param0) //Position: 0x7974 / 31092
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_170();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_169(&(Param0[iVar02]), 8);
		}
		else if (Function_168())
		{
			iVar1 = 1;
			Function_169(&(Param0[iVar02]), 8);
		}
		Function_169(&(Param0[iVar02]), 16);
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
				Function_169(&(Param0[iVar02]), 1);
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
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_169(&(Param0[iVar02]), 2);
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
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_169(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_169(&(Param0[iVar02]), 2);
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
	Function_166();
	return 1;
}

void Function_166() //Position: 0x7D36 / 32054
{
	if (!Function_167(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_167(int iParam0) //Position: 0x7D76 / 32118
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_168() //Position: 0x7D92 / 32146
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

void Function_169(struct<13> Param0) //Position: 0x7DC0 / 32192
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_170() //Position: 0x7DD3 / 32211
{
	if (!Function_167(128))
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

void Function_171(int iParam0) //Position: 0x7E15 / 32277
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 1);
		CLEAR_ACTOR_MAX_SPEED(&iParam0);
		if (IS_ACTOR_ANIMAL(&iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&iParam0), 0, 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 1);
			MEMORY_ALLOW_SHOOTING(&iParam0, 1);
		}
	}
	return;
}

void Function_172(int iParam0) //Position: 0x7E5E / 32350
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_DRAW_ACTOR(&iParam0, 0);
		SET_ACTOR_MAX_SPEED(&iParam0, 5);
		if (IS_ACTOR_ANIMAL(&iParam0))
		{
			ANIMAL_SPECIES_REL_SET_CAN_ATTACK(ANIMAL_ACTOR_GET_SPECIES(&iParam0), 0, 0);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 0);
			MEMORY_ALLOW_SHOOTING(&iParam0, 0);
		}
	}
	return;
}

bool Function_173(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x7EA8 / 32424
{
	if (Global_99146 && !GET_THIS_SCRIPT_ID() != &Global_99168)
	{
		uParam3 = 0;
		if (!uParam0)
		{
			uParam0 = 1;
			if ((uParam1 < 2 && uParam1 > 5) && uParam4)
			{
				uParam2 = uParam1;
				uParam1 = 7;
			}
			else
			{
				uParam1 = 6;
				return 0;
			}
			return 1;
		}
	}
	if (uParam0)
	{
		uParam0 = 0;
		uParam1 = uParam2;
		return 1;
	}
	return 0;
}

var Function_174() //Position: 0x7F20 / 32544
{
	int iVar0;
	
	return &iVar0;
}

var Function_175(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x7F29 / 32553
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_176(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_169(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_176(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x7F67 / 32615
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_169(&(Param0[iVar02]), 4);
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

void Function_177(bool bParam0) //Position: 0x805E / 32862
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bParam0);
	return;
}

var Function_178(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x8069 / 32873
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_169(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_169(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (iParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_179(int iParam0, int iParam1) //Position: 0x8145 / 33093
{
	int iVar0;
	
	iVar0 = (Global_26652[iParam04].f_16 % iParam1);
	return iVar0;
}

