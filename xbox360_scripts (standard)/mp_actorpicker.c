//Decompiled with MagicRDR v1.0
//Function Count : 305
//Statics Count : 953
//Natives Count : 324
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
	struct<1365> Local_12 = { 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	bool bVar31;
	
	iLocal_11 = 0;
	fLocal_354 = 0,15f;
	fLocal_355 = 0,5f;
	fLocal_356 = 0,5f;
	fLocal_357 = 0,2f;
	fLocal_358 = 1,65f;
	fLocal_359 = 0,3f;
	fLocal_360 = 0,3f;
	fLocal_361 = 0,6f;
	fLocal_362 = 1,2f;
	fLocal_363 = 1.0f;
	fLocal_364 = 2.0f;
	fLocal_365 = 2,5f;
	fLocal_366 = 0,85f;
	fLocal_367 = 0,3f;
	fLocal_368 = 0,015f;
	fLocal_369 = 12,5f;
	fLocal_371 = 0,2f;
	fLocal_372 = 0,3f;
	fLocal_373 = -1.0f;
	fLocal_374 = 45.0f;
	fLocal_375 = 1.0f;
	fLocal_376 = 0,225f;
	fLocal_377 = 5,395f;
	fLocal_378 = 1,575f;
	vLocal_379 = { 0,125f, 1,6f, -0,25f };
	vLocal_382 = { 1.0f, 1.0f, 1.0f };
	iLocal_385 = 256;
	iLocal_386 = 1;
	bLocal_387 = Function_304(32);
	bLocal_388 = Function_304(64);
	bLocal_389 = Function_304(128);
	iLocal_390 = 0;
	iLocal_398 = 0;
	iLocal_399 = 0;
	iLocal_400 = 0;
	bLocal_401 = false;
	iLocal_402 = 0;
	iLocal_528 = 0;
	iLocal_529 = 0;
	vLocal_530 = { -129,789f, 128,302f, 848,648f };
	iLocal_918 = 1;
	iLocal_919 = 1;
	iLocal_928 = 837;
	iLocal_929 = 971;
	fLocal_930 = 0,4f;
	fLocal_931 = 1,8f;
	fLocal_932 = 1.0f;
	fLocal_933 = 0,1f;
	fLocal_934 = 0,55f;
	fLocal_935 = 1,3f;
	fLocal_936 = 0,45f;
	UI_ENTER("GeneralMenus");
	iVar1 = 0;
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	CANCEL_DEADEYE();
	CANCEL_TIME_WARP(0);
	Function_303();
	if (Function_302("FREEROAM", &Global_79349, 0))
	{
		Function_270(Global_79349.f_16, &Global_83591, 1);
	}
	STREAMING_RELEASE_MAIN_POI();
	Function_269();
	Function_268(1);
	Function_267(20);
	iVar9 = 0;
	vVar10 = { StackVal, StackVal, Global_34574 };
	bVar13 = _GET_PARAM_VALUE("avatarPickerLocation", "none");
	if (IS_STRING_VALID(bVar13))
	{
		if (SET_OWNERSHIP_STRAGGLER(bVar13, ",") > 3)
		{
			vLocal_530.x = STRING_TO_FLOAT(STRING_GET_TOKEN(0));
			vLocal_530.f_4 = STRING_TO_FLOAT(STRING_GET_TOKEN(1));
			vLocal_530.f_8 = STRING_TO_FLOAT(STRING_GET_TOKEN(2));
		}
		STRING_CLEAR_TOKENIZER();
	}
	vLocal_447 = { StackVal, StackVal, vLocal_530 };
	bVar0 = true;
	iVar15 = 0;
	uVar16 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	iVar21 = 0;
	fVar30 = 5.0f;
	while (!IS_EXITFLAG_SET())
	{
		if (iVar9 < 5 && iVar9 > 19)
		{
			Function_235(&iVar9);
			Function_231();
		}
		switch (iVar9)
		{
			case 0x00000000:
				if (HUD_IS_FADED())
				{
					Function_230();
					Function_229();
					Function_228();
					Function_226(&bLocal_404, "mp_avatarpicker", 10, 0);
					Function_225(&bLocal_404, 1000, 2, 0);
					Function_225(&bLocal_404, 996, 2, 0);
					Function_225(&bLocal_404, 987, 2, 0);
					Function_225(&bLocal_404, 976, 2, 0);
					Function_225(&bLocal_404, 982, 2, 0);
					Function_225(&bLocal_404, 979, 2, 0);
					Function_225(&bLocal_404, 1006, 2, 0);
					Function_225(&bLocal_404, 1004, 2, 0);
					Function_225(&bLocal_404, 1005, 2, 0);
					Function_225(&bLocal_404, 1007, 2, 0);
					Function_225(&bLocal_404, 1003, 2, 0);
					Function_219(&bLocal_404);
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
					Function_188();
					iVar9 = 2;
				}
				break;
			
			case 0x00000002:
				Function_177();
				Function_176();
				iVar9 = 3;
				break;
			
			case 0x00000003:
				if (HUD_IS_FADED())
				{
					if (Function_219(&bLocal_404) && Function_229())
					{
						Function_169(1, 0, 1);
						STREAMING_LOAD_BOUNDS(vLocal_530, 200.0f, 1);
						STREAMING_LOAD_SCENE_EXT(-116,502f, 130,786f, 903,428f, 0,241f, -0,155f, 0,958f, 0);
						STREAMING_OVERRIDE_MAIN_POI(-116,502f, 130,786f, 903,428f, 0,241f, -0,155f, 0,958f);
						Function_168(&iVar27, 0.0f);
						if (bVar0)
						{
							fVar30 = 5.0f;
						}
						else
						{
							fVar30 = 1.0f;
						}
						UI_ENTER("HudAvatarPicker");
						if (Function_188())
						{
							iVar9 = 4;
						}
					}
				}
				else if (!HUD_IS_FADING())
				{
					Function_167();
					Function_166();
					HUD_FADE_TO_LOADING_SCREEN();
				}
				break;
			
			case 0x00000004:
				if ((Function_164(&iVar27) < fVar30 && STREAMING_IS_WORLD_LOADED()) && STREAMING_IS_WORLD_LOADED_PRIORITY(4))
				{
					if (bVar0)
					{
						Function_162();
						Function_160();
						FLASH_SET_INT("pause_main", "pausetransition.type", 14);
						FLASH_SET_INT("pause_main", "pausetransition.visibility", false);
						UI_EXIT("AP_LoadFile");
						bLocal_397 = CREATE_EVENT_TRAP("outiftter_event_trap", 75, bLocal_391);
						EVENT_TRAP_STORE_EVENTS(bLocal_397, 1);
						Function_119();
						Function_116();
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
					bLocal_952 = CREATE_CAMERA_IN_LAYOUT(bLocal_391, "CurrentCamera", 0);
					INIT_CAMERA_FROM_GAME_CAMERA(bLocal_952);
					SET_CAMERA_TARGETDOF_USING_SOFT_DOF(bLocal_952, 0, 1);
					Function_114();
					iVar9 = 6;
				}
				break;
			
			case 0x00000006:
				Function_113();
				if (bLocal_925 == iLocal_385)
				{
					Function_112();
				}
				else
				{
					Function_111();
				}
				iVar9 = 7;
				fVar26 = GET_CURRENT_GAME_TIME();
			
			case 0x00000007:
				if (Function_110() || (IS_DEV_BUILD() && (GET_CURRENT_GAME_TIME() - fVar26) < 10.0f))
				{
					if (bLocal_925 != iLocal_385)
					{
						Function_107();
					}
					Function_104();
					bLocal_922 = Function_103((iLocal_528 - 1), bLocal_922);
					iVar9 = 14;
					fVar26 = GET_CURRENT_GAME_TIME();
				}
				break;
			
			case 0x0000000E:
				if (Function_101() || (IS_DEV_BUILD() && (GET_CURRENT_GAME_TIME() - fVar26) < 2.0f))
				{
					if (iLocal_386)
					{
						Function_100(StackVal, StackVal, StackVal, StackVal, &bLocal_952, Local_533[112], *(&Local_533[112] + 12));
						SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_952, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
						Function_97();
						iLocal_386 = 0;
					}
					else if (bLocal_925 != iLocal_385)
					{
						Function_96((4 + bLocal_922));
						Function_95();
						Function_97();
					}
					else
					{
						Function_96((14 + bLocal_922));
						Function_94();
						Function_92();
					}
					Function_91(bLocal_922);
					Function_78();
					Function_77(&iLocal_947);
					Function_76();
					Var22 = { StackVal, StackVal, StackVal, Function_75(bLocal_925, 0) };
					UI_LABEL_SET_TEXT("LocationText", &Var22);
					Function_74(0,5f);
					_UI_ENTER_EXCLUSIVE("MP_ProfileEditor");
					Function_77(&iLocal_394);
					iVar9 = 15;
				}
				break;
			
			case 0x0000000F:
				if (Function_164(&iLocal_394) < 0.0f)
				{
					FLASH_SET_INT("pause_main", "pausetransition.visibility", false);
					UI_EXIT("AP_LoadFile");
					iVar9 = 8;
				}
				break;
			
			case 0x00000008:
				if (FLASH_GET_INT("pause_main", "pausetransition.visibility") != 1 && Function_164(&iLocal_394) < 0.0f)
				{
					FLASH_SET_INT("pause_main", "pausetransition.visibility", false);
					UI_EXIT("AP_LoadFile");
				}
				break;
			
			case 0x00000009:
				bVar2 = StackVal;
				bVar31 = GET_ACTOR_ENUM(bVar2);
				if (bVar31 != Function_73())
				{
					Function_72(bVar31);
					Function_70(bVar31);
					bLocal_923 = bLocal_922;
				}
				Function_38(0);
				bVar0 = false;
				vLocal_530 = { StackVal, StackVal, vVar10 };
				Function_77(&iLocal_941);
				Function_104();
				UI_EXIT("MP_AvatarModelSelector");
				UI_EXIT("MP_AvatarGroupSelector");
				UI_ENTER("MP_ProfileMenu");
				iVar9 = 8;
				break;
			
			case 0x0000000B:
				UI_SET_TEXT("MPP_MountValue", GET_ACTOR_ENUM_STRING_FROM_ENUM(Local_505[bLocal_9222]));
				Function_37(Local_505[bLocal_9222]);
				Function_33();
				Function_32(Global_83864.f_1284, 0, 1);
				Function_38(0);
				bVar0 = false;
				vLocal_530 = { StackVal, StackVal, vVar10 };
				Function_77(&iLocal_941);
				Function_104();
				UI_EXIT("MP_MountSelector");
				UI_ENTER("MP_ProfileMenu");
				iVar9 = 8;
				break;
			
			case 0x0000000C:
				iVar15 = (Function_31() * 1000 + Function_30(Function_31()));
				iVar15 = (iVar15 + iLocal_399);
				Function_29(iVar15);
				Function_25();
				Function_38(0);
				bVar0 = false;
				vLocal_530 = { StackVal, StackVal, vVar10 };
				Function_77(&iLocal_941);
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
				if (Function_22(&iLocal_941, 2,5f))
				{
					iVar9 = 3;
				}
				break;
			
			case 0x0000000D:
				if (DECOR_CHECK_EXIST(Function_21(), "AvatarQuit") || iLocal_402)
				{
					DECOR_REMOVE(Function_21(), "AvatarQuit");
					bVar0 = false;
					Function_38(0);
					vLocal_530 = { StackVal, StackVal, vVar10 };
					iVar9 = 19;
				}
				else if (!UI_ISACTIVE("MP_AvatarQuit"))
				{
					Function_91(bLocal_922);
					iVar9 = 8;
				}
				break;
			
			case 0x00000010:
				if (HUD_IS_FADED())
				{
					Function_20();
					Function_166();
					iVar9 = 6;
				}
				else if (!HUD_IS_FADING())
				{
					Function_19(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				}
				break;
			
			case 0x00000011:
				Function_166();
				iVar9 = 6;
				break;
			
			case 0x00000012:
				Function_20();
				Function_166();
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
					Function_167();
					Function_166();
				}
				break;
		}
		WAIT(false);
	}
	STREAMING_RELEASE_MAIN_POI();
	STREAMING_UNLOAD_BOUNDS();
	STREAMING_UNLOAD_SCENE();
	UI_EXIT("HudAvatarPicker");
	Function_167();
	Function_1();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xBEE / 3054
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
	SET_DRAW_ACTOR(Function_21(), true);
	Function_16(2097154);
	Function_267(5);
	Function_268(16);
	Function_14(128);
	Function_16(131072);
	Function_13(2097152, 0);
	Function_9();
	Function_8();
	Function_166();
	ENABLE_USE_CONTEXTS(1);
	Function_7();
	RESET_THIS_TREE_TYPE_CLEARING(iLocal_921);
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	NET_GAMER_SET_ACTOR_OVERRIDE(Function_6(), 0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (Local_454[iVar02] == 0 && Local_454[iVar02] == 4294967295)
		{
			STREAMING_EVICT_ACTOR(Local_454[iVar02], 4294967295);
		}
		if (IS_ACTOR_VALID(StackVal))
		{
			DESTROY_ACTOR(StackVal);
		}
		iVar0++;
	}
	Function_2(&bLocal_404);
	STREAMING_EVICT_ALL();
	DESTROY_CAMERA(bLocal_952);
	SET_HUD_MAP_DRAW_ENABLED(1);
	HUD_ENABLE(true);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	CAMERA_RESET(0);
	if (IS_POINT_LIGHT_VALID(iLocal_392))
	{
		DESTROY_POINT_LIGHT(iLocal_392);
	}
	if (IS_POINT_LIGHT_VALID(iLocal_393))
	{
		DESTROY_POINT_LIGHT(iLocal_393);
	}
	DESTROY_LAYOUT(bLocal_391);
	CLEAR_ALL_CORPSES();
	DESTROY_GC_OBJECTS(0, 1);
	return;
}

void Function_2(bool bParam0) //Position: 0xE31 / 3633
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

void Function_3(var uParam0, int iParam1) //Position: 0xE57 / 3671
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

void Function_4(var uParam0, int iParam1) //Position: 0xF85 / 3973
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0xF9F / 3999
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_6() //Position: 0xFBC / 4028
{
	return 4294967295;
}

void Function_7() //Position: 0xFC3 / 4035
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	return;
}

void Function_8() //Position: 0xFCF / 4047
{
	Global_26119 = Global_83816 | 1073741824;
	Global_28842 = Global_83817 | 1073741824;
	return;
}

void Function_9() //Position: 0xFEF / 4079
{
	Function_10(1024, 0, 1);
	Function_10(1, 0, 0);
	return;
}

void Function_10(bool bParam0, bool bParam1, int iParam2) //Position: 0x1003 / 4099
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

void Function_11(int iParam0, bool bParam1) //Position: 0x102B / 4139
{
	*iParam0 = (*iParam0 - (*iParam0 && bParam1));
	return;
}

void Function_12(int iParam0, bool bParam1) //Position: 0x103E / 4158
{
	*iParam0 = (*iParam0 || bParam1);
	return;
}

void Function_13(bool bParam0, bool bParam1) //Position: 0x104D / 4173
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

void Function_14(int iParam0) //Position: 0x1088 / 4232
{
	Function_15(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x10C1 / 4289
{
	Function_11(uParam0, iParam1);
	return;
}

void Function_16(int iParam0) //Position: 0x10CE / 4302
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

void Function_17(var uParam0, int iParam1) //Position: 0x1127 / 4391
{
	Function_12(uParam0, iParam1);
	return;
}

void Function_18() //Position: 0x1134 / 4404
{
	Function_2(&Local_12 + 4);
	RELEASE_LAYOUT_REF(Local_12);
	return;
}

void Function_19(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x1146 / 4422
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

void Function_20() //Position: 0x116F / 4463
{
	int iVar0;
	
	FLASH_SET_INT("pause_main", "pausetransition.type", 14);
	FLASH_SET_INT("pause_main", "pausetransition.visibility", true);
	FLASH_SET_INT("pause_main", "character_label.visibility", false);
	UI_ENTER("AP_LoadFile");
	iVar0 = 0;
	while (iVar0 <= iLocal_528)
	{
		STREAMING_EVICT_ACTOR(Local_454[iVar02], 4294967295);
		if (IS_ACTOR_VALID(StackVal))
		{
			DESTROY_ACTOR(StackVal);
		}
		iVar0++;
	}
	return;
}

var Function_21() //Position: 0x1248 / 4680
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_22(int iParam0, float fParam1) //Position: 0x125D / 4701
{
	if (Function_23(iParam0))
	{
		if (Function_164(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_23(int iParam0) //Position: 0x1279 / 4729
{
	return Function_24(*iParam0, 1);
}

bool Function_24(var uParam0, bool bParam1) //Position: 0x1286 / 4742
{
	return (uParam0 && bParam1) == 0;
}

void Function_25() //Position: 0x1293 / 4755
{
	Function_26(Function_28());
	return;
}

void Function_26(int iParam0) //Position: 0x129F / 4767
{
	char* cVar0[64];
	
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_27(iParam0) };
	UI_SET_TEXT("MPP_TitleValue", &cVar0);
	strcpy(&cVar0, UI_GET_STRING(&cVar0), 64);
	Global_78480.f_28 = iParam0;
	*(&Global_78480 + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_28 = iParam0;
		*(&Global_76943[GET_LOCAL_SLOT()96] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
	}
	UPDATE_STRING_PROFILE_STAT("MpTitleStringId", &cVar0);
	return;
}

struct<64> Function_27(int iParam0) //Position: 0x1321 / 4897
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = (iParam0 / 1000);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_83864 + 1288[iVar017]) };
	straddi(&Var1, (iParam0 % 1000), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var1;
}

var Function_28() //Position: 0x1353 / 4947
{
	return Global_76886;
}

void Function_29(int iParam0) //Position: 0x135D / 4957
{
	Global_76886 = iParam0;
	return;
}

int Function_30(int iParam0) //Position: 0x1369 / 4969
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int Function_31() //Position: 0x1378 / 4984
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

void Function_32(var uParam0, bool bParam1, bool bParam2) //Position: 0x1496 / 5270
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

void Function_33() //Position: 0x14C3 / 5315
{
	Function_34(Function_36());
	return;
}

void Function_34(int iParam0) //Position: 0x14CF / 5327
{
	if (!Function_35(iParam0))
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

bool Function_35(int iParam0) //Position: 0x14FC / 5372
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

int Function_36() //Position: 0x1513 / 5395
{
	if (!IS_STRING_VALID(&Global_76870))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76870);
}

void Function_37(bool bParam0) //Position: 0x152D / 5421
{
	if (!Function_35(bParam0))
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

void Function_38(bool bParam0) //Position: 0x155C / 5468
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, false, 0);
	Function_69(2);
	if (bParam0)
	{
		Function_69(1);
	}
	else
	{
		Function_68(1);
	}
	Function_39();
	return;
}

void Function_39() //Position: 0x15E5 / 5605
{
	Function_66();
	Function_65();
	Function_65();
	Function_64();
	Function_64();
	Function_63();
	Function_63();
	Function_47();
	Function_47();
	if (!Function_46())
	{
		Function_44();
		Function_43();
		Function_42();
		Function_41();
	}
	Function_40();
	return;
}

void Function_40() //Position: 0x1618 / 5656
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

void Function_41() //Position: 0x171E / 5918
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

void Function_42() //Position: 0x1751 / 5969
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

void Function_43() //Position: 0x18DF / 6367
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

void Function_44() //Position: 0x1A93 / 6803
{
	Function_45(&Global_28260, 1, 0);
	return;
}

void Function_45(int iParam0, bool bParam1, int iParam2) //Position: 0x1AA1 / 6817
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
	
	bVar0 = Function_21();
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

bool Function_46() //Position: 0x1C92 / 7314
{
	return NET_IS_MANAGER_INITIALIZED();
}

struct<8> Function_47() //Position: 0x1C9B / 7323
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
				iVar2 = ((Function_62((50 + iVar4)) + Function_62((183 + iVar4))) + Function_62((90 + iVar4)));
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
	Function_48(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_48(int iParam0, bool bParam1, bool bParam2) //Position: 0x1D36 / 7478
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
		Function_61(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_60(iParam0);
	if (bParam2)
	{
		Function_49(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_49(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1FD1 / 8145
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_59(390))), 32);
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
					bVar19 = (Function_58(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_58(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_56(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_54(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_51(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_50(), &Var9);
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

var Function_50() //Position: 0x25FE / 9726
{
	int iVar0;
	
	return iVar0;
}

var Function_51(int iParam0) //Position: 0x2606 / 9734
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_52(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2617 / 9751
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_53(char* cParam0, char* cParam1) //Position: 0x270C / 9996
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_54(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2725 / 10021
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_103(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_55(Function_103(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_55(int iParam0, int iParam1) //Position: 0x278A / 10122
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_56(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x279C / 10140
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
	if (((Function_57(iParam0) != 19 || Function_57(iParam0) != 17) || Function_57(iParam0) != 10) || Function_57(iParam0) != 9)
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

int Function_57(int iParam0) //Position: 0x28CC / 10444
{
	return Global_35278[iParam020].f_48;
}

float Function_58(int iParam0) //Position: 0x28DB / 10459
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_59(int iParam0) //Position: 0x2914 / 10516
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_60(int iParam0) //Position: 0x2951 / 10577
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

int Function_61(int iParam0, bool bParam1, bool bParam2) //Position: 0x2AEB / 10987
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

int Function_62(bool bParam0) //Position: 0x2D05 / 11525
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_63() //Position: 0x2D46 / 11590
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
		iVar2 = ((Function_62((50 + iVar3) + 15) + Function_62((183 + iVar3) + 15)) + Function_62((90 + iVar3) + 15));
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
	Function_48(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_64() //Position: 0x2DCF / 11727
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
			iVar2 = ((Function_62((50 + iVar3) + 8) + Function_62((183 + iVar3) + 8)) + Function_62((90 + iVar3) + 8));
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
	Function_48(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_65() //Position: 0x2E66 / 11878
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
		iVar2 = ((Function_62((50 + iVar3)) + Function_62((183 + iVar3))) + Function_62((90 + iVar3)));
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
	Function_48(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_66() //Position: 0x2EE5 / 12005
{
	Function_67(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_48(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_67(int iParam0, bool bParam1, int iParam2) //Position: 0x2F0B / 12043
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
	Function_61(iParam0, bParam1, 1);
	Function_60(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_49(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_68(int iParam0) //Position: 0x3115 / 12565
{
	Function_15(&Global_79338, iParam0);
	return;
}

void Function_69(int iParam0) //Position: 0x3124 / 12580
{
	Function_17(&Global_79338, iParam0);
	return;
}

void Function_70(int iParam0) //Position: 0x3133 / 12595
{
	if (!Function_35(iParam0))
	{
		return;
	}
	if (iParam0 > 837 || iParam0 < 975)
	{
		return;
	}
	Global_76887 = iParam0;
	Function_71(9, Global_76887);
	return;
}

void Function_71(int iParam0, int iParam1) //Position: 0x3166 / 12646
{
	(*&Global_78480 + 132)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_76943[GET_LOCAL_SLOT()96] + 132)[iParam0] = iParam1;
	}
	return;
}

void Function_72(bool bParam0) //Position: 0x318F / 12687
{
	if (!Function_35(bParam0))
	{
		return;
	}
	if (bParam0 > 837 || bParam0 < 975)
	{
		return;
	}
	strcpy(&Global_76854, GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam0), 64);
	return;
}

bool Function_73() //Position: 0x31BE / 12734
{
	if (!IS_STRING_VALID(&Global_76854))
	{
		return 4294967295;
	}
	return GET_ACTOR_ENUM_FROM_STRING(&Global_76854);
}

void Function_74(bool bParam0) //Position: 0x31D8 / 12760
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

struct<16> Function_75(bool bParam0, bool bParam1) //Position: 0x31F5 / 12789
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

void Function_76() //Position: 0x322A / 12842
{
	UI_ENTER("LocationText");
	return;
}

void Function_77(int iParam0) //Position: 0x3242 / 12866
{
	Function_168(iParam0, 0.0f);
	return;
}

void Function_78() //Position: 0x324E / 12878
{
	vector3 vVar0;
	bool bVar3;
	
	if (IS_POINT_LIGHT_VALID(iLocal_393))
	{
		DESTROY_POINT_LIGHT(iLocal_393);
	}
	bVar3 = Function_79(bLocal_922);
	if (bVar3)
	{
		if (!GET_ACTOR_OFFSET_WORLD_COORDS(StackVal, &vLocal_379, &vVar0))
		{
		}
	}
}

bool Function_79(int iParam0) //Position: 0x32A6 / 12966
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	Function_88();
	if (iParam0 <= 0 && iParam0 > iLocal_528)
	{
		if (iLocal_400 == 3)
		{
			bVar1 = Local_505[iParam02];
		}
		else
		{
			bVar1 = Local_454[iParam02];
		}
		if ((((((((((bVar1 != 1000 || bVar1 != 996) || bVar1 != 987) || bVar1 != 976) || bVar1 != 982) || bVar1 != 979) || bVar1 != 1006) || bVar1 != 1004) || bVar1 != 1005) || bVar1 != 1007) || bVar1 != 1003)
		{
			return Function_85(bVar1);
		}
		return Function_80(bVar1);
	}
	return iVar0;
}

bool Function_80(bool bParam0) //Position: 0x3339 / 13113
{
	return Function_24((*&Global_83864 + 1976)[Function_84(bParam0)], Function_81(bParam0));
}

bool Function_81(int iParam0) //Position: 0x3355 / 13141
{
	return Function_82((Function_83(iParam0) % 32));
}

bool Function_82(bool bParam0) //Position: 0x3366 / 13158
{
	return SHIFT_LEFT(true, bParam0);
}

int Function_83(int iParam0) //Position: 0x3372 / 13170
{
	return (iParam0 - 837);
}

int Function_84(int iParam0) //Position: 0x337E / 13182
{
	return (Function_83(iParam0) / 32);
}

bool Function_85(int iParam0) //Position: 0x338C / 13196
{
	return Function_86((*&Global_83864 + 1204)[Function_87(iParam0)], 1);
}

int Function_86(var uParam0, int iParam1) //Position: 0x33A4 / 13220
{
	return (uParam0 && iParam1) == 0;
}

bool Function_87(int iParam0) //Position: 0x33B1 / 13233
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

void Function_88() //Position: 0x3496 / 13462
{
	if (iLocal_400 == 3)
	{
		iLocal_528 = 11;
		return;
	}
	iLocal_528 = Function_89(bLocal_925);
	return;
}

int Function_89(int iParam0) //Position: 0x34B2 / 13490
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam0 == iLocal_385)
	{
		return 11;
	}
	iVar0 = 0;
	iVar1 = iLocal_928;
	while (iVar1 >= iLocal_929 && iVar0 > 25)
	{
		bVar2 = iVar1;
		if (IS_ACTORENUM_INSTALLED(bVar2))
		{
			if (Function_90(bVar2) == iParam0)
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int Function_90(bool bParam0) //Position: 0x3501 / 13569
{
	return (GET_ACTORENUM_AVATAR_GROUP(bParam0) / 1000);
}

void Function_91(bool bParam0) //Position: 0x3510 / 13584
{
	bParam0 = bParam0;
	return;
}

void Function_92() //Position: 0x351A / 13594
{
	Function_93();
	return;
}

void Function_93() //Position: 0x3523 / 13603
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (!Function_79(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 1)
			{
				BURN_ACTOR(StackVal, fLocal_363, 1E+09.0f);
				WAIT(true);
				iVar1++;
			}
			iVar1 = 0;
		}
		iVar0++;
	}
	return;
}

void Function_94() //Position: 0x3578 / 13688
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_89(Function_90(Local_454[02]));
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		BURN_ACTOR(StackVal, 0.0f, 1E+09.0f);
		iVar0++;
	}
	return;
}

void Function_95() //Position: 0x35B4 / 13748
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

void Function_96(int iParam0) //Position: 0x35E5 / 13797
{
	iLocal_919 = iParam0;
	return;
}

void Function_97() //Position: 0x35F0 / 13808
{
	bool bVar0;
	struct<16> Var1;
	
	bVar0 = false;
	Function_99();
	bVar0 = false;
	while (bVar0 <= iLocal_528)
	{
		if (Function_79(bVar0))
		{
			GIVE_WEAPON_TO_ACTOR(StackVal, 11, 1.0f, 0, 0);
			GIVE_WEAPON_TO_ACTOR(StackVal, 22, 1.0f, 0, 0);
			GIVE_WEAPON_TO_ACTOR(StackVal, false, 1.0f, 0, 0);
		}
		else
		{
			DEEQUIP_ACCESSORY(StackVal, 0);
		}
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98(bVar0) };
		UI_INCLUDE(&Var1);
		UI_SET_TEXT(&Var1, GET_ACTOR_ENUM_STRING_FROM_ENUM(Local_454[bVar02]));
		bVar0++;
	}
	return;
}

struct<64> Function_98(bool bParam0) //Position: 0x3678 / 13944
{
	char* cVar0[64];
	
	strcpy(&cVar0, "nmp_avatar", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_99() //Position: 0x369E / 13982
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= iLocal_528)
	{
		if (!Function_79(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 1)
			{
				BURN_ACTOR(StackVal, fLocal_363, 1E+09.0f);
				WAIT(true);
				iVar1++;
			}
			iVar1 = 0;
		}
		iVar0++;
	}
	return;
}

void Function_100(bool bParam0, vector3 vParam1, vector3 vParam4) //Position: 0x36F4 / 14068
{
	SET_CAMERA_FOV(*bParam0, 42,97919f);
	SET_CAMERA_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERA_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERA_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERA_POSITION(*bParam0, vParam1);
	SET_CAMERA_ORIENTATION(*bParam0, vParam4, 0);
	RESET_CAMERA_TARGETDOF(*bParam0);
}

int Function_101() //Position: 0x3740 / 14144
{
	int iVar0;
	
	if (iLocal_400 == 3)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= iLocal_528)
	{
		if (!Function_102(StackVal, 1, 0x41700000))
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

bool Function_102(bool bParam0, bool bParam1, float fParam2) //Position: 0x378E / 14222
{
	float fVar0;
	bool bVar1;
	
	if (Function_46() || !bParam1)
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

bool Function_103(int iParam0, bool bParam1) //Position: 0x382B / 14379
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

int Function_104() //Position: 0x383D / 14397
{
	if (Function_106() && Function_105())
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

int Function_105() //Position: 0x3881 / 14465
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	if (IS_ACTOR_VALID(StackVal))
	{
		if (Local_450 != Function_73())
		{
			ACTOR_DISMOUNT_NOW(StackVal);
			DESTROY_ACTOR(StackVal);
			Local_450.f_4 = "";
			Local_450 = 4294967295;
		}
		else
		{
			return 1;
		}
	}
	if (!IS_LAYOUTREF_VALID(bLocal_391))
	{
		bLocal_391 = CREATE_LAYOUT("MP_Enum_Picker");
	}
	vVar0 = { StackVal, StackVal, *(&Local_533[112] + 24) };
	vVar3 = { StackVal, StackVal, *(&Local_533[112] + 36) };
	if (!FIND_GROUND_INTERSECTION(&vVar0, 25.0f, &vVar0, &uVar6))
	{
	}
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	Local_450.f_4 = CREATE_ACTOR_IN_LAYOUT(bLocal_391, "Fake_player", Function_73(), vVar0, vVar3);
	NET_OBJECT_REPLICATION_MODE_END(15);
	Local_450 = Function_73();
	NET_GAMER_ICONS_SHOW_LOCAL(1);
	NET_GAMER_SET_ACTOR_OVERRIDE(StackVal, Function_6());
	if (IS_ACTOR_VALID(StackVal))
	{
		DEEQUIP_ACCESSORY(StackVal, 1);
		SET_ACTOR_INVULNERABILITY(StackVal, true);
		return 1;
	}
	LOG_ERROR("Make_Fake_Actor: This Actor is INVALID!");
	Local_450.f_4 = "";
	Local_450 = 4294967295;
	return 0;
}

int Function_106() //Position: 0x39A9 / 14761
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	if (IS_ACTOR_VALID(StackVal))
	{
		if (Local_452 != Function_36())
		{
			DESTROY_ACTOR(StackVal);
			Local_452.f_4 = "";
			Local_452 = 4294967295;
		}
		else
		{
			return 1;
		}
	}
	if (!IS_LAYOUTREF_VALID(bLocal_391))
	{
		bLocal_391 = CREATE_LAYOUT("MP_Enum_Picker");
	}
	vVar0 = { StackVal, StackVal, *(&Local_533[112] + 24) };
	vVar3 = { StackVal, StackVal, *(&Local_533[112] + 36) };
	if (!FIND_GROUND_INTERSECTION(&vVar0, 25.0f, &vVar0, &uVar6))
	{
	}
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	Local_452.f_4 = CREATE_ACTOR_IN_LAYOUT(bLocal_391, "Fake_horse", Function_36(), vVar0, vVar3);
	NET_OBJECT_REPLICATION_MODE_END(15);
	Local_452 = Function_36();
	if (((Local_452 != 1006 || Local_452 != 1004) || Local_452 != 1005) || Local_452 != 1007)
	{
	}
	else if (Local_452 == 996)
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
		TASK_PRIORITY_SET(StackVal, true);
		ANIMAL_TUNING_SET_ATTRIB_FLOAT(StackVal, 67, -1.0f);
		SET_ACTOR_INVULNERABILITY(StackVal, true);
		return 1;
	}
	LOG_ERROR("Make_Fake_Horse: This Actor is INVALID!");
	Local_452.f_4 = "";
	Local_452 = 4294967295;
	return 0;
}

void Function_107() //Position: 0x3B14 / 15124
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iLocal_528)
	{
		Function_109(Local_454[iVar02], iVar0);
		iVar0++;
	}
	if (IS_POINT_LIGHT_VALID(iLocal_392))
	{
		DESTROY_POINT_LIGHT(iLocal_392);
	}
	iLocal_392 = CREATE_POINT_LIGHT_IN_LAYOUT(StackVal, StackVal, Vector(vLocal_447, Function_50(), bLocal_391) + Vector(0.0f, fLocal_365, 0.0f), 1.0f, 1.0f, 1.0f, (Function_108() * fLocal_364));
	if (IS_POINT_LIGHT_VALID(iLocal_393))
	{
		DESTROY_POINT_LIGHT(iLocal_393);
	}
	return;
}

float Function_108() //Position: 0x3B7A / 15226
{
	return (TO_FLOAT(iLocal_528) * fLocal_361);
}

int Function_109(bool bParam0, bool bParam1) //Position: 0x3B8A / 15242
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	bool bVar10;
	bool bVar11;
	
	if (!IS_LAYOUTREF_VALID(bLocal_391))
	{
		bLocal_391 = CREATE_LAYOUT("MP_Enum_Picker");
	}
	vVar1 = { StackVal, StackVal, *(&Local_533[(4 + bParam1)12] + 24) };
	vVar4 = { StackVal, StackVal, *(&Local_533[(4 + bParam1)12] + 36) };
	vVar1.f_4 = (vVar1.y + 10.0f);
	if (!FIND_GROUND_INTERSECTION(&vVar1, 25.0f, &vVar1, &uVar7))
	{
	}
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bLocal_391, GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam0), bParam0, vVar1, vVar4);
	NET_OBJECT_REPLICATION_MODE_END(15);
	if (IS_ACTOR_VALID(bVar0))
	{
		Local_454[bParam12].f_4 = bVar0;
		DECOR_SET_BOOL(StackVal, "MP_OUTFITTER", true);
		DECOR_SET_BOOL(StackVal, "LobbyGringo", true);
		bVar10 = GET_INDEXED_OBJECT_IN_OBJECTSET(bParam1, Local_12.f_1360);
		if (IS_OBJECT_VALID(bVar10))
		{
			bVar11 = GET_GRINGO_FROM_OBJECT(bVar10);
			if (IS_GRINGO_VALID(bVar11))
			{
				SNAP_ACTOR_TO_GRINGO(StackVal, bVar10, "UseCase1", true, 0, 0);
				TASK_USE_GRINGO(StackVal, bVar11, "UseCase1", 4294967295, 1);
				TASK_PRIORITY_SET(StackVal, true);
			}
		}
		DEEQUIP_ACCESSORY(bVar0, 1);
		SET_ACTOR_INVULNERABILITY(bVar0, true);
		SET_ACTOR_FACTION(bVar0, 1);
		AI_GOAL_LOOK_AT_NEUTRAL(bVar0, -1.0f);
		CLEAR_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(1, Function_21());
		return 1;
	}
	LOG_ERROR("MP_ActorPicker: This Actor is INVALID!");
	Local_454[bParam12].f_4 = "";
	return 0;
}

int Function_110() //Position: 0x3D25 / 15653
{
	int iVar0;
	
	if (iLocal_400 == 3)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= bLocal_528)
	{
		if (!STREAMING_IS_ACTOR_LOADED(Local_454[iVar02], 4294967295))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void Function_111() //Position: 0x3D5A / 15706
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	
	bLocal_528 = false;
	bVar0 = iLocal_928;
	while (bVar0 >= iLocal_929 && bLocal_528 > 25)
	{
		bVar1 = bVar0;
		if (IS_ACTORENUM_INSTALLED(bVar1))
		{
			if (Function_90(bVar1) == bLocal_925)
			{
				Local_454[bLocal_5282] = bVar1;
				STREAMING_REQUEST_ACTOR(bVar0, true, false);
				bLocal_528++;
			}
		}
		bVar0++;
	}
	if (bLocal_528 < 0)
	{
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 13)
	{
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98(bVar0) };
		UI_EXCLUDE(&Var2);
		bVar0++;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= bLocal_528)
	{
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98(bVar0) };
		UI_INCLUDE(&Var2);
		UI_SET_TEXT(&Var2, GET_ACTOR_ENUM_STRING_FROM_ENUM(Local_454[bVar02]));
		bVar0++;
	}
	if (bLocal_528 >= 25)
	{
	}
	return;
}

void Function_112() //Position: 0x3E1B / 15899
{
	bLocal_528 = 11;
	return;
}

void Function_113() //Position: 0x3E26 / 15910
{
	Function_94();
	Function_95();
	return;
}

void Function_114() //Position: 0x3E32 / 15922
{
	int iVar0;
	
	Local_505[02] = 1000;
	Local_505[12] = 996;
	Local_505[22] = 987;
	Local_505[32] = 976;
	Local_505[42] = 982;
	Local_505[52] = 979;
	Local_505[62] = 1006;
	Local_505[72] = 1004;
	Local_505[82] = 1005;
	Local_505[92] = 1007;
	Local_505[102] = 1003;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Function_115(Local_505[iVar02], iVar0);
		iVar0++;
	}
	return;
}

int Function_115(bool bParam0, int iParam1) //Position: 0x3EC1 / 16065
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	
	if (!IS_LAYOUTREF_VALID(bLocal_391))
	{
		bLocal_391 = CREATE_LAYOUT("MP_Enum_Picker");
	}
	vVar1 = { StackVal, StackVal, *(&Local_533[(14 + iParam1)12] + 24) };
	vVar4 = { StackVal, StackVal, *(&Local_533[(14 + iParam1)12] + 36) };
	vVar1.f_4 = (vVar1.y + 10.0f);
	if (!FIND_GROUND_INTERSECTION(&vVar1, 25.0f, &vVar1, &uVar7))
	{
	}
	NET_OBJECT_REPLICATION_MODE_START(15, 0);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bLocal_391, GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam0), bParam0, vVar1, vVar4);
	NET_OBJECT_REPLICATION_MODE_END(15);
	if (IS_ACTOR_VALID(bVar0))
	{
		Local_505[iParam12].f_4 = bVar0;
		if (Function_85(Local_505[iParam12]))
		{
			if (((Local_505[iParam12] != 1006 || Local_505[iParam12] != 1004) || Local_505[iParam12] != 1005) || Local_505[iParam12] != 1007)
			{
			}
			else if (Local_505[iParam12] == 996)
			{
				ACCESSORIZE_HORSE(StackVal, 2);
			}
			else
			{
				ACCESSORIZE_HORSE(StackVal, 3);
			}
		}
		TASK_STAND_STILL(bVar0, -1.0f, 1, 0);
		TASK_PRIORITY_SET(bVar0, true);
		ANIMAL_TUNING_SET_ATTRIB_FLOAT(bVar0, 67, -1.0f);
		SET_ACTOR_INVULNERABILITY(bVar0, true);
		return 1;
	}
	LOG_ERROR("MP_ActorPicker: This Actor is INVALID!");
	Local_505[iParam12].f_4 = "";
	return 0;
}

void Function_116() //Position: 0x4039 / 16441
{
	struct<4> Var0;
	bool bVar4;
	struct<16> Var5;
	int iVar21;
	
	bVar4 = false;
	iLocal_529 = 0;
	iVar21 = (iLocal_926 + ABS(iLocal_927));
	bVar4 = false;
	while (bVar4 <= 26)
	{
		Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_118(bVar4) };
		if (bVar4 < iVar21)
		{
			if (Function_117((iLocal_926 - bVar4)))
			{
				Function_12(&iLocal_529, Function_82(bVar4));
				UI_INCLUDE(&Var5);
				Var0 = { StackVal, StackVal, StackVal, Function_75((iLocal_926 - bVar4), 0) };
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

bool Function_117(int iParam0) //Position: 0x40B7 / 16567
{
	if (iParam0 <= 1)
	{
		return 1;
	}
	if (iParam0 == 3)
	{
		return 1;
	}
	if (Function_304(256) && iParam0 != 1)
	{
		return 1;
	}
	return Function_24((*&Global_78617 + 2652)[iParam0], 1);
}

struct<64> Function_118(bool bParam0) //Position: 0x40F2 / 16626
{
	char* cVar0[64];
	
	strcpy(&cVar0, "mp_avatar_group", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_119() //Position: 0x411E / 16670
{
	Function_158();
	Function_156();
	Function_153();
	Function_152();
	Function_151();
	Function_150();
	Function_149();
	Function_148();
	Function_147();
	Function_146(1);
	Function_145(1);
	Function_144(1);
	Function_143(1);
	Function_142(1);
	if (bLocal_387)
	{
		Function_141();
		Function_140(1);
		Function_139(6);
	}
	if (bLocal_388)
	{
		Function_138();
		Function_137(1);
		Function_139(7);
	}
	if (bLocal_389)
	{
		Function_135();
		Function_120(1);
		Function_139(8);
	}
	return;
}

void Function_120(bool bParam0) //Position: 0x4187 / 16775
{
	if (Function_134(8))
	{
		Function_121(8, bParam0);
	}
	return;
}

void Function_121(int iParam0, bool bParam1) //Position: 0x419C / 16796
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	
	iVar0 = 0;
	iVar2 = 0;
	iVar2 = Function_30(iParam0);
	iVar0 = iVar2;
	while (iVar0 < (&Global_83864 + 1288[iParam017])->f_64)
	{
		iVar1 = (iParam0 * 1000 + iVar0);
		if (iParam0 == 0)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_133(iVar0) };
		}
		else if (iParam0 == 1)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_132(iVar0) };
		}
		else if (iParam0 == 2)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_131(iVar0) };
		}
		else if (iParam0 == 3)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_130(iVar0) };
		}
		else if (iParam0 == 5)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_129(iVar0) };
		}
		else if (iParam0 == 6)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_128(iVar0) };
		}
		else if (iParam0 == 7)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_127(iVar0) };
		}
		else if (iParam0 == 8)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(iVar0) };
		}
		else if (iParam0 == 4)
		{
			Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_125(iVar0) };
		}
		if (Function_124(iVar1) && !Function_123(iVar1))
		{
			Function_122(&Var3, 1);
			if (bParam1)
			{
				UI_SET_TEXT(&Var3, &Var3);
			}
		}
		else if (!Function_124(iVar1))
		{
			Function_122(&Var3, 2);
			if (bParam1)
			{
				UI_SET_TEXT(&Var3, "mp_avatar_locked");
			}
		}
		else
		{
			Function_122(&Var3, 0);
			if (bParam1)
			{
				UI_SET_TEXT(&Var3, &Var3);
			}
		}
		iVar0++;
	}
	return;
}

void Function_122(char* cParam0, int iParam1) //Position: 0x42E6 / 17126
{
	UI_SET_ICON(cParam0, iParam1);
	return;
}

bool Function_123(int iParam0) //Position: 0x42F3 / 17139
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	return Function_24((*&Global_84364 + 4[(iParam0 / 1000)10] + 20)[(iVar0 / 32)], Function_82((iVar0 % 32)));
}

bool Function_124(int iParam0) //Position: 0x4323 / 17187
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	return Function_24((*&Global_84364 + 4[(iParam0 / 1000)10])[(iVar0 / 32)], Function_82((iVar0 % 32)));
}

struct<64> Function_125(bool bParam0) //Position: 0x4351 / 17233
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_stat_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_126(bool bParam0) //Position: 0x4379 / 17273
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_dlc_four_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_127(bool bParam0) //Position: 0x43A5 / 17317
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_dlc_three_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_128(bool bParam0) //Position: 0x43D2 / 17362
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_dlc_two_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_129(bool bParam0) //Position: 0x43FD / 17405
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_dlc_one_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_130(bool bParam0) //Position: 0x4428 / 17448
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_pvp_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_131(bool bParam0) //Position: 0x444F / 17487
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_weap_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_132(bool bParam0) //Position: 0x4477 / 17527
{
	char* cVar0[64];
	
	strcpy(&cVar0, "title_amb_", 64);
	stradd(&cVar0, I2STR(bParam0), 64);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<64> Function_133(bool bParam0) //Position: 0x449E / 17566
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

bool Function_134(bool bParam0) //Position: 0x44E4 / 17636
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
	return iVar0 != Function_82(bParam0);
}

void Function_135() //Position: 0x4626 / 17958
{
	if (Function_136(8))
	{
		Function_122("title_group_dlc4", 1);
	}
	else
	{
		Function_122("title_group_dlc4", 0);
	}
	return;
}

bool Function_136(int iParam0) //Position: 0x4665 / 18021
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = Function_30(iParam0);
	iVar0 = iVar1;
	while (iVar0 < (&Global_83864 + 1288[iParam017])->f_64)
	{
		iVar2 = (iParam0 * 1000 + iVar0);
		if (Function_124(iVar2) && !Function_123(iVar2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_137(bool bParam0) //Position: 0x46B3 / 18099
{
	if (Function_134(7))
	{
		Function_121(7, bParam0);
	}
	return;
}

void Function_138() //Position: 0x46C6 / 18118
{
	if (Function_136(7))
	{
		Function_122("title_group_dlc3", 1);
	}
	else
	{
		Function_122("title_group_dlc3", 0);
	}
	return;
}

void Function_139(int iParam0) //Position: 0x4704 / 18180
{
	bool bVar0;
	struct<16> Var1;
	
	bVar0 = true;
	bVar0 = true;
	while (bVar0 < 50)
	{
		if (iParam0 == 5)
		{
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_129(bVar0) };
		}
		else if (iParam0 == 6)
		{
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_128(bVar0) };
		}
		else if (iParam0 == 7)
		{
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_127(bVar0) };
		}
		else if (iParam0 == 8)
		{
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(bVar0) };
		}
		if (bVar0 >= (&Global_83864 + 1288[iParam017])->f_64)
		{
			UI_EXCLUDE(&Var1);
		}
		bVar0++;
	}
	return;
}

void Function_140(bool bParam0) //Position: 0x4781 / 18305
{
	if (Function_134(6))
	{
		Function_121(6, bParam0);
	}
	return;
}

void Function_141() //Position: 0x4794 / 18324
{
	if (Function_136(6))
	{
		Function_122("title_group_dlc2", 1);
	}
	else
	{
		Function_122("title_group_dlc2", 0);
	}
	return;
}

void Function_142(bool bParam0) //Position: 0x47D2 / 18386
{
	if (Function_134(4))
	{
		Function_121(4, bParam0);
	}
	return;
}

void Function_143(bool bParam0) //Position: 0x47E5 / 18405
{
	if (Function_134(3))
	{
		Function_121(3, bParam0);
	}
	return;
}

void Function_144(bool bParam0) //Position: 0x47F8 / 18424
{
	if (Function_134(2))
	{
		Function_121(2, bParam0);
	}
	return;
}

void Function_145(bool bParam0) //Position: 0x480B / 18443
{
	if (Function_134(1))
	{
		Function_121(1, bParam0);
	}
	return;
}

void Function_146(int iParam0) //Position: 0x481E / 18462
{
	if (Function_134(0))
	{
		Function_121(0, iParam0);
	}
	return;
}

void Function_147() //Position: 0x4831 / 18481
{
	if (Function_136(4))
	{
		Function_122("title_group_stat", 1);
	}
	else
	{
		Function_122("title_group_stat", 0);
	}
	return;
}

void Function_148() //Position: 0x486F / 18543
{
	if (Function_136(3))
	{
		Function_122("title_group_pvp", 1);
	}
	else
	{
		Function_122("title_group_pvp", 0);
	}
	return;
}

void Function_149() //Position: 0x48AB / 18603
{
	if (Function_136(2))
	{
		Function_122("title_group_weap", 1);
	}
	else
	{
		Function_122("title_group_weap", 0);
	}
	return;
}

void Function_150() //Position: 0x48E9 / 18665
{
	if (Function_136(1))
	{
		Function_122("title_group_amb", 1);
	}
	else
	{
		Function_122("title_group_amb", 0);
	}
	return;
}

void Function_151() //Position: 0x4925 / 18725
{
	if (Function_136(0))
	{
		Function_122("title_group_xplvl", 1);
	}
	else
	{
		Function_122("title_group_xplvl", 0);
	}
	return;
}

void Function_152() //Position: 0x4965 / 18789
{
	if (Function_136(0))
	{
		Function_122("mp_fe_profile_title", 1);
		return;
	}
	if (Function_136(1))
	{
		Function_122("mp_fe_profile_title", 1);
		return;
	}
	if (Function_136(2))
	{
		Function_122("mp_fe_profile_title", 1);
		return;
	}
	if (Function_136(3))
	{
		Function_122("mp_fe_profile_title", 1);
		return;
	}
	if (Function_136(5))
	{
		Function_122("mp_fe_profile_title", 1);
		return;
	}
	if (Function_136(6))
	{
		Function_122("mp_fe_profile_title", 1);
		return;
	}
	if (Function_136(7))
	{
		Function_122("mp_fe_profile_title", 1);
		return;
	}
	if (Function_136(8))
	{
		Function_122("mp_fe_profile_title", 1);
		return;
	}
	if (Function_136(4))
	{
		Function_122("mp_fe_profile_title", 1);
		return;
	}
	Function_122("mp_fe_profile_title", 0);
	return;
}

void Function_153() //Position: 0x4AB8 / 19128
{
	bool bVar0;
	
	bVar0 = bLocal_927;
	bVar0 = bLocal_927;
	while (bVar0 < iLocal_926)
	{
		if (Function_117((iLocal_926 - bVar0)))
		{
			if (Function_154(bVar0))
			{
				Function_122("mp_fe_profile_avatar", 1);
				return;
			}
		}
		bVar0++;
	}
	Function_122("mp_fe_profile_avatar", 0);
	return;
}

bool Function_154(int iParam0) //Position: 0x4B24 / 19236
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iLocal_928;
	while (iVar0 < iLocal_929)
	{
		bVar1 = iVar0;
		if (IS_ACTORENUM_INSTALLED(bVar1))
		{
			if (Function_90(bVar1) == iParam0)
			{
				if (Function_80(bVar1) && !Function_155(bVar1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_155(bool bParam0) //Position: 0x4B68 / 19304
{
	return Function_24((*&Global_84364 + 748)[Function_84(bParam0)], Function_81(bParam0));
}

void Function_156() //Position: 0x4B84 / 19332
{
	bool bVar0;
	
	bVar0 = bLocal_927;
	bVar0 = bLocal_927;
	while (bVar0 < iLocal_926)
	{
		if (Function_117((iLocal_926 - bVar0)))
		{
			Function_157(bVar0);
		}
		bVar0++;
	}
	return;
}

void Function_157(int iParam0) //Position: 0x4BB6 / 19382
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<16> Var3;
	
	iVar0 = iLocal_928;
	bVar2 = (iLocal_926 - iParam0);
	Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_118(bVar2) };
	while (iVar0 < iLocal_929)
	{
		bVar1 = iVar0;
		if (IS_ACTORENUM_INSTALLED(bVar1))
		{
			if (Function_90(bVar1) == iParam0)
			{
				if (Function_80(bVar1) && !Function_155(bVar1))
				{
					Function_122(&Var3, 1);
					return;
				}
			}
		}
		iVar0++;
	}
	Function_122(&Var3, 0);
	return;
}

void Function_158() //Position: 0x4C16 / 19478
{
	bool bVar0;
	
	bVar0 = false;
	if (Function_85(1000) && !Function_159(1000))
	{
		bVar0 = true;
	}
	else if (Function_85(996) && !Function_159(996))
	{
		bVar0 = true;
	}
	else if (Function_85(987) && !Function_159(987))
	{
		bVar0 = true;
	}
	else if (Function_85(976) && !Function_159(976))
	{
		bVar0 = true;
	}
	else if (Function_85(982) && !Function_159(982))
	{
		bVar0 = true;
	}
	else if (Function_85(979) && !Function_159(979))
	{
		bVar0 = true;
	}
	else if (Function_85(1006) && !Function_159(1006))
	{
		bVar0 = true;
	}
	else if (Function_85(1004) && !Function_159(1004))
	{
		bVar0 = true;
	}
	else if (Function_85(1005) && !Function_159(1005))
	{
		bVar0 = true;
	}
	else if (Function_85(1007) && !Function_159(1007))
	{
		bVar0 = true;
	}
	else if (Function_85(1003) && !Function_159(1003))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_122("mp_fe_profile_mount", 1);
	}
	else
	{
		Function_122("mp_fe_profile_mount", 0);
	}
	return;
}

bool Function_159(bool bParam0) //Position: 0x4D55 / 19797
{
	return Function_24(Global_84364.f_772, Function_82(Function_87(bParam0)));
}

void Function_160() //Position: 0x4D6D / 19821
{
	Local_533[012] = { StackVal, StackVal, *(&Local_12 + 628[06]) };
	*(&Local_533[012] + 12) = { StackVal, StackVal, *(&Local_12 + 628[06] + 12) };
	*(&Local_533[012] + 24) = { StackVal, StackVal, *(&Local_12 + 596[06]) };
	*(&Local_533[012] + 36) = { StackVal, StackVal, *(&Local_12 + 596[06] + 12) };
	Local_533[112] = { StackVal, StackVal, *(&Local_12 + 628[06]) };
	*(&Local_533[112] + 12) = { StackVal, StackVal, *(&Local_12 + 628[06] + 12) };
	*(&Local_533[112] + 24) = { StackVal, StackVal, *(&Local_12 + 596[06]) };
	*(&Local_533[112] + 36) = { StackVal, StackVal, *(&Local_12 + 596[06] + 12) };
	Local_533[212] = { StackVal, StackVal, *(&Local_12 + 628[16]) };
	*(&Local_533[212] + 12) = { StackVal, StackVal, *(&Local_12 + 628[16] + 12) };
	*(&Local_533[212] + 24) = { StackVal, StackVal, *(&Local_12 + 596[06]) };
	*(&Local_533[212] + 36) = { StackVal, StackVal, *(&Local_12 + 596[06] + 12) };
	Local_533[312] = { StackVal, StackVal, *(&Local_12 + 628[26]) };
	*(&Local_533[312] + 12) = { StackVal, StackVal, *(&Local_12 + 628[26] + 12) };
	*(&Local_533[312] + 24) = { StackVal, StackVal, *(&Local_12 + 596[06]) };
	*(&Local_533[312] + 36) = { StackVal, StackVal, *(&Local_12 + 596[06] + 12) };
	Local_533[412] = { StackVal, StackVal, *(&Local_12 + 348[06]) };
	*(&Local_533[412] + 12) = { StackVal, StackVal, *(&Local_12 + 348[06] + 12) };
	Local_533[512] = { StackVal, StackVal, *(&Local_12 + 348[16]) };
	*(&Local_533[512] + 12) = { StackVal, StackVal, *(&Local_12 + 348[16] + 12) };
	Local_533[612] = { StackVal, StackVal, *(&Local_12 + 348[26]) };
	*(&Local_533[612] + 12) = { StackVal, StackVal, *(&Local_12 + 348[26] + 12) };
	Local_533[712] = { StackVal, StackVal, *(&Local_12 + 348[36]) };
	*(&Local_533[712] + 12) = { StackVal, StackVal, *(&Local_12 + 348[36] + 12) };
	Local_533[812] = { StackVal, StackVal, *(&Local_12 + 348[46]) };
	*(&Local_533[812] + 12) = { StackVal, StackVal, *(&Local_12 + 348[46] + 12) };
	Local_533[912] = { StackVal, StackVal, *(&Local_12 + 348[56]) };
	*(&Local_533[912] + 12) = { StackVal, StackVal, *(&Local_12 + 348[56] + 12) };
	Local_533[1012] = { StackVal, StackVal, *(&Local_12 + 348[66]) };
	*(&Local_533[1012] + 12) = { StackVal, StackVal, *(&Local_12 + 348[66] + 12) };
	Local_533[1112] = { StackVal, StackVal, *(&Local_12 + 348[76]) };
	*(&Local_533[1112] + 12) = { StackVal, StackVal, *(&Local_12 + 348[76] + 12) };
	Local_533[1212] = { StackVal, StackVal, *(&Local_12 + 348[86]) };
	*(&Local_533[1212] + 12) = { StackVal, StackVal, *(&Local_12 + 348[86] + 12) };
	Local_533[1312] = { StackVal, StackVal, *(&Local_12 + 348[96]) };
	*(&Local_533[1312] + 12) = { StackVal, StackVal, *(&Local_12 + 348[96] + 12) };
	Function_161(0, 4);
	Function_161(1, 5);
	Function_161(2, 6);
	Function_161(3, 7);
	Function_161(4, 8);
	Function_161(5, 9);
	Function_161(6, 10);
	Function_161(7, 11);
	Function_161(8, 12);
	Function_161(9, 13);
	Local_533[1412] = { StackVal, StackVal, *(&Local_12 + 980[06]) };
	*(&Local_533[1412] + 12) = { StackVal, StackVal, *(&Local_12 + 980[06] + 12) };
	*(&Local_533[1412] + 24) = { StackVal, StackVal, *(&Local_12 + 708[06]) };
	*(&Local_533[1412] + 36) = { StackVal, StackVal, *(&Local_12 + 708[06] + 12) };
	Local_533[1512] = { StackVal, StackVal, *(&Local_12 + 980[16]) };
	*(&Local_533[1512] + 12) = { StackVal, StackVal, *(&Local_12 + 980[16] + 12) };
	*(&Local_533[1512] + 24) = { StackVal, StackVal, *(&Local_12 + 708[16]) };
	*(&Local_533[1512] + 36) = { StackVal, StackVal, *(&Local_12 + 708[16] + 12) };
	Local_533[1612] = { StackVal, StackVal, *(&Local_12 + 980[26]) };
	*(&Local_533[1612] + 12) = { StackVal, StackVal, *(&Local_12 + 980[26] + 12) };
	*(&Local_533[1612] + 24) = { StackVal, StackVal, *(&Local_12 + 708[26]) };
	*(&Local_533[1612] + 36) = { StackVal, StackVal, *(&Local_12 + 708[26] + 12) };
	Local_533[1712] = { StackVal, StackVal, *(&Local_12 + 980[36]) };
	*(&Local_533[1712] + 12) = { StackVal, StackVal, *(&Local_12 + 980[36] + 12) };
	*(&Local_533[1712] + 24) = { StackVal, StackVal, *(&Local_12 + 708[36]) };
	*(&Local_533[1712] + 36) = { StackVal, StackVal, *(&Local_12 + 708[36] + 12) };
	Local_533[1812] = { StackVal, StackVal, *(&Local_12 + 980[46]) };
	*(&Local_533[1812] + 12) = { StackVal, StackVal, *(&Local_12 + 980[46] + 12) };
	*(&Local_533[1812] + 24) = { StackVal, StackVal, *(&Local_12 + 708[46]) };
	*(&Local_533[1812] + 36) = { StackVal, StackVal, *(&Local_12 + 708[46] + 12) };
	Local_533[1912] = { StackVal, StackVal, *(&Local_12 + 980[56]) };
	*(&Local_533[1912] + 12) = { StackVal, StackVal, *(&Local_12 + 980[56] + 12) };
	*(&Local_533[1912] + 24) = { StackVal, StackVal, *(&Local_12 + 708[56]) };
	*(&Local_533[1912] + 36) = { StackVal, StackVal, *(&Local_12 + 708[56] + 12) };
	Local_533[2012] = { StackVal, StackVal, *(&Local_12 + 980[66]) };
	*(&Local_533[2012] + 12) = { StackVal, StackVal, *(&Local_12 + 980[66] + 12) };
	*(&Local_533[2012] + 24) = { StackVal, StackVal, *(&Local_12 + 708[66]) };
	*(&Local_533[2012] + 36) = { StackVal, StackVal, *(&Local_12 + 708[66] + 12) };
	Local_533[2112] = { StackVal, StackVal, *(&Local_12 + 980[76]) };
	*(&Local_533[2112] + 12) = { StackVal, StackVal, *(&Local_12 + 980[76] + 12) };
	*(&Local_533[2112] + 24) = { StackVal, StackVal, *(&Local_12 + 708[76]) };
	*(&Local_533[2112] + 36) = { StackVal, StackVal, *(&Local_12 + 708[76] + 12) };
	Local_533[2212] = { StackVal, StackVal, *(&Local_12 + 980[86]) };
	*(&Local_533[2212] + 12) = { StackVal, StackVal, *(&Local_12 + 980[86] + 12) };
	*(&Local_533[2212] + 24) = { StackVal, StackVal, *(&Local_12 + 708[86]) };
	*(&Local_533[2212] + 36) = { StackVal, StackVal, *(&Local_12 + 708[86] + 12) };
	Local_533[2312] = { StackVal, StackVal, *(&Local_12 + 980[96]) };
	*(&Local_533[2312] + 12) = { StackVal, StackVal, *(&Local_12 + 980[96] + 12) };
	*(&Local_533[2312] + 24) = { StackVal, StackVal, *(&Local_12 + 708[96]) };
	*(&Local_533[2312] + 36) = { StackVal, StackVal, *(&Local_12 + 708[96] + 12) };
	Local_533[2412] = { StackVal, StackVal, *(&Local_12 + 980[106]) };
	*(&Local_533[2412] + 12) = { StackVal, StackVal, *(&Local_12 + 980[106] + 12) };
	*(&Local_533[2412] + 24) = { StackVal, StackVal, *(&Local_12 + 708[106]) };
	*(&Local_533[2412] + 36) = { StackVal, StackVal, *(&Local_12 + 708[106] + 12) };
	Local_533[2612] = { StackVal, StackVal, *(&Local_12 + 1252[06]) };
	*(&Local_533[2612] + 12) = { StackVal, StackVal, *(&Local_12 + 1252[06] + 12) };
	*(&Local_533[2612] + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Local_533[2612] + 36) = { 0.0f, 0.0f, 0.0f };
	Local_533[2712] = { StackVal, StackVal, *(&Local_12 + 1252[16]) };
	*(&Local_533[2712] + 12) = { StackVal, StackVal, *(&Local_12 + 1252[16] + 12) };
	*(&Local_533[2712] + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Local_533[2712] + 36) = { 0.0f, 0.0f, 0.0f };
	Local_533[2812] = { StackVal, StackVal, *(&Local_12 + 1252[26]) };
	*(&Local_533[2812] + 12) = { StackVal, StackVal, *(&Local_12 + 1252[26] + 12) };
	*(&Local_533[2812] + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Local_533[2812] + 36) = { 0.0f, 0.0f, 0.0f };
	Local_533[2912] = { StackVal, StackVal, *(&Local_12 + 1332[06]) };
	*(&Local_533[2912] + 12) = { StackVal, StackVal, *(&Local_12 + 1332[06] + 12) };
	*(&Local_533[2912] + 24) = { StackVal, StackVal, *(&Local_12 + 596[06]) };
	*(&Local_533[2912] + 36) = { StackVal, StackVal, *(&Local_12 + 596[06] + 12) };
	return;
}

void Function_161(bool bParam0, int iParam1) //Position: 0x5579 / 21881
{
	bool bVar0;
	
	bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bParam0, Local_12.f_1360);
	if (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &Local_533[iParam112] + 24);
		GET_OBJECT_ORIENTATION(bVar0, &Local_533[iParam112] + 36);
	}
	return;
}

void Function_162() //Position: 0x55B1 / 21937
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
	
	Function_163(4, 1);
	uVar0 = uVar0;
	Local_12 = CREATE_LAYOUT("MP_outfitter_layout_layout");
	Local_12.f_344 = CREATE_OBJECTSET_IN_LAYOUT("GringoCamsSet", Local_12, 8, 0);
	*(&Local_12 + 348[06]) = { -130,47f, 130,55f, 900,1f };
	*(&Local_12 + 348[06] + 12) = { 2,86f, 59,22f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo1", -130,47f, 130,55f, 900,1f, 2,86f, 59,22f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_12.f_344);
	*(&Local_12 + 348[16]) = { -129,47f, 130,97f, 899,22f };
	*(&Local_12 + 348[16] + 12) = { -7.0f, 65,21f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo2", -129,47f, 130,97f, 899,22f, -7.0f, 65,21f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_12.f_344);
	*(&Local_12 + 348[26]) = { -127,81f, 130,86f, 899,21f };
	*(&Local_12 + 348[26] + 12) = { -14,7f, 62,34f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo3", -127,81f, 130,86f, 899,21f, -14,7f, 62,34f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_12.f_344);
	*(&Local_12 + 348[36]) = { -128,33f, 131,09f, 897,86f };
	*(&Local_12 + 348[36] + 12) = { -8,71f, 62,45f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo4", -128,33f, 131,09f, 897,86f, -8,71f, 62,45f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_12.f_344);
	*(&Local_12 + 348[46]) = { -127,98f, 131,1f, 897,6f };
	*(&Local_12 + 348[46] + 12) = { -13,22f, 46,65f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo5", -127,98f, 131,1f, 897,6f, -13,22f, 46,65f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_12.f_344);
	*(&Local_12 + 348[56]) = { -128,12f, 130,75f, 895,26f };
	*(&Local_12 + 348[56] + 12) = { -6,55f, 56,57f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo6", -128,12f, 130,75f, 895,26f, -6,55f, 56,57f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_12.f_344);
	*(&Local_12 + 348[66]) = { -128,06f, 130,83f, 894,45f };
	*(&Local_12 + 348[66] + 12) = { 6,82f, 20,72f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo7", -128,06f, 130,83f, 894,45f, 6,82f, 20,72f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_12.f_344);
	*(&Local_12 + 348[76]) = { -127,3f, 130,52f, 895,28f };
	*(&Local_12 + 348[76] + 12) = { -5,1f, -6,28f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo8", -127,3f, 130,52f, 895,28f, -5,1f, -6,28f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_12.f_344);
	*(&Local_12 + 348[86]) = { -125,96f, 130,47f, 897,64f };
	*(&Local_12 + 348[86] + 12) = { -3,85f, 1,15f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo9", -125,96f, 130,47f, 897,64f, -3,85f, 1,15f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_12.f_344);
	*(&Local_12 + 348[96]) = { -124,74f, 130,53f, 895,38f };
	*(&Local_12 + 348[96] + 12) = { 2,24f, 12,27f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_12, "Gringo10", -124,74f, 130,53f, 895,38f, 2,24f, 12,27f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_12.f_344);
	Local_12.f_592 = CREATE_OBJECTSET_IN_LAYOUT("PlayerPositionSet", Local_12, 8, 0);
	*(&Local_12 + 596[06]) = { -112f, 128,4286f, 906,8375f };
	*(&Local_12 + 596[06] + 12) = { 0.0f, 68,99164f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_12, "Player", -112f, 128,4286f, 906,8375f, 0.0f, 68,99164f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_12.f_592);
	Local_12.f_624 = CREATE_OBJECTSET_IN_LAYOUT("PlayerCamSet", Local_12, 8, 0);
	*(&Local_12 + 628[06]) = { -113,4391f, 130,7494f, 901,4674f };
	*(&Local_12 + 628[06] + 12) = { -8,895674f, 194,1456f, -1,267944f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_12, "PlayerCam1", -113,4391f, 130,7494f, 901,4674f, -8,895674f, 194,1456f, -1,267944f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_12.f_624);
	*(&Local_12 + 628[16]) = { -116,5024f, 130,7859f, 903,4276f };
	*(&Local_12 + 628[16] + 12) = { -9,355364f, -126,8409f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_12, "PlayerCam2", -116,5024f, 130,7859f, 903,4276f, -9,355364f, -126,8409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_12.f_624);
	*(&Local_12 + 628[26]) = { -114,7868f, 131,0018f, 902,7865f };
	*(&Local_12 + 628[26] + 12) = { -2,102463f, -144,7327f, -0,1208514f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_12, "PlayerCam3", -114,7868f, 131,0018f, 902,7865f, -2,102463f, -144,7327f, -0,1208514f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_12.f_624);
	Local_12.f_704 = CREATE_OBJECTSET_IN_LAYOUT("MountPositionsSet", Local_12, 8, 0);
	*(&Local_12 + 708[06]) = { -107,754f, 126,494f, 877,2244f };
	*(&Local_12 + 708[06] + 12) = { 0.0f, 198,5479f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount1", -107,754f, 126,494f, 877,2244f, 0.0f, 198,5479f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_12.f_704);
	*(&Local_12 + 708[16]) = { -106,035f, 126,494f, 878,813f };
	*(&Local_12 + 708[16] + 12) = { 0.0f, 114,3112f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount2", -106,035f, 126,494f, 878,813f, 0.0f, 114,3112f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_12.f_704);
	*(&Local_12 + 708[26]) = { -102,539f, 126,494f, 878,5388f };
	*(&Local_12 + 708[26] + 12) = { 0.0f, 111,4093f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount3", -102,539f, 126,494f, 878,5388f, 0.0f, 111,4093f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_12.f_704);
	*(&Local_12 + 708[36]) = { -101,2357f, 126,1946f, 879,9998f };
	*(&Local_12 + 708[36] + 12) = { 0.0f, 111,6339f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount4", -101,2357f, 126,1946f, 879,9998f, 0.0f, 111,6339f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_12.f_704);
	*(&Local_12 + 708[46]) = { -99,99998f, 126,3207f, 882,3996f };
	*(&Local_12 + 708[46] + 12) = { 0.0f, 151,1803f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount5", -99,99998f, 126,3207f, 882,3996f, 0.0f, 151,1803f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_12.f_704);
	*(&Local_12 + 708[56]) = { -98,84794f, 126,2752f, 883,9999f };
	*(&Local_12 + 708[56] + 12) = { 0.0f, 112,0487f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount6", -98,84794f, 126,2752f, 883,9999f, 0.0f, 112,0487f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_12.f_704);
	*(&Local_12 + 708[66]) = { -97,59049f, 126,0364f, 885,5903f };
	*(&Local_12 + 708[66] + 12) = { 0.0f, 158,2526f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount7", -97,59049f, 126,0364f, 885,5903f, 0.0f, 158,2526f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_12.f_704);
	*(&Local_12 + 708[76]) = { -100,9793f, 127,4979f, 895,9998f };
	*(&Local_12 + 708[76] + 12) = { 0.0f, 130,1366f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount8", -100,9793f, 127,4979f, 895,9998f, 0.0f, 130,1366f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_12.f_704);
	*(&Local_12 + 708[86]) = { -100,8922f, 127,4979f, 899,0063f };
	*(&Local_12 + 708[86] + 12) = { 0.0f, 59,89041f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount9", -100,8922f, 127,4979f, 899,0063f, 0.0f, 59,89041f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_12.f_704);
	*(&Local_12 + 708[96]) = { -103,419f, 127,4979f, 900,5145f };
	*(&Local_12 + 708[96] + 12) = { 0.0f, -3,060332f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount10", -103,419f, 127,4979f, 900,5145f, 0.0f, -3,060332f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_12.f_704);
	*(&Local_12 + 708[106]) = { -105,885f, 127,4979f, 897,6561f };
	*(&Local_12 + 708[106] + 12) = { 0.0f, -43,60732f, 0.0f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_12, "Mount11", -105,885f, 127,4979f, 897,6561f, 0.0f, -43,60732f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_12.f_704);
	Local_12.f_976 = CREATE_OBJECTSET_IN_LAYOUT("MountCamsSet", Local_12, 8, 0);
	*(&Local_12 + 980[06]) = { -110,35f, 128,58f, 880,36f };
	*(&Local_12 + 980[06] + 12) = { -17,13f, -38,3f, 0.0f };
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam1", -110,35f, 128,58f, 880,36f, -17,13f, -38,3f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_12.f_976);
	*(&Local_12 + 980[16]) = { -107,55f, 128,98f, 882,88f };
	*(&Local_12 + 980[16] + 12) = { -21,19f, -17,1f, 0.0f };
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam2", -107,55f, 128,98f, 882,88f, -21,19f, -17,1f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_12.f_976);
	*(&Local_12 + 980[26]) = { -105,26f, 128,21f, 881,49f };
	*(&Local_12 + 980[26] + 12) = { -10,01f, -32,07f, 0.0f };
	bVar28 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam3", -105,26f, 128,21f, 881,49f, -10,01f, -32,07f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar28, Local_12.f_976);
	*(&Local_12 + 980[36]) = { -103,47f, 128,58f, 883,39f };
	*(&Local_12 + 980[36] + 12) = { -17,96f, -27,31f, 0.0f };
	bVar29 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam4", -103,47f, 128,58f, 883,39f, -17,96f, -27,31f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar29, Local_12.f_976);
	*(&Local_12 + 980[46]) = { -103,78f, 128,75f, 883,94f };
	*(&Local_12 + 980[46] + 12) = { -18,68f, -71,02f, 0.0f };
	bVar30 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam5", -103,78f, 128,75f, 883,94f, -18,68f, -71,02f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar30, Local_12.f_976);
	*(&Local_12 + 980[56]) = { -100,78f, 128,96f, 887,61f };
	*(&Local_12 + 980[56] + 12) = { -21,26f, -22,71f, 0.0f };
	bVar31 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam6", -100,78f, 128,96f, 887,61f, -21,26f, -22,71f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar31, Local_12.f_976);
	*(&Local_12 + 980[66]) = { -100,92f, 127,3f, 886,84f };
	*(&Local_12 + 980[66] + 12) = { -4,62f, -77,12f, 0.0f };
	bVar32 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam7", -100,92f, 127,3f, 886,84f, -4,62f, -77,12f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar32, Local_12.f_976);
	*(&Local_12 + 980[76]) = { -104,66f, 130,01f, 894,6f };
	*(&Local_12 + 980[76] + 12) = { -23,62f, -117.0f, 0.0f };
	bVar33 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam8", -104,66f, 130,01f, 894,6f, -23,62f, -117.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar33, Local_12.f_976);
	*(&Local_12 + 980[86]) = { -104,71f, 129,47f, 898,06f };
	*(&Local_12 + 980[86] + 12) = { -16,44f, -97,82f, 0.0f };
	bVar34 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam9", -104,71f, 129,47f, 898,06f, -16,44f, -97,82f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar34, Local_12.f_976);
	*(&Local_12 + 980[96]) = { -104,64f, 129,44f, 897,32f };
	*(&Local_12 + 980[96] + 12) = { -20,32f, -152,03f, 0.0f };
	bVar35 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam10", -104,64f, 129,44f, 897,32f, -20,32f, -152,03f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar35, Local_12.f_976);
	*(&Local_12 + 980[106]) = { -106,29f, 129,17f, 894,63f };
	*(&Local_12 + 980[106] + 12) = { -16,49f, -166,12f, 0.0f };
	bVar36 = CREATE_POINT_IN_LAYOUT(Local_12, "MCam11", -106,29f, 129,17f, 894,63f, -16,49f, -166,12f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar36, Local_12.f_976);
	Local_12.f_1248 = CREATE_OBJECTSET_IN_LAYOUT("ObjectCamsSet", Local_12, 8, 0);
	*(&Local_12 + 1252[06]) = { -131,563f, 134,43f, 908,421f };
	*(&Local_12 + 1252[06] + 12) = { -16,569f, -3,78f, 0.0f };
	bVar37 = CREATE_POINT_IN_LAYOUT(Local_12, "ObjCam1", -131,563f, 134,43f, 908,421f, -16,569f, -3,78f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar37, Local_12.f_1248);
	*(&Local_12 + 1252[16]) = { -117,246f, 134,498f, 899,047f };
	*(&Local_12 + 1252[16] + 12) = { -14,524f, 76,989f, 0.0f };
	bVar38 = CREATE_POINT_IN_LAYOUT(Local_12, "ObjCam2", -117,246f, 134,498f, 899,047f, -14,524f, 76,989f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar38, Local_12.f_1248);
	*(&Local_12 + 1252[26]) = { -124,204f, 134,864f, 906,368f };
	*(&Local_12 + 1252[26] + 12) = { -21,377f, 33,989f, 0.0f };
	bVar39 = CREATE_POINT_IN_LAYOUT(Local_12, "ObjCam3", -124,204f, 134,864f, 906,368f, -21,377f, 33,989f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar39, Local_12.f_1248);
	Local_12.f_1328 = CREATE_OBJECTSET_IN_LAYOUT("TitlesCamsSet", Local_12, 8, 0);
	*(&Local_12 + 1332[06]) = { -113,5283f, 131,0015f, 903,6737f };
	*(&Local_12 + 1332[06] + 12) = { -6,486446f, 215,2253f, 0.0f };
	bVar40 = CREATE_POINT_IN_LAYOUT(Local_12, "nTitleCam1", -113,5283f, 131,0015f, 903,6737f, -6,486446f, 215,2253f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar40, Local_12.f_1328);
	Local_12.f_1360 = CREATE_OBJECTSET_IN_LAYOUT(Function_50(), Local_12, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_smokelean_e_any_MP", "stand_smokelean_e_any_MP", -132,002f, 129,506f, 899,052f, 0.0f, -134,15f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "spittoon_MP", "spittoon_MP", -131,349f, 129,506f, 898,154f, 0.0f, -3,78f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_cleanknife_MP", "sit_cleanknife_MP", -129,8946f, 129,506f, 898,1284f, 0.0f, 249,17f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "stand_dnd_rowdydrink_MP", "stand_dnd_rowdydrink_MP", -130,744f, 129,506f, 896,619f, 0.0f, -87,431f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "smoking_stand_MP", "smoking_stand_MP", -129,837f, 129,506f, 895,856f, 0.0f, -149,061f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "lean_rail_MP", "lean_rail_MP", -130,272f, 129,515f, 893,708f, 0.0f, -140,65f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "clean_rifle_MP", "clean_rifle_MP", -128,803f, 130,634f, 892,582f, 0.0f, -148,2358f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_cleanrifle_MP", "sit_cleanrifle_MP", -127,1844f, 129,506f, 893,6276f, 0.0f, -184,4398f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "sit_cleanpistol_MP", "sit_cleanpistol_MP", -125,933f, 129,506f, 896,165f, 0.0f, -174,26f, 0.0f), Local_12.f_1360);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_12, "Rand_Idle_NearWall_Shoulder_R_MP", "Rand_Idle_NearWall_Shoulder_R_MP", -125,5816f, 129,506f, 893,3788f, 0.0f, 112,103f, 0.0f), Local_12.f_1360);
	Local_12.f_1364 = CREATE_OBJECTSET_IN_LAYOUT(Function_50(), Local_12, 17, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateMultiplayerAmmo01x0", "p_gen_crateMultiplayerAmmo01x", -130,2333f, 129,5057f, 899,2995f, 0.0f, 72,53201f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateMultiplayerAmmoFull01x0", "p_gen_crateMultiplayerAmmoFull01x", -129,3118f, 129,5057f, 897,7791f, 0.0f, -88,11108f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateMultiplayerItem01x0", "p_gen_crateMultiplayerItem01x", -130,9069f, 129,5057f, 899,1618f, 0.0f, 87,82333f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateTnt01x0", "p_gen_crateTnt01x", -126,8411f, 129,4149f, 893,2682f, 0.0f, 93,16905f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateTnt02x0", "p_gen_crateTnt02x", -131,8477f, 129,5057f, 899,8342f, 0.0f, 291,0584f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "gatlingGun01x0", "p_gen_gatlingGun01x", -127,8069f, 129,5057f, 898,0569f, 0.0f, -154,0381f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barrel04x0", "p_gen_barrel04x", -131,6828f, 129,4538f, 899,3515f, 0.0f, 0.0f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "chuckWagonBreak01x0", "p_gen_chuckWagonBreak01x", -136f, 129,5058f, 890,342f, 0.0f, -102,6388f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateMultiplayerItem01x1", "p_gen_crateMultiplayerItem01x", -131,5072f, 130,291f, 899,5267f, 0.0f, 40,97013f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barrel04x1", "p_gen_barrel04x", -130,5258f, 130,7095f, 892,1912f, 0.0f, 0.0f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barrel04x2", "p_gen_barrel04x", -129,8503f, 130,7133f, 892,0633f, 0.0f, 55,128f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateMultiplayerWeapon01x0", "p_gen_crateMultiplayerWeapon01x", -128,4665f, 129,5057f, 892,8782f, 0.0f, 67,25682f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateTnt01x1", "p_gen_crateTnt01x", -129,2906f, 129,5057f, 894,9353f, 0.0f, -213,9487f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateTnt02x1", "p_gen_crateTnt02x", -131,1914f, 129,5057f, 895,5918f, 0.0f, -85,88183f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateMultiplayerAmmoFull01x1", "p_gen_crateMultiplayerAmmoFull01x", -126,8937f, 129,5057f, 895,5847f, 0.0f, -173,1454f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "ncrate19x0", "p_gen_crate19x", -130,3635f, 129,4347f, 894,812f, 0.0f, 141,5233f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barricade01x0", "p_gen_barricade01x", -132f, 129,1891f, 900,2684f, 0.0f, -73,05097f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barricade01x1", "p_gen_barricade01x", -129,6937f, 129,2544f, 899,5549f, 0.0f, -60,37173f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barrel04x3", "p_gen_barrel04x", -126,4288f, 129,7352f, 895,408f, 0.0f, 55,128f, -90.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "crateMultiplayerItem01x2", "p_gen_crateMultiplayerItem01x", -125,2373f, 129,5057f, 895,9186f, 0.0f, 40,73972f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "ncrate01x0", "p_gen_crate01x", -129,5448f, 129,5057f, 897,8388f, 0.0f, -26,46961f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "ncrate01x1", "p_gen_crate01x", -130,5153f, 129,5057f, 897,4778f, -46,22082f, 63.0f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "ncrate01x2", "p_gen_crate01x", -125,923f, 129,5057f, 892,9604f, 0.0f, -10,72686f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "tent01x0", "p_gen_tent01x", -137,4039f, 130,5096f, 900,0988f, 0.0f, -62,01776f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barricade01x2", "p_gen_barricade01x", -132,9778f, 129,3722f, 901,9932f, 0.0f, 101,5295f, -6,019382f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barricade01x3", "p_gen_barricade01x", -140,4919f, 130,5097f, 902,3671f, 0.0f, 46,70249f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "tent01x1", "p_gen_tent01x", -137,7695f, 130,5097f, 897,7693f, 0.0f, -73,00343f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "tent01x2", "p_gen_tent01x", -139,5713f, 130,5096f, 895,9999f, 0.0f, -62,01776f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "barricade01x4", "p_gen_barricade01x", -127,4593f, 129,3159f, 898,3947f, 0.0f, -52,84997f, -5,670913f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "waterTrough01x0", "p_gen_waterTrough01x", -107,2752f, 126,494f, 879,8846f, 0.0f, 181,4527f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "horseSaddle01x0", "p_gen_horseSaddle01x", -104,247f, 126,5827f, 877,95f, -2,829851f, -18,24504f, 0,8866247f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "hayPile02x0", "p_gen_hayPile02x", -104f, 127,4979f, 898,6668f, 0.0f, 0.0f, 0.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "hayBale07x0", "p_gen_hayBale07x", -103,4047f, 126,4131f, 879,2337f, 0,1278847f, 115,0695f, -0,3880575f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "hayBale01x0", "p_gen_hayBale01x", -99,99999f, 126,8346f, 884,5491f, -35,23272f, 6,401762f, 84,12264f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "hayBale07x1", "p_gen_hayBale07x", -101,9961f, 126,2881f, 880,5477f, 0,005913452f, 109,1512f, -0,50121f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "hayBale01x1", "p_gen_hayBale01x", -103,7239f, 126,8044f, 878,0181f, -17,69282f, 0.0f, 90.0f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "horseSaddle01x1", "p_gen_horseSaddle01x", -101,1546f, 126,6823f, 883,6824f, 4,739491f, -96,60545f, -2,415046f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "hayBale01x2", "p_gen_hayBale01x", -101,0205f, 126,9039f, 884,2321f, -95,99754f, 0.0f, 94,92489f, 1), Local_12.f_1364);
	ADD_OBJECT_TO_OBJECTSET(CREATE_PROP_IN_LAYOUT(Local_12, "waterTrough01x1", "p_gen_waterTrough01x", -98,70032f, 126,3196f, 887,4232f, 0.0f, 199,2099f, 0.0f, 1), Local_12.f_1364);
	return;
}

void Function_163(int iParam0, int iParam1) //Position: 0x7555 / 30037
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

float Function_164(int iParam0) //Position: 0x759E / 30110
{
	if (Function_23(iParam0))
	{
		if (Function_165(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_165(int iParam0) //Position: 0x7666 / 30310
{
	return Function_24(*iParam0, 2);
}

void Function_166() //Position: 0x7673 / 30323
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_167() //Position: 0x7685 / 30341
{
	UI_EXIT("LocationText");
	return;
}

void Function_168(int iParam0, float fParam1) //Position: 0x769D / 30365
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_12(iParam0, 1);
	Function_11(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_169(var uParam0, bool bParam1, int iParam2) //Position: 0x76BE / 30398
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
		if (Function_175(Global_29006))
		{
			Function_174(&(Global_29008[Global_29006]), 131072);
			Function_173(&(Global_29008[Global_29006]), 2097152);
			Function_171(Global_29006);
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
				if (Function_170(&(Global_29008[iVar0]), 4) || Function_170(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_173(&(Global_29008[iVar0]), 2097155);
					Function_174(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_46())
			{
			}
			WAIT(false);
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

bool Function_170(var uParam0, int iParam1) //Position: 0x77C9 / 30665
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_171(int iParam0) //Position: 0x77E5 / 30693
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_172())
			{
				return;
			}
		}
		if (!Function_170(&(Global_29008[iParam0]), 2048))
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

bool Function_172() //Position: 0x7864 / 30820
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_170(&(Global_29008[iVar0]), 4) || Function_170(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_173(var uParam0, int iParam1) //Position: 0x78C1 / 30913
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_174(var uParam0, int iParam1) //Position: 0x78D8 / 30936
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_175(int iParam0) //Position: 0x78E7 / 30951
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_176() //Position: 0x78FD / 30973
{
	CLEAR_AREA_OF_GRASS(-127,86f, 129,51f, 897,12f, 3,75f);
	CLEAR_AREA_OF_GRASS(-137,76f, 130,51f, 896,33f, 3,7f);
	CLEAR_AREA_OF_GRASS(-106,035f, 126,494f, 878,813f, 2,5f);
	CLEAR_AREA_OF_GRASS(-102,539f, 126,494f, 879,539f, 2,5f);
	CLEAR_AREA_OF_GRASS(-98,848f, 126,275f, 884.0f, 2,5f);
	CLEAR_AREA_OF_GRASS(-97,59f, 126,036f, 885,59f, 2,5f);
	CLEAR_AREA_OF_GRASS(-100,892f, 127,498f, 899,006f, 2,5f);
	return;
}

void Function_177() //Position: 0x79AB / 31147
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	bLocal_391 = CREATE_LAYOUT("MP_Enum_Picker");
	bVar0 = Function_73();
	bLocal_925 = Function_90(bVar0);
	iLocal_924 = bLocal_925;
	iLocal_926 = 0;
	bLocal_927 = false;
	iVar1 = 0;
	NET_GAMER_ICONS_SHOW_LOCAL(1);
	bLocal_922 = 4294967295;
	iVar3 = iLocal_928;
	while (iVar3 < iLocal_929)
	{
		bVar2 = iVar3;
		if (IS_ACTORENUM_INSTALLED(bVar2))
		{
			iVar4 = Function_90(bVar2);
			if (iVar4 >= iLocal_926)
			{
				iLocal_926 = iVar4;
			}
			if (iVar4 <= bLocal_927)
			{
				bLocal_927 = iVar4;
			}
			if (bLocal_922 == 4294967295)
			{
				if (iVar4 == bLocal_925)
				{
					if (bVar2 == bVar0)
					{
						bLocal_922 = iVar1;
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
	bLocal_923 = bLocal_922;
	Function_187(&iLocal_941);
	iLocal_921 = CLEAR_AREA_OF_TREE_TYPE(vLocal_447, (Function_108() * 1,2f), "");
	Function_186();
	Function_185(1);
	Function_183(1);
	Function_180();
	Function_14(2097154);
	Function_268(256);
	Function_16(128);
	Function_14(131072);
	Function_13(2097152, 1);
	Function_179();
	UI_PUSH("HudAvatarPicker");
	SET_HUD_MAP_DRAW_ENABLED(0);
	HUD_ENABLE(true);
	ENABLE_USE_CONTEXTS(0);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	Function_178(0);
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
	return;
}

void Function_178(var uParam0) //Position: 0x7B8E / 31630
{
	Function_45(&Global_79378, 0, uParam0);
	return;
}

void Function_179() //Position: 0x7B9E / 31646
{
	Function_10(1024, 1, 0);
	Function_10(1, 0, 0);
	return;
}

void Function_180() //Position: 0x7BB2 / 31666
{
	Function_185(4);
	Function_181(1, 0);
	return;
}

void Function_181(int iParam0, int iParam1) //Position: 0x7BC1 / 31681
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
			Function_182(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_182(int iParam0) //Position: 0x7C43 / 31811
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

void Function_183(int iParam0) //Position: 0x7C91 / 31889
{
	Function_184(&Global_28842, iParam0);
	return;
}

void Function_184(var uParam0, int iParam1) //Position: 0x7C9F / 31903
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_185(int iParam0) //Position: 0x7CC2 / 31938
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

void Function_186() //Position: 0x7CF6 / 31990
{
	Global_83816 = Global_26119;
	Global_83817 = Global_28842;
	return;
}

void Function_187(int iParam0) //Position: 0x7D0A / 32010
{
	if (!Function_23(iParam0))
	{
		Function_168(iParam0, 0.0f);
	}
	return;
}

bool Function_188() //Position: 0x7D1F / 32031
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Function_21();
	Function_230();
	bVar1 = Function_190(StackVal, StackVal, vLocal_530, 0.0f, 0.0f, 0.0f, 1, 1);
	if (bVar1)
	{
		uVar0 = Function_21();
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		SET_DRAW_ACTOR(Function_21(), false);
		Function_189(uVar0);
	}
	return bVar1;
}

void Function_189(bool bParam0) //Position: 0x7D5B / 32091
{
	Function_13(128, 1);
	SET_ACTOR_INVULNERABILITY(bParam0, true);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(bParam0), 0);
	AI_IGNORE_ACTOR(bParam0);
	return;
}

int Function_190(vector3 vParam0, vector3 vParam3, bool bParam6, int iParam7) //Position: 0x7D7C / 32124
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	struct<13> Var10;
	
	bVar0 = Function_21();
	Function_209();
	bVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar1))
	{
		return 0;
	}
	Function_228();
	if (!GET_GAME_CAMERA_RESET_POSITION(&vVar2, &Var5, vParam0, vParam3.y, 0))
	{
		vVar2 = { StackVal, StackVal, vParam0 };
		Var5 = { StackVal, StackVal, vParam3 };
	}
	SET_START_POS(StackVal, vVar2, 0);
	bVar8 = Function_207(bVar0, 3145855);
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
		bVar9 = Function_206(256);
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
		Function_198(bVar0, 0);
		Function_193();
		Function_192(StackVal, StackVal, "Respawn", vParam0);
		if (NET_IS_IN_SESSION())
		{
			Var10 = GET_LOCAL_SLOT();
			Var10.f_12 = 1;
			uVar14 = Function_191(StackVal, StackVal, vParam0, 0, 0, 1);
			if (Function_175(uVar14))
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

var Function_191(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x7EF3 / 32499
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

void Function_192(char* cParam0, vector3 vParam1) //Position: 0x7F8E / 32654
{
	UNK_0x6F6D942B(cParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
}

void Function_193() //Position: 0x7FCC / 32716
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_197(iVar1))
		{
			uVar2 = Function_196(iVar1);
			Function_194(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_194(int iParam0, bool bParam1) //Position: 0x8000 / 32768
{
	if (!Function_197(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_195(222, Global_26401[iParam0], 0);
		if (Function_62(222) <= 0)
		{
			Function_48(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_48((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_195((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_195(222, bParam1, 0);
	}
	return;
}

int Function_195(int iParam0, bool bParam1, int iParam2) //Position: 0x8089 / 32905
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
	Function_60(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_49(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_196(int iParam0) //Position: 0x8284 / 33412
{
	if (!Function_197(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_197(int iParam0) //Position: 0x829C / 33436
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_198(bool bParam0, bool bParam1) //Position: 0x82B1 / 33457
{
	int iVar0;
	
	SET_ACTOR_MAX_HEALTH(bParam0, 60.0f);
	SET_ACTOR_HEALTH(bParam0, 60.0f);
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_AMBIENT_VOICE_NAME(bParam0, Function_205(GET_ACTOR_ENUM(bParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(bParam0, (Function_203(8192) && !Function_202(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam0, 1, 1);
	SET_ACTOR_FACTION(bParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(bParam0);
	SETUP_ASSOCIATED_FRAGMENTS(bParam0);
	if (Function_200())
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
	if (Function_199())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_199() //Position: 0x83B1 / 33713
{
	return Function_24(Global_79962, 2048);
}

bool Function_200() //Position: 0x83C1 / 33729
{
	if (Function_46())
	{
		return (Function_201() != 1 || Function_201() != 0);
	}
	return 0;
}

int Function_201() //Position: 0x83DA / 33754
{
	return Global_79349.f_16;
}

bool Function_202(int iParam0, bool bParam1) //Position: 0x83E6 / 33766
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_203(int iParam0) //Position: 0x8406 / 33798
{
	return Function_204(&Global_79349, iParam0);
}

int Function_204(var uParam0, bool bParam1) //Position: 0x8415 / 33813
{
	return Function_24(uParam0->f_44, bParam1);
}

var Function_205(bool bParam0) //Position: 0x8424 / 33828
{
	int iVar0;
	
	iVar0 = "";
	if (((bParam0 > 837 && bParam0 < 971) && bParam0 > 972) && bParam0 < 975)
	{
		return iVar0;
	}
	iVar0 = GET_ACTORENUM_MP_VOICE_NAME(bParam0);
	return iVar0;
}

int Function_206(int iParam0) //Position: 0x8459 / 33881
{
	return Function_86(Global_78617.f_52, iParam0);
}

int Function_207(bool bParam0, int iParam1) //Position: 0x846A / 33898
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_208(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_208(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_208(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_208(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_208(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_208(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_208(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_208(iParam1, 64))
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

bool Function_208(var uParam0, bool bParam1) //Position: 0x8543 / 34115
{
	return (uParam0 && bParam1) == 0;
}

void Function_209() //Position: 0x8550 / 34128
{
	Function_218();
	Function_212();
	Function_210();
	return;
}

void Function_210() //Position: 0x855F / 34143
{
	if ((*&Global_78480 + 220)[35] >= (*&Global_78480 + 220)[18])
	{
		(*&Global_78480 + 220)[18] = (*&Global_78480 + 220)[35];
	}
	Function_211();
	return;
}

void Function_211() //Position: 0x8593 / 34195
{
	(*&Global_78480 + 220)[35] = 0;
	return;
}

void Function_212() //Position: 0x85A4 / 34212
{
	Function_213(&(Global_50170[522]));
	Function_213(&(Global_50170[622]));
	Function_213(&(Global_50170[722]));
	Function_213(&(Global_50170[822]));
	Function_213(&(Global_50170[922]));
	Function_213(&(Global_50170[1022]));
	Function_213(&(Global_50170[1122]));
	return;
}

void Function_213(bool bParam0) //Position: 0x85ED / 34285
{
	Global_56092[*bParam0] = 0;
	Function_214(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_214(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x8607 / 34311
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_217(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_216(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_217(iParam0), &cVar0, 2, 2, true);
		Function_215(Function_217(iParam0), 0);
	}
}

void Function_215(bool bParam0, bool bParam1) //Position: 0x86B5 / 34485
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

struct<16> Function_216(int iParam0) //Position: 0x86DA / 34522
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_217(int iParam0) //Position: 0x870E / 34574
{
	return Global_50170[iParam022].f_24;
}

void Function_218() //Position: 0x871D / 34589
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

bool Function_219(bool bParam0) //Position: 0x8736 / 34614
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_224();
	iVar1 = 0;
	if (!Function_5(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_223(bParam0[iVar03], 8);
		}
		else if (Function_222())
		{
			iVar1 = 1;
			Function_223(bParam0[iVar03], 8);
		}
		Function_223(bParam0[iVar03], 16);
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
				Function_223(bParam0[iVar03], 1);
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
							Function_223(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_223(bParam0[iVar03], 2);
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
							Function_223(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_223(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_223(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_223(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_223(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_223(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_223(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_223(bParam0[iVar03], 2);
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
	Function_220();
	return 1;
}

void Function_220() //Position: 0x8AB1 / 35505
{
	if (!Function_221(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_221(int iParam0) //Position: 0x8AF1 / 35569
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_222() //Position: 0x8B0D / 35597
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

void Function_223(var uParam0, int iParam1) //Position: 0x8B38 / 35640
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_224() //Position: 0x8B49 / 35657
{
	if (!Function_221(128))
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

var Function_225(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x8B8B / 35723
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
			Function_223(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_223(bParam0[iVar03], 8);
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

var Function_226(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x8C5B / 35931
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_227(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_223(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_227(var uParam0, int iParam1, int iParam2) //Position: 0x8C93 / 35987
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_223(uParam0[iVar03], 4);
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

void Function_228() //Position: 0x8D57 / 36183
{
	if (IS_OBJECT_VALID(Global_63118))
	{
		DESTROY_OBJECT(Global_63118);
	}
	return;
}

int Function_229() //Position: 0x8D6C / 36204
{
	Function_226(&Local_12 + 4, "p_gen_crateMultiplayerAmmo01x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_crateMultiplayerAmmoFull01x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_crateMultiplayerItem01x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_crateTnt01x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_crateTnt02x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_gatlingGun01x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_barrel04x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_chuckWagonBreak01x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_crateMultiplayerWeapon01x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_crate19x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_barricade01x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_crate01x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_tent01x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_waterTrough01x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_horseSaddle01x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_hayPile02x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_hayBale07x", 0, 0);
	Function_226(&Local_12 + 4, "p_gen_hayBale01x", 0, 0);
	Function_226(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_smokelean_e_any_mp", 1, 0);
	Function_226(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/spittoon_mp", 1, 0);
	Function_226(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanknife_mp", 1, 0);
	Function_226(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink_mp", 1, 0);
	Function_226(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_mp", 1, 0);
	Function_226(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_mp", 1, 0);
	Function_226(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/clean_rifle_mp", 1, 0);
	Function_226(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanrifle_mp", 1, 0);
	Function_226(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanpistol_mp", 1, 0);
	Function_226(&Local_12 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r_mp", 1, 0);
	if (Function_219(&Local_12 + 4))
	{
		return 1;
	}
	return 0;
}

void Function_230() //Position: 0x929C / 37532
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

void Function_231() //Position: 0x92E5 / 37605
{
	if ((Function_234() || Function_233()) && !IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0))
	{
		if ((bLocal_922 == iLocal_399 && iLocal_399 <= 0) && iLocal_399 > bLocal_528)
		{
			if (Function_164(&iLocal_941) < fLocal_370)
			{
				if (iLocal_950 == iLocal_951)
				{
					fLocal_370 = Function_232(0.0f, (fLocal_370 - fLocal_368));
				}
				else
				{
					fLocal_370 = fLocal_367;
				}
				bLocal_922 = iLocal_399;
				if (iLocal_400 == 3)
				{
					Function_96((14 + bLocal_922));
				}
				else
				{
					Function_96((4 + bLocal_922));
				}
				Function_78();
				Function_91(bLocal_922);
				Function_77(&iLocal_941);
			}
		}
	}
	return;
}

float Function_232(float fParam0, float fParam1) //Position: 0x9370 / 37744
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int Function_233() //Position: 0x9383 / 37763
{
	if (iLocal_400 <= 4 && iLocal_400 >= 29)
	{
		return 1;
	}
	return 0;
}

int Function_234() //Position: 0x939B / 37787
{
	if (iLocal_400 == 3)
	{
		return 1;
	}
	return 0;
}

void Function_235(int iParam0) //Position: 0x93AB / 37803
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	int iVar8;
	
	if (Function_265(&iLocal_947, 5.0f))
	{
		Function_167();
	}
	if (iLocal_390)
	{
		iLocal_390 = 0;
		iLocal_402 = 1;
		*iParam0 = 13;
		return;
	}
	Function_261();
	Function_253();
	Function_248();
	if (((iLocal_400 != 0 && iLocal_919 == 1) && iLocal_919 == 2) && iLocal_919 == 3)
	{
		iVar0 = (1 + RAND_INT_RANGE(false, 2));
		Function_96(iVar0);
	}
	if (((iLocal_400 != 1 && iLocal_919 == 26) && iLocal_919 == 27) && iLocal_919 == 28)
	{
		iVar1 = (26 + RAND_INT_RANGE(false, 2));
		Function_96(iVar1);
	}
	if (Function_246())
	{
		FLASH_SET_INT("pause_main", "character_label.visibility", false);
		iVar2 = (1 + RAND_INT_RANGE(false, 2));
		Function_96(iVar2);
		return;
	}
	if (Function_244())
	{
		Function_95();
		iVar3 = (26 + RAND_INT_RANGE(false, 2));
		Function_99();
		Function_96(iVar3);
		return;
	}
	if (!UI_IS_SHOWING_DIALOG())
	{
		if (bLocal_401)
		{
			bLocal_401 = false;
		}
	}
	else
	{
		bLocal_401 = true;
	}
	if (!bLocal_401)
	{
		if (Function_243())
		{
			*iParam0 = 13;
			UI_TRANSITION_TO("MP_AvatarQuit");
			return;
		}
		if (Function_242())
		{
			Function_113();
			if (!Function_23(&iLocal_944))
			{
				Function_7();
			}
			Function_77(&iLocal_941);
			Function_77(&iLocal_944);
			Function_166();
			Function_167();
			if (iLocal_924 != bLocal_925)
			{
				iLocal_924 = bLocal_925;
				*iParam0 = 17;
			}
			else
			{
				Function_96((14 + bLocal_922));
				Function_93();
				Function_91(bLocal_922);
			}
			return;
		}
		if (Function_241())
		{
			if (!Function_23(&iLocal_944))
			{
				Function_7();
			}
			Function_77(&iLocal_941);
			Function_77(&iLocal_944);
			Function_166();
			Function_167();
			Function_96(29);
			Function_91(bLocal_922);
			return;
		}
		if (Function_240())
		{
			if (!Function_23(&iLocal_944))
			{
				Function_7();
			}
			Function_77(&iLocal_941);
			Function_77(&iLocal_944);
			Function_166();
			Function_167();
			Var4 = { StackVal, StackVal, StackVal, Function_75(bLocal_925, 0) };
			iVar8 = Function_90(Local_454[02]);
			if (iLocal_924 == bLocal_925 && iVar8 == bLocal_925)
			{
				iLocal_924 = bLocal_925;
				*iParam0 = 18;
			}
			else
			{
				Function_96((4 + bLocal_922));
				Function_99();
				Function_91(bLocal_922);
			}
			return;
		}
		if (Function_239(iParam0))
		{
			*iParam0 = 9;
			iLocal_403 = 0;
			iLocal_400 = 0;
			return;
		}
		if (Function_238(iParam0))
		{
			*iParam0 = 11;
			iLocal_403 = 0;
			iLocal_400 = 0;
			return;
		}
		if (Function_236(iParam0))
		{
			*iParam0 = 12;
			iLocal_403 = 0;
			iLocal_400 = 0;
			return;
		}
	}
	return;
}

bool Function_236(int iParam0) //Position: 0x95FE / 38398
{
	int iVar0;
	
	if (Function_237() && *iParam0 != 8)
	{
		if (iLocal_403 == 6)
		{
			iLocal_403 = 34;
			iVar0 = (Function_31() * 1000 + Function_30(Function_31()));
			iVar0 = (iVar0 + iLocal_399);
			if (!Function_124(iVar0))
			{
				return 0;
			}
			PLAY_SOUND("HUD_MENU_SELECT_MASTER");
			return 1;
		}
	}
	return 0;
}

int Function_237() //Position: 0x9661 / 38497
{
	if (iLocal_400 == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_238(int iParam0) //Position: 0x9671 / 38513
{
	if (Function_234() && *iParam0 != 8)
	{
		if (iLocal_403 == 5)
		{
			iLocal_403 = 34;
			if (!Function_79(bLocal_922))
			{
				return 0;
			}
			PLAY_SOUND("HUD_MENU_SELECT_MASTER");
			return 1;
		}
	}
	return 0;
}

bool Function_239(int iParam0) //Position: 0x96BE / 38590
{
	if (Function_233() && *iParam0 != 8)
	{
		if (iLocal_403 == 4)
		{
			iLocal_403 = 34;
			if (!Function_79(bLocal_922))
			{
				return 0;
			}
			PLAY_SOUND("HUD_MENU_SELECT_MASTER");
			return 1;
		}
	}
	if (Function_233() && iLocal_403 != 4)
	{
		iLocal_403 = 34;
	}
	return 0;
}

bool Function_240() //Position: 0x971F / 38687
{
	int iVar0;
	
	if (iLocal_403 <= 7 && iLocal_403 >= 32)
	{
		iVar0 = (iLocal_403 - 7);
		bLocal_925 = (iLocal_926 - iVar0);
		iLocal_403 = 34;
		return 1;
	}
	return 0;
}

bool Function_241() //Position: 0x974C / 38732
{
	if (iLocal_403 == 2)
	{
		bLocal_925 = Function_90(Function_73());
		bLocal_922 = bLocal_923;
		iLocal_403 = 34;
		return 1;
	}
	return 0;
}

bool Function_242() //Position: 0x9770 / 38768
{
	if (iLocal_403 == 3)
	{
		bLocal_925 = iLocal_385;
		iLocal_403 = 34;
		return 1;
	}
	return 0;
}

bool Function_243() //Position: 0x978B / 38795
{
	if (iLocal_403 != 33 && !UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
	{
		iLocal_403 = 34;
		return 1;
	}
	return 0;
}

bool Function_244() //Position: 0x97C3 / 38851
{
	if (iLocal_400 == 1 && UI_ISFOCUSED("MP_AvatarGroupSelector"))
	{
		FLASH_SET_INT("pause_main", "character_label.visibility", false);
		Function_116();
		iLocal_403 = 1;
		iLocal_400 = 1;
	}
	if (Function_245())
	{
		if (iLocal_403 == 1)
		{
			iLocal_403 = 34;
			bLocal_925 = Function_90(Local_454[02]);
			Function_88();
			return 1;
		}
	}
	return 0;
}

bool Function_245() //Position: 0x984C / 38988
{
	if (iLocal_400 == 1)
	{
		return 1;
	}
	return 0;
}

bool Function_246() //Position: 0x985C / 39004
{
	if (Function_247())
	{
		if (iLocal_403 == 0)
		{
			iLocal_403 = 34;
			return 1;
		}
	}
	return 0;
}

bool Function_247() //Position: 0x9877 / 39031
{
	if (iLocal_400 == 0)
	{
		return 1;
	}
	return 0;
}

void Function_248() //Position: 0x9887 / 39047
{
	if (iLocal_919 == iLocal_918 && !IS_OBJECT_VALID(bLocal_920))
	{
		bLocal_920 = Function_249(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bLocal_952, Local_533[iLocal_91812], Local_533[iLocal_91912]);
		iLocal_918 = iLocal_919;
	}
	return;
}

bool Function_249(var uParam0, struct<12> Param1, vector3 vParam13, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24) //Position: 0x98C4 / 39108
{
	var uVar0;
	
	uVar0 = Function_250(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bLocal_391, 0, Param1, vParam13);
	Function_100(StackVal, StackVal, StackVal, StackVal, uParam0, vParam13, *(&vParam13 + 12));
	return uVar0;
}

var Function_250(bool bParam0, bool bParam1, struct<12> Param2, struct<12> Param14) //Position: 0x98F0 / 39152
{
	bool bVar0;
	
	bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Transition_Cutscene", 2, 1);
	Function_251(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &bVar0, Param2, Param14);
	SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
	PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return bVar0;
}

void Function_251(var uParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, vector3 vParam13, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24) //Position: 0x9943 / 39235
{
	bool bVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_252(StackVal, StackVal, StackVal, StackVal, &bVar0, vParam1, *(&vParam1 + 12));
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_252(StackVal, StackVal, StackVal, StackVal, &bVar0, vParam13, *(&vParam13 + 12));
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	fVar1 = (VDIST(vParam1, vParam13) * 0,09f);
	vVar2 = { StackVal, StackVal, *(&vParam1 + 12) };
	vVar5 = { StackVal, StackVal, *(&vParam13 + 12) };
	VNORMALIZE(&vVar2);
	VNORMALIZE(&vVar5);
	fVar8 = VDOT(&vVar2, &vVar5);
	fVar1 = (fVar1 + (fVar8 * -1.0f));
	if (fVar1 > 0,8f)
	{
		fVar1 = 0,8f;
	}
	if (fVar1 < 2,3f)
	{
		fVar1 = 2,3f;
	}
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 0,1f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, fVar1, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 0,1f, 2);
}

void Function_252(bool bParam0, vector3 vParam1, vector3 vParam4) //Position: 0x9A12 / 39442
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, vParam1);
	SET_CAMERASHOT_ORIENTATION(*bParam0, vParam4, 0);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
}

void Function_253() //Position: 0x9A65 / 39525
{
	iLocal_398 = iLocal_399;
	if (UI_ISFOCUSED("MP_ProfileMenu"))
	{
		iLocal_399 = UI_GET_SELECTED_INDEX("MP_ProfileMenu", 0);
	}
	else if (UI_ISFOCUSED("MP_AvatarGroupSelector"))
	{
		iLocal_399 = Function_260(UI_GET_SELECTED_INDEX("MP_AvatarGroupSelector", 0));
	}
	else if (UI_ISFOCUSED("MP_AvatarModelSelector"))
	{
		iLocal_399 = UI_GET_SELECTED_INDEX("MP_AvatarModelSelector", 0);
		Function_258();
	}
	else if (UI_ISFOCUSED("MP_MountSelector"))
	{
		iLocal_399 = UI_GET_SELECTED_INDEX("MP_MountSelector", 0);
		Function_256();
	}
	else if (UI_ISFOCUSED("MP_TitleGroupXp"))
	{
		iLocal_399 = UI_GET_SELECTED_INDEX("MP_TitleGroupXp", 0);
		Function_254(0);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupAmbient"))
	{
		iLocal_399 = UI_GET_SELECTED_INDEX("MP_TitleGroupAmbient", 0);
		Function_254(1);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupWeapon"))
	{
		iLocal_399 = UI_GET_SELECTED_INDEX("MP_TitleGroupWeapon", 0);
		Function_254(2);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupPvP"))
	{
		iLocal_399 = UI_GET_SELECTED_INDEX("MP_TitleGroupPvP", 0);
		Function_254(3);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupStat"))
	{
		iLocal_399 = UI_GET_SELECTED_INDEX("MP_TitleGroupStat", 0);
		Function_254(4);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupDLC1"))
	{
		iLocal_399 = UI_GET_SELECTED_INDEX("MP_TitleGroupDLC1", 0);
		Function_254(5);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupDLC2"))
	{
		iLocal_399 = UI_GET_SELECTED_INDEX("MP_TitleGroupDLC2", 0);
		Function_254(6);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupDLC3"))
	{
		iLocal_399 = UI_GET_SELECTED_INDEX("MP_TitleGroupDLC3", 0);
		Function_254(7);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupDLC4"))
	{
		iLocal_399 = UI_GET_SELECTED_INDEX("MP_TitleGroupDLC4", 0);
		Function_254(8);
	}
	else if (UI_ISFOCUSED("MP_TitleGroupSelector"))
	{
		UI_INCLUDE("MPAP_title_ps_accept_button");
	}
	if (iLocal_398 != iLocal_399)
	{
	}
	return;
}

void Function_254(int iParam0) //Position: 0x9DCF / 40399
{
	int iVar0;
	
	iVar0 = (iParam0 * 1000 + iLocal_399);
	iVar0 = (iVar0 + Function_30(iParam0));
	if (!Function_124(iVar0))
	{
		UI_EXCLUDE("MPAP_title_ps_accept_button");
	}
	else
	{
		UI_INCLUDE("MPAP_title_ps_accept_button");
	}
	if (Function_124(iVar0) && !Function_123(iVar0))
	{
		Function_255(iVar0, 1);
	}
	return;
}

void Function_255(int iParam0, bool bParam1) //Position: 0x9E4D / 40525
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (bParam1)
	{
		Function_12(&Global_84364 + 4[(iParam0 / 1000)10] + 20[(iVar0 / 32)], Function_82((iVar0 % 32)));
	}
	else
	{
		Function_11(&Global_84364 + 4[(iParam0 / 1000)10] + 20[(iVar0 / 32)], Function_82((iVar0 % 32)));
	}
	return;
}

void Function_256() //Position: 0x9EA7 / 40615
{
	bool bVar0;
	
	bVar0 = Local_505[iLocal_3992];
	if (!Function_85(bVar0))
	{
		UI_EXCLUDE("MPAP_model_ps_accept_button");
	}
	else
	{
		UI_INCLUDE("MPAP_model_ps_accept_button");
	}
	if (FLASH_GET_INT("pause_main", "pausetransition.visibility") == 0)
	{
		if (!Function_85(bVar0))
		{
			FLASH_SET_STRING("pause_main", "character_label.text", "mp_avatar_locked", 1);
		}
		else
		{
			FLASH_SET_STRING("pause_main", "character_label.text", GET_ACTOR_ENUM_STRING_FROM_ENUM(Local_505[iLocal_3992]), 1);
		}
		FLASH_SET_INT("pause_main", "character_label.visibility", true);
	}
	if (Function_85(bVar0) && !Function_159(bVar0))
	{
		Function_257(bVar0);
	}
	return;
}

void Function_257(int iParam0) //Position: 0x9FF5 / 40949
{
	Function_12(&Global_84364 + 772, Function_82(Function_87(iParam0)));
	return;
}

void Function_258() //Position: 0xA00D / 40973
{
	bool bVar0;
	
	bVar0 = Local_454[iLocal_3992];
	if (bVar0 > iLocal_928 || bVar0 < iLocal_929)
	{
		return;
	}
	if (!Function_80(bVar0))
	{
		UI_EXCLUDE("MPAP_model_ps_accept_button");
	}
	else
	{
		UI_INCLUDE("MPAP_model_ps_accept_button");
	}
	if (FLASH_GET_INT("pause_main", "pausetransition.visibility") == 0)
	{
		if (!Function_80(bVar0))
		{
			FLASH_SET_STRING("pause_main", "character_label.text", "mp_avatar_locked", 1);
		}
		else
		{
			FLASH_SET_STRING("pause_main", "character_label.text", GET_ACTOR_ENUM_STRING_FROM_ENUM(Local_454[iLocal_3992]), 1);
		}
		FLASH_SET_INT("pause_main", "character_label.visibility", true);
	}
	if (Function_80(bVar0) && !Function_155(bVar0))
	{
		Function_259(bVar0);
	}
	return;
}

void Function_259(int iParam0) //Position: 0xA16C / 41324
{
	Function_12(&Global_84364 + 748[Function_84(iParam0)], Function_81(iParam0));
	return;
}

int Function_260(int iParam0) //Position: 0xA188 / 41352
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (Function_24(iLocal_529, Function_82(iVar0)))
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

void Function_261() //Position: 0xA1C6 / 41414
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = FIND_NAMED_LAYOUT("Formations");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		LOG_ERROR("Failed to find FUI layout. Script will not receive FUI events");
		return;
	}
	bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
	if (!IS_ITERATOR_VALID(bVar1))
	{
		LOG_ERROR("Failed to create FUI iterator. Script will not receive FUI events");
		return;
	}
	ITERATE_ON_OBJECT_TYPE(bVar1, 3);
	ITERATE_IN_SET(bVar1, GET_OBJECTSET_FOR_EVENT_TYPE(75));
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_EVENT_FROM_OBJECT(bVar2);
		if (IS_OBJECT_VALID(bVar3))
		{
			Function_263(bVar2);
			Function_262();
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	return;
}

void Function_262() //Position: 0xA2CB / 41675
{
	if (iLocal_400 == 3)
	{
		Function_158();
	}
	if (iLocal_400 <= 4 && iLocal_400 >= 29)
	{
		Function_156();
	}
	if (iLocal_400 <= 4 && iLocal_400 >= 29)
	{
		Function_153();
	}
	if (iLocal_400 == 2)
	{
		Function_152();
	}
	if (iLocal_400 == 2)
	{
		Function_151();
		Function_150();
		Function_149();
		Function_148();
		Function_147();
		Function_146(0);
		Function_145(0);
		Function_144(0);
		Function_143(0);
		Function_142(0);
		if (bLocal_387)
		{
			Function_141();
			Function_140(0);
		}
		if (bLocal_388)
		{
			Function_138();
			Function_137(0);
		}
		if (bLocal_389)
		{
			Function_135();
			Function_120(0);
		}
	}
	return;
}

void Function_263(bool bParam0) //Position: 0xA35A / 41818
{
	int iVar0;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if ((DECOR_CHECK_STRING(bParam0, "Param", "net.JoinWishPosted") || DECOR_CHECK_STRING(bParam0, "Param", "net.InviteFailed_NoPlaylist")) || DECOR_CHECK_STRING(bParam0, "Param", "avt.back"))
	{
		iLocal_390 = 1;
	}
	if (UI_ISACTIVE("MP_AvatarQuit"))
	{
		if (DECOR_CHECK_STRING(bParam0, "Param", "RollOver_Yes"))
		{
			iLocal_402 = 1;
			UI_EXIT("MP_AvatarQuit");
		}
		else if ((IS_BUTTON_RELEASED(Function_264(), 6, 1, false) || IS_BUTTON_PRESSED(Function_264(), 6, 1, 0)) || IS_BUTTON_DOWN(Function_264(), 6, 1, false))
		{
			iLocal_402 = 1;
			UI_EXIT("MP_AvatarQuit");
		}
	}
	if (DECOR_CHECK_STRING(bParam0, "Param", "Profile_Selected"))
	{
		if (UI_ISFOCUSED("MP_AvatarGroupSelector"))
		{
			iLocal_403 = 1;
			iLocal_400 = 1;
		}
		else if (UI_ISFOCUSED("MP_MountSelector"))
		{
			iLocal_403 = 3;
			iLocal_400 = 3;
		}
		else if (((((((((UI_ISFOCUSED("MP_TitleGroupSelector") || UI_ISFOCUSED("MP_TitleGroupXp")) || UI_ISFOCUSED("MP_TitleGroupAmbient")) || UI_ISFOCUSED("MP_TitleGroupWeapon")) || UI_ISFOCUSED("MP_TitleGroupPvP")) || UI_ISFOCUSED("MP_TitleGroupStat")) || UI_ISFOCUSED("MP_TitleGroupDLC1")) || UI_ISFOCUSED("MP_TitleGroupDLC2")) || UI_ISFOCUSED("MP_TitleGroupDLC3")) || UI_ISFOCUSED("MP_TitleGroupDLC4"))
		{
			iLocal_403 = 2;
			iLocal_400 = 2;
		}
	}
	else if (DECOR_CHECK_STRING(bParam0, "Param", "Profile_Cancelled"))
	{
		iLocal_403 = 33;
	}
	if (DECOR_CHECK_STRING(bParam0, "Param", "AvatarGroup_Selected"))
	{
		iVar0 = UI_GET_SELECTED_INDEX("MP_AvatarGroupSelector", 0);
		iVar0 = Function_260(iVar0);
		iLocal_403 = (7 + iVar0);
		iLocal_400 = (4 + iVar0);
	}
	else if (DECOR_CHECK_STRING(bParam0, "Param", "AvatarGroup_Cancelled"))
	{
		FLASH_SET_INT("pause_main", "character_label.visibility", false);
		iLocal_403 = 0;
		iLocal_400 = 0;
	}
	if (DECOR_CHECK_STRING(bParam0, "Param", "Mount_Selected"))
	{
		iLocal_403 = 5;
	}
	else if (DECOR_CHECK_STRING(bParam0, "Param", "Mount_Cancelled"))
	{
		FLASH_SET_INT("pause_main", "character_label.visibility", false);
		iLocal_403 = 0;
		iLocal_400 = 0;
	}
	if (DECOR_CHECK_STRING(bParam0, "Param", "Title_Selected"))
	{
		iLocal_403 = 6;
	}
	else if (DECOR_CHECK_STRING(bParam0, "Param", "Title_Cancelled"))
	{
		iLocal_403 = 0;
		iLocal_400 = 0;
	}
	if (DECOR_CHECK_STRING(bParam0, "Param", "AvatarModel_Selected"))
	{
		FLASH_SET_INT("pause_main", "character_label.visibility", false);
		iLocal_403 = 4;
	}
	else if (DECOR_CHECK_STRING(bParam0, "Param", "AvatarModel_Cancelled"))
	{
		FLASH_SET_INT("pause_main", "character_label.visibility", false);
		Function_116();
		iLocal_403 = 1;
		iLocal_400 = 1;
	}
	return;
}

int Function_264() //Position: 0xA850 / 43088
{
	bool bVar0;
	
	bVar0 = Function_21();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

bool Function_265(var uParam0, int iParam1) //Position: 0xA86A / 43114
{
	if (Function_22(uParam0, iParam1))
	{
		Function_266(uParam0);
		return 1;
	}
	return 0;
}

void Function_266(int iParam0) //Position: 0xA882 / 43138
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_267(int iParam0) //Position: 0xA896 / 43158
{
	Function_17(&Global_78617 + 52, iParam0);
	return;
}

void Function_268(int iParam0) //Position: 0xA8A7 / 43175
{
	Function_15(&Global_78617 + 52, iParam0);
	return;
}

void Function_269() //Position: 0xA8B8 / 43192
{
	bool bVar0;
	char* cVar1[64];
	int iVar17;
	
	iVar17 = 837;
	while (iVar17 < 971)
	{
		bVar0 = iVar17;
		strcpy(&cVar1, "Avatar ", 64);
		stradd(&cVar1, GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar0), 64);
		stradd(&cVar1, " unlock status", 64);
		iVar17++;
	}
	bVar0 = false;
	while (bVar0 <= 11)
	{
		strcpy(&cVar1, "Mount #", 64);
		straddi(&cVar1, bVar0, 64);
		stradd(&cVar1, " unlock status", 64);
		bVar0++;
	}
	return;
}

void Function_270(int iParam0, int iParam1, int iParam2) //Position: 0xA940 / 43328
{
	iParam1->f_4 = 2;
	iParam2 = iParam2;
	iParam1->f_8 = 16;
	Function_296(iParam1);
	Function_294();
	Function_292();
	switch (iParam0)
	{
		case 0x00000001:
			Function_289(iParam1);
			break;
		
		case 0x00000002:
			*iParam1 = 2500;
			iParam1->f_16 = 600.0f;
			Function_288(iParam1);
			Function_281(iParam1 + 276, 0);
			Function_279(iParam1, 1, 0, 5, 1);
			Function_279(iParam1, 2, 22, 1, 1);
			Function_274(iParam1, 1, 7, 3, 1);
			Function_274(iParam1, 2, 10, 1, 1);
			Function_274(iParam1, 3, 17, 2, 1);
			Function_274(iParam1, 4, 19, 1, 1);
			Function_274(iParam1, 5, 24, 1, 1);
			Function_273(iParam1 + 276, 4);
			break;
		
		case 0x00000003:
			*iParam1 = 1500;
			iParam1->f_16 = 600.0f;
			Function_288(iParam1);
			Function_281(iParam1 + 276, 0);
			break;
		
		case 0x00000011:
			*iParam1 = 5000;
			iParam1->f_16 = 600.0f;
			Function_288(iParam1);
			Function_281(iParam1 + 276, 0);
			Function_279(iParam1, 1, 0, 5, 1);
			Function_279(iParam1, 2, 22, 1, 1);
			Function_274(iParam1, 1, 7, 3, 1);
			Function_274(iParam1, 2, 10, 1, 1);
			Function_274(iParam1, 3, 17, 2, 1);
			Function_274(iParam1, 4, 19, 1, 1);
			Function_274(iParam1, 5, 24, 1, 1);
			Function_273(iParam1 + 276, 4);
			break;
		
		case 0x00000006:
			iParam1->f_16 = 900.0f;
			Function_288(iParam1);
			Function_281(iParam1 + 276, 0);
			Function_279(iParam1, 1, 0, 3, 1);
			Function_279(iParam1, 2, 22, 1, 1);
			Function_274(iParam1, 1, 9, 2, 1);
			Function_274(iParam1, 2, 1, 2, 1);
			Function_274(iParam1, 3, 16, 2, 1);
			Function_274(iParam1, 4, 19, 2, 1);
			Function_274(iParam1, 5, 24, 1, 1);
			Function_273(iParam1 + 276, 4);
			break;
		
		case 0x00000007:
			*iParam1 = 10;
			iParam1->f_16 = 600.0f;
			Function_281(iParam1 + 276, 0);
			Function_288(iParam1);
			Function_279(iParam1, 1, 0, 5, 1);
			Function_279(iParam1, 2, 22, 1, 1);
			Function_274(iParam1, 1, 7, 3, 1);
			Function_274(iParam1, 2, 10, 1, 1);
			Function_274(iParam1, 3, 17, 2, 1);
			Function_274(iParam1, 4, 19, 1, 1);
			Function_274(iParam1, 5, 24, 1, 1);
			Function_273(iParam1 + 276, 4);
			break;
		
		case 0x00000008:
			*iParam1 = 7;
			iParam1->f_16 = 600.0f;
			Function_281(iParam1 + 276, 0);
			Function_279(iParam1, 1, 0, 5, 1);
			Function_279(iParam1, 2, 22, 1, 1);
			Function_279(iParam1, 3, 25, 2, 1);
			Function_274(iParam1, 1, 9, 3, 1);
			Function_274(iParam1, 2, 1, 1, 1);
			Function_274(iParam1, 3, 24, 2, 1);
			Function_288(iParam1);
			Function_273(iParam1 + 276, 4);
			break;
		
		case 0x00000009:
			*iParam1 = 3;
			iParam1->f_16 = 600.0f;
			Function_281(iParam1 + 276, 0);
			Function_279(iParam1, 1, 0, 5, 1);
			Function_279(iParam1, 2, 22, 1, 1);
			Function_279(iParam1, 3, 25, 2, 1);
			Function_274(iParam1, 1, 9, 3, 1);
			Function_274(iParam1, 2, 1, 1, 1);
			Function_274(iParam1, 3, 24, 2, 1);
			Function_288(iParam1);
			Function_273(iParam1 + 276, 4);
			break;
		
		case 0x0000000E:
			iParam1->f_8 = 2;
			Function_281(iParam1 + 276, 0);
			Function_279(iParam1, 1, 5, 2, 1);
			break;
		
		case 0x0000000A:
			iParam1->f_8 = 6;
			Function_288(iParam1);
			break;
		
		case 0x0000000B:
			iParam1->f_8 = 6;
			Function_288(iParam1);
			break;
		
		case 0x0000000C:
			iParam1->f_8 = 16;
			Function_281(iParam1 + 276, 0);
			Function_279(iParam1, 1, 5, 5, 1);
			Function_279(iParam1, 3, 17, 2, 1);
			Function_288(iParam1);
			break;
		
		case 0x00000012:
			iParam1->f_8 = 2;
			Function_288(iParam1);
			break;
		
		case 0x00000013:
			*iParam1 = 5;
			iParam1->f_8 = 4;
			Function_281(iParam1 + 276, 0);
			Function_279(iParam1, 1, 0, 8, 1);
			Function_279(iParam1, 2, 9, 6, 1);
			Function_279(iParam1, 3, 22, 1, 1);
			Function_288(iParam1);
			Function_273(iParam1 + 276, 0);
			break;
		
		case 0x00000014:
			*iParam1 = 5;
			iParam1->f_8 = 4;
			Function_272(iParam1);
			Function_273(iParam1 + 276, 0);
			break;
	}
	if (Function_271())
	{
		Function_273(iParam1 + 276, 2);
	}
	return;
}

bool Function_271() //Position: 0xAD2D / 44333
{
	return Function_24(Global_79962, 1024);
}

void Function_272(int iParam0) //Position: 0xAD3D / 44349
{
	iParam0->f_844 = 1;
	return;
}

void Function_273(int iParam0, int iParam1) //Position: 0xAD49 / 44361
{
	(iParam0 + 228)->f_220 = 0;
	Function_12(iParam0 + 228 + 220, iParam1);
	return;
}

void Function_274(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xAD61 / 44385
{
	Function_275(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_275(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xAD79 / 44409
{
	Function_276(iParam0 + 228, iParam1, bParam2, iParam3, bParam4);
}

void Function_276(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xAD90 / 44432
{
	if (!Function_278(iParam1))
	{
		return;
	}
	Function_277(uParam0[iParam12], bParam2, iParam3, bParam4);
}

void Function_277(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xADB3 / 44467
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

bool Function_278(int iParam0) //Position: 0xADDD / 44509
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_279(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xADED / 44525
{
	Function_280(iParam0 + 276, iParam1, iParam2, iParam3, iParam4);
}

void Function_280(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xAE05 / 44549
{
	Function_276(uParam0, uParam1, uParam2, uParam3, uParam4);
}

void Function_281(int iParam0, bool bParam1) //Position: 0xAE1A / 44570
{
	Function_285(iParam0);
	Function_285(iParam0 + 228);
	if (bParam1)
	{
		Function_282(iParam0);
	}
	return;
}

void Function_282(int iParam0) //Position: 0xAE36 / 44598
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		Function_283(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_283(var uParam0, int iParam1) //Position: 0xAE56 / 44630
{
	Function_284(uParam0, iParam1, 0);
	return;
}

void Function_284(int iParam0, int iParam1, int iParam2) //Position: 0xAE64 / 44644
{
	(*iParam0 + 456)[iParam1] = iParam2;
	return;
}

void Function_285(int iParam0) //Position: 0xAE75 / 44661
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_287(iParam0[iVar02]);
		iVar0++;
	}
	iParam0->f_220 = 0;
	Function_286(iParam0, 0.0f);
	return;
}

void Function_286(var uParam0, int iParam1) //Position: 0xAEA2 / 44706
{
	uParam0->f_224 = iParam1;
	return;
}

void Function_287(int iParam0) //Position: 0xAEAE / 44718
{
	Function_277(iParam0, 4294967295, 0, 1);
	return;
}

void Function_288(int iParam0) //Position: 0xAEBC / 44732
{
	iParam0->f_844 = 0;
	return;
}

void Function_289(int iParam0) //Position: 0xAEC8 / 44744
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = Function_58(487);
	iVar1 = 1;
	iVar2 = 1;
	iVar3 = 3;
	while (iVar1 > 50 && iVar2)
	{
		if (fVar0 <= Global_83864[iVar16] && Global_83864[iVar16] < 0.0f)
		{
			if (!StackVal != 4294967295)
			{
				Function_291(StackVal, iParam0, iVar3, 0, 1);
				if (Global_83823[StackVal])
				{
					SET_WEAPON_GOLD(StackVal, Function_21(), true);
				}
				iVar3++;
			}
			Function_290(iVar1, 1);
			iVar1++;
		}
		else
		{
			iVar2 = 0;
		}
	}
	return;
}

void Function_290(int iParam0, int iParam1) //Position: 0xAF65 / 44901
{
	Function_12(&Global_83864[iParam06] + 16, iParam1);
	return;
}

void Function_291(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xAF7A / 44922
{
	Function_280(iParam0 + 276, uParam1, uParam2, uParam3, uParam4);
}

void Function_292() //Position: 0xAF92 / 44946
{
	var uVar0;
	
	uVar0 = "";
	Function_293(uVar0, uVar0, 0, 58, 58, 1);
	return;
}

void Function_293(char* cParam0, char* cParam1, bool bParam2, var uParam3, var uParam4, var uParam5) //Position: 0xAFA8 / 44968
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

void Function_294() //Position: 0xB038 / 45112
{
	Function_295("%s", 0);
	return;
}

void Function_295(bool bParam0, bool bParam1) //Position: 0xB047 / 45127
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

void Function_296(int iParam0) //Position: 0xB07C / 45180
{
	Function_281(iParam0 + 276, 1);
	Function_272(iParam0);
	Function_279(iParam0, 1, 4, 7, 1);
	Function_279(iParam0, 2, 22, 1, 1);
	Function_274(iParam0, 1, 5, 5, 1);
	Function_274(iParam0, 2, 10, 3, 1);
	Function_274(iParam0, 3, 17, 1, 1);
	Function_274(iParam0, 4, 19, 1, 1);
	Function_274(iParam0, 5, 24, 1, 1);
	Function_301(iParam0, 5, 3);
	Function_301(iParam0, 4, 3);
	Function_301(iParam0, 3, 10);
	Function_301(iParam0, 7, 18);
	Function_301(iParam0, 6, 20);
	Function_301(iParam0, 8, 15);
	Function_301(iParam0, 9, 15);
	Function_301(iParam0, 10, 10);
	Function_301(iParam0, 11, 5);
	Function_300(iParam0, 0, 45.0f);
	Function_300(iParam0, 1, 45.0f);
	Function_300(iParam0, 2, 15.0f);
	Function_300(iParam0, 3, 15.0f);
	Function_300(iParam0, 4, 30.0f);
	Function_300(iParam0, 5, 30.0f);
	Function_299(iParam0, 15.0f);
	Function_298(iParam0, 15.0f);
	Function_297(iParam0, 15.0f);
	Function_286(iParam0 + 276 + 228, 100.0f);
	Function_273(iParam0 + 276, 0);
	return;
}

void Function_297(int iParam0, int iParam1) //Position: 0xB192 / 45458
{
	(iParam0 + 276 + 528)->f_28 = iParam1;
	return;
}

void Function_298(int iParam0, int iParam1) //Position: 0xB1A4 / 45476
{
	(iParam0 + 276 + 528)->f_36 = iParam1;
	return;
}

void Function_299(int iParam0, int iParam1) //Position: 0xB1B6 / 45494
{
	(iParam0 + 276 + 528)->f_32 = iParam1;
	return;
}

void Function_300(int iParam0, int iParam1, int iParam2) //Position: 0xB1C8 / 45512
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

void Function_301(int iParam0, int iParam1, int iParam2) //Position: 0xB1EB / 45547
{
	Function_284(iParam0 + 276, iParam1, iParam2);
	return;
}

bool Function_302(bool bParam0, int iParam1, bool bParam2) //Position: 0xB1FD / 45565
{
	char* cVar0[64];
	
	if (UNK_0xFAD5A270(cParam0, iParam1))
	{
		if (bParam2)
		{
			if (iParam1->f_40 == 4294967294)
			{
				iParam1->f_40 = Function_191(StackVal, StackVal, *(iParam1 + 28), 0, 1, 1);
				if (!GAME_INSTANCE_SET_REGION(bParam0, iParam1->f_40))
				{
					strcpy(&cVar0, "Unable to set region for ", 64);
					stradd(&cVar0, bParam0, 64);
				}
			}
		}
		return 1;
	}
	return 0;
}

void Function_303() //Position: 0xB262 / 45666
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		Local_454[iVar02] = 4294967295;
		if (IS_ACTOR_VALID(StackVal))
		{
			DESTROY_ACTOR(StackVal);
		}
		Local_454[iVar02].f_4 = "";
		iVar0++;
	}
	return;
}

int Function_304(int iParam0) //Position: 0xB2AC / 45740
{
	return Function_86(Global_83864.f_1252, iParam0);
}

