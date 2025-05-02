//Decompiled with MagicRDR v1.0
//Function Count : 87
//Statics Count : 15
//Natives Count : 136
//Parameters Count : 0

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
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	
	iLocal_12 = 31;
	iLocal_13 = 33;
	iLocal_14 = 1;
	ADD_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	while (!IS_LAYOUTREF_VALID(&uVar0) && !IS_EXITFLAG_SET())
	{
		uVar0 = FIND_NAMED_LAYOUT("Formations");
		WAIT(false);
	}
	uVar1 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("Formations"));
	if (!IS_ITERATOR_VALID(&uVar1))
	{
		LOG_ERROR("Failed to create FUI iterator. Script will not receive FUI events");
		REMOVE_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
		TERMINATE_THIS_SCRIPT();
	}
	else
	{
		ITERATE_ON_OBJECT_TYPE(&uVar1, 3);
	}
	while (!IS_EXITFLAG_SET())
	{
		bVar2 = IS_GAME_PAUSED();
		if (bVar2)
		{
			ITERATE_IN_LAYOUT(&uVar1, GET_EVENT_LAYOUT());
		}
		else
		{
			ITERATE_IN_SET(&uVar1, GET_OBJECTSET_FOR_EVENT_TYPE(75));
		}
		iVar3 = START_OBJECT_ITERATOR(&uVar1);
		while (IS_OBJECT_VALID(&iVar3))
		{
			Function_1(GET_EVENT_FROM_OBJECT(&iVar3));
			iVar3 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
		WAIT(false);
	}
	if (IS_ITERATOR_VALID(&uVar1))
	{
		DESTROY_ITERATOR(&uVar1);
	}
	REMOVE_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x128 / 296
{
	int iVar0;
	
	if (!IS_EVENT_VALID(&iParam0))
	{
		return;
	}
	iVar0 = GET_EVENT_TYPE(&iParam0);
	if (75 != iVar0)
	{
		return;
	}
	Function_81(&iParam0);
	if (UI_ISACTIVE("generalMenus"))
	{
		Function_11(&iParam0);
	}
	if (UI_ISACTIVE("NetworkingLayerOffline") || UI_ISACTIVE("nPauseMenu"))
	{
		Function_2(&iParam0);
	}
	return;
}

void Function_2(int iParam0) //Position: 0x19F / 415
{
	struct<16> Var0;
	struct<16> Var16;
	int iVar32;
	
	if (DECOR_CHECK_STRING(&iParam0, "Param", "pauseStart"))
	{
		UI_EXCLUDE("NetTab_ProfileTitles");
		UI_EXCLUDE("NetTab_Profile");
	}
	if (UI_ISACTIVE("Net_titles"))
	{
		if (DECOR_CHECK_STRING(&iParam0, "Param", "Title_Selected"))
		{
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_10(UI_GET_SELECTED_INDEX("Net_titles", 0)) };
			UI_SET_TEXT("MPP_TitleValue", &Var0);
			Function_6(Function_9(UI_GET_SELECTED_INDEX("Net_titles", 0)));
			UI_EXIT("NetworkingLayerOffline");
			UI_ENTER("nPauseMenu");
		}
	}
	if (UI_ISACTIVE("nMPProfile"))
	{
		if (DECOR_CHECK_STRING(&iParam0, "Param", "Prestige") && Global_132499.f_1412 > 4)
		{
			UI_TRANSITION_TO("MP_XP_RollOver_Popup");
		}
		if (DECOR_CHECK_STRING(&iParam0, "Param", "Mount_Selected"))
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_5(UI_GET_SELECTED_INDEX("Net_Profile_Mount_Select", 0)) };
			Global_131807.f_1340 = GET_ACTOR_ENUM_FROM_STRING(&Var16);
			Function_3(Global_131807.f_1340, 0, 1);
			UI_EXIT("NetworkingLayerOffline");
			UI_ENTER("nPauseMenu");
		}
		if (DECOR_CHECK_STRING(&iParam0, "Param", "Prestige_Opt"))
		{
			iVar32 = UI_GET_SELECTED_INDEX("Net_Prestige_Opt", 0);
			if (iVar32 == 0)
			{
			}
			else if (iVar32 == 1)
			{
			}
			UI_EXIT("NetworkingLayerOffline");
			UI_ENTER("nPauseMenu");
		}
	}
	return;
}

void Function_3(var uParam0, bool bParam1, bool bParam2) //Position: 0x3E8 / 1000
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_4(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_4(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x417 / 1047
{
	uParam0 = (uParam0 || iParam1);
	return;
}

struct<64> Function_5(char* cParam0) //Position: 0x428 / 1064
{
	char* cVar0[64];
	
	switch (cParam0)
	{
		case 0x00000000:
			strcpy(&cVar0, "RIDEABLE_ANIMAL_MEX_Mule01", 64);
			break;
		
		case 0x00000001:
			strcpy(&cVar0, "RIDEABLE_ANIMAL_HorseMangy01", 64);
			break;
		
		case 0x00000002:
			strcpy(&cVar0, "RIDEABLE_ANIMAL_Horse01", 64);
			break;
		
		case 0x00000003:
			strcpy(&cVar0, "RIDEABLE_ANIMAL_Horse03", 64);
			break;
		
		case 0x00000004:
			strcpy(&cVar0, "RIDEABLE_ANIMAL_Horse07", 64);
			break;
		
		case 0x00000005:
			strcpy(&cVar0, "RIDEABLE_ANIMAL_Horse04", 64);
			break;
		
		case 0x00000006:
			strcpy(&cVar0, "RIDEABLE_ANIMAL_Bull01", 64);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_6(int iParam0) //Position: 0x554 / 1364
{
	char* cVar0[64];
	char* cVar16[64];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_8(iParam0) };
	cVar16 = UI_GET_STRING(&cVar0);
	UI_SET_TEXT("MPP_TitleValue", &cVar0);
	if (Function_7())
	{
		cVar17 = &cVar16;
		stradd(&cVar0, "_en", 64);
		cVar16 = UI_GET_STRING(&cVar0);
		NET_GAMER_SETMY_JPN_TITLE(&cVar17);
	}
	Global_122919.f_28 = iParam0;
	strcpy(&Global_122919 + 32, &cVar16, 64);
	UPDATE_STRING_PROFILE_STAT("MpTitleStringId", &cVar16);
	return;
}

bool Function_7() //Position: 0x5D2 / 1490
{
	return HAS_STRING_TABLE_LOADED("jp");
}

struct<64> Function_8(int iParam0) //Position: 0x5E0 / 1504
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = (iParam0 / 1000);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_131807 + 1344[iVar017]) };
	straddi(&Var1, (iParam0 % 1000), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var1;
}

var Function_9(int iParam0) //Position: 0x612 / 1554
{
	int iVar0;
	bool bVar1;
	
	bVar1 = true;
	while (bVar1)
	{
		if (iVar0 > 10)
		{
			bVar1 = false;
		}
		else if (iParam0 < (&Global_131807 + 1344[iVar017])->f_128)
		{
			return (iVar0 * 1000 + iParam0);
		}
		iParam0 = (iParam0 - (&Global_131807 + 1344[iVar017])->f_128);
		iVar0++;
	}
	LOG_ERROR("TITLE_UIID_TO_ID didn't get a valid Title UI ID. Returning -1!");
	return 4294967295;
}

struct<64> Function_10(var uParam0) //Position: 0x6AB / 1707
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_8(Function_9(uParam0));
}

void Function_11(var uParam0) //Position: 0x6BB / 1723
{
	struct<4> Var0;
	int iVar4;
	struct<2> Var7;
	struct<2> Var9;
	struct<2> Var12;
	struct<2> Var14;
	struct<2> Var16;
	bool bVar18;
	struct<2> Var19;
	struct<2> Var21;
	char* cVar26[16];
	struct<2> Var30;
	struct<2> Var32;
	struct<2> Var34;
	struct<2> Var36;
	int iVar38;
	struct<2> Var39;
	struct<2> Var41;
	var uVar43;
	struct<2> Var44;
	float fVar46;
	struct<4> Var47;
	var uVar51;
	struct<2> Var52;
	float fVar54;
	var uVar55;
	var uVar56;
	
	iVar4 = 0;
	if (UI_ISACTIVE("MP_XP_RollOver_Popup"))
	{
		if (DECOR_CHECK_STRING(&uParam0, "Param", "RollOver_Yes"))
		{
			UI_ENTER("MP_XP_RollOver_Popup2");
			UI_EXIT("MP_XP_RollOver_Popup");
			UI_ENTER("MP_XP_RollOver_Popup2");
		}
		else if (DECOR_CHECK_STRING(&uParam0, "Param", "RollOver_No"))
		{
			UI_EXIT("MP_XP_RollOver_Popup");
			UI_EXIT("NetworkingLayerOffline");
			UI_ENTER("nPauseMenu");
			UI_SEND_EVENT("pauseStart");
		}
	}
	else if (UI_ISACTIVE("MP_XP_RollOver_Popup2"))
	{
		if (DECOR_CHECK_STRING(&uParam0, "Param", "RollOver_Yes2"))
		{
			Global_132499.f_1476 = 1;
			Function_76(1);
			UI_EXIT("MP_XP_RollOver_Popup2");
			UI_EXIT("NetworkingLayerOffline");
			UI_POP("PauseMenuScene");
		}
		else if (DECOR_CHECK_STRING(&uParam0, "Param", "RollOver_No2"))
		{
			UI_EXIT("MP_XP_RollOver_Popup2");
			UI_EXIT("NetworkingLayerOffline");
			UI_ENTER("nPauseMenu");
			UI_SEND_EVENT("pauseStart");
		}
	}
	else if (UI_ISACTIVE("MP_AvatarQuit"))
	{
		if (DECOR_CHECK_STRING(&uParam0, "Param", "RollOver_Yes"))
		{
			DECOR_SET_BOOL(Function_75(), "AvatarQuit", 1);
			UI_EXIT("MP_AvatarQuit");
		}
	}
	else if (UI_ISACTIVE("MP_BarkerPosseLeave"))
	{
		if (DECOR_CHECK_STRING(&uParam0, "Param", "RollOver_Yes"))
		{
			DECOR_SET_BOOL(Function_74(), "BarkerPosseLeave", 1);
			UI_EXIT("MP_BarkerPosseLeave");
		}
	}
	else if (UI_ISACTIVE("MissionFailedMenu"))
	{
		if (DECOR_CHECK_STRING(&uParam0, "Param", "Restart"))
		{
		}
		if (DECOR_CHECK_STRING(&uParam0, "Param", "cancel"))
		{
		}
		if (DECOR_CHECK_STRING(&uParam0, "Param", "Jump"))
		{
		}
		if (DECOR_CHECK_STRING(&uParam0, "Param", "cancelMission"))
		{
		}
		if (DECOR_CHECK_STRING(&uParam0, "Param", "Jump"))
		{
			if (DECOR_CHECK_EXIST(&Global_54076, "bStartedGY"))
			{
				DECOR_REMOVE(&uParam0, "Param");
				Function_73();
				iVar4 = 0;
				Function_72(StackVal, &Var7, &Var9, Global_53524, Global_53524.f_12, iVar4);
				STREAMING_OVERRIDE_MAIN_POI(Var7, Var9);
				STREAMING_SET_CUTSCENE_MODE(1);
				LOAD_SOFT_SAVE(1);
				UI_EXIT("HudSceneOffline");
				UI_POP("MissionFailedMenu");
			}
			else if (!UI_ISACTIVE("Mission_Failed_Jump_Confirmation_Popup"))
			{
				UI_ENTER("Mission_Failed_Jump_Confirmation_Popup");
				DECOR_REMOVE(&uParam0, "Param");
			}
		}
		if (UI_ISACTIVE("Mission_Failed_Jump_Confirmation_Popup"))
		{
			if (DECOR_CHECK_STRING(&uParam0, "Param", "Jump_No"))
			{
				DECOR_REMOVE(&uParam0, "Param");
				UI_EXIT("Mission_Failed_Jump_Confirmation_Popup");
			}
			if (DECOR_CHECK_STRING(&uParam0, "Param", "Jump_Yes") || Global_98250)
			{
				DECOR_REMOVE(&uParam0, "Param");
				Function_73();
				if (Global_6623 || DECOR_CHECK_EXIST(&Global_54076, "gbStoryMissionRunning"))
				{
					Function_71(1);
					Var0 = { StackVal, StackVal, StackVal, Function_70(Global_53524.f_20) };
					UNK_0xC6E36B1D(&Var0);
					iVar4 = 0;
					Function_69(&bVar18, &iVar4);
					Var16 = Function_69(&bVar18, &iVar4);
					Function_72(StackVal, &Var12, &Var14, Var16, bVar18, iVar4);
					STREAMING_OVERRIDE_MAIN_POI(Var12, Var14);
					STREAMING_SET_CUTSCENE_MODE(1);
				}
				else
				{
					iVar4 = 0;
					Function_72(StackVal, &Var19, &Var21, Global_53524, Global_53524.f_12, iVar4);
					STREAMING_OVERRIDE_MAIN_POI(Var19, Var21);
					STREAMING_SET_CUTSCENE_MODE(1);
				}
				LOAD_SOFT_SAVE(1);
				UI_EXIT("Mission_Failed_Jump_Confirmation_Popup");
				UI_EXIT("HudSceneOffline");
				UI_POP("MissionFailedMenu");
				Function_68();
			}
		}
		if (DECOR_CHECK_STRING(&uParam0, "Param", "CancelMissionPrompt") && !UI_ISACTIVE("Mission_Failed_Cancel_Confirmation_Popup"))
		{
			UI_ENTER("Mission_Failed_Cancel_Confirmation_Popup");
			DECOR_REMOVE(&uParam0, "Param");
		}
		if (UI_ISACTIVE("Mission_Failed_Cancel_Confirmation_Popup"))
		{
			if (DECOR_CHECK_STRING(&uParam0, "Param", "nCancel_No"))
			{
				UI_EXIT("Mission_Failed_Cancel_Confirmation_Popup");
				DECOR_REMOVE(&uParam0, "Param");
			}
		}
		if (DECOR_CHECK_STRING(&uParam0, "Param", "Restart"))
		{
			LOG_MESSAGE("Selected RETRY FROM CHECKPOINT");
			Function_66(11, 1, 0, 0);
			Function_65();
			cVar26 = { StackVal, StackVal, StackVal, Function_63(Global_53524.f_20) };
			stradd(&cVar26, "_Retry", 16);
			UPDATE_PROFILE_STAT(&cVar26, 1.0f, 0);
			if (Global_53524.f_28)
			{
				Var0 = { StackVal, StackVal, StackVal, Function_70(Global_53524.f_20) };
				Function_72(StackVal, &Var30, &Var32, Global_53524, Global_53524.f_12, Global_53524.f_16);
				STREAMING_OVERRIDE_MAIN_POI(Var30, Var32);
				STREAMING_SET_CUTSCENE_MODE(1);
				SET_AMBIENT_FORCE_WAIT_STATE(1);
				UNK_0xC6E36B1D(&Var0);
				LOAD_SOFT_SAVE(1);
			}
			UI_EXIT("HudSceneOffline");
			UI_POP("MissionFailedMenu");
			Function_68();
		}
		else if (DECOR_CHECK_STRING(&uParam0, "Param", "cancelMission"))
		{
			UI_EXIT("Mission_Failed_Cancel_Confirmation_Popup");
			LOG_MESSAGE("Selected CANCEL MISSION");
			Function_58();
			if (!Global_6624)
			{
				Function_72(StackVal, &Var34, &Var36, *(&Global_53524 + 196), Global_53524.f_208, Global_53524.f_212);
				STREAMING_OVERRIDE_MAIN_POI(Var34, Var36);
				STREAMING_SET_CUTSCENE_MODE(1);
				Function_4(&Global_99144, 2);
			}
			if (!LOAD_SOFT_SAVE(0))
			{
				RESET_GAME();
			}
			Function_68();
		}
		else if (DECOR_CHECK_STRING(&uParam0, "Param", "InTransitionComplete"))
		{
			UI_SHOW("MissionFailedPrompts");
			Global_6638 = 1;
			Global_6639 = 0;
			iVar38 = GET_EXP_MODE_PROMPT_STATE();
			if (iVar38 != (3 - 1) && 2 == GET_PLAYER_COMBATMODE())
			{
				PRINTSTRING("Showing Experience Mode Prompt Screen!");
				PRINTNL();
				UI_INCLUDE("MissionFailed_Casual");
			}
			else
			{
				UI_EXCLUDE("MissionFailed_Casual");
			}
		}
		else if (DECOR_CHECK_STRING(&uParam0, "Param", "ExperienceChange_Yes"))
		{
			SET_PLAYER_COMBATMODE(2);
			Global_6656 = 1;
			SET_EXP_MODE_PROMPT_STATE(3);
			UI_EXIT("ExperienceChange");
			UI_EXCLUDE("MissionFailed_Casual");
		}
		else if (DECOR_CHECK_STRING(&uParam0, "Param", "ExperienceChange_No"))
		{
			UI_EXIT("ExperienceChange");
			UI_GOTO("ExperienceChangeDenied");
			UI_EXIT("ExperienceChange");
		}
	}
	else if (UI_ISACTIVE("Wanted_Poster"))
	{
		if (DECOR_CHECK_STRING(&uParam0, "Param", "cancel"))
		{
			UI_EXIT("Wanted_Poster");
		}
	}
	else if (UI_ISACTIVE("DeathScreen"))
	{
		if (DECOR_CHECK_STRING(&uParam0, "Param", "InTransitionComplete"))
		{
			Function_57();
			if (!Function_56(2048))
			{
				iVar4 = 1;
				Function_72(StackVal, &Var39, &Var41, *(&Global_53524 + 196), Global_53524.f_208, Global_53524.f_212);
			}
			else
			{
				Function_54(Function_55(Global_39922[Global_40060.f_4424]));
				Var39 = Function_54(Function_55(Global_39922[Global_40060.f_4424]));
				Function_52(Function_55(Global_39922[Global_40060.f_4424]));
				Var41 = Function_52(Function_55(Global_39922[Global_40060.f_4424]));
			}
			STREAMING_OVERRIDE_MAIN_POI(Var39, Var41);
			STREAMING_SET_CUTSCENE_MODE(1);
			if (!LOAD_SOFT_SAVE(0))
			{
				RESET_GAME();
			}
		}
	}
	else if (UI_ISACTIVE("SaveMenuScene"))
	{
		if (DECOR_CHECK_STRING(&uParam0, "Param", "fileSaveInSelectedSlotBeginNew") || DECOR_CHECK_STRING(&uParam0, "Param", "fileSaveInSelectedSlotBeginOverwrite"))
		{
			if (Function_51(Global_99144, 1))
			{
				Function_50();
			}
			else
			{
				uVar43 = Function_49();
				if (IS_OBJECT_VALID(&uVar43))
				{
					GET_OBJECT_POSITION(&uVar43, &Var44);
					fVar46 = GET_OBJECT_HEADING(&uVar43);
					Function_47(StackVal, Var44, fVar46);
				}
				else
				{
					Function_50();
				}
			}
			Var47 = { StackVal, StackVal, StackVal, Function_43() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var47);
			Function_14();
			if (DECOR_CHECK_STRING(&uParam0, "Param", "fileSaveInSelectedSlotBeginOverwrite"))
			{
				UI_SEND_EVENT("fileSaveInSelectedSlotOverwrite");
			}
			else
			{
				UI_SEND_EVENT("fileSaveInSelectedSlotNew");
			}
		}
		else if ((DECOR_CHECK_STRING(&uParam0, "Param", "fileSelectedSaveSuccess") || DECOR_CHECK_STRING(&uParam0, "Param", "CancelSave")) || DECOR_CHECK_STRING(&uParam0, "Param", "fileNoSaveEvent"))
		{
			if (!Function_51(Global_99144, 1))
			{
				uVar51 = Function_49();
				if (IS_OBJECT_VALID(&uVar51))
				{
					GET_OBJECT_POSITION(&uVar51, &Var52);
					fVar54 = GET_OBJECT_HEADING(&uVar51);
					MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1);
					TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Var52, fVar54, 0, 1, 1);
				}
				else
				{
					LOG_ERROR("No valid wake up flag found!");
					uVar55 = GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0));
					if (IS_GRINGO_VALID(&uVar55))
					{
						GRINGO_DEACTIVATE(&uVar55);
					}
				}
			}
			else
			{
				uVar56 = GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0));
				if (IS_GRINGO_VALID(&uVar56))
				{
					GRINGO_DEACTIVATE(&uVar56);
				}
			}
			UI_EXIT("SaveMenuScene");
			Function_13(&Global_99144, 1);
			Function_12();
			if (DECOR_CHECK_STRING(&uParam0, "Param", "fileSelectedSaveSuccess"))
			{
				Function_66(23, 1, 0, 0);
			}
			UI_POP("nCutscenes");
			HUD_FADE_IN(1,5f, 1065353216);
		}
	}
	return;
}

void Function_12() //Position: 0x1507 / 5383
{
	if (DECOR_CHECK_EXIST(&Global_54076, "CanSaveNowCamp"))
	{
		DECOR_REMOVE(&Global_54076, "CanSaveNowCamp");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "CanSaveNowBed"))
	{
		DECOR_REMOVE(&Global_54076, "CanSaveNowBed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "SAVE_restartFlag"))
	{
		DECOR_REMOVE(&Global_54076, "SAVE_restartFlag");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "CanSaveNowAutoSave"))
	{
		DECOR_REMOVE(&Global_54076, "CanSaveNowAutoSave");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		DECOR_REMOVE(&Global_54076, "bPlayerSleeping");
	}
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x161D / 5661
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_14() //Position: 0x1633 / 5683
{
	Function_41();
	Function_40();
	Function_40();
	Function_39();
	Function_39();
	Function_38();
	Function_38();
	Function_21(0);
	Function_21(0);
	Function_19();
	Function_18();
	Function_17();
	Function_16();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_15();
	return;
}

void Function_15() //Position: 0x167E / 5758
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

void Function_16() //Position: 0x1784 / 6020
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

void Function_17() //Position: 0x17B7 / 6071
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_18() //Position: 0x194A / 6474
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_19() //Position: 0x1B03 / 6915
{
	Function_20(&Global_42918, 1, 0);
	return;
}

void Function_20(struct<2317> Param0) //Position: 0x1B11 / 6929
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_75();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || iParam2)
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
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = iVar8;
					Param0.f_1272 = iVar8;
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
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
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

struct<8> Function_21(int iParam0) //Position: 0x1D2E / 7470
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
					iVar2 = ((Function_37((50 + iVar4)) + Function_37((183 + iVar4))) + Function_37((90 + iVar4)));
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
	Function_22(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_22(int iParam0, bool bParam1, bool bParam2) //Position: 0x1DD5 / 7637
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
		Function_36(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_35(iParam0);
	if (&bParam2)
	{
		Function_23(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_23(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2071 / 8305
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_34(390))), 32);
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
					bVar19 = (Function_33(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_33(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_31(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_28(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_26(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_25(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_24(), &Var9);
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

var Function_24() //Position: 0x26AF / 9903
{
	int iVar0;
	
	return &iVar0;
}

var Function_25(int iParam0) //Position: 0x26B8 / 9912
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_26(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x26C9 / 9929
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_27("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_27("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_27("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_27(char* cParam0) //Position: 0x27C0 / 10176
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_28(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x27DB / 10203
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_30(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_29(Function_30(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_29(int iParam0, int iParam1) //Position: 0x2842 / 10306
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_30(int iParam0, bool bParam1) //Position: 0x2854 / 10324
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_31(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2866 / 10342
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
	if (((Function_32(iParam0) != 19 || Function_32(iParam0) != 17) || Function_32(iParam0) != 10) || Function_32(iParam0) != 9)
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

int Function_32(int iParam0) //Position: 0x299A / 10650
{
	return Global_55480[iParam016].f_96;
}

float Function_33(int iParam0) //Position: 0x29A9 / 10665
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_34(int iParam0) //Position: 0x29E2 / 10722
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_35(int iParam0) //Position: 0x2A1F / 10783
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

int Function_36(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BB9 / 11193
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

int Function_37(bool bParam0) //Position: 0x2DFD / 11773
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_38() //Position: 0x2E3E / 11838
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
		iVar2 = ((Function_37((50 + iVar3) + 15) + Function_37((183 + iVar3) + 15)) + Function_37((90 + iVar3) + 15));
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
	Function_22(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_39() //Position: 0x2EC7 / 11975
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
			iVar2 = ((Function_37((50 + iVar3) + 8) + Function_37((183 + iVar3) + 8)) + Function_37((90 + iVar3) + 8));
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
	Function_22(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_40() //Position: 0x2F5E / 12126
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
		iVar2 = ((Function_37((50 + iVar3)) + Function_37((183 + iVar3))) + Function_37((90 + iVar3)));
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
	Function_22(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_41() //Position: 0x2FDD / 12253
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_42(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_22(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_42(int iParam0, bool bParam1, int iParam2) //Position: 0x301A / 12314
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
	Function_36(iParam0, bParam1, 1);
	Function_35(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_23(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

struct<16> Function_43() //Position: 0x3226 / 12838
{
	int iVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		if (Function_46(iVar0))
		{
			if (iVar1 == 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (Global_116927[iVar06].f_40 < Global_116927[iVar16].f_40)
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == 4294967295)
	{
		return StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16);
	}
	if (Global_21684[Function_44(Global_10966)7].f_32 < Global_116927[iVar16].f_40)
	{
		return StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16);
	}
	return StackVal, StackVal, StackVal, *(&Global_99725[iVar143] + 4);
}

int Function_44(int iParam0) //Position: 0x32C3 / 12995
{
	if (!Function_45(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_45(int iParam0) //Position: 0x32DD / 13021
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x32F3 / 13043
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_47(struct<5> Param0) //Position: 0x3308 / 13064
{
	var uVar0;
	
	Param0.f_4 = (StackVal + 1.0f);
	FIND_GROUND_INTERSECTION(&Param0, 100.0f, &Global_53524, &uVar0);
	Global_53524.f_12 = iParam2;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	Global_53524.f_24 = Global_43788;
	if (Function_48(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	return;
}

bool Function_48(int iParam0) //Position: 0x3364 / 13156
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_49() //Position: 0x337A / 13178
{
	if (DECOR_CHECK_EXIST(&Global_54076, "SAVE_restartFlag"))
	{
		return DECOR_GET_OBJECT(&Global_54076, "SAVE_restartFlag");
	}
	return "";
}

void Function_50() //Position: 0x33BA / 13242
{
	struct<5> Var0;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var0);
	Var0.f_4 = (StackVal + 1.0f);
	FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	Global_53524.f_12 = GET_HEADING(GET_PLAYER_ACTOR(0));
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	Global_53524.f_24 = Global_43788;
	if (Function_48(Global_43788))
	{
	}
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_51(var uParam0, int iParam1) //Position: 0x3429 / 13353
{
	return (uParam0 && iParam1) == 0;
}

struct<8> Function_52(int iParam0) //Position: 0x3436 / 13366
{
	switch (iParam0)
	{
		case 0x00000001:
			return StackVal, Vector(0,005061f, -1,896824f, 0.0f);
			break;
		
		case 0x00000002:
			return StackVal, Vector(0,203854f, -1,967684f, 0.0f);
			break;
		
		case 0x00000003:
			return StackVal, Vector(-0,008377f, -3,10337f, 0.0f);
			break;
		
		case 0x00000004:
			return StackVal, Vector(0,037175f, -0,691499f, 0.0f);
			break;
		
		case 0x00000005:
			return StackVal, Vector(0,170241f, -2,076593f, 0.0f);
			break;
		
		case 0x00000006:
			return StackVal, Vector(0,009774f, 2,701421f, 0.0f);
			break;
	}
	Function_53();
	return StackVal, Function_53();
}

struct<8> Function_53() //Position: 0x34CA / 13514
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_54(int iParam0) //Position: 0x34D4 / 13524
{
	switch (iParam0)
	{
		case 0x00000001:
			return StackVal, Vector(-821,32f, 94,95f, 2435,85f);
			break;
		
		case 0x00000002:
			return StackVal, Vector(-2084,46f, 16,95f, 2601,42f);
			break;
		
		case 0x00000003:
			return StackVal, Vector(771,84f, 80,61f, 1238,88f);
			break;
		
		case 0x00000004:
			return StackVal, Vector(-2653,83f, 31,81f, 4253,71f);
			break;
		
		case 0x00000005:
			return StackVal, Vector(-726,24f, 64,2f, 3296,77f);
			break;
		
		case 0x00000006:
			return StackVal, Vector(-4354,43f, 31,17534f, 4383,22f);
			break;
	}
	Function_53();
	return StackVal, Function_53();
}

int Function_55(int iParam0) //Position: 0x3580 / 13696
{
	if (iParam0 == Global_46816[0])
	{
		return 1;
	}
	if (iParam0 == Global_46760[0])
	{
		return 2;
	}
	if (iParam0 == Global_46914[0])
	{
		return 3;
	}
	if (iParam0 == Global_46866[0])
	{
		return 4;
	}
	if (iParam0 == Global_46894[1])
	{
		return 5;
	}
	if (iParam0 == Global_46850[0])
	{
		return 6;
	}
	return 0;
}

bool Function_56(int iParam0) //Position: 0x35E4 / 13796
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_57() //Position: 0x3602 / 13826
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_SMALL_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_HELP();
	return;
}

void Function_58() //Position: 0x3617 / 13847
{
	struct<161> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_152 = Global_10966;
	Var0.f_156 = Function_37(11);
	Var0.f_160 = Function_59(Function_44(Global_10966));
	if (Var0.f_16)
	{
		Var0.f_16 = 0;
		Var0.f_24 = 0;
		Var0 = Global_10966;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

int Function_59(int iParam0) //Position: 0x3669 / 13929
{
	if (!Function_60(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_60(int iParam0) //Position: 0x3683 / 13955
{
	if (!Function_62(iParam0))
	{
		return 0;
	}
	if (!Function_61(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_61(int iParam0) //Position: 0x36A7 / 13991
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_62(int iParam0) //Position: 0x36BC / 14012
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_63(int iParam0) //Position: 0x36D3 / 14035
{
	char* cVar0[16];
	
	if (!Function_64())
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

bool Function_64() //Position: 0x370D / 14093
{
	if (Function_51(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_65() //Position: 0x3728 / 14120
{
	struct<161> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_152 = 4294967295;
	Var0.f_156 = Function_37(11);
	Var0.f_160 = Function_59(Function_44(Global_10966)) + 1;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

int Function_66(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3764 / 14180
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
	Function_36(iParam0, TO_FLOAT(bParam1), 1);
	Function_35(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_23(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_67(iParam0);
	return 1;
}

void Function_67(int iParam0) //Position: 0x398C / 14732
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

void Function_68() //Position: 0x3A2A / 14890
{
	UI_BUTTON_SET_TEXT("MissionFailed_Retry", "DeathScreen_Restart");
	UI_INCLUDE("MissionFailed_Cancel");
	UI_INCLUDE("MissionFailed_Jump");
	return;
}

struct<8> Function_69(var uParam0, int iParam1) //Position: 0x3A91 / 14993
{
	struct<61> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	uParam0 = Var0.f_56;
	iParam1 = Var0.f_60;
	return StackVal, *(&Var0 + 44);
}

struct<16> Function_70(int iParam0) //Position: 0x3ADF / 15071
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_45(iParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_6667[iParam028] + 16);
}

void Function_71(bool bParam0) //Position: 0x3B10 / 15120
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_68 = bParam0;
	if (bParam0)
	{
		Var0.f_72 = 1;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

var Function_72(var uParam0, var uParam1, struct<2> Param2, bool bParam4, int iParam5) //Position: 0x3B3F / 15167
{
	bool bVar0;
	
	bVar0 = "";
	switch (iParam5)
	{
		case 0x00000000:
			bVar0 = "roam";
			break;
		
		case 0x00000001:
			bVar0 = "interior";
			break;
		
		case 0x00000002:
			bVar0 = "horse";
			break;
		
		case 0x00000003:
			bVar0 = "wagonDefault";
			break;
		
		case 0x00000004:
			bVar0 = "wagonShotgun";
			break;
		
		case 0x00000005:
			bVar0 = "wagonShotgun";
			break;
	}
	PRINTSTRING("GET_GAME_CAMERA_RESET_POSITION_HELPER called with position ");
	PRINTVECTOR(Param2);
	PRINTSTRING(" and heading ");
	PRINTFLOAT(bParam4);
	PRINTSTRING(" and with arc ");
	PRINTSTRING(&bVar0);
	PRINTNL();
	return GET_GAME_CAMERA_RESET_POSITION(&uParam0, &uParam1, Param2, bParam4, &bVar0);
}

void Function_73() //Position: 0x3C71 / 15473
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_136 = StackVal;
	Var0.f_140 = StackVal;
	Var0.f_144 = Global_53349.f_12;
	Var0.f_148 = Global_53349.f_16;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

var Function_74() //Position: 0x3CB4 / 15540
{
	if (!IS_LAYOUTREF_VALID(&Global_124161))
	{
		Global_124161 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return &Global_124161;
}

var Function_75() //Position: 0x3CE6 / 15590
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_76(bool bParam0) //Position: 0x3CFB / 15611
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, 0, 0);
	Function_79(2);
	if (&bParam0)
	{
		Function_79(1);
	}
	else
	{
		Function_77(1);
	}
	Function_14();
	return;
}

void Function_77(int iParam0) //Position: 0x3D85 / 15749
{
	Function_78(&Global_124156, iParam0);
	return;
}

void Function_78(var uParam0, int iParam1) //Position: 0x3D94 / 15764
{
	Function_13(&uParam0, iParam1);
	return;
}

void Function_79(int iParam0) //Position: 0x3DA2 / 15778
{
	Function_80(&Global_124156, iParam0);
	return;
}

void Function_80(var uParam0, int iParam1) //Position: 0x3DB1 / 15793
{
	Function_4(&uParam0, iParam1);
	return;
}

void Function_81(int iParam0) //Position: 0x3DBF / 15807
{
	if (!IS_EVENT_VALID(&iParam0))
	{
		return;
	}
	if (DECOR_CHECK_STRING(&iParam0, "Param", "LaunchAvatarPicker"))
	{
		Function_86();
	}
	else if (DECOR_CHECK_STRING(&iParam0, "Param", "RequestPosseTeleport"))
	{
		Function_85();
	}
	else if (DECOR_CHECK_STRING(&iParam0, "Param", "net.RequestHardSave"))
	{
		Function_79(4);
		Function_76(0);
	}
	else if (DECOR_CHECK_STRING(&iParam0, "Param", "RequestFRDTeleport"))
	{
		if (Function_48(Function_84(1)))
		{
			Function_83(20);
			Function_82(&Global_44085[Function_84(1)9] + 8);
			Global_120008[02] = Function_82(&Global_44085[Function_84(1)9] + 8);
			Global_120008[12] = Global_120008[02];
			Global_120018[02].f_4 = GET_VOLUME_HEADING(&Global_44085[Function_84(1)9] + 8);
			Global_120018[12] = Global_120018[02];
		}
	}
	return;
}

struct<8> Function_82(int iParam0) //Position: 0x3EE5 / 16101
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_83(int iParam0) //Position: 0x3EF7 / 16119
{
	Function_80(&Global_123163 + 84, iParam0);
	return;
}

int Function_84(int iParam0) //Position: 0x3F08 / 16136
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_131396 + 256 + 12)[iParam0];
}

void Function_85() //Position: 0x3F29 / 16169
{
	Function_83(532);
	return;
}

void Function_86() //Position: 0x3F35 / 16181
{
	Global_124888 = 4294967294;
	return;
}

