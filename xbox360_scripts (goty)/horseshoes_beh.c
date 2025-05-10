//Decompiled with MagicRDR v1.0
//Function Count : 51
//Statics Count : 50
//Natives Count : 64
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
	struct<57> Local_24 = { 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	Local_6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_41();
	while (Function_16())
	{
		WAIT(false);
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

void Function_7(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x30A / 778
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
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
	HUD_ENABLE(true);
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
			if (Function_37(Global_30717[1]))
			{
				iLocal_4 = Function_36(Local_6);
				if (iLocal_4 <= 10)
				{
					iLocal_4 = 20;
				}
				if (Function_34() <= iLocal_4)
				{
					Function_30("HorseShoes_NotEnoughMoney", 4.0f, 1, 2, 0, 0, 0, 0);
					bLocal_3 = true;
				}
				else
				{
					iLocal_0 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_23(Global_30717[1], &Local_24 + 4, &Local_24 + 68, &Local_24 + 72, &Local_24 + 60, &Local_24 + 64))
			{
				Function_22(&Local_24 + 4);
				Function_21(Global_30717[1], 0);
				*(&Local_24 + 16[03]) = { StackVal, StackVal, Function_21(Global_30717[1], 0) };
				Function_21(Global_30717[1], 1);
				*(&Local_24 + 16[13]) = { StackVal, StackVal, Function_21(Global_30717[1], 1) };
				Local_24 = Local_6;
				Local_24.f_52 = 1;
				Local_24.f_56 = 10;
				Function_20(Local_6, 0);
				Local_24.f_44 = CREATE_VOLUME_IN_LAYOUT(bLocal_5, "StayOutVol", 2, -128.2977f, 119.888f, 1359.531f, 0.0f, 19.83413f, 0.0f, 8.22709f, 3.373459f, 21.7038f);
				LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/HorseShoes/HorseShoes", &Local_24, 19, 0);
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

void Function_17() //Position: 0x5E8 / 1512
{
	Function_1();
	return;
}

bool Function_18(int iParam0) //Position: 0x5F1 / 1521
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

bool Function_19(int iParam0, bool bParam1) //Position: 0x612 / 1554
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

void Function_20(int iParam0, int iParam1) //Position: 0x648 / 1608
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

vector3 Function_21(int iParam0, int iParam1) //Position: 0x663 / 1635
{
	if (iParam0 == Global_30668[0])
	{
		if (iParam1 == 0)
		{
			return -814.7653f, 92.42311f, 2349.54f;
		}
		if (iParam1 == 1)
		{
			return -826.3705f, 92.42308f, 2349.554f;
		}
	}
	if (iParam0 == Global_30658[1])
	{
		if (iParam1 == 0)
		{
			return -3658.267f, 42.30708f, 2130.832f;
		}
		if (iParam1 == 1)
		{
			return -3666.576f, 42.22883f, 2138.933f;
		}
	}
	if (iParam0 == Global_30693[1])
	{
		if (iParam1 == 0)
		{
			return -1709.755f, 8.09067f, 4259.434f;
		}
		if (iParam1 == 1)
		{
			return -1721.357f, 8.09067f, 4259.287f;
		}
	}
	if (iParam0 == Global_30717[1])
	{
		if (iParam1 == 0)
		{
			return -129.9156f, 118.8637f, 1354.525f;
		}
		if (iParam1 == 1)
		{
			return -126.0861f, 118.8626f, 1365.479f;
		}
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return 0.0f, 0.0f, 0.0f;
}

void Function_22(bool bParam0) //Position: 0x78F / 1935
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= *bParam0)
	{
		bVar1 = (*bParam0)[iVar0];
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

bool Function_23(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x7E4 / 2020
{
	vector3 vVar0;
	int iVar3;
	
	Function_29(iParam0, 0);
	vVar0 = { StackVal, StackVal, Function_29(iParam0, 0) };
	*uParam2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_horseshoe", &vVar0, 1.0f, 0);
	Function_29(iParam0, 1);
	vVar0 = { StackVal, StackVal, Function_29(iParam0, 1) };
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_horseshoe", &vVar0, 1.0f, 0);
	Function_29(iParam0, 0);
	Function_29(iParam0, 1);
	if (StackVal > Function_28(StackVal, StackVal, StackVal, Function_28(StackVal, StackVal, StackVal, StackVal, Global_34574, Function_29(iParam0, 0)), Global_34574, Function_29(iParam0, 1)))
	{
		iVar3 = 0;
		*uParam4 = 1;
		*uParam5 = 0;
	}
	else
	{
		iVar3 = 1;
		*uParam4 = 2;
		*uParam5 = 3;
	}
	if (iVar3 == 0)
	{
		(*uParam1)[0] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(*uParam2, "UseCase1"));
	}
	else
	{
		(*uParam1)[0] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(*uParam3, "UseCase1"));
	}
	(*uParam1)[1] = GET_PLAYER_ACTOR(0);
	if (IS_ACTOR_VALID((*uParam1)[0]) && IS_ACTOR_VALID((*uParam1)[1]))
	{
		if (Function_24(Global_34573, 1, 1))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_24(bool bParam0, bool bParam1, bool bParam2) //Position: 0x931 / 2353
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
	if (Function_27(bParam0))
	{
		return 1;
	}
	if (Function_26(bParam0))
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
	if (Function_25())
	{
		return 1;
	}
	return 0;
}

bool Function_25() //Position: 0x9E7 / 2535
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_26(bool bParam0) //Position: 0x9FE / 2558
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_27(bool bParam0) //Position: 0xA09 / 2569
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

float Function_28(vector3 vParam0, vector3 vParam3) //Position: 0xA17 / 2583
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_29(int iParam0, bool bParam1) //Position: 0xA34 / 2612
{
	if (iParam0 == Global_30668[0])
	{
		if (bParam1 == 0)
		{
			return -814.7646f, 92.42929f, 2350.04f;
		}
		return -826.37f, 92.361f, 2350.054f;
	}
	if (iParam0 == Global_30658[1])
	{
		if (bParam1 == 0)
		{
			return -3657.917f, 42.30736f, 2131.19f;
		}
		return -3666.223f, 42.223f, 2139.29f;
	}
	if (iParam0 == Global_30693[1])
	{
		if (bParam1 == 0)
		{
			return -1709.76f, 8.09067f, 4259.935f;
		}
		return -1721.364f, 8.09067f, 4259.787f;
	}
	if (iParam0 == Global_30717[1])
	{
		LOG_ERROR("Horseshoes beecher's hope has been cut");
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return 0.0f, 0.0f, 0.0f;
}

void Function_30(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xB4B / 2891
{
	struct<4> Var0;
	int iVar4;
	
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
			Var0 = { StackVal, StackVal, StackVal, Function_31(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

struct<16> Function_31(int iParam0) //Position: 0xBD0 / 3024
{
	char* cVar0[16];
	
	if (!Function_32())
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

bool Function_32() //Position: 0xC0F / 3087
{
	if (Function_33(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_33(var uParam0, bool bParam1) //Position: 0xC2A / 3114
{
	return (uParam0 && bParam1) == 0;
}

int Function_34() //Position: 0xC37 / 3127
{
	return Function_35(0);
}

int Function_35(int iParam0) //Position: 0xC41 / 3137
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

var Function_36(int iParam0) //Position: 0xC82 / 3202
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

bool Function_37(int iParam0) //Position: 0xC9C / 3228
{
	if (!Function_39(iParam0))
	{
		return 1;
	}
	return Function_38(&(Global_29008[iParam0]), 4);
}

int Function_38(var uParam0, int iParam1) //Position: 0xCB8 / 3256
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_39(int iParam0) //Position: 0xCD4 / 3284
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_40() //Position: 0xCEA / 3306
{
	Function_1();
	return;
}

void Function_41() //Position: 0xCF3 / 3315
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

void Function_42(int iParam0) //Position: 0xD3F / 3391
{
	if (!Function_46(iParam0))
	{
		Function_43(iParam0, 0.0f);
	}
	return;
}

void Function_43(var uParam0, float fParam1) //Position: 0xD54 / 3412
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_45(uParam0, 1);
	Function_44(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_44(var uParam0, int iParam1) //Position: 0xD75 / 3445
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_45(var uParam0, int iParam1) //Position: 0xD88 / 3464
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_46(var uParam0) //Position: 0xD97 / 3479
{
	return Function_33(*uParam0, 1);
}

void Function_47() //Position: 0xDA4 / 3492
{
	return;
}

void Function_48(bool bParam0, bool bParam1) //Position: 0xDAA / 3498
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

void Function_49(var uParam0) //Position: 0xE01 / 3585
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_50() //Position: 0xE1E / 3614
{
	var uVar0;
	
	return uVar0;
}

