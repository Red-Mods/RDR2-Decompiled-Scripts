//Decompiled with MagicRDR v1.0
//Function Count : 314
//Statics Count : 956
//Natives Count : 328
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
	struct<1365> Local_12 = { 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar9;
	vector3 vVar10;
	bool bVar13;
	int iVar15;
	var uVar16;
	int iVar21;
	struct<4> Var22;
	float fVar26;
	int iVar27;
	float fVar30;
	int iVar31;
	
	iLocal_11 = 0;
	fLocal_354 = 0.15f;
	fLocal_355 = 0.5f;
	fLocal_356 = 0.5f;
	fLocal_357 = 0.2f;
	fLocal_358 = 1.65f;
	fLocal_359 = 0.3f;
	fLocal_360 = 0.3f;
	fLocal_361 = 0.6f;
	fLocal_362 = 1.2f;
	fLocal_363 = 1.0f;
	fLocal_364 = 2.0f;
	fLocal_365 = 2.5f;
	fLocal_366 = 0.85f;
	fLocal_367 = 0.3f;
	fLocal_368 = 0.015f;
	fLocal_369 = 12.5f;
	fLocal_371 = 0.2f;
	fLocal_372 = 0.3f;
	fLocal_373 = -1.0f;
	fLocal_374 = 45.0f;
	fLocal_375 = 1.0f;
	fLocal_376 = 0.225f;
	fLocal_377 = 5.395f;
	fLocal_378 = 1.575f;
	vLocal_379 = { 0.125f, 1.6f, -0.25f };
	vLocal_382 = { 1.0f, 1.0f, 1.0f };
	iLocal_385 = 256;
	iLocal_386 = 1;
	bLocal_387 = Function_313(32);
	bLocal_388 = Function_313(64);
	bLocal_389 = Function_313(1024);
	bLocal_390 = Function_313(131072);
	iLocal_391 = 0;
	iLocal_399 = 0;
	iLocal_400 = 0;
	iLocal_401 = 0;
	bLocal_402 = false;
	iLocal_403 = 0;
	iLocal_529 = 0;
	iLocal_530 = 0;
	vLocal_531 = { -129.789f, 128.302f, 848.648f };
	iLocal_919 = 1;
	iLocal_920 = 1;
	iLocal_929 = 837;
	iLocal_930 = 971;
	iLocal_931 = 1287;
	iLocal_932 = 1310;
	fLocal_933 = 0.4f;
	fLocal_934 = 1.8f;
	fLocal_935 = 1.0f;
	fLocal_936 = 0.1f;
	fLocal_937 = 0.55f;
	fLocal_938 = 1.3f;
	fLocal_939 = 0.45f;
	UI_ENTER("GeneralMenus");
	iVar1 = 0;
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	CANCEL_DEADEYE();
	CANCEL_TIME_WARP(0);
	Function_312();
	if (Function_311("FREEROAM", &Global_79349, 0))
	{
		Function_279(Global_79349.f_16, &Global_83591, 1);
	}
	STREAMING_RELEASE_MAIN_POI();
	Function_278();
	Function_277(1);
	Function_276(20);
	iVar9 = 0;
	vVar10 = { StackVal, StackVal, Global_34574 };
	bVar13 = _GET_PARAM_VALUE("avatarPickerLocation", "none");
	if (IS_STRING_VALID(bVar13))
	{
		if (SET_OWNERSHIP_STRAGGLER(bVar13, ",") > 3)
		{
			vLocal_531.x = STRING_TO_FLOAT(STRING_GET_TOKEN(0));
			vLocal_531.f_4 = STRING_TO_FLOAT(STRING_GET_TOKEN(1));
			vLocal_531.f_8 = STRING_TO_FLOAT(STRING_GET_TOKEN(2));
		}
		STRING_CLEAR_TOKENIZER();
	}
	vLocal_448 = { StackVal, StackVal, vLocal_531 };
	bVar0 = true;
	iVar15 = 0;
	uVar16 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	iVar21 = 0;
	fVar30 = 5.0f;
	while (!IS_EXITFLAG_SET())
	{
		if (iVar9 < 5 && iVar9 > 19)
		{
			Function_243(&iVar9);
			Function_239();
		}
		switch (iVar9)
		{
			case 0x00000000:
				if (HUD_IS_FADED())
				{
					Function_238();
					Function_237();
					Function_236();
					Function_234(&bLocal_405, "mp_avatarpicker", 10, 0);
					Function_233(&bLocal_405, 1000, 2, 0);
					Function_233(&bLocal_405, 996, 2, 0);
					Function_233(&bLocal_405, 987, 2, 0);
					Function_233(&bLocal_405, 976, 2, 0);
					Function_233(&bLocal_405, 982, 2, 0);
					Function_233(&bLocal_405, 979, 2, 0);
					Function_233(&bLocal_405, 1006, 2, 0);
					Function_233(&bLocal_405, 1004, 2, 0);
					Function_233(&bLocal_405, 1005, 2, 0);
					Function_233(&bLocal_405, 1007, 2, 0);
					Function_233(&bLocal_405, 1003, 2, 0);
					Function_227(&bLocal_405);
					iVar9 = 1;
				}
				else if (!HUD_IS_FADING())
				{
					HUD_FADE_TO_LOADING_SCREEN();
				}
				break;
			
			case 0x00000001:
				if (!IS_SCRIPT_VALID(Global_79344))
				{
					Function_195();
					iVar9 = 2;
				}
				break;
			
			case 0x00000002:
				Function_181();
				Function_180();
				UI_SET_TEXT("LoadingMissionName", "mp_fe_avatarpicker");
				iVar9 = 3;
				break;
			
			case 0x00000003:
				if (HUD_IS_FADED())
				{
					if (Function_227(&bLocal_405) && Function_237())
					{
						Function_173(1, 0, 1);
						STREAMING_LOAD_BOUNDS(vLocal_531, 200.0f, 1);
						STREAMING_LOAD_SCENE_EXT(-116.502f, 130.786f, 903.428f, 0.241f, -0.155f, 0.958f, 0);
						STREAMING_OVERRIDE_MAIN_POI(-116.502f, 130.786f, 903.428f, 0.241f, -0.155f, 0.958f);
						Function_172(&iVar27, 0.0f);
						if (bVar0)
						{
							fVar30 = 5.0f;
						}
						else
						{
							fVar30 = 1.0f;
						}
						UI_ENTER("HudAvatarPicker");
						if (Function_195())
						{
							iVar9 = 4;
						}
					}
				}
				else if (!HUD_IS_FADING())
				{
					Function_171();
					Function_170();
					HUD_FADE_TO_LOADING_SCREEN();
				}
				break;
			
			case 0x00000004:
				if ((Function_168(&iVar27) < fVar30 && STREAMING_IS_WORLD_LOADED()) && STREAMING_IS_WORLD_LOADED_PRIORITY(4))
				{
					if (bVar0)
					{
						Function_166();
						Function_164();
						FLASH_SET_INT("pause_main", "pausetransition.type", 14);
						FLASH_SET_INT("pause_main", "pausetransition.visibility", 0);
						UI_EXIT("AP_LoadFile");
						uLocal_398 = CREATE_EVENT_TRAP("outiftter_event_trap", 75, bLocal_392);
						EVENT_TRAP_STORE_EVENTS(uLocal_398, 1);
						Function_122();
						Function_120();
						Function_117();
						iVar9 = 5;
					}
					else
					{
						iVar9 = 19;
					}
				}
				break;
			
			case 0x00000005:
				if (HUD_IS_FADED())
				{
					uLocal_955 = CREATE_CAMERA_IN_LAYOUT(bLocal_392, "CurrentCamera", 0);
					INIT_CAMERA_FROM_GAME_CAMERA(uLocal_955);
					SET_CAMERA_TARGETDOF_USING_SOFT_DOF(uLocal_955, 0, 1);
					Function_115();
					iVar9 = 6;
				}
				break;
			
			case 0x00000006:
				Function_114();
				if (bLocal_926 == iLocal_385)
				{
					Function_113();
				}
				else
				{
					Function_112();
				}
				iVar9 = 7;
				fVar26 = GET_CURRENT_GAME_TIME();
			
			case 0x00000007:
				if (Function_111() || (IS_DEV_BUILD() && (GET_CURRENT_GAME_TIME() - fVar26) < 10.0f))
				{
					if (bLocal_926 != iLocal_385)
					{
						Function_108();
					}
					Function_105();
					iLocal_923 = Function_104((iLocal_529 - 1), iLocal_923);
					iVar9 = 14;
					fVar26 = GET_CURRENT_GAME_TIME();
				}
				break;
			
			case 0x0000000E:
				if (Function_102() || (IS_DEV_BUILD() && (GET_CURRENT_GAME_TIME() - fVar26) < 2.0f))
				{
					if (iLocal_386)
					{
						Function_101(StackVal, StackVal, StackVal, StackVal, &uLocal_955, Local_534[112], *(&Local_534[112] + 12));
						SET_CURRENT_CAMERA_ON_CHANNEL(uLocal_955, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
						Function_98();
						iLocal_386 = 0;
					}
					else if (bLocal_926 != iLocal_385)
					{
						Function_97((4 + iLocal_923));
						Function_96();
						Function_98();
					}
					else
					{
						Function_97((14 + iLocal_923));
						Function_95();
						Function_93();
					}
					Function_92(iLocal_923);
					Function_79();
					Function_78(&iLocal_950);
					Function_77();
					Var22 = { StackVal, StackVal, StackVal, Function_76(bLocal_926, 0) };
					UI_LABEL_SET_TEXT("LocationText", &Var22);
					Function_75(0.5f);
					_UI_ENTER_EXCLUSIVE("MP_ProfileEditor");
					Function_78(&iLocal_395);
					iVar9 = 15;
				}
				break;
			
			case 0x0000000F:
				if (Function_168(&iLocal_395) < 0.0f)
				{
					FLASH_SET_INT("pause_main", "pausetransition.visibility", 0);
					UI_EXIT("AP_LoadFile");
					iVar9 = 8;
				}
				break;
			
			case 0x00000008:
				if (FLASH_GET_INT("pause_main", "pausetransition.visibility") != 1 && Function_168(&iLocal_395) < 0.0f)
				{
					FLASH_SET_INT("pause_main", "pausetransition.visibility", 0);
					UI_EXIT("AP_LoadFile");
				}
				break;
			
			case 0x00000009:
				bVar2 = StackVal;
				iVar31 = GET_ACTOR_ENUM(bVar2);
				if (iVar31 != Function_74())
				{
					Function_73(iVar31);
					Function_71(iVar31);
					iLocal_924 = iLocal_923;
				}
				Function_39(0);
				bVar0 = false;
				vLocal_531 = { StackVal, StackVal, vVar10 };
				Function_78(&iLocal_944);
				Function_105();
				UI_EXIT("MP_AvatarModelSelector");
				UI_EXIT("MP_AvatarGroupSelector");
				UI_ENTER("MP_ProfileMenu");
				iVar9 = 8;
				break;
			
			case 0x0000000B:
				UI_SET_TEXT("MPP_MountValue", GET_ACTOR_ENUM_STRING_FROM_ENUM(Local_506[iLocal_9232]));
				Function_38(Local_506[iLocal_9232]);
				Function_34();
				Function_33(Global_83864.f_1284, 0, 1);
				Function_39(0);
				bVar0 = false;
				vLocal_531 = { StackVal, StackVal, vVar10 };
				Function_78(&iLocal_944);
				Function_105();
				UI_EXIT("MP_MountSelector");
				UI_ENTER("MP_ProfileMenu");
				iVar9 = 8;
				break;
			
			case 0x0000000C:
				iVar15 = (Function_32() * 1000 + Function_31(Function_32()));
				iVar15 = (iVar15 + iLocal_400);
				Function_30(iVar15);
				Function_25();
				Function_39(0);
				bVar0 = false;
				vLocal_531 = { StackVal, StackVal, vVar10 };
				Function_78(&iLocal_944);
				if (UI_ISFOCUSED("MP_TitleGroupXp"))
				{
					UI_EXIT("MP_TitleGroupXp");
				}
				else if (UI_ISFOCUSED("MP_TitleGroupAmbient"))
				{
					UI_EXIT("MP_TitleGroupAmbient");
				}
				else if (UI_ISFOCUSED("MP_TitleGroupWeapon"))
				{
					UI_EXIT("MP_TitleGroupWeapon");
				}
				else if (UI_ISFOCUSED("MP_TitleGroupPvP"))
				{
					UI_EXIT("MP_TitleGroupPvP");
				}
				else if (UI_ISFOCUSED("MP_TitleGroupStat"))
				{
					UI_EXIT("MP_TitleGroupStat");
				}
				else if (UI_ISFOCUSED("MP_TitleGroupDLC1"))
				{
					UI_EXIT("MP_TitleGroupDLC1");
				}
				else if (UI_ISFOCUSED("MP_TitleGroupDLC2"))
				{
					UI_EXIT("MP_TitleGroupDLC2");
				}
				else if (UI_ISFOCUSED("MP_TitleGroupDLC3"))
				{
					UI_EXIT("MP_TitleGroupDLC3");
				}
				else if (UI_ISFOCUSED("MP_TitleGroupDLC4"))
				{
					UI_EXIT("MP_TitleGroupDLC4");
				}
				UI_EXIT("MP_TitleGroupSelector");
				UI_ENTER("MP_ProfileMenu");
				iVar9 = 8;
				break;
			
			case 0x0000000A:
				if (Function_22(&iLocal_944, 2.5f))
				{
					iVar9 = 3;
				}
				break;
			
			case 0x0000000D:
				if (DECOR_CHECK_EXIST(Function_21(), "AvatarQuit") || iLocal_403)
				{
					DECOR_REMOVE(Function_21(), "AvatarQuit");
					bVar0 = false;
					Function_39(0);
					vLocal_531 = { StackVal, StackVal, vVar10 };
					iVar9 = 19;
				}
				else if (!UI_ISACTIVE("MP_AvatarQuit"))
				{
					Function_92(iLocal_923);
					iVar9 = 8;
				}
				break;
			
			case 0x00000010:
				if (HUD_IS_FADED())
				{
					Function_20();
					Function_170();
					iVar9 = 6;
				}
				else if (!HUD_IS_FADING())
				{
					Function_19(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				}
				break;
			
			case 0x00000011:
				Function_170();
				iVar9 = 6;
				break;
			
			case 0x00000012:
				Function_20();
				Function_170();
				iVar9 = 6;
				break;
			
			case 0x00000013:
				if (HUD_IS_FADED())
				{
					TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				}
				else if (!HUD_IS_FADING())
				{
					HUD_FADE_TO_LOADING_SCREEN();
					Function_171();
					Function_170();
				}
				break;
		}
		WAIT(0);
	}
	STREAMING_RELEASE_MAIN_POI();
	STREAMING_UNLOAD_BOUNDS();
	STREAMING_UNLOAD_SCENE();
	UI_EXIT("HudAvatarPicker");
	Function_171();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xC35 / 3125
{
	int iVar0;
	
	UI_EXIT("MP_AvatarModelSelector");
	UI_EXIT("MP_AvatarGroupSelector");
	UI_EXIT("MP_MountSelector");
	UI_EXIT("MP_TitleGroupXp");
	UI_EXIT("MP_TitleGroupAmbient");
	UI_EXIT("MP_TitleGroupWeapon");
	UI_EXIT("MP_TitleGroupPvP");
	UI_EXIT("MP_TitleGroupStat");
	UI_EXIT("MP_TitleGroupDLC1");
	UI_EXIT("MP_TitleGroupDLC2");
	UI_EXIT("MP_TitleGroupDLC3");
	UI_EXIT("MP_TitleGroupDLC4");
	UI_EXIT("MP_TitleGroupSelector");
	UI_ENTER("MP_ProfileMenu");
	Function_18();
	SET_DRAW_ACTOR(Function_21(), 1);
	Function_16(2097154);
	Function_276(5);
	Function_277(16);
	Function_14(128);
	Function_16(131072);
	Function_13(2097152, 0);
	Function_9();
	Function_8();
	Function_170();
	ENABLE_USE_CONTEXTS(1);
	Function_7();
	RESET_THIS_TREE_TYPE_CLEARING(iLocal_922);
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	NET_GAMER_SET_ACTOR_OVERRIDE(Function_6(), 0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (Local_455[iVar02] == 0 && Local_455[iVar02] == 4294967295)
		{
			if (STREAMING_IS_ACTOR_LOADED(Local_455[iVar02], 4294967295))
			{
				STREAMING_EVICT_ACTOR(Local_455[iVar02], 4294967295);
			}
		}
		if (IS_ACTOR_VALID(StackVal))
		{
			DESTROY_ACTOR(StackVal);
		}
		iVar0++;
	}
	Function_2(&bLocal_405);
	DESTROY_CAMERA(uLocal_955);
	SET_HUD_MAP_DRAW_ENABLED(1);
	HUD_ENABLE(1);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	CAMERA_RESET(0);
	if (IS_POINT_LIGHT_VALID(iLocal_393))
	{
		DESTROY_POINT_LIGHT(iLocal_393);
	}
	if (IS_POINT_LIGHT_VALID(iLocal_394))
	{
		DESTROY_POINT_LIGHT(iLocal_394);
	}
	DESTROY_LAYOUT(bLocal_392);
	CLEAR_ALL_CORPSES();
	DESTROY_GC_OBJECTS(0, 1);
	return;
}

void Function_2(bool bParam0) //Position: 0xE83 / 3715
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_3(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0xEA9 / 3753
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

void Function_4(var uParam0, int iParam1) //Position: 0xFD7 / 4055
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0xFF1 / 4081
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_6() //Position: 0x100E / 4110
{
	return 4294967295;
}

void Function_7() //Position: 0x1015 / 4117
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	return;
}

void Function_8() //Position: 0x1021 / 4129
{
	Global_26119 = Global_83816 | 1073741824;
	Global_28842 = Global_83817 | 1073741824;
	return;
}

void Function_9() //Position: 0x1041 / 4161
{
	Function_10(1024, 0, 1);
	Function_10(1, 0, 0);
	return;
}

void Function_10(bool bParam0, bool bParam1, int iParam2) //Position: 0x1055 / 4181
{
	iParam2 = iParam2;
	if (bParam1)
	{
		Function_12(&Global_76905 + 132, bParam0);
	}
	else
	{
		Function_11(&Global_76905 + 132, bParam0);
	}
	return;
}

void Function_11(int iParam0, bool bParam1) //Position: 0x107D / 4221
{
	*iParam0 = (*iParam0 - (*iParam0 && bParam1));
	return;
}

void Function_12(int iParam0, bool bParam1) //Position: 0x1090 / 4240
{
	*iParam0 = (*iParam0 || bParam1);
	return;
}

void Function_13(bool bParam0, bool bParam1) //Position: 0x109F / 4255
{
	if (bParam1)
	{
		Function_12(&Global_78480 + 124, bParam0);
	}
	else
	{
		Function_11(&Global_78480 + 124, bParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_14(int iParam0) //Position: 0x10DA / 4314
{
	Function_15(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x1113 / 4371
{
	Function_11(uParam0, iParam1);
	return;
}

void Function_16(int iParam0) //Position: 0x1120 / 4384
{
	Function_17(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0x1179 / 4473
{
	Function_12(uParam0, iParam1);
	return;
}

void Function_18() //Position: 0x1186 / 4486
{
	Function_2(&Local_12 + 4);
	RELEASE_LAYOUT_REF(Local_12);
	return;
}

void Function_19(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x1198 / 4504
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

void Function_20() //Position: 0x11C1 / 4545
{
	int iVar0;
	
	FLASH_SET_INT("pause_main", "pausetransition.type", 14);
	FLASH_SET_INT("pause_main", "pausetransition.visibility", 1);
	FLASH_SET_INT("pause_main", "character_label.visibility", 0);
	UI_ENTER("AP_LoadFile");
	iVar0 = 0;
	while (iVar0 <= iLocal_529)
	{
		if (STREAMING_IS_ACTOR_LOADED(Local_455[iVar02], 4294967295))
		{
			STREAMING_EVICT_ACTOR(Local_455[iVar02], 4294967295);
		}
		if (IS_ACTOR_VALID(StackVal))
		{
			DESTROY_ACTOR(StackVal);
		}
		iVar0++;
	}
	return;
}

var Function_21() //Position: 0x12A8 / 4776
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_22(int iParam0, float fParam1) //Position: 0x12BD / 4797
{
	if (Function_23(iParam0))
	{
		if (Function_168(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_23(int iParam0) //Position: 0x12D9 / 4825
{
	return Function_24(*iParam0, 1);
}

bool Function_24(var uParam0, bool bParam1) //Position: 0x12E6 / 4838
{
	return (uParam0 && bParam1) == 0;
}

void Function_25() //Position: 0x12F3 / 4851
{
	Function_26(Function_29());
	return;
}

void Function_26(var uParam0) //Position: 0x12FF / 4863
{
	char* cVar0[64];
	char* cVar16;
	char* cVar17;
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(uParam0) };
	cVar16 = UI_GET_STRING(&cVar0);
	UI_SET_TEXT("MPP_TitleValue", &cVar0);
	if (NET_GET_PLAYMODE() == 1)
	{
		NET_GAMER_SET_TITLE(GET_LOCAL_SLOT(), cVar16);
	}
	if (Function_27())
	{
		cVar17 = cVar16;
		stradd(&cVar0, "_en", 64);
		cVar16 = UI_GET_STRING(&cVar0);
		NET_GAMER_SETMY_JPN_TITLE(cVar17);
	}
	Global_78480.f_28 = uParam0;
	strcpy(&Global_78480 + 32, cVar16, 64);
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_28 = uParam0;
		strcpy(&Global_76943[GET_LOCAL_SLOT()96] + 32, cVar16, 64);
	}
	UPDATE_STRING_PROFILE_STAT("MpTitleStringId", cVar16);
	return;
}

bool Function_27() //Position: 0x13A7 / 5031
{
	return HAS_STRING_TABLE_LOADED("jp");
}

struct<64> Function_28(int iParam0) //Position: 0x13B5 / 5045
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = (iParam0 / 1000);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_83864 + 1288[iVar017]) };
	straddi(&Var1, (iParam0 % 1000), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var1;
}

var Function_29() //Position: 0x13E7 / 5095
{
	return Global_76886;
}

void Function_30(int iParam0) //Position: 0x13F1 / 5105
{
	Global_76886 = iParam0;
	return;
}

int Function_31(int iParam0) //Position: 0x13FD / 5117
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int Function_32() //Position: 0x140C / 5132
{
	if (UI_ISFOCUSED("MP_TitleGroupXp"))
	{
		return 0;
	}
	if (UI_ISFOCUSED("MP_TitleGroupAmbient"))
	{
		return 1;
	}
	if (UI_ISFOCUSED("MP_TitleGroupWeapon"))
	{
		return 2;
	}
	if (UI_ISFOCUSED("MP_TitleGroupPvP"))
	{
		return 3;
	}
	if (UI_ISFOCUSED("MP_TitleGroupStat"))
	{
		return 4;
	}
	if (UI_ISFOCUSED("MP_TitleGroupDLC1"))
	{
		return 5;
	}
	if (UI_ISFOCUSED("MP_TitleGroupDLC2"))
	{
		return 6;
	}
	if (UI_ISFOCUSED("MP_TitleGroupDLC3"))
	{
		return 7;
	}
	if (UI_ISFOCUSED("MP_TitleGroupDLC4"))
	{
		return 8;
	}
	return 0;
}

void Function_33(var uParam0, bool bParam1, bool bParam2) //Position: 0x152A / 5418
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_12(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_12(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_34() //Position: 0x1557 / 5463
{
	Function_35(Function_37());
	return;
}

void Function_35(int iParam0) //Position: 0x1563 / 5475
{
	if (!Function_36(iParam0))
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

bool Function_36(int iParam0) //Position: 0x1590 / 5520
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

int Function_37() //Position: 0x15A7 / 5543
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_38(int iParam0) //Position: 0x15C1 / 5569
{
	if (!Function_36(iParam0))
	{
		return;
	}
	if (iParam0 > 976 || iParam0 < 1007)
	{
		return;
	}
	strcpy(&Global_76870, GET_ACTOR_ENUM_STRING_FROM_ENUM(iParam0), 64);
	return;
}

void Function_39(bool bParam0) //Position: 0x15F0 / 5616
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, 0, 0);
	Function_70(2);
	if (bParam0)
	{
		Function_70(1);
	}
	else
	{
		Function_69(1);
	}
	Function_40();
	return;
}

void Function_40() //Position: 0x1679 / 5753
{
	Function_67();
	Function_66();
	Function_66();
	Function_65();
	Function_65();
	Function_64();
	Function_64();
	Function_48(0);
	Function_48(0);
	if (!Function_47())
	{
		Function_45();
		Function_44();
		Function_43();
		Function_42();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_41();
	return;
}

void Function_41() //Position: 0x16CB / 5835
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

void Function_42() //Position: 0x17D1 / 6097
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

void Function_43() //Position: 0x1804 / 6148
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

void Function_44() //Position: 0x1992 / 6546
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

void Function_45() //Position: 0x1B46 / 6982
{
	Function_46(&Global_28260, 1, 0);
	return;
}

void Function_46(int iParam0, bool bParam1, int iParam2) //Position: 0x1B54 / 6996
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
	
	bVar0 = Function_21();
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

bool Function_47() //Position: 0x1D45 / 7493
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_48(int iParam0) //Position: 0x1D4E / 7502
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
					iVar2 = ((Function_63((50 + iVar4)) + Function_63((183 + iVar4))) + Function_63((90 + iVar4)));
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
	Function_49(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_49(int iParam0, bool bParam1, bool bParam2) //Position: 0x1DF4 / 7668
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
		Function_62(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_61(iParam0);
	if (bParam2)
	{
		Function_50(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_50(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x208F / 8335
{
	char* cVar0;
	char* cVar1[32];
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_60(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_59(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_59(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_57(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_55(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_52(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_51(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_51() //Position: 0x26BC / 9916
{
	int iVar0;
	
	return iVar0;
}

var Function_52(int iParam0) //Position: 0x26C4 / 9924
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_53(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x26D5 / 9941
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_54("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_54(char* cParam0, char* cParam1) //Position: 0x27CA / 10186
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_55(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x27E3 / 10211
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_104(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_56(Function_104(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_56(int iParam0, int iParam1) //Position: 0x2848 / 10312
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_57(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x285A / 10330
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
	if (((Function_58(iParam0) != 19 || Function_58(iParam0) != 17) || Function_58(iParam0) != 10) || Function_58(iParam0) != 9)
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

int Function_58(int iParam0) //Position: 0x298A / 10634
{
	return Global_35278[iParam020].f_48;
}

float Function_59(int iParam0) //Position: 0x2999 / 10649
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_60(int iParam0) //Position: 0x29D2 / 10706
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_61(int iParam0) //Position: 0x2A0F / 10767
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

int Function_62(int iParam0, float fParam1, bool bParam2) //Position: 0x2BA9 / 11177
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
			Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = fParam1;
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

int Function_63(int iParam0) //Position: 0x2DED / 11757
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

struct<8> Function_64() //Position: 0x2E2E / 11822
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
		iVar2 = ((Function_63((50 + iVar3) + 15) + Function_63((183 + iVar3) + 15)) + Function_63((90 + iVar3) + 15));
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
	Function_49(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_65() //Position: 0x2EB7 / 11959
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
			iVar2 = ((Function_63((50 + iVar3) + 8) + Function_63((183 + iVar3) + 8)) + Function_63((90 + iVar3) + 8));
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
	Function_49(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_66() //Position: 0x2F4E / 12110
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
		iVar2 = ((Function_63((50 + iVar3)) + Function_63((183 + iVar3))) + Function_63((90 + iVar3)));
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
	Function_49(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_67() //Position: 0x2FCD / 12237
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_68(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_49(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_68(int iParam0, float fParam1, int iParam2) //Position: 0x3006 / 12294
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
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + fParam1);
	Function_62(iParam0, fParam1, 1);
	Function_61(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_50(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_69(int iParam0) //Position: 0x3210 / 12816
{
	Function_15(&Global_79338, iParam0);
	return;
}

void Function_70(int iParam0) //Position: 0x321F / 12831
{
	Function_17(&Global_79338, iParam0);
	return;
}

void Function_71(int iParam0) //Position: 0x322E / 12846
{
	if (!Function_36(iParam0))
	{
		return;
	}
	if (!(iParam0 <= 837 && iParam0 >= 975) && !(iParam0 <= 1287 && iParam0 >= 1310))
	{
		return;
	}
	Global_76887 = iParam0;
	Function_72(9, Global_76887);
	return;
}

void Function_72(int iParam0, int iParam1) //Position: 0x3271 / 12913
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_73(int iParam0) //Position: 0x329A / 12954
{
	if (!Function_36(iParam0))
	{
		return;
	}
	if (!(iParam0 <= 837 && iParam0 >= 975) && !(iParam0 <= 1287 && iParam0 >= 1310))
	{
		return;
	}
	strcpy(&Global_76854, GET_ACTOR_ENUM_STRING_FROM_ENUM(iParam0), 64);
	return;
}

bool Function_74() //Position: 0x32D9 / 13017
{
	if (!IS_STRING_VALID(&Global_76854))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76854);
}

void Function_75(float fParam0) //Position: 0x32F3 / 13043
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(fParam0, 1065353216);
		}
	}
	return;
}

struct<16> Function_76(bool bParam0, bool bParam1) //Position: 0x3310 / 13072
{
	char* cVar0[16];
	
	strcpy(&cVar0, "Team_", 16);
	if (bParam1)
	{
		strcpy(&cVar0, "TeamDef_", 16);
	}
	stradd(&cVar0, I2STR(bParam0), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_77() //Position: 0x3345 / 13125
{
	UI_ENTER("LocationText");
	return;
}

void Function_78(int iParam0) //Position: 0x335D / 13149
{
	Function_172(iParam0, 0.0f);
	return;
}

void Function_79() //Position: 0x3369 / 13161
{
	vector3 vVar0;
	bool bVar3;
	
	if (IS_POINT_LIGHT_VALID(iLocal_394))
	{
		DESTROY_POINT_LIGHT(iLocal_394);
	}
	bVar3 = Function_80(iLocal_923);
	if (bVar3)
	{
		if (!GET_ACTOR_OFFSET_WORLD_COORDS(StackVal, &vLocal_379, &vVar0))
		{
		}
		iLocal_394 = CREATE_POINT_LIGHT_IN_LAYOUT(bLocal_392, Function_51(), vVar0, vLocal_382.x, vLocal_382.y, vLocal_382.z, fLocal_378);
	}
	return;
}

bool Function_80(int iParam0) //Position: 0x33C1 / 13249
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	Function_89();
	if (iParam0 <= 0 && iParam0 > iLocal_529)
	{
		if (iLocal_401 == 3)
		{
			bVar1 = Local_506[iParam02];
		}
		else
		{
			bVar1 = Local_455[iParam02];
		}
		if ((((((((((bVar1 != 1000 || bVar1 != 996) || bVar1 != 987) || bVar1 != 976) || bVar1 != 982) || bVar1 != 979) || bVar1 != 1006) || bVar1 != 1004) || bVar1 != 1005) || bVar1 != 1007) || bVar1 != 1003)
		{
			return Function_86(bVar1);
		}
		return Function_81(bVar1);
	}
	return iVar0;
}

bool Function_81(bool bParam0) //Position: 0x3454 / 13396
{
	return Function_24((*&Global_83864 + 1976)[Function_85(bParam0)], Function_82(bParam0));
}

bool Function_82(int iParam0) //Position: 0x3470 / 13424
{
	return Function_83((Function_84(iParam0) % 32));
}

bool Function_83(bool bParam0) //Position: 0x3481 / 13441
{
	return SHIFT_LEFT(true, bParam0);
}

int Function_84(int iParam0) //Position: 0x348D / 13453
{
	if (iParam0 > 1287)
	{
		return (iParam0 - 1287) + 134 + 1;
	}
	return (iParam0 - 837);
}

int Function_85(int iParam0) //Position: 0x34AC / 13484
{
	return (Function_84(iParam0) / 32);
}

bool Function_86(int iParam0) //Position: 0x34BA / 13498
{
	return Function_87((*&Global_83864 + 1204)[Function_88(iParam0)], 1);
}

int Function_87(var uParam0, int iParam1) //Position: 0x34D2 / 13522
{
	return (uParam0 && iParam1) == 0;
}

bool Function_88(int iParam0) //Position: 0x34DF / 13535
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

void Function_89() //Position: 0x35C4 / 13764
{
	if (iLocal_401 == 3)
	{
		iLocal_529 = 11;
		return;
	}
	iLocal_529 = Function_90(bLocal_926);
	return;
}

int Function_90(int iParam0) //Position: 0x35E0 / 13792
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam0 == iLocal_385)
	{
		return 11;
	}
	iVar0 = 0;
	iVar1 = iLocal_929;
	while (iVar1 >= iLocal_930 && iVar0 > 25)
	{
		bVar2 = iVar1;
		if (IS_ACTORENUM_INSTALLED(bVar2))
		{
			if (Function_91(bVar2) == iParam0)
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar1 = iLocal_931;
	while (iVar1 >= iLocal_932 && iVar0 > 25)
	{
		bVar2 = iVar1;
		if (IS_ACTORENUM_INSTALLED(bVar2))
		{
			if (Function_91(bVar2) == iParam0)
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int Function_91(bool bParam0) //Position: 0x3668 / 13928
{
	return (GET_ACTORENUM_AVATAR_GROUP(bParam0) / 1000);
}

void Function_92(int iParam0) //Position: 0x3677 / 13943
{
	iParam0 = iParam0;
	return;
}

void Function_93() //Position: 0x3681 / 13953
{
	Function_94();
	return;
}

void Function_94() //Position: 0x368A / 13962
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (!Function_80(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 1)
			{
				BURN_ACTOR(StackVal, fLocal_363, 1E+09.0f);
				WAIT(1);
				iVar1++;
			}
			iVar1 = 0;
		}
		iVar0++;
	}
	return;
}

void Function_95() //Position: 0x36DF / 14047
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_90(Function_91(Local_455[02]));
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		BURN_ACTOR(StackVal, 0.0f, 1E+09.0f);
		iVar0++;
	}
	return;
}

void Function_96() //Position: 0x371B / 14107
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		BURN_ACTOR(StackVal, 0.0f, 1E+09.0f);
		iVar0++;
	}
	return;
}

void Function_97(int iParam0) //Position: 0x374C / 14156
{
	iLocal_920 = iParam0;
	return;
}

void Function_98() //Position: 0x3757 / 14167
{
	bool bVar0;
	struct<16> Var1;
	
	bVar0 = false;
	Function_100();
	bVar0 = false;
	while (bVar0 <= iLocal_529)
	{
		if (Function_80(bVar0))
		{
			GIVE_WEAPON_TO_ACTOR(StackVal, 11, 1.0f, 0, 0);
			GIVE_WEAPON_TO_ACTOR(StackVal, 22, 1.0f, 0, 0);
			GIVE_WEAPON_TO_ACTOR(StackVal, false, 1.0f, 0, 0);
		}
		else
		{
			DEEQUIP_ACCESSORY(StackVal, 0);
		}
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_99(bVar0) };
		UI_INCLUDE(&Var1);
		UI_SET_TEXT(&Var1, GET_ACTOR_ENUM_STRING_FROM_ENUM(Local_455[bVar02]));
		bVar0++;
	}
	return;
}

struct<64> Function_99(bool bParam0) //Position: 0x37DF / 14303
{
	char* cVar0[64];
	
	strcpy(&cVar0, "nmp_avatar", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_100() //Position: 0x3805 / 14341
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_529)
	{
		if (!Function_80(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 1)
			{
				BURN_ACTOR(StackVal, fLocal_363, 1E+09.0f);
				WAIT(1);
				iVar1++;
			}
			iVar1 = 0;
		}
		iVar0++;
	}
	return;
}

void Function_101(var uParam0, vector3 vParam1, vector3 vParam4) //Position: 0x385B / 14427
{
	SET_CAMERA_FOV(*uParam0, 42.97919f);
	SET_CAMERA_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERA_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERA_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERA_POSITION(*uParam0, vParam1);
	SET_CAMERA_ORIENTATION(*uParam0, vParam4, 0);
	RESET_CAMERA_TARGETDOF(*uParam0);
}

int Function_102() //Position: 0x38A7 / 14503
{
	int iVar0;
	
	if (iLocal_401 == 3)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= iLocal_529)
	{
		if (!Function_103(StackVal, 1, 0x41700000))
		{
			return 0;
		}
		if (!HAS_INVENTORY_COMPONENT(StackVal))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool Function_103(bool bParam0, bool bParam1, float fParam2) //Position: 0x38F5 / 14581
{
	float fVar0;
	bool bVar1;
	
	if (Function_47() || !bParam1)
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
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= fParam2)
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

int Function_104(int iParam0, int iParam1) //Position: 0x3992 / 14738
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_105() //Position: 0x39A4 / 14756
{
	if (Function_107() && Function_106())
	{
		WAIT(250);
		while (StackVal && !IS_ACTOR_MOUNTED(!IS_ACTOR_RIDING(StackVal)))
		{
			ACTOR_MOUNT_ACTOR(StackVal, StackVal);
			WAIT(100);
		}
		return 1;
	}
	return 0;
}

int Function_106() //Position: 0x39E8 / 14824
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	if (IS_ACTOR_VALID(StackVal))
	{
		if (Local_451 != Function_74())
		{
			ACTOR_DISMOUNT_NOW(StackVal);
			DESTROY_ACTOR(StackVal);
			Local_451.f_4 = "";
			Local_451 = 4294967295;
		}
		else
		{
			return 1;
		}
	}
	if (!IS_LAYOUTREF_VALID(bLocal_392))
	{
		bLocal_392 = CREATE_LAYOUT("MP_Enum_Picker");
	}
	vVar0 = { StackVal, StackVal, *(&Local_534[112] + 24) };
	vVar3 = { StackVal, StackVal, *(&Local_534[112] + 36) };
	if (!FIND_GROUND_INTERSECTION(&vVar0, 25.0f, &vVar0, &uVar6))
	{
	}
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	Local_451.f_4 = CREATE_ACTOR_IN_LAYOUT(bLocal_392, "Fake_player", Function_74(), vVar0, vVar3);
	NET_OBJECT_REPLICATION_MODE_END(15);
	Local_451 = Function_74();
	NET_GAMER_ICONS_SHOW_LOCAL(1);
	NET_GAMER_SET_ACTOR_OVERRIDE(StackVal, Function_6());
	if (IS_ACTOR_VALID(StackVal))
	{
		DEEQUIP_ACCESSORY(StackVal, 1);
		SET_ACTOR_INVULNERABILITY(StackVal, 1);
		return 1;
	}
	LOG_ERROR("Make_Fake_Actor: This Actor is INVALID!");
	Local_451.f_4 = "";
	Local_451 = 4294967295;
	return 0;
}

int Function_107() //Position: 0x3B10 / 15120
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	if (IS_ACTOR_VALID(StackVal))
	{
		if (Local_453 != Function_37())
		{
			DESTROY_ACTOR(StackVal);
			Local_453.f_4 = "";
			Local_453 = 4294967295;
		}
		else
		{
			return 1;
		}
	}
	if (!IS_LAYOUTREF_VALID(bLocal_392))
	{
		bLocal_392 = CREATE_LAYOUT("MP_Enum_Picker");
	}
	vVar0 = { StackVal, StackVal, *(&Local_534[112] + 24) };
	vVar3 = { StackVal, StackVal, *(&Local_534[112] + 36) };
	if (!FIND_GROUND_INTERSECTION(&vVar0, 25.0f, &vVar0, &uVar6))
	{
	}
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	Local_453.f_4 = CREATE_ACTOR_IN_LAYOUT(bLocal_392, "Fake_horse", Function_37(), vVar0, vVar3);
	NET_OBJECT_REPLICATION_MODE_END(15);
	Local_453 = Function_37();
	if (((Local_453 != 1006 || Local_453 != 1004) || Local_453 != 1005) || Local_453 != 1007)
	{
	}
	else if (Local_453 == 996)
	{
		ACCESSORIZE_HORSE(StackVal, 2);
	}
	else
	{
		ACCESSORIZE_HORSE(StackVal, 3);
	}
	if (IS_ACTOR_VALID(StackVal))
	{
		TASK_STAND_STILL(StackVal, -1.0f, 0, 0);
		TASK_PRIORITY_SET(StackVal, 1);
		ANIMAL_TUNING_SET_ATTRIB_FLOAT(StackVal, 67, -1.0f);
		SET_ACTOR_INVULNERABILITY(StackVal, 1);
		return 1;
	}
	LOG_ERROR("Make_Fake_Horse: This Actor is INVALID!");
	Local_453.f_4 = "";
	Local_453 = 4294967295;
	return 0;
}

void Function_108() //Position: 0x3C7B / 15483
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iLocal_529)
	{
		Function_110(Local_455[iVar02], iVar0);
		iVar0++;
	}
	if (IS_POINT_LIGHT_VALID(iLocal_393))
	{
		DESTROY_POINT_LIGHT(iLocal_393);
	}
	iLocal_393 = CREATE_POINT_LIGHT_IN_LAYOUT(StackVal, StackVal, Vector(vLocal_448, Function_51(), bLocal_392) + Vector(0.0f, fLocal_365, 0.0f), 1.0f, 1.0f, 1.0f, (Function_109() * fLocal_364));
	if (IS_POINT_LIGHT_VALID(iLocal_394))
	{
		DESTROY_POINT_LIGHT(iLocal_394);
	}
	return;
}

float Function_109() //Position: 0x3CE1 / 15585
{
	return (TO_FLOAT(iLocal_529) * fLocal_361);
}

int Function_110(bool bParam0, bool bParam1) //Position: 0x3CF1 / 15601
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	bool bVar10;
	bool bVar11;
	
	if (!IS_LAYOUTREF_VALID(bLocal_392))
	{
		bLocal_392 = CREATE_LAYOUT("MP_Enum_Picker");
	}
	vVar1 = { StackVal, StackVal, *(&Local_534[(4 + bParam1)12] + 24) };
	vVar4 = { StackVal, StackVal, *(&Local_534[(4 + bParam1)12] + 36) };
	vVar1.f_4 = (vVar1.y + 10.0f);
	if (!FIND_GROUND_INTERSECTION(&vVar1, 25.0f, &vVar1, &uVar7))
	{
	}
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bLocal_392, GET_ACTOR_ENUM_STRING_FROM_ENUM(iParam0), iParam0, vVar1, vVar4);
	NET_OBJECT_REPLICATION_MODE_END(15);
	if (IS_ACTOR_VALID(bVar0))
	{
		Local_455[bParam12].f_4 = bVar0;
		DECOR_SET_BOOL(StackVal, "MP_OUTFITTER", 1);
		DECOR_SET_BOOL(StackVal, "LobbyGringo", 1);
		bVar10 = GET_INDEXED_OBJECT_IN_OBJECTSET(bParam1, Local_12.f_1360);
		if (IS_OBJECT_VALID(bVar10))
		{
			bVar11 = GET_GRINGO_FROM_OBJECT(bVar10);
			if (IS_GRINGO_VALID(bVar11))
			{
				SNAP_ACTOR_TO_GRINGO(StackVal, bVar10, "UseCase1", 1, 0, 0);
				TASK_USE_GRINGO(StackVal, bVar11, "UseCase1", 4294967295, 1);
				TASK_PRIORITY_SET(StackVal, 1);
			}
		}
		DEEQUIP_ACCESSORY(bVar0, 1);
		SET_ACTOR_INVULNERABILITY(bVar0, 1);
		SET_ACTOR_FACTION(bVar0, 1);
		AI_GOAL_LOOK_AT_NEUTRAL(bVar0, -1.0f);
		CLEAR_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(1, Function_21());
		return 1;
	}
	LOG_ERROR("MP_ActorPicker: This Actor is INVALID!");
	Local_455[bParam12].f_4 = "";
	return 0;
}

int Function_111() //Position: 0x3E8C / 16012
{
	int iVar0;
	
	if (iLocal_401 == 3)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= bLocal_529)
	{
		if (!STREAMING_IS_ACTOR_LOADED(Local_455[iVar02], 4294967295))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void Function_112() //Position: 0x3EC1 / 16065
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	
	bLocal_529 = false;
	bVar0 = iLocal_929;
	while ((bVar0 <= iLocal_929 && bVar0 >= iLocal_930) && bLocal_529 > 25)
	{
		bVar1 = bVar0;
		if (IS_ACTORENUM_INSTALLED(bVar1))
		{
			if (Function_91(bVar1) == bLocal_926)
			{
				Local_455[bLocal_5292] = bVar1;
				STREAMING_REQUEST_ACTOR(bVar0, true, false);
				bLocal_529++;
			}
		}
		bVar0++;
	}
	bVar0 = iLocal_931;
	while ((bVar0 <= iLocal_931 && bVar0 >= iLocal_932) && bLocal_529 > 25)
	{
		bVar1 = bVar0;
		if (IS_ACTORENUM_INSTALLED(bVar1))
		{
			if (Function_91(bVar1) == bLocal_926)
			{
				Local_455[bLocal_5292] = bVar1;
				STREAMING_REQUEST_ACTOR(bVar0, true, false);
				bLocal_529++;
			}
		}
		bVar0++;
	}
	if (bLocal_529 < 0)
	{
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 13)
	{
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_99(bVar0) };
		UI_EXCLUDE(&Var2);
		bVar0++;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= bLocal_529)
	{
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_99(bVar0) };
		UI_INCLUDE(&Var2);
		UI_SET_TEXT(&Var2, GET_ACTOR_ENUM_STRING_FROM_ENUM(Local_455[bVar02]));
		bVar0++;
	}
	if (bLocal_529 >= 25)
	{
	}
	return;
}

void Function_113() //Position: 0x3FDE / 16350
{
	bLocal_529 = 11;
	return;
}

void Function_114() //Position: 0x3FE9 / 16361
{
	Function_95();
	Function_96();
	return;
}

void Function_115() //Position: 0x3FF5 / 16373
{
	int iVar0;
	
	Local_506[02] = 1000;
	Local_506[12] = 996;
	Local_506[22] = 987;
	Local_506[32] = 976;
	Local_506[42] = 982;
	Local_506[52] = 979;
	Local_506[62] = 1006;
	Local_506[72] = 1004;
	Local_506[82] = 1005;
	Local_506[92] = 1007;
	Local_506[102] = 1003;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Function_116(Local_506[iVar02], iVar0);
		iVar0++;
	}
	return;
}

int Function_116(bool bParam0, int iParam1) //Position: 0x4086 / 16518
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	
	if (!IS_LAYOUTREF_VALID(bLocal_392))
	{
		bLocal_392 = CREATE_LAYOUT("MP_Enum_Picker");
	}
	if ((14 + iParam1) > 32)
	{
		return 0;
	}
	vVar1 = { StackVal, StackVal, *(&Local_534[(14 + iParam1)12] + 24) };
	vVar4 = { StackVal, StackVal, *(&Local_534[(14 + iParam1)12] + 36) };
	vVar1.f_4 = (vVar1.y + 10.0f);
	if (!FIND_GROUND_INTERSECTION(&vVar1, 25.0f, &vVar1, &uVar7))
	{
	}
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bLocal_392, GET_ACTOR_ENUM_STRING_FROM_ENUM(iParam0), iParam0, vVar1, vVar4);
	NET_OBJECT_REPLICATION_MODE_END(15);
	if (IS_ACTOR_VALID(bVar0))
	{
		Local_506[iParam12].f_4 = bVar0;
		if (Function_86(Local_506[iParam12]))
		{
			if (((Local_506[iParam12] != 1006 || Local_506[iParam12] != 1004) || Local_506[iParam12] != 1005) || Local_506[iParam12] != 1007)
			{
			}
			else if (Local_506[iParam12] == 996)
			{
				ACCESSORIZE_HORSE(StackVal, 2);
			}
			else
			{
				ACCESSORIZE_HORSE(StackVal, 3);
			}
		}
		TASK_STAND_STILL(bVar0, -1.0f, 1, 0);
		TASK_PRIORITY_SET(bVar0, 1);
		ANIMAL_TUNING_SET_ATTRIB_FLOAT(bVar0, 67, -1.0f);
		SET_ACTOR_INVULNERABILITY(bVar0, 1);
		return 1;
	}
	LOG_ERROR("MP_ActorPicker: This Actor is INVALID!");
	Local_506[iParam12].f_4 = "";
	return 0;
}

void Function_117() //Position: 0x41F9 / 16889
{
	struct<4> Var0;
	bool bVar4;
	struct<16> Var5;
	int iVar21;
	
	bVar4 = false;
	iLocal_530 = 0;
	iVar21 = (iLocal_927 + ABS(iLocal_928));
	bVar4 = false;
	while (bVar4 <= 26)
	{
		Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_119(bVar4) };
		if (bVar4 < iVar21)
		{
			if (Function_118((iLocal_927 - bVar4)))
			{
				Function_12(&iLocal_530, Function_83(bVar4));
				UI_INCLUDE(&Var5);
				Var0 = { StackVal, StackVal, StackVal, Function_76((iLocal_927 - bVar4), 0) };
				UI_SET_TEXT(&Var5, &Var0);
			}
			else
			{
				UI_EXCLUDE(&Var5);
			}
		}
		else
		{
			UI_EXCLUDE(&Var5);
		}
		bVar4++;
	}
	return;
}

bool Function_118(int iParam0) //Position: 0x4277 / 17015
{
	if (iParam0 != 4294967292 && !bLocal_389)
	{
		return 0;
	}
	if (iParam0 > 1 || iParam0 <= 16)
	{
		return 1;
	}
	if (iParam0 == 3)
	{
		return 1;
	}
	if (Function_313(256) && iParam0 != 1)
	{
		return 1;
	}
	if (Function_24((*&Global_78617 + 2652)[iParam0], 1))
	{
	}
	return Function_24((*&Global_78617 + 2652)[iParam0], 1);
}

struct<64> Function_119(bool bParam0) //Position: 0x42E1 / 17121
{
	char* cVar0[64];
	
	strcpy(&cVar0, "mp_avatar_group", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_120() //Position: 0x430D / 17165
{
	if (!Function_121())
	{
		UI_EXCLUDE("title_amb_38");
		UI_EXCLUDE("title_amb_62");
		UI_EXCLUDE("title_amb_64");
		UI_EXCLUDE("title_amb_68");
	}
	return;
}

bool Function_121() //Position: 0x4362 / 17250
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_122() //Position: 0x4371 / 17265
{
	Function_162();
	Function_160();
	Function_156();
	Function_155();
	Function_154();
	Function_153();
	Function_152();
	Function_151();
	Function_150();
	Function_149(1);
	Function_148(1);
	Function_147(1);
	Function_146(1);
	Function_145(1);
	if (bLocal_387)
	{
		Function_144();
		Function_143(1);
		Function_142(6);
	}
	if (bLocal_388)
	{
		Function_141();
		Function_140(1);
		Function_142(7);
	}
	if (bLocal_389)
	{
		Function_138();
		Function_123(1);
		Function_142(8);
	}
	return;
}

void Function_123(bool bParam0) //Position: 0x43DA / 17370
{
	if (Function_137(8))
	{
		Function_124(8, bParam0);
	}
	return;
}

void Function_124(int iParam0, bool bParam1) //Position: 0x43EF / 17391
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	
	iVar0 = 0;
	iVar2 = 0;
	iVar2 = Function_31(iParam0);
	iVar0 = iVar2;
	while (iVar0 < (&Global_83864 + 1288[iParam017])->f_64)
	{
		iVar1 = (iParam0 * 1000 + iVar0);
		if (iParam0 == 0)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_136(iVar0) };
		}
		else if (iParam0 == 1)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_135(iVar0) };
		}
		else if (iParam0 == 2)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_134(iVar0) };
		}
		else if (iParam0 == 3)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_133(iVar0) };
		}
		else if (iParam0 == 5)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_132(iVar0) };
		}
		else if (iParam0 == 6)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_131(iVar0) };
		}
		else if (iParam0 == 7)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_130(iVar0) };
		}
		else if (iParam0 == 8)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_129(iVar0) };
		}
		else if (iParam0 == 4)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_128(iVar0) };
		}
		if (Function_127(iVar1) && !Function_126(iVar1))
		{
			Function_125(&Var3, 1);
			if (bParam1)
			{
				UI_SET_TEXT(&Var3, &Var3);
			}
		}
		else if (!Function_127(iVar1))
		{
			Function_125(&Var3, 2);
			if (bParam1)
			{
				UI_SET_TEXT(&Var3, "mp_avatar_locked");
			}
		}
		else
		{
			Function_125(&Var3, 0);
			if (bParam1)
			{
				UI_SET_TEXT(&Var3, &Var3);
			}
		}
		iVar0++;
	}
	return;
}

void Function_125(var uParam0, int iParam1) //Position: 0x4539 / 17721
{
	UI_SET_ICON(uParam0, iParam1);
	return;
}

bool Function_126(int iParam0) //Position: 0x4546 / 17734
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	return Function_24((*&Global_84364 + 4[(iParam0 / 1000)10] + 20)[(iVar0 / 32)], Function_83((iVar0 % 32)));
}

bool Function_127(int iParam0) //Position: 0x4576 / 17782
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	return Function_24((*&Global_84364 + 4[(iParam0 / 1000)10])[(iVar0 / 32)], Function_83((iVar0 % 32)));
}

struct<64> Function_128(bool bParam0) //Position: 0x45A4 / 17828
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_stat_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_129(bool bParam0) //Position: 0x45CC / 17868
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_dlc_four_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_130(bool bParam0) //Position: 0x45F8 / 17912
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_dlc_three_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_131(bool bParam0) //Position: 0x4625 / 17957
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_dlc_two_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_132(bool bParam0) //Position: 0x4650 / 18000
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_dlc_one_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_133(bool bParam0) //Position: 0x467B / 18043
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_pvp_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_134(bool bParam0) //Position: 0x46A2 / 18082
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_weap_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_135(bool bParam0) //Position: 0x46CA / 18122
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_amb_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_136(bool bParam0) //Position: 0x46F1 / 18161
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_xplvl_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	if (bParam0 == 0)
	{
		strcpy(&cVar0, "title_xplvl_0_ui", 64);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_137(bool bParam0) //Position: 0x4737 / 18231
{
	int iVar0;
	
	iVar0 = 0;
	if (UI_ISFOCUSED("MP_TitleGroupXp"))
	{
		Function_12(&iVar0, 1);
	}
	if (UI_ISFOCUSED("MP_TitleGroupAmbient"))
	{
		Function_12(&iVar0, 2);
	}
	if (UI_ISFOCUSED("MP_TitleGroupWeapon"))
	{
		Function_12(&iVar0, 4);
	}
	if (UI_ISFOCUSED("MP_TitleGroupPvP"))
	{
		Function_12(&iVar0, 8);
	}
	if (UI_ISFOCUSED("MP_TitleGroupStat"))
	{
		Function_12(&iVar0, 16);
	}
	if (UI_ISFOCUSED("MP_TitleGroupDLC1"))
	{
		Function_12(&iVar0, 32);
	}
	if (UI_ISFOCUSED("MP_TitleGroupDLC2"))
	{
		Function_12(&iVar0, 64);
	}
	if (UI_ISFOCUSED("MP_TitleGroupDLC3"))
	{
		Function_12(&iVar0, 128);
	}
	if (UI_ISFOCUSED("MP_TitleGroupDLC4"))
	{
		Function_12(&iVar0, 256);
	}
	if (iVar0 == 0)
	{
		return 1;
	}
	return iVar0 != Function_83(bParam0);
}

void Function_138() //Position: 0x4879 / 18553
{
	if (Function_139(8))
	{
		Function_125("title_group_dlc4", 1);
	}
	else
	{
		Function_125("title_group_dlc4", 0);
	}
	return;
}

bool Function_139(int iParam0) //Position: 0x48B8 / 18616
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = Function_31(iParam0);
	iVar0 = iVar1;
	while (iVar0 < (&Global_83864 + 1288[iParam017])->f_64)
	{
		iVar2 = (iParam0 * 1000 + iVar0);
		if (Function_127(iVar2) && !Function_126(iVar2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_140(bool bParam0) //Position: 0x4906 / 18694
{
	if (Function_137(7))
	{
		Function_124(7, bParam0);
	}
	return;
}

void Function_141() //Position: 0x4919 / 18713
{
	if (Function_139(7))
	{
		Function_125("title_group_dlc3", 1);
	}
	else
	{
		Function_125("title_group_dlc3", 0);
	}
	return;
}

void Function_142(int iParam0) //Position: 0x4957 / 18775
{
	bool bVar0;
	struct<16> Var1;
	
	bVar0 = true;
	bVar0 = true;
	while (bVar0 < 50)
	{
		if (iParam0 == 5)
		{
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_132(bVar0) };
		}
		else if (iParam0 == 6)
		{
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_131(bVar0) };
		}
		else if (iParam0 == 7)
		{
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_130(bVar0) };
		}
		else if (iParam0 == 8)
		{
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_129(bVar0) };
		}
		if (bVar0 >= (&Global_83864 + 1288[iParam017])->f_64)
		{
			UI_EXCLUDE(&Var1);
		}
		bVar0++;
	}
	return;
}

void Function_143(bool bParam0) //Position: 0x49D4 / 18900
{
	if (Function_137(6))
	{
		Function_124(6, bParam0);
	}
	return;
}

void Function_144() //Position: 0x49E7 / 18919
{
	if (Function_139(6))
	{
		Function_125("title_group_dlc2", 1);
	}
	else
	{
		Function_125("title_group_dlc2", 0);
	}
	return;
}

void Function_145(bool bParam0) //Position: 0x4A25 / 18981
{
	if (Function_137(4))
	{
		Function_124(4, bParam0);
	}
	return;
}

void Function_146(bool bParam0) //Position: 0x4A38 / 19000
{
	if (Function_137(3))
	{
		Function_124(3, bParam0);
	}
	return;
}

void Function_147(bool bParam0) //Position: 0x4A4B / 19019
{
	if (Function_137(2))
	{
		Function_124(2, bParam0);
	}
	return;
}

void Function_148(bool bParam0) //Position: 0x4A5E / 19038
{
	if (Function_137(1))
	{
		Function_124(1, bParam0);
	}
	return;
}

void Function_149(int iParam0) //Position: 0x4A71 / 19057
{
	if (Function_137(0))
	{
		Function_124(0, iParam0);
	}
	return;
}

void Function_150() //Position: 0x4A84 / 19076
{
	if (Function_139(4))
	{
		Function_125("title_group_stat", 1);
	}
	else
	{
		Function_125("title_group_stat", 0);
	}
	return;
}

void Function_151() //Position: 0x4AC2 / 19138
{
	if (Function_139(3))
	{
		Function_125("title_group_pvp", 1);
	}
	else
	{
		Function_125("title_group_pvp", 0);
	}
	return;
}

void Function_152() //Position: 0x4AFE / 19198
{
	if (Function_139(2))
	{
		Function_125("title_group_weap", 1);
	}
	else
	{
		Function_125("title_group_weap", 0);
	}
	return;
}

void Function_153() //Position: 0x4B3C / 19260
{
	if (Function_139(1))
	{
		Function_125("title_group_amb", 1);
	}
	else
	{
		Function_125("title_group_amb", 0);
	}
	return;
}

void Function_154() //Position: 0x4B78 / 19320
{
	if (Function_139(0))
	{
		Function_125("title_group_xplvl", 1);
	}
	else
	{
		Function_125("title_group_xplvl", 0);
	}
	return;
}

void Function_155() //Position: 0x4BB8 / 19384
{
	if (Function_139(0))
	{
		Function_125("mp_fe_profile_title", 1);
		return;
	}
	if (Function_139(1))
	{
		Function_125("mp_fe_profile_title", 1);
		return;
	}
	if (Function_139(2))
	{
		Function_125("mp_fe_profile_title", 1);
		return;
	}
	if (Function_139(3))
	{
		Function_125("mp_fe_profile_title", 1);
		return;
	}
	if (Function_139(5))
	{
		Function_125("mp_fe_profile_title", 1);
		return;
	}
	if (Function_139(6))
	{
		Function_125("mp_fe_profile_title", 1);
		return;
	}
	if (Function_139(7))
	{
		Function_125("mp_fe_profile_title", 1);
		return;
	}
	if (Function_139(8))
	{
		Function_125("mp_fe_profile_title", 1);
		return;
	}
	if (Function_139(4))
	{
		Function_125("mp_fe_profile_title", 1);
		return;
	}
	Function_125("mp_fe_profile_title", 0);
	return;
}

void Function_156() //Position: 0x4D0B / 19723
{
	bool bVar0;
	
	bVar0 = bLocal_928;
	bVar0 = bLocal_928;
	while (bVar0 < iLocal_927)
	{
		if (Function_118((iLocal_927 - bVar0)))
		{
			if (Function_157(bVar0))
			{
				Function_125("mp_fe_profile_avatar", 1);
				return;
			}
		}
		bVar0++;
	}
	Function_125("mp_fe_profile_avatar", 0);
	return;
}

bool Function_157(int iParam0) //Position: 0x4D77 / 19831
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iLocal_929;
	while (iVar0 < iLocal_930)
	{
		bVar1 = iVar0;
		if (IS_ACTORENUM_INSTALLED(bVar1))
		{
			if (Function_91(bVar1) == iParam0)
			{
				if (Function_81(bVar1) && !Function_159(bVar1))
				{
					if (Function_158(bVar1) && !bLocal_388)
					{
					}
					else
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = iLocal_931;
	while (iVar0 < iLocal_932)
	{
		bVar1 = iVar0;
		if (IS_ACTORENUM_INSTALLED(bVar1))
		{
			if (Function_91(bVar1) == iParam0)
			{
				if (Function_81(bVar1) && !Function_159(bVar1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

var Function_158(int iParam0) //Position: 0x4E08 / 19976
{
	return ((((((iParam0 != 950 || iParam0 != 954) || iParam0 != 955) || iParam0 != 959) || iParam0 != 960) || iParam0 != 961) || iParam0 != 962);
}

bool Function_159(bool bParam0) //Position: 0x4E3E / 20030
{
	return Function_24((*&Global_84364 + 748)[Function_85(bParam0)], Function_82(bParam0));
}

void Function_160() //Position: 0x4E5A / 20058
{
	bool bVar0;
	
	bVar0 = bLocal_928;
	bVar0 = bLocal_928;
	while (bVar0 < iLocal_927)
	{
		if (Function_118((iLocal_927 - bVar0)))
		{
			Function_161(bVar0);
		}
		bVar0++;
	}
	return;
}

void Function_161(int iParam0) //Position: 0x4E8C / 20108
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<16> Var3;
	
	iVar0 = iLocal_929;
	bVar2 = (iLocal_927 - iParam0);
	Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_119(bVar2) };
	while (iVar0 < iLocal_930)
	{
		bVar1 = iVar0;
		if (IS_ACTORENUM_INSTALLED(bVar1))
		{
			if (Function_91(bVar1) == iParam0)
			{
				if (Function_81(bVar1) && !Function_159(bVar1))
				{
					Function_125(&Var3, 1);
					return;
				}
			}
		}
		iVar0++;
	}
	iVar0 = iLocal_931;
	while (iVar0 < iLocal_932)
	{
		bVar1 = iVar0;
		if (IS_ACTORENUM_INSTALLED(bVar1))
		{
			if (Function_91(bVar1) == iParam0)
			{
				if (Function_81(bVar1) && !Function_159(bVar1))
				{
					Function_125(&Var3, 1);
					return;
				}
			}
		}
		iVar0++;
	}
	Function_125(&Var3, 0);
	return;
}

void Function_162() //Position: 0x4F2E / 20270
{
	bool bVar0;
	
	bVar0 = false;
	if (Function_86(1000) && !Function_163(1000))
	{
		bVar0 = true;
	}
	else if (Function_86(996) && !Function_163(996))
	{
		bVar0 = true;
	}
	else if (Function_86(987) && !Function_163(987))
	{
		bVar0 = true;
	}
	else if (Function_86(976) && !Function_163(976))
	{
		bVar0 = true;
	}
	else if (Function_86(982) && !Function_163(982))
	{
		bVar0 = true;
	}
	else if (Function_86(979) && !Function_163(979))
	{
		bVar0 = true;
	}
	else if (Function_86(1006) && !Function_163(1006))
	{
		bVar0 = true;
	}
	else if (Function_86(1004) && !Function_163(1004))
	{
		bVar0 = true;
	}
	else if (Function_86(1005) && !Function_163(1005))
	{
		bVar0 = true;
	}
	else if (Function_86(1007) && !Function_163(1007))
	{
		bVar0 = true;
	}
	else if (Function_86(1003) && !Function_163(1003))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_125("mp_fe_profile_mount", 1);
	}
	else
	{
		Function_125("mp_fe_profile_mount", 0);
	}
	return;
}

bool Function_163(bool bParam0) //Position: 0x506D / 20589
{
	return Function_24(Global_84364.f_772, Function_83(Function_88(bParam0)));
}

void Function_164() //Position: 0x5085 / 20613
{
	Local_534[012] = { StackVal, StackVal, *(&Local_12 + 628[06]) };
	*(&Local_534[012] + 12) = { StackVal, StackVal, *(&Local_12 + 628[06] + 12) };
	*(&Local_534[012] + 24) = { StackVal, StackVal, *(&Local_12 + 596[06]) };
	*(&Local_534[012] + 36) = { StackVal, StackVal, *(&Local_12 + 596[06] + 12) };
	Local_534[112] = { StackVal, StackVal, *(&Local_12 + 628[06]) };
	*(&Local_534[112] + 12) = { StackVal, StackVal, *(&Local_12 + 628[06] + 12) };
	*(&Local_534[112] + 24) = { StackVal, StackVal, *(&Local_12 + 596[06]) };
	*(&Local_534[112] + 36) = { StackVal, StackVal, *(&Local_12 + 596[06] + 12) };
	Local_534[212] = { StackVal, StackVal, *(&Local_12 + 628[16]) };
	*(&Local_534[212] + 12) = { StackVal, StackVal, *(&Local_12 + 628[16] + 12) };
	*(&Local_534[212] + 24) = { StackVal, StackVal, *(&Local_12 + 596[06]) };
	*(&Local_534[212] + 36) = { StackVal, StackVal, *(&Local_12 + 596[06] + 12) };
	Local_534[312] = { StackVal, StackVal, *(&Local_12 + 628[26]) };
	*(&Local_534[312] + 12) = { StackVal, StackVal, *(&Local_12 + 628[26] + 12) };
	*(&Local_534[312] + 24) = { StackVal, StackVal, *(&Local_12 + 596[06]) };
	*(&Local_534[312] + 36) = { StackVal, StackVal, *(&Local_12 + 596[06] + 12) };
	Local_534[412] = { StackVal, StackVal, *(&Local_12 + 348[06]) };
	*(&Local_534[412] + 12) = { StackVal, StackVal, *(&Local_12 + 348[06] + 12) };
	Local_534[512] = { StackVal, StackVal, *(&Local_12 + 348[16]) };
	*(&Local_534[512] + 12) = { StackVal, StackVal, *(&Local_12 + 348[16] + 12) };
	Local_534[612] = { StackVal, StackVal, *(&Local_12 + 348[26]) };
	*(&Local_534[612] + 12) = { StackVal, StackVal, *(&Local_12 + 348[26] + 12) };
	Local_534[712] = { StackVal, StackVal, *(&Local_12 + 348[36]) };
	*(&Local_534[712] + 12) = { StackVal, StackVal, *(&Local_12 + 348[36] + 12) };
	Local_534[812] = { StackVal, StackVal, *(&Local_12 + 348[46]) };
	*(&Local_534[812] + 12) = { StackVal, StackVal, *(&Local_12 + 348[46] + 12) };
	Local_534[912] = { StackVal, StackVal, *(&Local_12 + 348[56]) };
	*(&Local_534[912] + 12) = { StackVal, StackVal, *(&Local_12 + 348[56] + 12) };
	Local_534[1012] = { StackVal, StackVal, *(&Local_12 + 348[66]) };
	*(&Local_534[1012] + 12) = { StackVal, StackVal, *(&Local_12 + 348[66] + 12) };
	Local_534[1112] = { StackVal, StackVal, *(&Local_12 + 348[76]) };
	*(&Local_534[1112] + 12) = { StackVal, StackVal, *(&Local_12 + 348[76] + 12) };
	Local_534[1212] = { StackVal, StackVal, *(&Local_12 + 348[86]) };
	*(&Local_534[1212] + 12) = { StackVal, StackVal, *(&Local_12 + 348[86] + 12) };
	Local_534[1312] = { StackVal, StackVal, *(&Local_12 + 348[96]) };
	*(&Local_534[1312] + 12) = { StackVal, StackVal, *(&Local_12 + 348[96] + 12) };
	Function_165(0, 4);
	Function_165(1, 5);
	Function_165(2, 6);
	Function_165(3, 7);
	Function_165(4, 8);
	Function_165(5, 9);
	Function_165(6, 10);
	Function_165(7, 11);
	Function_165(8, 12);
	Function_165(9, 13);
	Local_534[1412] = { StackVal, StackVal, *(&Local_12 + 980[06]) };
	*(&Local_534[1412] + 12) = { StackVal, StackVal, *(&Local_12 + 980[06] + 12) };
	*(&Local_534[1412] + 24) = { StackVal, StackVal, *(&Local_12 + 708[06]) };
	*(&Local_534[1412] + 36) = { StackVal, StackVal, *(&Local_12 + 708[06] + 12) };
	Local_534[1512] = { StackVal, StackVal, *(&Local_12 + 980[16]) };
	*(&Local_534[1512] + 12) = { StackVal, StackVal, *(&Local_12 + 980[16] + 12) };
	*(&Local_534[1512] + 24) = { StackVal, StackVal, *(&Local_12 + 708[16]) };
	*(&Local_534[1512] + 36) = { StackVal, StackVal, *(&Local_12 + 708[16] + 12) };
	Local_534[1612] = { StackVal, StackVal, *(&Local_12 + 980[26]) };
	*(&Local_534[1612] + 12) = { StackVal, StackVal, *(&Local_12 + 980[26] + 12) };
	*(&Local_534[1612] + 24) = { StackVal, StackVal, *(&Local_12 + 708[26]) };
	*(&Local_534[1612] + 36) = { StackVal, StackVal, *(&Local_12 + 708[26] + 12) };
	Local_534[1712] = { StackVal, StackVal, *(&Local_12 + 980[36]) };
	*(&Local_534[1712] + 12) = { StackVal, StackVal, *(&Local_12 + 980[36] + 12) };
	*(&Local_534[1712] + 24) = { StackVal, StackVal, *(&Local_12 + 708[36]) };
	*(&Local_534[1712] + 36) = { StackVal, StackVal, *(&Local_12 + 708[36] + 12) };
	Local_534[1812] = { StackVal, StackVal, *(&Local_12 + 980[46]) };
	*(&Local_534[1812] + 12) = { StackVal, StackVal, *(&Local_12 + 980[46] + 12) };
	*(&Local_534[1812] + 24) = { StackVal, StackVal, *(&Local_12 + 708[46]) };
	*(&Local_534[1812] + 36) = { StackVal, StackVal, *(&Local_12 + 708[46] + 12) };
	Local_534[1912] = { StackVal, StackVal, *(&Local_12 + 980[56]) };
	*(&Local_534[1912] + 12) = { StackVal, StackVal, *(&Local_12 + 980[56] + 12) };
	*(&Local_534[1912] + 24) = { StackVal, StackVal, *(&Local_12 + 708[56]) };
	*(&Local_534[1912] + 36) = { StackVal, StackVal, *(&Local_12 + 708[56] + 12) };
	Local_534[2012] = { StackVal, StackVal, *(&Local_12 + 980[66]) };
	*(&Local_534[2012] + 12) = { StackVal, StackVal, *(&Local_12 + 980[66] + 12) };
	*(&Local_534[2012] + 24) = { StackVal, StackVal, *(&Local_12 + 708[66]) };
	*(&Local_534[2012] + 36) = { StackVal, StackVal, *(&Local_12 + 708[66] + 12) };
	Local_534[2112] = { StackVal, StackVal, *(&Local_12 + 980[76]) };
	*(&Local_534[2112] + 12) = { StackVal, StackVal, *(&Local_12 + 980[76] + 12) };
	*(&Local_534[2112] + 24) = { StackVal, StackVal, *(&Local_12 + 708[76]) };
	*(&Local_534[2112] + 36) = { StackVal, StackVal, *(&Local_12 + 708[76] + 12) };
	Local_534[2212] = { StackVal, StackVal, *(&Local_12 + 980[86]) };
	*(&Local_534[2212] + 12) = { StackVal, StackVal, *(&Local_12 + 980[86] + 12) };
	*(&Local_534[2212] + 24) = { StackVal, StackVal, *(&Local_12 + 708[86]) };
	*(&Local_534[2212] + 36) = { StackVal, StackVal, *(&Local_12 + 708[86] + 12) };
	Local_534[2312] = { StackVal, StackVal, *(&Local_12 + 980[96]) };
	*(&Local_534[2312] + 12) = { StackVal, StackVal, *(&Local_12 + 980[96] + 12) };
	*(&Local_534[2312] + 24) = { StackVal, StackVal, *(&Local_12 + 708[96]) };
	*(&Local_534[2312] + 36) = { StackVal, StackVal, *(&Local_12 + 708[96] + 12) };
	Local_534[2412] = { StackVal, StackVal, *(&Local_12 + 980[106]) };
	*(&Local_534[2412] + 12) = { StackVal, StackVal, *(&Local_12 + 980[106] + 12) };
	*(&Local_534[2412] + 24) = { StackVal, StackVal, *(&Local_12 + 708[106]) };
	*(&Local_534[2412] + 36) = { StackVal, StackVal, *(&Local_12 + 708[106] + 12) };
	Local_534[2612] = { StackVal, StackVal, *(&Local_12 + 1252[06]) };
	*(&Local_534[2612] + 12) = { StackVal, StackVal, *(&Local_12 + 1252[06] + 12) };
	*(&Local_534[2612] + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Local_534[2612] + 36) = { 0.0f, 0.0f, 0.0f };
	Local_534[2712] = { StackVal, StackVal, *(&Local_12 + 1252[16]) };
	*(&Local_534[2712] + 12) = { StackVal, StackVal, *(&Local_12 + 1252[16] + 12) };
	*(&Local_534[2712] + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Local_534[2712] + 36) = { 0.0f, 0.0f, 0.0f };
	Local_534[2812] = { StackVal, StackVal, *(&Local_12 + 1252[26]) };
	*(&Local_534[2812] + 12) = { StackVal, StackVal, *(&Local_12 + 1252[26] + 12) };
	*(&Local_534[2812] + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Local_534[2812] + 36) = { 0.0f, 0.0f, 0.0f };
	Local_534[2912] = { StackVal, StackVal, *(&Local_12 + 1332[06]) };
	*(&Local_534[2912] + 12) = { StackVal, StackVal, *(&Local_12 + 1332[06] + 12) };
	*(&Local_534[2912] + 24) = { StackVal, StackVal, *(&Local_12 + 596[06]) };
	*(&Local_534[2912] + 36) = { StackVal, StackVal, *(&Local_12 + 596[06] + 12) };
	return;
}

void Function_165(bool bParam0, int iParam1) //Position: 0x5891 / 22673
{
	bool bVar0;
	
	bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bParam0, Local_12.f_1360);
	if (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &Local_534[iParam112] + 24);
		GET_OBJECT_ORIENTATION(bVar0, &Local_534[iParam112] + 36);
	}
	return;
}

void Function_166() //Position: 0x58C9 / 22729
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	
	Function_167(4, 1);
	uVar0 = uVar0;
	Local_12 = CREATE_LAYOUT("MP_outfitter_layout_layout");
	Local_12.f_344 = CREATE_OBJECTSET_IN_LAYOUT("GringoCamsSet", Local_12, 8, 0);
	*(&Local_12 + 348[06]) = { -130.47f, 130.55f, 900.1f };
	*(&Local_12 + 348[06] + 12) = { 2.86f, 59.22f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo1", -130.47f, 130.55f, 900.1f, 2.86f, 59.22f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_12.f_344);
	*(&Local_12 + 348[16]) = { -129.47f, 130.97f, 899.22f };
	*(&Local_12 + 348[16] + 12) = { -7.0f, 65.21f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo2", -129.47f, 130.97f, 899.22f, -7.0f, 65.21f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_12.f_344);
	*(&Local_12 + 348[26]) = { -127.81f, 130.86f, 899.21f };
	*(&Local_12 + 348[26] + 12) = { -14.7f, 62.34f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo3", -127.81f, 130.86f, 899.21f, -14.7f, 62.34f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_12.f_344);
	*(&Local_12 + 348[36]) = { -128.33f, 131.09f, 897.86f };
	*(&Local_12 + 348[36] + 12) = { -8.71f, 62.45f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo4", -128.33f, 131.09f, 897.86f, -8.71f, 62.45f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_12.f_344);
	*(&Local_12 + 348[46]) = { -127.98f, 131.1f, 897.6f };
	*(&Local_12 + 348[46] + 12) = { -13.22f, 46.65f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo5", -127.98f, 131.1f, 897.6f, -13.22f, 46.65f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_12.f_344);
	*(&Local_12 + 348[56]) = { -128.12f, 130.75f, 895.26f };
	*(&Local_12 + 348[56] + 12) = { -6.55f, 56.57f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo6", -128.12f, 130.75f, 895.26f, -6.55f, 56.57f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_12.f_344);
	*(&Local_12 + 348[66]) = { -128.06f, 130.83f, 894.45f };
	*(&Local_12 + 348[66] + 12) = { 6.82f, 20.72f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo7", -128.06f, 130.83f, 894.45f, 6.82f, 20.72f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_12.f_344);
	*(&Local_12 + 348[76]) = { -127.3f, 130.52f, 895.28f };
	*(&Local_12 + 348[76] + 12) = { -5.1f, -6.28f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo8", -127.3f, 130.52f, 895.28f, -5.1f, -6.28f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_12.f_344);
	*(&Local_12 + 348[86]) = { -125.96f, 130.47f, 897.64f };
	*(&Local_12 + 348[86] + 12) = { -3.85f, 1.15f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo9", -125.96f, 130.47f, 897.64f, -3.85f, 1.15f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_12.f_344);
	*(&Local_12 + 348[96]) = { -124.74f, 130.53f, 895.38f };
	*(&Local_12 + 348[96] + 12) = { 2.24f, 12.27f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo10", -124.74f, 130.53f, 895.38f, 2.24f, 12.27f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_12.f_344);
	Local_12.f_592 = CREATE_OBJECTSET_IN_LAYOUT("PlayerPositionSet", Local_12, 8, 0);
	*(&Local_12 + 596[06]) = { -112f, 128.4286f, 906.8375f };
	*(&Local_12 + 596[06] + 12) = { 0.0f, 68.99164f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_12, "Player", -112f, 128.4286f, 906.8375f, 0.0f, 68.99164f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_12.f_592);
	Local_12.f_624 = CREATE_OBJECTSET_IN_LAYOUT("PlayerCamSet", Local_12, 8, 0);
	*(&Local_12 + 628[06]) = { -113.4391f, 130.7494f, 901.4674f };
	*(&Local_12 + 628[06] + 12) = { -8.895674f, 194.1456f, -1.267944f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_12, "PlayerCam1", -113.4391f, 130.7494f, 901.4674f, -8.895674f, 194.1456f, -1.267944f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_12.f_624);
	*(&Local_12 + 628[16]) = { -116.5024f, 130.7859f, 903.4276f };
	*(&Local_12 + 628[16] + 12) = { -9.355364f, -126.8409f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_12, "PlayerCam2", -116.5024f, 130.7859f, 903.4276f, -9.355364f, -126.8409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_12.f_624);
	*(&Local_12 + 628[26]) = { -114.7868f, 131.0018f, 902.7865f };
	*(&Local_12 + 628[26] + 12) = { -2.102463f, -144.7327f, -0.1208514f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_12, "PlayerCam3", -114.7868f, 131.0018f, 902.7865f, -2.102463f, -144.7327f, -0.1208514f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_12.f_624);
	Local_12.f_704 = CREATE_OBJECTSET_IN_LAYOUT("MountPositionsSet", Local_12, 8, 0);
	*(&Local_12 + 708[06]) = { -107.754f, 126.494f, 877.2244f };
	*(&Local_12 + 708[06] + 12) = { 0.0f, 198.5479f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount1", -107.754f, 126.494f, 877.2244f, 0.0f, 198.5479f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_12.f_704);
	*(&Local_12 + 708[16]) = { -106.035f, 126.494f, 878.813f };
	*(&Local_12 + 708[16] + 12) = { 0.0f, 114.3112f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount2", -106.035f, 126.494f, 878.813f, 0.0f, 114.3112f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_12.f_704);
	*(&Local_12 + 708[26]) = { -102.539f, 126.494f, 878.5388f };
	*(&Local_12 + 708[26] + 12) = { 0.0f, 111.4093f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount3", -102.539f, 126.494f, 878.5388f, 0.0f, 111.4093f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_12.f_704);
	*(&Local_12 + 708[36]) = { -101.2357f, 126.1946f, 879.9998f };
	*(&Local_12 + 708[36] + 12) = { 0.0f, 111.6339f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount4", -101.2357f, 126.1946f, 879.9998f, 0.0f, 111.6339f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_12.f_704);
	*(&Local_12 + 708[46]) = { -99.99998f, 126.3207f, 882.3996f };
	*(&Local_12 + 708[46] + 12) = { 0.0f, 151.1803f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount5", -99.99998f, 126.3207f, 882.3996f, 0.0f, 151.1803f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_12.f_704);
	*(&Local_12 + 708[56]) = { -98.84794f, 126.2752f, 883.9999f };
	*(&Local_12 + 708[56] + 12) = { 0.0f, 112.0487f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount6", -98.84794f, 126.2752f, 883.9999f, 0.0f, 112.0487f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_12.f_704);
	*(&Local_12 + 708[66]) = { -97.59049f, 126.0364f, 885.5903f };
	*(&Local_12 + 708[66] + 12) = { 0.0f, 158.2526f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount7", -97.59049f, 126.0364f, 885.5903f, 0.0f, 158.2526f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_12.f_704);
	*(&Local_12 + 708[76]) = { -100.9793f, 127.4979f, 895.9998f };
	*(&Local_12 + 708[76] + 12) = { 0.0f, 130.1366f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount8", -100.9793f, 127.4979f, 895.9998f, 0.0f, 130.1366f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_12.f_704);
	*(&Local_12 + 708[86]) = { -100.8922f, 127.4979f, 899.0063f };
	*(&Local_12 + 708[86] + 12) = { 0.0f, 59.89041f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount9", -100.8922f, 127.4979f, 899.0063f, 0.0f, 59.89041f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_12.f_704);
	*(&Local_12 + 708[96]) = { -103.419f, 127.4979f, 900.5145f };
	*(&Local_12 + 708[96] + 12) = { 0.0f, -3.060332f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount10", -103.419f, 127.4979f, 900.5145f, 0.0f, -3.060332f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_12.f_704);
	*(&Local_12 + 708[106]) = { -105.885f, 127.4979f, 897.6561f };
	*(&Local_12 + 708[106] + 12) = { 0.0f, -43.60732f, 0.0f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount11", -105.885f, 127.4979f, 897.6561f, 0.0f, -43.60732f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_12.f_704);
	Local_12.f_976 = CREATE_OBJECTSET_IN_LAYOUT("MountCamsSet", Local_12, 8, 0);
	*(&Local_12 + 980[06]) = { -110.35f, 128.58f, 880.36f };
	*(&Local_12 + 980[06] + 12) = { -17.13f, -38.3f, 0.0f };
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam1", -110.35f, 128.58f, 880.36f, -17.13f, -38.3f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_12.f_976);
	*(&Local_12 + 980[16]) = { -107.55f, 128.98f, 882.88f };
	*(&Local_12 + 980[16] + 12) = { -21.19f, -17.1f, 0.0f };
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam2", -107.55f, 128.98f, 882.88f, -21.19f, -17.1f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_12.f_976);
	*(&Local_12 + 980[26]) = { -105.26f, 128.21f, 881.49f };
	*(&Local_12 + 980[26] + 12) = { -10.01f, -32.07f, 0.0f };
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam3", -105.26f, 128.21f, 881.49f, -10.01f, -32.07f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_12.f_976);
	*(&Local_12 + 980[36]) = { -103.47f, 128.58f, 883.39f };
	*(&Local_12 + 980[36] + 12) = { -17.96f, -27.31f, 0.0f };
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam4", -103.47f, 128.58f, 883.39f, -17.96f, -27.31f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_12.f_976);
	*(&Local_12 + 980[46]) = { -103.78f, 128.75f, 883.94f };
	*(&Local_12 + 980[46] + 12) = { -18.68f, -71.02f, 0.0f };
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam5", -103.78f, 128.75f, 883.94f, -18.68f, -71.02f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_12.f_976);
	*(&Local_12 + 980[56]) = { -100.78f, 128.96f, 887.61f };
	*(&Local_12 + 980[56] + 12) = { -21.26f, -22.71f, 0.0f };
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam6", -100.78f, 128.96f, 887.61f, -21.26f, -22.71f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_12.f_976);
	*(&Local_12 + 980[66]) = { -100.92f, 127.3f, 886.84f };
	*(&Local_12 + 980[66] + 12) = { -4.62f, -77.12f, 0.0f };
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam7", -100.92f, 127.3f, 886.84f, -4.62f, -77.12f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_12.f_976);
	*(&Local_12 + 980[76]) = { -104.66f, 130.01f, 894.6f };
	*(&Local_12 + 980[76] + 12) = { -23.62f, -117.0f, 0.0f };
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam8", -104.66f, 130.01f, 894.6f, -23.62f, -117.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_12.f_976);
	*(&Local_12 + 980[86]) = { -104.71f, 129.47f, 898.06f };
	*(&Local_12 + 980[86] + 12) = { -16.44f, -97.82f, 0.0f };
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam9", -104.71f, 129.47f, 898.06f, -16.44f, -97.82f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_12.f_976);
	*(&Local_12 + 980[96]) = { -104.64f, 129.44f, 897.32f };
	*(&Local_12 + 980[96] + 12) = { -20.32f, -152.03f, 0.0f };
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam10", -104.64f, 129.44f, 897.32f, -20.32f, -152.03f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_12.f_976);
	*(&Local_12 + 980[106]) = { -106.29f, 129.17f, 894.63f };
	*(&Local_12 + 980[106] + 12) = { -16.49f, -166.12f, 0.0f };
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam11", -106.29f, 129.17f, 894.63f, -16.49f, -166.12f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_12.f_976);
	Local_12.f_1248 = CREATE_OBJECTSET_IN_LAYOUT("ObjectCamsSet", Local_12, 8, 0);
	*(&Local_12 + 1252[06]) = { -131.563f, 134.43f, 908.421f };
	*(&Local_12 + 1252[06] + 12) = { -16.569f, -3.78f, 0.0f };
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_12, "ObjCam1", -131.563f, 134.43f, 908.421f, -16.569f, -3.78f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_12.f_1248);
	*(&Local_12 + 1252[16]) = { -117.246f, 134.498f, 899.047f };
	*(&Local_12 + 1252[16] + 12) = { -14.524f, 76.989f, 0.0f };
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_12, "ObjCam2", -117.246f, 134.498f, 899.047f, -14.524f, 76.989f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_12.f_1248);
	*(&Local_12 + 1252[26]) = { -124.204f, 134.864f, 906.368f };
	*(&Local_12 + 1252[26] + 12) = { -21.377f, 33.989f, 0.0f };
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_12, "ObjCam3", -124.204f, 134.864f, 906.368f, -21.377f, 33.989f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_12.f_1248);
	Local_12.f_1328 = CREATE_OBJECTSET_IN_LAYOUT("TitlesCamsSet", Local_12, 8, 0);
	*(&Local_12 + 1332[06]) = { -113.5283f, 131.0015f, 903.6737f };
	*(&Local_12 + 1332[06] + 12) = { -6.486446f, 215.2253f, 0.0f };
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_12, "nTitleCam1", -113.5283f, 131.0015f, 903.6737f, -6.486446f, 215.2253f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_12.f_1328);
	Local_12.f_1360 = CREATE_OBJECTSET_IN_LAYOUT(Function_51(), Local_12, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_smokelean_e_any_MP", "stand_smokelean_e_any_MP", -132.002f, 129.506f, 899.052f, 0.0f, -134.15f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "spittoon_MP", "spittoon_MP", -131.349f, 129.506f, 898.154f, 0.0f, -3.78f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_cleanknife_MP", "sit_cleanknife_MP", -129.8946f, 129.506f, 898.1284f, 0.0f, 249.17f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_dnd_rowdydrink_MP", "stand_dnd_rowdydrink_MP", -130.744f, 129.506f, 896.619f, 0.0f, -87.431f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_MP", "smoking_stand_MP", -129.837f, 129.506f, 895.856f, 0.0f, -149.061f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_MP", "lean_rail_MP", -130.272f, 129.515f, 893.708f, 0.0f, -140.65f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "clean_rifle_MP", "clean_rifle_MP", -128.803f, 130.634f, 892.582f, 0.0f, -148.2358f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_cleanrifle_MP", "sit_cleanrifle_MP", -127.1844f, 129.506f, 893.6276f, 0.0f, -184.4398f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_cleanpistol_MP", "sit_cleanpistol_MP", -125.933f, 129.506f, 896.165f, 0.0f, -174.26f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_Shoulder_R_MP", "Rand_Idle_NearWall_Shoulder_R_MP", -125.5816f, 129.506f, 893.3788f, 0.0f, 112.103f, 0.0f), Local_12.f_1360);
	Local_12.f_1364 = CREATE_OBJECTSET_IN_LAYOUT(Function_51(), Local_12, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateMultiplayerAmmo01x0", "p_gen_crateMultiplayerAmmo01x", -130.2333f, 129.5057f, 899.2995f, 0.0f, 72.53201f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateMultiplayerAmmoFull01x0", "p_gen_crateMultiplayerAmmoFull01x", -129.3118f, 129.5057f, 897.7791f, 0.0f, -88.11108f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateMultiplayerItem01x0", "p_gen_crateMultiplayerItem01x", -130.9069f, 129.5057f, 899.1618f, 0.0f, 87.82333f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateTnt01x0", "p_gen_crateTnt01x", -126.8411f, 129.4149f, 893.2682f, 0.0f, 93.16905f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateTnt02x0", "p_gen_crateTnt02x", -131.8477f, 129.5057f, 899.8342f, 0.0f, 291.0584f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "gatlingGun01x0", "p_gen_gatlingGun01x", -127.8069f, 129.5057f, 898.0569f, 0.0f, -154.0381f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barrel04x0", "p_gen_barrel04x", -131.6828f, 129.4538f, 899.3515f, 0.0f, 0.0f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "chuckWagonBreak01x0", "p_gen_chuckWagonBreak01x", -136f, 129.5058f, 890.342f, 0.0f, -102.6388f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateMultiplayerItem01x1", "p_gen_crateMultiplayerItem01x", -131.5072f, 130.291f, 899.5267f, 0.0f, 40.97013f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barrel04x1", "p_gen_barrel04x", -130.5258f, 130.7095f, 892.1912f, 0.0f, 0.0f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barrel04x2", "p_gen_barrel04x", -129.8503f, 130.7133f, 892.0633f, 0.0f, 55.128f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateMultiplayerWeapon01x0", "p_gen_crateMultiplayerWeapon01x", -128.4665f, 129.5057f, 892.8782f, 0.0f, 67.25682f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateTnt01x1", "p_gen_crateTnt01x", -129.2906f, 129.5057f, 894.9353f, 0.0f, -213.9487f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateTnt02x1", "p_gen_crateTnt02x", -131.1914f, 129.5057f, 895.5918f, 0.0f, -85.88183f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateMultiplayerAmmoFull01x1", "p_gen_crateMultiplayerAmmoFull01x", -126.8937f, 129.5057f, 895.5847f, 0.0f, -173.1454f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "ncrate19x0", "p_gen_crate19x", -130.3635f, 129.4347f, 894.812f, 0.0f, 141.5233f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barricade01x0", "p_gen_barricade01x", -132f, 129.1891f, 900.2684f, 0.0f, -73.05097f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barricade01x1", "p_gen_barricade01x", -129.6937f, 129.2544f, 899.5549f, 0.0f, -60.37173f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barrel04x3", "p_gen_barrel04x", -126.4288f, 129.7352f, 895.408f, 0.0f, 55.128f, -90.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateMultiplayerItem01x2", "p_gen_crateMultiplayerItem01x", -125.2373f, 129.5057f, 895.9186f, 0.0f, 40.73972f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "ncrate01x0", "p_gen_crate01x", -129.5448f, 129.5057f, 897.8388f, 0.0f, -26.46961f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "ncrate01x1", "p_gen_crate01x", -130.5153f, 129.5057f, 897.4778f, -46.22082f, 63.0f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "ncrate01x2", "p_gen_crate01x", -125.923f, 129.5057f, 892.9604f, 0.0f, -10.72686f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "tent01x0", "p_gen_tent01x", -137.4039f, 130.5096f, 900.0988f, 0.0f, -62.01776f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barricade01x2", "p_gen_barricade01x", -132.9778f, 129.3722f, 901.9932f, 0.0f, 101.5295f, -6.019382f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barricade01x3", "p_gen_barricade01x", -140.4919f, 130.5097f, 902.3671f, 0.0f, 46.70249f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "tent01x1", "p_gen_tent01x", -137.7695f, 130.5097f, 897.7693f, 0.0f, -73.00343f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "tent01x2", "p_gen_tent01x", -139.5713f, 130.5096f, 895.9999f, 0.0f, -62.01776f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barricade01x4", "p_gen_barricade01x", -127.4593f, 129.3159f, 898.3947f, 0.0f, -52.84997f, -5.670913f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "waterTrough01x0", "p_gen_waterTrough01x", -107.2752f, 126.494f, 879.8846f, 0.0f, 181.4527f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "horseSaddle01x0", "p_gen_horseSaddle01x", -104.247f, 126.5827f, 877.95f, -2.829851f, -18.24504f, 0.8866247f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "hayPile02x0", "p_gen_hayPile02x", -104f, 127.4979f, 898.6668f, 0.0f, 0.0f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "hayBale07x0", "p_gen_hayBale07x", -103.4047f, 126.4131f, 879.2337f, 0.1278847f, 115.0695f, -0.3880575f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "hayBale01x0", "p_gen_hayBale01x", -99.99999f, 126.8346f, 884.5491f, -35.23272f, 6.401762f, 84.12264f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "hayBale07x1", "p_gen_hayBale07x", -101.9961f, 126.2881f, 880.5477f, 0.005913452f, 109.1512f, -0.50121f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "hayBale01x1", "p_gen_hayBale01x", -103.7239f, 126.8044f, 878.0181f, -17.69282f, 0.0f, 90.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "horseSaddle01x1", "p_gen_horseSaddle01x", -101.1546f, 126.6823f, 883.6824f, 4.739491f, -96.60545f, -2.415046f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "hayBale01x2", "p_gen_hayBale01x", -101.0205f, 126.9039f, 884.2321f, -95.99754f, 0.0f, 94.92489f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "waterTrough01x1", "p_gen_waterTrough01x", -98.70032f, 126.3196f, 887.4232f, 0.0f, 199.2099f, 0.0f, 1), Local_12.f_1364);
	return;
}

void Function_167(int iParam0, int iParam1) //Position: 0x786D / 30829
{
	switch (iParam1)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!iParam0 != 4)
			{
			}
			break;
		
		case 0x00000002:
			if (!iParam0 != 3)
			{
			}
			break;
		
		case 0x00000003:
			if (!iParam0 != 3)
			{
			}
			break;
	}
	return;
}

float Function_168(int iParam0) //Position: 0x78B6 / 30902
{
	if (Function_23(iParam0))
	{
		if (Function_169(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_169(int iParam0) //Position: 0x797E / 31102
{
	return Function_24(*iParam0, 2);
}

void Function_170() //Position: 0x798B / 31115
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_171() //Position: 0x799D / 31133
{
	UI_EXIT("LocationText");
	return;
}

void Function_172(int iParam0, float fParam1) //Position: 0x79B5 / 31157
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_12(iParam0, 1);
	Function_11(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_173(var uParam0, bool bParam1, int iParam2) //Position: 0x79D6 / 31190
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
		if (Function_179(Global_29006))
		{
			Function_178(&(Global_29008[Global_29006]), 131072);
			Function_177(&(Global_29008[Global_29006]), 2097152);
			Function_175(Global_29006);
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
				if (Function_174(&(Global_29008[iVar0]), 4) || Function_174(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_177(&(Global_29008[iVar0]), 2097155);
					Function_178(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_47())
			{
			}
			WAIT(0);
		}
		if (uParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

bool Function_174(var uParam0, int iParam1) //Position: 0x7AE1 / 31457
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_175(int iParam0) //Position: 0x7AFD / 31485
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_176())
			{
				return;
			}
		}
		if (!Function_174(&(Global_29008[iParam0]), 2048))
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

bool Function_176() //Position: 0x7B7C / 31612
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_174(&(Global_29008[iVar0]), 4) || Function_174(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_177(var uParam0, int iParam1) //Position: 0x7BE5 / 31717
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_178(var uParam0, int iParam1) //Position: 0x7BFC / 31740
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_179(int iParam0) //Position: 0x7C0B / 31755
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_180() //Position: 0x7C21 / 31777
{
	CLEAR_AREA_OF_GRASS(-127.86f, 129.51f, 897.12f, 3.75f);
	CLEAR_AREA_OF_GRASS(-137.76f, 130.51f, 896.33f, 3.7f);
	CLEAR_AREA_OF_GRASS(-106.035f, 126.494f, 878.813f, 2.5f);
	CLEAR_AREA_OF_GRASS(-102.539f, 126.494f, 879.539f, 2.5f);
	CLEAR_AREA_OF_GRASS(-98.848f, 126.275f, 884.0f, 2.5f);
	CLEAR_AREA_OF_GRASS(-97.59f, 126.036f, 885.59f, 2.5f);
	CLEAR_AREA_OF_GRASS(-100.892f, 127.498f, 899.006f, 2.5f);
	return;
}

void Function_181() //Position: 0x7CCF / 31951
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	bLocal_392 = CREATE_LAYOUT("MP_Enum_Picker");
	bVar0 = Function_74();
	bLocal_926 = Function_91(bVar0);
	iLocal_925 = bLocal_926;
	iLocal_927 = 0;
	bLocal_928 = false;
	iVar1 = 0;
	NET_GAMER_ICONS_SHOW_LOCAL(1);
	iLocal_923 = 4294967295;
	iVar3 = iLocal_929;
	while (iVar3 < iLocal_930)
	{
		bVar2 = iVar3;
		if (IS_ACTORENUM_INSTALLED(bVar2))
		{
			iVar4 = Function_91(bVar2);
			if (iVar4 >= iLocal_927)
			{
				iLocal_927 = iVar4;
			}
			if (iVar4 <= bLocal_928)
			{
				bLocal_928 = iVar4;
			}
			if (iLocal_923 == 4294967295)
			{
				if (iVar4 == bLocal_926)
				{
					if (bVar2 == bVar0)
					{
						iLocal_923 = iVar1;
					}
					else
					{
						iVar1++;
					}
				}
			}
		}
		iVar3++;
	}
	iVar3 = iLocal_931;
	while (iVar3 < iLocal_932)
	{
		bVar2 = iVar3;
		if (IS_ACTORENUM_INSTALLED(bVar2))
		{
			iVar4 = Function_91(bVar2);
			if (iVar4 >= iLocal_927)
			{
				iLocal_927 = iVar4;
			}
			if (iVar4 <= bLocal_928)
			{
				bLocal_928 = iVar4;
			}
			if (iLocal_923 == 4294967295)
			{
				if (iVar4 == bLocal_926)
				{
					if (bVar2 == bVar0)
					{
						iLocal_923 = iVar1;
					}
					else
					{
						iVar1++;
					}
				}
			}
		}
		iVar3++;
	}
	iLocal_924 = iLocal_923;
	Function_194(&iLocal_944);
	iLocal_922 = CLEAR_AREA_OF_TREE_TYPE(vLocal_448, (Function_109() * 1.2f), "");
	Function_193();
	Function_192(1);
	Function_190(1);
	Function_187();
	Function_11(&Global_78617 + 52, 4096);
	Function_14(2097154);
	Function_277(256);
	Function_16(128);
	Function_14(131072);
	Function_13(2097152, 1);
	Function_186();
	UI_PUSH("HudAvatarPicker");
	SET_HUD_MAP_DRAW_ENABLED(0);
	HUD_ENABLE(1);
	ENABLE_USE_CONTEXTS(0);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	Function_185(0);
	if (Function_127(2011))
	{
		if (!Function_127(2012))
		{
			Function_184(2012, 1);
		}
		if (!Function_127(2013))
		{
			Function_184(2013, 1);
		}
	}
	UI_EXCLUDE("title_group_dlc1");
	if (!bLocal_387)
	{
		UI_EXCLUDE("title_group_dlc2");
	}
	else
	{
		UI_INCLUDE("title_group_dlc2");
	}
	if (!bLocal_388)
	{
		UI_EXCLUDE("title_group_dlc3");
	}
	else
	{
		UI_INCLUDE("title_group_dlc3");
	}
	if (!bLocal_389)
	{
		UI_EXCLUDE("title_group_dlc4");
	}
	else
	{
		UI_INCLUDE("title_group_dlc4");
	}
	if (bLocal_388)
	{
		Function_183(950);
		Function_183(954);
		Function_183(955);
		Function_183(959);
		Function_183(960);
		Function_183(961);
		Function_183(962);
	}
	else
	{
		Function_182(950);
		Function_182(954);
		Function_182(955);
		Function_182(959);
		Function_182(960);
		Function_182(961);
		Function_182(962);
	}
	if (bLocal_390)
	{
		Function_183(1287);
		Function_183(1288);
		Function_183(1289);
		Function_183(1290);
		Function_183(1291);
		Function_183(1292);
		Function_183(1293);
		Function_183(1294);
	}
	return;
}

void Function_182(int iParam0) //Position: 0x7FE3 / 32739
{
	Function_11(&Global_83864 + 1976[Function_85(iParam0)], Function_82(iParam0));
	return;
}

void Function_183(int iParam0) //Position: 0x8000 / 32768
{
	Function_12(&Global_83864 + 1976[Function_85(iParam0)], Function_82(iParam0));
	return;
}

void Function_184(int iParam0, bool bParam1) //Position: 0x801C / 32796
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_12(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_83((iVar0 % 32)));
	}
	else
	{
		Function_11(&Global_84364 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_83((iVar0 % 32)));
	}
	return;
}

void Function_185(var uParam0) //Position: 0x8072 / 32882
{
	Function_46(&Global_79378, 0, uParam0);
	return;
}

void Function_186() //Position: 0x8082 / 32898
{
	Function_10(1024, 1, 0);
	Function_10(1, 0, 0);
	return;
}

void Function_187() //Position: 0x8096 / 32918
{
	Function_192(4);
	Function_188(1, 0);
	return;
}

void Function_188(int iParam0, int iParam1) //Position: 0x80A5 / 32933
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
			Function_189(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_189(int iParam0) //Position: 0x8127 / 33063
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

void Function_190(int iParam0) //Position: 0x8175 / 33141
{
	Function_191(&Global_28842, iParam0);
	return;
}

void Function_191(var uParam0, int iParam1) //Position: 0x8183 / 33155
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_192(int iParam0) //Position: 0x81A6 / 33190
{
	int iVar0;
	
	if (Function_24(iParam0, 1) && Function_24(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_193() //Position: 0x81DA / 33242
{
	Global_83816 = Global_26119;
	Global_83817 = Global_28842;
	return;
}

void Function_194(int iParam0) //Position: 0x81EE / 33262
{
	if (!Function_23(iParam0))
	{
		Function_172(iParam0, 0.0f);
	}
	return;
}

bool Function_195() //Position: 0x8203 / 33283
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Function_21();
	Function_238();
	bVar1 = Function_197(StackVal, StackVal, vLocal_531, 0.0f, 0.0f, 0.0f, 1, 1);
	if (bVar1)
	{
		uVar0 = Function_21();
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		SET_DRAW_ACTOR(Function_21(), 0);
		Function_196(uVar0);
	}
	return bVar1;
}

void Function_196(bool bParam0) //Position: 0x823F / 33343
{
	Function_13(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, 1);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

int Function_197(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x8260 / 33376
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_21();
	Function_216();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_236();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, 0))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_214(bVar0, 3145855);
	if (!bVar8 && bParam6)
	{
	}
	if (bParam6 && bVar8)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar0, 1);
		TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam0, vParam3.y, 1, 1, 1);
	}
	else
	{
		bVar9 = Function_213(256);
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
		Function_205(bVar0, 0);
		Function_200();
		Function_199(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			uVar14 = Function_198(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_179(uVar14))
			{
				Var10.f_4 = uVar14;
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

var Function_198(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x83D7 / 33751
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

void Function_199(char* cParam0, vector3 vParam1) //Position: 0x8472 / 33906
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_200() //Position: 0x84B0 / 33968
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_204(iVar1))
		{
			uVar2 = Function_203(iVar1);
			Function_201(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_201(int iParam0, bool bParam1) //Position: 0x84E2 / 34018
{
	if (!Function_204(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_202(222, Global_26401[iParam0], 0);
		if (Function_63(222) <= 0)
		{
			Function_49(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_49((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_202((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_202(222, bParam1, 0);
	}
	return;
}

int Function_202(int iParam0, bool bParam1, int iParam2) //Position: 0x856B / 34155
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
	Function_61(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_50(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_203(int iParam0) //Position: 0x8766 / 34662
{
	if (!Function_204(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_204(int iParam0) //Position: 0x877E / 34686
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_205(bool bParam0, bool bParam1) //Position: 0x8793 / 34707
{
	var uVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_212(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_210(8192) && !Function_209(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_207())
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 5, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 4, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(bParam0, 13, 5.0f);
	}
	if (bParam1)
	{
		GIVE_WEAPON_TO_ACTOR(bParam0, 22, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 4, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(bParam0, 8, 1.0f, 0, 1);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 7, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(bParam0, 8, 20.0f, 0);
	}
	uVar0 = GET_ACTOR_ENUM_STRING(bParam0);
	SET_LOCAL_PLAYER_VOICE(uVar0);
	SET_LOCAL_PLAYER_PAIN_VOICE(uVar0);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(bParam0);
	SET_DEADEYE_INVULNERABILITY(0, 0);
	SET_DEADEYE_DAMAGE_SCALING(0, 1.0f);
	SET_DEADEYE_MULTILOCK_ENABLE(0, true);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
	SET_DEADEYE_REGENERATION_RATE(0, 0.0f, 0);
	SET_DEADEYE_TIMESCALE(0, 1.0f);
	if (Function_206())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_206() //Position: 0x889B / 34971
{
	return Function_24(Global_79962, 2048);
}

bool Function_207() //Position: 0x88AB / 34987
{
	if (Function_47())
	{
		return (Function_208() != 1 || Function_208() != 0);
	}
	return 0;
}

int Function_208() //Position: 0x88C4 / 35012
{
	return Global_79349.f_16;
}

bool Function_209(int iParam0, bool bParam1) //Position: 0x88D0 / 35024
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_210(int iParam0) //Position: 0x88F0 / 35056
{
	return Function_211(&Global_79349, iParam0);
}

int Function_211(var uParam0, bool bParam1) //Position: 0x88FF / 35071
{
	return Function_24(uParam0->f_44, bParam1);
}

var Function_212(int iParam0) //Position: 0x890E / 35086
{
	int iVar0;
	
	iVar0 = "";
	if (((iParam0 > 837 && iParam0 < 971) && iParam0 > 972) && iParam0 < 975)
	{
		return iVar0;
	}
	iVar0 = GET_ACTORENUM_MP_VOICE_NAME(iParam0);
	return iVar0;
}

int Function_213(int iParam0) //Position: 0x8943 / 35139
{
	return Function_87(Global_78617.f_52, iParam0);
}

int Function_214(bool bParam0, int iParam1) //Position: 0x8954 / 35156
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_215(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_215(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_215(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_215(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_215(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_215(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_215(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_215(iParam1, 64))
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

bool Function_215(var uParam0, bool bParam1) //Position: 0x8A2D / 35373
{
	return (uParam0 && bParam1) == 0;
}

void Function_216() //Position: 0x8A3A / 35386
{
	Function_226();
	Function_219();
	Function_217();
	return;
}

void Function_217() //Position: 0x8A49 / 35401
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_218();
	return;
}

void Function_218() //Position: 0x8A7D / 35453
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_219() //Position: 0x8A8E / 35470
{
	if (Global_83864.f_1264 > 6)
	{
		Function_220(&(Global_50170[522]));
		Function_220(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_220(&(Global_50170[722]));
		Function_220(&(Global_50170[822]));
		Function_220(&(Global_50170[922]));
		Function_220(&(Global_50170[1022]));
		Function_220(&(Global_50170[1122]));
	}
	return;
}

void Function_220(bool bParam0) //Position: 0x8AEE / 35566
{
	Global_56092[*bParam0] = 0;
	Function_221(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_221(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x8B08 / 35592
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_225(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_224(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_225(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_223(iParam0, 4))
	{
		Function_222(Function_225(iParam0), 0);
	}
}

void Function_222(int iParam0, int iParam1) //Position: 0x8BBF / 35775
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(iParam0);
	REMOVE_JOURNAL_ENTRY(iParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(iParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(iParam0);
	}
	return;
}

bool Function_223(int iParam0, bool bParam1) //Position: 0x8BE4 / 35812
{
	return Function_24(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_224(int iParam0) //Position: 0x8BF8 / 35832
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_225(int iParam0) //Position: 0x8C2C / 35884
{
	return Global_50170[iParam022].f_24;
}

void Function_226() //Position: 0x8C3B / 35899
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_227(bool bParam0) //Position: 0x8C54 / 35924
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_232();
	iVar1 = 0;
	if (!Function_5(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_231(bParam0[iVar03], 8);
		}
		else if (Function_230())
		{
			iVar1 = 1;
			Function_231(bParam0[iVar03], 8);
		}
		Function_231(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_5(bParam0[iVar03], 4))
		{
			if (!Function_5(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_5(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_5(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_231(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_5(bParam0[iVar03], 4))
		{
			if (!Function_5(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_231(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_231(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_231(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_231(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_231(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_231(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_231(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_231(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_231(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_231(bParam0[iVar03], 2);
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
	Function_228();
	return 1;
}

void Function_228() //Position: 0x8FCF / 36815
{
	if (!Function_229(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_229(int iParam0) //Position: 0x900F / 36879
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_230() //Position: 0x902B / 36907
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

void Function_231(var uParam0, int iParam1) //Position: 0x9056 / 36950
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_232() //Position: 0x9067 / 36967
{
	if (!Function_229(128))
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

var Function_233(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x90A9 / 37033
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_5(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_231(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_231(bParam0[iVar03], 8);
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

var Function_234(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9179 / 37241
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_235(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_231(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_235(var uParam0, int iParam1, int iParam2) //Position: 0x91B1 / 37297
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_231(uParam0[iVar03], 4);
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

void Function_236() //Position: 0x9275 / 37493
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

int Function_237() //Position: 0x928A / 37514
{
	Function_234(&Local_12 + 4, "p_gen_crateMultiplayerAmmo01x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_crateMultiplayerAmmoFull01x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_crateMultiplayerItem01x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_crateTnt01x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_crateTnt02x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_gatlingGun01x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_barrel04x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_chuckWagonBreak01x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_crateMultiplayerWeapon01x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_crate19x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_barricade01x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_crate01x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_tent01x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_waterTrough01x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_horseSaddle01x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_hayPile02x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_hayBale07x", 0, 0);
	Function_234(&Local_12 + 4, "p_gen_hayBale01x", 0, 0);
	Function_234(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_smokelean_e_any_mp", 1, 0);
	Function_234(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/spittoon_mp", 1, 0);
	Function_234(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanknife_mp", 1, 0);
	Function_234(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink_mp", 1, 0);
	Function_234(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_mp", 1, 0);
	Function_234(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_mp", 1, 0);
	Function_234(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/clean_rifle_mp", 1, 0);
	Function_234(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanrifle_mp", 1, 0);
	Function_234(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanpistol_mp", 1, 0);
	Function_234(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r_mp", 1, 0);
	if (Function_227(&Local_12 + 4))
	{
		return 1;
	}
	return 0;
}

void Function_238() //Position: 0x97BA / 38842
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = Function_21();
	bVar1 = GET_MOUNT(bVar0);
	bVar2 = GET_VEHICLE(bVar0);
	if (IS_ACTOR_RIDING(bVar0) || IS_ACTOR_VALID(bVar2))
	{
		ACTOR_DISMOUNT_NOW(bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			RELEASE_ACTOR(bVar2);
		}
		else if (IS_ACTOR_VALID(bVar1))
		{
			DESTROY_ACTOR(bVar1);
		}
	}
	return;
}

void Function_239() //Position: 0x9803 / 38915
{
	if ((Function_242() || Function_241()) && !IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0))
	{
		if ((iLocal_923 == iLocal_400 && iLocal_400 <= 0) && iLocal_400 > bLocal_529)
		{
			if (Function_168(&iLocal_944) < fLocal_370)
			{
				if (iLocal_953 == iLocal_954)
				{
					fLocal_370 = Function_240(0.0f, (fLocal_370 - fLocal_368));
				}
				else
				{
					fLocal_370 = fLocal_367;
				}
				iLocal_923 = iLocal_400;
				if (iLocal_401 == 3)
				{
					Function_97((14 + iLocal_923));
				}
				else
				{
					Function_97((4 + iLocal_923));
				}
				Function_79();
				Function_92(iLocal_923);
				Function_78(&iLocal_944);
			}
		}
	}
	return;
}

float Function_240(float fParam0, float fParam1) //Position: 0x988E / 39054
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int Function_241() //Position: 0x98A1 / 39073
{
	if (iLocal_401 <= 4 && iLocal_401 >= 29)
	{
		return 1;
	}
	return 0;
}

int Function_242() //Position: 0x98B9 / 39097
{
	if (iLocal_401 == 3)
	{
		return 1;
	}
	return 0;
}

void Function_243(int iParam0) //Position: 0x98C9 / 39113
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	int iVar8;
	
	if (Function_274(&iLocal_950, 5.0f))
	{
		Function_171();
	}
	if (iLocal_391)
	{
		iLocal_391 = 0;
		iLocal_403 = 1;
		*iParam0 = 13;
		return;
	}
	Function_270();
	Function_261();
	Function_256();
	if (((iLocal_401 != 0 && iLocal_920 == 1) && iLocal_920 == 2) && iLocal_920 == 3)
	{
		iVar0 = (1 + RAND_INT_RANGE(false, 2));
		Function_97(iVar0);
	}
	if (((iLocal_401 != 1 && iLocal_920 == 26) && iLocal_920 == 27) && iLocal_920 == 28)
	{
		iVar1 = (26 + RAND_INT_RANGE(false, 2));
		Function_97(iVar1);
	}
	if (Function_254())
	{
		FLASH_SET_INT("pause_main", "character_label.visibility", 0);
		iVar2 = (1 + RAND_INT_RANGE(false, 2));
		Function_97(iVar2);
		return;
	}
	if (Function_252())
	{
		Function_96();
		iVar3 = (26 + RAND_INT_RANGE(false, 2));
		Function_100();
		Function_97(iVar3);
		return;
	}
	if (!UI_IS_SHOWING_DIALOG())
	{
		if (bLocal_402)
		{
			bLocal_402 = false;
		}
	}
	else
	{
		bLocal_402 = true;
	}
	if (!bLocal_402)
	{
		if (Function_251())
		{
			*iParam0 = 13;
			UI_TRANSITION_TO("MP_AvatarQuit");
			return;
		}
		if (Function_250())
		{
			Function_114();
			if (!Function_23(&iLocal_947))
			{
				Function_7();
			}
			Function_78(&iLocal_944);
			Function_78(&iLocal_947);
			Function_170();
			Function_171();
			if (iLocal_925 != bLocal_926)
			{
				iLocal_925 = bLocal_926;
				*iParam0 = 17;
			}
			else
			{
				Function_97((14 + iLocal_923));
				Function_94();
				Function_92(iLocal_923);
			}
			return;
		}
		if (Function_249())
		{
			if (!Function_23(&iLocal_947))
			{
				Function_7();
			}
			Function_78(&iLocal_944);
			Function_78(&iLocal_947);
			Function_170();
			Function_171();
			Function_97(29);
			Function_92(iLocal_923);
			return;
		}
		if (Function_248())
		{
			if (!Function_23(&iLocal_947))
			{
				Function_7();
			}
			Function_78(&iLocal_944);
			Function_78(&iLocal_947);
			Function_170();
			Function_171();
			Var4 = { StackVal, StackVal, StackVal, Function_76(bLocal_926, 0) };
			iVar8 = Function_91(Local_455[02]);
			if (iLocal_925 == bLocal_926 && iVar8 == bLocal_926)
			{
				iLocal_925 = bLocal_926;
				*iParam0 = 18;
			}
			else
			{
				Function_97((4 + iLocal_923));
				Function_100();
				Function_92(iLocal_923);
			}
			return;
		}
		if (Function_247(iParam0))
		{
			*iParam0 = 9;
			iLocal_404 = 0;
			iLocal_401 = 0;
			return;
		}
		if (Function_246(iParam0))
		{
			*iParam0 = 11;
			iLocal_404 = 0;
			iLocal_401 = 0;
			return;
		}
		if (Function_244(iParam0))
		{
			*iParam0 = 12;
			iLocal_404 = 0;
			iLocal_401 = 0;
			return;
		}
	}
	return;
}

bool Function_244(int iParam0) //Position: 0x9B1C / 39708
{
	int iVar0;
	
	if (Function_245() && *iParam0 != 8)
	{
		if (iLocal_404 == 6)
		{
			iLocal_404 = 34;
			iVar0 = (Function_32() * 1000 + Function_31(Function_32()));
			iVar0 = (iVar0 + iLocal_400);
			if (!Function_127(iVar0))
			{
				return 0;
			}
			PLAY_SOUND("HUD_MENU_SELECT_MASTER");
			return 1;
		}
	}
	return 0;
}

int Function_245() //Position: 0x9B7F / 39807
{
	if (iLocal_401 == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_246(int iParam0) //Position: 0x9B8F / 39823
{
	if (Function_242() && *iParam0 != 8)
	{
		if (iLocal_404 == 5)
		{
			iLocal_404 = 34;
			if (!Function_80(iLocal_923))
			{
				return 0;
			}
			PLAY_SOUND("HUD_MENU_SELECT_MASTER");
			return 1;
		}
	}
	return 0;
}

bool Function_247(int iParam0) //Position: 0x9BDC / 39900
{
	if (Function_241() && *iParam0 != 8)
	{
		if (iLocal_404 == 4)
		{
			iLocal_404 = 34;
			if (!Function_80(iLocal_923))
			{
				return 0;
			}
			PLAY_SOUND("HUD_MENU_SELECT_MASTER");
			return 1;
		}
	}
	if (iLocal_404 == 4)
	{
		iLocal_404 = 34;
	}
	return 0;
}

bool Function_248() //Position: 0x9C38 / 39992
{
	int iVar0;
	
	if (iLocal_404 <= 7 && iLocal_404 >= 32)
	{
		iVar0 = (iLocal_404 - 7);
		bLocal_926 = (iLocal_927 - iVar0);
		iLocal_404 = 34;
		return 1;
	}
	return 0;
}

bool Function_249() //Position: 0x9C65 / 40037
{
	if (iLocal_404 == 2)
	{
		bLocal_926 = Function_91(Function_74());
		iLocal_923 = iLocal_924;
		iLocal_404 = 34;
		return 1;
	}
	return 0;
}

bool Function_250() //Position: 0x9C89 / 40073
{
	if (iLocal_404 == 3)
	{
		bLocal_926 = iLocal_385;
		iLocal_404 = 34;
		return 1;
	}
	return 0;
}

bool Function_251() //Position: 0x9CA4 / 40100
{
	if (iLocal_404 != 33 && !UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
	{
		iLocal_404 = 34;
		return 1;
	}
	return 0;
}

bool Function_252() //Position: 0x9CDC / 40156
{
	if (iLocal_401 == 1 && UI_ISFOCUSED("MP_AvatarGroupSelector"))
	{
		FLASH_SET_INT("pause_main", "character_label.visibility", 0);
		Function_117();
		iLocal_404 = 1;
		iLocal_401 = 1;
	}
	if (Function_253())
	{
		if (iLocal_404 == 1)
		{
			iLocal_404 = 34;
			bLocal_926 = Function_91(Local_455[02]);
			Function_89();
			return 1;
		}
	}
	return 0;
}

bool Function_253() //Position: 0x9D65 / 40293
{
	if (iLocal_401 == 1)
	{
		return 1;
	}
	return 0;
}

bool Function_254() //Position: 0x9D75 / 40309
{
	if (Function_255())
	{
		if (iLocal_404 == 0)
		{
			iLocal_404 = 34;
			return 1;
		}
	}
	return 0;
}

bool Function_255() //Position: 0x9D90 / 40336
{
	if (iLocal_401 == 0)
	{
		return 1;
	}
	return 0;
}

void Function_256() //Position: 0x9DA0 / 40352
{
	if (iLocal_920 == iLocal_919 && !IS_OBJECT_VALID(bLocal_921))
	{
		bLocal_921 = Function_257(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uLocal_955, Local_534[iLocal_91912], Local_534[iLocal_92012]);
		iLocal_919 = iLocal_920;
	}
	return;
}

bool Function_257(var uParam0, struct<12> Param1, vector3 vParam13, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24) //Position: 0x9DDD / 40413
{
	var uVar0;
	
	uVar0 = Function_258(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bLocal_392, 0, Param1, vParam13);
	Function_101(StackVal, StackVal, StackVal, StackVal, uParam0, vParam13, *(&vParam13 + 12));
	return uVar0;
}

var Function_258(char* cParam0, bool bParam1, struct<12> Param2, struct<12> Param14) //Position: 0x9E09 / 40457
{
	bool bVar0;
	
	bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "Transition_Cutscene", 2, 1);
	Function_259(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar0, Param2, Param14);
	SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
	PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return bVar0;
}

void Function_259(var uParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, vector3 vParam13, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24) //Position: 0x9E5C / 40540
{
	var uVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_260(StackVal, StackVal, StackVal, StackVal, &uVar0, vParam1, *(&vParam1 + 12));
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_260(StackVal, StackVal, StackVal, StackVal, &uVar0, vParam13, *(&vParam13 + 12));
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	fVar1 = (VDIST(vParam1, vParam13) * 0.09f);
	vVar2 = { StackVal, StackVal, *(&vParam1 + 12) };
	vVar5 = { StackVal, StackVal, *(&vParam13 + 12) };
	VNORMALIZE(&vVar2);
	VNORMALIZE(&vVar5);
	fVar8 = VDOT(&vVar2, &vVar5);
	fVar1 = (fVar1 + (fVar8 * -1.0f));
	if (fVar1 > 0.8f)
	{
		fVar1 = 0.8f;
	}
	if (fVar1 < 2.3f)
	{
		fVar1 = 2.3f;
	}
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0.1f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, fVar1, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0.1f, 2);
}

void Function_260(var uParam0, vector3 vParam1, vector3 vParam4) //Position: 0x9F2B / 40747
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42.97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, vParam1);
	SET_CAMERASHOT_ORIENTATION(*uParam0, vParam4, 0);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
}

void Function_261() //Position: 0x9F7E / 40830
{
	int iVar0;
	
	iLocal_399 = iLocal_400;
	if (UI_ISFOCUSED("MP_ProfileMenu"))
	{
		iLocal_400 = UI_GET_SELECTED_INDEX("MP_ProfileMenu", 0);
	}
	else if (UI_ISFOCUSED("MP_AvatarGroupSelector"))
	{
		iLocal_400 = Function_269(UI_GET_SELECTED_INDEX("MP_AvatarGroupSelector", 0));
	}
	else if (UI_ISFOCUSED("MP_AvatarModelSelector"))
	{
		iLocal_400 = UI_GET_SELECTED_INDEX("MP_AvatarModelSelector", 0);
		if (!(iLocal_401 <= 4 && iLocal_401 >= 29))
		{
			iLocal_401 = (4 + iLocal_400);
		}
		Function_266();
	}
	else if (UI_ISFOCUSED("MP_MountSelector"))
	{
		iLocal_400 = UI_GET_SELECTED_INDEX("MP_MountSelector", 0);
		Function_264();
	}
	else if (UI_ISFOCUSED("MP_TitleGroupXp"))
	{
		iLocal_400 = UI_GET_SELECTED_INDEX("MP_TitleGroupXp", 0);
		Function_262(0);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupAmbient"))
	{
		if (!Function_121())
		{
			iVar0 = UI_GET_SELECTED_INDEX("MP_TitleGroupAmbient", 0);
			if (iVar0 <= 37)
			{
				iLocal_400 = iVar0;
			}
			else if (iVar0 <= 60)
			{
				iLocal_400 = iVar0 + 1;
			}
			else if (iVar0 <= 61)
			{
				iLocal_400 = iVar0 + 2;
			}
			else
			{
				iLocal_400 = iVar0 + 3;
			}
		}
		else
		{
			iLocal_400 = UI_GET_SELECTED_INDEX("MP_TitleGroupAmbient", 0);
		}
		Function_262(1);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupWeapon"))
	{
		iLocal_400 = UI_GET_SELECTED_INDEX("MP_TitleGroupWeapon", 0);
		Function_262(2);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupPvP"))
	{
		iLocal_400 = UI_GET_SELECTED_INDEX("MP_TitleGroupPvP", 0);
		Function_262(3);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupStat"))
	{
		iLocal_400 = UI_GET_SELECTED_INDEX("MP_TitleGroupStat", 0);
		Function_262(4);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupDLC1"))
	{
		iLocal_400 = UI_GET_SELECTED_INDEX("MP_TitleGroupDLC1", 0);
		Function_262(5);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupDLC2"))
	{
		iLocal_400 = UI_GET_SELECTED_INDEX("MP_TitleGroupDLC2", 0);
		Function_262(6);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupDLC3"))
	{
		iLocal_400 = UI_GET_SELECTED_INDEX("MP_TitleGroupDLC3", 0);
		Function_262(7);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupDLC4"))
	{
		iLocal_400 = UI_GET_SELECTED_INDEX("MP_TitleGroupDLC4", 0);
		Function_262(8);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupSelector"))
	{
		UI_INCLUDE("MPAP_title_ps_accept_button");
	}
	if (iLocal_399 != iLocal_400)
	{
	}
	return;
}

void Function_262(int iParam0) //Position: 0xA35F / 41823
{
	int iVar0;
	
	iVar0 = (iParam0 * 1000 + iLocal_400);
	iVar0 = (iVar0 + Function_31(iParam0));
	if (!Function_127(iVar0))
	{
		UI_EXCLUDE("MPAP_title_ps_accept_button");
	}
	else
	{
		UI_INCLUDE("MPAP_title_ps_accept_button");
	}
	if (Function_127(iVar0) && !Function_126(iVar0))
	{
		Function_263(iVar0, 1);
	}
	return;
}

void Function_263(int iParam0, bool bParam1) //Position: 0xA3DD / 41949
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_12(&Global_84364 + 4[(iParam0 / 1000)10] + 20[(iVar0 / 32)], Function_83((iVar0 % 32)));
	}
	else
	{
		Function_11(&Global_84364 + 4[(iParam0 / 1000)10] + 20[(iVar0 / 32)], Function_83((iVar0 % 32)));
	}
	return;
}

void Function_264() //Position: 0xA437 / 42039
{
	bool bVar0;
	
	bVar0 = Local_506[iLocal_4002];
	if (!Function_86(bVar0))
	{
		UI_EXCLUDE("MPAP_model_ps_accept_button");
	}
	else
	{
		UI_INCLUDE("MPAP_model_ps_accept_button");
	}
	if (FLASH_GET_INT("pause_main", "pausetransition.visibility") == 0)
	{
		if (!Function_86(bVar0))
		{
			FLASH_SET_STRING("pause_main", "character_label.text", "mp_avatar_locked", 1);
		}
		else
		{
			FLASH_SET_STRING("pause_main", "character_label.text", GET_ACTOR_ENUM_STRING_FROM_ENUM(Local_506[iLocal_4002]), 1);
		}
		FLASH_SET_INT("pause_main", "character_label.visibility", 1);
	}
	if (Function_86(bVar0) && !Function_163(bVar0))
	{
		Function_265(bVar0);
	}
	return;
}

void Function_265(int iParam0) //Position: 0xA585 / 42373
{
	Function_12(&Global_84364 + 772, Function_83(Function_88(iParam0)));
	return;
}

void Function_266() //Position: 0xA59D / 42397
{
	bool bVar0;
	
	bVar0 = Local_455[iLocal_4002];
	if (!Function_268(iLocal_929, iLocal_930, bVar0) && !Function_268(iLocal_931, iLocal_932, bVar0))
	{
		return;
	}
	if (!Function_81(bVar0))
	{
		UI_EXCLUDE("MPAP_model_ps_accept_button");
	}
	else
	{
		UI_INCLUDE("MPAP_model_ps_accept_button");
	}
	if (FLASH_GET_INT("pause_main", "pausetransition.visibility") == 0)
	{
		if (!Function_81(bVar0))
		{
			FLASH_SET_STRING("pause_main", "character_label.text", "mp_avatar_locked", 1);
		}
		else
		{
			FLASH_SET_STRING("pause_main", "character_label.text", GET_ACTOR_ENUM_STRING_FROM_ENUM(Local_455[iLocal_4002]), 1);
		}
		FLASH_SET_INT("pause_main", "character_label.visibility", 1);
	}
	if (Function_81(bVar0) && !Function_159(bVar0))
	{
		Function_267(bVar0);
	}
	return;
}

void Function_267(int iParam0) //Position: 0xA708 / 42760
{
	Function_12(&Global_84364 + 748[Function_85(iParam0)], Function_82(iParam0));
	return;
}

bool Function_268(int iParam0, int iParam1, int iParam2) //Position: 0xA724 / 42788
{
	return (iParam2 <= iParam0 && iParam2 >= iParam1);
}

int Function_269(int iParam0) //Position: 0xA735 / 42805
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (Function_24(iLocal_530, Function_83(iVar0)))
		{
			if (iVar1 == iParam0)
			{
				return iVar0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

void Function_270() //Position: 0xA773 / 42867
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = FIND_NAMED_LAYOUT("Formations");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		LOG_ERROR("Failed to find FUI layout. Script will not receive FUI events");
		return;
	}
	iVar1 = CREATE_OBJECT_ITERATOR(bVar0);
	if (!IS_ITERATOR_VALID(iVar1))
	{
		LOG_ERROR("Failed to create FUI iterator. Script will not receive FUI events");
		return;
	}
	ITERATE_ON_OBJECT_TYPE(iVar1, 3);
	ITERATE_IN_SET(iVar1, GET_OBJECTSET_FOR_EVENT_TYPE(75));
	bVar2 = START_OBJECT_ITERATOR(iVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_EVENT_FROM_OBJECT(bVar2);
		if (IS_OBJECT_VALID(bVar3))
		{
			Function_272(bVar2);
			Function_271();
		}
		bVar2 = OBJECT_ITERATOR_NEXT(iVar1);
	}
	DESTROY_ITERATOR(iVar1);
	return;
}

void Function_271() //Position: 0xA878 / 43128
{
	if (iLocal_401 == 3)
	{
		Function_162();
	}
	if (iLocal_401 <= 4 && iLocal_401 >= 29)
	{
		Function_160();
	}
	if (iLocal_401 <= 4 && iLocal_401 >= 29)
	{
		Function_156();
	}
	if (iLocal_401 == 2)
	{
		Function_155();
	}
	if (iLocal_401 == 2)
	{
		Function_154();
		Function_153();
		Function_152();
		Function_151();
		Function_150();
		Function_149(0);
		Function_148(0);
		Function_147(0);
		Function_146(0);
		Function_145(0);
		if (bLocal_387)
		{
			Function_144();
			Function_143(0);
		}
		if (bLocal_388)
		{
			Function_141();
			Function_140(0);
		}
		if (bLocal_389)
		{
			Function_138();
			Function_123(0);
		}
	}
	return;
}

void Function_272(bool bParam0) //Position: 0xA907 / 43271
{
	int iVar0;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if ((DECOR_CHECK_STRING(bParam0, "Param", "net.JoinWishPosted") || DECOR_CHECK_STRING(bParam0, "Param", "net.InviteFailed_NoPlaylist")) || DECOR_CHECK_STRING(bParam0, "Param", "avt.back"))
	{
		iLocal_391 = 1;
	}
	if (UI_ISACTIVE("MP_AvatarQuit"))
	{
		if (DECOR_CHECK_STRING(bParam0, "Param", "RollOver_Yes"))
		{
			iLocal_403 = 1;
			UI_EXIT("MP_AvatarQuit");
		}
		else if ((IS_BUTTON_RELEASED(Function_273(), 6, 1, 0) || IS_BUTTON_PRESSED(Function_273(), 6, 1, 0)) || IS_BUTTON_DOWN(Function_273(), 6, 1, 0))
		{
			iLocal_403 = 1;
			UI_EXIT("MP_AvatarQuit");
		}
	}
	if (DECOR_CHECK_STRING(bParam0, "Param", "Profile_Selected"))
	{
		if (UI_ISFOCUSED("MP_AvatarGroupSelector"))
		{
			iLocal_404 = 1;
			iLocal_401 = 1;
		}
		else if (UI_ISFOCUSED("MP_MountSelector"))
		{
			iLocal_404 = 3;
			iLocal_401 = 3;
		}
		else if (((((((((UI_ISFOCUSED("MP_TitleGroupSelector") || UI_ISFOCUSED("MP_TitleGroupXp")) || UI_ISFOCUSED("MP_TitleGroupAmbient")) || UI_ISFOCUSED("MP_TitleGroupWeapon")) || UI_ISFOCUSED("MP_TitleGroupPvP")) || UI_ISFOCUSED("MP_TitleGroupStat")) || UI_ISFOCUSED("MP_TitleGroupDLC1")) || UI_ISFOCUSED("MP_TitleGroupDLC2")) || UI_ISFOCUSED("MP_TitleGroupDLC3")) || UI_ISFOCUSED("MP_TitleGroupDLC4"))
		{
			iLocal_404 = 2;
			iLocal_401 = 2;
		}
	}
	else if (DECOR_CHECK_STRING(bParam0, "Param", "Profile_Cancelled"))
	{
		iLocal_404 = 33;
	}
	if (DECOR_CHECK_STRING(bParam0, "Param", "AvatarGroup_Selected"))
	{
		iVar0 = UI_GET_SELECTED_INDEX("MP_AvatarGroupSelector", 0);
		iVar0 = Function_269(iVar0);
		iLocal_404 = (7 + iVar0);
		iLocal_401 = (4 + iVar0);
	}
	else if (DECOR_CHECK_STRING(bParam0, "Param", "AvatarGroup_Cancelled"))
	{
		FLASH_SET_INT("pause_main", "character_label.visibility", 0);
		iLocal_404 = 0;
		iLocal_401 = 0;
	}
	if (DECOR_CHECK_STRING(bParam0, "Param", "Mount_Selected"))
	{
		iLocal_404 = 5;
	}
	else if (DECOR_CHECK_STRING(bParam0, "Param", "Mount_Cancelled"))
	{
		FLASH_SET_INT("pause_main", "character_label.visibility", 0);
		iLocal_404 = 0;
		iLocal_401 = 0;
	}
	if (DECOR_CHECK_STRING(bParam0, "Param", "Title_Selected"))
	{
		iLocal_404 = 6;
	}
	else if (DECOR_CHECK_STRING(bParam0, "Param", "Title_Cancelled"))
	{
		iLocal_404 = 0;
		iLocal_401 = 0;
	}
	if (DECOR_CHECK_STRING(bParam0, "Param", "AvatarModel_Selected"))
	{
		FLASH_SET_INT("pause_main", "character_label.visibility", 0);
		iLocal_404 = 4;
	}
	else if (DECOR_CHECK_STRING(bParam0, "Param", "AvatarModel_Cancelled"))
	{
		FLASH_SET_INT("pause_main", "character_label.visibility", 0);
		Function_117();
		iLocal_404 = 1;
		iLocal_401 = 1;
	}
	return;
}

int Function_273() //Position: 0xADFD / 44541
{
	bool bVar0;
	
	bVar0 = Function_21();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

bool Function_274(var uParam0, int iParam1) //Position: 0xAE17 / 44567
{
	if (Function_22(uParam0, iParam1))
	{
		Function_275(uParam0);
		return 1;
	}
	return 0;
}

void Function_275(int iParam0) //Position: 0xAE2F / 44591
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_276(int iParam0) //Position: 0xAE43 / 44611
{
	Function_17(&Global_78617 + 52, iParam0);
	return;
}

void Function_277(int iParam0) //Position: 0xAE54 / 44628
{
	Function_15(&Global_78617 + 52, iParam0);
	return;
}

void Function_278() //Position: 0xAE65 / 44645
{
	int iVar0;
	char* cVar1[64];
	int iVar17;
	
	iVar17 = 837;
	while (iVar17 < 971)
	{
		iVar0 = iVar17;
		strcpy(&cVar1, "Avatar ", 64);
		stradd(&cVar1, GET_ACTOR_ENUM_STRING_FROM_ENUM(iVar0), 64);
		stradd(&cVar1, " unlock status", 64);
		iVar17++;
	}
	iVar17 = 1287;
	while (iVar17 < 1310)
	{
		iVar0 = iVar17;
		strcpy(&cVar1, "Avatar ", 64);
		stradd(&cVar1, GET_ACTOR_ENUM_STRING_FROM_ENUM(iVar0), 64);
		stradd(&cVar1, " unlock status", 64);
		iVar17++;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		strcpy(&cVar1, "Mount #", 64);
		straddi(&cVar1, iVar0, 64);
		stradd(&cVar1, " unlock status", 64);
		iVar0++;
	}
	return;
}

void Function_279(int iParam0, int iParam1, int iParam2) //Position: 0xAF33 / 44851
{
	iParam1->f_4 = 2;
	iParam2 = iParam2;
	iParam1->f_8 = 16;
	Function_305(iParam1);
	Function_303();
	Function_301();
	switch (iParam0)
	{
		case 0x00000001:
			Function_298(iParam1);
			break;
		
		case 0x00000002:
			*iParam1 = 2500;
			iParam1->f_16 = 600.0f;
			Function_297(iParam1);
			Function_290(iParam1 + 276, 0);
			Function_288(iParam1, 1, 0, 5, 1);
			Function_288(iParam1, 2, 22, 1, 1);
			Function_283(iParam1, 1, 7, 3, 1);
			Function_283(iParam1, 2, 10, 1, 1);
			Function_283(iParam1, 3, 17, 2, 1);
			Function_283(iParam1, 4, 19, 1, 1);
			Function_283(iParam1, 5, 24, 1, 1);
			Function_282(iParam1 + 276, 4);
			break;
		
		case 0x00000003:
			*iParam1 = 1500;
			iParam1->f_16 = 600.0f;
			Function_297(iParam1);
			Function_290(iParam1 + 276, 0);
			break;
		
		case 0x00000011:
			*iParam1 = 5000;
			iParam1->f_16 = 600.0f;
			Function_297(iParam1);
			Function_290(iParam1 + 276, 0);
			Function_288(iParam1, 1, 0, 5, 1);
			Function_288(iParam1, 2, 22, 1, 1);
			Function_283(iParam1, 1, 7, 3, 1);
			Function_283(iParam1, 2, 10, 1, 1);
			Function_283(iParam1, 3, 17, 2, 1);
			Function_283(iParam1, 4, 19, 1, 1);
			Function_283(iParam1, 5, 24, 1, 1);
			Function_282(iParam1 + 276, 4);
			break;
		
		case 0x00000006:
			iParam1->f_16 = 900.0f;
			Function_297(iParam1);
			Function_290(iParam1 + 276, 0);
			Function_288(iParam1, 1, 0, 3, 1);
			Function_288(iParam1, 2, 22, 1, 1);
			Function_283(iParam1, 1, 9, 2, 1);
			Function_283(iParam1, 2, 1, 2, 1);
			Function_283(iParam1, 3, 16, 2, 1);
			Function_283(iParam1, 4, 19, 2, 1);
			Function_283(iParam1, 5, 24, 1, 1);
			Function_282(iParam1 + 276, 4);
			break;
		
		case 0x00000007:
			*iParam1 = 10;
			iParam1->f_16 = 600.0f;
			Function_290(iParam1 + 276, 0);
			Function_297(iParam1);
			Function_288(iParam1, 1, 0, 5, 1);
			Function_288(iParam1, 2, 22, 1, 1);
			Function_283(iParam1, 1, 7, 3, 1);
			Function_283(iParam1, 2, 10, 1, 1);
			Function_283(iParam1, 3, 17, 2, 1);
			Function_283(iParam1, 4, 19, 1, 1);
			Function_283(iParam1, 5, 24, 1, 1);
			Function_282(iParam1 + 276, 4);
			break;
		
		case 0x00000008:
			*iParam1 = 7;
			iParam1->f_16 = 600.0f;
			Function_290(iParam1 + 276, 0);
			Function_288(iParam1, 1, 0, 5, 1);
			Function_288(iParam1, 2, 22, 1, 1);
			Function_288(iParam1, 3, 25, 2, 1);
			Function_283(iParam1, 1, 9, 3, 1);
			Function_283(iParam1, 2, 1, 1, 1);
			Function_283(iParam1, 3, 24, 2, 1);
			Function_297(iParam1);
			Function_282(iParam1 + 276, 4);
			break;
		
		case 0x00000009:
			*iParam1 = 3;
			iParam1->f_16 = 600.0f;
			Function_290(iParam1 + 276, 0);
			Function_288(iParam1, 1, 0, 5, 1);
			Function_288(iParam1, 2, 22, 1, 1);
			Function_288(iParam1, 3, 25, 2, 1);
			Function_283(iParam1, 1, 9, 3, 1);
			Function_283(iParam1, 2, 1, 1, 1);
			Function_283(iParam1, 3, 24, 2, 1);
			Function_297(iParam1);
			Function_282(iParam1 + 276, 4);
			break;
		
		case 0x0000000E:
			iParam1->f_8 = 2;
			Function_290(iParam1 + 276, 0);
			Function_288(iParam1, 1, 5, 2, 1);
			break;
		
		case 0x0000000A:
			iParam1->f_8 = 6;
			Function_297(iParam1);
			break;
		
		case 0x0000000B:
			iParam1->f_8 = 6;
			Function_297(iParam1);
			break;
		
		case 0x0000000C:
			iParam1->f_8 = 16;
			Function_290(iParam1 + 276, 0);
			Function_288(iParam1, 1, 5, 5, 1);
			Function_288(iParam1, 3, 17, 2, 1);
			Function_297(iParam1);
			break;
		
		case 0x00000012:
			iParam1->f_8 = 2;
			Function_297(iParam1);
			break;
		
		case 0x00000013:
			*iParam1 = 5;
			iParam1->f_8 = 4;
			Function_290(iParam1 + 276, 0);
			Function_288(iParam1, 1, 0, 8, 1);
			Function_288(iParam1, 2, 9, 6, 1);
			Function_288(iParam1, 3, 22, 1, 1);
			Function_297(iParam1);
			Function_282(iParam1 + 276, 0);
			break;
		
		case 0x00000014:
			*iParam1 = 5;
			iParam1->f_8 = 4;
			Function_281(iParam1);
			Function_282(iParam1 + 276, 0);
			break;
	}
	if (Function_280())
	{
		Function_282(iParam1 + 276, 2);
	}
	return;
}

bool Function_280() //Position: 0xB320 / 45856
{
	return Function_24(Global_79962, 1024);
}

void Function_281(int iParam0) //Position: 0xB330 / 45872
{
	iParam0->f_844 = 1;
	return;
}

void Function_282(int iParam0, int iParam1) //Position: 0xB33C / 45884
{
	(iParam0 + 228)->f_220 = 0;
	Function_12(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_283(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xB354 / 45908
{
	Function_284(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_284(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xB36C / 45932
{
	Function_285(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_285(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xB383 / 45955
{
	if (!Function_287(iParam1))
	{
		return;
	}
	Function_286(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_286(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xB3A6 / 45990
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

bool Function_287(int iParam0) //Position: 0xB3D0 / 46032
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_288(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xB3E0 / 46048
{
	Function_289(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_289(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB3F8 / 46072
{
	Function_285(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_290(int iParam0, bool bParam1) //Position: 0xB40D / 46093
{
	Function_294(iParam0);
	Function_294(iParam0 + 228);
	if (bParam1)
	{
		Function_291(iParam0);
	}
	return;
}

void Function_291(int iParam0) //Position: 0xB429 / 46121
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_292(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_292(var uParam0, int iParam1) //Position: 0xB449 / 46153
{
	Function_293(uParam0, iParam1, 0);
	return;
}

void Function_293(int iParam0, int iParam1, int iParam2) //Position: 0xB457 / 46167
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_294(int iParam0) //Position: 0xB468 / 46184
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_296(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_295(iParam0, 0.0f);
	return;
}

void Function_295(var uParam0, int iParam1) //Position: 0xB495 / 46229
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_296(int iParam0) //Position: 0xB4A1 / 46241
{
	Function_286(iParam0, 4294967295, 0, 1);
	return;
}

void Function_297(int iParam0) //Position: 0xB4AF / 46255
{
	iParam0->f_844 = 0;
	return;
}

void Function_298(int iParam0) //Position: 0xB4BB / 46267
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = Function_59(487);
	iVar1 = 1;
	iVar2 = 1;
	iVar3 = 3;
	while (iVar1 > 50 && iVar2)
	{
		if (fVar0 <= Global_83864[iVar16] && Global_83864[iVar16] < 0.0f)
		{
			if (!StackVal != 4294967295)
			{
				Function_300(StackVal, iParam0, iVar3, 0, 1);
				if (Global_83823[StackVal])
				{
					SET_WEAPON_GOLD(StackVal, Function_21(), 1);
				}
				iVar3++;
			}
			Function_299(iVar1, 1);
			iVar1++;
		}
		else
		{
			iVar2 = 0;
		}
	}
	return;
}

void Function_299(int iParam0, int iParam1) //Position: 0xB558 / 46424
{
	Function_12(&Global_83864[iParam06] + 16, iParam1);
	return;
}

void Function_300(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB56D / 46445
{
	Function_289(iParam0 + 276, uParam1, uParam2, uParam3, uParam4);
}

void Function_301() //Position: 0xB585 / 46469
{
	var uVar0;
	
	uVar0 = "";
	Function_302(uVar0, uVar0, 0, 58, 58, 1);
	return;
}

void Function_302(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0xB59B / 46491
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

void Function_303() //Position: 0xB62B / 46635
{
	Function_304("%s", 0);
	return;
}

void Function_304(int iParam0, bool bParam1) //Position: 0xB63A / 46650
{
	if (bParam1)
	{
		UI_SET_STRING("MP_SB_TFMT", UI_GET_STRING(iParam0));
	}
	else
	{
		UI_SET_STRING("MP_SB_TFMT", iParam0);
	}
	return;
}

void Function_305(int iParam0) //Position: 0xB66F / 46703
{
	Function_290(iParam0 + 276, 1);
	Function_281(iParam0);
	Function_288(iParam0, 1, 4, 7, 1);
	Function_288(iParam0, 2, 22, 1, 1);
	Function_283(iParam0, 1, 5, 5, 1);
	Function_283(iParam0, 2, 10, 3, 1);
	Function_283(iParam0, 3, 17, 1, 1);
	Function_283(iParam0, 4, 19, 1, 1);
	Function_283(iParam0, 5, 24, 1, 1);
	Function_310(iParam0, 5, 3);
	Function_310(iParam0, 4, 3);
	Function_310(iParam0, 3, 10);
	Function_310(iParam0, 7, 18);
	Function_310(iParam0, 6, 20);
	Function_310(iParam0, 8, 15);
	Function_310(iParam0, 9, 15);
	Function_310(iParam0, 10, 10);
	Function_310(iParam0, 11, 5);
	Function_309(iParam0, 0, 45.0f);
	Function_309(iParam0, 1, 45.0f);
	Function_309(iParam0, 2, 15.0f);
	Function_309(iParam0, 3, 15.0f);
	Function_309(iParam0, 4, 30.0f);
	Function_309(iParam0, 5, 30.0f);
	Function_308(iParam0, 15.0f);
	Function_307(iParam0, 15.0f);
	Function_306(iParam0, 15.0f);
	Function_295(iParam0 + 276 + 228, 100.0f);
	Function_282(iParam0 + 276, 0);
	return;
}

void Function_306(int iParam0, int iParam1) //Position: 0xB785 / 46981
{
	(iParam0 + 276 + 528)->f_28 = iParam1;
	return;
}

void Function_307(int iParam0, int iParam1) //Position: 0xB797 / 46999
{
	(iParam0 + 276 + 528)->f_36 = iParam1;
	return;
}

void Function_308(int iParam0, int iParam1) //Position: 0xB7A9 / 47017
{
	(iParam0 + 276 + 528)->f_32 = iParam1;
	return;
}

void Function_309(int iParam0, int iParam1, int iParam2) //Position: 0xB7BB / 47035
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

void Function_310(int iParam0, int iParam1, int iParam2) //Position: 0xB7DE / 47070
{
	Function_293(iParam0 + 276, iParam1, iParam2);
	return;
}

bool Function_311(char* cParam0, int iParam1, bool bParam2) //Position: 0xB7F0 / 47088
{
	char* cVar0[64];
	
	if (UNK_0xFAD5A270(cParam0, iParam1))
	{
		if (bParam2)
		{
			if (iParam1->f_40 == 4294967294)
			{
				iParam1->f_40 = Function_198(StackVal, StackVal, *(iParam1 + 28), 0, 1, 1);
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

void Function_312() //Position: 0xB855 / 47189
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		Local_455[iVar02] = 4294967295;
		if (IS_ACTOR_VALID(StackVal))
		{
			DESTROY_ACTOR(StackVal);
		}
		Local_455[iVar02].f_4 = "";
		iVar0++;
	}
	return;
}

int Function_313(int iParam0) //Position: 0xB89F / 47263
{
	return Function_87(Global_83864.f_1252, iParam0);
}

