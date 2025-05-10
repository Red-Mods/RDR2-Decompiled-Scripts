//Decompiled with MagicRDR v1.0
//Function Count : 209
//Statics Count : 122
//Natives Count : 275
//Parameters Count : 2

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
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	bool bLocal_18 = false;
	float fLocal_19 = 0.0f;
	bool bLocal_20 = false;
	float fLocal_21 = 0.0f;
	bool bLocal_22 = false;
	float fLocal_23 = 0.0f;
	float fLocal_24 = 0.0f;
	bool bLocal_25 = false;
	bool bLocal_26 = false;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	bool bLocal_29 = false;
	int iLocal_30 = 0;
	bool bLocal_31 = false;
	bool bLocal_32 = false;
	float fLocal_33 = 0.0f;
	struct<37> Local_34 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_71 = 0;
	bool bLocal_72 = false;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	bool bLocal_78 = false;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	bool bLocal_81 = false;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	struct<33> Local_84 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_117 = 0.0f;
	bool bLocal_118 = false;
	float fLocal_119 = 0.0f;
	struct<5> ScriptParam_0 = { 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	bLocal_18 = false;
	fLocal_19 = 12.0f;
	bLocal_20 = 16.0f;
	fLocal_21 = 26.0f;
	bLocal_22 = 30.0f;
	fLocal_23 = 1.0f;
	bLocal_29 = RAND_FLOAT_RANGE(3.0f, 8.0f);
	iLocal_30 = 1;
	bLocal_31 = false;
	bLocal_46 = false;
	bLocal_47 = false;
	iLocal_55 = 0;
	fLocal_56 = 0.0f;
	iLocal_82 = 0;
	iLocal_83 = 0;
	bLocal_118 = 0.5f;
	fLocal_119 = 0.0f;
	if ((IS_ACTOR_VALID(StackVal) && IS_ACTOR_VALID(ScriptParam_0)) && !Global_3384)
	{
		if (IS_ACTOR_PLAYER(ScriptParam_0))
		{
			END_CURRENT_MINIGAME();
			Function_196(StackVal, ScriptParam_0);
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
			while (StackVal && Function_8(!IS_EXITFLAG_SET(), ScriptParam_0, Function_195(), bVar3, bVar1))
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
	if (IS_VOLUME_VALID(bLocal_114))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_114);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_114);
		DESTROY_VOLUME(bLocal_114);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Phase"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Phase");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Blend"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Blend");
	}
	SET_ACTOR_INVULNERABILITY(bParam0, 0);
	AI_STOP_IGNORING_ACTORS();
	AI_CLEAR_DONT_HARM_ACTOR(bParam0);
	HUD_STAMINA_OVERRIDE(0, 1120403456, 1120403456);
	Function_7(0);
	Function_7(1);
	bParam1 = bParam1;
	Global_3384 = 0;
	SET_HUD_MAP_DRAW_ENABLED(1);
	ACTOR_END_FORCE_HOLSTER(bParam0);
	if (bLocal_31)
	{
		ACTOR_DRAW_LAST_WEAPON(bParam0, 1);
	}
	if (IS_ACTOR_VALID(bParam1))
	{
		DECOR_SET_BOOL(bParam1, "DisableBuckOff", false);
	}
	Function_6(&uLocal_57);
	if (!iLocal_53)
	{
		RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
		RESET_REACT_NODE_FOR_ACTOR(bParam0);
		if (IS_ACTOR_VALID(bParam1))
		{
			RESET_ANIM_SET_FOR_ACTOR(bParam1, 1);
			RESET_REACT_NODE_FOR_ACTOR(bParam1);
		}
		iLocal_53 = 1;
	}
	if (IS_OBJECT_VALID(bLocal_32))
	{
		CAMERA_RESET(0);
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_32);
		SET_PLAYER_CONTROL(false, 0, 0, 0);
		while (IS_OBJECT_VALID(bLocal_32) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	if (IS_LAYOUTREF_VALID(bLocal_25))
	{
		DESTROY_LAYOUT(bLocal_25);
	}
	Function_2(&bLocal_98);
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

int Function_7(int iParam0) //Position: 0x534 / 1332
{
	UI_HIDE_PROMPT(iParam0);
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
	bool bVar29;
	
	GET_POSITION(bParam0, &vLocal_49);
	GET_POSITION(bParam1, &uVar0);
	if (IS_ACTOR_DEAD(bParam1))
	{
		iLocal_83 = 2;
	}
	uParam2 = uParam2;
	fLocal_24 = (GET_CURRENT_GAME_TIME() - fLocal_33);
	if (fLocal_24 < 0.033333f)
	{
		fLocal_24 = 0.0333333f;
	}
	fLocal_33 = GET_CURRENT_GAME_TIME();
	switch (iLocal_83)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(bParam0) && GET_MOUNT(bParam0) != bParam1)
			{
				if ((GET_ACTOR_ENUM(bParam1) != 1012 || GET_ACTOR_ENUM(bParam1) != 1013) || GET_ACTOR_ENUM(bParam1) != 1014)
				{
					bLocal_54 = true;
				}
				else
				{
					bLocal_54 = false;
				}
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam1), "ForceBuckOnHorseBreaking"))
				{
					SET_ACTION_NODE_FOR_ACTOR(bParam1, "horse_breaking/Horse/Eject_Back");
					SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/180");
					Function_194(&bLocal_60);
					iLocal_83 = 2;
				}
				else
				{
					SET_HUD_MAP_DRAW_ENABLED(0);
					if (GET_WEAPON_IN_HAND(bParam0) == 21)
					{
						bLocal_31 = true;
					}
					ACTOR_START_FORCE_HOLSTER(bParam0, 0, 0);
					if (UI_ISACTIVE("LinearWeaponQuickPick"))
					{
						UI_EXIT("LinearWeaponQuickPick");
					}
					bLocal_114 = LOCATE_NAMED_VOLUME(vLocal_49, 100.0f, "HorseBreaking_StayOutVolume", 1);
					if (!IS_VOLUME_VALID(bLocal_114))
					{
						bLocal_114 = CREATE_VOLUME_IN_LAYOUT(bLocal_25, "HorseBreaking_StayOutVolume", 2, vLocal_49, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
					}
					if (IS_VOLUME_VALID(bLocal_114))
					{
						bLocal_115 = CREATE_OBJECTSET_IN_LAYOUT(Function_193(), bLocal_25, 15, 1);
						bLocal_116 = LOCATE_ACTORS_IN_VOLUME(bLocal_114, bLocal_115, 0, 1);
						PRINTSTRING("There are ");
						PRINTINT(bLocal_116);
						PRINTSTRING(" actors in the way");
						PRINTNL();
						bVar3 = false;
						while (bVar3 <= bLocal_116)
						{
							bVar4 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bLocal_115));
							if (bVar4 == bParam0 && bVar4 == bParam1)
							{
								SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar4, bLocal_114, 4, 1);
							}
							bVar3++;
						}
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_114);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_114);
					}
					else
					{
						LOG_ERROR("Failed to create StayOutVolume");
					}
					if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Phase"))
					{
						DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Phase", 0.5f);
					}
					if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Blend"))
					{
						DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Blend", 0.0f);
					}
					Function_189(0, 13, "HorseBreaking_Balance", 1, 0, 0, 0, 0);
					SET_ACTOR_RIDEABLE(bParam1, 0);
					if (bLocal_54)
					{
						SET_ACTION_NODE_FOR_ACTOR(bParam1, "bull_breaking/Bull/Standing");
						SET_ACTION_NODE_FOR_ACTOR(bParam0, "bull_breaking/Player/Sweep");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(bParam0, "horse_breaking/Player/Sweep");
					}
					SET_PANIM_PHASE(bParam0, 0.5f);
					Local_34.f_4 = 0.5f;
					Local_34.f_8 = 0.0f;
					Local_34.f_12 = 0.0f;
					Local_34.f_16 = 0.0f;
					Local_34.f_20 = 0.0f;
					SET_PANIM_PARAMS(bParam0, 0.0f, 0.0f);
					Local_34 = 0.0f;
					DECOR_SET_INT(bParam0, "HorseBreak", 4294967295);
					DECOR_SET_FLOAT(bParam0, "HorseBreakScore", -1.0f);
					HUD_SET_MINIGAME_TYPE_LAYOUT(3);
					bLocal_52 = true;
					Local_34.f_32 = uParam4;
					Global_3384 = 1;
					SET_PLAYER_CONTROL(false, 0, 0, 0);
					Function_194(&bLocal_63);
					Function_194(&iLocal_66);
					Function_194(&bLocal_69);
					Function_188(&bLocal_69);
					Function_194(&bLocal_72);
					Function_188(&bLocal_72);
					Function_194(&bLocal_78);
					Function_188(&bLocal_78);
					Local_34.f_36 = 0;
					if (bLocal_54)
					{
						Local_34.f_32 = 1;
					}
					else
					{
						Local_34.f_32 = 0;
					}
					Function_186(&uLocal_44);
					if (Function_185(4, 3))
					{
						Function_184(&uLocal_44);
					}
					if (Function_182(&uLocal_44, 0))
					{
						Function_181("HorseBreaking_StickHelp", 0x41200000, 1, 0, 2, 1, 0);
					}
					Function_194(&iLocal_75);
					Function_194(&bLocal_60);
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam1), "Forward", true);
					if (bLocal_54)
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
					Function_175(&bLocal_32, bParam1);
					if (bLocal_54)
					{
						fLocal_117 = 1.0f;
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							Function_174(&Local_84, &fLocal_117);
							iVar5++;
						}
					}
					Function_173(&bLocal_26, (bLocal_29 + 1.0f));
					bLocal_118 = 0.5f;
					iLocal_83 = 1;
				}
			}
			else
			{
				fLocal_119 = (fLocal_119 + fLocal_24);
				if (fLocal_119 <= 2.0f)
				{
					Function_7(0);
					Function_7(1);
					Function_1(bParam0, bParam1);
					return 0;
				}
				if (bLocal_54)
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
			iVar6 = CUTSCENEOBJECT_GET_CURRENT_TRANSITION_TYPE(bLocal_32);
			uVar7 = GET_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(bLocal_32));
			if (iVar6 == 2)
			{
				PRINTSTRING("Setting SET_FIXED_TRANSITION_T with ");
				PRINTFLOAT(bLocal_118);
				PRINTNL();
				SET_FIXED_TRANSITION_T(uVar7, bLocal_118);
			}
			GET_VOLUME_CENTER(bLocal_114, &vVar8);
			if (IS_ACTOR_IN_VOLUME(bParam1, bLocal_114))
			{
				bVar11 = RAND_INT_RANGE(false, true);
			}
			else if (Function_172(StackVal, StackVal, GET_OBJECT_FROM_ACTOR(bParam1), vVar8))
			{
				bVar11 = false;
			}
			else if (Function_171(StackVal, StackVal, GET_OBJECT_FROM_ACTOR(bParam1), vVar8))
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
					if (Local_34 <= -0.2f && Local_34 >= 0.2f)
					{
						if (Function_170())
						{
							bLocal_118 = Function_169(&Local_34, -1.0f);
						}
						else
						{
							bLocal_118 = Function_169(&Local_34, 1.0f);
						}
					}
					else if (Local_34 > 0.0f)
					{
						bLocal_118 = Function_169(&Local_34, -1.0f);
					}
					else
					{
						bLocal_118 = Function_169(&Local_34, 1.0f);
					}
					break;
				
				case 0x00000002:
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam1), "ForwardRight", true);
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam1), "Forward");
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam1), "ForwardLeft");
					if (Local_34 <= -0.2f && Local_34 >= 0.2f)
					{
						if (Function_170())
						{
							bLocal_118 = Function_169(&Local_34, -1.0f);
						}
						else
						{
							bLocal_118 = Function_169(&Local_34, 1.0f);
						}
					}
					else if (Local_34 > 0.0f)
					{
						bLocal_118 = Function_169(&Local_34, -1.0f);
					}
					else
					{
						bLocal_118 = Function_169(&Local_34, 1.0f);
					}
					break;
				
				case 0x00000001:
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam1), "ForwardLeft", true);
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam1), "Forward");
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam1), "ForwardRight");
					if (Local_34 <= -0.2f && Local_34 >= 0.2f)
					{
						if (Function_170())
						{
							bLocal_118 = Function_169(&Local_34, -1.0f);
						}
						else
						{
							bLocal_118 = Function_169(&Local_34, 1.0f);
						}
					}
					else if (Local_34 > 0.0f)
					{
						bLocal_118 = Function_169(&Local_34, -1.0f);
					}
					else
					{
						bLocal_118 = Function_169(&Local_34, 1.0f);
					}
					break;
			}
			if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
			{
				Function_194(&bLocal_60);
				iLocal_83 = 2;
			}
			if (!Global_3380)
			{
				if (!HUD_IS_SHOWING_HELP_TEXT() && !iLocal_82)
				{
					iLocal_82 = 1;
					Function_168("HorseBreaking_StayCentered", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
			}
			if (Function_167(&bLocal_60) < fParam3 && !bLocal_46)
			{
				if (bLocal_54)
				{
				}
				else
				{
					iLocal_83 = 5;
				}
			}
			if (bLocal_47)
			{
				iLocal_83 = 5;
			}
			if (Function_167(&bLocal_63) < 5.0f && !bLocal_46)
			{
				Function_174(&Local_84, &fLocal_117);
				Function_194(&bLocal_63);
			}
			if (((StackVal || StackVal >= 0.2f <= 0.8f) || Local_34 >= -0.6f) || Local_34 <= 0.6f)
			{
				if (!Function_166(&bLocal_69))
				{
					Function_188(&bLocal_69);
					Function_188(&bLocal_78);
				}
			}
			else if (Function_166(&bLocal_69))
			{
				Function_194(&bLocal_69);
				Function_164(&bLocal_78);
			}
			GET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bLocal_32, 0), &uVar12);
			VSCALE(&uVar12, -1.0f);
			bVar15 = FLOOR(UNK_0x9C40E671(&uVar12));
			Function_163(&bVar15);
			bLocal_48 = FLOOR(Function_162(bParam1));
			Function_163(&bLocal_48);
			bVar16 = (bLocal_48 - bVar15);
			Function_163(&bVar16);
			fVar17 = GET_STICK_X(Function_161(), 0, 1);
			fVar18 = GET_STICK_Y(Function_161(), 0, 1);
			vVar19 = { fVar18, 0.0f, fVar17 };
			bVar16 = false;
			if (VMAG(vVar19) > 0.2f)
			{
				bVar22 = 4294966296;
			}
			else
			{
				bVar22 = FLOOR(((UNK_0x9C40E671(&vVar19) - 90.0f) + IntToFloat(bVar16)));
				Function_163(&bVar22);
			}
			vVar23 = { 0.0f, 0.0f, 0.0f };
			if (bVar22 != 4294966296)
			{
				UNK_0x44986367(&vVar23, TO_FLOAT((bVar22 - 90)));
			}
			if (DECOR_CHECK_EXIST(bParam0, "Buck_FWD"))
			{
				Local_34.f_4 = Function_160(&Local_34, RAND_FLOAT_RANGE(fLocal_19, bLocal_20), 0.0f);
			}
			else if (DECOR_CHECK_EXIST(bParam0, "Buck_BWD"))
			{
				Local_34.f_4 = Function_160(&Local_34, -RAND_FLOAT_RANGE(fLocal_21, bLocal_22), 0.0f);
			}
			else
			{
				if (DECOR_CHECK_EXIST(bParam0, "Buck_MID"))
				{
				}
				Local_34.f_4 = Function_160(&Local_34, 0.0f, 0.0f);
			}
			Function_157(&Local_84);
			Local_34 = (Local_84.f_32 / 10.0f);
			SET_PANIM_PHASE(StackVal, GET_PLAYER_ACTOR(0));
			PRINTSTRING("Setting blend of ");
			PRINTFLOAT(Local_34);
			PRINTNL();
			PRINTSTRING("CheatMeterparam.x was ");
			PRINTFLOAT(Local_84.f_32);
			PRINTNL();
			SET_PANIM_PARAMS(GET_PLAYER_ACTOR(0), Local_34, 0.0f);
			iVar26 = 1;
			if (Global_3380)
			{
				if (Function_154(&uLocal_44, 0) && !HUD_IS_SHOWING_HELP_TEXT())
				{
					iVar26 = 1;
				}
				else
				{
					iVar26 = 0;
				}
			}
			if (!bLocal_46)
			{
				if (Local_34 >= -1.0f)
				{
					if (Function_167(&bLocal_72) < fLocal_117 && iVar26)
					{
						if (bLocal_54)
						{
							SET_ACTION_NODE_FOR_ACTOR(bParam1, "bull_breaking/Bull/Eject_Right");
							SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "bull_breaking/Player/Eject/Right");
							DECOR_SET_FLOAT(GET_PLAYER_ACTOR(0), "HorseBreakTime", Function_167(&bLocal_60));
							iLocal_83 = 3;
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(bParam1, "horse_breaking/Horse/Eject_Right");
							bVar27 = RAND_INT_RANGE(false, 100);
							if (StackVal && bVar27 > 25 < 0.8f)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/000");
							}
							else if (StackVal && bVar27 > 25 > -0.8f)
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
							iLocal_83 = 2;
						}
						PLAYER_RUMBLE("RUMBLE_HVY", 4294967295, 0);
						Function_194(&bLocal_60);
						SAY_SINGLE_LINE_CONTEXT(Function_153(), 466, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_166(&bLocal_72))
					{
						Function_194(&bLocal_72);
					}
					else if ((ROUND((Function_167(&bLocal_72) * 100.0f)) % 50) == 0)
					{
						if (bLocal_54)
						{
							if (!IS_ACTION_NODE_PLAYING_PARTIAL(GET_PLAYER_ACTOR(0), "bull_breaking/Player/Bad"))
							{
							}
						}
						else if (!IS_ACTION_NODE_PLAYING_PARTIAL(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Bad"))
						{
						}
						PLAYER_RUMBLE("RUMBLE_HVY", 4294967295, 0);
						SAY_SINGLE_LINE_CONTEXT(Function_153(), 467, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				else if (Local_34 <= 1.0f)
				{
					if (Function_167(&bLocal_72) < fLocal_117 && iVar26)
					{
						if (bLocal_54)
						{
							SET_ACTION_NODE_FOR_ACTOR(bParam1, "bull_breaking/Bull/Eject_Left");
							SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "bull_breaking/Player/Eject/Left");
							DECOR_SET_FLOAT(GET_PLAYER_ACTOR(0), "HorseBreakTime", Function_167(&bLocal_60));
							iLocal_83 = 3;
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(bParam1, "horse_breaking/Horse/Eject_Left");
							bVar28 = RAND_INT_RANGE(false, 100);
							if (StackVal && bVar28 > 25 < 0.8f)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/000");
							}
							else if (StackVal && bVar28 > 25 > -0.8f)
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
							iLocal_83 = 2;
						}
						PLAYER_RUMBLE("RUMBLE_HVY", 4294967295, 0);
						Function_194(&bLocal_60);
						SAY_SINGLE_LINE_CONTEXT(Function_153(), 466, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_166(&bLocal_72))
					{
						Function_194(&bLocal_72);
					}
					else if ((ROUND((Function_167(&bLocal_72) * 100.0f)) % 50) == 0)
					{
						if (bLocal_54)
						{
							if (!IS_ACTION_NODE_PLAYING_PARTIAL(GET_PLAYER_ACTOR(0), "bull_breaking/Player/Bad"))
							{
							}
						}
						else if (!IS_ACTION_NODE_PLAYING_PARTIAL(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Bad"))
						{
						}
						PLAYER_RUMBLE("RUMBLE_HVY", 4294967295, 0);
						SAY_SINGLE_LINE_CONTEXT(Function_153(), 467, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				else
				{
					Function_188(&bLocal_72);
					if (Local_34 <= -0.2f && Local_34 >= 0.2f)
					{
						SAY_SINGLE_LINE_CONTEXT(Function_153(), 468, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Phase"))
			{
				DECOR_SET_FLOAT(StackVal, GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Phase");
			}
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Blend"))
			{
				DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(bParam0), "HorseBreaking_Blend", Local_34);
			}
			break;
		
		case 0x00000002:
			if (((((bLocal_54 && !IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "bull_breaking/Player/Eject")) && !IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "RagdollRecovery/RagdollGetUp")) || ((!bLocal_54 && !IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "horse_breaking/Player/Eject")) && !IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "RagdollRecovery/RagdollGetUp"))) || Function_167(&bLocal_60) < 30.0f) || IS_ACTOR_DEAD(bParam1))
			{
				if (Function_152(bLocal_81))
				{
					Function_151(bLocal_81);
				}
				TASK_CLEAR(bParam0);
				if (bLocal_52)
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
			if (IS_OBJECT_VALID(bLocal_32))
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_32);
				SET_PLAYER_CONTROL(false, 0, 0, 0);
				while (IS_OBJECT_VALID(bLocal_32) && !IS_EXITFLAG_SET())
				{
					WAIT(false);
				}
			}
			Function_150();
			Function_7(0);
			break;
		
		case 0x00000003:
			if ((bLocal_54 && !IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "bull_breaking/Player/Eject")) && !IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "RagdollRecovery/RagdollGetUp"))
			{
				iLocal_83 = 7;
			}
			break;
		
		case 0x00000004:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "bull_breaking/Player/Dismount"))
			{
				iLocal_83 = 7;
			}
			break;
		
		case 0x00000005:
			if (!Function_149())
			{
				SAY_SINGLE_LINE_CONTEXT(Function_153(), 469, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				bVar29 = GET_ACTOR_ENUM(GET_MOUNT(Function_153()));
				if (bVar29 <= 1268 && bVar29 >= 1271)
				{
					SAY_SINGLE_LINE_STRING(Function_153(), "BREAK_HORSE_OF_APOCALYPSE", false, false, 0, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(Function_153(), 469, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "horse_breaking/Player/outro");
			SET_ACTION_NODE_FOR_ACTOR(bParam1, "horse_breaking/Horse/outro");
			iLocal_83 = 6;
			break;
		
		case 0x00000006:
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(bParam1, "horse_breaking/Horse/outro"))
			{
				iLocal_83 = 7;
			}
			else if (IS_OBJECT_VALID(bLocal_32))
			{
				CAMERA_RESET(0);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_32);
				SET_PLAYER_CONTROL(false, 0, 0, 0);
				while (IS_OBJECT_VALID(bLocal_32) && !IS_EXITFLAG_SET())
				{
					WAIT(false);
				}
			}
			break;
		
		case 0x00000007:
			if (!bLocal_54)
			{
				ANIMAL_ACTOR_SET_DOMESTICATION(bParam1, 0);
			}
			TASK_CLEAR(bParam0);
			if ((Global_3380 || Global_3382) || Global_3392)
			{
				Function_129(bLocal_81, 0, 1, 0);
			}
			else
			{
				Function_129(bLocal_81, 1, 1, 0);
			}
			if (bLocal_52)
			{
				Function_128(405, 1.0f, 0);
				if (Function_149())
				{
					Function_28(bParam1);
				}
				SET_ACTOR_RIDEABLE(bParam1, 1);
			}
			ACCESSORIZE_HORSE(bParam1, 7);
			if (!Function_149())
			{
				if (!Function_27(Global_76846, 0x4000000))
				{
					if (Function_26(bParam1) != 979 || Function_26(bParam1) != 982)
					{
						Function_20(Global_34573, 0x4000000, 1, 0);
					}
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
			DECOR_SET_FLOAT(bParam0, "HorseBreakScore", (Function_167(&bLocal_78) / fParam3));
			PRINTSTRING("nScore of ");
			PRINTFLOAT((Function_167(&bLocal_78) / fParam3));
			PRINTNL();
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_7(0);
			Function_7(1);
			Function_1(bParam0, bParam1);
			ANIMAL_ACTOR_SET_DOCILE(bParam1, 1);
			ANIMAL_TUNING_SET_ATTRIB_BOOL(bParam1, 22, 1);
			return 0;
			break;
	}
	return 1;
}

int Function_9(int iParam0, int iParam1) //Position: 0x1B5D / 7005
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

int Function_10(int iParam0, int iParam1) //Position: 0x1BCE / 7118
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

bool Function_11(int iParam0, bool bParam1) //Position: 0x1C28 / 7208
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

bool Function_12(int iParam0) //Position: 0x1C5E / 7262
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

bool Function_13(int iParam0) //Position: 0x1C82 / 7298
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_14(int iParam0) //Position: 0x1C97 / 7319
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1CAE / 7342
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

int Function_16(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1D0C / 7436
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

int Function_17(int iParam0) //Position: 0x1E61 / 7777
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

bool Function_18(int iParam0) //Position: 0x1E9F / 7839
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_19(int iParam0, int iParam1, int iParam2) //Position: 0x1EB4 / 7860
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_20(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1ED4 / 7892
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

void Function_21(char* cParam0, int iParam1) //Position: 0x1F40 / 8000
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

bool Function_22(bool bParam0, var uParam1, int iParam2) //Position: 0x1F77 / 8055
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

int Function_23(char* cParam0) //Position: 0x1FEF / 8175
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

int Function_24(int iParam0) //Position: 0x2090 / 8336
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

void Function_25(bool bParam0, int iParam1) //Position: 0x20CD / 8397
{
	*bParam0 = (*bParam0 - (*bParam0 && iParam1));
	return;
}

int Function_26(bool bParam0) //Position: 0x20E0 / 8416
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

bool Function_27(var uParam0, int iParam1) //Position: 0x20FB / 8443
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_28(bool bParam0) //Position: 0x210E / 8462
{
	if (GET_ACTOR_ENUM(bParam0) == 1268)
	{
		if (Function_127(2, 5, 1) == 1.0f)
		{
			Function_126(&Global_12976 + 36 + 20, 2);
			Function_125(bParam0, 0);
			Function_124(2, 5, 1.0f, 1);
			ADD_ITEM(Function_123(77), Global_34573, 1);
			Function_94(2, &Global_49310[222] + 8, &Global_49310[222] + 12);
		}
	}
	else if (GET_ACTOR_ENUM(bParam0) == 1269)
	{
		if (Function_127(2, 6, 1) == 1.0f)
		{
			Function_126(&Global_12976 + 36 + 20, 2);
			Function_125(bParam0, 0);
			Function_124(2, 6, 1.0f, 1);
			Function_94(2, &Global_49310[222] + 8, &Global_49310[222] + 12);
		}
	}
	else if (GET_ACTOR_ENUM(bParam0) == 1270)
	{
		if (Function_127(2, 7, 1) == 1.0f)
		{
			Function_126(&Global_12976 + 36 + 20, 2);
			Function_125(bParam0, 0);
			Function_124(2, 7, 1.0f, 1);
			Function_94(2, &Global_49310[222] + 8, &Global_49310[222] + 12);
		}
	}
	else if (GET_ACTOR_ENUM(bParam0) == 1271)
	{
		if (Function_127(2, 8, 1) == 1.0f)
		{
			Function_126(&Global_12976 + 36 + 20, 2);
			Function_125(bParam0, 0);
			Function_124(2, 8, 1.0f, 1);
			Function_94(2, &Global_49310[222] + 8, &Global_49310[222] + 12);
		}
	}
	else if (GET_ACTOR_ENUM(bParam0) == 1267)
	{
		if (!Function_91(4, 0))
		{
			Function_29(18, 16, 0, 0, 0);
		}
		else
		{
			Function_29(23, 16, 0, 0, 0);
		}
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(95))
		{
			AWARD_ACHIEVEMENT(95);
		}
	}
	return;
}

void Function_29(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x2273 / 8819
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_90(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_89(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_88(bParam0, 2))
	{
		Function_87(456, 1, 0, 0);
		Function_86(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_181(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_85(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_86(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_84(0, 0, 1, 1))
			{
				Function_47(1);
				Function_45(1, 0);
			}
			else
			{
				Function_44();
			}
		}
		Function_39(bParam0);
		if (StackVal && !Function_37(((((!Function_38() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_37((((Function_38() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_149())
		{
			if (!Function_27(Global_76846, 2))
			{
				Function_20(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_32();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_31(3, bParam1);
				break;
			
			case 0x00000005:
				Function_31(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_31(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_31(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_31(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_31(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_30(2, 24);
				break;
			
			case 0x00000003:
				Function_30(2, 25);
				break;
			
			case 0x0000000F:
				Function_30(2, 26);
				break;
			
			case 0x0000000D:
				Function_30(2, 27);
				break;
			
			case 0x0000000E:
				Function_30(2, 28);
				break;
			}
	}
}

void Function_30(int iParam0, bool bParam1) //Position: 0x2509 / 9481
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

void Function_31(int iParam0, bool bParam1) //Position: 0x2570 / 9584
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

void Function_32() //Position: 0x25DB / 9691
{
	if (Function_90(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_36(Global_28180);
			Global_28180.f_8 = Function_33(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_36(Global_28180);
			Global_28180.f_8 = Function_33(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_33(int iParam0, int iParam1) //Position: 0x2656 / 9814
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
					if (Function_91(6, 0) || Function_91(12, 0))
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
					if (Function_35(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_91(5, 0))
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
					if (Function_35(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_35(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_35(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_35(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_91(26, 0))
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
					if (Function_35(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_35(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_35(27) && iVar18)
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
					if (Function_35(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_35(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_35(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_35(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_91(17, 0) && iVar15)
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
					if (Function_35(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_91(6, 0) && Function_35(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_35(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_91(9, 0) && Function_35(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_35(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_91(8, 0) && iVar19)
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
	if (Function_34(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_34(StackVal, StackVal, vVar3))
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
	if (!Function_34(StackVal, StackVal, vVar3))
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

bool Function_34(vector3 vParam0) //Position: 0x3247 / 12871
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_35(int iParam0) //Position: 0x325F / 12895
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_36(int iParam0) //Position: 0x3274 / 12916
{
	int iVar0;
	int iVar1;
	
	if (!Function_90(iParam0))
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

bool Function_37(bool bParam0, bool bParam1) //Position: 0x32C3 / 12995
{
	return (bParam0 && bParam1) == 0;
}

bool Function_38() //Position: 0x32D0 / 13008
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_39(bool bParam0) //Position: 0x32FD / 13053
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
			if (Function_85(bParam0, Function_43(bVar24)))
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
			if (Function_85(bParam0, Function_43(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_42(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_41(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_40(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_40(int iParam0) //Position: 0x34AD / 13485
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_90(iParam0))
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x3504 / 13572
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

var Function_42(int iParam0) //Position: 0x3529 / 13609
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_90(iParam0))
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

int Function_43(bool bParam0) //Position: 0x357F / 13695
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_44() //Position: 0x358B / 13707
{
	return;
}

void Function_45(int iParam0, int iParam1) //Position: 0x3591 / 13713
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_46())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_46() //Position: 0x35D3 / 13779
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_47(bool bParam0) //Position: 0x35DC / 13788
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_75();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_48();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_25(&Global_63095, 1);
		Function_25(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_48() //Position: 0x362D / 13869
{
	Function_74();
	Function_73();
	Function_73();
	Function_72();
	Function_72();
	Function_71();
	Function_71();
	Function_55(0);
	Function_55(0);
	if (!Function_46())
	{
		Function_53();
		Function_52();
		Function_51();
		Function_50();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_49();
	return;
}

void Function_49() //Position: 0x367F / 13951
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

void Function_50() //Position: 0x3785 / 14213
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

void Function_51() //Position: 0x37B8 / 14264
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

void Function_52() //Position: 0x3946 / 14662
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

void Function_53() //Position: 0x3AFA / 15098
{
	Function_54(&Global_28260, 1, 0);
	return;
}

void Function_54(int iParam0, bool bParam1, int iParam2) //Position: 0x3B08 / 15112
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
	
	bVar0 = Function_153();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || iParam2)
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

struct<8> Function_55(int iParam0) //Position: 0x3CF9 / 15609
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
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_70((50 + iVar4)) + Function_70((183 + iVar4))) + Function_70((90 + iVar4)));
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
	Function_56(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_56(int iParam0, bool bParam1, bool bParam2) //Position: 0x3D9F / 15775
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
		Function_69(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_68(iParam0);
	if (bParam2)
	{
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_57(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x403B / 16443
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_67(390))), 32);
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
					bVar19 = (Function_66(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_66(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_64(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_61(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_58(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_193(), &Var9);
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

var Function_58(int iParam0) //Position: 0x4668 / 18024
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_59(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4679 / 18041
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_60(char* cParam0, bool bParam1) //Position: 0x476E / 18286
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_61(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x4787 / 18311
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_63(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_62(Function_63(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_62(int iParam0, int iParam1) //Position: 0x47EC / 18412
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_63(int iParam0, bool bParam1) //Position: 0x47FE / 18430
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_64(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4810 / 18448
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
	if (((Function_65(iParam0) != 19 || Function_65(iParam0) != 17) || Function_65(iParam0) != 10) || Function_65(iParam0) != 9)
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

int Function_65(int iParam0) //Position: 0x4940 / 18752
{
	return Global_35278[iParam020].f_48;
}

float Function_66(int iParam0) //Position: 0x494F / 18767
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_67(int iParam0) //Position: 0x4988 / 18824
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_68(int iParam0) //Position: 0x49C5 / 18885
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

int Function_69(int iParam0, bool bParam1, bool bParam2) //Position: 0x4B5F / 19295
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

int Function_70(bool bParam0) //Position: 0x4DA3 / 19875
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_71() //Position: 0x4DE4 / 19940
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
		iVar2 = ((Function_70((50 + iVar3) + 15) + Function_70((183 + iVar3) + 15)) + Function_70((90 + iVar3) + 15));
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
	Function_56(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_72() //Position: 0x4E6D / 20077
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
			iVar2 = ((Function_70((50 + iVar3) + 8) + Function_70((183 + iVar3) + 8)) + Function_70((90 + iVar3) + 8));
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
	Function_56(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_73() //Position: 0x4F04 / 20228
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
		iVar2 = ((Function_70((50 + iVar3)) + Function_70((183 + iVar3))) + Function_70((90 + iVar3)));
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
	Function_56(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_74() //Position: 0x4F83 / 20355
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_128(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_56(8, (GET_DAY(false) - 2), 0);
	return;
}

void Function_75() //Position: 0x4FBC / 20412
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_149())
	{
		Function_81(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_81(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_76(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_76(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_34(StackVal, StackVal, vVar0))
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

vector3 Function_76(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5077 / 20599
{
	int iVar0;
	
	iVar0 = Function_79(uParam2, uParam3);
	if (Function_78(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_126(&Global_63095, 1);
			Function_25(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_126(&Global_63095, 2);
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
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_126(&Global_63095, 2);
		Function_25(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_77();
	return StackVal, StackVal, Function_77();
}

vector3 Function_77() //Position: 0x515E / 20830
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_78(int iParam0) //Position: 0x5167 / 20839
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x517D / 20861
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
				fVar2 = Function_80(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_80(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_78(bVar0) && !bParam1)
	{
		bVar0 = Function_79(bParam0, 1);
	}
	return bVar0;
}

float Function_80(vector3 vParam0, vector3 vParam3) //Position: 0x5244 / 21060
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_81(var uParam0, int iParam1) //Position: 0x5261 / 21089
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_83(Global_34573, &vVar4);
	if (!Function_82(Global_30640[0]))
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
	if (!Function_82(Global_30640[2]))
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
	if (!Function_82(Global_30640[1]))
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
	if (!Function_82(Global_30658[1]))
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
	if (!Function_82(Global_30658[3]))
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
	if (!Function_82(Global_30658[2]))
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
	if (!Function_82(Global_30658[4]))
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
	if (!Function_82(Global_30668[0]))
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
	if (!Function_82(Global_30668[1]))
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
	if (!Function_82(Global_30668[2]))
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
	if (!Function_82(Global_30679[0]))
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
	if (!Function_82(Global_30685[0]))
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
	if (!Function_82(Global_30685[1]))
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
	if (!Function_82(Global_30685[2]))
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
	if (!Function_82(Global_30693[0]))
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
	if (!Function_82(Global_30693[1]))
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
	if (!Function_82(Global_30693[2]))
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
	if (!Function_82(Global_30707[2]))
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
	if (!Function_82(Global_30707[3]))
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
	if (!Function_82(Global_30707[0]))
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
	if (!Function_82(Global_30717[0]))
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
	if (!Function_82(Global_30723[2]))
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
	if (!Function_82(Global_30723[1]))
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
	if (!Function_82(Global_30723[0]))
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
	if (!Function_82(Global_30679[1]))
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
	if (!Function_82(Global_30707[1]))
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
	Function_126(&Global_63095, 2);
	Function_25(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_34(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_82(int iParam0) //Position: 0x5A86 / 23174
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_37(uVar0, 0x1000000) || Function_37(uVar0, 0x2000000)) || Function_37(uVar0, 0x4000000)) || !Function_37(uVar0, 0x10000000));
}

void Function_83(bool bParam0, bool bParam1) //Position: 0x5AC1 / 23233
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_84(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x5ACE / 23246
{
	iParam0 = iParam0;
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
	if (Global_3393 && iParam2)
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
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_85(bool bParam0, int iParam1) //Position: 0x5B72 / 23410
{
	int iVar0;
	
	if (!Function_90(bParam0))
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

void Function_86(bool bParam0, int iParam1) //Position: 0x5BD1 / 23505
{
	if (!Function_90(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

int Function_87(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5C26 / 23590
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
	Function_69(iParam0, TO_FLOAT(bParam1), 1);
	Function_68(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

bool Function_88(int iParam0, int iParam1) //Position: 0x5E46 / 24134
{
	int iVar0;
	
	if (!Function_90(iParam0))
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

bool Function_89(int iParam0) //Position: 0x5E73 / 24179
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_90(int iParam0) //Position: 0x5E8F / 24207
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_91(int iParam0, bool bParam1) //Position: 0x5EA5 / 24229
{
	int iVar0;
	
	iVar0 = Function_92(iParam0);
	if (!Function_14(iVar0))
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

int Function_92(int iParam0) //Position: 0x5EE2 / 24290
{
	if (!Function_93(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_93(int iParam0) //Position: 0x5EFC / 24316
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_94(bool bParam0, var uParam1, int iParam2) //Position: 0x5F12 / 24338
{
	bool bVar0;
	float fVar1;
	
	switch (*uParam1)
	{
		case 0x00000000:
			Function_122(bParam0);
			Function_118(bParam0, uParam1, 1, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000001:
			Function_122(bParam0);
			Function_118(bParam0, uParam1, 2, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000002:
			Function_122(bParam0);
			Function_118(bParam0, uParam1, 3, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000003:
			Function_122(bParam0);
			Function_118(bParam0, uParam1, 4, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000004:
			if (Global_50170[23122].f_28 != 0 && Function_117(bParam0, 1) == 1)
			{
				Global_49310[bParam022].f_28++;
				Function_116(bParam0, 1, 1);
			}
			else if (Global_50170[23122].f_28 != 1 && Function_117(bParam0, 2) == 1)
			{
				Global_49310[bParam022].f_28++;
				Function_116(bParam0, 2, 1);
			}
			else if (Global_50170[23122].f_28 != 2 && Function_117(bParam0, 3) == 1)
			{
				Global_49310[bParam022].f_28++;
				Function_116(bParam0, 3, 1);
			}
			else if (Global_50170[23122].f_28 != 3 && Function_117(bParam0, 4) == 1)
			{
				Global_49310[bParam022].f_28++;
				Function_116(bParam0, 4, 1);
			}
			bVar0 = Global_49310[bParam022].f_28;
			if (bVar0 > 4)
			{
				*iParam2 = 0.0f;
				Function_99(bParam0, uParam1, 0);
				Function_98(bParam0);
				ADD_ITEM(Function_123(74), Global_34573, 1);
				ADD_ITEM(Function_123(76), Global_34573, 1);
				ADD_ITEM(Function_123(75), Global_34573, 1);
			}
			else
			{
				*iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(4));
				if (*iParam2 == fVar1)
				{
					Function_95(bParam0, *iParam2, 0, 4294967295, 4294967295, 4294967295, 0);
				}
			}
			break;
	}
	return;
}

void Function_95(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x6119 / 24857
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	char* cVar20[24];
	char* cVar26[24];
	char* cVar32[24];
	char* cVar38[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_97(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		if (((iParam0 != 12 || iParam0 != 13) || iParam0 != 10) || iParam0 != 11)
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_96(iParam0) };
			stradd(&cVar0, "_info", 24);
			memcpy(&cVar6, StackVal, *(&Global_49399[iParam022] + 16), 6);
			stradd(&cVar6, "_num", 24);
			if (bParam3 >= 4294967295)
			{
				UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
			}
			if (bParam4 >= 4294967295)
			{
				strcpy(&cVar12, "PVP_num2", 16);
				UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
			}
			if (bParam5 >= 4294967295)
			{
				strcpy(&cVar16, "PVP_num3", 16);
				UI_SET_STRING(&cVar16, INT_TO_STRING(bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_97(iParam0), &cVar0, 2, 2, false);
			Function_41(Function_97(iParam0), 0);
		}
		else
		{
			cVar20 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_96(iParam0) };
			if (Function_46() || Global_34165.f_44)
			{
				stradd(&cVar20, "_info_mp", 24);
			}
			else
			{
				stradd(&cVar20, "_info", 24);
			}
			if (bParam3 >= 4294967295)
			{
				strcpy(&cVar26, "AM_num", 24);
				stradd(&cVar26, INT_TO_STRING((1 + iParam6)), 24);
				UI_SET_STRING(&cVar26, INT_TO_STRING(bParam3));
			}
			if (bParam4 >= 4294967295)
			{
				strcpy(&cVar32, "AM_num", 24);
				stradd(&cVar32, INT_TO_STRING((2 + iParam6)), 24);
				UI_SET_STRING(&cVar32, INT_TO_STRING(bParam4));
			}
			if (bParam5 >= 4294967295)
			{
				strcpy(&cVar38, "AM_num", 24);
				stradd(&cVar38, INT_TO_STRING((3 + iParam6)), 24);
				UI_SET_STRING(&cVar38, INT_TO_STRING(bParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_97(iParam0), &cVar20, 2, 2, true);
			Function_41(Function_97(iParam0), 0);
		}
	}
}

struct<24> Function_96(int iParam0) //Position: 0x62A4 / 25252
{
	char* cVar0[24];
	
	if (Function_46() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
		stradd(&cVar0, "_", 24);
		stradd(&cVar0, INT_TO_STRING(StackVal), 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[iParam022] + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_97(int iParam0) //Position: 0x6316 / 25366
{
	if (Function_46() || Global_34165.f_44)
	{
		return Global_49399[iParam022].f_24;
	}
	return Global_49310[iParam022].f_24;
}

void Function_98(bool bParam0) //Position: 0x633E / 25406
{
	Function_122(bParam0);
	return;
}

void Function_99(bool bParam0, var uParam1, bool bParam2) //Position: 0x6349 / 25417
{
	Function_114(bParam0, 1);
	*uParam1 = 10;
	Function_111(bParam0);
	if (!IS_STRING_VALID(bParam2))
	{
		bParam2 = "challenge_04_128";
	}
	Function_107(bParam0, 11);
	Function_124(bParam0, 10, 1.0f, 1);
	Function_102();
	Function_101();
	Function_100(bParam0, 4);
	return;
}

void Function_100(int iParam0, int iParam1) //Position: 0x639B / 25499
{
	if (Global_34165.f_44)
	{
		Function_25(&Global_49399[iParam022] + 32, iParam1);
	}
	else
	{
		Function_25(&Global_49310[iParam022] + 32, iParam1);
	}
	return;
}

void Function_101() //Position: 0x63C8 / 25544
{
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(94))
	{
		if (StackVal && (StackVal && (StackVal && StackVal != 10 != 10) != 10) != 10)
		{
			AWARD_ACHIEVEMENT(94);
		}
	}
	return;
}

void Function_102() //Position: 0x640F / 25615
{
	if (!Function_91(4, 0))
	{
		Function_106(19, 0, 0, 0, 0);
	}
	else
	{
		Function_106(22, 0, 0, 0, 0);
	}
	if (StackVal && (StackVal && (StackVal && StackVal != 10 != 10) != 10) != 10)
	{
		if (!Function_91(4, 0))
		{
			Function_103(19, 0, 1);
		}
		else
		{
			Function_103(22, 0, 1);
		}
	}
	return;
}

void Function_103(bool bParam0, bool bParam1, bool bParam2) //Position: 0x647F / 25727
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_90(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_105(bParam0))
	{
		if (!Function_104(bParam0))
		{
			Function_106(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, false, 0, 2, 0, 0, 0);
			}
		}
		Function_87(457, 1, 0, 0);
		Function_86(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_84(0, 0, 1, 1))
			{
				Function_47(1);
				Function_45(1, 0);
			}
			else
			{
				Function_44();
			}
		}
	}
	return;
}

bool Function_104(int iParam0) //Position: 0x661E / 26142
{
	if (!Function_90(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_88(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_105(int iParam0) //Position: 0x6670 / 26224
{
	if (!Function_90(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_88(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

void Function_106(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x66C1 / 26305
{
	struct<8> Var0;
	
	if (!Function_90(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_89(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_104(bParam0))
	{
		Function_87(456, 1, 0, 0);
		Function_86(bParam0, 2);
		if (bParam2)
		{
			if (!Function_84(0, 0, 1, 1))
			{
				Function_47(1);
				Function_45(1, 5);
			}
			else
			{
				Function_44();
			}
		}
		Function_39(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_38() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (Function_38() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_181(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_149())
		{
			if (!Function_27(Global_76846, 2))
			{
				Function_20(Global_34573, 2, 1, 0);
			}
		}
	}
}

int Function_107(bool bParam0, int iParam1) //Position: 0x6816 / 26646
{
	int iVar0;
	
	if (Function_46() || Global_34165.f_44)
	{
		if (bParam0 >= Global_49399)
		{
			LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
			return 0;
		}
	}
	if (bParam0 >= Global_49310)
	{
		LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
		return 0;
	}
	iVar0 = Function_108();
	Global_63000[iVar08] = bParam0;
	Global_63000[iVar08].f_4 = iParam1;
	Global_63082 = Function_46();
	return 1;
}

int Function_108() //Position: 0x68C5 / 26821
{
	int iVar0;
	
	iVar0 = (Global_63000 - 1);
	while (iVar0 >= 0)
	{
		if (Global_63000[iVar08] == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	Function_109();
	return 0;
}

void Function_109() //Position: 0x68F3 / 26867
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_63000 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 >= 0)
	{
		Global_63000[iVar08] = Global_63000[iVar18];
		Global_63000[iVar08].f_4 = StackVal;
		*(&Global_63000[iVar08] + 8) = { StackVal, StackVal, StackVal, *(&Global_63000[iVar18] + 8) };
		*(&Global_63000[iVar08] + 24) = { StackVal, *(&Global_63000[iVar18] + 24) };
		Function_110(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_110(int iParam0) //Position: 0x696A / 26986
{
	Global_63000[iParam08] = 4294967295;
	Global_63000[iParam08].f_4 = 4294967295;
	strcpy(&Global_63000[iParam08] + 8, "NHIL", 16);
	strcpy(&Global_63000[iParam08] + 24, "NHIL", 8);
	return;
}

void Function_111(int iParam0) //Position: 0x69A6 / 27046
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_97(iParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_113(iParam0) };
	if (Function_46() || Global_34165.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_96(iParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_49310[iParam022] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_112(iParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_97(iParam0), &Var6, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Function_97(iParam0), true);
	SET_JOURNAL_ENTRY_PROGRESS(Function_97(iParam0), 1.0f, false, 0);
	return;
}

struct<24> Function_112(int iParam0) //Position: 0x6A19 / 27161
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_96(iParam0) };
	if (Global_34165.f_44 || Function_46())
	{
		stradd(&cVar0, "_mp_des", 24);
		if (!IS_STRING_VALID(UI_GET_STRING(&cVar0)))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_96(iParam0) };
			stradd(&cVar0, "_des", 24);
		}
	}
	else
	{
		stradd(&cVar0, "_des", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_113(int iParam0) //Position: 0x6A76 / 27254
{
	char* cVar0[24];
	
	if (Function_46() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
		stradd(&cVar0, "_DYNAMIC_TITLE", 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_114(bool bParam0, bool bParam1) //Position: 0x6AE2 / 27362
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_115();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			if (Function_46() || Global_34165.f_44)
			{
				(*&Global_49399[bParam022] + 36)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_49310[bParam022] + 36)[bVar0] = 0.0f;
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(bVar1, &cVar2))
			{
				DECOR_REMOVE(bVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			if (Function_46() || Global_34165.f_44)
			{
				(*&Global_49399[bParam022] + 36)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_49310[bParam022] + 36)[bVar0] = 0.0f;
			}
			bVar0++;
		}
	}
	if (bParam1)
	{
		if (Function_46() || Global_34165.f_44)
		{
			Global_49399[bParam022].f_28 = 0;
		}
		else
		{
			Global_49310[bParam022].f_28 = 0;
		}
	}
	return;
}

var Function_115() //Position: 0x6CA2 / 27810
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

int Function_116(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6CEF / 27887
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_115();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_INT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_INT: failed to store int value in slot");
	return 0;
}

int Function_117(bool bParam0, bool bParam1) //Position: 0x6D63 / 28003
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_115();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		if (DECOR_CHECK_EXIST(bVar4, &cVar0))
		{
			return DECOR_GET_INT(bVar4, &cVar0);
		}
		return 4294967295;
	}
	LOG_ERROR("AM_RETRIEVE_INT: failed to retrieve int value from layout");
	return 4294967295;
}

void Function_118(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x6DEE / 28142
{
	if (!IS_STRING_VALID(bParam4))
	{
		bParam4 = "challenge_04_128";
	}
	*bParam1 = uParam2;
	if (bParam5)
	{
		Function_114(bParam0, 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_97(bParam0), 0.0f, false, 0);
	}
	else
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_97(bParam0), (TO_FLOAT(Global_49310[bParam022].f_28) / TO_FLOAT(bParam3)), false, 0);
	}
	Function_120(bParam0, 0);
	Function_107(bParam0, *bParam1);
	Function_124(bParam0, 10, 1.0f, 1);
	Function_119(bParam0, 4);
}

void Function_119(bool bParam0, bool bParam1) //Position: 0x6E6D / 28269
{
	if (Function_46() || Global_34165.f_44)
	{
		Function_126(&Global_49399[bParam022] + 32, bParam1);
	}
	else
	{
		Function_126(&Global_49310[bParam022] + 32, bParam1);
	}
	return;
}

void Function_120(int iParam0, bool bParam1) //Position: 0x6E9E / 28318
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_97(iParam0));
	if ((bParam1 && Function_121(iParam0, 4)) || !bParam1)
	{
		PREPEND_JOURNAL_ENTRY(Function_97(iParam0), false);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_113(iParam0) };
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_96(iParam0) };
		UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_112(iParam0) };
		PREPEND_JOURNAL_ENTRY_DETAIL(Function_97(iParam0), &Var6, 0, 2, Function_121(iParam0, 4));
		if (iParam0 == 3)
		{
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_97(iParam0), "nAM_MAPHLP", 0, 2, true);
		}
		if (!bParam1)
		{
			Function_119(iParam0, 4);
		}
	}
	return;
}

bool Function_121(int iParam0, bool bParam1) //Position: 0x6F25 / 28453
{
	if (Function_46() || Global_34165.f_44)
	{
		return Function_37(Global_49399[iParam022].f_32, bParam1);
	}
	return Function_37(Global_49310[iParam022].f_32, bParam1);
}

void Function_122(bool bParam0) //Position: 0x6F57 / 28503
{
	if (Function_46() || Global_34165.f_44)
	{
		Function_116(bParam0, 0, Global_49399[bParam022].f_28);
	}
	else
	{
		Function_116(bParam0, 0, Global_49310[bParam022].f_28);
	}
	return;
}

var Function_123(bool bParam0) //Position: 0x6F8C / 28556
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

int Function_124(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x707D / 28797
{
	char* cVar0[16];
	bool bVar4;
	
	if (bParam3)
	{
		if (Function_46() || Global_34165.f_44)
		{
			(*&Global_49399[bParam022] + 36)[bParam1] = bParam2;
		}
		else
		{
			(*&Global_49310[bParam022] + 36)[bParam1] = bParam2;
		}
		return 1;
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_115();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		return DECOR_SET_FLOAT(bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_FLOAT: failed to store float value in slot");
	return 0;
}

void Function_125(bool bParam0, bool bParam1) //Position: 0x7134 / 28980
{
	DECOR_SET_OBJECT(Global_34573, "SettingPlayerHorse", bParam0);
	DECOR_SET_BOOL(Global_34573, "NewPlayerHorse_Wipe", bParam1);
	return;
}

void Function_126(int iParam0, bool bParam1) //Position: 0x7177 / 29047
{
	*iParam0 = (*iParam0 || bParam1);
	return;
}

float Function_127(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7186 / 29062
{
	char* cVar0[16];
	bool bVar4;
	
	if (bParam2)
	{
		if (Function_46() || Global_34165.f_44)
		{
			return (*&Global_49399[bParam022] + 36)[bParam1];
		}
		return (*&Global_49310[bParam022] + 36)[bParam1];
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_115();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		if (DECOR_CHECK_EXIST(bVar4, &cVar0))
		{
			return DECOR_GET_FLOAT(bVar4, &cVar0);
		}
		return -1.0f;
	}
	LOG_ERROR("AM_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return -1.0f;
}

int Function_128(int iParam0, bool bParam1, int iParam2) //Position: 0x7248 / 29256
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
	Function_69(iParam0, bParam1, 1);
	Function_68(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_57(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_129(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7452 / 29778
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_12(bParam0))
	{
		Function_147();
		return;
	}
	bVar0 = Function_146(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_145())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_144(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_143(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_142(Global_6269) };
		}
		if (Function_145())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_138();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_145())
	{
		Function_137();
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_135("DEED_COMPLETE", bParam0);
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
			Function_131(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (bVar0)
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
						switch (Function_144(bParam0))
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
			Function_47(1);
			Function_45(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_130(bParam0, &Var14);
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

void Function_130(int iParam0, int iParam1) //Position: 0x76A6 / 30374
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_131(bool bParam0) //Position: 0x76E0 / 30432
{
	int iVar0;
	int iVar1;
	
	if (!Function_14(bParam0))
	{
		return;
	}
	switch (Function_146(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_144(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_87(12, 1, 0, 0);
				Function_30(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_87(13, 1, 0, 0);
				Function_30(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_87(14, 1, 0, 0);
				Function_30(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_87(15, 1, 0, 0);
				Function_30(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_87(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_144(bParam0))
			{
				case 0x00000000:
					if (Function_134(bParam0) == 1)
					{
						iVar0 = Function_133(bParam0);
						if (Function_132(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_30(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_30(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_30(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_30(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_30(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_30(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_30(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_30(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_30(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_30(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_30(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_30(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_30(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_30(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_30(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_30(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_30(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_30(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_30(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_30(4, 19);
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
								Function_87(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_87(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_87(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_133(bParam0) == 0)
			{
				if (Function_134(bParam0) == 1)
				{
					Function_87(458, 1, 0, 0);
					iVar0 = Function_144(bParam0);
					if (Function_132(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_30(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_30(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_30(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_30(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_30(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_30(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_30(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_30(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_134(bParam0) == 1)
			{
				Function_87(400, 1, 0, 0);
			}
			switch (Function_144(bParam0))
			{
				case 0x00000001:
					Function_87(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_30(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_30(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_30(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_87(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_30(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_30(6, 9);
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

bool Function_132(int iParam0) //Position: 0x7BBC / 31676
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_133(bool bParam0) //Position: 0x7BD2 / 31698
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

int Function_134(bool bParam0) //Position: 0x7BF1 / 31729
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_135(char* cParam0, bool bParam1) //Position: 0x7C0B / 31755
{
	struct<4> Var0;
	
	if (!Function_12(bParam1))
	{
		return;
	}
	switch (Function_146(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_136(Function_144(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_146(bParam1), Function_144(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_146(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_146(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_146(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_146(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_146(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_136(int iParam0) //Position: 0x7D2F / 32047
{
	char* cVar0[16];
	
	if (!Function_149())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_137() //Position: 0x7D69 / 32105
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_70(0));
	PLAYSTAT_INT("HC_FAME", Function_70(3));
	PLAYSTAT_INT("HC_HONOR", Function_70(1));
	return;
}

void Function_138() //Position: 0x7EC1 / 32449
{
	int iVar0;
	int iVar1;
	
	if (!Function_93(Global_6269))
	{
		return;
	}
	iVar0 = Function_70(24);
	iVar1 = Function_92(Global_6269);
	if (!Function_93(iVar0) && Function_141(iVar1) < 0)
	{
		Function_56(24, Global_6269, 0);
		Function_139(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_141(Function_92(iVar0)))
	{
		Function_56(24, Global_6269, 0);
		Function_139(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_139(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x7F41 / 32577
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
		Function_140(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_140(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x82D6 / 33494
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

int Function_141(int iParam0) //Position: 0x8359 / 33625
{
	if (!Function_12(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<16> Function_142(int iParam0) //Position: 0x8373 / 33651
{
	char* cVar0[16];
	
	if (!Function_149())
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

struct<24> Function_143(char* cParam0) //Position: 0x83B2 / 33714
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

int Function_144(bool bParam0) //Position: 0x8608 / 34312
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

bool Function_145() //Position: 0x8628 / 34344
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_146(bool bParam0) //Position: 0x8653 / 34387
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_147() //Position: 0x866E / 34414
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
			Function_148(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_148(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x88B5 / 34997
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_149() //Position: 0x88DE / 35038
{
	if (Function_37(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_150() //Position: 0x88F9 / 35065
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_151(bool bParam0) //Position: 0x890E / 35086
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_12(bParam0))
	{
		return;
	}
	iVar0 = Function_146(bParam0);
	if (StackVal == 2)
	{
		Function_135("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_143(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_142(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

bool Function_152(int iParam0) //Position: 0x89B4 / 35252
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

var Function_153() //Position: 0x89D5 / 35285
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_154(var uParam0, int iParam1) //Position: 0x89EA / 35306
{
	return Function_37((*uParam0)[Function_156(iParam1)], Function_155(iParam1));
}

bool Function_155(int iParam0) //Position: 0x8A01 / 35329
{
	return Function_43((iParam0 % 32));
}

int Function_156(int iParam0) //Position: 0x8A0F / 35343
{
	return (iParam0 / 32);
}

void Function_157(int iParam0) //Position: 0x8A1A / 35354
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	
	if (Function_167(&bLocal_26) < bLocal_29)
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
		bLocal_29 = RAND_FLOAT_RANGE(1.0f, 5.0f);
		Function_194(&bLocal_26);
		if (!Function_149())
		{
			SAY_SINGLE_LINE_CONTEXT(Function_153(), 465, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			bVar2 = GET_ACTOR_ENUM(GET_MOUNT(Function_153()));
			if (bVar2 <= 1268 && bVar2 >= 1271)
			{
				SAY_SINGLE_LINE_STRING(Function_153(), "BREAK_HORSE_OF_APOCALYPSE", false, false, 0, 0, true, false);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(Function_153(), 465, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
		}
	}
	else
	{
		bVar0 = GET_STICK_X(Function_161(), 0, 1);
	}
	if (FABS(bVar0) > 0.1f)
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
	vVar3.x = 1.0f;
	vVar3.f_4 = (iParam0->f_20 * Function_159(iParam0->f_32, iParam0->f_24, iParam0->f_16));
	vVar3.f_8 = 0.0f;
	VNORMALIZE(&vVar3);
	*(iParam0 + 32) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(*(iParam0 + 44), *(iParam0 + 32), StackVal) * Vector(fLocal_24, fLocal_24, fLocal_24), StackVal, StackVal) };
	if (iParam0->f_32 > -10.0f)
	{
		iParam0->f_32 = -10.0f;
		if (iParam0->f_44 > 0.0f)
		{
			Function_77();
			*(iParam0 + 44) = { StackVal, StackVal, Function_77() };
		}
	}
	else if (iParam0->f_32 < 10.0f)
	{
		iParam0->f_32 = 10.0f;
		if (iParam0->f_44 < 0.0f)
		{
			Function_77();
			*(iParam0 + 44) = { StackVal, StackVal, Function_77() };
		}
	}
	iParam0->f_32 = (iParam0->f_32 + (iParam0->f_28 * RAND_FLOAT_RANGE(-1.0f, 1.0f)));
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) * Vector(FtoV((-vVar3.y * *iParam0)), vVar3, StackVal) };
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar6, vVar9) * Vector(bVar0, bVar0, bVar0), StackVal, StackVal), StackVal, StackVal) };
	*(iParam0 + 44) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(vVar9, *(iParam0 + 44), StackVal) * Vector(fLocal_24, fLocal_24, fLocal_24), StackVal, StackVal) / Vector(iParam0->f_12, iParam0->f_12, iParam0->f_12), StackVal, StackVal) };
	(iParam0 + 32)->f_4 = (iParam0->f_20 * Function_158(iParam0->f_32, iParam0->f_24, iParam0->f_16));
	if (iParam0->f_44 < 0.0f)
	{
		*(iParam0 + 44) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) * Vector(FtoV(VMAG(*(iParam0 + 44))), vVar3, StackVal) };
	}
	else
	{
		*(iParam0 + 44) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) * Vector(FtoV(VMAG(*(iParam0 + 44))), -Vector(vVar3, StackVal, StackVal), StackVal) };
	}
	return;
}

float Function_158(float fParam0, float fParam1, float fParam2) //Position: 0x8C59 / 35929
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
	return (EXP(((-fVar0 * fVar0) / ((2.0f * fParam2) * fParam2))) / (fParam2 * SQRT((2.0f * 3.14159f))));
}

float Function_159(float fParam0, float fParam1, float fParam2) //Position: 0x8C96 / 35990
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
	return (((-fVar0 / (fParam2 * fParam2)) * EXP(((-fVar0 * fVar0) / ((2.0f * fParam2) * fParam2)))) / (fParam2 * SQRT((2.0f * 3.14159f))));
}

var Function_160(var uParam0, float fParam1, float fParam2) //Position: 0x8CDD / 36061
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
	if (fVar0 >= (0.1f * 1.0f) && fVar0 <= (-0.1f * 1.0f))
	{
		fVar0 = 0.0f;
	}
	fVar1 = (20.0f * fParam2);
	fVar2 = (fVar0 + fVar1);
	if (bLocal_18)
	{
		fVar3 = (StackVal * (-1.0f * 10.0f));
		fVar2 = (fVar2 + fVar3);
	}
	fVar4 = 0.0f;
	fVar5 = ((-uParam0->f_12 * fLocal_23) * fLocal_24);
	bVar6 = (((uParam0->f_12 + (fVar2 / 10.0f)) + fVar5) + fVar4);
	fVar7 = (StackVal + (bVar6 * fLocal_24));
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
	PRINTFLOAT(((fVar7 / 2.0f) + 0.5f));
	PRINTNL();
	return ((fVar7 / 2.0f) + 0.5f);
}

int Function_161() //Position: 0x8E0C / 36364
{
	bool bVar0;
	
	bVar0 = Function_153();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

var Function_162(bool bParam0) //Position: 0x8E26 / 36390
{
	return GET_HEADING(bParam0);
}

void Function_163(bool bParam0) //Position: 0x8E31 / 36401
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

void Function_164(bool bParam0) //Position: 0x8E60 / 36448
{
	if (Function_165(bParam0))
	{
		if (Function_166(bParam0))
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

bool Function_165(int iParam0) //Position: 0x8F27 / 36647
{
	return Function_37(*iParam0, 1);
}

bool Function_166(bool bParam0) //Position: 0x8F34 / 36660
{
	return Function_37(*bParam0, 2);
}

float Function_167(bool bParam0) //Position: 0x8F41 / 36673
{
	if (Function_165(bParam0))
	{
		if (Function_166(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_168(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x9009 / 36873
{
	struct<4> Var0;
	int iVar4;
	
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
			Var0 = { StackVal, StackVal, StackVal, Function_142(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

bool Function_169(float fParam0, float fParam1) //Position: 0x908E / 37006
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
	fVar2 = ((-fParam0->f_24 * 1.0f) * fLocal_24);
	fVar3 = (((fParam0->f_24 + (fVar0 / 10.0f)) + fVar2) + fVar1);
	fVar4 = (fParam0->f_28 + (fVar3 * fLocal_24));
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

bool Function_170() //Position: 0x90FF / 37119
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

bool Function_171(bool bParam0, vector3 vParam1) //Position: 0x911C / 37148
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

bool Function_172(bool bParam0, vector3 vParam1) //Position: 0x915A / 37210
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
	if (FABS(bVar9) > 0.3f)
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

void Function_173(int iParam0, float fParam1) //Position: 0x91C2 / 37314
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_126(iParam0, 1);
	Function_25(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_174(var uParam0, int iParam1) //Position: 0x91E3 / 37347
{
	*uParam0 = (*uParam0 + 0.5f);
	uParam0->f_20 = (uParam0->f_20 + 0.5f);
	*iParam1 = (*iParam1 - 0.1f);
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

void Function_175(var uParam0, bool bParam1) //Position: 0x9253 / 37459
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(*uParam0))
	{
		DESTROY_OBJECT(*uParam0);
	}
	*uParam0 = Function_176(bLocal_25, 0, GET_RIDER(bParam1), bParam1, 1, 0, 0);
	vVar0 = { -1.0f, 0.0f, 0.0f };
	GET_CAMERA_UP_VECTOR(GET_CAMERA_FROM_CUTSCENEOBJECT(*uParam0), &vVar0);
	return;
}

var Function_176(bool bParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x928D / 37517
{
	bool bVar0;
	
	if (bParam4)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_193(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "HorseBreaking_LookBack", 3, 1);
	}
	Function_177(&bVar0, uParam2, uParam3);
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

void Function_177(var uParam0, var uParam1, int iParam2) //Position: 0x9313 / 37651
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_180(&bVar0, uParam1, iParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_179(&bVar0, uParam1, iParam2);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_178(&bVar0, uParam1, iParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_FIXED(*uParam0, 0, 1, 0.5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	return;
}

void Function_178(var uParam0, bool bParam1, bool bParam2) //Position: 0x936D / 37741
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam2, -6E-05f, 2.353129f, -4.577889f, -6.138669f, 179.3076f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 507);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.95f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_179(var uParam0, bool bParam1, bool bParam2) //Position: 0x93FC / 37884
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam2, -2.0f, 1.8f, -4.577914f, -6.138727f, 179.3089f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.3f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, -0.2f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 507);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.95f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_180(var uParam0, bool bParam1, bool bParam2) //Position: 0x94A9 / 38057
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 1);
	ATTACH_CAMERASHOT(*uParam0, bParam2, 2.0f, 1.8f, -4.577914f, -6.138727f, 179.3089f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.3f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.2f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 507);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.95f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_181(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9552 / 38226
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_142(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

bool Function_182(var uParam0, int iParam1) //Position: 0x95CD / 38349
{
	if (!Function_154(uParam0, iParam1))
	{
		Function_183(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_183(var uParam0, int iParam1) //Position: 0x95E8 / 38376
{
	Function_126(uParam0[Function_156(iParam1)], Function_155(iParam1));
	return;
}

void Function_184(int iParam0) //Position: 0x95FF / 38399
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

bool Function_185(int iParam0, int iParam1) //Position: 0x961E / 38430
{
	bool bVar0;
	
	if (!Function_18(iParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= Global_13172)
	{
		if (Function_146(bVar0) != iParam0 && Function_144(bVar0) != iParam1)
		{
			if (Function_134(bVar0) >= 0)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_186(int iParam0) //Position: 0x9663 / 38499
{
	Function_187(iParam0);
	return;
}

void Function_187(int iParam0) //Position: 0x966E / 38510
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

void Function_188(bool bParam0) //Position: 0x968D / 38541
{
	if (Function_165(bParam0))
	{
		if (!Function_166(bParam0))
		{
			bParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_126(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

int Function_189(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7) //Position: 0x974C / 38732
{
	if (!Function_192(uParam0, uParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		return Function_191(uParam0, uParam2, uParam3, bParam4, uParam5, uParam6, uParam7);
	}
	return Function_190(uParam0, uParam2);
}

int Function_190(var uParam0, int iParam1) //Position: 0x9786 / 38790
{
	UI_SET_PROMPT_STRING(uParam0, iParam1);
	return 1;
}

var Function_191(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x9794 / 38804
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", uParam1, uParam0, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool Function_192(var uParam0, int iParam1) //Position: 0x97CE / 38862
{
	UI_SET_PROMPT_ICON(uParam0, iParam1);
	return 1;
}

var Function_193() //Position: 0x97DC / 38876
{
	int iVar0;
	
	return iVar0;
}

void Function_194(bool bParam0) //Position: 0x97E4 / 38884
{
	Function_173(bParam0, 0.0f);
	return;
}

var Function_195() //Position: 0x97F0 / 38896
{
	return Global_3392;
}

int Function_196(bool bParam0, bool bParam1) //Position: 0x97F9 / 38905
{
	SATCHEL_SET_ENABLED(0);
	Global_3384 = 1;
	if (!Function_208((GET_ACTOR_ENUM(bParam0) % 255), 3, 4))
	{
		bLocal_81 = Function_16((GET_ACTOR_ENUM(bParam0) % 255), 3, 4, 4294967295);
	}
	else
	{
		bLocal_81 = Function_15((GET_ACTOR_ENUM(bParam0) % 255), 3, 4);
	}
	if ((Global_3380 || Global_3382) || Global_3392)
	{
		Function_207(bLocal_81, 0);
	}
	else
	{
		Function_207(bLocal_81, 1);
	}
	Function_205(&bLocal_98, "horse_breaking", 5, 0);
	Function_205(&bLocal_98, "custom/horse_breaking", 8, 0);
	Function_205(&bLocal_98, "bull_breaking", 5, 0);
	Function_205(&bLocal_98, "custom/bull_breaking", 8, 0);
	Function_205(&bLocal_98, "nminigames", 10, 0);
	while (!Function_199(&bLocal_98) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if ((GET_ACTOR_ENUM(bParam0) != 1012 || GET_ACTOR_ENUM(bParam0) != 1013) || GET_ACTOR_ENUM(bParam0) != 1014)
	{
		bLocal_54 = true;
	}
	else
	{
		bLocal_54 = false;
	}
	if (bLocal_54)
	{
		SET_ANIM_SET_FOR_ACTOR(bParam1, "bull_breaking", 0);
	}
	else
	{
		SET_ANIM_SET_FOR_ACTOR(bParam1, "horse_breaking", 0);
		SET_REACT_NODE_FOR_ACTOR(bParam1, "horse_breaking/Player/Reaction");
	}
	SET_HUD_MAP_DRAW_ENABLED(0);
	if (!IS_LAYOUTREF_VALID(bLocal_25))
	{
		bLocal_25 = CREATE_LAYOUT("HorseBreakingLayout");
	}
	if (bLocal_54)
	{
		SET_ANIM_SET_FOR_ACTOR(bParam0, "bull_breaking", 0);
	}
	else
	{
		SET_ANIM_SET_FOR_ACTOR(bParam0, "horse_breaking", 0);
		SET_REACT_NODE_FOR_ACTOR(bParam0, "horse_breaking/Horse/Reaction");
	}
	if (bLocal_54)
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
	SET_ACTOR_INVULNERABILITY(bParam1, 1);
	AI_IGNORE_ACTOR(bParam1);
	AI_DONT_HARM_ACTOR(bParam1);
	iLocal_53 = 0;
	Function_198(&bLocal_63);
	Function_198(&iLocal_66);
	Function_198(&bLocal_69);
	Function_198(&iLocal_75);
	Function_198(&bLocal_60);
	Function_198(&bLocal_72);
	Function_198(&bLocal_78);
	Function_198(&bLocal_26);
	DECOR_SET_BOOL(bParam0, "DisableBuckOff", true);
	Function_197(&Local_84);
	fLocal_117 = 1.5f;
	iLocal_83 = 0;
	return 1;
}

void Function_197(int iParam0) //Position: 0x9AE5 / 39653
{
	bool bVar0;
	
	*iParam0 = 10.0f;
	iParam0->f_12 = 0.2f;
	iParam0->f_16 = 1.0f;
	iParam0->f_20 = 2.0f;
	iParam0->f_24 = 1.5f;
	iParam0->f_28 = 0.0f;
	iParam0->f_4 = 9.0f;
	iParam0->f_8 = 2.0f;
	Function_77();
	*(iParam0 + 32) = { StackVal, StackVal, Function_77() };
	Function_77();
	*(iParam0 + 44) = { StackVal, StackVal, Function_77() };
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

void Function_198(int iParam0) //Position: 0x9B64 / 39780
{
	if (!Function_165(iParam0))
	{
		Function_173(iParam0, 0.0f);
	}
	return;
}

bool Function_199(int iParam0) //Position: 0x9B79 / 39801
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_204();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_203(iParam0[iVar03], 8);
		}
		else if (Function_202())
		{
			iVar1 = 1;
			Function_203(iParam0[iVar03], 8);
		}
		Function_203(iParam0[iVar03], 16);
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
				Function_203(iParam0[iVar03], 1);
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
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_203(iParam0[iVar03], 2);
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
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_203(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_203(iParam0[iVar03], 2);
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
	Function_200();
	return 1;
}

void Function_200() //Position: 0x9EF4 / 40692
{
	if (!Function_201(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_201(int iParam0) //Position: 0x9F34 / 40756
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_202() //Position: 0x9F50 / 40784
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

void Function_203(var uParam0, int iParam1) //Position: 0x9F7B / 40827
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_204() //Position: 0x9F8C / 40844
{
	if (!Function_201(128))
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

var Function_205(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9FCE / 40910
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_206(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_203(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_206(var uParam0, int iParam1, int iParam2) //Position: 0xA006 / 40966
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_203(uParam0[iVar03], 4);
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

void Function_207(bool bParam0, int iParam1) //Position: 0xA0CA / 41162
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_12(bParam0))
	{
		Function_147();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_146(bParam0);
	if (StackVal != 2)
	{
		Function_135("DEED_START", bParam0);
	}
	Global_13172[bParam011].f_8 = StackVal + 1;
	Global_13172[bParam011].f_4 = 2;
	Global_6271 = bParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_47(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_144(bParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_143(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_142(Global_6269) };
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

bool Function_208(var uParam0, var uParam1, var uParam2) //Position: 0xA1DA / 41434
{
	var uVar0;
	
	uVar0 = Function_15(uParam0, uParam1, uParam2);
	return Function_12(uVar0);
}

