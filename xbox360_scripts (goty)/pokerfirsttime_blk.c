//Decompiled with MagicRDR v1.0
//Function Count : 50
//Statics Count : 152
//Natives Count : 67
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	struct<221> Local_4 = { 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	Local_75 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_36();
	while (Function_17())
	{
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x21 / 33
{
	Function_13();
	if (IS_ACTOR_VALID(bLocal_91))
	{
		SET_INDICATOR_DRAW(bLocal_91, 0);
		RELEASE_ACTOR(bLocal_91);
	}
	if (IS_BLIP_VALID(bLocal_92))
	{
		REMOVE_BLIP(bLocal_92);
	}
	Function_12();
	Function_10();
	RELEASE_LAYOUT_REF(bLocal_74);
	Function_2(Local_75);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x5D / 93
{
	Function_3(iParam0);
	return;
}

void Function_3(int iParam0) //Position: 0x68 / 104
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

int Function_4(int iParam0) //Position: 0x8C / 140
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

bool Function_5(int iParam0) //Position: 0xA7 / 167
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0xBE / 190
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

void Function_7(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x305 / 773
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_8(int iParam0) //Position: 0x32E / 814
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

bool Function_9(int iParam0) //Position: 0x352 / 850
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_10() //Position: 0x367 / 871
{
	Function_11();
	return;
}

void Function_11() //Position: 0x370 / 880
{
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_12() //Position: 0x37B / 891
{
	return;
}

void Function_13() //Position: 0x381 / 897
{
	SET_PLAYER_CONTROL(false, 1, 0, 0);
	CAMERA_RESET(0);
	SATCHEL_SET_ENABLED(1);
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_16(), true);
	Function_15(1);
	if (!Function_14())
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

bool Function_14() //Position: 0x3D4 / 980
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_15(var uParam0) //Position: 0x3DD / 989
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

var Function_16() //Position: 0x3F0 / 1008
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_17() //Position: 0x405 / 1029
{
	int iVar0;
	
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_35();
		return 0;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_35();
		return 0;
	}
	bLocal_2 = false;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			break;
		
		case 0x00000000:
			iLocal_73 = Function_34(Local_75);
			if (iLocal_73 < 0)
			{
				iLocal_73 = 20;
			}
			if (Function_33(0) > IntToFloat(iLocal_73))
			{
				bLocal_3 = true;
			}
			else
			{
				iLocal_0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_26(Global_30717[0], &Local_93 + 12, GET_PLAYER_ACTOR(0), 1, 0))
			{
				Function_25(Global_30717[0], 0);
				*(&Local_93 + 148) = { StackVal, StackVal, Function_25(Global_30717[0], 0) };
				Function_24(&Local_93 + 12);
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					(*&Local_93 + 40)[iVar0] = iLocal_73 * 10;
					Function_23(Global_30717[0], iVar0, 0);
					*(&Local_93 + 72[iVar03]) = { StackVal, StackVal, Function_23(Global_30717[0], iVar0, 0) };
					iVar0++;
				}
				Local_93.f_164 = 1;
				Local_93.f_168 = 2;
				Local_93.f_160 = 0;
				Local_93.f_8 = Local_75;
				Function_22(Local_75, 0);
				LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Poker01/Poker01", &Local_93, 52, 0);
				iLocal_0 = 2;
			}
			else
			{
				bLocal_3 = true;
			}
			break;
		
		case 0x00000002:
			if (!Function_21(Local_75))
			{
				iLocal_0 = 101;
			}
			break;
		
		case 0x00000065:
			if (Function_20(Local_75, 0))
			{
				bLocal_2 = true;
			}
			else if (Function_19(Local_75))
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
		Function_18();
		return 0;
	}
	if (bLocal_3)
	{
		Function_35();
		return 0;
	}
	return 1;
}

void Function_18() //Position: 0x57E / 1406
{
	Function_1();
	return;
}

bool Function_19(int iParam0) //Position: 0x587 / 1415
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

bool Function_20(int iParam0, bool bParam1) //Position: 0x5A8 / 1448
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

bool Function_21(int iParam0) //Position: 0x5DE / 1502
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

void Function_22(int iParam0, int iParam1) //Position: 0x5FF / 1535
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

vector3 Function_23(int iParam0, int iParam1, bool bParam2) //Position: 0x61A / 1562
{
	if (iParam0 == Global_30668[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -801.0966f, 92.75807f, 2375.792f;
				break;
			
			case 0x00000001:
				return -801.4974f, 92.75435f, 2375.295f;
				break;
			
			case 0x00000002:
				return -801.2829f, 92.75435f, 2374.737f;
				break;
			
			case 0x00000003:
				return -800.724f, 92.76255f, 2374.656f;
				break;
			
			case 0x00000004:
				return -800.3233f, 92.75678f, 2375.122f;
				break;
			
			case 0x00000005:
				return -800.5463f, 92.75435f, 2375.677f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 164.353f, 73.75671f, 2230.925f;
				break;
			
			case 0x00000001:
				return 164.5807f, 73.82056f, 2231.472f;
				break;
			
			case 0x00000002:
				return 164.2043f, 73.75299f, 2231.971f;
				break;
			
			case 0x00000003:
				return 163.6548f, 73.76118f, 2231.889f;
				break;
			
			case 0x00000004:
				return 163.4103f, 73.76118f, 2231.366f;
				break;
			
			case 0x00000005:
				return 163.7511f, 73.75671f, 2230.869f;
				break;
		}
	}
	else if (iParam0 == Global_30640[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2157.424f, 16.88292f, 2596.033f;
				break;
			
			case 0x00000001:
				return -2158.012f, 16.94059f, 2595.997f;
				break;
			
			case 0x00000002:
				return -2158.228f, 16.87845f, 2595.416f;
				break;
			
			case 0x00000003:
				return -2157.847f, 16.87845f, 2594.96f;
				break;
			
			case 0x00000004:
				return -2157.261f, 16.87845f, 2595.042f;
				break;
			
			case 0x00000005:
				return -2157.04f, 16.87845f, 2595.596f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return 748.5359f, 82.6927f, 1267.343f;
					break;
				
				case 0x00000001:
					return 749.138f, 82.6927f, 1266.645f;
					break;
				
				case 0x00000002:
					return 750.045f, 82.6927f, 1266.796f;
					break;
				
				case 0x00000003:
					return 750.0344f, 82.6917f, 1267.552f;
					break;
				
				case 0x00000004:
					return 749.7606f, 82.6927f, 1268.372f;
					break;
				
				case 0x00000005:
					return 748.8501f, 82.6927f, 1268.207f;
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return 717.6248f, 78.47099f, 1325.972f;
					break;
				
				case 0x00000001:
					return 717.0453f, 78.47099f, 1325.919f;
					break;
				
				case 0x00000002:
					return 716.8008f, 78.47099f, 1325.396f;
					break;
				
				case 0x00000003:
					return 717.1418f, 78.47099f, 1324.928f;
					break;
				
				case 0x00000004:
					return 717.7181f, 78.47099f, 1324.969f;
					break;
				
				case 0x00000005:
					return 717.9684f, 78.47099f, 1325.495f;
					break;
				}
		}
	}
	else if (iParam0 == Global_30717[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -138.6693f, 119.2419f, 1344.049f;
				break;
			
			case 0x00000001:
				return -139.2573f, 119.2419f, 1343.961f;
				break;
			
			case 0x00000002:
				return -139.4945f, 119.2419f, 1343.419f;
				break;
			
			case 0x00000003:
				return -139.1212f, 119.2419f, 1342.946f;
				break;
			
			case 0x00000004:
				return -138.5368f, 119.2419f, 1343.024f;
				break;
			
			case 0x00000005:
				return -138.2953f, 119.2419f, 1343.58f;
				break;
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2701.487f, 31.151f, 4278.554f;
				break;
			
			case 0x00000001:
				return -2701.713f, 31.151f, 4277.994f;
				break;
			
			case 0x00000002:
				return -2701.347f, 31.151f, 4277.538f;
				break;
			
			case 0x00000003:
				return -2700.726f, 31.151f, 4277.604f;
				break;
			
			case 0x00000004:
				return -2700.508f, 31.151f, 4278.2f;
				break;
			
			case 0x00000005:
				return -2700.919f, 31.151f, 4278.653f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -795.5794f, 13.16767f, 3699.937f;
				break;
			
			case 0x00000001:
				return -795.8744f, 13.16057f, 3699.083f;
				break;
			
			case 0x00000002:
				return -794.9905f, 13.16057f, 3698.687f;
				break;
			
			case 0x00000003:
				return -794.196f, 13.16057f, 3699.235f;
				break;
			
			case 0x00000004:
				return -794.2787f, 13.16057f, 3700.203f;
				break;
			
			case 0x00000005:
				return -795.169f, 13.16057f, 3700.608f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_24(int iParam0) //Position: 0xB94 / 2964
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

vector3 Function_25(int iParam0, bool bParam1) //Position: 0xBE9 / 3049
{
	if (iParam0 == Global_30668[0])
	{
		return -800.8856f, 93.555f, 2375.189f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 163.9887f, 74.554f, 2231.428f;
	}
	if (iParam0 == Global_30640[0])
	{
		return -2157.657f, 17.677f, 2595.523f;
	}
	if (iParam0 == Global_30717[0])
	{
		if (bParam1)
		{
			return 749.4575f, 83.482f, 1267.537f;
		}
		return 717.378f, 79.274f, 1325.464f;
	}
	if (iParam0 == Global_30717[1])
	{
		return -138.8952f, 120.019f, 1343.499f;
	}
	if (iParam0 == Global_30693[0])
	{
		return -2701.129f, 31.949f, 4278.085f;
	}
	if (iParam0 == Global_30707[2])
	{
		return -795.0887f, 13.958f, 3699.661f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_26(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xCFB / 3323
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	int iVar10;
	bool bVar11[6];
	bool bVar18;
	int iVar19;
	bool bVar20;
	
	bVar7 = -1.0f;
	iVar8 = 4294967295;
	fVar9 = GET_CURRENT_GAME_TIME();
	iVar10 = 0;
	iVar6 = 0;
	while (iVar6 <= 6)
	{
		Function_23(iParam0, iVar6, bParam4);
		bVar18 = Function_32(StackVal, StackVal, Function_23(iParam0, iVar6, bParam4));
		while ((!IS_GRINGO_VALID(bVar18) && !IS_EXITFLAG_SET()) && GET_CURRENT_GAME_TIME() > (fVar9 + 5.0f))
		{
			Function_23(iParam0, iVar6, bParam4);
			bVar18 = Function_32(StackVal, StackVal, Function_23(iParam0, iVar6, bParam4));
			WAIT(false);
		}
		bVar11[iVar6] = bVar18;
		iVar19 = 0;
		while (iVar19 <= iVar6)
		{
			if (bVar11[iVar19] == bVar18)
			{
				bVar18 = "";
				return 0;
			}
			iVar19++;
		}
		if (IS_GRINGO_VALID(bVar18))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(bVar18))
			{
				(*uParam1)[iVar6] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar18, "UseCase1"));
				if (!IS_ACTOR_VALID((*uParam1)[iVar6]))
				{
					Function_31(uParam2, &vVar0);
					GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar18), &vVar3);
					bVar20 = VDIST(vVar0, vVar3);
					if (bVar7 != -1.0f || bVar20 > bVar7)
					{
						bVar7 = bVar20;
						iVar8 = iVar6;
					}
				}
				else if (((IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[iVar6], "ncard_idle") || IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[iVar6], "look_at_cards")) || IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[iVar6], "look_up")) || !bParam3)
				{
					iVar10++;
				}
				else if (bParam3)
				{
					return 0;
				}
			}
			return 0;
		}
		LOG_ERROR("Fake_Poker is NOT valid");
		iVar6++;
	}
	if (iVar10 == 0)
	{
		LOG_ERROR("iAIPlayerCount is ZERO");
		return 0;
	}
	if (iVar8 == 4294967295)
	{
		LOG_ERROR("No Human Seat Available");
		return 0;
	}
	(*uParam1)[iVar8] = uParam2;
	if (Function_27(uParam2, 1, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_27(bool bParam0, bool bParam1, bool bParam2) //Position: 0xEEA / 3818
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(false))
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
	if (Function_30(bParam0))
	{
		return 1;
	}
	if (Function_29(bParam0))
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
	if (Function_28())
	{
		return 1;
	}
	return 0;
}

bool Function_28() //Position: 0xFA0 / 4000
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_29(bool bParam0) //Position: 0xFB7 / 4023
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_30(bool bParam0) //Position: 0xFC2 / 4034
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_31(bool bParam0, bool bParam1) //Position: 0xFD0 / 4048
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_32(var uParam0, var uParam1, int iParam2) //Position: 0xFDD / 4061
{
	return LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_poker", &uParam0, 1.0f, 0);
}

float Function_33(int iParam0) //Position: 0x101F / 4127
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_34(int iParam0) //Position: 0x1058 / 4184
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

void Function_35() //Position: 0x1072 / 4210
{
	Function_1();
	return;
}

void Function_36() //Position: 0x107B / 4219
{
	bLocal_74 = CREATE_LAYOUT(Function_49());
	Function_47(0, 1);
	Function_44();
	Function_43();
	Function_37(&uLocal_82);
	Function_37(&iLocal_88);
	Function_37(&iLocal_85);
	iLocal_0 = 0;
	iLocal_1 = 0;
	if (!iLocal_1 != 0)
	{
		LOG_ERROR("m_goal is messed up");
	}
	return;
}

void Function_37(int iParam0) //Position: 0x10CA / 4298
{
	if (!Function_41(iParam0))
	{
		Function_38(iParam0, 0.0f);
	}
	return;
}

void Function_38(var uParam0, float fParam1) //Position: 0x10DF / 4319
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_40(uParam0, 1);
	Function_39(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_39(var uParam0, int iParam1) //Position: 0x1100 / 4352
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_40(var uParam0, int iParam1) //Position: 0x1113 / 4371
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_41(int iParam0) //Position: 0x1122 / 4386
{
	return Function_42(*iParam0, 1);
}

int Function_42(var uParam0, bool bParam1) //Position: 0x112F / 4399
{
	return (uParam0 && bParam1) == 0;
}

void Function_43() //Position: 0x113C / 4412
{
	return;
}

void Function_44() //Position: 0x1142 / 4418
{
	Function_45();
	return;
}

void Function_45() //Position: 0x114B / 4427
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
	
	Function_46(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Poker_BLK_layout");
	Local_4.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayableSpace", 2, 854.8467f, 78.99314f, 1281.728f, 0.0f, -33.07299f, 0.0f, 4.807904f, 3.53227f, 6.156056f);
	Local_4.f_8 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene_1Set", Local_4, 8, 0);
	*(&Local_4 + 12[06]) = { 856.8768f, 77.52f, 1283.041f };
	*(&Local_4 + 12[06] + 12) = { 0.0f, 60.64319f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerPosition", 856.8768f, 77.52f, 1283.041f, 0.0f, 60.64319f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar1);
	*(&Local_4 + 12[16]) = { 854.4354f, 77.52193f, 1284.053f };
	*(&Local_4 + 12[16] + 12) = { 0.0f, -4.489308f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "AI_0_Position", 854.4354f, 77.52193f, 1284.053f, 0.0f, -4.489308f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar2);
	*(&Local_4 + 12[26]) = { 857.2482f, 77.52f, 1281.733f };
	*(&Local_4 + 12[26] + 12) = { 0.0f, 444.1363f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "AI_1_Position", 857.2482f, 77.52f, 1281.733f, 0.0f, 444.1363f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar3);
	*(&Local_4 + 12[36]) = { 856.4229f, 77.52234f, 1280.632f };
	*(&Local_4 + 12[36] + 12) = { 0.0f, 110.3671f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "AI_2_Position", 856.4229f, 77.52234f, 1280.632f, 0.0f, 110.3671f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar4);
	*(&Local_4 + 12[46]) = { 853.1198f, 77.52234f, 1280.618f };
	*(&Local_4 + 12[46] + 12) = { 0.0f, 224.0751f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "AI_3_Position", 853.1198f, 77.52234f, 1280.618f, 0.0f, 224.0751f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, bVar5);
	*(&Local_4 + 136) = { 855.1326f, 78.3239f, 1281.816f };
	*(&Local_4 + 136 + 12) = { 0.0f, 192.4619f, 0.0f };
	Local_4.f_160 = CREATE_POINT_IN_LAYOUT(Local_4, "TableCenter", 855.1326f, 78.3239f, 1281.816f, 0.0f, 192.4619f, 0.0f);
	Local_4.f_164 = CREATE_OBJECTSET_IN_LAYOUT("Waitress_PositionsSet", Local_4, 8, 0);
	*(&Local_4 + 168[06]) = { 856.4048f, 77.51955f, 1286.333f };
	*(&Local_4 + 168[06] + 12) = { 0.0f, -159.0592f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "Waitress_0_Pos", 856.4048f, 77.51955f, 1286.333f, 0.0f, -159.0592f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_164);
	*(&Local_4 + 168[16]) = { 855.2977f, 77.51955f, 1286.333f };
	*(&Local_4 + 168[16] + 12) = { 0.0f, -124.4389f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "Waitress_1_Pos", 855.2977f, 77.51955f, 1286.333f, 0.0f, -124.4389f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_164);
	Local_4.f_220 = CREATE_OBJECTSET_IN_LAYOUT("DuelerPositionsSet", Local_4, 8, 0);
	*(&Local_4 + 224[06]) = { 857.9119f, 77.51955f, 1286.135f };
	*(&Local_4 + 224[06] + 12) = { 0.0f, 5.508229f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "Dueler_0", 857.9119f, 77.51955f, 1286.135f, 0.0f, 5.508229f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_4.f_220);
	*(&Local_4 + 224[16]) = { 857.5084f, 77.51955f, 1279.553f };
	*(&Local_4 + 224[16] + 12) = { 0.0f, 181.6365f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "Dueler_1", 857.5084f, 77.51955f, 1279.553f, 0.0f, 181.6365f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_4.f_220);
	return;
}

void Function_46(int iParam0, int iParam1) //Position: 0x15C5 / 5573
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

void Function_47(bool bParam0, bool bParam1) //Position: 0x160E / 5646
{
	bool bVar0;
	
	SATCHEL_SET_ENABLED(0);
	bVar0 = Function_16();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(bVar0);
	Function_48(1);
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
	if (IS_PLAYER_DEADEYE(false))
	{
		CANCEL_DEADEYE();
		CANCEL_TIME_WARP(0);
	}
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	if (bParam1)
	{
		SET_PLAYER_CONTROL(false, 0, 0, 0);
	}
	return;
}

void Function_48(var uParam0) //Position: 0x1665 / 5733
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_49() //Position: 0x1682 / 5762
{
	var uVar0;
	
	return uVar0;
}

