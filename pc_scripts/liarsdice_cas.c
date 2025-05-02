//Decompiled with MagicRDR v1.0
//Function Count : 49
//Statics Count : 255
//Natives Count : 68
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 5;
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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 3;
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
	var uLocal_44 = 2;
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
	var uLocal_60 = 5;
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
	var uLocal_76 = 0;
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
	var uLocal_102 = 2;
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
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	int iLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	struct<6> Local_167 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	int iLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	int iLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	struct<77> Local_195 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	Local_167 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_39();
	while (Function_15())
	{
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x21 / 33
{
	Function_12();
	if (IS_ACTOR_VALID(&uLocal_191))
	{
		SET_INDICATOR_DRAW(&uLocal_191, 0);
		RELEASE_ACTOR(&uLocal_191);
	}
	if (IS_BLIP_VALID(&uLocal_193))
	{
		REMOVE_BLIP(&uLocal_193);
	}
	Function_11();
	RELEASE_LAYOUT_REF(&uLocal_165);
	if (Function_10(Local_167))
	{
		Function_2(Local_167);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x68 / 104
{
	Function_3(iParam0);
	return;
}

void Function_3(int iParam0) //Position: 0x73 / 115
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

int Function_4(int iParam0) //Position: 0x97 / 151
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

bool Function_5(int iParam0) //Position: 0xB2 / 178
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0xC9 / 201
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

void Function_7(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x310 / 784
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_8(int iParam0) //Position: 0x33C / 828
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

bool Function_9(int iParam0) //Position: 0x360 / 864
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_10(int iParam0) //Position: 0x375 / 885
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

void Function_11() //Position: 0x396 / 918
{
	return;
}

void Function_12() //Position: 0x39C / 924
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	CAMERA_RESET(0);
	SATCHEL_SET_ENABLED(1);
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_14(), true);
	Function_13(1);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_99471);
	RESET_FACTIONS();
	HUD_ENABLE(1);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	return;
}

void Function_13(var uParam0) //Position: 0x3E9 / 1001
{
	Global_39922.f_88 = (Global_39922.f_88 || uParam0);
	return;
}

var Function_14() //Position: 0x3FC / 1020
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_15() //Position: 0x411 / 1041
{
	int iVar0;
	
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_38();
		return 0;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_38();
		return 0;
	}
	bLocal_2 = false;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			break;
		
		case 0x00000000:
			iLocal_164 = Function_37(Local_167);
			if (Function_36())
			{
				if (iLocal_164 < 0)
				{
					iLocal_164 = 10;
				}
			}
			else if (iLocal_164 < 0)
			{
				iLocal_164 = 20;
			}
			if (Function_34() <= iLocal_164)
			{
				Function_30("LiarsDice_NotEnoughMoney", 4.0f, 0, 2, 1, 0);
				bLocal_3 = true;
			}
			else
			{
				iLocal_0 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_24(Global_46894[2], &Local_195 + 4, GET_PLAYER_ACTOR(0)))
			{
				Function_23(Global_46894[2]);
				(&Local_195 + 60) = Function_23(Global_46894[2]);
				Local_195.f_72 = Function_22(Global_46894[2]);
				Function_21(&Local_195 + 4);
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					Function_20(Global_46894[2], iVar0);
					*(&Local_195 + 84[iVar02]) = Function_20(Global_46894[2], iVar0);
					iVar0++;
				}
				Local_195.f_76 = iLocal_164;
				Local_195 = Local_167;
				Function_19(Local_167, 0);
				LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/LiarsDice/LiarsDice", &Local_195, 48, 0);
				iLocal_0 = 2;
			}
			else
			{
				bLocal_3 = true;
			}
			break;
		
		case 0x00000002:
			if (!Function_10(Local_167))
			{
				iLocal_0 = 101;
			}
			break;
		
		case 0x00000065:
			if (Function_18(Local_167, 0))
			{
				bLocal_2 = true;
			}
			else if (Function_17(Local_167))
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
		Function_16();
		return 0;
	}
	if (bLocal_3)
	{
		Function_38();
		return 0;
	}
	return 1;
}

void Function_16() //Position: 0x5B1 / 1457
{
	Function_1();
	return;
}

bool Function_17(int iParam0) //Position: 0x5BA / 1466
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

bool Function_18(int iParam0, bool bParam1) //Position: 0x5DB / 1499
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

void Function_19(int iParam0, int iParam1) //Position: 0x612 / 1554
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

struct<8> Function_20(int iParam0, int iParam1) //Position: 0x62D / 1581
{
	if (iParam0 == Global_46850[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-4288,696f, 26,72937f, 4381,383f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-4289,277f, 26,72937f, 4381,477f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-4289,651f, 26,72937f, 4381,039f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-4289,435f, 26,72937f, 4380,51f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-4288,878f, 26,72937f, 4380,39f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-4288,485f, 26,72937f, 4380,807f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(167,5964f, 73,74156f, 2222,775f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(167,958f, 73,74529f, 2222,327f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(168,5496f, 73,74591f, 2222,387f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(168,7889f, 73,74529f, 2222,935f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(168,4313f, 73,74976f, 2223,425f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(167,8298f, 73,74976f, 2223,35f);
				break;
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-788,6586f, 13,16462f, 3698,422f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-788,4316f, 13,16762f, 3698,957f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-788,7964f, 13,165f, 3699,425f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(-789,389f, 13,165f, 3699,35f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(-789,6095f, 13,165f, 3698,805f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(-789,2333f, 13,165f, 3698,335f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(856,9058f, 77,51558f, 1278,093f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(856,6888f, 77,51558f, 1277,556f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(857,0518f, 77,51558f, 1277,099f);
				break;
			
			case 0x00000003:
				return StackVal, Vector(857,629f, 77,51558f, 1277,148f);
				break;
			
			case 0x00000004:
				return StackVal, Vector(857,8614f, 77,51558f, 1277,699f);
				break;
			
			case 0x00000005:
				return StackVal, Vector(857,4864f, 77,51558f, 1278,173f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_21(int[] iParam0) //Position: 0x91A / 2330
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

var Function_22(int iParam0) //Position: 0x976 / 2422
{
	if (iParam0 == Global_46850[0])
	{
		return -147,9631f;
	}
	if (iParam0 == Global_46816[1])
	{
		return 72,52222f;
	}
	if (iParam0 == Global_46894[2])
	{
		return -47,22866f;
	}
	if (iParam0 == Global_46914[0])
	{
		return 136,712f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f;
}

struct<8> Function_23(int iParam0) //Position: 0x9EC / 2540
{
	if (iParam0 == Global_46850[0])
	{
		return StackVal, Vector(-4289,077f, 27,542f, 4380,94f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(168,1746f, 74,54424f, 2222,892f);
	}
	if (iParam0 == Global_46894[2])
	{
		return StackVal, Vector(-789,002f, 13,965f, 3698,875f);
	}
	if (iParam0 == Global_46914[0])
	{
		return StackVal, Vector(857,259f, 78,3169f, 1277,636f);
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_24(var uParam0, var[] uParam1, int iParam2) //Position: 0xA91 / 2705
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	bool bVar5;
	int iVar6;
	var uVar7[6];
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	
	bVar5 = -1.0f;
	iVar6 = 4294967295;
	iVar14 = 0;
	iVar4 = 0;
	while (iVar4 <= uParam1)
	{
		Function_20(uParam0, iVar4);
		Var2 = Function_20(uParam0, iVar4);
		iVar15 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &Var2, 1.0f, 0);
		uVar7[iVar4] = &iVar15;
		iVar16 = 0;
		while (iVar16 <= iVar4)
		{
			if (&uVar7[iVar16] == &iVar15)
			{
				iVar15 = "";
				return 0;
			}
			iVar16++;
		}
		if (IS_GRINGO_VALID(&iVar15))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(&iVar15))
			{
				uParam1[iVar4] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&iVar15, "UseCase1"));
				if (!IS_ACTOR_VALID(&(uParam1[iVar4])))
				{
					Function_29(&iParam2, &Var0);
					GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&iVar15), &Var2);
					bVar17 = VDIST(Var0, Var2);
					if (bVar5 != -1.0f || bVar17 > bVar5)
					{
						bVar5 = bVar17;
						iVar6 = iVar4;
					}
				}
				else if ((IS_ACTION_NODE_PLAYING_PARTIAL(&(uParam1[iVar4]), "fake_liars_dice") && !IS_ACTION_NODE_PLAYING_PARTIAL(&(uParam1[iVar4]), "sit")) && !IS_ACTION_NODE_PLAYING_PARTIAL(&(uParam1[iVar4]), "stand"))
				{
					iVar14++;
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
		iVar4++;
	}
	if (iVar14 >= 0 || iVar14 <= 6)
	{
		return 0;
	}
	if (iVar6 == 4294967295)
	{
		LOG_ERROR("No Human Seat Available");
		return 0;
	}
	uParam1[iVar6] = &iParam2;
	if (Function_25(&iParam2, 1, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_25(int iParam0, bool bParam1, bool bParam2) //Position: 0xC80 / 3200
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
	if (Function_28(&iParam0))
	{
		return 1;
	}
	if (Function_27(&iParam0))
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
	if (Function_26())
	{
		return 1;
	}
	return 0;
}

bool Function_26() //Position: 0xD44 / 3396
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_27(int iParam0) //Position: 0xD5B / 3419
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_28(int iParam0) //Position: 0xD67 / 3431
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_29(var uParam0, bool bParam1) //Position: 0xD76 / 3446
{
	GET_POSITION(&uParam0, &bParam1);
	return;
}

void Function_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xD85 / 3461
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_31(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

struct<16> Function_31(int iParam0) //Position: 0xE0A / 3594
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

bool Function_32() //Position: 0xE49 / 3657
{
	if (Function_33(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_33(var uParam0, bool bParam1) //Position: 0xE64 / 3684
{
	return (uParam0 && bParam1) == 0;
}

int Function_34() //Position: 0xE71 / 3697
{
	return Function_35(0);
}

int Function_35(bool bParam0) //Position: 0xE7B / 3707
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

bool Function_36() //Position: 0xEBC / 3772
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_37(int iParam0) //Position: 0xEE7 / 3815
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

void Function_38() //Position: 0xF01 / 3841
{
	Function_1();
	return;
}

void Function_39() //Position: 0xF0A / 3850
{
	uLocal_165 = CREATE_LAYOUT(Function_48());
	Function_46(0, 1);
	Function_45();
	Function_40(&uLocal_179);
	Function_40(&iLocal_187);
	Function_40(&iLocal_183);
	iLocal_0 = 0;
	iLocal_1 = 0;
	if (!iLocal_1 != 0)
	{
		LOG_ERROR("m_goal is messed up");
	}
	return;
}

void Function_40(int iParam0) //Position: 0xF57 / 3927
{
	if (!Function_44(&iParam0))
	{
		Function_41(&iParam0, 0.0f);
	}
	return;
}

void Function_41(vector3 vParam0) //Position: 0xF6E / 3950
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_43(&vParam0, 1);
	Function_42(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_42(var uParam0, int iParam1) //Position: 0xF93 / 3987
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_43(var uParam0, int iParam1) //Position: 0xFA9 / 4009
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_44(var uParam0) //Position: 0xFBA / 4026
{
	return Function_33(uParam0, 1);
}

void Function_45() //Position: 0xFC8 / 4040
{
	return;
}

void Function_46(bool bParam0, bool bParam1) //Position: 0xFCE / 4046
{
	var uVar0;
	
	SATCHEL_SET_ENABLED(0);
	uVar0 = Function_14();
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

void Function_47(var uParam0) //Position: 0x102D / 4141
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_48() //Position: 0x104A / 4170
{
	var uVar0;
	
	return &uVar0;
}

