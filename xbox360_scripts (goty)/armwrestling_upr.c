//Decompiled with MagicRDR v1.0
//Function Count : 51
//Statics Count : 48
//Natives Count : 61
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
	int iLocal_24 = 0;
	var uLocal_25 = 3;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 2;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	struct<7> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	Local_6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_41();
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
	SET_ACTOR_UPDATE_PRIORITY(Function_15(), 1);
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
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_40();
		return 0;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_40();
		return 0;
	}
	bLocal_2 = false;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			break;
		
		case 0x00000000:
			if (Function_37(Global_30723[2]))
			{
				iLocal_4 = Function_36(Local_6);
				if (iLocal_4 <= 1)
				{
					iLocal_4 = 1;
				}
				if (Function_35(0) > IntToFloat(iLocal_4))
				{
					Function_31("ArmWrestling_NotEnoughMoney", 4.0f, 1, 2, 0, 0, 0, 0);
					bLocal_3 = true;
				}
				else
				{
					iLocal_0 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_25(Global_30723[2], &iLocal_24 + 4, &iLocal_24 + 20, &iLocal_24 + 24))
			{
				Function_24(&iLocal_24 + 4);
				Function_23(Global_30723[2]);
				*(&iLocal_24 + 40[03]) = { StackVal, StackVal, Function_23(Global_30723[2]) };
				Function_22(Global_30723[2]);
				*(&iLocal_24 + 40[13]) = { StackVal, StackVal, Function_22(Global_30723[2]) };
				Function_21(Global_30723[2]);
				*(&iLocal_24 + 28) = { StackVal, StackVal, Function_21(Global_30723[2]) };
				iLocal_24 = Local_6;
				Function_20(Local_6, 0);
				LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/ArmWrestling/ArmWrestling", &iLocal_24, 17, 0);
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
		Function_40();
		return 0;
	}
	return 1;
}

void Function_17() //Position: 0x5AD / 1453
{
	Function_1();
	return;
}

bool Function_18(int iParam0) //Position: 0x5B6 / 1462
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

bool Function_19(int iParam0, bool bParam1) //Position: 0x5D7 / 1495
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

void Function_20(int iParam0, int iParam1) //Position: 0x60D / 1549
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

vector3 Function_21(int iParam0) //Position: 0x628 / 1576
{
	if (iParam0 == Global_30693[2])
	{
		return -1471.355f, 17.35498f, 3948.152f;
	}
	if (iParam0 == Global_30679[0])
	{
		return -3143.715f, 43.97864f, 3720.561f;
	}
	if (iParam0 == Global_30707[0])
	{
		return -466.3501f, 21.78646f, 3882.198f;
	}
	if (iParam0 == Global_30723[2])
	{
		return -262.8833f, 85.92777f, 2119.187f;
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_22(int iParam0) //Position: 0x6D3 / 1747
{
	if (iParam0 == Global_30693[2])
	{
		return -1471.656f, 16.56962f, 3948.088f;
	}
	if (iParam0 == Global_30679[0])
	{
		return -3143.743f, 43.17878f, 3720.288f;
	}
	if (iParam0 == Global_30707[0])
	{
		return -466.16f, 20.97986f, 3881.796f;
	}
	if (iParam0 == Global_30723[2])
	{
		return -262.9332f, 85.11941f, 2118.893f;
	}
	LOG_ERROR("Returning invalid arm wrestling player seat");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_23(int iParam0) //Position: 0x782 / 1922
{
	if (iParam0 == Global_30693[2])
	{
		return -1471.104f, 16.52992f, 3948.271f;
	}
	if (iParam0 == Global_30679[0])
	{
		return -3143.721f, 43.17878f, 3720.842f;
	}
	if (iParam0 == Global_30707[0])
	{
		return -466.5623f, 20.97986f, 3882.657f;
	}
	if (iParam0 == Global_30723[2])
	{
		return -262.932f, 85.11941f, 2119.438f;
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return 0.0f, 0.0f, 0.0f;
}

void Function_24(int iParam0) //Position: 0x82D / 2093
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

bool Function_25(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x882 / 2178
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	bool bVar9;
	
	Function_23(uParam0);
	vVar0 = { StackVal, StackVal, Function_23(uParam0) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_arm_wrestling", &vVar0, 1.0f, 0);
	(*uParam1)[0] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar3, "UseCase1"));
	if (!IS_ACTOR_VALID((*uParam1)[0]))
	{
		return 0;
	}
	iVar4 = 1;
	iVar5 = 0;
	while (iVar5 <= 2)
	{
		Function_30(uParam0, iVar5);
		vVar0 = { StackVal, StackVal, Function_30(uParam0, iVar5) };
		bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/arm_wrestling_spectate", &vVar0, 0.1f, 0);
		if (!IS_GRINGO_VALID(bVar3))
		{
			bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate", &vVar0, 0.1f, 0);
		}
		if (!IS_GRINGO_VALID(bVar3))
		{
			bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_B", &vVar0, 0.1f, 0);
		}
		if (!IS_GRINGO_VALID(bVar3))
		{
			bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_C", &vVar0, 0.1f, 0);
		}
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar3, "UseCase1"))))
		{
			(*uParam1)[iVar4] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar3, "UseCase1"));
			iVar4++;
		}
		iVar5++;
	}
	*uParam3 = iVar4;
	Function_22(uParam0);
	vVar6 = { StackVal, StackVal, Function_22(uParam0) };
	bVar9 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_arm_wrestling", &vVar6, 1.0f, 0);
	*uParam2 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar9, "UseCase1"));
	if (IS_ACTOR_VALID(*uParam2))
	{
		return 0;
	}
	*uParam2 = GET_PLAYER_ACTOR(0);
	if (Function_26(*uParam2, 1, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_26(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB4F / 2895
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
	if (Function_29(bParam0))
	{
		return 1;
	}
	if (Function_28(bParam0))
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
	if (Function_27())
	{
		return 1;
	}
	return 0;
}

bool Function_27() //Position: 0xC05 / 3077
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_28(int iParam0) //Position: 0xC1C / 3100
{
	return IS_ACTOR_IN_HOGTIE(iParam0);
}

bool Function_29(int iParam0) //Position: 0xC27 / 3111
{
	return IS_ACTOR_VALID(GET_LASSO_USER(iParam0));
}

vector3 Function_30(int iParam0, bool bParam1) //Position: 0xC35 / 3125
{
	if (iParam0 == Global_30693[2])
	{
		if (bParam1 == 0)
		{
			return -1470.917f, 16.54662f, 3950.254f;
		}
		if (bParam1 == 1)
		{
			return -1473.098f, 16.54662f, 3949.357f;
		}
	}
	if (iParam0 == Global_30679[0])
	{
		if (bParam1 == 0)
		{
			return -3145.761f, 43.17878f, 3722.624f;
		}
		if (bParam1 == 1)
		{
			return -3145.761f, 43.17878f, 3718.675f;
		}
	}
	if (iParam0 == Global_30707[0])
	{
		if (bParam1 == 0)
		{
			return -467.4124f, 20.97995f, 3884.092f;
		}
		if (bParam1 == 1)
		{
			return -465.9765f, 20.97995f, 3884.092f;
		}
	}
	if (iParam0 == Global_30723[2])
	{
		if (bParam1 == 0)
		{
			return -264.6337f, 85.11941f, 2120.304f;
		}
		if (bParam1 == 1)
		{
			return -264.6337f, 85.11941f, 2118.317f;
		}
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return 0.0f, 0.0f, 0.0f;
}

void Function_31(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xD5C / 3420
{
	struct<4> Var0;
	var uVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_32(Global_6269) };
		}
		PRINT_OBJECTIVE_B(uParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(uParam0, iParam1, iParam7, iParam3, iParam2, uVar4, iParam5, iParam6);
	}
}

struct<16> Function_32(int iParam0) //Position: 0xDE1 / 3553
{
	char* cVar0[16];
	
	if (!Function_33())
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

bool Function_33() //Position: 0xE20 / 3616
{
	if (Function_34(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_34(var uParam0, int iParam1) //Position: 0xE3B / 3643
{
	return (uParam0 && iParam1) == 0;
}

float Function_35(int iParam0) //Position: 0xE48 / 3656
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_36(int iParam0) //Position: 0xE81 / 3713
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

bool Function_37(int iParam0) //Position: 0xE9B / 3739
{
	if (!Function_39(iParam0))
	{
		return 1;
	}
	return Function_38(&(Global_29008[iParam0]), 4);
}

int Function_38(var uParam0, int iParam1) //Position: 0xEB7 / 3767
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_39(int iParam0) //Position: 0xED3 / 3795
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_40() //Position: 0xEE9 / 3817
{
	Function_1();
	return;
}

void Function_41() //Position: 0xEF2 / 3826
{
	bLocal_5 = CREATE_LAYOUT(Function_50());
	Function_48(0, 1);
	Function_47();
	Function_42(&uLocal_13);
	Function_42(&iLocal_19);
	Function_42(&iLocal_16);
	iLocal_0 = 0;
	iLocal_1 = 0;
	if (!iLocal_1 != 0)
	{
		LOG_ERROR("m_goal is messed up");
	}
	return;
}

void Function_42(int iParam0) //Position: 0xF3E / 3902
{
	if (!Function_46(iParam0))
	{
		Function_43(iParam0, 0.0f);
	}
	return;
}

void Function_43(var uParam0, float fParam1) //Position: 0xF53 / 3923
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_45(uParam0, 1);
	Function_44(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_44(var uParam0, int iParam1) //Position: 0xF74 / 3956
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_45(var uParam0, int iParam1) //Position: 0xF87 / 3975
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_46(var uParam0) //Position: 0xF96 / 3990
{
	return Function_34(*uParam0, 1);
}

void Function_47() //Position: 0xFA3 / 4003
{
	return;
}

void Function_48(bool bParam0, bool bParam1) //Position: 0xFA9 / 4009
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
	SET_ACTOR_UPDATE_PRIORITY(bVar0, 0);
	if (bParam1)
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	return;
}

void Function_49(var uParam0) //Position: 0x1000 / 4096
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_50() //Position: 0x101D / 4125
{
	var uVar0;
	
	return uVar0;
}

