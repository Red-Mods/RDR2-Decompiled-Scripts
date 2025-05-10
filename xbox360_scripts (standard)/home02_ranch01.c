//Decompiled with MagicRDR v1.0
//Function Count : 674
//Statics Count : 1039
//Natives Count : 769
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1817> Local_4 = { 0, 1, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 4, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_532 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_602 = 99;
	iLocal_603 = 6;
	Local_595 = 1000;
	while (Function_273())
	{
		Function_227();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	SET_ALLOW_RIDE_BY_AI(bLocal_607, 1);
	CLEAR_ACTOR_MIN_SPEED(bLocal_606);
	CLEAR_ACTOR_MAX_SPEED(bLocal_606);
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_606);
	vVar0 = { -77,638f, 117,517f, 1417,121f };
	vVar3 = { -0,857f, 129,9f, 1444,653f };
	bVar6 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD(false, &vVar0, 4);
	TASK_DISMOUNT(false, 1);
	TASK_GO_TO_COORD(false, &vVar3, 1);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_606, bVar6);
	TASK_SEQUENCE_RELEASE(bVar6, 1);
	Function_225(13, 0, 1, 1, 1);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_606);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_607);
	Function_225(12, 0, 0, 1, 1);
	Function_225(11, 0, 0, 1, 1);
	Function_224(bLocal_531);
	Function_224(Local_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_223();
	Function_222();
	Function_196(bLocal_628, 1, 0, 1, 1, 1, 1, 1);
	Function_192(2, 0, 0);
	Function_170();
	Function_166(&bLocal_539);
	Function_164();
	if (IS_ITERATOR_VALID(bLocal_605))
	{
		DESTROY_ITERATOR(bLocal_605);
	}
	RELEASE_LAYOUT_REF(bLocal_531);
	if (bLocal_627)
	{
		Function_24(Local_532, 1, 1, 1, 0);
	}
	else if (bLocal_628)
	{
		Function_20(Local_532);
	}
	else
	{
		Function_2(Local_532);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x157 / 343
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x178 / 376
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x193 / 403
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x1B4 / 436
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x1CA / 458
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

void Function_7(int iParam0) //Position: 0x266 / 614
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x287 / 647
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

void Function_9() //Position: 0x2CD / 717
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x2E6 / 742
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x339 / 825
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

struct<16> Function_12(int iParam0) //Position: 0x45D / 1117
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x482 / 1154
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x4A2 / 1186
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x4B9 / 1209
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x4D4 / 1236
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x71B / 1819
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x744 / 1860
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

bool Function_19(int iParam0) //Position: 0x768 / 1896
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x77D / 1917
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x79B / 1947
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

struct<16> Function_22(int iParam0) //Position: 0x841 / 2113
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x86B / 2155
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xAC1 / 2753
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

void Function_25() //Position: 0xBAE / 2990
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

int Function_26(int iParam0, bool bParam1) //Position: 0xBDE / 3038
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

int Function_27(int iParam0) //Position: 0xC1B / 3099
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xC35 / 3125
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xC4B / 3147
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF42 / 3906
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

void Function_31(char* cParam0, int iParam1) //Position: 0xFAE / 4014
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0xFE5 / 4069
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

bool Function_33(var uParam0, int iParam1) //Position: 0x105D / 4189
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x1070 / 4208
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

int Function_35(int iParam0) //Position: 0x1111 / 4369
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x114E / 4430
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1161 / 4449
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

void Function_38(int iParam0, int iParam1) //Position: 0x1373 / 4979
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x13AD / 5037
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

bool Function_40() //Position: 0x13EF / 5103
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x13F8 / 5112
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

void Function_42() //Position: 0x1449 / 5193
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

void Function_43() //Position: 0x147C / 5244
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

void Function_44() //Position: 0x1582 / 5506
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

void Function_45() //Position: 0x15B5 / 5557
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

void Function_46() //Position: 0x1743 / 5955
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

void Function_47() //Position: 0x18F7 / 6391
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x1905 / 6405
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

var Function_49() //Position: 0x1AF6 / 6902
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1B0B / 6923
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1BA6 / 7078
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1E41 / 7745
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

var Function_53() //Position: 0x246E / 9326
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x2476 / 9334
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2487 / 9351
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x257C / 9596
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2595 / 9621
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x25FA / 9722
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x260C / 9740
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x261E / 9758
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

int Function_61(int iParam0) //Position: 0x274E / 10062
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x275D / 10077
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x2796 / 10134
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x27D3 / 10195
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x296D / 10605
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

int Function_66(bool bParam0) //Position: 0x2B87 / 11143
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2BC8 / 11208
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

struct<8> Function_68() //Position: 0x2C51 / 11345
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

struct<8> Function_69() //Position: 0x2CE8 / 11496
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

void Function_70() //Position: 0x2D67 / 11623
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2D8D / 11661
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

void Function_72() //Position: 0x2F97 / 12183
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

bool Function_73(vector3 vParam0) //Position: 0x3038 / 12344
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3050 / 12368
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

vector3 Function_75() //Position: 0x3137 / 12599
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x3140 / 12608
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x314F / 12623
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3165 / 12645
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x322C / 12844
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x3249 / 12873
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

bool Function_81(int iParam0) //Position: 0x3725 / 14117
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x373B / 14139
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x375A / 14170
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3774 / 14196
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x37DB / 14299
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

void Function_86() //Position: 0x39FB / 14843
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3A7B / 14971
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3DCD / 15821
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

int Function_89(int iParam0) //Position: 0x3E50 / 15952
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3E6A / 15978
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3E98 / 16024
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x4136 / 16694
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

void Function_93(int iParam0, int iParam1) //Position: 0x42F9 / 17145
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x4557 / 17751
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

int Function_95() //Position: 0x46DC / 18140
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

void Function_96() //Position: 0x477B / 18299
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

void Function_97(int iParam0) //Position: 0x482A / 18474
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

var Function_98(int iParam0) //Position: 0x4888 / 18568
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

int Function_99(int iParam0, bool bParam1) //Position: 0x4917 / 18711
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

var Function_100(int iParam0, int iParam1) //Position: 0x4AB4 / 19124
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

void Function_101() //Position: 0x4AF5 / 19189
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4B0B / 19211
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4B4B / 19275
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4B8B / 19339
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4B9A / 19354
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

int Function_106(int iParam0) //Position: 0x4D62 / 19810
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

var Function_107() //Position: 0x4DF7 / 19959
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4E1C / 19996
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x52D7 / 21207
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

var Function_110(int iParam0) //Position: 0x55EC / 21996
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x568F / 22159
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

int Function_112(int iParam0, bool bParam1) //Position: 0x588A / 22666
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5A26 / 23078
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5AF1 / 23281
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

void Function_115(int iParam0) //Position: 0x63E1 / 25569
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6550 / 25936
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x6656 / 26198
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x6683 / 26243
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

var Function_119(vector3 vParam0) //Position: 0x66DA / 26330
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x6728 / 26408
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x677C / 26492
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

void Function_122() //Position: 0x691A / 26906
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6920 / 26912
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

void Function_124(bool bParam0, int iParam1) //Position: 0x69C4 / 27076
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x6A19 / 27161
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6A2F / 27183
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6A80 / 27264
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

void Function_128(var uParam0, int iParam1) //Position: 0x6AAD / 27309
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6ABC / 27324
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6AD3 / 27347
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6AE2 / 27362
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

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6C2C / 27692
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

bool Function_133() //Position: 0x6C77 / 27767
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6CA4 / 27812
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

int Function_135(int iParam0) //Position: 0x6E54 / 28244
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6EAB / 28331
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

var Function_137(int iParam0) //Position: 0x6ED0 / 28368
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x6F26 / 28454
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

bool Function_139(bool bParam0) //Position: 0x6F85 / 28549
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x6F91 / 28561
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x6FAD / 28589
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

int Function_142(int iParam0, int iParam1) //Position: 0x6FFF / 28671
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

int Function_143(int iParam0, int iParam1) //Position: 0x7072 / 28786
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x70CE / 28878
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

int Function_145(int iParam0, int iParam1) //Position: 0x713F / 28991
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x7199 / 29081
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x7445 / 29765
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

void Function_148(int iParam0, bool bParam1) //Position: 0x76D4 / 30420
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

void Function_149() //Position: 0x7733 / 30515
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

var Function_150(int iParam0, int iParam1) //Position: 0x77AE / 30638
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

int Function_151(int iParam0) //Position: 0x83A0 / 33696
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x83B5 / 33717
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x8404 / 33796
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x8411 / 33809
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x8462 / 33890
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

bool Function_156(int iParam0, int iParam1) //Position: 0x84D0 / 34000
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x84E3 / 34019
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

var Function_158(int iParam0) //Position: 0x85E2 / 34274
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

bool Function_159(var uParam0, int iParam1) //Position: 0x863A / 34362
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x8656 / 34390
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

bool Function_161(int iParam0) //Position: 0x86AD / 34477
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x86BF / 34495
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

void Function_163(var uParam0) //Position: 0x86F3 / 34547
{
	if (uParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (uParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (uParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (uParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_192(4, 0, 0);
		}
	}
	return;
}

void Function_164() //Position: 0x875A / 34650
{
	Function_165();
	return;
}

void Function_165() //Position: 0x8763 / 34659
{
	Function_166(&Local_4 + 4);
	Function_166(&Local_4 + 20);
	Function_166(&Local_4 + 108);
	Function_166(&Local_4 + 280);
	Function_166(&Local_4 + 452);
	Function_166(&Local_4 + 540);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_166(bool bParam0) //Position: 0x879B / 34715
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_167(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_167(var uParam0, int iParam1) //Position: 0x87C1 / 34753
{
	if (Function_169(uParam0[iParam13], 4))
	{
		if (Function_169(uParam0[iParam13], 1))
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
			Function_168(uParam0[iParam13], 1);
			Function_168(uParam0[iParam13], 2);
			Function_168(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_168(var uParam0, int iParam1) //Position: 0x88EF / 35055
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_169(int iParam0, int iParam1) //Position: 0x8909 / 35081
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_170() //Position: 0x8926 / 35110
{
	AUDIO_SET_MAX_CREATURE_FOOTSTEP_UPDATES(6);
	UI_HIDE("RacePosition");
	Function_189(13, 0, 1);
	DECOR_REMOVE(Global_34573, "herding");
	Function_188();
	Function_187();
	Function_186();
	Function_185();
	Function_184();
	if (IS_BLIP_VALID(bLocal_865))
	{
		REMOVE_BLIP(bLocal_865);
	}
	REMOVE_OBJECT_ATTACHMENT(bLocal_930);
	Function_183(&bLocal_937);
	Function_183(&bLocal_931);
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (IS_OBJECT_VALID(Local_986))
	{
		DESTROY_OBJECT(Local_986);
	}
	if (IS_OBJECT_VALID(bLocal_866))
	{
		Function_182();
		DESTROY_OBJECT(bLocal_866);
	}
	if (IS_ACTOR_VALID(bLocal_859))
	{
		DESTROY_ACTOR(bLocal_859);
	}
	if (IS_ACTOR_VALID(bLocal_860))
	{
		RELEASE_ACTOR(bLocal_860);
	}
	if (IS_ACTOR_VALID(bLocal_606))
	{
		AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(bLocal_606, false);
	}
	if (SQUAD_IS_VALID(Local_986.f_44))
	{
		Function_180(&Local_986 + 44, 0, 0);
		RELEASE_OBJECT_REF(Local_986.f_44);
	}
	if (SQUAD_IS_VALID(Local_986.f_48))
	{
		Function_180(&Local_986 + 48, 0, 0);
		RELEASE_OBJECT_REF(Local_986.f_48);
	}
	if (SQUAD_IS_VALID(Local_986.f_52))
	{
		Function_180(&Local_986 + 52, 0, 0);
		RELEASE_OBJECT_REF(Local_986.f_52);
	}
	if (SQUAD_IS_VALID(Local_986.f_56))
	{
		Function_180(&Local_986 + 56, 0, 0);
		RELEASE_OBJECT_REF(Local_986.f_56);
	}
	if (IS_OBJECT_VALID(bLocal_929))
	{
		DESTROY_OBJECT(bLocal_929);
	}
	if (IS_OBJECT_VALID(Local_1017[02]))
	{
		Function_171();
	}
	return;
}

void Function_171() //Position: 0x8A7E / 35454
{
	TRAIN_RELEASE_TRAIN(bLocal_840, 200.0f);
	Function_173();
	Function_172(&Local_1017);
	return;
}

void Function_172(int iParam0) //Position: 0x8A98 / 35480
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			DESTROY_VOLUME(StackVal);
		}
		iVar0++;
	}
	return;
}

void Function_173() //Position: 0x8ACD / 35533
{
	if (IS_LAYOUTREF_VALID(Local_459))
	{
		Function_179();
	}
	if (IS_LAYOUTREF_VALID(Local_468))
	{
		Function_178();
	}
	if (IS_LAYOUTREF_VALID(Local_470))
	{
		Function_177();
	}
	if (IS_LAYOUTREF_VALID(Local_485))
	{
		Function_176();
	}
	if (IS_LAYOUTREF_VALID(Local_505))
	{
		Function_175();
	}
	if (IS_LAYOUTREF_VALID(Local_529))
	{
		Function_174();
	}
	return;
}

void Function_174() //Position: 0x8B1B / 35611
{
	RELEASE_LAYOUT_REF(Local_529);
	return;
}

void Function_175() //Position: 0x8B27 / 35623
{
	Function_166(&Local_505 + 4);
	RELEASE_LAYOUT_REF(Local_505);
	return;
}

void Function_176() //Position: 0x8B3B / 35643
{
	Function_166(&Local_485 + 4);
	RELEASE_LAYOUT_REF(Local_485);
	return;
}

void Function_177() //Position: 0x8B4F / 35663
{
	Function_166(&Local_470 + 4);
	RELEASE_LAYOUT_REF(Local_470);
	return;
}

void Function_178() //Position: 0x8B63 / 35683
{
	RELEASE_LAYOUT_REF(Local_468);
	return;
}

void Function_179() //Position: 0x8B6F / 35695
{
	Function_166(&Local_459 + 4);
	RELEASE_LAYOUT_REF(Local_459);
	return;
}

void Function_180(var uParam0, bool bParam1, bool bParam2) //Position: 0x8B83 / 35715
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
				if (!Function_181(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_181(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x8BFF / 35839
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_182() //Position: 0x8C19 / 35865
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

void Function_183(bool bParam0) //Position: 0x8C44 / 35908
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (IS_ATTACHMENT_VALID((*bParam0)[iVar0]))
		{
			REMOVE_OBJECT_ATTACHMENT((*bParam0)[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_184() //Position: 0x8C75 / 35957
{
	Function_166(&Local_4 + 540);
	return;
}

void Function_185() //Position: 0x8C83 / 35971
{
	Function_166(&Local_4 + 452);
	return;
}

void Function_186() //Position: 0x8C91 / 35985
{
	Function_166(&Local_4 + 280);
	return;
}

void Function_187() //Position: 0x8C9F / 35999
{
	Function_166(&Local_4 + 108);
	return;
}

void Function_188() //Position: 0x8CAC / 36012
{
	Function_166(&Local_4 + 20);
	return;
}

void Function_189(int iParam0, bool bParam1, bool bParam2) //Position: 0x8CB9 / 36025
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
						Function_191(bVar1);
					}
				}
				Function_190(bVar0);
			}
		}
	}
	return;
}

void Function_190(bool bParam0) //Position: 0x8DB0 / 36272
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

void Function_191(bool bParam0) //Position: 0x8DDC / 36316
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

void Function_192(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8E08 / 36360
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
		Function_193(Global_16524, bVar0, 1);
	}
	return;
}

void Function_193(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8EE5 / 36581
{
	int iVar0;
	
	Function_195(bParam0);
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
	Function_194();
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

void Function_194() //Position: 0x905E / 36958
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_195(bool bParam0) //Position: 0x906A / 36970
{
	switch (bParam0)
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

void Function_196(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x90B0 / 37040
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_221());
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
	Function_182();
	CLEAR_PRINTED_OBJECTIVE();
	Function_220();
	Function_218(0);
	Function_217();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_216();
	Function_215();
	Function_182();
	ENABLE_JOURNAL_REPLAY(1);
	Function_214(1);
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
		Function_213(Global_34573);
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
	Function_212(Global_28178);
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
	Function_211(1178687);
	Function_209(33039);
	Function_208(0x218003f);
	Function_207(4194560);
	Function_206();
	Function_205();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_202(0, 1, 1);
	}
	else
	{
		Function_202(0, 1, 1);
	}
	Function_201();
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
	Function_197();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_197() //Position: 0x92A1 / 37537
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
		if (Function_200() > 3)
		{
			bVar0 *= 2;
		}
		Function_198(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_198(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x92F7 / 37623
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_199((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_199(bool bParam0) //Position: 0x933D / 37693
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_200() //Position: 0x9362 / 37730
{
	return Global_12976.f_156;
}

void Function_201() //Position: 0x936D / 37741
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

void Function_202(int iParam0, bool bParam1, int iParam2) //Position: 0x9397 / 37783
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
			Function_203(Global_29006);
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

void Function_203(int iParam0) //Position: 0x94A2 / 38050
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_204())
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

bool Function_204() //Position: 0x9521 / 38177
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

void Function_205() //Position: 0x957E / 38270
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

void Function_206() //Position: 0x95A4 / 38308
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

void Function_207(int iParam0) //Position: 0x95CA / 38346
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_208(int iParam0) //Position: 0x95E7 / 38375
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_209(int iParam0) //Position: 0x95FA / 38394
{
	Function_210(&Global_28842, iParam0);
	return;
}

void Function_210(var uParam0, int iParam1) //Position: 0x9608 / 38408
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_211(bool bParam0) //Position: 0x9623 / 38435
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_212(int iParam0) //Position: 0x9650 / 38480
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

void Function_213(bool bParam0) //Position: 0x9717 / 38679
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

void Function_214(bool bParam0) //Position: 0x9793 / 38803
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

void Function_215() //Position: 0x9807 / 38919
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

void Function_216() //Position: 0x9848 / 38984
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

void Function_217() //Position: 0x9889 / 39049
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_218(int iParam0) //Position: 0x989D / 39069
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_219())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_219() //Position: 0x98D9 / 39129
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

void Function_220() //Position: 0x98FE / 39166
{
	Global_8722 = 0.0f;
	return;
}

int Function_221() //Position: 0x9908 / 39176
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_222() //Position: 0x9922 / 39202
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

void Function_223() //Position: 0x9A3C / 39484
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_224(bool bParam0) //Position: 0x9A45 / 39493
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

int Function_225(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9A9D / 39581
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
		Function_226(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_191(StackVal);
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

void Function_226(bool bParam0) //Position: 0x9DBB / 40379
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_227() //Position: 0x9DD0 / 40400
{
	var uVar0[11];
	int iVar12;
	
	if (Function_272())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Out of the pen";
		uVar0[4] = "Stage 03 - Outside Beecher's";
		uVar0[5] = "Stage 04 - Out to pasture I";
		uVar0[6] = "Stage 05 - Stampede";
		uVar0[7] = "Stage 06 - Train robbery";
		uVar0[8] = "Stage 07 - Round 'em up";
		uVar0[9] = "Stage 08 - Out to pasture II";
		uVar0[10] = "Last Stage";
		iVar12 = Function_258(&uLocal_588, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_257(&iVar12, &iLocal_602, &iLocal_603, &Local_595))
		{
			Function_250();
			Function_249();
		}
		if (iVar12 == 0)
		{
			Function_250();
			Function_249();
			Function_248(&bLocal_627, 8);
		}
		else if (iVar12 == 1)
		{
			Function_250();
			Function_249();
			Function_243(iLocal_602);
			Function_239(StackVal, StackVal, 5, &bLocal_628, &iLocal_602, Function_246(iLocal_602), Function_243(iLocal_602), 0);
		}
		else if (iVar12 == 2)
		{
			Function_250();
			Function_249();
			Function_234(&bLocal_629, 4);
		}
		else if (iVar12 == 3)
		{
			Function_230();
			Function_250();
			Function_249();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_608);
			iLocal_602 = 1;
			iLocal_603 = 0;
			Local_595 = 1000;
		}
		else if (iVar12 == 4)
		{
			Function_230();
			Function_250();
			Function_249();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_608);
			iLocal_602 = 2;
			iLocal_603 = 0;
			Local_595 = 1000;
		}
		else if (iVar12 == 5)
		{
			Function_230();
			Function_250();
			Function_249();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_608);
			iLocal_602 = 3;
			iLocal_603 = 0;
			Local_595 = 1000;
		}
		else if (iVar12 == 6)
		{
			Function_230();
			Function_250();
			Function_249();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_608);
			iLocal_602 = 4;
			iLocal_603 = 0;
			Local_595 = 1000;
		}
		else if (iVar12 == 7)
		{
			Function_230();
			Function_250();
			Function_249();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_608);
			iLocal_602 = 5;
			iLocal_603 = 0;
			Local_595 = 1000;
		}
		else if (iVar12 == 8)
		{
			Function_230();
			Function_250();
			Function_249();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_608);
			iLocal_602 = 6;
			iLocal_603 = 0;
			Local_595 = 1000;
		}
		else if (iVar12 == 9)
		{
			Function_230();
			Function_250();
			Function_249();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_608);
			iLocal_602 = 7;
			iLocal_603 = 0;
			Local_595 = 1000;
		}
		else if (iVar12 == 10)
		{
			Function_230();
			Function_250();
			Function_249();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_228(&bLocal_608);
			iLocal_602 = 101;
			iLocal_603 = 0;
			Local_595 = 1000;
		}
	}
	return;
}

void Function_228(bool bParam0) //Position: 0xA145 / 41285
{
	Function_229(bParam0, 0.0f);
	return;
}

void Function_229(int iParam0, float fParam1) //Position: 0xA151 / 41297
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_230() //Position: 0xA172 / 41330
{
	STREAMING_UNLOAD_BOUNDS();
	UI_HIDE("RacePosition");
	Function_189(13, 0, 1);
	DECOR_REMOVE(Global_34573, "herding");
	Function_188();
	Function_187();
	Function_186();
	Function_185();
	Function_184();
	if (IS_BLIP_VALID(bLocal_865))
	{
		REMOVE_BLIP(bLocal_865);
	}
	REMOVE_OBJECT_ATTACHMENT(bLocal_930);
	Function_183(&bLocal_937);
	Function_183(&bLocal_931);
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (IS_OBJECT_VALID(Local_986))
	{
		DESTROY_OBJECT(Local_986);
	}
	if (IS_OBJECT_VALID(bLocal_866))
	{
		Function_182();
		DESTROY_OBJECT(bLocal_866);
	}
	if (IS_ACTOR_VALID(bLocal_859))
	{
		DESTROY_ACTOR(bLocal_859);
	}
	if (IS_ACTOR_VALID(bLocal_860))
	{
		DESTROY_ACTOR(bLocal_860);
	}
	if (SQUAD_IS_VALID(Local_986.f_44))
	{
		Function_233(&Local_986 + 44);
		DESTROY_OBJECT(Local_986.f_44);
	}
	if (SQUAD_IS_VALID(Local_986.f_48))
	{
		Function_233(&Local_986 + 48);
		DESTROY_OBJECT(Local_986.f_48);
	}
	if (SQUAD_IS_VALID(Local_986.f_52))
	{
		Function_233(&Local_986 + 52);
		DESTROY_OBJECT(Local_986.f_52);
	}
	if (SQUAD_IS_VALID(Local_986.f_56))
	{
		Function_233(&Local_986 + 56);
		DESTROY_OBJECT(Local_986.f_56);
	}
	if (SQUAD_IS_VALID(Local_4.f_640))
	{
		Function_233(&Local_4 + 640);
		DESTROY_OBJECT(Local_4.f_640);
	}
	if (SQUAD_IS_VALID(Local_4.f_752))
	{
		Function_233(&Local_4 + 752);
		DESTROY_OBJECT(Local_4.f_752);
	}
	if (SQUAD_IS_VALID(Local_4.f_680))
	{
		Function_233(&Local_4 + 680);
		DESTROY_OBJECT(Local_4.f_680);
	}
	if (SQUAD_IS_VALID(Local_4.f_712))
	{
		Function_233(&Local_4 + 712);
		DESTROY_OBJECT(Local_4.f_712);
	}
	if (SQUAD_IS_VALID(Local_4.f_800))
	{
		Function_233(&Local_4 + 800);
		DESTROY_OBJECT(Local_4.f_800);
	}
	if (SQUAD_IS_VALID(Local_4.f_824))
	{
		Function_233(&Local_4 + 824);
		DESTROY_OBJECT(Local_4.f_824);
	}
	if (IS_ACTOR_VALID(bLocal_606))
	{
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_606);
		AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(bLocal_606, false);
	}
	if (IS_OBJECT_VALID(bLocal_929))
	{
		DESTROY_OBJECT(bLocal_929);
	}
	if (IS_OBJECT_VALID(Local_1017[02]))
	{
		Function_231();
	}
	return;
}

void Function_231() //Position: 0xA36A / 41834
{
	TRAIN_DESTROY_TRAIN(bLocal_840);
	Function_232();
	Function_172(&Local_1017);
	return;
}

void Function_232() //Position: 0xA37F / 41855
{
	if (IS_LAYOUTREF_VALID(Local_459))
	{
		DESTROY_LAYOUT(Local_459);
	}
	if (IS_LAYOUTREF_VALID(Local_468))
	{
		DESTROY_LAYOUT(Local_468);
	}
	if (IS_LAYOUTREF_VALID(Local_470))
	{
		DESTROY_LAYOUT(Local_470);
	}
	if (IS_LAYOUTREF_VALID(Local_485))
	{
		DESTROY_LAYOUT(Local_485);
	}
	if (IS_LAYOUTREF_VALID(Local_505))
	{
		DESTROY_LAYOUT(Local_505);
	}
	if (IS_LAYOUTREF_VALID(Local_529))
	{
		DESTROY_LAYOUT(Local_529);
	}
	return;
}

void Function_233(int iParam0) //Position: 0xA3DF / 41951
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

void Function_234(bool bParam0, int iParam1) //Position: 0xA426 / 42022
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_235(iParam1);
	*bParam0 = 1;
	return;
}

void Function_235(int iParam0) //Position: 0xA449 / 42057
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_238("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_237(2) || Function_237(8)) || Function_237(9)) || Function_237(10))
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
		Function_238("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_238("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_238("");
	}
	else if (iParam0 == 8)
	{
		Function_236();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_236();
	}
	return;
}

void Function_236() //Position: 0xA540 / 42304
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_237(int iParam0) //Position: 0xA54C / 42316
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

void Function_238(bool bParam0) //Position: 0xA582 / 42370
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_239(int iParam0, var uParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA5EC / 42476
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_240(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_235(iParam0);
		*uParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_240(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA629 / 42537
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_242(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_241(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_241(int iParam0) //Position: 0xA6AC / 42668
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

var Function_242(vector3 vParam0, bool bParam3) //Position: 0xAB5A / 43866
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

vector3 Function_243(int iParam0) //Position: 0xABC5 / 43973
{
	Function_244(iParam0 + 1);
	return StackVal, StackVal, Function_244(iParam0 + 1);
}

vector3 Function_244(int iParam0) //Position: 0xABD2 / 43986
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_245((*&Local_4 + 1132)[0]);
			return StackVal, StackVal, Function_245((*&Local_4 + 1132)[0]);
			break;
		
		case 0x00000001:
			Function_245((*&Local_4 + 1164)[0]);
			return StackVal, StackVal, Function_245((*&Local_4 + 1164)[0]);
			break;
		
		case 0x00000002:
			Function_245((*&Local_4 + 1188)[0]);
			return StackVal, StackVal, Function_245((*&Local_4 + 1188)[0]);
			break;
		
		case 0x00000003:
			Function_245((*&Local_4 + 1212)[0]);
			return StackVal, StackVal, Function_245((*&Local_4 + 1212)[0]);
			break;
		
		case 0x00000004:
			Function_245((*&Local_4 + 1236)[0]);
			return StackVal, StackVal, Function_245((*&Local_4 + 1236)[0]);
			break;
		
		case 0x00000005:
			Function_245((*&Local_4 + 1260)[0]);
			return StackVal, StackVal, Function_245((*&Local_4 + 1260)[0]);
			break;
		
		case 0x00000006:
			Function_245((*&Local_4 + 1284)[0]);
			return StackVal, StackVal, Function_245((*&Local_4 + 1284)[0]);
			break;
		
		case 0x00000007:
			Function_245((*&Local_4 + 1308)[0]);
			return StackVal, StackVal, Function_245((*&Local_4 + 1308)[0]);
			break;
		
		default:
			Function_245((*&Local_4 + 1332)[0]);
			return StackVal, StackVal, Function_245((*&Local_4 + 1332)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_245((*&Local_4 + 1132)[0]);
	return StackVal, StackVal, Function_245((*&Local_4 + 1132)[0]);
}

vector3 Function_245(bool bParam0) //Position: 0xAD05 / 44293
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

int Function_246(int iParam0) //Position: 0xAD2C / 44332
{
	return Function_247(iParam0 + 1);
}

int Function_247(int iParam0) //Position: 0xAD39 / 44345
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 1132)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 1164)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 1188)[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 1212)[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_4 + 1236)[0]);
			break;
		
		case 0x00000005:
			return GET_OBJECT_HEADING((*&Local_4 + 1260)[0]);
			break;
		
		case 0x00000006:
			return GET_OBJECT_HEADING((*&Local_4 + 1284)[0]);
			break;
		
		case 0x00000007:
			return GET_OBJECT_HEADING((*&Local_4 + 1308)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 1332)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_4 + 1132)[0]);
}

void Function_248(bool bParam0, int iParam1) //Position: 0xAE6C / 44652
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_235(iParam1);
	*bParam0 = 1;
	return;
}

void Function_249() //Position: 0xAE8F / 44687
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_250() //Position: 0xAEA4 / 44708
{
	Function_252();
	Function_251(10, 3);
	return;
}

void Function_251(int iParam0, int iParam1) //Position: 0xAEB3 / 44723
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

void Function_252() //Position: 0xAFEA / 45034
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_256())
	{
		Function_255(10, 3);
	}
	else
	{
		Function_253();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_253() //Position: 0xB035 / 45109
{
	Function_254(25, 2);
	return;
}

void Function_254(int iParam0, int iParam1) //Position: 0xB041 / 45121
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

void Function_255(int iParam0, int iParam1) //Position: 0xB23F / 45631
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

bool Function_256() //Position: 0xB376 / 45942
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

bool Function_257(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB3DD / 46045
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_250();
			Function_249();
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
		Function_238("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_258(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB483 / 46211
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_271(&Var15, &Var0);
	uVar20 = Function_270(*uParam1, &Var15);
	Function_269(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_268(uParam0, uVar20);
	Function_266(StackVal, uParam0, Var15.f_12);
	Function_264(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_263(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_260(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_259(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_259(int iParam0, int iParam1, int iParam2) //Position: 0xB54A / 46410
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

bool Function_260(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB5A6 / 46502
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
				Function_262(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_262(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_259(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_261(bParam1->f_32);
	}
	else
	{
		Function_261(bParam1->f_32);
	}
	return 0;
}

void Function_261(bool bParam0) //Position: 0xB72C / 46892
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

void Function_262(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB766 / 46950
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

var Function_263(int iParam0, var uParam1, int iParam2) //Position: 0xB814 / 47124
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_264(var uParam0, int iParam1, int iParam2) //Position: 0xB838 / 47160
{
	switch (Function_265())
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

int Function_265() //Position: 0xB8D4 / 47316
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

void Function_266(var uParam0, int iParam1, int iParam2) //Position: 0xB910 / 47376
{
	switch (Function_267(uParam0))
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

int Function_267(bool bParam0) //Position: 0xB9A8 / 47528
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

var Function_268(var uParam0, int iParam1) //Position: 0xBAF3 / 47859
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

void Function_269(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBC42 / 48194
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

var Function_270(int iParam0, int iParam1) //Position: 0xBCD5 / 48341
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_271(var uParam0, var uParam1) //Position: 0xBCEF / 48367
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

bool Function_272() //Position: 0xBD3D / 48445
{
	return Global_30920;
}

bool Function_273() //Position: 0xBD46 / 48454
{
	if (IS_EXITFLAG_SET())
	{
		Function_243(iLocal_602);
		Function_239(StackVal, StackVal, 4, &bLocal_628, &iLocal_602, Function_246(iLocal_602), Function_243(iLocal_602), 0);
		return 0;
	}
	Function_673(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_532, iLocal_602, iLocal_603, &bLocal_629, &bLocal_627, &bLocal_628);
	if (iLocal_602 == 99 && iLocal_602 == 100)
	{
		if (TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Function_672(8), Function_671(8)))
		{
			Function_670(8);
		}
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_243(iLocal_602);
			Function_239(StackVal, StackVal, 1, &bLocal_628, &iLocal_602, Function_246(iLocal_602), Function_243(iLocal_602), 0);
			return 1;
		}
		if (Function_669(2048))
		{
			Function_243(iLocal_602);
			Function_239(StackVal, StackVal, 3, &bLocal_628, &iLocal_602, Function_246(iLocal_602), Function_243(iLocal_602), 0);
			return 1;
		}
		if (Function_649(&Local_671, &uLocal_631, &uLocal_825, bLocal_605, iLocal_630))
		{
			if (Function_647(&uLocal_825))
			{
				Function_243(iLocal_602);
				Function_239(StackVal, StackVal, 5, &bLocal_628, &iLocal_602, Function_246(iLocal_602), Function_243(iLocal_602), 0);
				return 1;
			}
		}
		if (SQUAD_IS_VALID(Local_986.f_44))
		{
			if (iLocal_603 > 8)
			{
				if (SQUAD_IS_VALID(Local_986.f_56))
				{
					if (SQUAD_IS_VALID(Local_986.f_48))
					{
						if (SQUAD_IS_VALID(Local_986.f_52))
						{
							if (!iLocal_603 != 106)
							{
								bLocal_842 = (((SQUAD_GET_SIZE(Local_986.f_44) + SQUAD_GET_SIZE(Local_986.f_56)) + SQUAD_GET_SIZE(Local_986.f_48)) + SQUAD_GET_SIZE(Local_986.f_52));
								bLocal_843 = (15 - bLocal_842);
								bLocal_844 = ROUND((0,6f * IntToFloat(bLocal_842)));
								if (bLocal_843 > bLocal_844)
								{
									PRINTINT(bLocal_842);
									PRINTNL();
									PRINTINT(bLocal_843);
									PRINTNL();
									PRINTINT(bLocal_844);
									PRINTNL();
									Function_238("nHerd_lost");
									Function_243(iLocal_602);
									Function_239(StackVal, StackVal, 5, &bLocal_628, &iLocal_602, Function_246(iLocal_602), Function_243(iLocal_602), 0);
									return 1;
								}
							}
						}
					}
				}
			}
		}
		Function_646(&bLocal_607, bLocal_606);
		Function_645();
	}
	switch (iLocal_602)
	{
		case 0x00000063:
			Function_588();
			break;
		
		case 0x00000000:
			Function_568();
			break;
		
		case 0x00000001:
			Function_562();
			break;
		
		case 0x00000002:
			Function_549();
			break;
		
		case 0x00000003:
			Function_541();
			break;
		
		case 0x00000004:
			Function_518();
			break;
		
		case 0x00000005:
			Function_476();
			break;
		
		case 0x00000006:
			Function_454();
			break;
		
		case 0x00000007:
			Function_340();
			break;
		
		case 0x00000065:
			Function_276();
			break;
		
		case 0x00000064:
			if (Function_275(&bLocal_628))
			{
				return 0;
			}
			break;
		
		default:
			if (!Function_274(&iLocal_602, &iLocal_603, &Local_595))
			{
				return 0;
			}
			break;
	}
	if (bLocal_627)
	{
		Function_248(&bLocal_627, 8);
		return 0;
	}
	if (bLocal_628 && iLocal_602 == 100)
	{
		Function_243(iLocal_602);
		Function_239(StackVal, StackVal, 5, &bLocal_628, &iLocal_602, Function_246(iLocal_602), Function_243(iLocal_602), 0);
	}
	if (bLocal_629)
	{
		Function_234(&bLocal_629, 4);
		return 0;
	}
	return 1;
}

bool Function_274(var uParam0, var uParam1, int iParam2) //Position: 0xBFE7 / 49127
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

bool Function_275(int iParam0) //Position: 0xC028 / 49192
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_276() //Position: 0xC03B / 49211
{
	Function_339(bLocal_531);
	switch (iLocal_603)
	{
		case 0x00000000:
			Function_335(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_606, GET_ACTOR_MAX_HEALTH(bLocal_606));
			if (IS_ACTOR_VALID(bLocal_607))
			{
				TASK_STAND_STILL(bLocal_607, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_607, true);
			}
			if (IS_ACTOR_VALID(bLocal_606))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_606);
				CLEAR_ACTOR_MAX_SPEED(bLocal_606);
				TASK_STAND_STILL(bLocal_606, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_606, true);
			}
			if (IS_ACTOR_VALID(bLocal_861))
			{
				TASK_STAND_STILL(bLocal_861, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_861, true);
			}
			if (IS_ACTOR_VALID(bLocal_862))
			{
				TASK_STAND_STILL(bLocal_862, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_862, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_327();
				bLocal_604 = Global_30637[0];
				if (!Function_326(bLocal_604))
				{
					Function_324(&Local_532);
				}
				Function_323(Global_34573, (*&Local_4 + 1332)[0], 1, 1, 1);
				Function_228(&bLocal_608);
				iLocal_603 = 1;
			}
			else
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_326(bLocal_604) || bLocal_604 != 4294967295))
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
			iLocal_904 = 0;
			iLocal_630 = 0;
			iLocal_832 = 0;
			bLocal_842 = Function_321(Function_322(Local_532));
			PRINTINT(bLocal_842);
			PRINTNL();
			bLocal_843 = (15 - bLocal_842);
			PRINTINT(bLocal_843);
			PRINTNL();
			Function_305();
			if (iLocal_617[6] == 0)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (IS_ACTOR_VALID(bLocal_607))
					{
						Function_323(bLocal_607, (*&Local_4 + 1332)[2], 1, 1, 1);
						if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_607))
						{
							ACTOR_MOUNT_ACTOR(Global_34573, bLocal_607);
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_606))
				{
					Function_323(bLocal_606, (*&Local_4 + 1332)[1], 1, 1, 1);
					if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
					{
						Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1332)[3], 1, 1, 1);
						if (!IS_ACTOR_RIDING(bLocal_606) && !IS_ACTOR_MOUNTED((*&Local_4 + 628)[02]))
						{
							ACTOR_MOUNT_ACTOR(bLocal_606, (*&Local_4 + 628)[02]);
						}
					}
				}
			}
			if (SQUAD_IS_VALID(Local_986.f_56))
			{
				Function_304(Local_986.f_56, Local_986.f_44);
			}
			if (SQUAD_IS_VALID(Local_986.f_44))
			{
				SQUAD_GOALS_CLEAR(Local_986.f_44);
				Function_303(Local_986.f_44);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, Local_4.f_1036, -1.0f);
			}
			Function_228(&bLocal_608);
			iLocal_603 = 3;
			break;
		
		case 0x00000003:
			if (Function_277())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_228(&bLocal_608);
				iLocal_603 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				PRINTINT(Local_986.f_76);
				PRINTNL();
				PRINTINT(Local_986.f_80);
				PRINTNL();
				bLocal_849 = Local_986.f_76;
				Global_34165.f_124 = bLocal_849;
				PRINTINT(Global_34165.f_124);
				PRINTNL();
				bLocal_850 = Local_986.f_80;
				Global_34165.f_128 = bLocal_850;
				PRINTINT(Global_34165.f_128);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Function_85(355, bLocal_842, 1, 0);
				if (bLocal_842 == 15)
				{
					Function_109(200, 1, 0);
				}
				bLocal_627 = true;
			}
			break;
	}
	return;
}

bool Function_277() //Position: 0xC37F / 50047
{
	var uVar0;
	
	if (Function_302(&Local_595 + 4))
	{
		if (Function_300(&Local_595 + 4) <= 2.0f)
		{
			Function_298(&Local_595, 1, 0);
		}
	}
	switch (Local_595)
	{
		case 0x000003E8:
			Function_294(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				SET_CUTSCENEINPUTS_TARGET_GUID(uVar0, 6, bLocal_606);
				Local_595.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				Local_595.f_16 = Function_288(Local_4, 0, Global_34573, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_595.f_16))
				{
				}
				else
				{
					LOG_ERROR("home02_ranch01_cutsceneLast - Failed to create home02_ranch01_cutsceneLast_cutscene");
				}
			}
			if (IS_ACTOR_VALID(Global_34573))
			{
				AI_GOAL_LOOK_AT_ACTOR_NEW(Global_34573, bLocal_606, -1.0f, 0);
				if (IS_ACTOR_VALID(bLocal_607))
				{
					if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_607))
					{
						Function_323(bLocal_607, (*&Local_4 + 1332)[2], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(Global_34573, bLocal_607);
					}
					else
					{
						Function_286(Global_34573, (*&Local_4 + 1332)[2], 1, 1, 1);
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_606))
			{
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_606, 1);
				MEMORY_ATTACK_ON_SIGHT(bLocal_606, 0);
				if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
				{
					if (!IS_ACTOR_RIDING(bLocal_606) && !IS_ACTOR_MOUNTED((*&Local_4 + 628)[02]))
					{
						Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1332)[3], 1, 1, 1);
						ACTOR_MOUNT_ACTOR(bLocal_606, (*&Local_4 + 628)[02]);
					}
					else
					{
						Function_286(bLocal_606, (*&Local_4 + 1332)[3], 1, 1, 1);
					}
				}
			}
			Local_595 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_595.f_16), false))
			{
				Function_285(Global_34573, 1, 1);
				Function_285(bLocal_606, 1, 1);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 828)[1]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 828)[1]);
				CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 828)[1], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME((*&Local_4 + 828)[1]);
				Function_228(&Local_595 + 4);
				Local_595 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Local_595 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_300(&Local_595 + 4) < 0,75f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					Function_228(&Local_595 + 4);
					iLocal_1030 = 15;
					iLocal_1031 = 15;
					Local_595 = 1004;
				}
			}
			else
			{
				Function_228(&Local_595 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_281() && Function_280())
			{
				Function_228(&Local_595 + 4);
				Local_595 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_285(Global_34573, 0, 1);
				Function_285(bLocal_606, 0, 1);
				if (IS_ACTOR_VALID(Global_34573))
				{
					AI_GOAL_LOOK_CLEAR(Global_34573);
				}
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_278(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_595.f_16))
				{
					DESTROY_OBJECT(Local_595.f_16);
				}
				Local_595 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Function_286(Global_34573, (*&Local_4 + 1332)[2], 1, 1, 1);
				Function_286(bLocal_606, (*&Local_4 + 1332)[5], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_606))
				{
					GET_OBJECT_POSITION((*&Local_4 + 1332)[4], &vLocal_877);
					TASK_GO_NEAR_COORD(bLocal_606, &vLocal_877, 3.0f, 3);
					TASK_PRIORITY_SET(bLocal_606, true);
				}
				Local_595 = 1104;
			}
			break;
	}
	return 0;
}

void Function_278(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xC729 / 50985
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
		Function_249();
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
	Function_279(bParam9);
}

void Function_279(bool bParam0) //Position: 0xC819 / 51225
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

int Function_280() //Position: 0xC8BE / 51390
{
	switch (iLocal_1031)
	{
		case 0x0000000F:
			if (Function_300(&Local_595 + 4) < 0,1f)
			{
				iLocal_1031 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_300(&Local_595 + 4) < 1.0f)
			{
				if (IS_ACTOR_VALID(bLocal_606))
				{
					bLocal_830 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH(false, Local_4.f_1812, 1, 0, 0, 1, false);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
					TASK_SEQUENCE_RELEASE(bLocal_830, 1);
					TASK_PRIORITY_SET(bLocal_606, true);
				}
				iLocal_1031 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_300(&Local_595 + 4) < 3.0f)
			{
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (IS_ACTOR_VALID(bLocal_607))
					{
						if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_607))
						{
							Function_323(bLocal_607, (*&Local_4 + 1332)[2], 1, 1, 1);
							ACTOR_MOUNT_ACTOR(Global_34573, bLocal_607);
						}
						else
						{
							Function_286(Global_34573, (*&Local_4 + 1332)[2], 1, 1, 1);
						}
					}
				}
				iLocal_1031 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_300(&Local_595 + 4) < 10.0f)
			{
				GET_OBJECT_POSITION((*&Local_4 + 1332)[4], &vLocal_877);
				if (IS_ACTOR_VALID(bLocal_606))
				{
					bLocal_830 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH(false, Local_4.f_1816, 2, 1, 0, 1, false);
					TASK_GO_NEAR_COORD(bLocal_606, &vLocal_877, 10.0f, 3);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
					TASK_SEQUENCE_RELEASE(bLocal_830, 1);
					TASK_PRIORITY_SET(bLocal_606, true);
				}
				iLocal_1031 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_300(&Local_595 + 4) < 13.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_281() //Position: 0xCA43 / 51779
{
	switch (iLocal_1030)
	{
		case 0x0000000F:
			if (Function_300(&Local_595 + 4) < 0,1f)
			{
				iLocal_1030 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_300(&Local_595 + 4) < 4.0f)
			{
				Function_282();
				iLocal_1030 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_300(&Local_595 + 4) < 5.0f)
			{
				iLocal_1030 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_300(&Local_595 + 4) < 13.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_282() //Position: 0xCAC6 / 51910
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_r1_CS02_v1_AA", "Home02_r1_CS02_v1_AA", true, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_CS02_v1_AB", "Home02_r1_CS02_v1_AB", false, 4, 1, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_283(int iParam0) //Position: 0xCB4E / 52046
{
	Function_284(0, Global_34573, iParam0, 0);
	Function_284(1, bLocal_606, iParam0, 0);
	Function_284(5, bLocal_860, iParam0, 0);
	return;
}

void Function_284(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xCB72 / 52082
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_285(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCB97 / 52119
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

void Function_286(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0xCC31 / 52273
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
				Function_287(StackVal, StackVal, StackVal, bParam0, vVar0, iParam2, iParam3, iParam4);
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

void Function_287(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0xCD48 / 52552
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

var Function_288(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xCE01 / 52737
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "home02_ranch01_cutsceneLast", 4, 1);
	}
	Function_289(&bVar0, uParam2);
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

void Function_289(var uParam0, char* cParam1) //Position: 0xCE8A / 52874
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_293(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_292(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_291(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_290(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 5.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 2, 3, 8.0f, 2, 0);
	return;
}

void Function_290(int iParam0) //Position: 0xCF0C / 53004
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 30,19111f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 541,0181f, 107,966f, 1694,455f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,133492f, -1,82422f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_291(int iParam0) //Position: 0xCF76 / 53110
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 30,19111f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 539,3389f, 108,0128f, 1695,448f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,111851f, -1,451095f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_292(int iParam0) //Position: 0xCFD9 / 53209
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35,16917f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 559,4105f, 107,7716f, 1685,928f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,180491f, -2,756297f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_293(bool bParam0) //Position: 0xD03C / 53308
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 35,16917f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, 553,0671f, 107,7716f, 1691,787f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, -0,180491f, -2,134217f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_294(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xD09F / 53407
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
	Function_249();
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
				Function_297(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_297(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_296()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_296()));
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
	if (Function_295(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_295(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

bool Function_295(int iParam0) //Position: 0xD348 / 54088
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_296() //Position: 0xD364 / 54116
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

vector3 Function_297(bool bParam0) //Position: 0xD3E3 / 54243
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_298(int iParam0, bool bParam1, bool bParam2) //Position: 0xD3F4 / 54260
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
			Function_299(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_85(20, 1, 0, 0);
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
						Function_299(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
				*iParam0 = 1105;
			}
		}
	}
	return;
}

void Function_299(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xD540 / 54592
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

float Function_300(bool bParam0) //Position: 0xD569 / 54633
{
	if (Function_302(bParam0))
	{
		if (Function_301(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_301(int iParam0) //Position: 0xD631 / 54833
{
	return Function_153(*iParam0, 2);
}

bool Function_302(int iParam0) //Position: 0xD63E / 54846
{
	return Function_153(*iParam0, 1);
}

void Function_303(bool bParam0) //Position: 0xD64B / 54859
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_304(bool bParam0, bool bParam1) //Position: 0xD692 / 54930
{
	bool bVar0;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (SQUAD_IS_VALID(bParam1))
		{
			while (SQUAD_GET_SIZE(bParam0) >= 0)
			{
				bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, false);
				if (IS_ACTOR_VALID(bVar0))
				{
					SQUAD_LEAVE(bVar0);
					SQUAD_JOIN(bVar0, bParam1);
				}
			}
		}
	}
	return;
}

void Function_305() //Position: 0xD6D6 / 54998
{
	if (!SQUAD_IS_VALID(Local_4.f_640))
	{
		Function_320();
		if (SQUAD_IS_VALID(Local_4.f_640))
		{
			Function_319(Local_4.f_640, 0);
			Function_318(Local_4.f_640, 3);
			Function_316(Local_4.f_640, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
			{
				SET_ACTORS_HORSE(bLocal_606, (*&Local_4 + 628)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_606, (*&Local_4 + 628)[02]);
				Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1332)[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_640, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_306();
	return;
}

void Function_306() //Position: 0xD76F / 55151
{
	Function_314();
	Local_986.f_12 = Local_4.f_1784;
	if (!SQUAD_IS_VALID(Local_986.f_44))
	{
		Local_986.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_531, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_986.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_986.f_44);
			Function_311(&Local_986, bLocal_531, Local_4.f_1512, &iLocal_924, 5, 2.0f, 5,5f, 2.0f, 0);
			Function_319(Local_986.f_44, 0);
			Function_310(Local_986.f_44, 1);
			Function_309(Local_986.f_44, 0);
			Function_308(Local_986.f_44, 0);
			Function_307(Local_986.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_1036, -1.0f);
		}
	}
	return;
}

void Function_307(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD83B / 55355
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				DECOR_SET_BOOL(bVar1, bParam1, bParam2);
			}
			bVar0++;
		}
	}
	return;
}

void Function_308(bool bParam0, bool bParam1) //Position: 0xD882 / 55426
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_CAN_BE_BUMPTARGETED(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_309(bool bParam0, bool bParam1) //Position: 0xD8C3 / 55491
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_CAN_BE_TARGETED(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_310(bool bParam0, bool bParam1) //Position: 0xD904 / 55556
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				AI_SET_NAV_MAX_WATER_DEPTH_LEVEL(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_311(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, float fParam7, bool bParam8) //Position: 0xD948 / 55624
{
	bool bVar0;
	int iVar1;
	char* cVar2[64];
	char* cVar18[64];
	bool bVar34;
	char* cVar35;
	vector3 vVar36;
	vector3 vVar39;
	vector3 vVar42;
	vector3 vVar45;
	vector3 vVar48;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	
	if (SQUAD_IS_VALID(uParam0->f_44))
	{
		if (!uParam0->f_68 != 0)
		{
			if (IS_STRING_VALID(uParam0->f_64))
			{
				if (IS_OBJECT_VALID(bParam2))
				{
					Function_245(bParam2);
					vVar36 = { StackVal, StackVal, Function_245(bParam2) };
					Function_313(bParam2);
					vVar39 = { StackVal, StackVal, Function_313(bParam2) };
					PRINTVECTOR(vVar36);
					PRINTNL();
					bVar51 = RAND_FLOAT_RANGE(bParam5, bParam6);
					vVar42 = { StackVal, StackVal, vVar36 };
					vVar42.x = (vVar42.x - ((IntToFloat(iParam4) * bVar51) / 2.0f));
					vVar42.f_4 = (vVar42.y + fParam7);
					vVar42.f_8 = (vVar42.z - ((IntToFloat((uParam0->f_68 / iParam4)) * bVar51) / 2.0f));
					PRINTVECTOR(vVar42);
					PRINTNL();
					vVar45 = { StackVal, StackVal, vVar42 };
					vVar48 = { StackVal, StackVal, vVar39 };
					PRINTVECTOR(vVar45);
					PRINTNL();
					bVar0 = false;
					while (bVar0 < (uParam0->f_68 - 1))
					{
						strcpy(&cVar2, uParam0->f_64, 64);
						strcpy(&cVar18, "_", 64);
						stradd(&cVar2, &cVar18, 64);
						cVar35 = INT_TO_STRING(bVar0);
						stradd(&cVar2, cVar35, 64);
						if (iVar1 > iParam4)
						{
							iVar1 = 0;
							vVar45.x = vVar42.x;
							bVar51 = RAND_FLOAT_RANGE(bParam5, bParam6);
							vVar45.f_8 = (vVar45.z + bVar51);
						}
						if (bParam8)
						{
							vVar48.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
						}
						bVar52 = RAND_INT_RANGE(false, (*iParam3 - 1));
						bVar53 = (*iParam3)[bVar52];
						if (Function_312(bVar53))
						{
							bVar34 = CREATE_ACTOR_IN_LAYOUT(bParam1, &cVar2, bVar53, vVar45, vVar48);
							if (IS_ACTOR_VALID(bVar34))
							{
								SNAP_OBJECT_TO_GROUND(bVar34, 20.0f, false, 1092616192);
								SQUAD_JOIN(bVar34, uParam0->f_44);
								PRINTSTRING(&cVar2);
								PRINTNL();
								PRINTVECTOR(vVar45);
								PRINTNL();
							}
						}
						bVar51 = RAND_FLOAT_RANGE(bParam5, bParam6);
						vVar45.x = (vVar45.x + bVar51);
						iVar1++;
						bVar0++;
					}
				}
			}
		}
	}
}

bool Function_312(int iParam0) //Position: 0xDAEA / 56042
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

vector3 Function_313(bool bParam0) //Position: 0xDB01 / 56065
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

void Function_314() //Position: 0xDB28 / 56104
{
	iLocal_924[0] = 1008;
	iLocal_924[1] = 1009;
	iLocal_924[2] = 1010;
	iLocal_924[3] = 1011;
	(*&Local_986 + 104)[0] = Global_34573;
	(*&Local_986 + 104)[1] = bLocal_606;
	Local_986.f_68 = Function_321(Function_322(Local_532));
	Local_986.f_72 = 15;
	PRINTINT(Local_986.f_68);
	PRINTNL();
	Local_986.f_64 = "HOME02_RANCH01_COWS01";
	if (!Function_302(&Local_986 + 88))
	{
		Function_315(&Local_986 + 88);
	}
	else
	{
		Function_228(&Local_986 + 88);
	}
	if (!IS_OBJECT_VALID(Local_986))
	{
		Local_986 = CREATE_POINT_IN_LAYOUT(bLocal_531, "COWS_01_BASE", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_OBJECT_VALID(Local_986))
		{
		}
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		Local_986.f_4 = CREATE_POINT_IN_LAYOUT(bLocal_531, "COWS_01_CENTER", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_OBJECT_VALID(StackVal))
		{
		}
	}
	if (!SQUAD_IS_VALID(Local_986.f_48))
	{
		Local_986.f_48 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_531, "STRAGGLE_SQUAD"));
		if (SQUAD_IS_VALID(Local_986.f_48))
		{
			SQUAD_GOALS_CLEAR(Local_986.f_48);
		}
	}
	if (!SQUAD_IS_VALID(Local_986.f_52))
	{
		Local_986.f_52 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_531, "RETURN_SQUAD"));
		if (SQUAD_IS_VALID(Local_986.f_52))
		{
			SQUAD_GOALS_CLEAR(Local_986.f_52);
		}
	}
	if (!SQUAD_IS_VALID(Local_986.f_56))
	{
		Local_986.f_56 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_531, "GOAL_SQUAD"));
		if (SQUAD_IS_VALID(Local_986.f_56))
		{
			SQUAD_GOALS_CLEAR(Local_986.f_56);
		}
	}
	if (!IS_VOLUME_VALID(Local_986.f_40))
	{
		Local_986.f_40 = CREATE_VOLUME_IN_LAYOUT(bLocal_531, "HERD_VOLUME_MEDIUM", 2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 9.0f, 9.0f, 9.0f);
		if (IS_VOLUME_VALID(Local_986.f_40))
		{
			if (IS_OBJECT_VALID(StackVal))
			{
				ATTACH_OBJECTS(StackVal, Local_986.f_40, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			}
		}
	}
	Local_986.f_12 = "";
	Local_986.f_8 = "";
	Local_986.f_100 = 0;
	return;
}

void Function_315(int iParam0) //Position: 0xDD8A / 56714
{
	if (!Function_302(iParam0))
	{
		Function_229(iParam0, 0.0f);
	}
	return;
}

void Function_316(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xDD9F / 56735
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		Function_317(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), bParam1, iParam2, bParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_317(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xDDD5 / 56789
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

void Function_318(bool bParam0, bool bParam1) //Position: 0xDE12 / 56850
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				ACCESSORIZE_HORSE(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_319(bool bParam0, bool bParam1) //Position: 0xDE54 / 56916
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

void Function_320() //Position: 0xDE95 / 56981
{
	Local_4.f_640 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Horse01"));
	(*&Local_4 + 628)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_01_01", 977, -77,50741f, 116,8651f, 1419,258f, 0.0f, -89,88698f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 628)[02], Local_4.f_640);
	return;
}

bool Function_321(bool bParam0) //Position: 0xDEF6 / 57078
{
	int iVar0;
	int iVar1;
	
	iVar1 = bParam0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = (iVar1 / 10);
		iVar0++;
	}
	return (bParam0 - iVar1 * 100);
}

bool Function_322(int iParam0) //Position: 0xDF20 / 57120
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

void Function_323(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xDF3A / 57146
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

void Function_324(int iParam0) //Position: 0xE041 / 57409
{
	if (!Function_325(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_202(1, 0, 1);
		}
	}
	return;
}

bool Function_325(int iParam0) //Position: 0xE05C / 57436
{
	return iParam0->f_20;
}

bool Function_326(bool bParam0) //Position: 0xE066 / 57446
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

void Function_327() //Position: 0xE082 / 57474
{
	Function_207(47);
	Function_208(256);
	Function_162(18447);
	Function_334(12);
	Function_334(9);
	Function_334(13);
	Function_334(11);
	Function_334(35);
	Function_334(6);
	Function_334(3);
	Function_332(33037);
	Function_331();
	Function_330();
	if (iLocal_602 == 0)
	{
		Function_329(0);
		Function_328(0);
	}
	else if (iLocal_602 == 1)
	{
		Function_329(0);
		Function_328(0);
	}
	else if (iLocal_602 == 2)
	{
		Function_329(0);
		Function_328(0);
	}
	else if (iLocal_602 == 3)
	{
		Function_329(0);
		Function_328(0);
	}
	else if (iLocal_602 == 4)
	{
		Function_329(0);
		Function_328(0);
	}
	else if (iLocal_602 == 5)
	{
		Function_329(0);
		Function_328(0);
	}
	else if (iLocal_602 == 6)
	{
		Function_329(0);
		Function_328(0);
	}
	else if (iLocal_602 == 7)
	{
		Function_329(0);
		Function_328(0);
	}
	else
	{
		Function_329(0);
		Function_328(0);
	}
	return;
}

void Function_328(int iParam0) //Position: 0xE15F / 57695
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam0 >= 10)
	{
		iParam0 = 3;
	}
	Global_28842.f_44 = iParam0;
	return;
}

void Function_329(int iParam0) //Position: 0xE17D / 57725
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

void Function_330() //Position: 0xE1A2 / 57762
{
	Global_28842.f_44 = 4294967295;
	return;
}

void Function_331() //Position: 0xE1AE / 57774
{
	Global_28842.f_40 = 0;
	return;
}

void Function_332(int iParam0) //Position: 0xE1BA / 57786
{
	Function_333(&Global_28842, iParam0);
	return;
}

void Function_333(var uParam0, int iParam1) //Position: 0xE1C8 / 57800
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_334(int iParam0) //Position: 0xE1EB / 57835
{
	if (iParam0 >= 4294967295 && iParam0 < 36)
	{
		return;
	}
	Global_30767[iParam0] = 0;
	Global_30837 = 1;
	return;
}

void Function_335(bool bParam0) //Position: 0xE20B / 57867
{
	Function_336(0, 0x40400000);
	Function_216();
	Function_215();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_336(bool bParam0, float fParam1) //Position: 0xE23F / 57919
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
	Function_338();
	Function_337();
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

void Function_337() //Position: 0xE33D / 58173
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_338() //Position: 0xE36F / 58223
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

void Function_339(bool bParam0) //Position: 0xE46C / 58476
{
	bool bVar0;
	bool bVar1;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
		if (IS_ITERATOR_VALID(bVar0))
		{
			ITERATE_IN_LAYOUT(bVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bVar0, 15);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			if (IS_OBJECT_VALID(bVar1))
			{
				while (IS_OBJECT_VALID(bVar1))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar1)))
					{
						if (((((((((((((((((((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1008 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1009) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1010) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1011) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1012) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1013) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1014) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1088) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1089) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1090) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1087) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1091) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1092) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1093) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1049) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1050) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1051) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1052) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1060) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1073) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1095) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1096) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1097) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1098) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1099) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1100) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1101) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1102) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1103) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1104)
						{
							DESTROY_OBJECT(bVar1);
						}
					}
					bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
				}
			}
			DESTROY_ITERATOR(bVar0);
		}
	}
	return;
}

void Function_340() //Position: 0xE65C / 58972
{
	if (((iLocal_603 < 5 && iLocal_603 > 105) && !iLocal_603 != 104) && !iLocal_603 != 103)
	{
		Function_453(Local_986.f_44, Local_986.f_56, Local_4.f_1076);
		Function_452(&Local_986);
		if (bLocal_906)
		{
			Function_448(&Local_986);
			Function_447(&Local_986);
			Function_446(&Local_986, 0x41700000);
			if (Function_300(&bLocal_943) <= 0,2f)
			{
				Function_443(&Local_986);
				Function_228(&bLocal_943);
			}
			Function_442();
		}
		Function_439(Local_986.f_48, &bLocal_940, 3.0f, Local_4.f_1784, -14.0f);
		Function_438();
		Function_434();
		Function_433(Global_34573);
		Function_432();
		Function_417();
	}
	switch (iLocal_603)
	{
		case 0x00000000:
			Function_335(0);
			SET_ACTOR_HEALTH(bLocal_606, GET_ACTOR_MAX_HEALTH(bLocal_606));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (iLocal_617[6] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_327();
				bLocal_604 = Global_30637[0];
				if (!Function_326(bLocal_604))
				{
					Function_324(&Local_532);
				}
				Function_323(Global_34573, (*&Local_4 + 1308)[0], 1, 1, 1);
				iLocal_839 = 0;
				if (IS_ACTOR_VALID(bLocal_607))
				{
					TASK_STAND_STILL(bLocal_607, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_607, true);
				}
				if (IS_ACTOR_VALID(bLocal_606))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_606);
					CLEAR_ACTOR_MAX_SPEED(bLocal_606);
					TASK_STAND_STILL(bLocal_606, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_606, true);
				}
				Function_228(&bLocal_608);
				iLocal_603 = 1;
			}
			else
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_326(bLocal_604) || bLocal_604 != 4294967295))
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_403() && Function_396())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				iLocal_831 = 0;
				iLocal_832 = 0;
				iLocal_841 = 0;
				iLocal_833 = 0;
				iLocal_834 = 0;
				iLocal_835 = 0;
				iLocal_836 = 0;
				iLocal_846 = 0;
				iLocal_904 = 0;
				iLocal_630 = 0;
				bLocal_906 = false;
				iLocal_905 = 0;
				iLocal_914 = 0;
				iLocal_916 = 0;
				iLocal_915 = 0;
				iLocal_923 = 0;
				Function_395(&iLocal_908);
				bLocal_842 = Function_321(Function_322(Local_532));
				PRINTINT(bLocal_842);
				PRINTNL();
				bLocal_843 = (15 - bLocal_842);
				PRINTINT(bLocal_843);
				PRINTNL();
				bLocal_849 = Global_34165.f_124;
				bLocal_850 = Global_34165.f_128;
				PRINTINT(bLocal_849);
				PRINTNL();
				PRINTINT(bLocal_850);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Local_986.f_76 = bLocal_849;
				Local_986.f_80 = bLocal_850;
				Function_388();
				if (IS_ACTOR_VALID(bLocal_861))
				{
					SET_ACTOR_HEALTH(bLocal_861, 50.0f);
					Function_323(bLocal_861, (*&Local_4 + 1132)[4], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_862))
				{
					SET_ACTOR_HEALTH(bLocal_862, 50.0f);
					Function_323(bLocal_862, (*&Local_4 + 1132)[5], 1, 1, 1);
				}
				if (iLocal_617[6] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_607))
						{
							Function_323(bLocal_607, (*&Local_4 + 1308)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_607))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_607);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_606))
					{
						Function_189(13, 0, 1);
						Function_323(bLocal_606, (*&Local_4 + 1308)[1], 1, 1, 1);
						if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
						{
							Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1308)[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_606) && !IS_ACTOR_MOUNTED((*&Local_4 + 628)[02]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_606, (*&Local_4 + 628)[02]);
							}
						}
					}
					Function_228(&bLocal_608);
					iLocal_603 = 5;
				}
				else
				{
					Function_228(&bLocal_608);
					iLocal_603 = 6;
				}
				if (SQUAD_IS_VALID(Local_986.f_56))
				{
					Function_304(Local_986.f_56, Local_986.f_44);
				}
				if (SQUAD_IS_VALID(Local_986.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_44);
					Function_303(Local_986.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_1040, -1.0f);
				}
				Function_383(&(Local_671[017]), bLocal_606, "Uncle", 1, 0x5f5e100, 1);
				Function_383(&(Local_671[117]), Local_986.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[217]), Local_986.f_48, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[317]), Local_986.f_52, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[417]), Local_986.f_56, "Cow", 0, 0x5f5e100, 1);
				Function_382(&(Local_671[517]));
				Function_382(&(Local_671[617]));
				Function_382(&(Local_671[717]));
				Function_378(&(Local_671[117]), 2);
				Function_378(&(Local_671[217]), 2);
				Function_378(&(Local_671[317]), 2);
				Function_378(&(Local_671[417]), 2);
				Function_244(iLocal_602);
				Function_372(StackVal, StackVal, Function_244(iLocal_602), iLocal_602, Global_30637[0], Function_247(iLocal_602), 2);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_606) && SQUAD_IS_VALID(Local_986.f_44))
			{
				if (Function_371(bLocal_606, 1, 0x41700000) && Function_370(Local_986.f_44, 1))
				{
					Function_228(&bLocal_608);
					iLocal_603 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(Local_986.f_44))
			{
				Function_369();
				Function_368();
				Function_303(Local_986.f_44);
				Function_366(Local_986.f_44, &Local_4 + 972);
				Function_365(Local_986.f_44, 2, 1);
			}
			CAMERA_RESET(0);
			Function_228(&bLocal_608);
			iLocal_603 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_228(&bLocal_608);
				iLocal_603 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_929))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_929 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_531, "HOME02RANCH01_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_929))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_929, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(bLocal_865))
				{
					bLocal_865 = ADD_BLIP_FOR_OBJECT(Local_4.f_1512, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_865))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_866))
				{
					GET_OBJECT_POSITION(Local_4.f_1512, &vLocal_868);
					GET_OBJECT_ORIENTATION(Local_4.f_1512, &vLocal_871);
					bLocal_866 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_531, "HOME02RANCH01GATEWAY01", vLocal_868, vLocal_871, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_866))
					{
					}
				}
				if (iLocal_617[6] == 1)
				{
					if (SQUAD_IS_VALID(Local_986.f_44))
					{
						Function_369();
						Function_368();
						Function_303(Local_986.f_44);
						Function_366(Local_986.f_44, &Local_4 + 972);
						Function_365(Local_986.f_44, 2, 1);
					}
				}
				iLocal_904 = 0;
				if (SQUAD_IS_VALID(Local_986.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_48);
					Function_364(Local_986.f_48);
				}
				*(&Local_986 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_986.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_52);
					Function_364(Local_986.f_52);
				}
				Local_986.f_8 = Local_4.f_1512;
				GET_OBJECT_POSITION(Local_4.f_1512, &uLocal_874);
				if (SQUAD_IS_VALID(Local_986.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_56);
					bLocal_830 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, Local_4.f_1036, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_830);
					TASK_SEQUENCE_RELEASE(bLocal_830, 1);
				}
				if (Function_363(RAND_INT_RANGE(false, true)))
				{
					Function_362();
				}
				else
				{
					Function_361();
				}
				Function_228(&bLocal_608);
				iLocal_603 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_228(&bLocal_976);
				Function_228(&bLocal_979);
				Function_360("home02_ranch01_obj07", 7,5f, 1, 2, 0, 0, 0);
				Function_228(&bLocal_608);
				Function_228(&bLocal_611);
				Function_228(&bLocal_614);
				iLocal_603 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_357(&bLocal_614, 60.0f, bLocal_607, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_628, 0, bLocal_531, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_865))
				{
					REMOVE_BLIP(bLocal_865);
				}
				if (IS_OBJECT_VALID(bLocal_866))
				{
					DESTROY_OBJECT(bLocal_866);
				}
				if (bLocal_906)
				{
					Function_356();
				}
			}
			else
			{
				Function_346(StackVal, &bLocal_614, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_628, 0, 0, 0, 4294967295, 1);
				if (!IS_BLIP_VALID(bLocal_865))
				{
					bLocal_865 = ADD_BLIP_FOR_OBJECT(Local_4.f_1512, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_865))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_866))
				{
					GET_OBJECT_POSITION(Local_4.f_1512, &vLocal_868);
					GET_OBJECT_ORIENTATION(Local_4.f_1512, &vLocal_871);
					bLocal_866 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_531, "HOME02RANCH01GATEWAY01", vLocal_868, vLocal_871, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_866))
					{
					}
				}
				if (!bLocal_906)
				{
					Function_249();
					Function_345();
				}
				if ((SQUAD_IS_VALID(Local_986.f_44) && SQUAD_IS_VALID(Local_986.f_48)) && SQUAD_IS_VALID(Local_986.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_986.f_44) != 0 && SQUAD_GET_SIZE(Local_986.f_52) != 0) && SQUAD_GET_SIZE(Local_986.f_48) >= 3)
					{
						Function_249();
						Function_228(&bLocal_608);
						iLocal_603 = 9;
					}
				}
				if (((SQUAD_IS_VALID(Local_986.f_44) && SQUAD_IS_VALID(Local_986.f_56)) && SQUAD_IS_VALID(Local_986.f_48)) && SQUAD_IS_VALID(Local_986.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_986.f_44) != 0 && SQUAD_GET_SIZE(Local_986.f_48) != 0) && SQUAD_GET_SIZE(Local_986.f_52) != 0)
					{
						if (IS_BLIP_VALID(bLocal_865))
						{
							REMOVE_BLIP(bLocal_865);
						}
						if (IS_OBJECT_VALID(bLocal_866))
						{
							DESTROY_OBJECT(bLocal_866);
						}
						Function_344(Local_986.f_44);
						Function_344(Local_986.f_48);
						Function_344(Local_986.f_52);
						Function_344(Local_986.f_56);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_249();
						Function_228(&bLocal_608);
						iLocal_603 = 11;
					}
				}
			}
			if (Function_300(&bLocal_611) <= 3.0f)
			{
				if (IS_ACTOR_VALID(bLocal_860))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_860, (8.0f * 2.0f)))
					{
						SAY_SINGLE_LINE_SCRIPTED(bLocal_860, "home02_r1_JonGoesBakT4", Global_34573, 1, 0, 0, 0, 0);
						Function_228(&bLocal_611);
					}
				}
			}
			if (Function_300(&bLocal_976) <= 4.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[02]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[02], "home02_r1_JonGoesBakT1", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 756)[22]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[22], "home02_r1_JonGoesBakT3", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 756)[42]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[42], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[42], "home02_r1_JonGoesBakT5", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
				}
			}
			if (Function_300(&bLocal_979) <= 5.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[12]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[12], "home02_r1_JonGoesBakT2", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_979);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 756)[32]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[32], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[32], "home02_r1_JonGoesBakT6", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_979);
						}
					}
				}
			}
			if (!iLocal_923)
			{
				if (IS_OBJECT_VALID(StackVal) && IS_ACTOR_VALID(bLocal_606))
				{
					if (IS_VOLUME_VALID(Local_4.f_1124))
					{
						if (IS_OBJECT_IN_VOLUME(StackVal, Local_4.f_1124) || IS_ACTOR_IN_VOLUME(bLocal_606, Local_4.f_1124))
						{
							iLocal_923 = 1;
						}
					}
				}
			}
			break;
		
		case 0x00000009:
			if (SQUAD_GET_SIZE(Local_986.f_48) == 1)
			{
				Function_360("home02_ranch01_obj_last_straggler", 7,5f, 1, 2, 0, 0, 0);
			}
			else
			{
				Function_360("home02_ranch01_obj_last_stragglers", 7,5f, 1, 2, 0, 0, 0);
			}
			Function_228(&bLocal_608);
			Function_228(&bLocal_611);
			Function_228(&bLocal_614);
			iLocal_603 = 10;
			break;
		
		case 0x0000000A:
			if (Function_357(&bLocal_614, 60.0f, bLocal_607, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_628, 0, bLocal_531, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_865))
				{
					REMOVE_BLIP(bLocal_865);
				}
				if (IS_OBJECT_VALID(bLocal_866))
				{
					DESTROY_OBJECT(bLocal_866);
				}
				if (bLocal_906)
				{
					Function_356();
				}
			}
			else
			{
				Function_346(StackVal, &bLocal_614, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_628, 0, 0, 0, 4294967295, 1);
				if (!IS_BLIP_VALID(bLocal_865))
				{
					bLocal_865 = ADD_BLIP_FOR_OBJECT(Local_4.f_1512, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_865))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_866))
				{
					GET_OBJECT_POSITION(Local_4.f_1512, &vLocal_868);
					GET_OBJECT_ORIENTATION(Local_4.f_1512, &vLocal_871);
					bLocal_866 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_531, "HOME02RANCH01GATEWAY01", vLocal_868, vLocal_871, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_866))
					{
					}
				}
				if (!bLocal_906)
				{
					Function_249();
					Function_345();
				}
				if (SQUAD_IS_VALID(Local_986.f_44) && SQUAD_IS_VALID(Local_986.f_48))
				{
					if (SQUAD_GET_SIZE(Local_986.f_44) != 0 && SQUAD_GET_SIZE(Local_986.f_48) != 0)
					{
						Function_249();
						Function_228(&bLocal_608);
						iLocal_603 = 8;
					}
				}
			}
			if (!iLocal_908[0])
			{
				if ((SQUAD_IS_VALID(Local_986.f_44) && SQUAD_IS_VALID(Local_986.f_48)) && SQUAD_IS_VALID(Local_986.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_986.f_44) != 0 && SQUAD_GET_SIZE(Local_986.f_52) != 0) && SQUAD_GET_SIZE(Local_986.f_48) >= 3)
					{
						if (IS_ACTOR_VALID(bLocal_606))
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 24.0f))
							{
								iLocal_908[0] = 1;
								Function_343();
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_249();
				Function_228(&bLocal_608);
				iLocal_603 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (SQUAD_IS_VALID(Local_986.f_56))
				{
					bLocal_842 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_56);
				}
				PRINTINT(bLocal_847);
				PRINTNL();
				bLocal_847 = Function_342(bLocal_842, bLocal_847);
				PRINTINT(bLocal_847);
				PRINTNL();
				Function_341(Local_532, bLocal_847);
				PRINTINT(bLocal_842);
				PRINTNL();
				bLocal_843 = (15 - bLocal_842);
				PRINTINT(bLocal_843);
				PRINTNL();
				bLocal_849 = Local_986.f_76;
				Global_34165.f_124 = bLocal_849;
				PRINTINT(Global_34165.f_124);
				PRINTNL();
				bLocal_850 = Local_986.f_80;
				Global_34165.f_128 = bLocal_850;
				PRINTINT(Global_34165.f_128);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Function_184();
				iLocal_617[7] = 1;
				Function_228(&bLocal_608);
				iLocal_602 = 101;
				iLocal_603 = 0;
			}
			break;
	}
	return;
}

void Function_341(int iParam0, bool bParam1) //Position: 0xF690 / 63120
{
	if (!Function_18(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = bParam1;
	return;
}

bool Function_342(bool bParam0, bool bParam1) //Position: 0xF6AB / 63147
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = bParam1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar2 = (iVar2 / 10);
		iVar0++;
	}
	iVar1 = (iVar2 % 10);
	return ((10000 + iVar1 * 1000) + bParam0);
}

void Function_343() //Position: 0xF6E1 / 63201
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_GetLastStrag", "Home02_r1_GetLastStrag", false, 2, 0, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_344(bool bParam0) //Position: 0xF736 / 63286
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

void Function_345() //Position: 0xF783 / 63363
{
	bLocal_906 = true;
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(Local_986.f_44, Local_986.f_60, Global_34573, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_986.f_44, Local_986.f_60, Global_34573, 23.0f, 1.0f, 15.0f, 10.0f, 0);
	UI_SHOW("RacePosition");
	DECOR_SET_BOOL(Global_34573, "herding", true);
	return;
}

int Function_346(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0xF7E9 / 63465
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_OBJECT_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_353(Global_34573, bParam3, bParam2))
	{
		Function_238(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_353(Global_34573, bParam3, bParam1))
	{
		if (!Function_352(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_360(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				Function_351(1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_350(bParam8, 0, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_350(bParam9, 0, 15, 1, bParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam3, bParam10, 0f, 2, 0);
				DECOR_SET_BOOL(bParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_352(1))
	{
		Function_349(1);
		if (!Function_348())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_347();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam3));
				DECOR_REMOVE(bParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_350(bParam8, 1, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_350(bParam9, 1, 15, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_347() //Position: 0xF957 / 63831
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

bool Function_348() //Position: 0xF982 / 63874
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

void Function_349(bool bParam0) //Position: 0xF9C6 / 63942
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

void Function_350(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xFA29 / 64041
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

void Function_351(bool bParam0) //Position: 0xFACA / 64202
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

bool Function_352(bool bParam0) //Position: 0xFB2D / 64301
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

bool Function_353(bool bParam0, bool bParam1, bool bParam2) //Position: 0xFB74 / 64372
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_355(bParam0);
			Function_354(bParam1);
			if (VDIST(Function_355(bParam0), Function_354(bParam1)) >= bParam2)
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

vector3 Function_354(bool bParam0) //Position: 0xFC8E / 64654
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

vector3 Function_355(bool bParam0) //Position: 0xFCFA / 64762
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

void Function_356() //Position: 0xFD64 / 64868
{
	bool bVar0;
	bool bVar1;
	
	bLocal_906 = false;
	_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES_FROM_OBJECT(Local_986.f_44, Local_986.f_60, Global_34573);
	if (IS_OBJECT_VALID(StackVal))
	{
		bVar0 = GET_BLIP_ON_OBJECT(StackVal);
		if (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
		}
	}
	if (IS_OBJECT_VALID(Local_986))
	{
		bVar1 = GET_BLIP_ON_OBJECT(Local_986);
		if (IS_BLIP_VALID(bVar1))
		{
			REMOVE_BLIP(bVar1);
		}
	}
	Function_344(Local_986.f_44);
	Function_344(Local_986.f_48);
	Function_344(Local_986.f_52);
	Function_344(Local_986.f_56);
	UI_HIDE("RacePosition");
	DECOR_REMOVE(Global_34573, "herding");
	return;
}

bool Function_357(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0xFE01 / 65025
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_ALIVE(bParam2))
	{
		if (!IS_ACTOR_ALIVE(GET_MOUNT(Global_34573)))
		{
			if (!Function_352(16))
			{
				if (bParam7)
				{
					Function_249();
				}
				if (!Function_359())
				{
					Function_360(bParam4, 7,5f, 0, 2, 0, 0, 0);
					Function_351(16);
				}
			}
			return 1;
		}
	}
	if (!ACTORS_IN_RANGE(Global_34573, bParam2, bParam1))
	{
		Function_238(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (GET_MOUNT(Global_34573) != bParam2)
	{
		if (!Function_352(8))
		{
			if (bParam7)
			{
				Function_249();
			}
			if (!Function_359())
			{
				Function_360(bParam3, 7,5f, 0, 2, 0, 0, 0);
				Function_351(8);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_350(bParam8, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_350(bParam9, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam2)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam2, bParam10, 0, 2, 0);
			}
		}
		return 1;
	}
	if (Function_352(8))
	{
		Function_349(8);
		if (!Function_348())
		{
			Function_358();
			Function_347();
		}
	}
	if (GET_MOUNT(Global_34573) == bParam2)
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam2));
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_350(bParam8, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_350(bParam9, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_358() //Position: 0xFF56 / 65366
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_359() //Position: 0xFF62 / 65378
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_360(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xFF6F / 65391
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

void Function_361() //Position: 0xFFC2 / 65474
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_r1_BeginHerdOut", "Home02_r1_BeginHerdOut", true, 3, 1, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_362() //Position: 0x1002B / 65579
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_r1_MoveCowsAgain", "Home02_r1_MoveCowsAgain", true, 2, 1, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_363(bool bParam0) //Position: 0x10082 / 65666
{
	if (bParam0 > 1)
	{
		return 1;
	}
	return 0;
}

void Function_364(bool bParam0) //Position: 0x10094 / 65684
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

int Function_365(bool bParam0, bool bParam1, int iParam2) //Position: 0x100C6 / 65734
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
			SET_ACTOR_VOLUME_PARAMETERS(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return 1;
}

void Function_366(bool bParam0, int iParam1) //Position: 0x10108 / 65800
{
	int iVar0;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < (*iParam1 - 1))
		{
			if (IS_VOLUME_VALID((*iParam1)[iVar0]))
			{
				Function_367(bParam0, (*iParam1)[iVar0]);
			}
			iVar0++;
		}
	}
	return;
}

int Function_367(bool bParam0, bool bParam1) //Position: 0x1014A / 65866
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(bParam1))
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
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_368() //Position: 0x1019F / 65951
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_986.f_44, Local_986.f_60, Local_986.f_12, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_369() //Position: 0x101C7 / 65991
{
	Function_364(Local_986.f_44);
	SQUAD_GOALS_CLEAR(Local_986.f_44);
	Local_986.f_60 = UNK_0x48588CCB(Local_986.f_44, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(Local_986.f_60))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(Local_986.f_44, Local_986.f_60);
	}
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 19, 45.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 10, 0,1f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 11, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 12, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 0, 19, 40.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 0, 10, 0,1f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 0, 11, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 0, 12, 0,5f);
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(Local_986.f_44, Local_986.f_60, Global_34573, 22.0f, 6.0f, 1);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_986.f_44, Local_986.f_60, Global_34573, 23.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(Local_986.f_44, Local_986.f_60, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(Local_986.f_44, Local_986.f_60, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(Local_986.f_44, Local_986.f_60, 0, 1);
	if (IS_ACTOR_VALID(bLocal_606))
	{
		if (IS_VOLUME_VALID(Local_986.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_606);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_986.f_40);
			if (!iLocal_602 != 1 || !iLocal_602 != 2)
			{
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_606, Local_986.f_40);
			}
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_986.f_44, Local_986.f_60, bLocal_606, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	DECOR_SET_BOOL(Global_34573, "herding", true);
	bLocal_906 = true;
	return;
}

int Function_370(bool bParam0, bool bParam1) //Position: 0x10380 / 66432
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
				if (!Function_371(bVar1, bParam1, 0x41700000))
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

bool Function_371(bool bParam0, bool bParam1, float fParam2) //Position: 0x103DF / 66527
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

void Function_372(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x1047C / 66684
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
	if (iParam3 != Global_34165.f_48 && !Function_377())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_376(0);
	Function_375();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_374(uParam4, iVar0, iVar1);
	Function_373();
}

void Function_373() //Position: 0x10519 / 66841
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

void Function_374(int iParam0, bool bParam1, bool bParam2) //Position: 0x1055A / 66906
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

void Function_375() //Position: 0x106C0 / 67264
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_376(bool bParam0) //Position: 0x106E4 / 67300
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

bool Function_377() //Position: 0x10713 / 67347
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_378(int iParam0, int iParam1) //Position: 0x1072E / 67374
{
	if (iParam1 != 100000000)
	{
		Function_381(iParam0, iParam1);
	}
	else
	{
		Function_379(iParam0, 1);
	}
	return;
}

void Function_379(int iParam0, bool bParam1) //Position: 0x1074E / 67406
{
	iParam0->f_40 = 0;
	Function_380(iParam0, 2, bParam1);
	Function_380(iParam0, 4, bParam1);
	Function_380(iParam0, 8, bParam1);
	Function_380(iParam0, 16, bParam1);
	Function_380(iParam0, 32, bParam1);
	Function_380(iParam0, 64, bParam1);
	Function_380(iParam0, 128, bParam1);
	Function_380(iParam0, 256, bParam1);
	Function_380(iParam0, 512, bParam1);
	Function_380(iParam0, 1024, bParam1);
	return;
}

void Function_380(int iParam0, int iParam1, bool bParam2) //Position: 0x107B4 / 67508
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

void Function_381(int iParam0, bool bParam1) //Position: 0x107F0 / 67568
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

void Function_382(bool bParam0) //Position: 0x1081B / 67611
{
	if (IS_OBJECT_VALID(*bParam0))
	{
		if (DECOR_CHECK_EXIST(*bParam0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(*bParam0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(*bParam0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(*bParam0, "MFT_LimitHorse");
		}
		if (GET_OBJECT_TYPE(*bParam0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(*bParam0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(*bParam0);
			}
		}
	}
	*bParam0 = "";
	strcpy(bParam0 + 4, "", 24);
	bParam0->f_36 = 0;
	bParam0->f_40 = 0;
	return;
}

int Function_383(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x108CF / 67791
{
	if (!Function_387(iParam0, uParam1))
	{
		return 0;
	}
	if (!Function_386(iParam0, bParam2))
	{
		return 0;
	}
	Function_385(iParam0, iParam3);
	iParam0->f_40 = 0;
	Function_384(iParam0, iParam4, iParam5);
	return 1;
}

void Function_384(var uParam0, int iParam1, int iParam2) //Position: 0x1090B / 67851
{
	if (iParam1 != 100000000)
	{
		Function_380(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_379(uParam0, iParam2);
	}
	return;
}

void Function_385(var uParam0, int iParam1) //Position: 0x1092E / 67886
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_386(int iParam0, bool bParam1) //Position: 0x1093A / 67898
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

bool Function_387(int iParam0, bool bParam1) //Position: 0x109C3 / 68035
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

void Function_388() //Position: 0x10B4F / 68431
{
	if (!IS_ACTOR_VALID(bLocal_860))
	{
		bLocal_860 = CREATE_ACTOR_IN_LAYOUT(bLocal_531, "HOME02_RANCH01_ENGINEER01", 201, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_ACTOR_VALID(bLocal_860))
		{
			SET_ACTOR_FACTION(bLocal_860, 20);
			SET_ACTOR_HEALTH(bLocal_860, GET_ACTOR_MAX_HEALTH(bLocal_606));
			Function_317(bLocal_860, 0, 0, 0, 1, 0, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_860);
			bLocal_930 = ATTACH_OBJECTS(bLocal_860, Local_459.f_28, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			TASK_STAND_STILL(bLocal_860, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_860, true);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_824))
	{
		Function_394();
		if (SQUAD_IS_VALID(Local_4.f_824))
		{
			Function_319(Local_4.f_824, 0);
			SQUAD_SET_FACTION(Local_4.f_824, 20);
			Function_316(Local_4.f_824, 0, 0, 0);
			Function_393(Local_4.f_824, 4, 0.0f);
			Function_392();
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_824, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_800))
	{
		Function_391();
		if (SQUAD_IS_VALID(Local_4.f_800))
		{
			Function_319(Local_4.f_800, 0);
			SQUAD_SET_FACTION(Local_4.f_800, 20);
			Function_316(Local_4.f_800, 0, 0, 0);
			Function_390();
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_800, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_640))
	{
		Function_320();
		if (SQUAD_IS_VALID(Local_4.f_640))
		{
			Function_319(Local_4.f_640, 0);
			Function_318(Local_4.f_640, 3);
			Function_316(Local_4.f_640, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
			{
				SET_ACTORS_HORSE(bLocal_606, (*&Local_4 + 628)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_606, (*&Local_4 + 628)[02]);
				Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1308)[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_640, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_389();
	return;
}

void Function_389() //Position: 0x10D2E / 68910
{
	Function_314();
	Local_986.f_12 = Local_4.f_1784;
	if (!SQUAD_IS_VALID(Local_986.f_44))
	{
		Local_986.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_531, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_986.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_986.f_44);
			Function_311(&Local_986, bLocal_531, Local_4.f_1516, &iLocal_924, 5, 2.0f, 5,5f, 2.0f, 0);
			Function_319(Local_986.f_44, 0);
			Function_310(Local_986.f_44, 1);
			Function_309(Local_986.f_44, 0);
			Function_308(Local_986.f_44, 0);
			Function_307(Local_986.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_1040, -1.0f);
		}
	}
	return;
}

void Function_390() //Position: 0x10DFA / 69114
{
	bool bVar0;
	var uVar1[5];
	bool bVar7;
	
	uVar1[0] = Local_485.f_36;
	uVar1[1] = Local_485.f_52;
	uVar1[2] = Local_485.f_44;
	uVar1[3] = Local_485.f_48;
	uVar1[4] = Local_485.f_40;
	if (SQUAD_IS_VALID(Local_4.f_800))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(Local_4.f_800) - 1))
		{
			bVar7 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_800, bVar0);
			if (IS_ACTOR_VALID(bVar7))
			{
				bLocal_931[bVar0] = ATTACH_OBJECTS(bVar7, uVar1[bVar0], Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			}
			bVar0++;
		}
	}
	return;
}

void Function_391() //Position: 0x10E90 / 69264
{
	Local_4.f_800 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Passenger01"));
	(*&Local_4 + 756)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PASSENGER_01_01", 208, 150,4297f, 116,1939f, 1780,356f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 756)[02], Local_4.f_800);
	(*&Local_4 + 756)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PASSENGER_01_02", 73, 146,5272f, 116,4716f, 1779,625f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 756)[12], Local_4.f_800);
	(*&Local_4 + 756)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PASSENGER_01_03", 74, 142,6323f, 116,7408f, 1778,784f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 756)[22], Local_4.f_800);
	(*&Local_4 + 756)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PASSENGER_01_04", 33, 138,7059f, 116,9362f, 1778,046f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 756)[32], Local_4.f_800);
	(*&Local_4 + 756)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PASSENGER_01_05", 238, 134,784f, 117,1212f, 1777,246f, 0.0f, 200,9943f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 756)[42], Local_4.f_800);
	return;
}

void Function_392() //Position: 0x11004 / 69636
{
	bool bVar0;
	var uVar1[2];
	bool bVar4;
	
	uVar1[0] = Local_470.f_52;
	uVar1[1] = Local_505.f_92;
	if (SQUAD_IS_VALID(Local_4.f_824))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(Local_4.f_824) - 1))
		{
			bVar4 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_824, bVar0);
			if (IS_ACTOR_VALID(bVar4))
			{
				bLocal_937[bVar0] = ATTACH_OBJECTS(bVar4, uVar1[bVar0], Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			}
			bVar0++;
		}
	}
	return;
}

void Function_393(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1107C / 69756
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (!IS_ACTOR_ANIMAL(bVar1))
		{
			if (!IS_ACTOR_VEHICLE(bVar1))
			{
				if (IS_ACTOR_VALID(bVar1))
				{
					GIVE_WEAPON_TO_ACTOR(bVar1, bParam1, bParam2, 1, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_394() //Position: 0x110C8 / 69832
{
	Local_4.f_824 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Guard01"));
	(*&Local_4 + 804)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_01_01", 191, 145,2672f, 116,4716f, 1785,992f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 804)[02], Local_4.f_824);
	(*&Local_4 + 804)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_01_02", 192, 141,3345f, 116,7212f, 1785,201f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 804)[12], Local_4.f_824);
	return;
}

void Function_395(int iParam0) //Position: 0x11163 / 69987
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

int Function_396() //Position: 0x11186 / 70022
{
	Function_402(&Local_4 + 540, 208, 2, 0);
	Function_402(&Local_4 + 540, 73, 2, 0);
	Function_402(&Local_4 + 540, 74, 2, 0);
	Function_402(&Local_4 + 540, 33, 2, 0);
	Function_402(&Local_4 + 540, 238, 2, 0);
	Function_402(&Local_4 + 540, 191, 2, 0);
	Function_402(&Local_4 + 540, 192, 2, 0);
	if (Function_397(&Local_4 + 540))
	{
		return 1;
	}
	return 0;
}

bool Function_397(bool bParam0) //Position: 0x111F5 / 70133
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_401();
	iVar1 = 0;
	if (!Function_169(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_400(bParam0[iVar03], 8);
		}
		else if (Function_399())
		{
			iVar1 = 1;
			Function_400(bParam0[iVar03], 8);
		}
		Function_400(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_169(bParam0[iVar03], 4))
		{
			if (!Function_169(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_169(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_169(bParam0[03], 8) || iVar1));
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
				Function_400(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_169(bParam0[iVar03], 4))
		{
			if (!Function_169(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_400(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_400(bParam0[iVar03], 2);
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
							Function_400(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_400(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_400(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_400(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_400(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_400(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_400(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_400(bParam0[iVar03], 2);
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
	Function_398();
	return 1;
}

void Function_398() //Position: 0x11570 / 71024
{
	if (!Function_295(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_399() //Position: 0x115B0 / 71088
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

void Function_400(var uParam0, int iParam1) //Position: 0x115DB / 71131
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_401() //Position: 0x115EC / 71148
{
	if (!Function_295(128))
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

var Function_402(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1162E / 71214
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_169(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_400(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_400(uParam0[iVar03], 8);
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

bool Function_403() //Position: 0x116FE / 71422
{
	bool bVar0;
	
	switch (iLocal_839)
	{
		case 0x00000000:
			if (!IS_OBJECT_VALID(Local_1017[02]))
			{
				iLocal_839++;
			}
			else
			{
				iLocal_839 = 9;
			}
			break;
		
		case 0x00000001:
			bLocal_840 = TRAIN_CREATE_NEW_TRAIN(6, "rail__rrtrack_02x", 0);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_840, 1175);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_840, 1176);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_840, 1169);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_840, 1168);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_840, 1160);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(bLocal_840, 1173);
			iLocal_839++;
			break;
		
		case 0x00000002:
			bVar0 = false;
			while (bVar0 < (Local_1017 - 1))
			{
				Local_1017[bVar02] = TRAIN_GET_CAR(bLocal_840, bVar0);
				if (IS_OBJECT_VALID(Local_1017[bVar02]))
				{
					PRINTINT(bVar0);
					PRINTNL();
					SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(Local_1017[bVar02]), true);
				}
				else
				{
					PRINTINT(bVar0);
					PRINTNL();
				}
				bVar0++;
			}
			iLocal_839++;
			break;
		
		case 0x00000003:
			if (IS_OBJECT_VALID(Local_1017[02]))
			{
			}
			iLocal_839++;
			break;
		
		case 0x00000004:
			iLocal_838 = 0;
			iLocal_839++;
			break;
		
		case 0x00000005:
			if (Function_406())
			{
				iLocal_839++;
			}
			break;
		
		case 0x00000006:
			Function_405(&Local_1017);
			Function_404();
			iLocal_839++;
			break;
		
		case 0x00000007:
			if (((iLocal_602 != 0 || iLocal_602 != 1) || iLocal_602 != 2) || iLocal_602 != 3)
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_4.f_1364), &uLocal_886);
				GET_OBJECT_ORIENTATION(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Local_4.f_1364), &Local_889);
				UNK_0x44986367(StackVal, &Local_889);
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, Local_4.f_1364), &vLocal_892);
				bLocal_851 = 0.0f;
			}
			else if (iLocal_602 == 4)
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_4.f_1364), &uLocal_886);
				GET_OBJECT_ORIENTATION(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_4.f_1364), &Local_889);
				UNK_0x44986367(StackVal, &Local_889);
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, Local_4.f_1364), &vLocal_892);
				bLocal_851 = 0.0f;
			}
			else if (iLocal_602 == 5)
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_4.f_1364), &uLocal_886);
				GET_OBJECT_ORIENTATION(GET_INDEXED_OBJECT_IN_OBJECTSET(2, Local_4.f_1364), &Local_889);
				UNK_0x44986367(StackVal, &Local_889);
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, Local_4.f_1364), &vLocal_892);
				bLocal_851 = 0.0f;
			}
			else if (iLocal_602 == 6)
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(3, Local_4.f_1364), &uLocal_886);
				GET_OBJECT_ORIENTATION(GET_INDEXED_OBJECT_IN_OBJECTSET(3, Local_4.f_1364), &Local_889);
				UNK_0x44986367(StackVal, &Local_889);
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, Local_4.f_1364), &vLocal_892);
				bLocal_851 = 0.0f;
			}
			else
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(4, Local_4.f_1364), &uLocal_886);
				GET_OBJECT_ORIENTATION(GET_INDEXED_OBJECT_IN_OBJECTSET(4, Local_4.f_1364), &Local_889);
				UNK_0x44986367(StackVal, &Local_889);
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, Local_4.f_1364), &vLocal_892);
				bLocal_851 = 0.0f;
			}
			PRINTVECTOR(Local_889);
			PRINTNL();
			PRINTFLOAT(StackVal);
			PRINTNL();
			PRINTFLOAT(bLocal_851);
			PRINTNL();
			TRAIN_SET_AUTOPILOT_ENABLE(bLocal_840, 0);
			TRAIN_SET_POSITION_DIRECTION(bLocal_840, &uLocal_886, &Local_889);
			TRAIN_SET_TARGET_POS(bLocal_840, &vLocal_892);
			TRAIN_SET_TARGET_SPEED(bLocal_840, bLocal_851);
			TRAIN_SET_MAX_ACCEL(bLocal_840, 2,5f);
			TRAIN_SET_MAX_DECEL(bLocal_840, -2,5f);
			iLocal_839++;
			break;
		
		case 0x00000008:
			iLocal_839++;
			break;
		
		case 0x00000009:
			return 1;
			break;
	}
	return 0;
}

void Function_404() //Position: 0x11A5D / 72285
{
	if (IS_VOLUME_VALID(Local_459.f_20))
	{
		Local_1017[02].f_4 = Local_459.f_20;
	}
	Local_1017[02].f_4 = Local_459.f_20;
	Local_1017[12].f_4 = StackVal;
	Local_1017[22].f_4 = Local_470.f_44;
	Local_1017[32].f_4 = Local_485.f_32;
	Local_1017[42].f_4 = Local_505.f_68;
	Local_1017[52].f_4 = StackVal;
	return;
}

void Function_405(var uParam0) //Position: 0x11ACC / 72396
{
	var uVar0[6];
	
	uVar0[0] = "home02_ranch01_steamer01";
	uVar0[1] = "home02_ranch01_woodcar01";
	uVar0[2] = "home02_ranch01_baggage01";
	uVar0[3] = "home02_ranch01_passenger01_01";
	uVar0[4] = "home02_ranch01_boxcar04_01";
	uVar0[5] = "home02_ranch01_caboose01";
	if (IS_OBJECT_VALID((*uParam0)[22]))
	{
		SET_ACTOR_MOVABLE_NAV_MESH(GET_ACTOR_FROM_OBJECT((*uParam0)[22]), uVar0[2]);
	}
	if (IS_OBJECT_VALID((*uParam0)[42]))
	{
		SET_ACTOR_MOVABLE_NAV_MESH(GET_ACTOR_FROM_OBJECT((*uParam0)[42]), uVar0[4]);
	}
	return;
}

bool Function_406() //Position: 0x11BD4 / 72660
{
	switch (iLocal_838)
	{
		case 0x00000000:
			iLocal_838++;
			break;
		
		case 0x00000001:
			if (IS_OBJECT_VALID(Local_1017[02]))
			{
				if (Function_416(Local_1017[02]))
				{
					iLocal_838++;
				}
			}
			break;
		
		case 0x00000002:
			if (IS_OBJECT_VALID(Local_1017[12]))
			{
				if (Function_415(Local_1017[12]))
				{
					iLocal_838++;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_OBJECT_VALID(Local_1017[22]))
			{
				if (Function_414(Local_1017[22]))
				{
					iLocal_838++;
				}
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(Local_1017[32]))
			{
				if (Function_413(Local_1017[32]))
				{
					iLocal_838++;
				}
			}
			break;
		
		case 0x00000005:
			iLocal_838++;
			break;
		
		case 0x00000006:
			if (IS_OBJECT_VALID(Local_1017[42]))
			{
				if (Function_410(Local_1017[42]))
				{
					iLocal_838++;
				}
			}
			break;
		
		case 0x00000007:
			if (IS_OBJECT_VALID(Local_1017[52]))
			{
				if (Function_407(Local_1017[52]))
				{
					iLocal_838++;
				}
			}
			break;
		
		case 0x00000008:
			iLocal_838++;
			break;
		
		case 0x00000009:
			return 1;
			break;
	}
	return 0;
}

bool Function_407(bool bParam0) //Position: 0x11D17 / 72983
{
	var uVar0;
	
	Function_409(3, 2);
	uVar0 = uVar0;
	Local_529 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_53()));
	Local_529.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_529, "volume_main", 2, 0.0f, 3,645308f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, 6.0f, 10.0f);
	Function_408(Local_529, bParam0);
	return 1;
}

void Function_408(bool bParam0, bool bParam1) //Position: 0x11D66 / 73062
{
	bool bVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 13)
		{
			bVar0 = ATTACH_OBJECTS(bParam0, bParam1, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (IS_ATTACHMENT_VALID(bVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
			}
		}
	}
	return;
}

void Function_409(int iParam0, int iParam1) //Position: 0x11DA8 / 73128
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

bool Function_410(bool bParam0) //Position: 0x11DF1 / 73201
{
	var uVar0;
	
	Function_409(3, 2);
	uVar0 = uVar0;
	Function_411(&Local_505 + 4, "p_gen_lantern05x", 0, 0);
	Function_411(&Local_505 + 4, "p_gen_hayHook01x", 0, 0);
	Function_411(&Local_505 + 4, "p_gen_boxcar0401x", 0, 0);
	Function_411(&Local_505 + 4, "$/content/scripting/gringo/simplegringo/train_climb_left", 1, 0);
	Function_411(&Local_505 + 4, "$/content/scripting/gringo/simplegringo/train_climb_right", 1, 0);
	if (!Function_397(&Local_505 + 4))
	{
		return 0;
	}
	Local_505 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_53()));
	Local_505.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_505, "volume_main", 2, 0.0f, 3,580699f, 0.0f, 0.0f, 0.0f, 0.0f, 4,5f, 6.0f, 12,5f);
	Local_505.f_72 = CREATE_POINT_IN_LAYOUT(Local_505, "point_spawn_guard01", 0,1342256f, 1,039f, -2,877801f, 0.0f, 98,22744f, 0.0f);
	Local_505.f_76 = CREATE_GRINGO_IN_LAYOUT(Local_505, "train_climb_left", "train_climb_left", -1,411f, 1,039f, -2,620399f, 0.0f, 90.0f, 0.0f);
	DECOR_SET_INT(Local_505.f_76, "trainAttach", 2);
	Local_505.f_80 = CREATE_GRINGO_IN_LAYOUT(Local_505, "train_climb_left1", "train_climb_left", -1,411f, 1,039f, 2,286764f, 0.0f, 90.0f, 0.0f);
	DECOR_SET_INT(Local_505.f_80, "trainAttach", false);
	Local_505.f_84 = CREATE_GRINGO_IN_LAYOUT(Local_505, "train_climb_right", "train_climb_right", 1,411f, 1,039f, -2,406803f, 0.0f, -90.0f, 0.0f);
	DECOR_SET_INT(Local_505.f_84, "trainAttach", 3);
	Local_505.f_88 = CREATE_GRINGO_IN_LAYOUT(Local_505, "train_climb_right1", "train_climb_right", 1,411f, 1,039f, 2,540062f, 0.0f, -90.0f, 0.0f);
	DECOR_SET_INT(Local_505.f_88, "trainAttach", true);
	Local_505.f_92 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_505, "cover_low01", -0,09129481f, 1,058997f, -2,83302f, 0.0f, 97,11233f, 0.0f, 4);
	CREATE_PROP_IN_LAYOUT(Local_505, "lantern05x0", "p_gen_lantern05x", 1,081683f, 2,713609f, 3,589049f, 0.0f, 0.0f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_505, "hayHook01x0", "p_gen_hayHook01x", 0,9783603f, 3,393837f, 3,707323f, -180.0f, 180.0f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_505, "hayHook01x1", "p_gen_hayHook01x", -0,9380003f, 3,394967f, -1,363513f, -180.0f, 0.0f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_505, "lantern05x1", "p_gen_lantern05x", -0,8359354f, 2,718448f, -1,447383f, 0.0f, 0.0f, 0.0f, 1);
	CREATE_PROP_IN_LAYOUT(Local_505, "boxcar0401x0", "p_gen_boxcar0401x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	Function_408(Local_505, bParam0);
	return 1;
}

var Function_411(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1224C / 74316
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_412(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_400(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_412(var uParam0, int iParam1, int iParam2) //Position: 0x12284 / 74372
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_169(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_400(uParam0[iVar03], 4);
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

bool Function_413(var uParam0) //Position: 0x12348 / 74568
{
	var uVar0;
	
	Function_409(3, 2);
	uVar0 = uVar0;
	Function_411(&Local_485 + 4, "p_gen_lamp06x", 0, 0);
	Function_411(&Local_485 + 4, "p_gen_lampExterior04x", 0, 0);
	if (!Function_397(&Local_485 + 4))
	{
		return 0;
	}
	Local_485 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_53()));
	Local_485.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_485, "volume_main", 2, 0.0f, 3,419341f, 0.0f, 0.0f, 0.0f, 0.0f, 5.0f, 6.0f, 19,5f);
	Local_485.f_36 = CREATE_POINT_IN_LAYOUT(Local_485, "point_spawn_passenger01", 0,1707019f, 1,047706f, -5,053849f, 0.0f, 124,2493f, 0.0f);
	Local_485.f_40 = CREATE_POINT_IN_LAYOUT(Local_485, "point_spawn_passenger02", 0,1989597f, 1,047706f, -3,398942f, 0.0f, -256,4455f, 0.0f);
	Local_485.f_44 = CREATE_POINT_IN_LAYOUT(Local_485, "point_spawn_passenger03", 0,3675559f, 1,047706f, -0,3697999f, 0.0f, -268,0821f, 0.0f);
	Local_485.f_48 = CREATE_POINT_IN_LAYOUT(Local_485, "point_spawn_passenger04", 0,5537775f, 1,047706f, 2,376214f, 0.0f, -268,0821f, 0.0f);
	Local_485.f_52 = CREATE_POINT_IN_LAYOUT(Local_485, "point_spawn_passenger05", 0,436794f, 1,047706f, 4,957778f, 0.0f, -281,733f, 0.0f);
	Local_485.f_56 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_485, "cover_low01", 0,1819467f, 1,135272f, -5,088047f, 0.0f, 96,23324f, 0.0f, 4);
	Local_485.f_60 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_485, "cover_low02", 0,1926757f, 1,142686f, -3,375624f, 0.0f, 96,23324f, 0.0f, 4);
	Local_485.f_64 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_485, "cover_low03", 0,3641178f, 1,13794f, -0,3800394f, 0.0f, 90,70776f, 0.0f, 4);
	Local_485.f_68 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_485, "cover_low04", 0,563873f, 1,13794f, 2,365209f, 0.0f, 96,23324f, 0.0f, 4);
	Local_485.f_72 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_485, "cover_low05", 0,4238341f, 1,13794f, 4,949275f, 0.0f, 90,26797f, 0.0f, 4);
}

bool Function_414(var uParam0) //Position: 0x127B4 / 75700
{
	var uVar0;
	
	Function_409(3, 2);
	uVar0 = uVar0;
	Function_411(&Local_470 + 4, "p_gen_trunk01x", 0, 0);
	Function_411(&Local_470 + 4, "p_gen_trunk02x", 0, 0);
	Function_411(&Local_470 + 4, "p_gen_footLocker05x", 0, 0);
	if (!Function_397(&Local_470 + 4))
	{
		return 0;
	}
	Local_470 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_53()));
	Local_470.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_470, "volume_main", 2, 0.0f, 3,59183f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, 6.0f, 15.0f);
	Local_470.f_48 = CREATE_POINT_IN_LAYOUT(Local_470, "point_spawn_guard01", 0,3410997f, 1,052769f, -3,472827f, 0.0f, 96,0258f, 0.0f);
	Local_470.f_52 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_470, "cover_low01", 0,1362652f, 1,075994f, -3,47607f, 0.0f, 100,7674f, 0.0f, 4);
}

bool Function_415(bool bParam0) //Position: 0x12A41 / 76353
{
	var uVar0;
	
	Function_409(3, 2);
	uVar0 = uVar0;
	Local_468 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_53()));
	Local_468.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_468, "volume_main", 2, 0.0f, 3,602211f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, 6.0f, 8.0f);
	Function_408(Local_468, bParam0);
	return 1;
}

bool Function_416(int iParam0) //Position: 0x12A90 / 76432
{
	var uVar0;
	
	Function_409(3, 2);
	uVar0 = uVar0;
	Function_411(&Local_459 + 4, "$/content/scripting/gringo/simplegringo/train_engineer", 1, 0);
	if (!Function_397(&Local_459 + 4))
	{
		return 0;
	}
	Local_459 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_53()));
	Local_459.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_459, "volume_main", 2, 0.0f, 3,708214f, 0.0f, 0.0f, 0.0f, 0.0f, 3.0f, 6.0f, 12.0f);
	Local_459.f_24 = CREATE_POINT_IN_LAYOUT(Local_459, "point_spawn_engineer01", 0,29686f, 1,14288f, 3,992368f, 0.0f, 125,5412f, 0.0f);
	Local_459.f_28 = CREATE_GRINGO_IN_LAYOUT(Local_459, "gringo_train_engineer", "train_engineer", -0,374f, 1,14288f, 3,992368f, 0.0f, 0.0f, 0.0f);
	Local_459.f_32 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_459, "ncover_low", -0,1960669f, 1,14288f, 4,545358f, 0.0f, 120,5009f, 0.0f, 4);
	Function_408(Local_459, iParam0);
	return 1;
}

void Function_417() //Position: 0x12BDF / 76767
{
	if (Function_300(&bLocal_958) <= 0,1f)
	{
		switch (iLocal_846)
		{
			case 0x00000000:
				iLocal_846++;
				break;
			
			case 0x00000001:
				if (iLocal_603 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_846++;
					}
				}
				break;
			
			case 0x00000002:
				Function_418(1, 1, 1, 0x42340000, 0x41f00000);
				if (SQUAD_IS_VALID(Local_986.f_48) && SQUAD_IS_VALID(Local_986.f_52))
				{
					if (SQUAD_GET_SIZE(Local_986.f_48) != 0 && SQUAD_GET_SIZE(Local_986.f_52) != 0)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 36.0f))
						{
							if (Function_300(&bLocal_611) <= 15.0f)
							{
								SAY_SINGLE_LINE_SCRIPTED(bLocal_606, "Home02_r1_UnclYells1", Global_34573, 0, 0, 0, 0, 0);
								Function_228(&bLocal_611);
							}
						}
					}
					else if (iLocal_904)
					{
						if (SQUAD_GET_SIZE(Local_986.f_48) > 2)
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 36.0f))
							{
								if (Function_300(&bLocal_611) <= 15.0f)
								{
									SAY_SINGLE_LINE_SCRIPTED(bLocal_606, "Home02_r1_Going4Strags", Global_34573, 0, 0, 0, 0, 0);
									Function_228(&bLocal_611);
								}
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				iLocal_846++;
				break;
			}
	}
	return;
}

void Function_418(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x12D35 / 77109
{
	if (Function_300(&bLocal_961) <= 6.0f)
	{
		Function_425();
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (bParam0)
			{
				if (!iLocal_914)
				{
					iLocal_914 = 1;
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_JonOffHors", "Home02_r1_JonOffHors", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_228(&bLocal_961);
				}
				else if (Function_300(&bLocal_611) <= 10.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_NoGetOnHors", "Home02_r1_NoGetOnHors", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_228(&bLocal_961);
					Function_228(&bLocal_611);
				}
			}
		}
		else
		{
			if (bParam0)
			{
				if (iLocal_914)
				{
					iLocal_914 = 0;
				}
			}
			if (bParam0)
			{
				if (IS_ACTOR_VALID(bLocal_607))
				{
					if (IS_ACTION_NODE_PLAYING(bLocal_607, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_ThrownFromHors", "Home02_r1_ThrownFromHors", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_228(&bLocal_961);
					}
				}
			}
			if (bParam0)
			{
				if (!iLocal_915)
				{
					if (!iLocal_916)
					{
						if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_880))
						{
							if (VMAG(vLocal_880) >= 0.0f)
							{
								iLocal_916 = 1;
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_JonBadHerd", "Home02_r1_JonBadHerd", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_228(&bLocal_961);
							}
						}
					}
				}
			}
			if (bParam0)
			{
				if (iLocal_916)
				{
					if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_880))
					{
						if (VMAG(vLocal_880) <= 0.0f)
						{
							iLocal_916 = 0;
						}
					}
				}
			}
			if (bParam0)
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 1,35f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_RidesIntoUncleHors", "Home02_r1_RidesIntoUncleHors", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_228(&bLocal_961);
				}
			}
			if (bParam2)
			{
				Function_245(Local_986.f_44);
				if (!Function_424(StackVal, StackVal, StackVal, Function_245(Local_986.f_44), 135.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_HerdsWrongDirec", "Home02_r1_HerdsWrongDirec", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_228(&bLocal_961);
				}
				if (SQUAD_IS_VALID(Local_986.f_48) && SQUAD_IS_VALID(Local_986.f_52))
				{
					if (SQUAD_GET_SIZE(Local_986.f_52) <= 3 || SQUAD_GET_SIZE(Local_986.f_48) <= 3)
					{
						if (IS_ACTOR_VALID(bLocal_606))
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 8.0f))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_JonBadHerd", "Home02_r1_JonBadHerd", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_228(&bLocal_961);
							}
						}
					}
				}
			}
			if (bParam1 && !iLocal_923)
			{
				if (SQUAD_IS_VALID(Local_986.f_48) && SQUAD_IS_VALID(Local_986.f_52))
				{
					if (SQUAD_GET_SIZE(Local_986.f_48) != 0 && SQUAD_GET_SIZE(Local_986.f_52) != 0)
					{
						if (!Function_353(StackVal, Global_34573, bParam3) && !ACTORS_IN_RANGE(Global_34573, bLocal_606, bParam3))
						{
							if (!iLocal_916)
							{
								if (!iLocal_915)
								{
									if (iLocal_602 == 0)
									{
										uLocal_867 = Local_4.f_1772;
									}
									else if (iLocal_602 == 1)
									{
										uLocal_867 = Local_4.f_1776;
									}
									else if (iLocal_602 == 2)
									{
										uLocal_867 = Local_4.f_1780;
									}
									else if (iLocal_602 == 3)
									{
										uLocal_867 = Local_4.f_1784;
									}
									else if (iLocal_602 == 4)
									{
										uLocal_867 = Local_4.f_1784;
									}
									else if (iLocal_602 == 5)
									{
										uLocal_867 = Local_4.f_1784;
									}
									else if (iLocal_602 == 6)
									{
										uLocal_867 = Local_4.f_1784;
									}
									if (Function_423(Global_34573, bLocal_606, uLocal_867))
									{
										iLocal_915 = 1;
										ABORT_SCRIPTED_CONVERSATION(0);
										if (Function_363(RAND_INT_RANGE(false, true)))
										{
											Function_422();
										}
										else
										{
											Function_421();
										}
										Function_228(&bLocal_961);
									}
									else
									{
										iLocal_915 = 1;
										ABORT_SCRIPTED_CONVERSATION(0);
										Function_420();
										Function_228(&bLocal_961);
									}
								}
							}
						}
					}
				}
			}
			if (StackVal && Function_353(ACTORS_IN_RANGE(Global_34573, bLocal_606, bParam4), Global_34573, bParam4))
			{
				if (bParam1)
				{
					if (iLocal_915)
					{
						iLocal_915 = 0;
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_419();
						Function_228(&bLocal_961);
					}
				}
			}
		}
	}
}

void Function_419() //Position: 0x1323F / 78399
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_comesbakFromherd", "Home02_r1_comesbakFromherd", false, 2, 0, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_420() //Position: 0x1329C / 78492
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_2FarBehind", "Home02_r1_2FarBehind", false, 2, 0, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_421() //Position: 0x132ED / 78573
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_WrongDir", "Home02_r1_WrongDir", false, 2, 0, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_422() //Position: 0x1333A / 78650
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_2FarAhead", "Home02_r1_2FarAhead", false, 2, 0, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_423(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13389 / 78729
{
	var uVar0;
	var uVar3;
	float fVar6;
	var uVar7;
	float fVar8;
	var uVar9;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			if (IS_OBJECT_VALID(bParam2))
			{
				GET_OBJECT_POSITION(bParam0, &uVar0);
				ESTIMATE_DISTANCE_ALONG_PATH(bParam2, &uVar0, &fVar6, &uVar7);
				GET_OBJECT_POSITION(bParam1, &uVar3);
				ESTIMATE_DISTANCE_ALONG_PATH(bParam2, &uVar3, &fVar8, &uVar9);
				if (fVar6 > fVar8)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_424(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x133E1 / 78817
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	var uVar5;
	vector3 vVar8;
	float fVar11;
	float fVar12;
	float fVar13;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				GET_POSITION(bVar1, &vVar2);
				vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vParam1, StackVal) };
				UNK_0x44986367(&uVar5, GET_HEADING(bVar1));
				fVar11 = GET_ANGLE_BETWEEN_VECTORS_DEGS(&uVar5, &vVar8);
				fVar12 = (fVar12 + fVar11);
			}
			bVar0++;
		}
		fVar13 = (fVar12 / IntToFloat(SQUAD_GET_SIZE(bParam0)));
		if (fVar13 >= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

void Function_425() //Position: 0x13466 / 78950
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (bVar0 == bLocal_606)
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_431(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_430();
						Function_228(&bLocal_961);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_430();
						Function_228(&bLocal_961);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_430();
					Function_228(&bLocal_961);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_GunOnUncle", "Home02_r1_GunOnUncle", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_228(&bLocal_961);
			}
		}
		else if (bVar0 == (*&Local_4 + 628)[02])
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_431(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_429();
						Function_228(&bLocal_961);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_428();
						Function_228(&bLocal_961);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_428();
					Function_228(&bLocal_961);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_GunOnAmb", "Home02_r1_GunOnAmb", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_228(&bLocal_961);
			}
		}
		else if ((Function_427(bVar0, Local_986.f_44, 0) || Function_427(bVar0, Local_986.f_52, 0)) || Function_427(bVar0, Local_986.f_48, 0))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_431(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_426();
						Function_228(&bLocal_961);
					}
					else if (GET_WEAPON_IN_HAND(Global_34573) != 21 || GET_WEAPON_IN_HAND(Global_34573) != 45)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_LassoCow", "Home02_r1_LassoCow", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
						Function_228(&bLocal_961);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_428();
						Function_228(&bLocal_961);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_428();
					Function_228(&bLocal_961);
				}
			}
			else if (GET_WEAPON_IN_HAND(Global_34573) != 21 || GET_WEAPON_IN_HAND(Global_34573) != 45)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_LassoCow", "Home02_r1_LassoCow", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_228(&bLocal_961);
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_GunOnUncle", "Home02_r1_GunOnUncle", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_228(&bLocal_961);
			}
		}
		else if (!IS_ACTOR_ANIMAL(bVar0) && !AI_IS_HOSTILE_OR_ENEMY(bVar0, Global_34573))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (IS_WEAPON_DRAWN(Global_34573))
				{
					if (Function_431(GET_WEAPON_IN_HAND(Global_34573)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_426();
						Function_228(&bLocal_961);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_428();
						Function_228(&bLocal_961);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_428();
					Function_228(&bLocal_961);
				}
			}
			else
			{
				ABORT_SCRIPTED_CONVERSATION(0);
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_GunOnAmb", "Home02_r1_GunOnAmb", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
				Function_228(&bLocal_961);
			}
		}
	}
	else if (IS_WEAPON_DRAWN(Global_34573))
	{
		if (Function_431(GET_WEAPON_IN_HAND(Global_34573)))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_ShootsGunRand", "Home02_r1_ShootsGunRand", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_228(&bLocal_961);
				}
			}
		}
	}
	return;
}

void Function_426() //Position: 0x13872 / 79986
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_JonShootsCow", "Home02_r1_JonShootsCow", false, 2, 0, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_427(bool bParam0, bool bParam1, bool bParam2) //Position: 0x138C7 / 80071
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		if (bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(bParam0) == bParam1)
	{
		if (bParam2)
		{
		}
		return 1;
	}
	if (bParam2)
	{
	}
	return 0;
}

void Function_428() //Position: 0x13907 / 80135
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_AssaultsAmb", "Home02_r1_AssaultsAmb", false, 2, 0, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_429() //Position: 0x1395A / 80218
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_ShootsUncleHors", "Home02_r1_ShootsUncleHors", false, 2, 0, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_430() //Position: 0x139B5 / 80309
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_AssualtsUncle", "Home02_r1_AssualtsUncle", false, 2, 0, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_431(bool bParam0) //Position: 0x13A0C / 80396
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

void Function_432() //Position: 0x13A52 / 80466
{
	if (Function_300(&iLocal_973) <= 5.0f)
	{
		PRINTINT(Local_986.f_76);
		PRINTNL();
		PRINTINT(Local_986.f_80);
		PRINTNL();
		PRINTFLOAT((TO_FLOAT(Local_986.f_80) / TO_FLOAT(Local_986.f_76)));
		PRINTNL();
		Function_228(&iLocal_973);
	}
	return;
}

void Function_433(bool bParam0) //Position: 0x13A96 / 80534
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_LASSO_TARGET(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (GET_TASK_STATUS(bVar0, 4294967295) == 1)
			{
				TASK_CLEAR(bVar0);
			}
		}
	}
	return;
}

void Function_434() //Position: 0x13AC5 / 80581
{
	if (SQUAD_IS_VALID(Local_4.f_712))
	{
		switch (iLocal_834)
		{
			case 0x00000000:
				iLocal_834++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(Local_4.f_712);
				Function_437(Local_4.f_712, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1,5f);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 1,5f);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, false, 1, 2);
				TASK_GO_NEAR_COORD(false, &Local_4 + 1520, 10.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, true, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 804)[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, 2, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 804)[12]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, 3, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 756)[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, 4, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 756)[12]);
				Function_228(&bLocal_955);
				iLocal_834++;
				break;
			
			case 0x00000002:
				if (Function_300(&bLocal_955) <= 25.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_712);
					Function_437(Local_4.f_712, 5, 3);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, false, 1, 4294967295);
					TASK_GO_NEAR_COORD(false, &Local_4 + 1520, 10.0f, 3);
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x00000003:
				if (Function_300(&bLocal_955) <= 15.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_712);
					Function_364(Local_4.f_712);
					Function_435(StackVal, StackVal, Local_4.f_712, *(&Local_4 + 1520), 0, 3);
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x00000004:
				iLocal_834++;
				break;
			}
	}
	return;
}

void Function_435(bool bParam0, vector3 vParam1, int iParam4, bool bParam5) //Position: 0x13C54 / 80980
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		Function_436(StackVal, StackVal, bVar1, vParam1, iParam4, bParam5, 2, 1);
		if (bParam5 != 0)
		{
			AI_ACTOR_FORCE_SPEED(bVar1, bParam5);
		}
		bVar0++;
	}
}

void Function_436(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x13C9C / 81052
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

void Function_437(bool bParam0, int iParam1, bool bParam2) //Position: 0x13DA4 / 81316
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
				SET_ACTOR_MIN_SPEED(bVar1, iParam1);
				SET_ACTOR_MAX_SPEED(bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_438() //Position: 0x13DF3 / 81395
{
	if (SQUAD_IS_VALID(Local_4.f_680))
	{
		switch (iLocal_833)
		{
			case 0x00000000:
				iLocal_833++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(Local_4.f_680);
				Function_437(Local_4.f_680, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1,5f);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 1,5f);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 1);
				TASK_GO_NEAR_COORD(false, &Local_4 + 1520, 10.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, true, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 804)[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 2, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 804)[12]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 3, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 756)[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 4, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 756)[12]);
				Function_228(&bLocal_946);
				iLocal_833++;
				break;
			
			case 0x00000002:
				if (Function_300(&bLocal_946) <= 25.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_680);
					Function_437(Local_4.f_680, 5, 3);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 4294967295);
					TASK_GO_NEAR_COORD(false, &Local_4 + 1520, 10.0f, 3);
					Function_228(&bLocal_946);
					iLocal_833++;
				}
				break;
			
			case 0x00000003:
				if (Function_300(&bLocal_946) <= 15.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_680);
					Function_364(Local_4.f_680);
					Function_435(StackVal, StackVal, Local_4.f_680, *(&Local_4 + 1520), 0, 3);
					Function_228(&bLocal_946);
					iLocal_833++;
				}
				break;
			
			case 0x00000004:
				iLocal_833++;
				break;
			}
	}
	return;
}

void Function_439(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x13F82 / 81794
{
	if (IS_ACTOR_VALID(bLocal_606))
	{
		if (SQUAD_IS_VALID(bParam0))
		{
			switch (iLocal_832)
			{
				case 0x00000000:
					iLocal_832++;
					break;
				
				case 0x00000001:
					CLEAR_ACTOR_MIN_SPEED(bLocal_606);
					CLEAR_ACTOR_MAX_SPEED(bLocal_606);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_606);
					Function_189(13, 0, 1);
					MEMORY_PREFER_RIDING(bLocal_606, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_606, true);
					bLocal_830 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1784, -14.0f, 1, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
					TASK_SEQUENCE_RELEASE(bLocal_830, 1);
					TASK_PRIORITY_SET(bLocal_606, true);
					iLocal_832++;
					break;
				
				case 0x00000002:
					if (Function_300(bParam1) <= fParam2)
					{
						if (SQUAD_IS_VALID(bParam0))
						{
							if (SQUAD_GET_SIZE(bParam0) > 2)
							{
								if (!iLocal_904)
								{
									bLocal_859 = Function_440(StackVal, bParam0);
									if (IS_ACTOR_VALID(bLocal_859))
									{
										vLocal_877 = { 0.0f, 0.0f, 0.0f };
										bLocal_830 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(0, bLocal_859, &vLocal_877, 0, 0, 0, 0, 0, 0, 1);
										TASK_STAND_STILL(false, -1.0f, 0, 0);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
										TASK_SEQUENCE_RELEASE(bLocal_830, 1);
										TASK_PRIORITY_SET(bLocal_606, true);
										iLocal_904 = 1;
									}
								}
								else if (!Function_427(bLocal_859, bParam0, 0))
								{
									iLocal_904 = 0;
								}
							}
							else if (!GET_TASK_STATUS(bLocal_606, 72) != 1)
							{
								bLocal_830 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, bParam3, bParam4, 1, 0);
								TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
								TASK_SEQUENCE_RELEASE(bLocal_830, 1);
								TASK_PRIORITY_SET(bLocal_606, true);
								iLocal_904 = 0;
							}
						}
						Function_228(bParam1);
					}
					if (IS_VOLUME_VALID(Local_4.f_1120))
					{
						if (IS_ACTOR_IN_VOLUME(bLocal_606, Local_4.f_1120))
						{
							iLocal_832++;
						}
					}
					break;
				
				case 0x00000003:
					CLEAR_ACTOR_MIN_SPEED(bLocal_606);
					CLEAR_ACTOR_MAX_SPEED(bLocal_606);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_606);
					GET_OBJECT_POSITION(Local_4.f_1504, &uLocal_898);
					bLocal_830 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1332)[6], 3.0f, 2, 0, 1);
					TASK_FACE_COORD(false, &uLocal_898, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
					TASK_SEQUENCE_RELEASE(bLocal_830, 1);
					TASK_PRIORITY_SET(bLocal_606, true);
					iLocal_832++;
					break;
				
				case 0x00000004:
					iLocal_832++;
					break;
			}
		}
	}
}

bool Function_440(bool bParam0, bool bParam1) //Position: 0x141C0 / 82368
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			bVar1 = 4294967295;
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				if (bVar0 >= 4294967295)
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				}
				if (IS_ACTOR_VALID(bVar2))
				{
					fVar3 = Function_441(bParam1, bVar2);
					if (bVar1 > 0 || fVar3 < fVar4)
					{
						fVar4 = fVar3;
						bVar1 = bVar0;
					}
				}
				bVar0++;
			}
			if (bVar1 > 0)
			{
				return SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
			}
		}
	}
	return "";
}

var Function_441(bool bParam0, bool bParam1) //Position: 0x1423C / 82492
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_354(bParam0);
			vVar0 = { StackVal, StackVal, Function_354(bParam0) };
			Function_354(bParam1);
			vVar3 = { StackVal, StackVal, Function_354(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_442() //Position: 0x142D7 / 82647
{
	int iVar0;
	int iVar1;
	
	iVar0 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_44) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_56)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_48)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_52));
	iVar1 = (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_48) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_52));
	UI_SET_STRING("Race_Pos", INT_TO_STRING((iVar0 - iVar1)));
	UI_SET_STRING("Race_Total_Racers", INT_TO_STRING(15));
	UI_LABEL_SET_TEXT("RacePosition", "Race_Position_Format");
	UI_REFRESH("RacePosition");
	return;
}

void Function_443(int iParam0) //Position: 0x14382 / 82818
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar6;
	bool bVar7;
	
	if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
	{
		bVar6 = 80.0f;
		bVar7 = 100.0f;
	}
	else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
	{
		bVar6 = 80.0f;
		bVar7 = 100.0f;
	}
	else
	{
		bVar6 = 80.0f;
		bVar7 = 100.0f;
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		if (SQUAD_IS_VALID(iParam0->f_48))
		{
			if (SQUAD_GET_SIZE(iParam0->f_48) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_48) - 1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_48, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						GET_OBJECT_POSITION(bVar1, &uVar3);
						if ((StackVal && !Function_353(!Function_445(bVar1, Global_34573, bVar7), bVar1, bVar6)) && !WOULD_ACTOR_BE_VISIBLE(Function_444(bVar1), &uVar3, 3212836864))
						{
							bVar2 = GET_BLIP_ON_ACTOR(bVar1);
							if (IS_BLIP_VALID(bVar2))
							{
								REMOVE_BLIP(bVar2);
							}
							SQUAD_LEAVE(bVar1);
							DESTROY_ACTOR(bVar1);
						}
					}
					bVar0++;
				}
			}
		}
		if (SQUAD_IS_VALID(iParam0->f_52))
		{
			if (SQUAD_GET_SIZE(iParam0->f_52) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_52) - 1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_52, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						GET_OBJECT_POSITION(bVar1, &uVar3);
						if ((StackVal && !Function_353(!Function_445(bVar1, Global_34573, bVar7), bVar1, bVar6)) && !WOULD_ACTOR_BE_VISIBLE(Function_444(bVar1), &uVar3, 3212836864))
						{
							bVar2 = GET_BLIP_ON_ACTOR(bVar1);
							if (IS_BLIP_VALID(bVar2))
							{
								REMOVE_BLIP(bVar2);
							}
							SQUAD_LEAVE(bVar1);
							DESTROY_ACTOR(bVar1);
						}
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

var Function_444(bool bParam0) //Position: 0x14516 / 83222
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

bool Function_445(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14531 / 83249
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

void Function_446(int iParam0, float fParam1) //Position: 0x14642 / 83522
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (SQUAD_IS_VALID(iParam0->f_52))
	{
		if (SQUAD_IS_VALID(iParam0->f_48))
		{
			if (SQUAD_IS_VALID(iParam0->f_44))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
					{
						bVar3 = 6.0f;
						bVar4 = 12.0f;
					}
					else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
					{
						bVar3 = 9.0f;
						bVar4 = 20.0f;
					}
					else
					{
						bVar3 = 10.0f;
						bVar4 = 23.0f;
					}
					if (!iParam0->f_100)
					{
						if (SQUAD_GET_SIZE(iParam0->f_44) != 0 && SQUAD_GET_SIZE(iParam0->f_48) != 0)
						{
							if (SQUAD_GET_SIZE(iParam0->f_52) == 1)
							{
								bVar0 = false;
								while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_52) - 1))
								{
									bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_52, bVar0);
									if (IS_ACTOR_VALID(bVar1))
									{
										if (!Function_353(StackVal, bVar1, bVar4))
										{
											CLEAR_ACTOR_MAX_SPEED(bVar1);
											TASK_CLEAR(bVar1);
											SQUAD_LEAVE(bVar1);
											SQUAD_JOIN(bVar1, iParam0->f_44);
											if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
											{
												DECOR_REMOVE(bVar1, "bRejoinInProgress");
											}
											bVar2 = GET_BLIP_ON_ACTOR(bVar1);
											if (IS_BLIP_VALID(bVar2))
											{
												REMOVE_BLIP(bVar2);
											}
											if (DECOR_GET_BOOL(bVar1, "bIsStraggler"))
											{
												iParam0->f_80++;
												DECOR_REMOVE(bVar1, "bIsStraggler");
											}
										}
									}
									bVar0++;
								}
							}
						}
					}
					bVar0 = false;
					while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_52) - 1))
					{
						bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_52, bVar0);
						if (IS_ACTOR_VALID(bVar1))
						{
							bVar2 = GET_BLIP_ON_ACTOR(bVar1);
							if (!IS_BLIP_VALID(bVar2))
							{
								bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, 425, 0, 2, 0);
								SET_BLIP_FLAG(bVar2, 4096, 0);
							}
							else if (!GET_BLIP_ICON(bVar2) != 425)
							{
								CHANGE_BLIP_ICON(bVar2, 425);
								SET_BLIP_FLAG(bVar2, 4096, 0);
							}
							if (!GET_TASK_STATUS(bVar1, 26) != 1)
							{
								if (!GET_LASSO_TARGET(Global_34573) != bVar1)
								{
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar1, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar1, true);
								}
							}
							if (Function_353(StackVal, bVar1, bVar3))
							{
								if (StackVal && Function_353(iParam0->f_100, bVar1, bVar4))
								{
								}
								else
								{
									CLEAR_ACTOR_MAX_SPEED(bVar1);
									TASK_CLEAR(bVar1);
									SQUAD_LEAVE(bVar1);
									SQUAD_JOIN(bVar1, iParam0->f_44);
									if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
									{
										DECOR_REMOVE(bVar1, "bRejoinInProgress");
									}
									bVar2 = GET_BLIP_ON_ACTOR(bVar1);
									if (IS_BLIP_VALID(bVar2))
									{
										REMOVE_BLIP(bVar2);
									}
									if (DECOR_GET_BOOL(bVar1, "bIsStraggler"))
									{
										iParam0->f_80++;
										DECOR_REMOVE(bVar1, "bIsStraggler");
									}
								}
							}
							if (!iParam0->f_100)
							{
								if (Function_300(iParam0 + 88) <= fParam1)
								{
									if (!Function_353(StackVal, bVar1, bVar4))
									{
										if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
										{
											SQUAD_LEAVE(bVar1);
											SQUAD_JOIN(bVar1, iParam0->f_48);
											TASK_CLEAR(bVar1);
											if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
											{
												DECOR_REMOVE(bVar1, "bRejoinInProgress");
											}
											bVar2 = GET_BLIP_ON_ACTOR(bVar1);
											if (!IS_BLIP_VALID(bVar2))
											{
												bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, 424, 0, 2, 0);
												SET_BLIP_FLAG(bVar2, 4096, 0);
											}
											else
											{
												CHANGE_BLIP_ICON(bVar2, 424);
												SET_BLIP_FLAG(bVar2, 4096, 0);
											}
											if (!DECOR_GET_BOOL(bVar1, "bIsStraggler"))
											{
												iParam0->f_76++;
												DECOR_SET_BOOL(bVar1, "bIsStraggler", true);
											}
										}
									}
									if (!DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
									{
										DECOR_SET_BOOL(bVar1, "bRejoinInProgress", true);
									}
									Function_228(iParam0 + 88);
								}
							}
						}
						bVar0++;
					}
				}
			}
		}
	}
	return;
}

void Function_447(int iParam0) //Position: 0x14A80 / 84608
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	if (SQUAD_IS_VALID(iParam0->f_44))
	{
		if (SQUAD_IS_VALID(iParam0->f_48))
		{
			if (SQUAD_IS_VALID(iParam0->f_52))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
					{
						iVar5 = 1;
						iVar4 = 4;
						bVar8 = 7.0f;
						bVar6 = 12.0f;
						bVar7 = 14.0f;
					}
					else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
					{
						iVar5 = 3;
						iVar4 = 9;
						bVar8 = 12.0f;
						bVar6 = 20.0f;
						bVar7 = 22.0f;
					}
					else
					{
						iVar5 = 3;
						iVar4 = 9;
						bVar8 = 15.0f;
						bVar6 = 23.0f;
						bVar7 = 25.0f;
					}
					if (SQUAD_GET_SIZE(iParam0->f_44) < iVar5)
					{
						if (!iParam0->f_100)
						{
							bVar2 = false;
							while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_44) - 1))
							{
								bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_44, bVar2);
								if (IS_ACTOR_VALID(bVar0))
								{
									if (!Function_353(StackVal, bVar0, bVar8))
									{
										if (Function_353(StackVal, bVar0, bVar6))
										{
											PRINTINT(SQUAD_GET_SIZE(iParam0->f_44));
											PRINTNL();
											SET_ACTOR_MAX_SPEED(bVar0, 4);
											SQUAD_LEAVE(bVar0);
											SQUAD_JOIN(bVar0, iParam0->f_52);
											iParam0->f_84 = TASK_SEQUENCE_OPEN();
											TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
											TASK_SEQUENCE_CLOSE();
											TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
											TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
											TASK_PRIORITY_SET(bVar0, true);
											bVar1 = GET_BLIP_ON_ACTOR(bVar0);
											if (!IS_BLIP_VALID(bVar1))
											{
												bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
												SET_BLIP_FLAG(bVar1, 4096, 0);
											}
											else
											{
												CHANGE_BLIP_ICON(bVar1, 425);
												SET_BLIP_FLAG(bVar1, 4096, 0);
											}
										}
										else
										{
											SQUAD_LEAVE(bVar0);
											SQUAD_JOIN(bVar0, iParam0->f_48);
											bVar1 = GET_BLIP_ON_ACTOR(bVar0);
											if (!IS_BLIP_VALID(bVar1))
											{
												bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 424, 0, 2, 0);
												SET_BLIP_FLAG(bVar1, 4096, 0);
											}
											else
											{
												CHANGE_BLIP_ICON(bVar1, 424);
												SET_BLIP_FLAG(bVar1, 4096, 0);
											}
										}
									}
									else
									{
										CLEAR_ACTOR_MAX_SPEED(bVar0);
										TASK_CLEAR(bVar0);
										SQUAD_LEAVE(bVar0);
										SQUAD_JOIN(bVar0, iParam0->f_56);
										if (DECOR_GET_BOOL(bVar0, "bRejoinInProgress"))
										{
											DECOR_SET_BOOL(bVar0, "bRejoinInProgress", false);
										}
										bVar1 = GET_BLIP_ON_ACTOR(bVar0);
										if (IS_BLIP_VALID(bVar1))
										{
											REMOVE_BLIP(bVar1);
										}
									}
								}
								if (SQUAD_GET_SIZE(iParam0->f_44) == 0)
								{
									iParam0->f_100 = 1;
									Function_228(iParam0 + 88);
								}
								bVar2++;
							}
						}
					}
					else
					{
						bVar2 = false;
						while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_44) - 1))
						{
							bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_44, bVar2);
							if (IS_ACTOR_VALID(bVar0))
							{
								if (!Function_353(StackVal, bVar0, bVar7))
								{
									if ((SQUAD_GET_SIZE(iParam0->f_48) + SQUAD_GET_SIZE(iParam0->f_52)) < iVar4)
									{
										SQUAD_LEAVE(bVar0);
										SQUAD_JOIN(bVar0, iParam0->f_48);
										bVar1 = GET_BLIP_ON_ACTOR(bVar0);
										if (!IS_BLIP_VALID(bVar1))
										{
											bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 424, 0, 2, 0);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
										if (!DECOR_GET_BOOL(bVar0, "bIsStraggler"))
										{
											iParam0->f_76++;
											DECOR_SET_BOOL(bVar0, "bIsStraggler", true);
										}
									}
									else
									{
										SET_ACTOR_MAX_SPEED(bVar0, 4);
										SQUAD_LEAVE(bVar0);
										SQUAD_JOIN(bVar0, iParam0->f_52);
										iParam0->f_84 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
										TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
										TASK_PRIORITY_SET(bVar0, true);
										bVar1 = GET_BLIP_ON_ACTOR(bVar0);
										if (!IS_BLIP_VALID(bVar1))
										{
											bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
										else
										{
											CHANGE_BLIP_ICON(bVar1, 425);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
									}
								}
							}
							bVar2++;
						}
					}
					bVar2 = false;
					while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_48) - 1))
					{
						bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_48, bVar2);
						if (IS_ACTOR_VALID(bVar0))
						{
							bVar1 = GET_BLIP_ON_ACTOR(bVar0);
							if (!IS_BLIP_VALID(bVar1))
							{
								bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 424, 0, 2, 0);
								SET_BLIP_FLAG(bVar1, 4096, 0);
							}
							else if (!GET_BLIP_ICON(bVar1) != 424)
							{
								CHANGE_BLIP_ICON(bVar1, 424);
								SET_BLIP_FLAG(bVar1, 4096, 0);
							}
							if (StackVal && IS_OBJECT_VALID(IS_OBJECT_VALID(StackVal)))
							{
								if (StackVal || Function_353(Function_353(StackVal, bVar0, bVar6), bVar0, bVar6))
								{
									SET_ACTOR_MAX_SPEED(bVar0, 4);
									SQUAD_LEAVE(bVar0);
									SQUAD_JOIN(bVar0, iParam0->f_52);
									if (Function_353(StackVal, bVar0, bVar6))
									{
									}
									else if (Function_353(StackVal, bVar0, bVar6))
									{
									}
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar0, true);
									bVar1 = GET_BLIP_ON_ACTOR(bVar0);
									if (!IS_BLIP_VALID(bVar1))
									{
										bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
										SET_BLIP_FLAG(bVar1, 4096, 0);
									}
									else
									{
										CHANGE_BLIP_ICON(bVar1, 425);
										SET_BLIP_FLAG(bVar1, 4096, 0);
									}
								}
								else
								{
									bVar3 = false;
									while (bVar3 < (iParam0->f_104 - 1))
									{
										if (IS_ACTOR_VALID((*iParam0 + 104)[bVar3]))
										{
											if (IS_ACTOR_PLAYER((*iParam0 + 104)[bVar3]))
											{
												if (Function_353(bVar0, (*iParam0 + 104)[bVar3], 7.0f))
												{
													PRINTINT(bVar3);
													PRINTNL();
													SET_ACTOR_MAX_SPEED(bVar0, 4);
													SQUAD_LEAVE(bVar0);
													SQUAD_JOIN(bVar0, iParam0->f_52);
													iParam0->f_84 = TASK_SEQUENCE_OPEN();
													TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
													TASK_SEQUENCE_CLOSE();
													TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
													TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
													TASK_PRIORITY_SET(bVar0, true);
													bVar1 = GET_BLIP_ON_ACTOR(bVar0);
													if (!IS_BLIP_VALID(bVar1))
													{
														bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
														SET_BLIP_FLAG(bVar1, 4096, 0);
													}
													else
													{
														CHANGE_BLIP_ICON(bVar1, 425);
														SET_BLIP_FLAG(bVar1, 4096, 0);
													}
												}
											}
											else if (Function_353(bVar0, (*iParam0 + 104)[bVar3], 15.0f))
											{
												PRINTINT(bVar3);
												PRINTNL();
												SET_ACTOR_MAX_SPEED(bVar0, 4);
												SQUAD_LEAVE(bVar0);
												SQUAD_JOIN(bVar0, iParam0->f_52);
												iParam0->f_84 = TASK_SEQUENCE_OPEN();
												TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
												TASK_SEQUENCE_CLOSE();
												TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
												TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
												TASK_PRIORITY_SET(bVar0, true);
												bVar1 = GET_BLIP_ON_ACTOR(bVar0);
												if (!IS_BLIP_VALID(bVar1))
												{
													bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
													SET_BLIP_FLAG(bVar1, 4096, 0);
												}
												else
												{
													CHANGE_BLIP_ICON(bVar1, 425);
													SET_BLIP_FLAG(bVar1, 4096, 0);
												}
												if (DECOR_GET_BOOL(bVar0, "bIsStraggler"))
												{
													DECOR_REMOVE(bVar0, "bIsStraggler");
												}
											}
										}
										bVar3++;
									}
								}
							}
						}
						bVar2++;
					}
				}
			}
		}
	}
	return;
}

void Function_448(int iParam0) //Position: 0x1510B / 86283
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	int iVar8;
	
	if (IS_OBJECT_VALID(StackVal))
	{
		if (SQUAD_IS_VALID(iParam0->f_44))
		{
			if (SQUAD_IS_VALID(iParam0->f_48))
			{
				if (SQUAD_IS_VALID(iParam0->f_56))
				{
					if (SQUAD_IS_VALID(iParam0->f_52))
					{
						if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
						{
							iVar8 = 1;
						}
						else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
						{
							iVar8 = 3;
						}
						else
						{
							iVar8 = 3;
						}
						if (SQUAD_GET_SIZE(iParam0->f_44) < iVar8)
						{
							if (SQUAD_GET_SIZE(iParam0->f_56) > 1)
							{
								bVar6 = GET_BLIP_ON_OBJECT(StackVal);
								if (IS_BLIP_VALID(bVar6))
								{
									REMOVE_BLIP(bVar6);
								}
								bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
								if (IS_BLIP_VALID(bVar7))
								{
									REMOVE_BLIP(bVar7);
								}
								SQUAD_COMPUTE_CENTROID(iParam0->f_56, &vVar0);
								Function_450(iParam0->f_56);
								vVar3 = { StackVal, StackVal, Function_450(iParam0->f_56) };
							}
							else if (SQUAD_GET_SIZE(iParam0->f_52) > 1)
							{
								bVar6 = GET_BLIP_ON_OBJECT(StackVal);
								if (IS_BLIP_VALID(bVar6))
								{
									REMOVE_BLIP(bVar6);
								}
								bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
								if (IS_BLIP_VALID(bVar7))
								{
									REMOVE_BLIP(bVar7);
								}
								SQUAD_COMPUTE_CENTROID(iParam0->f_52, &vVar0);
								Function_449(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_449(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_450(iParam0->f_52);
								vVar3 = { StackVal, StackVal, Function_450(iParam0->f_52) };
							}
							else if (SQUAD_GET_SIZE(iParam0->f_48) > 1)
							{
								bVar6 = GET_BLIP_ON_OBJECT(StackVal);
								if (IS_BLIP_VALID(bVar6))
								{
									REMOVE_BLIP(bVar6);
								}
								bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
								if (IS_BLIP_VALID(bVar7))
								{
									REMOVE_BLIP(bVar7);
								}
								SQUAD_COMPUTE_CENTROID(iParam0->f_48, &vVar0);
								Function_449(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_449(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_450(iParam0->f_48);
								vVar3 = { StackVal, StackVal, Function_450(iParam0->f_48) };
							}
							else
							{
								bVar6 = GET_BLIP_ON_OBJECT(StackVal);
								if (IS_BLIP_VALID(bVar6))
								{
									REMOVE_BLIP(bVar6);
								}
								bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
								if (IS_BLIP_VALID(bVar7))
								{
									REMOVE_BLIP(bVar7);
								}
								if (IS_OBJECT_VALID(StackVal))
								{
									GET_OBJECT_POSITION(StackVal, &vVar0);
									GET_OBJECT_ORIENTATION(StackVal, &vVar3);
								}
							}
						}
						else
						{
							SQUAD_COMPUTE_CENTROID(iParam0->f_44, &vVar0);
							Function_450(iParam0->f_44);
							vVar3 = { StackVal, StackVal, Function_450(iParam0->f_44) };
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*iParam0)))
							{
								Function_245(*iParam0);
								if (!Function_73(StackVal, StackVal, Function_245(*iParam0)))
								{
									bVar7 = ADD_BLIP_FOR_OBJECT(*iParam0, 425, 0f, 2, 0);
									if (IS_BLIP_VALID(bVar7))
									{
										SET_BLIP_SCALE(bVar7, 2,5f);
										SET_BLIP_NAME(bVar7, "nBLIP_HERD");
										SET_BLIP_FLAG(bVar7, 4096, 0);
										SET_BLIP_PRIORITY(bVar7, true);
									}
								}
							}
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)))
							{
								Function_245(StackVal);
								if (!Function_73(StackVal, StackVal, Function_245(StackVal)))
								{
									bVar6 = ADD_BLIP_FOR_OBJECT(StackVal, 422, 0f, 2, 0);
									if (IS_BLIP_VALID(bVar6))
									{
										SET_BLIP_SCALE(bVar6, 1.0f);
										SET_BLIP_PRIORITY(bVar6, 2);
									}
								}
							}
						}
						SET_OBJECT_POSITION(StackVal, vVar0);
						SET_OBJECT_POSITION(*iParam0, vVar0);
						SET_OBJECT_ORIENTATION(*iParam0, vVar3);
						GET_OBJECT_POSITION(StackVal, iParam0 + 16);
					}
				}
			}
		}
	}
	return;
}

vector3 Function_449(vector3 vParam0, bool bParam3) //Position: 0x153C9 / 86985
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	bVar1 = 4294967295;
	if (!Function_73(StackVal, StackVal, vParam0))
	{
		if (IS_OBJECT_VALID(bParam3))
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_PATH_POINTS(bParam3) - 1))
			{
				GET_PATH_POINT(bParam3, bVar0, &vVar8);
				vVar2 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar8, vParam0, StackVal) };
				if (bVar1 > 0 || VMAG(vVar2) > VMAG(vVar5))
				{
					vVar5 = { StackVal, StackVal, vVar2 };
					bVar1 = bVar0;
				}
				bVar0++;
			}
		}
	}
	if (bVar1 > 0)
	{
		GET_PATH_POINT(bParam3, bVar1, &vVar8);
		return StackVal, StackVal, vVar8;
	}
	GET_PATH_POINT(bParam3, (GET_NUM_PATH_POINTS(bParam3) - 1), &vVar8);
	return StackVal, StackVal, vVar8;
}

vector3 Function_450(bool bParam0) //Position: 0x15469 / 87145
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	struct<9> Var8;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		UNK_0x44986367(&vVar5, Function_451(bVar1));
		vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar5, vVar8, StackVal) };
		bVar0++;
	}
	vVar8 = (vVar8.x / IntToFloat(SQUAD_GET_SIZE(bParam0)));
	vVar8.f_4 = 0.0f;
	vVar8.f_8 = (vVar8.z / IntToFloat(SQUAD_GET_SIZE(bParam0)));
	vVar2.f_4 = UNK_0x9C40E671(&vVar8);
	return StackVal, StackVal, vVar2;
}

var Function_451(bool bParam0) //Position: 0x154D6 / 87254
{
	return GET_HEADING(bParam0);
}

void Function_452(int iParam0) //Position: 0x154E1 / 87265
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
	{
		bVar2 = 7.0f;
	}
	else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
	{
		bVar2 = 12.0f;
	}
	else
	{
		bVar2 = 15.0f;
	}
	if (SQUAD_IS_VALID(iParam0->f_44))
	{
		if (SQUAD_IS_VALID(iParam0->f_56))
		{
			if (SQUAD_IS_VALID(iParam0->f_48))
			{
				if (SQUAD_IS_VALID(iParam0->f_52))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bVar0 = false;
						while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_44) - 1))
						{
							bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_44, bVar0);
							if (IS_ACTOR_VALID(bVar1))
							{
								if (Function_353(StackVal, bVar1, bVar2))
								{
									SQUAD_LEAVE(bVar1);
									SQUAD_JOIN(bVar1, iParam0->f_56);
								}
							}
							bVar0++;
						}
						bVar0 = false;
						while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_48) - 1))
						{
							bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_48, bVar0);
							if (IS_ACTOR_VALID(bVar1))
							{
								if (Function_353(StackVal, bVar1, bVar2))
								{
									SQUAD_LEAVE(bVar1);
									SQUAD_JOIN(bVar1, iParam0->f_56);
									if (DECOR_GET_BOOL(bVar1, "bIsStraggler"))
									{
										iParam0->f_80++;
										DECOR_REMOVE(bVar1, "bIsStraggler");
									}
								}
							}
							bVar0++;
						}
						bVar0 = false;
						while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_52) - 1))
						{
							bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_52, bVar0);
							if (IS_ACTOR_VALID(bVar1))
							{
								if (Function_353(StackVal, bVar1, bVar2))
								{
									CLEAR_ACTOR_MAX_SPEED(bVar1);
									TASK_CLEAR(bVar1);
									if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
									{
										DECOR_REMOVE(bVar1, "bRejoinInProgress");
									}
									bVar3 = GET_BLIP_ON_ACTOR(bVar1);
									if (IS_BLIP_VALID(bVar3))
									{
										REMOVE_BLIP(bVar3);
									}
									SQUAD_LEAVE(bVar1);
									SQUAD_JOIN(bVar1, iParam0->f_56);
									if (DECOR_GET_BOOL(bVar1, "bIsStraggler"))
									{
										iParam0->f_80++;
										DECOR_REMOVE(bVar1, "bIsStraggler");
									}
								}
							}
							bVar0++;
						}
					}
				}
			}
		}
	}
	return;
}

void Function_453(bool bParam0, bool bParam1, bool bParam2) //Position: 0x156FD / 87805
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (SQUAD_IS_VALID(bParam1))
		{
			if (IS_VOLUME_VALID(bParam2))
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						if (IS_ACTOR_IN_VOLUME(bVar1, bParam2))
						{
							SQUAD_LEAVE(bVar1);
							SQUAD_JOIN(bVar1, bParam1);
						}
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

void Function_454() //Position: 0x15763 / 87907
{
	if (((iLocal_603 < 5 && iLocal_603 > 105) && !iLocal_603 != 104) && !iLocal_603 != 103)
	{
		if (bLocal_906)
		{
			Function_448(&Local_986);
			Function_447(&Local_986);
			Function_446(&Local_986, 0x41700000);
			if (iLocal_603 > 10)
			{
				if (!iLocal_905)
				{
					Function_475(Local_986.f_48, &bLocal_940, 3.0f, Local_4.f_1784, -14.0f);
				}
			}
			if (iLocal_603 > 10)
			{
				if (Function_300(&bLocal_608) <= (3.0f * 8.0f))
				{
					if (Function_300(&bLocal_943) <= 0,2f)
					{
						Function_443(&Local_986);
						Function_228(&bLocal_943);
					}
				}
			}
			Function_442();
		}
		Function_474();
		Function_433(Global_34573);
		Function_473();
		Function_472();
		Function_432();
		if (iLocal_603 > 9)
		{
			if (((SQUAD_IS_VALID(Local_986.f_44) && SQUAD_IS_VALID(Local_986.f_48)) && SQUAD_IS_VALID(Local_986.f_56)) && SQUAD_IS_VALID(Local_986.f_52))
			{
				if (SQUAD_GET_SIZE(Local_986.f_44) != bLocal_842 || ((SQUAD_GET_SIZE(Local_986.f_48) != 0 && SQUAD_GET_SIZE(Local_986.f_56) != 0) && SQUAD_GET_SIZE(Local_986.f_52) != 0))
				{
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_249();
					Function_228(&bLocal_608);
					iLocal_603 = 106;
				}
			}
		}
		Function_466();
	}
	switch (iLocal_603)
	{
		case 0x00000000:
			Function_335(0);
			SET_ACTOR_HEALTH(bLocal_606, GET_ACTOR_MAX_HEALTH(bLocal_606));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (iLocal_617[5] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_327();
				bLocal_604 = Global_30637[0];
				if (!Function_326(bLocal_604))
				{
					Function_324(&Local_532);
				}
				Function_323(Global_34573, (*&Local_4 + 1284)[0], 1, 1, 1);
				iLocal_839 = 0;
				if (IS_ACTOR_VALID(bLocal_607))
				{
					TASK_STAND_STILL(bLocal_607, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_607, true);
				}
				if (IS_ACTOR_VALID(bLocal_606))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_606);
					CLEAR_ACTOR_MAX_SPEED(bLocal_606);
					TASK_STAND_STILL(bLocal_606, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_606, true);
				}
				Function_228(&bLocal_608);
				iLocal_603 = 1;
			}
			else
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_326(bLocal_604) || bLocal_604 != 4294967295))
			{
				Function_465();
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_403() && Function_465())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				iLocal_831 = 0;
				iLocal_832 = 0;
				iLocal_841 = 0;
				iLocal_835 = 0;
				iLocal_836 = 0;
				iLocal_833 = 0;
				iLocal_834 = 0;
				iLocal_846 = 0;
				iLocal_837 = 0;
				iLocal_904 = 0;
				iLocal_630 = 0;
				bLocal_906 = false;
				iLocal_905 = 0;
				iLocal_914 = 0;
				iLocal_916 = 0;
				iLocal_915 = 0;
				Function_395(&iLocal_908);
				bLocal_842 = Function_321(Function_322(Local_532));
				PRINTINT(bLocal_842);
				PRINTNL();
				bLocal_843 = (15 - bLocal_842);
				PRINTINT(bLocal_843);
				PRINTNL();
				bLocal_907 = Function_464(Function_322(Local_532));
				if (bLocal_907)
				{
				}
				bLocal_849 = Global_34165.f_124;
				bLocal_850 = Global_34165.f_128;
				PRINTINT(bLocal_849);
				PRINTNL();
				PRINTINT(bLocal_850);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Local_986.f_76 = bLocal_849;
				Local_986.f_80 = bLocal_850;
				Function_462();
				if (IS_ACTOR_VALID(bLocal_861))
				{
					SET_ACTOR_HEALTH(bLocal_861, 50.0f);
					Function_323(bLocal_861, (*&Local_4 + 1132)[4], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_862))
				{
					SET_ACTOR_HEALTH(bLocal_862, 50.0f);
					Function_323(bLocal_862, (*&Local_4 + 1132)[5], 1, 1, 1);
				}
				if (iLocal_617[5] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_607))
						{
							Function_323(bLocal_607, (*&Local_4 + 1284)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_607))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_607);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_606))
					{
						Function_189(13, 0, 1);
						Function_323(bLocal_606, (*&Local_4 + 1284)[1], 1, 1, 1);
						if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
						{
							Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1284)[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_606) && !IS_ACTOR_MOUNTED((*&Local_4 + 628)[02]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_606, (*&Local_4 + 628)[02]);
							}
						}
					}
					Function_228(&bLocal_608);
					iLocal_603 = 5;
				}
				else
				{
					Function_228(&bLocal_608);
					iLocal_603 = 6;
				}
				if ((SQUAD_IS_VALID(Local_986.f_56) && SQUAD_IS_VALID(Local_986.f_52)) && SQUAD_IS_VALID(Local_986.f_48))
				{
					Function_344(Local_986.f_56);
					Function_344(Local_986.f_52);
					Function_344(Local_986.f_48);
					Function_304(Local_986.f_56, Local_986.f_44);
					Function_304(Local_986.f_52, Local_986.f_44);
					Function_304(Local_986.f_48, Local_986.f_44);
				}
				if (SQUAD_IS_VALID(Local_986.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_44);
					Function_303(Local_986.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_1040, -1.0f);
				}
				Function_383(&(Local_671[017]), bLocal_606, "Uncle", 1, 0x5f5e100, 1);
				Function_383(&(Local_671[117]), Local_986.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[217]), Local_986.f_48, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[317]), Local_986.f_52, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[417]), Local_986.f_56, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[517]), bLocal_860, "Engineer", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[617]), Local_4.f_800, "Train_Passenger", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[717]), Local_4.f_824, "Train_Marshal", 0, 0x5f5e100, 1);
				Function_378(&(Local_671[117]), 2);
				Function_378(&(Local_671[217]), 2);
				Function_378(&(Local_671[317]), 2);
				Function_378(&(Local_671[417]), 2);
				Function_378(&(Local_671[517]), 2);
				Function_378(&(Local_671[617]), 2);
				Function_378(&(Local_671[717]), 2);
				Function_244(iLocal_602);
				Function_372(StackVal, StackVal, Function_244(iLocal_602), iLocal_602, Global_30637[0], Function_247(iLocal_602), 2);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_606) && SQUAD_IS_VALID(Local_986.f_44))
			{
				if (Function_371(bLocal_606, 1, 0x41700000) && Function_370(Local_986.f_44, 1))
				{
					Function_228(&bLocal_608);
					iLocal_603 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(Local_986.f_44))
			{
				Function_369();
				Function_461();
				Function_303(Local_986.f_44);
				Function_303(Local_986.f_48);
				Function_366(Local_986.f_44, &Local_4 + 932);
				Function_366(Local_986.f_48, &Local_4 + 932);
				Function_365(Local_986.f_44, 2, 1);
			}
			CAMERA_RESET(0);
			Function_228(&bLocal_608);
			iLocal_603 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_228(&bLocal_608);
				iLocal_603 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_929))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_929 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_531, "HOME02RANCH01_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_929))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_929, 0);
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_606))
				{
					CLEAR_ACTOR_MIN_SPEED(bLocal_606);
					CLEAR_ACTOR_MAX_SPEED(bLocal_606);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_606);
					Function_189(13, 0, 1);
					MEMORY_PREFER_RIDING(bLocal_606, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_606, true);
					bLocal_830 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, Local_4.f_1040, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
					TASK_SEQUENCE_RELEASE(bLocal_830, 1);
					TASK_PRIORITY_SET(bLocal_606, true);
				}
				if (iLocal_617[5] == 1)
				{
					if (SQUAD_IS_VALID(Local_986.f_44))
					{
						Function_369();
						Function_461();
						Function_303(Local_986.f_44);
						Function_303(Local_986.f_48);
						Function_366(Local_986.f_44, &Local_4 + 932);
						Function_366(Local_986.f_48, &Local_4 + 932);
						Function_365(Local_986.f_44, 2, 1);
					}
				}
				iLocal_904 = 0;
				if (SQUAD_IS_VALID(Local_986.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_48);
					Function_364(Local_986.f_48);
				}
				*(&Local_986 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_986.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_52);
					Function_364(Local_986.f_52);
				}
				Local_986.f_8 = Local_4.f_1512;
				GET_OBJECT_POSITION(Local_4.f_1512, &uLocal_874);
				if (SQUAD_IS_VALID(Local_986.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_56);
					bLocal_830 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, Local_4.f_1036, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_830);
					TASK_SEQUENCE_RELEASE(bLocal_830, 1);
				}
				if (bLocal_907)
				{
					if (IS_ACTOR_DEAD(bLocal_860))
					{
						Function_421();
					}
					else
					{
						Function_460();
					}
				}
				else
				{
					Function_459();
				}
				Function_228(&bLocal_608);
				iLocal_603 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 3.0f)
			{
				if (bLocal_907)
				{
					Function_458();
				}
				else
				{
					Function_457();
				}
				Function_228(&bLocal_608);
				iLocal_603 = 8;
			}
			break;
		
		case 0x00000008:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 3.0f)
			{
				Function_456();
				Function_228(&bLocal_608);
				iLocal_603 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_228(&bLocal_976);
				Function_228(&bLocal_979);
				Function_360("home02_ranch01_obj06", 7,5f, 1, 2, 0, 0, 0);
				Function_228(&bLocal_608);
				Function_228(&bLocal_611);
				Function_228(&bLocal_614);
				iLocal_603 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_357(&bLocal_614, 60.0f, bLocal_607, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_628, 0, bLocal_531, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_865))
				{
					REMOVE_BLIP(bLocal_865);
				}
				if (IS_OBJECT_VALID(bLocal_866))
				{
					DESTROY_OBJECT(bLocal_866);
				}
				if (bLocal_906)
				{
					Function_356();
				}
			}
			else
			{
				if (iLocal_904)
				{
					Function_346(StackVal, &bLocal_614, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_628, 0, 0, 0, 4294967295, 1);
				}
				else
				{
					Function_346(StackVal, &bLocal_614, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_628, 0, 0, 0, 4294967295, 1);
				}
				if (!bLocal_906)
				{
					Function_249();
					Function_345();
				}
			}
			if (Function_300(&bLocal_611) <= 3.0f)
			{
				if (IS_ACTOR_VALID(bLocal_860))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_860, (8.0f * 2.0f)))
					{
						SAY_SINGLE_LINE_SCRIPTED(bLocal_860, "home02_r1_JonGoesBakT4", Global_34573, 1, 0, 0, 0, 0);
						Function_228(&bLocal_611);
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[02]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[02], "home02_r1_JonGoesBakT1", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_611);
						}
					}
				}
			}
			if (Function_300(&bLocal_976) <= 4.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[22]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[22], "home02_r1_JonGoesBakT3", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 756)[42]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[42], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[42], "home02_r1_JonGoesBakT5", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
				}
			}
			if (Function_300(&bLocal_979) <= 5.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[12]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[12], "home02_r1_JonGoesBakT2", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_979);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 756)[32]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[32], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[32], "home02_r1_JonGoesBakT6", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_979);
						}
					}
				}
			}
			if (Function_300(&bLocal_608) <= (2,5f * 8.0f))
			{
				if ((SQUAD_IS_VALID(Local_986.f_44) && SQUAD_IS_VALID(Local_986.f_48)) && SQUAD_IS_VALID(Local_986.f_52))
				{
					if (SQUAD_GET_SIZE(Local_986.f_44) <= bLocal_842)
					{
						if (SQUAD_GET_SIZE(Local_986.f_52) == 0)
						{
							if (SQUAD_GET_SIZE(Local_986.f_48) <= 0 && SQUAD_GET_SIZE(Local_986.f_48) > 3)
							{
								Function_249();
								Function_228(&bLocal_608);
								iLocal_603 = 11;
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (SQUAD_GET_SIZE(Local_986.f_48) == 1)
				{
					Function_360("home02_ranch01_obj_last_straggler", 7,5f, 1, 2, 0, 0, 0);
				}
				else
				{
					Function_360("home02_ranch01_obj_last_stragglers", 7,5f, 1, 2, 0, 0, 0);
				}
				Function_228(&bLocal_608);
				Function_228(&bLocal_611);
				Function_228(&bLocal_614);
				iLocal_603 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_357(&bLocal_614, 60.0f, bLocal_607, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_628, 0, bLocal_531, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_865))
				{
					REMOVE_BLIP(bLocal_865);
				}
				if (IS_OBJECT_VALID(bLocal_866))
				{
					DESTROY_OBJECT(bLocal_866);
				}
				if (bLocal_906)
				{
					Function_356();
				}
			}
			else
			{
				Function_346(StackVal, &bLocal_614, 245.0f, 395.0f, "Herd_return", "Herd_abandoned", &bLocal_628, 0, 0, 0, 4294967295, 1);
				if (!bLocal_906)
				{
					Function_249();
					Function_345();
				}
			}
			if (!iLocal_908[0])
			{
				if ((SQUAD_IS_VALID(Local_986.f_44) && SQUAD_IS_VALID(Local_986.f_48)) && SQUAD_IS_VALID(Local_986.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_986.f_44) != 0 && SQUAD_GET_SIZE(Local_986.f_52) != 0) && SQUAD_GET_SIZE(Local_986.f_48) >= 3)
					{
						if (IS_ACTOR_VALID(bLocal_606))
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 24.0f))
							{
								iLocal_908[0] = 1;
								Function_343();
							}
						}
					}
				}
			}
			if ((SQUAD_IS_VALID(Local_986.f_44) && SQUAD_IS_VALID(Local_986.f_48)) && SQUAD_IS_VALID(Local_986.f_52))
			{
				if (SQUAD_GET_SIZE(Local_986.f_44) == bLocal_842)
				{
					if (SQUAD_GET_SIZE(Local_986.f_48) != 0 && SQUAD_GET_SIZE(Local_986.f_52) != 0)
					{
						Function_249();
						Function_228(&bLocal_608);
						iLocal_603 = 10;
					}
				}
			}
			if (Function_300(&bLocal_611) <= 45.0f)
			{
				Function_249();
				Function_228(&bLocal_608);
				Function_228(&bLocal_611);
				iLocal_603 = 10;
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(Local_986.f_56))
			{
				bLocal_842 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_44);
			}
			PRINTINT(bLocal_847);
			PRINTNL();
			bLocal_847 = Function_342(bLocal_842, bLocal_847);
			PRINTINT(bLocal_847);
			PRINTNL();
			Function_341(Local_532, bLocal_847);
			PRINTINT(bLocal_842);
			PRINTNL();
			bLocal_843 = (15 - bLocal_842);
			PRINTINT(bLocal_843);
			PRINTNL();
			bLocal_849 = Local_986.f_76;
			Global_34165.f_124 = bLocal_849;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_850 = Local_986.f_80;
			Global_34165.f_128 = bLocal_850;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			Function_455();
			Function_185();
			iLocal_617[6] = 1;
			Function_228(&bLocal_608);
			iLocal_602 = 7;
			iLocal_603 = 0;
			break;
	}
	return;
}

void Function_455() //Position: 0x167D8 / 92120
{
	if (SQUAD_IS_VALID(Local_4.f_752))
	{
		Function_180(&Local_4 + 752, 0, 0);
		RELEASE_OBJECT_REF(Local_4.f_752);
	}
	if (SQUAD_IS_VALID(Local_4.f_680))
	{
		GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, Local_4.f_1364), &vLocal_892);
		Function_435(StackVal, StackVal, Local_4.f_680, vLocal_892, 0, 3);
		RELEASE_OBJECT_REF(Local_4.f_680);
	}
	if (SQUAD_IS_VALID(Local_4.f_712))
	{
		GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, Local_4.f_1364), &vLocal_892);
		Function_435(StackVal, StackVal, Local_4.f_712, vLocal_892, 0, 3);
		RELEASE_OBJECT_REF(Local_4.f_712);
	}
	return;
}

void Function_456() //Position: 0x1685F / 92255
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_DealWitStrags", "Home02_r1_DealWitStrags", false, 2, 0, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_457() //Position: 0x168B6 / 92342
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_r1_responds2UncleTrain", "Home02_r1_responds2UncleTrain", true, 2, 1, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_458() //Position: 0x16919 / 92441
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_r1_ContinueHerdPlains", "Home02_r1_ContinueHerdPlains", true, 3, 1, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_459() //Position: 0x1697A / 92538
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_NoHelpRobs", "Home02_r1_NoHelpRobs", false, 3, 1, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_460() //Position: 0x169CB / 92619
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_BakHerdTrain", "Home02_r1_BakHerdTrain", false, 3, 1, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_461() //Position: 0x16A20 / 92704
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_986.f_44, Local_986.f_60, Local_986.f_12, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_462() //Position: 0x16A48 / 92744
{
	if (!IS_ACTOR_VALID(bLocal_860))
	{
		bLocal_860 = CREATE_ACTOR_IN_LAYOUT(bLocal_531, "HOME02_RANCH01_ENGINEER01", 201, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_ACTOR_VALID(bLocal_860))
		{
			SET_ACTOR_FACTION(bLocal_860, 20);
			SET_ACTOR_HEALTH(bLocal_860, GET_ACTOR_MAX_HEALTH(bLocal_606));
			Function_317(bLocal_860, 0, 0, 0, 1, 0, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_860);
			bLocal_930 = ATTACH_OBJECTS(bLocal_860, Local_459.f_28, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			TASK_STAND_STILL(bLocal_860, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_860, true);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_824))
	{
		Function_394();
		if (SQUAD_IS_VALID(Local_4.f_824))
		{
			Function_319(Local_4.f_824, 0);
			SQUAD_SET_FACTION(Local_4.f_824, 20);
			Function_316(Local_4.f_824, 0, 0, 0);
			Function_393(Local_4.f_824, 4, 0.0f);
			Function_392();
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_824, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_800))
	{
		Function_391();
		if (SQUAD_IS_VALID(Local_4.f_800))
		{
			Function_319(Local_4.f_800, 0);
			SQUAD_SET_FACTION(Local_4.f_800, 20);
			Function_316(Local_4.f_800, 0, 0, 0);
			Function_390();
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_800, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_640))
	{
		Function_320();
		if (SQUAD_IS_VALID(Local_4.f_640))
		{
			Function_319(Local_4.f_640, 0);
			Function_318(Local_4.f_640, 3);
			Function_316(Local_4.f_640, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
			{
				SET_ACTORS_HORSE(bLocal_606, (*&Local_4 + 628)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_606, (*&Local_4 + 628)[02]);
				Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1284)[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_640, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_463();
	return;
}

void Function_463() //Position: 0x16C27 / 93223
{
	Function_314();
	Local_986.f_12 = Local_4.f_1784;
	if (!SQUAD_IS_VALID(Local_986.f_44))
	{
		Local_986.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_531, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_986.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_986.f_44);
			Function_311(&Local_986, bLocal_531, Local_4.f_1516, &iLocal_924, 5, 2.0f, 15,5f, 2.0f, 0);
			Function_319(Local_986.f_44, 0);
			Function_310(Local_986.f_44, 1);
			Function_309(Local_986.f_44, 0);
			Function_308(Local_986.f_44, 0);
			Function_307(Local_986.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_1040, -1.0f);
		}
	}
	return;
}

bool Function_464(bool bParam0) //Position: 0x16CF3 / 93427
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = bParam0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = (iVar1 / 10);
		iVar0++;
	}
	bVar2 = (iVar1 % 10);
	PRINTINT(bVar2);
	PRINTNL();
	return Function_363(bVar2);
}

int Function_465() //Position: 0x16D2A / 93482
{
	Function_402(&Local_4 + 452, 208, 2, 0);
	Function_402(&Local_4 + 452, 73, 2, 0);
	Function_402(&Local_4 + 452, 74, 2, 0);
	Function_402(&Local_4 + 452, 33, 2, 0);
	Function_402(&Local_4 + 452, 238, 2, 0);
	Function_402(&Local_4 + 452, 191, 2, 0);
	Function_402(&Local_4 + 452, 192, 2, 0);
	if (Function_397(&Local_4 + 452))
	{
		return 1;
	}
	return 0;
}

void Function_466() //Position: 0x16D99 / 93593
{
	if (Function_300(&bLocal_958) <= 0,1f)
	{
		switch (iLocal_846)
		{
			case 0x00000000:
				iLocal_846++;
				break;
			
			case 0x00000001:
				if (iLocal_603 > 10)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_846++;
					}
				}
				break;
			
			case 0x00000002:
				Function_467(1, 1, 0x42340000, 0x41f00000);
				if (SQUAD_IS_VALID(Local_986.f_48))
				{
					if (iLocal_904)
					{
						if (SQUAD_GET_SIZE(Local_986.f_48) > 2)
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 36.0f))
							{
								if (Function_300(&bLocal_611) <= 15.0f)
								{
									SAY_SINGLE_LINE_SCRIPTED(bLocal_606, "Home02_r1_UncleRoundsWrags", Global_34573, 0, 0, 0, 0, 0);
									Function_228(&bLocal_611);
								}
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				iLocal_846++;
				break;
			}
	}
	return;
}

void Function_467(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x16E83 / 93827
{
	if (Function_300(&bLocal_961) <= 6.0f)
	{
		Function_425();
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (bParam0)
			{
				if (!iLocal_914)
				{
					iLocal_914 = 1;
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_JonOffHors", "Home02_r1_JonOffHors", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_228(&bLocal_961);
				}
				else if (Function_300(&bLocal_611) <= 10.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_NoGetOnHors", "Home02_r1_NoGetOnHors", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_228(&bLocal_961);
					Function_228(&bLocal_611);
				}
			}
		}
		else
		{
			if (bParam0)
			{
				if (iLocal_914)
				{
					iLocal_914 = 0;
				}
			}
			if (bParam0)
			{
				if (IS_ACTOR_VALID(bLocal_607))
				{
					if (IS_ACTION_NODE_PLAYING(bLocal_607, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_ThrownFromHors", "Home02_r1_ThrownFromHors", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
						Function_228(&bLocal_961);
					}
				}
			}
			if (bParam0)
			{
				if (!iLocal_915)
				{
					if (!iLocal_916)
					{
						if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_880))
						{
							if (VMAG(vLocal_880) >= 0.0f)
							{
								iLocal_916 = 1;
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_JonBadHerd", "Home02_r1_JonBadHerd", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
								Function_228(&bLocal_961);
							}
						}
					}
				}
			}
			if (bParam0)
			{
				if (iLocal_916)
				{
					if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_880))
					{
						if (VMAG(vLocal_880) <= 0.0f)
						{
							iLocal_916 = 0;
						}
					}
				}
			}
			if (bParam0)
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 1,35f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_RidesIntoUncleHors", "Home02_r1_RidesIntoUncleHors", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_228(&bLocal_961);
				}
			}
			if (SQUAD_IS_VALID(Local_986.f_48) && SQUAD_IS_VALID(Local_986.f_52))
			{
				if (SQUAD_GET_SIZE(Local_986.f_48) != 0 && SQUAD_GET_SIZE(Local_986.f_52) != 0)
				{
					if (!Function_469(Global_34573, bLocal_606, fParam2))
					{
						if (bParam1)
						{
							if (!iLocal_916)
							{
								if (!iLocal_915)
								{
									if (iLocal_602 == 0)
									{
										uLocal_867 = Local_4.f_1772;
									}
									else if (iLocal_602 == 1)
									{
										uLocal_867 = Local_4.f_1776;
									}
									else if (iLocal_602 == 2)
									{
										uLocal_867 = Local_4.f_1780;
									}
									else if (iLocal_602 == 3)
									{
										uLocal_867 = Local_4.f_1784;
									}
									else if (iLocal_602 == 4)
									{
										uLocal_867 = Local_4.f_1784;
									}
									else if (iLocal_602 == 5)
									{
										uLocal_867 = Local_4.f_1784;
									}
									else if (iLocal_602 == 6)
									{
										uLocal_867 = Local_4.f_1784;
									}
									if (Function_468(Global_34573, bLocal_606, uLocal_867))
									{
										iLocal_915 = 1;
										ABORT_SCRIPTED_CONVERSATION(0);
										if (Function_363(RAND_INT_RANGE(false, true)))
										{
											Function_422();
										}
										else
										{
											Function_421();
										}
										Function_228(&bLocal_961);
									}
									else
									{
										iLocal_915 = 1;
										ABORT_SCRIPTED_CONVERSATION(0);
										Function_420();
										Function_228(&bLocal_961);
									}
								}
							}
						}
					}
				}
			}
			if (ACTORS_IN_RANGE(Global_34573, bLocal_606, bParam3))
			{
				if (bParam1)
				{
					if (iLocal_915)
					{
						iLocal_915 = 0;
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_419();
						Function_228(&bLocal_961);
					}
				}
			}
		}
	}
}

bool Function_468(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1726B / 94827
{
	var uVar0;
	var uVar3;
	float fVar6;
	var uVar7;
	float fVar8;
	var uVar9;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (IS_OBJECT_VALID(bParam2))
			{
				GET_OBJECT_POSITION(bParam0, &uVar0);
				ESTIMATE_DISTANCE_ALONG_PATH(bParam2, &uVar0, &fVar6, &uVar7);
				GET_OBJECT_POSITION(bParam1, &uVar3);
				ESTIMATE_DISTANCE_ALONG_PATH(bParam2, &uVar3, &fVar8, &uVar9);
				if (fVar6 > fVar8)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_469(bool bParam0, bool bParam1, float fParam2) //Position: 0x172C3 / 94915
{
	float fVar0;
	
	fVar0 = Function_470(bParam0, bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_470(bool bParam0, bool bParam1) //Position: 0x172E0 / 94944
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_471(&uVar0, &uVar3);
	return iVar6;
}

var Function_471(var uParam0, bool bParam1) //Position: 0x172FF / 94975
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_472() //Position: 0x1731D / 95005
{
	if (SQUAD_IS_VALID(Local_4.f_712))
	{
		switch (iLocal_834)
		{
			case 0x00000000:
				iLocal_834++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(Local_4.f_712);
				Function_437(Local_4.f_712, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1,5f);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 1,5f);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, false, 1, 2);
				TASK_GO_NEAR_COORD(false, &Local_4 + 1520, 10.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, true, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 804)[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, 2, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 804)[12]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, 3, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 756)[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, 4, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 756)[12]);
				Function_228(&bLocal_955);
				iLocal_834++;
				break;
			
			case 0x00000002:
				if (Function_300(&bLocal_955) <= 25.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_712);
					Function_437(Local_4.f_712, 5, 3);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, false, 1, 4294967295);
					TASK_GO_NEAR_COORD(false, &Local_4 + 1520, 10.0f, 3);
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x00000003:
				if (Function_300(&bLocal_955) <= 15.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_712);
					Function_364(Local_4.f_712);
					Function_435(StackVal, StackVal, Local_4.f_712, *(&Local_4 + 1520), 0, 3);
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x00000004:
				iLocal_834++;
				break;
			}
	}
	return;
}

void Function_473() //Position: 0x174AC / 95404
{
	if (SQUAD_IS_VALID(Local_4.f_680))
	{
		switch (iLocal_833)
		{
			case 0x00000000:
				iLocal_833++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(Local_4.f_680);
				Function_437(Local_4.f_680, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1,5f);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 1,5f);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 1);
				TASK_GO_NEAR_COORD(false, &Local_4 + 1520, 10.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, true, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 804)[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 2, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 804)[12]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 3, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 756)[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 4, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 756)[12]);
				Function_228(&bLocal_946);
				iLocal_833++;
				break;
			
			case 0x00000002:
				if (Function_300(&bLocal_946) <= 25.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_680);
					Function_437(Local_4.f_680, 5, 3);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 4294967295);
					TASK_GO_NEAR_COORD(false, &Local_4 + 1520, 10.0f, 3);
					Function_228(&bLocal_946);
					iLocal_833++;
				}
				break;
			
			case 0x00000003:
				if (Function_300(&bLocal_946) <= 15.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_680);
					Function_364(Local_4.f_680);
					Function_435(StackVal, StackVal, Local_4.f_680, *(&Local_4 + 1520), 0, 3);
					Function_228(&bLocal_946);
					iLocal_833++;
				}
				break;
			
			case 0x00000004:
				iLocal_833++;
				break;
			}
	}
	return;
}

void Function_474() //Position: 0x1763B / 95803
{
	switch (iLocal_841)
	{
		case 0x00000000:
			iLocal_841++;
			break;
		
		case 0x00000001:
			if (bLocal_907)
			{
				if (IS_ACTOR_VALID(bLocal_860))
				{
					if (!IS_ACTOR_DEAD(bLocal_860))
					{
						Function_228(&bLocal_949);
						iLocal_841++;
					}
				}
			}
			else
			{
				bLocal_917 = true;
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x00000002:
			if (bLocal_917)
			{
				TRAIN_SET_TARGET_SPEED(bLocal_840, 7.0f);
				Function_228(&bLocal_949);
				iLocal_841 = 10;
			}
			else
			{
				Function_228(&bLocal_949);
				iLocal_841 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_300(&bLocal_949) <= 40.0f)
			{
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x00000004:
			TRAIN_SET_TARGET_SPEED(bLocal_840, 1.0f);
			bLocal_985 = PLAY_SOUND_FROM_OBJECT(Local_1017[02], "TRAIN_WHISTLE_LONG_DISTANT_MASTER");
			Function_228(&bLocal_949);
			iLocal_841++;
			break;
		
		case 0x00000005:
			if (Function_300(&bLocal_949) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(bLocal_840, 2.0f);
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x00000006:
			if (Function_300(&bLocal_949) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(bLocal_840, 3.0f);
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x00000007:
			if (Function_300(&bLocal_949) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(bLocal_840, 4.0f);
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x00000008:
			if (Function_300(&bLocal_949) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(bLocal_840, 5.0f);
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x00000009:
			if (Function_300(&bLocal_949) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(bLocal_840, 6.0f);
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x0000000A:
			if (Function_300(&bLocal_949) <= 5.0f)
			{
				bLocal_985 = PLAY_SOUND_FROM_OBJECT(Local_1017[02], "TRAIN_WHISTLE_LONG_DISTANT_MASTER");
				TRAIN_SET_TARGET_SPEED(bLocal_840, 7.0f);
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x0000000B:
			if (Function_300(&bLocal_949) <= 7.0f)
			{
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x0000000C:
			if (IS_OBJECT_VALID(Local_1017[02]))
			{
				Function_171();
			}
			if (IS_ACTOR_VALID(bLocal_860))
			{
				RELEASE_ACTOR(bLocal_860);
			}
			if (SQUAD_IS_VALID(Local_4.f_800))
			{
				Function_180(&Local_4 + 800, 0, 0);
				RELEASE_OBJECT_REF(Local_4.f_800);
			}
			if (SQUAD_IS_VALID(Local_4.f_824))
			{
				Function_180(&Local_4 + 824, 0, 0);
				RELEASE_OBJECT_REF(Local_4.f_824);
			}
			iLocal_841++;
			break;
		
		case 0x0000000D:
			iLocal_841++;
			break;
	}
	return;
}

void Function_475(bool bParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x17903 / 96515
{
	if (IS_ACTOR_VALID(bLocal_606))
	{
		if (SQUAD_IS_VALID(bParam0))
		{
			switch (iLocal_832)
			{
				case 0x00000000:
					iLocal_832++;
					break;
				
				case 0x00000001:
					if (Function_300(bParam1) <= fParam2)
					{
						if (SQUAD_IS_VALID(bParam0))
						{
							if (SQUAD_GET_SIZE(bParam0) > 2)
							{
								if (!iLocal_904)
								{
									bLocal_859 = Function_440(StackVal, bParam0);
									if (IS_ACTOR_VALID(bLocal_859))
									{
										vLocal_877 = { 0.0f, 0.0f, 0.0f };
										bLocal_830 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(0, bLocal_859, &vLocal_877, 0, 0, 0, 0, 0, 0, 1);
										TASK_STAND_STILL(false, -1.0f, 0, 0);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
										TASK_SEQUENCE_RELEASE(bLocal_830, 1);
										TASK_PRIORITY_SET(bLocal_606, true);
										iLocal_904 = 1;
									}
								}
								else if (!Function_427(bLocal_859, bParam0, 0))
								{
									iLocal_904 = 0;
								}
							}
							else if (!GET_TASK_STATUS(bLocal_606, 72) != 1)
							{
								bLocal_830 = TASK_SEQUENCE_OPEN();
								TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, bParam3, bParam4, 1, 0);
								TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
								TASK_SEQUENCE_CLOSE();
								TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
								TASK_SEQUENCE_RELEASE(bLocal_830, 1);
								TASK_PRIORITY_SET(bLocal_606, true);
								iLocal_904 = 0;
							}
						}
						Function_228(bParam1);
					}
					break;
				
				case 0x00000003:
					iLocal_832++;
					break;
			}
		}
	}
}

void Function_476() //Position: 0x17A3C / 96828
{
	if (SQUAD_IS_VALID(Local_4.f_680))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_712) >= 0)
		{
			Function_355(Function_440(Local_4.f_712, Global_34573));
			STREAMING_LOAD_BOUNDS_EXT(3, Function_355(Function_440(Local_4.f_712, Global_34573)), 50.0f, 1);
		}
	}
	if (((iLocal_603 < 5 && iLocal_603 > 105) && !iLocal_603 != 104) && !iLocal_603 != 103)
	{
		Function_517();
		Function_516();
		Function_508();
		Function_506();
		Function_500();
		Function_499();
		Function_498();
		Function_433(Global_34573);
		Function_432();
		Function_452(&Local_986);
		if (bLocal_906)
		{
			Function_448(&Local_986);
			Function_447(&Local_986);
			Function_446(&Local_986, 0x41700000);
			if (Function_300(&bLocal_943) <= 0,2f)
			{
				Function_443(&Local_986);
				Function_228(&bLocal_943);
			}
		}
		if (iLocal_603 < 8)
		{
			if (StackVal && IS_OBJECT_VALID(IS_ACTOR_VALID(Global_34573)))
			{
				bLocal_863 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
				if (IS_ACTOR_VALID(bLocal_863))
				{
					if (Function_427(bLocal_863, Local_4.f_680, 0) || Function_427(bLocal_863, Local_4.f_712, 0))
					{
						if (!IS_ACTOR_SHOOTING(Global_34573))
						{
							if (IS_WEAPON_DRAWN(Global_34573))
							{
								if (Function_497(Global_34573, Local_4.f_680, (140.0f + 15.0f)) || Function_497(Global_34573, Local_4.f_712, (140.0f + 15.0f)))
								{
									bLocal_907 = true;
									if (IS_BLIP_VALID(bLocal_865))
									{
										REMOVE_BLIP(bLocal_865);
									}
									if (IS_OBJECT_VALID(bLocal_866))
									{
										DESTROY_OBJECT(bLocal_866);
									}
									if (bLocal_906)
									{
										Function_356();
									}
									UI_HIDE("RacePosition");
									ABORT_SCRIPTED_CONVERSATION(1);
									Function_249();
									Function_228(&bLocal_608);
									iLocal_603 = 9;
								}
							}
						}
					}
				}
				if (!Function_353(StackVal, Global_34573, 135.0f))
				{
					bLocal_907 = true;
					if (IS_BLIP_VALID(bLocal_865))
					{
						REMOVE_BLIP(bLocal_865);
					}
					if (IS_OBJECT_VALID(bLocal_866))
					{
						DESTROY_OBJECT(bLocal_866);
					}
					if (bLocal_906)
					{
						Function_356();
					}
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_249();
					Function_228(&bLocal_608);
					iLocal_603 = 9;
				}
				if (Function_497(Global_34573, Local_4.f_680, 140.0f) && IS_ACTOR_SHOOTING(Global_34573))
				{
					bLocal_907 = true;
					if (IS_BLIP_VALID(bLocal_865))
					{
						REMOVE_BLIP(bLocal_865);
					}
					if (IS_OBJECT_VALID(bLocal_866))
					{
						DESTROY_OBJECT(bLocal_866);
					}
					if (bLocal_906)
					{
						Function_356();
					}
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_249();
					Function_228(&bLocal_608);
					iLocal_603 = 9;
				}
				else if (Function_497(Global_34573, Local_4.f_712, 140.0f) && IS_ACTOR_SHOOTING(Global_34573))
				{
					bLocal_907 = true;
					if (IS_BLIP_VALID(bLocal_865))
					{
						REMOVE_BLIP(bLocal_865);
					}
					if (IS_OBJECT_VALID(bLocal_866))
					{
						DESTROY_OBJECT(bLocal_866);
					}
					if (bLocal_906)
					{
						Function_356();
					}
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_249();
					Function_228(&bLocal_608);
					iLocal_603 = 9;
				}
				if (iLocal_603 == 8)
				{
					if (Function_300(&bLocal_608) <= 3.0f)
					{
						if (Function_497(Global_34573, Local_4.f_680, 4.0f) || Function_497(Global_34573, Local_4.f_712, 4.0f))
						{
							bLocal_907 = true;
							if (IS_BLIP_VALID(bLocal_865))
							{
								REMOVE_BLIP(bLocal_865);
							}
							if (IS_OBJECT_VALID(bLocal_866))
							{
								DESTROY_OBJECT(bLocal_866);
							}
							if (bLocal_906)
							{
								Function_356();
							}
							UI_HIDE("RacePosition");
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_249();
							Function_228(&bLocal_608);
							iLocal_603 = 9;
						}
					}
				}
				if (!bLocal_907)
				{
					if (Function_300(&bLocal_608) <= 20.0f)
					{
						if (Function_353(StackVal, Global_34573, (135.0f - 45.0f)))
						{
							iLocal_630 = 0;
							bLocal_907 = false;
							Function_344(Local_4.f_680);
							Function_344(Local_4.f_712);
							if (IS_BLIP_VALID(bLocal_865))
							{
								REMOVE_BLIP(bLocal_865);
							}
							if (IS_OBJECT_VALID(bLocal_866))
							{
								DESTROY_OBJECT(bLocal_866);
							}
							UI_HIDE("RacePosition");
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_249();
							Function_228(&bLocal_608);
							iLocal_603 = 106;
						}
					}
				}
				if (!bLocal_907)
				{
					if (Function_300(&bLocal_608) <= 5.0f)
					{
						if (Function_469(Global_34573, bLocal_606, (8.0f * 2.0f)))
						{
							iLocal_630 = 0;
							bLocal_907 = false;
							Function_344(Local_4.f_680);
							Function_344(Local_4.f_712);
							if (IS_BLIP_VALID(bLocal_865))
							{
								REMOVE_BLIP(bLocal_865);
							}
							if (IS_OBJECT_VALID(bLocal_866))
							{
								DESTROY_OBJECT(bLocal_866);
							}
							UI_HIDE("RacePosition");
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_249();
							Function_228(&bLocal_608);
							iLocal_603 = 106;
						}
					}
				}
			}
		}
		Function_495();
	}
	switch (iLocal_603)
	{
		case 0x00000000:
			Function_335(0);
			SET_ACTOR_HEALTH(bLocal_606, GET_ACTOR_MAX_HEALTH(bLocal_606));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (iLocal_617[4] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_327();
				bLocal_604 = Global_30637[0];
				if (!Function_326(bLocal_604))
				{
					Function_324(&Local_532);
				}
				Function_323(Global_34573, (*&Local_4 + 1260)[0], 1, 1, 1);
				iLocal_839 = 0;
				if (IS_ACTOR_VALID(bLocal_607))
				{
					TASK_STAND_STILL(bLocal_607, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_607, true);
				}
				if (IS_ACTOR_VALID(bLocal_606))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_606);
					CLEAR_ACTOR_MAX_SPEED(bLocal_606);
					TASK_STAND_STILL(bLocal_606, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_606, true);
				}
				Function_228(&bLocal_608);
				iLocal_603 = 1;
			}
			else
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_326(bLocal_604) || bLocal_604 != 4294967295)) && Function_494())
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_403() && Function_494())
			{
				if (bLocal_907)
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
				}
				else
				{
					AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
				}
				iLocal_831 = 0;
				iLocal_832 = 0;
				iLocal_841 = 0;
				iLocal_833 = 0;
				iLocal_834 = 0;
				iLocal_835 = 0;
				iLocal_836 = 0;
				iLocal_846 = 0;
				iLocal_837 = 0;
				iLocal_904 = 0;
				iLocal_630 = 0;
				bLocal_906 = false;
				iLocal_905 = 0;
				iLocal_914 = 0;
				iLocal_916 = 0;
				iLocal_915 = 0;
				iLocal_922 = 0;
				Function_395(&iLocal_908);
				STREAMING_LOAD_BOUNDS(*(&Local_4 + 1568), 250.0f, 1);
				bLocal_842 = Function_321(Function_322(Local_532));
				PRINTINT(bLocal_842);
				PRINTNL();
				bLocal_843 = (15 - bLocal_842);
				PRINTINT(bLocal_843);
				PRINTNL();
				bLocal_907 = Function_464(Function_322(Local_532));
				if (bLocal_907)
				{
				}
				bLocal_849 = Global_34165.f_124;
				bLocal_850 = Global_34165.f_128;
				PRINTINT(bLocal_849);
				PRINTNL();
				PRINTINT(bLocal_850);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Local_986.f_76 = bLocal_849;
				Local_986.f_80 = bLocal_850;
				Function_488();
				if (IS_ACTOR_VALID(bLocal_861))
				{
					SET_ACTOR_HEALTH(bLocal_861, 50.0f);
					Function_323(bLocal_861, (*&Local_4 + 1132)[4], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_862))
				{
					SET_ACTOR_HEALTH(bLocal_862, 50.0f);
					Function_323(bLocal_862, (*&Local_4 + 1132)[5], 1, 1, 1);
				}
				if (iLocal_617[4] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_607))
						{
							Function_323(bLocal_607, (*&Local_4 + 1260)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_607))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_607);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_606))
					{
						Function_189(13, 0, 1);
						Function_323(bLocal_606, (*&Local_4 + 1260)[1], 1, 1, 1);
						if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
						{
							Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1260)[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_606) && !IS_ACTOR_MOUNTED((*&Local_4 + 628)[02]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_606, (*&Local_4 + 628)[02]);
							}
						}
					}
					Function_228(&bLocal_608);
					iLocal_603 = 5;
				}
				else if (bLocal_907)
				{
					Function_228(&bLocal_608);
					iLocal_603 = 9;
				}
				else
				{
					Function_228(&bLocal_608);
					iLocal_603 = 6;
				}
				if ((SQUAD_IS_VALID(Local_986.f_56) && SQUAD_IS_VALID(Local_986.f_52)) && SQUAD_IS_VALID(Local_986.f_48))
				{
					Function_303(Local_986.f_56);
					Function_344(Local_986.f_56);
					Function_344(Local_986.f_52);
					Function_344(Local_986.f_48);
					Function_304(Local_986.f_56, Local_986.f_44);
					Function_304(Local_986.f_52, Local_986.f_44);
					Function_304(Local_986.f_48, Local_986.f_44);
				}
				if (SQUAD_IS_VALID(Local_986.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_44);
					Function_303(Local_986.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_1040, -1.0f);
				}
				TRAIN_SET_TARGET_SPEED(bLocal_840, 8.0f);
				Function_383(&(Local_671[017]), bLocal_606, "Uncle", 1, 0x5f5e100, 1);
				Function_383(&(Local_671[117]), Local_986.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[217]), Local_986.f_48, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[317]), Local_986.f_52, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[417]), Local_986.f_56, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[517]), bLocal_860, "Engineer", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[617]), Local_4.f_800, "Train_Passenger", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[717]), Local_4.f_824, "Train_Marshal", 0, 0x5f5e100, 1);
				Function_378(&(Local_671[117]), 2);
				Function_378(&(Local_671[217]), 2);
				Function_378(&(Local_671[317]), 2);
				Function_378(&(Local_671[417]), 2);
				Function_378(&(Local_671[517]), 2);
				Function_378(&(Local_671[617]), 2);
				Function_378(&(Local_671[717]), 2);
				Function_244(iLocal_602);
				Function_372(StackVal, StackVal, Function_244(iLocal_602), iLocal_602, Global_30637[0], Function_247(iLocal_602), 2);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_606) && SQUAD_IS_VALID(Local_986.f_44))
			{
				if (Function_371(bLocal_606, 1, 0x41700000) && Function_370(Local_986.f_44, 1))
				{
					Function_228(&bLocal_608);
					iLocal_603 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (IS_OBJECT_VALID(Local_1017[02]))
			{
				if (Function_487(bLocal_840, 4.0f))
				{
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					if (SQUAD_IS_VALID(Local_986.f_44))
					{
						Function_369();
						Function_486();
						Function_303(Local_986.f_44);
						Function_303(Local_986.f_48);
						Function_366(Local_986.f_44, &Local_4 + 932);
						Function_366(Local_986.f_48, &Local_4 + 932);
						Function_365(Local_986.f_44, 2, 1);
					}
					CAMERA_RESET(0);
					Function_228(&bLocal_608);
					iLocal_603 = 103;
				}
			}
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_228(&bLocal_608);
				iLocal_603 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (SQUAD_IS_VALID(Local_4.f_680))
				{
					Function_485(Local_4.f_680, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				}
				if (!IS_OBJECT_VALID(bLocal_929))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_929 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_531, "HOME02RANCH01_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_929))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_929, 0);
						}
					}
				}
				if (iLocal_617[4] == 1)
				{
					if (SQUAD_IS_VALID(Local_986.f_44))
					{
						Function_369();
						Function_486();
						Function_303(Local_986.f_44);
						Function_303(Local_986.f_48);
						Function_366(Local_986.f_44, &Local_4 + 932);
						Function_366(Local_986.f_48, &Local_4 + 932);
						Function_365(Local_986.f_44, 2, 1);
					}
				}
				iLocal_904 = 0;
				if (SQUAD_IS_VALID(Local_986.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_48);
					Function_364(Local_986.f_48);
				}
				*(&Local_986 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_986.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_52);
					Function_364(Local_986.f_52);
				}
				Local_986.f_8 = Local_4.f_1512;
				GET_OBJECT_POSITION(Local_4.f_1512, &uLocal_874);
				if (SQUAD_IS_VALID(Local_986.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_56);
					bLocal_830 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, Local_4.f_1036, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_830);
					TASK_SEQUENCE_RELEASE(bLocal_830, 1);
				}
				Function_484();
				Function_228(&bLocal_608);
				iLocal_603 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_228(&bLocal_976);
				Function_228(&bLocal_979);
				Function_360("home02_ranch01_obj05", 7,5f, 1, 2, 0, 0, 0);
				Function_228(&bLocal_608);
				Function_228(&bLocal_611);
				Function_228(&bLocal_614);
				iLocal_603 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_300(&bLocal_611) <= 3.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_680))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 644)[02]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 644)[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 644)[02], "Home02_r1_CrimsYellAtJon1", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_611);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 644)[22]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 644)[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 644)[22], "Home02_r1_CriminalsYelJon2", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_611);
						}
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_712))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 684)[02]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 684)[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 684)[02], "Home02_r1_CriminalsYelJon2", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_611);
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_860))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_860, (8.0f * 2.0f)))
					{
						SAY_SINGLE_LINE_SCRIPTED(bLocal_860, "Home02_r1_EnginCries4Help", Global_34573, 1, 0, 0, 0, 0);
						Function_228(&bLocal_611);
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[02]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[02], "Home02_r1_PassCries4Helps1", Global_34573, 1, 1, 0, 0, 0);
							Function_228(&bLocal_611);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 756)[42]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[42], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[42], "Home02_r1_GuardsCry4Help1", Global_34573, 1, 1, 0, 0, 0);
							Function_228(&bLocal_611);
						}
					}
				}
			}
			if (Function_300(&bLocal_976) <= 4.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_680))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 644)[12]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 644)[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 644)[12], "Home02_r1_CrimsYellAtJon2", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_712))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 684)[12]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 684)[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 684)[12], "Home02_r1_CriminalsYelJon3", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[12]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[12], "Home02_r1_PassCries4Helps2", Global_34573, 1, 1, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 756)[32]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[32], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[32], "Home02_r1_GuardsCry4Help2", Global_34573, 1, 1, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
				}
			}
			if (Function_300(&bLocal_979) <= 5.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_680))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 644)[32]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 644)[32], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 644)[32], "Home02_r1_CriminalsYelJon1", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_979);
						}
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[22]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[22], "Home02_r1_PassCries4Helps3", Global_34573, 1, 1, 0, 0, 0);
							Function_228(&bLocal_979);
						}
					}
				}
			}
			break;
		
		case 0x00000009:
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
			iLocal_630 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			if (SQUAD_IS_VALID(Local_4.f_680))
			{
				Function_485(Local_4.f_680, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				SQUAD_SET_FACTION(Local_4.f_680, 19);
			}
			if (SQUAD_IS_VALID(Local_4.f_712))
			{
				Function_485(Local_4.f_712, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				SQUAD_SET_FACTION(Local_4.f_712, 19);
				Function_482(Local_4.f_712, Local_4.f_824, 3);
			}
			if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 36.0f))
			{
				Function_481();
			}
			Function_228(&bLocal_608);
			iLocal_603 = 10;
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 5.0f)
			{
				Function_480();
				Function_228(&bLocal_608);
				iLocal_603 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 3.0f)
			{
				Function_228(&bLocal_976);
				Function_228(&bLocal_979);
				Function_360("home02_ranch01_obj05a", 7,5f, 1, 2, 0, 0, 0);
				Function_228(&bLocal_608);
				Function_228(&bLocal_611);
				Function_228(&bLocal_614);
				iLocal_603 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_300(&bLocal_611) <= 3.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_680))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 644)[02]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 644)[02], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 644)[02], "Home02_r1_CrimsYellAtJon1", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_611);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 644)[32]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 644)[32], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 644)[32], "Home02_r1_CriminalsYelJon1", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_611);
						}
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_712))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 684)[12]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 684)[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 684)[12], "Home02_r1_CriminalsYelJon3", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_611);
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_860))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_860, (8.0f * 2.0f)))
					{
						SAY_SINGLE_LINE_SCRIPTED(bLocal_860, "Home02_r1_EnginCries4Help", Global_34573, 1, 0, 0, 0, 0);
						Function_228(&bLocal_611);
					}
				}
			}
			if (Function_300(&bLocal_976) <= 4.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_680))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 644)[12]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 644)[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 644)[12], "Home02_r1_CrimsYellAtJon2", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 644)[22]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 644)[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 644)[22], "Home02_r1_CriminalsYelJon2", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_712))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 684)[02]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 684)[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 684)[02], "Home02_r1_CriminalsYelJon2", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[12]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[12], "Home02_r1_PassCries4Helps2", Global_34573, 1, 1, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 756)[32]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[32], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[32], "Home02_r1_GuardsCry4Help2", Global_34573, 1, 1, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
				}
			}
			if (Function_300(&bLocal_979) <= 5.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[02]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[02], "Home02_r1_PassCries4Helps1", Global_34573, 1, 1, 0, 0, 0);
							Function_228(&bLocal_979);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 756)[22]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[22], "Home02_r1_PassCries4Helps3", Global_34573, 1, 1, 0, 0, 0);
							Function_228(&bLocal_979);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 756)[42]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[42], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[42], "Home02_r1_GuardsCry4Help1", Global_34573, 1, 1, 0, 0, 0);
							Function_228(&bLocal_979);
						}
					}
				}
			}
			if (!bLocal_907)
			{
				if (Function_300(&bLocal_608) <= 25.0f)
				{
					if (Function_353(StackVal, Global_34573, (135.0f - 30.0f)))
					{
						iLocal_630 = 0;
						bLocal_907 = false;
						Function_344(Local_4.f_680);
						Function_344(Local_4.f_712);
						if (IS_BLIP_VALID(bLocal_865))
						{
							REMOVE_BLIP(bLocal_865);
						}
						if (IS_OBJECT_VALID(bLocal_866))
						{
							DESTROY_OBJECT(bLocal_866);
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_249();
						Function_228(&bLocal_608);
						iLocal_603 = 106;
					}
				}
			}
			if (SQUAD_IS_VALID(Local_4.f_680) && SQUAD_IS_VALID(Local_4.f_712))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_680) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_712) >= 0)
				{
					iLocal_630 = 0;
					bLocal_907 = true;
					Function_344(Local_4.f_680);
					Function_344(Local_4.f_712);
					if (IS_BLIP_VALID(bLocal_865))
					{
						REMOVE_BLIP(bLocal_865);
					}
					if (IS_OBJECT_VALID(bLocal_866))
					{
						DESTROY_OBJECT(bLocal_866);
					}
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_249();
					Function_228(&bLocal_608);
					iLocal_603 = 13;
				}
			}
			if (IS_ACTOR_VALID(bLocal_860))
			{
				if (IS_ACTOR_DEAD(bLocal_860))
				{
					iLocal_630 = 0;
					bLocal_907 = true;
					Function_344(Local_4.f_680);
					Function_344(Local_4.f_712);
					if (IS_BLIP_VALID(bLocal_865))
					{
						REMOVE_BLIP(bLocal_865);
					}
					if (IS_OBJECT_VALID(bLocal_866))
					{
						DESTROY_OBJECT(bLocal_866);
					}
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_249();
					Function_228(&bLocal_608);
					iLocal_603 = 18;
				}
			}
			break;
		
		case 0x0000000D:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			iLocal_630 = 0;
			if (IS_ACTOR_VALID(Global_34573) && IS_ACTOR_VALID(bLocal_860))
			{
				if (Function_469(Global_34573, bLocal_860, 24.0f))
				{
					Function_228(&bLocal_608);
					iLocal_603 = 16;
				}
				else
				{
					if (!IS_BLIP_VALID(bLocal_865))
					{
						bLocal_865 = ADD_BLIP_FOR_ACTOR(bLocal_860, 325, 0, 2, 0);
						if (IS_BLIP_VALID(bLocal_865))
						{
						}
					}
					Function_228(&bLocal_608);
					iLocal_603 = 14;
				}
			}
			else
			{
				Function_228(&bLocal_608);
				iLocal_603 = 18;
			}
			break;
		
		case 0x0000000E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 1.0f)
			{
				Function_228(&bLocal_976);
				Function_228(&bLocal_979);
				Function_360("home02_ranch01_obj05b", 7,5f, 1, 2, 0, 0, 0);
				Function_228(&bLocal_608);
				Function_228(&bLocal_611);
				Function_228(&bLocal_614);
				iLocal_603 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_300(&bLocal_611) <= 3.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[02]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[02], "Home02_r1_SavesTrain2", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_611);
						}
					}
				}
			}
			if (Function_300(&bLocal_976) <= 4.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[22]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[22], "Home02_r1_SavesTrain22", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 756)[42]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[42], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[42], "Home02_r1_SaveTrain3", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
				}
			}
			if (Function_300(&bLocal_979) <= 5.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[12]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[12], "Home02_r1_SavesTrain21", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_979);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 756)[32]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[32], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[32], "Home02_r1_SaveTrain31", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_979);
						}
					}
				}
			}
			if (IS_ACTOR_VALID(Global_34573) && IS_ACTOR_VALID(bLocal_860))
			{
				if (Function_469(Global_34573, bLocal_860, 24.0f))
				{
					if (IS_BLIP_VALID(bLocal_865))
					{
						REMOVE_BLIP(bLocal_865);
					}
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_249();
					Function_228(&bLocal_608);
					iLocal_603 = 16;
				}
			}
			break;
		
		case 0x00000010:
			Function_479();
			Function_228(&bLocal_608);
			iLocal_603 = 17;
			break;
		
		case 0x00000011:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 3.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_800) && SQUAD_IS_VALID(Local_4.f_824))
				{
					if ((SQUAD_GET_SIZE(Local_4.f_800) != 5 && SQUAD_GET_SIZE(Local_4.f_824) != 2) && IS_ACTOR_VALID(bLocal_860))
					{
						Function_92(150, 1, 0);
						Function_109(50, 1, 0);
					}
					else if ((SQUAD_GET_SIZE(Local_4.f_800) <= 1 && SQUAD_GET_SIZE(Local_4.f_824) <= 1) && IS_ACTOR_VALID(bLocal_860))
					{
						Function_92(75, 1, 0);
						Function_109(50, 1, 0);
					}
					else
					{
						Function_92(25, 1, 0);
					}
				}
				iLocal_922 = 1;
				STREAMING_UNLOAD_BOUNDS();
				Function_228(&bLocal_611);
				iLocal_603 = 20;
			}
			break;
		
		case 0x00000012:
			if (Function_300(&bLocal_608) <= 3.0f)
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
				Function_109(4294967096, 1, 0);
				Function_228(&bLocal_608);
				iLocal_603 = 19;
			}
			break;
		
		case 0x00000013:
			if (Function_300(&bLocal_608) <= 5.0f)
			{
				Function_228(&bLocal_608);
				iLocal_603 = 20;
			}
			break;
		
		case 0x00000014:
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			iLocal_630 = 0;
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			Function_189(13, 1, 1);
			if (IS_ACTOR_VALID(Global_34573) && IS_ACTOR_VALID(bLocal_606))
			{
				if (Function_469(Global_34573, bLocal_606, (6.0f * 2.0f)))
				{
					Function_228(&bLocal_608);
					iLocal_603 = 106;
				}
				else
				{
					Function_228(&bLocal_608);
					iLocal_603 = 21;
				}
			}
			break;
		
		case 0x00000015:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 3.0f)
			{
				Function_228(&bLocal_976);
				Function_228(&bLocal_979);
				Function_360("home02_ranch01_obj05c", 7,5f, 1, 2, 0, 0, 0);
				Function_228(&bLocal_608);
				Function_228(&bLocal_611);
				Function_228(&bLocal_614);
				iLocal_603 = 22;
			}
			break;
		
		case 0x00000016:
			Function_478(&bLocal_614, (4.0f * 60.0f), (4.0f * 200.0f), bLocal_606, "Uncle_return", "Uncle_abandoned", &bLocal_628, 0, 0, 0, 325, 1);
			if (Function_300(&bLocal_611) <= 3.0f)
			{
				if (IS_ACTOR_VALID(bLocal_860))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_860, (8.0f * 2.0f)))
					{
						SAY_SINGLE_LINE_SCRIPTED(bLocal_860, "Home02_r1_SavesTrain1", Global_34573, 1, 0, 0, 0, 0);
						Function_228(&bLocal_611);
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[02]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[02], "Home02_r1_SavesTrain2", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_611);
						}
					}
				}
			}
			if (Function_300(&bLocal_976) <= 4.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[22]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[22], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[22], "Home02_r1_SavesTrain22", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 756)[42]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[42], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[42], "Home02_r1_SaveTrain3", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
				}
			}
			if (Function_300(&bLocal_979) <= 5.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_800))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 756)[12]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[12], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[12], "Home02_r1_SavesTrain21", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_979);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 756)[32]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 756)[32], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 756)[32], "Home02_r1_SaveTrain31", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_979);
						}
					}
				}
			}
			if (IS_ACTOR_VALID(Global_34573) && IS_ACTOR_VALID(bLocal_606))
			{
				if (Function_469(Global_34573, bLocal_606, (6.0f * 3.0f)))
				{
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_249();
					Function_228(&bLocal_608);
					iLocal_603 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			STREAMING_UNLOAD_BOUNDS();
			if (((SQUAD_IS_VALID(Local_986.f_56) && SQUAD_IS_VALID(Local_986.f_48)) && SQUAD_IS_VALID(Local_986.f_52)) && SQUAD_IS_VALID(Local_986.f_56))
			{
				bLocal_842 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_44) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_48)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_52)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_56));
			}
			PRINTINT(bLocal_847);
			PRINTNL();
			bLocal_847 = Function_342(bLocal_842, bLocal_847);
			PRINTINT(bLocal_847);
			PRINTNL();
			PRINTINT(bLocal_842);
			PRINTNL();
			bLocal_843 = (15 - bLocal_842);
			PRINTINT(bLocal_843);
			PRINTNL();
			PRINTINT(bLocal_847);
			PRINTNL();
			bLocal_847 = Function_477(bLocal_907, bLocal_847);
			PRINTINT(bLocal_847);
			PRINTNL();
			Function_341(Local_532, bLocal_847);
			bLocal_849 = Local_986.f_76;
			Global_34165.f_124 = bLocal_849;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_850 = Local_986.f_80;
			Global_34165.f_128 = bLocal_850;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			Function_186();
			iLocal_617[5] = 1;
			Function_228(&bLocal_608);
			iLocal_602 = 6;
			iLocal_603 = 0;
			break;
	}
	return;
}

bool Function_477(bool bParam0, bool bParam1) //Position: 0x19B8E / 105358
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_321(bParam1);
	PRINTINT(bVar0);
	PRINTNL();
	if (bParam0)
	{
		iVar1 = (11000 + bVar0);
	}
	else
	{
		iVar1 = (10000 + bVar0);
	}
	return iVar1;
}

bool Function_478(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x19BBD / 105405
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_445(Global_34573, bParam3, bParam2))
	{
		Function_238(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_445(Global_34573, bParam3, bParam1))
	{
		if (!Function_352(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_360(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_351(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_350(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_350(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_352(2))
	{
		Function_349(2);
		if (!Function_348())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_347();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_191(bParam3);
				Function_190(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_350(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_350(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_479() //Position: 0x19D51 / 105809
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_r1_SavedTrain_v1_AA", "Home02_r1_SavedTrain_v1_AA", 5, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(5, "Home02_r1_SavedTrain_v1_AB", "Home02_r1_SavedTrain_v1_AB", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(5, "Home02_r1_SavedTrain_v1_AC", "Home02_r1_SavedTrain_v1_AC", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_r1_SavedTrain_v1_AD", "Home02_r1_SavedTrain_v1_AD", 5, 2, 1, 0, 1);
		Function_283(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_480() //Position: 0x19E78 / 106104
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_YellsStop", "Home02_r1_YellsStop", false, 3, 1, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_481() //Position: 0x19EC7 / 106183
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_r1_Rides2Robery", "Home02_r1_Rides2Robery", true, 3, 1, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_482(bool bParam0, bool bParam1, int iParam2) //Position: 0x19F1C / 106268
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
			Function_483(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_483(bool bParam0, bool bParam1, bool bParam2) //Position: 0x19F6B / 106347
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

void Function_484() //Position: 0x19FB5 / 106421
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_DontGetInvolved", "Home02_r1_DontGetInvolved", false, 3, 1, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_485(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x1A010 / 106512
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

void Function_486() //Position: 0x1A0FA / 106746
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_986.f_44, Local_986.f_60, Local_986.f_12, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

bool Function_487(bool bParam0, float fParam1) //Position: 0x1A122 / 106786
{
	float fVar0;
	
	fVar0 = TRAIN_GET_VELOCITY(bParam0);
	if (fVar0 <= fParam1)
	{
		return 1;
	}
	return 0;
}

void Function_488() //Position: 0x1A13A / 106810
{
	if (!IS_ACTOR_VALID(bLocal_860))
	{
		bLocal_860 = CREATE_ACTOR_IN_LAYOUT(bLocal_531, "HOME02_RANCH01_ENGINEER01", 201, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_ACTOR_VALID(bLocal_860))
		{
			SET_ACTOR_FACTION(bLocal_860, 20);
			SET_ACTOR_HEALTH(bLocal_860, GET_ACTOR_MAX_HEALTH(bLocal_606));
			Function_317(bLocal_860, 0, 0, 0, 1, 0, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_860);
			bLocal_930 = ATTACH_OBJECTS(bLocal_860, Local_459.f_28, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			TASK_STAND_STILL(bLocal_860, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_860, true);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_824))
	{
		Function_394();
		if (SQUAD_IS_VALID(Local_4.f_824))
		{
			Function_319(Local_4.f_824, 0);
			SQUAD_SET_FACTION(Local_4.f_824, 20);
			Function_316(Local_4.f_824, 0, 0, 0);
			Function_393(Local_4.f_824, 4, 0.0f);
			Function_392();
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_824, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_800))
	{
		Function_391();
		if (SQUAD_IS_VALID(Local_4.f_800))
		{
			Function_319(Local_4.f_800, 0);
			SQUAD_SET_FACTION(Local_4.f_800, 20);
			Function_316(Local_4.f_800, 0, 0, 0);
			Function_390();
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_800, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_640))
	{
		Function_320();
		if (SQUAD_IS_VALID(Local_4.f_640))
		{
			Function_319(Local_4.f_640, 0);
			Function_318(Local_4.f_640, 3);
			Function_316(Local_4.f_640, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
			{
				SET_ACTORS_HORSE(bLocal_606, (*&Local_4 + 628)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_606, (*&Local_4 + 628)[02]);
				Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1260)[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_640, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_752))
	{
		Function_493();
		if (SQUAD_IS_VALID(Local_4.f_752))
		{
			Function_319(Local_4.f_752, 0);
			Function_318(Local_4.f_752, 3);
			if (IS_ACTOR_VALID((*&Local_4 + 716)[02]))
			{
				Function_323((*&Local_4 + 716)[02], (*&Local_4 + 1456)[0], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 716)[12]))
			{
				Function_323((*&Local_4 + 716)[12], (*&Local_4 + 1456)[1], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 716)[22]))
			{
				Function_323((*&Local_4 + 716)[22], (*&Local_4 + 1456)[2], 1, 1, 1);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 716)[32]))
			{
				Function_323((*&Local_4 + 716)[32], (*&Local_4 + 1456)[3], 1, 1, 1);
			}
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_680))
	{
		Function_492();
		if (SQUAD_IS_VALID(Local_4.f_680))
		{
			Function_319(Local_4.f_680, 0);
			SQUAD_SET_FACTION(Local_4.f_680, 1);
			Function_491(Local_4.f_680, Local_4.f_752);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_712))
	{
		Function_490();
		if (SQUAD_IS_VALID(Local_4.f_712))
		{
			Function_319(Local_4.f_712, 0);
			SQUAD_SET_FACTION(Local_4.f_712, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_489();
	return;
}

void Function_489() //Position: 0x1A472 / 107634
{
	Function_314();
	Local_986.f_12 = Local_4.f_1784;
	if (!SQUAD_IS_VALID(Local_986.f_44))
	{
		Local_986.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_531, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_986.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_986.f_44);
			Function_311(&Local_986, bLocal_531, Local_4.f_1516, &iLocal_924, 5, 2.0f, 11,5f, 2.0f, 0);
			Function_319(Local_986.f_44, 0);
			Function_310(Local_986.f_44, 1);
			Function_309(Local_986.f_44, 0);
			Function_308(Local_986.f_44, 0);
			Function_307(Local_986.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_1040, -1.0f);
		}
	}
	return;
}

void Function_490() //Position: 0x1A53E / 107838
{
	Local_4.f_712 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Outlaw02"));
	(*&Local_4 + 684)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "OUTLAW_02_01", 401, 536.0f, 89,32568f, 1476.0f, 0.0f, 200,9943f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 684)[02], Local_4.f_712);
	(*&Local_4 + 684)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "OUTLAW_02_02", 402, 524,1478f, 90,67808f, 1483,852f, 0.0f, 182,2354f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 684)[12], Local_4.f_712);
	(*&Local_4 + 684)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "OUTLAW_02_03", 403, 536,0001f, 89,57132f, 1483,932f, 0.0f, 158,5052f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 684)[22], Local_4.f_712);
	return;
}

void Function_491(bool bParam0, bool bParam1) //Position: 0x1A62B / 108075
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (SQUAD_IS_VALID(bParam0) && SQUAD_IS_VALID(bParam1))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1) && IS_ACTOR_VALID(bVar2))
			{
				if (!IS_ACTOR_RIDING(bVar2) && !IS_ACTOR_MOUNTED(bVar1))
				{
					ACTOR_MOUNT_ACTOR(bVar2, bVar1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_492() //Position: 0x1A695 / 108181
{
	Local_4.f_680 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Outlaw01"));
	(*&Local_4 + 644)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "OUTLAW_01_01", 397, 320f, 114,447f, 1596.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 644)[02], Local_4.f_680);
	(*&Local_4 + 644)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "OUTLAW_01_02", 398, 316f, 115,1385f, 1596.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 644)[12], Local_4.f_680);
	(*&Local_4 + 644)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "OUTLAW_01_03", 401, 312f, 115,4509f, 1596.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 644)[22], Local_4.f_680);
	(*&Local_4 + 644)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "OUTLAW_01_04", 400, 308f, 115,4509f, 1596.0f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 644)[32], Local_4.f_680);
	return;
}

void Function_493() //Position: 0x1A7B7 / 108471
{
	Local_4.f_752 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Horse02"));
	(*&Local_4 + 716)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_02_01", 976, 331,9443f, 112,0419f, 1584,054f, 0.0f, 260,9508f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 716)[02], Local_4.f_752);
	(*&Local_4 + 716)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_02_02", 976, 328f, 112,4392f, 1588.0f, 0.0f, 253,5462f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 716)[12], Local_4.f_752);
	(*&Local_4 + 716)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_02_03", 976, 320,426f, 113,6176f, 1588,005f, 0.0f, 253,5462f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 716)[22], Local_4.f_752);
	(*&Local_4 + 716)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_02_04", 976, 325,0267f, 112,7109f, 1584,044f, 0.0f, 253,5462f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 716)[32], Local_4.f_752);
	return;
}

int Function_494() //Position: 0x1A8E4 / 108772
{
	Function_402(&Local_4 + 280, 397, 2, 0);
	Function_402(&Local_4 + 280, 398, 2, 0);
	Function_402(&Local_4 + 280, 401, 2, 0);
	Function_402(&Local_4 + 280, 400, 2, 0);
	Function_402(&Local_4 + 280, 402, 2, 0);
	Function_402(&Local_4 + 280, 403, 2, 0);
	Function_402(&Local_4 + 280, 976, 2, 0);
	Function_402(&Local_4 + 280, 208, 2, 0);
	Function_402(&Local_4 + 280, 73, 2, 0);
	Function_402(&Local_4 + 280, 74, 2, 0);
	Function_402(&Local_4 + 280, 33, 2, 0);
	Function_402(&Local_4 + 280, 238, 2, 0);
	Function_402(&Local_4 + 280, 191, 2, 0);
	Function_402(&Local_4 + 280, 192, 2, 0);
	if (Function_397(&Local_4 + 280))
	{
		return 1;
	}
	return 0;
}

void Function_495() //Position: 0x1A9B5 / 108981
{
	if (Function_300(&bLocal_958) <= 0,1f)
	{
		switch (iLocal_846)
		{
			case 0x00000000:
				iLocal_846++;
				break;
			
			case 0x00000001:
				if (iLocal_603 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_846++;
					}
				}
				break;
			
			case 0x00000002:
				Function_496();
				if (iLocal_603 > 9)
				{
					iLocal_846++;
				}
				break;
			
			case 0x00000003:
				iLocal_846++;
				break;
			}
	}
	return;
}

void Function_496() //Position: 0x1AA35 / 109109
{
	if (Function_300(&bLocal_961) <= 6.0f)
	{
		if (!IS_ACTOR_RIDING(Global_34573))
		{
		}
		else
		{
			if (IS_ACTOR_VALID(bLocal_607))
			{
				if (IS_ACTION_NODE_PLAYING(bLocal_607, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_ThrownFromHors", "Home02_r1_ThrownFromHors", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_228(&bLocal_961);
				}
			}
			if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 1,35f))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_RidesIntoUncleHors", "Home02_r1_RidesIntoUncleHors", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_228(&bLocal_961);
			}
		}
	}
	return;
}

bool Function_497(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1AB67 / 109415
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (SQUAD_IS_VALID(bParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (Function_445(bParam0, bVar1, bParam2))
					{
						return 1;
					}
				}
				bVar0++;
			}
		}
	}
	return 0;
}

void Function_498() //Position: 0x1ABBB / 109499
{
	if (IS_ACTOR_VALID(bLocal_606))
	{
		switch (iLocal_832)
		{
			case 0x00000000:
				iLocal_832++;
				break;
			
			case 0x00000001:
				CLEAR_ACTOR_MIN_SPEED(bLocal_606);
				CLEAR_ACTOR_MAX_SPEED(bLocal_606);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_606);
				Function_189(13, 0, 1);
				MEMORY_PREFER_RIDING(bLocal_606, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_606, true);
				bLocal_830 = TASK_SEQUENCE_OPEN();
				TASK_WANDER_IN_VOLUME(false, Local_4.f_1040, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
				TASK_SEQUENCE_RELEASE(bLocal_830, 1);
				TASK_PRIORITY_SET(bLocal_606, false);
				iLocal_832++;
				break;
			
			case 0x00000002:
				if (iLocal_603 > 20)
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 90.0f))
					{
						SET_ACTOR_MAX_SPEED(bLocal_606, 2);
						vLocal_877 = { -3.0f, 0.0f, -5.0f };
						bLocal_830 = TASK_SEQUENCE_OPEN();
						TASK_FOLLOW_OBJECT(0, Global_34573, &vLocal_877, 0, 0, 0, 0, 0, 0, 1);
						TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
						TASK_SEQUENCE_RELEASE(bLocal_830, 1);
						TASK_PRIORITY_SET(bLocal_606, true);
						iLocal_832++;
					}
				}
				break;
			
			case 0x00000003:
				iLocal_832++;
				break;
			}
	}
	return;
}

void Function_499() //Position: 0x1ACD5 / 109781
{
	if (IS_ACTOR_VALID(bLocal_860))
	{
		if (iLocal_603 < 12)
		{
			if (iLocal_837 > 2)
			{
				if (StackVal || !IS_ACTOR_IN_VOLUME(!GET_GRINGO_FROM_OBJECT(Local_459.f_28) != GET_CURRENT_GRINGO(bLocal_860), bLocal_860))
				{
					GET_OBJECT_POSITION(bLocal_860, &uLocal_901);
					if (!WOULD_ACTOR_BE_VISIBLE(Function_444(bLocal_860), &uLocal_901, 3212836864))
					{
						if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_459.f_28)))
						{
							SNAP_ACTOR_TO_GRINGO(bLocal_860, Local_459.f_28, "UseCase1", true, 0, 0);
						}
					}
				}
			}
		}
		switch (iLocal_837)
		{
			case 0x00000000:
				iLocal_837++;
				break;
			
			case 0x00000001:
				REMOVE_OBJECT_ATTACHMENT(bLocal_930);
				if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(Local_459.f_28)))
				{
					SNAP_ACTOR_TO_GRINGO(bLocal_860, Local_459.f_28, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(bLocal_860, GET_GRINGO_FROM_OBJECT(Local_459.f_28), "UseCase1", 4294967295, 1);
					TASK_PRIORITY_SET(bLocal_860, true);
				}
				iLocal_837++;
				break;
			
			case 0x00000002:
				if (iLocal_603 > 7)
				{
					SET_ACTOR_HEALTH(bLocal_860, GET_ACTOR_MAX_HEALTH(bLocal_606));
					SET_ACTOR_FACTION(bLocal_860, 20);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_860, 0,1f);
					Function_483(bLocal_860, Local_4.f_680, 3);
					Function_483(bLocal_860, Local_4.f_712, 3);
					iLocal_837++;
				}
				break;
			
			case 0x00000003:
				if (iLocal_603 > 13)
				{
					AI_GOAL_LOOK_AT_ACTOR(bLocal_860, Global_34573, 0, 1065353216, 3212836864, 3212836864, 0);
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_VOLUME_VALID(Local_4.f_1112))
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1112))
							{
								SET_ACTION_NODE_FOR_ACTOR(bLocal_860, "TrainEngineer/thank_right/lean_right_pre");
								Function_228(&bLocal_952);
								iLocal_837 = 5;
							}
							else if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
							{
								SET_ACTOR_FACE_STYLE(bLocal_860, 0);
								TASK_FACE_ACTOR(bLocal_860, Global_34573, 1, 3212836864);
								TASK_PRIORITY_SET(bLocal_860, true);
								Function_228(&bLocal_952);
								iLocal_837 = 4;
							}
							else
							{
								SET_ACTION_NODE_FOR_ACTOR(bLocal_860, "TrainEngineer/thank_left/lean_left_pre");
								Function_228(&bLocal_952);
								iLocal_837 = 5;
							}
						}
					}
				}
				break;
			
			case 0x00000004:
				if (Function_300(&bLocal_952) <= 4.0f)
				{
					SET_ANIM_SET_FOR_ACTOR(bLocal_860, "wave_goodbye", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_860, "wave_goodbye/right_hand");
					Function_228(&bLocal_952);
				}
				if (Function_469(bLocal_860, Global_34573, 24.0f))
				{
					Function_228(&bLocal_952);
					iLocal_837 = 6;
				}
				break;
			
			case 0x00000005:
				if (Function_469(bLocal_860, Global_34573, 24.0f))
				{
					Function_228(&bLocal_952);
					iLocal_837++;
				}
				break;
			
			case 0x00000006:
				if (Function_300(&bLocal_952) <= 1.0f)
				{
					Function_228(&bLocal_952);
					iLocal_837++;
				}
				break;
			
			case 0x00000007:
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (IS_VOLUME_VALID(Local_4.f_1112))
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1112))
						{
							SET_ACTION_NODE_FOR_ACTOR(bLocal_860, "TrainEngineer/thank_right/stand");
							Function_228(&bLocal_952);
							iLocal_837 = 8;
						}
						else if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
						{
							RESET_ANIM_SET_FOR_ACTOR(bLocal_860, 1);
							Function_228(&bLocal_952);
							iLocal_837 = 8;
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(bLocal_860, "TrainEngineer/thank_left/stand");
							Function_228(&bLocal_952);
							iLocal_837 = 8;
						}
					}
				}
				break;
			
			case 0x00000008:
				if (iLocal_922)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_VOLUME_VALID(Local_4.f_1112))
						{
							if (!GET_TASK_STATUS(bLocal_860, 19) != 1)
							{
								TASK_USE_GRINGO(bLocal_860, GET_GRINGO_FROM_OBJECT(Local_459.f_28), "UseCase1", 4294967295, 1);
								TASK_PRIORITY_SET(bLocal_860, true);
							}
							if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_1112))
							{
								SET_ACTION_NODE_FOR_ACTOR(bLocal_860, "TrainEngineer/thank_right/lean_right_pst");
								Function_228(&bLocal_952);
								iLocal_837 = 9;
							}
							else if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
							{
								Function_228(&bLocal_952);
								iLocal_837 = 9;
							}
							else
							{
								SET_ACTION_NODE_FOR_ACTOR(bLocal_860, "TrainEngineer/thank_left/lean_left_pst");
								Function_228(&bLocal_952);
								iLocal_837 = 9;
							}
						}
					}
				}
				break;
			
			case 0x00000009:
				iLocal_837++;
				break;
			}
	}
	return;
}

void Function_500() //Position: 0x1B193 / 110995
{
	bool bVar0;
	
	if (SQUAD_IS_VALID(Local_4.f_800))
	{
		switch (iLocal_836)
		{
			case 0x00000000:
				iLocal_836++;
				break;
			
			case 0x00000001:
				if (iLocal_603 > 7)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_800);
					SQUAD_SET_FACTION(Local_4.f_800, 20);
					Function_482(Local_4.f_800, Local_4.f_680, 3);
					Function_482(Local_4.f_800, Local_4.f_712, 3);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_800, false, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					iLocal_836++;
				}
				break;
			
			case 0x00000002:
				SQUAD_GOALS_CLEAR(Local_4.f_800);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_800, false, 1, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				iLocal_836++;
				break;
			
			case 0x00000003:
				if (Function_505(bLocal_840, 0.0f))
				{
					Function_364(Local_4.f_800);
					SQUAD_GOALS_CLEAR(Local_4.f_800);
					Function_183(&bLocal_931);
					Function_504(Local_4.f_800, Local_4.f_680, 0);
					Function_504(Local_4.f_800, Local_4.f_712, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_800, false, 0, 4294967295);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
					iLocal_836 = 4;
				}
				if (iLocal_603 > 14)
				{
					iLocal_836 = 4;
				}
				break;
			
			case 0x00000004:
				if (iLocal_603 > 14)
				{
					Function_364(Local_4.f_800);
					SQUAD_GOALS_CLEAR(Local_4.f_800);
					Function_183(&bLocal_931);
					Function_503(Local_4.f_800, 1);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_800, false, 0, 4294967295);
					TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
					Function_228(&bLocal_967);
					iLocal_836++;
				}
				break;
			
			case 0x00000005:
				if (Function_300(&bLocal_967) <= RAND_FLOAT_RANGE(5,5f, 8,5f))
				{
					if (Function_497(Global_34573, Local_4.f_800, 24.0f) && !IS_ACTOR_ON_TRAIN(Global_34573, 0))
					{
						bVar0 = Function_501(Local_4.f_800, Global_34573, 0, 0);
						SET_ANIM_SET_FOR_ACTOR(bVar0, "wave_goodbye", 0);
						if (Function_363(RAND_INT_RANGE(false, true)))
						{
							SET_ACTION_NODE_FOR_ACTOR(bVar0, "wave_goodbye/right_hand");
						}
						else
						{
							SET_ACTION_NODE_FOR_ACTOR(bVar0, "wave_goodbye/left_hand");
						}
						Function_228(&bLocal_967);
					}
				}
				if (iLocal_603 > 22)
				{
					iLocal_836++;
				}
				break;
			
			case 0x00000006:
				iLocal_836++;
				break;
			}
	}
	return;
}

var Function_501(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1B3D4 / 111572
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
			fVar3 = Function_502(bVar4, bParam1);
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

var Function_502(bool bParam0, bool bParam1) //Position: 0x1B48E / 111758
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

void Function_503(bool bParam0, int iParam1) //Position: 0x1B57F / 111999
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

void Function_504(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1B5B6 / 112054
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

bool Function_505(bool bParam0, float fParam1) //Position: 0x1B627 / 112167
{
	float fVar0;
	
	fVar0 = TRAIN_GET_VELOCITY(bParam0);
	if (fVar0 != fParam1)
	{
		return 1;
	}
	return 0;
}

void Function_506() //Position: 0x1B63F / 112191
{
	bool bVar0;
	
	if (SQUAD_IS_VALID(Local_4.f_824))
	{
		switch (iLocal_835)
		{
			case 0x00000000:
				iLocal_835++;
				break;
			
			case 0x00000001:
				if (iLocal_603 > 7)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_824);
					Function_482(Local_4.f_824, Local_4.f_680, 3);
					Function_482(Local_4.f_824, Local_4.f_712, 3);
					Function_507(Local_4.f_824, 1);
					SQUAD_SET_FACTION(Local_4.f_824, 20);
					SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(20, 19, 0,25f);
					SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(20, 19, 0,1f);
					if (IS_ACTOR_VALID((*&Local_4 + 804)[02]))
					{
						TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 804)[02], GET_COVER_LOCATION_FROM_OBJECT(Local_470.f_52), -1.0f, 1086324736);
						TASK_PRIORITY_SET((*&Local_4 + 804)[02], true);
					}
					if (IS_ACTOR_VALID((*&Local_4 + 804)[12]))
					{
						TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 804)[12], GET_COVER_LOCATION_FROM_OBJECT(Local_505.f_92), -1.0f, 1086324736);
						TASK_PRIORITY_SET((*&Local_4 + 804)[12], true);
					}
					iLocal_835++;
				}
				break;
			
			case 0x00000002:
				if (Function_505(bLocal_840, 0.0f))
				{
					Function_183(&bLocal_937);
					Function_504(Local_4.f_824, Local_4.f_680, 0);
					Function_504(Local_4.f_824, Local_4.f_712, 0);
					iLocal_835 = 3;
				}
				if (iLocal_603 > 14)
				{
					iLocal_835 = 3;
				}
				break;
			
			case 0x00000003:
				if (iLocal_603 > 14)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_824);
					Function_364(Local_4.f_824);
					Function_183(&bLocal_937);
					Function_503(Local_4.f_824, 1);
					if (IS_ACTOR_VALID((*&Local_4 + 804)[02]))
					{
						SET_ACTOR_FACE_STYLE((*&Local_4 + 804)[02], 0);
					}
					if (IS_ACTOR_VALID((*&Local_4 + 804)[12]))
					{
						SET_ACTOR_FACE_STYLE((*&Local_4 + 804)[12], 0);
					}
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_824, false, 0, 4294967295);
					TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
					Function_228(&bLocal_964);
					iLocal_835++;
				}
				break;
			
			case 0x00000004:
				if (Function_300(&bLocal_964) <= RAND_FLOAT_RANGE(6.0f, 8.0f))
				{
					if (Function_497(Global_34573, Local_4.f_824, 24.0f) && !IS_ACTOR_ON_TRAIN(Global_34573, 0))
					{
						bVar0 = Function_501(Local_4.f_824, Global_34573, 0, 0);
						SET_ACTION_NODE_FOR_ACTOR(bVar0, "wave_goodbye/left_hand");
						Function_228(&bLocal_964);
					}
				}
				if (iLocal_603 > 22)
				{
					iLocal_835++;
				}
				break;
			
			case 0x00000005:
				iLocal_835++;
				break;
			}
	}
	return;
}

void Function_507(bool bParam0, bool bParam1) //Position: 0x1B891 / 112785
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
				SET_ACTOR_VISION_XRAY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_508() //Position: 0x1B8DA / 112858
{
	if (SQUAD_IS_VALID(Local_4.f_712))
	{
		switch (iLocal_834)
		{
			case 0x00000000:
				iLocal_834++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(Local_4.f_712);
				Function_228(&bLocal_955);
				iLocal_834++;
				break;
			
			case 0x00000002:
				if (iLocal_603 > 7)
				{
					GET_OBJECT_POSITION((*&Local_4 + 1424)[0], &cLocal_895);
					Function_515(&cLocal_895, "DynamiteExplosion", 0, 1);
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x00000003:
				if (Function_300(&bLocal_955) <= 0,25f)
				{
					GET_OBJECT_POSITION((*&Local_4 + 1424)[1], &cLocal_895);
					Function_515(&cLocal_895, "DynamiteExplosion", 0, 1);
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x00000004:
				if (Function_300(&bLocal_955) <= 0,75f)
				{
					GET_OBJECT_POSITION((*&Local_4 + 1424)[2], &cLocal_895);
					Function_515(&cLocal_895, "DynamiteExplosion", 0, 1);
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x00000005:
				if (Function_300(&bLocal_955) <= 0,25f)
				{
					GET_OBJECT_POSITION((*&Local_4 + 1424)[3], &cLocal_895);
					Function_515(&cLocal_895, "DynamiteExplosion", 0, 1);
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x00000006:
				if (Function_300(&bLocal_955) <= 0,5f)
				{
					GET_OBJECT_POSITION((*&Local_4 + 1424)[4], &cLocal_895);
					Function_515(&cLocal_895, "DynamiteExplosion", 0, 1);
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x00000007:
				if (Function_300(&bLocal_955) <= 0,75f)
				{
					GET_OBJECT_POSITION((*&Local_4 + 1424)[5], &cLocal_895);
					Function_515(&cLocal_895, "DynamiteExplosion", 0, 1);
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x00000008:
				SQUAD_GOALS_CLEAR(Local_4.f_712);
				Function_514(Local_4.f_712, 1);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(1, 20, 0,2f);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, false, 0, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[22], Local_4.f_1788, 5.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, true, 0, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[32], Local_4.f_1788, 5.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, 2, 0, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[42], Local_4.f_1788, 5.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, 3, 0, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				Function_228(&bLocal_955);
				iLocal_834++;
				break;
			
			case 0x00000009:
				if (iLocal_630)
				{
					SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0,2f);
					Function_228(&bLocal_955);
					iLocal_834 = 10;
				}
				if (Function_300(&bLocal_955) <= 60.0f || Function_505(bLocal_840, 0.0f))
				{
					Function_228(&bLocal_955);
					iLocal_834 = 14;
				}
				break;
			
			case 0x0000000A:
				if (Function_300(&bLocal_955) <= 3.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_712);
					Function_513(Local_4.f_712);
					Function_512(Local_4.f_712, 1);
					Function_511(Local_4.f_712, Global_34573);
					Function_510(Local_4.f_712, Global_34573, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, false, 1, 1);
					TASK_KILL_CHAR(false, Global_34573);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, true, 1, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[22], Local_4.f_1788, 0.0f, 1, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, 2, 1, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[32], Local_4.f_1788, 0.0f, 1, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, 3, 1, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[42], Local_4.f_1788, 0.0f, 1, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, 3, 0, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x0000000B:
				if (Function_505(bLocal_840, 0.0f))
				{
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x0000000C:
				if (Function_300(&bLocal_955) <= 1.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_712);
					Function_513(Local_4.f_712);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, false, 1, 2);
					TASK_KILL_CHAR(false, Global_34573);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, true, 0, 4294967295);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x0000000D:
				if (Function_300(&bLocal_955) <= 60.0f)
				{
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x0000000E:
				SQUAD_GOALS_CLEAR(Local_4.f_712);
				Function_437(Local_4.f_712, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(1, 20, 1.0f);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_860, 1.0f);
				Function_482(Local_4.f_712, Local_4.f_824, 3);
				Function_482(Local_4.f_712, Local_4.f_800, 3);
				Function_509(Local_4.f_712, bLocal_860, 3);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, false, 1, 1);
				TASK_KILL_CHAR(false, bLocal_860);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, true, 0, 4294967295);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				Function_228(&bLocal_955);
				iLocal_834++;
				break;
			
			case 0x0000000F:
				if (iLocal_603 > 18)
				{
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x00000010:
				SQUAD_GOALS_CLEAR(Local_4.f_712);
				Function_437(Local_4.f_712, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1,5f);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 1,5f);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, false, 1, 2);
				TASK_GO_NEAR_COORD(false, &Local_4 + 1520, 10.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, true, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 804)[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, 2, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 804)[12]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, 3, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 756)[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, 4, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 756)[12]);
				Function_228(&bLocal_955);
				iLocal_834++;
				break;
			
			case 0x00000011:
				if (Function_300(&bLocal_955) <= 25.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_712);
					Function_437(Local_4.f_712, 5, 3);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, false, 1, 4294967295);
					TASK_GO_NEAR_COORD(false, &Local_4 + 1520, 10.0f, 3);
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x00000012:
				if (Function_300(&bLocal_955) <= 15.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_712);
					Function_364(Local_4.f_712);
					Function_435(StackVal, StackVal, Local_4.f_712, *(&Local_4 + 1520), 0, 3);
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x00000013:
				Function_435(StackVal, StackVal, Local_4.f_712, *(&Local_4 + 1520), 0, 3);
				Function_228(&bLocal_955);
				iLocal_834++;
				break;
			
			case 0x00000014:
				iLocal_834++;
				break;
			}
	}
	return;
}

void Function_509(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1BF8D / 114573
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

void Function_510(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1BFD2 / 114642
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

void Function_511(bool bParam0, bool bParam1) //Position: 0x1C03F / 114751
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

void Function_512(bool bParam0, bool bParam1) //Position: 0x1C091 / 114833
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_513(bool bParam0) //Position: 0x1C0D2 / 114898
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

void Function_514(bool bParam0, bool bParam1) //Position: 0x1C11D / 114973
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
				MEMORY_PREFER_RIDING(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_515(float fParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0x1C165 / 115045
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(fParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_516() //Position: 0x1C181 / 115073
{
	if (SQUAD_IS_VALID(Local_4.f_680))
	{
		switch (iLocal_833)
		{
			case 0x00000000:
				iLocal_833++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(Local_4.f_680);
				Function_437(Local_4.f_680, 1, 4);
				Function_482(Local_4.f_680, Local_4.f_824, 3);
				Function_512(Local_4.f_680, 1);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(1, 20, 0,2f);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[02], Local_4.f_1788, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, true, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[22], Local_4.f_1788, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 2, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[32], Local_4.f_1788, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 3, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[42], Local_4.f_1788, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 4, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[52], Local_4.f_1788, 0.0f, 1, 0);
				Function_228(&bLocal_946);
				iLocal_833++;
				break;
			
			case 0x00000002:
				if (iLocal_630)
				{
					SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0,2f);
					Function_228(&bLocal_946);
					iLocal_833 = 3;
				}
				if (Function_300(&bLocal_946) <= 60.0f || Function_505(bLocal_840, 0.0f))
				{
					Function_228(&bLocal_946);
					iLocal_833 = 7;
				}
				break;
			
			case 0x00000003:
				if (Function_300(&bLocal_946) <= 3.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_680);
					Function_513(Local_4.f_680);
					Function_511(Local_4.f_680, Global_34573);
					Function_510(Local_4.f_680, Global_34573, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 2);
					TASK_KILL_CHAR(false, Global_34573);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, true, 0, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[02], Local_4.f_1788, 0.0f, 1, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 2, 0, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[22], Local_4.f_1788, 0.0f, 1, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 3, 0, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[32], Local_4.f_1788, 0.0f, 1, 0);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 4, 0, 1);
					TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[42], Local_4.f_1788, 0.0f, 1, 0);
					Function_228(&bLocal_946);
					iLocal_833++;
				}
				break;
			
			case 0x00000004:
				if (Function_505(bLocal_840, 0.0f))
				{
					Function_228(&bLocal_946);
					iLocal_833++;
				}
				break;
			
			case 0x00000005:
				if (Function_300(&bLocal_946) <= 1.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_680);
					Function_513(Local_4.f_680);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 2);
					TASK_KILL_CHAR(false, Global_34573);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, true, 0, 4294967295);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
					Function_228(&bLocal_946);
					iLocal_833++;
				}
				break;
			
			case 0x00000006:
				if (Function_300(&bLocal_946) <= 60.0f)
				{
					Function_228(&bLocal_946);
					iLocal_833++;
				}
				break;
			
			case 0x00000007:
				SQUAD_GOALS_CLEAR(Local_4.f_680);
				Function_437(Local_4.f_680, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1.0f);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(1, 20, 1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_860, 1.0f);
				Function_482(Local_4.f_680, Local_4.f_824, 3);
				Function_482(Local_4.f_680, Local_4.f_800, 3);
				Function_509(Local_4.f_680, bLocal_860, 3);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 2);
				TASK_KILL_CHAR(false, bLocal_860);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, true, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[22], Local_4.f_1788, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 2, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[32], Local_4.f_1788, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 3, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[42], Local_4.f_1788, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 4, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[52], Local_4.f_1788, 0.0f, 1, 0);
				Function_228(&bLocal_946);
				iLocal_833++;
				break;
			
			case 0x00000008:
				if (iLocal_603 > 18)
				{
					Function_228(&bLocal_946);
					iLocal_833++;
				}
				break;
			
			case 0x00000009:
				SQUAD_GOALS_CLEAR(Local_4.f_680);
				Function_437(Local_4.f_680, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 1,5f);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(19, 20, 1,5f);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 1);
				TASK_GO_NEAR_COORD(false, &Local_4 + 1520, 10.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, true, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 804)[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 2, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 804)[12]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 3, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 756)[02]);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 4, 1, 1);
				TASK_KILL_CHAR(false, (*&Local_4 + 756)[12]);
				Function_228(&bLocal_946);
				iLocal_833++;
				break;
			
			case 0x0000000A:
				if (Function_300(&bLocal_946) <= 25.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_680);
					Function_437(Local_4.f_680, 5, 3);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 4294967295);
					TASK_GO_NEAR_COORD(false, &Local_4 + 1520, 10.0f, 3);
					Function_228(&bLocal_946);
					iLocal_833++;
				}
				break;
			
			case 0x0000000B:
				if (Function_300(&bLocal_946) <= 15.0f)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_680);
					Function_364(Local_4.f_680);
					Function_435(StackVal, StackVal, Local_4.f_680, *(&Local_4 + 1520), 0, 3);
					Function_228(&bLocal_946);
					iLocal_833++;
				}
				break;
			
			case 0x0000000C:
				iLocal_833++;
				break;
			}
	}
	return;
}

void Function_517() //Position: 0x1C6B7 / 116407
{
	switch (iLocal_841)
	{
		case 0x00000000:
			iLocal_841++;
			break;
		
		case 0x00000001:
			TRAIN_SET_TARGET_SPEED(bLocal_840, 8.0f);
			Function_228(&bLocal_949);
			iLocal_841++;
			break;
		
		case 0x00000002:
			if (iLocal_603 > 7)
			{
				if (IS_VOLUME_VALID(Local_4.f_1092))
				{
					if (IS_OBJECT_VALID(Local_1017[02]))
					{
						if (IS_OBJECT_IN_VOLUME(Local_1017[02], Local_4.f_1092))
						{
							TRAIN_SET_TARGET_SPEED(bLocal_840, 0.0f);
							Function_228(&bLocal_949);
							iLocal_841 = 9;
						}
					}
				}
				if (Function_300(&bLocal_949) <= 5.0f)
				{
					bLocal_985 = PLAY_SOUND_FROM_OBJECT(Local_1017[02], "TRAIN_WHISTLE_LONG_DISTANT_MASTER");
					TRAIN_SET_TARGET_SPEED(bLocal_840, 7.0f);
					Function_228(&bLocal_949);
					iLocal_841 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_VOLUME_VALID(Local_4.f_1092))
			{
				if (IS_OBJECT_VALID(Local_1017[02]))
				{
					if (IS_OBJECT_IN_VOLUME(Local_1017[02], Local_4.f_1092))
					{
						TRAIN_SET_TARGET_SPEED(bLocal_840, 0.0f);
						Function_228(&bLocal_949);
						iLocal_841 = 9;
					}
				}
			}
			if (Function_300(&bLocal_949) <= 4.0f)
			{
				TRAIN_SET_TARGET_SPEED(bLocal_840, 6.0f);
				Function_228(&bLocal_949);
				iLocal_841 = 4;
			}
			break;
		
		case 0x00000004:
			if (IS_VOLUME_VALID(Local_4.f_1092))
			{
				if (IS_OBJECT_VALID(Local_1017[02]))
				{
					if (IS_OBJECT_IN_VOLUME(Local_1017[02], Local_4.f_1092))
					{
						TRAIN_SET_TARGET_SPEED(bLocal_840, 0.0f);
						Function_228(&bLocal_949);
						iLocal_841 = 9;
					}
				}
			}
			if (Function_300(&bLocal_949) <= 3.0f)
			{
				TRAIN_SET_TARGET_SPEED(bLocal_840, 5.0f);
				Function_228(&bLocal_949);
				iLocal_841 = 5;
			}
			break;
		
		case 0x00000005:
			if (IS_VOLUME_VALID(Local_4.f_1092))
			{
				if (IS_OBJECT_VALID(Local_1017[02]))
				{
					if (IS_OBJECT_IN_VOLUME(Local_1017[02], Local_4.f_1092))
					{
						TRAIN_SET_TARGET_SPEED(bLocal_840, 0.0f);
						Function_228(&bLocal_949);
						iLocal_841 = 9;
					}
				}
			}
			if (Function_300(&bLocal_949) <= 2.0f)
			{
				TRAIN_SET_TARGET_SPEED(bLocal_840, 4.0f);
				Function_228(&bLocal_949);
				iLocal_841 = 6;
			}
			break;
		
		case 0x00000006:
			if (IS_VOLUME_VALID(Local_4.f_1092))
			{
				if (IS_OBJECT_VALID(Local_1017[02]))
				{
					if (IS_OBJECT_IN_VOLUME(Local_1017[02], Local_4.f_1092))
					{
						TRAIN_SET_TARGET_SPEED(bLocal_840, 0.0f);
						Function_228(&bLocal_949);
						iLocal_841 = 9;
					}
				}
			}
			if (IS_VOLUME_VALID(Local_4.f_1088))
			{
				if (IS_OBJECT_VALID(Local_1017[02]))
				{
					if (IS_OBJECT_IN_VOLUME(Local_1017[02], Local_4.f_1088))
					{
						TRAIN_SET_TARGET_SPEED(bLocal_840, 3.0f);
						Function_228(&bLocal_949);
						iLocal_841 = 7;
					}
				}
			}
			break;
		
		case 0x00000007:
			if (IS_VOLUME_VALID(Local_4.f_1092))
			{
				if (IS_OBJECT_VALID(Local_1017[02]))
				{
					if (IS_OBJECT_IN_VOLUME(Local_1017[02], Local_4.f_1092))
					{
						TRAIN_SET_TARGET_SPEED(bLocal_840, 0.0f);
						Function_228(&bLocal_949);
						iLocal_841 = 9;
					}
				}
			}
			if (Function_300(&bLocal_949) <= 3.0f)
			{
				TRAIN_SET_TARGET_SPEED(bLocal_840, 1.0f);
				Function_228(&bLocal_949);
				iLocal_841 = 8;
			}
			break;
		
		case 0x00000008:
			if (IS_VOLUME_VALID(Local_4.f_1092))
			{
				if (IS_OBJECT_VALID(Local_1017[02]))
				{
					if (IS_OBJECT_IN_VOLUME(Local_1017[02], Local_4.f_1092))
					{
						TRAIN_SET_TARGET_SPEED(bLocal_840, 0.0f);
						Function_228(&bLocal_949);
						iLocal_841++;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (iLocal_603 > 16)
			{
				if (bLocal_907)
				{
					if (IS_ACTOR_VALID(bLocal_860))
					{
						if (!IS_ACTOR_DEAD(bLocal_860))
						{
							bLocal_917 = false;
							Function_228(&bLocal_949);
							iLocal_841++;
						}
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_300(&bLocal_949) <= 20.0f)
			{
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x0000000B:
			bLocal_917 = true;
			TRAIN_SET_TARGET_SPEED(bLocal_840, 1.0f);
			bLocal_985 = PLAY_SOUND_FROM_OBJECT(Local_1017[02], "TRAIN_WHISTLE_LONG_DISTANT_MASTER");
			Function_228(&bLocal_949);
			iLocal_841++;
			break;
		
		case 0x0000000C:
			if (Function_300(&bLocal_949) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(bLocal_840, 2.0f);
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x0000000D:
			if (Function_300(&bLocal_949) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(bLocal_840, 3.0f);
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x0000000E:
			if (Function_300(&bLocal_949) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(bLocal_840, 4.0f);
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x0000000F:
			if (Function_300(&bLocal_949) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(bLocal_840, 5.0f);
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x00000010:
			if (Function_300(&bLocal_949) <= 5.0f)
			{
				TRAIN_SET_TARGET_SPEED(bLocal_840, 6.0f);
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x00000011:
			if (Function_300(&bLocal_949) <= 5.0f)
			{
				bLocal_985 = PLAY_SOUND_FROM_OBJECT(Local_1017[02], "TRAIN_WHISTLE_LONG_DISTANT_MASTER");
				TRAIN_SET_TARGET_SPEED(bLocal_840, 7.0f);
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x00000012:
			if (Function_300(&bLocal_949) <= 7.0f)
			{
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x00000013:
			if (IS_OBJECT_VALID(Local_1017[02]))
			{
				Function_171();
			}
			if (IS_ACTOR_VALID(bLocal_860))
			{
				RELEASE_ACTOR(bLocal_860);
			}
			if (SQUAD_IS_VALID(Local_4.f_800))
			{
				Function_180(&Local_4 + 800, 0, 0);
				RELEASE_OBJECT_REF(Local_4.f_800);
			}
			if (SQUAD_IS_VALID(Local_4.f_824))
			{
				Function_180(&Local_4 + 824, 0, 0);
				RELEASE_OBJECT_REF(Local_4.f_824);
			}
			iLocal_841++;
			break;
		
		case 0x00000014:
			iLocal_841++;
			break;
	}
	return;
}

void Function_518() //Position: 0x1CC43 / 117827
{
	if (((iLocal_603 < 5 && iLocal_603 > 105) && !iLocal_603 != 104) && !iLocal_603 != 103)
	{
		Function_540();
		Function_539();
		Function_538();
		Function_537();
		Function_536();
		Function_535();
		Function_534();
		Function_433(Global_34573);
		Function_432();
		if (iLocal_603 <= 6 && iLocal_603 >= 8)
		{
			Function_452(&Local_986);
			if (bLocal_906)
			{
				Function_448(&Local_986);
				Function_447(&Local_986);
				Function_446(&Local_986, 0x41700000);
				if (Function_300(&bLocal_943) <= 0,2f)
				{
					Function_443(&Local_986);
					Function_228(&bLocal_943);
				}
				Function_442();
			}
		}
		else if (iLocal_603 <= 9 && iLocal_603 >= 14)
		{
			if (bLocal_906)
			{
				Function_533(&Local_986);
				if (iLocal_603 > 12)
				{
					Function_532(&Local_986, 2,85f);
					Function_531(&Local_986, 30.0f);
				}
				if (Function_300(&bLocal_943) <= 0,2f)
				{
					Function_443(&Local_986);
					Function_228(&bLocal_943);
				}
				Function_442();
			}
		}
		Function_528();
	}
	switch (iLocal_603)
	{
		case 0x00000000:
			Function_335(0);
			SET_ACTOR_HEALTH(bLocal_606, GET_ACTOR_MAX_HEALTH(bLocal_606));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (iLocal_617[3] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_327();
				bLocal_604 = Global_30637[0];
				if (!Function_326(bLocal_604))
				{
					Function_324(&Local_532);
				}
				Function_323(Global_34573, (*&Local_4 + 1236)[0], 1, 1, 1);
				iLocal_839 = 0;
				if (IS_ACTOR_VALID(bLocal_607))
				{
					TASK_STAND_STILL(bLocal_607, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_607, true);
				}
				if (IS_ACTOR_VALID(bLocal_606))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_606);
					CLEAR_ACTOR_MAX_SPEED(bLocal_606);
					TASK_STAND_STILL(bLocal_606, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_606, true);
				}
				Function_228(&bLocal_608);
				iLocal_603 = 1;
			}
			else
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_326(bLocal_604) || bLocal_604 != 4294967295)) && Function_527())
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_403() && Function_527())
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
				iLocal_831 = 0;
				iLocal_832 = 0;
				iLocal_841 = 0;
				iLocal_833 = 0;
				iLocal_834 = 0;
				iLocal_835 = 0;
				iLocal_836 = 0;
				iLocal_846 = 0;
				iLocal_837 = 0;
				iLocal_904 = 0;
				iLocal_630 = 0;
				bLocal_906 = false;
				iLocal_905 = 0;
				iLocal_914 = 0;
				iLocal_916 = 0;
				iLocal_915 = 0;
				Function_395(&iLocal_908);
				STREAMING_LOAD_BOUNDS(*(&Local_4 + 1544), 250.0f, 1);
				bLocal_842 = Function_321(Function_322(Local_532));
				PRINTINT(bLocal_842);
				PRINTNL();
				bLocal_843 = (15 - bLocal_842);
				PRINTINT(bLocal_843);
				PRINTNL();
				bLocal_849 = Global_34165.f_124;
				bLocal_850 = Global_34165.f_128;
				PRINTINT(bLocal_849);
				PRINTNL();
				PRINTINT(bLocal_850);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Local_986.f_76 = bLocal_849;
				Local_986.f_80 = bLocal_850;
				Function_525();
				if (IS_ACTOR_VALID(bLocal_861))
				{
					SET_ACTOR_HEALTH(bLocal_861, 50.0f);
					Function_323(bLocal_861, (*&Local_4 + 1132)[4], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_862))
				{
					SET_ACTOR_HEALTH(bLocal_862, 50.0f);
					Function_323(bLocal_862, (*&Local_4 + 1132)[5], 1, 1, 1);
				}
				if (iLocal_617[3] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_607))
						{
							Function_323(bLocal_607, (*&Local_4 + 1236)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_607))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_607);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_606))
					{
						Function_189(13, 0, 1);
						Function_323(bLocal_606, (*&Local_4 + 1236)[1], 1, 1, 1);
						if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
						{
							Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1236)[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_606) && !IS_ACTOR_MOUNTED((*&Local_4 + 628)[02]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_606, (*&Local_4 + 628)[02]);
							}
						}
					}
					Function_228(&bLocal_608);
					iLocal_603 = 5;
				}
				else
				{
					Function_228(&bLocal_608);
					iLocal_603 = 6;
				}
				if ((SQUAD_IS_VALID(Local_986.f_56) && SQUAD_IS_VALID(Local_986.f_52)) && SQUAD_IS_VALID(Local_986.f_48))
				{
					Function_344(Local_986.f_56);
					Function_344(Local_986.f_52);
					Function_344(Local_986.f_48);
					Function_304(Local_986.f_56, Local_986.f_44);
					Function_304(Local_986.f_52, Local_986.f_44);
					Function_304(Local_986.f_48, Local_986.f_44);
				}
				Function_383(&(Local_671[017]), bLocal_606, "Uncle", 1, 0x5f5e100, 1);
				Function_383(&(Local_671[117]), Local_986.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[217]), Local_986.f_48, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[317]), Local_986.f_52, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[417]), Local_986.f_56, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[517]), bLocal_860, "Engineer", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[617]), Local_4.f_800, "Train_Passenger", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[717]), Local_4.f_824, "Train_Marshal", 0, 0x5f5e100, 1);
				Function_378(&(Local_671[117]), 2);
				Function_378(&(Local_671[217]), 2);
				Function_378(&(Local_671[317]), 2);
				Function_378(&(Local_671[417]), 2);
				Function_378(&(Local_671[517]), 2);
				Function_378(&(Local_671[617]), 2);
				Function_378(&(Local_671[717]), 2);
				Function_244(iLocal_602);
				Function_372(StackVal, StackVal, Function_244(iLocal_602), iLocal_602, Global_30637[0], Function_247(iLocal_602), 2);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_606) && SQUAD_IS_VALID(Local_986.f_44))
			{
				if (Function_371(bLocal_606, 1, 0x41700000) && Function_370(Local_986.f_44, 1))
				{
					Function_228(&bLocal_608);
					iLocal_603 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(Local_986.f_44))
			{
				Function_369();
				Function_524();
				Function_303(Local_986.f_44);
				Function_366(Local_986.f_44, &Local_4 + 932);
				Function_365(Local_986.f_44, 2, 1);
			}
			CAMERA_RESET(0);
			Function_228(&bLocal_608);
			iLocal_603 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_228(&bLocal_608);
				iLocal_603 = 6;
			}
			break;
		
		case 0x00000006:
			if (iLocal_617[3] == 1)
			{
				if (SQUAD_IS_VALID(Local_986.f_44))
				{
					Function_369();
					Function_524();
					Function_303(Local_986.f_44);
					Function_366(Local_986.f_44, &Local_4 + 932);
					Function_365(Local_986.f_44, 2, 1);
				}
			}
			iLocal_904 = 0;
			if (SQUAD_IS_VALID(Local_986.f_48))
			{
				SQUAD_GOALS_CLEAR(Local_986.f_48);
				Function_364(Local_986.f_48);
			}
			*(&Local_986 + 28) = { 0.0f, 0.0f, 0.0f };
			if (SQUAD_IS_VALID(Local_986.f_52))
			{
				SQUAD_GOALS_CLEAR(Local_986.f_52);
				Function_364(Local_986.f_52);
			}
			Local_986.f_8 = Local_4.f_1504;
			GET_OBJECT_POSITION(Local_4.f_1504, &uLocal_874);
			if (SQUAD_IS_VALID(Local_986.f_56))
			{
				SQUAD_GOALS_CLEAR(Local_986.f_56);
				bLocal_830 = TASK_SEQUENCE_OPEN();
				TASK_WANDER_IN_VOLUME(false, Local_4.f_1032, -1.0f);
				TASK_SEQUENCE_CLOSE();
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_56, false, 1, 4294967295);
				TASK_SEQUENCE_PERFORM(false, bLocal_830);
				TASK_SEQUENCE_RELEASE(bLocal_830, 1);
			}
			Function_228(&bLocal_608);
			iLocal_603 = 7;
			break;
		
		case 0x00000007:
			if (iLocal_617[3] == 0)
			{
				UI_SHOW("RacePosition");
				Function_360("home02_ranch01_obj03", 7,5f, 1, 2, 0, 0, 0);
			}
			Function_228(&bLocal_608);
			iLocal_603 = 8;
			break;
		
		case 0x00000008:
			if (Function_357(&bLocal_614, 60.0f, bLocal_607, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_628, 0, bLocal_531, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_865))
				{
					REMOVE_BLIP(bLocal_865);
				}
				if (IS_OBJECT_VALID(bLocal_866))
				{
					DESTROY_OBJECT(bLocal_866);
				}
				if (bLocal_906)
				{
					Function_356();
				}
			}
			else
			{
				Function_346(StackVal, &bLocal_614, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_628, 0, 0, 0, 4294967295, 1);
				if (!IS_BLIP_VALID(bLocal_865))
				{
					bLocal_865 = ADD_BLIP_FOR_OBJECT(Local_4.f_1504, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_865))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_866))
				{
					GET_OBJECT_POSITION(Local_4.f_1504, &vLocal_868);
					GET_OBJECT_ORIENTATION(Local_4.f_1504, &vLocal_871);
					bLocal_866 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_531, "HOME02RANCH01GATEWAY01", vLocal_868, vLocal_871, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_866))
					{
					}
				}
				if (!bLocal_906)
				{
					Function_249();
					Function_345();
				}
			}
			if ((StackVal && IS_OBJECT_VALID(IS_ACTOR_VALID(bLocal_606))) && IS_OBJECT_VALID(Local_1017[02]))
			{
				if (IS_VOLUME_VALID(Local_4.f_1064) && IS_VOLUME_VALID(Local_4.f_1104))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_606, Local_4.f_1064))
					{
						if (IS_BLIP_VALID(bLocal_865))
						{
							REMOVE_BLIP(bLocal_865);
						}
						if (IS_OBJECT_VALID(bLocal_866))
						{
							DESTROY_OBJECT(bLocal_866);
						}
						if (IS_OBJECT_VALID(StackVal))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(StackVal));
							}
						}
						if (IS_OBJECT_VALID(Local_986))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_986)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_986));
							}
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_249();
						Function_228(&bLocal_608);
						iLocal_603 = 9;
					}
					else if (IS_OBJECT_IN_VOLUME(StackVal, Local_4.f_1064))
					{
						if (IS_BLIP_VALID(bLocal_865))
						{
							REMOVE_BLIP(bLocal_865);
						}
						if (IS_OBJECT_VALID(bLocal_866))
						{
							DESTROY_OBJECT(bLocal_866);
						}
						if (IS_OBJECT_VALID(StackVal))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(StackVal));
							}
						}
						if (IS_OBJECT_VALID(Local_986))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_986)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_986));
							}
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_249();
						Function_228(&bLocal_608);
						iLocal_603 = 9;
					}
					else if (IS_OBJECT_IN_VOLUME(Local_1017[02], Local_4.f_1104))
					{
						if (IS_BLIP_VALID(bLocal_865))
						{
							REMOVE_BLIP(bLocal_865);
						}
						if (IS_OBJECT_VALID(bLocal_866))
						{
							DESTROY_OBJECT(bLocal_866);
						}
						if (IS_OBJECT_VALID(StackVal))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(StackVal));
							}
						}
						if (IS_OBJECT_VALID(Local_986))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_986)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_986));
							}
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_249();
						Function_228(&bLocal_608);
						iLocal_603 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (SQUAD_IS_VALID(Local_986.f_44))
			{
				GET_OBJECT_POSITION(Local_4.f_1516, &uLocal_883);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
				TASK_GO_NEAR_COORD(false, &uLocal_883, 15.0f, 3);
				Function_523(Local_986.f_44, 424, 0,8f, 0);
			}
			iLocal_904 = 0;
			if (SQUAD_IS_VALID(Local_986.f_48))
			{
				SQUAD_GOALS_CLEAR(Local_986.f_48);
				Function_364(Local_986.f_48);
			}
			*(&Local_986 + 28) = { 0.0f, 0.0f, 0.0f };
			if (SQUAD_IS_VALID(Local_986.f_52))
			{
				SQUAD_GOALS_CLEAR(Local_986.f_52);
				Function_364(Local_986.f_52);
			}
			Local_986.f_8 = Local_4.f_1516;
			GET_OBJECT_POSITION(Local_4.f_1516, &uLocal_874);
			if (SQUAD_IS_VALID(Local_986.f_56))
			{
				SQUAD_GOALS_CLEAR(Local_986.f_56);
			}
			Function_522();
			Function_228(&bLocal_608);
			iLocal_603 = 10;
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 3.0f)
			{
				AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
				if (SQUAD_IS_VALID(Local_986.f_44))
				{
					Function_521();
					Function_520();
					Function_303(Local_986.f_44);
					Function_303(Local_986.f_56);
					Function_366(Local_986.f_44, &Local_4 + 932);
					Function_366(Local_986.f_56, &Local_4 + 932);
					Function_365(Local_986.f_44, 2, 1);
					SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_986.f_44, Local_986.f_60, 1, 0,01f, 0,01f);
				}
				Function_228(&bLocal_608);
				iLocal_603 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 1,5f)
			{
				Function_519();
				Function_228(&bLocal_608);
				iLocal_603 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 2.0f)
			{
				Function_360("home02_ranch01_obj04", 7,5f, 1, 2, 0, 0, 0);
				Function_228(&bLocal_608);
				iLocal_603 = 13;
			}
			break;
		
		case 0x0000000D:
			if (Function_300(&bLocal_608) <= 8.0f)
			{
				Function_228(&bLocal_976);
				Function_228(&bLocal_979);
				Function_228(&bLocal_608);
				Function_228(&bLocal_611);
				Function_228(&bLocal_614);
				iLocal_603 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_300(&bLocal_611) <= 3.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_680))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 644)[02]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 644)[02], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 644)[02], "Home02_r1_CrimsYellAtJon1", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_611);
						}
					}
					if (IS_ACTOR_VALID((*&Local_4 + 644)[22]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 644)[22], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 644)[22], "Home02_r1_CriminalsYelJon2", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_611);
						}
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_712))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 684)[02]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 684)[02], (8.0f * 2.0f)))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 684)[02], "Home02_r1_CriminalsYelJon2", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_611);
						}
					}
				}
			}
			if (Function_300(&bLocal_976) <= 4.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_680))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 644)[12]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 644)[12], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 644)[12], "Home02_r1_CrimsYellAtJon2", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
				}
				if (SQUAD_IS_VALID(Local_4.f_712))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 684)[12]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 684)[12], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 684)[12], "Home02_r1_CriminalsYelJon3", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_976);
						}
					}
				}
			}
			if (Function_300(&bLocal_979) <= 5.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_680))
				{
					if (IS_ACTOR_VALID((*&Local_4 + 644)[32]))
					{
						if (ACTORS_IN_RANGE(Global_34573, (*&Local_4 + 644)[32], 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED((*&Local_4 + 644)[32], "Home02_r1_CriminalsYelJon1", Global_34573, 1, 0, 0, 0, 0);
							Function_228(&bLocal_979);
						}
					}
				}
			}
			if (StackVal && IS_OBJECT_VALID(IS_ACTOR_VALID(Global_34573)))
			{
				if (!Function_353(StackVal, Global_34573, 315.0f))
				{
					bLocal_907 = true;
					if (IS_BLIP_VALID(bLocal_865))
					{
						REMOVE_BLIP(bLocal_865);
					}
					if (IS_OBJECT_VALID(bLocal_866))
					{
						DESTROY_OBJECT(bLocal_866);
					}
					if (bLocal_906)
					{
						Function_356();
					}
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_249();
					Function_228(&bLocal_608);
					iLocal_603 = 106;
				}
				if (Function_497(Global_34573, Local_4.f_680, 140.0f) && IS_ACTOR_SHOOTING(Global_34573))
				{
					bLocal_907 = true;
					if (IS_BLIP_VALID(bLocal_865))
					{
						REMOVE_BLIP(bLocal_865);
					}
					if (IS_OBJECT_VALID(bLocal_866))
					{
						DESTROY_OBJECT(bLocal_866);
					}
					if (bLocal_906)
					{
						Function_356();
					}
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_249();
					Function_228(&bLocal_608);
					iLocal_603 = 106;
				}
				else if (Function_497(Global_34573, Local_4.f_712, 140.0f) && IS_ACTOR_SHOOTING(Global_34573))
				{
					bLocal_907 = true;
					if (IS_BLIP_VALID(bLocal_865))
					{
						REMOVE_BLIP(bLocal_865);
					}
					if (IS_OBJECT_VALID(bLocal_866))
					{
						DESTROY_OBJECT(bLocal_866);
					}
					if (bLocal_906)
					{
						Function_356();
					}
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_249();
					Function_228(&bLocal_608);
					iLocal_603 = 106;
				}
				bLocal_863 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
				if (IS_ACTOR_VALID(bLocal_863))
				{
					if (Function_427(bLocal_863, Local_4.f_680, 0) || Function_427(bLocal_863, Local_4.f_712, 0))
					{
						if (!IS_ACTOR_SHOOTING(Global_34573))
						{
							if (IS_WEAPON_DRAWN(Global_34573))
							{
								if (Function_497(Global_34573, Local_4.f_680, 140.0f) || Function_497(Global_34573, Local_4.f_712, 140.0f))
								{
									bLocal_907 = true;
									if (IS_BLIP_VALID(bLocal_865))
									{
										REMOVE_BLIP(bLocal_865);
									}
									if (IS_OBJECT_VALID(bLocal_866))
									{
										DESTROY_OBJECT(bLocal_866);
									}
									if (bLocal_906)
									{
										Function_356();
									}
									UI_HIDE("RacePosition");
									ABORT_SCRIPTED_CONVERSATION(1);
									Function_249();
									Function_228(&bLocal_608);
									iLocal_603 = 106;
								}
							}
						}
					}
				}
			}
			if (IS_VOLUME_VALID(Local_4.f_1068))
			{
				if (IS_OBJECT_VALID(Local_1017[02]))
				{
					if (IS_OBJECT_IN_VOLUME(Local_1017[02], Local_4.f_1068))
					{
						if (IS_BLIP_VALID(bLocal_865))
						{
							REMOVE_BLIP(bLocal_865);
						}
						if (IS_OBJECT_VALID(bLocal_866))
						{
							DESTROY_OBJECT(bLocal_866);
						}
						Function_344(Local_986.f_44);
						Function_344(Local_986.f_48);
						Function_344(Local_986.f_52);
						Function_344(Local_986.f_56);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_249();
						Function_228(&bLocal_608);
						iLocal_603 = 106;
					}
				}
			}
			if (((SQUAD_IS_VALID(Local_986.f_44) && SQUAD_IS_VALID(Local_986.f_56)) && SQUAD_IS_VALID(Local_986.f_48)) && SQUAD_IS_VALID(Local_986.f_52))
			{
				if ((SQUAD_GET_SIZE(Local_986.f_44) != 0 && SQUAD_GET_SIZE(Local_986.f_48) != 0) && SQUAD_GET_SIZE(Local_986.f_52) != 0)
				{
					if (IS_BLIP_VALID(bLocal_865))
					{
						REMOVE_BLIP(bLocal_865);
					}
					if (IS_OBJECT_VALID(bLocal_866))
					{
						DESTROY_OBJECT(bLocal_866);
					}
					Function_344(Local_986.f_44);
					Function_344(Local_986.f_48);
					Function_344(Local_986.f_52);
					Function_344(Local_986.f_56);
					UI_HIDE("RacePosition");
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_249();
					Function_228(&bLocal_608);
					iLocal_603 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			STREAMING_UNLOAD_BOUNDS();
			if (((SQUAD_IS_VALID(Local_986.f_56) && SQUAD_IS_VALID(Local_986.f_48)) && SQUAD_IS_VALID(Local_986.f_52)) && SQUAD_IS_VALID(Local_986.f_56))
			{
				bLocal_842 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_44) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_48)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_52)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_56));
			}
			PRINTINT(bLocal_847);
			PRINTNL();
			bLocal_847 = Function_342(bLocal_842, bLocal_847);
			PRINTINT(bLocal_847);
			PRINTNL();
			PRINTINT(bLocal_842);
			PRINTNL();
			bLocal_843 = (15 - bLocal_842);
			PRINTINT(bLocal_843);
			PRINTNL();
			PRINTINT(bLocal_847);
			PRINTNL();
			bLocal_847 = Function_477(bLocal_907, bLocal_847);
			PRINTINT(bLocal_847);
			PRINTNL();
			Function_341(Local_532, bLocal_847);
			bLocal_849 = Local_986.f_76;
			Global_34165.f_124 = bLocal_849;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_850 = Local_986.f_80;
			Global_34165.f_128 = bLocal_850;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			Function_187();
			iLocal_617[4] = 1;
			Function_228(&bLocal_608);
			iLocal_602 = 5;
			iLocal_603 = 0;
			break;
	}
	return;
}

void Function_519() //Position: 0x1DFD2 / 122834
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_Stampede2Train", "Home02_r1_Stampede2Train", false, 3, 1, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_520() //Position: 0x1E02B / 122923
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_986.f_44, Local_986.f_60, Local_986.f_12, 100.0f, 1.0f, 1.0f, 20.0f);
	return;
}

void Function_521() //Position: 0x1E04F / 122959
{
	Function_364(Local_986.f_44);
	SQUAD_GOALS_CLEAR(Local_986.f_44);
	Local_986.f_60 = UNK_0x48588CCB(Local_986.f_44, 0, 4294967295, 1);
	if (SQUAD_GOAL_IS_VALID(Local_986.f_60))
	{
		_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(Local_986.f_44, Local_986.f_60);
	}
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 0, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 1, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 2, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 8, 1,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 15, 0,25f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 16, 10.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 21, 8,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 20, 12,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 24, 360.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 25, 1.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 17, 0.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 18, 50.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 26, 0.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 28, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 1, 29, 15.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 0, 8, 1.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 0, 21, 0,25f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 0, 20, 3.0f);
	_SQUAD_FLOCK_ADD_EXTERNAL_ALERT_2(Local_986.f_44, Local_986.f_60, Global_34573, 7.0f, 60.0f, 0);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_986.f_44, Local_986.f_60, Global_34573, 12.0f, 5.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(Local_986.f_44, Local_986.f_60, 0);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(Local_986.f_44, Local_986.f_60, 1);
	SQUAD_FLOCK_EVENT_BOOST_SET_ENABLED(Local_986.f_44, Local_986.f_60, 0, 0);
	if (IS_ACTOR_VALID(bLocal_606))
	{
		if (IS_VOLUME_VALID(Local_986.f_40))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_606);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_986.f_40);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_606, Local_986.f_40);
		}
		SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(Local_986.f_44, Local_986.f_60, bLocal_606, 5.0f, 1.0f, 925353388, 925353388, 0);
	}
	DECOR_SET_BOOL(Global_34573, "herding", true);
	bLocal_906 = true;
	return;
}

void Function_522() //Position: 0x1E2B3 / 123571
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_UncleBuck", "Home02_r1_UncleBuck", false, 3, 1, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_523(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x1E302 / 123650
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, bParam1, 0, 2, 0);
			if (IS_BLIP_VALID(bVar2))
			{
				SET_BLIP_SCALE(bVar2, fParam2);
				if (bParam3)
				{
					SET_BLIP_FLAG(bVar2, 4096, 1);
				}
				else
				{
					SET_BLIP_FLAG(bVar2, 4096, 0);
				}
			}
		}
		bVar0++;
	}
}

void Function_524() //Position: 0x1E368 / 123752
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_986.f_44, Local_986.f_60, Local_986.f_12, 75.0f, 1.0f, 0,25f, 1082130432);
	return;
}

void Function_525() //Position: 0x1E390 / 123792
{
	if (!IS_ACTOR_VALID(bLocal_860))
	{
		bLocal_860 = CREATE_ACTOR_IN_LAYOUT(bLocal_531, "HOME02_RANCH01_ENGINEER01", 201, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_ACTOR_VALID(bLocal_860))
		{
			SET_ACTOR_FACTION(bLocal_860, 20);
			SET_ACTOR_HEALTH(bLocal_860, GET_ACTOR_MAX_HEALTH(bLocal_606));
			Function_317(bLocal_860, 0, 0, 0, 1, 0, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_860);
			bLocal_930 = ATTACH_OBJECTS(bLocal_860, Local_459.f_28, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			TASK_STAND_STILL(bLocal_860, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_860, true);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_824))
	{
		Function_394();
		if (SQUAD_IS_VALID(Local_4.f_824))
		{
			Function_319(Local_4.f_824, 0);
			SQUAD_SET_FACTION(Local_4.f_824, 20);
			Function_316(Local_4.f_824, 0, 0, 0);
			Function_393(Local_4.f_824, 4, 0.0f);
			Function_392();
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_824, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_800))
	{
		Function_391();
		if (SQUAD_IS_VALID(Local_4.f_800))
		{
			Function_319(Local_4.f_800, 0);
			SQUAD_SET_FACTION(Local_4.f_800, 20);
			Function_316(Local_4.f_800, 0, 0, 0);
			Function_390();
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_800, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_640))
	{
		Function_320();
		if (SQUAD_IS_VALID(Local_4.f_640))
		{
			Function_319(Local_4.f_640, 0);
			Function_318(Local_4.f_640, 3);
			Function_316(Local_4.f_640, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
			{
				SET_ACTORS_HORSE(bLocal_606, (*&Local_4 + 628)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_606, (*&Local_4 + 628)[02]);
				Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1236)[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_640, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_752))
	{
		Function_493();
		if (SQUAD_IS_VALID(Local_4.f_752))
		{
			Function_319(Local_4.f_752, 0);
			Function_318(Local_4.f_752, 3);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_680))
	{
		Function_492();
		if (SQUAD_IS_VALID(Local_4.f_680))
		{
			Function_319(Local_4.f_680, 0);
			SQUAD_SET_FACTION(Local_4.f_680, 1);
			Function_491(Local_4.f_680, Local_4.f_752);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_712))
	{
		Function_490();
		if (SQUAD_IS_VALID(Local_4.f_712))
		{
			Function_319(Local_4.f_712, 0);
			SQUAD_SET_FACTION(Local_4.f_712, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_526();
	return;
}

void Function_526() //Position: 0x1E638 / 124472
{
	Function_314();
	Local_986.f_12 = Local_4.f_1784;
	if (!SQUAD_IS_VALID(Local_986.f_44))
	{
		Local_986.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_531, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_986.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_986.f_44);
			Function_311(&Local_986, bLocal_531, Local_4.f_1508, &iLocal_924, 5, 2.0f, 5,5f, 2.0f, 0);
			Function_319(Local_986.f_44, 0);
			Function_310(Local_986.f_44, 1);
			Function_309(Local_986.f_44, 0);
			Function_308(Local_986.f_44, 0);
			Function_307(Local_986.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_1028, -1.0f);
		}
	}
	return;
}

int Function_527() //Position: 0x1E704 / 124676
{
	Function_402(&Local_4 + 108, 397, 2, 0);
	Function_402(&Local_4 + 108, 398, 2, 0);
	Function_402(&Local_4 + 108, 401, 2, 0);
	Function_402(&Local_4 + 108, 400, 2, 0);
	Function_402(&Local_4 + 108, 402, 2, 0);
	Function_402(&Local_4 + 108, 403, 2, 0);
	Function_402(&Local_4 + 108, 976, 2, 0);
	Function_402(&Local_4 + 108, 208, 2, 0);
	Function_402(&Local_4 + 108, 73, 2, 0);
	Function_402(&Local_4 + 108, 74, 2, 0);
	Function_402(&Local_4 + 108, 33, 2, 0);
	Function_402(&Local_4 + 108, 238, 2, 0);
	Function_402(&Local_4 + 108, 191, 2, 0);
	Function_402(&Local_4 + 108, 192, 2, 0);
	if (Function_397(&Local_4 + 108))
	{
		return 1;
	}
	return 0;
}

void Function_528() //Position: 0x1E7C6 / 124870
{
	if (Function_300(&bLocal_958) <= 0,1f)
	{
		switch (iLocal_846)
		{
			case 0x00000000:
				iLocal_846++;
				break;
			
			case 0x00000001:
				if (iLocal_603 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_846++;
					}
				}
				break;
			
			case 0x00000002:
				Function_418(1, 1, 1, 0x42340000, 0x41f00000);
				if (SQUAD_IS_VALID(Local_986.f_48) && SQUAD_IS_VALID(Local_986.f_52))
				{
					if (SQUAD_GET_SIZE(Local_986.f_48) != 0 && SQUAD_GET_SIZE(Local_986.f_52) != 0)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 36.0f))
						{
							if (Function_300(&bLocal_611) <= 15.0f)
							{
								SAY_SINGLE_LINE_SCRIPTED(bLocal_606, "Home02_r1_UnclYells1", Global_34573, 0, 0, 0, 0, 0);
								Function_228(&bLocal_611);
							}
						}
					}
					else if (iLocal_904)
					{
						if (SQUAD_GET_SIZE(Local_986.f_48) > 2)
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 36.0f))
							{
								if (Function_300(&bLocal_611) <= 15.0f)
								{
									SAY_SINGLE_LINE_SCRIPTED(bLocal_606, "Home02_r1_Going4Strags", Global_34573, 0, 0, 0, 0, 0);
									Function_228(&bLocal_611);
								}
							}
						}
					}
				}
				if (iLocal_603 > 9)
				{
					iLocal_846++;
				}
				break;
			
			case 0x00000003:
				if (iLocal_603 > 14)
				{
					iLocal_846++;
				}
				break;
			
			case 0x00000004:
				Function_530(1);
				if (SQUAD_IS_VALID(Local_986.f_44))
				{
					if (SQUAD_GET_SIZE(Local_986.f_44) > 1)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 36.0f))
						{
							if (Function_300(&bLocal_611) <= 15.0f)
							{
								Function_529();
								Function_228(&bLocal_611);
							}
						}
					}
				}
				break;
			
			case 0x00000005:
				iLocal_846++;
				break;
			}
	}
	return;
}

void Function_529() //Position: 0x1E992 / 125330
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_r1_YellChaseHerd", "Home02_r1_YellChaseHerd", false, 3, 0, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_530(bool bParam0) //Position: 0x1E9E9 / 125417
{
	if (Function_300(&bLocal_961) <= 6.0f)
	{
		Function_425();
		if (!IS_ACTOR_RIDING(Global_34573))
		{
			if (bParam0)
			{
				if (!iLocal_914)
				{
					iLocal_914 = 1;
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_JonOffHors", "Home02_r1_JonOffHors", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_228(&bLocal_961);
				}
				else if (Function_300(&bLocal_611) <= 10.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_NoGetOnHors", "Home02_r1_NoGetOnHors", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
					Function_228(&bLocal_961);
					Function_228(&bLocal_611);
				}
			}
		}
		else if (bParam0)
		{
			if (iLocal_914)
			{
				iLocal_914 = 0;
			}
			if (IS_ACTOR_VALID(bLocal_607))
			{
				if (IS_ACTION_NODE_PLAYING(bLocal_607, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_ThrownFromHors", "Home02_r1_ThrownFromHors", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
					Function_228(&bLocal_961);
				}
			}
			if (!iLocal_915)
			{
				if (!iLocal_916)
				{
					if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_880))
					{
						if (VMAG(vLocal_880) >= (3.0f * 0.0f))
						{
							iLocal_916 = 1;
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_NoGo4Herd", "Home02_r1_NoGo4Herd", false, 1, 0, 0, 1, 0, "", 2000, 0, 0);
							Function_228(&bLocal_961);
						}
					}
				}
			}
			if (iLocal_916)
			{
				if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_880))
				{
					if (VMAG(vLocal_880) <= 0.0f)
					{
						iLocal_916 = 0;
					}
				}
			}
			if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 1,35f))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_606, "Home02_r1_RidesIntoUncleHors", "Home02_r1_RidesIntoUncleHors", false, 1, 0, 0, 0, 0, "", 2000, 0, 0);
				Function_228(&bLocal_961);
			}
		}
	}
	return;
}

void Function_531(var uParam0, bool bParam1) //Position: 0x1EC80 / 126080
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (SQUAD_IS_VALID(uParam0->f_44))
	{
		if (SQUAD_IS_VALID(uParam0->f_56))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(uParam0->f_44) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_44, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (!Function_497(bVar1, uParam0->f_44, bParam1) || !Function_497(bVar1, uParam0->f_56, bParam1))
					{
						bVar2 = GET_BLIP_ON_ACTOR(bVar1);
						if (IS_BLIP_VALID(bVar2))
						{
							REMOVE_BLIP(bVar2);
						}
						SQUAD_LEAVE(bVar1);
						SQUAD_JOIN(bVar1, uParam0->f_56);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_532(var uParam0, float fParam1) //Position: 0x1ED0B / 126219
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	
	if (SQUAD_IS_VALID(uParam0->f_44))
	{
		if (SQUAD_IS_VALID(uParam0->f_56))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(uParam0->f_44) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_44, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					GET_ACTOR_VELOCITY(bVar1, &vVar2);
					bVar5 = VMAG(vVar2);
					if (bVar5 >= fParam1)
					{
						bVar6 = GET_BLIP_ON_ACTOR(bVar1);
						if (IS_BLIP_VALID(bVar6))
						{
							REMOVE_BLIP(bVar6);
						}
						SQUAD_LEAVE(bVar1);
						SQUAD_JOIN(bVar1, uParam0->f_56);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_533(int iParam0) //Position: 0x1ED93 / 126355
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	int iVar8;
	
	if (IS_OBJECT_VALID(StackVal))
	{
		if (SQUAD_IS_VALID(iParam0->f_44))
		{
			if (SQUAD_IS_VALID(iParam0->f_48))
			{
				if (SQUAD_IS_VALID(iParam0->f_56))
				{
					if (SQUAD_IS_VALID(iParam0->f_52))
					{
						if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
						{
							iVar8 = 1;
						}
						else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
						{
							iVar8 = 3;
						}
						else
						{
							iVar8 = 3;
						}
						if (SQUAD_GET_SIZE(iParam0->f_44) < iVar8)
						{
							if (SQUAD_GET_SIZE(iParam0->f_56) > 1)
							{
								SQUAD_COMPUTE_CENTROID(iParam0->f_56, &vVar0);
								Function_450(iParam0->f_56);
								vVar3 = { StackVal, StackVal, Function_450(iParam0->f_56) };
								if (SQUAD_GET_SIZE(iParam0->f_56) >= iVar8)
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*iParam0)))
									{
										Function_245(*iParam0);
										if (!Function_73(StackVal, StackVal, Function_245(*iParam0)))
										{
											bVar7 = ADD_BLIP_FOR_OBJECT(*iParam0, 425, 0f, 2, 0);
											if (IS_BLIP_VALID(bVar7))
											{
												SET_BLIP_SCALE(bVar7, 2,5f);
												SET_BLIP_NAME(bVar7, "nBLIP_HERD");
												SET_BLIP_FLAG(bVar7, 4096, 0);
												SET_BLIP_PRIORITY(bVar7, true);
											}
										}
									}
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)))
									{
										Function_245(StackVal);
										if (!Function_73(StackVal, StackVal, Function_245(StackVal)))
										{
											bVar6 = ADD_BLIP_FOR_OBJECT(StackVal, 422, 0f, 2, 0);
											if (IS_BLIP_VALID(bVar6))
											{
												SET_BLIP_SCALE(bVar6, 1.0f);
												SET_BLIP_PRIORITY(bVar6, 2);
											}
										}
									}
								}
							}
							else if (SQUAD_GET_SIZE(iParam0->f_52) > 1)
							{
								SQUAD_COMPUTE_CENTROID(iParam0->f_52, &vVar0);
								Function_449(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_449(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_450(iParam0->f_52);
								vVar3 = { StackVal, StackVal, Function_450(iParam0->f_52) };
								if (SQUAD_GET_SIZE(iParam0->f_52) >= iVar8)
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*iParam0)))
									{
										Function_245(*iParam0);
										if (!Function_73(StackVal, StackVal, Function_245(*iParam0)))
										{
											bVar7 = ADD_BLIP_FOR_OBJECT(*iParam0, 425, 0f, 2, 0);
											if (IS_BLIP_VALID(bVar7))
											{
												SET_BLIP_SCALE(bVar7, 2,5f);
												SET_BLIP_NAME(bVar7, "nBLIP_HERD");
												SET_BLIP_FLAG(bVar7, 4096, 0);
												SET_BLIP_PRIORITY(bVar7, true);
											}
										}
									}
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)))
									{
										Function_245(StackVal);
										if (!Function_73(StackVal, StackVal, Function_245(StackVal)))
										{
											bVar6 = ADD_BLIP_FOR_OBJECT(StackVal, 422, 0f, 2, 0);
											if (IS_BLIP_VALID(bVar6))
											{
												SET_BLIP_SCALE(bVar6, 1.0f);
												SET_BLIP_PRIORITY(bVar6, 2);
											}
										}
									}
								}
							}
							else if (SQUAD_GET_SIZE(iParam0->f_48) > 1)
							{
								SQUAD_COMPUTE_CENTROID(iParam0->f_48, &vVar0);
								Function_449(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_449(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_450(iParam0->f_48);
								vVar3 = { StackVal, StackVal, Function_450(iParam0->f_48) };
								if (SQUAD_GET_SIZE(iParam0->f_48) >= iVar8)
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*iParam0)))
									{
										Function_245(*iParam0);
										if (!Function_73(StackVal, StackVal, Function_245(*iParam0)))
										{
											bVar7 = ADD_BLIP_FOR_OBJECT(*iParam0, 425, 0f, 2, 0);
											if (IS_BLIP_VALID(bVar7))
											{
												SET_BLIP_SCALE(bVar7, 2,5f);
												SET_BLIP_NAME(bVar7, "nBLIP_HERD");
												SET_BLIP_FLAG(bVar7, 4096, 0);
												SET_BLIP_PRIORITY(bVar7, true);
											}
										}
									}
									if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)))
									{
										Function_245(StackVal);
										if (!Function_73(StackVal, StackVal, Function_245(StackVal)))
										{
											bVar6 = ADD_BLIP_FOR_OBJECT(StackVal, 422, 0f, 2, 0);
											if (IS_BLIP_VALID(bVar6))
											{
												SET_BLIP_SCALE(bVar6, 1.0f);
												SET_BLIP_PRIORITY(bVar6, 2);
											}
										}
									}
								}
							}
						}
						else
						{
							SQUAD_COMPUTE_CENTROID(iParam0->f_44, &vVar0);
							Function_450(iParam0->f_44);
							vVar3 = { StackVal, StackVal, Function_450(iParam0->f_44) };
							bVar6 = GET_BLIP_ON_OBJECT(StackVal);
							if (IS_BLIP_VALID(bVar6))
							{
								REMOVE_BLIP(bVar6);
							}
							bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
							if (IS_BLIP_VALID(bVar7))
							{
								REMOVE_BLIP(bVar7);
							}
						}
						SET_OBJECT_POSITION(StackVal, vVar0);
						SET_OBJECT_POSITION(*iParam0, vVar0);
						SET_OBJECT_ORIENTATION(*iParam0, vVar3);
						GET_OBJECT_POSITION(StackVal, iParam0 + 16);
					}
				}
			}
		}
	}
	return;
}

void Function_534() //Position: 0x1F10E / 127246
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(bLocal_860))
	{
		bVar0 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bVar0 == bLocal_860)
			{
				if (IS_ACTOR_SHOOTING(Global_34573))
				{
					if (IS_WEAPON_DRAWN(Global_34573))
					{
						if (Function_431(GET_WEAPON_IN_HAND(Global_34573)))
						{
							bVar1 = true;
						}
					}
				}
			}
			else
			{
				bVar1 = false;
			}
		}
		if (Function_300(&bLocal_970) <= 5.0f)
		{
			if (!bVar1)
			{
				SET_ACTOR_HEALTH(bLocal_860, GET_ACTOR_MAX_HEALTH(bLocal_606));
			}
			Function_228(&bLocal_970);
		}
	}
	return;
}

void Function_535() //Position: 0x1F180 / 127360
{
	if (IS_ACTOR_VALID(bLocal_606))
	{
		switch (iLocal_832)
		{
			case 0x00000000:
				iLocal_832++;
				break;
			
			case 0x00000001:
				CLEAR_ACTOR_MIN_SPEED(bLocal_606);
				CLEAR_ACTOR_MAX_SPEED(bLocal_606);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_606);
				MEMORY_PREFER_RIDING(bLocal_606, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_606, true);
				bLocal_830 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1784, -14.0f, 1, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
				TASK_SEQUENCE_RELEASE(bLocal_830, 1);
				TASK_PRIORITY_SET(bLocal_606, true);
				iLocal_832++;
				break;
			
			case 0x00000002:
				if (iLocal_603 > 9)
				{
					Function_228(&bLocal_940);
					iLocal_832++;
				}
				break;
			
			case 0x00000003:
				if (Function_300(&bLocal_940) <= 1.0f)
				{
					Function_384(&(Local_671[017]), 1024, 1);
					MEMORY_PREFER_RIDING(bLocal_606, false);
					Function_383(&(Local_671[817]), (*&Local_4 + 628)[02], "Uncle_horse", 0, 0x5f5e100, 1);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_606, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
					Function_228(&bLocal_940);
					iLocal_832++;
				}
				break;
			
			case 0x00000004:
				bLocal_830 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
				TASK_SEQUENCE_RELEASE(bLocal_830, 1);
				TASK_PRIORITY_SET(bLocal_606, true);
				Function_228(&bLocal_940);
				iLocal_832++;
				break;
			
			case 0x00000005:
				if (Function_300(&bLocal_940) <= 2.0f)
				{
					Function_228(&bLocal_940);
					iLocal_832++;
				}
				break;
			
			case 0x00000006:
				bLocal_830 = TASK_SEQUENCE_OPEN();
				TASK_MOUNT(bLocal_606, (*&Local_4 + 628)[02], 0, 1, 2, 2147483647);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
				TASK_SEQUENCE_RELEASE(bLocal_830, 1);
				TASK_PRIORITY_SET(bLocal_606, true);
				iLocal_832++;
				break;
			
			case 0x00000007:
				if (!GET_TASK_STATUS(bLocal_606, 11) != 0)
				{
					CLEAR_ACTOR_MIN_SPEED(bLocal_606);
					CLEAR_ACTOR_MAX_SPEED(bLocal_606);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_606);
					MEMORY_PREFER_RIDING(bLocal_606, true);
					Function_378(&(Local_671[017]), 1024);
					bLocal_830 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1784, -10.0f, 1, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
					TASK_SEQUENCE_RELEASE(bLocal_830, 1);
					TASK_PRIORITY_SET(bLocal_606, true);
					iLocal_832++;
				}
				break;
			
			case 0x00000008:
				if (IS_VOLUME_VALID(Local_4.f_1116))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_606, Local_4.f_1116))
					{
						iLocal_832++;
					}
				}
				break;
			
			case 0x00000009:
				CLEAR_ACTOR_MIN_SPEED(bLocal_606);
				CLEAR_ACTOR_MAX_SPEED(bLocal_606);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_606);
				bLocal_830 = TASK_SEQUENCE_OPEN();
				TASK_WANDER_IN_VOLUME(false, Local_4.f_1040, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
				TASK_SEQUENCE_RELEASE(bLocal_830, 1);
				TASK_PRIORITY_SET(bLocal_606, false);
				iLocal_832++;
				break;
			
			case 0x0000000A:
				iLocal_832++;
				break;
			}
	}
	return;
}

void Function_536() //Position: 0x1F49C / 128156
{
	if (SQUAD_IS_VALID(Local_4.f_800))
	{
		switch (iLocal_836)
		{
			case 0x00000000:
				iLocal_836++;
				break;
			
			case 0x00000001:
				if (iLocal_603 > 9)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_800);
					SQUAD_SET_FACTION(Local_4.f_800, 20);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_800, false, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					iLocal_836++;
				}
				break;
			
			case 0x00000002:
				SQUAD_GOALS_CLEAR(Local_4.f_800);
				Function_482(Local_4.f_800, Local_4.f_680, 3);
				Function_482(Local_4.f_800, Local_4.f_712, 3);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_800, false, 1, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				iLocal_836++;
				break;
			
			case 0x00000003:
				iLocal_836++;
				break;
			}
	}
	return;
}

void Function_537() //Position: 0x1F55D / 128349
{
	if (SQUAD_IS_VALID(Local_4.f_824))
	{
		switch (iLocal_835)
		{
			case 0x00000000:
				iLocal_835++;
				break;
			
			case 0x00000001:
				if (iLocal_603 > 9)
				{
					SQUAD_GOALS_CLEAR(Local_4.f_824);
					SQUAD_SET_FACTION(Local_4.f_824, 20);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_824, false, 1, 4294967295);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					iLocal_835++;
				}
				break;
			
			case 0x00000002:
				SQUAD_GOALS_CLEAR(Local_4.f_824);
				Function_482(Local_4.f_824, Local_4.f_680, 3);
				Function_482(Local_4.f_824, Local_4.f_712, 3);
				Function_507(Local_4.f_824, 1);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(20, 19, 0,25f);
				SET_FACTION_TO_FACTION_DAMAGE_SCALE_FACTOR(20, 19, 0,1f);
				if (IS_ACTOR_VALID((*&Local_4 + 804)[02]))
				{
					TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 804)[02], GET_COVER_LOCATION_FROM_OBJECT(Local_470.f_52), -1.0f, 1086324736);
					TASK_PRIORITY_SET((*&Local_4 + 804)[02], true);
				}
				if (IS_ACTOR_VALID((*&Local_4 + 804)[12]))
				{
					TASK_SHOOT_ENEMIES_FROM_COVER((*&Local_4 + 804)[12], GET_COVER_LOCATION_FROM_OBJECT(Local_505.f_92), -1.0f, 1086324736);
					TASK_PRIORITY_SET((*&Local_4 + 804)[12], true);
				}
				iLocal_835++;
				break;
			
			case 0x00000003:
				iLocal_835++;
				break;
			}
	}
	return;
}

void Function_538() //Position: 0x1F690 / 128656
{
	if (SQUAD_IS_VALID(Local_4.f_712))
	{
		switch (iLocal_834)
		{
			case 0x00000000:
				iLocal_834++;
				break;
			
			case 0x00000001:
				if (Function_505(bLocal_840, 0.0f))
				{
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				else if (Function_300(&bLocal_955) <= 60.0f)
				{
					Function_228(&bLocal_955);
					iLocal_834++;
				}
				break;
			
			case 0x00000002:
				SQUAD_GOALS_CLEAR(Local_4.f_712);
				Function_437(Local_4.f_712, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(1, 20, 1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_860, 1.0f);
				Function_482(Local_4.f_712, Local_4.f_824, 3);
				Function_482(Local_4.f_712, Local_4.f_800, 3);
				Function_509(Local_4.f_712, bLocal_860, 3);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, false, 1, 1);
				TASK_KILL_CHAR(false, bLocal_860);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_712, true, 0, 4294967295);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				Function_228(&bLocal_955);
				iLocal_834++;
				break;
			
			case 0x00000003:
				iLocal_834++;
				break;
			}
	}
	return;
}

void Function_539() //Position: 0x1F78F / 128911
{
	if (SQUAD_IS_VALID(Local_4.f_680))
	{
		switch (iLocal_833)
		{
			case 0x00000000:
				iLocal_833++;
				break;
			
			case 0x00000001:
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 4294967295);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				iLocal_833++;
				break;
			
			case 0x00000002:
				if (iLocal_603 > 9)
				{
					GET_OBJECT_POSITION((*&Local_4 + 1404)[0], &cLocal_895);
					Function_515(&cLocal_895, "DynamiteExplosion", 0, 1);
					Function_228(&bLocal_946);
					iLocal_833++;
				}
				break;
			
			case 0x00000003:
				if (Function_300(&bLocal_946) <= 0,25f)
				{
					GET_OBJECT_POSITION((*&Local_4 + 1404)[1], &cLocal_895);
					Function_515(&cLocal_895, "DynamiteExplosion", 0, 1);
					Function_228(&bLocal_946);
					iLocal_833++;
				}
				break;
			
			case 0x00000004:
				if (Function_300(&bLocal_946) <= 0,75f)
				{
					GET_OBJECT_POSITION((*&Local_4 + 1404)[2], &cLocal_895);
					Function_515(&cLocal_895, "DynamiteExplosion", 0, 1);
					Function_228(&bLocal_946);
					iLocal_833++;
				}
				break;
			
			case 0x00000005:
				SQUAD_GOALS_CLEAR(Local_4.f_680);
				Function_437(Local_4.f_680, 1, 4);
				Function_482(Local_4.f_680, Local_4.f_824, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(1, 20, 0,2f);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[02], Local_4.f_1788, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, true, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[22], Local_4.f_1788, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 2, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[32], Local_4.f_1788, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 3, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[42], Local_4.f_1788, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 4, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[52], Local_4.f_1788, 0.0f, 1, 0);
				Function_228(&bLocal_946);
				iLocal_833++;
				break;
			
			case 0x00000006:
				if (Function_505(bLocal_840, 0.0f))
				{
					Function_228(&bLocal_946);
					iLocal_833 = 7;
				}
				else if (Function_300(&bLocal_946) <= 60.0f)
				{
					Function_228(&bLocal_946);
					iLocal_833 = 7;
				}
				break;
			
			case 0x00000007:
				SQUAD_GOALS_CLEAR(Local_4.f_680);
				Function_437(Local_4.f_680, 5, 3);
				SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(1, 20, 1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_860, 1.0f);
				Function_482(Local_4.f_680, Local_4.f_824, 3);
				Function_482(Local_4.f_680, Local_4.f_800, 3);
				Function_509(Local_4.f_680, bLocal_860, 3);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 2);
				TASK_KILL_CHAR(false, bLocal_860);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, true, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[22], Local_4.f_1788, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 2, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[32], Local_4.f_1788, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 3, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[42], Local_4.f_1788, 0.0f, 1, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, 4, 1, 1);
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Local_1017[52], Local_4.f_1788, 0.0f, 1, 0);
				Function_228(&bLocal_946);
				iLocal_833++;
				break;
			
			case 0x00000008:
				iLocal_833++;
				break;
			}
	}
	return;
}

void Function_540() //Position: 0x1FAD5 / 129749
{
	switch (iLocal_841)
	{
		case 0x00000000:
			if (iLocal_617[3] == 1)
			{
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_4.f_1364), &uLocal_886);
				GET_OBJECT_ORIENTATION(GET_INDEXED_OBJECT_IN_OBJECTSET(true, Local_4.f_1364), &Local_889);
				UNK_0x44986367(StackVal, &Local_889);
				GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(5, Local_4.f_1364), &vLocal_892);
				bLocal_851 = 0.0f;
				TRAIN_SET_POSITION_DIRECTION(bLocal_840, &uLocal_886, &Local_889);
				TRAIN_SET_TARGET_POS(bLocal_840, &vLocal_892);
				TRAIN_SET_TARGET_SPEED(bLocal_840, bLocal_851);
			}
			iLocal_841++;
			break;
		
		case 0x00000001:
			TRAIN_SET_TARGET_SPEED(bLocal_840, 10.0f);
			iLocal_841++;
			break;
		
		case 0x00000002:
			if (iLocal_603 > 9)
			{
				bLocal_985 = PLAY_SOUND_FROM_OBJECT(Local_1017[02], "TRAIN_WHISTLE_LONG_DISTANT_MASTER");
				TRAIN_SET_TARGET_SPEED(bLocal_840, 10.0f);
				Function_228(&bLocal_949);
				iLocal_841++;
			}
			break;
		
		case 0x00000003:
			if (Function_300(&bLocal_949) <= 6.0f)
			{
				if (IS_SOUND_ID_VALID(bLocal_985))
				{
					STOP_SOUND(bLocal_985);
				}
				iLocal_841++;
			}
			break;
		
		case 0x00000004:
			iLocal_841++;
			break;
	}
	return;
}

void Function_541() //Position: 0x1FC0D / 130061
{
	Function_339(bLocal_531);
	if (((iLocal_603 < 5 && iLocal_603 > 105) && !iLocal_603 != 104) && !iLocal_603 != 103)
	{
		Function_548();
		Function_452(&Local_986);
		if (bLocal_906)
		{
			Function_448(&Local_986);
			Function_447(&Local_986);
			Function_446(&Local_986, 0x41700000);
			if (Function_300(&bLocal_943) <= 0,2f)
			{
				if (!iLocal_905)
				{
					Function_475(Local_986.f_48, &bLocal_940, 3.0f, Local_4.f_1780, -14.0f);
				}
				Function_443(&Local_986);
				Function_228(&bLocal_943);
			}
			Function_442();
		}
		Function_433(Global_34573);
		Function_432();
		Function_547();
	}
	switch (iLocal_603)
	{
		case 0x00000000:
			Function_335(0);
			SET_ACTOR_HEALTH(bLocal_606, GET_ACTOR_MAX_HEALTH(bLocal_606));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (iLocal_617[2] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_327();
				bLocal_604 = Global_30637[0];
				if (!Function_326(bLocal_604))
				{
					Function_324(&Local_532);
				}
				Function_323(Global_34573, (*&Local_4 + 1212)[0], 1, 1, 1);
				iLocal_839 = 0;
				if (IS_ACTOR_VALID(bLocal_607))
				{
					TASK_STAND_STILL(bLocal_607, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_607, true);
				}
				if (IS_ACTOR_VALID(bLocal_606))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_606);
					CLEAR_ACTOR_MAX_SPEED(bLocal_606);
					TASK_STAND_STILL(bLocal_606, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_606, true);
				}
				Function_228(&bLocal_608);
				iLocal_603 = 1;
			}
			else
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_326(bLocal_604) || bLocal_604 != 4294967295)) && Function_546())
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_403() && Function_546())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				iLocal_831 = 0;
				iLocal_832 = 0;
				iLocal_841 = 0;
				iLocal_846 = 0;
				iLocal_904 = 0;
				iLocal_630 = 0;
				bLocal_906 = false;
				iLocal_905 = 0;
				iLocal_914 = 0;
				iLocal_916 = 0;
				iLocal_915 = 0;
				Function_395(&iLocal_908);
				bLocal_842 = Function_321(Function_322(Local_532));
				PRINTINT(bLocal_842);
				PRINTNL();
				bLocal_843 = (15 - bLocal_842);
				PRINTINT(bLocal_843);
				PRINTNL();
				bLocal_849 = Global_34165.f_124;
				bLocal_850 = Global_34165.f_128;
				PRINTINT(bLocal_849);
				PRINTNL();
				PRINTINT(bLocal_850);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Local_986.f_76 = bLocal_849;
				Local_986.f_80 = bLocal_850;
				Function_544();
				if (IS_ACTOR_VALID(bLocal_861))
				{
					SET_ACTOR_HEALTH(bLocal_861, 50.0f);
					Function_323(bLocal_861, (*&Local_4 + 1132)[4], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_862))
				{
					SET_ACTOR_HEALTH(bLocal_862, 50.0f);
					Function_323(bLocal_862, (*&Local_4 + 1132)[5], 1, 1, 1);
				}
				if (iLocal_617[2] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_607))
						{
							Function_323(bLocal_607, (*&Local_4 + 1212)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_607))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_607);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_606))
					{
						Function_189(13, 0, 1);
						Function_323(bLocal_606, (*&Local_4 + 1212)[1], 1, 1, 1);
						if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
						{
							Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1212)[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_606) && !IS_ACTOR_MOUNTED((*&Local_4 + 628)[02]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_606, (*&Local_4 + 628)[02]);
							}
						}
					}
					Function_228(&bLocal_608);
					iLocal_603 = 5;
				}
				else
				{
					Function_228(&bLocal_608);
					iLocal_603 = 6;
				}
				if (SQUAD_IS_VALID(Local_986.f_56))
				{
					Function_304(Local_986.f_56, Local_986.f_44);
				}
				if (SQUAD_IS_VALID(Local_986.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_44);
					Function_303(Local_986.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_1024, -1.0f);
				}
				Function_383(&(Local_671[017]), bLocal_606, "Uncle", 1, 0x5f5e100, 1);
				Function_383(&(Local_671[117]), bLocal_862, "Son", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[217]), bLocal_861, "Wife", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[317]), Local_986.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[417]), Local_986.f_48, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[517]), Local_986.f_52, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[617]), Local_986.f_56, "Cow", 0, 0x5f5e100, 1);
				Function_382(&(Local_671[717]));
				Function_378(&(Local_671[317]), 2);
				Function_378(&(Local_671[417]), 2);
				Function_378(&(Local_671[517]), 2);
				Function_378(&(Local_671[617]), 2);
				Function_244(iLocal_602);
				Function_372(StackVal, StackVal, Function_244(iLocal_602), iLocal_602, Global_30637[0], Function_247(iLocal_602), 2);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_606) && SQUAD_IS_VALID(Local_986.f_44))
			{
				if (Function_371(bLocal_606, 1, 0x41700000) && Function_370(Local_986.f_44, 1))
				{
					Function_228(&bLocal_608);
					iLocal_603 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(Local_986.f_44))
			{
				Function_369();
				Function_543();
				Function_303(Local_986.f_44);
				Function_366(Local_986.f_44, &Local_4 + 900);
				Function_365(Local_986.f_44, 2, 1);
			}
			CAMERA_RESET(0);
			Function_228(&bLocal_608);
			iLocal_603 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_228(&bLocal_608);
				iLocal_603 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_929))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_929 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_531, "HOME02RANCH01_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_929))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_929, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(bLocal_865))
				{
					bLocal_865 = ADD_BLIP_FOR_OBJECT(Local_4.f_1504, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_865))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_866))
				{
					GET_OBJECT_POSITION(Local_4.f_1504, &vLocal_868);
					GET_OBJECT_ORIENTATION(Local_4.f_1504, &vLocal_871);
					bLocal_866 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_531, "HOME02RANCH01GATEWAY01", vLocal_868, vLocal_871, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_866))
					{
					}
				}
				if (IS_ACTOR_VALID(bLocal_606))
				{
					CLEAR_ACTOR_MIN_SPEED(bLocal_606);
					CLEAR_ACTOR_MAX_SPEED(bLocal_606);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_606);
					Function_189(13, 0, 1);
					MEMORY_PREFER_RIDING(bLocal_606, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_606, true);
					bLocal_830 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1780, -14.0f, 1, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
					TASK_SEQUENCE_RELEASE(bLocal_830, 1);
					TASK_PRIORITY_SET(bLocal_606, true);
				}
				if (iLocal_617[2] == 1)
				{
					if (SQUAD_IS_VALID(Local_986.f_44))
					{
						Function_369();
						Function_543();
						Function_303(Local_986.f_44);
						Function_366(Local_986.f_44, &Local_4 + 900);
						Function_365(Local_986.f_44, 2, 1);
					}
				}
				iLocal_904 = 0;
				if (SQUAD_IS_VALID(Local_986.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_48);
					Function_364(Local_986.f_48);
				}
				*(&Local_986 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_986.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_52);
					Function_364(Local_986.f_52);
				}
				Local_986.f_8 = Local_4.f_1504;
				GET_OBJECT_POSITION(Local_4.f_1504, &uLocal_874);
				if (SQUAD_IS_VALID(Local_986.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_56);
					bLocal_830 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, Local_4.f_1032, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_830);
					TASK_SEQUENCE_RELEASE(bLocal_830, 1);
				}
				Function_542();
				Function_228(&bLocal_608);
				iLocal_603 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 5.0f)
			{
				UI_SHOW("RacePosition");
				Function_360("home02_ranch01_obj03", 7,5f, 1, 2, 0, 0, 0);
				Function_228(&bLocal_608);
				Function_228(&bLocal_611);
				Function_228(&bLocal_614);
				iLocal_603 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_357(&bLocal_614, 60.0f, bLocal_607, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_628, 0, bLocal_531, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_865))
				{
					REMOVE_BLIP(bLocal_865);
				}
				if (IS_OBJECT_VALID(bLocal_866))
				{
					DESTROY_OBJECT(bLocal_866);
				}
				if (bLocal_906)
				{
					Function_356();
				}
			}
			else
			{
				Function_346(StackVal, &bLocal_614, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_628, 0, 0, 0, 4294967295, 1);
				if (!IS_BLIP_VALID(bLocal_865))
				{
					bLocal_865 = ADD_BLIP_FOR_OBJECT(Local_4.f_1504, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_865))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_866))
				{
					GET_OBJECT_POSITION(Local_4.f_1504, &vLocal_868);
					GET_OBJECT_ORIENTATION(Local_4.f_1504, &vLocal_871);
					bLocal_866 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_531, "HOME02RANCH01GATEWAY01", vLocal_868, vLocal_871, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_866))
					{
					}
				}
				if (!bLocal_906)
				{
					Function_249();
					Function_345();
				}
			}
			if (StackVal && IS_OBJECT_VALID(IS_ACTOR_VALID(bLocal_606)))
			{
				if (IS_VOLUME_VALID(Local_4.f_1060))
				{
					if (StackVal || IS_OBJECT_IN_VOLUME(IS_ACTOR_IN_VOLUME(bLocal_606, Local_4.f_1060), Local_4.f_1060))
					{
						if (IS_BLIP_VALID(bLocal_865))
						{
							REMOVE_BLIP(bLocal_865);
						}
						if (IS_OBJECT_VALID(bLocal_866))
						{
							DESTROY_OBJECT(bLocal_866);
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_249();
						Function_228(&bLocal_608);
						iLocal_603 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (((SQUAD_IS_VALID(Local_986.f_56) && SQUAD_IS_VALID(Local_986.f_48)) && SQUAD_IS_VALID(Local_986.f_52)) && SQUAD_IS_VALID(Local_986.f_56))
			{
				bLocal_842 = (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_44) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_48)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_52)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_56));
			}
			PRINTINT(bLocal_847);
			PRINTNL();
			bLocal_847 = Function_342(bLocal_842, bLocal_847);
			PRINTINT(bLocal_847);
			PRINTNL();
			Function_341(Local_532, bLocal_847);
			PRINTINT(bLocal_842);
			PRINTNL();
			bLocal_843 = (15 - bLocal_842);
			PRINTINT(bLocal_843);
			PRINTNL();
			bLocal_849 = Local_986.f_76;
			Global_34165.f_124 = bLocal_849;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_850 = Local_986.f_80;
			Global_34165.f_128 = bLocal_850;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			Function_188();
			iLocal_617[3] = 1;
			Function_228(&bLocal_608);
			iLocal_602 = 4;
			iLocal_603 = 0;
			break;
	}
	return;
}

void Function_542() //Position: 0x20713 / 132883
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_r1_Arrive1stPast", "Home02_r1_Arrive1stPast", true, 2, 1, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_543() //Position: 0x2076A / 132970
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_986.f_44, Local_986.f_60, Local_986.f_12, 100.0f, 0,85f, 0,5f, 1082130432);
	return;
}

void Function_544() //Position: 0x20796 / 133014
{
	if (!IS_ACTOR_VALID(bLocal_860))
	{
		bLocal_860 = CREATE_ACTOR_IN_LAYOUT(bLocal_531, "HOME02_RANCH01_ENGINEER01", 201, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		if (IS_ACTOR_VALID(bLocal_860))
		{
			SET_ACTOR_FACTION(bLocal_860, 20);
			SET_ACTOR_HEALTH(bLocal_860, GET_ACTOR_MAX_HEALTH(bLocal_606));
			Function_317(bLocal_860, 0, 0, 0, 1, 0, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_860);
			bLocal_930 = ATTACH_OBJECTS(bLocal_860, Local_459.f_28, Function_53(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			TASK_STAND_STILL(bLocal_860, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_860, true);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_824))
	{
		Function_394();
		if (SQUAD_IS_VALID(Local_4.f_824))
		{
			Function_319(Local_4.f_824, 0);
			SQUAD_SET_FACTION(Local_4.f_824, 20);
			Function_316(Local_4.f_824, 0, 0, 0);
			Function_392();
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_824, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_800))
	{
		Function_391();
		if (SQUAD_IS_VALID(Local_4.f_800))
		{
			Function_319(Local_4.f_800, 0);
			SQUAD_SET_FACTION(Local_4.f_800, 20);
			Function_316(Local_4.f_800, 0, 0, 0);
			Function_390();
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_800, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_640))
	{
		Function_320();
		if (SQUAD_IS_VALID(Local_4.f_640))
		{
			Function_319(Local_4.f_640, 0);
			Function_318(Local_4.f_640, 3);
			Function_316(Local_4.f_640, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
			{
				SET_ACTORS_HORSE(bLocal_606, (*&Local_4 + 628)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_606, (*&Local_4 + 628)[02]);
				Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1212)[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_640, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_545();
	return;
}

void Function_545() //Position: 0x2096B / 133483
{
	Function_314();
	Local_986.f_12 = Local_4.f_1780;
	if (!SQUAD_IS_VALID(Local_986.f_44))
	{
		Local_986.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_531, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_986.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_986.f_44);
			Function_311(&Local_986, bLocal_531, Local_4.f_1492, &iLocal_924, 5, 2.0f, 5,5f, 2.0f, 0);
			Function_319(Local_986.f_44, 0);
			Function_310(Local_986.f_44, 1);
			Function_309(Local_986.f_44, 0);
			Function_308(Local_986.f_44, 0);
			Function_307(Local_986.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_1024, -1.0f);
		}
	}
	return;
}

int Function_546() //Position: 0x20A37 / 133687
{
	Function_402(&Local_4 + 20, 208, 2, 0);
	Function_402(&Local_4 + 20, 73, 2, 0);
	Function_402(&Local_4 + 20, 74, 2, 0);
	Function_402(&Local_4 + 20, 33, 2, 0);
	Function_402(&Local_4 + 20, 238, 2, 0);
	Function_402(&Local_4 + 20, 191, 2, 0);
	Function_402(&Local_4 + 20, 192, 2, 0);
	if (Function_397(&Local_4 + 20))
	{
		return 1;
	}
	return 0;
}

void Function_547() //Position: 0x20A9E / 133790
{
	if (Function_300(&bLocal_958) <= 0,1f)
	{
		switch (iLocal_846)
		{
			case 0x00000000:
				iLocal_846++;
				break;
			
			case 0x00000001:
				if (iLocal_603 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_362();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_846++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_418(1, 1, 1, 0x42340000, 0x41f00000);
				if (!iLocal_915)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_846++;
					}
				}
				break;
			
			case 0x00000003:
				Function_418(1, 1, 1, 0x42340000, 0x41f00000);
				if (SQUAD_IS_VALID(Local_986.f_48) && SQUAD_IS_VALID(Local_986.f_52))
				{
					if (SQUAD_GET_SIZE(Local_986.f_48) != 0 && SQUAD_GET_SIZE(Local_986.f_52) != 0)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 36.0f))
						{
							if (Function_300(&bLocal_611) <= 15.0f)
							{
								SAY_SINGLE_LINE_SCRIPTED(bLocal_606, "Home02_r1_UnclYells1", Global_34573, 0, 0, 0, 0, 0);
								Function_228(&bLocal_611);
							}
						}
					}
					else if (iLocal_904)
					{
						if (SQUAD_GET_SIZE(Local_986.f_48) > 2)
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 36.0f))
							{
								if (Function_300(&bLocal_611) <= 15.0f)
								{
									SAY_SINGLE_LINE_SCRIPTED(bLocal_606, "Home02_r1_Going4Strags", Global_34573, 0, 0, 0, 0, 0);
									Function_228(&bLocal_611);
								}
							}
						}
					}
				}
				break;
			
			case 0x00000004:
				iLocal_846++;
				break;
			}
	}
	return;
}

void Function_548() //Position: 0x20C2C / 134188
{
	switch (iLocal_841)
	{
		case 0x00000000:
			iLocal_841++;
			break;
		
		case 0x00000001:
			iLocal_841++;
			break;
	}
	return;
}

void Function_549() //Position: 0x20C5C / 134236
{
	if (STREAMING_IS_WORLD_LOADED())
	{
		if (Function_326(Global_30717[1]))
		{
			Function_559(&iLocal_852);
		}
		else
		{
			iLocal_831 = 0;
		}
	}
	Function_339(bLocal_531);
	if (((iLocal_603 < 5 && iLocal_603 > 105) && !iLocal_603 != 104) && !iLocal_603 != 103)
	{
		Function_558();
		Function_453(Local_986.f_44, Local_986.f_56, Local_4.f_1052);
		Function_452(&Local_986);
		if (bLocal_906)
		{
			Function_557(&Local_986, 1);
			Function_556(&Local_986, 1);
			Function_555(&Local_986, 1, 0x41700000);
			if (Function_300(&bLocal_943) <= 0,2f)
			{
				if (!iLocal_905)
				{
					Function_475(Local_986.f_48, &bLocal_940, 3.0f, Local_4.f_1776, -14.0f);
				}
				Function_443(&Local_986);
				Function_228(&bLocal_943);
			}
			Function_442();
		}
		Function_433(Global_34573);
		Function_432();
		Function_554();
	}
	switch (iLocal_603)
	{
		case 0x00000000:
			Function_335(0);
			SET_ACTOR_HEALTH(bLocal_606, GET_ACTOR_MAX_HEALTH(bLocal_606));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (iLocal_617[1] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_327();
				bLocal_604 = Global_30717[1];
				if (!Function_326(bLocal_604))
				{
					Function_324(&Local_532);
				}
				Function_323(Global_34573, (*&Local_4 + 1188)[0], 1, 1, 1);
				iLocal_839 = 0;
				if (IS_ACTOR_VALID(bLocal_607))
				{
					TASK_STAND_STILL(bLocal_607, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_607, true);
				}
				if (IS_ACTOR_VALID(bLocal_606))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_606);
					CLEAR_ACTOR_MAX_SPEED(bLocal_606);
					TASK_STAND_STILL(bLocal_606, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_606, true);
				}
				Function_228(&bLocal_608);
				iLocal_603 = 1;
			}
			else
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_326(bLocal_604) || bLocal_604 != 4294967295))
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_403())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				iLocal_831 = 0;
				iLocal_832 = 0;
				iLocal_841 = 0;
				iLocal_846 = 0;
				iLocal_904 = 0;
				iLocal_630 = 0;
				bLocal_906 = false;
				iLocal_905 = 0;
				iLocal_914 = 0;
				iLocal_916 = 0;
				iLocal_915 = 0;
				Function_395(&iLocal_908);
				bLocal_842 = Function_321(Function_322(Local_532));
				PRINTINT(bLocal_842);
				PRINTNL();
				bLocal_843 = (15 - bLocal_842);
				PRINTINT(bLocal_843);
				PRINTNL();
				bLocal_849 = Global_34165.f_124;
				bLocal_850 = Global_34165.f_128;
				PRINTINT(bLocal_849);
				PRINTNL();
				PRINTINT(bLocal_850);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Local_986.f_76 = bLocal_849;
				Local_986.f_80 = bLocal_850;
				Function_552();
				if (iLocal_617[1] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_607))
						{
							Function_323(bLocal_607, (*&Local_4 + 1188)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_607))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_607);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_606))
					{
						Function_189(13, 0, 1);
						Function_323(bLocal_606, (*&Local_4 + 1188)[1], 1, 1, 1);
						if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
						{
							Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1188)[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_606) && !IS_ACTOR_MOUNTED((*&Local_4 + 628)[02]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_606, (*&Local_4 + 628)[02]);
							}
						}
					}
					Function_228(&bLocal_608);
					iLocal_603 = 5;
				}
				else
				{
					Function_228(&bLocal_608);
					iLocal_603 = 6;
				}
				if (SQUAD_IS_VALID(Local_986.f_56))
				{
					Function_304(Local_986.f_56, Local_986.f_44);
				}
				if (SQUAD_IS_VALID(Local_986.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_44);
					Function_303(Local_986.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_1020, -1.0f);
				}
				Function_383(&(Local_671[017]), bLocal_606, "Uncle", 1, 0x5f5e100, 1);
				Function_383(&(Local_671[117]), bLocal_862, "Son", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[217]), bLocal_861, "Wife", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[317]), Local_986.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[417]), Local_986.f_48, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[517]), Local_986.f_52, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[617]), Local_986.f_56, "Cow", 0, 0x5f5e100, 1);
				Function_382(&(Local_671[717]));
				Function_378(&(Local_671[317]), 2);
				Function_378(&(Local_671[417]), 2);
				Function_378(&(Local_671[517]), 2);
				Function_378(&(Local_671[617]), 2);
				Function_244(iLocal_602);
				Function_372(StackVal, StackVal, Function_244(iLocal_602), iLocal_602, Global_30637[0], Function_247(iLocal_602), 2);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_606) && SQUAD_IS_VALID(Local_986.f_44))
			{
				if (Function_371(bLocal_606, 1, 0x41700000) && Function_370(Local_986.f_44, 1))
				{
					Function_228(&bLocal_608);
					iLocal_603 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(Local_986.f_44))
			{
				Function_369();
				Function_551();
				Function_303(Local_986.f_44);
				Function_366(Local_986.f_44, &Local_4 + 868);
				Function_365(Local_986.f_44, 2, 1);
				SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_986.f_44, Local_986.f_60, 1, 0,5f, 1.0f);
			}
			CAMERA_RESET(0);
			Function_228(&bLocal_608);
			iLocal_603 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_228(&bLocal_608);
				iLocal_603 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_929))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_929 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_531, "HOME02RANCH01_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_929))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_929, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(bLocal_865))
				{
					bLocal_865 = ADD_BLIP_FOR_OBJECT(Local_4.f_1492, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_865))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_866))
				{
					GET_OBJECT_POSITION(Local_4.f_1492, &vLocal_868);
					GET_OBJECT_ORIENTATION(Local_4.f_1492, &vLocal_871);
					bLocal_866 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_531, "HOME02RANCH01GATEWAY01", vLocal_868, vLocal_871, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_866))
					{
					}
				}
				if (IS_ACTOR_VALID(bLocal_606))
				{
					CLEAR_ACTOR_MIN_SPEED(bLocal_606);
					CLEAR_ACTOR_MAX_SPEED(bLocal_606);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_606);
					Function_189(13, 0, 1);
					MEMORY_PREFER_RIDING(bLocal_606, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_606, true);
					bLocal_830 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, false, Local_4.f_1776, -14.0f, 1, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
					TASK_SEQUENCE_RELEASE(bLocal_830, 1);
					TASK_PRIORITY_SET(bLocal_606, true);
				}
				if (iLocal_617[1] == 1)
				{
					if (SQUAD_IS_VALID(Local_986.f_44))
					{
						Function_369();
						Function_551();
						Function_303(Local_986.f_44);
						Function_366(Local_986.f_44, &Local_4 + 868);
						Function_365(Local_986.f_44, 2, 1);
						SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_986.f_44, Local_986.f_60, 1, 0,5f, 1.0f);
					}
				}
				iLocal_904 = 0;
				if (SQUAD_IS_VALID(Local_986.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_48);
					Function_364(Local_986.f_48);
				}
				*(&Local_986 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_986.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_52);
					Function_364(Local_986.f_52);
				}
				Local_986.f_8 = Local_4.f_1492;
				GET_OBJECT_POSITION(Local_4.f_1492, &uLocal_874);
				if (SQUAD_IS_VALID(Local_986.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_56);
					bLocal_830 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, Local_4.f_1024, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_830);
					TASK_SEQUENCE_RELEASE(bLocal_830, 1);
				}
				Function_550();
				Function_228(&bLocal_608);
				iLocal_603 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_360("home02_ranch01_obj02", 7,5f, 1, 2, 0, 0, 0);
				Function_228(&bLocal_608);
				Function_228(&bLocal_611);
				Function_228(&bLocal_614);
				iLocal_603 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_357(&bLocal_614, 60.0f, bLocal_607, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_628, 0, bLocal_531, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_865))
				{
					REMOVE_BLIP(bLocal_865);
				}
				if (IS_OBJECT_VALID(bLocal_866))
				{
					DESTROY_OBJECT(bLocal_866);
				}
				if (bLocal_906)
				{
					Function_356();
				}
			}
			else
			{
				Function_346(StackVal, &bLocal_614, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_628, 0, 0, 0, 4294967295, 1);
				if (!IS_BLIP_VALID(bLocal_865))
				{
					bLocal_865 = ADD_BLIP_FOR_OBJECT(Local_4.f_1492, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_865))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_866))
				{
					GET_OBJECT_POSITION(Local_4.f_1492, &vLocal_868);
					GET_OBJECT_ORIENTATION(Local_4.f_1492, &vLocal_871);
					bLocal_866 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_531, "HOME02RANCH01GATEWAY01", vLocal_868, vLocal_871, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_866))
					{
					}
				}
				if (!bLocal_906)
				{
					Function_249();
					Function_345();
				}
				if (((SQUAD_IS_VALID(Local_986.f_44) && SQUAD_IS_VALID(Local_986.f_56)) && SQUAD_IS_VALID(Local_986.f_48)) && SQUAD_IS_VALID(Local_986.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_986.f_44) != 0 && SQUAD_GET_SIZE(Local_986.f_48) != 0) && SQUAD_GET_SIZE(Local_986.f_52) != 0)
					{
						if (IS_BLIP_VALID(bLocal_865))
						{
							REMOVE_BLIP(bLocal_865);
						}
						if (IS_OBJECT_VALID(bLocal_866))
						{
							DESTROY_OBJECT(bLocal_866);
						}
						Function_344(Local_986.f_44);
						Function_344(Local_986.f_48);
						Function_344(Local_986.f_52);
						Function_344(Local_986.f_56);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_249();
						Function_228(&bLocal_608);
						iLocal_603 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(Local_986.f_56))
			{
				bLocal_842 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_56);
			}
			PRINTINT(bLocal_847);
			PRINTNL();
			bLocal_847 = Function_342(bLocal_842, bLocal_847);
			PRINTINT(bLocal_847);
			PRINTNL();
			Function_341(Local_532, bLocal_847);
			PRINTINT(bLocal_842);
			PRINTNL();
			bLocal_843 = (15 - bLocal_842);
			PRINTINT(bLocal_843);
			PRINTNL();
			bLocal_849 = Local_986.f_76;
			Global_34165.f_124 = bLocal_849;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_850 = Local_986.f_80;
			Global_34165.f_128 = bLocal_850;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			iLocal_617[2] = 1;
			Function_228(&bLocal_608);
			iLocal_602 = 3;
			iLocal_603 = 0;
			break;
	}
	return;
}

void Function_550() //Position: 0x21773 / 137075
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_r1_HerdOutPen", "Home02_r1_HerdOutPen", true, 3, 1, 0, 1);
		Function_283(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_551() //Position: 0x217C4 / 137156
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_986.f_44, Local_986.f_60, Local_986.f_12, 100.0f, 0,85f, 0,5f, 1082130432);
	return;
}

void Function_552() //Position: 0x217F0 / 137200
{
	if (!SQUAD_IS_VALID(Local_4.f_640))
	{
		Function_320();
		if (SQUAD_IS_VALID(Local_4.f_640))
		{
			Function_319(Local_4.f_640, 0);
			Function_318(Local_4.f_640, 3);
			Function_316(Local_4.f_640, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
			{
				SET_ACTORS_HORSE(bLocal_606, (*&Local_4 + 628)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_606, (*&Local_4 + 628)[02]);
				Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1188)[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_640, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_553();
	return;
}

void Function_553() //Position: 0x21889 / 137353
{
	Function_314();
	Local_986.f_12 = Local_4.f_1776;
	if (!SQUAD_IS_VALID(Local_986.f_44))
	{
		Local_986.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_531, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_986.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_986.f_44);
			Function_311(&Local_986, bLocal_531, Local_4.f_1484, &iLocal_924, 5, 2.0f, 5,5f, 2.0f, 0);
			Function_319(Local_986.f_44, 0);
			Function_310(Local_986.f_44, 1);
			Function_309(Local_986.f_44, 0);
			Function_308(Local_986.f_44, 0);
			Function_307(Local_986.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_1020, -1.0f);
		}
	}
	return;
}

void Function_554() //Position: 0x21955 / 137557
{
	if (Function_300(&bLocal_958) <= 0,1f)
	{
		switch (iLocal_846)
		{
			case 0x00000000:
				iLocal_846++;
				break;
			
			case 0x00000001:
				if (iLocal_603 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_846++;
					}
				}
				break;
			
			case 0x00000002:
				Function_418(1, 1, 1, 0x42340000, 0x41f00000);
				if (SQUAD_IS_VALID(Local_986.f_48) && SQUAD_IS_VALID(Local_986.f_52))
				{
					if (SQUAD_GET_SIZE(Local_986.f_48) != 0 && SQUAD_GET_SIZE(Local_986.f_52) != 0)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 36.0f))
						{
							if (Function_300(&bLocal_611) <= 15.0f)
							{
								SAY_SINGLE_LINE_SCRIPTED(bLocal_606, "Home02_r1_UnclYells1", Global_34573, 0, 0, 0, 0, 0);
								Function_228(&bLocal_611);
							}
						}
					}
					else if (iLocal_904)
					{
						if (SQUAD_GET_SIZE(Local_986.f_48) > 2)
						{
							if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 36.0f))
							{
								if (Function_300(&bLocal_611) <= 15.0f)
								{
									SAY_SINGLE_LINE_SCRIPTED(bLocal_606, "Home02_r1_Going4Strags", Global_34573, 0, 0, 0, 0, 0);
									Function_228(&bLocal_611);
								}
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				iLocal_846++;
				break;
			}
	}
	return;
}

void Function_555(int iParam0, bool bParam1, float fParam2) //Position: 0x21AAB / 137899
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (SQUAD_IS_VALID(iParam0->f_52))
	{
		if (SQUAD_IS_VALID(iParam0->f_48))
		{
			if (SQUAD_IS_VALID(iParam0->f_44))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
					{
						bVar3 = 6.0f;
						bVar4 = 12.0f;
					}
					else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
					{
						bVar3 = 9.0f;
						bVar4 = 20.0f;
					}
					else
					{
						bVar3 = 10.0f;
						bVar4 = 23.0f;
					}
					if (!iParam0->f_100)
					{
						if (SQUAD_GET_SIZE(iParam0->f_44) != 0 && SQUAD_GET_SIZE(iParam0->f_48) != 0)
						{
							if (SQUAD_GET_SIZE(iParam0->f_52) == 1)
							{
								bVar0 = false;
								while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_52) - 1))
								{
									bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_52, bVar0);
									if (IS_ACTOR_VALID(bVar1))
									{
										if (!Function_353(StackVal, bVar1, bVar4))
										{
											CLEAR_ACTOR_MAX_SPEED(bVar1);
											TASK_CLEAR(bVar1);
											SQUAD_LEAVE(bVar1);
											SQUAD_JOIN(bVar1, iParam0->f_44);
											if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
											{
												DECOR_REMOVE(bVar1, "bRejoinInProgress");
											}
											if (bParam1)
											{
												bVar2 = GET_BLIP_ON_ACTOR(bVar1);
												if (IS_BLIP_VALID(bVar2))
												{
													REMOVE_BLIP(bVar2);
												}
											}
											if (DECOR_GET_BOOL(bVar1, "bIsStraggler"))
											{
												iParam0->f_80++;
												DECOR_REMOVE(bVar1, "bIsStraggler");
											}
										}
									}
									bVar0++;
								}
							}
						}
					}
					bVar0 = false;
					while (bVar0 < (SQUAD_GET_SIZE(iParam0->f_52) - 1))
					{
						bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_52, bVar0);
						if (IS_ACTOR_VALID(bVar1))
						{
							if (bParam1)
							{
								bVar2 = GET_BLIP_ON_ACTOR(bVar1);
								if (!IS_BLIP_VALID(bVar2))
								{
									bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, 425, 0, 2, 0);
									SET_BLIP_FLAG(bVar2, 4096, 0);
								}
								else if (!GET_BLIP_ICON(bVar2) != 425)
								{
									CHANGE_BLIP_ICON(bVar2, 425);
									SET_BLIP_FLAG(bVar2, 4096, 0);
								}
							}
							if (!GET_TASK_STATUS(bVar1, 26) != 1)
							{
								if (!GET_LASSO_TARGET(Global_34573) != bVar1)
								{
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar1, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar1, true);
								}
							}
							if (Function_353(StackVal, bVar1, bVar3))
							{
								if (StackVal && Function_353(iParam0->f_100, bVar1, bVar4))
								{
								}
								else
								{
									CLEAR_ACTOR_MAX_SPEED(bVar1);
									TASK_CLEAR(bVar1);
									SQUAD_LEAVE(bVar1);
									SQUAD_JOIN(bVar1, iParam0->f_44);
									if (DECOR_GET_BOOL(bVar1, "bRejoinInProgress"))
									{
										DECOR_REMOVE(bVar1, "bRejoinInProgress");
									}
									if (bParam1)
									{
										bVar2 = GET_BLIP_ON_ACTOR(bVar1);
										if (IS_BLIP_VALID(bVar2))
										{
											REMOVE_BLIP(bVar2);
										}
									}
									if (DECOR_GET_BOOL(bVar1, "bIsStraggler"))
									{
										iParam0->f_80++;
										DECOR_REMOVE(bVar1, "bIsStraggler");
									}
								}
							}
							if (Function_300(iParam0 + 88) <= fParam2)
							{
								Function_228(iParam0 + 88);
							}
						}
						bVar0++;
					}
				}
			}
		}
	}
	return;
}

void Function_556(int iParam0, bool bParam1) //Position: 0x21DD2 / 138706
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	if (SQUAD_IS_VALID(iParam0->f_44))
	{
		if (SQUAD_IS_VALID(iParam0->f_48))
		{
			if (SQUAD_IS_VALID(iParam0->f_52))
			{
				if (IS_OBJECT_VALID(StackVal))
				{
					if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
					{
						iVar4 = 1;
						bVar7 = 7.0f;
						bVar5 = 12.0f;
						bVar6 = 14.0f;
					}
					else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
					{
						iVar4 = 3;
						bVar7 = 12.0f;
						bVar5 = 20.0f;
						bVar6 = 22.0f;
					}
					else
					{
						iVar4 = 3;
						bVar7 = 15.0f;
						bVar5 = 23.0f;
						bVar6 = 25.0f;
					}
					if (SQUAD_GET_SIZE(iParam0->f_44) < iVar4)
					{
						if (!iParam0->f_100)
						{
							bVar2 = false;
							while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_44) - 1))
							{
								bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_44, bVar2);
								if (IS_ACTOR_VALID(bVar0))
								{
									if (!Function_353(StackVal, bVar0, bVar7))
									{
										SET_ACTOR_MAX_SPEED(bVar0, 4);
										SQUAD_LEAVE(bVar0);
										SQUAD_JOIN(bVar0, iParam0->f_52);
										iParam0->f_84 = TASK_SEQUENCE_OPEN();
										TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
										TASK_SEQUENCE_CLOSE();
										TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
										TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
										TASK_PRIORITY_SET(bVar0, true);
										if (bParam1)
										{
											bVar1 = GET_BLIP_ON_ACTOR(bVar0);
											if (!IS_BLIP_VALID(bVar1))
											{
												bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
												SET_BLIP_FLAG(bVar1, 4096, 0);
											}
											else
											{
												CHANGE_BLIP_ICON(bVar1, 425);
												SET_BLIP_FLAG(bVar1, 4096, 0);
											}
										}
									}
									else
									{
										CLEAR_ACTOR_MAX_SPEED(bVar0);
										TASK_CLEAR(bVar0);
										SQUAD_LEAVE(bVar0);
										SQUAD_JOIN(bVar0, iParam0->f_56);
										if (DECOR_GET_BOOL(bVar0, "bRejoinInProgress"))
										{
											DECOR_SET_BOOL(bVar0, "bRejoinInProgress", false);
										}
										if (bParam1)
										{
											bVar1 = GET_BLIP_ON_ACTOR(bVar0);
											if (IS_BLIP_VALID(bVar1))
											{
												REMOVE_BLIP(bVar1);
											}
										}
									}
								}
								if (SQUAD_GET_SIZE(iParam0->f_44) == 0)
								{
									iParam0->f_100 = 1;
									Function_228(iParam0 + 88);
								}
								bVar2++;
							}
						}
					}
					else
					{
						bVar2 = false;
						while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_44) - 1))
						{
							bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_44, bVar2);
							if (IS_ACTOR_VALID(bVar0))
							{
								if (!Function_353(StackVal, bVar0, bVar6))
								{
									SET_ACTOR_MAX_SPEED(bVar0, 4);
									SQUAD_LEAVE(bVar0);
									SQUAD_JOIN(bVar0, iParam0->f_52);
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar0, true);
									if (bParam1)
									{
										bVar1 = GET_BLIP_ON_ACTOR(bVar0);
										if (!IS_BLIP_VALID(bVar1))
										{
											bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
										else
										{
											CHANGE_BLIP_ICON(bVar1, 425);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
									}
									if (!DECOR_GET_BOOL(bVar0, "bIsStraggler"))
									{
										iParam0->f_76++;
										DECOR_SET_BOOL(bVar0, "bIsStraggler", true);
									}
								}
							}
							bVar2++;
						}
					}
					bVar2 = false;
					while (bVar2 < (SQUAD_GET_SIZE(iParam0->f_48) - 1))
					{
						bVar0 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_48, bVar2);
						if (IS_ACTOR_VALID(bVar0))
						{
							if (bParam1)
							{
								bVar1 = GET_BLIP_ON_ACTOR(bVar0);
								if (!IS_BLIP_VALID(bVar1))
								{
									bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
									SET_BLIP_FLAG(bVar1, 4096, 0);
								}
								else if (!GET_BLIP_ICON(bVar1) != 425)
								{
									CHANGE_BLIP_ICON(bVar1, 425);
									SET_BLIP_FLAG(bVar1, 4096, 0);
								}
							}
							if (!GET_TASK_STATUS(bVar0, 26) != 1)
							{
								if (!GET_LASSO_TARGET(Global_34573) != bVar0)
								{
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar0, true);
								}
							}
							if (StackVal && IS_OBJECT_VALID(IS_OBJECT_VALID(StackVal)))
							{
								if (StackVal || Function_353(Function_353(StackVal, bVar0, bVar5), bVar0, bVar5))
								{
									SET_ACTOR_MAX_SPEED(bVar0, 4);
									SQUAD_LEAVE(bVar0);
									SQUAD_JOIN(bVar0, iParam0->f_52);
									if (Function_353(StackVal, bVar0, bVar5))
									{
									}
									else if (Function_353(StackVal, bVar0, bVar5))
									{
									}
									iParam0->f_84 = TASK_SEQUENCE_OPEN();
									TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
									TASK_SEQUENCE_CLOSE();
									TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
									TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
									TASK_PRIORITY_SET(bVar0, true);
									if (bParam1)
									{
										bVar1 = GET_BLIP_ON_ACTOR(bVar0);
										if (!IS_BLIP_VALID(bVar1))
										{
											bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
										else
										{
											CHANGE_BLIP_ICON(bVar1, 425);
											SET_BLIP_FLAG(bVar1, 4096, 0);
										}
									}
								}
								else
								{
									bVar3 = false;
									while (bVar3 < (iParam0->f_104 - 1))
									{
										if (IS_ACTOR_VALID((*iParam0 + 104)[bVar3]))
										{
											if (IS_ACTOR_PLAYER((*iParam0 + 104)[bVar3]))
											{
												if (Function_353(bVar0, (*iParam0 + 104)[bVar3], 7.0f))
												{
													PRINTINT(bVar3);
													PRINTNL();
													SET_ACTOR_MAX_SPEED(bVar0, 4);
													SQUAD_LEAVE(bVar0);
													SQUAD_JOIN(bVar0, iParam0->f_52);
													iParam0->f_84 = TASK_SEQUENCE_OPEN();
													TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
													TASK_SEQUENCE_CLOSE();
													TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
													TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
													TASK_PRIORITY_SET(bVar0, true);
													if (bParam1)
													{
														bVar1 = GET_BLIP_ON_ACTOR(bVar0);
														if (!IS_BLIP_VALID(bVar1))
														{
															bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
															SET_BLIP_FLAG(bVar1, 4096, 0);
														}
														else
														{
															CHANGE_BLIP_ICON(bVar1, 425);
															SET_BLIP_FLAG(bVar1, 4096, 0);
														}
													}
												}
											}
											else if (Function_353(bVar0, (*iParam0 + 104)[bVar3], 15.0f))
											{
												PRINTINT(bVar3);
												PRINTNL();
												SET_ACTOR_MAX_SPEED(bVar0, 4);
												SQUAD_LEAVE(bVar0);
												SQUAD_JOIN(bVar0, iParam0->f_52);
												iParam0->f_84 = TASK_SEQUENCE_OPEN();
												TASK_FOLLOW_OBJECT(StackVal, false, iParam0 + 28, 0, 0, 0, 0, 0, 0, 1);
												TASK_SEQUENCE_CLOSE();
												TASK_SEQUENCE_PERFORM(bVar0, iParam0->f_84);
												TASK_SEQUENCE_RELEASE(iParam0->f_84, 1);
												TASK_PRIORITY_SET(bVar0, true);
												if (bParam1)
												{
													bVar1 = GET_BLIP_ON_ACTOR(bVar0);
													if (!IS_BLIP_VALID(bVar1))
													{
														bVar1 = ADD_BLIP_FOR_ACTOR(bVar0, 425, 0, 2, 0);
														SET_BLIP_FLAG(bVar1, 4096, 0);
													}
													else
													{
														CHANGE_BLIP_ICON(bVar1, 425);
														SET_BLIP_FLAG(bVar1, 4096, 0);
													}
												}
												if (DECOR_GET_BOOL(bVar0, "bIsStraggler"))
												{
													DECOR_REMOVE(bVar0, "bIsStraggler");
												}
											}
										}
										bVar3++;
									}
								}
							}
						}
						bVar2++;
					}
				}
			}
		}
	}
	return;
}

void Function_557(int iParam0, bool bParam1) //Position: 0x22412 / 140306
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	int iVar8;
	
	if (IS_OBJECT_VALID(StackVal))
	{
		if (SQUAD_IS_VALID(iParam0->f_44))
		{
			if (SQUAD_IS_VALID(iParam0->f_48))
			{
				if (SQUAD_IS_VALID(iParam0->f_56))
				{
					if (SQUAD_IS_VALID(iParam0->f_52))
					{
						if (iParam0->f_68 <= 4 && iParam0->f_68 >= 10)
						{
							iVar8 = 1;
						}
						else if (iParam0->f_68 <= 11 && iParam0->f_68 >= 20)
						{
							iVar8 = 3;
						}
						else
						{
							iVar8 = 3;
						}
						if (SQUAD_GET_SIZE(iParam0->f_44) < iVar8)
						{
							if (SQUAD_GET_SIZE(iParam0->f_56) > 1)
							{
								if (bParam1)
								{
									bVar6 = GET_BLIP_ON_OBJECT(StackVal);
									if (IS_BLIP_VALID(bVar6))
									{
										REMOVE_BLIP(bVar6);
									}
									bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
									if (IS_BLIP_VALID(bVar7))
									{
										REMOVE_BLIP(bVar7);
									}
								}
								if (IS_OBJECT_VALID(StackVal))
								{
									GET_OBJECT_POSITION(StackVal, &vVar0);
									GET_OBJECT_ORIENTATION(StackVal, &vVar3);
								}
							}
							else if (SQUAD_GET_SIZE(iParam0->f_52) > 1)
							{
								if (bParam1)
								{
									bVar6 = GET_BLIP_ON_OBJECT(StackVal);
									if (IS_BLIP_VALID(bVar6))
									{
										REMOVE_BLIP(bVar6);
									}
									bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
									if (IS_BLIP_VALID(bVar7))
									{
										REMOVE_BLIP(bVar7);
									}
								}
								SQUAD_COMPUTE_CENTROID(iParam0->f_52, &vVar0);
								Function_449(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_449(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_450(iParam0->f_44);
								vVar3 = { StackVal, StackVal, Function_450(iParam0->f_44) };
							}
							else if (SQUAD_GET_SIZE(iParam0->f_48) > 1)
							{
								if (bParam1)
								{
									bVar6 = GET_BLIP_ON_OBJECT(StackVal);
									if (IS_BLIP_VALID(bVar6))
									{
										REMOVE_BLIP(bVar6);
									}
									bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
									if (IS_BLIP_VALID(bVar7))
									{
										REMOVE_BLIP(bVar7);
									}
								}
								SQUAD_COMPUTE_CENTROID(iParam0->f_48, &vVar0);
								Function_449(StackVal, StackVal, vVar0, iParam0->f_12);
								vVar0 = { StackVal, StackVal, Function_449(StackVal, StackVal, vVar0, iParam0->f_12) };
								Function_450(iParam0->f_48);
								vVar3 = { StackVal, StackVal, Function_450(iParam0->f_48) };
							}
							else
							{
								if (bParam1)
								{
									bVar6 = GET_BLIP_ON_OBJECT(StackVal);
									if (IS_BLIP_VALID(bVar6))
									{
										REMOVE_BLIP(bVar6);
									}
									bVar7 = GET_BLIP_ON_OBJECT(*iParam0);
									if (IS_BLIP_VALID(bVar7))
									{
										REMOVE_BLIP(bVar7);
									}
								}
								if (IS_OBJECT_VALID(StackVal))
								{
									GET_OBJECT_POSITION(StackVal, &vVar0);
									GET_OBJECT_ORIENTATION(StackVal, &vVar3);
								}
							}
						}
						else
						{
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(*iParam0)))
							{
								Function_245(*iParam0);
								if (!Function_73(StackVal, StackVal, Function_245(*iParam0)))
								{
									bVar7 = ADD_BLIP_FOR_OBJECT(*iParam0, 425, 0f, 2, 0);
									if (IS_BLIP_VALID(bVar7))
									{
										SET_BLIP_SCALE(bVar7, 2,5f);
										SET_BLIP_NAME(bVar7, "nBLIP_HERD");
										SET_BLIP_FLAG(bVar7, 4096, 0);
										SET_BLIP_PRIORITY(bVar7, true);
									}
								}
							}
							if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(StackVal)))
							{
								Function_245(StackVal);
								if (!Function_73(StackVal, StackVal, Function_245(StackVal)))
								{
									bVar6 = ADD_BLIP_FOR_OBJECT(StackVal, 422, 0f, 2, 0);
									if (IS_BLIP_VALID(bVar6))
									{
										SET_BLIP_SCALE(bVar6, 1.0f);
										SET_BLIP_PRIORITY(bVar6, 2);
									}
								}
							}
							SQUAD_COMPUTE_CENTROID(iParam0->f_44, &vVar0);
							Function_450(iParam0->f_44);
							vVar3 = { StackVal, StackVal, Function_450(iParam0->f_44) };
						}
						SET_OBJECT_POSITION(StackVal, vVar0);
						SET_OBJECT_POSITION(*iParam0, vVar0);
						SET_OBJECT_ORIENTATION(*iParam0, vVar3);
						GET_OBJECT_POSITION(StackVal, iParam0 + 16);
					}
				}
			}
		}
	}
	return;
}

void Function_558() //Position: 0x226F0 / 141040
{
	switch (iLocal_841)
	{
		case 0x00000000:
			iLocal_841++;
			break;
		
		case 0x00000001:
			iLocal_841++;
			break;
	}
	return;
}

void Function_559(int iParam0) //Position: 0x22720 / 141088
{
	switch (iLocal_831)
	{
		case 0x00000000:
			iLocal_831++;
			break;
		
		case 0x00000001:
			if (!IS_DOOR_VALID((*iParam0)[0]))
			{
				(*iParam0)[0] = Function_560("beechersHope", "stable01", 94);
				if (IS_DOOR_VALID((*iParam0)[0]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[1]))
			{
				(*iParam0)[1] = Function_560("beechersHope", "stable01", 95);
				if (IS_DOOR_VALID((*iParam0)[1]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[2]))
			{
				(*iParam0)[2] = Function_560("beechersHope", "stable01", 98);
				if (IS_DOOR_VALID((*iParam0)[2]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[3]))
			{
				(*iParam0)[3] = Function_560("beechersHope", "stable01", 99);
				if (IS_DOOR_VALID((*iParam0)[3]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[4]))
			{
				(*iParam0)[4] = Function_560("beechersHope", "stable01", 96);
				if (IS_DOOR_VALID((*iParam0)[4]))
				{
				}
			}
			if (!IS_DOOR_VALID((*iParam0)[5]))
			{
				(*iParam0)[5] = Function_560("beechersHope", "stable01", 97);
				if (IS_DOOR_VALID((*iParam0)[5]))
				{
				}
			}
			iLocal_831++;
			break;
		
		case 0x00000002:
			if (IS_DOOR_VALID((*iParam0)[0]))
			{
				Function_154((*iParam0)[0], 0);
				OPEN_DOOR_DIRECTION((*iParam0)[0], true);
			}
			if (IS_DOOR_VALID((*iParam0)[1]))
			{
				Function_154((*iParam0)[1], 0);
				OPEN_DOOR_DIRECTION((*iParam0)[1], false);
			}
			if (IS_DOOR_VALID((*iParam0)[2]))
			{
				Function_154((*iParam0)[2], 0);
				OPEN_DOOR_DIRECTION((*iParam0)[2], true);
			}
			if (IS_DOOR_VALID((*iParam0)[3]))
			{
				Function_154((*iParam0)[3], 0);
				OPEN_DOOR_DIRECTION((*iParam0)[3], false);
			}
			if (IS_DOOR_VALID((*iParam0)[4]))
			{
				Function_154((*iParam0)[4], 0);
				CLOSE_DOOR_FAST((*iParam0)[4]);
			}
			if (IS_DOOR_VALID((*iParam0)[5]))
			{
				Function_154((*iParam0)[5], 0);
				CLOSE_DOOR_FAST((*iParam0)[5]);
			}
			iLocal_831++;
			break;
		
		case 0x00000003:
			iLocal_831++;
			break;
	}
	return;
}

int Function_560(var uParam0, var uParam1, int iParam2) //Position: 0x229B6 / 141750
{
	return Function_561(Global_29006, uParam0, uParam1, iParam2);
}

int Function_561(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x229C8 / 141768
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

void Function_562() //Position: 0x22A64 / 141924
{
	if (STREAMING_IS_WORLD_LOADED())
	{
		if (Function_326(Global_30717[1]))
		{
			Function_559(&iLocal_852);
		}
		else
		{
			iLocal_831 = 0;
		}
	}
	Function_339(bLocal_531);
	if (((iLocal_603 < 5 && iLocal_603 > 105) && !iLocal_603 != 104) && !iLocal_603 != 103)
	{
		Function_567();
		Function_453(Local_986.f_44, Local_986.f_56, Local_4.f_1048);
		Function_452(&Local_986);
		if (bLocal_906)
		{
			Function_557(&Local_986, 1);
			Function_556(&Local_986, 1);
			Function_555(&Local_986, 1, 0x41700000);
			if (Function_300(&bLocal_943) <= 0,2f)
			{
				Function_443(&Local_986);
				Function_228(&bLocal_943);
			}
			Function_442();
		}
		Function_433(Global_34573);
		Function_432();
		Function_566();
	}
	switch (iLocal_603)
	{
		case 0x00000000:
			Function_335(0);
			SET_ACTOR_HEALTH(bLocal_606, GET_ACTOR_MAX_HEALTH(bLocal_606));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			if (iLocal_617[0] == 0)
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_327();
				bLocal_604 = Global_30717[1];
				if (!Function_326(bLocal_604))
				{
					Function_324(&Local_532);
				}
				Function_323(Global_34573, (*&Local_4 + 1164)[0], 1, 1, 1);
				iLocal_839 = 0;
				if (IS_ACTOR_VALID(bLocal_607))
				{
					TASK_STAND_STILL(bLocal_607, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_607, true);
				}
				if (IS_ACTOR_VALID(bLocal_606))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_606);
					CLEAR_ACTOR_MAX_SPEED(bLocal_606);
					TASK_STAND_STILL(bLocal_606, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_606, true);
				}
				Function_228(&bLocal_608);
				iLocal_603 = 1;
			}
			else
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_326(bLocal_604) || bLocal_604 != 4294967295))
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_403())
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				iLocal_831 = 0;
				iLocal_832 = 0;
				iLocal_841 = 0;
				iLocal_846 = 0;
				iLocal_904 = 0;
				iLocal_630 = 0;
				bLocal_906 = false;
				iLocal_905 = 0;
				iLocal_914 = 0;
				iLocal_916 = 0;
				iLocal_915 = 0;
				Function_395(&iLocal_908);
				bLocal_842 = Function_321(Function_322(Local_532));
				PRINTINT(bLocal_842);
				PRINTNL();
				bLocal_843 = (15 - bLocal_842);
				PRINTINT(bLocal_843);
				PRINTNL();
				Local_986.f_76 = 0;
				Local_986.f_80 = 0;
				bLocal_849 = Local_986.f_76;
				bLocal_850 = Local_986.f_80;
				PRINTINT(bLocal_849);
				PRINTNL();
				PRINTINT(bLocal_850);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(bLocal_850) / TO_FLOAT(bLocal_849)));
				PRINTNL();
				bLocal_849 = Local_986.f_76;
				Global_34165.f_124 = bLocal_849;
				PRINTINT(Global_34165.f_124);
				PRINTNL();
				bLocal_850 = Local_986.f_80;
				Global_34165.f_128 = bLocal_850;
				PRINTINT(Global_34165.f_128);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Function_564();
				if (iLocal_617[0] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_607))
						{
							Function_323(bLocal_607, (*&Local_4 + 1164)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_607))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_607);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_606))
					{
						Function_189(13, 0, 1);
						Function_323(bLocal_606, (*&Local_4 + 1164)[1], 1, 1, 1);
						if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
						{
							Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1164)[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_606) && !IS_ACTOR_MOUNTED((*&Local_4 + 628)[02]))
							{
								ACTOR_MOUNT_ACTOR(bLocal_606, (*&Local_4 + 628)[02]);
							}
						}
					}
					Function_228(&bLocal_608);
					iLocal_603 = 5;
				}
				else
				{
					Function_228(&bLocal_608);
					iLocal_603 = 6;
				}
				if (SQUAD_IS_VALID(Local_986.f_56))
				{
					Function_304(Local_986.f_56, Local_986.f_44);
				}
				if (SQUAD_IS_VALID(Local_986.f_44))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_44);
					Function_303(Local_986.f_44);
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_1020, -1.0f);
				}
				Function_383(&(Local_671[017]), bLocal_606, "Uncle", 1, 0x5f5e100, 1);
				Function_383(&(Local_671[117]), bLocal_862, "Son", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[217]), bLocal_861, "Wife", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[317]), Local_986.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[417]), Local_986.f_48, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[517]), Local_986.f_52, "Cow", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[617]), Local_986.f_56, "Cow", 0, 0x5f5e100, 1);
				Function_382(&(Local_671[717]));
				Function_378(&(Local_671[317]), 2);
				Function_378(&(Local_671[417]), 2);
				Function_378(&(Local_671[517]), 2);
				Function_378(&(Local_671[617]), 2);
				Function_244(iLocal_602);
				Function_372(StackVal, StackVal, Function_244(iLocal_602), iLocal_602, Global_30637[0], Function_247(iLocal_602), 2);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_606) && SQUAD_IS_VALID(Local_986.f_44))
			{
				if (Function_371(bLocal_606, 1, 0x41700000) && Function_370(Local_986.f_44, 1))
				{
					Function_228(&bLocal_608);
					iLocal_603 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (SQUAD_IS_VALID(Local_986.f_44))
			{
				Function_369();
				Function_563();
				Function_303(Local_986.f_44);
				Function_366(Local_986.f_44, &Local_4 + 844);
				Function_365(Local_986.f_44, 2, 1);
				Function_365(Local_986.f_56, 2, 1);
				Function_365(Local_986.f_48, 2, 1);
				SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_986.f_44, Local_986.f_60, 1, 0,25f, 0,25f);
				_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 0, 16, (4,5f - 0,5f));
			}
			CAMERA_RESET(0);
			Function_228(&bLocal_608);
			iLocal_603 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_228(&bLocal_608);
				iLocal_603 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_929))
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						bLocal_929 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, bLocal_531, "HOME02RANCH01_CAMERA_FOCUS", 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_929))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_929, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(bLocal_865))
				{
					bLocal_865 = ADD_BLIP_FOR_OBJECT(Local_4.f_1484, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_865))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_866))
				{
					GET_OBJECT_POSITION(Local_4.f_1484, &vLocal_868);
					GET_OBJECT_ORIENTATION(Local_4.f_1484, &vLocal_871);
					bLocal_866 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_531, "HOME02RANCH01GATEWAY01", vLocal_868, vLocal_871, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_866))
					{
					}
				}
				GET_OBJECT_POSITION((*&Local_4 + 1188)[3], &vLocal_877);
				if (IS_ACTOR_VALID(bLocal_606))
				{
					CLEAR_ACTOR_MIN_SPEED(bLocal_606);
					CLEAR_ACTOR_MAX_SPEED(bLocal_606);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_606);
					Function_189(13, 0, 1);
					MEMORY_PREFER_RIDING(bLocal_606, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_606, true);
					bLocal_830 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1808, 4, 1, 1, 1, false);
					TASK_GO_NEAR_COORD(false, &vLocal_877, 1.0f, 4);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
					TASK_SEQUENCE_RELEASE(bLocal_830, 1);
					TASK_PRIORITY_SET(bLocal_606, true);
				}
				if (iLocal_617[0] == 1)
				{
					if (SQUAD_IS_VALID(Local_986.f_44))
					{
						Function_369();
						Function_563();
						Function_303(Local_986.f_44);
						Function_366(Local_986.f_44, &Local_4 + 844);
						Function_365(Local_986.f_44, 2, 1);
						Function_365(Local_986.f_56, 2, 1);
						Function_365(Local_986.f_48, 2, 1);
						SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(Local_986.f_44, Local_986.f_60, 1, 0,25f, 0,25f);
						_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(Local_986.f_44, Local_986.f_60, 0, 16, (4,5f - 0,5f));
					}
				}
				iLocal_904 = 0;
				if (SQUAD_IS_VALID(Local_986.f_48))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_48);
					Function_364(Local_986.f_48);
				}
				*(&Local_986 + 28) = { 0.0f, 0.0f, 0.0f };
				if (SQUAD_IS_VALID(Local_986.f_52))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_52);
					Function_364(Local_986.f_52);
				}
				Local_986.f_8 = Local_4.f_1484;
				GET_OBJECT_POSITION(Local_4.f_1484, &uLocal_874);
				if (SQUAD_IS_VALID(Local_986.f_56))
				{
					SQUAD_GOALS_CLEAR(Local_986.f_56);
					bLocal_830 = TASK_SEQUENCE_OPEN();
					TASK_WANDER_IN_VOLUME(false, Local_4.f_1020, -1.0f);
					TASK_SEQUENCE_CLOSE();
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_56, false, 1, 4294967295);
					TASK_SEQUENCE_PERFORM(false, bLocal_830);
					TASK_SEQUENCE_RELEASE(bLocal_830, 1);
				}
				Function_361();
				Function_228(&bLocal_608);
				iLocal_603 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_300(&bLocal_608) <= 3.0f)
			{
				UI_SHOW("RacePosition");
				Function_360("home02_ranch01_obj01", 7,5f, 1, 2, 0, 0, 0);
				Function_228(&bLocal_608);
				Function_228(&bLocal_611);
				Function_228(&bLocal_614);
				iLocal_603 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_357(&bLocal_614, 60.0f, bLocal_607, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_628, 0, bLocal_531, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_865))
				{
					REMOVE_BLIP(bLocal_865);
				}
				if (IS_OBJECT_VALID(bLocal_866))
				{
					DESTROY_OBJECT(bLocal_866);
				}
				if (bLocal_906)
				{
					Function_356();
				}
			}
			else
			{
				Function_346(StackVal, &bLocal_614, 135.0f, 315.0f, "Herd_return", "Herd_abandoned", &bLocal_628, 0, 0, 0, 4294967295, 1);
				if (!IS_BLIP_VALID(bLocal_865))
				{
					bLocal_865 = ADD_BLIP_FOR_OBJECT(Local_4.f_1484, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_865))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_866))
				{
					GET_OBJECT_POSITION(Local_4.f_1484, &vLocal_868);
					GET_OBJECT_ORIENTATION(Local_4.f_1484, &vLocal_871);
					bLocal_866 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bLocal_531, "HOME02RANCH01GATEWAY01", vLocal_868, vLocal_871, 1.0f, 1.0f, 1.0f, 0, Global_34573, 5, 4294967295, 0, 1, 1);
					if (IS_OBJECT_VALID(bLocal_866))
					{
					}
				}
				if (!bLocal_906)
				{
					Function_249();
					Function_345();
				}
				if (((SQUAD_IS_VALID(Local_986.f_44) && SQUAD_IS_VALID(Local_986.f_56)) && SQUAD_IS_VALID(Local_986.f_48)) && SQUAD_IS_VALID(Local_986.f_52))
				{
					if ((SQUAD_GET_SIZE(Local_986.f_44) != 0 && SQUAD_GET_SIZE(Local_986.f_48) != 0) && SQUAD_GET_SIZE(Local_986.f_52) != 0)
					{
						if (IS_BLIP_VALID(bLocal_865))
						{
							REMOVE_BLIP(bLocal_865);
						}
						if (IS_OBJECT_VALID(bLocal_866))
						{
							DESTROY_OBJECT(bLocal_866);
						}
						Function_344(Local_986.f_44);
						Function_344(Local_986.f_48);
						Function_344(Local_986.f_52);
						Function_344(Local_986.f_56);
						UI_HIDE("RacePosition");
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_249();
						Function_228(&bLocal_608);
						iLocal_603 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(Local_986.f_56))
			{
				bLocal_842 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_56);
			}
			PRINTINT(bLocal_847);
			PRINTNL();
			bLocal_847 = Function_342(bLocal_842, bLocal_847);
			PRINTINT(bLocal_847);
			PRINTNL();
			Function_341(Local_532, bLocal_847);
			PRINTINT(bLocal_842);
			PRINTNL();
			bLocal_843 = (15 - bLocal_842);
			PRINTINT(bLocal_843);
			PRINTNL();
			bLocal_849 = Local_986.f_76;
			Global_34165.f_124 = bLocal_849;
			PRINTINT(Global_34165.f_124);
			PRINTNL();
			bLocal_850 = Local_986.f_80;
			Global_34165.f_128 = bLocal_850;
			PRINTINT(Global_34165.f_128);
			PRINTNL();
			PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
			PRINTNL();
			iLocal_617[1] = 1;
			Function_228(&bLocal_608);
			iLocal_602 = 2;
			iLocal_603 = 0;
			break;
	}
	return;
}

void Function_563() //Position: 0x2361E / 144926
{
	SQUAD_FLOCK_ADD_EXTERNAL_ATTRACTION_PATH(Local_986.f_44, Local_986.f_60, Local_986.f_12, 1000.0f, 0,85f, 1.0f, 3.0f);
	return;
}

void Function_564() //Position: 0x23642 / 144962
{
	if (!SQUAD_IS_VALID(Local_4.f_640))
	{
		Function_320();
		if (SQUAD_IS_VALID(Local_4.f_640))
		{
			Function_319(Local_4.f_640, 0);
			Function_318(Local_4.f_640, 3);
			Function_316(Local_4.f_640, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
			{
				SET_ACTORS_HORSE(bLocal_606, (*&Local_4 + 628)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_606, (*&Local_4 + 628)[02]);
				Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1164)[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_640, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_565();
	return;
}

void Function_565() //Position: 0x236DB / 145115
{
	Function_314();
	Local_986.f_12 = Local_4.f_1772;
	if (!SQUAD_IS_VALID(Local_986.f_44))
	{
		Local_986.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_531, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_986.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_986.f_44);
			Function_311(&Local_986, bLocal_531, Local_4.f_1480, &iLocal_924, 5, 2.0f, 5,5f, 2.0f, 1);
			Function_319(Local_986.f_44, 0);
			Function_310(Local_986.f_44, 1);
			Function_309(Local_986.f_44, 0);
			Function_308(Local_986.f_44, 0);
			Function_307(Local_986.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_1016, -1.0f);
		}
	}
	return;
}

void Function_566() //Position: 0x237A7 / 145319
{
	if (Function_300(&bLocal_958) <= 0,1f)
	{
		switch (iLocal_846)
		{
			case 0x00000000:
				iLocal_846++;
				break;
			
			case 0x00000001:
				if (iLocal_603 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_846++;
					}
				}
				break;
			
			case 0x00000002:
				Function_418(1, 1, 1, 0x42340000, 0x41f00000);
				if (SQUAD_IS_VALID(Local_986.f_48) && SQUAD_IS_VALID(Local_986.f_52))
				{
					if (SQUAD_GET_SIZE(Local_986.f_48) != 0 && SQUAD_GET_SIZE(Local_986.f_52) != 0)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_606, 36.0f))
						{
							if (Function_300(&bLocal_611) <= 15.0f)
							{
								SAY_SINGLE_LINE_SCRIPTED(bLocal_606, "Home02_r1_UnclYells1", Global_34573, 0, 0, 0, 0, 0);
								Function_228(&bLocal_611);
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				iLocal_846++;
				break;
			}
	}
	return;
}

void Function_567() //Position: 0x2389B / 145563
{
	switch (iLocal_841)
	{
		case 0x00000000:
			iLocal_841++;
			break;
		
		case 0x00000001:
			iLocal_841++;
			break;
	}
	return;
}

void Function_568() //Position: 0x238CB / 145611
{
	if (!iLocal_921)
	{
		if (STREAMING_IS_WORLD_LOADED())
		{
			if (Function_326(Global_30717[1]))
			{
				Function_559(&iLocal_852);
			}
			else
			{
				iLocal_831 = 0;
				iLocal_921 = 0;
			}
		}
	}
	if (!iLocal_920)
	{
		if (STREAMING_IS_WORLD_LOADED())
		{
			if (Function_326(Global_30717[1]))
			{
				Function_587();
			}
			else
			{
				iLocal_848 = 0;
				iLocal_920 = 0;
			}
		}
	}
	if (!iLocal_919)
	{
		if (STREAMING_IS_WORLD_LOADED())
		{
			if (Function_326(Global_30717[1]))
			{
				Function_582();
			}
			else
			{
				iLocal_845 = 0;
				iLocal_919 = 0;
			}
		}
	}
	Function_339(bLocal_531);
	if (((iLocal_603 < 5 && iLocal_603 > 105) && !iLocal_603 != 104) && !iLocal_603 != 103)
	{
		Function_578(1, 0);
		Function_577();
		Function_576();
		Function_575();
		Function_574();
	}
	switch (iLocal_603)
	{
		case 0x00000000:
			Function_335(0);
			if (Function_325(&Local_532))
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
			}
			SET_ACTOR_HEALTH(bLocal_606, GET_ACTOR_MAX_HEALTH(bLocal_606));
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			iLocal_839 = 0;
			iLocal_838 = 0;
			if (IS_ACTOR_VALID(bLocal_607))
			{
				TASK_STAND_STILL(bLocal_607, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_607, true);
			}
			if (IS_ACTOR_VALID(bLocal_606))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_606);
				MEMORY_PREFER_RIDING(bLocal_606, false);
				CLEAR_ACTOR_MAX_SPEED(bLocal_606);
				if (Function_325(&Local_532))
				{
					TASK_STAND_STILL(bLocal_606, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_606, true);
				}
			}
			if (IS_ACTOR_VALID(bLocal_861))
			{
				TASK_STAND_STILL(bLocal_861, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_861, true);
			}
			if (IS_ACTOR_VALID(bLocal_862))
			{
				TASK_STAND_STILL(bLocal_862, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_862, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_327();
			bLocal_604 = Global_30717[1];
			if (!Function_326(bLocal_604))
			{
				Function_324(&Local_532);
			}
			if (Function_325(&Local_532))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_323(Global_34573, (*&Local_4 + 1132)[0], 1, 1, 1);
			}
			Function_228(&bLocal_608);
			iLocal_603 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_326(bLocal_604) || bLocal_604 != 4294967295))
			{
				Function_228(&bLocal_608);
				iLocal_603 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_403())
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				iLocal_832 = 0;
				iLocal_841 = 0;
				iLocal_846 = 0;
				iLocal_848 = 0;
				iLocal_831 = 0;
				iLocal_921 = 0;
				iLocal_920 = 0;
				iLocal_904 = 0;
				iLocal_630 = 0;
				bLocal_906 = false;
				iLocal_905 = 0;
				bLocal_907 = false;
				iLocal_914 = 0;
				iLocal_916 = 0;
				iLocal_915 = 0;
				iLocal_918 = 0;
				iLocal_923 = 0;
				Function_395(&iLocal_908);
				if (Function_325(&Local_532))
				{
					iLocal_845 = 0;
					iLocal_919 = 0;
					if (IS_VOLUME_VALID(Local_4.f_1012))
					{
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1012);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1012);
						CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_1012, 15);
					}
				}
				bLocal_842 = 15;
				bLocal_843 = false;
				PRINTINT(bLocal_842);
				PRINTNL();
				PRINTINT(bLocal_843);
				PRINTNL();
				bLocal_847 = Function_342(bLocal_842, bLocal_847);
				PRINTINT(bLocal_847);
				PRINTNL();
				Function_341(Local_532, bLocal_847);
				Local_986.f_76 = 0;
				Local_986.f_80 = 0;
				bLocal_849 = Local_986.f_76;
				bLocal_850 = Local_986.f_80;
				PRINTINT(bLocal_849);
				PRINTNL();
				PRINTINT(bLocal_850);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(bLocal_850) / TO_FLOAT(bLocal_849)));
				PRINTNL();
				bLocal_849 = Local_986.f_76;
				Global_34165.f_124 = bLocal_849;
				PRINTINT(Global_34165.f_124);
				PRINTNL();
				bLocal_850 = Local_986.f_80;
				Global_34165.f_128 = bLocal_850;
				PRINTINT(Global_34165.f_128);
				PRINTNL();
				PRINTFLOAT((TO_FLOAT(Global_34165.f_128) / TO_FLOAT(Global_34165.f_124)));
				PRINTNL();
				Function_572();
				if (IS_ACTOR_VALID(bLocal_606))
				{
					SET_ACTOR_FACTION(bLocal_606, 20);
					MEMORY_PREFER_RIDING(bLocal_606, false);
					Function_189(13, 0, 1);
				}
				if (IS_ACTOR_VALID(bLocal_861))
				{
					SET_ACTOR_HEALTH(bLocal_861, 50.0f);
					Function_323(bLocal_861, (*&Local_4 + 1132)[4], 1, 1, 1);
				}
				if (IS_ACTOR_VALID(bLocal_862))
				{
					SET_ACTOR_HEALTH(bLocal_862, 50.0f);
					Function_323(bLocal_862, (*&Local_4 + 1132)[5], 1, 1, 1);
				}
				Function_383(&(Local_671[017]), bLocal_606, "Uncle", 1, 0x5f5e100, 1);
				Function_383(&(Local_671[117]), bLocal_862, "Son", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[217]), bLocal_861, "Wife", 0, 0x5f5e100, 1);
				Function_383(&(Local_671[317]), Local_986.f_44, "Cow", 0, 0x5f5e100, 1);
				Function_382(&(Local_671[417]));
				Function_382(&(Local_671[517]));
				Function_382(&(Local_671[617]));
				Function_382(&(Local_671[717]));
				Function_378(&(Local_671[317]), 2);
				if (HUD_IS_FADED())
				{
					Function_228(&bLocal_608);
					iLocal_603 = 5;
				}
				else
				{
					if (IS_ACTOR_VALID(bLocal_606))
					{
						CLEAR_ACTOR_MIN_SPEED(bLocal_606);
						CLEAR_ACTOR_MAX_SPEED(bLocal_606);
						TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_606);
						AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_606, true);
						GET_OBJECT_POSITION((*&Local_4 + 1164)[3], &uLocal_898);
						bLocal_830 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_COORD_NONSTOP(false, &Local_4 + 1640, 1, 3212836864);
						TASK_GO_TO_COORD_NONSTOP(false, &Local_4 + 1592, 1, 3212836864);
						TASK_MOUNT(false, (*&Local_4 + 628)[02], 0, 1, 1, 32);
						TASK_FACE_COORD(false, &Local_4 + 1616, 0);
						TASK_FOLLOW_PATH(false, Local_4.f_1804, 2, 1, 0, 1, false);
						TASK_GO_NEAR_COORD(false, &uLocal_898, 1.0f, 2);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
						TASK_SEQUENCE_RELEASE(bLocal_830, 1);
						TASK_PRIORITY_SET(bLocal_606, true);
					}
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					Function_228(&bLocal_608);
					iLocal_603 = 6;
				}
				Function_244(iLocal_602);
				Function_372(StackVal, StackVal, Function_244(iLocal_602), iLocal_602, Global_30637[0], Function_247(iLocal_602), 0);
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_606) && SQUAD_IS_VALID(Local_986.f_44))
			{
				if (Function_371(bLocal_606, 1, 0x41700000) && Function_370(Local_986.f_44, 1))
				{
					if (IS_ACTOR_VALID(bLocal_861))
					{
						TASK_CLEAR(bLocal_861);
					}
					if (IS_ACTOR_VALID(bLocal_862))
					{
						TASK_CLEAR(bLocal_862);
					}
					Function_228(&bLocal_608);
					iLocal_603 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (Function_325(&Local_532))
			{
				ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1,85f, 0);
			}
			Function_323(bLocal_606, (*&Local_4 + 1132)[1], 1, 1, 1);
			CLEAR_ACTOR_MIN_SPEED(bLocal_606);
			CLEAR_ACTOR_MAX_SPEED(bLocal_606);
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_606);
			ACTOR_POP_NEXT_GAIT(bLocal_606, 2, false);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_606, true);
			GET_OBJECT_POSITION((*&Local_4 + 1164)[3], &uLocal_898);
			bLocal_830 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD_NONSTOP(false, &Local_4 + 1640, 1, 3212836864);
			TASK_GO_TO_COORD_NONSTOP(false, &Local_4 + 1592, 1, 3212836864);
			TASK_MOUNT(false, (*&Local_4 + 628)[02], 0, 1, 1, 32);
			TASK_FACE_COORD(false, &Local_4 + 1616, 0);
			TASK_FOLLOW_PATH(false, Local_4.f_1804, 2, 1, 0, 1, false);
			TASK_GO_NEAR_COORD(false, &uLocal_898, 1.0f, 2);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
			TASK_SEQUENCE_RELEASE(bLocal_830, 1);
			TASK_PRIORITY_SET(bLocal_606, true);
			Function_228(&bLocal_608);
			iLocal_603 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_228(&bLocal_608);
				iLocal_603 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
				if (IS_ACTOR_VALID(bLocal_607))
				{
					if (!IS_BLIP_VALID(bLocal_865))
					{
						bLocal_865 = ADD_BLIP_FOR_ACTOR(bLocal_607, 334, 0, 2, 0);
						if (IS_BLIP_VALID(bLocal_865))
						{
						}
					}
				}
				Function_228(&bLocal_608);
				iLocal_603 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_300(&bLocal_608) <= 5.0f)
			{
				Function_360("home02_ranch01_obj00", 7,5f, 1, 2, 0, 0, 0);
				Function_228(&bLocal_608);
				Function_228(&bLocal_611);
				Function_228(&bLocal_614);
				iLocal_603 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_478(&bLocal_614, 60.0f, 200.0f, bLocal_606, "Uncle_return", "Uncle_abandoned", &bLocal_628, 0, 0, 0, 325, 1))
			{
				if (IS_BLIP_VALID(bLocal_865))
				{
					REMOVE_BLIP(bLocal_865);
				}
				if (IS_ACTOR_VALID(bLocal_606))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_606)))
					{
						Function_189(13, 1, 1);
					}
				}
			}
			else
			{
				if (IS_ACTOR_VALID(bLocal_606))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_606)))
					{
						Function_189(13, 0, 1);
					}
				}
				if (!IS_BLIP_VALID(bLocal_865))
				{
					bLocal_865 = ADD_BLIP_FOR_ACTOR(bLocal_607, 334, 0, 2, 0);
					if (IS_BLIP_VALID(bLocal_865))
					{
					}
				}
				if (IS_ACTOR_VALID(bLocal_607))
				{
					if (GET_MOUNT(Global_34573) == bLocal_607)
					{
						if (IS_BLIP_VALID(bLocal_865))
						{
							REMOVE_BLIP(bLocal_865);
						}
						TASK_CLEAR(bLocal_607);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_249();
						Function_228(&bLocal_608);
						iLocal_603 = 9;
					}
				}
				if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
				{
					if (GET_MOUNT(Global_34573) == (*&Local_4 + 628)[02])
					{
						if (IS_BLIP_VALID(bLocal_865))
						{
							REMOVE_BLIP(bLocal_865);
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_249();
						Function_228(&bLocal_608);
						iLocal_603 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (Function_300(&bLocal_608) <= 0,5f)
			{
				Function_228(&bLocal_608);
				iLocal_603 = 10;
			}
			break;
		
		case 0x0000000A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_360("home02_ranch01_obj00a", 7,5f, 1, 2, 0, 0, 0);
				Function_228(&bLocal_608);
				Function_228(&bLocal_611);
				Function_228(&bLocal_614);
				iLocal_603 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_357(&bLocal_614, 60.0f, bLocal_607, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_628, 0, 0, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_865))
				{
					REMOVE_BLIP(bLocal_865);
				}
				if (IS_OBJECT_VALID(bLocal_866))
				{
					Function_571(bLocal_866);
				}
				if (IS_ACTOR_VALID(bLocal_607))
				{
					if (!IS_ACTOR_DEAD(bLocal_607))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_607)))
						{
							ADD_BLIP_FOR_ACTOR(bLocal_607, 334, 0, 2, 0);
						}
					}
				}
			}
			else
			{
				if (Function_478(&bLocal_614, 60.0f, 200.0f, bLocal_606, "Uncle_return", "Uncle_abandoned", &bLocal_628, 0, 0, 0, 325, 1))
				{
					if (IS_BLIP_VALID(bLocal_865))
					{
						REMOVE_BLIP(bLocal_865);
					}
					if (IS_OBJECT_VALID(bLocal_866))
					{
						Function_571(bLocal_866);
					}
					if (IS_ACTOR_VALID(bLocal_606))
					{
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_606)))
						{
							Function_189(13, 1, 1);
						}
					}
				}
				else
				{
					if (IS_ACTOR_VALID(bLocal_606))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_606)))
						{
							Function_189(13, 0, 1);
						}
					}
					if (!IS_BLIP_VALID(bLocal_865))
					{
						bLocal_865 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 1164)[2], 330, 0f, 2, 0);
						if (IS_BLIP_VALID(bLocal_865))
						{
							SET_BLIP_PRIORITY(bLocal_865, 3);
						}
					}
					if (!IS_OBJECT_VALID(bLocal_866))
					{
						GET_OBJECT_POSITION((*&Local_4 + 1164)[2], &vLocal_868);
						GET_OBJECT_ORIENTATION((*&Local_4 + 1164)[2], &vLocal_871);
						bLocal_866 = Function_570(StackVal, StackVal, StackVal, StackVal, bLocal_531, "HOME02RANCH01GATEWAY01", vLocal_868, vLocal_871, Global_34573, 2,5f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
						if (IS_OBJECT_VALID(bLocal_866))
						{
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_607))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_607)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_607));
					}
				}
				if (IS_OBJECT_VALID(bLocal_866))
				{
					if (GATEWAY_UPDATE(bLocal_866) && Function_569(Global_34573, Local_4.f_1480, 100.0f))
					{
						if (IS_BLIP_VALID(bLocal_865))
						{
							REMOVE_BLIP(bLocal_865);
						}
						if (IS_OBJECT_VALID(bLocal_866))
						{
							Function_571(bLocal_866);
						}
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_249();
						Function_228(&bLocal_608);
						iLocal_603 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(Local_986.f_56))
			{
				bLocal_842 = SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_986.f_44);
			}
			PRINTINT(bLocal_847);
			PRINTNL();
			bLocal_847 = Function_342(bLocal_842, bLocal_847);
			PRINTINT(bLocal_847);
			PRINTNL();
			Function_341(Local_532, bLocal_847);
			PRINTINT(bLocal_842);
			PRINTNL();
			bLocal_843 = (15 - bLocal_842);
			PRINTINT(bLocal_843);
			PRINTNL();
			iLocal_617[0] = 1;
			Function_228(&bLocal_608);
			iLocal_602 = 1;
			iLocal_603 = 0;
			break;
	}
	return;
}

int Function_569(bool bParam0, bool bParam1, float fParam2) //Position: 0x244B9 / 148665
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	float fVar12;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		GET_OBJECT_POSITION(bParam1, &vVar3);
		vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vVar3, StackVal) };
		UNK_0x44986367(&uVar6, GET_HEADING(bParam0));
		fVar12 = GET_ANGLE_BETWEEN_VECTORS_DEGS(&uVar6, &vVar9);
		if (fVar12 >= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_570(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, var uParam9, int iParam10, int iParam11, bool bParam12, int iParam13, var uParam14, float fParam15, float fParam16, var uParam17) //Position: 0x24504 / 148740
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

void Function_571(bool bParam0) //Position: 0x245CF / 148943
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

void Function_572() //Position: 0x24659 / 149081
{
	if (!SQUAD_IS_VALID(Local_4.f_640))
	{
		Function_320();
		if (SQUAD_IS_VALID(Local_4.f_640))
		{
			Function_319(Local_4.f_640, 0);
			Function_318(Local_4.f_640, 3);
			Function_316(Local_4.f_640, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
			{
				SET_ACTORS_HORSE(bLocal_606, (*&Local_4 + 628)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_606, (*&Local_4 + 628)[02]);
				Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1132)[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_640, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	Function_573();
	return;
}

void Function_573() //Position: 0x246F2 / 149234
{
	Function_314();
	Local_986.f_12 = Local_4.f_1772;
	if (!SQUAD_IS_VALID(Local_986.f_44))
	{
		Local_986.f_44 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_531, "COWS01_SQUAD"));
		if (SQUAD_IS_VALID(Local_986.f_44))
		{
			SQUAD_GOALS_CLEAR(Local_986.f_44);
			Function_311(&Local_986, bLocal_531, Local_4.f_1480, &iLocal_924, 5, 2.0f, 5,5f, 2.0f, 1);
			Function_319(Local_986.f_44, 0);
			Function_310(Local_986.f_44, 1);
			Function_309(Local_986.f_44, 0);
			Function_308(Local_986.f_44, 0);
			Function_307(Local_986.f_44, "AllowLassoHorseMinigame", 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_986.f_44, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_1016, -1.0f);
		}
	}
	return;
}

void Function_574() //Position: 0x247BE / 149438
{
	if (Function_300(&bLocal_958) <= 0,1f)
	{
		switch (iLocal_846)
		{
			case 0x00000000:
				iLocal_846++;
				break;
			
			case 0x00000001:
				if (iLocal_603 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_846++;
					}
				}
				break;
			
			case 0x00000002:
				Function_418(0, 0, 0, 0x42340000, 0x41f00000);
				if (Function_300(&bLocal_608) <= 10.0f)
				{
					iLocal_846++;
				}
				break;
			
			case 0x00000003:
				Function_418(1, 0, 0, 0x42340000, 0x41f00000);
				break;
			
			case 0x00000004:
				iLocal_846++;
				break;
			}
	}
	return;
}

void Function_575() //Position: 0x2486B / 149611
{
	if (IS_ACTOR_VALID(bLocal_606))
	{
		switch (iLocal_832)
		{
			case 0x00000000:
				iLocal_832++;
				break;
			
			case 0x00000001:
				if (iLocal_918)
				{
					TASK_CLEAR(bLocal_606);
					Function_228(&bLocal_940);
					iLocal_832++;
				}
				break;
			
			case 0x00000002:
				if (Function_300(&bLocal_940) <= 1.0f)
				{
					if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
					{
						bLocal_830 = TASK_SEQUENCE_OPEN();
						TASK_FACE_ACTOR(false, (*&Local_4 + 628)[02], 0, 3212836864);
						TASK_MOUNT(false, (*&Local_4 + 628)[02], 0, 1, 2, 2147483647);
						TASK_FACE_COORD(false, &Local_4 + 1616, 0);
						TASK_FOLLOW_PATH(false, Local_4.f_1804, 2, 1, 0, 1, false);
						TASK_GO_NEAR_COORD(false, &uLocal_898, 1.0f, 2);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_606, bLocal_830);
						TASK_SEQUENCE_RELEASE(bLocal_830, 1);
						TASK_PRIORITY_SET(bLocal_606, true);
					}
					iLocal_832++;
				}
				break;
			
			case 0x00000003:
				if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
				{
					if (GET_MOUNT(bLocal_606) == (*&Local_4 + 628)[02])
					{
						iLocal_832++;
					}
				}
				break;
			
			case 0x00000004:
				if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
				{
					TASK_CLEAR((*&Local_4 + 628)[02]);
				}
				iLocal_832++;
				break;
			
			case 0x00000005:
				iLocal_832++;
				break;
			}
	}
	return;
}

void Function_576() //Position: 0x249B9 / 149945
{
	switch (iLocal_841)
	{
		case 0x00000000:
			iLocal_841++;
			break;
		
		case 0x00000001:
			iLocal_841++;
			break;
	}
	return;
}

void Function_577() //Position: 0x249E9 / 149993
{
	if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
	{
		if (!IS_ACTOR_VALID(bLocal_607) || !IS_ACTOR_ALIVE(bLocal_607))
		{
			if (GET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 628)[02]))
			{
				SET_ALLOW_RIDE_BY_PLAYER((*&Local_4 + 628)[02], 0);
			}
		}
	}
	return;
}

void Function_578(bool bParam0, bool bParam1) //Position: 0x24A29 / 150057
{
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			Function_191(bLocal_607);
			if (GET_MOUNT(Global_34573) != bLocal_607)
			{
				if (GET_MOUNT(Global_34573) == (*&Local_4 + 628)[02])
				{
					iLocal_918 = 1;
					TASK_CLEAR((*&Local_4 + 628)[02]);
					bLocal_864 = bLocal_607;
					bLocal_607 = (*&Local_4 + 628)[02];
					(*&Local_4 + 628)[02] = bLocal_864;
					SET_ACTORS_HORSE(Global_34573, bLocal_607);
					Function_580(bLocal_607, 0);
					GIVE_OBJECT_TO_LAYOUT(bLocal_607, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ALLOW_RIDE_BY_AI(bLocal_607, 0);
					SET_ACTORS_HORSE(bLocal_606, (*&Local_4 + 628)[02]);
					SET_MOST_RECENT_MOUNT(bLocal_606, (*&Local_4 + 628)[02]);
					SET_ALLOW_RIDE_BY_AI((*&Local_4 + 628)[02], 1);
					GIVE_OBJECT_TO_LAYOUT((*&Local_4 + 628)[02], Local_4);
				}
				else
				{
					GIVE_OBJECT_TO_LAYOUT(bLocal_607, GET_AMBIENT_LAYOUT());
					bLocal_607 = GET_MOUNT(Global_34573);
					SET_ACTORS_HORSE(Global_34573, bLocal_607);
					Function_580(bLocal_607, 0);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bLocal_607, 1);
					GIVE_OBJECT_TO_LAYOUT(bLocal_607, FIND_NAMED_LAYOUT("PlayerLayout"));
				}
			}
		}
	}
	if (bParam1)
	{
		if (GET_MOUNT(bLocal_606) != (*&Local_4 + 628)[02])
		{
			MEMORY_PREFER_RIDING(bLocal_606, true);
			SET_ACTORS_HORSE(bLocal_606, (*&Local_4 + 628)[02]);
			Function_579(&bLocal_606, (*&Local_4 + 628)[02], 1);
		}
	}
	return;
}

void Function_579(var uParam0, bool bParam1, bool bParam2) //Position: 0x24B71 / 150385
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(*uParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			MEMORY_IDENTIFY(*uParam0, bParam1);
			Function_355(bParam1);
			vVar0 = { StackVal, StackVal, Function_355(bParam1) };
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

void Function_580(bool bParam0, int iParam1) //Position: 0x24C79 / 150649
{
	Function_581(iParam1);
	Global_12976.f_72 = bParam0;
	return;
}

void Function_581(bool bParam0) //Position: 0x24C8B / 150667
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
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
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
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "Player_SimWhistle"))
	{
		DECOR_REMOVE(Global_34573, "Player_SimWhistle");
	}
	return;
}

int Function_582() //Position: 0x24E41 / 151105
{
	switch (iLocal_845)
	{
		case 0x00000000:
			iLocal_845++;
			break;
		
		case 0x00000001:
			if (IS_GRINGO_VALID(bLocal_982[0]) && IS_GRINGO_VALID(bLocal_982[1]))
			{
				iLocal_845 = 5;
			}
			else
			{
				Function_228(&bLocal_976);
				iLocal_845++;
			}
			break;
		
		case 0x00000002:
			if (!IS_GRINGO_VALID(bLocal_982[0]))
			{
				Function_586(StackVal, StackVal, *(&Local_4 + 1688), 0, &(bLocal_982[0]));
			}
			else
			{
				iLocal_845 = 3;
			}
			if (Function_300(&bLocal_976) <= 2,5f)
			{
				LOG_ERROR("UPDATE_HITCHING_POST - The horsehitch01 gringo is out of order!!!");
				bLocal_982[0] = LOCATE_GRINGO_OF_TYPE("horsehitch", &Local_4 + 1716, 1,5f, 0);
				if (IS_GRINGO_VALID(bLocal_982[0]))
				{
				}
				Function_228(&bLocal_976);
				iLocal_845 = 3;
			}
			break;
		
		case 0x00000003:
			if (!IS_GRINGO_VALID(bLocal_982[1]))
			{
				Function_586(StackVal, StackVal, *(&Local_4 + 1688), 1, &(bLocal_982[1]));
			}
			else
			{
				iLocal_845 = 4;
			}
			if (Function_300(&bLocal_976) <= 2,5f)
			{
				LOG_ERROR("UPDATE_HITCHING_POST - The horsehitch02 gringo is out of order!!!");
				bLocal_982[1] = LOCATE_GRINGO_OF_TYPE("horsehitch", &Local_4 + 1744, 1,5f, 0);
				if (IS_GRINGO_VALID(bLocal_982[1]))
				{
				}
				Function_228(&bLocal_976);
				iLocal_845 = 4;
			}
			break;
		
		case 0x00000004:
			if (IS_GRINGO_VALID(bLocal_982[0]) && IS_GRINGO_VALID(bLocal_982[1]))
			{
				Function_245(GET_OBJECT_FROM_GRINGO(bLocal_982[0]));
				Function_583(StackVal, StackVal, Function_245(GET_OBJECT_FROM_GRINGO(bLocal_982[0])), 0, 0);
				Function_245(GET_OBJECT_FROM_GRINGO(bLocal_982[1]));
				Function_583(StackVal, StackVal, Function_245(GET_OBJECT_FROM_GRINGO(bLocal_982[1])), 0, 0);
			}
			iLocal_845++;
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_607))
			{
				if (IS_GRINGO_VALID(bLocal_982[0]))
				{
					SNAP_ACTOR_TO_GRINGO(bLocal_607, GET_OBJECT_FROM_GRINGO(bLocal_982[0]), "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(bLocal_607, bLocal_982[0], "UseCase1", true, 1);
					TASK_PRIORITY_SET(bLocal_607, true);
				}
				else
				{
					Function_323(bLocal_607, (*&Local_4 + 1132)[2], 1, 1, 1);
					TASK_STAND_STILL(bLocal_607, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_607, true);
				}
			}
			if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
			{
				if (IS_GRINGO_VALID(bLocal_982[1]))
				{
					SNAP_ACTOR_TO_GRINGO((*&Local_4 + 628)[02], GET_OBJECT_FROM_GRINGO(bLocal_982[1]), "UseCase1", true, 0, 0);
					TASK_USE_GRINGO((*&Local_4 + 628)[02], bLocal_982[1], "UseCase1", true, 1);
					TASK_PRIORITY_SET((*&Local_4 + 628)[02], true);
				}
				else
				{
					Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1132)[3], 1, 1, 1);
					TASK_STAND_STILL((*&Local_4 + 628)[02], -1.0f, 0, 0);
					TASK_PRIORITY_SET((*&Local_4 + 628)[02], true);
				}
			}
			iLocal_845++;
			break;
		
		case 0x00000006:
			iLocal_919 = 1;
			iLocal_845++;
			break;
		
		case 0x00000007:
			return 1;
			break;
	}
	return 0;
}

int Function_583(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x2519E / 151966
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_585(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
	iVar3 = 0;
	if (bParam3)
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[0], 1);
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[1], 1);
		}
	}
	else
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_584(uVar0[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar4) && !bVar4 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar4, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar4, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar4);
			}
			GRINGO_ENABLE_SPAWN(uVar0[0], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[0], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_584(uVar0[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar5) && !bVar5 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar5);
			}
			GRINGO_ENABLE_SPAWN(uVar0[1], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[1], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
	}
	return iVar3;
}

var Function_584(bool bParam0, bool bParam1) //Position: 0x252FF / 152319
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_585(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x2530C / 152332
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

void Function_586(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x253B6 / 152502
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	if (bParam3)
	{
		*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	}
	else
	{
		*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
	}
}

void Function_587() //Position: 0x25468 / 152680
{
	switch (iLocal_848)
	{
		case 0x00000000:
			iLocal_848++;
			break;
		
		case 0x00000001:
			iLocal_848++;
			break;
		
		case 0x00000002:
			iLocal_848++;
			break;
		
		case 0x00000003:
			iLocal_848++;
			break;
		
		case 0x00000004:
			iLocal_848++;
			break;
		
		case 0x00000005:
			iLocal_848++;
			break;
	}
	return;
}

void Function_588() //Position: 0x254DC / 152796
{
	switch (iLocal_603)
	{
		case 0x00000006:
			Function_327();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(64);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_202(1, 0, 1);
			Function_637(&Local_532, 1);
			bLocal_531 = CREATE_LAYOUT("home02_ranch01_DynamicLayout");
			Function_636();
			AUDIO_SET_MAX_CREATURE_FOOTSTEP_UPDATES(15);
			Function_634("NRT_SONG_02", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			Function_632(0, 0);
			Function_315(&bLocal_608);
			Function_315(&bLocal_976);
			iLocal_603 = 7;
			break;
		
		case 0x00000007:
			if (Function_616())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_614();
				}
				if (!Function_325(&Local_532))
				{
					iLocal_603 = 8;
				}
				else
				{
					iLocal_603 = 11;
				}
			}
			break;
		
		case 0x00000008:
			iLocal_839 = 0;
			iLocal_838 = 0;
			iLocal_845 = 0;
			iLocal_848 = 0;
			iLocal_831 = 0;
			iLocal_921 = 0;
			iLocal_920 = 0;
			iLocal_919 = 0;
			Function_323(Global_34573, (*&Local_4 + 1132)[0], 1, 1, 1);
			if (IS_ACTOR_VALID(bLocal_606))
			{
				ACTOR_DISABLE_WEAPON_RENDER(bLocal_606, 1, 1);
				TASK_CLEAR(bLocal_606);
				TASK_STAND_STILL(bLocal_606, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_606, true);
				Function_323(bLocal_606, (*&Local_4 + 1132)[1], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_607))
			{
				TASK_CLEAR(bLocal_607);
				TASK_STAND_STILL(bLocal_607, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_607, true);
				Function_323(bLocal_607, (*&Local_4 + 1132)[2], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_861))
			{
				SET_ACTOR_HEALTH(bLocal_861, 50.0f);
				Function_323(bLocal_861, (*&Local_4 + 1132)[4], 1, 1, 1);
				TASK_STAND_STILL(bLocal_861, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_861, true);
			}
			if (IS_ACTOR_VALID(bLocal_862))
			{
				SET_ACTOR_HEALTH(bLocal_862, 50.0f);
				Function_323(bLocal_862, (*&Local_4 + 1132)[5], 1, 1, 1);
				TASK_STAND_STILL(bLocal_862, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_862, true);
			}
			if (IS_VOLUME_VALID(Local_4.f_1012))
			{
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1012);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_1012);
				CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_1012, 15);
			}
			iLocal_603 = 9;
			break;
		
		case 0x00000009:
			if (STREAMING_IS_WORLD_LOADED() && (Function_326(Global_30717[1]) || bLocal_604 != 4294967295))
			{
				if (Function_403())
				{
					Function_613();
					Function_228(&bLocal_608);
					Function_228(&bLocal_976);
					iLocal_603 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_582() || Function_300(&bLocal_608) < 5.0f)
			{
				if (Function_595("$/cutscene/UNCLE_01/UNCLE_01", &Local_595, &Local_532, &iLocal_602, 158582, 158510, 158430, 158323, 158266, 158170, 0, 1, 1, 2, 2, 0, 1))
				{
					Function_228(&bLocal_608);
					Function_228(&bLocal_976);
					iLocal_603 = 11;
				}
			}
			break;
		
		case 0x0000000B:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_605 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_189(13, 0, 1);
			SET_CRIPPLE_ENABLE(bLocal_606, 0);
			SET_ACTOR_FACTION(bLocal_606, 20);
			AI_BEHAVIOR_SET_ALLOW(bLocal_606, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_606, 50.0f);
			SET_ACTOR_HEALTH(bLocal_606, GET_ACTOR_MAX_HEALTH(bLocal_606));
			MEMORY_PREFER_RIDING(bLocal_606, false);
			RESET_ACTOR_GAITS(bLocal_607, 0);
			TASK_PRIORITY_SET(bLocal_607, true);
			TASK_STAND_STILL(bLocal_607, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_607, 50.0f);
			SET_ACTOR_HEALTH(bLocal_607, GET_ACTOR_MAX_HEALTH(bLocal_607));
			SET_ALLOW_RIDE_BY_AI(bLocal_607, 0);
			Function_315(&bLocal_940);
			Function_315(&bLocal_943);
			Function_315(&bLocal_946);
			Function_315(&bLocal_955);
			Function_315(&bLocal_949);
			Function_315(&bLocal_958);
			Function_315(&bLocal_961);
			Function_315(&bLocal_952);
			Function_315(&bLocal_964);
			Function_315(&bLocal_967);
			Function_315(&bLocal_970);
			Function_315(&iLocal_973);
			Function_315(&bLocal_979);
			Function_634("NRT_SONG_02", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			Function_593(&uLocal_631, bLocal_531);
			Function_315(&bLocal_611);
			Function_315(&bLocal_614);
			iLocal_602 = 0;
			iLocal_603 = 0;
			Function_590(&Local_532, &iLocal_602, &iLocal_603);
			Function_589(StackVal, StackVal, StackVal, StackVal, StackVal, Function_614(), Local_532);
			switch (iLocal_602)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000003:
					break;
				
				case 0x00000004:
					break;
				
				case 0x00000005:
					break;
				
				case 0x00000006:
					break;
				
				case 0x00000007:
					break;
				
				case 0x00000008:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_589(struct<25> Param0) //Position: 0x2590E / 153870
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_602 = 0;
			break;
		
		case 0x00000002:
			iLocal_602 = 1;
			break;
		
		case 0x00000003:
			iLocal_602 = 2;
			break;
		
		case 0x00000004:
			iLocal_602 = 3;
			break;
		
		case 0x00000005:
			iLocal_602 = 4;
			break;
		
		case 0x00000006:
			iLocal_602 = 5;
			break;
		
		case 0x00000007:
			iLocal_602 = 6;
			break;
		
		case 0x00000008:
			iLocal_602 = 7;
			break;
		
		case 0x00000009:
			iLocal_602 = 8;
			break;
		
		case 0x0000000A:
			iLocal_602 = 101;
			break;
	}
}

void Function_590(int iParam0, var uParam1, int iParam2) //Position: 0x259A3 / 154019
{
	if (Function_325(iParam0))
	{
		*uParam1 = Function_592(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_591();
	}
	return;
}

void Function_591() //Position: 0x259D7 / 154071
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

var Function_592(int iParam0) //Position: 0x25A28 / 154152
{
	if (Function_325(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

int Function_593(var uParam0, bool bParam1) //Position: 0x25A40 / 154176
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_594(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_594(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_594(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_594(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_594(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_594(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_594(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_594(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_594(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_594(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_594(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_594(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_594(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_594(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x260E0 / 155872
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

bool Function_595(bool bParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0x261A3 / 156067
{
	if (!bParam15)
	{
		Function_603(iParam1, uParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*uParam3 != 99 && (Function_325(iParam2) || iParam2->f_24 < 1))
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
				Call_Loc(uParam4);
				Global_63097 = 1;
				if (DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen"))
				{
					DECOR_REMOVE(Global_34573, "globalcutloadscreen");
				}
				Function_228(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_602())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_601(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(uParam4);
						Call_Loc(uParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_228(iParam1 + 4);
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
					Function_601(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_300(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_300(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(Global_34573, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(uParam5);
					if (StackVal)
					{
						Function_599(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_601(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_228(iParam1 + 4);
						*iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(uParam6);
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
						Function_598(1.0f);
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
				Call_Loc(uParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (bParam16)
					{
						Function_596();
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
				Call_Loc(uParam8);
				if (StackVal)
				{
					Function_279(1);
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
				Call_Loc(uParam9);
				if (StackVal)
				{
					Call_Loc(uParam7);
					if (StackVal)
					{
						Global_63097 = 0;
						*iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && *uParam3 == 99) && !Function_325(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_596() //Position: 0x267B7 / 157623
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_597();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_597() //Position: 0x267FC / 157692
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_598(bool bParam0) //Position: 0x2680E / 157710
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

void Function_599(bool bParam0, bool bParam1) //Position: 0x2682B / 157739
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
			if ((bVar3 == Global_34573 && !Function_600(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_600(bool bParam0) //Position: 0x268AB / 157867
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

int Function_601(bool bParam0) //Position: 0x268DA / 157914
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

bool Function_602() //Position: 0x26992 / 158098
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

void Function_603(var uParam0, var uParam1) //Position: 0x269CC / 158156
{
	Function_298(uParam0, uParam1, 0);
	return;
}

int Function_604() //Position: 0x269DA / 158170
{
	switch (iLocal_602)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			else
			{
				Function_323(Global_34573, (*&Local_4 + 1132)[0], 1, 1, 1);
				Function_323(bLocal_606, (*&Local_4 + 1132)[1], 1, 1, 1);
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_605() //Position: 0x26A3A / 158266
{
	switch (iLocal_602)
	{
		case 0x00000063:
			Function_278(2, 1, 0, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_278(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

int Function_606() //Position: 0x26A73 / 158323
{
	switch (iLocal_602)
	{
		case 0x00000063:
			Function_323(Global_34573, (*&Local_4 + 1132)[0], 0, 1, 0);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 2,5f, 0);
			TASK_GO_NEAR_COORD(bLocal_606, &Local_4 + 1640, 1,5f, true);
			TASK_PRIORITY_SET(bLocal_606, true);
			ACTOR_POP_NEXT_GAIT(bLocal_606, 1, false);
			ACTOR_DISABLE_WEAPON_RENDER(bLocal_606, 1, 0);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_607() //Position: 0x26ADE / 158430
{
	switch (iLocal_602)
	{
		case 0x00000063:
			if (!Function_608() && !Function_397(&bLocal_539))
			{
				return 0;
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

bool Function_608() //Position: 0x26B0E / 158478
{
	Function_402(&Local_4 + 4, 977, 2, 0);
	if (Function_397(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

int Function_609() //Position: 0x26B2E / 158510
{
	switch (iLocal_602)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(-78,897f, 118,84f, 1394,355f, 0,057f, -0,052f, 0,997f);
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_610() //Position: 0x26B76 / 158582
{
	switch (iLocal_602)
	{
		case 0x00000063:
			Function_294(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_611(StackVal, StackVal, bLocal_531, *(&Global_3422[5540] + 52), &Local_4 + 828[0], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_294(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_611(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0x26BD2 / 158674
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	
	vVar2.x = uParam6;
	vVar2.y = uParam7;
	vVar2.z = uParam8;
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
				Function_612(bVar1, bParam0);
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

void Function_612(bool bParam0, bool bParam1) //Position: 0x26E40 / 159296
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

void Function_613() //Position: 0x26EB5 / 159413
{
	if (!SQUAD_IS_VALID(Local_4.f_640))
	{
		Function_320();
		if (SQUAD_IS_VALID(Local_4.f_640))
		{
			Function_319(Local_4.f_640, 0);
			Function_318(Local_4.f_640, 3);
			Function_316(Local_4.f_640, 0, 0, 0);
			if (IS_ACTOR_VALID((*&Local_4 + 628)[02]))
			{
				SET_ACTORS_HORSE(bLocal_606, (*&Local_4 + 628)[02]);
				SET_MOST_RECENT_MOUNT(bLocal_606, (*&Local_4 + 628)[02]);
				Function_323((*&Local_4 + 628)[02], (*&Local_4 + 1132)[3], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_640, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	return;
}

struct<8> Function_614() //Position: 0x26F4B / 159563
{
	var uVar0;
	
	Function_409(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("home02_ranch01_layout");
	Local_4.f_840 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 828)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -78,491f, 117,077f, 1397,656f, 0.0f, -42,47728f, 0.0f, 10.0f, 10.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_840, (*&Local_4 + 828)[0]);
	(*&Local_4 + 828)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVol", 2, -2178,147f, 18,35769f, 2612.0f, 0.0f, 0.0f, 0.0f, 6,946649f, 4,107396f, 5,17459f);
	ADD_TO_VOLUME_SET(Local_4.f_840, (*&Local_4 + 828)[1]);
	Local_4.f_864 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary01_set");
	(*&Local_4 + 844)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_01", 2, -77,43976f, 116,1219f, 1474,599f, 0.0f, 63,79972f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_864, (*&Local_4 + 844)[0]);
	(*&Local_4 + 844)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_02", 2, -95,21734f, 116,1219f, 1352,978f, 0.0f, -13,11305f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_864, (*&Local_4 + 844)[1]);
	(*&Local_4 + 844)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_03", 2, 47,85487f, 116,1219f, 1402,809f, 0.0f, -34,54829f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_864, (*&Local_4 + 844)[2]);
	(*&Local_4 + 844)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_04", 2, 2,922384f, 116,1219f, 1319,958f, 0.0f, 66,26939f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_864, (*&Local_4 + 844)[3]);
	Local_4.f_896 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary02_set");
	(*&Local_4 + 868)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_01", 2, -43,5611f, 116,1219f, 1446,754f, 0.0f, 72,3269f, 0.0f, 100.0f, 50.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_896, (*&Local_4 + 868)[0]);
	(*&Local_4 + 868)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_02", 2, -105,8501f, 116,1219f, 1325,364f, 0.0f, 1,077084f, 0.0f, 100.0f, 50.0f, 400.0f);
	ADD_TO_VOLUME_SET(Local_4.f_896, (*&Local_4 + 868)[1]);
	(*&Local_4 + 868)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_03", 2, -26,43447f, 116,1219f, 1185,509f, 0.0f, -75,04837f, 0.0f, 100.0f, 50.0f, 400.0f);
	ADD_TO_VOLUME_SET(Local_4.f_896, (*&Local_4 + 868)[2]);
	(*&Local_4 + 868)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_05", 2, 87,99709f, 116,1219f, 1422,952f, 0.0f, -23,7803f, 0.0f, 100.0f, 50.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_896, (*&Local_4 + 868)[3]);
	(*&Local_4 + 868)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_07", 2, 133,8068f, 116,1219f, 1267,991f, 0.0f, 4,478785f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_896, (*&Local_4 + 868)[4]);
	(*&Local_4 + 868)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_08", 2, 19,57761f, 112,0981f, 1231,264f, 0.0f, 85,16841f, 0.0f, 25.0f, 50.0f, 40.0f);
	ADD_TO_VOLUME_SET(Local_4.f_896, (*&Local_4 + 868)[5]);
	Local_4.f_928 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary03_set");
	(*&Local_4 + 900)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_02", 2, 310,8641f, 116,1219f, 1336,988f, 0.0f, -143,6801f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_928, (*&Local_4 + 900)[0]);
	(*&Local_4 + 900)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_03", 2, 165,5406f, 116,1219f, 1487,04f, 0.0f, 38,04403f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_928, (*&Local_4 + 900)[1]);
	(*&Local_4 + 900)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_08", 2, 325,5414f, 112,1202f, 1484,468f, 0.0f, -36,82767f, 0.0f, 100.0f, 50.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_928, (*&Local_4 + 900)[2]);
	(*&Local_4 + 900)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_09", 2, 161,141f, 116,1219f, 1196,086f, 0.0f, 49,24131f, 0.0f, 100.0f, 50.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_928, (*&Local_4 + 900)[3]);
	(*&Local_4 + 900)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_11", 2, 47,74635f, 116,1219f, 1359,942f, 0.0f, 46,91296f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_928, (*&Local_4 + 900)[4]);
	(*&Local_4 + 900)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary03_12", 2, 3,270323f, 116,1219f, 1224,88f, 0.0f, 155,2422f, 0.0f, 100.0f, 50.0f, 225.0f);
	ADD_TO_VOLUME_SET(Local_4.f_928, (*&Local_4 + 900)[5]);
	Local_4.f_968 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary04_set");
	(*&Local_4 + 932)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_02", 2, 294,3044f, 116,1219f, 1324,625f, 0.0f, -124,5245f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 932)[0]);
	(*&Local_4 + 932)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_03", 2, 169,1626f, 116,1219f, 1466,114f, 0.0f, 36,79566f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 932)[1]);
	(*&Local_4 + 932)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_04", 2, 266,5821f, 116,1219f, 1572,933f, 0.0f, -125,1554f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 932)[2]);
	(*&Local_4 + 932)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_05", 2, 443,938f, 116,1219f, 1447,521f, 0.0f, -131,5285f, 0.0f, 100.0f, 50.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 932)[3]);
	(*&Local_4 + 932)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_06", 2, 446,7664f, 116,1219f, 1704,494f, 0.0f, -125,7935f, 0.0f, 100.0f, 50.0f, 400.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 932)[4]);
	(*&Local_4 + 932)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_07", 2, 564,9994f, 116,1219f, 1567,985f, 0.0f, 40,26626f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 932)[5]);
	(*&Local_4 + 932)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_08", 2, 494,6021f, 116,1219f, 1626,635f, 0.0f, -38,44043f, 0.0f, 100.0f, 50.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 932)[6]);
	(*&Local_4 + 932)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary04_12", 2, 152,0407f, 128,0751f, 1311,893f, 0.0f, 132,8004f, 0.0f, 100.0f, 50.0f, 225.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 932)[7]);
	Local_4.f_1008 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary05_set");
	(*&Local_4 + 972)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_01", 2, 294,3044f, 116,1219f, 1324,625f, 0.0f, -124,5245f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[0]);
	(*&Local_4 + 972)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_02", 2, 169,1626f, 116,1219f, 1466,114f, 0.0f, 36,79566f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[1]);
	(*&Local_4 + 972)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_03", 2, 266,5821f, 116,1219f, 1572,933f, 0.0f, -125,1554f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[2]);
	(*&Local_4 + 972)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_04", 2, 443,938f, 116,1219f, 1447,521f, 0.0f, -131,5285f, 0.0f, 100.0f, 50.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[3]);
	(*&Local_4 + 972)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_05", 2, 446,7664f, 116,1219f, 1704,494f, 0.0f, -125,7935f, 0.0f, 100.0f, 50.0f, 400.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[4]);
	(*&Local_4 + 972)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_06", 2, 564,9994f, 116,1219f, 1567,985f, 0.0f, 40,26626f, 0.0f, 100.0f, 50.0f, 200.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[5]);
	(*&Local_4 + 972)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_07", 2, 637,413f, 116,1219f, 1702,428f, 0.0f, -27,79716f, 0.0f, 100.0f, 50.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[6]);
	(*&Local_4 + 972)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary05_08", 2, 152,0407f, 128,0751f, 1311,893f, 0.0f, 132,8004f, 0.0f, 100.0f, 50.0f, 225.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[7]);
	Local_4.f_1012 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_hitch_exclude", 2, -77,96362f, 116,8612f, 1419,65f, 0.0f, -1,26219f, 0.0f, 10.0f, 10.0f, 10.0f);
	Local_4.f_1016 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander00", 3, -43,96908f, 118,3659f, 1424,019f, 0.0f, 20.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	Local_4.f_1020 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander01", 3, -28,22684f, 115,8573f, 1384f, 0.0f, 20.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	Local_4.f_1024 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander02", 3, 63,1501f, 114,9941f, 1253,143f, 0.0f, 20.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	Local_4.f_1028 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander02a", 3, 265,0791f, 116,7787f, 1454,388f, 0.0f, 20.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	Local_4.f_1032 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander03", 3, 564.0f, 105,4117f, 1696.0f, 0.0f, 20.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	Local_4.f_1036 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander04", 3, 564.0f, 105,4117f, 1696.0f, 0.0f, 20.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	Local_4.f_1040 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_wander04a", 3, 379,3721f, 110,658f, 1520,696f, 0.0f, -0,8191981f, 0.0f, 30.0f, 10.0f, 30.0f);
	Local_4.f_1044 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective01a", 3, -28,22684f, 115,8573f, 1384f, 0.0f, 20.0f, 0.0f, 15.0f, 10.0f, 15.0f);
	Local_4.f_1048 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective01", 2, -27,02115f, 116,9494f, 1407,295f, 0.0f, -38,87104f, 0.0f, 100.0f, 30.0f, 8.0f);
	Local_4.f_1052 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective02", 2, 40,26625f, 115,9082f, 1252,453f, 0.0f, -90,96569f, 0.0f, 90.0f, 30.0f, 8.0f);
	Local_4.f_1056 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective02a", 3, 63,0499f, 115,2815f, 1253,115f, 0.0f, 20.0f, 0.0f, 15.0f, 10.0f, 15.0f);
	Local_4.f_1060 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective03", 2, 251,1784f, 121,4745f, 1426,427f, 0.0f, 222,6671f, 0.0f, 1000.0f, 60.0f, 10.0f);
	Local_4.f_1064 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective03a", 2, 302,0987f, 114,7047f, 1478,322f, 0.0f, -130,1763f, 0.0f, 1000.0f, 60.0f, 10.0f);
	Local_4.f_1068 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_train_objective01", 2, 481,167f, 101,3594f, 1522,599f, 0.0f, -63,24207f, 0.0f, 60.0f, 40.0f, 10.0f);
	Local_4.f_1072 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective04a", 3, 564.0f, 105,4117f, 1696.0f, 0.0f, 20.0f, 0.0f, 15.0f, 10.0f, 15.0f);
	Local_4.f_1076 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective04", 2, 566,2997f, 105,3298f, 1706,871f, 0.0f, 229,816f, 0.0f, 1000.0f, 60.0f, 10.0f);
	Local_4.f_1080 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_robbery_start", 2, 368,947f, 118,2792f, 1585,581f, 0.0f, -57,21249f, 0.0f, 60.0f, 30.0f, 10.0f);
	Local_4.f_1084 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_robbery_start1", 2, 328,6071f, 118,2792f, 1611,566f, 0.0f, -57,21249f, 0.0f, 60.0f, 30.0f, 10.0f);
	Local_4.f_1088 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_train_slow", 2, 549,5928f, 88,81026f, 1487,682f, 0.0f, -64,82398f, 0.0f, 60.0f, 30.0f, 10.0f);
	Local_4.f_1092 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_train_stop", 2, 576,7399f, 86,60691f, 1472,363f, 0.0f, -64,82398f, 0.0f, 60.0f, 30.0f, 10.0f);
	Local_4.f_1096 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_killzone", 2, 374,5449f, 114,1741f, 1587,43f, 0.0f, -148,4611f, 0.0f, 300.0f, 60.0f, 5.0f);
	Local_4.f_1100 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_release_attach", 2, 387,6208f, 112,5812f, 1577,911f, 0.0f, -54,23452f, 0.0f, 60.0f, 30.0f, 10.0f);
	Local_4.f_1104 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_train_robbery", 2, 321,9535f, 118,6778f, 1616,041f, 0.0f, -56,32277f, 0.0f, 60.0f, 30.0f, 10.0f);
	Local_4.f_1108 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_train_robbery1", 2, 290,4163f, 119,7052f, 1640,983f, 0.0f, -49,56361f, 0.0f, 60.0f, 30.0f, 10.0f);
	Local_4.f_1112 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_train_right", 2, 561,9257f, 97,671f, 1599,453f, 0.0f, 29,90425f, 0.0f, 250.0f, 100.0f, 200.0f);
	Local_4.f_1116 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_companion", 2, 363,594f, 117,9788f, 1530,358f, 0.0f, -130,1763f, 0.0f, 1000.0f, 60.0f, 10.0f);
	Local_4.f_1120 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_companion02", 2, 537,7927f, 105,3298f, 1682,794f, 0.0f, 229,816f, 0.0f, 1000.0f, 60.0f, 10.0f);
	Local_4.f_1124 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_no_negative", 2, 529,2573f, 105,3298f, 1675,586f, 0.0f, 229,816f, 0.0f, 1000.0f, 60.0f, 10.0f);
	Local_4.f_1128 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 1132)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -79,04177f, 117,053f, 1397,965f, 0.0f, 179,1581f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1132)[0], Local_4.f_1128);
	(*&Local_4 + 1132)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -77,4997f, 116,99f, 1398,61f, 0.0f, 176,714f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1132)[1], Local_4.f_1128);
	(*&Local_4 + 1132)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -77,191f, 116,861f, 1417,587f, 0.0f, -89,185f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1132)[2], Local_4.f_1128);
	(*&Local_4 + 1132)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart01", -77,50741f, 116,8689f, 1419,258f, 0.0f, -91,129f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1132)[3], Local_4.f_1128);
	(*&Local_4 + 1132)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "WifeStart01", -112.0f, 118,8691f, 1376f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1132)[4], Local_4.f_1128);
	(*&Local_4 + 1132)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "SonStart01", -100.0f, 118,8691f, 1348f, 0.0f, 233,661f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1132)[5], Local_4.f_1128);
	Local_4.f_1160 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 1164)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -56f, 115,8748f, 1428f, 0.0f, -117,9832f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1164)[0], Local_4.f_1160);
	(*&Local_4 + 1164)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -32f, 116,8572f, 1416f, 0.0f, 238,0081f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1164)[1], Local_4.f_1160);
	(*&Local_4 + 1164)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart02", -56f, 115,8574f, 1432f, 0.0f, -51,08987f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1164)[2], Local_4.f_1160);
	(*&Local_4 + 1164)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart02", -36f, 116,805f, 1412f, 0.0f, -106,3792f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1164)[3], Local_4.f_1160);
	Local_4.f_1184 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 1188)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -36f, 116,0952f, 1400f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1188)[0], Local_4.f_1184);
	(*&Local_4 + 1188)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -21,18083f, 116,2554f, 1367,744f, 0.0f, 152,2313f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1188)[1], Local_4.f_1184);
	(*&Local_4 + 1188)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart03", -28f, 116,6969f, 1404f, 0.0f, -2,787435f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1188)[2], Local_4.f_1184);
	(*&Local_4 + 1188)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart03", -20,70103f, 116,5114f, 1371,323f, 0.0f, -221,0924f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1188)[3], Local_4.f_1184);
	Local_4.f_1208 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	(*&Local_4 + 1212)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", 31,95819f, 116,2469f, 1254,591f, 0.0f, -223,4724f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[0], Local_4.f_1208);
	(*&Local_4 + 1212)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart04", 76,47637f, 114,2674f, 1254,547f, 0.0f, 178,7364f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[1], Local_4.f_1208);
	(*&Local_4 + 1212)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart04", 32,3925f, 115,9765f, 1251,937f, 0.0f, -92,86956f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[2], Local_4.f_1208);
	(*&Local_4 + 1212)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart04", 73,2344f, 113,9259f, 1251,831f, 0.0f, -524,5639f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[3], Local_4.f_1208);
	Local_4.f_1232 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", Local_4, 8, 0);
	(*&Local_4 + 1236)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart05", 251,3792f, 117,8141f, 1447,177f, 0.0f, -491,8142f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1236)[0], Local_4.f_1232);
	(*&Local_4 + 1236)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart05", 283,1788f, 116,11f, 1464,973f, 0.0f, -133,4802f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1236)[1], Local_4.f_1232);
	(*&Local_4 + 1236)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart05", 245,3878f, 118,793f, 1441,148f, 0.0f, -136,3993f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1236)[2], Local_4.f_1232);
	(*&Local_4 + 1236)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart05", 284,1184f, 115,5214f, 1469,944f, 0.0f, -483,6484f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1236)[3], Local_4.f_1232);
	Local_4.f_1256 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene06Set", Local_4, 8, 0);
	(*&Local_4 + 1260)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart06", 367,4276f, 111,8735f, 1506,605f, 0.0f, -487,3821f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[0], Local_4.f_1256);
	(*&Local_4 + 1260)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart06", 369,3918f, 111,5975f, 1513,996f, 0.0f, -133,4802f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[1], Local_4.f_1256);
	(*&Local_4 + 1260)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart06", 381,2094f, 111,7333f, 1504,372f, 0.0f, -124,8137f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[2], Local_4.f_1256);
	(*&Local_4 + 1260)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart06", 360,9926f, 112,1409f, 1513,445f, 0.0f, -429,9284f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[3], Local_4.f_1256);
	Local_4.f_1280 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene07Set", Local_4, 8, 0);
	(*&Local_4 + 1284)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart07", 378,9939f, 111,3469f, 1507,058f, 0.0f, -487,3821f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[0], Local_4.f_1280);
	(*&Local_4 + 1284)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart07", 369,3918f, 111,5975f, 1513,996f, 0.0f, -133,4802f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[1], Local_4.f_1280);
	(*&Local_4 + 1284)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart07", 375,0832f, 111,6728f, 1506,126f, 0.0f, -124,8137f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[2], Local_4.f_1280);
	(*&Local_4 + 1284)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart07", 368,5727f, 111,6381f, 1515,947f, 0.0f, -456,7117f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[3], Local_4.f_1280);
	Local_4.f_1304 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene08Set", Local_4, 8, 0);
	(*&Local_4 + 1308)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart08", 378,9939f, 111,3469f, 1507,058f, 0.0f, -487,3821f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1308)[0], Local_4.f_1304);
	(*&Local_4 + 1308)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart08", 369,3918f, 111,5975f, 1513,996f, 0.0f, -133,4802f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1308)[1], Local_4.f_1304);
	(*&Local_4 + 1308)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart08", 375,0832f, 111,6728f, 1506,126f, 0.0f, -124,8137f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1308)[2], Local_4.f_1304);
	(*&Local_4 + 1308)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart08", 368,5727f, 111,6381f, 1515,947f, 0.0f, -456,7117f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1308)[3], Local_4.f_1304);
	Local_4.f_1328 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	(*&Local_4 + 1332)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartLast", 544.0f, 105,6855f, 1692.0f, 0.0f, -90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1332)[0], Local_4.f_1328);
	(*&Local_4 + 1332)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStartLast", 548.0f, 105,6855f, 1691,948f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1332)[1], Local_4.f_1328);
	(*&Local_4 + 1332)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStartLast", 544,0581f, 105,6855f, 1696,058f, 0.0f, -44,86428f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1332)[2], Local_4.f_1328);
	(*&Local_4 + 1332)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStartLast", 547,5157f, 105,6919f, 1686,694f, 1,831466f, -198,9328f, 0,399791f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1332)[3], Local_4.f_1328);
	(*&Local_4 + 1332)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseEndLast1", 516.0f, 102,4f, 1788.0f, 0.0f, -224,0032f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1332)[4], Local_4.f_1328);
	(*&Local_4 + 1332)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseEndLast", 504f, 113,4431f, 1708.0f, 0.0f, -284,5552f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1332)[5], Local_4.f_1328);
	(*&Local_4 + 1332)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStartLast0", 564.0f, 106,3511f, 1672.0f, 1,831466f, -198,9328f, 0,399791f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1332)[6], Local_4.f_1328);
	Local_4.f_1364 = CREATE_OBJECTSET_IN_LAYOUT("TrainPositionSet", Local_4, 8, 0);
	(*&Local_4 + 1368)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_train00", -161,1691f, 83,83874f, 2041,517f, 0.0f, -7,118357f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1368)[0], Local_4.f_1364);
	(*&Local_4 + 1368)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_train01", 225,6972f, 116,7543f, 1737,436f, 0.0f, -35,00779f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1368)[1], Local_4.f_1364);
	(*&Local_4 + 1368)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_train02", 478,7627f, 99,96568f, 1524,154f, 0.0f, -59,75541f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1368)[2], Local_4.f_1364);
	(*&Local_4 + 1368)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_train03", 577,3911f, 86,60691f, 1473,594f, 0.0f, -55,00977f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1368)[3], Local_4.f_1364);
	(*&Local_4 + 1368)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_train04", 556,6696f, 90,2271f, 1132,15f, 0.0f, 82,45055f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1368)[4], Local_4.f_1364);
	(*&Local_4 + 1368)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_train05", 174,3599f, 109,149f, 1143,423f, 0.0f, 82,45055f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1368)[5], Local_4.f_1364);
	(*&Local_4 + 1368)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_train01B", 262,7212f, 119,4093f, 1685,038f, 0.0f, -35,00779f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1368)[6], Local_4.f_1364);
	Local_4.f_1400 = CREATE_OBJECTSET_IN_LAYOUT("Explosion01Set", Local_4, 8, 0);
	(*&Local_4 + 1404)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_explosion_01_01", 343,4506f, 117,2931f, 1605,079f, 0.0f, -38,11245f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1404)[0], Local_4.f_1400);
	(*&Local_4 + 1404)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_explosion_01_02", 348,8551f, 116,7007f, 1598,648f, 0.0f, -38,11245f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1404)[1], Local_4.f_1400);
	(*&Local_4 + 1404)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_explosion_01_03", 357,0255f, 116,0384f, 1596,717f, 0.0f, -38,11245f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1404)[2], Local_4.f_1400);
	Local_4.f_1420 = CREATE_OBJECTSET_IN_LAYOUT("Explosion02Set", Local_4, 8, 0);
	(*&Local_4 + 1424)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_explosion_02_01", 507,2043f, 95,30836f, 1511,395f, 0.0f, -38,11245f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1424)[0], Local_4.f_1420);
	(*&Local_4 + 1424)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_explosion_02_02", 512,541f, 94,20309f, 1505,868f, 0.0f, -38,11245f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1424)[1], Local_4.f_1420);
	(*&Local_4 + 1424)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_explosion_02_03", 533,4975f, 90,95316f, 1495,538f, 0.0f, -38,11245f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1424)[2], Local_4.f_1420);
	(*&Local_4 + 1424)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_explosion_02_04", 524,3633f, 92,57935f, 1503,414f, 0.0f, -38,11245f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1424)[3], Local_4.f_1420);
	(*&Local_4 + 1424)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "point_explosion_02_05", 529,5487f, 91,5033f, 1496,864f, 0.0f, -38,11245f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1424)[4], Local_4.f_1420);
	(*&Local_4 + 1424)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "point_explosion_02_06", 536,226f, 90,81466f, 1496,371f, 0.0f, -38,11245f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1424)[5], Local_4.f_1420);
	Local_4.f_1452 = CREATE_OBJECTSET_IN_LAYOUT("Outlaw01MoveSet", Local_4, 8, 0);
	(*&Local_4 + 1456)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_outlaw01_01", 454,4794f, 102,2655f, 1530,786f, 0.0f, -55,01235f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1456)[0], Local_4.f_1452);
	(*&Local_4 + 1456)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_outlaw01_02", 447,4348f, 103,2849f, 1534,506f, 0.0f, -50,97606f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1456)[1], Local_4.f_1452);
	(*&Local_4 + 1456)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_outlaw01_03", 440,3846f, 104,9577f, 1538,263f, 0.0f, -44,79415f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1456)[2], Local_4.f_1452);
	(*&Local_4 + 1456)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_outlaw01_04", 433,28f, 105,9378f, 1541,629f, 0.0f, -60,6484f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1456)[3], Local_4.f_1452);
	(*&Local_4 + 1456)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_outlaw01_05", 425,8f, 107,156f, 1546,848f, 0.0f, -54,53351f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1456)[4], Local_4.f_1452);
	Local_4.f_1480 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective00", -44f, 116,3913f, 1424f, 0.0f, -42,46535f, 0.0f);
	Local_4.f_1484 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective01", -28,14231f, 116,3307f, 1384,151f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1488 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective01a", -28f, 116,8612f, 1408f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1492 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective02", 63,0499f, 115,2815f, 1253,115f, 0.0f, -105,7594f, 0.0f);
	Local_4.f_1496 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective02b", 283,8917f, 115,3359f, 1480,856f, 0.0f, -131,4429f, 0.0f);
	Local_4.f_1500 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective02c", 443,9462f, 107,3727f, 1572,121f, 0.0f, -115,4577f, 0.0f);
	Local_4.f_1504 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective03", 564.0f, 105,477f, 1696.0f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1508 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective02a", 265,0791f, 116,7787f, 1454,388f, 0.0f, -127,9583f, 0.0f);
	Local_4.f_1512 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective04", 564.0f, 105,477f, 1696.0f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1516 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective04a", 379,3721f, 110,658f, 1520,696f, 0.0f, -115,4577f, 0.0f);
	*(&Local_4 + 1520) = { 665,1009f, 79,02516f, 1404,823f };
	*(&Local_4 + 1520 + 12) = { 0.0f, 59,83783f, 0.0f };
	*(&Local_4 + 1544) = { 331,2321f, 117,0033f, 1605,253f };
	*(&Local_4 + 1544 + 12) = { 0.0f, -42,46535f, 0.0f };
	*(&Local_4 + 1568) = { 463,4287f, 102,1639f, 1530,429f };
	*(&Local_4 + 1568 + 12) = { 0.0f, -42,46535f, 0.0f };
	*(&Local_4 + 1592) = { -79,274f, 116,8612f, 1417,628f };
	*(&Local_4 + 1592 + 12) = { 0.0f, -42,46535f, 0.0f };
	*(&Local_4 + 1616) = { -92.0f, 117,2748f, 1432f };
	*(&Local_4 + 1616 + 12) = { 0.0f, -42,46535f, 0.0f };
	*(&Local_4 + 1640) = { -77,10766f, 116,8399f, 1405,833f };
	*(&Local_4 + 1640 + 12) = { 0.0f, -42,46535f, 0.0f };
	*(&Local_4 + 1664) = { 507,1359f, 97,22198f, 1844,348f };
	*(&Local_4 + 1664 + 12) = { 0.0f, -42,46535f, 0.0f };
	*(&Local_4 + 1688) = { -75,8551f, 117,2605f, 1418,279f };
	*(&Local_4 + 1688 + 12) = { 0.0f, -89,71921f, 0.0f };
	Local_4.f_1712 = CREATE_POINT_IN_LAYOUT(Local_4, "point_horse_hitch", -75,8551f, 117,2605f, 1418,279f, 0.0f, -89,71921f, 0.0f);
	*(&Local_4 + 1716) = { -75,861f, 117,708f, 1417,575f };
	*(&Local_4 + 1716 + 12) = { 0.0f, 267.0f, 0.0f };
	Local_4.f_1740 = CREATE_POINT_IN_LAYOUT(Local_4, "point_horse_hitch01", -75,861f, 117,708f, 1417,575f, 0.0f, 267.0f, 0.0f);
	*(&Local_4 + 1744) = { -75,837f, 117,651f, 1418,991f };
	*(&Local_4 + 1744 + 12) = { 0.0f, 268,941f, 0.0f };
	Local_4.f_1768 = CREATE_POINT_IN_LAYOUT(Local_4, "point_horse_hitch02", -75,837f, 117,651f, 1418,991f, 0.0f, 268,941f, 0.0f);
}

var C­à8BáÈD»ÏC¹MBß1ëD½'cCÂ4BÜÙD¾Ï&CÊ"`BÙ/DÀACÓ*ÙBØMDÂËTCáÿ/BÕñPDÆÍCï	BÛ DÉÁ,CýÌìBääàDÌó;Dø>BßéyDÏ  D  BØ¥ÞDÑ  D(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67) //Position: 0x29DC3 / 171459
{
	(StackVal > StackVal - 11116)->f_54144 = StackVal;
	StackVal->f_3840 = StackVal;
	(StackVal - 11608)->f_54524 = StackVal;
	return StackVal;
	StackVal->f_5120 = StackVal;
	((StackVal * StackVal - 11166))->f_54912 = StackVal;
	Local_4.f_1784 = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, StackVal, StackVal);
}

bool Function_616() //Position: 0x2A3B5 / 172981
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_631(0))
		{
			return 0;
		}
		if (!Function_608())
		{
			return 0;
		}
		if (!Function_397(&bLocal_539))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_606))
		{
			bLocal_606 = Function_623(13, 0, 1, -77,4997f, 116,99f, 1398,61f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_606, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_861))
		{
			bLocal_861 = Function_623(11, 0, 1, -112.0f, 118,869f, 1376.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_861, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_862))
		{
			bLocal_862 = Function_623(12, 0, 1, -100.0f, 118,869f, 1348.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_862, 1))
		{
			return 0;
		}
		if (!Function_622())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_607))
		{
			bLocal_607 = Function_617(1, 1, -77,341f, 116,861f, 1417,13f, -103,447f, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_607, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_617(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0x2A4CD / 173261
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
	if (Global_3381 || Function_237(1))
	{
		Function_621(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_622())
		{
			return "";
		}
	}
	if (!Function_619())
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
		Function_245(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_245(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_245(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_245(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_618(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_618(StackVal, StackVal, vVar5, 0, 1, 1);
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
		Function_317(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
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

var Function_618(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2A825 / 174117
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

bool Function_619() //Position: 0x2A8C0 / 174272
{
	if (Function_620() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_620() //Position: 0x2A8D6 / 174294
{
	return Global_12976.f_152;
}

void Function_621(var uParam0, bool bParam1, bool bParam2) //Position: 0x2A8E1 / 174305
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

bool Function_622() //Position: 0x2A90E / 174350
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

bool Function_623(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x2A92E / 174382
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
		Function_189(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_630(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_626(StackVal, iParam7);
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
		Function_625(bVar1, 0, 0, 0, 0);
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
		Function_624(bVar1, 0);
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

void Function_624(bool bParam0, bool bParam1) //Position: 0x2AE18 / 175640
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_625(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x2AE38 / 175672
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

bool Function_626(int iParam0, bool bParam1) //Position: 0x2AE8C / 175756
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_312(iParam0))
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
						Function_627(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_627(bool bParam0, bool bParam1) //Position: 0x2AF0C / 175884
{
	Function_629(bParam0);
	Function_628(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_628(bool bParam0) //Position: 0x2AF32 / 175922
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_629(bool bParam0) //Position: 0x2AF56 / 175958
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

bool Function_630(int iParam0, bool bParam1) //Position: 0x2B025 / 176165
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

bool Function_631(bool bParam0) //Position: 0x2B0B8 / 176312
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

void Function_632(var uParam0, int iParam1) //Position: 0x2B0E6 / 176358
{
	Function_195(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_633(StackVal, iParam1);
	}
	return;
}

void Function_633(bool bParam0, int iParam1) //Position: 0x2B117 / 176407
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_195(bParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_193(bParam0, iVar0, iParam1);
	return;
}

void Function_634(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2B13C / 176444
{
	AUDIO_MUSIC_FORCE_TRACK(uParam0, Function_635(iParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

var Function_635(int iParam0) //Position: 0x2B158 / 176472
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

void Function_636() //Position: 0x2B695 / 177813
{
	Function_411(&bLocal_539, "home02ranch01", 10, 0);
	Function_402(&bLocal_539, 1008, 2, 0);
	Function_402(&bLocal_539, 1009, 2, 0);
	Function_402(&bLocal_539, 1010, 2, 0);
	Function_402(&bLocal_539, 1011, 2, 0);
	Function_402(&bLocal_539, 1175, 2, 0);
	Function_402(&bLocal_539, 1176, 2, 0);
	Function_402(&bLocal_539, 1169, 2, 0);
	Function_402(&bLocal_539, 1168, 2, 0);
	Function_402(&bLocal_539, 1160, 2, 0);
	Function_402(&bLocal_539, 1173, 2, 0);
	Function_402(&bLocal_539, 201, 2, 0);
	Function_411(&bLocal_539, "wave_goodbye", 5, 0);
	Function_411(&bLocal_539, "custom/wave_goodbye", 8, 0);
	Function_411(&bLocal_539, "home02_ranch01_baggage01", 6, 0);
	Function_411(&bLocal_539, "home02_ranch01_boxcar04_01", 6, 0);
	return;
}

void Function_637(int iParam0, bool bParam1) //Position: 0x2B7BA / 178106
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_643(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_325(iParam0))
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
	if (!Function_325(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_223();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_249();
	Function_597();
	Function_238("");
	Function_642(0);
	Function_641();
	Function_216();
	Function_215();
	ENABLE_JOURNAL_REPLAY(0);
	Function_640();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_336(0, 0x40400000);
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
	Function_639(13);
	Function_639(14);
	Function_639(25);
	Function_639(24);
	Function_639(12);
	Function_639(27);
	Function_639(26);
	Function_639(15);
	Function_638();
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

void Function_638() //Position: 0x2BBDE / 179166
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

void Function_639(int iParam0) //Position: 0x2BC52 / 179282
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_640() //Position: 0x2BC72 / 179314
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

void Function_641() //Position: 0x2BCAF / 179375
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_642(int iParam0) //Position: 0x2BCC3 / 179395
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_219())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_643(int iParam0, int iParam1) //Position: 0x2BCF8 / 179448
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
			Function_644(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_644(int iParam0) //Position: 0x2BD7A / 179578
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

void Function_645() //Position: 0x2BDC8 / 179656
{
	return;
}

void Function_646(var uParam0, bool bParam1) //Position: 0x2BDCE / 179662
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(*uParam0))
	{
		bVar0 = GET_MOUNT(Global_34573);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTOR_VALID(bParam1))
			{
				if (!GET_ACTORS_HORSE(bParam1) != bVar0)
				{
					*uParam0 = bVar0;
					Function_580(*uParam0, 0);
				}
			}
			else
			{
				*uParam0 = bVar0;
				Function_580(*uParam0, 0);
			}
		}
	}
	else
	{
		bVar0 = GET_MOUNT(Global_34573);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (!*uParam0 != bVar0)
			{
				if (IS_ACTOR_VALID(bParam1))
				{
					if (!GET_ACTORS_HORSE(bParam1) != bVar0)
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam0)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam0));
						}
						*uParam0 = bVar0;
						Function_580(*uParam0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam0));
					}
					*uParam0 = bVar0;
					Function_580(*uParam0, 0);
				}
			}
		}
	}
	return;
}

bool Function_647(int iParam0) //Position: 0x2BE93 / 179859
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
			Function_648(iParam0, 1);
			return 1;
		}
	}
	Function_648(iParam0, 0);
	return 0;
}

void Function_648(int iParam0, bool bParam1) //Position: 0x2BF1A / 179994
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

bool Function_649(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x2BF3E / 180030
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
		Function_648(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_668(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_667(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_667(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_653(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_648(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_652(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_651(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_652(&bVar17);
														strcpy(&Var18, "", 64);
														Function_650(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_238(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_651(StackVal, iParam2, bVar17);
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
	Function_648(iParam2, 0);
	return 0;
}

void Function_650(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x2C2D9 / 180953
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

void Function_651(var uParam0, int iParam1, bool bParam2) //Position: 0x2C3C4 / 181188
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

void Function_652(bool bParam0) //Position: 0x2C43A / 181306
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_653(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x2C45C / 181340
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
			return Function_664(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_657(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_664(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_654(iParam0, bVar2);
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
						bVar2 = Function_664(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_654(iParam0, bVar2);
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

var Function_654(int iParam0, bool bParam1) //Position: 0x2C5A6 / 181670
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
				bParam1 = Function_656(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_655(16);
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
				bParam1 = Function_656(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_655(256);
			}
		}
	}
	return bParam1;
}

bool Function_655(int iParam0) //Position: 0x2C6D9 / 181977
{
	return 2 | iParam0;
}

int Function_656(int iParam0) //Position: 0x2C6E3 / 181987
{
	return 4 | iParam0;
}

int Function_657(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x2C6ED / 181997
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
				iParam3 = Function_663(iParam0, iParam1, bParam4);
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
			return Function_655(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_658(iParam0, iParam1, 0, bParam4);
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
			return Function_655(16);
		}
	}
	return 0;
}

int Function_658(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2C79F / 182175
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_662(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_661(iVar0, 3, 1, bParam3))
			{
				if (!Function_667(iParam0, 8, 1))
				{
					return Function_660(64, 1024, bParam2);
				}
			}
			return Function_659(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_661(iVar0, 2, 1, bParam3))
			{
				if (!Function_667(iParam0, 32, 1))
				{
					return Function_660(64, 1024, bParam2);
				}
			}
			return Function_659(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_661(iVar0, 1, 1, bParam3))
			{
				if (!Function_667(iParam0, 64, 1))
				{
					return Function_660(64, 1024, bParam2);
				}
			}
			return Function_659(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_661(iVar0, 3, 1, bParam3))
			{
				if (!Function_667(iParam0, 128, 1))
				{
					return Function_660(64, 1024, bParam2);
				}
			}
			return Function_659(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_661(iVar0, 1, 1, bParam3))
			{
				if (!Function_667(iParam0, 1024, 1))
				{
					return Function_660(64, 1024, bParam2);
				}
			}
			return Function_659(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_661(iVar0, 1, 1, bParam3))
			{
				if (!Function_667(iParam0, 1024, 1))
				{
					return Function_660(64, 1024, bParam2);
				}
			}
			return Function_659(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_659(int iParam0, int iParam1, bool bParam2) //Position: 0x2C959 / 182617
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_660(int iParam0, int iParam1, bool bParam2) //Position: 0x2C96E / 182638
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_661(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2C983 / 182659
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_662(int iParam0) //Position: 0x2C9A0 / 182688
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

int Function_663(var uParam0, int iParam1, bool bParam2) //Position: 0x2CA0F / 182799
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_662(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_661(iVar0, 3, 1, bParam2))
			{
				if (!Function_667(uParam0, 8, 1))
				{
					return Function_656(64);
				}
			}
			return Function_655(64);
			break;
		
		case 0x00000009:
			if (Function_661(iVar0, 3, 1, bParam2))
			{
				if (!Function_667(uParam0, 8, 1))
				{
					return Function_656(64);
				}
			}
			return Function_655(64);
			break;
		
		case 0x0000006E:
			if (Function_661(iVar0, 2, 1, bParam2))
			{
				if (!Function_667(uParam0, 16, 1))
				{
					return Function_656(64);
				}
			}
			return Function_655(64);
			break;
		
		case 0x0000005B:
			if (Function_661(iVar0, 2, 1, bParam2))
			{
				if (!Function_667(uParam0, 32, 1))
				{
					return Function_656(64);
				}
			}
			return Function_655(64);
			break;
		
		case 0x00000031:
			if (Function_661(iVar0, 1, 1, bParam2))
			{
				if (!Function_667(uParam0, 64, 1))
				{
					return Function_656(64);
				}
			}
			return Function_655(64);
			break;
		
		case 0x00000007:
			if (Function_661(iVar0, 3, 1, bParam2))
			{
				if (!Function_667(uParam0, 128, 1))
				{
					return Function_656(64);
				}
			}
			return Function_655(64);
			break;
		
		case 0x00000008:
			if (Function_661(iVar0, 2, 1, bParam2))
			{
				if (!Function_667(uParam0, 256, 1))
				{
					return Function_656(64);
				}
			}
			return Function_655(64);
			break;
		
		case 0x00000014:
			if (Function_661(iVar0, 1, 1, bParam2))
			{
				if (!Function_667(uParam0, 512, 1))
				{
					return Function_656(64);
				}
			}
			return Function_655(64);
			break;
		
		case 0x00000018:
			if (Function_661(iVar0, 1, 1, bParam2))
			{
				if (!Function_667(uParam0, 512, 1))
				{
					return Function_656(64);
				}
			}
			return Function_655(64);
			break;
		
		case 0x00000057:
			if (Function_661(iVar0, 1, 1, bParam2))
			{
				if (!Function_667(uParam0, 1024, 1))
				{
					return Function_656(64);
				}
			}
			return Function_655(64);
			break;
		
		case 0x00000058:
			if (Function_661(iVar0, 1, 1, bParam2))
			{
				if (!Function_667(uParam0, 1024, 1))
				{
					return Function_656(64);
				}
			}
			return Function_655(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_664(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2CC2A / 183338
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
						return Function_663(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_667(iParam0, 2, 1))
					{
						return Function_656(8);
					}
					return Function_655(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_667(iParam0, 4, 1))
					{
						return Function_656(16);
					}
					return Function_655(16);
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
							return Function_658(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_667(iParam0, 2, 1))
						{
							return Function_656(128);
						}
						return Function_655(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_667(iParam0, 4, 1))
						{
							return Function_656(256);
						}
						return Function_655(256);
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
						return Function_658(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_667(iParam0, 2, 1))
					{
						return Function_656(8);
					}
					return Function_655(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_667(iParam0, 4, 1))
					{
						return Function_656(16);
					}
					return Function_655(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_666(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_667(iParam0, 2, 1))
					{
						return Function_656(8);
					}
					return Function_655(8);
				}
				if (!Function_667(iParam0, 4, 1))
				{
					return Function_656(16);
				}
				return Function_655(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_658(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_665(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_655(128);
							}
							if (!Function_667(iParam0, 2, 1))
							{
								return Function_656(8);
							}
							return Function_655(8);
						}
						if (iParam4 == 2)
						{
							if (Function_665(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_655(256);
							}
							if (!Function_667(iParam0, 4, 1))
							{
								return Function_656(16);
							}
							return Function_655(16);
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

bool Function_665(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2CEE9 / 184041
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

int Function_666(int iParam0, var uParam1, bool bParam2) //Position: 0x2CFA2 / 184226
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_662(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_661(iVar0, 2, 1, bParam2))
			{
				if (!Function_667(iParam0, 16, 1))
				{
					return Function_656(64);
				}
			}
			return Function_655(64);
			break;
		
		case 0x0000005B:
			if (Function_661(iVar0, 2, 1, bParam2))
			{
				if (!Function_667(iParam0, 32, 1))
				{
					return Function_656(64);
				}
			}
			return Function_655(64);
			break;
		
		case 0x00000057:
			if (Function_661(iVar0, 1, 1, bParam2))
			{
				if (!Function_667(iParam0, 1024, 1))
				{
					return Function_656(64);
				}
			}
			return Function_655(64);
			break;
		
		case 0x00000058:
			if (Function_661(iVar0, 1, 1, bParam2))
			{
				if (!Function_667(iParam0, 1024, 1))
				{
					return Function_656(64);
				}
			}
			return Function_655(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_667(int iParam0, bool bParam1, bool bParam2) //Position: 0x2D0B6 / 184502
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

int Function_668(int iParam0) //Position: 0x2D0DE / 184542
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

bool Function_669(int iParam0) //Position: 0x2D10F / 184591
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_670(int iParam0) //Position: 0x2D12D / 184621
{
	if (!GET_TIME_ACCELERATION() != 0.0f)
	{
		if ((Global_63399 && iParam0) >= 0)
		{
			SET_TIME_ACCELERATION(0.0f);
		}
	}
	else if ((Global_63399 && iParam0) == 0)
	{
		SET_TIME_ACCELERATION(Global_63398);
	}
	return;
}

var Function_671(int iParam0) //Position: 0x2D15D / 184669
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam0 & 33 == 32)
	{
		bVar0 = 5;
	}
	else if (iParam0 & 3 == 1)
	{
		bVar0 = 7;
	}
	else if (iParam0 & 6 == 2)
	{
		bVar0 = 11;
	}
	else if (iParam0 & 12 == 4)
	{
		bVar0 = 14;
	}
	else if (iParam0 & 24 == 8)
	{
		bVar0 = 18;
	}
	else if (iParam0 & 48 == 16)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, false);
}

var Function_672(bool bParam0) //Position: 0x2D1C9 / 184777
{
	bool bVar0;
	
	bVar0 = false;
	if ((bParam0 && 33) == 1)
	{
		bVar0 = 5;
	}
	else if ((bParam0 && 3) == 2)
	{
		bVar0 = 7;
	}
	else if ((bParam0 && 6) == 4)
	{
		bVar0 = 11;
	}
	else if ((bParam0 && 12) == 8)
	{
		bVar0 = 14;
	}
	else if ((bParam0 && 24) == 16)
	{
		bVar0 = 18;
	}
	else if ((bParam0 && 48) == 32)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, false);
}

void Function_673(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x2D235 / 184885
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

