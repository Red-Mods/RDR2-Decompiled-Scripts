//Decompiled with MagicRDR v1.0
//Function Count : 209
//Statics Count : 149
//Natives Count : 273
//Parameters Count : 4

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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	bool bLocal_22 = false;
	float fLocal_23 = 0.0f;
	bool bLocal_24 = false;
	float fLocal_25 = 0.0f;
	bool bLocal_26 = false;
	float fLocal_27 = 0.0f;
	float fLocal_28 = 0.0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	bool bLocal_31 = false;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	bool bLocal_35 = false;
	int iLocal_36 = 0;
	bool bLocal_37 = false;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	float fLocal_40 = 0.0f;
	struct<37> Local_41 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	bool bLocal_82 = false;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = false;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	bool bLocal_94 = false;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	bool bLocal_98 = false;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	struct<33> Local_101 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	bool bLocal_141 = false;
	float fLocal_142 = 0.0f;
	bool bLocal_143 = false;
	float fLocal_144 = 0.0f;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	bLocal_22 = false;
	fLocal_23 = 12.0f;
	bLocal_24 = 16.0f;
	fLocal_25 = 26.0f;
	bLocal_26 = 30.0f;
	fLocal_27 = 1.0f;
	bLocal_35 = RAND_FLOAT_RANGE(3.0f, 8.0f);
	iLocal_36 = 1;
	bLocal_37 = false;
	bLocal_55 = false;
	bLocal_56 = false;
	iLocal_64 = 0;
	fLocal_65 = 0.0f;
	iLocal_99 = 0;
	iLocal_100 = 0;
	bLocal_143 = 0,5f;
	fLocal_144 = 0.0f;
	if ((IS_ACTOR_VALID(&iScriptParam_0 + 8) && IS_ACTOR_VALID(&iScriptParam_0)) && !Global_6627)
	{
		if (IS_ACTOR_PLAYER(&iScriptParam_0))
		{
			END_CURRENT_MINIGAME();
			Function_196(&iScriptParam_0 + 8, &iScriptParam_0);
			iVar0 = 1;
			bVar1 = 2;
			iVar2 = 2;
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iScriptParam_0 + 8), "iStartingDifficulty"))
			{
				bVar1 = DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iScriptParam_0 + 8), "iStartingDifficulty");
				if (bVar1 <= 0)
				{
					LOG_ERROR("Tame Wild Horse: Invalid (negative) decorator iStartingDifficulty on horse");
					bVar1 = 2;
				}
			}
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iScriptParam_0 + 8), "fHowLong"))
			{
				bVar3 = DECOR_GET_FLOAT(GET_OBJECT_FROM_ACTOR(&iScriptParam_0 + 8), "fHowLong");
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
			while (!IS_EXITFLAG_SET() && Function_8(&iScriptParam_0, &iScriptParam_0 + 8, Function_195(), bVar3, bVar1))
			{
				if (IS_ACTOR_VALID(&Global_54076) && IS_ACTOR_VALID(&iScriptParam_0 + 8))
				{
					DECOR_SET_OBJECT(&Global_54076, "BrokenHorse", GET_OBJECT_FROM_ACTOR(&iScriptParam_0 + 8));
				}
				WAIT(false);
			}
			Function_1(&iScriptParam_0, &iScriptParam_0 + 8);
		}
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0, int iParam1) //Position: 0x22B / 555
{
	SATCHEL_SET_ENABLED(1);
	if (IS_VOLUME_VALID(&uLocal_137))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_137);
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_137);
		DESTROY_VOLUME(&uLocal_137);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iParam0), "HorseBreaking_Phase"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "HorseBreaking_Phase");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iParam0), "HorseBreaking_Blend"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "HorseBreaking_Blend");
	}
	SET_ACTOR_INVULNERABILITY(&iParam0, false);
	AI_STOP_IGNORING_ACTORS();
	AI_CLEAR_DONT_HARM_ACTOR(&iParam0);
	HUD_STAMINA_OVERRIDE(0, 1120403456, 1120403456);
	Function_7(0);
	Function_7(1);
	iParam1 = &iParam1;
	Global_6627 = 0;
	SET_HUD_MAP_DRAW_ENABLED(1);
	ACTOR_END_FORCE_HOLSTER(&iParam0);
	if (bLocal_37)
	{
		ACTOR_DRAW_LAST_WEAPON(&iParam0, 1);
	}
	if (IS_ACTOR_VALID(&iParam1))
	{
		DECOR_SET_BOOL(&iParam1, "DisableBuckOff", false);
	}
	Function_6(&uLocal_66);
	if (!iLocal_62)
	{
		RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
		RESET_REACT_NODE_FOR_ACTOR(&iParam0);
		if (IS_ACTOR_VALID(&iParam1))
		{
			RESET_ANIM_SET_FOR_ACTOR(&iParam1, 1);
			RESET_REACT_NODE_FOR_ACTOR(&iParam1);
		}
		iLocal_62 = 1;
	}
	if (IS_OBJECT_VALID(&uLocal_38))
	{
		CAMERA_RESET(0);
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&uLocal_38);
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		while (IS_OBJECT_VALID(&uLocal_38) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	if (IS_LAYOUTREF_VALID(&uLocal_29))
	{
		DESTROY_LAYOUT(&uLocal_29);
	}
	Function_2(&uLocal_115);
	DETACH_LASSO(&iParam0);
	return;
}

void Function_2(int iParam0) //Position: 0x3C1 / 961
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_3(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(struct<2>[] Param0, int iParam1) //Position: 0x3E9 / 1001
{
	if (Function_5(&(Param0[iParam12]), 4))
	{
		if (Function_5(&(Param0[iParam12]), 1))
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
			Function_4(&(Param0[iParam12]), 1);
			Function_4(&(Param0[iParam12]), 2);
			Function_4(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_4(struct<13> Param0) //Position: 0x534 / 1332
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_5(struct<13> Param0) //Position: 0x551 / 1361
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(vector3 vParam0) //Position: 0x56F / 1391
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

int Function_7(int iParam0) //Position: 0x586 / 1414
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

int Function_8(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4) //Position: 0x592 / 1426
{
	var uVar0;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	bool bVar9;
	var uVar10;
	bool bVar12;
	bool bVar13;
	float fVar14;
	float fVar15;
	struct<2> Var16;
	bool bVar18;
	var uVar19;
	int iVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	
	GET_POSITION(&iParam0, &Local_58);
	GET_POSITION(&iParam1, &uVar0);
	if (IS_ACTOR_DEAD(&iParam1))
	{
		iLocal_100 = 2;
	}
	uParam2 = &uParam2;
	fLocal_28 = (GET_CURRENT_GAME_TIME() - fLocal_40);
	if (fLocal_28 < 0,033333f)
	{
		fLocal_28 = 0,0333333f;
	}
	fLocal_40 = GET_CURRENT_GAME_TIME();
	switch (iLocal_100)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&iParam0) && GET_MOUNT(&iParam0) != &iParam1)
			{
				if ((GET_ACTOR_ENUM(&iParam1) != 1012 || GET_ACTOR_ENUM(&iParam1) != 1013) || GET_ACTOR_ENUM(&iParam1) != 1014)
				{
					bLocal_63 = true;
				}
				else
				{
					bLocal_63 = false;
				}
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iParam1), "ForceBuckOnHorseBreaking"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&iParam1, "horse_breaking/Horse/Eject_Back");
					SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/180");
					Function_194(&bLocal_70);
					iLocal_100 = 2;
				}
				else
				{
					SET_HUD_MAP_DRAW_ENABLED(0);
					if (GET_WEAPON_IN_HAND(&iParam0) == 21)
					{
						bLocal_37 = true;
					}
					ACTOR_START_FORCE_HOLSTER(&iParam0, 0, 0);
					if (UI_ISACTIVE("LinearWeaponQuickPick"))
					{
						UI_EXIT("LinearWeaponQuickPick");
					}
					uLocal_137 = LOCATE_NAMED_VOLUME(Local_58, 100.0f, "HorseBreaking_StayOutVolume", 1);
					if (!IS_VOLUME_VALID(&uLocal_137))
					{
						uLocal_137 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_29, "HorseBreaking_StayOutVolume", 2, Local_58, Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
					}
					if (IS_VOLUME_VALID(&uLocal_137))
					{
						uLocal_139 = CREATE_OBJECTSET_IN_LAYOUT(Function_193(), &uLocal_29, 15, 1);
						bLocal_141 = LOCATE_ACTORS_IN_VOLUME(&uLocal_137, &uLocal_139, 0, 1);
						PRINTSTRING("There are ");
						PRINTINT(bLocal_141);
						PRINTSTRING(" actors in the way");
						PRINTNL();
						bVar2 = false;
						while (bVar2 <= bLocal_141)
						{
							iVar3 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, &uLocal_139));
							if (&iVar3 == &iParam0 && &iVar3 == &iParam1)
							{
								SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iVar3, &uLocal_137, 4, 1);
							}
							bVar2++;
						}
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_137);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_137);
					}
					else
					{
						LOG_ERROR("Failed to create StayOutVolume");
					}
					if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iParam0), "HorseBreaking_Phase"))
					{
						DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(&iParam0), "HorseBreaking_Phase", 0,5f);
					}
					if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iParam0), "HorseBreaking_Blend"))
					{
						DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(&iParam0), "HorseBreaking_Blend", 0.0f);
					}
					Function_189(0, "{@GENERIC.MOVE_LEFT}{@GENERIC.MOVE_RIGHT}", "HorseBreaking_Balance", 1, 0, 0, 0, 0);
					SET_ACTOR_RIDEABLE(&iParam1, 0);
					if (bLocal_63)
					{
						SET_ACTION_NODE_FOR_ACTOR(&iParam1, "bull_breaking/Bull/Standing");
						SET_ACTION_NODE_FOR_ACTOR(&iParam0, "bull_breaking/Player/Sweep");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(&iParam0, "horse_breaking/Player/Sweep");
					}
					SET_PANIM_PHASE(&iParam0, 0,5f);
					Local_41.f_4 = 0,5f;
					Local_41.f_8 = 0.0f;
					Local_41.f_12 = 0.0f;
					Local_41.f_16 = 0.0f;
					Local_41.f_20 = 0.0f;
					SET_PANIM_PARAMS(&iParam0, 0.0f, 0.0f);
					Local_41 = 0.0f;
					DECOR_SET_INT(&iParam0, "HorseBreak", 4294967295);
					DECOR_SET_FLOAT(&iParam0, "HorseBreakScore", -1.0f);
					HUD_SET_MINIGAME_TYPE_LAYOUT(3);
					bLocal_61 = true;
					Local_41.f_32 = &uParam4;
					Global_6627 = 1;
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					Function_194(&bLocal_74);
					Function_194(&iLocal_78);
					Function_194(&bLocal_82);
					Function_188(&bLocal_82);
					Function_194(&bLocal_86);
					Function_188(&bLocal_86);
					Function_194(&bLocal_94);
					Function_188(&bLocal_94);
					Local_41.f_36 = 0;
					if (bLocal_63)
					{
						Local_41.f_32 = 1;
					}
					else
					{
						Local_41.f_32 = 0;
					}
					Function_186(&uLocal_51);
					if (Function_185(4, 3))
					{
						Function_184(&uLocal_51);
					}
					if (Function_182(&uLocal_51, 0))
					{
						Function_181("HorseBreaking_StickHelp", 0x41200000, 1, 0, 2, 1, 0);
					}
					Function_194(&iLocal_90);
					Function_194(&bLocal_70);
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam1), "Forward", true);
					if (bLocal_63)
					{
						if (!IS_ACTION_NODE_PLAYING_PARTIAL(&iParam1, "bull_breaking/Bull/Buck"))
						{
							SET_ACTION_NODE_FOR_ACTOR(&iParam1, "bull_breaking/Bull/Buck");
						}
					}
					else if (!IS_ACTION_NODE_PLAYING_PARTIAL(&iParam1, "horse_breaking/Horse/Buck"))
					{
						SET_ACTION_NODE_FOR_ACTOR(&iParam1, "horse_breaking/Horse/Buck");
					}
					Function_175(&uLocal_38, &iParam1);
					if (bLocal_63)
					{
						fLocal_142 = 1.0f;
						iVar4 = 0;
						while (iVar4 <= 8)
						{
							Function_174(&Local_101, &fLocal_142);
							iVar4++;
						}
					}
					Function_173(&bLocal_31, (bLocal_35 + 1.0f));
					bLocal_143 = 0,5f;
					iLocal_100 = 1;
				}
			}
			else
			{
				fLocal_144 = (fLocal_144 + fLocal_28);
				if (fLocal_144 <= 2.0f)
				{
					Function_7(0);
					Function_7(1);
					Function_1(&iParam0, &iParam1);
					return 0;
				}
				if (bLocal_63)
				{
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(&iParam1, "bull_breaking/Bull/Buck"))
					{
						SET_ACTION_NODE_FOR_ACTOR(&iParam1, "bull_breaking/Bull/Buck");
					}
				}
				else if (!IS_ACTION_NODE_PLAYING_PARTIAL(&iParam1, "horse_breaking/Horse/Buck"))
				{
					SET_ACTION_NODE_FOR_ACTOR(&iParam1, "horse_breaking/Horse/Buck");
				}
			}
			break;
		
		case 0x00000001:
			if (DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "Ranch06_Moira"))
			{
				DETACH_LASSO(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_PLAYER_ACTOR(0), "Ranch06_Moira")));
				DECOR_REMOVE(GET_PLAYER_ACTOR(0), "Ranch06_Moira");
			}
			iVar5 = CUTSCENEOBJECT_GET_CURRENT_TRANSITION_TYPE(&uLocal_38);
			uVar6 = GET_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&uLocal_38));
			if (iVar5 == 2)
			{
				PRINTSTRING("Setting SET_FIXED_TRANSITION_T with ");
				PRINTFLOAT(bLocal_143);
				PRINTNL();
				SET_FIXED_TRANSITION_T(&uVar6, bLocal_143);
			}
			GET_VOLUME_CENTER(&uLocal_137, &Var7);
			if (IS_ACTOR_IN_VOLUME(&iParam1, &uLocal_137))
			{
				bVar9 = RAND_INT_RANGE(false, true);
			}
			else if (Function_172(StackVal, GET_OBJECT_FROM_ACTOR(&iParam1), Var7))
			{
				bVar9 = false;
			}
			else if (Function_171(StackVal, GET_OBJECT_FROM_ACTOR(&iParam1), Var7))
			{
				bVar9 = 2;
			}
			else
			{
				bVar9 = true;
			}
			switch (bVar9)
			{
				case 0x00000000:
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam1), "Forward", true);
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam1), "ForwardRight");
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam1), "ForwardLeft");
					if (Local_41 <= -0,2f && Local_41 >= 0,2f)
					{
						if (Function_170())
						{
							bLocal_143 = Function_169(&Local_41, -1.0f);
						}
						else
						{
							bLocal_143 = Function_169(&Local_41, 1.0f);
						}
					}
					else if (Local_41 > 0.0f)
					{
						bLocal_143 = Function_169(&Local_41, -1.0f);
					}
					else
					{
						bLocal_143 = Function_169(&Local_41, 1.0f);
					}
					break;
				
				case 0x00000002:
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam1), "ForwardRight", true);
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam1), "Forward");
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam1), "ForwardLeft");
					if (Local_41 <= -0,2f && Local_41 >= 0,2f)
					{
						if (Function_170())
						{
							bLocal_143 = Function_169(&Local_41, -1.0f);
						}
						else
						{
							bLocal_143 = Function_169(&Local_41, 1.0f);
						}
					}
					else if (Local_41 > 0.0f)
					{
						bLocal_143 = Function_169(&Local_41, -1.0f);
					}
					else
					{
						bLocal_143 = Function_169(&Local_41, 1.0f);
					}
					break;
				
				case 0x00000001:
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam1), "ForwardLeft", true);
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam1), "Forward");
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam1), "ForwardRight");
					if (Local_41 <= -0,2f && Local_41 >= 0,2f)
					{
						if (Function_170())
						{
							bLocal_143 = Function_169(&Local_41, -1.0f);
						}
						else
						{
							bLocal_143 = Function_169(&Local_41, 1.0f);
						}
					}
					else if (Local_41 > 0.0f)
					{
						bLocal_143 = Function_169(&Local_41, -1.0f);
					}
					else
					{
						bLocal_143 = Function_169(&Local_41, 1.0f);
					}
					break;
			}
			if (!IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
			{
				Function_194(&bLocal_70);
				iLocal_100 = 2;
			}
			if (!Global_6623)
			{
				if (!HUD_IS_SHOWING_HELP_TEXT() && !iLocal_99)
				{
					iLocal_99 = 1;
					Function_168("HorseBreaking_StayCentered", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
			}
			if (Function_167(&bLocal_70) < &fParam3 && !bLocal_55)
			{
				if (bLocal_63)
				{
				}
				else
				{
					iLocal_100 = 5;
				}
			}
			if (bLocal_56)
			{
				iLocal_100 = 5;
			}
			if (Function_167(&bLocal_74) < 5.0f && !bLocal_55)
			{
				Function_174(&Local_101, &fLocal_142);
				Function_194(&bLocal_74);
			}
			if (((StackVal || StackVal >= 0,2f <= 0,8f) || Local_41 >= -0,6f) || Local_41 <= 0,6f)
			{
				if (!Function_166(&bLocal_82))
				{
					Function_188(&bLocal_82);
					Function_188(&bLocal_94);
				}
			}
			else if (Function_166(&bLocal_82))
			{
				Function_194(&bLocal_82);
				Function_164(&bLocal_94);
			}
			GET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uLocal_38, 0), &uVar10);
			VSCALE(&uVar10, -1.0f);
			bVar12 = FLOOR(UNK_0x9C40E671(&uVar10));
			Function_163(&bVar12);
			bLocal_57 = FLOOR(Function_162(&iParam1));
			Function_163(&bLocal_57);
			bVar13 = (bLocal_57 - bVar12);
			Function_163(&bVar13);
			fVar14 = GET_ANALOGUE_ACTION("@GENERIC.MOVE_X", 1);
			fVar15 = GET_ANALOGUE_ACTION("@GENERIC.MOVE_Y", 1);
			Var16 = Vector(fVar15, 0.0f, fVar14);
			bVar13 = false;
			if (VMAG(Var16) > 0,2f)
			{
				bVar18 = 4294966296;
			}
			else
			{
				bVar18 = FLOOR(((UNK_0x9C40E671(&Var16) - 90.0f) + IntToFloat(bVar13)));
				Function_163(&bVar18);
			}
			uVar19 = Vector(0.0f, 0.0f, 0.0f);
			if (bVar18 != 4294966296)
			{
				UNK_0x44986367(&uVar19, TO_FLOAT((bVar18 - 90)));
			}
			if (DECOR_CHECK_EXIST(&iParam0, "Buck_FWD"))
			{
				Local_41.f_4 = Function_160(&Local_41, RAND_FLOAT_RANGE(fLocal_23, bLocal_24), 0.0f);
			}
			else if (DECOR_CHECK_EXIST(&iParam0, "Buck_BWD"))
			{
				Local_41.f_4 = Function_160(&Local_41, -RAND_FLOAT_RANGE(fLocal_25, bLocal_26), 0.0f);
			}
			else
			{
				if (DECOR_CHECK_EXIST(&iParam0, "Buck_MID"))
				{
				}
				Local_41.f_4 = Function_160(&Local_41, 0.0f, 0.0f);
			}
			Function_157(&Local_101);
			Local_41 = (Local_101.f_32 / 10.0f);
			SET_PANIM_PHASE(StackVal, GET_PLAYER_ACTOR(0));
			PRINTSTRING("Setting blend of ");
			PRINTFLOAT(Local_41);
			PRINTNL();
			PRINTSTRING("CheatMeterparam.x was ");
			PRINTFLOAT(Local_101.f_32);
			PRINTNL();
			SET_PANIM_PARAMS(GET_PLAYER_ACTOR(0), Local_41, 0.0f);
			iVar21 = 1;
			if (Global_6623)
			{
				if (Function_154(&uLocal_51, 0) && !HUD_IS_SHOWING_HELP_TEXT())
				{
					iVar21 = 1;
				}
				else
				{
					iVar21 = 0;
				}
			}
			if (!bLocal_55)
			{
				if (Local_41 >= -1.0f)
				{
					if (Function_167(&bLocal_86) < fLocal_142 && iVar21)
					{
						if (bLocal_63)
						{
							SET_ACTION_NODE_FOR_ACTOR(&iParam1, "bull_breaking/Bull/Eject_Right");
							SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "bull_breaking/Player/Eject/Right");
							DECOR_SET_FLOAT(GET_PLAYER_ACTOR(0), "HorseBreakTime", Function_167(&bLocal_70));
							iLocal_100 = 3;
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(&iParam1, "horse_breaking/Horse/Eject_Right");
							bVar22 = RAND_INT_RANGE(false, 100);
							if (StackVal && bVar22 > 25 < 0,8f)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/000");
							}
							else if (StackVal && bVar22 > 25 > -0,8f)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/180");
							}
							else if (bVar22 <= 50)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/045");
							}
							else if (bVar22 <= 75)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/090");
							}
							else
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/135");
							}
							iLocal_100 = 2;
						}
						PLAYER_RUMBLE("RUMBLE_HVY", 4294967295, 0);
						Function_194(&bLocal_70);
						SAY_SINGLE_LINE_CONTEXT(Function_153(), 466, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_166(&bLocal_86))
					{
						Function_194(&bLocal_86);
					}
					else if ((ROUND((Function_167(&bLocal_86) * 100.0f)) % 50) == 0)
					{
						if (bLocal_63)
						{
							if (!IS_ACTION_NODE_PLAYING_PARTIAL(GET_PLAYER_ACTOR(0), "bull_breaking/Player/Bad"))
							{
							}
						}
						else if (!IS_ACTION_NODE_PLAYING_PARTIAL(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Bad"))
						{
						}
						PLAYER_RUMBLE("RUMBLE_HVY", 4294967295, 0);
						SAY_SINGLE_LINE_CONTEXT(Function_153(), 467, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				else if (Local_41 <= 1.0f)
				{
					if (Function_167(&bLocal_86) < fLocal_142 && iVar21)
					{
						if (bLocal_63)
						{
							SET_ACTION_NODE_FOR_ACTOR(&iParam1, "bull_breaking/Bull/Eject_Left");
							SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "bull_breaking/Player/Eject/Left");
							DECOR_SET_FLOAT(GET_PLAYER_ACTOR(0), "HorseBreakTime", Function_167(&bLocal_70));
							iLocal_100 = 3;
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(&iParam1, "horse_breaking/Horse/Eject_Left");
							bVar23 = RAND_INT_RANGE(false, 100);
							if (StackVal && bVar23 > 25 < 0,8f)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/000");
							}
							else if (StackVal && bVar23 > 25 > -0,8f)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/180");
							}
							else if (bVar23 <= 50)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/225");
							}
							else if (bVar23 <= 75)
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/270");
							}
							else
							{
								SET_ACTION_NODE_FOR_ACTOR(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Eject/315");
							}
							iLocal_100 = 2;
						}
						PLAYER_RUMBLE("RUMBLE_HVY", 4294967295, 0);
						Function_194(&bLocal_70);
						SAY_SINGLE_LINE_CONTEXT(Function_153(), 466, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
					else if (Function_166(&bLocal_86))
					{
						Function_194(&bLocal_86);
					}
					else if ((ROUND((Function_167(&bLocal_86) * 100.0f)) % 50) == 0)
					{
						if (bLocal_63)
						{
							if (!IS_ACTION_NODE_PLAYING_PARTIAL(GET_PLAYER_ACTOR(0), "bull_breaking/Player/Bad"))
							{
							}
						}
						else if (!IS_ACTION_NODE_PLAYING_PARTIAL(GET_PLAYER_ACTOR(0), "horse_breaking/Player/Bad"))
						{
						}
						PLAYER_RUMBLE("RUMBLE_HVY", 4294967295, 0);
						SAY_SINGLE_LINE_CONTEXT(Function_153(), 467, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
				else
				{
					Function_188(&bLocal_86);
					if (Local_41 <= -0,2f && Local_41 >= 0,2f)
					{
						SAY_SINGLE_LINE_CONTEXT(Function_153(), 468, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iParam0), "HorseBreaking_Phase"))
			{
				DECOR_SET_FLOAT(StackVal, GET_OBJECT_FROM_ACTOR(&iParam0), "HorseBreaking_Phase");
			}
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iParam0), "HorseBreaking_Blend"))
			{
				DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(&iParam0), "HorseBreaking_Blend", Local_41);
			}
			break;
		
		case 0x00000002:
			if (((((bLocal_63 && !IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, "bull_breaking/Player/Eject")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, "RagdollRecovery/RagdollGetUp")) || ((!bLocal_63 && !IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, "horse_breaking/Player/Eject")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, "RagdollRecovery/RagdollGetUp"))) || Function_167(&bLocal_70) < 30.0f) || IS_ACTOR_DEAD(&iParam1))
			{
				if (Function_152(bLocal_98))
				{
					Function_151(bLocal_98);
				}
				TASK_CLEAR(&iParam0);
				if (bLocal_61)
				{
					SET_ACTOR_RIDEABLE(&iParam1, 1);
				}
				SET_BLIP_FLAG(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam1)), 1024, 1);
				DECOR_SET_INT(&iParam0, "HorseBreak", false);
				Function_7(0);
				Function_7(1);
				Function_1(&iParam0, &iParam1);
				return 0;
			}
			if (IS_OBJECT_VALID(&uLocal_38))
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&uLocal_38);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				while (IS_OBJECT_VALID(&uLocal_38) && !IS_EXITFLAG_SET())
				{
					WAIT(false);
				}
			}
			Function_150();
			Function_7(0);
			break;
		
		case 0x00000003:
			if ((bLocal_63 && !IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, "bull_breaking/Player/Eject")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, "RagdollRecovery/RagdollGetUp"))
			{
				iLocal_100 = 7;
			}
			break;
		
		case 0x00000004:
			if (!IS_ACTION_NODE_PLAYING(&iParam0, "bull_breaking/Player/Dismount"))
			{
				iLocal_100 = 7;
			}
			break;
		
		case 0x00000005:
			if (!Function_149())
			{
				SAY_SINGLE_LINE_CONTEXT(Function_153(), 469, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				bVar24 = GET_ACTOR_ENUM(GET_MOUNT(Function_153()));
				if (bVar24 <= 1268 && bVar24 >= 1271)
				{
					SAY_SINGLE_LINE_STRING(Function_153(), "BREAK_HORSE_OF_APOCALYPSE", false, false, 0, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(Function_153(), 469, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "horse_breaking/Player/outro");
			SET_ACTION_NODE_FOR_ACTOR(&iParam1, "horse_breaking/Horse/outro");
			iLocal_100 = 6;
			break;
		
		case 0x00000006:
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&iParam1, "horse_breaking/Horse/outro"))
			{
				iLocal_100 = 7;
			}
			else if (IS_OBJECT_VALID(&uLocal_38))
			{
				CAMERA_RESET(0);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&uLocal_38);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				while (IS_OBJECT_VALID(&uLocal_38) && !IS_EXITFLAG_SET())
				{
					WAIT(false);
				}
			}
			break;
		
		case 0x00000007:
			if (!bLocal_63)
			{
				ANIMAL_ACTOR_SET_DOMESTICATION(&iParam1, false);
			}
			TASK_CLEAR(&iParam0);
			if ((Global_6623 || Global_6625) || Global_6635)
			{
				Function_129(bLocal_98, 0, 1, 0);
			}
			else
			{
				Function_129(bLocal_98, 1, 1, 0);
			}
			if (bLocal_61)
			{
				Function_128(405, 1.0f, 0);
				if (Function_149())
				{
					Function_28(&iParam1);
				}
				SET_ACTOR_RIDEABLE(&iParam1, 1);
			}
			ACCESSORIZE_HORSE(&iParam1, 7);
			if (!Function_149())
			{
				if (!Function_27(Global_119934, 0x4000000))
				{
					if (Function_26(&iParam1) != 979 || Function_26(&iParam1) != 982)
					{
						Function_20(&Global_54076, 0x4000000, 1, 0);
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
			DECOR_SET_INT(&iParam0, "HorseBreak", true);
			DECOR_SET_FLOAT(&iParam0, "HorseBreakScore", (Function_167(&bLocal_94) / &fParam3));
			PRINTSTRING("nScore of ");
			PRINTFLOAT((Function_167(&bLocal_94) / &fParam3));
			PRINTNL();
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_7(0);
			Function_7(1);
			Function_1(&iParam0, &iParam1);
			ANIMAL_ACTOR_SET_DOCILE(&iParam1, 1);
			ANIMAL_TUNING_SET_ATTRIB_BOOL(&iParam1, 22, true);
			return 0;
			break;
	}
	return 1;
}

int Function_9(int iParam0, int iParam1) //Position: 0x1C7A / 7290
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_10(iParam0, iParam1);
	Function_20(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_10(int iParam0, int iParam1) //Position: 0x1CED / 7405
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

bool Function_11(int iParam0, bool bParam1) //Position: 0x1D48 / 7496
{
	if (!Function_12(iParam0))
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

bool Function_12(int iParam0) //Position: 0x1D7F / 7551
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

bool Function_13(int iParam0) //Position: 0x1DA3 / 7587
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_14(int iParam0) //Position: 0x1DB8 / 7608
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1DCF / 7631
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_19(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_16(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_16(bParam0, bParam1, bParam2, 4294967295);
}

int Function_16(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x1E2D / 7725
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
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_17(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_17(int iParam0) //Position: 0x1F91 / 8081
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_18(int iParam0) //Position: 0x1FCF / 8143
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_19(int iParam0, int iParam1, int iParam2) //Position: 0x1FE4 / 8164
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_20(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2004 / 8196
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_22(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_21(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_21(char* cParam0) //Position: 0x2079 / 8313
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_22(int iParam0, var uParam1, int iParam2) //Position: 0x20B3 / 8371
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_24(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_23(uVar0))
		{
			case 0x00000002:
				if (!Function_27(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_23(char* cParam0) //Position: 0x212F / 8495
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

int Function_24(int iParam0) //Position: 0x21D0 / 8656
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_25(&iVar1, 2147483648);
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

void Function_25(int iParam0, int iParam1) //Position: 0x220D / 8717
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

int Function_26(int iParam0) //Position: 0x2223 / 8739
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&iParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	return 4294967295;
}

bool Function_27(var uParam0, int iParam1) //Position: 0x2240 / 8768
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_28(int iParam0) //Position: 0x2253 / 8787
{
	if (GET_ACTOR_ENUM(&iParam0) == 1268)
	{
		if (Function_127(2, 5, 1) == 1.0f)
		{
			Function_126(&Global_21369 + 72 + 32, 2);
			Function_125(&iParam0, 0);
			Function_124(2, 5, 1.0f, 1);
			ADD_ITEM(Function_123(77), &Global_54076, 1);
			Function_94(2, &Global_77932[218] + 8, &Global_77932[218] + 12);
		}
	}
	else if (GET_ACTOR_ENUM(&iParam0) == 1269)
	{
		if (Function_127(2, 6, 1) == 1.0f)
		{
			Function_126(&Global_21369 + 72 + 32, 2);
			Function_125(&iParam0, 0);
			Function_124(2, 6, 1.0f, 1);
			Function_94(2, &Global_77932[218] + 8, &Global_77932[218] + 12);
		}
	}
	else if (GET_ACTOR_ENUM(&iParam0) == 1270)
	{
		if (Function_127(2, 7, 1) == 1.0f)
		{
			Function_126(&Global_21369 + 72 + 32, 2);
			Function_125(&iParam0, 0);
			Function_124(2, 7, 1.0f, 1);
			Function_94(2, &Global_77932[218] + 8, &Global_77932[218] + 12);
		}
	}
	else if (GET_ACTOR_ENUM(&iParam0) == 1271)
	{
		if (Function_127(2, 8, 1) == 1.0f)
		{
			Function_126(&Global_21369 + 72 + 32, 2);
			Function_125(&iParam0, 0);
			Function_124(2, 8, 1.0f, 1);
			Function_94(2, &Global_77932[218] + 8, &Global_77932[218] + 12);
		}
	}
	else if (GET_ACTOR_ENUM(&iParam0) == 1267)
	{
		if (!Function_91(4, 0))
		{
			Function_29(18, 16, 0, 0, 0);
		}
		else
		{
			Function_29(23, 16, 0, 0, 0);
		}
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(49))
		{
			AWARD_ACHIEVEMENT(49);
		}
	}
	return;
}

void Function_29(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x23CA / 9162
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_90(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_89(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_88(bParam0, 2))
	{
		Function_86(456, 1, 0, 0);
		Function_85(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_181(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_84(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_85(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_83(0, 0, 1, 1))
			{
				Function_46(1);
				Function_45(1, 0);
			}
			else
			{
				Function_44();
			}
		}
		Function_39(bParam0);
		if (StackVal && !Function_37(((((!Function_38() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_37((((Function_38() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_149())
		{
			if (!Function_27(Global_119934, 2))
			{
				Function_20(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_32();
		}
		Global_42827.f_16 = 1;
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

void Function_30(int iParam0, int iParam1) //Position: 0x2669 / 9833
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

void Function_31(int iParam0, bool bParam1) //Position: 0x26D3 / 9939
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_32() //Position: 0x2742 / 10050
{
	if (Function_90(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_36(Global_42827);
			*(&Global_42827 + 8) = Function_33(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_36(Global_42827);
			*(&Global_42827 + 8) = Function_33(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_33(int iParam0, int iParam1) //Position: 0x27C2 / 10178
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_91(6, 0) || Function_91(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_35(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_91(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_35(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_35(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_35(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_35(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_91(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_35(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_35(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_35(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_35(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_35(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_35(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_35(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_91(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_35(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_91(6, 0) && Function_35(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_35(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_91(9, 0) && Function_35(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_35(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_91(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_34(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_34(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_34(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

bool Function_34(char* cParam0) //Position: 0x3425 / 13349
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

int Function_35(int iParam0) //Position: 0x343D / 13373
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_36(int iParam0) //Position: 0x3452 / 13394
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
	while (iVar1 <= Global_42265[iParam09].f_28)
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

bool Function_37(bool bParam0, bool bParam1) //Position: 0x34A1 / 13473
{
	return (bParam0 && bParam1) == 0;
}

bool Function_38() //Position: 0x34AE / 13486
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_39(bool bParam0) //Position: 0x34DB / 13531
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_84(bParam0, Function_43(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_84(bParam0, Function_43(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_42(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_41(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_40(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_40(int iParam0) //Position: 0x368B / 13963
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
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x36E2 / 14050
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

var Function_42(int iParam0) //Position: 0x3707 / 14087
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
	while (iVar1 <= Global_42265[iParam09].f_28)
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

int Function_43(bool bParam0) //Position: 0x375D / 14173
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_44() //Position: 0x3769 / 14185
{
	return;
}

void Function_45(int iParam0, int iParam1) //Position: 0x376F / 14191
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = iParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_46(bool bParam0) //Position: 0x37AE / 14254
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_74();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_47();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_25(&Global_99144, 1);
		Function_25(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_47() //Position: 0x3803 / 14339
{
	Function_73();
	Function_72();
	Function_72();
	Function_71();
	Function_71();
	Function_70();
	Function_70();
	Function_54(0);
	Function_54(0);
	Function_52();
	Function_51();
	Function_50();
	Function_49();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_48();
	return;
}

void Function_48() //Position: 0x384E / 14414
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_49() //Position: 0x3954 / 14676
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
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
	Global_131716 = fVar0;
	return;
}

void Function_50() //Position: 0x3987 / 14727
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
					Global_119632[iVar23] = bVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_51() //Position: 0x3B1A / 15130
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
					Global_119329[iVar23] = bVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_52() //Position: 0x3CD3 / 15571
{
	Function_53(&Global_42918, 1, 0);
	return;
}

void Function_53(struct<2317> Param0) //Position: 0x3CE1 / 15585
{
	var uVar0;
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
	
	uVar0 = Function_153();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_54(int iParam0) //Position: 0x3EFE / 16126
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
					iVar2 = ((Function_69((50 + iVar4)) + Function_69((183 + iVar4))) + Function_69((90 + iVar4)));
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
	Function_55(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_55(int iParam0, bool bParam1, bool bParam2) //Position: 0x3FA5 / 16293
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_68(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_67(iParam0);
	if (&bParam2)
	{
		Function_56(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_56(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x4241 / 16961
{
	char* cVar0[32];
	bool bVar8;
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
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
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
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_66(390))), 32);
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_65(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_65(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_63(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_60(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_57(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_193(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_57(int iParam0) //Position: 0x487F / 18559
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_58(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x4890 / 18576
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_59(char* cParam0) //Position: 0x4987 / 18823
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_60(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x49A2 / 18850
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_62(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_61(Function_62(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_61(int iParam0, int iParam1) //Position: 0x4A09 / 18953
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_62(int iParam0, bool bParam1) //Position: 0x4A1B / 18971
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_63(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4A2D / 18989
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
	if (((Function_64(iParam0) != 19 || Function_64(iParam0) != 17) || Function_64(iParam0) != 10) || Function_64(iParam0) != 9)
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

int Function_64(int iParam0) //Position: 0x4B61 / 19297
{
	return Global_55480[iParam016].f_96;
}

float Function_65(int iParam0) //Position: 0x4B70 / 19312
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_66(int iParam0) //Position: 0x4BA9 / 19369
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_67(int iParam0) //Position: 0x4BE6 / 19430
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

int Function_68(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D80 / 19840
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
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
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

int Function_69(bool bParam0) //Position: 0x4FC4 / 20420
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_70() //Position: 0x5005 / 20485
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
		iVar2 = ((Function_69((50 + iVar3) + 15) + Function_69((183 + iVar3) + 15)) + Function_69((90 + iVar3) + 15));
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

struct<8> Function_71() //Position: 0x508E / 20622
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
			iVar2 = ((Function_69((50 + iVar3) + 8) + Function_69((183 + iVar3) + 8)) + Function_69((90 + iVar3) + 8));
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

struct<8> Function_72() //Position: 0x5125 / 20773
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
		iVar2 = ((Function_69((50 + iVar3)) + Function_69((183 + iVar3))) + Function_69((90 + iVar3)));
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

void Function_73() //Position: 0x51A4 / 20900
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_128(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_55(8, (GET_DAY(false) - 2), 0);
	return;
}

void Function_74() //Position: 0x51E1 / 20961
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_149())
	{
		Function_80(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_80(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_34(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x5298 / 21144
{
	int iVar0;
	
	iVar0 = Function_78(&uParam2, &fParam3);
	if (Function_77(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_126(&Global_99144, 1);
			Function_25(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_126(&Global_99144, 2);
			Function_25(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_126(&Global_99144, 2);
		Function_25(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_76();
	return StackVal, Function_76();
}

struct<8> Function_76() //Position: 0x5390 / 21392
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_77(int iParam0) //Position: 0x539A / 21402
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x53B0 / 21424
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_79(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_79(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_77(iVar0) && !&bParam1)
	{
		iVar0 = Function_78(&bParam0, 1);
	}
	return iVar0;
}

float Function_79(struct<2> Param0, struct<2> Param2) //Position: 0x547C / 21628
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_80(float fParam0, int iParam1) //Position: 0x5499 / 21657
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_82(&Global_54076, &Var3);
	if (!Function_81(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_81(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_126(&Global_99144, 2);
	Function_25(&Global_99144, 1);
	iParam1 = 0;
	if (Function_34(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_81(int iParam0) //Position: 0x5CC5 / 23749
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_37(uVar0, 0x1000000) || Function_37(uVar0, 0x2000000)) || Function_37(uVar0, 0x4000000)) || !Function_37(uVar0, 0x10000000));
}

void Function_82(var uParam0, int iParam1) //Position: 0x5D00 / 23808
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

bool Function_83(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x5D0F / 23823
{
	iParam0 = &iParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && iParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_84(bool bParam0, int iParam1) //Position: 0x5DBE / 23998
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

void Function_85(bool bParam0, int iParam1) //Position: 0x5E1D / 24093
{
	if (!Function_90(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

int Function_86(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x5E72 / 24178
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
	Function_68(iParam0, TO_FLOAT(bParam1), 1);
	Function_67(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_56(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_87(iParam0);
	return 1;
}

void Function_87(int iParam0) //Position: 0x609A / 24730
{
	switch (iParam0)
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

bool Function_88(int iParam0, int iParam1) //Position: 0x6138 / 24888
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

bool Function_89(int iParam0) //Position: 0x6165 / 24933
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_90(int iParam0) //Position: 0x6181 / 24961
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_91(int iParam0, bool bParam1) //Position: 0x6197 / 24983
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
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_92(int iParam0) //Position: 0x61D5 / 25045
{
	if (!Function_93(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_93(int iParam0) //Position: 0x61EF / 25071
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_94(bool bParam0, var uParam1, int iParam2) //Position: 0x6205 / 25093
{
	bool bVar0;
	float fVar1;
	
	switch (uParam1)
	{
		case 0x00000000:
			Function_122(bParam0);
			Function_118(bParam0, &uParam1, 1, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000001:
			Function_122(bParam0);
			Function_118(bParam0, &uParam1, 2, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000002:
			Function_122(bParam0);
			Function_118(bParam0, &uParam1, 3, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000003:
			Function_122(bParam0);
			Function_118(bParam0, &uParam1, 4, 0, "challenge_01_128", 0);
			break;
		
		case 0x00000004:
			if (Global_79340[23118].f_36 != 0 && Function_117(bParam0, 1) == 1)
			{
				Global_77932[bParam018].f_36++;
				Function_116(bParam0, 1, 1);
			}
			else if (Global_79340[23118].f_36 != 1 && Function_117(bParam0, 2) == 1)
			{
				Global_77932[bParam018].f_36++;
				Function_116(bParam0, 2, 1);
			}
			else if (Global_79340[23118].f_36 != 2 && Function_117(bParam0, 3) == 1)
			{
				Global_77932[bParam018].f_36++;
				Function_116(bParam0, 3, 1);
			}
			else if (Global_79340[23118].f_36 != 3 && Function_117(bParam0, 4) == 1)
			{
				Global_77932[bParam018].f_36++;
				Function_116(bParam0, 4, 1);
			}
			bVar0 = Global_77932[bParam018].f_36;
			if (bVar0 > 4)
			{
				iParam2 = 0.0f;
				Function_99(bParam0, &uParam1, 0);
				Function_98(bParam0);
				ADD_ITEM(Function_123(74), &Global_54076, 1);
				ADD_ITEM(Function_123(76), &Global_54076, 1);
				ADD_ITEM(Function_123(75), &Global_54076, 1);
			}
			else
			{
				iParam2 = (TO_FLOAT(bVar0) / TO_FLOAT(4));
				if (iParam2 == fVar1)
				{
					Function_95(bParam0, iParam2, 0, 4294967295, 4294967295, 4294967295, 0);
				}
			}
			break;
	}
	return;
}

void Function_95(int iParam0, float fParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6426 / 25638
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
	if (&bParam2)
	{
		if (((iParam0 != 12 || iParam0 != 13) || iParam0 != 10) || iParam0 != 11)
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_96(iParam0) };
			stradd(&cVar0, "_info", 24);
			memcpy(&cVar6, StackVal, *(&Global_78078[iParam018] + 16), 6);
			stradd(&cVar6, "_num", 24);
			if (&iParam3 >= 4294967295)
			{
				UI_SET_STRING(&cVar6, INT_TO_STRING(&iParam3));
			}
			if (&iParam4 >= 4294967295)
			{
				strcpy(&cVar12, "PVP_num2", 16);
				UI_SET_STRING(&cVar12, INT_TO_STRING(&iParam4));
			}
			if (&iParam5 >= 4294967295)
			{
				strcpy(&cVar16, "PVP_num3", 16);
				UI_SET_STRING(&cVar16, INT_TO_STRING(&iParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_97(iParam0), &cVar0, 2, 2, false);
			Function_41(Function_97(iParam0), 0);
		}
		else
		{
			cVar20 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_96(iParam0) };
			if (0 | Global_53524.f_44)
			{
				stradd(&cVar20, "_info_mp", 24);
			}
			else
			{
				stradd(&cVar20, "_info", 24);
			}
			if (&iParam3 >= 4294967295)
			{
				strcpy(&cVar26, "AM_num", 24);
				stradd(&cVar26, INT_TO_STRING((&iParam6 + 1)), 24);
				UI_SET_STRING(&cVar26, INT_TO_STRING(&iParam3));
			}
			if (&iParam4 >= 4294967295)
			{
				strcpy(&cVar32, "AM_num", 24);
				stradd(&cVar32, INT_TO_STRING((&iParam6 + 2)), 24);
				UI_SET_STRING(&cVar32, INT_TO_STRING(&iParam4));
			}
			if (&iParam5 >= 4294967295)
			{
				strcpy(&cVar38, "AM_num", 24);
				stradd(&cVar38, INT_TO_STRING((&iParam6 + 3)), 24);
				UI_SET_STRING(&cVar38, INT_TO_STRING(&iParam5));
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Function_97(iParam0), &cVar20, 2, 2, true);
			Function_41(Function_97(iParam0), 0);
		}
	}
}

struct<24> Function_96(int iParam0) //Position: 0x65C0 / 26048
{
	char* cVar0[24];
	
	if (0 | Global_53524.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_78078[iParam018] + 16), 6);
		stradd(&cVar0, "_", 24);
		stradd(&cVar0, INT_TO_STRING(StackVal), 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_77932[iParam018] + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_97(int iParam0) //Position: 0x6634 / 26164
{
	if (0 | Global_53524.f_44)
	{
		return Global_78078[iParam018].f_32;
	}
	return Global_77932[iParam018].f_32;
}

void Function_98(bool bParam0) //Position: 0x665C / 26204
{
	Function_122(bParam0);
	return;
}

void Function_99(bool bParam0, var uParam1, int iParam2) //Position: 0x6667 / 26215
{
	Function_114(bParam0, 1);
	uParam1 = 10;
	Function_111(bParam0);
	if (!IS_STRING_VALID(&iParam2))
	{
		iParam2 = "challenge_04_128";
	}
	Function_107(bParam0, 11);
	Function_124(bParam0, 10, 1.0f, 1);
	Function_102();
	Function_101();
	Function_100(bParam0, 4);
	return;
}

void Function_100(int iParam0, int iParam1) //Position: 0x66BC / 26300
{
	if (Global_53524.f_44)
	{
		Function_25(&Global_78078[iParam018] + 40, iParam1);
	}
	else
	{
		Function_25(&Global_77932[iParam018] + 40, iParam1);
	}
	return;
}

void Function_101() //Position: 0x66EB / 26347
{
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(48))
	{
		if (StackVal && (StackVal && (StackVal && StackVal != 10 != 10) != 10) != 10)
		{
			AWARD_ACHIEVEMENT(48);
		}
	}
	return;
}

void Function_102() //Position: 0x6736 / 26422
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

void Function_103(bool bParam0, bool bParam1, bool bParam2) //Position: 0x67AA / 26538
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_90(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
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
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_42265[bParam09].f_64 != 4294967295 || (Global_42265[bParam09].f_64 != 0 && Global_42265[bParam09].f_28 < 0))
		{
			Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_42265[bParam09].f_64);
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, false, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_86(457, 1, 0, 0);
		Function_85(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_83(0, 0, 1, 1))
			{
				Function_46(1);
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

bool Function_104(int iParam0) //Position: 0x694B / 26955
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

bool Function_105(int iParam0) //Position: 0x699D / 27037
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

void Function_106(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x69EE / 27118
{
	char* cVar0[32];
	
	if (!Function_90(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_89(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_104(bParam0))
	{
		Function_86(456, 1, 0, 0);
		Function_85(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_83(0, 0, 1, 1))
			{
				Function_46(1);
				Function_45(1, 5);
			}
			else
			{
				Function_44();
			}
		}
		Function_39(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_38() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_38() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_181(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_149())
		{
			if (!Function_27(Global_119934, 2))
			{
				Function_20(&Global_54076, 2, 1, 0);
			}
		}
	}
}

int Function_107(bool bParam0, int iParam1) //Position: 0x6B4A / 27466
{
	int iVar0;
	
	if (0 | Global_53524.f_44)
	{
		if (bParam0 >= Global_78078)
		{
			LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
			return 0;
		}
	}
	if (bParam0 >= Global_77932)
	{
		LOG_ERROR("AM_GUI_SEND_UPDATE_MESSAGE: invalid MissionId");
		return 0;
	}
	iVar0 = Function_108();
	Global_98983[iVar07] = bParam0;
	Global_98983[iVar07].f_4 = iParam1;
	Global_99127 = 0;
	return 1;
}

int Function_108() //Position: 0x6BFA / 27642
{
	int iVar0;
	
	iVar0 = (Global_98983 - 1);
	while (iVar0 >= 0)
	{
		if (Global_98983[iVar07] == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	Function_109();
	return 0;
}

void Function_109() //Position: 0x6C2A / 27690
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_98983 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 >= 0)
	{
		Global_98983[iVar07] = Global_98983[iVar17];
		Global_98983[iVar07].f_4 = StackVal;
		*(&Global_98983[iVar07] + 8) = { StackVal, StackVal, StackVal, *(&Global_98983[iVar17] + 8) };
		*(&Global_98983[iVar07] + 40) = { StackVal, *(&Global_98983[iVar17] + 40) };
		Function_110(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_110(int iParam0) //Position: 0x6CAA / 27818
{
	Global_98983[iParam07] = 4294967295;
	Global_98983[iParam07].f_4 = 4294967295;
	strcpy(&Global_98983[iParam07] + 8, "NHIL", 16);
	strcpy(&Global_98983[iParam07] + 40, "NHIL", 8);
	return;
}

void Function_111(int iParam0) //Position: 0x6CEA / 27882
{
	struct<6> Var0;
	struct<6> Var6;
	
	if (Global_6632)
	{
		Global_6662 = 1;
	}
	CLEAR_JOURNAL_ENTRY(Function_97(iParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_113(iParam0) };
	if (0 | Global_53524.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_96(iParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_77932[iParam018] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_112(iParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_97(iParam0), &Var6, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Function_97(iParam0), true);
	SET_JOURNAL_ENTRY_PROGRESS(Function_97(iParam0), 1.0f, false, 0);
	return;
}

struct<24> Function_112(int iParam0) //Position: 0x6D66 / 28006
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_96(iParam0) };
	if (Global_53524.f_44 | 0)
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

struct<24> Function_113(int iParam0) //Position: 0x6DC1 / 28097
{
	char* cVar0[24];
	
	if (0 | Global_53524.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_78078[iParam018] + 16), 6);
		stradd(&cVar0, "_DYNAMIC_TITLE", 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_77932[iParam018] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_114(bool bParam0, bool bParam1) //Position: 0x6E2D / 28205
{
	bool bVar0;
	char* cVar1[16];
	
	bVar0 = false;
	cVar1 = Function_115();
	if (IS_LAYOUTREF_VALID(&cVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			if (0 | Global_53524.f_44)
			{
				(*&Global_78078[bParam018] + 44)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_77932[bParam018] + 44)[bVar0] = 0.0f;
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			if (0 | Global_53524.f_44)
			{
				(*&Global_78078[bParam018] + 44)[bVar0] = 0.0f;
			}
			else
			{
				(*&Global_77932[bParam018] + 44)[bVar0] = 0.0f;
			}
			bVar0++;
		}
	}
	if (&bParam1)
	{
		if (0 | Global_53524.f_44)
		{
			Global_78078[bParam018].f_36 = 0;
		}
		else
		{
			Global_77932[bParam018].f_36 = 0;
		}
	}
	return;
}

bool Function_115() //Position: 0x6FF8 / 28664
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(&iVar0))
	{
		iVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return &iVar0;
}

int Function_116(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7049 / 28745
{
	char* cVar0[16];
	int iVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	iVar4 = Function_115();
	if (IS_LAYOUTREF_VALID(&iVar4))
	{
		return DECOR_SET_INT(&iVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_INT: failed to store int value in slot");
	return 0;
}

int Function_117(bool bParam0, bool bParam1) //Position: 0x70C0 / 28864
{
	char* cVar0[16];
	var uVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	uVar4 = Function_115();
	if (IS_LAYOUTREF_VALID(&uVar4))
	{
		if (DECOR_CHECK_EXIST(&uVar4, &cVar0))
		{
			return DECOR_GET_INT(&uVar4, &cVar0);
		}
		return 4294967295;
	}
	LOG_ERROR("AM_RETRIEVE_INT: failed to retrieve int value from layout");
	return 4294967295;
}

void Function_118(bool bParam0, bool bParam1, var uParam2, int iParam3, int iParam4, bool bParam5) //Position: 0x714F / 29007
{
	if (!IS_STRING_VALID(&iParam4))
	{
		iParam4 = "challenge_04_128";
	}
	bParam1 = uParam2;
	if (&bParam5)
	{
		Function_114(bParam0, 1);
		SET_JOURNAL_ENTRY_PROGRESS(Function_97(bParam0), 0.0f, false, 0);
	}
	else
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_97(bParam0), (TO_FLOAT(Global_77932[bParam018].f_36) / TO_FLOAT(&iParam3)), false, 0);
	}
	Function_120(bParam0, 0);
	Function_107(bParam0, bParam1);
	Function_124(bParam0, 10, 1.0f, 1);
	Function_119(bParam0, 4);
}

void Function_119(bool bParam0, bool bParam1) //Position: 0x71D5 / 29141
{
	if (0 | Global_53524.f_44)
	{
		Function_126(&Global_78078[bParam018] + 40, bParam1);
	}
	else
	{
		Function_126(&Global_77932[bParam018] + 40, bParam1);
	}
	return;
}

void Function_120(int iParam0, bool bParam1) //Position: 0x7206 / 29190
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_97(iParam0));
	if ((bParam1 && Function_121(iParam0, 4)) || !&bParam1)
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
		if (!&bParam1)
		{
			Function_119(iParam0, 4);
		}
	}
	return;
}

bool Function_121(int iParam0, bool bParam1) //Position: 0x7290 / 29328
{
	if (0 | Global_53524.f_44)
	{
		return Function_37(Global_78078[iParam018].f_40, bParam1);
	}
	return Function_37(Global_77932[iParam018].f_40, bParam1);
}

void Function_122(bool bParam0) //Position: 0x72C2 / 29378
{
	if (0 | Global_53524.f_44)
	{
		Function_116(bParam0, 0, Global_78078[bParam018].f_36);
	}
	else
	{
		Function_116(bParam0, 0, Global_77932[bParam018].f_36);
	}
	return;
}

var Function_123(bool bParam0) //Position: 0x72F7 / 29431
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

int Function_124(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x73EB / 29675
{
	char* cVar0[16];
	var uVar4;
	
	if (&bParam3)
	{
		if (0 | Global_53524.f_44)
		{
			(*&Global_78078[bParam018] + 44)[bParam1] = bParam2;
		}
		else
		{
			(*&Global_77932[bParam018] + 44)[bParam1] = bParam2;
		}
		return 1;
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	uVar4 = Function_115();
	if (IS_LAYOUTREF_VALID(&uVar4))
	{
		return DECOR_SET_FLOAT(&uVar4, &cVar0, bParam2);
	}
	LOG_ERROR("AM_STORE_FLOAT: failed to store float value in slot");
	return 0;
}

void Function_125(var uParam0, int iParam1) //Position: 0x74A6 / 29862
{
	DECOR_SET_OBJECT(&Global_54076, "SettingPlayerHorse", &uParam0);
	DECOR_SET_BOOL(&Global_54076, "NewPlayerHorse_Wipe", &iParam1);
	return;
}

void Function_126(var uParam0, bool bParam1) //Position: 0x74ED / 29933
{
	uParam0 = (uParam0 || bParam1);
	return;
}

float Function_127(bool bParam0, bool bParam1, bool bParam2) //Position: 0x74FE / 29950
{
	char* cVar0[16];
	bool bVar4;
	
	if (&bParam2)
	{
		if (0 | Global_53524.f_44)
		{
			return (*&Global_78078[bParam018] + 44)[bParam1];
		}
		return (*&Global_77932[bParam018] + 44)[bParam1];
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_115();
	if (IS_LAYOUTREF_VALID(&bVar4))
	{
		if (DECOR_CHECK_EXIST(&bVar4, &cVar0))
		{
			return DECOR_GET_FLOAT(&bVar4, &cVar0);
		}
		return -1.0f;
	}
	LOG_ERROR("AM_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return -1.0f;
}

int Function_128(int iParam0, bool bParam1, int iParam2) //Position: 0x75C5 / 30149
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_68(iParam0, bParam1, 1);
	Function_67(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_56(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_129(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x77D1 / 30673
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
		Global_21684[bParam07].f_12++;
		if (Function_145())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_144(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_143(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_142(Global_10966) };
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
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_135("DEED_COMPLETE", bParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[bParam07].f_4 = 4;
		}
		else
		{
			Global_21684[bParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[bParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_131(bParam0);
		}
		if (&bParam1)
		{
			if (&bParam2)
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
			Function_46(1);
			Function_45(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_130(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_10966;
		Var14.f_20 = &bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 48, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_6619 = 1;
}

void Function_130(int iParam0, struct<41> Param1) //Position: 0x7A2F / 31279
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_131(bool bParam0) //Position: 0x7A6D / 31341
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
				Function_86(12, 1, 0, 0);
				Function_30(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_86(13, 1, 0, 0);
				Function_30(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_86(14, 1, 0, 0);
				Function_30(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_86(15, 1, 0, 0);
				Function_30(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_86(9, 1, 0, 0);
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
							if (iVar0 == Global_46926[5])
							{
								Function_30(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_30(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_30(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_30(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_30(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_30(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_30(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_30(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_30(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_30(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_30(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_30(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_30(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_30(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_30(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_30(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_30(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_30(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_30(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_30(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_44085[iVar09];
							}
							else
							{
								iVar0 = Global_44085[iVar09];
								iVar0 = Global_44085[iVar09];
							}
							if (iVar0 == Global_46722[0])
							{
								Function_86(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_86(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_86(365, 1, 0, 0);
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
					Function_86(458, 1, 0, 0);
					iVar0 = Function_144(bParam0);
					if (Function_132(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_30(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_30(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_30(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_30(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_30(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_30(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_30(2, 16);
						}
						else if (iVar0 == Global_46838[1])
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
				Function_86(400, 1, 0, 0);
			}
			switch (Function_144(bParam0))
			{
				case 0x00000001:
					Function_86(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_30(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_30(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_30(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_86(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_30(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
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

bool Function_132(int iParam0) //Position: 0x7F49 / 32585
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_133(bool bParam0) //Position: 0x7F5F / 32607
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_134(bool bParam0) //Position: 0x7F7E / 32638
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_135(bool bParam0, bool bParam1) //Position: 0x7F98 / 32664
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
			PLAYSTAT_DEED_NAMED(&bParam0, &Var0, Function_146(bParam1), Function_144(bParam1), *((&Global_21684[bParam17] + 4)));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "PROCEDURAL", Function_146(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "LOCATION", Function_146(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "MINIGAME", Function_146(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "ACTIONAREA_EVENT", Function_146(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "JOB", Function_146(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_136(int iParam0) //Position: 0x80C4 / 32964
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

void Function_137() //Position: 0x80FE / 33022
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_69(0));
	PLAYSTAT_INT("HC_FAME", Function_69(3));
	PLAYSTAT_INT("HC_HONOR", Function_69(1));
	return;
}

void Function_138() //Position: 0x8260 / 33376
{
	int iVar0;
	int iVar1;
	
	if (!Function_93(Global_10966))
	{
		return;
	}
	iVar0 = Function_69(24);
	iVar1 = Function_92(Global_10966);
	if (!Function_93(iVar0) && Function_141(iVar1) < 0)
	{
		Function_55(24, Global_10966, 0);
		Function_139(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_141(Function_92(iVar0)))
	{
		Function_55(24, Global_10966, 0);
		Function_139(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_139(int iParam0, char* cParam1) //Position: 0x82E0 / 33504
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_140(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_140(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x8637 / 34359
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

int Function_141(int iParam0) //Position: 0x86BF / 34495
{
	if (!Function_12(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<16> Function_142(int iParam0) //Position: 0x86D9 / 34521
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

struct<24> Function_143(char* cParam0) //Position: 0x8718 / 34584
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

int Function_144(bool bParam0) //Position: 0x896E / 35182
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_145() //Position: 0x898E / 35214
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_146(bool bParam0) //Position: 0x89B9 / 35257
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_147() //Position: 0x89D4 / 35284
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
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
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_148(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_148(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8C1B / 35867
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_149() //Position: 0x8C47 / 35911
{
	if (Function_37(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_150() //Position: 0x8C62 / 35938
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_151(bool bParam0) //Position: 0x8C77 / 35959
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
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[bParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_143(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_142(Global_10966) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_6619 = 1;
	return;
}

bool Function_152(int iParam0) //Position: 0x8D1D / 36125
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

var Function_153() //Position: 0x8D3E / 36158
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_154(var[] uParam0, int iParam1) //Position: 0x8D53 / 36179
{
	return Function_37(uParam0[Function_156(iParam1)], Function_155(iParam1));
}

bool Function_155(int iParam0) //Position: 0x8D6B / 36203
{
	return Function_43((iParam0 % 32));
}

int Function_156(int iParam0) //Position: 0x8D79 / 36217
{
	return (iParam0 / 32);
}

void Function_157(struct<45> Param0) //Position: 0x8D84 / 36228
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	
	if (Function_167(&bLocal_31) < bLocal_35)
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
		bLocal_35 = RAND_FLOAT_RANGE(1.0f, 5.0f);
		Function_194(&bLocal_31);
		if (!Function_149())
		{
			SAY_SINGLE_LINE_CONTEXT(Function_153(), 465, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
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
				SAY_SINGLE_LINE_CONTEXT(Function_153(), 465, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
		}
	}
	else
	{
		bVar0 = GET_ANALOGUE_ACTION("@GENERIC.MOVE_X", 1);
	}
	if (bVar0 < 0.0f)
	{
		bVar0 = (StackVal * POW(StackVal, FABS(bVar0)));
	}
	else
	{
		bVar0 = (StackVal * POW(-StackVal, FABS(bVar0)));
	}
	Var3 = 1.0f;
	Var3.f_4 = (Param0.f_20 * Function_159(Param0.f_32, Param0.f_24, Param0.f_16));
	Var3.f_8 = 0.0f;
	VNORMALIZE(&Var3);
	*(&Param0 + 32) = Vector(StackVal, StackVal, StackVal) + Vector(Vector(*(&Param0 + 44), (&Param0 + 32), StackVal) * Vector(fLocal_28, fLocal_28, fLocal_28), StackVal, StackVal);
	if (Param0.f_32 > -10.0f)
	{
		Param0.f_32 = -10.0f;
		if (Param0.f_44 > 0.0f)
		{
			Function_76();
			*(&Param0 + 44) = Function_76();
		}
	}
	else if (Param0.f_32 < 10.0f)
	{
		Param0.f_32 = 10.0f;
		if (Param0.f_44 < 0.0f)
		{
			Function_76();
			*(&Param0 + 44) = Function_76();
		}
	}
	Param0.f_32 = (Param0.f_32 + (Param0.f_28 * RAND_FLOAT_RANGE(-1.0f, 1.0f)));
	Var5 = Vector(StackVal, StackVal, StackVal) * Vector(FtoV((-Var3 * Param0)), StackVal, StackVal);
	Var7 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var3, Var5, Var7) * Vector(bVar0, bVar0, bVar0), StackVal, StackVal), StackVal, StackVal);
	*(&Param0 + 44) = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Vector(Var7, *(&Param0 + 44), StackVal) * Vector(fLocal_28, fLocal_28, fLocal_28), StackVal, StackVal) / Vector(Param0.f_12, Param0.f_12, Param0.f_12), StackVal, StackVal);
	(&Param0 + 32)->f_4 = (Param0.f_20 * Function_158(Param0.f_32, Param0.f_24, Param0.f_16));
	if (Param0.f_44 < 0.0f)
	{
		*(&Param0 + 44) = Vector(StackVal, StackVal, StackVal) * Vector(FtoV(VMAG(*(&Param0 + 44))), Var3, StackVal);
	}
	else
	{
		*(&Param0 + 44) = Vector(StackVal, StackVal, StackVal) * Vector(FtoV(VMAG(*(&Param0 + 44))), -Vector(Var3, StackVal, StackVal), StackVal);
	}
	return;
}

float Function_158(float fParam0, float fParam1, float fParam2) //Position: 0x8FDC / 36828
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

float Function_159(float fParam0, float fParam1, float fParam2) //Position: 0x9019 / 36889
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

var Function_160(struct<13> Param0) //Position: 0x9060 / 36960
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
	fVar2 = ((fVar0 + fVar1) * Function_161());
	if (bLocal_22)
	{
		fVar3 = (StackVal * (-1.0f * 10.0f));
		fVar2 = ((fVar2 + fVar3) * Function_161());
	}
	fVar4 = 0.0f;
	fVar5 = ((-Param0.f_12 * fLocal_27) * fLocal_28);
	bVar6 = (((Param0.f_12 + (fVar2 / 10.0f)) + fVar5) + fVar4);
	fVar7 = (StackVal + (bVar6 * fLocal_28));
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
	Param0.f_12 = bVar6;
	Param0.f_8 = fVar7;
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

float Function_161() //Position: 0x919D / 37277
{
	return (GET_LAST_FRAME_TIME() * 30.0f);
}

var Function_162(int iParam0) //Position: 0x91AC / 37292
{
	return GET_HEADING(&iParam0);
}

void Function_163(bool bParam0) //Position: 0x91B8 / 37304
{
	while (bParam0 <= 0)
	{
		bParam0 += 360;
	}
	while (bParam0 >= 360)
	{
		bParam0 = (bParam0 - 360);
	}
	return;
}

void Function_164(vector3 vParam0) //Position: 0x91ED / 37357
{
	if (Function_165(&vParam0))
	{
		if (Function_166(&vParam0))
		{
			vParam0.f_4 = (GET_CURRENT_GAME_TIME() - vParam0.z);
			vParam0.f_8 = 0.0f;
			Function_25(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_165(int iParam0) //Position: 0x92BA / 37562
{
	return Function_37(iParam0, 1);
}

bool Function_166(bool bParam0) //Position: 0x92C8 / 37576
{
	return Function_37(bParam0, 2);
}

float Function_167(vector3 vParam0) //Position: 0x92D6 / 37590
{
	if (Function_165(&vParam0))
	{
		if (Function_166(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

void Function_168(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7) //Position: 0x93A3 / 37795
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_142(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &Var0, 0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &uVar4, &uParam5, &uParam6);
	}
}

bool Function_169(struct<29> Param0) //Position: 0x9438 / 37944
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
	fVar2 = ((-Param0.f_24 * 1.0f) * fLocal_28);
	fVar3 = (((Param0.f_24 + (fVar0 / 10.0f)) + fVar2) + fVar1);
	fVar4 = (Param0.f_28 + (fVar3 * fLocal_28));
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
	Param0.f_24 = fVar3;
	Param0.f_28 = fVar4;
	return fVar4;
}

bool Function_170() //Position: 0x94AE / 38062
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

bool Function_171(var uParam0, struct<2> Param1) //Position: 0x94CB / 38091
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	float fVar6;
	
	GET_OBJECT_POSITION(&uParam0, &Var0);
	uVar2 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Param1, StackVal);
	GET_OBJECT_AXIS(&uParam0, &uVar4, 0);
	fVar6 = VDOT(&uVar2, &uVar4);
	if (fVar6 < 0.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_172(var uParam0, struct<2> Param1) //Position: 0x9506 / 38150
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	bool bVar6;
	var uVar7;
	
	GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(&uParam0), &Var0);
	uVar2 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Param1, StackVal);
	GET_OBJECT_AXIS(&uParam0, &uVar4, 0);
	bVar6 = VDOT(&uVar2, &uVar4);
	if (FABS(bVar6) > 0,3f)
	{
		GET_OBJECT_AXIS(&uParam0, &uVar7, 2);
		bVar6 = VDOT(&uVar2, &uVar7);
		if (bVar6 > 0.0f)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void Function_173(vector3 vParam0) //Position: 0x956A / 38250
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_126(&vParam0, 1);
	Function_25(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_174(struct<21> Param0) //Position: 0x958F / 38287
{
	Param0 = (Param0 + 0,5f);
	Param0.f_20 = (Param0.f_20 + 0,5f);
	iParam1 = (iParam1 - 0,1f);
	if (Param0 < 30.0f)
	{
		Param0 = 30.0f;
	}
	if (StackVal > 1.0f)
	{
		Param0.f_4 = 1.0f;
	}
	if (Param0.f_20 < 8.0f)
	{
		Param0.f_20 = 8.0f;
	}
	if (iParam1 > 0.0f)
	{
		iParam1 = 0.0f;
	}
	return;
}

void Function_175(float fParam0, int iParam1) //Position: 0x960D / 38413
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&fParam0))
	{
		DESTROY_OBJECT(&fParam0);
	}
	fParam0 = Function_176(&uLocal_29, 0, GET_RIDER(&iParam1), &iParam1, 1, 0, 0);
	iVar0 = Vector(-1.0f, 0.0f, 0.0f);
	GET_CAMERA_UP_VECTOR(GET_CAMERA_FROM_CUTSCENEOBJECT(&fParam0), &iVar0);
	return;
}

var Function_176(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x964E / 38478
{
	var uVar0;
	
	if (&bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_193(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "HorseBreaking_LookBack", 3, 1);
	}
	Function_177(&uVar0, &uParam2, &uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 1, 0, 0);
		}
	}
	return &uVar0;
}

void Function_177(var uParam0, var uParam1, int iParam2) //Position: 0x96E4 / 38628
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_180(&uVar0, &uParam1, &iParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_179(&uVar0, &uParam1, &iParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_178(&uVar0, &uParam1, &iParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_FIXED(&uParam0, 0, 1, 0,5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(&iVar1, 1, 0);
	return;
}

void Function_178(int iParam0, float fParam1, int iParam2) //Position: 0x974E / 38734
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam2, Vector(-6E-05f, 2,353129f, -4,577889f), Vector(-6,138669f, 179,3076f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &fParam1, 507);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &fParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0,95f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_179(int iParam0, float fParam1, int iParam2) //Position: 0x97F0 / 38896
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam2, Vector(-2.0f, 1,8f, -4,577914f), Vector(-6,138727f, 179,3089f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 1,3f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&iParam0, -0,2f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &fParam1, 507);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &fParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0,95f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_180(float fParam0, var uParam1, int iParam2) //Position: 0x98B5 / 39093
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &fParam0, &iParam2, Vector(2.0f, 1,8f, -4,577914f), Vector(-6,138727f, 179,3089f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &iParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 1,3f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&fParam0, 0,2f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam1, 507);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0,95f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_181(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9976 / 39286
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_142(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_182(var uParam0, int iParam1) //Position: 0x9A01 / 39425
{
	if (!Function_154(&uParam0, iParam1))
	{
		Function_183(&uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_183(var[] uParam0, int iParam1) //Position: 0x9A1E / 39454
{
	Function_126(&(uParam0[Function_156(iParam1)]), Function_155(iParam1));
	return;
}

void Function_184(int[] iParam0) //Position: 0x9A36 / 39478
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iParam0[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_185(int iParam0, int iParam1) //Position: 0x9A56 / 39510
{
	bool bVar0;
	
	if (!Function_18(iParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= Global_21684)
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

void Function_186(int iParam0) //Position: 0x9A9B / 39579
{
	Function_187(&iParam0);
	return;
}

void Function_187(int[] iParam0) //Position: 0x9AA7 / 39591
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iParam0[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_188(vector3 vParam0) //Position: 0x9AC7 / 39623
{
	if (Function_165(&vParam0))
	{
		if (!Function_166(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_126(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

int Function_189(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) //Position: 0x9B8B / 39819
{
	if (!Function_192(uParam0, &uParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(&uParam4))
	{
		return Function_191(uParam0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6, &uParam7);
	}
	return Function_190(uParam0, &uParam2);
}

int Function_190(var uParam0, int iParam1) //Position: 0x9BCE / 39886
{
	UI_SET_PROMPT_STRING(uParam0, &iParam1);
	return 1;
}

var Function_191(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x9BDD / 39901
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", &uParam1, uParam0, uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

bool Function_192(var uParam0, int iParam1) //Position: 0x9C1C / 39964
{
	UI_SET_PROMPT_ICON_STRING(uParam0, &iParam1);
	return 1;
}

var Function_193() //Position: 0x9C2B / 39979
{
	int iVar0;
	
	return &iVar0;
}

void Function_194(bool bParam0) //Position: 0x9C34 / 39988
{
	Function_173(&bParam0, 0.0f);
	return;
}

var Function_195() //Position: 0x9C41 / 40001
{
	return Global_6635;
}

int Function_196(var uParam0, int iParam1) //Position: 0x9C4A / 40010
{
	SATCHEL_SET_ENABLED(0);
	Global_6627 = 1;
	if (!Function_208((GET_ACTOR_ENUM(&uParam0) % 255), 3, 4))
	{
		bLocal_98 = Function_16((GET_ACTOR_ENUM(&uParam0) % 255), 3, 4, 4294967295);
	}
	else
	{
		bLocal_98 = Function_15((GET_ACTOR_ENUM(&uParam0) % 255), 3, 4);
	}
	if ((Global_6623 || Global_6625) || Global_6635)
	{
		Function_207(bLocal_98, 0);
	}
	else
	{
		Function_207(bLocal_98, 1);
	}
	Function_205(&uLocal_115, "horse_breaking", 5, 0);
	Function_205(&uLocal_115, "custom/horse_breaking", 8, 0);
	Function_205(&uLocal_115, "bull_breaking", 5, 0);
	Function_205(&uLocal_115, "custom/bull_breaking", 8, 0);
	Function_205(&uLocal_115, "nminigames", 10, 0);
	while (!Function_199(&uLocal_115) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if ((GET_ACTOR_ENUM(&uParam0) != 1012 || GET_ACTOR_ENUM(&uParam0) != 1013) || GET_ACTOR_ENUM(&uParam0) != 1014)
	{
		bLocal_63 = true;
	}
	else
	{
		bLocal_63 = false;
	}
	if (bLocal_63)
	{
		SET_ANIM_SET_FOR_ACTOR(&iParam1, "bull_breaking", 0);
	}
	else
	{
		SET_ANIM_SET_FOR_ACTOR(&iParam1, "horse_breaking", 0);
		SET_REACT_NODE_FOR_ACTOR(&iParam1, "horse_breaking/Player/Reaction");
	}
	SET_HUD_MAP_DRAW_ENABLED(0);
	if (!IS_LAYOUTREF_VALID(&uLocal_29))
	{
		uLocal_29 = CREATE_LAYOUT("HorseBreakingLayout");
	}
	if (bLocal_63)
	{
		SET_ANIM_SET_FOR_ACTOR(&uParam0, "bull_breaking", 0);
	}
	else
	{
		SET_ANIM_SET_FOR_ACTOR(&uParam0, "horse_breaking", 0);
		SET_REACT_NODE_FOR_ACTOR(&uParam0, "horse_breaking/Horse/Reaction");
	}
	if (bLocal_63)
	{
		while ((!ACTOR_HAS_ANIM_SET(&iParam1, "bull_breaking") || !ACTOR_HAS_ANIM_SET(&uParam0, "bull_breaking")) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	else
	{
		while ((!ACTOR_HAS_ANIM_SET(&iParam1, "horse_breaking") || !ACTOR_HAS_ANIM_SET(&uParam0, "horse_breaking")) && !IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	SET_ACTOR_INVULNERABILITY(&iParam1, true);
	AI_IGNORE_ACTOR(&iParam1);
	AI_DONT_HARM_ACTOR(&iParam1);
	iLocal_62 = 0;
	Function_198(&bLocal_74);
	Function_198(&iLocal_78);
	Function_198(&bLocal_82);
	Function_198(&iLocal_90);
	Function_198(&bLocal_70);
	Function_198(&bLocal_86);
	Function_198(&bLocal_94);
	Function_198(&bLocal_31);
	DECOR_SET_BOOL(&uParam0, "DisableBuckOff", true);
	Function_197(&Local_101);
	fLocal_142 = 1,5f;
	iLocal_100 = 0;
	return 1;
}

void Function_197(struct<33> Param0) //Position: 0x9F4C / 40780
{
	bool bVar0;
	
	Param0 = 10.0f;
	Param0.f_12 = 0,2f;
	Param0.f_16 = 1.0f;
	Param0.f_20 = 2.0f;
	Param0.f_24 = 1,5f;
	Param0.f_28 = 0.0f;
	Param0.f_4 = 9.0f;
	Param0.f_8 = 2.0f;
	Function_76();
	(&Param0 + 32) = Function_76();
	Function_76();
	*(&Param0 + 44) = Function_76();
	bVar0 = RAND_INT_RANGE(false, 100);
	if (bVar0 >= 50)
	{
		Param0.f_32 = RAND_FLOAT_RANGE(-8.0f, -2.0f);
	}
	else
	{
		Param0.f_32 = RAND_FLOAT_RANGE(2.0f, 8.0f);
	}
	return;
}

void Function_198(int iParam0) //Position: 0x9FD5 / 40917
{
	if (!Function_165(&iParam0))
	{
		Function_173(&iParam0, 0.0f);
	}
	return;
}

bool Function_199(struct<2>[] Param0) //Position: 0x9FEC / 40940
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_204();
	iVar1 = 0;
	if (!Function_5(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_203(&(Param0[iVar02]), 8);
		}
		else if (Function_202())
		{
			iVar1 = 1;
			Function_203(&(Param0[iVar02]), 8);
		}
		Function_203(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_5(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_5(&(Param0[02]), 8) || iVar1));
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
				Function_203(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_203(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_203(&(Param0[iVar02]), 2);
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
							Function_203(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_203(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_203(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_203(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_203(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_203(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_203(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_203(&(Param0[iVar02]), 2);
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

void Function_200() //Position: 0xA3AE / 41902
{
	if (!Function_201(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_201(int iParam0) //Position: 0xA3EE / 41966
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_202() //Position: 0xA40A / 41994
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

void Function_203(struct<13> Param0) //Position: 0xA438 / 42040
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_204() //Position: 0xA44B / 42059
{
	if (!Function_201(128))
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

var Function_205(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xA48D / 42125
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_206(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_203(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_206(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xA4CB / 42187
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_203(&(Param0[iVar02]), 4);
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

void Function_207(int iParam0, int iParam1) //Position: 0xA59A / 42394
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_12(iParam0))
	{
		Function_147();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_146(iParam0);
	if (StackVal != 2)
	{
		Function_135("DEED_START", iParam0);
	}
	Global_21684[iParam07].f_8 = StackVal + 1;
	Global_21684[iParam07].f_4 = 2;
	Global_10968 = iParam0;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_46(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_144(iParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_143(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_142(Global_10966) };
		}
		bVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(bVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar12);
		APPEND_JOURNAL_ENTRY(bVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_6619 = 1;
	return;
}

bool Function_208(var uParam0, var uParam1, var uParam2) //Position: 0xA6AB / 42667
{
	var uVar0;
	
	uVar0 = Function_15(uParam0, uParam1, uParam2);
	return Function_12(uVar0);
}

