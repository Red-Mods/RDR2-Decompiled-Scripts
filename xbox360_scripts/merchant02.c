//Decompiled with MagicRDR v1.0
//Function Count : 563
//Statics Count : 1296
//Natives Count : 791
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<2873> Local_4 = { 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_1281 = 0;
	Local_724 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_913 = 99;
	iLocal_914 = 6;
	Local_915 = 1000;
	while (Function_266())
	{
		Function_224();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x44 / 68
{
	Function_223(49165);
	Function_221(9);
	Function_220();
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ENABLE_NAV_STICK_INPUT(0, 1);
	SET_PLAYER_CONTROL_CONFIG(0, 0);
	SET_ACTOR_CAN_DEADEYE_TAG_ANYTHING(Global_34573, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_219(1);
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
	}
	SET_INFINITE_DEADEYE(0, 0);
	SET_MAX_DEADEYE_POINTS(0, 100.0f);
	SET_PLAYER_PERFECT_ACCURACY(Global_34573, 0);
	SET_CAN_ACTOR_HARDLOCK_NEUTRALS(Global_34573, 1);
	DECOR_SET_BOOL(Global_34573, "bThreeStrikes", false);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	if (bLocal_1242)
	{
		_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, 7, false);
		_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, 8, false);
		ACTOR_SET_WEAPON_AMMO(Global_34573, 4, fLocal_1219);
		ACTOR_SET_WEAPON_AMMO(Global_34573, 8, fLocal_1220);
	}
	if (SQUAD_IS_VALID(Local_4.f_232))
	{
		SQUAD_SET_FACTION(Local_4.f_232, 21);
		Function_218(Local_4.f_232);
		Function_217(Local_4.f_232, 1);
		Function_216(Local_4.f_232);
		Function_215(Local_4.f_232);
		Function_213(&Local_4 + 232, 1, 0);
	}
	if (IS_ACTOR_VALID(bLocal_1143))
	{
		DECOR_REMOVE(bLocal_1143, "Aguila");
		DESTROY_ACTOR(bLocal_1143);
	}
	AI_STOP_IGNORING_ACTORS();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	Function_212();
	Function_211();
	Function_210(bLocal_723);
	Function_210(Local_4);
	if (IS_SOUND_ID_VALID(bLocal_1266))
	{
		STOP_SOUND(bLocal_1266);
		RELEASE_SOUND_ID(bLocal_1266);
	}
	if (IS_SOUND_ID_VALID(bLocal_1267))
	{
		STOP_SOUND(bLocal_1267);
		RELEASE_SOUND_ID(bLocal_1267);
	}
	if (IS_SOUND_ID_VALID(bLocal_1268))
	{
		STOP_SOUND(bLocal_1268);
		RELEASE_SOUND_ID(bLocal_1268);
	}
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
	ENABLE_CURVE("rsdROAD_tum_arm_roaddetachedCurve2", true);
	UI_ENABLE("loadingspinner");
	if (bLocal_1080)
	{
		Function_186(bLocal_1081, 1, 1, 1, 0, 1, 1, 1);
		MEMORY_PREFER_RIDING(bLocal_1140, true);
		RESET_ANIM_SET_FOR_ACTOR(bLocal_1140, 0);
		Function_183(2, 0, 0, 1, 1);
		Function_182();
		Function_181(StackVal, StackVal, bLocal_1140, Function_182(), 131088, 3, 1, 1);
		SET_ACTOR_UPDATE_PRIORITY(bLocal_1140, false);
		SET_ACTOR_FACTION(bLocal_1140, 20);
		MEMORY_CONSIDER_AS(bLocal_1140, Global_34573, false);
	}
	else
	{
		Function_186(bLocal_1081, 1, 1, 1, 1, 1, 1, 1);
		Function_183(2, 1, 0, 1, 1);
	}
	Function_171();
	if (IS_ITERATOR_VALID(bLocal_922))
	{
		DESTROY_ITERATOR(bLocal_922);
	}
	Function_167(&bLocal_731);
	RELEASE_LAYOUT_REF(bLocal_723);
	if (bLocal_1080)
	{
		DECOR_SET_BOOL(Global_34573, "bBeatFadeIn", true);
		Function_24(Local_724, 1, 1, 1, 0);
	}
	else if (bLocal_1081)
	{
		Function_20(Local_724);
	}
	else
	{
		Function_2(Local_724);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x2A8 / 680
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x2C9 / 713
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x2E4 / 740
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x305 / 773
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x31B / 795
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

void Function_7(int iParam0) //Position: 0x3B7 / 951
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x3D8 / 984
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

void Function_9() //Position: 0x41E / 1054
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x437 / 1079
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x48A / 1162
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

struct<16> Function_12(int iParam0) //Position: 0x5AE / 1454
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x5D3 / 1491
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x5F3 / 1523
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x60A / 1546
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x625 / 1573
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x86C / 2156
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x895 / 2197
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

bool Function_19(int iParam0) //Position: 0x8B9 / 2233
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x8CE / 2254
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x8EC / 2284
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

struct<16> Function_22(int iParam0) //Position: 0x992 / 2450
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x9BC / 2492
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xC12 / 3090
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
		Function_162(&(Global_3422[iVar240]));
		Function_161(4194304);
		if (bParam3)
		{
			Function_113(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_107(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_113(iVar2, &uVar0, 0);
		}
		bVar1 = Function_106();
		if (bParam1)
		{
			Function_90(iVar2, bParam0, bVar1);
			Function_89();
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

void Function_25() //Position: 0xCFF / 3327
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

int Function_26(int iParam0, bool bParam1) //Position: 0xD2F / 3375
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

int Function_27(int iParam0) //Position: 0xD6C / 3436
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xD86 / 3462
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xD9C / 3484
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1093 / 4243
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

void Function_31(char* cParam0, int iParam1) //Position: 0x10FF / 4351
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x1136 / 4406
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

bool Function_33(var uParam0, int iParam1) //Position: 0x11AE / 4526
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x11C1 / 4545
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

int Function_35(int iParam0) //Position: 0x1262 / 4706
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x129F / 4767
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12B2 / 4786
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
		Function_85();
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
			Function_79(bParam0);
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

void Function_38(int iParam0, int iParam1) //Position: 0x14C4 / 5316
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x14FE / 5374
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

bool Function_40() //Position: 0x1540 / 5440
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x1549 / 5449
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

void Function_42() //Position: 0x159A / 5530
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

void Function_43() //Position: 0x15CD / 5581
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

void Function_44() //Position: 0x16D3 / 5843
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

void Function_45() //Position: 0x1706 / 5894
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

void Function_46() //Position: 0x1894 / 6292
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

void Function_47() //Position: 0x1A48 / 6728
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x1A56 / 6742
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

var Function_49() //Position: 0x1C47 / 7239
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1C5C / 7260
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1CF7 / 7415
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1F92 / 8082
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

bool Function_53() //Position: 0x25BF / 9663
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x25C7 / 9671
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x25D8 / 9688
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x26CD / 9933
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x26E6 / 9958
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x274B / 10059
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x275D / 10077
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x276F / 10095
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

int Function_61(int iParam0) //Position: 0x289F / 10399
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x28AE / 10414
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x28E7 / 10471
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x2924 / 10532
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2ABE / 10942
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

int Function_66(bool bParam0) //Position: 0x2CD8 / 11480
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2D19 / 11545
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

struct<8> Function_68() //Position: 0x2DA2 / 11682
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

struct<8> Function_69() //Position: 0x2E39 / 11833
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

void Function_70() //Position: 0x2EB8 / 11960
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2EDE / 11998
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

void Function_72() //Position: 0x30E8 / 12520
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

bool Function_73(vector3 vParam0) //Position: 0x3189 / 12681
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x31A1 / 12705
{
	int iVar0;
	
	iVar0 = Function_77(uParam2, uParam3);
	if (Function_76(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_75(&Global_63095, 1);
			Function_36(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_75(&Global_63095, 2);
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
		Function_75(&Global_63095, 2);
		Function_36(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_182();
	return StackVal, StackVal, Function_182();
}

void Function_75(bool bParam0, bool bParam1) //Position: 0x3288 / 12936
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_76(int iParam0) //Position: 0x3297 / 12951
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_77(bool bParam0, bool bParam1) //Position: 0x32AD / 12973
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
				fVar2 = Function_78(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_78(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_76(bVar0) && !bParam1)
	{
		bVar0 = Function_77(bParam0, 1);
	}
	return bVar0;
}

float Function_78(vector3 vParam0, vector3 vParam3) //Position: 0x3374 / 13172
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_79(bool bParam0) //Position: 0x3391 / 13201
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
				Function_84(12, 1, 0, 0);
				Function_83(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_84(13, 1, 0, 0);
				Function_83(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_84(14, 1, 0, 0);
				Function_83(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_84(15, 1, 0, 0);
				Function_83(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_84(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_13(bParam0))
			{
				case 0x00000000:
					if (Function_82(bParam0) == 1)
					{
						iVar0 = Function_81(bParam0);
						if (Function_80(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_83(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_83(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_83(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_83(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_83(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_83(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_83(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_83(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_83(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_83(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_83(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_83(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_83(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_83(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_83(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_83(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_83(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_83(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_83(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_83(4, 19);
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
								Function_84(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_84(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_84(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_81(bParam0) == 0)
			{
				if (Function_82(bParam0) == 1)
				{
					Function_84(458, 1, 0, 0);
					iVar0 = Function_13(bParam0);
					if (Function_80(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_83(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_83(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_83(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_83(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_83(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_83(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_83(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_83(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_82(bParam0) == 1)
			{
				Function_84(400, 1, 0, 0);
			}
			switch (Function_13(bParam0))
			{
				case 0x00000001:
					Function_84(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_83(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_83(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_83(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_84(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_83(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_83(6, 9);
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

bool Function_80(int iParam0) //Position: 0x386D / 14445
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_81(bool bParam0) //Position: 0x3883 / 14467
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_82(bool bParam0) //Position: 0x38A2 / 14498
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_83(int iParam0, bool bParam1) //Position: 0x38BC / 14524
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

int Function_84(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3923 / 14627
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

void Function_85() //Position: 0x3B43 / 15171
{
	int iVar0;
	int iVar1;
	
	if (!Function_28(Global_6269))
	{
		return;
	}
	iVar0 = Function_66(24);
	iVar1 = Function_27(Global_6269);
	if (!Function_28(iVar0) && Function_88(iVar1) < 0)
	{
		Function_51(24, Global_6269, 0);
		Function_86(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_88(Function_27(iVar0)))
	{
		Function_51(24, Global_6269, 0);
		Function_86(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_86(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3BC3 / 15299
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
		Function_87(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_87(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3F15 / 16149
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

int Function_88(int iParam0) //Position: 0x3F98 / 16280
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_89() //Position: 0x3FB2 / 16306
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

void Function_90(int iParam0, int iParam1, bool bParam2) //Position: 0x3FE0 / 16352
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
		iVar14 = Function_105(iParam0);
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
		iVar15 = Function_104(iParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_91(50, 1, 0);
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

void Function_91(int iParam0, bool bParam1, bool bParam2) //Position: 0x427D / 17021
{
	int iVar0;
	bool bVar1;
	
	if (Function_103(0) && (!Global_3380 || iParam0 == 100))
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
	Function_100();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_98(3, bVar1);
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
		Function_84(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_62(3));
	iVar0 = Function_66(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_93(4, Function_97(Global_12976.f_156), 1);
				Function_92(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_93(4, Function_97(Global_12976.f_156), 1);
				Function_92(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_93(4, Function_97(Global_12976.f_156), 1);
				Function_92(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_93(4, Function_97(Global_12976.f_156), 1);
				Function_92(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_93(4, Function_97(Global_12976.f_156), 1);
				Function_92(Global_12976.f_152, Global_12976.f_156);
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

void Function_92(int iParam0, int iParam1) //Position: 0x4440 / 17472
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

int Function_93(int iParam0, char* cParam1, bool bParam2) //Position: 0x469E / 18078
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
	Function_86(iParam0, cParam1, 0, 1);
	iVar1 = Function_94();
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

int Function_94() //Position: 0x4823 / 18467
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
	Function_95();
	return 0;
}

void Function_95() //Position: 0x48C2 / 18626
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
		Function_96(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_96(int iParam0) //Position: 0x4971 / 18801
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

var Function_97(int iParam0) //Position: 0x49CF / 18895
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

int Function_98(int iParam0, bool bParam1) //Position: 0x4A5E / 19038
{
	bool bVar0;
	int iVar1;
	
	Function_84(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_99(iParam0, 4294967295);
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
	iVar1 = Function_94();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_99(int iParam0, int iParam1) //Position: 0x4BFB / 19451
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

void Function_100() //Position: 0x4C3C / 19516
{
	Function_102(3, 0.0f);
	Function_101(3, 10000.0f);
	return;
}

int Function_101(int iParam0, int iParam1) //Position: 0x4C52 / 19538
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4C92 / 19602
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_103(int iParam0) //Position: 0x4CD2 / 19666
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_104(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4CE1 / 19681
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

int Function_105(int iParam0) //Position: 0x4EA9 / 20137
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

var Function_106() //Position: 0x4F3E / 20286
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_107(int iParam0) //Position: 0x4F63 / 20323
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
			Function_91(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_91(25, 1, 0);
			Function_112(1, 1);
			break;
		
		case 0x00000015:
			Function_112(50, 1);
			Function_91(250, 1, 0);
			Function_108(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_91(75, 1, 0);
			Function_108(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_91(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_112(50, 1);
			Function_91(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_112(5, 1);
			Function_108(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_91(75, 1, 0);
			Function_108(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_112(5, 1);
			Function_91(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_91(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_112(25, 1);
			Function_91(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_112(10, 1);
			Function_91(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_91(50, 1, 0);
			Function_108(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_91(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_91(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_108(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_112(20, 1);
			Function_91(75, 1, 0);
			Function_108(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_112(25, 1);
			Function_91(150, 1, 0);
			Function_108(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_112(10, 1);
			Function_91(150, 1, 0);
			Function_108(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_91(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_108(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_108(100, 1, 0);
			Function_112(5, 1);
			break;
		
		case 0x0000000F:
			Function_112(3, 1);
			Function_91(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_108(125, 1, 0);
			Function_91(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_112(50, 1);
			Function_91(100, 1, 0);
			Function_108(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_112(50, 1);
			Function_91(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_112(75, 1);
			Function_91(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_91(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_91(75, 1, 0);
			Function_108(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_91(250, 1, 0);
			Function_108(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_91(75, 1, 0);
			Function_108(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_91(200, 1, 0);
			Function_108(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_91(75, 1, 0);
			Function_108(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_91(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_112(50, 1);
			Function_91(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_112(100, 1);
			Function_91(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_91(200, 1, 0);
			Function_108(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_91(300, 1, 0);
			Function_108(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_91(300, 1, 0);
			Function_108(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_91(300, 1, 0);
			Function_108(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_91(500, 1, 0);
			Function_108(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_91(150, 1, 0);
			Function_108(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_108(25, 1, 0);
			Function_112(100, 1);
			break;
		
		case 0x0000002A:
			Function_91(150, 1, 0);
			Function_108(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_108(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_108(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_108(150, 1, 0);
			Function_112(100, 1);
			break;
		
		case 0x00000035:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_108(150, 1, 0);
			Function_112(100, 1);
			break;
		
		case 0x00000032:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_108(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_108(int iParam0, bool bParam1, bool bParam2) //Position: 0x541E / 21534
{
	int iVar0;
	bool bVar1;
	
	if (Function_103(0) && !Global_3380)
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
			Function_98(1, bVar1);
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
			Function_111(1, (4294967295 * bVar1));
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
		Function_84(1, bVar1, 0, 0);
	}
	else
	{
		Function_110(1, (4294967295 * bVar1), 0);
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
				Function_93(2, Function_109(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_93(2, Function_109(Global_12976.f_152), 0);
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
				Function_93(2, Function_109(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_93(2, Function_109(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_93(2, Function_109(Global_12976.f_152), 1);
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
				Function_93(2, Function_109(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_93(2, Function_109(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_93(2, Function_109(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_93(2, Function_109(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_93(2, Function_109(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_93(2, Function_109(Global_12976.f_152), 1);
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
				Function_93(2, Function_109(Global_12976.f_152), 0);
			}
			break;
	}
	Function_92(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_109(int iParam0) //Position: 0x5733 / 22323
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

int Function_110(int iParam0, bool bParam1, int iParam2) //Position: 0x57D6 / 22486
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

int Function_111(int iParam0, bool bParam1) //Position: 0x59D1 / 22993
{
	bool bVar0;
	int iVar1;
	
	Function_110(iParam0, bParam1, 0);
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
	iVar1 = Function_99(iParam0, 4294967295);
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
	iVar1 = Function_94();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_112(bool bParam0, bool bParam1) //Position: 0x5B6D / 23405
{
	bool bVar0;
	
	bVar0 = Function_66(0);
	if ((Function_66(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_84(0, bParam0, 0, 0);
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
		Function_84(597, bParam0, 0, 0);
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

void Function_113(int iParam0, var uParam1, bool bParam2) //Position: 0x5C38 / 23608
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
			Function_159(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_156(Global_30640[0]);
			Function_156(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_154(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_156(Global_30668[0]);
			Function_145(0);
			Function_143(2, 1);
			Function_143(0, 1);
			Function_143(1, 1);
			break;
		
		case 0x00000003:
			Function_156(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_156(Global_30668[0]);
			Function_156(Global_30640[0]);
			Function_141(0, 1);
			Function_141(15, 1);
			Function_141(9, 1);
			Function_141(12, 1);
			Function_141(16, 1);
			Function_143(3, 1);
			break;
		
		case 0x00000005:
			Function_156(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_154(21, bParam2, 4);
			Function_156(Global_30668[0]);
			Function_143(39, 1);
			break;
		
		case 0x00000007:
			Function_156(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_156(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_140(4))
					{
						Function_130(4, 0, 0, 1);
					}
				}
			}
			Function_156(Global_30640[0]);
			Function_156(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_156(Global_30640[0]);
			Function_156(Global_30668[2]);
			Function_129(&(Global_29008[Global_30668[2]]), 32768);
			Function_128(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_154(9, bParam2, 4);
			Function_156(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_156(Global_30640[0]);
			Function_156(Global_30658[0]);
			Function_129(&(Global_29008[Global_30658[0]]), 32768);
			Function_128(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_156(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_156(Global_30640[0]);
			Function_156(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_156(Global_30640[1]);
			Function_156(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_156(Global_30679[0]);
			Function_156(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_156(Global_30658[5]);
			Function_156(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_154(21, bParam2, 4);
			Function_156(Global_30640[4]);
			Function_156(Global_30658[4]);
			Function_127(&Global_76847, 0x2000000);
			Function_127(&Global_76847, 0x4000000);
			Function_127(&Global_76847, 4096);
			Function_127(&Global_76847, 8);
			Function_127(&Global_76847, 8388608);
			Function_127(&Global_76847, 524288);
			Function_127(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_156(Global_30640[4]);
			Function_156(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_128(&(Global_29008[Global_30640[4]]), 256);
			Function_156(Global_30640[4]);
			Function_156(Global_30658[0]);
			Function_129(&(Global_29008[Global_30658[0]]), 32768);
			Function_128(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_156(Global_30640[0]);
			Function_156(Global_30640[5]);
			Function_154(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_156(Global_30658[3]);
			Function_129(&(Global_29008[Global_30658[3]]), 32768);
			Function_128(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_154(9, bParam2, 4);
			Function_156(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_129(&(Global_29008[Global_30679[1]]), 32768);
			Function_156(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_154(12, bParam2, 4);
			Function_128(&(Global_29008[Global_30679[1]]), 256);
			Function_156(Global_30668[3]);
			Function_156(Global_30693[0]);
			Function_156(Global_30685[0]);
			Function_145(4);
			Function_141(13, 1);
			Function_141(1, 1);
			Function_141(18, 1);
			Function_143(34, 1);
			Function_143(44, 1);
			Function_143(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_154(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_156(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_156(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_156(Global_30693[0]);
			Function_156(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_156(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_156(Global_30685[0]);
			Function_156(Global_30693[0]);
			Function_156(Global_30693[1]);
			Function_156(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_154(23, bParam2, 3);
			Function_141(23, 1);
			Function_156(Global_30685[0]);
			Function_156(Global_30685[2]);
			Function_129(&(Global_29008[Global_30685[2]]), 32768);
			Function_128(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_154(19, bParam2, 4);
			Function_156(Global_30685[0]);
			Function_156(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_154(24, bParam2, 3);
			Function_141(24, 1);
			Function_156(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_156(Global_30685[0]);
			Function_156(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_156(Global_30693[12]);
			Function_156(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_156(Global_30693[12]);
			Function_156(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_154(25, bParam2, 10);
			Function_156(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_156(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_156(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_154(13, bParam2, 4);
			Function_156(Global_30693[2]);
			Function_156(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_140(8))
				{
					Function_130(8, 0, 0, 1);
				}
			}
			Function_156(Global_30685[0]);
			Function_145(9);
			Function_141(7, 1);
			Function_141(11, 1);
			Function_141(3, 1);
			Function_141(20, 1);
			Function_143(57, 1);
			break;
		
		case 0x0000002A:
			Function_154(2, bParam2, 4);
			Function_156(Global_30717[0]);
			Function_156(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_156(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_156(Global_30717[0]);
			Function_156(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_156(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_156(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_156(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_154(17, bParam2, 4);
			Function_156(Global_30723[0]);
			Function_156(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_125(15))
				{
					Function_120(15, 0, 1);
				}
			}
			Function_128(&(Global_29008[Global_30717[1]]), 256);
			Function_145(11);
			Function_156(Global_30717[1]);
			Function_156(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_156(Global_30717[1]);
			Function_156(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_156(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_156(Global_30717[1]);
			Function_114(11);
			Function_145(12);
			Global_16537[1121].f_40 = 0;
			Function_143(56, 1);
			if (!bParam2)
			{
				if (!Function_140(9))
				{
					Function_130(9, 0, 0, 0);
				}
				if (!Function_140(10))
				{
					Function_130(10, 0, 0, 1);
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

void Function_114(int iParam0) //Position: 0x6528 / 25896
{
	bool bVar0;
	
	if (!Function_76(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_119(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_119(Global_16537[iParam021].f_72, 0);
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
			Function_115(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_115(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6697 / 26263
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
		Function_117(Function_118(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_117(Function_118(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_117(StackVal);
				vVar1 = { StackVal, StackVal, Function_117(StackVal) };
				if (Function_116(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_116(vector3 vParam0, vector3 vParam3) //Position: 0x679D / 26525
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_117(int iParam0) //Position: 0x67CA / 26570
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

var Function_118(vector3 vParam0) //Position: 0x6821 / 26657
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

void Function_119(bool bParam0, bool bParam1) //Position: 0x686F / 26735
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

void Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x68C3 / 26819
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
		if (!Function_140(bParam0))
		{
			Function_130(bParam0, 1, 0, 0);
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
		Function_84(457, 1, 0, 0);
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

void Function_121() //Position: 0x6A61 / 27233
{
	return;
}

bool Function_122(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6A67 / 27239
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

void Function_123(bool bParam0, int iParam1) //Position: 0x6B0B / 27403
{
	if (!Function_124(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_124(int iParam0) //Position: 0x6B60 / 27488
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_125(int iParam0) //Position: 0x6B76 / 27510
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

bool Function_126(int iParam0, int iParam1) //Position: 0x6BC7 / 27591
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

void Function_127(var uParam0, int iParam1) //Position: 0x6BF4 / 27636
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_128(var uParam0, int iParam1) //Position: 0x6C03 / 27651
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6C1A / 27674
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_130(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6C29 / 27689
{
	struct<8> Var0;
	
	if (!Function_124(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_139(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_140(bParam0))
	{
		Function_84(456, 1, 0, 0);
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
		Function_133(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_132() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_132() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_131(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_33(Global_76846, 2))
		{
			Function_30(Global_34573, 2, 1, 0);
		}
	}
}

void Function_131(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6D73 / 28019
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

bool Function_132() //Position: 0x6DBE / 28094
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_133(bool bParam0) //Position: 0x6DEB / 28139
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
			if (Function_137(bParam0, Function_138(bVar24)))
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
			if (Function_137(bParam0, Function_138(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_136(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_135(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_134(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_134(int iParam0) //Position: 0x6F9B / 28571
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

void Function_135(bool bParam0, bool bParam1) //Position: 0x6FF2 / 28658
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

var Function_136(int iParam0) //Position: 0x7017 / 28695
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

bool Function_137(bool bParam0, bool bParam1) //Position: 0x706D / 28781
{
	int iVar0;
	
	if (!Function_124(bParam0))
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

bool Function_138(bool bParam0) //Position: 0x70CC / 28876
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_139(int iParam0) //Position: 0x70D8 / 28888
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_140(int iParam0) //Position: 0x70F4 / 28916
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

int Function_141(int iParam0, int iParam1) //Position: 0x7146 / 28998
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_142(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_142(int iParam0, int iParam1) //Position: 0x71B9 / 29113
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_143(int iParam0, int iParam1) //Position: 0x7215 / 29205
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_144(iParam0, iParam1);
	Function_30(Global_34573, 1, 4, 1);
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x7286 / 29318
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_145(int iParam0) //Position: 0x72E0 / 29408
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_76(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_153(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_153(Global_16537[iParam021].f_72, 0);
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
			Function_84(468, 1, 0, 0);
			Function_83(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_131("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_115(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_130(14, 1, 0, 0);
				Function_146(14, 1, 0, 0, 0);
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
			Function_131("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_84(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_83(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_146(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x758C / 30092
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
	if (!Function_139(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_126(bParam0, 2))
	{
		Function_84(456, 1, 0, 0);
		Function_123(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_131(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_137(bParam0, bParam1))
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
		Function_133(bParam0);
		if (StackVal && !Function_152(((((!Function_132() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_152((((Function_132() || Global_3380) || Global_3392) || Global_3384), 1))
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
			Function_148();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_147(3, bParam1);
				break;
			
			case 0x00000005:
				Function_147(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_147(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_147(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_147(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_147(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_83(2, 24);
				break;
			
			case 0x00000003:
				Function_83(2, 25);
				break;
			
			case 0x0000000F:
				Function_83(2, 26);
				break;
			
			case 0x0000000D:
				Function_83(2, 27);
				break;
			
			case 0x0000000E:
				Function_83(2, 28);
				break;
			}
	}
}

void Function_147(int iParam0, bool bParam1) //Position: 0x781B / 30747
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

void Function_148() //Position: 0x787A / 30842
{
	if (Function_124(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_151(Global_28180);
			Global_28180.f_8 = Function_149(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_151(Global_28180);
			Global_28180.f_8 = Function_149(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_149(int iParam0, int iParam1) //Position: 0x78F5 / 30965
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
					if (Function_150(13) && iVar16)
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
					if (Function_150(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_150(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_150(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_150(23) && iVar17)
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
					if (Function_150(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_150(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_150(27) && iVar18)
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
					if (Function_150(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_150(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_150(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_150(49) && iVar15)
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
					if (Function_150(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(6, 0) && Function_150(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_150(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_26(9, 0) && Function_150(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_150(15) && iVar19)
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

int Function_150(int iParam0) //Position: 0x84E9 / 34025
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_151(int iParam0) //Position: 0x84FE / 34046
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

bool Function_152(bool bParam0, bool bParam1) //Position: 0x854D / 34125
{
	return (bParam0 && bParam1) == 0;
}

void Function_153(bool bParam0, bool bParam1) //Position: 0x855A / 34138
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

void Function_154(bool bParam0, bool bParam1, int iParam2) //Position: 0x85AB / 34219
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_155(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_159(bParam0, 0, 0);
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

bool Function_155(int iParam0, int iParam1) //Position: 0x8619 / 34329
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_156(int iParam0) //Position: 0x862C / 34348
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_158(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_129(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_84(473, 1, 0, 0);
		iVar0 = Function_157(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_84(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_84(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_84(476, 1, 0, 0);
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
		Function_83(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_83(7, 30);
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

var Function_157(int iParam0) //Position: 0x872B / 34603
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_80(iParam0))
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

bool Function_158(var uParam0, int iParam1) //Position: 0x8783 / 34691
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_159(bool bParam0, bool bParam1, int iParam2) //Position: 0x879F / 34719
{
	if (!Function_160(bParam0))
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

bool Function_160(int iParam0) //Position: 0x87F6 / 34806
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_161(bool bParam0) //Position: 0x8808 / 34824
{
	bool bVar0;
	
	if (Function_152(bParam0, 1) && Function_152(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_162(int iParam0) //Position: 0x883C / 34876
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
			Function_163(4, 0, 0);
		}
	}
	return;
}

void Function_163(bool bParam0, bool bParam1, bool bParam2) //Position: 0x88A3 / 34979
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
		Function_164(Global_16524, bVar0, 1);
	}
	return;
}

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8980 / 35200
{
	int iVar0;
	
	Function_166(bParam0);
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
	Function_165();
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

void Function_165() //Position: 0x8AF9 / 35577
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_166(int iParam0) //Position: 0x8B05 / 35589
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

void Function_167(bool bParam0) //Position: 0x8B4B / 35659
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_168(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_168(var uParam0, int iParam1) //Position: 0x8B71 / 35697
{
	if (Function_170(uParam0[iParam13], 4))
	{
		if (Function_170(uParam0[iParam13], 1))
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
			Function_169(uParam0[iParam13], 1);
			Function_169(uParam0[iParam13], 2);
			Function_169(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_169(var uParam0, int iParam1) //Position: 0x8C9F / 35999
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_170(int iParam0, int iParam1) //Position: 0x8CB9 / 36025
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_171() //Position: 0x8CD6 / 36054
{
	Function_172();
	return;
}

void Function_172() //Position: 0x8CDF / 36063
{
	Function_167(&Local_4 + 4);
	Function_173(&Global_6364, &Global_7287, 1, 0);
	Function_173(&Global_6364, &Global_7287, 2, 0);
	Function_173(&Global_6364, &Global_7287, 3, 0);
	Function_173(&Global_6364, &Global_7287, 4, 0);
	Function_173(&Global_6364, &Global_7287, 5, 0);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_173(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x8D28 / 36136
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_180(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_180(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_180(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_179(uParam0[iVar02], 8);
	}
	Function_179(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_178(StackVal);
	if (bParam3)
	{
		Function_174(uParam0, uParam1, iParam2, 0);
	}
}

void Function_174(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x8DC2 / 36290
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_177(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_176(Global_29007), Function_175(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_180(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_180(uParam0[iParam22], 1) && !bParam3)
	{
		Function_177(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_176(Global_29007), Function_175(Global_29007), false, 0);
	}
}

int Function_175(int iParam0) //Position: 0x8F11 / 36625
{
	switch (iParam0)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			return 0;
			break;
		
		default:
			return 12;
			break;
	}
	return 0;
}

int Function_176(int iParam0) //Position: 0x8F3C / 36668
{
	switch (iParam0)
	{
		case 0x00000003:
			return 5;
			break;
		
		case 0x00000004:
			return 3;
			break;
		
		case 0x00000005:
			break;
			return 1;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_177(var uParam0, int iParam1) //Position: 0x8F70 / 36720
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_178(bool bParam0) //Position: 0x8F7F / 36735
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

void Function_179(var uParam0, int iParam1) //Position: 0x9019 / 36889
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_180(var uParam0, bool bParam1) //Position: 0x9030 / 36912
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_181(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x904C / 36940
{
	if (!IS_OBJECTSET_VALID(Global_28842.f_60))
	{
		Global_28842.f_60 = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", Global_28841, 15, 1);
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam4 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideCurve", bParam4);
	}
	if (!Function_73(StackVal, StackVal, vParam1))
	{
		DECOR_SET_VECTOR(bParam0, "overrideDest", vParam1);
	}
	if (bParam5 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideSpeed", bParam5);
	}
	if (bParam6 != 2)
	{
		DECOR_SET_INT(bParam0, "overridePriority", bParam6);
	}
	else
	{
		TASK_PRIORITY_SET(bParam0, 2);
	}
	if (bParam7)
	{
		DECOR_SET_INT(bParam0, "quickRelease", bParam6);
	}
	if (!IS_OBJECT_IN_OBJECTSET(bParam0, Global_28842.f_60))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam0, Global_28842.f_60);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
}

vector3 Function_182() //Position: 0x9154 / 37204
{
	return 0.0f, 0.0f, 0.0f;
}

int Function_183(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x915D / 37213
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
		Function_185(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_184(StackVal);
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

void Function_184(bool bParam0) //Position: 0x947B / 38011
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

void Function_185(bool bParam0) //Position: 0x94A7 / 38055
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_186(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x94BC / 38076
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_209());
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
	Function_208();
	CLEAR_PRINTED_OBJECTIVE();
	Function_207();
	Function_205(0);
	Function_204();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_203();
	Function_202();
	Function_208();
	ENABLE_JOURNAL_REPLAY(1);
	Function_201(1);
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
		Function_200(Global_34573);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 0);
	}
	if (IS_ACTOR_VALID(Global_34573) && iParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 1.0f);
	Function_199(Global_28178);
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
	Function_223(1178687);
	Function_221(33039);
	Function_198(0x218003f);
	Function_197(4194560);
	Function_196();
	Function_195();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_192(0, 1, 1);
	}
	else
	{
		Function_192(0, 1, 1);
	}
	Function_191();
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
	Function_187();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_187() //Position: 0x96AD / 38573
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
		if (Function_190() > 3)
		{
			bVar0 *= 2;
		}
		Function_188(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_188(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x9703 / 38659
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_189((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_189(bool bParam0) //Position: 0x9749 / 38729
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_190() //Position: 0x976E / 38766
{
	return Global_12976.f_156;
}

void Function_191() //Position: 0x9779 / 38777
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_128(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_192(int iParam0, bool bParam1, int iParam2) //Position: 0x97A3 / 38819
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
		if (Function_80(Global_29006))
		{
			Function_129(&(Global_29008[Global_29006]), 131072);
			Function_128(&(Global_29008[Global_29006]), 2097152);
			Function_193(Global_29006);
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
				if (Function_158(&(Global_29008[iVar0]), 4) || Function_158(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_128(&(Global_29008[iVar0]), 2097155);
					Function_129(&(Global_29008[iVar0]), 262144);
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

void Function_193(int iParam0) //Position: 0x98AE / 39086
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_194())
			{
				return;
			}
		}
		if (!Function_158(&(Global_29008[iParam0]), 2048))
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

bool Function_194() //Position: 0x992D / 39213
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_158(&(Global_29008[iVar0]), 4) || Function_158(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_195() //Position: 0x998A / 39306
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

void Function_196() //Position: 0x99B0 / 39344
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

void Function_197(int iParam0) //Position: 0x99D6 / 39382
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_198(int iParam0) //Position: 0x99F3 / 39411
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_199(int iParam0) //Position: 0x9A06 / 39430
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

void Function_200(bool bParam0) //Position: 0x9ACD / 39629
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

void Function_201(bool bParam0) //Position: 0x9B49 / 39753
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

void Function_202() //Position: 0x9BBD / 39869
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

void Function_203() //Position: 0x9BFE / 39934
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

void Function_204() //Position: 0x9C3F / 39999
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_205(int iParam0) //Position: 0x9C53 / 40019
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_206())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_206() //Position: 0x9C8F / 40079
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

void Function_207() //Position: 0x9CB4 / 40116
{
	Global_8722 = 0.0f;
	return;
}

void Function_208() //Position: 0x9CBE / 40126
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

int Function_209() //Position: 0x9CE9 / 40169
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_210(bool bParam0) //Position: 0x9D03 / 40195
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

void Function_211() //Position: 0x9D5B / 40283
{
	if (IS_OBJECT_VALID(Global_26400))
	{
		if (DECOR_CHECK_EXIST(Global_26400, "crimeInMonitorVolume"))
		{
			DECOR_REMOVE(Global_26400, "crimeInMonitorVolume");
		}
	}
	Global_26400 = "";
	return;
}

void Function_212() //Position: 0x9DAD / 40365
{
	int iVar0;
	
	if (IS_OBJECT_VALID(bLocal_1155))
	{
		DESTROY_OBJECT(bLocal_1155);
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (IS_OBJECT_VALID(bLocal_1148[iVar0]))
		{
			DESTROY_OBJECT(bLocal_1148[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_213(var uParam0, bool bParam1, bool bParam2) //Position: 0x9DEB / 40427
{
	bool bVar0;
	bool bVar1;
	
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
			if (bParam2)
			{
				if (!Function_214(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_214(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x9E67 / 40551
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_215(bool bParam0) //Position: 0x9E81 / 40577
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

void Function_216(bool bParam0) //Position: 0x9EB3 / 40627
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
				RESET_ANIM_SET_FOR_ACTOR(bVar1, 1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_217(bool bParam0, int iParam1) //Position: 0x9EEE / 40686
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
				SET_ALLOW_EXECUTE(bVar1, iParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_218(bool bParam0) //Position: 0x9F2A / 40746
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
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_219(bool bParam0) //Position: 0x9F5F / 40799
{
	if (bParam0)
	{
	}
	SET_EQUIP_SLOT_ENABLED(Global_34573, 0, bParam0);
	SET_EQUIP_SLOT_ENABLED(Global_34573, 2, bParam0);
	SET_EQUIP_SLOT_ENABLED(Global_34573, 3, bParam0);
	SET_EQUIP_SLOT_ENABLED(Global_34573, 4, bParam0);
	SET_EQUIP_SLOT_ENABLED(Global_34573, 5, bParam0);
	SET_EQUIP_SLOT_ENABLED(Global_34573, 6, bParam0);
	return;
}

void Function_220() //Position: 0x9FA3 / 40867
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_221(int iParam0) //Position: 0x9FB8 / 40888
{
	Function_222(&Global_28842, iParam0);
	return;
}

void Function_222(var uParam0, int iParam1) //Position: 0x9FC6 / 40902
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_223(bool bParam0) //Position: 0x9FE1 / 40929
{
	if (Function_152(bParam0, 1) && !Function_152(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_224() //Position: 0xA00E / 40974
{
	var uVar0[9];
	int iVar10;
	bool bVar11;
	vector3 vVar12;
	vector3 vVar15;
	
	if (Function_265())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "2 - Arrive at Ridgewood";
		uVar0[4] = "n3 - Skull";
		uVar0[5] = "4 - Hat";
		uVar0[6] = "n5 - Fight";
		uVar0[7] = "6 - Deadeye";
		uVar0[8] = "Skip Near Ridgewood";
		iVar10 = Function_251(&uLocal_906, &uVar0, &Local_724 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_250(&iVar10, &bLocal_913, &iLocal_914, &Local_915))
		{
			Function_243();
			Function_220();
		}
		if (iVar10 == 0)
		{
			Function_243();
			Function_220();
			Function_242(&bLocal_1080, 8);
			Local_915 = 1000;
		}
		else if (iVar10 == 1)
		{
			Function_243();
			Function_220();
			Function_237(bLocal_913);
			Function_233(StackVal, StackVal, 5, &bLocal_1081, &bLocal_913, Function_240(bLocal_913), Function_237(bLocal_913), 0);
			Local_915 = 1000;
		}
		else if (iVar10 == 2)
		{
			Function_243();
			Function_220();
			Function_228(&bLocal_1082, 4);
		}
		else if (iVar10 == 3)
		{
			Function_243();
			Function_220();
			Function_226(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			bLocal_913 = true;
			iLocal_914 = 0;
			Local_915 = 1000;
		}
		else if (iVar10 == 4)
		{
			Function_243();
			Function_220();
			Function_226(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			bLocal_913 = 2;
			iLocal_914 = 0;
			Local_915 = 1000;
		}
		else if (iVar10 == 5)
		{
			Function_243();
			Function_220();
			Function_226(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			bLocal_913 = 3;
			iLocal_914 = 0;
			Local_915 = 1000;
		}
		else if (iVar10 == 6)
		{
			Function_243();
			Function_220();
			Function_226(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			bLocal_913 = 4;
			iLocal_914 = 0;
			Local_915 = 1000;
		}
		else if (iVar10 == 7)
		{
			Function_243();
			Function_220();
			Function_226(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			bLocal_913 = 5;
			iLocal_914 = 0;
			Local_915 = 1000;
		}
		else if (iVar10 == 8)
		{
			Function_243();
			Function_220();
			iLocal_1239 = 1;
			ABORT_SCRIPTED_CONVERSATION(0);
			if (!IS_ACTOR_INSIDE_VEHICLE(Global_34573))
			{
				SET_ACTOR_IN_VEHICLE(Global_34573, bLocal_1142, false);
			}
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1142, *(&Local_4 + 2840[06]), 1, true, 1);
		}
		if (bLocal_1278)
		{
			SET_DEBUG_DRAW(1);
			bVar11 = false;
			while (bVar11 <= SQUAD_GET_SIZE(Local_4.f_232))
			{
				Function_225(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar11));
				vVar12 = { StackVal, StackVal, Function_225(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar11)) };
				bVar11++;
			}
			bVar11 = false;
			while (bVar11 <= SQUAD_GET_SIZE(Local_4.f_304))
			{
				Function_225(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_304, bVar11));
				vVar15 = { StackVal, StackVal, Function_225(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_304, bVar11)) };
				bVar11++;
			}
		}
	}
	return;
}

vector3 Function_225(bool bParam0) //Position: 0xA2B2 / 41650
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_226(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xA2C3 / 41667
{
	Function_227(fParam0, fParam1, fParam2, fParam3, fParam4, iParam5);
}

void Function_227(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xA2DA / 41690
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

void Function_228(bool bParam0, int iParam1) //Position: 0xA303 / 41731
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_229(iParam1);
	*bParam0 = 1;
	return;
}

void Function_229(int iParam0) //Position: 0xA326 / 41766
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_232("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_231(2) || Function_231(8)) || Function_231(9)) || Function_231(10))
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
		Function_232("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_232("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_232("");
	}
	else if (iParam0 == 8)
	{
		Function_230();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_230();
	}
	return;
}

void Function_230() //Position: 0xA41D / 42013
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_231(int iParam0) //Position: 0xA429 / 42025
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

void Function_232(bool bParam0) //Position: 0xA45F / 42079
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_233(int iParam0, bool bParam1, bool bParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA4C9 / 42185
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*bParam2 != 100)
	{
		Function_234(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_229(iParam0);
		*bParam1 = 1;
		*bParam2 = 100;
	}
}

void Function_234(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA506 / 42246
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_236(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_235(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_235(int iParam0) //Position: 0xA589 / 42377
{
	if (!Function_80(iParam0))
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

var Function_236(vector3 vParam0, bool bParam3) //Position: 0xAA37 / 43575
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

vector3 Function_237(bool bParam0) //Position: 0xAAA2 / 43682
{
	Function_238(bParam0 + 1);
	return StackVal, StackVal, Function_238(bParam0 + 1);
}

vector3 Function_238(bool bParam0) //Position: 0xAAAF / 43695
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_239((*&Local_4 + 492)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 492)[0]);
			break;
		
		case 0x00000001:
			Function_239((*&Local_4 + 616)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 616)[0]);
			break;
		
		case 0x00000002:
			Function_239((*&Local_4 + 1024)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 1024)[0]);
			break;
		
		case 0x00000003:
			Function_239((*&Local_4 + 1392)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 1392)[0]);
			break;
		
		case 0x00000004:
			Function_239((*&Local_4 + 1800)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 1800)[0]);
			break;
		
		case 0x00000005:
			Function_239((*&Local_4 + 2044)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 2044)[0]);
			break;
		
		default:
			Function_239((*&Local_4 + 2244)[0]);
			return StackVal, StackVal, Function_239((*&Local_4 + 2244)[0]);
			break;
	}
	Function_239((*&Local_4 + 2244)[0]);
	return StackVal, StackVal, Function_239((*&Local_4 + 2244)[0]);
}

vector3 Function_239(bool bParam0) //Position: 0xAB54 / 43860
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

int Function_240(bool bParam0) //Position: 0xAB7B / 43899
{
	return Function_241(bParam0 + 1);
}

int Function_241(bool bParam0) //Position: 0xAB88 / 43912
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 492)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 616)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 1024)[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 1392)[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_4 + 1800)[0]);
			break;
		
		case 0x00000005:
			return GET_OBJECT_HEADING((*&Local_4 + 2044)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 2244)[0]);
			break;
	}
	return GET_OBJECT_HEADING((*&Local_4 + 2244)[0]);
}

void Function_242(bool bParam0, int iParam1) //Position: 0xAC2D / 44077
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_229(iParam1);
	*bParam0 = 1;
	return;
}

void Function_243() //Position: 0xAC50 / 44112
{
	Function_245();
	Function_244(10, 3);
	return;
}

void Function_244(int iParam0, int iParam1) //Position: 0xAC5F / 44127
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

void Function_245() //Position: 0xAD96 / 44438
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_249())
	{
		Function_248(10, 3);
	}
	else
	{
		Function_246();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_246() //Position: 0xADE1 / 44513
{
	Function_247(25, 2);
	return;
}

void Function_247(int iParam0, int iParam1) //Position: 0xADED / 44525
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

void Function_248(int iParam0, int iParam1) //Position: 0xAFEB / 45035
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

bool Function_249() //Position: 0xB122 / 45346
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
				if (!Function_152(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_250(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB189 / 45449
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_243();
			Function_220();
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
		Function_232("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_251(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB22F / 45615
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_264(&Var15, &Var0);
	uVar20 = Function_263(*uParam1, &Var15);
	Function_262(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_261(uParam0, uVar20);
	Function_259(StackVal, uParam0, Var15.f_12);
	Function_257(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_256(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_253(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_252(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_252(int iParam0, int iParam1, int iParam2) //Position: 0xB2F6 / 45814
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

bool Function_253(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB352 / 45906
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
				Function_255(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_255(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_252(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_254(bParam1->f_32);
	}
	else
	{
		Function_254(bParam1->f_32);
	}
	return 0;
}

void Function_254(bool bParam0) //Position: 0xB4D8 / 46296
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

void Function_255(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB512 / 46354
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

var Function_256(int iParam0, var uParam1, int iParam2) //Position: 0xB5C0 / 46528
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_257(var uParam0, int iParam1, int iParam2) //Position: 0xB5E4 / 46564
{
	switch (Function_258())
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

int Function_258() //Position: 0xB680 / 46720
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

void Function_259(var uParam0, int iParam1, int iParam2) //Position: 0xB6BC / 46780
{
	switch (Function_260(uParam0))
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

int Function_260(bool bParam0) //Position: 0xB754 / 46932
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, 0))
	{
		if (!Function_152(*bParam0, 0x40000000))
		{
			Function_75(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, 0))
	{
		if (!Function_152(*bParam0, 0x40000000))
		{
			Function_75(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_36(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_49()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, 0))
	{
		if (!Function_152(*bParam0, 0x20000000))
		{
			Function_75(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, 0))
	{
		if (!Function_152(*bParam0, 0x20000000))
		{
			Function_75(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_36(bParam0, 0x20000000);
	return 0;
}

var Function_261(var uParam0, int iParam1) //Position: 0xB89F / 47263
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

void Function_262(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB9EE / 47598
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

var Function_263(int iParam0, int iParam1) //Position: 0xBA81 / 47745
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_264(var uParam0, var uParam1) //Position: 0xBA9B / 47771
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

bool Function_265() //Position: 0xBAE9 / 47849
{
	return Global_30920;
}

bool Function_266() //Position: 0xBAF2 / 47858
{
	if (IS_EXITFLAG_SET())
	{
		Function_237(bLocal_913);
		Function_233(StackVal, StackVal, 4, &bLocal_1081, &bLocal_913, Function_240(bLocal_913), Function_237(bLocal_913), 0);
		return 0;
	}
	Function_562(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_724, bLocal_913, iLocal_914, &bLocal_1082, &bLocal_1080, &bLocal_1081);
	if (bLocal_913 == 99 && bLocal_913 == 100)
	{
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_237(bLocal_913);
			Function_233(StackVal, StackVal, 1, &bLocal_1081, &bLocal_913, Function_240(bLocal_913), Function_237(bLocal_913), 0);
			return 1;
		}
		if (Function_543(&Local_969, &uLocal_929, &uLocal_924, bLocal_922, uLocal_1083))
		{
			if (Function_541(&uLocal_924))
			{
				Function_237(bLocal_913);
				Function_233(StackVal, StackVal, 5, &bLocal_1081, &bLocal_913, Function_240(bLocal_913), Function_237(bLocal_913), 0);
				return 1;
			}
		}
		if (Global_3403 || Global_3404)
		{
			Function_237(bLocal_913);
			Function_233(StackVal, StackVal, 2, &bLocal_1081, &bLocal_913, Function_240(bLocal_913), Function_237(bLocal_913), 0);
			return 1;
		}
		Function_540();
	}
	switch (bLocal_913)
	{
		case 0x00000063:
			Function_483();
			break;
		
		case 0x00000000:
			Function_451();
			break;
		
		case 0x00000001:
			Function_417();
			break;
		
		case 0x00000002:
			Function_408();
			break;
		
		case 0x00000003:
			Function_403();
			break;
		
		case 0x00000004:
			Function_381();
			break;
		
		case 0x00000005:
			Function_318();
			break;
		
		case 0x00000065:
			Function_269();
			break;
		
		case 0x00000064:
			if (Function_268(&bLocal_1081))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_267(&bLocal_913, &iLocal_914, &Local_915))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1080)
	{
		Function_242(&bLocal_1080, 8);
		Function_1();
		return 0;
	}
	if (bLocal_1081 && bLocal_913 == 100)
	{
		Function_237(bLocal_913);
		Function_233(StackVal, StackVal, 5, &bLocal_1081, &bLocal_913, Function_240(bLocal_913), Function_237(bLocal_913), 0);
	}
	if (bLocal_1082)
	{
		Function_228(&bLocal_1082, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_267(var uParam0, var uParam1, int iParam2) //Position: 0xBC9E / 48286
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

bool Function_268(int iParam0) //Position: 0xBCDE / 48350
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_269() //Position: 0xBCF1 / 48369
{
	if (iLocal_914 < 4 && iLocal_914 > 105)
	{
	}
	switch (iLocal_914)
	{
		case 0x00000000:
			Function_220();
			Function_316(&iLocal_1159);
			iLocal_914 = 6;
			break;
		
		case 0x00000006:
			if (Function_272("$/cutscene/MERCHANT02_END_seq/MERCHANT02_END_seq", &Local_915, &Local_724, &bLocal_913, 56197, 55408, 55084, 51849, 51429, 51422, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_270(1.0f);
				Function_192(0, 1, 1);
				iLocal_914 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_1080 = true;
			}
			break;
	}
	return;
}

void Function_270(bool bParam0) //Position: 0xBDB1 / 48561
{
	Function_271(bParam0);
	return;
}

void Function_271(bool bParam0) //Position: 0xBDBC / 48572
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

bool Function_272(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xBDD9 / 48601
{
	if (!bParam15)
	{
		Function_284(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*bParam3 != 99 && (Function_283(iParam2) || iParam2->f_24 < 1))
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
				Function_316(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_282())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_281(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_316(iParam1 + 4);
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
					Function_281(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_278(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_278(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_276(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_281(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_316(iParam1 + 4);
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
						Function_271(1.0f);
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
						Function_274();
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
					Function_273(1);
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
			if ((HUD_IS_FADED() && *bParam3 == 99) && !Function_283(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_273(bool bParam0) //Position: 0xC3FB / 50171
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

void Function_274() //Position: 0xC4A0 / 50336
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_275();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_275() //Position: 0xC4E5 / 50405
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_276(bool bParam0, bool bParam1) //Position: 0xC4F7 / 50423
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
			if ((bVar3 == Global_34573 && !Function_277(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_277(bool bParam0) //Position: 0xC577 / 50551
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

float Function_278(int iParam0) //Position: 0xC5A6 / 50598
{
	if (Function_280(iParam0))
	{
		if (Function_279(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_279(int iParam0) //Position: 0xC66E / 50798
{
	return Function_152(*iParam0, 2);
}

bool Function_280(int iParam0) //Position: 0xC67B / 50811
{
	return Function_152(*iParam0, 1);
}

int Function_281(bool bParam0) //Position: 0xC688 / 50824
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

bool Function_282() //Position: 0xC740 / 51008
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

bool Function_283(int iParam0) //Position: 0xC77A / 51066
{
	return iParam0->f_20;
}

void Function_284(var uParam0, int iParam1) //Position: 0xC784 / 51076
{
	Function_285(uParam0, iParam1, 0);
	return;
}

void Function_285(int iParam0, bool bParam1, bool bParam2) //Position: 0xC792 / 51090
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
			Function_227(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_84(20, 1, 0, 0);
		*iParam0 = 1105;
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
			if (((((((*iParam0 == 1000 && *iParam0 == 1001) && *iParam0 == 1002) && *iParam0 == 1003) && *iParam0 == 1103) && *iParam0 == 1104) && *iParam0 == 1105) && *iParam0 == 1106)
			{
				HUD_CLEAR_BIG_TEXT();
				HUD_CLEAR_SMALL_TEXT();
				if (bParam1)
				{
					CANCEL_TIME_WARP(1);
					if (!IS_STRING_VALID(bParam2))
					{
						Function_227(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_84(20, 1, 0, 0);
				*iParam0 = 1105;
			}
		}
	}
	return;
}

int Function_286() //Position: 0xC8DE / 51422
{
	return 1;
}

int Function_287() //Position: 0xC8E5 / 51429
{
	switch (bLocal_913)
	{
		case 0x00000002:
			Function_289(1, 1, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000004:
			Function_289(1, 0, 1, 1, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000005:
			Function_289(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
			DESTROY_ACTOR((*&Local_4 + 248)[02]);
			ACTOR_SET_GRABBED_BY_CUTSCENE((*&Local_4 + 236)[02], false);
			CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_4 + 236)[02]);
			return 1;
			break;
		
		case 0x00000065:
			Function_289(1, 0, 1, 1, 1, 1, 0, 1, 1, 1);
			ACTOR_HOLSTER_WEAPON(Global_34573, 0);
			return 1;
			break;
		
		default:
			Function_288();
			return 1;
			break;
	}
	return 0;
}

int Function_288() //Position: 0xC985 / 51589
{
	Function_289(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

void Function_289(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xC999 / 51609
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
		Function_84(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_220();
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
	Function_273(bParam9);
}

int Function_290() //Position: 0xCA89 / 51849
{
	if (DECOR_CHECK_EXIST(Global_34573, "__EndGroundAttack"))
	{
		DECOR_REMOVE(Global_34573, "__EndGroundAttack");
	}
	switch (bLocal_913)
	{
		case 0x00000063:
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1140, *(&Local_4 + 392[26]), 1, true, 1);
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bLocal_1140, bLocal_1142, 1, 1, 0);
			SET_ACTOR_HEADING(Global_34573, 160.0f, 1);
			if (!iLocal_1246)
			{
				ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			else
			{
				iLocal_1246 = 0;
			}
			return 1;
			break;
		
		case 0x00000002:
			Function_301(bLocal_1140, (*&Local_4 + 1024)[3], 0, 1, 1, 1);
			TASK_STAND_STILL(bLocal_1140, -1.0f, 0, 0);
			Function_301(Global_34573, (*&Local_4 + 1024)[1], "", 0, 1, 1);
			if (iLocal_914 == 95)
			{
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				ACTOR_PUT_WEAPON_IN_HAND(Global_34573, GET_WEAPON_EQUIPPED(Global_34573, true), 0);
			}
			Function_294(Local_4.f_232, Local_4.f_1052, 1, 0, 1);
			Function_301(bLocal_1143, (*&Local_4 + 1024)[5], 0, 1, 1, 1);
			TASK_STAND_STILL(bLocal_1143, -1.0f, 0, 0);
			if (!IS_OBJECT_VALID(bLocal_1256))
			{
				Function_293();
			}
			return 1;
			break;
		
		case 0x00000003:
			Function_301(bLocal_1140, (*&Local_4 + 1392)[2], 0, 1, 1, 1);
			TASK_STAND_STILL(bLocal_1140, -1.0f, 0, 0);
			Function_301(bLocal_1143, (*&Local_4 + 1392)[3], 0, 1, 1, 1);
			if (!IS_OBJECT_VALID(bLocal_1157))
			{
				bLocal_1157 = DROP_ACCESSORY_ENUM(bLocal_1143, 0);
				SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_1157, GET_OBJECT_FROM_ACTOR(bLocal_1143), false);
				GIVE_OBJECT_TO_LAYOUT(bLocal_1157, Local_4);
			}
			bLocal_1158 = ATTACH_OBJECTS_USING_LOCATOR(bLocal_1157, GET_OBJECT_FROM_ACTOR(bLocal_1143), Function_53(), "hat", 4294967295);
			bLocal_1255 = GET_PROP_FROM_OBJECT(bLocal_1157);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_1143, 1);
			TASK_CLEAR(bLocal_1143);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_1143, 1);
			SET_ANIM_SET_FOR_ACTOR(bLocal_1143, "hat_toss", 0);
			SET_ACTION_NODE_FOR_ACTOR(bLocal_1143, "hat_toss/hat_toss_idle");
			bLocal_1158 = ATTACH_OBJECTS_USING_LOCATOR(bLocal_1255, bLocal_1143, "wrist_r_attachment", "grab", 0);
			Function_301(Global_34573, (*&Local_4 + 1392)[1], 0, 1, 1, 1);
			Function_294(Local_4.f_232, Local_4.f_1412, 1, 0, 1);
			return 1;
			break;
		
		case 0x00000004:
			Function_301(bLocal_1140, (*&Local_4 + 1800)[2], 0, 1, 1, 1);
			TASK_STAND_STILL(bLocal_1140, -1.0f, 0, 0);
			Function_301(bLocal_1143, (*&Local_4 + 1800)[5], 0, 1, 1, 1);
			TASK_STAND_STILL(bLocal_1143, -1.0f, 0, 0);
			DEEQUIP_ACCESSORY(bLocal_1143, 0);
			Function_301(Global_34573, (*&Local_4 + 1800)[1], 0, 1, 1, 1);
			ACTOR_HOLSTER_WEAPON(Global_34573, 0);
			Function_294(Local_4.f_232, Local_4.f_1828, 1, 0, 1);
			if (IS_ATTACHMENT_VALID(bLocal_1158))
			{
				REMOVE_OBJECT_ATTACHMENT(bLocal_1158);
			}
			if (IS_OBJECT_VALID(bLocal_1157))
			{
				DESTROY_OBJECT(bLocal_1157);
			}
			return 1;
			break;
		
		case 0x00000005:
			Function_301(bLocal_1140, (*&Local_4 + 2044)[3], 0, 1, 1, 1);
			TASK_STAND_STILL(bLocal_1140, -1.0f, 0, 0);
			Function_301(Global_34573, (*&Local_4 + 2044)[1], 0, 1, 1, 1);
			Function_294(Local_4.f_232, Local_4.f_2076, 1, 0, 1);
			Function_292(Local_4.f_232);
			SET_DRAW_ACTOR(bLocal_1143, true);
			return 1;
			break;
		
		case 0x00000065:
			Function_301(bLocal_1142, (*&Local_4 + 2244)[4], 0, 1, 1, 1);
			SET_ACTOR_IN_VEHICLE(bLocal_1140, bLocal_1142, false);
			MEMORY_PREFER_RIDING(bLocal_1140, true);
			Function_301(Global_34573, (*&Local_4 + 2244)[1], 0, 1, 1, 1);
			ACTOR_HOLSTER_WEAPON(Global_34573, 0);
			if (!iLocal_1246)
			{
				ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			else
			{
				iLocal_1246 = 0;
			}
			return 1;
			break;
		
		default:
			Function_291();
			LOG_ERROR("unknown CUTSCENE_CUSTOM_SET_POSES");
			return 1;
			break;
	}
	return 0;
}

int Function_291() //Position: 0xCE53 / 52819
{
	return 1;
}

void Function_292(bool bParam0) //Position: 0xCE5A / 52826
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	strcpy(&cVar0, "crowd_cheer/merchant02_react/react", 64);
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar36 = false;
		while (bVar36 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar37 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar36);
			if (IS_ACTOR_VALID(bVar37))
			{
				RESET_ANIM_SET_FOR_ACTOR(bVar37, 1);
				SET_ANIM_SET_FOR_ACTOR(bVar37, "crowd_cheer", 0);
				bLocal_1211 = TASK_SEQUENCE_OPEN();
				if (bVar36 <= 7)
				{
					cVar16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
					itos(&cVar32, bVar36 + 1, 16);
					stradd(&cVar16, &cVar32, 64);
					TASK_ACTION_PERFORM(false, &cVar16);
				}
				else
				{
					cVar16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
					itos(&cVar32, RAND_INT_RANGE(true, 7), 16);
					stradd(&cVar16, &cVar32, 64);
					TASK_ACTION_PERFORM(false, &cVar16);
				}
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bVar37, bLocal_1211);
				TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
			}
			bVar36++;
		}
	}
	return;
}

void Function_293() //Position: 0xCF38 / 53048
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	SET_ACTOR_FACE_STYLE(bLocal_1140, 2);
	TASK_FACE_ACTOR(bLocal_1140, Global_34573, 1, 3212836864);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_1140, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	Function_239(Local_1283);
	vVar2 = { StackVal, StackVal, Function_239(Local_1283) };
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_232))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			bLocal_1211 = TASK_SEQUENCE_OPEN();
			TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
			TASK_FACE_COORD(false, &vVar2, 0);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bVar1, bLocal_1211);
			TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
		}
		bVar0++;
	}
	SET_ENABLE_NAV_STICK_INPUT(0, 0);
	SET_PLAYER_CONTROL_CONFIG(0, 5);
	AI_IGNORE_ACTOR(Global_34573);
	SET_PLAYER_PERFECT_ACCURACY(Global_34573, 1);
	SET_DEADEYE_MULTILOCK_ENABLE(0, true);
	SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	SET_INFINITE_DEADEYE(0, 1);
	Function_219(0);
	fLocal_1219 = ACTOR_GET_WEAPON_AMMO(Global_34573, 4);
	fLocal_1220 = ACTOR_GET_WEAPON_AMMO(Global_34573, 8);
	Function_159(4, 1, 0);
	Function_159(8, 1, 0);
	_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, 7, true);
	_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, 8, true);
	bLocal_1256 = CREATE_EVENT_TRAP(Function_53(), 6, bLocal_723);
	EVENT_TRAP_ON_PERPETRATOR(bLocal_1256, GET_OBJECT_FROM_ACTOR(Global_34573));
	if (IS_PHYSINST_VALID(StackVal))
	{
	}
	if (IS_OBJECT_VALID(Local_1283))
	{
		iLocal_1279 = 1;
		CREATE_OBJECT_GLOW(Local_1283, 0, 0.0f, 0,4f, 0,2f, 1);
		if (!IS_BLIP_VALID(Local_1283.f_12))
		{
			Local_1283.f_12 = ADD_BLIP_FOR_OBJECT(Local_1283, 322, 0f, 2, 0);
			SET_BLIP_NAME(Local_1283.f_12, "Merchant02_blip_skull");
		}
	}
	bLocal_1242 = true;
	Function_316(&iLocal_1186);
	iLocal_1277 = 0;
	return;
}

void Function_294(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xD0C0 / 53440
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		if (iParam4 || bVar0 < 2)
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
				if (IS_OBJECT_VALID(bVar2))
				{
					Function_300(bVar2);
					vVar3 = { StackVal, StackVal, Function_300(bVar2) };
					Function_299(bVar2);
					vVar6 = { StackVal, StackVal, Function_299(bVar2) };
					if (!bParam2)
					{
						bLocal_1211 = TASK_SEQUENCE_OPEN();
						TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
						TASK_GO_TO_COORD(false, &vVar3, true);
						TASK_FACE_COORD(false, &Local_4 + 876[26], 0);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bVar1, bLocal_1211);
						TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
						TASK_PRIORITY_SET(bVar1, 2);
					}
					else if (!bParam3)
					{
						Function_301(bVar1, bVar2, 0, 1, 1, 1);
						TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
						Function_298(bVar1, bVar0);
					}
					else
					{
						TELEPORT_ACTOR(bVar1, &vVar3, 1, 1, 1);
						Function_296(StackVal, StackVal, bVar1, *(&Local_4 + 2368[26]));
						TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
						Function_295(bVar1, bVar0);
					}
				}
			}
		}
		bVar0++;
	}
}

void Function_295(bool bParam0, bool bParam1) //Position: 0xD1B4 / 53684
{
	switch (bParam1)
	{
		case 0x00000000:
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(bParam0, "crowd_right", 0);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "crowd_right");
			break;
		
		case 0x00000001:
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(bParam0, "crowd_callout_R", 0);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "crowd_callout_R");
			break;
		
		case 0x00000002:
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(bParam0, "crowd_pointer", 0);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "crowd_pointer");
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(bParam0, "crowd_right", 0);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "crowd_right");
			break;
		
		case 0x00000004:
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(bParam0, "crowd_left", 0);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "crowd_left");
			break;
		
		case 0x00000005:
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(bParam0, "crowd_left", 0);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "crowd_left");
			break;
		
		case 0x00000006:
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(bParam0, "crowd_right", 0);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "crowd_right");
			break;
		
		case 0x00000007:
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(bParam0, "crowd_callout", 0);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "crowd_callout");
			break;
		
		case 0x00000008:
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(bParam0, "crowd_left", 0);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "crowd_left");
			break;
	}
	return;
}

void Function_296(bool bParam0, vector3 vParam1) //Position: 0xD3C3 / 54211
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_297(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_297(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_297(bool bParam0, vector3 vParam1) //Position: 0xD3FB / 54267
{
	vector3 vVar0;
	
	Function_225(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_225(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

void Function_298(bool bParam0, bool bParam1) //Position: 0xD47E / 54398
{
	switch ((bParam1 % 3))
	{
		case 0x00000000:
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(bParam0, "crowd_idles", 0);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "crowd_idles/idleA");
			break;
		
		case 0x00000001:
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(bParam0, "crowd_idles", 0);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "crowd_idles/idleB");
			break;
		
		case 0x00000002:
			RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(bParam0, "crowd_idles", 0);
			SET_ACTION_NODE_FOR_ACTOR(bParam0, "crowd_idles/idleC");
			break;
		
		default:
			LOG_ERROR("SETUP_STANDARD_CROWD_IDLES - invalid idle num");
			break;
	}
	return;
}

vector3 Function_299(bool bParam0) //Position: 0xD57D / 54653
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

vector3 Function_300(bool bParam0) //Position: 0xD5A4 / 54692
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

void Function_301(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xD610 / 54800
{
	Function_302(bParam0, uParam1, iParam3, iParam4, iParam5);
}

void Function_302(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xD625 / 54821
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

int Function_303() //Position: 0xD72C / 55084
{
	switch (bLocal_913)
	{
		case 0x00000002:
			ACTOR_SET_NEXT_EQUIP_SLOT(Global_34573, 1, 0);
			return 1;
			break;
		
		case 0x00000004:
			if (IS_ATTACHMENT_VALID(bLocal_1158))
			{
				REMOVE_OBJECT_ATTACHMENT(bLocal_1158);
			}
			if (IS_OBJECT_VALID(bLocal_1157))
			{
				DESTROY_OBJECT(bLocal_1157);
			}
			break;
		
		case 0x00000005:
			if (GET_DRAW_ACTOR(bLocal_1143))
			{
				ACTOR_PUT_WEAPON_IN_HAND(bLocal_1143, 5, 0);
				SET_DRAW_ACTOR(bLocal_1143, false);
			}
			if (GET_TASK_STATUS(bLocal_1143, 35) != 1)
			{
				Function_301(bLocal_1143, (*&Local_4 + 2044)[5], 0, 1, 1, 1);
				TASK_CLEAR(bLocal_1143);
				TASK_POINT_GUN_AT_OBJECT(bLocal_1143, (*&Local_4 + 2044)[6], -1.0f, 1);
				TASK_PRIORITY_SET(bLocal_1143, true);
			}
			break;
		
		case 0x00000065:
			SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_232);
			if (!iLocal_1251)
			{
				if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
				{
					if (STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DESCRIPTION(), "WagonSpawn"))
					{
						ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_1142, true);
						Function_301(bLocal_1142, (*&Local_4 + 2244)[4], 0, 1, 1, 1);
						iLocal_1251 = 1;
						LOG_ERROR("WagonSpawn");
						return 1;
					}
				}
			}
			return 0;
			break;
		
		default:
			Function_304();
			LOG_ERROR("unknown CUTSCENE_CUSTOM_FIRSTSHOT");
			return 1;
			break;
	}
	return 0;
}

int Function_304() //Position: 0xD869 / 55401
{
	return 1;
}

int Function_305() //Position: 0xD870 / 55408
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	switch (bLocal_913)
	{
		case 0x00000002:
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_232))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar0);
				ACTOR_SET_GRABBED_BY_CUTSCENE(bVar1, true);
				bVar0++;
			}
			ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_1143, true);
			if (IS_ACTOR_VALID(bLocal_1142))
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_1142, true);
				bVar0 = false;
				while (bVar0 <= GET_NUM_DRAFT_POSITIONS(bLocal_1142))
				{
					bVar2 = GET_DRAFT_ACTOR(bVar0, bLocal_1142);
					ACTOR_SET_GRABBED_BY_CUTSCENE(bVar2, true);
					bVar0++;
				}
			}
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			Function_307(1);
			return 1;
			break;
		
		case 0x00000005:
			ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_1143, true);
			if (IS_ACTOR_VALID(bLocal_1142))
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_1142, true);
				bVar0 = false;
				while (bVar0 <= GET_NUM_DRAFT_POSITIONS(bLocal_1142))
				{
					bVar3 = GET_DRAFT_ACTOR(bVar0, bLocal_1142);
					ACTOR_SET_GRABBED_BY_CUTSCENE(bVar3, true);
					bVar0++;
				}
			}
			Function_239((*&Local_4 + 2044)[3]);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Function_239((*&Local_4 + 2044)[3]), 0, 0);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
		
		case 0x00000065:
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_232))
			{
				bVar4 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar0);
				ACTOR_SET_GRABBED_BY_CUTSCENE(bVar4, true);
				bVar0++;
			}
			if (IS_ACTOR_VALID(bLocal_1142))
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_1142, true);
				bVar0 = false;
				while (bVar0 <= GET_NUM_DRAFT_POSITIONS(bLocal_1142))
				{
					bVar5 = GET_DRAFT_ACTOR(bVar0, bLocal_1142);
					ACTOR_SET_GRABBED_BY_CUTSCENE(bVar5, true);
					bVar0++;
				}
			}
			CUTSCENE_MANAGER_SHOW_ACTOR(bLocal_1143);
			ACTOR_DISABLE_WEAPON_RENDER(bLocal_1143, 1, 1);
			return 1;
			break;
		
		default:
			Function_306();
			if (IS_ACTOR_VALID(bLocal_1142))
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_1142, true);
				bVar0 = false;
				while (bVar0 <= GET_NUM_DRAFT_POSITIONS(bLocal_1142))
				{
					bVar6 = GET_DRAFT_ACTOR(bVar0, bLocal_1142);
					ACTOR_SET_GRABBED_BY_CUTSCENE(bVar6, true);
					bVar0++;
				}
			}
			DECOR_SET_BOOL(Global_34573, "__EndGroundAttack", true);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
	}
	return 0;
}

int Function_306() //Position: 0xDA35 / 55861
{
	return 1;
}

void Function_307(bool bParam0) //Position: 0xDA3C / 55868
{
	if (iLocal_1252)
	{
		return;
	}
	if (IS_OBJECT_VALID(Local_1283))
	{
		if (!bParam0)
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_1257))
			{
				EVENT_TRAP_CLEAR_EVENTS(bLocal_1257);
				Function_232("Merchant02_property_destruction");
				bLocal_1081 = true;
			}
		}
	}
	if (!IS_PHYSINST_VALID(StackVal))
	{
		Local_1283.f_4 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(*(&Local_4 + 2368[26]), 2.0f, "skullcattle03", 1);
		if (IS_PHYSINST_VALID(StackVal))
		{
			return;
		}
		return;
	}
	if (!IS_OBJECT_VALID(Local_1283))
	{
		Local_1283 = GET_OBJECT_FROM_PHYSINST(StackVal);
		if (IS_OBJECT_VALID(Local_1283))
		{
			if (!IS_OBJECT_VALID(bLocal_1257))
			{
				Local_1283.f_8 = _GET_OBJECT_ATTACHMENT(Local_1283);
				SET_OBJECT_COLLIDE_WITH_OBJECT(Local_1283, GET_OBJECT_FROM_ACTOR(Global_34573), false);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(Local_1283, 0);
				SET_OBJECT_COLLIDE_WITH_WORLD(Local_1283, 0);
				Function_308(Local_1283);
				bLocal_1257 = CREATE_EVENT_TRAP(Function_53(), 5, Local_1283);
				EVENT_TRAP_ON_TARGET(bLocal_1257, Local_1283);
			}
		}
		else
		{
			return;
		}
	}
	if (!iLocal_1279 && bParam0)
	{
		Function_293();
	}
	return;
}

void Function_308(bool bParam0) //Position: 0xDB51 / 56145
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

int Function_309() //Position: 0xDB85 / 56197
{
	switch (bLocal_913)
	{
		case 0x00000063:
			Function_313(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_311(StackVal, StackVal, bLocal_723, *(&Local_4 + 392[06]), &Local_4 + 308[0], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000002:
			Function_313(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_311(StackVal, StackVal, bLocal_723, *(&Local_4 + 876[06]), &Local_4 + 308[1], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000003:
			Function_313(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_311(StackVal, StackVal, bLocal_723, *(&Local_4 + 1292[06]), &Local_4 + 308[2], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000004:
			Function_313(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_311(StackVal, StackVal, bLocal_723, *(&Local_4 + 1652[06]), &Local_4 + 308[3], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000005:
			Function_313(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_311(StackVal, StackVal, bLocal_723, *(&Local_4 + 1872[06]), &Local_4 + 308[4], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			Function_313(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_311(StackVal, StackVal, bLocal_723, *(&Local_4 + 2120[06]), &Local_4 + 308[5], 0, 0, 0, 0, 1, 1);
			TASK_STAND_STILL(bLocal_1143, -1.0f, 0, 0);
			return 1;
			break;
		
		default:
			Function_310();
			LOG_ERROR("unknown CUTSCENE_CUSTOM_SETUP");
			return 1;
			break;
	}
	return 0;
}

int Function_310() //Position: 0xDD28 / 56616
{
	float fVar0;
	
	Function_313(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	fVar0 = CREATE_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol", 2, Global_34574, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
	Function_311(StackVal, StackVal, Global_6289, Global_34574, &fVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_311(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0xDD83 / 56707
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
	if (IS_VOLUME_VALID(*fParam4))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol")))
		{
			if (*fParam4 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(bParam0), "CutsceneVol"), vParam1);
			}
		}
	}
	else
	{
		*fParam4 = CREATE_VOLUME_IN_LAYOUT(bParam0, "CutsceneVol", 2, vParam1, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 25.0f);
	}
	if (IS_VOLUME_VALID(*fParam4))
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
				Function_312(bVar1, bParam0);
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
				if (IS_ACTOR_IN_VOLUME(bVar0, *fParam4))
				{
					TELEPORT_ACTOR(bVar0, &vVar2, 1, 1, 1);
					TASK_CLEAR(bVar0);
					TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_IN_VOLUME(bVar0, *fParam4))
				{
					TELEPORT_ACTOR(bVar1, &vVar2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(*fParam4))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*fParam4);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(*fParam4))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*fParam4);
		}
		if (bParam10)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(*fParam4);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(*fParam4, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(*fParam4);
		if (bParam9)
		{
			Global_63117 = *fParam4;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_312(bool bParam0, bool bParam1) //Position: 0xDFF1 / 57329
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

void Function_313(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xE066 / 57446
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
	Function_220();
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
				Function_225(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_225(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_84(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_315()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_315()));
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
	if (Function_314(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_161(0x4000000);
	}
	if (Function_314(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_161(0x8000000);
	}
}

bool Function_314(int iParam0) //Position: 0xE30F / 58127
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_315() //Position: 0xE32B / 58155
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

void Function_316(int iParam0) //Position: 0xE3AA / 58282
{
	Function_317(iParam0, 0.0f);
	return;
}

void Function_317(int iParam0, float fParam1) //Position: 0xE3B6 / 58294
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_75(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_318() //Position: 0xE3D7 / 58327
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	if (iLocal_914 < 4 && iLocal_914 > 105)
	{
		Function_239((*&Local_4 + 2244)[0]);
		Function_377(StackVal, StackVal, "$/cutscene/MERCHANT02_END_seq/MERCHANT02_END_seq", &uLocal_1084, Function_239((*&Local_4 + 2244)[0]), 69429, 0, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1);
		if (iLocal_1249 == 0)
		{
			if (Function_376())
			{
				Function_220();
				HUD_ENABLE(false);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				CANCEL_DEADEYE();
				SET_ANIM_SET_FOR_ACTOR(bLocal_1143, "Merchant02_shothand", 0);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_1143, "Merchant02_shothand");
				Function_375();
				Function_374(Local_4.f_232, 1);
				bLocal_1267 = GET_SOUND_ID();
				PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1267, "MERCHANT02_CHEER_MASTER", Global_34574);
				Function_373(&iLocal_1195);
				iLocal_1249 = 1;
				Function_216(Local_4.f_232);
				Function_294(Local_4.f_232, Local_4.f_2076, 0, 0, 1);
				Function_372(&iLocal_1195);
				iLocal_914 = 106;
			}
			else if (!IS_ACTOR_ALIVE(bLocal_1143))
			{
				Function_220();
				Function_232("Merchant02_killed_aquila");
				bLocal_1081 = true;
			}
		}
		Function_370();
		Function_367(bLocal_1143);
		Function_366();
		Function_361(Function_362(&uVar0, &uLocal_1210, 1, 0x40c00000, 0));
	}
	switch (iLocal_914)
	{
		case 0x00000000:
			Function_357(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_923 = Global_30640[1];
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_ENABLE_NAV_STICK_INPUT(0, 0);
			SET_PLAYER_CONTROL_CONFIG(0, 5);
			Function_219(0);
			if (iLocal_1072[4] == 0)
			{
				Function_226(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				SET_PLAYER_PERFECT_ACCURACY(Global_34573, 1);
				SET_CAN_ACTOR_HARDLOCK_NEUTRALS(Global_34573, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
				SET_INFINITE_DEADEYE(0, 1);
				fLocal_1219 = ACTOR_GET_WEAPON_AMMO(Global_34573, 4);
				fLocal_1220 = ACTOR_GET_WEAPON_AMMO(Global_34573, 8);
				Function_159(4, 1, 0);
				Function_159(8, 1, 0);
				_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, 7, true);
				_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, 8, true);
				bLocal_1242 = true;
				SET_ACTOR_HEALTH(bLocal_1140, GET_ACTOR_MAX_HEALTH(bLocal_1140));
				Function_161(49165);
				Function_355(9);
				Function_192(1, 0, 1);
				Function_301(Global_34573, (*&Local_4 + 2044)[1], 0, 1, 1, 1);
				Function_301(bLocal_1140, (*&Local_4 + 2044)[3], 0, 1, 1, 1);
				TASK_STAND_STILL(bLocal_1140, -1.0f, 0, 0);
				Function_301(bLocal_1142, (*&Local_4 + 2468)[0], 0, 1, 1, 1);
				ENABLE_VEHICLE_SEAT(bLocal_1142, false, 0);
				Function_354();
				bLocal_1155 = CREATE_PROP_IN_LAYOUT(Local_4, Function_53(), "p_gen_tableSnakeOil01x", *(&Local_4 + 2368[16]), *(&Local_4 + 2368[16] + 12), 1);
				Function_210(bLocal_723);
				Function_210(Local_4);
				Function_208();
				iLocal_914 = 1;
			}
			else
			{
				iLocal_914 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_353(bLocal_923)) && Function_158(&(Global_29008[bLocal_923]), 8))
			{
				Function_340();
				bVar1 = false;
				while (bVar1 <= SQUAD_GET_SIZE(Local_4.f_232))
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar1);
					if (IS_ACTOR_VALID(bVar2))
					{
						RESET_ANIM_SET_FOR_ACTOR(bVar2, 0);
						Function_301(bVar2, (*&Local_4 + 2080)[bVar1], 0, 1, 1, 1);
						TASK_STAND_STILL(bVar2, -1.0f, 0, 0);
					}
					bVar1++;
				}
				Function_301(bLocal_1140, (*&Local_4 + 2044)[3], 0, 1, 1, 1);
				TASK_STAND_STILL(bLocal_1140, -1.0f, 0, 0);
				TASK_CLEAR(bLocal_1143);
				Function_301(bLocal_1143, (*&Local_4 + 2044)[5], 0, 1, 1, 1);
				TASK_STAND_STILL(bLocal_1143, -1.0f, 0, 0);
				Function_339(&(Local_969[317]));
				Function_308(bLocal_1143);
				SET_ACTOR_FACTION(bLocal_1143, 21);
				SET_ACTOR_HEALTH(bLocal_1143, GET_ACTOR_MAX_HEALTH(bLocal_1143));
				ACTOR_PUT_WEAPON_IN_HAND(bLocal_1143, 5, 1);
				TASK_POINT_GUN_AT_OBJECT(bLocal_1143, Global_34573, -1.0f, 1);
				TASK_PRIORITY_SET(bLocal_1143, true);
				DECOR_REMOVE(bLocal_1143, "Aguila");
				DECOR_SET_BOOL(bLocal_1143, "CanBeLasso", false);
				DEEQUIP_ACCESSORY(bLocal_1143, 0);
				iLocal_914 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_337(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_724, bLocal_913))
			{
				if (Function_377(StackVal, StackVal, "$/cutscene/MERCHANT02_CS03_C_P1/MERCHANT02_CS03_C_P1", &uLocal_1084, *(&Local_4 + 2272[26]), 62057, 1, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1))
				{
					bLocal_1268 = GET_SOUND_ID();
					PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1268, "MERCHANT02_CROWD_A_MASTER", *(&Local_4 + 2656[06]));
					SET_ACTOR_HEALTH(bLocal_1143, GET_ACTOR_MAX_HEALTH(bLocal_1143));
					iLocal_914 = 3;
				}
			}
			else
			{
				Function_290();
				bLocal_1268 = GET_SOUND_ID();
				PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1268, "MERCHANT02_CROWD_A_MASTER", *(&Local_4 + 2656[06]));
				Function_301(bLocal_1143, (*&Local_4 + 2044)[5], 0, 1, 1, 1);
				TASK_CLEAR(bLocal_1143);
				ACTOR_PUT_WEAPON_IN_HAND(bLocal_1143, 5, 0);
				TASK_POINT_GUN_AT_OBJECT(bLocal_1143, (*&Local_4 + 2044)[6], -1.0f, 1);
				TASK_PRIORITY_SET(bLocal_1143, true);
				SET_ACTOR_HEALTH(bLocal_1143, GET_ACTOR_MAX_HEALTH(bLocal_1143));
				PRINTSTRING("TASK_POINT_GUN_AT_OBJECT - GID_POST_STREAMING(no cutscene)");
				PRINTNL();
				iLocal_914 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_272("$/cutscene/MERCHANT02_CS03_C_P1/MERCHANT02_CS03_C_P1", &Local_915, &Local_724, &bLocal_913, 56197, 55408, 55084, 51849, 51429, 61985, 0, 1, 1, 2, 2, 0, 1))
			{
				if (!GET_DRAW_ACTOR(bLocal_1143))
				{
					SET_DRAW_ACTOR(bLocal_1143, true);
				}
				iLocal_914 = 4;
			}
			break;
		
		case 0x00000004:
			Function_238(bLocal_913);
			Function_326(StackVal, StackVal, Function_238(bLocal_913), bLocal_913, Global_30628[1], Function_241(bLocal_913), 0);
			Function_270(1.0f);
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(Global_34573, 4, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			TASK_STAND_STILL(bLocal_1140, -1.0f, 0, 0);
			CLEAR_LAST_HIT(bLocal_1143);
			SET_ALLOW_DEADEYE_LOCKS(bLocal_1143, false);
			if (!GET_DRAW_ACTOR(bLocal_1143))
			{
				SET_DRAW_ACTOR(bLocal_1143, true);
			}
			iLocal_914 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				iLocal_914 = 7;
			}
			break;
		
		case 0x00000007:
			Function_325("Merchant02_disarm_aquila", 7,5f, 1, 2, 0, 0, 0);
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1143)))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_1143, 322, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_1143), "Merchant02_blip_aquila");
			}
			iLocal_1253 = 15;
			iLocal_914 = 8;
			break;
		
		case 0x00000008:
			Function_319();
			break;
		
		case 0x0000006A:
			iLocal_1072[5] = 1;
			if (IS_SOUND_ID_VALID(bLocal_1268))
			{
				STOP_SOUND(bLocal_1268);
			}
			if (IS_SOUND_ID_VALID(bLocal_1267))
			{
				STOP_SOUND(bLocal_1267);
			}
			if (SQUAD_IS_VALID(Local_4.f_232))
			{
				Function_218(Local_4.f_232);
				Function_217(Local_4.f_232, 1);
				Function_216(Local_4.f_232);
				Function_215(Local_4.f_232);
				AI_GLOBAL_CLEAR_ALL_DANGER();
			}
			if (IS_ACTOR_VALID(bLocal_1143))
			{
				RELEASE_ACTOR(bLocal_1143);
			}
			_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, 7, false);
			_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, 8, false);
			ACTOR_SET_WEAPON_AMMO(Global_34573, 4, fLocal_1219);
			ACTOR_SET_WEAPON_AMMO(Global_34573, 8, fLocal_1220);
			bLocal_1242 = false;
			bLocal_913 = 101;
			iLocal_914 = 0;
			break;
	}
	return;
}

int Function_319() //Position: 0xEB82 / 60290
{
	vector3 vVar0;
	
	switch (iLocal_1253)
	{
		case 0x00000000:
			Function_131("Merchant02_deadeye_01a", 10.0f, 1, 0, 2, 1, 0);
			Function_316(&iLocal_1162);
			iLocal_1253 = 6;
			break;
		
		case 0x00000006:
			if (Function_278(&iLocal_1162) < (10,5f / 2.0f))
			{
				Function_325("Merchant02_wait_for_hat", 5.0f, 1, 2, 0, 0, 0);
				Function_316(&iLocal_1162);
				iLocal_1253 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_278(&iLocal_1162) < 5.0f)
			{
				iLocal_1253 = 8;
			}
			break;
		
		case 0x00000008:
			if (!Function_324(GET_WEAPON_IN_HAND(Global_34573)))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_321();
				}
				else
				{
					Function_325("Merchant02_draw_gun", 7,5f, 1, 2, 0, 0, 0);
					iLocal_1253 = 9;
					return 1;
				}
			}
			iLocal_1253 = 9;
			return 1;
			break;
		
		case 0x00000009:
			if (!IS_PLAYER_DEADEYE(0))
			{
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_131("Merchant02_deadeye_01b", 10.0f, 1, 0, 2, 1, 0);
					Function_316(&iLocal_1162);
				}
			}
			else
			{
				iLocal_1253 = 10;
			}
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000F:
			Function_131("Merchant02_deadeye_02", 10.0f, 1, 0, 2, 1, 0);
			Function_316(&iLocal_1162);
			iLocal_1253 = 16;
			break;
		
		case 0x00000010:
			if (Function_278(&iLocal_1162) < 10,5f)
			{
				Function_131("Merchant02_deadeye_03", 10.0f, 1, 0, 2, 1, 0);
				iLocal_1253 = 17;
			}
			break;
		
		case 0x00000011:
			if (Function_278(&iLocal_1162) < 4,5f || GET_LAST_ATTACKER(bLocal_1143) != Global_34573)
			{
				Function_320(bLocal_1143);
				vVar0 = { StackVal, StackVal, Function_320(bLocal_1143) };
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_1143, 15, true);
				TASK_SHOOT_FROM_POSITION(bLocal_1143, Global_34573, &vVar0);
				Function_372(&iLocal_1162);
				iLocal_1253 = 18;
			}
			break;
		
		case 0x00000012:
			break;
	}
	return 0;
}

vector3 Function_320(bool bParam0) //Position: 0xEDA6 / 60838
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

void Function_321() //Position: 0xEE10 / 60944
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_remJonDraw", "Merchant02_remJonDraw", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_322(int iParam0) //Position: 0xEE63 / 61027
{
	Function_323(0, Global_34573, iParam0, 0);
	Function_323(1, bLocal_1140, iParam0, 0);
	Function_323(2, (*&Local_4 + 164)[12], iParam0, 0);
	Function_323(3, (*&Local_4 + 164)[02], iParam0, 0);
	Function_323(4, (*&Local_4 + 164)[62], iParam0, 0);
	Function_323(5, bLocal_1143, iParam0, 0);
	return;
}

void Function_323(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xEEB1 / 61105
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_152(uParam2, Function_138(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_324(bool bParam0) //Position: 0xEED6 / 61142
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

void Function_325(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xEF1C / 61212
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

void Function_326(vector3 vParam0, bool bParam3, var uParam4, int iParam5, int iParam6) //Position: 0xEF6F / 61295
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (bParam3 == Global_34165.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam3 < 0)
	{
		Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	}
	if (bParam3 != Global_34165.f_48 && !Function_331())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_330(0);
	Function_329();
	Global_34165.f_48 = bParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_328(uParam4, iVar0, iVar1);
	Function_327();
}

void Function_327() //Position: 0xF00C / 61452
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

void Function_328(int iParam0, bool bParam1, bool bParam2) //Position: 0xF04D / 61517
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
	if (Function_80(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_42();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_329() //Position: 0xF1B3 / 61875
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_330(bool bParam0) //Position: 0xF1D7 / 61911
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

bool Function_331() //Position: 0xF206 / 61958
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

int Function_332() //Position: 0xF221 / 61985
{
	switch (bLocal_913)
	{
		case 0x00000063:
			iLocal_1246 = 1;
			return 1;
			break;
		
		case 0x00000065:
			Function_223(49165);
			Function_221(9);
			Function_192(1, 0, 1);
			iLocal_1246 = 1;
			return 1;
			break;
		
		default:
			Function_286();
			return 1;
			break;
	}
	return 0;
}

int Function_333() //Position: 0xF269 / 62057
{
	bool bVar0;
	var uVar1;
	var uVar4;
	int iVar7;
	
	if (Function_336())
	{
		if (!IS_ACTOR_ALIVE((*&Local_4 + 248)[02]))
		{
			Function_335();
			TASK_STAND_STILL((*&Local_4 + 248)[02], -1.0f, 0, 0);
			bVar0 = false;
			while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &uVar1, &uVar4))
				{
					iVar7 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar0);
					if (Function_334(iVar7))
					{
						if (iVar7 == GET_ACTOR_ENUM((*&Local_4 + 248)[02]))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (*&Local_4 + 248)[02]);
						}
					}
				}
				bVar0++;
			}
		}
		return 1;
	}
	return 0;
}

bool Function_334(int iParam0) //Position: 0xF2E3 / 62179
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_335() //Position: 0xF2FA / 62202
{
	(*&Local_4 + 248)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "AquilaClone", 611, -3249,586f, 15,95999f, 2719,999f, 0.0f, 114,265f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 248)[02], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 248)[02], 4, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 248)[02], 20);
	ACTOR_START_FORCE_HOLSTER((*&Local_4 + 248)[02], 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 248)[02], 0);
	SET_ALLOW_EXECUTE((*&Local_4 + 248)[02], 0);
	AI_IGNORE_ACTOR((*&Local_4 + 248)[02]);
	AI_DONT_HARM_ACTOR((*&Local_4 + 248)[02]);
	return;
}

bool Function_336() //Position: 0xF394 / 62356
{
	bool bVar0;
	var uVar1;
	var uVar4;
	int iVar7;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &uVar1, &uVar4))
		{
			iVar7 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar0);
			if (Function_334(iVar7))
			{
				if (iVar7 == GET_ACTOR_ENUM((*&Local_4 + 164)[22]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (*&Local_4 + 164)[22]);
				}
				if (iVar7 == GET_ACTOR_ENUM((*&Local_4 + 164)[52]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (*&Local_4 + 164)[52]);
				}
				if (iVar7 == GET_ACTOR_ENUM((*&Local_4 + 164)[62]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (*&Local_4 + 164)[62]);
				}
				if (iVar7 == GET_ACTOR_ENUM((*&Local_4 + 164)[02]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (*&Local_4 + 164)[02]);
				}
				if (iVar7 == GET_ACTOR_ENUM((*&Local_4 + 164)[12]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (*&Local_4 + 164)[12]);
				}
				if (iVar7 == GET_ACTOR_ENUM((*&Local_4 + 164)[32]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (*&Local_4 + 164)[32]);
				}
				if (iVar7 == GET_ACTOR_ENUM((*&Local_4 + 164)[42]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (*&Local_4 + 164)[42]);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 164)[72]))
				{
					if (iVar7 == GET_ACTOR_ENUM((*&Local_4 + 164)[72]))
					{
						CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (*&Local_4 + 164)[72]);
					}
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_337(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0xF4C7 / 62663
{
	if (Function_338(&uParam0) == iParam7 || Function_331())
	{
		return 1;
	}
	return 0;
}

int Function_338(int iParam0) //Position: 0xF4E6 / 62694
{
	if (Function_283(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_339(int iParam0) //Position: 0xF4FE / 62718
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

void Function_340() //Position: 0xF5B2 / 62898
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(Local_4.f_232) && Function_158(&(Global_29008[Global_30640[1]]), 8))
	{
		Function_352();
		if (bLocal_913 > 3)
		{
			if (IS_ACTOR_VALID((*&Local_4 + 164)[72]))
			{
				DESTROY_ACTOR((*&Local_4 + 164)[72]);
			}
		}
		if (!iLocal_1247)
		{
			Function_350((*&Local_4 + 164)[22], &iLocal_1085);
			Function_350((*&Local_4 + 164)[52], &iLocal_1085);
			Function_350((*&Local_4 + 164)[62], &iLocal_1085);
			iLocal_1247 = 1;
		}
		Function_349();
		bLocal_1143 = (*&Local_4 + 236)[02];
		if (bLocal_913 == 1)
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_232))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar1, 2);
				TASK_CLEAR(bVar1);
				TASK_WANDER(bVar1, -1.0f);
				bVar0++;
			}
			TASK_CLEAR((*&Local_4 + 164)[12]);
			TELEPORT_ACTOR((*&Local_4 + 164)[12], &Local_4 + 640[16], 1, 1, 1);
			Function_348((*&Local_4 + 164)[12], bLocal_1140);
			TASK_STAND_STILL((*&Local_4 + 164)[12], -1.0f, 0, 0);
			Function_298((*&Local_4 + 164)[12], 1);
			TASK_CLEAR((*&Local_4 + 164)[22]);
			TELEPORT_ACTOR((*&Local_4 + 164)[22], &Local_4 + 640[26], 1, 1, 1);
			Function_348((*&Local_4 + 164)[22], bLocal_1140);
			TASK_STAND_STILL((*&Local_4 + 164)[22], -1.0f, 0, 0);
			Function_298((*&Local_4 + 164)[22], 3);
			TASK_WANDER(bLocal_1143, -1.0f);
		}
		if (bLocal_913 == 4)
		{
			Function_294(Local_4.f_232, Local_4.f_1828, 1, 0, 1);
		}
		Function_217(Local_4.f_232, 0);
		Function_344(&(Local_969[217]), Local_4.f_232, "RWCrowd", 0, 0x5f5e100, 1);
		Function_341(&(Local_969[217]), 256, 1);
		Function_344(&(Local_969[317]), bLocal_1143, "RWCrowd", 0, 0x5f5e100, 1);
		Function_341(&(Local_969[317]), 256, 1);
	}
	return;
}

void Function_341(char* cParam0, int iParam1, int iParam2) //Position: 0xF773 / 63347
{
	if (iParam1 != 100000000)
	{
		Function_343(cParam0, iParam1, iParam2);
	}
	else
	{
		Function_342(cParam0, iParam2);
	}
	return;
}

void Function_342(int iParam0, bool bParam1) //Position: 0xF796 / 63382
{
	iParam0->f_40 = 0;
	Function_343(iParam0, 2, bParam1);
	Function_343(iParam0, 4, bParam1);
	Function_343(iParam0, 8, bParam1);
	Function_343(iParam0, 16, bParam1);
	Function_343(iParam0, 32, bParam1);
	Function_343(iParam0, 64, bParam1);
	Function_343(iParam0, 128, bParam1);
	Function_343(iParam0, 256, bParam1);
	Function_343(iParam0, 512, bParam1);
	Function_343(iParam0, 1024, bParam1);
	return;
}

void Function_343(int iParam0, int iParam1, bool bParam2) //Position: 0xF7FC / 63484
{
	bool bVar0;
	
	Function_75(iParam0 + 40, iParam1);
	bVar0 = false;
	Function_75(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_36(iParam0 + 40, bVar0);
	}
	else
	{
		Function_75(iParam0 + 40, bVar0);
	}
	return;
}

int Function_344(bool bParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF838 / 63544
{
	if (!Function_347(bParam0, uParam1))
	{
		return 0;
	}
	if (!Function_346(bParam0, bParam2))
	{
		return 0;
	}
	Function_345(bParam0, iParam3);
	bParam0->f_40 = 0;
	Function_341(bParam0, iParam4, iParam5);
	return 1;
}

void Function_345(char* cParam0, int iParam1) //Position: 0xF874 / 63604
{
	cParam0->f_36 = iParam1;
	return;
}

bool Function_346(int iParam0, bool bParam1) //Position: 0xF880 / 63616
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

bool Function_347(var uParam0, bool bParam1) //Position: 0xF909 / 63753
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

void Function_348(bool bParam0, bool bParam1) //Position: 0xFA95 / 64149
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_296(StackVal, StackVal, bParam0, vVar0);
	return;
}

void Function_349() //Position: 0xFAAF / 64175
{
	(*&Local_4 + 236)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Aquila", 611, -3293,099f, 17,62123f, 2675,808f, 0.0f, 200.0f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 236)[02], false);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 236)[02], 4, 0,5f, 1, 1);
	SET_ACTOR_FACTION((*&Local_4 + 236)[02], 20);
	ACTOR_START_FORCE_HOLSTER((*&Local_4 + 236)[02], 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 236)[02], 0);
	SET_ALLOW_EXECUTE((*&Local_4 + 236)[02], 0);
	AI_IGNORE_ACTOR((*&Local_4 + 236)[02]);
	AI_DONT_HARM_ACTOR((*&Local_4 + 236)[02]);
	return;
}

void Function_350(bool bParam0, int iParam1) //Position: 0xFB44 / 64324
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = Function_351(bParam0, iParam1);
		if (bVar0)
		{
			iVar1 = 0;
			while (iVar1 <= *iParam1)
			{
				if (!IS_ACTOR_VALID((*iParam1)[iVar19]))
				{
					(*iParam1)[iVar19] = bParam0;
					return;
				}
				iVar1++;
			}
		}
	}
	return;
}

int Function_351(int iParam0, int iParam1) //Position: 0xFB8A / 64394
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam1)
	{
		if (IS_ACTOR_VALID((*iParam1)[iVar09]))
		{
			if (iParam0 == (*iParam1)[iVar09])
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_352() //Position: 0xFBBE / 64446
{
	Local_4.f_232 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Crowd"));
	(*&Local_4 + 164)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CrowdMember01", 173, -3301,04f, 16,043f, 2724,344f, 0.0f, 330.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 164)[02], Local_4.f_232);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 164)[02], false);
	SET_ACTOR_FACTION((*&Local_4 + 164)[02], 20);
	ACTOR_START_FORCE_HOLSTER((*&Local_4 + 164)[02], 0, 0);
	EQUIP_ACCESSORY((*&Local_4 + 164)[02], 0, 1);
	AI_IGNORE_ACTOR((*&Local_4 + 164)[02]);
	AI_DONT_HARM_ACTOR((*&Local_4 + 164)[02]);
	(*&Local_4 + 164)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CrowdMember02", 172, -3288,594f, 17,47133f, 2704,387f, 0.0f, 7,23038f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 164)[12], Local_4.f_232);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 164)[12], false);
	SET_ACTOR_FACTION((*&Local_4 + 164)[12], 20);
	ACTOR_START_FORCE_HOLSTER((*&Local_4 + 164)[12], 0, 0);
	EQUIP_ACCESSORY((*&Local_4 + 164)[12], 0, 1);
	AI_IGNORE_ACTOR((*&Local_4 + 164)[12]);
	AI_DONT_HARM_ACTOR((*&Local_4 + 164)[12]);
	(*&Local_4 + 164)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CrowdMember04", 39, -3285,89f, 17,54202f, 2702,334f, 0.0f, 90.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 164)[22], Local_4.f_232);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 164)[22], false);
	SET_ACTOR_FACTION((*&Local_4 + 164)[22], 20);
	ACTOR_START_FORCE_HOLSTER((*&Local_4 + 164)[22], 0, 0);
	EQUIP_ACCESSORY((*&Local_4 + 164)[22], 0, 1);
	AI_IGNORE_ACTOR((*&Local_4 + 164)[22]);
	AI_DONT_HARM_ACTOR((*&Local_4 + 164)[22]);
	(*&Local_4 + 164)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CrowdMember05", 765, -3248,759f, 15,89632f, 2735,604f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 164)[32], Local_4.f_232);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 164)[32], false);
	SET_ACTOR_FACTION((*&Local_4 + 164)[32], 20);
	ACTOR_START_FORCE_HOLSTER((*&Local_4 + 164)[32], 0, 0);
	EQUIP_ACCESSORY((*&Local_4 + 164)[32], 0, 1);
	AI_IGNORE_ACTOR((*&Local_4 + 164)[32]);
	AI_DONT_HARM_ACTOR((*&Local_4 + 164)[32]);
	(*&Local_4 + 164)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CrowdMember06", 760, -3259,775f, 15,9903f, 2719,28f, 0.0f, 90.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 164)[42], Local_4.f_232);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 164)[42], false);
	SET_ACTOR_FACTION((*&Local_4 + 164)[42], 20);
	ACTOR_START_FORCE_HOLSTER((*&Local_4 + 164)[42], 0, 0);
	EQUIP_ACCESSORY((*&Local_4 + 164)[42], 0, 1);
	AI_IGNORE_ACTOR((*&Local_4 + 164)[42]);
	AI_DONT_HARM_ACTOR((*&Local_4 + 164)[42]);
	(*&Local_4 + 164)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CrowdMember07", 758, -3260,072f, 15,09948f, 2751,998f, 0.0f, 270.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 164)[52], Local_4.f_232);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 164)[52], false);
	SET_ACTOR_FACTION((*&Local_4 + 164)[52], 20);
	ACTOR_START_FORCE_HOLSTER((*&Local_4 + 164)[52], 0, 0);
	EQUIP_ACCESSORY((*&Local_4 + 164)[52], 0, 1);
	AI_IGNORE_ACTOR((*&Local_4 + 164)[52]);
	AI_DONT_HARM_ACTOR((*&Local_4 + 164)[52]);
	(*&Local_4 + 164)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CrowdMember08", 763, -3260,618f, 15,87009f, 2727,228f, 0.0f, 90.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 164)[62], Local_4.f_232);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 164)[62], false);
	SET_ACTOR_FACTION((*&Local_4 + 164)[62], 20);
	ACTOR_START_FORCE_HOLSTER((*&Local_4 + 164)[62], 0, 0);
	EQUIP_ACCESSORY((*&Local_4 + 164)[62], 0, 1);
	AI_IGNORE_ACTOR((*&Local_4 + 164)[62]);
	AI_DONT_HARM_ACTOR((*&Local_4 + 164)[62]);
	(*&Local_4 + 164)[72] = CREATE_ACTOR_IN_LAYOUT(Local_4, "CrowdMember03_x_x_x", 171, -3285,616f, 17,54202f, 2703,524f, 0.0f, 55.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 164)[72], Local_4.f_232);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 164)[72], false);
	SET_ACTOR_FACTION((*&Local_4 + 164)[72], 20);
	ACTOR_START_FORCE_HOLSTER((*&Local_4 + 164)[72], 0, 0);
	EQUIP_ACCESSORY((*&Local_4 + 164)[72], 0, 1);
	AI_IGNORE_ACTOR((*&Local_4 + 164)[72]);
	AI_DONT_HARM_ACTOR((*&Local_4 + 164)[72]);
	return;
}

int Function_353(bool bParam0) //Position: 0x1001B / 65563
{
	if (!Function_80(bParam0))
	{
		return 1;
	}
	return Function_158(&(Global_29008[bParam0]), 4);
}

void Function_354() //Position: 0x10037 / 65591
{
	struct<16> Var0[6];
	int iVar97;
	
	strcpy(&(Var0[016]), "p_gen_bottleSnakeOil01x", 64);
	strcpy(&(Var0[116]), "p_gen_bottleSnakeOil01x", 64);
	strcpy(&(Var0[216]), "p_gen_bottleSnakeOil01x", 64);
	strcpy(&(Var0[316]), "p_gen_bottleSnakeOil01x", 64);
	strcpy(&(Var0[416]), "p_gen_bottleSnakeOil02x", 64);
	strcpy(&(Var0[516]), "p_gen_bottleSnakeOil02x", 64);
	iVar97 = 0;
	while (iVar97 <= 6)
	{
		bLocal_1148[iVar97] = CREATE_PROP_IN_LAYOUT(bLocal_723, Function_53(), &(Var0[iVar9716]), *(&Local_4 + 2692[iVar976]), *(&Local_4 + 2692[iVar976] + 12), 1);
		iLocal_1259[iVar97] = CREATE_EVENT_TRAP(Function_53(), 13, bLocal_723);
		EVENT_TRAP_ON_TARGET(iLocal_1259[iVar97], bLocal_1148[iVar97]);
		iVar97++;
	}
	if (bLocal_913 == 1 && bLocal_913 == 2)
	{
		if (IS_OBJECT_VALID(bLocal_1148[0]))
		{
			DESTROY_OBJECT(bLocal_1148[0]);
			EVENT_TRAP_CLEAR_EVENTS(iLocal_1259[0]);
		}
	}
	return;
}

void Function_355(int iParam0) //Position: 0x10198 / 65944
{
	Function_356(&Global_28842, iParam0);
	return;
}

void Function_356(var uParam0, int iParam1) //Position: 0x101A6 / 65958
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_357(bool bParam0) //Position: 0x101C9 / 65993
{
	Function_358(0, 0x40400000);
	Function_203();
	Function_202();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_358(bool bParam0, float fParam1) //Position: 0x101FD / 66045
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
	Function_360();
	Function_359();
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

void Function_359() //Position: 0x102FB / 66299
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_360() //Position: 0x1032D / 66349
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

void Function_361(bool bParam0) //Position: 0x1042A / 66602
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (bParam0 == bLocal_1140)
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_1140, "Merchant02_gunOnWest_demo", "Merchant02_gunOnWest_demo", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
		}
	}
	return;
}

bool Function_362(var uParam0, var uParam1, bool bParam2, float fParam3, bool bParam4) //Position: 0x1048B / 66699
{
	bool bVar0;
	
	if (Function_324(GET_WEAPON_IN_HAND(Global_34573)))
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
							if (Function_363(*uParam0, Global_34573, 50.0f))
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

bool Function_363(var uParam0, var uParam1, float fParam2) //Position: 0x10553 / 66899
{
	float fVar0;
	
	fVar0 = Function_364(uParam0, uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_364(bool bParam0, bool bParam1) //Position: 0x10570 / 66928
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_365(&uVar0, &uVar3);
	return iVar6;
}

var Function_365(var uParam0, bool bParam1) //Position: 0x1058F / 66959
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_366() //Position: 0x105AD / 66989
{
	if (!IS_ACTOR_RIDING(Global_34573))
	{
		bLocal_1141 = GET_MOST_RECENT_MOUNT(Global_34573);
		if (IS_ACTOR_VALID(bLocal_1141))
		{
			if (IS_VOLUME_VALID((*&Local_4 + 340)[4]))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_1141, (*&Local_4 + 340)[4]))
				{
					if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_1141)) && !DECOR_CHECK_EXIST(bLocal_1141, "HorseLeash"))
					{
						if (GET_TASK_STATUS(bLocal_1143, 25) != 1)
						{
							TASK_FLEE_ACTOR(bLocal_1141, Global_34573, 75.0f, -1.0f, 0, 0, 0);
						}
					}
				}
			}
		}
	}
	return;
}

void Function_367(bool bParam0) //Position: 0x1062E / 67118
{
	bool bVar0;
	
	if ((Function_369(Local_4.f_232, Global_34573) || MEMORY_GET_IS_VISIBLE(bLocal_1140, Global_34573)) || MEMORY_GET_IS_VISIBLE(bLocal_1143, Global_34573))
	{
		bVar0 = GET_LAST_ATTACK_TARGET(Global_34573);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTOR_HUMAN(bVar0) || IS_ACTOR_HORSE(bVar0))
			{
				if (bVar0 != bParam0)
				{
					if (bVar0 != Global_34573)
					{
						Function_368(Local_4.f_232, Global_34573, 50.0f, -1.0f, 1, 1);
						if (IS_ACTOR_HUMAN(bVar0))
						{
							if (IS_ACTOR_ALIVE(bVar0))
							{
								Function_232("RWCrowd_attacked");
							}
							else
							{
								Function_232("RWCrowd_killed");
							}
						}
						else if (IS_ACTOR_HORSE(bVar0))
						{
							if (IS_ACTOR_ALIVE(bVar0))
							{
								Function_232("RWCrowd_horse_attacked");
							}
							else
							{
								Function_232("RWCrowd_horse_killed");
							}
						}
						else
						{
							Function_232("Merchant02_disrupt_show");
						}
						bLocal_1081 = true;
					}
				}
			}
		}
	}
	return;
}

void Function_368(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x10741 / 67393
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
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_CLEAR(bVar1);
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, bParam5);
		}
		bVar0++;
	}
}

int Function_369(bool bParam0, bool bParam1) //Position: 0x107AF / 67503
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
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1) && MEMORY_GET_IS_VISIBLE(bVar1, bParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_370() //Position: 0x10805 / 67589
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (IS_OBJECT_VALID(bLocal_1148[iVar0]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(iLocal_1259[iVar0]))
			{
				EVENT_TRAP_CLEAR_TRAP_FLAG(iLocal_1259[iVar0]);
				Function_300(bLocal_1148[iVar0]);
				UNK_0x6745191B(CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_723, "exp_snake_oil", "exp_snake_oil", Function_300(bLocal_1148[iVar0])), 0.0f, 0.0f, 0.0f);
				DESTROY_OBJECT(bLocal_1148[iVar0]);
				iLocal_1215++;
				if (iLocal_1215 <= 2)
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_371();
				}
				else
				{
					Function_232("Merchant02_disrupt_show");
					bLocal_1081 = true;
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_371() //Position: 0x108BD / 67773
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_jonShootsBottle", "Merchant02_jonShootsBottle", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_372(int iParam0) //Position: 0x1091A / 67866
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_373(int iParam0) //Position: 0x1092E / 67886
{
	if (!Function_280(iParam0))
	{
		Function_317(iParam0, 0.0f);
	}
	return;
}

void Function_374(bool bParam0, bool bParam1) //Position: 0x10943 / 67907
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
					RESET_ANIM_SET_FOR_ACTOR(bVar1, 1);
					SET_ANIM_SET_FOR_ACTOR(bVar1, "crowd_win_lose", 0);
					bLocal_1211 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
					TASK_ACTION_PERFORM(false, "crowd_win_lose/Win");
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bVar1, bLocal_1211);
					TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar1, 1);
					SET_ANIM_SET_FOR_ACTOR(bVar1, "crowd_win_lose", 0);
					bLocal_1211 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
					TASK_ACTION_PERFORM(false, "crowd_win_lose/Win");
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bVar1, bLocal_1211);
					TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_375() //Position: 0x10A42 / 68162
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_jonShoots1st_v1_AA", "Merchant02_jonShoots1st_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_jonShoots1st_v1_AB", "Merchant02_jonShoots1st_v1_AB", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_376() //Position: 0x10AEE / 68334
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	bVar5 = CREATE_OBJECT_ITERATOR(bLocal_723);
	ITERATE_IN_LAYOUT(bVar5, GET_EVENT_LAYOUT());
	bVar6 = START_OBJECT_ITERATOR(bVar5);
	while (IS_OBJECT_VALID(bVar6))
	{
		bVar7 = GET_EVENT_FROM_OBJECT(bVar6);
		if (IS_EVENT_VALID(bVar7))
		{
			if (GET_EVENT_TYPE(bVar7) == 11)
			{
				if (GET_EVENT_TARGET_AS_OBJECT(bVar7) != GET_OBJECT_FROM_ACTOR(bLocal_1143) && GET_EVENT_PERPETRATOR(bVar7) != GET_OBJECT_FROM_ACTOR(Global_34573))
				{
					GET_OBJECT_POSITION(bLocal_1143, &vVar1);
					bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vVar1, 3.0f, "revolver", 1);
					if (IS_PHYSINST_VALID(bVar0))
					{
						DESTROY_OBJECT(bVar0);
					}
					DESTROY_ITERATOR(bVar5);
					return 1;
				}
			}
		}
		bVar6 = OBJECT_ITERATOR_NEXT(bVar5);
	}
	DESTROY_ITERATOR(bVar5);
	if (IS_ACTOR_VALID(GET_LAST_ATTACKER(bLocal_1143)))
	{
		if (GET_LAST_ATTACKER(bLocal_1143) == Global_34573)
		{
			if (GET_LAST_HIT_ZONE(bLocal_1143, &iVar4))
			{
				if (iVar4 == 6)
				{
					GET_OBJECT_POSITION(bLocal_1143, &vVar1);
					bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vVar1, 3.0f, "revolver", 1);
					if (IS_PHYSINST_VALID(bVar0))
					{
						DESTROY_OBJECT(bVar0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_377(bool bParam0, var uParam1, vector3 vParam2, int iParam5, bool bParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14) //Position: 0x10BE2 / 68578
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_378(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_379()) * (fParam8 - fParam7)) * 0,5f))) || bParam13)
	{
		if (!bParam6 && (HUD_IS_FADED() || HUD_IS_FADING()))
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
		if ((iParam14 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
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
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_CUSTOM_OVERRIDE: Preload cutscene DOES NOT exist, going to CUTPRELOAD_SKIPPEDLOADING");
					*uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0))
				{
					*uParam1 = 1;
				}
				else
				{
					if (HUD_IS_FADED())
					{
						LOG_ERROR("you're trying to preload a cutscene while faded out...was that intentional?");
					}
					CUTSCENE_MANAGER_LOAD_CUTFILE(bParam0, 0, iParam9, iParam10, iParam11, iParam12);
					*uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					*uParam1 = 5;
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					*uParam1 = 2;
				}
				break;
			
			case 0x00000002:
				Call_Loc(iParam5);
				if (StackVal)
				{
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
	else if ((!Function_378(StackVal, StackVal, Global_34573, vParam2, (fParam8 + ((IntToFloat(Function_379()) * (fParam8 - fParam7)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam13)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_378(StackVal, StackVal, Global_34573, vParam2, fParam7))
	{
	}
	return 0;
}

bool Function_378(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x10E9C / 69276
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_320(bParam0);
		if (VDIST(Function_320(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_379() //Position: 0x10F26 / 69414
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_380() //Position: 0x10F35 / 69429
{
	bool bVar0;
	var uVar1;
	var uVar4;
	int iVar7;
	
	if (Function_336())
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &uVar1, &uVar4))
			{
				iVar7 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar0);
				if (Function_334(iVar7))
				{
					if (iVar7 == GET_ACTOR_ENUM((*&Local_4 + 236)[02]))
					{
						CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (*&Local_4 + 236)[02]);
					}
				}
			}
			bVar0++;
		}
		return 1;
	}
	return 0;
}

void Function_381() //Position: 0x10F91 / 69521
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (iLocal_914 < 3 && iLocal_914 >= 105)
	{
		Function_377(StackVal, StackVal, "$/cutscene/MERCHANT02_CS03_C_P1/MERCHANT02_CS03_C_P1", &uLocal_1084, *(&Local_4 + 2272[26]), 62057, 0, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1);
		if (!IS_ACTOR_ALIVE(bLocal_1143))
		{
			Function_220();
			Function_232("Merchant02_killed_aquila");
			bLocal_1081 = true;
		}
		if (Function_396(&fLocal_1198, (*&Local_4 + 368)[1], (*&Local_4 + 368)[2], "", "Merchant02_abandoned_fight", &bLocal_1081, 1, 0, 0, 330, 1))
		{
			Function_395();
			if (IS_ACTOR_IN_VOLUME(bLocal_1143, (*&Local_4 + 368)[1]))
			{
				if (Function_280(&iLocal_1189))
				{
					Function_394();
					Function_372(&iLocal_1189);
				}
				if (!iLocal_1243)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						HUD_CLEAR_OBJECTIVE();
						Function_325("Merchant02_return_fight_02", 7,5f, 1, 2, 0, 0, 0);
						iLocal_1243 = 1;
					}
				}
			}
			if (GET_TASK_STATUS(bLocal_1143, 0) != 1)
			{
				bLocal_1211 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &Local_4 + 2656[06], true);
				TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
				TASK_TAUNT_ACTOR_IN_PLACE(false, Global_34573, -1f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_1143, bLocal_1211);
				TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
			}
		}
		else
		{
			Function_395();
			if (!Function_280(&iLocal_1189))
			{
				Function_373(&iLocal_1189);
			}
			if (GET_TASK_STATUS(bLocal_1143, 45) != 1)
			{
				COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS_MULTIPLIER(bLocal_1143, 0,75f);
				TASK_MELEE_ATTACK(bLocal_1143, Global_34573, -1.0f);
				iLocal_1243 = 0;
			}
		}
		if (IS_WEAPON_DRAWN(Global_34573))
		{
			if (iLocal_1244 == 0)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_325("Merchant02_put_away_weapon", 7,5f, 1, 2, 0, 0, 0);
				SAY_SINGLE_LINE_STRING_OVER_PAIN(bLocal_1143, "Merchant02_gunOnAquila", 1, 0, 3, 0);
				iLocal_1244 = 1;
			}
			if (Function_392(bLocal_1143, "Merchant02_killed_aquila", &uLocal_1221, &bLocal_1081, 1, 0.0f, 0, 0, 1))
			{
				Function_368(Local_4.f_232, Global_34573, 50.0f, -1.0f, 1, 1);
			}
			if (Function_391(bLocal_1143))
			{
				Function_368(Local_4.f_232, Global_34573, 50.0f, -1.0f, 1, 1);
				Function_232("Merchant02_disrupt_show");
				bLocal_1081 = true;
			}
			if (GET_LAST_HIT_WEAPON(bLocal_1143) != 4294967295)
			{
				Function_368(Local_4.f_232, Global_34573, 50.0f, -1.0f, 1, 1);
				Function_232("Merchant02_disrupt_show");
				bLocal_1081 = true;
			}
		}
		else if (iLocal_1244 == 1)
		{
			iLocal_1244 = 0;
		}
		Function_387();
		Function_370();
		Function_366();
		Function_361(Function_362(&uVar0, &uLocal_1210, 1, 0x40c00000, 0));
	}
	switch (iLocal_914)
	{
		case 0x00000000:
			Function_357(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_923 = Global_30640[1];
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			if (iLocal_1072[3] == 0)
			{
				Function_226(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				SET_ENABLE_NAV_STICK_INPUT(0, 1);
				SET_PLAYER_CONTROL_CONFIG(0, 0);
				SET_PLAYER_PERFECT_ACCURACY(Global_34573, 1);
				SET_CAN_ACTOR_HARDLOCK_NEUTRALS(Global_34573, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
				SET_INFINITE_DEADEYE(0, 1);
				Function_219(1);
				fLocal_1219 = ACTOR_GET_WEAPON_AMMO(Global_34573, 4);
				fLocal_1220 = ACTOR_GET_WEAPON_AMMO(Global_34573, 8);
				Function_159(4, 1, 0);
				Function_159(8, 1, 0);
				_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, 7, true);
				_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, 8, true);
				bLocal_1242 = true;
				SET_ACTOR_HEALTH(bLocal_1140, GET_ACTOR_MAX_HEALTH(bLocal_1140));
				Function_161(49165);
				Function_355(9);
				Function_301(Global_34573, (*&Local_4 + 1800)[1], 0, 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1140, *(&Local_4 + 2492[16]), 1, true, 1);
				TASK_STAND_STILL(bLocal_1140, -1.0f, 0, 0);
				Function_301(bLocal_1142, (*&Local_4 + 2468)[0], 0, 1, 1, 1);
				ENABLE_VEHICLE_SEAT(bLocal_1142, false, 0);
				Function_354();
				bLocal_1155 = CREATE_PROP_IN_LAYOUT(Local_4, Function_53(), "p_gen_tableSnakeOil01x", *(&Local_4 + 2368[16]), *(&Local_4 + 2368[16] + 12), 1);
				Function_210(bLocal_723);
				Function_210(Local_4);
				Function_208();
				iLocal_914 = 1;
			}
			else
			{
				iLocal_914 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_353(bLocal_923)) && Function_158(&(Global_29008[bLocal_923]), 8))
			{
				Function_340();
				TASK_CLEAR(bLocal_1143);
				Function_301(bLocal_1143, (*&Local_4 + 1800)[4], 0, 1, 1, 1);
				Function_348(bLocal_1143, bLocal_1140);
				TASK_STAND_STILL(bLocal_1143, -1.0f, 0, 0);
				Function_270(1.0f);
				iLocal_914 = 2;
			}
			break;
		
		case 0x00000002:
			bLocal_1268 = GET_SOUND_ID();
			PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1268, "MERCHANT02_CROWD_A_MASTER", *(&Local_4 + 2656[06]));
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			ACTOR_HOLSTER_WEAPON(Global_34573, 0);
			if (Function_337(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_724, bLocal_913))
			{
				iLocal_914 = 3;
			}
			else
			{
				Function_301(Global_34573, (*&Local_4 + 1800)[0], 0, 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1140, *(&Local_4 + 2492[16]), 1, true, 1);
				TASK_STAND_STILL(bLocal_1140, -1.0f, 0, 0);
				bVar1 = false;
				while (bVar1 <= SQUAD_GET_SIZE(Local_4.f_232))
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar1);
					Function_301(bVar2, (*&Local_4 + 1832)[bVar1], 0, 1, 1, 1);
					TASK_STAND_STILL(bVar2, -1.0f, 0, 0);
					bVar1++;
				}
				Function_301(bLocal_1143, (*&Local_4 + 1800)[4], 0, 1, 1, 1);
				SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_1143, (*&Local_4 + 368)[0], 2, true);
				MEMORY_REPORT_POSITION_AUTO(bLocal_1143, Global_34573, true);
				TASK_STAND_STILL(bLocal_1143, -1.0f, 0, 0);
				DECOR_SET_BOOL(bLocal_1143, "Aguila", true);
				Function_290();
				iLocal_914 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_272("$/cutscene/MERCHANT02_CS03_B_S/MERCHANT02_CS03_B_S", &Local_915, &Local_724, &bLocal_913, 56197, 55861, 55084, 51849, 51429, 61985, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_914 = 4;
			}
			break;
		
		case 0x00000004:
			Function_238(bLocal_913);
			Function_326(StackVal, StackVal, Function_238(bLocal_913), bLocal_913, Global_30628[1], Function_241(bLocal_913), 0);
			Function_270(1.0f);
			AUDIO_MUSIC_SET_MOOD("FIST_FIGHT", 0, 4294967295, 4294967295);
			AUDIO_SET_PLAYER_MOOD(2, 0);
			SET_ACTOR_KO_POINTS(Global_34573, GET_ACTOR_MAX_KO_POINTS(Global_34573));
			DECOR_SET_BOOL(Global_34573, "bThreeStrikes", true);
			SET_PLAYER_MELEE_MODE_SELECTED(1, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			ACTOR_HOLSTER_WEAPON(Global_34573, 0);
			TASK_STAND_STILL(bLocal_1140, -1.0f, 0, 0);
			bVar3 = false;
			while (bVar3 <= SQUAD_GET_SIZE(Local_4.f_232))
			{
				bVar4 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar3);
				if (Function_386())
				{
					Function_348(bVar4, Global_34573);
				}
				else
				{
					Function_348(bVar4, bLocal_1143);
				}
				RESET_ANIM_SET_FOR_ACTOR(bVar4, 1);
				SET_ANIM_SET_FOR_ACTOR(bVar4, "crowd_cheer", 0);
				SET_ACTION_NODE_FOR_ACTOR(bVar4, "crowd_cheer/random_loop");
				bVar3++;
			}
			Function_384(&(Local_969[217]), 128);
			SET_ACTOR_FACTION(bLocal_1143, 19);
			AUDIO_TURN_OFF_PAIN_VOCALS(bLocal_1143);
			DECOR_SET_BOOL(bLocal_1143, "bDoNotBlock", true);
			SET_ACTOR_HEALTH(bLocal_1143, 1.0f);
			Function_339(&(Local_969[317]));
			if (IS_ATTACHMENT_VALID(bLocal_1158))
			{
				REMOVE_OBJECT_ATTACHMENT(bLocal_1158);
			}
			if (IS_OBJECT_VALID(bLocal_1157))
			{
				DESTROY_OBJECT(bLocal_1157);
			}
			iLocal_1254 = 0;
			iLocal_914 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_383();
				iLocal_914 = 7;
			}
			break;
		
		case 0x00000007:
			SET_ACTOR_KO_POINTS(bLocal_1143, GET_ACTOR_MAX_KO_POINTS(bLocal_1143));
			SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(2, 19, 0,4f);
			iLocal_914 = 8;
			break;
		
		case 0x00000008:
			if (UNK_0x7A207FFE(Global_34573))
			{
				Function_382(Local_4.f_232, 1);
				bLocal_1266 = GET_SOUND_ID();
				PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1266, "MERCHANT02_BOO_MASTER", Global_34574);
				Function_232("Merchant02_fail_fight");
				bLocal_1081 = true;
			}
			if (UNK_0x7A207FFE(bLocal_1143))
			{
				Function_220();
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_1143));
				AUDIO_TURN_ON_PAIN_VOCALS(bLocal_1143);
				Function_374(Local_4.f_232, 1);
				bLocal_1267 = GET_SOUND_ID();
				PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1267, "MERCHANT02_CHEER_MASTER", Global_34574);
				Function_316(&iLocal_1195);
				iLocal_914 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_278(&iLocal_1195) < 2.0f)
			{
				iLocal_1072[4] = 1;
				Function_216(Local_4.f_232);
				Function_218(Local_4.f_232);
				AI_GLOBAL_CLEAR_ALL_DANGER();
				Function_341(&(Local_969[217]), 128, 1);
				bLocal_913 = 5;
				iLocal_914 = 0;
			}
			break;
	}
	return;
}

void Function_382(bool bParam0, bool bParam1) //Position: 0x118A1 / 71841
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
					RESET_ANIM_SET_FOR_ACTOR(bVar1, 1);
					SET_ANIM_SET_FOR_ACTOR(bVar1, "crowd_win_lose", 0);
					bLocal_1211 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
					TASK_ACTION_PERFORM(false, "crowd_win_lose/Lose");
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bVar1, bLocal_1211);
					TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar1, 1);
					SET_ANIM_SET_FOR_ACTOR(bVar1, "crowd_win_lose", 0);
					bLocal_1211 = TASK_SEQUENCE_OPEN();
					TASK_ACTION_PERFORM(false, "crowd_win_lose/Lose");
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bVar1, bLocal_1211);
					TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_383() //Position: 0x11997 / 72087
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_announcefight", "Merchant02_announcefight", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_384(int iParam0, int iParam1) //Position: 0x119F0 / 72176
{
	if (iParam1 != 100000000)
	{
		Function_385(iParam0, iParam1);
	}
	else
	{
		Function_342(iParam0, 1);
	}
	return;
}

void Function_385(int iParam0, bool bParam1) //Position: 0x11A10 / 72208
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_75(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

bool Function_386() //Position: 0x11A3B / 72251
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_387() //Position: 0x11A4E / 72270
{
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (iLocal_1238 != 0 && iLocal_1237 != 0)
		{
			if (GET_ACTOR_KO_POINTS(Global_34573) > 50.0f)
			{
				Function_390();
				iLocal_1238 = 1;
			}
		}
		if (iLocal_1237 != 0 && iLocal_1238 != 0)
		{
			if (GET_ACTOR_KO_POINTS(bLocal_1143) > 50.0f)
			{
				Function_389();
				iLocal_1237 = 1;
			}
		}
	}
	if (!iLocal_1236 && GET_ACTOR_KO_POINTS(bLocal_1143) < 0.0f)
	{
		if (Function_280(&iLocal_1189))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (Function_278(&iLocal_1189) < RAND_FLOAT_RANGE(10.0f, 12.0f))
				{
					if (RAND_INT_RANGE(false, 100) >= 20)
					{
						SAY_SINGLE_LINE_STRING_OVER_PAIN(bLocal_1143, "Merchant02_tauntfight", 1, 0, 3, 0);
					}
					else if (GET_ACTOR_KO_POINTS(bLocal_1143) > 50.0f && GET_ACTOR_KO_POINTS(Global_34573) < GET_ACTOR_KO_POINTS(bLocal_1143))
					{
						SAY_SINGLE_LINE_STRING((*&Local_4 + 164)[02], "Merchant02_jonFightWell_Crowd", true, false, 3, 0, true, false);
					}
					else
					{
						SAY_SINGLE_LINE_STRING((*&Local_4 + 164)[02], "Merchant02_jonFightBad_Crowd", true, false, 3, 0, true, false);
					}
					Function_316(&iLocal_1189);
				}
			}
		}
		if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "GroundAttack/TakeDown") || IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "GroundAttack/Idle"))
		{
			SAY_SINGLE_LINE_STRING_OVER_PAIN(bLocal_1143, "Merchant02_tackled", 1, 0, 3, 0);
			Function_316(&iLocal_1189);
			iLocal_1236 = 1;
		}
		else
		{
			iLocal_1236 = 0;
		}
	}
	switch (iLocal_1254)
	{
		case 0x00000000:
			Function_131("Merchant02_fighting_01", -1.0f, 1, 0, 2, 1, 0);
			iLocal_1254 = 6;
			break;
		
		case 0x00000006:
			if (Function_388())
			{
				HUD_CLEAR_HELP();
				Function_131("Merchant02_fighting_02", -1.0f, 1, 0, 2, 1, 0);
				iLocal_1254 = 7;
			}
			break;
		
		case 0x00000007:
			if (GET_LAST_ATTACKER(bLocal_1143) == Global_34573)
			{
				HUD_CLEAR_HELP();
				Function_131("Merchant02_fighting_03", 10.0f, 1, 0, 2, 1, 0);
				Function_325("Merchant02_defeat_aquila", 7,5f, 1, 2, 0, 0, 0);
				ADD_BLIP_FOR_ACTOR(bLocal_1143, 322, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_1143), "Merchant02_blip_aquila");
				Function_316(&iLocal_1162);
				iLocal_1254 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_278(&iLocal_1162) < 10,5f)
			{
				Function_131("Merchant02_fighting_04", 10.0f, 1, 0, 2, 1, 0);
				Function_316(&iLocal_1162);
				iLocal_1254 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_278(&iLocal_1162) < 10,5f)
			{
				Function_131("Merchant02_fighting_05", 10.0f, 1, 0, 2, 1, 0);
				Function_316(&iLocal_1162);
				iLocal_1254 = 11;
			}
			break;
		
		case 0x0000000B:
			break;
	}
	return;
}

bool Function_388() //Position: 0x11DA5 / 73125
{
	return IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 0, 1, false);
}

void Function_389() //Position: 0x11DB7 / 73143
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_jonFightWell_West", "Merchant02_jonFightWell_West", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_390() //Position: 0x11E18 / 73240
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_jonFightBad_West", "Merchant02_jonFightBad_West", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_391(bool bParam0) //Position: 0x11E77 / 73335
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

bool Function_392(bool bParam0, char* cParam1, var uParam2, var uParam3, int iParam4, float fParam5, var uParam6, bool bParam7, bool bParam8) //Position: 0x11E85 / 73349
{
	if (*uParam3 == 1)
	{
		return 1;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_393(bParam0, cParam1, uParam2, uParam3, iParam4, fParam5, uParam6, 0);
	}
	else if (bParam7)
	{
	}
	if (*uParam3 == 1)
	{
		return 1;
	}
	if (bParam8)
	{
		if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
		{
			if (!GET_ACTORS_HORSE(bParam0) != GET_MOUNT(bParam0))
			{
				SET_ACTORS_HORSE(bParam0, GET_MOUNT(bParam0));
			}
		}
		if (IS_ACTOR_VALID(GET_ACTORS_HORSE(bParam0)))
		{
			Function_393(GET_ACTORS_HORSE(bParam0), cParam1, uParam2, uParam3, iParam4, fParam5, uParam6, 1);
		}
		else if (bParam7)
		{
		}
	}
	return *uParam3;
}

void Function_393(bool bParam0, char* cParam1, var uParam2, var uParam3, int iParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x11F19 / 73497
{
	struct<8> Var0;
	struct<8> Var8;
	var uVar16[10];
	int iVar27;
	int iVar28;
	struct<8> Var29;
	var uVar37[10];
	int iVar48;
	int iVar49;
	struct<8> Var50;
	
	if ((uParam6 && GET_WEAPON_IN_HAND(Global_34573) != 21) && GET_LAST_ATTACKER(bParam0) != Global_34573)
	{
		*uParam3 = 1;
		if (!bParam7)
		{
			Function_232(cParam1);
		}
		else
		{
			strcpy(&Var0, cParam1, 32);
			stradd(&Var0, "_horse", 32);
			Function_232(&Var0);
		}
		return;
	}
	if (GET_LAST_ATTACK_TARGET(Global_34573) == bParam0)
	{
		if ((uParam6 && GET_WEAPON_IN_HAND(Global_34573) != 21) || IS_ACTOR_DEAD(bParam0))
		{
			*uParam3 = 1;
			if (!bParam7)
			{
				Function_232(cParam1);
			}
			else
			{
				strcpy(&Var8, cParam1, 32);
				stradd(&Var8, "_horse", 32);
				Function_232(&Var8);
			}
			return;
		}
		iVar27 = 0;
		iVar28 = 0;
		iVar28 = 0;
		while (iVar28 <= 10)
		{
			if (((*uParam2)[iVar28] + fParam5) <= GET_CURRENT_GAME_TIME() && (*uParam2)[iVar28] < 0.0f)
			{
				uVar16[iVar27] = (*uParam2)[iVar28];
				iVar27++;
			}
			(*uParam2)[iVar28] = -1.0f;
			iVar28++;
		}
		iVar28 = 0;
		iVar28 = 0;
		while (iVar28 <= iVar27)
		{
			(*uParam2)[iVar28] = uVar16[iVar28];
			iVar28++;
		}
		(*uParam2)[iVar27] = GET_CURRENT_GAME_TIME();
		iVar27++;
		CLEAR_LAST_ATTACK(Global_34573);
		if (iVar27 <= iParam4 && (*uParam2)[(iVar27 - 1)] > ((*uParam2)[0] + fParam5))
		{
			*uParam3 = 1;
			if (!bParam7)
			{
				Function_232(cParam1);
			}
			else
			{
				strcpy(&Var29, cParam1, 32);
				stradd(&Var29, "_horse", 32);
				Function_232(&Var29);
			}
		}
	}
	else if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
	{
		if (GET_LAST_ATTACK_TARGET(GET_MOUNT(Global_34573)) == bParam0)
		{
			iVar48 = 0;
			iVar49 = 0;
			iVar49 = 0;
			while (iVar49 <= 10)
			{
				if (((*uParam2)[iVar49] + fParam5) <= GET_CURRENT_GAME_TIME() && (*uParam2)[iVar49] < 0.0f)
				{
					uVar37[iVar48] = (*uParam2)[iVar49];
					iVar48++;
				}
				(*uParam2)[iVar49] = -1.0f;
				iVar49++;
			}
			iVar49 = 0;
			iVar49 = 0;
			while (iVar49 <= iVar48)
			{
				(*uParam2)[iVar49] = uVar37[iVar49];
				iVar49++;
			}
			(*uParam2)[iVar48] = GET_CURRENT_GAME_TIME();
			iVar48++;
			CLEAR_LAST_ATTACK(GET_MOUNT(Global_34573));
			if (iVar48 <= iParam4 && (*uParam2)[(iVar48 - 1)] > ((*uParam2)[0] + fParam5))
			{
				*uParam3 = 1;
				if (!bParam7)
				{
					Function_232(cParam1);
				}
				else
				{
					strcpy(&Var50, cParam1, 32);
					stradd(&Var50, "_horse", 32);
					Function_232(&Var50);
				}
			}
		}
	}
}

void Function_394() //Position: 0x1216C / 74092
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_walksFromFight", "Merchant02_walksFromFight", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_395() //Position: 0x121C7 / 74183
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_232))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar0);
		if (ACTORS_IN_RANGE(Global_34573, bVar1, 3.0f) && GET_TASK_STATUS(bLocal_1143, 45) != 1)
		{
			if (GET_TASK_STATUS(bVar1, 25) != 1)
			{
				RESET_ANIM_SET_FOR_ACTOR(bVar1, 1);
				TASK_FLEE_ACTOR(bVar1, Global_34573, 5.0f, 3.0f, 0, 1, 0);
			}
		}
		else if (ACTORS_IN_RANGE(bLocal_1143, bVar1, 3.0f))
		{
			if (GET_TASK_STATUS(bVar1, 25) != 1)
			{
				RESET_ANIM_SET_FOR_ACTOR(bVar1, 1);
				TASK_FLEE_ACTOR(bVar1, bLocal_1143, 5.0f, 3.0f, 0, 1, 0);
			}
		}
		else if (GET_TASK_STATUS(bVar1, 0) != 1)
		{
			RESET_ANIM_SET_FOR_ACTOR(bVar1, 1);
			bLocal_1211 = TASK_SEQUENCE_OPEN();
			if (Function_386())
			{
				TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
			}
			else
			{
				TASK_FACE_ACTOR(false, bLocal_1143, 0, 3212836864);
			}
			TASK_STAND_STILL(false, 3.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bVar1, bLocal_1211);
			TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
		}
		if (GET_TASK_STATUS(bVar1, 6) == 1)
		{
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(bVar1, "crowd_cheer"))
			{
				RESET_ANIM_SET_FOR_ACTOR(bVar1, 1);
				SET_ANIM_SET_FOR_ACTOR(bVar1, "crowd_cheer", 0);
				SET_ACTION_NODE_FOR_ACTOR(bVar1, "crowd_cheer/random_loop");
			}
		}
		bVar0++;
	}
	return;
}

bool Function_396(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x12303 / 74499
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_VOLUME_VALID(bParam1) || !IS_VOLUME_VALID(bParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam2))
	{
		Function_232(bParam4);
		*uParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam1))
	{
		if (!Function_402(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_325(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
				Function_401(64);
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_400(bParam7, 0, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_400(bParam8, 0, 4294967295, 0, bParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				ADD_BLIP_FOR_OBJECT(bParam1, bParam9, 0f, 2, 0);
				DECOR_SET_BOOL(bParam1, "MVODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_402(64))
	{
		Function_399(64);
		if (!Function_398())
		{
			if (bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_397();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8))) && DECOR_CHECK_EXIST(bParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam1));
				DECOR_REMOVE(bParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_400(bParam7, 1, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_400(bParam8, 1, 4294967295, 0, bParam1);
			}
		}
	}
	return 0;
}

void Function_397() //Position: 0x12477 / 74871
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

bool Function_398() //Position: 0x124A2 / 74914
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

void Function_399(bool bParam0) //Position: 0x124E6 / 74982
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

void Function_400(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x12549 / 75081
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

void Function_401(bool bParam0) //Position: 0x125EA / 75242
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
		}
		Function_75(&bVar0, bParam0);
		DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_402(bool bParam0) //Position: 0x1264D / 75341
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_152(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

void Function_403() //Position: 0x12694 / 75412
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	
	if ((iLocal_914 < 3 && iLocal_914 > 105) && iLocal_914 == 95)
	{
		if (Function_377(StackVal, StackVal, "$/cutscene/MERCHANT02_CS03_B_S/MERCHANT02_CS03_B_S", &uLocal_1084, *(&Local_4 + 2272[26]), 62356, 0, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1))
		{
			bLocal_1250 = true;
		}
		else
		{
			bLocal_1250 = false;
		}
		Function_370();
		Function_367(0);
		Function_366();
		Function_361(Function_362(&uVar0, &uLocal_1210, 1, 0x40c00000, 0));
	}
	switch (iLocal_914)
	{
		case 0x00000000:
			Function_357(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_923 = Global_30640[1];
			if (iLocal_1072[2] == 0)
			{
				Function_226(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				SET_ENABLE_NAV_STICK_INPUT(0, 0);
				SET_PLAYER_CONTROL_CONFIG(0, 5);
				SET_PLAYER_PERFECT_ACCURACY(Global_34573, 1);
				SET_CAN_ACTOR_HARDLOCK_NEUTRALS(Global_34573, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
				SET_INFINITE_DEADEYE(0, 1);
				Function_219(0);
				fLocal_1219 = ACTOR_GET_WEAPON_AMMO(Global_34573, 4);
				fLocal_1220 = ACTOR_GET_WEAPON_AMMO(Global_34573, 8);
				Function_159(4, 1, 0);
				Function_159(8, 1, 0);
				_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, 7, true);
				_SET_ACTOR_INFINITE_AMMO_FLAG(Global_34573, 8, true);
				bLocal_1242 = true;
				SET_ACTOR_HEALTH(bLocal_1140, GET_ACTOR_MAX_HEALTH(bLocal_1140));
				Function_161(49165);
				Function_355(9);
				Function_354();
				bLocal_1155 = CREATE_PROP_IN_LAYOUT(Local_4, Function_53(), "p_gen_tableSnakeOil01x", *(&Local_4 + 2368[16]), *(&Local_4 + 2368[16] + 12), 1);
				Function_302(Global_34573, (*&Local_4 + 1392)[1], 1, 1, 1);
				Function_210(bLocal_723);
				Function_210(Local_4);
				Function_208();
				iLocal_914 = 1;
			}
			else
			{
				iLocal_914 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_353(bLocal_923)) && Function_158(&(Global_29008[bLocal_923]), 8))
			{
				Function_301(Global_34573, (*&Local_4 + 1392)[1], 0, 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1140, *(&Local_4 + 2492[16]), 1, true, 1);
				TASK_STAND_STILL(bLocal_1140, -1.0f, 0, 0);
				Function_301(bLocal_1142, (*&Local_4 + 2468)[0], 0, 1, 1, 1);
				ENABLE_VEHICLE_SEAT(bLocal_1142, false, 0);
				Function_340();
				Function_294(Local_4.f_232, Local_4.f_1412, 1, 1, 1);
				TASK_CLEAR(bLocal_1143);
				Function_301(bLocal_1143, (*&Local_4 + 1392)[3], 0, 1, 1, 1);
				Function_348(bLocal_1143, bLocal_1140);
				TASK_STAND_STILL(bLocal_1143, -1.0f, 0, 0);
				iLocal_914 = 2;
			}
			break;
		
		case 0x00000002:
			bLocal_1268 = GET_SOUND_ID();
			PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1268, "MERCHANT02_CROWD_A_MASTER", *(&Local_4 + 2656[06]));
			if (Function_337(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_724, bLocal_913))
			{
				iLocal_914 = 3;
			}
			else
			{
				Function_301(Global_34573, (*&Local_4 + 1392)[1], 0, 1, 1, 1);
				bVar1 = false;
				while (bVar1 <= SQUAD_GET_SIZE(Local_4.f_232))
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar1);
					Function_296(StackVal, StackVal, bVar2, *(&Local_4 + 2616[06]));
					bVar1++;
				}
				TASK_CLEAR(bLocal_1143);
				Function_301(bLocal_1143, (*&Local_4 + 2644)[0], 0, 1, 1, 1);
				TASK_STAND_STILL(bLocal_1143, -1.0f, 0, 0);
				SET_ANIM_SET_FOR_ACTOR(bLocal_1143, "hat_toss", 0);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_1143, "hat_toss/hat_toss_idle");
				Function_290();
				SET_CAMERA_DIRECTION(GET_GAME_CAMERA(), 0,891f, -0,04f, 0,452f, 1);
				Function_270(1.0f);
				iLocal_914 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_272("$/cutscene/MERCHANT02_CS03_A_S/MERCHANT02_CS03_A_S", &Local_915, &Local_724, &bLocal_913, 56197, 55861, 55401, 51849, 51589, 61985, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_1280 = 1;
				iLocal_914 = 4;
			}
			break;
		
		case 0x0000005F:
			if (IS_OBJECT_VALID(bLocal_1157))
			{
				if (GET_DRAW_OBJECT(bLocal_1157))
				{
					SET_DRAW_OBJECT(bLocal_1157, 0);
				}
			}
			if (Function_272("$/cutscene/MERCHANT02_CS03_B_F/MERCHANT02_CS03_B_F", &Local_915, &Local_724, &bLocal_913, 56616, 55861, 55401, 51849, 51589, 51422, 0, 1, 1, 2, 2, 0, 1))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_1157)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_1157));
				}
				if (IS_OBJECT_VALID(bLocal_1157))
				{
					SET_DRAW_OBJECT(bLocal_1157, 1);
				}
				bVar3 = false;
				while (bVar3 <= SQUAD_GET_SIZE(Local_4.f_232))
				{
					bVar4 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar3);
					if (IS_ACTOR_VALID(bVar4))
					{
						bLocal_1211 = TASK_SEQUENCE_OPEN();
						TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
						TASK_FACE_ACTOR(false, bLocal_1143, 1, 3212836864);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bVar4, bLocal_1211);
						TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
					}
					bVar3++;
				}
				UI_ENABLE("loadingspinner");
				Function_270(1.0f);
				iLocal_1280 = 0;
				iLocal_914 = 7;
			}
			break;
		
		case 0x00000004:
			Function_238(bLocal_913);
			Function_326(StackVal, StackVal, Function_238(bLocal_913), bLocal_913, Global_30628[1], Function_241(bLocal_913), 0);
			Function_270(1.0f);
			AUDIO_MUSIC_SET_MOOD("PASTORAL_LOW", 0, 4294967295, 4294967295);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			TASK_STAND_STILL(bLocal_1140, -1.0f, 0, 0);
			bVar5 = false;
			while (bVar5 <= SQUAD_GET_SIZE(Local_4.f_232))
			{
				bVar6 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar5);
				if (IS_ACTOR_VALID(bVar6))
				{
					Function_225(bLocal_1143);
					vVar7 = { StackVal, StackVal, Function_225(bLocal_1143) };
					bLocal_1211 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0.0f, 1.0f), 0, 0);
					TASK_FACE_COORD(false, &vVar7, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bVar6, bLocal_1211);
					TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
				}
				bVar5++;
			}
			iLocal_914 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				iLocal_1253 = 0;
				iLocal_1212 = 0;
				iLocal_914 = 7;
			}
			break;
		
		case 0x00000007:
			Function_319();
			if (Function_404())
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_220();
				Function_374(Local_4.f_232, 1);
				if (IS_SOUND_ID_VALID(bLocal_1266))
				{
					STOP_SOUND(bLocal_1266);
				}
				bLocal_1267 = GET_SOUND_ID();
				PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1267, "MERCHANT02_CHEER_MASTER", Global_34574);
				Function_373(&iLocal_1195);
				iLocal_914 = 106;
			}
			break;
		
		case 0x0000006A:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_ENABLE_NAV_STICK_INPUT(0, 1);
			SET_PLAYER_CONTROL_CONFIG(0, 0);
			ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
			SET_ACTOR_CAN_DEADEYE_TAG_ANYTHING(Global_34573, 0);
			Function_219(1);
			Function_216(Local_4.f_232);
			Function_218(Local_4.f_232);
			AI_GLOBAL_CLEAR_ALL_DANGER();
			iLocal_1072[3] = 1;
			bLocal_913 = 4;
			iLocal_914 = 0;
			break;
	}
	return;
}

bool Function_404() //Position: 0x12D49 / 77129
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	switch (iLocal_1280)
	{
		case 0x00000000:
			if (!IS_OBJECT_VALID(bLocal_1157))
			{
				bLocal_1157 = DROP_ACCESSORY_ENUM(bLocal_1143, 0);
				SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_1157, GET_OBJECT_FROM_ACTOR(bLocal_1143), false);
				GIVE_OBJECT_TO_LAYOUT(bLocal_1157, Local_4);
			}
			bLocal_1158 = ATTACH_OBJECTS_USING_LOCATOR(bLocal_1157, GET_OBJECT_FROM_ACTOR(bLocal_1143), Function_53(), "hat", 4294967295);
			bLocal_1255 = GET_PROP_FROM_OBJECT(bLocal_1157);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_1143, 1);
			TASK_CLEAR(bLocal_1143);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_1143, 1);
			SET_ANIM_SET_FOR_ACTOR(bLocal_1143, "hat_toss", 0);
			SET_ACTION_NODE_FOR_ACTOR(bLocal_1143, "hat_toss/hat_toss_idle");
			bLocal_1158 = ATTACH_OBJECTS_USING_LOCATOR(bLocal_1255, bLocal_1143, "wrist_r_attachment", "grab", 0);
			iLocal_1280 = 1;
			break;
		
		case 0x00000001:
			if (IS_OBJECT_VALID(bLocal_1157))
			{
				if (IS_ATTACHMENT_VALID(bLocal_1158))
				{
					if (IS_OBJECT_VALID(bLocal_1255))
					{
						iLocal_1280 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_407();
				iLocal_1280 = 3;
			}
			break;
		
		case 0x00000003:
			if (iLocal_1253 > 9)
			{
				if (bLocal_1250)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_324(GET_WEAPON_IN_HAND(Global_34573)))
						{
							TASK_ACTION_PERFORM(bLocal_1143, "hat_toss/hat_toss");
							SET_PROP_TARGETABLE(bLocal_1255, 1, 1);
							SET_ACTOR_CAN_DEADEYE_TAG_ANYTHING(Global_34573, 1);
							SAY_SINGLE_LINE_SCRIPTED(bLocal_1143, "Merchant02_AquilaTauntsWait", Global_34573, 0, 0, 0, 1, 2);
							Function_316(&iLocal_1180);
							iLocal_1280 = 4;
						}
						else if (!Function_280(&iLocal_1180))
						{
							Function_316(&iLocal_1180);
						}
						else if (Function_278(&iLocal_1180) < 6.0f)
						{
							SAY_SINGLE_LINE_SCRIPTED(bLocal_1143, "Merchant02_AquilaTauntsWait", Global_34573, 0, 0, 0, 1, 2);
							Function_316(&iLocal_1180);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			bLocal_1258 = CREATE_EVENT_TRAP(Function_53(), 5, bLocal_723);
			EVENT_TRAP_ON_TARGET(bLocal_1258, bLocal_1157);
			Function_325("Merchant02_shoot_hat", 7,5f, 1, 2, 0, 0, 0);
			ADD_BLIP_FOR_OBJECT(bLocal_1157, 322, 0f, 2, 0);
			SET_BLIP_NAME(GET_BLIP_ON_OBJECT(bLocal_1157), "Merchant02_blip_hat");
			iLocal_1212++;
			iLocal_1280 = 5;
			break;
		
		case 0x00000005:
			if (!Function_406(bLocal_1143, bLocal_1157, 3.0f) && IS_ATTACHMENT_VALID(bLocal_1158))
			{
				REMOVE_OBJECT_ATTACHMENT(bLocal_1158);
				SET_PHYSINST_FROZEN(bLocal_1255, false);
				GET_ACTOR_AXIS(Global_34573, &vVar0, 1);
				GET_ACTOR_AXIS(Global_34573, &vVar3, 0);
				GET_ACTOR_AXIS(Global_34573, &vVar6, 2);
				switch (iLocal_1212)
				{
					case 0x00000001:
						VSCALE(&vVar0, 7.0f);
						break;
					
					case 0x00000002:
						VSCALE(&vVar0, 7,75f);
						break;
					
					default:
						VSCALE(&vVar0, 8,5f);
						break;
				}
				VSCALE(&vVar3, -1.0f);
				VSCALE(&vVar6, -1.0f);
				vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar6, vVar0, StackVal) };
				vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
				SET_PROP_VELOCITY(bLocal_1255, &vVar0);
			}
			if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_1258))
			{
				EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_1258);
				HUD_CLEAR_OBJECTIVE();
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_1157));
				Function_374(Local_4.f_232, 1);
				iLocal_1280 = 7;
			}
			else if (Function_405(bLocal_1157))
			{
				HUD_CLEAR_OBJECTIVE();
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_1157));
				Function_382(Local_4.f_232, 1);
				bLocal_1266 = GET_SOUND_ID();
				PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1266, "MERCHANT02_BOO_MASTER", Global_34574);
				iLocal_1280 = 6;
			}
			break;
		
		case 0x00000006:
			if (iLocal_1212 > 3)
			{
				Function_232("Merchant02_fail_poor_show");
				bLocal_1081 = true;
			}
			else if (!HUD_IS_FADED())
			{
				if (!HUD_IS_FADING())
				{
					HUD_FADE_OUT(0,5f, 1f, 1);
				}
			}
			else
			{
				iLocal_1280 = 0;
				UI_DISABLE("loadingspinner");
				iLocal_914 = 95;
			}
			break;
		
		case 0x00000007:
			if (!IS_PLAYER_DEADEYE(0) || !IS_ACTOR_SHOOTING(Global_34573))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_405(bool bParam0) //Position: 0x13178 / 78200
{
	var uVar0;
	var uVar3;
	var uVar6;
	
	GET_OBJECT_POSITION(bParam0, &uVar0);
	return FIND_GROUND_INTERSECTION(&uVar0, 0,25f, &uVar3, &uVar6);
}

bool Function_406(bool bParam0, bool bParam1, float fParam2) //Position: 0x13194 / 78228
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_320(bParam0);
			Function_300(bParam1);
			if (VDIST(Function_320(bParam0), Function_300(bParam1)) >= fParam2)
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

void Function_407() //Position: 0x132AE / 78510
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_readyForHat", "Merchant02_readyForHat", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_408() //Position: 0x13303 / 78595
{
	var uVar0;
	
	if ((iLocal_914 < 4 && iLocal_914 > 105) && iLocal_914 == 95)
	{
		Function_377(StackVal, StackVal, "$/cutscene/MERCHANT02_CS03_A_S/MERCHANT02_CS03_A_S", &uLocal_1084, *(&Local_4 + 2272[26]), 62356, 0, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1);
		Function_307(1);
		Function_370();
		Function_367(0);
		Function_366();
		Function_361(Function_362(&uVar0, &uLocal_1210, 1, 0x40c00000, 0));
	}
	switch (iLocal_914)
	{
		case 0x00000000:
			Function_357(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_923 = Global_30640[1];
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			if (iLocal_1072[1] == 0)
			{
				Function_226(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				Function_301(Global_34573, (*&Local_4 + 1024)[0], 0, 1, 1, 1);
				Function_301(bLocal_1140, (*&Local_4 + 1024)[2], 0, 1, 1, 1);
				TASK_STAND_STILL(bLocal_1140, -1.0f, 0, 0);
				MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_1140);
				SET_CAN_ACTOR_HARDLOCK_NEUTRALS(Global_34573, 0);
				SET_ACTOR_HEALTH(bLocal_1140, GET_ACTOR_MAX_HEALTH(bLocal_1140));
				Function_161(49165);
				Function_355(9);
				Function_301(bLocal_1142, (*&Local_4 + 2468)[0], 0, 1, 1, 1);
				ENABLE_VEHICLE_SEAT(bLocal_1142, false, 0);
				bLocal_1155 = CREATE_PROP_IN_LAYOUT(Local_4, Function_53(), "p_gen_tableSnakeOil01x", *(&Local_4 + 2368[16]), *(&Local_4 + 2368[16] + 12), 1);
				Function_354();
				Function_210(bLocal_723);
				Function_210(Local_4);
				Function_208();
				iLocal_914 = 1;
			}
			else
			{
				iLocal_914 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_353(bLocal_923) && Function_158(&(Global_29008[bLocal_923]), 8))
				{
					Function_340();
					Function_294(Local_4.f_232, Local_4.f_1052, 1, 0, 1);
					TASK_CLEAR(bLocal_1143);
					Function_301(bLocal_1143, (*&Local_4 + 1024)[4], 0, 1, 1, 1);
					Function_348(bLocal_1143, bLocal_1140);
					TASK_STAND_STILL(bLocal_1143, -1.0f, 0, 0);
					iLocal_914 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_337(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_724, bLocal_913))
			{
				if (iLocal_1072[1] == 0)
				{
					if (Function_377(StackVal, StackVal, "$/cutscene/MERCHANT02_CS02_seq/MERCHANT02_CS02_seq", &uLocal_1084, *(&Local_4 + 2272[26]), 62356, 1, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1))
					{
						bLocal_1268 = GET_SOUND_ID();
						PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1268, "MERCHANT02_CROWD_A_MASTER", *(&Local_4 + 2656[06]));
						iLocal_914 = 3;
					}
				}
				else
				{
					bLocal_1268 = GET_SOUND_ID();
					PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1268, "MERCHANT02_CROWD_A_MASTER", *(&Local_4 + 2656[06]));
					iLocal_914 = 3;
				}
			}
			else
			{
				Function_294(Local_4.f_232, Local_4.f_1052, 1, 0, 1);
				TASK_CLEAR(bLocal_1143);
				Function_301(bLocal_1143, (*&Local_4 + 1024)[4], 0, 1, 1, 1);
				Function_348(bLocal_1143, bLocal_1140);
				TASK_STAND_STILL(bLocal_1143, -1.0f, 0, 0);
				bLocal_1268 = GET_SOUND_ID();
				PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1268, "MERCHANT02_CROWD_A_MASTER", *(&Local_4 + 2656[06]));
				Function_290();
				if (IS_ACTOR_VALID((*&Local_4 + 164)[72]))
				{
					DESTROY_ACTOR((*&Local_4 + 164)[72]);
				}
				iLocal_914 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_272("$/cutscene/MERCHANT02_CS02_seq/MERCHANT02_CS02_seq", &Local_915, &Local_724, &bLocal_913, 56197, 55408, 55084, 51849, 51429, 51422, 0, 1, 1, 2, 2, 0, 1))
			{
				if (IS_ACTOR_VALID((*&Local_4 + 164)[72]))
				{
					DESTROY_ACTOR((*&Local_4 + 164)[72]);
				}
				iLocal_914 = 4;
			}
			break;
		
		case 0x0000005F:
			if (Function_272("$/cutscene/MERCHANT02_CS03_A_F/MERCHANT02_CS03_A_F", &Local_915, &Local_724, &bLocal_913, 56197, 81113, 55084, 51849, 51589, 51422, 0, 1, 1, 2, 2, 0, 1))
			{
				UI_ENABLE("loadingspinner");
				Function_270(1.0f);
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_1283)))
				{
					ADD_BLIP_FOR_OBJECT(Local_1283, 322, 0f, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(Local_1283), "Merchant02_blip_skull");
				}
				ACTOR_PUT_WEAPON_IN_HAND(Global_34573, 4, 0);
				Function_131("Merchant02_help_aim", 10.0f, 1, 0, 2, 1, 0);
				Function_325("Merchant02_shoot_skull", 7,5f, 1, 2, 0, 0, 0);
				iLocal_1277 = 10;
				iLocal_914 = 7;
			}
			break;
		
		case 0x00000004:
			Function_238(bLocal_913);
			Function_326(StackVal, StackVal, Function_238(bLocal_913), bLocal_913, Global_30640[1], Function_241(bLocal_913), 0);
			Function_270(1.0f);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			iLocal_914 = 6;
			break;
		
		case 0x00000006:
			Function_415();
			if (!HUD_IS_FADING())
			{
				Function_131("Merchant02_help_aim", 10.0f, 1, 0, 2, 1, 0);
				Function_325("Merchant02_shoot_skull", 7,5f, 1, 2, 0, 0, 0);
				iLocal_914 = 7;
			}
			break;
		
		case 0x00000007:
			Function_409();
			Function_415();
			break;
		
		case 0x0000006A:
			iLocal_1072[2] = 1;
			if (IS_BLIP_VALID(Local_1283.f_12))
			{
				REMOVE_BLIP(Local_1283.f_12);
			}
			Function_216(Local_4.f_232);
			Function_218(Local_4.f_232);
			AI_GLOBAL_CLEAR_ALL_DANGER();
			bLocal_913 = 3;
			iLocal_914 = 0;
			break;
	}
	return;
}

void Function_409() //Position: 0x1390A / 80138
{
	switch (iLocal_1277)
	{
		case 0x00000000:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_316(&iLocal_1186);
				iLocal_1277 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_414(&iLocal_1186, 10.0f))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_413();
					Function_316(&iLocal_1186);
					iLocal_1277 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_316(&iLocal_1186);
				iLocal_1277 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_414(&iLocal_1186, 10.0f))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_412();
					Function_316(&iLocal_1186);
					iLocal_1277 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_411();
				Function_316(&iLocal_1186);
				if (Function_386())
				{
					iLocal_1277 = 0;
				}
				else
				{
					iLocal_1277 = 2;
				}
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_410();
				bLocal_1266 = GET_SOUND_ID();
				PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1266, "MERCHANT02_BOO_MASTER", Global_34574);
				iLocal_1277 = 0;
			}
			break;
	}
	return;
}

void Function_410() //Position: 0x13A0C / 80396
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Merchant02_jonMissSkull_crowd", "Merchant02_jonMissSkull_crowd", false, 1, 1, 0, 1);
		Function_322(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_411() //Position: 0x13A70 / 80496
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_respondJeer_v1_AA", "Merchant02_respondJeer_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_respondJeer_v1_AB", "Merchant02_respondJeer_v1_AB", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_412() //Position: 0x13B18 / 80664
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Merchant02_CrowdJeer", "Merchant02_CrowdJeer", false, 1, 1, 0, 1);
		Function_322(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_413() //Position: 0x13B6A / 80746
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_waitJonSkull", "Merchant02_waitJonSkull", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_414(int iParam0, float fParam1) //Position: 0x13BC1 / 80833
{
	if (Function_280(iParam0))
	{
		if (Function_278(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_415() //Position: 0x13BDD / 80861
{
	if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_1256))
	{
		EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_1256);
		if (StackVal || HAS_PROP_BEEN_DAMAGED(EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_1257)))
		{
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_220();
			Function_374(Local_4.f_232, 1);
			if (IS_SOUND_ID_VALID(bLocal_1266))
			{
				STOP_SOUND(bLocal_1266);
			}
			bLocal_1267 = GET_SOUND_ID();
			PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1267, "MERCHANT02_CHEER_MASTER", Global_34574);
			EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_1256);
			DESTROY_OBJECT_GLOW(Local_1283);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_1283)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_1283));
			}
			Function_372(&iLocal_1186);
			Function_373(&iLocal_1195);
			iLocal_1252 = 1;
			iLocal_914 = 106;
		}
		else
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(bLocal_1257);
			bLocal_1266 = GET_SOUND_ID();
			PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1266, "MERCHANT02_BOO_MASTER", Global_34574);
			Function_373(&iLocal_1195);
			UI_DISABLE("loadingspinner");
			iLocal_1252 = 0;
			iLocal_914 = 95;
		}
	}
	return;
}

int Function_416() //Position: 0x13CD9 / 81113
{
	bool bVar0;
	bool bVar1;
	
	switch (bLocal_913)
	{
		case 0x00000002:
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_232))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar0);
				ACTOR_SET_GRABBED_BY_CUTSCENE(bVar1, true);
				bVar0++;
			}
			Function_307(1);
			ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_1143, true);
			ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_1142, true);
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			return 1;
			break;
		
		default:
			Function_306();
			return 1;
			break;
	}
	return 0;
}

void Function_417() //Position: 0x13D3C / 81212
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	if (iLocal_914 < 3 && iLocal_914 > 105)
	{
		if (iLocal_1247 == 1)
		{
			Function_377(StackVal, StackVal, "$/cutscene/MERCHANT02_CS02_seq/MERCHANT02_CS02_seq", &uLocal_1084, *(&Local_4 + 2272[26]), 62356, 0, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1);
		}
		if (Function_406(Global_34573, (*&Local_4 + 2348)[2], 70.0f))
		{
			iLocal_1240 = 1;
		}
		if (iLocal_1240 == 0)
		{
			Function_450(&fLocal_1198, 200.0f, 250.0f, (*&Local_4 + 2348)[2], "Merchant02_return_show_01", "Merchant02_abandoned_show", &bLocal_1081, 1, 0, 0, 4294967295, 1);
		}
		else
		{
			Function_450(&fLocal_1198, 100.0f, 200.0f, (*&Local_4 + 2348)[2], "Merchant02_return_show_02", "Merchant02_abandoned_show", &bLocal_1081, 1, 0, 0, 4294967295, 1);
		}
		if (Function_449())
		{
			Function_237(bLocal_913);
			Function_233(StackVal, StackVal, 2, &bLocal_1081, &bLocal_913, Function_240(bLocal_913), Function_237(bLocal_913), 0);
		}
		Function_340();
		Function_307(0);
		Function_370();
		Function_367(0);
		Function_366();
		Function_361(Function_362(&uVar0, &uLocal_1210, 1, 0x40c00000, 0));
	}
	switch (iLocal_914)
	{
		case 0x00000000:
			Function_357(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_923 = Global_30628[0];
			Function_161(49165);
			Function_355(9);
			Function_444();
			Function_344(&(Local_969[417]), Local_4.f_304, "RWCrowd", 0, 0x5f5e100, 1);
			Function_341(&(Local_969[417]), 256, 1);
			bLocal_1155 = CREATE_PROP_IN_LAYOUT(Local_4, Function_53(), "p_gen_tableSnakeOil01x", *(&Local_4 + 2368[16]), *(&Local_4 + 2368[16] + 12), 1);
			Function_354();
			Function_442((*&Local_4 + 340)[2]);
			if (iLocal_1072[0] == 0)
			{
				Function_226(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				SET_ACTOR_HEALTH(bLocal_1140, GET_ACTOR_MAX_HEALTH(bLocal_1140));
				Function_301(Global_34573, (*&Local_4 + 616)[0], 0, 1, 1, 1);
				Function_301(bLocal_1142, (*&Local_4 + 616)[3], 0, 1, 1, 1);
				START_VEHICLE(bLocal_1142);
				SET_ACTOR_IN_VEHICLE(bLocal_1140, bLocal_1142, false);
				MEMORY_PREFER_RIDING(bLocal_1140, true);
				bLocal_1211 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2872, 4, 0, 0, 1, false);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_1140, bLocal_1211);
				TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
				Function_210(bLocal_723);
				Function_210(Local_4);
				Function_208();
				iLocal_914 = 1;
			}
			else if (Function_337(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_724, bLocal_913))
			{
				iLocal_914 = 3;
			}
			else
			{
				iLocal_914 = 1;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_353(bLocal_923))
			{
				iLocal_914 = 4;
			}
			break;
		
		case 0x00000002:
			iLocal_914 = 4;
			break;
		
		case 0x00000003:
			if (Function_428())
			{
				iLocal_914 = 4;
			}
			break;
		
		case 0x00000004:
			Function_238(bLocal_913);
			Function_326(StackVal, StackVal, Function_238(bLocal_913), bLocal_913, Global_30628[0], Function_241(bLocal_913), 0);
			Function_270(1.0f);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			iLocal_914 = 6;
			break;
		
		case 0x00000006:
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 340)[3]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 340)[3]);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 340)[3]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 340)[3], 15);
			bLocal_1268 = GET_SOUND_ID();
			PLAY_SOUND_FROM_POSITION_PERSISTENT(bLocal_1268, "MERCHANT02_CROWD_A_MASTER", *(&Local_4 + 2656[06]));
			Function_325("Merchant02_go_to_show", 7,5f, 1, 2, 0, 0, 0);
			bLocal_1156 = Function_427(StackVal, StackVal, StackVal, StackVal, bLocal_723, Function_53(), *(&Local_4 + 2272[26]), *(&Local_4 + 2272[26]), Global_34573, 6.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
			Function_373(&iLocal_1183);
			iLocal_914 = 7;
			break;
		
		case 0x00000007:
			Function_420();
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (Function_378(StackVal, StackVal, Global_34573, *(&Local_4 + 2272[26]), (8.0f + 0,5f)))
				{
					RESET_ACTOR_GAITS(GET_MOUNT(Global_34573), 1);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						HUD_ENABLE(false);
					}
					bLocal_1211 = TASK_SEQUENCE_OPEN();
					TASK_CLEAR(false);
					TASK_DISMOUNT(false, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(Global_34573, bLocal_1211);
					TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
					Function_419(bLocal_1156);
					Function_418();
					Function_372(&iLocal_1183);
					iLocal_914 = 8;
				}
			}
			else if (Function_378(StackVal, StackVal, Global_34573, *(&Local_4 + 2272[26]), (2,5f + 0,5f)))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					HUD_ENABLE(false);
				}
				Function_419(bLocal_1156);
				Function_372(&iLocal_1183);
				iLocal_914 = 106;
			}
			break;
		
		case 0x00000008:
			if (GET_TASK_STATUS(Global_34573, 6) == 1)
			{
				iLocal_914 = 105;
			}
			break;
		
		case 0x00000069:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_914 = 106;
			}
			break;
		
		case 0x0000006A:
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(Local_4.f_232))
			{
				bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					UNK_0x99AFD2D1(bVar2, 1, 0);
				}
				bVar1++;
			}
			Function_211();
			iLocal_1072[1] = 1;
			bLocal_913 = 2;
			iLocal_914 = 0;
			break;
	}
	return;
}

void Function_418() //Position: 0x142AB / 82603
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_fullCrowd", "Merchant02_fullCrowd", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_419(bool bParam0) //Position: 0x142FC / 82684
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

void Function_420() //Position: 0x14386 / 82822
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!iLocal_1234)
	{
		if (GET_VEHICLE(bLocal_1140) == bLocal_1142)
		{
			if (Function_426(bLocal_1142, 0) < 0,5f || !Function_406(bLocal_1142, (*&Local_4 + 2468)[0], 5.0f))
			{
				if (!ACTORS_IN_RANGE(bLocal_1142, Global_34573, 95.0f))
				{
					if (!Function_214(bLocal_1142, 1.0f, 95.0f, 1, 1, 0))
					{
						Function_301(bLocal_1142, (*&Local_4 + 2468)[0], 0, 1, 1, 1);
					}
				}
			}
			else
			{
				SET_ACTOR_SPEED(bLocal_1142, 0.0f);
				if (GET_TASK_STATUS(bLocal_1140, 55) != 1)
				{
					STOP_VEHICLE(bLocal_1142);
					TASK_VEHICLE_LEAVE(bLocal_1140);
				}
			}
		}
		else if (!Function_406(bLocal_1140, (*&Local_4 + 1024)[2], 1,5f))
		{
			if (GET_TASK_STATUS(bLocal_1140, 0) == 1)
			{
				if (!ACTORS_IN_RANGE(bLocal_1140, Global_34573, 95.0f))
				{
					if (!Function_214(bLocal_1140, 1.0f, 95.0f, 1, 1, 0))
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_1140, 0);
						SNAP_ACTOR_TO_GRINGO(bLocal_1140, Local_4.f_2868, "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_2868), "UseCase1", true, 1);
						Function_373(&iLocal_1183);
						MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_1140);
						ENABLE_VEHICLE_SEAT(bLocal_1142, false, 0);
						iLocal_1234 = 1;
					}
				}
			}
			else
			{
				bLocal_1211 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_OBJECT(false, (*&Local_4 + 1024)[2], 1, 0, 1);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_2868), "UseCase1", true, 1);
				TASK_SEQUENCE_CLOSE();
				RESET_ANIM_SET_FOR_ACTOR(bLocal_1140, 1);
				TASK_SEQUENCE_PERFORM(bLocal_1140, bLocal_1211);
				TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
				Function_373(&iLocal_1183);
				MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_1140);
				ENABLE_VEHICLE_SEAT(bLocal_1142, false, 0);
				iLocal_1234 = 1;
			}
		}
		else
		{
			RESET_ANIM_SET_FOR_ACTOR(bLocal_1140, 1);
			TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_2868), "UseCase1", true, 1);
			Function_373(&iLocal_1183);
			MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_1140);
			ENABLE_VEHICLE_SEAT(bLocal_1142, false, 0);
			iLocal_1234 = 1;
		}
	}
	else if (!IS_ANY_SPEECH_PLAYING(bLocal_1140))
	{
		if (Function_425(Global_34573, bLocal_1140, 36.0f))
		{
			fVar0 = 10.0f;
			if (Function_425(Global_34573, bLocal_1140, 10.0f))
			{
				fVar0 = 5.0f;
			}
			else if (Function_425(Global_34573, bLocal_1140, 20.0f))
			{
				fVar0 = 7,5f;
			}
			else
			{
				fVar0 = 10.0f;
			}
			if (Function_414(&iLocal_1183, 10.0f))
			{
				iVar2 = 0;
				bVar1 = false;
				while (bVar1 <= SQUAD_GET_SIZE(Local_4.f_232))
				{
					bVar3 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar1);
					if (Function_406(bVar3, (*&Local_4 + 836)[bVar1], 1,5f))
					{
						iVar2++;
					}
					bVar1++;
				}
				if (Function_406(bLocal_1143, (*&Local_4 + 1024)[4], 1,5f))
				{
					iVar2++;
				}
				if (iVar2 < 7)
				{
					Function_424();
				}
				else
				{
					Function_423();
				}
				Function_316(&iLocal_1183);
			}
		}
	}
	if (!iLocal_1235)
	{
		if (Function_406(Global_34573, (*&Local_4 + 2348)[2], 100.0f))
		{
			Function_294(Local_4.f_232, Local_4.f_636, 0, 0, 1);
			bLocal_1211 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(false, (*&Local_4 + 1024)[4], 1, 0, 1);
			TASK_FACE_COORD(false, &Local_4 + 876[26], 0);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_1143, bLocal_1211);
			TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
			Function_373(&iLocal_1271);
			Function_373(&iLocal_1274);
			iLocal_1235 = 1;
		}
	}
	else
	{
		bVar4 = RAND_INT_RANGE(false, (SQUAD_GET_SIZE(Local_4.f_232) - 1));
		bVar5 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_232, bVar4);
		if (IS_ACTOR_VALID(bVar5))
		{
			if (Function_414(&iLocal_1271, 10.0f))
			{
				if (!IS_ANY_SPEECH_PLAYING(bVar5))
				{
					if (Function_406(bVar5, (*&Local_4 + 836)[bVar4], 2.0f) && ACTORS_IN_RANGE(bVar5, Global_34573, 8.0f))
					{
						bVar6 = Function_421();
						if (CAN_ACTOR_ENUM_PLAY_SPEECH_CONTEXT(GET_ACTOR_ENUM(bVar5), bVar6))
						{
							SAY_SINGLE_LINE_CONTEXT(bVar5, bVar6, false, 1, 0, 1, 4294967295, 4294967295, 0, 1);
							LOG_ERROR("play context...");
							Function_316(&iLocal_1271);
							iLocal_1270 = 1;
						}
					}
				}
			}
			if (Function_414(&iLocal_1274, 7,5f))
			{
				if (!IS_ANY_SPEECH_PLAYING(bVar5))
				{
					if (ACTORS_IN_RANGE(bVar5, Global_34573, 8.0f))
					{
						if (Function_386())
						{
							AUDIO_PLAY_VOCAL_EFFECT(bVar5, 7, 1);
							Function_316(&iLocal_1274);
						}
						else
						{
							AUDIO_PLAY_VOCAL_EFFECT(bVar5, 8, 1);
							Function_316(&iLocal_1274);
						}
					}
				}
			}
		}
	}
	return;
}

int Function_421() //Position: 0x14794 / 83860
{
	if (iLocal_1270)
	{
		if (Function_422() == 2)
		{
			return 45;
		}
		if (Function_422() == 16)
		{
			return 42;
		}
		return 43;
	}
	switch (RAND_INT_RANGE(false, 4))
	{
		case 0x00000000:
			return 34;
			break;
		
		case 0x00000001:
			return 33;
			break;
		
		case 0x00000002:
			return 35;
			break;
	}
	return 38;
}

int Function_422() //Position: 0x147F1 / 83953
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	if (TIME_IS_IN_RANGE(bVar0, Global_63400, Global_63401))
	{
		return 1;
	}
	if (TIME_IS_IN_RANGE(bVar0, Global_63401, Global_63402))
	{
		return 2;
	}
	if (TIME_IS_IN_RANGE(bVar0, Global_63402, Global_63403))
	{
		return 4;
	}
	if (TIME_IS_IN_RANGE(bVar0, Global_63403, Global_63404))
	{
		return 8;
	}
	if (TIME_IS_IN_RANGE(bVar0, Global_63404, Global_63405))
	{
		return 16;
	}
	if (TIME_IS_IN_RANGE(bVar0, Global_63405, Global_63400))
	{
		return 32;
	}
	return 32;
}

void Function_423() //Position: 0x14870 / 84080
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_noFollowMen", "Merchant02_noFollowMen", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_424() //Position: 0x148C5 / 84165
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_drawCrowd", "Merchant02_drawCrowd", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_425(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14916 / 84246
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

float Function_426(bool bParam0, bool bParam1) //Position: 0x14A27 / 84519
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

bool Function_427(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x14A46 / 84550
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

bool Function_428() //Position: 0x14B11 / 84753
{
	var uVar0;
	
	Function_285(&Local_915, 1, 0);
	switch (Local_915)
	{
		case 0x000003E8:
			Function_313(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				SET_CUTSCENEINPUTS_TARGET_GUID(uVar0, 6, bLocal_1140);
				Local_915.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				Local_915.f_16 = Function_434(Local_4, 0, Global_34573, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_915.f_16))
				{
				}
				else
				{
					LOG_ERROR("Merchant02_Cutscene01 - Failed to create Merchant02_Cutscene01_Cutscene.");
				}
			}
			Function_301(bLocal_1142, (*&Local_4 + 616)[2], 0, 1, 1, 1);
			Local_915 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_915.f_16), false))
			{
				Function_433(Global_34573, 1, 1);
				Function_433(bLocal_1140, 1, 1);
				Function_373(&Local_915 + 4);
				Local_915 = 1002;
			}
			break;
		
		case 0x000003EA:
			Local_915 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_278(&Local_915 + 4) < 0.0f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					Function_316(&Local_915 + 4);
					iLocal_1287 = 15;
					iLocal_1288 = 15;
					Local_915 = 1004;
				}
			}
			else
			{
				Function_316(&Local_915 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_430() && Function_429())
			{
				Function_316(&Local_915 + 4);
				Local_915 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_220();
				TASK_CLEAR(Global_34573);
				Function_433(Global_34573, 0, 1);
				Function_433(bLocal_1140, 0, 1);
				AI_STOP_IGNORING_ACTORS();
				Function_289(2, 1, 0, 1, 1, 1, 1, 1, 1, 1);
				ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1.0f, 0);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_915.f_16))
				{
					DESTROY_OBJECT(Local_915.f_16);
				}
				Local_915 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Function_301(Global_34573, (*&Local_4 + 616)[1], 0, 1, 1, 1);
				Function_301(bLocal_1142, (*&Local_4 + 616)[3], 0, 1, 1, 1);
				START_VEHICLE(bLocal_1142);
				SET_ACTOR_IN_VEHICLE(bLocal_1140, bLocal_1142, false);
				MEMORY_PREFER_RIDING(bLocal_1140, true);
				bLocal_1211 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2872, 4, 0, 0, 1, false);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_1140, bLocal_1211);
				TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
				SET_ACTOR_SPEED(bLocal_1142, 8.0f);
				Local_915 = 1104;
			}
			break;
	}
	return 0;
}

int Function_429() //Position: 0x14DB8 / 85432
{
	vector3 vVar0;
	var uVar3;
	
	switch (iLocal_1288)
	{
		case 0x0000000F:
			if (Function_278(&Local_915 + 4) < 6.0f)
			{
				TASK_VEHICLE_LEAVE(Global_34573);
				iLocal_1288 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_278(&Local_915 + 4) < 7.0f)
			{
				START_VEHICLE(bLocal_1142);
				MEMORY_PREFER_RIDING(bLocal_1140, true);
				bLocal_1211 = TASK_SEQUENCE_OPEN();
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, bLocal_1142, 0, 2, 0);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2872, 4, 0, 0, 1, false);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_1140, bLocal_1211);
				TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
				iLocal_1288 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_278(&Local_915 + 4) < 9.0f)
			{
				vVar0 = { -3,5f, 0.0f, -15.0f };
				GET_ACTOR_OFFSET_WORLD_COORDS(bLocal_1142, &vVar0, &uVar3);
				bLocal_1211 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(false, &uVar3, true);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, bLocal_1211);
				TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
				iLocal_1288 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_278(&Local_915 + 4) < 15.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_430() //Position: 0x14EB6 / 85686
{
	switch (iLocal_1287)
	{
		case 0x0000000F:
			if (Function_278(&Local_915 + 4) < 0.0f)
			{
				Function_432();
				iLocal_1287 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_278(&Local_915 + 4) < 8.0f)
			{
				Function_431();
				iLocal_1287 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_278(&Local_915 + 4) < 15.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_431() //Position: 0x14F21 / 85793
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_takesReins", "Merchant02_takesReins", false, 2, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_432() //Position: 0x14F74 / 85876
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_arriveOutskirtRidge", "Merchant02_arriveOutskirtRidge", false, 4, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_433(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14FD9 / 85977
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

var Function_434(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15073 / 86131
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Merchant02_Cutscene01", 6, 1);
	}
	Function_435(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_435(var uParam0, char* cParam1) //Position: 0x150F6 / 86262
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_441(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_440(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_439(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_438(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_437(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_436(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 6.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 2, 3, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 4, 5, 5.0f, 3, 0);
	return;
}

void Function_436(int iParam0) //Position: 0x1519C / 86428
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 53,20208f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3155,922f, 18,48034f, 2793,134f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,060075f, -1,078128f, 0,002023f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_437(int iParam0) //Position: 0x1520A / 86538
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 53,28232f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3154,219f, 18,48283f, 2794,701f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,025446f, -0,911715f, 0,00202f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_438(int iParam0) //Position: 0x15278 / 86648
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 53,28232f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3140,326f, 17,84324f, 2793,679f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,051312f, 0,999628f, 0,002022f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_439(int iParam0) //Position: 0x152E6 / 86758
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 53,28232f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3137,64f, 17,91048f, 2793,611f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,020505f, 0,996919f, 0,00202f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_440(int iParam0) //Position: 0x15354 / 86868
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 46,31504f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3144f, 18,28687f, 2794,482f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,020941f, -0,671641f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_441(int iParam0) //Position: 0x153BE / 86974
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 46,31504f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3145,765f, 18,25973f, 2795,249f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,173329f, 0,635013f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_442(bool bParam0) //Position: 0x15428 / 87080
{
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) != 9 || GET_OBJECT_TYPE(bParam0) != 10)
		{
			if (IS_VOLUME_VALID(GET_VOLUME_FROM_OBJECT(bParam0)))
			{
				Global_26400 = bParam0;
				if (DECOR_CHECK_EXIST(bParam0, "crimeInMonitorVolume"))
				{
					DECOR_REMOVE(bParam0, "crimeInMonitorVolume");
				}
				Function_443(0);
			}
		}
	}
	return;
}

void Function_443(bool bParam0) //Position: 0x154A3 / 87203
{
	if (IS_OBJECT_VALID(Global_26400))
	{
		if (DECOR_CHECK_EXIST(Global_26400, "crimeInMonitorVolume"))
		{
			DECOR_REMOVE(Global_26400, "crimeInMonitorVolume");
		}
		DECOR_SET_BOOL(Global_26400, "crimeInMonitorVolume", bParam0);
	}
	return;
}

void Function_444() //Position: 0x15513 / 87315
{
	Local_4.f_304 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Ambients"));
	(*&Local_4 + 260)[02] = Function_445(&Global_6364, &Global_7287, 1, -3283,07f, 15,48869f, 2737,789f, 0.0f, 0.0f, 0.0f, 1);
	SQUAD_JOIN((*&Local_4 + 260)[02], Local_4.f_304);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 260)[02], false);
	TASK_WANDER((*&Local_4 + 260)[02], 3212836864);
	SET_ACTOR_FACTION((*&Local_4 + 260)[02], 20);
	ACTOR_START_FORCE_HOLSTER((*&Local_4 + 260)[02], 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 260)[02], 0);
	SET_ALLOW_EXECUTE((*&Local_4 + 260)[02], 0);
	AI_IGNORE_ACTOR((*&Local_4 + 260)[02]);
	AI_DONT_HARM_ACTOR((*&Local_4 + 260)[02]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 260)[02], (*&Local_4 + 340)[3]);
	(*&Local_4 + 260)[12] = Function_445(&Global_6364, &Global_7287, 2, -3231,563f, 15,94393f, 2728,857f, 0.0f, 270.0f, 0.0f, 1);
	SQUAD_JOIN((*&Local_4 + 260)[12], Local_4.f_304);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 260)[12], false);
	TASK_WANDER((*&Local_4 + 260)[12], 3212836864);
	SET_ACTOR_FACTION((*&Local_4 + 260)[12], 20);
	ACTOR_START_FORCE_HOLSTER((*&Local_4 + 260)[12], 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 260)[12], 0);
	SET_ALLOW_EXECUTE((*&Local_4 + 260)[12], 0);
	AI_IGNORE_ACTOR((*&Local_4 + 260)[12]);
	AI_DONT_HARM_ACTOR((*&Local_4 + 260)[12]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 260)[12], (*&Local_4 + 340)[3]);
	(*&Local_4 + 260)[22] = Function_445(&Global_6364, &Global_7287, 3, -3240,034f, 15,97463f, 2711,994f, 0.0f, 90.0f, 0.0f, 1);
	SQUAD_JOIN((*&Local_4 + 260)[22], Local_4.f_304);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 260)[22], false);
	TASK_WANDER((*&Local_4 + 260)[22], 3212836864);
	SET_ACTOR_FACTION((*&Local_4 + 260)[22], 20);
	ACTOR_START_FORCE_HOLSTER((*&Local_4 + 260)[22], 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 260)[22], 0);
	SET_ALLOW_EXECUTE((*&Local_4 + 260)[22], 0);
	AI_IGNORE_ACTOR((*&Local_4 + 260)[22]);
	AI_DONT_HARM_ACTOR((*&Local_4 + 260)[22]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 260)[22], (*&Local_4 + 340)[3]);
	(*&Local_4 + 260)[32] = Function_445(&Global_6364, &Global_7287, 4, -3252,054f, 17,29321f, 2688f, 0.0f, 90.0f, 0.0f, 1);
	SQUAD_JOIN((*&Local_4 + 260)[32], Local_4.f_304);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 260)[32], false);
	TASK_WANDER((*&Local_4 + 260)[32], 3212836864);
	SET_ACTOR_FACTION((*&Local_4 + 260)[32], 20);
	ACTOR_START_FORCE_HOLSTER((*&Local_4 + 260)[32], 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 260)[32], 0);
	SET_ALLOW_EXECUTE((*&Local_4 + 260)[32], 0);
	AI_IGNORE_ACTOR((*&Local_4 + 260)[32]);
	AI_DONT_HARM_ACTOR((*&Local_4 + 260)[32]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 260)[32], (*&Local_4 + 340)[3]);
	(*&Local_4 + 260)[42] = Function_445(&Global_6364, &Global_7287, 5, -3304,291f, 17,94205f, 2656,68f, 0.0f, 17,5f, 0.0f, 1);
	SQUAD_JOIN((*&Local_4 + 260)[42], Local_4.f_304);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 260)[42], false);
	TASK_WANDER((*&Local_4 + 260)[42], 3212836864);
	SET_ACTOR_FACTION((*&Local_4 + 260)[42], 20);
	ACTOR_START_FORCE_HOLSTER((*&Local_4 + 260)[42], 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS((*&Local_4 + 260)[42], 0);
	SET_ALLOW_EXECUTE((*&Local_4 + 260)[42], 0);
	AI_IGNORE_ACTOR((*&Local_4 + 260)[42]);
	AI_DONT_HARM_ACTOR((*&Local_4 + 260)[42]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 260)[42], (*&Local_4 + 340)[3]);
	return;
}

var Function_445(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x158A7 / 88231
{
	var uVar0;
	bool bVar1;
	
	uVar0 = iParam2;
	bVar1 = Function_446(uParam0, uParam1, uVar0, iParam9, 0, 1);
	if (!IS_ACTOR_VALID(bVar1))
	{
		LOG_ERROR("CREATE_ACTOR_AS_REGIONAL got NULL when it tried to steal the character");
		return "";
	}
	PRINTSTRING("Spawning Regional Character at ");
	PRINTVECTOR(vParam3);
	PRINTNL();
	SET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bVar1), vParam3);
	SET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar1), vParam6);
	GET_POSITION(bVar1, &vParam3);
	PRINTSTRING("New position is ");
	PRINTVECTOR(vParam3);
	PRINTNL();
	return bVar1;
}

var Function_446(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x1598E / 88462
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_180(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_180(uParam0[iVar02], 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal) || uParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(StackVal))
			{
				REVIVE_PERS_CHAR(StackVal, 1);
			}
			if (!Function_180(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_177(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_448(StackVal, StackVal, StackVal, Global_6289, Function_53(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_180(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_177(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_177(uParam0[iVar02], 1);
	Function_447(StackVal, 1);
	if (bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(bVar1, 1);
	}
	if (!bParam4)
	{
		if (IS_ACTOR_HOGTIED(bVar1))
		{
			FREE_FROM_HOGTIE(bVar1);
		}
	}
	return bVar1;
}

int Function_447(bool bParam0, bool bParam1) //Position: 0x15B24 / 88868
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

var Function_448(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x15BC6 / 89030
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
}

bool Function_449() //Position: 0x15CDF / 89311
{
	if (IS_OBJECT_VALID(Global_26400))
	{
		if (!DECOR_CHECK_EXIST(Global_26400, "crimeInMonitorVolume"))
		{
			return 0;
		}
		return DECOR_GET_BOOL(Global_26400, "crimeInMonitorVolume");
	}
	return 0;
}

int Function_450(var uParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x15D36 / 89398
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_OBJECT_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_406(Global_34573, bParam3, fParam2))
	{
		Function_232(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_406(Global_34573, bParam3, fParam1))
	{
		if (!Function_402(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_325(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				Function_401(1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_400(bParam8, 0, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_400(bParam9, 0, 15, 1, bParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam3, bParam10, 0f, 2, 0);
				DECOR_SET_BOOL(bParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_402(1))
	{
		Function_399(1);
		if (!Function_398())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_397();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam3));
				DECOR_REMOVE(bParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_400(bParam8, 1, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_400(bParam9, 1, 15, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_451() //Position: 0x15EA4 / 89764
{
	if (iLocal_914 < 3 && iLocal_914 > 105)
	{
		Function_479();
		if (iLocal_1248 == 0)
		{
			if (Function_378(StackVal, StackVal, Global_34573, *(&Local_4 + 2272[16]), 100.0f))
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				iLocal_1248 = 1;
			}
		}
		Function_307(0);
	}
	switch (iLocal_914)
	{
		case 0x00000000:
			Function_357(0);
			SET_ACTOR_HEALTH(bLocal_1140, GET_ACTOR_MAX_HEALTH(bLocal_1140));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			bLocal_923 = Global_30628[0];
			Function_238(bLocal_913);
			Function_326(StackVal, StackVal, Function_238(bLocal_913), bLocal_913, Global_30628[0], Function_241(bLocal_913), 0);
			iLocal_914 = 1;
			break;
		
		case 0x00000001:
			if (Function_283(&Local_724))
			{
				if (STREAMING_IS_WORLD_LOADED() && Function_353(bLocal_923))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1140, *(&Local_4 + 392[26]), 1, true, 1);
					TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bLocal_1140, bLocal_1142, 1, 1, 0);
					iLocal_914 = 2;
				}
			}
			else
			{
				iLocal_914 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_914 = 5;
			break;
		
		case 0x00000005:
			Function_270(1.0f);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			iLocal_914 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADED())
			{
				Function_478();
				if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Merchant02_rideBanter_v1_AA"))
				{
					iLocal_1282 = 0;
				}
				else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Merchant02_rideBanter_v2_AA"))
				{
					iLocal_1282 = 1;
				}
				else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Merchant02_rideBanter_v3_AA"))
				{
					iLocal_1282 = 2;
				}
				else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Merchant02_rideBanter_v4_AA"))
				{
					iLocal_1282 = 3;
				}
				else
				{
					iLocal_1282 = 99;
				}
				bLocal_1269 = ADD_BLIP_FOR_OBJECT(bLocal_1142, 325, 0f, 2, 0);
				iLocal_914 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_325("Merchant02_wagon_on", 7,5f, 1, 2, 0, 0, 0);
				iLocal_914 = 8;
			}
			break;
		
		case 0x00000008:
			Function_476(&fLocal_1198, 60.0f, 200.0f, bLocal_1140, "Merchant02_wagon_on", "Merchant02_abandoned", &bLocal_1081, 1, 0, 0, 325, 1);
			if (Function_475(Global_34573, bLocal_1142, 0))
			{
				if (!Function_473(bLocal_1140, bLocal_1142))
				{
					STOP_VEHICLE(bLocal_1142);
				}
				else
				{
					START_VEHICLE(bLocal_1142);
					if (Function_280(&iLocal_1165))
					{
						Function_372(&iLocal_1165);
					}
					Function_220();
					Function_275();
					iLocal_1281 = 1;
					Function_373(&iLocal_1180);
					iLocal_914 = 9;
				}
			}
			else
			{
				if (!Function_280(&iLocal_1165))
				{
					Function_373(&iLocal_1165);
				}
				if (Function_278(&iLocal_1165) <= 15.0f)
				{
					Function_316(&iLocal_1165);
				}
			}
			break;
		
		case 0x00000009:
			Function_476(&fLocal_1198, 60.0f, 200.0f, bLocal_1140, "Merchant02_wagon_return_02", "Merchant02_abandoned", &bLocal_1081, 1, 0, 0, 325, 1);
			Function_473(bLocal_1140, bLocal_1142);
			Function_461(bLocal_1156);
			if (Function_456())
			{
				Function_455();
				if (IS_OBJECT_VALID(bLocal_1156))
				{
					if (Function_452(bLocal_1156, 0, 1, 0, 0, 0))
					{
						Function_419(bLocal_1156);
						Function_208();
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						STOP_VEHICLE(bLocal_1142);
						ENABLE_VEHICLE_SEAT(bLocal_1142, false, 0);
						ENABLE_VEHICLE_SEAT(bLocal_1142, true, 0);
						ABORT_SCRIPTED_CONVERSATION(1);
						iLocal_914 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1072[0] = 1;
				bLocal_913 = true;
				iLocal_914 = 0;
			}
			else
			{
				ABORT_SCRIPTED_CONVERSATION(1);
			}
			break;
	}
	return;
}

bool Function_452(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x16292 / 90770
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (bParam4)
	{
		if (DECOR_CHECK_EXIST(bParam0, "gaveDismount"))
		{
			bVar0 = GATEWAY_GET_ACTOR(bParam0);
			if (IS_OBJECT_VALID(bVar0))
			{
				bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
				if (!IS_ACTOR_RIDING(bVar1))
				{
					DECOR_REMOVE(bParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(bParam0))
	{
		bVar0 = GATEWAY_GET_ACTOR(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_PLAYER(bVar1))
			{
				SET_PLAYER_CONTROL(0, 0, iParam1, iParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (bParam3)
			{
				Function_454(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_426(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(bVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(bVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_426(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_453(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_453(&iVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &vVar3, true);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(bParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_3414 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_453(int iParam0, int iParam1) //Position: 0x164A4 / 91300
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_73(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*iParam0 = (*iParam0 + 0,01f);
	iParam0->f_8 = (StackVal + 0,01f);
	if (FIND_GROUND_INTERSECTION(iParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_73(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_454(bool bParam0, bool bParam1) //Position: 0x1650F / 91407
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			RESET_ACTOR_GAITS(bVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(bParam0))
	{
		bVar1 = GET_VEHICLE(bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			STOP_VEHICLE(bVar1);
		}
	}
	else if (!bParam1 || Function_426(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

void Function_455() //Position: 0x1656C / 91500
{
	bool bVar0;
	
	if (!Function_280(&iLocal_1168))
	{
		Function_373(&iLocal_1168);
	}
	bVar0 = GET_ACTOR_STUCK_STATE(bLocal_1142);
	switch (bVar0)
	{
		case 0xFFFFFFFF:
			break;
		
		case 0x00000000:
			Function_316(&iLocal_1168);
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			if (Function_278(&iLocal_1168) < 30.0f)
			{
				iLocal_1241 = 1;
			}
			break;
		
		case 0x00000003:
			iLocal_1241 = 1;
			break;
		
		case 0x00000004:
			iLocal_1241 = 1;
			break;
	}
	if (iLocal_1241 == 1)
	{
		Function_232("Merchant02_wagon_stuck");
		bLocal_1081 = true;
	}
	return;
}

bool Function_456() //Position: 0x1660F / 91663
{
	if (Function_475(Global_34573, bLocal_1142, 0) && Function_475(bLocal_1140, bLocal_1142, 1))
	{
		if (iLocal_1233 == 0)
		{
			if (!IS_OBJECT_VALID(bLocal_1156))
			{
				if (IS_BLIP_VALID(bLocal_1269))
				{
					REMOVE_BLIP(bLocal_1269);
				}
				HUD_CLEAR_OBJECTIVE();
				bLocal_1156 = Function_427(StackVal, StackVal, StackVal, StackVal, bLocal_723, Function_53(), *(&Local_4 + 2272[16]), *(&Local_4 + 2272[16]), Global_34573, 12.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				Function_459(StackVal, StackVal, *(&Local_4 + 2272[16]), 0, 16, 1);
				Function_156(Global_30640[1]);
				iLocal_1213 = 0;
			}
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_325("Merchant02_go_to_farm", 7,5f, 1, 2, 0, 0, 0);
				iLocal_1233 = 1;
			}
		}
		return 1;
	}
	if (iLocal_1213 == 0)
	{
		if (!IS_BLIP_VALID(bLocal_1269))
		{
			if (IS_OBJECT_VALID(bLocal_1156))
			{
				Function_419(bLocal_1156);
				Function_208();
			}
			bLocal_1269 = ADD_BLIP_FOR_OBJECT(bLocal_1142, 325, 0f, 2, 0);
			HUD_CLEAR_OBJECTIVE();
			Function_458();
			Function_372(&iLocal_1174);
		}
		if (!Function_475(Global_34573, bLocal_1142, 0))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_325("Merchant02_wagon_back_on", 7,5f, 1, 2, 0, 0, 0);
				Function_316(&iLocal_1171);
				iLocal_1213 = 1;
			}
		}
	}
	else if (iLocal_1213 == 1)
	{
		if (Function_278(&iLocal_1171) < 15.0f)
		{
			Function_457();
			Function_316(&iLocal_1171);
		}
	}
	iLocal_1233 = 0;
	return 0;
}

void Function_457() //Position: 0x16789 / 92041
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_standstill", "Merchant02_standstill", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_458() //Position: 0x167DC / 92124
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_jumpsOutStagecoach", "Merchant02_jumpsOutStagecoach", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_459(vector3 vParam0, var uParam3, var uParam4, var uParam5) //Position: 0x1683F / 92223
{
	*(&Global_28185 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28185 + 36) = { StackVal, StackVal, vParam0 };
	Global_28185 = 2;
	Global_28185.f_4 = 0;
	Global_28185.f_60 = uParam3;
	Global_28185.f_16 = uParam4;
	if (uParam4 & 16 >= 0)
	{
		Global_28185.f_16 |= 131072;
	}
	if (uParam4 & 32 >= 0)
	{
		Global_28185.f_16 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28185.f_12) >= 0)
	{
		Function_460(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = uParam5;
}

void Function_460(bool bParam0) //Position: 0x168FB / 92411
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

void Function_461(bool bParam0) //Position: 0x1693B / 92475
{
	if (Function_456())
	{
		if (IS_OBJECT_VALID(bParam0))
		{
			if (Function_406(Global_34573, bParam0, 20.0f))
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
				if (Function_280(&iLocal_1180))
				{
					Function_372(&iLocal_1180);
				}
				if (iLocal_1281 != 10)
				{
					iLocal_1281 = 10;
				}
			}
		}
		if (Function_472())
		{
			if (!iLocal_1239)
			{
				Function_471(bLocal_1140, "Merchant02_gunOnWest", "Merchant02_gunOnChar", "Merchant02_shootsRand", "Merchant02_stagecoach_tooFast", "Merchant02_stagecoach_tooSlow", "Merchant02_stagecoach_offRoad", "Merchant02_stagecoachStealHorse");
				Function_470();
				switch (iLocal_1281)
				{
					case 0x00000001:
						if (Function_414(&iLocal_1180, 5.0f))
						{
							iLocal_1281 = 2;
						}
						break;
					
					case 0x00000002:
						if (!Function_132())
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_1140, 8.0f))
							{
								Function_464(&iLocal_1282);
								AUDIO_MUSIC_SET_MOOD("RIDING", 0, 4294967295, 4294967295);
								iLocal_1281 = 3;
							}
						}
						break;
					
					case 0x00000003:
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (!ACTORS_IN_RANGE(Global_34573, bLocal_1140, 36.0f))
							{
								ABORT_SCRIPTED_CONVERSATION(1);
							}
						}
						else
						{
							Function_316(&iLocal_1180);
							iLocal_1281 = 4;
						}
						break;
					
					case 0x00000004:
						if (Function_414(&iLocal_1180, 10.0f))
						{
							iLocal_1281 = 5;
						}
						break;
					
					case 0x00000005:
						if (!Function_132())
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_1140, 8.0f))
							{
								Function_464(&iLocal_1282);
								iLocal_1281 = 6;
							}
						}
						break;
					
					case 0x00000006:
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (!ACTORS_IN_RANGE(Global_34573, bLocal_1140, 36.0f))
							{
								ABORT_SCRIPTED_CONVERSATION(1);
							}
						}
						else
						{
							Function_316(&iLocal_1180);
							iLocal_1281 = 7;
						}
						break;
					
					case 0x00000007:
						if (Function_378(StackVal, StackVal, Global_34573, *(&Local_4 + 2272[16]), 800.0f))
						{
							iLocal_1232 = 1;
							iLocal_1281 = 8;
						}
						break;
					
					case 0x00000008:
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (!Function_132())
							{
								if (ACTORS_IN_RANGE(Global_34573, bLocal_1140, 8.0f))
								{
									Function_463(0);
									Function_462();
									iLocal_1281 = 9;
								}
							}
						}
						break;
					
					case 0x00000009:
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (!ACTORS_IN_RANGE(Global_34573, bLocal_1140, 36.0f))
							{
								ABORT_SCRIPTED_CONVERSATION(1);
							}
						}
						else
						{
							Function_316(&iLocal_1180);
							iLocal_1281 = 10;
						}
						break;
					
					case 0x0000000A:
						break;
					}
				}
			}
	}
	return;
}

void Function_462() //Position: 0x16C04 / 93188
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AA", "Merchant02_planHatched_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AB", "Merchant02_planHatched_v1_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_planHatched_v1_AC", "Merchant02_planHatched_v1_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AD", "Merchant02_planHatched_v1_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AE", "Merchant02_planHatched_v1_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_5000", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_planHatched_v1_AF", "Merchant02_planHatched_v1_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AG", "Merchant02_planHatched_v1_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AH", "Merchant02_planHatched_v1_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_planHatched_v1_AI", "Merchant02_planHatched_v1_AI", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AJ", "Merchant02_planHatched_v1_AJ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_planHatched_v1_AK", "Merchant02_planHatched_v1_AK", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1100", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AL", "Merchant02_planHatched_v1_AL", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AM", "Merchant02_planHatched_v1_AM", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AN", "Merchant02_planHatched_v1_AN", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AO", "Merchant02_planHatched_v1_AO", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_planHatched_v1_AP", "Merchant02_planHatched_v1_AP", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AQ", "Merchant02_planHatched_v1_AQ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_350", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_planHatched_v1_AR", "Merchant02_planHatched_v1_AR", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AS", "Merchant02_planHatched_v1_AS", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AT", "Merchant02_planHatched_v1_AT", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_planHatched_v1_AU", "Merchant02_planHatched_v1_AU", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_planHatched_v1_AV", "Merchant02_planHatched_v1_AV", true, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_463(int iParam0) //Position: 0x17292 / 94866
{
	if (iParam0 < 0)
	{
		return;
	}
	if (iParam0 >= 10)
	{
		iParam0 = 10;
	}
	Global_28842.f_40 = (iParam0 - Global_28842.f_12);
	return;
}

void Function_464(int iParam0) //Position: 0x172B7 / 94903
{
	switch (*iParam0)
	{
		case 0x00000000:
			Function_469();
			break;
		
		case 0x00000001:
			Function_468();
			break;
		
		case 0x00000002:
			Function_467();
			break;
		
		case 0x00000003:
			Function_466();
			break;
		
		default:
			Function_465();
			iLocal_1281 = 10;
			break;
	}
	*iParam0++;
	return;
}

void Function_465() //Position: 0x17308 / 94984
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_noTalk", "Merchant02_noTalk", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_466() //Position: 0x17353 / 95059
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AA", "Merchant02_rideBanter_v4_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v4_AB", "Merchant02_rideBanter_v4_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AC", "Merchant02_rideBanter_v4_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AD", "Merchant02_rideBanter_v4_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v4_AE", "Merchant02_rideBanter_v4_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AF", "Merchant02_rideBanter_v4_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AG", "Merchant02_rideBanter_v4_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v4_AH", "Merchant02_rideBanter_v4_AH", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v4_AI", "Merchant02_rideBanter_v4_AI", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AJ", "Merchant02_rideBanter_v4_AJ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AK", "Merchant02_rideBanter_v4_AK", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v4_AL", "Merchant02_rideBanter_v4_AL", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AM1", "Merchant02_rideBanter_v4_AM1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v4_AM2", "Merchant02_rideBanter_v4_AM2", false, 1, 0, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_467() //Position: 0x17737 / 96055
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AA", "Merchant02_rideBanter_v3_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AB", "Merchant02_rideBanter_v3_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AC", "Merchant02_rideBanter_v3_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AD", "Merchant02_rideBanter_v3_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AE", "Merchant02_rideBanter_v3_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AF", "Merchant02_rideBanter_v3_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AG", "Merchant02_rideBanter_v3_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AH", "Merchant02_rideBanter_v3_AH", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AI", "Merchant02_rideBanter_v3_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AJ", "Merchant02_rideBanter_v3_AJ", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AK", "Merchant02_rideBanter_v3_AK", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AL", "Merchant02_rideBanter_v3_AL", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AM1", "Merchant02_rideBanter_v3_AM1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AM2", "Merchant02_rideBanter_v3_AM2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AN", "Merchant02_rideBanter_v3_AN", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AO", "Merchant02_rideBanter_v3_AO", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AP", "Merchant02_rideBanter_v3_AP", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AQ", "Merchant02_rideBanter_v3_AQ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AR", "Merchant02_rideBanter_v3_AR", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AS", "Merchant02_rideBanter_v3_AS", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AT", "Merchant02_rideBanter_v3_AT", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v3_AU", "Merchant02_rideBanter_v3_AU", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v3_AV", "Merchant02_rideBanter_v3_AV", true, 1, 0, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_468() //Position: 0x17D88 / 97672
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AA", "Merchant02_rideBanter_v2_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AB", "Merchant02_rideBanter_v2_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AC", "Merchant02_rideBanter_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AD", "Merchant02_rideBanter_v2_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AE", "Merchant02_rideBanter_v2_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AF", "Merchant02_rideBanter_v2_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AG", "Merchant02_rideBanter_v2_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AH", "Merchant02_rideBanter_v2_AH", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AI", "Merchant02_rideBanter_v2_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AJ", "Merchant02_rideBanter_v2_AJ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AK", "Merchant02_rideBanter_v2_AK", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AL", "Merchant02_rideBanter_v2_AL", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AM", "Merchant02_rideBanter_v2_AM", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AN", "Merchant02_rideBanter_v2_AN", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AO", "Merchant02_rideBanter_v2_AO", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AP", "Merchant02_rideBanter_v2_AP", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AQ", "Merchant02_rideBanter_v2_AQ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AR", "Merchant02_rideBanter_v2_AR", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AS", "Merchant02_rideBanter_v2_AS", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AT", "Merchant02_rideBanter_v2_AT", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v2_AU", "Merchant02_rideBanter_v2_AU", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v2_AV", "Merchant02_rideBanter_v2_AV", false, 1, 0, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_469() //Position: 0x18391 / 99217
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AA", "Merchant02_rideBanter_v1_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AB", "Merchant02_rideBanter_v1_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AC", "Merchant02_rideBanter_v1_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AD", "Merchant02_rideBanter_v1_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AE", "Merchant02_rideBanter_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_2220", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AF", "Merchant02_rideBanter_v1_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AG", "Merchant02_rideBanter_v1_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AH", "Merchant02_rideBanter_v1_AH", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AI", "Merchant02_rideBanter_v1_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AJ", "Merchant02_rideBanter_v1_AJ", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AK", "Merchant02_rideBanter_v1_AK", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AL", "Merchant02_rideBanter_v1_AL", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AM", "Merchant02_rideBanter_v1_AM", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AN", "Merchant02_rideBanter_v1_AN", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AO", "Merchant02_rideBanter_v1_AO", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AP", "Merchant02_rideBanter_v1_AP", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AQ", "Merchant02_rideBanter_v1_AQ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AR", "Merchant02_rideBanter_v1_AR", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AS", "Merchant02_rideBanter_v1_AS", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1890", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AT", "Merchant02_rideBanter_v1_AT", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AU", "Merchant02_rideBanter_v1_AU", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AV", "Merchant02_rideBanter_v1_AV", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AW", "Merchant02_rideBanter_v1_AW", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AX1", "Merchant02_rideBanter_v1_AX1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AX2", "Merchant02_rideBanter_v1_AX2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_4190", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_AY", "Merchant02_rideBanter_v1_AY", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_AZ", "Merchant02_rideBanter_v1_AZ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_BA", "Merchant02_rideBanter_v1_BA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_BB", "Merchant02_rideBanter_v1_BB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Merchant02_rideBanter_v1_BC", "Merchant02_rideBanter_v1_BC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_rideBanter_v1_BD", "Merchant02_rideBanter_v1_BD", false, 1, 0, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_470() //Position: 0x18C67 / 101479
{
	if (!iLocal_1232)
	{
		if (Function_378(StackVal, StackVal, Global_34573, *(&Local_4 + 2272[16]), 800.0f))
		{
			ABORT_SCRIPTED_CONVERSATION(1);
			LOG_ERROR("Hatching Plan.");
			iLocal_1281 = 8;
			iLocal_1232 = 1;
		}
	}
	return;
}

void Function_471(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x18CAE / 101550
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	
	if (!Function_280(&iLocal_1201))
	{
		Function_373(&iLocal_1201);
	}
	else if (Function_414(&iLocal_1201, 5.0f))
	{
		bVar0 = false;
		iVar1 = 0;
		iVar2 = 1;
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = "";
		iVar6 = 0;
		iVar7 = 0;
		iVar8 = 0;
		if (IS_WEAPON_DRAWN(Global_34573))
		{
			if (Function_324(GET_WEAPON_IN_HAND(Global_34573)))
			{
				bVar9 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
				if (IS_ACTOR_SHOOTING(Global_34573))
				{
					if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam3, bParam3, bVar0, iVar1, iVar2, 3, iVar3, iVar4, iVar5, iVar6, iVar7, iVar8);
						LOG_ERROR(bParam3);
						Function_316(&iLocal_1201);
					}
				}
				if (IS_ACTOR_VALID(bVar9))
				{
					if (IS_ACTOR_HUMAN(bVar9))
					{
						if (bVar9 == bParam0)
						{
							if (Function_280(&iLocal_1204))
							{
								if (Function_414(&iLocal_1204, 0,25f))
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam1, bParam1, bVar0, iVar1, iVar2, 3, iVar3, iVar4, iVar5, iVar6, iVar7, iVar8);
									Function_316(&iLocal_1201);
								}
							}
							else
							{
								Function_316(&iLocal_1204);
							}
						}
						else if (!AI_IS_HOSTILE_OR_ENEMY(Global_34573, bVar9))
						{
							if (Function_280(&iLocal_1204))
							{
								if (Function_414(&iLocal_1204, 0,25f))
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam2, bParam2, bVar0, iVar1, iVar2, 3, 1, iVar4, iVar5, iVar6, iVar7, iVar8);
									LOG_ERROR(bParam2);
									Function_316(&iLocal_1201);
								}
							}
							else
							{
								Function_316(&iLocal_1204);
							}
						}
						else if (Function_280(&iLocal_1204))
						{
							if (Function_414(&iLocal_1204, 0,25f))
							{
								Function_372(&iLocal_1204);
							}
						}
					}
					else if (Function_280(&iLocal_1204))
					{
						if (Function_414(&iLocal_1204, 0,25f))
						{
							Function_372(&iLocal_1204);
						}
					}
				}
				else if (Function_280(&iLocal_1204))
				{
					if (Function_414(&iLocal_1204, 0,25f))
					{
						Function_372(&iLocal_1204);
					}
				}
			}
			else if (Function_280(&iLocal_1204))
			{
				if (Function_414(&iLocal_1204, 0,25f))
				{
					Function_372(&iLocal_1204);
				}
			}
		}
		else if (Function_280(&iLocal_1204))
		{
			if (Function_414(&iLocal_1204, 0,25f))
			{
				Function_372(&iLocal_1204);
			}
		}
		if (Function_475(Global_34573, bLocal_1142, 0) && Function_475(bParam0, bLocal_1142, 1))
		{
			if (!Function_378(StackVal, StackVal, bLocal_1142, *(&Local_4 + 2272[16]), 20.0f))
			{
				if (Function_426(bLocal_1142, 0) <= 12,5f)
				{
					if (Function_280(&iLocal_1207))
					{
						if (Function_414(&iLocal_1204, 7,5f))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam4, bParam4, bVar0, iVar1, iVar2, 3, 1, iVar4, iVar5, iVar6, iVar7, iVar8);
							Function_316(&iLocal_1201);
						}
					}
					else
					{
						Function_316(&iLocal_1207);
					}
				}
				else if (Function_426(bLocal_1142, 0) <= 2,5f)
				{
					if (Function_280(&iLocal_1207))
					{
						if (Function_414(&iLocal_1204, 7,5f))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam5, bParam5, bVar0, iVar1, iVar2, 3, 1, iVar4, iVar5, iVar6, iVar7, iVar8);
							Function_316(&iLocal_1201);
						}
					}
					else
					{
						Function_316(&iLocal_1207);
					}
				}
				else if (Function_280(&iLocal_1207))
				{
					Function_372(&iLocal_1207);
				}
				if (Function_280(&iLocal_1207))
				{
					Function_372(&iLocal_1207);
				}
				if (!Function_280(&iLocal_1177))
				{
					Function_316(&iLocal_1177);
				}
				else if (Function_278(&iLocal_1177) < 0,5f)
				{
					if (GET_VEHICLE_BUMP_COUNT(bLocal_1142) > 4)
					{
						RESET_VEHICLE_BUMP_COUNT(bLocal_1142);
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam6, bParam6, bVar0, iVar1, iVar2, 3, 1, iVar4, iVar5, iVar6, iVar7, iVar8);
						LOG_ERROR(bParam6);
						Function_316(&iLocal_1201);
						Function_316(&iLocal_1177);
					}
					else
					{
						RESET_VEHICLE_BUMP_COUNT(bLocal_1142);
						Function_316(&iLocal_1177);
					}
				}
			}
		}
		else
		{
			if (Function_280(&iLocal_1207))
			{
				Function_372(&iLocal_1207);
			}
			if (GET_VEHICLE(Global_34573) != bLocal_1142)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bParam0, bParam7, bParam7, bVar0, iVar1, iVar2, 3, iVar3, iVar4, iVar5, iVar6, iVar7, iVar8);
				Function_316(&iLocal_1201);
			}
		}
	}
}

bool Function_472() //Position: 0x19042 / 102466
{
	vector3 vVar0;
	bool bVar3;
	
	GET_ACTOR_VELOCITY(bLocal_1142, &vVar0);
	bVar3 = VMAG(vVar0);
	if (bVar3 > 1.0f)
	{
		if (!Function_280(&iLocal_1174))
		{
			Function_373(&iLocal_1174);
		}
		if (Function_278(&iLocal_1174) < 8.0f)
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_1140, "Merchant02_StopsCoach", "Merchant02_StopsCoach", false, 0, 0, 3, 1, 0, 0, 1000, 0, 0);
			Function_316(&iLocal_1174);
		}
		return 0;
	}
	Function_316(&iLocal_1174);
	return 1;
}

bool Function_473(bool bParam0, bool bParam1) //Position: 0x190D5 / 102613
{
	if (Function_474(bParam1, 4294967295, 1, 4294967295))
	{
		if (!Function_475(bParam0, bParam1, 1) && GET_ACTOR_IN_VEHICLE_SEAT(bParam1, true) == bParam0)
		{
			if (GET_TASK_STATUS(bParam0, 54) != 1)
			{
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bParam0, bParam1, 1, 2, 0);
			}
		}
		else
		{
			if (GET_TASK_STATUS(bParam0, 6) != 1)
			{
				TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
			}
			return 1;
		}
	}
	if (GET_TASK_STATUS(bParam0, 0) != 1)
	{
		bLocal_1211 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_ACTOR(false, Global_34573, 5.0f, 1);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bParam0, bLocal_1211);
		TASK_SEQUENCE_RELEASE(bLocal_1211, 1);
	}
	return 0;
}

bool Function_474(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1915E / 102750
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

bool Function_475(bool bParam0, bool bParam1, bool bParam2) //Position: 0x19217 / 102935
{
	int iVar0;
	
	if (GET_ACTOR_IN_VEHICLE_SEAT(bParam1, bParam2) != bParam0)
	{
		return 0;
	}
	GET_ACTOR_VEHICLE_STATE(bParam0, &bParam2, &iVar0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

int Function_476(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x1923E / 102974
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_425(Global_34573, bParam3, uParam2))
	{
		Function_232(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_425(Global_34573, bParam3, bParam1))
	{
		if (!Function_402(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_325(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_401(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_400(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_400(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_402(2))
	{
		Function_399(2);
		if (!Function_398())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_397();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_184(bParam3);
				Function_477(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_400(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_400(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_477(bool bParam0) //Position: 0x193D2 / 103378
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

void Function_478() //Position: 0x193FE / 103422
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_toRidgewood", "Merchant02_toRidgewood", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_479() //Position: 0x19453 / 103507
{
	int iVar0;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(bLocal_1142);
	if (iVar0 <= iLocal_1214)
	{
		if (iVar0 > 1)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				Function_482();
			}
			else
			{
				Function_481();
			}
		}
		else
		{
			Function_480();
		}
		iLocal_1214 = iVar0;
	}
	return;
}

void Function_480() //Position: 0x1948C / 103564
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_losesStageHorse2", "Merchant02_losesStageHorse2", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_481() //Position: 0x194EB / 103659
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_losesStageHorse", "Merchant02_losesStageHorse", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_482() //Position: 0x19548 / 103752
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Merchant02_shootsStageHorse", "Merchant02_shootsStageHorse", false, 1, 1, 0, 1);
		Function_322(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_483() //Position: 0x195A7 / 103847
{
	bool bVar0;
	bool bVar1;
	
	switch (iLocal_914)
	{
		case 0x00000006:
			Function_531(&Local_724, 1);
			bLocal_723 = CREATE_LAYOUT(Function_53());
			if (!Function_283(&Local_724))
			{
				TELEPORT_ACTOR(Global_34573, &Global_3422[1140] + 52, 1, 1, 1);
				bLocal_923 = Global_30628[0];
				Function_192(1, 0, 1);
				DESTROY_GC_OBJECTS(0, 1);
			}
			Function_530();
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_04", "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_914 = 7;
			break;
		
		case 0x00000007:
			if (Function_503())
			{
				Function_501();
				Function_496();
				bLocal_1142 = (*&Local_4 + 152)[02];
				ENABLE_VEHICLE_SEAT(bLocal_1142, true, 0);
				Function_495(bLocal_1142);
				ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_1142, true);
				iLocal_1214 = 2;
				bVar0 = false;
				while (bVar0 <= 2)
				{
					bLocal_1145[bVar0] = GET_DRAFT_ACTOR(bVar0, bLocal_1142);
					if (IS_ACTOR_VALID(bLocal_1145[bVar0]))
					{
						SET_ACTOR_FACTION(bLocal_1145[bVar0], 20);
						ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_1145[bVar0], true);
					}
					bVar0++;
				}
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 340)[0]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 340)[0]);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 340)[0]);
				CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 340)[0], 15);
				Function_355(9);
				if (Function_337(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_724, bLocal_913) && !Function_283(&Local_724))
				{
					if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/Merchant_02/Merchant_02"))
					{
						Function_350(Global_34573, &iLocal_1085);
						Function_350(bLocal_1140, &iLocal_1085);
						Function_490(StackVal, StackVal, "$/cutscene/Merchant_02/Merchant_02", &uLocal_1084, &iLocal_1085, *(&Global_3422[1140] + 52), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 1);
						Global_63097 = 1;
						AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
						iLocal_914 = 8;
					}
					else
					{
						iLocal_914 = 8;
					}
				}
				else
				{
					iLocal_914 = 10;
				}
			}
			break;
		
		case 0x00000008:
			if (STREAMING_IS_WORLD_LOADED() && Function_353(bLocal_923))
			{
				iLocal_914 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_272("$/cutscene/merchant_02/merchant_02", &Local_915, &Local_724, &bLocal_913, 56197, 55861, 55401, 51849, 51589, 61985, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_914 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_922 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, false);
			RESET_ACTOR_GAITS(bLocal_1140, 0);
			SET_CRIPPLE_ENABLE(bLocal_1140, 0);
			TASK_PRIORITY_SET(bLocal_1140, true);
			AI_BEHAVIOR_SET_ALLOW(bLocal_1140, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_1140, 50.0f);
			SET_ACTOR_HEALTH(bLocal_1140, GET_ACTOR_MAX_HEALTH(bLocal_1140));
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_1140);
			ACTOR_START_FORCE_HOLSTER(bLocal_1140, 0, 0);
			ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_1142, false);
			bVar1 = false;
			while (bVar1 <= 2)
			{
				bLocal_1145[bVar1] = GET_DRAFT_ACTOR(bVar1, bLocal_1142);
				if (IS_ACTOR_VALID(bLocal_1145[bVar1]))
				{
					ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_1145[bVar1], false);
				}
				bVar1++;
			}
			Function_221(9);
			Function_373(&iLocal_1159);
			Function_373(&iLocal_1162);
			Function_373(&iLocal_1171);
			Function_488(&uLocal_929, bLocal_723);
			Function_344(&(Local_969[017]), bLocal_1140, "Merchant", 0, 0x5f5e100, 1);
			Function_344(&(Local_969[117]), bLocal_1142, "Wagon", 1, 0x5f5e100, 1);
			Function_487(&(Local_969[517]), bLocal_723, 0x5f5e100);
			bLocal_913 = false;
			iLocal_914 = 0;
			Function_485(&Local_724, &bLocal_913, &iLocal_914);
			Function_484(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_724);
			break;
	}
	return;
}

void Function_484(struct<25> Param0) //Position: 0x1994B / 104779
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			bLocal_913 = false;
			break;
		
		case 0x00000002:
			bLocal_913 = true;
			break;
		
		case 0x00000003:
			bLocal_913 = 2;
			break;
		
		case 0x00000004:
			bLocal_913 = 3;
			break;
		
		case 0x00000005:
			bLocal_913 = 4;
			break;
		
		case 0x00000006:
			bLocal_913 = 5;
			break;
		
		case 0x00000007:
			bLocal_913 = 101;
			break;
	}
}

void Function_485(int iParam0, var uParam1, int iParam2) //Position: 0x199B8 / 104888
{
	if (Function_283(iParam0))
	{
		*uParam1 = Function_338(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_486();
	}
	return;
}

void Function_486() //Position: 0x199EC / 104940
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

int Function_487(char* cParam0, bool bParam1, int iParam2) //Position: 0x19A3D / 105021
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
	Function_182();
	Function_182();
	*cParam0 = CREATE_POINT_IN_LAYOUT(bParam1, "nMFT_Dummy", Function_182(), Function_182());
	if (!IS_OBJECT_VALID(*cParam0))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Object invalid!");
		return 0;
	}
	cParam0->f_28 = 8;
	cParam0->f_32 = 2;
	if (!Function_346(cParam0, "nMFT_Dummy"))
	{
		return 0;
	}
	Function_345(cParam0, 0);
	cParam0->f_40 = 0;
	Function_341(cParam0, iParam2, 0);
	Function_384(cParam0, 3);
	return 1;
}

int Function_488(var uParam0, bool bParam1) //Position: 0x19B4E / 105294
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_489(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_489(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_489(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_489(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_489(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_489(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_489(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_489(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_489(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_489(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_489(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_489(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_489(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_489(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1A1EE / 106990
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
	Function_75(iParam0 + 8, iParam4);
	return 1;
}

int Function_490(bool bParam0, var uParam1, var uParam2, vector3 vParam3, bool bParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13) //Position: 0x1A2B1 / 107185
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_378(StackVal, StackVal, Global_34573, vParam3, (fParam7 + ((IntToFloat(Function_379()) * (fParam8 - fParam7)) * 0,5f))))
	{
		if (!bParam6 && (HUD_IS_FADED() || HUD_IS_FADING()))
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
		if ((uParam13 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
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
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_OVERRIDE_ACTORS: Preload cutscene DOES NOT exist, going to CUTPRELOAD_SKIPPEDLOADING");
					*uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0))
				{
					*uParam1 = 1;
				}
				else
				{
					if (HUD_IS_FADED())
					{
						LOG_ERROR("you're trying to preload a cutscene while faded out...was that intentional?");
					}
					CUTSCENE_MANAGER_LOAD_CUTFILE(bParam0, 0, iParam9, iParam10, iParam11, iParam12);
					*uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					Function_494(uParam2);
					*uParam1 = 5;
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					*uParam1 = 2;
				}
				break;
			
			case 0x00000002:
				Function_491(uParam2);
				CUTSCENE_MANAGER_RESUME_LOADING();
				*uParam1 = 3;
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					*uParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_OVERRIDE_ACTORS: preload cutscene was skipped, is cutscene missing or failed to load?");
				break;
			
			default:
				*uParam1 = 0;
				break;
		}
	}
	else if (!Function_378(StackVal, StackVal, Global_34573, vParam3, (fParam8 + ((IntToFloat(Function_379()) * (fParam8 - fParam7)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_378(StackVal, StackVal, Global_34573, vParam3, fParam7))
	{
	}
	return 0;
}

void Function_491(bool bParam0) //Position: 0x1A5E0 / 108000
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
			Function_493(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0), bVar0, bParam0);
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &vVar7, &Var10);
			Function_492(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_492(char* cParam0, vector3 vParam1) //Position: 0x1A640 / 108096
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

void Function_493(bool bParam0, bool bParam1, int iParam2) //Position: 0x1A768 / 108392
{
	int iVar0;
	struct<5> Var1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= *iParam2)
		{
			if (IS_ACTOR_VALID((*iParam2)[iVar09]))
			{
				if (GET_ACTOR_ENUM(bParam0) == GET_ACTOR_ENUM((*iParam2)[iVar09]))
				{
					CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bParam1), (*iParam2)[iVar09]);
					CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bParam1, iParam2[iVar09] + 4, &Var1);
					iParam2[iVar09]->f_16 = (StackVal + 180.0f);
					CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bParam1, iParam2[iVar09] + 20, &Var1);
					iParam2[iVar09]->f_32 = (StackVal + 180.0f);
				}
			}
			iVar0++;
		}
	}
	return;
}

void Function_494(int iParam0) //Position: 0x1A7F9 / 108537
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar09] = "";
		*(iParam0[iVar09] + 4) = { 0.0f, 0.0f, 0.0f };
		iParam0[iVar09]->f_16 = 0.0f;
		*(iParam0[iVar09] + 20) = { 0.0f, 0.0f, 0.0f };
		iParam0[iVar09]->f_32 = 0.0f;
		iVar0++;
	}
	return;
}

void Function_495(bool bParam0) //Position: 0x1A847 / 108615
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("SET_VEHICLE_DRAFTS_FRIENDLY -- Invalid vehicle");
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_DRAFTED_ACTORS(bParam0))
	{
		bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SET_ACTOR_FACTION(bVar1, 20);
		}
		bVar0++;
	}
	return;
}

void Function_496() //Position: 0x1A8B9 / 108729
{
	(*&Local_4 + 152)[02] = Function_497(Local_4, "Coach", 1202, 976, -2130,073f, 16,14567f, 2606,818f, 103,4585f, 82,5474f, 105,7469f, 1, 976, 976, 976, 4);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 152)[02], false);
	return;
}

var Function_497(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x1A90D / 108813
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
			if (Function_500(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_499(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_498(bVar16, &iVar1))
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

bool Function_498(int iParam0, int iParam1) //Position: 0x1AB41 / 109377
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

var Function_499(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x1AB73 / 109427
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_500(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1AB8B / 109451
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

void Function_501() //Position: 0x1ABB2 / 109490
{
	var uVar0;
	
	Function_502(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Merchant02_layout");
	Local_4.f_336 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 308)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -2125,186f, 19,28341f, 2607,215f, 0.0f, 0.0f, 0.0f, 20.0f, 9.0f, 12,5f);
	ADD_TO_VOLUME_SET(Local_4.f_336, (*&Local_4 + 308)[0]);
	(*&Local_4 + 308)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -3274,833f, 17,63433f, 2712,728f, 0.0f, -44,45238f, 0.0f, 51,85812f, 9.0f, 21,23197f);
	ADD_TO_VOLUME_SET(Local_4.f_336, (*&Local_4 + 308)[1]);
	(*&Local_4 + 308)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene04Vol", 2, -3280,628f, 17,6777f, 2706,993f, 0.0f, -44,45238f, 0.0f, 35,56076f, 9.0f, 21,23197f);
	ADD_TO_VOLUME_SET(Local_4.f_336, (*&Local_4 + 308)[2]);
	(*&Local_4 + 308)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene05Vol", 2, -3285,689f, 18,69407f, 2702,417f, 0.0f, -44,45238f, 0.0f, 21,23197f, 9.0f, 21,23197f);
	ADD_TO_VOLUME_SET(Local_4.f_336, (*&Local_4 + 308)[3]);
	(*&Local_4 + 308)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene06Vol", 2, -3285,689f, 18,69407f, 2702,417f, 0.0f, -44,45238f, 0.0f, 21,23197f, 9.0f, 21,23197f);
	ADD_TO_VOLUME_SET(Local_4.f_336, (*&Local_4 + 308)[4]);
	(*&Local_4 + 308)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVol", 2, -3296,355f, 17,56864f, 2714,065f, 0.0f, -18,24995f, 0.0f, 15,07722f, 9.0f, 9,59585f);
	ADD_TO_VOLUME_SET(Local_4.f_336, (*&Local_4 + 308)[5]);
	Local_4.f_364 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "nnVols_set");
	(*&Local_4 + 340)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "DoctorsRestrict", 2, -2126,056f, 19.0f, 2609,883f, 0.0f, 0.0f, 0.0f, 25,92578f, 9.0f, 20,35836f);
	ADD_TO_VOLUME_SET(Local_4.f_364, (*&Local_4 + 340)[0]);
	(*&Local_4 + 340)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ArrivedAtRidgewood", 2, -3143,977f, 16,24136f, 2791,949f, 0.0f, -9,345558f, 0.0f, 8,869763f, 9.0f, 12.0f);
	ADD_TO_VOLUME_SET(Local_4.f_364, (*&Local_4 + 340)[1]);
	(*&Local_4 + 340)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "FarmLawVol", 2, -3269,475f, 16,56333f, 2706,536f, 0.0f, -30,05278f, 0.0f, 154,7367f, 24.0f, 101.0f);
	ADD_TO_VOLUME_SET(Local_4.f_364, (*&Local_4 + 340)[2]);
	(*&Local_4 + 340)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ShowRestrict", 3, -3288,58f, 17,56864f, 2701,39f, 0.0f, 20.0f, 0.0f, 8.0f, 3.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_364, (*&Local_4 + 340)[3]);
	(*&Local_4 + 340)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseInFarmVol", 2, -3261,084f, 20,19365f, 2718,114f, 0.0f, -30,05278f, 0.0f, 69,70601f, 24.0f, 56,11283f);
	ADD_TO_VOLUME_SET(Local_4.f_364, (*&Local_4 + 340)[4]);
	Local_4.f_384 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "RingVols_set");
	(*&Local_4 + 368)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Ring", 3, -3282,472f, 19,40771f, 2704,901f, 0.0f, 20.0f, 0.0f, 3.0f, 3.0f, 3.0f);
	ADD_TO_VOLUME_SET(Local_4.f_384, (*&Local_4 + 368)[0]);
	(*&Local_4 + 368)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RingWarning", 3, -3282,472f, 19,40771f, 2704,901f, 0.0f, 20.0f, 0.0f, 6.0f, 3.0f, 6.0f);
	ADD_TO_VOLUME_SET(Local_4.f_384, (*&Local_4 + 368)[1]);
	(*&Local_4 + 368)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RingFail", 3, -3282,472f, 19,40771f, 2704,901f, 0.0f, 20.0f, 0.0f, 15.0f, 3.0f, 15.0f);
	ADD_TO_VOLUME_SET(Local_4.f_384, (*&Local_4 + 368)[2]);
	Local_4.f_388 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	*(&Local_4 + 392[06]) = { -2126,809f, 16,74994f, 2601,492f };
	*(&Local_4 + 392[06] + 12) = { -5,407139f, 632,0066f, 6,247584f };
	(*&Local_4 + 492)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -2126,809f, 16,74994f, 2601,492f, -5,407139f, 632,0066f, 6,247584f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 492)[0], Local_4.f_388);
	*(&Local_4 + 392[16]) = { -2126,809f, 16,74994f, 2601,492f };
	*(&Local_4 + 392[16] + 12) = { -5,407139f, 632,0066f, 6,247584f };
	(*&Local_4 + 492)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd01", -2126,809f, 16,74994f, 2601,492f, -5,407139f, 632,0066f, 6,247584f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 492)[1], Local_4.f_388);
	*(&Local_4 + 392[26]) = { -2128,317f, 16,453f, 2604,632f };
	*(&Local_4 + 392[26] + 12) = { 0.0f, 90.0f, 0.0f };
	(*&Local_4 + 492)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -2128,317f, 16,453f, 2604,632f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 492)[2], Local_4.f_388);
	*(&Local_4 + 392[36]) = { -2128,317f, 16,453f, 2604,632f };
	*(&Local_4 + 392[36] + 12) = { 0.0f, 90.0f, 0.0f };
	(*&Local_4 + 492)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd01", -2128,317f, 16,453f, 2604,632f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 492)[3], Local_4.f_388);
	Local_4.f_512 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	*(&Local_4 + 516[06]) = { -3146,211f, 16,591f, 2793,734f };
	*(&Local_4 + 516[06] + 12) = { 0.0f, 80.0f, 0.0f };
	(*&Local_4 + 616)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -3146,211f, 16,591f, 2793,734f, 0.0f, 80.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 616)[0], Local_4.f_512);
	*(&Local_4 + 516[16]) = { -3146,211f, 16,591f, 2793,734f };
	*(&Local_4 + 516[16] + 12) = { 0.0f, 80.0f, 0.0f };
	(*&Local_4 + 616)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd02", -3146,211f, 16,591f, 2793,734f, 0.0f, 80.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 616)[1], Local_4.f_512);
	*(&Local_4 + 516[26]) = { -3139,789f, 16,31471f, 2791,551f };
	*(&Local_4 + 516[26] + 12) = { 0.0f, 80.0f, 0.0f };
	(*&Local_4 + 616)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "WagonStart02", -3139,789f, 16,31471f, 2791,551f, 0.0f, 80.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 616)[2], Local_4.f_512);
	*(&Local_4 + 516[36]) = { -3172,248f, 19,30604f, 2785,766f };
	*(&Local_4 + 516[36] + 12) = { 0.0f, 57,8384f, 0.0f };
	(*&Local_4 + 616)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "WagonEnd02", -3172,248f, 19,30604f, 2785,766f, 0.0f, 57,8384f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 616)[3], Local_4.f_512);
	Local_4.f_636 = CREATE_OBJECTSET_IN_LAYOUT("CrowdEnd02Set", Local_4, 8, 0);
	*(&Local_4 + 640[06]) = { -3286,827f, 17,53143f, 2705,174f };
	*(&Local_4 + 640[06] + 12) = { 0.0f, 22,68684f, 0.0f };
	(*&Local_4 + 836)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd02a", -3286,827f, 17,53143f, 2705,174f, 0.0f, 22,68684f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 836)[0], Local_4.f_636);
	*(&Local_4 + 640[16]) = { -3283,228f, 17,56864f, 2701,82f };
	*(&Local_4 + 640[16] + 12) = { 0.0f, 70,30385f, 0.0f };
	(*&Local_4 + 836)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd02b", -3283,228f, 17,56864f, 2701,82f, 0.0f, 70,30385f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 836)[1], Local_4.f_636);
	*(&Local_4 + 640[26]) = { -3282,972f, 17,56863f, 2704f };
	*(&Local_4 + 640[26] + 12) = { 0.0f, 45,5f, 0.0f };
	(*&Local_4 + 836)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd02d", -3282,972f, 17,56863f, 2704f, 0.0f, 45,5f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 836)[2], Local_4.f_636);
	*(&Local_4 + 640[36]) = { -3285,46f, 17,5687f, 2700,85f };
	*(&Local_4 + 640[36] + 12) = { 0.0f, 67,2076f, 0.0f };
	(*&Local_4 + 836)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd02e", -3285,46f, 17,5687f, 2700,85f, 0.0f, 67,2076f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 836)[3], Local_4.f_636);
	*(&Local_4 + 640[46]) = { -3284,918f, 17,56863f, 2704f };
	*(&Local_4 + 640[46] + 12) = { 0.0f, 407,7205f, 0.0f };
	(*&Local_4 + 836)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd02f", -3284,918f, 17,56863f, 2704f, 0.0f, 407,7205f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 836)[4], Local_4.f_636);
	*(&Local_4 + 640[56]) = { -3286,371f, 17,5689f, 2702,115f };
	*(&Local_4 + 640[56] + 12) = { 0.0f, 45,5f, 0.0f };
	(*&Local_4 + 836)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd02g", -3286,371f, 17,5689f, 2702,115f, 0.0f, 45,5f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 836)[5], Local_4.f_636);
	*(&Local_4 + 640[66]) = { -3286,378f, 17,56863f, 2704f };
	*(&Local_4 + 640[66] + 12) = { 0.0f, 29,59031f, 0.0f };
	(*&Local_4 + 836)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd02h", -3286,378f, 17,56863f, 2704f, 0.0f, 29,59031f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 836)[6], Local_4.f_636);
	*(&Local_4 + 640[76]) = { -3283,2f, 17,56865f, 2700f };
	*(&Local_4 + 640[76] + 12) = { 0.0f, 77,34872f, 0.0f };
	(*&Local_4 + 836)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd02c_x_x_x", -3283,2f, 17,56865f, 2700f, 0.0f, 77,34872f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 836)[7], Local_4.f_636);
	Local_4.f_872 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	*(&Local_4 + 876[06]) = { -3287,002f, 17,49146f, 2704,027f };
	*(&Local_4 + 876[06] + 12) = { 0.0f, 25.0f, 0.0f };
	(*&Local_4 + 1024)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -3287,002f, 17,49146f, 2704,027f, 0.0f, 25.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1024)[0], Local_4.f_872);
	*(&Local_4 + 876[16]) = { -3282,55f, 17,5687f, 2704,5f };
	*(&Local_4 + 876[16] + 12) = { 0.0f, -145,722f, 0.0f };
	(*&Local_4 + 1024)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd03", -3282,55f, 17,5687f, 2704,5f, 0.0f, -145,722f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1024)[1], Local_4.f_872);
	*(&Local_4 + 876[26]) = { -3289,257f, 17,56863f, 2699,545f };
	*(&Local_4 + 876[26] + 12) = { 0.0f, 180.0f, 0.0f };
	(*&Local_4 + 1024)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -3289,257f, 17,56863f, 2699,545f, 0.0f, 180.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1024)[2], Local_4.f_872);
	*(&Local_4 + 876[36]) = { -3282,21f, 17,5687f, 2703,43f };
	*(&Local_4 + 876[36] + 12) = { 0.0f, -177,793f, 0.0f };
	(*&Local_4 + 1024)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd03", -3282,21f, 17,5687f, 2703,43f, 0.0f, -177,793f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1024)[3], Local_4.f_872);
	*(&Local_4 + 876[46]) = { -3284,797f, 17,54202f, 2701,744f };
	*(&Local_4 + 876[46] + 12) = { 0.0f, 50.0f, 0.0f };
	(*&Local_4 + 1024)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "StrongmanStart03", -3284,797f, 17,54202f, 2701,744f, 0.0f, 50.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1024)[4], Local_4.f_872);
	*(&Local_4 + 876[56]) = { -3282,81f, 17,5687f, 2702,6f };
	*(&Local_4 + 876[56] + 12) = { 0.0f, -169,849f, 0.0f };
	(*&Local_4 + 1024)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "StrongmanEnd03", -3282,81f, 17,5687f, 2702,6f, 0.0f, -169,849f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1024)[5], Local_4.f_872);
	Local_4.f_1052 = CREATE_OBJECTSET_IN_LAYOUT("CrowdEnd03Set", Local_4, 8, 0);
	*(&Local_4 + 1056[06]) = { -3290,07f, 17,3092f, 2704.0f };
	*(&Local_4 + 1056[06] + 12) = { 0.0f, -109,8062f, 0.0f };
	(*&Local_4 + 1252)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd03a", -3290,07f, 17,3092f, 2704.0f, 0.0f, -109,8062f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1252)[0], Local_4.f_1052);
	*(&Local_4 + 1056[16]) = { -3288,59f, 17,446f, 2704,39f };
	*(&Local_4 + 1056[16] + 12) = { 0.0f, -101,4068f, 0.0f };
	(*&Local_4 + 1252)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd03b", -3288,59f, 17,446f, 2704,39f, 0.0f, -101,4068f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1252)[1], Local_4.f_1052);
	*(&Local_4 + 1056[26]) = { -3282,68f, 17,5687f, 2701,43f };
	*(&Local_4 + 1056[26] + 12) = { 0.0f, -175,822f, 0.0f };
	(*&Local_4 + 1252)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd03d", -3282,68f, 17,5687f, 2701,43f, 0.0f, -175,822f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1252)[2], Local_4.f_1052);
	*(&Local_4 + 1056[36]) = { -3285,46f, 17,5687f, 2700,85f };
	*(&Local_4 + 1056[36] + 12) = { 0.0f, -140,2759f, 0.0f };
	(*&Local_4 + 1252)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd03e", -3285,46f, 17,5687f, 2700,85f, 0.0f, -140,2759f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1252)[3], Local_4.f_1052);
	*(&Local_4 + 1056[46]) = { -3284,8f, 17,5504f, 2704,58f };
	*(&Local_4 + 1056[46] + 12) = { 0.0f, -66,3408f, 0.0f };
	(*&Local_4 + 1252)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd03f", -3284,8f, 17,5504f, 2704,58f, 0.0f, -66,3408f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1252)[4], Local_4.f_1052);
	*(&Local_4 + 1056[56]) = { -3284,43f, 17,5249f, 2705,38f };
	*(&Local_4 + 1056[56] + 12) = { 0.0f, -84,7577f, 0.0f };
	(*&Local_4 + 1252)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd03g", -3284,43f, 17,5249f, 2705,38f, 0.0f, -84,7577f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1252)[5], Local_4.f_1052);
	*(&Local_4 + 1056[66]) = { -3286,818f, 17,5249f, 2706,036f };
	*(&Local_4 + 1056[66] + 12) = { 0.0f, -123,3669f, 0.0f };
	(*&Local_4 + 1252)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd03h", -3286,818f, 17,5249f, 2706,036f, 0.0f, -123,3669f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1252)[6], Local_4.f_1052);
	*(&Local_4 + 1056[76]) = { -3281,56f, 17,5687f, 2702,09f };
	*(&Local_4 + 1056[76] + 12) = { 0.0f, 161,904f, 0.0f };
	(*&Local_4 + 1252)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd03c_x_x_x", -3281,56f, 17,5687f, 2702,09f, 0.0f, 161,904f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1252)[7], Local_4.f_1052);
	Local_4.f_1288 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	*(&Local_4 + 1292[06]) = { -3287,364f, 17,569f, 2704,64f };
	*(&Local_4 + 1292[06] + 12) = { 0.0f, 315.0f, 0.0f };
	(*&Local_4 + 1392)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -3287,364f, 17,569f, 2704,64f, 0.0f, 315.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1392)[0], Local_4.f_1288);
	*(&Local_4 + 1292[16]) = { -3284,494f, 17,56863f, 2703,507f };
	*(&Local_4 + 1292[16] + 12) = { 0.0f, -116,4592f, 0.0f };
	(*&Local_4 + 1392)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd04", -3284,494f, 17,56863f, 2703,507f, 0.0f, -116,4592f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1392)[1], Local_4.f_1288);
	*(&Local_4 + 1292[26]) = { -3285,07f, 17,5687f, 2700,82f };
	*(&Local_4 + 1292[26] + 12) = { 0.0f, 174,983f, 0.0f };
	(*&Local_4 + 1392)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd04", -3285,07f, 17,5687f, 2700,82f, 0.0f, 174,983f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1392)[2], Local_4.f_1288);
	*(&Local_4 + 1292[36]) = { -3279,71f, 17,5661f, 2707,31f };
	*(&Local_4 + 1292[36] + 12) = { 0.0f, 49,92233f, 0.0f };
	(*&Local_4 + 1392)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "StrongmanEnd04", -3279,71f, 17,5661f, 2707,31f, 0.0f, 49,92233f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1392)[3], Local_4.f_1288);
	Local_4.f_1412 = CREATE_OBJECTSET_IN_LAYOUT("CrowdEnd04Set", Local_4, 8, 0);
	*(&Local_4 + 1416[06]) = { -3290,07f, 17,3092f, 2704.0f };
	*(&Local_4 + 1416[06] + 12) = { 0.0f, -113,2185f, 0.0f };
	(*&Local_4 + 1612)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd04a", -3290,07f, 17,3092f, 2704.0f, 0.0f, -113,2185f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1612)[0], Local_4.f_1412);
	*(&Local_4 + 1416[16]) = { -3288,59f, 17,446f, 2704,39f };
	*(&Local_4 + 1416[16] + 12) = { 0.0f, -99,08442f, 0.0f };
	(*&Local_4 + 1612)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd04b", -3288,59f, 17,446f, 2704,39f, 0.0f, -99,08442f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1612)[1], Local_4.f_1412);
	*(&Local_4 + 1416[26]) = { -3285,61f, 17,5687f, 2698,39f };
	*(&Local_4 + 1416[26] + 12) = { 0.0f, -169,908f, 0.0f };
	(*&Local_4 + 1612)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd04d", -3285,61f, 17,5687f, 2698,39f, 0.0f, -169,908f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1612)[2], Local_4.f_1412);
	*(&Local_4 + 1416[36]) = { -3285,46f, 17,5687f, 2700,85f };
	*(&Local_4 + 1416[36] + 12) = { 0.0f, 192,0645f, 0.0f };
	(*&Local_4 + 1612)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd04e", -3285,46f, 17,5687f, 2700,85f, 0.0f, 192,0645f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1612)[3], Local_4.f_1412);
	*(&Local_4 + 1416[46]) = { -3287,33f, 17,5577f, 2704,35f };
	*(&Local_4 + 1416[46] + 12) = { 0.0f, -76,1881f, 0.0f };
	(*&Local_4 + 1612)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd04f", -3287,33f, 17,5577f, 2704,35f, 0.0f, -76,1881f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1612)[4], Local_4.f_1412);
	*(&Local_4 + 1416[56]) = { -3287,73f, 17,5039f, 2704,72f };
	*(&Local_4 + 1416[56] + 12) = { 0.0f, -97,7808f, 0.0f };
	(*&Local_4 + 1612)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd04g", -3287,73f, 17,5039f, 2704,72f, 0.0f, -97,7808f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1612)[5], Local_4.f_1412);
	*(&Local_4 + 1416[66]) = { -3285,85f, 17,5687f, 2699,44f };
	*(&Local_4 + 1416[66] + 12) = { 0.0f, -160,4786f, 0.0f };
	(*&Local_4 + 1612)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd04h", -3285,85f, 17,5687f, 2699,44f, 0.0f, -160,4786f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1612)[6], Local_4.f_1412);
	*(&Local_4 + 1416[76]) = { -3284,69f, 17,5687f, 2698,77f };
	*(&Local_4 + 1416[76] + 12) = { 0.0f, 173,594f, 0.0f };
	(*&Local_4 + 1612)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd04c_x_x_x", -3284,69f, 17,5687f, 2698,77f, 0.0f, 173,594f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1612)[7], Local_4.f_1412);
	Local_4.f_1648 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", Local_4, 8, 0);
	*(&Local_4 + 1652[06]) = { -3285.0f, 17,45723f, 2704,901f };
	*(&Local_4 + 1652[06] + 12) = { 0.0f, 270.0f, 0.0f };
	(*&Local_4 + 1800)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart05", -3285.0f, 17,45723f, 2704,901f, 0.0f, 270.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1800)[0], Local_4.f_1648);
	*(&Local_4 + 1652[16]) = { -3284,42f, 17,5687f, 2703,06f };
	*(&Local_4 + 1652[16] + 12) = { 0.0f, -159,589f, 0.0f };
	(*&Local_4 + 1800)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd05", -3284,42f, 17,5687f, 2703,06f, 0.0f, -159,589f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1800)[1], Local_4.f_1648);
	*(&Local_4 + 1652[26]) = { -3285,07f, 17,5687f, 2700,82f };
	*(&Local_4 + 1652[26] + 12) = { 0.0f, 174,983f, 0.0f };
	(*&Local_4 + 1800)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd05", -3285,07f, 17,5687f, 2700,82f, 0.0f, 174,983f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1800)[2], Local_4.f_1648);
	*(&Local_4 + 1652[36]) = { -3283,37f, 17,5687f, 2704,16f };
	*(&Local_4 + 1652[36] + 12) = { 0.0f, 25,5173f, 0.0f };
	(*&Local_4 + 1800)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart05", -3283,37f, 17,5687f, 2704,16f, 0.0f, 25,5173f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1800)[3], Local_4.f_1648);
	*(&Local_4 + 1652[46]) = { -3280.0f, 17,45723f, 2704,901f };
	*(&Local_4 + 1652[46] + 12) = { 0.0f, 90.0f, 0.0f };
	(*&Local_4 + 1800)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "StrongmanStart05", -3280.0f, 17,45723f, 2704,901f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1800)[4], Local_4.f_1648);
	*(&Local_4 + 1652[56]) = { -3283,39f, 17,5687f, 2704,14f };
	*(&Local_4 + 1652[56] + 12) = { 0.0f, 23,5428f, 0.0f };
	(*&Local_4 + 1800)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "StrongmanEnd05", -3283,39f, 17,5687f, 2704,14f, 0.0f, 23,5428f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1800)[5], Local_4.f_1648);
	Local_4.f_1828 = CREATE_OBJECTSET_IN_LAYOUT("CrowdEnd05Set", Local_4, 8, 0);
	(*&Local_4 + 1832)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd05a", -3290,07f, 17,3093f, 2704.0f, 0.0f, -10,0006f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1832)[0], Local_4.f_1828);
	(*&Local_4 + 1832)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd05b", -3288,59f, 17,446f, 2704,39f, 0.0f, 7,23038f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1832)[1], Local_4.f_1828);
	(*&Local_4 + 1832)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd05d", -3285,61f, 17,5687f, 2698,39f, 0.0f, 76,1922f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1832)[2], Local_4.f_1828);
	(*&Local_4 + 1832)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd05e", -3285,56f, 17,5687f, 2700,86f, 0.0f, 67,2015f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1832)[3], Local_4.f_1828);
	(*&Local_4 + 1832)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd05f", -3285,04f, 17,481f, 2706,77f, 0.0f, -23,8158f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1832)[4], Local_4.f_1828);
	(*&Local_4 + 1832)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd05g", -3281,9f, 17,5507f, 2706,67f, 0.0f, 35,2156f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1832)[5], Local_4.f_1828);
	(*&Local_4 + 1832)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd05h", -3285,85f, 17,5687f, 2699,44f, 0.0f, 92,837f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1832)[6], Local_4.f_1828);
	(*&Local_4 + 1832)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd05c_x_x_x", -3284,69f, 17,5687f, 2698,77f, 0.0f, 121,303f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1832)[7], Local_4.f_1828);
	Local_4.f_1868 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene06Set", Local_4, 8, 0);
	*(&Local_4 + 1872[06]) = { -3284,835f, 17,46827f, 2707,166f };
	*(&Local_4 + 1872[06] + 12) = { 0.0f, 676,3422f, 0.0f };
	(*&Local_4 + 2044)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart06", -3284,835f, 17,46827f, 2707,166f, 0.0f, 676,3422f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2044)[0], Local_4.f_1868);
	*(&Local_4 + 1872[16]) = { -3285,16f, 17,569f, 2703,13f };
	*(&Local_4 + 1872[16] + 12) = { 0.0f, -122,9742f, 0.0f };
	(*&Local_4 + 2044)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd06", -3285,16f, 17,569f, 2703,13f, 0.0f, -122,9742f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2044)[1], Local_4.f_1868);
	*(&Local_4 + 1872[26]) = { -3287,727f, 17,56863f, 2699,271f };
	*(&Local_4 + 1872[26] + 12) = { 0.0f, 179,5994f, 0.0f };
	(*&Local_4 + 2044)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart06_x_x_x", -3287,727f, 17,56863f, 2699,271f, 0.0f, 179,5994f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2044)[2], Local_4.f_1868);
	*(&Local_4 + 1872[36]) = { -3286,74f, 17,569f, 2703,37f };
	*(&Local_4 + 1872[36] + 12) = { 0.0f, -118,0117f, 0.0f };
	(*&Local_4 + 2044)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd06", -3286,74f, 17,569f, 2703,37f, 0.0f, -118,0117f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2044)[3], Local_4.f_1868);
	*(&Local_4 + 1872[46]) = { -3280.0f, 17,45723f, 2704,901f };
	*(&Local_4 + 1872[46] + 12) = { 0.0f, 90.0f, 0.0f };
	(*&Local_4 + 2044)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "StrongmanStart06_x_x_x", -3280.0f, 17,45723f, 2704,901f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2044)[4], Local_4.f_1868);
	*(&Local_4 + 1872[56]) = { -3280,89f, 17,5687f, 2705,82f };
	*(&Local_4 + 1872[56] + 12) = { 0.0f, 58,33288f, 0.0f };
	(*&Local_4 + 2044)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "StrongmanEnd06", -3280,89f, 17,5687f, 2705,82f, 0.0f, 58,33288f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2044)[5], Local_4.f_1868);
	*(&Local_4 + 1872[66]) = { -3285,11f, 19,0687f, 2703,08f };
	*(&Local_4 + 1872[66] + 12) = { 0.0f, -148,555f, 0.0f };
	(*&Local_4 + 2044)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "StrongmanAim06", -3285,11f, 19,0687f, 2703,08f, 0.0f, -148,555f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2044)[6], Local_4.f_1868);
	Local_4.f_2076 = CREATE_OBJECTSET_IN_LAYOUT("CrowdEnd06Set", Local_4, 8, 0);
	(*&Local_4 + 2080)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd06a", -3287,82f, 17,56863f, 2703,818f, 0.0f, -112,1606f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2080)[0], Local_4.f_2076);
	(*&Local_4 + 2080)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd06b", -3286,955f, 17,56863f, 2705,046f, 0.0f, -98,53657f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2080)[1], Local_4.f_2076);
	(*&Local_4 + 2080)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd06d", -3283,51f, 17,569f, 2699,94f, 0.0f, 209,0319f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2080)[2], Local_4.f_2076);
	(*&Local_4 + 2080)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd06e", -3282,219f, 17,56863f, 2700,348f, 0.0f, 190,5756f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2080)[3], Local_4.f_2076);
	(*&Local_4 + 2080)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd06f", -3284,259f, 17,56863f, 2698,61f, 0.0f, -160,3826f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2080)[4], Local_4.f_2076);
	(*&Local_4 + 2080)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd06g", -3282,23f, 17,66887f, 2707,756f, 0.0f, 6,841308f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2080)[5], Local_4.f_2076);
	(*&Local_4 + 2080)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd06h", -3284,825f, 17,56863f, 2700,098f, 0.0f, 212,7094f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2080)[6], Local_4.f_2076);
	(*&Local_4 + 2080)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowdEnd06c_x_x_X", -3284,69f, 17,5687f, 2698,77f, 0.0f, 205,0759f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2080)[7], Local_4.f_2076);
	Local_4.f_2116 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	*(&Local_4 + 2120[06]) = { -3285,11f, 17,5687f, 2703,08f };
	*(&Local_4 + 2120[06] + 12) = { 0.0f, 0.0f, 0.0f };
	(*&Local_4 + 2244)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartLast", -3285,11f, 17,5687f, 2703,08f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2244)[0], Local_4.f_2116);
	*(&Local_4 + 2120[16]) = { -3293,445f, 15,98061f, 2715,046f };
	*(&Local_4 + 2120[16] + 12) = { 0.0f, 252,3665f, 0.0f };
	(*&Local_4 + 2244)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEndLast", -3293,445f, 15,98061f, 2715,046f, 0.0f, 252,3665f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2244)[1], Local_4.f_2116);
	*(&Local_4 + 2120[26]) = { -3289,15f, 17,56864f, 2701,734f };
	*(&Local_4 + 2120[26] + 12) = { 0.0f, 226,8113f, 0.0f };
	(*&Local_4 + 2244)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStartLast", -3289,15f, 17,56864f, 2701,734f, 0.0f, 226,8113f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2244)[2], Local_4.f_2116);
	*(&Local_4 + 2120[36]) = { -3305,65f, 16,17f, 2712,22f };
	*(&Local_4 + 2120[36] + 12) = { 0.0f, 446,9353f, 0.0f };
	(*&Local_4 + 2244)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEndLast", -3305,65f, 16,17f, 2712,22f, 0.0f, 446,9353f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2244)[3], Local_4.f_2116);
	*(&Local_4 + 2120[46]) = { -3312,432f, 16,26849f, 2711,641f };
	*(&Local_4 + 2120[46] + 12) = { 0.0f, 446,9353f, 0.0f };
	(*&Local_4 + 2244)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "WagonEndLast", -3312,432f, 16,26849f, 2711,641f, 0.0f, 446,9353f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2244)[4], Local_4.f_2116);
	Local_4.f_2268 = CREATE_OBJECTSET_IN_LAYOUT("nStageOneSet", Local_4, 8, 0);
	*(&Local_4 + 2272[06]) = { -2130,073f, 16,14567f, 2606,818f };
	*(&Local_4 + 2272[06] + 12) = { 0.0f, 0.0f, 0.0f };
	(*&Local_4 + 2348)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "WagonPos", -2130,073f, 16,14567f, 2606,818f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2348)[0], Local_4.f_2268);
	*(&Local_4 + 2272[16]) = { -3143,977f, 16,24136f, 2792,155f };
	*(&Local_4 + 2272[16] + 12) = { 0.0f, 80.0f, 0.0f };
	(*&Local_4 + 2348)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "OutsideRidgewood", -3143,977f, 16,24136f, 2792,155f, 0.0f, 80.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2348)[1], Local_4.f_2268);
	*(&Local_4 + 2272[26]) = { -3287,002f, 17,49146f, 2704,027f };
	*(&Local_4 + 2272[26] + 12) = { 0.0f, 25.0f, 0.0f };
	(*&Local_4 + 2348)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "AtShow", -3287,002f, 17,49146f, 2704,027f, 0.0f, 25.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2348)[2], Local_4.f_2268);
	Local_4.f_2364 = CREATE_OBJECTSET_IN_LAYOUT("nStageTwoSet", Local_4, 8, 0);
	*(&Local_4 + 2368[06]) = { -3287,36f, 17,5692f, 2694,98f };
	*(&Local_4 + 2368[06] + 12) = { 0.0f, 105.0f, 0.0f };
	(*&Local_4 + 2468)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "TeleportWagon", -3287,36f, 17,5692f, 2694,98f, 0.0f, 105.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2468)[0], Local_4.f_2364);
	*(&Local_4 + 2368[16]) = { -3287,55f, 17,57f, 2701,12f };
	*(&Local_4 + 2368[16] + 12) = { 0.0f, 48,32f, 0.0f };
	(*&Local_4 + 2468)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Table", -3287,55f, 17,57f, 2701,12f, 0.0f, 48,32f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2468)[1], Local_4.f_2364);
	*(&Local_4 + 2368[26]) = { -3258,318f, 18,88402f, 2725,888f };
	*(&Local_4 + 2368[26] + 12) = { 0.0f, 270.0f, 0.0f };
	(*&Local_4 + 2468)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Skull", -3258,318f, 18,88402f, 2725,888f, 0.0f, 270.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2468)[2], Local_4.f_2364);
	*(&Local_4 + 2368[36]) = { -3284,797f, 17,54202f, 2701,744f };
	*(&Local_4 + 2368[36] + 12) = { 0.0f, 50.0f, 0.0f };
	(*&Local_4 + 2468)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "OpponentPosition_x_x_x", -3284,797f, 17,54202f, 2701,744f, 0.0f, 50.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2468)[3], Local_4.f_2364);
	Local_4.f_2488 = CREATE_OBJECTSET_IN_LAYOUT("nStageThreeSet", Local_4, 8, 0);
	*(&Local_4 + 2492[06]) = { -3288,183f, 17,56864f, 2702,6f };
	*(&Local_4 + 2492[06] + 12) = { 0.0f, 45.0f, 0.0f };
	(*&Local_4 + 2592)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerDrinkGoTo", -3288,183f, 17,56864f, 2702,6f, 0.0f, 45.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2592)[0], Local_4.f_2488);
	*(&Local_4 + 2492[16]) = { -3288,892f, 17,56864f, 2701,089f };
	*(&Local_4 + 2492[16] + 12) = { 0.0f, 225.0f, 0.0f };
	(*&Local_4 + 2592)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionDrinkGoTo", -3288,892f, 17,56864f, 2701,089f, 0.0f, 225.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2592)[1], Local_4.f_2488);
	*(&Local_4 + 2492[26]) = { -3292,908f, 17,44635f, 2703,474f };
	*(&Local_4 + 2492[26] + 12) = { 0.0f, 0.0f, 0.0f };
	(*&Local_4 + 2592)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "HideBottle", -3292,908f, 17,44635f, 2703,474f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2592)[2], Local_4.f_2488);
	*(&Local_4 + 2492[36]) = { -3287,625f, 17,569f, 2703,617f };
	*(&Local_4 + 2492[36] + 12) = { 0.0f, 235,9931f, 0.0f };
	(*&Local_4 + 2592)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "ShootSkullSpot", -3287,625f, 17,569f, 2703,617f, 0.0f, 235,9931f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2592)[3], Local_4.f_2488);
	Local_4.f_2612 = CREATE_OBJECTSET_IN_LAYOUT("nStageFourSet", Local_4, 8, 0);
	*(&Local_4 + 2616[06]) = { -3279,71f, 17,5661f, 2707,31f };
	*(&Local_4 + 2616[06] + 12) = { 0.0f, 49,92233f, 0.0f };
	(*&Local_4 + 2644)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "challenger", -3279,71f, 17,5661f, 2707,31f, 0.0f, 49,92233f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2644)[0], Local_4.f_2612);
	Local_4.f_2652 = CREATE_OBJECTSET_IN_LAYOUT("nStageFiveSet", Local_4, 8, 0);
	*(&Local_4 + 2656[06]) = { -3282,472f, 17,319f, 2704,901f };
	*(&Local_4 + 2656[06] + 12) = { 0.0f, 0.0f, 0.0f };
	(*&Local_4 + 2684)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "RingCenter", -3282,472f, 17,319f, 2704,901f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2684)[0], Local_4.f_2652);
	*(&Local_4 + 2692[06]) = { -3288,046f, 18,371f, 2700,637f };
	*(&Local_4 + 2692[06] + 12) = { 0.0f, 111,8781f, 0.0f };
	*(&Local_4 + 2692[16]) = { -3287,409f, 18,371f, 2700,875f };
	*(&Local_4 + 2692[16] + 12) = { 0.0f, 50.0f, 0.0f };
	*(&Local_4 + 2692[26]) = { -3287,259f, 18,371f, 2700,4f };
	*(&Local_4 + 2692[26] + 12) = { 0.0f, 72,06677f, 0.0f };
	*(&Local_4 + 2692[36]) = { -3287,99f, 18,371f, 2700,467f };
	*(&Local_4 + 2692[36] + 12) = { 0.0f, 20.0f, 0.0f };
	*(&Local_4 + 2692[46]) = { -3287,486f, 18,371f, 2700,566f };
	*(&Local_4 + 2692[46] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 2692[56]) = { -3287,693f, 18,371f, 2700,51f };
	*(&Local_4 + 2692[56] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_4 + 2840[06]) = { -3120,142f, 15,28346f, 2801,411f };
	*(&Local_4 + 2840[06] + 12) = { 0.0f, 50.0f, 0.0f };
	Local_4.f_2868 = CREATE_GRINGO_IN_LAYOUT(Local_4, "merchant02_idle", "merchant02_idle", -3289,701f, 17,56863f, 2699,406f, 0.0f, -107,3376f, 0.0f);
}

void Function_502(int iParam0, int iParam1) //Position: 0x1D8D9 / 121049
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

bool Function_503() //Position: 0x1D922 / 121122
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_529(0))
		{
			return 0;
		}
		if (!Function_525())
		{
			return 0;
		}
		if (!Function_520(&bLocal_731))
		{
			return 0;
		}
		if (!REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\MERCHANT02"))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_1140))
		{
			bLocal_1140 = Function_511(StackVal, StackVal, 2, 0, 1, (*&Local_4 + 392)[26], 0, 0, 0);
			EQUIP_ACCESSORY(bLocal_1140, 0, 1);
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_1141))
		{
			bLocal_1141 = Function_504(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_1141, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_504(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x1D9DF / 121311
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
	if (Global_3381 || Function_231(1))
	{
		Function_510(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_509())
		{
			return "";
		}
	}
	if (!Function_507())
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
		Function_239(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_239(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_239(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_239(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_506(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_506(StackVal, StackVal, vVar5, 0, 1, 1);
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
		Function_505(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
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

void Function_505(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1DD37 / 122167
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

var Function_506(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1DD74 / 122228
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

bool Function_507() //Position: 0x1DE0F / 122383
{
	if (Function_508() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_508() //Position: 0x1DE25 / 122405
{
	return Global_12976.f_152;
}

bool Function_509() //Position: 0x1DE30 / 122416
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_510(var uParam0, bool bParam1, bool bParam2) //Position: 0x1DE50 / 122448
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_75(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_75(&Global_12976 + 36 + 20, 64);
	}
	return;
}

bool Function_511(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x1DE7D / 122493
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
		if (!Function_158(&(Global_29008[Global_30621[3]]), 4))
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
		Function_519(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_518(StackVal, uParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_514(StackVal, uParam7);
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
		Function_513(bVar1, 0, 0, 0, 0);
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
		Function_512(bVar1, 0);
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

void Function_512(bool bParam0, bool bParam1) //Position: 0x1E367 / 123751
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_513(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x1E387 / 123783
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

bool Function_514(int iParam0, bool bParam1) //Position: 0x1E3DB / 123867
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_334(iParam0))
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
						Function_515(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_515(bool bParam0, bool bParam1) //Position: 0x1E45B / 123995
{
	Function_517(bParam0);
	Function_516(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_516(bool bParam0) //Position: 0x1E481 / 124033
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_517(bool bParam0) //Position: 0x1E4A5 / 124069
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

bool Function_518(int iParam0, bool bParam1) //Position: 0x1E574 / 124276
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

void Function_519(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E607 / 124423
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
						Function_184(bVar1);
					}
				}
				Function_477(bVar0);
			}
		}
	}
	return;
}

bool Function_520(bool bParam0) //Position: 0x1E6FE / 124670
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_524();
	iVar1 = 0;
	if (!Function_170(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_523(bParam0[iVar03], 8);
		}
		else if (Function_522())
		{
			iVar1 = 1;
			Function_523(bParam0[iVar03], 8);
		}
		Function_523(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_170(bParam0[iVar03], 4))
		{
			if (!Function_170(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_170(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_170(bParam0[03], 8) || iVar1));
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
				Function_523(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_170(bParam0[iVar03], 4))
		{
			if (!Function_170(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_523(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_523(bParam0[iVar03], 2);
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
							Function_523(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_523(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_523(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_523(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_523(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_523(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_523(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_523(bParam0[iVar03], 2);
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
	Function_521();
	return 1;
}

void Function_521() //Position: 0x1EA79 / 125561
{
	if (!Function_314(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_522() //Position: 0x1EAB9 / 125625
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

void Function_523(var uParam0, int iParam1) //Position: 0x1EAE4 / 125668
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_524() //Position: 0x1EAF5 / 125685
{
	if (!Function_314(128))
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

bool Function_525() //Position: 0x1EB37 / 125751
{
	Function_528(&Local_4 + 4, 1202, 2, 0);
	Function_528(&Local_4 + 4, 976, 2, 0);
	Function_528(&Local_4 + 4, 173, 2, 0);
	Function_528(&Local_4 + 4, 172, 2, 0);
	Function_528(&Local_4 + 4, 39, 2, 0);
	Function_528(&Local_4 + 4, 765, 2, 0);
	Function_528(&Local_4 + 4, 760, 2, 0);
	Function_528(&Local_4 + 4, 758, 2, 0);
	Function_528(&Local_4 + 4, 763, 2, 0);
	Function_528(&Local_4 + 4, 171, 2, 0);
	Function_528(&Local_4 + 4, 611, 2, 0);
	Function_526(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/merchant02_idle", 1, 0);
	if (Function_520(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_526(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1EC19 / 125977
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_527(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_523(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_527(var uParam0, int iParam1, int iParam2) //Position: 0x1EC51 / 126033
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_170(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_523(uParam0[iVar03], 4);
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

var Function_528(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1ED15 / 126229
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_170(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_523(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_523(bParam0[iVar03], 8);
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

bool Function_529(bool bParam0) //Position: 0x1EDE5 / 126437
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

void Function_530() //Position: 0x1EE13 / 126483
{
	Function_526(&bLocal_731, "hat_toss", 5, 0);
	Function_526(&bLocal_731, "custom/hat_toss", 8, 0);
	Function_526(&bLocal_731, "crowd_win_lose", 5, 0);
	Function_526(&bLocal_731, "custom/crowd_win_lose", 8, 0);
	Function_526(&bLocal_731, "stand_shove", 5, 0);
	Function_526(&bLocal_731, "custom/stand_shove", 8, 0);
	Function_526(&bLocal_731, "crowd_cheer", 5, 0);
	Function_526(&bLocal_731, "custom/crowd_cheer", 8, 0);
	Function_526(&bLocal_731, "gather", 5, 0);
	Function_526(&bLocal_731, "custom/gather", 8, 0);
	Function_526(&bLocal_731, "crowd_callout_r", 5, 0);
	Function_526(&bLocal_731, "custom/crowd_callout_r", 8, 0);
	Function_526(&bLocal_731, "crowd_callout", 5, 0);
	Function_526(&bLocal_731, "custom/crowd_callout", 8, 0);
	Function_526(&bLocal_731, "crowd_right", 5, 0);
	Function_526(&bLocal_731, "custom/crowd_right", 8, 0);
	Function_526(&bLocal_731, "crowd_left", 5, 0);
	Function_526(&bLocal_731, "custom/crowd_left", 8, 0);
	Function_526(&bLocal_731, "crowd_pointer", 5, 0);
	Function_526(&bLocal_731, "custom/crowd_pointer", 8, 0);
	Function_526(&bLocal_731, "crowd_front", 5, 0);
	Function_526(&bLocal_731, "custom/crowd_front", 8, 0);
	Function_526(&bLocal_731, "crowd_center", 5, 0);
	Function_526(&bLocal_731, "custom/crowd_center", 8, 0);
	Function_526(&bLocal_731, "crowd_idles", 5, 0);
	Function_526(&bLocal_731, "custom/crowd_idles", 8, 0);
	Function_526(&bLocal_731, "Merchant02_shothand", 5, 0);
	Function_526(&bLocal_731, "custom/Merchant02_shothand", 8, 0);
	Function_526(&bLocal_731, "merchant02_idle", 5, 0);
	Function_526(&bLocal_731, "custom/merchant02_idle", 8, 0);
	Function_526(&bLocal_731, "aguila_mel", 5, 0);
	Function_528(&bLocal_731, 546, 3, 0);
	Function_528(&bLocal_731, 173, 2, 0);
	Function_528(&bLocal_731, 37, 2, 0);
	Function_528(&bLocal_731, 38, 2, 0);
	Function_528(&bLocal_731, 175, 2, 0);
	Function_528(&bLocal_731, 174, 2, 0);
	Function_528(&bLocal_731, 39, 2, 0);
	Function_528(&bLocal_731, 170, 2, 0);
	Function_528(&bLocal_731, 171, 2, 0);
	Function_528(&bLocal_731, 172, 2, 0);
	Function_526(&bLocal_731, "$/fragments/p_gen_skullcattle03x", 0, 0);
	Function_526(&bLocal_731, "$/fragments/p_gen_tableSnakeOil01x", 0, 0);
	Function_526(&bLocal_731, "$/fragments/p_gen_bottleSnakeOil01x", 0, 0);
	Function_526(&bLocal_731, "$/fragments/p_gen_bottleSnakeOil02x", 0, 0);
	Function_526(&bLocal_731, "RidgewoodFarm", 12, 0);
	Function_526(&bLocal_731, "Merchant02", 10, 0);
	return;
}

void Function_531(int iParam0, bool bParam1) //Position: 0x1F2CF / 127695
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_538(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_283(iParam0))
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
	if (!Function_283(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_537();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_220();
	Function_275();
	Function_232("");
	Function_536(0);
	Function_535();
	Function_203();
	Function_202();
	ENABLE_JOURNAL_REPLAY(0);
	Function_534();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_358(0, 0x40400000);
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
	Function_533(13);
	Function_533(14);
	Function_533(25);
	Function_533(24);
	Function_533(12);
	Function_533(27);
	Function_533(26);
	Function_533(15);
	Function_532();
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

void Function_532() //Position: 0x1F6F3 / 128755
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

void Function_533(int iParam0) //Position: 0x1F767 / 128871
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_534() //Position: 0x1F787 / 128903
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

void Function_535() //Position: 0x1F7C4 / 128964
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_536(int iParam0) //Position: 0x1F7D8 / 128984
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_206())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_537() //Position: 0x1F80D / 129037
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_538(int iParam0, int iParam1) //Position: 0x1F816 / 129046
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
			Function_539(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_539(int iParam0) //Position: 0x1F898 / 129176
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

void Function_540() //Position: 0x1F8E6 / 129254
{
	return;
}

bool Function_541(int iParam0) //Position: 0x1F8EC / 129260
{
	switch (iParam0->f_16)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000005:
					if (bLocal_913 == 0)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_1140, "Merchant02_shootMember_demo", "Merchant02_shootMember_demo", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
			}
			break;
		
		case 0x00000008:
			switch (StackVal)
			{
				case 0x00000000:
					if (bLocal_913 == 0)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_1140, "Merchant02_shootsWest_demo", "Merchant02_shootsWest_demo", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000005:
					if (bLocal_913 == 0)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_1140, "Merchant02_shootMember_demo", "Merchant02_shootMember_demo", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
			}
			break;
		
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			switch (StackVal)
			{
				case 0x00000000:
					if (bLocal_913 == 0)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_1140, "Merchant02_shootsWest_demo", "Merchant02_shootsWest_demo", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000005:
					if (bLocal_913 == 0)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_1140, "Merchant02_shootMember_demo", "Merchant02_shootMember_demo", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
			}
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
			Function_542(iParam0, 1);
			return 1;
		}
	}
	Function_542(iParam0, 0);
	return 0;
}

void Function_542(int iParam0, bool bParam1) //Position: 0x1FB59 / 129881
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

bool Function_543(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x1FB7D / 129917
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
		Function_542(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_561(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_560(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_560(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_547(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_152(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_542(iParam2, 0);
														return 0;
													}
													if (Function_152(bVar17, 2))
													{
														Function_546(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_545(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_152(bVar17, 4))
													{
														Function_546(&bVar17);
														strcpy(&Var18, "", 64);
														Function_544(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_232(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_545(StackVal, iParam2, bVar17);
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
	Function_542(iParam2, 0);
	return 0;
}

void Function_544(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x1FF16 / 130838
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

void Function_545(var uParam0, int iParam1, bool bParam2) //Position: 0x20003 / 131075
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

void Function_546(bool bParam0) //Position: 0x20079 / 131193
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_547(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x2009B / 131227
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
			return Function_558(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_551(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_558(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_548(iParam0, bVar2);
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
						bVar2 = Function_558(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_548(iParam0, bVar2);
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

var Function_548(int iParam0, bool bParam1) //Position: 0x201E5 / 131557
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_152(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_550(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_549(16);
			}
		}
	}
	else if (Function_152(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_550(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_549(256);
			}
		}
	}
	return bParam1;
}

bool Function_549(int iParam0) //Position: 0x20318 / 131864
{
	return 2 | iParam0;
}

int Function_550(int iParam0) //Position: 0x20322 / 131874
{
	return 4 | iParam0;
}

int Function_551(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x2032C / 131884
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
				iParam3 = Function_557(iParam0, iParam1, bParam4);
				if (Function_152(iParam3, 4))
				{
					Function_75(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_549(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_552(iParam0, iParam1, 0, bParam4);
				if (Function_152(iParam3, 4))
				{
					Function_75(&iParam3, 2);
					Function_36(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_549(16);
		}
	}
	return 0;
}

int Function_552(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x203DE / 132062
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_556(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_555(iVar0, 3, 1, bParam3))
			{
				if (!Function_560(iParam0, 8, 1))
				{
					return Function_554(64, 1024, bParam2);
				}
			}
			return Function_553(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_555(iVar0, 2, 1, bParam3))
			{
				if (!Function_560(iParam0, 32, 1))
				{
					return Function_554(64, 1024, bParam2);
				}
			}
			return Function_553(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_555(iVar0, 1, 1, bParam3))
			{
				if (!Function_560(iParam0, 64, 1))
				{
					return Function_554(64, 1024, bParam2);
				}
			}
			return Function_553(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_555(iVar0, 3, 1, bParam3))
			{
				if (!Function_560(iParam0, 128, 1))
				{
					return Function_554(64, 1024, bParam2);
				}
			}
			return Function_553(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_555(iVar0, 1, 1, bParam3))
			{
				if (!Function_560(iParam0, 1024, 1))
				{
					return Function_554(64, 1024, bParam2);
				}
			}
			return Function_553(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_555(iVar0, 1, 1, bParam3))
			{
				if (!Function_560(iParam0, 1024, 1))
				{
					return Function_554(64, 1024, bParam2);
				}
			}
			return Function_553(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_553(int iParam0, int iParam1, bool bParam2) //Position: 0x20598 / 132504
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_554(int iParam0, int iParam1, bool bParam2) //Position: 0x205AD / 132525
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_555(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x205C2 / 132546
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_556(int iParam0) //Position: 0x205DF / 132575
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

int Function_557(var uParam0, int iParam1, bool bParam2) //Position: 0x2064E / 132686
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_556(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_555(iVar0, 3, 1, bParam2))
			{
				if (!Function_560(uParam0, 8, 1))
				{
					return Function_550(64);
				}
			}
			return Function_549(64);
			break;
		
		case 0x00000009:
			if (Function_555(iVar0, 3, 1, bParam2))
			{
				if (!Function_560(uParam0, 8, 1))
				{
					return Function_550(64);
				}
			}
			return Function_549(64);
			break;
		
		case 0x0000006E:
			if (Function_555(iVar0, 2, 1, bParam2))
			{
				if (!Function_560(uParam0, 16, 1))
				{
					return Function_550(64);
				}
			}
			return Function_549(64);
			break;
		
		case 0x0000005B:
			if (Function_555(iVar0, 2, 1, bParam2))
			{
				if (!Function_560(uParam0, 32, 1))
				{
					return Function_550(64);
				}
			}
			return Function_549(64);
			break;
		
		case 0x00000031:
			if (Function_555(iVar0, 1, 1, bParam2))
			{
				if (!Function_560(uParam0, 64, 1))
				{
					return Function_550(64);
				}
			}
			return Function_549(64);
			break;
		
		case 0x00000007:
			if (Function_555(iVar0, 3, 1, bParam2))
			{
				if (!Function_560(uParam0, 128, 1))
				{
					return Function_550(64);
				}
			}
			return Function_549(64);
			break;
		
		case 0x00000008:
			if (Function_555(iVar0, 2, 1, bParam2))
			{
				if (!Function_560(uParam0, 256, 1))
				{
					return Function_550(64);
				}
			}
			return Function_549(64);
			break;
		
		case 0x00000014:
			if (Function_555(iVar0, 1, 1, bParam2))
			{
				if (!Function_560(uParam0, 512, 1))
				{
					return Function_550(64);
				}
			}
			return Function_549(64);
			break;
		
		case 0x00000018:
			if (Function_555(iVar0, 1, 1, bParam2))
			{
				if (!Function_560(uParam0, 512, 1))
				{
					return Function_550(64);
				}
			}
			return Function_549(64);
			break;
		
		case 0x00000057:
			if (Function_555(iVar0, 1, 1, bParam2))
			{
				if (!Function_560(uParam0, 1024, 1))
				{
					return Function_550(64);
				}
			}
			return Function_549(64);
			break;
		
		case 0x00000058:
			if (Function_555(iVar0, 1, 1, bParam2))
			{
				if (!Function_560(uParam0, 1024, 1))
				{
					return Function_550(64);
				}
			}
			return Function_549(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_558(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x20869 / 133225
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
						return Function_557(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_560(iParam0, 2, 1))
					{
						return Function_550(8);
					}
					return Function_549(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_560(iParam0, 4, 1))
					{
						return Function_550(16);
					}
					return Function_549(16);
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
							return Function_552(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_560(iParam0, 2, 1))
						{
							return Function_550(128);
						}
						return Function_549(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_560(iParam0, 4, 1))
						{
							return Function_550(256);
						}
						return Function_549(256);
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
						return Function_552(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_560(iParam0, 2, 1))
					{
						return Function_550(8);
					}
					return Function_549(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_560(iParam0, 4, 1))
					{
						return Function_550(16);
					}
					return Function_549(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_559(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_560(iParam0, 2, 1))
					{
						return Function_550(8);
					}
					return Function_549(8);
				}
				if (!Function_560(iParam0, 4, 1))
				{
					return Function_550(16);
				}
				return Function_549(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_552(iParam0, uParam1, 1, bParam5);
							if (Function_152(iParam4, 4))
							{
								Function_75(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_474(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_549(128);
							}
							if (!Function_560(iParam0, 2, 1))
							{
								return Function_550(8);
							}
							return Function_549(8);
						}
						if (iParam4 == 2)
						{
							if (Function_474(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_549(256);
							}
							if (!Function_560(iParam0, 4, 1))
							{
								return Function_550(16);
							}
							return Function_549(16);
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

int Function_559(int iParam0, var uParam1, bool bParam2) //Position: 0x20B28 / 133928
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_556(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_555(iVar0, 2, 1, bParam2))
			{
				if (!Function_560(iParam0, 16, 1))
				{
					return Function_550(64);
				}
			}
			return Function_549(64);
			break;
		
		case 0x0000005B:
			if (Function_555(iVar0, 2, 1, bParam2))
			{
				if (!Function_560(iParam0, 32, 1))
				{
					return Function_550(64);
				}
			}
			return Function_549(64);
			break;
		
		case 0x00000057:
			if (Function_555(iVar0, 1, 1, bParam2))
			{
				if (!Function_560(iParam0, 1024, 1))
				{
					return Function_550(64);
				}
			}
			return Function_549(64);
			break;
		
		case 0x00000058:
			if (Function_555(iVar0, 1, 1, bParam2))
			{
				if (!Function_560(iParam0, 1024, 1))
				{
					return Function_550(64);
				}
			}
			return Function_549(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_560(int iParam0, bool bParam1, bool bParam2) //Position: 0x20C3C / 134204
{
	if (bParam2)
	{
		if (!Function_152(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_152(iParam0->f_40, bParam1);
}

int Function_561(bool bParam0) //Position: 0x20C64 / 134244
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_53());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_53());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_562(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x20C95 / 134293
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

