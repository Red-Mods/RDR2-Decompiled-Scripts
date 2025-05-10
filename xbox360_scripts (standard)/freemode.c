//Decompiled with MagicRDR v1.0
//Function Count : 489
//Statics Count : 225
//Natives Count : 473
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
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	vector3 vLocal_13 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_16 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_19 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_22 = false;
	float fLocal_23 = 0.0f;
	bool bLocal_24 = false;
	bool bLocal_25 = false;
	bool bLocal_26 = false;
	struct<4> Local_27[10];
	struct<5> Local_68 = { 0, 0, 0, 0, 0 } ;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	bool bLocal_78 = false;
	float fLocal_79 = 0.0f;
	float fLocal_80 = 0.0f;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	struct<8> Local_89 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<509> Local_97 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	char* cVar4[8];
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	iLocal_11 = 0;
	iLocal_12 = 0;
	bLocal_26 = 383;
	iLocal_76 = 0;
	iLocal_77 = 0;
	fLocal_79 = 25.0f;
	fLocal_80 = 25.0f;
	iLocal_88 = 0;
	Function_488(8);
	fVar1 = 0.0f;
	SET_RICH_PRESENCE(1, 0, 0, 0, 0);
	Function_485();
	UI_SET_TEXT("OLNM_ReturnToFM", "mp_fe_resession");
	if (NET_GET_PLAYMODE() == 1)
	{
		UI_EXCLUDE("MULTI_FREE_ROAM");
		UI_MESSAGEBOX_SET_DESCRIPTION("NetConf_AvatarPicker", "mp_avatarpicker_conf_lobby");
	}
	else
	{
		UI_INCLUDE("MULTI_FREE_ROAM");
		UI_MESSAGEBOX_SET_DESCRIPTION("NetConf_AvatarPicker", "mp_avatarpicker_conf");
	}
	UI_EXIT("XpHud");
	Function_484(2);
	Function_483(2192);
	Function_477(0);
	bVar2 = !Function_476("netNoAmbientWorld");
	if (Function_476("mpskiptutorial"))
	{
		Function_484(262144);
	}
	Function_475();
	iVar3 = 0;
	while (iVar3 <= Global_30750)
	{
		DESTROY_POPULATION_SET(Global_30750[iVar3]);
		iVar3++;
	}
	if (Function_474("FREEROAM", &Global_79349, 0))
	{
		Function_464(Global_79349.f_16, &Global_83591, 1);
	}
	NET_CLEAR_RELEVANCY_OVERRIDE();
	if (Global_16524.f_16)
	{
		Function_459(0, 60, 0);
	}
	if (HUD_IS_FADED())
	{
		strcpy(&cVar4, "LS_", 8);
		straddi(&cVar4, RAND_INT_RANGE(true, 13), 8);
		UI_TEXTURE_SET_NAME("LoadingScreenTexture", &cVar4);
		UI_SHOW("LoadingScreenTexture");
	}
	switch (GET_PLAYER_COMBATMODE())
	{
		case 0x00000000:
			Function_458(1572864, 0);
			break;
		
		case 0x00000001:
			Function_458(524288, 0);
			Function_458(1048576, 1);
			break;
		
		case 0x00000002:
			Function_458(524288, 1);
			Function_458(1048576, 0);
			break;
	}
	while (!IS_EXITFLAG_SET() && (UI_ISACTIVE("NetAlert_FailedInviteJoin_NoPlaylist") || UI_ISACTIVE("SG_AutoSaveDisabled")))
	{
		WAIT(false);
	}
	if (((Global_83864.f_1264 > 3 && Global_84364.f_708 != 0) && !Function_457(262144)) && Function_456())
	{
		UI_ENTER("MP_Tutorial");
		Function_484(262144);
		Function_455(0);
	}
	bVar7 = false;
	while (!IS_EXITFLAG_SET() && !bVar7)
	{
		if (HUD_IS_FADED())
		{
			if (!bVar6)
			{
				UI_SET_TEXT("LoadingMissionName", &Global_79349 + 48);
				UI_REFRESH("LoadingMissionName");
				UI_REFRESH("LoadingScreen");
				UI_SET_TEXT("LoadingSpinner", "Common_Null");
				Function_454("mp_tip", 4294967295);
				bVar6 = true;
			}
		}
		else if (bVar6)
		{
			bVar6 = false;
		}
		if (!Function_456())
		{
			Local_97 = 5;
		}
		switch (Local_97)
		{
			case 0x00000000:
				if (!UI_ISACTIVE("MP_Tutorial"))
				{
					Function_455(1);
				}
				break;
			
			case 0x00000001:
				if (Function_452())
				{
					Function_450();
					Function_448();
					Function_445();
					SET_POP_DENSITY_MULTIPLIER(0,6f);
					Function_424(&Local_97 + 20, 1, 0, 1, 0);
					Function_405(&Local_97 + 20, 51346);
					Function_403(&Local_97 + 20, 51319);
					bVar8 = Function_402();
					if (IS_ACTOR_VALID(bVar8))
					{
						Function_401(bVar8);
					}
					Function_400(&Local_97 + 444);
					Function_455(2);
					Function_458(2048, 0);
				}
				break;
			
			case 0x00000002:
				Function_380();
				if (NET_IS_IN_SESSION())
				{
					Function_379();
					Function_455(3);
				}
				else if (Function_377(&Local_97 + 444) < 60.0f)
				{
				}
				break;
			
			case 0x00000003:
				if (Function_376(0))
				{
					Function_372(1, 0, 0);
					Function_458(2048, 1);
					Function_400(&Local_97 + 480);
					Function_400(&iLocal_84);
					if (Function_371(&Local_97 + 444))
					{
						if (Function_377(&Local_97 + 444) <= 30.0f)
						{
						}
					}
					Function_400(&Local_97 + 468);
					Function_370();
					Function_484(2097152);
					Function_369(20485);
					Function_368(7);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					NET_GAMER_ICONS_SHOW_LOCAL(1);
					Function_455(4);
				}
				break;
			
			case 0x00000004:
				Function_324();
				if (Global_83864.f_1276)
				{
					Function_323();
					Function_289();
					Function_255();
					Function_254();
					Function_253();
					Function_252();
					if (Function_251(Global_84364.f_740, 1))
					{
						Function_242();
					}
					Local_89 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_240(Global_83864.f_1264, Global_84364.f_708, 1, 0) };
					Function_239(&Local_89, "Legendary_rank", "Common_Null", "HUD_MP_LEVEL_UP_MASTER", 0, 0, 0);
					PLAY_SOUND_FRONTEND("HUD_MP_UNLOCK_MASTER");
					Function_238(8);
					Function_400(&iLocal_84);
					Global_83864.f_1276 = 0;
				}
				Function_379();
				if (CEIL(Function_377(&iLocal_84)) != bVar0)
				{
					bVar0 = CEIL(Function_377(&iLocal_84));
					Function_224(bVar0);
				}
				Function_218();
				Function_217();
				if (!iLocal_77 && !HUD_IS_FADED())
				{
					iLocal_77 = 1;
					Function_400(&iLocal_81);
				}
				if (Function_216(&iLocal_81, 10.0f))
				{
					NET_GAMER_ICONS_SHOW_LOCAL(0);
				}
				if (!NET_IS_IN_SESSION())
				{
					bVar7 = true;
				}
				if (!Function_457(256) && !Function_457(65536))
				{
					Function_195(27852, 27326);
				}
				Function_191();
				if (bVar2)
				{
					if (Local_97.f_500)
					{
						if (Function_189(1))
						{
							if (IS_POPSET_VALID(Global_30750[0]) && !Function_189(32768))
							{
								Function_187(32768);
							}
							else if (!IS_POPSET_VALID(Global_30750[0]) && Function_189(32768))
							{
								Function_185(32768);
							}
						}
					}
					else if (NET_GET_SESSION_GAMER_COUNT() >= 1 || Function_216(&Local_97 + 480, 20.0f))
					{
						Function_184();
					}
				}
				if (Function_182(1))
				{
					Function_46(&Local_97 + 456, &Local_97 + 20);
					if (Global_3391)
					{
						Local_97.f_496 = 1;
					}
					else if (Function_45(&Local_97 + 468, fLocal_79) || Local_97.f_496)
					{
						if (Function_30(Local_97.f_496, fLocal_80))
						{
							Function_400(&Local_97 + 468);
							Local_97.f_496 = 0;
						}
					}
				}
				else
				{
					(&Local_97 + 20)->f_108 = Global_78617.f_2648;
				}
				Function_380();
				break;
			
			case 0x00000005:
				bVar7 = true;
				break;
		}
		WAIT(false);
	}
	UI_EXIT("MP_Tutorial");
	Function_28(0);
	Function_26();
	Function_25(&iLocal_81);
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	Function_10(&Local_97 + 20);
	UI_EXIT("MPSplash");
	Function_7();
	Function_483(2097152);
	Function_5(1);
	Function_3();
	Function_1();
	if (!UI_ISACTIVE("NetConf_ExitingWait"))
	{
		HUD_FADE_TO_LOADING_SCREEN();
	}
	if (NET_GET_PLAYMODE() != 1)
	{
		NET_SESSION_LEAVE_SESSION();
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x73B / 1851
{
	Function_2(20485);
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		TERMINATE_SCRIPT(Global_26316.f_60);
	}
	if (IS_SCRIPT_VALID(Global_26316.f_64))
	{
		TERMINATE_SCRIPT(Global_26316.f_64);
	}
	return;
}

void Function_2(var uParam0) //Position: 0x76D / 1901
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_3() //Position: 0x78A / 1930
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_4(bVar0, 0);
		}
		bVar0++;
	}
	return;
}

void Function_4(bool bParam0, bool bParam1) //Position: 0x7B1 / 1969
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		NET_GAMER_SET_BLIP_OVERRIDE(bParam0, 393);
	}
	else
	{
		NET_GAMER_SET_BLIP_OVERRIDE(bParam0, 4294967295);
	}
	return;
}

void Function_5(bool bParam0) //Position: 0x7D7 / 2007
{
	Function_458(131072, 0);
	if (!bParam0)
	{
		Function_6("GENMESS_MWPLAYERKILLED", 0);
	}
	return;
}

void Function_6(char* cParam0, bool bParam1) //Position: 0x808 / 2056
{
	int iVar0;
	
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		iVar0 = "";
		if (bParam1)
		{
			iVar0 = cParam0;
		}
		ADD_LINE_TO_CONVERSATION(false, cParam0, iVar0, false, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(false, 0);
	return;
}

void Function_7() //Position: 0x848 / 2120
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Local_27)
	{
		Function_8(iVar0);
		iVar0++;
	}
	return;
}

void Function_8(int iParam0) //Position: 0x866 / 2150
{
	bool bVar0;
	
	if (Function_9(Local_27[iParam04]))
	{
		bVar0 = StackVal;
		if (IS_VOLUME_VALID(bVar0))
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			if (IS_BLIP_VALID(Local_27[iParam04].f_12))
			{
				REMOVE_BLIP(Local_27[iParam04].f_12);
			}
		}
	}
	return;
}

bool Function_9(int iParam0) //Position: 0x8C1 / 2241
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_10(int iParam0) //Position: 0x8D7 / 2263
{
	bool bVar0;
	
	*iParam0 = 0;
	Global_62993 = 0;
	STREAMING_UNLOAD_SCENE();
	Function_22();
	bVar0 = Function_402();
	if (IS_ACTOR_VALID(bVar0))
	{
		DECOR_REMOVE(bVar0, "NoRegen");
		DECOR_REMOVE(bVar0, "NoBleedout");
	}
	if (IS_OBJECT_VALID(iParam0->f_180))
	{
		DESTROY_OBJECT(iParam0->f_180);
	}
	UI_ENABLE("SatchelTab_Weapons");
	UI_ENABLE("PM_Weapons");
	UI_INCLUDE("FameText");
	UI_RESTORE("FameText");
	UI_INCLUDE("SplashObjective");
	UI_RESTORE("SplashObjective");
	if (!Function_457(1))
	{
		UI_EXIT("MPSplash");
	}
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_458(81920, 0);
	Function_458(8388608, 0);
	Function_11(iParam0);
	if (iParam0->f_100 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(iParam0->f_100, 4294967295);
	}
	return;
}

void Function_11(int iParam0) //Position: 0x9DD / 2525
{
	Function_20(iParam0);
	Function_15(iParam0, 0);
	Function_12(32, 0, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	if (IS_SCRIPT_VALID(iParam0->f_84))
	{
		TERMINATE_SCRIPT(iParam0->f_84);
	}
	return;
}

void Function_12(int iParam0, bool bParam1, int iParam2) //Position: 0xA17 / 2583
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_14(&Global_76905 + 132, iParam0);
	}
	else
	{
		Function_13(&Global_76905 + 132, iParam0);
	}
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0xA3F / 2623
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0xA52 / 2642
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_15(int iParam0, bool bParam1) //Position: 0xA61 / 2657
{
	var uVar0;
	
	if (bParam1)
	{
		uVar0 = Function_16(StackVal, StackVal, Function_19(), *(iParam0 + 72), !HUD_IS_FADED());
	}
	if (IS_OBJECT_VALID(iParam0->f_112))
	{
		DESTROY_OBJECT(iParam0->f_112);
	}
	if (bParam1)
	{
		iParam0->f_112 = uVar0;
	}
	if (IS_OBJECT_VALID(iParam0->f_148))
	{
		RELEASE_OBJECT_REF(iParam0->f_148);
	}
	if (IS_VOLUME_VALID(iParam0->f_416))
	{
		REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_416);
		DESTROY_VOLUME(iParam0->f_416);
	}
	if (IS_OBJECT_VALID(iParam0->f_104))
	{
		STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_104);
	}
	if (Function_251(iParam0->f_48, 2))
	{
		Function_13(iParam0 + 48, 2);
	}
	Function_14(iParam0 + 48, 1);
	return;
}

var Function_16(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0xAF2 / 2802
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	var uVar14;
	
	iVar0 = 3;
	if (bParam4)
	{
		iVar1 = 1;
	}
	bVar2 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "", (iVar0 + iVar1), 1);
	vVar5 = { 0.0f, 16.0f, 12.0f };
	vVar11 = { StackVal, StackVal, Vector(vParam1, StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f) };
	if (bParam4)
	{
		GET_CAMERA_CHANNEL_DIRECTION(&uVar14, 0);
		Function_18(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f));
		vVar5 = { StackVal, StackVal, Function_18(&vVar5, (UNK_0x9C40E671(&uVar14) + 15.0f)) };
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, 0);
		Function_17(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar5, vVar11);
		SET_CAMERASHOT_FOV(bVar4, 45.0f);
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(bVar2, 0, 1, 0,5f, 4294967295, 0), 1, 1);
		Function_18(&vVar5, 5.0f);
		vVar5 = { StackVal, StackVal, Function_18(&vVar5, 5.0f) };
	}
	iVar3 = 0;
	while (iVar3 <= iVar0)
	{
		bVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(bVar2, (iVar3 + iVar1));
		Function_18(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		vVar8 = { StackVal, StackVal, Function_18(&vVar5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0)))) };
		Function_17(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar4, vParam1, vVar8, vVar11);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 <= iVar0 * 3)
	{
		CUTSCENEOBJECT_ADD_TRANSITION_LERP(bVar2, ((iVar3 % iVar0) + iVar1), ((iVar3 + 1 % iVar0) + iVar1), 30.0f, iVar3, 1);
		iVar3++;
	}
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(bVar2, ((iVar3 % iVar0) + iVar1), 100);
	PLAY_CUTSCENEOBJECT(bVar2, false, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return bVar2;
}

void Function_17(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7) //Position: 0xC2B / 3115
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 60.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 3.0f);
	SET_CAMERASHOT_POSITION(StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam4, vParam1, *bParam0));
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_TARGET_POSITION(*bParam0, vParam7, 0);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
}

vector3 Function_18(var uParam0, bool bParam1) //Position: 0xC80 / 3200
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

var Function_19() //Position: 0xC9A / 3226
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

void Function_20(int iParam0) //Position: 0xCC9 / 3273
{
	Function_21(iParam0);
	Function_483(1048576);
	return;
}

void Function_21(var uParam0) //Position: 0xCDB / 3291
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(uParam0->f_92))
	{
		RELEASE_SCRIPT_USE_CONTEXT(uParam0->f_92);
	}
	return;
}

void Function_22() //Position: 0xCF2 / 3314
{
	if (Function_24(8))
	{
		Function_23();
	}
	Function_12(8, 0, 1);
	return;
}

void Function_23() //Position: 0xD0A / 3338
{
	Function_12(32768, 1, 0);
	return;
}

bool Function_24(bool bParam0) //Position: 0xD19 / 3353
{
	return Function_251(Global_76905.f_132, bParam0);
}

void Function_25(int iParam0) //Position: 0xD2A / 3370
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_26() //Position: 0xD3E / 3390
{
	Function_27();
	return;
}

void Function_27() //Position: 0xD47 / 3399
{
	if (Function_24(4194304))
	{
		Function_12(4194304, 0, 1);
		UI_SHOW("nMP_Ticker");
		UI_INCLUDE("Reticle");
		UI_INCLUDE("WeaponAmmo");
		UI_ENTER("Reticle");
		UI_RESTORE("WeaponAmmo");
	}
	if (Function_24(8388608))
	{
		Function_12(8388608, 0, 1);
		UI_INCLUDE("Splash_Message");
		UI_INCLUDE("Splash_Objective");
		UI_INCLUDE("Subtitle_Enabler");
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(0))
		{
			UI_SHOW("Splash_Message");
		}
		if (!UI_IS_MESSAGE_QUEUE_EMPTY(2))
		{
			UI_SHOW("Splash_Objective");
		}
		UI_SHOW("Subtitle_Enabler");
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	return;
}

void Function_28(int iParam0) //Position: 0xE50 / 3664
{
	Function_29(&Global_79378, 0, iParam0);
	return;
}

void Function_29(int iParam0, bool bParam1, int iParam2) //Position: 0xE60 / 3680
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
	
	bVar0 = Function_402();
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

bool Function_30(bool bParam0, float fParam1) //Position: 0x1051 / 4177
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	
	bVar0 = Function_402();
	iVar7 = 0;
	if (!Function_41(bVar0, 0, 1, 1, 1, 0, 0, 1, 1))
	{
		if (bParam0)
		{
			return 0;
		}
		return 1;
	}
	Function_40(bVar0);
	vVar1 = { StackVal, StackVal, Function_40(bVar0) };
	Function_39(bVar0);
	vVar4 = { StackVal, StackVal, Function_39(bVar0) };
	if (Function_37(StackVal, StackVal, vVar1))
	{
		Function_32(StackVal, StackVal, vVar1);
		vVar1 = { StackVal, StackVal, Function_32(StackVal, StackVal, vVar1) };
	}
	if (VDIST(vVar1, Global_76888[03]) < fParam1)
	{
		if (Function_31(bVar0))
		{
			iVar8 = GET_MATERIAL_AT_VECTOR(&vVar1);
			if (!(Function_251(iVar8, 1024) || Function_251(iVar8, 512)))
			{
				iVar7 = 1;
			}
		}
	}
	if (iVar7 || bParam0)
	{
		if (!bParam0)
		{
			Global_76888[13] = { StackVal, StackVal, Global_76888[03] };
			Global_76895[13] = { StackVal, StackVal, Global_76895[03] };
		}
		Global_76888[03] = { StackVal, StackVal, vVar1 };
		Global_76895[03] = { StackVal, StackVal, vVar4 };
		if (bParam0)
		{
			Global_76888[13] = { StackVal, StackVal, Global_76888[03] };
			Global_76895[13] = { StackVal, StackVal, Global_76895[03] };
		}
	}
	return 1;
}

bool Function_31(bool bParam0) //Position: 0x1153 / 4435
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_ON_FOOT(bParam0))
	{
		return IS_ACTOR_ON_GROUND(bParam0);
	}
	bVar0 = GET_MOUNT(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		return IS_ACTOR_ON_GROUND(bVar0);
	}
	bVar0 = GET_VEHICLE(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		return IS_ACTOR_ON_GROUND(bVar0);
	}
	return 0;
}

vector3 Function_32(vector3 vParam0) //Position: 0x11A3 / 4515
{
	vector3 vVar0;
	struct<9> Var3;
	
	vVar0 = { StackVal, StackVal, vParam0 };
	if (!Function_37(StackVal, StackVal, vParam0))
	{
		return StackVal, StackVal, vParam0;
	}
	Function_36();
	vVar3 = { StackVal, StackVal, Function_36() };
	iVar6 = Function_35(StackVal, StackVal, vParam0, 0, 0, 1);
	bVar7 = 200.0f;
	if (Function_9(iVar6))
	{
		bVar8 = StackVal;
		if (IS_VOLUME_VALID(bVar8))
		{
			if (GET_OBJECT_TYPE(bVar8) == 9)
			{
				GET_VOLUME_SCALE(StackVal, &vVar3);
			}
		}
		fVar9 = (Function_34(vVar3.x, vVar3.z) + 25.0f);
		bVar7 = Function_34(fVar9, bVar7);
	}
	AMBIENT_RESET_USED_CELLS();
	AMBIENT_RESET_FILTER(1);
	if (Function_9(iVar6))
	{
		AMBIENT_SET_EXCLUSION_VOLUME(StackVal);
	}
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(0.0f, bVar7);
	Function_33(0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(640, 8.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1024, 0.0f, 1);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 5.0f, 0);
	AMBIENT_SET_SLOPE_FILTER(0, 2, 3.0f);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_ONESHOT_QUERIES(0);
	if (AMBIENT_GET_POINT(&vVar10, 0))
	{
		if (!Function_37(StackVal, StackVal, vVar10))
		{
			vVar0 = { StackVal, StackVal, vVar10 };
		}
	}
	return StackVal, StackVal, vVar0;
}

void Function_33(bool bParam0) //Position: 0x12A7 / 4775
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

float Function_34(float fParam0, bool bParam1) //Position: 0x135A / 4954
{
	if (fParam0 < bParam1)
	{
		return fParam0;
	}
	return bParam1;
}

var Function_35(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x136D / 4973
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

vector3 Function_36() //Position: 0x1408 / 5128
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_37(vector3 vParam0) //Position: 0x1411 / 5137
{
	var uVar0[8];
	int iVar9;
	
	Function_38(&uVar0);
	iVar9 = 0;
	while (iVar9 <= 8)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				return 1;
			}
		}
		iVar9++;
	}
	return 0;
}

void Function_38(int iParam0) //Position: 0x1462 / 5218
{
	(*iParam0)[0] = Global_30640[2];
	(*iParam0)[1] = Global_30658[0];
	(*iParam0)[2] = Global_30658[3];
	(*iParam0)[3] = Global_30658[2];
	(*iParam0)[4] = Global_30679[1];
	(*iParam0)[5] = Global_30668[2];
	(*iParam0)[6] = Global_30685[2];
	(*iParam0)[7] = Global_30685[1];
	return;
}

vector3 Function_39(bool bParam0) //Position: 0x14C0 / 5312
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_40(bool bParam0) //Position: 0x14E7 / 5351
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_41(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x14F8 / 5368
{
	int iVar0;
	
	if (bParam1)
	{
		Function_44(&iVar0, 1);
	}
	if (bParam2)
	{
		Function_44(&iVar0, 2);
	}
	if (bParam3)
	{
		Function_44(&iVar0, 4);
	}
	if (bParam4)
	{
		Function_44(&iVar0, 8);
	}
	if (bParam5)
	{
		Function_44(&iVar0, 1024);
	}
	if (bParam7)
	{
		Function_44(&iVar0, 16);
	}
	if (bParam8)
	{
		Function_44(&iVar0, 32);
	}
	if (bParam6)
	{
		Function_44(&iVar0, 1048576);
	}
	return Function_42(bParam0, iVar0);
}

bool Function_42(bool bParam0, int iParam1) //Position: 0x1567 / 5479
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_43(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_43(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_43(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_43(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_43(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_43(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_43(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_43(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_43(var uParam0, int iParam1) //Position: 0x1640 / 5696
{
	return (uParam0 && iParam1) == 0;
}

void Function_44(var uParam0, int iParam1) //Position: 0x164D / 5709
{
	Function_14(uParam0, iParam1);
	return;
}

bool Function_45(int iParam0, float fParam1) //Position: 0x165A / 5722
{
	if (Function_371(iParam0))
	{
		if (Function_377(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_46(int iParam0, int iParam1) //Position: 0x1676 / 5750
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	vector3 vVar10;
	int iVar13;
	
	if (Function_181())
	{
		bVar0 = false;
		if (Function_182(4))
		{
			*iParam1 = 9;
			Function_368(8);
			Function_368(32);
			Function_179(4);
		}
		if (Function_178(iParam1))
		{
			if (Function_371(iParam0))
			{
				if (Function_377(iParam0) > 7,215f)
				{
					if (VDIST(Global_76888[03], Global_76888[13]) > 5.0f)
					{
						vVar1.x = ((SQRT(RAND_FLOAT_RANGE(0.0f, 1.0f)) * 20.0f) + 15.0f);
						ROTATE_VECTOR_XZ(&vVar1, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
						vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Global_76888[03], vVar1, StackVal) };
						if (FIND_GROUND_INTERSECTION(&vVar1, 10.0f, &vVar4, &uVar7))
						{
							Global_76888[13] = { StackVal, StackVal, vVar4 };
							vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_76888[13], Global_76888[03], StackVal) };
							Global_76895[13].f_4 = UNK_0x9C40E671(&vVar10);
							Global_76895[13] = 0.0f;
							Global_76895[13].f_8 = 0.0f;
						}
					}
					Global_76888[03] = { StackVal, StackVal, Global_76888[13] };
					Global_76895[03] = { StackVal, StackVal, Global_76895[13] };
					Function_25(iParam0);
				}
			}
		}
		else if (Function_177(iParam1))
		{
			bVar0 = true;
		}
		iVar13 = Function_47(iParam1);
		if (bVar0)
		{
			if (iVar13 != 0)
			{
				Function_400(iParam0);
			}
		}
	}
	else
	{
		*iParam1 = 0;
		Function_15(iParam1, 0);
	}
	return;
}

int Function_47(int iParam0) //Position: 0x17C4 / 6084
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	void fVar15;
	
	bVar0 = Function_402();
	bVar1 = IS_ACTOR_VALID(bVar0);
	if (bVar1)
	{
		bVar2 = IS_ACTOR_ALIVE(bVar0);
	}
	else
	{
		bVar2 = false;
	}
	iParam0->f_64 = Function_176((iParam0->f_64 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	if (Function_175())
	{
		if (bVar1)
		{
			switch (Function_173())
			{
				case 0x00000000:
					SET_ACTOR_FACTION(bVar0, 28);
					break;
				
				case 0x00000001:
					SET_ACTOR_FACTION(bVar0, 29);
					break;
				
				default:
					SET_ACTOR_FACTION(bVar0, 2);
					break;
				}
		}
	}
	else if (bVar1)
	{
		SET_ACTOR_FACTION(bVar0, iParam0->f_52);
	}
	if (Function_172(iParam0))
	{
		if (*iParam0 < 1 && *iParam0 > 8)
		{
			if (iParam0->f_68 > 2.0f)
			{
				iParam0->f_68 = (iParam0->f_68 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_251(iParam0->f_44, 2) || Function_251(iParam0->f_44, 128)))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
				{
					iParam0->f_96 = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", false, 6, false, 0, 0, 0, 4294967295, 0);
				}
				else if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
					*iParam0 = 8;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
	}
	fVar8 = Function_171();
	if (bVar1)
	{
		bVar9 = Function_170(bVar0);
	}
	switch (*iParam0)
	{
		case 0x00000000:
			if (bVar1)
			{
				bVar5 = GET_LAST_ATTACKER(bVar0);
				if (IS_ACTOR_VALID(bVar5))
				{
					iParam0->f_104 = bVar5;
				}
			}
			iParam0->f_4 = Global_29006;
			if ((Function_168(8192) || Function_251(iParam0->f_48, 512)) && !Function_167(1, 1))
			{
				iVar6 = Function_164(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_251(iParam0->f_48, 512))
					{
						if (GET_ACTOR_INCAPACITATED(bVar0))
						{
							if (iVar6 > 1)
							{
								Function_14(iParam0 + 48, 512);
								SET_PLAYER_CONTROL(0, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(bVar0, 129);
								Function_163("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_162(2, NET_GET_NET_TIME());
								Function_159(3, 1);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 1.0f);
								DECOR_SET_BOOL(bVar0, "NoRegen", true);
								Function_458(65536, 1);
							}
							else
							{
								UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
								SET_ACTOR_HEALTH(bVar0, 0.0f);
							}
						}
					}
					else
					{
						fVar7 = (NET_GET_NET_TIME() - Function_158(2));
						if (!Function_167(65536, 1) && (DECOR_CHECK_EXIST(bVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(bVar0)))
						{
							Function_13(iParam0 + 48, 512);
							ACTOR_REPAIR_INCAPACITATION(bVar0);
							SET_PLAYER_CONTROL(0, 1, 1, 1);
							SET_ACTOR_HEALTH(bVar0, 60.0f);
							DECOR_REMOVE(bVar0, "NoRegen");
							CLEAR_ACTOR_PROOF(bVar0, 129);
							UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
							NET_GAMER_ICONS_SHOW_LOCAL(0);
						}
						else if ((fVar7 <= fVar8 || iVar6 >= 0) || !bVar9)
						{
							if (!bVar9)
							{
								DECOR_SET_BOOL(bVar0, "Drowned", true);
							}
							else
							{
								if (iVar6 < 0)
								{
								}
								DECOR_SET_BOOL(bVar0, "BledOut", true);
							}
							UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
							KILL_ACTOR(bVar0);
							NET_GAMER_ICONS_SHOW_LOCAL(0);
						}
					}
				}
				else
				{
					Function_458(65536, 0);
					Function_13(iParam0 + 48, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(bVar0))
				{
					Function_458(8388608, 1);
					iParam0->f_420 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_167(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - iParam0->f_420) <= 2.0f)
					{
						Function_458(8388608, 0);
					}
				}
			}
			if (Function_157(iParam0 + 108, &Global_78617 + 2648))
			{
				if (StackVal == 6)
				{
					if (Function_251(iParam0->f_44, 16))
					{
						Function_14(iParam0 + 48, 32);
						*iParam0 = 1;
					}
					else
					{
						Function_156(iParam0 + 108, &Global_78617 + 2648);
					}
				}
				else
				{
					Function_13(iParam0 + 48, 32);
					*iParam0 = 1;
				}
			}
			else if (!bVar1)
			{
			}
			if (IS_OBJECT_VALID(iParam0->f_180))
			{
				if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_180))
				{
					Function_155(iParam0->f_180, bVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_12(32, 1, 1);
			iParam0->f_48 = 0;
			iParam0->f_412 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(iParam0->f_160);
			Function_458(65536, 0);
			Function_458(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_251(iParam0->f_44, 8))
			{
				Function_28(0);
			}
			else if (bVar1)
			{
				iParam0->f_144 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
			}
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				SET_PLAYER_CONTROL(0, 0, 1, 0);
				if (IS_PLAYER_DEADEYE(0))
				{
					CANCEL_DEADEYE();
				}
			}
			CANCEL_TIME_WARP(0);
			UI_DISABLE("PM_Weapons");
			if (UI_ISACTIVE("SatchelTab_Weapons"))
			{
				UI_EXIT("SatchelTab_Weapons");
				UI_FOCUS("nPauseMenu");
			}
			iParam0->f_56 = 4294967295;
			iParam0->f_68 = 0.0f;
			if (Function_154(iParam0 + 108, &Global_78617 + 2648))
			{
				switch (StackVal)
				{
					case 0x00000001:
					case 0x00000002:
						if (IS_SLOT_VALID(StackVal))
						{
							iParam0->f_104 = GET_SLOT_ACTOR(StackVal);
						}
						break;
					
					case 0x00000003:
						iParam0->f_104 = "";
						break;
					
					default:
						break;
					}
			}
			Function_149(iParam0);
			*iParam0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_134(iParam0, iParam0->f_12 != 0);
			}
			Function_132(iParam0, 0);
			iParam0->f_64 = 0.0f;
			*iParam0 = 3;
			break;
		
		case 0x00000003:
			Function_132(iParam0, 1);
			if ((iParam0->f_12 >= 0 && iParam0->f_64 <= 4.0f) || (iParam0->f_12 < 0 && iParam0->f_64 <= 2.0f))
			{
				if (iParam0->f_12 < 0)
				{
					*iParam0 = 8;
				}
				else
				{
					*iParam0 = 4;
				}
			}
			break;
		
		case 0x00000004:
			iParam0->f_64 = 0.0f;
			*iParam0 = 5;
		
		case 0x00000005:
			Function_132(iParam0, 1);
			if (iParam0->f_64 <= 2.0f)
			{
				if (Function_251(iParam0->f_44, 512))
				{
					*iParam0 = 8;
				}
				else if (iParam0->f_12 < 1)
				{
					*iParam0 = 8;
				}
				else
				{
					*iParam0 = 6;
				}
			}
			break;
		
		case 0x00000006:
			Function_132(iParam0, 1);
			if (4.0f < 0.0f)
			{
				Function_131();
				Function_12(32, 0, 1);
				Function_130();
			}
			iParam0->f_64 = 0.0f;
			*iParam0 = 7;
			break;
		
		case 0x00000007:
			Function_132(iParam0, 1);
			if (iParam0->f_64 <= 4.0f)
			{
				iParam0->f_64 = 0.0f;
				*iParam0 = 8;
				Function_22();
			}
			break;
		
		case 0x00000008:
			if (Function_251(iParam0->f_44, 2))
			{
				if (Function_251(iParam0->f_44, 512))
				{
					if (!Function_251(iParam0->f_48, 4096))
					{
						Function_15(iParam0, 1);
						Function_14(iParam0 + 48, 4096);
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(iParam0->f_84))
					{
						if (!Function_167(16384, 1))
						{
							Function_15(iParam0, 0);
							Function_458(16384, 1);
							iParam0->f_84 = LAUNCH_NEW_SCRIPT("$/content/multiplayer/Spectator/mp_spectatorMk2", 0);
						}
					}
				}
				else
				{
					if (IS_SCRIPT_VALID(iParam0->f_84))
					{
						TERMINATE_SCRIPT(iParam0->f_84);
					}
					Function_132(iParam0, 1);
				}
			}
			else
			{
				Function_132(iParam0, 1);
				iParam0->f_64 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_96))
				{
					RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_96);
				}
				*iParam0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_132(iParam0, 1);
			if (!HUD_IS_FADED())
			{
				Function_129(0.0f, 0.0f, 0.0f, 1.0f, 0,5f, 1);
				if (iParam0->f_64 > 0.0f)
				{
					iParam0->f_64 = 0.0f;
				}
			}
			if (iParam0->f_64 <= 2.0f)
			{
				UI_SEND_EVENT("InTransitionComplete");
				iParam0->f_64 = 0.0f;
			}
			if (HUD_IS_FADED())
			{
				Function_130();
				if (IS_SCRIPT_VALID(iParam0->f_84))
				{
					TERMINATE_SCRIPT(iParam0->f_84);
				}
				Function_128();
				Function_22();
				Function_12(32, 0, 1);
				iParam0->f_416 = CREATE_VOLUME_IN_LAYOUT(Function_19(), Function_127(), 2, *(&Global_78617 + 2604 + 16), 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_416);
				*iParam0 = 10;
				iParam0->f_64 = 0.0f;
			}
			break;
		
		case 0x0000000A:
			if (iParam0->f_100 == Global_76887 || iParam0->f_64 <= 5.0f)
			{
				if (iParam0->f_64 <= 5.0f)
				{
					iParam0->f_64 = 0.0f;
				}
				if (iParam0->f_100 >= 4294967295)
				{
					STREAMING_EVICT_ACTOR(iParam0->f_100, 4294967295);
				}
				iParam0->f_100 = Global_76887;
				STREAMING_REQUEST_ACTOR(iParam0->f_100, true, false);
			}
			else if (STREAMING_IS_ACTOR_LOADED(iParam0->f_100, 4294967295))
			{
				*iParam0 = 11;
			}
			break;
		
		case 0x0000000B:
			bVar3 = false;
			Call_Loc(iParam0->f_168);
			iVar4 = StackVal;
			if (iVar4 == 0)
			{
				if (!Function_251(iParam0->f_48, 8))
				{
					Call_Loc(iParam0->f_156);
					Function_14(iParam0 + 48, 8);
				}
				if (Function_122(StackVal, Function_251(iParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_88(StackVal, StackVal, *(&Global_79349 + 28), 0.0f, 0.0f, 0.0f, Function_251(iParam0->f_48, 32), 1))
				{
					bVar3 = true;
				}
				else
				{
					return 0;
				}
			}
			if (iVar4 == 2)
			{
			}
			else if (iVar4 == 1)
			{
				bVar3 = true;
			}
			if (bVar3)
			{
				if (Function_251(iParam0->f_44, 1))
				{
					Function_13(iParam0 + 44, 1);
				}
				else
				{
					Function_20(iParam0);
					Function_15(iParam0, 0);
				}
				bVar0 = Function_402();
				Function_401(bVar0);
				if (Function_251(iParam0->f_44, 32))
				{
					SET_PLAYER_CONTROL(0, 0, 1, 0);
				}
				else
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
				}
				SET_CAMERA_FOLLOW_ACTOR(bVar0);
				CAMERA_RESET(0);
				if (IS_OBJECT_VALID(iParam0->f_180))
				{
					DESTROY_OBJECT(iParam0->f_180);
				}
				Global_62993 = 0;
				if (IS_VOLUME_VALID(iParam0->f_416))
				{
					REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(iParam0->f_416);
					DESTROY_VOLUME(iParam0->f_416);
				}
				iParam0->f_64 = 0.0f;
				*iParam0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!Function_41(bVar0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				*iParam0 = 11;
			}
			else if (!HAS_INVENTORY_COMPONENT(bVar0))
			{
			}
			else if (!STREAMING_IS_WORLD_LOADED() && iParam0->f_64 > 60.0f)
			{
				if (iParam0->f_64 <= 30.0f)
				{
				}
			}
			else if (Function_87(bVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_251(iParam0->f_44, 8))
				{
					Function_86(iParam0 + 184, 0, 1, 1);
					Function_81(iParam0 + 184);
					Function_71(&bVar0, 0, 0, 0);
					Function_71(&bVar0, 0, 0, 0);
					Function_70(bVar0);
				}
				else
				{
					Function_86(iParam0 + 184, 1, 1, 1);
				}
				iParam0->f_180 = CREATE_EVENT_TRAP("MidasToucher", 95, bVar0);
				EVENT_TRAP_ON_OWNER(iParam0->f_180, bVar0);
				EVENT_TRAP_ON_PERPETRATOR(iParam0->f_180, bVar0);
				EVENT_TRAP_STORE_EVENTS(iParam0->f_180, 1);
				iParam0->f_4 = Global_29006;
				if (IS_ACTOR_VALID(bVar0))
				{
					Function_40(bVar0);
					vVar10 = { StackVal, StackVal, Function_40(bVar0) };
					iVar13 = Function_35(StackVal, StackVal, vVar10, 0, 1, 0);
					if (Function_9(iVar13))
					{
						iParam0->f_4 = iVar13;
					}
				}
				if (StackVal != Global_29006)
				{
					Function_372(1, 0, 0);
				}
				else if (StackVal == Global_30658[3])
				{
					Function_69(&(Global_29008[StackVal]), 4194304);
				}
				Function_179(32);
				*iParam0 = 13;
			}
			if (!Function_251(iParam0->f_48, 128))
			{
				Call_Loc(iParam0->f_176);
				if (StackVal)
				{
					Function_14(iParam0 + 48, 128);
					Function_13(iParam0 + 48, 8);
					*iParam0 = 11;
				}
			}
			break;
		
		case 0x0000000D:
			if (iParam0->f_64 < 60.0f)
			{
				Function_179(32);
				Function_372(1, 0, 0);
				*iParam0 = 14;
			}
			if (Function_9(StackVal))
			{
				if (Function_68(StackVal))
				{
					if (StackVal && StackVal == 6)
					{
						if (!Function_67(&(Global_29008[StackVal]), 16))
						{
						}
						if (!Function_67(&(Global_29008[StackVal]), 64))
						{
						}
						if (Function_67(&(Global_29008[StackVal]), 4194304))
						{
						}
					}
					else
					{
						*iParam0 = 14;
					}
				}
				else
				{
					iVar14 = Global_29155[StackVal10];
					if (Function_9(iVar14))
					{
						if (StackVal && (!Function_68(iVar14) && !Function_67(&(Global_29008[iVar14]), 1)) != 2)
						{
							Function_66(iVar14);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_65();
			if (!Function_251(iParam0->f_44, 32))
			{
				if (Function_61())
				{
					fVar15 = 4294967295;
					if (iParam0->f_144 >= 4294967295)
					{
						fVar15 = GET_WEAPON_EQUIPPED(bVar0, iParam0->f_144);
						if (fVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
						}
					}
					if (fVar15 == 4294967295)
					{
						fVar15 = Function_60(bVar0, 40);
						if (fVar15 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
						}
						else
						{
							fVar15 = Function_60(bVar0, 39);
							if (fVar15 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
							}
							else
							{
								fVar15 = Function_60(bVar0, 42);
								if (fVar15 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
								}
								else
								{
									fVar15 = Function_60(bVar0, 41);
									if (fVar15 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
									}
									else
									{
										fVar15 = Function_60(bVar0, 43);
										if (fVar15 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
										}
										else
										{
											fVar15 = Function_60(bVar0, 48);
											if (fVar15 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
											}
											else
											{
												fVar15 = Function_60(bVar0, 46);
												if (fVar15 != 4294967295)
												{
													ACTOR_PUT_WEAPON_IN_HAND(bVar0, fVar15, 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!Function_251(iParam0->f_44, 64))
				{
					Function_59(0,5f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_458(16384, 0);
			Function_58(bVar0, !Function_251(iParam0->f_44, 96));
			Stack.Push(bVar0);
			Call_Loc(iParam0->f_152);
			iParam0->f_104 = "";
			*iParam0 = 0;
			break;
		
		case 0x0000000F:
			if (IS_SCRIPT_VALID(iParam0->f_84))
			{
				TERMINATE_SCRIPT(iParam0->f_84);
			}
			Function_132(iParam0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_130();
			}
			else if (!Function_56())
			{
				Call_Loc(iParam0->f_164);
				iParam0->f_64 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(iParam0->f_16))
				{
					Function_49(iParam0);
					*iParam0 = 16;
				}
				else
				{
					Global_62993 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					*iParam0 = 20;
				}
				Function_48(iParam0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_132(iParam0, 1);
			if (iParam0->f_64 <= 5.0f)
			{
				Global_62993 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				*iParam0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_132(iParam0, 1);
			Call_Loc(iParam0->f_172);
			if (StackVal)
			{
				if (Function_251(iParam0->f_44, 4))
				{
					*iParam0 = 17;
				}
				else
				{
					*iParam0 = 18;
				}
			}
			break;
		
		case 0x00000011:
			Function_132(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_129(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000012:
			Function_132(iParam0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_129(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			*iParam0 = 19;
			break;
		
		case 0x00000013:
			Function_132(iParam0, 1);
			if (Function_56())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_129(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_48(int iParam0) //Position: 0x26BC / 9916
{
	if (IS_STRING_VALID(iParam0->f_40))
	{
		AUDIO_MUSIC_ONE_SHOT(iParam0->f_40, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_49(int iParam0) //Position: 0x26D8 / 9944
{
	int iVar0;
	
	if (IS_STRING_VALID(iParam0->f_16))
	{
		Function_128();
		iVar0 = "";
		if (Function_251(iParam0->f_44, 256))
		{
			if (Function_251(iParam0->f_44, 4))
			{
				iVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				iVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_55(&Global_78578 + 96))
			{
				if (FABS(Function_50(&Global_78578 + 96)) > 1.0f)
				{
				}
				else
				{
					AUDIO_MUSIC_SUSPEND(1000);
				}
			}
		}
		PRINT_BIG_FORMAT(4.0f, iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3], 2, iVar0);
		NET_LOG(true, "Player State", iParam0->f_16, (*iParam0 + 20)[0], (*iParam0 + 20)[1], (*iParam0 + 20)[2], (*iParam0 + 20)[3]);
	}
	return;
}

var Function_50(int iParam0) //Position: 0x27C9 / 10185
{
	return -Function_51(iParam0);
}

float Function_51(bool bParam0) //Position: 0x27D5 / 10197
{
	if (Function_55(bParam0))
	{
		if (Function_54(bParam0))
		{
			return StackVal;
		}
		Function_52();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

void Function_52() //Position: 0x28A6 / 10406
{
	if (!Function_53())
	{
	}
	return;
}

bool Function_53() //Position: 0x28B3 / 10419
{
	return NET_IS_IN_SESSION();
}

bool Function_54(int iParam0) //Position: 0x28BC / 10428
{
	return Function_251(*iParam0, 2);
}

bool Function_55(bool bParam0) //Position: 0x28C9 / 10441
{
	return Function_251(*bParam0, 1);
}

bool Function_56() //Position: 0x28D6 / 10454
{
	return (HUD_IS_FADED() || Function_57(0));
}

int Function_57(bool bParam0) //Position: 0x28E4 / 10468
{
	bool bVar0;
	
	if (UI_ISACTIVE("MPSplash"))
	{
		if (UNK_0x9D20BDC4("networking"))
		{
			bVar0 = FLASH_GET_INT("networking", "splash.style");
			switch (bVar0)
			{
				case 0x00000000:
				case 0x00000004:
				case 0x00000005:
				case 0x00000009:
					if (FLASH_GET_INT("networking", "splashDone") == 2)
					{
						return 1;
					}
					break;
				
				default:
					break;
			}
		}
		else if (bParam0)
		{
		}
	}
	else if (bParam0)
	{
	}
	return 0;
}

void Function_58(bool bParam0, int iParam1) //Position: 0x2988 / 10632
{
	struct<5> Var0;
	
	Function_458(128, 0);
	SET_ACTOR_INVULNERABILITY(bParam0, false);
	if (Function_182(256))
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 3);
	}
	else
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 2);
	}
	AI_STOP_IGNORING_ACTOR(bParam0);
	if (NET_IS_IN_SESSION() && iParam1)
	{
		Var0 = GET_LOCAL_SLOT();
		Var0.f_4 = NET_GET_NET_TIME();
		NET_SCRIPTMSG_SEND(1, 9, &Var0, 2, 1);
	}
	return;
}

void Function_59(bool bParam0) //Position: 0x29DE / 10718
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(bParam0, 1065353216);
		}
	}
	return;
}

int Function_60(bool bParam0, int iParam1) //Position: 0x29FB / 10747
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

bool Function_61() //Position: 0x2A0C / 10764
{
	return !Function_62();
}

bool Function_62() //Position: 0x2A16 / 10774
{
	if (Function_64())
	{
		return (Function_63() != 1 || Function_63() != 0);
	}
	return 0;
}

int Function_63() //Position: 0x2A2F / 10799
{
	return Global_79349.f_16;
}

bool Function_64() //Position: 0x2A3B / 10811
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_65() //Position: 0x2A44 / 10820
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = Function_402();
	if (IS_ACTOR_VALID(bVar1))
	{
		bVar0 = false;
		while (bVar0 <= 39)
		{
			if (ACTOR_HAS_WEAPON(bVar1, bVar0))
			{
				SET_WEAPON_GOLD(bVar1, bVar0, Global_83823[bVar0]);
			}
			bVar0++;
		}
	}
	return;
}

void Function_66(int iParam0) //Position: 0x2A83 / 10883
{
	if (!Function_9(iParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DECOR_SET_BOOL(StackVal, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_69(&(Global_29008[Global_29155[iParam010]]), 1024);
	}
	return;
}

bool Function_67(var uParam0, int iParam1) //Position: 0x2ADE / 10974
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_68(int iParam0) //Position: 0x2AFA / 11002
{
	if (!Function_9(iParam0))
	{
		return 1;
	}
	return Function_67(&(Global_29008[iParam0]), 4);
}

void Function_69(var uParam0, int iParam1) //Position: 0x2B16 / 11030
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_70(bool bParam0) //Position: 0x2B25 / 11045
{
	bool bVar0;
	void fVar1;
	
	bVar0 = true;
	while (bVar0 < 6)
	{
		fVar1 = GET_WEAPON_EQUIPPED(bParam0, bVar0);
		if (fVar1 != 4294967295)
		{
			ACTOR_SET_WEAPON_AMMO(bParam0, fVar1, GET_WEAPON_MAX_AMMO(fVar1));
		}
		bVar0++;
	}
	return;
}

var Function_71(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2B58 / 11096
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar5[17];
	bool bVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	int iVar27;
	char* cVar28[32];
	struct<5> Var36;
	
	iVar0 = 0;
	if (IS_ACTOR_LOCAL_PLAYER(*bParam0))
	{
		iVar1 = 0;
		while (iVar1 <= 40)
		{
			bVar2 = iVar1;
			if (bParam2)
			{
				switch (UNK_0xDB679ED9(bVar2))
				{
					case 0x0000002F:
					case 0x00000030:
						bVar23 = false;
						break;
					
					default:
						bVar23 = true;
						break;
				}
			}
			else
			{
				bVar23 = true;
			}
			if (bVar23)
			{
				if (ACTOR_HAS_WEAPON(*bParam0, bVar2))
				{
					bVar3 = GET_AMMO_ENUM(bVar2);
					if (Function_80(bVar3, 1))
					{
						iVar5[bVar3] = 1;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 17)
		{
			if (iVar5[iVar1])
			{
				bVar3 = iVar1;
				_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(Function_79(&Global_83591 + 276, bVar3)), 1, 0);
				iVar0 = 1;
			}
			iVar1++;
		}
		switch (iParam3)
		{
			case 0x00000000:
				break;
			
			case 0x00000001:
				iVar1 = 0;
				while (iVar1 <= 27)
				{
					bVar2 = (*&Global_83591 + 276)[iVar12];
					if (Function_78(bVar2))
					{
						if (Function_77(bVar2))
						{
							bVar3 = GET_AMMO_ENUM(bVar2);
							if (Function_80(bVar3, 1))
							{
								bVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
								if (bVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(bVar24), 1, 0);
								}
								if (!ACTOR_HAS_WEAPON(*bParam0, bVar2))
								{
									GIVE_WEAPON_TO_ACTOR(*bParam0, bVar2, 0.0f, 0, 0);
								}
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 0x00000002:
				bVar2 = false;
				while (bVar2 <= 40)
				{
					if (Global_84559[bVar2])
					{
						bVar3 = GET_AMMO_ENUM(bVar2);
						if (Function_80(bVar3, 1))
						{
							bVar24 = (Function_79(&Global_83591 + 276, bVar3) - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
							if (bVar24 >= 0)
							{
								_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(bVar24), 1, 0);
							}
							if (!ACTOR_HAS_WEAPON(*bParam0, bVar2))
							{
								GIVE_WEAPON_TO_ACTOR(*bParam0, bVar2, 0.0f, 0, 0);
							}
						}
					}
					bVar2++;
				}
				if (DECOR_GET_INT_VERBOSE(Function_19(), "DLCFM_Weapon", &iVar25))
				{
					iVar27 = 0;
					while (iVar27 <= iVar25)
					{
						strcpy(&cVar28, "DLCFM_Weapon_", 32);
						straddi(&cVar28, iVar27, 32);
						if (DECOR_GET_INT_VERBOSE(Function_19(), &cVar28, &uVar26))
						{
							Function_72(uVar26, &Var36);
							bVar3 = GET_AMMO_ENUM(Var36);
							if (Function_80(bVar3, 1))
							{
								bVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(*bParam0, bVar3, 1)));
								if (bVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(*bParam0, bVar3, TO_FLOAT(bVar24), 1, 0);
								}
								if (!ACTOR_HAS_WEAPON(*bParam0, Var36))
								{
									GIVE_WEAPON_TO_ACTOR(*bParam0, Var36, 0.0f, 0, 0);
								}
							}
						}
						iVar27++;
					}
				}
				break;
			}
	}
	if (iVar0 && iParam1)
	{
		CLEAR_STAT_MESSAGE();
		SET_STAT_MESSAGE(STRING_TO_HASH("pickup_ammo_header"), UI_GET_STRING("pickup_ammo_message"), 1084227584, 0, 2, 4294967295, 0, 0, 0, 0, false, false, 0);
	}
	return iVar0;
}

void Function_72(var uParam0, int iParam1) //Position: 0x2E3B / 11835
{
	*iParam1 = Function_73(uParam0, Function_75(), 0);
	iParam1->f_4 = Function_73(uParam0, Function_75() + 8, Function_75());
	return;
}

var Function_73(var uParam0, int iParam1, bool bParam2) //Position: 0x2E5E / 11870
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_74((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

bool Function_74(bool bParam0) //Position: 0x2E7D / 11901
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_75() //Position: 0x2E89 / 11913
{
	return Function_76(39);
}

int Function_76(int iParam0) //Position: 0x2E94 / 11924
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, true);
		iVar0++;
	}
	return iVar0;
}

bool Function_77(bool bParam0) //Position: 0x2EC2 / 11970
{
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000030:
		case 0x0000002F:
			return 1;
			break;
	}
	return 0;
}

bool Function_78(bool bParam0) //Position: 0x2EE4 / 12004
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_79(int iParam0, bool bParam1) //Position: 0x2EF6 / 12022
{
	if (Function_80(bParam1, 1))
	{
		return (*iParam0 + 456)[bParam1];
	}
	return 0;
}

bool Function_80(bool bParam0, int iParam1) //Position: 0x2F10 / 12048
{
	return !(bParam0 != 4294967295 || (iParam1 && bParam0 != 0));
}

void Function_81(int iParam0) //Position: 0x2F23 / 12067
{
	int iVar0;
	var uVar1;
	int iVar2;
	char* cVar3[32];
	struct<2> Var11;
	
	Function_83(&Global_79378, iParam0);
	if (DECOR_GET_INT_VERBOSE(Function_19(), "DLCFM_Weapon", &iVar0))
	{
		iVar2 = 0;
		while (iVar2 <= iVar0)
		{
			strcpy(&cVar3, "DLCFM_Weapon_", 32);
			straddi(&cVar3, iVar2, 32);
			if (DECOR_GET_INT_VERBOSE(Function_19(), &cVar3, &uVar1))
			{
				Function_72(uVar1, &Var11);
				Function_82(StackVal, Var11, 1, 1, 1);
			}
			iVar2++;
		}
	}
	return;
}

void Function_82(struct<5> Param0) //Position: 0x2F9A / 12186
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_78(Param0))
	{
		return;
	}
	bVar0 = Function_402();
	if (bParam3)
	{
		if (StackVal >= 0)
		{
			bVar1 = GET_AMMO_ENUM(Param0);
			if (Function_80(bVar1, 1))
			{
				bVar2 = TO_FLOAT(StackVal);
				if (bParam2)
				{
					bVar2 = (bVar2 - _GET_AMMO_AMOUNT(bVar0, bVar1, 0));
				}
				if (bVar2 < 0.0f)
				{
					_ADD_AMMO_OF_TYPE(bVar0, bVar1, bVar2, 1, 0);
				}
			}
		}
	}
	SET_WEAPONENUM_LOCKED(Param0, 0);
	GIVE_WEAPON_TO_ACTOR(bVar0, Param0, 0.0f, 0, iParam4);
}

void Function_83(int iParam0, int iParam1) //Position: 0x300E / 12302
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar2 = Function_402();
	if (IS_ACTOR_VALID(bVar2))
	{
		iVar0 = (iParam0->f_1012 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*iParam0 + 48)[iVar02], bVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_84559[25] && !ACTOR_HAS_WEAPON(bVar2, 25)) && !Function_84(25, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_84559[24] && !ACTOR_HAS_WEAPON(bVar2, 24)) && !Function_84(24, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_84559[23] && !ACTOR_HAS_WEAPON(bVar2, 23)) && !Function_84(23, iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(bVar2, 23, 1.0f, 0, 0);
		}
		iVar1 = 0;
		while (iVar1 < (7 - 1))
		{
			if ((*iParam0 + 1088)[iVar1] != 4294967295)
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, (*iParam0 + 1088)[iVar1]);
			}
			iVar1++;
		}
		if (iParam0->f_1124 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(bVar2, iParam0->f_1124))
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, iParam0->f_1124);
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (iParam0->f_1128 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(bVar2, iParam0->f_1128))
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, iParam0->f_1128);
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (iParam0->f_1120 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(bVar2, iParam0->f_1120))
			{
				ACTOR_SET_NEXT_WEAPON(bVar2, iParam0->f_1120);
			}
			else
			{
				bVar3 = true;
			}
		}
		if (bVar3)
		{
			bVar4 = Function_60(bVar2, 40);
			if (bVar4 == 4294967295)
			{
				bVar4 = Function_60(bVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(bVar2, bVar4);
		}
	}
	return;
}

bool Function_84(int iParam0, int iParam1) //Position: 0x318B / 12683
{
	return Function_85(iParam0, iParam1) < 4294967295;
}

int Function_85(int iParam0, int iParam1) //Position: 0x319A / 12698
{
	int iVar0;
	
	if (!Function_78(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		if (iParam0 == (*iParam1)[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_86(var uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x31CD / 12749
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_402();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	if (bParam1)
	{
		DELETE_ALL_INVENTORY_FROM_ACTOR(bVar0);
	}
	SETUP_ASSOCIATED_FRAGMENTS(bVar0);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		Function_82(StackVal, *uParam0[iVar12], iParam2, 1, iParam3);
		iVar1++;
	}
}

bool Function_87(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3218 / 12824
{
	float fVar0;
	bool bVar1;
	
	if (Function_64() || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(bParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(bParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= bParam2)
		{
			DECOR_REMOVE(bParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(bParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

bool Function_88(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x32B5 / 12981
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_402();
	Function_112();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_111();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, 0))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_42(bVar0, 3145855);
	if (!bVar8 && bParam6)
	{
	}
	if (bParam6 && bVar8)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar0, 1);
		TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam0, vParam3.y, 1, true, 1);
	}
	else
	{
		bVar9 = Function_182(256);
		if (bVar9)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 3);
		}
		else if (!bParam6 && iParam7)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 0);
		}
		bVar0 = RESPAWN_PLAYER_ACTOR_IN_LAYOUT(bVar1, bVar0, "player", Global_76887, vParam0, vParam3, 0);
		if (bVar9 || (!bParam6 && iParam7))
		{
			NET_OBJECT_REPLICATION_MODE_END(15);
		}
	}
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 0;
	}
	SET_CAMERA_FOLLOW_ACTOR(bVar0);
	CAMERA_RESET(0);
	SET_PLAYER_POSTURE(0, 0, 0);
	if (!bParam6)
	{
		Function_108(bVar0, 0);
		Function_90();
		Function_89(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			iVar14 = Function_35(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_9(iVar14))
			{
				Var10.f_4 = iVar14;
			}
			else
			{
				Var10.f_4 = Global_29006;
			}
			NET_SCRIPTMSG_SEND(2, 8, &Var10, 4, 1);
			NET_SCRIPTMSG_SEND(3, 8, &Var10, 4, 1);
		}
	}
	return 1;
}

void Function_89(char* cParam0, vector3 vParam1) //Position: 0x342C / 13356
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_90() //Position: 0x346A / 13418
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_107(iVar1))
		{
			uVar2 = Function_106(iVar1);
			Function_91(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_91(int iParam0, bool bParam1) //Position: 0x349C / 13468
{
	if (!Function_107(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_105(222, Global_26401[iParam0], 0);
		if (Function_104(222) <= 0)
		{
			Function_92(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_92((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_105((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_105(222, bParam1, 0);
	}
	return;
}

int Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x3525 / 13605
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
		Function_103(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_102(iParam0);
	if (bParam2)
	{
		Function_93(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_93(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x37C0 / 14272
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_101(390))), 32);
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
					bVar19 = (Function_100(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_100(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_98(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_95(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_240(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_94(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_127(), &Var9);
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

var Function_94(int iParam0) //Position: 0x3DED / 15853
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

void Function_95(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3DFE / 15870
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_97(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_96(Function_97(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_96(int iParam0, int iParam1) //Position: 0x3E63 / 15971
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_97(int iParam0, bool bParam1) //Position: 0x3E75 / 15989
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_98(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3E87 / 16007
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
	if (((Function_99(iParam0) != 19 || Function_99(iParam0) != 17) || Function_99(iParam0) != 10) || Function_99(iParam0) != 9)
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

int Function_99(int iParam0) //Position: 0x3FB7 / 16311
{
	return Global_35278[iParam020].f_48;
}

float Function_100(int iParam0) //Position: 0x3FC6 / 16326
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_101(int iParam0) //Position: 0x4000 / 16384
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_102(int iParam0) //Position: 0x403D / 16445
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

int Function_103(int iParam0, bool bParam1, bool bParam2) //Position: 0x41D7 / 16855
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

int Function_104(int iParam0) //Position: 0x43F1 / 17393
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_105(int iParam0, bool bParam1, int iParam2) //Position: 0x4432 / 17458
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
	Function_102(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_93(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_106(int iParam0) //Position: 0x462D / 17965
{
	if (!Function_107(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_107(int iParam0) //Position: 0x4645 / 17989
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_108(bool bParam0, bool bParam1) //Position: 0x465A / 18010
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_110(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_168(8192) && !Function_167(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_62())
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 5, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 4, 2.0f);
	}
	if (bParam1)
	{
		GIVE_WEAPON_TO_ACTOR(bParam0, 22, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 4, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 8, 1.0f, 0, 1);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 7, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 8, 20.0f, 0);
	}
	iVar0 = GET_ACTOR_ENUM_STRING(bParam0);
	SET_LOCAL_PLAYER_VOICE(iVar0);
	SET_LOCAL_PLAYER_PAIN_VOICE(iVar0);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(bParam0);
	SET_DEADEYE_INVULNERABILITY(0, 0);
	SET_DEADEYE_DAMAGE_SCALING(0, 1.0f);
	SET_DEADEYE_MULTILOCK_ENABLE(0, true);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
	SET_DEADEYE_REGENERATION_RATE(0, 0.0f, 0);
	SET_DEADEYE_TIMESCALE(0, 1.0f);
	if (Function_109())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_109() //Position: 0x475A / 18266
{
	return Function_251(Global_79962, 2048);
}

var Function_110(bool bParam0) //Position: 0x476A / 18282
{
	bool bVar0;
	
	bVar0 = "";
	if (((bParam0 > 837 && bParam0 < 971) && bParam0 > 972) && bParam0 < 975)
	{
		return bVar0;
	}
	bVar0 = GET_ACTORENUM_MP_VOICE_NAME(bParam0);
	return bVar0;
}

void Function_111() //Position: 0x479F / 18335
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

void Function_112() //Position: 0x47B4 / 18356
{
	Function_121();
	Function_115();
	Function_113();
	return;
}

void Function_113() //Position: 0x47C3 / 18371
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_114();
	return;
}

void Function_114() //Position: 0x47F7 / 18423
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_115() //Position: 0x4808 / 18440
{
	Function_116(&(Global_50170[522]));
	Function_116(&(Global_50170[622]));
	Function_116(&(Global_50170[722]));
	Function_116(&(Global_50170[822]));
	Function_116(&(Global_50170[922]));
	Function_116(&(Global_50170[1022]));
	Function_116(&(Global_50170[1122]));
	return;
}

void Function_116(bool bParam0) //Position: 0x4851 / 18513
{
	Global_56092[*bParam0] = 0;
	Function_117(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_117(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x486B / 18539
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_120(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_119(iParam0), 6);
		stradd(&cVar0, "_info", 24);
		memcpy(&cVar6, StackVal, *(&Global_50170[iParam022] + 16), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_120(iParam0), &cVar0, 2, 2, true);
		Function_118(Function_120(iParam0), 0);
	}
}

void Function_118(bool bParam0, bool bParam1) //Position: 0x4919 / 18713
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

struct<16> Function_119(int iParam0) //Position: 0x493E / 18750
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_120(int iParam0) //Position: 0x4972 / 18802
{
	return Global_50170[iParam022].f_24;
}

void Function_121() //Position: 0x4981 / 18817
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_122(bool bParam0, bool bParam1, bool bParam2) //Position: 0x499A / 18842
{
	vector3 vVar0;
	vector3 vVar3;
	struct<5> Var6;
	vector3 vVar12;
	bool bVar15;
	char* cVar16[64];
	bool bVar32;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 0;
	}
	GENERATE_RANDOM_POINT_IN_VOLUME(bParam0, &vVar0);
	Function_126(bParam0);
	Var6 = { StackVal, StackVal, Function_126(bParam0) };
	vVar0.f_4 = StackVal;
	GET_VOLUME_SCALE(bParam0, &Var9);
	if (!FIND_GROUND_INTERSECTION(StackVal, &vVar0, &vVar3, &Var6))
	{
		vVar3 = { StackVal, StackVal, vVar0 };
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar12);
	if (!bParam1)
	{
		vVar12.f_4 = (vVar12.y + 180.0f);
	}
	bVar15 = GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(bParam0));
	if (IS_LAYOUTREF_VALID(bVar15))
	{
		strcpy(&cVar16, GET_OBJECT_NAME(bParam0), 64);
		stradd(&cVar16, "_FF", 64);
		bVar32 = FIND_OBJECT_IN_LAYOUT(bVar15, &cVar16);
		if (IS_OBJECT_VALID(bVar32))
		{
			Function_125(bVar32);
			vVar12.f_4 = Function_123(StackVal, StackVal, StackVal, StackVal, vVar3, Function_125(bVar32));
		}
	}
	return Function_88(StackVal, StackVal, StackVal, StackVal, vVar3, vVar12, bParam1, bParam2);
}

var Function_123(vector3 vParam0, vector3 vParam3) //Position: 0x4A54 / 19028
{
	var uVar0;
	
	Function_124(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_124(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x4A6E / 19054
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_125(bool bParam0) //Position: 0x4A91 / 19089
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_126(bool bParam0) //Position: 0x4AB8 / 19128
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_127() //Position: 0x4AC9 / 19145
{
	bool bVar0;
	
	return bVar0;
}

void Function_128() //Position: 0x4AD1 / 19153
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_129(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x4AE6 / 19174
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, iParam5);
		}
	}
}

void Function_130() //Position: 0x4B0F / 19215
{
	UI_EXIT("MPSplash");
	UI_INCLUDE("FameText");
	UI_RESTORE("FameText");
	UI_INCLUDE("SplashObjective");
	UI_RESTORE("SplashObjective");
	return;
}

void Function_131() //Position: 0x4B69 / 19305
{
	if (!Function_24(8))
	{
		Function_23();
	}
	Function_12(8, 1, 1);
	return;
}

void Function_132(int iParam0, int iParam1) //Position: 0x4B82 / 19330
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	
	if (!IS_OBJECT_VALID(iParam0->f_112))
	{
		return;
	}
	if (Function_251(iParam0->f_48, 256) || Function_251(iParam0->f_48, 4096))
	{
		return;
	}
	if (!Function_251(iParam0->f_48, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(iParam0->f_112);
	if (!Function_42(iParam0->f_104, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(iParam0->f_112, true);
			Function_13(iParam0 + 48, 1024);
			if (iVar0 <= 5)
			{
			}
			else
			{
				DETACH_CAMERASHOT(iParam0->f_120);
				DETACH_CAMERASHOT(iParam0->f_124);
			}
			return;
		}
	}
	if (iVar0 > 4 && iParam1)
	{
		Function_133(iParam0);
	}
	if (iVar0 == 5)
	{
		if (!Function_251(iParam0->f_48, 8192))
		{
			Function_14(iParam0 + 48, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			Global_78617.f_48 = GET_ACTOR_SLOT(iParam0->f_104);
			Function_484(1048576);
			if (IS_OBJECT_VALID(iParam0->f_116) && IS_OBJECT_VALID(iParam0->f_120))
			{
				GET_POSITION(iParam0->f_104, &vVar16);
				vVar1 = { StackVal, StackVal, vVar16 };
				GET_CAMERASHOT_POSITION(iParam0->f_116, &vVar10);
				vVar13 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar10, vVar1, StackVal) };
				vVar13.f_4 = 0.0f;
				VNORMALIZE(&vVar13);
				ATTACH_CAMERASHOT(StackVal, StackVal, iParam0->f_120, iParam0->f_104, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				ATTACH_CAMERASHOT(StackVal, StackVal, iParam0->f_124, iParam0->f_104, 0.0f, 0.0f, 0.0f, 0.0f, -Vector(vVar13, 0.0f, 0.0f), 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_120, iParam0->f_104, 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_124, iParam0->f_104, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_120, 0.0f, 0,8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_124, 0.0f, 0,8f, 0.0f, vVar13, 0);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_120, iParam0->f_104, 1);
				SET_CAMERASHOT_TARGET_OBJECT(iParam0->f_124, iParam0->f_104, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_120, 0.0f, 0.0f, 0.0f, 0.0f, 1,4f, 0.0f, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(iParam0->f_124, 0.0f, 0.0f, 0.0f, 0.0f, 1,4f, 0.0f, 1);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(iParam0->f_120, iParam0->f_104, 243);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(iParam0->f_124, iParam0->f_104, 243);
			}
			SET_CAMERA_FOLLOW_ACTOR_EX(iParam0->f_104, 1);
		}
	}
	return;
}

void Function_133(int iParam0) //Position: 0x4D73 / 19827
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 1);
	GET_CAMERASHOT_DIRECTION(iParam0->f_116, &vVar1);
	SET_CAMERASHOT_DIRECTION(bVar0, vVar1, 1);
	GET_CAMERASHOT_POSITION(iParam0->f_116, &vVar1);
	SET_CAMERASHOT_POSITION(bVar0, vVar1);
	SET_CAMERASHOT_FOV(bVar0, GET_CAMERASHOT_FOV(iParam0->f_116));
	return;
}

void Function_134(int iParam0, int iParam1) //Position: 0x4DB4 / 19892
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	bVar0 = Function_402();
	if (!IS_ACTOR_VALID(bVar0))
	{
		return;
	}
	bVar1 = Function_19();
	Function_40(bVar0);
	vVar2 = { StackVal, StackVal, Function_40(bVar0) };
	iParam0->f_148 = FIND_OBJECT_IN_LAYOUT(bVar1, "DeathAnchorPoint");
	if (IS_OBJECT_VALID(iParam0->f_148))
	{
		SET_OBJECT_POSITION(iParam0->f_148, vVar2);
		Function_39(bVar0);
		SET_OBJECT_ORIENTATION(iParam0->f_148, Function_39(bVar0));
	}
	else
	{
		Function_39(bVar0);
		iParam0->f_148 = CREATE_POINT_IN_LAYOUT(bVar1, "DeathAnchorPoint", vVar2, Function_39(bVar0));
	}
	if ((StackVal || (StackVal && iParam1 != 3 != 5)) || !IS_ACTOR_VALID(iParam0->f_104))
	{
		iParam0->f_112 = Function_145(bVar1, 0, iParam0->f_148, 1, 0, 0);
		Function_14(iParam0 + 48, 256);
	}
	else
	{
		Function_40(iParam0->f_104);
		vVar5 = { StackVal, StackVal, Function_40(iParam0->f_104) };
		vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar5, StackVal) };
		VNORMALIZE(&vVar8);
		iParam0->f_112 = Function_137(bVar1, 0, iParam0->f_148, iParam0->f_104, iParam0->f_148, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 1));
		iParam0->f_116 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 2);
		Function_136(iParam0->f_112, 0);
		iParam0->f_120 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 4);
		iParam0->f_124 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(iParam0->f_112, 5);
		Function_14(iParam0 + 48, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(iParam0->f_104);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar8, vVar5, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), vVar8, 1);
	}
	Function_135(iParam0->f_112);
	return;
}

void Function_135(int iParam0) //Position: 0x4F26 / 20262
{
	Function_111();
	Global_63118 = iParam0;
	return;
}

void Function_136(bool bParam0, bool bParam1) //Position: 0x4F34 / 20276
{
	PLAY_CUTSCENEOBJECT(bParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_137(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x4F49 / 20297
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_127(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "DeathCamSwingNew", 6, 1);
	}
	Function_138(&bVar0, uParam2, uParam3, uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_138(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4FCB / 20427
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_144(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_143(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_142(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_141(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_140(&bVar0, uParam1, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_139(&bVar0, uParam1, uParam2, uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 1);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,15f, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 0,65f, 1, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0,1f, 2), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 1, 2, 0,25f, 3, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 1,5f, 4), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 2, 3, 0,35f, 5, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 4, 5, 0,35f, 6, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 2.0f, 7), 1, 0);
}

void Function_139(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x50E6 / 20710
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0,8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43,16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0,411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller");
}

void Function_140(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x51FB / 20987
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0,8f, 0.0f, 1.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(*uParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 43,16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0,411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcFollowKiller_pre");
}

void Function_141(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x5314 / 21268
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,5f, 0,020286f, -0,644309f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcTrackKiller_pst");
}

void Function_142(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x541E / 21534
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1,5f, 0,020286f, -0,644309f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(*uParam0, bParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(*uParam0, "deathArcTrackKiller");
}

void Function_143(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x5524 / 21796
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 3,512409f, 1,385313f, 11,99437f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,000168f, 1,399967f, 0,006852f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_144(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x55D4 / 21972
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 6,044836f, 1,844389f, 8,871694f);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,125951f, 1,612884f, -0,415524f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

var Function_145(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x568B / 22155
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_127(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "nMPSuicide", 2, 1);
	}
	Function_146(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_146(var uParam0, int iParam1) //Position: 0x5702 / 22274
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_148(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_147(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(bVar1, 1, 0);
	return;
}

void Function_147(var uParam0, bool bParam1) //Position: 0x576E / 22382
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 50.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0,221893f, 12.0f, 0,202029f };
	Function_39(bParam1);
	vVar3 = { StackVal, StackVal, Function_39(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_125(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_125(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1,548455f, 1,703024f, 0,63911f };
	Function_39(bParam1);
	vVar6 = { StackVal, StackVal, Function_39(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_125(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_125(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_148(var uParam0, bool bParam1) //Position: 0x5830 / 22576
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { 0,17905f, 10.0f, 0,125767f };
	Function_39(bParam1);
	vVar3 = { StackVal, StackVal, Function_39(bParam1) };
	UNK_0xF76F2BB3(&vVar0, &vVar3, 0, 4);
	Function_125(bParam1);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_125(bParam1), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -1,548457f, 1,703026f, -3,141586f };
	Function_39(bParam1);
	vVar6 = { StackVal, StackVal, Function_39(bParam1) };
	UNK_0x65DAA654(&vVar0, &vVar6, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vVar0, 1);
	Function_125(bParam1);
	SET_CAMERASHOT_TARGET_POSITION(StackVal, Vector(Function_125(bParam1), *uParam0, StackVal) + Vector(0.0f, 1.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_149(int iParam0) //Position: 0x58F2 / 22770
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<16> Var3;
	vector3 vVar19;
	bool bVar22;
	
	if (!Function_251(iParam0->f_48, 2048))
	{
		Function_14(iParam0 + 48, 2048);
		bVar0 = true;
		bVar1 = false;
		if (!IS_ACTOR_VALID(iParam0->f_104))
		{
			UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
			UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
		}
		else if (IS_ACTOR_PLAYER(iParam0->f_104))
		{
			bVar2 = (&Global_78617 + 2604)->f_12;
			if (Function_78(bVar2) && RAND_INT_RANGE(false, 1000) > 500)
			{
				bVar1 = true;
			}
			else
			{
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_151(StackVal) };
				UI_SET_STRING("Generic_Dbuffer128_0", &Var3);
				UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
			}
			UI_SET_TEXT(StackVal, Function_150("MPSplashItem.s1"));
		}
		else if (IS_ACTOR_HUMAN(iParam0->f_104))
		{
			UI_SET_TEXT("MPSplashItem.s1", GET_ACTOR_ENUM_STRING(iParam0->f_104));
			bVar2 = GET_WEAPON_IN_HAND(iParam0->f_104);
			bVar1 = true;
		}
		else
		{
			UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
			UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
		}
		if (bVar0)
		{
			UI_INCLUDE("MPSplashItem.s0");
			UI_INCLUDE("MPSplashItem.s1");
			UI_ENTER("MPSplash");
			UI_EXIT("FameText");
			UI_EXCLUDE("FameText");
			UI_EXIT("SplashObjective");
			UI_EXCLUDE("SplashObjective");
			UI_SET_STYLE("MPSplashTitle", 10);
			if (bVar1)
			{
				if (Function_78(bVar2))
				{
					if (bVar2 == 22)
					{
						UI_SET_TEXT("MPSplashItem.s0", GET_WEAPON_DISPLAY_NAME(bVar2));
					}
					else
					{
						GET_POSITION(iParam0->f_104, &vVar19);
						bVar22 = CEIL((VDIST(vVar19, *(&Global_78617 + 2604 + 16)) * 1,093613f));
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", "%s - %s %s", UI_GET_STRING(GET_WEAPON_DISPLAY_NAME(bVar2)), I2STR(bVar22), UI_GET_STRING("stat_yd"));
						UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
					}
				}
				else
				{
					UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				}
			}
		}
	}
	return;
}

var Function_150(int iParam0) //Position: 0x5C13 / 23571
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MPPlayerNameColored_0";
		
		case 0x00000001:
			return "MPPlayerNameColored_1";
		
		case 0x00000002:
			return "MPPlayerNameColored_2";
		
		case 0x00000003:
			return "MPPlayerNameColored_3";
		
		case 0x00000004:
			return "MPPlayerNameColored_4";
		
		case 0x00000005:
			return "MPPlayerNameColored_5";
		
		case 0x00000006:
			return "MPPlayerNameColored_6";
		
		case 0x00000007:
			return "MPPlayerNameColored_7";
		
		case 0x00000008:
			return "MPPlayerNameColored_8";
		
		case 0x00000009:
			return "MPPlayerNameColored_9";
		
		case 0x0000000A:
			return "MPPlayerNameColored_10";
		
		case 0x0000000B:
			return "MPPlayerNameColored_11";
		
		case 0x0000000C:
			return "MPPlayerNameColored_12";
		
		case 0x0000000D:
			return "MPPlayerNameColored_13";
		
		case 0x0000000E:
			return "MPPlayerNameColored_14";
		
		case 0x0000000F:
			return "MPPlayerNameColored_15";
		
		default:
	}
	return "UNHANDLED SLOT";
}

struct<64> Function_151(bool bParam0) //Position: 0x5E27 / 24103
{
	char* cVar0[64];
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_153();
	}
	if (!Function_152(bParam0))
	{
		strcpy(&cVar0, "Tried to get title from bad slot #", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_76943[bParam096] + 32);
}

bool Function_152(bool bParam0) //Position: 0x5E85 / 24197
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_78617 + 64)[bParam02] > Global_78617.f_60)
	{
		(*&Global_78617 + 64)[bParam02] = Global_78617.f_60;
		(&Global_78617 + 64[bParam02])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_76943, bParam0);
	}
	return StackVal;
}

struct<64> Function_153() //Position: 0x5F26 / 24358
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_78480 + 32);
}

bool Function_154(var uParam0, int iParam1) //Position: 0x5F37 / 24375
{
	if (Function_157(uParam0, iParam1))
	{
		Function_156(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_155(bool bParam0, bool bParam1) //Position: 0x5F51 / 24401
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_NAMED_OBJECT_ITERATOR(Function_19(), "PickupGoldener");
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_GET_INT_VERBOSE(bVar1, "Type", &bVar2))
		{
			if (Function_78(bVar2))
			{
				SET_WEAPON_GOLD(bParam1, bVar2, Global_83823[bVar2]);
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	EVENT_TRAP_CLEAR_EVENTS(bParam0);
	EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_156(var uParam0, int iParam1) //Position: 0x5FCD / 24525
{
	*uParam0 = *iParam1;
	return;
}

bool Function_157(var uParam0, int iParam1) //Position: 0x5FD9 / 24537
{
	return *uParam0 == *iParam1;
}

float Function_158(int iParam0) //Position: 0x5FE6 / 24550
{
	return (*&Global_78480 + 176)[iParam0];
}

void Function_159(var uParam0, int iParam1) //Position: 0x5FF6 / 24566
{
	Function_160(uParam0, (Function_161(uParam0) + iParam1));
	return;
}

void Function_160(int iParam0, int iParam1) //Position: 0x6009 / 24585
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

int Function_161(int iParam0) //Position: 0x6032 / 24626
{
	return (*&Global_78480 + 132)[iParam0];
}

void Function_162(int iParam0, int iParam1) //Position: 0x6042 / 24642
{
	(*&Global_78480 + 176)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 176)[iParam0] = iParam1;
	}
	return;
}

void Function_163(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x606B / 24683
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

var Function_164(int iParam0, bool bParam1, int iParam2) //Position: 0x60B6 / 24758
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_152(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_165(bVar1, iParam0, bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_165(bool bParam0, int iParam1, bool bParam2) //Position: 0x60FD / 24829
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_167(iParam1, bParam2);
	}
	if (!Function_152(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_166(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_76943[bParam096].f_124 && iParam1);
	if (bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_166(int iParam0) //Position: 0x617E / 24958
{
	switch (iParam0)
	{
		case 0x00000002:
			return "DEAD";
			break;
		
		case 0x00000004:
			return "READY";
			break;
		
		case 0x00000008:
			return "POKER_FOLDED";
			break;
		
		case 0x00000010:
			return "RACE_FINISHED";
			break;
		
		case 0x00000020:
			return "REGION_HOST";
			break;
		
		case 0x00000080:
			return "ACTOR_HIDDEN";
			break;
		
		case 0x00000100:
			return "VOTE_TO_START";
			break;
		
		case 0x00000200:
			return "VOTE_TO_SKIP";
			break;
		
		case 0x00000400:
			return "VOTE_TO_REPLAY";
			break;
		
		case 0x00000001:
			return "IS_IN_LOBBY";
			break;
		
		case 0x00000040:
			return "GAME_ARBITRATOR";
			break;
		
		case 0x00000800:
			return "JOINED_GAME";
			break;
		
		case 0x00001000:
			return "SKIP_CUTSCENE";
			break;
		
		case 0x00002000:
			return "START_CUTSCENE";
			break;
		
		case 0x00004000:
			return "IS_SPECTATOR";
			break;
		
		case 0x00008000:
			return "DISTRICT_HOST";
			break;
		
		case 0x00010000:
			return "NEEDS_REVIVAL";
			break;
		
		case 0x00020000:
			return "MP_BIT_MPLAW_MOSTWANTED";
			break;
		
		case 0x00040000:
			return "HAS_VIRAL_ACHIEVEMENT";
			break;
		
		case 0x00080000:
			return "COMBATMODE_CASUAL";
			break;
		
		case 0x00100000:
			return "COMBATMODE_EXPERT";
			break;
		
		case 0x00200000:
			return "IN_ACTOR_PICKER";
			break;
		
		case 0x00400000:
			return "MELEE_BLOCKED";
			break;
		
		case 0x00800000:
			return "BLIND_FIRE";
			break;
	}
	return "UNKNOWN";
}

bool Function_167(int iParam0, bool bParam1) //Position: 0x6407 / 25607
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_168(int iParam0) //Position: 0x6427 / 25639
{
	return Function_169(&Global_79349, iParam0);
}

int Function_169(var uParam0, bool bParam1) //Position: 0x6436 / 25654
{
	return Function_251(uParam0->f_44, bParam1);
}

int Function_170(int iParam0) //Position: 0x6445 / 25669
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(iParam0, 0,4f))
	{
		return 0;
	}
	return 1;
}

var Function_171() //Position: 0x645B / 25691
{
	if (Function_251(Global_79962, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

bool Function_172(bool bParam0) //Position: 0x647B / 25723
{
	return (*bParam0 <= 1 && *bParam0 >= 14);
}

int Function_173() //Position: 0x648D / 25741
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_174(GET_LOCAL_SLOT(), 1, 0);
}

int Function_174(bool bParam0, bool bParam1, bool bParam2) //Position: 0x64A4 / 25764
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_152(bParam0))
			{
				if (!Function_165(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_175() //Position: 0x64E8 / 25832
{
	return Function_168(2);
}

var Function_176(int iParam0, int iParam1) //Position: 0x64F2 / 25842
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_177(int iParam0) //Position: 0x6505 / 25861
{
	return *iParam0 != 11;
}

bool Function_178(int iParam0) //Position: 0x6511 / 25873
{
	return *iParam0 != 1;
}

void Function_179(int iParam0) //Position: 0x651C / 25884
{
	Function_180(&Global_78617 + 52, iParam0);
	return;
}

void Function_180(var uParam0, var uParam1) //Position: 0x652D / 25901
{
	Function_13(uParam0, uParam1);
	return;
}

bool Function_181() //Position: 0x653A / 25914
{
	return Function_182(1);
}

bool Function_182(bool bParam0) //Position: 0x6544 / 25924
{
	return Function_183(Global_78617.f_52, bParam0);
}

int Function_183(var uParam0, bool bParam1) //Position: 0x6555 / 25941
{
	return (uParam0 && bParam1) == 0;
}

void Function_184() //Position: 0x6562 / 25954
{
	NET_LOG(true, "FREEMODE", "Enabling the Ambient World", 0, 0, 0, 0);
	Function_488(1);
	ENABLE_AMBIENT_SPAWNING(true);
	Function_187(6);
	Function_185(312);
	Local_97.f_500 = 1;
	return;
}

void Function_185(int iParam0) //Position: 0x65B0 / 26032
{
	Function_186(&Global_28842, iParam0);
	return;
}

void Function_186(var uParam0, int iParam1) //Position: 0x65BE / 26046
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_187(int iParam0) //Position: 0x65E1 / 26081
{
	Function_188(&Global_28842, iParam0);
	return;
}

void Function_188(var uParam0, int iParam1) //Position: 0x65EF / 26095
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

bool Function_189(int iParam0) //Position: 0x660A / 26122
{
	return Function_190(&Global_28842, iParam0);
}

int Function_190(int iParam0, int iParam1) //Position: 0x6618 / 26136
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_191() //Position: 0x6634 / 26164
{
	int iVar0;
	
	if (Function_192())
	{
		SET_POP_DENSITY_MULTIPLIER(0,4f);
	}
	else if (Global_3386)
	{
		SET_POP_DENSITY_MULTIPLIER(0,6f);
	}
	else if (NET_IS_IN_SESSION())
	{
		iVar0 = NET_GET_AREA_OVERLOAD_STATE_FOR_SLOT(GET_LOCAL_SLOT());
		if (iVar0 == 2)
		{
			SET_POP_DENSITY_MULTIPLIER(1.0f);
		}
		else
		{
			SET_POP_DENSITY_MULTIPLIER(0,6f);
		}
	}
	return;
}

bool Function_192() //Position: 0x667F / 26239
{
	int iVar0;
	
	if (!NET_IS_IN_SESSION())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if ((Global_3386 && Global_76943[iVar096] != Global_29006) || Function_194(iVar0))
		{
			if (Function_193(iVar0) != 4294967295)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int Function_193(int iParam0) //Position: 0x66C6 / 26310
{
	return Global_76943[iParam096].f_112;
}

int Function_194(bool bParam0) //Position: 0x66D6 / 26326
{
	if (bParam0 > 0 || bParam0 <= 16)
	{
		return 0;
	}
	return (Global_79297 && SHIFT_LEFT(true, bParam0)) == 0;
}

void Function_195(var uParam0, int iParam1) //Position: 0x66F8 / 26360
{
	Function_196(uParam0, iParam1, 27319);
	return;
}

void Function_196(var uParam0, var uParam1, int iParam2) //Position: 0x6709 / 26377
{
	if (Function_24(0x4000000))
	{
		Function_23();
		Function_12(0x4000000, 0, 1);
	}
	if (Function_24(0x10000000))
	{
		Function_23();
		Function_12(0x10000000, 0, 1);
	}
	if (Function_24(2) != Function_24(0x2000000))
	{
		Function_23();
		Function_12(0x2000000, Function_24(2), 1);
	}
	if (Function_201())
	{
		Function_200(!Function_24(16));
	}
	if (Function_24(16))
	{
		Function_197(&uParam0, &uParam1, &iParam2);
		if (Function_24(8192))
		{
			if (!Function_24(4194304))
			{
				Function_12(4194304, 1, 1);
				UI_SUPPRESS("nMP_Ticker");
				UI_SUPPRESS("Reticle");
				UI_SUPPRESS("WeaponAmmo");
				UI_EXCLUDE("Reticle");
				UI_EXCLUDE("WeaponAmmo");
			}
			if (!Function_24(8388608))
			{
				Function_12(8388608, 1, 1);
				UI_HIDE("Splash_Message");
				UI_HIDE("Splash_Objective");
				UI_HIDE("Subtitle_Enabler");
				UI_EXCLUDE("Splash_Message");
				UI_EXCLUDE("Splash_Objective");
				UI_EXCLUDE("Subtitle_Enabler");
				SET_HUD_MAP_DRAW_ENABLED(0);
			}
		}
		else
		{
			Function_27();
		}
		Function_12(16384, 1, 1);
	}
	else if (!Function_24(32))
	{
		Function_27();
	}
	Function_12(32768, 0, 1);
	return;
}

void Function_197(var uParam0, var uParam1, int iParam2) //Position: 0x68A2 / 26786
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_12(131072, 0, 0);
	Call_Loc(*uParam0);
	if (!StackVal)
	{
		return;
	}
	bVar2 = Function_24(0x40000000);
	bVar3 = !Function_24(131072);
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			iVar0 = 0;
			if (!Function_152(bVar1))
			{
				iVar0 = 4294967295;
			}
			else if (!Function_165(bVar1, 2048, 1))
			{
				iVar0 = 4294967294;
			}
			else
			{
				Stack.Push(bVar1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push("");
				Call_Loc(*uParam1);
				iVar0 = StackVal;
			}
			if (iVar0 == 0 && bVar3)
			{
				if (Function_198(bVar1, (4294966296 - bVar1), 0))
				{
					NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(4);
					if (iVar0 != 4294967294 && Function_24(4))
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, UI_GET_STRING("mp_list_joined_late"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, UI_GET_STRING("Common_Null"));
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
					}
					else
					{
						NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(1);
					}
				}
			}
			else
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		else if (bVar2)
		{
			if (Function_198(bVar1, (4294966296 - bVar1), 1))
			{
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(false, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(true, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(2, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(3, "DEBUG");
				NET_PLAYER_LIST_SET_CURRENT_ITEM_DEAD(0);
			}
		}
		bVar1++;
	}
	Call_Loc(*iParam2);
	if (!StackVal)
	{
		return;
	}
	return;
}

bool Function_198(bool bParam0, int iParam1, int iParam2) //Position: 0x6A1A / 27162
{
	var uVar0;
	
	return Function_199(bParam0, iParam1, &uVar0, iParam2);
}

int Function_199(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x6A2B / 27179
{
	char* cVar0[32];
	
	if (NET_PLAYER_LIST_SET_CURRENT_ITEM_BY_SLOT(bParam0) != 4294967295)
	{
		*uParam2 = 0;
		NET_PLAYER_LIST_SET_CURRENT_ITEM_PRIORITY(iParam1);
		return 1;
	}
	*uParam2 = 1;
	if (bParam3)
	{
		strcpy(&cVar0, "WWWWWWWWWWWWWW", 32);
		if (bParam0 <= 10)
		{
			stradd(&cVar0, "0", 32);
		}
		stradd(&cVar0, I2STR(bParam0), 32);
		return NET_PLAYER_LIST_ADD_ITEM(&cVar0, iParam1);
	}
	return NET_PLAYER_LIST_ADD_GAMER_SLOT(bParam0, iParam1);
}

void Function_200(bool bParam0) //Position: 0x6A90 / 27280
{
	NET_PLAYER_LIST_RESET();
	if (bParam0)
	{
		NET_PLAYER_LIST_SET_TEMPLATE(4);
	}
	Function_12(16384, 0, 1);
	return;
}

bool Function_201() //Position: 0x6AAA / 27306
{
	return Function_24(32768);
}

int Function_202() //Position: 0x6AB7 / 27319
{
	return 1;
}

int Function_203(bool bParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x6ABE / 27326
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	Function_208(bParam1, uParam2, uParam3);
	iVar0 = Function_207(bParam0);
	if (iVar0 == Function_206())
	{
		iVar1 = ((CEIL(Function_205(1, bParam0)) / 1000) + 5000000);
	}
	else
	{
		iVar1 = ((CEIL(Function_205(1, bParam0)) / 1000) + iVar0 * 10000);
	}
	if (!bParam1)
	{
		Function_198(bParam0, iVar1, 0);
	}
	bVar2 = false;
	memcpy(&uVar3, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_204(iVar0), 16);
	NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, UI_GET_STRING(&uVar3));
	bVar2++;
	if (Function_165(bParam0, 131072, 1))
	{
		NET_PLAYER_LIST_SET_CURRENT_ITEM_MSCORE_STRING(bVar2, "<SKULL>");
	}
	return 0;
}

struct<32> Function_204(int iParam0) //Position: 0x6B56 / 27478
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_9(iParam0))
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

float Function_205(int iParam0, bool bParam1) //Position: 0x6C13 / 27667
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_158(iParam0);
	}
	if (!Function_152(bParam1))
	{
		strcpy(&cVar0, "Tried to get genfloat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_76943[bParam196] + 176)[iParam0];
}

int Function_206() //Position: 0x6C7C / 27772
{
	return Global_78480;
}

int Function_207(bool bParam0) //Position: 0x6C86 / 27782
{
	if (!Function_152(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_206();
	}
	return Global_76943[bParam096];
}

void Function_208(bool bParam0, int iParam1, char* cParam2) //Position: 0x6CAB / 27819
{
	if (bParam0)
	{
		if (Function_201())
		{
			NET_PLAYER_LIST_ADD_ITEM(cParam2, iParam1);
		}
		else
		{
			NET_PLAYER_LIST_SET_CURRENT_ITEM(iParam1);
		}
	}
	return;
}

int Function_209() //Position: 0x6CCC / 27852
{
	if (!Function_211(1))
	{
		return 0;
	}
	NET_PLAYER_LIST_SET_TEAM_SORT(0);
	NET_PLAYER_LIST_SET_HEADER(0, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(1, "mp_plist_name");
	NET_PLAYER_LIST_SET_HEADER(2, "mp_plist_region");
	NET_PLAYER_LIST_SET_HEADER(3, "mp_plist_mw");
	NET_PLAYER_LIST_SET_HEADER(4, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(5, "Common_Null");
	NET_PLAYER_LIST_SET_HEADER(6, "Common_Null");
	Function_210();
	return 1;
}

void Function_210() //Position: 0x6D68 / 28008
{
	if (Function_24(4096))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(25);
		Function_12(8192, 1, 1);
	}
	else if (Function_24(4))
	{
		NET_PLAYER_LIST_SET_TEMPLATE(7);
		Function_12(8192, 1, 1);
	}
	else
	{
		Function_12(8192, 0, 1);
	}
	return;
}

bool Function_211(bool bParam0) //Position: 0x6DA5 / 28069
{
	char* cVar0[64];
	
	if (bParam0)
	{
		if (Function_201() || Function_215(&Global_76905 + 64, &Global_79349))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_213(1) };
			stradd(&cVar0, "_title", 64);
			NET_PLAYER_LIST_SET_TITLE(&cVar0);
			memcpy(&Global_76905 + 64, StackVal, StackVal, StackVal, Global_79349, 16);
		}
	}
	if (!NET_IS_IN_SESSION())
	{
		if (Function_201())
		{
			NET_PLAYER_LIST_ADD_ITEM(UI_GET_STRING("net_pl_unsession"), 25);
			NET_PLAYER_LIST_SET_CURRENT_ITEM_TEAM(1);
		}
		return 0;
	}
	Function_212(Function_201());
	return 1;
}

void Function_212(bool bParam0) //Position: 0x6E26 / 28198
{
	if (bParam0 || Function_24(0x4000000))
	{
		NET_PLAYER_LIST_SET_DESCRIPTION(&Global_76905);
	}
	if (bParam0 || Function_24(0x20000000))
	{
		NET_PLAYER_LIST_TIMER_SET(Global_76905.f_128);
		NET_PLAYER_LIST_TIMER_ENABLE_FLASHING(Function_24(65536));
		if ((Global_76905.f_128 <= 0 && !bParam0) && ((Function_24(1048576) || Function_24(4)) || Function_167(1, 1)))
		{
			PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
		}
		Function_12(0x20000000, 0, 1);
	}
	return;
}

struct<64> Function_213(var uParam0) //Position: 0x6EAF / 28335
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_214(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_79349, uParam0);
}

struct<64> Function_214(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29) //Position: 0x6EC3 / 28355
{
	char* cVar0[64];
	
	if (bParam29)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 48) };
	}
	else
	{
		strcpy(&cVar0, UI_GET_STRING(&iParam0 + 48), 64);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "nINVALID!?", 64);
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_215(bool bParam0, bool bParam1) //Position: 0x6F08 / 28424
{
	if (IS_STRING_VALID(bParam0) != IS_STRING_VALID(bParam1))
	{
		return 1;
	}
	if (!IS_STRING_VALID(bParam0))
	{
		return 0;
	}
	if (!STRINGS_ARE_EQUAL(bParam0, bParam1))
	{
		return 1;
	}
	return 0;
}

bool Function_216(int iParam0, float fParam1) //Position: 0x6F3C / 28476
{
	if (Function_45(iParam0, fParam1))
	{
		Function_25(iParam0);
		return 1;
	}
	return 0;
}

void Function_217() //Position: 0x6F54 / 28500
{
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(42))
	{
		if (NET_GET_PLAYMODE() == 0)
		{
			if ((GET_HOUR(GET_TIME_OF_DAY()) > 5 || GET_HOUR(GET_TIME_OF_DAY()) < 18) || (IS_PLAYER_TELEPORTING() || Global_3391))
			{
				if (Local_97.f_508)
				{
					Local_97.f_508 = 0;
				}
			}
			else if (!Local_97.f_508)
			{
				if (Global_29006 != Global_30717[0] && !HUD_IS_FADED())
				{
					Local_97.f_508 = 1;
				}
			}
			else if (Global_29006 == Global_30685[0])
			{
				AWARD_ACHIEVEMENT(42);
			}
		}
	}
	return;
}

void Function_218() //Position: 0x6FCE / 28622
{
	Function_219();
	return;
}

void Function_219() //Position: 0x6FD7 / 28631
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (NET_IS_IN_SESSION())
	{
		iVar1 = NET_GET_SESSION_GAMER_COUNT();
	}
	if (Local_27[StackVal4] == Global_78480.f_24)
	{
		Function_8(StackVal);
	}
	else
	{
		Function_222(StackVal);
	}
	if (iVar1 >= 1)
	{
		bVar0 = false;
		iVar2 = 0;
		while (iVar2 > 16 && !bVar0)
		{
			if (Function_221(iVar2))
			{
				if (StackVal == Local_27[Global_76943[iVar296].f_244])
				{
					bVar0 = true;
				}
			}
			iVar2++;
		}
		if (bVar0)
		{
			Function_220(StackVal, 1);
		}
		else
		{
			Function_220(StackVal, 0);
		}
	}
	else
	{
		Function_220(StackVal, 0);
	}
	Local_68.f_4 = (StackVal + 1 % 10);
	return;
}

void Function_220(int iParam0, bool bParam1) //Position: 0x707E / 28798
{
	if (StackVal != bParam1)
	{
		if (bParam1)
		{
			if (IS_BLIP_VALID(Local_27[iParam04].f_12))
			{
				SET_BLIP_BLINK(Local_27[iParam04].f_12, 1, 0, -1.0f);
			}
			if (IS_BLIP_VALID(StackVal))
			{
				SET_BLIP_BLINK(StackVal, 1, 0, -1.0f);
			}
		}
		else
		{
			if (IS_BLIP_VALID(Local_27[iParam04].f_12))
			{
				SET_BLIP_BLINK(Local_27[iParam04].f_12, 0, 0, -1.0f);
			}
			if (IS_BLIP_VALID(StackVal))
			{
				SET_BLIP_BLINK(StackVal, 0, 0, -1.0f);
			}
		}
		Local_27[iParam04].f_4 = bParam1;
	}
	return;
}

bool Function_221(bool bParam0) //Position: 0x7113 / 28947
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_152(bParam0);
}

void Function_222(int iParam0) //Position: 0x7129 / 28969
{
	bool bVar0;
	struct<8> Var1;
	var uVar9;
	
	if (Function_9(Local_27[iParam04]))
	{
		if (Local_27[iParam04] != Global_78480.f_24)
		{
			bVar0 = StackVal;
			if (IS_VOLUME_VALID(bVar0))
			{
				if (!IS_BLIP_VALID(StackVal))
				{
					Local_27[iParam04].f_8 = Function_223(bVar0, bLocal_26, 0x40a00000);
					Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_204(Local_27[iParam04]) };
					SET_BLIP_NAME(StackVal, &Var1);
					UNK_0x1E98AFEC(StackVal, 1);
					SET_BLIP_MAX_DISTANCE(StackVal, 10.0f);
					SET_BLIP_MIN_DISTANCE(StackVal, 0.0f);
					GET_VOLUME_CENTER(bVar0, &uVar9);
					Local_27[iParam04].f_12 = ADD_BLIP_FOR_COORD(&uVar9, bLocal_26, 0, 2, 0);
					UNK_0xFF3DB575(Local_27[iParam04].f_12, 1);
				}
			}
		}
	}
	return;
}

var Function_223(bool bParam0, bool bParam1, float fParam2) //Position: 0x71EC / 29164
{
	bool bVar0;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return "";
	}
	bVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (IS_BLIP_VALID(bVar0))
	{
		if (GET_BLIP_ICON(bVar0) == bParam1)
		{
			return bVar0;
		}
		REMOVE_BLIP(bVar0);
	}
	bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, bParam1, fParam2, 2, 0);
	if (IS_BLIP_VALID(bVar0))
	{
		return bVar0;
	}
	return "";
}

void Function_224(int iParam0) //Position: 0x7239 / 29241
{
	int iVar0;
	bool bVar1;
	
	switch (iParam0)
	{
		case 0x00000006:
			if (Function_237(8))
			{
				Function_236("HUD_MP_OUTRO_MASTER");
				PRINT_BIG("XP_Legend_Now", 1084227584, 0, 2, 0);
				Function_235(8);
				Function_238(16);
			}
			else
			{
				Function_234();
			}
			break;
		
		case 0x00000010:
			if (Function_237(16))
			{
				Function_163("XP_Legend_symbol_hlp", 0x41200000, 1, 0, 2, 1, 0);
				Function_163("XP_Legend_avatar_hlp", 0x41200000, 1, 0, 2, 1, 0);
				Function_163("XP_Legend_mount_hlp", 0x41200000, 1, 0, 2, 1, 0);
				Function_235(16);
			}
			break;
	}
	if (Function_233() || Function_457(32768))
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000258:
		case 0x00000E10:
			iVar0 = 0;
			while (iVar0 <= 35)
			{
				bVar1 = Function_232(iVar0);
				if (bVar1 >= 0)
				{
					switch (GET_JOURNAL_ENTRY_TYPE(bVar1))
					{
						case 0x00000003:
							Function_163("mp_challenge_help", 0x41200000, 1, 0, 2, 1, 0);
							return;
							break;
						}
				}
				iVar0++;
			}
			break;
		
		case 0x00000384:
			if ((Function_231(996) && !Function_229(996)) || ((Function_231(987) && !Function_229(987)) && Function_228() != 1000))
			{
				Function_163("mp_mount_help", 0x41200000, 1, 0, 2, 1, 0);
			}
			break;
		
		case 0x000004B0:
			if (Function_225(0))
			{
				Function_163("mp_title_help", 0x41200000, 1, 0, 2, 1, 0);
				iLocal_88 = 1;
			}
			break;
		
		case 0x000004B5:
			if (iLocal_88 != 0 && Function_225(1))
			{
				Function_163("mp_title_help", 0x41200000, 1, 0, 2, 1, 0);
				iLocal_88 = 1;
			}
			break;
		
		case 0x000004BA:
			if (iLocal_88 != 0 && Function_225(2))
			{
				Function_163("mp_title_help", 0x41200000, 1, 0, 2, 1, 0);
				iLocal_88 = 1;
			}
			break;
		
		case 0x000004BF:
			if (iLocal_88 != 0 && Function_225(3))
			{
				Function_163("mp_title_help", 0x41200000, 1, 0, 2, 1, 0);
				iLocal_88 = 1;
			}
			break;
	}
	return;
}

bool Function_225(int iParam0) //Position: 0x74B3 / 29875
{
	int iVar0;
	
	iLocal_87 = iParam0;
	while (iLocal_87 < (&Global_83864 + 1288[iParam017])->f_64)
	{
		iVar0 = (iParam0 * 1000 + iLocal_87);
		if (iParam0 == 0)
		{
		}
		else if ((iParam0 != 1 || iParam0 != 2) || iParam0 != 3)
		{
			iVar0++;
		}
		if (Function_227(iVar0) && !Function_226(iVar0))
		{
			return 1;
		}
		iLocal_87++;
	}
	return 0;
}

bool Function_226(int iParam0) //Position: 0x7514 / 29972
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	return Function_251((*&Global_84364 + 4[(iParam0 / 1000)10] + 20)[(iVar0 / 32)], Function_74((iVar0 % 32)));
}

bool Function_227(bool bParam0) //Position: 0x7544 / 30020
{
	int iVar0;
	
	iVar0 = (bParam0 % 1000);
	return Function_251((*&Global_84364 + 4[(bParam0 / 1000)10])[(iVar0 / 32)], Function_74((iVar0 % 32)));
}

int Function_228() //Position: 0x7572 / 30066
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

bool Function_229(int iParam0) //Position: 0x758C / 30092
{
	return Function_251(Global_84364.f_772, Function_74(Function_230(iParam0)));
}

bool Function_230(int iParam0) //Position: 0x75A4 / 30116
{
	switch (iParam0)
	{
		case 0x000003E8:
			return 0;
			break;
		
		case 0x000003E4:
			return 1;
			break;
		
		case 0x000003DB:
			return 2;
			break;
		
		case 0x000003D0:
			return 3;
			break;
		
		case 0x000003D6:
			return 4;
			break;
		
		case 0x000003D3:
			return 5;
			break;
		
		case 0x000003EE:
			return 6;
			break;
		
		case 0x000003EC:
			return 7;
			break;
		
		case 0x000003ED:
			return 8;
			break;
		
		case 0x000003EF:
			return 9;
			break;
		
		case 0x000003EB:
			return 10;
			break;
		
		default:
			LOG_ERROR("INVALID HORSE PASSED IN TO GET_MOUNT_INDEX! GIVING AE_RIDEABLE_ANIMAL_MEX_Mule01");
			return 0;
			break;
	}
	return 0;
}

int Function_231(int iParam0) //Position: 0x7689 / 30345
{
	return Function_183((*&Global_83864 + 1204)[Function_230(iParam0)], 1);
}

bool Function_232(int iParam0) //Position: 0x76A1 / 30369
{
	if (Function_64() || Global_34165.f_44)
	{
		return Global_49399[iParam022].f_24;
	}
	return Global_49310[iParam022].f_24;
}

bool Function_233() //Position: 0x76C9 / 30409
{
	return Global_78480.f_24 == 4294967294;
}

void Function_234() //Position: 0x76D9 / 30425
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (Function_237(4))
	{
		Function_235(4);
		iVar0 = 0;
		while (iVar0 <= 35)
		{
			bVar2 = Function_232(iVar0);
			if (bVar2 >= 0)
			{
				if (IS_JOURNAL_ENTRY_UPDATED(bVar2))
				{
					Function_163("mp_challenge_help", 0x41200000, 1, 0, 2, 1, 0);
					return;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 <= 259)
		{
			bVar2 = Function_120(iVar1);
			if (bVar2 >= 0)
			{
				if (IS_JOURNAL_ENTRY_UPDATED(bVar2))
				{
					Function_163("mp_challenge_help", 0x41200000, 1, 0, 2, 1, 0);
					return;
				}
			}
			iVar1++;
		}
	}
	return;
}

void Function_235(int iParam0) //Position: 0x7785 / 30597
{
	Function_180(&Global_83864 + 1256, iParam0);
	return;
}

void Function_236(bool bParam0) //Position: 0x7797 / 30615
{
	UI_HIDE("MPReward");
	if (IS_STRING_VALID(bParam0))
	{
		PLAY_SOUND_FRONTEND(bParam0);
	}
	return;
}

bool Function_237(bool bParam0) //Position: 0x77B8 / 30648
{
	return Function_183(Global_83864.f_1256, bParam0);
}

void Function_238(int iParam0) //Position: 0x77CA / 30666
{
	Function_44(&Global_83864 + 1256, iParam0);
	return;
}

void Function_239(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x77DC / 30684
{
	if (iParam6 != 0)
	{
		UI_TEXTURE_SET_HASH("MPRankTexture", iParam6);
	}
	else
	{
		UI_TEXTURE_SET_NAME("MPRankTexture", uParam0);
	}
	UI_SET_TEXT("MPRewardTitle", bParam1);
	if (iParam5 != 0)
	{
		UI_SET_TEXT_HASH("MPRewardItem.s0", iParam5);
	}
	else
	{
		UI_SET_TEXT("MPRewardItem.s0", bParam2);
	}
	UI_SHOW("MPReward");
	UI_SHOW("MPRewardItem.s0");
	UI_SET_STYLE("MPRewardTitle", iParam4);
	UI_REFRESH("MPRewardItem.s0");
	UI_SHOW("MPRewardItem.s1");
	UI_SET_TEXT("MPRewardItem.s1", "Common_Null");
	PLAY_SOUND_FRONTEND(bParam3);
}

struct<32> Function_240(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x78ED / 30957
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_241("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_241("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_241("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_241(char* cParam0, char* cParam1) //Position: 0x79E2 / 31202
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_242() //Position: 0x79FB / 31227
{
	if (!Function_250(161, 2))
	{
		Function_249(161, 2);
		Function_243(161, 0, 0, 0);
	}
	if (!Function_250(162, 2))
	{
		Function_249(162, 2);
		Function_243(162, 0, 0, 0);
	}
	if (!Function_250(163, 2))
	{
		Function_249(163, 2);
		Function_243(163, 0, 0, 0);
	}
	if (!Function_250(164, 2))
	{
		Function_249(164, 2);
		Function_243(164, 0, 0, 0);
	}
	if (!Function_250(165, 2))
	{
		Function_249(165, 2);
		Function_243(165, 0, 0, 0);
	}
	if (!Function_250(166, 2))
	{
		Function_249(166, 2);
		Function_243(166, 0, 0, 0);
	}
	if (!Function_250(167, 2))
	{
		Function_249(167, 2);
		Function_243(167, 0, 0, 0);
	}
	if (!Function_250(168, 2))
	{
		Function_249(168, 2);
		Function_243(168, 0, 0, 0);
	}
	if (!Function_250(169, 2))
	{
		Function_249(169, 2);
		Function_243(169, 0, 0, 0);
	}
	if (!Function_250(172, 2))
	{
		Function_249(172, 2);
		Function_243(172, 0, 0, 0);
	}
	if (!Function_250(175, 2))
	{
		Function_249(175, 2);
		Function_243(175, 0, 0, 0);
	}
	if (!Function_250(178, 2))
	{
		Function_249(178, 2);
		Function_243(178, 0, 0, 0);
	}
	if (!Function_250(181, 2))
	{
		Function_249(181, 2);
		Function_243(181, 0, 0, 0);
	}
	if (!Function_250(184, 2))
	{
		Function_249(184, 2);
		Function_243(184, 0, 0, 0);
	}
	return;
}

void Function_243(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7B51 / 31569
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_248(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_120(iParam0));
	if ((bParam3 && Function_250(iParam0, 4)) || !bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_120(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_247(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_119(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_246(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_245(iParam0) };
			UI_SET_STRING(&Var11, I2STR(bParam1));
			UI_SET_STRING(&Var17, I2STR(bParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_244(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_120(iParam0), &Var7, 0, 2, Function_250(iParam0, 4));
			if (!bParam3)
			{
				Function_249(iParam0, 4);
			}
		}
	}
}

struct<16> Function_244(int iParam0) //Position: 0x7C0E / 31758
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_119(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_245(int iParam0) //Position: 0x7C2E / 31790
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_246(int iParam0) //Position: 0x7C5C / 31836
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_247(int iParam0) //Position: 0x7C8C / 31884
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_248(int iParam0) //Position: 0x7CBD / 31933
{
	switch (iParam0)
	{
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000044:
		case 0x00000048:
		case 0x0000004C:
		case 0x0000004F:
		case 0x00000052:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x0000005A:
		case 0x0000005D:
		case 0x00000060:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000068:
		case 0x0000006B:
		case 0x0000006E:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000076:
		case 0x00000079:
		case 0x0000007C:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000081:
		case 0x00000084:
		case 0x00000087:
		case 0x0000008A:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000092:
		case 0x00000095:
		case 0x00000098:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x000000A0:
		case 0x000000A1:
		case 0x000000A2:
		case 0x000000A3:
		case 0x000000A4:
		case 0x000000A5:
		case 0x000000A6:
		case 0x000000A7:
		case 0x000000A8:
		case 0x000000AB:
		case 0x000000AE:
		case 0x000000B1:
		case 0x000000B4:
		case 0x000000B7:
		case 0x000000BA:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_249(int iParam0, int iParam1) //Position: 0x7E3B / 32315
{
	Function_14(&Global_50170[iParam022] + 32, iParam1);
	return;
}

bool Function_250(int iParam0, bool bParam1) //Position: 0x7E4F / 32335
{
	return Function_251(Global_50170[iParam022].f_32, bParam1);
}

bool Function_251(int iParam0, bool bParam1) //Position: 0x7E63 / 32355
{
	return (iParam0 && bParam1) == 0;
}

void Function_252() //Position: 0x7E70 / 32368
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 259)
	{
		Global_56352[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_253() //Position: 0x7E92 / 32402
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			iVar2 = 0;
			while (iVar2 <= 8)
			{
				Function_13(&(Global_55869[iVar037][iVar118][iVar2]), 1);
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	return;
}

void Function_254() //Position: 0x7EE2 / 32482
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Function_13(&Global_84364 + 712[iVar0], 1);
		iVar0++;
	}
	return;
}

void Function_255() //Position: 0x7F09 / 32521
{
	Function_286();
	Function_263();
	if (Function_476("npressDemo"))
	{
		Function_260(3, 3, 0);
		Function_259(3, 6);
		Function_257(11, 0, 0);
	}
	Function_256();
	Global_88795 = 1;
	return;
}

void Function_256() //Position: 0x7F43 / 32579
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_56612[iVar09] = 4294967294;
		Global_56612[iVar09].f_4 = 0.0f;
		Global_56612[iVar09].f_8 = 0;
		Global_56612[iVar09].f_20 = 0;
		Global_56612[iVar09].f_24 = 0;
		iVar0++;
	}
	Global_56612.f_296 = 0;
	Global_56612.f_300 = 0;
	Global_56612.f_292 = 0;
	return;
}

int Function_257(bool bParam0, bool bParam1, int iParam2) //Position: 0x7FA3 / 32675
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_258(bParam0), Function_402()) == 0)
		{
			ADD_ITEM(Function_258(bParam0), Function_402(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_258(bParam0), Function_402(), iParam2);
	return 1;
}

var Function_258(bool bParam0) //Position: 0x7FEE / 32750
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

void Function_259(int iParam0, int iParam1) //Position: 0x80E2 / 32994
{
	if (Function_64() || Global_34165.f_44)
	{
		Global_49399[iParam022].f_8 = iParam1;
		Global_49399[iParam022].f_4 = 0;
		Global_49399[iParam022].f_12 = 0.0f;
	}
	else
	{
		Global_49310[iParam022].f_8 = iParam1;
		Global_49310[iParam022].f_4 = 0;
		Global_49310[iParam022].f_12 = 0.0f;
	}
	return;
}

var Function_260(int iParam0, int iParam1, int iParam2) //Position: 0x8135 / 33077
{
	struct<6> Var0;
	var uVar6;
	var uVar10;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_262(iParam0) };
	if (Function_64() || Global_34165.f_44)
	{
		Global_49399[iParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, iParam1, false, iParam2);
		memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_261(iParam0), 4);
		UI_SET_STRING(&Var0, UI_GET_STRING(&uVar6));
		return Global_49399[iParam022].f_24;
	}
	Global_49310[iParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, iParam1, false, iParam2);
	memcpy(&uVar10, StackVal, StackVal, StackVal, StackVal, StackVal, Function_261(iParam0), 4);
	UI_SET_STRING(&Var0, UI_GET_STRING(&uVar10));
	return Global_49310[iParam022].f_24;
}

struct<24> Function_261(int iParam0) //Position: 0x81B4 / 33204
{
	char* cVar0[24];
	
	if (Function_64() || Global_34165.f_44)
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

struct<24> Function_262(int iParam0) //Position: 0x8226 / 33318
{
	char* cVar0[24];
	
	if (Function_64() || Global_34165.f_44)
	{
		memcpy(&cVar0, StackVal, *(&Global_49399[iParam022] + 16), 6);
		stradd(&cVar0, "_DYNAMIC_TITLE", 24);
		return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	memcpy(&cVar0, StackVal, *(&Global_49310[iParam022] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_263() //Position: 0x8292 / 33426
{
	if (Global_34165.f_44)
	{
		Function_273(0, &Global_49399, "AM_SS", 3, 0, Function_285());
		Function_273(1, &Global_49399, "AM_MH", 3, 0, Function_272());
		Function_273(2, &Global_49399, "AM_SU", 3, 0, Function_271());
		Function_273(3, &Global_49399, "AM_TH", 3, 0, Function_270());
		Function_273(7, &Global_49399, "AM_LB", 3, 1, Function_270());
		Function_273(4, &Global_49399, "AM_SS2", 3, 1, Function_269());
		Function_273(5, &Global_49399, "AM_MH2", 3, 1, Function_268());
		Function_273(6, &Global_49399, "AM_SU2", 3, 1, Function_267());
		Function_273(8, &Global_49399, "AM_LB2", 3, 1, Function_270());
		Function_273(9, &Global_49399, "AM_LB3", 3, 1, Function_270());
		Function_273(22, &Global_49399, "OC_MW", 3, 1, Function_266());
		Function_273(23, &Global_49399, "OC_BO", 3, 1, Function_266());
		Function_273(24, &Global_49399, "OC_B2", 3, 1, Function_265());
		Function_273(10, &Global_49399, "WP_DYN", 5, 1, Function_285());
		Function_273(11, &Global_49399, "WP_DYN2", 5, 1, Function_269());
		Function_273(12, &Global_49399, "WP_PYR", 5, 1, Function_285());
		Function_273(13, &Global_49399, "WP_PYR2", 5, 1, Function_269());
		Function_273(14, &Global_49399, "ST_TF", 8, 1, Function_264());
		Function_273(15, &Global_49399, "ST_TH", 8, 1, Function_264());
		Function_273(16, &Global_49399, "ST_TS", 8, 1, Function_264());
		Function_273(17, &Global_49399, "ST_TW", 8, 1, Function_264());
		Function_273(18, &Global_49399, "ST_RH", 8, 1, Function_264());
		Function_273(19, &Global_49399, "ST_RW", 8, 1, Function_264());
		Function_273(21, &Global_49399, "ST_RC", 8, 1, Function_264());
		Function_273(20, &Global_49399, "ST_FD", 8, 1, Function_264());
	}
	else
	{
		Function_273(0, &Global_49310, "AM_SS", 3, 0, "challenge_01");
		Function_273(1, &Global_49310, "AM_MH", 3, 0, "challenge_02");
		Function_273(2, &Global_49310, "AM_SU", 3, 0, "challenge_03");
		Function_273(3, &Global_49310, "AM_TH", 3, 0, "challenge_04");
	}
	return;
}

bool Function_264() //Position: 0x853B / 34107
{
	return "SC_Travel_Icon";
}

bool Function_265() //Position: 0x8552 / 34130
{
	return "challenge_04lvl2";
}

bool Function_266() //Position: 0x856B / 34155
{
	return "challenge_04";
}

bool Function_267() //Position: 0x8580 / 34176
{
	return "challenge_03lvl2";
}

bool Function_268() //Position: 0x8599 / 34201
{
	return "challenge_02lvl2";
}

bool Function_269() //Position: 0x85B2 / 34226
{
	return "challenge_01lvl2";
}

bool Function_270() //Position: 0x85CB / 34251
{
	return "challenge_05";
}

bool Function_271() //Position: 0x85E0 / 34272
{
	return "challenge_03";
}

bool Function_272() //Position: 0x85F5 / 34293
{
	return "challenge_02";
}

void Function_273(int iParam0, int iParam1, char* cParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x860A / 34314
{
	int iVar0;
	var uVar1;
	
	strcpy(iParam1[iParam022] + 16, cParam2, 8);
	(*iParam1)[iParam022] = iParam0;
	iParam1[iParam022]->f_84 = bParam4;
	if (Global_3364 || Global_83864.f_1276)
	{
		iParam1[iParam022]->f_8 = 0;
		if (Global_34165.f_44)
		{
			Global_49399[iParam022].f_28 = 0;
			Global_49399[iParam022].f_12 = 0.0f;
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				(*&Global_49399[iParam022] + 36)[iVar0] = 0.0f;
				iVar0++;
			}
		}
		else
		{
			Global_49310[iParam022].f_28 = 0;
			Global_49310[iParam022].f_12 = 0.0f;
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				(*&Global_49310[iParam022] + 36)[iVar0] = 0.0f;
				iVar0++;
			}
		}
	}
	if (Global_83864.f_1276)
	{
		Function_284(iParam0, 4);
		Function_284(iParam0, 2);
		Function_283(iParam0, 0);
		Function_283(iParam0, 1);
		uVar1 = Function_282(iParam0);
		Function_281(&uVar1);
		Function_279(iParam0, 1);
	}
	if (bParam4)
	{
		if (!Global_34165.f_44)
		{
			iParam1[iParam022]->f_4 = 1;
			iParam1[iParam022]->f_8 = 0;
			return;
		}
	}
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = "challenge_04";
	}
	Function_260(iParam0, iParam3, bParam5);
	Function_276(iParam0, 1);
	if (StackVal && StackVal != 2 != 10)
	{
		Function_274(iParam0);
	}
	else
	{
		iParam1[iParam022]->f_4 = 0;
		iParam1[iParam022]->f_12 = 0.0f;
		SET_JOURNAL_ENTRY_PROGRESS(Function_232(iParam0), 0.0f, true, 0);
	}
}

void Function_274(int iParam0) //Position: 0x877B / 34683
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_232(iParam0));
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_262(iParam0) };
	if (Function_64() || Global_34165.f_44)
	{
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_261(iParam0) };
	}
	else
	{
		memcpy(&Var6, StackVal, *(&Global_49310[iParam022] + 16), 6);
	}
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_275(iParam0) };
	APPEND_JOURNAL_ENTRY_DETAIL(Function_232(iParam0), &Var6, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Function_232(iParam0), true);
	SET_JOURNAL_ENTRY_PROGRESS(Function_232(iParam0), 1.0f, false, 0);
	return;
}

struct<24> Function_275(int iParam0) //Position: 0x87EE / 34798
{
	char* cVar0[24];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_261(iParam0) };
	if (Global_34165.f_44 || Function_64())
	{
		stradd(&cVar0, "_mp_des", 24);
		if (!IS_STRING_VALID(UI_GET_STRING(&cVar0)))
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_261(iParam0) };
			stradd(&cVar0, "_des", 24);
		}
	}
	else
	{
		stradd(&cVar0, "_des", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_276(int iParam0, bool bParam1) //Position: 0x884B / 34891
{
	struct<6> Var0;
	struct<6> Var6;
	
	CLEAR_JOURNAL_ENTRY(Function_232(iParam0));
	if ((bParam1 && Function_278(iParam0, 4)) || !bParam1)
	{
		PREPEND_JOURNAL_ENTRY(Function_232(iParam0), false);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_262(iParam0) };
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_261(iParam0) };
		UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_275(iParam0) };
		PREPEND_JOURNAL_ENTRY_DETAIL(Function_232(iParam0), &Var6, 0, 2, Function_278(iParam0, 4));
		if (iParam0 == 3)
		{
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_232(iParam0), "nAM_MAPHLP", 0, 2, true);
		}
		if (!bParam1)
		{
			Function_277(iParam0, 4);
		}
	}
	return;
}

void Function_277(int iParam0, int iParam1) //Position: 0x88D2 / 35026
{
	if (Function_64() || Global_34165.f_44)
	{
		Function_14(&Global_49399[iParam022] + 32, iParam1);
	}
	else
	{
		Function_14(&Global_49310[iParam022] + 32, iParam1);
	}
	return;
}

bool Function_278(int iParam0, bool bParam1) //Position: 0x8903 / 35075
{
	if (Function_64() || Global_34165.f_44)
	{
		return Function_251(Global_49399[iParam022].f_32, bParam1);
	}
	return Function_251(Global_49310[iParam022].f_32, bParam1);
}

void Function_279(bool bParam0, bool bParam1) //Position: 0x8935 / 35125
{
	bool bVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar0 = false;
	bVar1 = Function_280();
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
			if (Function_64() || Global_34165.f_44)
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
			if (Function_64() || Global_34165.f_44)
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
		if (Function_64() || Global_34165.f_44)
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

var Function_280() //Position: 0x8AF5 / 35573
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_281(int iParam0) //Position: 0x8B42 / 35650
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(*iParam0))
	{
		bVar0 = false;
		if (GET_OBJECTSET_SIZE(*iParam0) >= bVar0)
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *iParam0);
			while (IS_OBJECT_VALID(bVar1))
			{
				if (DECOR_CHECK_EXIST(bVar1, "AM_NO_PURGE"))
				{
					bVar2 = DECOR_GET_INT(bVar1, "AM_NO_PURGE");
					bVar2 = (bVar2 - 1);
					DECOR_SET_INT(bVar1, "AM_NO_PURGE", bVar2);
				}
				bVar0++;
				if (GET_OBJECTSET_SIZE(*iParam0) >= bVar0)
				{
					bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *iParam0);
				}
				else
				{
					bVar1 = "";
				}
			}
		}
		DISBAND_OBJECTSET(*iParam0);
	}
	else
	{
		LOG_ERROR("AM_PURGE_COLLECTION: attempting to disband an invalid objectset");
	}
	return;
}

var Function_282(int iParam0) //Position: 0x8C2B / 35883
{
	int iVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar1 = Function_280();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		strcpy(&cVar2, "nAM_OBJSET", 16);
		straddi(&cVar2, iParam0, 16);
		iVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar1, &cVar2));
	}
	return iVar0;
}

void Function_283(int iParam0, bool bParam1) //Position: 0x8C62 / 35938
{
	if (Global_34165.f_44)
	{
		REMOVE_JOURNAL_ENTRY(Global_49399[iParam022].f_24, bParam1);
	}
	else
	{
		REMOVE_JOURNAL_ENTRY(Global_49310[iParam022].f_24, bParam1);
	}
	return;
}

void Function_284(int iParam0, int iParam1) //Position: 0x8C8F / 35983
{
	if (Global_34165.f_44)
	{
		Function_13(&Global_49399[iParam022] + 32, iParam1);
	}
	else
	{
		Function_13(&Global_49310[iParam022] + 32, iParam1);
	}
	return;
}

bool Function_285() //Position: 0x8CBC / 36028
{
	return "challenge_01";
}

void Function_286() //Position: 0x8CD1 / 36049
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	char* cVar3[16];
	char* cVar7[16];
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (Global_63000 - 1))
	{
		Function_288(bVar0);
		bVar0++;
	}
	bVar1 = Function_280();
	bVar2 = Function_287();
	if (Global_34165.f_44)
	{
		bVar0 = false;
		while (bVar0 < 35)
		{
			strcpy(&cVar3, "nAM_OBJSET", 16);
			stradd(&cVar3, INT_TO_STRING(bVar0), 16);
			CREATE_OBJECTSET_IN_LAYOUT(&cVar3, bVar1, 4294967295, 0);
			bVar0++;
		}
	}
	else
	{
		bVar0 = false;
		while (bVar0 < 3)
		{
			strcpy(&cVar7, "nAM_OBJSET", 16);
			stradd(&cVar7, INT_TO_STRING(bVar0), 16);
			CREATE_OBJECTSET_IN_LAYOUT(&cVar7, bVar1, 4294967295, 0);
			bVar0++;
		}
	}
	ITERATE_EVERYWHERE(bVar2);
	ITERATE_ON_OBJECT_TYPE(bVar2, 3);
	ITERATE_IN_LAYOUT(bVar2, bVar1);
	return;
}

var Function_287() //Position: 0x8D87 / 36231
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_280();
	bVar1 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar0, "AmbientMissions_Iterator"));
	if (!IS_ITERATOR_VALID(bVar1))
	{
		bVar1 = CREATE_NAMED_OBJECT_ITERATOR(bVar0, "AmbientMissions_Iterator");
	}
	return bVar1;
}

void Function_288(int iParam0) //Position: 0x8DE4 / 36324
{
	Global_63000[iParam08] = 4294967295;
	Global_63000[iParam08].f_4 = 4294967295;
	strcpy(&Global_63000[iParam08] + 8, "NHIL", 16);
	strcpy(&Global_63000[iParam08] + 24, "NHIL", 8);
	return;
}

void Function_289() //Position: 0x8E20 / 36384
{
	Function_321();
	Function_295();
	Function_290();
	return;
}

void Function_290() //Position: 0x8E2F / 36399
{
	Function_293(187, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(188, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(189, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(190, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(191, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(192, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(193, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(194, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(195, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(196, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(197, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(198, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(199, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(200, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(201, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(202, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(203, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(204, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(205, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(206, &Global_50170, 25, 50.0f, 50, 100.0f, 100, 150.0f, 0, 0, 0, 0);
	Function_293(207, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(208, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(209, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(210, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(211, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(212, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(213, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(214, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(215, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(216, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(217, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(218, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(219, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(220, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(221, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(222, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(223, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(224, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(225, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_293(226, &Global_50170, 25, 100.0f, 50, 175.0f, 100, 250.0f, 0, 0, 0, 0);
	Function_291(10, &Global_49399, 5, 25, 50);
	Function_291(12, &Global_49399, 5, 25, 50);
	Function_293(0, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(1, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(2, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(3, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(4, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(5, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 7, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(6, &Global_50170, 5, TO_FLOAT(50), 10, TO_FLOAT(100), 15, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(7, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_293(8, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_293(9, &Global_50170, 3, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(10, &Global_50170, 10, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(11, &Global_50170, 20, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(12, &Global_50170, 5, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(13, &Global_50170, 5, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(14, &Global_50170, 5, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(15, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(16, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(17, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(19, &Global_50170, 1, TO_FLOAT(50), 3, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_293(21, &Global_50170, 1, TO_FLOAT(50), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(20, &Global_50170, 5, TO_FLOAT(50), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(22, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(25, &Global_50170, 25, TO_FLOAT(50), 100, TO_FLOAT(100), 0, 0, 0, 0, 0, 0);
	Function_293(26, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(27, &Global_50170, 10, TO_FLOAT(50), 50, TO_FLOAT(100), 100, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(31, &Global_50170, 1, TO_FLOAT(50), 15, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(32, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(33, &Global_50170, 10, TO_FLOAT(50), 25, TO_FLOAT(100), 50, TO_FLOAT(150), 75, TO_FLOAT(200), 100, TO_FLOAT(250));
	Function_293(34, &Global_50170, 5, TO_FLOAT(50), 25, TO_FLOAT(100), 75, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(35, &Global_50170, 1, TO_FLOAT(50), 2, TO_FLOAT(100), 3, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(36, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(37, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(38, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(39, &Global_50170, 1, TO_FLOAT(50), 15, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(40, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(41, &Global_50170, 10, TO_FLOAT(50), 25, TO_FLOAT(100), 50, TO_FLOAT(150), 75, TO_FLOAT(200), 100, TO_FLOAT(250));
	Function_293(42, &Global_50170, 5, TO_FLOAT(50), 25, TO_FLOAT(100), 75, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(43, &Global_50170, 3, TO_FLOAT(50), 5, TO_FLOAT(100), 7, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(44, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(45, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(46, &Global_50170, 1, TO_FLOAT(50), 15, TO_FLOAT(100), 50, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(47, &Global_50170, 1, TO_FLOAT(50), 5, TO_FLOAT(100), 20, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(48, &Global_50170, 10, TO_FLOAT(50), 25, TO_FLOAT(100), 50, TO_FLOAT(150), 75, TO_FLOAT(200), 100, TO_FLOAT(250));
	Function_293(49, &Global_50170, 10, TO_FLOAT(50), 50, TO_FLOAT(100), 100, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(50, &Global_50170, 10, TO_FLOAT(50), 50, TO_FLOAT(100), 100, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(51, &Global_50170, 2, TO_FLOAT(50), 3, TO_FLOAT(100), 5, TO_FLOAT(150), 0, 0, 0, 0);
	Function_293(52, &Global_50170, 1, TO_FLOAT(150), 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(54, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(55, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(56, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Function_293(57, &Global_50170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return;
}

void Function_291(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x98A7 / 39079
{
	switch (StackVal)
	{
		case 0x00000000:
			uParam1[iParam022]->f_12 = Function_176(1.0f, (TO_FLOAT(uParam1[iParam022]->f_28) / TO_FLOAT(bParam2)));
			break;
		
		case 0x00000001:
			uParam1[iParam022]->f_12 = Function_176(1.0f, (TO_FLOAT(uParam1[iParam022]->f_28) / TO_FLOAT(bParam3)));
			break;
		
		case 0x00000002:
			uParam1[iParam022]->f_12 = Function_176(1.0f, (TO_FLOAT(uParam1[iParam022]->f_28) / TO_FLOAT(bParam4)));
			break;
		
		case 0x0000000A:
			Function_274(iParam0);
			return;
			break;
	}
	Function_292(iParam0, uParam1[iParam022]->f_12, 0, 4294967295, 4294967295, 4294967295, 0);
}

void Function_292(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x9951 / 39249
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	char* cVar20[24];
	char* cVar26[24];
	char* cVar32[24];
	char* cVar38[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_232(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		if (((iParam0 != 12 || iParam0 != 13) || iParam0 != 10) || iParam0 != 11)
		{
			cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_261(iParam0) };
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
			APPEND_JOURNAL_ENTRY_DETAIL(Function_232(iParam0), &cVar0, 2, 2, false);
			Function_118(Function_232(iParam0), 0);
		}
		else
		{
			cVar20 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_261(iParam0) };
			if (Function_64() || Global_34165.f_44)
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
			APPEND_JOURNAL_ENTRY_DETAIL(Function_232(iParam0), &cVar20, 2, 2, true);
			Function_118(Function_232(iParam0), 0);
		}
	}
}

void Function_293(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x9ADC / 39644
{
	bool bVar0;
	bool bVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			bVar0 = iParam2;
			bVar1 = bParam3;
			break;
		
		case 0x00000001:
			bVar0 = iParam4;
			bVar1 = bParam5;
			break;
		
		case 0x00000002:
			bVar0 = iParam6;
			bVar1 = bParam7;
			break;
		
		case 0x00000003:
			bVar0 = iParam8;
			bVar1 = bParam9;
			break;
		
		case 0x00000004:
			bVar0 = iParam10;
			bVar1 = bParam11;
			break;
		
		case 0x0000000A:
			Function_294(iParam0, 0);
			return;
			break;
		
		default:
			LOG_ERROR("we should have a goal at this point");
			bVar0 = iParam2;
			bVar1 = bParam3;
			break;
	}
	if (Function_251(uParam1[iParam022]->f_32, 4) || Function_251(uParam1[iParam022]->f_32, 2))
	{
		Function_243(iParam0, bVar0, CEIL(bVar1), 0);
		if (uParam1[iParam022]->f_28 >= 0)
		{
			Function_117(iParam0, uParam1[iParam022]->f_12, 1, uParam1[iParam022]->f_28, 4294967295, 4294967295);
		}
	}
}

void Function_294(int iParam0, int iParam1) //Position: 0x9BD9 / 39897
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_248(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_120(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_247(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_119(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_244(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_120(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_120(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_120(iParam0), 1.0f, false, 0);
	}
	return;
}

void Function_295() //Position: 0x9C5B / 40027
{
	Function_316(0, &Global_50170, "PVDM_1", 1, 6, Function_320());
	Function_316(1, &Global_50170, "PVDM_2", 1, 6, Function_320());
	Function_316(2, &Global_50170, "PVTD_1", 1, 6, Function_315());
	Function_316(3, &Global_50170, "PVTD_2", 1, 6, Function_315());
	Function_316(4, &Global_50170, "PVTD_3", 1, 6, Function_315());
	Function_316(5, &Global_50170, "PVKS_1", 1, 6, Function_314());
	Function_316(6, &Global_50170, "PVKS_2", 1, 6, Function_314());
	Function_316(7, &Global_50170, "PVKS2_1", 1, 6, Function_313());
	Function_316(8, &Global_50170, "PVKS2_2", 1, 6, Function_313());
	Function_316(9, &Global_50170, "PVKS2_3", 1, 6, Function_313());
	Function_316(10, &Global_50170, "PVKS2_4", 1, 6, Function_313());
	Function_316(11, &Global_50170, "PVKS2_5", 1, 6, Function_313());
	Function_316(12, &Global_50170, "PVKD_1", 1, 6, Function_312());
	Function_316(13, &Global_50170, "PVKD_2", 1, 6, Function_312());
	Function_316(14, &Global_50170, "PVKD_3", 1, 6, Function_312());
	Function_316(15, &Global_50170, "PVUS1_1", 1, 6, Function_311());
	Function_316(16, &Global_50170, "PVUS1_2", 1, 6, Function_311());
	Function_316(17, &Global_50170, "PVUS1_3", 1, 6, Function_311());
	Function_316(18, &Global_50170, "PVUS2", 1, 6, Function_311());
	Function_316(19, &Global_50170, "PVRV_1", 1, 6, Function_310());
	Function_316(20, &Global_50170, "PVRV_2", 1, 6, Function_310());
	Function_316(21, &Global_50170, "PVRV_3", 1, 6, Function_310());
	Function_316(22, &Global_50170, "PVTS1_1", 1, 6, Function_309());
	Function_316(25, &Global_50170, "PVTS1_4", 1, 6, Function_309());
	Function_316(26, &Global_50170, "PVTS1_5", 1, 6, Function_309());
	Function_316(27, &Global_50170, "PVTS2_1", 1, 6, Function_309());
	Function_316(31, &Global_50170, "PVHYD_1", 1, 6, Function_308());
	Function_316(32, &Global_50170, "PVHYW_1", 1, 6, Function_308());
	Function_316(33, &Global_50170, "PVHYG_1", 1, 6, Function_308());
	Function_316(34, &Global_50170, "PVHYS_1", 1, 6, Function_308());
	Function_316(35, &Global_50170, "PVHYO_1", 1, 6, Function_308());
	Function_316(36, &Global_50170, "PVHYM_1", 1, 6, Function_308());
	Function_316(37, &Global_50170, "PVHYC_1", 1, 6, Function_308());
	Function_316(38, &Global_50170, "PVHYK_1", 1, 6, Function_308());
	Function_316(39, &Global_50170, "PVGTD_1", 1, 6, Function_307());
	Function_316(40, &Global_50170, "PVGTW_1", 1, 6, Function_307());
	Function_316(41, &Global_50170, "PVGTG_1", 1, 6, Function_307());
	Function_316(42, &Global_50170, "PVGTS_1", 1, 6, Function_306());
	Function_316(43, &Global_50170, "PVGTO_1", 1, 6, Function_306());
	Function_316(44, &Global_50170, "PVGTM_1", 1, 6, Function_306());
	Function_316(45, &Global_50170, "PVGTC_1", 1, 6, Function_306());
	Function_316(46, &Global_50170, "PVFFD_1", 1, 6, Function_305());
	Function_316(47, &Global_50170, "PVFFW_1", 1, 6, Function_305());
	Function_316(48, &Global_50170, "PVFFG_1", 1, 6, Function_305());
	Function_316(49, &Global_50170, "PVHWC", 1, 6, Function_304());
	Function_316(50, &Global_50170, "PVHWG", 1, 6, Function_304());
	Function_316(51, &Global_50170, "PVHMC", 1, 6, Function_304());
	Function_316(52, &Global_50170, "PVHCC", 1, 6, Function_304());
	Function_316(54, &Global_50170, "OC_SU", 1, 3, Function_266());
	Function_316(55, &Global_50170, "OC_W2_1", 1, 3, Function_265());
	Function_316(56, &Global_50170, "OC_W2_2", 1, 3, Function_265());
	Function_316(57, &Global_50170, "OC_W2_3", 1, 3, Function_265());
	Function_316(58, &Global_50170, "CA", 1, 7, Function_303());
	Function_316(59, &Global_50170, "CAKD", 1, 7, Function_303());
	Function_316(60, &Global_50170, "CAND", 1, 7, Function_303());
	Function_316(62, &Global_50170, "CASL", 1, 7, Function_303());
	Function_316(61, &Global_50170, "CAMK", 1, 7, Function_303());
	Function_316(63, &Global_50170, "CAMN", 1, 7, Function_303());
	Function_316(64, &Global_50170, "CAGN", 1, 7, Function_303());
	Function_316(65, &Global_50170, "COR1", 1, 7, Function_303());
	Function_316(66, &Global_50170, "COR10", 1, 7, Function_303());
	Function_316(67, &Global_50170, "COR50", 1, 7, Function_303());
	Function_316(68, &Global_50170, "COR250", 1, 7, Function_303());
	Function_316(69, &Global_50170, "COD1", 1, 7, Function_303());
	Function_316(70, &Global_50170, "COD10", 1, 7, Function_303());
	Function_316(71, &Global_50170, "COD50", 1, 7, Function_303());
	Function_316(72, &Global_50170, "COD250", 1, 7, Function_303());
	Function_316(73, &Global_50170, "COA1", 1, 7, Function_303());
	Function_316(74, &Global_50170, "COA10", 1, 7, Function_303());
	Function_316(75, &Global_50170, "COA50", 1, 7, Function_303());
	Function_316(76, &Global_50170, "COA250", 1, 7, Function_303());
	Function_316(77, &Global_50170, "CSPKTM1", 1, 7, Function_302());
	Function_316(78, &Global_50170, "CSPKTM2", 1, 7, Function_302());
	Function_316(79, &Global_50170, "CSPKTM3", 1, 7, Function_302());
	Function_316(80, &Global_50170, "CSPKKS1", 1, 7, Function_302());
	Function_316(81, &Global_50170, "CSPKKS2", 1, 7, Function_302());
	Function_316(82, &Global_50170, "CSPKKS3", 1, 7, Function_302());
	Function_316(83, &Global_50170, "CSPKKL1", 1, 7, Function_302());
	Function_316(84, &Global_50170, "CSPKKL2", 1, 7, Function_302());
	Function_316(85, &Global_50170, "CSPKKL3", 1, 7, Function_302());
	Function_316(86, &Global_50170, "CSPKND", 1, 7, Function_302());
	Function_316(87, &Global_50170, "CSPKNN", 1, 7, Function_302());
	Function_316(88, &Global_50170, "CSPKCW1", 1, 7, Function_302());
	Function_316(89, &Global_50170, "CSPKCW2", 1, 7, Function_302());
	Function_316(90, &Global_50170, "CSPKCW3", 1, 7, Function_302());
	Function_316(91, &Global_50170, "CSFMTM1", 1, 7, Function_301());
	Function_316(92, &Global_50170, "CSFMTM2", 1, 7, Function_301());
	Function_316(93, &Global_50170, "CSFMTM3", 1, 7, Function_301());
	Function_316(94, &Global_50170, "CSFMKS1", 1, 7, Function_301());
	Function_316(95, &Global_50170, "CSFMKS2", 1, 7, Function_301());
	Function_316(96, &Global_50170, "CSFMKS3", 1, 7, Function_301());
	Function_316(97, &Global_50170, "CSFMKL1", 1, 7, Function_301());
	Function_316(98, &Global_50170, "CSFMKL2", 1, 7, Function_301());
	Function_316(99, &Global_50170, "CSFMKL3", 1, 7, Function_301());
	Function_316(100, &Global_50170, "CSFMND", 1, 7, Function_301());
	Function_316(101, &Global_50170, "CSFMNN", 1, 7, Function_301());
	Function_316(102, &Global_50170, "CSFMGT1", 1, 7, Function_301());
	Function_316(103, &Global_50170, "CSFMGT2", 1, 7, Function_301());
	Function_316(104, &Global_50170, "CSFMGT3", 1, 7, Function_301());
	Function_316(105, &Global_50170, "CSTSTM1", 1, 7, Function_300());
	Function_316(106, &Global_50170, "CSTSTM2", 1, 7, Function_300());
	Function_316(107, &Global_50170, "CSTSTM3", 1, 7, Function_300());
	Function_316(108, &Global_50170, "CSTSKS1", 1, 7, Function_300());
	Function_316(109, &Global_50170, "CSTSKS2", 1, 7, Function_300());
	Function_316(110, &Global_50170, "CSTSKS3", 1, 7, Function_300());
	Function_316(111, &Global_50170, "CSTSKL1", 1, 7, Function_300());
	Function_316(112, &Global_50170, "CSTSKL2", 1, 7, Function_300());
	Function_316(113, &Global_50170, "CSTSKL3", 1, 7, Function_300());
	Function_316(114, &Global_50170, "CSTSND", 1, 7, Function_300());
	Function_316(115, &Global_50170, "CSTSNN", 1, 7, Function_300());
	Function_316(116, &Global_50170, "CSTSGT1", 1, 7, Function_300());
	Function_316(117, &Global_50170, "CSTSGT2", 1, 7, Function_300());
	Function_316(118, &Global_50170, "CSTSGT3", 1, 7, Function_300());
	Function_316(119, &Global_50170, "CSGPTM1", 1, 7, Function_299());
	Function_316(120, &Global_50170, "CSGPTM2", 1, 7, Function_299());
	Function_316(121, &Global_50170, "CSGPTM3", 1, 7, Function_299());
	Function_316(122, &Global_50170, "CSGPKS1", 1, 7, Function_299());
	Function_316(123, &Global_50170, "CSGPKS2", 1, 7, Function_299());
	Function_316(124, &Global_50170, "CSGPKS3", 1, 7, Function_299());
	Function_316(125, &Global_50170, "CSGPKL1", 1, 7, Function_299());
	Function_316(126, &Global_50170, "CSGPKL2", 1, 7, Function_299());
	Function_316(127, &Global_50170, "CSGPKL3", 1, 7, Function_299());
	Function_316(128, &Global_50170, "CSGPND", 1, 7, Function_299());
	Function_316(129, &Global_50170, "CSGPNN", 1, 7, Function_299());
	Function_316(130, &Global_50170, "CSGPBG1", 1, 7, Function_299());
	Function_316(131, &Global_50170, "CSGPBG2", 1, 7, Function_299());
	Function_316(132, &Global_50170, "CSGPBG3", 1, 7, Function_299());
	Function_316(133, &Global_50170, "CSTMTM1", 1, 7, Function_298());
	Function_316(134, &Global_50170, "CSTMTM2", 1, 7, Function_298());
	Function_316(135, &Global_50170, "CSTMTM3", 1, 7, Function_298());
	Function_316(136, &Global_50170, "CSTMKS1", 1, 7, Function_298());
	Function_316(137, &Global_50170, "CSTMKS2", 1, 7, Function_298());
	Function_316(138, &Global_50170, "CSTMKS3", 1, 7, Function_298());
	Function_316(139, &Global_50170, "CSTMKL1", 1, 7, Function_298());
	Function_316(140, &Global_50170, "CSTMKL2", 1, 7, Function_298());
	Function_316(141, &Global_50170, "CSTMKL3", 1, 7, Function_298());
	Function_316(142, &Global_50170, "CSTMND", 1, 7, Function_298());
	Function_316(143, &Global_50170, "CSTMNN", 1, 7, Function_298());
	Function_316(144, &Global_50170, "CSTMCK1", 1, 7, Function_298());
	Function_316(145, &Global_50170, "CSTMCK2", 1, 7, Function_298());
	Function_316(146, &Global_50170, "CSTMCK3", 1, 7, Function_298());
	Function_316(147, &Global_50170, "CSNSTM1", 1, 7, Function_297());
	Function_316(148, &Global_50170, "CSNSTM2", 1, 7, Function_297());
	Function_316(149, &Global_50170, "CSNSTM3", 1, 7, Function_297());
	Function_316(150, &Global_50170, "CSNSKS1", 1, 7, Function_297());
	Function_316(151, &Global_50170, "CSNSKS2", 1, 7, Function_297());
	Function_316(152, &Global_50170, "CSNSKS3", 1, 7, Function_297());
	Function_316(153, &Global_50170, "CSNSKL1", 1, 7, Function_297());
	Function_316(154, &Global_50170, "CSNSKL2", 1, 7, Function_297());
	Function_316(155, &Global_50170, "CSNSKL3", 1, 7, Function_297());
	Function_316(156, &Global_50170, "CSNSND", 1, 7, Function_297());
	Function_316(157, &Global_50170, "CSNSNN", 1, 7, Function_297());
	Function_316(158, &Global_50170, "CSNSHT1", 1, 7, Function_297());
	Function_316(159, &Global_50170, "CSNSHT2", 1, 7, Function_297());
	Function_316(160, &Global_50170, "CSNSHT3", 1, 7, Function_297());
	Function_316(161, &Global_50170, "CAA", 1, 7, Function_296());
	Function_316(162, &Global_50170, "CAAKD", 1, 7, Function_296());
	Function_316(163, &Global_50170, "CAAND", 1, 7, Function_296());
	Function_316(164, &Global_50170, "CAAMK", 1, 7, Function_296());
	Function_316(165, &Global_50170, "CAASL", 1, 7, Function_296());
	Function_316(166, &Global_50170, "CAAMN", 1, 7, Function_296());
	Function_316(167, &Global_50170, "CAAGN", 1, 7, Function_296());
	Function_316(168, &Global_50170, "CAACU", 1, 7, Function_296());
	Function_316(169, &Global_50170, "CAPKTM1", 1, 7, Function_296());
	Function_316(170, &Global_50170, "CAPKTM2", 1, 7, Function_296());
	Function_316(171, &Global_50170, "CAPKTM3", 1, 7, Function_296());
	Function_316(172, &Global_50170, "CAFMTM1", 1, 7, Function_296());
	Function_316(173, &Global_50170, "CAFMTM2", 1, 7, Function_296());
	Function_316(174, &Global_50170, "CAFMTM3", 1, 7, Function_296());
	Function_316(175, &Global_50170, "CATSTM1", 1, 7, Function_296());
	Function_316(176, &Global_50170, "CATSTM2", 1, 7, Function_296());
	Function_316(177, &Global_50170, "CATSTM3", 1, 7, Function_296());
	Function_316(178, &Global_50170, "CAGPTM1", 1, 7, Function_296());
	Function_316(179, &Global_50170, "CAGPTM2", 1, 7, Function_296());
	Function_316(180, &Global_50170, "CAGPTM3", 1, 7, Function_296());
	Function_316(181, &Global_50170, "CATMTM1", 1, 7, Function_296());
	Function_316(182, &Global_50170, "CATMTM2", 1, 7, Function_296());
	Function_316(183, &Global_50170, "CATMTM3", 1, 7, Function_296());
	Function_316(184, &Global_50170, "CANSTM1", 1, 7, Function_296());
	Function_316(185, &Global_50170, "CANSTM2", 1, 7, Function_296());
	Function_316(186, &Global_50170, "CANSTM3", 1, 7, Function_296());
	Function_316(187, &Global_50170, "WP_REP", 1, 5, Function_285());
	Function_316(188, &Global_50170, "WP_VOL", 1, 5, Function_285());
	Function_316(189, &Global_50170, "WP_WIN", 1, 5, Function_285());
	Function_316(190, &Global_50170, "WP_SCH", 1, 5, Function_285());
	Function_316(191, &Global_50170, "WP_PMP", 1, 5, Function_285());
	Function_316(192, &Global_50170, "WP_SPR", 1, 5, Function_285());
	Function_316(193, &Global_50170, "WP_DBL", 1, 5, Function_285());
	Function_316(194, &Global_50170, "WP_SAW", 1, 5, Function_285());
	Function_316(195, &Global_50170, "WP_ROL", 1, 5, Function_285());
	Function_316(196, &Global_50170, "WP_SEMP", 1, 5, Function_285());
	Function_316(197, &Global_50170, "WP_SEMS", 1, 5, Function_285());
	Function_316(198, &Global_50170, "WP_CAR", 1, 5, Function_285());
	Function_316(199, &Global_50170, "WP_BUF", 1, 5, Function_285());
	Function_316(200, &Global_50170, "WP_HEN", 1, 5, Function_285());
	Function_316(201, &Global_50170, "WP_HPW", 1, 5, Function_285());
	Function_316(202, &Global_50170, "WP_DBB", 1, 5, Function_285());
	Function_316(203, &Global_50170, "WP_BLT", 1, 5, Function_285());
	Function_316(204, &Global_50170, "WP_EVN", 1, 5, Function_285());
	Function_316(205, &Global_50170, "WP_LMT", 1, 5, Function_285());
	Function_316(206, &Global_50170, "WP_MSR", 1, 5, Function_285());
	Function_316(207, &Global_50170, "WP_REP2", 1, 5, Function_269());
	Function_316(208, &Global_50170, "WP_VOL2", 1, 5, Function_269());
	Function_316(209, &Global_50170, "WP_WIN2", 1, 5, Function_269());
	Function_316(210, &Global_50170, "WP_SCH2", 1, 5, Function_269());
	Function_316(211, &Global_50170, "WP_PMP2", 1, 5, Function_269());
	Function_316(212, &Global_50170, "WP_SPR2", 1, 5, Function_269());
	Function_316(213, &Global_50170, "WP_DBL2", 1, 5, Function_269());
	Function_316(214, &Global_50170, "WP_SAW2", 1, 5, Function_269());
	Function_316(215, &Global_50170, "WP_ROL2", 1, 5, Function_269());
	Function_316(216, &Global_50170, "WP_SAP2", 1, 5, Function_269());
	Function_316(217, &Global_50170, "WP_SAS2", 1, 5, Function_269());
	Function_316(218, &Global_50170, "WP_CAR2", 1, 5, Function_269());
	Function_316(219, &Global_50170, "WP_BUF2", 1, 5, Function_269());
	Function_316(220, &Global_50170, "WP_HEN2", 1, 5, Function_269());
	Function_316(221, &Global_50170, "WP_HPW2", 1, 5, Function_269());
	Function_316(222, &Global_50170, "WP_DBB2", 1, 5, Function_269());
	Function_316(223, &Global_50170, "WP_BLT2", 1, 5, Function_269());
	Function_316(224, &Global_50170, "WP_EVN2", 1, 5, Function_269());
	Function_316(225, &Global_50170, "WP_LMT2", 1, 5, Function_269());
	Function_316(226, &Global_50170, "WP_MSR2", 1, 5, Function_269());
	return;
}

bool Function_296() //Position: 0xAFBC / 44988
{
	return "COOP_advanced_icon";
}

bool Function_297() //Position: 0xAFD7 / 45015
{
	return "SC_AA_Nosalida_Icon";
}

bool Function_298() //Position: 0xAFF3 / 45043
{
	return "SC_AA_TwinRocks_Icon";
}

bool Function_299() //Position: 0xB010 / 45072
{
	return "SC_AA_Gaptooth_Icon";
}

bool Function_300() //Position: 0xB02C / 45100
{
	return "SC_AA_Tesoro_Icon";
}

bool Function_301() //Position: 0xB046 / 45126
{
	return "SC_AA_Mercer_Icon";
}

bool Function_302() //Position: 0xB060 / 45152
{
	return "SC_AA_Pikes_Icon";
}

bool Function_303() //Position: 0xB079 / 45177
{
	return "nCOOP_icon";
}

bool Function_304() //Position: 0xB08B / 45195
{
	return "MP_HeavyWeapons_Icon";
}

bool Function_305() //Position: 0xB0A8 / 45224
{
	return "MP_Goldrush_icon";
}

bool Function_306() //Position: 0xB0C1 / 45249
{
	return "MP_GrabTheBagII_icon";
}

bool Function_307() //Position: 0xB0DE / 45278
{
	return "MP_GrabTheBag_Icon";
}

bool Function_308() //Position: 0xB0F9 / 45305
{
	return "MP_HoldYourOwn_Icon";
}

bool Function_309() //Position: 0xB115 / 45333
{
	return "MP_TrickShot_Icon";
}

bool Function_310() //Position: 0xB12F / 45359
{
	return "MP_Revenge_Icon";
}

bool Function_311() //Position: 0xB147 / 45383
{
	return "MP_Unstoppable_Icon";
}

bool Function_312() //Position: 0xB163 / 45411
{
	return "MP_KDR_Icon";
}

bool Function_313() //Position: 0xB177 / 45431
{
	return "KillStreakII_Icon";
}

bool Function_314() //Position: 0xB191 / 45457
{
	return "MP_KillStreak_Icon";
}

bool Function_315() //Position: 0xB1AC / 45484
{
	return "MP_TDM_Icon";
}

void Function_316(int iParam0, int iParam1, char* cParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xB1C0 / 45504
{
	strcpy(iParam1[iParam022] + 16, cParam2, 8);
	(*iParam1)[iParam022] = iParam0;
	iParam1[iParam022]->f_84 = bParam3;
	if (Global_3364 || Global_83864.f_1276)
	{
		iParam1[iParam022]->f_8 = 0;
		Global_50170[iParam022].f_28 = 0;
	}
	if (bParam3)
	{
		if (!Global_34165.f_44)
		{
			iParam1[iParam022]->f_4 = 1;
			iParam1[iParam022]->f_8 = 0;
			iParam1[iParam022]->f_12 = 0.0f;
			return;
		}
	}
	if (Global_83864.f_1276)
	{
		Function_319(iParam0, 4);
		Function_319(iParam0, 2);
		Function_318(iParam0, 0);
		iParam1[iParam022]->f_12 = 0.0f;
		SET_JOURNAL_ENTRY_PROGRESS(Function_120(iParam0), iParam1[iParam022]->f_12, false, 0);
		REMOVE_JOURNAL_ENTRY(Function_120(iParam0), true);
	}
	if (!IS_STRING_VALID(bParam5))
	{
		bParam5 = Function_264();
	}
	Function_317(iParam0, bParam4, bParam5);
	Function_243(iParam0, 0, 0, 1);
	if (StackVal && StackVal != 2 != 10)
	{
		Function_294(iParam0, 1);
	}
	else
	{
		iParam1[iParam022]->f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Function_120(iParam0), iParam1[iParam022]->f_12, false, 0);
	}
}

var Function_317(int iParam0, int iParam1, int iParam2) //Position: 0xB2D0 / 45776
{
	struct<6> Var0;
	struct<4> Var6;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_247(iParam0) };
	Global_50170[iParam022].f_24 = CREATE_JOURNAL_ENTRY(&Var0, iParam1, false, iParam2);
	Var6 = { StackVal, StackVal, StackVal, Function_119(iParam0) };
	UI_SET_STRING(&Var0, UI_GET_STRING(&Var6));
	return Global_50170[iParam022].f_24;
}

void Function_318(int iParam0, bool bParam1) //Position: 0xB30E / 45838
{
	REMOVE_JOURNAL_ENTRY(Global_50170[iParam022].f_24, bParam1);
	return;
}

void Function_319(int iParam0, int iParam1) //Position: 0xB322 / 45858
{
	Function_13(&Global_50170[iParam022] + 32, iParam1);
	return;
}

bool Function_320() //Position: 0xB336 / 45878
{
	return "MP_DM_Icon";
}

void Function_321() //Position: 0xB349 / 45897
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Global_63041 - 1))
	{
		Function_322(iVar0);
		iVar0++;
	}
	return;
}

void Function_322(int iParam0) //Position: 0xB36D / 45933
{
	Global_63041[iParam08] = 4294967295;
	Global_63041[iParam08].f_4 = 4294967295;
	strcpy(&Global_63041[iParam08] + 8, "NHIL", 16);
	strcpy(&Global_63041[iParam08] + 24, "NHIL", 8);
	return;
}

void Function_323() //Position: 0xB3A9 / 45993
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = Function_280();
	bVar1 = Function_287();
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		if (GET_NUM_ITERATOR_MATCHES(bVar1) >= 0)
		{
			bVar2 = START_OBJECT_ITERATOR(bVar1);
			while (IS_OBJECT_VALID(bVar2))
			{
				DESTROY_OBJECT(bVar2);
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
	}
	return;
}

void Function_324() //Position: 0xB3E8 / 46056
{
	if (Global_83822)
	{
		if (Function_68(Global_29006) && !HUD_IS_FADED())
		{
			Global_83864.f_1280 = 1;
			Global_83822 = 0;
		}
	}
	if (Global_84364.f_744)
	{
		if (Function_68(Global_29006) && !HUD_IS_FADED())
		{
			Function_346(&Global_83591);
			*(&Local_97 + 20 + 184) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_83591 + 276) };
			Function_325();
			Global_84364.f_744 = 0;
		}
	}
	return;
}

void Function_325() //Position: 0xB44D / 46157
{
	Global_83864.f_1276 = 1;
	Function_345();
	Function_341();
	Function_340();
	Function_338(Global_84364.f_708);
	Function_337(1000);
	Function_334();
	Function_333(Global_83864.f_1284, 0, 1);
	Function_332();
	Function_28(1);
	Function_326(Global_84364.f_708 * 100);
	return;
}

void Function_326(int iParam0) //Position: 0xB496 / 46230
{
	int iVar0;
	
	iVar0 = 837;
	while (iVar0 < 971)
	{
		if (Function_331(iVar0) == iParam0)
		{
			Function_327(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_327(int iParam0) //Position: 0xB4C1 / 46273
{
	Function_14(&Global_83864 + 1976[Function_330(iParam0)], Function_328(iParam0));
	return;
}

int Function_328(int iParam0) //Position: 0xB4DD / 46301
{
	return Function_74((Function_329(iParam0) % 32));
}

int Function_329(int iParam0) //Position: 0xB4EE / 46318
{
	return (iParam0 - 837);
}

int Function_330(int iParam0) //Position: 0xB4FA / 46330
{
	return (Function_329(iParam0) / 32);
}

int Function_331(int iParam0) //Position: 0xB508 / 46344
{
	return (ABS(GET_ACTORENUM_AVATAR_GROUP(iParam0)) % 1000);
}

void Function_332() //Position: 0xB51A / 46362
{
	bool bVar0;
	
	bVar0 = (Global_83864.f_1264 + 1 + Global_84364.f_708 * 50);
	NET_GAMERDATA_SET("Rank", bVar0);
	UPDATE_PROFILE_STAT("MpLevel", TO_FLOAT(bVar0), 1);
	return;
}

void Function_333(var uParam0, bool bParam1, bool bParam2) //Position: 0xB554 / 46420
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_14(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_14(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_334() //Position: 0xB581 / 46465
{
	Function_335(Function_228());
	return;
}

void Function_335(int iParam0) //Position: 0xB58D / 46477
{
	if (!Function_336(iParam0))
	{
		return;
	}
	if (iParam0 > 976 || iParam0 < 1007)
	{
		return;
	}
	Global_83864.f_1284 = iParam0;
	return;
}

bool Function_336(int iParam0) //Position: 0xB5BA / 46522
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_337(bool bParam0) //Position: 0xB5D1 / 46545
{
	if (!Function_336(bParam0))
	{
		return;
	}
	if (bParam0 > 976 || bParam0 < 1007)
	{
		return;
	}
	strcpy(&Global_76870, GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam0), 64);
	return;
}

void Function_338(int iParam0) //Position: 0xB600 / 46592
{
	Function_14(&Global_83864 + 1204[0], 1);
	switch (iParam0)
	{
		case 0x00000000:
			Function_339(1000, 0);
			Function_339(996, 3);
			Function_339(987, 7);
			Function_339(976, 21);
			Function_339(982, 32);
			Function_339(979, 39);
			Function_339(1006, 49);
			break;
		
		case 0x00000001:
			Function_339(1000, 0);
			Function_339(996, 3);
			Function_339(987, 7);
			Function_339(976, 10);
			Function_339(982, 21);
			Function_339(979, 32);
			Function_339(1006, 39);
			Function_339(1004, 49);
			break;
		
		case 0x00000002:
			Function_339(1000, 0);
			Function_339(996, 3);
			Function_339(987, 7);
			Function_339(976, 10);
			Function_339(982, 14);
			Function_339(979, 21);
			Function_339(1006, 32);
			Function_339(1004, 39);
			Function_339(1005, 49);
			break;
		
		case 0x00000003:
			Function_339(1000, 0);
			Function_339(996, 3);
			Function_339(987, 7);
			Function_339(976, 10);
			Function_339(982, 14);
			Function_339(979, 21);
			Function_339(1006, 25);
			Function_339(1004, 32);
			Function_339(1005, 39);
			Function_339(1007, 49);
			break;
		
		case 0x00000004:
			Function_339(1000, 0);
			Function_339(996, 3);
			Function_339(987, 7);
			Function_339(976, 10);
			Function_339(982, 14);
			Function_339(979, 21);
			Function_339(1006, 25);
			Function_339(1004, 32);
			Function_339(1005, 36);
			Function_339(1007, 41);
			Function_339(1003, 49);
			break;
	}
	return;
}

void Function_339(int iParam0, int iParam1) //Position: 0xB7A1 / 47009
{
	Global_83864[iParam16].f_8 = iParam0;
	return;
}

void Function_340() //Position: 0xB7B3 / 47027
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar0 <= 50)
	{
		Global_83864[iVar06].f_8 = 4294967295;
		iVar0++;
	}
	while (iVar1 <= 11)
	{
		Function_13(&Global_83864 + 1204[iVar1], 1);
		iVar1++;
	}
	return;
}

void Function_341() //Position: 0xB7F9 / 47097
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 1;
	Global_83864.f_1260 = 0;
	Global_83864.f_1264 = 0;
	Global_84364.f_708++;
	Function_344(487, 0.0f, 0);
	while (iVar0 <= 50)
	{
		Function_343(iVar0, 1);
		Function_13(&Global_83864[iVar06] + 20, 1);
		iVar0++;
	}
	while (iVar1 <= 40)
	{
		Global_84559[iVar1] = 0;
		iVar1++;
	}
	Function_342();
	return;
}

void Function_342() //Position: 0xB86E / 47214
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 50)
	{
		Function_13(&Global_83864[iVar06] + 20, 1);
		iVar0++;
	}
	return;
}

void Function_343(int iParam0, int iParam1) //Position: 0xB895 / 47253
{
	Function_13(&Global_83864[iParam06] + 16, iParam1);
	return;
}

int Function_344(int iParam0, float fParam1, bool bParam2) //Position: 0xB8AA / 47274
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > fParam1)
	{
		Function_103(iParam0, fParam1, 0);
	}
	Global_34581[iParam0] = fParam1;
	Function_102(iParam0);
	if (bParam2)
	{
		Function_93(iParam0, 1, fParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_345() //Position: 0xBB16 / 47894
{
	bool bVar0;
	
	bVar0 = Function_402();
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	if (IS_WEAPONENUM_LOCKED(4))
	{
		SET_WEAPONENUM_LOCKED(4, 0);
	}
	GIVE_WEAPON_TO_ACTOR(bVar0, 4, 1.0f, 0, 1);
	ACTOR_SET_NEXT_WEAPON(bVar0, 4);
	_ADD_AMMO_OF_TYPE(bVar0, GET_AMMO_ENUM(4), (GET_WEAPON_MAX_AMMO(4) * 4.0f), 0, 0);
	if (IS_WEAPONENUM_LOCKED(22))
	{
		SET_WEAPONENUM_LOCKED(22, 0);
	}
	GIVE_WEAPON_TO_ACTOR(bVar0, 22, 1.0f, 0, 0);
	ACTOR_SET_NEXT_WEAPON(bVar0, 22);
	return;
}

void Function_346(int iParam0) //Position: 0xBB71 / 47985
{
	Function_363(iParam0 + 276, 1);
	Function_362(iParam0);
	Function_360(iParam0, 1, 4, 7, 1);
	Function_360(iParam0, 2, 22, 1, 1);
	Function_355(iParam0, 1, 5, 5, 1);
	Function_355(iParam0, 2, 10, 3, 1);
	Function_355(iParam0, 3, 17, 1, 1);
	Function_355(iParam0, 4, 19, 1, 1);
	Function_355(iParam0, 5, 24, 1, 1);
	Function_353(iParam0, 5, 3);
	Function_353(iParam0, 4, 3);
	Function_353(iParam0, 3, 10);
	Function_353(iParam0, 7, 18);
	Function_353(iParam0, 6, 20);
	Function_353(iParam0, 8, 15);
	Function_353(iParam0, 9, 15);
	Function_353(iParam0, 10, 10);
	Function_353(iParam0, 11, 5);
	Function_352(iParam0, 0, 45.0f);
	Function_352(iParam0, 1, 45.0f);
	Function_352(iParam0, 2, 15.0f);
	Function_352(iParam0, 3, 15.0f);
	Function_352(iParam0, 4, 30.0f);
	Function_352(iParam0, 5, 30.0f);
	Function_351(iParam0, 15.0f);
	Function_350(iParam0, 15.0f);
	Function_349(iParam0, 15.0f);
	Function_348(iParam0 + 276 + 228, 100.0f);
	Function_347(iParam0 + 276, 0);
	return;
}

void Function_347(int iParam0, int iParam1) //Position: 0xBC87 / 48263
{
	(iParam0 + 228)->f_220 = 0;
	Function_14(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_348(var uParam0, int iParam1) //Position: 0xBC9F / 48287
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_349(int iParam0, int iParam1) //Position: 0xBCAB / 48299
{
	(iParam0 + 276 + 528)->f_28 = iParam1;
	return;
}

void Function_350(int iParam0, int iParam1) //Position: 0xBCBD / 48317
{
	(iParam0 + 276 + 528)->f_36 = iParam1;
	return;
}

void Function_351(int iParam0, int iParam1) //Position: 0xBCCF / 48335
{
	(iParam0 + 276 + 528)->f_32 = iParam1;
	return;
}

void Function_352(int iParam0, int iParam1, int iParam2) //Position: 0xBCE1 / 48353
{
	if (iParam1 <= 0)
	{
	}
	else if (iParam1 >= 6)
	{
	}
	(*iParam0 + 276 + 528)[iParam1] = iParam2;
	return;
}

void Function_353(int iParam0, int iParam1, int iParam2) //Position: 0xBD04 / 48388
{
	Function_354(iParam0 + 276, iParam1, iParam2);
	return;
}

void Function_354(int iParam0, int iParam1, int iParam2) //Position: 0xBD16 / 48406
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_355(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xBD27 / 48423
{
	Function_356(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_356(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xBD3F / 48447
{
	Function_357(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_357(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xBD56 / 48470
{
	if (!Function_359(iParam1))
	{
		return;
	}
	Function_358(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_358(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xBD79 / 48505
{
	*uParam0 = bParam1;
	if (bParam3)
	{
		uParam0->f_4 = (CEIL(GET_WEAPON_MAX_AMMO(bParam1)) * iParam2);
	}
	else
	{
		uParam0->f_4 = iParam2;
	}
}

bool Function_359(int iParam0) //Position: 0xBDA3 / 48547
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_360(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xBDB3 / 48563
{
	Function_361(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_361(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBDCB / 48587
{
	Function_357(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_362(int iParam0) //Position: 0xBDE0 / 48608
{
	iParam0->f_844 = 1;
	return;
}

void Function_363(int iParam0, bool bParam1) //Position: 0xBDEC / 48620
{
	Function_366(iParam0);
	Function_366(iParam0 + 228);
	if (bParam1)
	{
		Function_364(iParam0);
	}
	return;
}

void Function_364(int iParam0) //Position: 0xBE08 / 48648
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_365(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_365(var uParam0, int iParam1) //Position: 0xBE28 / 48680
{
	Function_354(uParam0, iParam1, 0);
	return;
}

void Function_366(int iParam0) //Position: 0xBE36 / 48694
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_367(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_348(iParam0, 0.0f);
	return;
}

void Function_367(int iParam0) //Position: 0xBE63 / 48739
{
	Function_358(iParam0, 4294967295, 0, 1);
	return;
}

void Function_368(int iParam0) //Position: 0xBE71 / 48753
{
	Function_44(&Global_78617 + 52, iParam0);
	return;
}

void Function_369(var uParam0) //Position: 0xBE82 / 48770
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

void Function_370() //Position: 0xBE95 / 48789
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			if (Function_165(bVar1, 131072, 1) && GET_LOCAL_SLOT() == bVar1)
			{
				iVar0++;
				Function_4(bVar1, 1);
			}
		}
		bVar1++;
	}
	if (iVar0 == 1)
	{
		Function_163("net_help_most_wanted_target", 0x41200000, 1, 0, 2, 1, 0);
	}
	else if (iVar0 >= 1)
	{
		Function_163("net_help_most_wanted_targets", 0x41200000, 1, 0, 2, 1, 0);
	}
	return;
}

bool Function_371(int iParam0) //Position: 0xBF3F / 48959
{
	return Function_251(*iParam0, 1);
}

void Function_372(int iParam0, bool bParam1, int iParam2) //Position: 0xBF4C / 48972
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_9(Global_29006))
		{
			Function_69(&(Global_29008[Global_29006]), 131072);
			Function_375(&(Global_29008[Global_29006]), 2097152);
			Function_373(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_67(&(Global_29008[iVar0]), 4) || Function_67(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_375(&(Global_29008[iVar0]), 2097155);
					Function_69(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_64())
			{
			}
			WAIT(false);
		}
		if (iParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_373(int iParam0) //Position: 0xC058 / 49240
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_374())
			{
				return;
			}
		}
		if (!Function_67(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_374() //Position: 0xC0D7 / 49367
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_67(&(Global_29008[iVar0]), 4) || Function_67(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_375(var uParam0, int iParam1) //Position: 0xC134 / 49460
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_376(int iParam0) //Position: 0xC14B / 49483
{
	if (!NET_IS_IN_SESSION())
	{
		return 0;
	}
	iParam0 = iParam0;
	return _IS_CLIENT_DATA_VALID_FOR_SLOT_2(&Global_76943, 0);
}

float Function_377(int iParam0) //Position: 0xC166 / 49510
{
	if (Function_371(iParam0))
	{
		if (Function_378(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_378(bool bParam0) //Position: 0xC22E / 49710
{
	return Function_251(*bParam0, 2);
}

void Function_379() //Position: 0xC23B / 49723
{
	if (!IS_SCRIPT_VALID(iLocal_78))
	{
		bLocal_78 = LAUNCH_NEW_SCRIPT("$/content/Ambient/CrimeResponse/mplaw_response_thread", 0);
	}
	return;
}

void Function_380() //Position: 0xC288 / 49800
{
	if ((NET_IS_IN_SESSION() && Function_457(2)) && !Function_457(16))
	{
		Function_398();
	}
	if (IS_OBJECT_VALID(Global_83803.f_16))
	{
		if (NET_IS_IN_SESSION())
		{
			NET_SESSION_LEAVE_SESSION();
		}
		else if (NET_IS_BUSY())
		{
		}
		else
		{
			if (UNK_0x63034F52(Global_83803.f_16))
			{
				Function_397(Global_83803.f_16);
			}
			Global_83803.f_36 = 0;
			Function_396();
		}
	}
	else if (Function_393())
	{
		if (Function_381())
		{
			if (IS_OBJECT_VALID(Global_83803.f_16))
			{
			}
		}
	}
	else if (Global_83803 == 1)
	{
		Global_83803 = 0;
	}
	return;
	return;
}

bool Function_381() //Position: 0xC313 / 49939
{
	int iVar0;
	
	switch (Global_83803)
	{
		case 0x00000000:
			if (!NET_IS_BUSY())
			{
				if (Function_392())
				{
					Global_83803 = 3;
				}
				else if (NET_GET_PLAYMODE() == 1)
				{
					if (!NET_IS_IN_SESSION())
					{
						Function_390();
						Function_396();
						return 1;
					}
					Function_396();
				}
				else if (Global_83803.f_40)
				{
					if (!NET_IS_IN_SESSION())
					{
						Function_390();
						Function_396();
						return 1;
					}
					Function_396();
				}
				else
				{
					Function_389(&iVar0);
					(&iVar0 + 8)->f_12 = 1;
					Function_388(&iVar0);
					if (NET_RUN_SEARCH_BOT(0))
					{
						Global_83803 = 1;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (NET_GET_NUMBER_OF_SESSIONS() > 1)
			{
				if (Function_386(&Global_83803 + 16))
				{
					return 1;
				}
				NET_SESSION_LEAVE_SESSION();
				Global_83803 = 4;
			}
			else if (NET_GET_NUMBER_OF_SESSIONS() == 0)
			{
				if (NET_IS_IN_SESSION())
				{
					if (Global_83803.f_36)
					{
						NET_SESSION_LEAVE_SESSION();
						Global_83803 = 4;
					}
					else
					{
						Global_83803 = 5;
					}
				}
				else
				{
					Function_390();
					Function_396();
					return 1;
				}
			}
			break;
		
		case 0x00000003:
			if (!NET_IS_BUSY())
			{
				if (Function_384(&Global_83803 + 16))
				{
					return 1;
				}
				Global_83803 = 5;
			}
			break;
		
		case 0x00000004:
			if (!NET_IS_BUSY() && !NET_IS_IN_SESSION())
			{
				Function_390();
				Global_83803 = 0;
				Global_83803.f_36 = 0;
				Function_396();
				return 1;
			}
			break;
		
		case 0x00000005:
			if (!Function_371(&Global_83803 + 4))
			{
				Function_382(&Global_83803 + 4);
			}
			else if (Function_216(&Global_83803 + 4, 10.0f) || !NET_IS_IN_SESSION())
			{
				Function_396();
			}
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_382(int iParam0) //Position: 0xC497 / 50327
{
	if (!Function_371(iParam0))
	{
		Function_383(iParam0, 0.0f);
	}
	return;
}

void Function_383(var uParam0, float fParam1) //Position: 0xC4AC / 50348
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_14(uParam0, 1);
	Function_13(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_384(int iParam0) //Position: 0xC4CD / 50381
{
	var uVar0;
	
	if (Function_385(&uVar0))
	{
		if (1 == UNK_0xE9EAC45C(uVar0))
		{
			*iParam0 = uVar0;
			return 1;
		}
	}
	return 0;
}

bool Function_385(int iParam0) //Position: 0xC4EC / 50412
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = FIND_NAMED_LAYOUT("NetSesssionLayout");
	bVar1 = FIND_OBJECT_IN_LAYOUT(bVar0, "nPosseGame");
	if (IS_OBJECT_VALID(bVar1))
	{
		*iParam0 = bVar1;
		return 1;
	}
	return 0;
}

bool Function_386(int iParam0) //Position: 0xC531 / 50481
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = FIND_NAMED_LAYOUT("NetSesssionLayout");
	bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
	ITERATE_ON_OBJECT_TYPE(bVar1, 59);
	ITERATE_IN_LAYOUT(bVar1, bVar0);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	bVar3 = false;
	if (IS_OBJECT_VALID(bVar2))
	{
		while (IS_OBJECT_VALID(bVar2) && !bVar3)
		{
			if (!IS_SESSION_CURRENTLY_JOINED_SESSION(bVar2))
			{
				if (!Function_387(bVar2))
				{
					if (!IS_OBJECT_VALID(*iParam0))
					{
						*iParam0 = bVar2;
						bVar3 = true;
					}
				}
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return bVar3;
}

bool Function_387(bool bParam0) //Position: 0xC5BB / 50619
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x581CAC89();
	iVar1 = UNK_0xA174152C(bParam0);
	if (iVar1 > 0)
	{
		iVar2 = (iVar0 - iVar1);
		if (iVar2 <= 5)
		{
			return 1;
		}
	}
	iVar3 = UNK_0x0183A3F0(bParam0);
	if (iVar3 > 0)
	{
		iVar4 = (iVar0 - iVar3);
		if (iVar4 <= 5)
		{
			return 1;
		}
	}
	if (!IS_OBJECT_VALID(Global_83803.f_20))
	{
		return 0;
	}
	if (bParam0 == Global_83803.f_20)
	{
		if (Function_45(&Global_83803 + 24, 60.0f))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void Function_388(int iParam0) //Position: 0xC63F / 50751
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = 4294967295;
	if (!(iParam0 + 8)->f_12)
	{
		bVar0 = SHIFT_LEFT(StackVal, 20);
		bVar0 = (StackVal + SHIFT_LEFT(bVar0, 10));
		bVar0 = (StackVal + SHIFT_LEFT(bVar0, false));
	}
	uVar1 = *iParam0;
	uVar2 = StackVal;
	UNK_0xF6E40FF3(uVar1, bVar0, iParam0->f_32, uVar2, iParam0->f_28);
	return;
}

void Function_389(int iParam0) //Position: 0xC699 / 50841
{
	*iParam0 = 1;
	iParam0->f_4 = 1;
	iParam0->f_8 = 0;
	(iParam0 + 8)->f_4 = 0;
	(iParam0 + 8)->f_8 = Global_29006;
	(iParam0 + 8)->f_12 = 0;
	iParam0->f_24 = 1;
	iParam0->f_28 = 4294967295;
	iParam0->f_32 = 16;
	iParam0->f_36 = 0;
	return;
}

int Function_390() //Position: 0xC6D9 / 50905
{
	struct<33> Var0;
	
	Function_389(&Var0);
	if (Global_83803.f_44 >= 0)
	{
		Var0.f_32 = Global_83803.f_44;
	}
	if (Function_391(&Var0))
	{
		return 1;
	}
	return 0;
}

bool Function_391(var uParam0) //Position: 0xC706 / 50950
{
	Function_388(uParam0);
	return NET_IS_FACTION_SAFE(uParam0->f_24);
}

bool Function_392() //Position: 0xC718 / 50968
{
	var uVar0;
	
	return Function_384(&uVar0);
}

bool Function_393() //Position: 0xC723 / 50979
{
	bool bVar0;
	
	bVar0 = false;
	if (!Function_64())
	{
		return 0;
	}
	if (NET_IS_BUSY())
	{
		return 0;
	}
	if (!Function_456())
	{
		return 0;
	}
	if (Function_392())
	{
		return Function_457(2);
	}
	if (Function_457(16))
	{
		return 0;
	}
	if (Global_83803.f_40)
	{
		if (!NET_IS_IN_SESSION() || !NET_IS_SESSION_HOST())
		{
			return Function_457(2);
		}
		return 0;
	}
	if (NET_GET_PLAYMODE() == 1)
	{
		return (!NET_IS_IN_SESSION() && Function_457(2));
	}
	if (!NET_IS_IN_SESSION())
	{
		bVar0 = Function_457(2);
	}
	else
	{
		if (Global_83803.f_36)
		{
			bVar0 = true;
		}
		if (Function_394())
		{
			bVar0 = false;
		}
	}
	return bVar0;
}

bool Function_394() //Position: 0xC7B2 / 51122
{
	return (Function_395() && !NET_IS_POSSE_LEADER());
}

var Function_395() //Position: 0xC7C0 / 51136
{
	return NET_GET_POSSE_COUNT() < 1;
}

void Function_396() //Position: 0xC7CB / 51147
{
	if (Global_83803 != 4)
	{
		Global_83803 = 0;
	}
	Function_25(&Global_83803 + 4);
	if (!Global_83803.f_36)
	{
		Global_83803.f_16 = "";
	}
	return;
}

void Function_397(var uParam0) //Position: 0xC7F9 / 51193
{
	Global_83803.f_20 = uParam0;
	Function_382(&Global_83803 + 24);
	return;
}

void Function_398() //Position: 0xC810 / 51216
{
	var uVar0;
	
	uVar0 = Function_399();
	NET_SESSION_SET_GAME_LOCALE_EX(uVar0);
	return;
}

var Function_399() //Position: 0xC820 / 51232
{
	return Global_29006;
}

void Function_400(int iParam0) //Position: 0xC829 / 51241
{
	Function_383(iParam0, 0.0f);
	return;
}

void Function_401(bool bParam0) //Position: 0xC835 / 51253
{
	Function_458(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, true);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

bool Function_402() //Position: 0xC856 / 51286
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_403(var uParam0, int iParam1) //Position: 0xC86B / 51307
{
	uParam0->f_152 = iParam1;
	return;
}

void Function_404(var uParam0) //Position: 0xC877 / 51319
{
	uParam0 = uParam0;
	Function_179(8);
	return;
}

void Function_405(var uParam0, int iParam1) //Position: 0xC886 / 51334
{
	uParam0->f_168 = iParam1;
	return;
}

var Function_406() //Position: 0xC892 / 51346
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<5> Var3;
	bool bVar9;
	bool bVar10;
	struct<5> Var11;
	int iVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	struct<5> Var26;
	
	iVar0 = 2;
	bVar1 = Function_182(16);
	switch (iLocal_12)
	{
		case 0x00000000:
			bLocal_22 = 100.0f;
			fLocal_23 = 100.0f;
			vLocal_13 = { StackVal, StackVal, Global_76888[03] };
			vLocal_19 = { StackVal, StackVal, Global_76895[03] };
			vLocal_16 = { StackVal, StackVal, vLocal_13 };
			bLocal_24 = false;
			bLocal_25 = true;
			if (Function_182(128))
			{
				bVar2 = Function_420(Function_421());
				if (IS_VOLUME_VALID(bVar2))
				{
					GET_VOLUME_CENTER(bVar2, &vLocal_13);
					GET_VOLUME_SCALE(bVar2, &Var3);
					fLocal_23 = StackVal;
				}
			}
			else if (Function_182(2))
			{
				if (GET_SLOT_POSITION(GET_LOCAL_SLOT(), &vVar6))
				{
					bVar10 = Function_417(StackVal, StackVal, vVar6, 1);
					bVar9 = Function_420(bVar10);
					if (IS_VOLUME_VALID(bVar9))
					{
						GET_VOLUME_CENTER(bVar9, &vLocal_13);
						GET_VOLUME_SCALE(bVar9, &Var11);
						fLocal_23 = StackVal;
					}
				}
			}
			else if (Function_182(512))
			{
				if (NET_IS_IN_SESSION())
				{
					if (Function_394())
					{
						bVar14 = NET_GET_POSSE_LEADER_SLOT();
						if (IS_SLOT_VALID(bVar14))
						{
							if (!Function_165(bVar14, 2097152, 1))
							{
								if (GET_SLOT_POSITION(bVar14, &vVar15))
								{
									vLocal_13 = { StackVal, StackVal, vVar15 };
									Function_179(64);
									if (Function_37(StackVal, StackVal, vVar15))
									{
										bLocal_22 = 20.0f;
										bLocal_25 = false;
									}
									else
									{
										bLocal_22 = 50.0f;
										Global_76888[03] = { StackVal, StackVal, vVar15 };
									}
								}
							}
							else
							{
								UI_SEND_EVENT("net.PosseTeleportFail");
								vLocal_16 = { StackVal, StackVal, vLocal_13 };
								bLocal_24 = true;
							}
						}
					}
				}
			}
			if (Function_233())
			{
				iVar18 = 0;
				if (Function_182(64))
				{
					if (IS_LAYOUTREF_VALID(Function_416()))
					{
						bVar19 = false;
						bVar20 = Function_415(Function_416(), 0);
						if (!IS_OBJECT_VALID(bVar20))
						{
							bVar20 = Function_414(Global_29006);
						}
						if (IS_OBJECT_VALID(bVar20))
						{
							if (GET_OBJECT_TYPE(bVar20) == 9)
							{
								bVar21 = bVar20;
								iVar18 = 1;
								bVar19 = true;
							}
							else if (GET_OBJECT_TYPE(bVar20) == 10)
							{
								bVar22 = CREATE_OBJECT_ITERATOR(Function_416());
								if (IS_ITERATOR_VALID(bVar22))
								{
									bVar23 = GET_VOLUME_FROM_OBJECT(bVar20);
									ITERATE_IN_VOLUME_SET(bVar22, bVar23);
									bVar24 = Function_413(bVar22);
									if (GET_OBJECT_TYPE(bVar24) == 9)
									{
										bVar21 = bVar24;
										bVar19 = true;
									}
									DESTROY_ITERATOR(bVar22);
								}
							}
							if (bVar19)
							{
								bVar25 = GET_VOLUME_FROM_OBJECT(bVar21);
								GET_VOLUME_CENTER(bVar25, &vLocal_13);
								bLocal_24 = true;
								GENERATE_RANDOM_POINT_IN_VOLUME(bVar25, &vLocal_13);
								GET_VOLUME_SCALE(bVar25, &Var26);
								fLocal_23 = StackVal;
								GET_OBJECT_ORIENTATION(bVar25, &vLocal_19);
								if (FABS(vLocal_19.x) < 5.0f && bVar1)
								{
									vLocal_19.f_4 = (vLocal_19.x - vLocal_19.y);
								}
								if (bVar1 && iVar18)
								{
								}
								else
								{
									vLocal_19.f_4 = (vLocal_19.y + 180.0f);
								}
							}
						}
					}
				}
				bLocal_25 = false;
				bLocal_22 = 50.0f;
			}
			if (fLocal_23 < 100.0f)
			{
				fLocal_23 = 100.0f;
			}
			else if (fLocal_23 > 10.0f)
			{
				fLocal_23 = 10.0f;
			}
			iLocal_12 = 1;
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				bVar29 = Function_402();
				if (bVar1 && Function_42(bVar29, 3145855))
				{
					MAKE_ACTOR_READY_FOR_ACTION(bVar29, 1);
				}
				STREAMING_OVERRIDE_MAIN_POI(vLocal_13, 0,034f, -0,268f, 0,963f);
				iLocal_12 = 2;
			}
			else
			{
				Function_129(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			}
			break;
		
		case 0x00000002:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (!FIND_GROUND_INTERSECTION(&vLocal_13, fLocal_23, &vLocal_16, &uVar30))
				{
				}
				else
				{
					fLocal_23 = 100.0f;
				}
				if (!bLocal_24)
				{
					Function_409(StackVal, StackVal, vLocal_16, bLocal_22, 20.0f, bLocal_25);
				}
				iLocal_12 = 3;
			}
			break;
		
		case 0x00000003:
			if (bLocal_24 == 1)
			{
			}
			else if (Function_407(&vLocal_16, 1))
			{
				vLocal_19 = { StackVal, StackVal, Global_76895[03] };
			}
			else
			{
				Function_409(StackVal, StackVal, Global_76888[13], bLocal_22, -1.0f, bLocal_25);
				if (Function_407(&vLocal_16, 1))
				{
					vLocal_19 = { StackVal, StackVal, Global_76895[13] };
				}
				else
				{
					vLocal_16 = { StackVal, StackVal, Global_76888[03] };
					vLocal_19 = { StackVal, StackVal, Global_76895[03] };
				}
			}
			STREAMING_RELEASE_MAIN_POI();
			if (Function_88(StackVal, StackVal, StackVal, StackVal, vLocal_16, vLocal_19, bVar1, 1))
			{
				iLocal_12 = 4;
			}
			break;
		
		case 0x00000004:
			iLocal_12 = 0;
			Global_76888[03] = { StackVal, StackVal, vLocal_16 };
			Global_76895[03] = { StackVal, StackVal, vLocal_19 };
			Global_76888[13] = { StackVal, StackVal, vLocal_16 };
			Global_76895[13] = { StackVal, StackVal, vLocal_19 };
			Function_179(658);
			iVar0 = 1;
			break;
	}
	return iVar0;
}

bool Function_407(int iParam0, int iParam1) //Position: 0xCC96 / 52374
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6[5];
	float fVar22[5];
	vector3 vVar28;
	int iVar31;
	bool bVar32;
	var uVar33;
	
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (AMBIENT_GET_POINT(&vVar28, 0))
		{
			vVar6[iVar23] = { StackVal, StackVal, vVar28 };
			fVar22[iVar2] = 50.0f;
			iVar2++;
		}
		iVar0++;
	}
	if (iVar2 == 0)
	{
		return 0;
	}
	if (NET_IS_IN_SESSION() && iParam1)
	{
		iVar0 = 0;
		while (iVar0 <= iVar2)
		{
			if (!Function_408(StackVal, StackVal, vVar6[iVar03]))
			{
				bVar1 = false;
				while (bVar1 <= 16)
				{
					if (Function_221(bVar1) && bVar1 == GET_LOCAL_SLOT())
					{
						if (!Function_165(bVar1, 2, 1))
						{
							if (GET_SLOT_POSITION(bVar1, &vVar3))
							{
								bVar32 = VDIST2(vVar3, vVar6[iVar03]);
								if (bVar32 > (fVar22[iVar0] * fVar22[iVar0]))
								{
									fVar22[iVar0] = SQRT(bVar32);
								}
							}
						}
					}
					bVar1++;
				}
			}
			iVar0++;
		}
		iVar31 = 4294967295;
		iVar0 = 0;
		while (iVar0 <= iVar2)
		{
			if (!Function_408(StackVal, StackVal, vVar6[iVar03]))
			{
				if (iVar31 == 4294967295)
				{
					iVar31 = iVar0;
				}
				else if (fVar22[iVar0] < fVar22[iVar31])
				{
					iVar31 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar31 == 4294967295)
		{
			return 0;
		}
	}
	iVar31 = 0;
	if (FIND_GROUND_INTERSECTION(&(vVar6[iVar313]), 3.0f, iParam0, &uVar33))
	{
	}
	else
	{
		*iParam0 = { StackVal, StackVal, vVar6[iVar313] };
	}
	return 1;
}

bool Function_408(vector3 vParam0) //Position: 0xCDF2 / 52722
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_409(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xCE0A / 52746
{
	int iVar0;
	
	if (bParam5)
	{
		if (Function_37(StackVal, StackVal, vParam0))
		{
			Function_32(StackVal, StackVal, vParam0);
			vParam0 = { StackVal, StackVal, Function_32(StackVal, StackVal, vParam0) };
		}
	}
	AMBIENT_RESET_FILTER(1);
	if (bParam5)
	{
		iVar0 = Function_410(5, 0);
		if (Function_9(iVar0))
		{
			AMBIENT_SET_EXCLUSION_VOLUME(StackVal);
		}
	}
	AMBIENT_SET_SEARCH_CENTER(vParam0);
	AMBIENT_SET_DISTANCE_FILTER(0.0f, bParam3);
	if (bParam4 < 0.0f)
	{
		AMBIENT_SET_ELEVATION_FILTER(-bParam4, bParam4);
	}
	Function_33(0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(128, 3.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(512, 8.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1024, 0.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 0.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(2, 5.0f, 0);
	AMBIENT_SET_SLOPE_FILTER(0, 2, 3.0f);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_ONESHOT_QUERIES(0);
}

var Function_410(int iParam0, bool bParam1) //Position: 0xCEAD / 52909
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	
	bVar3 = 999999,9f;
	iVar9 = 4294967295;
	if (!Function_412(&vVar0))
	{
		return 4294967295;
	}
	bVar10 = FIND_NAMED_LAYOUT("regions_layout");
	if (!IS_LAYOUTREF_VALID(bVar10))
	{
		return 4294967295;
	}
	bVar11 = CREATE_OBJECT_ITERATOR(bVar10);
	ITERATE_ON_OBJECT_TYPE(bVar11, 9);
	if (!IS_ITERATOR_VALID(bVar11))
	{
		return 4294967295;
	}
	bVar12 = START_OBJECT_ITERATOR(bVar11);
	while (IS_OBJECT_VALID(bVar12))
	{
		iVar8 = Function_411(GET_VOLUME_FROM_OBJECT(bVar12));
		if (iVar8 < 4294967295 && iVar8 > 146)
		{
			if (StackVal != iParam0 && (!bParam1 || !Function_67(&(Global_29008[iVar8]), 4096)))
			{
				GET_OBJECT_POSITION(bVar12, &vVar5);
				bVar4 = VDIST(vVar5, vVar0);
				if (bVar4 > bVar3)
				{
					bVar3 = bVar4;
					iVar9 = iVar8;
				}
			}
		}
		bVar12 = OBJECT_ITERATOR_NEXT(bVar11);
	}
	DESTROY_ITERATOR(bVar11);
	return iVar9;
}

var Function_411(bool bParam0) //Position: 0xCF80 / 53120
{
	int iVar0;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 4294967295;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "regid"))
	{
		return 4294967295;
	}
	if (DECOR_GET_INT_VERBOSE(bParam0, "regid", &iVar0))
	{
		return iVar0;
	}
	return 4294967295;
}

bool Function_412(int iParam0) //Position: 0xCFBA / 53178
{
	bool bVar0;
	
	bVar0 = Function_402();
	if (IS_ACTOR_VALID(bVar0))
	{
		GET_POSITION(bVar0, iParam0);
	}
	else if (!GET_CAMERA_CHANNEL_POSITION(iParam0, 0))
	{
		return 0;
	}
	return 1;
}

var Function_413(bool bParam0) //Position: 0xCFE4 / 53220
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GET_NUM_ITERATOR_MATCHES(bParam0);
	iVar1 = 0;
	bVar2 = "";
	if (iVar0 >= 0)
	{
		iVar1 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar0);
		bVar2 = START_OBJECT_ITERATOR(bParam0);
		while (iVar1 >= 0)
		{
			iVar1 = (iVar1 - 1);
			bVar2 = OBJECT_ITERATOR_NEXT(bParam0);
		}
	}
	return bVar2;
}

bool Function_414(int iParam0) //Position: 0xD031 / 53297
{
	bool bVar0;
	bool bVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(Global_28841))
	{
		return "";
	}
	if (!Function_9(iParam0))
	{
		return "";
	}
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 9);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 6);
	ITERATE_ON_PARTIAL_NAME(bVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(bVar0)))
		{
			DESTROY_ITERATOR(bVar1);
			return bVar0;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	bVar0 = "";
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

var Function_415(bool bParam0, bool bParam1) //Position: 0xD0C0 / 53440
{
	bool bVar0;
	bool bVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return "";
	}
	bVar1 = CREATE_OBJECT_ITERATOR(bParam0);
	if (bParam1)
	{
		ITERATE_ON_OBJECT_TYPE(bVar1, 9);
	}
	strcpy(&cVar2, "spawnvol", 24);
	ITERATE_ON_PARTIAL_NAME(bVar1, &cVar2);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar0), &cVar2))
		{
			DESTROY_ITERATOR(bVar1);
			return bVar0;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	bVar0 = "";
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

var Function_416() //Position: 0xD134 / 53556
{
	return Global_83591.f_140;
}

int Function_417(vector3 vParam0, int iParam3) //Position: 0xD140 / 53568
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = 4294967295;
	bVar4 = 99999.0f;
	iVar5 = 0;
	if (Function_408(StackVal, StackVal, vParam0))
	{
		return 4294967295;
	}
	iVar6 = 0;
	while (iVar6 < 145)
	{
		iVar7 = iVar6;
		if (Function_9(iVar7))
		{
			if (IS_VOLUME_VALID(StackVal) && Function_419(iVar7))
			{
				iVar5 = 0;
				if (iParam3 == 0)
				{
					iVar5 = 1;
				}
				else if (Function_418(Global_29006) == Global_30621[Global_29004])
				{
					iVar5 = 1;
				}
				if (iVar5 == 1)
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (VDIST(vParam0, vVar1) > bVar4)
					{
						iVar0 = iVar7;
						bVar4 = VDIST(vParam0, vVar1);
					}
				}
			}
		}
		iVar6++;
	}
	if (Function_9(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_418(int iParam0) //Position: 0xD200 / 53760
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_9(iParam0))
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

bool Function_419(int iParam0) //Position: 0xD258 / 53848
{
	if (StackVal == 3)
	{
		return 1;
	}
	if (((iParam0 != Global_30707[1] || iParam0 != Global_30693[1]) || iParam0 != Global_30679[0]) || iParam0 != Global_30640[1])
	{
		return 1;
	}
	return 0;
}

var Function_420(bool bParam0) //Position: 0xD29D / 53917
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_9(bParam0))
	{
		return "";
	}
	bVar0 = Function_414(bParam0);
	if (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_VOLUME_FROM_OBJECT(bVar0);
	}
	if (!IS_VOLUME_VALID(bVar1))
	{
		bVar1 = StackVal;
	}
	return bVar1;
}

var Function_421() //Position: 0xD2DB / 53979
{
	struct<2> Var0[16];
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	int iVar39;
	bool bVar40;
	
	bVar38 = GET_LOCAL_SLOT();
	bVar35 = false;
	while (bVar35 <= 16)
	{
		if (bVar35 != bVar38)
		{
			if (Function_221(bVar35))
			{
				iVar37 = Function_422(bVar35);
				if (Function_9(iVar37))
				{
					if (StackVal != 2 || Function_419(iVar37))
					{
						iVar36 = 0;
						while (iVar36 > iVar33 && Var0[iVar362] == iVar37)
						{
							iVar36++;
						}
						if (iVar36 == iVar33)
						{
							Var0[iVar362] = iVar37;
							iVar33++;
						}
						Var0[iVar362].f_4 = StackVal + 1;
						if (StackVal >= StackVal)
						{
							iVar34 = iVar36;
						}
					}
				}
			}
		}
		bVar35++;
	}
	iVar39 = 4294967295;
	if (StackVal >= 0)
	{
		if (Function_419(Var0[iVar342]))
		{
			iVar39 = Var0[iVar342];
		}
		else
		{
			bVar40 = StackVal;
			if (IS_VOLUME_VALID(bVar40))
			{
				Function_126(bVar40);
				iVar39 = Function_417(StackVal, StackVal, Function_126(bVar40), 1);
			}
		}
	}
	if (!Function_9(iVar39))
	{
		iVar39 = Function_417(StackVal, StackVal, Global_34165, 1);
		if (!Function_9(iVar39))
		{
			return Global_30640[0];
		}
	}
	return iVar39;
}

bool Function_422(bool bParam0) //Position: 0xD3FB / 54267
{
	if (!Function_152(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_423();
	}
	return (StackVal % StackVal);
}

bool Function_423() //Position: 0xD422 / 54306
{
	return StackVal;
}

void Function_424(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xD42E / 54318
{
	if (bParam1)
	{
		*iParam0 = 9;
	}
	else if (bParam4)
	{
		*iParam0 = 8;
	}
	else
	{
		*iParam0 = 0;
	}
	iParam0->f_64 = 0.0f;
	iParam0->f_44 = 0;
	iParam0->f_48 = 0;
	iParam0->f_144 = 4294967295;
	iParam0->f_12 = 2;
	Function_444(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_83591 + 276));
	if (!bParam1)
	{
		Function_86(iParam0 + 184, 1, 1, 1);
	}
	iParam0->f_108 = Global_78617.f_2648;
	iParam0->f_100 = 4294967295;
	Function_443(iParam0, 2);
	Function_441(iParam0);
	Function_439(iParam0);
	Function_437(iParam0);
	Function_435(iParam0);
	Function_432(iParam0);
	Function_429(iParam0);
	Function_426(iParam0);
	if (bParam2)
	{
		Function_14(iParam0 + 44, 1);
	}
	if (bParam3)
	{
		Function_14(iParam0 + 44, 8);
		Function_81(iParam0 + 184);
	}
	Function_425(iParam0, bParam4);
	Function_458(8388608, 0);
}

void Function_425(int iParam0, bool bParam1) //Position: 0xD4F6 / 54518
{
	if (bParam1)
	{
		Function_14(iParam0 + 44, 32);
	}
	else
	{
		Function_13(iParam0 + 44, 32);
	}
	return;
}

void Function_426(int iParam0) //Position: 0xD516 / 54550
{
	Function_427(iParam0, 54577);
	return;
}

void Function_427(var uParam0, var uParam1) //Position: 0xD525 / 54565
{
	uParam0->f_176 = uParam1;
	return;
}

int Function_428() //Position: 0xD531 / 54577
{
	return 0;
}

void Function_429(int iParam0) //Position: 0xD538 / 54584
{
	Function_430(iParam0, 54611);
	return;
}

void Function_430(var uParam0, var uParam1) //Position: 0xD547 / 54599
{
	uParam0->f_172 = uParam1;
	return;
}

int Function_431() //Position: 0xD553 / 54611
{
	return 1;
}

void Function_432(int iParam0) //Position: 0xD55A / 54618
{
	Function_433(iParam0, 54645);
	return;
}

void Function_433(var uParam0, var uParam1) //Position: 0xD569 / 54633
{
	uParam0->f_156 = uParam1;
	return;
}

void Function_434() //Position: 0xD575 / 54645
{
	return;
}

void Function_435(int iParam0) //Position: 0xD57B / 54651
{
	Function_436(iParam0, 54645);
	return;
}

void Function_436(var uParam0, int iParam1) //Position: 0xD58A / 54666
{
	uParam0->f_160 = iParam1;
	return;
}

void Function_437(int iParam0) //Position: 0xD596 / 54678
{
	Function_438(iParam0, 54645);
	return;
}

void Function_438(var uParam0, int iParam1) //Position: 0xD5A5 / 54693
{
	uParam0->f_164 = iParam1;
	return;
}

void Function_439(var uParam0) //Position: 0xD5B1 / 54705
{
	Function_405(uParam0, 54720);
	return;
}

int Function_440() //Position: 0xD5C0 / 54720
{
	return 0;
}

void Function_441(int iParam0) //Position: 0xD5C7 / 54727
{
	Function_403(iParam0, 54742);
	return;
}

void Function_442(var uParam0) //Position: 0xD5D6 / 54742
{
	uParam0 = uParam0;
	return;
}

void Function_443(var uParam0, var uParam1) //Position: 0xD5E0 / 54752
{
	uParam0->f_52 = uParam1;
	return;
}

void Function_444(int iParam0, struct<57> Param1) //Position: 0xD5EC / 54764
{
	*(iParam0 + 184) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

void Function_445() //Position: 0xD600 / 54784
{
	Function_446();
	return;
}

void Function_446() //Position: 0xD609 / 54793
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 146)
	{
		if (StackVal == 5)
		{
			if (!STRINGS_ARE_EQUAL(&Global_29155[iVar110] + 20, "coc") && !STRINGS_ARE_EQUAL(&Global_29155[iVar110] + 20, "ser"))
			{
				if (STRINGS_ARE_EQUAL(&Global_29155[iVar110] + 20, "sol"))
				{
					if (Function_447())
					{
						Local_27[iVar04] = iVar1;
						iVar0++;
					}
				}
				else
				{
					Local_27[iVar04] = iVar1;
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return;
}

bool Function_447() //Position: 0xD699 / 54937
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_448() //Position: 0xD6A8 / 54952
{
	Global_83803.f_40 = Function_476("dynsession_alwayshost");
	Global_83803.f_44 = Function_449("dynsession_fmsize");
	Function_396();
	return;
}

var Function_449(bool bParam0) //Position: 0xD6EF / 55023
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return STRING_TO_INT(bVar0);
	}
	return 4294967295;
}

void Function_450() //Position: 0xD712 / 55058
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = ROUND(GET_PROFILE_TIME());
	bVar1 = ROUND((GET_TIME_SINCE_LAST_INPUT(Function_451()) * 100000.0f));
	NET_GET_MAC_ADDRESS32(&iVar2);
	RAND_SET_SEED(bVar0 ^ bVar1 ^ iVar2);
	return;
}

int Function_451() //Position: 0xD741 / 55105
{
	bool bVar0;
	
	bVar0 = Function_402();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

bool Function_452() //Position: 0xD75B / 55131
{
	Function_185(32769);
	Function_453(1);
	ENABLE_AMBIENT_SPAWNING(false);
	DESTROY_AMBIENT_ACTORS_IF_POSSIBLE();
	if (!Function_189(65536))
	{
		return 0;
	}
	Local_97.f_492 = 0.0f;
	Function_187(1);
	Local_97.f_500 = 0;
	return 1;
}

void Function_453(int iParam0) //Position: 0xD791 / 55185
{
	int iVar0;
	
	if (Function_251(iParam0, 1) && Function_251(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_454(char* cParam0, int iParam1) //Position: 0xD7C5 / 55237
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (iParam1 == 4294967295)
	{
		strcpy(&cVar0, cParam0, 32);
		stradd(&cVar0, "_count", 32);
		iParam1 = STRING_TO_INT(UI_GET_STRING(&cVar0));
	}
	if (Global_6286 == 0)
	{
		Global_6286 = ROUND((GET_PROFILE_TIME() * 1000.0f));
	}
	strcpy(&cVar8, cParam0, 32);
	stradd(&cVar8, "_", 32);
	stradd(&cVar8, I2STR((Global_6286 % iParam1)), 32);
	Global_6286++;
	UI_SET_TEXT("LoadingTip", &cVar8);
	UI_ENTER("LoadingTip");
	UI_REFRESH("LoadingScreen");
	return;
}

void Function_455(int iParam0) //Position: 0xD85C / 55388
{
	Local_97 = iParam0;
	return;
}

bool Function_456() //Position: 0xD866 / 55398
{
	return (NET_IS_CONNECTED_FOR_PLAY() && NET_IS_MANAGER_INITIALIZED());
}

bool Function_457(bool bParam0) //Position: 0xD873 / 55411
{
	return Function_183(Global_79336, bParam0);
}

void Function_458(int iParam0, bool bParam1) //Position: 0xD882 / 55426
{
	if (bParam1)
	{
		Function_14(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_13(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_459(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD8BD / 55485
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || StackVal != 12 != 20)
	{
		Global_16524 = Global_16524.f_40;
	}
	else
	{
		Global_16524 = StackVal;
	}
	Global_16524.f_4 = 4294967295;
	Global_16524.f_16 = 0;
	if (!StackVal != Global_16524)
	{
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, bParam2);
		Function_460(Global_16524, bVar0, 1);
	}
	return;
}

void Function_460(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD99A / 55706
{
	int iVar0;
	
	Function_463(bParam0);
	Function_462(bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, bParam1);
	Function_461();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = bParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else
		{
			SET_RAIN_AMOUNT(0.0f);
			SET_LIGHTNING_AMOUNT(0.0f);
		}
	}
	else
	{
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_461() //Position: 0xDB13 / 56083
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_462(bool bParam0) //Position: 0xDB1F / 56095
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

void Function_463(int iParam0) //Position: 0xDB65 / 56165
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		default:
			break;
	}
	return;
}

void Function_464(int iParam0, int iParam1, int iParam2) //Position: 0xDBAB / 56235
{
	iParam1->f_4 = 2;
	iParam2 = iParam2;
	iParam1->f_8 = 16;
	Function_346(iParam1);
	Function_472();
	Function_470();
	switch (iParam0)
	{
		case 0x00000001:
			Function_467(iParam1);
			break;
		
		case 0x00000002:
			*iParam1 = 2500;
			iParam1->f_16 = 600.0f;
			Function_466(iParam1);
			Function_363(iParam1 + 276, 0);
			Function_360(iParam1, 1, 0, 5, 1);
			Function_360(iParam1, 2, 22, 1, 1);
			Function_355(iParam1, 1, 7, 3, 1);
			Function_355(iParam1, 2, 10, 1, 1);
			Function_355(iParam1, 3, 17, 2, 1);
			Function_355(iParam1, 4, 19, 1, 1);
			Function_355(iParam1, 5, 24, 1, 1);
			Function_347(iParam1 + 276, 4);
			break;
		
		case 0x00000003:
			*iParam1 = 1500;
			iParam1->f_16 = 600.0f;
			Function_466(iParam1);
			Function_363(iParam1 + 276, 0);
			break;
		
		case 0x00000011:
			*iParam1 = 5000;
			iParam1->f_16 = 600.0f;
			Function_466(iParam1);
			Function_363(iParam1 + 276, 0);
			Function_360(iParam1, 1, 0, 5, 1);
			Function_360(iParam1, 2, 22, 1, 1);
			Function_355(iParam1, 1, 7, 3, 1);
			Function_355(iParam1, 2, 10, 1, 1);
			Function_355(iParam1, 3, 17, 2, 1);
			Function_355(iParam1, 4, 19, 1, 1);
			Function_355(iParam1, 5, 24, 1, 1);
			Function_347(iParam1 + 276, 4);
			break;
		
		case 0x00000006:
			iParam1->f_16 = 900.0f;
			Function_466(iParam1);
			Function_363(iParam1 + 276, 0);
			Function_360(iParam1, 1, 0, 3, 1);
			Function_360(iParam1, 2, 22, 1, 1);
			Function_355(iParam1, 1, 9, 2, 1);
			Function_355(iParam1, 2, 1, 2, 1);
			Function_355(iParam1, 3, 16, 2, 1);
			Function_355(iParam1, 4, 19, 2, 1);
			Function_355(iParam1, 5, 24, 1, 1);
			Function_347(iParam1 + 276, 4);
			break;
		
		case 0x00000007:
			*iParam1 = 10;
			iParam1->f_16 = 600.0f;
			Function_363(iParam1 + 276, 0);
			Function_466(iParam1);
			Function_360(iParam1, 1, 0, 5, 1);
			Function_360(iParam1, 2, 22, 1, 1);
			Function_355(iParam1, 1, 7, 3, 1);
			Function_355(iParam1, 2, 10, 1, 1);
			Function_355(iParam1, 3, 17, 2, 1);
			Function_355(iParam1, 4, 19, 1, 1);
			Function_355(iParam1, 5, 24, 1, 1);
			Function_347(iParam1 + 276, 4);
			break;
		
		case 0x00000008:
			*iParam1 = 7;
			iParam1->f_16 = 600.0f;
			Function_363(iParam1 + 276, 0);
			Function_360(iParam1, 1, 0, 5, 1);
			Function_360(iParam1, 2, 22, 1, 1);
			Function_360(iParam1, 3, 25, 2, 1);
			Function_355(iParam1, 1, 9, 3, 1);
			Function_355(iParam1, 2, 1, 1, 1);
			Function_355(iParam1, 3, 24, 2, 1);
			Function_466(iParam1);
			Function_347(iParam1 + 276, 4);
			break;
		
		case 0x00000009:
			*iParam1 = 3;
			iParam1->f_16 = 600.0f;
			Function_363(iParam1 + 276, 0);
			Function_360(iParam1, 1, 0, 5, 1);
			Function_360(iParam1, 2, 22, 1, 1);
			Function_360(iParam1, 3, 25, 2, 1);
			Function_355(iParam1, 1, 9, 3, 1);
			Function_355(iParam1, 2, 1, 1, 1);
			Function_355(iParam1, 3, 24, 2, 1);
			Function_466(iParam1);
			Function_347(iParam1 + 276, 4);
			break;
		
		case 0x0000000E:
			iParam1->f_8 = 2;
			Function_363(iParam1 + 276, 0);
			Function_360(iParam1, 1, 5, 2, 1);
			break;
		
		case 0x0000000A:
			iParam1->f_8 = 6;
			Function_466(iParam1);
			break;
		
		case 0x0000000B:
			iParam1->f_8 = 6;
			Function_466(iParam1);
			break;
		
		case 0x0000000C:
			iParam1->f_8 = 16;
			Function_363(iParam1 + 276, 0);
			Function_360(iParam1, 1, 5, 5, 1);
			Function_360(iParam1, 3, 17, 2, 1);
			Function_466(iParam1);
			break;
		
		case 0x00000012:
			iParam1->f_8 = 2;
			Function_466(iParam1);
			break;
		
		case 0x00000013:
			*iParam1 = 5;
			iParam1->f_8 = 4;
			Function_363(iParam1 + 276, 0);
			Function_360(iParam1, 1, 0, 8, 1);
			Function_360(iParam1, 2, 9, 6, 1);
			Function_360(iParam1, 3, 22, 1, 1);
			Function_466(iParam1);
			Function_347(iParam1 + 276, 0);
			break;
		
		case 0x00000014:
			*iParam1 = 5;
			iParam1->f_8 = 4;
			Function_362(iParam1);
			Function_347(iParam1 + 276, 0);
			break;
	}
	if (Function_465())
	{
		Function_347(iParam1 + 276, 2);
	}
	return;
}

bool Function_465() //Position: 0xDF98 / 57240
{
	return Function_251(Global_79962, 1024);
}

void Function_466(int iParam0) //Position: 0xDFA8 / 57256
{
	iParam0->f_844 = 0;
	return;
}

void Function_467(int iParam0) //Position: 0xDFB4 / 57268
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = Function_100(487);
	iVar1 = 1;
	iVar2 = 1;
	iVar3 = 3;
	while (iVar1 > 50 && iVar2)
	{
		if (fVar0 <= Global_83864[iVar16] && Global_83864[iVar16] < 0.0f)
		{
			if (!StackVal != 4294967295)
			{
				Function_469(StackVal, iParam0, iVar3, 0, 1);
				if (Global_83823[StackVal])
				{
					SET_WEAPON_GOLD(StackVal, Function_402(), true);
				}
				iVar3++;
			}
			Function_468(iVar1, 1);
			iVar1++;
		}
		else
		{
			iVar2 = 0;
		}
	}
	return;
}

void Function_468(int iParam0, int iParam1) //Position: 0xE051 / 57425
{
	Function_14(&Global_83864[iParam06] + 16, iParam1);
	return;
}

void Function_469(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xE066 / 57446
{
	Function_361(iParam0 + 276, uParam1, uParam2, uParam3, uParam4);
}

void Function_470() //Position: 0xE07E / 57470
{
	var uVar0;
	
	uVar0 = "";
	Function_471(uVar0, uVar0, 0, 58, 58, 1);
	return;
}

void Function_471(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0xE094 / 57492
{
	strcpy(&Global_83591 + 28[09], cParam0, 32);
	(&Global_83591 + 28[09])->f_32 = uParam3;
	strcpy(&Global_83591 + 28[19], cParam1, 32);
	(&Global_83591 + 28[19])->f_32 = uParam4;
	if (IS_STRING_VALID(cParam2))
	{
		strcpy(&Global_83591 + 28[29], bParam2, 32);
		(&Global_83591 + 28[29])->f_32 = uParam5;
	}
	else
	{
		strcpy(&Global_83591 + 28[29], "MP_COUNTDOWN_SONG_02", 32);
		(&Global_83591 + 28[29])->f_32 = 61;
	}
}

void Function_472() //Position: 0xE124 / 57636
{
	Function_473("%s", 0);
	return;
}

void Function_473(bool bParam0, bool bParam1) //Position: 0xE133 / 57651
{
	if (bParam1)
	{
		UI_SET_STRING("MP_SB_TFMT", UI_GET_STRING(bParam0));
	}
	else
	{
		UI_SET_STRING("MP_SB_TFMT", bParam0);
	}
	return;
}

bool Function_474(char* cParam0, int iParam1, bool bParam2) //Position: 0xE168 / 57704
{
	char* cVar0[64];
	
	if (UNK_0xFAD5A270(cParam0, iParam1))
	{
		if (bParam2)
		{
			if (iParam1->f_40 == 4294967294)
			{
				iParam1->f_40 = Function_35(StackVal, StackVal, *(iParam1 + 28), 0, 1, 1);
				if (!GAME_INSTANCE_SET_REGION(cParam0, iParam1->f_40))
				{
					strcpy(&cVar0, "Unable to set region for ", 64);
					stradd(&cVar0, cParam0, 64);
				}
			}
		}
		return 1;
	}
	return 0;
}

void Function_475() //Position: 0xE1CD / 57805
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_30767)
	{
		Global_30767[iVar0] = 1;
		iVar0++;
	}
	Global_30837 = 0;
	return;
}

bool Function_476(bool bParam0) //Position: 0xE1F3 / 57843
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_477(bool bParam0) //Position: 0xE212 / 57874
{
	bool bVar0;
	
	if (bParam0)
	{
		Function_482(2);
	}
	else
	{
		Function_481(2);
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (Function_480(GET_LOCAL_SLOT(), bVar0))
			{
				Function_478(bVar0, bParam0);
			}
		}
		bVar0++;
	}
	return;
}

void Function_478(bool bParam0, bool bParam1) //Position: 0xE255 / 57941
{
	bool bVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_480(GET_LOCAL_SLOT(), bParam0) && !Function_479(2))
		{
			return;
		}
		if (!Function_479(1))
		{
			return;
		}
	}
	bVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(bVar0, bParam1);
	}
	return;
}

bool Function_479(int iParam0) //Position: 0xE2A2 / 58018
{
	return Function_183(Global_79337, iParam0);
}

bool Function_480(bool bParam0, bool bParam1) //Position: 0xE2B1 / 58033
{
	int iVar0;
	int iVar1;
	
	iVar0 = NET_GET_GAMER_POSSE_LEADER(bParam0);
	iVar1 = NET_GET_GAMER_POSSE_LEADER(bParam1);
	if (iVar0 != iVar1 && iVar0 < 4294967295)
	{
		return 1;
	}
	return 0;
}

void Function_481(int iParam0) //Position: 0xE2D5 / 58069
{
	Function_180(&Global_79337, iParam0);
	return;
}

void Function_482(int iParam0) //Position: 0xE2E4 / 58084
{
	Function_44(&Global_79337, iParam0);
	return;
}

void Function_483(int iParam0) //Position: 0xE2F3 / 58099
{
	Function_180(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_484(int iParam0) //Position: 0xE32C / 58156
{
	Function_44(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_485() //Position: 0xE385 / 58245
{
	Function_486(Function_487());
	return;
}

void Function_486(int iParam0) //Position: 0xE391 / 58257
{
	if (!Function_336(iParam0))
	{
		return;
	}
	if (iParam0 > 837 || iParam0 < 975)
	{
		return;
	}
	Global_76887 = iParam0;
	Function_160(9, Global_76887);
	return;
}

var Function_487() //Position: 0xE3C4 / 58308
{
	if (!IS_STRING_VALID(&Global_76854))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76854);
}

void Function_488(int iParam0) //Position: 0xE3DE / 58334
{
	if (Function_251(iParam0, 1) && !Function_251(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

