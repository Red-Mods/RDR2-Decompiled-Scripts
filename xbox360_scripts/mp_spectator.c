//Decompiled with MagicRDR v1.0
//Function Count : 42
//Statics Count : 27
//Natives Count : 57
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
	bool bLocal_13 = false;
	bool bLocal_14 = false;
	bool bLocal_15 = false;
	bool bLocal_16 = false;
	bool bLocal_17 = false;
	bool bLocal_18 = false;
	bool bLocal_19 = false;
	int iLocal_20 = 0;
	vector3 vLocal_21 = { 0.0f, 0.0f, 0.0f };
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_11 = 0;
	Function_40(Function_41());
	STREAMING_LOAD_BOUNDS(Function_40(Function_41()), 10.0f, 0);
	Function_37();
	Function_36();
	while (!IS_EXITFLAG_SET() && Function_7())
	{
		WAIT(false);
	}
	Function_1();
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		HUD_FADE_TO_LOADING_SCREEN();
	}
	while (!STREAMING_IS_WORLD_LOADED())
	{
		WAIT(false);
	}
	HUD_FADE_IN(3.0f, 1065353216);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x5C / 92
{
	REMOVE_OBJECT_ATTACHMENT(bLocal_15);
	DESTROY_LAYOUT(bLocal_16);
	DESTROY_OBJECT(bLocal_13);
	REMOVE_CAMERA_FROM_CHANNEL(bLocal_17, 0);
	DESTROY_CAMERA(bLocal_17);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	Function_4(16384, 0);
	Function_3();
	HUD_ENABLE(true);
	Function_2();
	return;
}

void Function_2() //Position: 0x94 / 148
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_3() //Position: 0xA9 / 169
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_18))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_18);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_19))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_19);
	}
	return;
}

void Function_4(int iParam0, bool bParam1) //Position: 0xC9 / 201
{
	if (bParam1)
	{
		Function_6(&Global_78480 + 124, iParam0);
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

void Function_5(var uParam0, int iParam1) //Position: 0x104 / 260
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_6(var uParam0, var uParam1) //Position: 0x117 / 279
{
	*uParam0 = (*uParam0 || uParam1);
	return;
}

int Function_7() //Position: 0x126 / 294
{
	int iVar0;
	
	if (GET_NUM_PLAYERS() == 1)
	{
		return 0;
	}
	switch (iLocal_20)
	{
		case 0x00000000:
			PRINT_SMALL_FORMAT(-1.0f, "mp_spectating", Function_35(bLocal_14), "", "", "", 2, 0, 0);
			iVar0 = Function_34();
			if (iVar0 >= 1)
			{
				Function_33();
			}
			if (Function_32(bLocal_14) && !Function_29(bLocal_14, 16384, 1))
			{
				if (GET_SLOT_POSITION(bLocal_14, &vLocal_21))
				{
					SET_CAMERA_POSITION(bLocal_17, vLocal_21);
					if (iVar0 >= 1)
					{
						if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), true, 1, 0))
						{
							Function_36();
						}
						if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), false, 1, 0))
						{
							Function_27();
						}
					}
					if (Function_29(bLocal_14, 2, 1))
					{
						iLocal_20 = 3;
					}
				}
			}
			else
			{
				Function_36();
			}
			break;
		
		case 0x00000001:
			Function_3();
			if (!HUD_IS_FADING())
			{
				iLocal_20 = 2;
			}
			break;
		
		case 0x00000002:
			if (!HUD_IS_FADING())
			{
				if (Function_18())
				{
					HUD_FADE_IN(3.0f, 1065353216);
					iLocal_20 = 0;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_17(&uLocal_24))
			{
				if (Function_14(&uLocal_24) < 2.0f)
				{
					Function_13(&uLocal_24);
					Function_36();
				}
			}
			else
			{
				Function_8(&uLocal_24, 2.0f);
			}
			break;
		
		case 0xFFFFFFFF:
			Function_36();
			break;
	}
	return 1;
}

void Function_8(var uParam0, float fParam1) //Position: 0x248 / 584
{
	Function_9(uParam0, -fParam1);
	return;
}

void Function_9(var uParam0, float fParam1) //Position: 0x256 / 598
{
	Function_11();
	Function_10(uParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_10(var uParam0, var uParam1) //Position: 0x26A / 618
{
	uParam0->f_4 = uParam1;
	Function_6(uParam0, 1);
	Function_5(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_11() //Position: 0x287 / 647
{
	if (!Function_12())
	{
	}
	return;
}

bool Function_12() //Position: 0x294 / 660
{
	return NET_IS_IN_SESSION();
}

void Function_13(int iParam0) //Position: 0x29D / 669
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

float Function_14(int iParam0) //Position: 0x2B1 / 689
{
	if (Function_17(iParam0))
	{
		if (Function_15(iParam0))
		{
			return StackVal;
		}
		Function_11();
		return (StackVal - NET_GET_NET_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_15(int iParam0) //Position: 0x382 / 898
{
	return Function_16(*iParam0, 2);
}

int Function_16(var uParam0, int iParam1) //Position: 0x38F / 911
{
	return (uParam0 && iParam1) == 0;
}

bool Function_17(var uParam0) //Position: 0x39C / 924
{
	return Function_16(*uParam0, 1);
}

bool Function_18() //Position: 0x3A9 / 937
{
	if (STREAMING_IS_WORLD_LOADED())
	{
		if (!Function_19())
		{
			return 0;
		}
		HUD_CLEAR_SMALL_TEXT();
		PRINT_SMALL_FORMAT(-1.0f, "mp_spectating", Function_35(bLocal_14), "", "", "", 2, 0, 0);
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0x3E9 / 1001
{
	if (IS_ACTOR_VALID(GET_SLOT_ACTOR(bLocal_14)))
	{
		bLocal_15 = ATTACH_OBJECTS_NO_DRV(bLocal_13, GET_SLOT_ACTOR(bLocal_14), "head", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		SET_CAMERA_TARGET_OBJECT(bLocal_17, bLocal_13, 0);
		if (GET_SLOT_POSITION(bLocal_14, &vLocal_21))
		{
			SET_CAMERA_POSITION(bLocal_17, vLocal_21);
		}
		if (!IS_ACTOR_VALID(GET_SLOT_ACTOR(bLocal_14)))
		{
			if (Function_29(bLocal_14, 128, 1) || Function_29(bLocal_14, 2, 1))
			{
				bLocal_14 = Function_20(bLocal_14);
				return 0;
			}
		}
		return 1;
	}
	SET_CAMERA_TARGET_OBJECT(bLocal_17, bLocal_13, 0);
	if (GET_SLOT_POSITION(bLocal_14, &vLocal_21))
	{
		SET_CAMERA_POSITION(bLocal_17, vLocal_21);
	}
	return 0;
}

bool Function_20(bool bParam0) //Position: 0x477 / 1143
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar2 = Function_24();
	iVar3 = Function_23();
	bVar4 = GET_LOCAL_SLOT();
	iVar1 = 1;
	while (iVar1 < 16)
	{
		bVar0 = ((bParam0 + iVar1) % 16);
		if (Function_32(bVar0) && bVar0 == bVar4)
		{
			if (!Function_29(bVar0, 2, 1) && !Function_29(bVar0, 16384, 1))
			{
				if (!bVar2 || iVar3 != Function_21(bVar0, 1, 0))
				{
					return bVar0;
				}
			}
		}
		iVar1++;
	}
	return 4294967295;
}

int Function_21(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4E5 / 1253
{
	if (bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (bParam2)
		{
			if (Function_22(bParam0))
			{
				if (!Function_29(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_78578 + 20)[bParam0];
}

bool Function_22(bool bParam0) //Position: 0x529 / 1321
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

int Function_23() //Position: 0x5CA / 1482
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_21(GET_LOCAL_SLOT(), 1, 0);
}

int Function_24() //Position: 0x5E1 / 1505
{
	return Function_25(2);
}

int Function_25(int iParam0) //Position: 0x5EB / 1515
{
	return Function_26(&Global_79349, iParam0);
}

int Function_26(var uParam0, var uParam1) //Position: 0x5FA / 1530
{
	return Function_16(uParam0->f_44, uParam1);
}

void Function_27() //Position: 0x609 / 1545
{
	bLocal_14 = Function_28(bLocal_14);
	Function_2();
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		HUD_FADE_TO_LOADING_SCREEN();
	}
	if (bLocal_14 == 4294967295)
	{
		iLocal_20 = 4294967295;
	}
	else
	{
		iLocal_20 = 1;
	}
	return;
}

bool Function_28(int iParam0) //Position: 0x637 / 1591
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar2 = Function_24();
	iVar3 = Function_23();
	bVar4 = GET_LOCAL_SLOT();
	iVar1 = 1;
	while (iVar1 < 16)
	{
		bVar0 = ((iParam0 - iVar1) + 16 % 16);
		if (Function_32(bVar0) && bVar0 == bVar4)
		{
			if (!Function_29(bVar0, 2, 1) && !Function_29(bVar0, 16384, 1))
			{
				if (!bVar2 || iVar3 != Function_21(bVar0, 1, 0))
				{
					return bVar0;
				}
			}
		}
		iVar1++;
	}
	return 4294967295;
}

bool Function_29(bool bParam0, int iParam1, bool bParam2) //Position: 0x6A7 / 1703
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_31(iParam1, bParam2);
	}
	if (!Function_22(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_30(iParam1), 64);
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

var Function_30(int iParam0) //Position: 0x728 / 1832
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

var Function_31(int iParam0, bool bParam1) //Position: 0x9B1 / 2481
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && iParam0);
	if (bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

int Function_32(bool bParam0) //Position: 0x9D1 / 2513
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_22(bParam0);
}

void Function_33() //Position: 0x9E7 / 2535
{
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_18))
	{
		bLocal_18 = ADD_SCRIPT_USE_CONTEXT("mp_spectateNext", false, 1, false, 0, 0, 0, 4294967295, 0);
	}
	if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_19))
	{
		bLocal_19 = ADD_SCRIPT_USE_CONTEXT("mp_spectatePrev", false, 0, false, 0, 0, 0, 4294967295, 0);
	}
	return;
}

var Function_34() //Position: 0xA3D / 2621
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_32(bVar0) && bVar0 == bVar2)
		{
			if (!Function_29(bVar0, 16384, 1))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

var Function_35(bool bParam0) //Position: 0xA7E / 2686
{
	switch (bParam0)
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

void Function_36() //Position: 0xC92 / 3218
{
	bLocal_14 = Function_20(bLocal_14);
	Function_2();
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		HUD_FADE_TO_LOADING_SCREEN();
	}
	if (bLocal_14 == 4294967295)
	{
		iLocal_20 = 4294967295;
	}
	else
	{
		iLocal_20 = 1;
	}
	return;
}

void Function_37() //Position: 0xCC0 / 3264
{
	bLocal_16 = CREATE_LAYOUT("CamSpecLayout");
	bLocal_17 = CREATE_CAMERA_IN_LAYOUT(bLocal_16, "SpecCam", 0);
	INIT_CAMERA_FROM_GAME_CAMERA(bLocal_17);
	Function_39();
	bLocal_12 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_16, "camfoc", GET_SLOT_ACTOR(bLocal_14), Function_39(), 75.0f, 100.0f);
	SET_CAMERA_FOCUS_OBJECT(bLocal_12, GET_SLOT_ACTOR(bLocal_14), 0.0f, 1,5f, 0.0f, 0.0f);
	SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_12, 0);
	bLocal_13 = CREATE_POINT_IN_LAYOUT(Function_38(), "KillerHeadLooker", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_17, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	bLocal_15 = ATTACH_OBJECTS_NO_DRV(bLocal_13, GET_SLOT_ACTOR(bLocal_14), "head", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	if (!IS_ATTACHMENT_VALID(bLocal_15))
	{
	}
	SET_CAMERA_TARGET_OBJECT(bLocal_17, bLocal_13, 0);
	Global_62993 = 1;
	RESET_ANALOG_POSITIONS(0, 0.0f);
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	CAMERA_RESET(0);
	HUD_ENABLE(false);
	iLocal_20 = 0;
	return;
}

var Function_38() //Position: 0xDA0 / 3488
{
	if (!IS_LAYOUTREF_VALID(Global_79342))
	{
		Global_79342 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return Global_79342;
}

vector3 Function_39() //Position: 0xDCF / 3535
{
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_40(bool bParam0) //Position: 0xDD8 / 3544
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_41() //Position: 0xDE9 / 3561
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

