//Decompiled with MagicRDR v1.0
//Function Count : 69
//Statics Count : 31
//Natives Count : 86
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
	bool bLocal_12 = false;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	float fLocal_15 = 0.0f;
	int iLocal_16 = 0;
	bool bLocal_17 = false;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	bool bLocal_23 = false;
	float fLocal_24 = 0.0f;
	float fLocal_25 = 0.0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	iLocal_11 = 0;
	fLocal_15 = 40.0f;
	iLocal_16 = 500;
	bLocal_23 = 1.0f;
	uVar0 = Function_68();
	bVar1 = false;
	if (Function_66(uVar0, 0))
	{
		bVar1 = true;
		Function_65(uVar0);
		STREAMING_LOAD_BOUNDS(Function_65(uVar0), 10.0f, 0);
	}
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	UI_EXIT("XpHud");
	UI_EXCLUDE("XpHud");
	Function_63(1048576);
	Function_62();
	Function_61();
	while (!IS_EXITFLAG_SET() && Function_12(&bVar2))
	{
		WAIT(bVar2);
	}
	if (bVar1)
	{
		STREAMING_UNLOAD_BOUNDS();
	}
	Function_6();
	Function_3(1048576);
	UI_INCLUDE("XpHud");
	if (Function_1(4096))
	{
		UI_SHOW("XpHud");
		UI_EXIT("XpMultiplier");
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

bool Function_1(int iParam0) //Position: 0xBF / 191
{
	return Function_2(Global_79336, iParam0);
}

int Function_2(var uParam0, int iParam1) //Position: 0xCE / 206
{
	return (uParam0 && iParam1) == 0;
}

void Function_3(int iParam0) //Position: 0xDB / 219
{
	Function_4(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x114 / 276
{
	Function_5(uParam0, iParam1);
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x121 / 289
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_6() //Position: 0x134 / 308
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	Function_10(16384, 0);
	HUD_ENABLE(true);
	UI_INCLUDE("Reticle");
	UI_ENTER("Reticle");
	Function_9();
	Function_8(1);
	UI_EXIT("MPSplash");
	STREAMING_UNLOAD_SCENE();
	Function_7();
	HUD_SET_CENTER_BLIP_SHOWN(1);
	return;
}

void Function_7() //Position: 0x186 / 390
{
	if (IS_OBJECT_VALID(bLocal_17))
	{
		if (IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_17, false))
		{
			REMOVE_CAMERA_FROM_CHANNEL(bLocal_17, 0);
		}
		DESTROY_OBJECT(bLocal_17);
	}
	return;
}

int Function_8(bool bParam0) //Position: 0x1A8 / 424
{
	UI_HIDE_PROMPT(bParam0);
	return 1;
}

void Function_9() //Position: 0x1B4 / 436
{
	Function_8(0);
	return;
}

void Function_10(int iParam0, bool bParam1) //Position: 0x1BF / 447
{
	if (bParam1)
	{
		Function_11(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_5(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x1FA / 506
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_12(int iParam0) //Position: 0x209 / 521
{
	int iVar0;
	
	*iParam0 = 0;
	if (GET_NUM_PLAYERS() == 1)
	{
		return 0;
	}
	switch (iLocal_19)
	{
		case 0x00000000:
			iVar0 = Function_60();
			if (Global_78617.f_48 == iLocal_12 || iVar0 == iLocal_14)
			{
				iLocal_14 = iVar0;
				Global_78617.f_48 = iLocal_12;
				iLocal_13 = iLocal_12;
				Function_58(iLocal_12, 0);
			}
			if (!Function_56(iLocal_12))
			{
				iLocal_19 = 5;
			}
			else if (iVar0 >= 1)
			{
				if (UI_ISFOCUSED("HudSceneOnline"))
				{
					if (Function_55(3, 1, 1))
					{
						iLocal_13 = Function_54(iLocal_13);
						Function_58(iLocal_13, 0);
						PLAY_SOUND_FRONTEND("HUD_MENU_NAV_RIGHT_MASTER");
						fLocal_24 = GET_CURRENT_GAME_TIME();
					}
					else if (Function_55(2, 1, 1))
					{
						iLocal_13 = Function_43(iLocal_13);
						Function_58(iLocal_13, 0);
						PLAY_SOUND_FRONTEND("HUD_MENU_NAV_LEFT_MASTER");
						fLocal_24 = GET_CURRENT_GAME_TIME();
					}
					if ((GET_CURRENT_GAME_TIME() - fLocal_24) < 0,75f && fLocal_24 < 0.0f)
					{
						fLocal_24 = 0.0f;
						if (iLocal_12 != iLocal_13)
						{
							iLocal_19 = 1;
							iLocal_12 = iLocal_13;
						}
						else
						{
							PLAY_SOUND_FRONTEND("HUD_MENU_BACK_MASTER");
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (iLocal_18)
			{
				Function_58(iLocal_12, 1);
				PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
			}
			iLocal_18 = 1;
			Function_40();
			*iParam0 = iLocal_16;
			iLocal_19 = 2;
			break;
		
		case 0x00000002:
			if (Function_35(1))
			{
				Function_29();
				STREAMING_UNLOAD_SCENE();
				iLocal_19 = 0;
			}
			else
			{
				if (!HUD_IS_FADED())
				{
					HUD_FADE_TO_LOADING_SCREEN();
					fLocal_25 = GET_CURRENT_GAME_TIME();
				}
				iLocal_19 = 3;
			}
			break;
		
		case 0x00000003:
			if (HUD_IS_FADED())
			{
				Function_27();
				iLocal_19 = 4;
			}
			break;
		
		case 0x00000004:
			if (!Function_56(iLocal_12))
			{
				iLocal_12 = Function_54(iLocal_12);
				Function_27();
			}
			else if (Function_26())
			{
				if (HUD_IS_FADED())
				{
					if ((GET_CURRENT_GAME_TIME() - fLocal_25) < 2.0f)
					{
						HUD_FADE_IN(bLocal_23, 1065353216);
						iLocal_19 = 0;
					}
				}
				else
				{
					iLocal_19 = 0;
				}
			}
			else
			{
				Function_9();
			}
			break;
		
		case 0x00000005:
			if (Function_25(&uLocal_20))
			{
				if (Function_18(&uLocal_20))
				{
					Function_62();
				}
			}
			else
			{
				Function_13(&uLocal_20, 2.0f);
			}
			break;
		
		case 0xFFFFFFFF:
			Function_62();
			break;
	}
	return 1;
}

void Function_13(var uParam0, float fParam1) //Position: 0x443 / 1091
{
	Function_14(uParam0, -fParam1);
	return;
}

void Function_14(var uParam0, float fParam1) //Position: 0x451 / 1105
{
	Function_16();
	Function_15(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_15(var uParam0, var uParam1) //Position: 0x465 / 1125
{
	uParam0->f_4 = uParam1;
	Function_11(uParam0, 1);
	Function_5(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_16() //Position: 0x482 / 1154
{
	if (!Function_17())
	{
	}
	return;
}

bool Function_17() //Position: 0x48F / 1167
{
	return NET_IS_IN_SESSION();
}

bool Function_18(int iParam0) //Position: 0x498 / 1176
{
	if (Function_20(iParam0))
	{
		Function_19(iParam0);
		return 1;
	}
	return 0;
}

void Function_19(int iParam0) //Position: 0x4AE / 1198
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_20(int iParam0) //Position: 0x4C2 / 1218
{
	if (Function_25(iParam0))
	{
		if (Function_21(iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_21(int iParam0) //Position: 0x4DD / 1245
{
	return -Function_22(iParam0);
}

float Function_22(int iParam0) //Position: 0x4E9 / 1257
{
	if (Function_25(iParam0))
	{
		if (Function_23(iParam0))
		{
			return StackVal;
		}
		Function_16();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_23(int iParam0) //Position: 0x5BA / 1466
{
	return Function_24(*iParam0, 2);
}

int Function_24(var uParam0, int iParam1) //Position: 0x5C7 / 1479
{
	return (uParam0 && iParam1) == 0;
}

bool Function_25(int iParam0) //Position: 0x5D4 / 1492
{
	return Function_24(*iParam0, 1);
}

bool Function_26() //Position: 0x5E1 / 1505
{
	if (Function_35(0))
	{
		return Function_29();
	}
	Function_27();
	return 0;
}

void Function_27() //Position: 0x5F9 / 1529
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!GET_SLOT_POSITION(iLocal_12, &vVar0) || !GET_SLOT_FACING(bLocal_12, &vVar3))
	{
	}
	else
	{
		if (!IS_OBJECT_VALID(bLocal_17))
		{
			STREAMING_UNLOAD_SCENE();
			bLocal_17 = CREATE_CAMERA_IN_LAYOUT(Function_28(), "SpectatorCam", 0);
			INIT_CAMERA_FROM_GAME_CAMERA(bLocal_17);
			SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_17, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
		SET_CAMERA_POSITION(bLocal_17, vVar0);
		SET_CAMERA_DIRECTION(bLocal_17, vVar3, 1);
	}
	return;
}

var Function_28() //Position: 0x660 / 1632
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

int Function_29() //Position: 0x68F / 1679
{
	int iVar0;
	
	iVar0 = GET_SLOT_ACTOR(bLocal_12);
	SET_PLAYER_CONTROL(0, 0, 1, 1);
	SET_CAMERA_FOLLOW_ACTOR_EX(iVar0, 1);
	Function_30();
	Function_7();
	return 1;
}

void Function_30() //Position: 0x6B1 / 1713
{
	Function_31(0, 15, "mp_spectateLook", 1, 0, 0, 0, 0);
	return;
}

int Function_31(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x6D5 / 1749
{
	if (!Function_34(uParam0, iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		return Function_33(uParam0, iParam2, iParam3, bParam4, iParam5, iParam6, iParam7);
	}
	return Function_32(uParam0, iParam2);
}

int Function_32(var uParam0, int iParam1) //Position: 0x70F / 1807
{
	UI_SET_PROMPT_STRING(uParam0, iParam1);
	return 1;
}

var Function_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x71D / 1821
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", uParam1, uParam0, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool Function_34(var uParam0, int iParam1) //Position: 0x757 / 1879
{
	UI_SET_PROMPT_ICON(uParam0, iParam1);
	return 1;
}

bool Function_35(bool bParam0) //Position: 0x765 / 1893
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = GET_SLOT_ACTOR(bLocal_12);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 0;
	}
	if (!Function_38(bVar0, 1, 0x41700000))
	{
		return 0;
	}
	if (bParam0)
	{
		if (GET_CAMERA_CHANNEL_POSITION(&vVar1, 0))
		{
			if (Function_36(StackVal, StackVal, bVar0, vVar1) > fLocal_15)
			{
				return 1;
			}
		}
	}
	if (!STREAMING_IS_WORLD_LOADED())
	{
		return 0;
	}
	return 1;
}

float Function_36(bool bParam0, vector3 vParam1) //Position: 0x7B7 / 1975
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_37(bParam0);
		vVar0 = { StackVal, StackVal, Function_37(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_37(bool bParam0) //Position: 0x831 / 2097
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

bool Function_38(bool bParam0, bool bParam1, float fParam2) //Position: 0x89B / 2203
{
	float fVar0;
	bool bVar1;
	
	if (Function_39() || !bParam1)
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

var Function_39() //Position: 0x938 / 2360
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_40() //Position: 0x941 / 2369
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	bVar6 = GET_SLOT_ACTOR(bLocal_12);
	if (IS_ACTOR_VALID(bVar6))
	{
		Function_42(bVar6, &vVar0);
		vVar3 = { 0.0f, Function_41(bVar6), 0.0f };
	}
	else
	{
		GET_SLOT_POSITION(bLocal_12, &vVar0);
		GET_SLOT_FACING(bLocal_12, &vVar3);
	}
	STREAMING_UNLOAD_SCENE();
	STREAMING_LOAD_SCENE_EXT(vVar0, vVar3, 1);
	return;
}

var Function_41(bool bParam0) //Position: 0x98A / 2442
{
	return GET_HEADING(bParam0);
}

void Function_42(bool bParam0, bool bParam1) //Position: 0x995 / 2453
{
	GET_POSITION(bParam0, bParam1);
	return;
}

int Function_43(int iParam0) //Position: 0x9A2 / 2466
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	bVar2 = Function_51();
	iVar3 = Function_50();
	iVar4 = Function_49();
	iVar1 = 1;
	while (iVar1 < 16)
	{
		bVar0 = ((iParam0 - iVar1) + 16 % 16);
		if (Function_56(bVar0) && bVar0 == iVar4)
		{
			if (!bVar2 || iVar3 != Function_44(bVar0, 1, 0))
			{
				return bVar0;
			}
		}
		iVar1++;
	}
	return 4294967295;
}

int Function_44(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9F9 / 2553
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_48(bParam0))
			{
				if (!Function_45(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_45(bool bParam0, int iParam1, bool bParam2) //Position: 0xA3D / 2621
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_47(iParam1, bParam2);
	}
	if (!Function_48(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_46(iParam1), 64);
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

var Function_46(int iParam0) //Position: 0xABE / 2750
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

var Function_47(int iParam0, bool bParam1) //Position: 0xD47 / 3399
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_48(bool bParam0) //Position: 0xD67 / 3431
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

var Function_49() //Position: 0xE08 / 3592
{
	return GET_LOCAL_SLOT();
}

int Function_50() //Position: 0xE11 / 3601
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_44(GET_LOCAL_SLOT(), 1, 0);
}

int Function_51() //Position: 0xE28 / 3624
{
	return Function_52(2);
}

int Function_52(int iParam0) //Position: 0xE32 / 3634
{
	return Function_53(&Global_79349, iParam0);
}

int Function_53(var uParam0, int iParam1) //Position: 0xE41 / 3649
{
	return Function_24(uParam0->f_44, iParam1);
}

int Function_54(bool bParam0) //Position: 0xE50 / 3664
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	bVar2 = Function_51();
	iVar3 = Function_50();
	iVar4 = Function_49();
	iVar1 = 1;
	while (iVar1 < 16)
	{
		bVar0 = ((bParam0 + iVar1) % 16);
		if (Function_56(bVar0) && bVar0 == iVar4)
		{
			if (!bVar2 || iVar3 != Function_44(bVar0, 1, 0))
			{
				return bVar0;
			}
		}
		iVar1++;
	}
	return 4294967295;
}

bool Function_55(bool bParam0, int iParam1, int iParam2) //Position: 0xEA5 / 3749
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_PRESSED(iVar0, bParam0, iParam1, iParam2);
	if (bVar1)
	{
		switch (bParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_PRESSED(iVar0, 15, iParam1, iParam2) || IS_BUTTON_PRESSED(iVar0, 13, iParam1, iParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_PRESSED(iVar0, 14, iParam1, iParam2) || IS_BUTTON_PRESSED(iVar0, 12, iParam1, iParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

bool Function_56(bool bParam0) //Position: 0xF22 / 3874
{
	if (!Function_57(bParam0))
	{
		return 0;
	}
	return !Function_45(bParam0, 16514, 0);
}

bool Function_57(bool bParam0) //Position: 0xF3D / 3901
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_48(bParam0);
}

void Function_58(int iParam0, bool bParam1) //Position: 0xF53 / 3923
{
	bool bVar0;
	
	if (bParam1)
	{
		bVar0 = "mp_spectating_locked";
	}
	else
	{
		bVar0 = "mp_spectating";
	}
	if (iLocal_14 >= 1)
	{
		Function_31(1, 24, "Common_Change", 1, 0, 0, 0, 0);
	}
	else
	{
		Function_8(1);
	}
	UI_SET_STRING_FORMAT("Generic_Dbuffer128_2", UI_GET_STRING(bVar0), "", 0, 0);
	UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_2");
	UI_SET_TEXT("MPSplashItem.s1", Function_59(iParam0));
	UI_REFRESH("MPSplashTitle");
	return;
}

var Function_59(int iParam0) //Position: 0x1033 / 4147
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

var Function_60() //Position: 0x1247 / 4679
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar2 = Function_49();
	bVar3 = Function_51();
	iVar4 = Function_50();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (bVar0 != iVar2)
		{
			if (Function_56(bVar0))
			{
				if (!bVar3 || iVar4 != Function_44(bVar0, 1, 0))
				{
					iVar1++;
				}
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_61() //Position: 0x1297 / 4759
{
	ALLOW_GAME_CAMERA_AUTO_CENTERING(1, 2);
	SET_PLAYER_CONTROL(0, 0, 1, 1);
	STREAMING_SET_POI_LIMIT(2);
	UI_SUPPRESS("Reticle");
	UI_EXCLUDE("Reticle");
	UI_INCLUDE("MPSplashItem.s0");
	UI_INCLUDE("MPSplashItem.s1");
	UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
	UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
	UI_ENTER("MPSplash");
	UI_SET_STYLE("MPSplashTitle", 10);
	HUD_ENABLE(false);
	HUD_SET_CENTER_BLIP_SHOWN(0);
	return;
}

void Function_62() //Position: 0x1362 / 4962
{
	bLocal_12 = Function_54(bLocal_12);
	if (bLocal_12 != 4294967295)
	{
		iLocal_19 = 1;
	}
	else
	{
		iLocal_19 = 4294967295;
	}
	return;
}

void Function_63(int iParam0) //Position: 0x137E / 4990
{
	Function_64(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_64(var uParam0, int iParam1) //Position: 0x13D7 / 5079
{
	Function_11(uParam0, iParam1);
	return;
}

vector3 Function_65(bool bParam0) //Position: 0x13E4 / 5092
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_66(bool bParam0, int iParam1) //Position: 0x13F5 / 5109
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_67(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_67(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_67(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_67(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_67(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_67(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_67(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_67(iParam1, 64))
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

bool Function_67(var uParam0, bool bParam1) //Position: 0x14CE / 5326
{
	return (uParam0 && bParam1) == 0;
}

var Function_68() //Position: 0x14DB / 5339
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

