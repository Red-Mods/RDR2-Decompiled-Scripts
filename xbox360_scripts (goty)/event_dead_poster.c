//Decompiled with MagicRDR v1.0
//Function Count : 242
//Statics Count : 84
//Natives Count : 365
//Parameters Count : 51

#region Local Var
	struct<105> Local_0 = { 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	int iVar1;
	
	iLocal_27 = 2;
	iLocal_28 = 4;
	fLocal_29 = 70.0f;
	*(&iVar1 + 4 + 64 + 20) = 1;
	*(&iVar1 + 208 + 24) = 5;
	*(&iVar1 + 208 + 48) = 2;
	*(&iVar1 + 208 + 60) = 9;
	*(&iVar1 + 208 + 172) = 5;
	*(&iVar1 + 208 + 228) = 2;
	*(&iVar1 + 556) = 23;
	*(&iVar1 + 836) = 7;
	*(&iVar1 + 868) = 3;
	*(&iVar1 + 4) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_208(&iVar1, "$/fragments/p_gen_campFireCombined01x");
	while (!IS_EXITFLAG_SET())
	{
		iVar0 = Function_28(&iVar1);
		WAIT(iVar0);
	}
	Function_1(&iVar1);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xB4 / 180
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	Function_24(iParam0, 0, 0);
	Function_23(iParam0);
	DESTROY_OBJECT(iParam0->f_1080);
	if (Function_22())
	{
		Function_13();
	}
	if (IS_OBJECTSET_VALID(iParam0->f_904))
	{
		Function_12(iParam0->f_904);
		DESTROY_OBJECTSET(iParam0->f_904);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_904))
	{
		iVar0 = GET_OBJECTSET_SIZE(iParam0->f_904);
		bVar3 = GET_AMBIENT_LAYOUT();
		iVar1 = 0;
		while (iVar1 < (iVar0 - 1))
		{
			bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_904);
			if (IS_OBJECT_VALID(bVar2))
			{
				GIVE_OBJECT_TO_LAYOUT(bVar2, bVar3);
			}
			iVar1++;
		}
		Function_12(iParam0->f_904);
		DESTROY_OBJECTSET(iParam0->f_908);
	}
	if (IS_BLIP_VALID(iParam0->f_920))
	{
		SET_BLIP_BLINK(iParam0->f_920, 0, 0, 5f);
		REMOVE_BLIP(iParam0->f_920);
	}
	if (IS_OBJECT_VALID(iParam0->f_888))
	{
		DESTROY_OBJECT(iParam0->f_888);
	}
	if (IS_OBJECT_VALID(iParam0->f_916))
	{
		DESTROY_OBJECT(iParam0->f_916);
	}
	Function_10(iParam0 + 996, 0, 0);
	DESTROY_OBJECT(iParam0->f_996);
	RELEASE_LAYOUT_REF(iParam0->f_884);
	if (IS_ITERATOR_VALID(iParam0->f_968))
	{
		DESTROY_ITERATOR(iParam0->f_968);
	}
	Function_2(iParam0 + 208);
	return;
}

void Function_2(int iParam0) //Position: 0x1C8 / 456
{
	bool bVar0;
	
	Global_26154 = (Global_26154 - 1);
	if (iParam0->f_268)
	{
		if (SQUAD_IS_VALID(iParam0->f_244))
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_244))
			{
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0)))
				{
					if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0), "nconvAdded"))
					{
						AI_CONVERSE_DISABLE(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0));
						AI_CONVERSE_REMOVE_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0));
					}
				}
				bVar0++;
			}
		}
		iParam0->f_268 = 0;
	}
	if (SQUAD_IS_VALID(iParam0->f_244))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_244))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0)))
			{
				if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0), "nconvAdded"))
				{
					DECOR_REMOVE(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0), "nconvAdded");
				}
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0));
			}
			bVar0++;
		}
	}
	if (IS_OBJECT_VALID(*iParam0))
	{
		UNK_0xE18028C1(*iParam0);
		DESTROY_OBJECT(*iParam0);
	}
	if (iParam0->f_292 >= 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam0->f_292);
	}
	if (iParam0->f_296 >= 0)
	{
		RESET_THIS_TREE_TYPE_CLEARING(iParam0->f_296);
	}
	if (iParam0->f_296 >= 0)
	{
		RESET_THIS_BREAKABLE_TREE_CLEARING(iParam0->f_300);
	}
	Function_6(iParam0 + 60);
	if (IS_BLIP_VALID(iParam0->f_248))
	{
		REMOVE_BLIP(iParam0->f_248);
	}
	Function_4();
	if (IS_ITERATOR_VALID(iParam0->f_288))
	{
		DESTROY_ITERATOR(iParam0->f_288);
	}
	Function_3();
	RELEASE_LAYOUT_REF(StackVal);
	return;
}

void Function_3() //Position: 0x33A / 826
{
	return;
}

void Function_4() //Position: 0x340 / 832
{
	Function_5();
	return;
}

void Function_5() //Position: 0x349 / 841
{
	Function_6(&Local_0 + 4);
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_6(int iParam0) //Position: 0x35B / 859
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_7(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(var uParam0, int iParam1) //Position: 0x381 / 897
{
	if (Function_9(uParam0[iParam13], 4))
	{
		if (Function_9(uParam0[iParam13], 1))
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
			Function_8(uParam0[iParam13], 1);
			Function_8(uParam0[iParam13], 2);
			Function_8(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x4AF / 1199
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_9(var uParam0, int iParam1) //Position: 0x4C9 / 1225
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10(var uParam0, bool bParam1, bool bParam2) //Position: 0x4E6 / 1254
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_11(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(bVar1);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(bVar1);
				}
				else
				{
					RELEASE_ACTOR(bVar1);
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

bool Function_11(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x562 / 1378
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_12(bool bParam0) //Position: 0x57C / 1404
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

void Function_13() //Position: 0x5C1 / 1473
{
	Function_15();
	Function_14(10, 3);
	return;
}

void Function_14(int iParam0, int iParam1) //Position: 0x5D0 / 1488
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_15() //Position: 0x707 / 1799
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
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_16(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_16());
	UI_POP("nDebugMenu");
	return;
}

var Function_16() //Position: 0x752 / 1874
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_17() //Position: 0x767 / 1895
{
	Function_18(25, 2);
	return;
}

void Function_18(int iParam0, int iParam1) //Position: 0x773 / 1907
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_19(int iParam0, int iParam1) //Position: 0x971 / 2417
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

bool Function_20() //Position: 0xAA8 / 2728
{
	if (Global_3380)
	{
		return 1;
	}
	if (Global_3382)
	{
		return 1;
	}
	if (Global_3392)
	{
		return 1;
	}
	if (Global_3384)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(Global_79344))
	{
		switch (Global_79349.f_16)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_21(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_21(int iParam0, bool bParam1) //Position: 0xB0F / 2831
{
	return (iParam0 && bParam1) == 0;
}

bool Function_22() //Position: 0xB1C / 2844
{
	return Global_34580;
}

void Function_23(int iParam0) //Position: 0xB25 / 2853
{
	Function_6(iParam0 + 556);
	STREAMING_UNLOAD_BOUNDS();
	return;
}

void Function_24(int iParam0, int iParam1, int iParam2) //Position: 0xB36 / 2870
{
	var uVar0;
	
	if (IS_BLIP_VALID(iParam0->f_920))
	{
		REMOVE_BLIP(iParam0->f_920);
	}
	if (iParam1 == 1)
	{
		if (IS_OBJECT_VALID(iParam0->f_900))
		{
			GET_OBJECT_POSITION(iParam0->f_888, &uVar0);
			iParam0->f_920 = ADD_BLIP_FOR_COORD(&uVar0, 393, 0f, 2, 0);
		}
	}
	else if (IS_BLIP_VALID(iParam0->f_920))
	{
		SET_BLIP_BLINK(iParam0->f_920, 0, 0, 5f);
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

void Function_25(int iParam0) //Position: 0xBAE / 2990
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
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

bool Function_26() //Position: 0xBEA / 3050
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_8717[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_27(int iParam0, float fParam1) //Position: 0xC0F / 3087
{
	if (!Function_26())
	{
		switch (iParam0)
		{
			case 0x00000001:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, fParam1, 0);
				break;
			
			case 0x00000002:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, fParam1, 0);
				break;
			
			default:
				break;
			}
	}
	return;
}

int Function_28(int iParam0) //Position: 0xC46 / 3142
{
	bool bVar0;
	int iVar1;
	struct<8> Var2;
	bool bVar10;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	
	if (!IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)) || !IS_ACTOR_ALIVE(GET_PLAYER_ACTOR(0)))
	{
		*iParam0 = 5;
	}
	else if (Global_3380 != 1 && (iParam0 + 4)->f_36 != 0)
	{
		*iParam0 = 5;
	}
	else if ((IS_EARLIER_THAN(iParam0->f_924, GET_TIME_OF_DAY()) && VDIST(Global_34574, *(iParam0 + 4 + 8)) < Function_207(1)) && !WOULD_ACTOR_BE_VISIBLE(false, iParam0 + 4 + 8, 3212836864))
	{
		*iParam0 = 5;
	}
	bVar0 = 600;
	switch (*iParam0)
	{
		case 0x00000000:
			if (Function_205(StackVal, StackVal, iParam0, *(iParam0 + 4 + 8)))
			{
				*iParam0 = 1;
				bVar0 = false;
				if ((iParam0 + 4)->f_64 == 0)
				{
					(iParam0 + 4)->f_64 = 1;
				}
			}
			else
			{
				bVar0 = 600;
				break;
			}
			break;
		
		case 0x00000001:
			if (!Function_204(StackVal, StackVal, *(iParam0 + 4 + 8)))
			{
				iVar18 = 1;
			}
			else if (Function_171(iParam0 + 4, &bVar0, iParam0 + 1076, iParam0 + 1072, 1))
			{
				iVar18 = 1;
			}
			else if (iParam0->f_1072 == 1)
			{
				if ((iParam0 + 4)->f_36 == 1)
				{
					Function_170("Could not find a road point to launch from", 0x40800000, 0, 2, 1, 0);
				}
				*iParam0 = 5;
			}
			if (iVar18 == 1)
			{
				if (!Function_204(StackVal, StackVal, *(iParam0 + 4 + 8)))
				{
					*(iParam0 + 4 + 20) = { 0.0f, RAND_FLOAT_RANGE(0.0f, 360.0f), 0.0f };
					(iParam0 + 4)->f_44 = Global_29006;
					if (!Function_169((iParam0 + 1028)->f_24))
					{
						LOG_ERROR("Deadposter got an invalid external target region.");
					}
				}
				else
				{
					*iParam0 = 5;
					LOG_ERROR("COULD NOT FIND a dead poster starting position.");
				}
				strcpy(&Var2, "deadPosterLay", 32);
				Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_167(&Var2) };
				iParam0->f_884 = CREATE_LAYOUT(&Var2);
				if (!IS_LAYOUTREF_VALID(iParam0->f_884))
				{
					bVar0 = false;
					*iParam0 = 5;
					break;
				}
				iParam0->f_904 = CREATE_OBJECTSET_IN_LAYOUT(Function_166(), iParam0->f_884, 4294967295, 0);
				iParam0->f_908 = CREATE_OBJECTSET_IN_LAYOUT(Function_166(), iParam0->f_884, 4294967295, 0);
				Function_165(iParam0 + 208, iParam0 + 1084, "$/tune/refGroups/campsiteSets/cam_campfireMedium01x");
				iParam0->f_924 = GET_TIME_OF_DAY();
				ADD_TIME(iParam0 + 924, 0, 0, 5, 0);
				iParam0->f_1012 = 1;
				iParam0->f_1016 = 1;
				*iParam0 = 2;
			}
			else if (iParam0->f_1072 == 1)
			{
				*iParam0 = 5;
			}
			break;
		
		case 0x00000002:
			if (!IS_OBJECT_VALID(iParam0->f_1080))
			{
				strcpy(&Var2, "deadPosterSnap", 32);
				Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_167(&Var2) };
				iParam0->f_1080 = CREATE_POINT_IN_LAYOUT(iParam0->f_884, &Var2, *(iParam0 + 4 + 8), *(iParam0 + 4 + 20));
			}
			if (iParam0->f_1004 != 0 && IS_LAYOUTREF_VALID((iParam0 + 208)->f_12))
			{
				if (IS_LAYOUTREF_VALID((iParam0 + 208)->f_12))
				{
					iParam0->f_968 = CREATE_OBJECT_ITERATOR((iParam0 + 208)->f_12);
				}
				if (IS_ITERATOR_VALID(iParam0->f_968))
				{
					ITERATE_ON_PARTIAL_NAME(iParam0->f_968, "deadposter_flag");
					bVar10 = START_OBJECT_ITERATOR(iParam0->f_968);
					while (IS_OBJECT_VALID(bVar10))
					{
						PRINTSTRING("Deadposter name: ");
						PRINTSTRING(GET_OBJECT_NAME(bVar10));
						PRINTNL();
						GET_OBJECT_POSITION(bVar10, &vVar11);
						vVar11.f_4 = (vVar11.y + 0.5f);
						GET_OBJECT_ORIENTATION(bVar10, &vVar14);
						vVar14.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
						uVar19 = GET_MATERIAL_AT_VECTOR(&vVar11);
						if (((uVar19 & 32 != 32 || uVar19 & 16 != 16) || uVar19 & 64 != 64) && (iParam0 + 4)->f_36 != 0)
						{
							iVar20 = 0;
						}
						else
						{
							iVar20 = 1;
						}
						if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar10), "_post"))
						{
							if (!IS_OBJECT_VALID(iParam0->f_896))
							{
								*(iParam0 + 972) = { StackVal, StackVal, vVar11 };
								if (!Function_163(iParam0))
								{
									*iParam0 = 5;
									LOG_ERROR("Problem creating dead poster");
									break;
								}
							}
						}
						else
						{
							bVar17 = STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar10), "horse");
							if (iVar20 == 1)
							{
								if (!Function_162(StackVal, StackVal, StackVal, StackVal, iParam0, vVar11, vVar14, bVar17))
								{
								}
								if (!IS_OBJECT_VALID(iParam0->f_892) && bVar17 != 0)
								{
									iParam0->f_892 = bVar10;
									PRINTSTRING("Deadposter name: ");
									PRINTSTRING(GET_OBJECT_NAME(iParam0->f_892));
									PRINTNL();
								}
							}
						}
						bVar10 = OBJECT_ITERATOR_NEXT(iParam0->f_968);
					}
				}
				if (!IS_OBJECT_VALID(iParam0->f_892))
				{
					LOG_ERROR("Invalid dead poster flag found.");
					*iParam0 = 5;
					break;
				}
				if (!Function_161(StackVal, StackVal, iParam0, *(iParam0 + 972)))
				{
					break;
				}
				iParam0->f_1004 = 1;
				Function_159(iParam0 + 928);
				Function_159(iParam0 + 952);
				*iParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_157(iParam0))
			{
				*(&iVar21 + 20) = 1;
				Function_156();
				Function_156();
				if (Function_151(StackVal, StackVal, StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/Ambient/PointOfInterest/event_bountyhunter", 4), Function_156(), Function_156(), 0, 0, 0, iParam0->f_1024, 0, 0, 0, &iVar21, 1, 0, 0x40a00000, 4294967295, 0, 0))
				{
					Function_148(1);
				}
				else
				{
					LOG_ERROR("Problem setting bounty hunter beat from dead poster");
					*iParam0 = 5;
					break;
				}
				Function_24(iParam0, 0, 0);
				if (IS_BLIP_VALID(iParam0->f_920))
				{
					SET_BLIP_BLINK(iParam0->f_920, 0, 0, 5f);
				}
				Function_146(0);
				*iParam0 = 5;
				bVar0 = 8000;
			}
			if (Function_145(StackVal, StackVal, iParam0, *(iParam0 + 4 + 8)) == 1)
			{
				if (iParam0->f_1012 == 1)
				{
					Function_142("npm_dp_fnd", 0x41200000, 1, 0, 2, 1, 0);
					iParam0->f_1012 = 0;
				}
			}
			if (Function_141(StackVal, StackVal, iParam0, *(iParam0 + 4 + 8)) == 1)
			{
				if (iParam0->f_1016 == 1)
				{
					Function_24(iParam0, 1, 1);
					if (IS_BLIP_VALID(iParam0->f_920))
					{
						SET_BLIP_BLINK(iParam0->f_920, 1, 0, 5f);
					}
					Function_159(iParam0 + 940);
					iParam0->f_1016 = 0;
				}
				if (Function_139(iParam0 + 940, 5.0f))
				{
					if (IS_BLIP_VALID(iParam0->f_920))
					{
						Function_24(iParam0, 1, 1);
						SET_BLIP_BLINK(iParam0->f_920, 0, 0, 5f);
					}
				}
			}
			if (SQUAD_IS_VALID(iParam0->f_996))
			{
				if (SQUAD_IS_VALID(iParam0->f_996))
				{
					if (VDIST(Global_34574, *(iParam0 + 984)) > 3.0f)
					{
						Function_138(iParam0->f_996);
						Function_10(iParam0 + 996, 1, 0);
						Function_137(iParam0->f_996);
						Function_138(iParam0->f_996);
						Function_136(iParam0->f_996, Global_34573, -1.0f, -1.0f, 0, 1);
						Function_10(iParam0 + 996, 0, 0);
						SQUAD_MAKE_EMPTY(iParam0->f_996);
						DESTROY_OBJECT(iParam0->f_996);
					}
					else if (Function_132(iParam0 + 952, 5.0f))
					{
						iParam0->f_964 = RAND_INT_RANGE_DIFFERENT(iParam0->f_964, 0, (SQUAD_GET_SIZE(iParam0->f_996) - 1));
						TASK_BIRD_LAND_AT_COORD(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_996, iParam0->f_964), iParam0 + 972);
						Function_159(iParam0 + 952);
					}
				}
			}
			bVar0 = false;
			break;
		
		case 0x00000005:
			if (IS_BLIP_VALID(iParam0->f_920))
			{
				SET_BLIP_BLINK(iParam0->f_920, 0, 0, 5f);
			}
			TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
			bVar0 = false;
			break;
	}
	if (IS_EXITFLAG_SET())
	{
	}
	iVar1 = Function_30(iParam0 + 208, iParam0->f_1080, 1, 0, 0, 0, Function_166(), 10.0f, 0, 0x43160000);
	return Function_29(iVar1, bVar0);
}

int Function_29(int iParam0, bool bParam1) //Position: 0x143E / 5182
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

var Function_30(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, bool bParam6, float fParam7, int iParam8, float fParam9) //Position: 0x1450 / 5200
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	bool bVar13;
	int iVar14;
	
	uParam5 = uParam5;
	bVar1 = false;
	bVar13 = (Function_131() && Function_129());
	iVar14 = 600;
	if (!Function_128(8))
	{
		iParam0->f_4 = 12;
	}
	if (bVar13)
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
				if (((Global_25266 + 2000.0f) < GET_CURRENT_GAME_TIME() && !bParam2) && !Global_3370)
				{
					iVar14 = 1000;
					break;
				}
			}
			else if ((((Global_25266 + 200.0f) < GET_CURRENT_GAME_TIME() && !bParam2) && !Global_3370) && !Function_131())
			{
				iVar14 = 1000;
				break;
			}
			if ((!bParam2 && !Global_3370) && !Function_131())
			{
				if (GET_WEATHER() != 3 || GET_WEATHER() != 4)
				{
					iVar14 = 1000;
					break;
				}
			}
			GET_OBJECT_POSITION(bParam1, &vVar7);
			GET_OBJECT_ORIENTATION(bParam1, iParam0 + 212);
			if (Global_63399 == 32)
			{
				iLocal_27 = iLocal_28;
			}
			if (Function_131())
			{
				iLocal_27 = 32;
			}
			if (Global_3370)
			{
				if (Function_126(StackVal, StackVal, Global_34573, vVar7) < 10.0f)
				{
					break;
				}
			}
			if ((Global_26154 + 1 > iLocal_27 || bParam2) || Global_3370)
			{
				if (Function_125(&vVar7, 50.0f, iParam0 + 200, 4294967295))
				{
					if (((!bParam2 && !Function_123(iParam0 + 200, &fLocal_29, 256, 0)) && !Global_3370) && !Function_131())
					{
						iVar14 = 1000;
					}
					else
					{
						if (UNK_0x214AFB8C(iParam0->f_16))
						{
							STREAMING_REQUEST_PROP(iParam0->f_16, false);
						}
						if (UNK_0x214AFB8C(iParam0->f_20))
						{
							STREAMING_REQUEST_PROPSET(iParam0->f_20);
						}
						bVar3 = FIND_NAMED_POPULATION_SET(bParam6);
						if (Global_3380)
						{
							if (STRING_CONTAINS_STRING(bParam6, "bad_guys"))
							{
								iParam0->f_4 = 12;
								break;
							}
						}
						if ((IS_POPSET_VALID(bVar3) && IS_POPSET_VALID(Global_30750[6])) && !bParam2)
						{
							bVar1 = false;
							if ((iParam3 < 1 && !STRING_CONTAINS_STRING(bParam6, "bad_guys")) && !STRING_CONTAINS_STRING(bParam6, "law"))
							{
								(*iParam0 + 24)[0] = Function_122();
								(*iParam0 + 24)[1] = Function_121();
								Function_120(iParam0 + 60, (*iParam0 + 24)[0], 2, 0);
								Function_120(iParam0 + 60, (*iParam0 + 24)[1], 2, 0);
								bVar1 = 2;
							}
							if (iParam3 >= 1)
							{
								(*iParam0 + 48)[0] = Function_112(Global_30750[6], 0, 4, 23, 1);
								(*iParam0 + 48)[1] = Function_112(Global_30750[6], 0, 4, 23, 1);
								if ((*iParam0 + 48)[0] == 4294967295)
								{
									(*iParam0 + 48)[0] = 976;
								}
								if ((*iParam0 + 48)[1] == 4294967295)
								{
									(*iParam0 + 48)[1] = 980;
								}
								Function_120(iParam0 + 60, (*iParam0 + 48)[0], 2, 0);
								Function_120(iParam0 + 60, (*iParam0 + 48)[1], 2, 0);
							}
							else
							{
								(*iParam0 + 48)[0] = Function_112(Global_30750[6], 0, 0, 23, 1);
								if ((*iParam0 + 48)[0] == 4294967295)
								{
									(*iParam0 + 48)[0] = 977;
								}
								(*iParam0 + 48)[1] = 976;
								Function_120(iParam0 + 60, (*iParam0 + 48)[0], 2, 0);
							}
							while (bVar1 <= iParam3)
							{
								if ((bVar1 != 2 && !STRING_CONTAINS_STRING(bParam6, "bad_guys")) && !STRING_CONTAINS_STRING(bParam6, "law"))
								{
									(*iParam0 + 24)[bVar1] = Function_112(bVar3, 1, 1, 4294967295, 1);
								}
								else
								{
									(*iParam0 + 24)[bVar1] = Function_112(bVar3, 1, 0, 4294967295, 1);
								}
								if ((*iParam0 + 24)[bVar1] == 4294967295)
								{
									iParam0->f_4 = 12;
									break;
								}
								Function_120(iParam0 + 60, (*iParam0 + 24)[bVar1], 2, 0);
								bVar1++;
							}
						}
						else if (!bParam2 && !Function_131())
						{
							return 4294967295;
						}
						if (!bParam2 || Function_131())
						{
							bVar0 = CREATE_VOLUME_IN_LAYOUT(Global_26150, Function_166(), 3, *(iParam0 + 200), 0.0f, 0.0f, 0.0f, fLocal_29, 20.0f, fLocal_29);
							DECOR_SET_INT(bVar0, "script", GET_THIS_SCRIPT_ID());
							DECOR_SET_INT(bVar0, "category", 256);
							Global_26154++;
							Function_108(&bVar0, 0);
							iParam0->f_308 = CREATE_VOLUME_IN_LAYOUT(StackVal, Function_166(), 3, *(iParam0 + 200), 0.0f, 0.0f, 0.0f, (fParam7 + 1.5f), 9.0f, (fParam7 + 1.5f));
						}
						if (Function_131())
						{
							iParam0->f_4 = 6;
						}
						else
						{
							iParam0->f_4 = 1;
						}
					}
				}
			}
			else
			{
				iVar14 = 1000;
			}
			break;
		
		case 0x00000006:
			Function_85(iParam0, &iVar14);
			break;
		
		case 0x00000001:
			if (Function_81(iParam0 + 60))
			{
				iParam0->f_4 = 4;
			}
			iVar14 = 0;
			break;
		
		case 0x00000004:
			if (Function_74(iParam0, bParam1))
			{
				if (IS_OBJECT_VALID(iParam0->f_224))
				{
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_224), false);
				}
				iParam0->f_4 = 8;
			}
			else if (!bParam2)
			{
				LOG_ERROR("Couldn't create the campsire layout");
				iParam0->f_4 = 12;
				break;
			}
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				iParam0->f_304 = 0;
				iParam0->f_288 = CREATE_OBJECT_ITERATOR(iParam0->f_12);
				ITERATE_ON_OBJECT_TYPE(iParam0->f_288, 12);
				ITERATE_IN_LAYOUT(iParam0->f_288, iParam0->f_12);
				START_OBJECT_ITERATOR(iParam0->f_288);
				bVar1 = false;
				bVar4 = OBJECT_ITERATOR_CURRENT(iParam0->f_288);
				while (IS_OBJECT_VALID(bVar4))
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bVar4)) && bVar1 > iParam3)
					{
						DECOR_SET_BOOL(bVar4, "ForceAllowSun", true);
						if (STRING_CONTAINS_STRING(GET_OBJECT_NAME(bVar4), "horse") && Function_131())
						{
							DESTROY_OBJECT(bVar4);
						}
						else if (GRINGO_USABLE_BY_ACTOR_ENUM((*iParam0 + 24)[bVar1], GET_GRINGO_FROM_OBJECT(bVar4), "UseCase1"))
						{
							(*iParam0 + 172)[bVar1] = bVar4;
							GRINGO_LOAD_ANIMATION_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT(bVar4), "UseCase1", "UseAnim", (*iParam0 + 24)[bVar1]);
							bVar1++;
							iParam0->f_304++;
							PRINTINT(iParam0->f_304);
						}
					}
					bVar4 = OBJECT_ITERATOR_NEXT(iParam0->f_288);
				}
				if (IS_ITERATOR_VALID(iParam0->f_288))
				{
					DESTROY_ITERATOR(iParam0->f_288);
				}
				iParam0->f_4 = 9;
			}
			else
			{
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000009:
			PRINTINT(iParam0->f_304);
			bVar5 = true;
			bVar1 = false;
			while (bVar1 <= iParam0->f_304)
			{
				if (IS_OBJECT_VALID((*iParam0 + 172)[bVar1]))
				{
					if (!GRINGO_HAS_ANIMSET_LOADED_FOR_ACTOR_ENUM_EXT(GET_GRINGO_FROM_OBJECT((*iParam0 + 172)[bVar1]), "UseCase1", "UseAnim", (*iParam0 + 24)[bVar1]))
					{
						bVar5 = false;
					}
				}
				bVar1++;
			}
			if (bVar5)
			{
				iParam0->f_4 = 2;
			}
			break;
		
		case 0x00000002:
			if (STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 200), 10.0f))
			{
				if (((Function_126(StackVal, StackVal, Global_34573, *(iParam0 + 200)) < 120.0f || bParam2) || Global_3370) || Function_131())
				{
					if (UNK_0x214AFB8C(iParam0->f_16))
					{
						if (IS_OBJECT_VALID(iParam0->f_224))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_224), true);
						}
						bVar6 = CREATE_PROP_IN_LAYOUT_BY_ID(StackVal, Function_166(), iParam0->f_16, *(iParam0 + 200), *(iParam0 + 212), 0);
						*iParam0 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_166(), "amb_campfire_light", bVar6, 0.0f, 0.0f, 0.0f, 1, bVar6);
						UNK_0x6745191B(*iParam0, 0.0f, 0.0f, 0.0f);
						if (GET_LOCATOR_OFFSETS(GET_PHYSINST_FROM_OBJECT(bVar6), "center", &vVar7, &vVar10))
						{
							vVar7 = { StackVal, StackVal, -Vector(vVar7, StackVal, StackVal) };
							GET_OBJECT_RELATIVE_POSITION(bVar6, vVar7, &vVar10);
							SET_OBJECT_POSITION(bVar6, vVar10);
							SNAP_OBJECT_TO_GROUND(bVar6, 10.0f, true, 1092616192);
						}
						else
						{
							LOG_ERROR("can't find the center locator for campfire");
						}
					}
					else if (!bParam2 && !Function_131())
					{
						LOG_ERROR("Campfire beacon asset isn't valid.. you won't see a campfire");
					}
					Function_72(StackVal, StackVal, iParam0 + 292, iParam0 + 300, iParam0 + 296, fParam7, *(iParam0 + 200));
					iParam0->f_4 = 5;
					iVar14 = 0;
					iParam0->f_272 = 1;
				}
			}
			else
			{
				iVar14 = 250;
			}
			break;
		
		case 0x00000005:
			DECOR_SET_BOOL(GRINGO_GET_MY_OBJECT_REF(), "DontRun", true);
			if (UNK_0x214AFB8C(iParam0->f_20))
			{
				NET_OBJECT_REPLICATION_MODE_START(2, 0);
				Function_71(StackVal, StackVal, StackVal, StackVal, StackVal, Function_166(), GET_ASSET_NAME(iParam0->f_20, 7), *(iParam0 + 200), *(iParam0 + 212), 4294967295);
				NET_OBJECT_REPLICATION_MODE_END(2);
				DECOR_SET_BOOL(bParam1, "PropsCreated", true);
			}
			else if (!bParam2)
			{
				LOG_ERROR("Propset ID invalid.  Campfire problem");
				iParam0->f_4 = 12;
				break;
			}
			Function_70(iParam0->f_12);
			STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(iParam0->f_12));
			bVar1 = false;
			iParam0->f_4 = 10;
			iVar14 = 0;
			break;
		
		case 0x0000000A:
			if (!bParam2 && !Function_131())
			{
				iParam0->f_244 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_12, Function_166()));
				iParam0->f_288 = CREATE_OBJECT_ITERATOR(iParam0->f_12);
				bVar1 = false;
				while (bVar1 <= iParam3)
				{
					Function_68(StackVal, iParam0->f_288, iParam0->f_244, (*iParam0 + 24)[bVar1], (*iParam0 + 172)[bVar1], iParam0->f_308, bVar1);
					bVar1++;
				}
				if (iParam3 >= 1)
				{
					Function_67(StackVal, iParam0->f_12, iParam0 + 48, 2, iParam0 + 228);
				}
				else
				{
					Function_67(StackVal, iParam0->f_12, iParam0 + 48, 1, iParam0 + 228);
				}
				if (SQUAD_IS_VALID(iParam0->f_244))
				{
					if (SQUAD_GET_SIZE(iParam0->f_244) != 0 && iParam3 < 0)
					{
						LOG_ERROR("Campfire no spawn problem! Report to AlanB.");
						iParam0->f_4 = 12;
						break;
					}
				}
				if (STRING_CONTAINS_STRING(bParam6, "bad_guys"))
				{
					iParam0->f_256 = 1;
				}
				ITERATE_ON_OBJECT_TYPE(iParam0->f_288, 15);
				ITERATE_IN_LAYOUT(iParam0->f_288, iParam0->f_12);
				bVar2 = START_OBJECT_ITERATOR(iParam0->f_288);
				while (IS_OBJECT_VALID(bVar2))
				{
					if (IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(bVar2)))
					{
						iParam0->f_240 = GET_ACTOR_FROM_OBJECT(bVar2);
					}
					bVar2 = OBJECT_ITERATOR_NEXT(iParam0->f_288);
				}
				if (IS_ITERATOR_VALID(iParam0->f_288))
				{
					DESTROY_ITERATOR(iParam0->f_288);
				}
			}
			if ((bParam2 || !bParam4) || bVar13)
			{
				if (IS_OBJECTSET_VALID(iParam0->f_284))
				{
					bVar1 = false;
					bVar1 = false;
					while (bVar1 <= GET_OBJECTSET_SIZE(iParam0->f_284))
					{
						DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, iParam0->f_284));
						bVar1++;
					}
				}
				if (IS_OBJECT_VALID(iParam0->f_224))
				{
					DESTROY_OBJECT(iParam0->f_224);
				}
			}
			iParam0->f_4 = 11;
			iVar14 = 0;
			break;
		
		case 0x0000000B:
			if (Global_3370)
			{
			}
			if ((!bParam2 && !bVar13) && !iParam0->f_268)
			{
				if (SQUAD_IS_VALID(iParam0->f_244))
				{
					if (SQUAD_GET_SIZE(iParam0->f_244) >= 1)
					{
						if (IS_STRING_VALID(bParam6))
						{
							if ((!STRING_CONTAINS_STRING(bParam6, "bad") && !STRING_CONTAINS_STRING(bParam6, "law")) && iParam8 != 1)
							{
								if (VDIST(*(iParam0 + 200), Global_34574) > 10.0f)
								{
									if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "rand_idle_sit_ground_player"))
									{
										AI_CONVERSE_ENABLE(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false));
										AI_CONVERSE_ENABLE(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, true));
										AI_CONVERSE_ADD_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false));
										AI_CONVERSE_ADD_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, true));
										DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false), "nconvAdded", true);
										DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, true), "nconvAdded", true);
										AI_GOAL_LOOK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false));
										AI_GOAL_LOOK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, true));
										Function_56(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false));
										fLocal_31 = GET_CURRENT_GAME_TIME();
										iParam0->f_268 = 1;
									}
								}
							}
						}
					}
				}
			}
			if ((iParam0->f_268 != 1 && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "rand_idle_sit_ground_player")) && !iParam0->f_276)
			{
				if (SQUAD_IS_VALID(iParam0->f_244) && SQUAD_GET_SIZE(iParam0->f_244) < 0)
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false)))
					{
						if ((GET_CURRENT_GAME_TIME() - fLocal_31) < 10.0f)
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(Global_34573, "PLAYER_COMMENT_ON_STORY", SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, false), "GENERIC_GOODBYE", 1, 1, 5, 0);
						}
						iParam0->f_276 = 1;
					}
					else
					{
						iParam0->f_276 = 1;
					}
				}
				else
				{
					iParam0->f_276 = 1;
				}
			}
			if (!bParam2 && !bVar13)
			{
				if (SQUAD_IS_VALID(iParam0->f_244))
				{
					bVar1 = false;
					while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_244))
					{
						if (Function_52(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), &iLocal_30, iParam0 + 312, 0, 0, 0x40400000))
						{
							SET_ACTOR_ALLOW_WEAPON_REACTIONS(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), 1);
							AI_QUICK_EXIT_GRINGO(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), 1);
							iParam0->f_280 = 1;
							Function_51(iParam0->f_244, 1);
							Function_136(iParam0->f_244, Global_34573, -1.0f, -1.0f, 0, 2);
							if (iLocal_30 == 8)
							{
								TASK_KILL_CHAR(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), Global_34573);
							}
							iParam0->f_4 = 12;
							break;
						}
						bVar1++;
					}
					bVar1 = false;
					while (bVar1 <= iParam0->f_228)
					{
						if (IS_ACTOR_VALID((*iParam0 + 228)[bVar1]))
						{
							if (GET_LAST_ATTACKER((*iParam0 + 228)[bVar1]) != Global_34573 || GET_RIDER((*iParam0 + 228)[bVar1]) != Global_34573)
							{
								iParam0->f_280 = 1;
								TASK_CLEAR((*iParam0 + 228)[bVar1]);
								Function_51(iParam0->f_244, 1);
								Function_136(iParam0->f_244, Global_34573, -1.0f, -1.0f, 0, 2);
								TASK_KILL_CHAR(Function_50(iParam0->f_244), Global_34573);
								iParam0->f_4 = 12;
								break;
							}
						}
						bVar1++;
					}
				}
			}
			if (bParam4 && !bVar13)
			{
				Function_46(iParam0, bParam2, 0);
			}
			else if (iParam0->f_256)
			{
				Function_46(iParam0, bParam2, 1);
			}
			if (!iParam0->f_268)
			{
			}
			if (GET_VEHICLE(Function_16()) != iParam0->f_240 && IS_ACTOR_VALID(iParam0->f_240))
			{
				Function_45(iParam0->f_244, Function_16(), 4);
				Function_44(iParam0->f_244, Function_16());
			}
			if (VDIST(*(iParam0 + 200), Global_34574) < (fParam9 + 30.0f))
			{
				iParam0->f_4 = 12;
			}
			vVar7 = { StackVal, StackVal, *(iParam0 + 200) };
			vVar7.f_4 = (vVar7.y + 0.5f);
			if (!bParam2 && !bVar13)
			{
				if (Function_43(StackVal, StackVal, vVar7, 1.0f, 80.0f, 1, 1, 0))
				{
					Global_25266 = GET_CURRENT_GAME_TIME();
				}
				if (SQUAD_IS_VALID(iParam0->f_244))
				{
					if (Function_42(iParam0->f_244, 1.0f, 80.0f, 1, 1))
					{
						Global_25266 = GET_CURRENT_GAME_TIME();
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (iParam0->f_268)
			{
				if (SQUAD_IS_VALID(iParam0->f_244))
				{
					bVar1 = false;
					while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_244))
					{
						if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1)))
						{
							if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), "nconvAdded"))
							{
								AI_CONVERSE_DISABLE(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1));
								AI_CONVERSE_REMOVE_CAMPFIRE_CONVERSER(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1));
							}
						}
						bVar1++;
					}
				}
				iParam0->f_268 = 0;
			}
			bVar1 = false;
			while (bVar1 <= iParam0->f_228)
			{
				if (IS_ACTOR_VALID((*iParam0 + 228)[bVar1]))
				{
					TASK_WANDER((*iParam0 + 228)[bVar1], 3212836864);
					GIVE_OBJECT_TO_LAYOUT((*iParam0 + 228)[bVar1], Global_28841);
					RELEASE_ACTOR((*iParam0 + 228)[bVar1]);
				}
				bVar1++;
			}
			if (SQUAD_IS_VALID(iParam0->f_244))
			{
				bVar1 = false;
				while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_244))
				{
					if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1)))
					{
						if (!iParam0->f_280)
						{
							MEMORY_PREFER_RIDING(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), false);
							Function_33(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), 4, 0, 2);
						}
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1));
					}
					bVar1++;
				}
			}
			iParam0->f_272 = 0;
			if (IS_OBJECT_VALID(*iParam0))
			{
				UNK_0xE18028C1(*iParam0);
				DESTROY_OBJECT(*iParam0);
			}
			if (IS_ITERATOR_VALID(iParam0->f_288))
			{
				DESTROY_ITERATOR(iParam0->f_288);
			}
			Function_4();
			if (SQUAD_IS_VALID(iParam0->f_244))
			{
				Function_32(iParam0 + 244, 0, 0, 0);
			}
			RELEASE_LAYOUT_OBJECTS(StackVal);
			iParam0->f_4 = 13;
			iVar14 = 250;
			break;
		
		case 0x0000000D:
			break;
	}
	Function_31(iParam0);
	return iVar14;
}

void Function_31(int iParam0) //Position: 0x244E / 9294
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0 };
	return;
}

void Function_32(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x245E / 9310
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (IS_ACTOR_RIDING_VEHICLE(bVar1))
			{
				bVar2 = GET_VEHICLE(bVar1);
				if (bParam3)
				{
					DESTROY_ACTOR(bVar1);
					DESTROY_ACTOR(bVar2);
				}
				else if (bParam2)
				{
					if (!Function_11(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_11(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar2);
					}
				}
				if (IS_ACTOR_VALID(bVar1))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
					else
					{
						RELEASE_ACTOR(bVar1);
					}
				}
				if (IS_ACTOR_VALID(bVar2))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar2);
					}
					else
					{
						RELEASE_ACTOR(bVar2);
					}
				}
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = GET_MOUNT(bVar1);
				if (bParam3)
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
					}
					DESTROY_ACTOR(bVar1);
					DESTROY_ACTOR(bVar2);
				}
				else if (bParam2)
				{
					if (!Function_11(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_11(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
						{
							DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
						}
						DESTROY_ACTOR(bVar2);
					}
				}
				if (IS_ACTOR_VALID(bVar1))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
					else
					{
						RELEASE_ACTOR(bVar1);
					}
				}
				if (IS_ACTOR_VALID(bVar2))
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
					}
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar2);
					}
					else
					{
						RELEASE_ACTOR(bVar2);
					}
				}
			}
			else
			{
				if (bParam3)
				{
					DESTROY_ACTOR(bVar1);
				}
				else if (bParam2)
				{
					if (!Function_11(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
				}
				if (IS_ACTOR_VALID(bVar1))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
					else
					{
						RELEASE_ACTOR(bVar1);
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

int Function_33(bool bParam0, int iParam1, var uParam2, var uParam3) //Position: 0x265C / 9820
{
	bool bVar0;
	bool bVar1;
	
	if (iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_34(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_34(bParam0, iParam1, uParam2, uParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_34(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x273C / 10044
{
	char* cVar0[32];
	
	Function_41();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_40(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
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
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_39(bParam0, 0);
	Function_38(bParam0, iParam1);
	Function_37(bParam0, uParam2);
	Function_36(bParam0, uParam3);
	if (Function_35(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_35(bool bParam0) //Position: 0x298A / 10634
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_36(bool bParam0, bool bParam1) //Position: 0x29AD / 10669
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_37(bool bParam0, bool bParam1) //Position: 0x29D0 / 10704
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x29F4 / 10740
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_39(bool bParam0, bool bParam1) //Position: 0x2A1A / 10778
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_40(bool bParam0) //Position: 0x2A3D / 10813
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_41() //Position: 0x2A5B / 10843
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

bool Function_42(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x2AA5 / 10917
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (Function_11(bVar1, iParam1, iParam2, iParam3, iParam4, 0))
				{
					return 1;
				}
			}
			bVar0++;
		}
	}
	return 0;
}

bool Function_43(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x2AF7 / 10999
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

void Function_44(bool bParam0, bool bParam1) //Position: 0x2B13 / 11027
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_IDENTIFY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_45(bool bParam0, bool bParam1, int iParam2) //Position: 0x2B65 / 11109
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_CONSIDER_AS(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_46(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BAA / 11178
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0->f_264)
	{
		return;
	}
	if (bParam1)
	{
		return;
	}
	if (!SQUAD_IS_VALID(iParam0->f_244))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_244))
	{
		if (!IS_AI_ACTOR_UNALERTED(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar0)))
		{
			return;
		}
		bVar0++;
	}
	if (SQUAD_GET_SIZE(iParam0->f_244) <= 1)
	{
		return;
	}
	if (!Function_49(iParam0->f_244))
	{
		return;
	}
	if (!Function_47(StackVal, StackVal, iParam0->f_244, *(iParam0 + 200), 10.0f))
	{
		return;
	}
	if (VDIST(*(iParam0 + 200), Global_34574) > 15.0f)
	{
		AI_GOAL_LOOK_AT_ACTOR(Function_50(iParam0->f_244), Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
		FORCE_LOOK_AT_ACTOR(Function_50(iParam0->f_244), Global_34573, 5.0f);
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_244))
		{
			AI_GOAL_LOOK_AT_ACTOR_NEW(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_244, bVar1), Global_34573, 15.0f, 1);
			bVar1++;
		}
		if (bParam2)
		{
			SAY_SINGLE_LINE_CONTEXT(Function_50(iParam0->f_244), 96, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		else
		{
			SAY_SINGLE_LINE_CONTEXT(Function_50(iParam0->f_244), 120, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
		}
		iParam0->f_264 = 1;
	}
	return;
}

bool Function_47(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x2CCD / 11469
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (Function_204(StackVal, StackVal, vParam1))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				Function_48(bVar1);
				if (VDIST(Function_48(bVar1), vParam1) >= fParam4)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

vector3 Function_48(bool bParam0) //Position: 0x2D3B / 11579
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

bool Function_49(bool bParam0) //Position: 0x2DA5 / 11685
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_DEAD(bVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

var Function_50(bool bParam0) //Position: 0x2DFC / 11772
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar0) && IS_ACTOR_ALIVE(bVar0))
		{
			return bVar0;
		}
		bVar1++;
	}
	return "";
}

void Function_51(bool bParam0, bool bParam1) //Position: 0x2E42 / 11842
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_PREFER_RIDING(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_52(bool bParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x2E8A / 11914
{
	float fVar0;
	
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		if (IS_ACTOR_ON_FOOT(bParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, (fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		fVar0 = Function_55(bParam0, Global_34573);
		if (!Function_21(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_53(bParam0);
				return 1;
			}
		}
		if (!Function_21(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_53(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_53(bParam0);
				return 1;
			}
		}
		if (!Function_21(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_53(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_53(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_21(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_53(bParam0);
				return 1;
			}
		}
		if (!Function_21(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_53(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_53(bool bParam0) //Position: 0x3021 / 12321
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_54(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_54(bool bParam0) //Position: 0x3055 / 12373
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_55(bool bParam0, bool bParam1) //Position: 0x306C / 12396
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

void Function_56(bool bParam0) //Position: 0x315D / 12637
{
	struct<21> Var0;
	
	bVar12 = Function_66(GET_ACTOR_ENUM(bParam0), &Var0);
	if (bVar12)
	{
		iVar13 = Function_58(&Var0);
		iVar14 = 0;
		if (iVar13 == 2)
		{
			if (Function_57())
			{
				iVar14 = 1;
			}
			else
			{
				iVar14 = 2;
			}
		}
		else if (Var0.f_20)
		{
			iVar14 = 1;
		}
		else if ((&Var0 + 24)->f_20)
		{
			iVar14 = 2;
		}
		else
		{
			iVar14 = 0;
		}
		if (iVar14 == 1)
		{
			AI_SET_CAMPFIRE_STORY_ENABLED(1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 0);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(StackVal, 1);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(2, Var0.f_12);
			AI_CONVERSE_SET_CAMPFIRE_STORY_CONTEXT(3, Var0.f_16);
		}
		else if (iVar14 == 2)
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

bool Function_57() //Position: 0x321B / 12827
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

var Function_58(int iParam0) //Position: 0x322E / 12846
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iParam0->f_20 = 0;
	(iParam0 + 24)->f_20 = 0;
	if (Function_63(*iParam0, 0))
	{
		bVar0 = Function_59(StackVal);
		iVar2 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar0), GET_HOUR(bVar0) + 6, GET_MINUTE(bVar0), GET_SECOND(bVar0));
		if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), iVar2))
		{
			iParam0->f_20 = 1;
			iVar1++;
		}
	}
	if (Function_63(iParam0->f_24, 0))
	{
		bVar0 = Function_59(StackVal);
		iVar3 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar0), GET_HOUR(bVar0) + 6, GET_MINUTE(bVar0), GET_SECOND(bVar0));
		if (!IS_EARLIER_THAN(GET_TIME_OF_DAY(), iVar3))
		{
			(iParam0 + 24)->f_20 = 1;
			iVar1++;
		}
	}
	return iVar1;
}

bool Function_59(int iParam0) //Position: 0x32DF / 13023
{
	if (!Function_60(iParam0))
	{
		return MAKE_TIME_OF_DAY(0, 0, 0);
	}
	return Global_13172[iParam011].f_36;
}

bool Function_60(int iParam0) //Position: 0x32FE / 13054
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

bool Function_61(int iParam0) //Position: 0x3322 / 13090
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_62(int iParam0) //Position: 0x3337 / 13111
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_63(var uParam0, bool bParam1) //Position: 0x334E / 13134
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
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

var Function_64(int iParam0) //Position: 0x338B / 13195
{
	if (!Function_65(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_65(int iParam0) //Position: 0x33A5 / 13221
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_66(int iParam0, int iParam1) //Position: 0x33BB / 13243
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (Global_63119[iVar013] == iParam0)
		{
			*iParam1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_63119[iVar013] + 4) };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_67(bool bParam0, bool bParam1, var uParam2, int iParam3, var uParam4) //Position: 0x33F4 / 13300
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	iVar0 = 0;
	bVar8 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar8, 12);
	bVar7 = START_OBJECT_ITERATOR(bVar8);
	while (IS_OBJECT_VALID(bVar7) && iVar0 > iParam3)
	{
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bVar7)))
		{
			if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bVar7), "horse_stay"))
			{
				GET_OBJECT_POSITION(bVar7, &vVar1);
				GET_OBJECT_ORIENTATION(bVar7, &vVar4);
				bVar9 = CREATE_ACTOR_IN_LAYOUT(bParam1, Function_166(), (*uParam2)[iVar0], vVar1, vVar4);
				ACCESSORIZE_HORSE(bVar9, 3);
				(*uParam4)[iVar0] = bVar9;
				TASK_USE_GRINGO(bVar9, GET_GRINGO_FROM_OBJECT(bVar7), "UseCase1", 4294967295, 1);
				SNAP_ACTOR_TO_GRINGO(bVar9, bVar7, "UseCase1", 1, 0, 0);
				iVar0++;
			}
		}
		bVar7 = OBJECT_ITERATOR_NEXT(bVar8);
	}
	DESTROY_ITERATOR(bVar8);
}

void Function_68(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) //Position: 0x34C1 / 13505
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	
	iVar1 = 1;
	if (!IS_OBJECT_VALID(bParam4))
	{
		return;
	}
	if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam4)))
	{
		bVar0 = true;
	}
	else
	{
		return;
	}
	GET_OBJECT_POSITION(bParam4, &vVar2);
	GET_OBJECT_ORIENTATION(bParam4, &vVar5);
	bVar8 = CREATE_ACTOR_IN_LAYOUT(bParam0, Function_166(), bParam3, vVar2, vVar5);
	SET_ACTOR_STAY_WITHIN_VOLUME(bVar8, bParam5, 2, 2);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar8, 1);
	AI_GOAL_LOOK_AT_NEUTRAL(bVar8, -1.0f);
	if (!IS_ACTOR_VALID(bVar8))
	{
		LOG_ERROR("CREATE_ACTOR_IN_LAYOUT failed.  Invalid actor returned in campfireCore");
	}
	if (!GRINGO_ACTOR_CAN_USE(GET_GRINGO_FROM_OBJECT(bParam4), "UseCase1", bVar8))
	{
		bVar0 = false;
		while (!IS_OBJECT_VALID(bParam4) && !bVar0)
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam4)))
			{
				if (GRINGO_ACTOR_CAN_USE(GET_GRINGO_FROM_OBJECT(bParam4), "UseCase1", bVar8))
				{
					bVar0 = true;
				}
			}
			bParam4 = OBJECT_ITERATOR_NEXT(bParam1);
		}
	}
	if (iParam6 != 0 && STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bParam4), "pee"))
	{
		bVar0 = false;
	}
	if (iParam6 == 0)
	{
		iVar1 = 4294967295;
	}
	if (bVar0)
	{
		SNAP_ACTOR_TO_GRINGO(bVar8, bParam4, "UseCase1", 1, 0, 0);
		TASK_USE_GRINGO(bVar8, GET_GRINGO_FROM_OBJECT(bParam4), "UseCase1", iVar1, 1);
		TASK_PRIORITY_SET(bVar8, 2);
	}
	else
	{
		TASK_WANDER_IN_VOLUME(bVar8, bParam5, -1.0f);
		TASK_PRIORITY_SET(bVar8, 2);
	}
	Function_69(bVar8, 0);
	SQUAD_JOIN(bVar8, bParam2);
	TASK_PRIORITY_SET(bVar8, 2);
}

void Function_69(bool bParam0, bool bParam1) //Position: 0x3658 / 13912
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_CONVERSE_ENABLE(bParam0);
	}
	else
	{
		AI_CONVERSE_DISABLE(bParam0);
	}
	return;
}

void Function_70(bool bParam0) //Position: 0x367A / 13946
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		SNAP_OBJECT_TO_GROUND(bVar1, 99.9f, false, 1092616192);
		ROTATE_OBJECT_UPRIGHT_TO_GROUND(bVar1, 1, 5.0f);
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

var Function_71(var uParam0, bool bParam1, char* cParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x36BE / 14014
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	
	bVar0 = CREATE_PROPSET_IN_LAYOUT(uParam0, bParam1, cParam2, vParam3, vParam6);
	bVar1 = GET_LAYOUT_FROM_OBJECT(bVar0);
	bVar2 = CREATE_OBJECT_ITERATOR(bVar1);
	ITERATE_IN_LAYOUT(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar3))
	{
		if (!GET_OBJECT_TYPE(bVar3) != 57)
		{
			if (!iParam9 != 4294967295)
			{
				GET_OBJECT_POSITION(bVar3, &vVar4);
				vVar4 = { StackVal, StackVal, Vector(vVar4, StackVal, StackVal) + Vector(0.0f, 4.0f, 0.0f) };
				iVar7 = GET_MATERIAL_AT_VECTOR(&vVar4);
				if (!iVar7 != 0 && (iVar7 && iParam9) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(bVar3);
				}
			}
			if (IS_OBJECT_VALID(bVar3))
			{
				if (DECOR_CHECK_EXIST(bVar3, "rstarInfoSnapping_Type"))
				{
					bVar8 = DECOR_CHECK_STRING(bVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(bVar3, 10.0f, bVar8, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(bVar3, 0);
				if (Function_131())
				{
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(bVar3), 1);
				}
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(bVar0));
	ADD_AI_COVERSET_FOR_PROPSET(bVar0);
	DESTROY_ITERATOR(bVar2);
	return bVar0;
}

void Function_72(var uParam0, var uParam1, var uParam2, float fParam3, vector3 vParam4) //Position: 0x3807 / 14343
{
	var uVar0[5];
	int iVar6;
	
	if (*uParam0 != 4294967295)
	{
		*uParam0 = CLEAR_AREA_OF_TREE_TYPE(vParam4, (fParam3 + 2.0f), "");
	}
	if (*uParam1 != 4294967295)
	{
		*uParam1 = CLEAR_AREA_OF_BREAKABLE_TREES(vParam4, (fParam3 + 2.0f));
	}
	if (*uParam2 != 4294967295)
	{
		*uParam2 = CLEAR_AREA_OF_GRASS(vParam4, fParam3);
	}
	if (IS_LAYOUTREF_VALID(Global_30616))
	{
		if (Function_73(StackVal, StackVal, Global_30616, "player_herb", &uVar0, 20.0f, 5, vParam4) >= 0)
		{
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				if (IS_OBJECT_VALID(uVar0[iVar6]))
				{
					DESTROY_OBJECT(uVar0[iVar6]);
				}
				iVar6++;
			}
		}
	}
}

int Function_73(bool bParam0, bool bParam1, var uParam2, float fParam3, int iParam4, vector3 vParam5) //Position: 0x38A8 / 14504
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 0;
	iParam4 = iParam4;
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar5 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_ON_OBJECT_TYPE(bVar5, 12);
		ITERATE_ON_PARTIAL_NAME(bVar5, bParam1);
		bVar4 = START_OBJECT_ITERATOR(bVar5);
		while (IS_OBJECT_VALID(bVar4))
		{
			if (IS_OBJECT_VALID(bVar4))
			{
				GET_OBJECT_POSITION(bVar4, &vVar1);
				if (VDIST(vParam5, vVar1) > fParam3)
				{
					(*uParam2)[iVar0] = bVar4;
					iVar0++;
					if (iVar0 > iParam4)
					{
						DESTROY_ITERATOR(bVar5);
						return iVar0;
					}
				}
			}
			bVar4 = OBJECT_ITERATOR_NEXT(bVar5);
		}
		DESTROY_ITERATOR(bVar5);
		return iVar0;
	}
	return iVar0;
}

bool Function_74(var uParam0, int iParam1) //Position: 0x393C / 14652
{
	if (Function_75(iParam1))
	{
		uParam0->f_12 = Local_0;
		return 1;
	}
	return 0;
}

bool Function_75(int iParam0) //Position: 0x3953 / 14675
{
	bool bVar0;
	
	Function_80(3, 2);
	bVar0 = bVar0;
	Function_77(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_77(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_77(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_77(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_77(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_player", 1, 0);
	Function_77(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_77(&Local_0 + 4, "$/content/scripting/gringo/simplegringo/player_sit_campfire", 1, 0);
	if (!Function_81(&Local_0 + 4))
	{
		return 0;
	}
	Local_0 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_166()));
	Local_0.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_0, "defend_region", 2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 15.0f, 5.0f, 15.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "leader_flag1", -0.5376045f, 0.0f, -10.67541f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "leader_flag3", -9.76774f, 0.0f, -0.2345791f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "leader_flag2", 9.474689f, 0.0f, -0.2345791f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "leader_flag4", -0.2281614f, 0.0f, 10.34677f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "deadposter_flag", -3.368743f, 0.0f, -2.618054f, 0.0f, 112.4175f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "deadposter_flag1", -5.708571f, 0.0f, 2.490923f, 0.0f, 30.56168f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "deadposter_flag2", -2.400306f, 0.0f, -6.95153f, 0.0f, 30.56168f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "deadposter_flag3", 4.229517f, 0.0f, 0.3992596f, 0.0f, 112.4175f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "deadposter_flag_horse", 2.959377f, 0.0f, -5.477727f, 0.0f, 30.56168f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "deadposter_flag_post", 0.6145182f, 0.0f, 3.248868f, 0.0f, 112.4175f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_0, "aiGringoLocType", "Rand_Idle_Sit_Ground", -1.439241f, 0.0f, 0.5579417f, 0.0f, -67.57483f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_0, "aiGringoLocType1", "campfire_talk", 1.158391f, 0.0f, 1.441162f, 0.0f, 226.1055f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_0, "aiGringoLocType2", "Rand_Idle_Sit_Ground", 0.0f, 0.0f, -1.718971f, 0.0f, -181.1683f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_0, "aiGringoLocType3", "Rand_Idle_Sit_Ground_nospawn", 1.829268f, 0.0f, 0.1213931f, 0.0f, 86.04697f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_0, "aiGringoLocType4", "Rand_Idle_Sit_Ground_nospawn", 0.03547082f, 0.0f, 1.873848f, 0.0f, 1.9306f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_0, "aiGringoLocType5", "Sit_Ground_Campfire_Tend", -1.341651f, 0.0f, -0.5698123f, 0.0f, -115.1986f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_0.f_96 = CREATE_GRINGO_IN_LAYOUT(Local_0, "aiGringoLocType6", "Rand_Idle_Sit_Ground_Player", 1.095888f, 0.0f, -1.666971f, 0.0f, 143.3905f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_0.f_96), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_0, "horse_tend_camp", "horse_stay", -0.7814661f, 0.0f, -3.469023f, 0.0f, -92.0647f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_0.f_100 = CREATE_GRINGO_IN_LAYOUT(Local_0, "camp_veh_gen", "horse_stay", -3.525204f, 0.0f, 0.2916448f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_0.f_100), 0);
	Local_0.f_104 = CREATE_GRINGO_IN_LAYOUT(Local_0, "Player_Sit_Campfire", "Player_Sit_Campfire", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	Function_76(Local_0, iParam0);
	return 1;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x4042 / 16450
{
	var uVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 13)
		{
			uVar0 = ATTACH_OBJECTS(bParam0, bParam1, Function_166(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (IS_ATTACHMENT_VALID(uVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
			}
		}
	}
	return;
}

var Function_77(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x4084 / 16516
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_79(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_78(uParam0[iVar03], 8);
	}
	return iVar0;
}

void Function_78(var uParam0, int iParam1) //Position: 0x40BC / 16572
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

var Function_79(var uParam0, int iParam1, int iParam2) //Position: 0x40CD / 16589
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_78(uParam0[iVar03], 4);
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

void Function_80(int iParam0, int iParam1) //Position: 0x4191 / 16785
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

bool Function_81(int iParam0) //Position: 0x41DA / 16858
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_84();
	iVar1 = 0;
	if (!Function_9(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_78(iParam0[iVar03], 8);
		}
		else if (Function_83())
		{
			iVar1 = 1;
			Function_78(iParam0[iVar03], 8);
		}
		Function_78(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_9(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_9(iParam0[03], 8) || iVar1));
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
				Function_78(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_9(iParam0[iVar03], 4))
		{
			if (!Function_9(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_78(iParam0[iVar03], 2);
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
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_78(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_78(iParam0[iVar03], 2);
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

void Function_82() //Position: 0x4555 / 17749
{
	if (!Function_128(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_83() //Position: 0x4595 / 17813
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

void Function_84() //Position: 0x45C0 / 17856
{
	if (!Function_128(128))
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

void Function_85(int iParam0, bool bParam1) //Position: 0x4602 / 17922
{
	char* cVar0[32];
	
	if (Global_83591.f_844)
	{
		strcpy(&cVar0, "a", 32);
		stradd(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		Function_86(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(*(iParam0 + 200), 2, StackVal) + Vector(2.5f, 0.0f, 1.5f), *(iParam0 + 212), &cVar0);
		strcpy(&cVar0, "d", 32);
		stradd(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		Function_86(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Vector(*(iParam0 + 200), 4, StackVal) - Vector(1.5f, 0.0f, 2.5f), *(iParam0 + 212), &cVar0);
	}
	iParam0->f_4 = 1;
	*bParam1 = 250;
	return;
}

void Function_86(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, char* cParam8) //Position: 0x4686 / 18054
{
	var uVar0;
	var uVar1;
	
	uVar0 = uVar0;
	uVar1 = uVar1;
	Function_87(StackVal, StackVal, StackVal, StackVal, &uVar0, &uVar1, uParam0, vParam2, vParam5, uParam1, 1, 1, cParam8, 0, 0);
}

void Function_87(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x46AF / 18095
{
	Function_102(StackVal, StackVal, StackVal, StackVal, uParam0, uParam1, uParam9, uParam2, vParam3, vParam6, uParam12);
	Function_92(*uParam0, *uParam1, uParam9, uParam10, uParam11);
	DECOR_SET_INT(*uParam1, Function_91(), Function_90(uParam10, uParam11, uParam9));
	DECOR_SET_INT(*uParam1, Function_89(), Function_88(uParam13, uParam14));
}

var Function_88(var uParam0, bool bParam1) //Position: 0x4700 / 18176
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_89() //Position: 0x4710 / 18192
{
	return "PackedGrass";
}

var Function_90(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4724 / 18212
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

var Function_91() //Position: 0x4749 / 18249
{
	return "PackedMetadata";
}

void Function_92(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x4760 / 18272
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;
	
	switch (iParam2)
	{
		case 0x00000001:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 379, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 379, 0f, 2, 0);
				if (DECOR_GET_INT_VERBOSE(bParam1, Function_101(), &uVar5))
				{
					Function_96(uVar5, &bVar6);
					SET_BLIP_NAME(bVar4, GET_WEAPON_DISPLAY_NAME(bVar6));
				}
			}
			if (bParam4)
			{
				Function_95();
				vVar0 = { StackVal, StackVal, Function_95() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 380, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 380, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_94();
				vVar0 = { StackVal, StackVal, Function_94() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 0, vVar0, 0);
			}
			break;
		
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			if (bParam3)
			{
				bVar3 = ADD_BLIP_FOR_OBJECT(bParam0, 381, 0f, 2, 0);
				bVar4 = ADD_BLIP_FOR_OBJECT(bParam1, 381, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_93();
				vVar0 = { StackVal, StackVal, Function_93() };
				vVar0.f_4 = (vVar0.y * 2.0f);
				CREATE_OBJECT_GLOW(bParam0, 3, vVar0, 0);
			}
			break;
	}
	if (bParam3)
	{
		SET_BLIP_MAX_DISTANCE(bVar3, 1.0f);
		UNK_0x1E98AFEC(bVar3, 1);
		UNK_0xFF3DB575(bVar4, 1);
	}
}

vector3 Function_93() //Position: 0x488B / 18571
{
	return 0.0f, 0.101f, -0.195f;
}

vector3 Function_94() //Position: 0x489C / 18588
{
	return 0.0f, 0.127f, -0.177f;
}

vector3 Function_95() //Position: 0x48AD / 18605
{
	return 0.0f, 0.158f, -0.163f;
}

void Function_96(var uParam0, int iParam1) //Position: 0x48BE / 18622
{
	*iParam1 = Function_97(uParam0, Function_99(), 0);
	iParam1->f_4 = Function_97(uParam0, Function_99() + 8, Function_99());
	return;
}

var Function_97(var uParam0, int iParam1, bool bParam2) //Position: 0x48E1 / 18657
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_98((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), bParam2);
}

var Function_98(bool bParam0) //Position: 0x4900 / 18688
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_99() //Position: 0x490C / 18700
{
	return Function_100(39);
}

int Function_100(bool bParam0) //Position: 0x4917 / 18711
{
	bool bVar0;
	
	if (bParam0 <= 0)
	{
		return 0x40000000;
	}
	bVar0 = false;
	while (bParam0 >= 0)
	{
		bParam0 = SHIFT_RIGHT(bParam0, true);
		bVar0++;
	}
	return bVar0;
}

var Function_101() //Position: 0x4945 / 18757
{
	return "PackedWeapon";
}

int Function_102(var uParam0, var uParam1, int iParam2, bool bParam3, vector3 vParam4, vector3 vParam7, bool bParam10) //Position: 0x495A / 18778
{
	bool bVar0;
	vector3 vVar1;
	char* cVar4[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			bVar0 = Function_107();
			Function_94();
			vVar1 = { StackVal, StackVal, Function_94() };
			break;
		
		case 0x00000001:
			bVar0 = Function_106();
			Function_95();
			vVar1 = { StackVal, StackVal, Function_95() };
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			bVar0 = Function_105();
			Function_93();
			vVar1 = { StackVal, StackVal, Function_93() };
			break;
	}
	if (IS_STRING_VALID(cParam10))
	{
		strcpy(&cVar4, Function_104(), 64);
		stradd(&cVar4, bParam10, 64);
	}
	else
	{
		memcpy(&cVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_167(Function_104()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	*uParam0 = CREATE_PROP_IN_LAYOUT(bParam3, &cVar4, bVar0, vParam4, vParam7, 0);
	SNAP_OBJECT_TO_GROUND(*uParam0, 1.0f, false, 1092616192);
	*uParam1 = CREATE_GRINGO_ON_OBJECT(*uParam0, Function_103(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", vVar1, 0.0f, 0.0f, 0.0f);
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

var Function_103() //Position: 0x4A5E / 19038
{
	return "MPItemGiver";
}

var Function_104() //Position: 0x4A72 / 19058
{
	return "PBox_";
}

var Function_105() //Position: 0x4A80 / 19072
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_106() //Position: 0x4AA6 / 19110
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_107() //Position: 0x4ACE / 19150
{
	return "p_gen_crateMultiplayerAmmo01x";
}

int Function_108(bool bParam0, int iParam1) //Position: 0x4AF4 / 19188
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*bParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*bParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*bParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*bParam0, &uVar1);
	Function_110(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_109(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_109(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x4C55 / 19541
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_167("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

int Function_110(bool bParam0) //Position: 0x4CF0 / 19696
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_111(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_126(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_111(iVar0);
						}
					}
					else if (Function_126(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_111(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
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

void Function_111(int iParam0) //Position: 0x4E51 / 20049
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

var Function_112(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4EB2 / 20146
{
	return Function_113(bParam0, bParam1, bParam2, bParam3, bParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_113(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x4ECB / 20171
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_119();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_118(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_117(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_117(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_116(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_118(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_116(bVar0))
				{
					Function_115();
				}
				Function_114(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_118(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (bParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return bVar0;
}

void Function_114(int iParam0) //Position: 0x51BE / 20926
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			(*&Global_30742 + 8)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_115() //Position: 0x5272 / 21106
{
	int iVar0;
	
	if (Global_3402)
	{
		Global_30742 = GET_THIS_SCRIPT_ID();
		Global_30742.f_4 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		(*&Global_30742 + 8)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_116(bool bParam0) //Position: 0x52AC / 21164
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_117(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x52D9 / 21209
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
	PRINTINT(bParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(bParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(bParam0, bParam2, bParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), 4294967295))
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

bool Function_118(bool bParam0) //Position: 0x542A / 21546
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_119() //Position: 0x5441 / 21569
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_115();
		}
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_115();
	return;
}

var Function_120(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x548C / 21644
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_9(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_78(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_78(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_121() //Position: 0x555C / 21852
{
	int iVar0;
	
	switch (Global_29004)
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

int Function_122() //Position: 0x56B8 / 22200
{
	int iVar0;
	
	switch (Global_29004)
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

bool Function_123(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x57D8 / 22488
{
	var uVar0;
	int iVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	if (bParam3)
	{
		return 1;
	}
	bVar4 = false;
	Function_110(4294967295);
	iVar3 = 0;
	while (iVar3 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			bVar6 = DECOR_GET_INT(StackVal, "category");
			if (iParam2 != 0)
			{
				if (bVar6 != iParam2 && iParam2 != 256)
				{
					bVar4 = true;
				}
			}
			GET_VOLUME_CENTER(StackVal, &uVar0);
			if (iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(StackVal, *uParam0))
				{
					return 0;
				}
			}
			fVar5 = *fParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_124(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

float Function_124(var uParam0, int iParam1) //Position: 0x58A8 / 22696
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_125(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x58C6 / 22726
{
	var uVar0;
	int iVar3;
	vector3 vVar4;
	
	if (iParam3 == 4294967295)
	{
		iVar3 = 4294967294;
	}
	else
	{
		iVar3 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*uParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*uParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*uParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_204(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*uParam0 = (*uParam0 + 0.01f);
		uParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_204(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *uParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(0);
	}
	return 0;
}

float Function_126(bool bParam0, vector3 vParam1) //Position: 0x59F8 / 23032
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_48(bParam0);
		vVar0 = { StackVal, StackVal, Function_48(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

bool Function_127(bool bParam0) //Position: 0x5A72 / 23154
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

bool Function_128(int iParam0) //Position: 0x5A91 / 23185
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_129() //Position: 0x5AAD / 23213
{
	if (Function_131())
	{
		return (Function_130() != 1 || Function_130() != 0);
	}
	return 0;
}

int Function_130() //Position: 0x5AC6 / 23238
{
	return Global_79349.f_16;
}

bool Function_131() //Position: 0x5AD2 / 23250
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_132(var uParam0, float fParam1) //Position: 0x5ADB / 23259
{
	if (Function_135(uParam0))
	{
		if (Function_133(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_133(bool bParam0) //Position: 0x5AF7 / 23287
{
	if (Function_135(bParam0))
	{
		if (Function_134(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_134(int iParam0) //Position: 0x5BBF / 23487
{
	return Function_21(*iParam0, 2);
}

bool Function_135(bool bParam0) //Position: 0x5BCC / 23500
{
	return Function_21(*bParam0, 1);
}

void Function_136(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x5BD9 / 23513
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_CLEAR(bVar1);
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, iParam5);
		}
		bVar0++;
	}
}

void Function_137(bool bParam0) //Position: 0x5C47 / 23623
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_138(bool bParam0) //Position: 0x5C7C / 23676
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

bool Function_139(var uParam0, int iParam1) //Position: 0x5CAE / 23726
{
	if (Function_132(uParam0, iParam1))
	{
		Function_140(uParam0);
		return 1;
	}
	return 0;
}

void Function_140(int iParam0) //Position: 0x5CC6 / 23750
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

int Function_141(var uParam0, vector3 vParam1) //Position: 0x5CDA / 23770
{
	if ((VDIST(Global_34574, vParam1) > 30.0f && WOULD_ACTOR_BE_VISIBLE(false, &vParam1, 3212836864)) && IS_OBJECT_VALID(uParam0->f_900))
	{
		return 1;
	}
	return 0;
}

void Function_142(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x5D11 / 23825
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_143(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_143(int iParam0) //Position: 0x5D8C / 23948
{
	char* cVar0[16];
	
	if (!Function_144())
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

bool Function_144() //Position: 0x5DCB / 24011
{
	if (Function_21(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_145(var uParam0, vector3 vParam1) //Position: 0x5DE6 / 24038
{
	if (VDIST(Global_34574, vParam1) > 15.0f && IS_OBJECT_VALID(uParam0->f_900))
	{
		return 1;
	}
	return 0;
}

void Function_146(int iParam0) //Position: 0x5E11 / 24081
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_147(90)), 0);
	return;
}

int Function_147(int iParam0) //Position: 0x5E32 / 24114
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_148(int iParam0) //Position: 0x5E48 / 24136
{
	if (iParam0 == 1)
	{
		Function_150(&Global_26303 + 8, 1);
	}
	else
	{
		Function_149(&Global_26303 + 8, 1);
	}
	return;
}

void Function_149(var uParam0, int iParam1) //Position: 0x5E69 / 24169
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_150(var uParam0, bool bParam1) //Position: 0x5E7C / 24188
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

bool Function_151(int iParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22) //Position: 0x5E8B / 24203
{
	int iVar0;
	
	uParam13 = uParam13;
	uParam14 = uParam14;
	uParam15 = uParam15;
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_155(&(Global_25267[iVar058]), 4))
			{
				if (!IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
				{
					Global_25267[iVar058].f_4 = uParam9;
					Global_25267[iVar058].f_68 = uParam21;
					Global_25267[iVar058].f_84 = uParam22;
					Global_25267[iVar058].f_64 = uParam19;
					Global_25267[iVar058].f_72 = uParam20;
					Global_25267[iVar058].f_12 = 4294967295;
					Global_25267[iVar058].f_16 = uParam2;
					*(&Global_25267[iVar058] + 20) = { StackVal, StackVal, vParam3 };
					*(&Global_25267[iVar058] + 32) = { StackVal, StackVal, vParam6 };
					Global_25267[iVar058].f_56 = uParam10;
					Global_25267[iVar058].f_48 = uParam12;
					Global_25267[iVar058].f_52 = uParam11;
					Global_25267[iVar058].f_76 = uParam17;
					Global_25267[iVar058].f_80 = uParam18;
					Global_25267[iVar058].f_88 = 0.0f;
					Function_154(uParam16, &Global_25267[iVar058] + 92);
					Global_25267[iVar058].f_92 = uParam1;
					Function_153(&(Global_25267[iVar058]), 1);
					Function_152(&(Global_25267[iVar058]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_152(var uParam0, int iParam1) //Position: 0x5FCD / 24525
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

void Function_153(var uParam0, int iParam1) //Position: 0x5FE7 / 24551
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_154(int iParam0, int iParam1) //Position: 0x5FF8 / 24568
{
	*iParam1 = *iParam0;
	iParam1->f_16 = iParam0->f_16;
	iParam1->f_20 = iParam0->f_20;
	iParam1->f_4 = StackVal;
	iParam1->f_8 = StackVal;
	*(iParam1 + 24) = { StackVal, *(iParam0 + 24) };
	(iParam1 + 24)->f_8 = StackVal;
	(iParam1 + 24)->f_12 = (iParam0 + 24)->f_12;
	(iParam1 + 24)->f_16 = (iParam0 + 24)->f_16;
	(iParam1 + 24)->f_20 = (iParam0 + 24)->f_20;
	iParam1->f_48 = iParam0->f_48;
	(iParam1 + 48)->f_4 = StackVal;
	(iParam1 + 48)->f_8 = StackVal;
	iParam1->f_60 = iParam0->f_60;
	(iParam1 + 60)->f_4 = StackVal;
	(iParam1 + 60)->f_8 = StackVal;
	(iParam1 + 60)->f_12 = (iParam0 + 60)->f_12;
	(iParam1 + 60)->f_16 = (iParam0 + 60)->f_16;
	(iParam1 + 60)->f_20 = (iParam0 + 60)->f_20;
	(iParam1 + 60)->f_24 = (iParam0 + 60)->f_24;
	(iParam1 + 60)->f_32 = (iParam0 + 60)->f_32;
	(iParam1 + 60)->f_36 = (iParam0 + 60)->f_36;
	(iParam1 + 60)->f_40 = (iParam0 + 60)->f_40;
	(iParam1 + 60)->f_44 = (iParam0 + 60)->f_44;
	(iParam1 + 60)->f_52 = (iParam0 + 60)->f_52;
	(iParam1 + 60)->f_48 = (iParam0 + 60)->f_48;
	(iParam1 + 60)->f_56 = (iParam0 + 60)->f_56;
	(iParam1 + 60)->f_28 = (iParam0 + 60)->f_28;
	iParam1->f_120 = iParam0->f_120;
	(iParam1 + 120)->f_4 = StackVal;
	iParam1->f_128 = iParam0->f_128;
	(iParam1 + 128)->f_4 = StackVal;
	(iParam1 + 128)->f_8 = StackVal;
	return;
}

bool Function_155(int iParam0, int iParam1) //Position: 0x6164 / 24932
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

vector3 Function_156() //Position: 0x6181 / 24961
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_157(int iParam0) //Position: 0x618A / 24970
{
	if (iParam0->f_1004 == 0)
	{
		return 0;
	}
	if (Function_158("get_wanted_poster_ground") && iParam0->f_1008 != 0)
	{
		iParam0->f_1008 = 1;
	}
	if (iParam0->f_1008 != 1 && !IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_888)))
	{
		return 1;
	}
	if (iParam0->f_524)
	{
		return 1;
	}
	return 0;
}

int Function_158(char* cParam0) //Position: 0x61EE / 25070
{
	bool bVar0;
	char* cVar1;
	char* cVar2[64];
	char* cVar18[64];
	
	bVar0 = GET_CURRENT_GRINGO(GET_PLAYER_ACTOR(0));
	if (IS_GRINGO_VALID(bVar0))
	{
		cVar1 = GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar0));
		strcpy(&cVar18, cParam0, 64);
		strcpy(&cVar2, cVar1, 64);
		STRING_LOWER(&cVar2);
		STRING_LOWER(&cVar18);
		if (STRINGS_ARE_EQUAL(&cVar2, &cVar18) || STRING_CONTAINS_STRING(&cVar2, &cVar18))
		{
			return 1;
		}
	}
	return 0;
}

void Function_159(int iParam0) //Position: 0x623C / 25148
{
	Function_160(iParam0, 0.0f);
	return;
}

void Function_160(var uParam0, float fParam1) //Position: 0x6248 / 25160
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_150(uParam0, 1);
	Function_149(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_161(var uParam0, vector3 vParam1) //Position: 0x6269 / 25193
{
	int iVar0;
	struct<9> Var1;
	struct<8> Var10;
	bool bVar18;
	
	if (!IS_LAYOUTREF_VALID(uParam0->f_884))
	{
		return 0;
	}
	if (uParam0->f_1000 == 1)
	{
		return 1;
	}
	CLEAR_AREA_OF_TREE_TYPE(vParam1, 8.0f, "");
	CLEAR_AREA_OF_GRASS(vParam1, 7.0f);
	strcpy(&Var10, "dpVultSquad", 32);
	Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_167(&Var10) };
	uParam0->f_996 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(uParam0->f_884, &Var10));
	if (!SQUAD_IS_VALID(uParam0->f_996))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		strcpy(&Var10, "dpVult", 32);
		Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_167(&Var10) };
		vVar1 = { StackVal, StackVal, vParam1 };
		vVar1 = (vVar1.x + RAND_FLOAT_RANGE((-0.5f * 10.0f), (0.5f * 10.0f)));
		vVar1.f_8 = (vVar1.z + RAND_FLOAT_RANGE((-0.5f * 10.0f), (0.5f * 10.0f)));
		FIND_GROUND_INTERSECTION(&vVar1, 20.0f, &vVar1, &uVar4);
		vVar7 = { 0.0f, RAND_FLOAT_RANGE(0.0f, 359.0f), 0.0f };
		bVar18 = CREATE_ACTOR_IN_LAYOUT(uParam0->f_884, &Var10, 1128, vVar1, vVar7);
		if (!IS_ACTOR_VALID(bVar18))
		{
			return 0;
		}
		vVar1 = (vParam1.x + RAND_FLOAT_RANGE(-1.0f, 1.0f));
		vVar1.f_4 = RAND_FLOAT_RANGE(1.0f, 5.0f);
		vVar1.f_8 = (vParam1.z + RAND_FLOAT_RANGE(-1.0f, 1.0f));
		TASK_STAND_STILL(bVar18, -1.0f, 0, 0);
		SQUAD_JOIN(bVar18, uParam0->f_996);
		iVar0++;
	}
	uParam0->f_1000 = 1;
	return 1;
}

bool Function_162(int iParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0x63D2 / 25554
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	struct<5> Var10;
	int iVar29;
	int iVar30;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_884))
	{
		return 0;
	}
	vVar4 = { StackVal, StackVal, vParam4 };
	if (FIND_GROUND_INTERSECTION(&uParam1, 50.0f, &vVar1, &vVar4))
	{
		vVar7 = { StackVal, StackVal, vVar1 };
		Var10 = { StackVal, StackVal, vVar4 };
		Var10.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
		strcpy(&cVar13, "npstCorpse", 64);
		memcpy(&cVar13, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_167(&cVar13), 16);
		if (iParam7 == 1)
		{
			iVar30 = GET_OBJECTSET_SIZE(iParam0->f_908);
			bVar0 = CREATE_CORPSE_IN_LAYOUT(iParam0->f_884, &cVar13, (*iParam0 + 868)[iVar30], vVar7, Var10, "dead_ground_horse", "inj_deadpose_1");
			if (IS_OBJECT_VALID(bVar0))
			{
				SNAP_OBJECT_TO_GROUND(bVar0, 10.0f, true, 1092616192);
				ADD_OBJECT_TO_OBJECTSET(bVar0, iParam0->f_908);
			}
			else
			{
				LOG_ERROR("Problem creating dead poster horse corpse");
			}
		}
		else
		{
			iVar29 = GET_OBJECTSET_SIZE(iParam0->f_904);
			bVar0 = CREATE_CORPSE_IN_LAYOUT(iParam0->f_884, &cVar13, (*iParam0 + 836)[iVar29], vVar7, Var10, "dead_ground_male", "inj_deadpose_1");
			if (IS_OBJECT_VALID(bVar0))
			{
				SNAP_OBJECT_TO_GROUND(bVar0, 10.0f, true, 1092616192);
				ADD_OBJECT_TO_OBJECTSET(bVar0, iParam0->f_904);
			}
			else
			{
				LOG_ERROR("Problem creating dead poster corpse");
			}
		}
		if (IS_OBJECT_VALID(bVar0))
		{
			strcpy(&cVar13, "Dead poster corpse at ", 64);
			stradd(&cVar13, VECTOR_TO_STRING(&vVar7), 64);
			strcpy(&cVar13, "deadposter with yRot = ", 64);
			stradd(&cVar13, FLOAT_TO_STRING_FORMATED(StackVal, 3, 2), 64);
			strcpy(&cVar13, "Corpse name is: ", 64);
			stradd(&cVar13, GET_OBJECT_MODEL_NAME(bVar0), 64);
		}
		else
		{
			LOG_ERROR("Dead poster corpse not valid");
		}
	}
	if (!IS_OBJECT_VALID(bVar0))
	{
		return 0;
	}
	if (Function_204(StackVal, StackVal, vVar1))
	{
		LOG_ERROR("Problem w/ dead poster tempPos");
	}
	DECOR_SET_BOOL(bVar0, "corpse_loot_gringo", false);
	REQUEST_FIXED_CORPSE(bVar0, 0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(bVar0, 0);
	if (!IS_OBJECT_VALID(iParam0->f_900))
	{
		iParam0->f_900 = bVar0;
	}
	return 1;
}

bool Function_163(int iParam0) //Position: 0x6697 / 26263
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	vector3 vVar12;
	float fVar15;
	float fVar16;
	struct<8> Var17;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_884))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(iParam0->f_884))
	{
		return 0;
	}
	strcpy(&Var17, "dummyPosterObj", 32);
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_167(&Var17) };
	Function_156();
	Function_156();
	iParam0->f_912 = CREATE_POINT_IN_LAYOUT(iParam0->f_884, &Var17, Function_156(), Function_156());
	Function_156();
	Function_156();
	ATTACH_OBJECTS_NO_DRV(iParam0->f_912, iParam0->f_900, "head", Function_156(), Function_156());
	strcpy(&Var17, "deadPosterGringo", 32);
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_167(&Var17) };
	vVar0 = { StackVal, StackVal, *(iParam0 + 972) };
	FIND_GROUND_INTERSECTION(&vVar0, 50.0f, &vVar6, &uVar9);
	*(iParam0 + 984) = { StackVal, StackVal, vVar6 };
	vVar3 = { 0.0f, 1.0f, 0.0f };
	fVar15 = FABS((90.0f - GET_ANGLE_BETWEEN_VECTORS_DEGS(&vVar3, &uVar9)));
	fVar16 = ((180.0f + UNK_0x9C40E671(&uVar9)) % 360.0f);
	vVar12 = { -fVar15, fVar16, 0.0f };
	Function_164(StackVal, StackVal, StackVal, StackVal, iParam0, vVar6, vVar12);
	WAIT(500);
	iParam0->f_888 = CREATE_GRINGO_IN_LAYOUT(iParam0->f_884, &Var17, "$/content/scripting/gringo/simplegringo/get_wanted_poster_ground", vVar6, 0.0f, 0.0f, 0.0f);
	if (IS_OBJECT_VALID(iParam0->f_888))
	{
	}
	else
	{
		LOG_ERROR("Invalid gringo for dead poster.");
		return 0;
	}
	SET_OBJECT_POSITION_ON_GROUND(iParam0->f_888, vVar6);
	iParam0->f_916 = CREATE_CAMERA_FOCUS_POINT_OBJECT_WITH_TUNING(iParam0->f_884, Function_166(), iParam0->f_896, "wantedPoster", 2.0f, 2.01f);
	if (!IS_OBJECT_VALID(iParam0->f_916))
	{
		LOG_ERROR("Could not create wanted poster camera focus");
	}
	else
	{
		SET_CAMERA_FOCUS_PROMPT_TEXT(iParam0->f_916, "npm_bh_cfp");
	}
	PRINTSTRING("dead_poster: ground intersection position: ");
	PRINTVECTOR(vVar6);
	PRINTNL();
	PRINTSTRING("dead_poster: ground intersection rotation: ");
	PRINTVECTOR(vVar12);
	PRINTNL();
	return 1;
}

int Function_164(var uParam0, vector3 vParam1, vector3 vParam4) //Position: 0x6928 / 26920
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	struct<16> Var9;
	char* cVar25[64];
	
	vVar6 = { StackVal, StackVal, Vector(vParam1, StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f) };
	strcpy(&Var9, "bountyHunterPgen", 64);
	memcpy(&Var9, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_167(&Var9), 16);
	if (!IS_LAYOUTREF_VALID(uParam0->f_884))
	{
		return 0;
	}
	if (IS_OBJECT_VALID(uParam0->f_896))
	{
		return 0;
	}
	if (!FIND_GROUND_INTERSECTION(&vVar6, 4.9f, &vVar3, &uVar0))
	{
		return 0;
	}
	strcpy(&cVar25, "$/fragments/p_pos_wanted", 64);
	if (Global_26303.f_40 <= 10)
	{
		stradd(&cVar25, "0", 64);
	}
	stradd(&cVar25, INT_TO_STRING(Global_26303.f_40), 64);
	stradd(&cVar25, "x", 64);
	uParam0->f_896 = CREATE_PROP_IN_LAYOUT(uParam0->f_884, &Var9, &cVar25, vVar3, vParam4, 0);
	SET_OBJECT_POSITION_ON_GROUND(uParam0->f_896, vVar3);
	SET_OBJECT_COLLIDE_WITH_WORLD(uParam0->f_896, 0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(uParam0->f_896, 0);
	if (!IS_OBJECT_VALID(uParam0->f_896))
	{
		return 0;
	}
	return 1;
}

void Function_165(int iParam0, bool bParam1, bool bParam2) //Position: 0x6A22 / 27170
{
	var uVar0;
	
	iParam0->f_4 = 0;
	iParam0->f_196 = 0;
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_167("campfire"), 4);
	iParam0->f_8 = CREATE_LAYOUT(&uVar0);
	if (IS_STRING_VALID(bParam1))
	{
		if (STRING_LENGTH(bParam1) >= 0)
		{
			iParam0->f_16 = GET_ASSET_ID(bParam1, 0);
			Function_79(iParam0 + 60, iParam0->f_16, 0);
		}
	}
	if (IS_STRING_VALID(bParam2))
	{
		if (STRING_LENGTH(bParam2) >= 0)
		{
			iParam0->f_20 = GET_ASSET_ID(bParam2, 7);
			Function_79(iParam0 + 60, iParam0->f_20, 7);
		}
	}
	return;
}

var Function_166() //Position: 0x6A9F / 27295
{
	int iVar0;
	
	return iVar0;
}

struct<32> Function_167(bool bParam0) //Position: 0x6AA7 / 27303
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_168("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_168(char* cParam0, char* cParam1, char* cParam2) //Position: 0x6B11 / 27409
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_169(bool bParam0) //Position: 0x6B30 / 27440
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_170(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x6B46 / 27462
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_143(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

bool Function_171(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x6BBD / 27581
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_167(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_202(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_108(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_174(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_170("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (*uParam2 >= 20)
		{
			*uParam3 = 1;
			Global_26153++;
		}
		*uParam2++;
		*uParam1 = 1000;
		*(iParam0 + 8) = { 0.0f, 0.0f, 0.0f };
		return 0;
	}
	if (iParam0->f_32)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_3399 = 0;
		Function_170("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_172(iParam0->f_56, 0, 1, 0, 0))
		{
			*uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (iParam0->f_52 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_167("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_202(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_108(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_172(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x6F4F / 28495
{
	bool bVar0;
	bool bVar1;
	
	if (Global_30842[16])
	{
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
	}
	uParam1 = uParam1;
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_3399 = 0;
		Function_170("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_17483[iParam075].f_116 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_3367)
			{
				if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_3367 = 1;
			Global_6281 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(Global_17483[iParam075].f_260);
		if (Global_30842[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_173(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_173(bVar0);
		}
		if (!bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_30842[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_173(bVar0);
		}
		Global_17483[iParam075].f_264 = bVar0;
		Global_16876[iParam06] = bVar0;
		if (bParam2)
		{
			Global_16876[iParam06].f_4 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_17483[iParam075].f_116 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_3367)
				{
					if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_3367 = 1;
				Global_6281 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_173(bool bParam0) //Position: 0x71AC / 29100
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

bool Function_174(int iParam0) //Position: 0x71F2 / 29170
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	bool bVar14;
	struct<17> Var15;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar9);
	switch (iParam0->f_64)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				if (IS_LAYOUTREF_VALID(Global_30616))
				{
					iParam0->f_4 = CREATE_OBJECT_ITERATOR(Global_30616);
				}
				else
				{
					return 0;
				}
			}
			Function_201(iParam0 + 4);
			switch ((iParam0 + 64 + 24)->f_20)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(StackVal, Global_30616);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if (StackVal < 0.0f)
			{
				vVar3 = { 0.0f, 0.0f, Function_207(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_207(1));
			}
			if (!STRINGS_ARE_EQUAL(iParam0 + 64 + 24, ""))
			{
				ITERATE_ON_PARTIAL_NAME(StackVal, iParam0 + 64 + 24);
			}
			if (!4294967295 != (iParam0 + 64 + 24)->f_12)
			{
				ITERATE_ON_OBJECT_TYPE(StackVal, (iParam0 + 64 + 24)->f_12);
			}
			if (GET_NUM_ITERATOR_MATCHES(StackVal) >= 0)
			{
				if (StackVal & 512 == 0 || iParam0->f_36 != 1)
				{
					if ((iParam0 + 64 + 24)->f_16 == 0)
					{
						bVar0 = Function_200(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_199(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_197(StackVal, StackVal, StackVal, vVar9, Function_198());
				}
				else
				{
					bVar0 = Function_196(StackVal, StackVal, StackVal, vVar9, Function_198(), "locflag", (iParam0 + 64 + 24)->f_16);
				}
				if (IS_OBJECT_VALID(bVar0))
				{
					GET_OBJECT_POSITION(bVar0, iParam0 + 8);
					GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
					iParam0->f_48 = bVar0;
					DESTROY_ITERATOR(StackVal);
				}
				else
				{
					DESTROY_ITERATOR(StackVal);
					return 0;
				}
			}
			DESTROY_ITERATOR(StackVal);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				iParam0->f_4 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_201(iParam0 + 4);
			ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
			fVar13 = 130.0f;
			fVar12 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
			ITERATE_IN_SPHERE(StackVal, StackVal, vVar3);
			bVar1 = START_OBJECT_ITERATOR(StackVal);
			while (IS_OBJECT_VALID(bVar1) && !IS_OBJECT_VALID(bVar0))
			{
				if (DECOR_CHECK_EXIST(bVar1, "regid"))
				{
					bVar14 = DECOR_GET_INT(bVar1, "regid");
					if (Function_169(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_207(1))
								{
									bVar0 = bVar1;
								}
							}
						}
					}
				}
				bVar1 = OBJECT_ITERATOR_NEXT(StackVal);
			}
			if (IS_OBJECT_VALID(bVar0))
			{
				GET_OBJECT_POSITION(bVar0, iParam0 + 8);
				Function_125(iParam0 + 8, 99.0f, iParam0 + 8, 10);
				GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
				iParam0->f_48 = DECOR_GET_INT(bVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(StackVal);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_3386 && Global_3388) && ARE_CURVES_IN_RANGE(48, vVar9, 100.0f)) && 8) != 8)
			{
				vVar6 = { 0.0f, 0.0f, -10.0f };
				ROTATE_VECTOR_XZ(&vVar6, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_195(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_195(&vVar9, &vVar6) };
				if (!Function_204(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_194(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_191(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_187(iParam0);
			}
			if (iVar2 == 1)
			{
				if ((iParam0 + 64)->f_128 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(iParam0 + 8)))
							{
								return 0;
							}
						}
					}
				}
				if ((iParam0 + 64)->f_128 == 5)
				{
				}
				if (iParam0->f_60 == 2)
				{
					if (!Function_186(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_185(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_21(StackVal, 131072))
				{
					if (StackVal || Function_184(StackVal, Function_184(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_183(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_123(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar13 = 120.0f;
				fVar12 = 150.0f;
				vVar3 = { 0.0f, 0.0f, ((fVar13 + fVar12) * -0.5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				uVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_182((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_182((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) >= 0)
			{
				iVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(uVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(uVar23, iVar21, &Var15);
				Function_181(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_181(&Var15) };
				iParam0->f_20 = Var15.f_12;
				(iParam0 + 20)->f_4 = Var15.f_16;
				iParam0->f_48 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar23, iVar21);
				UNK_0xDF93BD7C(uVar23);
			}
			else
			{
				UNK_0xDF93BD7C(uVar23);
				return 0;
			}
			if (iParam0->f_60 == 2)
			{
				if (!Function_186(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_185(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_186(StackVal, Function_185(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_21(StackVal, 131072))
			{
				if (StackVal || Function_184(StackVal, Function_184(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_123(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_179((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_176(StackVal, Global_29004, Global_29005, Global_29006, 1);
					if (IS_PERS_CHAR_VALID(bVar24))
					{
						if (IS_PERS_CHAR_ALIVE(bVar24))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar22 = 0;
					while (StackVal <= (StackVal - iVar22) + 1)
					{
						bVar24 = Function_176(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
						if (IS_PERS_CHAR_VALID(bVar24))
						{
							if (IS_PERS_CHAR_ALIVE(bVar24))
							{
								iVar25++;
							}
						}
						iVar22++;
					}
					if (iVar25 >= 0)
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
					iParam0->f_48 = StackVal;
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
	if (Function_175(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_175(vector3 vParam0) //Position: 0x7A1C / 31260
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_25964))
	{
		if (IS_POINT_IN_VOLUME(vParam0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_25964))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_176(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7A51 / 31313
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
	if (!bParam4)
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
								return Function_177(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_177(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_177(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_177(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_177(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_177(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_177(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_177(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_177(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_177(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_177(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_177(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_177(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_177(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_177(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_177(&Global_6704, &Global_7790, bParam3);
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
								return Function_177(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_177(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_177(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_177(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_177(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_177(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_177(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_177(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_177(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_177(&Global_7027, &Global_8268, bParam3);
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
	else if (bVar1 == Global_30640[0])
	{
		return Function_177(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_177(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_177(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_177(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_177(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_177(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_177(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_177(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_177(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_177(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_177(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_177(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_177(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_177(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_177(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_177(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_177(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_177(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_177(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_177(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_177(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_177(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 != Global_30628[3])
	{
		return Function_177(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_177(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_177(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_177(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_177(var uParam0, var uParam1, bool bParam2) //Position: 0x8067 / 32871
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_178(uParam0[iVar02], 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
	return StackVal;
}

bool Function_178(var uParam0, int iParam1) //Position: 0x80B9 / 32953
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_179(int iParam0) //Position: 0x80D5 / 32981
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 25);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	if (iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(bVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(bVar2))
		{
			if (Function_180(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_180(bool bParam0) //Position: 0x8130 / 33072
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_50(bParam0);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(bVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(bVar0))
	{
		return 1;
	}
	return 4294967295;
}

vector3 Function_181(int iParam0) //Position: 0x8168 / 33128
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_182(int iParam0, int iParam1) //Position: 0x8187 / 33159
{
	if (iParam1 != 0)
	{
		return iParam1;
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

bool Function_183(vector3 vParam0) //Position: 0x81B7 / 33207
{
	struct<9> Var0;
	
	iVar7 = 0;
	while (iVar7 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(StackVal) == 9)
				{
					GET_VOLUME_SCALE(StackVal, &vVar0);
					GET_VOLUME_CENTER(StackVal, &vVar3);
					bVar6 = VDIST(vParam0, vVar3);
					if ((bVar6 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar7++;
	}
	return 0;
}

int Function_184(vector3 vParam0) //Position: 0x8258 / 33368
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
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

bool Function_185(vector3 vParam0) //Position: 0x82A4 / 33444
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
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

bool Function_186(vector3 vParam0) //Position: 0x82FD / 33533
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
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

int Function_187(int iParam0) //Position: 0x837A / 33658
{
	float fVar0;
	bool bVar1;
	
	Function_194(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_190(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_189(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_188(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_188(struct<33> Param0) //Position: 0x8515 / 34069
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_30842[34])
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
		if (Global_30842[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1.43493E-42f, 1);
}

void Function_189(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x8641 / 34369
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

void Function_190(bool bParam0) //Position: 0x8692 / 34450
{
	if (bParam0 < 0.1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * bParam0), bParam0);
	}
	else if (Global_3386)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

int Function_191(int iParam0, vector3 vParam1) //Position: 0x86D6 / 34518
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_193();
	Function_190(0);
	Function_192(0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_189(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_188(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_192(bool bParam0) //Position: 0x8878 / 34936
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

void Function_193() //Position: 0x892B / 35115
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

void Function_194(float fParam0, int iParam1) //Position: 0x893A / 35130
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*fParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*fParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*fParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*fParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

vector3 Function_195(var uParam0, int iParam1) //Position: 0x89C3 / 35267
{
	var uVar0;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	int iVar25;
	int iVar31;
	
	uVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(uVar10) < 0)
	{
		UNK_0xDF93BD7C(uVar10);
		vVar11 = { 0.0f, 0.0f, 0.0f };
		return StackVal, StackVal, vVar11;
	}
	GET_POINT_FROM_CURVE_QUERY(uVar10, 0, &uVar0);
	bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar10, 0);
	if (IS_OBJECT_VALID(bVar6))
	{
		vVar16 = { StackVal, StackVal, *iParam1 };
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &iVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &iVar31);
		Function_181(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_181(&iVar25), StackVal) };
		Function_181(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_181(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_194(&fVar7, &fVar8);
		fVar9 = ((fVar7 + fVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(uVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &iVar31);
			Function_181(&iVar31);
			vVar11 = { StackVal, StackVal, Function_181(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_181(&iVar25);
			vVar11 = { StackVal, StackVal, Function_181(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(uVar10);
	return StackVal, StackVal, vVar11;
}

var Function_196(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x8AD0 / 35536
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_123(&vVar5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							bVar1 = bVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_197(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x8B78 / 35704
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	vector3 vVar5;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_123(&vVar5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					bVar1 = bVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_198() //Position: 0x8C01 / 35841
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_194(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

var Function_199(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x8C32 / 35890
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						bVar3 = bVar2;
						bVar1 = bVar0;
						PRINTSTRING("Assigning new closestObject ");
						PRINTNL();
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_200(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x8CC7 / 36039
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				bVar1 = bVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

int Function_201(int iParam0) //Position: 0x8D44 / 36164
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_166());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_166());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

var Function_202(bool bParam0, vector3 vParam1) //Position: 0x8D75 / 36213
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_203(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_203(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x8DA5 / 36261
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

bool Function_204(vector3 vParam0) //Position: 0x8DC8 / 36296
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_205(int iParam0, vector3 vParam1) //Position: 0x8DE0 / 36320
{
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam1, 30.0f))
	{
		return 0;
	}
	if (!Function_206(&(Global_29008[Global_29006]), 4))
	{
		return 0;
	}
	if (!Function_81(iParam0 + 556))
	{
		return 0;
	}
	return 1;
}

bool Function_206(var uParam0, int iParam1) //Position: 0x8E21 / 36385
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

float Function_207(bool bParam0) //Position: 0x8E3D / 36413
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_194(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_208(int iParam0, char* cParam1) //Position: 0x8E78 / 36472
{
	iParam0->f_924 = Function_241();
	ADD_TIME(iParam0 + 924, 0, 0, 10, 0);
	if (!Function_240(128))
	{
		*iParam0 = 5;
	}
	else
	{
		Function_217(&Global_26303, Function_237(), 4294967294, 0, 0, 1);
		*(iParam0 + 1028) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_26303 };
		strcpy(iParam0 + 1084, cParam1, 64);
		iParam0->f_924 = GET_TIME_OF_DAY();
		ADD_TIME(iParam0 + 924, 0, 0, 40, 0);
		Function_209(iParam0);
		*iParam0 = 0;
	}
	Function_165(iParam0 + 208, iParam0 + 1084, "$/tune/refGroups/campsiteSets/cam_campfireMedium01x");
	return;
}

void Function_209(int iParam0) //Position: 0x8F2A / 36650
{
	char* cVar0[64];
	int iVar16;
	
	iVar16 = 0;
	while (iVar16 < 6)
	{
		(*iParam0 + 836)[iVar16] = Function_211();
		Function_120(iParam0 + 556, (*iParam0 + 836)[iVar16], 3, 0);
		iVar16++;
	}
	iVar16 = 0;
	while (iVar16 < 2)
	{
		(*iParam0 + 868)[iVar16] = Function_210();
		Function_120(iParam0 + 556, (*iParam0 + 868)[iVar16], 3, 0);
		iVar16++;
	}
	strcpy(&cVar0, "$/fragments/p_pos_wanted", 64);
	if (Global_26303.f_40 <= 10)
	{
		stradd(&cVar0, "0", 64);
	}
	stradd(&cVar0, INT_TO_STRING(Global_26303.f_40), 64);
	stradd(&cVar0, "x", 64);
	Function_77(iParam0 + 556, &cVar0, 0, 0);
	Function_77(iParam0 + 556, "dead_ground_horse", 5, 0);
	Function_77(iParam0 + 556, "custom/dead_ground_horse", 8, 0);
	Function_77(iParam0 + 556, "dead_ground_male", 5, 0);
	Function_77(iParam0 + 556, "custom/dead_ground_male", 8, 0);
	Function_77(iParam0 + 556, "$/content/scripting/gringo/simplegringo/get_wanted_poster_ground", 1, 0);
	Function_77(iParam0 + 556, "procmissions", 10, 0);
	return;
}

var Function_210() //Position: 0x90D9 / 37081
{
	int iVar0;
	int iVar1;
	
	iVar0 = RAND_INT_RANGE(0, 3);
	iVar1 = (976 + iVar0);
	return iVar1;
}

var Function_211() //Position: 0x90F0 / 37104
{
	int iVar0;
	
	if (Function_216(1))
	{
		iVar0 = Function_212(1, 0, 0, 4294967295, 0);
	}
	else
	{
		iVar0 = 133;
	}
	return iVar0;
}

var Function_212(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9110 / 37136
{
	return Function_213(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_213(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x9129 / 37161
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_113(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_113(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_113(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_113(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_113(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_113(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_113(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_113(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_113(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_113(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_113(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_113(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_113(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_113(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_214(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_214(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x937E / 37758
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_215(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_215(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_215(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_215(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_215(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_215(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_215(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_215(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_215(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_215(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_215(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_215(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_215(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_215(Global_30750[13], bVar0);
	}
	return Function_113(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_215(bool bParam0, bool bParam1) //Position: 0x94CF / 38095
{
	int iVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, iVar0));
		iVar0++;
	}
	return;
}

bool Function_216(bool bParam0) //Position: 0x958D / 38285
{
	bool bVar0;
	
	switch (bParam0)
	{
		case 0x00000001:
			bVar0 = IS_POPSET_VALID(Global_30750[0]);
			break;
		
		case 0x00000002:
			bVar0 = IS_POPSET_VALID(Global_30750[1]);
			break;
		
		case 0x00000004:
			bVar0 = IS_POPSET_VALID(Global_30750[2]);
			break;
		
		case 0x00000008:
			bVar0 = IS_POPSET_VALID(Global_30750[3]);
			break;
		
		case 0x00000010:
			bVar0 = IS_POPSET_VALID(Global_30750[4]);
			break;
		
		case 0x00000020:
			bVar0 = IS_POPSET_VALID(Global_30750[5]);
			break;
		
		case 0x00000040:
			bVar0 = IS_POPSET_VALID(Global_30750[6]);
			break;
		
		case 0x00000080:
			bVar0 = IS_POPSET_VALID(Global_30750[7]);
			break;
		
		case 0x00000100:
			bVar0 = IS_POPSET_VALID(Global_30750[8]);
			break;
		
		case 0x00000200:
			bVar0 = IS_POPSET_VALID(Global_30750[9]);
			break;
		
		case 0x00000400:
			bVar0 = IS_POPSET_VALID(Global_30750[10]);
			break;
		
		case 0x00000800:
			bVar0 = IS_POPSET_VALID(Global_30750[11]);
			break;
		
		case 0x00001000:
			bVar0 = IS_POPSET_VALID(Global_30750[12]);
			break;
		
		case 0x00002000:
			bVar0 = IS_POPSET_VALID(Global_30750[13]);
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

int Function_217(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x96FF / 38655
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_236())
	{
		return 0;
	}
	uParam0->f_16 = Function_235(iParam1);
	if (iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (iParam1 == 4294967295)
	{
		iParam1 = Function_237();
	}
	if (iParam4 > 0 || iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_26303.f_12 = iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_234(&Var96, iVar1) == 1)
		{
			if (Function_232(Var96.f_24) == Global_30621[Global_29004])
			{
				if (Var96.f_32 == iParam3)
				{
					if (((iParam1 != 4294967295 || iParam1 <= Var96.f_12) || (iParam1 != 0 && Var96.f_12 != 3)) || (iParam1 != 0 && Var96.f_12 != 4))
					{
						if (iParam4 != 0 || iParam4 != Function_231(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (iParam5 == 1)
							{
								if (!Function_230(iVar1))
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
		if (Function_234(uParam0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(uParam0->f_20));
			PRINTNL();
			uParam0->f_24 = Function_218(uParam0, iParam4, 80, 20000, uParam0->f_12);
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
	if (iParam2 != 4294967294)
	{
		uParam0->f_24 = iParam2;
	}
	return iVar0;
}

var Function_218(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9969 / 39273
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0->f_24;
	uParam3 = uParam3;
	uParam2 = uParam2;
	if (StackVal || uParam0->f_24 != 4294967295 != 1)
	{
		uVar1 = Function_219(uVar0, 80.0f, 20000.0f, uParam1, 1, uParam4);
	}
	else if (StackVal != 6)
	{
		LOG_ERROR("Unhandled Bounty Hunter Landmark type");
	}
	else
	{
		uVar1 = uParam0->f_24;
	}
	return uVar1;
}

var Function_219(bool bParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x99F4 / 39412
{
	bool bVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	vector3 vVar296;
	vector3 vVar299;
	bool bVar302;
	bool bVar303;
	bool bVar304[146];
	bool bVar451[146];
	int iVar598;
	int iVar599;
	int iVar600;
	bool bVar601;
	bool bVar602;
	int iVar603;
	struct<8> Var604;
	
	bVar0 = 4294967295;
	bVar303 = 1.001638E+07.0f;
	bVar601 = false;
	bVar602 = false;
	iVar603 = 0;
	iVar598 = 0;
	while (iVar598 < 145)
	{
		iVar1[iVar598] = 4294967295;
		iVar148[iVar598] = 4294967295;
		iVar598++;
	}
	if (!Function_169(bParam0))
	{
		bParam0 = Global_29005;
	}
	iVar295 = Function_232(bParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar299);
	iVar598 = 0;
	while (iVar598 < 145)
	{
		Function_229(StackVal);
		vVar296 = { StackVal, StackVal, Function_229(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		if (iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(StackVal) && (iVar295 != Function_232(Global_29155[iVar59810]) || bParam0 != 4294967295)) != 1) && Function_206(&(Global_29008[iVar598]), 8192)) && iVar598 == 0)
		{
			if (iVar598 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (bVar302 > bVar303)
			{
				bVar303 = bVar302;
				iVar600 = iVar598;
			}
			if (bVar302 < fParam1 && bVar302 > fParam2)
			{
				iVar1[bVar601] = iVar598;
				bVar304[bVar601] = bVar302;
				bVar601++;
				if (Function_223(Function_224(iVar598, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[bVar602] = iVar598;
					bVar451[bVar602] = bVar302;
					bVar602++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (bVar601 == iVar1)
		{
			iVar598 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		iVar598++;
	}
	if (iParam5 != 4294967295)
	{
		Function_222(&iVar1, &bVar304, bVar601);
		Function_222(&iVar148, &bVar451, bVar602);
	}
	if (bVar602 < 0 && iParam4 != 1)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_29(3, bVar602);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_29(5, bVar602);
				break;
			
			case 0x00000004:
				iVar603 = Function_29(7, bVar602);
				break;
			
			case 0x00000005:
				iVar603 = Function_29(10, bVar602);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_29(5, bVar602);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		bVar0 = iVar148[iVar599];
		if (Function_169(bVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			bVar0 = Function_221();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_220(bVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_229(StackVal);
		vVar296 = { StackVal, StackVal, Function_229(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else if (bVar601 >= 0)
	{
		switch (iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar603 = Function_29(3, bVar601);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar603 = Function_29(5, bVar601);
				break;
			
			case 0x00000004:
				iVar603 = Function_29(7, bVar601);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar603 = Function_29(10, bVar601);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar603 = Function_29(5, bVar601);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar599 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar603);
		bVar0 = iVar1[iVar599];
		if (Function_169(bVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			bVar0 = Function_221();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var604 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_220(bVar0) };
		PRINTSTRING(&Var604);
		PRINTSTRING(" with a distance of ");
		Function_229(StackVal);
		vVar296 = { StackVal, StackVal, Function_229(StackVal) };
		bVar302 = VDIST(vVar299, vVar296);
		PRINTFLOAT(bVar302);
		PRINTNL();
	}
	else
	{
		LOG_ERROR("No valid landmark picked");
		PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK found no valid landmarks");
		PRINTNL();
		return iVar600;
	}
	return bVar0;
}

struct<32> Function_220(bool bParam0) //Position: 0xA09D / 41117
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_169(bParam0))
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
			memcpy(&cVar0, Global_29155[bParam010].f_20, 8);
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

bool Function_221() //Position: 0xA15A / 41306
{
	if (Global_29004 == 0)
	{
		return Global_30640[6];
	}
	if (Global_29004 == 1)
	{
		return Global_30693[3];
	}
	return Global_30723[5];
}

void Function_222(int iParam0, bool bParam1, int iParam2) //Position: 0xA188 / 41352
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = (*bParam1)[iVar0];
		uVar2 = (*iParam0)[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if ((*bParam1)[iVar1] < fVar3)
			{
				(*bParam1)[iVar1 + 1] = (*bParam1)[iVar1];
				(*iParam0)[iVar1 + 1] = (*iParam0)[iVar1];
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
		(*iParam0)[iVar1 + 1] = uVar2;
		(*bParam1)[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

int Function_223(int iParam0) //Position: 0xA216 / 41494
{
	if (!Function_62(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

int Function_224(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA230 / 41520
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_228(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_225(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_225(bParam0, bParam1, bParam2, 4294967295);
}

int Function_225(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA28E / 41614
{
	var uVar0;
	
	if (!Function_227(bParam2))
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
	uVar0 = Function_228(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_226(uVar0);
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

int Function_226(int iParam0) //Position: 0xA3E3 / 41955
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

bool Function_227(int iParam0) //Position: 0xA421 / 42017
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_228(int iParam0, int iParam1, int iParam2) //Position: 0xA436 / 42038
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

vector3 Function_229(bool bParam0) //Position: 0xA456 / 42070
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_230(bool bParam0) //Position: 0xA467 / 42087
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = true;
	if (bParam0 <= 32)
	{
		bVar1 = SHIFT_LEFT(bVar0, bParam0);
		if ((Global_26303 && bVar1) >= 0)
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

int Function_231(bool bParam0) //Position: 0xA4B9 / 42169
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(bParam0);
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

int Function_232(bool bParam0) //Position: 0xA568 / 42344
{
	return Function_233(bParam0);
}

int Function_233(int iParam0) //Position: 0xA573 / 42355
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_169(iParam0))
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

bool Function_234(var uParam0, int iParam1) //Position: 0xA5CB / 42443
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0x00000000:
			uParam0->f_12 = 3;
			uParam0->f_20 = 415;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 26;
			break;
		
		case 0x00000001:
			uParam0->f_12 = 3;
			uParam0->f_20 = 416;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 27;
			break;
		
		case 0x00000002:
			uParam0->f_12 = 5;
			uParam0->f_20 = 422;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 28;
			break;
		
		case 0x00000003:
			uParam0->f_12 = 5;
			uParam0->f_20 = 423;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 29;
			break;
		
		case 0x00000004:
			uParam0->f_12 = 4;
			uParam0->f_20 = 418;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 30;
			break;
		
		case 0x00000005:
			uParam0->f_12 = 4;
			uParam0->f_20 = 419;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 31;
			break;
		
		case 0x00000006:
			uParam0->f_12 = 2;
			uParam0->f_20 = 397;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 12;
			break;
		
		case 0x00000007:
			uParam0->f_12 = 4;
			uParam0->f_20 = 398;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 32;
			break;
		
		case 0x00000008:
			uParam0->f_12 = 5;
			uParam0->f_20 = 403;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 33;
			break;
		
		case 0x00000009:
			uParam0->f_12 = 5;
			uParam0->f_20 = 404;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 34;
			break;
		
		case 0x0000000A:
			uParam0->f_12 = 4;
			uParam0->f_20 = 400;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 35;
			break;
		
		case 0x0000000B:
			uParam0->f_12 = 5;
			uParam0->f_20 = 401;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 36;
			break;
		
		case 0x0000000C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 496;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 13;
			break;
		
		case 0x0000000D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 497;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 14;
			break;
		
		case 0x0000000E:
			uParam0->f_12 = 4;
			uParam0->f_20 = 502;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 17;
			break;
		
		case 0x0000000F:
			uParam0->f_12 = 4;
			uParam0->f_20 = 503;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 5;
			break;
		
		case 0x00000010:
			uParam0->f_12 = 3;
			uParam0->f_20 = 499;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 18;
			break;
		
		case 0x00000011:
			uParam0->f_12 = 3;
			uParam0->f_20 = 500;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 19;
			break;
		
		case 0x00000012:
			uParam0->f_12 = 1;
			uParam0->f_20 = 477;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 1;
			break;
		
		case 0x00000013:
			uParam0->f_12 = 1;
			uParam0->f_20 = 478;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 42;
			break;
		
		case 0x00000014:
			uParam0->f_12 = 3;
			uParam0->f_20 = 483;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 41;
			break;
		
		case 0x00000015:
			uParam0->f_12 = 3;
			uParam0->f_20 = 484;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 2;
			break;
		
		case 0x00000016:
			uParam0->f_12 = 2;
			uParam0->f_20 = 480;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 3;
			break;
		
		case 0x00000017:
			uParam0->f_12 = 2;
			uParam0->f_20 = 481;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 4;
			break;
		
		case 0x00000018:
			uParam0->f_12 = 1;
			uParam0->f_20 = 505;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 43;
			break;
		
		case 0x00000019:
			uParam0->f_12 = 1;
			uParam0->f_20 = 506;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 44;
			break;
		
		case 0x0000001A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 513;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 15;
			break;
		
		case 0x0000001B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 514;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 6;
			break;
		
		case 0x0000001C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 508;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 16;
			break;
		
		case 0x0000001D:
			uParam0->f_12 = 2;
			uParam0->f_20 = 509;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 7;
			break;
		
		case 0x0000001E:
			uParam0->f_12 = 1;
			uParam0->f_20 = 486;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 45;
			break;
		
		case 0x0000001F:
			uParam0->f_12 = 1;
			uParam0->f_20 = 487;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 46;
			break;
		
		case 0x00000020:
			uParam0->f_12 = 3;
			uParam0->f_20 = 492;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 8;
			break;
		
		case 0x00000021:
			uParam0->f_12 = 3;
			uParam0->f_20 = 493;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 9;
			break;
		
		case 0x00000022:
			uParam0->f_12 = 2;
			uParam0->f_20 = 489;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 10;
			break;
		
		case 0x00000023:
			uParam0->f_12 = 2;
			uParam0->f_20 = 490;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 11;
			break;
		
		case 0x00000024:
			uParam0->f_12 = 3;
			uParam0->f_20 = 467;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 47;
			break;
		
		case 0x00000025:
			uParam0->f_12 = 3;
			uParam0->f_20 = 468;
			uParam0->f_24 = Global_30621[2];
			uParam0->f_32 = 0;
			uParam0->f_40 = 48;
			break;
		
		case 0x00000026:
			uParam0->f_12 = 2;
			uParam0->f_20 = 406;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 20;
			break;
		
		case 0x00000027:
			uParam0->f_12 = 3;
			uParam0->f_20 = 407;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 21;
			break;
		
		case 0x00000028:
			uParam0->f_12 = 4;
			uParam0->f_20 = 412;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 22;
			break;
		
		case 0x00000029:
			uParam0->f_12 = 4;
			uParam0->f_20 = 413;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 23;
			break;
		
		case 0x0000002A:
			uParam0->f_12 = 3;
			uParam0->f_20 = 410;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 24;
			break;
		
		case 0x0000002B:
			uParam0->f_12 = 3;
			uParam0->f_20 = 411;
			uParam0->f_24 = Global_30621[1];
			uParam0->f_32 = 0;
			uParam0->f_40 = 25;
			break;
		
		case 0x0000002C:
			uParam0->f_12 = 2;
			uParam0->f_20 = 787;
			uParam0->f_24 = Global_30621[0];
			uParam0->f_32 = 0;
			uParam0->f_40 = 60;
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

var Function_235(int iParam0) //Position: 0xAD3E / 44350
{
	int iVar0;
	
	switch (iParam0)
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

bool Function_236() //Position: 0xAE0C / 44556
{
	return Function_21(StackVal, 1);
}

int Function_237() //Position: 0xAE1B / 44571
{
	int iVar0;
	
	iVar0 = Function_238(0);
	return iVar0;
}

var Function_238(int iParam0) //Position: 0xAE29 / 44585
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_239(358) + Function_239(359));
	if (iParam0 == 1)
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
		if (Global_29004 == 0)
		{
			iVar0 = iVar0;
		}
		else if (Global_29004 == 1)
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

int Function_239(int iParam0) //Position: 0xAEAD / 44717
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

bool Function_240(int iParam0) //Position: 0xAEEE / 44782
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_25267 - 1))
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_155(&(Global_25267[iVar058]), 4) && !IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

var Function_241() //Position: 0xAF3D / 44861
{
	return StackVal;
}

