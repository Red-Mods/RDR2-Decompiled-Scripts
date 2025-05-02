//Decompiled with MagicRDR v1.0
//Function Count : 53
//Statics Count : 121
//Natives Count : 66
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	struct<6> Local_7 = { 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	struct<253> Local_35 = { 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	Local_7 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
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
	Function_13();
	if (IS_ACTOR_VALID(&uLocal_31))
	{
		SET_INDICATOR_DRAW(&uLocal_31, 0);
		RELEASE_ACTOR(&uLocal_31);
	}
	if (IS_BLIP_VALID(&uLocal_33))
	{
		REMOVE_BLIP(&uLocal_33);
	}
	Function_12();
	Function_11();
	RELEASE_LAYOUT_REF(&uLocal_5);
	if (Function_10(Local_7))
	{
		Function_2(Local_7);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x6B / 107
{
	Function_3(iParam0);
	return;
}

void Function_3(int iParam0) //Position: 0x76 / 118
{
	var uVar0;
	
	if (!Function_8(iParam0))
	{
		Function_6();
		return;
	}
	uVar0 = Function_4(iParam0);
	Global_21684[iParam07].f_4 = 0;
	return;
}

int Function_4(int iParam0) //Position: 0x9A / 154
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

bool Function_5(int iParam0) //Position: 0xB5 / 181
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0xCC / 204
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
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
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_7(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_7(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x313 / 787
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_8(int iParam0) //Position: 0x33F / 831
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

bool Function_9(int iParam0) //Position: 0x363 / 867
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_10(int iParam0) //Position: 0x378 / 888
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

void Function_11() //Position: 0x399 / 921
{
	return;
}

void Function_12() //Position: 0x39F / 927
{
	return;
}

void Function_13() //Position: 0x3A5 / 933
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	CAMERA_RESET(0);
	SATCHEL_SET_ENABLED(1);
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_15(), true);
	Function_14(1);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_99471);
	RESET_FACTIONS();
	HUD_ENABLE(1);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), false);
	AI_STOP_IGNORING_ACTORS();
	return;
}

void Function_14(var uParam0) //Position: 0x3F2 / 1010
{
	Global_39922.f_88 = (Global_39922.f_88 || uParam0);
	return;
}

var Function_15() //Position: 0x405 / 1029
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_16() //Position: 0x41A / 1050
{
	int iVar0;
	
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
			if (Function_37(Global_46760[0]))
			{
				iLocal_4 = Function_36(Local_7);
				if (Function_35())
				{
					if (iLocal_4 <= 15)
					{
						iLocal_4 = 15;
					}
				}
				else if (iLocal_4 <= 25)
				{
					iLocal_4 = 25;
				}
				if (Function_33() <= iLocal_4)
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
			if (Function_26(Global_46760[0], &Local_35 + 12, GET_PLAYER_ACTOR(0), 1, 0))
			{
				Function_25(Global_46760[0], 0);
				(&Local_35 + 232) = Function_25(Global_46760[0], 0);
				Function_24(&Local_35 + 12);
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					(*&Local_35 + 68)[iVar0] = iLocal_4 * 10;
					Function_23(Global_46760[0], iVar0, 0);
					*(&Local_35 + 128[iVar02]) = Function_23(Global_46760[0], iVar0, 0);
					iVar0++;
				}
				if (Function_35())
				{
					Local_35.f_252 = 4;
				}
				else
				{
					Local_35.f_252 = 6;
				}
				Local_35.f_244 = 0;
				Local_35.f_8 = Local_7;
				Function_22(Global_46760[0]);
				*(&Local_35 + 268) = Function_22(Global_46760[0]);
				Function_21(Global_46760[0]);
				*(&Local_35 + 280) = Function_21(Global_46760[0]);
				Function_20(Local_7, 0);
				LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Poker01/Poker01", &Local_35, 74, 0);
				iLocal_0 = 2;
			}
			else
			{
				bLocal_3 = true;
			}
			break;
		
		case 0x00000002:
			if (!Function_10(Local_7))
			{
				iLocal_0 = 101;
			}
			break;
		
		case 0x00000065:
			if (Function_19(Local_7, 0))
			{
				bLocal_2 = true;
			}
			else if (Function_18(Local_7))
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

void Function_17() //Position: 0x5D6 / 1494
{
	Function_1();
	return;
}

bool Function_18(int iParam0) //Position: 0x5DF / 1503
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

bool Function_19(int iParam0, bool bParam1) //Position: 0x600 / 1536
{
	if (!Function_8(iParam0))
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

void Function_20(int iParam0, int iParam1) //Position: 0x637 / 1591
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

struct<8> Function_21(int iParam0) //Position: 0x652 / 1618
{
	if (iParam0 == Global_46816[0])
	{
		return StackVal, Vector(-812,15f, 92,53197f, 2374,331f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(148,7422f, 73,03642f, 2217,276f);
	}
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2160f, 16,22081f, 2609,77f);
	}
	if (iParam0 == Global_46914[0])
	{
		return StackVal, Vector(725,084f, 78,477f, 1330,445f);
	}
	if (iParam0 == Global_46914[1])
	{
		return StackVal, Vector(-136.0f, 118,8691f, 1356f);
	}
	if (iParam0 == Global_46866[0])
	{
		return StackVal, Vector(-2696,558f, 31,122f, 4270,433f);
	}
	if (iParam0 == Global_46894[2])
	{
		return StackVal, Vector(-800,0038f, 13,05098f, 3707,996f);
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_22(int iParam0) //Position: 0x754 / 1876
{
	if (iParam0 == Global_46816[0])
	{
		return StackVal, Vector(-809,0718f, 92,53197f, 2368,448f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(143,5699f, 73,03642f, 2221,451f);
	}
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2168.0f, 16,21359f, 2609,77f);
	}
	if (iParam0 == Global_46914[0])
	{
		return StackVal, Vector(714,976f, 78,477f, 1330,279f);
	}
	if (iParam0 == Global_46914[1])
	{
		return StackVal, Vector(-136.0f, 118,8691f, 1368f);
	}
	if (iParam0 == Global_46866[0])
	{
		return StackVal, Vector(-2696,951f, 31,222f, 4261,301f);
	}
	if (iParam0 == Global_46894[2])
	{
		return StackVal, Vector(-792.0f, 13,05098f, 3716f);
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_23(int iParam0, int iParam1, bool bParam2) //Position: 0x856 / 2134
{
	if (iParam0 == Global_46816[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-801,0966f, 92,75807f, 2375,792f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-801,4974f, 92,75435f, 2375,295f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-801,2829f, 92,75435f, 2374,737f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-800,724f, 92,76255f, 2374,656f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-800,3233f, 92,75678f, 2375,122f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-800,5463f, 92,75435f, 2375,677f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(164,353f, 73,75671f, 2230,925f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(164,5807f, 73,82056f, 2231,472f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(164,2043f, 73,75299f, 2231,971f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(163,6548f, 73,76118f, 2231,889f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(163,4103f, 73,76118f, 2231,366f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(163,7511f, 73,75671f, 2230,869f);
				break;
		}
	}
	else if (iParam0 == Global_46760[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2157,424f, 16,88292f, 2596,033f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2158,012f, 16,94059f, 2595,997f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2158,228f, 16,87845f, 2595,416f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2157,847f, 16,87845f, 2594,96f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2157,261f, 16,87845f, 2595,042f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2157,04f, 16,87845f, 2595,596f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		if (&bParam2)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return StackVal, Vector(748,5359f, 82,6927f, 1267,343f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(749,138f, 82,6927f, 1266,645f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(750,045f, 82,6927f, 1266,796f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(750,0344f, 82,6917f, 1267,552f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(749,7606f, 82,6927f, 1268,372f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(748,8501f, 82,6927f, 1268,207f);
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return StackVal, Vector(717,6248f, 78,47099f, 1325,972f);
					break;
				
				case 0x00000001:
					return StackVal, Vector(717,0453f, 78,47099f, 1325,919f);
					break;
				
				case 0x00000002:
					return StackVal, Vector(716,8008f, 78,47099f, 1325,396f);
					break;
				
				case 0x00000003:
					return StackVal, Vector(717,1418f, 78,47099f, 1324,928f);
					break;
				
				case 0x00000004:
					return StackVal, Vector(717,7181f, 78,47099f, 1324,969f);
					break;
				
				case 0x00000005:
					return StackVal, Vector(717,9684f, 78,47099f, 1325,495f);
					break;
				}
		}
	}
	else if (iParam0 == Global_46914[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-138,6693f, 119,2419f, 1344,049f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-139,2573f, 119,2419f, 1343,961f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-139,4945f, 119,2419f, 1343,419f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-139,1212f, 119,2419f, 1342,946f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-138,5368f, 119,2419f, 1343,024f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-138,2953f, 119,2419f, 1343,58f);
				break;
		}
	}
	else if (iParam0 == Global_46866[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2701,487f, 31,151f, 4278,554f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2701,713f, 31,151f, 4277,994f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2701,347f, 31,151f, 4277,538f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-2700,726f, 31,151f, 4277,604f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-2700,508f, 31,151f, 4278,2f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-2700,919f, 31,151f, 4278,653f);
				break;
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-795,5794f, 13,16767f, 3699,937f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-795,8744f, 13,16057f, 3699,083f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-794,9905f, 13,16057f, 3698,687f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-794,196f, 13,16057f, 3699,235f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-794,2787f, 13,16057f, 3700,203f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-795,169f, 13,16057f, 3700,608f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_24(int[] iParam0) //Position: 0xE02 / 3586
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		uVar1 = &iParam0[iVar0];
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!AI_IGNORE_ACTOR(&uVar1))
			{
				LOG_ERROR("AI_IGNORE_ACTOR failed");
			}
			SET_ACTOR_FACTION(&uVar1, 1);
		}
		iVar0++;
	}
	return;
}

struct<8> Function_25(int iParam0, bool bParam1) //Position: 0xE5E / 3678
{
	if (iParam0 == Global_46816[0])
	{
		return StackVal, Vector(-800,8856f, 93,555f, 2375,189f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(163,9887f, 74,554f, 2231,428f);
	}
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2157,657f, 17,677f, 2595,523f);
	}
	if (iParam0 == Global_46914[0])
	{
		if (&bParam1)
		{
			return StackVal, Vector(749,4575f, 83,482f, 1267,537f);
		}
		return StackVal, Vector(717,378f, 79,274f, 1325,464f);
	}
	if (iParam0 == Global_46914[1])
	{
		return StackVal, Vector(-138,8952f, 120,019f, 1343,499f);
	}
	if (iParam0 == Global_46866[0])
	{
		return StackVal, Vector(-2701,129f, 31,949f, 4278,085f);
	}
	if (iParam0 == Global_46894[2])
	{
		return StackVal, Vector(-795,0887f, 13,958f, 3699,661f);
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_26(int iParam0, var[] uParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xF7A / 3962
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	var uVar9[6];
	int iVar16;
	int iVar17;
	bool bVar18;
	
	bVar5 = -1.0f;
	iVar6 = 4294967295;
	fVar7 = GET_CURRENT_GAME_TIME();
	iVar8 = 0;
	iVar4 = 0;
	while (iVar4 <= 6)
	{
		Function_23(iParam0, iVar4, &bParam4);
		iVar16 = Function_32(StackVal, Function_23(iParam0, iVar4, &bParam4));
		while ((!IS_GRINGO_VALID(&iVar16) && !IS_EXITFLAG_SET()) && GET_CURRENT_GAME_TIME() > (fVar7 + 5.0f))
		{
			Function_23(iParam0, iVar4, &bParam4);
			iVar16 = Function_32(StackVal, Function_23(iParam0, iVar4, &bParam4));
			WAIT(false);
		}
		uVar9[iVar4] = &iVar16;
		iVar17 = 0;
		while (iVar17 <= iVar4)
		{
			if (&uVar9[iVar17] == &iVar16)
			{
				iVar16 = "";
				return 0;
			}
			iVar17++;
		}
		if (IS_GRINGO_VALID(&iVar16))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(&iVar16))
			{
				uParam1[iVar4] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&iVar16, "UseCase1"));
				if (!IS_ACTOR_VALID(&(uParam1[iVar4])))
				{
					Function_31(&uParam2, &Var0);
					GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&iVar16), &Var2);
					bVar18 = VDIST(Var0, Var2);
					if (bVar5 != -1.0f || bVar18 > bVar5)
					{
						bVar5 = bVar18;
						iVar6 = iVar4;
					}
				}
				else if (((IS_ACTION_NODE_PLAYING_PARTIAL(&(uParam1[iVar4]), "ncard_idle") || IS_ACTION_NODE_PLAYING_PARTIAL(&(uParam1[iVar4]), "look_at_cards")) || IS_ACTION_NODE_PLAYING_PARTIAL(&(uParam1[iVar4]), "look_up")) || !&bParam3)
				{
					iVar8++;
				}
				else if (&bParam3)
				{
					return 0;
				}
			}
			return 0;
		}
		LOG_ERROR("Fake_Poker is NOT valid");
		iVar4++;
	}
	if (iVar8 == 0)
	{
		LOG_ERROR("iAIPlayerCount is ZERO");
		return 0;
	}
	if (iVar6 == 4294967295)
	{
		LOG_ERROR("No Human Seat Available");
		return 0;
	}
	uParam1[iVar6] = &uParam2;
	if (Function_27(&uParam2, 1, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_27(int iParam0, bool bParam1, bool bParam2) //Position: 0x1188 / 4488
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
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
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_30(&iParam0))
	{
		return 1;
	}
	if (Function_29(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_28())
	{
		return 1;
	}
	return 0;
}

bool Function_28() //Position: 0x124C / 4684
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_29(int iParam0) //Position: 0x1263 / 4707
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_30(int iParam0) //Position: 0x126F / 4719
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_31(var uParam0, int iParam1) //Position: 0x127E / 4734
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

var Function_32(var uParam0, bool bParam1) //Position: 0x128D / 4749
{
	return LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_poker", &uParam0, 1.0f, 0);
}

int Function_33() //Position: 0x12CF / 4815
{
	return Function_34(0);
}

int Function_34(bool bParam0) //Position: 0x12D9 / 4825
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

bool Function_35() //Position: 0x131A / 4890
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_36(int iParam0) //Position: 0x1345 / 4933
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

bool Function_37(int iParam0) //Position: 0x135F / 4959
{
	if (!Function_39(iParam0))
	{
		return 1;
	}
	return Function_38(&(Global_43791[iParam0]), 4);
}

int Function_38(var uParam0, int iParam1) //Position: 0x137B / 4987
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_39(int iParam0) //Position: 0x1398 / 5016
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_40() //Position: 0x13AE / 5038
{
	Function_1();
	return;
}

void Function_41() //Position: 0x13B7 / 5047
{
	uLocal_5 = CREATE_LAYOUT(Function_52());
	Function_50(0, 1);
	Function_49();
	Function_48();
	Function_42(&uLocal_19);
	Function_42(&iLocal_27);
	Function_42(&iLocal_23);
	iLocal_0 = 0;
	iLocal_1 = 0;
	if (!iLocal_1 != 0)
	{
		LOG_ERROR("m_goal is messed up");
	}
	return;
}

void Function_42(int iParam0) //Position: 0x1407 / 5127
{
	if (!Function_46(&iParam0))
	{
		Function_43(&iParam0, 0.0f);
	}
	return;
}

void Function_43(vector3 vParam0) //Position: 0x141E / 5150
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_45(&vParam0, 1);
	Function_44(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_44(var uParam0, int iParam1) //Position: 0x1443 / 5187
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_45(var uParam0, int iParam1) //Position: 0x1459 / 5209
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_46(int iParam0) //Position: 0x146A / 5226
{
	return Function_47(iParam0, 1);
}

int Function_47(var uParam0, bool bParam1) //Position: 0x1478 / 5240
{
	return (uParam0 && bParam1) == 0;
}

void Function_48() //Position: 0x1485 / 5253
{
	return;
}

void Function_49() //Position: 0x148B / 5259
{
	return;
}

void Function_50(bool bParam0, bool bParam1) //Position: 0x1491 / 5265
{
	var uVar0;
	
	SATCHEL_SET_ENABLED(0);
	uVar0 = Function_15();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(&uVar0);
	Function_51(1);
	SET_ACTOR_POSTURE(&uVar0, 0);
	FIRE_STOP_ALL_FIRES();
	if (&bParam0)
	{
		ACTOR_START_FORCE_HOLSTER(&uVar0, 0, 0);
	}
	else
	{
		ACTOR_END_FORCE_HOLSTER(&uVar0);
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
		CANCEL_TIME_WARP(0);
	}
	SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
	if (&bParam1)
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	return;
}

void Function_51(var uParam0) //Position: 0x14F0 / 5360
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_52() //Position: 0x150D / 5389
{
	var uVar0;
	
	return &uVar0;
}

