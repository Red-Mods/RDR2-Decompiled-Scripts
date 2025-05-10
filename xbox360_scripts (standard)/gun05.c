//Decompiled with MagicRDR v1.0
//Function Count : 690
//Statics Count : 1021
//Natives Count : 696
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 12;
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
	var uLocal_90 = 20;
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
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 6;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	struct<1813> Local_174 = { 0, 2, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 4, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_4 = 0;
	iLocal_154 = 0;
	iLocal_155 = 0;
	iLocal_1008 = 0;
	iLocal_1009 = 0;
	iLocal_1010 = 0;
	iLocal_1011 = 0;
	iLocal_1012 = 0;
	iLocal_1013 = 0;
	Local_629 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_675 = 99;
	bLocal_676 = 6;
	Local_668 = 1000;
	while (Function_297())
	{
		Function_231();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x61 / 97
{
	if (IS_ACTOR_VALID(bLocal_684))
	{
		STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_684);
	}
	Function_205();
	Function_202(5, 1, 0, 1, 1);
	Function_201(bLocal_628);
	Function_201(Local_174);
	Function_174(bLocal_713, 1, bLocal_713, 0, 0, 1, 1, 1);
	Function_170(&iLocal_636);
	Function_170(&bLocal_640);
	Function_170(&bLocal_647);
	Function_170(&bLocal_654);
	Function_168();
	if (IS_ITERATOR_VALID(bLocal_679))
	{
		DESTROY_ITERATOR(bLocal_679);
	}
	RELEASE_LAYOUT_REF(bLocal_628);
	if (bLocal_712)
	{
		Function_24(Local_629, 1, 1, 1, 0);
	}
	else if (bLocal_713)
	{
		Function_20(Local_629);
	}
	else
	{
		Function_2(Local_629);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0xF7 / 247
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x118 / 280
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x133 / 307
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x154 / 340
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x16A / 362
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	Function_7(bParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x206 / 518
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x227 / 551
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(bParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(bParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(bParam0));
	return;
}

void Function_9() //Position: 0x26D / 621
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x286 / 646
{
	int iVar0;
	
	if (!Function_18(bParam0))
	{
		Function_16();
		return;
	}
	iVar0 = Function_15(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_11(char* cParam0, bool bParam1) //Position: 0x2D9 / 729
{
	struct<4> Var0;
	
	if (!Function_18(bParam1))
	{
		return;
	}
	switch (Function_15(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_13(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_15(bParam1), Function_13(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_15(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x3FD / 1021
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x422 / 1058
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x442 / 1090
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x459 / 1113
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x474 / 1140
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
			Function_17(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6BB / 1723
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x6E4 / 1764
{
	if (!Function_14(iParam0))
	{
		return 0;
	}
	if (!Function_19(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_19(int iParam0) //Position: 0x708 / 1800
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x71D / 1821
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x73B / 1851
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_18(bParam0))
	{
		return;
	}
	iVar0 = Function_15(bParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_22(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_22(int iParam0) //Position: 0x7E1 / 2017
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x80B / 2059
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xA61 / 2657
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_15(bParam0) == 1)
	{
		iVar2 = Function_13(bParam0);
		Function_163(&(Global_3422[iVar240]));
		Function_162(4194304);
		if (bParam3)
		{
			Function_114(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_108(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_114(iVar2, &uVar0, 0);
		}
		bVar1 = Function_107();
		if (bParam1)
		{
			Function_91(iVar2, bParam0, bVar1);
			Function_90();
		}
	}
	Function_37(bParam0, bParam1, uParam2, bVar1);
	if (Function_15(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_29(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_15(bParam0) == 1)
		{
			iVar2 = Function_13(bParam0);
			if (iVar2 != 1)
			{
				(&Global_12976 + 36)->f_32++;
				if ((&Global_12976 + 36)->f_32 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_25();
}

void Function_25() //Position: 0xB4E / 2894
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_26(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_26(int iParam0, bool bParam1) //Position: 0xB7E / 2942
{
	int iVar0;
	
	iVar0 = Function_27(iParam0);
	if (!Function_14(iVar0))
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

int Function_27(int iParam0) //Position: 0xBBB / 3003
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xBD5 / 3029
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xBEB / 3051
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		return;
	}
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000018:
			iVar0 = 2;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_30(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_29(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_29(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_29(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_29(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_29(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_29(57, 0);
			}
			break;
	}
	if (iVar0 != 4294967295)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			AWARD_ACHIEVEMENT(iVar0);
		}
	}
	return;
}

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xEE2 / 3810
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_32(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_31(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_31(char* cParam0, int iParam1) //Position: 0xF4E / 3918
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(cParam0, "4", 16);
	}
	return;
}

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0xF85 / 3973
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_3380)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		if (Function_35(DECOR_GET_INT(bParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		if (Global_3403 || Global_3404)
		{
			return 0;
		}
	}
	if (iParam2 == 2)
	{
		switch (Function_34(uVar0))
		{
			case 0x00000002:
				if (!Function_33(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_33(var uParam0, int iParam1) //Position: 0xFFD / 4093
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x1010 / 4112
{
	switch (cParam0)
	{
		case 0x00000001:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00004000:
		case 0x00008000:
		case 0x00010000:
		case 0x00020000:
		case 0x00040000:
		case 0x00200000:
			return 0;
			break;
		
		case 0x00000004:
		case 0x00000008:
		case 0x00000020:
		case 0x00001000:
		case 0x00080000:
		case 0x00100000:
			return 1;
			break;
		
		case 0x00000002:
		case 0x00000010:
		case 0x00000800:
		case 0x00002000:
		case 0x00400000:
			return 2;
			break;
	}
	return 0;
}

int Function_35(int iParam0) //Position: 0x10B1 / 4273
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_36(&bVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (bVar1 >= 0)
	{
		bVar1 = (bVar1 && (bVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_36(bool bParam0, bool bParam1) //Position: 0x10EE / 4334
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1101 / 4353
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_18(bParam0))
	{
		Function_16();
		return;
	}
	iVar0 = Function_15(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_13(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_22(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_86();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_80(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (iVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_13(bParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_41(1);
			Function_39(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_38(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_38(int iParam0, int iParam1) //Position: 0x1313 / 4883
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x134D / 4941
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_40())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_40() //Position: 0x138F / 5007
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x1398 / 5016
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_72();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_42();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_36(&Global_63095, 1);
		Function_36(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_42() //Position: 0x13E9 / 5097
{
	Function_70();
	Function_69();
	Function_69();
	Function_68();
	Function_68();
	Function_67();
	Function_67();
	Function_50();
	Function_50();
	if (!Function_40())
	{
		Function_47();
		Function_46();
		Function_45();
		Function_44();
	}
	Function_43();
	return;
}

void Function_43() //Position: 0x141C / 5148
{
	Global_34581[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_34581[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_34581[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_34581[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_34581[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_34581[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_34581[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_34581[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_34581[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_34581[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_34581[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_34581[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_34581[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_34581[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_34581[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_34581[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_34581[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_34581[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_34581[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_34581[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_34581[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_44() //Position: 0x1522 / 5410
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_25986[1])
	{
		if (fVar0 > 50.0f)
		{
			fVar0 = 50.0f;
		}
	}
	else
	{
		fVar0 = 0.0f;
	}
	Global_83815 = fVar0;
	return;
}

void Function_45() //Position: 0x1555 / 5461
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = bVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76695[iVar13] = 4294967295;
		Global_76695[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	return;
}

void Function_46() //Position: 0x16E3 / 5859
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = bVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76543[iVar13] = 4294967295;
		Global_76543[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_76694 == 4294967295 && Global_76694 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) != 2)
		{
			Global_76694 = 4294967295;
		}
	}
	return;
}

void Function_47() //Position: 0x1897 / 6295
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x18A5 / 6309
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(bVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, bVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], bVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(bVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, bVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[bVar3] = _GET_AMMO_AMOUNT(bVar0, bVar3, 0);
			bVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, bVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = bVar8;
					iParam0->f_1120 = bVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (bVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, bVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

var Function_49() //Position: 0x1A96 / 6806
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1AAB / 6827
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 <= 39)
	{
		switch (iVar4)
		{
			case 0x00000015:
			case 0x00000016:
				iVar2 = 0;
				break;
			
			default:
				iVar2 = ((Function_66((50 + iVar4)) + Function_66((183 + iVar4))) + Function_66((90 + iVar4)));
				break;
		}
		if (iVar2 > iVar3)
		{
			bVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_51(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B46 / 6982
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > TO_FLOAT(bParam1))
	{
		Function_65(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_64(iParam0);
	if (bParam2)
	{
		Function_52(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1DE1 / 7649
{
	char* cVar0;
	char* cVar1[32];
	struct<8> Var9;
	int iVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(bParam2));
	}
	else
	{
		cVar0 = F2STR(bParam2, 6, 2);
	}
	strcpy(&Global_35278[iParam020] + 16, "", 32);
	if (bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_35278[iParam020] + 16, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_35278[iParam020].f_76 != 3 || Global_35278[iParam020].f_48 != 21)
	{
		stradd(&Global_35278[iParam020] + 16, "$", 32);
	}
	stradd(&Global_35278[iParam020] + 16, cVar0, 32);
	switch (Global_35278[iParam020].f_48)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_35278[iParam020] + 16, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if (bParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(bParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((bParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
					if (bVar4 > 24)
					{
						bVar3 = (bVar4 / 24);
						bVar4 = (bVar4 - bVar3 * 24);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(bVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, cVar0, 32);
				stradd(&Global_35278[iParam020] + 16, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			bParam2 = (bParam2 * 3,28084f);
			if (bParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				bParam2 = (bParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_35278[iParam020] + 16, " mi", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " days", 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_35278[iParam020] + 16, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_63(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		iVar21 = 0;
		switch (Global_35278[iParam020].f_48)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_62(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_62(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_60(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_57(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_54(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_53(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_53() //Position: 0x240E / 9230
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x2416 / 9238
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2427 / 9255
{
	char* cVar0[32];
	
	if (bParam3)
	{
		if (iParam1 < 0)
		{
			strcpy(&cVar0, "lvl_", 32);
			straddi(&cVar0, iParam0 + 1, 32);
			stradd(&cVar0, "_icon", 32);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x251C / 9500
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2535 / 9525
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x259A / 9626
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x25AC / 9644
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x25BE / 9662
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_CALCULATE_PROGRESSBAR_VALUES: STAT_INVALID");
		return;
	}
	if (Global_35278[iParam020].f_64 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_35278[iParam020].f_64;
	}
	fVar1 = Global_35278[iParam020].f_60;
	if (((Function_61(iParam0) != 19 || Function_61(iParam0) != 17) || Function_61(iParam0) != 10) || Function_61(iParam0) != 9)
	{
		if (fParam1 > fVar1)
		{
			fParam1 = fVar1;
		}
		if (fParam1 < fVar0)
		{
			fParam1 = fVar0;
		}
		if (fParam2 > -(fParam1 - fVar1))
		{
			fParam2 = -(fParam1 - fVar1);
		}
		if (fParam2 < (fVar0 - fParam1))
		{
			fParam2 = (fVar0 - fParam1);
		}
		fVar2 = ((fParam1 - fVar1) / (fVar0 - fVar1));
		fVar3 = (fParam2 / (fVar0 - fVar1));
		*uParam3 = ROUND((fVar2 * 100.0f));
		*uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		*uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		*uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_61(int iParam0) //Position: 0x26EE / 9966
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x26FD / 9981
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x2736 / 10038
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x2773 / 10099
{
	if (Global_35278[iParam020].f_64 == 0.0f)
	{
		if (Global_34581[iParam0] < Global_35278[iParam020].f_64)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_35278[iParam020].f_60 == 0.0f)
	{
		if (Global_34581[iParam0] > Global_35278[iParam020].f_60)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_35278[iParam020]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x290D / 10509
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_35278[iParam020].f_52;
	if (iVar1 == 4294967295)
	{
		return 0;
	}
	iVar0 = iVar1;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a LifetimeStat out of bounds.");
		return 0;
	}
	if (bParam2)
	{
		Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
	}
	else
	{
		Global_34581[iVar1] = bParam1;
	}
	if (Global_35278[iVar120].f_64 == 0.0f)
	{
		if (Global_34581[iVar1] < Global_35278[iVar120].f_64)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_64;
		}
	}
	if (Global_35278[iVar120].f_60 == 0.0f)
	{
		if (Global_34581[iVar1] > Global_35278[iVar120].f_60)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_34581[iVar1] = Global_35278[iVar120].f_60;
		}
	}
	return 1;
}

int Function_66(bool bParam0) //Position: 0x2B27 / 11047
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2B68 / 11112
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 4)
	{
		iVar2 = ((Function_66((50 + iVar3) + 15) + Function_66((183 + iVar3) + 15)) + Function_66((90 + iVar3) + 15));
		if (iVar2 > iVar5)
		{
			iVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_51(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_68() //Position: 0x2BF1 / 11249
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		if (iVar3 > 7 || iVar3 < 10)
		{
			iVar2 = ((Function_66((50 + iVar3) + 8) + Function_66((183 + iVar3) + 8)) + Function_66((90 + iVar3) + 8));
			if (iVar2 > iVar5)
			{
				iVar4 = iVar3;
				iVar5 = iVar2;
			}
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_51(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_69() //Position: 0x2C88 / 11400
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_66((50 + iVar3)) + Function_66((183 + iVar3))) + Function_66((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			bVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_51(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_70() //Position: 0x2D07 / 11527
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2D2D / 11565
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + bParam1);
	Function_65(iParam0, bParam1, 1);
	Function_64(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_52(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_72() //Position: 0x2F37 / 12087
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_74(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_74(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_73(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0,5f);
		FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
	}
	else
	{
		Global_34165 = { StackVal, StackVal, vVar0 };
	}
	Global_34165.f_156 = Global_34165.f_12;
	*(&Global_34165 + 144) = { StackVal, StackVal, Global_34165 };
	Global_34165.f_160 = Global_34165.f_16;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_73(vector3 vParam0) //Position: 0x2FD8 / 12248
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2FF0 / 12272
{
	int iVar0;
	
	iVar0 = Function_78(uParam2, uParam3);
	if (Function_77(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_76(&Global_63095, 1);
			Function_36(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_76(&Global_63095, 2);
			Function_36(&Global_63095, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_76(&Global_63095, 2);
		Function_36(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_75();
	return StackVal, StackVal, Function_75();
}

vector3 Function_75() //Position: 0x30D7 / 12503
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x30E0 / 12512
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x30EF / 12527
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3105 / 12549
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_79(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_79(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_77(bVar0) && !bParam1)
	{
		bVar0 = Function_78(bParam0, 1);
	}
	return bVar0;
}

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x31CC / 12748
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x31E9 / 12777
{
	int iVar0;
	int iVar1;
	
	if (!Function_14(bParam0))
	{
		return;
	}
	switch (Function_15(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_13(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_85(12, 1, 0, 0);
				Function_84(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_85(13, 1, 0, 0);
				Function_84(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_85(14, 1, 0, 0);
				Function_84(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_85(15, 1, 0, 0);
				Function_84(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_85(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_13(bParam0))
			{
				case 0x00000000:
					if (Function_83(bParam0) == 1)
					{
						iVar0 = Function_82(bParam0);
						if (Function_81(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_84(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_84(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_84(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_84(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_84(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_84(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_84(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_84(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_84(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_84(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_84(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_84(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_84(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_84(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_84(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_84(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_84(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_84(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_84(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_84(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_85(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_85(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_85(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_82(bParam0) == 0)
			{
				if (Function_83(bParam0) == 1)
				{
					Function_85(458, 1, 0, 0);
					iVar0 = Function_13(bParam0);
					if (Function_81(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_84(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_84(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_84(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_84(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_84(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_84(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_84(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_84(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_83(bParam0) == 1)
			{
				Function_85(400, 1, 0, 0);
			}
			switch (Function_13(bParam0))
			{
				case 0x00000001:
					Function_85(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_84(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_84(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_84(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_85(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_84(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_84(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

bool Function_81(int iParam0) //Position: 0x36C5 / 14021
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x36DB / 14043
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x36FA / 14074
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3714 / 14100
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x377B / 14203
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(bParam1));
	Function_65(iParam0, TO_FLOAT(bParam1), 1);
	Function_64(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_52(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_86() //Position: 0x399B / 14747
{
	int iVar0;
	int iVar1;
	
	if (!Function_28(Global_6269))
	{
		return;
	}
	iVar0 = Function_66(24);
	iVar1 = Function_27(Global_6269);
	if (!Function_28(iVar0) && Function_89(iVar1) < 0)
	{
		Function_51(24, Global_6269, 0);
		Function_87(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_89(Function_27(iVar0)))
	{
		Function_51(24, Global_6269, 0);
		Function_87(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3A1B / 14875
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3D6D / 15725
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_89(int iParam0) //Position: 0x3DF0 / 15856
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3E0A / 15882
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3E38 / 15928
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_28(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_106(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_66(42) - Global_34165.f_116);
				bVar1 = (Function_66(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_63(49)) - Global_34165.f_124);
				bVar3 = (Function_66(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_66(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_105(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_92(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_3422[iParam040] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_22(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_34165.f_136 = 0.0f;
	Global_34165.f_140 = 0.0f;
	Global_34165.f_116 = 0;
	Global_34165.f_120 = 0;
	Global_34165.f_124 = 0;
	Global_34165.f_128 = 0;
	return;
}

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x40D6 / 16598
{
	int iVar0;
	bool bVar1;
	
	if (Function_104(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_66(3);
	Function_101();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_99(3, bVar1);
		if (!bParam2)
		{
			if (!Function_33(Global_76848, 4))
			{
				Function_30(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_85(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_62(3));
	iVar0 = Function_66(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_94(4, Function_98(Global_12976.f_156), 1);
				Function_93(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_94(4, Function_98(Global_12976.f_156), 1);
				Function_93(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_94(4, Function_98(Global_12976.f_156), 1);
				Function_93(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_94(4, Function_98(Global_12976.f_156), 1);
				Function_93(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_94(4, Function_98(Global_12976.f_156), 1);
				Function_93(Global_12976.f_152, Global_12976.f_156);
				if (Global_12976.f_152 != 6 || Global_12976.f_152 != 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

void Function_93(int iParam0, int iParam1) //Position: 0x4299 / 17049
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x44F7 / 17655
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_87(iParam0, cParam1, 0, 1);
	iVar1 = Function_95();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	if (bParam2)
	{
		Global_49205[iVar120].f_72 = 5;
	}
	else
	{
		Global_49205[iVar120].f_72 = 6;
	}
	return 1;
}

int Function_95() //Position: 0x467C / 18044
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_48 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_96();
	return 0;
}

void Function_96() //Position: 0x471B / 18203
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_49199 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_49199[iVar0] = Global_49199[iVar1];
		Global_49205[iVar020] = { StackVal, Global_49205[iVar120] };
		*(&Global_49205[iVar020] + 8) = { StackVal, *(&Global_49205[iVar120] + 8) };
		*(&Global_49205[iVar020] + 16) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_49205[iVar120] + 16) };
		Global_49205[iVar020].f_48 = Global_49205[iVar120].f_48;
		Global_49205[iVar020].f_68 = Global_49205[iVar120].f_68;
		Global_49205[iVar020].f_72 = Global_49205[iVar120].f_72;
		Function_97(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_97(int iParam0) //Position: 0x47CA / 18378
{
	Global_49199[iParam0] = 0.0f;
	strcpy(&(Global_49205[iParam020]), "", 8);
	strcpy(&Global_49205[iParam020] + 8, "", 8);
	strcpy(&Global_49205[iParam020] + 16, "", 32);
	Global_49205[iParam020].f_48 = 4294967295;
	Global_49205[iParam020].f_52 = 4294967295;
	Global_49205[iParam020].f_68 = 4294967295;
	Global_49205[iParam020].f_72 = 4294967295;
	return;
}

var Function_98(int iParam0) //Position: 0x4828 / 18472
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_ntr1";
			break;
		
		case 0x00000001:
			return "sr_ntr2";
			break;
		
		case 0x00000002:
			return "sr_ntr3";
			break;
		
		case 0x00000003:
			return "sr_ntr4";
			break;
		
		case 0x00000004:
			return "sr_ntr5";
			break;
		
		case 0x00000005:
			return "sr_ntr6";
			break;
	}
	return "sr_ntr1";
}

int Function_99(int iParam0, bool bParam1) //Position: 0x48B7 / 18615
{
	bool bVar0;
	int iVar1;
	
	Function_85(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_100(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_95();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_100(int iParam0, int iParam1) //Position: 0x4A54 / 19028
{
	int iVar0;
	
	iVar0 = (Global_49199 - 1);
	while (iVar0 > 0)
	{
		if (Global_49205[iVar020].f_68 == iParam0)
		{
			if (iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_101() //Position: 0x4A95 / 19093
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4AAB / 19115
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4AEB / 19179
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4B2B / 19243
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4B3A / 19258
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_5743[iParam09] + 12)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_5743[iParam09] + 12)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	fParam3 = (fParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			iVar2 = 3;
			iVar3 = (iVar0 + iVar1);
			if (iVar3 > 6)
			{
				return 1;
			}
			if (iVar3 > 4)
			{
				return 2;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (fParam3 <= Global_5743[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_5743[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_5743[iParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_5743[iParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		default:
			iVar1 = 3;
			iVar2 = 3;
			if (iVar0 == 3)
			{
				return 1;
			}
			if (iVar0 == 2)
			{
				return 2;
			}
			return 3;
			break;
	}
	iVar3 = ((iVar0 + iVar1) + iVar2);
	if (iVar3 > 9)
	{
		return 1;
	}
	if (iVar3 > 6)
	{
		return 2;
	}
	return 3;
}

int Function_106(int iParam0) //Position: 0x4D02 / 19714
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

var Function_107() //Position: 0x4D97 / 19863
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4DBC / 19900
{
	if (!Function_28(iParam0))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_92(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_92(25, 1, 0);
			Function_113(1, 1);
			break;
		
		case 0x00000015:
			Function_113(50, 1);
			Function_92(250, 1, 0);
			Function_109(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_92(75, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_92(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_113(50, 1);
			Function_92(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_113(5, 1);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_92(75, 1, 0);
			Function_109(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_113(5, 1);
			Function_92(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_92(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_113(25, 1);
			Function_92(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_113(10, 1);
			Function_92(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_92(50, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_92(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_92(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_109(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_113(20, 1);
			Function_92(75, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_113(25, 1);
			Function_92(150, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_113(10, 1);
			Function_92(150, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_92(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_109(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_109(100, 1, 0);
			Function_113(5, 1);
			break;
		
		case 0x0000000F:
			Function_113(3, 1);
			Function_92(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_109(125, 1, 0);
			Function_92(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_113(50, 1);
			Function_92(100, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_113(50, 1);
			Function_92(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_113(75, 1);
			Function_92(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_92(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_92(75, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_92(250, 1, 0);
			Function_109(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_92(75, 1, 0);
			Function_109(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_92(200, 1, 0);
			Function_109(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_92(75, 1, 0);
			Function_109(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_92(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_113(50, 1);
			Function_92(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_113(100, 1);
			Function_92(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_92(200, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_92(300, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_92(300, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_92(300, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_92(500, 1, 0);
			Function_109(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_92(150, 1, 0);
			Function_109(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_109(25, 1, 0);
			Function_113(100, 1);
			break;
		
		case 0x0000002A:
			Function_92(150, 1, 0);
			Function_109(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_109(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_109(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_109(150, 1, 0);
			Function_113(100, 1);
			break;
		
		case 0x00000035:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_109(150, 1, 0);
			Function_113(100, 1);
			break;
		
		case 0x00000032:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_109(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x5277 / 21111
{
	int iVar0;
	bool bVar1;
	
	if (Function_104(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_66(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_99(1, bVar1);
			if (!bParam2)
			{
				if (!Function_33(Global_76848, 1))
				{
					Function_30(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_112(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_33(Global_76848, 2))
				{
					Function_30(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_85(1, bVar1, 0, 0);
	}
	else
	{
		Function_111(1, (4294967295 * bVar1), 0);
	}
	if (Function_66(1) <= 4294962296)
	{
		Function_51(1, 4294962296, 0);
	}
	else if (Function_66(1) >= 5000)
	{
		Function_51(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_62(1));
	iVar0 = Function_66(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_94(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_94(2, Function_110(Global_12976.f_152), 0);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_12976.f_152 = 2;
				Function_94(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_94(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_94(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", Global_34573))
			{
				DELETE_ITEM("HONOR_ROSARY", Global_34573, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_12976.f_152 = 2;
				Function_94(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_94(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_94(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_94(2, Function_110(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_94(2, Function_110(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_94(2, Function_110(Global_12976.f_152), 1);
				if (Global_12976.f_156 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_12976.f_152 = 5;
				Function_94(2, Function_110(Global_12976.f_152), 0);
			}
			break;
	}
	Function_93(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_110(int iParam0) //Position: 0x558C / 21900
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x562F / 22063
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(bParam1));
	Function_64(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_52(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

int Function_112(int iParam0, bool bParam1) //Position: 0x582A / 22570
{
	bool bVar0;
	int iVar1;
	
	Function_111(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_100(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_95();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_113(bool bParam0, bool bParam1) //Position: 0x59C6 / 22982
{
	bool bVar0;
	
	bVar0 = Function_66(0);
	if ((Function_66(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_85(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_66(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_85(597, bParam0, 0, 0);
	}
	if ((Function_66(597) + Function_66(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5A91 / 23185
{
	struct<4> Var0;
	
	if (!Function_28(iParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_160(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_157(Global_30640[0]);
			Function_157(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_155(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_157(Global_30668[0]);
			Function_146(0);
			Function_144(2, 1);
			Function_144(0, 1);
			Function_144(1, 1);
			break;
		
		case 0x00000003:
			Function_157(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_157(Global_30668[0]);
			Function_157(Global_30640[0]);
			Function_142(0, 1);
			Function_142(15, 1);
			Function_142(9, 1);
			Function_142(12, 1);
			Function_142(16, 1);
			Function_144(3, 1);
			break;
		
		case 0x00000005:
			Function_157(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_155(21, bParam2, 4);
			Function_157(Global_30668[0]);
			Function_144(39, 1);
			break;
		
		case 0x00000007:
			Function_157(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_157(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_141(4))
					{
						Function_131(4, 0, 0, 1);
					}
				}
			}
			Function_157(Global_30640[0]);
			Function_157(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_157(Global_30640[0]);
			Function_157(Global_30668[2]);
			Function_130(&(Global_29008[Global_30668[2]]), 32768);
			Function_129(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_155(9, bParam2, 4);
			Function_157(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_157(Global_30640[0]);
			Function_157(Global_30658[0]);
			Function_130(&(Global_29008[Global_30658[0]]), 32768);
			Function_129(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_157(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_157(Global_30640[0]);
			Function_157(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_157(Global_30640[1]);
			Function_157(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_157(Global_30679[0]);
			Function_157(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_157(Global_30658[5]);
			Function_157(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_155(21, bParam2, 4);
			Function_157(Global_30640[4]);
			Function_157(Global_30658[4]);
			Function_128(&Global_76847, 0x2000000);
			Function_128(&Global_76847, 0x4000000);
			Function_128(&Global_76847, 4096);
			Function_128(&Global_76847, 8);
			Function_128(&Global_76847, 8388608);
			Function_128(&Global_76847, 524288);
			Function_128(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_157(Global_30640[4]);
			Function_157(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_129(&(Global_29008[Global_30640[4]]), 256);
			Function_157(Global_30640[4]);
			Function_157(Global_30658[0]);
			Function_130(&(Global_29008[Global_30658[0]]), 32768);
			Function_129(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_157(Global_30640[0]);
			Function_157(Global_30640[5]);
			Function_155(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_157(Global_30658[3]);
			Function_130(&(Global_29008[Global_30658[3]]), 32768);
			Function_129(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_155(9, bParam2, 4);
			Function_157(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_130(&(Global_29008[Global_30679[1]]), 32768);
			Function_157(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_155(12, bParam2, 4);
			Function_129(&(Global_29008[Global_30679[1]]), 256);
			Function_157(Global_30668[3]);
			Function_157(Global_30693[0]);
			Function_157(Global_30685[0]);
			Function_146(4);
			Function_142(13, 1);
			Function_142(1, 1);
			Function_142(18, 1);
			Function_144(34, 1);
			Function_144(44, 1);
			Function_144(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_155(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_157(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_157(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_157(Global_30693[0]);
			Function_157(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_157(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_157(Global_30685[0]);
			Function_157(Global_30693[0]);
			Function_157(Global_30693[1]);
			Function_157(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_155(23, bParam2, 3);
			Function_142(23, 1);
			Function_157(Global_30685[0]);
			Function_157(Global_30685[2]);
			Function_130(&(Global_29008[Global_30685[2]]), 32768);
			Function_129(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_155(19, bParam2, 4);
			Function_157(Global_30685[0]);
			Function_157(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_155(24, bParam2, 3);
			Function_142(24, 1);
			Function_157(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_157(Global_30685[0]);
			Function_157(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_157(Global_30693[12]);
			Function_157(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_157(Global_30693[12]);
			Function_157(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_155(25, bParam2, 10);
			Function_157(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_157(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_157(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_155(13, bParam2, 4);
			Function_157(Global_30693[2]);
			Function_157(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_141(8))
				{
					Function_131(8, 0, 0, 1);
				}
			}
			Function_157(Global_30685[0]);
			Function_146(9);
			Function_142(7, 1);
			Function_142(11, 1);
			Function_142(3, 1);
			Function_142(20, 1);
			Function_144(57, 1);
			break;
		
		case 0x0000002A:
			Function_155(2, bParam2, 4);
			Function_157(Global_30717[0]);
			Function_157(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_157(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_157(Global_30717[0]);
			Function_157(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_157(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_157(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_157(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_155(17, bParam2, 4);
			Function_157(Global_30723[0]);
			Function_157(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_126(15))
				{
					Function_121(15, 0, 1);
				}
			}
			Function_129(&(Global_29008[Global_30717[1]]), 256);
			Function_146(11);
			Function_157(Global_30717[1]);
			Function_157(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_157(Global_30717[1]);
			Function_157(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_157(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_157(Global_30717[1]);
			Function_115(11);
			Function_146(12);
			Global_16537[1121].f_40 = 0;
			Function_144(56, 1);
			if (!bParam2)
			{
				if (!Function_141(9))
				{
					Function_131(9, 0, 0, 0);
				}
				if (!Function_141(10))
				{
					Function_131(10, 0, 0, 1);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_115(int iParam0) //Position: 0x6381 / 25473
{
	bool bVar0;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_120(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_120(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), false);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_116(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_REMOVE(Global_16537[iParam021].f_80, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x64F0 / 25840
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal && Global_8723[iVar04] != iParam0 != iParam1)
			{
				Global_8723[iVar04] = 4294967294;
				Global_8723[iVar04].f_4 = 0;
				Global_8723[iVar04].f_8 = 0;
				if (IS_BLIP_VALID(Global_9724[iVar0]))
				{
					REMOVE_BLIP(Global_9724[iVar0]);
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_118(Function_119(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_118(Function_119(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_118(StackVal);
				vVar1 = { StackVal, StackVal, Function_118(StackVal) };
				if (Function_117(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
				{
					Global_8723[iVar04] = 4294967294;
					Global_8723[iVar04].f_4 = 0;
					Global_8723[iVar04].f_8 = 0;
					if (IS_BLIP_VALID(Global_9724[iVar0]))
					{
						REMOVE_BLIP(Global_9724[iVar0]);
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x65F6 / 26102
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x6623 / 26147
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = iParam0 & 32767;
	bVar4 = SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_119(vector3 vParam0) //Position: 0x667A / 26234
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

void Function_120(bool bParam0, bool bParam1) //Position: 0x66C8 / 26312
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 1);
	}
	return;
}

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x671C / 26396
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_126(bParam0))
	{
		if (!Function_141(bParam0))
		{
			Function_131(bParam0, 1, 0, 0);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_85(457, 1, 0, 0);
		Function_124(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_123(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 0);
			}
			else
			{
				Function_122();
			}
		}
	}
	return;
}

void Function_122() //Position: 0x68BA / 26810
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x68C0 / 26816
{
	iParam0 = iParam0;
	if (Global_3380 && !iParam1 != 1)
	{
		return 1;
	}
	if (Global_3382 && !iParam1 != 2)
	{
		return 1;
	}
	if (Global_3392 && !iParam1 != 6)
	{
		return 1;
	}
	if (Global_3384 && !iParam1 != 4)
	{
		return 1;
	}
	if (Global_3393 && iParam2)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (Global_3385 && !iParam1 != 3)
	{
		return 1;
	}
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_124(bool bParam0, int iParam1) //Position: 0x6964 / 26980
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x69B9 / 27065
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x69CF / 27087
{
	if (!Function_125(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_127(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_127(int iParam0, int iParam1) //Position: 0x6A20 / 27168
{
	int iVar0;
	
	if (!Function_125(iParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_128(var uParam0, int iParam1) //Position: 0x6A4D / 27213
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6A5C / 27228
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6A73 / 27251
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6A82 / 27266
{
	struct<8> Var0;
	
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_140(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_141(bParam0))
	{
		Function_85(456, 1, 0, 0);
		Function_124(bParam0, 2);
		if (bParam2)
		{
			if (!Function_123(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 5);
			}
			else
			{
				Function_122();
			}
		}
		Function_134(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_133() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_133() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_132(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_33(Global_76846, 2))
		{
			Function_30(Global_34573, 2, 1, 0);
		}
	}
}

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6BCC / 27596
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

bool Function_133() //Position: 0x6C17 / 27671
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6C44 / 27716
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_138(bParam0, Function_139(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_138(bParam0, Function_139(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_137(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_136(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_135(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_135(int iParam0) //Position: 0x6DF4 / 28148
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_125(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

void Function_136(bool bParam0, bool bParam1) //Position: 0x6E4B / 28235
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

var Function_137(int iParam0) //Position: 0x6E70 / 28272
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_125(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

bool Function_138(bool bParam0, bool bParam1) //Position: 0x6EC6 / 28358
{
	int iVar0;
	
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_139(bool bParam0) //Position: 0x6F25 / 28453
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x6F31 / 28465
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x6F4D / 28493
{
	if (!Function_125(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_127(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_142(int iParam0, int iParam1) //Position: 0x6F9F / 28575
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_143(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_143(int iParam0, int iParam1) //Position: 0x7012 / 28690
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x706E / 28782
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_145(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_145(int iParam0, int iParam1) //Position: 0x70DF / 28895
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x7139 / 28985
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_154(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_154(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), true);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Function_85(468, 1, 0, 0);
			Function_84(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_132("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_116(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_131(14, 1, 0, 0);
				Function_147(14, 1, 0, 0, 0);
			}
			if (!Function_123(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 6);
			}
			else
			{
				Function_122();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			bVar1 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar1))
			{
				DECOR_REMOVE(bVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_132("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_85(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_84(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x73E5 / 29669
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_140(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_127(bParam0, 2))
	{
		Function_85(456, 1, 0, 0);
		Function_124(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_132(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_138(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_124(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_123(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 0);
			}
			else
			{
				Function_122();
			}
		}
		Function_134(bParam0);
		if (StackVal && !Function_153(((((!Function_133() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_153((((Function_133() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_33(Global_76846, 2))
		{
			Function_30(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_149();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_148(3, bParam1);
				break;
			
			case 0x00000005:
				Function_148(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_148(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_148(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_148(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_148(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_84(2, 24);
				break;
			
			case 0x00000003:
				Function_84(2, 25);
				break;
			
			case 0x0000000F:
				Function_84(2, 26);
				break;
			
			case 0x0000000D:
				Function_84(2, 27);
				break;
			
			case 0x0000000E:
				Function_84(2, 28);
				break;
			}
	}
}

void Function_148(int iParam0, bool bParam1) //Position: 0x7674 / 30324
{
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	return;
	return;
}

void Function_149() //Position: 0x76D3 / 30419
{
	if (Function_125(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_152(Global_28180);
			Global_28180.f_8 = Function_150(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_152(Global_28180);
			Global_28180.f_8 = Function_150(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_150(int iParam0, int iParam1) //Position: 0x774E / 30542
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	iVar18 = 1;
	iVar19 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_26(6, 0) || Function_26(12, 0))
					{
						bVar6 = StackVal;
					}
					strcpy(&cVar7, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -2177,057f, 16,426f, 2626,285f };
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					vVar3 = { 400.0f, 400.0f, 400.0f };
					strcpy(&cVar7, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_151(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_26(5, 0))
					{
						vVar0 = { -4120,147f, 18,356f, 3039,531f };
						vVar3 = { 500.0f, 500.0f, 500.0f };
						iVar16 = 0;
					}
					strcpy(&cVar7, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					vVar0 = { -4178,186f, 32,616f, 4582,207f };
					vVar3 = { 500.0f, 500.0f, 500.0f };
					strcpy(&cVar7, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_151(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_151(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_151(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_151(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_26(26, 0))
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_151(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_151(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_151(27) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					strcpy(&cVar7, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_151(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_151(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_151(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_151(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_26(17, 0) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					strcpy(&cVar7, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_151(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(6, 0) && Function_151(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_151(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(9, 0) && Function_151(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_151(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_26(8, 0) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					strcpy(&cVar7, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					bVar6 = StackVal;
					strcpy(&cVar7, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_73(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_73(StackVal, StackVal, vVar3))
			{
				if (GET_OBJECT_TYPE(bVar6) == 9)
				{
					GET_VOLUME_SCALE(bVar6, &vVar3);
				}
				else
				{
					vVar3 = { 200.0f, 200.0f, 200.0f };
				}
			}
		}
	}
	if (!Function_73(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_151(int iParam0) //Position: 0x8341 / 33601
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x8356 / 33622
{
	int iVar0;
	int iVar1;
	
	if (!Function_125(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[iParam013].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

bool Function_153(bool bParam0, bool bParam1) //Position: 0x83A5 / 33701
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x83B2 / 33714
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x8403 / 33795
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_156(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_160(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_3381 && iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_156(int iParam0, int iParam1) //Position: 0x8471 / 33905
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x8484 / 33924
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_159(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_130(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_85(473, 1, 0, 0);
		iVar0 = Function_158(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_85(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_85(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_85(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_84(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_84(7, 30);
	}
	if (Function_62(473) <= Function_63(473))
	{
		if (!Function_40())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_158(int iParam0) //Position: 0x8583 / 34179
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_81(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

bool Function_159(var uParam0, int iParam1) //Position: 0x85DB / 34267
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x85F7 / 34295
{
	if (!Function_161(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_49(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_49(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_49(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_161(int iParam0) //Position: 0x864E / 34382
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x8660 / 34400
{
	bool bVar0;
	
	if (Function_153(bParam0, 1) && Function_153(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_163(int iParam0) //Position: 0x8694 / 34452
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_164(4, 0, 0);
		}
	}
	return;
}

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x86FB / 34555
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || StackVal != 12 != 20)
	{
		Global_16524 = Global_16524.f_40;
	}
	else
	{
		Global_16524 = StackVal;
	}
	Global_16524.f_4 = 4294967295;
	Global_16524.f_16 = 0;
	if (!StackVal != Global_16524)
	{
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, bParam2);
		Function_165(Global_16524, bVar0, 1);
	}
	return;
}

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x87D8 / 34776
{
	int iVar0;
	
	Function_167(bParam0);
	Function_8(bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, bParam1);
	Function_166();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = bParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else
		{
			SET_RAIN_AMOUNT(0.0f);
			SET_LIGHTNING_AMOUNT(0.0f);
		}
	}
	else
	{
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_166() //Position: 0x8951 / 35153
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x895D / 35165
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		default:
			break;
	}
	return;
}

void Function_168() //Position: 0x89A3 / 35235
{
	Function_169();
	return;
}

void Function_169() //Position: 0x89AC / 35244
{
	Function_170(&Local_174 + 4);
	Function_170(&Local_174 + 32);
	Function_170(&Local_174 + 108);
	Function_170(&Local_174 + 304);
	Function_170(&Local_174 + 500);
	Function_170(&Local_174 + 696);
	Function_170(&Local_174 + 904);
	RELEASE_LAYOUT_REF(Local_174);
	return;
}

void Function_170(bool bParam0) //Position: 0x89EC / 35308
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_171(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_171(var uParam0, int iParam1) //Position: 0x8A12 / 35346
{
	if (Function_173(uParam0[iParam13], 4))
	{
		if (Function_173(uParam0[iParam13], 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP((*uParam0)[iParam13]);
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET((*uParam0)[iParam13]);
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR((*uParam0)[iParam13], 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO((*uParam0)[iParam13]);
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT((*uParam0)[iParam13]);
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*uParam0)[iParam13], 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY((*uParam0)[iParam13]);
					break;
				
				default:
					break;
			}
			Function_172(uParam0[iParam13], 1);
			Function_172(uParam0[iParam13], 2);
			Function_172(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_172(var uParam0, int iParam1) //Position: 0x8B40 / 35648
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_173(var uParam0, bool bParam1) //Position: 0x8B5A / 35674
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_174(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8B77 / 35703
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_200());
	SET_IS_MISSION_SCRIPT(0);
	SET_TIME_ACCELERATION(Global_63398);
	RESET_EXCLUSIVE_JOURNAL_ID();
	ABORT_SCRIPTED_CONVERSATION(0);
	AUDIO_CLEAR_MISSION_NAME_FOR_JOURNAL();
	AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	UNK_0xAC72E757(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	AUDIO_MISSION_RELEASE();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
	Global_30842[2] = 0;
	if (bParam6)
	{
		HUD_ENABLE(true);
	}
	Function_199();
	CLEAR_PRINTED_OBJECTIVE();
	Function_198();
	Function_196(0);
	Function_195();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_194();
	Function_193();
	Function_199();
	ENABLE_JOURNAL_REPLAY(1);
	Function_192(1);
	if (bParam0 && !IS_EXITFLAG_SET())
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	else if (bParam7)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_ACTOR_INVULNERABILITY(Global_34573, false);
	}
	if (bParam7)
	{
		if (IS_ACTOR_VALID(Global_34573))
		{
			TASK_CLEAR(Global_34573);
		}
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		ACTOR_END_FORCE_HOLSTER(Global_34573);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		Function_191(Global_34573);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
	}
	if (IS_ACTOR_VALID(Global_34573) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 1.0f);
	Function_190(Global_28178);
	SET_DUST_LEVEL_MODIFIER(0);
	bParam1 = bParam1;
	if (bParam1)
	{
	}
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	DISABLE_VERIFY_SS(1.0f);
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(0);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	AI_STOP_IGNORING_ACTORS();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	Function_189(1178687);
	Function_187(33039);
	Function_186(0x218003f);
	Function_185(4194560);
	Function_184();
	Function_183();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_180(0, 1, 1);
	}
	else
	{
		Function_180(0, 1, 1);
	}
	Function_179();
	STREAMING_RELEASE_MAIN_POI();
	STREAMING_UNLOAD_SCENE();
	STREAMING_ENABLE_BOUNDS(1);
	if ((!bParam0 && !bParam2) && !IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_IN(1.0f, 1065353216);
		}
	}
	Function_175();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_175() //Position: 0x8D68 / 36200
{
	bool bVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[StackVal], false))
		{
			bVar0 = RAND_INT_RANGE(210, 270);
		}
		else
		{
			return;
		}
		if (Function_178() > 3)
		{
			bVar0 *= 2;
		}
		Function_176(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_176(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x8DBE / 36286
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_177((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_177(bool bParam0) //Position: 0x8E04 / 36356
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_178() //Position: 0x8E29 / 36393
{
	return Global_12976.f_156;
}

void Function_179() //Position: 0x8E34 / 36404
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_129(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_180(int iParam0, bool bParam1, int iParam2) //Position: 0x8E5E / 36446
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_81(Global_29006))
		{
			Function_130(&(Global_29008[Global_29006]), 131072);
			Function_129(&(Global_29008[Global_29006]), 2097152);
			Function_181(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_159(&(Global_29008[iVar0]), 4) || Function_159(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_129(&(Global_29008[iVar0]), 2097155);
					Function_130(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_40())
			{
			}
			WAIT(false);
		}
		if (iParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_181(int iParam0) //Position: 0x8F69 / 36713
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_182())
			{
				return;
			}
		}
		if (!Function_159(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_182() //Position: 0x8FE8 / 36840
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_159(&(Global_29008[iVar0]), 4) || Function_159(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_183() //Position: 0x9045 / 36933
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_30804)
	{
		Global_30804[iVar0] = 1;
		iVar0++;
	}
	Global_30838 = 0;
	return;
}

void Function_184() //Position: 0x906B / 36971
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_30767)
	{
		Global_30767[iVar0] = 1;
		iVar0++;
	}
	Global_30837 = 0;
	return;
}

void Function_185(int iParam0) //Position: 0x9091 / 37009
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_186(int iParam0) //Position: 0x90AE / 37038
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_187(int iParam0) //Position: 0x90C1 / 37057
{
	Function_188(&Global_28842, iParam0);
	return;
}

void Function_188(var uParam0, int iParam1) //Position: 0x90CF / 37071
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_189(bool bParam0) //Position: 0x90EA / 37098
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_190(int iParam0) //Position: 0x9117 / 37143
{
	int iVar0;
	
	if (!Function_125(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_27774[iParam013].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_27774[iParam013].f_16, true);
		iVar0 = GET_ACTOR_FACTION(Global_34573);
	}
	if (Global_27774[iParam013].f_12 & 2 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 4 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 8 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 16 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
	}
	return;
}

void Function_191(bool bParam0) //Position: 0x91DE / 37342
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(bParam0);
	if (IS_OBJECTSET_VALID(Global_16515))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16515);
		}
	}
	return;
}

void Function_192(bool bParam0) //Position: 0x925A / 37466
{
	if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_193() //Position: 0x92CE / 37582
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "ResetMenuDelay"))
		{
			DECOR_REMOVE(Global_34573, "ResetMenuDelay");
		}
	}
	return;
}

void Function_194() //Position: 0x930F / 37647
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			DECOR_REMOVE(Global_34573, "missionFailRmd");
		}
	}
	return;
}

void Function_195() //Position: 0x9350 / 37712
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_196(int iParam0) //Position: 0x9364 / 37732
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_197())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_197() //Position: 0x93A0 / 37792
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_8717[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_198() //Position: 0x93C5 / 37829
{
	Global_8722 = 0.0f;
	return;
}

void Function_199() //Position: 0x93CF / 37839
{
	if (Global_28185 == 2)
	{
		Global_28185.f_4 = 3;
	}
	*(&Global_28185 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28185 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(1);
	return;
}

int Function_200() //Position: 0x93FA / 37882
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_201(bool bParam0) //Position: 0x9414 / 37908
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_LAYOUT(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	if (IS_OBJECT_VALID(bVar1))
	{
		while (IS_OBJECT_VALID(bVar1))
		{
			bVar2 = GET_BLIP_ON_OBJECT(bVar1);
			if (IS_BLIP_VALID(bVar2))
			{
				REMOVE_BLIP(bVar2);
			}
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

int Function_202(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x946C / 37996
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: **WARNING** you are releasing COMPANION_DUMMY!");
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: CompanionsList out of bounds.");
		return 0;
	}
	if (Global_8492[iParam014].f_16)
	{
		Global_8492[iParam014].f_16 = 0;
		STREAMING_EVICT_ACTOR(StackVal, 4294967295);
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(StackVal))
	{
		if (StackVal && IS_ACTOR_HUMAN(bParam4))
		{
			ACTOR_HOLSTER_WEAPON(StackVal, 1);
		}
		if (bParam1)
		{
			RESET_ANIM_SET_FOR_ACTOR(StackVal, 1);
			TASK_CLEAR(StackVal);
			MEMORY_CLEAR_ALL(StackVal);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(StackVal, 0);
		}
		Function_204(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_203(StackVal);
		if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
		{
			MEMORY_CLEAR_RIDING_PREFERENCE(StackVal);
			DEREFERENCE_ACTOR(StackVal);
			if (DECOR_CHECK_EXIST(StackVal, "bACTOR_AVOID_SMALLBRAINS"))
			{
				DECOR_REMOVE(StackVal, "bACTOR_AVOID_SMALLBRAINS");
			}
			if (bParam2)
			{
				DECOR_SET_BOOL(Global_8492[iParam014], "KeepLastTask", true);
			}
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Global_8492[iParam014], 1);
			bVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "Persistent_Char_Brain");
			bVar1 = GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar2), "ScriptStructure", "stolen_flag", 0);
		}
		else
		{
			if (bParam1)
			{
				DESTROY_ACTOR(StackVal);
			}
			else if (bParam3)
			{
				RELEASE_ACTOR(StackVal);
				if (DECOR_CHECK_EXIST(StackVal, "bACTOR_AVOID_SMALLBRAINS"))
				{
					DECOR_REMOVE(StackVal, "bACTOR_AVOID_SMALLBRAINS");
				}
			}
			bVar1 = true;
		}
	}
	Global_8492[iParam014].f_4 = "";
	return bVar1;
}

void Function_203(bool bParam0) //Position: 0x978A / 38794
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_ACTOR(bParam0);
		}
	}
	return;
}

void Function_204(bool bParam0) //Position: 0x97B6 / 38838
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_205() //Position: 0x97CB / 38859
{
	Function_229(&iLocal_899, 0, 0, 4294967295, 4294967295);
	Function_228(1);
	Function_227();
	Function_214();
	Function_212();
	Function_211();
	Function_207(0);
	Function_206(1);
	if (IS_ACTOR_ALIVE(Global_34573))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
		SET_CAN_ACTOR_HARDLOCK_NEUTRALS(Global_34573, 1);
	}
	Function_192(1);
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (bLocal_997)
	{
		DOF_POP();
	}
	if (IS_ACTOR_VALID(bLocal_687))
	{
		AI_STOP_IGNORING_ACTOR(bLocal_687);
		RESET_ANIM_SET_FOR_ACTOR(bLocal_687, 1);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_687, 1);
		MEMORY_CONSIDER_AS(bLocal_687, Global_34573, 2);
		SET_ACTOR_FACTION(bLocal_687, 21);
		TASK_PRIORITY_SET(bLocal_687, 2);
	}
	return;
}

void Function_206(bool bParam0) //Position: 0x984F / 38991
{
	bool bVar0;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bLocal_628, 4294967295, 1);
	if (IS_OBJECTSET_VALID(bVar0))
	{
		GET_OBJECT_POSITION((*&Local_174 + 1660)[6], &vLocal_887);
		LOCATE_GRINGOS_OF_TYPE(bVar0, "fake_poker", &vLocal_887, 20.0f, 0);
		bLocal_896 = false;
		while (bLocal_896 <= GET_OBJECTSET_SIZE(bVar0))
		{
			bLocal_881 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_896, bVar0);
			if (IS_OBJECT_VALID(bLocal_881))
			{
				bLocal_884 = GET_GRINGO_FROM_OBJECT(bLocal_881);
				if (IS_GRINGO_VALID(bLocal_884))
				{
					GRINGO_ALLOW_ACTIVATION(bLocal_884, bParam0);
				}
			}
			bLocal_896++;
		}
		DESTROY_OBJECTSET(bVar0);
	}
	return;
}

void Function_207(bool bParam0) //Position: 0x98E5 / 39141
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(Function_210(5)))
		{
			Function_208(5, 1, 1);
		}
	}
	else if (IS_BLIP_VALID(Function_210(5)))
	{
		Function_208(5, 0, 1);
	}
	return;
}

void Function_208(int iParam0, bool bParam1, bool bParam2) //Position: 0x9914 / 39188
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(StackVal))
	{
		bVar0 = GET_OBJECT_FROM_ACTOR(StackVal);
	}
	else if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
	{
		bVar0 = GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (!IS_BLIP_VALID(Global_8492[iParam014].f_52))
		{
			Global_8492[iParam014].f_52 = ADD_BLIP_FOR_OBJECT(bVar0, 325, 0.0f, 2, 0);
			if (GET_OBJECT_TYPE(bVar0) == 15)
			{
				SET_BLIP_NAME(Global_8492[iParam014].f_52, GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(bVar0)));
			}
		}
		else
		{
			SET_BLIP_MIN_DISTANCE(Global_8492[iParam014].f_52, 0.0f);
		}
		SET_BLIP_PRIORITY(Global_8492[iParam014].f_52, 3);
	}
	else
	{
		if (IS_BLIP_VALID(Global_8492[iParam014].f_52))
		{
			REMOVE_BLIP(Global_8492[iParam014].f_52);
		}
		if (bParam2)
		{
			if (IS_OBJECT_VALID(bVar0))
			{
				if (GET_OBJECT_TYPE(bVar0) == 15)
				{
					bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						Function_203(bVar1);
					}
				}
				Function_209(bVar0);
			}
		}
	}
	return;
}

void Function_209(bool bParam0) //Position: 0x9A0B / 39435
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		}
	}
	return;
}

var Function_210(int iParam0) //Position: 0x9A37 / 39479
{
	return Global_8492[iParam014].f_52;
}

void Function_211() //Position: 0x9A46 / 39494
{
	if (IS_BLIP_VALID(bLocal_898))
	{
		REMOVE_BLIP(bLocal_898);
	}
	return;
}

void Function_212() //Position: 0x9A5B / 39515
{
	if (IS_OBJECT_VALID(bLocal_883))
	{
		Function_213(bLocal_883);
	}
	return;
}

void Function_213(bool bParam0) //Position: 0x9A70 / 39536
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "volrestrict"))
		{
			bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(bVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				if (DECOR_CHECK_EXIST(bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(bVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar0);
				}
			}
		}
		DESTROY_OBJECT(bParam0);
	}
	return;
}

void Function_214() //Position: 0x9AFA / 39674
{
	Function_215();
	return;
}

void Function_215() //Position: 0x9B03 / 39683
{
	Function_216();
	return;
}

void Function_216() //Position: 0x9B0C / 39692
{
	Function_218();
	Function_217(1, 1);
	return;
}

void Function_217(bool bParam0, bool bParam1) //Position: 0x9B1A / 39706
{
	if (bParam0)
	{
		if (VMAG(*(&Global_63098 + 44)) < 0.0f)
		{
			ENABLE_GAME_CAMERA_FOCUS(*(&Global_63098 + 44), -1.0f, 6, 1, 1, 0);
		}
		else
		{
			CAMERA_RESET(0);
		}
	}
	if (IS_OBJECT_VALID(Global_63098))
	{
		if (!bParam1)
		{
			SET_CUTSCENE_STREAMING_LOAD_SCENE(Global_63098, 0);
		}
		DESTROY_OBJECT(Global_63098);
	}
	return;
}

void Function_218() //Position: 0x9B66 / 39782
{
	Function_219();
	if (IS_SCRIPT_VALID(bLocal_989))
	{
		TERMINATE_SCRIPT(bLocal_989);
	}
	return;
}

void Function_219() //Position: 0x9B7E / 39806
{
	Function_220();
	return;
}

void Function_220() //Position: 0x9B87 / 39815
{
	ABORT_SCRIPTED_CONVERSATION(0);
	Function_226();
	Function_225();
	if (iLocal_1005 && !iLocal_1006)
	{
		Function_221();
		iLocal_1006 = 1;
	}
	if (IS_SCRIPT_VALID(bLocal_957))
	{
		TERMINATE_SCRIPT(bLocal_957);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "Gun05Poker"))
	{
		DECOR_REMOVE(Global_34573, "Gun05Poker");
	}
	return;
}

void Function_221() //Position: 0x9BE3 / 39907
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	
	REMOVE_STRING_TABLE("nminigames");
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_224("$/fragments/p_gen_cards02x");
	Function_224("$/fragments/p_gen_dealerButton01x");
	Function_224("$/fragments/p_crd_01x");
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Var2 = iVar0;
			Var2.f_4 = iVar1;
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_223(&Var2, 0) };
			Function_224(&Var4);
			iVar1++;
		}
		iVar0++;
	}
	Function_224("$/fragments/p_crd_chipRedPoker01x");
	Function_224("$/fragments/p_crd_chipGreenPoker01x");
	Function_224("$/fragments/p_crd_chipBluePoker01x");
	iVar0 = 0;
	while (iVar0 < 25)
	{
		strcpy(&Var4, Function_222(iVar0), 32);
		Function_224(&Var4);
		iVar0++;
	}
	STREAMING_EVICT_GRINGO(GET_ASSET_ID("fake_poker", 1));
	REMOVE_ACTION_TREE("custom/sit_poker");
	REMOVE_ACTION_TREE("custom/fake_poker");
	REMOVE_ANIM_SET("nsit_poker");
	REMOVE_ANIM_SET("sit_poker_gped");
	REMOVE_ANIM_SET("sit_poker_hillb");
	REMOVE_ANIM_SET("sit_poker_oldm");
	return;
}

var Function_222(bool bParam0) //Position: 0x9DC2 / 40386
{
	switch (bParam0)
	{
		case 0x00000000:
			return "p_crd_chips004x";
			break;
		
		case 0x00000001:
			return "p_crd_chips009x";
			break;
		
		case 0x00000002:
			return "p_crd_chips040x";
			break;
		
		case 0x00000003:
			return "p_crd_chips044x";
			break;
		
		case 0x00000004:
			return "p_crd_chips049x";
			break;
		
		case 0x00000005:
			return "p_crd_chips090x";
			break;
		
		case 0x00000006:
			return "p_crd_chips094x";
			break;
		
		case 0x00000007:
			return "p_crd_chips099x";
			break;
		
		case 0x00000008:
			return "p_crd_chips400x";
			break;
		
		case 0x00000009:
			return "p_crd_chips404x";
			break;
		
		case 0x0000000A:
			return "p_crd_chips409x";
			break;
		
		case 0x0000000B:
			return "p_crd_chips440x";
			break;
		
		case 0x0000000C:
			return "p_crd_chips444x";
			break;
		
		case 0x0000000D:
			return "p_crd_chips449x";
			break;
		
		case 0x0000000E:
			return "p_crd_chips490x";
			break;
		
		case 0x0000000F:
			return "p_crd_chips494x";
			break;
		
		case 0x00000010:
			return "p_crd_chips499x";
			break;
		
		case 0x00000011:
			return "p_crd_chips900x";
			break;
		
		case 0x00000012:
			return "p_crd_chips904x";
			break;
		
		case 0x00000013:
			return "p_crd_chips909x";
			break;
		
		case 0x00000014:
			return "p_crd_chips940x";
			break;
		
		case 0x00000015:
			return "p_crd_chips944x";
			break;
		
		case 0x00000016:
			return "p_crd_chips949x";
			break;
		
		case 0x00000017:
			return "p_crd_chips990x";
			break;
		
		case 0x00000018:
			return "p_crd_chips994x";
			break;
		
		case 0x00000019:
			return "p_crd_chips999x";
			break;
	}
	LOG_ERROR("Returning invalid chip name");
	return "";
}

struct<32> Function_223(var uParam0, bool bParam1) //Position: 0xA0CB / 41163
{
	char* cVar0[32];
	
	strcpy(&cVar0, "$/fragments/p_crd_", 32);
	if (bParam1)
	{
		strcpy(&cVar0, "p_crd_", 32);
	}
	switch (*uParam0)
	{
		case 0x00000000:
			stradd(&cVar0, "2_", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "3_", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "4_", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "5_", 32);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "6_", 32);
			break;
		
		case 0x00000005:
			stradd(&cVar0, "7_", 32);
			break;
		
		case 0x00000006:
			stradd(&cVar0, "8_", 32);
			break;
		
		case 0x00000007:
			stradd(&cVar0, "9_", 32);
			break;
		
		case 0x00000008:
			stradd(&cVar0, "10_", 32);
			break;
		
		case 0x00000009:
			stradd(&cVar0, "j_", 32);
			break;
		
		case 0x0000000A:
			stradd(&cVar0, "q_", 32);
			break;
		
		case 0x0000000B:
			stradd(&cVar0, "k_", 32);
			break;
		
		case 0x0000000C:
			stradd(&cVar0, "a_", 32);
			break;
	}
	switch (StackVal)
	{
		case 0x00000000:
			if (bParam1)
			{
				stradd(&cVar0, "c01", 32);
			}
			else
			{
				stradd(&cVar0, "c01x", 32);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				stradd(&cVar0, "d01", 32);
			}
			else
			{
				stradd(&cVar0, "d01x", 32);
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				stradd(&cVar0, "h01", 32);
			}
			else
			{
				stradd(&cVar0, "h01x", 32);
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				stradd(&cVar0, "s01", 32);
			}
			else
			{
				stradd(&cVar0, "s01x", 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_224(bool bParam0) //Position: 0xA297 / 41623
{
	STREAMING_EVICT_PROP(GET_ASSET_ID(bParam0, 0));
	return;
}

void Function_225() //Position: 0xA2A6 / 41638
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_226() //Position: 0xA2B8 / 41656
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_227() //Position: 0xA2CD / 41677
{
	ENABLE_CHILD_SECTOR("chu_corral01x");
	ENABLE_CHILD_SECTOR("chu_cityHall_int_01x");
	ENABLE_CHILD_SECTOR("chu_churchWindow01x");
	ENABLE_CHILD_SECTOR("chu_church_int_01x");
	ENABLE_CHILD_SECTOR("chu_wall01props01x");
	ENABLE_CHILD_SECTOR("chu_townCenterProps01x");
	ENABLE_CHILD_SECTOR("chu_path01Props01x");
	ENABLE_CHILD_SECTOR("chu_marketProps01x");
	ENABLE_CHILD_SECTOR("chu_hotel01Props01x");
	ENABLE_CHILD_SECTOR("chu_corral01props01x");
	ENABLE_CHILD_SECTOR("chu_cityHall01Props01x");
	ENABLE_CHILD_SECTOR("chu_bank01props01x");
	return;
}

void Function_228(bool bParam0) //Position: 0xA3FC / 41980
{
	if (bParam0)
	{
		Function_189(1048576);
	}
	else
	{
		Function_162(1048576);
	}
	return;
}

void Function_229(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xA418 / 42008
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_230(*iParam0), iParam2, iParam3, iParam4);
	}
}

var Function_230(int iParam0) //Position: 0xA43C / 42044
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "EVERYTHING";
		
		case 0x00000000:
			return "SILENT";
		
		case 0x00000001:
			return "IDLE";
		
		case 0x00000002:
			return "IDLE_2";
		
		case 0x00000003:
			return "PASTORAL";
		
		case 0x00000004:
			return "PASTORAL_LOW";
		
		case 0x00000005:
			return "PASTORAL_HIGH";
		
		case 0x00000006:
			return "SUSPENSE";
		
		case 0x00000007:
			return "SUSPENSE_LOW";
		
		case 0x00000008:
			return "SUSPENSE_HIGH";
		
		case 0x00000009:
			return "SUSPENSE_DRUM";
		
		case 0x0000000A:
			return "DRAMATIC";
		
		case 0x0000000B:
			return "DRAMATIC_LOW";
		
		case 0x0000000C:
			return "DRAMATIC_LOW_2";
		
		case 0x0000000D:
			return "DRAMATIC_LOW_3";
		
		case 0x0000000E:
			return "DRAMATIC_LOW_4";
		
		case 0x0000000F:
			return "DRAMATIC_SUSPENSE";
		
		case 0x00000010:
			return "DRAMATIC_SUSPENSE_2";
		
		case 0x00000011:
			return "DRAMATIC_HIGH";
		
		case 0x00000012:
			return "DRAMATIC_GUNFIGHT";
		
		case 0x00000013:
			return "DRAMATIC_ALT";
		
		case 0x00000014:
			return "DRAMATIC_2";
		
		case 0x00000015:
			return "DRAMATIC_3";
		
		case 0x00000016:
			return "DRAMATIC_4";
		
		case 0x00000017:
			return "CHASE";
		
		case 0x00000018:
			return "CHASE_EXTRA_LOW";
		
		case 0x00000019:
			return "nCHASE_LOW";
		
		case 0x0000001A:
			return "CHASE_HIGH";
		
		case 0x0000001B:
			return "nCHASE_ELK";
		
		case 0x0000001C:
			return "nCHASE_ALT";
		
		case 0x0000001D:
			return "MERCH_CHASE";
		
		case 0x0000001E:
			return "ARMY_GUNFIGHT";
		
		case 0x0000001F:
			return "ARMY_GUNFIGHT_LOW";
		
		case 0x00000020:
			return "ARMY_GUNFIGHT_HIGH";
		
		case 0x00000021:
			return "REBEL_GUNFIGHT";
		
		case 0x00000022:
			return "GUNFIGHT";
		
		case 0x00000023:
			return "GUNFIGHT_2";
		
		case 0x00000024:
			return "GUNFIGHT_4";
		
		case 0x00000025:
			return "GUNFIGHT_EX";
		
		case 0x00000026:
			return "GUNFIGHT_LOW";
		
		case 0x00000027:
			return "GUNFIGHT_LOW_2";
		
		case 0x00000028:
			return "GUNFIGHT_HIGH";
		
		case 0x00000029:
			return "GUNFIGHT_HIGH_2";
		
		case 0x0000002A:
			return "GUNFIGHT_ALT_HIGH";
		
		case 0x0000002B:
			return "GUNFIGHT_ELK";
		
		case 0x0000002C:
			return "GUNFIGHT_CHASE_HIGH";
		
		case 0x0000002D:
			return "INTENSE_GUNFIGHT";
		
		case 0x0000002E:
			return "SUSPENSE_GUNFIGHT_HIGH";
		
		case 0x0000002F:
			return "nMERCH_GUN";
		
		case 0x00000030:
			return "HAPPY";
		
		case 0x00000031:
			return "nHAPPY_LOW";
		
		case 0x00000032:
			return "HAPPY_HIGH";
		
		case 0x00000033:
			return "RIDING_1";
		
		case 0x00000034:
			return "RIDING_2";
		
		case 0x00000035:
			return "RIDING_3";
		
		case 0x00000036:
			return "RIDING_4";
		
		case 0x00000037:
			return "RIDING_ALT";
		
		case 0x00000038:
			return "TRAP";
		
		case 0x00000039:
			return "BARN";
		
		case 0x0000003A:
			return "MP_IDLE";
		
		case 0x0000003B:
			return "MP_SUSP";
		
		case 0x0000003C:
			return "CAR";
		
		case 0x0000003D:
			return "FINISHED";
		
		default:
	}
	iVar0 = "";
	return iVar0;
}

void Function_231() //Position: 0xA979 / 43385
{
	var uVar0[11];
	int iVar12;
	
	if (Function_296())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - High Noon";
		uVar0[4] = "Stage 03 - Duel Muller";
		uVar0[5] = "Stage 04 - Happy Hour";
		uVar0[6] = "Stage 05 - Duel Stranger";
		uVar0[7] = "Stage 06 - Cleanup Town";
		uVar0[8] = "Last Stage - Mission End";
		uVar0[9] = "Kill All Enemies";
		uVar0[10] = "Kill All Blipped Enemies";
		iVar12 = Function_282(&uLocal_661, &uVar0, &Local_629 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_281(&iVar12, &bLocal_675, &bLocal_676, &Local_668))
		{
			Function_274();
		}
		if (iVar12 == 0)
		{
			Function_274();
			Function_273(&bLocal_712, 8);
		}
		else if (iVar12 == 1)
		{
			Function_274();
			Function_268(bLocal_675);
			Function_264(StackVal, StackVal, 5, &bLocal_713, &bLocal_675, Function_271(bLocal_675), Function_268(bLocal_675), 0);
		}
		else if (iVar12 == 2)
		{
			Function_274();
			Function_259(&bLocal_714, 4);
		}
		else if (iVar12 == 3)
		{
			Function_274();
			Function_258(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_257(0);
			Function_256();
			bLocal_675 = true;
			Local_668 = 1000;
			Function_253(0, "STAGE 02 - INITIALIZE");
		}
		else if (iVar12 == 4)
		{
			Function_274();
			Function_258(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_257(0);
			Function_251();
			bLocal_675 = 2;
			Local_668 = 1000;
			Function_253(0, "STAGE 03 - INITIALIZE");
		}
		else if (iVar12 == 5)
		{
			Function_274();
			Function_258(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_257(0);
			Function_250();
			bLocal_675 = 3;
			Local_668 = 1000;
			Function_253(0, "STAGE 04 - INITIALIZE");
		}
		else if (iVar12 == 6)
		{
			Function_274();
			Function_258(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_257(0);
			Function_249();
			bLocal_675 = 4;
			Local_668 = 1000;
			Function_253(0, "STAGE 05 - INITIALIZE");
		}
		else if (iVar12 == 7)
		{
			Function_274();
			Function_258(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_257(0);
			Function_246();
			bLocal_675 = 5;
			Local_668 = 1000;
			Function_253(0, "STAGE 06 - INITIALIZE");
		}
		else if (iVar12 == 8)
		{
			Function_274();
			Function_258(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_257(0);
			Function_236();
			bLocal_675 = 101;
			Local_668 = 1000;
			Function_253(0, "LAST STAGE - INITIALIZE");
		}
		else if (iVar12 == 9)
		{
			Function_274();
			Function_235();
		}
		else if (iVar12 == 10)
		{
			Function_274();
			Function_232();
		}
	}
	return;
}

void Function_232() //Position: 0xACC0 / 44224
{
	if (SQUAD_IS_VALID(bLocal_688))
	{
		if (Function_234(bLocal_688, 1))
		{
			Function_233(&bLocal_688);
		}
	}
	return;
}

void Function_233(int iParam0) //Position: 0xACDF / 44255
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*iParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (IS_ACTOR_ALIVE(bVar1))
			{
				KILL_ACTOR(bVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_234(bool bParam0, bool bParam1) //Position: 0xAD2E / 44334
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				if (!bParam1)
				{
					return 1;
				}
			}
			if (bParam1)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_235() //Position: 0xAD84 / 44420
{
	return;
}

void Function_236() //Position: 0xAD8A / 44426
{
	Function_229(&iLocal_899, 0, 0, 4294967295, 4294967295);
	Function_227();
	Function_214();
	Function_240();
	Function_212();
	Function_211();
	Function_207(0);
	Function_206(0);
	Function_239();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_680);
	Function_238();
	Function_237();
	return;
}

void Function_237() //Position: 0xADC0 / 44480
{
	if (SQUAD_IS_VALID(Local_174.f_1284))
	{
		bLocal_896 = false;
		while (bLocal_896 <= SQUAD_GET_SIZE(Local_174.f_1284))
		{
			bLocal_886 = SQUAD_GET_ACTOR_BY_INDEX(Local_174.f_1284, bLocal_896);
			if (IS_ACTOR_ALIVE(bLocal_886))
			{
				TASK_CLEAR(bLocal_886);
				TASK_PRIORITY_SET(bLocal_886, true);
				TASK_STAND_STILL(bLocal_886, -1.0f, 0, 0);
			}
			bLocal_896++;
		}
	}
	return;
}

void Function_238() //Position: 0xAE1B / 44571
{
	if (SQUAD_IS_VALID(bLocal_689))
	{
		bLocal_896 = false;
		while (bLocal_896 <= SQUAD_GET_SIZE(bLocal_689))
		{
			bLocal_886 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_689, bLocal_896);
			if (IS_ACTOR_ALIVE(bLocal_886))
			{
				TASK_CLEAR(bLocal_886);
				TASK_PRIORITY_SET(bLocal_886, true);
				TASK_STAND_STILL(bLocal_886, -1.0f, 0, 0);
			}
			bLocal_896++;
		}
	}
	return;
}

void Function_239() //Position: 0xAE70 / 44656
{
	TASK_CLEAR(bLocal_680);
	TASK_PRIORITY_SET(bLocal_680, true);
	TASK_STAND_STILL(bLocal_680, -1.0f, 0, 0);
	return;
}

void Function_240() //Position: 0xAE8C / 44684
{
	Function_241();
	return;
}

void Function_241() //Position: 0xAE95 / 44693
{
	Function_242();
	return;
}

void Function_242() //Position: 0xAE9E / 44702
{
	Function_243();
	if (IS_OBJECT_VALID(Local_174.f_1788))
	{
		DESTROY_OBJECT(Local_174.f_1788);
	}
	return;
}

void Function_243() //Position: 0xAEBA / 44730
{
	Function_244();
	return;
}

void Function_244() //Position: 0xAEC3 / 44739
{
	Function_245();
	if (IS_OBJECT_VALID(Local_174.f_1792))
	{
		DESTROY_OBJECT(Local_174.f_1792);
	}
	if (IS_OBJECT_VALID(Local_174.f_1796))
	{
		DESTROY_OBJECT(Local_174.f_1796);
	}
	return;
}

void Function_245() //Position: 0xAEF2 / 44786
{
	if (IS_GRINGO_VALID(bLocal_993))
	{
		DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_993));
	}
	if (IS_GRINGO_VALID(bLocal_994))
	{
		DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_994));
	}
	if (IS_GRINGO_VALID(bLocal_995))
	{
		DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bLocal_995));
	}
	if (IS_OBJECT_VALID(Local_174.f_1800))
	{
		DESTROY_OBJECT(Local_174.f_1800);
	}
	if (IS_OBJECT_VALID(Local_174.f_1804))
	{
		DESTROY_OBJECT(Local_174.f_1804);
	}
	if (IS_OBJECT_VALID(Local_174.f_1808))
	{
		DESTROY_OBJECT(Local_174.f_1808);
	}
	if (IS_OBJECT_VALID(Local_174.f_1812))
	{
		DESTROY_OBJECT(Local_174.f_1812);
	}
	return;
}

void Function_246() //Position: 0xAF7A / 44922
{
	Function_229(&iLocal_899, 0, 0, 4294967295, 4294967295);
	Function_227();
	Function_215();
	Function_241();
	Function_212();
	Function_211();
	Function_207(0);
	Function_206(0);
	Function_239();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_680);
	Function_248();
	Function_238();
	Function_237();
	Function_247();
	return;
}

void Function_247() //Position: 0xAFB6 / 44982
{
	if (IS_ACTOR_ALIVE(bLocal_687))
	{
		TASK_CLEAR(bLocal_687);
		TASK_PRIORITY_SET(bLocal_687, true);
		TASK_STAND_STILL(bLocal_687, -1.0f, 0, 0);
	}
	return;
}

void Function_248() //Position: 0xAFDB / 45019
{
	if (SQUAD_IS_VALID(bLocal_688))
	{
		bLocal_896 = false;
		while (bLocal_896 <= SQUAD_GET_SIZE(bLocal_688))
		{
			bLocal_886 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_688, bLocal_896);
			if (IS_ACTOR_ALIVE(bLocal_886))
			{
				TASK_CLEAR(bLocal_886);
				TASK_PRIORITY_SET(bLocal_886, true);
				TASK_STAND_STILL(bLocal_886, -1.0f, 0, 0);
			}
			bLocal_896++;
		}
	}
	return;
}

void Function_249() //Position: 0xB030 / 45104
{
	Function_229(&iLocal_899, 0, 0, 4294967295, 4294967295);
	Function_227();
	Function_216();
	Function_242();
	Function_212();
	Function_211();
	Function_207(0);
	Function_206(0);
	Function_239();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_680);
	Function_248();
	Function_238();
	Function_237();
	return;
}

void Function_250() //Position: 0xB069 / 45161
{
	Function_229(&iLocal_899, 0, 0, 4294967295, 4294967295);
	Function_227();
	Function_218();
	Function_243();
	Function_212();
	Function_211();
	Function_207(0);
	Function_206(0);
	Function_239();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_680);
	Function_248();
	Function_238();
	Function_237();
	return;
}

void Function_251() //Position: 0xB0A2 / 45218
{
	Function_229(&iLocal_899, 0, 0, 4294967295, 4294967295);
	Function_227();
	Function_219();
	Function_244();
	Function_212();
	Function_211();
	Function_207(0);
	Function_206(0);
	Function_239();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_680);
	Function_252();
	Function_248();
	Function_238();
	Function_237();
	return;
}

void Function_252() //Position: 0xB0DE / 45278
{
	if (IS_ACTOR_ALIVE(bLocal_682))
	{
		TASK_CLEAR(bLocal_682);
		TASK_PRIORITY_SET(bLocal_682, true);
		TASK_STAND_STILL(bLocal_682, -1.0f, 0, 0);
	}
	return;
}

void Function_253(bool bParam0, int iParam1) //Position: 0xB103 / 45315
{
	Function_254(&iLocal_690);
	bLocal_676 = bParam0;
	return;
}

void Function_254(int iParam0) //Position: 0xB114 / 45332
{
	Function_255(iParam0, 0.0f);
	return;
}

void Function_255(int iParam0, float fParam1) //Position: 0xB120 / 45344
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_256() //Position: 0xB141 / 45377
{
	Function_229(&iLocal_899, 0, 0, 4294967295, 4294967295);
	Function_227();
	Function_220();
	Function_245();
	Function_239();
	Function_252();
	Function_248();
	Function_238();
	return;
}

void Function_257(bool bParam0) //Position: 0xB166 / 45414
{
	if (bParam0)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		SET_ACTOR_INVULNERABILITY(Global_34573, false);
	}
	else
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		SET_ACTOR_INVULNERABILITY(Global_34573, true);
	}
	return;
}

void Function_258(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xB190 / 45456
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, iParam5);
		}
	}
}

void Function_259(bool bParam0, int iParam1) //Position: 0xB1B9 / 45497
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_260(iParam1);
	*bParam0 = 1;
	return;
}

void Function_260(int iParam0) //Position: 0xB1DC / 45532
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_263("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_262(2) || Function_262(8)) || Function_262(9)) || Function_262(10))
			{
				if (iVar0 + 1 != 3)
				{
					iVar0++;
					SET_EXP_MODE_PROMPT_STATE(iVar0);
				}
			}
			else
			{
				SET_EXP_MODE_PROMPT_STATE(0);
			}
		}
	}
	else if (iVar0 != 3)
	{
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	if (iParam0 == 2)
	{
		Function_263("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_263("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_263("");
	}
	else if (iParam0 == 8)
	{
		Function_261();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_261();
	}
	return;
}

void Function_261() //Position: 0xB2D3 / 45779
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_262(int iParam0) //Position: 0xB2DF / 45791
{
	int iVar0;
	
	if (!Function_28(iParam0))
	{
		return 0;
	}
	iVar0 = Function_27(iParam0);
	if (!Function_18(Function_27(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_263(bool bParam0) //Position: 0xB315 / 45845
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_264(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xB37F / 45951
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_265(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_260(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_265(vector3 vParam0, var uParam3, var uParam4) //Position: 0xB3BC / 46012
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_267(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_266(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_266(int iParam0) //Position: 0xB43F / 46143
{
	if (!Function_81(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_30640[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_30640[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_30640[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_30658[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_30640[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_30693[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_30658[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_30658[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_30658[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_30658[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_30668[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_30668[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_30668[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_30679[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_30679[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_30685[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_30685[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_30685[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_30693[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_30693[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_30693[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_30707[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_30707[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_30707[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_30707[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_30723[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_30723[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_30723[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_30717[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_30717[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_30717[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_30628[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_30628[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_30628[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_30628[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_30633[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_30633[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_30633[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_30637[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_30637[0])
	{
		return "GreatPlains";
	}
	return "";
}

var Function_267(vector3 vParam0, bool bParam3) //Position: 0xB8ED / 47341
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 4294967295;
	while (iVar1 > 146 && !bVar0)
	{
		if (StackVal == 2)
		{
			if (IS_VOLUME_VALID(StackVal))
			{
				if (IS_POINT_IN_VOLUME(StackVal, vParam0))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (bParam3)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

vector3 Function_268(int iParam0) //Position: 0xB958 / 47448
{
	Function_269(iParam0 + 1);
	return StackVal, StackVal, Function_269(iParam0 + 1);
}

vector3 Function_269(int iParam0) //Position: 0xB965 / 47461
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_270((*&Local_174 + 1424)[0]);
			return StackVal, StackVal, Function_270((*&Local_174 + 1424)[0]);
			break;
		
		case 0x00000001:
			Function_270((*&Local_174 + 1448)[0]);
			return StackVal, StackVal, Function_270((*&Local_174 + 1448)[0]);
			break;
		
		case 0x00000002:
			Function_270((*&Local_174 + 1496)[0]);
			return StackVal, StackVal, Function_270((*&Local_174 + 1496)[0]);
			break;
		
		case 0x00000003:
			Function_270((*&Local_174 + 1536)[0]);
			return StackVal, StackVal, Function_270((*&Local_174 + 1536)[0]);
			break;
		
		case 0x00000004:
			Function_270((*&Local_174 + 1552)[0]);
			return StackVal, StackVal, Function_270((*&Local_174 + 1552)[0]);
			break;
		
		case 0x00000005:
			Function_270((*&Local_174 + 1592)[0]);
			return StackVal, StackVal, Function_270((*&Local_174 + 1592)[0]);
			break;
		
		default:
			Function_270((*&Local_174 + 1628)[0]);
			return StackVal, StackVal, Function_270((*&Local_174 + 1628)[0]);
			break;
	}
	Function_270((*&Local_174 + 1424)[0]);
	return StackVal, StackVal, Function_270((*&Local_174 + 1424)[0]);
}

vector3 Function_270(bool bParam0) //Position: 0xBA0A / 47626
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_271(int iParam0) //Position: 0xBA31 / 47665
{
	return Function_272(iParam0 + 1);
}

int Function_272(int iParam0) //Position: 0xBA3E / 47678
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_174 + 1424)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_174 + 1448)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_174 + 1496)[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_174 + 1536)[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_174 + 1552)[0]);
			break;
		
		case 0x00000005:
			return GET_OBJECT_HEADING((*&Local_174 + 1592)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_174 + 1628)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_HEADING_BY_STAGE, returning first stage start heading.");
	return GET_OBJECT_HEADING((*&Local_174 + 1424)[0]);
}

void Function_273(bool bParam0, int iParam1) //Position: 0xBB4A / 47946
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_260(iParam1);
	*bParam0 = 1;
	return;
}

void Function_274() //Position: 0xBB6D / 47981
{
	Function_276();
	Function_275(10, 3);
	return;
}

void Function_275(int iParam0, int iParam1) //Position: 0xBB7C / 47996
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_276() //Position: 0xBCB3 / 48307
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_280())
	{
		Function_279(10, 3);
	}
	else
	{
		Function_277();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_277() //Position: 0xBCFE / 48382
{
	Function_278(25, 2);
	return;
}

void Function_278(int iParam0, int iParam1) //Position: 0xBD0A / 48394
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

void Function_279(int iParam0, int iParam1) //Position: 0xBF08 / 48904
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(bVar0))
		{
			GUI_CLOSE_WINDOW(bVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_CLOSE_WINDOW(bVar0);
			}
			bVar1++;
		}
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_CLOSE_WINDOW(bVar0);
	}
	return;
}

bool Function_280() //Position: 0xC052 / 49234
{
	if (Global_3380)
	{
		return 1;
	}
	if (Global_3382)
	{
		return 1;
	}
	if (Global_3392)
	{
		return 1;
	}
	if (Global_3384)
	{
		return 1;
	}
	if (Global_3395 || Global_3396)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(Global_79344))
	{
		switch (Global_79349.f_16)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_153(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_281(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC0B9 / 49337
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_274();
			Function_226();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			*uParam1++;
			*uParam2 = 0;
			*uParam3 = 1000;
			if (!ARE_USE_CONTEXTS_ENABLED())
			{
				ENABLE_USE_CONTEXTS(1);
			}
			if (!IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
		}
		return 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_0))
	{
		*uParam0 = 0;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_1))
	{
		Function_263("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_282(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC15F / 49503
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_295(&Var15, &Var0);
	uVar20 = Function_294(*uParam1, &Var15);
	Function_293(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_292(uParam0, uVar20);
	Function_290(StackVal, uParam0, Var15.f_12);
	Function_288(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_287(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_284(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_283(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_283(int iParam0, int iParam1, int iParam2) //Position: 0xC226 / 49702
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam1 * iParam2);
	if (iParam0 <= iVar2)
	{
		bVar1 = iParam0;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(bVar0))
			{
				GUI_SET_TEXT(bVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_284(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xC282 / 49794
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(cParam1))
	{
		if (STRING_LENGTH(bParam1) >= 3)
		{
			if (StackVal && StackVal != StackVal != *uParam0)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, bParam1, 64);
				Function_286(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_286(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1,5f)));
			if (StackVal > *uParam0)
			{
				bParam1->f_36 = (bParam1->f_36 + (1140.0f / IntToFloat(uParam0->f_12)));
				bParam1->f_40 = 110.0f;
				*uParam0 = 0;
				uParam0->f_8 = StackVal + 1;
			}
			if (StackVal > uParam0->f_12)
			{
				uParam0->f_16 = 1;
				Function_283(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_285(bParam1->f_32);
	}
	else
	{
		Function_285(bParam1->f_32);
	}
	return 0;
}

void Function_285(bool bParam0) //Position: 0xC408 / 50184
{
	bool bVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	bVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(bVar0))
	{
		GUI_SET_TEXT(bVar0, " ");
	}
	return;
}

void Function_286(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xC442 / 50242
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
	}
	Var5 = uParam4;
	Var5.f_4 = uParam5;
	Var5.f_8 = uParam6;
	Var5.f_12 = fParam7;
	strcpy(&cVar13, cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar13);
	}
	GUI_SET_TEXT(bVar4, &cVar13);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
}

var Function_287(int iParam0, var uParam1, int iParam2) //Position: 0xC4F0 / 50416
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_288(var uParam0, int iParam1, int iParam2) //Position: 0xC514 / 50452
{
	switch (Function_289())
	{
		case 0x000000C8:
			if (StackVal >= 0)
			{
				uParam0->f_4 = (StackVal - 1);
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (StackVal <= iParam1)
			{
				uParam0->f_4 = StackVal + 1;
			}
			else
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (StackVal >= 0)
			{
				uParam0->f_8 = (StackVal - 1);
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (StackVal <= iParam2)
			{
				uParam0->f_8 = StackVal + 1;
			}
			else
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_289() //Position: 0xC5B0 / 50608
{
	if (IS_DEBUGKEY_PRESSED(200))
	{
		return 200;
	}
	if (IS_DEBUGKEY_PRESSED(203))
	{
		return 203;
	}
	if (IS_DEBUGKEY_PRESSED(205))
	{
		return 205;
	}
	if (IS_DEBUGKEY_PRESSED(208))
	{
		return 208;
	}
	return 4294967295;
}

void Function_290(var uParam0, int iParam1, int iParam2) //Position: 0xC5EC / 50668
{
	switch (Function_291(uParam0))
	{
		case 0x00000001:
			uParam0->f_4 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			uParam0->f_4 = StackVal + 1;
			if (StackVal > iParam1)
			{
				uParam0->f_4 = 0;
			}
			break;
		
		case 0x00000003:
			uParam0->f_8 = (StackVal - 1);
			if (StackVal <= 0)
			{
				uParam0->f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			uParam0->f_8 = StackVal + 1;
			if (StackVal > iParam2)
			{
				uParam0->f_8 = 0;
			}
			break;
	}
	return;
}

int Function_291(bool bParam0) //Position: 0xC684 / 50820
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, 0))
	{
		if (!Function_153(*bParam0, 0x40000000))
		{
			Function_76(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, 0))
	{
		if (!Function_153(*bParam0, 0x40000000))
		{
			Function_76(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_36(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, 0))
	{
		if (!Function_153(*bParam0, 0x20000000))
		{
			Function_76(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, 0))
	{
		if (!Function_153(*bParam0, 0x20000000))
		{
			Function_76(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_36(bParam0, 0x20000000);
	return 0;
}

var Function_292(var uParam0, int iParam1) //Position: 0xC7CF / 51151
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, 0))
		{
			iVar0 = (iVar0 - 1);
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, 0))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_293(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC91E / 51486
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	bVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(bVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		bVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(bVar4, bParam0);
	GUI_SET_TEXT_COLOR(bVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(bVar4, 1);
}

var Function_294(int iParam0, int iParam1) //Position: 0xC9B1 / 51633
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_295(var uParam0, var uParam1) //Position: 0xC9CB / 51659
{
	uParam1->f_36 = 100.0f;
	uParam1->f_40 = 110.0f;
	uParam1->f_44 = 1.0f;
	uParam1->f_48 = 1.0f;
	uParam1->f_52 = 1.0f;
	uParam1->f_56 = 1,6f;
	uParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_296() //Position: 0xCA19 / 51737
{
	return Global_30920;
}

bool Function_297() //Position: 0xCA22 / 51746
{
	if (IS_EXITFLAG_SET())
	{
		Function_268(bLocal_675);
		Function_264(StackVal, StackVal, 4, &bLocal_713, &bLocal_675, Function_271(bLocal_675), Function_268(bLocal_675), 0);
		return 0;
	}
	Function_689(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_629, bLocal_675, bLocal_676, &bLocal_714, &bLocal_712, &bLocal_713);
	if (bLocal_675 == 99 && bLocal_675 == 100)
	{
		if (!IS_ACTOR_ALIVE(Global_34573))
		{
			Function_268(bLocal_675);
			Function_264(StackVal, StackVal, 1, &bLocal_713, &bLocal_675, Function_271(bLocal_675), Function_268(bLocal_675), 0);
			return 1;
		}
		if (Global_3403 || Global_3404)
		{
			Function_268(bLocal_675);
			Function_264(StackVal, StackVal, 3, &bLocal_713, &bLocal_675, Function_271(bLocal_675), Function_268(bLocal_675), 0);
			return 1;
		}
		if (Function_688(2048))
		{
			Function_268(bLocal_675);
			Function_264(StackVal, StackVal, 3, &bLocal_713, &bLocal_675, Function_271(bLocal_675), Function_268(bLocal_675), 0);
			return 1;
		}
		if (Function_668(&Local_756, &uLocal_716, &uLocal_876, bLocal_679, iLocal_715))
		{
			if (Function_666(&uLocal_876))
			{
				Function_268(bLocal_675);
				Function_264(StackVal, StackVal, 5, &bLocal_713, &bLocal_675, Function_271(bLocal_675), Function_268(bLocal_675), 0);
				return 1;
			}
		}
	}
	switch (bLocal_675)
	{
		case 0x00000063:
			Function_608();
			break;
		
		case 0x00000000:
			Function_536();
			break;
		
		case 0x00000001:
			Function_508();
			break;
		
		case 0x00000002:
			Function_494();
			break;
		
		case 0x00000003:
			Function_477();
			break;
		
		case 0x00000004:
			Function_446();
			break;
		
		case 0x00000005:
			Function_367();
			break;
		
		case 0x00000065:
			Function_300();
			break;
		
		case 0x00000064:
			if (Function_299(&bLocal_713))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_298(&bLocal_675, &bLocal_676, &Local_668))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_712)
	{
		Function_273(&bLocal_712, 8);
		Function_1();
		return 0;
	}
	if (bLocal_713 && bLocal_675 == 100)
	{
		Function_268(bLocal_675);
		Function_264(StackVal, StackVal, 5, &bLocal_713, &bLocal_675, Function_271(bLocal_675), Function_268(bLocal_675), 0);
	}
	if (bLocal_714)
	{
		Function_259(&bLocal_714, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_298(var uParam0, var uParam1, int iParam2) //Position: 0xCBEE / 52206
{
	if (*uParam0 <= 98)
	{
		*uParam0++;
		*uParam1 = 0;
		*iParam2 = 1000;
	}
	else if (*uParam0 == 98)
	{
		*uParam0 = 101;
		*uParam1 = 0;
		*iParam2 = 1000;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_299(int iParam0) //Position: 0xCC2E / 52270
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_300() //Position: 0xCC41 / 52289
{
	switch (bLocal_676)
	{
		case 0x00000000:
			Function_363(0);
			if (IS_VOLUME_VALID((*&Local_174 + 1312)[5]))
			{
				Function_361();
				DESTROY_VOLUME((*&Local_174 + 1312)[5]);
			}
			Function_359();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_356();
			bLocal_678 = Global_30693[0];
			if (HUD_IS_FADED())
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_355(Global_34573, (*&Local_174 + 1628)[0], 1, 1, 1);
				Function_253(1, "LAST STAGE - STREAMING GOAL");
			}
			else
			{
				Function_253(2, "LAST STAGE - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_349() && STREAMING_IS_WORLD_LOADED()) && (Function_348(bLocal_678) || bLocal_678 != 4294967295))
			{
				Function_347();
				Function_346();
				STREAMING_RELEASE_MAIN_POI();
				Function_253(2, "LAST STAGE - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_345();
			Function_253(3, "LAST STAGE - CUTSCENE GOAL");
			break;
		
		case 0x00000003:
			if (Function_307("$/cutscene/GUN05_END/GUN05_END", &Local_668, &Local_629, &bLocal_675, 57797, 57632, 57625, 56239, 55979, 55897, 1, 2, 1, 2, 2, 0, 1))
			{
				Function_306(1.0f);
				Function_303();
				Function_253(106, "LAST STAGE - COMPLETE");
			}
			break;
		
		case 0x0000006A:
			Function_301();
			bLocal_712 = true;
			break;
	}
	return;
}

void Function_301() //Position: 0xCDFF / 52735
{
	Function_302();
	return;
}

void Function_302() //Position: 0xCE08 / 52744
{
	Function_240();
	return;
}

void Function_303() //Position: 0xCE11 / 52753
{
	Function_304();
	return;
}

void Function_304() //Position: 0xCE1A / 52762
{
	if (IS_ACTOR_ALIVE(bLocal_681))
	{
		if (GET_TASK_STATUS(bLocal_681, 19) != 1)
		{
			GET_OBJECT_POSITION((*&Local_174 + 1660)[5], &vLocal_887);
			Function_305(StackVal, StackVal, vLocal_887, &bLocal_884, &bLocal_885);
			if (IS_GRINGO_VALID(bLocal_885))
			{
				TASK_CLEAR(bLocal_681);
				TASK_PRIORITY_SET(bLocal_681, true);
				TASK_USE_GRINGO(bLocal_681, bLocal_885, "UseCase1", 4294967295, 1);
			}
			else if (IS_GRINGO_VALID(bLocal_884))
			{
				TASK_CLEAR(bLocal_681);
				TASK_PRIORITY_SET(bLocal_681, true);
				TASK_USE_GRINGO(bLocal_681, bLocal_884, "UseCase1", 4294967295, 1);
			}
		}
	}
	return;
}

void Function_305(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xCEAD / 52909
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

void Function_306(bool bParam0) //Position: 0xCF57 / 53079
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(bParam0, 1065353216);
		}
	}
	return;
}

bool Function_307(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xCF74 / 53108
{
	if (!bParam15)
	{
		Function_318(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_317(iParam2) || iParam2->f_24 < 1))
			{
				*iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
			{
				*iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(bParam0, 0, iParam11, iParam12, iParam13, iParam14);
				Call_Loc(iParam4);
				Global_63097 = 1;
				if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
				{
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
				Function_254(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_316())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_315(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_254(iParam1 + 4);
						*iParam1 = 1004;
					}
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					Function_315(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_312(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_312(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(Global_34573, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(iParam5);
					if (StackVal)
					{
						Function_310(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_315(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_254(iParam1 + 4);
						*iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(iParam6);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Global_34573, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_306(1.0f);
					}
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				*iParam1 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(iParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (bParam16)
					{
						Function_309();
						if (!IS_OBJECT_VALID(iParam1->f_16))
						{
							HUD_ENABLE(true);
						}
						else
						{
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
						}
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(iParam8);
				if (StackVal)
				{
					Function_308(1);
					if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
					{
						DECOR_REMOVE(Global_34573, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(iParam1->f_20))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam1->f_20))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_20);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam1->f_20))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam1->f_20);
						}
						DESTROY_VOLUME(iParam1->f_20);
					}
					if (IS_LAYOUTREF_VALID(Global_6289))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
						}
					}
					*iParam1 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(Global_34573, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(iParam9);
				if (StackVal)
				{
					Call_Loc(iParam7);
					if (StackVal)
					{
						Global_63097 = 0;
						*iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_317(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_308(bool bParam0) //Position: 0xD588 / 54664
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_63096 = 0;
	Global_63097 = 0;
	if (IS_VOLUME_VALID(Global_63117))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
	}
	return;
}

void Function_309() //Position: 0xD62D / 54829
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_225();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_310(bool bParam0, bool bParam1) //Position: 0xD672 / 54898
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((bVar3 == Global_34573 && !Function_311(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_311(bool bParam0) //Position: 0xD6F2 / 55026
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0) == bParam0)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

float Function_312(int iParam0) //Position: 0xD721 / 55073
{
	if (Function_314(iParam0))
	{
		if (Function_313(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_313(int iParam0) //Position: 0xD7E9 / 55273
{
	return Function_153(*iParam0, 2);
}

bool Function_314(int iParam0) //Position: 0xD7F6 / 55286
{
	return Function_153(*iParam0, 1);
}

int Function_315(bool bParam0) //Position: 0xD803 / 55299
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (bParam0)
				{
					if (!DECOR_CHECK_EXIST(bVar1, "refdbycutscene"))
					{
						REFERENCE_ACTOR(bVar1);
						DECOR_SET_BOOL(bVar1, "refdbycutscene", true);
					}
					if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(bVar1)))
					{
						SET_MOST_RECENT_MOUNT(bVar1, false);
					}
				}
				else if (DECOR_CHECK_EXIST(bVar1, "refdbycutscene"))
				{
					DEREFERENCE_ACTOR(bVar1);
					DECOR_REMOVE(bVar1, "refdbycutscene");
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_316() //Position: 0xD8BB / 55483
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_ALIVE(bVar1))
			{
				return 0;
			}
		}
		return 0;
		bVar0++;
	}
	return 1;
}

bool Function_317(int iParam0) //Position: 0xD8F5 / 55541
{
	return iParam0->f_20;
}

void Function_318(var uParam0, int iParam1) //Position: 0xD8FF / 55551
{
	Function_319(uParam0, iParam1, 0);
	return;
}

void Function_319(var uParam0, bool bParam1, bool bParam2) //Position: 0xD90D / 55565
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return;
	}
	if (Global_62478 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_258(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_85(20, 1, 0, 0);
		*uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1,5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused") && !UI_ISACTIVE("PauseScene"))
		{
			if (((((((*uParam0 == 1000 && *uParam0 == 1001) && *uParam0 == 1002) && *uParam0 == 1003) && *uParam0 == 1103) && *uParam0 == 1104) && *uParam0 == 1105) && *uParam0 == 1106)
			{
				HUD_CLEAR_BIG_TEXT();
				HUD_CLEAR_SMALL_TEXT();
				if (bParam1)
				{
					CANCEL_TIME_WARP(1);
					if (!IS_STRING_VALID(bParam2))
					{
						Function_258(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_85(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

int Function_320() //Position: 0xDA59 / 55897
{
	switch (bLocal_675)
	{
		case 0x00000065:
			return 1;
			break;
		
		default:
			LOG_ERROR("GUN05_CUTSCENE_CUSTOM_SKIPPED: Invalid stage!");
			return 1;
			break;
	}
	return 0;
}

int Function_321() //Position: 0xDAAB / 55979
{
	Function_322(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

void Function_322(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xDABF / 55999
{
	bool bVar0;
	
	bParam1 = bParam1;
	if (bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		bVar0 = Function_49();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam2)
			{
				TASK_CLEAR(bVar0);
			}
			if (!bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				}
			}
			if (Function_40())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar0) || IS_ACTOR_USING_LEDGE(bVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(bVar0);
					if (iParam0 != 0 || (iParam0 != 2 && Global_76850))
					{
						ACTOR_DRAW_LAST_WEAPON(bVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
			SET_ACTOR_INVULNERABILITY(bVar0, false);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_85(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_226();
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_308(bParam9);
}

int Function_323() //Position: 0xDBAF / 56239
{
	switch (bLocal_675)
	{
		case 0x00000063:
			Function_335();
			return 1;
			break;
		
		case 0x00000001:
			Function_331();
			RESET_PROPS_IN_VOLUME((*&Local_174 + 1288)[1], 1);
			Function_328();
			return 1;
			break;
		
		case 0x00000004:
			Function_327();
			return 1;
			break;
		
		case 0x00000065:
			Function_324();
			return 1;
			break;
		
		default:
			LOG_ERROR("GUN05_CUTSCENE_CUSTOM_SET_POSES: Invalid stage!");
			return 1;
			break;
	}
	return 0;
}

void Function_324() //Position: 0xDC3F / 56383
{
	Function_355(Global_34573, (*&Local_174 + 1644)[0], 1, 0, 0);
	Function_355(bLocal_680, (*&Local_174 + 1644)[1], 1, 1, 1);
	Function_325();
	return;
}

void Function_325() //Position: 0xDC6A / 56426
{
	if (IS_ACTOR_ALIVE(bLocal_681))
	{
		if (!IS_ACTOR_IN_VOLUME(bLocal_681, (*&Local_174 + 1388)[4]))
		{
			Function_326();
			Function_355(bLocal_681, (*&Local_174 + 1424)[3], 1, 1, 1);
		}
	}
	return;
}

void Function_326() //Position: 0xDC9F / 56479
{
	if (IS_ACTOR_ALIVE(bLocal_681))
	{
		TASK_CLEAR(bLocal_681);
		TASK_PRIORITY_SET(bLocal_681, true);
		TASK_STAND_STILL(bLocal_681, -1.0f, 0, 0);
	}
	return;
}

void Function_327() //Position: 0xDCC4 / 56516
{
	Function_355(Global_34573, (*&Local_174 + 1552)[0], 1, 1, 1);
	Function_355(bLocal_680, (*&Local_174 + 1552)[1], 1, 1, 1);
	Function_325();
	Function_355(bLocal_684, (*&Local_174 + 1552)[2], 1, 1, 1);
	Function_355(bLocal_686, (*&Local_174 + 1552)[3], 1, 1, 1);
	Function_355((*&Local_174 + 1148)[02], (*&Local_174 + 1552)[4], 1, 1, 1);
	Function_355((*&Local_174 + 1160)[02], (*&Local_174 + 1552)[5], 1, 1, 1);
	Function_355((*&Local_174 + 1160)[12], (*&Local_174 + 1552)[6], 1, 1, 1);
	Function_355(bLocal_687, (*&Local_174 + 1552)[7], 1, 1, 1);
	return;
}

void Function_328() //Position: 0xDD64 / 56676
{
	Function_330(&(Local_756[317]));
	if (SQUAD_IS_VALID(bLocal_689))
	{
		Function_329(&bLocal_689);
		DESTROY_OBJECT(bLocal_689);
	}
	return;
}

void Function_329(int iParam0) //Position: 0xDD88 / 56712
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*iParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_330(int iParam0) //Position: 0xDDCF / 56783
{
	if (IS_OBJECT_VALID(*iParam0))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
		}
		if (GET_OBJECT_TYPE(*iParam0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(*iParam0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(*iParam0);
			}
		}
	}
	*iParam0 = "";
	strcpy(iParam0 + 4, "", 24);
	iParam0->f_36 = 0;
	iParam0->f_40 = 0;
	return;
}

void Function_331() //Position: 0xDE83 / 56963
{
	Function_355(Global_34573, (*&Local_174 + 1448)[0], 1, 1, 1);
	ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, 2,5f, 0);
	Function_355(bLocal_680, (*&Local_174 + 1448)[1], 1, 1, 1);
	Function_325();
	MAKE_ACTOR_READY_FOR_ACTION(bLocal_682, 1);
	Function_355(bLocal_682, (*&Local_174 + 1448)[2], 1, 1, 1);
	MAKE_ACTOR_READY_FOR_ACTION(bLocal_684, 1);
	Function_355(bLocal_684, (*&Local_174 + 1448)[3], 1, 1, 1);
	MAKE_ACTOR_READY_FOR_ACTION(bLocal_686, 1);
	Function_355(bLocal_686, (*&Local_174 + 1448)[4], 1, 1, 1);
	Function_355((*&Local_174 + 1148)[02], (*&Local_174 + 1448)[5], 1, 1, 1);
	Function_355((*&Local_174 + 1160)[02], (*&Local_174 + 1448)[6], 1, 1, 1);
	Function_355((*&Local_174 + 1160)[12], (*&Local_174 + 1448)[7], 1, 1, 1);
	Function_355((*&Local_174 + 1180)[02], (*&Local_174 + 1448)[8], 1, 1, 1);
	Function_355((*&Local_174 + 1200)[12], (*&Local_174 + 1448)[9], 1, 1, 1);
	Function_334();
	Function_333();
	Function_332();
	return;
}

void Function_332() //Position: 0xDF85 / 57221
{
	bLocal_896 = false;
	while (bLocal_896 <= SQUAD_GET_SIZE(bLocal_688))
	{
		bLocal_886 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_688, bLocal_896);
		if (IS_ACTOR_ALIVE(bLocal_886))
		{
			FORCE_LOOK_AT_ACTOR(bLocal_886, Global_34573, 3212836864);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(bLocal_886, false);
			TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_886, 8, "FASTWALK");
			ACTOR_POP_NEXT_GAIT(bLocal_886, 1, false);
			GET_OBJECT_POSITION((*&Local_174 + 1496)[(3 + bLocal_896)], &vLocal_887);
			bLocal_897 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(false, &vLocal_887, 1);
			TASK_TAUNT_ACTOR_IN_PLACE(false, Global_34573, -1f);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(bLocal_886);
			TASK_PRIORITY_SET(bLocal_886, true);
			TASK_SEQUENCE_PERFORM(bLocal_886, bLocal_897);
			TASK_SEQUENCE_RELEASE(bLocal_897, 1);
		}
		bLocal_896++;
	}
	return;
}

void Function_333() //Position: 0xE038 / 57400
{
	FORCE_LOOK_AT_ACTOR(bLocal_682, Global_34573, 3212836864);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bLocal_682, false);
	ACTOR_POP_NEXT_GAIT(bLocal_682, 1, false);
	bLocal_896 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_174.f_1796, 1, 0, 0, 1, false);
	TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_682, bLocal_896);
	TASK_SEQUENCE_RELEASE(bLocal_896, 1);
	return;
}

void Function_334() //Position: 0xE08F / 57487
{
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_680, true);
	SET_ACTOR_MAX_SPEED(bLocal_680, true);
	bLocal_896 = TASK_SEQUENCE_OPEN();
	TASK_FOLLOW_OBJECT_ALONG_PATH(false, Global_34573, Local_174.f_1792, -2,5f, 1, 0);
	TASK_FACE_ACTOR(false, bLocal_682, 0, 3212836864);
	TASK_STAND_STILL(false, -1.0f, 1, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_680, bLocal_896);
	TASK_SEQUENCE_RELEASE(bLocal_896, 1);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_680, (*&Local_174 + 1344)[7], 1, 1);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_680, (*&Local_174 + 1344)[8]);
	return;
}

void Function_335() //Position: 0xE102 / 57602
{
	Function_355(Global_34573, (*&Local_174 + 1424)[0], 1, 1, 1);
	return;
}

int Function_336() //Position: 0xE119 / 57625
{
	return 1;
}

int Function_337() //Position: 0xE120 / 57632
{
	switch (bLocal_675)
	{
		case 0x00000001:
			if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_680, 1))
			{
				return 0;
			}
			if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_682, 1))
			{
				return 0;
			}
			if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_684, 1))
			{
				return 0;
			}
			if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_686, 1))
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000065:
			ACTOR_START_FORCE_HOLSTER(Global_34573, 1, 0);
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(-3.0f, 0);
			return 1;
			break;
		
		default:
			LOG_ERROR("GUN05_CUTSCENE_CUSTOM_STREAMING: Invalid stage!");
			return 1;
			break;
	}
	return 0;
}

int Function_338() //Position: 0xE1C5 / 57797
{
	switch (bLocal_675)
	{
		case 0x00000063:
			Function_341(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Local_668.f_20 = CREATE_VOLUME_IN_LAYOUT(bLocal_628, "Gun05_CutsceneVol", 2, -2698.0f, 34.0f, 4278.0f, 0.0f, 0.0f, 0.0f, 14.0f, 10.0f, 12.0f);
			Function_339(bLocal_628, -2701,084f, 31,15242f, 4280,166f, &Local_668 + 20, 1, 0, 0, 0, 1, 1);
			ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_680, true);
			return 1;
			break;
		
		case 0x00000001:
			Function_341(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			GET_OBJECT_POSITION((*&Local_174 + 1448)[0], &vLocal_887);
			Function_339(StackVal, StackVal, bLocal_628, vLocal_887, &Local_174 + 1288[1], 1, 0, 0, 0, 1, 1);
			Function_325();
			return 1;
			break;
		
		case 0x00000004:
			Function_341(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			GET_OBJECT_POSITION((*&Local_174 + 1552)[0], &vLocal_887);
			Function_339(StackVal, StackVal, bLocal_628, vLocal_887, &Local_174 + 1288[2], 1, 0, 0, 0, 1, 1);
			Function_325();
			return 1;
			break;
		
		case 0x00000065:
			Function_341(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			GET_OBJECT_POSITION((*&Local_174 + 1628)[0], &vLocal_887);
			Function_339(StackVal, StackVal, bLocal_628, vLocal_887, &Local_174 + 1288[3], 1, 0, 0, 0, 1, 1);
			Function_325();
			return 1;
			break;
		
		default:
			LOG_ERROR("GUN05_CUTSCENE_CUSTOM_SETUP: Invalid stage!");
			return 1;
			break;
	}
	return 0;
}

void Function_339(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0xE35B / 58203
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	vVar2.x = iParam6;
	vVar2.y = iParam7;
	vVar2.z = iParam8;
	if (bParam5)
	{
		if (HUD_IS_FADED() && !HUD_IS_FADING())
		{
			TELEPORT_ACTOR(Global_34573, &vParam1, 1, 1, 1);
		}
		else
		{
			LOG_ERROR("SETUP_CUTSCENE_POSITION: You're trying to teleport the player without the game being faded...I will NOT respect this teleport.");
		}
	}
	if (IS_VOLUME_VALID(*uParam4))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol")))
		{
			if (*uParam4 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"), vParam1);
			}
		}
	}
	else
	{
		*uParam4 = CREATE_VOLUME_IN_LAYOUT(bParam0, "CutsceneVol", 2, vParam1, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 25.0f);
	}
	if (IS_VOLUME_VALID(*uParam4))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
		bVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(Global_34573);
		if (!Global_3380)
		{
			if (IS_ACTOR_VALID(bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(bVar0, bParam0);
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				Function_340(bVar1, bParam0);
			}
		}
		if (!Function_73(StackVal, StackVal, vVar2))
		{
			if (!IS_ACTOR_VALID(bVar0))
			{
				bVar0 = Global_12976.f_36;
			}
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, *uParam4))
				{
					TELEPORT_ACTOR(bVar0, &vVar2, 1, 1, 1);
					TASK_CLEAR(bVar0);
					TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, *uParam4))
				{
					TELEPORT_ACTOR(bVar1, &vVar2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(*uParam4))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam4);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(*uParam4))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam4);
		}
		if (bParam10)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(*uParam4);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(*uParam4, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(*uParam4);
		if (bParam9)
		{
			Global_63117 = *uParam4;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_340(bool bParam0, bool bParam1) //Position: 0xE5C9 / 58825
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(bParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(bParam0);
	bVar2 = false;
	while (bVar2 <= iVar0)
	{
		bVar4 = GET_DRAFT_ACTOR(bVar2, bParam0);
		if (IS_ACTOR_VALID(bVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(bVar4, bParam1);
		}
		bVar2++;
	}
	bVar3 = false;
	while (bVar3 <= iVar1)
	{
		bVar5 = GET_ACTOR_IN_VEHICLE_SEAT(bParam0, bVar3);
		if (IS_ACTOR_VALID(bVar5))
		{
			if (!IS_ACTOR_PLAYER(bVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(bVar5, bParam1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_341(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xE63E / 58942
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_226();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_49();
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_WEAPON_IN_HAND(bVar1) != 4294967295)
			{
				Global_76850 = 1;
			}
			else
			{
				Global_76850 = 0;
			}
			if (bParam3)
			{
				TASK_CLEAR(bVar1);
			}
			if (bParam11)
			{
				bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					FREE_FROM_HOGTIE(bVar2);
					HOGTIE_ACTOR(bVar2);
				}
			}
			if (Function_40())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar1) || IS_ACTOR_USING_LEDGE(bVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
					}
					if (bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(bVar1, false);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
				}
				if (bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(bVar1, false);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, true);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam8)
		{
			if (IS_VOLUME_VALID(bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(bParam7);
				DELETE_PROJECTILES_IN_VOLUME(bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_344(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_344(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_85(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (bParam10)
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_343()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_343()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, true);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(Global_34573));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_63096 = 1;
	Global_63116 = GET_THIS_SCRIPT_ID();
	Global_63117 = "";
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (Function_342(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_342(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

bool Function_342(int iParam0) //Position: 0xE8E7 / 59623
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_343() //Position: 0xE903 / 59651
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 42);
		if (IS_OBJECT_VALID(bVar2))
		{
			while (IS_OBJECT_VALID(bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(bVar2), "bino_camera"))
				{
					return bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return "";
}

vector3 Function_344(bool bParam0) //Position: 0xE982 / 59778
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_345() //Position: 0xE993 / 59795
{
	Function_229(&iLocal_899, 0, 0, 4294967295, 4294967295);
	Function_304();
	return;
}

void Function_346() //Position: 0xE9A6 / 59814
{
	return;
}

void Function_347() //Position: 0xE9AC / 59820
{
	return;
}

int Function_348(bool bParam0) //Position: 0xE9B2 / 59826
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

bool Function_349() //Position: 0xE9CE / 59854
{
	if (Function_350(&bLocal_654))
	{
		return 1;
	}
	return 0;
}

bool Function_350(bool bParam0) //Position: 0xE9E0 / 59872
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_354();
	iVar1 = 0;
	if (!Function_173(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_353(bParam0[iVar03], 8);
		}
		else if (Function_352())
		{
			iVar1 = 1;
			Function_353(bParam0[iVar03], 8);
		}
		Function_353(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_173(bParam0[iVar03], 4))
		{
			if (!Function_173(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_173(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_173(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_353(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_173(bParam0[iVar03], 4))
		{
			if (!Function_173(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_353(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_353(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_353(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_353(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_353(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_353(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_353(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_353(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_353(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_353(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					default:
						break;
					}
				}
		}
		iVar0++;
	}
	Function_351();
	return 1;
}

void Function_351() //Position: 0xED5B / 60763
{
	if (!Function_342(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_352() //Position: 0xED9B / 60827
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == Global_63541[iVar055].f_196)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_353(var uParam0, int iParam1) //Position: 0xEDC6 / 60870
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_354() //Position: 0xEDD7 / 60887
{
	if (!Function_342(128))
	{
		return;
	}
	if (Global_13152.f_68 == 0)
	{
		strcpy(&Global_13152, "nStreaming", 64);
		Global_13152.f_68 = 1;
		Global_13152.f_64 = GET_CURRENT_GAME_TIME();
		Global_13152.f_72 = Global_13133.f_64;
	}
	return;
}

void Function_355(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xEE19 / 60953
{
	vector3 vVar0;
	struct<5> Var3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			if (GET_OBJECT_TYPE(bParam1) == 8)
			{
				GET_OBJECT_POSITION(bParam1, &vVar0);
				GET_OBJECT_ORIENTATION(bParam1, &Var3);
			}
		}
	}
}

void Function_356() //Position: 0xEF20 / 61216
{
	Function_185(47);
	Function_186(256);
	Function_162(1165327);
	Function_357(265);
	return;
}

void Function_357(int iParam0) //Position: 0xEF3E / 61246
{
	Function_358(&Global_28842, iParam0);
	return;
}

void Function_358(var uParam0, var uParam1) //Position: 0xEF4C / 61260
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_359() //Position: 0xEF6F / 61295
{
	Function_360(bLocal_680);
	Function_360(bLocal_681);
	return;
}

void Function_360(bool bParam0) //Position: 0xEF81 / 61313
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			SET_ACTOR_HEALTH(bParam0, GET_ACTOR_MAX_HEALTH(bParam0));
		}
	}
	return;
}

void Function_361() //Position: 0xEFA1 / 61345
{
	Function_362();
	return;
}

void Function_362() //Position: 0xEFAA / 61354
{
	Function_170(&Local_174 + 904);
	return;
}

void Function_363(bool bParam0) //Position: 0xEFB8 / 61368
{
	Function_364(0, 0x40400000);
	Function_194();
	Function_193();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_364(bool bParam0, float fParam1) //Position: 0xEFEC / 61420
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
	{
		TASK_CLEAR(Global_12976.f_36);
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (bParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, true);
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	Function_366();
	Function_365();
	if (DECOR_CHECK_EXIST(Global_34573, "Player_SimWhistle"))
	{
		DECOR_REMOVE(Global_34573, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(Global_34573, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + fParam1));
	return;
}

void Function_365() //Position: 0xF0EA / 61674
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_366() //Position: 0xF11C / 61724
{
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(Global_34573, "WhistleNavQuery"));
		DECOR_REMOVE(Global_34573, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(Global_34573, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistlePosProbed"))
	{
		DECOR_REMOVE(Global_34573, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	return;
}

void Function_367() //Position: 0xF219 / 61977
{
	if (bLocal_676 < 5 && bLocal_676 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_174 + 1312)[5]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_174 + 1312)[5]))
			{
				Function_361();
				iLocal_901 = 0;
				DESTROY_VOLUME((*&Local_174 + 1312)[5]);
			}
		}
		else if (!iLocal_901)
		{
			if (Function_349())
			{
				Function_347();
				iLocal_901 = 1;
			}
		}
		else
		{
			Function_439();
		}
		if (!Function_435())
		{
			Function_434();
			Function_253(105, "STAGE 03 - FADE OUT");
		}
	}
	switch (bLocal_676)
	{
		case 0x00000000:
			Function_363(0);
			if (IS_VOLUME_VALID((*&Local_174 + 1312)[4]))
			{
				Function_432();
				DESTROY_VOLUME((*&Local_174 + 1312)[4]);
			}
			Function_431();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_356();
			bLocal_678 = Global_30693[0];
			if (iLocal_705[4] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_258(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_355(Global_34573, (*&Local_174 + 1592)[0], 1, 1, 1);
				Function_253(1, "STAGE 06 - STREAMING GOAL");
			}
			else
			{
				Function_253(2, "STAGE 06 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_428() && STREAMING_IS_WORLD_LOADED()) && (Function_348(bLocal_678) || bLocal_678 != 4294967295))
			{
				Function_427();
				Function_407();
				Function_406();
				Function_253(2, "STAGE 06 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_269(bLocal_675);
			Function_400(StackVal, StackVal, Function_269(bLocal_675), bLocal_675, Global_30633[2], Function_272(bLocal_675), 0);
			iLocal_677 = Function_399();
			Function_306(1.0f);
			Function_385();
			Function_257(1);
			Function_253(6, "STAGE 06 - OBJ_01-DLG_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_226();
				Function_382();
				Function_379(1);
				Function_194();
				Function_253(7, "STAGE 06 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_378("Gun05_obj06", 7,5f, 1, 2, 0, 0, 0);
				Function_253(13, "STAGE 06 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (Function_371(&bLocal_693, Global_30693[0], 0, "Chuparosa_return", "Chuparosa_abandoned", &bLocal_713, 1, 0, 0, 330, 1))
			{
				Function_379(0);
				Function_370(0);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_253(14, "STAGE 06 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_371(&bLocal_693, Global_30693[0], 0, "Chuparosa_return", "Chuparosa_abandoned", &bLocal_713, 1, 0, 0, 330, 1))
			{
				Function_211();
				Function_379(1);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_253(13, "STAGE 06 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x00000069:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_258(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				Function_257(0);
				Function_253(106, "STAGE 06 - COMPLETE");
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_368();
				bLocal_675 = 101;
				iLocal_705[5] = 1;
				Function_253(0, "LAST STAGE - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_368() //Position: 0xF601 / 62977
{
	Function_369();
	Function_240();
	Function_379(0);
	return;
}

void Function_369() //Position: 0xF611 / 62993
{
	Function_330(&(Local_756[517]));
	if (IS_ACTOR_ALIVE(bLocal_687))
	{
		DESTROY_ACTOR(bLocal_687);
	}
	return;
}

void Function_370(bool bParam0) //Position: 0xF62F / 63023
{
	Function_211();
	bLocal_898 = ADD_BLIP_FOR_OBJECT((*&Local_174 + 1660)[bParam0], 330, 0f, 2, 0);
	return;
}

bool Function_371(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0xF64D / 63053
{
	if (!Function_81(bParam1))
	{
		return 0;
	}
	if (StackVal == 1)
	{
		return 0;
	}
	if (StackVal && (StackVal || (StackVal || (bParam2 && Function_348(bParam1)) != 3 != 4) != 5))
	{
		if (!IS_ACTOR_IN_VOLUME(StackVal, Global_34573))
		{
			Function_263(bParam4);
			*iParam5 = 1;
			return 1;
		}
		if (!Global_3386)
		{
			if (!Function_377(128))
			{
				if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_378(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
					Function_376(128);
				}
				if (IS_LAYOUTREF_VALID(bParam7))
				{
					Function_375(bParam7, 0, 4294967295, 0, 0);
				}
				if (IS_LAYOUTREF_VALID(bParam8))
				{
					Function_375(bParam8, 0, 4294967295, 0, 0);
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
				{
					ADD_BLIP_FOR_OBJECT(StackVal, bParam9, 0f, 2, 0);
				}
			}
			return 1;
		}
		if (Function_377(128))
		{
			Function_374(128);
			Function_374(256);
			if (!Function_373())
			{
				if (bParam10)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_372();
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(StackVal));
				}
				if (IS_LAYOUTREF_VALID(bParam7))
				{
					Function_375(bParam7, 1, 4294967295, 0, 0);
				}
				if (IS_LAYOUTREF_VALID(bParam8))
				{
					Function_375(bParam8, 1, 4294967295, 0, 0);
				}
			}
		}
	}
	else if (!IS_ACTOR_IN_VOLUME(StackVal, Global_34573))
	{
		if (Function_377(256))
		{
			if (Function_312(iParam0) <= 8.0f)
			{
				Function_263(bParam4);
				*iParam5 = 1;
			}
		}
		else if (!Function_377(256))
		{
			if (bParam6)
			{
				Function_226();
			}
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_378(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
				Function_376(256);
				Function_254(iParam0);
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_375(bParam7, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_375(bParam8, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				ADD_BLIP_FOR_OBJECT(StackVal, bParam9, 0f, 2, 0);
			}
		}
		return 1;
	}
	if (Function_377(256))
	{
		Function_374(128);
		Function_374(256);
		if (!Function_373())
		{
			if (bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_372();
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(StackVal));
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_375(bParam7, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_375(bParam8, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_372() //Position: 0xF90E / 63758
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_LAST_NOTE_OBJECTIVE();
	bVar1 = UI_GET_STRING_BY_HASH(iVar0);
	if (STRING_LENGTH(bVar1) >= 0)
	{
		PRINT_OBJECTIVE_B(bVar1, 7,5f, 1, 2, false, 0, 0, 0);
	}
	return;
}

bool Function_373() //Position: 0xF939 / 63801
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return DECOR_GET_INT(Global_34573, "missionFailRmd") == 0;
		}
	}
	return 0;
}

void Function_374(bool bParam0) //Position: 0xF97D / 63869
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
			Function_36(&bVar0, bParam0);
			DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_375(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xF9E0 / 63968
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_LAYOUT(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (((GET_OBJECT_TYPE(bVar1) != iParam2 || iParam2 != 4294967295) || ((iParam2 != 15 && GET_OBJECT_TYPE(bVar1) != 24) && iParam3)) && bVar1 == bParam4)
		{
			bVar2 = GET_BLIP_ON_OBJECT(bVar1);
			if (IS_BLIP_VALID(bVar2))
			{
				if ((GET_BLIP_ICON(bVar2) == 322 && GET_BLIP_ICON(bVar2) == 323) && GET_BLIP_ICON(bVar2) == 324)
				{
					SET_BLIP_VISIBLE(bVar2, bParam1);
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
}

void Function_376(bool bParam0) //Position: 0xFA81 / 64129
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
		}
		Function_76(&bVar0, bParam0);
		DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_377(bool bParam0) //Position: 0xFAE4 / 64228
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_153(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

void Function_378(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xFB2B / 64299
{
	int iVar0;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, &Global_3422[Global_626940] + 12, 0, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_OBJECTIVE_B(bParam0, fParam1, 0, iParam3, bParam2, iVar0, iParam5, iParam6);
	}
}

void Function_379(bool bParam0) //Position: 0xFB7E / 64382
{
	if (SQUAD_IS_VALID(bLocal_688))
	{
		if (bParam0)
		{
			Function_381(bLocal_688, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		}
		else
		{
			Function_380(bLocal_688);
		}
	}
	return;
}

void Function_380(bool bParam0) //Position: 0xFBB4 / 64436
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_381(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0xFC01 / 64513
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar1 = GET_BLIP_ON_ACTOR(bVar2);
			if (IS_BLIP_VALID(bVar1))
			{
				if (GET_BLIP_ICON(bVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(bVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(bVar1, fParam3);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			else
			{
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, bParam1, fParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			if (iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2, iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2);
			}
			if (GET_BLIP_ICON(bVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || uParam6));
			}
		}
		bVar0++;
	}
}

void Function_382() //Position: 0xFCEB / 64747
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_BanditsFire", "Gun05_BanditsFire", false, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_383(int iParam0) //Position: 0xFD36 / 64822
{
	Function_384(0, Global_34573, iParam0, 0);
	Function_384(1, bLocal_680, iParam0, 0);
	if (IS_ACTOR_ALIVE(bLocal_682))
	{
		Function_384(2, bLocal_682, iParam0, 0);
	}
	if (IS_ACTOR_ALIVE(bLocal_687))
	{
		Function_384(3, bLocal_687, iParam0, 0);
	}
	return;
}

void Function_384(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xFD76 / 64886
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_385() //Position: 0xFD9B / 64923
{
	iLocal_899 = 4294967295;
	AUDIO_MUSIC_SET_MOOD("GUN_05_GUNFIGHT", 0, 4294967295, 4294967295);
	Function_398(0);
	Function_397();
	Function_389();
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	Function_388();
	if (IS_ACTOR_ALIVE(bLocal_681))
	{
		AI_IGNORE_ACTOR(bLocal_681);
	}
	Function_304();
	Function_387();
	Function_238();
	Function_237();
	MEMORY_CONSIDER_AS(bLocal_687, Global_34573, false);
	SET_ACTOR_FACTION(bLocal_687, 20);
	if (iLocal_677 == 0)
	{
		Function_247();
	}
	else
	{
		Function_386();
	}
	Function_328();
	return;
}

void Function_386() //Position: 0xFE10 / 65040
{
	bool bVar0;
	
	iLocal_996 = 1;
	RESET_ANIM_SET_FOR_ACTOR(bLocal_687, 1);
	GET_OBJECT_POSITION((*&Local_174 + 1660)[2], &vLocal_887);
	bVar0 = FIND_NEAREST_COVER_LOCATION(&vLocal_887, 5.0f, 360.0f, 360.0f, 7);
	bLocal_896 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD(false, &vLocal_887, 4);
	if (IS_COVER_LOCATION_VALID(bVar0))
	{
		TASK_HIDE_AT_COVER(false, bVar0, -1.0f, 6f, 1);
	}
	else
	{
		TASK_CROUCH(false, -1.0f);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(bLocal_687);
	TASK_PRIORITY_SET(bLocal_687, true);
	TASK_SEQUENCE_PERFORM(bLocal_687, bLocal_896);
	TASK_SEQUENCE_RELEASE(bLocal_896, 1);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_687, (*&Local_174 + 1344)[2], 4, 1);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_687, (*&Local_174 + 1344)[3]);
	return;
}

void Function_387() //Position: 0xFEAD / 65197
{
	SQUAD_SET_FACTION(bLocal_688, 19);
	SQUAD_GOALS_CLEAR(bLocal_688);
	bLocal_896 = false;
	while (bLocal_896 <= SQUAD_GET_SIZE(bLocal_688))
	{
		bLocal_886 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_688, bLocal_896);
		if (IS_ACTOR_ALIVE(bLocal_886))
		{
			MEMORY_ALLOW_SHOOTING(bLocal_886, true);
			MEMORY_CONSIDER_AS_ENEMY(bLocal_886, Global_34573);
			TASK_CLEAR(bLocal_886);
		}
		bLocal_896++;
	}
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bLocal_688, 0, (*&Local_174 + 1344)[1], 4294967295);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bLocal_688, false, (*&Local_174 + 1344)[1], 2, 1);
	return;
}

void Function_388() //Position: 0xFF2A / 65322
{
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_680, 2);
	CLEAR_ACTOR_MAX_SPEED(bLocal_680);
	TASK_CLEAR(bLocal_680);
	TASK_PRIORITY_SET(bLocal_680, true);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bLocal_680, -1.0f);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_680);
	SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_680, (*&Local_174 + 1344)[1], 2, true);
	return;
}

void Function_389() //Position: 0xFF67 / 65383
{
	iLocal_715 = 1;
	Function_330(&(Local_756[217]));
	Function_390(&(Local_756[517]), bLocal_687, "Gun05_hostage", 0, 0x5f5e100, 1);
	return;
}

int Function_390(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0xFF9E / 65438
{
	if (!Function_396(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_395(uParam0, bParam2))
	{
		return 0;
	}
	Function_394(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_391(uParam0, iParam4, iParam5);
	return 1;
}

void Function_391(char* cParam0, int iParam1, int iParam2) //Position: 0xFFDA / 65498
{
	if (iParam1 != 100000000)
	{
		Function_393(cParam0, iParam1, iParam2);
	}
	else
	{
		Function_392(cParam0, iParam2);
	}
	return;
}

void Function_392(int iParam0, bool bParam1) //Position: 0x10000 / 65536
{
	iParam0->f_40 = 0;
	Function_393(iParam0, 2, bParam1);
	Function_393(iParam0, 4, bParam1);
	Function_393(iParam0, 8, bParam1);
	Function_393(iParam0, 16, bParam1);
	Function_393(iParam0, 32, bParam1);
	Function_393(iParam0, 64, bParam1);
	Function_393(iParam0, 128, bParam1);
	Function_393(iParam0, 256, bParam1);
	Function_393(iParam0, 512, bParam1);
	Function_393(iParam0, 1024, bParam1);
	return;
}

void Function_393(int iParam0, int iParam1, bool bParam2) //Position: 0x10066 / 65638
{
	bool bVar0;
	
	Function_76(iParam0 + 40, iParam1);
	bVar0 = false;
	Function_76(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_36(iParam0 + 40, bVar0);
	}
	else
	{
		Function_76(iParam0 + 40, bVar0);
	}
	return;
}

void Function_394(char* cParam0, int iParam1) //Position: 0x100A2 / 65698
{
	cParam0->f_36 = iParam1;
	return;
}

bool Function_395(int iParam0, bool bParam1) //Position: 0x100AE / 65710
{
	if (!IS_STRING_VALID(cParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name invalid!");
		return 0;
	}
	if (STRING_LENGTH(bParam1) > 24)
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name too long!");
		return 0;
	}
	strcpy(iParam0 + 4, bParam1, 24);
	return 1;
}

bool Function_396(int iParam0, bool bParam1) //Position: 0x10137 / 65847
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(bParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object invalid!");
		return 0;
	}
	*iParam0 = bParam1;
	iParam0->f_28 = GET_OBJECT_TYPE(*iParam0);
	iParam0->f_32 = 2;
	switch (iParam0->f_28)
	{
		case 0x0000000F:
			bVar0 = GET_ACTOR_FROM_OBJECT(*iParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_HORSE(bVar0))
				{
					iParam0->f_32 = 1;
				}
				else if (IS_ACTOR_VEHICLE(bVar0))
				{
					iParam0->f_32 = 3;
				}
			}
			break;
		
		case 0x00000019:
			bVar1 = GET_SQUAD_FROM_OBJECT(*iParam0);
			if (SQUAD_IS_VALID(bVar1))
			{
				if (SQUAD_GET_SIZE(bVar1) >= 0)
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bVar1, false);
					if (IS_ACTOR_VALID(bVar2))
					{
						if (IS_ACTOR_HORSE(bVar2))
						{
							iParam0->f_32 = 1;
						}
						else if (IS_ACTOR_VEHICLE(bVar2))
						{
							iParam0->f_32 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			bVar3 = GET_OBJECTSET_FROM_OBJECT(*iParam0);
			if (IS_OBJECTSET_VALID(bVar3))
			{
				if (GET_OBJECTSET_SIZE(bVar3) >= 0)
				{
					bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar3);
					if (IS_OBJECT_VALID(bVar4))
					{
						bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
						if (IS_ACTOR_VALID(bVar5))
						{
							if (IS_ACTOR_HORSE(bVar5))
							{
								iParam0->f_32 = 1;
							}
							else if (IS_ACTOR_VEHICLE(bVar5))
							{
								iParam0->f_32 = 3;
							}
						}
					}
				}
			}
			break;
		
		default:
			LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object type not supported!");
			return 0;
			break;
	}
	return 1;
}

void Function_397() //Position: 0x102C3 / 66243
{
	if (IS_ACTOR_ALIVE((*&Local_174 + 1180)[02]))
	{
		if (SQUAD_GET((*&Local_174 + 1180)[02]) != bLocal_689)
		{
			SQUAD_JOIN((*&Local_174 + 1180)[02], bLocal_689);
		}
	}
	if (IS_ACTOR_ALIVE((*&Local_174 + 1180)[12]))
	{
		if (SQUAD_GET((*&Local_174 + 1180)[12]) != bLocal_689)
		{
			SQUAD_JOIN((*&Local_174 + 1180)[12], bLocal_689);
		}
	}
	if (IS_ACTOR_ALIVE((*&Local_174 + 1200)[02]))
	{
		if (SQUAD_GET((*&Local_174 + 1200)[02]) != bLocal_689)
		{
			SQUAD_JOIN((*&Local_174 + 1200)[02], bLocal_689);
		}
	}
	if (IS_ACTOR_ALIVE((*&Local_174 + 1200)[12]))
	{
		if (SQUAD_GET((*&Local_174 + 1200)[12]) != bLocal_689)
		{
			SQUAD_JOIN((*&Local_174 + 1200)[12], bLocal_689);
		}
	}
	return;
}

void Function_398(bool bParam0) //Position: 0x1037D / 66429
{
	if (IS_ACTOR_ALIVE(bLocal_684))
	{
		if (bParam0)
		{
			if (SQUAD_GET(bLocal_684) != bLocal_688)
			{
				SQUAD_JOIN(bLocal_684, bLocal_688);
			}
		}
		else
		{
			SQUAD_LEAVE(bLocal_684);
		}
	}
	if (IS_ACTOR_ALIVE(bLocal_686))
	{
		if (SQUAD_GET(bLocal_686) != bLocal_688)
		{
			SQUAD_JOIN(bLocal_686, bLocal_688);
		}
	}
	if (IS_ACTOR_ALIVE((*&Local_174 + 1148)[02]))
	{
		if (SQUAD_GET((*&Local_174 + 1148)[02]) != bLocal_688)
		{
			SQUAD_JOIN((*&Local_174 + 1148)[02], bLocal_688);
		}
	}
	if (IS_ACTOR_ALIVE((*&Local_174 + 1160)[02]))
	{
		if (SQUAD_GET((*&Local_174 + 1160)[02]) != bLocal_688)
		{
			SQUAD_JOIN((*&Local_174 + 1160)[02], bLocal_688);
		}
	}
	if (IS_ACTOR_ALIVE((*&Local_174 + 1160)[12]))
	{
		if (SQUAD_GET((*&Local_174 + 1160)[12]) != bLocal_688)
		{
			SQUAD_JOIN((*&Local_174 + 1160)[12], bLocal_688);
		}
	}
	return;
}

var Function_399() //Position: 0x10454 / 66644
{
	return Global_34165.f_60;
}

void Function_400(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x1045F / 66655
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (iParam3 == Global_34165.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (iParam3 < 0)
	{
		Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	}
	if (iParam3 != Global_34165.f_48 && !Function_405())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_404(0);
	Function_403();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_402(uParam4, iVar0, iVar1);
	Function_401();
}

void Function_401() //Position: 0x104FC / 66812
{
	if (Global_76853)
	{
		UNK_0x6287203C(Global_34165.f_132);
		PRINTSTRING("Set difficulty level to ");
		PRINTINT(Global_34165.f_132);
		PRINTNL();
	}
	return;
}

void Function_402(int iParam0, bool bParam1, bool bParam2) //Position: 0x1053D / 66877
{
	Global_34165.f_28 = 1;
	Global_34165.f_32 = 0;
	if (bParam1)
	{
		Global_34165.f_56++;
	}
	if (bParam2)
	{
		Global_34165.f_60 = 0;
		if (Global_34165.f_132 >= 0)
		{
			Global_34165.f_132 = (Global_34165.f_132 - 1);
			PRINTSTRING("Increasing difficulty by one level. New difficulty is ");
			PRINTINT(Global_34165.f_132);
			PRINTNL();
			PRINTSTRING("Current difficulty is ");
			PRINTINT(Global_34165.f_132);
			PRINTNL();
		}
	}
	else
	{
		Global_34165.f_132++;
		Global_34165.f_60++;
		PRINTSTRING("Current difficulty is ");
		PRINTINT(Global_34165.f_132);
		PRINTNL();
	}
	Global_34165.f_112 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_34165.f_112));
	PRINTNL();
	if (iParam0 == 4294967295)
	{
		Global_34165.f_24 = Global_29005;
	}
	else
	{
		Global_34165.f_24 = iParam0;
	}
	if (Function_81(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_42();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_403() //Position: 0x106A3 / 67235
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_404(bool bParam0) //Position: 0x106C7 / 67271
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_68 = bParam0;
	if (bParam0)
	{
		Var0.f_72 = 1;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

bool Function_405() //Position: 0x106F6 / 67318
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_406() //Position: 0x10711 / 67345
{
	Function_355(bLocal_680, (*&Local_174 + 1592)[1], 1, 1, 1);
	Function_325();
	Function_355(bLocal_686, (*&Local_174 + 1592)[2], 1, 1, 1);
	Function_355((*&Local_174 + 1148)[02], (*&Local_174 + 1592)[3], 1, 1, 1);
	Function_355((*&Local_174 + 1160)[02], (*&Local_174 + 1592)[4], 1, 1, 1);
	Function_355((*&Local_174 + 1160)[12], (*&Local_174 + 1592)[5], 1, 1, 1);
	Function_355(bLocal_687, (*&Local_174 + 1592)[6], 1, 1, 1);
	return;
}

void Function_407() //Position: 0x1078F / 67471
{
	Function_425(1);
	Function_424();
	Function_422(1);
	Function_420();
	Function_418();
	Function_416();
	Function_415();
	Function_413();
	Function_411();
	Function_408();
	return;
}

void Function_408() //Position: 0x107B5 / 67509
{
	if (!IS_ACTOR_ALIVE(bLocal_687))
	{
		Function_409();
		bLocal_687 = (*&Local_174 + 1112)[02];
	}
	return;
}

void Function_409() //Position: 0x107D3 / 67539
{
	(*&Local_174 + 1112)[02] = CREATE_ACTOR_IN_LAYOUT(Local_174, "Hostage", 678, -2686,888f, 31,12157f, 4300.0f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_174 + 1112)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_174 + 1112)[02]);
	TASK_STAND_STILL((*&Local_174 + 1112)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_174 + 1112)[02], 21);
	TASK_PRIORITY_SET((*&Local_174 + 1112)[02], true);
	Function_410((*&Local_174 + 1112)[02]);
	AI_IGNORE_ACTOR((*&Local_174 + 1112)[02]);
	AI_DONT_HARM_ACTOR((*&Local_174 + 1112)[02]);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_174 + 1112)[02], 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_174 + 1112)[02], false);
	return;
}

void Function_410(bool bParam0) //Position: 0x1087D / 67709
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

void Function_411() //Position: 0x108B1 / 67761
{
	if (!IS_ACTOR_ALIVE((*&Local_174 + 1200)[02]) && !IS_ACTOR_ALIVE((*&Local_174 + 1200)[12]))
	{
		Function_412();
	}
	return;
}

void Function_412() //Position: 0x108D6 / 67798
{
	(*&Local_174 + 1200)[02] = CREATE_ACTOR_IN_LAYOUT(Local_174, "Patron03", 748, -2690,888f, 31,12157f, 4300.0f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_174 + 1200)[02], false);
	TASK_STAND_STILL((*&Local_174 + 1200)[02], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_174 + 1200)[02], true);
	Function_410((*&Local_174 + 1200)[02]);
	(*&Local_174 + 1200)[12] = CREATE_ACTOR_IN_LAYOUT(Local_174, "Whore01", 248, -2688,888f, 31,12157f, 4300.0f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_174 + 1200)[12], false);
	TASK_STAND_STILL((*&Local_174 + 1200)[12], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_174 + 1200)[12], true);
	Function_410((*&Local_174 + 1200)[12]);
	return;
}

void Function_413() //Position: 0x10996 / 67990
{
	if (!IS_ACTOR_ALIVE((*&Local_174 + 1180)[02]) && !IS_ACTOR_ALIVE((*&Local_174 + 1180)[12]))
	{
		Function_414();
	}
	return;
}

void Function_414() //Position: 0x109BB / 68027
{
	(*&Local_174 + 1180)[02] = CREATE_ACTOR_IN_LAYOUT(Local_174, "Patron01", 750, -2694,888f, 31,12157f, 4300.0f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_174 + 1180)[02], false);
	TASK_STAND_STILL((*&Local_174 + 1180)[02], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_174 + 1180)[02], true);
	Function_410((*&Local_174 + 1180)[02]);
	(*&Local_174 + 1180)[12] = CREATE_ACTOR_IN_LAYOUT(Local_174, "Patron02", 746, -2692,888f, 31,12157f, 4300.0f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_174 + 1180)[12], false);
	TASK_STAND_STILL((*&Local_174 + 1180)[12], -1.0f, 0, 0);
	TASK_PRIORITY_SET((*&Local_174 + 1180)[12], true);
	Function_410((*&Local_174 + 1180)[12]);
	return;
}

void Function_415() //Position: 0x10A7D / 68221
{
	if (!SQUAD_IS_VALID(bLocal_689))
	{
		bLocal_689 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_174, "PatronSquad"));
	}
	return;
}

void Function_416() //Position: 0x10AA6 / 68262
{
	if (!IS_ACTOR_ALIVE((*&Local_174 + 1160)[02]) && !IS_ACTOR_ALIVE((*&Local_174 + 1160)[12]))
	{
		Function_417();
	}
	return;
}

void Function_417() //Position: 0x10ACB / 68299
{
	(*&Local_174 + 1160)[02] = CREATE_ACTOR_IN_LAYOUT(Local_174, "Gangster02", 412, -2698,888f, 31,12157f, 4299.0f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_174 + 1160)[02], false);
	TASK_STAND_STILL((*&Local_174 + 1160)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_174 + 1160)[02], 21);
	TASK_PRIORITY_SET((*&Local_174 + 1160)[02], true);
	Function_410((*&Local_174 + 1160)[02]);
	(*&Local_174 + 1160)[12] = CREATE_ACTOR_IN_LAYOUT(Local_174, "Gangster03", 409, -2696,888f, 31,12157f, 4299.0f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_174 + 1160)[12], false);
	TASK_STAND_STILL((*&Local_174 + 1160)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_174 + 1160)[12], 21);
	TASK_PRIORITY_SET((*&Local_174 + 1160)[12], true);
	Function_410((*&Local_174 + 1160)[12]);
	return;
}

void Function_418() //Position: 0x10BAB / 68523
{
	if (!IS_ACTOR_ALIVE((*&Local_174 + 1148)[02]))
	{
		Function_419();
	}
	return;
}

void Function_419() //Position: 0x10BC3 / 68547
{
	(*&Local_174 + 1148)[02] = CREATE_ACTOR_IN_LAYOUT(Local_174, "Gangster01", 410, -2704,535f, 31,15405f, 4288,001f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_174 + 1148)[02], false);
	TASK_STAND_STILL((*&Local_174 + 1148)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_174 + 1148)[02], 21);
	TASK_PRIORITY_SET((*&Local_174 + 1148)[02], true);
	Function_410((*&Local_174 + 1148)[02]);
	return;
}

void Function_420() //Position: 0x10C36 / 68662
{
	if (!IS_ACTOR_ALIVE(bLocal_686))
	{
		Function_421();
		bLocal_686 = (*&Local_174 + 1124)[02];
	}
	return;
}

void Function_421() //Position: 0x10C54 / 68692
{
	(*&Local_174 + 1124)[02] = CREATE_ACTOR_IN_LAYOUT(Local_174, "Manolo", 408, -2695,888f, 31,12157f, 4298.0f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_174 + 1124)[02], false);
	TASK_STAND_STILL((*&Local_174 + 1124)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_174 + 1124)[02], 21);
	TASK_PRIORITY_SET((*&Local_174 + 1124)[02], true);
	Function_410((*&Local_174 + 1124)[02]);
	return;
}

void Function_422(bool bParam0) //Position: 0x10CC3 / 68803
{
	if (!bParam0)
	{
		if (!IS_ACTOR_ALIVE(bLocal_684))
		{
			Function_423();
			bLocal_684 = (*&Local_174 + 1220)[02];
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_684);
		}
	}
	else if (!iLocal_705[4])
	{
		if (IS_ACTOR_ALIVE(bLocal_684))
		{
			SQUAD_LEAVE(bLocal_684);
			DESTROY_ACTOR(bLocal_684);
		}
		if (!IS_OBJECT_VALID(iLocal_685))
		{
			GET_OBJECT_POSITION((*&Local_174 + 1660)[7], &vLocal_887);
			GET_OBJECT_ORIENTATION((*&Local_174 + 1660)[7], &vLocal_893);
			bLocal_685 = CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_174, "StrangerCorpse", 664, vLocal_887, vLocal_893, "dead_ground_male");
		}
	}
	return;
}

void Function_423() //Position: 0x10D70 / 68976
{
	(*&Local_174 + 1220)[02] = CREATE_ACTOR_IN_LAYOUT(Local_174, "Stranger", 664, -2697,888f, 31,12157f, 4298.0f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_174 + 1220)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_174 + 1220)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_174 + 1220)[02], 40, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_174 + 1220)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_174 + 1220)[02], 21);
	TASK_PRIORITY_SET((*&Local_174 + 1220)[02], true);
	Function_410((*&Local_174 + 1220)[02]);
	return;
}

void Function_424() //Position: 0x10E00 / 69120
{
	if (!SQUAD_IS_VALID(bLocal_688))
	{
		bLocal_688 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_174, "MullerGangSquad"));
	}
	return;
}

void Function_425(bool bParam0) //Position: 0x10E2D / 69165
{
	if (!bParam0)
	{
		if (!IS_ACTOR_ALIVE(bLocal_682))
		{
			Function_426();
			bLocal_682 = (*&Local_174 + 1136)[02];
		}
	}
	else if (!iLocal_705[2])
	{
		Function_330(&(Local_756[117]));
		if (IS_ACTOR_ALIVE(bLocal_682))
		{
			DESTROY_ACTOR(bLocal_682);
		}
		if (!IS_OBJECT_VALID(iLocal_683))
		{
			GET_OBJECT_POSITION((*&Local_174 + 1660)[3], &vLocal_887);
			GET_OBJECT_ORIENTATION((*&Local_174 + 1660)[3], &vLocal_893);
			bLocal_683 = CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_174, "MullerCorpse", 662, vLocal_887, vLocal_893, "dead_ground_male");
		}
	}
	return;
}

void Function_426() //Position: 0x10ED5 / 69333
{
	(*&Local_174 + 1136)[02] = CREATE_ACTOR_IN_LAYOUT(Local_174, "Muller", 662, -2699,888f, 31,12157f, 4298.0f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_174 + 1136)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_174 + 1136)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_174 + 1136)[02], 5, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_174 + 1136)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_174 + 1136)[02], 21);
	TASK_PRIORITY_SET((*&Local_174 + 1136)[02], true);
	Function_410((*&Local_174 + 1136)[02]);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_174 + 1136)[02], 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_174 + 1136)[02], true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON((*&Local_174 + 1136)[02], 8, "FASTWALK");
	return;
}

void Function_427() //Position: 0x10F92 / 69522
{
	return;
}

bool Function_428() //Position: 0x10F98 / 69528
{
	if (Function_429() && Function_350(&bLocal_654))
	{
		return 1;
	}
	return 0;
}

int Function_429() //Position: 0x10FAE / 69550
{
	Function_430(&Local_174 + 904, 678, 2, 0);
	Function_430(&Local_174 + 904, 408, 2, 0);
	Function_430(&Local_174 + 904, 662, 2, 0);
	Function_430(&Local_174 + 904, 410, 2, 0);
	Function_430(&Local_174 + 904, 412, 2, 0);
	Function_430(&Local_174 + 904, 409, 2, 0);
	Function_430(&Local_174 + 904, 750, 2, 0);
	Function_430(&Local_174 + 904, 746, 2, 0);
	Function_430(&Local_174 + 904, 748, 2, 0);
	Function_430(&Local_174 + 904, 248, 2, 0);
	Function_430(&Local_174 + 904, 664, 2, 0);
	Function_430(&Local_174 + 904, 255, 2, 0);
	Function_430(&Local_174 + 904, 276, 2, 0);
	Function_430(&Local_174 + 904, 264, 2, 0);
	Function_430(&Local_174 + 904, 290, 2, 0);
	Function_430(&Local_174 + 904, 247, 2, 0);
	Function_430(&Local_174 + 904, 685, 2, 0);
	if (Function_350(&Local_174 + 904))
	{
		return 1;
	}
	return 0;
}

var Function_430(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x110AD / 69805
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_173(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_353(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_353(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_431() //Position: 0x1117D / 70013
{
	Function_360(bLocal_680);
	Function_360(bLocal_681);
	return;
}

void Function_432() //Position: 0x1118F / 70031
{
	Function_429();
	Function_433();
	return;
}

void Function_433() //Position: 0x1119C / 70044
{
	Function_170(&Local_174 + 696);
	return;
}

void Function_434() //Position: 0x111AA / 70058
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_AllBanditsDead", "Gun05_AllBanditsDead", false, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_435() //Position: 0x111FB / 70139
{
	switch (iLocal_1013)
	{
		case 0x00000000:
			Function_438(&iLocal_696);
			bLocal_1004 = 3.0f;
			Function_254(&iLocal_998);
			iLocal_1013 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (!Function_437(bLocal_688, 1, 1, 0, 0, 0))
			{
				iLocal_1013 = 2;
				return 1;
			}
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				Function_254(&iLocal_998);
			}
			if (!Function_314(&iLocal_1001))
			{
				Function_254(&iLocal_1001);
			}
			else if (Function_312(&iLocal_1001) < bLocal_1004)
			{
				if (Function_312(&iLocal_998) < 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(bLocal_680, "Gun05_JonNoShootBandits", Global_34573, 0, 0, 0, 1, 3);
				}
				else if (Function_436())
				{
					SAY_SINGLE_LINE_SCRIPTED(bLocal_680, "Gun05_RickTauntsBandits", Global_34573, 0, 0, 0, 1, 3);
				}
				else
				{
					SAY_SINGLE_LINE_SCRIPTED(bLocal_680, "Gun05_RickShoutsEncFinal", Global_34573, 0, 0, 0, 1, 3);
				}
				bLocal_1004 = RAND_FLOAT_RANGE(3.0f, 8.0f);
				Function_254(&iLocal_1001);
			}
			if (!iLocal_996)
			{
				if (!Function_314(&iLocal_696))
				{
					Function_254(&iLocal_696);
				}
				else if (Function_312(&iLocal_696) <= 10.0f)
				{
					Function_386();
				}
			}
			break;
		
		case 0x00000002:
			return 0;
			break;
	}
	return 1;
}

bool Function_436() //Position: 0x11353 / 70483
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

bool Function_437(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x11366 / 70502
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1 = true;
				if (bParam1)
				{
					if (IS_ACTOR_CRIPPLED(bVar2, 3) || IS_ACTOR_CRIPPLED(bVar2, 4))
					{
						bVar1 = false;
					}
				}
				if (bParam2)
				{
					if (IS_ACTOR_HOGTIED(bVar2))
					{
						bVar1 = false;
					}
				}
				if (bParam3)
				{
					if (IS_ACTOR_BEING_DRAGGED(bVar2, 1.0f))
					{
						bVar1 = false;
					}
				}
				if (bParam4)
				{
					if (UNK_0x7A207FFE(bVar2))
					{
						bVar1 = false;
					}
				}
				if (bParam5)
				{
					if (!IS_ACTOR_RIDING(bVar2) && !IS_ACTOR_RIDING_VEHICLE(bVar2))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_438(int iParam0) //Position: 0x1141A / 70682
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

int Function_439() //Position: 0x1142E / 70702
{
	GET_OBJECT_POSITION((*&Local_174 + 1552)[0], &vLocal_887);
	if (Function_440(StackVal, StackVal, "$/cutscene/GUN05_END/GUN05_END", &uLocal_900, vLocal_887, 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool Function_440(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x11486 / 70790
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_443(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_445()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
	{
		if (!bParam5 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && *uParam1 == 0)
		{
			if (*uParam1 != 5)
			{
				*uParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			*uParam1 = 0;
			return 0;
		}
		if ((iParam13 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar16, &vVar19))
			{
				if (!Function_73(StackVal, StackVal, vVar16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&vVar19, (360.0f / 6,28f));
						STREAMING_OVERRIDE_MAIN_POI(vVar16, vVar19);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(vVar16, vVar19, 1);
					}
				}
			}
		}
		switch (*uParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(bParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					*uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0))
				{
					*uParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(bParam0, 0, iParam8, iParam9, iParam10, iParam11);
					*uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_441();
					CUTSCENE_MANAGER_RESUME_LOADING();
					*uParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					*uParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				*uParam1 = 0;
				break;
		}
	}
	else if ((!Function_443(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_445()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_443(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_441() //Position: 0x116CC / 71372
{
	bool bVar0;
	vector3 vVar1;
	struct<5> Var4;
	struct<5> Var10;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar0, &vVar7, &Var10);
			Function_442(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_442(char* cParam0, vector3 vParam1) //Position: 0x11720 / 71456
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam4, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam8, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

bool Function_443(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x11848 / 71752
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_444(bParam0);
		if (VDIST(Function_444(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_444(bool bParam0) //Position: 0x118D2 / 71890
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

int Function_445() //Position: 0x1193C / 71996
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_446() //Position: 0x1194B / 72011
{
	if (bLocal_676 < 5 && bLocal_676 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_174 + 1312)[4]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_174 + 1312)[4]))
			{
				Function_432();
				iLocal_901 = 0;
				DESTROY_VOLUME((*&Local_174 + 1312)[4]);
			}
		}
		else if (!iLocal_901)
		{
			if (Function_428())
			{
				Function_427();
				iLocal_901 = 1;
			}
		}
		if (!Function_468())
		{
			Function_253(106, "STAGE 05 - COMPLETE");
		}
	}
	switch (bLocal_676)
	{
		case 0x00000000:
			Function_363(0);
			if (IS_VOLUME_VALID((*&Local_174 + 1312)[3]))
			{
				Function_466();
				DESTROY_VOLUME((*&Local_174 + 1312)[3]);
			}
			Function_465();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_356();
			bLocal_678 = Global_30693[0];
			if (iLocal_705[3] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_258(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_355(Global_34573, (*&Local_174 + 1552)[0], 1, 1, 1);
				Function_253(1, "STAGE 05 - STREAMING GOAL");
			}
			else
			{
				Function_253(2, "STAGE 05 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_463() && STREAMING_IS_WORLD_LOADED()) && (Function_348(bLocal_678) || bLocal_678 != 4294967295))
			{
				Function_462();
				Function_461();
				Function_253(2, "STAGE 05 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			if (Function_459(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_629, bLocal_675))
			{
				Function_458();
				Function_253(3, "STAGE 05 - CUTSCENE GOAL");
			}
			else
			{
				Function_457();
				Function_327();
				Function_253(4, "STAGE 05 - POST-CUTSCENE GOAL");
			}
			Function_269(bLocal_675);
			Function_400(StackVal, StackVal, Function_269(bLocal_675), bLocal_675, Global_30633[2], Function_272(bLocal_675), 0);
			iLocal_677 = Function_399();
			break;
		
		case 0x00000003:
			if (Function_307("$/cutscene/GUN_05_CS04/GUN_05_CS04", &Local_668, &Local_629, &bLocal_675, 57797, 73317, 57625, 56239, 55979, 73310, 1, 2, 1, 1, 2, 0, 1))
			{
				Function_451();
				Function_253(4, "STAGE 05 - POST-CUTSCENE GOAL");
			}
			break;
		
		case 0x00000004:
			Function_449();
			Function_253(6, "STAGE 05 - OBJ_01-OBJ_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_378("Gun05_obj05", 7,5f, 1, 2, 0, 0, 0);
				Function_448(1);
				Function_194();
				Function_253(13, "STAGE 05 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			Function_447();
			bLocal_675 = 5;
			iLocal_705[4] = 1;
			Function_253(0, "STAGE 06 - INITIALIZE");
			break;
	}
	return;
}

void Function_447() //Position: 0x11C95 / 72853
{
	Function_241();
	Function_448(0);
	return;
}

void Function_448(bool bParam0) //Position: 0x11CA2 / 72866
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_684)))
		{
			ADD_BLIP_FOR_ACTOR(bLocal_684, 322, 0, 2, 0);
			SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_684), GET_ACTOR_ENUM_STRING(bLocal_684));
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_684)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_684));
	}
	return;
}

void Function_449() //Position: 0x11CEE / 72942
{
	iLocal_899 = 4294967295;
	AUDIO_MUSIC_SET_MOOD("GUN_05_SHOOTOUT", 0, 4294967295, 4294967295);
	Function_450();
	Function_328();
	return;
}

void Function_450() //Position: 0x11D16 / 72982
{
	iLocal_715 = 1;
	Function_330(&(Local_756[217]));
	Function_390(&(Local_756[517]), bLocal_687, "Gun05_hostage", 0, 0x5f5e100, 1);
	return;
}

void Function_451() //Position: 0x11D4D / 73037
{
	_ADD_AMMO_OF_TYPE(Global_34573, 7, 6.0f, 0, 0);
	Function_454(bLocal_680);
	Function_239();
	Function_304();
	Function_453(bLocal_688);
	Function_452();
	Function_238();
	Function_237();
	return;
}

void Function_452() //Position: 0x11D78 / 73080
{
	bLocal_896 = false;
	while (bLocal_896 <= SQUAD_GET_SIZE(bLocal_688))
	{
		bLocal_886 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_688, bLocal_896);
		if (IS_ACTOR_ALIVE(bLocal_886))
		{
			FORCE_LOOK_AT_ACTOR(bLocal_886, Global_34573, 3212836864);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(bLocal_886, false);
			TASK_CLEAR(bLocal_886);
			TASK_PRIORITY_SET(bLocal_886, true);
			TASK_TAUNT_ACTOR_IN_PLACE(bLocal_886, Global_34573, -1f);
		}
		bLocal_896++;
	}
	return;
}

void Function_453(bool bParam0) //Position: 0x11DDE / 73182
{
	if (SQUAD_IS_VALID(bParam0))
	{
		bLocal_896 = false;
		while (bLocal_896 <= SQUAD_GET_SIZE(bParam0))
		{
			bLocal_886 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_896);
			if (IS_ACTOR_ALIVE(bLocal_886))
			{
				Function_454(bLocal_886);
			}
			bLocal_896++;
		}
	}
	return;
}

void Function_454(bool bParam0) //Position: 0x11E20 / 73248
{
	if (!DECOR_CHECK_EXIST(bParam0, "ignoreactorinduel"))
	{
		DECOR_SET_BOOL(bParam0, "ignoreactorinduel", true);
	}
	return;
}

int Function_455() //Position: 0x11E5E / 73310
{
	return 1;
}

int Function_456() //Position: 0x11E65 / 73317
{
	return 1;
}

void Function_457() //Position: 0x11E6C / 73324
{
	Function_408();
	Function_398(0);
	Function_397();
	Function_454(bLocal_680);
	Function_239();
	Function_304();
	Function_453(bLocal_688);
	Function_452();
	Function_238();
	Function_237();
	return;
}

void Function_458() //Position: 0x11E97 / 73367
{
	Function_229(&iLocal_899, 0, 0, 4294967295, 4294967295);
	Function_408();
	Function_398(0);
	Function_397();
	Function_304();
	return;
}

bool Function_459(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x11EB4 / 73396
{
	if (Function_460(&iParam0) == iParam7 || Function_405())
	{
		return 1;
	}
	return 0;
}

int Function_460(int iParam0) //Position: 0x11ED3 / 73427
{
	if (Function_317(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_461() //Position: 0x11EEB / 73451
{
	Function_425(1);
	Function_424();
	Function_422(0);
	Function_420();
	Function_418();
	Function_416();
	Function_415();
	Function_413();
	Function_411();
	Function_408();
	return;
}

void Function_462() //Position: 0x11F11 / 73489
{
	Function_408();
	return;
}

bool Function_463() //Position: 0x11F1A / 73498
{
	if (Function_464() && Function_350(&bLocal_654))
	{
		return 1;
	}
	return 0;
}

int Function_464() //Position: 0x11F30 / 73520
{
	Function_430(&Local_174 + 696, 678, 2, 0);
	Function_430(&Local_174 + 696, 408, 2, 0);
	Function_430(&Local_174 + 696, 662, 2, 0);
	Function_430(&Local_174 + 696, 410, 2, 0);
	Function_430(&Local_174 + 696, 412, 2, 0);
	Function_430(&Local_174 + 696, 409, 2, 0);
	Function_430(&Local_174 + 696, 750, 2, 0);
	Function_430(&Local_174 + 696, 746, 2, 0);
	Function_430(&Local_174 + 696, 748, 2, 0);
	Function_430(&Local_174 + 696, 248, 2, 0);
	Function_430(&Local_174 + 696, 664, 2, 0);
	Function_430(&Local_174 + 696, 255, 2, 0);
	Function_430(&Local_174 + 696, 276, 2, 0);
	Function_430(&Local_174 + 696, 264, 2, 0);
	Function_430(&Local_174 + 696, 290, 2, 0);
	Function_430(&Local_174 + 696, 247, 2, 0);
	Function_430(&Local_174 + 696, 685, 2, 0);
	if (Function_350(&Local_174 + 696))
	{
		return 1;
	}
	return 0;
}

void Function_465() //Position: 0x1202F / 73775
{
	Function_360(bLocal_680);
	Function_360(bLocal_681);
	return;
}

void Function_466() //Position: 0x12041 / 73793
{
	Function_464();
	Function_467();
	return;
}

void Function_467() //Position: 0x1204E / 73806
{
	Function_170(&Local_174 + 500);
	return;
}

bool Function_468() //Position: 0x1205C / 73820
{
	switch (iLocal_1012)
	{
		case 0x00000000:
			iLocal_1012 = 1;
			iLocal_960 = 99;
			return 1;
			break;
		
		case 0x00000001:
			if (!Function_469())
			{
				iLocal_1012 = 2;
				return 1;
			}
			break;
		
		case 0x00000002:
			return 0;
			break;
	}
	return 1;
}

bool Function_469() //Position: 0x120A0 / 73888
{
	bLocal_990 = false;
	bLocal_991 = false;
	switch (iLocal_960)
	{
		case 0x00000063:
			iLocal_986 = 0;
			bLocal_987 = false;
			iLocal_988 = 0;
			if (bLocal_675 == 2)
			{
				AUDIO_ALLOW_PREDUEL_SPEECH(bLocal_682);
				AUDIO_ALLOW_PREDUEL_SPEECH(bLocal_680);
				GET_OBJECT_POSITION((*&Local_174 + 1496)[0], &vLocal_887);
				GET_OBJECT_POSITION((*&Local_174 + 1496)[2], &vLocal_890);
				Function_476(StackVal, StackVal, StackVal, StackVal, bLocal_682, vLocal_887, vLocal_890, (*&Local_174 + 1344)[4], 50, 0, 0, 1);
			}
			else
			{
				AUDIO_ALLOW_PREDUEL_SPEECH(bLocal_687);
				AUDIO_ALLOW_PREDUEL_SPEECH(bLocal_680);
				GET_OBJECT_POSITION((*&Local_174 + 1552)[0], &vLocal_887);
				GET_OBJECT_POSITION((*&Local_174 + 1552)[2], &vLocal_890);
				Function_476(StackVal, StackVal, StackVal, StackVal, bLocal_684, vLocal_887, vLocal_890, (*&Local_174 + 1344)[5], 10, 1, bLocal_687, 0);
			}
			bLocal_989 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling", &Local_961, 25, 0);
			iLocal_960 = 0;
			break;
		
		case 0x00000000:
			if (!IS_SCRIPT_VALID(bLocal_989))
			{
				iLocal_960 = 101;
				return 1;
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bIsDuelOver"))
			{
				DECOR_REMOVE(Global_34573, "bIsDuelOver");
				if (bLocal_675 == 4)
				{
					MEMORY_CONSIDER_AS(bLocal_687, Global_34573, false);
					SET_ACTOR_FACTION(bLocal_687, 20);
				}
				else
				{
					Function_257(0);
					iLocal_960 = 101;
					return 1;
				}
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bIsDuelActive"))
			{
				Function_257(1);
				DECOR_REMOVE(Global_34573, "bIsDuelActive");
			}
			Function_470();
			break;
		
		case 0x00000065:
			bLocal_896 = 4294967295;
			if (DECOR_CHECK_EXIST(Global_34573, "iDuelResult"))
			{
				bLocal_896 = DECOR_GET_INT(Global_34573, "iDuelResult");
				DECOR_REMOVE(Global_34573, "iDuelResult");
			}
			switch (bLocal_896)
			{
				case 0x00001389:
					bLocal_990 = true;
					break;
				
				case 0x0000138A:
					bLocal_990 = true;
					if (IS_ACTOR_ALIVE(StackVal))
					{
						KILL_ACTOR(StackVal);
					}
					break;
				
				case 0x0000138B:
					bLocal_991 = true;
					Function_263("Gun05_lost_duel");
					break;
				
				case 0x0000138C:
					bLocal_991 = true;
					if (!IS_ACTOR_ALIVE(bLocal_687))
					{
						Function_263("Hostage_killed");
					}
					else
					{
						Function_263("Hostage_dead");
					}
					break;
				
				case 0x0000138D:
					bLocal_991 = true;
					Function_263("Gun05_lost_duel");
					break;
				
				default:
					bLocal_990 = true;
					break;
			}
			break;
		
		default:
			return 0;
			break;
	}
	if (bLocal_990)
	{
		return 0;
	}
	if (bLocal_991)
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
		bLocal_713 = true;
		return 0;
	}
	return 1;
}

int Function_470() //Position: 0x12373 / 74611
{
	if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_FADING()) && !HUD_IS_FADED())
	{
		if (bLocal_675 == 2)
		{
			if (!iLocal_986)
			{
				Function_475();
				iLocal_986 = 1;
				return 1;
			}
			if (!bLocal_987)
			{
				Function_474();
				bLocal_987 = true;
				Function_438(&iLocal_702);
				return 1;
			}
			if (!iLocal_988)
			{
				if (!IS_ACTOR_ALIVE(bLocal_682))
				{
					if (!Function_314(&iLocal_702))
					{
						Function_254(&iLocal_702);
					}
					else if (Function_312(&iLocal_702) <= 1.0f)
					{
						Function_473();
						iLocal_988 = 1;
						Function_438(&iLocal_702);
						return 1;
					}
				}
			}
		}
		if (!iLocal_986)
		{
			Function_472();
			iLocal_986 = 1;
			Function_255(&iLocal_702, 5.0f);
			return 1;
		}
		if (!bLocal_987)
		{
			if (!Function_314(&iLocal_702))
			{
				Function_254(&iLocal_702);
			}
			else if (Function_312(&iLocal_702) <= 5.0f)
			{
				Function_471();
				Function_438(&iLocal_702);
				return 1;
			}
		}
	}
	return 0;
}

void Function_471() //Position: 0x12449 / 74825
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Gun05_GirlTakenHostage", "Gun05_GirlTakenHostage", false, 1, 1, 0, 1);
		Function_383(9);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_472() //Position: 0x1249F / 74911
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_DontKillHostage", "Gun05_DontKillHostage", false, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_473() //Position: 0x124F2 / 74994
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_JonWinsDuel", "Gun05_JonWinsDuel", false, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_474() //Position: 0x1253D / 75069
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_RickMullerDuel", "Gun05_RickMullerDuel", false, 1, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_475() //Position: 0x1258E / 75150
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_ShoutsDuelBegin", "Gun05_ShoutsDuelBegin", false, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_476(bool bParam0, vector3 vParam1, vector3 vParam4, var uParam7, int iParam8, int iParam9, bool bParam10, int iParam11) //Position: 0x125E1 / 75233
{
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
	AI_IGNORE_ACTOR(bParam0);
	SET_ACTOR_FACTION(bParam0, 19);
	Local_961 = Global_34573;
	Local_961.f_4 = bParam0;
	*(&Local_961 + 8) = { StackVal, StackVal, vParam1 };
	*(&Local_961 + 20) = { StackVal, StackVal, vParam4 };
	Local_961.f_32 = uParam7;
	Local_961.f_52 = iParam8;
	Local_961.f_40 = iParam9;
	Local_961.f_44 = bParam10;
	Local_961.f_36 = iParam11;
	Local_961.f_48 = 1;
	Local_961.f_64 = 4294967295;
}

void Function_477() //Position: 0x12655 / 75349
{
	if (bLocal_676 < 5 && bLocal_676 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_174 + 1312)[3]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_174 + 1312)[3]))
			{
				Function_466();
				iLocal_901 = 0;
				DESTROY_VOLUME((*&Local_174 + 1312)[3]);
			}
		}
		else if (!iLocal_901)
		{
			if (Function_463())
			{
				Function_462();
				iLocal_901 = 1;
			}
		}
		else
		{
			Function_493();
		}
	}
	switch (bLocal_676)
	{
		case 0x00000000:
			Function_363(0);
			if (IS_VOLUME_VALID((*&Local_174 + 1312)[2]))
			{
				Function_491();
				DESTROY_VOLUME((*&Local_174 + 1312)[2]);
			}
			Function_490();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_356();
			bLocal_678 = Global_30693[0];
			if (iLocal_705[2] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_258(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_355(Global_34573, (*&Local_174 + 1536)[0], 1, 1, 1);
				Function_253(1, "STAGE 04 - STREAMING GOAL");
			}
			else
			{
				Function_253(2, "STAGE 04 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_488() && STREAMING_IS_WORLD_LOADED()) && (Function_348(bLocal_678) || bLocal_678 != 4294967295))
			{
				Function_487();
				Function_486();
				Function_485();
				Function_253(2, "STAGE 04 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_269(bLocal_675);
			Function_400(StackVal, StackVal, Function_269(bLocal_675), bLocal_675, Global_30633[2], Function_272(bLocal_675), 0);
			iLocal_677 = Function_399();
			Function_306(1.0f);
			Function_483();
			Function_253(6, "STAGE 04 - GOAL 01");
			break;
		
		case 0x00000006:
			Function_482();
			Function_341(1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			Function_481(bLocal_628, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
			GET_OBJECT_POSITION((*&Local_174 + 1660)[3], &vLocal_887);
			bLocal_884 = LOCATE_GRINGO_OF_TYPE("loot_corpse", &vLocal_887, 10.0f, 0);
			if (IS_GRINGO_VALID(bLocal_884))
			{
				bLocal_881 = GET_OBJECT_FROM_GRINGO(bLocal_884);
				if (IS_OBJECT_VALID(bLocal_881))
				{
					GET_OBJECT_POSITION(bLocal_881, &vLocal_887);
				}
			}
			if (!IS_OBJECT_VALID(bLocal_881))
			{
				bLocal_881 = (*&Local_174 + 1660)[3];
			}
			GET_OBJECT_POSITION((*&Local_174 + 1660)[1], &vLocal_890);
			vLocal_890 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vLocal_887, vLocal_890, StackVal) };
			VNORMALIZE(&vLocal_890);
			vLocal_893 = { StackVal, StackVal, vLocal_890 };
			VSCALE(&vLocal_890, 4.0f);
			VSCALE(&vLocal_893, 2.0f);
			vLocal_890 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_890, vLocal_887, StackVal) };
			vLocal_893 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vLocal_893, vLocal_887, StackVal) };
			vLocal_890.f_4 = (vLocal_890.y + 1.0f);
			vLocal_893.f_4 = (vLocal_893.y + 1.0f);
			Function_479(StackVal, StackVal, StackVal, StackVal, bLocal_881, vLocal_890, vLocal_893, 0.0f, 0,5f, 0.0f, 32.0f, 0);
			Function_253(105, "STAGE 04 - FADE OUT");
			break;
		
		case 0x00000069:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_312(&iLocal_690) <= 4.0f)
			{
				Function_258(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				Function_257(0);
				Function_253(106, "STAGE 06 - COMPLETE");
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_478();
				bLocal_675 = 4;
				iLocal_705[3] = 1;
				Function_253(0, "STAGE 05 - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_478() //Position: 0x129D2 / 76242
{
	Function_322(2, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	Function_217(1, 1);
	Function_242();
	Function_207(0);
	return;
}

void Function_479(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, float fParam10, bool bParam11) //Position: 0x129F1 / 76273
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_480(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
	Function_480(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 1));
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098)) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098));
	}
	if (fParam10 >= 0.0f)
	{
		fParam10 = 9999.0f;
	}
	GET_OBJECT_RELATIVE_POSITION(bParam0, vParam7, &vVar0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam1, vVar0, StackVal) };
	VNORMALIZE(&vVar3);
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), vParam1);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), vVar3, 1);
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 1), vParam4);
	SET_CAMERASHOT_TARGET_OBJECT(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 1), bParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 1), vParam7, 0.0f, 0.0f, 0.0f, 0);
	Global_63098.f_4 = StackVal + 1;
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(StackVal, Global_63098, 0, 1,401298E-45f, fParam10, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, Global_63098, 1);
	Global_63098.f_8 = 1;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(Global_63098))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Global_63098);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098), bParam11))
	{
		PLAY_CUTSCENEOBJECT(Global_63098, bParam11, Global_63098.f_12, Global_63098.f_16, Global_63098.f_20, Global_63098.f_24, Global_63098.f_28, Global_63098.f_32, Global_63098.f_36, Global_63098.f_40);
	}
}

void Function_480(bool bParam0) //Position: 0x12B26 / 76582
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

void Function_481(bool bParam0, float fParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) //Position: 0x12B37 / 76599
{
	Function_217(0, 1);
	Global_63098 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
	Global_63098.f_12 = uParam3;
	Global_63098.f_16 = uParam4;
	Global_63098.f_20 = uParam5;
	Global_63098.f_24 = uParam6;
	Global_63098.f_28 = uParam7;
	Global_63098.f_32 = uParam8;
	Global_63098.f_36 = uParam9;
	Global_63098.f_40 = uParam10;
	Global_63098.f_44 = uParam11;
	(&Global_63098 + 44)->f_4 = uParam12;
	(&Global_63098 + 44)->f_8 = uParam13;
	INIT_CAMERA_FROM_GAME_CAMERA(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098));
	if (bParam2)
	{
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 1));
	}
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), fParam1);
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 1), fParam1);
	SET_CAMERA_FOV(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098), fParam1);
	Global_63098.f_4 = 4294967295;
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, Global_63098, 0);
	Global_63098.f_8 = 0;
	*(&Global_63098 + 56) = { 0.0f, 0.0f, 0.0f };
	Global_63098.f_68 = 0;
}

void Function_482() //Position: 0x12C10 / 76816
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_Follow2Cantina", "Gun05_Follow2Cantina", false, 4, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_483() //Position: 0x12C61 / 76897
{
	Function_229(&iLocal_899, 3, 0, 4294967295, 4294967295);
	Function_398(1);
	Function_397();
	GET_OBJECT_POSITION((*&Local_174 + 1660)[3], &vLocal_887);
	CLEAR_AREA_OF_GRASS(vLocal_887, 5.0f);
	Function_484();
	Function_239();
	Function_304();
	Function_248();
	Function_238();
	Function_237();
	Function_328();
	return;
}

void Function_484() //Position: 0x12CA6 / 76966
{
	iLocal_715 = 0;
	Function_330(&(Local_756[217]));
	return;
}

void Function_485() //Position: 0x12CB9 / 76985
{
	Function_355(bLocal_680, (*&Local_174 + 1536)[1], 1, 1, 1);
	Function_325();
	Function_355(bLocal_684, (*&Local_174 + 1496)[3], 1, 1, 1);
	Function_355(bLocal_686, (*&Local_174 + 1496)[4], 1, 1, 1);
	Function_355((*&Local_174 + 1148)[02], (*&Local_174 + 1496)[5], 1, 1, 1);
	Function_355((*&Local_174 + 1160)[02], (*&Local_174 + 1496)[6], 1, 1, 1);
	Function_355((*&Local_174 + 1160)[12], (*&Local_174 + 1496)[7], 1, 1, 1);
	return;
}

void Function_486() //Position: 0x12D37 / 77111
{
	Function_425(1);
	Function_424();
	Function_422(0);
	Function_420();
	Function_418();
	Function_416();
	Function_415();
	Function_413();
	Function_411();
	return;
}

void Function_487() //Position: 0x12D5A / 77146
{
	return;
}

bool Function_488() //Position: 0x12D60 / 77152
{
	if (Function_489() && Function_350(&bLocal_654))
	{
		return 1;
	}
	return 0;
}

int Function_489() //Position: 0x12D76 / 77174
{
	Function_430(&Local_174 + 500, 408, 2, 0);
	Function_430(&Local_174 + 500, 662, 2, 0);
	Function_430(&Local_174 + 500, 410, 2, 0);
	Function_430(&Local_174 + 500, 412, 2, 0);
	Function_430(&Local_174 + 500, 409, 2, 0);
	Function_430(&Local_174 + 500, 750, 2, 0);
	Function_430(&Local_174 + 500, 746, 2, 0);
	Function_430(&Local_174 + 500, 748, 2, 0);
	Function_430(&Local_174 + 500, 248, 2, 0);
	Function_430(&Local_174 + 500, 664, 2, 0);
	Function_430(&Local_174 + 500, 255, 2, 0);
	Function_430(&Local_174 + 500, 276, 2, 0);
	Function_430(&Local_174 + 500, 264, 2, 0);
	Function_430(&Local_174 + 500, 290, 2, 0);
	Function_430(&Local_174 + 500, 247, 2, 0);
	Function_430(&Local_174 + 500, 685, 2, 0);
	if (Function_350(&Local_174 + 500))
	{
		return 1;
	}
	return 0;
}

void Function_490() //Position: 0x12E67 / 77415
{
	Function_360(bLocal_680);
	Function_360(bLocal_681);
	return;
}

void Function_491() //Position: 0x12E79 / 77433
{
	Function_489();
	Function_492();
	return;
}

void Function_492() //Position: 0x12E86 / 77446
{
	Function_170(&Local_174 + 304);
	return;
}

int Function_493() //Position: 0x12E94 / 77460
{
	GET_OBJECT_POSITION((*&Local_174 + 1552)[0], &vLocal_887);
	if (Function_440(StackVal, StackVal, "$/cutscene/GUN_05_CS04/GUN_05_CS04", &uLocal_900, vLocal_887, 0, 4000.0f, 10000.0f, 2, 1, 1, 2, 1, 1))
	{
		return 1;
	}
	return 0;
}

void Function_494() //Position: 0x12EF0 / 77552
{
	if (bLocal_676 < 5 && bLocal_676 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_174 + 1312)[2]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_174 + 1312)[2]))
			{
				Function_491();
				iLocal_901 = 0;
				DESTROY_VOLUME((*&Local_174 + 1312)[2]);
			}
		}
		else if (!iLocal_901)
		{
			if (Function_488())
			{
				Function_487();
				iLocal_901 = 1;
			}
		}
		if (!Function_507())
		{
			Function_253(106, "STAGE 03 - COMPLETE");
		}
	}
	switch (bLocal_676)
	{
		case 0x00000000:
			Function_363(0);
			if (IS_VOLUME_VALID((*&Local_174 + 1312)[1]))
			{
				Function_505();
				DESTROY_VOLUME((*&Local_174 + 1312)[1]);
			}
			Function_504();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_356();
			bLocal_678 = Global_30693[0];
			if (iLocal_705[1] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_258(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_355(Global_34573, (*&Local_174 + 1496)[0], 1, 1, 1);
				Function_253(1, "STAGE 03 - STREAMING GOAL");
			}
			else
			{
				Function_253(2, "STAGE 03 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_502() && STREAMING_IS_WORLD_LOADED()) && (Function_348(bLocal_678) || bLocal_678 != 4294967295))
			{
				Function_501();
				Function_500();
				Function_499();
				Function_253(2, "STAGE 03 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_269(bLocal_675);
			Function_400(StackVal, StackVal, Function_269(bLocal_675), bLocal_675, Global_30633[2], Function_272(bLocal_675), 0);
			iLocal_677 = Function_399();
			Function_497();
			Function_253(6, "STAGE 03 - OBJ_01-OBJ_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_378("Gun05_obj03", 7,5f, 1, 2, 0, 0, 0);
				Function_496(1);
				Function_194();
				Function_253(13, "STAGE 03 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_495();
				Function_257(0);
				bLocal_675 = 3;
				iLocal_705[2] = 1;
				Function_253(0, "STAGE 04 - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_495() //Position: 0x1315F / 78175
{
	Function_243();
	Function_496(0);
	return;
}

void Function_496(bool bParam0) //Position: 0x1316C / 78188
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_682)))
		{
			ADD_BLIP_FOR_ACTOR(bLocal_682, 322, 0, 2, 0);
			SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_682), GET_ACTOR_ENUM_STRING(bLocal_682));
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_682)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_682));
	}
	return;
}

void Function_497() //Position: 0x131B8 / 78264
{
	iLocal_899 = 4294967295;
	AUDIO_MUSIC_SET_MOOD("GUN_05_SHOOTOUT", 0, 4294967295, 4294967295);
	Function_398(1);
	Function_397();
	GET_OBJECT_POSITION((*&Local_174 + 1660)[3], &vLocal_887);
	CLEAR_AREA_OF_GRASS(vLocal_887, 5.0f);
	Function_498();
	_ADD_AMMO_OF_TYPE(Global_34573, 7, 6.0f, 0, 0);
	Function_454(bLocal_680);
	Function_239();
	Function_304();
	Function_252();
	Function_248();
	Function_453(bLocal_688);
	Function_452();
	Function_238();
	Function_237();
	Function_328();
	return;
}

void Function_498() //Position: 0x1322B / 78379
{
	iLocal_715 = 1;
	Function_330(&(Local_756[117]));
	Function_390(&(Local_756[217]), bLocal_688, "Gun05_mullergang", 0, 0x5f5e100, 1);
	return;
}

void Function_499() //Position: 0x13265 / 78437
{
	Function_355(bLocal_680, (*&Local_174 + 1496)[1], 1, 1, 1);
	Function_325();
	Function_355(bLocal_682, (*&Local_174 + 1496)[2], 1, 1, 1);
	Function_355(bLocal_684, (*&Local_174 + 1496)[3], 1, 1, 1);
	Function_355(bLocal_686, (*&Local_174 + 1496)[4], 1, 1, 1);
	Function_355((*&Local_174 + 1148)[02], (*&Local_174 + 1496)[5], 1, 1, 1);
	Function_355((*&Local_174 + 1160)[02], (*&Local_174 + 1496)[6], 1, 1, 1);
	Function_355((*&Local_174 + 1160)[12], (*&Local_174 + 1496)[7], 1, 1, 1);
	return;
}

void Function_500() //Position: 0x132F4 / 78580
{
	Function_425(0);
	Function_424();
	Function_422(0);
	Function_420();
	Function_418();
	Function_416();
	Function_415();
	Function_413();
	Function_411();
	return;
}

void Function_501() //Position: 0x13317 / 78615
{
	return;
}

bool Function_502() //Position: 0x1331D / 78621
{
	if (Function_503() && Function_350(&bLocal_647))
	{
		return 1;
	}
	return 0;
}

int Function_503() //Position: 0x13333 / 78643
{
	Function_430(&Local_174 + 304, 408, 2, 0);
	Function_430(&Local_174 + 304, 662, 2, 0);
	Function_430(&Local_174 + 304, 410, 2, 0);
	Function_430(&Local_174 + 304, 412, 2, 0);
	Function_430(&Local_174 + 304, 409, 2, 0);
	Function_430(&Local_174 + 304, 750, 2, 0);
	Function_430(&Local_174 + 304, 746, 2, 0);
	Function_430(&Local_174 + 304, 748, 2, 0);
	Function_430(&Local_174 + 304, 248, 2, 0);
	Function_430(&Local_174 + 304, 664, 2, 0);
	Function_430(&Local_174 + 304, 255, 2, 0);
	Function_430(&Local_174 + 304, 276, 2, 0);
	Function_430(&Local_174 + 304, 264, 2, 0);
	Function_430(&Local_174 + 304, 290, 2, 0);
	Function_430(&Local_174 + 304, 247, 2, 0);
	Function_430(&Local_174 + 304, 685, 2, 0);
	if (Function_350(&Local_174 + 304))
	{
		return 1;
	}
	return 0;
}

void Function_504() //Position: 0x13424 / 78884
{
	Function_360(bLocal_680);
	Function_360(bLocal_681);
	return;
}

void Function_505() //Position: 0x13436 / 78902
{
	Function_503();
	Function_506();
	return;
}

void Function_506() //Position: 0x13443 / 78915
{
	Function_170(&Local_174 + 108);
	return;
}

bool Function_507() //Position: 0x13450 / 78928
{
	switch (iLocal_1010)
	{
		case 0x00000000:
			iLocal_1010 = 1;
			iLocal_960 = 99;
			return 1;
			break;
		
		case 0x00000001:
			if (!Function_469())
			{
				iLocal_1010 = 2;
				return 1;
			}
			break;
		
		case 0x00000002:
			return 0;
			break;
	}
	return 1;
}

void Function_508() //Position: 0x13494 / 78996
{
	if (bLocal_676 < 5 && bLocal_676 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_174 + 1312)[1]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_174 + 1312)[1]))
			{
				Function_505();
				iLocal_901 = 0;
				DESTROY_VOLUME((*&Local_174 + 1312)[1]);
			}
		}
		else if (!iLocal_901)
		{
			if (Function_502())
			{
				Function_501();
				iLocal_901 = 1;
			}
		}
		if (!Function_535())
		{
			Function_253(106, "STAGE 02 - COMPLETE");
		}
	}
	switch (bLocal_676)
	{
		case 0x00000000:
			Function_363(0);
			if (IS_VOLUME_VALID((*&Local_174 + 1312)[0]))
			{
				Function_533();
				DESTROY_VOLUME((*&Local_174 + 1312)[0]);
			}
			Function_465();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			Function_356();
			bLocal_678 = Global_30693[0];
			Function_227();
			if (iLocal_705[0] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_258(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_180(1, 0, 1);
				Function_355(Global_34573, (*&Local_174 + 1448)[0], 1, 1, 1);
				Function_253(1, "STAGE 02 - STREAMING GOAL");
			}
			else
			{
				Function_253(2, "STAGE 02 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_531() && STREAMING_IS_WORLD_LOADED()) && (Function_348(bLocal_678) || bLocal_678 != 4294967295))
			{
				Function_530();
				Function_529();
				Function_253(2, "STAGE 02 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			if (Function_459(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_629, bLocal_675))
			{
				Function_528();
				Function_253(3, "STAGE 02 - CUTSCENE GOAL");
			}
			else
			{
				Function_527();
				Function_331();
				Function_253(4, "STAGE 02 - POST-CUTSCENE GOAL");
			}
			Function_269(bLocal_675);
			Function_400(StackVal, StackVal, Function_269(bLocal_675), bLocal_675, Global_30633[2], Function_272(bLocal_675), 0);
			iLocal_677 = Function_399();
			break;
		
		case 0x00000003:
			if (Function_307("$/cutscene/GUN_05_B/GUN_05_B", &Local_668, &Local_629, &bLocal_675, 57797, 57632, 57625, 56239, 55979, 73310, 1, 2, 1, 2, 2, 0, 1))
			{
				Function_526();
				Function_253(4, "STAGE 02 - POST-CUTSCENE GOAL");
			}
			break;
		
		case 0x00000004:
			Function_306(1.0f);
			Function_524();
			Function_257(1);
			Function_253(6, "STAGE 02 - OBJ_01-DLG_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_226();
				Function_523();
				Function_194();
				Function_253(7, "STAGE 02 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_378("Gun05_obj02_1", 4.0f, 1, 2, 0, 0, 0);
				Function_207(1);
				Function_253(8, "STAGE 02 - OBJ_01-DLG_02");
			}
			break;
		
		case 0x00000008:
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_522();
				Function_253(13, "STAGE 02 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (!Function_521())
			{
				Function_516();
			}
			if (Function_514(&bLocal_693, 60.0f, 200.0f, bLocal_680, "Gunslinger_return", "Gunslinger_abandoned", &bLocal_713, 1, 0, 0, 325, 1))
			{
				Function_207(1);
				Function_253(14, "STAGE 02 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_514(&bLocal_693, 60.0f, 200.0f, bLocal_680, "Gunslinger_return", "Gunslinger_abandoned", &bLocal_713, 1, 0, 0, 325, 1))
			{
				Function_207(1);
				Function_253(13, "STAGE 02 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_226();
				Function_513();
				Function_207(0);
				Function_511(0, Global_34573, 2,5f, 1);
				Function_194();
				Function_253(16, "STAGE 02 - OBJ_02-OBJ_01");
			}
			break;
		
		case 0x00000010:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_378("Gun05_obj02_2", 7,5f, 1, 2, 0, 0, 0);
				Function_253(23, "STAGE 02 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000017:
			if (!Function_521())
			{
				Function_516();
			}
			if (Function_510(&bLocal_693, (*&Local_174 + 1388)[0], (*&Local_174 + 1388)[1], "Gun05_obj_return_duel", "Gun05_too_far_duel", &bLocal_713, 1, 0, 0, 330, 1))
			{
				Function_212();
				Function_370(1);
				Function_253(24, "STAGE 02 - OBJ_02-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000018:
			if (!Function_510(&bLocal_693, (*&Local_174 + 1388)[0], (*&Local_174 + 1388)[1], "Gun05_obj_return_duel", "Gun05_too_far_duel", &bLocal_713, 1, 0, 0, 330, 1))
			{
				Function_211();
				Function_511(0, Global_34573, 2,5f, 1);
				Function_253(23, "STAGE 02 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_509();
				Function_257(0);
				bLocal_675 = 2;
				iLocal_705[1] = 1;
				Function_253(0, "STAGE 03 - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_509() //Position: 0x13B1D / 80669
{
	Function_244();
	Function_212();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_680);
	return;
}

bool Function_510(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x13B2F / 80687
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_VOLUME_VALID(bParam1) || !IS_VOLUME_VALID(bParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam2))
	{
		Function_263(bParam4);
		*iParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam1))
	{
		if (!Function_377(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_378(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
				Function_376(64);
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_375(bParam7, 0, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_375(bParam8, 0, 4294967295, 0, bParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				ADD_BLIP_FOR_OBJECT(bParam1, bParam9, 0f, 2, 0);
				DECOR_SET_BOOL(bParam1, "MVODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_377(64))
	{
		Function_374(64);
		if (!Function_373())
		{
			if (bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_372();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8))) && DECOR_CHECK_EXIST(bParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam1));
				DECOR_REMOVE(bParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_375(bParam7, 1, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_375(bParam8, 1, 4294967295, 0, bParam1);
			}
		}
	}
	return 0;
}

void Function_511(int iParam0, var uParam1, float fParam2, int iParam3) //Position: 0x13CA3 / 81059
{
	Function_212();
	GET_OBJECT_POSITION((*&Local_174 + 1700)[iParam0], &vLocal_887);
	GET_OBJECT_ORIENTATION((*&Local_174 + 1700)[iParam0], &vLocal_893);
	bLocal_883 = Function_512(StackVal, StackVal, StackVal, StackVal, bLocal_628, "GatewayDest", vLocal_887, vLocal_893, uParam1, fParam2, 1, 3, 330, iParam3, 1, 3212836864, 3212836864, 1);
	if (!IS_OBJECT_VALID(bLocal_883))
	{
		LOG_ERROR("Failed to create destination gateway!");
	}
}

bool Function_512(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, var uParam9, int iParam10, int iParam11, bool bParam12, int iParam13, var uParam14, float fParam15, float fParam16, var uParam17) //Position: 0x13D3B / 81211
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, iParam8, iParam10, iParam13, 0, uParam14, uParam17);
	if (IS_OBJECT_VALID(bVar3))
	{
		strcpy(&cVar4, bParam1, 32);
		if (IS_STRING_VALID(bParam1))
		{
			stradd(&cVar4, "restrict", 32);
		}
		bVar12 = CREATE_VOLUME_IN_LAYOUT(bParam0, &cVar4, 2, vParam2, vParam5, 5.0f, 5.0f, 5.0f);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		if (bParam12 != 4294967295)
		{
			bVar13 = ADD_BLIP_FOR_OBJECT(bVar3, bParam12, 0.0f, 2, 0);
		}
		if (fParam15 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(bVar13, fParam15);
		}
		if (fParam16 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(bVar13, fParam16);
		}
		DECOR_SET_OBJECT(bVar3, "volrestrict", bVar12);
	}
	return bVar3;
}

void Function_513() //Position: 0x13E06 / 81414
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerWaitsDuel", "Gun05_MullerWaitsDuel", false, 1, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_514(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x13E59 / 81497
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_515(Global_34573, bParam3, iParam2))
	{
		Function_263(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_515(Global_34573, bParam3, bParam1))
	{
		if (!Function_377(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_378(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_376(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_375(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_375(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_377(2))
	{
		Function_374(2);
		if (!Function_373())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_372();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_203(bParam3);
				Function_209(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_375(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_375(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

bool Function_515(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13FED / 81901
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

int Function_516() //Position: 0x140FF / 82175
{
	if (Function_520(GET_WEAPON_IN_HAND(Global_34573)))
	{
		bLocal_886 = GET_ACTOR_UNDER_RETICLE(Global_34573, 1);
		if (IS_ACTOR_ALIVE(bLocal_886))
		{
			if (!IS_ACTOR_ANIMAL(bLocal_886))
			{
				if (!Function_314(&iLocal_699))
				{
					Function_254(&iLocal_699);
				}
				else if (bLocal_903 != bLocal_886)
				{
					Function_254(&iLocal_699);
				}
				else if (Function_312(&iLocal_699) <= 1.0f)
				{
					if (bLocal_903 == bLocal_680)
					{
						if (MEMORY_GET_IS_VISIBLE(bLocal_680, Global_34573))
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_519();
							}
							else
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_680, "Gun05_TargetsRicks", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
							}
							bLocal_902 = true;
						}
					}
					else if (bLocal_903 == bLocal_682)
					{
						if (MEMORY_GET_IS_VISIBLE(bLocal_680, bLocal_682))
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_518();
							}
							else
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_682, "Gun05_GunOnMuller", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
							}
							bLocal_902 = true;
						}
					}
					else if (MEMORY_GET_IS_VISIBLE(bLocal_680, bLocal_903))
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_517();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_680, "Gun05_GunOnAmbPoker", "", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
						}
						bLocal_902 = true;
					}
					if (bLocal_902)
					{
						Function_438(&iLocal_699);
						return 1;
					}
				}
				bLocal_903 = bLocal_886;
				return 0;
			}
		}
	}
	bLocal_903 = "";
	Function_438(&iLocal_699);
	return 0;
}

void Function_517() //Position: 0x14270 / 82544
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_GunOnAmbPoker", "Gun05_GunOnAmbPoker", false, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_518() //Position: 0x142BF / 82623
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_GunOnMuller", "Gun05_GunOnMuller", false, 1, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_519() //Position: 0x1430A / 82698
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_TargetsRicks", "Gun05_TargetsRicks", false, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

bool Function_520(bool bParam0) //Position: 0x14357 / 82775
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	bParam0 = UNK_0xDB679ED9(bParam0);
	switch (bParam0)
	{
		case 0x00000027:
		case 0x00000029:
		case 0x00000028:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
			return 1;
			break;
	}
	return 0;
}

bool Function_521() //Position: 0x1439D / 82845
{
	if (bLocal_902)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !IS_ANY_SPEECH_PLAYING(bLocal_680))
		{
			bLocal_902 = false;
		}
		return 1;
	}
	return 0;
}

void Function_522() //Position: 0x143BF / 82879
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_DuelTutorialBant_v1_AA", "Gun05_DuelTutorialBant_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun05_DuelTutorialBant_v1_AB", "Gun05_DuelTutorialBant_v1_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun05_DuelTutorialBant_v1_AC", "Gun05_DuelTutorialBant_v1_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Gun05_DuelTutorialBant_v1_AD", "Gun05_DuelTutorialBant_v1_AD", false, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_523() //Position: 0x144F5 / 83189
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_WalkWitRick", "Gun05_WalkWitRick", false, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_524() //Position: 0x14540 / 83264
{
	Function_229(&iLocal_899, 3, 0, 4294967295, 4294967295);
	Function_525();
	GET_OBJECT_POSITION((*&Local_174 + 1660)[3], &vLocal_887);
	CLEAR_AREA_OF_GRASS(vLocal_887, 5.0f);
	Function_328();
	return;
}

void Function_525() //Position: 0x1456F / 83311
{
	iLocal_715 = 0;
	Function_390(&(Local_756[117]), bLocal_682, "Gun05_muller", 0, 0x5f5e100, 1);
	Function_390(&(Local_756[217]), bLocal_688, "Gun05_mullergang", 0, 0x5f5e100, 1);
	return;
}

void Function_526() //Position: 0x145C3 / 83395
{
	Function_206(0);
	Function_304();
	return;
}

void Function_527() //Position: 0x145D0 / 83408
{
	Function_227();
	Function_424();
	Function_398(1);
	Function_415();
	Function_397();
	return;
}

void Function_528() //Position: 0x145E6 / 83430
{
	Function_229(&iLocal_899, 0, 0, 4294967295, 4294967295);
	Function_424();
	Function_398(1);
	Function_415();
	Function_397();
	Function_304();
	return;
}

void Function_529() //Position: 0x14606 / 83462
{
	Function_425(0);
	Function_422(0);
	Function_420();
	Function_418();
	Function_416();
	Function_413();
	Function_411();
	return;
}

void Function_530() //Position: 0x14623 / 83491
{
	Function_416();
	Function_411();
	return;
}

bool Function_531() //Position: 0x1462F / 83503
{
	if ((Function_532() && Function_350(&bLocal_640)) && Function_350(&bLocal_647))
	{
		return 1;
	}
	return 0;
}

int Function_532() //Position: 0x1464C / 83532
{
	Function_430(&Local_174 + 108, 408, 2, 0);
	Function_430(&Local_174 + 108, 662, 2, 0);
	Function_430(&Local_174 + 108, 410, 2, 0);
	Function_430(&Local_174 + 108, 412, 2, 0);
	Function_430(&Local_174 + 108, 409, 2, 0);
	Function_430(&Local_174 + 108, 750, 2, 0);
	Function_430(&Local_174 + 108, 746, 2, 0);
	Function_430(&Local_174 + 108, 748, 2, 0);
	Function_430(&Local_174 + 108, 248, 2, 0);
	Function_430(&Local_174 + 108, 664, 2, 0);
	Function_430(&Local_174 + 108, 255, 2, 0);
	Function_430(&Local_174 + 108, 276, 2, 0);
	Function_430(&Local_174 + 108, 264, 2, 0);
	Function_430(&Local_174 + 108, 290, 2, 0);
	Function_430(&Local_174 + 108, 247, 2, 0);
	Function_430(&Local_174 + 108, 685, 2, 0);
	if (Function_350(&Local_174 + 108))
	{
		return 1;
	}
	return 0;
}

void Function_533() //Position: 0x1472C / 83756
{
	Function_532();
	Function_534();
	return;
}

void Function_534() //Position: 0x14739 / 83769
{
	Function_170(&Local_174 + 32);
	return;
}

bool Function_535() //Position: 0x14746 / 83782
{
	switch (iLocal_1009)
	{
		case 0x00000000:
			iLocal_1009 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_IN_VOLUME(bLocal_682, (*&Local_174 + 1388)[3]) && (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_174 + 1388)[5]) || IS_ACTOR_IN_VOLUME(bLocal_680, (*&Local_174 + 1388)[5])))
			{
				Function_253(15, "STAGE 02 - OBJ_02-DLG_01");
				iLocal_1009 = 2;
				return 1;
			}
			break;
		
		case 0x00000002:
			if (IS_OBJECT_VALID(bLocal_883))
			{
				if (GATEWAY_UPDATE(bLocal_883))
				{
					Function_212();
					iLocal_1009 = 3;
					return 1;
				}
			}
			break;
		
		case 0x00000003:
			return 0;
			break;
	}
	return 1;
}

void Function_536() //Position: 0x147F1 / 83953
{
	if (bLocal_676 < 5 && bLocal_676 > 105)
	{
		if (IS_VOLUME_VALID((*&Local_174 + 1312)[0]))
		{
			if ((bLocal_676 < 6 && Function_312(&iLocal_690) <= 10.0f) && IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_174 + 1312)[0]))
			{
				Function_533();
				iLocal_901 = 0;
				DESTROY_VOLUME((*&Local_174 + 1312)[0]);
			}
		}
		else if (!iLocal_901)
		{
			if (Function_531())
			{
				Function_530();
				iLocal_901 = 1;
			}
		}
		else
		{
			Function_607();
		}
		if (!Function_562())
		{
			Function_253(106, "STAGE 01 - COMPLETE");
		}
	}
	switch (bLocal_676)
	{
		case 0x00000000:
			Function_363(0);
			if (!iLocal_1005)
			{
				Function_557();
				iLocal_1005 = 1;
			}
			Function_556();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(80);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_356();
			bLocal_678 = Global_30693[0];
			Function_555();
			Function_253(1, "STAGE 01 - STREAMING GOAL");
			break;
		
		case 0x00000001:
			if ((Function_550() && STREAMING_IS_WORLD_LOADED()) && (Function_348(bLocal_678) || bLocal_678 != 4294967295))
			{
				Function_549();
				Function_548();
				Function_253(2, "STAGE 01 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			if (Function_545() && Function_542(1))
			{
				Function_269(bLocal_675);
				Function_400(StackVal, StackVal, Function_269(bLocal_675), bLocal_675, Global_30633[2], Function_272(bLocal_675), 0);
				iLocal_677 = Function_399();
				Function_540();
				Function_253(5, "STAGE 01 - FADE IN");
			}
			break;
		
		case 0x00000005:
			Function_538();
			Function_257(1);
			Function_253(6, "STAGE 01 - OBJ_01_OBJ_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_378("Gun05_obj01", 7,5f, 1, 2, 0, 0, 0);
				Function_194();
				Function_253(13, "STAGE 01 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_537();
				Function_257(0);
				bLocal_675 = true;
				iLocal_705[0] = 1;
				Function_253(0, "STAGE 02 - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_537() //Position: 0x14A49 / 84553
{
	Function_221();
	iLocal_1006 = 1;
	Function_245();
	SET_AUTO_CONVERSATION_LOOK(Global_34573, 1);
	SET_AUTO_CONVERSATION_LOOK(bLocal_680, 1);
	SET_AUTO_CONVERSATION_LOOK(bLocal_682, 1);
	SET_AUTO_CONVERSATION_LOOK(bLocal_684, 1);
	SET_AUTO_CONVERSATION_LOOK(bLocal_686, 1);
	return;
}

void Function_538() //Position: 0x14A7C / 84604
{
	Function_229(&iLocal_899, 0, 0, 4294967295, 4294967295);
	Function_539();
	SET_AUTO_CONVERSATION_LOOK(Global_34573, 0);
	SET_AUTO_CONVERSATION_LOOK(bLocal_680, 0);
	SET_AUTO_CONVERSATION_LOOK(bLocal_682, 0);
	SET_AUTO_CONVERSATION_LOOK(bLocal_684, 0);
	SET_AUTO_CONVERSATION_LOOK(bLocal_686, 0);
	return;
}

void Function_539() //Position: 0x14AB2 / 84658
{
	iLocal_715 = 0;
	return;
}

void Function_540() //Position: 0x14ABC / 84668
{
	Function_541(bLocal_993, 1);
	Function_541(bLocal_994, 1);
	Function_113(100, 0);
	Function_304();
	return;
}

void Function_541(bool bParam0, bool bParam1) //Position: 0x14ADA / 84698
{
	bool bVar0;
	bool bVar1;
	
	if (IS_GRINGO_VALID(bParam0))
	{
		bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
		bLocal_896 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
		while (bLocal_896 >= 4294967295)
		{
			bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bLocal_896, bVar0);
			bLocal_882 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(bVar1, bParam0);
			if (IS_PHYSINST_VALID(bLocal_882))
			{
				if (bParam1)
				{
					SHOW_PHYSINST(bLocal_882);
				}
				else
				{
					HIDE_PHYSINST(bLocal_882);
				}
			}
			bLocal_896 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, bLocal_896 + 1);
		}
	}
	return;
}

var Function_542(int iParam0) //Position: 0x14B6A / 84842
{
	int iVar0;
	
	iVar0 = 1;
	if (!Function_543((*&Local_174 + 1180)[02], Local_174.f_1808, &bLocal_993, iParam0))
	{
		iVar0 = 0;
	}
	if (!Function_543((*&Local_174 + 1180)[12], Local_174.f_1812, &bLocal_994, iParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool Function_543(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x14BAD / 84909
{
	if (IS_GRINGO_VALID(*bParam2))
	{
		if (GET_CURRENT_GRINGO(bParam0) == *bParam2)
		{
			return 1;
		}
		if (Function_544())
		{
			bLocal_882 = GET_PHYSINST_FROM_OBJECT(bParam1);
			if (IS_PHYSINST_VALID(bLocal_882))
			{
				bLocal_881 = GET_OBJECT_FROM_GRINGO(*bParam2);
				if (IS_OBJECT_VALID(bLocal_881))
				{
					SET_PROP_FIXED(bLocal_882, 0);
					SET_OBJECT_COLLIDE_WITH_MOVABLES(bParam1, 0);
					SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, bParam1, false);
					SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, bLocal_992, false);
					SET_OBJECT_COLLIDE_WITH_OBJECT(bParam1, bLocal_992, false);
					SNAP_ACTOR_TO_GRINGO(bParam0, bLocal_881, "UseCase1", true, 0, 0);
					TASK_CLEAR(bParam0);
					TASK_PRIORITY_SET(bParam0, true);
					TASK_USE_GRINGO(bParam0, *bParam2, "UseCase1", 4294967295, 1);
				}
			}
		}
	}
	else
	{
		Function_75();
		Function_75();
		bLocal_881 = CREATE_GRINGO_ON_OBJECT(bParam1, Function_53(), "mex_drunk_sittable", Function_75(), Function_75());
		if (IS_OBJECT_VALID(bLocal_881))
		{
			DECOR_SET_BOOL(bLocal_881, "ForceAllowSun", true);
			*bParam2 = GET_GRINGO_FROM_OBJECT(bLocal_881);
			Function_541(*bParam2, uParam3);
		}
	}
	return 0;
}

bool Function_544() //Position: 0x14CBC / 85180
{
	if (!IS_PHYSINST_VALID(bLocal_992))
	{
		if (!IS_OBJECT_VALID((*&Local_174 + 1660)[4]))
		{
			vLocal_887 = { -2701,105f, 31,15482f, 4274,685f };
		}
		else
		{
			GET_OBJECT_POSITION((*&Local_174 + 1660)[4], &vLocal_887);
		}
		bLocal_992 = LOCATE_PHYSINST_OF_TYPE(vLocal_887, 0,5f, "p_gen_table34x", 1);
		if (!IS_PHYSINST_VALID(bLocal_992))
		{
			return 0;
		}
	}
	return 1;
}

var Function_545() //Position: 0x14D30 / 85296
{
	int iVar0;
	
	iVar0 = 1;
	if (!Function_546(bLocal_680, (*&Local_174 + 1716)[0]))
	{
		iVar0 = 0;
	}
	if (!Function_546(bLocal_682, (*&Local_174 + 1716)[2]))
	{
		iVar0 = 0;
	}
	if (!Function_546(bLocal_684, (*&Local_174 + 1716)[3]))
	{
		iVar0 = 0;
	}
	if (!Function_546(bLocal_686, (*&Local_174 + 1716)[1]))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool Function_546(bool bParam0, bool bParam1) //Position: 0x14D8F / 85391
{
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 1;
	}
	GET_OBJECT_POSITION(bParam1, &vLocal_887);
	bLocal_884 = LOCATE_GRINGO_OF_TYPE("fake_poker", &vLocal_887, 0,5f, 0);
	if (IS_GRINGO_VALID(bLocal_884))
	{
		Function_547(bLocal_884);
		SNAP_ACTOR_TO_GRINGO(bParam0, GET_OBJECT_FROM_GRINGO(bLocal_884), "UseCase1", true, 0, 0);
		TASK_CLEAR(bParam0);
		TASK_PRIORITY_SET(bParam0, true);
		TASK_USE_GRINGO(bParam0, bLocal_884, "UseCase1", 4294967295, 1);
	}
	return 0;
}

void Function_547(bool bParam0) //Position: 0x14E14 / 85524
{
	bool bVar0;
	bool bVar1;
	
	if (IS_GRINGO_VALID(bParam0))
	{
		bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
		bLocal_896 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
		while (bLocal_896 >= 4294967295)
		{
			bVar1 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bLocal_896, bVar0);
			bLocal_882 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(bVar1, bParam0);
			if (IS_PHYSINST_VALID(bLocal_882))
			{
				HIDE_PHYSINST(bLocal_882);
			}
			bLocal_896 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, bLocal_896 + 1);
		}
	}
	return;
}

void Function_548() //Position: 0x14E96 / 85654
{
	Function_418();
	return;
}

void Function_549() //Position: 0x14E9F / 85663
{
	Function_425(0);
	Function_422(0);
	Function_420();
	Function_413();
	return;
}

bool Function_550() //Position: 0x14EB3 / 85683
{
	if ((Function_554() && Function_350(&bLocal_640)) && Function_551())
	{
		return 1;
	}
	return 0;
}

int Function_551() //Position: 0x14ECD / 85709
{
	if (Function_553() && Function_552())
	{
		return 1;
	}
	return 0;
}

int Function_552() //Position: 0x14EE3 / 85731
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	
	if (!HAS_STRING_TABLE_LOADED("nminigames"))
	{
		return 0;
	}
	if (!HAS_ACTION_TREE_LOADED("custom/sit_poker"))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID("$/fragments/p_crd_01x", 0)))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID("$/fragments/p_gen_cards02x", 0)))
	{
		return 0;
	}
	if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID("$/fragments/p_gen_dealerButton01x", 0)))
	{
		return 0;
	}
	if (!REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\BLACK_JACK"))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= 13)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Var2 = bVar0;
			Var2.f_4 = iVar1;
			cVar4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_223(&Var2, 0) };
			if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID(&cVar4, 0)))
			{
				return 0;
			}
			iVar1++;
		}
		bVar0++;
	}
	bVar12 = GET_ASSET_ID("$/fragments/p_crd_chipRedPoker01x", 0);
	if (!STREAMING_IS_PROP_LOADED(bVar12))
	{
		return 0;
	}
	bVar13 = GET_ASSET_ID("$/fragments/p_crd_chipGreenPoker01x", 0);
	if (!STREAMING_IS_PROP_LOADED(bVar12))
	{
		return 0;
	}
	bVar14 = GET_ASSET_ID("$/fragments/p_crd_chipBluePoker01x", 0);
	if (!STREAMING_IS_PROP_LOADED(bVar12))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < 25)
	{
		strcpy(&cVar4, Function_222(bVar0), 32);
		if (!STREAMING_IS_PROP_LOADED(GET_ASSET_ID(&cVar4, 0)))
		{
			return 0;
		}
		bVar0++;
	}
	if (!HAS_ACTION_TREE_LOADED("custom/fake_poker"))
	{
		return 0;
	}
	if (!STREAMING_IS_GRINGO_LOADED(GET_ASSET_ID("fake_poker", 1)))
	{
		return 0;
	}
	return 1;
}

int Function_553() //Position: 0x15127 / 86311
{
	if (!HAS_ANIM_SET_LOADED("nsit_poker"))
	{
		return 0;
	}
	if (!HAS_ANIM_SET_LOADED("sit_poker_gped"))
	{
		return 0;
	}
	if (!HAS_ANIM_SET_LOADED("sit_poker_hillb"))
	{
		return 0;
	}
	if (!HAS_ANIM_SET_LOADED("sit_poker_oldm"))
	{
		return 0;
	}
	return 1;
}

int Function_554() //Position: 0x1519B / 86427
{
	Function_430(&Local_174 + 32, 408, 2, 0);
	Function_430(&Local_174 + 32, 662, 2, 0);
	Function_430(&Local_174 + 32, 410, 2, 0);
	Function_430(&Local_174 + 32, 750, 2, 0);
	Function_430(&Local_174 + 32, 746, 2, 0);
	Function_430(&Local_174 + 32, 664, 2, 0);
	if (Function_350(&Local_174 + 32))
	{
		return 1;
	}
	return 0;
}

void Function_555() //Position: 0x151FC / 86524
{
	DISABLE_CHILD_SECTOR("chu_corral01x");
	DISABLE_CHILD_SECTOR("chu_cityHall_int_01x");
	DISABLE_CHILD_SECTOR("chu_churchWindow01x");
	DISABLE_CHILD_SECTOR("chu_church_int_01x");
	DISABLE_CHILD_SECTOR("chu_wall01props01x");
	DISABLE_CHILD_SECTOR("chu_townCenterProps01x");
	DISABLE_CHILD_SECTOR("chu_path01Props01x");
	DISABLE_CHILD_SECTOR("chu_marketProps01x");
	DISABLE_CHILD_SECTOR("chu_hotel01Props01x");
	DISABLE_CHILD_SECTOR("chu_corral01props01x");
	DISABLE_CHILD_SECTOR("chu_cityHall01Props01x");
	DISABLE_CHILD_SECTOR("chu_bank01props01x");
	return;
}

void Function_556() //Position: 0x1532B / 86827
{
	Function_360(bLocal_680);
	Function_360(bLocal_681);
	return;
}

void Function_557() //Position: 0x1533D / 86845
{
	Function_554();
	Function_558();
	return;
}

void Function_558() //Position: 0x1534A / 86858
{
	Function_561();
	Function_559();
	return;
}

void Function_559() //Position: 0x15356 / 86870
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	
	REQUEST_STRING_TABLE("nminigames");
	REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\BLACK_JACK");
	Function_560("$/fragments/p_gen_cards02x");
	Function_560("$/fragments/p_crd_01x");
	Function_560("$/fragments/p_gen_dealerButton01x");
	bVar0 = false;
	while (bVar0 <= 13)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Var2 = bVar0;
			Var2.f_4 = iVar1;
			cVar4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_223(&Var2, 0) };
			Function_560(&cVar4);
			iVar1++;
		}
		bVar0++;
	}
	bVar12 = GET_ASSET_ID("$/fragments/p_crd_chipRedPoker01x", 0);
	STREAMING_REQUEST_PROP(bVar12, true);
	bVar13 = GET_ASSET_ID("$/fragments/p_crd_chipGreenPoker01x", 0);
	STREAMING_REQUEST_PROP(bVar13, true);
	bVar14 = GET_ASSET_ID("$/fragments/p_crd_chipBluePoker01x", 0);
	STREAMING_REQUEST_PROP(bVar14, true);
	bVar0 = false;
	while (bVar0 < 25)
	{
		strcpy(&cVar4, Function_222(bVar0), 32);
		STREAMING_REQUEST_PROP(GET_ASSET_ID(&cVar4, 0), true);
		bVar0++;
	}
	STREAMING_REQUEST_GRINGO(GET_ASSET_ID("fake_poker", 1));
	return;
}

int Function_560(bool bParam0) //Position: 0x15506 / 87302
{
	char* cVar0[64];
	
	if (!STREAMING_REQUEST_PROP(GET_ASSET_ID(cParam0, 0), true))
	{
		strcpy(&cVar0, "Failed to load ", 64);
		stradd(&cVar0, bParam0, 64);
		return 0;
	}
	return 1;
}

void Function_561() //Position: 0x15539 / 87353
{
	REQUEST_ANIM_SET("nsit_poker", 0);
	REQUEST_ANIM_SET("sit_poker_gped", 0);
	REQUEST_ANIM_SET("sit_poker_hillb", 0);
	REQUEST_ANIM_SET("sit_poker_oldm", 0);
	REQUEST_ACTION_TREE("custom/sit_poker");
	REQUEST_ACTION_TREE("custom/fake_poker");
	return;
}

bool Function_562() //Position: 0x155BE / 87486
{
	switch (iLocal_1008)
	{
		case 0x00000000:
			iLocal_1008 = 1;
			iLocal_904 = 99;
			return 1;
			break;
		
		case 0x00000001:
			if (!Function_564())
			{
				iLocal_1008 = 2;
				return 1;
			}
			Function_563();
			break;
		
		case 0x00000002:
			return 0;
			break;
	}
	return 1;
}

void Function_563() //Position: 0x15605 / 87557
{
	if (!IS_GRINGO_VALID(bLocal_995))
	{
		bLocal_882 = GET_PHYSINST_FROM_OBJECT(Local_174.f_1804);
		if (IS_PHYSINST_VALID(bLocal_882))
		{
			SET_PROP_FIXED(bLocal_882, 0);
			SET_OBJECT_COLLIDE_WITH_MOVABLES(Local_174.f_1804, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT((*&Local_174 + 1148)[02], Local_174.f_1804, false);
			bLocal_881 = CREATE_GRINGO_ON_OBJECT(Local_174.f_1804, Function_53(), "sit_cleanpistol", 0,2f, 0.0f, 0,3f, 0.0f, 180.0f, 0.0f);
			if (IS_OBJECT_VALID(bLocal_881))
			{
				DECOR_SET_BOOL(bLocal_881, "ForceAllowRain", true);
				bLocal_995 = GET_GRINGO_FROM_OBJECT(bLocal_881);
			}
		}
	}
	else if (GET_TASK_STATUS((*&Local_174 + 1148)[02], 19) != 1)
	{
		TASK_CLEAR((*&Local_174 + 1148)[02]);
		TASK_PRIORITY_SET((*&Local_174 + 1148)[02], true);
		TASK_USE_GRINGO((*&Local_174 + 1148)[02], bLocal_995, "UseCase1", 4294967295, 1);
	}
	return;
}

bool Function_564() //Position: 0x156ED / 87789
{
	bLocal_958 = false;
	bLocal_959 = false;
	switch (iLocal_904)
	{
		case 0x00000063:
			if (!Function_600(Global_30693[0], &Local_905 + 12, Global_34573, 0, 0))
			{
				LOG_ERROR("PerformPokerLoop: Failed to assign poker players seats at the table!");
				return 0;
			}
			(*&Local_905 + 12)[4] = Global_34573;
			(*&Local_905 + 12)[5] = "";
			Function_599(&Local_905 + 12);
			Local_905.f_180 = 1;
			Local_905.f_160 = 0;
			Local_905.f_4 = 1;
			Local_905.f_168 = 10;
			Function_598(Global_30693[0], 0);
			*(&Local_905 + 148) = { StackVal, StackVal, Function_598(Global_30693[0], 0) };
			bLocal_896 = false;
			while (bLocal_896 <= 6)
			{
				(*&Local_905 + 40)[bLocal_896] = 1000;
				Function_597(Global_30693[0], bLocal_896, 0);
				*(&Local_905 + 72[bLocal_8963]) = { StackVal, StackVal, Function_597(Global_30693[0], bLocal_896, 0) };
				bLocal_896++;
			}
			bLocal_896 = false;
			while (bLocal_896 <= Local_905.f_12)
			{
				PRINTINT(bLocal_896);
				PRINTSTRING(": ");
				if (IS_ACTOR_VALID((*&Local_905 + 12)[bLocal_896]))
				{
					PRINTSTRING("FILLED");
				}
				else
				{
					PRINTSTRING("EMPTY");
				}
				PRINTNL();
				bLocal_896++;
			}
			if (Function_596(Global_30693[0], 0, 4))
			{
				Local_905.f_8 = Function_591(Global_30693[0], 0, 4);
				Function_590(StackVal, 0);
			}
			bLocal_957 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Poker01/Poker01", &Local_905, 52, 0);
			iLocal_904 = 0;
			return 1;
			break;
		
		case 0x00000000:
			if (!IS_SCRIPT_VALID(bLocal_957))
			{
				iLocal_904 = 101;
				return 1;
			}
			Function_565();
			break;
		
		case 0x00000065:
			if (DECOR_CHECK_EXIST(Global_34573, "Gun05Poker"))
			{
				if (DECOR_GET_BOOL(Global_34573, "Gun05Poker"))
				{
					bLocal_958 = true;
				}
				else
				{
					bLocal_959 = true;
				}
				DECOR_REMOVE(Global_34573, "Gun05Poker");
			}
			else
			{
				bLocal_959 = true;
			}
			break;
		
		default:
			LOG_ERROR("PerformPokerLoop: Unknown Stage ID");
			return 0;
			break;
	}
	if (bLocal_958)
	{
		return 0;
	}
	if (bLocal_959)
	{
		Function_263("Gun05_obj01_fail");
		bLocal_713 = true;
		return 0;
	}
	return 1;
}

int Function_565() //Position: 0x15976 / 88438
{
	if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_FADING()) && !HUD_IS_FADED())
	{
		if (DECOR_CHECK_EXIST(bLocal_680, "calls"))
		{
			Function_589();
			DECOR_REMOVE(bLocal_680, "calls");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_680, "folds"))
		{
			Function_588();
			DECOR_REMOVE(bLocal_680, "folds");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_680, "checks"))
		{
			Function_587();
			DECOR_REMOVE(bLocal_680, "checks");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_680, "allin"))
		{
			Function_586();
			DECOR_REMOVE(bLocal_680, "allin");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_680, "raises"))
		{
			Function_585();
			DECOR_REMOVE(bLocal_680, "raises");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_680, "toolong"))
		{
			Function_584();
			DECOR_REMOVE(bLocal_680, "toolong");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_680, "playerwins"))
		{
			Function_583();
			DECOR_REMOVE(bLocal_680, "playerwins");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_680, "landonwins"))
		{
			Function_582();
			DECOR_REMOVE(bLocal_680, "landonwins");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_680, "mullerwins"))
		{
			Function_581();
			DECOR_REMOVE(bLocal_680, "mullerwins");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_682, "calls"))
		{
			Function_580();
			DECOR_REMOVE(bLocal_682, "calls");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_682, "folds"))
		{
			Function_579();
			DECOR_REMOVE(bLocal_682, "folds");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_682, "checks"))
		{
			Function_578();
			DECOR_REMOVE(bLocal_682, "checks");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_682, "allin"))
		{
			Function_577();
			DECOR_REMOVE(bLocal_682, "allin");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_682, "raises"))
		{
			Function_576();
			DECOR_REMOVE(bLocal_682, "raises");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_682, "toolong"))
		{
			Function_575();
			DECOR_REMOVE(bLocal_682, "toolong");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_682, "begincomments"))
		{
			Function_574();
			DECOR_REMOVE(bLocal_682, "begincomments");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_682, "playerwins"))
		{
			Function_573();
			DECOR_REMOVE(bLocal_682, "playerwins");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_682, "landonwins"))
		{
			Function_572();
			DECOR_REMOVE(bLocal_682, "landonwins");
			return 1;
		}
		if (DECOR_CHECK_EXIST(bLocal_682, "mullerwins"))
		{
			Function_571();
			DECOR_REMOVE(bLocal_682, "mullerwins");
			return 1;
		}
		if (!Function_314(&iLocal_702))
		{
			if (DECOR_CHECK_EXIST(Global_34573, "nexthand"))
			{
				Function_570();
				DECOR_REMOVE(Global_34573, "nexthand");
				Function_254(&iLocal_702);
				return 1;
			}
			if (DECOR_CHECK_EXIST(bLocal_680, "nexthand"))
			{
				Function_569();
				DECOR_REMOVE(bLocal_680, "nexthand");
				Function_254(&iLocal_702);
				return 1;
			}
			if (DECOR_CHECK_EXIST(bLocal_682, "nexthand"))
			{
				Function_568();
				DECOR_REMOVE(bLocal_682, "nexthand");
				Function_254(&iLocal_702);
				return 1;
			}
			if (DECOR_CHECK_EXIST(bLocal_680, "rechand"))
			{
				Function_567();
				DECOR_REMOVE(bLocal_680, "rechand");
				Function_254(&iLocal_702);
				return 1;
			}
			if (DECOR_CHECK_EXIST(bLocal_682, "rechand"))
			{
				Function_566();
				DECOR_REMOVE(bLocal_682, "rechand");
				Function_254(&iLocal_702);
				return 1;
			}
		}
		if (Function_312(&iLocal_702) <= 10.0f)
		{
			Function_438(&iLocal_702);
		}
	}
	return 0;
}

void Function_566() //Position: 0x15DFB / 89595
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_ResponseRecHand", "Gun05_ResponseRecHand", false, 4, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_567() //Position: 0x15E4E / 89678
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_RicksCommRecHand", "Gun05_RicksCommRecHand", false, 4, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_568() //Position: 0x15EA3 / 89763
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_NextHandDeal", "Gun05_NextHandDeal", false, 4, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_569() //Position: 0x15EF0 / 89840
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_RickCommentsHand", "Gun05_RickCommentsHand", false, 4, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_570() //Position: 0x15F45 / 89925
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Gun05_JonCommentNextHand", "Gun05_JonCommentNextHand", true, 4, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_571() //Position: 0x15F9E / 90014
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerWinsHand", "Gun05_MullerWinsHand", false, 4, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_572() //Position: 0x15FEF / 90095
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerReactsRick", "Gun05_MullerReactsRick", false, 4, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_573() //Position: 0x16044 / 90180
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerReactsJon", "Gun05_MullerReactsJon", false, 4, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_574() //Position: 0x16097 / 90263
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_BeginComments", "Gun05_BeginComments", false, 4, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_575() //Position: 0x160E6 / 90342
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_JonTakes2Long", "Gun05_JonTakes2Long", false, 4, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_576() //Position: 0x16135 / 90421
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerRaises", "Gun05_MullerRaises", false, 4, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_577() //Position: 0x16182 / 90498
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerAllIn", "Gun05_MullerAllIn", false, 4, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_578() //Position: 0x161CD / 90573
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerChecks", "Gun05_MullerChecks", false, 4, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_579() //Position: 0x1621A / 90650
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerFolds", "Gun05_MullerFolds", false, 4, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_580() //Position: 0x16265 / 90725
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Gun05_MullerCalls", "Gun05_MullerCalls", false, 4, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_581() //Position: 0x162B0 / 90800
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_RickReactMuller", "Gun05_RickReactMuller", false, 4, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_582() //Position: 0x16303 / 90883
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_RickWinsHand", "Gun05_RickWinsHand", false, 4, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_583() //Position: 0x16350 / 90960
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_RickReactJon", "Gun05_RickReactJon", false, 4, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_584() //Position: 0x1639D / 91037
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_JonTakesLongRick", "Gun05_JonTakesLongRick", false, 4, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_585() //Position: 0x163F2 / 91122
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_RickRaises", "Gun05_RickRaises", false, 4, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_586() //Position: 0x1643B / 91195
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_RickAllIn", "Gun05_RickAllIn", false, 4, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_587() //Position: 0x16482 / 91266
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_RickChecks", "Gun05_RickChecks", false, 4, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_588() //Position: 0x164CB / 91339
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_RickFolds", "Gun05_RickFolds", false, 4, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_589() //Position: 0x16512 / 91410
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Gun05_RickCalls", "Gun05_RickCalls", false, 4, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_590(int iParam0, int iParam1) //Position: 0x16559 / 91481
{
	if (!Function_18(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

int Function_591(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16574 / 91508
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_595(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_592(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_592(bParam0, bParam1, bParam2, 4294967295);
}

int Function_592(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x165D2 / 91602
{
	var uVar0;
	
	if (!Function_594(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_595(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_593(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_593(int iParam0) //Position: 0x16727 / 91943
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_594(int iParam0) //Position: 0x16765 / 92005
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_595(int iParam0, int iParam1, int iParam2) //Position: 0x1677A / 92026
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_596(var uParam0, var uParam1, int iParam2) //Position: 0x1679A / 92058
{
	int iVar0;
	
	iVar0 = Function_591(uParam0, uParam1, iParam2);
	return Function_18(iVar0);
}

vector3 Function_597(int iParam0, int iParam1, bool bParam2) //Position: 0x167B0 / 92080
{
	if (iParam0 == Global_30668[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -801,0966f, 92,75807f, 2375,792f;
				break;
			
			case 0x00000001:
				return -801,4974f, 92,75435f, 2375,295f;
				break;
			
			case 0x00000002:
				return -801,2829f, 92,75435f, 2374,737f;
				break;
			
			case 0x00000003:
				return -800,724f, 92,76255f, 2374,656f;
				break;
			
			case 0x00000004:
				return -800,3233f, 92,75678f, 2375,122f;
				break;
			
			case 0x00000005:
				return -800,5463f, 92,75435f, 2375,677f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 164,353f, 73,75671f, 2230,925f;
				break;
			
			case 0x00000001:
				return 164,5807f, 73,82056f, 2231,472f;
				break;
			
			case 0x00000002:
				return 164,2043f, 73,75299f, 2231,971f;
				break;
			
			case 0x00000003:
				return 163,6548f, 73,76118f, 2231,889f;
				break;
			
			case 0x00000004:
				return 163,4103f, 73,76118f, 2231,366f;
				break;
			
			case 0x00000005:
				return 163,7511f, 73,75671f, 2230,869f;
				break;
		}
	}
	else if (iParam0 == Global_30640[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2157,424f, 16,88292f, 2596,033f;
				break;
			
			case 0x00000001:
				return -2158,012f, 16,94059f, 2595,997f;
				break;
			
			case 0x00000002:
				return -2158,228f, 16,87845f, 2595,416f;
				break;
			
			case 0x00000003:
				return -2157,847f, 16,87845f, 2594,96f;
				break;
			
			case 0x00000004:
				return -2157,261f, 16,87845f, 2595,042f;
				break;
			
			case 0x00000005:
				return -2157,04f, 16,87845f, 2595,596f;
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
					return 748,5359f, 82,6927f, 1267,343f;
					break;
				
				case 0x00000001:
					return 749,138f, 82,6927f, 1266,645f;
					break;
				
				case 0x00000002:
					return 750,045f, 82,6927f, 1266,796f;
					break;
				
				case 0x00000003:
					return 750,0344f, 82,6917f, 1267,552f;
					break;
				
				case 0x00000004:
					return 749,7606f, 82,6927f, 1268,372f;
					break;
				
				case 0x00000005:
					return 748,8501f, 82,6927f, 1268,207f;
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return 717,6248f, 78,47099f, 1325,972f;
					break;
				
				case 0x00000001:
					return 717,0453f, 78,47099f, 1325,919f;
					break;
				
				case 0x00000002:
					return 716,8008f, 78,47099f, 1325,396f;
					break;
				
				case 0x00000003:
					return 717,1418f, 78,47099f, 1324,928f;
					break;
				
				case 0x00000004:
					return 717,7181f, 78,47099f, 1324,969f;
					break;
				
				case 0x00000005:
					return 717,9684f, 78,47099f, 1325,495f;
					break;
				}
		}
	}
	else if (iParam0 == Global_30717[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -138,6693f, 119,2419f, 1344,049f;
				break;
			
			case 0x00000001:
				return -139,2573f, 119,2419f, 1343,961f;
				break;
			
			case 0x00000002:
				return -139,4945f, 119,2419f, 1343,419f;
				break;
			
			case 0x00000003:
				return -139,1212f, 119,2419f, 1342,946f;
				break;
			
			case 0x00000004:
				return -138,5368f, 119,2419f, 1343,024f;
				break;
			
			case 0x00000005:
				return -138,2953f, 119,2419f, 1343,58f;
				break;
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2701,487f, 31,151f, 4278,554f;
				break;
			
			case 0x00000001:
				return -2701,713f, 31,151f, 4277,994f;
				break;
			
			case 0x00000002:
				return -2701,347f, 31,151f, 4277,538f;
				break;
			
			case 0x00000003:
				return -2700,726f, 31,151f, 4277,604f;
				break;
			
			case 0x00000004:
				return -2700,508f, 31,151f, 4278,2f;
				break;
			
			case 0x00000005:
				return -2700,919f, 31,151f, 4278,653f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -795,5794f, 13,16767f, 3699,937f;
				break;
			
			case 0x00000001:
				return -795,8744f, 13,16057f, 3699,083f;
				break;
			
			case 0x00000002:
				return -794,9905f, 13,16057f, 3698,687f;
				break;
			
			case 0x00000003:
				return -794,196f, 13,16057f, 3699,235f;
				break;
			
			case 0x00000004:
				return -794,2787f, 13,16057f, 3700,203f;
				break;
			
			case 0x00000005:
				return -795,169f, 13,16057f, 3700,608f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_598(int iParam0, bool bParam1) //Position: 0x16D2A / 93482
{
	if (iParam0 == Global_30668[0])
	{
		return -800,8856f, 93,555f, 2375,189f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 163,9887f, 74,554f, 2231,428f;
	}
	if (iParam0 == Global_30640[0])
	{
		return -2157,657f, 17,677f, 2595,523f;
	}
	if (iParam0 == Global_30717[0])
	{
		if (bParam1)
		{
			return 749,4575f, 83,482f, 1267,537f;
		}
		return 717,378f, 79,274f, 1325,464f;
	}
	if (iParam0 == Global_30717[1])
	{
		return -138,8952f, 120,019f, 1343,499f;
	}
	if (iParam0 == Global_30693[0])
	{
		return -2701,129f, 31,949f, 4278,085f;
	}
	if (iParam0 == Global_30707[2])
	{
		return -795,0887f, 13,958f, 3699,661f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_599(int iParam0) //Position: 0x16E3C / 93756
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

bool Function_600(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x16E91 / 93841
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
		Function_597(iParam0, iVar6, bParam4);
		bVar18 = Function_606(StackVal, StackVal, Function_597(iParam0, iVar6, bParam4));
		while ((!IS_GRINGO_VALID(bVar18) && !IS_EXITFLAG_SET()) && GET_CURRENT_GAME_TIME() > (fVar9 + 5.0f))
		{
			Function_597(iParam0, iVar6, bParam4);
			bVar18 = Function_606(StackVal, StackVal, Function_597(iParam0, iVar6, bParam4));
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
					Function_605(uParam2, &vVar0);
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
	if (Function_601(uParam2, 1, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_601(bool bParam0, bool bParam1, bool bParam2) //Position: 0x17080 / 94336
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
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0,3f))
	{
		return 1;
	}
	if (Function_604(bParam0))
	{
		return 1;
	}
	if (Function_603(bParam0))
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
	if (Function_602())
	{
		return 1;
	}
	return 0;
}

bool Function_602() //Position: 0x17136 / 94518
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_603(bool bParam0) //Position: 0x1714D / 94541
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_604(bool bParam0) //Position: 0x17158 / 94552
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_605(bool bParam0, int iParam1) //Position: 0x17166 / 94566
{
	GET_POSITION(bParam0, iParam1);
	return;
}

bool Function_606(var uParam0, var uParam1, bool bParam2) //Position: 0x17173 / 94579
{
	return LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_poker", &uParam0, 1.0f, 0);
}

int Function_607() //Position: 0x171B5 / 94645
{
	GET_OBJECT_POSITION((*&Local_174 + 1448)[0], &vLocal_887);
	if (Function_440(StackVal, StackVal, "$/cutscene/GUN_05_B/GUN_05_B", &uLocal_900, vLocal_887, 0, 4000.0f, 10000.0f, 2, 1, 2, 2, 1, 0))
	{
		return 1;
	}
	return 0;
}

void Function_608() //Position: 0x1720B / 94731
{
	switch (bLocal_676)
	{
		case 0x00000006:
			Function_657(&Local_629, 1);
			bLocal_628 = CREATE_LAYOUT("Gun05_DynamicLayout");
			Function_656();
			Function_356();
			Function_180(1, 0, 1);
			Function_655((*&Local_174 + 1344)[0]);
			RESET_PROPS_IN_VOLUME((*&Local_174 + 1288)[0], 1);
			bLocal_676 = 7;
			break;
		
		case 0x00000007:
			if (Function_637())
			{
				if ((Local_629.f_24 >= 1 && !Function_317(&Local_629)) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/GUN_05_A/GUN_05_A"))
				{
					Function_636();
					bLocal_676 = 8;
				}
				else
				{
					Function_631();
					bLocal_676 = 9;
				}
			}
			break;
		
		case 0x00000008:
			if (Function_307("$/cutscene/GUN_05_A/GUN_05_A", &Local_668, &Local_629, &bLocal_675, 57797, 73317, 107057, 56239, 106718, 73310, 1, 2, 1, 1, 2, !iLocal_1007, 1))
			{
				bLocal_676 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_LAYOUTREF_VALID(Local_174))
			{
				if (Function_622())
				{
					Function_620();
				}
			}
			else
			{
				bLocal_676 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(Local_174))
			{
				bLocal_679 = CREATE_OBJECT_ITERATOR(Local_174);
			}
			Function_613();
			Function_612(&iLocal_690);
			Function_612(&bLocal_693);
			bLocal_675 = false;
			bLocal_676 = false;
			Function_610(&Local_629, &bLocal_675, &bLocal_676);
			Function_609(StackVal, StackVal, StackVal, StackVal, StackVal, Function_620(), Local_629);
			switch (bLocal_675)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					Function_256();
					break;
				
				case 0x00000002:
					Function_251();
					break;
				
				case 0x00000003:
					Function_250();
					break;
				
				case 0x00000004:
					Function_249();
					break;
				
				case 0x00000005:
					Function_246();
					break;
				
				case 0x00000065:
					Function_236();
					break;
			}
			break;
	}
	return;
}

void Function_609(struct<25> Param0) //Position: 0x173E1 / 95201
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			bLocal_675 = false;
			break;
		
		case 0x00000002:
			bLocal_675 = true;
			break;
		
		case 0x00000003:
			bLocal_675 = 4;
			break;
		
		case 0x00000004:
			bLocal_675 = 101;
			break;
	}
}

void Function_610(int iParam0, var uParam1, int iParam2) //Position: 0x17427 / 95271
{
	if (Function_317(iParam0))
	{
		*uParam1 = Function_460(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_611();
	}
	return;
}

void Function_611() //Position: 0x1745B / 95323
{
	if (Global_34165.f_112 != 4294967295)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(GET_PLAYER_ACTOR(0), Global_34165.f_112, 0);
		ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), Global_34165.f_112, 0);
		PRINTSTRING("Restoring weapon: ");
		PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_34165.f_112));
		PRINTNL();
	}
	return;
}

void Function_612(int iParam0) //Position: 0x174AC / 95404
{
	if (!Function_314(iParam0))
	{
		Function_255(iParam0, 0.0f);
	}
	return;
}

void Function_613() //Position: 0x174C1 / 95425
{
	iLocal_899 = 0;
	Function_619("MEX_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
	Function_157(Global_30693[0]);
	Function_192(0);
	Function_617(&uLocal_716, bLocal_628);
	Function_390(&(Local_756[017]), bLocal_680, "Gunslinger", 0, 0x5f5e100, 1);
	Function_614(&(Local_756[617]), bLocal_628, 0x5f5e100);
	return;
}

int Function_614(char* cParam0, bool bParam1, int iParam2) //Position: 0x17530 / 95536
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Layout invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(*cParam0))
	{
		if (GET_OBJECT_TYPE(*cParam0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(*cParam0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(*cParam0);
			}
		}
	}
	Function_75();
	Function_75();
	*cParam0 = CREATE_POINT_IN_LAYOUT(bParam1, "nMFT_Dummy", Function_75(), Function_75());
	if (!IS_OBJECT_VALID(*cParam0))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Object invalid!");
		return 0;
	}
	cParam0->f_28 = 8;
	cParam0->f_32 = 2;
	if (!Function_395(cParam0, "nMFT_Dummy"))
	{
		return 0;
	}
	Function_394(cParam0, 0);
	cParam0->f_40 = 0;
	Function_391(cParam0, iParam2, 0);
	Function_615(cParam0, 3);
	return 1;
}

void Function_615(int iParam0, int iParam1) //Position: 0x17641 / 95809
{
	if (iParam1 != 100000000)
	{
		Function_616(iParam0, iParam1);
	}
	else
	{
		Function_392(iParam0, 1);
	}
	return;
}

void Function_616(int iParam0, bool bParam1) //Position: 0x17661 / 95841
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

int Function_617(var uParam0, bool bParam1) //Position: 0x1768C / 95884
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_618(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_618(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_618(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_618(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_618(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_618(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_618(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_618(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_618(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_618(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_618(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_618(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_618(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_618(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x17D2C / 97580
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Layout invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(bParam2))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Name invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(*iParam0))
	{
		DESTROY_OBJECT(*iParam0);
	}
	*iParam0 = CREATE_EVENT_TRAP(bParam2, iParam3, bParam1);
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return 0;
	}
	EVENT_TRAP_STORE_EVENTS(*iParam0, 1);
	iParam0->f_4 = iParam3;
	iParam0->f_8 = 0;
	Function_76(iParam0 + 8, iParam4);
	return 1;
}

void Function_619(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x17DEF / 97775
{
	AUDIO_MUSIC_FORCE_TRACK(uParam0, Function_230(iParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

vector3 Function_620() //Position: 0x17E0B / 97803
{
	var uVar0;
	
	Function_621(4, 1);
	uVar0 = uVar0;
	Local_174 = CREATE_LAYOUT("Gun05_layout");
	Local_174.f_1308 = CREATE_VOLUME_SET_IN_LAYOUT(Local_174, "CutsceneVol_set");
	(*&Local_174 + 1288)[0] = CREATE_VOLUME_IN_LAYOUT(Local_174, "Cutscene01Vol", 2, -2698.0f, 34.0f, 4278.0f, 0.0f, 0.0f, 0.0f, 14.0f, 10.0f, 12.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1308, (*&Local_174 + 1288)[0]);
	(*&Local_174 + 1288)[1] = CREATE_VOLUME_IN_LAYOUT(Local_174, "Cutscene02Vol", 2, -2698.0f, 34.0f, 4278.0f, 0.0f, 0.0f, 0.0f, 14.0f, 10.0f, 12.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1308, (*&Local_174 + 1288)[1]);
	(*&Local_174 + 1288)[2] = CREATE_VOLUME_IN_LAYOUT(Local_174, "Cutscene03Vol", 2, -2697,067f, 32,82203f, 4268,143f, 0.0f, -2,021486f, 0.0f, 9,218593f, 5,684794f, 16,89103f);
	ADD_TO_VOLUME_SET(Local_174.f_1308, (*&Local_174 + 1288)[2]);
	(*&Local_174 + 1288)[3] = CREATE_VOLUME_IN_LAYOUT(Local_174, "Cutscene04Vol", 2, -2697,348f, 31,52667f, 4239,917f, 0.0f, 0.0f, 0.0f, 14,52787f, 11,12271f, 10,17338f);
	ADD_TO_VOLUME_SET(Local_174.f_1308, (*&Local_174 + 1288)[3]);
	Local_174.f_1340 = CREATE_VOLUME_SET_IN_LAYOUT(Local_174, "PreInitVol_set");
	(*&Local_174 + 1312)[0] = CREATE_VOLUME_IN_LAYOUT(Local_174, "PreInit02Vol", 2, -2698.0f, 34.0f, 4278.0f, 0.0f, 0.0f, 0.0f, 14.0f, 10.0f, 12.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1340, (*&Local_174 + 1312)[0]);
	(*&Local_174 + 1312)[1] = CREATE_VOLUME_IN_LAYOUT(Local_174, "PreInit03Vol", 2, -2698.0f, 34.0f, 4278.0f, 0.0f, 0.0f, 0.0f, 14.0f, 10.0f, 12.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1340, (*&Local_174 + 1312)[1]);
	(*&Local_174 + 1312)[2] = CREATE_VOLUME_IN_LAYOUT(Local_174, "PreInit04Vol", 2, -2698.0f, 34.0f, 4262.0f, 0.0f, 0.0f, 0.0f, 20.0f, 10.0f, 44.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1340, (*&Local_174 + 1312)[2]);
	(*&Local_174 + 1312)[3] = CREATE_VOLUME_IN_LAYOUT(Local_174, "PreInit05Vol", 2, -2698.0f, 34.0f, 4262.0f, 0.0f, 0.0f, 0.0f, 20.0f, 10.0f, 44.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1340, (*&Local_174 + 1312)[3]);
	(*&Local_174 + 1312)[4] = CREATE_VOLUME_IN_LAYOUT(Local_174, "PreInit06Vol", 2, -2698.0f, 34.0f, 4262.0f, 0.0f, 0.0f, 0.0f, 20.0f, 10.0f, 44.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1340, (*&Local_174 + 1312)[4]);
	(*&Local_174 + 1312)[5] = CREATE_VOLUME_IN_LAYOUT(Local_174, "PreInit07Vol", 2, -2698.0f, 34.0f, 4262.0f, 0.0f, 0.0f, 0.0f, 20.0f, 10.0f, 44.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1340, (*&Local_174 + 1312)[5]);
	Local_174.f_1384 = CREATE_VOLUME_SET_IN_LAYOUT(Local_174, "ActionVol_set");
	(*&Local_174 + 1344)[0] = CREATE_VOLUME_IN_LAYOUT(Local_174, "ChuparosaVol", 2, -2700.0f, 36,83155f, 4258.0f, 0.0f, 0.0f, 0.0f, 128.0f, 20.0f, 108.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1384, (*&Local_174 + 1344)[0]);
	(*&Local_174 + 1344)[1] = CREATE_VOLUME_IN_LAYOUT(Local_174, "FinalBattleVol", 2, -2688,406f, 34.0f, 4254,527f, 0.0f, -11,37087f, 0.0f, 30.0f, 10.0f, 20.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1384, (*&Local_174 + 1344)[1]);
	(*&Local_174 + 1344)[2] = CREATE_VOLUME_IN_LAYOUT(Local_174, "FinalBattleStayOutVol01", 2, -2700.0f, 34.0f, 4272.0f, 0.0f, 0.0f, 0.0f, 16.0f, 10.0f, 24.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1384, (*&Local_174 + 1344)[2]);
	(*&Local_174 + 1344)[3] = CREATE_VOLUME_IN_LAYOUT(Local_174, "FinalBattleStayOutVol02", 2, -2682.0f, 34.0f, 4262.0f, 0.0f, 0.0f, 0.0f, 20.0f, 10.0f, 44.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1384, (*&Local_174 + 1344)[3]);
	(*&Local_174 + 1344)[4] = CREATE_VOLUME_IN_LAYOUT(Local_174, "Duel01StayOutVol", 2, -2694,6f, 33.0f, 4247,1f, 0.0f, 0.0f, 0.0f, 8.0f, 6.0f, 20.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1384, (*&Local_174 + 1344)[4]);
	(*&Local_174 + 1344)[5] = CREATE_VOLUME_IN_LAYOUT(Local_174, "Duel02StayOutVol", 2, -2696,1f, 33.0f, 4267.0f, 0.0f, 10.0f, 0.0f, 8.0f, 6.0f, 20.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1384, (*&Local_174 + 1344)[5]);
	(*&Local_174 + 1344)[6] = CREATE_VOLUME_IN_LAYOUT(Local_174, "MullerCorpseVol", 2, -2694,579f, 33.0f, 4241,944f, 0.0f, 0.0f, 0.0f, 6,155837f, 6.0f, 6,274136f);
	ADD_TO_VOLUME_SET(Local_174.f_1384, (*&Local_174 + 1344)[6]);
	(*&Local_174 + 1344)[7] = CREATE_VOLUME_IN_LAYOUT(Local_174, "PatioStayOutVol01", 2, -2706,2f, 34.0f, 4280.0f, 0.0f, 0.0f, 0.0f, 6.0f, 10.0f, 40.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1384, (*&Local_174 + 1344)[7]);
	(*&Local_174 + 1344)[8] = CREATE_VOLUME_IN_LAYOUT(Local_174, "PatioStayOutVol02", 2, -2687,451f, 34.0f, 4284.0f, 0.0f, 0.0f, 0.0f, 14.0f, 10.0f, 32.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1384, (*&Local_174 + 1344)[8]);
	Local_174.f_1416 = CREATE_VOLUME_SET_IN_LAYOUT(Local_174, "TriggerVol_set");
	(*&Local_174 + 1388)[0] = CREATE_VOLUME_IN_LAYOUT(Local_174, "DuelInnerVol", 2, -2694,6f, 34.0f, 4262.0f, 0.0f, 0.0f, 0.0f, 20.0f, 10.0f, 44.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1416, (*&Local_174 + 1388)[0]);
	(*&Local_174 + 1388)[1] = CREATE_VOLUME_IN_LAYOUT(Local_174, "DuelOuterVol", 2, -2694,6f, 34.0f, 4262.0f, 0.0f, 0.0f, 0.0f, 44.0f, 10.0f, 68.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1416, (*&Local_174 + 1388)[1]);
	(*&Local_174 + 1388)[2] = CREATE_VOLUME_IN_LAYOUT(Local_174, "LandonNearDuelVol", 2, -2694,6f, 34.0f, 4249.0f, 0.0f, 0.0f, 0.0f, 20.0f, 10.0f, 18.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1416, (*&Local_174 + 1388)[2]);
	(*&Local_174 + 1388)[3] = CREATE_VOLUME_IN_LAYOUT(Local_174, "MullerNearDuelVol", 2, -2694,6f, 34.0f, 4242.0f, 0.0f, 0.0f, 0.0f, 20.0f, 10.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1416, (*&Local_174 + 1388)[3]);
	(*&Local_174 + 1388)[4] = CREATE_VOLUME_IN_LAYOUT(Local_174, "PlayerHorseNearHPVol", 2, -2705,819f, 33,59062f, 4240,974f, 0.0f, 31,53817f, 0.0f, 4.0f, 4.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1416, (*&Local_174 + 1388)[4]);
	(*&Local_174 + 1388)[5] = CREATE_VOLUME_IN_LAYOUT(Local_174, "PlayerNearDuelVol", 2, -2694,6f, 34.0f, 4251.0f, 0.0f, 0.0f, 0.0f, 20.0f, 10.0f, 22.0f);
	ADD_TO_VOLUME_SET(Local_174.f_1416, (*&Local_174 + 1388)[5]);
	Local_174.f_1420 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_174, 8, 0);
	(*&Local_174 + 1424)[0] = CREATE_POINT_IN_LAYOUT(Local_174, "PlayerStart01", -2699,459f, 31,151f, 4279,011f, 0.0f, 61,33242f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1424)[0], Local_174.f_1420);
	(*&Local_174 + 1424)[1] = CREATE_POINT_IN_LAYOUT(Local_174, "CompanionStart01", -2701,888f, 31,12157f, 4298.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1424)[1], Local_174.f_1420);
	(*&Local_174 + 1424)[2] = CREATE_POINT_IN_LAYOUT(Local_174, "CompanionEnd01", -2702,768f, 31,13732f, 4279,034f, 0.0f, 300,2953f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1424)[2], Local_174.f_1420);
	(*&Local_174 + 1424)[3] = CREATE_POINT_IN_LAYOUT(Local_174, "PlayerHorseStart01", -2705,062f, 31,99542f, 4240,509f, 0.0f, 36,93771f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1424)[3], Local_174.f_1420);
	Local_174.f_1444 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_174, 8, 0);
	(*&Local_174 + 1448)[0] = CREATE_POINT_IN_LAYOUT(Local_174, "PlayerStart02", -2699,285f, 31,15f, 4277,957f, 0.0f, -3,51622f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1448)[0], Local_174.f_1444);
	(*&Local_174 + 1448)[1] = CREATE_POINT_IN_LAYOUT(Local_174, "CompanionStart02", -2698,826f, 31,14972f, 4279,858f, 0.0f, 356,5223f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1448)[1], Local_174.f_1444);
	(*&Local_174 + 1448)[2] = CREATE_POINT_IN_LAYOUT(Local_174, "MullerStart02", -2697,835f, 31,15217f, 4272,001f, 0.0f, -8,316405f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1448)[2], Local_174.f_1444);
	(*&Local_174 + 1448)[3] = CREATE_POINT_IN_LAYOUT(Local_174, "StrangerStart02", -2698,293f, 31,1242f, 4268,754f, 0.0f, 359,6532f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1448)[3], Local_174.f_1444);
	(*&Local_174 + 1448)[4] = CREATE_POINT_IN_LAYOUT(Local_174, "ManoloStart02", -2695,905f, 31,1074f, 4270,068f, 0,1290938f, 340,1047f, 0,08100592f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1448)[4], Local_174.f_1444);
	(*&Local_174 + 1448)[5] = CREATE_POINT_IN_LAYOUT(Local_174, "Gangster01Start02", -2695,707f, 31,15285f, 4263,892f, 0,5217836f, 348,6411f, 0,09210373f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1448)[5], Local_174.f_1444);
	(*&Local_174 + 1448)[6] = CREATE_POINT_IN_LAYOUT(Local_174, "Gangster02Start02", -2696,781f, 31,12066f, 4264,754f, 0.0f, 355,728f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1448)[6], Local_174.f_1444);
	(*&Local_174 + 1448)[7] = CREATE_POINT_IN_LAYOUT(Local_174, "Gangster03Start02", -2698,273f, 31,12185f, 4263,138f, 0.0f, 0,5169922f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1448)[7], Local_174.f_1444);
	(*&Local_174 + 1448)[8] = CREATE_POINT_IN_LAYOUT(Local_174, "Patron01Start02", -2691,886f, 31,12157f, 4272,357f, 0.0f, 13,59204f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1448)[8], Local_174.f_1444);
	(*&Local_174 + 1448)[9] = CREATE_POINT_IN_LAYOUT(Local_174, "Patron02Start02", -2691,555f, 31,14748f, 4276,851f, 0.0f, 409,28f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1448)[9], Local_174.f_1444);
	Local_174.f_1492 = CREATE_OBJECTSET_IN_LAYOUT("Teleport01Set", Local_174, 8, 0);
	(*&Local_174 + 1496)[0] = CREATE_POINT_IN_LAYOUT(Local_174, "PlayerTele01", -2694,579f, 31,37043f, 4251,944f, 0.0f, 0,0001899195f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1496)[0], Local_174.f_1492);
	(*&Local_174 + 1496)[1] = CREATE_POINT_IN_LAYOUT(Local_174, "CompanionTele01", -2699,034f, 31,34783f, 4256,151f, -0,4184313f, -17,1152f, 0,1653187f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1496)[1], Local_174.f_1492);
	(*&Local_174 + 1496)[2] = CREATE_POINT_IN_LAYOUT(Local_174, "MullerTele01", -2694,579f, 31,6039f, 4241,944f, 0.0f, -179,9998f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1496)[2], Local_174.f_1492);
	(*&Local_174 + 1496)[3] = CREATE_POINT_IN_LAYOUT(Local_174, "StrangerTele01", -2701,815f, 31,99428f, 4234,973f, 0.0f, 193,975f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1496)[3], Local_174.f_1492);
	(*&Local_174 + 1496)[4] = CREATE_POINT_IN_LAYOUT(Local_174, "ManoloTele01", -2689,015f, 31,54553f, 4251,237f, 0.0f, 46,3615f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1496)[4], Local_174.f_1492);
	(*&Local_174 + 1496)[5] = CREATE_POINT_IN_LAYOUT(Local_174, "Gangster01Tele01", -2683,132f, 31,84764f, 4236,593f, 0.0f, 151,9714f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1496)[5], Local_174.f_1492);
	(*&Local_174 + 1496)[6] = CREATE_POINT_IN_LAYOUT(Local_174, "Gangster02Tele01", -2688.0f, 31,89293f, 4235,678f, 0.0f, 161,0773f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1496)[6], Local_174.f_1492);
	(*&Local_174 + 1496)[7] = CREATE_POINT_IN_LAYOUT(Local_174, "Gangster03Tele01", -2707,69f, 32,02146f, 4242,409f, 0.0f, 209,4196f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1496)[7], Local_174.f_1492);
	Local_174.f_1532 = CREATE_OBJECTSET_IN_LAYOUT("Teleport02Set", Local_174, 8, 0);
	(*&Local_174 + 1536)[0] = CREATE_POINT_IN_LAYOUT(Local_174, "PlayerTele02", -2694,579f, 31,37043f, 4251,944f, 0.0f, 0,0001899195f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1536)[0], Local_174.f_1532);
	(*&Local_174 + 1536)[1] = CREATE_POINT_IN_LAYOUT(Local_174, "CompanionTele02", -2699,034f, 31,34783f, 4256,151f, -0,4184313f, -17,1152f, 0,1653187f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1536)[1], Local_174.f_1532);
	Local_174.f_1548 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_174, 8, 0);
	(*&Local_174 + 1552)[0] = CREATE_POINT_IN_LAYOUT(Local_174, "PlayerStart03", -2695,386f, 31,12f, 4271,347f, 0.0f, 10.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1552)[0], Local_174.f_1548);
	(*&Local_174 + 1552)[1] = CREATE_POINT_IN_LAYOUT(Local_174, "CompanionStart03", -2689,853f, 31,14591f, 4274,797f, 0.0f, 30.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1552)[1], Local_174.f_1548);
	(*&Local_174 + 1552)[2] = CREATE_POINT_IN_LAYOUT(Local_174, "StrangerStart03", -2696,949f, 31,15279f, 4262,484f, 0.0f, 190.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1552)[2], Local_174.f_1548);
	(*&Local_174 + 1552)[3] = CREATE_POINT_IN_LAYOUT(Local_174, "ManoloStart03", -2685,863f, 31,35864f, 4246,138f, 0.0f, 159,4523f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1552)[3], Local_174.f_1548);
	(*&Local_174 + 1552)[4] = CREATE_POINT_IN_LAYOUT(Local_174, "Gangster01Start03", -2680,471f, 31,36298f, 4246,871f, 0,4373209f, 148,8294f, 0,3167791f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1552)[4], Local_174.f_1548);
	(*&Local_174 + 1552)[5] = CREATE_POINT_IN_LAYOUT(Local_174, "Gangster02Start03", -2676,591f, 31,38165f, 4250,195f, 0,4999467f, 138,4564f, 0,4219877f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1552)[5], Local_174.f_1548);
	(*&Local_174 + 1552)[6] = CREATE_POINT_IN_LAYOUT(Local_174, "Gangster03Start03", -2674,805f, 31,47307f, 4254,745f, 0,5733971f, 130,7364f, 0,5249043f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1552)[6], Local_174.f_1548);
	(*&Local_174 + 1552)[7] = CREATE_POINT_IN_LAYOUT(Local_174, "HostageStart03", -2697,122f, 31,19405f, 4261,499f, 0.0f, 190.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1552)[7], Local_174.f_1548);
	Local_174.f_1588 = CREATE_OBJECTSET_IN_LAYOUT("Teleport03Set", Local_174, 8, 0);
	(*&Local_174 + 1592)[0] = CREATE_POINT_IN_LAYOUT(Local_174, "PlayerTele03", -2695,386f, 31,12f, 4271,347f, 0.0f, 10.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1592)[0], Local_174.f_1588);
	(*&Local_174 + 1592)[1] = CREATE_POINT_IN_LAYOUT(Local_174, "CompanionTele03", -2689,853f, 31,14591f, 4274,797f, 0.0f, 30.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1592)[1], Local_174.f_1588);
	(*&Local_174 + 1592)[2] = CREATE_POINT_IN_LAYOUT(Local_174, "ManoloTele03", -2685,863f, 31,35864f, 4246,138f, 0.0f, 159,4523f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1592)[2], Local_174.f_1588);
	(*&Local_174 + 1592)[3] = CREATE_POINT_IN_LAYOUT(Local_174, "Gangster01Tele03", -2680,471f, 31,36298f, 4246,871f, 0,4373209f, 148,8294f, 0,3167791f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1592)[3], Local_174.f_1588);
	(*&Local_174 + 1592)[4] = CREATE_POINT_IN_LAYOUT(Local_174, "Gangster02Tele03", -2676,591f, 31,38165f, 4250,195f, 0,4999467f, 138,4564f, 0,4219877f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1592)[4], Local_174.f_1588);
	(*&Local_174 + 1592)[5] = CREATE_POINT_IN_LAYOUT(Local_174, "Gangster03Tele03", -2674,805f, 31,47307f, 4254,745f, 0,5733971f, 130,7364f, 0,5249043f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1592)[5], Local_174.f_1588);
	(*&Local_174 + 1592)[6] = CREATE_POINT_IN_LAYOUT(Local_174, "HostageTele03", -2697,122f, 31,19405f, 4261,499f, 0.0f, 190.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1592)[6], Local_174.f_1588);
	Local_174.f_1624 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_174, 8, 0);
	(*&Local_174 + 1628)[0] = CREATE_POINT_IN_LAYOUT(Local_174, "PlayerStart04", -2698,169f, 31,36066f, 4253,568f, 0.0f, 234,9105f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1628)[0], Local_174.f_1624);
	(*&Local_174 + 1628)[1] = CREATE_POINT_IN_LAYOUT(Local_174, "CompanionStart04", -2696,41f, 31,37064f, 4255,568f, 0.0f, 41,40631f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1628)[1], Local_174.f_1624);
	Local_174.f_1640 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_174, 8, 0);
	(*&Local_174 + 1644)[0] = CREATE_POINT_IN_LAYOUT(Local_174, "PlayerEndLast", -2696,337f, 31,38086f, 4254,359f, 0.0f, 361,7596f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1644)[0], Local_174.f_1640);
	(*&Local_174 + 1644)[1] = CREATE_POINT_IN_LAYOUT(Local_174, "CompanionEndLast", -2697,823f, 31,12157f, 4276f, 0.0f, 361,7596f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1644)[1], Local_174.f_1640);
	Local_174.f_1656 = CREATE_OBJECTSET_IN_LAYOUT("ActionFlagSet", Local_174, 8, 0);
	(*&Local_174 + 1660)[0] = CREATE_POINT_IN_LAYOUT(Local_174, "ChuparosaFlag", -2699,672f, 31,38086f, 4252f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1660)[0], Local_174.f_1656);
	(*&Local_174 + 1660)[1] = CREATE_POINT_IN_LAYOUT(Local_174, "DuelFlag", -2694,579f, 31,37043f, 4251,944f, 0.0f, 0,0001899195f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1660)[1], Local_174.f_1656);
	(*&Local_174 + 1660)[2] = CREATE_POINT_IN_LAYOUT(Local_174, "HostageHideFlag", -2709,394f, 32,89307f, 4270,156f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1660)[2], Local_174.f_1656);
	(*&Local_174 + 1660)[3] = CREATE_POINT_IN_LAYOUT(Local_174, "MullerCorpseFlag", -2694,579f, 31,6039f, 4241,944f, 0.0f, -179,9998f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1660)[3], Local_174.f_1656);
	(*&Local_174 + 1660)[4] = CREATE_POINT_IN_LAYOUT(Local_174, "Patron01TableFlag", -2701,105f, 31,15482f, 4274,685f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1660)[4], Local_174.f_1656);
	(*&Local_174 + 1660)[5] = CREATE_POINT_IN_LAYOUT(Local_174, "PlayerHorseHitchFlag", -2707,075f, 32,13573f, 4240,131f, 0.0f, 31,08093f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1660)[5], Local_174.f_1656);
	(*&Local_174 + 1660)[6] = CREATE_POINT_IN_LAYOUT(Local_174, "PokerGringosFlag", -2701,132f, 31,15079f, 4278,109f, 0.0f, -262,5067f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1660)[6], Local_174.f_1656);
	(*&Local_174 + 1660)[7] = CREATE_POINT_IN_LAYOUT(Local_174, "StrangerCorpseFlag", -2696,949f, 31,15279f, 4262,484f, 0.0f, 190.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1660)[7], Local_174.f_1656);
	Local_174.f_1696 = CREATE_OBJECTSET_IN_LAYOUT("TriggerFlagSet", Local_174, 8, 0);
	(*&Local_174 + 1700)[0] = CREATE_POINT_IN_LAYOUT(Local_174, "DuelGatewayFlag", -2694,579f, 31,37043f, 4251,944f, 0.0f, 0,0001899195f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1700)[0], Local_174.f_1696);
	(*&Local_174 + 1700)[1] = CREATE_POINT_IN_LAYOUT(Local_174, "DrinkGatewayFlag", -2695,212f, 31,12f, 4272,361f, 0.0f, 180.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1700)[1], Local_174.f_1696);
	Local_174.f_1712 = CREATE_OBJECTSET_IN_LAYOUT("PokerGringoFlagSet", Local_174, 8, 0);
	(*&Local_174 + 1716)[0] = CREATE_POINT_IN_LAYOUT(Local_174, "LandonPokerGringoFlag", -2701,461f, 31,15759f, 4278,555f, 0.0f, 300,873f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1716)[0], Local_174.f_1712);
	(*&Local_174 + 1716)[1] = CREATE_POINT_IN_LAYOUT(Local_174, "ManoloPokerGringoFlag", -2701,365f, 31,15759f, 4277,564f, 0.0f, 184,8303f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1716)[1], Local_174.f_1712);
	(*&Local_174 + 1716)[2] = CREATE_POINT_IN_LAYOUT(Local_174, "MullerPokerGringoFlag", -2700,789f, 31,15759f, 4277,605f, 0.0f, 121,9985f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1716)[2], Local_174.f_1712);
	(*&Local_174 + 1716)[3] = CREATE_POINT_IN_LAYOUT(Local_174, "StrangerPokerGringoFlag", -2701,706f, 31,15759f, 4278,032f, 0.0f, 240,1491f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1716)[3], Local_174.f_1712);
	Local_174.f_1736 = CREATE_OBJECTSET_IN_LAYOUT("ChairFlagSet", Local_174, 8, 0);
	(*&Local_174 + 1740)[0] = CREATE_POINT_IN_LAYOUT(Local_174, "DeleteChairFlag01", -2701,509f, 31,15702f, 4274,327f, 0.0f, 211,1308f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1740)[0], Local_174.f_1736);
	(*&Local_174 + 1740)[1] = CREATE_POINT_IN_LAYOUT(Local_174, "Patron01ChairStart01", -2700,989f, 31,17f, 4275,231f, 0.0f, 165,386f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1740)[1], Local_174.f_1736);
	(*&Local_174 + 1740)[2] = CREATE_POINT_IN_LAYOUT(Local_174, "Patron02ChairStart01", -2701,675f, 31,17f, 4274,666f, 0.0f, 66,14f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1740)[2], Local_174.f_1736);
	(*&Local_174 + 1740)[3] = CREATE_POINT_IN_LAYOUT(Local_174, "ManoloChairStart02", -2701,29f, 31,18f, 4277,14f, 0.0f, 11,06f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1740)[3], Local_174.f_1736);
	(*&Local_174 + 1740)[4] = CREATE_POINT_IN_LAYOUT(Local_174, "MullerChairStart02", -2700,37f, 31,18f, 4277,49f, 0.0f, -57,74f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1740)[4], Local_174.f_1736);
	(*&Local_174 + 1740)[5] = CREATE_POINT_IN_LAYOUT(Local_174, "MullerChairEnd02", -2700,04f, 31,18f, 4276,77f, 0.0f, -83,51f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1740)[5], Local_174.f_1736);
	(*&Local_174 + 1740)[6] = CREATE_POINT_IN_LAYOUT(Local_174, "PlayerChairStart02", -2700,2f, 31,18f, 4278,54f, 0.0f, -46.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1740)[6], Local_174.f_1736);
	(*&Local_174 + 1740)[7] = CREATE_POINT_IN_LAYOUT(Local_174, "PlayerChairEnd02", -2699,45f, 31,76f, 4279,14f, 0.0f, -50,47f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1740)[7], Local_174.f_1736);
	(*&Local_174 + 1740)[8] = CREATE_POINT_IN_LAYOUT(Local_174, "StrangerChairStart02", -2702,13f, 31,18f, 4277,84f, 0.0f, 62,34f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1740)[8], Local_174.f_1736);
	(*&Local_174 + 1740)[9] = CREATE_POINT_IN_LAYOUT(Local_174, "StrangerChairEnd02", -2702,95f, 31,19f, 4277,37f, 0.0f, 84,15f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1740)[9], Local_174.f_1736);
	(*&Local_174 + 1740)[10] = CREATE_POINT_IN_LAYOUT(Local_174, "LandonChairStart02", -2701,83f, 31,18f, 4279,01f, 0.0f, 69.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_174 + 1740)[10], Local_174.f_1736);
}

void Function_621(int iParam0, int iParam1) //Position: 0x19F2D / 106285
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

bool Function_622() //Position: 0x19F76 / 106358
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_623())
		{
			return 0;
		}
		if (!Function_350(&iLocal_636))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_623() //Position: 0x19F99 / 106393
{
	Function_624(&Local_174 + 4, "p_gen_chair06x", 0, 0);
	Function_624(&Local_174 + 4, "p_gen_chair08x", 0, 0);
	if (Function_350(&Local_174 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_624(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x19FE2 / 106466
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_625(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_353(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_625(var uParam0, int iParam1, int iParam2) //Position: 0x1A01A / 106522
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_173(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_353(uParam0[iVar03], 4);
			return iVar0;
		}
		if (StackVal && iParam1 != (*uParam0)[iVar03] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_626() //Position: 0x1A0DE / 106718
{
	switch (bLocal_675)
	{
		case 0x00000063:
			Function_322(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
			Function_629(1);
			Function_628(1);
			Function_627(1);
			ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_680, false);
			return 1;
			break;
		
		default:
			LOG_ERROR("GUN05_CUTSCENE_CUSTOM_COMPLETE: Invalid stage!");
			return 1;
			break;
	}
	return 0;
}

void Function_627(bool bParam0) //Position: 0x1A151 / 106833
{
	if (IS_ACTOR_ALIVE((*&Local_174 + 1180)[02]))
	{
		SET_DRAW_ACTOR((*&Local_174 + 1180)[02], bParam0);
	}
	if (IS_ACTOR_ALIVE((*&Local_174 + 1180)[12]))
	{
		SET_DRAW_ACTOR((*&Local_174 + 1180)[12], bParam0);
	}
	return;
}

void Function_628(bool bParam0) //Position: 0x1A18D / 106893
{
	if (IS_ACTOR_ALIVE(bLocal_680))
	{
		SET_DRAW_ACTOR(bLocal_680, bParam0);
	}
	if (IS_ACTOR_ALIVE(bLocal_682))
	{
		SET_DRAW_ACTOR(bLocal_682, bParam0);
	}
	if (IS_ACTOR_ALIVE(bLocal_684))
	{
		SET_DRAW_ACTOR(bLocal_684, bParam0);
	}
	if (IS_ACTOR_ALIVE(bLocal_686))
	{
		SET_DRAW_ACTOR(bLocal_686, bParam0);
	}
	return;
}

void Function_629(int iParam0) //Position: 0x1A1D7 / 106967
{
	if (IS_OBJECT_VALID(Local_174.f_1800))
	{
		SET_DRAW_OBJECT(Local_174.f_1800, iParam0);
	}
	if (IS_OBJECT_VALID(Local_174.f_1804))
	{
		SET_DRAW_OBJECT(Local_174.f_1804, iParam0);
	}
	if (IS_OBJECT_VALID(Local_174.f_1808))
	{
		SET_DRAW_OBJECT(Local_174.f_1808, iParam0);
	}
	if (IS_OBJECT_VALID(Local_174.f_1812))
	{
		SET_DRAW_OBJECT(Local_174.f_1812, iParam0);
	}
	return;
}

int Function_630() //Position: 0x1A231 / 107057
{
	switch (bLocal_675)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(Local_174))
			{
				if (Function_622())
				{
					Function_620();
					Function_629(0);
					Function_557();
					iLocal_901 = 0;
					iLocal_1005 = 1;
				}
			}
			else if (!iLocal_901)
			{
				if (Function_550())
				{
					Function_549();
					Function_628(0);
					Function_627(0);
					iLocal_901 = 1;
				}
			}
			else if (Function_545() && Function_542(0))
			{
				iLocal_1007 = 1;
				return 1;
			}
			break;
		
		default:
			LOG_ERROR("GUN05_CUTSCENE_CUSTOM_FIRSTSHOT: Invalid stage!");
			return 1;
			break;
	}
	return 0;
}

void Function_631() //Position: 0x1A2D7 / 107223
{
	iLocal_899 = 0;
	Function_619("MEX_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
	Function_228(0);
	Function_635();
	Function_634();
	Function_633();
	Function_632();
	return;
}

void Function_632() //Position: 0x1A30C / 107276
{
	if (IS_ACTOR_ALIVE(bLocal_681))
	{
		ACCESSORIZE_HORSE(bLocal_681, 4);
		RESET_ACTOR_GAITS(bLocal_681, 0);
		Function_410(bLocal_681);
		SET_ACTOR_FACTION(bLocal_681, 20);
		SET_ACTOR_INVULNERABILITY(bLocal_681, true);
		SET_ACTOR_MAX_HEALTH(bLocal_681, 50.0f);
		SET_ACTOR_HEALTH(bLocal_681, 50.0f);
		TASK_CLEAR(bLocal_681);
		TASK_PRIORITY_SET(bLocal_681, true);
		TASK_STAND_STILL(bLocal_681, -1.0f, 0, 0);
		if (!IS_OBJECT_VALID((*&Local_174 + 1424)[3]))
		{
			TELEPORT_ACTOR_WITH_HEADING(bLocal_681, -2705,062f, 31,99542f, 4240,509f, 36,938f, 1, true, 1);
		}
		else
		{
			Function_355(bLocal_681, (*&Local_174 + 1424)[3], 1, 1, 1);
		}
	}
	else
	{
		LOG_ERROR("Failed to setup PlayerHorse properly!");
	}
	return;
}

void Function_633() //Position: 0x1A3D9 / 107481
{
	if (IS_ACTOR_ALIVE(bLocal_680))
	{
		Function_208(5, 0, 1);
		RESET_ACTOR_GAITS(bLocal_680, 0);
		Function_410(bLocal_680);
		SET_ACTOR_FACTION(bLocal_680, 20);
		AI_BEHAVIOR_SET_ALLOW(bLocal_680, 0, 0);
		SET_CRIPPLE_ENABLE(bLocal_680, 0);
		SET_ACTOR_INVULNERABILITY(bLocal_680, true);
		SET_ACTOR_MAX_HEALTH(bLocal_680, 50.0f);
		SET_ACTOR_HEALTH(bLocal_680, 50.0f);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_680, 0);
		SET_ACTOR_FACE_STYLE(bLocal_680, 2);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_680, true);
		TASK_CLEAR(bLocal_680);
		TASK_PRIORITY_SET(bLocal_680, true);
		TASK_STAND_STILL(bLocal_680, -1.0f, 0, 0);
		if (!IS_OBJECT_VALID((*&Local_174 + 1424)[1]))
		{
			TELEPORT_ACTOR_WITH_HEADING(bLocal_680, -2701,888f, 31,12157f, 4298.0f, 0.0f, 1, true, 1);
		}
		else
		{
			Function_355(bLocal_680, (*&Local_174 + 1424)[1], 1, 1, 1);
		}
	}
	else
	{
		LOG_ERROR("Failed to setup Landon properly!");
	}
	return;
}

void Function_634() //Position: 0x1A4BF / 107711
{
	SET_ACTOR_INVULNERABILITY(Global_34573, true);
	if (!IS_OBJECT_VALID((*&Local_174 + 1424)[0]))
	{
		TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2699,459f, 31,151f, 4279,011f, 61,33f, 1, true, 1);
	}
	else
	{
		Function_355(Global_34573, (*&Local_174 + 1424)[0], 1, 1, 1);
	}
	return;
}

void Function_635() //Position: 0x1A50C / 107788
{
	if (!IS_OBJECT_VALID((*&Local_174 + 1740)[0]))
	{
		vLocal_887 = { -2701,672f, 31,17f, 4274,667f };
	}
	else
	{
		GET_OBJECT_POSITION((*&Local_174 + 1740)[0], &vLocal_887);
	}
	bLocal_882 = LOCATE_PHYSINST_OF_TYPE(vLocal_887, 0,5f, "p_gen_chair08x", 1);
	if (IS_PHYSINST_VALID(bLocal_882))
	{
		bLocal_881 = GET_OBJECT_FROM_PHYSINST(bLocal_882);
		if (IS_OBJECT_VALID(bLocal_881))
		{
			DESTROY_OBJECT(bLocal_881);
		}
	}
	return;
}

void Function_636() //Position: 0x1A58A / 107914
{
	iLocal_899 = 0;
	Function_619("MEX_SONG_03", 0, 0, 4294967295, 4294967295, 3212836864, 0);
	Function_228(0);
	Function_555();
	Function_635();
	Function_634();
	Function_633();
	Function_632();
	return;
}

bool Function_637() //Position: 0x1A5C2 / 107970
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_654(0))
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_680))
		{
			bLocal_680 = Function_645(5, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!Function_644())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_681))
		{
			bLocal_681 = Function_638(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
	}
	return 1;
}

bool Function_638(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x1A624 / 108068
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_3381 || Function_262(1))
	{
		Function_643(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_644())
		{
			return "";
		}
	}
	if (!Function_641())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if ((bVar1 && uParam6) && uParam0)
	{
		Function_270(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_270(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_270(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_270(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_640(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_640(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_40() || NET_IS_IN_SESSION())
				{
					RELEASE_ACTOR(Global_12976.f_36);
					Global_12976.f_36 = "";
					CLEAR_ACTORS_HORSE(Global_34573);
				}
				else
				{
					RELEASE_ACTOR(Global_12976.f_36);
					if (!bParam7)
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_53(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_53(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
					if (IS_ACTOR_HORSE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 4);
					}
					else if (IS_ACTOR_MULE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 3);
					}
				}
			}
			else
			{
				vVar10 = { bParam2, bParam3, bParam4 };
				if (!Function_73(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_53(), bVar0, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_53(), 993, bParam2, bParam3, bParam4, 0.0f, uParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
		if (IS_ACTOR_HORSE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 4);
		}
		else if (IS_ACTOR_MULE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 9 || ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 8)
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 8);
		}
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if (bVar1)
	{
		if (bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(Global_12976.f_36, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(Global_34573);
		SET_ACTORS_HORSE(Global_34573, Global_12976.f_36);
		Function_639(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_40() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_639(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1A97C / 108924
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, bParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

var Function_640(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1A9B9 / 108985
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

bool Function_641() //Position: 0x1AA54 / 109140
{
	if (Function_642() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_642() //Position: 0x1AA6A / 109162
{
	return Global_12976.f_152;
}

void Function_643(var uParam0, bool bParam1, bool bParam2) //Position: 0x1AA75 / 109173
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_76(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_76(&Global_12976 + 36 + 20, 64);
	}
	return;
}

bool Function_644() //Position: 0x1AAA2 / 109218
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

bool Function_645(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x1AAC2 / 109250
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: **WARNING** you are stealing COMPANION_DUMMY!");
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: CompanionsList out of bounds.");
		return "";
	}
	uParam2 = uParam2;
	if (((iParam0 != 12 || iParam0 != 11) || iParam0 != 13) || iParam0 != 14)
	{
		if (!Function_159(&(Global_29008[Global_30621[3]]), 4))
		{
			return "";
		}
		if (!IS_PERS_CHAR_VALID(Global_8492[iParam014]))
		{
			if (iParam0 == 12)
			{
			}
			else if (iParam0 == 11)
			{
			}
			else if (iParam0 == 13)
			{
			}
			else if (iParam0 == 14)
			{
			}
			return "";
		}
	}
	if (!Global_8492[iParam014].f_16)
	{
		Global_8492[iParam014].f_16 = 1;
		STREAMING_REQUEST_ACTOR(StackVal, true, false);
		return "";
	}
	if (!STREAMING_IS_ACTOR_LOADED(StackVal, 4294967295))
	{
		return "";
	}
	if (bParam1)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: bCreateMounted option has been discontinued. Please set this as FALSE!");
	}
	if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
	{
		bVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "Persistent_Char_Brain");
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar2), "ScriptStructure", "stolen_flag", 1);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(Global_8492[iParam014]);
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(Global_8492[iParam014], 1);
		Function_208(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_653(StackVal, uParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_648(StackVal, uParam7);
		}
		if (!IS_ACTOR_VALID(bVar1))
		{
			vVar3.x = uParam3;
			vVar3.y = uParam4;
			vVar3.z = uParam5;
			if (Function_73(StackVal, StackVal, vVar3))
			{
				iVar6 = 0;
				while (iVar6 <= Global_3422)
				{
					if (IS_SCRIPT_VALID(Global_3422[iVar640].f_108))
					{
						vVar3 = { StackVal, StackVal, *(&Global_3422[iVar640] + 52) };
					}
					iVar6++;
				}
			}
			bVar1 = CREATE_ACTOR_IN_LAYOUT(StackVal, Global_8492[iParam014].f_12, &Global_8492[iParam014] + 20, vVar3, 0.0f, 0.0f, 0.0f);
		}
	}
	if (IS_ACTOR_VALID(bVar1))
	{
		REFERENCE_ACTOR(bVar1);
		TASK_CLEAR(bVar1);
		TASK_PRIORITY_SET(bVar1, true);
		MAKE_ACTOR_READY_FOR_ACTION(bVar1, 1);
		SET_ACTOR_UPDATE_PRIORITY(bVar1, false);
		Function_647(bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
		{
			DECOR_SET_INT(Global_8492[iParam014], "ambientFaction", GET_ACTOR_FACTION(bVar1));
		}
		SET_ACTOR_FACTION(bVar1, 20);
		MEMORY_CONSIDER_AS(bVar1, Global_34573, false);
		SET_ACTOR_ALLOW_DISARM(bVar1, false);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar1, 1);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar1, 8, "FASTWALK");
		if (IS_ACTOR_HOGTIED(bVar1))
		{
			FREE_FROM_HOGTIE(bVar1);
		}
		if (iParam0 == 2)
		{
			RESET_ANIM_SET_FOR_ACTOR(bVar1, 0);
			SET_ANIM_SET_FOR_ACTOR(bVar1, "merchant_veh", 0);
		}
		if (iParam0 == 4)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bVar1, 20, true);
		}
		if (iParam0 != 2 || iParam0 != 9)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, 8, 0.0f);
		}
		UNK_0x99AFD2D1(bVar1, 1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 13, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 14, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 64, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 65, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 66, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 67, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 68, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 46, 0);
		LIMIT_BLOOD_ON_ACTOR(bVar1, 3);
		SET_ACTOR_IS_COMPANION(bVar1, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar1, false);
		SET_ACTOR_IS_AMBIENT(bVar1, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar1, false);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar1, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar1, false);
		Function_646(bVar1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 111, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 112, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 30, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(bVar1, 31, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(bVar1, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(bVar1, 1);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bVar1, 1);
		if (DECOR_CHECK_EXIST(bVar1, "hidden"))
		{
			DECOR_REMOVE(bVar1, "hidden");
		}
		SET_DRAW_ACTOR(bVar1, true);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar1, 1);
		Global_8492[iParam014].f_4 = bVar1;
		return bVar1;
	}
	return "";
}

void Function_646(bool bParam0, bool bParam1) //Position: 0x1AFAC / 110508
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_647(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x1AFCC / 110540
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_CRIPPLE_ENABLE(bParam0, iParam4);
		SET_ACTOR_ALLOW_DISARM(bParam0, bParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "CanBeLasso", bParam3);
		if (IS_ACTOR_RIDING(bParam0))
		{
			bVar0 = GET_MOUNT(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				SET_ALLOW_JACK(bVar0, iParam2);
			}
		}
	}
}

bool Function_648(int iParam0, bool bParam1) //Position: 0x1B020 / 110624
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_652(iParam0))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		return "";
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_16516))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_16516);
		if (IS_OBJECT_VALID(bVar1))
		{
			if (GET_OBJECT_TYPE(bVar1) != 15 || GET_OBJECT_TYPE(bVar1) != 24)
			{
				bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (GET_ACTOR_ENUM(bVar2) == iParam0)
					{
						Function_649(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_649(bool bParam0, bool bParam1) //Position: 0x1B0A0 / 110752
{
	Function_651(bParam0);
	Function_650(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_650(bool bParam0) //Position: 0x1B0C6 / 110790
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_651(bool bParam0) //Position: 0x1B0EA / 110826
{
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_options");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorroam_lockon");
	return;
}

bool Function_652(int iParam0) //Position: 0x1B1B9 / 111033
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_653(int iParam0, bool bParam1) //Position: 0x1B1D0 / 111056
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(bVar0, GET_GC_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (GET_OBJECT_TYPE(bVar1) != 15 || GET_OBJECT_TYPE(bVar1) != 24)
		{
			bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
			if (IS_ACTOR_VALID(bVar2))
			{
				if (GET_ACTOR_ENUM(bVar2) == iParam0)
				{
					if (IS_LAYOUTREF_VALID(bParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(bVar1, bParam1);
					}
					DESTROY_ITERATOR(bVar0);
					LOG_ERROR("found actor in GC!");
					return bVar2;
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return "";
}

bool Function_654(bool bParam0) //Position: 0x1B263 / 111203
{
	if (!Global_3366)
	{
		return 0;
	}
	if (HUD_IS_FADED())
	{
		if (!bParam0)
		{
			if (!MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1))
			{
				return 0;
			}
		}
	}
	return 1;
	return 1;
}

void Function_655(bool bParam0) //Position: 0x1B291 / 111249
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (IS_VOLUME_VALID(bParam0))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT("TempObjectSetForActors", Global_6288, 4294967295, 0);
		if (IS_OBJECTSET_VALID(bVar1))
		{
			LOCATE_ACTORS_IN_VOLUME(bParam0, bVar1, 0, 1);
			bVar0 = false;
			while (bVar0 < (GET_OBJECTSET_SIZE(bVar1) - 1))
			{
				bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bVar1);
				if (IS_OBJECT_VALID(bVar2))
				{
					bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (bVar3 != GET_PLAYER_ACTOR(0))
						{
							DESTROY_ACTOR(bVar3);
						}
					}
				}
				bVar0++;
			}
			DESTROY_OBJECTSET(bVar1);
		}
	}
	return;
}

void Function_656() //Position: 0x1B32E / 111406
{
	Function_624(&iLocal_636, "Gun05", 10, 0);
	Function_624(&bLocal_640, "$/content/scripting/gringo/simplegringo/mex_drunk_sittable", 1, 0);
	Function_624(&bLocal_640, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_624(&bLocal_647, "stand_spit", 5, 0);
	Function_624(&bLocal_647, "custom/stand_spit", 8, 0);
	Function_624(&bLocal_654, "dead_ground_male", 5, 0);
	Function_624(&bLocal_654, "custom/dead_ground_male", 8, 0);
	return;
}

void Function_657(int iParam0, bool bParam1) //Position: 0x1B443 / 111683
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_664(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_317(iParam0))
	{
		Global_34165.f_56 = 0;
		Global_34165.f_48 = 99;
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_30842[2] = 1;
	cVar0 = Function_13(*iParam0);
	Var1 = { StackVal, StackVal, StackVal, *(&Global_3422[cVar040] + 12) };
	if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_22(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_317(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_663();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_226();
	Function_225();
	Function_263("");
	Function_662(0);
	Function_661();
	Function_194();
	Function_193();
	ENABLE_JOURNAL_REPLAY(0);
	Function_660();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_364(0, 0x40400000);
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	RESET_PROPS_IN_WORLD();
	if (bParam1)
	{
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAN_CACHE_ENTRIES();
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(1);
	SET_ACTOR_FACTION(Global_34573, 2);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	Function_659(13);
	Function_659(14);
	Function_659(25);
	Function_659(24);
	Function_659(12);
	Function_659(27);
	Function_659(26);
	Function_659(15);
	Function_658();
	switch (cVar0)
	{
		case 0x0000000C:
		case 0x00000036:
			strcpy(&cVar5, "Alwyn Roberts", 24);
			break;
		
		case 0x00000027:
			strcpy(&cVar5, "Andrew Minghella", 24);
			break;
		
		case 0x00000005:
		case 0x00000007:
		case 0x0000001D:
		case 0x00000031:
		case 0x00000037:
			strcpy(&cVar5, "Chris Berg", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
			strcpy(&cVar5, "Conor McGuire", 24);
			break;
		
		case 0x00000003:
		case 0x00000011:
		case 0x0000000F:
		case 0x00000012:
		case 0x0000001C:
		case 0x00000022:
		case 0x00000023:
		case 0x00000030:
			strcpy(&cVar5, "Danny Bulla", 24);
			break;
		
		case 0x00000017:
		case 0x00000015:
		case 0x0000000D:
		case 0x00000014:
		case 0x00000019:
		case 0x00000029:
		case 0x0000002F:
		case 0x00000039:
			strcpy(&cVar5, "Dave Mendelsohn", 24);
			break;
		
		case 0x0000001E:
		case 0x0000002D:
		case 0x0000002E:
			strcpy(&cVar5, "Donald Jones", 24);
			break;
		
		case 0x0000000A:
		case 0x00000009:
		case 0x0000000E:
		case 0x00000021:
			strcpy(&cVar5, "nJohn Diaz", 24);
			break;
		
		case 0x00000002:
		case 0x00000013:
		case 0x0000001F:
		case 0x00000028:
			strcpy(&cVar5, "Nick Zippmann", 24);
			break;
		
		case 0x00000016:
		case 0x00000006:
		case 0x00000038:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x0000001B:
		case 0x00000024:
		case 0x0000002C:
			strcpy(&cVar5, "Patrick Dempsey", 24);
			break;
		
		case 0x00000010:
		case 0x0000001A:
		case 0x00000020:
			strcpy(&cVar5, "Rowan Cockroft", 24);
			break;
		
		case 0x00000025:
			strcpy(&cVar5, "Sean Fitzpatrick", 24);
			break;
		
		case 0x00000001:
		case 0x00000008:
		case 0x00000018:
		case 0x00000026:
			strcpy(&cVar5, "Silas Morse", 24);
			break;
		
		case 0x00000004:
		case 0x0000000B:
			strcpy(&cVar5, "Simon Iwaniszak", 24);
			break;
		
		default:
			strcpy(&cVar5, "Unassigned Owner", 24);
			break;
	}
	Var1 = { StackVal, StackVal, StackVal, Function_12(cVar0) };
	SET_MISSION_INFO(UI_GET_STRING(&Var1), &cVar5);
	return;
}

void Function_658() //Position: 0x1B867 / 112743
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(Global_6290);
	ITERATE_IN_LAYOUT(bVar0, Global_6290);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_CHECK_EXIST(bVar1, "missioncampfireobj"))
		{
			if (IS_OBJECT_IN_OBJECTSET(bVar1, Global_16516))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar1, Global_16516);
			}
			RELEASE_OBJECT_REF(bVar1);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_659(int iParam0) //Position: 0x1B8DB / 112859
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_660() //Position: 0x1B8FB / 112891
{
	bool bVar0;
	
	bVar0 = GET_ATTACHED_HOGTIE_VICTIM(Global_34573);
	if (IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar0);
	}
	bVar0 = GET_LASSO_TARGET(Global_34573);
	if (IS_ACTOR_VALID(bVar0))
	{
		DETACH_LASSO(bVar0);
	}
	SET_PLAYER_POSTURE(0, 0, 0);
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
	return;
}

void Function_661() //Position: 0x1B938 / 112952
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_662(int iParam0) //Position: 0x1B94C / 112972
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_197())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_663() //Position: 0x1B981 / 113025
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_664(int iParam0, int iParam1) //Position: 0x1B98A / 113034
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		iVar1 = 1;
		Global_25267[iVar058].f_84 = 0;
		if (Global_25267[iVar058].f_44 == iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_25267[iVar058] != 128 || Global_25267[iVar058] != 64) && iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(Global_25267[iVar058].f_44) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(Global_25267[iVar058].f_44);
			Function_665(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_665(int iParam0) //Position: 0x1BA0C / 113164
{
	iParam0->f_92 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 4294967295;
	iParam0->f_16 = "";
	*(iParam0 + 20) = { 0.0f, 0.0f, 0.0f };
	*(iParam0 + 32) = { 0.0f, 0.0f, 0.0f };
	iParam0->f_44 = "";
	iParam0->f_56 = "";
	iParam0->f_48 = 4294967295;
	iParam0->f_52 = "";
	iParam0->f_88 = 0.0f;
	iParam0->f_76 = 0;
	return;
}

bool Function_666(int iParam0) //Position: 0x1BA5A / 113242
{
	switch (iParam0->f_16)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			break;
		
		default:
			if (*iParam0)
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			break;
	}
	if (*iParam0)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_667(iParam0, 1);
			return 1;
		}
	}
	Function_667(iParam0, 0);
	return 0;
}

void Function_667(int iParam0, bool bParam1) //Position: 0x1BAE1 / 113377
{
	if (bParam1)
	{
		*iParam0 = 0;
	}
	iParam0->f_4 = "";
	iParam0->f_8 = 4294967295;
	iParam0->f_12 = 0;
	iParam0->f_16 = 0;
	return;
}

bool Function_668(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x1BB05 / 113413
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	struct<16> Var18;
	
	if (*iParam2)
	{
		return 1;
	}
	if (!IS_ITERATOR_VALID(bParam3))
	{
		Function_667(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_687(&bParam3);
				ITERATE_IN_EVENT_TRAP(bParam3, (*uParam1)[iVar03]);
				bVar1 = START_OBJECT_ITERATOR(bParam3);
				while (IS_OBJECT_VALID(bVar1))
				{
					bVar2 = GET_EVENT_FROM_OBJECT(bVar1);
					if (IS_EVENT_VALID(bVar2))
					{
						if (StackVal && (StackVal && StackVal == 5 == 91) == 110)
						{
							bVar4 = GET_EVENT_TARGET_AS_OBJECT(bVar2);
							if (IS_OBJECT_VALID(bVar4))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(bVar4);
							}
						}
						else
						{
							bVar5 = GET_EVENT_TARGET_AS_PHYSINST(bVar2);
							if (IS_PHYSINST_VALID(bVar5))
							{
								bVar6 = GET_OBJECT_FROM_PHYSINST(bVar5);
								if (IS_OBJECT_VALID(bVar6))
								{
									if (GET_OBJECT_TYPE(bVar6) == 15)
									{
										bVar3 = GET_ACTOR_FROM_OBJECT(bVar6);
									}
								}
							}
						}
						if (IS_ACTOR_VALID(bVar3))
						{
							iVar7 = 0;
							if (StackVal == 2)
							{
								iVar7 = 1;
								bVar8 = GET_EVENT_PERPETRATOR(bVar2);
								if (IS_OBJECT_VALID(bVar8))
								{
									bVar9 = GET_ACTOR_FROM_OBJECT(bVar8);
									if (IS_ACTOR_VALID(bVar9))
									{
										if (bVar9 == Global_34573)
										{
											iVar7 = 2;
										}
										else if (bVar9 == GET_MOUNT(Global_34573))
										{
											iVar7 = 2;
										}
										else if (bVar9 != GET_VEHICLE(Global_34573) && IS_ACTOR_DRIVING_VEHICLE(Global_34573))
										{
											iVar7 = 2;
										}
									}
								}
							}
							else if (StackVal == 87)
							{
								bVar10 = false;
								bVar11 = GET_EVENT_PERPETRATOR(bVar2);
								if (IS_OBJECT_VALID(bVar11))
								{
									bVar12 = GET_ACTOR_FROM_OBJECT(bVar11);
									if (IS_ACTOR_VALID(bVar12))
									{
										if (bVar12 == GET_MOUNT(Global_34573))
										{
											bVar10 = true;
										}
									}
								}
								if (!bVar10)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
									EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
									bVar1 = "";
								}
							}
							else if (StackVal == 88)
							{
								bVar13 = false;
								bVar14 = GET_EVENT_PERPETRATOR(bVar2);
								if (IS_OBJECT_VALID(bVar14))
								{
									bVar15 = GET_ACTOR_FROM_OBJECT(bVar14);
									if (IS_ACTOR_VALID(bVar15))
									{
										if (bVar15 != GET_VEHICLE(Global_34573) && IS_ACTOR_DRIVING_VEHICLE(Global_34573))
										{
											bVar13 = true;
										}
									}
								}
								if (!bVar13)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
									EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
									bVar1 = "";
								}
							}
							if (IS_OBJECT_VALID(bVar1))
							{
								iVar16 = 0;
								while (iVar16 <= *uParam0)
								{
									if (IS_OBJECT_VALID((*uParam0)[iVar1617]))
									{
										if ((StackVal && uParam0[iVar1617]->f_40) >= 0)
										{
											if ((iVar7 != 0 || (iVar7 != 1 && Function_686(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_686(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_672(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_667(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_671(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_670(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_671(&bVar17);
														strcpy(&Var18, "", 64);
														Function_669(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_263(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_670(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
												}
											}
										}
									}
									iVar16++;
								}
							}
						}
					}
					if (IS_OBJECT_VALID(bVar1))
					{
						bVar1 = OBJECT_ITERATOR_NEXT(bParam3);
					}
				}
				EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
				EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
			}
		}
		iVar0++;
	}
	Function_667(iParam2, 0);
	return 0;
}

void Function_669(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x1BE9E / 114334
{
	memcpy(cParam0, StackVal, StackVal, StackVal, StackVal, StackVal, Param2, 16);
	switch (cParam1)
	{
		case 0x00000008:
			stradd(cParam0, "_dead", 64);
			break;
		
		case 0x00000010:
			stradd(cParam0, "_killed", 64);
			break;
		
		case 0x00000020:
			stradd(cParam0, "_toomany", 64);
			break;
		
		case 0x00000040:
			stradd(cParam0, "n_attacked", 64);
			break;
		
		case 0x00000080:
			stradd(cParam0, "_horse_dead", 64);
			break;
		
		case 0x00000100:
			stradd(cParam0, "_horse_killed", 64);
			break;
		
		case 0x00000200:
			stradd(cParam0, "_horse_toomany", 64);
			break;
		
		case 0x00000400:
			stradd(cParam0, "_horse_attacked", 64);
			break;
	}
}

void Function_670(var uParam0, int iParam1, bool bParam2) //Position: 0x1BF89 / 114569
{
	switch (iParam1)
	{
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			uParam0->f_12 = 1;
			break;
	}
	switch (iParam1)
	{
		case 0x00000008:
		case 0x00000080:
			Function_36(&bParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_36(&bParam2, 2);
			break;
	}
	Function_36(&bParam2, 1);
	uParam0->f_16 = bParam2;
	return;
}

void Function_671(bool bParam0) //Position: 0x1C000 / 114688
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_672(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1C022 / 114722
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(bParam2))
	{
		return 0;
	}
	switch (iParam0->f_28)
	{
		case 0x0000000F:
			bVar1 = GET_ACTOR_FROM_OBJECT(*iParam0);
			if (!IS_ACTOR_VALID(bVar1))
			{
				return 0;
			}
			return Function_683(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_676(iParam0, uParam1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000019:
			bVar3 = GET_SQUAD_FROM_OBJECT(*iParam0);
			if (!SQUAD_IS_VALID(bVar3))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(bVar3))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bVar3, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					bVar2 = Function_683(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_673(iParam0, bVar2);
					}
				}
				bVar0++;
			}
			break;
		
		case 0x00000002:
			bVar4 = GET_OBJECTSET_FROM_OBJECT(*iParam0);
			if (!IS_OBJECTSET_VALID(bVar4))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= GET_OBJECTSET_SIZE(bVar4))
			{
				bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bVar4);
				if (IS_OBJECT_VALID(bVar5))
				{
					bVar1 = GET_ACTOR_FROM_OBJECT(bVar5);
					if (IS_ACTOR_VALID(bVar1))
					{
						bVar2 = Function_683(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_673(iParam0, bVar2);
						}
					}
				}
				bVar0++;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

var Function_673(int iParam0, bool bParam1) //Position: 0x1C16C / 115052
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_153(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_675(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_674(16);
			}
		}
	}
	else if (Function_153(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_675(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_674(256);
			}
		}
	}
	return bParam1;
}

bool Function_674(int iParam0) //Position: 0x1C29F / 115359
{
	return 2 | iParam0;
}

int Function_675(int iParam0) //Position: 0x1C2A9 / 115369
{
	return 4 | iParam0;
}

int Function_676(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1C2B3 / 115379
{
	if (!IS_ACTOR_VALID(bParam2))
	{
		return 0;
	}
	if (IS_ACTOR_HUMAN(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_682(iParam0, iParam1, bParam4);
				if (Function_153(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_674(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_677(iParam0, iParam1, 0, bParam4);
				if (Function_153(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_674(16);
		}
	}
	return 0;
}

int Function_677(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1C365 / 115557
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_681(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_680(iVar0, 3, 1, bParam3))
			{
				if (!Function_686(iParam0, 8, 1))
				{
					return Function_679(64, 1024, bParam2);
				}
			}
			return Function_678(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_680(iVar0, 2, 1, bParam3))
			{
				if (!Function_686(iParam0, 32, 1))
				{
					return Function_679(64, 1024, bParam2);
				}
			}
			return Function_678(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_680(iVar0, 1, 1, bParam3))
			{
				if (!Function_686(iParam0, 64, 1))
				{
					return Function_679(64, 1024, bParam2);
				}
			}
			return Function_678(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_680(iVar0, 3, 1, bParam3))
			{
				if (!Function_686(iParam0, 128, 1))
				{
					return Function_679(64, 1024, bParam2);
				}
			}
			return Function_678(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_680(iVar0, 1, 1, bParam3))
			{
				if (!Function_686(iParam0, 1024, 1))
				{
					return Function_679(64, 1024, bParam2);
				}
			}
			return Function_678(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_680(iVar0, 1, 1, bParam3))
			{
				if (!Function_686(iParam0, 1024, 1))
				{
					return Function_679(64, 1024, bParam2);
				}
			}
			return Function_678(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_678(int iParam0, int iParam1, bool bParam2) //Position: 0x1C51F / 115999
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_679(int iParam0, int iParam1, bool bParam2) //Position: 0x1C534 / 116020
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_680(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1C549 / 116041
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_681(int iParam0) //Position: 0x1C566 / 116070
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = GET_CURRENT_GAME_TIME();
	fVar4 = fVar3;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((fVar3 - 10.0f) > (*iParam0 + 44)[iVar0])
		{
			iVar2++;
		}
		if ((*iParam0 + 44)[iVar0] > fVar4)
		{
			fVar4 = (*iParam0 + 44)[iVar0];
			iVar1 = iVar0;
		}
		iVar0++;
	}
	(*iParam0 + 44)[iVar1] = fVar3;
	if (iVar2 <= 5)
	{
		iVar2++;
	}
	return iVar2;
}

int Function_682(var uParam0, int iParam1, bool bParam2) //Position: 0x1C5D5 / 116181
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_681(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_680(iVar0, 3, 1, bParam2))
			{
				if (!Function_686(uParam0, 8, 1))
				{
					return Function_675(64);
				}
			}
			return Function_674(64);
			break;
		
		case 0x00000009:
			if (Function_680(iVar0, 3, 1, bParam2))
			{
				if (!Function_686(uParam0, 8, 1))
				{
					return Function_675(64);
				}
			}
			return Function_674(64);
			break;
		
		case 0x0000006E:
			if (Function_680(iVar0, 2, 1, bParam2))
			{
				if (!Function_686(uParam0, 16, 1))
				{
					return Function_675(64);
				}
			}
			return Function_674(64);
			break;
		
		case 0x0000005B:
			if (Function_680(iVar0, 2, 1, bParam2))
			{
				if (!Function_686(uParam0, 32, 1))
				{
					return Function_675(64);
				}
			}
			return Function_674(64);
			break;
		
		case 0x00000031:
			if (Function_680(iVar0, 1, 1, bParam2))
			{
				if (!Function_686(uParam0, 64, 1))
				{
					return Function_675(64);
				}
			}
			return Function_674(64);
			break;
		
		case 0x00000007:
			if (Function_680(iVar0, 3, 1, bParam2))
			{
				if (!Function_686(uParam0, 128, 1))
				{
					return Function_675(64);
				}
			}
			return Function_674(64);
			break;
		
		case 0x00000008:
			if (Function_680(iVar0, 2, 1, bParam2))
			{
				if (!Function_686(uParam0, 256, 1))
				{
					return Function_675(64);
				}
			}
			return Function_674(64);
			break;
		
		case 0x00000014:
			if (Function_680(iVar0, 1, 1, bParam2))
			{
				if (!Function_686(uParam0, 512, 1))
				{
					return Function_675(64);
				}
			}
			return Function_674(64);
			break;
		
		case 0x00000018:
			if (Function_680(iVar0, 1, 1, bParam2))
			{
				if (!Function_686(uParam0, 512, 1))
				{
					return Function_675(64);
				}
			}
			return Function_674(64);
			break;
		
		case 0x00000057:
			if (Function_680(iVar0, 1, 1, bParam2))
			{
				if (!Function_686(uParam0, 1024, 1))
				{
					return Function_675(64);
				}
			}
			return Function_674(64);
			break;
		
		case 0x00000058:
			if (Function_680(iVar0, 1, 1, bParam2))
			{
				if (!Function_686(uParam0, 1024, 1))
				{
					return Function_675(64);
				}
			}
			return Function_674(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_683(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x1C7F0 / 116720
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	bVar0 = false;
	if (bParam2 == bParam3)
	{
		bVar0 = true;
	}
	switch (iParam0->f_32)
	{
		case 0x00000002:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(bParam3))
					{
						return Function_682(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_686(iParam0, 2, 1))
					{
						return Function_675(8);
					}
					return Function_674(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_686(iParam0, 4, 1))
					{
						return Function_675(16);
					}
					return Function_674(16);
				}
			}
			if (iParam0->f_36)
			{
				if (GET_MOST_RECENT_MOUNT(bParam2) == bParam3)
				{
					if (iParam4 == 0)
					{
						if (IS_ACTOR_ALIVE(bParam3))
						{
							return Function_677(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_686(iParam0, 2, 1))
						{
							return Function_675(128);
						}
						return Function_674(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_686(iParam0, 4, 1))
						{
							return Function_675(256);
						}
						return Function_674(256);
					}
				}
			}
			break;
		
		case 0x00000001:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(bParam3))
					{
						return Function_677(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_686(iParam0, 2, 1))
					{
						return Function_675(8);
					}
					return Function_674(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_686(iParam0, 4, 1))
					{
						return Function_675(16);
					}
					return Function_674(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_685(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_686(iParam0, 2, 1))
					{
						return Function_675(8);
					}
					return Function_674(8);
				}
				if (!Function_686(iParam0, 4, 1))
				{
					return Function_675(16);
				}
				return Function_674(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_677(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_684(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_674(128);
							}
							if (!Function_686(iParam0, 2, 1))
							{
								return Function_675(8);
							}
							return Function_674(8);
						}
						if (iParam4 == 2)
						{
							if (Function_684(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_674(256);
							}
							if (!Function_686(iParam0, 4, 1))
							{
								return Function_675(16);
							}
							return Function_674(16);
						}
					}
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool Function_684(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1CAAF / 117423
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(bParam0) <= 1)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(bParam0) <= iParam1)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(bParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 2)
			{
				if (bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= 3)
		{
			if (bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(bParam0) <= iParam3)
	{
		if (bParam2)
		{
		}
		return 0;
	}
	return 1;
}

int Function_685(int iParam0, var uParam1, bool bParam2) //Position: 0x1CB68 / 117608
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_681(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_680(iVar0, 2, 1, bParam2))
			{
				if (!Function_686(iParam0, 16, 1))
				{
					return Function_675(64);
				}
			}
			return Function_674(64);
			break;
		
		case 0x0000005B:
			if (Function_680(iVar0, 2, 1, bParam2))
			{
				if (!Function_686(iParam0, 32, 1))
				{
					return Function_675(64);
				}
			}
			return Function_674(64);
			break;
		
		case 0x00000057:
			if (Function_680(iVar0, 1, 1, bParam2))
			{
				if (!Function_686(iParam0, 1024, 1))
				{
					return Function_675(64);
				}
			}
			return Function_674(64);
			break;
		
		case 0x00000058:
			if (Function_680(iVar0, 1, 1, bParam2))
			{
				if (!Function_686(iParam0, 1024, 1))
				{
					return Function_675(64);
				}
			}
			return Function_674(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_686(int iParam0, bool bParam1, bool bParam2) //Position: 0x1CC7C / 117884
{
	if (bParam2)
	{
		if (!Function_153(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_153(iParam0->f_40, bParam1);
}

int Function_687(int iParam0) //Position: 0x1CCA4 / 117924
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_53());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_53());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_688(bool bParam0) //Position: 0x1CCD5 / 117973
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_689(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x1CCF3 / 118003
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam8 = uParam8;
	if (Function_40())
	{
		*uParam9 = 1;
		*uParam10 = 0;
		*iParam11 = 0;
	}
	if (((Global_3381 && Global_63096) && !HUD_IS_FADED()) && iParam7 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

