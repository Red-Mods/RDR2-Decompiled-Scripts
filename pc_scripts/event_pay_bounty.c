//Decompiled with MagicRDR v1.0
//Function Count : 101
//Statics Count : 77
//Natives Count : 245
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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	bool bLocal_15 = false;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 4;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	bool bLocal_36 = false;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	bool bLocal_46 = false;
	int iLocal_47 = 0;
	bool bLocal_48 = false;
	struct<2> Local_49 = { 0, 0 } ;
	var uLocal_51 = 0;
	struct<2> Local_52 = { 0, 0 } ;
	var uLocal_54 = 0;
	struct<2> Local_55 = { 0, 0 } ;
	var uLocal_57 = 0;
	struct<2> Local_58 = { 0, 0 } ;
	var uLocal_60 = 0;
	float fLocal_61 = 0.0f;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	float fLocal_66 = 0.0f;
	bool bLocal_67 = false;
	bool bLocal_68 = false;
	int iLocal_69 = 0;
	bool bLocal_70 = false;
	bool bLocal_71 = false;
	float fLocal_72 = 0.0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iLocal_13 = 0;
	iLocal_73 = 0;
	iLocal_14 = 0;
	iLocal_16 = &Global_39918;
	bLocal_46 = uScriptParam_0;
	bLocal_68 = true;
	Function_99(&iLocal_18, "custom/pay_bounty", 8, 0);
	Function_99(&iLocal_18, "pay_bounty", 5, 0);
	if (bLocal_46)
	{
		Function_99(&iLocal_18, "$/fragments/p_inv_ShopLetterPardon01x", 0, 0);
	}
	else
	{
		Function_99(&iLocal_18, "$/fragments/p_inv_TreasureMoneyStack01x", 0, 0);
	}
	iVar1 = Function_98();
	if (iVar1 != 4294967295)
	{
		Function_97(&iLocal_18, iVar1, 3, 0);
	}
	iLocal_74 = StackVal;
	if (Global_43789 == Global_46894[2])
	{
		iLocal_74 = 1;
	}
	Function_96();
	SET_ACTOR_CUTSCENE_MODE(Function_95(), 1);
	SET_ACTOR_CAN_PLAY_GESTURES(Function_95(), false);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(Function_95(), 0);
	fVar2 = GET_CURRENT_GAME_TIME();
	bLocal_15 = 250;
	while (!IS_EXITFLAG_SET())
	{
		switch (iLocal_14)
		{
			case 0x00000000:
				bLocal_15 = 100;
				if (Function_90(&iLocal_18) && (IS_ACTOR_VALID(&bLocal_36) || (fVar2 + 1.0f) > GET_CURRENT_GAME_TIME()))
				{
					GET_POSITION(&bLocal_36, &Local_49);
					Function_88();
					if (VDIST(Function_88(), Local_49) < 2.0f || !IS_ACTOR_VALID(&bLocal_36))
					{
						iLocal_47 = 1;
					}
					if (!iLocal_47)
					{
						if (!Function_87(&bLocal_36, 1, 0x41700000))
						{
							iLocal_47 = 1;
						}
					}
					if (iLocal_47)
					{
						iVar0 = 0;
					}
					else
					{
						iVar0 = 3;
					}
					if (IS_ACTOR_VALID(&bLocal_36))
					{
						ACTOR_RESET_ANIMS(&bLocal_36, 1);
						RESET_ANIM_SET_FOR_ACTOR(&bLocal_36, 0);
					}
					iLocal_14 = 2;
					bLocal_15 = false;
				}
				else if (!IS_ACTOR_VALID(&bLocal_36))
				{
					Function_83();
				}
				break;
			
			case 0x00000002:
				bLocal_15 = Function_65(&iVar0);
				Function_61();
				break;
			
			case 0x00000003:
				if (Function_60() < 0 || bLocal_46)
				{
					if (bLocal_46)
					{
						DELETE_ITEM(Function_59(9), Function_95(), 1);
						Function_57(484, 1, 0, 0);
						if (Function_56(iLocal_74) > 5000)
						{
							if (!HAS_ACHIEVEMENT_BEEN_PASSED(31))
							{
								AWARD_ACHIEVEMENT(31);
							}
						}
						if (Function_56(iLocal_74) >= Function_55(254))
						{
							Function_54(256, Function_56(iLocal_74), 0);
						}
						Function_51(iLocal_74, 0);
						Function_50();
						if (IS_BLIP_VALID(&Global_40000 + 40))
						{
							REMOVE_BLIP(&Global_40000 + 40);
						}
						Global_21575 = 4294967295;
					}
					else if (Function_60() > Function_56(iLocal_74))
					{
						if (Function_56(iLocal_74) >= Function_55(254))
						{
							Function_54(254, Function_56(iLocal_74), 0);
						}
						Function_49(Function_56(iLocal_74), 1);
						Function_51(iLocal_74, 0);
						Function_50();
						if (IS_BLIP_VALID(&Global_40000 + 40))
						{
							REMOVE_BLIP(&Global_40000 + 40);
						}
						Global_21575 = 4294967295;
					}
					else
					{
						if (Function_60() >= Function_55(254))
						{
							Function_54(254, Function_60(), 0);
						}
						Function_33(iLocal_74, Function_60());
						Function_49(Function_60(), 1);
						Function_29("bounty_cleared_partial", 0x41200000, 1, 0, 2, 1, 0);
						if (!Function_28(Global_119934, 262144))
						{
							Function_22(Function_95(), 262144, 1, 0);
						}
					}
					PLAY_SOUND_FRONTEND("HUD_PAY_BOUNTY_MASTER");
					Function_21(8388608);
					Function_20();
				}
				Function_19();
				Function_18(0x20000000);
				bLocal_15 = false;
				iLocal_14 = 4;
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_15 = false;
				break;
			
			default:
				break;
		}
		WAIT(bLocal_15);
	}
	if (bLocal_71)
	{
		Function_5();
	}
	SET_ACTOR_CUTSCENE_MODE(Function_95(), 0);
	SET_ACTOR_CAN_PLAY_GESTURES(Function_95(), true);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(Function_95(), 1);
	if (IS_ACTOR_VALID(&bLocal_36))
	{
		SET_DRAW_ACTOR(&bLocal_36, 1);
		SET_ACTOR_CUTSCENE_MODE(&bLocal_36, 0);
		SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_36, true);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&bLocal_36, 1);
		SET_ACTOR_CAN_BUMP(&bLocal_36, 1);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_36, 1);
		SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&bLocal_36, 1);
	}
	Function_1(&iLocal_18);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x3B5 / 949
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

void Function_2(struct<2>[] Param0, int iParam1) //Position: 0x3DD / 989
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

void Function_3(struct<13> Param0) //Position: 0x528 / 1320
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_4(struct<13> Param0) //Position: 0x545 / 1349
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5() //Position: 0x563 / 1379
{
	UI_POP("CutsceneWithMessages");
	UNK_0xB0E60B63(0);
	Function_14(1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	if (IS_ACTOR_VALID(&bLocal_36))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_36, 1);
		if (bLocal_68)
		{
			TASK_CLEAR(&bLocal_36);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bLocal_36, 0);
		}
		else
		{
			TASK_STAND_STILL(&bLocal_36, -1.0f, 0, 0);
		}
		if (bLocal_68)
		{
			if (Global_43789 == Global_46760[0])
			{
				Function_6(&Global_11014, &Global_12796, 12, 0);
			}
			else if (Global_43789 == Global_46816[0])
			{
				Function_6(&Global_11544, &Global_13580, 18, 0);
			}
			else if (Global_43789 == Global_46796[4])
			{
				Function_6(&Global_11492, &Global_13504, 1, 0);
			}
			else if (Global_43789 == Global_46866[0])
			{
				Function_6(&Global_12048, &Global_14326, 7, 0);
			}
			else if (Global_43789 == Global_46866[1])
			{
				Function_6(&Global_12150, &Global_14478, 8, 0);
			}
			else if (Global_43789 == Global_46894[2])
			{
				Function_6(&Global_12284, &Global_14676, 2, 0);
			}
			else if (Global_43789 == Global_46926[1])
			{
				Function_6(&Global_12714, &Global_15312, 0, 0);
			}
			else if (Global_43789 == Global_46926[2])
			{
				Function_6(&Global_12644, &Global_15208, 8, 0);
			}
			else if (Global_43789 == Global_46914[0])
			{
				Function_6(&Global_12488, &Global_14976, 20, 0);
			}
		}
	}
	RESET_ANIM_SET_FOR_ACTOR(Function_95(), 0);
	MAKE_ACTOR_READY_FOR_ACTION(Function_95(), 1);
	if (IS_OBJECT_VALID(&uLocal_44))
	{
		DESTROY_OBJECT(&uLocal_44);
	}
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_62);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_62);
	DESTROY_OBJECT(&uLocal_64);
	DESTROY_OBJECT(&uLocal_62);
	CAMERA_RESET(0);
	bLocal_71 = false;
	return;
}

void Function_6(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x6F1 / 1777
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_13(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_13(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_13(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_12(&(Param0[iVar02]), 8);
	}
	Function_12(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_11(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_7(&Param0, &vParam1, iParam2, 0);
	}
}

void Function_7(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x799 / 1945
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_10(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_9(Global_43790), Function_8(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_13(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_13(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_10(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_9(Global_43790), Function_8(Global_43790), false, 0);
	}
}

int Function_8(int iParam0) //Position: 0x8FF / 2303
{
	switch (iParam0)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			return 0;
			break;
		
		default:
			return 12;
			break;
	}
	return 0;
}

int Function_9(int iParam0) //Position: 0x92A / 2346
{
	switch (iParam0)
	{
		case 0x00000003:
			return 5;
			break;
		
		case 0x00000004:
			return 3;
			break;
		
		case 0x00000005:
			break;
			return 1;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_10(var uParam0, int iParam1) //Position: 0x95E / 2398
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_11(int iParam0) //Position: 0x96F / 2415
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 0);
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			DEREFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, 1);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_12(var uParam0, int iParam1) //Position: 0xA18 / 2584
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_13(var uParam0, bool bParam1) //Position: 0xA32 / 2610
{
	int iVar0;
	
	iVar0 = (uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_14(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0xA4F / 2639
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_95();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_57(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_17();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_15(&uParam9, &uParam10);
}

void Function_15(var uParam0, bool bParam1) //Position: 0xB1E / 2846
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_16();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_16() //Position: 0xBED / 3053
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

void Function_17() //Position: 0xC65 / 3173
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_18(var uParam0) //Position: 0xC7A / 3194
{
	Global_39922.f_88 = (Global_39922.f_88 || uParam0);
	return;
}

void Function_19() //Position: 0xC8D / 3213
{
	int iVar0;
	
	Global_41176 = Function_56(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_41176 + 4)[iVar0] = (*&Global_40060 + 68[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

void Function_20() //Position: 0xCDB / 3291
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 36)
	{
		(*&Global_40060 + 68[iVar0181][35])[0] = StackVal;
		iVar0++;
	}
	return;
}

void Function_21(int iParam0) //Position: 0xD08 / 3336
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_22(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xD25 / 3365
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_24(&uParam0, uParam1, &uParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_23(&cVar1, &uParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_23(char* cParam0) //Position: 0xD9A / 3482
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

bool Function_24(int iParam0, var uParam1, int iParam2) //Position: 0xDD4 / 3540
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
		if (Function_26(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_25(uVar0))
		{
			case 0x00000002:
				if (!Function_28(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_25(char* cParam0) //Position: 0xE50 / 3664
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

int Function_26(int iParam0) //Position: 0xEF1 / 3825
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_27(&iVar1, 2147483648);
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

void Function_27(int iParam0, int iParam1) //Position: 0xF2E / 3886
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_28(int iParam0, int iParam1) //Position: 0xF44 / 3908
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_29(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xF57 / 3927
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_30(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

struct<16> Function_30(int iParam0) //Position: 0xFE2 / 4066
{
	char* cVar0[16];
	
	if (!Function_31())
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

bool Function_31() //Position: 0x1021 / 4129
{
	if (Function_32(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_32(var uParam0, int iParam1) //Position: 0x103C / 4156
{
	return (uParam0 && iParam1) == 0;
}

void Function_33(int iParam0, bool bParam1) //Position: 0x1049 / 4169
{
	if (!Function_48(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_40060[iParam0])
	{
		Function_34(222, Global_40060[iParam0], 0);
		if (Function_55(222) <= 0)
		{
			Function_54(222, 0, 0);
		}
		Global_40060[iParam0] = 0;
		Function_54((*&Global_40060 + 4428)[iParam0], 0, 0);
	}
	else
	{
		Global_40060[iParam0] = (Global_40060[iParam0] - bParam1);
		Function_34((*&Global_40060 + 4428)[iParam0], bParam1, 0);
		Function_34(222, bParam1, 0);
	}
	return;
}

int Function_34(int iParam0, bool bParam1, bool bParam2) //Position: 0x10D2 / 4306
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_47(iParam0);
	if (bParam2 && bParam1 == 0)
	{
		Function_35(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

void Function_35(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x12CF / 4815
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_46(390))), 32);
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
					fVar19 = (Function_45(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_45(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_43(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_40(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_37(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_36(), &Var9);
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

var Function_36() //Position: 0x190D / 6413
{
	int iVar0;
	
	return &iVar0;
}

var Function_37(int iParam0) //Position: 0x1916 / 6422
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_38(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1927 / 6439
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_39(char* cParam0) //Position: 0x1A1E / 6686
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_40(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1A39 / 6713
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_42(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_41(Function_42(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_41(int iParam0, int iParam1) //Position: 0x1AA0 / 6816
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_42(int iParam0, bool bParam1) //Position: 0x1AB2 / 6834
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_43(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1AC4 / 6852
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
	if (((Function_44(iParam0) != 19 || Function_44(iParam0) != 17) || Function_44(iParam0) != 10) || Function_44(iParam0) != 9)
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

int Function_44(int iParam0) //Position: 0x1BF8 / 7160
{
	return Global_55480[iParam016].f_96;
}

float Function_45(int iParam0) //Position: 0x1C07 / 7175
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_46(int iParam0) //Position: 0x1C40 / 7232
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_47(int iParam0) //Position: 0x1C7D / 7293
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

bool Function_48(int iParam0) //Position: 0x1E17 / 7703
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

int Function_49(bool bParam0, bool bParam1) //Position: 0x1E2C / 7724
{
	bool bVar0;
	
	bVar0 = Function_55(0);
	if ((Function_55(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_34(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_55(0));
	return 1;
}

void Function_50() //Position: 0x1EBD / 7869
{
	return;
}

void Function_51(int iParam0, bool bParam1) //Position: 0x1EC3 / 7875
{
	if (!Function_48(iParam0))
	{
		return;
	}
	Global_40060[iParam0] = bParam1;
	Function_52((*&Global_40060 + 4428)[iParam0], TO_FLOAT(bParam1), 0);
	Function_52(222, TO_FLOAT((Function_55(223) + Function_55(224))), 0);
	return;
}

int Function_52(int iParam0, float fParam1, bool bParam2) //Position: 0x1F04 / 7940
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > fParam1)
	{
		Function_53(iParam0, fParam1, 0);
	}
	Global_54086[iParam0] = fParam1;
	Function_47(iParam0);
	if (&bParam2)
	{
		Function_35(iParam0, 1, fParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_53(int iParam0, float fParam1, bool bParam2) //Position: 0x2171 / 8561
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

int Function_54(int iParam0, bool bParam1, bool bParam2) //Position: 0x23B5 / 9141
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
		Function_53(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_47(iParam0);
	if (&bParam2)
	{
		Function_35(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_55(int iParam0) //Position: 0x2651 / 9809
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

bool Function_56(int iParam0) //Position: 0x2692 / 9874
{
	if (!Function_48(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

int Function_57(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x26AA / 9898
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
	Function_53(iParam0, TO_FLOAT(bParam1), 1);
	Function_47(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_35(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_58(iParam0);
	return 1;
}

void Function_58(int iParam0) //Position: 0x28D2 / 10450
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

var Function_59(bool bParam0) //Position: 0x2970 / 10608
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &bVar0;
}

bool Function_60() //Position: 0x2A64 / 10852
{
	return Function_55(0);
}

void Function_61() //Position: 0x2A6E / 10862
{
	bool bVar0;
	char* cVar1[64];
	
	if (!bLocal_67)
	{
		if (fLocal_66 + 1.0f) > GET_CURRENT_GAME_TIME()
		{
			bVar0 = false;
			while (!bVar0 && !bLocal_67)
			{
				iLocal_73++;
				if (iLocal_73 != 0)
				{
					if ((*&Global_40060 + 68[Global_43787181][Function_64(iLocal_73)5])[3] >= 0)
					{
						bVar0 = true;
					}
				}
				if (iLocal_73 > 35)
				{
					bLocal_67 = true;
				}
			}
			if (!bLocal_67)
			{
				strcpy(&cVar1, "law_crime_rapsheet_multi", 64);
				if ((*&Global_40060 + 68[Global_43787181][Function_64(iLocal_73)5])[3] == 1)
				{
					strcpy(&cVar1, "law_crime_rapsheet_single", 64);
				}
				PRINT_BIG_FORMAT(1.0f, &cVar1, Function_62((*&Global_40060 + 68[Global_43787181][Function_64(iLocal_73)5])[3]), &Global_41252[Function_64(iLocal_73)11] + 4, 0, 0, 2, 0);
				fLocal_66 = GET_CURRENT_GAME_TIME();
			}
		}
	}
	return;
}

var Function_62(bool bParam0) //Position: 0x2B55 / 11093
{
	bool bVar0;
	
	bVar0 = Function_63();
	UI_SET_STRING(&bVar0, I2STR(bParam0));
	return &bVar0;
}

var Function_63() //Position: 0x2B6F / 11119
{
	Global_10990 = (Global_10990 + 1 % 10);
	switch (Global_10990)
	{
		case 0x00000001:
			return "POD2ST1";
		
		case 0x00000002:
			return "POD2ST2";
		
		case 0x00000003:
			return "POD2ST3";
		
		case 0x00000004:
			return "POD2ST4";
		
		case 0x00000005:
			return "POD2ST5";
		
		case 0x00000006:
			return "POD2ST6";
		
		case 0x00000007:
			return "POD2ST7";
		
		case 0x00000008:
			return "POD2ST8";
		
		case 0x00000009:
			return "POD2ST9";
		
		default:
	}
	return "POD2ST0";
}

int Function_64(int iParam0) //Position: 0x2C2B / 11307
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0;
			break;
		
		case 0x00000001:
			return 12;
			break;
		
		case 0x00000002:
			return 11;
			break;
		
		case 0x00000003:
			return 22;
			break;
		
		case 0x00000004:
			return 21;
			break;
		
		case 0x00000005:
			return 7;
			break;
		
		case 0x00000006:
			return 6;
			break;
		
		case 0x00000007:
			return 13;
			break;
		
		case 0x00000008:
			return 8;
			break;
		
		case 0x00000009:
			return 16;
			break;
		
		case 0x0000000A:
			return 17;
			break;
		
		case 0x0000000B:
			return 19;
			break;
		
		case 0x0000000C:
			return 20;
			break;
		
		case 0x0000000D:
			return 14;
			break;
		
		case 0x0000000E:
			return 9;
			break;
		
		case 0x0000000F:
			return 18;
			break;
		
		case 0x00000010:
			return 15;
			break;
		
		case 0x00000011:
			return 10;
			break;
		
		case 0x00000012:
			return 5;
			break;
		
		case 0x00000013:
			return 3;
			break;
		
		case 0x00000014:
			return 4;
			break;
		
		case 0x00000015:
			return 1;
			break;
		
		case 0x00000016:
			return 2;
			break;
		
		case 0x00000017:
			return 28;
			break;
		
		case 0x00000018:
			return 30;
			break;
		
		case 0x00000019:
			return 35;
			break;
		
		case 0x0000001A:
			return 23;
			break;
		
		case 0x0000001B:
			return 24;
			break;
		
		case 0x0000001C:
			return 25;
			break;
		
		case 0x0000001D:
			return 26;
			break;
		
		case 0x0000001E:
			return 27;
			break;
		
		case 0x0000001F:
			return 29;
			break;
		
		case 0x00000020:
			return 31;
			break;
		
		case 0x00000021:
			return 32;
			break;
		
		case 0x00000022:
			return 33;
			break;
		
		case 0x00000023:
			return 34;
			break;
	}
	return 0;
}

int Function_65(int iParam0) //Position: 0x2DE1 / 11745
{
	int iVar0;
	
	iVar0 = 250;
	if (IS_ACTOR_VALID(&bLocal_36))
	{
		SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_36, false);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&bLocal_36, 0);
		SET_ACTOR_CAN_BUMP(&bLocal_36, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_36, 0);
		SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&bLocal_36, 0);
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (Function_90(&iLocal_18))
			{
				uLocal_42 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("tend_counter_and_patron_bell", &Global_54078, 5.0f, 1));
				UNK_0xB0E60B63(1);
				Function_79(1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0x3f800000, 0);
				UI_PUSH("CutsceneWithMessages");
				bLocal_71 = true;
				uLocal_64 = Function_76(&Global_39918, 0, 0, 0);
				if (IS_OBJECT_VALID(&uLocal_42))
				{
					GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_42), "Player_Pay_Bounty", &Local_52);
					TELEPORT_ACTOR(Function_95(), &Local_52, 1, 1, 1);
					SNAP_OBJECT_TO_GROUND(Function_95(), 1.0f, 0, 1092616192);
					SET_ACTOR_HEADING(Function_95(), (GET_OBJECT_HEADING(&uLocal_42) + 180.0f), 1);
				}
				SET_ANIM_SET_FOR_ACTOR(Function_95(), "pay_bounty", 0);
				SET_ACTION_NODE_FOR_ACTOR(Function_95(), "pay_bounty/ring_bell");
				iParam0 = 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_ACTION_NODE_PLAYING(Function_95(), "pay_bounty/ring_bell"))
			{
				if (IS_ACTOR_VALID(&bLocal_36))
				{
					SAY_SINGLE_LINE_CONTEXT(&bLocal_36, 61, Function_95(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
				}
				HUD_FADE_OUT(0,5f, 1f, 1);
				fLocal_72 = GET_CURRENT_GAME_TIME();
				iParam0 = 2;
			}
			break;
		
		case 0x00000002:
			while (!HUD_IS_FADED() || !Function_90(&iLocal_18))
			{
				WAIT(false);
			}
			iLocal_47 = 0;
			bLocal_48 = true;
			if (Global_43789 == Global_46760[0])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(&Global_12796[123] + 16);
			}
			else if (Global_43789 == Global_46816[0])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(&Global_13580[183] + 16);
			}
			else if (Global_43789 == Global_46796[4])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(&Global_13504[13] + 16);
			}
			else if (Global_43789 == Global_46866[0])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(&Global_14326[73] + 16);
			}
			else if (Global_43789 == Global_46866[1])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(&Global_14478[83] + 16);
			}
			else if (Global_43789 == Global_46894[2])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(&Global_14676[23] + 16);
			}
			else if (Global_43789 == Global_46926[1])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(&Global_15312[03] + 16);
			}
			else if (Global_43789 == Global_46926[2])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(&Global_15208[83] + 16);
			}
			else if (Global_43789 == Global_46914[0])
			{
				ACTIVATE_ACTOR_FOR_PERS_CHAR(&Global_14976[203] + 16);
			}
			if (GET_CURRENT_GAME_TIME() > (fLocal_72 + 3.0f))
			{
				if (IS_ACTOR_VALID(&bLocal_36))
				{
					if (Function_87(&bLocal_36, 1, 0x41700000))
					{
						iParam0 = 3;
						if (IS_ACTOR_VALID(&bLocal_36))
						{
							ACTOR_RESET_ANIMS(&bLocal_36, 1);
							RESET_ANIM_SET_FOR_ACTOR(&bLocal_36, 0);
						}
					}
				}
				else
				{
					Function_83();
				}
			}
			else
			{
				iParam0 = 3;
				if (IS_ACTOR_VALID(&bLocal_36))
				{
					ACTOR_RESET_ANIMS(&bLocal_36, 1);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_36, 0);
				}
			}
			break;
		
		case 0x00000003:
			Function_74("UPDATE_BSTUT_CUTSCENE: BS_INIT_PAYTUT", 11);
			if (Function_90(&iLocal_18))
			{
				if (!bLocal_48)
				{
					UNK_0xB0E60B63(1);
					Function_79(1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
					UI_PUSH("CutsceneWithMessages");
					bLocal_71 = true;
					uLocal_64 = Function_76(&Global_39918, 0, 0, 0);
				}
				Function_73();
				Function_74("UPDATE_BSTUT_CUTSCENE: BS_RUN_PAY", 11);
				if (bLocal_46)
				{
					uLocal_44 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Global_39918, "nmoneyProp", "p_inv_ShopLetterPardon01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
				}
				else
				{
					uLocal_44 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &Global_39918, "nmoneyProp", "p_inv_TreasureMoneyStack01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
				}
				Function_70(&uLocal_38);
				SET_ANIM_SET_FOR_ACTOR(Function_95(), "pay_bounty", 0);
				if (IS_ACTOR_VALID(&bLocal_36))
				{
					if (bLocal_70)
					{
						SET_DRAW_ACTOR(&bLocal_36, 1);
					}
					SET_ACTOR_CUTSCENE_MODE(&bLocal_36, 1);
					SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_36, false);
					SET_ACTOR_CAN_PLAY_BORED_IDLES(&bLocal_36, 0);
					SET_ACTOR_CAN_BUMP(&bLocal_36, 0);
					TASK_STAND_STILL(&bLocal_36, -1.0f, 0, 0);
					ACTOR_RESET_ANIMS(&bLocal_36, 1);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_36, 0);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_36, "pay_bounty", 1);
				}
				if (bLocal_46)
				{
					SET_ACTION_NODE_FOR_ACTOR(Function_95(), "pay_bounty/give_letter");
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_36, "Pay_Bounty/take_letter");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(Function_95(), "pay_bounty/pay_cash");
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_36, "Pay_Bounty/take_cash");
				}
				if (DECOR_CHECK_EXIST(Function_95(), "bountyPayCheckFlag"))
				{
					DECOR_REMOVE(Function_95(), "bountyPayCheckFlag");
				}
				if (!bLocal_46)
				{
					SAY_SINGLE_LINE_STRING_WITH_REPLY(Function_95(), "PLAYER_PAY_FINE_LOCAL", &bLocal_36, "Bounty_Pay_Off", 1, 0, 0, 0);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_REPLY(Function_95(), "PLAYER_PAY_BOUNTY_WITH_PARDON_LETTER", &bLocal_36, "Bounty_Pay_Off", 1, 0, 0, 0);
				}
				ATTACH_PROP_TO_ANIM(Function_95(), &uLocal_44, "wrist_l_Attachment", "grab", 1, ATTACH_SLOT_FROM_STRING("A"));
				iParam0 = 4;
				iVar0 = 0;
			}
			break;
		
		case 0x00000004:
			if (!iLocal_69)
			{
				if (HUD_IS_FADED() || HUD_IS_FADING())
				{
					HUD_FADE_IN(0,5f, 1065353216);
				}
				iLocal_69 = 1;
			}
			if (!IS_ACTION_NODE_PLAYING(Function_95(), "pay_bounty/pay_cash") && !IS_ACTION_NODE_PLAYING(Function_95(), "pay_bounty/give_letter"))
			{
				iParam0 = 5;
				iVar0 = 0;
			}
			if (Function_66(&uLocal_38, 5,25f))
			{
				iParam0 = 5;
				iVar0 = 0;
			}
			break;
		
		case 0x00000005:
			Function_74("UPDATE_BSTUT_CUTSCENE: BS_CLEANUP_PAYTUT", 11);
			iLocal_14 = 3;
			Function_5();
			iVar0 = 0;
	}
	return iVar0;
}

bool Function_66(int iParam0, float fParam1) //Position: 0x34FD / 13565
{
	if (Function_69(&iParam0))
	{
		if (Function_67(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_67(vector3 vParam0) //Position: 0x351B / 13595
{
	if (Function_69(&vParam0))
	{
		if (Function_68(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_68(int iParam0) //Position: 0x35E8 / 13800
{
	return Function_32(iParam0, 2);
}

bool Function_69(int iParam0) //Position: 0x35F6 / 13814
{
	return Function_32(iParam0, 1);
}

void Function_70(int iParam0) //Position: 0x3604 / 13828
{
	if (!Function_69(&iParam0))
	{
		Function_71(&iParam0, 0.0f);
	}
	return;
}

void Function_71(vector3 vParam0) //Position: 0x361B / 13851
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_72(&vParam0, 1);
	Function_27(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_72(var uParam0, var uParam1) //Position: 0x3640 / 13888
{
	uParam0 = (uParam0 || uParam1);
	return;
}

void Function_73() //Position: 0x3651 / 13905
{
	float fVar0;
	struct<2> Var1;
	
	uLocal_42 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("tend_counter_and_patron_bell", &Global_54078, 5.0f, 1));
	if (IS_OBJECT_VALID(&uLocal_42))
	{
		fVar0 = GET_OBJECT_HEADING(&uLocal_42);
		GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_42), "Player_Pay_Bounty", &Local_52);
		GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&uLocal_42), "Clerk_Pay_Bounty", &Local_49);
		Var1 = Vector(StackVal, StackVal, StackVal) - Vector(Local_52, Local_49, StackVal);
		VSCALE(&Var1, 0,5f);
		Var1 = Vector(StackVal, StackVal, StackVal) + Vector(Local_52, Var1, StackVal);
		uLocal_62 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "shop_volume", 0f, Var1, Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 6.0f));
		if (IS_VOLUME_VALID(&uLocal_62))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_62);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_62);
			if (IS_ACTOR_VALID(&bLocal_36))
			{
				SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bLocal_36, 1);
			}
		}
		if (IS_ACTOR_VALID(&bLocal_36))
		{
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_36, 0);
			SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&bLocal_36, 0);
			ACTOR_RESET_ANIMS(&bLocal_36, 1);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_36, 0);
			TASK_CLEAR(&bLocal_36);
			TELEPORT_ACTOR(&bLocal_36, &Local_49, 1, 1, 1);
			SNAP_OBJECT_TO_GROUND(&bLocal_36, 1.0f, 0, 1092616192);
			SET_ACTOR_HEADING(&bLocal_36, fVar0, 1);
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bLocal_36);
		}
		CLEAR_AMBIENT_OBJECTS_SPHERE(Local_52, 1,2f, 4294967295);
		TELEPORT_ACTOR(Function_95(), &Local_52, 1, 1, 1);
		SNAP_OBJECT_TO_GROUND(Function_95(), 1.0f, 0, 1092616192);
		fVar0 = (fVar0 + 180.0f);
		SET_ACTOR_HEADING(Function_95(), fVar0, 1);
	}
	return;
}

void Function_74(char* cParam0) //Position: 0x37CC / 14284
{
	if (!Function_75(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_21610, &cParam0))
	{
		strcpy(&Global_21610, &cParam0, 64);
		Global_21610.f_132 = 1;
		Global_21610.f_128 = GET_CURRENT_GAME_TIME();
		Global_21610.f_136 = Global_21610.f_128;
	}
	return;
}

bool Function_75(int iParam0) //Position: 0x3809 / 14345
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_76(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3825 / 14373
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_36(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "ShopSell", 1, 1);
	}
	Function_77(&uVar0);
	if (&bParam3)
	{
		SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return &uVar0;
}

void Function_77(int iParam0) //Position: 0x3884 / 14468
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_78(&uVar0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&iParam0, 0, 4294967295);
	return;
}

void Function_78(float fParam0) //Position: 0x38A4 / 14500
{
	SET_CAMERASHOT_ASPECT_RATIO(&fParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, fLocal_61);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(&fParam0, 1885.0f);
	SET_CAMERASHOT_POSITION(&fParam0, Local_55);
	SET_CAMERASHOT_ORIENTATION(&fParam0, Local_58, 0);
	RESET_CAMERASHOT_TARGET(&fParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_79(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x3901 / 14593
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_17();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_95();
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (GET_WEAPON_IN_HAND(&uVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&uVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&uVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&uVar1, 0);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, 1);
			AI_IGNORE_ACTOR(&uVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&iParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&iParam7);
				DELETE_PROJECTILES_IN_VOLUME(&iParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_82(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_36(), 2,802597E-45f, Function_82(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_57(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (iParam10 && !Function_31())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_81()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_81()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (Function_75(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_80(0x4000000);
	}
	if (Function_75(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_80(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_80(int iParam0) //Position: 0x3BB3 / 15283
{
	int iVar0;
	
	if (Function_32(iParam0, 1) && Function_32(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

var Function_81() //Position: 0x3BE7 / 15335
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		iVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&iVar2))
		{
			while (IS_OBJECT_VALID(&iVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&iVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&iVar2), "bino_camera"))
				{
					return &iVar2;
				}
				iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

struct<8> Function_82(var uParam0) //Position: 0x3C75 / 15477
{
	struct<2> Var0;
	
	GET_POSITION(&uParam0, &Var0);
	return StackVal, Var0;
}

void Function_83() //Position: 0x3C87 / 15495
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_43789 == Global_46760[0])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(&Global_12796[123] + 16)))
		{
			bVar0 = true;
		}
	}
	else if (Global_43789 == Global_46816[0])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(&Global_13580[183] + 16)))
		{
			bVar0 = true;
		}
	}
	else if (Global_43789 == Global_46796[4])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(&Global_13504[13] + 16)))
		{
			bVar0 = true;
		}
	}
	else if (Global_43789 == Global_46866[0])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(&Global_14326[73] + 16)))
		{
			bVar0 = true;
		}
	}
	else if (Global_43789 == Global_46866[1])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(&Global_14478[83] + 16)))
		{
			bVar0 = true;
		}
	}
	else if (Global_43789 == Global_46894[2])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(&Global_14676[23] + 16)))
		{
			bVar0 = true;
		}
	}
	else if (Global_43789 == Global_46926[1])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(&Global_15312[03] + 16)))
		{
			bVar0 = true;
		}
	}
	else if (Global_43789 == Global_46926[2])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(&Global_15208[83] + 16)))
		{
			bVar0 = true;
		}
	}
	else if (Global_43789 == Global_46914[0])
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(&Global_14976[203] + 16)))
		{
			bVar0 = true;
		}
	}
	if (Global_43789 == Global_46760[0])
	{
		bLocal_36 = Function_84(&Global_11014, &Global_12796, 12, 0, 0, 0);
	}
	else if (Global_43789 == Global_46816[0])
	{
		bLocal_36 = Function_84(&Global_11544, &Global_13580, 18, 0, 0, 0);
	}
	else if (Global_43789 == Global_46796[4])
	{
		if (!Function_13(&(Global_11492[12]), 1))
		{
			bLocal_36 = Function_84(&Global_11492, &Global_13504, 1, 0, 0, 0);
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&Global_13504[13] + 16);
		}
		else
		{
			bLocal_36 = GET_ACTOR_FROM_PERS_CHAR(&Global_13504[13] + 16);
			if (IS_ACTOR_VALID(&bLocal_36))
			{
				TASK_CLEAR(&bLocal_36);
				TASK_STAND_STILL(&bLocal_36, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_36, true);
				SET_ACTOR_UPDATE_PRIORITY(&bLocal_36, false);
				ACTOR_RESET_ANIMS(&bLocal_36, 0);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_36, 1);
				CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&bLocal_36);
			}
			bLocal_68 = false;
		}
	}
	else if (Global_43789 == Global_46866[0])
	{
		bLocal_36 = Function_84(&Global_12048, &Global_14326, 7, 0, 0, 0);
	}
	else if (Global_43789 == Global_46866[1])
	{
		bLocal_36 = Function_84(&Global_12150, &Global_14478, 8, 0, 0, 0);
	}
	else if (Global_43789 == Global_46894[2])
	{
		bLocal_36 = Function_84(&Global_12284, &Global_14676, 2, 0, 0, 0);
	}
	else if (Global_43789 == Global_46926[1])
	{
		bLocal_36 = Function_84(&Global_12714, &Global_15312, 0, 0, 0, 0);
	}
	else if (Global_43789 == Global_46926[2])
	{
		bLocal_36 = Function_84(&Global_12644, &Global_15208, 8, 0, 0, 0);
	}
	else if (Global_43789 == Global_46914[0])
	{
		bLocal_36 = Function_84(&Global_12488, &Global_14976, 20, 0, 0, 0);
	}
	if (IS_ACTOR_VALID(&bLocal_36))
	{
		if (!bVar0)
		{
			SET_DRAW_ACTOR(&bLocal_36, 0);
			bLocal_70 = true;
		}
	}
	return;
}

var Function_84(struct<2>[] Param0, vector3[] vParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x3F73 / 16243
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_13(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_13(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16) || iParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16))
			{
				REVIVE_PERS_CHAR(&vParam1[iVar03] + 16, 1);
			}
			if (!Function_13(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_10(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || iParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_86(StackVal, &Global_10996, Function_36(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_13(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_10(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_10(&(Param0[iVar02]), 1);
	Function_85(&vParam1[iVar03] + 16, 1);
	if (&bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(&uVar1, 1);
	}
	if (!&bParam4)
	{
		if (IS_ACTOR_HOGTIED(&uVar1))
		{
			FREE_FROM_HOGTIE(&uVar1);
		}
	}
	return &uVar1;
}

int Function_85(int iParam0, bool bParam1) //Position: 0x413C / 16700
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			REFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
			if (&bParam1)
			{
				if (IS_ACTOR_HOGTIED(&uVar0))
				{
					FREE_FROM_HOGTIE(&uVar0);
				}
			}
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_86(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x41EE / 16878
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (&fParam6 > 1.0f)
	{
		fParam6 = 60.0f;
	}
	uVar2 = CREATE_PERS_CHAR_IN_LAYOUT(&uParam0, &uParam1, uParam2, Param4, &fParam6);
	if (!IS_PERS_CHAR_VALID(&uVar2))
	{
		return "";
	}
	uVar3 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(&uVar2), "Persistent_Char_Brain", &uParam3, Var0, Var0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_36(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(&uVar2);
		return "";
	}
	(&iVar4 + 36) = Param4;
	iVar4 = *(&iVar4 + 36);
	*(&iVar4 + 12) = *(&iVar4 + 36);
	*(&iVar4 + 24) = *(&iVar4 + 36);
	*(&iVar4 + 48) = *(&iVar4 + 36);
	*(&iVar4 + 60) = *(&iVar4 + 36);
	*(&iVar4 + 72) = &uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar3), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar4, 22);
	return &uVar2;
}

bool Function_87(bool bParam0, bool bParam1, float fParam2) //Position: 0x4315 / 17173
{
	float fVar0;
	bool bVar1;
	
	if (0 || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(&bParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(&bParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(&bParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(&bParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= &fParam2)
		{
			DECOR_REMOVE(&bParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(&bParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

struct<8> Function_88() //Position: 0x43B7 / 17335
{
	struct<2> Var0;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("tend_counter_and_patron_bell", &Global_54078, 5.0f, 1));
	if (IS_OBJECT_VALID(&uVar2))
	{
		GRINGO_GET_USE_COMPONENT_POSITION_EXT(GET_GRINGO_FROM_OBJECT(&uVar2), "Clerk_Pay_Bounty", &Var0);
		return StackVal, Var0;
	}
	Function_89();
	return StackVal, Function_89();
}

struct<8> Function_89() //Position: 0x441A / 17434
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_90(struct<2>[] Param0) //Position: 0x4424 / 17444
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_94();
	iVar1 = 0;
	if (!Function_4(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_93(&(Param0[iVar02]), 8);
		}
		else if (Function_92())
		{
			iVar1 = 1;
			Function_93(&(Param0[iVar02]), 8);
		}
		Function_93(&(Param0[iVar02]), 16);
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
				Function_93(&(Param0[iVar02]), 1);
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
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_93(&(Param0[iVar02]), 2);
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
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_93(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_93(&(Param0[iVar02]), 2);
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
	Function_91();
	return 1;
}

void Function_91() //Position: 0x47E6 / 18406
{
	if (!Function_75(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_92() //Position: 0x4826 / 18470
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

void Function_93(struct<13> Param0) //Position: 0x4854 / 18516
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_94() //Position: 0x4867 / 18535
{
	if (!Function_75(128))
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

var Function_95() //Position: 0x48A9 / 18601
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_96() //Position: 0x48BE / 18622
{
	if (Global_43789 == Global_46760[0])
	{
		Local_55 = Vector(-2192,08f, 18,43f, 2603,37f);
		Local_58 = Vector(-0,32f, 45,77f, 0.0f);
		fLocal_61 = 42,54f;
	}
	else if (Global_43789 == Global_46816[0])
	{
		Local_55 = Vector(-953,02f, 92,08f, 2430,69f);
		Local_58 = Vector(-2,34f, -32,09f, 0.0f);
		fLocal_61 = 32,39f;
	}
	else if (Global_43789 == Global_46796[4])
	{
		Local_55 = Vector(-3690,4f, 10,98f, 3468,28f);
		Local_58 = Vector(-1,04f, 145,88f, 0.0f);
		fLocal_61 = 37,04f;
	}
	else if (Global_43789 == Global_46866[0])
	{
		Local_55 = Vector(-2685,92f, 33,99f, 4222,68f);
		Local_58 = Vector(-4,26f, 114,43f, 0.0f);
		fLocal_61 = 40,49f;
	}
	else if (Global_43789 == Global_46866[1])
	{
		Local_55 = Vector(-1665,41f, 10,01f, 4286,78f);
		Local_58 = Vector(-3,2f, -176,95f, 0.0f);
		fLocal_61 = 36,69f;
	}
	else if (Global_43789 == Global_46894[2])
	{
		Local_55 = Vector(-807,68f, 15,09f, 3776,07f);
		Local_58 = Vector(-3,67f, -162,07f, 0.0f);
		fLocal_61 = 40,05f;
	}
	else if (Global_43789 == Global_46926[1])
	{
		Local_55 = Vector(-410,17f, 153,48f, 1603,97f);
		Local_58 = Vector(-2,5f, 54,33f, 0.0f);
		fLocal_61 = 50,39f;
	}
	else if (Global_43789 == Global_46926[2])
	{
		Local_55 = Vector(-168,5f, 85,58f, 2069,78f);
		Local_58 = Vector(-1,08f, 118,71f, 0.0f);
		fLocal_61 = 39,87f;
	}
	else if (Global_43789 == Global_46914[0])
	{
		Local_55 = Vector(659,76f, 80,29f, 1314,38f);
		Local_58 = Vector(-2,8f, -61,21f, 0.0f);
		fLocal_61 = 30,64f;
	}
	return;
}

var Function_97(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4AB9 / 19129
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_93(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_93(&(Param0[iVar02]), 8);
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

int Function_98() //Position: 0x4B95 / 19349
{
	if (Global_43789 == Global_46760[0])
	{
		return 191;
	}
	if (Global_43789 == Global_46816[0])
	{
		return 195;
	}
	if (Global_43789 == Global_46796[4])
	{
		return 196;
	}
	if (Global_43789 == Global_46866[0])
	{
		return 307;
	}
	if (Global_43789 == Global_46866[1])
	{
		return 309;
	}
	if (Global_43789 == Global_46894[2])
	{
		return 308;
	}
	if (Global_43789 == Global_46926[1])
	{
		return 198;
	}
	if (Global_43789 == Global_46926[2])
	{
		return 197;
	}
	if (Global_43789 == Global_46914[0])
	{
		return 193;
	}
	return 4294967295;
}

var Function_99(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x4C3E / 19518
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_100(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_93(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_100(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x4C7C / 19580
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_4(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_93(&(Param0[iVar02]), 4);
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

