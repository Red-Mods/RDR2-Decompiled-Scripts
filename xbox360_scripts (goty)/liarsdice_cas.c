//Decompiled with MagicRDR v1.0
//Function Count : 50
//Statics Count : 191
//Natives Count : 69
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	var uLocal_4 = 0;
	var uLocal_5 = 5;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
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
	var uLocal_21 = 3;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 2;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 5;
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
	var uLocal_52 = 0;
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
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 2;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
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
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	int iLocal_131 = 0;
	bool bLocal_132 = false;
	struct<7> Local_133 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	int iLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	int iLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	bool bLocal_149 = false;
	bool bLocal_150 = false;
	struct<49> Local_151 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	Local_133 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_40();
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
	if (IS_ACTOR_VALID(bLocal_149))
	{
		SET_INDICATOR_DRAW(bLocal_149, 0);
		RELEASE_ACTOR(bLocal_149);
	}
	if (IS_BLIP_VALID(bLocal_150))
	{
		REMOVE_BLIP(bLocal_150);
	}
	Function_11();
	RELEASE_LAYOUT_REF(bLocal_132);
	if (Function_10(Local_133))
	{
		Function_2(Local_133);
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
			iLocal_131 = Function_38(Local_133);
			if (Function_37())
			{
				if (iLocal_131 < 0)
				{
					iLocal_131 = 10;
				}
			}
			else if (iLocal_131 < 0)
			{
				iLocal_131 = 20;
			}
			if (Function_35() <= iLocal_131)
			{
				Function_31("LiarsDice_NotEnoughMoney", 4.0f, 0, 2, 1, 0);
				bLocal_3 = true;
			}
			else
			{
				iLocal_0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_25(Global_30707[2], &Local_151 + 4, GET_PLAYER_ACTOR(0)))
			{
				Function_24(Global_30707[2]);
				*(&Local_151 + 32) = { StackVal, StackVal, Function_24(Global_30707[2]) };
				Local_151.f_44 = Function_23(Global_30707[2]);
				Function_22(&Local_151 + 4);
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					Function_21(Global_30707[2], iVar0);
					*(&Local_151 + 56[iVar03]) = { StackVal, StackVal, Function_21(Global_30707[2], iVar0) };
					iVar0++;
				}
				Local_151.f_48 = iLocal_131;
				Local_151 = Local_133;
				Function_20(Local_133, 0);
				LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/LiarsDice/LiarsDice", &Local_151, 33, 0);
				iLocal_0 = 2;
			}
			else
			{
				bLocal_3 = true;
			}
			break;
		
		case 0x00000002:
			if (!Function_10(Local_133))
			{
				iLocal_0 = 101;
			}
			break;
		
		case 0x00000065:
			if (Function_19(Local_133, 0))
			{
				bLocal_2 = true;
			}
			else if (Function_18(Local_133))
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

void Function_17() //Position: 0x5B9 / 1465
{
	Function_1();
	return;
}

bool Function_18(int iParam0) //Position: 0x5C2 / 1474
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

bool Function_19(int iParam0, bool bParam1) //Position: 0x5E3 / 1507
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

void Function_20(int iParam0, int iParam1) //Position: 0x619 / 1561
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

vector3 Function_21(int iParam0, int iParam1) //Position: 0x634 / 1588
{
	if (iParam0 == Global_30685[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -4288.696f, 26.72937f, 4381.383f;
				break;
			
			case 0x00000001:
				return -4289.277f, 26.72937f, 4381.477f;
				break;
			
			case 0x00000002:
				return -4289.651f, 26.72937f, 4381.039f;
				break;
			
			case 0x00000003:
				return -4289.435f, 26.72937f, 4380.51f;
				break;
			
			case 0x00000004:
				return -4288.878f, 26.72937f, 4380.39f;
				break;
			
			case 0x00000005:
				return -4288.485f, 26.72937f, 4380.807f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 167.5964f, 73.74156f, 2222.775f;
				break;
			
			case 0x00000001:
				return 167.958f, 73.74529f, 2222.327f;
				break;
			
			case 0x00000002:
				return 168.5496f, 73.74591f, 2222.387f;
				break;
			
			case 0x00000003:
				return 168.7889f, 73.74529f, 2222.935f;
				break;
			
			case 0x00000004:
				return 168.4313f, 73.74976f, 2223.425f;
				break;
			
			case 0x00000005:
				return 167.8298f, 73.74976f, 2223.35f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -788.6586f, 13.16462f, 3698.422f;
				break;
			
			case 0x00000001:
				return -788.4316f, 13.16762f, 3698.957f;
				break;
			
			case 0x00000002:
				return -788.7964f, 13.165f, 3699.425f;
				break;
			
			case 0x00000003:
				return -789.389f, 13.165f, 3699.35f;
				break;
			
			case 0x00000004:
				return -789.6095f, 13.165f, 3698.805f;
				break;
			
			case 0x00000005:
				return -789.2333f, 13.165f, 3698.335f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 856.9058f, 77.51558f, 1278.093f;
				break;
			
			case 0x00000001:
				return 856.6888f, 77.51558f, 1277.556f;
				break;
			
			case 0x00000002:
				return 857.0518f, 77.51558f, 1277.099f;
				break;
			
			case 0x00000003:
				return 857.629f, 77.51558f, 1277.148f;
				break;
			
			case 0x00000004:
				return 857.8614f, 77.51558f, 1277.699f;
				break;
			
			case 0x00000005:
				return 857.4864f, 77.51558f, 1278.173f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_22(int iParam0) //Position: 0x908 / 2312
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

var Function_23(int iParam0) //Position: 0x95D / 2397
{
	if (iParam0 == Global_30685[0])
	{
		return -147.9631f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 72.52222f;
	}
	if (iParam0 == Global_30707[2])
	{
		return -47.22866f;
	}
	if (iParam0 == Global_30717[0])
	{
		return 136.712f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f;
}

vector3 Function_24(int iParam0) //Position: 0x9D3 / 2515
{
	if (iParam0 == Global_30685[0])
	{
		return -4289.077f, 27.542f, 4380.94f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 168.1746f, 74.54424f, 2222.892f;
	}
	if (iParam0 == Global_30707[2])
	{
		return -789.002f, 13.965f, 3698.875f;
	}
	if (iParam0 == Global_30717[0])
	{
		return 857.259f, 78.3169f, 1277.636f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_25(var uParam0, var uParam1, int iParam2) //Position: 0xA73 / 2675
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	bool bVar7;
	int iVar8;
	bool bVar9[6];
	int iVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	
	bVar7 = -1.0f;
	iVar8 = 4294967295;
	iVar16 = 0;
	iVar6 = 0;
	while (iVar6 <= *uParam1)
	{
		Function_21(uParam0, iVar6);
		vVar3 = { StackVal, StackVal, Function_21(uParam0, iVar6) };
		bVar17 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &vVar3, 1.0f, 0);
		bVar9[iVar6] = bVar17;
		iVar18 = 0;
		while (iVar18 <= iVar6)
		{
			if (bVar9[iVar18] == bVar17)
			{
				bVar17 = "";
				return 0;
			}
			iVar18++;
		}
		if (IS_GRINGO_VALID(bVar17))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(bVar17))
			{
				(*uParam1)[iVar6] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar17, "UseCase1"));
				if (!IS_ACTOR_VALID((*uParam1)[iVar6]))
				{
					Function_30(iParam2, &vVar0);
					GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar17), &vVar3);
					bVar19 = VDIST(vVar0, vVar3);
					if (bVar7 != -1.0f || bVar19 > bVar7)
					{
						bVar7 = bVar19;
						iVar8 = iVar6;
					}
				}
				else if ((IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[iVar6], "fake_liars_dice") && !IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[iVar6], "sit")) && !IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[iVar6], "stand"))
				{
					iVar16++;
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
		iVar6++;
	}
	if (iVar16 >= 0 || iVar16 <= 6)
	{
		return 0;
	}
	if (iVar8 == 4294967295)
	{
		LOG_ERROR("No Human Seat Available");
		return 0;
	}
	(*uParam1)[iVar8] = iParam2;
	if (Function_26(iParam2, 1, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_26(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC49 / 3145
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

bool Function_27() //Position: 0xCFF / 3327
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_28(bool bParam0) //Position: 0xD16 / 3350
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_29(bool bParam0) //Position: 0xD21 / 3361
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_30(bool bParam0, bool bParam1) //Position: 0xD2F / 3375
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_31(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xD3C / 3388
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_32(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_32(int iParam0) //Position: 0xDB3 / 3507
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

bool Function_33() //Position: 0xDF2 / 3570
{
	if (Function_34(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_34(var uParam0, bool bParam1) //Position: 0xE0D / 3597
{
	return (uParam0 && bParam1) == 0;
}

int Function_35() //Position: 0xE1A / 3610
{
	return Function_36(0);
}

int Function_36(bool bParam0) //Position: 0xE24 / 3620
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

bool Function_37() //Position: 0xE65 / 3685
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_38(int iParam0) //Position: 0xE90 / 3728
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

void Function_39() //Position: 0xEAA / 3754
{
	Function_1();
	return;
}

void Function_40() //Position: 0xEB3 / 3763
{
	bLocal_132 = CREATE_LAYOUT(Function_49());
	Function_47(0, 1);
	Function_46();
	Function_41(&uLocal_140);
	Function_41(&iLocal_146);
	Function_41(&iLocal_143);
	iLocal_0 = 0;
	iLocal_1 = 0;
	if (!iLocal_1 != 0)
	{
		LOG_ERROR("m_goal is messed up");
	}
	return;
}

void Function_41(int iParam0) //Position: 0xEFF / 3839
{
	if (!Function_45(iParam0))
	{
		Function_42(iParam0, 0.0f);
	}
	return;
}

void Function_42(var uParam0, float fParam1) //Position: 0xF14 / 3860
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_44(uParam0, 1);
	Function_43(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_43(var uParam0, int iParam1) //Position: 0xF35 / 3893
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_44(var uParam0, int iParam1) //Position: 0xF48 / 3912
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_45(var uParam0) //Position: 0xF57 / 3927
{
	return Function_34(*uParam0, 1);
}

void Function_46() //Position: 0xF64 / 3940
{
	return;
}

void Function_47(bool bParam0, bool bParam1) //Position: 0xF6A / 3946
{
	bool bVar0;
	
	SATCHEL_SET_ENABLED(0);
	bVar0 = Function_15();
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

void Function_48(var uParam0) //Position: 0xFC1 / 4033
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_49() //Position: 0xFDE / 4062
{
	var uVar0;
	
	return uVar0;
}

