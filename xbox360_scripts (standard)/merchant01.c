//Decompiled with MagicRDR v1.0
//Function Count : 549
//Statics Count : 354
//Natives Count : 688
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<409> Local_4 = { 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_108 = 0;
	fLocal_184 = 1.0f;
	iLocal_188 = 0;
	iLocal_192 = 0;
	iLocal_193 = 0;
	iLocal_222 = 0;
	iLocal_247 = 0;
	iLocal_345 = 0;
	iLocal_346 = 0;
	Local_111 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_150 = 99;
	bLocal_151 = 6;
	iLocal_142 = 1000;
	while (Function_268())
	{
		Function_220();
		WAIT(false);
	}
	Function_1();
	LOG_ERROR("Should never reach ENDSCRIPT");
	return;
}

void Function_1() //Position: 0x7B / 123
{
	vector3 vVar0;
	bool bVar3;
	
	if (IS_ACTOR_VALID(bLocal_156))
	{
		Function_219(bLocal_156, (*&Local_4 + 308)[8], 1, 1, 1);
		TASK_STAND_STILL(bLocal_156, -1.0f, 0, 0);
	}
	UI_EXIT("HealthMeter");
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	STREAMING_UNLOAD_BOUNDS();
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_154);
	MEMORY_ALLOW_SHOOTING(bLocal_154, true);
	Function_217(&Local_4 + 112, 0, 0, 0);
	Function_217(&Local_4 + 136, 0, 0, 0);
	Function_217(&Local_4 + 160, 0, 0, 0);
	Function_216(bLocal_110);
	Function_216(Local_4);
	Function_215();
	Function_188(bLocal_197, 1, 0, 1, 1, 1, 1, 1);
	Function_184(&bLocal_128);
	Function_184(&bLocal_118);
	Function_182();
	RELEASE_LAYOUT_REF(bLocal_110);
	Function_180(Global_34207);
	if (bLocal_196)
	{
		Function_177(2, 0, 1, 0, 1);
		Function_168(bLocal_154, 0, 0, 2);
		RESET_ANIM_SET_FOR_ACTOR(bLocal_154, 0);
		vVar0 = { -2124,754f, 16,886f, 2595,035f };
		bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/merchant_lay_bed", &vVar0, 4.0f, 0);
		GRINGO_ALLOW_ACTIVATION(bVar3, true);
		SNAP_ACTOR_TO_GRINGO(bLocal_154, GET_OBJECT_FROM_GRINGO(bVar3), "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(bLocal_154, bVar3, "UseCase1", 4294967295, 1);
		DECOR_SET_BOOL(bLocal_154, "bShopDontKill", true);
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar3), "merchant01finished", true);
		Function_24(Local_111, 1, 1, 1, 0);
	}
	else if (bLocal_197)
	{
		Function_177(2, 1, 0, 1, 1);
		Function_20(Local_111);
	}
	else
	{
		Function_177(2, 1, 0, 1, 1);
		Function_2(Local_111);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x227 / 551
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x248 / 584
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x263 / 611
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x284 / 644
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x29A / 666
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

void Function_7(int iParam0) //Position: 0x336 / 822
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x357 / 855
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

void Function_9() //Position: 0x39D / 925
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x3B6 / 950
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x409 / 1033
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

struct<16> Function_12(int iParam0) //Position: 0x52D / 1325
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x552 / 1362
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x572 / 1394
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x589 / 1417
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x5A4 / 1444
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7EB / 2027
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x814 / 2068
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

bool Function_19(int iParam0) //Position: 0x838 / 2104
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x84D / 2125
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x86B / 2155
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

struct<16> Function_22(int iParam0) //Position: 0x911 / 2321
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x93B / 2363
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xB91 / 2961
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

void Function_25() //Position: 0xC7E / 3198
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

bool Function_26(int iParam0, bool bParam1) //Position: 0xCAE / 3246
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

int Function_27(int iParam0) //Position: 0xCEB / 3307
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xD05 / 3333
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xD1B / 3355
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1012 / 4114
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

void Function_31(char* cParam0, int iParam1) //Position: 0x107E / 4222
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x10B5 / 4277
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

bool Function_33(var uParam0, int iParam1) //Position: 0x112D / 4397
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x1140 / 4416
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

int Function_35(int iParam0) //Position: 0x11E1 / 4577
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x121E / 4638
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1231 / 4657
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

void Function_38(int iParam0, int iParam1) //Position: 0x1443 / 5187
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x147D / 5245
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

bool Function_40() //Position: 0x14BF / 5311
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x14C8 / 5320
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

void Function_42() //Position: 0x1519 / 5401
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

void Function_43() //Position: 0x154C / 5452
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

void Function_44() //Position: 0x1652 / 5714
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

void Function_45() //Position: 0x1685 / 5765
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

void Function_46() //Position: 0x1813 / 6163
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

void Function_47() //Position: 0x19C7 / 6599
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x19D5 / 6613
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

var Function_49() //Position: 0x1BC6 / 7110
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1BDB / 7131
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C76 / 7286
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1F11 / 7953
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

bool Function_53() //Position: 0x253E / 9534
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x2546 / 9542
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2557 / 9559
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x264C / 9804
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2665 / 9829
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x26CA / 9930
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x26DC / 9948
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x26EE / 9966
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

int Function_61(int iParam0) //Position: 0x281E / 10270
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x282D / 10285
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x2866 / 10342
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x28A3 / 10403
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A3D / 10813
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

int Function_66(bool bParam0) //Position: 0x2C57 / 11351
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2C98 / 11416
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

struct<8> Function_68() //Position: 0x2D21 / 11553
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

struct<8> Function_69() //Position: 0x2DB8 / 11704
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

void Function_70() //Position: 0x2E37 / 11831
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2E5D / 11869
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

void Function_72() //Position: 0x3067 / 12391
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

bool Function_73(vector3 vParam0) //Position: 0x3108 / 12552
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3120 / 12576
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

vector3 Function_75() //Position: 0x3207 / 12807
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x3210 / 12816
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x321F / 12831
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3235 / 12853
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x32FC / 13052
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x3319 / 13081
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

bool Function_81(int iParam0) //Position: 0x37F5 / 14325
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x380B / 14347
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x382A / 14378
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3844 / 14404
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x38AB / 14507
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

void Function_86() //Position: 0x3ACB / 15051
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3B4B / 15179
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3E9D / 16029
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

int Function_89(int iParam0) //Position: 0x3F20 / 16160
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3F3A / 16186
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3F68 / 16232
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x4205 / 16901
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

void Function_93(int iParam0, int iParam1) //Position: 0x43C8 / 17352
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x4626 / 17958
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

int Function_95() //Position: 0x47AB / 18347
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

void Function_96() //Position: 0x484A / 18506
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

void Function_97(int iParam0) //Position: 0x48F9 / 18681
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

var Function_98(int iParam0) //Position: 0x4957 / 18775
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

int Function_99(int iParam0, bool bParam1) //Position: 0x49E6 / 18918
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

var Function_100(int iParam0, int iParam1) //Position: 0x4B83 / 19331
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

void Function_101() //Position: 0x4BC4 / 19396
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4BDA / 19418
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4C1A / 19482
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4C5A / 19546
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4C69 / 19561
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

int Function_106(int iParam0) //Position: 0x4E31 / 20017
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

var Function_107() //Position: 0x4EC6 / 20166
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4EEB / 20203
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x53A6 / 21414
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

var Function_110(int iParam0) //Position: 0x56BB / 22203
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x575E / 22366
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

int Function_112(int iParam0, bool bParam1) //Position: 0x5959 / 22873
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5AF5 / 23285
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5BC0 / 23488
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

void Function_115(int iParam0) //Position: 0x64B0 / 25776
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x661F / 26143
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x6725 / 26405
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x6752 / 26450
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

var Function_119(vector3 vParam0) //Position: 0x67A9 / 26537
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x67F7 / 26615
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x684B / 26699
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

void Function_122() //Position: 0x69E9 / 27113
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x69EF / 27119
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

void Function_124(bool bParam0, int iParam1) //Position: 0x6A93 / 27283
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x6AE8 / 27368
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6AFE / 27390
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6B4F / 27471
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

void Function_128(var uParam0, int iParam1) //Position: 0x6B7C / 27516
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6B8B / 27531
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6BA2 / 27554
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6BB1 / 27569
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

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6CFB / 27899
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

bool Function_133() //Position: 0x6D46 / 27974
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6D73 / 28019
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

int Function_135(int iParam0) //Position: 0x6F23 / 28451
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6F7A / 28538
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

var Function_137(int iParam0) //Position: 0x6F9F / 28575
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

bool Function_138(bool bParam0, int iParam1) //Position: 0x6FF5 / 28661
{
	int iVar0;
	
	if (!Function_125(bParam0))
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

int Function_139(bool bParam0) //Position: 0x7054 / 28756
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x7060 / 28768
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x707C / 28796
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

int Function_142(int iParam0, int iParam1) //Position: 0x70CE / 28878
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

int Function_143(int iParam0, int iParam1) //Position: 0x7141 / 28993
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x719D / 29085
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

int Function_145(int iParam0, int iParam1) //Position: 0x720E / 29198
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x7268 / 29288
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x7514 / 29972
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

void Function_148(int iParam0, bool bParam1) //Position: 0x77A3 / 30627
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

void Function_149() //Position: 0x7802 / 30722
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

var Function_150(int iParam0, int iParam1) //Position: 0x787D / 30845
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

int Function_151(int iParam0) //Position: 0x847B / 33915
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x8490 / 33936
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x84DF / 34015
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x84EC / 34028
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x853D / 34109
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

bool Function_156(int iParam0, int iParam1) //Position: 0x85AB / 34219
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x85BE / 34238
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

var Function_158(int iParam0) //Position: 0x86BD / 34493
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

bool Function_159(var uParam0, int iParam1) //Position: 0x8715 / 34581
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x8731 / 34609
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

bool Function_161(int iParam0) //Position: 0x8788 / 34696
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x879A / 34714
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

void Function_163(int iParam0) //Position: 0x87CE / 34766
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8835 / 34869
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

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8912 / 35090
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

void Function_166() //Position: 0x8A8B / 35467
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x8A97 / 35479
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

int Function_168(bool bParam0, int iParam1, var uParam2, var uParam3) //Position: 0x8ADD / 35549
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
					Function_169(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_169(bParam0, iParam1, uParam2, uParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_169(bool bParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x8BBD / 35773
{
	char* cVar0[32];
	
	Function_176();
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
	if (Function_175(bParam0) == 1)
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
	Function_174(bParam0, 0);
	Function_173(bParam0, iParam1);
	Function_172(bParam0, uParam2);
	Function_171(bParam0, uParam3);
	if (Function_170(bParam0) != 5)
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

int Function_170(bool bParam0) //Position: 0x8E0B / 36363
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_171(bool bParam0, bool bParam1) //Position: 0x8E2E / 36398
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_172(bool bParam0, bool bParam1) //Position: 0x8E51 / 36433
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_173(bool bParam0, bool bParam1) //Position: 0x8E75 / 36469
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_174(bool bParam0, bool bParam1) //Position: 0x8E9B / 36507
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_175(bool bParam0) //Position: 0x8EBE / 36542
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_176() //Position: 0x8EDC / 36572
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

int Function_177(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8F26 / 36646
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
		Function_179(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_178(StackVal);
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

void Function_178(bool bParam0) //Position: 0x9244 / 37444
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

void Function_179(bool bParam0) //Position: 0x9270 / 37488
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

int Function_180(bool bParam0) //Position: 0x9285 / 37509
{
	if (!Function_181(bParam0, "TRAIN_RELEASE"))
	{
		return 0;
	}
	if (bParam0 == Global_34207)
	{
		(&Global_34208 + 12)->f_348 = 0;
	}
	else if (bParam0 == Global_34206)
	{
		(&Global_34208 + 724)->f_348 = 0;
	}
	TRAIN_SET_PARTICLE_EFFECTS_ENABLED(bParam0, 4294967295, 1);
	return 1;
}

bool Function_181(int iParam0, int iParam1) //Position: 0x92D4 / 37588
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_182() //Position: 0x92E3 / 37603
{
	Function_183();
	return;
}

void Function_183() //Position: 0x92EC / 37612
{
	Function_184(&Local_4 + 4);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_184(int iParam0) //Position: 0x92FE / 37630
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_185(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_185(var uParam0, int iParam1) //Position: 0x9324 / 37668
{
	if (Function_187(uParam0[iParam13], 4))
	{
		if (Function_187(uParam0[iParam13], 1))
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
			Function_186(uParam0[iParam13], 1);
			Function_186(uParam0[iParam13], 2);
			Function_186(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_186(var uParam0, int iParam1) //Position: 0x9452 / 37970
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_187(var uParam0, bool bParam1) //Position: 0x946C / 37996
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_188(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9489 / 38025
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_214());
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
	Function_213();
	CLEAR_PRINTED_OBJECTIVE();
	Function_212();
	Function_210(0);
	Function_209();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_208();
	Function_207();
	Function_213();
	ENABLE_JOURNAL_REPLAY(1);
	Function_206(1);
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
		Function_205(Global_34573);
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
	Function_204(Global_28178);
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
	Function_203(1178687);
	Function_201(33039);
	Function_200(0x218003f);
	Function_199(4194560);
	Function_198();
	Function_197();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_194(0, 1, 1);
	}
	else
	{
		Function_194(0, 1, 1);
	}
	Function_193();
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
	Function_189();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_189() //Position: 0x967A / 38522
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
		if (Function_192() > 3)
		{
			bVar0 *= 2;
		}
		Function_190(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_190(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x96D0 / 38608
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_191((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_191(bool bParam0) //Position: 0x9716 / 38678
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_192() //Position: 0x973B / 38715
{
	return Global_12976.f_156;
}

void Function_193() //Position: 0x9746 / 38726
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

void Function_194(int iParam0, bool bParam1, int iParam2) //Position: 0x9770 / 38768
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
			Function_195(Global_29006);
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

void Function_195(int iParam0) //Position: 0x987B / 39035
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_196())
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

bool Function_196() //Position: 0x98FA / 39162
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

void Function_197() //Position: 0x9957 / 39255
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

void Function_198() //Position: 0x997D / 39293
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

void Function_199(int iParam0) //Position: 0x99A3 / 39331
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_200(int iParam0) //Position: 0x99C0 / 39360
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_201(int iParam0) //Position: 0x99D3 / 39379
{
	Function_202(&Global_28842, iParam0);
	return;
}

void Function_202(var uParam0, int iParam1) //Position: 0x99E1 / 39393
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_203(bool bParam0) //Position: 0x99FC / 39420
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_204(int iParam0) //Position: 0x9A29 / 39465
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

void Function_205(bool bParam0) //Position: 0x9AF0 / 39664
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

void Function_206(bool bParam0) //Position: 0x9B6C / 39788
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

void Function_207() //Position: 0x9BE0 / 39904
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

void Function_208() //Position: 0x9C21 / 39969
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

void Function_209() //Position: 0x9C62 / 40034
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_210(int iParam0) //Position: 0x9C76 / 40054
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_211())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_211() //Position: 0x9CB2 / 40114
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

void Function_212() //Position: 0x9CD7 / 40151
{
	Global_8722 = 0.0f;
	return;
}

void Function_213() //Position: 0x9CE1 / 40161
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

int Function_214() //Position: 0x9D0C / 40204
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_215() //Position: 0x9D26 / 40230
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_216(bool bParam0) //Position: 0x9D2F / 40239
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

void Function_217(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9D87 / 40327
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
					if (!Function_218(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_218(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
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
					if (!Function_218(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_218(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
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
					if (!Function_218(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_218(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x9F85 / 40837
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_219(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x9F9F / 40863
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

void Function_220() //Position: 0xA0A6 / 41126
{
	var uVar0[12];
	int iVar13;
	
	if (!Function_267())
	{
		return;
	}
	uVar0[0] = "Pass";
	uVar0[1] = "Fail";
	uVar0[2] = "Cancel";
	uVar0[3] = "Final Cutscene";
	uVar0[4] = "Set Nigel Healthy";
	uVar0[5] = "Set Nigel Coughing";
	uVar0[6] = "Set Nigel Dying";
	uVar0[7] = "Set Nigel Saved";
	uVar0[8] = "Freeze Nigel State";
	uVar0[9] = "Unfreeze Nigel State";
	uVar0[10] = "Toggle HP to Log";
	uVar0[11] = "Teleport wagon to spot";
	iVar13 = Function_253(&uLocal_135, &uVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
	if (Function_252(&iVar13, &iLocal_150, &bLocal_151, &iLocal_142))
	{
		Function_245();
		Function_244();
	}
	switch (iVar13)
	{
		case 0x00000000:
			Function_245();
			Function_244();
			Function_243(&bLocal_196, 8);
			break;
		
		case 0x00000001:
			Function_245();
			Function_244();
			Function_238(iLocal_150);
			Function_234(StackVal, StackVal, 5, &bLocal_197, &iLocal_150, Function_241(iLocal_150), Function_238(iLocal_150), 0);
			break;
		
		case 0x00000002:
			Function_245();
			Function_244();
			Function_230(4);
			Function_1();
			break;
		
		case 0x00000003:
			Function_245();
			Function_244();
			Function_229(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
			Function_228();
			iLocal_142 = 1000;
			iLocal_150 = 101;
			Function_225(0);
			break;
		
		case 0x00000004:
			Function_245();
			SET_ACTION_NODE_FOR_ACTOR(bLocal_154, "sit_wounded/not_coughing");
			fLocal_186 = (70.0f + 7.0f);
			iLocal_153 = 0;
			break;
		
		case 0x00000005:
			Function_245();
			SET_ACTION_NODE_FOR_ACTOR(bLocal_154, "sit_wounded/coughing");
			fLocal_186 = 7.0f;
			iLocal_153 = 1;
			break;
		
		case 0x00000006:
			Function_245();
			SET_ACTION_NODE_FOR_ACTOR(bLocal_154, "sit_wounded/puke");
			SET_ACTOR_IS_COMPANION(bLocal_154, 0);
			SET_OBJECT_COLLIDE_WITH_MOVABLES(bLocal_154, 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_154, bLocal_155, false);
			Function_224();
			fLocal_186 = 0.0f;
			iLocal_153 = 2;
			break;
		
		case 0x00000007:
			Function_245();
			SET_ANIM_SET_FOR_ACTOR(Global_34573, "sit_wounded", 0);
			SET_ACTION_NODE_FOR_ACTOR(Global_34573, "sit_wounded/player_save");
			SET_ACTION_NODE_FOR_ACTOR(bLocal_154, "sit_wounded/merchant_save");
			Function_221();
			fLocal_186 = 0.0f;
			iLocal_153 = 2;
			break;
		
		case 0x00000008:
			Function_245();
			iLocal_203 = 1;
			break;
		
		case 0x00000009:
			Function_245();
			iLocal_203 = 0;
			break;
		
		case 0x0000000A:
			Function_245();
			if (iLocal_217)
			{
				iLocal_217 = 0;
			}
			else
			{
				iLocal_217 = 1;
			}
			break;
		
		case 0x0000000B:
			Function_245();
			Function_219(bLocal_155, (*&Local_4 + 308)[19], 1, 1, 1);
			break;
	}
	return;
}

void Function_221() //Position: 0xA3E5 / 41957
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_jonCatchesWest", "Merchant01_jonCatchesWest", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_222(int iParam0) //Position: 0xA43E / 42046
{
	Function_223(0, Global_34573, iParam0, 0);
	Function_223(1, bLocal_154, iParam0, 0);
	return;
}

void Function_223(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xA457 / 42071
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_224() //Position: 0xA47C / 42108
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_DickensHealth_slumped", "Merchant01_DickensHealth_slumped", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_225(int iParam0) //Position: 0xA4E3 / 42211
{
	char* cVar0[32];
	
	Function_226(&iLocal_159);
	bLocal_151 = iParam0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_150)
	{
		case 0x00000000:
			stradd(&cVar0, "01", 32);
			break;
		
		case 0x00000065:
			stradd(&cVar0, "FINAL", 32);
			break;
		
		default:
			LOG_ERROR("GoToGoal: Unknown stage ID!");
			break;
	}
	stradd(&cVar0, " - ", 32);
	switch (iParam0)
	{
		case 0x00000000:
			stradd(&cVar0, "INITIALIZE", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "nSTREAMING", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "POST STREAMING", 32);
			break;
		
		case 0x00000003:
			stradd(&cVar0, "CUTSCENE", 32);
			break;
		
		case 0x00000069:
			stradd(&cVar0, "FADE OUT", 32);
			break;
		
		case 0x0000006A:
			stradd(&cVar0, "COMPLETE", 32);
			break;
		
		default:
			if (iParam0 <= 6 && iParam0 >= 104)
			{
				stradd(&cVar0, "GOAL ", 32);
				straddi(&cVar0, (iParam0 + 1 - 6), 32);
			}
			else
			{
				LOG_ERROR("GoToGoal: Unknown goal ID!");
			}
			break;
	}
	return;
}

void Function_226(int iParam0) //Position: 0xA644 / 42564
{
	Function_227(iParam0, 0.0f);
	return;
}

void Function_227(int iParam0, float fParam1) //Position: 0xA650 / 42576
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_228() //Position: 0xA671 / 42609
{
	return;
}

void Function_229(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xA677 / 42615
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

void Function_230(int iParam0) //Position: 0xA6A0 / 42656
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_233("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_232(2) || Function_232(8)) || Function_232(9)) || Function_232(10))
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
		Function_233("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_233("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_233("");
	}
	else if (iParam0 == 8)
	{
		Function_231();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_231();
	}
	return;
}

void Function_231() //Position: 0xA797 / 42903
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_232(int iParam0) //Position: 0xA7A3 / 42915
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

void Function_233(bool bParam0) //Position: 0xA7D9 / 42969
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_234(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA843 / 43075
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_235(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_230(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_235(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA880 / 43136
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_237(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_236(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_236(int iParam0) //Position: 0xA903 / 43267
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

var Function_237(vector3 vParam0, bool bParam3) //Position: 0xADB1 / 44465
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

vector3 Function_238(int iParam0) //Position: 0xAE1C / 44572
{
	Function_239(iParam0 + 1);
	return StackVal, StackVal, Function_239(iParam0 + 1);
}

vector3 Function_239(int iParam0) //Position: 0xAE29 / 44585
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_240((*&Local_4 + 308)[0]);
			return StackVal, StackVal, Function_240((*&Local_4 + 308)[0]);
			break;
		
		default:
			Function_240((*&Local_4 + 308)[1]);
			return StackVal, StackVal, Function_240((*&Local_4 + 308)[1]);
			break;
	}
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	Function_240((*&Local_4 + 308)[0]);
	return StackVal, StackVal, Function_240((*&Local_4 + 308)[0]);
}

vector3 Function_240(bool bParam0) //Position: 0xAEB4 / 44724
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

int Function_241(int iParam0) //Position: 0xAEDB / 44763
{
	return Function_242(iParam0 + 1);
}

int Function_242(int iParam0) //Position: 0xAEE8 / 44776
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 308)[0]);
		
		default:
	}
	return GET_OBJECT_HEADING((*&Local_4 + 308)[1]);
	LOG_ERROR("GetPlayerPosByStage: Invalid stage, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_4 + 308)[0]);
}

void Function_243(bool bParam0, int iParam1) //Position: 0xAF6D / 44909
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230(iParam1);
	*bParam0 = 1;
	return;
}

void Function_244() //Position: 0xAF90 / 44944
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_245() //Position: 0xAFA5 / 44965
{
	Function_247();
	Function_246(10, 3);
	return;
}

void Function_246(int iParam0, int iParam1) //Position: 0xAFB4 / 44980
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

void Function_247() //Position: 0xB0EB / 45291
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_251())
	{
		Function_250(10, 3);
	}
	else
	{
		Function_248();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_248() //Position: 0xB136 / 45366
{
	Function_249(25, 2);
	return;
}

void Function_249(int iParam0, int iParam1) //Position: 0xB142 / 45378
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

void Function_250(int iParam0, int iParam1) //Position: 0xB340 / 45888
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

bool Function_251() //Position: 0xB477 / 46199
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

bool Function_252(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB4DE / 46302
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_245();
			Function_244();
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
		Function_233("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_253(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB584 / 46468
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_266(&Var15, &Var0);
	uVar20 = Function_265(*uParam1, &Var15);
	Function_264(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_263(uParam0, uVar20);
	Function_261(StackVal, uParam0, Var15.f_12);
	Function_259(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_258(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_255(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_254(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_254(int iParam0, int iParam1, int iParam2) //Position: 0xB64B / 46667
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

bool Function_255(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB6A7 / 46759
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
				Function_257(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_257(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_254(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_256(bParam1->f_32);
	}
	else
	{
		Function_256(bParam1->f_32);
	}
	return 0;
}

void Function_256(bool bParam0) //Position: 0xB82D / 47149
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

void Function_257(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB867 / 47207
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

var Function_258(int iParam0, var uParam1, int iParam2) //Position: 0xB915 / 47381
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_259(var uParam0, int iParam1, int iParam2) //Position: 0xB939 / 47417
{
	switch (Function_260())
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

int Function_260() //Position: 0xB9D5 / 47573
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

void Function_261(var uParam0, int iParam1, int iParam2) //Position: 0xBA11 / 47633
{
	switch (Function_262(uParam0))
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

int Function_262(bool bParam0) //Position: 0xBAA9 / 47785
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

var Function_263(var uParam0, int iParam1) //Position: 0xBBF4 / 48116
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

void Function_264(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBD43 / 48451
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

var Function_265(int iParam0, int iParam1) //Position: 0xBDD6 / 48598
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_266(var uParam0, var uParam1) //Position: 0xBDF0 / 48624
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

bool Function_267() //Position: 0xBE3E / 48702
{
	return Global_30920;
}

bool Function_268() //Position: 0xBE47 / 48711
{
	if (IS_EXITFLAG_SET())
	{
		Function_238(iLocal_150);
		Function_234(StackVal, StackVal, 4, &bLocal_197, &iLocal_150, Function_241(iLocal_150), Function_238(iLocal_150), 0);
		return 0;
	}
	Function_548(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_111, iLocal_150, bLocal_151, &bLocal_198, &bLocal_196, &bLocal_197);
	if (iLocal_150 == 99 && iLocal_150 == 100)
	{
		if (Function_547(bLocal_151))
		{
			if (IS_ACTOR_DEAD(Global_34573))
			{
				Function_238(iLocal_150);
				Function_234(StackVal, StackVal, 1, &bLocal_197, &iLocal_150, Function_241(iLocal_150), Function_238(iLocal_150), 0);
				return 1;
			}
			if (Function_546(2048))
			{
				Function_238(iLocal_150);
				Function_234(StackVal, StackVal, 3, &bLocal_197, &iLocal_150, Function_241(iLocal_150), Function_238(iLocal_150), 0);
				return 1;
			}
			if (Global_3403 || Global_3404)
			{
				Function_238(iLocal_150);
				Function_234(StackVal, StackVal, 2, &bLocal_197, &iLocal_150, Function_241(iLocal_150), Function_238(iLocal_150), 0);
			}
			if (IS_ACTOR_DEAD(bLocal_154))
			{
				if (bLocal_202)
				{
					Function_233("Merchant_outOfBounds");
					Function_238(iLocal_150);
					Function_234(StackVal, StackVal, 5, &bLocal_197, &iLocal_150, Function_241(iLocal_150), Function_238(iLocal_150), 0);
					return 1;
				}
				Function_233("Merchant_dead");
				Function_238(iLocal_150);
				Function_234(StackVal, StackVal, 5, &bLocal_197, &iLocal_150, Function_241(iLocal_150), Function_238(iLocal_150), 0);
				return 1;
			}
			if (IS_ACTOR_VALID(bLocal_155) && iLocal_150 > 101)
			{
				if (!Function_545(bLocal_155, 1, 0, 4294967295))
				{
					Function_544();
					Function_233("Wagon_dead");
					Function_238(iLocal_150);
					Function_234(StackVal, StackVal, 5, &bLocal_197, &iLocal_150, Function_241(iLocal_150), Function_238(iLocal_150), 0);
					return 1;
				}
			}
			if (Function_525(&Local_299, &uLocal_259, &uLocal_334, cLocal_149, bLocal_258))
			{
				if (Function_523(&uLocal_334))
				{
					Function_238(iLocal_150);
					Function_234(StackVal, StackVal, 5, &bLocal_197, &iLocal_150, Function_241(iLocal_150), Function_238(iLocal_150), 0);
					return 1;
				}
			}
			Function_522();
		}
	}
	switch (iLocal_150)
	{
		case 0x00000063:
			Function_501();
			break;
		
		case 0x00000000:
			Function_359();
			break;
		
		case 0x00000065:
			Function_272();
			break;
		
		case 0x00000064:
			if (Function_271(&bLocal_197))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_270(&iLocal_150, &bLocal_151, &iLocal_142))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_196)
	{
		Function_243(&bLocal_196, 8);
		Function_1();
		return 0;
	}
	if (bLocal_197 && iLocal_150 == 100)
	{
		Function_238(iLocal_150);
		Function_234(StackVal, StackVal, 5, &bLocal_197, &iLocal_150, Function_241(iLocal_150), Function_238(iLocal_150), 0);
	}
	if (bLocal_198)
	{
		Function_269(&bLocal_198, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_269(var uParam0, int iParam1) //Position: 0xC05E / 49246
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230(iParam1);
	*uParam0 = 1;
	return;
}

bool Function_270(var uParam0, var uParam1, int iParam2) //Position: 0xC081 / 49281
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

bool Function_271(int iParam0) //Position: 0xC0C1 / 49345
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_272() //Position: 0xC0D4 / 49364
{
	switch (bLocal_151)
	{
		case 0x00000000:
			Function_355(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(6);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			iLocal_152 = Global_30628[0];
			if (!Function_354(iLocal_152))
			{
				Function_353(&Local_111);
			}
			Function_351();
			Function_225(1);
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_354(iLocal_152) || iLocal_152 != 4294967295))
			{
				Function_225(3);
			}
			break;
		
		case 0x00000003:
			if (iLocal_193 == 0)
			{
				if (Function_281("$/cutscene/MERCHANT01_CS03/MERCHANT01_CS03", &iLocal_142, &Local_111, &iLocal_150, 67070, 66982, 66889, 66743, 66447, 54418, 0, 1, 1, 1, 2, 0, 1))
				{
					iLocal_193++;
				}
			}
			else if (iLocal_193 == 1)
			{
				if (Function_281("$/cutscene/MERCHANT01_CS03_B/MERCHANT01_CS03_B", &iLocal_142, &Local_111, &iLocal_150, 49701, 66982, 66889, 66743, 66447, 54418, 0, 1, 1, 2, 2, 0, 1))
				{
					Function_225(106);
				}
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_196 = true;
			}
			break;
	}
	return;
}

int Function_273() //Position: 0xC225 / 49701
{
	switch (iLocal_150)
	{
		case 0x00000065:
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 164)[2]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 164)[2]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 164)[2], 15);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 164)[2]);
			Function_277(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_240((*&Local_4 + 308)[3]);
			Function_275(StackVal, StackVal, bLocal_110, Function_240((*&Local_4 + 308)[3]), &Local_4 + 164[2], 0, 0, 0, 0, 1, 1);
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			TELEPORT_ACTOR_WITH_HEADING(bLocal_155, -2130,073f, 16,14567f, 2606,818f, 82,54f, 1, true, 0);
			Function_274();
			STOP_VEHICLE(bLocal_155);
			return 1;
			break;
	}
	return 0;
}

void Function_274() //Position: 0xC2BD / 49853
{
	SET_ACTOR_SPEED(bLocal_155, 0.0f);
	ACTOR_RESET_ANIMS(bLocal_155, 1);
	RESET_ACTOR_GAITS(bLocal_155, 0);
	AI_ACTOR_FORCE_SPEED(bLocal_155, 5);
	if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(false, bLocal_155)))
	{
		SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, bLocal_155), 0.0f);
		ACTOR_RESET_ANIMS(GET_DRAFT_ACTOR(false, bLocal_155), 1);
		RESET_ACTOR_GAITS(GET_DRAFT_ACTOR(false, bLocal_155), 0);
		AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(false, bLocal_155), 5);
	}
	if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(true, bLocal_155)))
	{
		SET_ACTOR_SPEED(GET_DRAFT_ACTOR(true, bLocal_155), 0.0f);
		ACTOR_RESET_ANIMS(GET_DRAFT_ACTOR(true, bLocal_155), 1);
		RESET_ACTOR_GAITS(GET_DRAFT_ACTOR(true, bLocal_155), 0);
		AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(true, bLocal_155), 5);
	}
	return;
}

void Function_275(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0xC346 / 49990
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
				Function_276(bVar1, bParam0);
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

void Function_276(bool bParam0, bool bParam1) //Position: 0xC5B4 / 50612
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

void Function_277(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xC629 / 50729
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
	Function_244();
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
				Function_280(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_280(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_279()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_279()));
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
	if (Function_278(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_278(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

bool Function_278(int iParam0) //Position: 0xC8D2 / 51410
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_279() //Position: 0xC8EE / 51438
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

vector3 Function_280(bool bParam0) //Position: 0xC96D / 51565
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_281(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xC97E / 51582
{
	if (!bParam15)
	{
		Function_294(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_293(iParam2) || iParam2->f_24 < 1))
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
				Function_226(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_292())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_291(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_226(iParam1 + 4);
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
					Function_291(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_288(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_288(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_286(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_291(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_226(iParam1 + 4);
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
						Function_285(1.0f);
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
						Function_283();
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
					Function_282(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_293(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_282(bool bParam0) //Position: 0xCF92 / 53138
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

void Function_283() //Position: 0xD037 / 53303
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_284();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_284() //Position: 0xD07C / 53372
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_285(bool bParam0) //Position: 0xD08E / 53390
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

void Function_286(bool bParam0, bool bParam1) //Position: 0xD0AB / 53419
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
			if ((bVar3 == Global_34573 && !Function_287(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_287(bool bParam0) //Position: 0xD12B / 53547
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

float Function_288(int iParam0) //Position: 0xD15A / 53594
{
	if (Function_290(iParam0))
	{
		if (Function_289(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_289(int iParam0) //Position: 0xD222 / 53794
{
	return Function_153(*iParam0, 2);
}

bool Function_290(int iParam0) //Position: 0xD22F / 53807
{
	return Function_153(*iParam0, 1);
}

int Function_291(bool bParam0) //Position: 0xD23C / 53820
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

bool Function_292() //Position: 0xD2F4 / 54004
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

bool Function_293(int iParam0) //Position: 0xD32E / 54062
{
	return iParam0->f_20;
}

void Function_294(var uParam0, int iParam1) //Position: 0xD338 / 54072
{
	Function_295(uParam0, iParam1, 0);
	return;
}

void Function_295(var uParam0, bool bParam1, bool bParam2) //Position: 0xD346 / 54086
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
			Function_229(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_229(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

int Function_296() //Position: 0xD492 / 54418
{
	switch (iLocal_150)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
				if (Function_326())
				{
					Function_324();
					Function_297();
				}
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000065:
			TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2125,253f, 16,912f, 2600,361f, 75.0f, 1, true, 1);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_297() //Position: 0xD503 / 54531
{
	if (!iLocal_199)
	{
		AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
		Function_319();
		Function_299();
		ACTOR_SET_NEXT_WEAPON(Global_34573, 8);
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		iLocal_187 = 4294967295;
		iLocal_221 = 0;
		iLocal_220 = 0;
		fLocal_186 = 100.0f;
		iLocal_153 = 0;
		bLocal_239 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Squad_Layout"));
		SQUAD_JOIN(Global_34573, bLocal_239);
		SQUAD_JOIN(bLocal_154, bLocal_239);
		SET_ACTOR_IN_VEHICLE(Global_34573, bLocal_155, false);
		vLocal_223 = { -1698,88f, 29,11f, 3067,71f };
		STREAMING_LOAD_BOUNDS_EXT(0, vLocal_223, 10.0f, 0);
		TELEPORT_ACTOR_WITH_HEADING(bLocal_155, vLocal_223, 83,85f, 1, true, 0);
		Function_226(&iLocal_159);
		Function_226(&iLocal_162);
		Function_298(&iLocal_168);
		CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_155);
		ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_343, true);
		ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_344, true);
		Function_274();
		STOP_VEHICLE(bLocal_155);
		iLocal_199 = 1;
	}
	return;
}

void Function_298(int iParam0) //Position: 0xD5DA / 54746
{
	if (!Function_290(iParam0))
	{
		Function_227(iParam0, 0.0f);
	}
	return;
}

void Function_299() //Position: 0xD5EF / 54767
{
	bool bVar0;
	
	if (!iLocal_216)
	{
		if (!IS_ACTOR_VALID(bLocal_155))
		{
			Function_319();
			Function_318(bLocal_155, 1);
		}
		Function_317(bLocal_155);
		bLocal_158 = CREATE_VOLUME_IN_LAYOUT(bLocal_110, "wagonEx", 2, Function_317(bLocal_155), 0.0f, 90.0f, 0.0f, 10.0f, 10.0f, 20.0f);
		ATTACH_OBJECTS_CONTINUOUS(bLocal_158, bLocal_155, 4294967295);
		TASK_STAND_STILL(bLocal_155, -1.0f, 1, 0);
		SET_ACTOR_SPEED(bLocal_155, 0.0f);
		RESET_ACTOR_GAITS(bLocal_155, 1);
		ADD_BLIP_FOR_ACTOR(bLocal_155, 325, 0.0f, 2, 0);
		if (Function_318(bLocal_154, 1))
		{
			RESET_ACTOR_GAITS(bLocal_154, 0);
			SET_CRIPPLE_ENABLE(bLocal_154, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(bLocal_154, false);
			SET_ACTOR_FACTION(bLocal_154, 20);
			TASK_PRIORITY_SET(bLocal_154, true);
			TASK_STAND_STILL(bLocal_154, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_154, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_154, 50.0f);
			Function_316(bLocal_154);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_154);
			MEMORY_ALLOW_SHOOTING(bLocal_154, false);
			DEEQUIP_ACCESSORY(bLocal_154, 0);
			SET_ACTOR_IN_VEHICLE(bLocal_154, bLocal_155, true);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_154, 0);
			SET_ANIM_SET_FOR_ACTOR(bLocal_154, "sit_wounded", 0);
			SET_REACT_NODE_FOR_ACTOR(Global_34573, "sit_wounded/Reaction/");
			SET_ACTION_NODE_FOR_ACTOR(bLocal_154, "sit_wounded/not_coughing");
			Function_314(4, 0, 1);
			Function_307(&(Local_299[117]), bLocal_155, "Wagon", 1, 0x5f5e100, 1);
		}
		bLocal_156 = Function_300(0, 1, 0, 0, 0, 0, 1, 0);
		if (IS_ACTOR_VALID(bLocal_156))
		{
			Function_219(bLocal_156, (*&Local_4 + 308)[4], 1, 1, 1);
			TASK_STAND_STILL(bLocal_156, -1.0f, 0, 0);
		}
		bVar0 = false;
		while (bVar0 <= GET_NUM_DRAFTED_ACTORS(bLocal_155))
		{
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(GET_DRAFT_ACTOR(bVar0, bLocal_155), 0,1f);
			SET_ACTOR_FACTION(GET_DRAFT_ACTOR(bVar0, bLocal_155), 20);
			bVar0++;
		}
		iLocal_216 = 1;
		iLocal_203 = 1;
		iLocal_200 = 0;
	}
	return;
}

var Function_300(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0xD7A7 / 55207
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
	if (Global_3381 || Function_232(1))
	{
		Function_306(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_305())
		{
			return "";
		}
	}
	if (!Function_303())
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
		Function_240(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_240(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_240(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_240(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_302(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_302(StackVal, StackVal, vVar5, 0, 1, 1);
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
		Function_301(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
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

void Function_301(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xDAFF / 56063
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

var Function_302(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xDB3C / 56124
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

bool Function_303() //Position: 0xDBD7 / 56279
{
	if (Function_304() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_304() //Position: 0xDBED / 56301
{
	return Global_12976.f_152;
}

bool Function_305() //Position: 0xDBF8 / 56312
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_306(var uParam0, bool bParam1, bool bParam2) //Position: 0xDC18 / 56344
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

int Function_307(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0xDC45 / 56389
{
	if (!Function_313(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_312(uParam0, bParam2))
	{
		return 0;
	}
	Function_311(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_308(uParam0, iParam4, iParam5);
	return 1;
}

void Function_308(var uParam0, int iParam1, int iParam2) //Position: 0xDC81 / 56449
{
	if (iParam1 != 100000000)
	{
		Function_310(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_309(uParam0, iParam2);
	}
	return;
}

void Function_309(int iParam0, bool bParam1) //Position: 0xDCA4 / 56484
{
	iParam0->f_40 = 0;
	Function_310(iParam0, 2, bParam1);
	Function_310(iParam0, 4, bParam1);
	Function_310(iParam0, 8, bParam1);
	Function_310(iParam0, 16, bParam1);
	Function_310(iParam0, 32, bParam1);
	Function_310(iParam0, 64, bParam1);
	Function_310(iParam0, 128, bParam1);
	Function_310(iParam0, 256, bParam1);
	Function_310(iParam0, 512, bParam1);
	Function_310(iParam0, 1024, bParam1);
	return;
}

void Function_310(int iParam0, int iParam1, bool bParam2) //Position: 0xDD0A / 56586
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

void Function_311(var uParam0, int iParam1) //Position: 0xDD46 / 56646
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_312(int iParam0, bool bParam1) //Position: 0xDD52 / 56658
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

bool Function_313(var uParam0, bool bParam1) //Position: 0xDDDB / 56795
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

void Function_314(int iParam0, bool bParam1, bool bParam2) //Position: 0xDF67 / 57191
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
						Function_178(bVar1);
					}
				}
				Function_315(bVar0);
			}
		}
	}
	return;
}

void Function_315(bool bParam0) //Position: 0xE05E / 57438
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

void Function_316(bool bParam0) //Position: 0xE08A / 57482
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

vector3 Function_317(bool bParam0) //Position: 0xE0AA / 57514
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

bool Function_318(bool bParam0, bool bParam1) //Position: 0xE116 / 57622
{
	if (IS_ACTOR_VALID(bParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		LOG_ERROR("AssertActorValid: Actor not valid!");
	}
	return 0;
}

void Function_319() //Position: 0xE157 / 57687
{
	if (!IS_ACTOR_VALID(bLocal_155))
	{
		bLocal_155 = Function_320(bLocal_110, "Wagon", 1202, 981, -1698,88f, 29,11f, 3067,71f, 0.0f, 83,35f, 0.0f, 1, 987, 976, 976, 4);
		bLocal_343 = GET_DRAFT_ACTOR(false, bLocal_155);
		bLocal_344 = GET_DRAFT_ACTOR(true, bLocal_155);
	}
	SET_ACTOR_UPDATE_PRIORITY(bLocal_155, false);
	return;
}

bool Function_320(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0xE1B4 / 57780
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
			if (Function_323(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_322(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_321(bVar16, &iVar1))
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

bool Function_321(int iParam0, int iParam1) //Position: 0xE3E8 / 58344
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

var Function_322(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0xE41A / 58394
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_323(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xE432 / 58418
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

struct<8> Function_324() //Position: 0xE459 / 58457
{
	var uVar0;
	
	Function_325(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Merchant01_layout");
	Local_4.f_180 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVolumes_set");
	(*&Local_4 + 164)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -1714,147f, 29,88401f, 3058,147f, 0.0f, 0.0f, 0.0f, 50,21133f, 11,94712f, 56,08859f);
	ADD_TO_VOLUME_SET(Local_4.f_180, (*&Local_4 + 164)[0]);
	(*&Local_4 + 164)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneFinalVol", 2, -2140,467f, 19,6774f, 2611,08f, 0.0f, 0.0f, 0.0f, 93,53979f, 8,800646f, 15,00222f);
	ADD_TO_VOLUME_SET(Local_4.f_180, (*&Local_4 + 164)[1]);
	(*&Local_4 + 164)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneFinalVol2", 2, -2125,434f, 18,68193f, 2603,569f, 0.0f, 0.0f, 0.0f, 3,782386f, 5,82832f, 7,569668f);
	ADD_TO_VOLUME_SET(Local_4.f_180, (*&Local_4 + 164)[2]);
	Local_4.f_196 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "OutOfBoundsVolumes_set");
	(*&Local_4 + 184)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OutOfBoundsVol020", 2, -1952,623f, 21,9882f, 2513,954f, 0.0f, 216,5293f, 0.0f, 24,99251f, 15,89102f, 316,8701f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 184)[0]);
	(*&Local_4 + 184)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "OutOfBoundsVol021", 2, -1956,925f, 23,44684f, 2717,225f, 0.0f, 133,102f, 0.0f, 24,99251f, 15,89102f, 268,2274f);
	ADD_TO_VOLUME_SET(Local_4.f_196, (*&Local_4 + 184)[1]);
	Local_4.f_240 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "RoadVolumes_set");
	(*&Local_4 + 200)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerNotMovedVol", 2, -1714,347f, 31,92004f, 3066,888f, 0.0f, 5.0f, 0.0f, 66,71149f, 11,64128f, 35,70818f);
	ADD_TO_VOLUME_SET(Local_4.f_240, (*&Local_4 + 200)[0]);
	(*&Local_4 + 200)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Wave01_AttackTrig", 2, -1990,345f, 40,71871f, 3136,732f, 0.0f, 1.0f, 0.0f, 16,10556f, 60,26153f, 658,2599f);
	ADD_TO_VOLUME_SET(Local_4.f_240, (*&Local_4 + 200)[1]);
	(*&Local_4 + 200)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Wave01_Spawn", 2, -1962,503f, 39,0824f, 3113,504f, 0.0f, 2.0f, 0.0f, 13,63595f, 48,38581f, 658,2599f);
	ADD_TO_VOLUME_SET(Local_4.f_240, (*&Local_4 + 200)[2]);
	(*&Local_4 + 200)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Wave02_AttackTrig", 2, -2354,05f, 24,25581f, 2871,436f, 0.0f, -41.0f, 0.0f, 261,6494f, 27,25555f, 328,4649f);
	ADD_TO_VOLUME_SET(Local_4.f_240, (*&Local_4 + 200)[3]);
	(*&Local_4 + 200)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Wave02_Spawn2", 2, -2353,629f, 24,25581f, 2884,223f, 0.0f, -41.0f, 0.0f, 333,1614f, 36,97114f, 394,8251f);
	ADD_TO_VOLUME_SET(Local_4.f_240, (*&Local_4 + 200)[4]);
	(*&Local_4 + 200)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Wave_Back_Spawn_R", 2, -1671,95f, 26,20031f, 2809,492f, 0.0f, -45.0f, 0.0f, 46,21426f, 20,21224f, 329,4241f);
	ADD_TO_VOLUME_SET(Local_4.f_240, (*&Local_4 + 200)[5]);
	(*&Local_4 + 200)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Wave_Back_Spawn_L", 2, -1931,731f, 31,34254f, 2894,674f, 0.0f, -99,76541f, 0.0f, 46,21426f, 20,21224f, 329,4241f);
	ADD_TO_VOLUME_SET(Local_4.f_240, (*&Local_4 + 200)[6]);
	(*&Local_4 + 200)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Wave01_LoadBounds", 2, -1916,027f, 39,0824f, 3111,881f, 0.0f, 2.0f, 0.0f, 22,77082f, 48,38581f, 658,2599f);
	ADD_TO_VOLUME_SET(Local_4.f_240, (*&Local_4 + 200)[7]);
	(*&Local_4 + 200)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ExtraRough", 2, -1759,717f, 31,34254f, 2939,647f, 0.0f, -88,76541f, 0.0f, 161,6121f, 20,21224f, 550,1494f);
	ADD_TO_VOLUME_SET(Local_4.f_240, (*&Local_4 + 200)[8]);
	Local_4.f_264 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "ArmadilloVolumes_set");
	(*&Local_4 + 244)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nNearbyVol", 2, -2148,481f, 18,24758f, 2598,682f, 0.0f, 0.0f, 0.0f, 132,2226f, 7,652685f, 106,1442f);
	ADD_TO_VOLUME_SET(Local_4.f_264, (*&Local_4 + 244)[0]);
	(*&Local_4 + 244)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nDoctorVol", 2, -2126,505f, 17,66647f, 2611,089f, 0.0f, 0.0f, 0.0f, 26,19291f, 5,202918f, 18,03189f);
	ADD_TO_VOLUME_SET(Local_4.f_264, (*&Local_4 + 244)[1]);
	(*&Local_4 + 244)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "walkThruVol", 2, -2145,51f, 17,66647f, 2592,732f, 0.0f, 0.0f, 0.0f, 105,5339f, 3,093467f, 100,3182f);
	ADD_TO_VOLUME_SET(Local_4.f_264, (*&Local_4 + 244)[2]);
	(*&Local_4 + 244)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "FleeVol", 2, -2148,481f, 18,24758f, 2598,682f, 0.0f, 0.0f, 0.0f, 190,0528f, 10,99974f, 152,5685f);
	ADD_TO_VOLUME_SET(Local_4.f_264, (*&Local_4 + 244)[3]);
	Local_4.f_300 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "LOSArmadilloVolumes_set");
	(*&Local_4 + 268)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "losVol", 2, -2312,089f, 24,38528f, 2819,045f, 0.0f, 49,90213f, 0.0f, 28,2243f, 20,59002f, 339,6332f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 268)[0]);
	(*&Local_4 + 268)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "losVol1", 2, -2008,63f, 26,0182f, 2697,836f, 0.0f, -34,09787f, 0.0f, 28,2243f, 20,59002f, 127,3373f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 268)[1]);
	(*&Local_4 + 268)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "losVol2", 2, -1938,287f, 26,0182f, 2631,056f, 0.0f, -67,09787f, 0.0f, 28,2243f, 20,59002f, 87,03372f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 268)[2]);
	(*&Local_4 + 268)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "losVol3", 2, -1900,403f, 26,0182f, 2568,949f, 0.0f, -1,097872f, 0.0f, 28,2243f, 20,59002f, 131,266f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 268)[3]);
	(*&Local_4 + 268)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "losVol4", 2, -1958,668f, 26,0182f, 2465,811f, 0.0f, 52,90213f, 0.0f, 28,2243f, 20,59002f, 166,0848f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 268)[4]);
	(*&Local_4 + 268)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "losVol5", 2, -2135,433f, 26,0182f, 2410,636f, 0.0f, 85,90213f, 0.0f, 28,2243f, 20,59002f, 233,6807f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 268)[5]);
	(*&Local_4 + 268)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "losVol6", 2, -2089,296f, 26,0182f, 2783,731f, 1,01112f, -51,76834f, 1,359475f, 28,2243f, 20,59002f, 127,3373f);
	ADD_TO_VOLUME_SET(Local_4.f_300, (*&Local_4 + 268)[6]);
	Local_4.f_304 = CREATE_OBJECTSET_IN_LAYOUT("StagePositionsSet", Local_4, 8, 0);
	(*&Local_4 + 308)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerPos01", -1701,062f, 29,114f, 3069,637f, 0.0f, 12.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[0], Local_4.f_304);
	(*&Local_4 + 308)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerPosFinal", -2128,847f, 16,098f, 2611,471f, 0.0f, 348.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[1], Local_4.f_304);
	(*&Local_4 + 308)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionPosFinal", -2124,268f, 16,917f, 2596.0f, 0.0f, -184,7416f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[2], Local_4.f_304);
	(*&Local_4 + 308)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "FinalGateway", -2125,845f, 16,09741f, 2608,227f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[3], Local_4.f_304);
	(*&Local_4 + 308)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorsePos", -1700f, 29,63983f, 3057,917f, 0.0f, 142.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[4], Local_4.f_304);
	(*&Local_4 + 308)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "TrainStart4", -2531,803f, 15,35033f, 3002,073f, 0.0f, 140.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[5], Local_4.f_304);
	(*&Local_4 + 308)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "WagonPos04", -2907,918f, 13,8649f, 3029,415f, 140,9625f, -87,17837f, -140,5214f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[6], Local_4.f_304);
	(*&Local_4 + 308)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "nTrainEnd1", -3489,315f, 20,5297f, 2568,85f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[7], Local_4.f_304);
	(*&Local_4 + 308)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorsePos02", -2095,411f, 16,449f, 2604,545f, 4,990509f, -69,12f, -4,189142f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[8], Local_4.f_304);
	(*&Local_4 + 308)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerPos_End", -2126,006f, 16,909f, 2601,592f, 0.0f, 539.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[9], Local_4.f_304);
	(*&Local_4 + 308)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerPosStart_New", -1700f, 29,11371f, 3068,089f, 0.0f, 109.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[10], Local_4.f_304);
	(*&Local_4 + 308)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "BaddieStart_01", -2118,438f, 35,13727f, 3092.0f, 1,044841f, 231,7344f, -1,003757f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[11], Local_4.f_304);
	(*&Local_4 + 308)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "BaddieStart_02", -2092.0f, 38,09968f, 3080,197f, 0.0f, 227.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[12], Local_4.f_304);
	(*&Local_4 + 308)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "BaddieStart_03", -2120.0f, 34,88313f, 3098,391f, 0.0f, 236.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[13], Local_4.f_304);
	(*&Local_4 + 308)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "BaddieStart_04", -2320.0f, 17,06667f, 3164,067f, 0.0f, 109.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[14], Local_4.f_304);
	(*&Local_4 + 308)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "BaddieStart_06", -1738,551f, 25,566f, 2861,167f, 0.0f, 109.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[15], Local_4.f_304);
	(*&Local_4 + 308)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "lb14_NewStart", -1986,243f, 46,59863f, 3091,826f, 0.0f, 109.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[16], Local_4.f_304);
	(*&Local_4 + 308)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "lb14_NewStart1", -1996,052f, 44,169f, 3091,004f, 0.0f, 109.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[17], Local_4.f_304);
	(*&Local_4 + 308)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "WagonPos051", -1698,88f, 29,11f, 3067,71f, 0.0f, 89,90145f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[18], Local_4.f_304);
	(*&Local_4 + 308)[19] = CREATE_POINT_IN_LAYOUT(Local_4, "WagonPosSkip", -2168.0f, 16,21359f, 2611,988f, 0.0f, -91,09855f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 308)[19], Local_4.f_304);
}

void Function_325(int iParam0, int iParam1) //Position: 0xF551 / 62801
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

bool Function_326() //Position: 0xF59A / 62874
{
	if (!Function_341())
	{
		return 0;
	}
	if (!Function_336(&bLocal_128))
	{
		return 0;
	}
	if (!Function_336(&bLocal_118))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_154))
	{
		bLocal_154 = Function_327(2, 0, 1, -1700.0f, 30.0f, 3058.0f, 0, 0, 0);
		return 0;
	}
	return 1;
}

bool Function_327(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0xF5E5 / 62949
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
	iParam2 = iParam2;
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
		Function_314(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_335(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_330(StackVal, iParam7);
		}
		if (!IS_ACTOR_VALID(bVar1))
		{
			vVar3.x = fParam3;
			vVar3.y = fParam4;
			vVar3.z = fParam5;
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
		Function_329(bVar1, 0, 0, 0, 0);
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
		Function_328(bVar1, 0);
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

void Function_328(bool bParam0, bool bParam1) //Position: 0xFACF / 64207
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_329(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xFAEF / 64239
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

bool Function_330(int iParam0, bool bParam1) //Position: 0xFB43 / 64323
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
						Function_331(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_331(bool bParam0, bool bParam1) //Position: 0xFBC3 / 64451
{
	Function_333(bParam0);
	Function_332(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_332(bool bParam0) //Position: 0xFBE9 / 64489
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_333(bool bParam0) //Position: 0xFC0D / 64525
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

bool Function_334(int iParam0) //Position: 0xFCDC / 64732
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_335(int iParam0, bool bParam1) //Position: 0xFCF3 / 64755
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

bool Function_336(bool bParam0) //Position: 0xFD86 / 64902
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_340();
	iVar1 = 0;
	if (!Function_187(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_339(bParam0[iVar03], 8);
		}
		else if (Function_338())
		{
			iVar1 = 1;
			Function_339(bParam0[iVar03], 8);
		}
		Function_339(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_187(bParam0[iVar03], 4))
		{
			if (!Function_187(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_187(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_187(bParam0[03], 8) || iVar1));
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
				Function_339(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_187(bParam0[iVar03], 4))
		{
			if (!Function_187(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_339(bParam0[iVar03], 2);
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
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_339(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_339(bParam0[iVar03], 2);
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
	Function_337();
	return 1;
}

void Function_337() //Position: 0x10102 / 65794
{
	if (!Function_278(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_338() //Position: 0x10142 / 65858
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

void Function_339(var uParam0, int iParam1) //Position: 0x1016D / 65901
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_340() //Position: 0x1017E / 65918
{
	if (!Function_278(128))
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

bool Function_341() //Position: 0x101C0 / 65984
{
	if (IS_EXITFLAG_SET())
	{
		return 1;
	}
	if (!Function_344(0))
	{
		return 0;
	}
	if (!Function_342())
	{
		return 0;
	}
	if (!Function_336(&bLocal_118))
	{
		return 0;
	}
	if (!Function_336(&bLocal_128))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bLocal_154))
	{
		bLocal_154 = Function_327(2, 0, 1, -1700.0f, 30.0f, 3058.0f, 0, 0, 0);
		return 0;
	}
	DEEQUIP_ACCESSORY(bLocal_154, 0);
	return 1;
}

bool Function_342() //Position: 0x10223 / 66083
{
	Function_343(&Local_4 + 4, 416, 2, 0);
	Function_343(&Local_4 + 4, 977, 2, 0);
	Function_343(&Local_4 + 4, 417, 2, 0);
	Function_343(&Local_4 + 4, 980, 2, 0);
	Function_343(&Local_4 + 4, 415, 2, 0);
	Function_343(&Local_4 + 4, 976, 2, 0);
	Function_343(&Local_4 + 4, 400, 2, 0);
	if (Function_336(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_343(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10291 / 66193
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_187(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_339(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_339(uParam0[iVar03], 8);
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

bool Function_344(bool bParam0) //Position: 0x10361 / 66401
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

int Function_345() //Position: 0x1038F / 66447
{
	switch (iLocal_150)
	{
		case 0x00000063:
			Function_346(2, 0, 1, 1, 1, 1, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_346(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_346(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x103C7 / 66503
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
		Function_244();
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
	Function_282(bParam9);
}

int Function_347() //Position: 0x104B7 / 66743
{
	switch (iLocal_150)
	{
		case 0x00000063:
			Function_297();
			return 1;
			break;
		
		case 0x00000065:
			if (iLocal_193 == 0)
			{
				CUTSCENE_MANAGER_SHOW_ACTOR(bLocal_155);
				if (IS_ACTOR_VALID(bLocal_156))
				{
					Function_219(bLocal_156, (*&Local_4 + 308)[8], 1, 1, 1);
					TASK_STAND_STILL(bLocal_156, -1.0f, 0, 0);
				}
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(bLocal_154, -2124,754f, 16,886f, 2595,035f, 90.0f, 1, true, 0);
				UI_EXIT("HealthMeter");
				TASK_STAND_STILL(Global_34573, -1.0f, 1, 0);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_348() //Position: 0x10549 / 66889
{
	switch (iLocal_150)
	{
		case 0x00000063:
			if (!Function_336(&bLocal_128))
			{
				return 0;
			}
			Function_297();
			return 1;
			break;
		
		case 0x00000065:
			if (iLocal_193 == 0)
			{
				if (!iLocal_214)
				{
					CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_155);
					iLocal_214 = 1;
				}
				return 1;
			}
			if (iLocal_214)
			{
				CUTSCENE_MANAGER_SHOW_ACTOR(bLocal_155);
				iLocal_214 = 0;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_349() //Position: 0x105A6 / 66982
{
	switch (iLocal_150)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				return 1;
			}
			if (Function_326())
			{
				Function_324();
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			}
			break;
		
		case 0x00000065:
			if (iLocal_193 == 0)
			{
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
				return 1;
			}
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(0);
			return 1;
			break;
		
		default:
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
	}
	return 0;
}

int Function_350() //Position: 0x105FE / 67070
{
	switch (iLocal_150)
	{
		case 0x00000063:
			Function_319();
			Function_277(1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_275(bLocal_110, -1712,907f, 29,14584f, 3067,092f, &iLocal_142 + 20, 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			ENABLE_VEHICLE_SEAT(bLocal_155, true, 0);
			ENABLE_VEHICLE_SEAT(bLocal_155, false, 0);
			Function_277(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_240((*&Local_4 + 308)[3]);
			Function_275(StackVal, StackVal, bLocal_110, Function_240((*&Local_4 + 308)[3]), &Local_4 + 164[1], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_277(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_351() //Position: 0x106A2 / 67234
{
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	Function_352(&(Local_299[117]));
	return;
}

void Function_352(int iParam0) //Position: 0x106C0 / 67264
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

void Function_353(int iParam0) //Position: 0x10774 / 67444
{
	if (!Function_293(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_194(1, 0, 1);
		}
	}
	return;
}

bool Function_354(int iParam0) //Position: 0x1078F / 67471
{
	if (!Function_81(iParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[iParam0]), 4);
}

void Function_355(bool bParam0) //Position: 0x107AB / 67499
{
	Function_356(0, 0x40400000);
	Function_208();
	Function_207();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_356(bool bParam0, float fParam1) //Position: 0x107DF / 67551
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
	Function_358();
	Function_357();
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

void Function_357() //Position: 0x108DD / 67805
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_358() //Position: 0x1090F / 67855
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

void Function_359() //Position: 0x10A0C / 68108
{
	Function_420();
	switch (bLocal_151)
	{
		case 0x00000000:
			Function_355(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(17);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_415();
			iLocal_152 = Global_30628[0];
			if (!Function_354(iLocal_152))
			{
				Function_353(&Local_111);
			}
			Function_297();
			Function_225(1);
			break;
		
		case 0x00000001:
			if (Function_293(&Local_111))
			{
				if (STREAMING_IS_WORLD_LOADED() && (Function_354(iLocal_152) || iLocal_152 != 4294967295))
				{
					if (Function_342())
					{
						vLocal_223 = { -1698,88f, 28,5f, 3067,71f };
						TELEPORT_ACTOR_WITH_HEADING(bLocal_155, vLocal_223, 83,85f, 1, true, 0);
						Function_225(2);
						Function_226(&iLocal_159);
					}
				}
			}
			else
			{
				Function_225(2);
				Function_226(&iLocal_159);
			}
			break;
		
		case 0x00000002:
			Function_408();
			Function_225(6);
			break;
		
		case 0x00000006:
			if (Function_403())
			{
				Function_274();
				START_VEHICLE(bLocal_155);
				Function_178(bLocal_155);
				AUDIO_MUSIC_SET_MOOD("DRAMATIC", 0, 4294967295, 4294967295);
				STREAMING_UNLOAD_BOUNDS();
				Function_402(1);
				bLocal_157 = Function_401(Local_4, "ArmadilloGateway", (*&Local_4 + 244)[1], bLocal_155, 1, 330, 4, 0, 0, 1);
				Function_240(bLocal_157);
				Function_399(StackVal, StackVal, Function_240(bLocal_157), 0, 48, 1);
				fLocal_186 = 100.0f;
				iLocal_153 = 1;
				Function_298(&iLocal_168);
				UI_SHOW("HealthMeter");
				UI_SET_TEXT("HealthMeter", "Merchant01_HealthLabel");
				iLocal_203 = 1;
				Function_225(7);
			}
			break;
		
		case 0x00000007:
			Function_387();
			Function_373();
			if (Function_363())
			{
				Function_225(105);
			}
			break;
		
		case 0x00000069:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_225(106);
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_360();
				iLocal_150 = 101;
				Function_225(3);
			}
			break;
	}
	return;
}

void Function_360() //Position: 0x10BD1 / 68561
{
	Function_362(&Local_4 + 112);
	Function_362(&Local_4 + 136);
	Function_362(&Local_4 + 160);
	UI_EXIT("HealthMeter");
	if (IS_OBJECT_VALID(bLocal_157))
	{
		Function_361(bLocal_157);
	}
	Function_402(0);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	Function_352(&(Local_299[117]));
	return;
}

void Function_361(bool bParam0) //Position: 0x10C26 / 68646
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

void Function_362(var uParam0) //Position: 0x10CB0 / 68784
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
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_363() //Position: 0x10CF7 / 68855
{
	switch (iLocal_346)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME(bLocal_155, Local_4.f_300) && iLocal_153 == 2)
			{
				Function_372();
				iLocal_213 = 1;
				Function_226(&iLocal_159);
				iLocal_346 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_IN_VOLUME(bLocal_155, (*&Local_4 + 244)[3]) && iLocal_153 == 2)
			{
				Function_367();
				AUDIO_MUSIC_SET_MOOD("DRAMATIC", 0, 4294967295, 4294967295);
				Function_226(&iLocal_159);
				iLocal_346 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_IN_VOLUME(bLocal_155, (*&Local_4 + 244)[0]) && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_366();
				iLocal_212 = 1;
				UI_EXIT("HealthMeter");
				iLocal_203 = 1;
				Function_226(&iLocal_159);
				iLocal_346 = 3;
			}
			break;
	}
	if ((IS_ACTOR_IN_VOLUME(bLocal_155, (*&Local_4 + 244)[1]) && Function_365(Global_34573, bLocal_155, 0)) && Function_365(bLocal_154, bLocal_155, 1))
	{
		if (IS_OBJECT_VALID(bLocal_157))
		{
			Function_361(bLocal_157);
		}
		Function_213();
		SET_ACTION_NODE_FOR_ACTOR(bLocal_154, "sit_wounded/not_coughing");
		iLocal_203 = 1;
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		Function_364();
		if (IS_ACTOR_VALID(bLocal_155))
		{
			STOP_VEHICLE(bLocal_155);
		}
		Function_226(&iLocal_159);
		iLocal_346 = 4;
		return 1;
	}
	return 0;
}

void Function_364() //Position: 0x10E22 / 69154
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_arriveDoctors", "Merchant01_arriveDoctors", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_365(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10E79 / 69241
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

void Function_366() //Position: 0x10EA0 / 69280
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveThruArm_v1_AA", "Merchant01_driveThruArm_v1_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveThruArm_v1_AB", "Merchant01_driveThruArm_v1_AB", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_2190", "", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveThruArm_v1_AC1", "Merchant01_driveThruArm_v1_AC1", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveThruArm_v1_AC2", "Merchant01_driveThruArm_v1_AC2", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_4260", "", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveThruArm_v1_AD", "Merchant01_driveThruArm_v1_AD", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_367() //Position: 0x11067 / 69735
{
	if (SQUAD_IS_VALID(Local_4.f_112))
	{
		if (Function_371(Local_4.f_112, 1, 1, 1, 1, 0))
		{
			Function_370(Local_4.f_112, Global_34573, -1.0f, -1.0f, 1, 1);
			Function_369(Local_4.f_112);
			bLocal_218 = true;
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_136))
	{
		if (Function_371(Local_4.f_136, 1, 1, 1, 1, 0))
		{
			Function_370(Local_4.f_136, Global_34573, -1.0f, -1.0f, 1, 1);
			Function_369(Local_4.f_136);
			bLocal_218 = true;
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_160))
	{
		if (Function_371(Local_4.f_160, 1, 1, 1, 1, 0))
		{
			Function_370(Local_4.f_160, Global_34573, -1.0f, -1.0f, 1, 1);
			Function_369(Local_4.f_160);
			bLocal_218 = true;
		}
	}
	if (bLocal_218)
	{
		Function_368();
		iLocal_212 = 1;
	}
	iLocal_208 = 1;
	return;
}

void Function_368() //Position: 0x1110E / 69902
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_attackersPeelAway", "Merchant01_attackersPeelAway", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_369(bool bParam0) //Position: 0x1116D / 69997
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_178(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_370(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x111A4 / 70052
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

bool Function_371(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x11212 / 70162
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

void Function_372() //Position: 0x112C6 / 70342
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_ArmOutskirts", "Merchant01_ArmOutskirts", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_373() //Position: 0x1131B / 70427
{
	if (iLocal_345 >= 1)
	{
		if (iLocal_346 < 0)
		{
			Function_378();
		}
	}
	switch (iLocal_345)
	{
		case 0x00000000:
			Function_274();
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_377();
				iLocal_212 = 1;
				Function_226(&iLocal_159);
				iLocal_345 = 1;
			}
			break;
		
		case 0x00000001:
			if ((!HUD_IS_SHOWING_HELP_TEXT() && !Function_376()) && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_375("Merchant01_obj01b", 7,5f, 1, 2, 0, 0, 0);
				ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_343, false);
				ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_344, false);
				Function_157(Global_30628[0]);
				Function_226(&iLocal_159);
				iLocal_345 = 4;
			}
			break;
		
		case 0x00000004:
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_132("sol_FTE_Help_Stagecoach_01", (10.0f * 1,5f), 1, 0, 2, 1, 0);
				if (!Function_26(4, 0))
				{
					Function_226(&iLocal_159);
					iLocal_345 = 2;
				}
				else
				{
					Function_226(&iLocal_159);
					iLocal_345 = 5;
				}
			}
			break;
		
		case 0x00000002:
			if (iLocal_190 == 0)
			{
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_132("Merchant01_wagon_help_01", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_190++;
				}
			}
			else if (iLocal_190 == 1)
			{
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_132("Merchant01_wagon_help_02", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_190++;
				}
			}
			else if (iLocal_190 == 2)
			{
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_132("Merchant01_wagon_help_03", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_190++;
				}
			}
			else if (iLocal_190 == 3)
			{
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					Function_132("Merchant01_wagon_help_04", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_190++;
					Function_226(&iLocal_159);
					iLocal_345 = 5;
				}
			}
			break;
		
		case 0x00000005:
			if (Function_288(&iLocal_159) < 4.0f && !HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_132("Merchant01_saveMeterHelp01", 0x41200000, 1, 0, 2, 1, 0);
				Function_226(&iLocal_159);
				iLocal_345 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_SHOWING_HELP_TEXT())
			{
				Function_132("Merchant01_saveHelp02", 0x41200000, 1, 0, 2, 1, 0);
				Function_226(&iLocal_159);
				iLocal_345 = 10;
			}
			break;
		
		case 0x0000000A:
			if (!HUD_IS_SHOWING_HELP_TEXT() && !Function_376())
			{
				Function_132("Merchant01_saveMeterHelp02", 0x41200000, 1, 0, 2, 1, 0);
				Function_226(&iLocal_159);
				iLocal_345 = 14;
			}
			break;
		
		case 0x0000000C:
			if ((!HUD_IS_SHOWING_HELP_TEXT() && !Function_376()) && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_155, (*&Local_4 + 200)[0]) && Function_365(Global_34573, bLocal_155, 0))
				{
					if (Function_288(&iLocal_159) < 7,5f)
					{
						Function_374();
						iLocal_212 = 1;
						Function_226(&iLocal_159);
					}
				}
				else
				{
					Function_226(&iLocal_159);
					iLocal_345 = 14;
				}
			}
			break;
		
		case 0x0000000E:
			break;
	}
	return;
}

void Function_374() //Position: 0x11654 / 71252
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_jonDrive_noMove", "Merchant01_jonDrive_noMove", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_375(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x116AF / 71343
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

bool Function_376() //Position: 0x11702 / 71426
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_377() //Position: 0x1170F / 71439
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_towardsArm", "Merchant01_towardsArm", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_378() //Position: 0x11760 / 71520
{
	if (!bLocal_257 && !bLocal_211)
	{
		if (!Function_290(&iLocal_240))
		{
			Function_298(&iLocal_240);
			iLocal_250 = 0;
		}
		else if (Function_288(&iLocal_240) < 5.0f)
		{
			if (!bLocal_258)
			{
				if (IS_ACTOR_SHOOTING(Global_34573))
				{
					if (!IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(Global_34573, 0)))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_154, "Merchant01_shootsGunRand", "Merchant01_shootsGunRand", false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_226(&iLocal_240);
					}
					else
					{
						Function_226(&iLocal_240);
					}
				}
			}
			if (Function_386(bLocal_155, 0) > 2.0f)
			{
				if (!iLocal_205)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_154, "Merchant01_jonStops", "Merchant01_jonStops", false, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
					Function_226(&iLocal_240);
					iLocal_205 = 1;
				}
			}
			else if (iLocal_205)
			{
				iLocal_205 = 0;
			}
		}
		if (!iLocal_249)
		{
			if (iLocal_250)
			{
				if (!iLocal_254)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_226(&iLocal_243);
						iLocal_254 = 1;
					}
				}
				else if (Function_288(&iLocal_243) < 5.0f)
				{
					bLocal_248++;
					iLocal_250 = 0;
					PRINTSTRING("iHowaManyInterupts = ");
					PRINTINT(bLocal_248);
					PRINTNL();
				}
			}
			if ((!iLocal_250 && !bLocal_258) && !bLocal_251)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE())
				{
					if (iLocal_252 == 0)
					{
						if (Function_386(bLocal_155, 0) < 1.0f)
						{
							iLocal_252++;
							iLocal_212 = 1;
						}
						else if (!iLocal_253)
						{
							Function_374();
							iLocal_253 = 1;
							iLocal_212 = 1;
						}
					}
					else if (iLocal_252 == 1)
					{
						iLocal_252++;
					}
					else if (iLocal_252 == 2)
					{
						bLocal_246 = Function_385();
						bLocal_246 = (bLocal_246 + bLocal_248);
						iLocal_247 = (bLocal_246 % 3);
						switch (bLocal_246)
						{
							case 0x00000000:
								Function_384();
								iLocal_215 = 1;
								SCRIPT_BREAKPOINT("v1");
								break;
							
							case 0x00000001:
								Function_383();
								iLocal_215 = 1;
								SCRIPT_BREAKPOINT("v2");
								break;
							
							case 0x00000002:
								Function_382();
								iLocal_215 = 1;
								SCRIPT_BREAKPOINT("v3");
								break;
							
							default:
								if (iLocal_247 == 0)
								{
									Function_381();
								}
								else if (iLocal_247 == 1)
								{
									Function_380();
								}
								else
								{
									Function_379();
								}
								iLocal_212 = 1;
								iLocal_249 = 1;
								break;
						}
						iLocal_250 = 1;
						iLocal_254 = 0;
						iLocal_255 = 0;
						PRINTSTRING("BANTER INDEX = ");
						PRINTINT(bLocal_246);
						PRINTNL();
					}
				}
			}
		}
	}
	else if (!iLocal_255)
	{
		ABORT_SCRIPTED_CONVERSATION(1);
		iLocal_255 = 1;
	}
	return;
}

void Function_379() //Position: 0x119D5 / 72149
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_noTalk_v2_AA", "Merchant01_noTalk_v2_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_noTalk_v2_AB", "Merchant01_noTalk_v2_AB", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_380() //Position: 0x11A67 / 72295
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_noTalk_v1_AA", "Merchant01_noTalk_v1_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_noTalk_v1_AB", "Merchant01_noTalk_v1_AB", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_381() //Position: 0x11AF9 / 72441
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_noTalk", "Merchant01_noTalk", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_382() //Position: 0x11B42 / 72514
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v3_AA", "Merchant01_driveBanter_v3_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v3_AB", "Merchant01_driveBanter_v3_AB", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v3_AC", "Merchant01_driveBanter_v3_AC", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v3_AD", "Merchant01_driveBanter_v3_AD", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v3_AE", "Merchant01_driveBanter_v3_AE", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v3_AF", "Merchant01_driveBanter_v3_AF", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v3_AG", "Merchant01_driveBanter_v3_AG", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v3_AH", "Merchant01_driveBanter_v3_AH", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v3_AI", "Merchant01_driveBanter_v3_AI", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v3_AJ", "Merchant01_driveBanter_v3_AJ", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v3_AK", "Merchant01_driveBanter_v3_AK", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v3_AL", "Merchant01_driveBanter_v3_AL", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v3_AM", "Merchant01_driveBanter_v3_AM", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_383() //Position: 0x11EF5 / 73461
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v2_AA", "Merchant01_driveBanter_v2_AA", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AB", "Merchant01_driveBanter_v2_AB", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v2_AC", "Merchant01_driveBanter_v2_AC", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AD1", "Merchant01_driveBanter_v2_AD1", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AD2", "Merchant01_driveBanter_v2_AD2", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v2_AE", "Merchant01_driveBanter_v2_AE", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AF", "Merchant01_driveBanter_v2_AF", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v2_AG", "Merchant01_driveBanter_v2_AG", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AH", "Merchant01_driveBanter_v2_AH", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AI", "Merchant01_driveBanter_v2_AI", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AJ", "Merchant01_driveBanter_v2_AJ", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AK", "Merchant01_driveBanter_v2_AK", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v2_AL", "Merchant01_driveBanter_v2_AL", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_384() //Position: 0x122AC / 74412
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v1_AA", "Merchant01_driveBanter_v1_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v1_AB", "Merchant01_driveBanter_v1_AB", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v1_AC", "Merchant01_driveBanter_v1_AC", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v1_AD", "Merchant01_driveBanter_v1_AD", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_410", "", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v1_AE", "Merchant01_driveBanter_v1_AE", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v1_AF", "Merchant01_driveBanter_v1_AF", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v1_AG", "Merchant01_driveBanter_v1_AG", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v1_AH", "Merchant01_driveBanter_v1_AH", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v1_AI", "Merchant01_driveBanter_v1_AI", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveBanter_v1_AJ", "Merchant01_driveBanter_v1_AJ", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1020", "", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveBanter_v1_AK", "Merchant01_driveBanter_v1_AK", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

var Function_385() //Position: 0x1260E / 75278
{
	return Global_34165.f_56;
}

float Function_386(bool bParam0, bool bParam1) //Position: 0x12619 / 75289
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_387() //Position: 0x12638 / 75320
{
	if (Function_392(&iLocal_159, 200.0f, bLocal_155, 0, "Wagon_return", "Merchant_abandoned", &bLocal_197, 1, 0, 0, 330, 1))
	{
		if (!bLocal_197)
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_155)))
			{
				Function_361(bLocal_157);
				bLocal_257 = true;
				Function_213();
				ADD_BLIP_FOR_ACTOR(bLocal_155, 325, 0.0f, 2, 0);
				iLocal_195 = 1;
			}
			else if (iLocal_195 == 1)
			{
				if (!HUD_IS_SHOWING_OBJECTIVE())
				{
					Function_391();
					iLocal_212 = 1;
					iLocal_195 = 2;
				}
			}
			else if (iLocal_195 == 2)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_288(&iLocal_180) < 5.0f)
				{
					Function_390();
					iLocal_212 = 1;
					iLocal_195 = 0;
				}
			}
			if (!iLocal_200)
			{
				if (!Function_290(&iLocal_180))
				{
					Function_298(&iLocal_180);
				}
				else if (Function_289(&iLocal_180))
				{
					Function_389(&iLocal_180);
				}
				else if (Function_288(&iLocal_180) < 5.0f)
				{
					iLocal_200 = 1;
					Function_226(&iLocal_180);
					Function_388(&iLocal_180);
				}
			}
		}
	}
	else if (!IS_OBJECT_VALID(bLocal_157))
	{
		Function_178(bLocal_155);
		bLocal_157 = Function_401(Local_4, "ArmadilloGateway", (*&Local_4 + 244)[1], bLocal_155, 1, 330, 4, 0, 0, 1);
		Function_240(bLocal_157);
		Function_399(StackVal, StackVal, Function_240(bLocal_157), 0, 48, 1);
		Function_375("Merchant01_obj01b", 7,5f, 1, 2, 0, 0, 0);
		iLocal_200 = 0;
		bLocal_257 = false;
		iLocal_195 = 0;
	}
	return;
}

void Function_388(bool bParam0) //Position: 0x12793 / 75667
{
	if (Function_290(bParam0))
	{
		if (!Function_289(bParam0))
		{
			bParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_76(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_389(bool bParam0) //Position: 0x12852 / 75858
{
	if (Function_290(bParam0))
	{
		if (Function_289(bParam0))
		{
			bParam0->f_4 = (StackVal - GET_CURRENT_GAME_TIME());
			bParam0->f_8 = 0.0f;
			Function_36(bParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_390() //Position: 0x12919 / 76057
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_wandersOff", "Merchant01_wandersOff", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_391() //Position: 0x1296A / 76138
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_jumpsOffStagecoach", "Merchant01_jumpsOffStagecoach", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_392(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x129CB / 76235
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam2))
	{
		return 0;
	}
	if (!ACTORS_IN_RANGE(Global_34573, bParam2, bParam1))
	{
		Function_233(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_365(Global_34573, bParam2, bParam3) && !(bParam3 != 4294967295 && GET_VEHICLE(Global_34573) != bParam2))
	{
		if (!Function_398(32))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_375(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				Function_397(32);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_396(bParam8, 0, 4294967295, 0, bParam2);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_396(bParam9, 0, 4294967295, 0, bParam2);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam2, bParam10, 0f, 2, 0);
				DECOR_SET_BOOL(bParam2, "MVDR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_398(32))
	{
		Function_395(32);
		if (!Function_394())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_393();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam2, "MVDR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam2));
				DECOR_REMOVE(bParam2, "MVDR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_396(bParam8, 1, 4294967295, 0, bParam2);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_396(bParam9, 1, 4294967295, 0, bParam2);
			}
		}
	}
	return 0;
}

void Function_393() //Position: 0x12B49 / 76617
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

bool Function_394() //Position: 0x12B74 / 76660
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

void Function_395(bool bParam0) //Position: 0x12BB8 / 76728
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

void Function_396(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x12C1B / 76827
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

void Function_397(bool bParam0) //Position: 0x12CBC / 76988
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

bool Function_398(bool bParam0) //Position: 0x12D1F / 77087
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

void Function_399(vector3 vParam0, int iParam3, int iParam4, int iParam5) //Position: 0x12D66 / 77158
{
	*(&Global_28185 + 24) = { StackVal, StackVal, vParam0 };
	*(&Global_28185 + 36) = { StackVal, StackVal, vParam0 };
	Global_28185 = 2;
	Global_28185.f_4 = 0;
	Global_28185.f_60 = iParam3;
	Global_28185.f_16 = iParam4;
	if (iParam4 & 16 >= 0)
	{
		Global_28185.f_16 |= 131072;
	}
	if (iParam4 & 32 >= 0)
	{
		Global_28185.f_16 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	}
	if (GET_OBJECTSET_SIZE(Global_28185.f_12) >= 0)
	{
		Function_400(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = iParam5;
}

void Function_400(bool bParam0) //Position: 0x12E22 / 77346
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

bool Function_401(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, int iParam9) //Position: 0x12E62 / 77410
{
	bool bVar0;
	
	bVar0 = CREATE_GATEWAY_IN_LAYOUT(bParam0, bParam1, bParam2, bParam3, iParam4, iParam6, iParam7, bParam8, iParam9, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam2));
		}
		ADD_BLIP_FOR_OBJECT(bVar0, bParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(bVar0, "volrestrict", bParam2);
		DECOR_SET_BOOL(bVar0, "voldestroy", bParam8);
	}
	return bVar0;
}

void Function_402(bool bParam0) //Position: 0x12EDF / 77535
{
	if (bParam0)
	{
		SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdRoad_curve2", 4)), 50);
		SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_bat_switchBack_path", 5)), 50);
	}
	else
	{
		SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdRoad_curve2", 4)), 10);
		SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_bat_switchBack_path", 5)), 10);
	}
	return;
}

bool Function_403() //Position: 0x12F7D / 77693
{
	if (!Function_365(Global_34573, bLocal_155, 0) || iLocal_206)
	{
		if (Function_288(&iLocal_162) < 60.0f)
		{
			bLocal_211 = true;
			Function_224();
			iLocal_206 = 1;
			Function_178(bLocal_155);
			SET_VEHICLE_EJECTION_ENABLED(bLocal_155, 1);
			Function_226(&iLocal_162);
		}
		fLocal_183 = Function_407(Global_34573, bLocal_154);
		if (fLocal_183 < 200.0f && iLocal_187 < 0)
		{
			Function_233("Merchant_abandoned");
			bLocal_197 = true;
		}
		else if (fLocal_183 < 100.0f)
		{
			if (!iLocal_201)
			{
				Function_406();
				Function_375("Merchant01_reminder01", 7,5f, 0, 2, 0, 0, 0);
				iLocal_201 = 1;
				if (!bLocal_211)
				{
					Function_390();
					iLocal_212 = 1;
				}
			}
		}
		else
		{
			iLocal_201 = 0;
			if (iLocal_187 == 4294967295)
			{
				if (Function_288(&iLocal_159) < 1.0f)
				{
					iLocal_187 = 0;
					Function_226(&iLocal_159);
				}
			}
			else if (iLocal_187 == 0)
			{
				if (!HUD_IS_FADING() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_405();
					iLocal_212 = 1;
					iLocal_187 = 1;
					Function_226(&iLocal_159);
				}
			}
			else if (iLocal_187 == 1)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_375("Merchant01_obj01a", 7,5f, 1, 2, 0, 0, 0);
					iLocal_187 = 2;
					Function_226(&iLocal_159);
				}
			}
			else if (iLocal_187 == 2)
			{
				if (!HUD_IS_SHOWING_OBJECTIVE() && Function_288(&iLocal_159) < 8.0f)
				{
					Function_404();
					iLocal_215 = 1;
					iLocal_187 = 3;
					Function_226(&iLocal_159);
				}
			}
		}
		return 0;
	}
	return 1;
}

void Function_404() //Position: 0x130E1 / 78049
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_getInWagon_v2", "Merchant01_getInWagon_v2", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_405() //Position: 0x13138 / 78136
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_jonDrive", "Merchant01_jonDrive", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_406() //Position: 0x13185 / 78213
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

var Function_407(bool bParam0, bool bParam1) //Position: 0x13191 / 78225
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

void Function_408() //Position: 0x13282 / 78466
{
	Function_239(iLocal_150);
	Function_409(StackVal, StackVal, Function_239(iLocal_150), iLocal_150, Global_30628[0], Function_242(iLocal_150), 0);
	vLocal_223 = { -1717,837f, 32,263f, 3068,019f };
	SET_GAME_CAMERA_FOCUS(vLocal_223, 0);
	Function_285(1.0f);
	return;
}

void Function_409(vector3 vParam0, int iParam3, var uParam4, var uParam5, int iParam6) //Position: 0x132BD / 78525
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
	if (iParam3 != Global_34165.f_48 && !Function_414())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_413(0);
	Function_412();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = uParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_411(uParam4, iVar0, iVar1);
	Function_410();
}

void Function_410() //Position: 0x1335A / 78682
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

void Function_411(int iParam0, bool bParam1, bool bParam2) //Position: 0x1339B / 78747
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

void Function_412() //Position: 0x13501 / 79105
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_413(bool bParam0) //Position: 0x13525 / 79141
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

bool Function_414() //Position: 0x13554 / 79188
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_415() //Position: 0x1356F / 79215
{
	Function_418(1, 1);
	Function_418(2, 1);
	Function_418(3, 1);
	Function_418(4, 1);
	Function_162(114701);
	Function_416(9);
	return;
}

void Function_416(int iParam0) //Position: 0x13595 / 79253
{
	Function_417(&Global_28842, iParam0);
	return;
}

void Function_417(var uParam0, int iParam1) //Position: 0x135A3 / 79267
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_418(int iParam0, bool bParam1) //Position: 0x135C6 / 79302
{
	if (iParam0 == 17)
	{
		if (bParam1)
		{
		}
	}
	if (!Function_419(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		Global_26998[iParam018].f_36 = 0;
	}
	else
	{
		Global_26998[iParam018].f_40 = 0;
	}
	return;
}

bool Function_419(int iParam0) //Position: 0x13601 / 79361
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

void Function_420() //Position: 0x13617 / 79383
{
	if (!Function_547(bLocal_151))
	{
		return;
	}
	Function_499();
	Function_478();
	if (!bLocal_211)
	{
		if (iLocal_213)
		{
			SET_ACTION_NODE_FOR_ACTOR(bLocal_154, "sit_wounded/point");
			iLocal_213 = 0;
			iLocal_215 = 0;
			iLocal_212 = 0;
		}
		else if (iLocal_215)
		{
			SET_ACTION_NODE_FOR_ACTOR(bLocal_154, "sit_wounded/intro_talk");
			iLocal_215 = 0;
		}
		else if (iLocal_212)
		{
			if (Function_477())
			{
				SET_ACTION_NODE_FOR_ACTOR(bLocal_154, "sit_wounded/talkA");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(bLocal_154, "sit_wounded/talkB");
			}
			iLocal_212 = 0;
		}
	}
	else if (!iLocal_207)
	{
		SET_ACTION_NODE_FOR_ACTOR(bLocal_154, "sit_wounded/puke");
		SET_ACTOR_IS_COMPANION(bLocal_154, 0);
		iLocal_207 = 1;
	}
	if (iLocal_221 > 1)
	{
		Function_473();
	}
	if (iLocal_203)
	{
		if ((!IS_ACTOR_IN_VOLUME(bLocal_155, (*&Local_4 + 244)[0]) && !IS_ACTOR_IN_VOLUME(bLocal_155, (*&Local_4 + 200)[0])) || bLocal_257)
		{
			RESET_VEHICLE_BUMP_COUNT(bLocal_155);
			UI_SHOW("HealthMeter");
			UI_SET_TEXT("HealthMeter", "Merchant01_HealthLabel");
			iLocal_203 = 0;
		}
	}
	else if (IS_ACTOR_IN_VOLUME(bLocal_155, (*&Local_4 + 244)[0]) && !bLocal_257)
	{
		UI_EXIT("HealthMeter");
		iLocal_203 = 1;
	}
	Function_468();
	Function_463();
	Function_428();
	if (Function_427(bLocal_155, (*&Local_4 + 308)[3], 150.0f))
	{
		Function_240((*&Local_4 + 308)[3]);
		if (!Function_421(StackVal, StackVal, "$/cutscene/MERCHANT01_CS03/MERCHANT01_CS03", &uLocal_342, Function_240((*&Local_4 + 308)[3]), 0, 100.0f, 200.0f, 2, 1, 1, 2, 0, 1))
		{
			ACTOR_SET_GRABBED_BY_CUTSCENE(bLocal_156, false);
		}
	}
	return;
}

bool Function_421(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, var uParam13) //Position: 0x1380E / 79886
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_424(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_426()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
					Function_422();
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
	else if ((!Function_424(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_426()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_424(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_422() //Position: 0x13A54 / 80468
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
			Function_423(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_423(char* cParam0, vector3 vParam1) //Position: 0x13AA8 / 80552
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

bool Function_424(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x13BD0 / 80848
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_425(bParam0);
		if (VDIST(Function_425(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_425(bool bParam0) //Position: 0x13C5A / 80986
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

int Function_426() //Position: 0x13CC4 / 81092
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

bool Function_427(bool bParam0, bool bParam1, float fParam2) //Position: 0x13CD3 / 81107
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_425(bParam0);
			Function_317(bParam1);
			if (VDIST(Function_425(bParam0), Function_317(bParam1)) >= fParam2)
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

void Function_428() //Position: 0x13DED / 81389
{
	if (iLocal_192 == 0)
	{
		if ((IS_OBJECT_IN_VOLUME(bLocal_155, (*&Local_4 + 200)[6]) || IS_OBJECT_IN_VOLUME(bLocal_155, (*&Local_4 + 200)[5])) && !SQUAD_IS_VALID(Local_4.f_160))
		{
			Function_455();
			iLocal_192 = 1;
			Function_226(&iLocal_177);
		}
	}
	else if (iLocal_192 == 1)
	{
		if (Function_454(Local_4.f_160) < 0 || Function_452(Local_4.f_160, Global_34573, 1, 0, 0))
		{
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_451();
			bLocal_258 = true;
			Function_450(Local_4.f_160, 0);
			Function_449(Local_4.f_160, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_447(Local_4.f_160, Global_34573, 0);
			Function_443(Local_4.f_160, Global_34573, 0);
			Function_442(Local_4.f_160, 70.0f);
			bLocal_339 = false;
			while (bLocal_339 <= 2)
			{
				SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_160, bLocal_339)), 150.0f);
				bLocal_339++;
			}
			iLocal_192 = 2;
			Function_226(&iLocal_177);
		}
	}
	else if (iLocal_192 == 2)
	{
		if (SQUAD_IS_VALID(Local_4.f_160))
		{
			if (Function_441(Local_4.f_160, Global_34573))
			{
				bLocal_219 = true;
				bLocal_251 = true;
			}
			Function_439(Local_4.f_112);
			if (!Function_371(Local_4.f_160, 1, 1, 1, 1, 0))
			{
				Function_226(&iLocal_177);
				iLocal_192 = 3;
			}
			else
			{
				Function_431(Local_4.f_160);
			}
		}
	}
	else if (iLocal_220 == 3)
	{
		if (Function_288(&iLocal_177) < 2.0f)
		{
			if (bLocal_219)
			{
				Function_430();
				Function_226(&iLocal_243);
				iLocal_212 = 1;
			}
			Function_226(&iLocal_177);
			iLocal_192 = 4;
		}
	}
	else if (iLocal_192 == 4)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_288(&iLocal_177) < 4.0f)
		{
			Function_132("Merchant01_driveShootHelp02", 10.0f, 1, 0, 2, 1, 0);
			bLocal_258 = false;
			bLocal_251 = false;
			Function_226(&iLocal_177);
			Function_429(&iLocal_177);
			iLocal_192 = 5;
		}
	}
	return;
}

void Function_429(int iParam0) //Position: 0x13FA0 / 81824
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_430() //Position: 0x13FB4 / 81844
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_1stWave_killed", "Merchant01_1stWave_killed", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_431(bool bParam0) //Position: 0x1400E / 81934
{
	if (bLocal_258)
	{
		if (iLocal_222 == 0)
		{
			if (bLocal_257 || iLocal_205)
			{
				Function_437();
				Function_436();
				if (Function_435(bParam0))
				{
					Function_434(bParam0, bLocal_154, 4);
					Function_433(bParam0);
					SQUAD_GOALS_CLEAR(bParam0);
					Function_432(bParam0, 12, 1);
					Function_443(bParam0, bLocal_154, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, true, 0, 2);
					TASK_FOLLOW_AND_ATTACK_OBJECT(false, bLocal_154, &(vLocal_229[03]), 0.0f, 10.0f, 0,2f, 0,2f, 0, 0);
					iLocal_222++;
				}
			}
		}
		else if (iLocal_222 == 1)
		{
			if (!bLocal_257 && !iLocal_205)
			{
				if (Function_435(bParam0))
				{
					vLocal_229[03] = { 0.0f, 0.0f, -5.0f };
					vLocal_229[13] = { -8.0f, 0.0f, -20.0f };
					vLocal_229[23] = { 8.0f, 0.0f, -10.0f };
					Function_433(bParam0);
					SQUAD_GOALS_CLEAR(bParam0);
					Function_434(bParam0, bLocal_154, 2);
					SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, 2, 0, 1);
					TASK_FOLLOW_AND_ATTACK_OBJECT(false, Global_34573, &(vLocal_229[03]), 0.0f, 10.0f, 0,2f, 0,2f, 0, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, true, 0, 1);
					TASK_FOLLOW_AND_ATTACK_OBJECT(false, Global_34573, &(vLocal_229[13]), 0.0f, 10.0f, 0,4f, 0,3f, 0, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(bParam0, 2, 0, 1);
					TASK_FOLLOW_AND_ATTACK_OBJECT(false, Global_34573, &(vLocal_229[23]), 0.0f, 10.0f, 0,5f, 0,25f, 0, 0);
				}
				iLocal_222 = 0;
			}
		}
	}
	return;
}

void Function_432(bool bParam0, int iParam1, bool bParam2) //Position: 0x1415D / 82269
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

void Function_433(bool bParam0) //Position: 0x141A7 / 82343
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

void Function_434(bool bParam0, bool bParam1, bool bParam2) //Position: 0x141D9 / 82393
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

bool Function_435(bool bParam0) //Position: 0x1421E / 82462
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_DEAD(bVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_436() //Position: 0x14275 / 82549
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_jonStops", "Merchant01_jonStops", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_437() //Position: 0x142C2 / 82626
{
	int iVar0;
	vector3 vVar1[6];
	vector3 vVar20[6];
	
	vVar1[03] = { 0.0f, 0.0f, 10.0f };
	vVar1[13] = { 10.0f, 0.0f, 5.0f };
	vVar1[23] = { 10.0f, 0.0f, -5.0f };
	vVar1[33] = { 0.0f, 0.0f, -5.0f };
	vVar1[43] = { -10.0f, 0.0f, -5.0f };
	vVar1[53] = { -10.0f, 0.0f, 5.0f };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		UNK_0xB89CC342(bLocal_155, &(vVar1[iVar03]), &(vVar20[iVar03]));
		PRINTVECTOR(vVar20[iVar03]);
		PRINTNL();
		iVar0++;
	}
	uLocal_341 = Function_438(Local_4, &vVar20);
	SET_PATH_LOOPING(uLocal_341, 1);
	return;
}

var Function_438(var uParam0, int iParam1) //Position: 0x14371 / 82801
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = CREATE_PATH_IN_LAYOUT(uParam0, Function_53(), *iParam1);
	iVar0 = 0;
	while (iVar0 < (*iParam1 - 1))
	{
		ADD_POINT_TO_PATH(iVar1, *iParam1[iVar03]);
		iVar0++;
	}
	return iVar1;
}

void Function_439(bool bParam0) //Position: 0x143AD / 82861
{
	bool bVar0;
	bool bVar1;
	
	if (!iLocal_210)
	{
		if (Function_440(bParam0, bLocal_155, 40.0f))
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(bParam0))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (bVar0 != 1)
					{
						SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(bVar1), "horse_Main/Melee/RearUp");
					}
					TASK_CLEAR(bVar1);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bVar1, bLocal_155, 15.0f, 3);
				}
				bVar0++;
			}
			iLocal_210 = 1;
		}
	}
	return;
}

bool Function_440(bool bParam0, bool bParam1, int iParam2) //Position: 0x1442D / 82989
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
				if (Function_427(bVar1, bParam1, iParam2))
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_441(bool bParam0, bool bParam1) //Position: 0x14489 / 83081
{
	int iVar0;
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
	iVar0 = 0;
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
					if (!IS_ACTOR_ALIVE(bVar3))
					{
						iVar0 = 1;
					}
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

void Function_442(bool bParam0, bool bParam1) //Position: 0x144FB / 83195
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

void Function_443(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14554 / 83284
{
	Function_446(bParam0, bParam1, 1);
	Function_445(bParam0, 1);
	Function_434(bParam0, bParam1, 4);
	Function_444(bParam0, bParam1);
	if (bParam2)
	{
		Function_449(bParam0, 322, 4294967295, 0.0f, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_444(bool bParam0, bool bParam1) //Position: 0x14594 / 83348
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
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_IDENTIFY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_445(bool bParam0, int iParam1) //Position: 0x145E6 / 83430
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_446(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14627 / 83495
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

void Function_447(bool bParam0, var uParam1, int iParam2) //Position: 0x14692 / 83602
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
			Function_448(&bVar1, uParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_448(var uParam0, bool bParam1, bool bParam2) //Position: 0x146D7 / 83671
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*uParam0, bParam1);
			Function_425(bParam1);
			vVar0 = { StackVal, StackVal, Function_425(bParam1) };
			if (bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(*uParam0, bParam1, true);
			}
			else
			{
				MEMORY_REPORT_POSITION(*uParam0, bParam1, &vVar0);
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

void Function_449(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x147DF / 83935
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

void Function_450(bool bParam0, int iParam1) //Position: 0x148C9 / 84169
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

void Function_451() //Position: 0x14900 / 84224
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_1stWave_attack", "Merchant01_1stWave_attack", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

int Function_452(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x14959 / 84313
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
			if (Function_453(bVar1, bParam1, iParam2, iParam3, iParam4, 3212836864))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_453(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x149BC / 84412
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

int Function_454(bool bParam0) //Position: 0x14AA9 / 84649
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
		if (Function_218(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), 1.0f, 50.0f, 1, 1, 0))
		{
			bVar1++;
		}
		bVar0++;
	}
	return bVar1;
}

void Function_455() //Position: 0x14AF6 / 84726
{
	Function_461();
	vLocal_229[03] = { 10.0f, 0.0f, -5.0f };
	vLocal_229[13] = { -10.0f, 0.0f, -5.0f };
	bLocal_339 = false;
	while (bLocal_339 <= 2)
	{
		bLocal_340 = (*&Local_4 + 140)[bLocal_3392];
		if (Function_318(bLocal_340, 1))
		{
			SET_ACTOR_INVULNERABILITY(bLocal_340, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_340, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_340, 2);
			MEMORY_PREFER_RIDING(bLocal_340, true);
			SET_ACTOR_MIN_SPEED(bLocal_340, 2);
			AI_SET_NAV_MATERIAL_USAGE(bLocal_340, 64, 1);
			DECOR_SET_BOOL(GET_MOUNT(bLocal_340), "bNoInjuryEjection", true);
			Function_301(GET_MOUNT(bLocal_340), 1, 0, 0, 1, 0, 1);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_340, bLocal_158);
		}
		bLocal_339++;
	}
	TASK_GO_NEAR_ACTOR((*&Local_4 + 140)[12], bLocal_155, 35.0f, 4);
	TASK_GO_NEAR_ACTOR((*&Local_4 + 140)[02], bLocal_155, 30.0f, 4);
	Function_460(Local_4.f_160, 0.0f);
	SQUAD_SET_FACTION(Local_4.f_160, 19);
	Function_459(Local_4.f_160, 0);
	Function_458(Local_4.f_160, 0);
	Function_434(Local_4.f_160, bLocal_154, 2);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_160, 2, 0, 1);
	TASK_FOLLOW_AND_ATTACK_OBJECT(false, Global_34573, &(vLocal_229[13]), 0.0f, 0.0f, 0.0f, 0.0f, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_160, true, 0, 1);
	TASK_FOLLOW_AND_ATTACK_OBJECT(false, Global_34573, &(vLocal_229[03]), 0.0f, 0.0f, 0.0f, 0.0f, 0, 1);
	Function_280(Function_456(bLocal_155, Local_4.f_160));
	STREAMING_LOAD_BOUNDS(Function_280(Function_456(bLocal_155, Local_4.f_160)), 50.0f, 1);
	Function_226(&iLocal_165);
	return;
}

bool Function_456(bool bParam0, int iParam1) //Position: 0x14C54 / 85076
{
	vector3 vVar0;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_WARNING("Invalid test object passed to GET_FARTHEST_SQUAD_MEMBER_FROM_OBJECT");
		return "";
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return Function_457(StackVal, StackVal, vVar0, iParam1);
}

int Function_457(vector3 vParam0, bool bParam3) //Position: 0x14CC0 / 85184
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_73(StackVal, StackVal, vParam0))
	{
		LOG_WARNING("Invalid test vector passed to GET_FARTHEST_SQUAD_MEMBER_FROM_VECTOR");
		return "";
	}
	if (!SQUAD_IS_VALID(bParam3))
	{
		LOG_WARNING("Invalid squad passed to GET_FARTHEST_SQUAD_MEMBER_FROM_VECTOR");
		return "";
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam3) - 1))
	{
		bVar3 = GET_OBJECT_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bParam3, bVar0));
		GET_OBJECT_POSITION(bVar3, &vVar4);
		if (VDIST(vParam0, vVar4) < bVar2)
		{
			bVar2 = VDIST(vParam0, vVar4);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam3, bVar1);
	}
	LOG_WARNING("Couldn't find a farthest sqaud member from 'them' to 'Me' in GET_FARTHEST_SQUAD_MEMBER_FROM_VECTOR!");
	return "";
}

void Function_458(bool bParam0, bool bParam1) //Position: 0x14E46 / 85574
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

void Function_459(bool bParam0, int iParam1) //Position: 0x14E84 / 85636
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			AI_RIDING_SET_ENABLED(bVar1, iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_460(bool bParam0, bool bParam1) //Position: 0x14EBD / 85693
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

void Function_461() //Position: 0x14EFD / 85757
{
	Local_4.f_160 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Ambush_BackRoad"));
	(*&Local_4 + 140)[02] = Function_462(Local_4, "nWv03_BE01", 415, Function_53(), 976, -1792,522f, 23,76772f, 2835,076f, 0.0f, 19,86563f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 140)[02], Local_4.f_160);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 140)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 140)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 140)[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 140)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 140)[02], 19);
	(*&Local_4 + 140)[12] = Function_462(Local_4, "Wv03_E02", 416, Function_53(), 980, -1799,076f, 23,41812f, 2833,738f, 0.0f, 98.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 140)[12], Local_4.f_160);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 140)[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 140)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 140)[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 140)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 140)[12], 19);
	return;
}

var Function_462(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x1502C / 86060
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_334(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_334(bParam4))
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

void Function_463() //Position: 0x15151 / 86353
{
	if (iLocal_221 == 0)
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_155, (*&Local_4 + 200)[4]))
		{
			Function_466();
			Function_433(Local_4.f_112);
			STREAMING_UNLOAD_BOUNDS();
			iLocal_221 = 1;
		}
	}
	else if (iLocal_221 == 1)
	{
		if (IS_ACTOR_IN_VOLUME(bLocal_155, (*&Local_4 + 200)[3]))
		{
			Function_465();
			bLocal_258 = true;
			iLocal_221 = 2;
		}
	}
	else if (iLocal_221 == 2)
	{
		if (Function_440(Local_4.f_136, bLocal_155, 70.0f) || Function_454(Local_4.f_136) < 0)
		{
			Function_443(Local_4.f_136, Global_34573, 1);
			bLocal_339 = false;
			while (bLocal_339 <= 2)
			{
				SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_136, bLocal_339)), 150.0f);
				bLocal_339++;
			}
			Function_464();
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_CHASE_3", 0, 4294967295, 4294967295);
			iLocal_213 = 1;
			iLocal_209 = 1;
			iLocal_221 = 3;
		}
	}
	else if (iLocal_221 == 3)
	{
		if (Function_440(Local_4.f_136, bLocal_155, 30.0f))
		{
			Function_433(Local_4.f_136);
			iLocal_221 = 4;
		}
	}
	else if (iLocal_221 == 4)
	{
		if (!Function_371(Local_4.f_112, 1, 1, 1, 1, 0) && !Function_371(Local_4.f_136, 1, 1, 1, 1, 0))
		{
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			bLocal_258 = false;
			bLocal_219 = true;
			AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
			iLocal_221 = 5;
		}
		else
		{
			Function_431(Local_4.f_136);
		}
	}
	return;
}

void Function_464() //Position: 0x15294 / 86676
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_moreBandits_attack", "Merchant01_moreBandits_attack", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_465() //Position: 0x152F5 / 86773
{
	vLocal_229[03] = { -8.0f, 0.0f, -5.0f };
	vLocal_229[13] = { 12.0f, 0.0f, -10.0f };
	Function_450(Local_4.f_136, 0);
	Function_447(Local_4.f_136, Global_34573, 0);
	Function_442(Local_4.f_136, 70.0f);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_4 + 116)[02], Local_4.f_392, 4, 0, 0, 1, false);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_4 + 116)[12], Local_4.f_396, 4, 0, 0, 1, false);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_136, 2, 0, 1);
	TASK_FOLLOW_AND_ATTACK_OBJECT(false, Global_34573, &(vLocal_229[13]), 6.0f, 8.0f, 0.0f, 0.0f, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_136, true, 0, 1);
	TASK_FOLLOW_AND_ATTACK_OBJECT(false, Global_34573, &(vLocal_229[03]), 6.0f, 8.0f, 0.0f, 0.0f, 0, 1);
	Function_226(&iLocal_165);
	Function_280(Function_456(bLocal_155, Local_4.f_136));
	STREAMING_LOAD_BOUNDS(Function_280(Function_456(bLocal_155, Local_4.f_136)), 50.0f, 1);
	return;
}

void Function_466() //Position: 0x153C2 / 86978
{
	Function_467();
	bLocal_339 = false;
	while (bLocal_339 <= 2)
	{
		bLocal_340 = (*&Local_4 + 116)[bLocal_3392];
		if (Function_318(bLocal_340, 1))
		{
			SET_ACTOR_INVULNERABILITY(bLocal_340, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_340, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_340, 2);
			MEMORY_PREFER_RIDING(bLocal_340, true);
			SET_ACTOR_MIN_SPEED(bLocal_340, 2);
			AI_SET_NAV_MATERIAL_USAGE(bLocal_340, 64, 1);
			DECOR_SET_BOOL(GET_MOUNT(bLocal_340), "bNoInjuryEjection", true);
			Function_301(GET_MOUNT(bLocal_340), 0, 0, 0, 1, 0, 1);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_340, bLocal_158);
		}
		bLocal_339++;
	}
	Function_459(Local_4.f_112, 0);
	Function_458(Local_4.f_112, 0);
	Function_434(Local_4.f_112, bLocal_154, 2);
	return;
}

void Function_467() //Position: 0x15473 / 87155
{
	Local_4.f_136 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Ambush_Wv02"));
	(*&Local_4 + 116)[02] = Function_462(Local_4, "nWv02_BE01", 415, Function_53(), 976, -2276,751f, 16,10034f, 2903,939f, 0.0f, 92.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 116)[02], Local_4.f_136);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 116)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 116)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 116)[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 116)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 116)[02], 19);
	(*&Local_4 + 116)[12] = Function_462(Local_4, "Wv02_M01", 400, Function_53(), 977, -2266,616f, 16,06271f, 2894,616f, 0.0f, 91.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 116)[12], Local_4.f_136);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 116)[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 116)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 116)[12], 40, 0,5f, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 116)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 116)[12], 19);
	return;
}

void Function_468() //Position: 0x1559E / 87454
{
	if (IS_VOLUME_VALID((*&Local_4 + 200)[7]))
	{
		if (IS_OBJECT_IN_VOLUME(bLocal_155, (*&Local_4 + 200)[7]))
		{
			Function_240((*&Local_4 + 308)[11]);
			STREAMING_LOAD_BOUNDS(Function_240((*&Local_4 + 308)[11]), 40.0f, 1);
			DESTROY_VOLUME((*&Local_4 + 200)[7]);
		}
	}
	if (iLocal_220 == 0)
	{
		if (IS_OBJECT_IN_VOLUME(bLocal_155, (*&Local_4 + 200)[2]) && !SQUAD_IS_VALID(Local_4.f_112))
		{
			Function_469();
			iLocal_220 = 1;
			Function_226(&iLocal_177);
		}
	}
	else if (iLocal_220 == 1)
	{
		if ((IS_OBJECT_IN_VOLUME(bLocal_155, (*&Local_4 + 200)[1]) || Function_454(Local_4.f_112) < 0) || Function_452(Local_4.f_112, Global_34573, 1, 0, 0))
		{
			Function_451();
			Function_450(Local_4.f_112, 0);
			Function_449(Local_4.f_112, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_447(Local_4.f_112, Global_34573, 0);
			Function_443(Local_4.f_112, Global_34573, 0);
			Function_442(Local_4.f_112, 70.0f);
			bLocal_339 = false;
			while (bLocal_339 <= 2)
			{
				SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_112, bLocal_339)), 150.0f);
				bLocal_339++;
			}
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_CHASE", 0, 4294967295, 4294967295);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			iLocal_213 = 1;
			bLocal_258 = true;
			iLocal_220 = 2;
			Function_226(&iLocal_177);
		}
	}
	else if (iLocal_220 == 2)
	{
		if (SQUAD_IS_VALID(Local_4.f_112))
		{
			if (Function_441(Local_4.f_112, Global_34573))
			{
				bLocal_219 = true;
				bLocal_251 = true;
			}
			Function_439(Local_4.f_112);
			if (!Function_371(Local_4.f_112, 1, 1, 1, 1, 0))
			{
				Function_226(&iLocal_177);
				iLocal_220 = 3;
				if (!Function_371(Local_4.f_136, 1, 1, 1, 1, 0))
				{
					Function_226(&iLocal_243);
					bLocal_258 = false;
				}
			}
			else
			{
				Function_431(Local_4.f_112);
			}
		}
	}
	else if (iLocal_220 == 3)
	{
		if (Function_288(&iLocal_177) < 2.0f)
		{
			if (bLocal_219)
			{
				if (!iLocal_209 || !bLocal_258)
				{
					Function_430();
					Function_226(&iLocal_243);
					iLocal_212 = 1;
				}
			}
			AUDIO_MUSIC_SET_MOOD("DRAMATIC_HIGH", 0, 4294967295, 4294967295);
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			Function_226(&iLocal_177);
			iLocal_220 = 4;
		}
	}
	else if (iLocal_220 == 4)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_288(&iLocal_177) < 4.0f)
		{
			bLocal_251 = false;
			Function_226(&iLocal_177);
			Function_429(&iLocal_177);
			iLocal_220 = 5;
		}
	}
	return;
}

void Function_469() //Position: 0x157B6 / 87990
{
	Function_472();
	vLocal_229[03] = { -10.0f, 0.0f, -5.0f };
	vLocal_229[13] = { 10.0f, 0.0f, -5.0f };
	bLocal_339 = false;
	while (bLocal_339 <= 2)
	{
		bLocal_340 = (*&Local_4 + 92)[bLocal_3392];
		if (Function_318(bLocal_340, 1))
		{
			SET_ACTOR_INVULNERABILITY(bLocal_340, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_340, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_340, 2);
			MEMORY_PREFER_RIDING(bLocal_340, true);
			AI_RIDING_SET_ENABLED(bLocal_340, 0);
			SET_ACTOR_MIN_SPEED(bLocal_340, 4);
			AI_SET_NAV_MATERIAL_USAGE(bLocal_340, 64, 1);
			DECOR_SET_BOOL(GET_MOUNT(bLocal_340), "bNoInjuryEjection", true);
			Function_301(GET_MOUNT(bLocal_340), 0, 0, 0, 1, 0, 1);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_340, 0);
			SET_ACTOR_VISION_FIELD_OF_VIEW(bLocal_340, 359.0f);
			SET_ACTOR_VISION_XRAY(bLocal_340, true);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_340, bLocal_158);
		}
		bLocal_339++;
	}
	Function_470((*&Local_4 + 92)[02], (*&Local_4 + 308)[12], 1, 1, 1);
	Function_470((*&Local_4 + 92)[12], (*&Local_4 + 308)[13], 1, 1, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_4 + 92)[02], Local_4.f_404, 4, 0, 0, 1, false);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT((*&Local_4 + 92)[12], Local_4.f_408, 4, 0, 0, 1, false);
	Function_460(Local_4.f_112, 0.0f);
	SQUAD_SET_FACTION(Local_4.f_112, 19);
	Function_459(Local_4.f_112, 0);
	Function_458(Local_4.f_112, 0);
	Function_434(Local_4.f_112, bLocal_154, 2);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_112, 2, 0, 1);
	TASK_FOLLOW_AND_ATTACK_OBJECT(false, Global_34573, &(vLocal_229[13]), 6.0f, 10.0f, 0.0f, 0.0f, 0, 1);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_112, true, 0, 1);
	TASK_FOLLOW_AND_ATTACK_OBJECT(false, Global_34573, &(vLocal_229[03]), 6.0f, 10.0f, 0.0f, 0.0f, 0, 1);
	Function_280(Function_456(bLocal_155, Local_4.f_112));
	STREAMING_LOAD_BOUNDS(Function_280(Function_456(bLocal_155, Local_4.f_112)), 50.0f, 1);
	Function_226(&iLocal_165);
	return;
}

void Function_470(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1596E / 88430
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
				Function_471(StackVal, StackVal, StackVal, bParam0, vVar0, iParam2, iParam3, iParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_MOUNTED_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_TO_OBJECT - The actor is NOT valid!!!");
	}
}

void Function_471(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0x15A85 / 88709
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

void Function_472() //Position: 0x15B3E / 88894
{
	Local_4.f_112 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Train_Ambush01"));
	(*&Local_4 + 92)[02] = Function_462(Local_4, "nWv01_BE02", 416, Function_53(), 977, -2093,644f, 47,70827f, 3091,427f, 0.0f, 230.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 92)[02], Local_4.f_112);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 92)[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 92)[02]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 92)[02], 40, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 92)[02], true);
	TASK_STAND_STILL((*&Local_4 + 92)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 92)[02], 19);
	(*&Local_4 + 92)[12] = Function_462(Local_4, "Wv01_E03", 417, Function_53(), 980, -2120,309f, 45,84811f, 3109,251f, -177,1322f, -47,77544f, 175,8279f);
	SQUAD_JOIN((*&Local_4 + 92)[12], Local_4.f_112);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 92)[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 92)[12]);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 92)[12], 41, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 92)[12], true);
	TASK_STAND_STILL((*&Local_4 + 92)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 92)[12], 19);
	return;
}

void Function_473() //Position: 0x15C8A / 89226
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (SQUAD_IS_VALID(Local_4.f_136))
	{
		if (iLocal_221 >= 2)
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_136))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_136, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (!Function_474(Global_34573, bVar1, 150.0f) && IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
						if (IS_ACTOR_VALID(GET_MOUNT(bVar1)))
						{
							RELEASE_ACTOR(GET_MOUNT(bVar1));
						}
						SQUAD_LEAVE(bVar1);
						RELEASE_ACTOR(bVar1);
						TASK_CLEAR(bVar1);
						return;
					}
				}
				bVar0++;
			}
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_112))
	{
		if (iLocal_220 > 2)
		{
			bVar2 = false;
			while (bVar2 <= SQUAD_GET_SIZE(Local_4.f_112))
			{
				bVar3 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_112, bVar2);
				if (IS_ACTOR_VALID(bVar3))
				{
					if (!Function_474(Global_34573, bVar3, 150.0f) && IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar3)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar3));
						if (IS_ACTOR_VALID(GET_MOUNT(bVar3)))
						{
							RELEASE_ACTOR(GET_MOUNT(bVar3));
						}
						SQUAD_LEAVE(bVar3);
						RELEASE_ACTOR(bVar3);
						TASK_CLEAR(bVar3);
						return;
					}
				}
				bVar2++;
			}
		}
	}
	return;
}

bool Function_474(var uParam0, bool bParam1, float fParam2) //Position: 0x15D90 / 89488
{
	float fVar0;
	
	fVar0 = Function_475(uParam0, bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_475(bool bParam0, bool bParam1) //Position: 0x15DAD / 89517
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_476(&uVar0, &uVar3);
	return iVar6;
}

var Function_476(var uParam0, bool bParam1) //Position: 0x15DCC / 89548
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_477() //Position: 0x15DEA / 89578
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

int Function_478() //Position: 0x15DFD / 89597
{
	float fVar0;
	float fVar1;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	UI_SET_PROGRESS_BAR_VAL("HealthMeter", fLocal_186);
	if (Function_288(&iLocal_168) < 1.0f && iLocal_217)
	{
		PRINTSTRING("Companion HP is now represented in meter is");
		PRINTFLOAT(bLocal_186);
		PRINTNL();
		Function_226(&iLocal_168);
	}
	if (iLocal_203 && !iLocal_200)
	{
		return 0;
	}
	if (fLocal_185 < 0.0f)
	{
		fVar1 = (fVar0 - fLocal_185);
	}
	else
	{
		fVar1 = 0.0f;
	}
	if ((iLocal_153 != 0 && !bLocal_211) || iLocal_153 != 1)
	{
		if (((!Function_497(bLocal_155, 64) && !Function_497(bLocal_155, 32)) && Function_386(bLocal_155, 0) < 3.0f) || iLocal_200)
		{
			if (!iLocal_204 && !iLocal_208)
			{
				if (!Function_376() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_496();
					iLocal_215 = 1;
					iLocal_204 = 1;
				}
			}
			if (!iLocal_200)
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_155, (*&Local_4 + 200)[8]))
				{
					bLocal_186 = (bLocal_186 - (fVar1 * (1,3f * 3.0f)));
				}
				else
				{
					bLocal_186 = (bLocal_186 - (fVar1 * (1,3f * 1,3f)));
				}
			}
			else
			{
				bLocal_186 = (bLocal_186 - (fVar1 * 1,3f));
			}
			if (bLocal_186 >= 4.0f)
			{
				bLocal_186 = 0.0f;
			}
		}
		else
		{
			bLocal_186 = (bLocal_186 - (fVar1 * 0,35f));
		}
		if (Function_495(bLocal_154, bLocal_110))
		{
			if (bLocal_258 && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_494();
			}
			bLocal_186 = (bLocal_186 - 4.0f);
		}
		if (IntToFloat(GET_VEHICLE_BUMP_COUNT(bLocal_155)) < 25.0f)
		{
			RESET_VEHICLE_BUMP_COUNT(bLocal_155);
			bLocal_186 = (bLocal_186 - 1.0f);
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (bLocal_257)
				{
					iLocal_188 = RAND_INT_RANGE(true, 3);
				}
				switch (iLocal_188)
				{
					case 0x00000000:
						switch (RAND_INT_RANGE(false, 2))
						{
							case 0x00000000:
								iLocal_212 = 1;
								Function_493();
								iLocal_188++;
								break;
							
							case 0x00000001:
								iLocal_212 = 1;
								Function_492();
								iLocal_188++;
								break;
							
							case 0x00000002:
								iLocal_212 = 1;
								Function_491();
								iLocal_188++;
								break;
						}
						break;
					
					case 0x00000001:
						switch (RAND_INT_RANGE(false, 2))
						{
							case 0x00000000:
								Function_490();
								iLocal_212 = 1;
								iLocal_188++;
								break;
							
							case 0x00000001:
								Function_489();
								iLocal_212 = 1;
								iLocal_188++;
								break;
							
							case 0x00000002:
								Function_488();
								iLocal_212 = 1;
								iLocal_188++;
								break;
						}
						break;
					
					case 0x00000002:
						switch (RAND_INT_RANGE(false, 2))
						{
							case 0x00000000:
								Function_487();
								iLocal_212 = 1;
								iLocal_188++;
								break;
							
							case 0x00000001:
								Function_486();
								iLocal_212 = 1;
								iLocal_188++;
								break;
							
							case 0x00000002:
								Function_485();
								iLocal_212 = 1;
								iLocal_188++;
								break;
						}
						break;
					
					case 0x00000003:
						switch (RAND_INT_RANGE(false, 2))
						{
							case 0x00000000:
								Function_484();
								iLocal_212 = 1;
								iLocal_188 = 0;
								break;
							
							case 0x00000001:
								Function_483();
								iLocal_212 = 1;
								iLocal_188 = 0;
								break;
							
							case 0x00000002:
								Function_482();
								iLocal_212 = 1;
								iLocal_188 = 0;
								break;
						}
						break;
					}
				}
			}
	}
	switch (iLocal_153)
	{
		case 0x00000000:
			if (bLocal_186 > (100.0f * 0,75f))
			{
				if (!Function_376() && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_481();
					iLocal_212 = 1;
				}
				iLocal_153 = 1;
				Function_226(&iLocal_159);
				iLocal_191 = 0;
			}
			break;
		
		case 0x00000001:
			if (iLocal_191 == 0)
			{
				if (bLocal_186 >= (100.0f * 0,6f))
				{
					if (!Function_376() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_481();
						iLocal_212 = 1;
					}
					Function_226(&iLocal_159);
					iLocal_191 = 1;
				}
			}
			else if (iLocal_191 == 1)
			{
				if (bLocal_186 >= (100.0f * 0,4f))
				{
					if (!Function_376() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_480();
						iLocal_212 = 1;
					}
					Function_226(&iLocal_159);
					iLocal_191 = 2;
				}
			}
			else if (iLocal_191 == 2)
			{
				if (bLocal_186 >= (100.0f * 0,25f))
				{
					if (!Function_376() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_479();
						iLocal_212 = 1;
					}
					Function_226(&iLocal_159);
					iLocal_191 = 3;
				}
			}
			else if (iLocal_191 == 3)
			{
				if (bLocal_186 >= (100.0f * 0,05f))
				{
					AI_IGNORE_ACTOR(bLocal_154);
					Function_224();
					Function_226(&iLocal_159);
					iLocal_191 = 4;
				}
			}
			else if (iLocal_191 == 4)
			{
				if (bLocal_186 >= (100.0f * 0,025f))
				{
					if (!IS_ACTOR_ANIM_PLAYING(bLocal_154, "puke"))
					{
						bLocal_211 = true;
						Function_226(&iLocal_159);
						iLocal_153 = 5;
						bLocal_186 = 0.0f;
						iLocal_191 = 0;
					}
				}
			}
			break;
		
		case 0x00000005:
			if (!Function_290(&iLocal_171))
			{
				Function_298(&iLocal_171);
			}
			else if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_154, "fall") || Function_288(&iLocal_171) < 8.0f)
			{
				KILL_ACTOR(bLocal_154);
				return 1;
			}
			break;
	}
	fLocal_185 = fVar0;
	return 0;
}

void Function_479() //Position: 0x16252 / 90706
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_DickensHealth_worseFurther", "Merchant01_DickensHealth_worseFurther", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_480() //Position: 0x162C3 / 90819
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_DickensHealth_worse", "Merchant01_DickensHealth_worse", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_481() //Position: 0x16326 / 90918
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_DickensHealth", "Merchant01_DickensHealth", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_482() //Position: 0x1637D / 91005
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_HighDelirium_v3_AA1", "Merchant01_HighDelirium_v3_AA1", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_HighDelirium_v3_AA2", "Merchant01_HighDelirium_v3_AA2", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_HighDelirium_v3_AB", "Merchant01_HighDelirium_v3_AB", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_HighDelirium_v3_AC", "Merchant01_HighDelirium_v3_AC", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_483() //Position: 0x164BD / 91325
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_HighDelirium_v2_AA", "Merchant01_HighDelirium_v2_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_HighDelirium_v2_AB", "Merchant01_HighDelirium_v2_AB", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_484() //Position: 0x16567 / 91495
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_HighDelirium_v1_AA", "Merchant01_HighDelirium_v1_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_HighDelirium_v1_AB", "Merchant01_HighDelirium_v1_AB", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_485() //Position: 0x16611 / 91665
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_medDelirium_v3_AA", "Merchant01_medDelirium_v3_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_medDelirium_v3_AB", "Merchant01_medDelirium_v3_AB", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_486() //Position: 0x166B7 / 91831
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_medDelirium_v2_AA", "Merchant01_medDelirium_v2_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_medDelirium_v2_AB", "Merchant01_medDelirium_v2_AB", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_487() //Position: 0x1675D / 91997
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_medDelirium_v1_AA", "Merchant01_medDelirium_v1_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_medDelirium_v1_AB", "Merchant01_medDelirium_v1_AB", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_488() //Position: 0x16803 / 92163
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_lowDelirium_v3_AA", "Merchant01_lowDelirium_v3_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_lowDelirium_v3_AB", "Merchant01_lowDelirium_v3_AB", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_489() //Position: 0x168A9 / 92329
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_lowDelirium_v2_AA", "Merchant01_lowDelirium_v2_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_lowDelirium_v2_AB", "Merchant01_lowDelirium_v2_AB", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_490() //Position: 0x1694F / 92495
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_lowDelirium_v1_AA", "Merchant01_lowDelirium_v1_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_lowDelirium_v1_AB", "Merchant01_lowDelirium_v1_AB", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_491() //Position: 0x169F5 / 92661
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveCareful_v3_AA", "Merchant01_driveCareful_v3_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveCareful_v3_AB", "Merchant01_driveCareful_v3_AB", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_492() //Position: 0x16A9F / 92831
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveCareful_v2_AA", "Merchant01_driveCareful_v2_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveCareful_v2_AB", "Merchant01_driveCareful_v2_AB", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_493() //Position: 0x16B49 / 93001
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_driveCareful_v1_AA", "Merchant01_driveCareful_v1_AA", false, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveCareful_v1_AB", "Merchant01_driveCareful_v1_AB", true, 1, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(false, "Merchant01_driveCareful_v1_AC", "Merchant01_driveCareful_v1_AC", true, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_494() //Position: 0x16C3C / 93244
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_DickensShot", "Merchant01_DickensShot", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_495(int iParam0, bool bParam1) //Position: 0x16C8F / 93327
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		LOG_ERROR("Failed to create iterator in ActorInjuredLastFrame!");
		return 0;
	}
	ITERATE_EVERYWHERE(bVar0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 3);
	ITERATE_IN_LAYOUT(bVar0, GET_EVENT_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar4 = GET_EVENT_FROM_OBJECT(bVar1);
		if (IS_EVENT_VALID(bVar4))
		{
			bVar2 = GET_EVENT_TARGET_AS_OBJECT(bVar4);
			if (IS_OBJECT_VALID(bVar2))
			{
				if (GET_OBJECT_TYPE(bVar2) == 15)
				{
					bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (bVar3 == iParam0)
						{
							switch (GET_EVENT_TYPE(bVar4))
							{
								case 0x00000007:
								case 0x00000008:
								case 0x00000005:
								case 0x00000001:
									return 1;
									break;
								}
							}
						}
					}
				}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 0;
}

void Function_496() //Position: 0x16D77 / 93559
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_drivesOffRoad", "Merchant01_drivesOffRoad", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_497(bool bParam0, int iParam1) //Position: 0x16DCE / 93646
{
	return Function_153(iParam1, Function_498(bParam0));
}

bool Function_498(bool bParam0) //Position: 0x16DDE / 93662
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = bParam0;
		if (IS_ACTOR_RIDING(bVar0))
		{
			bVar0 = GET_MOUNT(bVar0);
		}
		if (IS_ACTOR_INSIDE_VEHICLE(bVar0))
		{
			bVar0 = GET_VEHICLE(bVar0);
			while (!IS_ACTOR_VALID(bVar1) && bVar2 > GET_NUM_DRAFT_POSITIONS(bVar0))
			{
				bVar1 = GET_DRAFT_ACTOR(bVar2, bVar0);
				bVar2++;
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				bVar0 = bVar1;
			}
			else
			{
				bVar0 = bParam0;
			}
		}
		return GET_ACTOR_GROUND_MATERIAL(bVar0);
	}
	return 0;
}

void Function_499() //Position: 0x16E4C / 93772
{
	if (!iLocal_256 && !bLocal_211)
	{
		if (GET_NUM_DRAFTED_ACTORS(bLocal_155) <= 2)
		{
			Function_500();
			iLocal_256 = 1;
			iLocal_212 = 1;
		}
	}
	return;
}

void Function_500() //Position: 0x16E70 / 93808
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_losesStageCoachHorse", "Merchant01_losesStageCoachHorse", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_501() //Position: 0x16ED5 / 93909
{
	switch (bLocal_151)
	{
		case 0x00000006:
			Function_514(&Local_111, 1);
			bLocal_110 = CREATE_LAYOUT(Function_53());
			Function_513();
			Function_510();
			Function_509();
			Function_415();
			Function_194(1, 0, 1);
			iLocal_199 = 0;
			Function_508(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Merchant01"));
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_03", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			if ((iLocal_150 != 99 && Function_293(&Local_111)) || !CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/MERCHANT_01/MERCHANT_01"))
			{
				bLocal_151 = 8;
			}
			else
			{
				bLocal_151 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_336(&bLocal_118))
			{
				if (Function_281("$/cutscene/MERCHANT_01/MERCHANT_01", &iLocal_142, &Local_111, &iLocal_150, 67070, 66982, 66889, 66743, 66447, 54418, 0, 1, 1, 2, 2, 0, 1))
				{
					bLocal_151 = 8;
				}
			}
			break;
		
		case 0x00000008:
			if (Function_341())
			{
				bLocal_151 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
				Function_324();
			}
			else
			{
				cLocal_149 = CREATE_OBJECT_ITERATOR(Local_4);
				CAMERA_RESET(0);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_299();
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 164)[1]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 164)[1]);
				CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 164)[1], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 164)[1]);
				Function_506(&uLocal_259, bLocal_110);
				Function_307(&(Local_299[017]), bLocal_154, "Merchant", 0, 0x5f5e100, 1);
				Function_298(&iLocal_159);
				Function_298(&iLocal_162);
				Function_298(&iLocal_174);
				Function_298(&iLocal_243);
				iLocal_150 = iLocal_108;
				bLocal_151 = false;
				Function_503(&Local_111, &iLocal_150, &bLocal_151);
				Function_502(StackVal, StackVal, StackVal, StackVal, StackVal, Function_324(), Local_111);
				switch (iLocal_150)
				{
					case 0x00000000:
						break;
					
					case 0x00000065:
						Function_228();
						break;
					}
			}
			break;
	}
	return;
}

void Function_502(struct<25> Param0) //Position: 0x170E1 / 94433
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_150 = 0;
			break;
		
		case 0x00000002:
			iLocal_150 = 101;
			break;
	}
}

void Function_503(int iParam0, var uParam1, int iParam2) //Position: 0x1710B / 94475
{
	if (Function_293(iParam0))
	{
		*uParam1 = Function_505(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_504();
	}
	return;
}

void Function_504() //Position: 0x1713F / 94527
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

var Function_505(int iParam0) //Position: 0x17190 / 94608
{
	if (Function_293(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

int Function_506(var uParam0, bool bParam1) //Position: 0x171A8 / 94632
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_507(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_507(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_507(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_507(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_507(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_507(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_507(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_507(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_507(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_507(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_507(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_507(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_507(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_507(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x17848 / 96328
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
	Function_76(iParam0 + 8, bParam4);
	return 1;
}

void Function_508(bool bParam0) //Position: 0x1790B / 96523
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

void Function_509() //Position: 0x1794D / 96589
{
	Function_343(&bLocal_118, 1202, 2, 0);
	Function_343(&bLocal_118, 981, 2, 0);
	Function_343(&bLocal_118, 987, 2, 0);
	return;
}

void Function_510() //Position: 0x17974 / 96628
{
	Function_511(&bLocal_128, "merchant01", 10, 0);
	Function_511(&bLocal_128, "custom/sit_wounded", 8, 0);
	return;
}

var Function_511(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x179AE / 96686
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_512(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_339(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_512(var uParam0, int iParam1, int iParam2) //Position: 0x179E6 / 96742
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_187(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_339(uParam0[iVar03], 4);
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

void Function_513() //Position: 0x17AAA / 96938
{
	return;
}

void Function_514(int iParam0, bool bParam1) //Position: 0x17AB0 / 96944
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_520(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_293(iParam0))
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
	if (!Function_293(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_215();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_244();
	Function_284();
	Function_233("");
	Function_519(0);
	Function_518();
	Function_208();
	Function_207();
	ENABLE_JOURNAL_REPLAY(0);
	Function_517();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_356(0, 0x40400000);
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
	Function_516(13);
	Function_516(14);
	Function_516(25);
	Function_516(24);
	Function_516(12);
	Function_516(27);
	Function_516(26);
	Function_516(15);
	Function_515();
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

void Function_515() //Position: 0x17ED4 / 98004
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

void Function_516(int iParam0) //Position: 0x17F48 / 98120
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_517() //Position: 0x17F68 / 98152
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

void Function_518() //Position: 0x17FA5 / 98213
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_519(int iParam0) //Position: 0x17FB9 / 98233
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_211())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_520(int iParam0, int iParam1) //Position: 0x17FEE / 98286
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
			Function_521(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_521(int iParam0) //Position: 0x18071 / 98417
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

void Function_522() //Position: 0x180BF / 98495
{
	return;
}

bool Function_523(int iParam0) //Position: 0x180C5 / 98501
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
			Function_524(iParam0, 1);
			return 1;
		}
	}
	Function_524(iParam0, 0);
	return 0;
}

void Function_524(int iParam0, bool bParam1) //Position: 0x1814C / 98636
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

bool Function_525(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x18170 / 98672
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
		Function_524(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_543(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_542(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_542(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_529(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_524(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_528(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_527(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_528(&bVar17);
														strcpy(&Var18, "", 64);
														Function_526(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_233(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_527(StackVal, iParam2, bVar17);
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
	Function_524(iParam2, 0);
	return 0;
}

void Function_526(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x18509 / 99593
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

void Function_527(var uParam0, int iParam1, bool bParam2) //Position: 0x185F4 / 99828
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

void Function_528(bool bParam0) //Position: 0x1866A / 99946
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_529(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1868C / 99980
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
			return Function_540(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_533(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_540(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_530(iParam0, bVar2);
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
						bVar2 = Function_540(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_530(iParam0, bVar2);
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

var Function_530(int iParam0, bool bParam1) //Position: 0x187D6 / 100310
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
				bParam1 = Function_532(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_531(16);
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
				bParam1 = Function_532(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_531(256);
			}
		}
	}
	return bParam1;
}

bool Function_531(int iParam0) //Position: 0x18909 / 100617
{
	return 2 | iParam0;
}

int Function_532(int iParam0) //Position: 0x18913 / 100627
{
	return 4 | iParam0;
}

int Function_533(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1891D / 100637
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
				iParam3 = Function_539(iParam0, iParam1, bParam4);
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
			return Function_531(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_534(iParam0, iParam1, 0, bParam4);
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
			return Function_531(16);
		}
	}
	return 0;
}

int Function_534(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x189CF / 100815
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_538(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_537(iVar0, 3, 1, bParam3))
			{
				if (!Function_542(iParam0, 8, 1))
				{
					return Function_536(64, 1024, bParam2);
				}
			}
			return Function_535(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_537(iVar0, 2, 1, bParam3))
			{
				if (!Function_542(iParam0, 32, 1))
				{
					return Function_536(64, 1024, bParam2);
				}
			}
			return Function_535(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_537(iVar0, 1, 1, bParam3))
			{
				if (!Function_542(iParam0, 64, 1))
				{
					return Function_536(64, 1024, bParam2);
				}
			}
			return Function_535(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_537(iVar0, 3, 1, bParam3))
			{
				if (!Function_542(iParam0, 128, 1))
				{
					return Function_536(64, 1024, bParam2);
				}
			}
			return Function_535(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_537(iVar0, 1, 1, bParam3))
			{
				if (!Function_542(iParam0, 1024, 1))
				{
					return Function_536(64, 1024, bParam2);
				}
			}
			return Function_535(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_537(iVar0, 1, 1, bParam3))
			{
				if (!Function_542(iParam0, 1024, 1))
				{
					return Function_536(64, 1024, bParam2);
				}
			}
			return Function_535(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_535(int iParam0, int iParam1, bool bParam2) //Position: 0x18B89 / 101257
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_536(int iParam0, int iParam1, bool bParam2) //Position: 0x18B9E / 101278
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_537(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x18BB3 / 101299
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_538(int iParam0) //Position: 0x18BD0 / 101328
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

int Function_539(var uParam0, int iParam1, bool bParam2) //Position: 0x18C3F / 101439
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_538(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_537(iVar0, 3, 1, bParam2))
			{
				if (!Function_542(uParam0, 8, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000009:
			if (Function_537(iVar0, 3, 1, bParam2))
			{
				if (!Function_542(uParam0, 8, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x0000006E:
			if (Function_537(iVar0, 2, 1, bParam2))
			{
				if (!Function_542(uParam0, 16, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x0000005B:
			if (Function_537(iVar0, 2, 1, bParam2))
			{
				if (!Function_542(uParam0, 32, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000031:
			if (Function_537(iVar0, 1, 1, bParam2))
			{
				if (!Function_542(uParam0, 64, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000007:
			if (Function_537(iVar0, 3, 1, bParam2))
			{
				if (!Function_542(uParam0, 128, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000008:
			if (Function_537(iVar0, 2, 1, bParam2))
			{
				if (!Function_542(uParam0, 256, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000014:
			if (Function_537(iVar0, 1, 1, bParam2))
			{
				if (!Function_542(uParam0, 512, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000018:
			if (Function_537(iVar0, 1, 1, bParam2))
			{
				if (!Function_542(uParam0, 512, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000057:
			if (Function_537(iVar0, 1, 1, bParam2))
			{
				if (!Function_542(uParam0, 1024, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000058:
			if (Function_537(iVar0, 1, 1, bParam2))
			{
				if (!Function_542(uParam0, 1024, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_540(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x18E5A / 101978
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
						return Function_539(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_542(iParam0, 2, 1))
					{
						return Function_532(8);
					}
					return Function_531(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_542(iParam0, 4, 1))
					{
						return Function_532(16);
					}
					return Function_531(16);
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
							return Function_534(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_542(iParam0, 2, 1))
						{
							return Function_532(128);
						}
						return Function_531(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_542(iParam0, 4, 1))
						{
							return Function_532(256);
						}
						return Function_531(256);
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
						return Function_534(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_542(iParam0, 2, 1))
					{
						return Function_532(8);
					}
					return Function_531(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_542(iParam0, 4, 1))
					{
						return Function_532(16);
					}
					return Function_531(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_541(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_542(iParam0, 2, 1))
					{
						return Function_532(8);
					}
					return Function_531(8);
				}
				if (!Function_542(iParam0, 4, 1))
				{
					return Function_532(16);
				}
				return Function_531(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_534(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_545(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_531(128);
							}
							if (!Function_542(iParam0, 2, 1))
							{
								return Function_532(8);
							}
							return Function_531(8);
						}
						if (iParam4 == 2)
						{
							if (Function_545(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_531(256);
							}
							if (!Function_542(iParam0, 4, 1))
							{
								return Function_532(16);
							}
							return Function_531(16);
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

int Function_541(int iParam0, var uParam1, bool bParam2) //Position: 0x19119 / 102681
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_538(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_537(iVar0, 2, 1, bParam2))
			{
				if (!Function_542(iParam0, 16, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x0000005B:
			if (Function_537(iVar0, 2, 1, bParam2))
			{
				if (!Function_542(iParam0, 32, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000057:
			if (Function_537(iVar0, 1, 1, bParam2))
			{
				if (!Function_542(iParam0, 1024, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		case 0x00000058:
			if (Function_537(iVar0, 1, 1, bParam2))
			{
				if (!Function_542(iParam0, 1024, 1))
				{
					return Function_532(64);
				}
			}
			return Function_531(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_542(int iParam0, bool bParam1, bool bParam2) //Position: 0x1922D / 102957
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

int Function_543(int iParam0) //Position: 0x19255 / 102997
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

void Function_544() //Position: 0x19286 / 103046
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(true, "Merchant01_losesStageCoachHorse2", "Merchant01_losesStageCoachHorse2", false, 1, 1, 0, 1);
	Function_222(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_545(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x192ED / 103149
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

bool Function_546(int iParam0) //Position: 0x193A6 / 103334
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_547(bool bParam0) //Position: 0x193C4 / 103364
{
	switch (bParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000069:
		case 0x0000006A:
			return 0;
			break;
	}
	return 1;
}

void Function_548(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x193FB / 103419
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

