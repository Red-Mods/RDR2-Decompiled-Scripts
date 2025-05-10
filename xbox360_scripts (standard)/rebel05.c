//Decompiled with MagicRDR v1.0
//Function Count : 886
//Statics Count : 1388
//Natives Count : 970
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
	int iLocal_24 = 0;
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
	struct<86> Local_41 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	bool bLocal_151 = false;
	bool bLocal_152 = false;
	bool bLocal_153 = false;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	bool bLocal_156 = false;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	bool bLocal_161 = false;
	bool bLocal_162 = false;
	float fLocal_163 = 0.0f;
	bool bLocal_164 = false;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	var uLocal_167[6] = { 0, 0, 0, 0, 0, 0 };
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
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	struct<3369> Local_188 = { 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_185 = 0;
	iLocal_186 = 16;
	iLocal_187 = 0;
	Local_1032 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_1039 = 99;
	iLocal_1040 = 6;
	Local_1041 = 1000;
	while (Function_282())
	{
		Function_239();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x53 / 83
{
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_1058);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_1059);
	Function_238();
	Function_237();
	Function_236();
	Function_235();
	Function_234();
	Function_233();
	Function_232();
	Function_231();
	Function_230();
	Function_229();
	Function_228();
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	REMOVE_ALL_PICKUPS();
	SET_DUST_LEVEL_MODIFIER(0);
	Function_227(0);
	SET_AUTO_CONVERSATION_LOOK(bLocal_1058, 1);
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_AUTO_CONVERSATION_LOOK(Global_34573, 1);
	}
	Function_223(&bLocal_1071);
	Function_223(&bLocal_90);
	Function_223(&bLocal_1122);
	Function_223(&bLocal_1106);
	Function_223(&bLocal_1075);
	Function_223(&bLocal_1141);
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_ENABLE_NAV_STICK_INPUT(0, 1);
		SET_PLAYER_CONTROL_CONFIG(0, 0);
	}
	if (IS_DOOR_VALID(bLocal_1307))
	{
		CLOSE_DOOR_FAST(bLocal_1307);
		Function_222(bLocal_1307, 0);
	}
	if (Global_3369)
	{
		Function_204(&Local_1328);
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	STREAMING_UNLOAD_SCENE();
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_GESTURES(bLocal_1058, true);
	Function_201(7, 1, 0, 1, 1);
	Global_8492[714].f_8 = 553;
	Function_200(1);
	Function_199(bLocal_1031);
	Function_199(Local_188);
	STOP_SOUND(bLocal_1309);
	Function_197(0);
	if (IS_DOOR_VALID(bLocal_1303))
	{
		Function_196(bLocal_1303, 0);
	}
	if (IS_DOOR_VALID(bLocal_1304))
	{
		Function_196(bLocal_1304, 0);
	}
	Function_195(&(Global_29008[Global_30685[0]]), 256);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1058);
	Function_194();
	if (IS_BLIP_VALID(bLocal_1315))
	{
		REMOVE_BLIP(bLocal_1315);
	}
	UI_ENABLE("LoadingSpinner");
	HUD_TIMER_DISPLAY(0);
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_ACTOR_ONE_SHOT_DEATH(Global_34573, false);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	}
	Function_193(1, 1);
	if (bLocal_1048)
	{
		DECOR_SET_BOOL(Global_34573, "Reb05_ResetEscPop", true);
	}
	Function_167(bLocal_1049, 1, 0, 1, 1, 1, 1, 1);
	Function_165();
	if (IS_ITERATOR_VALID(bLocal_1166))
	{
		DESTROY_ITERATOR(bLocal_1166);
	}
	RELEASE_LAYOUT_REF(bLocal_1031);
	if (bLocal_1048)
	{
		Function_24(Local_1032, 1, 1, 1, 0);
	}
	else if (bLocal_1049)
	{
		Function_20(Local_1032);
	}
	else
	{
		Function_2(Local_1032);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x239 / 569
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x25A / 602
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x275 / 629
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(bool bParam0) //Position: 0x296 / 662
{
	return CEIL(((IntToFloat(bParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x2AC / 684
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(Global_12976.f_24);
	PRINTNL();
	Function_7(bParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x348 / 840
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x369 / 873
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

void Function_9() //Position: 0x3AF / 943
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x3C8 / 968
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x41B / 1051
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

struct<16> Function_12(int iParam0) //Position: 0x53F / 1343
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x564 / 1380
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x584 / 1412
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x59B / 1435
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x5B6 / 1462
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

void Function_17(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7FD / 2045
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x826 / 2086
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

bool Function_19(int iParam0) //Position: 0x84A / 2122
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x85F / 2143
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x87D / 2173
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

struct<16> Function_22(int iParam0) //Position: 0x923 / 2339
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x94D / 2381
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

void Function_24(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0xBA3 / 2979
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
		Function_160(&(Global_3422[iVar240]));
		Function_159(4194304);
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
	Function_37(bParam0, bParam1, iParam2, bVar1);
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

void Function_25() //Position: 0xC90 / 3216
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

int Function_26(int iParam0, bool bParam1) //Position: 0xCC0 / 3264
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

int Function_27(int iParam0) //Position: 0xCFD / 3325
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xD17 / 3351
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xD2D / 3373
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1024 / 4132
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

void Function_31(char* cParam0, int iParam1) //Position: 0x1090 / 4240
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x10C7 / 4295
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

bool Function_33(var uParam0, int iParam1) //Position: 0x113F / 4415
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x1152 / 4434
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

int Function_35(int iParam0) //Position: 0x11F3 / 4595
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_36(&iVar1, 2147483648);
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x1230 / 4656
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1243 / 4675
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

void Function_38(int iParam0, int iParam1) //Position: 0x1455 / 5205
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x148F / 5263
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

bool Function_40() //Position: 0x14D1 / 5329
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x14DA / 5338
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

void Function_42() //Position: 0x152B / 5419
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

void Function_43() //Position: 0x155E / 5470
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

void Function_44() //Position: 0x1664 / 5732
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

void Function_45() //Position: 0x1697 / 5783
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

void Function_46() //Position: 0x1825 / 6181
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

void Function_47() //Position: 0x19D9 / 6617
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x19E7 / 6631
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
	void fVar11;
	bool bVar12;
	void fVar13;
	
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
			fVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = fVar11;
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
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
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

var Function_49() //Position: 0x1BD8 / 7128
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1BED / 7149
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C88 / 7304
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1F23 / 7971
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

bool Function_53() //Position: 0x2550 / 9552
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x2558 / 9560
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2569 / 9577
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x265E / 9822
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2677 / 9847
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x26DC / 9948
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x26EE / 9966
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2700 / 9984
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

int Function_61(int iParam0) //Position: 0x2830 / 10288
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x283F / 10303
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x2878 / 10360
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x28B5 / 10421
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A4F / 10831
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

int Function_66(bool bParam0) //Position: 0x2C69 / 11369
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2CAA / 11434
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

struct<8> Function_68() //Position: 0x2D33 / 11571
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

struct<8> Function_69() //Position: 0x2DCA / 11722
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

void Function_70() //Position: 0x2E49 / 11849
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2E6F / 11887
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

void Function_72() //Position: 0x3079 / 12409
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

bool Function_73(vector3 vParam0) //Position: 0x311A / 12570
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3132 / 12594
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

vector3 Function_75() //Position: 0x3219 / 12825
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x3222 / 12834
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x3231 / 12849
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3247 / 12871
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x330E / 13070
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x332B / 13099
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

bool Function_81(int iParam0) //Position: 0x3807 / 14343
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x381D / 14365
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x383C / 14396
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3856 / 14422
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x38BD / 14525
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

void Function_86() //Position: 0x3ADD / 15069
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3B5D / 15197
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3EAF / 16047
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

int Function_89(int iParam0) //Position: 0x3F32 / 16178
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3F4C / 16204
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3F7A / 16250
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x421C / 16924
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

void Function_93(int iParam0, int iParam1) //Position: 0x43DF / 17375
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x463D / 17981
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

int Function_95() //Position: 0x47C2 / 18370
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

void Function_96() //Position: 0x4861 / 18529
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

void Function_97(int iParam0) //Position: 0x4910 / 18704
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

var Function_98(int iParam0) //Position: 0x496E / 18798
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

int Function_99(int iParam0, bool bParam1) //Position: 0x49FD / 18941
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

var Function_100(int iParam0, int iParam1) //Position: 0x4B9A / 19354
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

void Function_101() //Position: 0x4BDB / 19419
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4BF1 / 19441
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4C31 / 19505
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4C71 / 19569
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4C80 / 19584
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

int Function_106(int iParam0) //Position: 0x4E48 / 20040
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

var Function_107() //Position: 0x4EDD / 20189
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4F02 / 20226
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x53BD / 21437
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

var Function_110(int iParam0) //Position: 0x56D2 / 22226
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x5775 / 22389
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

int Function_112(int iParam0, bool bParam1) //Position: 0x5970 / 22896
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5B0C / 23308
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5BD7 / 23511
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
			Function_157(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_154(Global_30640[0]);
			Function_154(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_152(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_154(Global_30668[0]);
			Function_144(0);
			Function_142(2, 1);
			Function_142(0, 1);
			Function_142(1, 1);
			break;
		
		case 0x00000003:
			Function_154(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_154(Global_30668[0]);
			Function_154(Global_30640[0]);
			Function_140(0, 1);
			Function_140(15, 1);
			Function_140(9, 1);
			Function_140(12, 1);
			Function_140(16, 1);
			Function_142(3, 1);
			break;
		
		case 0x00000005:
			Function_154(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_152(21, bParam2, 4);
			Function_154(Global_30668[0]);
			Function_142(39, 1);
			break;
		
		case 0x00000007:
			Function_154(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_154(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_139(4))
					{
						Function_129(4, 0, 0, 1);
					}
				}
			}
			Function_154(Global_30640[0]);
			Function_154(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_154(Global_30640[0]);
			Function_154(Global_30668[2]);
			Function_128(&(Global_29008[Global_30668[2]]), 32768);
			Function_195(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_152(9, bParam2, 4);
			Function_154(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_154(Global_30640[0]);
			Function_154(Global_30658[0]);
			Function_128(&(Global_29008[Global_30658[0]]), 32768);
			Function_195(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_154(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_154(Global_30640[0]);
			Function_154(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_154(Global_30640[1]);
			Function_154(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_154(Global_30679[0]);
			Function_154(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_154(Global_30658[5]);
			Function_154(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_152(21, bParam2, 4);
			Function_154(Global_30640[4]);
			Function_154(Global_30658[4]);
			Function_127(&Global_76847, 0x2000000);
			Function_127(&Global_76847, 0x4000000);
			Function_127(&Global_76847, 4096);
			Function_127(&Global_76847, 8);
			Function_127(&Global_76847, 8388608);
			Function_127(&Global_76847, 524288);
			Function_127(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_154(Global_30640[4]);
			Function_154(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_195(&(Global_29008[Global_30640[4]]), 256);
			Function_154(Global_30640[4]);
			Function_154(Global_30658[0]);
			Function_128(&(Global_29008[Global_30658[0]]), 32768);
			Function_195(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_154(Global_30640[0]);
			Function_154(Global_30640[5]);
			Function_152(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_154(Global_30658[3]);
			Function_128(&(Global_29008[Global_30658[3]]), 32768);
			Function_195(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_152(9, bParam2, 4);
			Function_154(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_128(&(Global_29008[Global_30679[1]]), 32768);
			Function_154(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_152(12, bParam2, 4);
			Function_195(&(Global_29008[Global_30679[1]]), 256);
			Function_154(Global_30668[3]);
			Function_154(Global_30693[0]);
			Function_154(Global_30685[0]);
			Function_144(4);
			Function_140(13, 1);
			Function_140(1, 1);
			Function_140(18, 1);
			Function_142(34, 1);
			Function_142(44, 1);
			Function_142(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_152(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_154(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_154(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_154(Global_30693[0]);
			Function_154(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_154(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_154(Global_30685[0]);
			Function_154(Global_30693[0]);
			Function_154(Global_30693[1]);
			Function_154(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_152(23, bParam2, 3);
			Function_140(23, 1);
			Function_154(Global_30685[0]);
			Function_154(Global_30685[2]);
			Function_128(&(Global_29008[Global_30685[2]]), 32768);
			Function_195(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_152(19, bParam2, 4);
			Function_154(Global_30685[0]);
			Function_154(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_152(24, bParam2, 3);
			Function_140(24, 1);
			Function_154(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_154(Global_30685[0]);
			Function_154(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_154(Global_30693[12]);
			Function_154(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_154(Global_30693[12]);
			Function_154(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_152(25, bParam2, 10);
			Function_154(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_154(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_154(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_152(13, bParam2, 4);
			Function_154(Global_30693[2]);
			Function_154(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_139(8))
				{
					Function_129(8, 0, 0, 1);
				}
			}
			Function_154(Global_30685[0]);
			Function_144(9);
			Function_140(7, 1);
			Function_140(11, 1);
			Function_140(3, 1);
			Function_140(20, 1);
			Function_142(57, 1);
			break;
		
		case 0x0000002A:
			Function_152(2, bParam2, 4);
			Function_154(Global_30717[0]);
			Function_154(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_154(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_154(Global_30717[0]);
			Function_154(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_154(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_154(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_154(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_152(17, bParam2, 4);
			Function_154(Global_30723[0]);
			Function_154(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_125(15))
				{
					Function_120(15, 0, 1);
				}
			}
			Function_195(&(Global_29008[Global_30717[1]]), 256);
			Function_144(11);
			Function_154(Global_30717[1]);
			Function_154(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_154(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_154(Global_30717[1]);
			Function_154(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_154(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_154(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_154(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_154(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_154(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_154(Global_30717[1]);
			Function_115(11);
			Function_144(12);
			Global_16537[1121].f_40 = 0;
			Function_142(56, 1);
			if (!bParam2)
			{
				if (!Function_139(9))
				{
					Function_129(9, 0, 0, 0);
				}
				if (!Function_139(10))
				{
					Function_129(10, 0, 0, 1);
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

void Function_115(int iParam0) //Position: 0x64C7 / 25799
{
	bool bVar0;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_222(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_222(Global_16537[iParam021].f_72, 0);
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6636 / 26166
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x673C / 26428
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(bool bParam0) //Position: 0x6769 / 26473
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = SHIFT_RIGHT(bParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if ((bParam0 && 1073741824) == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((bParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

var Function_119(vector3 vParam0) //Position: 0x67C0 / 26560
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

void Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x680E / 26638
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_124(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_125(bParam0))
	{
		if (!Function_139(bParam0))
		{
			Function_129(bParam0, 1, 0, 0);
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
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_85(457, 1, 0, 0);
		Function_123(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_122(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 0);
			}
			else
			{
				Function_121();
			}
		}
	}
	return;
}

void Function_121() //Position: 0x69AC / 27052
{
	return;
}

bool Function_122(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x69B2 / 27058
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

void Function_123(bool bParam0, int iParam1) //Position: 0x6A56 / 27222
{
	if (!Function_124(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_124(int iParam0) //Position: 0x6AAB / 27307
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_125(int iParam0) //Position: 0x6AC1 / 27329
{
	if (!Function_124(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_126(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_126(int iParam0, int iParam1) //Position: 0x6B12 / 27410
{
	int iVar0;
	
	if (!Function_124(iParam0))
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

void Function_127(var uParam0, int iParam1) //Position: 0x6B3F / 27455
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_128(var uParam0, int iParam1) //Position: 0x6B4E / 27470
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6B5D / 27485
{
	struct<8> Var0;
	
	if (!Function_124(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_138(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_139(bParam0))
	{
		Function_85(456, 1, 0, 0);
		Function_123(bParam0, 2);
		if (bParam2)
		{
			if (!Function_122(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 5);
			}
			else
			{
				Function_121();
			}
		}
		Function_132(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_131() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_131() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_130(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_33(Global_76846, 2))
		{
			Function_30(Global_34573, 2, 1, 0);
		}
	}
}

void Function_130(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6CA7 / 27815
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

bool Function_131() //Position: 0x6CF2 / 27890
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_132(bool bParam0) //Position: 0x6D1F / 27935
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
			if (Function_136(bParam0, Function_137(bVar24)))
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
			if (Function_136(bParam0, Function_137(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_135(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_134(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_133(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_133(int iParam0) //Position: 0x6ECF / 28367
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_124(iParam0))
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

void Function_134(bool bParam0, bool bParam1) //Position: 0x6F26 / 28454
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

var Function_135(int iParam0) //Position: 0x6F4B / 28491
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_124(iParam0))
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

bool Function_136(bool bParam0, int iParam1) //Position: 0x6FA1 / 28577
{
	int iVar0;
	
	if (!Function_124(bParam0))
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

bool Function_137(bool bParam0) //Position: 0x7000 / 28672
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_138(int iParam0) //Position: 0x700C / 28684
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_139(int iParam0) //Position: 0x7028 / 28712
{
	if (!Function_124(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_126(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_140(int iParam0, int iParam1) //Position: 0x707A / 28794
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_141(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_141(int iParam0, int iParam1) //Position: 0x70ED / 28909
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_142(int iParam0, int iParam1) //Position: 0x7149 / 29001
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_143(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_143(int iParam0, int iParam1) //Position: 0x71BA / 29114
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_144(int iParam0) //Position: 0x7214 / 29204
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_196(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_196(Global_16537[iParam021].f_72, 0);
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
			Function_130("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_116(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_129(14, 1, 0, 0);
				Function_145(14, 1, 0, 0, 0);
			}
			if (!Function_122(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 6);
			}
			else
			{
				Function_121();
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
			Function_130("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_85(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_84(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_145(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x74C0 / 29888
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_124(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_138(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_126(bParam0, 2))
	{
		Function_85(456, 1, 0, 0);
		Function_123(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_130(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_136(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_123(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_122(0, 0, 1, 1))
			{
				Function_41(1);
				Function_39(1, 0);
			}
			else
			{
				Function_121();
			}
		}
		Function_132(bParam0);
		if (StackVal && !Function_151(((((!Function_131() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_151((((Function_131() || Global_3380) || Global_3392) || Global_3384), 1))
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
			Function_147();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_146(3, bParam1);
				break;
			
			case 0x00000005:
				Function_146(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_146(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_146(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_146(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_146(2, SHIFT_LEFT(bParam1, 18));
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

void Function_146(int iParam0, bool bParam1) //Position: 0x774F / 30543
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

void Function_147() //Position: 0x77AE / 30638
{
	if (Function_124(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_150(Global_28180);
			Global_28180.f_8 = Function_148(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_150(Global_28180);
			Global_28180.f_8 = Function_148(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_148(int iParam0, int iParam1) //Position: 0x7829 / 30761
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
					if (Function_149(13) && iVar16)
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
					if (Function_149(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_149(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_149(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_149(23) && iVar17)
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
					if (Function_149(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_149(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_149(27) && iVar18)
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
					if (Function_149(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_149(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_149(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_149(49) && iVar15)
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
					if (Function_149(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(6, 0) && Function_149(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_149(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(9, 0) && Function_149(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_149(15) && iVar19)
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

int Function_149(int iParam0) //Position: 0x841C / 33820
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_150(int iParam0) //Position: 0x8431 / 33841
{
	int iVar0;
	int iVar1;
	
	if (!Function_124(iParam0))
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

bool Function_151(bool bParam0, bool bParam1) //Position: 0x8480 / 33920
{
	return (bParam0 && bParam1) == 0;
}

void Function_152(bool bParam0, bool bParam1, int iParam2) //Position: 0x848D / 33933
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_153(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_157(bParam0, 0, 0);
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

bool Function_153(int iParam0, int iParam1) //Position: 0x84FB / 34043
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_154(int iParam0) //Position: 0x850E / 34062
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_156(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_128(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_85(473, 1, 0, 0);
		iVar0 = Function_155(iParam0);
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

var Function_155(int iParam0) //Position: 0x860D / 34317
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

bool Function_156(var uParam0, int iParam1) //Position: 0x8665 / 34405
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_157(bool bParam0, bool bParam1, int iParam2) //Position: 0x8681 / 34433
{
	if (!Function_158(bParam0))
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

bool Function_158(int iParam0) //Position: 0x86D8 / 34520
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_159(bool bParam0) //Position: 0x86EA / 34538
{
	bool bVar0;
	
	if (Function_151(bParam0, 1) && Function_151(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_160(int iParam0) //Position: 0x871E / 34590
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
			Function_161(4, 0, 0);
		}
	}
	return;
}

void Function_161(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8785 / 34693
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
		Function_162(Global_16524, bVar0, 1);
	}
	return;
}

void Function_162(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8862 / 34914
{
	int iVar0;
	
	Function_164(bParam0);
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
	Function_163();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_163() //Position: 0x89DB / 35291
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_164(int iParam0) //Position: 0x89E7 / 35303
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

void Function_165() //Position: 0x8A2D / 35373
{
	Function_166();
	return;
}

void Function_166() //Position: 0x8A36 / 35382
{
	Function_223(&Local_188 + 4);
	Function_223(&Local_188 + 140);
	Function_223(&Local_188 + 192);
	Function_223(&Local_188 + 376);
	Function_223(&Local_188 + 464);
	Function_223(&Local_188 + 528);
	Function_223(&Local_188 + 580);
	Function_223(&Local_188 + 620);
	Function_223(&Local_188 + 672);
	Function_223(&Local_188 + 796);
	Function_223(&Local_188 + 884);
	Function_223(&Local_188 + 972);
	RELEASE_LAYOUT_REF(Local_188);
	return;
}

void Function_167(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8A9E / 35486
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_192());
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
	Function_191();
	CLEAR_PRINTED_OBJECTIVE();
	Function_190();
	Function_188(0);
	Function_187();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_186();
	Function_185();
	Function_191();
	ENABLE_JOURNAL_REPLAY(1);
	Function_200(1);
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
		Function_184(Global_34573);
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
	Function_183(Global_28178);
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
	Function_182(1178687);
	Function_180(33039);
	Function_179(0x218003f);
	Function_178(4194560);
	Function_177();
	Function_176();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_173(0, 1, 1);
	}
	else
	{
		Function_173(0, 1, 1);
	}
	Function_172();
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
	Function_168();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_168() //Position: 0x8C8F / 35983
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
		if (Function_171() > 3)
		{
			bVar0 *= 2;
		}
		Function_169(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_169(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x8CE5 / 36069
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_170((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_170(bool bParam0) //Position: 0x8D2B / 36139
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_171() //Position: 0x8D50 / 36176
{
	return Global_12976.f_156;
}

void Function_172() //Position: 0x8D5B / 36187
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_195(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_173(int iParam0, bool bParam1, int iParam2) //Position: 0x8D85 / 36229
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
			Function_128(&(Global_29008[Global_29006]), 131072);
			Function_195(&(Global_29008[Global_29006]), 2097152);
			Function_174(Global_29006);
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
				if (Function_156(&(Global_29008[iVar0]), 4) || Function_156(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_195(&(Global_29008[iVar0]), 2097155);
					Function_128(&(Global_29008[iVar0]), 262144);
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

void Function_174(int iParam0) //Position: 0x8E90 / 36496
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_175())
			{
				return;
			}
		}
		if (!Function_156(&(Global_29008[iParam0]), 2048))
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

bool Function_175() //Position: 0x8F0F / 36623
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_156(&(Global_29008[iVar0]), 4) || Function_156(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_176() //Position: 0x8F6C / 36716
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

void Function_177() //Position: 0x8F92 / 36754
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

void Function_178(int iParam0) //Position: 0x8FB8 / 36792
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_179(int iParam0) //Position: 0x8FD5 / 36821
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_180(int iParam0) //Position: 0x8FE8 / 36840
{
	Function_181(&Global_28842, iParam0);
	return;
}

void Function_181(var uParam0, int iParam1) //Position: 0x8FF6 / 36854
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_182(bool bParam0) //Position: 0x9011 / 36881
{
	if (Function_151(bParam0, 1) && !Function_151(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_183(int iParam0) //Position: 0x903E / 36926
{
	int iVar0;
	
	if (!Function_124(iParam0))
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

void Function_184(bool bParam0) //Position: 0x9105 / 37125
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

void Function_185() //Position: 0x9181 / 37249
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

void Function_186() //Position: 0x91C2 / 37314
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

void Function_187() //Position: 0x9203 / 37379
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_188(int iParam0) //Position: 0x9217 / 37399
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_189())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_189() //Position: 0x9253 / 37459
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

void Function_190() //Position: 0x9278 / 37496
{
	Global_8722 = 0.0f;
	return;
}

void Function_191() //Position: 0x9282 / 37506
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

int Function_192() //Position: 0x92AD / 37549
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_193(bool bParam0, bool bParam1) //Position: 0x92C7 / 37575
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

void Function_194() //Position: 0x9313 / 37651
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_195(var uParam0, int iParam1) //Position: 0x931C / 37660
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_196(bool bParam0, bool bParam1) //Position: 0x9333 / 37683
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

void Function_197(bool bParam0) //Position: 0x9384 / 37764
{
	if (bParam0)
	{
		ENABLE_CHILD_SECTOR("sp_rebel05x");
		Function_198(&Local_188 + 1572, Local_188);
	}
	else
	{
		DISABLE_CHILD_SECTOR("sp_rebel05x");
	}
	return;
}

void Function_198(var uParam0, bool bParam1) //Position: 0x93BE / 37822
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		vVar4 = { 0.0f, 0.0f, 0.0f };
		GET_VOLUME_CENTER((*uParam0)[iVar0], &vVar1);
		vVar4.f_4 = GET_VOLUME_HEADING((*uParam0)[iVar0]);
		GET_VOLUME_SCALE((*uParam0)[iVar0], &vVar7);
		DESTROY_VOLUME((*uParam0)[iVar0]);
		CREATE_OBSTACLE_IN_LAYOUT(bParam1, Function_53(), vVar1, vVar4, vVar7);
		iVar0++;
	}
	return;
}

void Function_199(bool bParam0) //Position: 0x9425 / 37925
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

void Function_200(bool bParam0) //Position: 0x947D / 38013
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

int Function_201(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x94F1 / 38129
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
		Function_203(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_202(StackVal);
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

void Function_202(bool bParam0) //Position: 0x980F / 38927
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

void Function_203(bool bParam0) //Position: 0x983B / 38971
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_204(int iParam0) //Position: 0x9850 / 38992
{
	if (!bLocal_164)
	{
		Function_220(iParam0);
	}
	if (!iLocal_165)
	{
		Function_205(iParam0);
	}
	return;
}

void Function_205(int iParam0) //Position: 0x986C / 39020
{
	if (DECOR_CHECK_EXIST(*iParam0, "bIsDuelActive"))
	{
		DECOR_REMOVE(*iParam0, "bIsDuelActive");
	}
	if (DECOR_CHECK_EXIST(*iParam0, "bIsDuelOver"))
	{
		DECOR_REMOVE(*iParam0, "bIsDuelOver");
	}
	if (DECOR_CHECK_EXIST(*iParam0, "bDrewFirst"))
	{
		DECOR_REMOVE(*iParam0, "bDrewFirst");
	}
	Function_206(iParam0);
	if (IS_LAYOUTREF_VALID(bLocal_161))
	{
		DESTROY_LAYOUT(bLocal_161);
	}
	REMOVE_EVENT_RESPONSE(38, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(39, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(40, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(41, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(37, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(44, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(43, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(42, 15, "PLAYER");
	REMOVE_EVENT_RESPONSE(46, 15, "PLAYER");
	Global_3369 = 0;
	Function_223(&bLocal_90);
	iLocal_165 = 1;
	Global_3382 = 0;
	if (iParam0->f_96)
	{
	}
	return;
}

int Function_206(int iParam0) //Position: 0x99B2 / 39346
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = GET_OBJECTSET_SIZE(bLocal_153);
	bVar1 = false;
	while (bVar1 <= bVar0)
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bLocal_153));
		if (DECOR_CHECK_EXIST(bVar2, "DuelIsCrowdActor"))
		{
			bVar3 = DECOR_GET_INT(bVar2, "DuelIsCrowdActor");
			if (DECOR_CHECK_EXIST(bVar2, "DuelCrowdActorReactionTimer"))
			{
				DECOR_REMOVE(bVar2, "DuelCrowdActorReactionTimer");
			}
			if ((bVar3 && 1) != 0)
			{
			}
			else if ((bVar3 && 2) != 0)
			{
				DECOR_REMOVE(bVar2, "DuelIsCrowdActor");
			}
			else if (iLocal_166 == 2)
			{
				DECOR_REMOVE(bVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(bVar2, 1);
				TASK_CLEAR(bVar2);
				if ((bVar3 && 4) != 0)
				{
					Function_219(GET_PERS_CHAR_FROM_ACTOR(bVar2));
				}
			}
			else if (iLocal_166 == 1)
			{
				DECOR_REMOVE(bVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(bVar2, 1);
				TASK_CLEAR(bVar2);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar2, true);
				Function_210(bVar2, 1, 0, 2);
			}
			else if (iLocal_166 == 0)
			{
				DECOR_REMOVE(bVar2, "DuelIsCrowdActor");
				RESET_ANIM_SET_FOR_ACTOR(bVar2, 1);
				if ((bVar3 && 64) != 0)
				{
					Function_207(bVar2, bVar3, iParam0 + 8);
				}
				else
				{
					TASK_CLEAR(bVar2);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar2, true);
					Function_210(bVar2, 1, 0, 2);
				}
			}
		}
		bVar1++;
	}
	if (IS_OBJECTSET_VALID(bLocal_153))
	{
		DESTROY_OBJECTSET(bLocal_153);
	}
	return 1;
}

void Function_207(bool bParam0, var uParam1, int iParam2) //Position: 0x9B67 / 39783
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	uParam1 = uParam1;
	TASK_CLEAR(bParam0);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1,5f), 1, 0);
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_209(bParam0);
	vVar4 = { StackVal, StackVal, Function_209(bParam0) };
	Function_208(iParam2, &vVar4, &vVar1);
	TASK_GO_NEAR_COORD(false, &vVar1, 5.0f, true);
	TASK_WANDER(false, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	TASK_PRIORITY_SET(bParam0, 2);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	return;
}

void Function_208(var uParam0, var uParam1, int iParam2) //Position: 0x9BCC / 39884
{
	*iParam2 = { StackVal, StackVal, *uParam1 };
	*iParam2 = (*iParam2 + ((*uParam1 - *uParam0) * 3.0f));
	iParam2->f_8 = (StackVal + ((StackVal - StackVal) * 3.0f));
	*iParam2 = (*iParam2 + RAND_FLOAT_RANGE(-2.0f, 2.0f));
	iParam2->f_8 = (StackVal + RAND_FLOAT_RANGE(-2.0f, 2.0f));
	return;
}

vector3 Function_209(bool bParam0) //Position: 0x9C20 / 39968
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

int Function_210(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x9C8A / 40074
{
	bool bVar0;
	bool bVar1;
	
	if (iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_211(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_211(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_211(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x9D6A / 40298
{
	char* cVar0[32];
	
	Function_218();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_217(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_216(bParam0, 0);
	Function_215(bParam0, iParam1);
	Function_214(bParam0, uParam2);
	Function_213(bParam0, uParam3);
	if (Function_212(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_212(bool bParam0) //Position: 0x9FB8 / 40888
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_213(bool bParam0, bool bParam1) //Position: 0x9FDB / 40923
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_214(bool bParam0, bool bParam1) //Position: 0x9FFE / 40958
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_215(bool bParam0, bool bParam1) //Position: 0xA022 / 40994
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_216(bool bParam0, bool bParam1) //Position: 0xA048 / 41032
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_217(bool bParam0) //Position: 0xA06B / 41067
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_218() //Position: 0xA089 / 41097
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

int Function_219(bool bParam0) //Position: 0xA0D3 / 41171
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			DEREFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_220(int iParam0) //Position: 0xA16D / 41325
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(StackVal))
	{
		if (IS_ACTOR_ALIVE(StackVal))
		{
			AI_GOAL_AIM_CLEAR(StackVal);
			ACTOR_FORCE_WEAPON_RENDER(StackVal, 1, 0);
			if (IS_ACTOR_CRIPPLED(StackVal, 5))
			{
				DECOR_SET_BOOL(StackVal, "Duel", true);
			}
		}
		else
		{
			DECOR_SET_BOOL(StackVal, "Duel", true);
		}
		AUDIO_DISALLOW_PREDUEL_SPEECH(StackVal);
	}
	AUDIO_DISALLOW_PREDUEL_SPEECH(*iParam0);
	SATCHEL_SET_ENABLED(1);
	AI_GLOBAL_CLEAR_ALL_DANGER();
	AI_STOP_IGNORING_ACTORS();
	if (HUD_IS_SHOWING_OBJECTIVE())
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (IS_ACTOR_VALID(StackVal))
	{
		if (IS_ACTOR_ALIVE(StackVal))
		{
			STOP_RECORDING_SHOOT_EVENTS_FOR_ACTOR(StackVal);
		}
	}
	if (IS_VOLUME_VALID(iParam0->f_56))
	{
		RESET_PROPS_IN_VOLUME(iParam0->f_56, 1);
	}
	if (IS_ACTORSET_VALID(bLocal_152))
	{
		bVar0 = false;
		while (bVar0 <= GET_ACTORSET_SIZE(bLocal_152))
		{
			bVar1 = GET_ACTOR_FROM_ACTORSET(bLocal_152, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				TASK_CLEAR(bVar1);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
				if (IS_ACTOR_HORSE(bVar1))
				{
					SET_ALLOW_RIDE_BY_PLAYER(bVar1, 1);
				}
			}
			bVar0++;
		}
		DESTROY_ACTORSET(bLocal_152);
	}
	if (IS_OBJECTSET_VALID(bLocal_151))
	{
		DESTROY_OBJECTSET(bLocal_151);
	}
	if (IS_ACTOR_VALID(iParam0->f_44))
	{
		if (IS_LAYOUTREF_VALID(bLocal_161))
		{
			if (Function_221(iParam0->f_44) == bLocal_161)
			{
				RELEASE_ACTOR(iParam0->f_44);
			}
		}
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(iParam0->f_44);
	}
	if (DECOR_CHECK_EXIST(StackVal, "Tutorial0Complete"))
	{
		DECOR_REMOVE(StackVal, "Tutorial0Complete");
	}
	if (DECOR_CHECK_EXIST(StackVal, "Tutorial1Complete"))
	{
		DECOR_REMOVE(StackVal, "Tutorial1Complete");
	}
	if (DECOR_CHECK_EXIST(StackVal, "Tutorial2Complete"))
	{
		DECOR_REMOVE(StackVal, "Tutorial2Complete");
	}
	if (DECOR_CHECK_EXIST(StackVal, "Tutorial3Complete"))
	{
		DECOR_REMOVE(StackVal, "Tutorial3Complete");
	}
	if (iLocal_155)
	{
		Function_180(9);
		iLocal_155 = 0;
	}
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (IS_OBJECT_VALID(*iParam0))
	{
		RESET_ANIM_SET_FOR_ACTOR(*iParam0, 1);
		if (DECOR_CHECK_EXIST(*iParam0, "bHostageDraw"))
		{
			DECOR_REMOVE(*iParam0, "bHostageDraw");
		}
	}
	if (IS_ACTOR_ALIVE(*iParam0))
	{
		if (!DECOR_CHECK_EXIST(*iParam0, "bIsDuelOver"))
		{
			DECOR_SET_BOOL(*iParam0, "bIsDuelOver", true);
		}
		Global_62993 = 0;
	}
	Function_179(1);
	if (!Global_3380)
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam0->f_32))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_32);
			REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(iParam0->f_32, 0);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam0->f_32))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_32);
		}
	}
	CAMERA_RESET(0);
	bLocal_164 = true;
	return;
}

int Function_221(bool bParam0) //Position: 0xA459 / 42073
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 1)
		{
			bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
		}
		while (!IS_LAYOUTREF_VALID(bVar0) && IS_OBJECT_VALID(bParam0))
		{
			bParam0 = GET_OBJECT_OWNER(bParam0);
			if (GET_OBJECT_TYPE(bParam0) == 1)
			{
				bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			return bVar0;
		}
	}
	return "";
}

void Function_222(bool bParam0, bool bParam1) //Position: 0xA4B3 / 42163
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

void Function_223(bool bParam0) //Position: 0xA507 / 42247
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_224(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_224(var uParam0, int iParam1) //Position: 0xA52D / 42285
{
	if (Function_226(uParam0[iParam13], 4))
	{
		if (Function_226(uParam0[iParam13], 1))
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
			Function_225(uParam0[iParam13], 1);
			Function_225(uParam0[iParam13], 2);
			Function_225(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_225(var uParam0, int iParam1) //Position: 0xA65B / 42587
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_226(var uParam0, int iParam1) //Position: 0xA675 / 42613
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_227(bool bParam0) //Position: 0xA692 / 42642
{
	if (bParam0)
	{
		bLocal_1314 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_188, "burnAHouse", "script_fire_rebel05", -4349,924f, 32,588f, 4405,306f);
		UNK_0x6745191B(bLocal_1314, 0.0f, 0.0f, 0.0f);
	}
	else
	{
		UNK_0x7246F438(bLocal_1314);
		RESET_RMPTFX_ALL();
	}
	return;
}

void Function_228() //Position: 0xA6EF / 42735
{
	Function_223(&Local_188 + 972);
	return;
}

void Function_229() //Position: 0xA6FD / 42749
{
	Function_223(&Local_188 + 884);
	return;
}

void Function_230() //Position: 0xA70B / 42763
{
	Function_223(&Local_188 + 796);
	return;
}

void Function_231() //Position: 0xA719 / 42777
{
	Function_223(&Local_188 + 672);
	return;
}

void Function_232() //Position: 0xA727 / 42791
{
	Function_223(&Local_188 + 620);
	return;
}

void Function_233() //Position: 0xA735 / 42805
{
	Function_223(&Local_188 + 580);
	return;
}

void Function_234() //Position: 0xA743 / 42819
{
	Function_223(&Local_188 + 528);
	return;
}

void Function_235() //Position: 0xA751 / 42833
{
	Function_223(&Local_188 + 464);
	return;
}

void Function_236() //Position: 0xA75F / 42847
{
	Function_223(&Local_188 + 376);
	return;
}

void Function_237() //Position: 0xA76D / 42861
{
	Function_223(&Local_188 + 192);
	return;
}

void Function_238() //Position: 0xA77A / 42874
{
	Function_223(&Local_188 + 140);
	return;
}

void Function_239() //Position: 0xA787 / 42887
{
	var uVar0[14];
	int iVar15;
	
	if (Function_281())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "02 - Gather the Mob";
		uVar0[4] = "n03 - Riot";
		uVar0[5] = "04 - Up the hill";
		uVar0[6] = "05 - Turn the guns on them";
		uVar0[7] = "06 - Capture the Villa";
		uVar0[8] = "07 - Defend the Villa";
		uVar0[9] = "08 - Capture Bill";
		uVar0[10] = "09 - Kill Bill";
		uVar0[11] = "Last Stage";
		uVar0[12] = "kill end enemies";
		uVar0[13] = "start fake riot scene";
		iVar15 = Function_267(&uLocal_1051, &uVar0, &Local_1032 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_266(&iVar15, &bLocal_1039, &iLocal_1040, &Local_1041))
		{
			Function_259();
			Function_258();
		}
		if (iVar15 == 0)
		{
			Function_259();
			Function_258();
			Function_257(&bLocal_1048, 8);
		}
		else if (iVar15 == 1)
		{
			Function_259();
			Function_258();
			Function_252(bLocal_1039);
			Function_248(StackVal, StackVal, 5, &bLocal_1049, &bLocal_1039, Function_255(bLocal_1039), Function_252(bLocal_1039), 0);
		}
		else if (iVar15 == 2)
		{
			Function_259();
			Function_258();
			Function_243(&bLocal_1050, 4);
		}
		else if (iVar15 == 3)
		{
			Function_259();
			Function_258();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_241(&bLocal_1167);
			bLocal_1039 = true;
			iLocal_1040 = 0;
			Local_1041 = 1000;
		}
		else if (iVar15 == 4)
		{
			Function_259();
			Function_258();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_241(&bLocal_1167);
			bLocal_1039 = 2;
			iLocal_1040 = 0;
			Local_1041 = 1000;
		}
		else if (iVar15 == 5)
		{
			Function_259();
			Function_258();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_241(&bLocal_1167);
			bLocal_1039 = 3;
			iLocal_1040 = 0;
			Local_1041 = 1000;
		}
		else if (iVar15 == 6)
		{
			Function_259();
			Function_258();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_241(&bLocal_1167);
			bLocal_1039 = 4;
			iLocal_1040 = 0;
			Local_1041 = 1000;
		}
		else if (iVar15 == 7)
		{
			Function_259();
			Function_258();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_241(&bLocal_1167);
			bLocal_1039 = 5;
			iLocal_1040 = 0;
			Local_1041 = 1000;
		}
		else if (iVar15 == 8)
		{
			Function_259();
			Function_258();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_241(&bLocal_1167);
			bLocal_1039 = 6;
			iLocal_1040 = 0;
			Local_1041 = 1000;
		}
		else if (iVar15 == 9)
		{
			Function_259();
			Function_258();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_241(&bLocal_1167);
			bLocal_1039 = 7;
			iLocal_1040 = 0;
			Local_1041 = 1000;
		}
		else if (iVar15 == 10)
		{
			Function_259();
			Function_258();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_241(&bLocal_1167);
			bLocal_1039 = 8;
			iLocal_1040 = 0;
			Local_1041 = 1000;
		}
		else if (iVar15 == 11)
		{
			Function_259();
			Function_258();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_241(&bLocal_1167);
			bLocal_1039 = 101;
			iLocal_1040 = 0;
			Local_1041 = 1000;
		}
		else if (iVar15 == 12)
		{
			Function_259();
			Function_258();
			Function_240(&Local_188 + 1232);
			Function_240(&Local_188 + 1292);
			KILL_ACTOR((*&Local_188 + 1252)[12]);
			KILL_ACTOR((*&Local_188 + 1252)[22]);
			KILL_ACTOR((*&Local_188 + 1252)[32]);
		}
		else if (iVar15 == 13)
		{
			Function_259();
			Function_258();
			iLocal_1284 = 1;
		}
	}
	return;
}

void Function_240(int iParam0) //Position: 0xAB85 / 43909
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
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
			if (IS_ACTOR_RIDING_VEHICLE(bVar1))
			{
				bVar2 = GET_VEHICLE(bVar1);
				DESTROY_ACTOR(bVar1);
				DESTROY_ACTOR(bVar2);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = GET_MOUNT(bVar1);
				DESTROY_ACTOR(bVar1);
				DESTROY_ACTOR(bVar2);
			}
			else
			{
				DESTROY_ACTOR(bVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_241(bool bParam0) //Position: 0xAC04 / 44036
{
	Function_242(bParam0, 0.0f);
	return;
}

void Function_242(bool bParam0, float fParam1) //Position: 0xAC10 / 44048
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(bParam0, 1);
	Function_36(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

void Function_243(bool bParam0, int iParam1) //Position: 0xAC31 / 44081
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_244(iParam1);
	*bParam0 = 1;
	return;
}

void Function_244(int iParam0) //Position: 0xAC54 / 44116
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_247("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_246(2) || Function_246(8)) || Function_246(9)) || Function_246(10))
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
		Function_247("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_247("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_247("");
	}
	else if (iParam0 == 8)
	{
		Function_245();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_245();
	}
	return;
}

void Function_245() //Position: 0xAD4B / 44363
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_246(int iParam0) //Position: 0xAD57 / 44375
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

void Function_247(bool bParam0) //Position: 0xAD8D / 44429
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_248(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xADF7 / 44535
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_249(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_244(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_249(vector3 vParam0, var uParam3, var uParam4) //Position: 0xAE34 / 44596
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_251(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_250(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_250(int iParam0) //Position: 0xAEB7 / 44727
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

var Function_251(vector3 vParam0, bool bParam3) //Position: 0xB365 / 45925
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

vector3 Function_252(int iParam0) //Position: 0xB3D0 / 46032
{
	Function_253(iParam0 + 1);
	return StackVal, StackVal, Function_253(iParam0 + 1);
}

vector3 Function_253(int iParam0) //Position: 0xB3DD / 46045
{
	switch (iParam0)
	{
		case 0x00000000:
			return StackVal, StackVal, *(&Local_188 + 1832[06]);
			break;
		
		case 0x00000001:
			return StackVal, StackVal, *(&Local_188 + 1884[06]);
			break;
		
		case 0x00000002:
			return StackVal, StackVal, *(&Local_188 + 1936[06]);
			break;
		
		case 0x00000003:
			Function_254((*&Local_188 + 2016)[0]);
			return StackVal, StackVal, Function_254((*&Local_188 + 2016)[0]);
			break;
		
		case 0x00000004:
			return StackVal, StackVal, *(&Local_188 + 2028[06]);
			break;
		
		case 0x00000005:
			return StackVal, StackVal, *(&Local_188 + 2104[16]);
			break;
		
		case 0x00000006:
			return StackVal, StackVal, *(&Local_188 + 2180[16]);
			break;
		
		case 0x00000007:
			return StackVal, StackVal, *(&Local_188 + 2180[36]);
			break;
		
		case 0x00000008:
			return StackVal, StackVal, *(&Local_188 + 3016);
			break;
		
		default:
			return StackVal, StackVal, *(&Local_188 + 2180[36]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal, StackVal, *(&Local_188 + 2028[06]);
}

vector3 Function_254(bool bParam0) //Position: 0xB518 / 46360
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

int Function_255(int iParam0) //Position: 0xB53F / 46399
{
	return Function_256(iParam0 + 1);
}

int Function_256(int iParam0) //Position: 0xB54C / 46412
{
	switch (iParam0)
	{
		case 0x00000000:
			return StackVal;
			break;
		
		case 0x00000001:
			return StackVal;
			break;
		
		case 0x00000002:
			return StackVal;
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_188 + 2016)[0]);
			break;
		
		case 0x00000004:
			return StackVal;
			break;
		
		case 0x00000005:
			return StackVal;
			break;
		
		case 0x00000006:
			return StackVal;
			break;
		
		case 0x00000007:
			return StackVal;
			break;
		
		case 0x00000008:
			return StackVal;
			break;
		
		default:
			return StackVal;
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return StackVal;
}

void Function_257(bool bParam0, int iParam1) //Position: 0xB69B / 46747
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_244(iParam1);
	*bParam0 = 1;
	return;
}

void Function_258() //Position: 0xB6BE / 46782
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_259() //Position: 0xB6D3 / 46803
{
	Function_261();
	Function_260(10, 3);
	return;
}

void Function_260(int iParam0, int iParam1) //Position: 0xB6E2 / 46818
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

void Function_261() //Position: 0xB819 / 47129
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_265())
	{
		Function_264(10, 3);
	}
	else
	{
		Function_262();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_262() //Position: 0xB864 / 47204
{
	Function_263(25, 2);
	return;
}

void Function_263(int iParam0, int iParam1) //Position: 0xB870 / 47216
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

void Function_264(int iParam0, int iParam1) //Position: 0xBA6E / 47726
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

bool Function_265() //Position: 0xBBA5 / 48037
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
				if (!Function_151(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_266(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xBC0C / 48140
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_259();
			Function_258();
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
		Function_247("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_267(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBCB2 / 48306
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_280(&Var15, &Var0);
	uVar20 = Function_279(*uParam1, &Var15);
	Function_278(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_277(uParam0, uVar20);
	Function_275(StackVal, uParam0, Var15.f_12);
	Function_273(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_272(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_269(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_268(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_268(int iParam0, int iParam1, int iParam2) //Position: 0xBD79 / 48505
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

bool Function_269(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xBDD5 / 48597
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
				Function_271(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam3, 1, false) || IS_BUTTON_PRESSED(uParam2->f_16, bParam3, 1, false)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = bParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, bParam4, 1, false) || IS_BUTTON_PRESSED(uParam2->f_16, bParam4, 1, false)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = bParam4;
					return 1;
				}
			}
			Function_271(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_268(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_270(bParam1->f_32);
	}
	else
	{
		Function_270(bParam1->f_32);
	}
	return 0;
}

void Function_270(bool bParam0) //Position: 0xBF5B / 48987
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

void Function_271(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xBF95 / 49045
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

var Function_272(int iParam0, var uParam1, int iParam2) //Position: 0xC04D / 49229
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_273(var uParam0, int iParam1, int iParam2) //Position: 0xC071 / 49265
{
	switch (Function_274())
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

int Function_274() //Position: 0xC10D / 49421
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

void Function_275(var uParam0, int iParam1, int iParam2) //Position: 0xC149 / 49481
{
	switch (Function_276(uParam0))
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

int Function_276(bool bParam0) //Position: 0xC1E1 / 49633
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, false))
	{
		if (!Function_151(*bParam0, 0x40000000))
		{
			Function_76(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, false))
	{
		if (!Function_151(*bParam0, 0x40000000))
		{
			Function_76(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_36(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, false))
	{
		if (!Function_151(*bParam0, 0x20000000))
		{
			Function_76(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, false)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, false))
	{
		if (!Function_151(*bParam0, 0x20000000))
		{
			Function_76(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_36(bParam0, 0x20000000);
	return 0;
}

var Function_277(var uParam0, int iParam1) //Position: 0xC32C / 49964
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, false))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
		else if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, false))
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 15, 1, false))
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
		if (IS_BUTTON_PRESSED(uParam0->f_12, 13, 1, false))
		{
			iVar0++;
			uParam0->f_20 = iVar0;
			uParam0->f_4 = 0;
			uParam0->f_8 = 0;
		}
	}
	return iVar0;
}

void Function_278(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xC47B / 50299
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

var Function_279(int iParam0, int iParam1) //Position: 0xC50E / 50446
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_280(var uParam0, var uParam1) //Position: 0xC528 / 50472
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

bool Function_281() //Position: 0xC576 / 50550
{
	return Global_30920;
}

bool Function_282() //Position: 0xC57F / 50559
{
	if (IS_EXITFLAG_SET())
	{
		Function_252(bLocal_1039);
		Function_248(StackVal, StackVal, 4, &bLocal_1049, &bLocal_1039, Function_255(bLocal_1039), Function_252(bLocal_1039), 0);
		return 0;
	}
	Function_885(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_1032, bLocal_1039, iLocal_1040, &bLocal_1050, &bLocal_1048, &bLocal_1049);
	if (bLocal_1039 == 99 && bLocal_1039 == 100)
	{
		Function_884();
		if (IS_DOOR_VALID(bLocal_1307))
		{
			if (!FIRE_IS_ACTOR_ON_FIRE(Global_34573) && IS_DOOR_OPENED(bLocal_1307))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1804))
				{
					Function_883(Global_34573);
				}
			}
		}
		if (!IS_ACTOR_VALID(Global_34573))
		{
			Function_252(bLocal_1039);
			Function_248(StackVal, StackVal, 1, &bLocal_1049, &bLocal_1039, Function_255(bLocal_1039), Function_252(bLocal_1039), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(Global_34573))
		{
			SET_ACTOR_CAN_PLAY_GESTURES(bLocal_1058, false);
			Function_252(bLocal_1039);
			Function_248(StackVal, StackVal, 1, &bLocal_1049, &bLocal_1039, Function_255(bLocal_1039), Function_252(bLocal_1039), 0);
			return 1;
		}
		if (Function_882(2048))
		{
			Function_252(bLocal_1039);
			Function_248(StackVal, StackVal, 3, &bLocal_1049, &bLocal_1039, Function_255(bLocal_1039), Function_252(bLocal_1039), 0);
			return 1;
		}
		Function_880(Function_881(&uLocal_1323, &uLocal_1289, 1, 7.0f, iLocal_1293));
		Local_1274 = { StackVal, StackVal, StackVal, StackVal, Local_1274 };
		if (Function_861(&Local_1222, &uLocal_1182, &Local_1274, bLocal_1166, iLocal_1293))
		{
			if (Function_859(&Local_1274))
			{
				Function_252(bLocal_1039);
				Function_248(StackVal, StackVal, 5, &bLocal_1049, &bLocal_1039, Function_255(bLocal_1039), Function_252(bLocal_1039), 0);
				return 1;
			}
		}
		if (IS_ACTOR_DEAD(bLocal_1058))
		{
			Function_247("RebelLeader_dead");
			Function_252(bLocal_1039);
			Function_248(StackVal, StackVal, 5, &bLocal_1049, &bLocal_1039, Function_255(bLocal_1039), Function_252(bLocal_1039), 0);
			return 1;
		}
		Function_858();
	}
	switch (bLocal_1039)
	{
		case 0x00000063:
			Function_817();
			break;
		
		case 0x00000000:
			Function_730();
			break;
		
		case 0x00000001:
			Function_663();
			break;
		
		case 0x00000002:
			Function_640();
			break;
		
		case 0x00000003:
			Function_609();
			break;
		
		case 0x00000004:
			Function_572();
			break;
		
		case 0x00000005:
			Function_553();
			break;
		
		case 0x00000006:
			Function_501();
			break;
		
		case 0x00000007:
			Function_412();
			break;
		
		case 0x00000008:
			Function_324();
			break;
		
		case 0x00000065:
			Function_285();
			break;
		
		case 0x00000064:
			if (Function_284(&bLocal_1049))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_283(&bLocal_1039, &iLocal_1040, &Local_1041))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1048)
	{
		Function_257(&bLocal_1048, 8);
		Function_1();
		return 0;
	}
	if (bLocal_1049 && bLocal_1039 == 100)
	{
		Function_252(bLocal_1039);
		Function_248(StackVal, StackVal, 5, &bLocal_1049, &bLocal_1039, Function_255(bLocal_1039), Function_252(bLocal_1039), 0);
	}
	if (bLocal_1050)
	{
		Function_243(&bLocal_1050, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_283(var uParam0, var uParam1, int iParam2) //Position: 0xC7FC / 51196
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

bool Function_284(int iParam0) //Position: 0xC83C / 51260
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_285() //Position: 0xC84F / 51279
{
	switch (iLocal_1040)
	{
		case 0x00000000:
			Function_320(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 1.0f);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_1058);
			SET_ACTOR_HEALTH(bLocal_1058, GET_ACTOR_MAX_HEALTH(bLocal_1058));
			CLEAR_ACTOR_MIN_SPEED(bLocal_1058);
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_318();
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_1058, GET_ACTOR_MAX_HEALTH(bLocal_1058));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_315();
			Function_314(&Local_1032);
			bLocal_1060 = Function_313(StackVal, StackVal, *(&Local_188 + 2328[16]), 0, 1, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_188 + 2328[16]), 1, true, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_188 + 2328[06]), 1, true, 1);
			STREAMING_LOAD_SCENE_EXT(-4388,448f, 41,385f, 4365,41f, 0,975f, -0,167f, 0,149f, 1);
			Function_241(&bLocal_1167);
			iLocal_1040 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_312(bLocal_1060) || bLocal_1060 != 4294967295))
			{
				STREAMING_UNLOAD_SCENE();
				Function_241(&bLocal_1167);
				iLocal_1040 = 2;
			}
			break;
		
		case 0x00000002:
			Local_1041 = 1000;
			DESTROY_OBJECT(Local_188.f_3360);
			Function_253(bLocal_1039);
			Function_306(StackVal, StackVal, Function_253(bLocal_1039), bLocal_1039, Global_30633[0], Function_256(bLocal_1039), 0);
			TOGGLE_COVER_PROPS(0);
			if (SQUAD_IS_VALID(Local_188.f_1120))
			{
				Function_240(&Local_188 + 1120);
			}
			iLocal_1284 = 1;
			Function_241(&bLocal_1167);
			iLocal_1040 = 3;
			break;
		
		case 0x00000003:
			if (!IS_DOOR_VALID(bLocal_1307))
			{
				bLocal_1307 = Function_304("escalara", "generalHouse04", 1);
			}
			if (Function_286())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				STREAMING_UNLOAD_BOUNDS();
				UI_ENABLE("LoadingSpinner");
				if (HUD_IS_FADED())
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_188 + 2328[26]), 0, true, 1);
				}
				Function_241(&bLocal_1167);
				iLocal_1040 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_1048 = true;
			}
			break;
	}
	return;
}

bool Function_286() //Position: 0xCA97 / 51863
{
	Function_301(&Local_1041, 1);
	AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
	switch (Local_1041)
	{
		case 0x000003E8:
			Function_297(0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (bLocal_1039 != 99 && (Function_296(&Local_1032) || Local_1032.f_24 < 1))
			{
				Local_1041 = 1106;
			}
			else if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL_LEADER_05_END/REBEL_LEADER_05_END"))
			{
				LOG_ERROR("Cutscene file does not exist!");
				Local_1041 = 1106;
			}
			else
			{
				Function_294(StackVal, StackVal, bLocal_1031, *(&Local_188 + 2328[16]), &uLocal_1319, 0, 0, 0, 0, 1, 1);
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/REBEL_LEADER_05_END/REBEL_LEADER_05_END", 0, 2, 1, 2, 2);
					Global_63097 = 1;
				}
				if (!Function_293(&Local_1041 + 4))
				{
					Function_292(&Local_1041 + 4);
				}
				else
				{
					Function_241(&Local_1041 + 4);
				}
				Local_1041.f_24 = 0;
				Local_1041 = 1002;
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_290(&Local_1041 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene took too long to load! Skipping...");
				Local_1041 = 1105;
			}
			if (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				Global_63097 = 0;
				Function_197(0);
				Function_193(1, 1);
				Local_1041 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1041 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_188 + 2328[26]), 1, true, 1);
				Function_289(2.0f);
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
				CUTSCENE_MANAGER_STOP_CUTSCENE(0, 0);
				Local_1041.f_24 = 1;
				Local_1041 = 1104;
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
				Function_193(1, 1);
				AI_STOP_IGNORING_ACTORS();
				Global_63097 = 0;
				if (Local_1041.f_24)
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_188 + 2328[26]), 1, true, 1);
					Function_289(2.0f);
				}
				Function_287(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				Local_1041 = 1000;
				return 1;
			}
			break;
		
		case 0x00000452:
			Local_1041 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_287(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xCD60 / 52576
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
		Function_258();
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
	Function_288(iParam9);
}

void Function_288(bool bParam0) //Position: 0xCE50 / 52816
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

void Function_289(int iParam0) //Position: 0xCEF5 / 52981
{
	ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, iParam0, 0);
	return;
}

float Function_290(bool bParam0) //Position: 0xCF0B / 53003
{
	if (Function_293(bParam0))
	{
		if (Function_291(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_291(int iParam0) //Position: 0xCFD3 / 53203
{
	return Function_151(*iParam0, 2);
}

void Function_292(bool bParam0) //Position: 0xCFE0 / 53216
{
	if (!Function_293(bParam0))
	{
		Function_242(bParam0, 0.0f);
	}
	return;
}

bool Function_293(bool bParam0) //Position: 0xCFF5 / 53237
{
	return Function_151(*bParam0, 1);
}

void Function_294(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0xD002 / 53250
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
				Function_295(bVar1, bParam0);
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

void Function_295(bool bParam0, bool bParam1) //Position: 0xD270 / 53872
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

bool Function_296(bool bParam0) //Position: 0xD2E5 / 53989
{
	return bParam0->f_20;
}

void Function_297(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xD2EF / 53999
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
	Function_258();
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
				Function_300(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_300(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_299()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_299()));
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
	if (Function_298(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_159(0x4000000);
	}
	if (Function_298(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_159(0x8000000);
	}
}

bool Function_298(int iParam0) //Position: 0xD598 / 54680
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_299() //Position: 0xD5B4 / 54708
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

vector3 Function_300(bool bParam0) //Position: 0xD633 / 54835
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_301(int iParam0, int iParam1) //Position: 0xD644 / 54852
{
	Function_302(iParam0, iParam1, 0);
	return;
}

void Function_302(var uParam0, bool bParam1, bool bParam2) //Position: 0xD652 / 54866
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
			Function_303(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
	if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, false))
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
						Function_303(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_303(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xD79E / 55198
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

bool Function_304(var uParam0, int iParam1, int iParam2) //Position: 0xD7C7 / 55239
{
	return Function_305(Global_29006, uParam0, iParam1, iParam2);
}

int Function_305(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0xD7D9 / 55257
{
	char* cVar0[8];
	char* cVar2[32];
	bool bVar10;
	
	if (!Function_81(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(Global_29155[iParam010].f_32))
	{
		return "";
	}
	uParam1 = uParam1;
	strcpy(&cVar0, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, iParam3, 8);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, cParam2, 32);
	stradd(&cVar2, "*", 32);
	bVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(bVar10);
}

void Function_306(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0xD875 / 55413
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
	if (iParam3 != Global_34165.f_48 && !Function_311())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_310(0);
	Function_309();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_308(uParam4, iVar0, iVar1);
	Function_307();
}

void Function_307() //Position: 0xD912 / 55570
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

void Function_308(int iParam0, bool bParam1, bool bParam2) //Position: 0xD953 / 55635
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

void Function_309() //Position: 0xDAB9 / 55993
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_310(bool bParam0) //Position: 0xDADD / 56029
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

bool Function_311() //Position: 0xDB0C / 56076
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

int Function_312(bool bParam0) //Position: 0xDB27 / 56103
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_156(&(Global_29008[bParam0]), 4);
}

int Function_313(vector3 vParam0, int iParam3, int iParam4, bool bParam5) //Position: 0xDB43 / 56131
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 4294967295;
	iVar2 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (!(StackVal != 2 && iParam3))
				{
					iVar1 = iVar0;
					if (!(StackVal != 6 && iParam4))
					{
						iVar2 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	iVar3 = iVar2;
	if (iVar3 == 4294967295)
	{
		iVar3 = iVar1;
	}
	if (bParam5)
	{
		if (!iVar3 != 4294967295)
		{
		}
	}
	return iVar3;
}

void Function_314(bool bParam0) //Position: 0xDBD3 / 56275
{
	if (!Function_296(bParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_173(1, 0, 1);
		}
	}
	return;
}

void Function_315() //Position: 0xDBEE / 56302
{
	Function_178(47);
	Function_179(256);
	Function_159(2063);
	Function_316(265);
	return;
}

void Function_316(int iParam0) //Position: 0xDC0B / 56331
{
	Function_317(&Global_28842, iParam0);
	return;
}

void Function_317(var uParam0, var uParam1) //Position: 0xDC19 / 56345
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_318() //Position: 0xDC3C / 56380
{
	Function_319(&Local_188 + 1084, 1);
	if (SQUAD_IS_VALID(Local_188.f_1160))
	{
		Function_240(&Local_188 + 1160);
	}
	if (SQUAD_IS_VALID(Local_188.f_1124))
	{
		Function_240(&Local_188 + 1124);
	}
	if (SQUAD_IS_VALID(Local_188.f_1156))
	{
		Function_240(&Local_188 + 1156);
	}
	if (SQUAD_IS_VALID(Local_188.f_1448))
	{
		Function_240(&Local_188 + 1448);
	}
	if (SQUAD_IS_VALID(Local_188.f_1164))
	{
		Function_240(&Local_188 + 1164);
	}
	return;
}

void Function_319(var uParam0, int iParam1) //Position: 0xDCAA / 56490
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (IS_ACTOR_VALID((*uParam0)[iVar02]))
		{
			bVar1 = GET_MOUNT((*uParam0)[iVar02]);
			if (IS_ACTOR_VALID(bVar1) && iParam1)
			{
				DESTROY_ACTOR(bVar1);
			}
			DESTROY_ACTOR((*uParam0)[iVar02]);
		}
		iVar0++;
	}
	return;
}

void Function_320(bool bParam0) //Position: 0xDCF9 / 56569
{
	Function_321(0, 0x40400000);
	Function_186();
	Function_185();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_321(bool bParam0, float fParam1) //Position: 0xDD2D / 56621
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
	Function_323();
	Function_322();
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

void Function_322() //Position: 0xDE2B / 56875
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_323() //Position: 0xDE5D / 56925
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

void Function_324() //Position: 0xDF5A / 57178
{
	if (iLocal_1040 < 3 && iLocal_1040 > 105)
	{
	}
	switch (iLocal_1040)
	{
		case 0x00000000:
			Function_320(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 0.0f);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			iLocal_1293 = 1;
			Function_200(0);
			iLocal_1279 = 0;
			bLocal_1280 = false;
			iLocal_1281 = 0;
			iLocal_1282 = 0;
			iLocal_1283 = 0;
			SET_ACTOR_HEALTH(bLocal_1058, GET_ACTOR_MAX_HEALTH(bLocal_1058));
			CLEAR_ACTOR_MIN_SPEED(bLocal_1058);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_1508)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_1508));
			}
			Function_319(&Local_188 + 1084, 1);
			Function_411(Local_188.f_1160);
			Function_411(Local_188.f_1164);
			Function_411(Local_188.f_1448);
			Function_411(Local_188.f_1124);
			Function_411(Local_188.f_1156);
			Function_411(Local_188.f_1340);
			Function_411(Local_188.f_1448);
			Function_411(Local_188.f_1168);
			Function_411(Local_188.f_1452);
			Function_411(Local_188.f_1456);
			Function_411(Local_188.f_1120);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_1768)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_1768));
			}
			if (!iLocal_1061[7] == 1)
			{
				GIVE_WEAPON_TO_ACTOR(bLocal_1058, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_1058, 0);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_315();
			if (!iLocal_1061[7])
			{
				vLocal_1316 = { StackVal, StackVal, *(&Local_188 + 3016) };
				vLocal_1316.x = (vLocal_1316.x + 10.0f);
				TELEPORT_ACTOR(Global_34573, &vLocal_1316, 1, 1, 1);
				bLocal_1060 = Function_313(StackVal, StackVal, *(&Local_188 + 3016), 0, 1, 1);
				Function_241(&bLocal_1167);
				iLocal_1040 = 1;
			}
			else
			{
				Function_223(&bLocal_1106);
				Function_241(&bLocal_1167);
				iLocal_1040 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() || iLocal_1061[4])
			{
				if (Function_410())
				{
					if (Function_312(bLocal_1060) || bLocal_1060 != 4294967295)
					{
						if (Function_406(&bLocal_1122))
						{
							Function_241(&bLocal_1167);
							iLocal_1040 = 2;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!iLocal_1061[7])
			{
				Function_405();
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_404();
				Function_399();
				DESTROY_ACTOR((*&Local_188 + 1252)[12]);
				DESTROY_ACTOR((*&Local_188 + 1252)[22]);
				DESTROY_ACTOR((*&Local_188 + 1252)[32]);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_188 + 1252)[02], *(&Local_188 + 3016), 1, true, 1);
			}
			ACTOR_PUT_WEAPON_IN_HAND(Global_34573, GET_WEAPON_EQUIPPED(Global_34573, true), 0);
			if (IS_OBJECT_VALID(Local_188.f_3364))
			{
				DESTROY_OBJECT(Local_188.f_3364);
			}
			ADD_COMPANION_PERMANENT();
			TOGGLE_COVER_PROPS(0);
			if (Function_397(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_1032, bLocal_1039))
			{
				Local_1041 = 1000;
				Function_241(&bLocal_1167);
				iLocal_1040 = 3;
			}
			else
			{
				Function_395(-4080,987f, 10,104f, 4303,014f, -0,081f, -0,055f, 0,995f);
				Function_390();
				Function_389(&bLocal_1167, 1.0f);
				iLocal_1040 = 4;
			}
			Function_253(bLocal_1039);
			Function_306(StackVal, StackVal, Function_253(bLocal_1039), bLocal_1039, Global_30633[0], Function_256(bLocal_1039), 0);
			break;
		
		case 0x00000003:
			if (Function_358())
			{
				Function_395(-4080,987f, 10,104f, 4303,014f, -0,081f, -0,055f, 0,995f);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_188 + 1252)[02], *(&Local_188 + 3016), 1, true, 1);
				Function_241(&bLocal_1167);
				iLocal_1040 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_290(&bLocal_1167) <= 1.0f)
			{
				if (!DECOR_CHECK_EXIST((*&Local_188 + 1252)[02], "bSafetyReposition"))
				{
					SET_ACTOR_HEADING(StackVal, (*&Local_188 + 1252)[02], 1);
					DECOR_SET_BOOL((*&Local_188 + 1252)[02], "bSafetyReposition", true);
					Function_357();
				}
			}
			if (Function_290(&bLocal_1167) <= 2.0f && (!HUD_IS_FADED() || STREAMING_IS_WORLD_LOADED()))
			{
				Function_193(0, 1);
				UI_POP("nCutscenes");
				HUD_ENABLE(true);
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
				ACTOR_PUT_WEAPON_IN_HAND(Global_34573, GET_WEAPON_EQUIPPED(Global_34573, true), 0);
				RESET_ACTIONTREE_FOR_ACTOR(Global_34573);
				ACTOR_POP_NEXT_GAIT(Global_34573, 0, false);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_1058, 0);
				ACTOR_PUT_WEAPON_IN_HAND(bLocal_1058, 9, 0);
				TASK_POINT_GUN_AT_OBJECT(bLocal_1058, (*&Local_188 + 1184)[02], -1.0f, 0);
				RESET_ACTIONTREE_FOR_ACTOR(bLocal_1058);
				ACTOR_POP_NEXT_GAIT(bLocal_1058, 0, false);
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_1058);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR((*&Local_188 + 1184)[02], 60, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR((*&Local_188 + 1184)[02], 61, 0);
				TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(Global_34573), -1.0f, 0, 0);
				Function_355(7, 0, 1);
				SET_CAMERA_DIRECTION(GET_GAME_CAMERA(), -0,132f, -0,006f, 0,991f, 1);
				SET_ACTION_NODE_FOR_ACTOR((*&Local_188 + 1184)[02], "reb05_pull/idle");
				STREAMING_UNLOAD_SCENE();
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_1058, 13, false);
				SET_ACTOR_HEALTH(bLocal_1058, GET_ACTOR_MAX_HEALTH(bLocal_1058));
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 0,1f);
				Function_355(7, 0, 1);
				AI_STOP_IGNORING_ACTORS();
				SET_ACTOR_ONE_SHOT_DEATH(GET_PLAYER_ACTOR(0), false);
				SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_188 + 1172)[02], 1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 0.0f);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR((*&Local_188 + 1172)[02], 60, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR((*&Local_188 + 1172)[02], 61, 0);
				if (IS_BLIP_VALID(bLocal_1315))
				{
					REMOVE_BLIP(bLocal_1315);
				}
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				RESET_REACT_NODE_FOR_ACTOR(bLocal_1058);
				SET_ACTOR_CAN_BE_TARGETED((*&Local_188 + 1184)[02], true);
				SET_ACTOR_CAN_BE_TARGETED((*&Local_188 + 1172)[02], true);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1058);
				Function_348(&(Local_1222[017]), bLocal_1058, "RebelLeader", 0, 0x5f5e100, 1);
				iLocal_1283 = 0;
				iLocal_1285 = 0;
				SET_ACTOR_INVULNERABILITY((*&Local_188 + 1184)[02], false);
				SET_ACTOR_INVULNERABILITY((*&Local_188 + 1172)[02], false);
				SET_ACTOR_PERMANENT((*&Local_188 + 1184)[02], true);
				SET_ACTOR_PERMANENT((*&Local_188 + 1172)[02], true);
				Function_346(&Local_188 + 1232, 0, 0, 0);
				iLocal_1294 = 0;
				Function_241(&bLocal_1167);
				iLocal_1040 = 5;
			}
			break;
		
		case 0x00000005:
			SET_CAMERA_DIRECTION(GET_GAME_CAMERA(), -0,132f, -0,006f, 0,991f, 1);
			Function_241(&bLocal_1167);
			iLocal_1040 = 6;
			break;
		
		case 0x00000006:
			if (!Function_334())
			{
				iLocal_1283 = 0;
				Function_241(&bLocal_1167);
				iLocal_1040 = 15;
			}
			break;
		
		case 0x0000000F:
			Function_332();
			if (!Function_331())
			{
				iLocal_1283 = 0;
				Function_241(&bLocal_1167);
				iLocal_1040 = 16;
			}
			break;
		
		case 0x00000010:
			Function_332();
			if (!Function_326())
			{
				Local_1041 = 1000;
				iLocal_1283 = 0;
				Function_241(&bLocal_1167);
				iLocal_1040 = 17;
			}
			break;
		
		case 0x00000011:
			Function_332();
			Function_241(&bLocal_1167);
			iLocal_1040 = 105;
			break;
		
		case 0x00000069:
			Function_332();
			if (Function_290(&bLocal_1167) <= 0,4f)
			{
				AI_GOAL_LOOK_CLEAR(bLocal_1058);
				TASK_POINT_GUN_AT_COORD(bLocal_1058, &Local_188 + 3016, -1.0f);
				UI_DISABLE("LoadingSpinner");
				Local_1041 = 1000;
				Function_241(&bLocal_1167);
				iLocal_1040 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_325())
			{
				if (HUD_IS_FADED())
				{
					SET_ENABLE_NAV_STICK_INPUT(0, 1);
					SET_PLAYER_CONTROL_CONFIG(0, 0);
					CLEAR_ALL_CORPSES();
					CLEAR_DECALS();
					REMOVE_ALL_PICKUPS();
					iLocal_1061[8] = 1;
					Function_241(&bLocal_1167);
					bLocal_1039 = 101;
					iLocal_1040 = 0;
				}
			}
			break;
	}
	return;
}

bool Function_325() //Position: 0xE63C / 58940
{
	Function_301(&Local_1041, 1);
	switch (Local_1041)
	{
		case 0x000003E8:
			Function_297(0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (bLocal_1039 != 99 && (Function_296(&Local_1032) || Local_1032.f_24 < 1))
			{
				Local_1041 = 1106;
			}
			else if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL05_CS06/REBEL05_CS06"))
			{
				LOG_ERROR("Cutscene file does not exist!");
				Local_1041 = 1106;
			}
			else
			{
				uLocal_1319 = (*&Local_188 + 1460)[0];
				Function_294(StackVal, StackVal, bLocal_1031, *(&Local_188 + 2328[16]), &uLocal_1319, 0, 0, 0, 0, 1, 1);
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/REBEL05_CS06/REBEL05_CS06", 0, 2, 1, 1, 2);
					Global_63097 = 1;
				}
				if (!Function_293(&Local_1041 + 4))
				{
					Function_292(&Local_1041 + 4);
				}
				else
				{
					Function_241(&Local_1041 + 4);
				}
				Local_1041 = 1002;
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_290(&Local_1041 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene took too long to load! Skipping...");
				Local_1041 = 1105;
			}
			if (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(0);
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				Global_63097 = 0;
				Function_197(0);
				Function_193(1, 1);
				Local_1041 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1041 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_188 + 2328[26]), 1, true, 1);
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
				CUTSCENE_MANAGER_STOP_CUTSCENE(0, 0);
				Local_1041 = 1104;
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
				Function_193(1, 1);
				AI_STOP_IGNORING_ACTORS();
				STREAMING_UNLOAD_SCENE();
				Global_63097 = 0;
				Function_287(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				Local_1041 = 1000;
				return 1;
			}
			break;
		
		case 0x00000452:
			Local_1041 = 1000;
			return 1;
			break;
	}
	return 0;
}

bool Function_326() //Position: 0xE899 / 59545
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE((*&Local_188 + 1184)[02]))
	{
		Function_241(&bLocal_1167);
		iLocal_1283 = 0;
		return 0;
	}
	switch (iLocal_1283)
	{
		case 0x00000000:
			if (IS_ACTOR_ALIVE((*&Local_188 + 1184)[02]))
			{
				if (Function_290(&bLocal_1167) <= 0,3f)
				{
					Function_328();
					bVar0 = TASK_SEQUENCE_OPEN();
					TASK_VEHICLE_LEAVE(false);
					TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_188 + 1184)[02], bVar0);
					TASK_SEQUENCE_RELEASE(bVar0, 1);
					Function_241(&bLocal_1167);
					iLocal_1283 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_290(&bLocal_1167) <= 1.0f)
			{
				Function_327((*&Local_188 + 1184)[02]);
				Function_241(&bLocal_1167);
				iLocal_1283 = 2;
			}
			break;
	}
	return 1;
}

void Function_327(bool bParam0) //Position: 0xE94A / 59722
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	var uVar5;
	
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_1058, 200.0f);
	MEMORY_ALLOW_SHOOTING(bLocal_1058, true);
	MEMORY_CONSIDER_AS(bLocal_1058, (*&Local_188 + 1172)[02], 4);
	MEMORY_CONSIDER_AS(bLocal_1058, (*&Local_188 + 1184)[02], 4);
	SET_ACTOR_ONE_SHOT_DEATH(bParam0, true);
	GET_POSITION(bParam0, &vVar2);
	vVar2 = { StackVal, StackVal, Vector(vVar2, StackVal, StackVal) + Vector(0,6f, 0,6f, 0,6f) };
	bVar1 = ((IS_ACTOR_ALIVE((*&Local_188 + 1172)[02]) && bParam0 != (*&Local_188 + 1184)[02]) || (IS_ACTOR_ALIVE((*&Local_188 + 1184)[02]) && bParam0 != (*&Local_188 + 1172)[02]));
	GET_POSITION(bLocal_1058, &uVar5);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_SHOOT_FROM_POSITION(false, bParam0, &uVar5);
	if (!bVar1)
	{
		TASK_POINT_GUN_AT_COORD(false, &vVar2, -1.0f);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_PRIORITY_SET(bLocal_1058, true);
	TASK_SEQUENCE_PERFORM(bLocal_1058, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_328() //Position: 0xEA07 / 59911
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Rebel05_AllMakesArun", "Rebel05_AllMakesArun", false, 2, 1, 0, 1);
		Function_329(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_329(bool bParam0) //Position: 0xEA59 / 59993
{
	var uVar0;
	
	Function_330(0, Global_34573, bParam0, uVar0);
	Function_330(1, bLocal_1058, bParam0, uVar0);
	if (bLocal_1039 == 0)
	{
		Function_330(2, FIND_ACTOR_IN_LAYOUT(Local_188, "guyWhoBriefsReyes"), bParam0, uVar0);
	}
	else
	{
		Function_330(2, (*&Local_188 + 1296)[02], bParam0, uVar0);
	}
	Function_330(3, (*&Local_188 + 1384)[62], bParam0, uVar0);
	Function_330(4, (*&Local_188 + 1384)[22], bParam0, uVar0);
	Function_330(5, (*&Local_188 + 1184)[02], bParam0, uVar0);
	Function_330(6, (*&Local_188 + 1172)[02], bParam0, uVar0);
	Function_330(7, FIND_ACTOR_IN_LAYOUT(Local_188, "S3_prisoner_3"), bParam0, uVar0);
	Function_330(8, (*&Local_188 + 1128)[22], bParam0, uVar0);
	Function_330(9, (*&Local_188 + 1296)[02], bParam0, uVar0);
	return;
}

void Function_330(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0xEB2F / 60207
{
	bool bVar0;
	
	uParam3 = uParam3;
	if (Function_151(bParam2, Function_137(bParam0)))
	{
		bVar0 = bParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_331() //Position: 0xEB54 / 60244
{
	if (!IS_ACTOR_ALIVE((*&Local_188 + 1172)[02]))
	{
		Function_241(&bLocal_1167);
		iLocal_1283 = 0;
		if (!IS_ACTOR_ALIVE((*&Local_188 + 1184)[02]))
		{
		}
		else
		{
			Function_327((*&Local_188 + 1184)[02]);
		}
		return 0;
	}
	switch (iLocal_1283)
	{
		case 0x00000000:
			if (DECOR_CHECK_EXIST((*&Local_188 + 1172)[02], "npickupGun"))
			{
				Function_241(&bLocal_1167);
				iLocal_1283 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_290(&bLocal_1167) <= 0,1f)
			{
				AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
				Function_327((*&Local_188 + 1172)[02]);
				Function_241(&bLocal_1167);
				iLocal_1283 = 2;
			}
			break;
		
		case 0x00000002:
			if (!IS_ANY_SPEECH_PLAYING((*&Local_188 + 1172)[02]))
			{
				Function_327((*&Local_188 + 1172)[02]);
				Function_241(&bLocal_1167);
				iLocal_1283 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_290(&bLocal_1167) < 10.0f)
			{
				TASK_KILL_CHAR((*&Local_188 + 1172)[02], Global_34573);
			}
			break;
	}
	return 1;
}

int Function_332() //Position: 0xEC4E / 60494
{
	switch (iLocal_1285)
	{
		case 0x00000000:
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL05_CS06/REBEL05_CS06"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/REBEL05_CS06/REBEL05_CS06", 0, 2, 1, 1, 2);
				STREAMING_UNLOAD_BOUNDS();
				STREAMING_LOAD_SCENE_EXT(*(&Local_188 + 2028[06]), *(&Local_188 + 2028[06] + 12), 1);
				iLocal_1285 = 1;
			}
			else
			{
				iLocal_1285 = 5;
			}
			break;
		
		case 0x00000001:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iLocal_1285 = 5;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				iLocal_1285 = 2;
			}
			break;
		
		case 0x00000002:
			Function_333();
			CUTSCENE_MANAGER_RESUME_LOADING();
			iLocal_1285 = 3;
			break;
		
		case 0x00000003:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_SET_CUTSCENE_MODE(0);
				iLocal_1285 = 4;
			}
			break;
		
		case 0x00000004:
			return 1;
			break;
		
		case 0x00000005:
			return 1;
			break;
	}
	return 0;
}

void Function_333() //Position: 0xED4A / 60746
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		PRINTSTRING("dealing with cutscene actor named ");
		PRINTSTRING(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0));
		PRINTNL();
		bVar2 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			PRINTSTRING("Found ");
			PRINTSTRING(GET_ACTOR_NAME(bVar2));
			PRINTSTRING(", his enum is ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTOR_ENUM(bVar2)));
			PRINTNL();
			iVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar0);
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (iVar1 == GET_ACTOR_ENUM(Global_34573))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), Global_34573);
				}
			}
			if (iVar1 == GET_ACTOR_ENUM(bLocal_1058))
			{
				CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), bLocal_1058);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_334() //Position: 0xEE18 / 60952
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE((*&Local_188 + 1184)[02]))
	{
		if (!DECOR_CHECK_EXIST((*&Local_188 + 1184)[02], "bDeadAnimStarted"))
		{
			DECOR_SET_BOOL((*&Local_188 + 1184)[02], "bDeadAnimStarted", true);
			SET_ACTION_NODE_FOR_ACTOR((*&Local_188 + 1184)[02], "reb05_pull/allende_death");
			SET_ANIM_SET_FOR_ACTOR((*&Local_188 + 1172)[02], "reb05_pull", 1);
			SET_ACTION_NODE_FOR_ACTOR((*&Local_188 + 1172)[02], "reb05_pull/linked_bill_holding/bill_released");
			GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1172)[02], 5, 1.0f, 1, 0);
			Function_345();
		}
	}
	if (!IS_ACTOR_ALIVE((*&Local_188 + 1172)[02]))
	{
		if (!DECOR_CHECK_EXIST((*&Local_188 + 1172)[02], "bDeadAnimStarted"))
		{
			DECOR_SET_BOOL((*&Local_188 + 1172)[02], "bDeadAnimStarted", true);
			SET_ACTION_NODE_FOR_ACTOR((*&Local_188 + 1184)[02], "reb05_pull/bill_killed ");
			Function_328();
		}
	}
	if ((!IS_ACTOR_ALIVE((*&Local_188 + 1184)[02]) && DECOR_CHECK_EXIST((*&Local_188 + 1184)[02], "bDeadAnimStarted")) || !IS_ACTOR_ALIVE((*&Local_188 + 1172)[02]))
	{
		Function_241(&bLocal_1167);
		iLocal_1283 = 0;
		return 0;
	}
	if (iLocal_1283 > 5 && iLocal_1283 < 3)
	{
		if (((IS_ACTOR_SHOOTING(Global_34573) || !IS_ACTOR_ALIVE((*&Local_188 + 1172)[02])) || !IS_ACTOR_ALIVE((*&Local_188 + 1184)[02])) || !Function_342((*&Local_188 + 1184)[02], Global_34573, 40.0f))
		{
			Function_241(&bLocal_1167);
			iLocal_1283 = 5;
		}
	}
	switch (iLocal_1283)
	{
		case 0x00000000:
			iLocal_1293 = 0;
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_1058, Global_34573, 60.0f, 15.0f, 30.0f);
			if (SQUAD_IS_VALID(Local_188.f_1232))
			{
				Function_341(Local_188.f_1232);
				SQUAD_GOALS_CLEAR(Local_188.f_1232);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1232, false, 1, 4294967295);
				TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			}
			Function_241(&bLocal_1167);
			iLocal_1283 = 3;
			break;
		
		case 0x00000003:
			HUD_CLEAR_OBJECTIVE();
			Function_340("Rebel05_obj08", 0x40f00000, 1, 2, 0, 0, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT((*&Local_188 + 1172)[02], (*&Local_188 + 1252)[02], true);
			SET_OBJECT_COLLIDE_WITH_OBJECT((*&Local_188 + 1184)[02], (*&Local_188 + 1252)[02], true);
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(Local_1041.f_16);
			DESTROY_OBJECT(Local_1041.f_16);
			Function_241(&bLocal_1167);
			iLocal_1283 = 4;
			break;
		
		case 0x00000004:
			bLocal_1280 = false;
			Function_242(&bLocal_1179, 10.0f);
			Function_241(&bLocal_1167);
			iLocal_1283 = 5;
			break;
		
		case 0x00000005:
			if (Function_290(&bLocal_1179) <= 5.0f)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					switch (bLocal_1280)
					{
						case 0x00000000:
							Function_339();
							break;
						
						case 0x00000001:
							Function_338();
							break;
						
						case 0x00000002:
							Function_337();
							break;
						
						case 0x00000003:
							Function_336();
							bVar0 = TASK_SEQUENCE_OPEN();
							TASK_POINT_GUN_AT_OBJECT(bLocal_1058, (*&Local_188 + 1184)[02], 3,1f, 0);
							Function_335(0, (*&Local_188 + 1184)[02]);
							TASK_POINT_GUN_AT_OBJECT(false, (*&Local_188 + 1172)[02], -1.0f, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_1058, bVar0);
							TASK_SEQUENCE_RELEASE(bVar0, 1);
							break;
					}
					Function_241(&bLocal_1179);
					bLocal_1280++;
					PRINTSTRING("TAUNT - go to ");
					PRINTINT(bLocal_1280);
					PRINTNL();
				}
			}
			if (((IS_ACTOR_SHOOTING(Global_34573) || !IS_ACTOR_ALIVE((*&Local_188 + 1172)[02])) || !IS_ACTOR_ALIVE((*&Local_188 + 1184)[02])) || (!Function_342(bLocal_1058, Global_34573, 40.0f) && Function_290(&bLocal_1167) <= 1.0f))
			{
				Function_327((*&Local_188 + 1184)[02]);
				if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					if (IS_ACTOR_ALIVE(GET_LAST_ATTACK_TARGET(Global_34573)))
					{
						Function_327(GET_LAST_ATTACK_TARGET(Global_34573));
						CLEAR_LAST_ATTACK(Global_34573);
					}
				}
				Function_241(&bLocal_1167);
				iLocal_1283 = 4294967295;
			}
			break;
	}
	return 1;
}

void Function_335(bool bParam0, bool bParam1) //Position: 0xF241 / 62017
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_FROM_POSITION(bParam0, bParam1, &uVar0);
	return;
}

void Function_336() //Position: 0xF257 / 62039
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_ReyesKillsColonel", "Rebel05_ReyesKillsColonel", false, 1, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_337() //Position: 0xF2B2 / 62130
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_billJonTaunt_v7_AA", "Rebel05_billJonTaunt_v7_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_billJonTaunt_v7_AB", "Rebel05_billJonTaunt_v7_AB", 11, 1, 1, 0, 1);
		Function_329(2113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_338() //Position: 0xF355 / 62293
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_billJonTaunt_v6_AA", "Rebel05_billJonTaunt_v6_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_billJonTaunt_v6_AB", "Rebel05_billJonTaunt_v6_AB", 11, 1, 1, 0, 1);
		Function_329(2113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_339() //Position: 0xF3F8 / 62456
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_billJonTaunt_v4_AA", "Rebel05_billJonTaunt_v4_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_billJonTaunt_v4_AB", "Rebel05_billJonTaunt_v4_AB", 11, 1, 1, 0, 1);
		Function_329(2113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_340(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xF49B / 62619
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

void Function_341(bool bParam0) //Position: 0xF4EE / 62702
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

bool Function_342(bool bParam0, bool bParam1, float fParam2) //Position: 0xF520 / 62752
{
	float fVar0;
	
	fVar0 = Function_343(bParam0, bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_343(bool bParam0, bool bParam1) //Position: 0xF53D / 62781
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_344(&uVar0, &uVar3);
	return iVar6;
}

var Function_344(var uParam0, bool bParam1) //Position: 0xF55C / 62812
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_345() //Position: 0xF57A / 62842
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_BillFeignsSurrend", "Rebel05_BillFeignsSurrend", false, 2, 1, 0, 1);
		Function_329(65);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_346(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xF5D6 / 62934
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (IS_ACTOR_RIDING_VEHICLE(bVar1))
			{
				bVar2 = GET_VEHICLE(bVar1);
				if (bParam3)
				{
					DESTROY_ACTOR(bVar1);
					DESTROY_ACTOR(bVar2);
				}
				else if (bParam2)
				{
					if (!Function_347(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_347(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar2);
					}
				}
				if (IS_ACTOR_VALID(bVar1))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
					else
					{
						RELEASE_ACTOR(bVar1);
					}
				}
				if (IS_ACTOR_VALID(bVar2))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar2);
					}
					else
					{
						RELEASE_ACTOR(bVar2);
					}
				}
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = GET_MOUNT(bVar1);
				if (bParam3)
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
					}
					DESTROY_ACTOR(bVar1);
					DESTROY_ACTOR(bVar2);
				}
				else if (bParam2)
				{
					if (!Function_347(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_347(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
						{
							DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
						}
						DESTROY_ACTOR(bVar2);
					}
				}
				if (IS_ACTOR_VALID(bVar1))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
					else
					{
						RELEASE_ACTOR(bVar1);
					}
				}
				if (IS_ACTOR_VALID(bVar2))
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
					}
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar2);
					}
					else
					{
						RELEASE_ACTOR(bVar2);
					}
				}
			}
			else
			{
				if (bParam3)
				{
					DESTROY_ACTOR(bVar1);
				}
				else if (bParam2)
				{
					if (!Function_347(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
				}
				if (IS_ACTOR_VALID(bVar1))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
					else
					{
						RELEASE_ACTOR(bVar1);
					}
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
}

bool Function_347(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF7D4 / 63444
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

int Function_348(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF7EE / 63470
{
	if (!Function_354(iParam0, uParam1))
	{
		return 0;
	}
	if (!Function_353(iParam0, bParam2))
	{
		return 0;
	}
	Function_352(iParam0, iParam3);
	iParam0->f_40 = 0;
	Function_349(iParam0, iParam4, iParam5);
	return 1;
}

void Function_349(var uParam0, int iParam1, int iParam2) //Position: 0xF82A / 63530
{
	if (iParam1 != 100000000)
	{
		Function_351(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_350(uParam0, iParam2);
	}
	return;
}

void Function_350(int iParam0, bool bParam1) //Position: 0xF84D / 63565
{
	iParam0->f_40 = 0;
	Function_351(iParam0, 2, bParam1);
	Function_351(iParam0, 4, bParam1);
	Function_351(iParam0, 8, bParam1);
	Function_351(iParam0, 16, bParam1);
	Function_351(iParam0, 32, bParam1);
	Function_351(iParam0, 64, bParam1);
	Function_351(iParam0, 128, bParam1);
	Function_351(iParam0, 256, bParam1);
	Function_351(iParam0, 512, bParam1);
	Function_351(iParam0, 1024, bParam1);
	return;
}

void Function_351(int iParam0, int iParam1, bool bParam2) //Position: 0xF8B3 / 63667
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

void Function_352(var uParam0, int iParam1) //Position: 0xF8EF / 63727
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_353(int iParam0, bool bParam1) //Position: 0xF8FB / 63739
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

bool Function_354(var uParam0, bool bParam1) //Position: 0xF984 / 63876
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
	*uParam0 = bParam1;
	uParam0->f_28 = GET_OBJECT_TYPE(*uParam0);
	uParam0->f_32 = 2;
	switch (uParam0->f_28)
	{
		case 0x0000000F:
			bVar0 = GET_ACTOR_FROM_OBJECT(*uParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_HORSE(bVar0))
				{
					uParam0->f_32 = 1;
				}
				else if (IS_ACTOR_VEHICLE(bVar0))
				{
					uParam0->f_32 = 3;
				}
			}
			break;
		
		case 0x00000019:
			bVar1 = GET_SQUAD_FROM_OBJECT(*uParam0);
			if (SQUAD_IS_VALID(bVar1))
			{
				if (SQUAD_GET_SIZE(bVar1) >= 0)
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bVar1, false);
					if (IS_ACTOR_VALID(bVar2))
					{
						if (IS_ACTOR_HORSE(bVar2))
						{
							uParam0->f_32 = 1;
						}
						else if (IS_ACTOR_VEHICLE(bVar2))
						{
							uParam0->f_32 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			bVar3 = GET_OBJECTSET_FROM_OBJECT(*uParam0);
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
								uParam0->f_32 = 1;
							}
							else if (IS_ACTOR_VEHICLE(bVar5))
							{
								uParam0->f_32 = 3;
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

void Function_355(int iParam0, bool bParam1, bool bParam2) //Position: 0xFB10 / 64272
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
						Function_202(bVar1);
					}
				}
				Function_356(bVar0);
			}
		}
	}
	return;
}

void Function_356(bool bParam0) //Position: 0xFC07 / 64519
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

void Function_357() //Position: 0xFC33 / 64563
{
	vector3 vVar0;
	bool bVar3;
	
	GET_OBJECT_POSITION(Local_188.f_3052, &vVar0);
	bVar3 = GET_OBJECT_HEADING(Local_188.f_3052);
	CREATE_PROP_IN_LAYOUT(Local_188, "billsFallenHat", "anc_firstOldFriend_set_anc_firstOldFriend_hat", vVar0, 165.0f, bVar3, 0.0f, 0);
	PRINTSTRING("Made hat at ");
	PRINTVECTOR(vVar0);
	PRINTNL();
	return;
}

bool Function_358() //Position: 0xFCBE / 64702
{
	return Function_359("$/cutscene/REBEL_LEADER_05_CS03/REBEL_LEADER_05_CS03", &Local_1041, &Local_1032, &bLocal_1039, 69890, 69523, 68637, 67124, 66974, 66896, 0, 1, 1, 2, 2, 0, 0);
}

float Function_359(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xFD26 / 64806
{
	if (!bParam15)
	{
		Function_301(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_296(bParam2) || bParam2->f_24 < 1))
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
				Function_241(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_366())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_365(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_241(iParam1 + 4);
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
					Function_365(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_290(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_290(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_363(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_365(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_241(iParam1 + 4);
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
						Function_362(1.0f);
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
						Function_360();
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
					Function_288(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_296(bParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_360() //Position: 0x1033B / 66363
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_361();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_361() //Position: 0x10380 / 66432
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_362(bool bParam0) //Position: 0x10392 / 66450
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

void Function_363(bool bParam0, bool bParam1) //Position: 0x103AF / 66479
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
			if ((bVar3 == Global_34573 && !Function_364(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_364(bool bParam0) //Position: 0x1042F / 66607
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

int Function_365(bool bParam0) //Position: 0x1045E / 66654
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

bool Function_366() //Position: 0x10516 / 66838
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

int Function_367() //Position: 0x10550 / 66896
{
	switch (bLocal_1039)
	{
		case 0x00000007:
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_188 + 2180[26]), 1, true, 1);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_1058, 0);
			TASK_STAND_STILL(bLocal_1058, -1.0f, 0, 0);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_368() //Position: 0x1059E / 66974
{
	switch (bLocal_1039)
	{
		case 0x00000007:
			if (DECOR_CHECK_EXIST(Local_188.f_1120, "bMadeAxeGuys"))
			{
				DECOR_REMOVE(Local_188.f_1120, "bMadeAxeGuys");
			}
			Function_287(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000008:
			Function_287(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
			UI_PUSH("nCutscenes");
			HUD_ENABLE(false);
			return 1;
			break;
		
		default:
			Function_287(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

int Function_369() //Position: 0x10634 / 67124
{
	switch (bLocal_1039)
	{
		case 0x00000007:
			if (IS_ACTOR_VALID(bLocal_1324))
			{
				DESTROY_ACTOR(bLocal_1324);
			}
			if (!IS_DOOR_OPENED(bLocal_1296))
			{
				Function_196(bLocal_1296, 0);
				OPEN_DOOR_DIRECTION_FAST(bLocal_1296, false);
			}
			if (!IS_DOOR_OPENED(bLocal_1297))
			{
				Function_196(bLocal_1297, 0);
				OPEN_DOOR_DIRECTION_FAST(bLocal_1297, true);
			}
			if (!DECOR_CHECK_EXIST(Local_188.f_1120, "bMadeAxeGuys"))
			{
				Function_374(StackVal, StackVal, StackVal, StackVal, StackVal, 516, *(&Local_188 + 2180[06]));
				Function_374(StackVal, StackVal, StackVal, StackVal, StackVal, 522, *(&Local_188 + 2180[16]));
				Function_374(StackVal, StackVal, StackVal, StackVal, StackVal, 521, *(&Local_188 + 2180[46]));
			}
			TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_188 + 2180[36]), 1, true, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_188 + 2180[26]), 1, true, 1);
			ACTOR_PUT_WEAPON_IN_HAND(Global_34573, GET_WEAPON_EQUIPPED(Global_34573, 5), 0);
			RESET_ACTIONTREE_FOR_ACTOR(Global_34573);
			ACTOR_POP_NEXT_GAIT(Global_34573, 0, false);
			Function_373();
			return 1;
			break;
		
		case 0x00000008:
			if (iLocal_1040 <= 106)
			{
				Function_390();
				UI_PUSH("nCutscenes");
				HUD_ENABLE(false);
				Function_372(Local_188, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
				Function_370(-4080,004f, 9,294f, 4308,681f, -0,55f, 0,027f, -0,835f, -4079,117f, 9,372f, 4308,701f, -0,647f, 0,077f, -0,758f, 2.0f, 0, 1, 1, 0);
				SET_ACTOR_HEADING(bLocal_1058, -226,574f, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bLocal_1058, 9, 0);
				RESET_ACTIONTREE_FOR_ACTOR(bLocal_1058);
				ACTOR_POP_NEXT_GAIT(bLocal_1058, 0, false);
				ACTOR_PUT_WEAPON_IN_HAND(Global_34573, GET_WEAPON_EQUIPPED(Global_34573, true), 0);
				RESET_ACTIONTREE_FOR_ACTOR(Global_34573);
				ACTOR_POP_NEXT_GAIT(Global_34573, 0, false);
				if (IS_OBJECT_VALID(bLocal_1311))
				{
					SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(bLocal_1311));
				}
				SET_ANIM_SET_FOR_ACTOR(Global_34573, "rebel05_cs05", 0);
				SET_ACTION_NODE_FOR_ACTOR(Global_34573, "rebel05_cs05/john");
				SET_ANIM_SET_FOR_ACTOR(bLocal_1058, "rebel05_cs05", 0);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_1058, "rebel05_cs05/reyes");
				TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(Global_34573), -1.0f, 0, 0);
				TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(bLocal_1058), -1.0f, 0, 0);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_370(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12, bool bParam13, int iParam14, int iParam15, bool bParam16) //Position: 0x10892 / 67730
{
	Function_371(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0));
	Function_371(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 1));
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098)) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(Global_63098));
	}
	if (fParam12 >= 0.0f)
	{
		fParam12 = 9999.0f;
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(Global_63098, 0), vParam0);
}

void Function_371(bool bParam0) //Position: 0x10A1C / 68124
{
	REMOVE_OBJECT_FROM_ATTACHMENT(bParam0);
	RESET_CAMERASHOT_TARGET(bParam0, 0);
	return;
}

void Function_372(bool bParam0, float fParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) //Position: 0x10A2D / 68141
{
	Function_193(0, 1);
	Global_63098 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
	Global_63098.f_12 = iParam3;
	Global_63098.f_16 = iParam4;
	Global_63098.f_20 = iParam5;
	Global_63098.f_24 = iParam6;
	Global_63098.f_28 = iParam7;
	Global_63098.f_32 = iParam8;
	Global_63098.f_36 = iParam9;
	Global_63098.f_40 = iParam10;
	Global_63098.f_44 = iParam11;
	(&Global_63098 + 44)->f_4 = iParam12;
	(&Global_63098 + 44)->f_8 = iParam13;
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

void Function_373() //Position: 0x10B06 / 68358
{
	bool bVar0;
	
	RESET_ANIM_SET_FOR_ACTOR(bLocal_1058, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bLocal_1058, false);
	ACTOR_PUT_WEAPON_IN_HAND(bLocal_1058, 9, 1);
	ACTOR_POP_NEXT_GAIT(bLocal_1058, 0, false);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, 0,5f, 1, 0);
	TASK_FOLLOW_PATH(false, Local_188.f_3352, 4, 1, 0, 1, false);
	TASK_GO_NEAR_OBJECT(false, Local_188.f_3240, 1,5f, 4, 0, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3240), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_1058, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_374(bool bParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6) //Position: 0x10B7E / 68478
{
	bool bVar0;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, Function_53(), bParam0, vParam1, *(&vParam1 + 12));
	SQUAD_JOIN(bVar0, Local_188.f_1120);
	TASK_STAND_STILL(bVar0, 10.0f, 0, 0);
	Function_375(bVar0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
}

void Function_375(bool bParam0) //Position: 0x10BBD / 68541
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 3);
	switch (bVar0)
	{
		case 0x00000000:
			GIVE_WEAPON_TO_ACTOR(bParam0, 42, false, 1, 1);
			break;
		
		case 0x00000001:
			GIVE_WEAPON_TO_ACTOR(bParam0, 43, false, 1, 1);
			break;
		
		case 0x00000002:
			GIVE_WEAPON_TO_ACTOR(bParam0, 41, false, 1, 1);
			break;
		
		case 0x00000003:
			GIVE_WEAPON_TO_ACTOR(bParam0, 40, false, 1, 1);
			break;
	}
	return;
}

int Function_376() //Position: 0x10C1D / 68637
{
	switch (bLocal_1039)
	{
		case 0x00000007:
			if (!DECOR_CHECK_EXIST(Local_188.f_1120, "s8_cleared"))
			{
				Function_381(&Local_188 + 1120);
				DECOR_SET_BOOL(Local_188.f_1120, "s8_cleared", true);
			}
			if (!DECOR_CHECK_EXIST(Local_188.f_1120, "bMadeAxeGuys"))
			{
				if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() > 1)
				{
					DECOR_SET_BOOL(Local_188.f_1120, "bMadeAxeGuys", true);
					Function_374(StackVal, StackVal, StackVal, StackVal, StackVal, 516, *(&Local_188 + 2180[06]));
					Function_374(StackVal, StackVal, StackVal, StackVal, StackVal, 522, *(&Local_188 + 2180[16]));
					Function_374(StackVal, StackVal, StackVal, StackVal, StackVal, 521, *(&Local_188 + 2180[46]));
					ACTOR_RESET_ANIMS(bLocal_1058, 1);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_1058, 0);
					TASK_STAND_STILL(bLocal_1058, -1.0f, 0, 0);
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_188 + 2180[26]), 1, true, 1);
				}
			}
			if ((Function_380() && Function_377()) && Function_406(&bLocal_1122))
			{
				return 1;
			}
			break;
		
		case 0x00000008:
			if (Function_410() && Function_406(&bLocal_1122))
			{
				STREAMING_LOAD_SCENE_EXT(-4080,053f, 9,802f, 4308,754f, 0.0f, 0.0f, 0.0f, 1);
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_377() //Position: 0x10D55 / 68949
{
	Function_378(&Local_188 + 884, 290, 2, 0);
	Function_378(&Local_188 + 884, 291, 2, 0);
	Function_378(&Local_188 + 884, 293, 2, 0);
	Function_378(&Local_188 + 884, 285, 2, 0);
	Function_378(&Local_188 + 884, 522, 2, 0);
	Function_378(&Local_188 + 884, 516, 2, 0);
	Function_378(&Local_188 + 884, 521, 2, 0);
	if (Function_406(&Local_188 + 884))
	{
		return 1;
	}
	return 0;
}

var Function_378(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10DCB / 69067
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_226(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_379(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_379(bParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*bParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_379(var uParam0, int iParam1) //Position: 0x10E9B / 69275
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

int Function_380() //Position: 0x10EAC / 69292
{
	Function_378(&Local_188 + 672, 582, 2, 0);
	Function_378(&Local_188 + 672, 580, 2, 0);
	Function_378(&Local_188 + 672, 395, 2, 0);
	Function_378(&Local_188 + 672, 976, 2, 0);
	Function_378(&Local_188 + 672, 393, 2, 0);
	Function_378(&Local_188 + 672, 977, 2, 0);
	Function_378(&Local_188 + 672, 391, 2, 0);
	Function_378(&Local_188 + 672, 980, 2, 0);
	Function_378(&Local_188 + 672, 1180, 2, 0);
	Function_378(&Local_188 + 672, 392, 2, 0);
	if (Function_406(&Local_188 + 672))
	{
		return 1;
	}
	return 0;
}

void Function_381(bool bParam0) //Position: 0x10F4C / 69452
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*bParam0, bVar0);
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

int Function_382() //Position: 0x10F93 / 69523
{
	switch (bLocal_1039)
	{
		case 0x00000007:
			return 1;
			break;
	}
	switch (bLocal_1039)
	{
		case 0x00000008:
			Function_384(-4080,987f, 10,104f, 4303,014f, -0,081f, -0,055f, 0,995f);
			STREAMING_LOAD_SCENE_EXT(-4080,053f, 9,802f, 4308,754f, 0.0f, 0.0f, 0.0f, 1);
			Function_383();
			if (IS_OBJECT_VALID(bLocal_1311))
			{
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(bLocal_1311));
			}
			if (iLocal_1040 < 3)
			{
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			}
			else
			{
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(0);
			}
			return 1;
			break;
	}
	return 1;
}

void Function_383() //Position: 0x1101E / 69662
{
	bool bVar0;
	
	bLocal_1059 = GET_MOST_RECENT_MOUNT(Global_34573);
	if (!IS_ACTOR_ALIVE(bLocal_1059))
	{
		bLocal_1059 = CREATE_ACTOR_IN_LAYOUT(Local_188, "r05backupPlayerHorse", 976, *(&Local_188 + 1832[06]), *(&Local_188 + 1832[06] + 12));
		ACCESSORIZE_HORSE(bLocal_1059, 4);
	}
	bVar0 = GET_MOST_RECENT_MOUNT(bLocal_1058);
	if (!IS_ACTOR_ALIVE(bVar0))
	{
		bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "r05backupReyesHorse", 977, *(&Local_188 + 1832[16]), *(&Local_188 + 1832[16] + 12));
		ACCESSORIZE_HORSE(bVar0, 3);
	}
	SET_MOST_RECENT_MOUNT(Global_34573, bLocal_1059);
	SET_MOST_RECENT_MOUNT(bLocal_1058, bVar0);
	return;
}

void Function_384(vector3 vParam0, vector3 vParam3) //Position: 0x110D6 / 69846
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	VSCALE(&vVar0, 5.0f);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam0, vVar0, StackVal) };
	CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(vVar0, 0, 0);
}

int Function_385() //Position: 0x11102 / 69890
{
	bool bVar0;
	
	switch (bLocal_1039)
	{
		case 0x00000007:
			Function_297(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 5, 0);
			STREAMING_UNLOAD_SCENE();
			Function_294(StackVal, StackVal, bLocal_1031, *(&Local_188 + 2180[36]), &Local_188 + 1768, 0, 0, 0, 0, 1, 1);
			bVar0 = GET_ACTOR_FROM_OBJECT(Function_388(GET_GRINGO_FROM_OBJECT(Local_188.f_3064), "UseCase1"));
			if (!IS_ACTOR_VALID(bVar0))
			{
				DESTROY_ACTOR(bVar0);
			}
			bVar0 = GET_ACTOR_FROM_OBJECT(Function_388(GET_GRINGO_FROM_OBJECT(Local_188.f_3068), "UseCase2"));
			if (!IS_ACTOR_VALID(bVar0))
			{
				DESTROY_ACTOR(bVar0);
			}
			Function_386();
			DESTROY_GC_OBJECTS(0, 1);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
		
		case 0x00000008:
			Function_297(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
			ACTOR_SET_NEXT_EQUIP_SLOT(bLocal_1058, 5, 0);
			Function_294(StackVal, StackVal, bLocal_1031, *(&Local_188 + 3016), &Local_1041 + 20, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_386() //Position: 0x111F4 / 70132
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_FROM_OBJECT(Function_388(GET_GRINGO_FROM_OBJECT(Local_188.f_3064), "UseCase1"));
	if (!IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar0);
	}
	bVar0 = GET_ACTOR_FROM_OBJECT(Function_388(GET_GRINGO_FROM_OBJECT(Local_188.f_3068), "UseCase2"));
	if (!IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar0);
	}
	Function_387(Local_188.f_3064, "UseCase1");
	Function_387(Local_188.f_3068, "UseCase2");
	return;
}

void Function_387(bool bParam0, bool bParam1) //Position: 0x11272 / 70258
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	bVar7 = GRINGO_GET_USE_COMPONENT_EXT(GET_GRINGO_FROM_OBJECT(bParam0), bParam1);
	bVar6 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, bVar7, 0);
	bVar5 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar6, bVar7);
	bVar4 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(bVar5, GET_GRINGO_FROM_OBJECT(bParam0));
	bVar3 = GET_OBJECT_FROM_PHYSINST(bVar4);
	if (!IS_OBJECT_VALID(bVar3))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		PRINTSTRING("Could not get axe from gringo! trying to destroy axe at ");
		PRINTVECTOR(vVar0);
		PRINTNL();
		bVar3 = GET_OBJECT_FROM_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(vVar0, 3.0f, "axe", 1));
	}
	if (IS_OBJECT_VALID(bVar3))
	{
		DESTROY_OBJECT(bVar3);
	}
	return;
}

var Function_388(bool bParam0, bool bParam1) //Position: 0x11330 / 70448
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_389(bool bParam0, float fParam1) //Position: 0x1133D / 70461
{
	if (!Function_293(bParam0))
	{
		Function_242(bParam0, fParam1);
	}
	return;
}

void Function_390() //Position: 0x11353 / 70483
{
	Function_394(bLocal_1058, (*&Local_188 + 2308)[1], 1, 1, 1);
	Function_392(StackVal, StackVal, bLocal_1058, *(&Local_188 + 3016));
	TASK_POINT_GUN_AT_OBJECT(bLocal_1058, (*&Local_188 + 1184)[02], -1.0f, 0);
	Function_394(Global_34573, (*&Local_188 + 2308)[0], 1, 1, 1);
	Function_392(StackVal, StackVal, Global_34573, *(&Local_188 + 3016));
	if (!IS_ACTOR_VALID((*&Local_188 + 1252)[02]))
	{
		LOG_ERROR("wagon's not valid. make it again");
		Function_399();
		DESTROY_ACTOR((*&Local_188 + 1252)[12]);
		DESTROY_ACTOR((*&Local_188 + 1252)[22]);
		DESTROY_ACTOR((*&Local_188 + 1252)[32]);
	}
	TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_188 + 1252)[02], *(&Local_188 + 3016), 1, true, 1);
	Function_394(bLocal_1059, (*&Local_188 + 2308)[2], 1, 1, 1);
	TASK_STAND_STILL(bLocal_1059, -1.0f, 0, 0);
	if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(bLocal_1058)))
	{
		Function_394(GET_MOST_RECENT_MOUNT(bLocal_1058), (*&Local_188 + 2308)[3], 1, 1, 1);
		TASK_STAND_STILL(GET_MOST_RECENT_MOUNT(bLocal_1058), -1.0f, 0, 0);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_188 + 1172)[02])))
	{
		REMOVE_BLIP(GET_BLIP_ON_OBJECT((*&Local_188 + 1172)[02]));
	}
	SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR((*&Local_188 + 1172)[02], 322, 0, 2, 0), "MISC_FirstOldFriend");
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1172)[02]);
	DEEQUIP_ACCESSORY((*&Local_188 + 1172)[02], 0);
	MEMORY_CONSIDER_AS((*&Local_188 + 1184)[02], bLocal_1058, 2);
	MEMORY_CONSIDER_AS((*&Local_188 + 1184)[02], (*&Local_188 + 1172)[02], 2);
	MEMORY_CONSIDER_AS(bLocal_1058, (*&Local_188 + 1184)[02], 2);
	MEMORY_CONSIDER_AS(bLocal_1058, (*&Local_188 + 1172)[02], 2);
	MEMORY_CONSIDER_AS((*&Local_188 + 1172)[02], bLocal_1058, 2);
	MEMORY_CONSIDER_AS((*&Local_188 + 1172)[02], (*&Local_188 + 1184)[02], 2);
	MEMORY_PREFER_WALKING(bLocal_1058, false);
	SET_ENABLE_NAV_STICK_INPUT(0, 0);
	SET_PLAYER_CONTROL_CONFIG(0, 5);
	FIRE_STOP_ALL_FIRES();
	Function_391();
	return;
}

void Function_391() //Position: 0x1153D / 70973
{
	bool bVar0;
	
	Function_300((*&Local_188 + 1252)[02]);
	CLEAR_AREA_OF_GRASS(Function_300((*&Local_188 + 1252)[02]), 6.0f);
	bVar0 = GET_GRINGO_FROM_OBJECT(Local_188.f_3080);
	SNAP_ACTOR_TO_GRINGO((*&Local_188 + 1172)[02], GET_OBJECT_FROM_GRINGO(bVar0), "UseCase1", true, 0, 0);
	SNAP_ACTOR_TO_GRINGO((*&Local_188 + 1184)[02], GET_OBJECT_FROM_GRINGO(bVar0), "UseCase2", true, 0, 0);
	TASK_USE_GRINGO((*&Local_188 + 1172)[02], bVar0, "UseCase1", true, 1);
	TASK_USE_GRINGO((*&Local_188 + 1184)[02], bVar0, "UseCase2", true, 1);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_188 + 1172)[02], 1.0f);
	SET_ACTOR_HEALTH((*&Local_188 + 1172)[02], GET_ACTOR_MAX_HEALTH((*&Local_188 + 1172)[02]));
	SET_ACTOR_ONE_SHOT_DEATH((*&Local_188 + 1184)[02], true);
	SET_REACT_NODE_FOR_ACTOR((*&Local_188 + 1184)[02], "reb05_pull/allende_death");
	SET_OBJECT_COLLIDE_WITH_OBJECT((*&Local_188 + 1172)[02], (*&Local_188 + 1252)[02], false);
	SET_OBJECT_COLLIDE_WITH_OBJECT((*&Local_188 + 1184)[02], (*&Local_188 + 1252)[02], false);
	STOP_VEHICLE((*&Local_188 + 1252)[02]);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR((*&Local_188 + 1252)[02]), true);
	SET_ACTOR_CAN_PLAY_GESTURES((*&Local_188 + 1172)[02], false);
	CLEAR_LAST_ATTACK(Global_34573);
	SNAP_OBJECT_TO_GROUND((*&Local_188 + 1184)[02], 2.0f, false, 1092616192);
	SNAP_OBJECT_TO_GROUND((*&Local_188 + 1172)[02], 2.0f, false, 1092616192);
	return;
}

void Function_392(bool bParam0, vector3 vParam1) //Position: 0x1169E / 71326
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_393(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_393(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_393(bool bParam0, vector3 vParam1) //Position: 0x116D6 / 71382
{
	vector3 vVar0;
	
	Function_300(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_300(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

void Function_394(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x11759 / 71513
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

int Function_395(vector3 vParam0, vector3 vParam3) //Position: 0x11860 / 71776
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, vParam3 };
	VSCALE(&vVar0, 5.0f);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam0, vVar0, StackVal) };
	ENABLE_GAME_CAMERA_FOCUS(vVar0, -1.0f, 6, 1, 1, 0);
	if (!Function_396(StackVal, StackVal, vVar0, -0,9f, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_396(vector3 vParam0, float fParam3, bool bParam4) //Position: 0x118A5 / 71845
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &uVar0);
	GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar3);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vParam0, StackVal) };
	VNORMALIZE(&vVar6);
	if (VDOT(&uVar0, &vVar6) >= fParam3)
	{
		return 1;
	}
	if (bParam4)
	{
		PRINTSTRING("IS_GAME_CAMERA_FACING_DIRECTION: vdot = ");
		PRINTFLOAT(VDOT(&uVar0, &vVar6));
		PRINTNL();
	}
	return 0;
}

bool Function_397(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x11924 / 71972
{
	if (Function_398(&bParam0) == iParam7 || Function_311())
	{
		return 1;
	}
	return 0;
}

int Function_398(bool bParam0) //Position: 0x11943 / 72003
{
	if (Function_296(bParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_399() //Position: 0x1195B / 72027
{
	Local_188.f_1288 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "S5_WagonGroup"));
	(*&Local_188 + 1252)[02] = Function_400(Local_188, "escapeWagon", 1180, 977, -4373,768f, 33,61426f, 4273,297f, 0.0f, 101,0989f, 0.0f, 1, 976, 976, 976, 4);
	SQUAD_JOIN((*&Local_188 + 1252)[02], Local_188.f_1288);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_188 + 1252)[02], false);
	SET_ALLOW_JACK((*&Local_188 + 1252)[02], 0);
	ENABLE_VEHICLE_SEAT((*&Local_188 + 1252)[02], 2, 0);
	ENABLE_VEHICLE_SEAT((*&Local_188 + 1252)[02], 3, 0);
	ENABLE_VEHICLE_SEAT((*&Local_188 + 1252)[02], 4, 0);
	ENABLE_VEHICLE_SEAT((*&Local_188 + 1252)[02], 5, 0);
	SET_VEHICLE_EJECTION_ENABLED((*&Local_188 + 1252)[02], 0);
	ENABLE_VEHICLE_SEAT((*&Local_188 + 1252)[02], false, 0);
	(*&Local_188 + 1252)[12] = CREATE_ACTOR_IN_LAYOUT(Local_188, "wagonDriver", 391, -4373,05f, 33,61321f, 4278,415f, 0.0f, 88,94974f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1252)[12], Local_188.f_1288);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_188 + 1252)[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1252)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1252)[12], 40, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_188 + 1252)[12], 19);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_188 + 1252)[12], 359.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_188 + 1252)[12], 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1252)[12], 53, 5.0f);
	(*&Local_188 + 1252)[22] = CREATE_ACTOR_IN_LAYOUT(Local_188, "wagonGunner", 392, -4373,016f, 33,6821f, 4277,334f, 0.0f, 98,85951f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1252)[22], Local_188.f_1288);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_188 + 1252)[22], false);
	SET_ACTOR_FACTION((*&Local_188 + 1252)[22], 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1252)[22], 49, 0,8f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_188 + 1252)[22], 15, true);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_188 + 1252)[22], 359.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY((*&Local_188 + 1252)[22], 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1252)[22], 53, 5.0f);
	(*&Local_188 + 1252)[32] = CREATE_ACTOR_IN_LAYOUT(Local_188, "wagonRearGunner", 393, -4371,881f, 33,61321f, 4278,437f, 0.0f, 88,94974f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1252)[32], Local_188.f_1288);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_188 + 1252)[32], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1252)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1252)[32], 40, 0,999f, 1, 1);
	SET_ACTOR_FACTION((*&Local_188 + 1252)[32], 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1252)[32], 49, 0,8f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_188 + 1252)[32], 15, true);
	return;
}

var Function_400(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x11C31 / 72753
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	bool bVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam4, vParam7);
	if (!IS_ACTOR_VALID(bVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return bVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(bVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(bVar0);
		if (iParam14 > iVar10 && iParam14 < 0)
		{
			iVar10 = iParam14;
		}
		bVar9 = false;
		while (bVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, bVar9, 16);
			bVar15 = "";
			if (Function_403(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_402(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_401(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[bVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (bVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = iParam11;
						break;
					
					case 0x00000002:
						bVar17 = iParam12;
						break;
					
					case 0x00000003:
						bVar17 = iParam13;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return bVar0;
				}
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar17, vParam4, vParam7);
			}
			if (IS_ACTOR_VALID(bVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, bVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			bVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, bVar18, 0);
			bVar18++;
		}
	}
	return bVar0;
}

bool Function_401(int iParam0, int iParam1) //Position: 0x11E65 / 73317
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if ((*iParam1)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_402(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x11E97 / 73367
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_403(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11EAF / 73391
{
	if (!IS_POPSET_VALID(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(bParam0, bParam1, bParam2);
}

void Function_404() //Position: 0x11ED6 / 73430
{
	(*&Local_188 + 1172)[02] = CREATE_ACTOR_IN_LAYOUT(Local_188, "OF", 582, -4336,386f, 42,0723f, 4323,935f, 0.0f, 91,28896f, 0.0f);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1172)[02]);
	TASK_STAND_STILL((*&Local_188 + 1172)[02], -1.0f, 0, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1172)[02]);
	MEMORY_ATTACK_ON_SIGHT((*&Local_188 + 1172)[02], 1);
	SET_ACTOR_FACTION((*&Local_188 + 1172)[02], 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1172)[02], 49, 0,9f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_188 + 1172)[02], 15, true);
	SET_ACTOR_HEALTH((*&Local_188 + 1172)[02], 18.0f);
	MEMORY_ALLOW_SHOOTING((*&Local_188 + 1172)[02], false);
	DECOR_SET_BOOL((*&Local_188 + 1172)[02], "CanBeLasso", false);
	return;
}

void Function_405() //Position: 0x11F9A / 73626
{
	(*&Local_188 + 1184)[02] = CREATE_ACTOR_IN_LAYOUT(Local_188, "Tyrant", 580, -4338,215f, 42,10889f, 4324,039f, 0.0f, 93,82066f, 0.0f);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1184)[02]);
	TASK_STAND_STILL((*&Local_188 + 1184)[02], -1.0f, 0, 0);
	SET_ACTOR_HEALTH((*&Local_188 + 1184)[02], 20.0f);
	MEMORY_ATTACK_ON_SIGHT((*&Local_188 + 1184)[02], 1);
	SET_ACTOR_FACTION((*&Local_188 + 1184)[02], 19);
	DECOR_SET_BOOL((*&Local_188 + 1184)[02], "CanBeLasso", false);
	return;
}

bool Function_406(bool bParam0) //Position: 0x1202B / 73771
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_409();
	iVar1 = 0;
	if (!Function_226(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_379(bParam0[iVar03], 8);
		}
		else if (Function_408())
		{
			iVar1 = 1;
			Function_379(bParam0[iVar03], 8);
		}
		Function_379(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_226(bParam0[iVar03], 4))
		{
			if (!Function_226(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_226(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_226(bParam0[03], 8) || iVar1));
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
				Function_379(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_226(bParam0[iVar03], 4))
		{
			if (!Function_226(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_379(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_379(bParam0[iVar03], 2);
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
							Function_379(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_379(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_379(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_379(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_379(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_379(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_379(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_379(bParam0[iVar03], 2);
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
	Function_407();
	return 1;
}

void Function_407() //Position: 0x123A6 / 74662
{
	if (!Function_298(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_408() //Position: 0x123E6 / 74726
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

void Function_409() //Position: 0x12411 / 74769
{
	if (!Function_298(128))
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

bool Function_410() //Position: 0x12453 / 74835
{
	Function_378(&Local_188 + 796, 582, 2, 0);
	Function_378(&Local_188 + 796, 580, 2, 0);
	Function_378(&Local_188 + 796, 1180, 2, 0);
	Function_378(&Local_188 + 796, 977, 2, 0);
	Function_378(&Local_188 + 796, 391, 2, 0);
	Function_378(&Local_188 + 796, 392, 2, 0);
	Function_378(&Local_188 + 796, 393, 2, 0);
	if (Function_406(&Local_188 + 796))
	{
		return 1;
	}
	return 0;
}

void Function_411(bool bParam0) //Position: 0x124C9 / 74953
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

void Function_412() //Position: 0x1250D / 75021
{
	if (iLocal_1040 < 3 && iLocal_1040 > 105)
	{
		Function_300((*&Local_188 + 1252)[02]);
		STREAMING_LOAD_BOUNDS(Function_300((*&Local_188 + 1252)[02]), 90.0f, 1);
		Function_500();
		if (!iLocal_1294)
		{
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
			{
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "CHASE", 0, 4294967295, 4294967295, 3212836864, 0);
				iLocal_1294 = 1;
			}
		}
		if (IS_ACTOR_ALIVE((*&Local_188 + 1252)[32]))
		{
			if (!Function_499((*&Local_188 + 1252)[32], bLocal_1311))
			{
				Function_498((*&Local_188 + 1252)[32]);
			}
		}
		if (DECOR_CHECK_EXIST((*&Local_188 + 1252)[02], "fStartRollTime"))
		{
			STREAMING_LOAD_SCENE_EXT(-4059,308f, 12,645f, 4309,889f, 0.0f, 100.0f, 0.0f, 1);
			Function_497();
		}
		Function_496();
		if (iLocal_1040 > 6)
		{
			Function_481();
		}
		if (SQUAD_GET_SIZE(Local_188.f_1288) >= 1)
		{
			Function_480(&Local_188 + 1252[12], &Local_188 + 1252[22], (*&Local_188 + 1252)[02]);
		}
		Function_479();
		if (IS_ACTOR_ALIVE((*&Local_188 + 1172)[02]))
		{
			Function_472(&bLocal_1176, (60.0f * 6.0f), (200.0f * 3.0f), (*&Local_188 + 1172)[02], "rebel05_billReturn", "rebel05_billEscaped", &bLocal_1049, 0, 0, 0, 325, 1);
		}
		else
		{
			Function_472(&bLocal_1176, 60.0f, 200.0f, bLocal_1058, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1049, 0, 0, 0, 325, 1);
			if (!Function_342(bLocal_1058, Global_34573, 60.0f))
			{
				Function_355(7, 1, 1);
			}
			else
			{
				Function_355(7, 0, 1);
			}
		}
	}
	switch (iLocal_1040)
	{
		case 0x00000000:
			Function_320(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 0.0f);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			iLocal_1293 = 1;
			Function_200(1);
			iLocal_1294 = 0;
			iLocal_1279 = 0;
			bLocal_1280 = false;
			iLocal_1281 = 0;
			iLocal_1282 = 0;
			SET_ACTOR_HEALTH(bLocal_1058, GET_ACTOR_MAX_HEALTH(bLocal_1058));
			CLEAR_ACTOR_MIN_SPEED(bLocal_1058);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_1508)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_1508));
			}
			Function_319(&Local_188 + 1084, 1);
			Function_411(Local_188.f_1160);
			Function_411(Local_188.f_1164);
			Function_411(Local_188.f_1448);
			Function_411(Local_188.f_1124);
			Function_411(Local_188.f_1156);
			Function_411(Local_188.f_1340);
			Function_411(Local_188.f_1448);
			Function_411(Local_188.f_1168);
			Function_411(Local_188.f_1452);
			Function_411(Local_188.f_1456);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_1768)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_1768));
			}
			if (!iLocal_1061[6])
			{
				GIVE_WEAPON_TO_ACTOR(bLocal_1058, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_1058, 0);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_315();
			bLocal_1060 = Global_30685[0];
			if (!iLocal_1061[6])
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_188 + 2180[36]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_188 + 2180[26]), 1, true, 1);
				Function_241(&bLocal_1167);
				iLocal_1040 = 1;
			}
			else
			{
				Function_223(&bLocal_1106);
				Function_241(&bLocal_1167);
				iLocal_1040 = 2;
			}
			iLocal_1279 = 4294967295;
			bLocal_1280 = false;
			Function_471(Local_188.f_1120);
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() || iLocal_1061[6])
			{
				if (Function_380() && Function_377())
				{
					if (Function_312(bLocal_1060) || bLocal_1060 != 4294967295)
					{
						if (Function_470())
						{
							if (Function_406(&bLocal_1122))
							{
								Function_469();
								Function_468();
								Function_241(&bLocal_1167);
								iLocal_1040 = 2;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_341(Local_188.f_1120);
			Function_467();
			Function_196(bLocal_1296, 0);
			CLOSE_DOOR_FAST(bLocal_1296);
			Function_196(bLocal_1297, 0);
			CLOSE_DOOR_FAST(bLocal_1297);
			Function_196(bLocal_1298, 0);
			OPEN_DOOR_DIRECTION_FAST(bLocal_1298, false);
			Function_405();
			Function_404();
			Function_466();
			if (IS_OBJECT_VALID(Local_188.f_3364))
			{
				DESTROY_OBJECT(Local_188.f_3364);
			}
			TOGGLE_COVER_PROPS(0);
			if (!SQUAD_IS_VALID(Local_188.f_1120))
			{
				Function_464();
				Function_461(StackVal, StackVal, StackVal, StackVal, Local_188.f_1120, *(&Local_188 + 2104[26]), *(&Local_188 + 2104[26] + 12), 5, 2.0f, 1.0f, 0, 0);
				Function_460(Local_188.f_1120, 0);
			}
			if (Function_397(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_1032, bLocal_1039))
			{
				Local_1041 = 1000;
				Function_241(&bLocal_1167);
				iLocal_1040 = 3;
			}
			else
			{
				Function_399();
				Function_459();
				Function_373();
				ACTOR_PUT_WEAPON_IN_HAND(Global_34573, GET_WEAPON_EQUIPPED(Global_34573, 5), 0);
				Function_374(StackVal, StackVal, StackVal, StackVal, StackVal, 516, *(&Local_188 + 2180[06]));
				Function_374(StackVal, StackVal, StackVal, StackVal, StackVal, 522, *(&Local_188 + 2180[16]));
				Function_374(StackVal, StackVal, StackVal, StackVal, StackVal, 521, *(&Local_188 + 2180[46]));
				Function_241(&bLocal_1167);
				iLocal_1040 = 4;
			}
			Function_253(bLocal_1039);
			Function_306(StackVal, StackVal, Function_253(bLocal_1039), bLocal_1039, Global_30633[0], Function_256(bLocal_1039), 0);
			break;
		
		case 0x00000003:
			Function_500();
			if (Function_458())
			{
				Function_399();
				Function_459();
				Function_386();
				Function_241(&bLocal_1167);
				iLocal_1040 = 4;
			}
			break;
		
		case 0x00000004:
			Function_386();
			Function_500();
			Function_467();
			if (Function_499((*&Local_188 + 1252)[32], bLocal_1311))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, -100.0f);
				SET_DOOR_LOCK(bLocal_1298, 0);
				OPEN_DOOR_DIRECTION_FAST(bLocal_1298, true);
				if (!IS_DOOR_OPENED(bLocal_1296))
				{
					Function_196(bLocal_1296, 0);
					OPEN_DOOR_DIRECTION_FAST(bLocal_1296, false);
				}
				if (!IS_DOOR_OPENED(bLocal_1297))
				{
					Function_196(bLocal_1297, 0);
					OPEN_DOOR_DIRECTION_FAST(bLocal_1297, true);
				}
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_1058, 13, false);
				SET_ACTOR_HEALTH(bLocal_1058, GET_ACTOR_MAX_HEALTH(bLocal_1058));
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 0,1f);
				SQUAD_GOALS_CLEAR(Local_188.f_1120);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1120, 2, (*&Local_188 + 1512)[4], 3);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1120, 2, (*&Local_188 + 1512)[6], 2);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1120, 3, Local_188.f_1788, 2);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1120, 4, Local_188.f_1784, 2);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1120, 5, (*&Local_188 + 1512)[5], 4294967295);
				SQUAD_SET_FACTION(Local_188.f_1120, 20);
				AI_STOP_IGNORING_ACTORS();
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING((*&Local_188 + 1252)[12], 0);
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING((*&Local_188 + 1252)[22], 0);
				TASK_STAND_STILL((*&Local_188 + 1252)[12], -1.0f, 0, 0);
				TASK_PRIORITY_SET((*&Local_188 + 1252)[12], true);
				TASK_STAND_STILL((*&Local_188 + 1252)[22], -1.0f, 0, 0);
				TASK_PRIORITY_SET((*&Local_188 + 1252)[22], true);
				SET_ACTOR_ONE_SHOT_DEATH(GET_PLAYER_ACTOR(0), false);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(GET_PLAYER_ACTOR(0), 1.0f);
				SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_188 + 1172)[02], 0.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 0.0f);
				if (IS_BLIP_VALID(bLocal_1315))
				{
					REMOVE_BLIP(bLocal_1315);
				}
				RESET_REACT_NODE_FOR_ACTOR(bLocal_1058);
				SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR((*&Local_188 + 1172)[02], 392, 0, 2, 0), "MISC_FirstOldFriend");
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR((*&Local_188 + 1172)[02]), "MISC_FirstOldFriend");
				SET_BLIP_PRIORITY(GET_BLIP_ON_ACTOR((*&Local_188 + 1172)[02]), 3);
				Function_454();
				Function_453(Local_188.f_1232, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1232, 10, 0, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1232, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1232) | 2048);
				Function_447();
				Function_453(Local_188.f_1292, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1292, false, 0, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				Function_446(Local_188.f_1292, Global_34573, 1);
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1292, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1292) | 2048);
				OPEN_DOOR_DIRECTION(bLocal_1298, true);
				SET_ACTOR_IN_VEHICLE((*&Local_188 + 1252)[12], (*&Local_188 + 1252)[02], false);
				SET_ACTOR_IN_VEHICLE((*&Local_188 + 1252)[22], (*&Local_188 + 1252)[02], true);
				SET_ACTOR_IN_VEHICLE((*&Local_188 + 1184)[02], (*&Local_188 + 1252)[02], 4);
				SET_ACTOR_IN_VEHICLE((*&Local_188 + 1172)[02], (*&Local_188 + 1252)[02], 2);
				Function_445(&Local_188 + 1172[02], Global_34573, 1);
				SET_ACTOR_CAN_BE_TARGETED((*&Local_188 + 1184)[02], false);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_188 + 1184)[02], 0.0f);
				MEMORY_ALLOW_SHOOTING((*&Local_188 + 1184)[02], false);
				SET_ACTOR_CAN_BE_TARGETED((*&Local_188 + 1172)[02], false);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_188 + 1172)[02], 0.0f);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1058);
				Function_355(7, 1, 1);
				Function_444(80.0f);
				bLocal_1280 = false;
				iLocal_1281 = 0;
				Function_241(&bLocal_1179);
				Function_348(&(Local_1222[017]), bLocal_1058, "RebelLeader", 0, 0x5f5e100, 1);
				Function_348(&(Local_1222[117]), Local_188.f_1120, "rebel05_rebel", 0, 0x5f5e100, 1);
				Function_442(&(Local_1222[117]), 2);
				Function_441(&(Local_1222[117]), 3);
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
				Local_1041 = 1000;
				Function_241(&bLocal_1167);
				iLocal_1040 = 6;
			}
			else
			{
				Function_498((*&Local_188 + 1252)[32]);
			}
			break;
		
		case 0x00000006:
			Function_386();
			if (!HUD_IS_FADING())
			{
				Function_440();
				Function_439(Local_188.f_1120, 0);
				if (!IS_ACTOR_RIDING_VEHICLE((*&Local_188 + 1252)[12]))
				{
					SET_ACTOR_IN_VEHICLE((*&Local_188 + 1252)[12], (*&Local_188 + 1252)[02], false);
				}
				if (!IS_ACTOR_RIDING_VEHICLE((*&Local_188 + 1252)[22]))
				{
					SET_ACTOR_IN_VEHICLE((*&Local_188 + 1252)[22], (*&Local_188 + 1252)[02], false);
				}
				Function_241(&bLocal_1167);
				iLocal_1040 = 7;
			}
			break;
		
		case 0x00000007:
			Function_386();
			if ((Function_290(&bLocal_1167) <= 5,5f || !IS_SCRIPTED_CONVERSATION_ONGOING()) || Function_434())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_340("Rebel05_obj07_catch", 0x40f00000, 1, 2, 0, 0, 0);
				Function_241(&bLocal_1167);
				iLocal_1040 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_434())
			{
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				SQUAD_GOALS_CLEAR(Local_188.f_1292);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1292, false, Local_188.f_1792, 4294967295);
				SQUAD_JOIN(GET_MOUNT((*&Local_188 + 1196)[32]), Local_188.f_1248);
				TASK_HORSE_ACTION(GET_MOUNT((*&Local_188 + 1196)[32]), 0);
				Function_445(&Local_188 + 1196[32], Global_34573, 1);
				SQUAD_LEAVE((*&Local_188 + 1196)[32]);
				SQUAD_JOIN((*&Local_188 + 1196)[32], Local_188.f_1292);
				Function_433();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_188 + 1196)[02], Local_188.f_3292, 2, 1, 1, 1, false);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_188 + 1196)[02], true);
				TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_188 + 1196)[12], (*&Local_188 + 1252)[02], Local_188.f_3292, 10.0f, 1, -1,2f);
				TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_188 + 1196)[22], (*&Local_188 + 1252)[02], Local_188.f_3292, 14.0f, 1, 1,6f);
				iLocal_1279 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &Local_188 + 2840, 4.0f, 2);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				SET_ACTOR_INVULNERABILITY((*&Local_188 + 1184)[02], true);
				SET_ACTOR_INVULNERABILITY((*&Local_188 + 1172)[02], true);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1248, false, 1, 4294967295);
				TASK_SEQUENCE_PERFORM(false, iLocal_1279);
				TASK_SEQUENCE_RELEASE(bLocal_1279, 1);
				Local_1041 = 1000;
				Function_241(&bLocal_1167);
				iLocal_1040 = 9;
			}
			break;
		
		case 0x00000009:
			if (!Function_431(1))
			{
				if (Function_428())
				{
					AI_SET_GATLING_MAX_HORIZONTAL_DEGREES((*&Local_188 + 1252)[32], 41.0f);
					TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_188 + 1196)[02], (*&Local_188 + 1252)[02], Local_188.f_3292, 12.0f, 1, 1,7f);
					TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_188 + 1196)[12], (*&Local_188 + 1252)[02], Local_188.f_3292, 18.0f, 1, -1,5f);
					TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_188 + 1196)[22], (*&Local_188 + 1252)[02], Local_188.f_3292, 24.0f, 1, 1,6f);
					Function_427((*&Local_188 + 1196)[32], -1.0f);
					Function_426();
					Function_241(&bLocal_1167);
					iLocal_1040 = 10;
				}
			}
			else
			{
				Function_241(&bLocal_1167);
				iLocal_1040 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_419();
			if (Function_431(1))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1292) < 0 || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1232) < 0)
				{
					Function_418(Local_188.f_1232, 1);
					Function_341(Local_188.f_1232);
					SQUAD_GOALS_CLEAR(Local_188.f_1232);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1232, false, 0, 4294967295);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
					HUD_CLEAR_OBJECTIVE();
					Function_340("Rebel05_obj10", 0x40f00000, 1, 2, 0, 0, 0);
				}
				TASK_FOLLOW_OBJECT_ALONG_PATH(bLocal_1058, (*&Local_188 + 1252)[02], Local_188.f_3292, 8.0f, 1, 0);
				Function_241(&bLocal_1167);
				iLocal_1040 = 11;
			}
			break;
		
		case 0x0000000B:
			if ((Function_431(1) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1292) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1232) >= 0)
			{
				if (Function_342((*&Local_188 + 1252)[02], Global_34573, 15.0f))
				{
					AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
					Function_417(Local_188.f_1292);
					Function_417(Local_188.f_1232);
					Function_416(bLocal_1058, (*&Local_188 + 1252)[02], 0.0f, 0.0f, 7.0f, 2);
					Function_241(&bLocal_1167);
					iLocal_1040 = 12;
				}
			}
			else
			{
				if (Function_342((*&Local_188 + 1252)[02], Global_34573, 30.0f))
				{
					Function_414(Local_188.f_1232, Global_34573, 60.0f, 1);
					Function_414(Local_188.f_1292, Global_34573, 60.0f, 1);
					if (!Function_431(1))
					{
						if (!DECOR_CHECK_EXIST((*&Local_188 + 1252)[02], "iHelp"))
						{
							if (Function_290(&bLocal_1167) <= 8.0f)
							{
								DECOR_SET_INT((*&Local_188 + 1252)[02], "iHelp", true);
								Function_130("rebel05_S4help_1", 6.0f, 1, 0, 2, 1, 0);
							}
						}
						else if (DECOR_GET_INT((*&Local_188 + 1252)[02], "iHelp") == 1)
						{
							if (Function_290(&bLocal_1167) <= (8.0f + 7.0f))
							{
								DECOR_SET_INT((*&Local_188 + 1252)[02], "iHelp", 2);
								Function_130("rebel05_S4help_2", 6.0f, 1, 0, 2, 1, 0);
							}
						}
					}
				}
				Function_419();
			}
			break;
		
		case 0x0000000C:
			if (Function_413((*&Local_188 + 1252)[02], 0) >= 0,7f)
			{
				Function_241(&bLocal_1167);
				iLocal_1040 = 13;
			}
			break;
		
		case 0x0000000D:
			if (Function_497() && Local_1041 <= 1104)
			{
				Function_241(&bLocal_1167);
				iLocal_1040 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_229();
			iLocal_1061[7] = 1;
			Function_241(&bLocal_1167);
			bLocal_1039 = 8;
			iLocal_1040 = 0;
			break;
	}
	return;
}

float Function_413(bool bParam0, bool bParam1) //Position: 0x1335D / 78685
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_414(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1337C / 78716
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!Function_415(bParam1, bVar1, bParam2))
			{
				SQUAD_LEAVE(bVar1);
				RELEASE_ACTOR(bVar1);
				if (bParam3)
				{
					if (IS_ACTOR_RIDING(bVar1))
					{
						RELEASE_ACTOR(GET_MOUNT(bVar1));
					}
				}
			}
			else
			{
				bVar0++;
			}
		}
		else
		{
			bVar0++;
		}
	}
}

bool Function_415(bool bParam0, bool bParam1, bool bParam2) //Position: 0x133FB / 78843
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

void Function_416(bool bParam0, bool bParam1, vector3 vParam2, bool bParam5) //Position: 0x1350C / 79116
{
	var uVar0;
	
	GET_OBJECT_RELATIVE_POSITION(bParam1, vParam2, &uVar0);
	TASK_GO_TO_COORD(bParam0, &uVar0, bParam5);
}

void Function_417(bool bParam0) //Position: 0x13529 / 79145
{
	SQUAD_GOALS_CLEAR(bParam0);
	Function_341(bParam0);
	SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, false, 1, 4294967295);
	TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
	return;
}

void Function_418(bool bParam0, bool bParam1) //Position: 0x1354E / 79182
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_PREFER_WALKING(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_419() //Position: 0x13596 / 79254
{
	bool bVar0;
	
	if (Function_290(&bLocal_1179) < 7.0f)
	{
		if (Function_342((*&Local_188 + 1252)[02], Global_34573, 55.0f))
		{
			if (Function_342(Global_34573, (*&Local_188 + 1252)[02], 15.0f))
			{
				if (!DECOR_CHECK_EXIST((*&Local_188 + 1172)[02], "ibTaunts"))
				{
					DECOR_SET_INT((*&Local_188 + 1172)[02], "ibTaunts", false);
				}
				else
				{
					bVar0 = DECOR_GET_INT((*&Local_188 + 1172)[02], "ibTaunts");
					if (!Function_151(bVar0, 1))
					{
						Function_425();
						Function_76(&bVar0, 1);
					}
					else if (!Function_151(bVar0, 2))
					{
						Function_424();
						Function_76(&bVar0, 2);
					}
					else if (!Function_151(bVar0, 4))
					{
						Function_423();
						Function_76(&bVar0, 4);
					}
					else if (!Function_151(bVar0, 8))
					{
						Function_422();
						Function_76(&bVar0, 8);
					}
					else
					{
						Function_421();
					}
					DECOR_SET_INT((*&Local_188 + 1172)[02], "ibTaunts", bVar0);
					Function_241(&bLocal_1179);
				}
			}
			else if (Function_342((*&Local_188 + 1252)[02], bLocal_1058, 25.0f) && (RAND_INT_RANGE(false, 10) % 2) != 0)
			{
				Function_421();
				Function_241(&bLocal_1179);
			}
			else
			{
				Function_420();
				Function_241(&bLocal_1179);
			}
		}
	}
	return;
}

void Function_420() //Position: 0x136D5 / 79573
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_JonShout_chase", "Rebel05_JonShout_chase", true, 1, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_421() //Position: 0x1372A / 79658
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_ReyesShout_chase", "Rebel05_ReyesShout_chase", false, 1, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_422() //Position: 0x13783 / 79747
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_billJonTaunt_v5_AA", "Rebel05_billJonTaunt_v5_AA", 11, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_2230", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_billJonTaunt_v5_AB", "Rebel05_billJonTaunt_v5_AB", false, 1, 1, 0, 1);
		Function_329(2113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_423() //Position: 0x13845 / 79941
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_billJonTaunt_v3_AA", "Rebel05_billJonTaunt_v3_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_billJonTaunt_v3_AB", "Rebel05_billJonTaunt_v3_AB", 11, 1, 1, 0, 1);
		Function_329(2113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_424() //Position: 0x138E8 / 80104
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_billJonTaunt_v2_AA", "Rebel05_billJonTaunt_v2_AA", 11, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_billJonTaunt_v2_AB", "Rebel05_billJonTaunt_v2_AB", false, 1, 1, 0, 1);
		Function_329(2113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_425() //Position: 0x1398B / 80267
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(6, "Rebel05_billJonTaunt_v1_AA", "Rebel05_billJonTaunt_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_3550", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_billJonTaunt_v1_AB", "Rebel05_billJonTaunt_v1_AB", 11, 1, 1, 0, 1);
		Function_329(2113);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_426() //Position: 0x13A4D / 80461
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_getOnHorseJon", "Rebel05_getOnHorseJon", false, 1, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_427(bool bParam0, bool bParam1) //Position: 0x13AA0 / 80544
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(bParam0, &uVar0, GET_HEADING(bParam0), bParam1);
	return;
}

bool Function_428() //Position: 0x13ABB / 80571
{
	AI_SET_GATLING_MAX_HORIZONTAL_DEGREES((*&Local_188 + 1252)[32], 0.0f);
	switch (Local_1041)
	{
		case 0x000003E8:
			Function_297(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_372(Local_188, 43.0f, 1, 0.0f, 3.0f, 1, 1, 0, 0, 0, 0, 0, 0, 0);
			Function_370(-4368,805f, 35,308f, 4279,802f, -0,673f, 0,003f, -0,74f, -4373,733f, 35,144f, 4278,709f, -0,434f, 0,097f, -0,896f, 2.0f, 0, 1, 1, 0);
			Function_430(Global_34573, 1, 1);
			Function_430(bLocal_1058, 1, 1);
			Function_241(&Local_1041 + 4);
			Local_1041 = 1004;
			break;
		
		case 0x000003EC:
			if (Function_290(&Local_1041 + 4) <= 0,5f)
			{
				Function_429();
				Function_241(&Local_1041 + 4);
				Local_1041 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (Function_290(&Local_1041 + 4) <= 1,5f)
			{
				Function_370(-4381,613f, 35,134f, 4279,549f, 0,506f, 0,015f, -0,862f, -4392,089f, 35,036f, 4283,441f, 0,882f, 0,044f, -0,469f, 2.0f, 0, 1, 1, 4);
				Function_241(&Local_1041 + 4);
				Local_1041 = 1006;
			}
			break;
		
		case 0x000003EE:
			if (Function_290(&Local_1041 + 4) <= 2.0f)
			{
				Local_1041 = 1104;
			}
			break;
		
		case 0x00000450:
			AI_STOP_IGNORING_ACTORS();
			Function_287(0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			Function_430(Global_34573, 0, 1);
			Function_430(bLocal_1058, 0, 1);
			Function_193(1, 1);
			Local_1041 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_429() //Position: 0x13C4F / 80975
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Rebel05_ColoOnstagecoach", "Rebel05_ColoOnstagecoach", false, 3, 1, 0, 1);
		Function_329(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_430(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13CA9 / 81065
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(bParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
		{
			FIRE_STOP_ON_ACTOR(bParam0);
		}
		SET_ACTOR_INVULNERABILITY(bParam0, true);
		CLEAR_ACTOR_MIN_SPEED(bParam0);
		CLEAR_ACTOR_MAX_SPEED(bParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(bParam0);
		RESET_ACTOR_GAITS(bParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(bParam0), 0);
		}
		if (bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(bParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, false);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, true);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(bParam0);
		SET_ACTOR_INVULNERABILITY(bParam0, false);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, true);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
	}
	return;
}

bool Function_431(bool bParam0) //Position: 0x13D43 / 81219
{
	if ((!IS_ACTOR_ALIVE((*&Local_188 + 1252)[12]) && !IS_ACTOR_ALIVE((*&Local_188 + 1252)[22])) && (!IS_ACTOR_ALIVE((*&Local_188 + 1252)[32]) || !bParam0))
	{
		if (!Function_432((*&Local_188 + 1252)[02], 1, 1, 4294967295) || Function_413((*&Local_188 + 1252)[02], 0) >= 0,6f)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_432(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x13D9E / 81310
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

void Function_433() //Position: 0x13E57 / 81495
{
	bool bVar0;
	
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_OBJECT(false, Local_188.f_2760, 8.0f, 4, 1, 0);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_188.f_3292, 4, 1, 0, 1, false);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM((*&Local_188 + 1252)[12], bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

bool Function_434() //Position: 0x13E97 / 81559
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_ACTOR_AXIS((*&Local_188 + 1252)[02], &vVar3, 2);
	GET_POSITION((*&Local_188 + 1252)[02], &vVar0);
	VSCALE(&vVar3, -8,5f);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
	vVar0.f_4 = (vVar0.y + 1,5f);
	if ((((((StackVal || Function_438(StackVal, (StackVal || Function_438(StackVal, (((Function_347((*&Local_188 + 1252)[02], 0x3f800000, 0x42960000, 1, 1, 0) || Function_347((*&Local_188 + 1252)[12], 0x3f800000, 0x42960000, 1, 1, 0)) || Function_347((*&Local_188 + 1252)[32], 0x3f800000, 0x42960000, 1, 1, 0)) || Function_347((*&Local_188 + 1252)[22], 0x3f800000, 0x42960000, 1, 1, 0)), *(&Local_188 + 2840), 0x3f800000, 0x42960000, 1, 1, 0)), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || (IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1828) && Function_437())) || Function_342(Global_34573, (*&Local_188 + 1252)[02], 30.0f)) || Function_435(Local_188.f_1288, Global_34573, 0, 1)) || Function_435(Local_188.f_1232, Global_34573, 0, 1)) || Function_435(Local_188.f_1292, Global_34573, 0, 1))
	{
		return 1;
	}
	return 0;
}

int Function_435(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x13FC2 / 81858
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		bVar2 = GET_MOUNT(bVar1);
		if (Function_436(bVar1, bParam1, bParam2, bParam3) || Function_436(bVar2, bParam1, bParam2, bParam3))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_436(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x14015 / 81941
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (GET_LAST_ATTACKER(bParam0) == bParam1)
		{
			if (bParam2)
			{
				if (!IS_ACTOR_ALIVE(bParam0))
				{
					return 1;
				}
			}
			return 1;
		}
		if (bParam3)
		{
			if (GET_LASSO_TARGET(bParam1) == bParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_437() //Position: 0x1405C / 82012
{
	bool bVar0;
	
	bVar0 = GET_WEAPON_IN_HAND(Global_34573);
	if (UNK_0xDB679ED9(bVar0) == 44)
	{
		if (IS_PLAYER_WEAPON_ZOOMED(Global_34573))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_438(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x14080 / 82048
{
}

void Function_439(bool bParam0, bool bParam1) //Position: 0x1409C / 82076
{
	bool bVar0;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (bParam1)
		{
			AI_ENABLE_PERCEPTION(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		}
		else
		{
			AI_DISABLE_PERCEPTION(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		}
		bVar0++;
	}
	return;
}

void Function_440() //Position: 0x140E3 / 82147
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_goAfterBill", "Rebel05_goAfterBill", false, 1, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_441(var uParam0, bool bParam1) //Position: 0x14132 / 82226
{
	if (!IS_OBJECT_VALID(*uParam0))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_KILL_LIMIT: Fail Target object invalid!");
		return 0;
	}
	if (uParam0->f_28 != 15 || uParam0->f_28 != 8)
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_KILL_LIMIT: Fail Target object type unsupported!");
		return 0;
	}
	if (bParam1 >= 0)
	{
		DECOR_SET_INT(*uParam0, "MFT_LimitHuman", bParam1);
		DECOR_SET_INT(*uParam0, "MFT_LimitHorse", bParam1);
	}
	else
	{
		if (DECOR_CHECK_EXIST(*uParam0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(*uParam0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(*uParam0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(*uParam0, "MFT_LimitHorse");
		}
	}
	return 1;
}

void Function_442(int iParam0, int iParam1) //Position: 0x1428D / 82573
{
	if (iParam1 != 100000000)
	{
		Function_443(iParam0, iParam1);
	}
	else
	{
		Function_350(iParam0, 1);
	}
	return;
}

void Function_443(int iParam0, bool bParam1) //Position: 0x142AD / 82605
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

void Function_444(int iParam0) //Position: 0x142D8 / 82648
{
	if (Global_8722 < 0,1f)
	{
		return;
	}
	Global_8722 = iParam0;
	return;
}

void Function_445(bool bParam0, bool bParam1, bool bParam2) //Position: 0x142F0 / 82672
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*bParam0, bParam1);
			Function_209(bParam1);
			vVar0 = { StackVal, StackVal, Function_209(bParam1) };
			if (bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(*bParam0, bParam1, true);
			}
			else
			{
				MEMORY_REPORT_POSITION(*bParam0, bParam1, &vVar0);
			}
		}
		else
		{
			LOG_ERROR("\Trying to add ESP_KNOWLEDGE(!) of an INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
		}
	}
	else
	{
		LOG_ERROR("Trying to add ESP_KNOWLEDGE(!) to INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
	}
	return;
}

void Function_446(bool bParam0, bool bParam1, bool bParam2) //Position: 0x143F8 / 82936
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_445(&bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_447() //Position: 0x1443D / 83005
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_188.f_1292 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "backYard"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "backyard_3", 393, -4356,016f, 34,06945f, 4282,591f, 0.0f, 34,63385f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1292);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	Function_449(bVar0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	Function_448(bVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 200.0f, 1);
	AI_SET_WEAPON_MAX_RANGE(bVar0, 200.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "backyard_4", 391, -4371,266f, 34,65934f, 4267,955f, 0.0f, 217,6483f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1292);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 42, 0,001f, 1, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	Function_449(bVar0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	Function_448(bVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 200.0f, 1);
	AI_SET_WEAPON_MAX_RANGE(bVar0, 200.0f);
	return;
}

void Function_448(bool bParam0, bool bParam1) //Position: 0x1457D / 83325
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[7]);
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[5]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[7], 0);
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[5], 0);
	}
	return;
}

void Function_449(bool bParam0) //Position: 0x145C3 / 83395
{
	Function_451(bParam0);
	Function_450(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 70.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	return;
}

void Function_450(bool bParam0, int iParam1) //Position: 0x1474B / 83787
{
	int iVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	iVar0 = AI_PREDICATE_FIND_NAMED("Guard", 0);
	if (AI_PREDICATE_IS_VALID(iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar0, iParam1);
	}
	return;
}

void Function_451(bool bParam0) //Position: 0x1477E / 83838
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0,75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_452(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_452(bool bParam0, bool bParam1) //Position: 0x14AE2 / 84706
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(bParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

void Function_453(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x14B04 / 84740
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
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_454() //Position: 0x14BEE / 84974
{
	Local_188.f_1232 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "Bodyguards"));
	(*&Local_188 + 1196)[02] = Function_456(Local_188, "bodyGuard_1", 395, Function_53(), 976, -4364,571f, 34,23841f, 4272,966f, 0.0f, 96,71631f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1196)[02], Local_188.f_1232);
	SET_ACTOR_FACTION((*&Local_188 + 1196)[02], 19);
	Function_449((*&Local_188 + 1196)[02]);
	Function_455((*&Local_188 + 1196)[02], GET_PLAYER_ACTOR(0));
	MEMORY_ATTACK_ON_SIGHT((*&Local_188 + 1196)[02], 1);
	SET_ACTOR_FACTION((*&Local_188 + 1196)[02], 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1196)[02], 49, 1,7f);
	MEMORY_PREFER_RIDING((*&Local_188 + 1196)[02], false);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_188 + 1196)[02], 359.0f);
	(*&Local_188 + 1196)[12] = Function_456(Local_188, "bodyGuard_2", 393, Function_53(), 977, -4381,584f, 34,12082f, 4263,613f, 0.0f, 182,732f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1196)[12], Local_188.f_1232);
	SET_ACTOR_FACTION((*&Local_188 + 1196)[12], 19);
	Function_449((*&Local_188 + 1196)[12]);
	Function_455((*&Local_188 + 1196)[12], GET_PLAYER_ACTOR(0));
	MEMORY_ATTACK_ON_SIGHT((*&Local_188 + 1196)[12], 1);
	SET_ACTOR_FACTION((*&Local_188 + 1196)[12], 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1196)[12], 49, 1,7f);
	MEMORY_PREFER_RIDING((*&Local_188 + 1196)[12], false);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_188 + 1196)[12], 359.0f);
	(*&Local_188 + 1196)[22] = Function_456(Local_188, "bodyGuard_3", 391, Function_53(), 980, -4381,824f, 34,49359f, 4260,104f, 0.0f, 183,8127f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1196)[22], Local_188.f_1232);
	SET_ACTOR_FACTION((*&Local_188 + 1196)[22], 19);
	Function_449((*&Local_188 + 1196)[22]);
	Function_455((*&Local_188 + 1196)[22], GET_PLAYER_ACTOR(0));
	MEMORY_ATTACK_ON_SIGHT((*&Local_188 + 1196)[22], 1);
	SET_ACTOR_FACTION((*&Local_188 + 1196)[22], 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1196)[22], 49, 1,7f);
	MEMORY_PREFER_RIDING((*&Local_188 + 1196)[22], false);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_188 + 1196)[22], 359.0f);
	(*&Local_188 + 1196)[32] = Function_456(Local_188, "bodyGuard_4", 391, Function_53(), 976, -4359,783f, 34,14393f, 4275,4f, 0.0f, 77,95236f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1196)[32], Local_188.f_1232);
	SET_ACTOR_FACTION((*&Local_188 + 1196)[32], 19);
	Function_449((*&Local_188 + 1196)[32]);
	Function_455((*&Local_188 + 1196)[32], GET_PLAYER_ACTOR(0));
	MEMORY_ATTACK_ON_SIGHT((*&Local_188 + 1196)[32], 1);
	SET_ACTOR_FACTION((*&Local_188 + 1196)[32], 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1196)[32], 49, 1,7f);
	MEMORY_PREFER_RIDING((*&Local_188 + 1196)[32], false);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_188 + 1196)[32], 359.0f);
	return;
}

void Function_455(bool bParam0, bool bParam1) //Position: 0x14EF2 / 85746
{
	var uVar0;
	
	MEMORY_CONSIDER_AS_ENEMY(bParam0, bParam1);
	MEMORY_IDENTIFY(bParam0, bParam1);
	GET_POSITION(bParam1, &uVar0);
	MEMORY_REPORT_POSITION(bParam0, bParam1, &uVar0);
	MEMORY_ATTACK_ON_SIGHT(bParam0, 1);
	return;
}

var Function_456(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x14F1C / 85788
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_457(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_457(bParam4))
	{
		bParam4 = 976;
	}
	bVar1 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam3, bParam4, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, bParam1, bParam2, vParam5, vParam8);
	if (!IS_ACTOR_VALID(bVar1))
	{
		bVar0 = bVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar1);
		return "";
	}
	ACCESSORIZE_HORSE(bVar1, 3);
	ACTOR_MOUNT_ACTOR(bVar0, bVar1);
	return bVar0;
}

bool Function_457(bool bParam0) //Position: 0x15041 / 86081
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_458() //Position: 0x15058 / 86104
{
	return Function_359("$/cutscene/REBEL_05/REBEL_05", &Local_1041, &Local_1032, &bLocal_1039, 69890, 69523, 68637, 67124, 66974, 66896, 0, 1, 1, 2, 2, 0, 1);
}

void Function_459() //Position: 0x150A8 / 86184
{
	bLocal_1311 = CREATE_PROP_IN_LAYOUT(Local_188, "rearGatlingGun", "$/fragments/p_gen_gatlingGun02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	ATTACH_OBJECTS(bLocal_1311, (*&Local_188 + 1252)[02], Function_53(), 0,014f, 1,056f, 2,401f, 0.0f, 180.0f, 0.0f, 4294967295);
	SET_PROP_AI_OBSTACLE_ENABLED(bLocal_1311, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_1311, (*&Local_188 + 1252)[02], false);
	SET_OBJECT_COLLIDE_WITH_OBJECT((*&Local_188 + 1252)[02], bLocal_1311, false);
	return;
}

void Function_460(bool bParam0, bool bParam1) //Position: 0x1513F / 86335
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (ACTOR_HAS_WEAPON(bVar1, 22))
		{
			DELETE_WEAPON_FROM_ACTOR(bVar1, 22);
		}
		if (((GET_WEAPON_EQUIPPED(bVar1, 6) != 4294967295 && GET_WEAPON_EQUIPPED(bVar1, 5) != 4294967295) && GET_WEAPON_EQUIPPED(bVar1, true) != 4294967295) || !bParam1)
		{
			Function_375(bVar1);
		}
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar1, 0);
		bVar0++;
	}
	return;
}

void Function_461(bool bParam0, vector3 vParam1, vector3 vParam4, int iParam7, bool bParam8, float fParam9, bool bParam10, float fParam11) //Position: 0x151A6 / 86438
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	bool bVar14;
	bool bVar15;
	var uVar16;
	
	uVar16 = vParam4.y;
	vVar8 = { 0.0f, 1.0f, 0.0f };
	UNK_0x44986367(&vParam4, vParam4.y);
	VCROSS(&vVar8, &vParam4, &vVar5);
	VSCALE(&vVar5, bParam8);
	VSCALE(&vParam4, bParam8);
	vVar2 = { StackVal, StackVal, vParam1 };
	vVar2.f_4 = (vVar2.y + fParam9);
	bVar0 = false;
	bVar15 = false;
	bVar14 = false;
	while (bVar14 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar14);
		if (IS_ACTOR_VALID(bVar1))
		{
			if ((bParam10 && !Function_347(bVar1, 0x3f800000, 0x42960000, 1, 1, 0)) || !bParam10)
			{
				if (!Function_342(bVar1, Global_34573, fParam11))
				{
					if (bVar0 == iParam7)
					{
						bVar0 = false;
						bVar15++;
						vVar2 = { StackVal, StackVal, vParam1 };
						vVar11 = { StackVal, StackVal, vParam4 };
						VSCALE(&vVar11, TO_FLOAT(bVar15));
						vVar2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar11, vVar2, StackVal) };
						PRINTSTRING("TELEPORT_SQUAD_IN_COLUMN - Hit max cols, starting a new row");
						PRINTNL();
					}
					else
					{
						PRINTSTRING("TELEPORT_SQUAD_IN_COLUMN - current col is ");
						PRINTINT(bVar0);
						PRINTNL();
					}
					Function_463(StackVal, StackVal, bVar1, vVar2, uVar16, 1, 1, 1);
					PRINTSTRING("TELEPORT_SQUAD_IN_COLUMN - Teleporting  ");
					PRINTSTRING(GET_ACTOR_NAME(bVar1));
					PRINTSTRING(" with index ");
					PRINTINT(bVar14);
					PRINTSTRING(" to ");
					PRINTVECTOR(vVar2);
					PRINTNL();
					if (fParam11 < 0.0f)
					{
						PRINTSTRING("He was ");
						PRINTFLOAT(Function_462(Global_34573, bVar1));
						PRINTSTRING("m away");
						PRINTNL();
					}
					bVar0++;
					vVar2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar5, vVar2, StackVal) };
				}
			}
		}
		bVar14++;
	}
}

var Function_462(bool bParam0, bool bParam1) //Position: 0x153AE / 86958
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

void Function_463(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0x1549F / 87199
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, bParam6, uParam7);
			if (!IS_ACTOR_RIDING(bParam0))
			{
				ACTOR_MOUNT_ACTOR(bParam0, bVar0);
			}
		}
		else
		{
			bVar0 = GET_VEHICLE(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, bParam6, uParam7);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(bParam0, vParam1, bParam4, iParam5, bParam6, uParam7);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

void Function_464() //Position: 0x15558 / 87384
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_188.f_1120 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "s3_mob"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "mob_1", 290, -4297,315f, 22,02913f, 4415,529f, 0.0f, 76,42529f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1120);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	Function_465(bVar0);
	Function_448(bVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
	SET_ACTOR_HEALTH(bVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(bVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "mob_2", 291, -4302,411f, 22,0731f, 4412,74f, 0.0f, 117,6219f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1120);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	MEMORY_ALLOW_PICKUP_WEAPONS(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	Function_465(bVar0);
	Function_448(bVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
	SET_ACTOR_HEALTH(bVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(bVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "mob_3", 293, -4300,298f, 22,31681f, 4420,627f, 0.0f, 31,2418f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1120);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 22, 0,5f, 1, 1);
	MEMORY_ALLOW_PICKUP_WEAPONS(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	Function_465(bVar0);
	Function_448(bVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
	SET_ACTOR_HEALTH(bVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(bVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "mob_15", 290, -4312,72f, 22,00109f, 4426,26f, 0.0f, -25,77731f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1120);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 22, 0,5f, 1, 1);
	MEMORY_ALLOW_PICKUP_WEAPONS(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	Function_465(bVar0);
	Function_448(bVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
	SET_ACTOR_HEALTH(bVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(bVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "guyWhoBriefsReyes", 285, -4312,45f, 23,09349f, 4404,362f, 0.0f, -50,45209f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1120);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	Function_465(bVar0);
	Function_448(bVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
	SET_ACTOR_HEALTH(bVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(bVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "mob_17", 522, -4305,994f, 21,91158f, 4421,84f, 0.0f, -11,31277f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1120);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SET_ACTOR_FACTION(bVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	Function_465(bVar0);
	Function_448(bVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
	SET_ACTOR_HEALTH(bVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(bVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "mob_18", 516, -4302,094f, 22,06717f, 4413,837f, 0.0f, 93,31168f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1120);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 22, 0,5f, 1, 1);
	MEMORY_ALLOW_PICKUP_WEAPONS(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	Function_465(bVar0);
	Function_448(bVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
	SET_ACTOR_HEALTH(bVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(bVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "mob_19", 521, -4301,306f, 22,22078f, 4421,615f, 0.0f, 33,44803f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1120);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	MEMORY_ALLOW_PICKUP_WEAPONS(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	Function_465(bVar0);
	Function_448(bVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
	SET_ACTOR_HEALTH(bVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(bVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "mob_20", 291, -4303,523f, 22,38831f, 4423,416f, 0.0f, 11,41082f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1120);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 22, 0,5f, 1, 1);
	MEMORY_ALLOW_PICKUP_WEAPONS(bVar0, 0);
	SET_ACTOR_FACTION(bVar0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	Function_465(bVar0);
	Function_448(bVar0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
	SET_ACTOR_HEALTH(bVar0, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(bVar0, 8, "FASTWALK");
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(bVar0, 0,2f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bVar0, 0,1f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	return;
}

void Function_465(bool bParam0) //Position: 0x15D5D / 89437
{
	Function_451(bParam0);
	Function_450(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_466() //Position: 0x15E9B / 89755
{
	Local_188.f_1248 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "S4_escape_horses"));
	(*&Local_188 + 1236)[02] = CREATE_ACTOR_IN_LAYOUT(Local_188, "horse2", 977, -4353,676f, 34,16353f, 4274,167f, 0.0f, 92,53314f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1236)[02], Local_188.f_1248);
	TASK_PRIORITY_SET((*&Local_188 + 1236)[02], true);
	Function_449((*&Local_188 + 1236)[02]);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1236)[02], 49, 1.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_188 + 1236)[02], 0);
	Function_448((*&Local_188 + 1236)[02], 0);
	SET_ACTOR_VISION_MAX_RANGE((*&Local_188 + 1236)[02], 200.0f, 1);
	AI_SET_WEAPON_MAX_RANGE((*&Local_188 + 1236)[02], 200.0f);
	ACCESSORIZE_HORSE((*&Local_188 + 1236)[02], 3);
	return;
}

void Function_467() //Position: 0x15F6C / 89964
{
	Function_196(bLocal_1305, 1);
	OPEN_DOOR_DIRECTION_FAST(bLocal_1305, true);
	Function_196(bLocal_1306, 1);
	OPEN_DOOR_DIRECTION_FAST(bLocal_1306, false);
	return;
}

void Function_468() //Position: 0x15F8E / 89998
{
	bool bVar0;
	
	bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(-4362,59f, 39,3f, 4354,898f, 2.0f, "cratebreak02", 1);
	if (IS_PHYSINST_VALID(bVar0))
	{
		DESTROY_OBJECT(GET_OBJECT_FROM_PHYSINST(bVar0));
	}
	return;
}

void Function_469() //Position: 0x15FC9 / 90057
{
	CLOSE_DOOR_FAST(bLocal_1296);
	Function_222(bLocal_1296, 1);
	CLOSE_DOOR_FAST(bLocal_1297);
	Function_222(bLocal_1297, 1);
	CLOSE_DOOR_FAST(bLocal_1298);
	Function_222(bLocal_1298, 1);
	CLOSE_DOOR_FAST(bLocal_1299[0]);
	Function_222(bLocal_1299[0], 1);
	CLOSE_DOOR_FAST(bLocal_1299[1]);
	Function_222(bLocal_1299[1], 1);
	CLOSE_DOOR_FAST(bLocal_1299[2]);
	Function_222(bLocal_1299[2], 1);
	CLOSE_DOOR_FAST(bLocal_1305);
	Function_222(bLocal_1305, 1);
	CLOSE_DOOR_FAST(bLocal_1306);
	Function_222(bLocal_1306, 1);
	return;
}

bool Function_470() //Position: 0x16049 / 90185
{
	bool bVar0;
	
	bVar0 = bVar0;
	if (!IS_DOOR_VALID(bLocal_1296))
	{
		bLocal_1296 = Function_304("escalara", "villa01", 1);
		return 0;
	}
	if (!IS_DOOR_VALID(bLocal_1297))
	{
		bLocal_1297 = Function_304("escalara", "villa01", 2);
		return 0;
	}
	if (!IS_DOOR_VALID(bLocal_1298))
	{
		bLocal_1298 = Function_304("escalara", "villa01", 4);
		return 0;
	}
	if (!IS_DOOR_VALID(bLocal_1299[0]))
	{
		bLocal_1299[0] = Function_304("escalara", "villaPost01", 4);
		return 0;
	}
	if (!IS_DOOR_VALID(bLocal_1299[1]))
	{
		bLocal_1299[1] = Function_304("escalara", "villaPost01", 5);
		return 0;
	}
	if (!IS_DOOR_VALID(bLocal_1299[2]))
	{
		bLocal_1299[2] = Function_304("escalara", "villaPost01", 6);
		return 0;
	}
	if (!IS_DOOR_VALID(bLocal_1307))
	{
		bLocal_1307 = Function_304("escalara", "generalHouse04", 1);
		return 0;
	}
	if (!IS_DOOR_VALID(bLocal_1308))
	{
		bLocal_1308 = Function_304("escalara", "villaPost01props", 1);
		return 0;
	}
	if (bLocal_1039 < 4)
	{
		if (!IS_DOOR_VALID(bLocal_1303))
		{
			bLocal_1303 = Function_304("escalara", "villaWall04", 1);
			return 0;
		}
		if (!IS_DOOR_VALID(bLocal_1304))
		{
			bLocal_1304 = Function_304("escalara", "villaWall04", 2);
			return 0;
		}
	}
	if (!IS_DOOR_VALID(bLocal_1305))
	{
		bLocal_1305 = Function_304("escalara", "villaWall02", 3);
		return 0;
	}
	if (!IS_DOOR_VALID(bLocal_1306))
	{
		bLocal_1306 = Function_304("escalara", "villaWall02", 4);
		return 0;
	}
	bVar0 = Function_304("escalara", "villaPost01", 2);
	if (!IS_DOOR_VALID(bVar0))
	{
		return 0;
	}
	Function_222(bVar0, 1);
	bVar0 = Function_304("escalara", "villaPost01props", 2);
	if (!IS_DOOR_VALID(bVar0))
	{
		return 0;
	}
	Function_222(bVar0, 1);
	bVar0 = Function_304("escalara", "villaPost01props", 3);
	if (!IS_DOOR_VALID(bVar0))
	{
		return 0;
	}
	Function_222(bVar0, 1);
	bVar0 = Function_304("escalara", "gunsmith01props", 1);
	if (!IS_DOOR_VALID(bVar0))
	{
		return 0;
	}
	Function_222(bVar0, 1);
	bVar0 = Function_304("escalara", "gunsmith01props", 2);
	if (!IS_DOOR_VALID(bVar0))
	{
		return 0;
	}
	OPEN_DOOR_DIRECTION_FAST(bVar0, true);
	Function_196(bVar0, 1);
	return 1;
}

void Function_471(bool bParam0) //Position: 0x16390 / 91024
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				CLEAR_ACTOR_MIN_SPEED(bVar1);
				CLEAR_ACTOR_MAX_SPEED(bVar1);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_472(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x163DB / 91099
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_415(Global_34573, bParam3, bParam2))
	{
		Function_247(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_415(Global_34573, bParam3, bParam1))
	{
		if (!Function_478(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || iParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_340(bParam4, 7,5f, 0, 2, iParam7, 0, 0);
				}
				Function_477(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_476(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_476(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_478(2))
	{
		Function_475(2);
		if (!Function_474())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_473();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_202(bParam3);
				Function_356(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_476(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_476(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_473() //Position: 0x1656F / 91503
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

bool Function_474() //Position: 0x1659A / 91546
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

void Function_475(int iParam0) //Position: 0x165DE / 91614
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
			Function_36(&bVar0, iParam0);
			DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_476(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x16641 / 91713
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

void Function_477(int iParam0) //Position: 0x166E2 / 91874
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
		}
		Function_76(&bVar0, iParam0);
		DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_478(bool bParam0) //Position: 0x16745 / 91973
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_151(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

void Function_479() //Position: 0x1678C / 92044
{
	if (DECOR_CHECK_EXIST((*&Local_188 + 1252)[02], "fStartRollTime"))
	{
		if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT((*&Local_188 + 1252)[02], "fStartRollTime")) < 2,5f)
		{
			TASK_STAND_STILL((*&Local_188 + 1252)[02], -1.0f, 0, 0);
		}
		else
		{
			PRINTSTRING("Waiting ");
			PRINTFLOAT((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT((*&Local_188 + 1252)[02], "fStartRollTime")));
			PRINTNL();
		}
	}
	if (!IS_ACTOR_ALIVE((*&Local_188 + 1252)[12]) && !IS_ACTOR_ALIVE((*&Local_188 + 1252)[22]))
	{
		if (!DECOR_CHECK_EXIST((*&Local_188 + 1252)[02], "fStartRollTime"))
		{
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_188 + 1252)[02], Local_188.f_3292, 2, 0, 0, 1, 1,7f);
			DECOR_SET_FLOAT((*&Local_188 + 1252)[02], "fStartRollTime", GET_CURRENT_GAME_TIME());
		}
	}
	return;
}

void Function_480(var uParam0, var uParam1, bool bParam2) //Position: 0x16894 / 92308
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE(*uParam0))
	{
		if (IS_ACTOR_ALIVE(*uParam1))
		{
			*uParam0 = *uParam1;
			*uParam1 = "";
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bParam2, 0, 4, 0);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_188.f_3292, 2, 1, 0, 1, false);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(*uParam0, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
		}
	}
	return;
}

void Function_481() //Position: 0x168E5 / 92389
{
	var uVar0;
	bool bVar3;
	vector3 vVar4;
	
	if (iLocal_1040 > 9)
	{
		if (!Function_494(Local_188.f_1292, Global_34573, 140.0f, 1))
		{
			Function_346(&Local_188 + 1292, 0, 0, 0);
		}
	}
	if (IS_ACTOR_RIDING(bLocal_1058))
	{
		if (Function_342(Global_34573, (*&Local_188 + 1252)[02], 60.0f))
		{
			if (!Function_342(bLocal_1058, (*&Local_188 + 1252)[02], 90.0f))
			{
				Function_492((*&Local_188 + 1252)[02], Local_188.f_3292, 80.0f, &vVar4, 0);
				if (!WOULD_ACTOR_BE_VISIBLE(976, &vVar4, 3212836864))
				{
					Function_491(StackVal, StackVal, bLocal_1058, vVar4, 1, 1, 1);
					Function_490(bLocal_1058, (*&Local_188 + 1252)[02]);
					AI_ACTOR_FORCE_SPEED(bLocal_1058, 3);
					TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(bLocal_1058, GET_OBJECT_FROM_ACTOR((*&Local_188 + 1252)[02]), Local_188.f_3292, 10.0f, 1, 3.0f);
				}
			}
		}
	}
	switch (bLocal_1280)
	{
		case 0x00000000:
			MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_1058);
			bLocal_1280 = true;
			break;
		
		case 0x00000001:
			if (Function_494(Local_188.f_1248, Global_34573, 5.0f, 1) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1292) >= 0)
			{
				if (IS_ACTOR_ALIVE((*&Local_188 + 1172)[02]) && !Function_431(1))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_340("Rebel05_obj07", 0x40f00000, 1, 2, 0, 0, 0);
					SET_BLIP_BLINK(GET_BLIP_ON_ACTOR((*&Local_188 + 1172)[02]), 1, 0, 5f);
				}
				SQUAD_COMPUTE_CENTROID(Local_188.f_1248, &uVar0);
				MEMORY_PREFER_RIDING(bLocal_1058, true);
				TASK_GO_NEAR_COORD(bLocal_1058, &uVar0, 5.0f, 4);
				bLocal_1280 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_489(Local_188.f_1248) <= 2)
			{
				if (!WOULD_ACTOR_BE_VISIBLE(976, &Local_188 + 2792, 3212836864))
				{
					bVar3 = CREATE_ACTOR_IN_LAYOUT(Local_188, Function_53(), 977, *(&Local_188 + 2792), *(&Local_188 + 2792 + 12));
					SQUAD_JOIN(bVar3, Local_188.f_1248);
					Function_488(bLocal_1058, Local_188.f_1248, 0);
					ACCESSORIZE_HORSE(bVar3, 3);
				}
				else if (!WOULD_ACTOR_BE_VISIBLE(976, &Local_188 + 2816, 3212836864))
				{
					bVar3 = CREATE_ACTOR_IN_LAYOUT(Local_188, Function_53(), 977, *(&Local_188 + 2816), *(&Local_188 + 2816 + 12));
					SQUAD_JOIN(bVar3, Local_188.f_1248);
					Function_488(bLocal_1058, Local_188.f_1248, 0);
					ACCESSORIZE_HORSE(bVar3, 3);
				}
			}
			if (GET_TASK_STATUS(bLocal_1058, 61) == 0)
			{
				if (IS_ACTOR_RIDING(bLocal_1058) || ((!Function_342(Global_34573, bLocal_1058, 60.0f) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1292) >= 0) && iLocal_1040 <= 10))
				{
					Function_241(&bLocal_1173);
					bLocal_1280 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_RIDING(bLocal_1058) || ((!Function_342(Global_34573, bLocal_1058, 60.0f) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1292) >= 0) && iLocal_1040 <= 10))
			{
				if ((!Function_342(bLocal_1058, Global_34573, 30.0f) || Function_431(0)) || IS_ACTOR_RIDING(Global_34573))
				{
					if (IS_ACTOR_RIDING(bLocal_1058))
					{
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(GET_MOUNT(bLocal_1058), 0.0f);
					}
					bLocal_1280 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(false, GET_OBJECT_FROM_ACTOR((*&Local_188 + 1252)[02]), Local_188.f_3292, 10.0f, 1, 3.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_1058, bLocal_1280);
					TASK_SEQUENCE_RELEASE(bLocal_1280, 1);
					Function_487();
					COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_1058, 10.0f);
					bLocal_1280 = 4;
				}
				else if (!IS_ACTOR_RIDING(Global_34573))
				{
					if (Function_290(&bLocal_1173) <= 7.0f)
					{
						Function_241(&bLocal_1173);
						Function_486();
						TASK_FACE_ACTOR(bLocal_1058, Global_34573, 1, 3212836864);
					}
				}
			}
			break;
		
		case 0x00000004:
			Function_485();
			if (((Function_484(Local_188.f_1288, Global_34573, 1, 0, 0) || Function_484(Local_188.f_1232, Global_34573, 1, 0, 0)) || Function_482(Global_34573, Local_188.f_1288, 1, 0, 0, 3212836864)) || Function_482(Global_34573, Local_188.f_1232, 1, 0, 0, 3212836864))
			{
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				bLocal_1280 = 5;
			}
			break;
		
		case 0x00000005:
			Function_485();
			break;
	}
	return;
}

int Function_482(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x16CB8 / 93368
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (Function_483(bParam0, bVar1, bParam2, bParam3, bParam4, bParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_483(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x16D18 / 93464
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (bParam0 == bParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(bParam1) == bParam0)
		{
			CLEAR_LAST_HIT(bParam1);
			return 1;
		}
	}
	if (bParam3)
	{
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(bParam0, 0) == bParam1)
		{
			return 1;
		}
	}
	if (bParam4)
	{
		if (bParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, bParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(bParam1, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int Function_484(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x16E05 / 93701
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (Function_483(bVar1, bParam1, bParam2, bParam3, bParam4, 3212836864))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_485() //Position: 0x16E68 / 93800
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	if (!IS_ACTOR_RIDING(bLocal_1058))
	{
		if (!Function_347(bLocal_1058, 0x3f800000, 0x42960000, 1, 1, 0))
		{
			GET_POSITION(bLocal_1058, &vVar1);
			bVar4 = GET_OBJECT_HEADING(bLocal_1058);
			vVar1.x = (vVar1.x + 1,5f);
			if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(bLocal_1058)))
			{
			}
		}
	}
}

void Function_486() //Position: 0x16EF4 / 93940
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_goAfterBill_no", "Rebel05_goAfterBill_no", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_487() //Position: 0x16F49 / 94025
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_JonMountsHorse1", "Rebel05_JonMountsHorse1", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_488(bool bParam0, bool bParam1, bool bParam2) //Position: 0x16FA0 / 94112
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_IDENTIFY(bParam0, bVar1);
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bParam0, bVar1, true);
				}
			}
		}
		bVar0++;
	}
	return;
}

int Function_489(bool bParam0) //Position: 0x16FF5 / 94197
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_490(bool bParam0, bool bParam1) //Position: 0x17045 / 94277
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_392(StackVal, StackVal, bParam0, vVar0);
	return;
}

void Function_491(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1705F / 94303
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR(bVar0, &uParam1, iParam4, iParam5, iParam6);
		}
		else
		{
			bVar0 = GET_VEHICLE(bParam0);
			if (IS_ACTOR_VALID(bVar0))
			{
				TELEPORT_ACTOR(bVar0, &uParam1, iParam4, iParam5, iParam6);
			}
			else
			{
				TELEPORT_ACTOR(bParam0, &uParam1, iParam4, iParam5, iParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED got an invalid ACTOR");
	}
}

int Function_492(bool bParam0, bool bParam1, float fParam2, var uParam3, int iParam4) //Position: 0x170EE / 94446
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = iParam4;
	while (bVar0 < (GET_NUM_PATH_POINTS(bParam1) - 1))
	{
		GET_PATH_POINT(bParam1, bVar0, &vVar3);
		GET_POSITION(bParam0, &vVar6);
		bVar2 = VDIST(vVar3, vVar6);
		if (bVar0 == 0)
		{
			if (bVar2 > fParam2)
			{
				PRINTSTRING("Our first point is too close, return 0");
				PRINTNL();
				return 0;
			}
		}
		if (bVar2 > fParam2)
		{
			if (bVar0 == 0)
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = (bVar0 - 1);
				GET_PATH_POINT(bParam1, (bVar0 - 1), &vVar9);
				Function_493(StackVal, StackVal, StackVal, StackVal, vVar3, vVar9, (fParam2 - bVar2));
				*uParam3 = { StackVal, StackVal, Function_493(StackVal, StackVal, StackVal, StackVal, vVar3, vVar9, (fParam2 - bVar2)) };
				PRINTSTRING("npoint is ");
				return iVar1;
			}
		}
		bVar0++;
	}
	return iVar1;
}

vector3 Function_493(vector3 vParam0, vector3 vParam3, bool bParam6) //Position: 0x171C2 / 94658
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	VNORMALIZE(&vVar0);
	VSCALE(&vVar0, bParam6);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam0, vVar0, StackVal) };
	return StackVal, StackVal, vVar0;
}

bool Function_494(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x171F4 / 94708
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (ACTORS_IN_RANGE(bVar1, bParam1, bParam2))
				{
					if (!Function_495(bVar1, 1) || iParam3)
					{
						return 1;
					}
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_495(bool bParam0, int iParam1) //Position: 0x1728D / 94861
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(bParam0))
		{
			return 1;
		}
		bVar0 = SQUAD_GET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

void Function_496() //Position: 0x172D7 / 94935
{
	vector3 vVar0;
	var uVar3;
	float fVar6;
	bool bVar7;
	
	if (IS_ACTOR_VALID((*&Local_188 + 1252)[32]))
	{
		bVar7 = GET_LAST_ATTACK_TARGET((*&Local_188 + 1252)[32]);
		if (IS_ACTOR_VALID(bVar7))
		{
			Function_300(bVar7);
			Function_300((*&Local_188 + 1252)[32]);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_300((*&Local_188 + 1252)[32]), Function_300(bVar7), StackVal) };
			VNORMALIZE(&vVar0);
			GET_ACTOR_AXIS((*&Local_188 + 1252)[32], &uVar3, 0);
			fVar6 = VDOT(&uVar3, &vVar0);
			if (fVar6 >= 0.0f)
			{
				AI_SET_GATLING_MAX_HORIZONTAL_DEGREES((*&Local_188 + 1252)[32], 20.0f);
			}
			else
			{
				AI_SET_GATLING_MAX_HORIZONTAL_DEGREES((*&Local_188 + 1252)[32], 41.0f);
			}
		}
	}
	return;
}

int Function_497() //Position: 0x1735C / 95068
{
	var uVar0;
	var uVar3;
	bool bVar6;
	bool bVar7;
	
	switch (Local_1041)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
			}
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL_LEADER_05_CS03/REBEL_LEADER_05_CS03"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/REBEL_LEADER_05_CS03/REBEL_LEADER_05_CS03", 0, 2, 2, 2, 2);
				Local_1041 = 1004;
			}
			else
			{
				LOG_ERROR("cutscene DOES NOT exist, going to CID_SKIPPED");
				Local_1041 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				LOG_ERROR("cutfile failed to load, going to CID_SKIPPED");
				Local_1041 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				Local_1041 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar6 = false;
			while (bVar6 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar6, &uVar0, &uVar3))
				{
					bVar7 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar6);
					if (Function_457(bVar7))
					{
						if (bVar7 == GET_ACTOR_ENUM(Global_34573))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), Global_34573);
						}
						if (bVar7 == GET_ACTOR_ENUM(bLocal_1058))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), bLocal_1058);
						}
						if (IS_ACTOR_VALID((*&Local_188 + 1184)[02]))
						{
							if (bVar7 == GET_ACTOR_ENUM((*&Local_188 + 1184)[02]))
							{
								CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), (*&Local_188 + 1184)[02]);
							}
						}
						if (IS_ACTOR_VALID((*&Local_188 + 1172)[02]))
						{
							if (bVar7 == GET_ACTOR_ENUM((*&Local_188 + 1172)[02]))
							{
								CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), (*&Local_188 + 1172)[02]);
							}
						}
						PRINTSTRING("Cutscene found ");
						PRINTSTRING(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6));
						PRINTSTRING(" with enum ");
						PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar7));
						PRINTNL();
					}
				}
				bVar6++;
			}
			CUTSCENE_MANAGER_RESUME_LOADING();
			Local_1041 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_SET_CUTSCENE_MODE(0);
				Local_1041 = 1104;
			}
			break;
		
		case 0x00000450:
			return 1;
			break;
		
		case 0x00000451:
			return 1;
			break;
	}
	return 0;
}

void Function_498(bool bParam0) //Position: 0x175C2 / 95682
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_OBJECT(bLocal_1311, "shootbabyshoot");
	if (IS_OBJECT_VALID(bVar0))
	{
		SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, (*&Local_188 + 1252)[02], false);
		SET_OBJECT_COLLIDE_WITH_OBJECT((*&Local_188 + 1252)[02], bParam0, false);
		GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(bVar0), "GatlingShoot", 0);
		GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(bVar0), "Left", 0);
		GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(bVar0), "Right", 0);
		SNAP_ACTOR_TO_GRINGO(bParam0, bVar0, "GatlingShoot", true, 0, 0);
		TASK_USE_TURRET(bParam0, bLocal_1311, -1f);
		TASK_PRIORITY_SET(bParam0, true);
		SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
		DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
		SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
		AI_SET_WEAPON_MAX_RANGE(bParam0, 90.0f);
		SET_MOVER_FROZEN(bParam0, true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1,1f);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 15, true);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 20.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 5.0f);
		Function_445(&bParam0, Global_34573, 1);
	}
	else
	{
		LOG_ERROR("CAN'T FIND GUN GRINGO!");
	}
	return;
}

bool Function_499(bool bParam0, bool bParam1) //Position: 0x176E0 / 95968
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_OBJECT(bParam1, "shootbabyshoot");
	if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bVar0)))
	{
	}
	else if (GET_ACTOR_FROM_OBJECT(Function_388(GET_GRINGO_FROM_OBJECT(bVar0), "GatlingShoot")) == bParam0)
	{
		return 1;
	}
	return 0;
}

void Function_500() //Position: 0x1772F / 96047
{
	if (!IS_DOOR_VALID(bLocal_1296))
	{
		bLocal_1296 = Function_304("escalara", "villa01", 1);
	}
	if (!IS_DOOR_VALID(bLocal_1297))
	{
		bLocal_1297 = Function_304("escalara", "villa01", 2);
	}
	if (bLocal_1039 < 4)
	{
		if (!IS_DOOR_VALID(bLocal_1303))
		{
			bLocal_1303 = Function_304("escalara", "villaWall04", 1);
		}
		if (!IS_DOOR_VALID(bLocal_1304))
		{
			bLocal_1304 = Function_304("escalara", "villaWall04", 2);
		}
	}
	if (!IS_DOOR_VALID(bLocal_1305))
	{
		bLocal_1305 = Function_304("escalara", "villaWall02", 3);
	}
	if (!IS_DOOR_VALID(bLocal_1306))
	{
		bLocal_1306 = Function_304("escalara", "villaWall02", 4);
	}
	return;
}

void Function_501() //Position: 0x17830 / 96304
{
	if (iLocal_1040 < 3 && iLocal_1040 > 105)
	{
		Function_472(&bLocal_1176, 60.0f, 200.0f, bLocal_1058, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1049, 0, 0, 0, 325, 1);
		if (iLocal_1040 <= 13)
		{
			if (!Function_342(bLocal_1058, Global_34573, 60.0f))
			{
				Function_355(7, 1, 1);
			}
			else
			{
				Function_355(7, 0, 1);
			}
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_3360)))
		{
			if (Function_499(Global_34573, Local_188.f_3360))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_3360));
			}
		}
		if (!IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(Function_388(GET_GRINGO_FROM_OBJECT(Local_188.f_3064), "UseCase1"))) || !IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(Function_388(GET_GRINGO_FROM_OBJECT(Local_188.f_3068), "UseCase2"))))
		{
			if ((GET_CURRENT_GAME_TIME() - fLocal_1292) < 5.0f)
			{
				Function_549(1);
				fLocal_1292 = GET_CURRENT_GAME_TIME();
			}
		}
		Function_547();
		Function_541(Local_188.f_1120, 6, &Local_188 + 2592, 0);
	}
	switch (iLocal_1040)
	{
		case 0x00000000:
			Function_320(0);
			iLocal_1293 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			bLocal_1279 = false;
			bLocal_1280 = false;
			iLocal_1281 = 0;
			iLocal_1282 = 0;
			SET_ACTOR_HEALTH(bLocal_1058, GET_ACTOR_MAX_HEALTH(bLocal_1058));
			CLEAR_ACTOR_MIN_SPEED(bLocal_1058);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_1508)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_1508));
			}
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 0.0f);
			Function_319(&Local_188 + 1084, 1);
			if (SQUAD_IS_VALID(Local_188.f_1160))
			{
				Function_240(&Local_188 + 1160);
			}
			if (SQUAD_IS_VALID(Local_188.f_1448))
			{
				Function_240(&Local_188 + 1448);
			}
			if (SQUAD_IS_VALID(Local_188.f_1168))
			{
				Function_240(&Local_188 + 1168);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			if (iLocal_1061[5] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				iLocal_1293 = 0;
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_315();
				bLocal_1060 = Function_313(StackVal, StackVal, *(&Local_188 + 2104[16]), 0, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_188 + 2104[16]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_188 + 2104[06]), 1, true, 1);
				GIVE_WEAPON_TO_ACTOR(bLocal_1058, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_1058, 0);
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_241(&bLocal_1167);
				iLocal_1040 = 1;
			}
			else
			{
				Function_241(&bLocal_1167);
				iLocal_1040 = 2;
			}
			Function_471(Local_188.f_1120);
			break;
		
		case 0x00000001:
			if (((STREAMING_IS_WORLD_LOADED() && Function_540()) && Function_377()) && (Function_312(bLocal_1060) || bLocal_1060 != 4294967295))
			{
				if (Function_470())
				{
					if (Function_406(&bLocal_1106))
					{
						Function_469();
						Function_468();
						Function_241(&bLocal_1167);
						iLocal_1040 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_253(bLocal_1039);
			Function_306(StackVal, StackVal, Function_253(bLocal_1039), bLocal_1039, Global_30633[0], Function_256(bLocal_1039), 0);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_1058, 13, false);
			TOGGLE_COVER_PROPS(0);
			if (IS_OBJECT_VALID(Local_188.f_3364))
			{
				DESTROY_OBJECT(Local_188.f_3364);
			}
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!SQUAD_IS_VALID(Local_188.f_1120))
			{
				Function_464();
				Function_461(StackVal, StackVal, StackVal, StackVal, Local_188.f_1120, *(&Local_188 + 2104[26]), *(&Local_188 + 2104[26] + 12), 5, 2.0f, 1.0f, 0, 0);
				Function_460(Local_188.f_1120, 0);
				Function_539(Local_188.f_1120, 6);
			}
			else
			{
				SQUAD_GOALS_CLEAR(Local_188.f_1120);
			}
			Function_538(Local_188.f_1120, 2.0f);
			Function_535(1);
			Function_355(7, 0, 1);
			Function_534();
			Function_533();
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1452, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1452) | 2048);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1456, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1456) | 2048);
			Function_532(Local_188.f_1452);
			Function_532(Local_188.f_1456);
			SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(1);
			Function_531(Local_188.f_1120, Local_188.f_1452, 0);
			Function_531(Local_188.f_1120, Local_188.f_1456, 0);
			Function_532(Local_188.f_1120);
			Function_348(&(Local_1222[017]), bLocal_1058, "RebelLeader", 0, 0x5f5e100, 1);
			Function_530(&(Local_1222[117]));
			Function_348(&(Local_1222[117]), Local_188.f_1120, "rebel05_rebel", 0, 0x5f5e100, 1);
			Function_442(&(Local_1222[117]), 42);
			Function_529(Local_188.f_1120, 6, 0x40a00000);
			Function_241(&bLocal_1167);
			iLocal_1040 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADED())
			{
				Function_531(Local_188.f_1120, Local_188.f_1452, 0);
				HUD_CLEAR_OBJECTIVE();
				Function_340("Rebel05_obj06", 5,5f, 1, 2, 0, 0, 0);
				Function_241(&bLocal_1167);
				iLocal_1040 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_290(&bLocal_1167) <= 6.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_340("Rebel05_help_DefGatling", 0x40f00000, 1, 2, 0, 0, 0);
				ADD_BLIP_FOR_OBJECT(Local_188.f_3360, 335, 0f, 2, 0);
				Function_241(&bLocal_1167);
				iLocal_1040 = 8;
			}
			break;
		
		case 0x00000008:
			iLocal_1293 = 1;
			Function_530(&(Local_1222[117]));
			Function_348(&(Local_1222[117]), Local_188.f_1120, "rebel05_rebel", 0, 0x5f5e100, 1);
			Function_442(&(Local_1222[117]), 42);
			Function_441(&(Local_1222[117]), 3);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_446(Local_188.f_1452, Global_34573, 1);
			Function_446(Local_188.f_1456, Global_34573, 1);
			Function_341(Local_188.f_1452);
			Function_341(Local_188.f_1456);
			iLocal_1287 = 0;
			Function_241(&bLocal_1179);
			Function_241(&bLocal_1167);
			iLocal_1040 = 9;
			break;
		
		case 0x00000009:
			Function_520();
			if (Function_290(&bLocal_1179) <= 8.0f)
			{
				if (!Function_519() || (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1452) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1456)) >= 2)
				{
					Function_518(Local_188.f_1452);
					Function_535(0);
					Function_517(Local_188.f_1452, 15, 0);
					Function_516(Local_188.f_1452, 10, 1.0f);
					Function_516(Local_188.f_1452, 11, 1.0f);
					Function_516(Local_188.f_1452, 8, 0,5f);
					SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1452, false, Local_188.f_1756, 4294967295);
					Function_514(Local_188.f_1456, 3);
					Function_512();
					Function_241(&bLocal_1167);
					iLocal_1040 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_499(Global_34573, Local_188.f_3360))
			{
				Function_510(Local_188.f_1452, Local_188.f_1120, 2);
				Function_510(Local_188.f_1456, Local_188.f_1120, 2);
			}
			else
			{
				Function_510(Local_188.f_1452, Local_188.f_1120, 4);
				Function_510(Local_188.f_1456, Local_188.f_1120, 4);
			}
			if (!SQUAD_GOAL_IS_VALID(bLocal_1376))
			{
				if (!Function_499(Global_34573, Local_188.f_3360))
				{
					bLocal_1376 = SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, false, 0, 1);
					TASK_USE_TURRET(false, Local_188.f_3360, -1f);
				}
			}
			else if (Function_499(Global_34573, Local_188.f_3360))
			{
				SQUAD_GOAL_REMOVE(Local_188.f_1120, bLocal_1376);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1456) >= 4 || Function_509(Local_188.f_1456, bLocal_1058, 25.0f, 0) < 3)
			{
				Function_514(Local_188.f_1452, 3);
				SQUADS_MERGE(Local_188.f_1452, Local_188.f_1456);
				DESTROY_OBJECT(Local_188.f_1452);
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1456, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1456) | 2048);
				Function_512();
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				if (SQUAD_GOAL_IS_VALID(bLocal_1376))
				{
					SQUAD_GOAL_REMOVE(Local_188.f_1120, bLocal_1376);
				}
				Function_510(Local_188.f_1456, Local_188.f_1120, 4);
				Function_241(&bLocal_1167);
				iLocal_1040 = 11;
			}
			break;
		
		case 0x0000000B:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1456) < 3)
			{
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				Local_1041 = 1000;
				Function_241(&bLocal_1167);
				iLocal_1040 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_508();
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1456) >= 2 && Function_507(Local_188.f_1456, Local_188.f_1544, 1) >= 0)
			{
				Function_505(Local_188.f_1456);
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_3360)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_3360));
				}
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_1058, 7, true);
				TASK_HIDE_AT_COVER(bLocal_1058, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3244), -1.0f, 6f, 1);
				Function_241(&bLocal_1167);
				iLocal_1040 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_508();
			if (Function_290(&bLocal_1167) <= 1,5f)
			{
				if (Function_342(bLocal_1058, Global_34573, 20.0f))
				{
					Function_504();
				}
				else
				{
					AUDIO_TRIGGER_PLAYER_KILLED_EVERYONE_SPEECH();
				}
				Function_241(&bLocal_1167);
				iLocal_1040 = 14;
			}
			break;
		
		case 0x0000000E:
			Function_508();
			Function_414(Local_188.f_1456, Global_34573, 50.0f, 0);
			Function_503(Local_188.f_1456, 0, 0);
			if (Function_290(&bLocal_1167) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_340("Rebel05_meet_at_door", 0x40f00000, 1, 2, 0, 0, 0);
				Function_355(7, 1, 1);
				SQUAD_GOALS_CLEAR(Local_188.f_1120);
				Function_460(Local_188.f_1120, 1);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, false, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_188.f_3084), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, false, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_188.f_3088), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, true, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_188.f_3092), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, true, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_188.f_3096), "UseCase1", 4294967295, 2);
				Function_241(&bLocal_1167);
				iLocal_1040 = 15;
			}
			break;
		
		case 0x0000000F:
			Function_508();
			Function_414(Local_188.f_1456, Global_34573, 30.0f, 0);
			if ((Function_502(StackVal, StackVal, bLocal_1058, *(&Local_188 + 2180[26]), 4.0f) && Function_342(bLocal_1058, Global_34573, 7.0f)) && !Function_494(Local_188.f_1456, bLocal_1058, 20.0f, 1))
			{
				Function_241(&bLocal_1167);
				iLocal_1040 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_508())
			{
				Local_1041 = 1000;
				iLocal_1061[6] = 1;
				SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
				Function_241(&bLocal_1167);
				bLocal_1039 = 7;
				iLocal_1040 = 0;
			}
			break;
	}
	return;
}

bool Function_502(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x182D0 / 99024
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_209(bParam0);
		if (VDIST(Function_209(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

var Function_503(bool bParam0, bool bParam1, float fParam2) //Position: 0x1835A / 99162
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = false;
	fVar2 = 0;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!Function_342(Global_34573, bVar1, fParam2))
			{
				if (!Function_347(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					SQUAD_LEAVE(bVar1);
					DESTROY_ACTOR(bVar1);
					if (bParam1)
					{
						if (IS_ACTOR_RIDING(bVar1))
						{
							DESTROY_ACTOR(GET_MOUNT(bVar1));
						}
					}
					fVar2++;
				}
				else
				{
					bVar0++;
				}
			}
			else
			{
				bVar0++;
			}
		}
		else
		{
			bVar0++;
		}
	}
	return fVar2;
}

void Function_504() //Position: 0x183F5 / 99317
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_GateGreatDefend", "Rebel05_GateGreatDefend", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_505(int iParam0) //Position: 0x1844C / 99404
{
	int iVar0;
	var uVar1;
	
	GET_VOLUME_CENTER(Local_188.f_1772, &uVar1);
	iVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_COORD(false, &uVar1, 10.0f, 4);
	TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 1, 0, 0);
	TASK_SEQUENCE_CLOSE();
	Function_506(iParam0, iVar0, 1, 1);
	return;
}

void Function_506(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x18485 / 99461
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_SEQUENCE_PERFORM(bVar1, bParam1);
			TASK_PRIORITY_SET(bVar1, bParam2);
		}
		bVar0++;
	}
	if (bParam3)
	{
		TASK_SEQUENCE_RELEASE(bParam1, 1);
	}
}

int Function_507(bool bParam0, bool bParam1, bool bParam2) //Position: 0x184DB / 99547
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_IN_VOLUME(bVar2, bParam1))
		{
			if (bParam2)
			{
				if (!IS_ACTOR_HOGTIED(bVar2))
				{
					bVar1++;
				}
			}
			else
			{
				bVar1++;
			}
		}
		bVar0++;
	}
	return bVar1;
}

bool Function_508() //Position: 0x1853F / 99647
{
	var uVar0;
	var uVar3;
	bool bVar6;
	bool bVar7;
	
	switch (Local_1041)
	{
		case 0x000003E8:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
			}
			if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL_05/REBEL_05"))
			{
				CUTSCENE_MANAGER_LOAD_CUTFILE("$/cutscene/REBEL_05/REBEL_05", 0, 2, 2, 2, 2);
				Function_254(Local_188.f_3040);
				bLocal_1324 = CREATE_ACTOR_IN_LAYOUT(Local_188, Function_53(), 521, Function_254(Local_188.f_3040), 0.0f, 0.0f, 0.0f);
				TASK_STAND_STILL(bLocal_1324, -1.0f, 0, 0);
				SET_ACTOR_INVULNERABILITY(bLocal_1324, true);
				Local_1041 = 1004;
			}
			else
			{
				LOG_ERROR("cutscene DOES NOT exist, going to CID_SKIPPED");
				Local_1041 = 1105;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				LOG_ERROR("cutfile failed to load, going to CID_SKIPPED");
				Local_1041 = 1105;
			}
			else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
			{
				Local_1041 = 1005;
			}
			break;
		
		case 0x000003ED:
			bVar6 = false;
			while (bVar6 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar6, &uVar0, &uVar3))
				{
					bVar7 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar6);
					if (Function_457(bVar7))
					{
						PRINTSTRING("Cutscene got a guy named ");
						PRINTSTRING(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6));
						PRINTSTRING(" with enum ");
						PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar6)));
						PRINTNL();
						if (bVar7 == GET_ACTOR_ENUM(Global_34573))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), Global_34573);
						}
						if (bVar7 == GET_ACTOR_ENUM(bLocal_1058))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), bLocal_1058);
						}
						if (IS_ACTOR_VALID((*&Local_188 + 1184)[02]))
						{
							if (bVar7 == GET_ACTOR_ENUM((*&Local_188 + 1184)[02]))
							{
								CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), (*&Local_188 + 1184)[02]);
							}
						}
						if (IS_ACTOR_VALID((*&Local_188 + 1172)[02]))
						{
							if (bVar7 == GET_ACTOR_ENUM((*&Local_188 + 1172)[02]))
							{
								CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), (*&Local_188 + 1184)[02]);
							}
						}
						if (IS_ACTOR_VALID(bLocal_1324))
						{
							if (bVar7 == GET_ACTOR_ENUM(bLocal_1324))
							{
								CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), bLocal_1324);
							}
						}
					}
				}
				bVar6++;
			}
			CUTSCENE_MANAGER_RESUME_LOADING();
			Local_1041 = 1006;
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_SET_CUTSCENE_MODE(0);
				Local_1041 = 1104;
			}
			break;
		
		case 0x00000450:
			return 1;
			break;
		
		case 0x00000451:
			return 1;
			break;
	}
	return 0;
}

int Function_509(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x187CA / 100298
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2) && IS_ACTOR_ALIVE(bVar2))
		{
			if (Function_415(bVar2, bParam1, bParam2))
			{
				iVar1++;
				if (bParam3)
				{
					return iVar1;
				}
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_510(bool bParam0, bool bParam1, int iParam2) //Position: 0x18839 / 100409
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_511(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_511(bool bParam0, bool bParam1, bool bParam2) //Position: 0x18888 / 100488
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_CONSIDER_AS(bParam0, bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_512() //Position: 0x188D2 / 100562
{
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1456, false, 0, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3224), -1.0f, 1086324736);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1456, false, 0, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3220), -1.0f, 1086324736);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1456, false, 0, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3216), -1.0f, 1086324736);
	Function_513(Local_188.f_1456, (*&Local_188 + 1512)[0], 1, 2);
	Function_513(Local_188.f_1456, (*&Local_188 + 1512)[5], 2, 1);
	Function_513(Local_188.f_1456, (*&Local_188 + 1512)[1], 3, 3);
	Function_513(Local_188.f_1456, (*&Local_188 + 1512)[4], 4, 4294967295);
	return;
}

var Function_513(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x1897E / 100734
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return bVar0;
	}
	bVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, bParam2, bParam1, iParam3);
	iVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(bParam0, false, bParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(bParam0, iVar1, bVar0);
	return bVar0;
}

void Function_514(bool bParam0, int iParam1) //Position: 0x189B9 / 100793
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		Function_515(bVar1, (bVar0 % 3), iParam1);
		bVar0++;
	}
	return;
}

void Function_515(bool bParam0, int iParam1, bool bParam2) //Position: 0x189EE / 100846
{
	bool bVar0;
	var uVar1;
	bool bVar4;
	
	switch (iParam1)
	{
		case 0x00000000:
			bVar4 = Local_188.f_3324;
			break;
		
		case 0x00000001:
			bVar4 = Local_188.f_3328;
			break;
		
		case 0x00000002:
			bVar4 = Local_188.f_3332;
			break;
	}
	GET_PATH_POINT(bVar4, false, &uVar1);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD_NONSTOP(false, &uVar1, bParam2, 3212836864);
	TASK_FOLLOW_PATH(false, bVar4, 4, 0, 1, 1, false);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_516(bool bParam0, int iParam1, bool bParam2) //Position: 0x18A60 / 100960
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_517(bool bParam0, int iParam1, bool bParam2) //Position: 0x18AAA / 101034
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_518(bool bParam0) //Position: 0x18AF4 / 101108
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			AI_SHOOT_TARGET_CLEAR_OFFSET(bVar1);
			bVar0++;
		}
	}
	return;
}

bool Function_519() //Position: 0x18B2B / 101163
{
	if (((((IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1820) || IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1824)) || IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1764)) || IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1760)) || IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1756)) || IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1772))
	{
		return 1;
	}
	return 0;
}

void Function_520() //Position: 0x18B7E / 101246
{
	if (Function_499(Global_34573, Local_188.f_3360))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0,75f);
		if (!DECOR_CHECK_EXIST(Local_188.f_1452, "bReinforced"))
		{
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1452) < 4)
			{
				Function_527(Local_188.f_1452, -4384,464f, 34,256f, 4413,018f, 1);
				Function_527(Local_188.f_1452, -4385,336f, 34,256f, 4414,941f, 1);
				Function_527(Local_188.f_1452, -4385,866f, 34,256f, 4411,514f, 1);
				Function_527(Local_188.f_1452, -4388,193f, 34,256f, 4414,616f, 1);
				Function_527(Local_188.f_1452, -4389,184f, 34,256f, 4416,602f, 1);
				DECOR_SET_BOOL(Local_188.f_1452, "bReinforced", true);
				Function_517(Local_188.f_1452, 15, 1);
				Function_516(Local_188.f_1452, 10, 1,8f);
				Function_516(Local_188.f_1452, 11, 1,5f);
				Function_516(Local_188.f_1452, 53, 20.0f);
			}
		}
	}
	else
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	}
	switch (iLocal_1287)
	{
		case 0x00000000:
			if (SQUAD_IS_VALID(bLocal_1320))
			{
				SQUADS_MERGE(bLocal_1320, Local_188.f_1120);
				DESTROY_OBJECT(bLocal_1320);
			}
			bLocal_1320 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "braveMen"));
			Function_524(&Local_188 + 1452, 0, 1);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1452, 12, Local_188.f_1772, 4294967295);
			SQUADS_MERGE(Local_188.f_1456, Local_188.f_1452);
			Function_517(Local_188.f_1452, 15, 1);
			Function_516(Local_188.f_1452, 8, 1.0f);
			Function_516(Local_188.f_1452, 10, 1,8f);
			Function_516(Local_188.f_1452, 11, 1,5f);
			Function_516(Local_188.f_1452, 53, 20.0f);
			Function_523(Local_188.f_1452, 20.0f);
			Function_522(Local_188.f_1452, Global_34573, "head");
			iLocal_1287 = 1;
			break;
		
		case 0x00000001:
			if (Function_521(Local_188.f_1452, (*&Local_188 + 1548)[0]) >= 0)
			{
				Function_241(&bLocal_1167);
				iLocal_1287 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_290(&bLocal_1167) <= 8.0f || (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1452) >= 5 && DECOR_CHECK_EXIST(Local_188.f_1452, "bReinforced")))
			{
				Function_524(&Local_188 + 1452, 1, 1);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1452, 11, (*&Local_188 + 1548)[0], 3);
				iLocal_1287 = 3;
			}
			break;
		
		case 0x00000003:
			Function_241(&bLocal_1167);
			iLocal_1287 = 4;
			break;
		
		case 0x00000004:
			if (Function_290(&bLocal_1167) <= 7.0f || (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1452) >= 5 && DECOR_CHECK_EXIST(Local_188.f_1452, "bReinforced")))
			{
				SQUAD_GOALS_CLEAR(Local_188.f_1452);
				Function_524(&Local_188 + 1452, 2, 1);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1452, 10, (*&Local_188 + 1548)[1], 3);
				iLocal_1287 = 5;
			}
			break;
		
		case 0x00000005:
			Function_241(&bLocal_1167);
			iLocal_1287 = 6;
			break;
		
		case 0x00000006:
			if (Function_290(&bLocal_1167) <= 6.0f || (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1452) >= 4 && DECOR_CHECK_EXIST(Local_188.f_1452, "bReinforced")))
			{
				SQUAD_GOALS_CLEAR(Local_188.f_1452);
				Function_524(&Local_188 + 1452, 3, 1);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1452, 9, (*&Local_188 + 1548)[1], 3);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1452, 10, (*&Local_188 + 1548)[2], 3);
				iLocal_1287 = 7;
			}
			break;
		
		case 0x00000007:
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1452, false, (*&Local_188 + 1548)[3], 4294967295);
			Function_241(&bLocal_1167);
			iLocal_1287 = 8;
			break;
		
		case 0x00000008:
			if (Function_290(&bLocal_1167) <= 15.0f)
			{
				iLocal_1287 = 99;
			}
			break;
	}
	return;
}

int Function_521(bool bParam0, bool bParam1) //Position: 0x18F2A / 102186
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_IN_VOLUME(bVar2, bParam1))
		{
			if (!Function_495(bVar2, 1))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_522(bool bParam0, bool bParam1, bool bParam2) //Position: 0x18F7E / 102270
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			AI_SHOOT_TARGET_SET_BONE(bVar1, bParam1, bParam2);
			bVar0++;
		}
	}
	return;
}

void Function_523(bool bParam0, bool bParam1) //Position: 0x18FB9 / 102329
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_524(var uParam0, int iParam1, bool bParam2) //Position: 0x19001 / 102401
{
	int iVar0;
	void fVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	var uVar15;
	bool bVar18;
	
	iVar0 = 0;
	if (!bParam2)
	{
		bVar18 = bLocal_1320;
	}
	else
	{
		bVar18 = *uParam0;
	}
	bVar2 = (*&Local_188 + 1548)[iParam1];
	if (!bParam2)
	{
		SQUADS_MERGE(bLocal_1320, *uParam0);
		SQUAD_GOALS_CLEAR(bLocal_1320);
		Function_341(bLocal_1320);
	}
	fVar1 = 6;
	if (fVar1 >= SQUAD_GET_SIZE(*uParam0))
	{
		fVar1 = SQUAD_GET_SIZE(*uParam0);
	}
	if (!bParam2)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Function_525(Function_526(*uParam0, Global_34573, 1, 0), bLocal_1320);
			iVar0++;
		}
	}
	GET_OBJECT_AXIS(Global_34573, &uVar12, 1);
	GET_VOLUME_CENTER(bVar2, &vVar9);
	Function_254(Local_188.f_3360);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar9, Function_254(Local_188.f_3360), StackVal) };
	VNORMALIZE(&vVar6);
	VNORMALIZE(&uVar12);
	VCROSS(&vVar6, &uVar12, &vVar3);
	VSCALE(&vVar3, 6.0f);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
	FIND_GROUND_INTERSECTION(&vVar3, 5.0f, &vVar3, &uVar15);
	SQUAD_GOAL_ADD_GENERAL_TASK(bVar18, false, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, FIND_NEAREST_COVER_LOCATION(&vVar3, 4.0f, 361.0f, 30.0f, 7), -1.0f, 1.0f);
	VCROSS(&vVar6, &uVar12, &vVar3);
	VSCALE(&vVar3, -6.0f);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
	FIND_GROUND_INTERSECTION(&vVar3, 5.0f, &vVar3, &uVar15);
	SQUAD_GOAL_ADD_GENERAL_TASK(bVar18, true, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, FIND_NEAREST_COVER_LOCATION(&vVar3, 4.0f, 361.0f, 30.0f, 7), -1.0f, 1.0f);
	FIND_GROUND_INTERSECTION(&vVar9, 5.0f, &vVar9, &uVar15);
	SQUAD_GOAL_ADD_GENERAL_TASK(bVar18, 2, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, FIND_NEAREST_COVER_LOCATION(&vVar9, 4.0f, 361.0f, 30.0f, 7), -1.0f, 1.0f);
	if (iParam1 >= 0)
	{
		SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(*uParam0, (10 - iParam1), (*&Local_188 + 1548)[(iParam1 - 1)], 3);
		PRINTSTRING("Added battle vol: ");
		PRINTSTRING(GET_OBJECT_NAME((*&Local_188 + 1548)[(iParam1 - 1)]));
		PRINTNL();
	}
	return;
}

void Function_525(bool bParam0, bool bParam1) //Position: 0x191B5 / 102837
{
	vector3 vVar0;
	
	Function_300(Global_34573);
	Function_254(Local_188.f_3360);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_254(Local_188.f_3360), Function_300(Global_34573), StackVal) };
	VNORMALIZE(&vVar0);
	VSCALE(&vVar0, 2.0f);
	Function_300(Global_34573);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_300(Global_34573), vVar0, StackVal) };
	GET_COVER_LOCATION_BASE_POSITION(FIND_NEAREST_COVER_LOCATION(&vVar0, 2.0f, 1,486f, 80.0f, 7), &vVar0);
	SQUAD_LEAVE(bParam0);
	TASK_CLEAR(bParam0);
	SQUAD_JOIN(bParam0, bParam1);
	MEMORY_ALLOW_SHOOTING(bParam0, false);
	if (!Function_342(bParam0, Global_34573, 6.0f))
	{
		if (!WOULD_ACTOR_BE_VISIBLE(516, &vVar0, 3212836864))
		{
			TELEPORT_ACTOR(bParam0, &vVar0, 1, 1, 1);
		}
	}
	return;
}

bool Function_526(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1923D / 102973
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (bParam2)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar4), iVar5))
			{
				bVar4 = "";
			}
		}
		if (bParam3)
		{
			if (IS_ACTOR_RIDING(bVar4))
			{
				bVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(bVar4) && IS_ACTOR_ALIVE(bVar4))
		{
			fVar3 = Function_462(bVar4, bParam1);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
	}
	return "";
}

var Function_527(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x192F7 / 103159
{
	bool bVar0;
	
	Function_75();
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, Function_53(), Function_528(), vParam1, Function_75());
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	Function_375(bVar0);
	SET_ACTOR_FACTION(bVar0, 19);
	SQUAD_JOIN(bVar0, bParam0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar0, true);
	SET_ACTOR_FROZEN_AFTER_CORPSIFY(bVar0, 1);
	if (bParam4)
	{
		ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
	}
	return bVar0;
}

var Function_528() //Position: 0x1934A / 103242
{
	bool bVar0;
	int iVar1;
	
	bVar0 = RAND_INT_RANGE(false, 2);
	PRINTSTRING("making a new fighter! this guy's actor index is ");
	PRINTINT(bVar0);
	PRINTNL();
	switch (bVar0)
	{
		case 0x00000000:
			iVar1 = 391;
			break;
		
		case 0x00000001:
			iVar1 = 392;
			break;
		
		case 0x00000002:
			iVar1 = 393;
			break;
	}
	return iVar1;
}

void Function_529(bool bParam0, int iParam1, float fParam2) //Position: 0x193C8 / 103368
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = false;
	iVar2 = 0;
	PRINTSTRING(GET_OBJECT_NAME(bParam0));
	PRINTSTRING(" has ");
	PRINTINT(SQUAD_GET_SIZE(bParam0));
	PRINTSTRING(" guys.");
	PRINTNL();
	bVar1 = (SQUAD_GET_SIZE(bParam0) - iParam1);
	if (bVar1 >= 0)
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, false);
		PRINTSTRING(GET_OBJECT_NAME(bParam0));
		PRINTSTRING(" is too big, take away ");
		PRINTINT(bVar1);
		PRINTSTRING(" guys.");
		iVar2 = 0;
		while (iVar2 < (bVar1 - 1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				bVar5 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar5))
				{
					if (!Function_347(bVar5, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if (!Function_342(bVar5, Global_34573, fParam2))
						{
							bVar3 = true;
							bVar4 = bVar5;
						}
					}
					else
					{
						Function_300(bVar5);
						Function_300(Global_34573);
						Function_300(bVar4);
						Function_300(Global_34573);
						if (VDIST(Function_300(bVar5), Function_300(Global_34573)) < VDIST(Function_300(bVar4), Function_300(Global_34573)))
						{
							bVar4 = bVar5;
						}
					}
				}
				bVar0++;
			}
			if (bVar3)
			{
				PRINTSTRING("destroying ");
				PRINTSTRING(GET_ACTOR_NAME(bVar4));
				PRINTNL();
				DESTROY_ACTOR(bVar4);
			}
			else
			{
				PRINTSTRING("releasing ");
				PRINTSTRING(GET_ACTOR_NAME(bVar4));
				PRINTNL();
				SQUAD_LEAVE(bVar4);
				RELEASE_ACTOR(bVar4);
				TASK_FLEE_ACTOR(bVar4, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			}
			iVar2++;
		}
	}
	return;
}

void Function_530(int iParam0) //Position: 0x19537 / 103735
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

void Function_531(bool bParam0, bool bParam1, bool bParam2) //Position: 0x195EB / 103915
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(bParam1) - 1))
				{
					bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (IS_ACTOR_ALIVE(bVar3))
						{
							MEMORY_REPORT_POSITION_AUTO(bVar2, bVar3, bParam2);
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_532(bool bParam0) //Position: 0x1965C / 104028
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_FROZEN_AFTER_CORPSIFY(bVar1, 1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_533() //Position: 0x19697 / 104087
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_188.f_1456 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "counterAttack_2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "ncounter_7", 393, -4389,584f, 33,88335f, 4418,575f, 0.0f, 82,29996f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1456);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 42, 0,001f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	Function_448(bVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(bVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 9, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "ncounter_8", 392, -4385,336f, 34,41043f, 4414,941f, 0.0f, 82,29996f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1456);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	Function_448(bVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(bVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 9, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "counter_11", 392, -4384,464f, 34,2557f, 4413,018f, 0.0f, 82,29996f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1456);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	Function_448(bVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(bVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 9, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "counter_14", 393, -4388,193f, 34,16287f, 4414,616f, 0.0f, 82,29996f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1456);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,61774f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	Function_448(bVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(bVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 9, true);
	return;
}

void Function_534() //Position: 0x199C6 / 104902
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_188.f_1452 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "counterAttack_1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "ncounter_1", 396, -4393,346f, 34,05388f, 4416,401f, 0.0f, 67,86231f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1452);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0,999f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	Function_448(bVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(bVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 9, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "ncounter_2", 391, -4393,194f, 33,88327f, 4414,012f, 0.0f, 67,86231f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1452);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	Function_448(bVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(bVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 9, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "ncounter_3", 393, -4389,387f, 34,19567f, 4412,634f, 0.0f, 67,86231f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1452);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	Function_448(bVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(bVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 9, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "ncounter_4", 392, -4391,626f, 34,3266f, 4409,649f, 0.0f, 67,86231f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1452);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 42, 0,001f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	Function_448(bVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(bVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 9, true);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "ncounter_6", 391, -4389,184f, 33,88334f, 4416,602f, 0.0f, 67,86231f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1452);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	Function_448(bVar0, 0);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 200.0f, 1);
	ADD_BLIP_FOR_ACTOR(bVar0, 322, 0, 2, 0);
	AI_SET_WEAPON_MAX_RANGE(bVar0, 200.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,3f);
	SET_ACTOR_VISION_XRAY(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 9, true);
	return;
}

void Function_535(bool bParam0) //Position: 0x19DB3 / 105907
{
	if (bParam0)
	{
		SQUAD_GOALS_CLEAR(Local_188.f_1120);
		Function_537(1);
		Function_536(Local_188.f_3200, 0);
		Function_536(Local_188.f_3204, 0);
		Function_536(Local_188.f_3252, 1);
		Function_536(Local_188.f_3236, 1);
	}
	else
	{
		SQUAD_GOALS_CLEAR(Local_188.f_1120);
		Function_537(0);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, false, 0, 1);
		TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3200), -1.0f, 1086324736);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, false, 0, 1);
		TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3204), -1.0f, 1086324736);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, true, 0, 1);
		TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3252), -1.0f, 1086324736);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, true, 0, 1);
		TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3236), -1.0f, 1086324736);
		SQUAD_SET_FACTION(Local_188.f_1120, 20);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_188.f_1120, 0);
	}
	return;
}

void Function_536(bool bParam0, bool bParam1) //Position: 0x19E89 / 106121
{
	var uVar0;
	bool bVar3;
	
	GET_VOLUME_CENTER(Local_188.f_1740, &uVar0);
	bVar3 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_OBJECT(false, bParam0, 4, 0, 1);
	TASK_POINT_GUN_AT_COORD(false, &uVar0, -1.0f);
	TASK_SEQUENCE_CLOSE();
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, bParam1, 0, 1);
	TASK_SEQUENCE_PERFORM(false, bVar3);
	TASK_SEQUENCE_RELEASE(bVar3, 1);
	return;
}

void Function_537(bool bParam0) //Position: 0x19ECA / 106186
{
	if (bParam0)
	{
		Function_516(Local_188.f_1120, 9, 0.0f);
		Function_516(Local_188.f_1120, 11, 0.0f);
		Function_516(Local_188.f_1120, 10, 0.0f);
	}
	else
	{
		Function_516(Local_188.f_1120, 9, 50.0f);
		Function_516(Local_188.f_1120, 11, 1,5f);
		Function_516(Local_188.f_1120, 10, 1,5f);
	}
	return;
}

void Function_538(bool bParam0, bool bParam1) //Position: 0x19F26 / 106278
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_539(bool bParam0, int iParam1) //Position: 0x19F66 / 106342
{
	void fVar0;
	
	fVar0 = SQUAD_GET_SIZE(bParam0);
	while (fVar0 >= iParam1)
	{
		DESTROY_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, (SQUAD_GET_SIZE(bParam0) - 1)));
		fVar0 = (fVar0 - 1);
		PRINTSTRING("Removed a guy from ");
		PRINTSTRING(GET_OBJECT_NAME(bParam0));
		PRINTSTRING(", total size is ");
		PRINTINT(SQUAD_GET_SIZE(bParam0));
		PRINTNL();
	}
	return;
}

int Function_540() //Position: 0x19FD4 / 106452
{
	Function_378(&Local_188 + 620, 396, 2, 0);
	Function_378(&Local_188 + 620, 391, 2, 0);
	Function_378(&Local_188 + 620, 393, 2, 0);
	Function_378(&Local_188 + 620, 392, 2, 0);
	if (Function_406(&Local_188 + 620))
	{
		return 1;
	}
	return 0;
}

var Function_541(bool bParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x1A020 / 106528
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bParam0) <= iParam1)
	{
		Function_546(uParam2);
		vVar0 = { StackVal, StackVal, Function_546(uParam2) };
		PRINTSTRING("Got a spawn pos for the new rebel guy: ");
		PRINTVECTOR(vVar0);
		PRINTNL();
		bVar5 = Function_545();
		if (SQUAD_GET_SIZE(bParam0) > 7 && SQUAD_GET_SIZE(bParam0) < 0)
		{
			while (Function_544(bParam0, bVar5) < 0 && iVar6 > 50)
			{
				bVar5 = Function_545();
				iVar6++;
			}
		}
		Function_75();
		bVar3 = CREATE_ACTOR_IN_LAYOUT(Local_188, Function_53(), bVar5, vVar0, Function_75());
		DELETE_ALL_WEAPONS_FROM_ACTOR(bVar3);
		Function_465(bVar3);
		if (bParam3)
		{
			bVar4 = RAND_INT_RANGE(false, 2);
			switch (bVar4)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000002:
					break;
			}
		}
		else
		{
			Function_375(bVar3);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar3, 0);
		AI_BEHAVIOR_SET_ALLOW(bVar3, 0, 0);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 38, -1.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 28, 0.0f);
		SQUAD_JOIN(bVar3, Local_188.f_1120);
		if (SQUAD_IS_VALID(Local_188.f_1160))
		{
			Function_543(bVar3, Local_188.f_1160);
		}
		if (SQUAD_IS_VALID(Local_188.f_1164))
		{
			Function_543(bVar3, Local_188.f_1164);
		}
		if (SQUAD_IS_VALID(Local_188.f_1168))
		{
			Function_543(bVar3, Local_188.f_1168);
		}
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar3, 0);
		Function_448(bVar3, 0);
		SET_ACTOR_FACTION(bVar3, 20);
		if (bParam3)
		{
			ACTOR_PUT_WEAPON_IN_HAND(bVar3, Function_542(bVar3, 46), 1);
		}
		else
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 37, 5.0f);
		}
		AI_SET_WEAPON_MAX_RANGE(bVar3, 90.0f);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar3, true);
		COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(bVar3, 0,2f);
		COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bVar3, 0,1f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 10, 1,5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 11, 0,5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar3, 20, 1.0f);
		return bVar3;
	}
	return "";
}

var Function_542(bool bParam0, int iParam1) //Position: 0x1A1DE / 106974
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_543(bool bParam0, bool bParam1) //Position: 0x1A1EF / 106991
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_IDENTIFY(bParam0, bVar1);
		}
		bVar0++;
	}
	return;
}

int Function_544(bool bParam0, int iParam1) //Position: 0x1A225 / 107045
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (GET_ACTOR_ENUM(bVar2) == iParam1)
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

var Function_545() //Position: 0x1A264 / 107108
{
	bool bVar0;
	int iVar1;
	
	bVar0 = RAND_INT_RANGE(false, 6);
	PRINTSTRING("making a new fighter! this guy's actor index is ");
	PRINTINT(bVar0);
	PRINTNL();
	switch (bVar0)
	{
		case 0x00000000:
			iVar1 = 285;
			break;
		
		case 0x00000001:
			iVar1 = 291;
			break;
		
		case 0x00000002:
			iVar1 = 293;
			break;
		
		case 0x00000003:
			iVar1 = 290;
			break;
		
		case 0x00000004:
			iVar1 = 521;
			break;
		
		case 0x00000005:
			iVar1 = 522;
			break;
		
		case 0x00000006:
			iVar1 = 516;
			break;
	}
	return iVar1;
}

vector3 Function_546(var uParam0) //Position: 0x1A31A / 107290
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	iVar0 = 0;
	bVar1 = false;
	bVar5 = 999999.0f;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		GET_OBJECT_POSITION((*uParam0)[iVar0], &vVar2);
		Function_254(Global_34573);
		if (VDIST(Function_254(Global_34573), vVar2) > bVar5)
		{
			if (!WOULD_ACTOR_BE_VISIBLE(285, &vVar2, 3212836864))
			{
				Function_254(Global_34573);
				bVar5 = VDIST(Function_254(Global_34573), vVar2);
				bVar1 = iVar0;
			}
		}
		iVar0++;
	}
	GET_OBJECT_POSITION((*uParam0)[bVar1], &vVar2);
	PRINTSTRING("Spawned a rebel guy. The nearest reinforcement spot was ");
	PRINTINT(bVar1);
	PRINTSTRING(" at ");
	PRINTVECTOR(vVar2);
	PRINTNL();
	return StackVal, StackVal, vVar2;
}

void Function_547() //Position: 0x1A3ED / 107501
{
	switch (iLocal_1282)
	{
		case 0x00000000:
			if (SQUAD_IS_VALID(Local_188.f_1452))
			{
				Function_548(Local_188.f_1452);
			}
			break;
		
		case 0x00000002:
			if (SQUAD_IS_VALID(Local_188.f_1456))
			{
				Function_548(Local_188.f_1456);
			}
			break;
		
		case 0x00000004:
			iLocal_1282 = 4294967295;
			break;
	}
	iLocal_1282++;
	return;
}

void Function_548(bool bParam0) //Position: 0x1A448 / 107592
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	
	bVar0 = false;
	GET_PATH_POINT(Local_188.f_3328, false, &vVar5);
	if (!DECOR_CHECK_EXIST(bParam0, "nbiInVilla"))
	{
		DECOR_SET_INT(bParam0, "nbiInVilla", false);
	}
	else
	{
		bVar2 = DECOR_GET_INT(bParam0, "nbiInVilla");
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (!Function_151(bVar2, Function_137(bVar0)))
		{
			bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			switch ((bVar0 % 3))
			{
				case 0x00000000:
					bVar3 = Local_188.f_3324;
					break;
				
				case 0x00000001:
					bVar3 = Local_188.f_3328;
					break;
				
				case 0x00000002:
					bVar3 = Local_188.f_3332;
					break;
			}
			Function_300(bVar4);
			if (VDIST(Function_300(bVar4), vVar5) >= 20.0f)
			{
				bVar1 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &vVar5, 2.0f, 4);
				TASK_FOLLOW_PATH(false, bVar3, 4, 0, 1, 1, false);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bVar4, bVar1);
				TASK_SEQUENCE_RELEASE(bVar1, 1);
				Function_76(&bVar2, Function_137(bVar0));
			}
		}
		bVar0++;
	}
	DECOR_SET_INT(bParam0, "nbiInVilla", bVar2);
	return;
}

void Function_549(bool bParam0) //Position: 0x1A55D / 107869
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	fVar5 = 999999.0f;
	bVar0 = Function_552(Local_188.f_1120, Local_188.f_3064, 1);
	bVar6 = false;
	bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1120, false);
	fVar5 = Function_550(bVar1, Local_188.f_3068);
	MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(bVar0);
	MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(bVar1);
	bVar6 = false;
	while (bVar6 < (SQUAD_GET_SIZE(Local_188.f_1120) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1120, bVar6);
		fVar3 = Function_550(bVar2, Local_188.f_3068);
		if ((fVar3 > fVar5 && GET_ACTOR_ENUM(bVar2) == GET_ACTOR_ENUM(bVar0)) && bVar2 == bVar0)
		{
			bVar1 = bVar2;
			fVar5 = fVar3;
		}
		bVar6++;
	}
	if (!IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(Function_388(GET_GRINGO_FROM_OBJECT(Local_188.f_3064), "UseCase1"))))
	{
		if (bParam0)
		{
			Function_254(Local_188.f_3064);
			if (StackVal && !Function_438(StackVal, !Function_347(bVar0, 0x3f800000, 0x42960000, 1, 1, 0), Function_254(Local_188.f_3064), 0x3f800000, 0x42960000, 1, 1, 0))
			{
				SNAP_ACTOR_TO_GRINGO(bVar0, Local_188.f_3064, "UseCase1", true, 0, 0);
			}
		}
		bVar4 = TASK_SEQUENCE_OPEN();
		TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_188.f_3064), "Usecase1", 4294967295, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bVar0, bVar4);
		TASK_SEQUENCE_RELEASE(bVar4, 1);
		TASK_PRIORITY_SET(bVar0, false);
	}
	if (!IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(Function_388(GET_GRINGO_FROM_OBJECT(Local_188.f_3068), "UseCase2"))))
	{
		if (bParam0)
		{
			Function_254(Local_188.f_3068);
			if (StackVal && !Function_438(StackVal, !Function_347(bVar1, 0x3f800000, 0x42960000, 1, 1, 0), Function_254(Local_188.f_3068), 0x3f800000, 0x42960000, 1, 1, 0))
			{
				SNAP_ACTOR_TO_GRINGO(bVar1, Local_188.f_3068, "UseCase2", true, 0, 0);
			}
		}
		bVar4 = TASK_SEQUENCE_OPEN();
		TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_188.f_3068), "Usecase2", 4294967295, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bVar1, bVar4);
		TASK_SEQUENCE_RELEASE(bVar4, 1);
		TASK_PRIORITY_SET(bVar1, false);
	}
	return;
}

float Function_550(bool bParam0, bool bParam1) //Position: 0x1A73D / 108349
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_209(bParam0);
			vVar0 = { StackVal, StackVal, Function_209(bParam0) };
			Function_551(bParam1);
			vVar3 = { StackVal, StackVal, Function_551(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_551(bool bParam0) //Position: 0x1A7DD / 108509
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

bool Function_552(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1A849 / 108617
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = -1.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (bParam2)
		{
			if (AI_IMPAIRMENT_MASK_MATCHES(iVar5, AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar4)))
			{
				bVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(bVar4) && IS_ACTOR_ALIVE(bVar4))
		{
			fVar3 = Function_550(bVar4, bParam1);
			if (fVar3 > fVar2 || bVar1 != 4294967295)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return bVar4;
	}
	return "";
}

void Function_553() //Position: 0x1A8E5 / 108773
{
	if (iLocal_1040 < 3 && iLocal_1040 > 105)
	{
		Function_472(&bLocal_1176, 60.0f, 200.0f, bLocal_1058, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1049, 0, 0, 0, 325, 1);
		if (iLocal_1040 <= 10)
		{
			if (!Function_342(bLocal_1058, Global_34573, 60.0f))
			{
				Function_355(7, 1, 1);
			}
			else
			{
				Function_355(7, 0, 1);
			}
		}
		if (iLocal_1294)
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1740))
			{
				iLocal_1294 = 0;
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
			}
		}
		iLocal_1288++;
		if (iLocal_1288 > 5)
		{
			iLocal_1288 = 0;
		}
		if (iLocal_1288 == 0)
		{
			if (!DECOR_CHECK_EXIST(bLocal_1058, "bInVilla"))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_1058, (*&Local_188 + 1512)[4]))
				{
					DECOR_SET_BOOL(bLocal_1058, "bInVilla", true);
					if (DECOR_CHECK_EXIST(bLocal_1058, "bEnterVillaRecovery"))
					{
						DECOR_REMOVE(bLocal_1058, "bEnterVillaRecovery");
					}
				}
			}
		}
		if (iLocal_1288 == 1)
		{
			if (SQUAD_IS_VALID(Local_188.f_1168))
			{
				Function_570(Local_188.f_1168, Local_188.f_1120);
			}
		}
		if (iLocal_1288 == 2)
		{
			Function_541(Local_188.f_1120, 6, &Local_188 + 2592, 0);
		}
	}
	switch (iLocal_1040)
	{
		case 0x00000000:
			Function_320(0);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			iLocal_1293 = 1;
			bLocal_1279 = false;
			bLocal_1280 = false;
			iLocal_1281 = 0;
			iLocal_1282 = 0;
			SET_ACTOR_HEALTH(bLocal_1058, GET_ACTOR_MAX_HEALTH(bLocal_1058));
			CLEAR_ACTOR_MIN_SPEED(bLocal_1058);
			iLocal_1294 = 1;
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_1508)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_1508));
			}
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 0.0f);
			Function_319(&Local_188 + 1084, 1);
			if (SQUAD_IS_VALID(Local_188.f_1160))
			{
				Function_240(&Local_188 + 1160);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			if (iLocal_1061[4] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_315();
				bLocal_1060 = Function_313(StackVal, StackVal, *(&Local_188 + 2028[06]), 0, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_188 + 2028[06]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_188 + 2028[16]), 1, true, 1);
				GIVE_WEAPON_TO_ACTOR(bLocal_1058, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_1058, 0);
				Function_241(&bLocal_1167);
				iLocal_1040 = 1;
			}
			else
			{
				Function_241(&bLocal_1167);
				iLocal_1040 = 2;
			}
			Function_471(Local_188.f_1120);
			break;
		
		case 0x00000001:
			if (((STREAMING_IS_WORLD_LOADED() && Function_569()) && Function_377()) && (Function_312(bLocal_1060) || bLocal_1060 != 4294967295))
			{
				if (Function_470())
				{
					if (Function_406(&bLocal_1106))
					{
						Function_469();
						Function_468();
						Function_241(&bLocal_1167);
						iLocal_1040 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_253(bLocal_1039);
			Function_306(StackVal, StackVal, Function_253(bLocal_1039), bLocal_1039, Global_30633[0], Function_256(bLocal_1039), 0);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_1058, 13, false);
			if (IS_OBJECT_VALID(Local_188.f_3364))
			{
				DESTROY_OBJECT(Local_188.f_3364);
			}
			TOGGLE_COVER_PROPS(0);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_3360)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_3360));
			}
			if (!SQUAD_IS_VALID(Local_188.f_1168))
			{
				Function_568();
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1168, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1168) | 2048);
				if (!DECOR_CHECK_EXIST(Local_188.f_1168, "bBlipped"))
				{
					Function_453(Local_188.f_1168, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
			}
			if (SQUAD_IS_VALID(Local_188.f_1448))
			{
				SQUADS_MERGE(Local_188.f_1448, Local_188.f_1168);
			}
			if (!SQUAD_IS_VALID(Local_188.f_1120))
			{
				Function_464();
				Function_461(StackVal, StackVal, StackVal, StackVal, Local_188.f_1120, *(&Local_188 + 2028[26]), *(&Local_188 + 2028[26] + 12), 5, 2.0f, 1.0f, 0, 0);
				Function_460(Local_188.f_1120, 0);
				Function_539(Local_188.f_1120, 6);
			}
			SQUAD_GOALS_CLEAR(Local_188.f_1120);
			SQUAD_GOALS_CLEAR(Local_188.f_1168);
			Function_532(Local_188.f_1120);
			Function_567(Local_188.f_1168);
			Function_532(Local_188.f_1168);
			TASK_SHOOT_ENEMIES_FROM_COVER(FIND_ACTOR_IN_LAYOUT(Local_188, "nofficer_1"), GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3212), -1.0f, 1086324736);
			SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(1);
			Function_439(Local_188.f_1120, 0);
			Function_516(Local_188.f_1120, 62, 1,5f);
			Function_517(Local_188.f_1120, 16, 1);
			SQUAD_GOALS_CLEAR(Local_188.f_1120);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3232), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3140), -1.0f, 1086324736);
			Function_566("cover_low119", Local_188.f_3056, 1);
			Function_566("cover_low118", Local_188.f_3060, 1);
			Function_566("ncover_low", Local_188.f_3056, 1);
			Function_566("cover_villa_25", Local_188.f_3056, 1);
			Function_566("cover_villa_26", Local_188.f_3060, 1);
			SQUAD_SET_FACTION(Local_188.f_1120, 20);
			Function_565();
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_188.f_1120, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_188.f_1168, 0);
			Function_355(7, 0, 1);
			Function_530(&(Local_1222[117]));
			Function_348(&(Local_1222[017]), bLocal_1058, "RebelLeader", 0, 0x5f5e100, 1);
			Function_348(&(Local_1222[117]), Local_188.f_1120, "rebel05_rebel", 0, 0x5f5e100, 1);
			Function_442(&(Local_1222[117]), 2);
			Function_442(&(Local_1222[117]), 8);
			Function_442(&(Local_1222[117]), 128);
			Function_441(&(Local_1222[117]), 3);
			Function_529(Local_188.f_1120, 6, 0x40a00000);
			Function_241(&bLocal_1167);
			iLocal_1040 = 6;
			break;
		
		case 0x00000006:
			if (Function_563(Local_188.f_1120, 1))
			{
				if (!HUD_IS_FADED())
				{
					Function_562();
					STREAMING_UNLOAD_BOUNDS();
					Function_241(&bLocal_1167);
					iLocal_1040 = 7;
				}
				else if (!HUD_IS_FADING())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
			}
			break;
		
		case 0x00000007:
			if (Function_290(&bLocal_1167) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_340("Rebel05_objVilla_kill", 0x40f00000, 1, 2, 0, 0, 0);
				Function_241(&bLocal_1167);
				iLocal_1040 = 8;
			}
			break;
		
		case 0x00000008:
			Function_561();
			if (iLocal_1288 == 4)
			{
				if (Function_290(&bLocal_1167) <= 30.0f)
				{
					Function_560(0, 1);
				}
			}
			if (iLocal_1288 == 3)
			{
				if (DECOR_CHECK_EXIST(bLocal_1058, "bInVilla"))
				{
					if (GET_TASK_STATUS(bLocal_1058, 0) != 2 || GET_TASK_STATUS(bLocal_1058, 0) != 0)
					{
						if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1168) < 3)
						{
							TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_1058, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3228), -1.0f, 1086324736);
							Function_439(Local_188.f_1120, 1);
							Function_516(Local_188.f_1120, 62, 0,5f);
							Function_517(Local_188.f_1120, 16, 0);
							SQUAD_GOALS_CLEAR(Local_188.f_1120);
							SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1120, false, (*&Local_188 + 1512)[1], 1);
							SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1120, true, (*&Local_188 + 1512)[3], 2);
							SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1120, 2, (*&Local_188 + 1512)[0], 4294967295);
							Function_241(&bLocal_1167);
							iLocal_1040 = 9;
						}
					}
					else
					{
						TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_1058, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3248), -1.0f, 1086324736);
					}
				}
			}
			break;
		
		case 0x00000009:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1168) < 0)
			{
				iLocal_1293 = 0;
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_417(Local_188.f_1168);
				if (!Function_502(StackVal, StackVal, bLocal_1058, *(&Local_188 + 2180[26]), 25.0f))
				{
					if (DECOR_CHECK_EXIST(bLocal_1058, "bInVilla"))
					{
						DECOR_REMOVE(bLocal_1058, "bInVilla");
					}
				}
				SQUAD_GOALS_CLEAR(Local_188.f_1120);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_188.f_3084), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_188.f_3092), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_188.f_3100), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_188.f_3104), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_188.f_3108), "UseCase1", 4294967295, 2);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, 2, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_188.f_3112), "UseCase1", 4294967295, 2);
				Function_241(&bLocal_1167);
				iLocal_1040 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_290(&bLocal_1167) <= 2.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_340("Rebel05_meet_at_door", 0x40f00000, 1, 2, 0, 0, 0);
				Function_559();
				Function_355(7, 1, 1);
				bLocal_1279 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(false, Local_188.f_3044, 4, 0, 1);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_1058, bLocal_1279);
				TASK_SEQUENCE_RELEASE(bLocal_1279, 1);
				Function_241(&bLocal_1167);
				iLocal_1040 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_290(&bLocal_1167) <= 5.0f)
			{
				Function_560(1, 0);
			}
			else
			{
				Function_560(0, 0);
			}
			if (Function_558(bLocal_1058, Local_188.f_3044, 4.0f) && Function_342(bLocal_1058, Global_34573, 7.0f))
			{
				HUD_CLEAR_OBJECTIVE();
				Function_557();
				bLocal_1279 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 5,5f, 0, 0);
				TASK_GO_TO_COORD_AND_STAY(StackVal, false, &Local_188 + 2328[06], 2);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_1058, bLocal_1279);
				TASK_SEQUENCE_RELEASE(bLocal_1279, 1);
				Function_549(0);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_1058, 1);
				Function_241(&bLocal_1167);
				iLocal_1040 = 12;
			}
			else if (Function_502(StackVal, StackVal, bLocal_1058, *(&Local_188 + 2180[26]), 1.0f))
			{
				if (Function_290(&bLocal_1173) <= 8.0f)
				{
					Function_556();
					RESET_ANIM_SET_FOR_ACTOR(bLocal_1058, 1);
					SET_ANIM_SET_FOR_ACTOR(bLocal_1058, "stand_ambient", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_1058, "stand_ambient/one_hnd");
					Function_490(bLocal_1058, Global_34573);
					Function_241(&bLocal_1173);
				}
			}
			break;
		
		case 0x0000000C:
			if (((IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(Function_388(GET_GRINGO_FROM_OBJECT(Local_188.f_3064), "Usecase1"))) && IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(Function_388(GET_GRINGO_FROM_OBJECT(Local_188.f_3068), "Usecase2")))) && Function_290(&bLocal_1167) <= 8.0f) || Function_290(&bLocal_1167) <= 12.0f)
			{
				Function_555();
				SQUAD_GOALS_CLEAR(Local_188.f_1120);
				Function_535(1);
				Function_241(&bLocal_1167);
				iLocal_1040 = 13;
			}
			else if (Function_290(&bLocal_1167) <= 15.0f)
			{
				Function_242(&bLocal_1167, 10.0f);
				Function_549(1);
			}
			break;
		
		case 0x0000000D:
			if (Function_290(&bLocal_1167) <= 6.0f)
			{
				Function_554();
				Function_241(&bLocal_1167);
				iLocal_1040 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_290(&bLocal_1167) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
				iLocal_1061[5] = 1;
				Function_241(&bLocal_1167);
				bLocal_1039 = 6;
				iLocal_1040 = 0;
			}
			break;
	}
	return;
}

void Function_554() //Position: 0x1B489 / 111753
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_defendGate", "Rebel05_defendGate", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_555() //Position: 0x1B4D6 / 111830
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_rebelsUpHill", "Rebel05_rebelsUpHill", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_556() //Position: 0x1B527 / 111911
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_runsAway_mansion", "Rebel05_runsAway_mansion", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_557() //Position: 0x1B580 / 112000
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_breakMansionDoor", "Rebel05_breakMansionDoor", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_558(bool bParam0, bool bParam1, float fParam2) //Position: 0x1B5D9 / 112089
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_209(bParam0);
			Function_551(bParam1);
			if (VDIST(Function_209(bParam0), Function_551(bParam1)) >= fParam2)
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

void Function_559() //Position: 0x1B6F3 / 112371
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(Local_188.f_1120) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1120, bVar0);
		if (!IS_ACTOR_IN_VOLUME(bVar1, Local_188.f_1544))
		{
			if (Function_347(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				RELEASE_ACTOR(bVar1);
			}
			else
			{
				DESTROY_ACTOR(bVar1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_560(bool bParam0, bool bParam1) //Position: 0x1B753 / 112467
{
	bool bVar0;
	var uVar1;
	
	if (!DECOR_CHECK_EXIST(bLocal_1058, "bInVilla"))
	{
		if (!DECOR_CHECK_EXIST(bLocal_1058, "bEnterVillaRecovery"))
		{
			DECOR_SET_BOOL(bLocal_1058, "bEnterVillaRecovery", true);
			if (bParam0)
			{
				GET_PATH_POINT(Local_188.f_3328, false, &uVar1);
				TELEPORT_ACTOR(bLocal_1058, &uVar1, 1, 1, 1);
			}
			bVar0 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_188.f_3324, 4, 0, 1, 1, false);
			if (bParam1)
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3248), -1.0f, 1086324736);
			}
			else
			{
				TASK_GO_TO_COORD(false, &Local_188 + 2180[26], 4);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
			}
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_1058, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
		}
	}
	return;
}

void Function_561() //Position: 0x1B81F / 112671
{
	if ((Function_290(&bLocal_1179) <= 10.0f && !IS_SCRIPTED_CONVERSATION_ONGOING()) && !HUD_IS_SHOWING_OBJECTIVE())
	{
		Function_241(&bLocal_1179);
		switch (RAND_INT_RANGE(false, 2))
		{
			case 0x00000000:
				SAY_SINGLE_LINE_SCRIPTED(bLocal_1058, "Rebel05_moveAssaultForward", false, 0, 0, 0, 0, 0);
				break;
			
			case 0x00000001:
				SAY_SINGLE_LINE_SCRIPTED(bLocal_1058, "Rebel05_moveForward_taunt", false, 0, 0, 0, 0, 0);
				break;
			
			case 0x00000002:
				SAY_SINGLE_LINE_SCRIPTED(bLocal_1058, "Rebel05_assaultForward_mansion", false, 0, 0, 0, 0, 0);
				break;
			}
	}
	return;
}

void Function_562() //Position: 0x1B8E7 / 112871
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_mansionGrounds", "Rebel05_mansionGrounds", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_563(bool bParam0, int iParam1) //Position: 0x1B93C / 112956
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (!Function_564(bVar1, iParam1, 0x41700000))
				{
					return 0;
				}
			}
			return 0;
		}
		return 0;
		bVar0++;
	}
	return 1;
}

bool Function_564(bool bParam0, bool bParam1, float fParam2) //Position: 0x1B99B / 113051
{
	float fVar0;
	bool bVar1;
	
	if (Function_40() || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(bParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(bParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(bParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= fParam2)
		{
			DECOR_REMOVE(bParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(bParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

void Function_565() //Position: 0x1BA38 / 113208
{
	bool bVar0;
	var uVar1;
	
	Function_514(Local_188.f_1120, 4);
	GET_PATH_POINT(Local_188.f_3324, false, &uVar1);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, 5,5f, 0, 0);
	TASK_GO_NEAR_COORD(false, &uVar1, 2.0f, 4);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_188.f_3324, 4, 0, 1, 1, false);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3248), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_1058, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_566(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1BA9B / 113307
{
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, bParam2, 0, 1);
	TASK_SHOOT_FROM_COVER(false, bParam1, GET_COVER_LOCATION_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_188, bParam0)), -1.0f, 1086324736);
	return;
}

void Function_567(bool bParam0) //Position: 0x1BAC4 / 113348
{
	SQUAD_GOALS_CLEAR(bParam0);
	Function_341(bParam0);
	iLocal_1377 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, 2, (*&Local_188 + 1512)[1], 4);
	iLocal_1378 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, 3, (*&Local_188 + 1512)[2], 2);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(bParam0, 4, (*&Local_188 + 1512)[6], 4294967295);
	return;
}

void Function_568() //Position: 0x1BB08 / 113416
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_188.f_1168 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "VillaSoldiers"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "porch1_4", 391, -4350,381f, 39,21351f, 4352,25f, 0.0f, 110,8233f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	Function_448(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "static_2", 391, -4350,042f, 39,15297f, 4362,039f, 0.0f, -15,79169f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	Function_448(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "cover_5", 392, -4346,836f, 39,15297f, 4361,506f, 0.0f, -22,26162f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	Function_448(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "porch1_5", 392, -4352,991f, 39,15294f, 4360,758f, 0.0f, 94,00013f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 43, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	Function_448(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "nofficer_1", 395, -4344,344f, 42,01784f, 4342,185f, 0.0f, 177,4538f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0,999f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	Function_448(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "porch1_6", 392, -4350,854f, 39,21351f, 4351,005f, 0.0f, 110,8233f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1168);
	GIVE_WEAPON_TO_ACTOR(bVar0, 43, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	Function_448(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	return;
}

int Function_569() //Position: 0x1BE3F / 114239
{
	Function_378(&Local_188 + 580, 391, 2, 0);
	Function_378(&Local_188 + 580, 392, 2, 0);
	Function_378(&Local_188 + 580, 395, 2, 0);
	if (Function_406(&Local_188 + 580))
	{
		return 1;
	}
	return 0;
}

void Function_570(bool bParam0, bool bParam1) //Position: 0x1BE7D / 114301
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (bParam1 == Local_188.f_1120)
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
			if (Function_558(bVar1, Local_188.f_3140, 2.0f))
			{
				AI_ENABLE_PERCEPTION(bVar1);
			}
			if (Function_558(bVar1, Local_188.f_3232, 2.0f))
			{
				AI_ENABLE_PERCEPTION(bVar1);
			}
			bVar0++;
		}
	}
	if ((Function_571(bParam0, bLocal_1376, (*&Local_188 + 1512)[0]) || Function_571(bParam0, iLocal_1377, (*&Local_188 + 1512)[1])) || Function_571(bParam0, iLocal_1378, (*&Local_188 + 1512)[2]))
	{
		if (SQUAD_GOAL_IS_VALID(bLocal_1379))
		{
			SQUAD_GOAL_REMOVE(bParam1, bLocal_1379);
		}
	}
	return;
}

int Function_571(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1BF1E / 114462
{
	if (IS_ACTOR_IN_VOLUME(Global_34573, bParam2))
	{
		if (SQUAD_GOAL_IS_VALID(bParam1))
		{
			SQUAD_GOAL_REMOVE(bParam0, bParam1);
			return 1;
		}
	}
	return 0;
}

void Function_572() //Position: 0x1BF42 / 114498
{
	var uVar0;
	
	if (iLocal_1040 < 3 && iLocal_1040 > 105)
	{
		if (iLocal_1040 <= 11)
		{
			if (SQUAD_IS_VALID(Local_188.f_1120))
			{
				if (!Function_608(Local_188.f_1120, Local_188.f_1740, 11.0f) && Function_607())
				{
					Function_241(&bLocal_1167);
					iLocal_1040 = 11;
				}
			}
		}
		if (iLocal_1040 <= 12)
		{
			if (Function_606())
			{
				Function_241(&bLocal_1167);
				iLocal_1040 = 12;
			}
			else
			{
				Local_188.f_3364 = Function_604(&Local_188 + 3364, Local_188.f_2992, Local_188.f_2996, &bLocal_1325);
			}
			if (iLocal_1040 >= 6)
			{
				Function_602();
			}
		}
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1740))
		{
			if (!DECOR_CHECK_EXIST(Local_188.f_1168, "bBlipped"))
			{
				Function_568();
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1168, false, 1, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				Function_453(Local_188.f_1168, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				DECOR_SET_BOOL(Local_188.f_1168, "bBlipped", true);
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1168, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1168) | 2048);
			}
		}
		if (iLocal_1040 < 7 && iLocal_1040 > 15)
		{
			if (!Function_499(Global_34573, Local_188.f_3360))
			{
				if (Function_342(Global_34573, bLocal_1058, (60.0f / 2.0f)))
				{
					Function_355(7, 0, 1);
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_3360)))
					{
						ADD_BLIP_FOR_OBJECT(Local_188.f_3360, 335, 0f, 2, 0);
					}
				}
				else
				{
					Function_472(&bLocal_1176, (60.0f / 2.0f), (200.0f / 3.0f), bLocal_1058, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1049, 0, 0, 0, 325, 1);
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_3360)))
					{
						REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_3360));
					}
					Function_355(7, 1, 1);
				}
			}
			else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_3360)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_3360));
			}
		}
		uVar0 = uVar0;
	}
	switch (iLocal_1040)
	{
		case 0x00000000:
			Function_320(0);
			iLocal_1293 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			bLocal_1279 = false;
			bLocal_1280 = false;
			iLocal_1281 = 0;
			iLocal_1282 = 0;
			SET_ACTOR_HEALTH(bLocal_1058, GET_ACTOR_MAX_HEALTH(bLocal_1058));
			CLEAR_ACTOR_MIN_SPEED(bLocal_1058);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_1508)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_1508));
			}
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 0.0f);
			Function_319(&Local_188 + 1084, 1);
			if (SQUAD_IS_VALID(Local_188.f_1160))
			{
				Function_240(&Local_188 + 1160);
			}
			if (SQUAD_IS_VALID(Local_188.f_1164))
			{
				Function_240(&Local_188 + 1164);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			if (iLocal_1061[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_315();
				bLocal_1060 = Function_313(StackVal, StackVal, *(&Local_188 + 2028[06]), 0, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_188 + 2028[06]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_188 + 2028[16]), 1, true, 1);
				GIVE_WEAPON_TO_ACTOR(bLocal_1058, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_1058, 0);
				Function_241(&bLocal_1167);
				iLocal_1040 = 1;
			}
			else
			{
				Function_241(&bLocal_1167);
				iLocal_1040 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_312(bLocal_1060) || bLocal_1060 != 4294967295)
				{
					if (Function_601() && Function_377())
					{
						if (Function_470())
						{
							if (Function_406(&bLocal_1106))
							{
								Function_469();
								Function_241(&bLocal_1167);
								iLocal_1040 = 2;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_253(bLocal_1039);
			Function_306(StackVal, StackVal, Function_253(bLocal_1039), bLocal_1039, Global_30633[0], Function_256(bLocal_1039), 0);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
			TOGGLE_COVER_PROPS(0);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_1768)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_1768));
			}
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_1058, 13, false);
			if (iLocal_1061[3] == 0)
			{
				Function_464();
				Function_461(StackVal, StackVal, StackVal, StackVal, Local_188.f_1120, *(&Local_188 + 2028[26]), *(&Local_188 + 2028[26] + 12), 5, 2.0f, 1.0f, 0, 0);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_188.f_1120, 0);
				Function_600(Local_188.f_1120);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1120, false, Local_188.f_1760, 4294967295);
			}
			Function_529(Local_188.f_1120, 6, 0x40a00000);
			Function_471(Local_188.f_1120);
			SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_188.f_1120, 0, Local_188.f_1796, 2, 1);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_460(Local_188.f_1120, 0);
			Function_599(Local_188.f_1120, 0);
			Function_222(bLocal_1303, 1);
			Function_222(bLocal_1304, 1);
			CLOSE_DOOR_FAST(bLocal_1303);
			CLOSE_DOOR_FAST(bLocal_1304);
			Function_598();
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1448, 10, 0, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1448, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1448) | 2048);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_188.f_1120, 0);
			Function_532(Local_188.f_1120);
			SQUAD_SET_FACTION(Local_188.f_1120, 20);
			Function_348(&(Local_1222[017]), bLocal_1058, "RebelLeader", 0, 0x5f5e100, 1);
			Function_530(&(Local_1222[117]));
			Function_348(&(Local_1222[117]), Local_188.f_1120, "rebel05_rebel", 0, 0x5f5e100, 1);
			iLocal_1293 = 0;
			bLocal_1325 = CREATE_POINT_IN_LAYOUT(Local_188, "oTracker_1", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
			Function_241(&bLocal_1167);
			iLocal_1040 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!iLocal_1061[3])
				{
					SQUAD_GOALS_CLEAR(Local_188.f_1120);
					Function_597(1);
				}
				ATTACH_OBJECTS(bLocal_1325, Local_188.f_3364, "", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				Function_596();
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_355(7, 1, 1);
				Function_241(&bLocal_1167);
				iLocal_1040 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_290(&bLocal_1167) <= 5,5f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_595(Local_188.f_1120, 0);
				if (!Function_499(Global_34573, Local_188.f_3360))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_340("Rebel05_obj_MountGatling", 0x40f00000, 1, 2, 0, 0, 0);
				}
				ADD_BLIP_FOR_OBJECT(Local_188.f_3360, 335, 0f, 2, 0);
				Function_355(7, 0, 1);
				Function_593();
				Function_241(&bLocal_1167);
				iLocal_1040 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_499(Global_34573, Local_188.f_3360) || Function_290(&bLocal_1167) <= 8.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_592();
				Function_241(&bLocal_1167);
				iLocal_1040 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_290(&bLocal_1167) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_591();
				Function_590();
				Function_241(&bLocal_1167);
				iLocal_1040 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_290(&bLocal_1167) <= 7.0f)
			{
				Function_130("Rebel05_obj_waitKegs", 0x41200000, 1, 0, 2, 1, 0);
				Function_241(&bLocal_1167);
				iLocal_1040 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!IS_OBJECT_VALID(Local_188.f_3364))
			{
			}
			if (!Function_608(Local_188.f_1120, Local_188.f_1740, 11.0f))
			{
				if (Function_607())
				{
					if (!Function_558(bLocal_1058, Local_188.f_1740, 9.0f))
					{
						Function_589();
						Function_588(Local_188.f_1120, 1);
						TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_1058, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3188), -1.0f, 1086324736);
						Function_241(&bLocal_1167);
						Function_241(&bLocal_1173);
						iLocal_1040 = 12;
					}
					else
					{
						TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_1058, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3188), -1.0f, 1086324736);
					}
				}
			}
			if (!Function_499(Global_34573, Local_188.f_3360))
			{
				if (Function_290(&bLocal_1167) <= 8.0f)
				{
					Function_585(&bLocal_1176, (8.0f * 2.0f), "Rebel05_obj_MountGatling", 7,5f, 2, 0);
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_606())
			{
				if (IS_OBJECT_VALID(Local_188.f_3364))
				{
					DESTROY_OBJECT(Local_188.f_3364);
				}
				Function_468();
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_584(Local_188.f_1120, 0);
				Function_341(Local_188.f_1120);
				iLocal_1293 = 1;
				Function_530(&(Local_1222[117]));
				Function_348(&(Local_1222[117]), Local_188.f_1120, "rebel05_rebel", 0, 0x5f5e100, 1);
				Function_442(&(Local_1222[117]), 2);
				Function_442(&(Local_1222[117]), 8);
				Function_442(&(Local_1222[117]), 4);
				Function_442(&(Local_1222[117]), 32);
				Function_441(&(Local_1222[117]), 3);
				DESTROY_OBJECT(Local_188.f_2992);
				DESTROY_OBJECT(Local_188.f_2996);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_583(1);
				Function_537(0);
				Function_582(Local_188.f_1120, 1);
				DESTROY_OBJECT(bLocal_1303);
				DESTROY_OBJECT(bLocal_1304);
				Function_581();
				SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(1);
				Function_530(&(Local_1222[217]));
				DECOR_REMOVE(Local_188.f_1120, "aCarry1");
				DECOR_REMOVE(Local_188.f_1120, "aCarry2");
				iLocal_1294 = 1;
				Function_441(&(Local_1222[117]), 3);
				Function_241(&bLocal_1167);
				iLocal_1040 = 13;
			}
			else
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_3364)))
				{
					if (Function_290(&bLocal_1167) <= 4.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_188.f_3364, 322, 0f, 2, 0), "rebel05_tntLabel");
						HUD_CLEAR_OBJECTIVE();
						Function_340("Rebel05_objGates", 0x40f00000, 1, 2, 0, 0, 0);
					}
				}
				if (Function_290(&bLocal_1167) <= 9.0f)
				{
					Function_580();
					Function_241(&bLocal_1167);
				}
			}
			break;
		
		case 0x0000000D:
			Function_561();
			if ((Function_290(&bLocal_1167) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING()) && iLocal_1294)
			{
				iLocal_1294 = 0;
				HUD_CLEAR_OBJECTIVE();
				Function_340("Rebel05_objGates_kill", 0x40f00000, 1, 2, 0, 0, 0);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1448) < 1)
			{
				Function_577(3);
				Function_576(Local_188.f_1448, 0);
				Function_575();
				Function_241(&bLocal_1167);
				iLocal_1040 = 14;
			}
			break;
		
		case 0x0000000E:
			Function_561();
			if ((Function_290(&bLocal_1167) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING()) && iLocal_1294)
			{
				iLocal_1294 = 0;
				HUD_CLEAR_OBJECTIVE();
				Function_340("Rebel05_objGates_kill", 0x40f00000, 1, 2, 0, 0, 0);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1448) < 2)
			{
				Function_241(&bLocal_1167);
				iLocal_1040 = 15;
			}
			break;
		
		case 0x0000000F:
			STREAMING_LOAD_BOUNDS(*(&Local_188 + 2180[36]), 20.0f, 0);
			if ((Function_290(&bLocal_1167) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING()) && iLocal_1294)
			{
				iLocal_1294 = 0;
				HUD_CLEAR_OBJECTIVE();
				Function_340("Rebel05_objGates_kill", 0x40f00000, 1, 2, 0, 0, 0);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1448) < 1)
			{
				Function_241(&bLocal_1167);
				iLocal_1040 = 16;
			}
			break;
		
		case 0x00000010:
			if (Function_290(&bLocal_1167) <= 2.0f)
			{
				Function_574();
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_516(Local_188.f_1120, 62, 0,5f);
				Function_439(Local_188.f_1120, 1);
				Function_573(Local_188.f_1120);
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_3360)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_3360));
				}
				Function_241(&bLocal_1167);
				iLocal_1040 = 17;
			}
			break;
		
		case 0x00000011:
			if (Function_290(&bLocal_1167) < 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_241(&bLocal_1167);
				iLocal_1040 = 106;
			}
			break;
		
		case 0x0000006A:
			SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
			iLocal_1061[4] = 1;
			Function_241(&bLocal_1167);
			bLocal_1039 = 5;
			iLocal_1040 = 0;
			break;
	}
	return;
}

void Function_573(bool bParam0) //Position: 0x1CAFA / 117498
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			AI_GOAL_SHOOT_CLEAR(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_574() //Position: 0x1CB3B / 117563
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_ArmyRetreatsVilla", "Rebel05_ArmyRetreatsVilla", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_575() //Position: 0x1CB96 / 117654
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_JonBlowsGate", "Rebel05_JonBlowsGate", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_576(bool bParam0, bool bParam1) //Position: 0x1CBE7 / 117735
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
			SET_ACTOR_ALLOW_DISARM(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_577(int iParam0) //Position: 0x1CC25 / 117797
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	
	iVar0 = 0;
	iVar3 = Local_188.f_2592;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		iVar1 = (iVar0 % (iVar3 - 1)) + 1;
		GET_OBJECT_POSITION((*&Local_188 + 2592)[iVar1], &vVar4);
		while (WOULD_ACTOR_BE_VISIBLE(379, &vVar4, 3212836864) && iVar1 > (iVar3 - 1))
		{
			iVar1++;
			GET_OBJECT_POSITION((*&Local_188 + 2592)[iVar1], &vVar4);
		}
		Function_527(StackVal, StackVal, Local_188.f_1448, vVar4, 1);
		iVar0++;
	}
	if (Function_579(Local_188.f_1448, Local_188.f_1784) <= Function_579(Local_188.f_1448, Local_188.f_1788))
	{
		bVar7 = Local_188.f_1784;
		bVar8 = Local_188.f_3336;
	}
	else
	{
		bVar7 = Local_188.f_1788;
		bVar8 = Local_188.f_3340;
	}
	iVar2 = (3 - Function_579(Local_188.f_1448, bVar7));
	Function_578(Local_188.f_1448, bVar8, iVar2);
	return;
}

void Function_578(bool bParam0, bool bParam1, int iParam2) //Position: 0x1CCF8 / 118008
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	vector3 vVar8;
	var uVar11;
	
	bVar0 = false;
	iVar1 = 0;
	GET_PATH_POINT(bParam1, false, &vVar8);
	iVar1 = 0;
	while (iVar1 < (iParam2 - 1))
	{
		bVar6 = 99999,9f;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar5 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			Function_300(bVar5);
			bVar7 = VDIST(vVar8, Function_300(bVar5));
			if (bVar7 > bVar6)
			{
				if (!Function_151(bVar4, Function_137(bVar0)))
				{
					bVar6 = bVar7;
					bVar2 = bVar0;
				}
			}
			bVar0++;
		}
		bVar5 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar2);
		GET_PATH_POINT(bParam1, false, &uVar11);
		bVar3 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_COORD(false, &uVar11, 2.0f, 4);
		TASK_FOLLOW_PATH(false, bParam1, 4, 0, 1, 1, false);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bVar5, bVar3);
		TASK_SEQUENCE_RELEASE(bVar3, 1);
		Function_76(&bVar4, Function_137(bVar2));
		Function_300(bVar5);
		vVar8 = { StackVal, StackVal, Function_300(bVar5) };
		iVar1++;
	}
	return;
}

int Function_579(bool bParam0, bool bParam1) //Position: 0x1CDC6 / 118214
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_IN_VOLUME(bVar2, bParam1))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1++;
			}
		}
		bVar0++;
	}
	return bVar1;
}

void Function_580() //Position: 0x1CE18 / 118296
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_WaitingShootKegs", "Rebel05_WaitingShootKegs", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_581() //Position: 0x1CE71 / 118385
{
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1448, true, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, &Local_188 + 2920, 3212836864);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1448, true, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, &Local_188 + 2944, 3212836864);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1448, true, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, false, &Local_188 + 2968, 3212836864);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1448, true, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3264), -1.0f, 1086324736);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1448, true, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3268), -1.0f, 1086324736);
	Function_453(Local_188.f_1448, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	Function_341(Local_188.f_1448);
	Function_532(Local_188.f_1448);
	Function_578(Local_188.f_1448, Local_188.f_3336, 2);
	Function_578(Local_188.f_1448, Local_188.f_3340, 2);
	Function_446(Local_188.f_1448, Global_34573, 1);
	return;
}

void Function_582(bool bParam0, bool bParam1) //Position: 0x1CF6F / 118639
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_ALLOW_SHOOTING(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_583(bool bParam0) //Position: 0x1CFB7 / 118711
{
	if (bParam0)
	{
		DISABLE_CHILD_SECTOR("esc_villaWall04x");
		ENABLE_CHILD_SECTOR("esc_villaWall05x");
	}
	else
	{
		DISABLE_CHILD_SECTOR("esc_villaWall05x");
		ENABLE_CHILD_SECTOR("esc_villaWall04x");
	}
	return;
}

void Function_584(bool bParam0, bool bParam1) //Position: 0x1D01D / 118813
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			RESET_ANIM_SET_FOR_ACTOR(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

int Function_585(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x1D05D / 118877
{
	if (Function_290(bParam0) <= bParam1)
	{
		if (bParam5)
		{
			Function_258();
		}
		if (!Function_131())
		{
			Function_586(fParam2, fParam3, iParam4);
			Function_241(bParam0);
			return 1;
		}
		Function_242(bParam0, (bParam1 - 1.0f));
		return 0;
	}
	return 0;
}

void Function_586(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1D0A2 / 118946
{
	switch (bParam2)
	{
		case 0x00000000:
			Function_587(bParam0, bParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_130(bParam0, bParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_340(bParam0, bParam1, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(bParam0, bParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_587(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1D100 / 119040
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Global_3422[Global_626940] + 12, iParam5);
	}
	else
	{
		iVar0 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar0, iParam5);
	}
}

void Function_588(bool bParam0, bool bParam1) //Position: 0x1D147 / 119111
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
			SET_ACTOR_UPDATE_PRIORITY(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_589() //Position: 0x1D188 / 119176
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_KegsAreSetUp", "Rebel05_KegsAreSetUp", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_590() //Position: 0x1D1D9 / 119257
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	bVar1 = false;
	bVar0 = TASK_SEQUENCE_OPEN();
	bVar1 = false;
	while (bVar1 < (GET_NUM_PATH_POINTS(Local_188.f_3320) - 1))
	{
		GET_PATH_POINT(Local_188.f_3320, bVar1, &uVar2);
		TASK_GO_TO_COORD(false, &uVar2, true);
		GET_OBJECT_POSITION(Local_188.f_2912, &uVar2);
		TASK_FACE_COORD(false, &uVar2, 0);
		TASK_STAND_STILL(false, RAND_FLOAT_RANGE(1.0f, 4.0f), 0, 0);
		bVar1++;
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_1058, bVar0, 4294967295);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_591() //Position: 0x1D244 / 119364
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_SetUpKegs", "Rebel05_SetUpKegs", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_592() //Position: 0x1D28F / 119439
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_UsePowderKegs", "Rebel05_UsePowderKegs", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_593() //Position: 0x1D2E2 / 119522
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(Local_188.f_1120, "aCarry1"))
	{
		bVar0 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Local_188.f_1120, "aCarry1"));
	}
	else
	{
		bVar0 = Function_552(Local_188.f_1120, Local_188.f_2996, 1);
	}
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	Function_594(bVar0, Local_188.f_3364, Local_188.f_2912);
	DECOR_SET_OBJECT(Local_188.f_1120, "aCarry1", bVar0);
	return;
}

void Function_594(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1D351 / 119633
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	if (IS_OBJECT_VALID(bParam1))
	{
		UNK_0x44986367(&vVar2, GET_OBJECT_HEADING(bParam2));
		VSCALE(&vVar2, -3.0f);
		Function_254(bParam2);
		vVar2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_254(bParam2), vVar2, StackVal) };
		RESET_ANIM_SET_FOR_ACTOR(bParam0, true);
		bVar0 = GET_GRINGO_FROM_OBJECT(FIND_OBJECT_IN_OBJECT(bParam1, "multistage_barrel"));
		if (IS_GRINGO_VALID(bVar0))
		{
			DECOR_SET_OBJECT(bParam0, "MoveObj_Dest", bParam2);
			DECOR_SET_BOOL(bParam0, "MSMove_Run", true);
			bVar1 = TASK_SEQUENCE_OPEN();
			TASK_USE_GRINGO(false, bVar0, "UseCase1", true, 4);
			TASK_GO_TO_COORD(false, &vVar2, 2);
			TASK_FACE_ACTOR(false, bLocal_1058, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bParam0, bVar1);
			TASK_SEQUENCE_RELEASE(bVar1, 1);
		}
	}
	return;
}

void Function_595(bool bParam0, bool bParam1) //Position: 0x1D414 / 119828
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	iVar2 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bParam0);
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar1), iVar2))
				{
					if (bParam1)
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
						}
					}
					SQUAD_LEAVE(bVar1);
					RELEASE_ACTOR(bVar1);
				}
				else
				{
					bVar0++;
				}
			}
			else
			{
				SQUAD_LEAVE(bVar1);
				RELEASE_ACTOR(bVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_596() //Position: 0x1D4A3 / 119971
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_Get_On_Gatling", "Rebel05_Get_On_Gatling", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_597(bool bParam0) //Position: 0x1D4F8 / 120056
{
	Function_341(Local_188.f_1120);
	Function_439(Local_188.f_1120, 0);
	Function_516(Local_188.f_1120, 62, 2,5f);
	Function_517(Local_188.f_1120, 16, 1);
	Function_566("c_shoot_at_gates_2", Local_188.f_1740, 1);
	Function_566("c_shoot_at_gates_3", Local_188.f_1740, 3);
	Function_566("c_shoot_at_gates_4", Local_188.f_1740, 2);
	Function_566("c_shoot_at_gates_5", Local_188.f_1740, 3);
	Function_566("c_shoot_at_gates_6", Local_188.f_1740, 3);
	Function_566("c_shoot_at_gates_7", Local_188.f_1740, 3);
	Function_566("c_shoot_at_gates_8", Local_188.f_1740, 3);
	Function_566("cover_low98", Local_188.f_1740, 4);
	Function_566("cover_low97", Local_188.f_1740, 4);
	Function_566("coverRock_8", Local_188.f_1740, 4);
	Function_566("cover_low99", Local_188.f_1740, 4);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, 5, 0, 4294967295);
	TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
	if (bParam0)
	{
		Function_537(1);
		Function_582(Local_188.f_1120, 0);
	}
	return;
}

void Function_598() //Position: 0x1D67A / 120442
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_188.f_1448 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "Villa_def_1"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "vDef_1", 391, -4367,182f, 39,15295f, 4362,11f, 0.0f, 95,60054f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1448);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 1.0f);
	SET_ACTOR_ALLOW_DISARM(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "vDef_2", 392, -4367,28f, 39,18301f, 4360,984f, 0.0f, 99,90157f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1448);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 1.0f);
	SET_ACTOR_ALLOW_DISARM(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "vDef_4", 393, -4367,496f, 39,18301f, 4359,811f, 0.0f, 99,47277f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1448);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 42, 0,001f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 1.0f);
	SET_ACTOR_ALLOW_DISARM(bVar0, false);
	return;
}

void Function_599(bool bParam0, int iParam1) //Position: 0x1D856 / 120918
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_600(bool bParam0) //Position: 0x1D88D / 120973
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_ANIMAL(bVar1))
			{
				if (!IS_ACTOR_VEHICLE(bVar1))
				{
					DELETE_ALL_WEAPONS_FROM_ACTOR(bVar1);
				}
			}
		}
		bVar0++;
	}
	return;
}

int Function_601() //Position: 0x1D8D3 / 121043
{
	Function_378(&Local_188 + 528, 391, 2, 0);
	Function_378(&Local_188 + 528, 392, 2, 0);
	Function_378(&Local_188 + 528, 395, 2, 0);
	Function_378(&Local_188 + 528, 393, 2, 0);
	if (Function_406(&Local_188 + 528))
	{
		return 1;
	}
	return 0;
}

void Function_602() //Position: 0x1D91F / 121119
{
	bool bVar0;
	var uVar1;
	bool bVar4;
	
	bVar0 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(Local_188.f_1120, "aCarry1"));
	Function_603(bVar0, "aCarry1");
	if (Function_607())
	{
		if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar0)))
		{
			TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_1058, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3188), -1.0f, 1086324736);
			GET_VOLUME_CENTER(Local_188.f_1756, &uVar1);
			bVar4 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_COORD(false, &uVar1, 7.0f, 3);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bVar0, bVar4);
			TASK_SEQUENCE_RELEASE(bVar4, 1);
		}
	}
	return;
}

void Function_603(bool bParam0, bool bParam1) //Position: 0x1D998 / 121240
{
	var uVar0;
	
	if (GET_TASK_STATUS(bParam0, 19) == 4)
	{
		SQUAD_COMPUTE_CENTROID(Local_188.f_1120, &uVar0);
		TASK_GO_NEAR_COORD(bParam0, &uVar0, 8.0f, 4);
		DECOR_REMOVE(Local_188.f_1120, bParam1);
		SQUAD_LEAVE(bParam0);
		RELEASE_ACTOR(bParam0);
		Function_593();
	}
	return;
}

var Function_604(var uParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x1D9D9 / 121305
{
	bool bVar0;
	vector3 vVar1;
	
	*(&vVar1 + 12) = { 0.0f, 0.0f, 0.0f };
	bVar0 = false;
	if (!IS_OBJECT_VALID(*uParam0))
	{
		bVar0 = true;
	}
	else if (Function_605(uParam0))
	{
		bVar0 = true;
	}
	if (!DECOR_CHECK_EXIST(*uParam3, "fRespawnTime"))
	{
		if (bVar0)
		{
			Function_254(bParam1);
			if (!Function_438(StackVal, StackVal, Function_254(bParam1), 0x3f800000, 0x42960000, 1, 1, 0))
			{
				if (IS_OBJECT_VALID(*uParam0))
				{
					DESTROY_OBJECT(*uParam0);
				}
				DECOR_SET_FLOAT(*uParam3, "fRespawnTime", GET_CURRENT_GAME_TIME());
				Function_254(bParam1);
				vVar1 = { StackVal, StackVal, Function_254(bParam1) };
				(&vVar1 + 12)->f_4 = GET_OBJECT_HEADING(bParam1);
				*uParam0 = CREATE_PROP_IN_LAYOUT(Local_188, Function_53(), "p_gen_powderKeg01x", vVar1, *(&vVar1 + 12), 1);
			}
			else
			{
				Function_254(bParam1);
				if (!Function_438(StackVal, StackVal, Function_254(bParam1), 0x3f800000, 0x42960000, 1, 1, 0))
				{
					if (IS_OBJECT_VALID(*uParam0))
					{
						DESTROY_OBJECT(*uParam0);
					}
					DECOR_SET_FLOAT(*uParam3, "fRespawnTime", GET_CURRENT_GAME_TIME());
					Function_254(bParam2);
					vVar1 = { StackVal, StackVal, Function_254(bParam2) };
					(&vVar1 + 12)->f_4 = GET_OBJECT_HEADING(bParam2);
					*uParam0 = CREATE_PROP_IN_LAYOUT(Local_188, Function_53(), "p_gen_powderKeg01x", vVar1, *(&vVar1 + 12), 1);
				}
			}
			Function_593();
			ATTACH_OBJECTS(*uParam3, *uParam0, "", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
		}
	}
	else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(*uParam3, "fRespawnTime")) < 3.0f)
	{
		DECOR_REMOVE(*uParam3, "fRespawnTime");
	}
	return *uParam0;
}

bool Function_605(int iParam0) //Position: 0x1DB7A / 121722
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_GRINGO_FROM_OBJECT(FIND_OBJECT_IN_OBJECT(*iParam0, "multistage_barrel"));
	bVar1 = GET_ACTOR_FROM_OBJECT(Function_388(bVar0, "UseCase1"));
	if (IS_ACTOR_VALID(bVar1))
	{
		if (GET_CURRENT_GRINGO(bVar1) == bVar0)
		{
			return 0;
		}
		if (!GRINGO_IS_CAPABLE_OF_USE(bVar1, GRINGO_GET_USE_COMPONENT_EXT(bVar0, "UseCase1")))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_606() //Position: 0x1DBE4 / 121828
{
	if (!IS_OBJECT_VALID(Local_188.f_3364))
	{
		if (Function_607())
		{
			return 1;
		}
	}
	return 0;
}

bool Function_607() //Position: 0x1DBFF / 121855
{
	Function_254(Local_188.f_1740);
	Function_254(bLocal_1325);
	if (VDIST(Function_254(Local_188.f_1740), Function_254(bLocal_1325)) > 6.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_608(bool bParam0, bool bParam1, float fParam2) //Position: 0x1DC1E / 121886
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (Function_558(bVar1, bParam1, fParam2))
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_609() //Position: 0x1DC7A / 121978
{
	bool bVar0;
	
	if (iLocal_1040 < 3 && iLocal_1040 > 105)
	{
		Function_472(&bLocal_1176, 60.0f, 200.0f, bLocal_1058, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1049, 0, 0, 0, 325, 1);
		if (SQUAD_IS_VALID(bLocal_1320))
		{
			if (bLocal_1280 > 2)
			{
				bVar0 = Function_541(Local_188.f_1120, 4, &Local_188 + 2552, 0);
			}
			else
			{
				bVar0 = Function_541(Local_188.f_1120, 6, &Local_188 + 2552, 0);
			}
			if (IS_ACTOR_VALID(bVar0))
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bVar0, Local_188.f_3296, 3, 1, 1, 1, false);
			}
		}
		if (!DECOR_CHECK_EXIST(Local_188.f_3360, "bSpoke"))
		{
			if (IS_VOLUME_VALID(Local_188.f_1772))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1772) && IS_ACTOR_IN_VOLUME(bLocal_1058, Local_188.f_1772))
				{
					DECOR_SET_BOOL(Local_188.f_3360, "bSpoke", true);
					Function_639(bLocal_1058, 4.0f, (1,82f + 1,6f));
					Function_638();
				}
			}
		}
		if (DECOR_CHECK_EXIST(Local_188.f_1164, "bNeedBlips"))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1772) || Function_637(Local_188.f_1164) < 0)
			{
				DECOR_REMOVE(Local_188.f_1164, "bNeedBlips");
				Function_453(Local_188.f_1164, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
		}
	}
	switch (iLocal_1040)
	{
		case 0x00000000:
			Function_320(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 0.0f);
			iLocal_1293 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_1058, 7, true);
			SET_ACTOR_HEALTH(bLocal_1058, GET_ACTOR_MAX_HEALTH(bLocal_1058));
			CLEAR_ACTOR_MIN_SPEED(bLocal_1058);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_1508)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_1508));
			}
			bLocal_1279 = false;
			bLocal_1280 = false;
			iLocal_1281 = 0;
			iLocal_1282 = 0;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			if (iLocal_1061[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_315();
				Function_254((*&Local_188 + 2016)[0]);
				bLocal_1060 = Function_313(StackVal, StackVal, Function_254((*&Local_188 + 2016)[0]), 0, 1, 1);
				Function_394(Global_34573, (*&Local_188 + 2016)[0], 1, 1, 1);
				Function_394(bLocal_1058, (*&Local_188 + 2016)[1], 1, 1, 1);
				GIVE_WEAPON_TO_ACTOR(bLocal_1058, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_1058, 0);
				Function_241(&bLocal_1167);
				iLocal_1040 = 1;
			}
			else
			{
				Function_241(&bLocal_1167);
				iLocal_1040 = 2;
			}
			Function_471(Local_188.f_1120);
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (((Function_312(bLocal_1060) && Function_636()) && Function_377()) || bLocal_1060 != 4294967295))
			{
				if (Function_470())
				{
					Function_469();
					Function_241(&bLocal_1167);
					iLocal_1040 = 2;
				}
			}
			break;
		
		case 0x00000002:
			Function_253(bLocal_1039);
			Function_306(StackVal, StackVal, Function_253(bLocal_1039), bLocal_1039, Global_30633[0], Function_256(bLocal_1039), 0);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_355(7, 1, 1);
			TOGGLE_COVER_PROPS(0);
			if (!iLocal_1061[2])
			{
				Function_464();
				Function_529(Local_188.f_1120, 6, 0x40a00000);
				Function_461(StackVal, StackVal, StackVal, StackVal, Local_188.f_1120, *(&Local_188 + 1936[26]), *(&Local_188 + 1936[26] + 12), 5, 3.0f, 1.0f, 0, 0);
				Function_635(Local_188.f_1120);
				Function_634(Local_188.f_1120, 46);
			}
			Function_523(Local_188.f_1120, 0.0f);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_222(bLocal_1303, 1);
			Function_222(bLocal_1304, 1);
			CLOSE_DOOR_FAST(bLocal_1303);
			CLOSE_DOOR_FAST(bLocal_1304);
			Function_633();
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_188.f_1164, 0);
			Function_632();
			SQUADS_MERGE(Local_188.f_1160, Local_188.f_1164);
			if (IS_BLIP_VALID(bLocal_1315))
			{
				REMOVE_BLIP(bLocal_1315);
			}
			Function_348(&(Local_1222[017]), bLocal_1058, "RebelLeader", 0, 0x5f5e100, 1);
			Function_348(&(Local_1222[117]), Local_188.f_1120, "rebel05_rebel", 0, 0x5f5e100, 1);
			Function_442(&(Local_1222[117]), 42);
			Function_441(&(Local_1222[117]), 3);
			Function_241(&bLocal_1167);
			iLocal_1040 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING() && Function_290(&bLocal_1167) <= 0.0f)
			{
				Function_460(Local_188.f_1120, 0);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_188.f_1120, 0);
				Function_241(&bLocal_1167);
				iLocal_1040 = 9;
			}
			break;
		
		case 0x00000009:
			Function_615();
			if (Function_290(&bLocal_1167) <= 1.0f)
			{
				if (Function_342(Global_34573, bLocal_1058, 36.0f))
				{
					Function_614();
				}
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_1058, 13, true);
				Function_613(Local_188.f_1120, 90.0f);
				if (IS_BLIP_VALID(bLocal_1315))
				{
					REMOVE_BLIP(bLocal_1315);
				}
				if (!Function_347(bLocal_1058, 0x3f800000, 0x42960000, 1, 1, 0) && !Function_342(bLocal_1058, Global_34573, 15.0f))
				{
					Function_394(bLocal_1058, (*&Local_188 + 2016)[1], 1, 1, 1);
				}
				Function_341(Local_188.f_1120);
				SQUAD_GOALS_CLEAR(Local_188.f_1120);
				SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1120, 10, Local_188.f_1772, 4294967295);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_188.f_1120, 2);
				Function_612();
				TASK_SHOOT_ENEMIES_FROM_COVER(bLocal_1058, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3260), -1.0f, 1086324736);
				Function_611(Local_188.f_1120, Local_188.f_1164);
				Function_611(Local_188.f_1164, Local_188.f_1120);
				Function_241(&bLocal_1167);
				Function_241(&bLocal_1173);
				iLocal_1040 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_615();
			if (Function_290(&bLocal_1167) <= 6.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_340("Rebel05_obj05", 0x40f00000, 1, 2, 0, 0, 0);
				if (DECOR_CHECK_EXIST(Local_188.f_1164, "bNeedBlips"))
				{
					DECOR_REMOVE(Local_188.f_1164, "bNeedBlips");
					Function_453(Local_188.f_1164, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				Function_355(7, 0, 1);
				Function_241(&bLocal_1167);
				iLocal_1040 = 11;
			}
			break;
		
		case 0x0000000B:
		case 0x0000000C:
			Function_615();
			if (!Function_342(bLocal_1058, Global_34573, 60.0f))
			{
				Function_355(7, 1, 1);
			}
			else
			{
				Function_355(7, 0, 1);
			}
			if (iLocal_1040 == 11)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1164) >= 0 && iLocal_1295)
				{
					Function_417(Local_188.f_1164);
					AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
					iLocal_1040 = 12;
				}
			}
			if (iLocal_1040 == 12)
			{
				Function_406(&bLocal_1106);
				if ((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1164) >= 0 && iLocal_1281 <= 2) && iLocal_1295)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_340("Rebel05_obj03", 0x40f00000, 1, 2, 0, 0, 0);
					SQUADS_MERGE(bLocal_1320, Local_188.f_1120);
					Function_597(1);
					Function_417(Local_188.f_1164);
					AUDIO_TRIGGER_PLAYER_KILLED_EVERYONE_SPEECH();
					Function_355(7, 1, 1);
					iLocal_1293 = 0;
					Function_349(&(Local_1222[117]), 2, 1);
					Function_349(&(Local_1222[117]), 8, 1);
					bLocal_1280 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_188.f_3312, 4, 0, 0, 1, false);
					TASK_GO_TO_COORD_AND_STAY(StackVal, false, &Local_188 + 2028[16], 4);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_1058, bLocal_1280);
					TASK_SEQUENCE_RELEASE(bLocal_1280, 1);
					AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
					Function_529(Local_188.f_1120, 6, 0x40a00000);
					Function_241(&bLocal_1173);
					Function_241(&bLocal_1167);
					iLocal_1040 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			Function_406(&bLocal_1106);
			if (Function_502(StackVal, StackVal, bLocal_1058, *(&Local_188 + 2028[16]), 6.0f) && Function_342(Global_34573, bLocal_1058, 15.0f))
			{
				if (Function_290(&bLocal_1167) <= 4.0f)
				{
					if (Function_290(&bLocal_1167) <= 8.0f || Function_342(Global_34573, bLocal_1058, 15.0f))
					{
						if (Function_406(&bLocal_1106))
						{
							RESET_ANIM_SET_FOR_ACTOR(bLocal_1058, true);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_1058, 13, false);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_1058, 7, false);
							iLocal_1061[3] = 1;
							Function_241(&bLocal_1167);
							bLocal_1039 = 4;
							iLocal_1040 = 0;
						}
					}
				}
			}
			else if (Function_502(StackVal, StackVal, bLocal_1058, *(&Local_188 + 2028[16]), 1.0f))
			{
				if (Function_290(&bLocal_1173) <= 8.0f)
				{
					if (Function_406(&bLocal_1106))
					{
						Function_610();
						SET_ANIM_SET_FOR_ACTOR(bLocal_1058, "stand_ambient", 0);
						SET_ACTION_NODE_FOR_ACTOR(bLocal_1058, "stand_ambient/one_hnd");
						Function_490(bLocal_1058, Global_34573);
						Function_241(&bLocal_1173);
					}
				}
			}
			break;
	}
	return;
}

void Function_610() //Position: 0x1E50C / 124172
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_farBehind_mansion", "Rebel05_farBehind_mansion", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_611(bool bParam0, bool bParam1) //Position: 0x1E567 / 124263
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(bParam1) - 1))
				{
					bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (IS_ACTOR_ALIVE(bVar3))
						{
							MEMORY_IDENTIFY(bVar2, bVar3);
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_612() //Position: 0x1E5EA / 124394
{
	struct<9> Var0;
	
	bVar6 = false;
	GET_PATH_POINT(Local_188.f_3296, (GET_NUM_PATH_POINTS(Local_188.f_3296) - 1), &vVar3);
	bVar6 = false;
	while (bVar6 < (SQUAD_GET_SIZE(Local_188.f_1120) - 1))
	{
		bVar8 = SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1120, bVar6);
		vVar0 = { StackVal, StackVal, vVar3 };
		vVar0 = (vVar0.x + RAND_FLOAT_RANGE(-5.0f, 5.0f));
		vVar0.f_8 = (vVar0.z + RAND_FLOAT_RANGE(-5.0f, 5.0f));
		bVar7 = TASK_SEQUENCE_OPEN();
		switch (RAND_INT_RANGE(false, 2))
		{
			case 0x00000000:
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_188.f_3296, 4, 1, 0, 1, false);
				break;
			
			case 0x00000001:
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_188.f_3348, 4, 1, 0, 1, false);
				break;
			
			case 0x00000002:
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_188.f_3344, 4, 1, 0, 1, false);
				break;
		}
		TASK_GO_NEAR_COORD(false, &vVar0, 4.0f, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bVar8, bVar7);
		TASK_SEQUENCE_RELEASE(bVar7, 1);
		bVar6++;
	}
	return;
}

void Function_613(bool bParam0, bool bParam1) //Position: 0x1E6C2 / 124610
{
	void fVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	fVar0 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < (fVar0 - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		SET_ACTOR_VISION_MAX_RANGE(bVar2, bParam1, 1);
		AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bVar2, bParam1);
		AI_PERCEPTION_SET_VISUAL_ID_TIME(bVar2, 0,1f);
		AI_SET_WEAPON_MAX_RANGE(bVar2, bParam1);
		bVar1++;
	}
	return;
}

void Function_614() //Position: 0x1E71B / 124699
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_marchOnVilla", "Rebel05_marchOnVilla", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_615() //Position: 0x1E76C / 124780
{
	if (((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) <= 45.0f && GET_LAST_ATTACK_TIME(Global_34573) < 0.0f) || (GET_LAST_ATTACK_TIME(Global_34573) >= 0.0f && Function_290(&bLocal_1173) <= 45.0f))
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			if (Function_290(&bLocal_1173) <= 8.0f)
			{
				Function_631();
				Function_241(&bLocal_1173);
			}
		}
	}
	else
	{
		Function_561();
	}
	switch (bLocal_1280)
	{
		case 0x00000000:
			Function_523(Local_188.f_1120, 0.0f);
			Function_538(Local_188.f_1164, 0,5f);
			Function_517(Local_188.f_1120, 15, 1);
			bLocal_1320 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "braveMen"));
			iLocal_1281 = 0;
			bLocal_1280 = true;
			break;
		
		case 0x00000001:
			Function_621((*&Local_188 + 1548)[0]);
			if (DECOR_CHECK_EXIST(Local_188.f_3360, "bSpoke"))
			{
				if (!DECOR_CHECK_EXIST(Local_188.f_3360, "bSpoke2"))
				{
					DECOR_SET_BOOL(Local_188.f_3360, "bSpoke2", true);
					if (!Function_131())
					{
						Function_620();
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_188 + 1548)[0]) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1164) >= 2)
			{
				Function_524(&Local_188 + 1120, 0, 0);
				Function_617();
				Function_616("coverRock_1");
				bLocal_1280 = 2;
			}
			break;
		
		case 0x00000002:
			Function_621((*&Local_188 + 1548)[0]);
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(bLocal_1320) <= 6)
			{
				Function_525(Function_526(Local_188.f_1120, Global_34573, 1, 0), bLocal_1320);
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_188 + 1548)[1]))
			{
				Function_524(&Local_188 + 1120, 1, 0);
				Function_616("coverRock_8");
				bLocal_1280 = 3;
			}
			break;
		
		case 0x00000003:
			Function_621((*&Local_188 + 1548)[1]);
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_188 + 1548)[2]))
			{
				Function_524(&Local_188 + 1120, 2, 0);
				Function_616("cover_low98");
				bLocal_1280 = 4;
			}
			break;
		
		case 0x00000004:
			Function_621((*&Local_188 + 1548)[2]);
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_188 + 1548)[3]))
			{
				Function_524(&Local_188 + 1120, 3, 0);
				Function_616("c_shoot_at_gates_7");
				bLocal_1280 = 5;
			}
			break;
		
		case 0x00000005:
			Function_621((*&Local_188 + 1548)[3]);
			break;
	}
	return;
}

void Function_616(bool bParam0) //Position: 0x1E9B7 / 125367
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = FIND_OBJECT_IN_LAYOUT(Local_188, bParam0);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_OBJECT(false, bVar1, 2.0f, 3, 0, 1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(bVar1), -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_1058, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_617() //Position: 0x1E9F5 / 125429
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = (8 - SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1164));
	if (iVar0 >= 5)
	{
		iVar0 = 5;
	}
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		Function_618();
		iVar1++;
	}
	iLocal_1295 = 1;
	return;
}

void Function_618() //Position: 0x1EA30 / 125488
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	
	bVar6 = GET_OBJECT_HEADING((*&Local_188 + 2572)[0]);
	GET_OBJECT_POSITION((*&Local_188 + 2572)[0], &vVar0);
	GET_OBJECT_AXIS((*&Local_188 + 2572)[0], &vVar3, 2);
	VSCALE(&vVar3, RAND_FLOAT_RANGE(2.0f, 5.0f));
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
	GET_OBJECT_AXIS((*&Local_188 + 2572)[0], &vVar3, 0);
	VSCALE(&vVar3, RAND_FLOAT_RANGE(-2.0f, 2.0f));
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
	if (!WOULD_ACTOR_BE_VISIBLE(379, &vVar0, 3212836864))
	{
	}
}

void Function_619(bool bParam0, bool bParam1) //Position: 0x1EB80 / 125824
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_620() //Position: 0x1EBA0 / 125856
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_RemindTakeOutMachGun", "Rebel05_RemindTakeOutMachGun", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_621(int iParam0) //Position: 0x1EC01 / 125953
{
	Function_630();
	if (IS_ACTOR_VALID(bLocal_1322))
	{
		if (!DECOR_CHECK_EXIST(bLocal_1322, "fLastBurst"))
		{
			DECOR_SET_FLOAT(bLocal_1322, "fLastBurst", 0.0f);
		}
		SET_ACTOR_UPDATE_PRIORITY(bLocal_1322, false);
		if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(bLocal_1322)) < 2.0f)
		{
			Function_628();
		}
		if (SQUAD_GET_SIZE(bLocal_1320) >= 0)
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_1322, "fLastBurst")) < 8.0f)
			{
				DECOR_SET_FLOAT(bLocal_1322, "fLastBurst", GET_CURRENT_GAME_TIME());
				Function_624(bLocal_1322, iParam0);
			}
		}
		Function_622(bLocal_1322);
	}
	return;
}

void Function_622(bool bParam0) //Position: 0x1ECA7 / 126119
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_623(Global_34573, Local_188.f_3360, 0))
		{
			Function_427(bParam0, 3212836864);
		}
		else if (Function_499(bParam0, Local_188.f_3360))
		{
			AI_SET_WEAPON_MAX_RANGE(bParam0, 130.0f);
			MEMORY_CONSIDER_AS(bParam0, bLocal_1058, 2);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 16, true);
			if ((CALCULATE_NORMALIZED_SCREEN_DISTANCE_FROM_RETICLE(Global_34573, bParam0) > 0,1f && !IS_ACTOR_USING_COVER(Global_34573)) && IS_PLAYER_WEAPON_ZOOMED(Global_34573))
			{
				TASK_USE_TURRET_AGAINST_OBJECT(bParam0, Local_188.f_3360, Global_34573, -1f);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 200.0f);
				DECOR_SET_BOOL(bParam0, "bKillTarget", true);
			}
			else if (DECOR_CHECK_EXIST(bParam0, "bKillTarget"))
			{
				if (GET_TASK_STATUS(bParam0, 70) == 1)
				{
					TASK_USE_TURRET(bParam0, Local_188.f_3360, -1.0f);
					COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 40.0f);
					DECOR_REMOVE(bParam0, "bKillTarget");
				}
			}
		}
		else
		{
			TASK_USE_TURRET(bParam0, Local_188.f_3360, -1.0f);
		}
	}
	return;
}

bool Function_623(bool bParam0, bool bParam1, float fParam2) //Position: 0x1EDA5 / 126373
{
	var uVar0;
	vector3 vVar3;
	
	GET_OBJECT_AXIS(bParam1, &uVar0, 2);
	Function_254(bParam0);
	Function_254(bParam1);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_254(bParam1), Function_254(bParam0), StackVal) };
	VNORMALIZE(&vVar3);
	if (VDOT(&vVar3, &uVar0) <= fParam2)
	{
		return 1;
	}
	return 0;
}

void Function_624(bool bParam0, bool bParam1) //Position: 0x1EDD8 / 126424
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	
	bVar2 = false;
	fVar3 = 99999.0f;
	bVar2 = false;
	while (bVar2 < (SQUAD_GET_SIZE(bLocal_1320) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1320, bVar2);
		Function_300(bVar1);
		Function_300(Global_34573);
		if (VDIST(Function_300(bVar1), Function_300(Global_34573)) > fVar3)
		{
			if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
			{
				if (IS_ACTOR_ALIVE(bVar1))
				{
					bVar0 = bVar1;
				}
			}
		}
		bVar2++;
	}
	if (IS_ACTOR_VALID(bVar0))
	{
		Function_625(bVar0, bParam0, 6.0f, 1, 3.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
		TASK_USE_TURRET_AGAINST_OBJECT(bParam0, Local_188.f_3360, bVar0, 3.0f);
		DECOR_SET_BOOL(bParam0, "bKillTarget", true);
	}
	return;
}

void Function_625(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x1EE71 / 126577
{
	bool bVar0;
	
	bVar0 = Function_626(bParam0, uParam2);
	if (!IS_COVER_LOCATION_VALID(bVar0))
	{
		PRINTSTRING("Failed to find cover location for ");
		PRINTSTRING(GET_ACTOR_NAME(bParam0));
		PRINTSTRING(", shooting from any cover instead.");
		PRINTNL();
		Function_335(bParam0, bParam1);
		TASK_PRIORITY_SET(bParam0, bParam3);
	}
	else
	{
		TASK_SHOOT_FROM_COVER(bParam0, bParam1, bVar0, bParam4, 1086324736);
		TASK_PRIORITY_SET(bParam0, bParam3);
	}
}

var Function_626(bool bParam0, bool bParam1) //Position: 0x1EF0E / 126734
{
	bool bVar0;
	
	Function_627(bParam0, &bVar0);
	return FIND_NEAREST_COVER_LOCATION(&bVar0, bParam1, GET_HEADING(bParam0), 120.0f, 7);
}

void Function_627(bool bParam0, bool bParam1) //Position: 0x1EF2D / 126765
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_628() //Position: 0x1EF3A / 126778
{
	bool bVar0;
	struct<5> Var1;
	
	if (IS_ACTOR_VALID(bLocal_1322))
	{
		if (DECOR_CHECK_EXIST(bLocal_1322, "fLastForceTargetTime"))
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_1322, "fLastForceTargetTime")) < 2.0f)
			{
				if (SQUAD_IS_VALID(bLocal_1320))
				{
					bVar4 = Function_629(bLocal_1320, bLocal_1322);
					if (!IS_ACTOR_VALID(bVar4))
					{
						bVar4 = Function_526(bLocal_1320, bLocal_1322, 0, 0);
					}
				}
				bVar5 = Function_629(Local_188.f_1120, bLocal_1322);
				if (!IS_ACTOR_VALID(bVar4))
				{
					bVar5 = Function_526(Local_188.f_1120, bLocal_1322, 0, 0);
				}
				Function_300(bLocal_1322);
				Function_300(bVar4);
				Function_300(bLocal_1322);
				Function_300(bVar5);
				if (VDIST(Function_300(bLocal_1322), Function_300(bVar4)) > VDIST(Function_300(bLocal_1322), Function_300(bVar5)))
				{
					Function_300(bVar4);
					Var1 = { StackVal, StackVal, Function_300(bVar4) };
				}
				else
				{
					Function_300(bVar5);
					Var1 = { StackVal, StackVal, Function_300(bVar5) };
				}
				Var1.f_4 = (StackVal + (1,82f + 2.0f));
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_USE_TURRET_AGAINST_COORD(0, Local_188.f_3360, &Var1, 3.0f);
				TASK_USE_TURRET(false, Local_188.f_3360, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_1322, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				DECOR_SET_FLOAT(bLocal_1322, "fLastForceTargetTime", GET_CURRENT_GAME_TIME());
			}
		}
		else
		{
			DECOR_SET_FLOAT(bLocal_1322, "fLastForceTargetTime", GET_CURRENT_GAME_TIME());
		}
	}
	return;
}

var Function_629(bool bParam0, bool bParam1) //Position: 0x1F094 / 127124
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	bVar0 = false;
	fVar3 = 999999,9f;
	bVar5 = 4294967295;
	if (IS_ACTOR_ALIVE(bParam1))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (!Function_495(bVar2, 0))
			{
				if (bParam1 == Global_34573)
				{
					bVar1 = Function_347(bVar2, 0x3f800000, 0x42960000, 1, 1, 0);
				}
				else
				{
					bVar1 = MEMORY_GET_IS_VISIBLE(bParam1, bVar2);
				}
				if (bVar1)
				{
					fVar4 = Function_462(bParam1, bVar2);
					if (fVar4 > fVar3)
					{
						fVar3 = fVar4;
						bVar5 = bVar0;
					}
				}
			}
			bVar0++;
		}
	}
	if (bVar5 <= 0)
	{
		return "";
	}
	return SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar5);
}

void Function_630() //Position: 0x1F130 / 127280
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	GET_OBJECT_POSITION((*&Local_188 + 2572)[0], &vVar0);
	GET_OBJECT_ORIENTATION((*&Local_188 + 2572)[0], &vVar3);
	if (Function_558(Global_34573, Local_188.f_3360, 19.0f))
	{
		iLocal_1281 = 2;
	}
	if (!IS_ACTOR_VALID(bLocal_1322))
	{
		bVar6 = GET_GRINGO_FROM_OBJECT(FIND_OBJECT_IN_OBJECT(Local_188.f_3360, "shootbabyshoot"));
		if (!IS_GRINGO_VALID(bVar6))
		{
		}
		else if (!Function_499(Global_34573, Local_188.f_3360))
		{
			bLocal_1322 = GET_ACTOR_FROM_OBJECT(Function_388(bVar6, "GatlingShoot"));
			if (Global_34573 == bLocal_1322)
			{
				TASK_CLEAR(Global_34573);
				bLocal_1322 = "";
			}
		}
	}
	if (DECOR_CHECK_EXIST(Local_188.f_3360, "bNeedGunner"))
	{
		if (iLocal_1281 <= 1)
		{
			if (!WOULD_ACTOR_BE_VISIBLE(391, &vVar0, 3212836864))
			{
				DECOR_REMOVE(Local_188.f_3360, "bNeedGunner");
				bLocal_1322 = CREATE_ACTOR_IN_LAYOUT(Local_188, Function_53(), Function_528(), vVar0, vVar3);
				SET_ACTOR_UPDATE_PRIORITY(bLocal_1322, false);
				SQUAD_JOIN(bLocal_1322, Local_188.f_1164);
				TASK_USE_TURRET(bLocal_1322, Local_188.f_3360, -1.0f);
				SET_ACTOR_FACTION(bLocal_1322, 19);
				ADD_BLIP_FOR_ACTOR(bLocal_1322, 322, 0, 2, 0);
				CLEAR_LAST_ATTACK(Global_34573);
				iLocal_1281++;
			}
		}
		else if (iLocal_1281 <= 2)
		{
			DECOR_REMOVE(Local_188.f_3360, "bNeedGunner");
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1164, false, 1, 1);
			TASK_USE_TURRET(false, Local_188.f_3360, -1.0f);
			iLocal_1281++;
		}
	}
	if (iLocal_1281 <= 2)
	{
		if (GET_LAST_ATTACK_TARGET(Global_34573) == bLocal_1322)
		{
			if (IS_ACTOR_VALID(bLocal_1322))
			{
				if (!IS_ACTOR_ALIVE(bLocal_1322))
				{
					DECOR_SET_BOOL(Local_188.f_3360, "bNeedGunner", true);
				}
			}
		}
	}
	return;
}

void Function_631() //Position: 0x1F2F6 / 127734
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_noHelp_mansion", "Rebel05_noHelp_mansion", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_632() //Position: 0x1F34B / 127819
{
	bool bVar0;
	vector3 vVar1;
	
	Function_341(Local_188.f_1164);
	SQUAD_GOALS_CLEAR(Local_188.f_1164);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1164, true, Local_188.f_1756, 4294967295);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_188.f_1164, 1);
	DECOR_SET_BOOL(Local_188.f_1164, "bNeedBlips", true);
	bLocal_1322 = Function_552(Local_188.f_1164, Local_188.f_3360, 0);
	TASK_USE_TURRET(bLocal_1322, Local_188.f_3360, -1f);
	bVar0 = FIND_OBJECT_IN_LAYOUT(Local_188, "cover_low80");
	Function_254(bVar0);
	vVar1 = { StackVal, StackVal, Function_254(bVar0) };
	TASK_GO_TO_COORD(FIND_ACTOR_IN_LAYOUT(Local_188, "army2_5"), &vVar1, 3);
	bVar0 = FIND_OBJECT_IN_LAYOUT(Local_188, "cover_low82");
	Function_254(bVar0);
	vVar1 = { StackVal, StackVal, Function_254(bVar0) };
	TASK_GO_TO_COORD(FIND_ACTOR_IN_LAYOUT(Local_188, "army2_6"), &vVar1, 3);
	bVar0 = FIND_OBJECT_IN_LAYOUT(Local_188, "cover_low84");
	Function_254(bVar0);
	vVar1 = { StackVal, StackVal, Function_254(bVar0) };
	TASK_GO_TO_COORD(FIND_ACTOR_IN_LAYOUT(Local_188, "army2_4"), &vVar1, 3);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1164, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1164) | 2048);
	return;
}

void Function_633() //Position: 0x1F460 / 128096
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_188.f_1164 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "S3_army2"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "army2_1", 395, -4401,414f, 36,32585f, 4378,309f, 0.0f, 165,6054f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1164);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 40, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 120.0f, 1);
	Function_619(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 1.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "army2_2", 391, -4399,002f, 35,68593f, 4385,113f, 0.0f, 174,4022f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1164);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 120.0f, 1);
	Function_619(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 1.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "army2_3", 380, -4392,074f, 37,94571f, 4363,923f, 0.0f, 163,0352f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1164);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,999f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 120.0f, 1);
	Function_619(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 1.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "army2_4", 392, -4402,721f, 35,60437f, 4385,208f, 0.0f, 172,5814f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1164);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 43, 0,999f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 120.0f, 1);
	Function_619(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 1.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "army2_5", 392, -4399,099f, 35,51807f, 4387,717f, 0.0f, 151,1479f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1164);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,999f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 120.0f, 1);
	Function_619(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 1.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "army2_6", 391, -4396,896f, 35,69025f, 4388,384f, 0.0f, 158,2531f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1164);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,999f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 120.0f, 1);
	Function_619(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 1.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "army2_7", 393, -4405,594f, 35,4889f, 4385,09f, 0.0f, 180,9841f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1164);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,999f, 1, 1);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 19);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, 120.0f, 1);
	Function_619(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 10, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 11, 1.0f);
	return;
}

void Function_634(bool bParam0, int iParam1) //Position: 0x1F91E / 129310
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		ACTOR_PUT_WEAPON_IN_HAND(bVar1, Function_542(bVar1, iParam1), 1);
		bVar0++;
	}
	return;
}

void Function_635(bool bParam0) //Position: 0x1F956 / 129366
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			AI_GOAL_LOOK_CLEAR(bVar1);
		}
		bVar0++;
	}
	return;
}

int Function_636() //Position: 0x1F997 / 129431
{
	Function_378(&Local_188 + 464, 395, 2, 0);
	Function_378(&Local_188 + 464, 391, 2, 0);
	Function_378(&Local_188 + 464, 380, 2, 0);
	Function_378(&Local_188 + 464, 392, 2, 0);
	Function_378(&Local_188 + 464, 393, 2, 0);
	if (Function_406(&Local_188 + 464))
	{
		return 1;
	}
	return 0;
}

int Function_637(bool bParam0) //Position: 0x1F9F1 / 129521
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (Function_347(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), 1.0f, 50.0f, 1, 1, 0))
		{
			bVar1++;
		}
		bVar0++;
	}
	return bVar1;
}

void Function_638() //Position: 0x1FA3E / 129598
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_machingunWarning", "Rebel05_machingunWarning", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_639(bool bParam0, float fParam1, float fParam2) //Position: 0x1FA97 / 129687
{
	bool bVar0;
	struct<5> Var1;
	
	if (IS_ACTOR_VALID(bLocal_1322))
	{
		Function_300(bParam0);
		Var1 = { StackVal, StackVal, Function_300(bParam0) };
		Var1.f_4 = (StackVal + fParam2);
		bVar0 = TASK_SEQUENCE_OPEN();
		TASK_USE_TURRET_AGAINST_COORD(0, Local_188.f_3360, &Var1, fParam1);
		TASK_USE_TURRET(false, Local_188.f_3360, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_1322, bVar0);
		TASK_SEQUENCE_RELEASE(bVar0, 1);
	}
	return;
}

void Function_640() //Position: 0x1FAE7 / 129767
{
	Function_472(&bLocal_1176, 60.0f, 200.0f, bLocal_1058, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1049, 0, 0, 0, 325, 1);
	if (!Function_342(bLocal_1058, Global_34573, 60.0f))
	{
		Function_355(7, 1, 1);
	}
	else
	{
		Function_355(7, 0, 1);
	}
	Function_561();
	Function_662(Local_188.f_1120);
	if (iLocal_1040 < 3 && iLocal_1040 > 105)
	{
		Function_541(Local_188.f_1120, 6, &Local_188 + 2532, 1);
		Function_661(Local_188.f_1160);
		Function_661(Local_188.f_1120);
		if (IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1744) && iLocal_1040 == 106)
		{
			Function_241(&bLocal_1167);
			iLocal_1040 = 106;
		}
	}
	switch (iLocal_1040)
	{
		case 0x00000000:
			Function_320(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 0.0f);
			iLocal_1293 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			SET_ACTOR_HEALTH(bLocal_1058, GET_ACTOR_MAX_HEALTH(bLocal_1058));
			CLEAR_ACTOR_MIN_SPEED(bLocal_1058);
			Function_319(&Local_188 + 1084, 1);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_188.f_1508)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_188.f_1508));
			}
			bLocal_1279 = false;
			bLocal_1280 = false;
			iLocal_1281 = 0;
			iLocal_1282 = 0;
			if (iLocal_1061[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
				Function_315();
				bLocal_1060 = Function_313(StackVal, StackVal, *(&Local_188 + 1936[06]), 0, 1, 1);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_188 + 1936[06]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_188 + 1936[16]), 1, true, 1);
				Function_241(&bLocal_1167);
				iLocal_1040 = 1;
			}
			else
			{
				Function_241(&bLocal_1167);
				iLocal_1040 = 2;
			}
			Function_471(Local_188.f_1120);
			break;
		
		case 0x00000001:
			if (((STREAMING_IS_WORLD_LOADED() && Function_660()) && Function_377()) && (Function_312(bLocal_1060) || bLocal_1060 != 4294967295))
			{
				if (Function_470())
				{
					Function_469();
					if (!iLocal_1061[1])
					{
						Function_659();
					}
					Function_222(bLocal_1303, 1);
					Function_222(bLocal_1304, 1);
					Function_241(&bLocal_1167);
					iLocal_1040 = 2;
				}
			}
			break;
		
		case 0x00000002:
			Function_253(bLocal_1039);
			Function_306(StackVal, StackVal, Function_253(bLocal_1039), bLocal_1039, Global_30633[0], Function_256(bLocal_1039), 0);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
			TOGGLE_COVER_PROPS(0);
			if (!iLocal_1061[1])
			{
				Function_464();
				Function_529(Local_188.f_1120, 6, 0x40a00000);
				Function_461(StackVal, StackVal, StackVal, StackVal, Local_188.f_1120, *(&Local_188 + 1936[26]), *(&Local_188 + 1936[26] + 12), 4, 2.0f, 1.0f, 0, 0);
				Function_658(Local_188.f_1120, 4);
				Function_634(Local_188.f_1120, 46);
				Function_657();
				Function_656();
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1340, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1340) | 2048);
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1160, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1160) | 2048);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_188 + 1296)[02], *(&Local_188 + 2404[06]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_188 + 1296)[12], *(&Local_188 + 2404[16]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_188 + 1296)[22], *(&Local_188 + 2404[26]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_188 + 1296)[32], *(&Local_188 + 2404[36]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_188 + 1296)[42], *(&Local_188 + 2404[46]), 1, true, 1);
				GIVE_WEAPON_TO_ACTOR(bLocal_1058, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_1058, 0);
			}
			else
			{
				Function_223(&bLocal_1075);
				Function_238();
				Function_228();
			}
			if (HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_654();
			RESET_ANIM_SET_FOR_ACTOR(bLocal_1058, true);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bLocal_1058, &Local_188 + 2712, -1.0f);
			TASK_PRIORITY_SET(bLocal_1058, false);
			SQUAD_SET_FACTION(Local_188.f_1340, 19);
			SQUAD_SET_FACTION(Local_188.f_1160, 19);
			SQUAD_SET_FACTION(Local_188.f_1120, 20);
			Function_341(Local_188.f_1160);
			SQUADS_MERGE(Local_188.f_1340, Local_188.f_1160);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1160, true, Local_188.f_1748, 4294967295);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_188.f_1160, 2, Local_188.f_1748, 4, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1160, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3168), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1160, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3164), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1160, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3172), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1160, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3176), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1160, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3180), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1160, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3184), -1.0f, 1086324736);
			Function_516(Local_188.f_1120, 38, -1.0f);
			Function_653(Local_188.f_1120, Local_188.f_1160, 1);
			Function_611(Local_188.f_1120, Local_188.f_1160);
			Function_453(Local_188.f_1160, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_453(Local_188.f_1340, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_355(7, 0, 1);
			Function_348(&(Local_1222[017]), bLocal_1058, "RebelLeader", 0, 0x5f5e100, 1);
			Function_348(&(Local_1222[117]), Local_188.f_1120, "rebel05_rebel", 0, 0x5f5e100, 1);
			Function_441(&(Local_1222[117]), 3);
			Function_442(&(Local_1222[117]), 42);
			Function_584(Local_188.f_1120, 1);
			Function_241(&bLocal_1167);
			iLocal_1040 = 6;
			break;
		
		case 0x00000006:
			Function_649();
			if ((Function_290(&bLocal_1167) <= 4.0f || Function_645()) || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_644();
				Function_642(Local_188.f_1160, 1, 3.0f, 5.0f, 0);
				if (!Function_494(Local_188.f_1160, Global_34573, 8.0f, 1))
				{
					Function_641(Local_188.f_1160, Global_34573, 2);
				}
				Function_641(Local_188.f_1160, bLocal_1058, 2);
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_241(&bLocal_1167);
				iLocal_1040 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_290(&bLocal_1167) <= 7.0f)
			{
				Function_641(Local_188.f_1160, Global_34573, 4);
				Function_641(Local_188.f_1160, bLocal_1058, 4);
				HUD_CLEAR_OBJECTIVE();
				Function_340("Rebel05_obj04", 7,5f, 1, 2, 0, 0, 0);
				Function_241(&bLocal_1167);
				Function_241(&bLocal_1173);
				Function_241(&bLocal_1176);
				iLocal_1040 = 8;
			}
			break;
		
		case 0x00000008:
		case 0x00000009:
			Function_636();
			if (!Function_472(&bLocal_1176, (60.0f * 2.0f), 200.0f, bLocal_1058, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1049, 0, 0, 0, 325, 1))
			{
				Function_585(&bLocal_1176, 1920.0f, "Rebel05_obj04", 7,5f, 2, 0);
			}
			if (ACTORS_IN_RANGE(Global_34573, bLocal_1058, 36.0f))
			{
			}
			if (iLocal_1040 == 8)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1160) < 2)
				{
					AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
					SAY_SINGLE_LINE_SCRIPTED(Function_526(Local_188.f_1160, Global_34573, 1, 0), "nLETS_FLEE", false, 1, 1, 0, 0, 0);
					SQUAD_GOALS_CLEAR(Local_188.f_1160);
					Function_341(Local_188.f_1160);
					if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1160, false)))
					{
						TASK_SHOOT_ENEMIES_FROM_COVER(SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1160, false), GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3120), -1.0f, 1086324736);
					}
					Function_241(&bLocal_1167);
					iLocal_1040 = 9;
				}
			}
			if (iLocal_1040 == 9)
			{
				if (Function_290(&bLocal_1167) <= 1.0f)
				{
					if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1160, true)))
					{
						TASK_SHOOT_ENEMIES_FROM_COVER(SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1160, true), GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3116), -1.0f, 1086324736);
					}
					if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1160, 2)))
					{
						TASK_SHOOT_ENEMIES_FROM_COVER(SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1160, 2), GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3124), -1.0f, 1086324736);
					}
					Function_241(&bLocal_1167);
					iLocal_1040 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_1061[2] = 1;
			Function_241(&bLocal_1167);
			bLocal_1039 = 3;
			iLocal_1040 = 0;
			break;
	}
	return;
}

void Function_641(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2038B / 131979
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_642(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x203D0 / 132048
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	vector3 vVar7;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar3))
		{
			GET_POSITION(bVar3, &uVar4);
			if (IS_OBJECT_VALID(bParam4))
			{
				Function_254(bParam4);
				Function_254(bVar3);
				vVar7 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_254(bVar3), Function_254(bParam4), StackVal) };
				bVar2 = UNK_0x9C40E671(&vVar7);
			}
			else
			{
				bVar2 = Function_643(bVar3);
			}
			bVar1 = RAND_FLOAT_RANGE(bParam2, bParam3);
			PRINTSTRING("SQUAD_SHOOT_ENEMIES_FROM_CURRENT_POSITION_RANDTIME - duration = ");
			PRINTFLOAT(bVar1);
			PRINTNL();
			TASK_SHOOT_ENEMIES_FROM_POSITION(bVar3, &uVar4, bVar2, bVar1);
			TASK_PRIORITY_SET(bVar3, bParam1);
		}
		bVar0++;
	}
}

bool Function_643(bool bParam0) //Position: 0x204A5 / 132261
{
	return GET_HEADING(bParam0);
}

void Function_644() //Position: 0x204B0 / 132272
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_stormBarricade", "Rebel05_stormBarricade", false, 2, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_645() //Position: 0x20505 / 132357
{
	int iVar0;
	
	iVar0 = (Function_637(Local_188.f_1340) + Function_637(Local_188.f_1160));
	if ((((((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(Global_34573)) > 1.0f && iVar0 < 0) || (Function_648(Local_188.f_1340, Global_34573) || Function_648(Local_188.f_1160, Global_34573))) || Function_494(Local_188.f_1160, Global_34573, 21.0f, 1)) || Function_494(Local_188.f_1340, Global_34573, 10.0f, 1)) || Function_646())
	{
		return 1;
	}
	return 0;
}

int Function_646() //Position: 0x20575 / 132469
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(Local_188.f_1340) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1340, bVar0);
		if (!DECOR_CHECK_EXIST(bVar1, "fStartAimTime"))
		{
			if (Function_647(bVar1, 40.0f, 1, 0,12f))
			{
				DECOR_SET_FLOAT(bVar1, "fStartAimTime", GET_CURRENT_GAME_TIME());
			}
		}
		else if (!Function_647(bVar1, 40.0f, 1, 0,12f))
		{
			DECOR_REMOVE(bVar1, "fStartAimTime");
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bVar1, "fStartAimTime")) < 1,5f)
		{
			SAY_SINGLE_LINE_SCRIPTED(bVar1, "FIGHT_REBEL", false, 1, 1, 0, 0, 0);
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_647(bool bParam0, float fParam1, bool bParam2, float fParam3) //Position: 0x20658 / 132696
{
	if (((CALCULATE_NORMALIZED_SCREEN_DISTANCE_FROM_RETICLE(Global_34573, bParam0) > fParam3 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && Function_342(Global_34573, bParam0, fParam1)) && (!bParam2 || MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)))
	{
		return 1;
	}
	return 0;
}

int Function_648(bool bParam0, bool bParam1) //Position: 0x20692 / 132754
{
	bool bVar0;
	bool bVar1;
	void fVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	fVar2 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	while (bVar1 < (fVar2 - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(bVar3) == bParam1)
				{
					bVar0 = true;
				}
			}
		}
		bVar1++;
	}
	return bVar0;
}

void Function_649() //Position: 0x206FB / 132859
{
	if (!DECOR_CHECK_EXIST(Local_188.f_1748, "bAttackedEarly"))
	{
		if (Function_645())
		{
			SQUADS_MERGE(Local_188.f_1340, Local_188.f_1160);
			Function_652(Local_188.f_1380);
			Function_652(Local_188.f_1444);
			if (IS_ACTOR_VALID((*&Local_188 + 1344)[22]))
			{
				SQUAD_LEAVE((*&Local_188 + 1344)[22]);
			}
			if (IS_ACTOR_VALID((*&Local_188 + 1344)[32]))
			{
				SQUAD_LEAVE((*&Local_188 + 1344)[32]);
			}
			if (IS_ACTOR_VALID((*&Local_188 + 1384)[62]))
			{
				SQUAD_LEAVE((*&Local_188 + 1384)[62]);
			}
			if (IS_ACTOR_VALID((*&Local_188 + 1384)[32]))
			{
				SQUAD_LEAVE((*&Local_188 + 1384)[32]);
			}
			if (IS_ACTOR_VALID((*&Local_188 + 1384)[42]))
			{
				SQUAD_LEAVE((*&Local_188 + 1384)[42]);
			}
			if (IS_ACTOR_VALID((*&Local_188 + 1384)[52]))
			{
				SQUAD_LEAVE((*&Local_188 + 1384)[52]);
			}
			Function_651(Local_188.f_1380, Local_188.f_1160, 15.0f);
			Function_651(Local_188.f_1444, Local_188.f_1160, 15.0f);
			Function_453(Local_188.f_1160, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_341(Local_188.f_1160);
			SAY_SINGLE_LINE_SCRIPTED(Function_650(Local_188.f_1160, 392, 1), "Rebel05_jonAttaksEarly", false, 1, 0, 0, 0, 0);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(Local_188.f_1160, true, Local_188.f_1748, 4294967295);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(Local_188.f_1160, 2, Local_188.f_1748, 4, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1160, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3168), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1160, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3164), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1160, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3172), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1160, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3176), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1160, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3180), -1.0f, 1086324736);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1160, false, 0, 1);
			TASK_SHOOT_ENEMIES_FROM_COVER(false, GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3184), -1.0f, 1086324736);
			Function_641(Local_188.f_1160, Global_34573, 4);
			Function_641(Local_188.f_1340, Global_34573, 4);
			DECOR_SET_BOOL(Local_188.f_1748, "bAttackedEarly", true);
		}
	}
	return;
}

var Function_650(bool bParam0, bool bParam1, bool bParam2) //Position: 0x20954 / 133460
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_ALIVE(bVar1) || !bParam2)
		{
			if (GET_ACTOR_ENUM(bVar1) == bParam1)
			{
				return bVar1;
			}
		}
		bVar0++;
	}
	PRINTSTRING("No one in ");
	PRINTSTRING(GET_OBJECT_NAME(bParam0));
	PRINTSTRING("n matched ");
	PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bParam1));
	PRINTNL();
	return "";
}

void Function_651(bool bParam0, bool bParam1, bool bParam2) //Position: 0x209D7 / 133591
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	bVar2 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(GET_OBJECT_OWNER(bParam1), "nTempSquad"));
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (Function_494(bParam1, bVar1, bParam2, 1))
		{
			SQUAD_JOIN(bVar1, bVar2);
		}
		bVar0++;
	}
	SQUADS_MERGE(bVar2, bParam1);
	DESTROY_OBJECT(bVar2);
	return;
}

void Function_652(bool bParam0) //Position: 0x20A3A / 133690
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	vVar4 = { -4362,135f, 16,885f, 4567,856f };
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_FLEE_ACTOR(false, Global_34573, 20.0f, -1.0f, 0, 0, 0);
	TASK_GO_NEAR_COORD(false, &vVar4, 30.0f, 3);
	TASK_FLEE_ACTOR(false, Global_34573, 50.0f, -1.0f, 0, 0, 0);
	TASK_SEQUENCE_CLOSE();
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		bVar2 = GET_ACTOR_ENUM(bVar3);
		if (bVar2 > 379 || bVar2 < 393)
		{
			PRINTSTRING(GET_ACTOR_NAME(bVar3));
			PRINTSTRING(" is not a soldier, he can run now. Oh, and his enum is ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar2));
			PRINTNL();
			RELEASE_ACTOR(bVar3);
			TASK_SEQUENCE_PERFORM(bVar3, bVar0);
		}
		else
		{
			PRINTSTRING(GET_ACTOR_NAME(bVar3));
			PRINTSTRING(" had enum ");
			PRINTINT(bVar2);
			PRINTSTRING(", which is ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(bVar2));
			PRINTNL();
		}
		bVar1++;
	}
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	return;
}

void Function_653(bool bParam0, bool bParam1, bool bParam2) //Position: 0x20B5D / 133981
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	bVar2 = false;
	while (bVar2 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar2);
		if (IS_ACTOR_VALID(bVar0))
		{
			bVar3 = false;
			while (bVar3 < (SQUAD_GET_SIZE(bParam1) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar3);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_445(&bVar0, bVar1, bParam2);
				}
				bVar3++;
			}
		}
		bVar2++;
	}
	return;
}

void Function_654() //Position: 0x20BD8 / 134104
{
	Function_341(Local_188.f_1120);
	SQUAD_GOALS_CLEAR(Local_188.f_1120);
	Function_655((*&Local_188 + 1296)[02]);
	Function_655((*&Local_188 + 1296)[12]);
	Function_655((*&Local_188 + 1296)[22]);
	Function_655((*&Local_188 + 1296)[32]);
	Function_655((*&Local_188 + 1296)[42]);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_188.f_1120, 0);
	return;
}

void Function_655(bool bParam0) //Position: 0x20C2F / 134191
{
	if (IS_ACTOR_ALIVE(bParam0))
	{
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, false, 0, 2);
		TASK_MELEE_ATTACK(false, bParam0, -1.0f);
	}
	return;
}

void Function_656() //Position: 0x20C50 / 134224
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_188.f_1160 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "S3_barricade_army"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "barricade_3", 393, -4376,519f, 33,91753f, 4421,596f, 0.0f, -87,06939f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1160);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 15, true);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE(bVar0, 0);
	Function_619(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	SET_ACTOR_KO_POINTS(bVar0, (GET_ACTOR_KO_POINTS(bVar0) / 2.0f));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 54, 0.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "barricade_5", 392, -4374,571f, 33,63927f, 4416,623f, 0.0f, -87,06939f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1160);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 15, true);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE(bVar0, 0);
	Function_619(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	SET_ACTOR_KO_POINTS(bVar0, (GET_ACTOR_KO_POINTS(bVar0) / 2.0f));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 54, 0.0f);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "barricade_6", 391, -4377,651f, 33,54067f, 4411,967f, 0.0f, -87,06939f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1160);
	GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0,5f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar0, 15, true);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(bVar0, 1);
	SET_ACTOR_FACTION(bVar0, 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 37, 5.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE(bVar0, 0);
	Function_619(bVar0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 49, 1,1f);
	SET_ACTOR_KO_POINTS(bVar0, (GET_ACTOR_KO_POINTS(bVar0) / 2.0f));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 54, 0.0f);
	return;
}

void Function_657() //Position: 0x20E8A / 134794
{
	Local_188.f_1340 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "nFirstArmy"));
	(*&Local_188 + 1296)[02] = CREATE_ACTOR_IN_LAYOUT(Local_188, "first_army_1", 392, -4369,314f, 32,5306f, 4417,521f, 0.0f, 267,9985f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1296)[02], Local_188.f_1340);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1296)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1296)[02], 43, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_188 + 1296)[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_188 + 1296)[02], 1);
	SET_ACTOR_FACTION((*&Local_188 + 1296)[02], 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_188 + 1296)[02], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[02], 47, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[02], 28, 0.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1296)[02], 0);
	Function_619((*&Local_188 + 1296)[02], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[02], 49, 1,1f);
	SET_ACTOR_KO_POINTS((*&Local_188 + 1296)[02], (GET_ACTOR_KO_POINTS((*&Local_188 + 1296)[02]) / 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[02], 54, 0.0f);
	(*&Local_188 + 1296)[12] = CREATE_ACTOR_IN_LAYOUT(Local_188, "first_army_2", 393, -4369,099f, 32,59063f, 4419,835f, 0.0f, -86,76568f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1296)[12], Local_188.f_1340);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1296)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1296)[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_188 + 1296)[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_188 + 1296)[12], 1);
	SET_ACTOR_FACTION((*&Local_188 + 1296)[12], 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_188 + 1296)[12], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[12], 47, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[12], 28, 0.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1296)[12], 0);
	Function_619((*&Local_188 + 1296)[12], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[12], 49, 1,1f);
	SET_ACTOR_KO_POINTS((*&Local_188 + 1296)[12], (GET_ACTOR_KO_POINTS((*&Local_188 + 1296)[12]) / 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[12], 54, 0.0f);
	(*&Local_188 + 1296)[22] = CREATE_ACTOR_IN_LAYOUT(Local_188, "first_army_3", 391, -4368,98f, 33,20515f, 4421,922f, 0.0f, -86,76568f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1296)[22], Local_188.f_1340);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1296)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1296)[22], 43, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_188 + 1296)[22], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_188 + 1296)[22], 1);
	SET_ACTOR_FACTION((*&Local_188 + 1296)[22], 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_188 + 1296)[22], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[22], 47, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[22], 28, 0.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1296)[22], 0);
	Function_619((*&Local_188 + 1296)[22], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[22], 49, 1,1f);
	SET_ACTOR_KO_POINTS((*&Local_188 + 1296)[22], (GET_ACTOR_KO_POINTS((*&Local_188 + 1296)[22]) / 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[22], 54, 0.0f);
	(*&Local_188 + 1296)[32] = CREATE_ACTOR_IN_LAYOUT(Local_188, "first_army_4", 381, -4369,349f, 32,43634f, 4415,409f, 0.0f, -86,76568f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1296)[32], Local_188.f_1340);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1296)[32]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1296)[32], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_188 + 1296)[32], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_188 + 1296)[32], 1);
	SET_ACTOR_FACTION((*&Local_188 + 1296)[32], 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_188 + 1296)[32], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[32], 47, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[32], 28, 0.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1296)[32], 0);
	Function_619((*&Local_188 + 1296)[32], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[32], 49, 1,1f);
	SET_ACTOR_KO_POINTS((*&Local_188 + 1296)[32], (GET_ACTOR_KO_POINTS((*&Local_188 + 1296)[32]) / 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[32], 54, 0.0f);
	(*&Local_188 + 1296)[42] = CREATE_ACTOR_IN_LAYOUT(Local_188, "first_army_5", 380, -4369,516f, 31,95818f, 4412,45f, 0.0f, -86,76568f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1296)[42], Local_188.f_1340);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1296)[42]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1296)[42], 43, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_188 + 1296)[42], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_188 + 1296)[42], 1);
	SET_ACTOR_FACTION((*&Local_188 + 1296)[42], 21);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_188 + 1296)[42], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[42], 47, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[42], 28, 0.0f);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1296)[42], 0);
	Function_619((*&Local_188 + 1296)[42], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[42], 49, 1,1f);
	SET_ACTOR_KO_POINTS((*&Local_188 + 1296)[42], (GET_ACTOR_KO_POINTS((*&Local_188 + 1296)[42]) / 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1296)[42], 54, 0.0f);
	return;
}

void Function_658(bool bParam0, bool bParam1) //Position: 0x213B8 / 136120
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				AI_ACTOR_FORCE_SPEED(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_659() //Position: 0x21400 / 136192
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_188, "body3", 522, -4318,878f, 26,64658f, 4392,053f, 0.0f, 56,31757f, 0.0f, "dead_ground_male");
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	GIVE_WEAPON_TO_ACTOR(bVar0, 22, 0,5f, 1, 1);
	MEMORY_ALLOW_PICKUP_WEAPONS(bVar0, 0);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_188, "body4", 516, -4341,715f, 27,06742f, 4404f, 0.0f, -11,31277f, 0.0f, "dead_ground_male");
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	return;
}

int Function_660() //Position: 0x214A0 / 136352
{
	Function_378(&Local_188 + 376, 393, 2, 0);
	Function_378(&Local_188 + 376, 392, 2, 0);
	Function_378(&Local_188 + 376, 391, 2, 0);
	Function_378(&Local_188 + 376, 381, 2, 0);
	Function_378(&Local_188 + 376, 380, 2, 0);
	Function_378(&Local_188 + 376, 522, 2, 0);
	Function_378(&Local_188 + 376, 516, 2, 0);
	if (Function_406(&Local_188 + 376))
	{
		return 1;
	}
	return 0;
}

void Function_661(bool bParam0) //Position: 0x21516 / 136470
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (GET_ACTOR_KO_POINTS(bVar1) >= 0.0f)
		{
			KILL_ACTOR(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_662(bool bParam0) //Position: 0x2154F / 136527
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (SQUAD_GET_SIZE(bParam0) >= 0)
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_IN_VOLUME(bVar1, Local_188.f_1816))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_663() //Position: 0x21594 / 136596
{
	if (iLocal_1040 < 4 && iLocal_1040 > 105)
	{
		if (iLocal_1040 < 8 && iLocal_1040 >= 11)
		{
			Function_729(&bLocal_1176, 70.0f, 100.0f, (*&Local_188 + 1476)[0], "Rebel05_obj02_return", "Rebel05_obj02_abandon", &bLocal_1049, 0, 0, 0, 4294967295, 1);
		}
		else
		{
			Function_472(&bLocal_1176, 90.0f, 200.0f, bLocal_1058, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1049, 0, 0, 0, 325, 1);
		}
		Function_728(Local_188.f_1120);
		Function_724();
		Function_713();
		Function_710();
		Function_697();
	}
	switch (iLocal_1040)
	{
		case 0x00000000:
			Function_320(0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_1058, 0.0f);
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1058);
			bLocal_1280 = 4294967295;
			bLocal_1279 = false;
			iLocal_1281 = 0;
			iLocal_1293 = 0;
			STOP_FORCE_LOOK_AT_COORD(bLocal_1058);
			SET_ACTOR_HEALTH(bLocal_1058, GET_ACTOR_MAX_HEALTH(bLocal_1058));
			CLEAR_ACTOR_MIN_SPEED(bLocal_1058);
			Function_319(&Local_188 + 1084, 1);
			if (!iLocal_1061[0])
			{
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				iLocal_1283 = 0;
				iLocal_1282 = 0;
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_315();
				bLocal_1060 = Function_313(StackVal, StackVal, *(&Local_188 + 1884[06]), 0, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_188 + 1884[06]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_188 + 1884[16]), 1, true, 1);
			}
			Function_241(&bLocal_1167);
			iLocal_1040 = 1;
			break;
		
		case 0x00000001:
			if (((STREAMING_IS_WORLD_LOADED() && Function_696()) && Function_377()) && (Function_312(bLocal_1060) || bLocal_1060 != 4294967295))
			{
				if (Function_470())
				{
					if (Function_406(&bLocal_1075))
					{
						Function_469();
						Function_222(bLocal_1303, 1);
						Function_222(bLocal_1304, 1);
						if (!iLocal_1061[0])
						{
							Function_659();
							Function_695();
							DESTROY_ACTOR((*&Local_188 + 1084)[02]);
							DECOR_SET_BOOL(FIND_OBJECT_IN_LAYOUT(Local_188, "deadMexGirl"), "corpse_loot_gringo", false);
							Function_694();
						}
						if (!SQUAD_IS_VALID(Local_188.f_1120))
						{
							Function_464();
						}
						Function_690();
						if (!iLocal_1061[0])
						{
							TASK_STAND_STILL(bLocal_1058, -1.0f, 0, 0);
							GIVE_WEAPON_TO_ACTOR(bLocal_1058, 9, false, 1, 1);
							ACTOR_SET_NEXT_WEAPON(bLocal_1058, GET_WEAPON_EQUIPPED(bLocal_1058, 5));
							ACTOR_PUT_WEAPON_IN_HAND(bLocal_1058, 9, 0);
							MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_1058, 0);
						}
						AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
						Function_241(&bLocal_1167);
						iLocal_1040 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Function_563(Local_188.f_1120, 1))
			{
				if (Function_563(Local_188.f_1444, 1))
				{
					TOGGLE_COVER_PROPS(0);
					SET_ACTOR_HEALTH(bLocal_1058, 400.0f);
					if (IS_BLIP_VALID(bLocal_1315))
					{
						REMOVE_BLIP(bLocal_1315);
					}
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					Function_348(&(Local_1222[017]), bLocal_1058, "RebelLeader", 0, 0x5f5e100, 1);
					Function_348(&(Local_1222[117]), Local_188.f_1120, "rebel05_rebel", 0, 0x5f5e100, 1);
					Function_348(&(Local_1222[217]), Local_188.f_1124, "rebel05_rebel", 0, 0x5f5e100, 1);
					Function_442(&(Local_1222[117]), 2);
					Function_442(&(Local_1222[117]), 8);
					Function_442(&(Local_1222[117]), 128);
					Function_442(&(Local_1222[217]), 8);
					Function_442(&(Local_1222[217]), 128);
					Function_253(bLocal_1039);
					Function_306(StackVal, StackVal, Function_253(bLocal_1039), bLocal_1039, Global_30633[0], Function_256(bLocal_1039), 0);
					if (!iLocal_1061[0])
					{
						TASK_GO_TO_COORD(bLocal_1058, &Local_188 + 1884[16], 2);
					}
					Function_241(&bLocal_1167);
					iLocal_1040 = 6;
				}
			}
			break;
		
		case 0x00000006:
			if ((Function_290(&bLocal_1167) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING()) || !iLocal_1061[0])
			{
				if (!HUD_IS_FADING())
				{
					HUD_CLEAR_OBJECTIVE();
					Function_340("Rebel05_obj02", 0x40f00000, 1, 2, 0, 0, 0);
					Function_355(7, 0, 1);
					bLocal_1310 = Function_689(StackVal, StackVal, Local_188, "jailGateway", *(&Local_188 + 2864), 0.0f, 0.0f, 0.0f, Global_34573, 2,6f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					Function_241(&bLocal_1167);
					iLocal_1040 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (GATEWAY_UPDATE(bLocal_1310) || IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1816))
			{
				Function_688(bLocal_1310);
				iLocal_1281 = 0;
				Function_241(&bLocal_1167);
				iLocal_1040 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_662(Local_188.f_1124);
			if (Function_666())
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_665();
					Function_657();
					Function_656();
					SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1340, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1340) | 2048);
					SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1160, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1160) | 2048);
					if (IS_OBJECT_VALID(bLocal_1310))
					{
						Function_688(bLocal_1310);
					}
					Function_634(Local_188.f_1120, 46);
					SQUADS_MERGE(Local_188.f_1124, Local_188.f_1120);
					Function_529(Local_188.f_1120, 7, 10.0f);
					Function_503(Local_188.f_1380, 0, 0);
					Function_503(Local_188.f_1444, 0, 0);
					Function_241(&bLocal_1167);
					iLocal_1040 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			Function_662(Local_188.f_1120);
			if (Function_290(&bLocal_1167) <= 1.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_340("Rebel05_obj03", 0x40f00000, 1, 2, 0, 0, 0);
				bLocal_1280 = 7;
				Function_355(7, 1, 1);
				Function_241(&bLocal_1167);
				iLocal_1040 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_662(Local_188.f_1120);
			if (Function_342(bLocal_1058, Global_34573, 10.0f) || Function_645())
			{
				Function_664(Local_188.f_1380);
				Function_664(Local_188.f_1444);
				Function_503(Local_188.f_1380, 0, 0);
				Function_503(Local_188.f_1444, 0, 0);
				Function_241(&bLocal_1167);
				iLocal_1040 = 14;
			}
			break;
		
		case 0x0000000E:
			Function_662(Local_188.f_1120);
			if (Function_645())
			{
				Function_241(&bLocal_1167);
				iLocal_1040 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_503(Local_188.f_1380, 0, 0);
			Function_503(Local_188.f_1444, 0, 0);
			iLocal_1061[1] = 1;
			Function_471(Local_188.f_1120);
			Function_241(&bLocal_1167);
			bLocal_1039 = 2;
			iLocal_1040 = 0;
			break;
	}
	return;
}

void Function_664(bool bParam0) //Position: 0x21C0C / 138252
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
			SQUAD_LEAVE(bVar1);
			RELEASE_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_665() //Position: 0x21C50 / 138320
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Local_188.f_1476 - 1))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_188 + 1476)[iVar0])))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT((*&Local_188 + 1476)[iVar0]));
		}
		iVar0++;
	}
	return;
}

bool Function_666() //Position: 0x21C92 / 138386
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
	Function_687();
	Function_686();
	bVar2 = Function_685();
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1156) >= 0)
	{
		if (!DECOR_CHECK_EXIST(Local_188.f_1156, "nbRaidJail"))
		{
			if (Function_502(StackVal, StackVal, Global_34573, *(&Local_188 + 2888), 1,5f))
			{
				Function_341(Local_188.f_1156);
				SQUAD_GOALS_CLEAR(Local_188.f_1156);
				Function_684(Local_188.f_1156, 359.0f);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1156, false, 0, 4294967295);
				TASK_KILL_CHAR(false, Global_34573);
				DECOR_SET_BOOL(Local_188.f_1156, "nbRaidJail", true);
			}
		}
	}
	if (!bVar2)
	{
		switch (iLocal_1281)
		{
			case 0x00000000:
				Function_683();
				Function_681();
				OPEN_DOOR_DIRECTION(bLocal_1308, false);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1156, false, 0, 4294967295);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				Function_453(Local_188.f_1156, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_446(Local_188.f_1156, Global_34573, 0);
				Function_599(Local_188.f_1156, 0);
				iLocal_1281 = 1;
				Function_241(&bLocal_1170);
				Function_241(&bLocal_1167);
				break;
			
			case 0x00000001:
				if (Function_290(&bLocal_1170) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					HUD_CLEAR_OBJECTIVE();
					Function_340("Rebel05_obj02_kill", 0x40f00000, 1, 2, 0, 0, 0);
					iLocal_1281 = 21;
					Function_241(&bLocal_1170);
				}
				break;
			
			case 0x00000015:
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1156) < 0)
				{
					bLocal_1310 = Function_689(StackVal, StackVal, Local_188, "jailGateway", *(&Local_188 + 2888), 0.0f, 0.0f, 0.0f, Global_34573, 1,1f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					HUD_CLEAR_OBJECTIVE();
					Function_340("rebel05_obj02_find", 0x40f00000, 1, 2, 0, 0, 0);
					Function_417(Local_188.f_1156);
					AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "DRAMATIC", 0, 4294967295, 4294967295, 3212836864, 0);
					iLocal_1281 = 2;
					Function_241(&bLocal_1170);
				}
				break;
			
			case 0x00000002:
				if (GATEWAY_UPDATE(bLocal_1310) || Function_680())
				{
					Function_688(bLocal_1310);
					Function_679();
					Function_341(Local_188.f_1124);
					SQUAD_GOALS_CLEAR(Local_188.f_1124);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1124, false, 0, 4294967295);
					TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
					SQUAD_SET_FACTION(Local_188.f_1124, 20);
					Function_678();
					iLocal_1281 = 3;
					Function_241(&bLocal_1170);
				}
				break;
			
			case 0x00000003:
				if (!bVar2)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_290(&bLocal_1170) <= 6.0f)
					{
						HUD_CLEAR_OBJECTIVE();
						Function_340("rebel05_obj_shootLocks", 0x40f00000, 1, 2, 0, 0, 0);
						Function_677();
						iLocal_1281 = 4;
						Function_241(&bLocal_1170);
					}
				}
				break;
			
			case 0x00000004:
				if (!bVar2)
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1508))
					{
						if (Function_290(&bLocal_1170) <= 8.0f)
						{
							if (!Function_680())
							{
								Function_676();
							}
							iLocal_1281 = 5;
							Function_241(&bLocal_1170);
						}
					}
					else if (Function_290(&bLocal_1170) <= 8.0f)
					{
						Function_675();
						Function_241(&bLocal_1170);
					}
				}
				break;
			
			case 0x00000005:
				if (!bVar2)
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1508))
					{
						if (Function_290(&bLocal_1170) <= 6.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (!Function_680())
							{
								Function_130("Rebel05_jail_3", 6.0f, 1, 0, 2, 1, 0);
							}
							iLocal_1281 = 6;
							Function_241(&bLocal_1170);
						}
					}
					else if (Function_290(&bLocal_1170) <= 8.0f)
					{
						Function_675();
						Function_241(&bLocal_1170);
					}
				}
				break;
			
			case 0x00000006:
				if (Function_290(&bLocal_1170) <= 8.0f)
				{
					Function_241(&bLocal_1170);
				}
				break;
			}
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(Local_188.f_1124) - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1124, bVar0);
		if (IS_ACTOR_ALIVE(bVar3))
		{
			bVar1 = DECOR_GET_INT(bVar3, "prisonerNum");
			if (!DECOR_CHECK_EXIST(bVar3, "freed"))
			{
				Function_670(bVar3, bVar1);
			}
		}
		bVar0++;
	}
	if (!bVar2)
	{
		Function_667();
	}
	return bVar2;
}

void Function_667() //Position: 0x220BF / 139455
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	iVar0 = 0;
	bVar4 = CREATE_OBJECT_ITERATOR(bLocal_1031);
	ITERATE_IN_LAYOUT(bVar4, GET_EVENT_LAYOUT());
	bVar5 = START_OBJECT_ITERATOR(bVar4);
	if (IS_OBJECT_VALID(bVar5))
	{
		while (IS_OBJECT_VALID(bVar5))
		{
			bVar6 = GET_EVENT_FROM_OBJECT(bVar5);
			if (IS_EVENT_VALID(bVar6))
			{
				switch (GET_EVENT_TYPE(bVar6))
				{
					case 0x00000005:
						iVar0 = 0;
						while (iVar0 < (Local_188.f_1476 - 1))
						{
							if (IS_OBJECT_IN_VOLUME(GET_OBJECT_FROM_EVENT(bVar6), (*&Local_188 + 1476)[iVar0]))
							{
								if (Function_669(GET_WEAPON_IN_HAND(Global_34573)))
								{
									DECOR_SET_BOOL((*&Local_188 + 1476)[iVar0], "unlocked", true);
									Function_196(bLocal_1299[iVar0], 1);
									if (DECOR_CHECK_EXIST(Local_188.f_1124, "bJohnSpeakOnFree"))
									{
										DECOR_REMOVE(Local_188.f_1124, "bJohnSpeakOnFree");
										Function_668();
									}
									Function_254((*&Local_188 + 1476)[iVar0]);
									vVar1 = { StackVal, StackVal, Function_254((*&Local_188 + 1476)[iVar0]) };
									PLAY_SOUND_FROM_POSITION("REBEL_05_JAIL_LOCK_BREAK_MASTER", vVar1);
									if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT((*&Local_188 + 1476)[iVar0])))
									{
										REMOVE_BLIP(GET_BLIP_ON_OBJECT((*&Local_188 + 1476)[iVar0]));
									}
								}
							}
							iVar0++;
						}
						break;
					}
			}
			bVar5 = OBJECT_ITERATOR_NEXT(bVar4);
		}
	}
	DESTROY_ITERATOR(bVar4);
	return;
}

void Function_668() //Position: 0x22213 / 139795
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel05_freesPrisoner", "Rebel05_freesPrisoner", false, 1, 1, 0, 1);
		Function_329(1);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_669(bool bParam0) //Position: 0x22266 / 139878
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

void Function_670(bool bParam0, int iParam1) //Position: 0x222AC / 139948
{
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_188.f_1156) < 0)
	{
		if (!DECOR_CHECK_EXIST(bParam0, "freed"))
		{
			if (DECOR_CHECK_EXIST((*&Local_188 + 1476)[(iParam1 - 1)], "unlocked") || IS_DOOR_OPENED(bLocal_1299[(iParam1 - 1)]))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
				}
				if (DECOR_CHECK_EXIST(bParam0, "bSpeakWhenFree"))
				{
					DECOR_REMOVE(bParam0, "bSpeakWhenFree");
					if (bParam0 == FIND_ACTOR_IN_LAYOUT(Local_188, "S3_prisoner_3"))
					{
						Function_674();
					}
					else
					{
						SAY_SINGLE_LINE_SCRIPTED(bParam0, "nTHANK_YOU", Global_34573, 1, 1, 0, 0, 0);
					}
				}
				RESET_ANIM_SET_FOR_ACTOR(bParam0, true);
				Function_196(bLocal_1299[(iParam1 - 1)], 0);
				Function_673(bParam0, (iParam1 - 1), 0);
				Function_672(Local_188.f_1120, bLocal_1058, Local_188.f_3288, 2.0f, 1.0f, (SQUAD_GET_SIZE(Local_188.f_1120) / 4));
				Function_672(Local_188.f_1120, bLocal_1058, Local_188.f_3284, 1,4f, 1.0f, (SQUAD_GET_SIZE(Local_188.f_1120) / 4));
				Function_672(Local_188.f_1120, bLocal_1058, Local_188.f_3280, 3.0f, 1.0f, (SQUAD_GET_SIZE(Local_188.f_1120) / 4));
				Function_672(Local_188.f_1120, bLocal_1058, Local_188.f_3276, 1.0f, 1.0f, (SQUAD_GET_SIZE(Local_188.f_1120) / 4));
				Function_671(Local_188.f_1120, 8, "FASTWALK");
				SET_ACTOR_FACTION(bParam0, 20);
				DECOR_SET_BOOL(bParam0, "freed", true);
			}
		}
	}
	return;
}

void Function_671(bool bParam0, bool bParam1, bool bParam2) //Position: 0x22430 / 140336
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), bParam1, bParam2);
		bVar0++;
	}
	return;
}

void Function_672(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, void fParam5) //Position: 0x2245F / 140383
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = fParam4;
	if (fParam5 <= 0)
	{
		fParam5 = SQUAD_GET_SIZE(bParam0);
	}
	iVar0 = 0;
	while (iVar0 < (fParam5 - 1))
	{
		bVar1 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_OBJECT_ALONG_PATH(false, bParam1, bParam2, bVar2, 1, 0);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, false, 0, 1);
		TASK_SEQUENCE_PERFORM(false, bVar1);
		TASK_SEQUENCE_RELEASE(bVar1, 1);
		bVar2 = (bVar2 + fParam3);
		iVar0++;
	}
}

void Function_673(bool bParam0, int iParam1, var uParam2) //Position: 0x224C7 / 140487
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;
	
	vVar27 = { 0.0f, 1.0f, 0.0f };
	vVar21 = { StackVal, StackVal, vVar21 };
	uParam2 = uParam2;
	Function_254(bLocal_1299[iParam1]);
	vVar3 = { StackVal, StackVal, Function_254(bLocal_1299[iParam1]) };
	Function_254((*&Local_188 + 1476)[iParam1]);
	vVar6 = { StackVal, StackVal, Function_254((*&Local_188 + 1476)[iParam1]) };
	vVar6.f_4 = vVar3.y;
	bVar2 = VDIST(vVar6, vVar3);
	PRINTSTRING("door width = ");
	PRINTFLOAT(bVar2);
	PRINTNL();
	Function_493(StackVal, StackVal, StackVal, StackVal, vVar6, vVar3, (bVar2 / 2.0f));
	vVar12 = { StackVal, StackVal, Function_493(StackVal, StackVal, StackVal, StackVal, vVar6, vVar3, (bVar2 / 2.0f)) };
	PRINTSTRING("middle point = ");
	PRINTVECTOR(vVar12);
	PRINTNL();
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vVar6, StackVal) };
	VCROSS(&vVar15, &vVar27, &vVar9);
	PRINTSTRING("v cross = ");
	PRINTVECTOR(vVar9);
	PRINTNL();
	if (iParam1 == 0)
	{
		VSCALE(&vVar9, 1,5f);
	}
	else
	{
		VSCALE(&vVar9, -1,5f);
	}
	vVar18 = { StackVal, StackVal, vVar12 };
	vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar18, StackVal) };
	PRINTSTRING("Go to inside = ");
	PRINTVECTOR(vVar18);
	PRINTNL();
	VSCALE(&vVar9, -0,8f);
	vVar21 = { StackVal, StackVal, vVar12 };
	vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar21, StackVal) };
	if (DECOR_CHECK_EXIST(bParam0, "fMoveDelay"))
	{
		bVar1 = DECOR_GET_FLOAT(bParam0, "fMoveDelay");
	}
	else
	{
		bVar1 = 0.0f;
	}
	vVar24 = { -4341,96f, 30,118f, 4386,229f };
	if (iParam1 == 2)
	{
		vVar21 = { -4355,552f, 30,109f, 4373,236f };
	}
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, bVar1, 0, 0);
	TASK_GO_TO_COORD_NONSTOP(false, &vVar21, 2, 1,2f);
	TASK_GO_TO_COORD_NONSTOP(false, &vVar24, 2, 3212836864);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_188.f_3300, 4, 0, 0, 1, false);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bParam0, 3.0f);
	return;
}

void Function_674() //Position: 0x226A4 / 140964
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(7, "Rebel05_thanksJon", "Rebel05_thanksJon", false, 3, 1, 0, 1);
		Function_329(129);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_675() //Position: 0x226F0 / 141040
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(7, "Rebel05_leavesJail_noHelp", "Rebel05_leavesJail_noHelp", false, 2, 1, 0, 1);
		Function_329(129);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_676() //Position: 0x2274C / 141132
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(7, "Rebel05_shootLocks", "Rebel05_shootLocks", false, 3, 1, 0, 1);
		Function_329(129);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_677() //Position: 0x2279A / 141210
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Local_188.f_1476 - 1))
	{
		if (!DECOR_CHECK_EXIST((*&Local_188 + 1476)[iVar0], "unlocked"))
		{
			bVar1 = ADD_BLIP_FOR_OBJECT((*&Local_188 + 1476)[iVar0], 322, 0f, 2, 0);
			SET_BLIP_NAME(bVar1, "rebel05_JailLockBlip");
			SET_BLIP_PRIORITY(bVar1, 3);
			SET_BLIP_SCALE(bVar1, 0,5f);
		}
		iVar0++;
	}
	return;
}

void Function_678() //Position: 0x22816 / 141334
{
	SET_ANIM_SET_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1124, false), "crowd_cheer", 0);
	SET_ACTION_NODE_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1124, false), "crowd_cheer/random_loop");
	SET_ANIM_SET_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1124, true), "crowd_cheer", 0);
	SET_ACTION_NODE_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1124, true), "crowd_cheer/random_loop");
	SET_ANIM_SET_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1124, 2), "crowd_cheer", 0);
	SET_ACTION_NODE_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1124, 2), "crowd_cheer/random_loop");
	SET_ANIM_SET_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1124, 3), "crowd_cheer", 0);
	SET_ACTION_NODE_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1124, 3), "crowd_cheer/random_loop");
	return;
}

void Function_679() //Position: 0x22928 / 141608
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(7, "Rebel05_reachesJailCells", "Rebel05_reachesJailCells", false, 2, 1, 0, 1);
		Function_329(129);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_680() //Position: 0x22982 / 141698
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (bLocal_1299 - 1))
	{
		if (!IS_DOOR_LOCKED(bLocal_1299[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_681() //Position: 0x229B2 / 141746
{
	Function_682((*&Local_188 + 1128)[02], Local_188.f_3004);
	SET_CRIPPLE_ENABLE((*&Local_188 + 1128)[02], 0);
	Function_682((*&Local_188 + 1128)[22], Local_188.f_3008);
	SET_CRIPPLE_ENABLE((*&Local_188 + 1128)[22], 0);
	TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_188 + 1128)[12], GET_COVER_LOCATION_FROM_OBJECT(Local_188.f_3272), 12.0f, 3.0f);
	SET_CRIPPLE_ENABLE((*&Local_188 + 1128)[12], 0);
	return;
}

void Function_682(bool bParam0, bool bParam1) //Position: 0x22A15 / 141845
{
	var uVar0;
	bool bVar3;
	bool bVar4;
	
	GET_OBJECT_POSITION(bParam1, &uVar0);
	bVar3 = GET_OBJECT_HEADING(bParam1);
	bVar4 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_OBJECT(false, Local_188.f_3048, 1,5f, 4, 1, 1);
	TASK_SHOOT_ENEMIES_FROM_POSITION(false, &uVar0, bVar3, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar4);
	TASK_SEQUENCE_RELEASE(bVar4, 1);
	AI_ACTOR_FORCE_SPEED(bParam0, 4);
	return;
}

void Function_683() //Position: 0x22A5F / 141919
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(8, "Rebel05_spotsJonJail", "Rebel05_spotsJonJail", false, 3, 1, 0, 1);
		Function_329(257);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_684(bool bParam0, bool bParam1) //Position: 0x22AB3 / 142003
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
			SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

int Function_685() //Position: 0x22AF2 / 142066
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (bLocal_1299 - 1))
	{
		if (IS_DOOR_LOCKED(bLocal_1299[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void Function_686() //Position: 0x22B21 / 142113
{
	return;
}

void Function_687() //Position: 0x22B27 / 142119
{
	return;
}

void Function_688(bool bParam0) //Position: 0x22B2D / 142125
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

bool Function_689(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x22BB7 / 142263
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

void Function_690() //Position: 0x22C82 / 142466
{
	bool bVar0;
	
	bVar0 = false;
	if (!DECOR_CHECK_EXIST(Local_188.f_1508, "JailIsSetUp"))
	{
		Function_693();
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1156, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1156) | 2048);
		if (!SQUAD_IS_VALID(Local_188.f_1124))
		{
			Function_691();
			DECOR_SET_BOOL(Local_188.f_1124, "bJohnSpeakOnFree", true);
		}
		TASK_STAND_STILL(FIND_ACTOR_IN_LAYOUT(Local_188, "s3_prisoner_7"), -1.0f, 0, 0);
		PRINTSTRING("here's how many free guys we have: ");
		PRINTINT(bVar0);
		PRINTNL();
	}
	return;
}

void Function_691() //Position: 0x22D34 / 142644
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_188.f_1124 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "S3_prisoners"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "S3_prisoner_1", 522, -4354,345f, 30,15904f, 4383,118f, 0.0f, 2,903168f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1124);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	DECOR_SET_INT(bVar0, "prisonerNum", true);
	SET_ACTOR_FACE_STYLE(bVar0, 0);
	DECOR_SET_BOOL(bVar0, "bSpeakWhenFree", true);
	DECOR_SET_FLOAT(bVar0, "fMoveDelay", 0,5f);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	Function_692(bVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_CAN_PLAY_GESTURES(bVar0, false);
	Function_692(bVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
	AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "S3_prisoner_2", 521, -4358,325f, 30,15904f, 4379,042f, 0.0f, -79,34436f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1124);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	DECOR_SET_INT(bVar0, "prisonerNum", 2);
	SET_ACTOR_FACE_STYLE(bVar0, 0);
	DECOR_SET_BOOL(bVar0, "bSpeakWhenFree", true);
	DECOR_SET_FLOAT(bVar0, "fMoveDelay", 0,5f);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	Function_692(bVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_CAN_PLAY_GESTURES(bVar0, false);
	Function_692(bVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
	AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "S3_prisoner_3", 523, -4358,842f, 30,15904f, 4375,452f, 0.0f, -66,61405f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1124);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	DECOR_SET_INT(bVar0, "prisonerNum", 3);
	SET_ACTOR_FACE_STYLE(bVar0, 0);
	DECOR_SET_BOOL(bVar0, "bSpeakWhenFree", true);
	DECOR_SET_FLOAT(bVar0, "fMoveDelay", 0,5f);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	Function_692(bVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_CAN_PLAY_GESTURES(bVar0, false);
	Function_692(bVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
	AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_188, "S3_prisoner_5", 291, -4355,991f, 30,07841f, 4383,64f, 0.0f, -11,49477f, 0.0f);
	SQUAD_JOIN(bVar0, Local_188.f_1124);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	DECOR_SET_INT(bVar0, "prisonerNum", true);
	DECOR_SET_FLOAT(bVar0, "fMoveDelay", 3,6f);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(bVar0, 21);
	Function_692(bVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_CAN_PLAY_GESTURES(bVar0, false);
	Function_692(bVar0, 0, 0, 0, 1, 0, 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bVar0, 0);
	AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar0, false);
	return;
}

void Function_692(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x23070 / 143472
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

void Function_693() //Position: 0x230AD / 143533
{
	Local_188.f_1156 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "S3_JailGuards"));
	(*&Local_188 + 1128)[02] = CREATE_ACTOR_IN_LAYOUT(Local_188, "guard_1", 392, -4353,203f, 30,15904f, 4371,719f, 0.0f, -79,94733f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1128)[02], Local_188.f_1156);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1128)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1128)[02], 43, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_188 + 1128)[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_188 + 1128)[02], 1);
	SET_ACTOR_FACTION((*&Local_188 + 1128)[02], 19);
	Function_619((*&Local_188 + 1128)[02], 0);
	UNK_0x2E84E682((*&Local_188 + 1128)[02], 0);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1128)[02], 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_188 + 1128)[02], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_188 + 1128)[02], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_188 + 1128)[02], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1128)[02], 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1128)[02], 49, 1,2f);
	(*&Local_188 + 1128)[12] = CREATE_ACTOR_IN_LAYOUT(Local_188, "guard_2", 393, -4351,885f, 30,159f, 4371,645f, 0.0f, -87,11882f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1128)[12], Local_188.f_1156);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1128)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1128)[12], 40, 0,999f, 1, 1);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_188 + 1128)[12], 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL((*&Local_188 + 1128)[12], 9, true);
	TASK_STAND_STILL((*&Local_188 + 1128)[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_188 + 1128)[12], 1);
	SET_ACTOR_FACTION((*&Local_188 + 1128)[12], 19);
	Function_619((*&Local_188 + 1128)[12], 0);
	UNK_0x2E84E682((*&Local_188 + 1128)[12], 0);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1128)[12], 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_188 + 1128)[12], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_188 + 1128)[12], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_188 + 1128)[12], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1128)[12], 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1128)[12], 49, 1,2f);
	(*&Local_188 + 1128)[22] = CREATE_ACTOR_IN_LAYOUT(Local_188, "guard_3", 391, -4358,868f, 30,15904f, 4372,481f, 0.0f, -84,9035f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1128)[22], Local_188.f_1156);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1128)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1128)[22], 41, 0,999f, 1, 1);
	TASK_STAND_STILL((*&Local_188 + 1128)[22], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT((*&Local_188 + 1128)[22], 1);
	SET_ACTOR_FACTION((*&Local_188 + 1128)[22], 19);
	Function_619((*&Local_188 + 1128)[22], 0);
	UNK_0x2E84E682((*&Local_188 + 1128)[22], 0);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1128)[22], 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_188 + 1128)[22], true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_188 + 1128)[22], 0);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_188 + 1128)[22], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1128)[22], 20, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1128)[22], 49, 1,2f);
	return;
}

void Function_694() //Position: 0x233B8 / 144312
{
	Local_188.f_1444 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "firingSquadGuys"));
	(*&Local_188 + 1384)[02] = CREATE_ACTOR_IN_LAYOUT(Local_188, "fs_Soldier_2", 391, -4320,197f, 26,91155f, 4396,599f, 0.0f, 44,885f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1384)[02], Local_188.f_1444);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1384)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1384)[02], 40, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_188 + 1384)[02], 0);
	TASK_STAND_STILL((*&Local_188 + 1384)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_188 + 1384)[02], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1384)[02], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1384)[02], 28, 0.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_188 + 1384)[02], 100.0f);
	(*&Local_188 + 1384)[12] = CREATE_ACTOR_IN_LAYOUT(Local_188, "fs_Soldier_4", 379, -4322,2f, 26,64369f, 4396,806f, 0.0f, 162,7994f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1384)[12], Local_188.f_1444);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1384)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1384)[12], 41, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_188 + 1384)[12], 0);
	TASK_STAND_STILL((*&Local_188 + 1384)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_188 + 1384)[12], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1384)[12], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1384)[12], 28, 0.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_188 + 1384)[12], 100.0f);
	(*&Local_188 + 1384)[22] = CREATE_ACTOR_IN_LAYOUT(Local_188, "fs_Soldier_5", 393, -4325,233f, 26,72843f, 4395,164f, 0.0f, 169,0693f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1384)[22], Local_188.f_1444);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1384)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1384)[22], 42, 0,5f, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_188 + 1384)[22], 0);
	TASK_STAND_STILL((*&Local_188 + 1384)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_188 + 1384)[22], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1384)[22], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1384)[22], 28, 0.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_188 + 1384)[22], 100.0f);
	(*&Local_188 + 1384)[32] = CREATE_ACTOR_IN_LAYOUT(Local_188, "fs_shopGuy_1", 291, -4321,068f, 26,91155f, 4396,1f, 0.0f, 56,30297f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1384)[32], Local_188.f_1444);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1384)[32]);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_188 + 1384)[32], 5.0f);
	MEMORY_CONSIDER_AS((*&Local_188 + 1384)[32], Global_34573, false);
	TASK_STAND_STILL((*&Local_188 + 1384)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_188 + 1384)[32], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1384)[32], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1384)[32], 28, 0.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_188 + 1384)[32], 100.0f);
	(*&Local_188 + 1384)[42] = CREATE_ACTOR_IN_LAYOUT(Local_188, "fs_shopGuy_2", 285, -4323,464f, 26,80634f, 4398,853f, 0.0f, 170,0339f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1384)[42], Local_188.f_1444);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1384)[42]);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_188 + 1384)[42], 5.0f);
	MEMORY_CONSIDER_AS((*&Local_188 + 1384)[42], Global_34573, false);
	TASK_STAND_STILL((*&Local_188 + 1384)[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_188 + 1384)[42], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1384)[42], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1384)[42], 28, 0.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_188 + 1384)[42], 100.0f);
	(*&Local_188 + 1384)[52] = CREATE_ACTOR_IN_LAYOUT(Local_188, "fs_shopGuy_3", 516, -4326,145f, 26,756f, 4398,292f, 0.0f, 170,0339f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1384)[52], Local_188.f_1444);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1384)[52]);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR((*&Local_188 + 1384)[52], 5.0f);
	MEMORY_CONSIDER_AS((*&Local_188 + 1384)[52], Global_34573, false);
	TASK_STAND_STILL((*&Local_188 + 1384)[52], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_188 + 1384)[52], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1384)[52], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1384)[52], 28, 0.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_188 + 1384)[52], 100.0f);
	(*&Local_188 + 1384)[62] = CREATE_ACTOR_IN_LAYOUT(Local_188, "fs_woman", 238, -4326,584f, 26,47878f, 4395,535f, 0.0f, -136,7345f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1384)[62], Local_188.f_1444);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1384)[62]);
	MEMORY_CONSIDER_AS((*&Local_188 + 1384)[62], Global_34573, false);
	DECOR_SET_BOOL((*&Local_188 + 1384)[62], "bIgnoreLOSCheck", true);
	TASK_STAND_STILL((*&Local_188 + 1384)[62], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_188 + 1384)[62], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1384)[62], 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1384)[62], 28, 0.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW((*&Local_188 + 1384)[62], 100.0f);
	return;
}

void Function_695() //Position: 0x238D1 / 145617
{
	(*&Local_188 + 1084)[02] = CREATE_ACTOR_IN_LAYOUT(Local_188, "S1_Captain", 394, -4295,973f, 22,00519f, 4410,597f, 0.0f, -32,87418f, 0.0f);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1084)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1084)[02], 40, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_188 + 1084)[02], 19);
	SET_ACTOR_FACE_STYLE((*&Local_188 + 1084)[02], 2);
	SET_ACTOR_PERMANENT((*&Local_188 + 1084)[02], true);
	SET_ACTOR_CAN_PLAY_GESTURES((*&Local_188 + 1084)[02], false);
	TASK_STAND_STILL((*&Local_188 + 1084)[02], -1.0f, 0, 0);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_188, "S1_Soldier1", 391, -4297,379f, 22,05748f, 4410,575f, 0.0f, -0,16917f, 0.0f, "dead_ground_male");
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1084)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1084)[12], 43, 0,5f, 1, 1);
	SET_CORPSE_PERMANENT((*&Local_188 + 1084)[12], 1);
	TASK_STAND_STILL((*&Local_188 + 1084)[12], -1.0f, 0, 0);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_188, "S1_Soldier2", 392, -4298,153f, 22,05748f, 4407,587f, 0.0f, -64,50484f, 0.0f, "dead_ground_male");
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1084)[22]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1084)[22], 41, 0,5f, 1, 1);
	SET_CORPSE_PERMANENT((*&Local_188 + 1084)[22], 1);
	TASK_STAND_STILL((*&Local_188 + 1084)[22], -1.0f, 0, 0);
	CREATE_CORPSE_IN_LAYOUT_RANDOM(Local_188, "deadMexGirl", 555, -4298,541f, 22,5898f, 4405,096f, 0.0f, 208,0209f, 0.0f, "dead_ground_female");
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1084)[32]);
	SET_CORPSE_PERMANENT((*&Local_188 + 1084)[32], 1);
	TASK_STAND_STILL((*&Local_188 + 1084)[32], -1.0f, 0, 0);
	return;
}

int Function_696() //Position: 0x23AC1 / 146113
{
	Function_378(&Local_188 + 192, 394, 2, 0);
	Function_378(&Local_188 + 192, 391, 2, 0);
	Function_378(&Local_188 + 192, 392, 2, 0);
	Function_378(&Local_188 + 192, 555, 2, 0);
	Function_378(&Local_188 + 192, 522, 2, 0);
	Function_378(&Local_188 + 192, 521, 2, 0);
	Function_378(&Local_188 + 192, 523, 2, 0);
	Function_378(&Local_188 + 192, 291, 2, 0);
	Function_378(&Local_188 + 192, 393, 2, 0);
	Function_378(&Local_188 + 192, 381, 2, 0);
	Function_378(&Local_188 + 192, 380, 2, 0);
	Function_378(&Local_188 + 192, 238, 2, 0);
	Function_378(&Local_188 + 192, 285, 2, 0);
	Function_378(&Local_188 + 192, 379, 2, 0);
	Function_378(&Local_188 + 192, 516, 2, 0);
	if (Function_406(&Local_188 + 192))
	{
		return 1;
	}
	return 0;
}

void Function_697() //Position: 0x23B96 / 146326
{
	switch (bLocal_1280)
	{
		case 0x00000000:
			if (Function_502(StackVal, StackVal, bLocal_1058, *(&Local_188 + 1884[16]), 1.0f))
			{
				SET_ACTOR_HEADING(StackVal, bLocal_1058, 1);
				Function_709();
				GIVE_WEAPON_TO_ACTOR(bLocal_1058, 9, false, 1, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_1058, 0);
				ACTOR_PUT_WEAPON_IN_HAND(bLocal_1058, 9, 0);
				SET_ANIM_SET_FOR_ACTOR(bLocal_1058, "rifle_waving", 0);
				Function_241(&bLocal_1173);
				Function_241(&bLocal_1167);
				bLocal_1280 = true;
			}
			break;
		
		case 0x00000001:
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_1058, "rifle_waving"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bLocal_1058, "rifle_waving");
			}
			if (GET_WEAPON_IN_HAND(bLocal_1058) != 9)
			{
				ACTOR_PUT_WEAPON_IN_HAND(bLocal_1058, 9, 0);
			}
			if (Function_342(Global_34573, bLocal_1058, 25.0f))
			{
				if (Function_290(&bLocal_1179) <= 4.0f)
				{
					Function_709();
					Function_241(&bLocal_1179);
					bLocal_1280 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_1058, "rifle_waving"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bLocal_1058, "rifle_waving");
			}
			if (Function_290(&bLocal_1179) <= 3.0f)
			{
				if (Function_342(Global_34573, bLocal_1058, 40.0f))
				{
					if (!IS_SCRIPTED_SPEECH_PLAYING(bLocal_1058))
					{
						Function_708();
						Function_241(&bLocal_1179);
						bLocal_1280 = true;
					}
				}
			}
			break;
		
		case 0x00000007:
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_188 + 2688), 1, true, 1);
			Function_461(StackVal, StackVal, StackVal, StackVal, Local_188.f_1120, *(&Local_188 + 2688), *(&Local_188 + 2688 + 12), 4, 1.0f, 1.0f, 1, 20.0f);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_1058, true);
			SQUAD_GOALS_CLEAR(Local_188.f_1120);
			bLocal_1280 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_1058, Local_188.f_3288, true, 1, 1, 1, false);
			TASK_ACTION_PERFORM(false, "rifle_waving");
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_1058, bLocal_1280);
			TASK_SEQUENCE_RELEASE(bLocal_1280, 1);
			SET_ANIM_SET_FOR_ACTOR(bLocal_1058, "rifle_waving", 0);
			Function_672(Local_188.f_1120, bLocal_1058, Local_188.f_3288, 3.0f, 1,2f, (SQUAD_GET_SIZE(Local_188.f_1120) / 4));
			Function_672(Local_188.f_1120, bLocal_1058, Local_188.f_3284, 3.0f, 1,4f, (SQUAD_GET_SIZE(Local_188.f_1120) / 4));
			Function_672(Local_188.f_1120, bLocal_1058, Local_188.f_3280, 3.0f, 2,1f, (SQUAD_GET_SIZE(Local_188.f_1120) / 4));
			Function_672(Local_188.f_1120, bLocal_1058, Local_188.f_3276, 3.0f, 1.0f, (SQUAD_GET_SIZE(Local_188.f_1120) / 4));
			Function_241(&bLocal_1167);
			bLocal_1280 = 8;
			break;
		
		case 0x00000008:
			Function_704(Local_188.f_1120, 0x3fc00000, 0x40800000);
			Function_704(Local_188.f_1340, 0x3fc00000, 0x40800000);
			if (Function_502(StackVal, StackVal, bLocal_1058, *(&Local_188 + 1936[16]), 15.0f))
			{
				Function_702(Local_188.f_1340);
				Function_241(&bLocal_1167);
				bLocal_1280 = 9;
			}
			break;
		
		case 0x00000009:
			Function_704(Local_188.f_1120, 0x3fc00000, 0x40800000);
			Function_704(Local_188.f_1340, 0x3fc00000, 0x40800000);
			if (Function_342(Global_34573, bLocal_1058, 30.0f))
			{
				Function_635(Local_188.f_1120);
				if (Function_342(Global_34573, bLocal_1058, 30.0f))
				{
					Function_701();
					Function_241(&bLocal_1167);
					bLocal_1280 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			Function_704(Local_188.f_1120, 0x3fc00000, 0x40800000);
			Function_704(Local_188.f_1340, 0x3fc00000, 0x40800000);
			if (((!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_290(&bLocal_1167) <= 7.0f) || Function_494(Local_188.f_1120, Global_34573, 16.0f, 1)) || Function_494(Local_188.f_1340, Global_34573, 16.0f, 1))
			{
				if (Function_342(Global_34573, bLocal_1058, 30.0f))
				{
					Function_700();
					Function_699();
					Function_698(Local_188.f_1120);
					Function_241(&bLocal_1167);
					bLocal_1280 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			Function_704(Local_188.f_1120, 0x3fc00000, 0x40800000);
			Function_704(Local_188.f_1340, 0x3fc00000, 0x40800000);
			if (Function_290(&bLocal_1167) <= 1.0f)
			{
				Function_241(&bLocal_1167);
				iLocal_1040 = 106;
			}
			break;
	}
	return;
}

void Function_698(bool bParam0) //Position: 0x23FB2 / 147378
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bVar1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_699() //Position: 0x23FF8 / 147448
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Local_188.f_2404 - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1120, ((SQUAD_GET_SIZE(Local_188.f_1120) - 1) - iVar0));
		bVar1 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_COORD(false, &Local_188 + 2404[iVar06], 5,75f, true);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bVar2, bVar1);
		TASK_SEQUENCE_RELEASE(bVar1, 1);
		iVar0++;
	}
	return;
}

void Function_700() //Position: 0x24061 / 147553
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel05_respondReyes", "Rebel05_respondReyes", true, 3, 1, 0, 1);
		Function_329(6);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_701() //Position: 0x240B2 / 147634
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_noBackdown", "Rebel05_noBackdown", 2, 2, 1, 0, 1);
		Function_329(6);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_702(bool bParam0) //Position: 0x240FF / 147711
{
	bool bVar0;
	
	Function_341(bParam0);
	SQUAD_GOALS_CLEAR(bParam0);
	bVar0 = Function_703(StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_188 + 2404[06]), 2);
	SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, false, 0, 1);
	TASK_SEQUENCE_PERFORM(false, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	bVar0 = Function_703(StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_188 + 2404[16]), 2);
	SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, false, 0, 1);
	TASK_SEQUENCE_PERFORM(false, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	bVar0 = Function_703(StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_188 + 2404[26]), 2);
	SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, false, 0, 1);
	TASK_SEQUENCE_PERFORM(false, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	bVar0 = Function_703(StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_188 + 2404[36]), 2);
	SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, false, 0, 1);
	TASK_SEQUENCE_PERFORM(false, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	bVar0 = Function_703(StackVal, StackVal, StackVal, StackVal, StackVal, *(&Local_188 + 2404[46]), 2);
	SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, false, 0, 1);
	TASK_SEQUENCE_PERFORM(false, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	Function_588(bParam0, 0);
	return;
}

bool Function_703(vector3 vParam0, var uParam3, var uParam4, var uParam5, bool bParam6) //Position: 0x241CE / 147918
{
	int iVar0;
	vector3 vVar1;
	
	UNK_0x44986367(StackVal, &vVar1);
	VSCALE(&vVar1, 5.0f);
	vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam0, vVar1, StackVal) };
	vVar1.f_4 = (vVar1.y + 0,75f);
	vVar1 = { StackVal, StackVal, *(&Local_188 + 3016) };
	iVar0 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD(false, &vParam0, bParam6);
	TASK_POINT_GUN_AT_COORD(false, &vVar1, -1.0f);
	TASK_SEQUENCE_CLOSE();
	return iVar0;
}

void Function_704(bool bParam0, bool bParam1, bool bParam2) //Position: 0x24226 / 148006
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(bParam0, "fLastShoutTime"))
	{
		if (GET_CURRENT_GAME_TIME() < DECOR_GET_FLOAT(bParam0, "fLastShoutTime"))
		{
			bVar0 = Function_707(bParam0);
			if (bParam0 == Local_188.f_1120)
			{
				Function_706(bVar0);
			}
			if (bParam0 == Local_188.f_1340)
			{
				Function_705(bVar0);
			}
			DECOR_SET_FLOAT(bParam0, "fLastShoutTime", (GET_CURRENT_GAME_TIME() + RAND_FLOAT_RANGE(bParam1, bParam2)));
		}
	}
	else
	{
		DECOR_SET_FLOAT(bParam0, "fLastShoutTime", 0.0f);
	}
	return;
}

void Function_705(bool bParam0) //Position: 0x242C4 / 148164
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 9);
	switch ((bVar0 % 3))
	{
		case 0x00000000:
			SAY_SINGLE_LINE_CONTEXT(bParam0, 97, false, 1, 1, 2, 4294967295, 4294967295, 0, 1);
			break;
		
		case 0x00000001:
			SAY_SINGLE_LINE_CONTEXT(bParam0, 96, false, 1, 1, 2, 4294967295, 4294967295, 0, 1);
			break;
		
		case 0x00000002:
			SAY_SINGLE_LINE_CONTEXT(bParam0, 99, false, 1, 1, 2, 4294967295, 4294967295, 0, 1);
			break;
	}
	return;
}

void Function_706(bool bParam0) //Position: 0x24323 / 148259
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	switch (bVar0)
	{
		case 0x0000011D:
			SAY_SINGLE_LINE_STRING(bParam0, "Rebel05_CrowdCrySupport_01", true, true, 2, 0, true, false);
			break;
		
		case 0x00000122:
			SAY_SINGLE_LINE_STRING(bParam0, "Rebel05_CrowdCrySupport_02", true, true, 2, 0, true, false);
			break;
		
		case 0x00000123:
			SAY_SINGLE_LINE_STRING(bParam0, "Rebel05_CrowdCrySupport_03", true, true, 2, 0, true, false);
			break;
		
		case 0x00000204:
		case 0x0000020A:
			SAY_SINGLE_LINE_CONTEXT(bParam0, 82, false, 1, 1, 2, 4294967295, 4294967295, 0, 1);
			break;
		
		default:
			break;
	}
	return;
}

var Function_707(bool bParam0) //Position: 0x243EB / 148459
{
	if (SQUAD_GET_SIZE(bParam0) >= 0)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam0, RAND_INT_RANGE(false, (SQUAD_GET_SIZE(bParam0) - 1)));
	}
	return "";
}

void Function_708() //Position: 0x2440D / 148493
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar5;
	
	bVar0 = false;
	SQUAD_COMPUTE_CENTROID(Local_188.f_1120, &uVar2);
	switch (RAND_INT_RANGE(false, 5))
	{
		case 0x00000000:
			bVar5 = "REBEL_05_RALLY_01_MASTER";
			break;
		
		case 0x00000001:
			bVar5 = "REBEL_05_RALLY_02_MASTER";
			break;
		
		case 0x00000002:
			bVar5 = "REBEL_05_RALLY_03_MASTER";
			break;
		
		case 0x00000003:
			bVar5 = "REBEL_05_RALLY_04_MASTER";
			break;
		
		case 0x00000004:
			bVar5 = "REBEL_05_RALLY_05_MASTER";
			break;
		
		case 0x00000005:
			bVar5 = "REBEL_05_RALLY_06_MASTER";
			break;
	}
	PLAY_SOUND_FROM_ACTOR(Function_526(Local_188.f_1120, Global_34573, 0, 0), bVar5, 0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(Local_188.f_1120) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_188.f_1120, bVar0);
		Function_706(bVar1);
		bVar0++;
	}
	return;
}

void Function_709() //Position: 0x2454F / 148815
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_rallyTownfolk", "Rebel05_rallyTownfolk", true, 1, 1, 0, 1);
		Function_329(2);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_710() //Position: 0x245A2 / 148898
{
	if (Function_502(StackVal, StackVal, bLocal_1058, *(&Local_188 + 1884[16]), 2.0f))
	{
		if (bLocal_1280 < 4294967295)
		{
			if (!iLocal_1061[0])
			{
				Function_711(Local_188.f_1120, 4,5f, 6,8f);
			}
			Function_635(Local_188.f_1120);
			SQUAD_GOALS_CLEAR(Local_188.f_1120);
			if (iLocal_1061[0])
			{
				Function_341(Local_188.f_1120);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, false, 1, 4294967295);
			TASK_FACE_ACTOR(false, bLocal_1058, 1, 3212836864);
			bLocal_1280 = false;
		}
	}
	else if (IS_OBJECT_VALID(bLocal_1310))
	{
		if (GATEWAY_UPDATE(bLocal_1310))
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_188 + 1884[16]), 1, true, 1);
		}
	}
	return;
}

void Function_711(bool bParam0, bool bParam1, bool bParam2) //Position: 0x24651 / 149073
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	bVar0 = false;
	vVar2 = { StackVal, StackVal, *(&Local_188 + 1884[16]) };
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar5 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		SET_ACTOR_FACE_STYLE(bVar5, 2);
		bVar1 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_COORD(bVar5, &vVar2, RAND_FLOAT_RANGE(bParam1, bParam2), true);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bVar5, bVar1);
		TASK_SEQUENCE_RELEASE(bVar1, 1);
		bVar0++;
	}
	SQUAD_GOALS_CLEAR(bParam0);
	SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, false, 0, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	Function_712(bParam0, bLocal_1058);
	return;
}

void Function_712(bool bParam0, bool bParam1) //Position: 0x246D0 / 149200
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			AI_GOAL_LOOK_AT_ACTOR(bVar1, bParam1, 1, 1.0f, 1000.0f, 1001.0f, 1);
		}
		bVar0++;
	}
	return;
}

void Function_713() //Position: 0x2472A / 149290
{
	if (iLocal_1282 < 5)
	{
		if ((Function_723(Local_188.f_1380) || IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1812)) || ((Function_494(Local_188.f_1444, Global_34573, 20.0f, 1) && IS_ACTOR_SHOOTING(Global_34573)) && Function_637(Local_188.f_1444) < 0))
		{
			Function_341(Local_188.f_1380);
			SET_ACTOR_FACTION((*&Local_188 + 1344)[22], 20);
			SET_ACTOR_FACTION((*&Local_188 + 1344)[32], 20);
			if (IS_ACTOR_ALIVE((*&Local_188 + 1344)[22]))
			{
				if (!IS_ACTOR_IN_VOLUME((*&Local_188 + 1344)[22], Local_188.f_1800))
				{
					Function_883((*&Local_188 + 1344)[22]);
					CLEAR_ACTOR_PROOF((*&Local_188 + 1344)[22], 16);
				}
			}
			if (IS_ACTOR_ALIVE((*&Local_188 + 1344)[32]))
			{
				if (!IS_ACTOR_IN_VOLUME((*&Local_188 + 1344)[32], Local_188.f_1800))
				{
					Function_883((*&Local_188 + 1344)[32]);
					CLEAR_ACTOR_PROOF((*&Local_188 + 1344)[32], 16);
				}
			}
			iLocal_1282 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_COORD(false, &Local_188 + 2688, 2.0f, 2);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_188.f_3292, 3, 0, 0, 1, false);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM((*&Local_188 + 1344)[22], iLocal_1282);
			TASK_SEQUENCE_PERFORM((*&Local_188 + 1344)[32], bLocal_1282);
			SET_ACTOR_FACTION((*&Local_188 + 1344)[02], 19);
			SET_ACTOR_FACTION((*&Local_188 + 1344)[12], 19);
			ADD_BLIP_FOR_ACTOR((*&Local_188 + 1344)[02], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_188 + 1344)[12], 322, 0, 2, 0);
			Function_427((*&Local_188 + 1344)[02], -1.0f);
			Function_427((*&Local_188 + 1344)[12], -1.0f);
			Function_722(Local_188.f_1380, Global_34573, 0);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			if (iLocal_1283 <= 10)
			{
				if (Function_494(Local_188.f_1444, Global_34573, 20.0f, 1))
				{
					iLocal_1283 = 99;
				}
			}
			Function_721();
			bLocal_1282 = 7;
		}
	}
	switch (bLocal_1282)
	{
		case 0x00000000:
			if (Function_720())
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					Function_254(Local_188.f_3000);
					STREAMING_LOAD_BOUNDS(Function_254(Local_188.f_3000), 8.0f, 0);
					bLocal_1282 = 4294967295;
				}
			}
			break;
		
		case 0xFFFFFFFF:
			Function_254(Local_188.f_3000);
			if (STREAMING_ARE_BOUNDS_LOADED(Function_254(Local_188.f_3000), 8.0f))
			{
				STREAMING_UNLOAD_BOUNDS();
				Function_719();
				SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1380, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1380) | 2048);
				Function_718();
				if (IS_DOOR_VALID(bLocal_1307))
				{
					Function_196(bLocal_1307, 1);
				}
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1380, false, 0, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_POINT_GUN_AT_OBJECT((*&Local_188 + 1344)[02], Local_188.f_3000, -1.0f, 0);
				TASK_POINT_GUN_AT_OBJECT((*&Local_188 + 1344)[12], Local_188.f_3000, -1.0f, 0);
				Function_619((*&Local_188 + 1344)[02], 0);
				Function_619((*&Local_188 + 1344)[12], 0);
				Function_717((*&Local_188 + 1344)[22], Local_188.f_3368, 0);
				Function_717((*&Local_188 + 1344)[32], Local_188.f_3368, 0);
				SET_ACTOR_PROOF((*&Local_188 + 1344)[22], 16);
				SET_ACTOR_PROOF((*&Local_188 + 1344)[32], 16);
				TASK_STAND_STILL((*&Local_188 + 1344)[22], -1.0f, 0, 0);
				TASK_STAND_STILL((*&Local_188 + 1344)[32], -1.0f, 0, 0);
				bLocal_1282 = true;
			}
			break;
		
		case 0x00000001:
			if (Function_494(Local_188.f_1380, Global_34573, 22.0f, 1))
			{
				if (Function_637(Local_188.f_1380) >= 0)
				{
					if (!DECOR_CHECK_EXIST(Local_188.f_1380, "fOnScreenStartTime"))
					{
						DECOR_SET_FLOAT(Local_188.f_1380, "fOnScreenStartTime", GET_CURRENT_GAME_TIME());
					}
					else if (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Local_188.f_1380, "fOnScreenStartTime")) < (1,5f / 2.0f)
					{
						Function_716();
						bLocal_1282 = 2;
						DECOR_REMOVE(Local_188.f_1380, "fOnScreenStartTime");
					}
				}
				else if (DECOR_CHECK_EXIST(Local_188.f_1380, "fOnScreenStartTime"))
				{
					DECOR_REMOVE(Local_188.f_1380, "fOnScreenStartTime");
				}
			}
			break;
		
		case 0x00000002:
			Function_721();
			Function_445(&Local_188 + 1344[02], (*&Local_188 + 1344)[22], 1);
			Function_445(&Local_188 + 1344[12], (*&Local_188 + 1344)[32], 1);
			Function_254(Local_188.f_3000);
			Function_715(StackVal, StackVal, (*&Local_188 + 1344)[02], Function_254(Local_188.f_3000), 3.0f);
			Function_254(Local_188.f_3000);
			Function_715(StackVal, StackVal, (*&Local_188 + 1344)[12], Function_254(Local_188.f_3000), 3.0f);
			COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_188 + 1344)[02], 0);
			COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_188 + 1344)[12], 0);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1344)[02], 28, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1344)[12], 28, 0.0f);
			MEMORY_CONSIDER_AS((*&Local_188 + 1344)[02], (*&Local_188 + 1344)[22], 4);
			MEMORY_CONSIDER_AS((*&Local_188 + 1344)[02], (*&Local_188 + 1344)[32], 4);
			MEMORY_CONSIDER_AS((*&Local_188 + 1344)[12], (*&Local_188 + 1344)[22], 4);
			MEMORY_CONSIDER_AS((*&Local_188 + 1344)[12], (*&Local_188 + 1344)[32], 4);
			bLocal_1282 = 3;
			break;
		
		case 0x00000003:
			if (!IS_ACTOR_ALIVE((*&Local_188 + 1344)[22]) && !IS_ACTOR_ALIVE((*&Local_188 + 1344)[32]))
			{
				TASK_STAND_STILL((*&Local_188 + 1344)[02], -1.0f, 0, 0);
				TASK_STAND_STILL((*&Local_188 + 1344)[12], -1.0f, 0, 0);
				COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_188 + 1344)[02], 1);
				COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION((*&Local_188 + 1344)[12], 1);
				DECOR_SET_FLOAT(Local_188.f_1380, "nfShotTime", GET_CURRENT_GAME_TIME());
				bLocal_1282 = 4;
			}
			break;
		
		case 0x00000004:
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Local_188.f_1380, "nfShotTime")) < 6.0f || !DECOR_CHECK_EXIST(Local_188.f_1380, "nfShotTime"))
			{
				if (IS_ACTOR_ALIVE((*&Local_188 + 1344)[22]))
				{
					SET_ACTOR_UPDATE_PRIORITY((*&Local_188 + 1344)[22], true);
				}
				if (IS_ACTOR_ALIVE((*&Local_188 + 1344)[32]))
				{
					SET_ACTOR_UPDATE_PRIORITY((*&Local_188 + 1344)[32], true);
				}
				TASK_GO_TO_COORD((*&Local_188 + 1344)[02], &Local_188 + 2612, true);
				TASK_GO_TO_COORD((*&Local_188 + 1344)[12], &Local_188 + 2612, true);
				Function_714((*&Local_188 + 1344)[02], 1.0f, "rand_idle_stand", -4375,255f, 38,897f, 4361,685f);
				Function_714((*&Local_188 + 1344)[12], 2.0f, "mex_gateguards", -4375,806f, 38,805f, 4364,984f);
				DECOR_REMOVE(Local_188.f_1380, "nfShotTime");
				bLocal_1282 = 5;
			}
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			if (Function_495((*&Local_188 + 1344)[02], 1) && Function_495((*&Local_188 + 1344)[12], 1))
			{
				bLocal_1282 = 6;
				DECOR_REMOVE(Local_188.f_1380, "nfShotTime");
				SET_ACTOR_UPDATE_PRIORITY((*&Local_188 + 1344)[22], true);
				SET_ACTOR_UPDATE_PRIORITY((*&Local_188 + 1344)[32], true);
				Function_109(10, 1, 0);
			}
			break;
	}
	return;
}

void Function_714(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, float fParam5) //Position: 0x24DEC / 151020
{
	bool bVar0;
	
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, bParam1, 0, 0);
	TASK_GO_NEAR_COORD(false, &Local_188 + 1936[06], 5.0f, true);
	TASK_GO_NEAR_COORD(false, &Local_188 + 2612, 9.0f, true);
	TASK_USE_GRINGO(false, LOCATE_GRINGO_OF_TYPE(bParam2, &fParam3, 3.0f, 1), "UseCase1", 4294967295, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	TASK_PRIORITY_SET(bParam0, false);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
}

void Function_715(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x24E54 / 151124
{
	var uVar0;
	
	GET_POSITION(bParam0, &uVar0);
	TASK_SHOOT_AT_COORD_FROM_POSITION(bParam0, &uParam1, &uVar0, bParam4);
}

void Function_716() //Position: 0x24E6E / 151150
{
	int iVar0;
	
	iVar0 = FIRE_CREATE_HANDLE();
	FIRE_CREATE_IN_VOLUME(iVar0, Local_188.f_1800, 8, 1);
	FIRE_SET_MAX_FLAMES(iVar0, 32);
	FIRE_SET_DECAY_RATE(iVar0, 0.0f);
	FIRE_SET_GROW_RATE(iVar0, 32.0f);
	return;
}

void Function_717(bool bParam0, bool bParam1, bool bParam2) //Position: 0x24E9E / 151198
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(bParam1) - 1))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
		SET_OBJECT_COLLIDE_WITH_OBJECT(bParam0, bVar1, bParam2);
		bVar0++;
	}
	return;
}

void Function_718() //Position: 0x24ED1 / 151249
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(Local_188.f_2608) - 1))
	{
		bVar1 = CREATE_RMPTFX_EMITTER_ON_OBJECT(Function_53(), "fire_comp_beams", GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Local_188.f_2608), 0.0f, 0.0f, 0.0f, true, 0);
		UNK_0x6745191B(bVar1, 0.0f, 0.0f, 0.0f);
		bVar0++;
	}
	return;
}

void Function_719() //Position: 0x24F27 / 151335
{
	Local_188.f_1380 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_188, "BurnHouseGuys"));
	(*&Local_188 + 1344)[02] = CREATE_ACTOR_IN_LAYOUT(Local_188, "bh_Soldier_2", 393, -4346,554f, 29,28869f, 4405,269f, 0.0f, 73,36384f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1344)[02], Local_188.f_1380);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1344)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1344)[02], 43, 0,5f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1344)[02], 28, 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_188 + 1344)[02], 0);
	AI_SET_FIRE_DELAY((*&Local_188 + 1344)[02], 0.0f);
	TASK_STAND_STILL((*&Local_188 + 1344)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_188 + 1344)[02], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1344)[02], 0);
	(*&Local_188 + 1344)[12] = CREATE_ACTOR_IN_LAYOUT(Local_188, "bh_Soldier_3", 392, -4346,7f, 29,28869f, 4402,28f, 0.0f, 118,7536f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1344)[12], Local_188.f_1380);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1344)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_188 + 1344)[12], 41, 0,5f, 1, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT((*&Local_188 + 1344)[12], 28, 0.0f);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE((*&Local_188 + 1344)[12], 0);
	AI_SET_FIRE_DELAY((*&Local_188 + 1344)[12], 0.0f);
	TASK_STAND_STILL((*&Local_188 + 1344)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_188 + 1344)[12], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1344)[12], 0);
	(*&Local_188 + 1344)[22] = CREATE_ACTOR_IN_LAYOUT(Local_188, "bh_guy_1", 238, -4353,547f, 29,33339f, 4404,06f, 0.0f, 264,5894f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1344)[22], Local_188.f_1380);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1344)[22]);
	TASK_STAND_STILL((*&Local_188 + 1344)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_188 + 1344)[22], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1344)[22], 0);
	(*&Local_188 + 1344)[32] = CREATE_ACTOR_IN_LAYOUT(Local_188, "bh_guy_2", 285, -4351,679f, 29,41976f, 4404,385f, 0.0f, -87,68929f, 0.0f);
	SQUAD_JOIN((*&Local_188 + 1344)[32], Local_188.f_1380);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_188 + 1344)[32]);
	TASK_STAND_STILL((*&Local_188 + 1344)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_188 + 1344)[32], 21);
	AI_SET_ENABLE_STICKUP_OVERRIDE((*&Local_188 + 1344)[32], 0);
	return;
}

bool Function_720() //Position: 0x25191 / 151953
{
	Function_378(&Local_188 + 972, 393, 2, 0);
	Function_378(&Local_188 + 972, 392, 2, 0);
	Function_378(&Local_188 + 972, 238, 2, 0);
	Function_378(&Local_188 + 972, 285, 2, 0);
	Function_378(&Local_188 + 972, 391, 2, 0);
	Function_378(&Local_188 + 972, 379, 2, 0);
	Function_378(&Local_188 + 972, 291, 2, 0);
	Function_378(&Local_188 + 972, 516, 2, 0);
	Function_378(&Local_188 + 972, 522, 2, 0);
	if (Function_406(&Local_188 + 972))
	{
		return 1;
	}
	return 0;
}

void Function_721() //Position: 0x25222 / 152098
{
	Function_196(bLocal_1307, 1);
	OPEN_DOOR_DIRECTION(bLocal_1307, true);
	if (IS_ACTOR_ALIVE((*&Local_188 + 1344)[22]))
	{
		if (!FIRE_IS_ACTOR_ON_FIRE((*&Local_188 + 1344)[22]))
		{
			Function_883((*&Local_188 + 1344)[22]);
			CLEAR_ACTOR_PROOF((*&Local_188 + 1344)[22], 16);
		}
	}
	if (IS_ACTOR_ALIVE((*&Local_188 + 1344)[32]))
	{
		if (!FIRE_IS_ACTOR_ON_FIRE((*&Local_188 + 1344)[32]))
		{
			Function_883((*&Local_188 + 1344)[32]);
			CLEAR_ACTOR_PROOF((*&Local_188 + 1344)[32], 16);
		}
	}
	TASK_GO_TO_OBJECT((*&Local_188 + 1344)[22], Local_188.f_3000, 4, 1, 0);
	TASK_GO_TO_OBJECT((*&Local_188 + 1344)[32], Local_188.f_3000, 4, 1, 0);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_188 + 1344)[22], false);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_188 + 1344)[32], false);
	SET_ACTOR_ONE_SHOT_DEATH((*&Local_188 + 1344)[22], true);
	SET_ACTOR_ONE_SHOT_DEATH((*&Local_188 + 1344)[32], true);
	return;
}

void Function_722(bool bParam0, bool bParam1, bool bParam2) //Position: 0x252F6 / 152310
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, true);
				}
				else
				{
					GET_POSITION(bParam1, &uVar2);
					MEMORY_REPORT_POSITION(bVar1, bParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

int Function_723(bool bParam0) //Position: 0x25361 / 152417
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = false;
	bVar2 = false;
	iVar3 = 0;
	bVar4 = false;
	bVar5 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (Function_436(bVar1, Global_34573, 0, 1))
		{
			return 1;
		}
		if (Function_483(Global_34573, bVar1, 1, 0, 0, 3212836864) || Function_483(bVar1, Global_34573, 1, 0, 0, 3212836864))
		{
			return 1;
		}
		if (MEMORY_GET_IS_VISIBLE(bVar1, Global_34573) && !DECOR_CHECK_EXIST(bVar1, "bIgnoreLOSCheck"))
		{
			bVar2 = true;
		}
		if (Function_342(Global_34573, bVar1, 30.0f))
		{
			iVar3 = 1;
		}
		if (Function_347(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
		{
			bVar4 = true;
		}
		if (CALCULATE_NORMALIZED_SCREEN_DISTANCE_FROM_RETICLE(Global_34573, bVar1) > 0,13f && IS_PLAYER_WEAPON_ZOOMED(Global_34573))
		{
			bVar5 = true;
		}
		bVar0++;
	}
	if ((iVar3 && bVar4) && IS_ACTOR_SHOOTING(Global_34573))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "fLastTargetTime"))
	{
		if (((!bVar5 || !bVar2) || !bVar4) || !IS_PLAYER_WEAPON_ZOOMED(Global_34573))
		{
			DECOR_REMOVE(bParam0, "fLastTargetTime");
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bParam0, "fLastTargetTime")) < 1,75f)
		{
			return 1;
		}
		PRINTSTRING("Aiming at them, current time = ");
		PRINTFLOAT((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bParam0, "fLastTargetTime")));
		PRINTNL();
	}
	else if (bVar5)
	{
		if ((bVar2 && bVar4) && IS_PLAYER_WEAPON_ZOOMED(Global_34573))
		{
			DECOR_SET_FLOAT(bParam0, "fLastTargetTime", GET_CURRENT_GAME_TIME());
		}
	}
	return 0;
}

void Function_724() //Position: 0x25537 / 152887
{
	vector3 vVar0;
	
	if (iLocal_1283 <= 11)
	{
		if ((Function_723(Local_188.f_1444) || IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1808)) || iLocal_1283 != 99)
		{
			Function_341(Local_188.f_1444);
			AUDIO_PLAY_VOCAL_EFFECT((*&Local_188 + 1384)[62], 9, 1);
			Function_652(Local_188.f_1444);
			SET_ACTOR_FACTION((*&Local_188 + 1384)[02], 19);
			SET_ACTOR_FACTION((*&Local_188 + 1384)[12], 19);
			SET_ACTOR_FACTION((*&Local_188 + 1384)[22], 19);
			ADD_BLIP_FOR_ACTOR((*&Local_188 + 1384)[02], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_188 + 1384)[12], 322, 0, 2, 0);
			ADD_BLIP_FOR_ACTOR((*&Local_188 + 1384)[22], 322, 0, 2, 0);
			TASK_KILL_CHAR((*&Local_188 + 1384)[02], Global_34573);
			TASK_KILL_CHAR((*&Local_188 + 1384)[12], Global_34573);
			TASK_KILL_CHAR((*&Local_188 + 1384)[22], Global_34573);
			TASK_PRIORITY_SET((*&Local_188 + 1384)[02], true);
			TASK_PRIORITY_SET((*&Local_188 + 1384)[12], true);
			TASK_PRIORITY_SET((*&Local_188 + 1384)[22], true);
			Function_722(Local_188.f_1444, Global_34573, 0);
			CLEAR_ACTOR_MAX_SPEED((*&Local_188 + 1384)[02]);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_188 + 1384)[02], Local_188.f_3304, 4, 0, 0, 1, false);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "GUNFIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			iLocal_1283 = 12;
		}
	}
	switch (iLocal_1283)
	{
		case 0x00000000:
			if (Function_720())
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (!SQUAD_IS_VALID(Local_188.f_1444))
					{
						Function_694();
					}
					SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1444, SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_188.f_1444) | 2048);
					SET_ANIM_SET_FOR_ACTOR((*&Local_188 + 1384)[32], "stand_hostage", 0);
					SET_ACTION_NODE_FOR_ACTOR((*&Local_188 + 1384)[32], "stand_hostage/walk_pose");
					SET_ANIM_SET_FOR_ACTOR((*&Local_188 + 1384)[42], "stand_hostage", 0);
					SET_ACTION_NODE_FOR_ACTOR((*&Local_188 + 1384)[42], "stand_hostage/walk_pose");
					SET_ANIM_SET_FOR_ACTOR((*&Local_188 + 1384)[52], "stand_hostage", 0);
					SET_ACTION_NODE_FOR_ACTOR((*&Local_188 + 1384)[52], "stand_hostage/walk_pose");
					SNAP_ACTOR_TO_GRINGO((*&Local_188 + 1384)[62], Local_188.f_3072, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO((*&Local_188 + 1384)[62], GET_GRINGO_FROM_OBJECT(Local_188.f_3072), "UseCase1", 4294967295, 1);
					TASK_POINT_GUN_AT_OBJECT((*&Local_188 + 1384)[12], (*&Local_188 + 1384)[42], -1.0f, 0);
					TASK_POINT_GUN_AT_OBJECT((*&Local_188 + 1384)[22], (*&Local_188 + 1384)[52], -1.0f, 0);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON((*&Local_188 + 1384)[32], 8, "FASTWALK");
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_188 + 1384)[32], true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_188 + 1384)[32], true);
					Function_619((*&Local_188 + 1384)[02], 0);
					Function_619((*&Local_188 + 1384)[12], 0);
					Function_619((*&Local_188 + 1384)[22], 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1444, false, 0, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					iLocal_1283 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_IN_VOLUME(Global_34573, Local_188.f_1776))
			{
				iLocal_1283 = 2;
				if (DECOR_CHECK_EXIST(Local_188.f_1444, "fOnScreenStartTime"))
				{
					DECOR_REMOVE(Local_188.f_1444, "fOnScreenStartTime");
				}
			}
			if (Function_637(Local_188.f_1444) >= 0)
			{
				if (!DECOR_CHECK_EXIST(Local_188.f_1444, "fOnScreenStartTime"))
				{
					DECOR_SET_FLOAT(Local_188.f_1444, "fOnScreenStartTime", GET_CURRENT_GAME_TIME());
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Local_188.f_1444, "fOnScreenStartTime")) < 1,5f)
				{
					iLocal_1283 = 2;
					DECOR_REMOVE(Local_188.f_1444, "fOnScreenStartTime");
				}
			}
			else if (DECOR_CHECK_EXIST(Local_188.f_1444, "fOnScreenStartTime"))
			{
				DECOR_REMOVE(Local_188.f_1444, "fOnScreenStartTime");
			}
			break;
		
		case 0x00000002:
			Function_726((*&Local_188 + 1384)[12], (*&Local_188 + 1384)[22]);
			vVar0 = { StackVal, StackVal, Function_726((*&Local_188 + 1384)[12], (*&Local_188 + 1384)[22]) };
			iLocal_1283 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH(false, Local_188.f_3304, 1, 0, 0, 1, false);
			TASK_FACE_ACTOR(false, (*&Local_188 + 1384)[32], 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM((*&Local_188 + 1384)[02], iLocal_1283);
			TASK_SEQUENCE_RELEASE(bLocal_1283, 1);
			SET_ACTOR_UPDATE_PRIORITY((*&Local_188 + 1384)[02], false);
			SET_ACTOR_MAX_SPEED_ABSOLUTE((*&Local_188 + 1384)[02], 0,5f);
			Function_726((*&Local_188 + 1384)[42], (*&Local_188 + 1384)[52]);
			vVar0 = { StackVal, StackVal, Function_726((*&Local_188 + 1384)[42], (*&Local_188 + 1384)[52]) };
			bLocal_1283 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH(false, Local_188.f_3308, 1, 0, 0, 1, false);
			TASK_GO_TO_COORD(false, &vVar0, true);
			TASK_STAND_STILL(false, 1,3f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM((*&Local_188 + 1384)[32], bLocal_1283);
			TASK_SEQUENCE_RELEASE(bLocal_1283, 1);
			SET_ACTOR_UPDATE_PRIORITY((*&Local_188 + 1384)[32], false);
			Function_725();
			bLocal_1283 = 3;
			break;
		
		case 0x00000003:
			if (GET_TASK_STATUS((*&Local_188 + 1384)[32], 0) == 2)
			{
				SAY_SINGLE_LINE_SCRIPTED((*&Local_188 + 1384)[12], "eventExecutionMsg01", false, 1, 1, 0, 0, 0);
				bLocal_1283 = 4;
			}
			break;
		
		case 0x00000004:
			if (!IS_ANY_SPEECH_PLAYING((*&Local_188 + 1384)[12]))
			{
				DECOR_SET_FLOAT(Local_188.f_1444, "fAimTime", GET_CURRENT_GAME_TIME());
				TASK_FACE_ACTOR((*&Local_188 + 1384)[02], (*&Local_188 + 1384)[32], 0, 3212836864);
				bLocal_1283 = 5;
			}
			break;
		
		case 0x00000005:
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Local_188.f_1444, "fAimTime")) < 0,75f)
			{
				SAY_SINGLE_LINE_SCRIPTED((*&Local_188 + 1384)[12], "eventExecutionMsg02", false, 1, 1, 0, 0, 0);
				TASK_POINT_GUN_AT_OBJECT((*&Local_188 + 1384)[02], (*&Local_188 + 1384)[32], -1.0f, 0);
				bLocal_1283 = 6;
			}
			break;
		
		case 0x00000006:
			if (!IS_ANY_SPEECH_PLAYING((*&Local_188 + 1384)[12]))
			{
				DECOR_SET_FLOAT(Local_188.f_1444, "fAimTime", GET_CURRENT_GAME_TIME());
				bLocal_1283 = 7;
			}
			break;
		
		case 0x00000007:
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Local_188.f_1444, "fAimTime")) < 0,9f)
			{
				SAY_SINGLE_LINE_SCRIPTED((*&Local_188 + 1384)[12], "eventExecutionMsg03", false, 1, 1, 0, 0, 0);
				bLocal_1283 = 8;
			}
			break;
		
		case 0x00000008:
			if (!IS_ANY_SPEECH_PLAYING((*&Local_188 + 1384)[12]))
			{
				Function_335((*&Local_188 + 1384)[02], (*&Local_188 + 1384)[32]);
				Function_335((*&Local_188 + 1384)[12], (*&Local_188 + 1384)[42]);
				Function_335((*&Local_188 + 1384)[22], (*&Local_188 + 1384)[52]);
				AUDIO_PLAY_VOCAL_EFFECT((*&Local_188 + 1384)[62], 9, 1);
				DECOR_REMOVE(Local_188.f_1444, "fAimTime");
				DECOR_SET_FLOAT(Local_188.f_1444, "nfShotTime", GET_CURRENT_GAME_TIME());
				CLEAR_ACTOR_MAX_SPEED((*&Local_188 + 1384)[02]);
				bLocal_1283 = 9;
			}
			break;
		
		case 0x00000009:
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Local_188.f_1444, "nfShotTime")) < 2,5f)
			{
				if ((!IS_ACTOR_ALIVE((*&Local_188 + 1384)[32]) && !IS_ACTOR_ALIVE((*&Local_188 + 1384)[42])) && !IS_ACTOR_ALIVE((*&Local_188 + 1384)[52]))
				{
					Function_714((*&Local_188 + 1384)[02], 2,3f, "rand_idle_nearwall", -4376,312f, 39,158f, 4361,827f);
					Function_714((*&Local_188 + 1384)[12], 3,2f, "rand_idle_stand", -4375,393f, 39,111f, 4366,977f);
					Function_714((*&Local_188 + 1384)[22], 1,5f, "mex_gateguards", -4376,312f, 39,158f, 4361,827f);
					SAY_SINGLE_LINE_SCRIPTED((*&Local_188 + 1384)[12], "THIS_WAY", false, 1, 1, 1, 0, 0);
					SET_ACTOR_UPDATE_PRIORITY((*&Local_188 + 1384)[02], true);
					SET_ACTOR_UPDATE_PRIORITY((*&Local_188 + 1384)[32], true);
					DECOR_REMOVE(Local_188.f_1444, "nfShotTime");
					bLocal_1283 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000C:
			if ((Function_495((*&Local_188 + 1384)[02], 1) && Function_495((*&Local_188 + 1384)[12], 1)) && Function_495((*&Local_188 + 1384)[22], 1))
			{
				bLocal_1283 = false;
				if (IS_ACTOR_ALIVE((*&Local_188 + 1384)[32]))
				{
					bLocal_1283 += 100;
				}
				if (IS_ACTOR_ALIVE((*&Local_188 + 1384)[42]))
				{
					bLocal_1283 += 100;
				}
				if (IS_ACTOR_ALIVE((*&Local_188 + 1384)[52]))
				{
					bLocal_1283 += 100;
				}
				if (IS_ACTOR_ALIVE((*&Local_188 + 1384)[62]))
				{
					bLocal_1283 += 100;
				}
				if (bLocal_1283 >= 0)
				{
					Function_109(bLocal_1283, 1, 0);
					PRINTSTRING("Saved ");
					PRINTINT(bLocal_1283);
					PRINTNL();
				}
				bLocal_1283 = 11;
			}
			break;
	}
	return;
}

void Function_725() //Position: 0x25E8F / 155279
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Rebel05_girlGunpoint_v1_AA", "Rebel05_girlGunpoint_v1_AA", 4, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Rebel05_girlGunpoint_v1_AB", "Rebel05_girlGunpoint_v1_AB", 3, 1, 1, 0, 1);
		Function_329(24);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

vector3 Function_726(var uParam0, bool bParam1) //Position: 0x25F30 / 155440
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	Function_627(uParam0, &vVar3);
	Function_627(bParam1, &vVar6);
	Function_727(StackVal, StackVal, StackVal, StackVal, vVar3, vVar6);
	vVar0 = { StackVal, StackVal, Function_727(StackVal, StackVal, StackVal, StackVal, vVar3, vVar6) };
	return StackVal, StackVal, vVar0;
}

vector3 Function_727(vector3 vParam0, vector3 vParam3) //Position: 0x25F57 / 155479
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam3, vParam0, StackVal) };
	vVar0 = { StackVal, StackVal, Vector(vVar0, StackVal, StackVal) * Vector(0,5f, 0,5f, 0,5f) };
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam3, vVar0, StackVal) };
	return StackVal, StackVal, vVar0;
}

void Function_728(bool bParam0) //Position: 0x25F8C / 155532
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (GET_TASK_STATUS(bVar1, 0) != 1)
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(bVar1, "crowd_cheer"))
			{
				SET_ANIM_SET_FOR_ACTOR(bVar1, "crowd_cheer", 0);
				SET_ACTION_NODE_FOR_ACTOR(bVar1, "crowd_cheer/random_loop_mobile");
			}
		}
		else if (IS_ACTION_NODE_PLAYING_PARTIAL(bVar1, "crowd_cheer"))
		{
			RESET_ANIM_SET_FOR_ACTOR(bVar1, false);
		}
		bVar0++;
	}
	return;
}

int Function_729(var uParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x26032 / 155698
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_OBJECT_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_558(Global_34573, bParam3, fParam2))
	{
		Function_247(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_558(Global_34573, bParam3, fParam1))
	{
		if (!Function_478(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_340(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				Function_477(1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_476(bParam8, 0, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_476(bParam9, 0, 15, 1, bParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam3, bParam10, 0f, 2, 0);
				DECOR_SET_BOOL(bParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_478(1))
	{
		Function_475(1);
		if (!Function_474())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_473();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam3));
				DECOR_REMOVE(bParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_476(bParam8, 1, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_476(bParam9, 1, 15, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_730() //Position: 0x261A0 / 156064
{
	if (iLocal_1040 < 3 && iLocal_1040 > 105)
	{
		if (iLocal_1040 <= 12)
		{
			Function_472(&bLocal_1176, 20.0f, 40.0f, bLocal_1058, "RebelLeader_return", "RebelLeader_abandoned", &bLocal_1049, 0, 0, 0, 325, 0);
			if (!Function_342(Global_34573, bLocal_1058, 20.0f))
			{
				if (!IS_BLIP_VALID(Function_816(7)))
				{
					Function_355(7, 1, 1);
				}
			}
		}
		if (iLocal_1040 > 7)
		{
			Function_724();
			Function_713();
		}
		Function_815();
		if (iLocal_1040 <= 9)
		{
			if (GET_ACTOR_FROM_OBJECT(Function_388(GET_GRINGO_FROM_OBJECT(Local_188.f_3076), "Cut_Free")) == Global_34573)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_241(&bLocal_1167);
				Function_241(&bLocal_1173);
				iLocal_1040 = 9;
			}
		}
	}
	switch (iLocal_1040)
	{
		case 0x00000000:
			Function_320(0);
			SET_ACTOR_HEALTH(bLocal_1058, GET_ACTOR_MAX_HEALTH(bLocal_1058));
			CLEAR_ACTOR_MIN_SPEED(bLocal_1058);
			Function_355(7, 0, 1);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_1058, GET_ACTOR_MAX_HEALTH(bLocal_1058));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(100);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_1060 = Function_313(StackVal, StackVal, *(&Local_188 + 1832[06]), 0, 1, 1);
			DECOR_SET_BOOL(bLocal_1058, "CanBeLasso", false);
			DECOR_SET_BOOL(bLocal_1058, "ignoreactorinduel", true);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_188 + 1832[06]), 1, true, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1058, *(&Local_188 + 1832[16]), 1, true, 1);
			Function_241(&bLocal_1167);
			iLocal_1040 = 1;
			break;
		
		case 0x00000001:
			Function_800();
			if (Local_1041 > 1009)
			{
				Function_815();
				if (STREAMING_IS_WORLD_LOADED() && ((Function_312(bLocal_1060) && Function_799()) || bLocal_1060 != 4294967295))
				{
					if (Function_470())
					{
						if (Function_406(&bLocal_1075))
						{
							Function_469();
							Function_222(bLocal_1303, 1);
							Function_222(bLocal_1304, 1);
							iLocal_1293 = 0;
							if (!IS_ACTOR_VALID((*&Local_188 + 1084)[02]) || Function_296(&Local_1032))
							{
								Function_695();
								CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_188 + 1084)[02]);
								CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_188 + 1084)[12]);
								CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_188 + 1084)[22]);
								CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_188 + 1084)[32]);
								HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_188, "S1_Soldier1")));
								HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_188, "S1_Soldier2")));
								HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_188, "deadMexGirl")));
								DECOR_SET_BOOL(FIND_OBJECT_IN_LAYOUT(Local_188, "deadMexGirl"), "corpse_loot_gringo", false);
							}
							Function_796(Function_296(&Local_1032));
							Function_241(&bLocal_1167);
							iLocal_1040 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			if (Function_800())
			{
				SNAP_ACTOR_TO_GRINGO(bLocal_1058, Local_188.f_3076, "UseCase_Reyes", true, 0, 0);
				TASK_USE_GRINGO(bLocal_1058, GET_GRINGO_FROM_OBJECT(Local_188.f_3076), "UseCase_Reyes", true, 1);
				MEMORY_CONSIDER_AS((*&Local_188 + 1084)[02], bLocal_1058, 2);
				MEMORY_CONSIDER_AS((*&Local_188 + 1084)[02], Global_34573, 2);
				TASK_PRIORITY_SET(bLocal_1058, true);
				Function_241(&bLocal_1167);
				iLocal_1040 = 4;
			}
			break;
		
		case 0x00000004:
			if (!HUD_IS_FADED() || STREAMING_IS_WORLD_LOADED())
			{
				Function_737();
				if (Local_1041.f_24)
				{
					iLocal_1326 = 6;
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_253(bLocal_1039);
				Function_306(StackVal, StackVal, Function_253(bLocal_1039), bLocal_1039, Global_30633[0], Function_256(bLocal_1039), 0);
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
				TOGGLE_COVER_PROPS(0);
				SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_188, "S1_Soldier1")));
				SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_188, "S1_Soldier2")));
				SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Local_188, "deadMexGirl")));
				Function_197(1);
				Function_227(1);
				Function_348(&(Local_1222[017]), bLocal_1058, "RebelLeader", 0, 0x5f5e100, 1);
				FORCE_LOOK_AT_ACTOR(bLocal_1058, Global_34573, 3212836864);
				if (Function_296(&Local_1032))
				{
					Function_490((*&Local_188 + 1084)[02], Global_34573);
				}
				Function_241(&bLocal_1167);
				iLocal_1040 = 6;
			}
			break;
		
		case 0x00000006:
			Function_720();
			if (IS_PLAYER_DEADEYE(0) && !iLocal_1293)
			{
				iLocal_1293 = 1;
			}
			if (Function_737())
			{
				iLocal_1293 = 0;
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_1058);
				Function_659();
				DECOR_SET_BOOL(FIND_OBJECT_IN_LAYOUT(Local_188, "deadMexGirl"), "corpse_loot_gringo", false);
				Function_241(&bLocal_1167);
				iLocal_1040 = 7;
			}
			break;
		
		case 0x00000007:
			Function_377();
			Function_720();
			Function_736();
			Function_241(&bLocal_1167);
			iLocal_1040 = 8;
			break;
		
		case 0x00000008:
			Function_720();
			Function_377();
			if (Function_290(&bLocal_1167) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_355(7, 1, 1);
				HUD_CLEAR_OBJECTIVE();
				if (GET_CURRENT_GRINGO(Global_34573) != GET_GRINGO_FROM_OBJECT(Local_188.f_3076))
				{
					Function_340("rebel05_obj01", 0x40f00000, 1, 2, 0, 0, 0);
				}
				Function_241(&bLocal_1167);
				Function_241(&bLocal_1173);
				iLocal_1040 = 9;
			}
			break;
		
		case 0x00000009:
			Function_720();
			Function_377();
			if (GET_CURRENT_GRINGO(Global_34573) == GET_GRINGO_FROM_OBJECT(Local_188.f_3076))
			{
				HUD_CLEAR_OBJECTIVE();
				SET_AUTO_CONVERSATION_LOOK(Global_34573, 0);
				SET_AUTO_CONVERSATION_LOOK(bLocal_1058, 0);
				Function_735();
				STOP_FORCE_LOOK_AT_COORD(bLocal_1058);
				DECOR_REMOVE(bLocal_1058, "CanBeLasso");
				DECOR_REMOVE(bLocal_1058, "ignoreactorinduel");
				Function_464();
				Function_348(&(Local_1222[117]), Local_188.f_1120, "rebel05_rebel", 0, 0x5f5e100, 1);
				bLocal_1279 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, Local_188.f_3316, 2, 0, 0, 1, false);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(FIND_ACTOR_IN_LAYOUT(Local_188, "guyWhoBriefsReyes"), bLocal_1279);
				TASK_SEQUENCE_RELEASE(bLocal_1279, 1);
				SQUAD_LEAVE(FIND_ACTOR_IN_LAYOUT(Local_188, "guyWhoBriefsReyes"));
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_188.f_1120, false, 1, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				Function_712(Local_188.f_1120, bLocal_1058);
				Function_241(&bLocal_1167);
				iLocal_1040 = 10;
			}
			else if (Function_290(&bLocal_1173) <= 9.0f)
			{
				if (Function_342(Global_34573, bLocal_1058, 16.0f))
				{
					Function_734();
				}
				else
				{
					Function_733();
				}
				Function_241(&bLocal_1173);
			}
			break;
		
		case 0x0000000A:
			if (Function_290(&bLocal_1167) <= 2,5f)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(FIND_ACTOR_IN_LAYOUT(Local_188, "guyWhoBriefsReyes"), 61, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(FIND_ACTOR_IN_LAYOUT(Local_188, "guyWhoBriefsReyes"), 60, 0);
				Function_732();
				Function_241(&bLocal_1167);
				iLocal_1040 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_728(Local_188.f_1120);
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
			{
				SET_AUTO_CONVERSATION_LOOK(Global_34573, 1);
				SET_AUTO_CONVERSATION_LOOK(bLocal_1058, 1);
				Function_711(Local_188.f_1120, 4,5f, 6,8f);
				Function_254(Local_188.f_2660);
				vLocal_1316 = { StackVal, StackVal, Function_254(Local_188.f_2660) };
				bLocal_1279 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_GO_TO_COORD(false, &vLocal_1316, true);
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_1058, bLocal_1279);
				TASK_SEQUENCE_RELEASE(bLocal_1279, 1);
				TASK_FACE_ACTOR(FIND_ACTOR_IN_LAYOUT(Local_188, "guyWhoBriefsReyes"), bLocal_1058, 1, 3212836864);
				TASK_FACE_ACTOR(FIND_ACTOR_IN_LAYOUT(Local_188, "mob_18"), bLocal_1058, 1, 3212836864);
				TASK_FACE_ACTOR(FIND_ACTOR_IN_LAYOUT(Local_188, "mob_2"), bLocal_1058, 1, 3212836864);
				Function_241(&bLocal_1167);
				iLocal_1040 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_728(Local_188.f_1120);
			if (Function_342(Global_34573, bLocal_1058, 20.0f))
			{
				if (Function_290(&bLocal_1167) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					TASK_FACE_ACTOR(bLocal_1058, Global_34573, 1, 3212836864);
					Function_731();
					Function_241(&bLocal_1167);
					iLocal_1040 = 13;
				}
			}
			break;
		
		case 0x0000000D:
			Function_728(Local_188.f_1120);
			bLocal_1279 = TASK_SEQUENCE_OPEN();
			TASK_STAND_STILL(false, 1.0f, 0, 0);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_188.f_3356, 2, 1, 0, 1, false);
			TASK_GO_TO_COORD(false, &Local_188 + 1884[16], true);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_1058, bLocal_1279);
			TASK_SEQUENCE_RELEASE(bLocal_1279, 1);
			SQUAD_JOIN(FIND_ACTOR_IN_LAYOUT(Local_188, "guyWhoBriefsReyes"), Local_188.f_1120);
			bLocal_1279 = TASK_SEQUENCE_OPEN();
			TASK_STAND_STILL(false, 0,4f, 0, 0);
			TASK_GO_NEAR_COORD(false, &Local_188 + 1884[16], 5.0f, true);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(FIND_ACTOR_IN_LAYOUT(Local_188, "guyWhoBriefsReyes"), bLocal_1279);
			TASK_SEQUENCE_RELEASE(bLocal_1279, 1);
			Function_241(&bLocal_1167);
			iLocal_1040 = 106;
			break;
		
		case 0x0000006A:
			iLocal_1061[0] = 1;
			Function_238();
			STOP_FORCE_LOOK_AT_COORD(bLocal_1058);
			Function_241(&bLocal_1167);
			bLocal_1039 = true;
			iLocal_1040 = 0;
			break;
	}
	return;
}

void Function_731() //Position: 0x26ACD / 158413
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_tellsJonResc", "Rebel05_tellsJonResc", false, 1, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_732() //Position: 0x26B1E / 158494
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel05_CS02_v1_AB", "Rebel05_CS02_v1_AB", false, 1, 1, 0, 1);
		Function_329(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_733() //Position: 0x26B6B / 158571
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_jonRunsAwayUntie", "Rebel05_jonRunsAwayUntie", false, 1, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_734() //Position: 0x26BC4 / 158660
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_ReyesWaitingforJohn", "Rebel05_ReyesWaitingforJohn", false, 1, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_735() //Position: 0x26C23 / 158755
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (Function_342(bLocal_1059, Global_34573, 4.0f))
	{
		GET_ACTOR_AXIS(Global_34573, &vVar3, 2);
		GET_POSITION(Global_34573, &vVar0);
		VSCALE(&vVar3, 8.0f);
		vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
		TELEPORT_ACTOR(bLocal_1059, &vVar0, 1, 1, 1);
	}
	return;
}

void Function_736() //Position: 0x26C6A / 158826
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel05_CS02_v1_AA", "Rebel05_CS02_v1_AA", false, 1, 1, 0, 1);
		Function_329(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_737() //Position: 0x26CB7 / 158903
{
	return Function_738(&Local_1328, &iLocal_1326, &uLocal_1353, &uLocal_1327, 4294967295);
}

int Function_738(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x26CCD / 158925
{
	vector3 vVar0;
	
	while (!iParam2->f_84)
	{
		if ((*uParam1 < 0 && *uParam1 > 3) && (GET_CURRENT_GAME_TIME() - iParam2->f_80) < 30.0f)
		{
			if (HUD_IS_FADED())
			{
				Function_362(1.0f);
			}
			Function_204(iParam0);
			PRINTSTRING("Dueling - Streaming Time Out");
			PRINTNL();
		}
		switch (*uParam1)
		{
			case 0x00000000:
				if (IS_ACTOR_VALID(StackVal))
				{
					STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(StackVal);
				}
				bLocal_161 = CREATE_LAYOUT("dueling_layout");
				if (!IS_VOLUME_VALID(iParam0->f_32))
				{
					vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 20), *(iParam0 + 8), StackVal) };
					VSCALE(&vVar0, 0,5f);
					iParam0->f_32 = CREATE_VOLUME_IN_LAYOUT(bLocal_161, "Duel_StayOut", 2, vVar0, 0.0f, 0.0f, 0.0f, 15.0f, 10.0f, 15.0f);
				}
				iParam0->f_64 = 4294967293;
				if (iParam4 >= 4294967295)
				{
					Function_76(&Global_63541[iParam455] + 144, 512);
				}
				if (iParam0->f_60 == 0)
				{
					bLocal_162 = RAND_INT_RANGE(false, true);
				}
				else
				{
					bLocal_162 = RAND_INT_RANGE(false, 2);
				}
				iParam2->f_80 = GET_CURRENT_GAME_TIME();
				if (IS_ACTOR_DRUNK(*iParam0))
				{
					SET_ACTOR_DRUNK(*iParam0, 0);
				}
				SATCHEL_SET_ENABLED(0);
				if (HAS_ACCESSORY_ENUM(StackVal, 0))
				{
					iParam2->f_56 = 1;
				}
				*bParam3 = 1004;
				Function_793(iParam0 + 60, iParam0->f_40, !IS_ACTOR_ALIVE(iParam0->f_44), *iParam0);
				Function_784(iParam0);
				if (iParam0->f_92)
				{
					Global_3369 = 0;
					*uParam1 = 5;
				}
				else
				{
					*uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (Function_406(&bLocal_90))
				{
					Function_292(iParam2 + 44);
					*uParam1 = 2;
					SET_HUD_MAP_DRAW_ENABLED(0);
				}
				else
				{
					Function_781(iParam0);
				}
				break;
			
			case 0x00000002:
				if (Function_781(iParam0) || Function_290(iParam2 + 44) < 2.0f)
				{
					*uParam1 = 3;
				}
				break;
			
			case 0x00000003:
				Global_3369 = 1;
				SET_HUD_MAP_DRAW_ENABLED(0);
				if (StackVal && IS_ACTOR_ALIVE(IS_ACTOR_ALIVE(*iParam0)))
				{
					iParam0->f_68 = 0;
					Function_763(iParam0);
					if (HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
						HUD_FADE_IN(1.0f, 1065353216);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
					}
					if (iParam0->f_36)
					{
						iParam2->f_16 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling_Tutorial", iParam0 + 68, 6, 0);
					}
					if (!DECOR_CHECK_EXIST(*iParam0, "bIsDuelActive"))
					{
						DECOR_SET_BOOL(*iParam0, "bIsDuelActive", true);
					}
					*uParam1 = 7;
				}
				else
				{
					if (iParam4 >= 4294967295)
					{
						Function_36(&Global_63541[iParam455] + 144, 512);
					}
					Function_362(1.0f);
					Function_204(iParam0);
					PRINTSTRING("Dueling - Fail");
					PRINTNL();
					return 1;
				}
				break;
			
			case 0x00000005:
				Function_406(&bLocal_90);
				Function_781(iParam0);
				break;
			
			case 0x00000006:
				if (HUD_IS_FADED())
				{
					if (Function_406(&bLocal_90))
					{
						CAMERA_RESET(0);
						if (HUD_IS_FADED())
						{
							HUD_FADE_IN(1.0f, 1065353216);
						}
					}
				}
				else
				{
					if (!Global_3369)
					{
						RESET_ANIM_SET_FOR_ACTOR(Global_34573, true);
						RESET_ANIM_SET_FOR_ACTOR(StackVal, true);
						AI_IGNORE_ACTOR(StackVal);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
						GIVE_WEAPON_TO_ACTOR(StackVal, 4, false, 1, 1);
						TELEPORT_ACTOR(StackVal, iParam0 + 20, 1, 1, 0);
						iParam0->f_68 = 0;
						Function_763(iParam0);
						if (iParam0->f_36)
						{
							iParam2->f_16 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/Dueling/Dueling_Tutorial", iParam0 + 68, 6, 0);
						}
						SET_HUD_MAP_DRAW_ENABLED(0);
						Global_3369 = 1;
					}
					Function_762(iParam0);
					if (Function_760(StackVal, bParam3, iParam2 + 32, *iParam0, !iParam0->f_36))
					{
						if (iParam0->f_92 && DECOR_CHECK_EXIST(*iParam0, "unpauseduel"))
						{
							DECOR_REMOVE(*iParam0, "unpauseduel");
						}
						*uParam1 = 10;
					}
				}
				break;
			
			case 0x00000007:
				Function_762(iParam0);
				if (Function_760(StackVal, bParam3, iParam2 + 32, *iParam0, !iParam0->f_36))
				{
					CAMERA_RESET(0);
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					*uParam1 = 10;
				}
				break;
			
			case 0x0000000A:
				if ((StackVal || IS_ACTION_NODE_PLAYING_PARTIAL(IS_ACTION_NODE_PLAYING_PARTIAL(StackVal, "draw"), "nhold_draw")) && !iParam2->f_64)
				{
					Function_759("Dueling_Tutorial_DrawNow", "DUEL_CAMERA_CUT_MASTER", 3212836864, 0, 0, 0, 0);
					iParam2->f_64 = 1;
				}
				if (StackVal || IS_ACTION_NODE_PLAYING_PARTIAL(IS_ACTION_NODE_PLAYING_PARTIAL(StackVal, "draw"), "nhold_draw"))
				{
				}
				Function_756(iParam0);
				if (Function_755())
				{
					if (HUD_IS_SHOWING_BIG_TEXT())
					{
						HUD_CLEAR_BIG_TEXT();
						HUD_CLEAR_BIG_TEXT_QUEUE();
					}
					if (!StackVal)
					{
						DYNAMICMIXER_DETRIGGERSTATE(iParam2->f_12, 1);
						iParam2->f_4 = 0;
						iParam2->f_4 = StackVal;
					}
					if (!IS_WEAPON_DRAWN(StackVal))
					{
						iParam2->f_60 = 1;
					}
					*uParam1 = 11;
				}
				else if (Function_754() == 5003)
				{
					if (HUD_IS_SHOWING_BIG_TEXT())
					{
						HUD_CLEAR_BIG_TEXT();
						HUD_CLEAR_BIG_TEXT_QUEUE();
					}
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(*iParam0), "iDuelResult", 5003);
					Function_292(iParam2 + 20);
					*uParam1 = 13;
				}
				break;
			
			case 0x0000000B:
				Function_756(iParam0);
				if (Function_754() >= 4294967295)
				{
					Function_745(iParam0, iParam2->f_60);
					if (iParam2->f_56)
					{
						if (!HAS_ACCESSORY_ENUM(StackVal, 0))
						{
							iParam2->f_56 = 0;
							Function_85(455, 1, 0, 0);
						}
					}
					Function_292(iParam2 + 20);
					if (Function_754() == 5003)
					{
						iParam2->f_72 = 1;
						*uParam1 = 13;
					}
					else
					{
						iParam2->f_76 = 1;
						if (iParam0->f_96)
						{
							*uParam1 = 14;
						}
						else
						{
							Function_744(iParam0);
							*uParam1 = 12;
						}
					}
				}
				break;
			
			case 0x0000000C:
				Function_756(iParam0);
				if (Function_743())
				{
					if (!bLocal_164)
					{
						Function_220(iParam0);
					}
					iParam2->f_68 = 1;
				}
				if (Function_739(iParam0))
				{
					*uParam1 = 13;
				}
				break;
			
			case 0x0000000D:
				Function_756(iParam0);
				if (IS_ACTOR_VALID(StackVal))
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(StackVal);
				}
				if (Function_743())
				{
					if (!bLocal_164)
					{
						Function_220(iParam0);
					}
					iParam2->f_68 = 1;
				}
				if (iParam2->f_68)
				{
					if (IS_SCRIPT_VALID(iParam2->f_16))
					{
						TERMINATE_SCRIPT(iParam2->f_16);
					}
					if (IS_ACTOR_VALID(*iParam0))
					{
						if (IS_ACTOR_ALIVE(*iParam0) && DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(*iParam0), "iDuelResult") != 5003)
						{
							LOG_ERROR("player should be dead, killing him!");
							SET_ACTOR_INVULNERABILITY(*iParam0, false);
							KILL_ACTOR(*iParam0);
						}
					}
					Function_204(iParam0);
					PRINTSTRING("Dueling - Terminating Cleanly");
					PRINTNL();
					iParam2->f_84 = 1;
				}
				break;
			
			case 0x0000000E:
				if (!bLocal_164)
				{
					Function_220(iParam0);
				}
				if (IS_SCRIPT_VALID(iParam2->f_16))
				{
					TERMINATE_SCRIPT(iParam2->f_16);
				}
				Function_204(iParam0);
				PRINTSTRING("Dueling - Terminating Cleanly");
				PRINTNL();
				iParam2->f_84 = 1;
				break;
		}
		return 0;
	}
	if (iParam2->f_76)
	{
		if (IS_SCRIPT_VALID(iParam2->f_16))
		{
			TERMINATE_SCRIPT(iParam2->f_16);
		}
		Function_204(iParam0);
		PRINTSTRING("Dueling - Pass");
		PRINTNL();
		return 1;
	}
	if (iParam2->f_72)
	{
		if (iParam4 >= 4294967295)
		{
			Function_36(&Global_63541[iParam455] + 144, 512);
		}
		if (IS_SCRIPT_VALID(iParam2->f_16))
		{
			TERMINATE_SCRIPT(iParam2->f_16);
		}
		Function_204(iParam0);
		PRINTSTRING("Dueling - Fail");
		PRINTNL();
		return 1;
	}
	return 0;
}

bool Function_739(int iParam0) //Position: 0x27499 / 160921
{
	float fVar0;
	
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0 };
	fVar0 = (GET_CURRENT_GAME_TIME() - fLocal_163);
	Function_740(iParam0, fVar0);
	if (fVar0 < 5.0f)
	{
		return 1;
	}
	return 0;
}

void Function_740(var uParam0, bool bParam1) //Position: 0x274C5 / 160965
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0 };
	bVar0 = GET_OBJECTSET_SIZE(bLocal_153);
	bVar1 = false;
	while (bVar1 <= bVar0)
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bLocal_153));
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				if (DECOR_CHECK_EXIST(bVar2, "DuelIsCrowdActor"))
				{
					if (DECOR_CHECK_EXIST(bVar2, "DuelCrowdActorReactionTimer"))
					{
						if (bParam1 < DECOR_GET_FLOAT(bVar2, "DuelCrowdActorReactionTimer"))
						{
							bVar3 = DECOR_GET_INT(bVar2, "DuelIsCrowdActor");
							Function_741(bVar2, bVar3);
							DECOR_REMOVE(bVar2, "DuelCrowdActorReactionTimer");
						}
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_741(bool bParam0, bool bParam1) //Position: 0x275BA / 161210
{
	if ((bParam1 && 8) != 0)
	{
		Function_742(bParam0, bParam1, "hat_tip");
	}
	else if ((bParam1 && 32) != 0)
	{
	}
	else
	{
		Function_742(bParam0, bParam1, "Reaction");
	}
	return;
}

void Function_742(bool bParam0, bool bParam1, bool bParam2) //Position: 0x275FB / 161275
{
	char* cVar0[64];
	
	if ((bParam1 && 512) != 0)
	{
		strcpy(&cVar0, "crowd_duel_left/", 64);
	}
	else if ((bParam1 && 1024) != 0)
	{
		strcpy(&cVar0, "crowd_duel_right/", 64);
	}
	else
	{
		strcpy(&cVar0, "crowd_duel_center/", 64);
	}
	stradd(&cVar0, bParam2, 64);
	SET_ACTION_NODE_FOR_ACTOR(bParam0, &cVar0);
	return;
}

bool Function_743() //Position: 0x27671 / 161393
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar1 = 0;
	while (iVar1 <= iVar0)
	{
		switch (GET_EVENT_RESPONSE_ID(iVar1))
		{
			case 0x0000138E:
				return 1;
				break;
			
			default:
				break;
		}
		iVar1++;
	}
	return 0;
}

void Function_744(int iParam0) //Position: 0x276A8 / 161448
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0 };
	fLocal_163 = GET_CURRENT_GAME_TIME();
	bVar0 = GET_OBJECTSET_SIZE(bLocal_153);
	bVar1 = false;
	while (bVar1 <= bVar0)
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bLocal_153));
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				if (DECOR_CHECK_EXIST(bVar2, "DuelIsCrowdActor"))
				{
					bVar3 = RAND_FLOAT_RANGE(1,5f, 2.0f);
					DECOR_SET_FLOAT(bVar2, "DuelCrowdActorReactionTimer", bVar3);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_745(var uParam0, int iParam1) //Position: 0x2773F / 161599
{
	switch (Function_754())
	{
		case 0x0000138A:
			Function_24(Function_749(GET_ACTOR_ENUM(*uParam0), 6, 4), (!Global_3380 && !Function_748()), 1, 1, 0);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(*uParam0), "iDuelResult", 5002);
			MEMORY_CLEAR_ALL(StackVal);
			SET_ACTOR_FACE_STYLE(StackVal, 2);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(StackVal, false);
			AI_GLOBAL_CLEAR_DANGER(StackVal);
			AUDIO_PLAY_VOCAL_EFFECT(StackVal, 10, 1);
			Function_85(451, 1, 0, 0);
			Function_85(454, 1, 0, 0);
			Function_85(452, 1, 0, 0);
			if (!Global_3380 && !(((Function_747(48) || Function_747(74)) || Function_747(51)) || Function_747(67)))
			{
				Function_92(100, 1, 0);
				Function_109(200, 1, 0);
			}
			Function_746(6, Global_29006);
			break;
		
		case 0x00001389:
			Function_24(Function_749(GET_ACTOR_ENUM(*uParam0), 6, 4), (!Global_3380 && !Function_748()), 1, 1, 0);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(*uParam0), "iDuelResult", 5001);
			Function_85(451, 1, 0, 0);
			Function_85(452, 1, 0, 0);
			if (!Global_3380 && !(((Function_747(48) || Function_747(74)) || Function_747(51)) || Function_747(67)))
			{
				Function_92(50, 1, 0);
			}
			if (iParam1 && !(((Function_747(48) || Function_747(74)) || Function_747(51)) || Function_747(67)))
			{
				if (!DECOR_CHECK_EXIST(StackVal, "honor"))
				{
					Function_109(4294967196, 1, 0);
				}
				else
				{
					DECOR_SET_BOOL(*uParam0, "bDrewFirst", true);
				}
			}
			Function_746(6, Global_29006);
			break;
		
		case 0x0000138C:
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(*uParam0), "iDuelResult", 5004);
			break;
		
		case 0x0000138B:
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(*uParam0), "iDuelResult", 5003);
			break;
		
		case 0x0000138D:
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(*uParam0), "iDuelResult", 5005);
			break;
	}
	return;
}

void Function_746(int iParam0, int iParam1) //Position: 0x27943 / 162115
{
	if (!Function_138(3))
	{
		return;
	}
	if (Function_40())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == Global_30640[0])
			{
				if (IS_PS3())
				{
					Function_145(4, 4, 0, 0, 1);
				}
			}
			else if (iParam1 == Global_30717[0])
			{
				Function_145(9, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000005:
			if (iParam1 == Global_30668[0])
			{
				Function_145(5, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000002:
			if (iParam1 == Global_30658[1])
			{
				Function_145(6, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000007:
			if (iParam1 == Global_30707[2])
			{
				Function_145(7, 4, 0, 0, 1);
			}
			break;
		
		case 0x00000008:
			if (iParam1 == Global_30707[3])
			{
				Function_145(8, 16, 0, 0, 1);
			}
			break;
		
		case 0x00000004:
			if (iParam1 == Global_30723[2])
			{
				Function_145(9, 2, 0, 0, 1);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == Global_30640[0])
			{
				if (Function_139(2) && !Function_125(2))
				{
					Function_145(2, 8, 0, 0, 1);
				}
			}
			break;
	}
	return;
}

bool Function_747(int iParam0) //Position: 0x27A51 / 162385
{
	if (Global_74542[iParam010] == 5)
	{
		return 1;
	}
	return 0;
}

bool Function_748() //Position: 0x27A66 / 162406
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_63541)
	{
		if (Function_747(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_749(bool bParam0, bool bParam1, bool bParam2) //Position: 0x27A8B / 162443
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_753(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_750(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_750(bParam0, bParam1, bParam2, 4294967295);
}

int Function_750(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x27AE9 / 162537
{
	var uVar0;
	
	if (!Function_752(bParam2))
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
	uVar0 = Function_753(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_751(uVar0);
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

int Function_751(int iParam0) //Position: 0x27C3E / 162878
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

bool Function_752(int iParam0) //Position: 0x27C7C / 162940
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_753(int iParam0, int iParam1, bool bParam2) //Position: 0x27C91 / 162961
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_754() //Position: 0x27CB1 / 162993
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		switch (GET_EVENT_RESPONSE_ID(iVar1))
		{
			case 0x00001389:
				return 5001;
				break;
			
			case 0x0000138A:
				return 5002;
				break;
			
			case 0x0000138C:
				return 5004;
				break;
			
			case 0x0000138B:
				return 5003;
				break;
			
			case 0x0000138D:
				return 5005;
				break;
		}
		iVar1++;
	}
	return 4294967295;
}

bool Function_755() //Position: 0x27D1D / 163101
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar1 = 0;
	while (iVar1 <= iVar0)
	{
		switch (GET_EVENT_RESPONSE_ID(iVar1))
		{
			case 0x00001388:
				return 1;
				break;
		}
		iVar1++;
	}
	return 0;
}

void Function_756(int iParam0) //Position: 0x27D51 / 163153
{
	if (iLocal_154 == 0)
	{
		if (Function_758(iParam0))
		{
			Function_757(iParam0);
			iLocal_154 = 1;
		}
	}
	return;
}

void Function_757(int iParam0) //Position: 0x27D6D / 163181
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0 };
	bVar0 = GET_OBJECTSET_SIZE(bLocal_153);
	bVar1 = false;
	while (bVar1 <= bVar0)
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bLocal_153));
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				if (DECOR_CHECK_EXIST(bVar2, "DuelIsCrowdActor"))
				{
					bVar3 = DECOR_GET_INT(bVar2, "DuelIsCrowdActor");
					if ((bVar3 && 32) == 0)
					{
						Function_742(bVar2, bVar3, "GunfireShock");
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

bool Function_758(int iParam0) //Position: 0x27E07 / 163335
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	iVar0 = 0;
	bVar1 = GET_EVENT_LAYOUT();
	bVar2 = CREATE_OBJECT_ITERATOR(bVar1);
	ITERATE_IN_LAYOUT(bVar2, bVar1);
	bVar3 = START_OBJECT_ITERATOR(bVar2);
	if (IS_OBJECT_VALID(bVar3))
	{
		while (IS_OBJECT_VALID(bVar3))
		{
			bVar6 = GET_EVENT_FROM_OBJECT(bVar3);
			if (IS_EVENT_VALID(bVar6))
			{
				if (GET_EVENT_TYPE(bVar6) == 6)
				{
					bVar4 = GET_EVENT_PERPETRATOR(bVar6);
					if (IS_OBJECT_VALID(bVar4))
					{
						if (GET_OBJECT_TYPE(bVar4) == 15)
						{
							bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
							if (IS_ACTOR_VALID(bVar5))
							{
								if (bVar5 == *iParam0)
								{
									iVar0 = 1;
								}
								else if (StackVal == bVar5)
								{
									iVar0 = 1;
								}
							}
						}
					}
				}
			}
			bVar3 = OBJECT_ITERATOR_NEXT(bVar2);
		}
	}
	DESTROY_ITERATOR(bVar2);
	return iVar0;
}

void Function_759(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x27EA5 / 163493
{
	if (IS_STRING_VALID(bParam3))
	{
		PRINT_BIG_FORMAT(bParam2, bParam0, bParam3, iParam4, iParam5, iParam6, 0, iParam1);
	}
	else
	{
		PRINT_BIG(bParam0, bParam2, 0, 0, iParam1);
	}
}

bool Function_760(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x27ED5 / 163541
{
	if (!Function_293(bParam1))
	{
		Function_292(bParam1);
	}
	switch (*uParam0)
	{
		case 0x000003EC:
			UI_LABEL_SET_TEXT("RacePosition", GET_ACTOR_ENUM_STRING(bParam3));
			UI_ENTER("RacePosition");
			PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
			if (Global_74542[5110] != 5 && bParam4)
			{
				Function_130("RCM_Gunslinger_Warning", 10.0f, 1, 0, 0, 1, 0);
			}
			Function_241(bParam1);
			*uParam0 = 1006;
			break;
		
		case 0x000003EE:
			if (Function_290(bParam1) < (5.0f - 1.0f) && UI_ISACTIVE("RacePosition"))
			{
				UI_EXIT("RacePosition");
			}
			if (Function_290(bParam1) < 5.0f)
			{
				DECOR_SET_BOOL(bParam2, "Tutorial0Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				if (UI_ISACTIVE("RacePosition"))
				{
					UI_EXIT("RacePosition");
				}
				Function_241(bParam1);
				*uParam0 = 1007;
			}
			break;
		
		case 0x000003EF:
			if (Function_290(bParam1) < 5.0f)
			{
				DECOR_SET_BOOL(bParam2, "Tutorial1Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Function_241(bParam1);
				*uParam0 = 1104;
			}
			break;
		
		case 0x00000450:
			if (Function_290(bParam1) < 5.0f)
			{
				DECOR_SET_BOOL(bParam2, "Tutorial2Complete", true);
				PLAY_SOUND_FRONTEND("DUEL_CAMERA_CUT_MASTER");
				Function_761();
				Function_241(bParam1);
				*uParam0 = 1000;
				return 1;
			}
			break;
	}
	return 0;
}

void Function_761() //Position: 0x280FA / 164090
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = GET_OBJECTSET_SIZE(bLocal_153);
	bVar1 = false;
	while (bVar1 <= bVar0)
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bLocal_153));
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				if (DECOR_CHECK_EXIST(bVar2, "DuelIsCrowdActor"))
				{
					bVar3 = DECOR_GET_INT(bVar2, "DuelIsCrowdActor");
					if ((bVar3 && 16384) != 0)
					{
						if ((bVar3 && 16) != 0)
						{
							Function_742(bVar2, bVar3, "point");
						}
					}
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_762(int iParam0) //Position: 0x2818D / 164237
{
	*iParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0 };
	iLocal_154 = 0;
	return;
}

void Function_763(int iParam0) //Position: 0x281A0 / 164256
{
	var uVar0;
	bool bVar1;
	struct<61> Var2;
	
	bLocal_164 = false;
	iLocal_165 = 0;
	if (!IS_ACTOR_VALID(StackVal))
	{
		LOG_ERROR("dueler is not valid, exiting dueling");
		Function_204(iParam0);
		TERMINATE_THIS_SCRIPT();
	}
	AUDIO_ALLOW_PREDUEL_SPEECH(StackVal);
	AUDIO_ALLOW_PREDUEL_SPEECH(*iParam0);
	if (IS_VOLUME_VALID(iParam0->f_32))
	{
		FIRE_STOP_FLAMES_IN_VOLUME(iParam0->f_32);
		Function_780(iParam0->f_32);
		Function_779(iParam0->f_32, bLocal_161, 0);
	}
	else
	{
		FIRE_STOP_ALL_FIRES();
	}
	if (FIRE_IS_ACTOR_ON_FIRE(*iParam0))
	{
		FIRE_STOP_ON_ACTOR(*iParam0);
	}
	if (FIRE_IS_ACTOR_ON_FIRE(StackVal))
	{
		FIRE_STOP_ON_ACTOR(StackVal);
	}
	iLocal_155 = 0;
	if (Function_777(1))
	{
		Function_316(9);
		iLocal_155 = 1;
	}
	Function_776(StackVal);
	if (!Function_775(GET_ACTOR_ENUM(*iParam0), 6, 4))
	{
		Function_750(GET_ACTOR_ENUM(*iParam0), 6, 4, 4294967295);
		iParam0->f_36 = 1;
	}
	else if (Function_83(Function_749(GET_ACTOR_ENUM(*iParam0), 6, 4)) < 0)
	{
		if (!iParam0->f_36)
		{
		}
		iParam0->f_36 = 1;
	}
	else
	{
		iParam0->f_36 = 0;
	}
	iParam0->f_68 = 0;
	(iParam0 + 68)->f_4 = -1.0f;
	(iParam0 + 68)->f_8 = *iParam0;
	(iParam0 + 68)->f_12 = StackVal;
	SATCHEL_SET_ENABLED(0);
	if (iParam0->f_60 != 3)
	{
		MEMORY_CONSIDER_AS_ENEMY(StackVal, *iParam0);
		SET_ACTOR_UPDATE_PRIORITY(StackVal, false);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(StackVal, 100.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(StackVal, 53, 0.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(StackVal, 54, 0.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(StackVal, 31, -1.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(StackVal, 59, 0.0f);
	}
	Function_619(StackVal, 0);
	RESET_ANIM_SET_FOR_ACTOR(StackVal, false);
	RESET_ANIM_SET_FOR_ACTOR(*iParam0, false);
	ACTOR_FORCE_WEAPON_RENDER(StackVal, 1, 1);
	ACTOR_ENABLE_VARIABLE_MESH(StackVal, 5, true);
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	Function_774(*iParam0);
	if (!iParam0->f_40)
	{
		uVar0 = "Dueling_Tell_Sequence_Tutorial";
	}
	else
	{
		uVar0 = "Dueling_Tell_Sequence_Hostage";
	}
	if (!BEGIN_DUEL(StackVal, *iParam0, *(iParam0 + 8), *(iParam0 + 20), "duel_player", bLocal_156, "duel_player", uLocal_157, uVar0))
	{
		LOG_ERROR("Duel could not start");
	}
	if (iParam0->f_40)
	{
		if (!IS_ACTOR_ALIVE(iParam0->f_44))
		{
			iParam0->f_44 = CREATE_ACTOR_IN_LAYOUT(bLocal_161, "duelhostage", 59, *(iParam0 + 20), 0.0f, 0.0f, 0.0f);
		}
		Function_254(iParam0->f_44);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, StackVal, StackVal, StackVal, GET_OBJECT_HEADING(Function_254(iParam0->f_44)), 1, true, 1);
		RESET_ANIM_SET_FOR_ACTOR(iParam0->f_44, true);
		SET_LINKED_ANIM_TARGET(StackVal, iParam0->f_44);
		SET_ANIM_SET_FOR_ACTOR(StackVal, "duel_hostage", 0);
		SET_ANIM_SET_FOR_ACTOR(iParam0->f_44, "duel_hostage", 0);
		DESTROY_OBJECT(DROP_ACCESSORY_ENUM(StackVal, 0));
		ADD_DUEL_HOSTAGE(iParam0->f_44, *iParam0);
		SET_EMOTION(iParam0->f_44, 3, -1.0f);
		TASK_FLEE_ACTOR(StackVal, iParam0->f_44, 20.0f, -1.0f, 0, 0, 0);
	}
	Function_781(iParam0);
	if (IS_VOLUME_VALID(iParam0->f_56))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bLocal_161, 4294967295, 1);
		LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(bVar1, iParam0->f_56, "", 1);
		Function_773(bVar1);
		DESTROY_OBJECTSET(bVar1);
	}
	iLocal_166 = 0;
	*(&Var2 + 64) = 6;
	*(&Var2 + 140) = 6;
	uVar44 = 6;
	if (Function_771(&Var2, iParam0->f_64))
	{
		iLocal_166 = Var2.f_56;
		if (Var2.f_60 >= 0)
		{
			if (Var2.f_56 == 1)
			{
				Function_770(bLocal_161, &Var2, iParam0, &uVar44);
			}
			else if (Var2.f_56 == 2)
			{
				Function_767(50.0f, bLocal_161, &Var2, iParam0, &uVar44);
			}
		}
	}
	Function_764(iParam0, bLocal_161);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(StackVal);
	if (iParam0->f_60 != 0 && iParam0->f_52 < 50)
	{
		iParam0->f_52 = 50;
	}
	else if (iParam0->f_60 == 1)
	{
		if (iParam0->f_52 >= 75)
		{
			iParam0->f_52 = 75;
		}
		else if (iParam0->f_52 > 50 && !Global_3380)
		{
			iParam0->f_52 = 50;
		}
	}
	else if ((iParam0->f_60 != 1 && iParam0->f_52 > 75) && !Global_3380)
	{
		iParam0->f_52 = 75;
	}
	if (iParam0->f_36)
	{
		if (!SET_DUEL_DIFFICULTY(*iParam0, (10.0f * 2.0f), iParam0->f_52, iParam0->f_48))
		{
			LOG_ERROR("Duel could not set difficulty");
		}
	}
	else if (!SET_DUEL_DIFFICULTY(*iParam0, 10.0f, iParam0->f_52, iParam0->f_48))
	{
		LOG_ERROR("Duel could not set difficulty");
	}
	if (DECOR_CHECK_EXIST(*iParam0, "iDuelResult"))
	{
		DECOR_REMOVE(*iParam0, "iDuelResult");
	}
	Global_62993 = 1;
	bVar51 = GET_OBJECT_MODEL_NAME(*iParam0);
	ADD_NEW_EVENT_RESPONSE(5001, 38, 15, bVar51);
	ADD_NEW_EVENT_RESPONSE(5002, 39, 15, bVar51);
	ADD_NEW_EVENT_RESPONSE(5003, 40, 15, bVar51);
	ADD_NEW_EVENT_RESPONSE(5004, 41, 15, bVar51);
	ADD_NEW_EVENT_RESPONSE(5000, 44, 15, bVar51);
	ADD_NEW_EVENT_RESPONSE(5006, 43, 15, bVar51);
	ADD_NEW_EVENT_RESPONSE(5005, 42, 15, bVar51);
	ADD_NEW_EVENT_RESPONSE(5007, 46, 15, bVar51);
	ADD_NEW_EVENT_RESPONSE(StackVal, 5006, 43, GET_OBJECT_MODEL_NAME(15));
	_DYNAMICMIXER_2();
	Function_178(1);
	TASK_STAND_STILL(StackVal, -1.0f, 0, 0);
	TASK_PRIORITY_SET(StackVal, true);
	MEMORY_ALLOW_SHOOTING(StackVal, true);
	ACTOR_END_FORCE_HOLSTER(StackVal);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(StackVal, 0);
	MEMORY_CONSIDER_AS_ENEMY(StackVal, Global_34573);
	MEMORY_ATTACK_ON_SIGHT(StackVal, 1);
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(GET_ACTOR_FACTION(StackVal), GET_ACTOR_FACTION(*iParam0), 1.0f);
	FIRE_STOP_ON_ACTOR(StackVal);
	AI_CLEAR_DONT_HARM_ACTOR(*iParam0);
	TASK_CLEAR(*iParam0);
	FIRE_STOP_ON_ACTOR(*iParam0);
	SET_ACTOR_INVULNERABILITY(*iParam0, false);
	Function_389(&uLocal_158, 0.0f);
	return;
}

int Function_764(int iParam0, bool bParam1) //Position: 0x28763 / 165731
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = CREATE_VOLUME_IN_LAYOUT(bParam1, "volAmbientSpectators", 2, *(iParam0 + 8), 0.0f, 0.0f, 0.0f, 80.0f, 50.0f, 80.0f);
	if (!IS_VOLUME_VALID(bVar0))
	{
		LOG_ERROR("DUEL_FIND_AND_TASK_NEARBY_ACTORS: Unable to create search volume.");
		return 0;
	}
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bParam1, 15, 1);
	iVar2 = LOCATE_ACTORS_IN_VOLUME(bVar0, bVar1, 0, 1);
	bLocal_153 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bParam1, 15, 1);
	bVar3 = false;
	while (bVar3 <= iVar2)
	{
		bVar4 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar1));
		if (((((StackVal == bVar4 && bVar4 == iParam0->f_44) && bVar4 == *iParam0) && IS_ACTOR_HUMAN(bVar4)) && !IS_OBJECT_IN_OBJECTSET(bVar4, bLocal_152)) && !DECOR_CHECK_EXIST(bVar4, "ignoreactorinduel"))
		{
			if (DECOR_CHECK_EXIST(bVar4, "DuelIsCrowdActor"))
			{
				Function_765(bVar4, iParam0, bParam1);
				ADD_OBJECT_TO_OBJECTSET(bVar4, bLocal_153);
			}
		}
		bVar3++;
	}
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (IS_OBJECTSET_VALID(bVar1))
	{
		DESTROY_OBJECTSET(bVar1);
	}
	return 1;
}

void Function_765(bool bParam0, var uParam1, int iParam2) //Position: 0x288C0 / 166080
{
	bool bVar0;
	var uVar1[2];
	
	iParam2 = iParam2;
	if (DECOR_CHECK_EXIST(bParam0, "DuelIsCrowdActor"))
	{
		bVar0 = DECOR_GET_INT(bParam0, "DuelIsCrowdActor");
		Function_766(bVar0, &uVar1);
		SET_ANIM_SET_FOR_ACTOR(bParam0, uVar1[0], 0);
		SET_ACTION_NODE_FOR_ACTOR(bParam0, uVar1[1]);
	}
	TASK_FACE_ACTOR(StackVal, bParam0, 1, 3212836864);
	TASK_PRIORITY_SET(bParam0, true);
	return;
}

void Function_766(var uParam0, int iParam1) //Position: 0x28937 / 166199
{
	bool bVar0;
	
	bVar0 = false;
	if (uParam0 & 16 != 0)
	{
		if (uParam0 & 16384 == 0)
		{
			bVar0 = true;
		}
	}
	if (uParam0 & 32 != 0)
	{
		(*iParam1)[0] = "stand_wringhands";
		(*iParam1)[1] = "stand_wringhands";
	}
	else if (uParam0 & 256 != 0)
	{
		(*iParam1)[0] = "crowd_duel";
		if (bVar0)
		{
			(*iParam1)[1] = "crowd_duel_center/point";
		}
		else
		{
			(*iParam1)[1] = "crowd_duel_center";
		}
	}
	else if (uParam0 & 512 != 0)
	{
		(*iParam1)[0] = "crowd_duel";
		if (bVar0)
		{
			(*iParam1)[1] = "crowd_duel_left/point";
		}
		else
		{
			(*iParam1)[1] = "crowd_duel_left";
		}
	}
	else if (uParam0 & 1024 != 0)
	{
		(*iParam1)[0] = "crowd_duel";
		if (bVar0)
		{
			(*iParam1)[1] = "crowd_duel_right/point";
		}
		else
		{
			(*iParam1)[1] = "crowd_duel_right";
		}
	}
	else
	{
		(*iParam1)[0] = "crowd_duel";
		(*iParam1)[1] = "crowd_duel_center";
	}
	return;
}

int Function_767(var uParam0, bool bParam1, int iParam2, int iParam3, var uParam4) //Position: 0x28AD4 / 166612
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	vector3 vVar9;
	bool bVar12;
	
	vVar2 = { uParam0, 50.0f, uParam0 };
	bVar0 = CREATE_VOLUME_IN_LAYOUT(bParam1, "volAmbientSpecsToGrab", 2, *(iParam3 + 8), 0.0f, 0.0f, 0.0f, vVar2);
	if (!IS_VOLUME_VALID(bVar0))
	{
		LOG_ERROR("DUEL_FIND_AND_TELEPORT_SPECTATORS: Unable to create search volume.");
		return 0;
	}
	bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bParam1, 15, 1);
	iVar5 = LOCATE_ACTORS_IN_VOLUME(bVar0, bVar1, 0, 1);
	iVar6 = 0;
	bVar7 = false;
	while (bVar7 <= iVar5)
	{
		bVar8 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, bVar1));
		if ((((((((((StackVal == bVar8 && bVar8 == iParam3->f_44) && bVar8 == *iParam3) && IS_ACTOR_HUMAN(bVar8)) && !IS_ACTOR_HOGTIED(bVar8)) && !IS_ACTOR_RIDING_VEHICLE(bVar8)) && !IS_ACTOR_RIDING(bVar8)) && !IS_ACTOR_DRUNK(bVar8)) && !IS_OBJECT_IN_OBJECTSET(bVar8, bLocal_152)) && !DECOR_CHECK_EXIST(bVar8, "ignoreactorinduel")) && iVar6 > iParam2->f_60)
		{
			(*uParam4)[iVar6] = bVar8;
			Function_769(GET_PERS_CHAR_FROM_ACTOR(bVar8), 1);
			vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(iParam2 + 64[iVar63]), *(iParam3 + 20), StackVal) };
			bVar12 = UNK_0x9C40E671(&vVar9);
			TELEPORT_ACTOR_WITH_HEADING(bVar8, *(iParam2 + 64[iVar63]), bVar12, 1, true, 1);
			TASK_CLEAR(bVar8);
			RESET_ANIM_SET_FOR_ACTOR(bVar8, true);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar8, 1);
			TASK_FACE_COORD(bVar8, iParam2 + 36, 1);
			TASK_PRIORITY_SET(bVar8, true);
			iVar6++;
		}
		bVar7++;
	}
	Function_768(uParam4, iVar6, 0, iParam2);
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (IS_OBJECTSET_VALID(bVar1))
	{
		DESTROY_OBJECTSET(bVar1);
	}
	return 1;
}

int Function_768(var uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x28C9B / 167067
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	
	if (iParam1 < 0)
	{
		return 1;
	}
	iVar0 = 4294967295;
	bVar1 = RAND_INT_RANGE(false, (iParam1 - 1));
	iVar2 = 0;
	while (iVar2 <= iParam1)
	{
		iVar3 = ((iVar2 + bVar1) % iParam1);
		if (IS_ACTOR_MALE((*uParam0)[iVar3]))
		{
			if ((*iParam3 + 140)[iVar3] & 4096 != 0)
			{
				if (UNK_0xE094DB31((*uParam0)[iVar3], 0))
				{
					iVar0 = iVar3;
				}
			}
		}
		iVar2++;
	}
	iVar4 = 4294967295;
	bVar1 = RAND_INT_RANGE(false, (iParam1 - 1));
	iVar5 = 8192 | 16384;
	iVar2 = 0;
	while (iVar2 <= iParam1)
	{
		iVar6 = ((iVar2 + bVar1) % iParam1);
		if (((*iParam3 + 140)[iVar6] && iVar5) != 0)
		{
			iVar4 = iVar6;
		}
		iVar2++;
	}
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 <= iParam1)
	{
		bVar9 = (*iParam3 + 140)[iVar8];
		if (!bParam2)
		{
			Function_76(&bVar9, 4);
		}
		if (iVar8 == iVar0)
		{
			Function_76(&bVar9, 8);
		}
		if (iVar8 == iVar4)
		{
			Function_76(&bVar9, 16);
		}
		if (bParam2)
		{
			bVar10 = RAND_FLOAT_RANGE(0.0f, 1.0f);
			if (bVar10 < 0,5f || iVar7 <= 3)
			{
				Function_76(&bVar9, 64);
			}
			else
			{
				iVar7++;
			}
		}
		DECOR_SET_INT((*uParam0)[iVar8], "DuelIsCrowdActor", bVar9);
		iVar8++;
	}
	return 1;
}

int Function_769(bool bParam0, bool bParam1) //Position: 0x28DDE / 167390
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			REFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
			if (bParam1)
			{
				if (IS_ACTOR_HOGTIED(bVar0))
				{
					FREE_FROM_HOGTIE(bVar0);
				}
			}
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 1);
			return 1;
		}
	}
	return 0;
}

void Function_770(bool bParam0, int iParam1, int iParam2, var uParam3) //Position: 0x28E80 / 167552
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	
	*iParam2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam2 };
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= iParam1->f_60)
	{
		uVar2 = (*iParam1 + 140)[iVar1];
		if (uVar2 & 32768 == 0)
		{
			vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*(iParam1 + 64[iVar13]), *(iParam2 + 20), StackVal) };
			bVar6 = UNK_0x9C40E671(&vVar3);
		}
	}
}

bool Function_771(int iParam0, int iParam1) //Position: 0x28F39 / 167737
{
	if (iParam1 <= 0)
	{
		return Function_772(iParam0, iParam1);
	}
	if (Global_29006 == Global_30640[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -2175,953f, 16,256f, 2611,705f };
			*(iParam0 + 36) = { -2166,595f, 16,214f, 2611,732f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2160,472f, 16,902f, 2605,667f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -2158,75f, 16,881f, 2605,917f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2155,889f, 16,434f, 2617,996f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2157,149f, 16,447f, 2619,214f };
			(*iParam0 + 140)[3] = 18944;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -2157,237f, 16,256f, 2611,759f };
			*(iParam0 + 36) = { -2166,595f, 16,214f, 2611,732f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2164,137f, 16,909f, 2619,3f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -2171,411f, 16,449f, 2619,825f };
			(*iParam0 + 140)[1] = 7168;
			*(iParam0 + 64[23]) = { -2173,083f, 16,449f, 2620,048f };
			(*iParam0 + 140)[2] = 12800;
			*(iParam0 + 64[33]) = { -2168,264f, 16,881f, 2605,223f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -2141,009f, 16,097f, 2610,77f };
			*(iParam0 + 36) = { -2152,214f, 16,097f, 2611,114f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2163,959f, 16,909f, 2619,74f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2165,694f, 16,909f, 2620,008f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2161,763f, 16,881f, 2605,855f };
			(*iParam0 + 140)[2] = 4352;
			*(iParam0 + 64[33]) = { -2157,148f, 16,881f, 2602,253f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -2163,419f, 16,097f, 2611,458f };
			*(iParam0 + 36) = { -2152,214f, 16,097f, 2611,114f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2146,166f, 16,399f, 2604,041f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2144,782f, 16,437f, 2604,025f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2134,941f, 16,449f, 2619,2f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -2142,436f, 16,451f, 2620,109f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -2109,022f, 16,306f, 2610,545f };
			*(iParam0 + 36) = { -2120,304f, 16,097f, 2610,42f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2128,746f, 16,582f, 2618,448f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2130,542f, 16,583f, 2618,705f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2132,521f, 16,583f, 2618,72f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { -2131,128f, 16,617f, 2603,082f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -2131,586f, 16,306f, 2610,295f };
			*(iParam0 + 36) = { -2120,304f, 16,097f, 2610,42f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 130.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2109,311f, 17,032f, 2602,233f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -2084,119f, 16,722f, 2620,025f };
			(*iParam0 + 140)[1] = 2304;
			*(iParam0 + 64[23]) = { -2110,06f, 16,574f, 2618,706f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2112,009f, 16,574f, 2618,81f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 6)
		{
			*(iParam0 + 24) = { -2181,665f, 16,199f, 2626,591f };
			*(iParam0 + 36) = { -2181,558f, 16,27f, 2617,295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 70.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2187,365f, 16,947f, 2611,735f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2187,344f, 16,947f, 2610,434f };
			(*iParam0 + 140)[1] = 16896;
			*(iParam0 + 64[23]) = { -2175,141f, 16,563f, 2603,119f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2173,878f, 16,846f, 2603,615f };
			(*iParam0 + 140)[3] = 8704;
			return 1;
		}
		if (iParam1 == 7)
		{
			*(iParam0 + 24) = { -2181,451f, 16,199f, 2607,999f };
			*(iParam0 + 36) = { -2181,558f, 16,27f, 2617,295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2171,507f, 16,91f, 2626,342f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2171,085f, 17,419f, 2628,723f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2188,435f, 46,438f, 2629,844f };
			(*iParam0 + 140)[2] = 6400;
			*(iParam0 + 64[33]) = { -2186,93f, 16,354f, 2624,667f };
			(*iParam0 + 140)[3] = 6400;
			return 1;
		}
		if (iParam1 == 8)
		{
			*(iParam0 + 24) = { -2182,602f, 16,279f, 2582,669f };
			*(iParam0 + 36) = { -2182,557f, 16,283f, 2592,741f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2175,813f, 16,892f, 2598,68f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2175,771f, 16,892f, 2599,781f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2187,98f, 16,947f, 2605,092f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2188,852f, 16,947f, 2604,008f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 9)
		{
			*(iParam0 + 24) = { -2182,512f, 16,279f, 2602,813f };
			*(iParam0 + 36) = { -2182,557f, 16,283f, 2592,741f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2192,36f, 16,58f, 2590,16f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -2175,242f, 16,431f, 2579,68f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { -2174,96f, 16,393f, 2581,227f };
			(*iParam0 + 140)[2] = 12800;
			*(iParam0 + 64[33]) = { -2174,707f, 16,359f, 2583,002f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
	}
	if (Global_29006 == Global_30668[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -833,757f, 92,093f, 2405,053f };
			*(iParam0 + 36) = { -824,86f, 92,111f, 2405,911f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -826,829f, 92,604f, 2399,558f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -825,39f, 92,604f, 2400,278f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -817,222f, 92,228f, 2400,68f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -815,883f, 92,122f, 2401,766f };
			(*iParam0 + 140)[3] = 12800;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -815,963f, 92,093f, 2406,769f };
			*(iParam0 + 36) = { -824,86f, 92,111f, 2405,911f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -834,486f, 92,625f, 2412,879f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -833,019f, 92,604f, 2398,71f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { -830,829f, 92,597f, 2398,705f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -827,994f, 92,604f, 2399,416f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -948,017f, 90,246f, 2443,329f };
			*(iParam0 + 36) = { -940,246f, 90,101f, 2439,536f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -944,354f, 90,362f, 2433,664f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -943,069f, 90,368f, 2432,761f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -936,299f, 90,374f, 2429,44f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -935,053f, 90,383f, 2429,297f };
			(*iParam0 + 140)[3] = 8704;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -932,475f, 90,246f, 2435,743f };
			*(iParam0 + 36) = { -940,246f, 90,101f, 2439,536f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -943,643f, 90,353f, 2452,65f };
			(*iParam0 + 140)[0] = 7168;
			*(iParam0 + 64[13]) = { -945,45f, 90,35f, 2452,563f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -957,561f, 90,786f, 2438,436f };
			(*iParam0 + 140)[2] = 2304;
			*(iParam0 + 64[33]) = { -953,349f, 90,786f, 2436,586f };
			(*iParam0 + 140)[3] = 20736;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -773,226f, 92,264f, 2441,655f };
			*(iParam0 + 36) = { -779,513f, 92,261f, 2435,719f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -789,443f, 92,336f, 2433,929f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { -788,805f, 93,291f, 2415,236f };
			(*iParam0 + 140)[1] = 4352;
			*(iParam0 + 64[23]) = { -782,939f, 93,132f, 2421,574f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -781,724f, 93,106f, 2422,239f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -785,8f, 92,264f, 2429,783f };
			*(iParam0 + 36) = { -779,513f, 92,261f, 2435,719f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -789,063f, 93,199f, 2416,324f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { -787,695f, 93,291f, 2416,819f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -784,003f, 92,958f, 2422,655f };
			(*iParam0 + 140)[2] = 4096;
			*(iParam0 + 64[33]) = { -788,074f, 92,302f, 2435,201f };
			(*iParam0 + 140)[3] = 4096;
			return 1;
		}
	}
	if (Global_29006 == Global_30668[1])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { 161,801f, 73,036f, 2209,601f };
			*(iParam0 + 36) = { 154,678f, 73,036f, 2214,532f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 151,093f, 73,781f, 2231,127f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 149,66f, 73,778f, 2229,832f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { 149,334f, 73,78f, 2232,961f };
			(*iParam0 + 140)[2] = 20736;
			*(iParam0 + 64[33]) = { 130,805f, 73,285f, 2225,233f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { 147,555f, 73,036f, 2219,463f };
			*(iParam0 + 36) = { 154,678f, 73,036f, 2214,532f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 132,103f, 73,286f, 2222,323f };
			(*iParam0 + 140)[0] = 256;
			*(iParam0 + 64[13]) = { 163,447f, 73,758f, 2196,496f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { 164,755f, 73,755f, 2196,096f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 168,478f, 73,286f, 2214,951f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { 112,178f, 73,036f, 2307,669f };
			*(iParam0 + 36) = { 113,796f, 73,036f, 2299,295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 110,108f, 73,286f, 2288,538f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { 121,847f, 73,286f, 2288,113f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { 121,773f, 73,286f, 2289,774f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { 121,96f, 73,286f, 2291,226f };
			(*iParam0 + 140)[3] = 4608;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { 115,414f, 73,036f, 2290,921f };
			*(iParam0 + 36) = { 113,796f, 73,036f, 2299,295f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 117,484f, 73,286f, 2310,052f };
			(*iParam0 + 140)[0] = 6400;
			*(iParam0 + 64[13]) = { 105,745f, 73,286f, 2310,477f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { 105,819f, 73,286f, 2308,816f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { 105,632f, 73,286f, 2307,364f };
			(*iParam0 + 140)[3] = 4608;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { 125,52f, 72,495f, 2253,003f };
			*(iParam0 + 36) = { 123,009f, 73,014f, 2261,074f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 112,309f, 73,767f, 2280,208f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { 112,308f, 73,641f, 2277,641f };
			(*iParam0 + 140)[1] = 9216;
			*(iParam0 + 64[23]) = { 113,096f, 73,649f, 2273,542f };
			(*iParam0 + 140)[2] = 512;
			*(iParam0 + 64[33]) = { 113,108f, 73,66f, 2271,663f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { 120,498f, 72,495f, 2269,145f };
			*(iParam0 + 36) = { 123,009f, 73,014f, 2261,074f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { 112,671f, 73,644f, 2276,903f };
			(*iParam0 + 140)[0] = 256;
			*(iParam0 + 64[13]) = { 117,043f, 73,643f, 2240,313f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { 118,516f, 73,712f, 2240,557f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 124,33f, 76,749f, 2238,564f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	if (Global_29006 == Global_30685[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -4297,778f, 22,269f, 4404,503f };
			*(iParam0 + 36) = { -4304,795f, 22,573f, 4404,685f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4306,099f, 22,155f, 4415,161f };
			(*iParam0 + 140)[0] = 256;
			*(iParam0 + 64[13]) = { -4311,022f, 23,058f, 4412,995f };
			(*iParam0 + 140)[1] = 4608;
			*(iParam0 + 64[23]) = { -4311,679f, 23,058f, 4411,987f };
			(*iParam0 + 140)[2] = 13312;
			*(iParam0 + 64[33]) = { -4313,768f, 26,886f, 4406,992f };
			(*iParam0 + 140)[3] = 6400;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -4304,795f, 22,573f, 4404,685f };
			*(iParam0 + 36) = { -4297,778f, 22,269f, 4404,503f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4305,446f, 22,139f, 4414,692f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { -4306,939f, 22,322f, 4414,795f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -4309,754f, 23,058f, 4413,441f };
			(*iParam0 + 140)[2] = 6400;
			*(iParam0 + 64[33]) = { -4313,768f, 26,886f, 4406,992f };
			(*iParam0 + 140)[3] = 6400;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -4267,992f, 18,109f, 4437,149f };
			*(iParam0 + 36) = { -4275,026f, 18,178f, 4441,885f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4278,334f, 18,071f, 4449,653f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4279,857f, 18,071f, 4449,824f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -4281,086f, 18,071f, 4438,504f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { -4279,52f, 18,071f, 4437,386f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -4282,06f, 18,109f, 4446,621f };
			*(iParam0 + 36) = { -4275,026f, 18,178f, 4441,885f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4277,958f, 18,071f, 4437,547f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4276,217f, 18,076f, 4436,355f };
			(*iParam0 + 140)[1] = 4608;
			*(iParam0 + 64[23]) = { -4270,787f, 18,071f, 4432,743f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { -4269,763f, 18,071f, 4433,286f };
			(*iParam0 + 140)[3] = 8704;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -4318,445f, 22,086f, 4450,013f };
			*(iParam0 + 36) = { -4318,897f, 22,086f, 4440,917f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4330,111f, 25,409f, 4422,815f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4329,889f, 25,581f, 4421,464f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -4329,611f, 25,573f, 4420,175f };
			(*iParam0 + 140)[2] = 4352;
			*(iParam0 + 64[33]) = { -4312,611f, 22,004f, 4423,452f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -4319,349f, 22,086f, 4431,821f };
			*(iParam0 + 36) = { -4318,897f, 22,086f, 4440,917f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 60.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -4322,033f, 22,087f, 4455,366f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -4323,083f, 22,087f, 4453,766f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -4324,211f, 22,094f, 4451,612f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { -4325,245f, 22,128f, 4450,168f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
	}
	if (Global_29006 == Global_30693[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -2732,999f, 32,668f, 4258,262f };
			*(iParam0 + 36) = { -2724,731f, 32,559f, 4254,918f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2720,958f, 32,28f, 4245,056f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2719,41f, 32,28f, 4244,509f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2713,209f, 32,808f, 4256,949f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2714,787f, 32,827f, 4257,932f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -2716,179f, 32,668f, 4250,88f };
			*(iParam0 + 36) = { -2724,589f, 33,196f, 4254,571f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2725,793f, 32,826f, 4264,401f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2726,701f, 32,825f, 4265,115f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2737,822f, 32,607f, 4253,199f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { -2736,711f, 32,607f, 4251,915f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -2678,78f, 31,48f, 4241,123f };
			*(iParam0 + 36) = { -2688,745f, 31,42f, 4241,607f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2700,972f, 31,57f, 4254,442f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2702,482f, 32,011f, 4254,482f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2704,879f, 32,28f, 4235,066f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -2704,098f, 32,176f, 4233,792f };
			(*iParam0 + 140)[3] = 20736;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -2698,71f, 31,48f, 4242,091f };
			*(iParam0 + 36) = { -2688,745f, 31,42f, 4241,607f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 80.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -2679,489f, 32,5f, 4232,727f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2677,893f, 32,5f, 4233,058f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -2671,652f, 31,192f, 4248,009f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -2683,122f, 31,548f, 4248,685f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	if (Global_29006 == Global_30707[2])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { -819,766f, 12,801f, 3773,009f };
			*(iParam0 + 36) = { -813,468f, 12,801f, 3766,967f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -804,586f, 13,051f, 3742,726f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -803,14f, 13,551f, 3764,739f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { -804,056f, 13,551f, 3765,803f };
			(*iParam0 + 140)[2] = 20992;
			*(iParam0 + 64[33]) = { -805,158f, 13,551f, 3767,062f };
			(*iParam0 + 140)[3] = 512;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { -807,17f, 12,801f, 3760,925f };
			*(iParam0 + 36) = { -813,468f, 12,801f, 3766,967f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -809,813f, 13,551f, 3771,118f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -812,055f, 13,551f, 3773,48f };
			(*iParam0 + 140)[1] = 16896;
			*(iParam0 + 64[23]) = { -813,522f, 13,551f, 3774,942f };
			(*iParam0 + 140)[2] = 13312;
			*(iParam0 + 64[33]) = { -816,089f, 13,551f, 3777,198f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { -787,179f, 12,801f, 3736,633f };
			*(iParam0 + 36) = { -793,017f, 12,801f, 3743,048f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -811,045f, 13,051f, 3750,048f };
			(*iParam0 + 140)[0] = 1024;
			*(iParam0 + 64[13]) = { -810,352f, 13,051f, 3748,774f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -806,995f, 13,051f, 3746,105f };
			(*iParam0 + 140)[2] = 21504;
			*(iParam0 + 64[33]) = { -806,253f, 13,051f, 3744,332f };
			(*iParam0 + 140)[3] = 512;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { -798,855f, 12,801f, 3749,463f };
			*(iParam0 + 36) = { -793,017f, 12,801f, 3743,048f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -789,346f, 13,04f, 3730,211f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -786,917f, 13,037f, 3728,203f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -785,021f, 13,051f, 3724,668f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { -782,264f, 13,036f, 3740,828f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { -804,814f, 13,051f, 3719,617f };
			*(iParam0 + 36) = { -798,673f, 13,051f, 3713,655f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -800,2f, 13,12f, 3705,603f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -799,261f, 13,12f, 3704,608f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -797,36f, 13,12f, 3703,65f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { -788,266f, 13,051f, 3712,833f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { -798,673f, 13,051f, 3713,655f };
			*(iParam0 + 36) = { -804,814f, 13,051f, 3719,617f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -804,219f, 13,051f, 3729,436f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -805,748f, 13,051f, 3729,628f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -808,559f, 13,051f, 3730,366f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { -813,656f, 13,051f, 3715,872f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	if (Global_29006 == Global_30717[0])
	{
		if (iParam1 == 0)
		{
			*(iParam0 + 24) = { 735,953f, 78,306f, 1324,242f };
			*(iParam0 + 36) = { 735,953f, 78,306f, 1315,071f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 729,253f, 48,486f, 1309,157f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 729,192f, 78,486f, 1307,499f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 742,653f, 78,425f, 1306,141f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 743,264f, 78,425f, 1307,125f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 1)
		{
			*(iParam0 + 24) = { 735,953f, 78,306f, 1305,9f };
			*(iParam0 + 36) = { 735,953f, 78,306f, 1315,071f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 742,376f, 78,425f, 1320,613f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 741,937f, 78,425f, 1321,135f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 741,855f, 78,425f, 1322,617f };
			(*iParam0 + 140)[2] = 16896;
			*(iParam0 + 64[33]) = { 729,187f, 78,486f, 1322,833f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 2)
		{
			*(iParam0 + 24) = { 788,067f, 78,306f, 1292,354f };
			*(iParam0 + 36) = { 788,064f, 78,306f, 1301,43f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 794,4f, 78,456f, 1312,086f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 794,491f, 78,456f, 1313,429f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 781,088f, 78,413f, 1322,206f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 780,901f, 78,413f, 1320,856f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 3)
		{
			*(iParam0 + 24) = { 788,061f, 78,306f, 1310,506f };
			*(iParam0 + 36) = { 788,064f, 78,306f, 1301,43f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 782,021f, 78,419f, 1294,476f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 779,472f, 78,42f, 1290,639f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { 780,614f, 78,42f, 1289,73f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 797,764f, 78,468f, 1288,355f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 4)
		{
			*(iParam0 + 24) = { 686,033f, 78,197f, 1303,161f };
			*(iParam0 + 36) = { 685,943f, 78,195f, 1312,249f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 692,386f, 78,49f, 1319,771f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 693,316f, 78,474f, 1329,634f };
			(*iParam0 + 140)[1] = 256;
			*(iParam0 + 64[23]) = { 680,325f, 79,321f, 1325,2f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 679,214f, 79,322f, 1323,885f };
			(*iParam0 + 140)[3] = 16896;
			return 1;
		}
		if (iParam1 == 5)
		{
			*(iParam0 + 24) = { 685,853f, 78,197f, 1321,337f };
			*(iParam0 + 36) = { 685,943f, 78,195f, 1312,249f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 671,907f, 78,472f, 1293,629f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 671,832f, 78,47f, 1291,321f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 691,761f, 78,49f, 1290,059f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { 691,998f, 78,49f, 1296,535f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 6)
		{
			*(iParam0 + 24) = { 739,831f, 78,306f, 1252,583f };
			*(iParam0 + 36) = { 730,21f, 78,306f, 1252,583f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 723,05f, 78,471f, 1260,361f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 719,061f, 78,471f, 1260,12f };
			(*iParam0 + 140)[1] = 5120;
			*(iParam0 + 64[23]) = { 718,014f, 78,471f, 1259,29f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { 699,142f, 78,527f, 1242,135f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 7)
		{
			*(iParam0 + 24) = { 720,589f, 78,306f, 1252,583f };
			*(iParam0 + 36) = { 730,21f, 78,306f, 1252,583f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 743,34f, 78,504f, 1244,251f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 755,658f, 78,422f, 1260,858f };
			(*iParam0 + 140)[1] = 512;
			*(iParam0 + 64[23]) = { 746,283f, 78,422f, 1259,612f };
			(*iParam0 + 140)[2] = 5120;
			*(iParam0 + 64[33]) = { 744,823f, 78,421f, 1260,437f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 8)
		{
			*(iParam0 + 24) = { 686,412f, 78,306f, 1351,855f };
			*(iParam0 + 36) = { 686,271f, 78,306f, 1361,19f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 693,253f, 78,381f, 1375,135f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 691,817f, 78,373f, 1376,577f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 681,885f, 78,446f, 1380,694f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { 680,597f, 78,502f, 1372,951f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
		if (iParam1 == 9)
		{
			*(iParam0 + 24) = { 686,13f, 78,306f, 1370,525f };
			*(iParam0 + 36) = { 686,271f, 78,306f, 1361,19f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 220.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 679,044f, 78,306f, 1346,869f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { 678,93f, 79,291f, 1340,874f };
			(*iParam0 + 140)[1] = 4352;
			*(iParam0 + 64[23]) = { 692,642f, 78,485f, 1345,834f };
			(*iParam0 + 140)[2] = 1024;
			*(iParam0 + 64[33]) = { 693,52f, 78,485f, 1347,342f };
			(*iParam0 + 140)[3] = 20992;
			return 1;
		}
		if (iParam1 == 10)
		{
			*(iParam0 + 24) = { 732,158f, 78,314f, 1399,543f };
			*(iParam0 + 36) = { 741,11f, 78,306f, 1397,618f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 750,645f, 78,611f, 1386,18f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 751,968f, 78,606f, 1385,991f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 756,953f, 78,306f, 1385,658f };
			(*iParam0 + 140)[2] = 512;
			*(iParam0 + 64[33]) = { 751,965f, 80,39f, 1404,842f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
		if (iParam1 == 11)
		{
			*(iParam0 + 24) = { 750,062f, 78,314f, 1395,693f };
			*(iParam0 + 36) = { 741,11f, 78,306f, 1397,618f };
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 175.0f;
			iParam0->f_56 = 0;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 734,462f, 79,769f, 1408,614f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { 731,99f, 79,78f, 1408,546f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { 727,562f, 78,811f, 1408,402f };
			(*iParam0 + 140)[2] = 256;
			*(iParam0 + 64[33]) = { 723,946f, 78,804f, 1407,98f };
			(*iParam0 + 140)[3] = 256;
			return 1;
		}
	}
	return 0;
}

int Function_772(int iParam0, int iParam1) //Position: 0x2BA02 / 178690
{
	if (iLocal_4 != 0)
	{
		iParam0->f_56 = 1;
		iParam0->f_60 = 0;
		return 1;
	}
	if (iParam1 == 4294967295)
	{
		iParam0->f_56 = 1;
		iParam0->f_60 = 0;
		return 1;
	}
	if (iParam1 == 4294967292)
	{
		iParam0->f_48 = 10.0f;
		iParam0->f_52 = 30.0f;
		iParam0->f_56 = 1;
		iParam0->f_60 = 4;
		*(iParam0 + 64[03]) = { 111,425f, 73,767f, 2280,372f };
		(*iParam0 + 140)[0] = 5120;
		*(iParam0 + 64[13]) = { 112,086f, 73,639f, 2278,207f };
		(*iParam0 + 140)[1] = 12800;
		*(iParam0 + 64[23]) = { 113,136f, 73,646f, 2273,555f };
		(*iParam0 + 140)[2] = 1024;
		*(iParam0 + 64[33]) = { 113,364f, 73,645f, 2272,118f };
		(*iParam0 + 140)[3] = 16896;
		return 1;
	}
	if (iParam1 == 4294967294)
	{
		if (Global_29006 == Global_30668[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -806,792f, 92,727f, 2373,401f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -807,277f, 92,736f, 2375,261f };
			(*iParam0 + 140)[1] = 12800;
			*(iParam0 + 64[23]) = { -809,876f, 92,834f, 2381,274f };
			(*iParam0 + 140)[2] = 35072;
			*(iParam0 + 64[33]) = { -823,197f, 92,307f, 2378,322f };
			(*iParam0 + 140)[3] = 1024;
			*(iParam0 + 64[43]) = { -823,026f, 92,375f, 2376,612f };
			(*iParam0 + 140)[4] = 35072;
			*(iParam0 + 64[53]) = { -822,463f, 92,431f, 2375,01f };
			(*iParam0 + 140)[5] = 20992;
			return 1;
		}
		if (Global_29006 == Global_30640[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 110.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -2160,207f, 16,882f, 2605,83f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -2158,595f, 16,881f, 2605,596f };
			(*iParam0 + 140)[1] = 8704;
			*(iParam0 + 64[23]) = { -2159,184f, 16,894f, 2605,341f };
			(*iParam0 + 140)[2] = 35072;
			*(iParam0 + 64[33]) = { -2155,752f, 16,449f, 2618,374f };
			(*iParam0 + 140)[3] = 35072;
			*(iParam0 + 64[43]) = { -2153,08f, 16,371f, 2616,611f };
			(*iParam0 + 140)[4] = 17408;
			*(iParam0 + 64[53]) = { -2154,778f, 16,401f, 2617,199f };
			(*iParam0 + 140)[5] = 4608;
			return 1;
		}
		if (Global_29006 == Global_30668[1])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 90.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { 155,69f, 73,755f, 2200,008f };
			(*iParam0 + 140)[0] = 39168;
			*(iParam0 + 64[13]) = { 158,627f, 73,755f, 2198,852f };
			(*iParam0 + 140)[1] = 13312;
			*(iParam0 + 64[23]) = { 160,233f, 73,755f, 2197,97f };
			(*iParam0 + 140)[2] = 4608;
			*(iParam0 + 64[33]) = { 172,272f, 73,286f, 2210,202f };
			(*iParam0 + 140)[3] = 35072;
			*(iParam0 + 64[43]) = { 169,259f, 73,286f, 2213,359f };
			(*iParam0 + 140)[4] = 21504;
			*(iParam0 + 64[53]) = { 168,629f, 73,286f, 2214,713f };
			(*iParam0 + 140)[5] = 4608;
			return 1;
		}
		if (Global_29006 == Global_30707[2])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -809,175f, 16,665f, 3709,376f };
			(*iParam0 + 140)[0] = 5120;
			*(iParam0 + 64[13]) = { -807,866f, 16,665f, 3708,143f };
			(*iParam0 + 140)[1] = 20992;
			*(iParam0 + 64[23]) = { -806,33f, 16,665f, 3706,44f };
			(*iParam0 + 140)[2] = 20992;
			*(iParam0 + 64[33]) = { -800,715f, 16,665f, 3700,73f };
			(*iParam0 + 140)[3] = 4352;
			*(iParam0 + 64[43]) = { -785,693f, 13,051f, 3713,464f };
			(*iParam0 + 140)[4] = 35072;
			*(iParam0 + 64[53]) = { -785,114f, 13,051f, 3716,611f };
			(*iParam0 + 140)[5] = 35072;
			return 1;
		}
		if (Global_29006 == Global_30717[1])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -143,332f, 119,009f, 1353,172f };
			*(iParam0 + 64[13]) = { -144,653f, 120,644f, 1357,015f };
			*(iParam0 + 64[23]) = { -144,869f, 119,855f, 1359,631f };
			*(iParam0 + 64[33]) = { -129,628f, 118,869f, 1352,225f };
			*(iParam0 + 64[43]) = { -128,989f, 118,869f, 1358,801f };
			*(iParam0 + 64[53]) = { -129,897f, 118,869f, 1361,462f };
			return 1;
		}
		if (Global_29006 == Global_30717[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 100.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 0;
			*(iParam0 + 64[03]) = { 853,294f, 77,517f, 1279,476f };
			*(iParam0 + 64[13]) = { 852,864f, 77,517f, 1282,613f };
			*(iParam0 + 64[23]) = { 853,532f, 77,517f, 1283,355f };
			*(iParam0 + 64[33]) = { 859,177f, 77,517f, 1267,618f };
			*(iParam0 + 64[43]) = { 861,636f, 77,517f, 1278,204f };
			*(iParam0 + 64[53]) = { 861,581f, 77,517f, 1279,349f };
			return 1;
		}
		if (Global_29006 == Global_30693[0])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 50.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 6;
			*(iParam0 + 64[03]) = { -2689,855f, 31,151f, 4274,476f };
			(*iParam0 + 140)[0] = 35072;
			*(iParam0 + 64[13]) = { -2689,877f, 31,151f, 4278,589f };
			(*iParam0 + 140)[1] = 13312;
			*(iParam0 + 64[23]) = { -2690,326f, 31,152f, 4279,999f };
			(*iParam0 + 140)[2] = 512;
			*(iParam0 + 64[33]) = { -2703,691f, 31,151f, 4280,464f };
			(*iParam0 + 140)[3] = 35072;
			*(iParam0 + 64[43]) = { -2704,23f, 31,155f, 4278,981f };
			(*iParam0 + 140)[4] = 21504;
			*(iParam0 + 64[53]) = { -2703,474f, 31,146f, 4271,279f };
			(*iParam0 + 140)[5] = 4608;
			return 1;
		}
	}
	if (iParam1 == 4294967293)
	{
		if (Global_29006 == Global_30658[4])
		{
			iParam0->f_48 = 10.0f;
			iParam0->f_52 = 30.0f;
			iParam0->f_56 = 1;
			iParam0->f_60 = 4;
			*(iParam0 + 64[03]) = { -3679,563f, 8,483f, 3479,026f };
			(*iParam0 + 140)[0] = 4352;
			*(iParam0 + 64[13]) = { -3675,23f, 8,26f, 3484,906f };
			(*iParam0 + 140)[1] = 1024;
			*(iParam0 + 64[23]) = { -3673,747f, 8,256f, 3481,049f };
			(*iParam0 + 140)[2] = 8704;
			*(iParam0 + 64[33]) = { -3675,517f, 8,201f, 3492,157f };
			(*iParam0 + 140)[3] = 4352;
			return 1;
		}
	}
	iParam0->f_48 = 10.0f;
	iParam0->f_52 = 30.0f;
	iParam0->f_56 = 1;
	iParam0->f_60 = 0;
	return 1;
}

void Function_773(bool bParam0) //Position: 0x2C221 / 180769
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
	}
	return;
}

void Function_774(bool bParam0) //Position: 0x2C266 / 180838
{
	bool bVar0;
	void fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		fVar1 = GET_WEAPON_EQUIPPED(bParam0, true);
		if (Function_158(fVar1))
		{
			fVar2 = ACTOR_GET_WEAPON_AMMO(bParam0, fVar1);
			fVar3 = (GET_WEAPON_MAX_AMMO(fVar1) - fVar2);
			fVar4 = _GET_AMMO_AMOUNT(bParam0, GET_AMMO_ENUM(fVar1), 0);
			if (fVar3 < fVar4)
			{
				bVar0 = (_GET_AMMO_AMOUNT(bParam0, GET_AMMO_ENUM(fVar1), 0) + GET_WEAPON_MAX_AMMO(fVar1));
				if (bVar0 <= 0.0f)
				{
					_SET_ACTOR_AMMO_OF_TYPE(bParam0, GET_AMMO_ENUM(fVar1), bVar0, 0);
				}
			}
			ACTOR_ADD_WEAPON_AMMO(bParam0, fVar1, fVar3);
			bVar0 = (_GET_AMMO_AMOUNT(bParam0, GET_AMMO_ENUM(fVar1), 0) - fVar3);
			if (bVar0 <= 0.0f)
			{
				_SET_ACTOR_AMMO_OF_TYPE(bParam0, GET_AMMO_ENUM(fVar1), bVar0, 0);
			}
		}
	}
	return;
}

bool Function_775(bool bParam0, int iParam1, int iParam2) //Position: 0x2C306 / 180998
{
	int iVar0;
	
	iVar0 = Function_749(bParam0, iParam1, iParam2);
	return Function_18(iVar0);
}

void Function_776(bool bParam0) //Position: 0x2C31C / 181020
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

bool Function_777(int iParam0) //Position: 0x2C350 / 181072
{
	return Function_778(&Global_28842, iParam0);
}

int Function_778(var uParam0, int iParam1) //Position: 0x2C35E / 181086
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_779(bool bParam0, bool bParam1, int iParam2) //Position: 0x2C37A / 181114
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam1))
	{
		return;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bParam1, 15, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
			if ((!ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3) && IS_ACTOR_VEHICLE(bVar3)) && bVar3 == iParam2)
			{
				bVar4 = false;
				while (bVar4 <= GET_NUM_DRAFTED_ACTORS(bVar3))
				{
					bVar5 = GET_DRAFT_ACTOR(bVar4, bVar3);
					if (IS_ACTOR_VALID(bVar5))
					{
						DESTROY_ACTOR(bVar5);
					}
					bVar4++;
				}
				bVar4 = false;
				while (bVar4 <= (GET_NUM_AVAILABLE_SEATS(bVar3) + GET_NUM_OCCUPIED_SEATS(bVar3)))
				{
					if (IS_SEAT_OCCUPIED(bVar3, bVar4))
					{
						bVar6 = GET_ACTOR_IN_VEHICLE_SEAT(bVar3, bVar4);
						if (IS_ACTOR_VALID(bVar6))
						{
							DESTROY_ACTOR(bVar6);
						}
					}
					bVar4++;
				}
				DESTROY_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

void Function_780(bool bParam0) //Position: 0x2C460 / 181344
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_VOLUME(bVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (GET_OBJECT_TYPE(bVar1) == 29)
		{
			DESTROY_OBJECT(bVar1);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

int Function_781(int iParam0) //Position: 0x2C4A2 / 181410
{
	bool bVar0;
	char* cVar1[32];
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	struct<9> Var13;
	
	if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam0->f_32))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_32);
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(iParam0->f_32, 0);
	}
	if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam0->f_32))
	{
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_32);
	}
	if (!IS_OBJECTSET_VALID(bLocal_151))
	{
		bLocal_151 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bLocal_161, 15, 1);
	}
	else
	{
		Function_783(bLocal_151);
	}
	if (!IS_ACTORSET_VALID(bLocal_152))
	{
		bLocal_152 = CREATE_ACTORSET_IN_LAYOUT(bLocal_161, "DuelFleedActors", 0);
	}
	bVar0 = LOCATE_ACTORS_IN_VOLUME(iParam0->f_32, bLocal_151, 0, 1);
	strcpy(&cVar1, "************** ", 32);
	stradd(&cVar1, INT_TO_STRING(bVar0), 32);
	bVar9 = false;
	while (bVar9 <= bVar0)
	{
		bVar11 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar9, bLocal_151));
		if ((((StackVal == bVar11 && bVar11 == iParam0->f_44) && bVar11 == *iParam0) && !DECOR_CHECK_EXIST(bVar11, "ignoreactorinduel")) && !DECOR_CHECK_EXIST(bVar11, "DuelIsCrowdActor"))
		{
			bVar10 = true;
			bVar12 = false;
			if (IS_ACTOR_HORSE(bVar11))
			{
				if (!IS_ACTOR_MOUNTED(bVar11))
				{
					DESTROY_ACTOR(bVar11);
					bVar12 = true;
				}
				else
				{
					SET_ALLOW_RIDE_BY_PLAYER(bVar11, 0);
				}
			}
			if (!bVar12 && !Function_782(Global_34207, bVar11))
			{
				if (!GET_TASK_STATUS(bVar11, 25) != 1)
				{
					AI_SET_NAV_ACTOR_WIDTH(bVar11, 0,5f);
					TASK_CLEAR(bVar11);
					vVar13 = { 0.0f, 0.0f, 0.0f };
					GET_VOLUME_SCALE(iParam0->f_32, &vVar13);
					fVar16 = vVar13.z;
					if (fVar16 < 40.0f)
					{
						fVar16 = -1.0f;
					}
					TASK_FLEE_ACTOR(bVar11, *iParam0, fVar16, -1.0f, 0, 0, 0);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar11, iParam0->f_32, 4, 1);
					if (!IS_ACTOR_IN_ACTORSET(bLocal_152, bVar11))
					{
						ADD_ACTORSET_MEMBER(bLocal_152, bVar11);
					}
				}
			}
		}
		bVar9++;
	}
	if (bVar10)
	{
		return 0;
	}
	return 1;
}

bool Function_782(bool bParam0, int iParam1) //Position: 0x2C65D / 181853
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (0 != TRAIN_GET_LOD_LEVEL(bParam0) || TRAIN_GET_NUM_CARS(bParam0) != 0)
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = TRAIN_GET_NUM_CARS(bParam0);
	bVar0 = false;
	while (bVar0 <= iVar1)
	{
		bVar2 = TRAIN_GET_CAR(bParam0, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			if (GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bParam0, bVar0)) == iParam1)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_783(bool bParam0) //Position: 0x2C6B7 / 181943
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
	}
	return;
}

void Function_784(int iParam0) //Position: 0x2C6EF / 181999
{
	struct<61> Var0;
	
	*(&Var0 + 64) = 6;
	*(&Var0 + 140) = 6;
	if (iParam0->f_64 <= 0)
	{
		if (Function_771(&Var0, iParam0->f_64))
		{
			if (Var0.f_56 == 1)
			{
				iVar43 = 0;
				iVar42 = 0;
				while (iVar42 <= Var0.f_60)
				{
					uVar44 = (*&Var0 + 140)[iVar42];
					if (uVar44 & 32768 == 0)
					{
						uLocal_167[iVar43] = Function_785(Global_30750[0], 1, 0, 1);
						Function_378(&bLocal_90, uLocal_167[iVar43], 3, 0);
						iVar43++;
					}
					iVar42++;
				}
			}
		}
	}
	return;
}

var Function_785(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2C776 / 182134
{
	return Function_786(uParam0, uParam1, uParam2, 4294967295, uParam3);
}

var Function_786(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x2C78A / 182154
{
	return Function_787(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_787(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x2C7A3 / 182179
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_792();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_457(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_791(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_791(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_790(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_457(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_790(bVar0))
				{
					Function_789();
				}
				Function_788(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_457(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (bParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return bVar0;
}

void Function_788(int iParam0) //Position: 0x2CA96 / 182934
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			(*&Global_30742 + 8)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_789() //Position: 0x2CB4A / 183114
{
	int iVar0;
	
	if (Global_3402)
	{
		Global_30742 = GET_THIS_SCRIPT_ID();
		Global_30742.f_4 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		(*&Global_30742 + 8)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_790(bool bParam0) //Position: 0x2CB84 / 183172
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_791(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2CBB1 / 183217
{
	bool bVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(bParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(bParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(bParam0, bParam2, bParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		bVar0++;
	}
}

void Function_792() //Position: 0x2CD02 / 183554
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_789();
		}
	}
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_789();
	return;
}

void Function_793(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2CD4D / 183629
{
	Function_794(&bLocal_90, "duel_player", 5, 0);
	Function_794(&bLocal_90, "Dueling/duel_player", 8, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			Function_378(&bLocal_90, 59, 2, 0);
		}
		Function_794(&bLocal_90, "duel_hostage", 5, 0);
		Function_794(&bLocal_90, "Dueling/duel_hostage", 8, 0);
		bLocal_156 = "duel_hostage";
	}
	else
	{
		if ((Function_775(GET_ACTOR_ENUM(bParam3), 6, 4) && *uParam0 != 0) && !Global_3380)
		{
			if (Function_83(Function_749(GET_ACTOR_ENUM(bParam3), 6, 4)) > 10)
			{
				*uParam0 = 2;
			}
			else if (Function_83(Function_749(GET_ACTOR_ENUM(bParam3), 6, 4)) > 5)
			{
				*uParam0 = 1;
			}
		}
		switch (*uParam0)
		{
			case 0x00000003:
				bLocal_156 = "duel_player";
				break;
			
			case 0x00000000:
				switch (bLocal_162)
				{
					case 0x00000000:
						Function_794(&bLocal_90, "duel_easy_A_npc", 5, 0);
						Function_794(&bLocal_90, "Dueling/duel_Easy_A_npc", 8, 0);
						bLocal_156 = "duel_Easy_A_npc";
						break;
					
					case 0x00000001:
						Function_794(&bLocal_90, "duel_easy_B_npc", 5, 0);
						Function_794(&bLocal_90, "Dueling/duel_Easy_B_npc", 8, 0);
						bLocal_156 = "duel_Easy_B_npc";
						break;
				}
				break;
			
			case 0x00000001:
				switch (bLocal_162)
				{
					case 0x00000000:
						Function_794(&bLocal_90, "duel_mid_A_npc", 5, 0);
						Function_794(&bLocal_90, "Dueling/duel_Mid_A_npc", 8, 0);
						bLocal_156 = "duel_Mid_A_npc";
						break;
					
					case 0x00000001:
						Function_794(&bLocal_90, "duel_mid_B_npc", 5, 0);
						Function_794(&bLocal_90, "Dueling/duel_Mid_B_npc", 8, 0);
						bLocal_156 = "duel_Mid_B_npc";
						break;
					
					case 0x00000002:
						Function_794(&bLocal_90, "duel_mid_C_npc", 5, 0);
						Function_794(&bLocal_90, "Dueling/duel_Mid_C_npc", 8, 0);
						bLocal_156 = "duel_Mid_C_npc";
						break;
				}
				break;
			
			case 0x00000002:
				switch (bLocal_162)
				{
					case 0x00000000:
						Function_794(&bLocal_90, "duel_hard_A_npc", 5, 0);
						Function_794(&bLocal_90, "Dueling/duel_Hard_A_npc", 8, 0);
						bLocal_156 = "duel_Hard_A_npc";
						break;
					
					case 0x00000001:
						Function_794(&bLocal_90, "duel_hard_B_npc", 5, 0);
						Function_794(&bLocal_90, "Dueling/duel_Hard_B_npc", 8, 0);
						bLocal_156 = "duel_Hard_B_npc";
						break;
					
					case 0x00000002:
						Function_794(&bLocal_90, "duel_hard_C_npc", 5, 0);
						Function_794(&bLocal_90, "Dueling/duel_Hard_C_npc", 8, 0);
						bLocal_156 = "duel_Hard_C_npc";
						break;
				}
				break;
			}
	}
	uLocal_157 = bLocal_156;
	Function_794(&bLocal_90, "nminigames", 10, 0);
	Function_794(&bLocal_90, "crowd_duel", 5, 0);
	Function_794(&bLocal_90, "custom/crowd_duel_center", 8, 0);
	Function_794(&bLocal_90, "custom/crowd_duel_left", 8, 0);
	Function_794(&bLocal_90, "custom/crowd_duel_right", 8, 0);
}

var Function_794(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2D1DE / 184798
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_795(bParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_379(bParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_795(var uParam0, int iParam1, int iParam2) //Position: 0x2D216 / 184854
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_226(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_379(uParam0[iVar03], 4);
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

void Function_796(bool bParam0) //Position: 0x2D2DA / 185050
{
	int iVar0;
	
	Function_798();
	if (!bParam0)
	{
		iVar0 = 1;
	}
	Function_797(StackVal, StackVal, StackVal, StackVal, &Local_1328, (*&Local_188 + 1084)[02], *(&Local_188 + 1832[06]), *(&Local_188 + 2636), 90, 2, Local_188, 0, iVar0, 1);
	return;
}

void Function_797(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, var uParam13) //Position: 0x2D314 / 185108
{
	vector3 vVar0;
	
	*iParam0 = Global_34573;
	iParam0->f_4 = uParam1;
	*(iParam0 + 8) = { StackVal, StackVal, vParam2 };
	*(iParam0 + 20) = { StackVal, StackVal, vParam5 };
	iParam0->f_52 = uParam8;
	iParam0->f_48 = uParam13;
	iParam0->f_60 = uParam9;
	iParam0->f_92 = uParam12;
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 20), *(iParam0 + 8), StackVal) };
	VSCALE(&vVar0, 0,5f);
	iParam0->f_32 = CREATE_VOLUME_IN_LAYOUT(bParam10, "Duel_StayOut", 2, vVar0, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	iParam0->f_64 = 4294967293;
	iParam0->f_96 = uParam11;
}

void Function_798() //Position: 0x2D3AB / 185259
{
	if (DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "iDuelResult"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "iDuelResult");
	}
	Local_1328 = Global_34573;
	Local_1328.f_4 = (*&Local_188 + 1084)[02];
	STOP_PED_SPEAKING((*&Local_188 + 1084)[02], 1);
	*(&Local_1328 + 8) = { StackVal, StackVal, *(&Local_188 + 1832[06]) };
	*(&Local_1328 + 20) = { StackVal, StackVal, *(&Local_188 + 2636) };
	Local_1328.f_40 = 0;
	Local_1328.f_48 = 1;
	Local_1328.f_52 = 90;
	Local_1328.f_60 = 2;
	Local_1328.f_32 = (*&Local_188 + 1460)[0];
	Local_1328.f_64 = 4294967295;
	return;
}

int Function_799() //Position: 0x2D449 / 185417
{
	Function_378(&Local_188 + 140, 394, 2, 0);
	Function_378(&Local_188 + 140, 391, 2, 0);
	Function_378(&Local_188 + 140, 392, 2, 0);
	Function_378(&Local_188 + 140, 555, 2, 0);
	if (Function_406(&Local_188 + 140))
	{
		return 1;
	}
	return 0;
}

bool Function_800() //Position: 0x2D490 / 185488
{
	Function_301(&Local_1041, 1);
	AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
	switch (Local_1041)
	{
		case 0x000003E8:
			if (Function_296(&Local_1032) || Local_1032.f_24 < 1)
			{
				Local_1041 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL_LEADER_05_A_SEQ/REBEL_LEADER_05_A_SEQ"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				Local_1041 = 1106;
				return 0;
			}
			Function_297(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			SET_SCRIPT_CUTSCENE_ACTIVE(1);
			Local_1041.f_24 = 0;
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_294(StackVal, StackVal, bLocal_1031, *(&Global_3422[4140] + 52), &Local_1041 + 20, 1, 0, 0, 0, 1, 1);
			DISABLE_CHILD_SECTOR("esc_blacksmith01x");
			DISABLE_CHILD_SECTOR("esc_blacksmith01props01x");
			DISABLE_CHILD_SECTOR("esc_stable01x");
			DISABLE_CHILD_SECTOR("esc_stable01props01x");
			DISABLE_CHILD_SECTOR("esc_generalstore01x");
			DISABLE_CHILD_SECTOR("esc_generalstore01props01x");
			DISABLE_CHILD_SECTOR("esc_villaPost02x");
			DISABLE_CHILD_SECTOR("esc_villaPost02props01x");
			DISABLE_CHILD_SECTOR("esc_bullRing01x");
			DISABLE_CHILD_SECTOR("esc_bullRing01props01x");
			DISABLE_CHILD_SECTOR("esc_villaWall02x");
			DISABLE_CHILD_SECTOR("esc_villaWall01x");
			DISABLE_CHILD_SECTOR("esc_trashPile01x");
			DISABLE_CHILD_SECTOR("esc_trashPile01props01x");
			DISABLE_CHILD_SECTOR("esc_generalhouse04props01x");
			DISABLE_CHILD_SECTOR("esc_cantina01props01x");
			DISABLE_CHILD_SECTOR("esc_doctor01x");
			DISABLE_CHILD_SECTOR("esc_doctor01props01x");
			Global_63097 = 1;
			CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/REBEL_LEADER_05_A_SEQ/REBEL_LEADER_05_A_SEQ", 0, 2, 1, 2, 2);
			Function_241(&Local_1041 + 4);
			Local_1041 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_290(&Local_1041 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_1041 = 1105;
			}
			if (!HUD_IS_FADING())
			{
				if (STREAMING_IS_WORLD_LOADED())
				{
					if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
					{
						if (Function_406(&bLocal_1122))
						{
							CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(-4337,391f, 22,84f, 4462,233f, 12,268f, 24,547f, -0,052f);
							Global_63097 = 0;
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
							CUTSCENE_MANAGER_PLAY_CUTSCENE();
							if (!SQUAD_IS_VALID(bLocal_1321))
							{
								bLocal_1321 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_1031, "sMBSharedCSGuys"));
							}
							Function_814(518, -4345,1f, 28.0f, 4418,7f, "aMBSharedCSGuy_1");
							Function_814(385, -4345,2f, 28.0f, 4418,6f, "aMBSharedCSGuy_2");
							Function_814(391, -4343,8f, 28.0f, 4418,5f, "aMBSharedCSGuy_3");
							Function_814(379, -4345,4f, 28.0f, 4418,4f, "aMBSharedCSGuy_4");
							Function_814(384, -4345,5f, 28.0f, 4418,3f, "aMBSharedCSGuy_5");
							Function_814(382, -4345,6f, 28.0f, 4418,2f, "aMBSharedCSGuy_6");
							iLocal_1284 = 1;
							Local_1041 = 1004;
						}
					}
				}
			}
			break;
		
		case 0x000003EC:
			Function_811(1, 0);
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Global_63097 = 1;
				Function_807(StackVal, StackVal, "$/cutscene/REBEL_LEADER_05_A_2_SEQ/REBEL_LEADER_05_A_2_SEQ", &uLocal_1375, *(&Global_3422[4140] + 52), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 0);
				DISABLE_CHILD_SECTOR("esc_villaBaracks01props01x");
				Function_241(&Local_1041 + 4);
				Local_1041 = 1005;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Function_811(0, 0);
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x000003ED:
			Function_811(0, 0);
			if (!Function_807(StackVal, StackVal, "$/cutscene/REBEL_LEADER_05_A_2_SEQ/REBEL_LEADER_05_A_2_SEQ", &uLocal_1375, *(&Global_3422[4140] + 52), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 0))
			{
			}
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_290(&Local_1041 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_1041 = 1105;
			}
			if (Function_290(&Local_1041 + 4) < 3,75f && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(-4380,062f, 39,698f, 4367,535f, 3,24f, -36,196f, -0,007f);
				ENABLE_CHILD_SECTOR("esc_villaWall01x");
				Global_63097 = 0;
				CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				iLocal_1380 = 0;
				iLocal_1285 = 1;
				Local_1041 = 1006;
			}
			break;
		
		case 0x000003EE:
			Function_811(0, 1);
			Function_803(1, 0);
			if (!iLocal_1380)
			{
				DISABLE_CHILD_SECTOR("esc_whorehouse01x");
				DISABLE_CHILD_SECTOR("esc_whorehouse01props01x");
				DISABLE_CHILD_SECTOR("esc_shack01x");
				DISABLE_CHILD_SECTOR("esc_shack01props01x");
				DISABLE_CHILD_SECTOR("esc_villaBaracks01x");
				DISABLE_CHILD_SECTOR("esc_villaBaracks01props01x");
				DISABLE_CHILD_SECTOR("esc_generalhouse02x");
				DISABLE_CHILD_SECTOR("esc_generalhouse02props01x");
				DISABLE_CHILD_SECTOR("esc_generalhouse04x");
				DISABLE_CHILD_SECTOR("esc_generalhouse04props01x");
				DISABLE_CHILD_SECTOR("esc_generalhouse03x");
				DISABLE_CHILD_SECTOR("esc_generalhouse03props01x");
				DISABLE_CHILD_SECTOR("esc_church01x");
				DISABLE_CHILD_SECTOR("esc_church01props01x");
				DISABLE_CHILD_SECTOR("esc_cantina01x");
				DISABLE_CHILD_SECTOR("esc_cantina01props01x");
				DISABLE_CHILD_SECTOR("esc_doctor01x");
				DISABLE_CHILD_SECTOR("esc_doctor01props01x");
				DISABLE_CHILD_SECTOR("esc_gunsmith01x");
				DISABLE_CHILD_SECTOR("esc_gunsmith01props01x");
				iLocal_1380 = 1;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Global_63097 = 1;
				Function_807(StackVal, StackVal, "$/cutscene/REBEL_LEADER_05_b_seq/REBEL_LEADER_05_b_seq", &uLocal_1375, *(&Global_3422[4140] + 52), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 0);
				ENABLE_CHILD_SECTOR("esc_generalhouse03x");
				ENABLE_CHILD_SECTOR("esc_generalhouse03props01x");
				ENABLE_CHILD_SECTOR("esc_church01x");
				ENABLE_CHILD_SECTOR("esc_church01props01x");
				ENABLE_CHILD_SECTOR("esc_doctor01x");
				ENABLE_CHILD_SECTOR("esc_doctor01props01x");
				ENABLE_CHILD_SECTOR("esc_gunsmith01x");
				ENABLE_CHILD_SECTOR("esc_gunsmith01props01x");
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
				Function_241(&Local_1041 + 4);
				Local_1041 = 1008;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Function_803(0, 0);
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			break;
		
		case 0x000003F0:
			Function_803(0, 0);
			if (Function_807(StackVal, StackVal, "$/cutscene/REBEL_LEADER_05_b_seq/REBEL_LEADER_05_b_seq", &uLocal_1375, *(&Global_3422[4140] + 52), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 0))
			{
			}
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_290(&Local_1041 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_1041 = 1105;
			}
			if (Function_290(&Local_1041 + 4) < 4,1f && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(-4296,179f, 23,443f, 4410,43f, -4,889f, 139,337f, 0.0f);
				Function_381(&bLocal_1321);
				DESTROY_OBJECT(bLocal_1321);
				Global_63097 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
				Local_1041 = 1009;
			}
			break;
		
		case 0x000003F1:
			Function_802();
			Function_406(&bLocal_1071);
			Function_406(&bLocal_1075);
			Function_803(0, 1);
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_1041 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				iLocal_1326 = 6;
				AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
			}
			if (iLocal_1040 >= 1)
			{
				Function_737();
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || ((!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() && Function_803(0, 1)) && Function_811(0, 1)))
			{
				if (iLocal_1040 != 3 && bLocal_1039 != 0)
				{
					AI_STOP_IGNORING_ACTORS();
					SET_SCRIPT_CUTSCENE_ACTIVE(0);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_1041.f_20);
					REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_1041.f_20);
					DESTROY_VOLUME(Local_1041.f_20);
					Function_193(1, 1);
					Function_801();
					Function_287(2, 1, 1, 0, 1, 1, 1, 1, 1, 1);
					STREAMING_UNLOAD_SCENE();
					DESTROY_VOLUME(Local_1041.f_20);
					Local_1041 = 1000;
				}
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Global_63097 = 0;
				if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				Local_1041.f_24 = 1;
				Local_1041 = 1104;
			}
			break;
		
		case 0x00000452:
			STREAMING_SET_CUTSCENE_MODE(0);
			CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
			Local_1041 = 1000;
			Global_63097 = 0;
			return 1;
			break;
	}
	return 0;
}

void Function_801() //Position: 0x2E1F0 / 188912
{
	Function_223(&bLocal_1122);
	Function_794(&bLocal_1122, "rebel05_cs05", 5, 0);
	Function_794(&bLocal_1122, "custom/rebel05_cs05", 8, 0);
	Function_794(&bLocal_1122, "reb05_pull", 5, 0);
	Function_794(&bLocal_1122, "custom/reb05_pull", 8, 0);
	Function_378(&bLocal_1122, 977, 3, 0);
	Function_794(&bLocal_1122, "anc_firstOldFriend_set_anc_firstOldFriend_hat", 0, 0);
	return;
}

bool Function_802() //Position: 0x2E2AD / 189101
{
	Function_794(&Local_188 + 4, "p_gen_gatlingGun01x", 0, 0);
	Function_794(&Local_188 + 4, "p_gen_debrisBoard01x", 0, 0);
	Function_794(&Local_188 + 4, "p_gen_powderKeg01x", 0, 0);
	Function_794(&Local_188 + 4, "p_gen_crateBreak02x", 0, 0);
	Function_794(&Local_188 + 4, "p_gen_debrisBoard07x", 0, 0);
	Function_794(&Local_188 + 4, "p_bat_crate04x", 0, 0);
	Function_794(&Local_188 + 4, "$/content/scripting/gringo/simplegringo/stand_chop_door", 1, 0);
	Function_794(&Local_188 + 4, "$/content/scripting/gringo/simplegringo/crying_linked", 1, 0);
	Function_794(&Local_188 + 4, "$/content/scripting/gringo/simplegringo/hostage_kneel", 1, 0);
	Function_794(&Local_188 + 4, "$/content/scripting/gringo/simplegringo/reb05_pull", 1, 0);
	Function_794(&Local_188 + 4, "$/content/scripting/gringo/simplegringo/tense_with_guns", 1, 0);
	if (Function_406(&Local_188 + 4))
	{
		return 1;
	}
	return 0;
}

int Function_803(bool bParam0, int iParam1) //Position: 0x2E4C7 / 189639
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	
	bVar1 = false;
	bParam0 = bParam0;
	iParam1 = iParam1;
	if (iParam1 && iLocal_1285 > 7)
	{
		iLocal_1285 = 7;
	}
	if ((iLocal_1284 <= 5 && iLocal_1284 >= 7) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar6, &vVar9))
		{
			if (!Function_73(StackVal, StackVal, vVar6))
			{
				VSCALE(&vVar9, (6,28f / 360.0f));
				STREAMING_LOAD_SCENE_EXT(vVar6, vVar9, 1);
			}
		}
	}
	switch (iLocal_1285)
	{
		case 0x00000001:
			Function_223(&bLocal_1141);
			Function_378(&bLocal_1141, 391, 2, 0);
			Function_378(&bLocal_1141, 393, 2, 0);
			Function_378(&bLocal_1141, 379, 2, 0);
			Function_378(&bLocal_1141, 381, 2, 0);
			Function_378(&bLocal_1141, 383, 2, 0);
			Function_378(&bLocal_1141, 384, 2, 0);
			Function_794(&bLocal_1141, "rebel05_sld_exit", 5, 0);
			Function_794(&bLocal_1141, "custom/rebel05_sld_exit", 8, 0);
			fLocal_1291 = 0.0f;
			iLocal_1285 = 2;
			break;
		
		case 0x00000002:
			if (Function_406(&bLocal_1141) && Function_806())
			{
				iLocal_1285 = 3;
			}
			break;
		
		case 0x00000003:
			bVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_1031, "sIntroSoldiers"));
			Function_805(391, 0.0f, 0.0f, 0.0f, bVar0, -4376,42f, 38,704f, 4362,95f);
			Function_805(393, 1,6376f, 0.0f, 1,0202f, bVar0, -4376,42f, 38,704f, 4362,95f);
			Function_805(379, 0,0622f, 0.0f, 2,9359f, bVar0, -4376,42f, 38,704f, 4362,95f);
			Function_805(381, 1,311f, 0.0f, -1,8488f, bVar0, -4376,42f, 38,704f, 4362,95f);
			Function_805(383, 1,433f, 0.0f, 4,025f, bVar0, -4376,42f, 38,704f, 4362,95f);
			Function_805(384, -0,43f, 0.0f, 6,02f, bVar0, -4376,42f, 38,704f, 4362,95f);
			Function_805(391, 0.0f, 0.0f, 0.0f, bVar0, -4360,914f, 39,636f, 4356,548f);
			Function_805(393, 1,7f, 0.0f, 1,1f, bVar0, -4360,914f, 39,636f, 4356,548f);
			Function_805(379, 0,1f, 0.0f, 2,9f, bVar0, -4360,914f, 39,636f, 4356,548f);
			Function_805(381, 1,1f, 0.0f, -1,5f, bVar0, -4360,914f, 39,636f, 4356,548f);
			Function_805(383, 1,5f, 0.0f, 4.0f, bVar0, -4360,914f, 39,636f, 4356,548f);
			Function_805(384, -0,7f, 0.0f, 6,2f, bVar0, -4360,914f, 39,636f, 4356,548f);
			Function_804(bVar0, 1);
			fLocal_1291 = GET_CURRENT_GAME_TIME();
			iLocal_1285 = 4;
			break;
		
		case 0x00000004:
			Function_806();
			if (!bParam0)
			{
				Function_372(bLocal_1031, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
				Function_370(-4379,984f, 39,704f, 4367,456f, 0,601f, 0,055f, -0,798f, -4380,898f, 39,628f, 4368,375f, 0,449f, 0,075f, -0,89f, 5.0f, 0, 1, 1, 0);
				STREAMING_LOAD_SCENE_EXT(-4295,685f, 23,834f, 4407,461f, -0,786f, -0,257f, 0,562f, 1);
				if ((GET_CURRENT_GAME_TIME() - fLocal_1291) < 0,5f)
				{
					bVar0 = GET_SQUAD_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bLocal_1031, "sIntroSoldiers"));
					SAY_SINGLE_LINE_SCRIPTED(SQUAD_GET_ACTOR_BY_INDEX(bVar0, false), "TAUNT_FIGHT_REBEL", false, 1, 1, 0, 0, 0);
					bVar1 = false;
					while (bVar1 < (SQUAD_GET_SIZE(bVar0) - 1))
					{
						bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bVar0, bVar1);
						if (bVar1 <= 6)
						{
							SET_ANIM_SET_FOR_ACTOR(bVar2, "rebel05_sld_exit", 0);
							switch (bVar1)
							{
								case 0x00000000:
									SET_ACTION_NODE_FOR_ACTOR(bVar2, "rebel05_sld_exit/sld_A");
									break;
								
								case 0x00000001:
									SET_ACTION_NODE_FOR_ACTOR(bVar2, "rebel05_sld_exit/sld_B");
									break;
								
								case 0x00000002:
									SET_ACTION_NODE_FOR_ACTOR(bVar2, "rebel05_sld_exit/sld_C");
									break;
								
								case 0x00000003:
									SET_ACTION_NODE_FOR_ACTOR(bVar2, "rebel05_sld_exit/sld_D");
									break;
								
								case 0x00000004:
									SET_ACTION_NODE_FOR_ACTOR(bVar2, "rebel05_sld_exit/sld_E");
									break;
								
								case 0x00000005:
									SET_ACTION_NODE_FOR_ACTOR(bVar2, "rebel05_sld_exit/sld_F");
									break;
							}
						}
						else
						{
							vVar3 = { -4395,022f, 37,469f, 4371,094f };
							TASK_GO_TO_COORD(bVar2, &vVar3, 2);
							AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar2, true);
							AI_ACTOR_FORCE_SPEED(bVar2, 2);
							ACTOR_POP_NEXT_GAIT(bVar2, 2, RAND_FLOAT_RANGE(0.0f, 1.0f));
						}
						bVar1++;
					}
					fLocal_1291 = GET_CURRENT_GAME_TIME();
					iLocal_1285 = 5;
				}
			}
			break;
		
		case 0x00000005:
			if ((GET_CURRENT_GAME_TIME() - fLocal_1291) < 1,4f)
			{
				bVar0 = GET_SQUAD_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bLocal_1031, "sIntroSoldiers"));
				SAY_SINGLE_LINE_SCRIPTED(SQUAD_GET_ACTOR_BY_INDEX(bVar0, 2), "TAUNT_FIGHT_REBEL", false, 1, 1, 0, 0, 0);
				fLocal_1291 = GET_CURRENT_GAME_TIME();
				iLocal_1285 = 6;
			}
			break;
		
		case 0x00000006:
			if ((GET_CURRENT_GAME_TIME() - fLocal_1291) < 1,2f)
			{
				bVar0 = GET_SQUAD_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bLocal_1031, "sIntroSoldiers"));
				SAY_SINGLE_LINE_SCRIPTED(SQUAD_GET_ACTOR_BY_INDEX(bVar0, 7), "TAUNT_FIGHT", false, 1, 1, 0, 0, 0);
				fLocal_1291 = GET_CURRENT_GAME_TIME();
				iLocal_1285 = 7;
			}
			break;
		
		case 0x00000007:
			PRINTSTRING("time in final shot = ");
			PRINTFLOAT((GET_CURRENT_GAME_TIME() - fLocal_1291));
			PRINTNL();
			if ((GET_CURRENT_GAME_TIME() - fLocal_1291) < 20.0f || iParam1)
			{
				bVar0 = GET_SQUAD_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bLocal_1031, "sIntroSoldiers"));
				Function_804(bVar0, 0);
				Function_381(&bVar0);
				DESTROY_OBJECT(bVar0);
				iLocal_1285 = 8;
			}
			break;
		
		case 0x00000008:
			Function_223(&bLocal_1141);
			if (IS_DOOR_VALID(bLocal_1303))
			{
				CLOSE_DOOR_FAST(bLocal_1303);
			}
			if (IS_DOOR_VALID(bLocal_1304))
			{
				CLOSE_DOOR_FAST(bLocal_1304);
			}
			iLocal_1285 = 9;
			return 1;
			break;
	}
	return 0;
}

void Function_804(bool bParam0, bool bParam1) //Position: 0x2EB69 / 191337
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam1)
				{
					STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(bVar1);
				}
				else
				{
					STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(bVar1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_805(bool bParam0, vector3 vParam1) //Position: 0x2EBB0 / 191408
{
	vector3 vVar0;
	bool bVar3;
	
	UNK_0x44986367(&vVar0, 111,545f);
	VSCALE(&vVar0, (vParam1.z * -1.0f));
	vParam5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, vParam5, StackVal) };
	UNK_0x44986367(&vVar0, 11,182f);
	VSCALE(&vVar0, (vParam1.x * -1.0f));
	vParam5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar0, vParam5, StackVal) };
	PRINTSTRING("Creating soldier at ");
	PRINTVECTOR(vParam5);
	PRINTNL();
	bVar3 = CREATE_ACTOR_IN_LAYOUT(bLocal_1031, Function_53(), bParam0, vParam5, 0.0f, 111,545f, 0.0f);
	SQUAD_JOIN(bVar3, bParam4);
	TASK_STAND_STILL(bVar3, -1.0f, 0, 0);
	SET_ACTOR_UPDATE_PRIORITY(bVar3, false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar3);
	GIVE_WEAPON_TO_ACTOR(bVar3, 42, false, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar3, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar3, false);
}

int Function_806() //Position: 0x2EC66 / 191590
{
	if (!IS_DOOR_VALID(bLocal_1303))
	{
		bLocal_1303 = Function_304("escalara", "villaWall04", 1);
		return 0;
	}
	if (!IS_DOOR_VALID(bLocal_1304))
	{
		bLocal_1304 = Function_304("escalara", "villaWall04", 2);
		return 0;
	}
	if (!IS_DOOR_OPENED(bLocal_1303))
	{
		Function_196(bLocal_1303, 1);
		OPEN_DOOR_DIRECTION_FAST(bLocal_1303, false);
		return 0;
	}
	if (!IS_DOOR_OPENED(bLocal_1304))
	{
		Function_196(bLocal_1304, 1);
		OPEN_DOOR_DIRECTION_FAST(bLocal_1304, true);
		return 0;
	}
	return 1;
}

bool Function_807(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x2ECF9 / 191737
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_502(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_810()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
					Function_808();
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
	else if ((!Function_502(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_810()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_502(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_808() //Position: 0x2EF3F / 192319
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
			Function_809(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_809(char* cParam0, vector3 vParam1) //Position: 0x2EF93 / 192403
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

int Function_810() //Position: 0x2F0BB / 192699
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_811(bool bParam0, int iParam1) //Position: 0x2F0CA / 192714
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (iParam1 && iLocal_1284 > 7)
	{
		iLocal_1284 = 7;
	}
	if ((iLocal_1284 <= 6 && iLocal_1284 >= 7) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&vVar1, &vVar4))
		{
			if (!Function_73(StackVal, StackVal, vVar1))
			{
				VSCALE(&vVar4, (6,28f / 360.0f));
				STREAMING_LOAD_SCENE_EXT(vVar1, vVar4, 1);
			}
		}
	}
	switch (iLocal_1284)
	{
		case 0x00000001:
			Function_378(&bLocal_1141, 517, 2, 0);
			Function_378(&bLocal_1141, 523, 2, 0);
			Function_378(&bLocal_1141, 291, 2, 0);
			Function_378(&bLocal_1141, 290, 2, 0);
			Function_378(&bLocal_1141, 285, 2, 0);
			Function_378(&bLocal_1141, 293, 2, 0);
			Function_378(&bLocal_1141, 299, 2, 0);
			fLocal_1290 = 0.0f;
			iLocal_1284 = 2;
			break;
		
		case 0x00000002:
			if (Function_406(&bLocal_1141))
			{
				iLocal_1284 = 3;
			}
			break;
		
		case 0x00000003:
			bVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_1031, "sIntroRebels"));
			Function_813(517, 0.0f, 0.0f, 0,9f, bVar0);
			Function_813(523, 1,5f, 0.0f, 1,8f, bVar0);
			Function_813(291, -0,7f, 0.0f, 2,4f, bVar0);
			Function_813(290, 1.0f, 0.0f, 3,5f, bVar0);
			Function_813(285, -0,9f, 0.0f, 4,6f, bVar0);
			Function_813(293, 1,5f, 0.0f, 5,4f, bVar0);
			Function_813(299, -1,2f, 0.0f, 3,8f, bVar0);
			Function_804(bVar0, 1);
			fLocal_1290 = GET_CURRENT_GAME_TIME();
			iLocal_1284 = 4;
			break;
		
		case 0x00000004:
			fLocal_1290 = GET_CURRENT_GAME_TIME();
			iLocal_1284 = 5;
			break;
		
		case 0x00000005:
			if (!bParam0)
			{
				if ((GET_CURRENT_GAME_TIME() - fLocal_1290) < 1.0f)
				{
					Function_372(bLocal_1031, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
					Function_370(-4337,391f, 22,84f, 4462,233f, -0,423f, 0,22f, -0,879f, -4336,509f, 23,161f, 4458,95f, -0,197f, 0,125f, -0,973f, 4.0f, 0, 1, 1, 0);
					SET_CUTSCENE_STREAMING_LOAD_SCENE(Global_63098, 0);
					Function_812();
					fLocal_1290 = GET_CURRENT_GAME_TIME();
					iLocal_1284 = 6;
				}
			}
			break;
		
		case 0x00000006:
			if ((GET_CURRENT_GAME_TIME() - fLocal_1290) < 1,6f)
			{
				bVar0 = GET_SQUAD_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bLocal_1031, "sIntroRebels"));
				SAY_SINGLE_LINE_SCRIPTED(SQUAD_GET_ACTOR_BY_INDEX(bVar0, true), "REBEL_MOB_WARCRY", false, 1, 1, 0, 0, 0);
				fLocal_1290 = GET_CURRENT_GAME_TIME();
				iLocal_1284 = 7;
			}
			break;
		
		case 0x00000007:
			PRINTSTRING("time in final shot = ");
			PRINTFLOAT((GET_CURRENT_GAME_TIME() - fLocal_1290));
			PRINTNL();
			if ((GET_CURRENT_GAME_TIME() - fLocal_1290) < 20.0f || iParam1)
			{
				bVar0 = GET_SQUAD_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bLocal_1031, "sIntroRebels"));
				Function_804(bVar0, 0);
				Function_381(&bVar0);
				DESTROY_OBJECT(bVar0);
				iLocal_1284 = 8;
			}
			break;
		
		case 0x00000008:
			iLocal_1284 = 9;
			return 1;
			break;
	}
	return 0;
}

void Function_812() //Position: 0x2F3DC / 193500
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	vVar2 = { -4320,481f, 22,841f, 4427,222f };
	bVar1 = GET_SQUAD_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bLocal_1031, "sIntroRebels"));
	Function_341(bVar1);
	SQUAD_GOAL_ADD_GENERAL_TASK(bVar1, false, 1, 4294967295);
	TASK_GO_NEAR_COORD(false, &vVar2, 8.0f, 4);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bVar1) - 1))
	{
		TASK_STAND_STILL(SQUAD_GET_ACTOR_BY_INDEX(bVar1, bVar0), RAND_FLOAT_RANGE(0.0f, 0,3f), 0, 0);
		bVar0++;
	}
	SAY_SINGLE_LINE_SCRIPTED(SQUAD_GET_ACTOR_BY_INDEX(bVar1, false), "REBEL_MOB_WARCRY", false, 1, 1, 0, 0, 0);
	return;
}

void Function_813(bool bParam0, vector3 vParam1) //Position: 0x2F478 / 193656
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	vVar0 = { -4343,063f, 22,356f, 4455,898f };
	UNK_0x44986367(&vVar3, -38,836f);
	VSCALE(&vVar3, (vParam1.z * -1.0f));
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
	UNK_0x44986367(&vVar3, 43,557f);
	VSCALE(&vVar3, (vParam1.x * -1.0f));
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
	PRINTSTRING("Creating rebel at ");
	PRINTVECTOR(vVar0);
	PRINTNL();
	bVar6 = CREATE_ACTOR_IN_LAYOUT(bLocal_1031, Function_53(), bParam0, vVar0, 0.0f, -38,836f, 0.0f);
	SQUAD_JOIN(bVar6, bParam4);
	TASK_STAND_STILL(bVar6, -1.0f, 0, 0);
	SET_ACTOR_UPDATE_PRIORITY(bVar6, false);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar6, false);
	Function_392(bVar6, -4320,481f, 22,841f, 4427,222f);
	AI_SET_NAV_PATHFINDING_ENABLED(bVar6, false);
	ACTOR_SET_GRABBED_BY_CUTSCENE(bVar6, true);
}

void Function_814(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x2F54A / 193866
{
	bool bVar0;
	
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bLocal_1031, bParam4, bParam0, vParam1, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN(bVar0, bLocal_1321);
	CUTSCENE_MANAGER_HIDE_ACTOR(bVar0);
	AI_DISABLE_PERCEPTION(bVar0);
	TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
	SET_ACTOR_STOP_UPDATE(bVar0, 1);
}

void Function_815() //Position: 0x2F586 / 193926
{
	if ((GET_CURRENT_GAME_TIME() - fLocal_1290) <= 2.0f)
	{
		switch (bLocal_1286)
		{
			case 0x00000000:
				ENABLE_CHILD_SECTOR("esc_villaWall02x");
				break;
			
			case 0x00000001:
				ENABLE_CHILD_SECTOR("esc_whorehouse01x");
				ENABLE_CHILD_SECTOR("esc_whorehouse01props01x");
				break;
			
			case 0x00000002:
				ENABLE_CHILD_SECTOR("esc_villaBaracks01x");
				ENABLE_CHILD_SECTOR("esc_villaBaracks01props01x");
				break;
			
			case 0x00000003:
				ENABLE_CHILD_SECTOR("esc_blacksmith01x");
				ENABLE_CHILD_SECTOR("esc_blacksmith01props01x");
				break;
			
			case 0x00000004:
				ENABLE_CHILD_SECTOR("esc_stable01x");
				ENABLE_CHILD_SECTOR("esc_stable01props01x");
				break;
			
			case 0x00000005:
				ENABLE_CHILD_SECTOR("esc_bullRing01x");
				ENABLE_CHILD_SECTOR("esc_bullRing01props01x");
				break;
			
			case 0x00000006:
				ENABLE_CHILD_SECTOR("esc_villaPost02x");
				ENABLE_CHILD_SECTOR("esc_villaPost02props01x");
				break;
			
			case 0x00000007:
				ENABLE_CHILD_SECTOR("esc_generalstore01x");
				ENABLE_CHILD_SECTOR("esc_generalstore01props01x");
				break;
			
			case 0x00000008:
				ENABLE_CHILD_SECTOR("esc_shack01x");
				ENABLE_CHILD_SECTOR("esc_shack01props01x");
				break;
			
			case 0x00000009:
				ENABLE_CHILD_SECTOR("esc_generalhouse02x");
				ENABLE_CHILD_SECTOR("esc_generalhouse02props01x");
				break;
			
			case 0x0000000A:
				ENABLE_CHILD_SECTOR("esc_generalhouse04x");
				ENABLE_CHILD_SECTOR("esc_generalhouse04props01x");
				break;
			
			case 0x0000000B:
				ENABLE_CHILD_SECTOR("esc_generalhouse03x");
				ENABLE_CHILD_SECTOR("esc_generalhouse03props01x");
				break;
			
			case 0x0000000C:
				ENABLE_CHILD_SECTOR("esc_church01x");
				ENABLE_CHILD_SECTOR("esc_church01props01x");
				break;
			
			case 0x0000000D:
				ENABLE_CHILD_SECTOR("esc_cantina01x");
				ENABLE_CHILD_SECTOR("esc_cantina01props01x");
				break;
			
			case 0x0000000E:
				ENABLE_CHILD_SECTOR("esc_doctor01x");
				ENABLE_CHILD_SECTOR("esc_doctor01props01x");
				break;
			
			case 0x0000000F:
				ENABLE_CHILD_SECTOR("esc_gunsmith01x");
				ENABLE_CHILD_SECTOR("esc_gunsmith01props01x");
				break;
			
			case 0x00000010:
				ENABLE_CHILD_SECTOR("esc_villaWall01x");
				break;
			
			case 0x00000011:
				ENABLE_CHILD_SECTOR("esc_trashPile01x");
				ENABLE_CHILD_SECTOR("esc_trashPile01props01x");
				break;
		}
		fLocal_1290 = GET_CURRENT_GAME_TIME();
		bLocal_1286++;
	}
	return;
}

var Function_816(int iParam0) //Position: 0x2F9AC / 194988
{
	return Global_8492[iParam014].f_52;
}

void Function_817() //Position: 0x2F9BB / 195003
{
	switch (iLocal_1040)
	{
		case 0x00000006:
			DECOR_SET_BOOL(Global_34573, "KillEscaleraRevolution", true);
			Global_8492[714].f_8 = 554;
			Function_128(&(Global_29008[Global_30685[0]]), 256);
			Function_850(&Local_1032, 1);
			bLocal_1031 = CREATE_LAYOUT(Function_53());
			Function_847();
			iLocal_1284 = 4294967295;
			SET_DUST_LEVEL_MODIFIER(4294967294);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_315();
			Function_173(1, 0, 1);
			Local_1041 = 1000;
			iLocal_1040 = 7;
			break;
		
		case 0x00000007:
			if (Local_1041 != 1004 || Function_800())
			{
				iLocal_1040 = 8;
			}
			break;
		
		case 0x00000008:
			Function_800();
			if (Function_831())
			{
				Function_826();
				Function_825();
				iLocal_1040 = 9;
			}
			break;
		
		case 0x00000009:
			if (IS_LAYOUTREF_VALID(Local_188))
			{
				bLocal_1166 = CREATE_OBJECT_ITERATOR(Local_188);
			}
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_355(7, 1, 1);
			RESET_ACTOR_GAITS(bLocal_1058, 0);
			SET_CRIPPLE_ENABLE(bLocal_1058, 0);
			SET_ACTOR_FACTION(bLocal_1058, 20);
			TASK_PRIORITY_SET(bLocal_1058, true);
			TASK_STAND_STILL(bLocal_1058, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_1058, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_1058, 50.0f);
			SET_ACTOR_HEALTH(bLocal_1058, GET_ACTOR_MAX_HEALTH(bLocal_1058));
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_1058);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_1058, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(bLocal_1058, false);
			SET_AMBIENT_VOICE_NAME(bLocal_1058, "COMPANION_MEXICAN_REBEL");
			AI_SET_NAV_ACTOR_WIDTH(bLocal_1058, 0,4f);
			RESET_ACTOR_GAITS(bLocal_1059, 0);
			TASK_PRIORITY_SET(bLocal_1059, true);
			TASK_STAND_STILL(bLocal_1059, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_1059, 50.0f);
			SET_ACTOR_HEALTH(bLocal_1059, GET_ACTOR_MAX_HEALTH(bLocal_1059));
			vLocal_1316 = { 0.0f, 0.0f, 0.0f };
			TELEPORT_ACTOR(bLocal_1059, &vLocal_1316, 1, 1, 1);
			DESTROY_GC_OBJECTS(1, 1);
			Function_200(0);
			Function_823(&Local_188 + 3244);
			Function_823(&Local_188 + 3256);
			Function_823(&Local_188 + 3268);
			SET_WEAPONENUM_LOCKED(13, 0);
			Function_292(&bLocal_1167);
			Function_292(&bLocal_1170);
			Function_292(&bLocal_1173);
			Function_292(&bLocal_1176);
			Function_292(&bLocal_1179);
			Function_821(&uLocal_1182, bLocal_1031);
			bLocal_1039 = false;
			iLocal_1040 = 0;
			Function_819(&Local_1032, &bLocal_1039, &iLocal_1040);
			SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 19, 0.0f);
			if (bLocal_1039 >= 0)
			{
				Function_197(1);
				Function_227(1);
			}
			if (bLocal_1039 >= 4)
			{
				Function_583(1);
			}
			else
			{
				Function_583(0);
			}
			Function_818(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_1032);
			break;
	}
	return;
}

void Function_818(struct<25> Param0) //Position: 0x2FC20 / 195616
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			bLocal_1039 = false;
			break;
		
		case 0x00000002:
			bLocal_1039 = true;
			break;
		
		case 0x00000003:
			bLocal_1039 = 2;
			break;
		
		case 0x00000004:
			bLocal_1039 = 3;
			break;
		
		case 0x00000005:
			bLocal_1039 = 4;
			break;
		
		case 0x00000006:
			bLocal_1039 = 5;
			break;
		
		case 0x00000007:
			bLocal_1039 = 6;
			break;
		
		case 0x00000008:
			bLocal_1039 = 7;
			break;
		
		case 0x00000009:
			bLocal_1039 = 8;
			break;
		
		case 0x0000000A:
			bLocal_1039 = 101;
			break;
	}
}

void Function_819(bool bParam0, var uParam1, int iParam2) //Position: 0x2FCB5 / 195765
{
	if (Function_296(bParam0))
	{
		*uParam1 = Function_398(bParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_820();
	}
	return;
}

void Function_820() //Position: 0x2FCE9 / 195817
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

int Function_821(var uParam0, bool bParam1) //Position: 0x2FD3A / 195898
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_822(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_822(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_822(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_822(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_822(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_822(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_822(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_822(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_822(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_822(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_822(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_822(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_822(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_822(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x303DD / 197597
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

void Function_823(int iParam0) //Position: 0x304A0 / 197792
{
	vector3 vVar0;
	vector3 vVar3;
	char* cVar6[64];
	bool bVar22;
	
	Function_254(*iParam0);
	vVar0 = { StackVal, StackVal, Function_254(*iParam0) };
	Function_824(*iParam0);
	vVar3 = { StackVal, StackVal, Function_824(*iParam0) };
	strcpy(&cVar6, GET_OBJECT_NAME(*iParam0), 64);
	bVar22 = GET_OBJECT_OWNER(*iParam0);
	vVar3.x = 0.0f;
	vVar3.f_8 = 0.0f;
	vVar3.f_4 = (180.0f - vVar3.y);
	vVar3.f_4 = GET_OBJECT_HEADING(*iParam0);
	PRINTSTRING("Creating right hand cover in ");
	PRINTSTRING(GET_OBJECT_NAME(bVar22));
	PRINTSTRING(" at ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(" facing ");
	PRINTVECTOR(vVar3);
	PRINTSTRING(" called ");
	PRINTSTRING(&cVar6);
	PRINTNL();
	DESTROY_OBJECT(*iParam0);
	*iParam0 = CREATE_COVER_LOCATION_IN_LAYOUT(bVar22, &cVar6, vVar0, vVar3, 2);
	return;
}

vector3 Function_824(bool bParam0) //Position: 0x3056C / 197996
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

void Function_825() //Position: 0x30593 / 198035
{
	if (!IS_OBJECT_VALID(bLocal_1312))
	{
		bLocal_1312 = CREATE_POINT_IN_LAYOUT(bLocal_1031, "oFloatingSpeaker", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	}
	if (!IS_OBJECT_VALID(bLocal_1313))
	{
		bLocal_1313 = CREATE_POINT_IN_LAYOUT(bLocal_1031, "m_oPlayerSpeaker", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	}
	if (!IS_OBJECT_ATTACHED(bLocal_1313))
	{
		ATTACH_OBJECTS(bLocal_1313, Global_34573, "", 0.0f, 10.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	PLAY_SOUND_FROM_OBJECT(bLocal_1312, "REBEL_05_RIOT_MASTER");
	return;
}

void Function_826() //Position: 0x30631 / 198193
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_830(4, 1);
	uVar0 = uVar0;
	Local_188 = CREATE_LAYOUT("Rebel05_layout");
	Local_188.f_1472 = CREATE_VOLUME_SET_IN_LAYOUT(Local_188, "CutsceneVol_set");
	(*&Local_188 + 1460)[0] = CREATE_VOLUME_IN_LAYOUT(Local_188, "Cutscene01Vol", 2, -4295,628f, 22,0052f, 4412,403f, 0.0f, 39,25808f, 0.0f, 22,05498f, 25,4287f, 6,31041f);
	ADD_TO_VOLUME_SET(Local_188.f_1472, (*&Local_188 + 1460)[0]);
	(*&Local_188 + 1460)[1] = CREATE_VOLUME_IN_LAYOUT(Local_188, "Cutscene07Vol", 2, -4346,228f, 42,99654f, 4329,108f, 0.0f, 0.0f, 0.0f, 43,82666f, 6.0f, 25,55553f);
	ADD_TO_VOLUME_SET(Local_188.f_1472, (*&Local_188 + 1460)[1]);
	Local_188.f_1492 = CREATE_VOLUME_SET_IN_LAYOUT(Local_188, "JailLocks_set");
	(*&Local_188 + 1476)[0] = CREATE_VOLUME_IN_LAYOUT(Local_188, "nJailLock1", 2, -4354,105f, 31,26651f, 4380,869f, 0.0f, 5,574448f, 0.0f, 0,2112083f, 0,2819241f, 0,2561758f);
	ADD_TO_VOLUME_SET(Local_188.f_1492, (*&Local_188 + 1476)[0]);
	(*&Local_188 + 1476)[1] = CREATE_VOLUME_IN_LAYOUT(Local_188, "nJailLock2", 2, -4356,558f, 31,27264f, 4378,38f, 0.0f, -85,03403f, 0.0f, 0,2112083f, 0,2819241f, 0,2561758f);
	ADD_TO_VOLUME_SET(Local_188.f_1492, (*&Local_188 + 1476)[1]);
	(*&Local_188 + 1476)[2] = CREATE_VOLUME_IN_LAYOUT(Local_188, "nJailLock3", 2, -4356,915f, 31,27383f, 4374,371f, 0.0f, -85,03403f, 0.0f, 0,2112083f, 0,2596256f, 0,2561758f);
	ADD_TO_VOLUME_SET(Local_188.f_1492, (*&Local_188 + 1476)[2]);
	Local_188.f_1508 = CREATE_VOLUME_SET_IN_LAYOUT(Local_188, "Jail_set");
	(*&Local_188 + 1496)[0] = CREATE_VOLUME_IN_LAYOUT(Local_188, "Jail_pt1", 2, -4356,572f, 31,77542f, 4377,697f, 0,432903f, 3,854442f, 0,07831103f, 6,73217f, 3,888182f, 15,23727f);
	ADD_TO_VOLUME_SET(Local_188.f_1508, (*&Local_188 + 1496)[0]);
	(*&Local_188 + 1496)[1] = CREATE_VOLUME_IN_LAYOUT(Local_188, "Jail_pt2", 2, -4352,343f, 31,82233f, 4371,956f, 0,432903f, 3,854442f, 0,07831103f, 2,652694f, 3,888182f, 4,25894f);
	ADD_TO_VOLUME_SET(Local_188.f_1508, (*&Local_188 + 1496)[1]);
	Local_188.f_1544 = CREATE_VOLUME_SET_IN_LAYOUT(Local_188, "DefendVilla_set");
	(*&Local_188 + 1512)[0] = CREATE_VOLUME_IN_LAYOUT(Local_188, "VillaDefVol_1", 2, -4351,502f, 43,98232f, 4342,361f, 0.0f, 0.0f, 0.0f, 12,92751f, 4,773952f, 16,12669f);
	ADD_TO_VOLUME_SET(Local_188.f_1544, (*&Local_188 + 1512)[0]);
	(*&Local_188 + 1512)[1] = CREATE_VOLUME_IN_LAYOUT(Local_188, "VillaDefVol_2", 2, -4354,281f, 40,24868f, 4354,556f, 0.0f, 0.0f, 0.0f, 10,07366f, 5,33874f, 9,272414f);
	ADD_TO_VOLUME_SET(Local_188.f_1544, (*&Local_188 + 1512)[1]);
	(*&Local_188 + 1512)[2] = CREATE_VOLUME_IN_LAYOUT(Local_188, "VillaDefVol_3", 2, -4339,31f, 40,24511f, 4354,432f, 0.0f, 0.0f, 0.0f, 3,333498f, 5,33874f, 4,743776f);
	ADD_TO_VOLUME_SET(Local_188.f_1544, (*&Local_188 + 1512)[2]);
	(*&Local_188 + 1512)[3] = CREATE_VOLUME_IN_LAYOUT(Local_188, "VillaDefVol_4", 2, -4340,801f, 43,98232f, 4342,361f, 0.0f, 0.0f, 0.0f, 13,99926f, 4,773952f, 16,12669f);
	ADD_TO_VOLUME_SET(Local_188.f_1544, (*&Local_188 + 1512)[3]);
	(*&Local_188 + 1512)[4] = CREATE_VOLUME_IN_LAYOUT(Local_188, "VillaDefVol_5", 2, -4368,952f, 40,69725f, 4360,688f, 0.0f, 0,06606489f, 0.0f, 7,869235f, 4,773952f, 8,457f);
	ADD_TO_VOLUME_SET(Local_188.f_1544, (*&Local_188 + 1512)[4]);
	(*&Local_188 + 1512)[5] = CREATE_VOLUME_IN_LAYOUT(Local_188, "VillaDefVol_6", 2, -4361,573f, 43,98232f, 4342,361f, 0.0f, 0.0f, 0.0f, 7,461392f, 4,773952f, 16,12669f);
	ADD_TO_VOLUME_SET(Local_188.f_1544, (*&Local_188 + 1512)[5]);
	(*&Local_188 + 1512)[6] = CREATE_VOLUME_IN_LAYOUT(Local_188, "VillaDefVol_7", 2, -4362,266f, 40,69725f, 4354,678f, 0.0f, 0,06606489f, 0.0f, 6,467897f, 4,773952f, 9,379645f);
	ADD_TO_VOLUME_SET(Local_188.f_1544, (*&Local_188 + 1512)[6]);
	Local_188.f_1568 = CREATE_VOLUME_SET_IN_LAYOUT(Local_188, "ApproachGG_set");
	(*&Local_188 + 1548)[0] = CREATE_VOLUME_IN_LAYOUT(Local_188, "approach_GG_1", 2, -4403,027f, 33,92579f, 4399,817f, 0.0f, 8,939919f, 0.0f, 60,50052f, 19,22651f, 4,411059f);
	ADD_TO_VOLUME_SET(Local_188.f_1568, (*&Local_188 + 1548)[0]);
	(*&Local_188 + 1548)[1] = CREATE_VOLUME_IN_LAYOUT(Local_188, "approach_GG_2", 2, -4404,861f, 33,92579f, 4393,914f, 0.0f, 4,531993f, 0.0f, 62,99074f, 19,22651f, 8,769179f);
	ADD_TO_VOLUME_SET(Local_188.f_1568, (*&Local_188 + 1548)[1]);
	(*&Local_188 + 1548)[2] = CREATE_VOLUME_IN_LAYOUT(Local_188, "approach_GG_3", 2, -4400,437f, 33,92579f, 4387,158f, 0.0f, -5,205816f, 0.0f, 60,0205f, 19,22651f, 4,596496f);
	ADD_TO_VOLUME_SET(Local_188.f_1568, (*&Local_188 + 1548)[2]);
	(*&Local_188 + 1548)[3] = CREATE_VOLUME_IN_LAYOUT(Local_188, "approach_GG_4", 2, -4398,253f, 33,92579f, 4381,38f, 0.0f, -5,823006f, 0.0f, 57,58197f, 19,22651f, 7,580697f);
	ADD_TO_VOLUME_SET(Local_188.f_1568, (*&Local_188 + 1548)[3]);
	Local_188.f_1728 = CREATE_VOLUME_SET_IN_LAYOUT(Local_188, "barriacdeObstructions_set");
	(*&Local_188 + 1572)[0] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_1", 2, -4376,728f, 33,40521f, 4411,218f, 0.0f, 27,08612f, 0.0f, 1.0f, 1,770859f, 2,122593f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[0]);
	(*&Local_188 + 1572)[1] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_2", 2, -4376,16f, 33,75294f, 4412,801f, 0.0f, -2,138433f, 0.0f, 1.0f, 1,381151f, 2,122593f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[1]);
	(*&Local_188 + 1572)[2] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_3", 2, -4373,594f, 33,75294f, 4415,361f, 0.0f, 23,94556f, 0.0f, 0,7570297f, 1,381151f, 2,122593f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[2]);
	(*&Local_188 + 1572)[3] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_4", 2, -4373,439f, 33,75294f, 4417,11f, 0.0f, -12,82569f, 0.0f, 0,9221409f, 1,381151f, 2,122593f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[3]);
	(*&Local_188 + 1572)[4] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_5", 2, -4375,345f, 33,95715f, 4420,282f, 0.0f, 11,55653f, 0.0f, 0,9221409f, 1,381151f, 2,122593f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[4]);
	(*&Local_188 + 1572)[5] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_6", 2, -4375,251f, 34,11619f, 4422,16f, 0.0f, -15,52041f, 0.0f, 0,9221409f, 1,381151f, 2,122593f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[5]);
	(*&Local_188 + 1572)[6] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_7", 2, -4366,895f, 31,99365f, 4420,7f, 0.0f, 7,620462f, 0.0f, 1,739845f, 2,990529f, 2,416363f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[6]);
	(*&Local_188 + 1572)[7] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_8", 2, -4363,513f, 31,99365f, 4417,815f, 0.0f, 6,69423f, 0.0f, 1,601181f, 2,990529f, 2,235607f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[7]);
	(*&Local_188 + 1572)[8] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_9", 2, -4366,781f, 31,99365f, 4415,028f, 0.0f, 0,4800674f, 0.0f, 1,638651f, 2,990529f, 2,215425f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[8]);
	(*&Local_188 + 1572)[9] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_10", 2, -4364,819f, 31,18822f, 4409,681f, 0.0f, 84,22035f, 0.0f, 1,521354f, 2,990529f, 2,270463f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[9]);
	(*&Local_188 + 1572)[10] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_11", 2, -4369,977f, 31,16728f, 4406,532f, 0.0f, 63,77049f, 0.0f, 1,571114f, 2,990529f, 2,211749f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[10]);
	(*&Local_188 + 1572)[11] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_12", 2, -4373,329f, 31,99247f, 4408,131f, 0.0f, 57,90255f, 0.0f, 1,456033f, 2,990529f, 2,079663f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[11]);
	(*&Local_188 + 1572)[12] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_13", 2, -4407,246f, 33,97422f, 4409,336f, 0.0f, 111,2183f, 0.0f, 0,8348632f, 2,990529f, 2,05735f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[12]);
	(*&Local_188 + 1572)[13] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_14", 2, -4402,972f, 33,97422f, 4407,208f, 0.0f, 113,7733f, 0.0f, 0,9585737f, 2,990529f, 2,069289f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[13]);
	(*&Local_188 + 1572)[14] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_15", 2, -4400f, 33,88756f, 4406,144f, 0.0f, 105,5002f, 0.0f, 0,9341696f, 2,990529f, 2,101948f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[14]);
	(*&Local_188 + 1572)[15] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_16", 2, -4401,388f, 33,89281f, 4402,727f, 0.0f, 96,55688f, 0.0f, 0,884882f, 2,990529f, 2,029747f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[15]);
	(*&Local_188 + 1572)[16] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_17", 2, -4407,028f, 33,89285f, 4405,129f, 0.0f, 107,6039f, 0.0f, 1,005589f, 2,990529f, 1,911206f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[16]);
	(*&Local_188 + 1572)[17] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_18", 2, -4404,79f, 34,62751f, 4392,897f, 0.0f, 92,30241f, 0.0f, 0,8918347f, 1,527305f, 3,904805f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[17]);
	(*&Local_188 + 1572)[18] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_19", 2, -4407,128f, 34,37222f, 4398,692f, 0.0f, 86,37297f, 0.0f, 1,093089f, 1,527305f, 3,904805f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[18]);
	(*&Local_188 + 1572)[19] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_20", 2, -4400,876f, 34,50642f, 4398,683f, 0.0f, 96,91463f, 0.0f, 1,093089f, 1,527305f, 3,412101f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[19]);
	(*&Local_188 + 1572)[20] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_21", 2, -4399,214f, 35,99255f, 4386,309f, 0.0f, 78,2635f, 0.0f, 0,8918347f, 1,527305f, 3,904805f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[20]);
	(*&Local_188 + 1572)[21] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_22", 2, -4394,567f, 36,54043f, 4382,647f, 0.0f, 72,71125f, 0.0f, 0,978539f, 1,527305f, 3,904805f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[21]);
	(*&Local_188 + 1572)[22] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_23", 2, -4401,347f, 36,43217f, 4380,026f, 0.0f, 86,94135f, 0.0f, 1,072868f, 1,527305f, 3,114106f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[22]);
	(*&Local_188 + 1572)[23] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_24", 2, -4403,159f, 36,43217f, 4379,574f, 0.0f, 51,51168f, 0.0f, 0,8753161f, 1,527305f, 1,105768f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[23]);
	(*&Local_188 + 1572)[24] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_25", 2, -4382,554f, 39,29215f, 4360,513f, 0.0f, 16,20436f, 0.0f, 2,243132f, 1,95104f, 3,942165f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[24]);
	(*&Local_188 + 1572)[25] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_26", 2, -4392,007f, 38,21069f, 4362,681f, 0.0f, 46,64703f, 0.0f, 1,69395f, 1,986027f, 1,237758f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[25]);
	(*&Local_188 + 1572)[26] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_27", 2, -4395,41f, 38,02301f, 4365,518f, 0.0f, 45,10419f, 0.0f, 0,8753161f, 1,808938f, 2,973797f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[26]);
	(*&Local_188 + 1572)[27] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_28", 2, -4392,439f, 38,02301f, 4366,866f, 0.0f, 82,90279f, 0.0f, 0,8982508f, 1,808938f, 3,954686f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[27]);
	(*&Local_188 + 1572)[28] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_29", 2, -4368,791f, 38,81951f, 4360,976f, 0.0f, 8,972184f, 0.0f, 1,18442f, 1,95104f, 3,930655f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[28]);
	(*&Local_188 + 1572)[29] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_30", 2, -4374,689f, 39,34298f, 4370,996f, 0.0f, -11,63937f, 0.0f, 1,116349f, 1,95104f, 2,856839f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[29]);
	(*&Local_188 + 1572)[30] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_31", 2, -4374,135f, 39,34298f, 4373,47f, 0.0f, 39,38451f, 0.0f, 1,116349f, 1,95104f, 2,856839f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[30]);
	(*&Local_188 + 1572)[31] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_32", 2, -4363,041f, 39,1923f, 4353,695f, 0.0f, 4,865744f, 0.0f, 1,236263f, 1,95104f, 1,42109f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[31]);
	(*&Local_188 + 1572)[32] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_33", 2, -4361,142f, 39,09452f, 4358,321f, 0.0f, 5,773386f, 0.0f, 1,116349f, 1,95104f, 2,03251f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[32]);
	(*&Local_188 + 1572)[33] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_34", 2, -4341,704f, 30,86512f, 4370,954f, 0.0f, -0,2029452f, 0.0f, 1,24977f, 2,254668f, 1,18008f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[33]);
	(*&Local_188 + 1572)[34] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_35", 2, -4405,665f, 35,79206f, 4386,362f, 0.0f, 78,2635f, 0.0f, 1,088624f, 1,527305f, 2,133466f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[34]);
	(*&Local_188 + 1572)[35] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_36", 2, -4400,971f, 34,09966f, 4415,86f, 0.0f, 106,3797f, 0.0f, 0,9585737f, 2,990529f, 3,812552f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[35]);
	(*&Local_188 + 1572)[36] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_37", 2, -4395,348f, 34,09966f, 4413,952f, 0.0f, 108,4581f, 0.0f, 0,9585737f, 2,990529f, 3,812552f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[36]);
	(*&Local_188 + 1572)[37] = CREATE_VOLUME_IN_LAYOUT(Local_188, "barOb_38", 2, -4356,101f, 29,56111f, 4413,357f, 0.0f, -3,154499f, 0.0f, 1,601181f, 2,990529f, 2,235607f);
	ADD_TO_VOLUME_SET(Local_188.f_1728, (*&Local_188 + 1572)[37]);
	Local_188.f_1732 = CREATE_VOLUME_IN_LAYOUT(Local_188, "RoofTopVilla2", 2, -4357,557f, 44,87726f, 4365,906f, 0.0f, 5,496288f, 0.0f, 7,633258f, 3,353548f, 8,345065f);
	Local_188.f_1736 = CREATE_VOLUME_IN_LAYOUT(Local_188, "S4_End", 2, -4388,692f, 41,21154f, 4366,799f, 0.0f, 44,92978f, 0.0f, 1,275566f, 20,89979f, 81,63441f);
	Local_188.f_1740 = CREATE_VOLUME_IN_LAYOUT(Local_188, "VillaGate1", 2, -4373,257f, 40,76725f, 4362,11f, 0.0f, 17,00539f, 0.0f, 2,909955f, 4,797256f, 5,496757f);
	Local_188.f_1744 = CREATE_VOLUME_IN_LAYOUT(Local_188, "spawn_army_3", 2, -4381,227f, 33,78461f, 4412,99f, 0.0f, 102,0373f, 0.0f, 56,05396f, 18,35436f, 1,488673f);
	Local_188.f_1748 = CREATE_VOLUME_IN_LAYOUT(Local_188, "BarricadeVol_1", 2, -4371,897f, 34,38783f, 4416,838f, 0.0f, 9,385709f, 0.0f, 13,15703f, 6,739141f, 21,74693f);
	Local_188.f_1752 = CREATE_VOLUME_IN_LAYOUT(Local_188, "hostileZone", 2, -4360,873f, 32,72186f, 4416,264f, 0.0f, 5,108901f, 0.0f, 20,92813f, 10,17153f, 16,43221f);
	Local_188.f_1756 = CREATE_VOLUME_IN_LAYOUT(Local_188, "BarricadeVol_2", 2, -4400,676f, 36,78347f, 4388,892f, 0.0f, 87,94728f, 0.0f, 24,96179f, 6,739141f, 23,45945f);
	Local_188.f_1760 = CREATE_VOLUME_IN_LAYOUT(Local_188, "BarricadeVol_3", 2, -4394,596f, 39,04578f, 4376,069f, 0.0f, 50,53435f, 0.0f, 20,72793f, 6,739141f, 21,5801f);
	Local_188.f_1764 = CREATE_VOLUME_IN_LAYOUT(Local_188, "MobStayOut1", 2, -4377,656f, 40,37018f, 4384,316f, 0.0f, -45,91817f, 0.0f, 19,63002f, 6,882916f, 33,68529f);
	Local_188.f_1768 = CREATE_VOLUME_IN_LAYOUT(Local_188, "VillaDoorway", 2, -4343,752f, 43,36833f, 4339,786f, 0.0f, 0.0f, 0.0f, 7,511582f, 2,944253f, 6,35324f);
	Local_188.f_1772 = CREATE_VOLUME_IN_LAYOUT(Local_188, "rebelAttack_1", 2, -4400,762f, 36,57903f, 4413,459f, 0.0f, 110,34f, 0.0f, 23,91531f, 9,094547f, 18,55493f);
	Local_188.f_1776 = CREATE_VOLUME_IN_LAYOUT(Local_188, "triggerFiringSquad", 2, -4323,107f, 29,43454f, 4394,263f, 0.0f, 36,69822f, 0.0f, 20,39239f, 11,6274f, 10,26789f);
	Local_188.f_1780 = CREATE_VOLUME_IN_LAYOUT(Local_188, "def_Villa_1_1", 2, -4367,745f, 40,77601f, 4360,8f, 0.0f, 9,153252f, 0.0f, 3,360389f, 5,00132f, 4,300007f);
	Local_188.f_1784 = CREATE_VOLUME_IN_LAYOUT(Local_188, "def_Villa_1_2", 2, -4375,575f, 40,77601f, 4369,756f, 0.0f, 19,83343f, 0.0f, 8,322847f, 5,00132f, 13,10452f);
	Local_188.f_1788 = CREATE_VOLUME_IN_LAYOUT(Local_188, "def_Villa_1_3", 2, -4379,229f, 40,77601f, 4360,321f, 0.0f, 20,54485f, 0.0f, 8,050077f, 5,00132f, 7,124521f);
	Local_188.f_1792 = CREATE_VOLUME_IN_LAYOUT(Local_188, "backYardBattle", 2, -4360,016f, 34,37901f, 4280,591f, 0.0f, 0.0f, 0.0f, 18,61245f, 9,254356f, 26,08397f);
	Local_188.f_1796 = CREATE_VOLUME_IN_LAYOUT(Local_188, "nearGatling", 2, -4392,301f, 39,72455f, 4363,633f, 0.0f, 66,38308f, 0.0f, 7,478644f, 5,948627f, 6,284294f);
	Local_188.f_1800 = CREATE_VOLUME_IN_LAYOUT(Local_188, "houseOnFire", 2, -4352,033f, 30,66656f, 4404,419f, 0.0f, 0.0f, 0.0f, 3,469287f, 2,921329f, 2,376907f);
	Local_188.f_1804 = CREATE_VOLUME_IN_LAYOUT(Local_188, "lightYouOnFire", 2, -4349,777f, 30,43179f, 4404,43f, 0.0f, 0.0f, 0.0f, 0,9108875f, 3,209408f, 1,646197f);
	Local_188.f_1808 = CREATE_VOLUME_IN_LAYOUT(Local_188, "firingSquadKilllZone", 2, -4324,528f, 28,69902f, 4397,408f, 0.0f, -14,88518f, 0.0f, 5,762217f, 5,874547f, 3,918006f);
	Local_188.f_1812 = CREATE_VOLUME_IN_LAYOUT(Local_188, "BurnHouseKilllZone", 2, -4348,121f, 29,28869f, 4405,132f, 0.0f, -90,37446f, 0.0f, 6,855475f, 5,874547f, 4,486678f);
	Local_188.f_1816 = CREATE_VOLUME_IN_LAYOUT(Local_188, "jailYard", 2, -4343,584f, 31,56336f, 4374,416f, 0.0f, 2,606588f, 0.0f, 14,59337f, 3,317155f, 13,25975f);
	Local_188.f_1820 = CREATE_VOLUME_IN_LAYOUT(Local_188, "PlayerDefVillaFront_1", 2, -4380,796f, 39,81216f, 4365,925f, 0.0f, 19,0692f, 0.0f, 15,07666f, 8,534109f, 17,79036f);
	Local_188.f_1824 = CREATE_VOLUME_IN_LAYOUT(Local_188, "PlayerDefVillaFront_2", 2, -4392,169f, 39,81216f, 4360,057f, 0.0f, 80,36427f, 0.0f, 15,07666f, 8,534109f, 29,20065f);
	Local_188.f_1828 = CREATE_VOLUME_IN_LAYOUT(Local_188, "sniperZoomCheck", 2, -4350,609f, 43,57037f, 4324,075f, 0.0f, 0.0f, 0.0f, 34,69471f, 3,491198f, 3,780176f);
	*(&Local_188 + 1832[06]) = { -4292,629f, 22,10065f, 4407,666f };
	*(&Local_188 + 1832[06] + 12) = { 0.0f, 130,4002f, 0.0f };
	*(&Local_188 + 1832[16]) = { -4320.0f, 22,08627f, 4421,652f };
	*(&Local_188 + 1832[16] + 12) = { 0.0f, -80,25298f, 0.0f };
	*(&Local_188 + 1884[06]) = { -4302,114f, 22,00521f, 4416,619f };
	*(&Local_188 + 1884[06] + 12) = { 0.0f, -282,0214f, 0.0f };
	*(&Local_188 + 1884[16]) = { -4308,015f, 23,05242f, 4415,708f };
	*(&Local_188 + 1884[16] + 12) = { 0.0f, -73,82634f, 0.0f };
	*(&Local_188 + 1936[06]) = { -4346,017f, 27,19024f, 4409,923f };
	*(&Local_188 + 1936[06] + 12) = { 0.0f, -209,6241f, 0.0f };
	*(&Local_188 + 1936[16]) = { -4345,876f, 27,99883f, 4418,762f };
	*(&Local_188 + 1936[16] + 12) = { 0.0f, 79,83891f, 0.0f };
	*(&Local_188 + 1936[26]) = { -4349,18f, 28,53832f, 4421,528f };
	*(&Local_188 + 1936[26] + 12) = { 0.0f, 81,16205f, 0.0f };
	Local_188.f_2012 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_188, 8, 0);
	(*&Local_188 + 2016)[0] = CREATE_POINT_IN_LAYOUT(Local_188, "PlayerStart04", -4351,729f, 28,85404f, 4419,053f, 0.0f, -271,6394f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2016)[0], Local_188.f_2012);
	(*&Local_188 + 2016)[1] = CREATE_POINT_IN_LAYOUT(Local_188, "CompanionStart04", -4352,388f, 29,08127f, 4419,738f, 0.0f, 80,61343f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2016)[1], Local_188.f_2012);
	*(&Local_188 + 2028[06]) = { -4393,92f, 37,53976f, 4368,513f };
	*(&Local_188 + 2028[06] + 12) = { 0.0f, -415,2548f, 0.0f };
	*(&Local_188 + 2028[16]) = { -4381,933f, 38,70368f, 4364,146f };
	*(&Local_188 + 2028[16] + 12) = { 0.0f, 104,8887f, 0.0f };
	*(&Local_188 + 2028[26]) = { -4397,939f, 37,48215f, 4370,91f };
	*(&Local_188 + 2028[26] + 12) = { 0.0f, -51,70406f, 0.0f };
	*(&Local_188 + 2104[06]) = { -4360,143f, 42,01784f, 4349,097f };
	*(&Local_188 + 2104[06] + 12) = { 0.0f, 139,7537f, 0.0f };
	*(&Local_188 + 2104[16]) = { -4357,512f, 42,01784f, 4347,636f };
	*(&Local_188 + 2104[16] + 12) = { 0.0f, 119,2632f, 0.0f };
	*(&Local_188 + 2104[26]) = { -4349,375f, 39,21355f, 4355,824f };
	*(&Local_188 + 2104[26] + 12) = { 0.0f, 88,21271f, 0.0f };
	*(&Local_188 + 2180[06]) = { -4342,334f, 42,01784f, 4340,267f };
	*(&Local_188 + 2180[06] + 12) = { 0.0f, -327,1071f, 0.0f };
	*(&Local_188 + 2180[16]) = { -4345,228f, 42,01784f, 4339,332f };
	*(&Local_188 + 2180[16] + 12) = { 0.0f, -395,2328f, 0.0f };
	*(&Local_188 + 2180[26]) = { -4344,129f, 42,01784f, 4339,023f };
	*(&Local_188 + 2180[26] + 12) = { 0.0f, -5,698364f, 0.0f };
	*(&Local_188 + 2180[36]) = { -4343,457f, 42,04895f, 4341,649f };
	*(&Local_188 + 2180[36] + 12) = { 0.0f, 1,923039f, 0.0f };
	*(&Local_188 + 2180[46]) = { -4342,063f, 42,01784f, 4338,499f };
	*(&Local_188 + 2180[46] + 12) = { 0.0f, -217,6197f, 0.0f };
	Local_188.f_2304 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene09Set", Local_188, 8, 0);
	(*&Local_188 + 2308)[0] = CREATE_POINT_IN_LAYOUT(Local_188, "PlayerStart09", -4081,081f, 8,37097f, 4306,619f, 0.0f, -193,6451f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2308)[0], Local_188.f_2304);
	(*&Local_188 + 2308)[1] = CREATE_POINT_IN_LAYOUT(Local_188, "CompanionStart09", -4079,689f, 8,258664f, 4307,048f, 0.0f, -226,5738f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2308)[1], Local_188.f_2304);
	(*&Local_188 + 2308)[2] = CREATE_POINT_IN_LAYOUT(Local_188, "PlayerHorseStart09", -4087,143f, 8,767815f, 4306,191f, 0.0f, -113,5937f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2308)[2], Local_188.f_2304);
	(*&Local_188 + 2308)[3] = CREATE_POINT_IN_LAYOUT(Local_188, "ReyesHorseStart09", -4088,962f, 8,628193f, 4308,17f, 0.0f, -114,1134f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2308)[3], Local_188.f_2304);
	*(&Local_188 + 2328[06]) = { -4360,143f, 42,01784f, 4349,097f };
	*(&Local_188 + 2328[06] + 12) = { 0.0f, 139,4057f, 0.0f };
	*(&Local_188 + 2328[16]) = { -4379,453f, 38,70368f, 4366,147f };
	*(&Local_188 + 2328[16] + 12) = { 0.0f, 83,80873f, 0.0f };
	*(&Local_188 + 2328[26]) = { -4380,973f, 38,70368f, 4365,476f };
	*(&Local_188 + 2328[26] + 12) = { 0.0f, 113,7778f, 0.0f };
	*(&Local_188 + 2404[06]) = { -4358,992f, 30,38202f, 4418,275f };
	*(&Local_188 + 2404[06] + 12) = { 0.0f, -88,40955f, 0.0f };
	*(&Local_188 + 2404[16]) = { -4358,876f, 30,31779f, 4416,404f };
	*(&Local_188 + 2404[16] + 12) = { 0.0f, -88.0f, 0.0f };
	*(&Local_188 + 2404[26]) = { -4359,096f, 30,14952f, 4414,879f };
	*(&Local_188 + 2404[26] + 12) = { 0.0f, -103,4759f, 0.0f };
	*(&Local_188 + 2404[36]) = { -4358,882f, 30,3729f, 4420,246f };
	*(&Local_188 + 2404[36] + 12) = { 0.0f, -88.0f, 0.0f };
	*(&Local_188 + 2404[46]) = { -4358,656f, 30,8533f, 4421,903f };
	*(&Local_188 + 2404[46] + 12) = { 0.0f, -88.0f, 0.0f };
	Local_188.f_2528 = CREATE_OBJECTSET_IN_LAYOUT("mobSpawn0Set", Local_188, 8, 0);
	(*&Local_188 + 2532)[0] = CREATE_POINT_IN_LAYOUT(Local_188, "mob_spawn_1", -4322,625f, 22,53701f, 4418,625f, 0.0f, 72,93301f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2532)[0], Local_188.f_2528);
	(*&Local_188 + 2532)[1] = CREATE_POINT_IN_LAYOUT(Local_188, "mob_spawn_2", -4337,556f, 26,16237f, 4421,809f, 0.0f, 66,91772f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2532)[1], Local_188.f_2528);
	(*&Local_188 + 2532)[2] = CREATE_POINT_IN_LAYOUT(Local_188, "mob_spawn_3", -4340,02f, 26,29766f, 4425,333f, 0.0f, 53,10817f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2532)[2], Local_188.f_2528);
	Local_188.f_2548 = CREATE_OBJECTSET_IN_LAYOUT("mobSpawn1Set", Local_188, 8, 0);
	(*&Local_188 + 2552)[0] = CREATE_POINT_IN_LAYOUT(Local_188, "mob_spawn1_1", -4363,74f, 30,92903f, 4412,232f, 0.0f, 93,85889f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2552)[0], Local_188.f_2548);
	(*&Local_188 + 2552)[1] = CREATE_POINT_IN_LAYOUT(Local_188, "mob_spawn1_2", -4360,223f, 31,23281f, 4425,538f, 0.0f, 29,82874f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2552)[1], Local_188.f_2548);
	(*&Local_188 + 2552)[2] = CREATE_POINT_IN_LAYOUT(Local_188, "mob_spawn1_3", -4376,991f, 32,91586f, 4407,12f, 0.0f, 152,819f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2552)[2], Local_188.f_2548);
	Local_188.f_2568 = CREATE_OBJECTSET_IN_LAYOUT("mobSpawn2Set", Local_188, 8, 0);
	(*&Local_188 + 2572)[0] = CREATE_POINT_IN_LAYOUT(Local_188, "mobSpawn2_1", -4403,22f, 37,84437f, 4362,156f, 0.0f, 260,1008f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2572)[0], Local_188.f_2568);
	(*&Local_188 + 2572)[1] = CREATE_POINT_IN_LAYOUT(Local_188, "mobSpawn2_2", -4385,672f, 38,10271f, 4371,644f, 0.0f, -60,34604f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2572)[1], Local_188.f_2568);
	(*&Local_188 + 2572)[2] = CREATE_POINT_IN_LAYOUT(Local_188, "mobSpawn2_3", -4398,644f, 36,00029f, 4380,473f, 0.0f, -42,42971f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2572)[2], Local_188.f_2568);
	Local_188.f_2588 = CREATE_OBJECTSET_IN_LAYOUT("mobSpawn3Set", Local_188, 8, 0);
	(*&Local_188 + 2592)[0] = CREATE_POINT_IN_LAYOUT(Local_188, "mobSpawn3_1", -4340,944f, 39,21354f, 4347,824f, 0.0f, 149,4332f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2592)[0], Local_188.f_2588);
	(*&Local_188 + 2592)[1] = CREATE_POINT_IN_LAYOUT(Local_188, "mobSpawn3_2", -4374,716f, 38,86792f, 4355,824f, 0.0f, 215,3286f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2592)[1], Local_188.f_2588);
	(*&Local_188 + 2592)[2] = CREATE_POINT_IN_LAYOUT(Local_188, "mobSpawn3_3", -4370,103f, 39,26843f, 4366,813f, 0.0f, 14,39727f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_188 + 2592)[2], Local_188.f_2588);
	Local_188.f_2608 = CREATE_OBJECTSET_IN_LAYOUT("boardFirePosSet", Local_188, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_188, "boardFire_1", -4350,548f, 30,57769f, 4404,442f, 11,54849f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_188.f_2608);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_188, "boardFire_2", -4350,561f, 30,21192f, 4404,495f, 39,83064f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_188.f_2608);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_188, "boardFire_3", -4350,548f, 29,42214f, 4404,442f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_188.f_2608);
	*(&Local_188 + 2612) = { -4384,99f, 38,65281f, 4367,158f };
	*(&Local_188 + 2612 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_188 + 2636) = { -4296,812f, 22,0052f, 4411,938f };
	*(&Local_188 + 2636 + 12) = { 0.0f, -48,44003f, 0.0f };
	Local_188.f_2660 = CREATE_POINT_IN_LAYOUT(Local_188, "RL_talkToGuy", -4296,063f, 22,0052f, 4408,339f, 0.0f, 123,0696f, 0.0f);
	*(&Local_188 + 2664) = { -1314,185f, 5,773531f, 4364,536f };
	*(&Local_188 + 2664 + 12) = { 0.0f, 78,58245f, 0.0f };
	*(&Local_188 + 2688) = { -4328,462f, 23,33719f, 4433,338f };
	*(&Local_188 + 2688 + 12) = { 0.0f, 59,22617f, 0.0f };
	*(&Local_188 + 2712) = { -4360,674f, 30,90853f, 4420,968f };
	*(&Local_188 + 2712 + 12) = { 0.0f, 92,86179f, 0.0f };
	*(&Local_188 + 2736) = { -4360,251f, 30,90853f, 4417,328f };
	*(&Local_188 + 2736 + 12) = { 0.0f, 92,86179f, 0.0f };
	Local_188.f_2760 = CREATE_POINT_IN_LAYOUT(Local_188, "EscapeWp", -4380,851f, 33,64089f, 4273,87f, 0.0f, 123,0722f, 0.0f);
	*(&Local_188 + 2764) = { -4376,016f, 33,88792f, 4273,492f };
	*(&Local_188 + 2764 + 12) = { 0.0f, 87,67809f, 0.0f };
	Local_188.f_2788 = CREATE_POINT_IN_LAYOUT(Local_188, "explodeDoor1", -4373,802f, 39,60951f, 4362,255f, 0.0f, 0.0f, 0.0f);
	*(&Local_188 + 2792) = { -4339,715f, 33,93617f, 4297,672f };
	*(&Local_188 + 2792 + 12) = { 0.0f, 71,32946f, 0.0f };
	*(&Local_188 + 2816) = { -4360,016f, 34,08374f, 4299,41f };
	*(&Local_188 + 2816 + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_188 + 2840) = { -4372,685f, 33,93516f, 4273,486f };
	*(&Local_188 + 2840 + 12) = { 0.0f, 59,37204f, 0.0f };
	*(&Local_188 + 2864) = { -4342,837f, 30,11766f, 4381,124f };
	*(&Local_188 + 2864 + 12) = { 0.0f, 91,03117f, 0.0f };
	*(&Local_188 + 2888) = { -4352,427f, 30,07841f, 4371,701f };
	*(&Local_188 + 2888 + 12) = { 0.0f, 275,5093f, 0.0f };
	Local_188.f_2912 = CREATE_POINT_IN_LAYOUT(Local_188, "barrel_place_1", -4375,593f, 38,70368f, 4361,987f, 0.0f, -75,45528f, 0.0f);
	Local_188.f_2916 = CREATE_POINT_IN_LAYOUT(Local_188, "barrel_place_2", -4375,15f, 38,70368f, 4363,716f, 0.0f, -75,45528f, 0.0f);
	*(&Local_188 + 2920) = { -4367,08f, 39,15295f, 4362,081f };
	*(&Local_188 + 2920 + 12) = { 0.0f, 92,73617f, 0.0f };
	*(&Local_188 + 2944) = { -4367,223f, 39,15295f, 4360,992f };
	*(&Local_188 + 2944 + 12) = { 0.0f, 92,73617f, 0.0f };
	*(&Local_188 + 2968) = { -4367,436f, 39,15295f, 4359,817f };
	*(&Local_188 + 2968 + 12) = { 0.0f, 92,73617f, 0.0f };
	Local_188.f_2992 = CREATE_POINT_IN_LAYOUT(Local_188, "backupBarrel_1", -4372,455f, 39,26331f, 4372,883f, 0.0f, 0.0f, 0.0f);
	Local_188.f_2996 = CREATE_POINT_IN_LAYOUT(Local_188, "backupBarrel_3", -4380,49f, 38,70368f, 4361,261f, 0.0f, -14,178f, 0.0f);
	Local_188.f_3000 = CREATE_POINT_IN_LAYOUT(Local_188, "shootBurningPeople", -4349,173f, 29,94217f, 4404,427f, 0.0f, -92,27142f, 0.0f);
	Local_188.f_3004 = CREATE_POINT_IN_LAYOUT(Local_188, "prison_shoot_1", -4347,876f, 30,07451f, 4372,463f, 0.0f, -150,8691f, 0.0f);
	Local_188.f_3008 = CREATE_POINT_IN_LAYOUT(Local_188, "prison_shoot_2", -4344,731f, 30,11765f, 4370,599f, 0.0f, -161,3522f, 0.0f);
	Local_188.f_3012 = CREATE_POINT_IN_LAYOUT(Local_188, "CenterSoundPoint", -4339,365f, 35,51597f, 4391,784f, 0.0f, 0.0f, 0.0f);
	*(&Local_188 + 3016) = { -4083,434f, 8,505189f, 4313,928f };
	*(&Local_188 + 3016 + 12) = { 0.0f, -98,24567f, 0.0f };
	Local_188.f_3040 = CREATE_POINT_IN_LAYOUT(Local_188, "reyesGoInside", -4343,837f, 42,08085f, 4331,826f, 0.0f, 0.0f, 0.0f);
	Local_188.f_3044 = CREATE_POINT_IN_LAYOUT(Local_188, "ReyesAtDoor", -4346,901f, 42,01784f, 4342,193f, 0.0f, 148,2133f, 0.0f);
	Local_188.f_3048 = CREATE_POINT_IN_LAYOUT(Local_188, "exitJail", -4349,132f, 30,07278f, 4371,403f, 0.0f, -150,8691f, 0.0f);
	Local_188.f_3052 = CREATE_POINT_IN_LAYOUT(Local_188, "billsHat", -4082,046f, 8,510687f, 4309,476f, 0.0f, 19,55964f, 0.0f);
	Local_188.f_3056 = CREATE_POINT_IN_LAYOUT(Local_188, "Rebels_S6_Shoot_1", -4356,016f, 41,13559f, 4352,521f, 0.0f, 0.0f, 0.0f);
	Local_188.f_3060 = CREATE_POINT_IN_LAYOUT(Local_188, "Rebels_S6_Shoot_2", -4352,132f, 41,13559f, 4355,859f, 0.0f, 0.0f, 0.0f);
	Local_188.f_3064 = CREATE_GRINGO_IN_LAYOUT(Local_188, "chop_door1", "stand_chop_door", -4344,496f, 42,04895f, 4337,63f, 0.0f, 0.0f, 0.0f);
	Local_188.f_3068 = CREATE_GRINGO_IN_LAYOUT(Local_188, "chop_door2", "stand_chop_door", -4343,554f, 42,04895f, 4337,63f, 0.0f, 0.0f, 0.0f);
	Local_188.f_3072 = CREATE_GRINGO_IN_LAYOUT(Local_188, "crying_linked", "crying_linked", -4326,584f, 26,47878f, 4395,535f, 0.0f, -123,564f, 0.0f);
	Local_188.f_3076 = CREATE_GRINGO_IN_LAYOUT(Local_188, "hostage_sit", "hostage_kneel", -4297,978f, 22,05748f, 4409,644f, 0.0f, -63,16186f, 0.0f);
	Local_188.f_3080 = CREATE_GRINGO_IN_LAYOUT(Local_188, "reb05_pull", "reb05_pull", -4082,924f, 8,411061f, 4314,342f, 0.0f, -10,75781f, 0.0f);
	Local_188.f_3084 = CREATE_GRINGO_IN_LAYOUT(Local_188, "waitWithGuns_1", "tense_with_guns", -4342,232f, 42,01784f, 4342,029f, 0.0f, 13,99183f, 0.0f);
	Local_188.f_3088 = CREATE_GRINGO_IN_LAYOUT(Local_188, "waitWithGuns_2", "tense_with_guns", -4344,935f, 42,06953f, 4341,974f, 0.0f, -24,92964f, 0.0f);
	Local_188.f_3092 = CREATE_GRINGO_IN_LAYOUT(Local_188, "waitWithGuns_3", "tense_with_guns", -4348,554f, 42,11798f, 4345,523f, 0.0f, -42,55337f, 0.0f);
	Local_188.f_3096 = CREATE_GRINGO_IN_LAYOUT(Local_188, "waitWithGuns_4", "tense_with_guns", -4350,386f, 42,068f, 4339,935f, 0.0f, -73,97371f, 0.0f);
	Local_188.f_3100 = CREATE_GRINGO_IN_LAYOUT(Local_188, "waitWithGuns_5", "tense_with_guns", -4361,129f, 39,21352f, 4353,339f, 0.0f, -243,8441f, 0.0f);
	Local_188.f_3104 = CREATE_GRINGO_IN_LAYOUT(Local_188, "waitWithGuns_6", "tense_with_guns", -4360,824f, 42,01784f, 4346,571f, 0.0f, -213,3075f, 0.0f);
	Local_188.f_3108 = CREATE_GRINGO_IN_LAYOUT(Local_188, "waitWithGuns_7", "tense_with_guns", -4366,126f, 38,74714f, 4360,001f, 0.0f, -243,8441f, 0.0f);
	Local_188.f_3112 = CREATE_GRINGO_IN_LAYOUT(Local_188, "waitWithGuns_8", "tense_with_guns", -4354,037f, 39,21354f, 4355,829f, 0.0f, -266,3794f, 0.0f);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low1", -4367,783f, 32,80107f, 4422,499f, 0.0f, -70,01777f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low2", -4364,946f, 31,14153f, 4411,459f, 0.0f, -6,399333f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low3", -4368,646f, 32,17377f, 4415,016f, 0.0f, -88,65405f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low4", -4370,717f, 31,59463f, 4408,183f, 0.0f, -26,10067f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low5", -4374,142f, 32,30375f, 4409,695f, 0.0f, -28,43751f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low6", -4365,15f, 31,49764f, 4417,957f, 0.0f, -82,62747f, 0.0f, 4);
	Local_188.f_3116 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "bar1_fallback_1", -4403,503f, 33,89283f, 4405,799f, 0.0f, 562,9893f, 0.0f, 4);
	Local_188.f_3120 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "bar1_fallback_2", -4396,681f, 33,94688f, 4412,827f, 0.0f, 199,6372f, 0.0f, 4);
	Local_188.f_3124 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "bar1_fallback_3", -4400,475f, 33,9302f, 4404,765f, 0.0f, 559,4316f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low16", -4401,582f, 33,9258f, 4401,203f, 0.0f, 545,9543f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low17", -4407,49f, 33,91513f, 4403,716f, 0.0f, 557,7413f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low18", -4407,861f, 34,043f, 4408,022f, 0.0f, 562,8875f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low42", -4406,559f, 33,89292f, 4406,521f, 0.0f, 378,3354f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low43", -4406,831f, 34,03436f, 4410,7f, 0.0f, 380,1208f, 0.0f, 4);
	Local_188.f_3128 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low44", -4401,105f, 33,89281f, 4404,149f, 0.0f, 366,073f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low45", -4402,31f, 33,95216f, 4408,523f, 0.0f, 384,4874f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low46", -4399,51f, 33,96928f, 4407,452f, 0.0f, 377,2581f, 0.0f, 4);
	Local_188.f_3132 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_2", -4340,328f, 42,01784f, 4343,25f, 0.0f, 535,9584f, 0.0f, 4);
	Local_188.f_3136 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_3", -4342,049f, 42,05346f, 4340,136f, 0.0f, 0.0f, 0.0f, 1);
	Local_188.f_3140 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_14", -4362,7f, 39,09638f, 4357,958f, 0.0f, 286,3033f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_15", -4362,625f, 39,03262f, 4358,915f, 0.0f, 275,5551f, 0.0f, 4);
	Local_188.f_3144 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low67", -4391,392f, 37,85982f, 4365,41f, 0.0f, 537,4996f, 0.0f, 4);
	Local_188.f_3148 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low68", -4394,445f, 37,80184f, 4364,403f, 0.0f, 496,6379f, 0.0f, 4);
	Local_188.f_3152 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low69", -4372,605f, 39,25938f, 4372,852f, 0.0f, 489,5425f, 0.0f, 4);
	Local_188.f_3156 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low70", -4373,053f, 39,25938f, 4371,793f, 0.0f, 454,4549f, 0.0f, 4);
	Local_188.f_3160 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low71", -4372,978f, 39,25938f, 4370,503f, 0.0f, 441,6783f, 0.0f, 4);
	Local_188.f_3164 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low74", -4377,818f, 33,57861f, 4413,075f, 0.0f, -81,91872f, 0.0f, 4);
	Local_188.f_3168 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low75", -4378,133f, 33,55053f, 4411,835f, 0.0f, -62,33206f, 0.0f, 4);
	Local_188.f_3172 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low76", -4374,934f, 33,49009f, 4415,816f, 0.0f, -67,40839f, 0.0f, 4);
	Local_188.f_3176 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low77", -4374,936f, 33,49009f, 4416,989f, 0.0f, -102,653f, 0.0f, 4);
	Local_188.f_3180 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low78", -4376,78f, 33,63926f, 4420,678f, 0.0f, -75,97424f, 0.0f, 4);
	Local_188.f_3184 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low79", -4376,854f, 33,84067f, 4421,981f, 0.0f, -98,62355f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low80", -4407,891f, 34,19673f, 4397,116f, 0.0f, 535,048f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low81", -4406,436f, 34,04344f, 4397,129f, 0.0f, 543,6779f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low82", -4401,496f, 34,07677f, 4397,222f, 0.0f, 546,6753f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low83", -4400,226f, 34,27619f, 4397,041f, 0.0f, 547,7964f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low84", -4404,024f, 34,5992f, 4391,244f, 0.0f, 547,7964f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low85", -4405,649f, 34,52304f, 4391,354f, 0.0f, 535,6931f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low86", -4405,462f, 35,51943f, 4384,819f, 0.0f, 531,5236f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low87", -4398,147f, 35,77225f, 4385,018f, 0.0f, 527,9854f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low88", -4399,725f, 35,57272f, 4384,664f, 0.0f, 524,4301f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low89", -4400,956f, 36,11836f, 4378,492f, 0.0f, 548,2654f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low90", -4402,198f, 36,27468f, 4378,395f, 0.0f, 518,0402f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low91", -4394,804f, 36,23929f, 4380,995f, 0.0f, 520,9148f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low92", -4393,45f, 36,13519f, 4381,406f, 0.0f, 521,8427f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low93", -4408,373f, 34,04344f, 4400,148f, 0.0f, 354,964f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low94", -4399,967f, 34,04344f, 4400,106f, 0.0f, 367,5592f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low95", -4405,393f, 34,30551f, 4394,461f, 0.0f, 361,8152f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low96", -4403,979f, 34,30551f, 4394,45f, 0.0f, 361,8152f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low97", -4405,995f, 35,01971f, 4387,807f, 0.0f, 350,0662f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low98", -4400,341f, 35,05477f, 4387,575f, 0.0f, 348,9796f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low99", -4398,589f, 35,46404f, 4387,974f, 0.0f, 350,6835f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low104", -4406,25f, 33,92831f, 4400,288f, 0.0f, 359,0627f, 0.0f, 4);
	Local_188.f_3188 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low105", -4393,651f, 37,89179f, 4362,197f, 0.0f, 266,5016f, 0.0f, 4);
	Local_188.f_3192 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low106", -4381,22f, 38,70368f, 4358,606f, 0.0f, 473,7447f, 0.0f, 4);
	Local_188.f_3196 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low107", -4380,5f, 38,70368f, 4361,397f, 0.0f, 456,0822f, 0.0f, 4);
	Local_188.f_3200 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_16", -4367,496f, 38,72309f, 4359,811f, 0.0f, 100,408f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_17", -4367,28f, 38,72309f, 4360,984f, 0.0f, 100,408f, 0.0f, 4);
	Local_188.f_3204 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_18", -4367,074f, 38,72309f, 4362,107f, 0.0f, 100,408f, 0.0f, 4);
	Local_188.f_3208 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low108", -4380,807f, 38,70368f, 4359,817f, 0.0f, 465,3139f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_21", -4338,735f, 39,22027f, 4355,331f, 0.0f, 451,9379f, 0.0f, 4);
	Local_188.f_3212 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_23", -4353,794f, 39,18475f, 4357,796f, 0.0f, 451,9379f, 0.0f, 4);
	Local_188.f_3216 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_24", -4370,006f, 38,71339f, 4362,661f, 0.0f, -79,82064f, 0.0f, 4);
	Local_188.f_3220 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_25", -4370,235f, 38,71339f, 4361,387f, 0.0f, -79,82064f, 0.0f, 4);
	Local_188.f_3224 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_26", -4370,468f, 38,7909f, 4360,087f, 0.0f, -79,82064f, 0.0f, 4);
	Local_188.f_3228 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_27", -4359,583f, 42,01783f, 4340,816f, 0.0f, 235,9377f, 0.0f, 4);
	Local_188.f_3232 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_29", -4364,537f, 39,02642f, 4353,699f, 0.0f, 270,7666f, 0.0f, 4);
	Local_188.f_3236 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_31", -4361,423f, 39,16451f, 4353,559f, 0.0f, 456,5775f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_32", -4363,142f, 39,21867f, 4351,99f, 0.0f, 540,6102f, 0.0f, 4);
	Local_188.f_3240 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_37", -4365,767f, 39,1862f, 4302,875f, 0.0f, 361,8986f, 0.0f, 4);
	Local_188.f_3244 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_38", -4346,624f, 42,01784f, 4340,104f, 0.0f, -359,4552f, 0.0f, 1);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_39", -4361,177f, 42,01784f, 4347,964f, 0.0f, 508,7325f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "coverRock_1", -4410,944f, 34,19502f, 4407,619f, 0.0f, -16,99912f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low49", -4407,952f, 34,59314f, 4415,852f, 0.0f, -16,99912f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "coverRock_3", -4403,373f, 35,10794f, 4420,489f, 0.0f, -16,99912f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "coverRock_4", -4402,4f, 35,26327f, 4422,235f, 0.0f, -8,163645f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "coverRock_5", -4396,003f, 34,7036f, 4424,527f, 0.0f, 2,981675f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "coverRock_7", -4391,703f, 33,92652f, 4409,469f, 0.0f, 29,40482f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "coverRock_8", -4408,469f, 34,96751f, 4386,979f, 0.0f, -47,76676f, 0.0f, 4);
	Local_188.f_3248 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_40", -4356,599f, 42,01784f, 4348,843f, 0.0f, 538,0657f, 0.0f, 4);
	Local_188.f_3252 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_41", -4359,607f, 39,15898f, 4358,007f, 0.0f, 456,5775f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_42", -4362,375f, 42,01784f, 4345,21f, 0.0f, 467,2283f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_43", -4354,211f, 42,01784f, 4348,138f, 0.0f, 540,3809f, 0.0f, 4);
	Local_188.f_3256 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "c_shoot_at_gates_2", -4385,365f, 36,82064f, 4374,331f, 0.0f, 52,04652f, 0.0f, 1);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "c_shoot_at_gates_3", -4404,568f, 35,82568f, 4382,53f, 0.0f, 150,3262f, 0.0f, 1);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "c_shoot_at_gates_4", -4402,338f, 36,32609f, 4377,737f, 0.0f, -38,10409f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "c_shoot_at_gates_5", -4396,054f, 36,18399f, 4383,792f, 0.0f, 341,398f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "c_shoot_at_gates_6", -4402,852f, 35,75824f, 4381,395f, 0.0f, 349,8308f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "c_shoot_at_gates_7", -4401,255f, 35,72192f, 4381,572f, 0.0f, 357,337f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "c_shoot_at_gates_8", -4394,452f, 36,19873f, 4384,27f, 0.0f, 341,398f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low109", -4401,39f, 34,01046f, 4400,295f, 0.0f, 367,5592f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low110", -4395,667f, 34,09604f, 4415,641f, 0.0f, 377,2581f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low111", -4393,994f, 34,09604f, 4415,121f, 0.0f, 377,2581f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low112", -4399,757f, 34,30888f, 4417,039f, 0.0f, 377,2581f, 0.0f, 4);
	Local_188.f_3260 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_ReyesBottomHill", -4401,334f, 34,59439f, 4417,529f, 0.0f, 377,2581f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low114", -4395,042f, 33,94688f, 4412,242f, 0.0f, 199,6372f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low116", -4400,599f, 34,18127f, 4414,193f, 0.0f, 198,1765f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low117", -4402,271f, 34,18127f, 4414,762f, 0.0f, 198,1765f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "ncover_low", -4371,643f, 38,83499f, 4353,821f, 0.0f, -88,09394f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low118", -4371,592f, 38,83499f, 4355,364f, 0.0f, -88,09394f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_low119", -4371,694f, 38,83499f, 4352,297f, 0.0f, -88,09394f, 0.0f, 4);
	Local_188.f_3264 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "gatesCover_L", -4372,973f, 38,70365f, 4363,646f, 0.0f, -69,91731f, 0.0f, 1);
	Local_188.f_3268 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "gatesCover_R", -4373,909f, 38,70365f, 4360,629f, 0.0f, -162,2823f, 0.0f, 1);
	Local_188.f_3272 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "jailYardCover_3", -4342,002f, 29,72775f, 4369,334f, 0.0f, -179,5463f, 0.0f, 4);
	CREATE_COVER_LOCATION_IN_LAYOUT(Local_188, "cover_villa_44", -4338,623f, 39,22027f, 4353,278f, 0.0f, 451,9379f, 0.0f, 4);
}

var ÅAµeEyÅ!hA·ÙáEu1Å0ÒA»IEq¬ÅANAÁJUEgÅQAÅ{«E\fÅk°AÊvRE=ÈÅÅAÐÄDE(nÅAÓªÄE.Å¨©A×gÌEÔÅÄAÝE3,Ç¡:¼DÌ;¼omob_rallypath_2_3  p   ÅwA¯JEKõÅ¼ãA±îÛEk(ÅÝ®A²ÞEÅûA±¨±EÅkA³e:E²Å'eAµÏsE>Å<þA¹èEÅ(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68) //Position: 0x3452B / 214315
{
	var uVar16771;
	
	return StackVal;
}

vector3 E.Åã A@*E3eÅAïA0HEGÅ³Au=ELÅÿA²EQuÅ~AE,	Å& A§EíiÅÙÛA¨EÂíÅ±2A ÖExÓÅ|ÚAÍ·E:;ÅEQAÍKE8ÅùZA9EËÅá\AzEÅ­PAÀ?E½ÞÅAÅ?E>#ÅìA(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64) //Position: 0x349D3 / 215507
{
	float fVar31;
	int iVar61;
	var uVar16576;
	var uVar16898;
	
	return StackVal, StackVal, 2.0f;
	return (StackVal + StackVal);
	(*StackVal)[StackVal13121] = StackVal;
	return;
	PatchTrap4();
	PatchTrapC();
	straddi(&Global_16779, &Global_17799, 69);
	return 3.0f;
	return;
	Unknown_Function();
	return StackVal, ((StackVal && StackVal) + 31396);
	PatchTrap3();
	PatchTrap7();
	return (StackVal + STRING_LOWER(Vector(StackVal, StackVal, StackVal) - Vector(StackVal, StackVal, StackVal), 10455)[StackVal50558]);
}

struct<8> E!ØÅ.B(DE ñÅ*õB(DEâÅ/®B((var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65) //Position: 0x355F3 / 218611
{
	int iVar104;
	bool bVar176;
	int iVar2557;
	int iVar6913;
	
	((StackVal % StackVal))->f_17799 = StackVal;
	return Vector(StackVal, StackVal, StackVal) + Vector(StackVal, StackVal, StackVal), 3;
}

void Function_830(int iParam0, int iParam1) //Position: 0x35D71 / 220529
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

bool Function_831() //Position: 0x35DBA / 220602
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_846(0))
		{
			return 0;
		}
		if (!Function_802())
		{
			return 0;
		}
		if (!Function_406(&bLocal_1071))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_1058))
		{
			bLocal_1058 = Function_839(7, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_1059))
		{
			bLocal_1059 = Function_833(1, 0, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!Function_832("MINI_GAMES_AND_JOBS\\REBEL05"))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_832(bool bParam0) //Position: 0x35E43 / 220739
{
	if (REQUEST_MISSION_AUDIO_BANK(bParam0))
	{
		return 1;
	}
	return 0;
}

bool Function_833(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x35E54 / 220756
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
	if (Global_3381 || Function_246(1))
	{
		Function_838(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_837())
		{
			return "";
		}
	}
	if (!Function_835())
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
		Function_254(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_254(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_254(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_254(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_834(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_834(StackVal, StackVal, vVar5, 0, 1, 1);
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
		Function_692(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
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

var Function_834(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x361AC / 221612
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

bool Function_835() //Position: 0x36247 / 221767
{
	if (Function_836() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_836() //Position: 0x3625D / 221789
{
	return Global_12976.f_152;
}

bool Function_837() //Position: 0x36268 / 221800
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_838(var uParam0, bool bParam1, bool bParam2) //Position: 0x36288 / 221832
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

bool Function_839(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x362B5 / 221877
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
		if (!Function_156(&(Global_29008[Global_30621[3]]), 4))
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
		Function_355(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_845(StackVal, uParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_841(StackVal, uParam7);
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
		Function_840(bVar1, 0, 0, 0, 0);
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
			RESET_ANIM_SET_FOR_ACTOR(bVar1, false);
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
		Function_619(bVar1, 0);
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

void Function_840(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x3679F / 223135
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

bool Function_841(bool bParam0, bool bParam1) //Position: 0x367F3 / 223219
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_457(bParam0))
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
					if (GET_ACTOR_ENUM(bVar2) == bParam0)
					{
						Function_842(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_842(bool bParam0, bool bParam1) //Position: 0x36873 / 223347
{
	Function_844(bParam0);
	Function_843(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_843(bool bParam0) //Position: 0x36899 / 223385
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_844(bool bParam0) //Position: 0x368BD / 223421
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

bool Function_845(int iParam0, bool bParam1) //Position: 0x3698C / 223628
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

bool Function_846(bool bParam0) //Position: 0x36A1F / 223775
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

void Function_847() //Position: 0x36A4D / 223821
{
	Function_794(&bLocal_1071, "rebel05", 10, 0);
	Function_849();
	Function_794(&bLocal_1106, "stand_ambient", 5, 0);
	Function_794(&bLocal_1106, "custom/stand_ambient", 8, 0);
	Function_794(&bLocal_1106, "$/content/scripting/gringo/SimpleGringo/multistage_movebox", 1, 0);
	Function_794(&bLocal_1106, "tense_with_guns", 5, 0);
	Function_794(&bLocal_1106, "custom/tense_with_guns", 8, 0);
	if (Function_296(&Local_1032))
	{
		Function_801();
	}
	else
	{
		Function_848();
	}
	return;
}

void Function_848() //Position: 0x36B3A / 224058
{
	Function_223(&bLocal_1122);
	Function_378(&bLocal_1122, 518, 2, 0);
	Function_378(&bLocal_1122, 379, 2, 0);
	Function_378(&bLocal_1122, 382, 2, 0);
	Function_378(&bLocal_1122, 384, 2, 0);
	Function_378(&bLocal_1122, 385, 2, 0);
	Function_378(&bLocal_1122, 391, 2, 0);
	return;
}

void Function_849() //Position: 0x36B8E / 224142
{
	Function_223(&bLocal_1075);
	Function_794(&bLocal_1075, "stand_hostage", 5, 0);
	Function_794(&bLocal_1075, "custom/stand_hostage", 8, 0);
	Function_794(&bLocal_1075, "rifle_waving", 5, 0);
	Function_794(&bLocal_1075, "custom/rifle_waving", 8, 0);
	Function_794(&bLocal_1075, "dead_ground_male", 5, 0);
	Function_794(&bLocal_1075, "custom/dead_ground_male", 8, 0);
	Function_794(&bLocal_1075, "dead_ground_female", 5, 0);
	Function_794(&bLocal_1075, "custom/dead_ground_female", 8, 0);
	Function_794(&bLocal_1075, "crowd_cheer", 5, 0);
	Function_794(&bLocal_1075, "custom/crowd_cheer", 8, 0);
	return;
}

void Function_850(bool bParam0, bool bParam1) //Position: 0x36CC6 / 224454
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_856(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_296(bParam0))
	{
		Global_34165.f_56 = 0;
		Global_34165.f_48 = 99;
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_30842[2] = 1;
	cVar0 = Function_13(*bParam0);
	Var1 = { StackVal, StackVal, StackVal, *(&Global_3422[cVar040] + 12) };
	if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_22(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_296(bParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_194();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_258();
	Function_361();
	Function_247("");
	Function_855(0);
	Function_854();
	Function_186();
	Function_185();
	ENABLE_JOURNAL_REPLAY(0);
	Function_853();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_321(0, 0x40400000);
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
	Function_852(13);
	Function_852(14);
	Function_852(25);
	Function_852(24);
	Function_852(12);
	Function_852(27);
	Function_852(26);
	Function_852(15);
	Function_851();
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

void Function_851() //Position: 0x370EA / 225514
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

void Function_852(int iParam0) //Position: 0x3715E / 225630
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_853() //Position: 0x3717E / 225662
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
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, false);
	return;
}

void Function_854() //Position: 0x371BB / 225723
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_855(int iParam0) //Position: 0x371CF / 225743
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_189())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_856(int iParam0, int iParam1) //Position: 0x37204 / 225796
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
			Function_857(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_857(int iParam0) //Position: 0x37286 / 225926
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

void Function_858() //Position: 0x372D4 / 226004
{
	if (Function_558(Global_34573, Local_188.f_3000, 1,7f))
	{
		if (!FIRE_IS_ACTOR_ON_FIRE(Global_34573))
		{
		}
	}
	return;
}

bool Function_859(int iParam0) //Position: 0x372F7 / 226039
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
			Function_860(iParam0, 1);
			return 1;
		}
	}
	Function_860(iParam0, 0);
	return 0;
}

void Function_860(int iParam0, bool bParam1) //Position: 0x3737E / 226174
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

bool Function_861(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x373A2 / 226210
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
		Function_860(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_879(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_878(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_878(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_865(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_151(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_860(iParam2, 0);
														return 0;
													}
													if (Function_151(bVar17, 2))
													{
														Function_864(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_863(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_151(bVar17, 4))
													{
														Function_864(&bVar17);
														strcpy(&Var18, "", 64);
														Function_862(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_247(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_863(StackVal, iParam2, bVar17);
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
	Function_860(iParam2, 0);
	return 0;
}

void Function_862(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x3773B / 227131
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

void Function_863(var uParam0, int iParam1, bool bParam2) //Position: 0x37826 / 227366
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

void Function_864(bool bParam0) //Position: 0x3789C / 227484
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_865(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x378BE / 227518
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
			return Function_876(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_869(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_876(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_866(iParam0, bVar2);
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
						bVar2 = Function_876(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_866(iParam0, bVar2);
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

var Function_866(int iParam0, bool bParam1) //Position: 0x37A08 / 227848
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_151(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_868(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_867(16);
			}
		}
	}
	else if (Function_151(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_868(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_867(256);
			}
		}
	}
	return bParam1;
}

bool Function_867(int iParam0) //Position: 0x37B3B / 228155
{
	return 2 | iParam0;
}

int Function_868(int iParam0) //Position: 0x37B45 / 228165
{
	return 4 | iParam0;
}

int Function_869(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x37B4F / 228175
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
				iParam3 = Function_875(iParam0, iParam1, bParam4);
				if (Function_151(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_867(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_870(iParam0, iParam1, 0, bParam4);
				if (Function_151(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_867(16);
		}
	}
	return 0;
}

int Function_870(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x37C01 / 228353
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_874(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_873(iVar0, 3, 1, bParam3))
			{
				if (!Function_878(iParam0, 8, 1))
				{
					return Function_872(64, 1024, bParam2);
				}
			}
			return Function_871(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_873(iVar0, 2, 1, bParam3))
			{
				if (!Function_878(iParam0, 32, 1))
				{
					return Function_872(64, 1024, bParam2);
				}
			}
			return Function_871(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_873(iVar0, 1, 1, bParam3))
			{
				if (!Function_878(iParam0, 64, 1))
				{
					return Function_872(64, 1024, bParam2);
				}
			}
			return Function_871(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_873(iVar0, 3, 1, bParam3))
			{
				if (!Function_878(iParam0, 128, 1))
				{
					return Function_872(64, 1024, bParam2);
				}
			}
			return Function_871(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_873(iVar0, 1, 1, bParam3))
			{
				if (!Function_878(iParam0, 1024, 1))
				{
					return Function_872(64, 1024, bParam2);
				}
			}
			return Function_871(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_873(iVar0, 1, 1, bParam3))
			{
				if (!Function_878(iParam0, 1024, 1))
				{
					return Function_872(64, 1024, bParam2);
				}
			}
			return Function_871(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_871(int iParam0, int iParam1, bool bParam2) //Position: 0x37DBB / 228795
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_872(int iParam0, int iParam1, bool bParam2) //Position: 0x37DD0 / 228816
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_873(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x37DE5 / 228837
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_874(int iParam0) //Position: 0x37E02 / 228866
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

int Function_875(var uParam0, int iParam1, bool bParam2) //Position: 0x37E71 / 228977
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_874(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_873(iVar0, 3, 1, bParam2))
			{
				if (!Function_878(uParam0, 8, 1))
				{
					return Function_868(64);
				}
			}
			return Function_867(64);
			break;
		
		case 0x00000009:
			if (Function_873(iVar0, 3, 1, bParam2))
			{
				if (!Function_878(uParam0, 8, 1))
				{
					return Function_868(64);
				}
			}
			return Function_867(64);
			break;
		
		case 0x0000006E:
			if (Function_873(iVar0, 2, 1, bParam2))
			{
				if (!Function_878(uParam0, 16, 1))
				{
					return Function_868(64);
				}
			}
			return Function_867(64);
			break;
		
		case 0x0000005B:
			if (Function_873(iVar0, 2, 1, bParam2))
			{
				if (!Function_878(uParam0, 32, 1))
				{
					return Function_868(64);
				}
			}
			return Function_867(64);
			break;
		
		case 0x00000031:
			if (Function_873(iVar0, 1, 1, bParam2))
			{
				if (!Function_878(uParam0, 64, 1))
				{
					return Function_868(64);
				}
			}
			return Function_867(64);
			break;
		
		case 0x00000007:
			if (Function_873(iVar0, 3, 1, bParam2))
			{
				if (!Function_878(uParam0, 128, 1))
				{
					return Function_868(64);
				}
			}
			return Function_867(64);
			break;
		
		case 0x00000008:
			if (Function_873(iVar0, 2, 1, bParam2))
			{
				if (!Function_878(uParam0, 256, 1))
				{
					return Function_868(64);
				}
			}
			return Function_867(64);
			break;
		
		case 0x00000014:
			if (Function_873(iVar0, 1, 1, bParam2))
			{
				if (!Function_878(uParam0, 512, 1))
				{
					return Function_868(64);
				}
			}
			return Function_867(64);
			break;
		
		case 0x00000018:
			if (Function_873(iVar0, 1, 1, bParam2))
			{
				if (!Function_878(uParam0, 512, 1))
				{
					return Function_868(64);
				}
			}
			return Function_867(64);
			break;
		
		case 0x00000057:
			if (Function_873(iVar0, 1, 1, bParam2))
			{
				if (!Function_878(uParam0, 1024, 1))
				{
					return Function_868(64);
				}
			}
			return Function_867(64);
			break;
		
		case 0x00000058:
			if (Function_873(iVar0, 1, 1, bParam2))
			{
				if (!Function_878(uParam0, 1024, 1))
				{
					return Function_868(64);
				}
			}
			return Function_867(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_876(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x3808E / 229518
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
						return Function_875(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_878(iParam0, 2, 1))
					{
						return Function_868(8);
					}
					return Function_867(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_878(iParam0, 4, 1))
					{
						return Function_868(16);
					}
					return Function_867(16);
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
							return Function_870(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_878(iParam0, 2, 1))
						{
							return Function_868(128);
						}
						return Function_867(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_878(iParam0, 4, 1))
						{
							return Function_868(256);
						}
						return Function_867(256);
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
						return Function_870(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_878(iParam0, 2, 1))
					{
						return Function_868(8);
					}
					return Function_867(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_878(iParam0, 4, 1))
					{
						return Function_868(16);
					}
					return Function_867(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_877(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_878(iParam0, 2, 1))
					{
						return Function_868(8);
					}
					return Function_867(8);
				}
				if (!Function_878(iParam0, 4, 1))
				{
					return Function_868(16);
				}
				return Function_867(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_870(iParam0, uParam1, 1, bParam5);
							if (Function_151(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_432(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_867(128);
							}
							if (!Function_878(iParam0, 2, 1))
							{
								return Function_868(8);
							}
							return Function_867(8);
						}
						if (iParam4 == 2)
						{
							if (Function_432(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_867(256);
							}
							if (!Function_878(iParam0, 4, 1))
							{
								return Function_868(16);
							}
							return Function_867(16);
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

int Function_877(int iParam0, var uParam1, bool bParam2) //Position: 0x3834D / 230221
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_874(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_873(iVar0, 2, 1, bParam2))
			{
				if (!Function_878(iParam0, 16, 1))
				{
					return Function_868(64);
				}
			}
			return Function_867(64);
			break;
		
		case 0x0000005B:
			if (Function_873(iVar0, 2, 1, bParam2))
			{
				if (!Function_878(iParam0, 32, 1))
				{
					return Function_868(64);
				}
			}
			return Function_867(64);
			break;
		
		case 0x00000057:
			if (Function_873(iVar0, 1, 1, bParam2))
			{
				if (!Function_878(iParam0, 1024, 1))
				{
					return Function_868(64);
				}
			}
			return Function_867(64);
			break;
		
		case 0x00000058:
			if (Function_873(iVar0, 1, 1, bParam2))
			{
				if (!Function_878(iParam0, 1024, 1))
				{
					return Function_868(64);
				}
			}
			return Function_867(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_878(int iParam0, bool bParam1, bool bParam2) //Position: 0x38461 / 230497
{
	if (bParam2)
	{
		if (!Function_151(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_151(iParam0->f_40, bParam1);
}

int Function_879(int iParam0) //Position: 0x38489 / 230537
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

void Function_880(bool bParam0) //Position: 0x384BA / 230586
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (MEMORY_GET_IS_VISIBLE(bParam0, Global_34573))
		{
			if (GET_ACTOR_FACTION(bParam0) != 19)
			{
				SAY_SINGLE_LINE_CONTEXT(bParam0, 53, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
			}
		}
	}
	return;
}

var Function_881(var uParam0, var uParam1, bool bParam2, float fParam3, bool bParam4) //Position: 0x384EE / 230638
{
	bool bVar0;
	
	if (Function_669(GET_WEAPON_IN_HAND(Global_34573)))
	{
		if (IS_PLAYER_WEAPON_ZOOMED(Global_34573))
		{
			if (GET_CURRENT_GAME_TIME() <= *uParam1)
			{
				bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 1);
				if (IS_ACTOR_VALID(bVar0))
				{
					if (IS_ACTOR_VALID(*uParam0))
					{
						if ((bParam4 && (GET_CURRENT_GAME_TIME() - *uParam1) <= 5,5f) || (!bParam4 && (GET_CURRENT_GAME_TIME() - *uParam1) <= 2,5f))
						{
							if (Function_342(*uParam0, Global_34573, 50.0f))
							{
								if (!IS_ACTOR_ANIMAL(bVar0))
								{
									if (!AI_IS_HOSTILE_OR_ENEMY(bVar0, Global_34573))
									{
										if (bParam2)
										{
											ABORT_SCRIPTED_CONVERSATION(0);
										}
										*uParam1 = (GET_CURRENT_GAME_TIME() + fParam3);
										return bVar0;
									}
								}
							}
						}
					}
					if (*uParam1 <= 0.0f)
					{
						*uParam0 = bVar0;
						*uParam1 = GET_CURRENT_GAME_TIME();
					}
				}
				else
				{
					*uParam0 = "";
					*uParam1 = 0.0f;
				}
			}
		}
	}
	return "";
}

bool Function_882(int iParam0) //Position: 0x385B6 / 230838
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_883(bool bParam0) //Position: 0x385D4 / 230868
{
	int iVar0;
	
	iVar0 = FIRE_CREATE_HANDLE();
	FIRE_CREATE_ON_ACTOR(iVar0, bParam0);
	FIRE_RELEASE_HANDLE(iVar0, 1);
	return;
}

void Function_884() //Position: 0x385EC / 230892
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	bool bVar11;
	
	switch (bLocal_1039)
	{
		case 0x00000007:
		case 0x00000008:
			bVar11 = Local_188.f_3012;
			fVar9 = 5.0f;
			break;
		
		case 0x00000065:
			bVar11 = Local_188.f_3012;
			fVar9 = 5.0f;
			break;
		
		default:
			bVar11 = bLocal_1313;
			fVar9 = 1.0f;
			break;
	}
	GET_POSITION(Global_34573, &vVar3);
	GET_OBJECT_POSITION(bVar11, &vVar0);
	fVar10 = (VDIST(vVar3, vVar0) * (1.0f - (fVar9 / 100.0f)));
	Function_493(StackVal, StackVal, StackVal, StackVal, vVar3, vVar0, fVar10);
	vVar6 = { StackVal, StackVal, Function_493(StackVal, StackVal, StackVal, StackVal, vVar3, vVar0, fVar10) };
	SET_OBJECT_POSITION(bLocal_1312, vVar6);
	return;
}

void Function_885(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x38675 / 231029
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

