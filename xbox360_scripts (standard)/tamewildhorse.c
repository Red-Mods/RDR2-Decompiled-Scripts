//Decompiled with MagicRDR v1.0
//Function Count : 150
//Statics Count : 104
//Natives Count : 244
//Parameters Count : 2

#region Local Var
	bool bLocal_0 = false;
	bool bLocal_1 = false;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	bool bLocal_4 = false;
	float fLocal_5 = 0.0f;
	float fLocal_6 = 0.0f;
	bool bLocal_7 = false;
	bool bLocal_8 = false;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	bool bLocal_11 = false;
	int iLocal_12 = 0;
	bool bLocal_13 = false;
	bool bLocal_14 = false;
	float fLocal_15 = 0.0f;
	struct<37> Local_16 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_53 = 0;
	bool bLocal_54 = false;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	bool bLocal_60 = false;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	bool bLocal_63 = false;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<33> Local_66 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_99 = 0.0f;
	bool bLocal_100 = false;
	float fLocal_101 = 0.0f;
	struct<5> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	bLocal_0 = false;
	bLocal_1 = 12.0f;
	bLocal_2 = 16.0f;
	bLocal_3 = 26.0f;
	bLocal_4 = 30.0f;
	fLocal_5 = 1.0f;
	bLocal_11 = RAND_FLOAT_RANGE(3.0f, 8.0f);
	iLocal_12 = 1;
	bLocal_13 = false;
	bLocal_28 = false;
	bLocal_29 = false;
	iLocal_37 = 0;
	fLocal_38 = 0.0f;
	iLocal_64 = 0;
	iLocal_65 = 0;
	bLocal_100 = 0,5f;
	fLocal_101 = 0.0f;
	if ((IS_ACTOR_VALID(StackVal) && IS_ACTOR_VALID(ScriptParam_0)) && !Global_3384)
	{
		if (IS_ACTOR_PLAYER(ScriptParam_0))
		{
			END_CURRENT_MINIGAME();
			Function_137(StackVal, ScriptParam_0);
			iVar0 = 1;
			bVar1 = 2;
			iVar2 = 2;
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(StackVal), "iStartingDifficulty"))
			{
				bVar1 = DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(StackVal), "iStartingDifficulty");
				if (bVar1 <= 0)
				{
					LOG_ERROR("Tame Wild Horse: Invalid (negative) decorator iStartingDifficulty on horse");
					bVar1 = 2;
				}
			}
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(StackVal), "fHowLong"))
			{
				bVar3 = DECOR_GET_FLOAT(GET_OBJECT_FROM_ACTOR(StackVal), "fHowLong");
				if (bVar3 > 0.0f)
				{
					LOG_ERROR("Tame Wild Horse: Invalid (negative) decorator fHowLong on horse");
					bVar3 = RAND_FLOAT_RANGE(20.0f, 40.0f);
				}
			}
			else
			{
				bVar3 = RAND_FLOAT_RANGE(20.0f, 40.0f);
			}
			while (StackVal && Function_8(!IS_EXITFLAG_SET(), ScriptParam_0, Function_136(), bVar3, bVar1))
			{
				if (StackVal && IS_ACTOR_VALID(IS_ACTOR_VALID(Global_34573)))
				{
					DECOR_SET_OBJECT(StackVal, Global_34573, GET_OBJECT_FROM_ACTOR("BrokenHorse"));
				}
				WAIT(false);
			}
			Function_1(StackVal, ScriptParam_0);
		}
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0, bool bParam1) //Position: 0x21A / 538
{
	SATCHEL_SET_ENABLED(1);
	if (IS_VOLUME_VALID(bLocal_96))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_96);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_96);
		DESTROY_VOLUME(bLocal_96);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Phase"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Phase");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Blend"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Blend");
	}
	SET_ACTOR_INVULNERABILITY(bParam0, false);
	AI_STOP_IGNORING_ACTORS();
	AI_CLEAR_DONT_HARM_ACTOR(bParam0);
	HUD_STAMINA_OVERRIDE(0, 1120403456, 1120403456);
	Function_7(0);
	Function_7(1);
	bParam1 = bParam1;
	Global_3384 = 0;
	SET_HUD_MAP_DRAW_ENABLED(1);
	ACTOR_END_FORCE_HOLSTER(bParam0);
	if (bLocal_13)
	{
		ACTOR_DRAW_LAST_WEAPON(bParam0, 1);
	}
	if (IS_ACTOR_VALID(bParam1))
	{
		DECOR_SET_BOOL(bParam1, "DisableBuckOff", false);
	}
	Function_6(&uLocal_39);
	if (!iLocal_35)
	{
		RESET_ANIM_SET_FOR_ACTOR(bParam0, true);
		RESET_REACT_NODE_FOR_ACTOR(bParam0);
		if (IS_ACTOR_VALID(bParam1))
		{
			RESET_ANIM_SET_FOR_ACTOR(bParam1, true);
			RESET_REACT_NODE_FOR_ACTOR(bParam1);
		}
		iLocal_35 = 1;
	}
	if (IS_OBJECT_VALID(bLocal_14))
	{
		CAMERA_RESET(0);
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_14);
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		while (IS_OBJECT_VALID(bLocal_14) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	if (IS_LAYOUTREF_VALID(bLocal_7))
	{
		DESTROY_LAYOUT(bLocal_7);
	}
	Function_2(&bLocal_80);
	DETACH_LASSO(bParam0);
	return;
}

void Function_2(int iParam0) //Position: 0x395 / 917
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

void Function_3(var uParam0, int iParam1) //Position: 0x3BB / 955
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

void Function_4(var uParam0, int iParam1) //Position: 0x4E9 / 1257
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(var uParam0, int iParam1) //Position: 0x503 / 1283
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(int iParam0) //Position: 0x520 / 1312
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

int Function_7(bool bParam0) //Position: 0x534 / 1332
{
	UI_HIDE_PROMPT(bParam0);
	return 1;
}

int Function_8(bool bParam0, bool bParam1, var uParam2, float fParam3, var uParam4) //Position: 0x540 / 1344
{
	var uVar0;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	bool bVar11;
	var uVar12;
	bool bVar15;
	bool bVar16;
	float fVar17;
	float fVar18;
	vector3 vVar19;
	bool bVar22;
	vector3 vVar23;
	int iVar26;
	bool bVar27;
	bool bVar28;
	
	GET_POSITION(bParam0, &vLocal_31);
	GET_POSITION(bParam1, &uVar0);
	if (IS_ACTOR_DEAD(bParam1))
	{
		iLocal_65 = 2;
	}
	uParam2 = uParam2;
	fLocal_6 = (GET_CURRENT_GAME_TIME() - fLocal_15);
	if (fLocal_6 < 0,033333f)
	{
		fLocal_6 = 0,0333333f;
	}
	fLocal_15 = GET_CURRENT_GAME_TIME();
	switch (iLocal_65)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(bParam0) && GET_MOUNT(bParam0) != bParam1)
			{
				if ((GET_ACTOR_ENUM(bParam1) != 1012 || GET_ACTOR_ENUM(bParam1) != 1013) || GET_ACTOR_ENUM(bParam1) != 1014)
				{
					bLocal_36 = true;
				}
				else
				{
					bLocal_36 = false;
				}
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam1), "ForceBuckOnHorseBreaking"))
				{
					SET_ACTION_NODE_FOR_ACTOR(bParam1, "horse_breaking/Horse/Eject_Back");
					SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/180");
					Function_135(&bLocal_42);
					iLocal_65 = 2;
				}
				else
				{
					SET_HUD_MAP_DRAW_ENABLED(0);
					if (GET_WEAPON_IN_HAND(bParam0) == 21)
					{
						bLocal_13 = true;
					}
					ACTOR_START_FORCE_HOLSTER(bParam0, 0, 0);
					if (UI_ISACTIVE("LinearWeaponQuickPick"))
					{
						UI_EXIT("LinearWeaponQuickPick");
					}
					bLocal_96 = LOCATE_NAMED_VOLUME(vLocal_31, 100.0f, "HorseBreaking_StayOutVolume", 1);
					if (!IS_VOLUME_VALID(bLocal_96))
					{
						bLocal_96 = CREATE_VOLUME_IN_LAYOUT(bLocal_7, "HorseBreaking_StayOutVolume", 2, vLocal_31, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
					}
					if (IS_VOLUME_VALID(bLocal_96))
					{
						bLocal_97 = CREATE_OBJECTSET_IN_LAYOUT(Function_134(), bLocal_7, 15, 1);
						bLocal_98 = LOCATE_ACTORS_IN_VOLUME(bLocal_96, bLocal_97, 0, 1);
						PRINTSTRING("There are ");
						PRINTINT(bLocal_98);
						PRINTSTRING(" actors in the way");
						PRINTNL();
						bVar3 = false;
						while (bVar3 <= bLocal_98)
						{
							bVar4 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bLocal_97));
							if (bVar4 == bParam0 && bVar4 == bParam1)
							{
								SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar4, bLocal_96, 4, 1);
							}
							bVar3++;
						}
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_96);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_96);
					}
					else
					{
						LOG_ERROR("Failed to create StayOutVolume");
					}
					if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Phase"))
					{
						DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Phase", 0,5f);
					}
					if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Blend"))
					{
						DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Blend", 0.0f);
					}
					Function_130(0, 13, "HorseBreaking_Balance", 1, 0, 0, 0, 0);
					SET_ACTOR_RIDEABLE(bParam1, 0);
					if (bLocal_36)
					{
						SET_ACTION_NODE_FOR_ACTOR(bParam1, "bull_breaking/Bull/Standing");
						SET_ACTION_NODE_FOR_ACTOR(bParam0, "bull_breaking/Player/Sweep");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(bParam0, "horse_breaking/Player/Sweep");
					}
					SET_PANIM_PHASE(bParam0, 0,5f);
					Local_16.f_4 = 0,5f;
					Local_16.f_8 = 0.0f;
					Local_16.f_12 = 0.0f;
					Local_16.f_16 = 0.0f;
					Local_16.f_20 = 0.0f;
					SET_PANIM_PARAMS(bParam0, 0.0f, 0.0f);
					Local_16 = 0.0f;
					DECOR_SET_INT(bParam0, "HorseBreak", 4294967295);
					DECOR_SET_FLOAT(bParam0, "HorseBreakScore", -1.0f);
					HUD_SET_MINIGAME_TYPE_LAYOUT(3);
					bLocal_34 = true;
					Local_16.f_32 = uParam4;
					Global_3384 = 1;
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					Function_135(&iLocal_45);
					Function_135(&iLocal_48);
					Function_135(&bLocal_51);
					Function_129(&bLocal_51);
					Function_135(&bLocal_54);
					Function_129(&bLocal_54);
					Function_135(&bLocal_60);
					Function_129(&bLocal_60);
					Local_16.f_36 = 0;
					if (bLocal_36)
					{
						Local_16.f_32 = 1;
					}
					else
					{
						Local_16.f_32 = 0;
					}
					Function_127(&uLocal_26);
					if (Function_126(4, 3))
					{
						Function_125(&uLocal_26);
					}
					if (Function_123(&uLocal_26, 0))
					{
						Function_122("HorseBreaking_StickHelp", 0x41200000, 1, 0, 2, 1, 0);
					}
					Function_135(&iLocal_57);
					Function_135(&bLocal_42);
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam1), "Forward", true);
					if (bLocal_36)
					{
						if (!IS_ACTION_NODE_PLAYING_PARTIAL(bParam1, "bull_breaking/Bull/Buck"))
						{
							SET_ACTION_NODE_FOR_ACTOR(bParam1, "bull_breaking/Bull/Buck");
						}
					}
					else if (!IS_ACTION_NODE_PLAYING_PARTIAL(bParam1, "horse_breaking/Horse/Buck"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bParam1, "horse_breaking/Horse/Buck");
					}
					Function_116(&bLocal_14, bParam1);
					if (bLocal_36)
					{
						fLocal_99 = 1.0f;
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							Function_115(&Local_66, &fLocal_99);
							iVar5++;
						}
					}
					Function_114(&bLocal_8, (bLocal_11 + 1.0f));
					bLocal_100 = 0,5f;
					iLocal_65 = 1;
				}
			}
			else
			{
				fLocal_101 = (fLocal_101 + fLocal_6);
				if (fLocal_101 <= 2.0f)
				{
					Function_7(0);
					Function_7(1);
					Function_1(bParam0, bParam1);
					return 0;
				}
				if (bLocal_36)
				{
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(bParam1, "bull_breaking/Bull/Buck"))
					{
						SET_ACTION_NODE_FOR_ACTOR(bParam1, "bull_breaking/Bull/Buck");
					}
				}
				else if (!IS_ACTION_NODE_PLAYING_PARTIAL(bParam1, "horse_breaking/Horse/Buck"))
				{
					SET_ACTION_NODE_FOR_ACTOR(bParam1, "horse_breaking/Horse/Buck");
				}
			}
			break;
		
		case 0x00000001:
			if (DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "Ranch06_Moira"))
			{
				DETACH_LASSO(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_PLAYER_ACTOR(0), "Ranch06_Moira")));
				DECOR_REMOVE(GET_PLAYER_ACTOR(0), "Ranch06_Moira");
			}
			iVar6 = CUTSCENEOBJECT_GET_CURRENT_TRANSITION_TYPE(bLocal_14);
			uVar7 = GET_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(bLocal_14));
			if (iVar6 == 2)
			{
				PRINTSTRING("Setting SET_FIXED_TRANSITION_T with ");
				PRINTFLOAT(bLocal_100);
				PRINTNL();
				SET_FIXED_TRANSITION_T(uVar7, bLocal_100);
			}
			GET_VOLUME_CENTER(bLocal_96, &vVar8);
			if (IS_ACTOR_IN_VOLUME(bParam1, bLocal_96))
			{
				bVar11 = RAND_INT_RANGE(false, true);
			}
			else if (Function_113(StackVal, StackVal, GET_OBJECT_FROM_ACTOR(bParam1), vVar8))
			{
				bVar11 = false;
			}
			else if (Function_112(StackVal, StackVal, GET_OBJECT_FROM_ACTOR(bParam1), vVar8))
			{
				bVar11 = 2;
			}
			else
			{
				bVar11 = true;
			}
			switch (bVar11)
			{
				case 0x00000000:
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam1), "Forward", true);
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam1), "ForwardRight");
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam1), "ForwardLeft");
					if (Local_16 <= -0,2f && Local_16 >= 0,2f)
					{
						if (Function_111())
						{
							bLocal_100 = Function_110(&Local_16, -1.0f);
						}
						else
						{
							bLocal_100 = Function_110(&Local_16, 1.0f);
						}
					}
					else if (Local_16 > 0.0f)
					{
						bLocal_100 = Function_110(&Local_16, -1.0f);
					}
					else
					{
						bLocal_100 = Function_110(&Local_16, 1.0f);
					}
					break;
				
				case 0x00000002:
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam1), "ForwardRight", true);
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam1), "Forward");
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam1), "ForwardLeft");
					if (Local_16 <= -0,2f && Local_16 >= 0,2f)
					{
						if (Function_111())
						{
							bLocal_100 = Function_110(&Local_16, -1.0f);
						}
						else
						{
							bLocal_100 = Function_110(&Local_16, 1.0f);
						}
					}
					else if (Local_16 > 0.0f)
					{
						bLocal_100 = Function_110(&Local_16, -1.0f);
					}
					else
					{
						bLocal_100 = Function_110(&Local_16, 1.0f);
					}
					break;
				
				case 0x00000001:
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam1), "ForwardLeft", true);
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam1), "Forward");
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam1), "ForwardRight");
					if (Local_16 <= -0,2f && Local_16 >= 0,2f)
					{
						if (Function_111())
						{
							bLocal_100 = Function_110(&Local_16, -1.0f);
						}
						else
						{
							bLocal_100 = Function_110(&Local_16, 1.0f);
						}
					}
					else if (Local_16 > 0.0f)
					{
						bLocal_100 = Function_110(&Local_16, -1.0f);
					}
					else
					{
						bLocal_100 = Function_110(&Local_16, 1.0f);
					}
					break;
			}
			if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
			{
				Function_135(&bLocal_42);
				iLocal_65 = 2;
			}
			if (!Global_3380)
			{
				if (!HUD_IS_SHOWING_HELP_TEXT() && !iLocal_64)
				{
					iLocal_64 = 1;
					Function_109("HorseBreaking_StayCentered", 0x40f00000, 1, 2, 0, 0, 0);
				}
			}
			if (Function_108(&bLocal_42) < fParam3 && !bLocal_28)
			{
				if (bLocal_36)
				{
				}
				else
				{
					iLocal_65 = 5;
				}
			}
			if (bLocal_29)
			{
				iLocal_65 = 5;
			}
			if (Function_108(&iLocal_45) < 5.0f && !bLocal_28)
			{
				Function_115(&Local_66, &fLocal_99);
				Function_135(&iLocal_45);
			}
			if (((StackVal || StackVal >= 0,2f <= 0,8f) || Local_16 >= -0,6f) || Local_16 <= 0,6f)
			{
				if (!Function_107(&bLocal_51))
				{
					Function_129(&bLocal_51);
					Function_129(&bLocal_60);
				}
			}
			else if (Function_107(&bLocal_51))
			{
				Function_135(&bLocal_51);
				Function_105(&bLocal_60);
			}
			GET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bLocal_14, 0), &uVar12);
			VSCALE(&uVar12, -1.0f);
			bVar15 = FLOOR(UNK_0x9C40E671(&uVar12));
			Function_104(&bVar15);
			bLocal_30 = FLOOR(Function_103(bParam1));
			Function_104(&bLocal_30);
			bVar16 = (bLocal_30 - bVar15);
			Function_104(&bVar16);
			fVar17 = GET_STICK_X(Function_102(), 0, 1);
			fVar18 = GET_STICK_Y(Function_102(), 0, 1);
			vVar19 = { fVar18, 0.0f, fVar17 };
			bVar16 = false;
			if (VMAG(vVar19) > 0,2f)
			{
				bVar22 = 4294966296;
			}
			else
			{
				bVar22 = FLOOR(((UNK_0x9C40E671(&vVar19) - 90.0f) + IntToFloat(bVar16)));
				Function_104(&bVar22);
			}
			vVar23 = { 0.0f, 0.0f, 0.0f };
			if (bVar22 != 4294966296)
			{
				UNK_0x44986367(&vVar23, TO_FLOAT((bVar22 - 90)));
			}
			if (DECOR_CHECK_EXIST(bParam0, "Buck_FWD"))
			{
				Local_16.f_4 = Function_101(&Local_16, RAND_FLOAT_RANGE(bLocal_1, bLocal_2), 0.0f);
			}
			else if (DECOR_CHECK_EXIST(bParam0, "Buck_BWD"))
			{
				Local_16.f_4 = Function_101(&Local_16, -RAND_FLOAT_RANGE(bLocal_3, bLocal_4), 0.0f);
			}
			else
			{
				if (DECOR_CHECK_EXIST(bParam0, "Buck_MID"))
				{
				}
				Local_16.f_4 = Function_101(&Local_16, 0.0f, 0.0f);
			}
			Function_98(&Local_66);
			Local_16 = (Local_66.f_32 / 10.0f);
			SET_PANIM_PHASE(StackVal, GET_PLAYER_ACTOR(0));
			PRINTSTRING("Setting blend of ");
			PRINTFLOAT(Local_16);
			PRINTNL();
			PRINTSTRING("CheatMeterparam.x was ");
			PRINTFLOAT(Local_66.f_32);
			PRINTNL();
			SET_PANIM_PARAMS(GET_PLAYER_ACTOR(0), Local_16, 0.0f);
			iVar26 = 1;
			if (Global_3380)
			{
				if (Function_93(&uLocal_26, 0) && !HUD_IS_SHOWING_HELP_TEXT())
				{
					iVar26 = 1;
				}
				else
				{
					iVar26 = 0;
				}
			}
			if (!bLocal_28)
			{
				if (Local_16 >= -1.0f)
				{
					if (Function_108(&bLocal_54) < fLocal_99 && iVar26)
					{
						if (bLocal_36)
						{
							SET_ACTION_NODE_FOR_ACTOR(bParam1, "bull_breaking/Bull/Eject_Right");
							SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "bull_breaking/Player/Eject/Right");
							DECOR_SET_FLOAT(GET_PLAYER_ACTOR(0), "HorseBreakTime", Function_108(&bLocal_42));
							iLocal_65 = 3;
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(bParam1, "horse_breaking/Horse/Eject_Right");
							bVar27 = RAND_INT_RANGE(false, 100);
							if (StackVal && bVar27 > 25 < 0,8f)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/000");
							}
							else if (StackVal && bVar27 > 25 > -0,8f)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/180");
							}
							else if (bVar27 <= 50)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/045");
							}
							else if (bVar27 <= 75)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/090");
							}
							else
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/135");
							}
							iLocal_65 = 2;
						}
						PLAYER_RUMBLE("RUMBLE_HVY", 4294967295, 0);
						Function_135(&bLocal_42);
						SAY_SINGLE_LINE_CONTEXT(Function_92(), 466, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_107(&bLocal_54))
					{
						Function_135(&bLocal_54);
					}
					else if ((ROUND((Function_108(&bLocal_54) * 100.0f)) % 50) == 0)
					{
						if (bLocal_36)
						{
							if (!IS_ACTION_NODE_PLAYING_PARTIAL(GET_PLAYER_ACTOR(0), "bull_breaking/Player/Bad"))
							{
							}
						}
						else if (!IS_ACTION_NODE_PLAYING_PARTIAL(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Bad"))
						{
						}
						PLAYER_RUMBLE("RUMBLE_HVY", 4294967295, 0);
						SAY_SINGLE_LINE_CONTEXT(Function_92(), 467, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				else if (Local_16 <= 1.0f)
				{
					if (Function_108(&bLocal_54) < fLocal_99 && iVar26)
					{
						if (bLocal_36)
						{
							SET_ACTION_NODE_FOR_ACTOR(bParam1, "bull_breaking/Bull/Eject_Left");
							SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "bull_breaking/Player/Eject/Left");
							DECOR_SET_FLOAT(GET_PLAYER_ACTOR(0), "HorseBreakTime", Function_108(&bLocal_42));
							iLocal_65 = 3;
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(bParam1, "horse_breaking/Horse/Eject_Left");
							bVar28 = RAND_INT_RANGE(false, 100);
							if (StackVal && bVar28 > 25 < 0,8f)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/000");
							}
							else if (StackVal && bVar28 > 25 > -0,8f)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/180");
							}
							else if (bVar28 <= 50)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/225");
							}
							else if (bVar28 <= 75)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/270");
							}
							else
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/315");
							}
							iLocal_65 = 2;
						}
						PLAYER_RUMBLE("RUMBLE_HVY", 4294967295, 0);
						Function_135(&bLocal_42);
						SAY_SINGLE_LINE_CONTEXT(Function_92(), 466, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_107(&bLocal_54))
					{
						Function_135(&bLocal_54);
					}
					else if ((ROUND((Function_108(&bLocal_54) * 100.0f)) % 50) == 0)
					{
						if (bLocal_36)
						{
							if (!IS_ACTION_NODE_PLAYING_PARTIAL(GET_PLAYER_ACTOR(0), "bull_breaking/Player/Bad"))
							{
							}
						}
						else if (!IS_ACTION_NODE_PLAYING_PARTIAL(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Bad"))
						{
						}
						PLAYER_RUMBLE("RUMBLE_HVY", 4294967295, 0);
						SAY_SINGLE_LINE_CONTEXT(Function_92(), 467, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				else
				{
					Function_129(&bLocal_54);
					if (Local_16 <= -0,2f && Local_16 >= 0,2f)
					{
						SAY_SINGLE_LINE_CONTEXT(Function_92(), 468, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Phase"))
			{
				DECOR_SET_FLOAT(StackVal, GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Phase");
			}
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Blend"))
			{
				DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Blend", Local_16);
			}
			break;
		
		case 0x00000002:
			if (((((bLocal_36 && !IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "bull_breaking/Player/Eject")) && !IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "RagdollRecovery/RagdollGetUp")) || ((!bLocal_36 && !IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "horse_breaking/Player/Eject")) && !IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "RagdollRecovery/RagdollGetUp"))) || Function_108(&bLocal_42) < 30.0f) || IS_ACTOR_DEAD(bParam1))
			{
				if (Function_91(bLocal_63))
				{
					Function_90(bLocal_63);
				}
				TASK_CLEAR(bParam0);
				if (bLocal_34)
				{
					SET_ACTOR_RIDEABLE(bParam1, 1);
				}
				SET_BLIP_FLAG(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam1)), 1024, 1);
				DECOR_SET_INT(bParam0, "HorseBreak", false);
				Function_7(0);
				Function_7(1);
				Function_1(bParam0, bParam1);
				return 0;
			}
			if (IS_OBJECT_VALID(bLocal_14))
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_14);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				while (IS_OBJECT_VALID(bLocal_14) && !IS_EXITFLAG_SET())
				{
					WAIT(false);
				}
			}
			Function_89();
			Function_7(0);
			break;
		
		case 0x00000003:
			if ((bLocal_36 && !IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "bull_breaking/Player/Eject")) && !IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "RagdollRecovery/RagdollGetUp"))
			{
				iLocal_65 = 7;
			}
			break;
		
		case 0x00000004:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "bull_breaking/Player/Dismount"))
			{
				iLocal_65 = 7;
			}
			break;
		
		case 0x00000005:
			SAY_SINGLE_LINE_CONTEXT(Function_92(), 469, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "horse_breaking/Player/outro");
			SET_ACTION_NODE_FOR_ACTOR(bParam1, "horse_breaking/Horse/outro");
			iLocal_65 = 6;
			break;
		
		case 0x00000006:
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(bParam1, "horse_breaking/Horse/outro"))
			{
				iLocal_65 = 7;
			}
			else if (IS_OBJECT_VALID(bLocal_14))
			{
				CAMERA_RESET(0);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_14);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				while (IS_OBJECT_VALID(bLocal_14) && !IS_EXITFLAG_SET())
				{
					WAIT(false);
				}
			}
			break;
		
		case 0x00000007:
			if (!bLocal_36)
			{
				ANIMAL_ACTOR_SET_DOMESTICATION(bParam1, false);
			}
			TASK_CLEAR(bParam0);
			if ((Global_3380 || Global_3382) || Global_3392)
			{
				Function_42(bLocal_63, 0, 1, 0);
			}
			else
			{
				Function_42(bLocal_63, 1, 1, 0);
			}
			if (bLocal_34)
			{
				Function_28(405, 1.0f, 0);
				SET_ACTOR_RIDEABLE(bParam1, 1);
			}
			ACCESSORIZE_HORSE(bParam1, 7);
			if (!Function_27(Global_76846, 0x4000000))
			{
				if (Function_26(bParam1) != 979 || Function_26(bParam1) != 982)
				{
					Function_20(Global_34573, 0x4000000, 1, 0);
				}
			}
			if ((Function_11(Function_15((978 % 255), 3, 4), 0) && Function_11(Function_15((979 % 255), 3, 4), 0)) && Function_11(Function_15((982 % 255), 3, 4), 0))
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(18))
				{
					AWARD_ACHIEVEMENT(18);
				}
			}
			if (Function_11(Function_15((978 % 255), 3, 4), 0))
			{
				Function_9(39, 1);
			}
			if (Function_11(Function_15((982 % 255), 3, 4), 0))
			{
				Function_9(36, 1);
			}
			if (Function_11(Function_15((979 % 255), 3, 4), 0))
			{
				Function_9(30, 1);
			}
			DECOR_SET_INT(bParam0, "HorseBreak", true);
			DECOR_SET_FLOAT(bParam0, "HorseBreakScore", (Function_108(&bLocal_60) / fParam3));
			PRINTSTRING("nScore of ");
			PRINTFLOAT((Function_108(&bLocal_60) / fParam3));
			PRINTNL();
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_7(0);
			Function_7(1);
			Function_1(bParam0, bParam1);
			ANIMAL_ACTOR_SET_DOCILE(bParam1, 1);
			ANIMAL_TUNING_SET_ATTRIB_BOOL(bParam1, 22, true);
			return 0;
			break;
	}
	return 1;
}

int Function_9(int iParam0, int iParam1) //Position: 0x1AE9 / 6889
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_10(iParam0, iParam1);
	Function_20(Global_34573, 1, 4, 1);
	return 1;
}

int Function_10(int iParam0, int iParam1) //Position: 0x1B5A / 7002
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

bool Function_11(int iParam0, bool bParam1) //Position: 0x1BB4 / 7092
{
	if (!Function_12(iParam0))
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

bool Function_12(int iParam0) //Position: 0x1BEA / 7146
{
	if (!Function_14(iParam0))
	{
		return 0;
	}
	if (!Function_13(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_13(int iParam0) //Position: 0x1C0E / 7182
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_14(int iParam0) //Position: 0x1C23 / 7203
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1C3A / 7226
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_19(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_16(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_16(bParam0, bParam1, bParam2, 4294967295);
}

int Function_16(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1C98 / 7320
{
	var uVar0;
	
	if (!Function_18(bParam2))
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
	uVar0 = Function_19(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_17(uVar0);
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

int Function_17(int iParam0) //Position: 0x1DED / 7661
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

bool Function_18(int iParam0) //Position: 0x1E2B / 7723
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_19(int iParam0, int iParam1, int iParam2) //Position: 0x1E40 / 7744
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_20(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1E60 / 7776
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_22(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_21(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_21(char* cParam0, int iParam1) //Position: 0x1ECC / 7884
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

bool Function_22(bool bParam0, var uParam1, int iParam2) //Position: 0x1F03 / 7939
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
		if (Function_24(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_23(uVar0))
		{
			case 0x00000002:
				if (!Function_27(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_23(char* cParam0) //Position: 0x1F7B / 8059
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

int Function_24(int iParam0) //Position: 0x201C / 8220
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_25(&bVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (bVar1 >= 0)
	{
		bVar1 = (bVar1 && (bVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_25(bool bParam0, int iParam1) //Position: 0x2059 / 8281
{
	*bParam0 = (*bParam0 - (*bParam0 && iParam1));
	return;
}

int Function_26(bool bParam0) //Position: 0x206C / 8300
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

bool Function_27(var uParam0, int iParam1) //Position: 0x2087 / 8327
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_28(int iParam0, bool bParam1, bool bParam2) //Position: 0x209A / 8346
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
	Function_41(iParam0, bParam1, 1);
	Function_40(iParam0);
	if (bParam2 && bParam1 == 0.0f)
	{
		Function_29(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_29(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x22A4 / 8868
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_39(390))), 32);
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
					bVar19 = (Function_38(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_38(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_36(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_33(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_30(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_134(), &Var9);
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

var Function_30(int iParam0) //Position: 0x28D1 / 10449
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_31(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x28E2 / 10466
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_32(char* cParam0, char* cParam1) //Position: 0x29D7 / 10711
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_33(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x29F0 / 10736
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_35(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_34(Function_35(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_34(int iParam0, int iParam1) //Position: 0x2A55 / 10837
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_35(int iParam0, bool bParam1) //Position: 0x2A67 / 10855
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_36(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2A79 / 10873
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
	if (((Function_37(iParam0) != 19 || Function_37(iParam0) != 17) || Function_37(iParam0) != 10) || Function_37(iParam0) != 9)
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

int Function_37(int iParam0) //Position: 0x2BA9 / 11177
{
	return Global_35278[iParam020].f_48;
}

float Function_38(int iParam0) //Position: 0x2BB8 / 11192
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_39(int iParam0) //Position: 0x2BF1 / 11249
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_40(int iParam0) //Position: 0x2C2E / 11310
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

int Function_41(int iParam0, bool bParam1, bool bParam2) //Position: 0x2DC8 / 11720
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
		Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
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

void Function_42(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2FE2 / 12258
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_12(bParam0))
	{
		Function_87();
		return;
	}
	iVar0 = Function_86(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_85(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_84(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_83(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_77();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_75("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_69(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (iVar0)
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
						switch (Function_85(bParam0))
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
			Function_46(1);
			Function_44(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_43(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_43(int iParam0, int iParam1) //Position: 0x31F4 / 12788
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_44(var uParam0, var uParam1) //Position: 0x322E / 12846
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = uParam1;
	if (!Global_3365 && !Function_45())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_45() //Position: 0x3270 / 12912
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_46(bool bParam0) //Position: 0x3279 / 12921
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_61();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_47();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_25(&Global_63095, 1);
		Function_25(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_47() //Position: 0x32CA / 13002
{
	Function_60();
	Function_59();
	Function_59();
	Function_58();
	Function_58();
	Function_57();
	Function_57();
	Function_54();
	Function_54();
	if (!Function_45())
	{
		Function_52();
		Function_51();
		Function_50();
		Function_49();
	}
	Function_48();
	return;
}

void Function_48() //Position: 0x32FD / 13053
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

void Function_49() //Position: 0x3403 / 13315
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

void Function_50() //Position: 0x3436 / 13366
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

void Function_51() //Position: 0x35C4 / 13764
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

void Function_52() //Position: 0x3778 / 14200
{
	Function_53(&Global_28260, 1, 0);
	return;
}

void Function_53(int iParam0, bool bParam1, var uParam2) //Position: 0x3786 / 14214
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
	void fVar11;
	bool bVar12;
	void fVar13;
	
	bVar0 = Function_92();
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
			fVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = fVar11;
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
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
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

struct<8> Function_54() //Position: 0x3977 / 14711
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
				iVar2 = ((Function_56((50 + iVar4)) + Function_56((183 + iVar4))) + Function_56((90 + iVar4)));
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
	Function_55(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_55(int iParam0, bool bParam1, bool bParam2) //Position: 0x3A12 / 14866
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
		Function_41(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_40(iParam0);
	if (bParam2)
	{
		Function_29(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_56(bool bParam0) //Position: 0x3CAD / 15533
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_57() //Position: 0x3CEE / 15598
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
		iVar2 = ((Function_56((50 + iVar3) + 15) + Function_56((183 + iVar3) + 15)) + Function_56((90 + iVar3) + 15));
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
	Function_55(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_58() //Position: 0x3D77 / 15735
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
			iVar2 = ((Function_56((50 + iVar3) + 8) + Function_56((183 + iVar3) + 8)) + Function_56((90 + iVar3) + 8));
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
	Function_55(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_59() //Position: 0x3E0E / 15886
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
		iVar2 = ((Function_56((50 + iVar3)) + Function_56((183 + iVar3))) + Function_56((90 + iVar3)));
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
	Function_55(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_60() //Position: 0x3E8D / 16013
{
	Function_28(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_55(8, (GET_DAY(false) - 2), 0);
	return;
}

void Function_61() //Position: 0x3EB3 / 16051
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_63(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_63(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_62(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0,5f);
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

bool Function_62(vector3 vParam0) //Position: 0x3F54 / 16212
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_63(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3F6C / 16236
{
	int iVar0;
	
	iVar0 = Function_67(uParam2, uParam3);
	if (Function_66(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_65(&Global_63095, 1);
			Function_25(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_65(&Global_63095, 2);
			Function_25(&Global_63095, 1);
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
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_65(&Global_63095, 2);
		Function_25(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_64();
	return StackVal, StackVal, Function_64();
}

vector3 Function_64() //Position: 0x4053 / 16467
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_65(int iParam0, int iParam1) //Position: 0x405C / 16476
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_66(int iParam0) //Position: 0x406B / 16491
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_67(bool bParam0, bool bParam1) //Position: 0x4081 / 16513
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
				fVar2 = Function_68(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_68(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_66(bVar0) && !bParam1)
	{
		bVar0 = Function_67(bParam0, 1);
	}
	return bVar0;
}

float Function_68(vector3 vParam0, vector3 vParam3) //Position: 0x4148 / 16712
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_69(bool bParam0) //Position: 0x4165 / 16741
{
	int iVar0;
	int iVar1;
	
	if (!Function_14(bParam0))
	{
		return;
	}
	switch (Function_86(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_85(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_74(12, 1, 0, 0);
				Function_73(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_74(13, 1, 0, 0);
				Function_73(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_74(14, 1, 0, 0);
				Function_73(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_74(15, 1, 0, 0);
				Function_73(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_74(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_85(bParam0))
			{
				case 0x00000000:
					if (Function_72(bParam0) == 1)
					{
						iVar0 = Function_71(bParam0);
						if (Function_70(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_73(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_73(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_73(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_73(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_73(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_73(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_73(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_73(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_73(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_73(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_73(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_73(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_73(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_73(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_73(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_73(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_73(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_73(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_73(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_73(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_74(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_74(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_74(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_71(bParam0) == 0)
			{
				if (Function_72(bParam0) == 1)
				{
					Function_74(458, 1, 0, 0);
					iVar0 = Function_85(bParam0);
					if (Function_70(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_73(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_73(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_73(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_73(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_73(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_73(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_73(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_73(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_72(bParam0) == 1)
			{
				Function_74(400, 1, 0, 0);
			}
			switch (Function_85(bParam0))
			{
				case 0x00000001:
					Function_74(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_73(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_73(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_73(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_74(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_73(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_73(6, 9);
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

bool Function_70(int iParam0) //Position: 0x4641 / 17985
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_71(bool bParam0) //Position: 0x4657 / 18007
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_72(bool bParam0) //Position: 0x4676 / 18038
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_73(int iParam0, bool bParam1) //Position: 0x4690 / 18064
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

int Function_74(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x46F7 / 18167
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
	Function_41(iParam0, TO_FLOAT(bParam1), 1);
	Function_40(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_29(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_75(char* cParam0, bool bParam1) //Position: 0x4917 / 18711
{
	struct<4> Var0;
	
	if (!Function_12(bParam1))
	{
		return;
	}
	switch (Function_86(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_76(Function_85(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_86(bParam1), Function_85(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_86(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_86(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_86(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_86(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_86(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_76(int iParam0) //Position: 0x4A3B / 19003
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_77() //Position: 0x4A60 / 19040
{
	int iVar0;
	int iVar1;
	
	if (!Function_82(Global_6269))
	{
		return;
	}
	iVar0 = Function_56(24);
	iVar1 = Function_81(Global_6269);
	if (!Function_82(iVar0) && Function_80(iVar1) < 0)
	{
		Function_55(24, Global_6269, 0);
		Function_78(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_80(Function_81(iVar0)))
	{
		Function_55(24, Global_6269, 0);
		Function_78(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_78(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x4AE0 / 19168
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
		Function_79(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_79(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4E32 / 20018
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
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_80(int iParam0) //Position: 0x4EB5 / 20149
{
	if (!Function_12(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_81(int iParam0) //Position: 0x4ECF / 20175
{
	if (!Function_82(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_82(int iParam0) //Position: 0x4EE9 / 20201
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_83(int iParam0) //Position: 0x4EFF / 20223
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_84(char* cParam0) //Position: 0x4F29 / 20265
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

int Function_85(bool bParam0) //Position: 0x517F / 20863
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

int Function_86(bool bParam0) //Position: 0x519F / 20895
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_87() //Position: 0x51BA / 20922
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
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
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_88(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_88(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5401 / 21505
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

void Function_89() //Position: 0x542A / 21546
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_90(bool bParam0) //Position: 0x543F / 21567
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_12(bParam0))
	{
		return;
	}
	iVar0 = Function_86(bParam0);
	if (StackVal == 2)
	{
		Function_75("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_84(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_83(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

bool Function_91(int iParam0) //Position: 0x54E5 / 21733
{
	if (!Function_12(iParam0))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

var Function_92() //Position: 0x5506 / 21766
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_93(var uParam0, int iParam1) //Position: 0x551B / 21787
{
	return Function_94((*uParam0)[Function_97(iParam1)], Function_95(iParam1));
}

int Function_94(var uParam0, int iParam1) //Position: 0x5532 / 21810
{
	return (uParam0 && iParam1) == 0;
}

int Function_95(int iParam0) //Position: 0x553F / 21823
{
	return Function_96((iParam0 % 32));
}

int Function_96(bool bParam0) //Position: 0x554D / 21837
{
	return SHIFT_LEFT(true, bParam0);
}

int Function_97(int iParam0) //Position: 0x5559 / 21849
{
	return (iParam0 / 32);
}

void Function_98(int iParam0) //Position: 0x5564 / 21860
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	if (Function_108(&bLocal_8) < bLocal_11)
	{
		bVar1 = RAND_INT_RANGE(false, true);
		if (bVar1 == 0)
		{
			bVar0 = RAND_FLOAT_RANGE(5.0f, 8.0f);
		}
		else
		{
			bVar0 = RAND_FLOAT_RANGE(-8.0f, -5.0f);
		}
		bLocal_11 = RAND_FLOAT_RANGE(1.0f, 5.0f);
		Function_135(&bLocal_8);
		SAY_SINGLE_LINE_CONTEXT(Function_92(), 465, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	}
	else
	{
		bVar0 = GET_STICK_X(Function_102(), 0, 1);
	}
	if (FABS(bVar0) > 0,1f)
	{
		bVar0 = 0.0f;
	}
	if (bVar0 < 0.0f)
	{
		bVar0 = (StackVal * POW(StackVal, FABS(bVar0)));
	}
	else
	{
		bVar0 = (StackVal * POW(-StackVal, FABS(bVar0)));
	}
	vVar2.x = 1.0f;
	vVar2.f_4 = (iParam0->f_20 * Function_100(iParam0->f_32, iParam0->f_24, iParam0->f_16));
	vVar2.f_8 = 0.0f;
	VNORMALIZE(&vVar2);
	*(iParam0 + 32) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(*(iParam0 + 44), *(iParam0 + 32), StackVal) * Vector(fLocal_6, fLocal_6, fLocal_6), StackVal, StackVal) };
	if (iParam0->f_32 > -10.0f)
	{
		iParam0->f_32 = -10.0f;
		if (iParam0->f_44 > 0.0f)
		{
			Function_64();
			*(iParam0 + 44) = { StackVal, StackVal, Function_64() };
		}
	}
	else if (iParam0->f_32 < 10.0f)
	{
		iParam0->f_32 = 10.0f;
		if (iParam0->f_44 < 0.0f)
		{
			Function_64();
			*(iParam0 + 44) = { StackVal, StackVal, Function_64() };
		}
	}
	iParam0->f_32 = (iParam0->f_32 + (iParam0->f_28 * RAND_FLOAT_RANGE(-1.0f, 1.0f)));
	vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) * Vector(FtoV((-vVar2.y * *iParam0)), vVar2, StackVal) };
	vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar2, vVar5, vVar8) * Vector(bVar0, bVar0, bVar0), StackVal, StackVal), StackVal, StackVal) };
	*(iParam0 + 44) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(vVar8, *(iParam0 + 44), StackVal) * Vector(fLocal_6, fLocal_6, fLocal_6), StackVal, StackVal) / Vector(iParam0->f_12, iParam0->f_12, iParam0->f_12), StackVal, StackVal) };
	(iParam0 + 32)->f_4 = (iParam0->f_20 * Function_99(iParam0->f_32, iParam0->f_24, iParam0->f_16));
	if (iParam0->f_44 < 0.0f)
	{
		*(iParam0 + 44) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) * Vector(FtoV(VMAG(*(iParam0 + 44))), vVar2, StackVal) };
	}
	else
	{
		*(iParam0 + 44) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) * Vector(FtoV(VMAG(*(iParam0 + 44))), -Vector(vVar2, StackVal, StackVal), StackVal) };
	}
	return;
}

float Function_99(float fParam0, float fParam1, float fParam2) //Position: 0x5742 / 22338
{
	float fVar0;
	
	if (fParam0 < 0.0f)
	{
		fVar0 = (fParam0 + fParam1);
	}
	else
	{
		fVar0 = (fParam0 - fParam1);
	}
	return (EXP(((-fVar0 * fVar0) / ((2.0f * fParam2) * fParam2))) / (fParam2 * SQRT((2.0f * 3,14159f))));
}

float Function_100(float fParam0, float fParam1, float fParam2) //Position: 0x577F / 22399
{
	float fVar0;
	
	if (fParam0 < 0.0f)
	{
		fVar0 = (fParam0 + fParam1);
	}
	else
	{
		fVar0 = (fParam0 - fParam1);
	}
	return (((-fVar0 / (fParam2 * fParam2)) * EXP(((-fVar0 * fVar0) / ((2.0f * fParam2) * fParam2)))) / (fParam2 * SQRT((2.0f * 3,14159f))));
}

var Function_101(var uParam0, float fParam1, float fParam2) //Position: 0x57C6 / 22470
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = (1.0f * fParam1);
	if (fVar0 >= (0,1f * 1.0f) && fVar0 <= (-0,1f * 1.0f))
	{
		fVar0 = 0.0f;
	}
	fVar1 = (20.0f * fParam2);
	fVar2 = (fVar0 + fVar1);
	if (bLocal_0)
	{
		fVar3 = (StackVal * (-1.0f * 10.0f));
		fVar2 = (fVar2 + fVar3);
	}
	fVar4 = 0.0f;
	fVar5 = ((-uParam0->f_12 * fLocal_5) * fLocal_6);
	bVar6 = (((uParam0->f_12 + (fVar2 / 10.0f)) + fVar5) + fVar4);
	fVar7 = (StackVal + (bVar6 * fLocal_6));
	fVar8 = -1.0f;
	fVar9 = 1.0f;
	if (fVar7 > fVar8)
	{
		bVar6 = 0.0f;
		fVar7 = fVar8;
	}
	else if (fVar7 < fVar9)
	{
		bVar6 = 0.0f;
		fVar7 = fVar9;
	}
	uParam0->f_12 = bVar6;
	uParam0->f_8 = fVar7;
	PRINTSTRING("--------------------------------");
	PRINTNL();
	PRINTSTRING("NewVelocity of ");
	PRINTFLOAT(bVar6);
	PRINTNL();
	PRINTSTRING("Returning Phase of ");
	PRINTFLOAT(((fVar7 / 2.0f) + 0,5f));
	PRINTNL();
	return ((fVar7 / 2.0f) + 0,5f);
}

int Function_102() //Position: 0x58F5 / 22773
{
	bool bVar0;
	
	bVar0 = Function_92();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

var Function_103(bool bParam0) //Position: 0x590F / 22799
{
	return GET_HEADING(bParam0);
}

void Function_104(bool bParam0) //Position: 0x591A / 22810
{
	while (*bParam0 <= 0)
	{
		*bParam0 += 360;
	}
	while (*bParam0 >= 360)
	{
		*bParam0 = (*bParam0 - 360);
	}
	return;
}

void Function_105(bool bParam0) //Position: 0x5949 / 22857
{
	if (Function_106(bParam0))
	{
		if (Function_107(bParam0))
		{
			bParam0->f_4 = (StackVal - GET_CURRENT_GAME_TIME());
			bParam0->f_8 = 0.0f;
			Function_25(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_106(int iParam0) //Position: 0x5A10 / 23056
{
	return Function_94(*iParam0, 1);
}

bool Function_107(bool bParam0) //Position: 0x5A1D / 23069
{
	return Function_94(*bParam0, 2);
}

float Function_108(bool bParam0) //Position: 0x5A2A / 23082
{
	if (Function_106(bParam0))
	{
		if (Function_107(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_109(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x5AF2 / 23282
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

bool Function_110(float fParam0, float fParam1) //Position: 0x5B45 / 23365
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar0 = (1.0f * fParam1);
	fVar1 = 0.0f;
	fVar2 = ((-fParam0->f_24 * 1.0f) * fLocal_6);
	fVar3 = (((fParam0->f_24 + (fVar0 / 10.0f)) + fVar2) + fVar1);
	fVar4 = (fParam0->f_28 + (fVar3 * fLocal_6));
	fVar5 = 0.0f;
	fVar6 = 1.0f;
	if (fVar4 > fVar5)
	{
		fVar3 = 0.0f;
		fVar4 = fVar5;
	}
	else if (fVar4 < fVar6)
	{
		fVar3 = 0.0f;
		fVar4 = fVar6;
	}
	fParam0->f_24 = fVar3;
	fParam0->f_28 = fVar4;
	return fVar4;
}

bool Function_111() //Position: 0x5BB6 / 23478
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 <= 50)
	{
		return 1;
	}
	return 0;
	return 0;
}

bool Function_112(bool bParam0, vector3 vParam1) //Position: 0x5BD3 / 23507
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	float fVar9;
	
	GET_OBJECT_POSITION(bParam0, &vVar0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vParam1, StackVal) };
	GET_OBJECT_AXIS(bParam0, &uVar6, 0);
	fVar9 = VDOT(&vVar3, &uVar6);
	if (fVar9 < 0.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_113(bool bParam0, vector3 vParam1) //Position: 0x5C11 / 23569
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	bool bVar9;
	var uVar10;
	
	GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(bParam0), &vVar0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vParam1, StackVal) };
	GET_OBJECT_AXIS(bParam0, &uVar6, 0);
	bVar9 = VDOT(&vVar3, &uVar6);
	if (FABS(bVar9) > 0,3f)
	{
		GET_OBJECT_AXIS(bParam0, &uVar10, 2);
		bVar9 = VDOT(&vVar3, &uVar10);
		if (bVar9 > 0.0f)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_114(int iParam0, float fParam1) //Position: 0x5C79 / 23673
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_65(iParam0, 1);
	Function_25(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_115(var uParam0, int iParam1) //Position: 0x5C9A / 23706
{
	*uParam0 = (*uParam0 + 0,5f);
	uParam0->f_20 = (uParam0->f_20 + 0,5f);
	*iParam1 = (*iParam1 - 0,1f);
	if (*uParam0 < 30.0f)
	{
		*uParam0 = 30.0f;
	}
	if (StackVal > 1.0f)
	{
		uParam0->f_4 = 1.0f;
	}
	if (uParam0->f_20 < 8.0f)
	{
		uParam0->f_20 = 8.0f;
	}
	if (*iParam1 > 0.0f)
	{
		*iParam1 = 0.0f;
	}
	return;
}

void Function_116(var uParam0, bool bParam1) //Position: 0x5D0A / 23818
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(*uParam0))
	{
		DESTROY_OBJECT(*uParam0);
	}
	*uParam0 = Function_117(bLocal_7, 0, GET_RIDER(bParam1), bParam1, 1, 0, 0);
	vVar0 = { -1.0f, 0.0f, 0.0f };
	GET_CAMERA_UP_VECTOR(GET_CAMERA_FROM_CUTSCENEOBJECT(*uParam0), &vVar0);
	return;
}

var Function_117(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x5D44 / 23876
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_134(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HorseBreaking_LookBack", 3, 1);
	}
	Function_118(&bVar0, uParam2, uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 1, 0, 0);
		}
	}
	return bVar0;
}

void Function_118(var uParam0, var uParam1, int iParam2) //Position: 0x5DCA / 24010
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_121(&bVar0, uParam1, iParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_120(&bVar0, uParam1, iParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_119(&bVar0, uParam1, iParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_FIXED(*uParam0, 0, 1, 0,5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	return;
}

void Function_119(var uParam0, bool bParam1, bool bParam2) //Position: 0x5E24 / 24100
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam2, -6E-05f, 2,353129f, -4,577889f, -6,138669f, 179,3076f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 507);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0,95f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_120(var uParam0, bool bParam1, bool bParam2) //Position: 0x5EB3 / 24243
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam2, -2.0f, 1,8f, -4,577914f, -6,138727f, 179,3089f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,3f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, -0,2f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 507);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0,95f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_121(var uParam0, bool bParam1, bool bParam2) //Position: 0x5F60 / 24416
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam2, 2.0f, 1,8f, -4,577914f, -6,138727f, 179,3089f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,3f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0,2f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 507);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0,95f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_122(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6009 / 24585
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

bool Function_123(var uParam0, int iParam1) //Position: 0x6054 / 24660
{
	if (!Function_93(uParam0, iParam1))
	{
		Function_124(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_124(var uParam0, int iParam1) //Position: 0x606F / 24687
{
	Function_65(uParam0[Function_97(iParam1)], Function_95(iParam1));
	return;
}

void Function_125(int iParam0) //Position: 0x6086 / 24710
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(*iParam0)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_126(int iParam0, int iParam1) //Position: 0x60A5 / 24741
{
	bool bVar0;
	
	if (!Function_18(iParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= Global_13172)
	{
		if (Function_86(bVar0) != iParam0 && Function_85(bVar0) != iParam1)
		{
			if (Function_72(bVar0) >= 0)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_127(int iParam0) //Position: 0x60EA / 24810
{
	Function_128(iParam0);
	return;
}

void Function_128(int iParam0) //Position: 0x60F5 / 24821
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_129(bool bParam0) //Position: 0x6114 / 24852
{
	if (Function_106(bParam0))
	{
		if (!Function_107(bParam0))
		{
			bParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_65(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

int Function_130(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7) //Position: 0x61D3 / 25043
{
	if (!Function_133(uParam0, uParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		return Function_132(uParam0, uParam2, uParam3, bParam4, uParam5, uParam6, uParam7);
	}
	return Function_131(uParam0, uParam2);
}

int Function_131(var uParam0, int iParam1) //Position: 0x620D / 25101
{
	UI_SET_PROMPT_STRING(uParam0, iParam1);
	return 1;
}

var Function_132(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x621B / 25115
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", uParam1, uParam0, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool Function_133(var uParam0, int iParam1) //Position: 0x6255 / 25173
{
	UI_SET_PROMPT_ICON(uParam0, iParam1);
	return 1;
}

var Function_134() //Position: 0x6263 / 25187
{
	int iVar0;
	
	return iVar0;
}

void Function_135(bool bParam0) //Position: 0x626B / 25195
{
	Function_114(bParam0, 0.0f);
	return;
}

var Function_136() //Position: 0x6277 / 25207
{
	return Global_3392;
}

int Function_137(bool bParam0, bool bParam1) //Position: 0x6280 / 25216
{
	SATCHEL_SET_ENABLED(0);
	Global_3384 = 1;
	if (!Function_149((GET_ACTOR_ENUM(bParam0) % 255), 3, 4))
	{
		bLocal_63 = Function_16((GET_ACTOR_ENUM(bParam0) % 255), 3, 4, 4294967295);
	}
	else
	{
		bLocal_63 = Function_15((GET_ACTOR_ENUM(bParam0) % 255), 3, 4);
	}
	if ((Global_3380 || Global_3382) || Global_3392)
	{
		Function_148(bLocal_63, 0);
	}
	else
	{
		Function_148(bLocal_63, 1);
	}
	Function_146(&bLocal_80, "horse_breaking", 5, 0);
	Function_146(&bLocal_80, "custom/horse_breaking", 8, 0);
	Function_146(&bLocal_80, "bull_breaking", 5, 0);
	Function_146(&bLocal_80, "custom/bull_breaking", 8, 0);
	Function_146(&bLocal_80, "nminigames", 10, 0);
	while (!Function_140(&bLocal_80) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if ((GET_ACTOR_ENUM(bParam0) != 1012 || GET_ACTOR_ENUM(bParam0) != 1013) || GET_ACTOR_ENUM(bParam0) != 1014)
	{
		bLocal_36 = true;
	}
	else
	{
		bLocal_36 = false;
	}
	if (bLocal_36)
	{
		SET_ANIM_SET_FOR_ACTOR(bParam1, "bull_breaking", 0);
	}
	else
	{
		SET_ANIM_SET_FOR_ACTOR(bParam1, "horse_breaking", 0);
		SET_REACT_NODE_FOR_ACTOR(bParam1, "horse_breaking/Player/Reaction");
	}
	SET_HUD_MAP_DRAW_ENABLED(0);
	if (!IS_LAYOUTREF_VALID(bLocal_7))
	{
		bLocal_7 = CREATE_LAYOUT("HorseBreakingLayout");
	}
	if (bLocal_36)
	{
		SET_ANIM_SET_FOR_ACTOR(bParam0, "bull_breaking", 0);
	}
	else
	{
		SET_ANIM_SET_FOR_ACTOR(bParam0, "horse_breaking", 0);
		SET_REACT_NODE_FOR_ACTOR(bParam0, "horse_breaking/Horse/Reaction");
	}
	if (bLocal_36)
	{
		while ((!ACTOR_HAS_ANIM_SET(bParam1, "bull_breaking") || !ACTOR_HAS_ANIM_SET(bParam0, "bull_breaking")) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	else
	{
		while ((!ACTOR_HAS_ANIM_SET(bParam1, "horse_breaking") || !ACTOR_HAS_ANIM_SET(bParam0, "horse_breaking")) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	SET_ACTOR_INVULNERABILITY(bParam1, true);
	AI_IGNORE_ACTOR(bParam1);
	AI_DONT_HARM_ACTOR(bParam1);
	iLocal_35 = 0;
	Function_139(&iLocal_45);
	Function_139(&iLocal_48);
	Function_139(&bLocal_51);
	Function_139(&iLocal_57);
	Function_139(&bLocal_42);
	Function_139(&bLocal_54);
	Function_139(&bLocal_60);
	Function_139(&bLocal_8);
	DECOR_SET_BOOL(bParam0, "DisableBuckOff", true);
	Function_138(&Local_66);
	fLocal_99 = 1,5f;
	iLocal_65 = 0;
	return 1;
}

void Function_138(int iParam0) //Position: 0x656C / 25964
{
	bool bVar0;
	
	*iParam0 = 10.0f;
	iParam0->f_12 = 0,2f;
	iParam0->f_16 = 1.0f;
	iParam0->f_20 = 2.0f;
	iParam0->f_24 = 1,5f;
	iParam0->f_28 = 0.0f;
	iParam0->f_4 = 9.0f;
	iParam0->f_8 = 2.0f;
	Function_64();
	*(iParam0 + 32) = { StackVal, StackVal, Function_64() };
	Function_64();
	*(iParam0 + 44) = { StackVal, StackVal, Function_64() };
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 >= 50)
	{
		iParam0->f_32 = RAND_FLOAT_RANGE(-8.0f, -2.0f);
	}
	else
	{
		iParam0->f_32 = RAND_FLOAT_RANGE(2.0f, 8.0f);
	}
	return;
}

void Function_139(int iParam0) //Position: 0x65EB / 26091
{
	if (!Function_106(iParam0))
	{
		Function_114(iParam0, 0.0f);
	}
	return;
}

bool Function_140(int iParam0) //Position: 0x6600 / 26112
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_145();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_144(iParam0[iVar03], 8);
		}
		else if (Function_143())
		{
			iVar1 = 1;
			Function_144(iParam0[iVar03], 8);
		}
		Function_144(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_5(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_5(iParam0[03], 8) || iVar1));
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
				Function_144(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_144(iParam0[iVar03], 2);
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
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_144(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_144(iParam0[iVar03], 2);
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
	Function_141();
	return 1;
}

void Function_141() //Position: 0x697B / 27003
{
	if (!Function_142(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_142(int iParam0) //Position: 0x69BB / 27067
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_143() //Position: 0x69D7 / 27095
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

void Function_144(var uParam0, int iParam1) //Position: 0x6A02 / 27138
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_145() //Position: 0x6A13 / 27155
{
	if (!Function_142(128))
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

var Function_146(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x6A55 / 27221
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_147(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_144(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_147(var uParam0, int iParam1, int iParam2) //Position: 0x6A8D / 27277
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_144(uParam0[iVar03], 4);
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

void Function_148(int iParam0, int iParam1) //Position: 0x6B51 / 27473
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_12(iParam0))
	{
		Function_87();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_86(iParam0);
	if (StackVal != 2)
	{
		Function_75("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_46(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_85(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_84(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_83(Global_6269) };
		}
		bVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(bVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar12);
		APPEND_JOURNAL_ENTRY(bVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

bool Function_149(var uParam0, var uParam1, var uParam2) //Position: 0x6C61 / 27745
{
	var uVar0;
	
	uVar0 = Function_15(uParam0, uParam1, uParam2);
	return Function_12(uVar0);
}

