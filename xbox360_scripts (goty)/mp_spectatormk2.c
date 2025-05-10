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
	STREAMING_UNLOAD_BOUNDS();
	Function_7();
	HUD_SET_CENTER_BLIP_SHOWN(1);
	return;
}

void Function_7() //Position: 0x189 / 393
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

int Function_8(int iParam0) //Position: 0x1AB / 427
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

void Function_9() //Position: 0x1B7 / 439
{
	Function_8(0);
	return;
}

void Function_10(int iParam0, bool bParam1) //Position: 0x1C2 / 450
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

void Function_11(var uParam0, int iParam1) //Position: 0x1FD / 509
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_12(int iParam0) //Position: 0x20C / 524
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
					if ((GET_CURRENT_GAME_TIME() - fLocal_24) < 0.75f && fLocal_24 < 0.0f)
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
				STREAMING_UNLOAD_BOUNDS();
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

void Function_13(var uParam0, float fParam1) //Position: 0x449 / 1097
{
	Function_14(uParam0, -fParam1);
	return;
}

void Function_14(var uParam0, float fParam1) //Position: 0x457 / 1111
{
	Function_16();
	Function_15(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_15(var uParam0, var uParam1) //Position: 0x46B / 1131
{
	uParam0->f_4 = uParam1;
	Function_11(uParam0, 1);
	Function_5(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_16() //Position: 0x488 / 1160
{
	if (!Function_17())
	{
	}
	return;
}

bool Function_17() //Position: 0x495 / 1173
{
	return NET_IS_IN_SESSION();
}

bool Function_18(int iParam0) //Position: 0x49E / 1182
{
	if (Function_20(iParam0))
	{
		Function_19(iParam0);
		return 1;
	}
	return 0;
}

void Function_19(int iParam0) //Position: 0x4B4 / 1204
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

bool Function_20(int iParam0) //Position: 0x4C8 / 1224
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

float Function_21(int iParam0) //Position: 0x4E3 / 1251
{
	return -Function_22(iParam0);
}

float Function_22(int iParam0) //Position: 0x4EF / 1263
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

bool Function_23(int iParam0) //Position: 0x5C0 / 1472
{
	return Function_24(*iParam0, 2);
}

int Function_24(var uParam0, int iParam1) //Position: 0x5CD / 1485
{
	return (uParam0 && iParam1) == 0;
}

bool Function_25(int iParam0) //Position: 0x5DA / 1498
{
	return Function_24(*iParam0, 1);
}

bool Function_26() //Position: 0x5E7 / 1511
{
	if (Function_35(0))
	{
		return Function_29();
	}
	Function_27();
	return 0;
}

void Function_27() //Position: 0x5FF / 1535
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
			STREAMING_UNLOAD_BOUNDS();
			bLocal_17 = CREATE_CAMERA_IN_LAYOUT(Function_28(), "SpectatorCam", 0);
			INIT_CAMERA_FROM_GAME_CAMERA(bLocal_17);
			SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_17, false, 0f, 0f, 0, 0, 0, 0, 0, 0);
		}
		SET_CAMERA_POSITION(bLocal_17, vVar0);
		SET_CAMERA_DIRECTION(bLocal_17, vVar3, 1);
	}
	return;
}

var Function_28() //Position: 0x669 / 1641
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

int Function_29() //Position: 0x698 / 1688
{
	bool bVar0;
	
	bVar0 = GET_SLOT_ACTOR(bLocal_12);
	SET_PLAYER_CONTROL(0, 0, 1, 1);
	SET_CAMERA_FOLLOW_ACTOR_EX(bVar0, 1);
	Function_30();
	Function_7();
	return 1;
}

void Function_30() //Position: 0x6BA / 1722
{
	Function_31(0, 15, "mp_spectateLook", 1, 0, 0, 0, 0);
	return;
}

int Function_31(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x6DE / 1758
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

int Function_32(var uParam0, int iParam1) //Position: 0x718 / 1816
{
	UI_SET_PROMPT_STRING(uParam0, iParam1);
	return 1;
}

var Function_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x726 / 1830
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", uParam1, uParam0, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool Function_34(var uParam0, int iParam1) //Position: 0x760 / 1888
{
	UI_SET_PROMPT_ICON(uParam0, iParam1);
	return 1;
}

bool Function_35(bool bParam0) //Position: 0x76E / 1902
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

float Function_36(bool bParam0, vector3 vParam1) //Position: 0x7C0 / 1984
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

vector3 Function_37(bool bParam0) //Position: 0x83A / 2106
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

bool Function_38(bool bParam0, bool bParam1, float fParam2) //Position: 0x8A4 / 2212
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

var Function_39() //Position: 0x941 / 2369
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_40() //Position: 0x94A / 2378
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
	STREAMING_UNLOAD_BOUNDS();
	STREAMING_LOAD_SCENE_EXT(vVar0, vVar3, 1);
	return;
}

var Function_41(bool bParam0) //Position: 0x996 / 2454
{
	return GET_HEADING(bParam0);
}

void Function_42(bool bParam0, bool bParam1) //Position: 0x9A1 / 2465
{
	GET_POSITION(bParam0, bParam1);
	return;
}

int Function_43(int iParam0) //Position: 0x9AE / 2478
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

int Function_44(bool bParam0, bool bParam1, bool bParam2) //Position: 0xA05 / 2565
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

bool Function_45(bool bParam0, int iParam1, bool bParam2) //Position: 0xA49 / 2633
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

var Function_46(int iParam0) //Position: 0xACA / 2762
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
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

var Function_47(int iParam0, bool bParam1) //Position: 0xDE3 / 3555
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

bool Function_48(bool bParam0) //Position: 0xE03 / 3587
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

var Function_49() //Position: 0xEA4 / 3748
{
	return GET_LOCAL_SLOT();
}

int Function_50() //Position: 0xEAD / 3757
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_44(GET_LOCAL_SLOT(), 1, 0);
}

int Function_51() //Position: 0xEC4 / 3780
{
	return Function_52(2);
}

int Function_52(int iParam0) //Position: 0xECE / 3790
{
	return Function_53(&Global_79349, iParam0);
}

int Function_53(var uParam0, int iParam1) //Position: 0xEDD / 3805
{
	return Function_24(uParam0->f_44, iParam1);
}

int Function_54(bool bParam0) //Position: 0xEEC / 3820
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

bool Function_55(bool bParam0, int iParam1, bool bParam2) //Position: 0xF41 / 3905
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_PRESSED(iVar0, bParam0, iParam1, bParam2);
	if (bVar1)
	{
		switch (bParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_PRESSED(iVar0, 15, iParam1, bParam2) || IS_BUTTON_PRESSED(iVar0, 13, iParam1, bParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_PRESSED(iVar0, 14, iParam1, bParam2) || IS_BUTTON_PRESSED(iVar0, 12, iParam1, bParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

bool Function_56(bool bParam0) //Position: 0xFBE / 4030
{
	if (!Function_57(bParam0))
	{
		return 0;
	}
	return !Function_45(bParam0, 16514, 0);
}

bool Function_57(bool bParam0) //Position: 0xFD9 / 4057
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_48(bParam0);
}

void Function_58(int iParam0, bool bParam1) //Position: 0xFEF / 4079
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
	UI_SET_STRING_FORMAT("Generic_Dbuffer128_2", UI_GET_STRING(bVar0), "", false, false);
	UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_2");
	UI_SET_TEXT("MPSplashItem.s1", Function_59(iParam0));
	UI_REFRESH("MPSplashTitle");
	return;
}

var Function_59(int iParam0) //Position: 0x10CF / 4303
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

var Function_60() //Position: 0x12E3 / 4835
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

void Function_61() //Position: 0x1333 / 4915
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

void Function_62() //Position: 0x13FE / 5118
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

void Function_63(int iParam0) //Position: 0x141A / 5146
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

void Function_64(var uParam0, int iParam1) //Position: 0x1473 / 5235
{
	Function_11(uParam0, iParam1);
	return;
}

vector3 Function_65(bool bParam0) //Position: 0x1480 / 5248
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_66(bool bParam0, int iParam1) //Position: 0x1491 / 5265
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

bool Function_67(var uParam0, bool bParam1) //Position: 0x156A / 5482
{
	return (uParam0 && bParam1) == 0;
}

var Function_68() //Position: 0x1577 / 5495
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

