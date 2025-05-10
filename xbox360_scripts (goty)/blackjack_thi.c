//Decompiled with MagicRDR v1.0
//Function Count : 51
//Statics Count : 64
//Natives Count : 69
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	int iLocal_4 = 0;
	bool bLocal_5 = false;
	struct<7> Local_6 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	bool bLocal_22 = false;
	bool bLocal_23 = false;
	struct<129> Local_24 = { 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	Local_6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_40();
	while (Function_16())
	{
		WAIT(0);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x21 / 33
{
	Function_12();
	if (IS_ACTOR_VALID(bLocal_22))
	{
		SET_INDICATOR_DRAW(bLocal_22, 0);
		RELEASE_ACTOR(bLocal_22);
	}
	if (IS_BLIP_VALID(bLocal_23))
	{
		REMOVE_BLIP(bLocal_23);
	}
	Function_11();
	RELEASE_LAYOUT_REF(bLocal_5);
	if (Function_10(Local_6))
	{
		Function_2(Local_6);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x62 / 98
{
	Function_3(iParam0);
	return;
}

void Function_3(int iParam0) //Position: 0x6D / 109
{
	var uVar0;
	
	if (!Function_8(iParam0))
	{
		Function_6();
		return;
	}
	uVar0 = Function_4(iParam0);
	Global_13172[iParam011].f_4 = 0;
	return;
}

int Function_4(int iParam0) //Position: 0x91 / 145
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

bool Function_5(int iParam0) //Position: 0xAC / 172
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0xC3 / 195
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_7(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_7(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x30A / 778
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_8(int iParam0) //Position: 0x333 / 819
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	if (!Function_9(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_9(int iParam0) //Position: 0x357 / 855
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_10(int iParam0) //Position: 0x36C / 876
{
	if (!Function_8(iParam0))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_11() //Position: 0x38D / 909
{
	return;
}

void Function_12() //Position: 0x393 / 915
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	CAMERA_RESET(0);
	SATCHEL_SET_ENABLED(1);
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_15(), true);
	Function_14(1);
	if (!Function_13())
	{
		SET_POP_DENSITY_MULTIPLIER(1.0f);
	}
	SET_TIME_ACCELERATION(Global_63398);
	RESET_FACTIONS();
	HUD_ENABLE(1);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	return;
}

bool Function_13() //Position: 0x3E6 / 998
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_14(var uParam0) //Position: 0x3EF / 1007
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

var Function_15() //Position: 0x402 / 1026
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_16() //Position: 0x417 / 1047
{
	int iVar0;
	
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_39();
		return 0;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_39();
		return 0;
	}
	bLocal_2 = false;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			break;
		
		case 0x00000000:
			if (Function_36(Global_30668[1]))
			{
				iLocal_4 = Function_35(Local_6);
				if (Function_34())
				{
					if (iLocal_4 <= 20)
					{
						iLocal_4 = 20;
					}
				}
				else if (iLocal_4 <= 40)
				{
					iLocal_4 = 40;
				}
				if (Function_33(0) > IntToFloat(iLocal_4))
				{
					bLocal_3 = true;
				}
				else
				{
					iLocal_0 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_27(Global_30668[1], &Local_24 + 8, GET_PLAYER_ACTOR(0)) && Function_26(Global_30668[1], &Local_24 + 4))
			{
				Local_24 = Local_6;
				Function_25(&Local_24 + 8);
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					(*&Local_24 + 76)[iVar0] = iLocal_4 * 10;
					Function_24(Global_30668[1], iVar0);
					*(&Local_24 + 24[iVar03]) = { StackVal, StackVal, Function_24(Global_30668[1], iVar0) };
					iVar0++;
				}
				Function_23(Global_30668[1]);
				*(&Local_24 + 64) = { StackVal, StackVal, Function_23(Global_30668[1]) };
				if (Function_34())
				{
					Local_24.f_124 = 2;
					Local_24.f_120 = 15;
					Local_24.f_128 = 500;
				}
				else
				{
					Local_24.f_124 = 5;
					Local_24.f_120 = 25;
					Local_24.f_128 = 1000;
				}
				Function_22(Global_30668[1]);
				*(&Local_24 + 92) = { StackVal, StackVal, Function_22(Global_30668[1]) };
				Function_21(Global_30668[1]);
				*(&Local_24 + 104) = { StackVal, StackVal, Function_21(Global_30668[1]) };
				Local_24.f_116 = 0;
				Function_20(Local_24, 0);
				LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/BlackJack01/BlackJack01", &Local_24, 33, 0);
				iLocal_0 = 2;
			}
			else
			{
				bLocal_3 = true;
			}
			break;
		
		case 0x00000002:
			if (!Function_10(Local_6))
			{
				iLocal_0 = 101;
			}
			break;
		
		case 0x00000065:
			if (Function_19(Local_6, 0))
			{
				bLocal_2 = true;
			}
			else if (Function_18(Local_6))
			{
				bLocal_3 = true;
			}
			else
			{
				bLocal_3 = true;
			}
			break;
		
		default:
			return 0;
			break;
	}
	if (bLocal_2)
	{
		Function_17();
		return 0;
	}
	if (bLocal_3)
	{
		Function_39();
		return 0;
	}
	return 1;
}

void Function_17() //Position: 0x602 / 1538
{
	Function_1();
	return;
}

bool Function_18(int iParam0) //Position: 0x60B / 1547
{
	if (!Function_8(iParam0))
	{
		return 0;
	}
	if (StackVal == 5)
	{
		return 1;
	}
	return 0;
}

bool Function_19(int iParam0, bool bParam1) //Position: 0x62C / 1580
{
	if (!Function_8(iParam0))
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

void Function_20(int iParam0, int iParam1) //Position: 0x662 / 1634
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

vector3 Function_21(int iParam0) //Position: 0x67D / 1661
{
	if (iParam0 == Global_30693[0])
	{
		return 0.0f, 264.9963f, 0.0f;
	}
	if (iParam0 == Global_30658[1])
	{
		return 0.0f, 43.961f, 0.0f;
	}
	if (iParam0 == Global_30717[0])
	{
		return 0.0f, 270.264f, 0.0f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 0.0f, 239.6534f, 0.0f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_22(int iParam0) //Position: 0x6FD / 1789
{
	if (iParam0 == Global_30693[0])
	{
		return -2686.031f, 32.16603f, 4283.713f;
	}
	if (iParam0 == Global_30658[1])
	{
		return -3640.833f, 43.5787f, 2105.209f;
	}
	if (iParam0 == Global_30717[0])
	{
		return 719.21f, 79.273f, 1311.627f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 171.742f, 74.56f, 2223.706f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_23(int iParam0) //Position: 0x79D / 1949
{
	if (iParam0 == Global_30693[0])
	{
		return -2685.988f, 31.35322f, 4283.588f;
	}
	if (iParam0 == Global_30658[1])
	{
		return -3640.397f, 42.77086f, 2104.753f;
	}
	if (iParam0 == Global_30717[0])
	{
		return 719.2065f, 78.4736f, 1312.102f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 171.4703f, 73.74976f, 2224.109f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_24(int iParam0, int iParam1) //Position: 0x83D / 2109
{
	if (iParam0 == Global_30693[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2685.328f, 31.35269f, 4284.425f;
				break;
			
			case 0x00000001:
				return -2686.254f, 31.35269f, 4284.686f;
				break;
			
			case 0x00000002:
				return -2686.982f, 31.35269f, 4284.026f;
				break;
		}
	}
	else if (iParam0 == Global_30658[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -3640.897f, 42.76801f, 2104.235f;
				break;
			
			case 0x00000001:
				return -3640.023f, 42.76801f, 2104.636f;
				break;
			
			case 0x00000002:
				return -3639.895f, 42.76801f, 2105.61f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 719.9783f, 78.4736f, 1312.265f;
				break;
			
			case 0x00000001:
				return 719.0787f, 78.4736f, 1312.605f;
				break;
			
			case 0x00000002:
				return 718.2963f, 78.4736f, 1312.011f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 172.2084f, 73.75179f, 2224.902f;
				break;
			
			case 0x00000001:
				return 170.9445f, 73.75179f, 2224.73f;
				break;
			
			case 0x00000002:
				return 170.7396f, 73.74976f, 2223.559f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_25(int iParam0) //Position: 0x9E5 / 2533
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		bVar1 = (*iParam0)[iVar0];
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!AI_IGNORE_ACTOR(bVar1))
			{
				LOG_ERROR("AI_IGNORE_ACTOR failed");
			}
			SET_ACTOR_FACTION(bVar1, 1);
		}
		iVar0++;
	}
	return;
}

int Function_26(int iParam0, int iParam1) //Position: 0xA3A / 2618
{
	vector3 vVar0;
	bool bVar3;
	
	Function_23(iParam0);
	vVar0 = { StackVal, StackVal, Function_23(iParam0) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack_dealer", &vVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(bVar3))
	{
		if (GRINGO_IS_ACTIVATION_ALLOWED(bVar3))
		{
			*iParam1 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar3, "UseCase1"));
			if (!IS_ACTOR_VALID(*iParam1))
			{
				LOG_ERROR("No Dealer on dealing gringo");
				return 0;
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*iParam1, "Dealer"))
			{
				return 0;
			}
		}
		return 0;
	}
	LOG_ERROR("fake_blackjack_dealer is NOT valid");
	return 0;
	return 1;
}

int Function_27(var uParam0, var uParam1, int iParam2) //Position: 0xB30 / 2864
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9[3];
	bool bVar13;
	int iVar14;
	bool bVar15;
	
	bVar7 = -1.0f;
	iVar8 = 4294967295;
	bVar6 = false;
	while (bVar6 <= *uParam1)
	{
		Function_24(uParam0, bVar6);
		vVar3 = { StackVal, StackVal, Function_24(uParam0, bVar6) };
		bVar13 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack", &vVar3, 1.0f, 0);
		bVar9[bVar6] = bVar13;
		iVar14 = 0;
		while (iVar14 <= bVar6)
		{
			if (bVar9[iVar14] == bVar13)
			{
				bVar13 = "";
				return 0;
			}
			iVar14++;
		}
		if (IS_GRINGO_VALID(bVar13))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(bVar13))
			{
				(*uParam1)[bVar6] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar13, "UseCase1"));
				if (!IS_ACTOR_VALID((*uParam1)[bVar6]))
				{
					Function_32(iParam2, &vVar0);
					GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar13), &vVar3);
					bVar15 = VDIST(vVar0, vVar3);
					if (bVar7 != -1.0f || bVar15 > bVar7)
					{
						bVar7 = bVar15;
						iVar8 = bVar6;
					}
				}
				else if (IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[bVar6], "idle"))
				{
					PRINTSTRING("Found blackjack player in seat ");
					PRINTINT(bVar6);
					PRINTNL();
				}
				else
				{
					return 0;
				}
			}
			return 0;
		}
		LOG_ERROR("Fake_Liars_Dice is NOT valid");
		return 0;
		bVar6++;
	}
	if (iVar8 == 4294967295)
	{
		LOG_ERROR("No Human Seat Available");
		return 0;
	}
	(*uParam1)[iVar8] = iParam2;
	if (Function_28(iParam2, 1, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_28(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCEC / 3308
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_31(bParam0))
	{
		return 1;
	}
	if (Function_30(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(bParam0) && !bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 1;
	}
	if (Function_29())
	{
		return 1;
	}
	return 0;
}

bool Function_29() //Position: 0xDA2 / 3490
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_30(bool bParam0) //Position: 0xDB9 / 3513
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_31(bool bParam0) //Position: 0xDC4 / 3524
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_32(bool bParam0, int iParam1) //Position: 0xDD2 / 3538
{
	GET_POSITION(bParam0, iParam1);
	return;
}

float Function_33(int iParam0) //Position: 0xDDF / 3551
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

bool Function_34() //Position: 0xE18 / 3608
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_35(int iParam0) //Position: 0xE43 / 3651
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

bool Function_36(int iParam0) //Position: 0xE5D / 3677
{
	if (!Function_38(iParam0))
	{
		return 1;
	}
	return Function_37(&(Global_29008[iParam0]), 4);
}

int Function_37(var uParam0, int iParam1) //Position: 0xE79 / 3705
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_38(int iParam0) //Position: 0xE95 / 3733
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_39() //Position: 0xEAB / 3755
{
	Function_1();
	return;
}

void Function_40() //Position: 0xEB4 / 3764
{
	bLocal_5 = CREATE_LAYOUT(Function_50());
	Function_48(0, 1);
	Function_47();
	Function_41(&uLocal_13);
	Function_41(&iLocal_19);
	Function_41(&iLocal_16);
	iLocal_0 = 0;
	iLocal_1 = 0;
	if (!iLocal_1 != 0)
	{
		LOG_ERROR("m_goal is messed up");
	}
	return;
}

void Function_41(int iParam0) //Position: 0xF00 / 3840
{
	if (!Function_45(iParam0))
	{
		Function_42(iParam0, 0.0f);
	}
	return;
}

void Function_42(var uParam0, float fParam1) //Position: 0xF15 / 3861
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_44(uParam0, 1);
	Function_43(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_43(var uParam0, int iParam1) //Position: 0xF36 / 3894
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_44(var uParam0, int iParam1) //Position: 0xF49 / 3913
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_45(int iParam0) //Position: 0xF58 / 3928
{
	return Function_46(*iParam0, 1);
}

int Function_46(var uParam0, bool bParam1) //Position: 0xF65 / 3941
{
	return (uParam0 && bParam1) == 0;
}

void Function_47() //Position: 0xF72 / 3954
{
	return;
}

void Function_48(bool bParam0, bool bParam1) //Position: 0xF78 / 3960
{
	bool bVar0;
	
	SATCHEL_SET_ENABLED(0);
	bVar0 = Function_15();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(bVar0);
	Function_49(1);
	SET_ACTOR_POSTURE(bVar0, 0);
	FIRE_STOP_ALL_FIRES();
	if (bParam0)
	{
		ACTOR_START_FORCE_HOLSTER(bVar0, 0, 0);
	}
	else
	{
		ACTOR_END_FORCE_HOLSTER(bVar0);
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
		CANCEL_TIME_WARP(0);
	}
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	if (bParam1)
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	return;
}

void Function_49(var uParam0) //Position: 0xFCF / 4047
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_50() //Position: 0xFEC / 4076
{
	var uVar0;
	
	return uVar0;
}

