//Decompiled with MagicRDR v1.0
//Function Count : 240
//Statics Count : 107
//Natives Count : 363
//Parameters Count : 62

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 6;
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
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	float fLocal_40 = 0.0f;
	int iLocal_41 = 0;
	float fLocal_42 = 0.0f;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<31> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	
	iLocal_38 = 2;
	iLocal_39 = 4;
	fLocal_40 = 70.0f;
	*(&iVar1 + 4 + 72 + 28) = 1;
	*(&iVar1 + 252 + 48) = 5;
	*(&iVar1 + 252 + 96) = 2;
	*(&iVar1 + 252 + 120) = 9;
	*(&iVar1 + 252 + 272) = 5;
	*(&iVar1 + 252 + 360) = 2;
	*(&iVar1 + 784) = 23;
	*(&iVar1 + 1160) = 7;
	*(&iVar1 + 1224) = 3;
	*(&iVar1 + 4) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_206(&iVar1, "$/fragments/p_gen_campFire02x");
	while (!IS_EXITFLAG_SET())
	{
		iVar0 = Function_28(&iVar1);
		WAIT(iVar0);
	}
	Function_1(&iVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xAE / 174
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	Function_24(&iParam0, 0, 0);
	Function_23(&iParam0);
	DESTROY_OBJECT(&iParam0 + 1528);
	if (Function_22())
	{
		Function_13();
	}
	if (IS_OBJECTSET_VALID(&iParam0 + 1296))
	{
		Function_12(&iParam0 + 1296);
		DESTROY_OBJECTSET(&iParam0 + 1296);
	}
	if (IS_OBJECTSET_VALID(&iParam0 + 1296))
	{
		iVar0 = GET_OBJECTSET_SIZE(&iParam0 + 1296);
		uVar3 = GET_AMBIENT_LAYOUT();
		iVar1 = 0;
		while (iVar1 < (iVar0 - 1))
		{
			uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iParam0 + 1296);
			if (IS_OBJECT_VALID(&uVar2))
			{
				GIVE_OBJECT_TO_LAYOUT(&uVar2, &uVar3);
			}
			iVar1++;
		}
		Function_12(&iParam0 + 1296);
		DESTROY_OBJECTSET(&iParam0 + 1304);
	}
	if (IS_BLIP_VALID(&iParam0 + 1328))
	{
		SET_BLIP_BLINK(&iParam0 + 1328, 0, 0, 5f);
		REMOVE_BLIP(&iParam0 + 1328);
	}
	if (IS_OBJECT_VALID(&iParam0 + 1264))
	{
		DESTROY_OBJECT(&iParam0 + 1264);
	}
	if (IS_OBJECT_VALID(&iParam0 + 1320))
	{
		DESTROY_OBJECT(&iParam0 + 1320);
	}
	Function_10(&iParam0 + 1432, 0, 0);
	DESTROY_OBJECT(&iParam0 + 1432);
	RELEASE_LAYOUT_REF(&iParam0 + 1256);
	if (IS_ITERATOR_VALID(&iParam0 + 1400))
	{
		DESTROY_ITERATOR(&iParam0 + 1400);
	}
	Function_2(&iParam0 + 252);
	return;
}

void Function_2(struct<473> Param0) //Position: 0x1F3 / 499
{
	bool bVar0;
	
	Global_39620 = (Global_39620 - 1);
	if (Param0.f_428)
	{
		if (SQUAD_IS_VALID(&Param0 + 392))
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&Param0 + 392))
			{
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0)))
				{
					if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0), "nconvAdded"))
					{
						AI_CONVERSE_DISABLE(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0));
						AI_CONVERSE_REMOVE_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0));
					}
				}
				bVar0++;
			}
		}
		Param0.f_428 = 0;
	}
	if (SQUAD_IS_VALID(&Param0 + 392))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&Param0 + 392))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0)))
			{
				if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0), "nconvAdded"))
				{
					DECOR_REMOVE(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0), "nconvAdded");
				}
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0));
			}
			bVar0++;
		}
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		UNK_0xE18028C1(&Param0);
		DESTROY_OBJECT(&Param0);
	}
	if (Param0.f_464 >= 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(Param0.f_464);
	}
	if (Param0.f_468 >= 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(Param0.f_468);
	}
	if (Param0.f_468 >= 0)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(Param0.f_472);
	}
	Function_6(&Param0 + 120);
	if (IS_BLIP_VALID(&Param0 + 400))
	{
		REMOVE_BLIP(&Param0 + 400);
	}
	Function_4();
	if (IS_ITERATOR_VALID(&Param0 + 456))
	{
		DESTROY_ITERATOR(&Param0 + 456);
	}
	Function_3();
	RELEASE_LAYOUT_REF(&Param0 + 16);
	return;
}

void Function_3() //Position: 0x3A1 / 929
{
	return;
}

void Function_4() //Position: 0x3A7 / 935
{
	Function_5();
	return;
}

void Function_5() //Position: 0x3B0 / 944
{
	Function_6(&iLocal_0 + 8);
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_6(int iParam0) //Position: 0x3C3 / 963
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_7(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x3EB / 1003
{
	if (Function_9(&(Param0[iParam12]), 4))
	{
		if (Function_9(&(Param0[iParam12]), 1))
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
			Function_8(&(Param0[iParam12]), 1);
			Function_8(&(Param0[iParam12]), 2);
			Function_8(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_8(struct<13> Param0) //Position: 0x536 / 1334
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x553 / 1363
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(var uParam0, bool bParam1, bool bParam2) //Position: 0x571 / 1393
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (&bParam2)
			{
				if (!Function_11(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(&uVar1);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (&bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(&uVar1);
				}
				else
				{
					RELEASE_ACTOR(&uVar1);
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_11(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x5FA / 1530
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_12(var uParam0) //Position: 0x61A / 1562
{
	var uVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			RELEASE_OBJECT_REF(&uVar0);
		}
	}
	return;
}

void Function_13() //Position: 0x669 / 1641
{
	Function_15();
	Function_14(10, 3);
	return;
}

void Function_14(int iParam0, int iParam1) //Position: 0x678 / 1656
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_15() //Position: 0x7C5 / 1989
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_20())
	{
		Function_19(10, 3);
	}
	else
	{
		Function_17();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_16(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_16());
	UI_POP("nDebugMenu");
	return;
}

var Function_16() //Position: 0x810 / 2064
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_17() //Position: 0x825 / 2085
{
	Function_18(25, 2);
	return;
}

void Function_18(int iParam0, int iParam1) //Position: 0x831 / 2097
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "HEADERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "FOOTERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nHEADERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "POINTER");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_19(int iParam0, int iParam1) //Position: 0xA5D / 2653
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

bool Function_20() //Position: 0xBAA / 2986
{
	if (Global_6623)
	{
		return 1;
	}
	if (Global_6625)
	{
		return 1;
	}
	if (Global_6635)
	{
		return 1;
	}
	if (Global_6627)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(&Global_124165))
	{
		switch (Global_124175.f_32)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_21(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_21(int iParam0, bool bParam1) //Position: 0xC12 / 3090
{
	return (iParam0 && bParam1) == 0;
}

bool Function_22() //Position: 0xC1F / 3103
{
	return Global_54085;
}

void Function_23(int iParam0) //Position: 0xC28 / 3112
{
	Function_6(&iParam0 + 784);
	STREAMING_UNLOAD_BOUNDS();
	return;
}

void Function_24(int iParam0, int iParam1, int iParam2) //Position: 0xC3A / 3130
{
	var uVar0;
	
	if (IS_BLIP_VALID(&iParam0 + 1328))
	{
		REMOVE_BLIP(&iParam0 + 1328);
	}
	if (iParam1 == 1)
	{
		if (IS_OBJECT_VALID(&iParam0 + 1288))
		{
			GET_OBJECT_POSITION(&iParam0 + 1264, &uVar0);
			(&iParam0 + 1328) = ADD_BLIP_FOR_COORD(&uVar0, 393, 0, 2, 0);
		}
	}
	else if (IS_BLIP_VALID(&iParam0 + 1328))
	{
		SET_BLIP_BLINK(&iParam0 + 1328, 0, 0, 5f);
	}
	if (iParam2 == 1)
	{
		Function_27(1, 0x41200000);
	}
	else
	{
		Function_25(1);
	}
	return;
}

void Function_25(int iParam0) //Position: 0xCC0 / 3264
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_26())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_26() //Position: 0xD00 / 3328
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_15852[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_27(int iParam0, var uParam1) //Position: 0xD25 / 3365
{
	if (!Function_26())
	{
		switch (&iParam0)
		{
			case 0x00000001:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, &uParam1, 0);
				break;
			
			case 0x00000002:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, &uParam1, 0);
				break;
			
			default:
				break;
			}
	}
	return;
}

int Function_28(struct<1517> Param0) //Position: 0xD5F / 3423
{
	bool bVar0;
	int iVar1;
	char* cVar2[32];
	var uVar10;
	struct<2> Var11;
	struct<2> Var13;
	bool bVar15;
	int iVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	
	if (!IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)) || !IS_ACTOR_ALIVE(GET_PLAYER_ACTOR(0)))
	{
		Param0 = 5;
	}
	else if (Global_6623 != 1 && (&Param0 + 4)->f_44 != 0)
	{
		Param0 = 5;
	}
	else if ((IS_EARLIER_THAN(&Param0 + 1336, GET_TIME_OF_DAY()) && VDIST(Global_54078, *(&Param0 + 4 + 16)) < Function_205(1)) && !WOULD_ACTOR_BE_VISIBLE(false, &Param0 + 4 + 16, 3212836864))
	{
		Param0 = 5;
	}
	bVar0 = 600;
	switch (Param0)
	{
		case 0x00000000:
			if (Function_203(StackVal, &Param0, *(&Param0 + 4 + 16)))
			{
				Param0 = 1;
				bVar0 = false;
				if ((&Param0 + 4)->f_72 == 0)
				{
					(&Param0 + 4)->f_72 = 1;
				}
			}
			else
			{
				bVar0 = 600;
				break;
			}
			break;
		
		case 0x00000001:
			if (!Function_202(StackVal, *(&Param0 + 4 + 16)))
			{
				iVar16 = 1;
			}
			else if (Function_169(&Param0 + 4, &bVar0, &Param0 + 1520, &Param0 + 1516, 1))
			{
				iVar16 = 1;
			}
			else if (Param0.f_1516 == 1)
			{
				if ((&Param0 + 4)->f_44 == 1)
				{
					Function_168("Could not find a road point to launch from", 0x40800000, 0, 2, 1, 0);
				}
				Param0 = 5;
			}
			if (iVar16 == 1)
			{
				if (!Function_202(StackVal, *(&Param0 + 4 + 16)))
				{
					*(&Param0 + 4 + 28) = Vector(0.0f, RAND_FLOAT_RANGE(0.0f, 360.0f), 0.0f);
					(&Param0 + 4)->f_52 = Global_43789;
					if (!Function_167((&Param0 + 1468)->f_24))
					{
						LOG_ERROR("Deadposter got an invalid external target region.");
					}
				}
				else
				{
					Param0 = 5;
					LOG_ERROR("COULD NOT FIND a dead poster starting position.");
				}
				strcpy(&cVar2, "deadPosterLay", 32);
				cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165(&cVar2) };
				*(&Param0 + 1256) = CREATE_LAYOUT(&cVar2);
				if (!IS_LAYOUTREF_VALID(&Param0 + 1256))
				{
					bVar0 = false;
					Param0 = 5;
					break;
				}
				*(&Param0 + 1296) = CREATE_OBJECTSET_IN_LAYOUT(Function_164(), &Param0 + 1256, 4294967295, 0);
				*(&Param0 + 1304) = CREATE_OBJECTSET_IN_LAYOUT(Function_164(), &Param0 + 1256, 4294967295, 0);
				Function_163(&Param0 + 252, &Param0 + 1536, "$/tune/refGroups/campsiteSets/cam_campfireMedium01x");
				*(&Param0 + 1336) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0 + 1336, 0, 0, 5, 0);
				Param0.f_1452 = 1;
				Param0.f_1456 = 1;
				Param0 = 2;
			}
			else if (Param0.f_1516 == 1)
			{
				Param0 = 5;
			}
			break;
		
		case 0x00000002:
			if (!IS_OBJECT_VALID(&Param0 + 1528))
			{
				strcpy(&cVar2, "deadPosterSnap", 32);
				cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165(&cVar2) };
				*(&Param0 + 1528) = CREATE_POINT_IN_LAYOUT(&Param0 + 1256, &cVar2, *(&Param0 + 4 + 16), *(&Param0 + 4 + 28));
			}
			if (Param0.f_1444 != 0 && IS_LAYOUTREF_VALID(&Param0 + 252 + 24))
			{
				if (IS_LAYOUTREF_VALID(&Param0 + 252 + 24))
				{
					*(&Param0 + 1400) = CREATE_OBJECT_ITERATOR(&Param0 + 252 + 24);
				}
				if (IS_ITERATOR_VALID(&Param0 + 1400))
				{
					ITERATE_ON_PARTIAL_NAME(&Param0 + 1400, "deadposter_flag");
					uVar10 = START_OBJECT_ITERATOR(&Param0 + 1400);
					while (IS_OBJECT_VALID(&uVar10))
					{
						PRINTSTRING("Deadposter name: ");
						PRINTSTRING(GET_OBJECT_NAME(&uVar10));
						PRINTNL();
						GET_OBJECT_POSITION(&uVar10, &Var11);
						Var11.f_4 = (StackVal + 0,5f);
						GET_OBJECT_ORIENTATION(&uVar10, &Var13);
						Var13.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
						uVar17 = GET_MATERIAL_AT_VECTOR(&Var11);
						if (((uVar17 & 32 != 32 || uVar17 & 16 != 16) || uVar17 & 64 != 64) && (&Param0 + 4)->f_44 != 0)
						{
							iVar18 = 0;
						}
						else
						{
							iVar18 = 1;
						}
						if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(&uVar10), "_post"))
						{
							if (!IS_OBJECT_VALID(&Param0 + 1280))
							{
								*(&Param0 + 1408) = Var11;
								if (!Function_161(&Param0))
								{
									Param0 = 5;
									LOG_ERROR("Problem creating dead poster");
									break;
								}
							}
						}
						else
						{
							bVar15 = STRING_CONTAINS_STRING(GET_OBJECT_NAME(&uVar10), "horse");
							if (iVar18 == 1)
							{
								if (!Function_160(StackVal, StackVal, &Param0, Var11, Var13, bVar15))
								{
								}
								if (!IS_OBJECT_VALID(&Param0 + 1272) && bVar15 != 0)
								{
									*(&Param0 + 1272) = &uVar10;
									PRINTSTRING("Deadposter name: ");
									PRINTSTRING(GET_OBJECT_NAME(&Param0 + 1272));
									PRINTNL();
								}
							}
						}
						uVar10 = OBJECT_ITERATOR_NEXT(&Param0 + 1400);
					}
				}
				if (!IS_OBJECT_VALID(&Param0 + 1272))
				{
					LOG_ERROR("Invalid dead poster flag found.");
					Param0 = 5;
					break;
				}
				if (!Function_159(StackVal, &Param0, *(&Param0 + 1408)))
				{
					break;
				}
				Param0.f_1444 = 1;
				Function_157(&Param0 + 1344);
				Function_157(&Param0 + 1376);
				Param0 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_155(&Param0))
			{
				*(&iVar19 + 28) = 1;
				Function_154();
				Function_154();
				if (Function_149(StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/Ambient/PointOfInterest/event_bountyhunter", 4), Function_154(), Function_154(), 0, 0, 0, Param0.f_1464, 0, 0, 0, &iVar19, 1, 0, 0x40a00000, 4294967295, 0, 0))
				{
					Function_146(1);
				}
				else
				{
					LOG_ERROR("Problem setting bounty hunter beat from dead poster");
					Param0 = 5;
					break;
				}
				Function_24(&Param0, 0, 0);
				if (IS_BLIP_VALID(&Param0 + 1328))
				{
					SET_BLIP_BLINK(&Param0 + 1328, 0, 0, 5f);
				}
				Function_144(0);
				Param0 = 5;
				bVar0 = 8000;
			}
			if (Function_143(StackVal, &Param0, *(&Param0 + 4 + 16)) == 1)
			{
				if (Param0.f_1452 == 1)
				{
					Function_140("npm_dp_fnd", 0x41200000, 1, 0, 2, 1, 0);
					Param0.f_1452 = 0;
				}
			}
			if (Function_139(StackVal, &Param0, *(&Param0 + 4 + 16)) == 1)
			{
				if (Param0.f_1456 == 1)
				{
					Function_24(&Param0, 1, 1);
					if (IS_BLIP_VALID(&Param0 + 1328))
					{
						SET_BLIP_BLINK(&Param0 + 1328, 1, 0, 5f);
					}
					Function_157(&Param0 + 1360);
					Param0.f_1456 = 0;
				}
				if (Function_137(&Param0 + 1360, 5.0f))
				{
					if (IS_BLIP_VALID(&Param0 + 1328))
					{
						Function_24(&Param0, 1, 1);
						SET_BLIP_BLINK(&Param0 + 1328, 0, 0, 5f);
					}
				}
			}
			if (SQUAD_IS_VALID(&Param0 + 1432))
			{
				if (SQUAD_IS_VALID(&Param0 + 1432))
				{
					if (VDIST(Global_54078, *(&Param0 + 1420)) > 3.0f)
					{
						Function_136(&Param0 + 1432);
						Function_10(&Param0 + 1432, 1, 0);
						Function_135(&Param0 + 1432);
						Function_136(&Param0 + 1432);
						Function_134(&Param0 + 1432, &Global_54076, -1.0f, -1.0f, 0, 1);
						Function_10(&Param0 + 1432, 0, 0);
						SQUAD_MAKE_EMPTY(&Param0 + 1432);
						DESTROY_OBJECT(&Param0 + 1432);
					}
					else if (Function_130(&Param0 + 1376, 5.0f))
					{
						Param0.f_1392 = RAND_INT_RANGE_DIFFERENT(Param0.f_1392, 0, (SQUAD_GET_SIZE(&Param0 + 1432) - 1));
						TASK_BIRD_LAND_AT_COORD(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 1432, Param0.f_1392), &Param0 + 1408);
						Function_157(&Param0 + 1376);
					}
				}
			}
			bVar0 = false;
			break;
		
		case 0x00000005:
			if (IS_BLIP_VALID(&Param0 + 1328))
			{
				SET_BLIP_BLINK(&Param0 + 1328, 0, 0, 5f);
			}
			TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
			bVar0 = false;
			break;
	}
	if (IS_EXITFLAG_SET())
	{
	}
	iVar1 = Function_30(&Param0 + 252, &Param0 + 1528, 1, 0, 0, 0, Function_164(), 10.0f, 0, 0x43160000);
	return Function_29(iVar1, bVar0);
}

int Function_29(int iParam0, bool bParam1) //Position: 0x1601 / 5633
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

var Function_30(struct<477> Param0) //Position: 0x1613 / 5651
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var9;
	bool bVar11;
	int iVar12;
	
	uParam5 = uParam5;
	bVar1 = false;
	bVar11 = 0 & Function_129();
	iVar12 = 600;
	if (!Function_128(8))
	{
		Param0.f_8 = 12;
	}
	if (bVar11)
	{
		if (IS_OBJECT_VALID(GRINGO_GET_MY_OBJECT_REF()))
		{
			if (!DECOR_CHECK_EXIST(GRINGO_GET_MY_OBJECT_REF(), "MP_ONLY"))
			{
				return 4294967295;
			}
		}
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (Function_127("npressDemo"))
			{
				if (((Global_38379 + 2000.0f) < GET_CURRENT_GAME_TIME() && !bParam2) && !Global_6611)
				{
					iVar12 = 1000;
					break;
				}
			}
			else if ((((Global_38379 + 200.0f) < GET_CURRENT_GAME_TIME() && !bParam2) && !Global_6611) && 1)
			{
				iVar12 = 1000;
				break;
			}
			if ((!bParam2 && !Global_6611) && 1)
			{
				if (GET_WEATHER() != 3 || GET_WEATHER() != 4)
				{
					iVar12 = 1000;
					break;
				}
			}
			GET_OBJECT_POSITION(&uParam1, &Var7);
			GET_OBJECT_ORIENTATION(&uParam1, &Param0 + 336);
			if (Global_99472 == 32)
			{
				iLocal_38 = iLocal_39;
			}
			if (Global_6611)
			{
				if (Function_126(StackVal, &Global_54076, Var7) < 10.0f)
				{
					break;
				}
			}
			if ((Global_39620 + 1 > iLocal_38 || bParam2) || Global_6611)
			{
				if (Function_125(&Var7, 50.0f, &Param0 + 324, 4294967295))
				{
					if (((!bParam2 && !Function_123(&Param0 + 324, &fLocal_40, 256, 0)) && !Global_6611) && 1)
					{
						iVar12 = 1000;
					}
					else
					{
						if (UNK_0x214AFB8C(&Param0 + 32))
						{
							STREAMING_REQUEST_PROP(&Param0 + 32, false);
						}
						if (UNK_0x214AFB8C(&Param0 + 40))
						{
							STREAMING_REQUEST_PROPSET(&Param0 + 40);
						}
						iVar3 = FIND_NAMED_POPULATION_SET(&uParam6);
						if (Global_6623)
						{
							if (STRING_CONTAINS_STRING(&uParam6, "bad_guys"))
							{
								Param0.f_8 = 12;
								break;
							}
						}
						if ((IS_POPSET_VALID(&iVar3) && IS_POPSET_VALID(&(Global_46972[6]))) && !bParam2)
						{
							bVar1 = false;
							if ((iParam3 < 1 && !STRING_CONTAINS_STRING(&uParam6, "bad_guys")) && !STRING_CONTAINS_STRING(&uParam6, "law"))
							{
								(*&Param0 + 48)[0] = Function_122();
								(*&Param0 + 48)[1] = Function_121();
								Function_120(&Param0 + 120, (*&Param0 + 48)[0], 2, 0);
								Function_120(&Param0 + 120, (*&Param0 + 48)[1], 2, 0);
								bVar1 = 2;
							}
							if (iParam3 >= 1)
							{
								(*&Param0 + 96)[0] = Function_112(&(Global_46972[6]), 0, 4, 23, 1);
								(*&Param0 + 96)[1] = Function_112(&(Global_46972[6]), 0, 4, 23, 1);
								if ((*&Param0 + 96)[0] == 4294967295)
								{
									(*&Param0 + 96)[0] = 976;
								}
								if ((*&Param0 + 96)[1] == 4294967295)
								{
									(*&Param0 + 96)[1] = 980;
								}
								Function_120(&Param0 + 120, (*&Param0 + 96)[0], 2, 0);
								Function_120(&Param0 + 120, (*&Param0 + 96)[1], 2, 0);
							}
							else
							{
								(*&Param0 + 96)[0] = Function_112(&(Global_46972[6]), 0, 0, 23, 1);
								if ((*&Param0 + 96)[0] == 4294967295)
								{
									(*&Param0 + 96)[0] = 977;
								}
								(*&Param0 + 96)[1] = 976;
								Function_120(&Param0 + 120, (*&Param0 + 96)[0], 2, 0);
							}
							while (bVar1 <= iParam3)
							{
								if ((bVar1 != 2 && !STRING_CONTAINS_STRING(&uParam6, "bad_guys")) && !STRING_CONTAINS_STRING(&uParam6, "law"))
								{
									(*&Param0 + 48)[bVar1] = Function_112(&iVar3, 1, 1, 4294967295, 1);
								}
								else
								{
									(*&Param0 + 48)[bVar1] = Function_112(&iVar3, 1, 0, 4294967295, 1);
								}
								if ((*&Param0 + 48)[bVar1] == 4294967295)
								{
									Param0.f_8 = 12;
									break;
								}
								Function_120(&Param0 + 120, (*&Param0 + 48)[bVar1], 2, 0);
								bVar1++;
							}
						}
						else if (!bParam2 && 1)
						{
							return 4294967295;
						}
						if (!bParam2 || 0)
						{
							uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, Function_164(), 4,203895E-45f, *(&Param0 + 324), Vector(0.0f, 0.0f, 0.0f), Vector(fLocal_40, 20.0f, fLocal_40));
							DECOR_SET_INT(&uVar0, "script", GET_THIS_SCRIPT_ID());
							DECOR_SET_INT(&uVar0, "category", 256);
							Global_39620++;
							Function_108(&uVar0, 0);
							*(&Param0 + 480) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 16, Function_164(), 4,203895E-45f, *(&Param0 + 324), Vector(0.0f, 0.0f, 0.0f), Vector((&fParam7 + 1,5f), 9.0f, (&fParam7 + 1,5f)));
						}
						Param0.f_8 = 1;
					}
				}
			}
			else
			{
				iVar12 = 1000;
			}
			break;
		
		case 0x00000006:
			Function_85(&Param0, &iVar12);
			break;
		
		case 0x00000001:
			if (Function_81(&Param0 + 120))
			{
				Param0.f_8 = 4;
			}
			iVar12 = 0;
			break;
		
		case 0x00000004:
			if (Function_74(&Param0, &uParam1))
			{
				if (IS_OBJECT_VALID(&Param0 + 352))
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 352), false);
				}
				Param0.f_8 = 8;
			}
			else if (!bParam2)
			{
				LOG_ERROR("Couldn't create the campsire layout");
				Param0.f_8 = 12;
				break;
			}
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				Param0.f_476 = 0;
				*(&Param0 + 456) = CREATE_OBJECT_ITERATOR(&Param0 + 24);
				ITERATE_ON_OBJECT_TYPE(&Param0 + 456, 12);
				ITERATE_IN_LAYOUT(&Param0 + 456, &Param0 + 24);
				START_OBJECT_ITERATOR(&Param0 + 456);
				bVar1 = false;
				uVar4 = OBJECT_ITERATOR_CURRENT(&Param0 + 456);
				while (IS_OBJECT_VALID(&uVar4))
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uVar4)) && bVar1 > iParam3)
					{
						DECOR_SET_BOOL(&uVar4, "ForceAllowSun", 1);
						if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(&uVar4), "horse") && 0)
						{
							DESTROY_OBJECT(&uVar4);
						}
						else if (GRINGO_USABLE_BY_ACTOR_ENUM((*&Param0 + 48)[bVar1], GET_GRINGO_FROM_OBJECT(&uVar4), "UseCase1"))
						{
							*(&Param0 + 272[bVar1]) = &uVar4;
							GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&uVar4), "UseCase1", "UseAnim", (*&Param0 + 48)[bVar1]);
							bVar1++;
							Param0.f_476++;
							PRINTINT(Param0.f_476);
						}
					}
					uVar4 = OBJECT_ITERATOR_NEXT(&Param0 + 456);
				}
				if (IS_ITERATOR_VALID(&Param0 + 456))
				{
					DESTROY_ITERATOR(&Param0 + 456);
				}
				Param0.f_8 = 9;
			}
			else
			{
				Param0.f_8 = 2;
			}
			break;
		
		case 0x00000009:
			PRINTINT(Param0.f_476);
			bVar5 = true;
			bVar1 = false;
			while (bVar1 <= Param0.f_476)
			{
				if (IS_OBJECT_VALID(&Param0 + 272[bVar1]))
				{
					if (!GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(&Param0 + 272[bVar1]), "UseCase1", "UseAnim", (*&Param0 + 48)[bVar1]))
					{
						bVar5 = false;
					}
				}
				bVar1++;
			}
			if (bVar5)
			{
				Param0.f_8 = 2;
			}
			break;
		
		case 0x00000002:
			if (STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 324), 10.0f))
			{
				if (((Function_126(StackVal, &Global_54076, *(&Param0 + 324)) < 120.0f || bParam2) || Global_6611) || 0)
				{
					if (UNK_0x214AFB8C(&Param0 + 32))
					{
						if (IS_OBJECT_VALID(&Param0 + 352))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 352), true);
						}
						uVar6 = CREATE_PROP_IN_LAYOUT_BY_ID(&Param0 + 16, Function_164(), &Param0 + 32, *(&Param0 + 324), *(&Param0 + 336), 0);
						Param0 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, Function_164(), "amb_campfire_light", &uVar6, Vector(0.0f, 0.0f, 0.0f), 1, &uVar6);
						UNK_0x6745191B(StackVal, &Param0, Vector(0.0f, 0.0f, 0.0f));
						if (GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_OBJECT(&uVar6), "center", &Var7, &Var9))
						{
							Var7 = -Vector(Var7, StackVal, StackVal);
							GET_OBJECT_RELATIVE_POSITION(&uVar6, Var7, &Var9);
							SET_OBJECT_POSITION(&uVar6, Var9);
							SNAP_OBJECT_TO_GROUND(&uVar6, 10.0f, 1, 1092616192);
						}
						else
						{
							LOG_ERROR("can't find the center locator for campfire");
						}
					}
					else if (!bParam2 && 1)
					{
						LOG_ERROR("Campfire beacon asset isn't valid.. you won't see a campfire");
					}
					Function_72(StackVal, &Param0 + 464, &Param0 + 472, &Param0 + 468, &fParam7, *(&Param0 + 324));
					Param0.f_8 = 5;
					iVar12 = 0;
					Param0.f_432 = 1;
				}
			}
			else
			{
				iVar12 = 250;
			}
			break;
		
		case 0x00000005:
			DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "DontRun", 1);
			if (UNK_0x214AFB8C(&Param0 + 40))
			{
				NET_OBJECT_REPLICATION_MODE_START(2, 0);
				Function_71(StackVal, StackVal, &Param0 + 16, Function_164(), GET_ASSET_NAME(&Param0 + 40, 7), *(&Param0 + 324), *(&Param0 + 336), 4294967295);
				NET_OBJECT_REPLICATION_MODE_END(2);
				DECOR_SET_BOOL(&uParam1, "PropsCreated", 1);
			}
			else if (!bParam2)
			{
				LOG_ERROR("Propset ID invalid.  Campfire problem");
				Param0.f_8 = 12;
				break;
			}
			Function_70(&Param0 + 24);
			STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(&Param0 + 24));
			bVar1 = false;
			Param0.f_8 = 10;
			iVar12 = 0;
			break;
		
		case 0x0000000A:
			if (!bParam2 && 1)
			{
				*(&Param0 + 392) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 24, Function_164()));
				*(&Param0 + 456) = CREATE_OBJECT_ITERATOR(&Param0 + 24);
				bVar1 = false;
				while (bVar1 <= iParam3)
				{
					Function_68(&Param0 + 16, &Param0 + 456, &Param0 + 392, (*&Param0 + 48)[bVar1], &Param0 + 272[bVar1], &Param0 + 480, bVar1);
					bVar1++;
				}
				if (iParam3 >= 1)
				{
					Function_67(&Param0 + 24, &Param0 + 16, &Param0 + 96, 2, &Param0 + 360);
				}
				else
				{
					Function_67(&Param0 + 24, &Param0 + 16, &Param0 + 96, 1, &Param0 + 360);
				}
				if (SQUAD_IS_VALID(&Param0 + 392))
				{
					if (SQUAD_GET_SIZE(&Param0 + 392) != 0 && iParam3 < 0)
					{
						LOG_ERROR("Campfire no spawn problem! Report to AlanB.");
						Param0.f_8 = 12;
						break;
					}
				}
				if (STRING_CONTAINS_STRING(&uParam6, "bad_guys"))
				{
					Param0.f_416 = 1;
				}
				ITERATE_ON_OBJECT_TYPE(&Param0 + 456, 15);
				ITERATE_IN_LAYOUT(&Param0 + 456, &Param0 + 24);
				uVar2 = START_OBJECT_ITERATOR(&Param0 + 456);
				while (IS_OBJECT_VALID(&uVar2))
				{
					if (IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(&uVar2)))
					{
						*(&Param0 + 384) = GET_ACTOR_FROM_OBJECT(&uVar2);
					}
					uVar2 = OBJECT_ITERATOR_NEXT(&Param0 + 456);
				}
				if (IS_ITERATOR_VALID(&Param0 + 456))
				{
					DESTROY_ITERATOR(&Param0 + 456);
				}
			}
			if ((bParam2 || !bParam4) || bVar11)
			{
				if (IS_OBJECTSET_VALID(&Param0 + 448))
				{
					bVar1 = false;
					bVar1 = false;
					while (bVar1 <= GET_OBJECTSET_SIZE(&Param0 + 448))
					{
						DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &Param0 + 448));
						bVar1++;
					}
				}
				if (IS_OBJECT_VALID(&Param0 + 352))
				{
					DESTROY_OBJECT(&Param0 + 352);
				}
			}
			Param0.f_8 = 11;
			iVar12 = 0;
			break;
		
		case 0x0000000B:
			if (Global_6611)
			{
			}
			if ((!bParam2 && !bVar11) && !Param0.f_428)
			{
				if (SQUAD_IS_VALID(&Param0 + 392))
				{
					if (SQUAD_GET_SIZE(&Param0 + 392) >= 1)
					{
						if (IS_STRING_VALID(&uParam6))
						{
							if ((!STRING_CONTAINS_STRING(&uParam6, "bad") && !STRING_CONTAINS_STRING(&uParam6, "law")) && &iParam8 != 1)
							{
								if (VDIST(*(&Param0 + 324), Global_54078) > 10.0f)
								{
									if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "rand_idle_sit_ground_player"))
									{
										AI_CONVERSE_ENABLE(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, false));
										AI_CONVERSE_ENABLE(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, true));
										AI_CONVERSE_ADD_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, false));
										AI_CONVERSE_ADD_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, true));
										DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, false), "nconvAdded", 1);
										DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, true), "nconvAdded", 1);
										AI_GOAL_LOOK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, false));
										AI_GOAL_LOOK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, true));
										Function_56(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, false));
										fLocal_42 = GET_CURRENT_GAME_TIME();
										Param0.f_428 = 1;
									}
								}
							}
						}
					}
				}
			}
			if ((Param0.f_428 != 1 && !IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "rand_idle_sit_ground_player")) && !Param0.f_436)
			{
				if (SQUAD_IS_VALID(&Param0 + 392) && SQUAD_GET_SIZE(&Param0 + 392) < 0)
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, false)))
					{
						if ((GET_CURRENT_GAME_TIME() - fLocal_42) < 10.0f)
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(&Global_54076, "PLAYER_COMMENT_ON_STORY", SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, false), "GENERIC_GOODBYE", 1, 1, 5, 0);
						}
						Param0.f_436 = 1;
					}
					else
					{
						Param0.f_436 = 1;
					}
				}
				else
				{
					Param0.f_436 = 1;
				}
			}
			if (!bParam2 && !bVar11)
			{
				if (SQUAD_IS_VALID(&Param0 + 392))
				{
					bVar1 = false;
					while (bVar1 <= SQUAD_GET_SIZE(&Param0 + 392))
					{
						if (Function_52(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), &iLocal_41, &Param0 + 488, 0, 0, 0x40400000))
						{
							SET_ACTOR_ALLOW_WEAPON_REACTIONS(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), 1);
							AI_QUICK_EXIT_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), 1);
							Param0.f_440 = 1;
							Function_51(&Param0 + 392, 1);
							Function_134(&Param0 + 392, &Global_54076, -1.0f, -1.0f, 0, 2);
							if (iLocal_41 == 8)
							{
								TASK_KILL_CHAR(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), &Global_54076);
							}
							Param0.f_8 = 12;
							break;
						}
						bVar1++;
					}
					bVar1 = false;
					while (bVar1 <= Param0.f_360)
					{
						if (IS_ACTOR_VALID(&Param0 + 360[bVar1]))
						{
							if (GET_LAST_ATTACKER(&Param0 + 360[bVar1]) != &Global_54076 || GET_RIDER(&Param0 + 360[bVar1]) != &Global_54076)
							{
								Param0.f_440 = 1;
								TASK_CLEAR(&Param0 + 360[bVar1]);
								Function_51(&Param0 + 392, 1);
								Function_134(&Param0 + 392, &Global_54076, -1.0f, -1.0f, 0, 2);
								TASK_KILL_CHAR(Function_50(&Param0 + 392), &Global_54076);
								Param0.f_8 = 12;
								break;
							}
						}
						bVar1++;
					}
				}
			}
			if (bParam4 && !bVar11)
			{
				Function_46(&Param0, bParam2, 0);
			}
			else if (Param0.f_416)
			{
				Function_46(&Param0, bParam2, 1);
			}
			if (!Param0.f_428)
			{
			}
			if (GET_VEHICLE(Function_16()) != &Param0 + 384 && IS_ACTOR_VALID(&Param0 + 384))
			{
				Function_45(&Param0 + 392, Function_16(), 4);
				Function_44(&Param0 + 392, Function_16());
			}
			if (VDIST(*(&Param0 + 324), Global_54078) < (&fParam9 + 30.0f))
			{
				Param0.f_8 = 12;
			}
			Var7 = *(&Param0 + 324);
			Var7.f_4 = (StackVal + 0,5f);
			if (!bParam2 && !bVar11)
			{
				if (Function_43(StackVal, Var7, 1.0f, 80.0f, 1, 1, 0))
				{
					Global_38379 = GET_CURRENT_GAME_TIME();
				}
				if (SQUAD_IS_VALID(&Param0 + 392))
				{
					if (Function_42(&Param0 + 392, 1.0f, 80.0f, 1, 1))
					{
						Global_38379 = GET_CURRENT_GAME_TIME();
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (Param0.f_428)
			{
				if (SQUAD_IS_VALID(&Param0 + 392))
				{
					bVar1 = false;
					while (bVar1 <= SQUAD_GET_SIZE(&Param0 + 392))
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1)))
						{
							if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), "nconvAdded"))
							{
								AI_CONVERSE_DISABLE(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1));
								AI_CONVERSE_REMOVE_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1));
							}
						}
						bVar1++;
					}
				}
				Param0.f_428 = 0;
			}
			bVar1 = false;
			while (bVar1 <= Param0.f_360)
			{
				if (IS_ACTOR_VALID(&Param0 + 360[bVar1]))
				{
					TASK_WANDER(&Param0 + 360[bVar1], 3212836864);
					GIVE_OBJECT_TO_LAYOUT(&Param0 + 360[bVar1], &Global_43578);
					RELEASE_ACTOR(&Param0 + 360[bVar1]);
				}
				bVar1++;
			}
			if (SQUAD_IS_VALID(&Param0 + 392))
			{
				bVar1 = false;
				while (bVar1 <= SQUAD_GET_SIZE(&Param0 + 392))
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1)))
					{
						if (!Param0.f_440)
						{
							MEMORY_PREFER_RIDING(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), false);
							Function_33(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), 4, 0, 2);
						}
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1));
					}
					bVar1++;
				}
			}
			Param0.f_432 = 0;
			if (IS_OBJECT_VALID(&Param0))
			{
				UNK_0xE18028C1(&Param0);
				DESTROY_OBJECT(&Param0);
			}
			if (IS_ITERATOR_VALID(&Param0 + 456))
			{
				DESTROY_ITERATOR(&Param0 + 456);
			}
			Function_4();
			if (SQUAD_IS_VALID(&Param0 + 392))
			{
				Function_32(&Param0 + 392, 0, 0, 0);
			}
			RELEASE_LAYOUT_OBJECTS(&Param0 + 16);
			Param0.f_8 = 13;
			iVar12 = 250;
			break;
		
		case 0x0000000D:
			break;
	}
	Function_31(&Param0);
	return iVar12;
}

void Function_31(struct<62> Param0) //Position: 0x27D2 / 10194
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	return;
}

void Function_32(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x27E4 / 10212
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (IS_ACTOR_RIDING_VEHICLE(&uVar1))
			{
				bVar2 = GET_VEHICLE(&uVar1);
				if (&bParam3)
				{
					DESTROY_ACTOR(&uVar1);
					DESTROY_ACTOR(&bVar2);
				}
				else if (&bParam2)
				{
					if (!Function_11(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar1);
					}
					if (!Function_11(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&bVar2);
					}
				}
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&uVar1);
					}
					else
					{
						RELEASE_ACTOR(&uVar1);
					}
				}
				if (IS_ACTOR_VALID(&bVar2))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar2);
					}
					else
					{
						RELEASE_ACTOR(&bVar2);
					}
				}
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				bVar2 = GET_MOUNT(&uVar1);
				if (&bParam3)
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
					}
					DESTROY_ACTOR(&uVar1);
					DESTROY_ACTOR(&bVar2);
				}
				else if (&bParam2)
				{
					if (!Function_11(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar1);
					}
					if (!Function_11(&bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
						{
							DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
						}
						DESTROY_ACTOR(&bVar2);
					}
				}
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&uVar1);
					}
					else
					{
						RELEASE_ACTOR(&uVar1);
					}
				}
				if (IS_ACTOR_VALID(&bVar2))
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(&bVar2)));
					}
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&bVar2);
					}
					else
					{
						RELEASE_ACTOR(&bVar2);
					}
				}
			}
			else
			{
				if (&bParam3)
				{
					DESTROY_ACTOR(&uVar1);
				}
				else if (&bParam2)
				{
					if (!Function_11(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar1);
					}
				}
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (&bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(&uVar1);
					}
					else
					{
						RELEASE_ACTOR(&uVar1);
					}
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
}

int Function_33(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2A1D / 10781
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_VEHICLE(&uParam0))
		{
			SQUAD_LEAVE(&uParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&uParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &uParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_34(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_34(&uParam0, &iParam1, &uParam2, &uParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_34(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x2B0B / 11019
{
	char* cVar0[32];
	
	Function_41();
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(&uParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(&uParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_40(&uParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_10998))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&uParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	if (&iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 32, 0);
	}
	Function_39(&uParam0, 0);
	Function_38(&uParam0, iParam1);
	Function_37(&uParam0, &uParam2);
	Function_36(&uParam0, uParam3);
	if (Function_35(&uParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uParam0, 0);
	}
	return 1;
}

int Function_35(int iParam0) //Position: 0x2D77 / 11639
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_36(var uParam0, bool bParam1) //Position: 0x2D9B / 11675
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_37(var uParam0, int iParam1) //Position: 0x2DBF / 11711
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_38(var uParam0, bool bParam1) //Position: 0x2DE5 / 11749
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_39(var uParam0, bool bParam1) //Position: 0x2E0C / 11788
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_40(bool bParam0) //Position: 0x2E30 / 11824
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_41() //Position: 0x2E4F / 11855
{
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		Global_10998 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		Global_26172 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", &Global_10998, 4294967295, 1);
	}
	return;
}

bool Function_42(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2E9E / 11934
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (Function_11(&uVar1, &uParam1, &uParam2, &uParam3, &bParam4, 0))
				{
					return 1;
				}
			}
			bVar0++;
		}
	}
	return 0;
}

bool Function_43(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x2EFA / 12026
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

void Function_44(var uParam0, int iParam1) //Position: 0x2F1B / 12059
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_IDENTIFY(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_45(var uParam0, var uParam1, bool bParam2) //Position: 0x2F76 / 12150
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_46(struct<425> Param0) //Position: 0x2FC2 / 12226
{
	bool bVar0;
	bool bVar1;
	
	if (Param0.f_424)
	{
		return;
	}
	if (bParam1)
	{
		return;
	}
	if (!SQUAD_IS_VALID(&Param0 + 392))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&Param0 + 392))
	{
		if (!IS_AI_ACTOR_UNALERTED(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar0)))
		{
			return;
		}
		bVar0++;
	}
	if (SQUAD_GET_SIZE(&Param0 + 392) <= 1)
	{
		return;
	}
	if (!Function_49(&Param0 + 392))
	{
		return;
	}
	if (!Function_47(StackVal, &Param0 + 392, *(&Param0 + 324), 10.0f))
	{
		return;
	}
	if (VDIST(*(&Param0 + 324), Global_54078) > 15.0f)
	{
		AI_GOAL_LOOK_AT_ACTOR(Function_50(&Param0 + 392), &Global_54076, 0, 1065353216, 3212836864, 3212836864, 0);
		FORCE_LOOK_AT_ACTOR(Function_50(&Param0 + 392), &Global_54076, 5.0f);
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(&Param0 + 392))
		{
			AI_GOAL_LOOK_AT_ACTOR_NEW(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 392, bVar1), &Global_54076, 15.0f, 1);
			bVar1++;
		}
		if (&bParam2)
		{
			SAY_SINGLE_LINE_CONTEXT(Function_50(&Param0 + 392), 96, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(Function_50(&Param0 + 392), 120, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		Param0.f_424 = 1;
	}
	return;
}

bool Function_47(var uParam0, struct<2> Param1, float fParam3) //Position: 0x3115 / 12565
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (Function_202(StackVal, Param1))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (IS_ACTOR_ALIVE(&iVar1))
			{
				Function_48(&iVar1);
				if (VDIST(Function_48(&iVar1), Param1) >= fParam3)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

struct<8> Function_48(int iParam0) //Position: 0x318A / 12682
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

bool Function_49(var uParam0) //Position: 0x31F6 / 12790
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (!IS_ACTOR_DEAD(&iVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

var Function_50(var uParam0) //Position: 0x3254 / 12884
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		bVar1++;
	}
	return "";
}

void Function_51(var uParam0, bool bParam1) //Position: 0x32A1 / 12961
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_PREFER_RIDING(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_52(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x32F0 / 13040
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
		fVar0 = Function_55(&iParam0, &Global_54076);
		if (!Function_21(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_53(&iParam0);
				return 1;
			}
		}
		if (!Function_21(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_53(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_53(&iParam0);
				return 1;
			}
		}
		if (!Function_21(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_53(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_53(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_21(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_53(&iParam0);
				return 1;
			}
		}
		if (!Function_21(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_53(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_53(int iParam0) //Position: 0x34B9 / 13497
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_54(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_54(int iParam0) //Position: 0x34F6 / 13558
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_55(var uParam0, int iParam1) //Position: 0x350F / 13583
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

void Function_56(var uParam0) //Position: 0x3604 / 13828
{
	struct<21> Var0;
	
	bVar6 = Function_66(GET_ACTOR_ENUM(&uParam0), &Var0);
	if (bVar6)
	{
		iVar7 = Function_58(&Var0);
		iVar8 = 0;
		if (iVar7 == 2)
		{
			if (Function_57())
			{
				iVar8 = 1;
			}
			else
			{
				iVar8 = 2;
			}
		}
		else if (Var0.f_20)
		{
			iVar8 = 1;
		}
		else if ((&Var0 + 24)->f_20)
		{
			iVar8 = 2;
		}
		else
		{
			iVar8 = 0;
		}
		if (iVar8 == 1)
		{
			AI_SET_CAMPFIRE_STORY_ENABLED(1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 0);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(2, Var0.f_12);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(3, Var0.f_16);
		}
		else if (iVar8 == 2)
		{
			AI_SET_CAMPFIRE_STORY_ENABLED(1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 0);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(2, (&Var0 + 24)->f_12);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(3, (&Var0 + 24)->f_16);
		}
		else
		{
			AI_SET_CAMPFIRE_STORY_ENABLED(0);
		}
	}
	return;
}

bool Function_57() //Position: 0x36C3 / 14019
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

var Function_58(struct<25> Param0) //Position: 0x36D6 / 14038
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = 0;
	Param0.f_20 = 0;
	(&Param0 + 24)->f_20 = 0;
	if (Function_63(Param0, 0))
	{
		uVar0 = Function_59(StackVal);
		uVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(&uVar0), GET_HOUR(&uVar0) + 6, GET_MINUTE(&uVar0), GET_SECOND(&uVar0));
		if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), &uVar2))
		{
			Param0.f_20 = 1;
			iVar1++;
		}
	}
	if (Function_63(Param0.f_24, 0))
	{
		uVar0 = Function_59(StackVal);
		uVar3 = MAKE_TIME_OF_DAY_EX(GET_DAY(&uVar0), GET_HOUR(&uVar0) + 6, GET_MINUTE(&uVar0), GET_SECOND(&uVar0));
		if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), &uVar3))
		{
			(&Param0 + 24)->f_20 = 1;
			iVar1++;
		}
	}
	return iVar1;
}

var Function_59(int iParam0) //Position: 0x379D / 14237
{
	if (!Function_60(iParam0))
	{
		return MAKE_TIME_OF_DAY(0, 0, 0);
	}
	return &Global_21684[iParam07] + 40;
}

bool Function_60(int iParam0) //Position: 0x37BD / 14269
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

bool Function_61(int iParam0) //Position: 0x37E1 / 14305
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_62(int iParam0) //Position: 0x37F6 / 14326
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_63(var uParam0, bool bParam1) //Position: 0x380D / 14349
{
	int iVar0;
	
	iVar0 = Function_64(uParam0);
	if (!Function_62(iVar0))
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

var Function_64(int iParam0) //Position: 0x384B / 14411
{
	if (!Function_65(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_65(int iParam0) //Position: 0x3865 / 14437
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_66(int iParam0, struct<6> Param1) //Position: 0x387B / 14459
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (Global_99175[iVar07] == iParam0)
		{
			Param1 = { StackVal, StackVal, StackVal, StackVal, StackVal, (&Global_99175[iVar07] + 4) };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_67(var uParam0, char* cParam1, bool[] bParam2, int iParam3, var[] uParam4) //Position: 0x38B5 / 14517
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	var uVar5;
	var uVar6;
	var uVar7;
	
	iVar0 = 0;
	uVar6 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar6, 12);
	uVar5 = START_OBJECT_ITERATOR(&uVar6);
	while (IS_OBJECT_VALID(&uVar5) && iVar0 > iParam3)
	{
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uVar5)))
		{
			if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(&uVar5), "horse_stay"))
			{
				GET_OBJECT_POSITION(&uVar5, &Var1);
				GET_OBJECT_ORIENTATION(&uVar5, &Var3);
				uVar7 = CREATE_ACTOR_IN_LAYOUT(&cParam1, Function_164(), bParam2[iVar0], Var1, Var3);
				ACCESSORIZE_HORSE(&uVar7, 3);
				uParam4[iVar0] = &uVar7;
				TASK_USE_GRINGO(&uVar7, GET_GRINGO_FROM_OBJECT(&uVar5), "UseCase1", 4294967295, 1);
				SNAP_ACTOR_TO_GRINGO(&uVar7, &uVar5, "UseCase1", true, 0, 0);
				iVar0++;
			}
		}
		uVar5 = OBJECT_ITERATOR_NEXT(&uVar6);
	}
	DESTROY_ITERATOR(&uVar6);
}

void Function_68(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4, var uParam5, int iParam6) //Position: 0x399A / 14746
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	
	iVar1 = 1;
	if (!IS_OBJECT_VALID(&uParam4))
	{
		return;
	}
	if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uParam4)))
	{
		bVar0 = true;
	}
	else
	{
		return;
	}
	GET_OBJECT_POSITION(&uParam4, &Var2);
	GET_OBJECT_ORIENTATION(&uParam4, &Var4);
	uVar6 = CREATE_ACTOR_IN_LAYOUT(&uParam0, Function_164(), bParam3, Var2, Var4);
	SET_ACTOR_STAY_WITHIN_VOLUME(&uVar6, &uParam5, 2, 2);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uVar6, 1);
	AI_GOAL_LOOK_AT_NEUTRAL(&uVar6, -1.0f);
	if (!IS_ACTOR_VALID(&uVar6))
	{
		LOG_ERROR("CREATE_ACTOR_IN_LAYOUT failed.  Invalid actor returned in campfireCore");
	}
	if (!GRINGO_ACTOR_CAN_USE(GET_GRINGO_FROM_OBJECT(&uParam4), "UseCase1", &uVar6))
	{
		bVar0 = false;
		while (!IS_OBJECT_VALID(&uParam4) && !bVar0)
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uParam4)))
			{
				if (GRINGO_ACTOR_CAN_USE(GET_GRINGO_FROM_OBJECT(&uParam4), "UseCase1", &uVar6))
				{
					bVar0 = true;
				}
			}
			uParam4 = OBJECT_ITERATOR_NEXT(&uParam1);
		}
	}
	if (iParam6 != 0 && STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(&uParam4), "pee"))
	{
		bVar0 = false;
	}
	if (iParam6 == 0)
	{
		iVar1 = 4294967295;
	}
	if (bVar0)
	{
		SNAP_ACTOR_TO_GRINGO(&uVar6, &uParam4, "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(&uVar6, GET_GRINGO_FROM_OBJECT(&uParam4), "UseCase1", iVar1, 1);
		TASK_PRIORITY_SET(&uVar6, 2);
	}
	else
	{
		TASK_WANDER_IN_VOLUME(&uVar6, &uParam5, -1.0f);
		TASK_PRIORITY_SET(&uVar6, 2);
	}
	Function_69(&uVar6, 0);
	SQUAD_JOIN(&uVar6, &uParam2);
	TASK_PRIORITY_SET(&uVar6, 2);
}

void Function_69(var uParam0, bool bParam1) //Position: 0x3B51 / 15185
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_CONVERSE_ENABLE(&uParam0);
	}
	else
	{
		AI_CONVERSE_DISABLE(&uParam0);
	}
	return;
}

void Function_70(bool bParam0) //Position: 0x3B76 / 15222
{
	var uVar0;
	int iVar1;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&bParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		SNAP_OBJECT_TO_GROUND(&iVar1, 99,9f, 0, 1092616192);
		ROTATE_OBJECT_UPRIGHT_TO_GROUND(&iVar1, 1, 5.0f);
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

var Function_71(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x3BC4 / 15300
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	
	uVar0 = CREATE_PROPSET_IN_LAYOUT(&uParam0, &uParam1, &uParam2, Param3, Param5);
	uVar1 = GET_LAYOUT_FROM_OBJECT(&uVar0);
	uVar2 = CREATE_OBJECT_ITERATOR(&uVar1);
	ITERATE_IN_LAYOUT(&uVar2, &uVar1);
	iVar3 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&iVar3))
	{
		if (!GET_OBJECT_TYPE(&iVar3) != 57)
		{
			if (!&iParam7 != 4294967295)
			{
				GET_OBJECT_POSITION(&iVar3, &Var4);
				Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 4.0f, 0.0f), Var4, StackVal);
				iVar6 = GET_MATERIAL_AT_VECTOR(&Var4);
				if (!iVar6 != 0 && (iVar6 && iParam7) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(&iVar3);
				}
			}
			if (IS_OBJECT_VALID(&iVar3))
			{
				if (DECOR_CHECK_EXIST(&iVar3, "rstarInfoSnapping_Type"))
				{
					iVar7 = DECOR_CHECK_STRING(&iVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(&iVar3, 10.0f, iVar7, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(&iVar3, 0);
			}
		}
		iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(&uVar0));
	ADD_AI_COVERSET_FOR_PROPSET(&uVar0);
	DESTROY_ITERATOR(&uVar2);
	return &uVar0;
}

void Function_72(var uParam0, var uParam1, var uParam2, float fParam3, struct<2> Param4) //Position: 0x3D1B / 15643
{
	var uVar0[5];
	int iVar6;
	
	if (uParam0 != 4294967295)
	{
		uParam0 = CLEAR_AREA_OF_TREE_TYPE(Param4, (fParam3 + 2.0f), "");
	}
	if (uParam1 != 4294967295)
	{
		uParam1 = CLEAR_AREA_OF_BREAKABLE_TREES(Param4, (fParam3 + 2.0f));
	}
	if (uParam2 != 4294967295)
	{
		uParam2 = CLEAR_AREA_OF_GRASS(Param4, fParam3);
	}
	if (IS_LAYOUTREF_VALID(&Global_46715))
	{
		if (Function_73(StackVal, &Global_46715, "player_herb", &uVar0, 20.0f, 5, Param4) >= 0)
		{
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				if (IS_OBJECT_VALID(&(uVar0[iVar6])))
				{
					DESTROY_OBJECT(&(uVar0[iVar6]));
				}
				iVar6++;
			}
		}
	}
}

int Function_73(char* cParam0, var uParam1, char*[] cParam2, float fParam3, int iParam4, struct<2> Param5) //Position: 0x3DC6 / 15814
{
	int iVar0;
	struct<2> Var1;
	int iVar3;
	var uVar4;
	
	iVar0 = 0;
	iParam4 = iParam4;
	if (IS_LAYOUTREF_VALID(&cParam0))
	{
		uVar4 = CREATE_OBJECT_ITERATOR(&cParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar4, 12);
		ITERATE_ON_PARTIAL_NAME(&uVar4, &uParam1);
		iVar3 = START_OBJECT_ITERATOR(&uVar4);
		while (IS_OBJECT_VALID(&iVar3))
		{
			if (IS_OBJECT_VALID(&iVar3))
			{
				GET_OBJECT_POSITION(&iVar3, &Var1);
				if (VDIST(Param5, Var1) > fParam3)
				{
					cParam2[iVar0] = &iVar3;
					iVar0++;
					if (iVar0 > iParam4)
					{
						DESTROY_ITERATOR(&uVar4);
						return iVar0;
					}
				}
			}
			iVar3 = OBJECT_ITERATOR_NEXT(&uVar4);
		}
		DESTROY_ITERATOR(&uVar4);
		return iVar0;
	}
	return iVar0;
}

bool Function_74(int iParam0, int iParam1) //Position: 0x3E6C / 15980
{
	if (Function_75(&iParam1))
	{
		*(&iParam0 + 24) = &iLocal_0;
		return 1;
	}
	return 0;
}

bool Function_75(var uParam0) //Position: 0x3E87 / 16007
{
	var uVar0;
	
	Function_80(3, 2);
	uVar0 = &uVar0;
	Function_77(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_77(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_77(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_77(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_player", 1, 0);
	Function_77(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_77(&iLocal_0 + 8, "$/content/scripting/gringo/simplegringo/player_sit_campfire", 1, 0);
	if (!Function_81(&iLocal_0 + 8))
	{
		return 0;
	}
	iLocal_0 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_164()));
	*(&iLocal_0 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "defend_region", 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 5.0f, 15.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "leader_flag1", Vector(-0,5376045f, 0.0f, -10,67541f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "leader_flag3", Vector(-9,76774f, 0.0f, -0,2345791f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "leader_flag2", Vector(9,474689f, 0.0f, -0,2345791f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "leader_flag4", Vector(-0,2281614f, 0.0f, 10,34677f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "deadposter_flag", Vector(9,474689f, 0.0f, -0,2345791f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "deadposter_flag1", Vector(-1,504628f, 0.0f, -4,14927f), Vector(0.0f, -57,78792f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "deadposter_flag2", Vector(3,337355f, 0.0f, 6,067938f), Vector(0.0f, 77,07942f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "deadposter_flag3", Vector(5,312126f, 0.0f, 0,2085243f), Vector(0.0f, -119,0625f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "deadposter_flag4", Vector(-4,383857f, 0.0f, 5,262559f), Vector(0.0f, 84,35429f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "deadposter_flag_horse", Vector(4,399393f, 0.0f, -4,557622f), Vector(0.0f, -26,46222f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "deadposter_flag_horse1", Vector(-2,782224f, 0.0f, 7,869298f), Vector(0.0f, 84,35429f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "aiGringoLocType", "campfire_talk", Vector(-1,237515f, 0.0f, -0,4344134f), Vector(0.0f, -278,0974f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "aiGringoLocType2", "Sit_Ground_Campfire_Tend", Vector(-0,3792672f, 0.0f, -1,099999f), Vector(0.0f, -164,1571f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "aiGringoLocType3", "campfire_talk", Vector(1,160081f, 0.0f, 0,5066651f), Vector(0.0f, 251,2879f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "aiGringoLocType4", "Rand_Idle_Sit_Ground", Vector(0,4304464f, 0.0f, 1,478778f), Vector(0.0f, 14,60356f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "aiGringoLocType5", "Rand_Idle_Sit_Ground", Vector(-2,03365f, 0.0f, 1,399721f), Vector(0.0f, -58,47254f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_0 + 120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "aiGringoLocType6", "Rand_Idle_Sit_Ground_Player", Vector(0,8603806f, 0.0f, -1,456523f), Vector(0.0f, 143,6142f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 120), 0);
	*(&iLocal_0 + 128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "horse_tend_camp", "horse_stay", Vector(-3,523242f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 128), 0);
	*(&iLocal_0 + 136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "horse_tend_camp1", "horse_stay", Vector(1,35817f, 0.0f, -3,1855f), Vector(0.0f, 51,23579f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_0 + 136), 0);
	*(&iLocal_0 + 144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "Player_Sit_Campfire", "Player_Sit_Campfire", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	Function_76(&iLocal_0, &uParam0);
	return 1;
}

void Function_76(int iParam0, int iParam1) //Position: 0x4536 / 17718
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &iParam1, Function_164(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			if (IS_ATTACHMENT_VALID(&iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(&iParam0));
			}
		}
	}
	return;
}

var Function_77(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x4581 / 17793
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_79(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_78(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

void Function_78(struct<13> Param0) //Position: 0x45BF / 17855
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

var Function_79(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x45D2 / 17874
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_78(&(Param0[iVar02]), 4);
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

void Function_80(int iParam0, int iParam1) //Position: 0x46A1 / 18081
{
	switch (&iParam1)
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

bool Function_81(struct<2>[] Param0) //Position: 0x46EB / 18155
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_84();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_78(&(Param0[iVar02]), 8);
		}
		else if (Function_83())
		{
			iVar1 = 1;
			Function_78(&(Param0[iVar02]), 8);
		}
		Function_78(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_9(&(Param0[iVar02]), 4))
		{
			if (!Function_9(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_9(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_9(&(Param0[02]), 8) || iVar1));
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
				Function_78(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_9(&(Param0[iVar02]), 4))
		{
			if (!Function_9(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_78(&(Param0[iVar02]), 2);
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
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_78(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_78(&(Param0[iVar02]), 2);
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
	Function_82();
	return 1;
}

void Function_82() //Position: 0x4AAD / 19117
{
	if (!Function_128(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_83() //Position: 0x4AED / 19181
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

void Function_84() //Position: 0x4B1B / 19227
{
	if (!Function_128(128))
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

void Function_85(vector3 vParam0) //Position: 0x4B5D / 19293
{
	char* cVar0[32];
	
	if (Global_131396.f_1200)
	{
		strcpy(&cVar0, "a", 32);
		stradd(&cVar0, GET_OBJECT_NAME(&vParam0 + 16), 32);
		Function_86(StackVal, StackVal, StackVal, StackVal, Vector(&vParam0 + 16, StackVal, StackVal) + Vector(Vector(1,5f, 0.0f, 2,5f), *(&vParam0 + 324), 2), *(&vParam0 + 336), &cVar0);
		strcpy(&cVar0, "d", 32);
		stradd(&cVar0, GET_OBJECT_NAME(&vParam0 + 16), 32);
		Function_86(StackVal, StackVal, StackVal, StackVal, Vector(&vParam0 + 16, StackVal, StackVal) - Vector(Vector(2,5f, 0.0f, 1,5f), *(&vParam0 + 324), 4), *(&vParam0 + 336), &cVar0);
	}
	vParam0.f_8 = 1;
	iParam1 = 250;
	return;
}

void Function_86(var uParam0, var uParam1, struct<2> Param2, struct<2> Param4, char* cParam6) //Position: 0x4BF5 / 19445
{
	var uVar0;
	var uVar1;
	
	uVar0 = &uVar0;
	uVar1 = &uVar1;
	Function_87(StackVal, StackVal, &uVar0, &uVar1, &uParam0, Param2, Param4, uParam1, 1, 1, &cParam6, 0, 0);
}

void Function_87(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) //Position: 0x4C24 / 19492
{
	Function_102(StackVal, StackVal, &uParam0, &uParam1, uParam7, &uParam2, Param3, Param5, &uParam10);
	Function_92(&uParam0, &uParam1, uParam7, uParam8, uParam9);
	DECOR_SET_INT(&uParam1, Function_91(), Function_90(uParam8, uParam9, uParam7));
	DECOR_SET_INT(&uParam1, Function_89(), Function_88(&uParam11, &uParam12));
}

var Function_88(var uParam0, bool bParam1) //Position: 0x4C7F / 19583
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_89() //Position: 0x4C8F / 19599
{
	return "PackedGrass";
}

var Function_90(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4CA3 / 19619
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = 1;
	}
	if (bParam1)
	{
		iVar0 += 2;
	}
	return (iVar0 || SHIFT_LEFT(bParam2, 2));
}

var Function_91() //Position: 0x4CC8 / 19656
{
	return "PackedMetadata";
}

void Function_92(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x4CDF / 19679
{
	struct<2> Var0;
	var uVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam2)
	{
		case 0x00000001:
			if (bParam3)
			{
				uVar2 = ADD_BLIP_FOR_OBJECT(&uParam0, 379, 0f, 2, 0);
				iVar3 = ADD_BLIP_FOR_OBJECT(&iParam1, 379, 0f, 2, 0);
				if (DECOR_GET_INT_VERBOSE(&iParam1, Function_101(), &uVar4))
				{
					Function_96(uVar4, &iVar5);
					SET_BLIP_NAME(&iVar3, GET_WEAPON_DISPLAY_NAME(iVar5));
				}
			}
			if (bParam4)
			{
				Function_95();
				Var0 = Function_95();
				Var0.f_4 = (StackVal * 2.0f);
				CREATE_OBJECT_GLOW(&uParam0, 0, Var0, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam3)
			{
				uVar2 = ADD_BLIP_FOR_OBJECT(&uParam0, 380, 0f, 2, 0);
				iVar3 = ADD_BLIP_FOR_OBJECT(&iParam1, 380, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_94();
				Var0 = Function_94();
				Var0.f_4 = (StackVal * 2.0f);
				CREATE_OBJECT_GLOW(&uParam0, 0, Var0, 0);
			}
			break;
		
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			if (bParam3)
			{
				uVar2 = ADD_BLIP_FOR_OBJECT(&uParam0, 381, 0f, 2, 0);
				iVar3 = ADD_BLIP_FOR_OBJECT(&iParam1, 381, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_93();
				Var0 = Function_93();
				Var0.f_4 = (StackVal * 2.0f);
				CREATE_OBJECT_GLOW(&uParam0, 3, Var0, 0);
			}
			break;
	}
	if (bParam3)
	{
		SET_BLIP_MAX_DISTANCE(&uVar2, 1.0f);
		UNK_0x1E98AFEC(&uVar2, 1);
		UNK_0xFF3DB575(&iVar3, 1);
	}
}

struct<8> Function_93() //Position: 0x4E1B / 19995
{
	return StackVal, Vector(0.0f, 0,101f, -0,195f);
}

struct<8> Function_94() //Position: 0x4E2D / 20013
{
	return StackVal, Vector(0.0f, 0,127f, -0,177f);
}

struct<8> Function_95() //Position: 0x4E3F / 20031
{
	return StackVal, Vector(0.0f, 0,158f, -0,163f);
}

void Function_96(var uParam0, struct<5> Param1) //Position: 0x4E51 / 20049
{
	Param1 = Function_97(uParam0, Function_99(), 0);
	Param1.f_4 = Function_97(uParam0, Function_99() + 8, Function_99());
	return;
}

var Function_97(var uParam0, int iParam1, int iParam2) //Position: 0x4E76 / 20086
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_98((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), iParam2);
}

var Function_98(bool bParam0) //Position: 0x4E95 / 20117
{
	return SHIFT_LEFT(true, bParam0);
}

int Function_99() //Position: 0x4EA1 / 20129
{
	return Function_100(39);
}

int Function_100(int iParam0) //Position: 0x4EAC / 20140
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

var Function_101() //Position: 0x4EDA / 20186
{
	return "PackedWeapon";
}

int Function_102(var uParam0, char* cParam1, int iParam2, var uParam3, struct<2> Param4, struct<2> Param6, char* cParam8) //Position: 0x4EEF / 20207
{
	var uVar0;
	struct<2> Var1;
	char* cVar3[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			uVar0 = Function_107();
			Function_94();
			Var1 = Function_94();
			break;
		
		case 0x00000001:
			uVar0 = Function_106();
			Function_95();
			Var1 = Function_95();
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			uVar0 = Function_105();
			Function_93();
			Var1 = Function_93();
			break;
	}
	if (IS_STRING_VALID(&cParam8))
	{
		strcpy(&cVar3, Function_104(), 64);
		stradd(&cVar3, &cParam8, 64);
	}
	else
	{
		memcpy(&cVar3, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165(Function_104()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	uParam0 = CREATE_PROP_IN_LAYOUT(&uParam3, &cVar3, &uVar0, Param4, Param6, 0);
	SNAP_OBJECT_TO_GROUND(&uParam0, 1.0f, 0, 1092616192);
	cParam1 = CREATE_GRINGO_ON_OBJECT(StackVal, &uParam0, Function_103(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", Var1, Vector(0.0f, 0.0f, 0.0f));
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_103() //Position: 0x4FFC / 20476
{
	return "MPItemGiver";
}

var Function_104() //Position: 0x5010 / 20496
{
	return "PBox_";
}

var Function_105() //Position: 0x501E / 20510
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_106() //Position: 0x5044 / 20548
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_107() //Position: 0x506C / 20588
{
	return "p_gen_crateMultiplayerAmmo01x";
}

int Function_108(var uParam0, int iParam1) //Position: 0x5092 / 20626
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
	Function_110(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_109(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_109(int iParam0, var uParam1, struct<2> Param2) //Position: 0x51FC / 20988
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

int Function_110(int iParam0) //Position: 0x52A4 / 21156
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
						Function_111(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_126(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_111(iVar0);
						}
					}
					else if (Function_126(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_111(iVar0);
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
			Function_111(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_111(int iParam0) //Position: 0x5412 / 21522
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

var Function_112(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x547A / 21626
{
	return Function_113(StackVal, &iParam0, iParam1, &bParam2, &iParam3, &iParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_113(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x5498 / 21656
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&iParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_119();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&iParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_118(iVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_117(&iParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_117(&iParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_116(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&iParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_118(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_116(iVar0))
				{
					Function_115();
				}
				Function_114(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&iParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_118(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar0))
	{
		if (iParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return iVar0;
}

void Function_114(int iParam0) //Position: 0x5791 / 22417
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_115() //Position: 0x5845 / 22597
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_116(int iParam0) //Position: 0x5880 / 22656
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_117(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x58AD / 22701
{
	int iVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

bool Function_118(int iParam0) //Position: 0x5A08 / 23048
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_119() //Position: 0x5A1F / 23071
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_115();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_115();
	return;
}

var Function_120(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x5A6B / 23147
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_78(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_78(&(Param0[iVar02]), 8);
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

int Function_121() //Position: 0x5B47 / 23367
{
	int iVar0;
	
	switch (Global_43787)
	{
		case 0x00000000:
			iVar0 = (RAND_INT_RANGE(0, 8999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 55;
					break;
				
				case 0x00000001:
					return 74;
					break;
				
				case 0x00000002:
					return 96;
					break;
				
				case 0x00000003:
					return 101;
					break;
				
				case 0x00000004:
					return 102;
					break;
				
				case 0x00000005:
					return 151;
					break;
				
				case 0x00000006:
					return 164;
					break;
				
				case 0x00000007:
					return 214;
					break;
				
				case 0x00000008:
					return 217;
					break;
			}
			break;
		
		case 0x00000002:
			iVar0 = (RAND_INT_RANGE(0, 5999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 11;
					break;
				
				case 0x00000001:
					return 15;
					break;
				
				case 0x00000002:
					return 30;
					break;
				
				case 0x00000003:
					return 36;
					break;
				
				case 0x00000004:
					return 42;
					break;
				
				case 0x00000005:
					return 43;
					break;
			}
			break;
		
		case 0x00000001:
			iVar0 = (RAND_INT_RANGE(0, 4999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 275;
					break;
				
				case 0x00000001:
					return 313;
					break;
				
				case 0x00000002:
					return 314;
					break;
				
				case 0x00000003:
					return 319;
					break;
				
				case 0x00000004:
					return 320;
					break;
			}
			break;
	}
	return 55;
}

int Function_122() //Position: 0x5CA3 / 23715
{
	int iVar0;
	
	switch (Global_43787)
	{
		case 0x00000000:
			iVar0 = (RAND_INT_RANGE(0, 5999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 180;
					break;
				
				case 0x00000001:
					return 181;
					break;
				
				case 0x00000002:
					return 182;
					break;
				
				case 0x00000003:
					return 232;
					break;
				
				case 0x00000004:
					return 233;
					break;
				
				case 0x00000005:
					return 208;
					break;
			}
			break;
		
		case 0x00000002:
			iVar0 = (RAND_INT_RANGE(0, 3999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 44;
					break;
				
				case 0x00000001:
					return 45;
					break;
				
				case 0x00000002:
					return 183;
					break;
				
				case 0x00000003:
					return 231;
					break;
			}
			break;
		
		case 0x00000001:
			iVar0 = (RAND_INT_RANGE(0, 4999) / 1000);
			switch (iVar0)
			{
				case 0x00000000:
					return 300;
					break;
				
				case 0x00000001:
					return 301;
					break;
				
				case 0x00000002:
					return 302;
					break;
				
				case 0x00000003:
					return 322;
					break;
				
				case 0x00000004:
					return 324;
					break;
			}
			break;
	}
	return 180;
}

bool Function_123(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x5DC3 / 24003
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
	Function_110(4294967295);
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
			else if (Function_124(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_124(struct<2> Param0) //Position: 0x5E9F / 24223
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

bool Function_125(struct<2> Param0, struct<5> Param2) //Position: 0x5EBE / 24254
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
		if (!Function_202(StackVal, Param2))
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
			if (!Function_202(StackVal, Param2))
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

float Function_126(var uParam0, struct<2> Param1) //Position: 0x6001 / 24577
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_48(&uParam0);
		Var0 = Function_48(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

bool Function_127(int iParam0) //Position: 0x6078 / 24696
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

bool Function_128(int iParam0) //Position: 0x609A / 24730
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_129() //Position: 0x60B6 / 24758
{
	return 0;
}

bool Function_130(var uParam0, float fParam1) //Position: 0x60BD / 24765
{
	if (Function_133(&uParam0))
	{
		if (Function_131(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_131(vector3 vParam0) //Position: 0x60DB / 24795
{
	if (Function_133(&vParam0))
	{
		if (Function_132(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_132(int iParam0) //Position: 0x61A8 / 25000
{
	return Function_21(iParam0, 2);
}

bool Function_133(bool bParam0) //Position: 0x61B6 / 25014
{
	return Function_21(bParam0, 1);
}

void Function_134(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x61C4 / 25028
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_CLEAR(&uVar1);
			TASK_FLEE_ACTOR(&uVar1, &uParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(&uVar1, bParam5);
		}
		bVar0++;
	}
}

void Function_135(int iParam0) //Position: 0x623D / 25149
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_136(int iParam0) //Position: 0x6275 / 25205
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

bool Function_137(var uParam0, int iParam1) //Position: 0x62AA / 25258
{
	if (Function_130(&uParam0, iParam1))
	{
		Function_138(&uParam0);
		return 1;
	}
	return 0;
}

void Function_138(vector3 vParam0) //Position: 0x62C4 / 25284
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

int Function_139(int iParam0, struct<2> Param1) //Position: 0x62DB / 25307
{
	if ((VDIST(Global_54078, Param1) > 30.0f && WOULD_ACTOR_BE_VISIBLE(false, &Param1, 3212836864)) && IS_OBJECT_VALID(&iParam0 + 1288))
	{
		return 1;
	}
	return 0;
}

void Function_140(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x6310 / 25360
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_141(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

struct<16> Function_141(int iParam0) //Position: 0x639B / 25499
{
	char* cVar0[16];
	
	if (!Function_142())
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

bool Function_142() //Position: 0x63DA / 25562
{
	if (Function_21(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_143(int iParam0, struct<2> Param1) //Position: 0x63F5 / 25589
{
	if (VDIST(Global_54078, Param1) > 15.0f && IS_OBJECT_VALID(&iParam0 + 1288))
	{
		return 1;
	}
	return 0;
}

void Function_144(int iParam0) //Position: 0x641E / 25630
{
	(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_145(90)), 0);
	return;
}

int Function_145(int iParam0) //Position: 0x6441 / 25665
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_146(int iParam0) //Position: 0x6458 / 25688
{
	if (iParam0 == 1)
	{
		Function_148(&Global_39906 + 8, 1);
	}
	else
	{
		Function_147(&Global_39906 + 8, 1);
	}
	return;
}

void Function_147(var uParam0, int iParam1) //Position: 0x6479 / 25721
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_148(var uParam0, bool bParam1) //Position: 0x648F / 25743
{
	uParam0 = (uParam0 || bParam1);
	return;
}

bool Function_149(int iParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) //Position: 0x64A0 / 25760
{
	int iVar0;
	
	uParam11 = uParam11;
	uParam12 = uParam12;
	uParam13 = uParam13;
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		if (Global_38380[iVar036] != iParam0 || iParam0 != 4096)
		{
			if (Function_153(&(Global_38380[iVar036]), 4))
			{
				if (!IS_SCRIPT_VALID(&Global_38380[iVar036] + 48))
				{
					Global_38380[iVar036].f_4 = uParam7;
					Global_38380[iVar036].f_88 = &uParam19;
					Global_38380[iVar036].f_104 = &uParam20;
					Global_38380[iVar036].f_84 = &uParam17;
					Global_38380[iVar036].f_92 = &uParam18;
					Global_38380[iVar036].f_12 = 4294967295;
					*(&Global_38380[iVar036] + 16) = &uParam2;
					*(&Global_38380[iVar036] + 24) = Param3;
					*(&Global_38380[iVar036] + 36) = Param5;
					*(&Global_38380[iVar036] + 72) = &uParam8;
					Global_38380[iVar036].f_56 = uParam10;
					*(&Global_38380[iVar036] + 64) = &uParam9;
					Global_38380[iVar036].f_96 = &uParam15;
					Global_38380[iVar036].f_100 = &uParam16;
					Global_38380[iVar036].f_108 = 0.0f;
					Function_152(&uParam14, &Global_38380[iVar036] + 112);
					Global_38380[iVar036].f_112 = uParam1;
					Function_151(&(Global_38380[iVar036]), 1);
					Function_150(&(Global_38380[iVar036]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_150(vector3 vParam0) //Position: 0x65EE / 26094
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	vParam0.f_8 = (vParam0.z - iVar0);
	return;
}

void Function_151(vector3 vParam0) //Position: 0x660B / 26123
{
	vParam0.f_8 = (vParam0.z || iParam1);
	return;
}

void Function_152(struct<157> Param0) //Position: 0x661E / 26142
{
	Param1 = Param0;
	Param1.f_24 = Param0.f_24;
	*(&Param1 + 28) = &Param0 + 28;
	Param1.f_4 = StackVal;
	Param1.f_8 = StackVal;
	*(&Param1 + 36) = { StackVal, *(&Param0 + 36) };
	(&Param1 + 36)->f_16 = (&Param0 + 36)->f_16;
	(&Param1 + 36)->f_20 = (&Param0 + 36)->f_20;
	(&Param1 + 36)->f_24 = (&Param0 + 36)->f_24;
	(&Param1 + 36)->f_28 = (&Param0 + 36)->f_28;
	Param1.f_68 = Param0.f_68;
	(&Param1 + 68)->f_4 = StackVal;
	(&Param1 + 68)->f_8 = StackVal;
	Param1.f_84 = Param0.f_84;
	(&Param1 + 84)->f_4 = StackVal;
	(&Param1 + 84)->f_8 = StackVal;
	(&Param1 + 84)->f_12 = (&Param0 + 84)->f_12;
	(&Param1 + 84)->f_16 = (&Param0 + 84)->f_16;
	(&Param1 + 84)->f_20 = (&Param0 + 84)->f_20;
	(&Param1 + 84)->f_24 = (&Param0 + 84)->f_24;
	(&Param1 + 84)->f_32 = (&Param0 + 84)->f_32;
	(&Param1 + 84)->f_36 = (&Param0 + 84)->f_36;
	(&Param1 + 84)->f_40 = (&Param0 + 84)->f_40;
	(&Param1 + 84)->f_44 = (&Param0 + 84)->f_44;
	(&Param1 + 84)->f_52 = (&Param0 + 84)->f_52;
	(&Param1 + 84)->f_48 = (&Param0 + 84)->f_48;
	(&Param1 + 84)->f_56 = (&Param0 + 84)->f_56;
	(&Param1 + 84)->f_28 = (&Param0 + 84)->f_28;
	Param1.f_148 = Param0.f_148;
	(&Param1 + 148)->f_4 = StackVal;
	Param1.f_156 = Param0.f_156;
	(&Param1 + 156)->f_4 = StackVal;
	(&Param1 + 156)->f_8 = StackVal;
	return;
}

bool Function_153(vector3 vParam0) //Position: 0x67CE / 26574
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

struct<8> Function_154() //Position: 0x67EC / 26604
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_155(struct<1449> Param0) //Position: 0x67F6 / 26614
{
	if (Param0.f_1444 == 0)
	{
		return 0;
	}
	if (Function_156("get_wanted_poster_ground") && Param0.f_1448 != 0)
	{
		Param0.f_1448 = 1;
	}
	if (Param0.f_1448 != 1 && !IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 1264)))
	{
		return 1;
	}
	if (Param0.f_748)
	{
		return 1;
	}
	return 0;
}

int Function_156(char* cParam0) //Position: 0x6861 / 26721
{
	var uVar0;
	char* cVar1[64];
	char* cVar18[64];
	
	uVar0 = GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0));
	if (IS_GRINGO_VALID(&uVar0))
	{
		cVar1 = GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(&uVar0));
		strcpy(&cVar18, &cParam0, 64);
		strcpy(&cVar2, &cVar1, 64);
		STRING_LOWER(&cVar2);
		STRING_LOWER(&cVar18);
		if (STRINGS_ARE_EQUAL(&cVar2, &cVar18) || STRING_CONTAINS_STRING(&cVar2, &cVar18))
		{
			return 1;
		}
	}
	return 0;
}

void Function_157(int iParam0) //Position: 0x68B5 / 26805
{
	Function_158(&iParam0, 0.0f);
	return;
}

void Function_158(vector3 vParam0) //Position: 0x68C2 / 26818
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_148(&vParam0, 1);
	Function_147(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_159(struct<1441> Param0) //Position: 0x68E7 / 26855
{
	int iVar0;
	struct<9> Var1;
	float fVar15;
	
	if (!IS_LAYOUTREF_VALID(&Param0 + 1256))
	{
		return 0;
	}
	if (Param0.f_1440 == 1)
	{
		return 1;
	}
	CLEAR_AREA_OF_TREE_TYPE(vParam1, 8.0f, "");
	CLEAR_AREA_OF_GRASS(vParam1, 7.0f);
	strcpy(&cVar7, "dpVultSquad", 32);
	cVar7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165(&cVar7) };
	*(&Param0 + 1432) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 1256, &cVar7));
	if (!SQUAD_IS_VALID(&Param0 + 1432))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		strcpy(&cVar7, "dpVult", 32);
		cVar7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165(&cVar7) };
		vVar1 = vParam1;
		vVar1 = (vVar1.x + RAND_FLOAT_RANGE((-0,5f * 10.0f), (0,5f * 10.0f)));
		vVar1.f_8 = (vVar1.z + RAND_FLOAT_RANGE((-0,5f * 10.0f), (0,5f * 10.0f)));
		FIND_GROUND_INTERSECTION(&vVar1, 20.0f, &vVar1, &uVar3);
		Var5 = Vector(0.0f, RAND_FLOAT_RANGE(0.0f, 359.0f), 0.0f);
		fVar15 = CREATE_ACTOR_IN_LAYOUT(&Param0 + 1256, &cVar7, 1128, vVar1, Var5);
		if (!IS_ACTOR_VALID(&fVar15))
		{
			return 0;
		}
		vVar1 = (vParam1.x + RAND_FLOAT_RANGE(-1.0f, 1.0f));
		vVar1.f_4 = RAND_FLOAT_RANGE(1.0f, 5.0f);
		vVar1.f_8 = (vParam1.z + RAND_FLOAT_RANGE(-1.0f, 1.0f));
		TASK_STAND_STILL(&fVar15, -1.0f, 0, 0);
		SQUAD_JOIN(&fVar15, &Param0 + 1432);
		iVar0++;
	}
	Param0.f_1440 = 1;
	return 1;
}

bool Function_160(int iParam0, var uParam1, var uParam2, struct<2> Param3, int iParam5) //Position: 0x6A57 / 27223
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	struct<5> Var7;
	int iVar25;
	int iVar26;
	
	if (!IS_LAYOUTREF_VALID(&iParam0 + 1256))
	{
		return 0;
	}
	Var3 = Param3;
	if (FIND_GROUND_INTERSECTION(&uParam1, 50.0f, &Var1, &Var3))
	{
		Var5 = Var1;
		Var7 = Var3;
		Var7.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
		strcpy(&cVar9, "npstCorpse", 64);
		memcpy(&cVar9, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165(&cVar9), 16);
		if (iParam5 == 1)
		{
			iVar26 = GET_OBJECTSET_SIZE(&iParam0 + 1304);
			uVar0 = CREATE_CORPSE_IN_LAYOUT(&iParam0 + 1256, &cVar9, (*&iParam0 + 1224)[iVar26], Var5, Var7, "dead_ground_horse", "inj_deadpose_1");
			if (IS_OBJECT_VALID(&uVar0))
			{
				SNAP_OBJECT_TO_GROUND(&uVar0, 10.0f, 1, 1092616192);
				ADD_OBJECT_TO_OBJECTSET(&uVar0, &iParam0 + 1304);
			}
			else
			{
				LOG_ERROR("Problem creating dead poster horse corpse");
			}
		}
		else
		{
			iVar25 = GET_OBJECTSET_SIZE(&iParam0 + 1296);
			uVar0 = CREATE_CORPSE_IN_LAYOUT(&iParam0 + 1256, &cVar9, (*&iParam0 + 1160)[iVar25], Var5, Var7, "dead_ground_male", "inj_deadpose_1");
			if (IS_OBJECT_VALID(&uVar0))
			{
				SNAP_OBJECT_TO_GROUND(&uVar0, 10.0f, 1, 1092616192);
				ADD_OBJECT_TO_OBJECTSET(&uVar0, &iParam0 + 1296);
			}
			else
			{
				LOG_ERROR("Problem creating dead poster corpse");
			}
		}
		if (IS_OBJECT_VALID(&uVar0))
		{
			strcpy(&cVar9, "Dead poster corpse at ", 64);
			stradd(&cVar9, VECTOR_TO_STRING(&Var5), 64);
			strcpy(&cVar9, "deadposter with yRot = ", 64);
			stradd(&cVar9, FLOAT_TO_STRING_FORMATED(StackVal, 3, 2), 64);
			strcpy(&cVar9, "Corpse name is: ", 64);
			stradd(&cVar9, GET_OBJECT_MODEL_NAME(&uVar0), 64);
		}
		else
		{
			LOG_ERROR("Dead poster corpse not valid");
		}
	}
	if (!IS_OBJECT_VALID(&uVar0))
	{
		return 0;
	}
	if (Function_202(StackVal, Var1))
	{
		LOG_ERROR("Problem w/ dead poster tempPos");
	}
	DECOR_SET_BOOL(&uVar0, "corpse_loot_gringo", 0);
	REQUEST_FIXED_CORPSE(&uVar0, 0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(&uVar0, 0);
	if (!IS_OBJECT_VALID(&iParam0 + 1288))
	{
		*(&iParam0 + 1288) = &uVar0;
	}
	return 1;
}

bool Function_161(int iParam0) //Position: 0x6D3C / 27964
{
	var uVar0;
	var uVar2;
	struct<2> Var4;
	var uVar6;
	struct<2> Var8;
	float fVar10;
	float fVar11;
	char* cVar12[32];
	
	if (!IS_LAYOUTREF_VALID(&iParam0 + 1256))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&iParam0 + 1256))
	{
		return 0;
	}
	strcpy(&cVar12, "dummyPosterObj", 32);
	cVar12 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165(&cVar12) };
	Function_154();
	Function_154();
	*(&iParam0 + 1312) = CREATE_POINT_IN_LAYOUT(&iParam0 + 1256, &cVar12, Function_154(), Function_154());
	Function_154();
	Function_154();
	ATTACH_OBJECTS_NO_DRV(&iParam0 + 1312, &iParam0 + 1288, "head", Function_154(), Function_154());
	strcpy(&cVar12, "deadPosterGringo", 32);
	cVar12 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165(&cVar12) };
	uVar0 = *(&iParam0 + 1408);
	FIND_GROUND_INTERSECTION(&uVar0, 50.0f, &Var4, &uVar6);
	*(&iParam0 + 1420) = Var4;
	uVar2 = Vector(0.0f, 1.0f, 0.0f);
	fVar10 = FABS((90.0f - GET_ANGLE_BETWEEN_VECTORS_DEGS(&uVar2, &uVar6)));
	fVar11 = ((180.0f + UNK_0x9C40E671(&uVar6)) % 360.0f);
	Var8 = Vector(-fVar10, fVar11, 0.0f);
	Function_162(StackVal, StackVal, &iParam0, Var4, Var8);
	WAIT(500);
	*(&iParam0 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, &iParam0 + 1256, &cVar12, "$/content/scripting/gringo/simplegringo/get_wanted_poster_ground", Var4, Vector(0.0f, 0.0f, 0.0f));
	if (IS_OBJECT_VALID(&iParam0 + 1264))
	{
	}
	else
	{
		LOG_ERROR("Invalid gringo for dead poster.");
		return 0;
	}
	SET_OBJECT_POSITION_ON_GROUND(&iParam0 + 1264, Var4);
	*(&iParam0 + 1320) = CREATE_CAMERA_FOCUS_POINT_OBJECT_WITH_TUNING(&iParam0 + 1256, Function_164(), &iParam0 + 1280, "wantedPoster", 2.0f, 2,01f);
	if (!IS_OBJECT_VALID(&iParam0 + 1320))
	{
		LOG_ERROR("Could not create wanted poster camera focus");
	}
	else
	{
		SET_CAMERA_FOCUS_PROMPT_TEXT(&iParam0 + 1320, "npm_bh_cfp");
	}
	PRINTSTRING("dead_poster: ground intersection position: ");
	PRINTVECTOR(Var4);
	PRINTNL();
	PRINTSTRING("dead_poster: ground intersection rotation: ");
	PRINTVECTOR(Var8);
	PRINTNL();
	return 1;
}

int Function_162(int iParam0, struct<2> Param1, struct<2> Param3) //Position: 0x6FED / 28653
{
	var uVar0;
	struct<2> Var2;
	char* cVar4[64];
	char* cVar22[64];
	
	cVar4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 1.0f, 0.0f), Param1, StackVal);
	strcpy(&cVar6, "bountyHunterPgen", 64);
	memcpy(&cVar6, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165(&cVar6), 16);
	if (!IS_LAYOUTREF_VALID(&iParam0 + 1256))
	{
		return 0;
	}
	if (IS_OBJECT_VALID(&iParam0 + 1280))
	{
		return 0;
	}
	if (!FIND_GROUND_INTERSECTION(&cVar4, 4,9f, &Var2, &uVar0))
	{
		return 0;
	}
	strcpy(&cVar22, "$/fragments/p_pos_wanted", 64);
	if (Global_39906.f_40 <= 10)
	{
		stradd(&cVar22, "0", 64);
	}
	stradd(&cVar22, INT_TO_STRING(Global_39906.f_40), 64);
	stradd(&cVar22, "x", 64);
	*(&iParam0 + 1280) = CREATE_PROP_IN_LAYOUT(&iParam0 + 1256, &cVar6, &cVar22, Var2, Param3, 0);
	SET_OBJECT_POSITION_ON_GROUND(&iParam0 + 1280, Var2);
	SET_OBJECT_COLLIDE_WITH_WORLD(&iParam0 + 1280, 0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(&iParam0 + 1280, 0);
	if (!IS_OBJECT_VALID(&iParam0 + 1280))
	{
		return 0;
	}
	return 1;
}

void Function_163(struct<321> Param0) //Position: 0x70F7 / 28919
{
	var uVar0;
	
	Param0.f_8 = 0;
	Param0.f_320 = 0;
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165("campfire"), 4);
	*(&Param0 + 16) = CREATE_LAYOUT(&uVar0);
	if (IS_STRING_VALID(&bParam1))
	{
		if (STRING_LENGTH(&bParam1) >= 0)
		{
			*(&Param0 + 32) = GET_ASSET_ID(&bParam1, 0);
			Function_79(&Param0 + 120, &Param0 + 32, 0);
		}
	}
	if (IS_STRING_VALID(&uParam2))
	{
		if (STRING_LENGTH(&uParam2) >= 0)
		{
			*(&Param0 + 40) = GET_ASSET_ID(&uParam2, 7);
			Function_79(&Param0 + 120, &Param0 + 40, 7);
		}
	}
	return;
}

var Function_164() //Position: 0x7189 / 29065
{
	int iVar0;
	
	return &iVar0;
}

struct<32> Function_165(char* cParam0) //Position: 0x7192 / 29074
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_166("0", &cVar8, ""), 4);
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

struct<32> Function_166(char* cParam0) //Position: 0x71FE / 29182
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_167(bool bParam0) //Position: 0x7220 / 29216
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_168(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x7236 / 29238
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_141(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

bool Function_169(struct<65> Param0) //Position: 0x72BB / 29371
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector((&Param0 + 16), Function_200(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_108(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_172(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_168("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_168("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_170(Param0.f_64, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_165("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_200(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_108(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_170(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7679 / 30329
{
	int iVar0;
	bool bVar1;
	
	if (Global_47151[16])
	{
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
	}
	uParam1 = &uParam1;
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_6642 = 0;
		Function_168("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
		iVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(&Global_27462[iParam052] + 368);
		if (Global_47151[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_171(&iVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_171(&iVar0);
		}
		if (!&bParam3)
		{
			ADD_TIME(&iVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&iVar0, 0, 0, 10, 0);
		}
		if (Global_47151[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_171(&iVar0);
		}
		*(&Global_27462[iParam052] + 376) = &iVar0;
		Global_26652[iParam04] = &iVar0;
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

void Function_171(int iParam0) //Position: 0x78E5 / 30949
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

bool Function_172(struct<73> Param0) //Position: 0x792F / 31023
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
			Function_199(&Param0 + 8);
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
				Var3 = Vector(0.0f, 0.0f, Function_205(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_205(1));
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
						uVar0 = Function_198(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_197(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_195(StackVal, &Param0 + 8, Var7, Function_196());
				}
				else
				{
					uVar0 = Function_194(StackVal, &Param0 + 8, Var7, Function_196(), "locflag", (&Param0 + 72 + 36)->f_24);
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
			Function_199(&Param0 + 8);
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
					if (Function_167(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_205(1))
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
				Function_125(&Param0 + 16, 99.0f, &Param0 + 16, 10);
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
				Function_193(&Var7, &uVar5);
				Var3 = Function_193(&Var7, &uVar5);
				if (!Function_202(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_192(&fVar10, &fVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((fVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_189(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_185(&Param0);
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
					if (!Function_184(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_183(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_21(StackVal, 131072))
				{
					if (StackVal || Function_182(Function_182(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_181(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_123(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
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
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_180((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_180((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				iVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, iVar15, &Var12);
				Function_179(&Var12);
				*(&Param0 + 16) = Function_179(&Var12);
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
				if (!Function_184(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_183(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_184(Function_183(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_21(StackVal, 131072))
			{
				if (StackVal || Function_182(Function_182(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_123(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_177((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_174(StackVal, Global_43787, Global_43788, Global_43789, 1);
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
						iVar18 = Function_174(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
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
	if (Function_173(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_173(struct<2> Param0) //Position: 0x81F7 / 33271
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

int Function_174(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x822E / 33326
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
								return Function_175(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_175(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_175(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_175(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_175(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_175(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_175(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_175(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_175(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_175(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_175(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_175(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_175(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_175(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_175(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_175(&Global_11826, &Global_13998, bParam3);
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
								return Function_175(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_175(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_175(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_175(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_175(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_175(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_175(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_175(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_175(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_175(&Global_12472, &Global_14954, bParam3);
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
		return Function_175(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_175(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_175(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_175(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_175(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_175(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_175(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_175(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_175(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_175(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_175(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_175(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_175(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_175(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_175(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_175(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_175(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_175(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_175(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_175(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_175(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_175(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_175(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_175(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_175(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_175(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_175(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x8844 / 34884
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_176(&(Param0[iVar02]), 2))
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

bool Function_176(var uParam0, int iParam1) //Position: 0x889E / 34974
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_177(int iParam0) //Position: 0x88BB / 35003
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
			if (Function_178(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_178(int iParam0) //Position: 0x8923 / 35107
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_50(&iParam0);
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

struct<8> Function_179(vector3 vParam0) //Position: 0x8961 / 35169
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

int Function_180(int iParam0, int iParam1) //Position: 0x8983 / 35203
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

bool Function_181(struct<2> Param0) //Position: 0x89B5 / 35253
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

int Function_182(struct<2> Param0) //Position: 0x8A5A / 35418
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

bool Function_183(struct<2> Param0) //Position: 0x8AA8 / 35496
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

bool Function_184(struct<2> Param0) //Position: 0x8B03 / 35587
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

int Function_185(bool bParam0) //Position: 0x8B82 / 35714
{
	float fVar0;
	bool bVar1;
	
	Function_192(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_188(0);
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
		Function_187(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&bParam0 + 72 + 84));
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
	Function_186(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&bParam0 + 72 + 84));
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

void Function_186(struct<33> Param0) //Position: 0x8D34 / 36148
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

void Function_187(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x8E60 / 36448
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

void Function_188(float fParam0) //Position: 0x8EB1 / 36529
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

int Function_189(int iParam0, struct<2> Param1) //Position: 0x8EF8 / 36600
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_191();
	Function_188(0);
	Function_190(0);
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
		Function_187(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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
	Function_186(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
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

void Function_190(bool bParam0) //Position: 0x90AD / 37037
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

void Function_191() //Position: 0x9160 / 37216
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

void Function_192(float fParam0, int iParam1) //Position: 0x916F / 37231
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

struct<8> Function_193(struct<2> Param0) //Position: 0x9200 / 37376
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
	int iVar18;
	int iVar21;
	
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
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &iVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &iVar21);
		Function_179(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_179(&iVar18), StackVal);
		Function_179(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_179(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_192(&fVar4, &fVar5);
		fVar6 = ((fVar4 + fVar5) / 2.0f);
		if (fVar11 > 0.0f && fVar10 > 0.0f)
		{
			UNK_0xDF93BD7C(&uVar7);
			Var8 = Vector(0.0f, 0.0f, 0.0f);
			return StackVal, Var8;
		}
		if (fVar11 > fVar10)
		{
			UNK_0x19D652F9(&uVar3, (fVar6 * -1.0f), &uVar0, &iVar21);
			Function_179(&iVar21);
			Var8 = Function_179(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_179(&iVar18);
			Var8 = Function_179(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

var Function_194(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x931A / 37658
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
						if (Function_123(&Var5, &fVar4, 0, 0))
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

var Function_195(var uParam0, struct<2> Param1, float fParam3) //Position: 0x93CF / 37839
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
				if (Function_123(&Var5, &uVar4, 0, 0))
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

var Function_196() //Position: 0x9461 / 37985
{
	float fVar0;
	int iVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_192(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

var Function_197(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x9492 / 38034
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

var Function_198(var uParam0, struct<2> Param1, float fParam3) //Position: 0x9534 / 38196
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

int Function_199(int iParam0) //Position: 0x95BA / 38330
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_164());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_164());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

var Function_200(var uParam0, struct<2> Param1) //Position: 0x95F0 / 38384
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_201(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_201(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x961E / 38430
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

bool Function_202(vector3 vParam0) //Position: 0x9642 / 38466
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_203(int iParam0, struct<2> Param1) //Position: 0x965A / 38490
{
	if (!STREAMING_ARE_BOUNDS_LOADED(Param1, 30.0f))
	{
		return 0;
	}
	if (!Function_204(&(Global_43791[Global_43789]), 4))
	{
		return 0;
	}
	if (!Function_81(&iParam0 + 784))
	{
		return 0;
	}
	return 1;
}

bool Function_204(var uParam0, int iParam1) //Position: 0x9694 / 38548
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

float Function_205(bool bParam0) //Position: 0x96B1 / 38577
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_192(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_206(int iParam0, char* cParam1) //Position: 0x96ED / 38637
{
	*(&iParam0 + 1336) = Function_239();
	ADD_TIME(&iParam0 + 1336, 0, 0, 10, 0);
	if (!Function_238(128))
	{
		iParam0 = 5;
	}
	else
	{
		Function_215(&Global_39906, Function_235(), 4294967294, 0, 0, 1);
		*(&iParam0 + 1468) = { StackVal, StackVal, StackVal, StackVal, StackVal, Global_39906 };
		strcpy(&iParam0 + 1536, &cParam1, 64);
		*(&iParam0 + 1336) = GET_TIME_OF_DAY();
		ADD_TIME(&iParam0 + 1336, 0, 0, 40, 0);
		Function_207(&iParam0);
		iParam0 = 0;
	}
	Function_163(&iParam0 + 252, &iParam0 + 1536, "$/tune/refGroups/campsiteSets/cam_campfireMedium01x");
	return;
}

void Function_207(int iParam0) //Position: 0x97AB / 38827
{
	char* cVar0[64];
	int iVar16;
	
	iVar16 = 0;
	while (iVar16 < 6)
	{
		(*&iParam0 + 1160)[iVar16] = Function_209();
		Function_120(&iParam0 + 784, (*&iParam0 + 1160)[iVar16], 3, 0);
		iVar16++;
	}
	iVar16 = 0;
	while (iVar16 < 2)
	{
		(*&iParam0 + 1224)[iVar16] = Function_208();
		Function_120(&iParam0 + 784, (*&iParam0 + 1224)[iVar16], 3, 0);
		iVar16++;
	}
	strcpy(&cVar0, "$/fragments/p_pos_wanted", 64);
	if (Global_39906.f_40 <= 10)
	{
		stradd(&cVar0, "0", 64);
	}
	stradd(&cVar0, INT_TO_STRING(Global_39906.f_40), 64);
	stradd(&cVar0, "x", 64);
	Function_77(&iParam0 + 784, &cVar0, 0, 0);
	Function_77(&iParam0 + 784, "dead_ground_horse", 5, 0);
	Function_77(&iParam0 + 784, "custom/dead_ground_horse", 8, 0);
	Function_77(&iParam0 + 784, "dead_ground_male", 5, 0);
	Function_77(&iParam0 + 784, "custom/dead_ground_male", 8, 0);
	Function_77(&iParam0 + 784, "$/content/scripting/gringo/simplegringo/get_wanted_poster_ground", 1, 0);
	Function_77(&iParam0 + 784, "procmissions", 10, 0);
	return;
}

var Function_208() //Position: 0x9967 / 39271
{
	int iVar0;
	int iVar1;
	
	iVar0 = RAND_INT_RANGE(0, 3);
	iVar1 = (976 + iVar0);
	return iVar1;
}

var Function_209() //Position: 0x997E / 39294
{
	int iVar0;
	
	if (Function_214(1))
	{
		iVar0 = Function_210(1, 0, 0, 4294967295, 0);
	}
	else
	{
		iVar0 = 133;
	}
	return iVar0;
}

var Function_210(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x999E / 39326
{
	return Function_211(StackVal, uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_211(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x99BB / 39355
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_113(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_113(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_113(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_113(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_113(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_113(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_113(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_113(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_113(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_113(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_113(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_113(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_113(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_113(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_212(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_212(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x9C1E / 39966
{
	int iVar0;
	
	iVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_213(&(Global_46972[0]), &iVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_213(&(Global_46972[1]), &iVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_213(&(Global_46972[2]), &iVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_213(&(Global_46972[3]), &iVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_213(&(Global_46972[4]), &iVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_213(&(Global_46972[5]), &iVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_213(&(Global_46972[6]), &iVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_213(&(Global_46972[7]), &iVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_213(&(Global_46972[8]), &iVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_213(&(Global_46972[9]), &iVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_213(&(Global_46972[10]), &iVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_213(&(Global_46972[11]), &iVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_213(&(Global_46972[12]), &iVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_213(&(Global_46972[13]), &iVar0);
	}
	return Function_113(StackVal, &iVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_213(var uParam0, int iParam1) //Position: 0x9D8D / 40333
{
	int iVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&iParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&iParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		iVar0++;
	}
	return;
}

bool Function_214(bool bParam0) //Position: 0x9E51 / 40529
{
	bool bVar0;
	
	switch (bParam0)
	{
		case 0x00000001:
			bVar0 = IS_POPSET_VALID(&(Global_46972[0]));
			break;
		
		case 0x00000002:
			bVar0 = IS_POPSET_VALID(&(Global_46972[1]));
			break;
		
		case 0x00000004:
			bVar0 = IS_POPSET_VALID(&(Global_46972[2]));
			break;
		
		case 0x00000008:
			bVar0 = IS_POPSET_VALID(&(Global_46972[3]));
			break;
		
		case 0x00000010:
			bVar0 = IS_POPSET_VALID(&(Global_46972[4]));
			break;
		
		case 0x00000020:
			bVar0 = IS_POPSET_VALID(&(Global_46972[5]));
			break;
		
		case 0x00000040:
			bVar0 = IS_POPSET_VALID(&(Global_46972[6]));
			break;
		
		case 0x00000080:
			bVar0 = IS_POPSET_VALID(&(Global_46972[7]));
			break;
		
		case 0x00000100:
			bVar0 = IS_POPSET_VALID(&(Global_46972[8]));
			break;
		
		case 0x00000200:
			bVar0 = IS_POPSET_VALID(&(Global_46972[9]));
			break;
		
		case 0x00000400:
			bVar0 = IS_POPSET_VALID(&(Global_46972[10]));
			break;
		
		case 0x00000800:
			bVar0 = IS_POPSET_VALID(&(Global_46972[11]));
			break;
		
		case 0x00001000:
			bVar0 = IS_POPSET_VALID(&(Global_46972[12]));
			break;
		
		case 0x00002000:
			bVar0 = IS_POPSET_VALID(&(Global_46972[13]));
			break;
		
		case 0x40000000:
			bVar0 = false;
			break;
		
		default:
			LOG_ERROR("Unhandled case in IS_POPSET_TYPES_FLAG_VALID.");
			bVar0 = false;
			break;
	}
	return bVar0;
}

int Function_215(struct<25> Param0) //Position: 0x9FD1 / 40913
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_234())
	{
		return 0;
	}
	Param0.f_16 = Function_233(&iParam1);
	if (&iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (&iParam1 == 4294967295)
	{
		iParam1 = Function_235();
	}
	if (&iParam4 > 0 || &iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_39906.f_12 = &iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_232(&Var96, iVar1) == 1)
		{
			if (Function_230(Var96.f_24) == Global_46722[Global_43787])
			{
				if (Var96.f_32 == &iParam3)
				{
					if (((&iParam1 != 4294967295 || &iParam1 <= Var96.f_12) || (&iParam1 != 0 && Var96.f_12 != 3)) || (&iParam1 != 0 && Var96.f_12 != 4))
					{
						if (&iParam4 != 0 || &iParam4 != Function_229(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (&iParam5 == 1)
							{
								if (!Function_228(iVar1))
								{
									iVar50[iVar3] = iVar1;
									iVar3++;
								}
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 >= 0)
	{
		if (iVar3 >= 0)
		{
			iVar1 = iVar50[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar3)];
		}
		else
		{
			iVar1 = iVar4[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2)];
		}
		if (Function_232(&Param0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(Param0.f_20));
			PRINTNL();
			Param0.f_24 = Function_216(&Param0, &iParam4, 80, 20000, Param0.f_12);
			iVar0 = 1;
		}
		else
		{
			LOG_ERROR("There's something wrong here");
		}
	}
	else
	{
		iVar0 = 0;
		LOG_ERROR("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find a valid actor");
		PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find an actor");
		PRINTNL();
	}
	if (&iParam2 != 4294967294)
	{
		Param0.f_24 = &iParam2;
	}
	return iVar0;
}

var Function_216(struct<25> Param0) //Position: 0xA256 / 41558
{
	var uVar0;
	var uVar1;
	
	uVar0 = Param0.f_24;
	uParam3 = &uParam3;
	uParam2 = &uParam2;
	if (StackVal || Param0.f_24 != 4294967295 != 1)
	{
		uVar1 = Function_217(uVar0, 80.0f, 20000.0f, &uParam1, 1, &uParam4);
	}
	else if (StackVal != 6)
	{
		LOG_ERROR("Unhandled Bounty Hunter Landmark type");
	}
	else
	{
		uVar1 = Param0.f_24;
	}
	return uVar1;
}

var Function_217(bool bParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0xA2EC / 41708
{
	bool bVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	struct<2> Var296;
	struct<2> Var298;
	bool bVar300;
	bool bVar301;
	bool bVar302[146];
	bool bVar449[146];
	int iVar596;
	int iVar597;
	int iVar598;
	bool bVar599;
	bool bVar600;
	int iVar601;
	struct<8> Var602;
	
	bVar0 = 4294967295;
	bVar301 = 1,001638E+07.0f;
	bVar599 = false;
	bVar600 = false;
	iVar601 = 0;
	iVar596 = 0;
	while (iVar596 < 145)
	{
		iVar1[iVar596] = 4294967295;
		iVar148[iVar596] = 4294967295;
		iVar596++;
	}
	if (!Function_167(bParam0))
	{
		bParam0 = Global_43788;
	}
	iVar295 = Function_230(bParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var298);
	iVar596 = 0;
	while (iVar596 < 145)
	{
		Function_227(&Global_44085[iVar5969] + 8);
		Var296 = Function_227(&Global_44085[iVar5969] + 8);
		bVar300 = VDIST(Var298, Var296);
		if (&iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(&Global_44085[iVar5969] + 8) && (iVar295 != Function_230(Global_44085[iVar5969]) || bParam0 != 4294967295)) != 1) && Function_204(&(Global_43791[iVar596]), 8192)) && iVar596 == 0)
		{
			if (iVar596 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (bVar300 > bVar301)
			{
				bVar301 = bVar300;
				iVar598 = iVar596;
			}
			if (bVar300 < &fParam1 && bVar300 > &fParam2)
			{
				iVar1[bVar599] = iVar596;
				bVar302[bVar599] = bVar300;
				bVar599++;
				if (Function_221(Function_222(iVar596, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[bVar600] = iVar596;
					bVar449[bVar600] = bVar300;
					bVar600++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (bVar599 == iVar1)
		{
			iVar596 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		iVar596++;
	}
	if (&iParam5 != 4294967295)
	{
		Function_220(&iVar1, &bVar302, bVar599);
		Function_220(&iVar148, &bVar449, bVar600);
	}
	if (bVar600 < 0 && &iParam4 != 1)
	{
		switch (&iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar601 = Function_29(3, bVar600);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar601 = Function_29(5, bVar600);
				break;
			
			case 0x00000004:
				iVar601 = Function_29(7, bVar600);
				break;
			
			case 0x00000005:
				iVar601 = Function_29(10, bVar600);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar601 = Function_29(5, bVar600);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar597 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar601);
		bVar0 = iVar148[iVar597];
		if (Function_167(bVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			bVar0 = Function_219();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var602 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_218(bVar0) };
		PRINTSTRING(&Var602);
		PRINTSTRING(" with a distance of ");
		Function_227(&Global_44085[bVar09] + 8);
		Var296 = Function_227(&Global_44085[bVar09] + 8);
		bVar300 = VDIST(Var298, Var296);
		PRINTFLOAT(bVar300);
		PRINTNL();
	}
	else if (bVar599 >= 0)
	{
		switch (&iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar601 = Function_29(3, bVar599);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar601 = Function_29(5, bVar599);
				break;
			
			case 0x00000004:
				iVar601 = Function_29(7, bVar599);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar601 = Function_29(10, bVar599);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar601 = Function_29(5, bVar599);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar597 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar601);
		bVar0 = iVar1[iVar597];
		if (Function_167(bVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			bVar0 = Function_219();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var602 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_218(bVar0) };
		PRINTSTRING(&Var602);
		PRINTSTRING(" with a distance of ");
		Function_227(&Global_44085[bVar09] + 8);
		Var296 = Function_227(&Global_44085[bVar09] + 8);
		bVar300 = VDIST(Var298, Var296);
		PRINTFLOAT(bVar300);
		PRINTNL();
	}
	else
	{
		LOG_ERROR("No valid landmark picked");
		PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK found no valid landmarks");
		PRINTNL();
		return iVar598;
	}
	return bVar0;
}

struct<32> Function_218(bool bParam0) //Position: 0xA99E / 43422
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_167(bParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(&Global_44085[bParam09] + 8))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[bParam09] + 8), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, &Global_44085[bParam09] + 32, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(&Global_44085[bParam09] + 8))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[bParam09] + 8), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_219() //Position: 0xAA60 / 43616
{
	if (Global_43787 == 0)
	{
		return Global_46760[6];
	}
	if (Global_43787 == 1)
	{
		return Global_46866[3];
	}
	return Global_46926[5];
}

void Function_220(int[] iParam0, bool[] bParam1, int iParam2) //Position: 0xAA8E / 43662
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = bParam1[iVar0];
		uVar2 = iParam0[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if (bParam1[iVar1] < fVar3)
			{
				bParam1[iVar1 + 1] = bParam1[iVar1];
				iParam0[iVar1 + 1] = iParam0[iVar1];
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					iVar4 = 1;
				}
			}
			else
			{
				iVar4 = 1;
			}
		}
		iParam0[iVar1 + 1] = uVar2;
		bParam1[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

int Function_221(int iParam0) //Position: 0xAB25 / 43813
{
	if (!Function_62(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

int Function_222(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAB3F / 43839
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_226(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_223(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_223(bParam0, bParam1, bParam2, 4294967295);
}

int Function_223(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xAB9D / 43933
{
	var uVar0;
	
	if (!Function_225(bParam2))
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
	uVar0 = Function_226(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_224(uVar0);
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

var Function_224(int iParam0) //Position: 0xAD01 / 44289
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

bool Function_225(int iParam0) //Position: 0xAD3F / 44351
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_226(int iParam0, int iParam1, int iParam2) //Position: 0xAD54 / 44372
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

struct<8> Function_227(int iParam0) //Position: 0xAD74 / 44404
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_228(bool bParam0) //Position: 0xAD86 / 44422
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = true;
	if (bParam0 <= 32)
	{
		bVar1 = SHIFT_LEFT(bVar0, bParam0);
		if ((Global_39906 && bVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	else
	{
		bVar1 = SHIFT_LEFT(bVar0, (bParam0 - 32));
		if ((StackVal && bVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	return iVar2;
}

int Function_229(int iParam0) //Position: 0xADD8 / 44504
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(iParam0);
	switch (iVar0)
	{
		case 0x0000000F:
			iVar1 = 1;
			break;
		
		case 0x0000001B:
			iVar1 = 2;
			break;
		
		case 0x00000018:
			iVar1 = 3;
			break;
		
		case 0x0000000C:
			iVar1 = 4;
			break;
		
		case 0x00000019:
			iVar1 = 5;
			break;
		
		case 0x0000000E:
			iVar1 = 6;
			break;
		
		case 0x0000000D:
			iVar1 = 7;
			break;
		
		default:
			LOG_ERROR("BOUNTYHUNTER_GET_GANG_TYPE found an invalid actor faction");
			iVar1 = 7;
			break;
	}
	return iVar1;
}

int Function_230(bool bParam0) //Position: 0xAE87 / 44679
{
	return Function_231(bParam0);
}

int Function_231(int iParam0) //Position: 0xAE92 / 44690
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_167(iParam0))
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

bool Function_232(struct<41> Param0) //Position: 0xAEEA / 44778
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0x00000000:
			Param0.f_12 = 3;
			Param0.f_20 = 415;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 26;
			break;
		
		case 0x00000001:
			Param0.f_12 = 3;
			Param0.f_20 = 416;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 27;
			break;
		
		case 0x00000002:
			Param0.f_12 = 5;
			Param0.f_20 = 422;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 28;
			break;
		
		case 0x00000003:
			Param0.f_12 = 5;
			Param0.f_20 = 423;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 29;
			break;
		
		case 0x00000004:
			Param0.f_12 = 4;
			Param0.f_20 = 418;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 30;
			break;
		
		case 0x00000005:
			Param0.f_12 = 4;
			Param0.f_20 = 419;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 31;
			break;
		
		case 0x00000006:
			Param0.f_12 = 2;
			Param0.f_20 = 397;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 12;
			break;
		
		case 0x00000007:
			Param0.f_12 = 4;
			Param0.f_20 = 398;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 32;
			break;
		
		case 0x00000008:
			Param0.f_12 = 5;
			Param0.f_20 = 403;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 33;
			break;
		
		case 0x00000009:
			Param0.f_12 = 5;
			Param0.f_20 = 404;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 34;
			break;
		
		case 0x0000000A:
			Param0.f_12 = 4;
			Param0.f_20 = 400;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 35;
			break;
		
		case 0x0000000B:
			Param0.f_12 = 5;
			Param0.f_20 = 401;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 36;
			break;
		
		case 0x0000000C:
			Param0.f_12 = 2;
			Param0.f_20 = 496;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 13;
			break;
		
		case 0x0000000D:
			Param0.f_12 = 2;
			Param0.f_20 = 497;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 14;
			break;
		
		case 0x0000000E:
			Param0.f_12 = 4;
			Param0.f_20 = 502;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 17;
			break;
		
		case 0x0000000F:
			Param0.f_12 = 4;
			Param0.f_20 = 503;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 5;
			break;
		
		case 0x00000010:
			Param0.f_12 = 3;
			Param0.f_20 = 499;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 18;
			break;
		
		case 0x00000011:
			Param0.f_12 = 3;
			Param0.f_20 = 500;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 19;
			break;
		
		case 0x00000012:
			Param0.f_12 = 1;
			Param0.f_20 = 477;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 1;
			break;
		
		case 0x00000013:
			Param0.f_12 = 1;
			Param0.f_20 = 478;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 42;
			break;
		
		case 0x00000014:
			Param0.f_12 = 3;
			Param0.f_20 = 483;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 41;
			break;
		
		case 0x00000015:
			Param0.f_12 = 3;
			Param0.f_20 = 484;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 2;
			break;
		
		case 0x00000016:
			Param0.f_12 = 2;
			Param0.f_20 = 480;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 3;
			break;
		
		case 0x00000017:
			Param0.f_12 = 2;
			Param0.f_20 = 481;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 4;
			break;
		
		case 0x00000018:
			Param0.f_12 = 1;
			Param0.f_20 = 505;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 43;
			break;
		
		case 0x00000019:
			Param0.f_12 = 1;
			Param0.f_20 = 506;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 44;
			break;
		
		case 0x0000001A:
			Param0.f_12 = 3;
			Param0.f_20 = 513;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 15;
			break;
		
		case 0x0000001B:
			Param0.f_12 = 3;
			Param0.f_20 = 514;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 6;
			break;
		
		case 0x0000001C:
			Param0.f_12 = 2;
			Param0.f_20 = 508;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 16;
			break;
		
		case 0x0000001D:
			Param0.f_12 = 2;
			Param0.f_20 = 509;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 7;
			break;
		
		case 0x0000001E:
			Param0.f_12 = 1;
			Param0.f_20 = 486;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 45;
			break;
		
		case 0x0000001F:
			Param0.f_12 = 1;
			Param0.f_20 = 487;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 46;
			break;
		
		case 0x00000020:
			Param0.f_12 = 3;
			Param0.f_20 = 492;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 8;
			break;
		
		case 0x00000021:
			Param0.f_12 = 3;
			Param0.f_20 = 493;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 9;
			break;
		
		case 0x00000022:
			Param0.f_12 = 2;
			Param0.f_20 = 489;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 10;
			break;
		
		case 0x00000023:
			Param0.f_12 = 2;
			Param0.f_20 = 490;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 11;
			break;
		
		case 0x00000024:
			Param0.f_12 = 3;
			Param0.f_20 = 467;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 47;
			break;
		
		case 0x00000025:
			Param0.f_12 = 3;
			Param0.f_20 = 468;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 48;
			break;
		
		case 0x00000026:
			Param0.f_12 = 2;
			Param0.f_20 = 406;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 20;
			break;
		
		case 0x00000027:
			Param0.f_12 = 3;
			Param0.f_20 = 407;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 21;
			break;
		
		case 0x00000028:
			Param0.f_12 = 4;
			Param0.f_20 = 412;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 22;
			break;
		
		case 0x00000029:
			Param0.f_12 = 4;
			Param0.f_20 = 413;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 23;
			break;
		
		case 0x0000002A:
			Param0.f_12 = 3;
			Param0.f_20 = 410;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 24;
			break;
		
		case 0x0000002B:
			Param0.f_12 = 3;
			Param0.f_20 = 411;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 25;
			break;
		
		case 0x0000002C:
			Param0.f_12 = 2;
			Param0.f_20 = 787;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 60;
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

var Function_233(int iParam0) //Position: 0xB73E / 46910
{
	int iVar0;
	
	switch (&iParam0)
	{
		case 0x00000001:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000002:
			iVar0 = (5 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000003:
			iVar0 = (6 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000004:
			iVar0 = (7 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000005:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000006:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 3.0f)));
			break;
		
		case 0x00000000:
		default:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 5.0f)));
			break;
	}
	return iVar0;
}

bool Function_234() //Position: 0xB80D / 47117
{
	return Function_21(StackVal, 1);
}

var Function_235() //Position: 0xB81C / 47132
{
	int iVar0;
	
	iVar0 = Function_236(0);
	return iVar0;
}

var Function_236(int iParam0) //Position: 0xB82A / 47146
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_237(358) + Function_237(359));
	if (&iParam0 == 1)
	{
		iVar2 = Function_29(iVar1, 7);
		if (iVar2 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2);
		}
	}
	else
	{
		if (iVar1 <= 2)
		{
			iVar0 = 1;
		}
		else if (iVar1 <= 4)
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 3;
		}
		if (Global_43787 == 0)
		{
			iVar0 = iVar0;
		}
		else if (Global_43787 == 1)
		{
			iVar0++;
		}
		else
		{
			iVar0 += 2;
		}
	}
	return iVar0;
}

int Function_237(int iParam0) //Position: 0xB8AF / 47279
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

bool Function_238(int iParam0) //Position: 0xB8F0 / 47344
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_38380 - 1))
	{
		if (Global_38380[iVar036] != iParam0 || iParam0 != 4096)
		{
			if (Function_153(&(Global_38380[iVar036]), 4) && !IS_SCRIPT_VALID(&Global_38380[iVar036] + 48))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

var Function_239() //Position: 0xB940 / 47424
{
	return &Global_21369 + 8;
}

