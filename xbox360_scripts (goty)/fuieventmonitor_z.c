//Decompiled with MagicRDR v1.0
//Function Count : 90
//Statics Count : 12
//Natives Count : 147
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
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iLocal_9 = 31;
	iLocal_10 = 33;
	iLocal_11 = 1;
	ADD_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	while (!IS_LAYOUTREF_VALID(bVar0) && !IS_EXITFLAG_SET())
	{
		bVar0 = FIND_NAMED_LAYOUT("Formations");
		WAIT(false);
	}
	bVar1 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("Formations"));
	if (!IS_ITERATOR_VALID(bVar1))
	{
		LOG_ERROR("Failed to create FUI iterator. Script will not receive FUI events");
		REMOVE_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
		TERMINATE_THIS_SCRIPT();
	}
	else
	{
		ITERATE_ON_OBJECT_TYPE(bVar1, 3);
	}
	while (!IS_EXITFLAG_SET())
	{
		bVar2 = IS_GAME_PAUSED();
		if (bVar2)
		{
			ITERATE_IN_LAYOUT(bVar1, GET_EVENT_LAYOUT());
		}
		else
		{
			ITERATE_IN_SET(bVar1, GET_OBJECTSET_FOR_EVENT_TYPE(75));
		}
		bVar3 = START_OBJECT_ITERATOR(bVar1);
		while (IS_OBJECT_VALID(bVar3))
		{
			Function_1(GET_EVENT_FROM_OBJECT(bVar3));
			bVar3 = OBJECT_ITERATOR_NEXT(bVar1);
		}
		WAIT(false);
	}
	if (IS_ITERATOR_VALID(bVar1))
	{
		DESTROY_ITERATOR(bVar1);
	}
	REMOVE_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0) //Position: 0x119 / 281
{
	int iVar0;
	
	if (!IS_EVENT_VALID(bParam0))
	{
		return;
	}
	iVar0 = GET_EVENT_TYPE(bParam0);
	if (75 != iVar0)
	{
		return;
	}
	Function_84(bParam0);
	if (UI_ISACTIVE("generalMenus"))
	{
		Function_18(bParam0);
	}
	if (UI_ISACTIVE("NetworkingLayerOffline") || UI_ISACTIVE("nPauseMenu"))
	{
		Function_2(bParam0);
	}
	return;
}

void Function_2(bool bParam0) //Position: 0x18B / 395
{
	struct<16> Var0;
	struct<16> Var16;
	int iVar32;
	
	if (DECOR_CHECK_STRING(bParam0, "Param", "pauseStart"))
	{
		if (Function_17())
		{
			if (Global_83864.f_1264 <= 49)
			{
				UI_EXCLUDE("rankUPDescription");
				UI_EXCLUDE("rankMaxDescription");
				UI_INCLUDE("rankDescription");
				UI_INCLUDE("rankProgress");
				UI_INCLUDE("nextRankIcon");
				UI_INCLUDE("nextRankLevel");
			}
			else if (Global_84364.f_708 <= 4)
			{
				UI_EXCLUDE("rankProgress");
				UI_EXCLUDE("nextRankIcon");
				UI_EXCLUDE("nextRankLevel");
				UI_EXCLUDE("rankDescription");
				UI_EXCLUDE("rankMaxDescription");
				UI_INCLUDE("rankUPDescription");
			}
			else if (Global_84364.f_708 > 4)
			{
				UI_EXCLUDE("rankProgress");
				UI_EXCLUDE("nextRankIcon");
				UI_EXCLUDE("nextRankLevel");
				UI_EXCLUDE("rankUPDescription");
				UI_EXCLUDE("rankDescription");
				UI_INCLUDE("rankMaxDescription");
			}
			UI_INCLUDE("NetTab_ProfileTitles");
			UI_INCLUDE("NetTab_Profile");
			Function_11();
		}
		else
		{
			UI_EXCLUDE("NetTab_ProfileTitles");
			UI_EXCLUDE("NetTab_Profile");
		}
	}
	if (UI_ISACTIVE("Net_titles"))
	{
		if (DECOR_CHECK_STRING(bParam0, "Param", "Title_Selected"))
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
		if (DECOR_CHECK_STRING(bParam0, "Param", "Prestige") && Global_84364.f_708 > 4)
		{
			UI_TRANSITION_TO("MP_XP_RollOver_Popup");
		}
		if (DECOR_CHECK_STRING(bParam0, "Param", "Mount_Selected"))
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_5(UI_GET_SELECTED_INDEX("Net_Profile_Mount_Select", 0)) };
			Global_83864.f_1284 = GET_ACTOR_ENUM_FROM_STRING(&Var16);
			Function_3(Global_83864.f_1284, 0, 1);
			UI_EXIT("NetworkingLayerOffline");
			UI_ENTER("nPauseMenu");
		}
		if (DECOR_CHECK_STRING(bParam0, "Param", "Prestige_Opt"))
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

void Function_3(var uParam0, bool bParam1, bool bParam2) //Position: 0x5A2 / 1442
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_4(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_4(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x5CF / 1487
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

struct<64> Function_5(char* cParam0) //Position: 0x5DE / 1502
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

void Function_6(int iParam0) //Position: 0x70A / 1802
{
	char* cVar0[64];
	char* cVar16;
	char* cVar17;
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_8(iParam0) };
	cVar16 = UI_GET_STRING(&cVar0);
	UI_SET_TEXT("MPP_TitleValue", &cVar0);
	if (NET_GET_PLAYMODE() == 1)
	{
		NET_GAMER_SET_TITLE(GET_LOCAL_SLOT(), cVar16);
	}
	if (Function_7())
	{
		cVar17 = cVar16;
		stradd(&cVar0, "_en", 64);
		cVar16 = UI_GET_STRING(&cVar0);
		NET_GAMER_SETMY_JPN_TITLE(cVar17);
	}
	Global_78480.f_28 = iParam0;
	strcpy(&Global_78480 + 32, cVar16, 64);
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_28 = iParam0;
		strcpy(&Global_76943[GET_LOCAL_SLOT()96] + 32, cVar16, 64);
	}
	UPDATE_STRING_PROFILE_STAT("MpTitleStringId", cVar16);
	return;
}

bool Function_7() //Position: 0x7B2 / 1970
{
	return HAS_STRING_TABLE_LOADED("jp");
}

struct<64> Function_8(int iParam0) //Position: 0x7C0 / 1984
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = (iParam0 / 1000);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_83864 + 1288[iVar017]) };
	straddi(&Var1, (iParam0 % 1000), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var1;
}

var Function_9(int iParam0) //Position: 0x7F2 / 2034
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
		else if (iParam0 < (&Global_83864 + 1288[iVar017])->f_64)
		{
			return (iVar0 * 1000 + iParam0);
		}
		iParam0 = (iParam0 - (&Global_83864 + 1288[iVar017])->f_64);
		iVar0++;
	}
	LOG_ERROR("TITLE_UIID_TO_ID didn't get a valid Title UI ID. Returning -1!");
	return 4294967295;
}

struct<64> Function_10(var uParam0) //Position: 0x88B / 2187
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_8(Function_9(uParam0));
}

void Function_11() //Position: 0x89B / 2203
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<8> Var5;
	bool bVar13;
	bool bVar14;
	struct<8> Var15;
	struct<8> Var23;
	
	Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_83864.f_1264, 0, 1, 0) };
	UI_SET_TEXT("MPP_MountValue", GET_ACTOR_ENUM_STRING_FROM_ENUM(Global_83864.f_1284));
	UI_TEXTURE_SET_NAME("AvatarImage", &Global_76854);
	UI_SET_TEXT("AvatarName", &Global_76854);
	UI_TEXTURE_SET_NAME("currentRankIconTexture", &Var5);
	if (Global_83864.f_1264 != 49 && Global_84364.f_708 != 4)
	{
		UI_LABEL_SET_VALUE("prestigeStars", 5);
	}
	else
	{
		UI_LABEL_SET_VALUE("prestigeStars", Global_84364.f_708);
	}
	if (Global_83864.f_1264 <= 49)
	{
		UI_SHOW("rankProgress");
		UI_SHOW("nextRankIcon");
		UI_SHOW("nextRankLevel");
		bVar0 = Global_83864.f_1264 + 1;
		bVar1 = Global_83864.f_1264 + 2;
		fVar3 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
		bVar4 = (Global_83864[Global_83864.f_1264 + 16] - Function_14(487));
		fVar2 = ((fVar3 - bVar4) / fVar3);
		UI_SET_STRING("MMP_nxtLvl", I2STR(bVar1));
		UI_SET_STRING("MMP_deltaXP", I2STR(ROUND(bVar4)));
		bVar13 = Function_12(bVar0);
		bVar14 = Function_12(bVar1);
		UI_SET_TEXT("currentRankLevel", bVar13);
		UI_SET_TEXT("nextRankLevel", bVar14);
		Var15 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_83864.f_1264, 0, 0, 1) };
		UI_TEXTURE_SET_NAME("currentRankIcon", &Var15);
		Var15 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_83864.f_1264 + 1, 0, 0, 1) };
		UI_TEXTURE_SET_NAME("nextRankIcon", &Var15);
		UI_SET_PROGRESS_BAR_VAL("rankProgress", fVar2);
	}
	else
	{
		UI_HIDE("rankProgress");
		UI_HIDE("nextRankIcon");
		UI_HIDE("nextRankLevel");
		bVar0 = Global_83864.f_1264 + 1;
		UI_SET_TEXT("currentRankLevel", Function_12(bVar0));
		Var23 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
		UI_TEXTURE_SET_NAME("currentRankIcon", &Var23);
	}
	return;
}

var Function_12(bool bParam0) //Position: 0xB57 / 2903
{
	bool bVar0;
	
	bVar0 = Function_13();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_13() //Position: 0xB6E / 2926
{
	Global_6285 = (Global_6285 + 1 % 10);
	switch (Global_6285)
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

float Function_14(int iParam0) //Position: 0xC2A / 3114
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

struct<32> Function_15(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xC63 / 3171
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_16("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_16(char* cParam0, bool bParam1) //Position: 0xD58 / 3416
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_17() //Position: 0xD71 / 3441
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_18(bool bParam0) //Position: 0xD7A / 3450
{
	struct<4> Var0;
	int iVar4;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	bool bVar24;
	vector3 vVar25;
	vector3 vVar28;
	char* cVar35[16];
	vector3 vVar39;
	vector3 vVar42;
	vector3 vVar45;
	vector3 vVar48;
	int iVar51;
	vector3 vVar52;
	vector3 vVar55;
	bool bVar58;
	vector3 vVar59;
	float fVar62;
	struct<4> Var63;
	bool bVar67;
	vector3 vVar68;
	float fVar71;
	bool bVar72;
	bool bVar73;
	
	iVar4 = 0;
	if (UI_ISACTIVE("MP_XP_RollOver_Popup"))
	{
		if (DECOR_CHECK_STRING(bParam0, "Param", "RollOver_Yes"))
		{
			UI_ENTER("MP_XP_RollOver_Popup2");
			UI_EXIT("MP_XP_RollOver_Popup");
			UI_ENTER("MP_XP_RollOver_Popup2");
		}
		else if (DECOR_CHECK_STRING(bParam0, "Param", "RollOver_No"))
		{
			UI_EXIT("MP_XP_RollOver_Popup");
			UI_EXIT("NetworkingLayerOffline");
			UI_ENTER("nPauseMenu");
			UI_SEND_EVENT("pauseStart");
		}
	}
	else if (UI_ISACTIVE("MP_XP_RollOver_Popup2"))
	{
		if (DECOR_CHECK_STRING(bParam0, "Param", "RollOver_Yes2"))
		{
			Global_84364.f_744 = 1;
			Function_79(1);
			UI_EXIT("MP_XP_RollOver_Popup2");
			UI_EXIT("NetworkingLayerOffline");
			UI_POP("PauseMenuScene");
		}
		else if (DECOR_CHECK_STRING(bParam0, "Param", "RollOver_No2"))
		{
			UI_EXIT("MP_XP_RollOver_Popup2");
			UI_EXIT("NetworkingLayerOffline");
			UI_ENTER("nPauseMenu");
			UI_SEND_EVENT("pauseStart");
		}
	}
	else if (UI_ISACTIVE("MP_AvatarQuit"))
	{
		if (DECOR_CHECK_STRING(bParam0, "Param", "RollOver_Yes"))
		{
			DECOR_SET_BOOL(Function_78(), "AvatarQuit", true);
			UI_EXIT("MP_AvatarQuit");
		}
	}
	else if (UI_ISACTIVE("MP_BarkerPosseLeave"))
	{
		if (DECOR_CHECK_STRING(bParam0, "Param", "RollOver_Yes"))
		{
			DECOR_SET_BOOL(Function_77(), "BarkerPosseLeave", true);
			UI_EXIT("MP_BarkerPosseLeave");
		}
	}
	else if (UI_ISACTIVE("MissionFailedMenu"))
	{
		if (DECOR_CHECK_STRING(bParam0, "Param", "Restart"))
		{
		}
		if (DECOR_CHECK_STRING(bParam0, "Param", "cancel"))
		{
		}
		if (DECOR_CHECK_STRING(bParam0, "Param", "Jump"))
		{
		}
		if (DECOR_CHECK_STRING(bParam0, "Param", "cancelMission"))
		{
		}
		if (DECOR_CHECK_STRING(bParam0, "Param", "Jump"))
		{
			if (DECOR_CHECK_EXIST(Global_34573, "bStartedGY"))
			{
				DECOR_REMOVE(bParam0, "Param");
				Function_76();
				iVar4 = 0;
				Function_75(StackVal, StackVal, &vVar8, &vVar11, Global_34165, Global_34165.f_12, iVar4);
				STREAMING_OVERRIDE_MAIN_POI(vVar8, vVar11);
				STREAMING_SET_CUTSCENE_MODE(1);
				LOAD_SOFT_SAVE(1);
				UI_EXIT("HudSceneOffline");
				UI_POP("MissionFailedMenu");
			}
			else if (!UI_ISACTIVE("Mission_Failed_Jump_Confirmation_Popup"))
			{
				UI_ENTER("Mission_Failed_Jump_Confirmation_Popup");
				DECOR_REMOVE(bParam0, "Param");
			}
		}
		if (UI_ISACTIVE("Mission_Failed_Jump_Confirmation_Popup"))
		{
			if (DECOR_CHECK_STRING(bParam0, "Param", "Jump_No"))
			{
				DECOR_REMOVE(bParam0, "Param");
				UI_EXIT("Mission_Failed_Jump_Confirmation_Popup");
			}
			if (DECOR_CHECK_STRING(bParam0, "Param", "Jump_Yes") || Global_62478)
			{
				DECOR_REMOVE(bParam0, "Param");
				Function_76();
				if (Global_3380 || DECOR_CHECK_EXIST(Global_34573, "gbStoryMissionRunning"))
				{
					Function_74(1);
					Var0 = { StackVal, StackVal, StackVal, Function_73(Global_34165.f_20) };
					UNK_0xC6E36B1D(&Var0);
					iVar4 = 0;
					Function_72(&bVar24, &iVar4);
					vVar21 = { StackVal, StackVal, Function_72(&bVar24, &iVar4) };
					Function_75(StackVal, StackVal, &vVar15, &vVar18, vVar21, bVar24, iVar4);
					STREAMING_OVERRIDE_MAIN_POI(vVar15, vVar18);
					STREAMING_SET_CUTSCENE_MODE(1);
				}
				else
				{
					iVar4 = 0;
					Function_75(StackVal, StackVal, &vVar25, &vVar28, Global_34165, Global_34165.f_12, iVar4);
					STREAMING_OVERRIDE_MAIN_POI(vVar25, vVar28);
					STREAMING_SET_CUTSCENE_MODE(1);
				}
				LOAD_SOFT_SAVE(1);
				UI_EXIT("Mission_Failed_Jump_Confirmation_Popup");
				UI_EXIT("HudSceneOffline");
				UI_POP("MissionFailedMenu");
				Function_71();
			}
		}
		if (DECOR_CHECK_STRING(bParam0, "Param", "CancelMissionPrompt") && !UI_ISACTIVE("Mission_Failed_Cancel_Confirmation_Popup"))
		{
			UI_ENTER("Mission_Failed_Cancel_Confirmation_Popup");
			DECOR_REMOVE(bParam0, "Param");
		}
		if (UI_ISACTIVE("Mission_Failed_Cancel_Confirmation_Popup"))
		{
			if (DECOR_CHECK_STRING(bParam0, "Param", "nCancel_No"))
			{
				UI_EXIT("Mission_Failed_Cancel_Confirmation_Popup");
				DECOR_REMOVE(bParam0, "Param");
			}
		}
		if (DECOR_CHECK_STRING(bParam0, "Param", "Restart"))
		{
			LOG_MESSAGE("Selected RETRY FROM CHECKPOINT");
			Function_70(11, 1, 0, 0);
			Function_69();
			cVar35 = { StackVal, StackVal, StackVal, Function_67(Global_34165.f_20) };
			stradd(&cVar35, "_Retry", 16);
			UPDATE_PROFILE_STAT(&cVar35, 1.0f, 0);
			if (Global_34165.f_28)
			{
				Var0 = { StackVal, StackVal, StackVal, Function_73(Global_34165.f_20) };
				Function_75(StackVal, StackVal, &vVar39, &vVar42, Global_34165, Global_34165.f_12, Global_34165.f_16);
				STREAMING_OVERRIDE_MAIN_POI(vVar39, vVar42);
				STREAMING_SET_CUTSCENE_MODE(1);
				SET_AMBIENT_FORCE_WAIT_STATE(1);
				UNK_0xC6E36B1D(&Var0);
				LOAD_SOFT_SAVE(1);
			}
			UI_EXIT("HudSceneOffline");
			UI_POP("MissionFailedMenu");
			Function_71();
		}
		else if (DECOR_CHECK_STRING(bParam0, "Param", "cancelMission"))
		{
			UI_EXIT("Mission_Failed_Cancel_Confirmation_Popup");
			LOG_MESSAGE("Selected CANCEL MISSION");
			Function_62();
			if (!Global_3381)
			{
				Function_75(StackVal, StackVal, &vVar45, &vVar48, *(&Global_34165 + 144), Global_34165.f_156, Global_34165.f_160);
				STREAMING_OVERRIDE_MAIN_POI(vVar45, vVar48);
				STREAMING_SET_CUTSCENE_MODE(1);
				Function_4(&Global_63095, 2);
			}
			if (!LOAD_SOFT_SAVE(0))
			{
				RESET_GAME();
			}
			Function_71();
		}
		else if (DECOR_CHECK_STRING(bParam0, "Param", "InTransitionComplete"))
		{
			if (!Function_17())
			{
				UI_SHOW("MissionFailedPrompts");
				Global_3395 = 1;
				Global_3396 = 0;
				iVar51 = GET_EXP_MODE_PROMPT_STATE();
				if (iVar51 != (3 - 1) && 2 == GET_PLAYER_COMBATMODE())
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
		}
		else if (DECOR_CHECK_STRING(bParam0, "Param", "ExperienceChange_Yes"))
		{
			SET_PLAYER_COMBATMODE(2);
			Global_3413 = 1;
			SET_EXP_MODE_PROMPT_STATE(3);
			UI_EXIT("ExperienceChange");
			UI_EXCLUDE("MissionFailed_Casual");
		}
		else if (DECOR_CHECK_STRING(bParam0, "Param", "ExperienceChange_No"))
		{
			UI_EXIT("ExperienceChange");
			UI_GOTO("ExperienceChangeDenied");
			UI_EXIT("ExperienceChange");
		}
	}
	else if (UI_ISACTIVE("Wanted_Poster"))
	{
		if (DECOR_CHECK_STRING(bParam0, "Param", "cancel"))
		{
			UI_EXIT("Wanted_Poster");
		}
	}
	else if (UI_ISACTIVE("DeathScreen"))
	{
		if (DECOR_CHECK_STRING(bParam0, "Param", "InTransitionComplete"))
		{
			Function_61();
			if (!Function_60(2048))
			{
				iVar4 = 1;
				Function_75(StackVal, StackVal, &vVar52, &vVar55, *(&Global_34165 + 144), Global_34165.f_156, Global_34165.f_160);
			}
			else
			{
				Function_58(Function_59(Global_26316[Global_26401.f_2216]));
				vVar52 = { StackVal, StackVal, Function_58(Function_59(Global_26316[Global_26401.f_2216])) };
				Function_56(Function_59(Global_26316[Global_26401.f_2216]));
				vVar55 = { StackVal, StackVal, Function_56(Function_59(Global_26316[Global_26401.f_2216])) };
			}
			STREAMING_OVERRIDE_MAIN_POI(vVar52, vVar55);
			STREAMING_SET_CUTSCENE_MODE(1);
			if (!LOAD_SOFT_SAVE(0))
			{
				RESET_GAME();
			}
		}
	}
	else if (UI_ISACTIVE("SaveMenuScene"))
	{
		if (DECOR_CHECK_STRING(bParam0, "Param", "fileSaveInSelectedSlotBeginNew") || DECOR_CHECK_STRING(bParam0, "Param", "fileSaveInSelectedSlotBeginOverwrite"))
		{
			if (Function_55(Global_63095, 1))
			{
				Function_54();
			}
			else
			{
				bVar58 = Function_53();
				if (IS_OBJECT_VALID(bVar58))
				{
					GET_OBJECT_POSITION(bVar58, &vVar59);
					fVar62 = GET_OBJECT_HEADING(bVar58);
					Function_51(StackVal, StackVal, vVar59, fVar62);
				}
				else
				{
					Function_54();
				}
			}
			Var63 = { StackVal, StackVal, StackVal, Function_47() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var63);
			Function_21();
			if (DECOR_CHECK_STRING(bParam0, "Param", "fileSaveInSelectedSlotBeginOverwrite"))
			{
				UI_SEND_EVENT("fileSaveInSelectedSlotOverwrite");
			}
			else
			{
				UI_SEND_EVENT("fileSaveInSelectedSlotNew");
			}
		}
		else if ((DECOR_CHECK_STRING(bParam0, "Param", "fileSelectedSaveSuccess") || DECOR_CHECK_STRING(bParam0, "Param", "CancelSave")) || DECOR_CHECK_STRING(bParam0, "Param", "fileNoSaveEvent"))
		{
			if (!Function_55(Global_63095, 1))
			{
				bVar67 = Function_53();
				if (IS_OBJECT_VALID(bVar67))
				{
					GET_OBJECT_POSITION(bVar67, &vVar68);
					fVar71 = GET_OBJECT_HEADING(bVar67);
					MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
					TELEPORT_ACTOR_WITH_HEADING(Global_34573, vVar68, fVar71, 0, 1, 1);
				}
				else
				{
					LOG_ERROR("No valid wake up flag found!");
					bVar72 = GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0));
					if (IS_GRINGO_VALID(bVar72))
					{
						GRINGO_DEACTIVATE(bVar72);
					}
				}
			}
			else
			{
				bVar73 = GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0));
				if (IS_GRINGO_VALID(bVar73))
				{
					GRINGO_DEACTIVATE(bVar73);
				}
			}
			UI_EXIT("SaveMenuScene");
			Function_20(&Global_63095, 1);
			Function_19();
			if (DECOR_CHECK_STRING(bParam0, "Param", "fileSelectedSaveSuccess"))
			{
				Function_70(23, 1, 0, 0);
			}
			UI_POP("nCutscenes");
			HUD_FADE_IN(1.5f, 1065353216);
		}
	}
	return;
}

void Function_19() //Position: 0x1B96 / 7062
{
	if (DECOR_CHECK_EXIST(Global_34573, "CanSaveNowCamp"))
	{
		DECOR_REMOVE(Global_34573, "CanSaveNowCamp");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "CanSaveNowBed"))
	{
		DECOR_REMOVE(Global_34573, "CanSaveNowBed");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "SAVE_restartFlag"))
	{
		DECOR_REMOVE(Global_34573, "SAVE_restartFlag");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "CanSaveNowAutoSave"))
	{
		DECOR_REMOVE(Global_34573, "CanSaveNowAutoSave");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		DECOR_REMOVE(Global_34573, "bPlayerSleeping");
	}
	return;
}

void Function_20(var uParam0, int iParam1) //Position: 0x1CA2 / 7330
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_21() //Position: 0x1CB5 / 7349
{
	Function_45();
	Function_44();
	Function_44();
	Function_43();
	Function_43();
	Function_42();
	Function_42();
	Function_28(0);
	Function_28(0);
	if (!Function_17())
	{
		Function_26();
		Function_25();
		Function_24();
		Function_23();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_22();
	return;
}

void Function_22() //Position: 0x1D07 / 7431
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

void Function_23() //Position: 0x1E0D / 7693
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

void Function_24() //Position: 0x1E40 / 7744
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
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_25() //Position: 0x1FCE / 8142
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
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_26() //Position: 0x2182 / 8578
{
	Function_27(&Global_28260, 1, 0);
	return;
}

void Function_27(int iParam0, bool bParam1, int iParam2) //Position: 0x2190 / 8592
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_78();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || iParam2)
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
				if (GET_ITEM_EQUIPSLOT(iVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
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

struct<8> Function_28(int iParam0) //Position: 0x2381 / 9089
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
					iVar2 = ((Function_41((50 + iVar4)) + Function_41((183 + iVar4))) + Function_41((90 + iVar4)));
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
	Function_29(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_29(int iParam0, bool bParam1, bool bParam2) //Position: 0x2427 / 9255
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
		Function_40(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_39(iParam0);
	if (bParam2)
	{
		Function_30(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_30(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x26C2 / 9922
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_38(390))), 32);
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
					bVar19 = (Function_14(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_14(iParam0) + bParam2);
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
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_15(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_32(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_31(), &Var9);
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

var Function_31() //Position: 0x2CEF / 11503
{
	int iVar0;
	
	return iVar0;
}

var Function_32(int iParam0) //Position: 0x2CF7 / 11511
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

void Function_33(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2D08 / 11528
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_35(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_34(Function_35(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_34(int iParam0, int iParam1) //Position: 0x2D6D / 11629
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_35(int iParam0, bool bParam1) //Position: 0x2D7F / 11647
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_36(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2D91 / 11665
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

int Function_37(int iParam0) //Position: 0x2EC1 / 11969
{
	return Global_35278[iParam020].f_48;
}

var Function_38(int iParam0) //Position: 0x2ED0 / 11984
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_39(int iParam0) //Position: 0x2F0D / 12045
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

int Function_40(int iParam0, bool bParam1, bool bParam2) //Position: 0x30A7 / 12455
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

int Function_41(bool bParam0) //Position: 0x32EB / 13035
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_42() //Position: 0x332C / 13100
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
		iVar2 = ((Function_41((50 + iVar3) + 15) + Function_41((183 + iVar3) + 15)) + Function_41((90 + iVar3) + 15));
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
	Function_29(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_43() //Position: 0x33B5 / 13237
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
			iVar2 = ((Function_41((50 + iVar3) + 8) + Function_41((183 + iVar3) + 8)) + Function_41((90 + iVar3) + 8));
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
	Function_29(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_44() //Position: 0x344C / 13388
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
		iVar2 = ((Function_41((50 + iVar3)) + Function_41((183 + iVar3))) + Function_41((90 + iVar3)));
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
	Function_29(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_45() //Position: 0x34CB / 13515
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_46(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_29(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_46(int iParam0, bool bParam1, int iParam2) //Position: 0x3504 / 13572
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
	Function_40(iParam0, bParam1, 1);
	Function_39(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_30(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

struct<16> Function_47() //Position: 0x370E / 14094
{
	int iVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		if (Function_50(iVar0))
		{
			if (iVar1 == 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (Global_74542[iVar010].f_32 < Global_74542[iVar110].f_32)
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == 4294967295)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	if (Global_13172[Function_48(Global_6269)11].f_32 < Global_74542[iVar110].f_32)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	return StackVal, StackVal, StackVal, *(&Global_63541[iVar155] + 4);
}

int Function_48(int iParam0) //Position: 0x37AA / 14250
{
	if (!Function_49(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_49(int iParam0) //Position: 0x37C4 / 14276
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_50(int iParam0) //Position: 0x37DA / 14298
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_51(struct<5> Param0) //Position: 0x37EF / 14319
{
	var uVar0;
	
	Param0.f_4 = (StackVal + 1.0f);
	FIND_GROUND_INTERSECTION(&Param0, 100.0f, &Global_34165, &uVar0);
	Global_34165.f_12 = uParam3;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_24 = Global_29005;
	if (Function_52(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
}

bool Function_52(int iParam0) //Position: 0x384C / 14412
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_53() //Position: 0x3862 / 14434
{
	if (DECOR_CHECK_EXIST(Global_34573, "SAVE_restartFlag"))
	{
		return DECOR_GET_OBJECT(Global_34573, "SAVE_restartFlag");
	}
	return "";
}

void Function_54() //Position: 0x38A0 / 14496
{
	struct<5> Var0;
	
	if (Function_17())
	{
		Global_34165 = { StackVal, StackVal, Global_76888[03] };
		Global_34165.f_12 = StackVal;
	}
	else
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		Var0.f_4 = (StackVal + 1.0f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_34165, &uVar3);
		Global_34165.f_12 = GET_HEADING(GET_PLAYER_ACTOR(0));
	}
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_24 = Global_29005;
	if (Function_52(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_55(var uParam0, int iParam1) //Position: 0x3933 / 14643
{
	return (uParam0 && iParam1) == 0;
}

vector3 Function_56(int iParam0) //Position: 0x3940 / 14656
{
	switch (iParam0)
	{
		case 0x00000001:
			return 0.005061f, -1.896824f, 0.0f;
			break;
		
		case 0x00000002:
			return 0.203854f, -1.967684f, 0.0f;
			break;
		
		case 0x00000003:
			return -0.008377f, -3.10337f, 0.0f;
			break;
		
		case 0x00000004:
			return 0.037175f, -0.691499f, 0.0f;
			break;
		
		case 0x00000005:
			return 0.170241f, -2.076593f, 0.0f;
			break;
		
		case 0x00000006:
			return 0.009774f, 2.701421f, 0.0f;
			break;
	}
	Function_57();
	return StackVal, StackVal, Function_57();
}

vector3 Function_57() //Position: 0x39CE / 14798
{
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_58(int iParam0) //Position: 0x39D7 / 14807
{
	switch (iParam0)
	{
		case 0x00000001:
			return -821.32f, 94.95f, 2435.85f;
			break;
		
		case 0x00000002:
			return -2084.46f, 16.95f, 2601.42f;
			break;
		
		case 0x00000003:
			return 771.84f, 80.61f, 1238.88f;
			break;
		
		case 0x00000004:
			return -2653.83f, 31.81f, 4253.71f;
			break;
		
		case 0x00000005:
			return -726.24f, 64.2f, 3296.77f;
			break;
		
		case 0x00000006:
			return -4354.43f, 31.17534f, 4383.22f;
			break;
	}
	Function_57();
	return StackVal, StackVal, Function_57();
}

int Function_59(int iParam0) //Position: 0x3A7D / 14973
{
	if (iParam0 == Global_30668[0])
	{
		return 1;
	}
	if (iParam0 == Global_30640[0])
	{
		return 2;
	}
	if (iParam0 == Global_30717[0])
	{
		return 3;
	}
	if (iParam0 == Global_30693[0])
	{
		return 4;
	}
	if (iParam0 == Global_30707[1])
	{
		return 5;
	}
	if (iParam0 == Global_30685[0])
	{
		return 6;
	}
	return 0;
}

bool Function_60(int iParam0) //Position: 0x3AE1 / 15073
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_61() //Position: 0x3AFF / 15103
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_SMALL_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_HELP();
	return;
}

void Function_62() //Position: 0x3B14 / 15124
{
	struct<145> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_136 = Global_6269;
	Var0.f_140 = Function_41(11);
	Var0.f_144 = Function_63(Function_48(Global_6269));
	if (Var0.f_16)
	{
		Var0.f_16 = 0;
		Var0.f_24 = 0;
		Var0 = Global_6269;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

int Function_63(int iParam0) //Position: 0x3B66 / 15206
{
	if (!Function_64(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_64(int iParam0) //Position: 0x3B80 / 15232
{
	if (!Function_66(iParam0))
	{
		return 0;
	}
	if (!Function_65(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_65(int iParam0) //Position: 0x3BA4 / 15268
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_66(int iParam0) //Position: 0x3BB9 / 15289
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_67(int iParam0) //Position: 0x3BD0 / 15312
{
	char* cVar0[16];
	
	if (!Function_68())
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

bool Function_68() //Position: 0x3C0A / 15370
{
	if (Function_55(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_69() //Position: 0x3C25 / 15397
{
	struct<145> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_136 = 4294967295;
	Var0.f_140 = Function_41(11);
	Var0.f_144 = Function_63(Function_48(Global_6269)) + 1;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

int Function_70(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3C61 / 15457
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
	Function_40(iParam0, TO_FLOAT(bParam1), 1);
	Function_39(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_30(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_71() //Position: 0x3E81 / 16001
{
	UI_BUTTON_SET_TEXT("MissionFailed_Retry", "DeathScreen_Restart");
	UI_INCLUDE("MissionFailed_Cancel");
	UI_INCLUDE("MissionFailed_Jump");
	return;
}

vector3 Function_72(var uParam0, int iParam1) //Position: 0x3EE8 / 16104
{
	struct<61> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	*uParam0 = Var0.f_56;
	*iParam1 = Var0.f_60;
	return StackVal, StackVal, *(&Var0 + 44);
}

struct<16> Function_73(int iParam0) //Position: 0x3F34 / 16180
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_49(iParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_3422[iParam040] + 12);
}

void Function_74(bool bParam0) //Position: 0x3F65 / 16229
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_68 = bParam0;
	if (bParam0)
	{
		Var0.f_72 = 1;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

var Function_75(var uParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6) //Position: 0x3F94 / 16276
{
	bool bVar0;
	
	bVar0 = "";
	switch (iParam6)
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
	PRINTVECTOR(vParam2);
	PRINTSTRING(" and heading ");
	PRINTFLOAT(bParam5);
	PRINTSTRING(" and with arc ");
	PRINTSTRING(bVar0);
	PRINTNL();
	return GET_GAME_CAMERA_RESET_POSITION(uParam0, uParam1, vParam2, bParam5, bVar0);
}

void Function_76() //Position: 0x40CA / 16586
{
	struct<133> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_120 = StackVal;
	Var0.f_124 = StackVal;
	Var0.f_128 = Global_34068.f_12;
	Var0.f_132 = Global_34068.f_16;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

var Function_77() //Position: 0x410D / 16653
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

var Function_78() //Position: 0x413C / 16700
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_79(bool bParam0) //Position: 0x4151 / 16721
{
	NET_LOG(1, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_82(2);
	if (bParam0)
	{
		Function_82(1);
	}
	else
	{
		Function_80(1);
	}
	Function_21();
	return;
}

void Function_80(int iParam0) //Position: 0x41DA / 16858
{
	Function_81(&Global_79338, iParam0);
	return;
}

void Function_81(var uParam0, int iParam1) //Position: 0x41E9 / 16873
{
	Function_20(uParam0, iParam1);
	return;
}

void Function_82(int iParam0) //Position: 0x41F6 / 16886
{
	Function_83(&Global_79338, iParam0);
	return;
}

void Function_83(var uParam0, int iParam1) //Position: 0x4205 / 16901
{
	Function_4(uParam0, iParam1);
	return;
}

void Function_84(bool bParam0) //Position: 0x4212 / 16914
{
	if (!IS_EVENT_VALID(bParam0))
	{
		return;
	}
	if (DECOR_CHECK_STRING(bParam0, "Param", "LaunchAvatarPicker"))
	{
		Function_89();
	}
	else if (DECOR_CHECK_STRING(bParam0, "Param", "RequestPosseTeleport"))
	{
		Function_88();
	}
	else if (DECOR_CHECK_STRING(bParam0, "Param", "net.RequestHardSave"))
	{
		Function_82(4);
		Function_79(0);
	}
	else if (DECOR_CHECK_STRING(bParam0, "Param", "RequestFRDTeleport"))
	{
		if (Function_52(Function_87(1)))
		{
			Function_86(20);
			Function_85(StackVal);
			Global_76888[03] = { StackVal, StackVal, Function_85(StackVal) };
			Global_76888[13] = { StackVal, StackVal, Global_76888[03] };
			Global_76895[03].f_4 = GET_VOLUME_HEADING(StackVal);
			Global_76895[13] = { StackVal, StackVal, Global_76895[03] };
		}
	}
	return;
}

vector3 Function_85(bool bParam0) //Position: 0x4334 / 17204
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_86(int iParam0) //Position: 0x4345 / 17221
{
	Function_83(&Global_78617 + 52, iParam0);
	return;
}

int Function_87(int iParam0) //Position: 0x4356 / 17238
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_83591 + 140 + 8)[iParam0];
}

void Function_88() //Position: 0x4376 / 17270
{
	Function_86(532);
	return;
}

void Function_89() //Position: 0x4382 / 17282
{
	Global_79960 = 4294967294;
	return;
}

