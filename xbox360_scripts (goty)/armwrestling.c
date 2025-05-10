//Decompiled with MagicRDR v1.0
//Function Count : 291
//Statics Count : 229
//Natives Count : 386
//Parameters Count : 17

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	bool bLocal_3 = false;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	float fLocal_7 = 0.0f;
	int iLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	bool bLocal_17 = false;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	bool bLocal_22 = false;
	var uLocal_23 = 1;
	var uLocal_24 = 0;
	bool bLocal_25 = false;
	float fLocal_26 = 0.0f;
	bool bLocal_27 = false;
	float fLocal_28 = 0.0f;
	float fLocal_29 = 0.0f;
	bool bLocal_30 = false;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	bool bLocal_43 = false;
	float fLocal_44 = 0.0f;
	bool bLocal_45 = false;
	float fLocal_46 = 0.0f;
	bool bLocal_47 = false;
	bool bLocal_48 = false;
	struct<17> Local_49 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_66 = 0.0f;
	float fLocal_67 = 0.0f;
	bool bLocal_68 = false;
	float fLocal_69 = 0.0f;
	int iLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	struct<37> Local_73 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
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
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 2;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	bool bLocal_201 = true;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	int iLocal_211 = 0;
	struct<17> ScriptParam_0 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_4 = 31;
	iLocal_5 = 33;
	iLocal_6 = 1;
	fLocal_7 = 2.0f;
	iLocal_8 = 1000;
	iLocal_21 = 1;
	bLocal_22 = 2;
	fLocal_44 = 0.2f;
	bLocal_45 = 0.0f;
	fLocal_46 = 1.0f;
	bLocal_48 = false;
	fLocal_66 = -0.5f;
	fLocal_67 = -0.25f;
	iLocal_211 = 4294967295;
	Local_49 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_273();
	while (Function_217())
	{
		ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_49 };
		Function_193();
		WAIT(0);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x6A / 106
{
	int iVar0;
	
	DYNAMICMIXER_DETRIGGERSTATE(uLocal_20, 0);
	Function_189();
	Function_188(4, 1);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_49 + 4)[iVar0]))
		{
			DEREFERENCE_ACTOR((*&Local_49 + 4)[iVar0]);
			SET_DRAW_ACTOR((*&Local_49 + 4)[iVar0], 1);
			STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_49 + 4)[iVar0]);
		}
		iVar0++;
	}
	Function_185();
	UI_EXIT("Scorebox");
	UI_EXIT("Scorebox_Cash");
	UI_EXIT("Scorebox_Bet");
	DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[137]), "bArmWinning", 0);
	DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[137]), "bArmLosing", 0);
	DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[037]), "bArmWinning", 0);
	DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[037]), "bArmLosing", 0);
	Function_184();
	SET_ACTOR_ALLOW_BUMP_REACTIONS(GET_PLAYER_ACTOR(0), 1);
	RENDERING_ENABLE_CHARACTER_CLIPPING(1);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	CANCEL_TIME_WARP(0);
	ENABLE_PIP(0, 0, 0);
	HUD_ENABLE(1);
	SET_HUD_MAP_DRAW_ENABLED(1);
	AI_STOP_IGNORING_ACTORS();
	Function_182(1);
	Function_181(1);
	ACTOR_DISMOUNT_NOW(GET_PLAYER_ACTOR(0));
	Function_176();
	Function_175();
	RELEASE_LAYOUT_REF(bLocal_25);
	if (iLocal_2)
	{
		Function_26(Local_49, 1, 1, 1, 0);
	}
	else if (bLocal_3)
	{
		Function_22(Local_49);
	}
	else
	{
		Function_2(Local_49);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_30);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_30);
	if (!ARE_USE_CONTEXTS_ENABLED())
	{
		ENABLE_USE_CONTEXTS(1);
	}
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x1F5 / 501
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x216 / 534
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x231 / 561
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x252 / 594
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x268 / 616
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	Function_7(iParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x304 / 772
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x325 / 805
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

void Function_9() //Position: 0x36B / 875
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x384 / 900
{
	int iVar0;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_11(char* cParam0, int iParam1) //Position: 0x3D7 / 983
{
	struct<4> Var0;
	
	if (!Function_20(iParam1))
	{
		return;
	}
	switch (Function_17(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_15(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_17(iParam1), Function_15(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x4FB / 1275
{
	char* cVar0[16];
	
	if (!Function_13())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_13() //Position: 0x535 / 1333
{
	if (Function_14(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, int iParam1) //Position: 0x550 / 1360
{
	return (bParam0 && iParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x55D / 1373
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x57D / 1405
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x594 / 1428
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_18() //Position: 0x5AF / 1455
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
			Function_19(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7F6 / 2038
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x81F / 2079
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (!Function_21(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_21(int iParam0) //Position: 0x843 / 2115
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x858 / 2136
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0x876 / 2166
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_20(iParam0))
	{
		return;
	}
	iVar0 = Function_17(iParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", iParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[iParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x91C / 2332
{
	char* cVar0[16];
	
	if (!Function_13())
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

struct<24> Function_25(char* cParam0) //Position: 0x95B / 2395
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xBB1 / 2993
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(iParam0) == 1)
	{
		iVar2 = Function_15(iParam0);
		Function_170(&(Global_3422[iVar240]));
		Function_169(4194304);
		if (bParam3)
		{
			Function_121(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_115(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_121(iVar2, &uVar0, 0);
		}
		bVar1 = Function_114();
		if (bParam1)
		{
			Function_98(iVar2, iParam0, bVar1);
			Function_97();
		}
	}
	Function_39(iParam0, bParam1, uParam2, bVar1);
	if (Function_17(iParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_31(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_17(iParam0) == 1)
		{
			iVar2 = Function_15(iParam0);
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
	Function_27();
}

void Function_27() //Position: 0xC9E / 3230
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_28(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_28(int iParam0, bool bParam1) //Position: 0xCCE / 3278
{
	int iVar0;
	
	iVar0 = Function_29(iParam0);
	if (!Function_16(iVar0))
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

int Function_29(int iParam0) //Position: 0xD0B / 3339
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xD25 / 3365
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xD3B / 3387
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
							Function_32(Global_34573, 0x1000000, 3, 0);
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
							Function_32(Global_34573, 0x1000000, 3, 0);
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
							Function_32(Global_34573, 0x1000000, 3, 0);
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
							Function_32(Global_34573, 0x1000000, 3, 0);
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
							Function_32(Global_34573, 0x1000000, 3, 0);
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
							Function_32(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_31(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_31(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_31(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_31(57, 0);
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

void Function_32(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1032 / 4146
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_34(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_33(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_33(char* cParam0, int iParam1) //Position: 0x109E / 4254
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

bool Function_34(bool bParam0, var uParam1, int iParam2) //Position: 0x10D5 / 4309
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
		if (Function_37(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_36(uVar0))
		{
			case 0x00000002:
				if (!Function_35(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_35(var uParam0, int iParam1) //Position: 0x114D / 4429
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x1160 / 4448
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

int Function_37(int iParam0) //Position: 0x1201 / 4609
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_38(&iVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 >= 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_38(int iParam0, int iParam1) //Position: 0x123E / 4670
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1251 / 4689
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(iParam0);
	if (!iVar0 != 1)
	{
		Global_13172[iParam011].f_12++;
		if (Function_96())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", iVar0);
		}
	}
	else
	{
		Global_6269 = Function_15(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		if (Function_96())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_96())
	{
		Function_91();
	}
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", iParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[iParam011].f_4 = 4;
		}
		else
		{
			Global_13172[iParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[iParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_85(iParam0);
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
						switch (Function_15(iParam0))
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
			Function_43(1);
			Function_41(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_40(iParam0, &Var14);
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

void Function_40(int iParam0, int iParam1) //Position: 0x14A5 / 5285
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x14DF / 5343
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_42())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

bool Function_42() //Position: 0x1521 / 5409
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_43(bool bParam0) //Position: 0x152A / 5418
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_74();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_44();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_38(&Global_63095, 1);
		Function_38(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_44() //Position: 0x157B / 5499
{
	Function_72();
	Function_71();
	Function_71();
	Function_70();
	Function_70();
	Function_69();
	Function_69();
	Function_52(0);
	Function_52(0);
	if (!Function_42())
	{
		Function_49();
		Function_48();
		Function_47();
		Function_46();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_45();
	return;
}

void Function_45() //Position: 0x15CD / 5581
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

void Function_46() //Position: 0x16D3 / 5843
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

void Function_47() //Position: 0x1706 / 5894
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_48() //Position: 0x1894 / 6292
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_49() //Position: 0x1A48 / 6728
{
	Function_50(&Global_28260, 1, 0);
	return;
}

void Function_50(int iParam0, bool bParam1, var uParam2) //Position: 0x1A56 / 6742
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_51();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || uParam2)
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
		iVar3 = 0;
		while (iVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[iVar3] = _GET_AMMO_AMOUNT(bVar0, iVar3, 0);
			iVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, bVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
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

int Function_51() //Position: 0x1C47 / 7239
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_52(int iParam0) //Position: 0x1C5C / 7260
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
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_68((50 + iVar4)) + Function_68((183 + iVar4))) + Function_68((90 + iVar4)));
				}
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
	Function_53(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_53(int iParam0, bool bParam1, bool bParam2) //Position: 0x1D02 / 7426
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
		Function_67(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_66(iParam0);
	if (bParam2)
	{
		Function_54(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_54(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1F9D / 8093
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
				iVar5 = (FLOOR(bParam2) / 60);
				if (iVar5 > 60)
				{
					iVar4 = (iVar5 / 60);
					iVar5 = (iVar5 - iVar4 * 60);
					iVar6 = FLOOR(((bParam2 - TO_FLOAT(iVar4 * 60 * 60)) - TO_FLOAT(iVar5 * 60)));
					if (iVar4 > 24)
					{
						iVar3 = (iVar4 / 24);
						iVar4 = (iVar4 - iVar3 * 24);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar3), 32);
						if (iVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (iVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (iVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (iVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					iVar6 = FLOOR((bParam2 - TO_FLOAT(iVar5 * 60)));
					if (iVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar6), 32);
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
			bParam2 = (bParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_65(390))), 32);
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
					bVar19 = (Function_64(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_64(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_62(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_59(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_56(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_55(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_55() //Position: 0x25CA / 9674
{
	int iVar0;
	
	return iVar0;
}

var Function_56(int iParam0) //Position: 0x25D2 / 9682
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_57(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x25E3 / 9699
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_58(char* cParam0, bool bParam1) //Position: 0x26D8 / 9944
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_59(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x26F1 / 9969
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_61(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_60(Function_61(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_60(int iParam0, int iParam1) //Position: 0x2756 / 10070
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_61(int iParam0, int iParam1) //Position: 0x2768 / 10088
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_62(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x277A / 10106
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
	if (((Function_63(iParam0) != 19 || Function_63(iParam0) != 17) || Function_63(iParam0) != 10) || Function_63(iParam0) != 9)
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

int Function_63(int iParam0) //Position: 0x28AA / 10410
{
	return Global_35278[iParam020].f_48;
}

float Function_64(int iParam0) //Position: 0x28B9 / 10425
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_65(int iParam0) //Position: 0x28F2 / 10482
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_66(int iParam0) //Position: 0x292F / 10543
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

int Function_67(int iParam0, bool bParam1, bool bParam2) //Position: 0x2AC9 / 10953
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
		if ((iParam0 <= 500 && iParam0 >= 586) || iParam0 != 596)
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
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

int Function_68(int iParam0) //Position: 0x2D0D / 11533
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

struct<8> Function_69() //Position: 0x2D4E / 11598
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
		iVar2 = ((Function_68((50 + iVar3) + 15) + Function_68((183 + iVar3) + 15)) + Function_68((90 + iVar3) + 15));
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
	Function_53(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_70() //Position: 0x2DD7 / 11735
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
			iVar2 = ((Function_68((50 + iVar3) + 8) + Function_68((183 + iVar3) + 8)) + Function_68((90 + iVar3) + 8));
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
	Function_53(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_71() //Position: 0x2E6E / 11886
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
		iVar2 = ((Function_68((50 + iVar3)) + Function_68((183 + iVar3))) + Function_68((90 + iVar3)));
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
	Function_53(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_72() //Position: 0x2EED / 12013
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_73(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_53(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_73(int iParam0, bool bParam1, int iParam2) //Position: 0x2F26 / 12070
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
	Function_67(iParam0, bParam1, 1);
	Function_66(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_54(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_74() //Position: 0x3130 / 12592
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_13())
	{
		Function_82(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_82(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_76(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_76(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_75(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
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

bool Function_75(vector3 vParam0) //Position: 0x31EB / 12779
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_76(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3203 / 12803
{
	int iVar0;
	
	iVar0 = Function_80(uParam2, uParam3);
	if (Function_79(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_78(&Global_63095, 1);
			Function_38(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_78(&Global_63095, 2);
			Function_38(&Global_63095, 1);
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
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_78(&Global_63095, 2);
		Function_38(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_77();
	return StackVal, StackVal, Function_77();
}

vector3 Function_77() //Position: 0x32EA / 13034
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_78(int iParam0, int iParam1) //Position: 0x32F3 / 13043
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_79(int iParam0) //Position: 0x3302 / 13058
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_80(bool bParam0, bool bParam1) //Position: 0x3318 / 13080
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
				fVar2 = Function_81(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_81(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_79(bVar0) && !bParam1)
	{
		bVar0 = Function_80(bParam0, 1);
	}
	return bVar0;
}

float Function_81(vector3 vParam0, vector3 vParam3) //Position: 0x33DF / 13279
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_82(var uParam0, int iParam1) //Position: 0x33FC / 13308
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	
	*uParam0 = *uParam0;
	fVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_84(Global_34573, &vVar4);
	if (!Function_83(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -130.87f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.09f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 206.26f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 0.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 106.17f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 343.64f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 165.38f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 0.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -97.3f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -6.71f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -180.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 22.55f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -104.45f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -90.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 270.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 59.3f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 20.74f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = 94.65f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -135.0f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_83(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		fVar10 = VDIST(vVar4, vVar7);
		if (fVar10 > fVar0)
		{
			*uParam0 = -39.9f;
			fVar0 = fVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	fVar10 = VDIST(vVar4, vVar7);
	if (fVar10 > fVar0)
	{
		fVar0 = fVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_78(&Global_63095, 2);
	Function_38(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_75(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_83(int iParam0) //Position: 0x3C21 / 15393
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_14(uVar0, 0x1000000) || Function_14(uVar0, 0x2000000)) || Function_14(uVar0, 0x4000000)) || !Function_14(uVar0, 0x10000000));
}

void Function_84(bool bParam0, int iParam1) //Position: 0x3C5C / 15452
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_85(int iParam0) //Position: 0x3C69 / 15465
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(iParam0))
	{
		return;
	}
	switch (Function_17(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_90(12, 1, 0, 0);
				Function_89(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_90(13, 1, 0, 0);
				Function_89(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_90(14, 1, 0, 0);
				Function_89(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_90(15, 1, 0, 0);
				Function_89(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_90(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(iParam0))
			{
				case 0x00000000:
					if (Function_88(iParam0) == 1)
					{
						iVar0 = Function_87(iParam0);
						if (Function_86(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_89(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_89(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_89(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_89(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_89(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_89(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_89(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_89(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_89(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_89(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_89(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_89(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_89(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_89(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_89(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_89(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_89(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_89(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_89(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_89(4, 19);
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
								Function_90(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_90(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_90(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_87(iParam0) == 0)
			{
				if (Function_88(iParam0) == 1)
				{
					Function_90(458, 1, 0, 0);
					iVar0 = Function_15(iParam0);
					if (Function_86(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_89(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_89(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_89(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_89(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_89(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_89(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_89(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_89(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_88(iParam0) == 1)
			{
				Function_90(400, 1, 0, 0);
			}
			switch (Function_15(iParam0))
			{
				case 0x00000001:
					Function_90(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_89(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_89(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_89(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_90(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_89(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_89(6, 9);
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

bool Function_86(int iParam0) //Position: 0x4146 / 16710
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_87(int iParam0) //Position: 0x415C / 16732
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 4) & 255;
}

int Function_88(int iParam0) //Position: 0x417B / 16763
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_89(int iParam0, int iParam1) //Position: 0x4195 / 16789
{
	int iVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	iVar0 = SHIFT_LEFT(1, iParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || iVar0);
	return;
	return;
}

int Function_90(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x41FC / 16892
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
	Function_67(iParam0, TO_FLOAT(bParam1), 1);
	Function_66(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_54(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_91() //Position: 0x441C / 17436
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_68(0));
	PLAYSTAT_INT("HC_FAME", Function_68(3));
	PLAYSTAT_INT("HC_HONOR", Function_68(1));
	return;
}

void Function_92() //Position: 0x4574 / 17780
{
	int iVar0;
	int iVar1;
	
	if (!Function_30(Global_6269))
	{
		return;
	}
	iVar0 = Function_68(24);
	iVar1 = Function_29(Global_6269);
	if (!Function_30(iVar0) && Function_95(iVar1) < 0)
	{
		Function_53(24, Global_6269, 0);
		Function_93(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_95(Function_29(iVar0)))
	{
		Function_53(24, Global_6269, 0);
		Function_93(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_93(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x45F4 / 17908
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
		Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4946 / 18758
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

int Function_95(int iParam0) //Position: 0x49C9 / 18889
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x49E3 / 18915
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4A0E / 18958
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4A3C / 19004
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
	
	if (!Function_30(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_113(iParam0);
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
				bVar0 = (Function_68(42) - Global_34165.f_116);
				bVar1 = (Function_68(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_65(49)) - Global_34165.f_124);
				bVar3 = (Function_68(49) - Global_34165.f_128);
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
				bVar4 = (Function_68(355) - Global_34165.f_116);
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
		iVar15 = Function_112(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_99(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_24(iParam0) };
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4CD8 / 19672
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_68(3);
	Function_108();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_106(3, bVar1);
		if (!bParam2)
		{
			if (!Function_35(Global_76848, 4))
			{
				Function_32(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_90(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_64(3));
	iVar0 = Function_68(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_101(4, Function_105(Global_12976.f_156), 1);
				Function_100(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_101(4, Function_105(Global_12976.f_156), 1);
				Function_100(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_101(4, Function_105(Global_12976.f_156), 1);
				Function_100(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_101(4, Function_105(Global_12976.f_156), 1);
				Function_100(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_101(4, Function_105(Global_12976.f_156), 1);
				Function_100(Global_12976.f_152, Global_12976.f_156);
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

void Function_100(int iParam0, int iParam1) //Position: 0x4EA7 / 20135
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_101(int iParam0, char* cParam1, bool bParam2) //Position: 0x5105 / 20741
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
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
	Function_93(iParam0, cParam1, 0, 1);
	iVar1 = Function_102();
	Global_49199[iVar1] = 0.0f;
	strcpy(&Global_49205[iVar120] + 16, cParam1, 32);
	strcpy(&Global_49205[iVar120] + 8, "QME=", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(iVar0), 8);
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

int Function_102() //Position: 0x528A / 21130
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
	Function_103();
	return 0;
}

void Function_103() //Position: 0x5329 / 21289
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
		Function_104(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_104(int iParam0) //Position: 0x53D8 / 21464
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

var Function_105(int iParam0) //Position: 0x5436 / 21558
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

int Function_106(int iParam0, bool bParam1) //Position: 0x54C5 / 21701
{
	int iVar0;
	int iVar1;
	
	Function_90(iParam0, bParam1, 0, 0);
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_107(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(iVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_102();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(iVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_107(int iParam0, int iParam1) //Position: 0x5662 / 22114
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

void Function_108() //Position: 0x56A3 / 22179
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x56B9 / 22201
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x56F9 / 22265
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x5739 / 22329
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5748 / 22344
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

int Function_113(int iParam0) //Position: 0x5910 / 22800
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

var Function_114() //Position: 0x59A5 / 22949
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x59CA / 22986
{
	if (!Function_30(iParam0))
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
			Function_99(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_99(25, 1, 0);
			Function_120(1, 1);
			break;
		
		case 0x00000015:
			Function_120(50, 1);
			Function_99(250, 1, 0);
			Function_116(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_120(50, 1);
			Function_99(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_120(5, 1);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_99(75, 1, 0);
			Function_116(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_120(5, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_120(25, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_120(10, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_99(50, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_99(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_120(20, 1);
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_120(25, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_120(10, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_99(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_116(100, 1, 0);
			Function_120(5, 1);
			break;
		
		case 0x0000000F:
			Function_120(3, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_116(125, 1, 0);
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_120(50, 1);
			Function_99(100, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_120(50, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_120(75, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_99(250, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_99(75, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_99(200, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_120(50, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_120(100, 1);
			Function_99(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_99(200, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_99(500, 1, 0);
			Function_116(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_99(150, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_116(25, 1, 0);
			Function_120(100, 1);
			break;
		
		case 0x0000002A:
			Function_99(150, 1, 0);
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_116(150, 1, 0);
			Function_120(100, 1);
			break;
		
		case 0x00000035:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_116(150, 1, 0);
			Function_120(100, 1);
			break;
		
		case 0x00000032:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x5E85 / 24197
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_68(1);
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
			Function_106(1, bVar1);
			if (!bParam2)
			{
				if (!Function_35(Global_76848, 1))
				{
					Function_32(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_119(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_35(Global_76848, 2))
				{
					Function_32(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_90(1, bVar1, 0, 0);
	}
	else
	{
		Function_118(1, (4294967295 * bVar1), 0);
	}
	if (Function_68(1) <= 4294962296)
	{
		Function_53(1, 4294962296, 0);
	}
	else if (Function_68(1) >= 5000)
	{
		Function_53(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_64(1));
	iVar0 = Function_68(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_101(2, Function_117(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_101(2, Function_117(Global_12976.f_152), 0);
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
				Function_101(2, Function_117(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_101(2, Function_117(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_101(2, Function_117(Global_12976.f_152), 1);
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
				Function_101(2, Function_117(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_101(2, Function_117(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_101(2, Function_117(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_101(2, Function_117(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_101(2, Function_117(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_101(2, Function_117(Global_12976.f_152), 1);
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
				Function_101(2, Function_117(Global_12976.f_152), 0);
			}
			break;
	}
	Function_100(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_117(int iParam0) //Position: 0x61A6 / 24998
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x6249 / 25161
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
	Function_66(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_54(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_119(int iParam0, bool bParam1) //Position: 0x6444 / 25668
{
	int iVar0;
	int iVar1;
	
	Function_118(iParam0, bParam1, 0);
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_107(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 2 || Global_49205[iVar120].f_72 != 3)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME-", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(iVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = iParam0;
			Global_49205[iVar120].f_72 = 2;
			return 1;
		}
	}
	iVar1 = Function_102();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(iVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_120(bool bParam0, bool bParam1) //Position: 0x65E0 / 26080
{
	int iVar0;
	
	iVar0 = Function_68(0);
	if ((Function_68(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - iVar0);
	}
	if (bParam0 >= 0)
	{
		Function_90(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_68(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), iVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_90(597, bParam0, 0, 0);
	}
	if ((Function_68(597) + Function_68(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x66AB / 26283
{
	struct<4> Var0;
	
	if (!Function_30(iParam0))
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
			Function_167(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_30640[0]);
			Function_164(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_162(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_164(Global_30668[0]);
			Function_154(0);
			Function_152(2, 1);
			Function_152(0, 1);
			Function_152(1, 1);
			break;
		
		case 0x00000003:
			Function_164(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_164(Global_30668[0]);
			Function_164(Global_30640[0]);
			Function_150(0, 1);
			Function_150(15, 1);
			Function_150(9, 1);
			Function_150(12, 1);
			Function_150(16, 1);
			Function_152(3, 1);
			break;
		
		case 0x00000005:
			Function_164(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_162(21, bParam2, 4);
			Function_164(Global_30668[0]);
			Function_152(39, 1);
			break;
		
		case 0x00000007:
			Function_164(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_164(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_149())
				{
					if (!Function_148(4))
					{
						Function_138(4, 0, 0, 1, 0);
					}
				}
			}
			Function_164(Global_30640[0]);
			Function_164(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_164(Global_30640[0]);
			Function_164(Global_30668[2]);
			Function_137(&(Global_29008[Global_30668[2]]), 32768);
			Function_136(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_162(9, bParam2, 4);
			Function_164(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_164(Global_30640[0]);
			Function_164(Global_30658[0]);
			Function_137(&(Global_29008[Global_30658[0]]), 32768);
			Function_136(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_164(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_30640[0]);
			Function_164(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_164(Global_30640[1]);
			Function_164(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_164(Global_30679[0]);
			Function_164(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_164(Global_30658[5]);
			Function_164(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_162(21, bParam2, 4);
			Function_164(Global_30640[4]);
			Function_164(Global_30658[4]);
			Function_135(&Global_76847, 0x2000000);
			Function_135(&Global_76847, 0x4000000);
			Function_135(&Global_76847, 4096);
			Function_135(&Global_76847, 8);
			Function_135(&Global_76847, 8388608);
			Function_135(&Global_76847, 524288);
			Function_135(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_164(Global_30640[4]);
			Function_164(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_136(&(Global_29008[Global_30640[4]]), 256);
			Function_164(Global_30640[4]);
			Function_164(Global_30658[0]);
			Function_137(&(Global_29008[Global_30658[0]]), 32768);
			Function_136(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_164(Global_30640[0]);
			Function_164(Global_30640[5]);
			Function_162(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_164(Global_30658[3]);
			Function_137(&(Global_29008[Global_30658[3]]), 32768);
			Function_136(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_162(9, bParam2, 4);
			Function_164(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_137(&(Global_29008[Global_30679[1]]), 32768);
			Function_164(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_162(12, bParam2, 4);
			Function_136(&(Global_29008[Global_30679[1]]), 256);
			Function_164(Global_30668[3]);
			Function_164(Global_30693[0]);
			Function_164(Global_30685[0]);
			Function_154(4);
			Function_150(13, 1);
			Function_150(1, 1);
			Function_150(18, 1);
			Function_152(34, 1);
			Function_152(44, 1);
			Function_152(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_162(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_164(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_164(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_164(Global_30693[0]);
			Function_164(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_164(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_164(Global_30685[0]);
			Function_164(Global_30693[0]);
			Function_164(Global_30693[1]);
			Function_164(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_162(23, bParam2, 3);
			Function_150(23, 1);
			Function_164(Global_30685[0]);
			Function_164(Global_30685[2]);
			Function_137(&(Global_29008[Global_30685[2]]), 32768);
			Function_136(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_162(19, bParam2, 4);
			Function_164(Global_30685[0]);
			Function_164(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_162(24, bParam2, 3);
			Function_150(24, 1);
			Function_164(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_164(Global_30685[0]);
			Function_164(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_164(Global_30693[12]);
			Function_164(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_164(Global_30693[12]);
			Function_164(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_162(25, bParam2, 10);
			Function_164(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_164(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_164(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_162(13, bParam2, 4);
			Function_164(Global_30693[2]);
			Function_164(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_148(8))
				{
					Function_138(8, 0, 0, 1, 0);
				}
			}
			Function_164(Global_30685[0]);
			Function_154(9);
			Function_150(7, 1);
			Function_150(11, 1);
			Function_150(3, 1);
			Function_150(20, 1);
			Function_152(57, 1);
			break;
		
		case 0x0000002A:
			Function_162(2, bParam2, 4);
			Function_164(Global_30717[0]);
			Function_164(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_164(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_164(Global_30717[0]);
			Function_164(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_164(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_164(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_164(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_162(17, bParam2, 4);
			Function_164(Global_30723[0]);
			Function_164(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_133(15))
				{
					Function_128(15, 0, 1);
				}
			}
			Function_89(2, 26);
			Function_136(&(Global_29008[Global_30717[1]]), 256);
			Function_154(11);
			Function_164(Global_30717[1]);
			Function_164(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_164(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_164(Global_30717[1]);
			Function_164(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_164(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_164(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_164(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_164(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_164(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_164(Global_30717[1]);
			Function_122(11);
			Function_154(12);
			Global_16537[1121].f_40 = 0;
			Function_152(56, 1);
			if (!bParam2)
			{
				if (!Function_148(9))
				{
					Function_138(9, 0, 0, 0, 0);
				}
				if (!Function_148(10))
				{
					Function_138(10, 0, 0, 1, 0);
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

void Function_122(int iParam0) //Position: 0x6FA9 / 28585
{
	bool bVar0;
	
	if (!Function_79(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_127(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_127(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), false);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", 1);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_123(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", 1);
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7118 / 28952
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
		Function_125(Function_126(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_125(Function_126(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_125(StackVal);
				vVar1 = { StackVal, StackVal, Function_125(StackVal) };
				if (Function_124(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_124(vector3 vParam0, vector3 vParam3) //Position: 0x721E / 29214
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_125(int iParam0) //Position: 0x724B / 29259
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

var Function_126(vector3 vParam0) //Position: 0x72A2 / 29346
{
	int iVar0;
	
	iVar0 = (ROUND(FABS(vParam0.x)) & 32767 || SHIFT_LEFT(ROUND(FABS(vParam0.z)) & 32767, 15));
	if (vParam0.x < 0.0f)
	{
		iVar0 |= 1073741824;
	}
	if (vParam0.z < 0.0f)
	{
		iVar0 = (iVar0 || 2147483648);
	}
	return iVar0;
}

void Function_127(bool bParam0, int iParam1) //Position: 0x72F0 / 29424
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", iParam1);
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7344 / 29508
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_133(bParam0))
	{
		if (!Function_148(bParam0))
		{
			Function_138(bParam0, 1, 0, 0, 1);
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
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, 0);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, 0, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_90(457, 1, 0, 0);
		Function_131(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_43(1);
				Function_41(1, 0);
			}
			else
			{
				Function_129();
			}
		}
	}
	return;
}

void Function_129() //Position: 0x74E3 / 29923
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x74E9 / 29929
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

void Function_131(bool bParam0, int iParam1) //Position: 0x758D / 30093
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x75E2 / 30178
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x75F8 / 30200
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_134(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_134(int iParam0, int iParam1) //Position: 0x7649 / 30281
{
	int iVar0;
	
	if (!Function_132(iParam0))
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

void Function_135(var uParam0, int iParam1) //Position: 0x7676 / 30326
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x7685 / 30341
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x769C / 30364
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x76AB / 30379
{
	struct<8> Var0;
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_147(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_148(bParam0))
	{
		Function_90(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_43(1);
				Function_41(1, 5);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_140() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_140() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_139(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_13())
		{
			if (!Function_35(Global_76846, 2))
			{
				Function_32(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7800 / 30720
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

bool Function_140() //Position: 0x787B / 30843
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x78A8 / 30888
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	int iVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		iVar24 = 0;
		while (iVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, iVar24 + 1, 32);
			if (Function_145(bParam0, Function_146(iVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, 0);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, 0);
			}
			iVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		iVar24 = 0;
		while (iVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, iVar24 + 1, 32);
			if (Function_145(bParam0, Function_146(iVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			iVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_144(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_143(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_142(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_142(int iParam0) //Position: 0x7A58 / 31320
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

void Function_143(var uParam0, int iParam1) //Position: 0x7AAF / 31407
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(uParam0);
	}
	return;
}

var Function_144(int iParam0) //Position: 0x7AD4 / 31444
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

bool Function_145(bool bParam0, int iParam1) //Position: 0x7B2A / 31530
{
	int iVar0;
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_146(int iParam0) //Position: 0x7B89 / 31625
{
	return SHIFT_LEFT(1, iParam0);
}

bool Function_147(int iParam0) //Position: 0x7B95 / 31637
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7BB1 / 31665
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_134(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x7C03 / 31747
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7C33 / 31795
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_151(iParam0, iParam1);
	Function_32(Global_34573, 1, 4, 1);
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x7CA6 / 31910
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7D02 / 32002
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_153(iParam0, iParam1);
	Function_32(Global_34573, 1, 4, 1);
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x7D73 / 32115
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x7DCD / 32205
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_79(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_161(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_161(Global_16537[iParam021].f_72, 0);
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
			Function_90(468, 1, 0, 0);
			Function_89(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_139("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_123(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_138(14, 1, 0, 0, 0);
				Function_155(14, 1, 0, 0, 0);
			}
			if (!Function_130(0, 0, 1, 1))
			{
				Function_43(1);
				Function_41(1, 6);
			}
			else
			{
				Function_129();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", 1);
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
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", 1);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_139("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_90(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_89(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_155(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x807C / 32892
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_147(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_134(bParam0, 2))
	{
		Function_90(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_139(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_145(bParam0, iParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || iParam1);
		Function_131(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_43(1);
				Function_41(1, 0);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		if (StackVal && !Function_14(((((!Function_140() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_140() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_35(Global_76846, 2))
			{
				Function_32(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_157();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_156(3, iParam1);
				break;
			
			case 0x00000005:
				Function_156(3, SHIFT_LEFT(iParam1, 6));
				break;
			
			case 0x00000006:
				Function_156(3, SHIFT_LEFT(iParam1, 12));
				break;
			
			case 0x00000007:
				Function_156(3, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x00000008:
				Function_156(3, SHIFT_LEFT(iParam1, 24));
				break;
			
			case 0x00000009:
				Function_156(2, SHIFT_LEFT(iParam1, 18));
				break;
			
			case 0x0000000A:
				Function_89(2, 24);
				break;
			
			case 0x00000003:
				Function_89(2, 25);
				break;
			
			case 0x0000000F:
				Function_89(2, 26);
				break;
			
			case 0x0000000D:
				Function_89(2, 27);
				break;
			
			case 0x0000000E:
				Function_89(2, 28);
				break;
			}
	}
}

void Function_156(int iParam0, int iParam1) //Position: 0x8312 / 33554
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (iParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || iParam1);
	}
	return;
	return;
}

void Function_157() //Position: 0x837D / 33661
{
	if (Function_132(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_160(Global_28180);
			Global_28180.f_8 = Function_158(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_160(Global_28180);
			Global_28180.f_8 = Function_158(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_158(int iParam0, int iParam1) //Position: 0x83F8 / 33784
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
					if (Function_28(6, 0) || Function_28(12, 0))
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
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
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
					if (Function_159(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_28(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
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
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
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
					if (Function_159(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_159(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_159(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_159(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_28(26, 0))
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
					if (Function_159(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_159(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_159(27) && iVar18)
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
					if (Function_159(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_159(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_159(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_159(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_28(17, 0) && iVar15)
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
					if (Function_159(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_28(6, 0) && Function_159(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_159(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_28(9, 0) && Function_159(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_159(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_28(8, 0) && iVar19)
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
	if (Function_75(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_75(StackVal, StackVal, vVar3))
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
	if (!Function_75(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_159(int iParam0) //Position: 0x8FE9 / 36841
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x8FFE / 36862
{
	int iVar0;
	int iVar1;
	
	if (!Function_132(iParam0))
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

void Function_161(bool bParam0, int iParam1) //Position: 0x904D / 36941
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", iParam1);
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x909E / 37022
{
	float fVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		fVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_163(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), fVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_167(bParam0, 0, 0);
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

bool Function_163(int iParam0, int iParam1) //Position: 0x910C / 37132
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x911F / 37151
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_166(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_137(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_90(473, 1, 0, 0);
		iVar0 = Function_165(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_90(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_90(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_90(476, 1, 0, 0);
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
		Function_89(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_89(7, 30);
	}
	if (Function_64(473) <= Function_65(473))
	{
		if (!Function_42())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_165(int iParam0) //Position: 0x921E / 37406
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_86(iParam0))
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

bool Function_166(var uParam0, int iParam1) //Position: 0x9276 / 37494
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x9292 / 37522
{
	if (!Function_168(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_51(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_51(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_51(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_168(int iParam0) //Position: 0x92E9 / 37609
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(int iParam0) //Position: 0x92FB / 37627
{
	int iVar0;
	
	if (Function_14(iParam0, 1) && Function_14(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_170(int iParam0) //Position: 0x932F / 37679
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_171(4, 0, 0);
		}
	}
	return;
}

void Function_171(int iParam0, int iParam1, int iParam2) //Position: 0x9396 / 37782
{
	int iVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
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
		iVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_172(Global_16524, iVar0, 1);
	}
	return;
}

void Function_172(int iParam0, bool bParam1, bool bParam2) //Position: 0x947C / 38012
{
	int iVar0;
	
	Function_174(iParam0);
	Function_8(bParam1);
	PRINTNL();
	if (StackVal == iParam0)
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
	SET_WEATHER(iParam0, bParam1);
	Function_173();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = iParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (iParam0 != 3 || iParam0 != 4)
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
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_173() //Position: 0x95F5 / 38389
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x9601 / 38401
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

void Function_175() //Position: 0x9647 / 38471
{
	return;
}

void Function_176() //Position: 0x964D / 38477
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_177(&bLocal_201);
	return;
}

void Function_177(int iParam0) //Position: 0x965B / 38491
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_178(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_178(var uParam0, int iParam1) //Position: 0x9681 / 38529
{
	if (Function_180(uParam0[iParam13], 4))
	{
		if (Function_180(uParam0[iParam13], 1))
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
			Function_179(uParam0[iParam13], 1);
			Function_179(uParam0[iParam13], 2);
			Function_179(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_179(var uParam0, int iParam1) //Position: 0x97AF / 38831
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_180(var uParam0, int iParam1) //Position: 0x97C9 / 38857
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_181(int iParam0) //Position: 0x97E6 / 38886
{
	if (Function_14(iParam0, 1) && !Function_14(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_182(int iParam0) //Position: 0x9813 / 38931
{
	Function_183(&Global_28842, iParam0);
	return;
}

void Function_183(var uParam0, var uParam1) //Position: 0x9821 / 38945
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_184() //Position: 0x983C / 38972
{
	if (VMAG(*(&Global_63098 + 44)) < 0.0f)
	{
		ENABLE_GAME_CAMERA_FOCUS(*(&Global_63098 + 44), -1.0f, 6, 1, 1, 0);
	}
	else
	{
		CAMERA_RESET(0);
	}
	if (Global_63098.f_16 < 0.0f)
	{
		Global_63098.f_4 = StackVal + 1;
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, StackVal, Global_63098, Global_63098.f_16);
		Global_63098.f_16 = 0.0f;
	}
	PRINTSTRING("GET_CUTSCENEOBJECT_SEQUENCE(gsCutCamera.cutsceneCameraObject) = ");
	PRINTINT(GET_CUTSCENEOBJECT_SEQUENCE(Global_63098));
	PRINTNL();
	PRINTSTRING("gsCutCamera.transitionCounter = ");
	PRINTINT(StackVal);
	PRINTNL();
	if (StackVal && GET_CUTSCENEOBJECT_SEQUENCE(Global_63098) < 4294967295 < 0)
	{
		while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(Global_63098))
		{
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Global_63098);
		}
	}
	*(&Global_63098 + 56) = { 0.0f, 0.0f, 0.0f };
	Global_63098.f_68 = 4;
	return;
}

void Function_185() //Position: 0x9956 / 39254
{
	FLASH_SET_INT("numberSystem", "showBar", 0);
	UI_EXIT("Scorebox");
	UI_EXIT("Scorebox_Cash");
	UI_EXIT("Scorebox_Bet");
	Function_186();
	return;
}

void Function_186() //Position: 0x99B0 / 39344
{
	Function_187(0);
	Function_187(1);
	Function_187(2);
	Function_187(3);
	Function_187(4);
	Function_187(5);
	return;
}

int Function_187(int iParam0) //Position: 0x99D4 / 39380
{
	UI_HIDE_PROMPT(iParam0);
	return 1;
}

void Function_188(bool bParam0, bool bParam1) //Position: 0x99E0 / 39392
{
	switch (bParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				(*&Global_12976 + 104)[0] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 26, 1);
			}
			else
			{
				(*&Global_12976 + 104)[0] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 26, 0);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, 1);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 8, 200.0f);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 9, 200.0f);
				(*&Global_12976 + 104)[1] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, 0);
				(*&Global_12976 + 104)[1] = 0;
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 24, 1);
				_SET_ACTOR_MAX_AMMO_AMOUNT(Global_34573, 10, 200.0f);
				(*&Global_12976 + 104)[2] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 24, 0);
				(*&Global_12976 + 104)[2] = 0;
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 27, 1);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 28, 1);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 29, 0);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 30, 0);
				(*&Global_12976 + 104)[4] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 27, 0);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 28, 0);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 29, 1);
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 30, 1);
				(*&Global_12976 + 104)[4] = 0;
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				(*&Global_12976 + 104)[3] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, 1);
			}
			else
			{
				(*&Global_12976 + 104)[3] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, 0);
			}
			break;
	}
	return;
}

void Function_189() //Position: 0x9B53 / 39763
{
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_51(), 1);
	Function_192(1);
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 0);
	AUDIO_MG_STOP();
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_63398);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_51()), "iQuitMinigame");
	RESET_FACTIONS();
	Function_191();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	HUD_ENABLE(1);
	CAMERA_RESET(0);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	Function_190();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	UI_POP("Minigame");
	return;
}

void Function_190() //Position: 0x9BD5 / 39893
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_191() //Position: 0x9BEA / 39914
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_192(var uParam0) //Position: 0x9BFE / 39934
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

void Function_193() //Position: 0x9C11 / 39953
{
	int iVar0[3];
	int iVar4;
	
	if (Function_215(0))
	{
		iVar0[0] = "Pass";
		iVar0[1] = "Fail";
		iVar0[2] = "Cancel";
		iVar4 = Function_201(&uLocal_9, &iVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_194();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_16 = 0;
		}
		else if (iVar4 == 1)
		{
			Function_194();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_16 = 1;
		}
		else if (iVar4 == 2)
		{
			Function_194();
			iLocal_0 = 3;
			iLocal_1 = 0;
			iLocal_16 = 2;
		}
	}
	return;
}

void Function_194() //Position: 0x9CA5 / 40101
{
	Function_196();
	Function_195(10, 3);
	return;
}

void Function_195(int iParam0, int iParam1) //Position: 0x9CB4 / 40116
{
	var uVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(uVar0))
		{
			GUI_CLOSE_WINDOW(uVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(uVar0))
			{
				GUI_CLOSE_WINDOW(uVar0);
			}
			bVar1++;
		}
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	return;
}

void Function_196() //Position: 0x9DEB / 40427
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_200())
	{
		Function_199(10, 3);
	}
	else
	{
		Function_197();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_51(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_51());
	UI_POP("nDebugMenu");
	return;
}

void Function_197() //Position: 0x9E36 / 40502
{
	Function_198(25, 2);
	return;
}

void Function_198(int iParam0, int iParam1) //Position: 0x9E42 / 40514
{
	var uVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(uVar0))
		{
			GUI_CLOSE_WINDOW(uVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(uVar0))
			{
				GUI_CLOSE_WINDOW(uVar0);
			}
			bVar1++;
		}
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	return;
}

void Function_199(int iParam0, int iParam1) //Position: 0xA040 / 41024
{
	var uVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(uVar0))
		{
			GUI_CLOSE_WINDOW(uVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(uVar0))
			{
				GUI_CLOSE_WINDOW(uVar0);
			}
			bVar1++;
		}
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_CLOSE_WINDOW(uVar0);
	}
	return;
}

bool Function_200() //Position: 0xA177 / 41335
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
				if (!Function_14(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

var Function_201(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA1DE / 41438
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_214(&Var15, &Var0);
	uVar20 = Function_213(*uParam1, &Var15);
	Function_212(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_211(uParam0, uVar20);
	Function_209(StackVal, uParam0, Var15.f_12);
	Function_207(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_206(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_203(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_202(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_202(int iParam0, int iParam1, int iParam2) //Position: 0xA2A5 / 41637
{
	char* cVar0;
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
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_SET_TEXT(cVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_203(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xA301 / 41729
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
				Function_205(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_205(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1.5f)));
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
				Function_202(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_204(bParam1->f_32);
	}
	else
	{
		Function_204(bParam1->f_32);
	}
	return 0;
}

void Function_204(bool bParam0) //Position: 0xA487 / 42119
{
	char* cVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_SET_TEXT(cVar0, " ");
	}
	return;
}

void Function_205(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xA4C1 / 42177
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	uVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(uVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
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
	GUI_SET_TEXT(cVar4, &cVar13);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
}

var Function_206(int iParam0, var uParam1, int iParam2) //Position: 0xA56F / 42351
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_207(var uParam0, int iParam1, int iParam2) //Position: 0xA593 / 42387
{
	switch (Function_208())
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

int Function_208() //Position: 0xA62F / 42543
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

void Function_209(var uParam0, int iParam1, int iParam2) //Position: 0xA66B / 42603
{
	switch (Function_210(uParam0))
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

int Function_210(int iParam0) //Position: 0xA703 / 42755
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_51()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_14(*iParam0, 0x40000000))
		{
			Function_78(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_14(*iParam0, 0x40000000))
		{
			Function_78(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_38(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_51()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_14(*iParam0, 0x20000000))
		{
			Function_78(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_14(*iParam0, 0x20000000))
		{
			Function_78(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_38(iParam0, 0x20000000);
	return 0;
}

var Function_211(var uParam0, int iParam1) //Position: 0xA84E / 43086
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
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
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
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
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
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

void Function_212(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA99D / 43421
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	uVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(uVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(cVar4, cParam0);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(cVar4, 1);
}

var Function_213(int iParam0, int iParam1) //Position: 0xAA30 / 43568
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_214(var uParam0, int iParam1) //Position: 0xAA4A / 43594
{
	iParam1->f_36 = 100.0f;
	iParam1->f_40 = 110.0f;
	iParam1->f_44 = 1.0f;
	iParam1->f_48 = 1.0f;
	iParam1->f_52 = 1.0f;
	iParam1->f_56 = 1.6f;
	iParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_215(int iParam0) //Position: 0xAA98 / 43672
{
	if (!Function_216(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_216(int iParam0) //Position: 0xAAAC / 43692
{
	if (iParam0 && !IS_SCRIPT_VALID(Global_30921))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == Global_30921)
	{
		return 1;
	}
	return 0;
}

bool Function_217() //Position: 0xAAD0 / 43728
{
	int iVar0;
	bool bVar1;
	
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_272();
		return 0;
	}
	bLocal_68 = (GET_CURRENT_GAME_TIME() - fLocal_69);
	if (bLocal_68 < 0.033333f)
	{
		bLocal_68 = 0.0333333f;
	}
	fLocal_69 = GET_CURRENT_GAME_TIME();
	Function_73(442, bLocal_68, 0);
	iVar0 = 0;
	while (iVar0 <= Local_73.f_448)
	{
		if ((*&Local_73 + 448)[iVar03])
		{
			bVar1 = Local_73[StackVal37];
			if (IS_ACTOR_VALID(bVar1))
			{
				if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar1)) > 1.0f && GET_LAST_ATTACKER(bVar1) != GET_PLAYER_ACTOR(0))
				{
					if (!bLocal_43)
					{
						PRINT_OBJECTIVE_FORMAT(StackVal, StackVal, 4.0f, &Local_73[&Local_73["Poker_Attacks"37] + 437] + 4, "", "", 0, 2, 0, 0, 0);
					}
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_16 = 1;
					Function_272();
					return 0;
				}
			}
		}
		iVar0++;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_272();
		return 0;
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_49 + 4)[iVar0]))
		{
			if (GET_LAST_ATTACKER((*&Local_49 + 4)[iVar0]) == Function_51())
			{
				Function_272();
				return 0;
			}
		}
		iVar0++;
	}
	iLocal_2 = 0;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			Function_270(&Local_73);
			iLocal_0 = 0;
			break;
		
		case 0x00000000:
			Function_265();
			break;
		
		case 0x00000001:
			Function_225();
			break;
		
		case 0x00000003:
			Function_220();
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000065:
			iLocal_2 = 1;
			break;
		
		default:
			return 0;
	}
	if (iLocal_2)
	{
		Function_218();
		return 0;
	}
	if (bLocal_3)
	{
		Function_272();
		return 0;
	}
	return 1;
}

void Function_218() //Position: 0xAC6C / 44140
{
	if (Global_29006 == Global_30723[2])
	{
		Function_219(4, Global_30723[2]);
	}
	iLocal_2 = 1;
	Function_1();
	return;
}

void Function_219(int iParam0, int iParam1) //Position: 0xAC8E / 44174
{
	if (!Function_147(3))
	{
		return;
	}
	if (Function_42())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_30640[0])
			{
				if (IS_PS3() || Function_149())
				{
					Function_155(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_30717[0])
			{
				Function_155(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_30668[0])
			{
				Function_155(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_30658[1])
			{
				Function_155(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_30707[2])
			{
				Function_155(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_30707[3])
			{
				Function_155(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_30723[2])
			{
				Function_155(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_30640[0])
			{
				if (Function_148(2) && !Function_133(2))
				{
					Function_155(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

void Function_220() //Position: 0xADA0 / 44448
{
	int iVar0;
	
	switch (iLocal_1)
	{
		case 0x00000000:
			if (iLocal_16 == 1)
			{
				if (Global_29004 == 0)
				{
					AUDIO_MUSIC_ONE_SHOT("FTR_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				else if (Global_29004 == 1)
				{
					AUDIO_MUSIC_ONE_SHOT("MEX_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
				else if (Global_29004 == 2)
				{
					AUDIO_MUSIC_ONE_SHOT("NRT_MINI_GAME_FAIL_SONG_01", 0, 0, 0, 0, 0);
				}
			}
			Function_185();
			Function_190();
			if (iLocal_16 != 0 && !Function_223(Function_17(Local_49), Function_15(Local_49)))
			{
				Function_90(410, 1, 0, 0);
				Function_89(6, 14);
			}
			iLocal_1 = 6;
			break;
		
		case 0x00000006:
			if ((*&Local_73 + 448)[Local_73.f_4803])
			{
				SET_DRAW_ACTOR(Local_73[037], 0);
				Function_222(StackVal, GET_GRINGO_FROM_OBJECT(&iLocal_18));
				Function_221(&Local_73, 1);
			}
			iLocal_1 = 7;
			break;
		
		case 0x00000007:
			iVar0 = 0;
			while (iVar0 <= Local_73.f_448)
			{
				if ((*&Local_73 + 448)[iVar03])
				{
					SET_ACTION_NODE_FOR_ACTOR(Local_73[StackVal37], "arm_wrestling/Fake/Idle");
					TASK_PRIORITY_SET(Local_73[StackVal37], 2);
				}
				iVar0++;
			}
			iLocal_1 = 8;
			break;
		
		case 0x00000008:
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(Function_51(), "arm_wrestling/Stand"))
			{
				if (iLocal_16 == 0)
				{
					iLocal_2 = 1;
				}
				else if (iLocal_16 == 1)
				{
					bLocal_3 = true;
				}
				else if (iLocal_16 == 2)
				{
					Function_1();
				}
			}
			break;
	}
	return;
}

void Function_221(int iParam0, int iParam1) //Position: 0xAF6E / 44910
{
	(*iParam0 + 448)[iParam0[iParam137]->f_683] = 0;
	(iParam0 + 448[iParam0[iParam137]->f_683])->f_4 = 4294967295;
	TASK_CLEAR((*iParam0)[iParam137]);
	if (!(*iParam0)[iParam137] != GET_PLAYER_ACTOR(0))
	{
		TASK_WANDER((*iParam0)[iParam137], 3212836864);
		SET_ACTOR_STAY_OUTSIDE_OF_VOLUME((*iParam0)[iParam137], bLocal_30, 1, 1);
	}
	GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(StackVal));
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*iParam0)[iParam137], 1);
	ACTOR_END_FORCE_HOLSTER((*iParam0)[iParam137]);
	(*iParam0)[iParam137] = "";
	iParam0[iParam137]->f_68 = 4294967295;
	strcpy(iParam0[iParam137] + 4, "", 64);
	iParam0->f_476 = (iParam0->f_476 - 1);
	return;
}

void Function_222(var uParam0, bool bParam1) //Position: 0xB01F / 45087
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	vector3 vVar19;
	vector3 vVar22;
	
	if (IS_GRINGO_VALID(bParam1))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bParam1), &vVar0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar3, 0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar6, 1);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar9, 2);
		fVar12 = 0.6f;
		fVar13 = 1.0f;
		fVar14 = 1.2f;
		fVar15 = 0.4f;
		fVar16 = 1.24f;
		fVar17 = -0.4f;
		fVar18 = 37.0f;
		vVar19 = { StackVal, StackVal, vVar0 };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar19, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar19, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar19, StackVal) * Vector(fVar14, fVar14, fVar14), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, vVar0 };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar22, StackVal) * Vector(fVar15, fVar15, fVar15), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar22, StackVal) * Vector(fVar16, fVar16, fVar16), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar22, StackVal) * Vector(fVar17, fVar17, fVar17), StackVal, StackVal) };
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*uParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(*uParam0);
		}
		SET_CAMERA_POSITION(*uParam0, vVar19);
		SET_CAMERA_TARGET_POSITION(*uParam0, vVar22, 0);
		SET_CAMERA_FOV(*uParam0, fVar18);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		LOG_ERROR("LOOK_AT_ARMWRESTLING_LEAVE_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

bool Function_223(int iParam0, int iParam1) //Position: 0xB19B / 45467
{
	int iVar0;
	
	if (!Function_224(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (Function_17(iVar0) != iParam0 && Function_15(iVar0) != iParam1)
		{
			if (Function_88(iVar0) >= 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_224(int iParam0) //Position: 0xB1E0 / 45536
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

void Function_225() //Position: 0xB1F5 / 45557
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	struct<25> Var12;
	
	if ((*&Local_73 + 448)[03])
	{
		UI_LABEL_SET_TEXT("Scorebox_Player1", &Local_73[037] + 4);
		UI_LABEL_SET_VALUE("Scorebox_Player1", Local_73[037].f_76);
		UI_LABEL_SET_VALUE_B("Scorebox_Player1", 2);
	}
	UI_LABEL_SET_TEXT("Scorebox_Player2", &Local_73[137] + 4);
	UI_LABEL_SET_VALUE("Scorebox_Player2", Local_73[137].f_76);
	UI_LABEL_SET_VALUE_B("Scorebox_Player2", 2);
	if (HUD_IS_SHOWING_HELP_TEXT() && !iLocal_1 != 6)
	{
		Function_261(5, 6, "ArmWrestling_SkipHelp", 1, 0, 0, 0, 0);
		if (IS_BUTTON_PRESSED(Function_260(), 3, 1, 0))
		{
			Function_190();
			HUD_CLEAR_HELP_QUEUE();
			Function_259(&uLocal_23);
		}
	}
	else
	{
		Function_187(5);
	}
	switch (iLocal_1)
	{
		case 0x00000023:
			Local_73.f_500 = 1;
			SET_DRAW_ACTOR(Local_73[037], 1);
			switch (bLocal_22)
			{
				case 0x00000000:
					Function_258(Local_73[137], &iLocal_18);
					break;
				
				case 0x00000001:
					Function_257(Local_73[137], &iLocal_18);
					break;
				
				case 0x00000002:
					Function_256(Local_73[137], &iLocal_18);
					break;
			}
			SAY_SINGLE_LINE_CONTEXT(Local_73[037], 233, Local_73[037], 1, 1, 0, 4294967295, 4294967295, 0, 1);
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_255("ArmWrestling_EnterBet", -1.0f, 0, 2, 0, 0, 0, 0);
			iLocal_1 = 45;
			break;
		
		case 0x0000002D:
			if (Function_253(&uLocal_23, 0))
			{
				Function_139("ArmWrestling_BetHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
			iVar0 = Local_73.f_500;
			if ((GET_STICK_Y(Function_260(), 0, 1) > -0.2f || IS_BUTTON_PRESSED(Function_260(), 12, 1, 0)) || IS_BUTTON_DOWN(Function_260(), 12, 1, 0))
			{
				if (Function_250(&iLocal_70) < fLocal_44)
				{
					Local_73.f_500++;
					Local_73.f_500 = Function_249(Local_73.f_500, &Local_73);
					Function_247(&iLocal_70);
				}
				fLocal_44 = (fLocal_44 - 0.008f);
			}
			else if ((GET_STICK_Y(Function_260(), 0, 1) < 0.2f || IS_BUTTON_PRESSED(Function_260(), 14, 1, 0)) || IS_BUTTON_DOWN(Function_260(), 14, 1, 0))
			{
				if (Function_250(&iLocal_70) < fLocal_44)
				{
					Local_73.f_500 = (Local_73.f_500 - 1);
					Local_73.f_500 = Function_249(Local_73.f_500, &Local_73);
					Function_247(&iLocal_70);
				}
				fLocal_44 = (fLocal_44 - 0.008f);
			}
			else
			{
				fLocal_44 = 0.2f;
			}
			iVar0 = (iVar0 - Local_73.f_500);
			if (iVar0 != 0)
			{
				if (iLocal_211 != 4294967295)
				{
					if (HAS_SOUND_FINISHED(iLocal_211))
					{
						iLocal_211 = GET_SOUND_ID();
						PLAY_SOUND_FRONTEND_PERSISTENT(iLocal_211, "RAISE_LOWER_BET_MASTER");
					}
				}
				else
				{
					iLocal_211 = GET_SOUND_ID();
					PLAY_SOUND_FRONTEND_PERSISTENT(iLocal_211, "RAISE_LOWER_BET_MASTER");
				}
			}
			Function_261(4, 2, "ArmWrestling_Quit", 1, 0, 0, 0, 0);
			Function_261(3, 4, "ArmWrestling_Camera", 1, 0, 0, 0, 0);
			Function_261(2, 12, "ArmWrestling_ChangeBet", 1, 0, 0, 0, 0);
			Function_261(0, 1, "ArmWrestling_EnterBet", 1, 0, 0, 0, 0);
			if (IS_BUTTON_RELEASED(Function_260(), 5, 1, 1))
			{
				if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_51()), "bQuitMinigame"))
				{
					UI_ENTER("Armwrestling_Quit_Confirmation_Popup");
				}
				iLocal_19 = iLocal_1;
				iLocal_1 = 48;
			}
			if (IS_BUTTON_PRESSED(Function_260(), 4, 1, 0))
			{
				bLocal_22++;
				if (bLocal_22 == 3)
				{
					bLocal_22 = false;
				}
				switch (bLocal_22)
				{
					case 0x00000000:
						Function_258(Local_73[137], &iLocal_18);
						break;
					
					case 0x00000001:
						Function_257(Local_73[137], &iLocal_18);
						break;
					
					case 0x00000002:
						Function_256(Local_73[137], &iLocal_18);
						break;
					}
			}
			if (IS_BUTTON_PRESSED(Function_260(), 6, 1, 0))
			{
				Function_187(4);
				Function_187(3);
				Function_187(2);
				Function_187(0);
				SAY_SINGLE_LINE_CONTEXT(Local_73[137], 429, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				Function_246(Local_73.f_500, 0);
				DECOR_SET_INT(Local_73[037], "iAdditionalMoney", Local_73.f_500);
				PLAY_SOUND_FRONTEND("PLACE_BET_MASTER");
				iLocal_1 = 0;
			}
			UI_ENTER("Scorebox");
			UI_ENTER("Scorebox_Bet");
			UI_ENTER("Scorebox_Cash");
			UI_ENTER("Scorebox_Player1");
			UI_ENTER("Scorebox_Player2");
			UI_LABEL_SET_VALUE("Scorebox_Player1", Local_73[037].f_76);
			UI_LABEL_SET_VALUE("Scorebox_Player2", Local_73[137].f_76);
			UI_LABEL_SET_TEXT("Scorebox_Bet", "ArmWrestling_BetAmount");
			UI_LABEL_SET_VALUE("Scorebox_Bet", Local_73.f_500);
			UI_REFRESH("Scorebox_Bet");
			UI_LABEL_SET_TEXT("Scorebox_Cash", "ArmWrestling_CashLabel");
			UI_LABEL_SET_VALUE("Scorebox_Cash", Function_245());
			UI_REFRESH("Scorebox_Cash");
			break;
		
		case 0x00000000:
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_190();
				Local_73.f_484 = 0.5f;
				Local_73.f_488 = 0.5f;
				Local_73.f_496 = 1.0f;
				iLocal_40 = 4294967295;
				iLocal_41 = 4294967295;
				Function_247(&iLocal_37);
				SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Enter");
				SET_ACTION_NODE_FOR_ACTOR(Local_73[137], "arm_wrestling/B/Enter");
				SET_PANIM_PARAMS(Local_73[037], Local_73.f_496, 0.0f);
				SET_PANIM_PARAMS(Local_73[137], Local_73.f_496, 0.0f);
				SET_PANIM_PHASE(Local_73[137], 0.5f);
				SET_PANIM_PHASE(Local_73[037], 0.5f);
				Function_247(&iLocal_31);
				if (Function_253(&uLocal_23, 5))
				{
					Function_139("ArmWrestling_ArmWrestlingHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
				iLocal_1 = 15;
			}
			break;
		
		case 0x0000000F:
			if (((IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_a") && IS_ACTION_NODE_PLAYING(Local_73[137], "arm_wrestling/B/Sweep_b")) && !IS_AMBIENT_SPEECH_PLAYING(Local_73[037])) && !IS_AMBIENT_SPEECH_PLAYING(Local_73[137]))
			{
				iLocal_41 = Local_73[037].f_92;
				bLocal_45 = Local_73[037].f_96;
				Function_247(&iLocal_37);
				Function_247(&iLocal_31);
				Local_73.f_484 = 0.5f;
				Local_73[037].f_72 = 1.0f;
				Local_73[137].f_72 = 1.0f;
				Local_73.f_496 = (Local_73[037].f_72 - Local_73[137].f_72);
				fLocal_26 = 0.0f;
				fLocal_29 = 0.0f;
				iVar1 = RAND_INT_RANGE(0, 100);
				if (iVar1 <= 50)
				{
					SAY_SINGLE_LINE_CONTEXT(Local_73[137], 430, Local_73[037], 1, 1, 0, 4294967295, 4294967295, 0, 1);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(Local_73[037], 234, Local_73[137], 1, 1, 0, 4294967295, 4294967295, 0, 1);
				}
				iLocal_1 = 89;
			}
			SET_PANIM_PHASE(Local_73[137], 0.5f);
			SET_PANIM_PHASE(Local_73[037], 0.5f);
			SET_PANIM_PARAMS(Local_73[037], 0.0f, 0.0f);
			SET_PANIM_PARAMS(Local_73[137], 0.0f, 0.0f);
			break;
		
		case 0x00000059:
			if (!IS_AMBIENT_SPEECH_PLAYING(Local_73[037]) && !IS_AMBIENT_SPEECH_PLAYING(Local_73[137]))
			{
				PRINT_BIG("ArmWrestling_Go", 2.5f, 0, 2, 0);
				Function_247(&iLocal_34);
				iLocal_1 = 6;
			}
			SET_PANIM_PHASE(Local_73[137], 0.5f);
			SET_PANIM_PHASE(Local_73[037], 0.5f);
			SET_PANIM_PARAMS(Local_73[037], 0.0f, 0.0f);
			SET_PANIM_PARAMS(Local_73[137], 0.0f, 0.0f);
			break;
		
		case 0x00000006:
			Function_261(3, 4, "ArmWrestling_Camera", 1, 0, 0, 0, 0);
			Function_261(0, 1, "ArmWrestling_Push", 1, 0, 0, 0, 0);
			FLASH_SET_INT("numberSystem", "showBar", 1);
			FLASH_SET_STRING("numberSystem", "barLabel", "ArmWrestling_StrengthLabel", 1);
			FLASH_SET_INT("numberSystem", "barScale", FLOOR((Local_73[137].f_72 * 100.0f)));
			if (IS_BUTTON_PRESSED(Function_260(), 4, 1, 0))
			{
				bLocal_22++;
				if (bLocal_22 == 3)
				{
					bLocal_22 = false;
				}
				switch (bLocal_22)
				{
					case 0x00000000:
						Function_258(Local_73[137], &iLocal_18);
						break;
					
					case 0x00000001:
						Function_257(Local_73[137], &iLocal_18);
						break;
					
					case 0x00000002:
						Function_256(Local_73[137], &iLocal_18);
						break;
					}
			}
			if (Local_73.f_484 < 0.8f)
			{
				if (Function_253(&uLocal_23, 4))
				{
					Function_139("ArmWrestling_SlamHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
				if (Local_73[137].f_72 != 1.0f)
				{
					Function_261(1, 3, "ArmWrestling_Slam", 1, 0, 0, 0, 0);
				}
				else
				{
					Function_187(1);
				}
			}
			else
			{
				Function_187(1);
			}
			if (Local_73.f_484 < 0.5f && fLocal_26 < 0.0f)
			{
				if (Function_250(&iLocal_31) < IntToFloat(RAND_INT_RANGE(5, 20)))
				{
					iVar2 = RAND_INT_RANGE(0, 100);
					if (iVar2 <= 50)
					{
						if (!IS_AMBIENT_SPEECH_PLAYING(Local_73[037]))
						{
							SAY_SINGLE_LINE_CONTEXT(Local_73[037], 235, Local_73[137], 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					else if (!IS_AMBIENT_SPEECH_PLAYING(Local_73[137]))
					{
						SAY_SINGLE_LINE_CONTEXT(Local_73[137], 432, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			else if (Local_73.f_484 >= 0.5f && fLocal_26 > 0.0f)
			{
				if (Function_250(&iLocal_31) < IntToFloat(RAND_INT_RANGE(5, 20)))
				{
					iVar2 = RAND_INT_RANGE(0, 100);
					if (iVar2 <= 50)
					{
						if (!IS_AMBIENT_SPEECH_PLAYING(Local_73[037]))
						{
							SAY_SINGLE_LINE_CONTEXT(Local_73[037], 236, Local_73[137], 0, 0, 0, 4294967295, 4294967295, 0, 1);
						}
					}
					else if (!IS_AMBIENT_SPEECH_PLAYING(Local_73[137]))
					{
						SAY_SINGLE_LINE_CONTEXT(Local_73[137], 431, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			if (Function_250(&iLocal_31) < 21.0f)
			{
				Function_247(&iLocal_31);
				AUDIO_RESET_SPEECH_HISTORY();
			}
			SET_PANIM_PHASE(Local_73[137], Local_73.f_484);
			SET_PANIM_PHASE(Local_73[037], (1.0f - Local_73.f_484));
			SET_PANIM_PARAMS(Local_73[037], Local_73.f_496, 0.0f);
			SET_PANIM_PARAMS(Local_73[137], Local_73.f_496, 0.0f);
			Local_73.f_496 = (Local_73[037].f_72 - Local_73[137].f_72);
			if (iLocal_40 == 2 && iLocal_40 == 3)
			{
				if (IS_BUTTON_PRESSED(Function_260(), 6, 1, 0) || Function_250(&iLocal_70) > 0.5f)
				{
					if (IS_BUTTON_PRESSED(Function_260(), 6, 1, 0))
					{
						Function_247(&iLocal_70);
					}
					if (Local_73[137].f_72 < 0.0f)
					{
						PRINTSTRING("Tapping Strength");
						PRINTNL();
						iLocal_40 = 0;
					}
				}
				else if (IS_BUTTON_DOWN(Function_260(), 6, 1, 0))
				{
					if (Local_73[137].f_72 >= 1.0f && iLocal_40 == 0)
					{
						if (Function_250(&iLocal_70) < 0.2f)
						{
							PRINTSTRING("Restoring Strength");
							PRINTNL();
							iLocal_40 = 1;
						}
					}
				}
				if (IS_BUTTON_PRESSED(Function_260(), 7, 1, 0))
				{
					if (Local_73[137].f_72 != 1.0f)
					{
						if (Local_73.f_484 < 0.8f)
						{
							PRINTSTRING("Slammming!");
							PRINTNL();
							iLocal_40 = 2;
						}
					}
				}
			}
			if (Function_250(&iLocal_37) < bLocal_45)
			{
				Function_247(&iLocal_37);
				bLocal_45 = RAND_FLOAT_RANGE(1.0f, 2.0f);
				fLocal_46 = RAND_FLOAT_RANGE(0.0f, 1.0f);
				if (fLocal_46 > Local_73[037].f_84)
				{
					iLocal_41 = 0;
					if (!HUD_IS_SHOWING_HELP_TEXT())
					{
						if (Function_253(&uLocal_23, 3))
						{
							Function_139("ArmWrestling_AIPushingHelp", 0x41200000, 1, 0, 2, 1, 0);
							fLocal_46 = 7.5f;
						}
					}
				}
				else if (fLocal_46 > Local_73[037].f_88)
				{
					iLocal_41 = 1;
					if (!HUD_IS_SHOWING_HELP_TEXT())
					{
						if (Function_253(&uLocal_23, 2))
						{
							Function_139("ArmWrestling_AIChargingHelp", 0x41200000, 1, 0, 2, 1, 0);
							fLocal_46 = 7.5f;
						}
					}
				}
				else
				{
					iLocal_41 = 4294967295;
					if (!HUD_IS_SHOWING_HELP_TEXT())
					{
						if (Function_253(&uLocal_23, 1))
						{
							Function_139("ArmWrestling_AINothingHelp", 0x41200000, 1, 0, 2, 1, 0);
							fLocal_46 = 7.5f;
						}
					}
				}
			}
			iLocal_42 = iLocal_41;
			if (!bLocal_48)
			{
				if (Local_73.f_484 >= 0.1f)
				{
					iLocal_42 = 3;
				}
				else if (Local_73.f_484 <= 0.9f)
				{
					iLocal_40 = 3;
				}
			}
			if (!HUD_IS_SHOWING_HELP_TEXT() && ((Function_242(&uLocal_23, 1) || Function_242(&uLocal_23, 3)) || Function_242(&uLocal_23, 2)))
			{
				if (Function_253(&uLocal_23, 6))
				{
					Function_139("ArmWrestling_StrengthHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			fVar3 = 0.8f;
			fVar4 = 1.2f;
			fVar5 = 2.5f;
			switch (iLocal_40)
			{
				case 0x00000000:
					if (IS_AMBIENT_SPEECH_PLAYING(Local_73[137]))
					{
						if (!IS_ACTION_NODE_PLAYING(Local_73[137], "arm_wrestling/B/Sweep_B_Face/noface"))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_73[137], "arm_wrestling/B/Sweep_B_Face/noface");
						}
					}
					else
					{
						if (Function_241())
						{
							AUDIO_PLAY_VOCAL_EFFECT(Local_73[137], 1, 0);
						}
						if (!IS_ACTION_NODE_PLAYING(Local_73[137], "arm_wrestling/B/Sweep_B_Face/pushing") && iLocal_21)
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_73[137], "arm_wrestling/B/Sweep_B_Face/pushing");
						}
					}
					if (iLocal_42 == 0)
					{
						if (IS_AMBIENT_SPEECH_PLAYING(Local_73[037]))
						{
							if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface"))
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface");
							}
						}
						else
						{
							if (Function_241())
							{
								AUDIO_PLAY_VOCAL_EFFECT(Local_73[037], 1, 0);
							}
							if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/pushing") && iLocal_21)
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/pushing");
							}
						}
						fVar6 = (Local_73[037].f_120 * Local_73[037].f_72);
						Local_73[037].f_72 = (Local_73[037].f_72 - Local_73[037].f_104);
					}
					else if (iLocal_42 == 1)
					{
						if (IS_AMBIENT_SPEECH_PLAYING(Local_73[037]))
						{
							if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface"))
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface");
							}
						}
						else
						{
							if (Function_241())
							{
								AUDIO_PLAY_VOCAL_EFFECT(Local_73[037], 2, 0);
							}
							if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/holding") && iLocal_21)
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/holding");
							}
						}
						fVar6 = (Local_73[037].f_116 * (Local_73[137].f_72 - (1.1f - Local_73[037].f_72)));
						Local_73[037].f_72 = (Local_73[037].f_72 + Local_73[037].f_108);
					}
					else if (iLocal_42 == 4294967295)
					{
						if (IS_AMBIENT_SPEECH_PLAYING(Local_73[037]))
						{
							if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface"))
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface");
							}
						}
						else if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/nothing") && iLocal_21)
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/nothing");
						}
						fVar6 = (Local_73[037].f_112 * Local_73[137].f_72);
					}
					else if (iLocal_42 != 2 || iLocal_42 != 3)
					{
						fVar6 = (Local_73[037].f_144 * 2.0f);
						Local_73[037].f_72 = (Local_73[037].f_72 - Local_73[037].f_104);
					}
					if (iLocal_42 == 0)
					{
						Local_73[137].f_72 = (Local_73[137].f_72 - (Local_73[137].f_104 * 3.0f));
					}
					else if (iLocal_42 == 1)
					{
						Local_73[137].f_72 = (Local_73[137].f_72 - (Local_73[137].f_104 * 2.0f));
					}
					else
					{
						Local_73[137].f_72 = (Local_73[137].f_72 - Local_73[137].f_104);
					}
					break;
				
				case 0x00000001:
					if (IS_AMBIENT_SPEECH_PLAYING(Local_73[137]))
					{
						if (!IS_ACTION_NODE_PLAYING(Local_73[137], "arm_wrestling/B/Sweep_B_Face/noface"))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_73[137], "arm_wrestling/B/Sweep_B_Face/noface");
						}
					}
					else
					{
						if (Function_241())
						{
							AUDIO_PLAY_VOCAL_EFFECT(Local_73[137], 2, 0);
						}
						if (!IS_ACTION_NODE_PLAYING(Local_73[137], "arm_wrestling/B/Sweep_B_Face/holding") && iLocal_21)
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_73[137], "arm_wrestling/B/Sweep_B_Face/holding");
						}
					}
					Local_73[137].f_72 = (Local_73[137].f_72 + Local_73[137].f_108);
					if (Local_73[137].f_72 < 1.0f)
					{
						Local_73[137].f_72 = 1.0f;
					}
					if (iLocal_42 == 0)
					{
						if (IS_AMBIENT_SPEECH_PLAYING(Local_73[037]))
						{
							if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface"))
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface");
							}
						}
						else
						{
							if (Function_241())
							{
								AUDIO_PLAY_VOCAL_EFFECT(Local_73[037], 1, 0);
							}
							if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/pushing") && iLocal_21)
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/pushing");
							}
						}
						fVar6 = (Local_73[037].f_132 * (Local_73[037].f_72 - (1.1f - Local_73[137].f_72)));
						Local_73[037].f_72 = (Local_73[037].f_72 - Local_73[037].f_104);
					}
					else if (iLocal_42 == 1)
					{
						if (IS_AMBIENT_SPEECH_PLAYING(Local_73[037]))
						{
							if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface"))
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface");
							}
						}
						else
						{
							if (Function_241())
							{
								AUDIO_PLAY_VOCAL_EFFECT(Local_73[037], 2, 0);
							}
							if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/holding") && iLocal_21)
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/holding");
							}
						}
						fVar6 = (Local_73[037].f_128 * ((1.1f - Local_73[137].f_72) - (1.1f - Local_73[037].f_72)));
						Local_73[037].f_72 = (Local_73[037].f_72 + Local_73[037].f_108);
					}
					else if (iLocal_42 == 4294967295)
					{
						if (IS_AMBIENT_SPEECH_PLAYING(Local_73[037]))
						{
							if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface"))
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface");
							}
						}
						else if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/nothing") && iLocal_21)
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/nothing");
						}
						fVar6 = (Local_73[037].f_124 * (1.1f - Local_73[137].f_72));
					}
					else if (iLocal_42 != 2 || iLocal_42 != 3)
					{
						fVar6 = (Local_73[037].f_144 * 2.0f);
						Local_73[037].f_72 = (Local_73[037].f_72 - Local_73[037].f_104);
					}
					break;
				
				case 0xFFFFFFFF:
					if (IS_AMBIENT_SPEECH_PLAYING(Local_73[137]))
					{
						if (!IS_ACTION_NODE_PLAYING(Local_73[137], "arm_wrestling/B/Sweep_B_Face/noface"))
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_73[137], "arm_wrestling/B/Sweep_B_Face/noface");
						}
					}
					else if (!IS_ACTION_NODE_PLAYING(Local_73[137], "arm_wrestling/B/Sweep_B_Face/nothing") && iLocal_21)
					{
						SET_ACTION_NODE_FOR_ACTOR(Local_73[137], "arm_wrestling/B/Sweep_B_Face/nothing");
					}
					if (iLocal_42 == 0)
					{
						if (IS_AMBIENT_SPEECH_PLAYING(Local_73[037]))
						{
							if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface"))
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface");
							}
						}
						else
						{
							if (Function_241())
							{
								AUDIO_PLAY_VOCAL_EFFECT(Local_73[037], 1, 0);
							}
							if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/pushing") && iLocal_21)
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/pushing");
							}
						}
						fVar6 = (Local_73[037].f_144 * Local_73[037].f_72);
						Local_73[037].f_72 = (Local_73[037].f_72 - Local_73[037].f_104);
					}
					else if (iLocal_42 == 1)
					{
						if (IS_AMBIENT_SPEECH_PLAYING(Local_73[037]))
						{
							if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface"))
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface");
							}
						}
						else
						{
							if (Function_241())
							{
								AUDIO_PLAY_VOCAL_EFFECT(Local_73[037], 2, 0);
							}
							if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/holding") && iLocal_21)
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/holding");
							}
						}
						fVar6 = (Local_73[037].f_140 * (1.1f - Local_73[037].f_72));
						Local_73[037].f_72 = (Local_73[037].f_72 + Local_73[037].f_108);
					}
					else if (iLocal_42 == 4294967295)
					{
						if (IS_AMBIENT_SPEECH_PLAYING(Local_73[037]))
						{
							if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface"))
							{
								SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/noface");
							}
						}
						else if (!IS_ACTION_NODE_PLAYING(Local_73[037], "arm_wrestling/A/Sweep_A_Face/nothing") && iLocal_21)
						{
							SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/A/Sweep_A_Face/nothing");
						}
						fVar6 = Local_73[037].f_136;
					}
					else if (iLocal_42 != 2 || iLocal_42 != 3)
					{
						fVar6 = (Local_73[037].f_144 * 2.0f);
						Local_73[037].f_72 = (Local_73[037].f_72 - Local_73[037].f_104);
					}
					break;
				
				case 0x00000002:
				case 0x00000003:
					fVar6 = (Local_73[037].f_112 * 2.0f);
					Local_73[137].f_72 = (Local_73[137].f_72 - Local_73[137].f_104);
					if (Local_73[137].f_72 >= 0.0f)
					{
						iLocal_40 = 4294967295;
					}
					break;
			}
			if (iLocal_40 == 2 && iLocal_40 == 3)
			{
				iLocal_40 = 4294967295;
			}
			PRINTSTRING("fArmPhaseDelta is ");
			PRINTFLOAT(fVar6);
			PRINTNL();
			fVar7 = (100.0f * fVar6);
			fVar8 = 0.0f;
			fVar9 = ((-fLocal_26 * 10.0f) * bLocal_68);
			fLocal_27 = (((fLocal_26 + (fVar7 / 10.0f)) + fVar9) + fVar8);
			fLocal_28 = (fLocal_29 + (fLocal_27 * bLocal_68));
			if (FABS(fLocal_27) > 1.0f)
			{
				fVar10 = (0.015f * (1.0f - FABS(bLocal_27)));
			}
			else
			{
				fVar10 = 0.0f;
			}
			fLocal_28 = (fLocal_28 + RAND_FLOAT_RANGE(-fVar10, fVar10));
			PRINTSTRING("ShakeRange is ");
			PRINTFLOAT(fVar10);
			PRINTNL();
			if (fLocal_28 > -1.0f)
			{
				bLocal_27 = 0.0f;
				fLocal_28 = -1.0f;
			}
			else if (fLocal_28 < 1.0f)
			{
				bLocal_27 = 0.0f;
				fLocal_28 = 1.0f;
			}
			Local_73.f_484 = ((fLocal_28 / 2.0f) + 0.5f);
			fLocal_26 = bLocal_27;
			fLocal_29 = fLocal_28;
			iVar11 = 0;
			while (iVar11 < 1)
			{
				if (Local_73[iVar1137].f_72 < 1.0f)
				{
					Local_73[iVar1137].f_72 = 1.0f;
				}
				else if (Local_73[iVar1137].f_72 >= 0.2f)
				{
					if (iVar11 == 0)
					{
						Local_73[iVar1137].f_72 = 0.2f;
					}
					else if (Local_73[iVar1137].f_72 >= 0.0f)
					{
						Local_73[iVar1137].f_72 = 0.0f;
					}
				}
				iVar11++;
			}
			if (!bLocal_48)
			{
				if (Local_73.f_484 <= 1.0f)
				{
					Function_247(&iLocal_31);
					SET_PANIM_PHASE(Local_73[137], 1.0f);
					SET_PANIM_PHASE(Local_73[037], 0.0f);
					if (iLocal_40 == 2)
					{
						PLAY_SOUND_FRONTEND("FIST_SLAM_ON_WOOD_HARD_MASTER");
					}
					else
					{
						PLAY_SOUND_FRONTEND("FIST_SLAM_ON_WOOD_MED_MASTER");
					}
					iLocal_1 = 7;
				}
				else if (Local_73.f_484 >= 0.0f)
				{
					Function_247(&iLocal_31);
					SET_PANIM_PHASE(Local_73[137], 0.0f);
					SET_PANIM_PHASE(Local_73[037], 1.0f);
					if (iLocal_42 == 2)
					{
						PLAY_SOUND_FRONTEND("FIST_SLAM_ON_WOOD_HARD_MASTER");
					}
					else
					{
						PLAY_SOUND_FRONTEND("FIST_SLAM_ON_WOOD_MED_MASTER");
					}
					iLocal_1 = 8;
				}
			}
			if (Local_73.f_484 <= 0.5f)
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[137]), "bArmWinning", 1);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[137]), "bArmLosing", 0);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[037]), "bArmWinning", 0);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[037]), "bArmLosing", 1);
			}
			else if (Local_73.f_484 > 0.5f)
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[137]), "bArmWinning", 0);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[137]), "bArmLosing", 1);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[037]), "bArmWinning", 1);
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[037]), "bArmLosing", 0);
			}
			if (IS_BUTTON_RELEASED(Function_260(), 5, 1, 1))
			{
				if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_51()), "bQuitMinigame"))
				{
					UI_ENTER("Armwrestling_Quit_Confirmation_Popup");
				}
				iLocal_19 = iLocal_1;
				iLocal_1 = 48;
			}
			else
			{
				Function_261(4, 2, "ArmWrestling_Quit", 1, 0, 0, 0, 0);
			}
			break;
		
		case 0x00000007:
			Function_186();
			SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/Lose");
			SET_ACTION_NODE_FOR_ACTOR(Local_73[137], "arm_wrestling/Win");
			if (Local_73[137].f_76 + 1 > 2)
			{
				if (Local_73.f_508 > Local_49.f_24)
				{
					SAY_SINGLE_LINE_CONTEXT(Local_73[037], 241, Local_73[137], 0, 1, 0, 4294967295, 4294967295, 0, 1);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(Local_73[037], 238, Local_73[137], 0, 1, 0, 4294967295, 4294967295, 0, 1);
					SAY_SINGLE_LINE_CONTEXT(Local_73[137], 433, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(Local_73[037], 237, Local_73[137], 0, 1, 0, 4294967295, 4294967295, 0, 1);
				SAY_SINGLE_LINE_CONTEXT(Local_73[137], 434, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			if (Function_250(&iLocal_34) < Function_64(444))
			{
				Function_240(444, Function_250(&iLocal_34), 0);
			}
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[137]), "bArmWinning", 0);
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[137]), "bArmLosing", 0);
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[037]), "bArmWinning", 0);
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[037]), "bArmLosing", 0);
			Function_247(&iLocal_31);
			iLocal_1 = 9;
			break;
		
		case 0x00000008:
			Function_186();
			SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/Win");
			SET_ACTION_NODE_FOR_ACTOR(Local_73[137], "arm_wrestling/Lose");
			if (Local_73[037].f_76 + 1 > 2)
			{
				SAY_SINGLE_LINE_CONTEXT(Local_73[037], 239, Local_73[137], 0, 1, 0, 4294967295, 4294967295, 0, 1);
				SAY_SINGLE_LINE_CONTEXT(Local_73[137], 435, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			else
			{
				SAY_SINGLE_LINE_CONTEXT(Local_73[037], 240, Local_73[137], 0, 1, 0, 4294967295, 4294967295, 0, 1);
				SAY_SINGLE_LINE_CONTEXT(Local_73[137], 436, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
			if (Function_250(&iLocal_34) < Function_64(444))
			{
				Function_240(444, Function_250(&iLocal_34), 0);
			}
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[137]), "bArmWinning", 0);
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[137]), "bArmLosing", 0);
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[037]), "bArmWinning", 0);
			DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(Local_73[037]), "bArmLosing", 0);
			Function_247(&iLocal_31);
			iLocal_1 = 10;
			break;
		
		case 0x00000009:
			if (Function_250(&iLocal_31) < 4.5f)
			{
				Function_120(Local_73.f_500 * 2, 0);
				DECOR_SET_INT(Local_73[037], "iAdditionalMoney", false);
				UI_LABEL_SET_TEXT("Scorebox_Cash", "ArmWrestling_CashLabel");
				UI_LABEL_SET_VALUE("Scorebox_Cash", Function_245());
				UI_REFRESH("Scorebox_Cash");
				PLAY_SOUND_FRONTEND("HUD_MINIGAME_WIN_MASTER");
				UI_LABEL_SET_VALUE("Scorebox_Bet", 0);
				Local_73[137].f_76++;
				Function_90(441, Local_73.f_500, 0, 0);
				Function_90(450, Local_73.f_500, 0, 0);
				if ((Function_68(597) + Function_68(450)) >= 10000)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
					{
						AWARD_ACHIEVEMENT(24);
					}
				}
				iLocal_1 = 106;
			}
			break;
		
		case 0x0000000A:
			if (Function_250(&iLocal_31) < 4.5f)
			{
				Local_73[037].f_76++;
				Function_90(443, 1, 0, 0);
				Function_118(441, Local_73.f_500, 0);
				Function_118(450, Local_73.f_500, 0);
				iLocal_1 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_186();
			FLASH_SET_INT("numberSystem", "showBar", 0);
			Local_73.f_504++;
			if (Local_73[137].f_76 > 2)
			{
				bLocal_47 = Local_73[037];
				if (Local_73.f_508 > Local_49.f_24)
				{
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_16 = 0;
				}
				else
				{
					Function_239(GET_PLAYER_ACTOR(0));
					*(&Var12 + 12) = { StackVal, StackVal, Function_239(GET_PLAYER_ACTOR(0)) };
					Function_238(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)));
					Var12 = { StackVal, StackVal, Function_238(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0))) };
					Var12.f_24 = 0;
					DESTROY_OBJECT(bLocal_17);
					while (IS_OBJECT_VALID(bLocal_17) && !IS_EXITFLAG_SET())
					{
						WAIT(0);
					}
					bLocal_17 = Function_235(bLocal_25, 0, &Var12, 1, 0, 0);
					SAY_SINGLE_LINE_CONTEXT((*&Local_49 + 4)[Local_73.f_508], 160, Function_51(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					bLocal_47 = Local_73[037];
					Function_221(&Local_73, 0);
					Function_247(&iLocal_31);
					iLocal_1 = 65;
				}
			}
			else if (Local_73[037].f_76 <= 2 || Function_245() >= 0)
			{
				iLocal_0 = 3;
				iLocal_1 = 0;
				iLocal_16 = 1;
			}
			else
			{
				if (Local_73.f_508 <= Local_49.f_24)
				{
					SAY_SINGLE_LINE_CONTEXT((*&Local_49 + 4)[Local_73.f_508], 161, Function_51(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
				}
				iLocal_1 = 35;
			}
			break;
		
		case 0x00000041:
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_47, "arm_wrestling/Stand"))
			{
				DESTROY_ACTOR(bLocal_47);
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO((*&Local_49 + 4)[Local_73.f_508])))
				{
					GRINGO_DEACTIVATE_AND_RESET_ACTORS(GET_CURRENT_GRINGO((*&Local_49 + 4)[Local_73.f_508]));
				}
				iLocal_1 = 34;
			}
			break;
		
		case 0x00000022:
			if ((GRINGO_QUERY_NAMED_COMPONENT_USER(GET_GRINGO_FROM_OBJECT(StackVal), "UseCase1") != "" && !IS_ACTOR_VALID(bLocal_47)) && MAKE_ACTOR_READY_FOR_ACTION((*&Local_49 + 4)[Local_73.f_508], 1))
			{
				Function_232((*&Local_49 + 4)[Local_73.f_508], &Local_73, 0, GET_ACTOR_ENUM_STRING((*&Local_49 + 4)[Local_73.f_508]), Local_73.f_508, 1);
				Local_73[137].f_76 = 0;
				Local_73.f_508++;
				iLocal_1 = 36;
			}
			break;
		
		case 0x00000024:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(Local_73[037], "arm_wrestling/Fake/Sit"))
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_17);
				Function_239(GET_PLAYER_ACTOR(0));
				*(&Var19 + 12) = { StackVal, StackVal, Function_239(GET_PLAYER_ACTOR(0)) };
				Function_238(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)));
				Var19 = { StackVal, StackVal, Function_238(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0))) };
				Var19.f_24 = 0;
				DESTROY_OBJECT(bLocal_17);
				while (IS_OBJECT_VALID(bLocal_17) && !IS_EXITFLAG_SET())
				{
					WAIT(0);
				}
				bLocal_17 = Function_228(bLocal_25, 0, &Var19, 1, 0, 0);
				iLocal_1 = 46;
			}
			break;
		
		case 0x0000002E:
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(Local_73[037], "arm_wrestling/Fake/Sit"))
			{
				SET_ACTION_NODE_FOR_ACTOR(Local_73[037], "arm_wrestling/Idle");
				while (IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !IS_EXITFLAG_SET())
				{
					END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_17);
				}
				Function_226(&Local_73);
				switch (bLocal_22)
				{
					case 0x00000000:
						Function_258(Local_73[137], &iLocal_18);
						break;
					
					case 0x00000001:
						Function_257(Local_73[137], &iLocal_18);
						break;
					
					case 0x00000002:
						Function_256(Local_73[137], &iLocal_18);
						break;
				}
				iLocal_1 = 35;
			}
			break;
		
		case 0x00000030:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_51()), "bQuitMinigame"))
			{
				if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(Function_51()), "bQuitMinigame"))
				{
					iLocal_0 = 3;
					iLocal_1 = 0;
					iLocal_16 = 1;
				}
				else
				{
					iLocal_1 = iLocal_19;
				}
				UI_EXIT("Armwrestling_Quit_Confirmation_Popup");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_51()), "bQuitMinigame");
			}
			break;
		
		case 0x00000031:
			break;
		
		case 0x0000002F:
			break;
	}
	return;
}

void Function_226(int iParam0) //Position: 0xD8F8 / 55544
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_227(Function_51(), &vVar0, &vVar3);
	SET_OBJECT_POSITION((*iParam0)[037], vVar0);
	SET_OBJECT_ORIENTATION((*iParam0)[037], vVar3);
	return;
}

void Function_227(bool bParam0, var uParam1, bool bParam2) //Position: 0xD922 / 55586
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		vVar0 = { -0.004f, 0.0f, -0.1666f };
		vVar3 = { 0.0f, 180.0f, 0.0f };
		GET_OBJECT_RELATIVE_ORIENTATION(bParam0, vVar3, bParam2);
		GET_OBJECT_RELATIVE_POSITION(bParam0, vVar0, uParam1);
	}
	return;
}

bool Function_228(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xD962 / 55650
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_55(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "5Fillet_OppSit", 2, 1);
	}
	Function_229(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "minigame");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_229(var uParam0, int iParam1) //Position: 0xD9E6 / 55782
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_231(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_230(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 1, 0, 5.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 1);
	return;
}

void Function_230(var uParam0, int iParam1) //Position: 0xDA28 / 55848
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -0.840515f, 0.917482f, 1.675858f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.131741f, 1.124052f, 0.087639f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 20.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_231(var uParam0, bool bParam1) //Position: 0xDB18 / 56088
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -1.086689f, 0.929619f, 1.843185f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { -0.12188f, 1.12377f, 0.056633f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 10.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 20.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_232(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5) //Position: 0xDC08 / 56328
{
	int iVar0;
	int iVar1;
	
	if (!iParam2 != 4294967295 && !(*bParam1 + 448)[iParam23])
	{
		iVar0 = 0;
		while (iVar0 < bParam1->f_476)
		{
			if ((*bParam1)[iVar037] == "")
			{
				iVar1 = iVar0;
			}
			iVar0++;
		}
		Function_234(bParam1[iVar137], bParam0, iParam2, iParam3, iParam4);
		(*bParam1 + 448)[iParam23] = 1;
		(bParam1 + 448[iParam23])->f_4 = iVar1;
		bParam1->f_476++;
		if (bParam0 == GET_PLAYER_ACTOR(0))
		{
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			bParam1->f_480 = iParam2;
			if (!SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase1", 0, 0, 1))
			{
			}
			Function_233(StackVal, GET_GRINGO_FROM_OBJECT(&iLocal_18));
		}
		else
		{
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(StackVal), true);
			TASK_PRIORITY_SET(bParam0, 1);
			if (bParam5)
			{
				SNAP_ACTOR_TO_GRINGO(StackVal, bParam0, "UseCase1", 0, 0, 0);
				TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase1", 4294967295, 1);
			}
			else
			{
				TASK_USE_GRINGO(StackVal, GET_GRINGO_FROM_OBJECT(bParam0), "UseCase1", 4294967295, 1);
			}
		}
		DECOR_SET_INT(StackVal, GET_OBJECT_FROM_ACTOR(bParam0), "PlayerIndex");
		PRINTSTRING("Setting PlayerIndex Decor to ");
		PRINTINT(DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "PlayerIndex"));
		PRINTNL();
	}
	else
	{
		LOG_ERROR("Adding Player When All Seats Are Taken.");
	}
}

void Function_233(var uParam0, bool bParam1) //Position: 0xDDE7 / 56807
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	vector3 vVar19;
	vector3 vVar22;
	
	if (IS_GRINGO_VALID(bParam1))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bParam1), &vVar0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar3, 0);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar6, 1);
		GET_OBJECT_AXIS(GET_OBJECT_FROM_GRINGO(bParam1), &vVar9, 2);
		fVar12 = 0.6f;
		fVar13 = 1.0f;
		fVar14 = 0.8f;
		fVar15 = 0.4f;
		fVar16 = 1.16f;
		fVar17 = -0.4f;
		fVar18 = 37.0f;
		vVar19 = { StackVal, StackVal, vVar0 };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar19, StackVal) * Vector(fVar12, fVar12, fVar12), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar19, StackVal) * Vector(fVar13, fVar13, fVar13), StackVal, StackVal) };
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar19, StackVal) * Vector(fVar14, fVar14, fVar14), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, vVar0 };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar22, StackVal) * Vector(fVar15, fVar15, fVar15), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar22, StackVal) * Vector(fVar16, fVar16, fVar16), StackVal, StackVal) };
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar9, vVar22, StackVal) * Vector(fVar17, fVar17, fVar17), StackVal, StackVal) };
		while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*uParam0) && !IS_EXITFLAG_SET())
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(*uParam0);
		}
		SET_CAMERA_POSITION(*uParam0, vVar19);
		SET_CAMERA_TARGET_POSITION(*uParam0, vVar22, 0);
		SET_CAMERA_FOV(*uParam0, fVar18);
		if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*uParam0, 0))
		{
			SET_CURRENT_CAMERA_ON_CHANNEL(*uParam0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		LOG_ERROR("LOOK_AT_POKER_SIT_GRINGO_RELATIVE called with invalid gringo");
	}
	return;
}

void Function_234(int iParam0, bool bParam1, var uParam2, char* cParam3, int iParam4) //Position: 0xDF5A / 57178
{
	if (!*iParam0 != GET_PLAYER_ACTOR(0))
	{
		AI_SET_NAV_SUBGRID_CELL_SIZE(*iParam0, 0.35f);
	}
	if (!AI_IGNORE_ACTOR(cParam1))
	{
		LOG_ERROR("AI_IGNORE_ACTOR failed");
	}
	SET_ACTOR_FACTION(bParam1, 1);
	iParam0->f_76 = 0;
	iParam0->f_72 = 1.0f;
	*iParam0 = bParam1;
	iParam0->f_68 = uParam2;
	if (bParam1 == GET_PLAYER_ACTOR(0))
	{
		strcpy(iParam0 + 4, "Poker_Name_P", 64);
	}
	else
	{
		strcpy(iParam0 + 4, cParam3, 64);
	}
	switch (iParam4)
	{
		case 0xFFFFFFFF:
			iParam0->f_104 = 0.011f;
			iParam0->f_108 = 0.02f;
			iParam0->f_80 = 1.0f;
			iParam0->f_84 = 0.25f;
			iParam0->f_88 = 0.5f;
			iParam0->f_92 = 4294967295;
			iParam0->f_96 = 0.5f;
			if (Function_96())
			{
				iParam0->f_100 = 3;
			}
			else
			{
				iParam0->f_100 = 5;
			}
			break;
		
		case 0x00000000:
			iParam0->f_112 = 0.02f;
			iParam0->f_116 = 0.015f;
			iParam0->f_120 = -0.02f;
			iParam0->f_124 = 0.001f;
			iParam0->f_128 = 0.0f;
			iParam0->f_132 = -0.015f;
			iParam0->f_136 = -0.002f;
			iParam0->f_140 = -0.02f;
			iParam0->f_144 = -0.035f;
			iParam0->f_104 = 0.03f;
			iParam0->f_108 = 0.03f;
			iParam0->f_80 = 1.0f;
			iParam0->f_84 = 0.4f;
			iParam0->f_88 = 0.7f;
			iParam0->f_92 = 4294967295;
			iParam0->f_96 = 0.5f;
			if (Function_96())
			{
				iParam0->f_100 = 3;
			}
			else
			{
				iParam0->f_100 = 5;
			}
			break;
		
		case 0x00000001:
			iParam0->f_112 = 0.02f;
			iParam0->f_116 = 0.015f;
			iParam0->f_120 = -0.02f;
			iParam0->f_124 = 0.001f;
			iParam0->f_128 = 0.0f;
			iParam0->f_132 = -0.015f;
			iParam0->f_136 = -0.002f;
			iParam0->f_140 = -0.02f;
			iParam0->f_144 = -0.035f;
			iParam0->f_104 = 0.03f;
			iParam0->f_108 = 0.03f;
			iParam0->f_80 = 1.0f;
			iParam0->f_84 = 0.4f;
			iParam0->f_88 = 0.7f;
			iParam0->f_92 = 4294967295;
			iParam0->f_96 = 0.5f;
			if (Function_96())
			{
				iParam0->f_100 = 3;
			}
			else
			{
				iParam0->f_100 = 5;
			}
			break;
		
		case 0x00000002:
			iParam0->f_112 = 0.02f;
			iParam0->f_116 = 0.015f;
			iParam0->f_120 = -0.02f;
			iParam0->f_124 = 0.001f;
			iParam0->f_128 = 0.0f;
			iParam0->f_132 = -0.015f;
			iParam0->f_136 = -0.002f;
			iParam0->f_140 = -0.02f;
			iParam0->f_144 = -0.035f;
			iParam0->f_104 = 0.03f;
			iParam0->f_108 = 0.03f;
			iParam0->f_80 = 1.0f;
			iParam0->f_84 = 0.4f;
			iParam0->f_88 = 0.7f;
			iParam0->f_92 = 4294967295;
			iParam0->f_96 = 0.5f;
			if (Function_96())
			{
				iParam0->f_100 = 3;
			}
			else
			{
				iParam0->f_100 = 5;
			}
			break;
	}
	ACTOR_HOLSTER_WEAPON(*iParam0, 1);
}

bool Function_235(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xE224 / 57892
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_55(), 1, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "5Finger_ChangeOpponent", 1, 1);
	}
	Function_236(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "minigame");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, iParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_236(var uParam0, int iParam1) //Position: 0xE2B0 / 58032
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_237(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 0, 4.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 1);
	return;
}

void Function_237(var uParam0, bool bParam1) //Position: 0xE2E0 / 58080
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 19.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	vVar0 = { -1.018317f, 0.975367f, -2.003327f };
	UNK_0xF76F2BB3(&vVar0, iParam1, iParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) + Vector(0.0f, 0.0f, 0.0f) };
	SET_CAMERASHOT_POSITION(*uParam0, vVar0);
	vVar0 = { 0.004787f, 1.099193f, -0.072784f };
	UNK_0xF76F2BB3(&vVar0, bParam1, bParam1->f_24, 4);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(bParam1 + 12), vVar0, StackVal) };
	SET_CAMERASHOT_TARGET_POSITION(*uParam0, vVar0, 0);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 2.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 20.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0.5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 2);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

vector3 Function_238(bool bParam0) //Position: 0xE3D8 / 58328
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_239(bool bParam0) //Position: 0xE3FF / 58367
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

int Function_240(int iParam0, bool bParam1, bool bParam2) //Position: 0xE410 / 58384
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > bParam1)
	{
		Function_67(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_66(iParam0);
	if (bParam2)
	{
		Function_54(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

bool Function_241() //Position: 0xE67C / 59004
{
	int iVar0;
	
	iVar0 = RAND_INT_RANGE(0, 100);
	if (iVar0 <= 40)
	{
		return 1;
	}
	return 0;
}

bool Function_242(var uParam0, int iParam1) //Position: 0xE697 / 59031
{
	return Function_14((*uParam0)[Function_244(iParam1)], Function_243(iParam1));
}

int Function_243(int iParam0) //Position: 0xE6AE / 59054
{
	return Function_146((iParam0 % 32));
}

int Function_244(int iParam0) //Position: 0xE6BC / 59068
{
	return (iParam0 / 32);
}

int Function_245() //Position: 0xE6C7 / 59079
{
	return Function_68(0);
}

int Function_246(bool bParam0, bool bParam1) //Position: 0xE6D1 / 59089
{
	int iVar0;
	
	iVar0 = Function_68(0);
	if ((Function_68(0) - bParam0) <= 0)
	{
		bParam0 = iVar0;
	}
	if (bParam0 >= 0)
	{
		Function_118(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), iVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_68(0));
	return 1;
}

void Function_247(int iParam0) //Position: 0xE761 / 59233
{
	Function_248(iParam0, 0.0f);
	return;
}

void Function_248(var uParam0, float fParam1) //Position: 0xE76D / 59245
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_78(uParam0, 1);
	Function_38(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

var Function_249(int iParam0, int iParam1) //Position: 0xE78E / 59278
{
	if (iParam0 < 1)
	{
		iParam0 = 1;
	}
	if (iParam1[037]->f_100 == 4294967295)
	{
		if (iParam0 > Function_68(0))
		{
			iParam0 = Function_68(0);
		}
	}
	else if (iParam0 > iParam1[037]->f_100)
	{
		iParam0 = iParam1[037]->f_100;
	}
	return iParam0;
}

bool Function_250(int iParam0) //Position: 0xE7D1 / 59345
{
	if (Function_252(iParam0))
	{
		if (Function_251(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_251(int iParam0) //Position: 0xE899 / 59545
{
	return Function_14(*iParam0, 2);
}

bool Function_252(int iParam0) //Position: 0xE8A6 / 59558
{
	return Function_14(*iParam0, 1);
}

bool Function_253(var uParam0, int iParam1) //Position: 0xE8B3 / 59571
{
	if (!Function_242(uParam0, iParam1))
	{
		Function_254(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void Function_254(var uParam0, bool bParam1) //Position: 0xE8CE / 59598
{
	Function_78(uParam0[Function_244(bParam1)], Function_243(bParam1));
	return;
}

void Function_255(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xE8E5 / 59621
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
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_6269) };
		}
		PRINT_OBJECTIVE_B(uParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(uParam0, iParam1, iParam7, iParam3, iParam2, uVar4, iParam5, iParam6);
	}
}

void Function_256(bool bParam0, int iParam1) //Position: 0xE96A / 59754
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	GET_POSITION(bParam0, &vVar0);
	GET_ACTOR_AXIS(bParam0, &vVar3, 2);
	GET_ACTOR_AXIS(bParam0, &vVar6, 0);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar0, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal) };
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar9, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal) };
	vVar9.f_4 = (vVar9.y + 1.1f);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar12, StackVal) * Vector(0.8f, 0.8f, 0.8f), StackVal, StackVal) };
	vVar12.f_4 = (vVar12.y + 1.1f);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*iParam1) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*iParam1);
	}
	SET_CAMERA_POSITION(*iParam1, vVar9);
	SET_CAMERA_TARGET_POSITION(*iParam1, vVar12, 0);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*iParam1, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*iParam1, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_257(bool bParam0, int iParam1) //Position: 0xEA2F / 59951
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	GET_POSITION(bParam0, &vVar0);
	GET_ACTOR_AXIS(bParam0, &vVar3, 2);
	GET_ACTOR_AXIS(bParam0, &vVar6, 0);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.15f, 0.15f, 0.15f), StackVal, StackVal) };
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar9, StackVal) * Vector(1.2f, 1.2f, 1.2f), StackVal, StackVal) };
	vVar9.f_4 = (vVar9.y + 0.95f);
	vVar12 = { StackVal, StackVal, vVar9 };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar12, StackVal) * Vector(1.0f, 1.0f, 1.0f), StackVal, StackVal) };
	vVar12.f_4 = (vVar12.y + 0.1f);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*iParam1) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*iParam1);
	}
	SET_CAMERA_POSITION(*iParam1, vVar9);
	SET_CAMERA_TARGET_POSITION(*iParam1, vVar12, 0);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*iParam1, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*iParam1, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_258(bool bParam0, int iParam1) //Position: 0xEAF0 / 60144
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	GET_POSITION(bParam0, &vVar0);
	GET_ACTOR_AXIS(bParam0, &vVar3, 2);
	GET_ACTOR_AXIS(bParam0, &vVar6, 0);
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.8f, 0.8f, 0.8f), StackVal, StackVal) };
	vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar6, vVar9, StackVal) * Vector(0.6f, 0.6f, 0.6f), StackVal, StackVal) };
	vVar9.f_4 = (vVar9.y + 1.6f);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.2f, 0.2f, 0.2f), StackVal, StackVal) };
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar6, vVar12, StackVal) * Vector(0.0f, 0.0f, 0.0f), StackVal, StackVal) };
	vVar12.f_4 = (vVar12.y + 1.0f);
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(*iParam1) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(*iParam1);
	}
	SET_CAMERA_POSITION(*iParam1, vVar9);
	SET_CAMERA_TARGET_POSITION(*iParam1, vVar12, 0);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(*iParam1, 0))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(*iParam1, 0, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_259(var uParam0) //Position: 0xEBB9 / 60345
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(*uParam0)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

int Function_260() //Position: 0xEBD8 / 60376
{
	bool bVar0;
	
	bVar0 = Function_51();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

int Function_261(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xEBF2 / 60402
{
	if (!Function_264(uParam0, iParam1))
	{
		return 0;
	}
	if (IS_STRING_VALID(bParam4))
	{
		return Function_263(uParam0, iParam2, iParam3, bParam4, iParam5, iParam6, iParam7);
	}
	return Function_262(uParam0, iParam2);
}

int Function_262(var uParam0, int iParam1) //Position: 0xEC2C / 60460
{
	UI_SET_PROMPT_STRING(uParam0, iParam1);
	return 1;
}

var Function_263(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xEC3A / 60474
{
	return FLASH_SET_ARRAY_STRING_FORMATTED("testInventory", "btn_PromptText", uParam1, uParam0, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool Function_264(var uParam0, int iParam1) //Position: 0xEC74 / 60532
{
	UI_SET_PROMPT_ICON(uParam0, iParam1);
	return 1;
}

void Function_265() //Position: 0xEC82 / 60546
{
	switch (iLocal_1)
	{
		case 0x00000000:
			if (Function_267())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
				Function_247(&iLocal_31);
				iLocal_1 = 106;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_255("Poker_PlayerChooseSeat_Objective", 4.0f, 1, 2, 0, 0, 0, 0);
				Function_247(&iLocal_31);
				iLocal_1 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_266(&Local_73))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				iLocal_1 = 8;
				Function_247(&iLocal_31);
			}
			break;
		
		case 0x00000008:
			if (Function_250(&iLocal_31) < 1.0f)
			{
				iLocal_1 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Local_73.f_504 = 0;
				iLocal_0 = 1;
				iLocal_1 = 35;
			}
			break;
	}
	return;
}

bool Function_266(int iParam0) //Position: 0xED51 / 60753
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0->f_448)
	{
		if (StackVal && GRINGO_QUERY_NAMED_COMPONENT_USER(GET_GRINGO_FROM_OBJECT(!(*iParam0 + 448)[iVar03]), "UseCase1") != GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)))
		{
			if (IS_ACTION_NODE_PLAYING(GET_PLAYER_ACTOR(0), "arm_wrestling/idle"))
			{
				Function_232(GET_PLAYER_ACTOR(0), iParam0, iVar0, "", 4294967295, 0);
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_267() //Position: 0xEDD1 / 60881
{
	int iVar0;
	
	switch (iLocal_8)
	{
		case 0x000003E8:
			if (IS_ACTOR_VALID((*&Local_49 + 4)[0]))
			{
				Function_232((*&Local_49 + 4)[0], &Local_73, 0, GET_ACTOR_ENUM_STRING((*&Local_49 + 4)[0]), 0, 0);
			}
			if (IS_ACTOR_VALID(Local_49.f_20))
			{
				Function_232(Local_49.f_20, &Local_73, 1, GET_ACTOR_ENUM_STRING(Local_49.f_20), 4294967295, 0);
			}
			SET_DRAW_ACTOR(Local_73[037], 0);
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				Function_269(GET_GRINGO_FROM_OBJECT(StackVal));
				iVar0++;
			}
			Function_268();
			SAY_SINGLE_LINE_CONTEXT(Local_73[137], 437, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			iLocal_8 = 1004;
			break;
		
		case 0x000003EC:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(Function_51(), "arm_wrestling/Idle"))
			{
				Function_226(&Local_73);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_268() //Position: 0xEEA0 / 61088
{
	int iVar0;
	
	Function_188(4, 0);
	iVar0 = 0;
	while (iVar0 <= Local_49.f_24)
	{
		if (IS_ACTOR_VALID((*&Local_49 + 4)[iVar0]))
		{
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_49 + 4)[iVar0], 1, 0);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_49 + 4)[iVar0], 2, 0);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_49 + 4)[iVar0], 3, 1);
			ACTOR_ENABLE_VARIABLE_MESH((*&Local_49 + 4)[iVar0], 4, 1);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_49 + 4)[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_269(bool bParam0) //Position: 0xEF0D / 61197
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase1");
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
		while (iVar1 >= 4294967295)
		{
			iVar2 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bVar0);
			iVar3 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(iVar2, bParam0);
			if (IS_PHYSINST_VALID(iVar3))
			{
				HIDE_PHYSINST(iVar3);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, iVar1 + 1);
		}
	}
	bVar0 = GRINGO_GET_USE_COMPONENT_EXT(bParam0, "UseCase2");
	if (IS_GRINGO_COMPONENT_VALID(bVar0))
	{
		iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, 0);
		while (iVar1 >= 4294967295)
		{
			iVar4 = GRINGO_GET_INDEXED_CHILD_COMPONENT(iVar1, bVar0);
			iVar5 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(iVar4, bParam0);
			if (IS_PHYSINST_VALID(iVar5))
			{
				HIDE_PHYSINST(iVar5);
			}
			iVar1 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar0, iVar1 + 1);
		}
	}
	return;
}

void Function_270(int iParam0) //Position: 0xEFF5 / 61429
{
	iParam0->f_476 = 0;
	Function_271(iParam0 + 448);
	iParam0->f_484 = 0.5f;
	iParam0->f_508 = 1;
	return;
}

void Function_271(var uParam0) //Position: 0xF019 / 61465
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		(*uParam0)[iVar03] = 0;
		switch (iVar0)
		{
			case 0x00000000:
				vVar1 = { StackVal, StackVal, *(&Local_49 + 40[03]) };
				uParam0[iVar03]->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_arm_wrestling", &vVar1, 2.0f, 0));
				while (!IS_OBJECT_VALID(StackVal) && !IS_EXITFLAG_SET())
				{
					uParam0[iVar03]->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_arm_wrestling", &vVar1, 2.0f, 0));
					WAIT(0);
				}
				break;
			
			case 0x00000001:
				vVar1 = { StackVal, StackVal, *(&Local_49 + 40[13]) };
				uParam0[iVar03]->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_arm_wrestling", &vVar1, 2.0f, 0));
				while (!IS_OBJECT_VALID(StackVal) && !IS_EXITFLAG_SET())
				{
					uParam0[iVar03]->f_8 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_arm_wrestling", &vVar1, 2.0f, 0));
					WAIT(0);
				}
				break;
			
			default:
				LOG_ERROR("Looking for more chairs then we have flags");
				break;
		}
		uParam0[iVar03]->f_4 = 4294967295;
		iVar0++;
	}
	return;
}

void Function_272() //Position: 0xF21F / 61983
{
	bLocal_3 = true;
	Function_1();
	return;
}

void Function_273() //Position: 0xF22B / 61995
{
	int iVar0;
	
	HUD_ENABLE(0);
	SET_HUD_MAP_DRAW_ENABLED(0);
	HUD_SET_MINIGAME_TYPE_LAYOUT(5);
	DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_MINIGAME", &uLocal_20);
	Function_289(1);
	Function_169(1);
	Function_287();
	bLocal_25 = CREATE_LAYOUT(Function_55());
	Function_286();
	Function_277();
	Function_276(&iLocal_31);
	Function_276(&iLocal_70);
	Function_276(&iLocal_37);
	Function_276(&iLocal_34);
	RENDERING_ENABLE_CHARACTER_CLIPPING(0);
	fLocal_69 = GET_CURRENT_GAME_TIME();
	iLocal_18 = CREATE_CAMERA_IN_LAYOUT(bLocal_25, "ArmWrestlingCamera", 2);
	iLocal_0 = 99;
	bLocal_30 = CREATE_VOLUME_IN_LAYOUT(bLocal_25, "ArmWrestling_StayOutvol", 2, *(&Local_49 + 40[03]), 0.0f, 0.0f, 0.0f, 2.75f, 2.0f, 2.75f);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (IS_ACTOR_VALID((*&Local_49 + 4)[iVar0]))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS((*&Local_49 + 4)[iVar0], 1);
			REFERENCE_ACTOR((*&Local_49 + 4)[iVar0]);
		}
		iVar0++;
	}
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_30);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_30);
	RESET_PROPS_IN_VOLUME(bLocal_30, 3);
	Function_274(&uLocal_23);
	if (Function_223(4, 4))
	{
		Function_259(&uLocal_23);
	}
	bLocal_43 = false;
	return;
}

void Function_274(int iParam0) //Position: 0xF34B / 62283
{
	Function_275(iParam0);
	return;
}

void Function_275(int iParam0) //Position: 0xF356 / 62294
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_276(var uParam0) //Position: 0xF375 / 62325
{
	if (!Function_252(uParam0))
	{
		Function_248(uParam0, 0.0f);
	}
	return;
}

void Function_277() //Position: 0xF38A / 62346
{
	Function_284(&bLocal_201, "fake_arm_wrestling", 1, 0);
	Function_284(&bLocal_201, "arm_wrestling", 1, 0);
	Function_284(&bLocal_201, "nminigames", 10, 0);
	REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\ARM_WRESTLING");
	while ((!Function_278(&bLocal_201) || !REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\ARM_WRESTLING")) && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	UI_PUSH("Minigame");
	while (!UNK_0x9D20BDC4("numberSystem") && !IS_EXITFLAG_SET())
	{
		WAIT(0);
	}
	return;
}

bool Function_278(int iParam0) //Position: 0xF470 / 62576
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_283();
	iVar1 = 0;
	if (!Function_180(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_282(iParam0[iVar03], 8);
		}
		else if (Function_281())
		{
			iVar1 = 1;
			Function_282(iParam0[iVar03], 8);
		}
		Function_282(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_180(iParam0[iVar03], 4))
		{
			if (!Function_180(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_180(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_180(iParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*iParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*iParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*iParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*iParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_282(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_180(iParam0[iVar03], 4))
		{
			if (!Function_180(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*iParam0)[iVar03], 4294967295))
						{
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_282(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_282(iParam0[iVar03], 2);
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
	Function_279();
	return 1;
}

void Function_279() //Position: 0xF7EB / 63467
{
	if (!Function_280(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_280(int iParam0) //Position: 0xF82B / 63531
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_281() //Position: 0xF847 / 63559
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

void Function_282(var uParam0, int iParam1) //Position: 0xF872 / 63602
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_283() //Position: 0xF883 / 63619
{
	if (!Function_280(128))
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

var Function_284(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xF8C5 / 63685
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_285(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_282(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_285(var uParam0, int iParam1, int iParam2) //Position: 0xF8FD / 63741
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_180(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_282(uParam0[iVar03], 4);
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

void Function_286() //Position: 0xF9C1 / 63937
{
	return;
}

void Function_287() //Position: 0xF9C7 / 63943
{
	Global_27768 = 1;
	SET_RETICLE_DRAW_DISABLED_BY_SCRIPT(0, 1);
	Function_190();
	Function_288();
	if (!Global_3384)
	{
		Global_3384 = 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	AUDIO_MG_START();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	return;
}

void Function_288() //Position: 0xF9F7 / 63991
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_289(int iParam0) //Position: 0xFA0B / 64011
{
	Function_290(&Global_28842, iParam0);
	return;
}

void Function_290(var uParam0, var uParam1) //Position: 0xFA19 / 64025
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

