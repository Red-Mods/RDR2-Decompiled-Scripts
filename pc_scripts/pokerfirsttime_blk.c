//Decompiled with MagicRDR v1.0
//Function Count : 49
//Statics Count : 199
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
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 5;
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
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 2;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	struct<6> Local_85 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	struct<253> Local_113 = { 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	Local_85 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_35();
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
	if (IS_ACTOR_VALID(&uLocal_109))
	{
		SET_INDICATOR_DRAW(&uLocal_109, 0);
		RELEASE_ACTOR(&uLocal_109);
	}
	if (IS_BLIP_VALID(&uLocal_111))
	{
		REMOVE_BLIP(&uLocal_111);
	}
	Function_12();
	Function_10();
	RELEASE_LAYOUT_REF(&uLocal_83);
	Function_2(Local_85);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x63 / 99
{
	Function_3(iParam0);
	return;
}

void Function_3(int iParam0) //Position: 0x6E / 110
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

int Function_4(int iParam0) //Position: 0x92 / 146
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

bool Function_5(int iParam0) //Position: 0xAD / 173
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0xC4 / 196
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

void Function_7(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x30B / 779
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_8(int iParam0) //Position: 0x337 / 823
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

bool Function_9(int iParam0) //Position: 0x35B / 859
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_10() //Position: 0x370 / 880
{
	Function_11();
	return;
}

void Function_11() //Position: 0x379 / 889
{
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_12() //Position: 0x385 / 901
{
	return;
}

void Function_13() //Position: 0x38B / 907
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

void Function_14(var uParam0) //Position: 0x3D8 / 984
{
	Global_39922.f_88 = (Global_39922.f_88 || uParam0);
	return;
}

var Function_15() //Position: 0x3EB / 1003
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_16() //Position: 0x400 / 1024
{
	int iVar0;
	
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_34();
		return 0;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_34();
		return 0;
	}
	bLocal_2 = false;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			break;
		
		case 0x00000000:
			iLocal_82 = Function_33(Local_85);
			if (iLocal_82 < 0)
			{
				iLocal_82 = 20;
			}
			if (Function_32(0) > IntToFloat(iLocal_82))
			{
				bLocal_3 = true;
			}
			else
			{
				iLocal_0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_25(Global_46914[0], &Local_113 + 12, GET_PLAYER_ACTOR(0), 1, 0))
			{
				Function_24(Global_46914[0], 0);
				(&Local_113 + 232) = Function_24(Global_46914[0], 0);
				Function_23(&Local_113 + 12);
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					(*&Local_113 + 68)[iVar0] = iLocal_82 * 10;
					Function_22(Global_46914[0], iVar0, 0);
					*(&Local_113 + 128[iVar02]) = Function_22(Global_46914[0], iVar0, 0);
					iVar0++;
				}
				Local_113.f_248 = 1;
				Local_113.f_252 = 2;
				Local_113.f_244 = 0;
				Local_113.f_8 = Local_85;
				Function_21(Local_85, 0);
				LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Poker01/Poker01", &Local_113, 74, 0);
				iLocal_0 = 2;
			}
			else
			{
				bLocal_3 = true;
			}
			break;
		
		case 0x00000002:
			if (!Function_20(Local_85))
			{
				iLocal_0 = 101;
			}
			break;
		
		case 0x00000065:
			if (Function_19(Local_85, 0))
			{
				bLocal_2 = true;
			}
			else if (Function_18(Local_85))
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
		Function_34();
		return 0;
	}
	return 1;
}

void Function_17() //Position: 0x577 / 1399
{
	Function_1();
	return;
}

bool Function_18(int iParam0) //Position: 0x580 / 1408
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

bool Function_19(int iParam0, bool bParam1) //Position: 0x5A1 / 1441
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

bool Function_20(int iParam0) //Position: 0x5D8 / 1496
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

void Function_21(int iParam0, int iParam1) //Position: 0x5F9 / 1529
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

struct<8> Function_22(int iParam0, int iParam1, bool bParam2) //Position: 0x614 / 1556
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

void Function_23(int[] iParam0) //Position: 0xBC0 / 3008
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

struct<8> Function_24(int iParam0, bool bParam1) //Position: 0xC1C / 3100
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

bool Function_25(int iParam0, var[] uParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xD38 / 3384
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
		Function_22(iParam0, iVar4, &bParam4);
		iVar16 = Function_31(StackVal, Function_22(iParam0, iVar4, &bParam4));
		while ((!IS_GRINGO_VALID(&iVar16) && !IS_EXITFLAG_SET()) && GET_CURRENT_GAME_TIME() > (fVar7 + 5.0f))
		{
			Function_22(iParam0, iVar4, &bParam4);
			iVar16 = Function_31(StackVal, Function_22(iParam0, iVar4, &bParam4));
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
					Function_30(&uParam2, &Var0);
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
	if (Function_26(&uParam2, 1, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_26(int iParam0, bool bParam1, bool bParam2) //Position: 0xF46 / 3910
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
	if (Function_29(&iParam0))
	{
		return 1;
	}
	if (Function_28(&iParam0))
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
	if (Function_27())
	{
		return 1;
	}
	return 0;
}

bool Function_27() //Position: 0x100A / 4106
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_28(int iParam0) //Position: 0x1021 / 4129
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_29(int iParam0) //Position: 0x102D / 4141
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_30(var uParam0, int iParam1) //Position: 0x103C / 4156
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

var Function_31(var uParam0, int iParam1) //Position: 0x104B / 4171
{
	return LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_poker", &uParam0, 1.0f, 0);
}

float Function_32(int iParam0) //Position: 0x108D / 4237
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_33(int iParam0) //Position: 0x10C6 / 4294
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

void Function_34() //Position: 0x10E0 / 4320
{
	Function_1();
	return;
}

void Function_35() //Position: 0x10E9 / 4329
{
	uLocal_83 = CREATE_LAYOUT(Function_48());
	Function_46(0, 1);
	Function_43();
	Function_42();
	Function_36(&uLocal_97);
	Function_36(&iLocal_105);
	Function_36(&iLocal_101);
	iLocal_0 = 0;
	iLocal_1 = 0;
	if (!iLocal_1 != 0)
	{
		LOG_ERROR("m_goal is messed up");
	}
	return;
}

void Function_36(int iParam0) //Position: 0x1139 / 4409
{
	if (!Function_40(&iParam0))
	{
		Function_37(&iParam0, 0.0f);
	}
	return;
}

void Function_37(vector3 vParam0) //Position: 0x1150 / 4432
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_39(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_38(var uParam0, int iParam1) //Position: 0x1175 / 4469
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_39(var uParam0, int iParam1) //Position: 0x118B / 4491
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_40(int iParam0) //Position: 0x119C / 4508
{
	return Function_41(iParam0, 1);
}

int Function_41(var uParam0, bool bParam1) //Position: 0x11AA / 4522
{
	return (uParam0 && bParam1) == 0;
}

void Function_42() //Position: 0x11B7 / 4535
{
	return;
}

void Function_43() //Position: 0x11BD / 4541
{
	Function_44();
	return;
}

void Function_44() //Position: 0x11C6 / 4550
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	Function_45(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Poker_BLK_layout");
	(&iLocal_4 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "PlayableSpace", 2,802597E-45f, Vector(854,8467f, 78,99314f, 1281,728f), Vector(0.0f, -33,07299f, 0.0f), Vector(4,807904f, 3,53227f, 6,156056f));
	*(&iLocal_4 + 16) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene_1Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 24[03]) = Vector(856,8768f, 77,52f, 1283,041f);
	*(&iLocal_4 + 24[03] + 12) = Vector(0.0f, 60,64319f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerPosition", Vector(856,8768f, 77,52f, 1283,041f), Vector(0.0f, 60,64319f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_4 + 16);
	*(&iLocal_4 + 24[13]) = Vector(854,4354f, 77,52193f, 1284,053f);
	*(&iLocal_4 + 24[13] + 12) = Vector(0.0f, -4,489308f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "AI_0_Position", Vector(854,4354f, 77,52193f, 1284,053f), Vector(0.0f, -4,489308f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 16);
	*(&iLocal_4 + 24[23]) = Vector(857,2482f, 77,52f, 1281,733f);
	*(&iLocal_4 + 24[23] + 12) = Vector(0.0f, 444,1363f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "AI_1_Position", Vector(857,2482f, 77,52f, 1281,733f), Vector(0.0f, 444,1363f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_4 + 16);
	*(&iLocal_4 + 24[33]) = Vector(856,4229f, 77,52234f, 1280,632f);
	*(&iLocal_4 + 24[33] + 12) = Vector(0.0f, 110,3671f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "AI_2_Position", Vector(856,4229f, 77,52234f, 1280,632f), Vector(0.0f, 110,3671f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_4 + 16);
	*(&iLocal_4 + 24[43]) = Vector(853,1198f, 77,52234f, 1280,618f);
	*(&iLocal_4 + 24[43] + 12) = Vector(0.0f, 224,0751f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "AI_3_Position", Vector(853,1198f, 77,52234f, 1280,618f), Vector(0.0f, 224,0751f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_4 + 16);
	*(&iLocal_4 + 152) = Vector(855,1326f, 78,3239f, 1281,816f);
	*(&iLocal_4 + 152 + 12) = Vector(0.0f, 192,4619f, 0.0f);
	*(&iLocal_4 + 176) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "TableCenter", Vector(855,1326f, 78,3239f, 1281,816f), Vector(0.0f, 192,4619f, 0.0f));
	*(&iLocal_4 + 184) = CREATE_OBJECTSET_IN_LAYOUT("Waitress_PositionsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 192[03]) = Vector(856,4048f, 77,51955f, 1286,333f);
	*(&iLocal_4 + 192[03] + 12) = Vector(0.0f, -159,0592f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Waitress_0_Pos", Vector(856,4048f, 77,51955f, 1286,333f), Vector(0.0f, -159,0592f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_4 + 184);
	*(&iLocal_4 + 192[13]) = Vector(855,2977f, 77,51955f, 1286,333f);
	*(&iLocal_4 + 192[13] + 12) = Vector(0.0f, -124,4389f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Waitress_1_Pos", Vector(855,2977f, 77,51955f, 1286,333f), Vector(0.0f, -124,4389f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_4 + 184);
	*(&iLocal_4 + 248) = CREATE_OBJECTSET_IN_LAYOUT("DuelerPositionsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 256[03]) = Vector(857,9119f, 77,51955f, 1286,135f);
	*(&iLocal_4 + 256[03] + 12) = Vector(0.0f, 5,508229f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Dueler_0", Vector(857,9119f, 77,51955f, 1286,135f), Vector(0.0f, 5,508229f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_4 + 248);
	*(&iLocal_4 + 256[13]) = Vector(857,5084f, 77,51955f, 1279,553f);
	*(&iLocal_4 + 256[13] + 12) = Vector(0.0f, 181,6365f, 0.0f);
	iVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Dueler_1", Vector(857,5084f, 77,51955f, 1279,553f), Vector(0.0f, 181,6365f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iVar9, &iLocal_4 + 248);
	return;
}

void Function_45(int iParam0, int iParam1) //Position: 0x168C / 5772
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

void Function_46(bool bParam0, bool bParam1) //Position: 0x16D6 / 5846
{
	var uVar0;
	
	SATCHEL_SET_ENABLED(0);
	uVar0 = Function_15();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(&uVar0);
	Function_47(1);
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

void Function_47(var uParam0) //Position: 0x1735 / 5941
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_48() //Position: 0x1752 / 5970
{
	var uVar0;
	
	return &uVar0;
}

