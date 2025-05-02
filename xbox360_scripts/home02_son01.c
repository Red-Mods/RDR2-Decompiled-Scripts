//Decompiled with MagicRDR v1.0
//Function Count : 567
//Statics Count : 629
//Natives Count : 754
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<853> Local_4 = { 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_511 = 0;
	bLocal_512 = "";
	Local_220 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_328 = 99;
	iLocal_329 = 6;
	iLocal_321 = 1000;
	while (Function_262())
	{
		Function_216();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x48 / 72
{
	vector3 vVar0;
	
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_333);
	vVar0 = { -99,05f, 118,72f, 1405,5f };
	TASK_GO_NEAR_COORD(bLocal_332, &vVar0, 5.0f, true);
	ACTOR_ENABLE_VARIABLE_MESH(bLocal_332, 23, false);
	ACTOR_FORCE_WEAPON_RENDER(bLocal_332, 0, 0);
	if (ACTOR_HAS_WEAPON(bLocal_332, 22))
	{
		DELETE_WEAPON_FROM_ACTOR(bLocal_332, 22);
	}
	if (IS_ACTOR_VALID(bLocal_333))
	{
		TASK_STAND_STILL(bLocal_333, -1.0f, 0, 0);
	}
	if (IS_ACTOR_VALID(bLocal_527))
	{
		TASK_STAND_STILL(bLocal_527, -1.0f, 0, 0);
		RELEASE_ACTOR_AS_AMBIENT(bLocal_527);
	}
	Function_213(12, 0, 1, 1, 1);
	Function_213(13, 0, 0, 1, 1);
	Function_213(11, 0, 0, 1, 1);
	Function_213(14, 0, 0, 1, 1);
	Function_212(bLocal_219);
	Function_212(Local_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_211();
	Function_185(bLocal_353, 1, 0, 1, 0, 0, 1, 1);
	Function_182();
	Function_178(&bLocal_252);
	Function_168();
	if (IS_ITERATOR_VALID(bLocal_331))
	{
		DESTROY_ITERATOR(bLocal_331);
	}
	RELEASE_LAYOUT_REF(bLocal_219);
	if (bLocal_352)
	{
		Function_24(Local_220, 1, 1, 1, 0);
	}
	else if (bLocal_353)
	{
		Function_20(Local_220);
	}
	else
	{
		Function_2(Local_220);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x15D / 349
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x17E / 382
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x199 / 409
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x1BA / 442
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x1D0 / 464
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

void Function_7(int iParam0) //Position: 0x26C / 620
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x28D / 653
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

void Function_9() //Position: 0x2D3 / 723
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x2EC / 748
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x33F / 831
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

struct<16> Function_12(int iParam0) //Position: 0x463 / 1123
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x488 / 1160
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x4A8 / 1192
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x4BF / 1215
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x4DA / 1242
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x721 / 1825
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x74A / 1866
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

bool Function_19(int iParam0) //Position: 0x76E / 1902
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x783 / 1923
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x7A1 / 1953
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

struct<16> Function_22(int iParam0) //Position: 0x847 / 2119
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x871 / 2161
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xAC7 / 2759
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

void Function_25() //Position: 0xBB4 / 2996
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

int Function_26(int iParam0, bool bParam1) //Position: 0xBE4 / 3044
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

int Function_27(int iParam0) //Position: 0xC21 / 3105
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xC3B / 3131
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xC51 / 3153
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF48 / 3912
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

void Function_31(char* cParam0, int iParam1) //Position: 0xFB4 / 4020
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0xFEB / 4075
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

bool Function_33(var uParam0, int iParam1) //Position: 0x1063 / 4195
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x1076 / 4214
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

int Function_35(int iParam0) //Position: 0x1117 / 4375
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x1154 / 4436
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1167 / 4455
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

void Function_38(int iParam0, int iParam1) //Position: 0x1379 / 4985
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x13B3 / 5043
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

bool Function_40() //Position: 0x13F5 / 5109
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x13FE / 5118
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

void Function_42() //Position: 0x144F / 5199
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

void Function_43() //Position: 0x1482 / 5250
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

void Function_44() //Position: 0x1588 / 5512
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

void Function_45() //Position: 0x15BB / 5563
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

void Function_46() //Position: 0x1749 / 5961
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

void Function_47() //Position: 0x18FD / 6397
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x190B / 6411
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

var Function_49() //Position: 0x1AFC / 6908
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1B11 / 6929
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1BAC / 7084
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1E47 / 7751
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

var Function_53() //Position: 0x2474 / 9332
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x247C / 9340
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x248D / 9357
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x2582 / 9602
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x259B / 9627
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x2600 / 9728
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x2612 / 9746
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2624 / 9764
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

int Function_61(int iParam0) //Position: 0x2754 / 10068
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x2763 / 10083
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x279C / 10140
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x27D9 / 10201
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2973 / 10611
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

int Function_66(bool bParam0) //Position: 0x2B8D / 11149
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2BCE / 11214
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

struct<8> Function_68() //Position: 0x2C57 / 11351
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

struct<8> Function_69() //Position: 0x2CEE / 11502
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

void Function_70() //Position: 0x2D6D / 11629
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2D93 / 11667
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

void Function_72() //Position: 0x2F9D / 12189
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

bool Function_73(vector3 vParam0) //Position: 0x303E / 12350
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3056 / 12374
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

vector3 Function_75() //Position: 0x313D / 12605
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x3146 / 12614
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x3155 / 12629
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x316B / 12651
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x3232 / 12850
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x324F / 12879
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

bool Function_81(int iParam0) //Position: 0x372B / 14123
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x3741 / 14145
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x3760 / 14176
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x377A / 14202
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

int Function_85(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x37E1 / 14305
{
	int iVar0;
	int iVar1;
	
	iVar0 = bParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[bParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[bParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[bParam0] = (Global_34581[bParam0] + TO_FLOAT(bParam1));
	Function_65(bParam0, TO_FLOAT(bParam1), 1);
	Function_64(bParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_52(bParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
	}
	if (Global_35278[bParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[bParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_86() //Position: 0x3A01 / 14849
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3A81 / 14977
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3DD3 / 15827
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

int Function_89(int iParam0) //Position: 0x3E56 / 15958
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3E70 / 15984
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3E9E / 16030
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x413C / 16700
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

void Function_93(int iParam0, int iParam1) //Position: 0x42FF / 17151
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x455D / 17757
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

int Function_95() //Position: 0x46E2 / 18146
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

void Function_96() //Position: 0x4781 / 18305
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

void Function_97(int iParam0) //Position: 0x4830 / 18480
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

var Function_98(int iParam0) //Position: 0x488E / 18574
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

int Function_99(int iParam0, bool bParam1) //Position: 0x491D / 18717
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

var Function_100(int iParam0, int iParam1) //Position: 0x4ABA / 19130
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

void Function_101() //Position: 0x4AFB / 19195
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4B11 / 19217
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4B51 / 19281
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4B91 / 19345
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4BA0 / 19360
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

int Function_106(int iParam0) //Position: 0x4D68 / 19816
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

var Function_107() //Position: 0x4DFD / 19965
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4E22 / 20002
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x52DD / 21213
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

var Function_110(int iParam0) //Position: 0x55F2 / 22002
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x5695 / 22165
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

int Function_112(int iParam0, bool bParam1) //Position: 0x5890 / 22672
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5A2C / 23084
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5AF7 / 23287
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

void Function_115(int iParam0) //Position: 0x63E7 / 25575
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6556 / 25942
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x665C / 26204
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x6689 / 26249
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

var Function_119(vector3 vParam0) //Position: 0x66E0 / 26336
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x672E / 26414
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6782 / 26498
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

void Function_122() //Position: 0x6920 / 26912
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6926 / 26918
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

void Function_124(bool bParam0, int iParam1) //Position: 0x69CA / 27082
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x6A1F / 27167
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6A35 / 27189
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6A86 / 27270
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

void Function_128(var uParam0, int iParam1) //Position: 0x6AB3 / 27315
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6AC2 / 27330
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6AD9 / 27353
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6AE8 / 27368
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

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6C32 / 27698
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

bool Function_133() //Position: 0x6C7D / 27773
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6CAA / 27818
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

int Function_135(int iParam0) //Position: 0x6E5A / 28250
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6EB1 / 28337
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

var Function_137(int iParam0) //Position: 0x6ED6 / 28374
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x6F2C / 28460
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

bool Function_139(bool bParam0) //Position: 0x6F8B / 28555
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x6F97 / 28567
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x6FB3 / 28595
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

int Function_142(int iParam0, int iParam1) //Position: 0x7005 / 28677
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

int Function_143(int iParam0, int iParam1) //Position: 0x7078 / 28792
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x70D4 / 28884
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

int Function_145(int iParam0, int iParam1) //Position: 0x7145 / 28997
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x719F / 29087
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x744B / 29771
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

void Function_148(int iParam0, bool bParam1) //Position: 0x76DA / 30426
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

void Function_149() //Position: 0x7739 / 30521
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

var Function_150(int iParam0, int iParam1) //Position: 0x77B4 / 30644
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

int Function_151(int iParam0) //Position: 0x83A6 / 33702
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x83BB / 33723
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x840A / 33802
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x8417 / 33815
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x8468 / 33896
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

bool Function_156(int iParam0, int iParam1) //Position: 0x84D6 / 34006
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x84E9 / 34025
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

var Function_158(int iParam0) //Position: 0x85E8 / 34280
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

bool Function_159(var uParam0, int iParam1) //Position: 0x8640 / 34368
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x865C / 34396
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

bool Function_161(int iParam0) //Position: 0x86B3 / 34483
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x86C5 / 34501
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

void Function_163(int iParam0) //Position: 0x86F9 / 34553
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8760 / 34656
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

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x883D / 34877
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

void Function_166() //Position: 0x89B6 / 35254
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x89C2 / 35266
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

void Function_168() //Position: 0x8A08 / 35336
{
	Function_169();
	return;
}

void Function_169() //Position: 0x8A11 / 35345
{
	Function_178(&Local_4 + 4);
	Function_170(&Global_7148, &Global_8447, 0, 0);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_170(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x8A2E / 35374
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_177(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_177(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_177(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_176(uParam0[iVar02], 8);
	}
	Function_176(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_175(StackVal);
	if (bParam3)
	{
		Function_171(uParam0, uParam1, uParam2, 0);
	}
}

void Function_171(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x8AC8 / 35528
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_174(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_173(Global_29007), Function_172(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_177(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_177(uParam0[iParam22], 1) && !bParam3)
	{
		Function_174(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_173(Global_29007), Function_172(Global_29007), false, 0);
	}
}

int Function_172(int iParam0) //Position: 0x8C17 / 35863
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

int Function_173(int iParam0) //Position: 0x8C42 / 35906
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

void Function_174(var uParam0, int iParam1) //Position: 0x8C76 / 35958
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_175(bool bParam0) //Position: 0x8C85 / 35973
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

void Function_176(var uParam0, int iParam1) //Position: 0x8D1F / 36127
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_177(var uParam0, int iParam1) //Position: 0x8D36 / 36150
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_178(int iParam0) //Position: 0x8D52 / 36178
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_179(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_179(var uParam0, int iParam1) //Position: 0x8D78 / 36216
{
	if (Function_181(uParam0[iParam13], 4))
	{
		if (Function_181(uParam0[iParam13], 1))
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
			Function_180(uParam0[iParam13], 1);
			Function_180(uParam0[iParam13], 2);
			Function_180(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_180(var uParam0, int iParam1) //Position: 0x8EA6 / 36518
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_181(int iParam0, int iParam1) //Position: 0x8EC0 / 36544
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_182() //Position: 0x8EDD / 36573
{
	if (IS_BLIP_VALID(bLocal_528))
	{
		REMOVE_BLIP(bLocal_528);
	}
	if (IS_OBJECT_VALID(bLocal_538))
	{
		Function_184();
		DESTROY_OBJECT(bLocal_538);
	}
	if (IS_OBJECT_VALID(iLocal_539[0]))
	{
		DESTROY_OBJECT(iLocal_539[0]);
	}
	if (IS_OBJECT_VALID(iLocal_539[1]))
	{
		DESTROY_OBJECT(iLocal_539[1]);
	}
	if (IS_OBJECT_VALID(iLocal_539[2]))
	{
		DESTROY_OBJECT(iLocal_539[2]);
	}
	if (IS_ACTOR_VALID(bLocal_593))
	{
		Function_183(bLocal_593, 0);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_593);
	}
	if (IS_ACTOR_VALID(bLocal_333))
	{
		TASK_PRIORITY_SET(bLocal_333, 3);
		TASK_CLEAR(bLocal_333);
	}
	if (IS_ACTOR_VALID(bLocal_527))
	{
		TASK_PRIORITY_SET(bLocal_527, 3);
		TASK_CLEAR(bLocal_527);
	}
	if (IS_ACTOR_VALID(bLocal_523))
	{
		TASK_PRIORITY_SET(bLocal_523, 3);
		TASK_CLEAR(bLocal_523);
		SET_ACTOR_INVULNERABILITY(bLocal_523, false);
	}
	return;
}

int Function_183(bool bParam0, bool bParam1) //Position: 0x8FA3 / 36771
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("SK_SHOP_SET_ACTIVE_OVERRIDE: Actor not valid for SK_SHOP_SET_ACTIVE_WHEN_STOLEN, quitting.");
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, "ACTIVE_WHEN_STOLEN"))
	{
		if (!bParam1)
		{
			return DECOR_REMOVE(bParam0, "ACTIVE_WHEN_STOLEN");
		}
	}
	if (bParam1)
	{
		return DECOR_SET_BOOL(bParam0, "ACTIVE_WHEN_STOLEN", true);
	}
	return 0;
}

void Function_184() //Position: 0x9077 / 36983
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

void Function_185(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x90A2 / 37026
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_210());
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
	Function_184();
	CLEAR_PRINTED_OBJECTIVE();
	Function_209();
	Function_207(0);
	Function_206();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_205();
	Function_204();
	Function_184();
	ENABLE_JOURNAL_REPLAY(1);
	Function_203(1);
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
		Function_202(Global_34573);
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
	Function_201(Global_28178);
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
	Function_200(1178687);
	Function_198(33039);
	Function_197(0x218003f);
	Function_196(4194560);
	Function_195();
	Function_194();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_191(0, 1, 1);
	}
	else
	{
		Function_191(0, 1, 1);
	}
	Function_190();
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
	Function_186();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_186() //Position: 0x9293 / 37523
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
		if (Function_189() > 3)
		{
			bVar0 *= 2;
		}
		Function_187(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_187(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x92E9 / 37609
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_188((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_188(bool bParam0) //Position: 0x932F / 37679
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_189() //Position: 0x9354 / 37716
{
	return Global_12976.f_156;
}

void Function_190() //Position: 0x935F / 37727
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

void Function_191(int iParam0, bool bParam1, int iParam2) //Position: 0x9389 / 37769
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
			Function_192(Global_29006);
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

void Function_192(int iParam0) //Position: 0x9494 / 38036
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_193())
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

bool Function_193() //Position: 0x9513 / 38163
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

void Function_194() //Position: 0x9570 / 38256
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

void Function_195() //Position: 0x9596 / 38294
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

void Function_196(int iParam0) //Position: 0x95BC / 38332
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_197(int iParam0) //Position: 0x95D9 / 38361
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_198(int iParam0) //Position: 0x95EC / 38380
{
	Function_199(&Global_28842, iParam0);
	return;
}

void Function_199(var uParam0, int iParam1) //Position: 0x95FA / 38394
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_200(bool bParam0) //Position: 0x9615 / 38421
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_201(int iParam0) //Position: 0x9642 / 38466
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

void Function_202(bool bParam0) //Position: 0x9709 / 38665
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

void Function_203(bool bParam0) //Position: 0x9785 / 38789
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

void Function_204() //Position: 0x97F9 / 38905
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

void Function_205() //Position: 0x983A / 38970
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

void Function_206() //Position: 0x987B / 39035
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_207(int iParam0) //Position: 0x988F / 39055
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_208())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_208() //Position: 0x98CB / 39115
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

void Function_209() //Position: 0x98F0 / 39152
{
	Global_8722 = 0.0f;
	return;
}

int Function_210() //Position: 0x98FA / 39162
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_211() //Position: 0x9914 / 39188
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_212(bool bParam0) //Position: 0x991D / 39197
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

int Function_213(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9975 / 39285
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
		Function_215(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_214(StackVal);
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

void Function_214(bool bParam0) //Position: 0x9C93 / 40083
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

void Function_215(bool bParam0) //Position: 0x9CBF / 40127
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_216() //Position: 0x9CD4 / 40148
{
	var uVar0[10];
	int iVar11;
	
	if (Function_261())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Elk Hunt I";
		uVar0[4] = "Stage 03 - Elk Hunt II";
		uVar0[5] = "Stage 04 - Elk Skin";
		uVar0[6] = "Stage 05 - Manzanita Store";
		uVar0[7] = "Stage 06 - Sell Skins";
		uVar0[8] = "Stage 07 - Ride Home";
		uVar0[9] = "Last Stage";
		iVar11 = Function_247(&uLocal_289, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_246(&iVar11, &bLocal_328, &iLocal_329, &iLocal_321))
		{
			Function_239();
			Function_238();
		}
		if (iVar11 == 0)
		{
			Function_239();
			Function_238();
			Function_237(&bLocal_352, 8);
		}
		else if (iVar11 == 1)
		{
			Function_239();
			Function_238();
			Function_232(bLocal_328);
			Function_228(StackVal, StackVal, 5, &bLocal_353, &bLocal_328, Function_235(bLocal_328), Function_232(bLocal_328), 0);
		}
		else if (iVar11 == 2)
		{
			Function_239();
			Function_238();
			Function_223(&bLocal_354, 4);
		}
		else if (iVar11 == 3)
		{
			Function_219();
			Function_239();
			Function_238();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_217(&vLocal_334);
			bLocal_328 = true;
			iLocal_329 = 0;
			iLocal_321 = 1000;
		}
		else if (iVar11 == 4)
		{
			Function_219();
			Function_239();
			Function_238();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_217(&vLocal_334);
			bLocal_328 = 2;
			iLocal_329 = 0;
			iLocal_321 = 1000;
		}
		else if (iVar11 == 5)
		{
			Function_219();
			Function_239();
			Function_238();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_217(&vLocal_334);
			bLocal_328 = 3;
			iLocal_329 = 0;
			iLocal_321 = 1000;
		}
		else if (iVar11 == 6)
		{
			Function_219();
			Function_239();
			Function_238();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_217(&vLocal_334);
			bLocal_328 = 4;
			iLocal_329 = 0;
			iLocal_321 = 1000;
		}
		else if (iVar11 == 7)
		{
			Function_219();
			Function_239();
			Function_238();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_217(&vLocal_334);
			bLocal_328 = 5;
			iLocal_329 = 0;
			iLocal_321 = 1000;
		}
		else if (iVar11 == 8)
		{
			Function_219();
			Function_239();
			Function_238();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_217(&vLocal_334);
			bLocal_328 = 6;
			iLocal_329 = 0;
			iLocal_321 = 1000;
		}
		else if (iVar11 == 9)
		{
			Function_219();
			Function_239();
			Function_238();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_217(&vLocal_334);
			bLocal_328 = 101;
			iLocal_329 = 0;
			iLocal_321 = 1000;
		}
	}
	return;
}

void Function_217(bool bParam0) //Position: 0x9FDB / 40923
{
	Function_218(bParam0, 0.0f);
	return;
}

void Function_218(int iParam0, float fParam1) //Position: 0x9FE7 / 40935
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_219() //Position: 0xA008 / 40968
{
	STREAMING_UNLOAD_BOUNDS();
	Function_221(12, 0, 1);
	if (IS_BLIP_VALID(bLocal_528))
	{
		REMOVE_BLIP(bLocal_528);
	}
	if (IS_OBJECT_VALID(bLocal_538))
	{
		Function_184();
		DESTROY_OBJECT(bLocal_538);
	}
	if (IS_OBJECT_VALID(iLocal_539[0]))
	{
		DESTROY_OBJECT(iLocal_539[0]);
	}
	if (IS_OBJECT_VALID(iLocal_539[1]))
	{
		DESTROY_OBJECT(iLocal_539[1]);
	}
	if (IS_OBJECT_VALID(iLocal_539[2]))
	{
		DESTROY_OBJECT(iLocal_539[2]);
	}
	if (IS_ACTOR_VALID(bLocal_593))
	{
		Function_183(bLocal_593, 0);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_593);
	}
	if (SQUAD_IS_VALID(Local_4.f_104))
	{
		Function_220(&Local_4 + 104);
		DESTROY_OBJECT(Local_4.f_104);
	}
	if (SQUAD_IS_VALID(Local_4.f_120))
	{
		Function_220(&Local_4 + 120);
		DESTROY_OBJECT(Local_4.f_120);
	}
	if (SQUAD_IS_VALID(Local_4.f_152))
	{
		Function_220(&Local_4 + 152);
		DESTROY_OBJECT(Local_4.f_152);
	}
	return;
}

void Function_220(int iParam0) //Position: 0xA0D7 / 41175
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

void Function_221(int iParam0, bool bParam1, bool bParam2) //Position: 0xA11E / 41246
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
						Function_214(bVar1);
					}
				}
				Function_222(bVar0);
			}
		}
	}
	return;
}

void Function_222(bool bParam0) //Position: 0xA215 / 41493
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

void Function_223(bool bParam0, int iParam1) //Position: 0xA241 / 41537
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_224(iParam1);
	*bParam0 = 1;
	return;
}

void Function_224(int iParam0) //Position: 0xA264 / 41572
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_227("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_226(2) || Function_226(8)) || Function_226(9)) || Function_226(10))
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
		Function_227("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_227("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_227("");
	}
	else if (iParam0 == 8)
	{
		Function_225();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_225();
	}
	return;
}

void Function_225() //Position: 0xA35B / 41819
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_226(int iParam0) //Position: 0xA367 / 41831
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

void Function_227(bool bParam0) //Position: 0xA39D / 41885
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_228(int iParam0, int iParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA407 / 41991
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_229(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_224(iParam0);
		*iParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_229(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA444 / 42052
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_231(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_230(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_230(int iParam0) //Position: 0xA4C7 / 42183
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

var Function_231(vector3 vParam0, bool bParam3) //Position: 0xA975 / 43381
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

vector3 Function_232(int iParam0) //Position: 0xA9E0 / 43488
{
	Function_233(iParam0 + 1);
	return StackVal, StackVal, Function_233(iParam0 + 1);
}

vector3 Function_233(int iParam0) //Position: 0xA9ED / 43501
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_234((*&Local_4 + 344)[0]);
			return StackVal, StackVal, Function_234((*&Local_4 + 344)[0]);
			break;
		
		case 0x00000001:
			Function_234((*&Local_4 + 384)[0]);
			return StackVal, StackVal, Function_234((*&Local_4 + 384)[0]);
			break;
		
		case 0x00000002:
			Function_234((*&Local_4 + 412)[0]);
			return StackVal, StackVal, Function_234((*&Local_4 + 412)[0]);
			break;
		
		case 0x00000003:
			Function_234((*&Local_4 + 440)[0]);
			return StackVal, StackVal, Function_234((*&Local_4 + 440)[0]);
			break;
		
		case 0x00000004:
			Function_234((*&Local_4 + 476)[0]);
			return StackVal, StackVal, Function_234((*&Local_4 + 476)[0]);
			break;
		
		case 0x00000005:
			Function_234((*&Local_4 + 504)[0]);
			return StackVal, StackVal, Function_234((*&Local_4 + 504)[0]);
			break;
		
		case 0x00000006:
			Function_234((*&Local_4 + 536)[0]);
			return StackVal, StackVal, Function_234((*&Local_4 + 536)[0]);
			break;
		
		default:
			Function_234((*&Local_4 + 564)[0]);
			return StackVal, StackVal, Function_234((*&Local_4 + 564)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_234((*&Local_4 + 344)[0]);
	return StackVal, StackVal, Function_234((*&Local_4 + 344)[0]);
}

vector3 Function_234(bool bParam0) //Position: 0xAB0B / 43787
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

int Function_235(int iParam0) //Position: 0xAB32 / 43826
{
	return Function_236(iParam0 + 1);
}

int Function_236(int iParam0) //Position: 0xAB3F / 43839
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 344)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 384)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 412)[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 440)[0]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_4 + 476)[0]);
			break;
		
		case 0x00000005:
			return GET_OBJECT_HEADING((*&Local_4 + 504)[0]);
			break;
		
		case 0x00000006:
			return GET_OBJECT_HEADING((*&Local_4 + 536)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 564)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_4 + 344)[0]);
}

void Function_237(bool bParam0, int iParam1) //Position: 0xAC5D / 44125
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_224(iParam1);
	*bParam0 = 1;
	return;
}

void Function_238() //Position: 0xAC80 / 44160
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_239() //Position: 0xAC95 / 44181
{
	Function_241();
	Function_240(10, 3);
	return;
}

void Function_240(int iParam0, int iParam1) //Position: 0xACA4 / 44196
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

void Function_241() //Position: 0xADDB / 44507
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_245())
	{
		Function_244(10, 3);
	}
	else
	{
		Function_242();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_242() //Position: 0xAE26 / 44582
{
	Function_243(25, 2);
	return;
}

void Function_243(int iParam0, int iParam1) //Position: 0xAE32 / 44594
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

void Function_244(int iParam0, int iParam1) //Position: 0xB030 / 45104
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

bool Function_245() //Position: 0xB167 / 45415
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

bool Function_246(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xB1CE / 45518
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_239();
			Function_238();
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
		Function_227("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_247(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB274 / 45684
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_260(&Var15, &Var0);
	uVar20 = Function_259(*uParam1, &Var15);
	Function_258(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_257(uParam0, uVar20);
	Function_255(StackVal, uParam0, Var15.f_12);
	Function_253(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_252(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_249(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_248(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_248(int iParam0, int iParam1, int iParam2) //Position: 0xB33B / 45883
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

bool Function_249(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB397 / 45975
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
				Function_251(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_251(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_248(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_250(bParam1->f_32);
	}
	else
	{
		Function_250(bParam1->f_32);
	}
	return 0;
}

void Function_250(bool bParam0) //Position: 0xB51D / 46365
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

void Function_251(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB557 / 46423
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

var Function_252(int iParam0, var uParam1, int iParam2) //Position: 0xB605 / 46597
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_253(var uParam0, int iParam1, int iParam2) //Position: 0xB629 / 46633
{
	switch (Function_254())
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

int Function_254() //Position: 0xB6C5 / 46789
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

void Function_255(var uParam0, int iParam1, int iParam2) //Position: 0xB701 / 46849
{
	switch (Function_256(uParam0))
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

int Function_256(bool bParam0) //Position: 0xB799 / 47001
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

var Function_257(var uParam0, int iParam1) //Position: 0xB8E4 / 47332
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

void Function_258(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xBA33 / 47667
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

var Function_259(int iParam0, int iParam1) //Position: 0xBAC6 / 47814
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_260(var uParam0, var uParam1) //Position: 0xBAE0 / 47840
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

bool Function_261() //Position: 0xBB2E / 47918
{
	return Global_30920;
}

bool Function_262() //Position: 0xBB37 / 47927
{
	if (IS_EXITFLAG_SET())
	{
		Function_232(bLocal_328);
		Function_228(StackVal, StackVal, 4, &bLocal_353, &bLocal_328, Function_235(bLocal_328), Function_232(bLocal_328), 0);
		return 0;
	}
	Function_566(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_220, bLocal_328, iLocal_329, &bLocal_354, &bLocal_352, &bLocal_353);
	if (bLocal_328 == 99 && bLocal_328 == 100)
	{
		if (bLocal_328 < 6)
		{
			if (GET_TIME_ACCELERATION() != 0.0f)
			{
				SET_TIME_ACCELERATION(Global_63398);
			}
		}
		else
		{
			Function_565(8);
		}
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_232(bLocal_328);
			Function_228(StackVal, StackVal, 1, &bLocal_353, &bLocal_328, Function_235(bLocal_328), Function_232(bLocal_328), 0);
			return 1;
		}
		if (Function_545(&Local_396, &uLocal_356, &uLocal_499, bLocal_331, iLocal_355))
		{
			if (Function_543(&uLocal_499))
			{
				Function_232(bLocal_328);
				Function_228(StackVal, StackVal, 5, &bLocal_353, &bLocal_328, Function_235(bLocal_328), Function_232(bLocal_328), 0);
				return 1;
			}
		}
		if (Global_3403 || Global_3404)
		{
			Function_232(bLocal_328);
			Function_228(StackVal, StackVal, 2, &bLocal_353, &bLocal_328, Function_235(bLocal_328), Function_232(bLocal_328), 0);
			return 1;
		}
		if (Function_542(2048))
		{
			Function_232(bLocal_328);
			Function_228(StackVal, StackVal, 3, &bLocal_353, &bLocal_328, Function_235(bLocal_328), Function_232(bLocal_328), 0);
			return 1;
		}
		if (iLocal_529)
		{
			Function_227("home02_son01_player_fail");
			Function_232(bLocal_328);
			Function_228(StackVal, StackVal, 5, &bLocal_353, &bLocal_328, Function_235(bLocal_328), Function_232(bLocal_328), 0);
			return 0;
		}
		if (IS_ACTOR_VALID(bLocal_527))
		{
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (GET_MOUNT(Global_34573) != bLocal_527)
				{
					Function_541(&bLocal_333, bLocal_332);
				}
			}
		}
		Function_540();
	}
	switch (bLocal_328)
	{
		case 0x00000063:
			Function_521();
			break;
		
		case 0x00000000:
			Function_513();
			break;
		
		case 0x00000001:
			Function_491();
			break;
		
		case 0x00000002:
			Function_447();
			break;
		
		case 0x00000003:
			Function_429();
			break;
		
		case 0x00000004:
			Function_421();
			break;
		
		case 0x00000005:
			Function_408();
			break;
		
		case 0x00000006:
			Function_347();
			break;
		
		case 0x00000065:
			Function_265();
			break;
		
		case 0x00000064:
			if (Function_264(&bLocal_353))
			{
				return 0;
			}
			break;
		
		default:
			if (!Function_263(&bLocal_328, &iLocal_329, &iLocal_321))
			{
				return 0;
			}
			break;
	}
	if (bLocal_352)
	{
		Function_237(&bLocal_352, 8);
		return 0;
	}
	if (bLocal_353 && bLocal_328 == 100)
	{
		Function_232(bLocal_328);
		Function_228(StackVal, StackVal, 5, &bLocal_353, &bLocal_328, Function_235(bLocal_328), Function_232(bLocal_328), 0);
	}
	if (bLocal_354)
	{
		Function_223(&bLocal_354, 4);
		return 0;
	}
	return 1;
}

bool Function_263(var uParam0, var uParam1, int iParam2) //Position: 0xBD85 / 48517
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

bool Function_264(int iParam0) //Position: 0xBDC5 / 48581
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_265() //Position: 0xBDD8 / 48600
{
	Function_346(bLocal_219);
	switch (iLocal_329)
	{
		case 0x00000000:
			Function_342(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_332, GET_ACTOR_MAX_HEALTH(bLocal_332));
			if (IS_ACTOR_VALID(bLocal_333))
			{
				TASK_STAND_STILL(bLocal_333, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_333, true);
			}
			if (IS_ACTOR_VALID(bLocal_332))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_332);
				MEMORY_PREFER_RIDING(bLocal_332, false);
				CLEAR_ACTOR_MAX_SPEED(bLocal_332);
				TASK_STAND_STILL(bLocal_332, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_332, true);
			}
			if (IS_ACTOR_VALID(bLocal_524))
			{
				TASK_STAND_STILL(bLocal_524, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_524, 2);
			}
			if (IS_ACTOR_VALID(bLocal_525))
			{
				TASK_STAND_STILL(bLocal_525, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_525, 2);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				bLocal_330 = Global_30717[1];
				if (!Function_333(bLocal_330))
				{
					Function_332(&Local_220);
				}
				Function_331(Global_34573, (*&Local_4 + 564)[0], 1, 1, 1);
				Function_217(&vLocal_334);
				iLocal_329 = 1;
			}
			else
			{
				Function_217(&vLocal_334);
				iLocal_329 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_333(bLocal_330) || bLocal_330 != 4294967295))
			{
				Function_217(&vLocal_334);
				iLocal_329 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_326())
			{
				if (!iLocal_343[6])
				{
					if (IS_ACTOR_VALID(bLocal_332))
					{
						Function_331(bLocal_332, (*&Local_4 + 564)[2], 1, 1, 1);
					}
					if (IS_ACTOR_VALID(bLocal_333))
					{
						Function_331(bLocal_333, (*&Local_4 + 564)[4], 1, 1, 1);
					}
					if (IS_ACTOR_VALID(bLocal_527))
					{
						Function_331(bLocal_527, (*&Local_4 + 564)[6], 1, 1, 1);
					}
				}
				Function_217(&vLocal_334);
				iLocal_329 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_269("$/cutscene/son_01_end/son_01_end", &iLocal_321, &Local_220, &bLocal_328, 70596, 70424, 68300, 68018, 67688, 52206, 0, 2, 1, 1, 2, 0, 1))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_217(&vLocal_334);
				iLocal_329 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_266(&vLocal_334) < 1.0f)
			{
				if (HUD_IS_FADED())
				{
					if (!HUD_IS_FADING())
					{
						ADVANCE_TIME_HOURS(2.0f);
						SET_ACTION_NODE_FOR_ACTOR(Global_34573, "default_character_Main/Default/DefaultGait/Idles/StandIdle/Sometimes/CanPlayHatIdle/StreamedHatIdle");
						HUD_FADE_IN(1.0f, 1065353216);
					}
				}
				else if (!HUD_IS_FADING())
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					bLocal_352 = true;
				}
			}
			break;
	}
	return;
}

float Function_266(bool bParam0) //Position: 0xC0B1 / 49329
{
	if (Function_268(bParam0))
	{
		if (Function_267(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_267(int iParam0) //Position: 0xC179 / 49529
{
	return Function_153(*iParam0, 2);
}

bool Function_268(bool bParam0) //Position: 0xC186 / 49542
{
	return Function_153(*bParam0, 1);
}

bool Function_269(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xC193 / 49555
{
	if (!bParam15)
	{
		Function_279(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_278(iParam2) || iParam2->f_24 < 1))
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
				Function_217(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_277())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_276(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_217(iParam1 + 4);
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
					Function_276(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_266(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_266(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_274(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_276(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_217(iParam1 + 4);
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
						Function_273(1.0f);
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
						Function_271();
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
					Function_270(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_278(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_270(bool bParam0) //Position: 0xC7A7 / 51111
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

void Function_271() //Position: 0xC84C / 51276
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_272();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_272() //Position: 0xC891 / 51345
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_273(bool bParam0) //Position: 0xC8A3 / 51363
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

void Function_274(bool bParam0, bool bParam1) //Position: 0xC8C0 / 51392
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
			if ((bVar3 == Global_34573 && !Function_275(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_275(bool bParam0) //Position: 0xC940 / 51520
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

int Function_276(bool bParam0) //Position: 0xC96F / 51567
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

bool Function_277() //Position: 0xCA27 / 51751
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

bool Function_278(int iParam0) //Position: 0xCA61 / 51809
{
	return iParam0->f_20;
}

void Function_279(var uParam0, int iParam1) //Position: 0xCA6B / 51819
{
	Function_280(uParam0, iParam1, 0);
	return;
}

void Function_280(var uParam0, bool bParam1, bool bParam2) //Position: 0xCA79 / 51833
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
			Function_281(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_281(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_281(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xCBC5 / 52165
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

int Function_282() //Position: 0xCBEE / 52206
{
	switch (bLocal_328)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
				if (Function_286())
				{
					Function_331(Global_34573, (*&Local_4 + 344)[0], 1, 1, 1);
					Function_331(bLocal_332, (*&Local_4 + 344)[1], 1, 1, 1);
					TASK_STAND_STILL(bLocal_332, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_332, true);
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
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

struct<272> Function_283() //Position: 0xCC72 / 52338
{
	var uVar0;
	
	Function_285(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("home02_son01_layout");
	Local_4.f_184 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 168)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -60f, 116,4573f, 1388f, 0.0f, 60,51438f, 0.0f, 40,09774f, 15,32191f, 38,18008f);
	ADD_TO_VOLUME_SET(Local_4.f_184, (*&Local_4 + 168)[0]);
	(*&Local_4 + 168)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVol", 2, -77,5871f, 116,8612f, 1417,23f, 0.0f, 0.0f, 0.0f, 10,10873f, 12,49781f, 8,609169f);
	ADD_TO_VOLUME_SET(Local_4.f_184, (*&Local_4 + 168)[1]);
	(*&Local_4 + 168)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseRestriction", 2, -77,06477f, 116,8612f, 1417,92f, 0.0f, -2,093994f, 0.0f, 8.0f, 10.0f, 8.0f);
	ADD_TO_VOLUME_SET(Local_4.f_184, (*&Local_4 + 168)[2]);
	Local_4.f_208 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary01_set");
	(*&Local_4 + 188)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_01", 2, -616.0f, 171,4841f, 1416f, 0.0f, 28,23818f, 0.0f, 100.0f, 100.0f, 800.0f);
	ADD_TO_VOLUME_SET(Local_4.f_208, (*&Local_4 + 188)[0]);
	(*&Local_4 + 188)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_02", 2, -816,3707f, 189,6194f, 1584,052f, 0.0f, 27,55332f, 0.0f, 100.0f, 100.0f, 800.0f);
	ADD_TO_VOLUME_SET(Local_4.f_208, (*&Local_4 + 188)[1]);
	(*&Local_4 + 188)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_03", 2, -852.0f, 190,2063f, 1212.0f, 0.0f, 110,3436f, 0.0f, 100.0f, 100.0f, 600.0f);
	ADD_TO_VOLUME_SET(Local_4.f_208, (*&Local_4 + 188)[2]);
	(*&Local_4 + 188)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary01_04", 2, -660.0f, 176,6902f, 1780f, 0.0f, 110,3436f, 0.0f, 100.0f, 100.0f, 600.0f);
	ADD_TO_VOLUME_SET(Local_4.f_208, (*&Local_4 + 188)[3]);
	Local_4.f_240 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Boundary02_set");
	(*&Local_4 + 212)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_01", 2, -616.0f, 171,4841f, 1416f, 0.0f, 28,23818f, 0.0f, 100.0f, 100.0f, 800.0f);
	ADD_TO_VOLUME_SET(Local_4.f_240, (*&Local_4 + 212)[0]);
	(*&Local_4 + 212)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_03", 2, -852.0f, 190,2063f, 1212.0f, 0.0f, 110,3436f, 0.0f, 100.0f, 100.0f, 600.0f);
	ADD_TO_VOLUME_SET(Local_4.f_240, (*&Local_4 + 212)[1]);
	(*&Local_4 + 212)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_02", 2, -805,6208f, 151,5189f, 1691,976f, 0.0f, -10,38585f, 0.0f, 100.0f, 100.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_240, (*&Local_4 + 212)[2]);
	(*&Local_4 + 212)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_05", 2, -804,9957f, 130,1467f, 1868,116f, 0.0f, 28,97737f, 0.0f, 100.0f, 100.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_240, (*&Local_4 + 212)[3]);
	(*&Local_4 + 212)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_04", 2, -632.0f, 156,4309f, 1857,686f, 0.0f, 108,7783f, 0.0f, 100.0f, 100.0f, 600.0f);
	ADD_TO_VOLUME_SET(Local_4.f_240, (*&Local_4 + 212)[4]);
	(*&Local_4 + 212)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_boundary02_06", 2, -901,0269f, 185,9518f, 1394,38f, 0.0f, 28,23818f, 0.0f, 100.0f, 100.0f, 500.0f);
	ADD_TO_VOLUME_SET(Local_4.f_240, (*&Local_4 + 212)[5]);
	Local_4.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict01", 3, -856.0f, 186,7f, 1300.0f, 0.0f, 0.0f, 0.0f, 20.0f, 50.0f, 20.0f);
	Local_4.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict02", 3, -659,8f, 175,1f, 1672.0f, 0.0f, 0.0f, 0.0f, 20.0f, 50.0f, 20.0f);
	Local_4.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict03", 3, -763,6307f, 144,3996f, 1816,154f, 0.0f, 0.0f, 0.0f, 20.0f, 50.0f, 20.0f);
	Local_4.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict04", 3, -732.0f, 176,3f, 1416.0f, 0.0f, 0.0f, 0.0f, 20.0f, 50.0f, 20.0f);
	Local_4.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_restrict05", 3, -600,923f, 177,3287f, 1831,38f, 0.0f, 0.0f, 0.0f, 20.0f, 50.0f, 20.0f);
	Local_4.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_hunting01", 3, -856.0f, 186,7f, 1300.0f, 0.0f, 20.0f, 0.0f, 40.0f, 50.0f, 40.0f);
	Local_4.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_hunting02", 3, -659,8f, 175,1f, 1672.0f, 0.0f, 20.0f, 0.0f, 40.0f, 50.0f, 40.0f);
	Local_4.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_hunting03", 3, -763,6307f, 144,3996f, 1816,154f, 0.0f, 20.0f, 0.0f, 40.0f, 50.0f, 40.0f);
	Local_4.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_hunting04", 3, -732.0f, 176,3206f, 1416f, 0.0f, 20.0f, 0.0f, 40.0f, 50.0f, 40.0f);
	Local_4.f_280 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective01", 2, -500f, 155,6078f, 1376.0f, 0.0f, -31,14743f, 0.0f, 10.0f, 30.0f, 30.0f);
	Local_4.f_284 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_finish01", 2, -482,2923f, 154,0598f, 1389,764f, 0.0f, -35,85153f, 0.0f, 10.0f, 30.0f, 30.0f);
	Local_4.f_288 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective03", 2, -78,285f, 116,8612f, 1418,285f, 0.0f, -6,652956f, 0.0f, 10,67592f, 30.0f, 12,38602f);
	Local_4.f_292 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_manzanita", 2, -453,2839f, 152,7373f, 1617,92f, 0.0f, 0.0f, 0.0f, 250.0f, 100.0f, 250.0f);
	Local_4.f_316 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "ManzanitaVolumes_set");
	(*&Local_4 + 296)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseVolume", 2, -424,1354f, 151,1609f, 1586,496f, 0.0f, 23,50725f, 0.0f, 11,42754f, 19,74509f, 9,604965f);
	ADD_TO_VOLUME_SET(Local_4.f_316, (*&Local_4 + 296)[0]);
	(*&Local_4 + 296)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "JackVolume", 2, -439,4958f, 152,3514f, 1621,257f, 0.0f, 23,50725f, 0.0f, 3,601024f, 5,43946f, 3,471727f);
	ADD_TO_VOLUME_SET(Local_4.f_316, (*&Local_4 + 296)[1]);
	(*&Local_4 + 296)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "RufusVolume", 2, -439,3225f, 152,3514f, 1621,235f, 0.0f, 14,20942f, 0.0f, 8,373956f, 5,43946f, 8,275108f);
	ADD_TO_VOLUME_SET(Local_4.f_316, (*&Local_4 + 296)[2]);
	(*&Local_4 + 296)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ShopVolume", 2, -451,9175f, 157,9807f, 1620,605f, 0.0f, 18,35858f, 0.0f, 9,641255f, 15,32468f, 16,55424f);
	ADD_TO_VOLUME_SET(Local_4.f_316, (*&Local_4 + 296)[3]);
	Local_4.f_320 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent01a", 2, -286,3795f, 131,6425f, 1322,406f, 0.0f, -6,652956f, 0.0f, 37,76464f, 30.0f, 33,77028f);
	Local_4.f_324 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_dog_scent01b", 2, -510,698f, 156,338f, 1368,691f, 0.0f, -37,97134f, 0.0f, 37,76464f, 30.0f, 33,77028f);
	Local_4.f_328 = CREATE_VOLUME_IN_LAYOUT(Local_4, "VolHorseJump", 2, -80.0f, 116,8612f, 1416f, 0.0f, -6,652956f, 0.0f, 20,32594f, 30.0f, 19,89235f);
	Local_4.f_332 = CREATE_VOLUME_IN_LAYOUT(Local_4, "HomeVolume", 2, -88,66958f, 117,6969f, 1420,484f, 0.0f, 4,701394f, 0.0f, 243,5695f, 142,8223f, 269,9213f);
	Local_4.f_336 = CREATE_VOLUME_IN_LAYOUT(Local_4, "HomeVolume1", 2, -67,02754f, 117,6969f, 1263,39f, 0.0f, 19,19381f, 0.0f, 141,2762f, 142,8223f, 65,43433f);
	Local_4.f_340 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 344)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -59,632f, 116,457f, 1387,92f, 0.0f, 309,4207f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 344)[0], Local_4.f_340);
	(*&Local_4 + 344)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -58,17109f, 116,457f, 1388,314f, 0.0f, 290,785f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 344)[1], Local_4.f_340);
	(*&Local_4 + 344)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -77,28787f, 116,8612f, 1418,517f, 0.0f, -459,472f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 344)[2], Local_4.f_340);
	(*&Local_4 + 344)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart01", -76,75131f, 116,8612f, 1416,562f, 0,02966168f, -111,2905f, 1,095516f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 344)[3], Local_4.f_340);
	(*&Local_4 + 344)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart01", -85,845f, 117,275f, 1405,845f, 0.0f, -293,466f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 344)[4], Local_4.f_340);
	(*&Local_4 + 344)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "WifeStart01", -96.0f, 118,8691f, 1368f, 0.0f, 148,3986f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 344)[5], Local_4.f_340);
	(*&Local_4 + 344)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "UncleStart01", -64f, 117,7402f, 1360f, 0.0f, 148,3986f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 344)[6], Local_4.f_340);
	(*&Local_4 + 344)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "BookStart01", -57,12691f, 116,4844f, 1388f, -90.0f, 0.0f, -90.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 344)[7], Local_4.f_340);
	Local_4.f_380 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 384)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -489,4322f, 155,8554f, 1392,127f, 0.0f, 54,78261f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 384)[0], Local_4.f_380);
	(*&Local_4 + 384)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -485,1745f, 154,9583f, 1382,417f, 0.0f, 47,61708f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 384)[1], Local_4.f_380);
	(*&Local_4 + 384)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart02", -488,4922f, 155,5023f, 1387,821f, 0.0f, 46,86918f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 384)[2], Local_4.f_380);
	(*&Local_4 + 384)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart02", -488,4149f, 155,2506f, 1379,404f, 0.0f, 62,37252f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 384)[3], Local_4.f_380);
	(*&Local_4 + 384)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart02", -499,8856f, 156,1362f, 1376.0f, 0.0f, 54,73191f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 384)[4], Local_4.f_380);
	Local_4.f_408 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 412)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -844,0001f, 184,7214f, 1308f, 0.0f, -151,9222f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 412)[0], Local_4.f_408);
	(*&Local_4 + 412)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -852.0f, 185,8514f, 1311,999f, 0.0f, 212,991f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 412)[1], Local_4.f_408);
	(*&Local_4 + 412)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart03", -848,0001f, 186,0467f, 1308f, 0.0f, 214,3819f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 412)[2], Local_4.f_408);
	(*&Local_4 + 412)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart03", -856,0001f, 187,1848f, 1308f, 0.0f, 210,9685f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 412)[3], Local_4.f_408);
	(*&Local_4 + 412)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart03", -844.0f, 184,7214f, 1312f, 0.0f, 212,8771f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 412)[4], Local_4.f_408);
	Local_4.f_436 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	(*&Local_4 + 440)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -767,8907f, 143,8967f, 1822,389f, 0.0f, -65,25877f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 440)[0], Local_4.f_436);
	(*&Local_4 + 440)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart04", -759,896f, 144,4938f, 1820,047f, 0.0f, 103,0233f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 440)[1], Local_4.f_436);
	(*&Local_4 + 440)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd04", -759,896f, 144,4938f, 1820,047f, 0.0f, 103,0233f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 440)[2], Local_4.f_436);
	(*&Local_4 + 440)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart04", -771,8225f, 143,9494f, 1820,18f, 0.0f, 315,9827f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 440)[3], Local_4.f_436);
	(*&Local_4 + 440)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart04", -758,1589f, 144,8854f, 1817,757f, 0.0f, 199,1062f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 440)[4], Local_4.f_436);
	(*&Local_4 + 440)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart04", -759,693f, 144,9097f, 1812,176f, 0.0f, 149,1774f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 440)[5], Local_4.f_436);
	(*&Local_4 + 440)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "ElkStart04", -763,8279f, 144,099f, 1820,071f, 0.0f, 6,688036f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 440)[6], Local_4.f_436);
	Local_4.f_472 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", Local_4, 8, 0);
	(*&Local_4 + 476)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart05", -759,087f, 181,2669f, 1588,472f, 0.0f, -222,4582f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 476)[0], Local_4.f_472);
	(*&Local_4 + 476)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart05", -758,9849f, 181,2669f, 1591,471f, 0.0f, 142,455f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 476)[1], Local_4.f_472);
	(*&Local_4 + 476)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart05", -763,0898f, 181,5971f, 1590,114f, 0.0f, 267,0839f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 476)[2], Local_4.f_472);
	(*&Local_4 + 476)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart05", -767,1053f, 181,9111f, 1591,742f, 0.0f, 274,5515f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 476)[3], Local_4.f_472);
	(*&Local_4 + 476)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart05", -767,0947f, 181,9111f, 1588,717f, 0.0f, 265,1396f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 476)[4], Local_4.f_472);
	Local_4.f_500 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene06Set", Local_4, 8, 0);
	(*&Local_4 + 504)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart06", -423,4149f, 151,0259f, 1612,49f, 0.0f, -248,4809f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 504)[0], Local_4.f_500);
	(*&Local_4 + 504)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart06", -423,9886f, 151,0173f, 1615,428f, 0.0f, 142,455f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 504)[1], Local_4.f_500);
	(*&Local_4 + 504)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart06", -425,0565f, 151,0259f, 1610,344f, 0.0f, 139,2676f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 504)[2], Local_4.f_500);
	(*&Local_4 + 504)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart06", -424,6304f, 151,0436f, 1606,555f, 0.0f, 141,8923f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 504)[3], Local_4.f_500);
	(*&Local_4 + 504)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart06", -426,3392f, 151,2673f, 1615,733f, 0.0f, -30,82258f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 504)[4], Local_4.f_500);
	(*&Local_4 + 504)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "ShopStart06", -455,618f, 153,6423f, 1620,2f, 0.0f, -30,82258f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 504)[5], Local_4.f_500);
	Local_4.f_532 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene07Set", Local_4, 8, 0);
	(*&Local_4 + 536)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart07", -425,0798f, 151,269f, 1619,563f, 0.0f, -222,4582f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 536)[0], Local_4.f_532);
	(*&Local_4 + 536)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart07", -426,8374f, 151,2673f, 1615,933f, 0.0f, 142,455f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 536)[1], Local_4.f_532);
	(*&Local_4 + 536)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart07", -420,7676f, 151,0259f, 1612,671f, 0.0f, 366,5156f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 536)[2], Local_4.f_532);
	(*&Local_4 + 536)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStart07", -418,2608f, 151,0173f, 1616,032f, 0.0f, 11,5599f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 536)[3], Local_4.f_532);
	(*&Local_4 + 536)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStart07", -422,0284f, 151,019f, 1616,991f, 0.0f, 6,072476f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 536)[4], Local_4.f_532);
	Local_4.f_560 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	(*&Local_4 + 564)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartLast", -80,76873f, 116,8612f, 1419,217f, 0.0f, -184,7184f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[0], Local_4.f_560);
	(*&Local_4 + 564)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEndLast", -80,79981f, 116,8612f, 1419,195f, 0.0f, -186,3389f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[1], Local_4.f_560);
	(*&Local_4 + 564)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStartLast", -88,26501f, 116,9373f, 1409,319f, 0.0f, 214,9408f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[2], Local_4.f_560);
	(*&Local_4 + 564)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEndLast", -88,27531f, 116,9388f, 1409,355f, 0.0f, 392,05f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[3], Local_4.f_560);
	(*&Local_4 + 564)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStartLast", -76,75131f, 116,8612f, 1416,562f, 0.0f, -118,5378f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[4], Local_4.f_560);
	(*&Local_4 + 564)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEndLast", -76,75131f, 116,8612f, 1416,562f, 0.0f, -123,0381f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[5], Local_4.f_560);
	(*&Local_4 + 564)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseStartLast", -77,28787f, 116,8612f, 1418,517f, 0.0f, 242,1845f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[6], Local_4.f_560);
	(*&Local_4 + 564)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseEndLast", -77,28787f, 116,8612f, 1418,517f, 0.0f, 260,0302f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[7], Local_4.f_560);
	(*&Local_4 + 564)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "DogStartLast", -74,16879f, 116,8612f, 1407,398f, 0.0f, -110,2214f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[8], Local_4.f_560);
	(*&Local_4 + 564)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "DogEndLast", -55,14325f, 116,8612f, 1413,572f, 0.0f, 49,29332f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 564)[9], Local_4.f_560);
	Local_4.f_608 = CREATE_POINT_IN_LAYOUT(Local_4, "point_hunting01", -856,0001f, 186,7294f, 1300f, 0.0f, 0.0f, 0.0f);
	Local_4.f_612 = CREATE_POINT_IN_LAYOUT(Local_4, "point_hunting02", -659,8233f, 174,6981f, 1672,03f, 0.0f, 0.0f, 0.0f);
	Local_4.f_616 = CREATE_POINT_IN_LAYOUT(Local_4, "point_hunting03", -763,6307f, 144,3996f, 1816,154f, 0.0f, 0.0f, 0.0f);
	Local_4.f_620 = CREATE_POINT_IN_LAYOUT(Local_4, "point_hunting04", -732.0f, 176,3206f, 1416f, 0.0f, 0.0f, 0.0f);
	Local_4.f_624 = CREATE_POINT_IN_LAYOUT(Local_4, "point_dog01", -780.0f, 176,6902f, 1292.0f, 0.0f, 89,56735f, 0.0f);
	Local_4.f_628 = CREATE_POINT_IN_LAYOUT(Local_4, "point_dog02", -692,3898f, 177,6765f, 1635,639f, 0.0f, 194,9541f, 0.0f);
	Local_4.f_632 = CREATE_POINT_IN_LAYOUT(Local_4, "point_dog03", -665,0641f, 171,9918f, 1764,751f, 0.0f, 113,5627f, 0.0f);
	Local_4.f_636 = CREATE_POINT_IN_LAYOUT(Local_4, "point_dog04", -720.0f, 177,6941f, 1468f, 0.0f, 29,90766f, 0.0f);
	Local_4.f_640 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective01", -499,8856f, 156,1362f, 1376.0f, 0.0f, 0.0f, 0.0f);
	Local_4.f_644 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective02", -423,9132f, 151,0259f, 1612,689f, 0.0f, 0.0f, 0.0f);
	Local_4.f_648 = CREATE_POINT_IN_LAYOUT(Local_4, "point_objective03", -77,83759f, 116,8612f, 1417,838f, 0.0f, 0.0f, 0.0f);
	*(&Local_4 + 652) = { -67,99997f, 112,0132f, 1148f };
	*(&Local_4 + 652 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_4.f_676 = CREATE_POINT_IN_LAYOUT(Local_4, "point_dog_face", -67,99997f, 112,0132f, 1148f, 0.0f, 0.0f, 0.0f);
	*(&Local_4 + 680) = { -75,842f, 117,858f, 1419,23f };
	*(&Local_4 + 680 + 12) = { 0.0f, 268,941f, 0.0f };
	*(&Local_4 + 704) = { -75,856f, 117,858f, 1417,472f };
	*(&Local_4 + 704 + 12) = { 0.0f, 267.0f, 0.0f };
	*(&Local_4 + 728) = { -88,55602f, 117,5194f, 1403,736f };
	*(&Local_4 + 728 + 12) = { 0.0f, 343,5621f, 0.0f };
	Local_4.f_752 = CREATE_OBJECTSET_IN_LAYOUT("DogScent01aSet", Local_4, 8, 0);
	(*&Local_4 + 756)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01a_01", -272f, 131,5137f, 1324f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 756)[0], Local_4.f_752);
	(*&Local_4 + 756)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01a_02", -280.0f, 131,4975f, 1320f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 756)[1], Local_4.f_752);
	(*&Local_4 + 756)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01a_03", -288.0f, 132,0098f, 1324.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 756)[2], Local_4.f_752);
	(*&Local_4 + 756)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01a_04", -296.0f, 132,9345f, 1328f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 756)[3], Local_4.f_752);
	Local_4.f_776 = CREATE_OBJECTSET_IN_LAYOUT("DogScent01bSet", Local_4, 8, 0);
	(*&Local_4 + 780)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01b_01", -499,8856f, 156,1362f, 1376.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 780)[0], Local_4.f_776);
	(*&Local_4 + 780)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01b_02", -503,0443f, 155,9924f, 1368,312f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 780)[1], Local_4.f_776);
	(*&Local_4 + 780)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01b_03", -514,064f, 156,6116f, 1360f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 780)[2], Local_4.f_776);
	(*&Local_4 + 780)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_scent01b_04", -521,8978f, 157,1542f, 1358,102f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 780)[3], Local_4.f_776);
	Local_4.f_800 = CREATE_OBJECTSET_IN_LAYOUT("ManzanitaPointsSet", Local_4, 8, 0);
	(*&Local_4 + 804)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseWait", -423,8416f, 151,1687f, 1587,102f, 0.0f, 297,2401f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 804)[0], Local_4.f_800);
	(*&Local_4 + 804)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionHorseWait", -423,3262f, 151,1825f, 1588,165f, 0.0f, 274,5515f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 804)[1], Local_4.f_800);
	Local_4.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_4, "sit_cleanknife", "sit_cleanknife", -439,6414f, 152,3514f, 1620,573f, 0.0f, -183,5839f, 0.0f);
	Local_4.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_4, "dog_sleeping", "dog_sleeping", -442,6212f, 152,3512f, 1621,41f, 0.0f, -74,68732f, 0.0f);
}

struct<8> ´°D¾qâÄ(  C9¹°DÃ~¤Ä"  C7»DÇBDÄNòC1ÎDÌô~Ä"^C.²´DÐ(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27) //Position: 0xF515 / 62741
{
	int iVar71;
	
	Unknown_Function();
}

void Function_285(int iParam0, int iParam1) //Position: 0xF6D5 / 63189
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

bool Function_286() //Position: 0xF71E / 63262
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_303(&bLocal_227))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_333))
		{
			bLocal_333 = Function_296(1, 1, -78,446f, 116,861f, 1419,268f, -469,06f, 1, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_332))
		{
			bLocal_332 = Function_287(12, 0, 1, -58,721f, 116,457f, 1388,914f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_332, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_523))
		{
			bLocal_523 = Function_287(14, 0, 1, -64.0f, 117,74f, 1360.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_523, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_287(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0xF7D1 / 63441
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
		Function_221(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_295(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_290(StackVal, iParam7);
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
		Function_289(bVar1, 0, 0, 0, 0);
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
		Function_288(bVar1, 0);
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

void Function_288(bool bParam0, bool bParam1) //Position: 0xFCBB / 64699
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_289(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xFCDB / 64731
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

bool Function_290(int iParam0, bool bParam1) //Position: 0xFD2F / 64815
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_294(iParam0))
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
						Function_291(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_291(bool bParam0, bool bParam1) //Position: 0xFDAF / 64943
{
	Function_293(bParam0);
	Function_292(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_292(bool bParam0) //Position: 0xFDD5 / 64981
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_293(bool bParam0) //Position: 0xFDF9 / 65017
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

bool Function_294(int iParam0) //Position: 0xFEC8 / 65224
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_295(int iParam0, bool bParam1) //Position: 0xFEDF / 65247
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

bool Function_296(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7) //Position: 0xFF72 / 65394
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
	if (Global_3381 || Function_226(1))
	{
		Function_302(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_301())
		{
			return "";
		}
	}
	if (!Function_299())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_234(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_234(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_234(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_234(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_298(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_298(StackVal, StackVal, vVar5, 0, 1, 1);
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
					}
				}
			}
		}
	}
}

void Function_297(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x102CD / 66253
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

var Function_298(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1030A / 66314
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

bool Function_299() //Position: 0x103A5 / 66469
{
	if (Function_300() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_300() //Position: 0x103BB / 66491
{
	return Global_12976.f_152;
}

bool Function_301() //Position: 0x103C6 / 66502
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_302(var uParam0, bool bParam1, bool bParam2) //Position: 0x103E6 / 66534
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

bool Function_303(bool bParam0) //Position: 0x10413 / 66579
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_308();
	iVar1 = 0;
	if (!Function_181(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_307(bParam0[iVar03], 8);
		}
		else if (Function_306())
		{
			iVar1 = 1;
			Function_307(bParam0[iVar03], 8);
		}
		Function_307(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_181(bParam0[iVar03], 4))
		{
			if (!Function_181(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_181(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_181(bParam0[03], 8) || iVar1));
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
				Function_307(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_181(bParam0[iVar03], 4))
		{
			if (!Function_181(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_307(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_307(bParam0[iVar03], 2);
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
							Function_307(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_307(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_307(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_307(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_307(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_307(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_307(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_307(bParam0[iVar03], 2);
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
	Function_304();
	return 1;
}

void Function_304() //Position: 0x1078E / 67470
{
	if (!Function_305(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_305(int iParam0) //Position: 0x107CE / 67534
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_306() //Position: 0x107EA / 67562
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

void Function_307(var uParam0, int iParam1) //Position: 0x10815 / 67605
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_308() //Position: 0x10826 / 67622
{
	if (!Function_305(128))
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

int Function_309() //Position: 0x10868 / 67688
{
	switch (bLocal_328)
	{
		case 0x00000063:
			if (!Function_278(&Local_220))
			{
				Function_310(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_310(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_310(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_310(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0x108C2 / 67778
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
		Function_238();
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
	Function_270(bParam9);
}

int Function_311() //Position: 0x109B2 / 68018
{
	switch (bLocal_328)
	{
		case 0x00000063:
			TASK_STAND_STILL(bLocal_332, -1.0f, 0, 0);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_332, 0);
			SET_ANIM_SET_FOR_ACTOR(bLocal_332, "son_crouchGetup", 0);
			SET_ACTION_NODE_FOR_ACTOR(bLocal_332, "son_crouchGetup/getup");
			iLocal_535 = 1;
			GET_OBJECT_POSITION((*&Local_4 + 344)[2], &vLocal_584);
			SET_GAME_CAMERA_DRIFTZ(-2,5f);
			ENABLE_GAME_CAMERA_FOCUS(vLocal_584, -1.0f, 6, 1, 1, 0);
			SET_DRAW_ACTOR(bLocal_523, true);
			return 1;
			break;
		
		case 0x00000065:
			if (IS_ACTOR_VALID(bLocal_332))
			{
				Function_331(bLocal_332, (*&Local_4 + 564)[3], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_333))
			{
				Function_331(bLocal_333, (*&Local_4 + 564)[5], 1, 1, 1);
				TASK_STAND_STILL(bLocal_333, -1.0f, 0, 0);
			}
			if (IS_ACTOR_VALID(bLocal_527))
			{
				Function_331(bLocal_527, (*&Local_4 + 564)[7], 1, 1, 1);
				TASK_STAND_STILL(bLocal_527, -1.0f, 0, 0);
			}
			SET_DRAW_ACTOR(bLocal_523, true);
			Function_331(Global_34573, (*&Local_4 + 564)[1], 1, 1, 1);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_312() //Position: 0x10ACC / 68300
{
	switch (bLocal_328)
	{
		case 0x00000063:
			if (!Function_315() && !Function_303(&bLocal_252))
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_313(&uLocal_504, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_313(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x10B10 / 68368
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_314(*uParam0), iParam2, iParam3, iParam4);
	}
}

var Function_314(int iParam0) //Position: 0x10B34 / 68404
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

bool Function_315() //Position: 0x11071 / 69745
{
	Function_318(&Local_4 + 4, 980, 2, 0);
	Function_318(&Local_4 + 4, 1111, 2, 0);
	Function_318(&Local_4 + 4, 1109, 2, 0);
	Function_318(&Local_4 + 4, 1110, 2, 0);
	Function_318(&Local_4 + 4, Global_8447[03], 2, 0);
	Function_316(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanknife", 1, 0);
	Function_316(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/dog_sleeping", 1, 0);
	if (Function_303(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_316(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1114C / 69964
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_317(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_307(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_317(var uParam0, int iParam1, int iParam2) //Position: 0x11184 / 70020
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_181(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_307(uParam0[iVar03], 4);
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

var Function_318(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x11248 / 70216
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_181(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_307(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_307(uParam0[iVar03], 8);
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

int Function_319() //Position: 0x11318 / 70424
{
	switch (bLocal_328)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
			}
			else if (Function_286())
			{
				if (IS_ACTOR_VALID(bLocal_332))
				{
					Function_331(bLocal_332, (*&Local_4 + 344)[1], 1, 1, 1);
					Function_331(Global_34573, (*&Local_4 + 344)[0], 1, 1, 1);
					Function_331(bLocal_523, (*&Local_4 + 344)[4], 1, 1, 1);
					SET_DRAW_ACTOR(bLocal_523, false);
					TASK_STAND_STILL(bLocal_523, -1.0f, 0, 0);
					TASK_STAND_STILL(bLocal_332, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_332, true);
					return 1;
				}
			}
			break;
		
		case 0x00000065:
			SET_DRAW_ACTOR(bLocal_523, false);
			Function_313(&uLocal_504, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_320() //Position: 0x113C4 / 70596
{
	switch (bLocal_328)
	{
		case 0x00000063:
			Function_323(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_321(StackVal, StackVal, bLocal_219, *(&Global_3422[5240] + 52), &Local_4 + 168[0], 1, 0, 0, 0, 1, 1);
			Function_313(&uLocal_504, 0, 0, 4294967295, 4294967295);
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_525, (*&Local_4 + 168)[0], 4, 1);
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_524, (*&Local_4 + 168)[0], 4, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_313(&uLocal_504, 0, 0, 4294967295, 4294967295);
			if (!IS_ACTOR_RIDING(bLocal_332))
			{
				ACTOR_MOUNT_ACTOR(bLocal_332, bLocal_527);
			}
			Function_323(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_234((*&Local_4 + 564)[0]);
			Function_321(StackVal, StackVal, bLocal_219, Function_234((*&Local_4 + 564)[0]), &Local_4 + 168[1], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_323(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_321(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x1149B / 70811
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
				Function_322(bVar1, bParam0);
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

void Function_322(bool bParam0, bool bParam1) //Position: 0x11709 / 71433
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

void Function_323(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x1177E / 71550
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
	Function_238();
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
				Function_325(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_325(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_324()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_324()));
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
	if (Function_305(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_305(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

var Function_324() //Position: 0x11A27 / 72231
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

vector3 Function_325(bool bParam0) //Position: 0x11AA6 / 72358
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_326() //Position: 0x11AB7 / 72375
{
	if (!SQUAD_IS_VALID(Local_4.f_104))
	{
		Function_330();
		if (SQUAD_IS_VALID(Local_4.f_104))
		{
			Function_329(Local_4.f_104, 0);
			Function_328(Local_4.f_104, 3);
			Function_327(Local_4.f_104, 0, 0, 0);
			bLocal_527 = (*&Local_4 + 92)[02];
			if (IS_ACTOR_VALID(bLocal_527))
			{
				Function_331(bLocal_527, (*&Local_4 + 564)[6], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_332, bLocal_527);
				SET_MOST_RECENT_MOUNT(bLocal_332, bLocal_527);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_104, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_523))
	{
		Function_331(bLocal_523, (*&Local_4 + 564)[8], 1, 1, 1);
		if (IS_ACTOR_VALID(bLocal_523))
		{
			SET_ACTOR_FACTION(bLocal_523, 20);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_523, false);
			Function_297(bLocal_523, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(bLocal_523, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_523, 0.0f);
			SET_ACTOR_INVULNERABILITY(bLocal_523, true);
			DECOR_SET_BOOL(bLocal_523, "Frank", true);
			TASK_STAND_STILL(bLocal_523, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_523, true);
		}
	}
	else if (!iLocal_343[6])
	{
		Function_331(bLocal_523, (*&Local_4 + 564)[8], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(bLocal_523) && SQUAD_IS_VALID(Local_4.f_104))
	{
		return 1;
	}
	return 0;
}

void Function_327(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x11BE8 / 72680
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		Function_297(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), bParam1, iParam2, bParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_328(bool bParam0, bool bParam1) //Position: 0x11C1E / 72734
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

void Function_329(bool bParam0, bool bParam1) //Position: 0x11C60 / 72800
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

void Function_330() //Position: 0x11CA1 / 72865
{
	Local_4.f_104 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Horse01"));
	(*&Local_4 + 92)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_01_01", 980, -72.0f, 116,8612f, 1400f, 0.0f, 120,6227f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 92)[02], Local_4.f_104);
	return;
}

void Function_331(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x11CFE / 72958
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

void Function_332(int iParam0) //Position: 0x11E05 / 73221
{
	if (!Function_278(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_191(1, 0, 1);
		}
	}
	return;
}

bool Function_333(bool bParam0) //Position: 0x11E20 / 73248
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

void Function_334() //Position: 0x11E3C / 73276
{
	Function_341(12);
	Function_341(13);
	Function_341(11);
	Function_341(35);
	Function_341(6);
	Function_341(3);
	Function_341(15);
	Function_341(8);
	Function_341(19);
	Function_341(5);
	Function_162(18444);
	Function_339(4);
	Function_338();
	Function_337();
	if (bLocal_328 == 0)
	{
		Function_336(3);
		Function_335(3);
	}
	else if (bLocal_328 == 1)
	{
		Function_336(3);
		Function_335(3);
	}
	else if (bLocal_328 == 2)
	{
		Function_336(3);
		Function_335(3);
	}
	else if (bLocal_328 == 3)
	{
		Function_336(3);
		Function_335(3);
	}
	else if (bLocal_328 == 4)
	{
		Function_336(3);
		Function_335(3);
	}
	else if (bLocal_328 == 5)
	{
		Function_336(3);
		Function_335(3);
	}
	else if (bLocal_328 == 6)
	{
		Function_336(3);
		Function_335(3);
	}
	return;
}

void Function_335(int iParam0) //Position: 0x11EFC / 73468
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

void Function_336(int iParam0) //Position: 0x11F1A / 73498
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

void Function_337() //Position: 0x11F3F / 73535
{
	Global_28842.f_44 = 4294967295;
	return;
}

void Function_338() //Position: 0x11F4B / 73547
{
	Global_28842.f_40 = 0;
	return;
}

void Function_339(int iParam0) //Position: 0x11F57 / 73559
{
	Function_340(&Global_28842, iParam0);
	return;
}

void Function_340(var uParam0, int iParam1) //Position: 0x11F65 / 73573
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_341(int iParam0) //Position: 0x11F88 / 73608
{
	if (iParam0 >= 4294967295 && iParam0 < 36)
	{
		return;
	}
	Global_30767[iParam0] = 0;
	Global_30837 = 1;
	return;
}

void Function_342(bool bParam0) //Position: 0x11FA8 / 73640
{
	Function_343(0, 0x40400000);
	Function_205();
	Function_204();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_343(bool bParam0, float fParam1) //Position: 0x11FDC / 73692
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
	Function_345();
	Function_344();
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

void Function_344() //Position: 0x120DA / 73946
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_345() //Position: 0x1210C / 73996
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

void Function_346(bool bParam0) //Position: 0x12209 / 74249
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
						if ((((((((((((((((((((((((((((((((((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1109 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1110) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1111) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1118) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1119) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1120) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1116) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1117) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1124) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1125) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1126) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1127) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1121) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1122) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1123) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1088) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1089) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1090) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1087) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1091) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1092) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1093) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1049) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1050) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1051) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1052) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1060) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1061) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1062) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1063) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1068) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1069) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1070) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1071) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1073) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1074) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1075) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1076) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1095) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1096) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1097) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1098) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1099) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1100) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bVar1)) != 1101)
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

void Function_347() //Position: 0x124BC / 74940
{
	Function_346(bLocal_219);
	if (iLocal_329 < 3 && iLocal_329 > 105)
	{
		Function_405();
	}
	switch (iLocal_329)
	{
		case 0x00000000:
			Function_342(0);
			SET_ACTOR_HEALTH(bLocal_332, GET_ACTOR_MAX_HEALTH(bLocal_332));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_343[5] == 0)
			{
				Function_313(&uLocal_504, 13, 0, 4294967295, 4294967295);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				bLocal_330 = Global_30723[1];
				if (!Function_333(bLocal_330))
				{
					Function_332(&Local_220);
				}
				Function_331(Global_34573, (*&Local_4 + 536)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_333))
				{
					TASK_STAND_STILL(bLocal_333, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_333, true);
				}
				if (IS_ACTOR_VALID(bLocal_332))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_332);
					MEMORY_PREFER_RIDING(bLocal_332, false);
					CLEAR_ACTOR_MAX_SPEED(bLocal_332);
					CLEAR_ACTOR_MIN_SPEED(bLocal_332);
					TASK_STAND_STILL(bLocal_332, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_332, true);
					Function_403(bLocal_332, (*&Local_4 + 536)[3], 1, 1, 1);
				}
				Function_217(&vLocal_334);
				iLocal_329 = 1;
			}
			else
			{
				Function_217(&vLocal_334);
				iLocal_329 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_333(bLocal_330) || bLocal_330 != 4294967295))
			{
				Function_217(&vLocal_334);
				iLocal_329 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_402())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_520 = Function_401();
				if (IS_ACTOR_VALID(bLocal_523))
				{
					SET_ACTOR_HEALTH(bLocal_523, GET_ACTOR_MAX_HEALTH(bLocal_523));
				}
				if (iLocal_343[5] == 0)
				{
					Function_313(&uLocal_504, 13, 0, 4294967295, 4294967295);
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_333))
						{
							Function_331(bLocal_333, (*&Local_4 + 536)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_333))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_333);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_332))
					{
						if (IS_ACTOR_VALID(bLocal_527))
						{
							Function_331(bLocal_527, (*&Local_4 + 536)[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_332) && !IS_ACTOR_MOUNTED(bLocal_527))
							{
								ACTOR_MOUNT_ACTOR(bLocal_332, bLocal_527);
							}
						}
					}
				}
				iLocal_355 = 0;
				Function_396(&(Local_396[017]), bLocal_332, "Son", 1, 0x5f5e100, 1);
				Function_396(&(Local_396[117]), bLocal_523, "Dog", 0, 0x5f5e100, 1);
				Function_392(&(Local_396[117]), 1024);
				Function_396(&(Local_396[217]), bLocal_525, "Uncle", 0, 0x5f5e100, 1);
				Function_396(&(Local_396[317]), bLocal_524, "Wife", 0, 0x5f5e100, 1);
				Function_391(&(Local_396[417]));
				Function_391(&(Local_396[517]));
				Function_217(&vLocal_334);
				iLocal_329 = 6;
				Function_233(bLocal_328);
				Function_385(StackVal, StackVal, Function_233(bLocal_328), bLocal_328, Global_30637[1], Function_236(bLocal_328), 2);
			}
			break;
		
		case 0x00000006:
			if (Function_382(1))
			{
				if (GET_TASK_STATUS(bLocal_332, 0) != 1)
				{
					GET_OBJECT_POSITION((*&Local_4 + 504)[3], &vLocal_566);
					bLocal_514 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &vLocal_566, 2.0f, true);
					TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
					TASK_SEQUENCE_RELEASE(bLocal_514, 1);
					TASK_PRIORITY_SET(bLocal_332, true);
				}
			}
			if (IS_ACTOR_RIDING(Global_34573))
			{
				Function_313(&uLocal_504, 13, 0, 4294967295, 4294967295);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_332);
				if (DECOR_GET_BOOL(bLocal_219, "FindingHorse"))
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					DECOR_REMOVE(bLocal_219, "FindingHorse");
				}
				if (IS_BLIP_VALID(bLocal_528))
				{
					REMOVE_BLIP(bLocal_528);
				}
				if (IS_ACTOR_RIDING(bLocal_332))
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					TASK_CLEAR(bLocal_332);
					Function_217(&vLocal_334);
					Function_217(&bLocal_337);
					Function_217(&bLocal_340);
					iLocal_329 = 16;
				}
			}
			else
			{
				if (Function_381(Global_34573, Local_4.f_648) < (Function_379(Local_4.f_648, (*&Local_4 + 504)[5]) + 50.0f))
				{
					Function_227("beechers_abandoned");
					bLocal_353 = true;
				}
				if (IS_ACTOR_ALIVE(bLocal_333))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_333)))
					{
						if (IS_BLIP_VALID(bLocal_528))
						{
							REMOVE_BLIP(bLocal_528);
						}
						bLocal_528 = ADD_BLIP_FOR_ACTOR(bLocal_333, 334, 0, 2, 0);
						Function_378("Horse_return", 0x40f00000, 1, 2, 0, 0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(bLocal_528))
					{
						REMOVE_BLIP(bLocal_528);
					}
					if (!DECOR_GET_BOOL(bLocal_219, "FindingHorse"))
					{
						Function_378("Horse_find", 0x40f00000, 1, 2, 0, 0, 0);
						DECOR_SET_BOOL(bLocal_219, "FindingHorse", true);
					}
				}
			}
			break;
		
		case 0x00000010:
			bLocal_528 = ADD_BLIP_FOR_OBJECT(Local_4.f_648, 330, 0f, 2, 0);
			if (IS_BLIP_VALID(bLocal_528))
			{
			}
			GET_OBJECT_POSITION(Local_4.f_648, &vLocal_572);
			GET_OBJECT_ORIENTATION(Local_4.f_648, &vLocal_575);
			bLocal_538 = Function_377(StackVal, StackVal, StackVal, StackVal, bLocal_219, "HOME02_SON01GATEWAY02", vLocal_572, vLocal_575, Global_34573, 2,5f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
			if (IS_OBJECT_VALID(bLocal_538))
			{
			}
			GET_OBJECT_POSITION(Local_4.f_648, &vLocal_578);
			Function_375(StackVal, StackVal, vLocal_578, 0, 48, 1);
			if (IS_ACTOR_VALID(bLocal_332))
			{
				CLEAR_ACTOR_MAX_SPEED(bLocal_332);
				CLEAR_ACTOR_MAX_SPEED(bLocal_527);
				Function_221(12, 0, 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_332, 1);
				vLocal_584 = { -2.0f, 0.0f, 0.0f };
				TASK_FOLLOW_OBJECT(bLocal_332, Global_34573, &vLocal_584, 0, 0, 0, 0, 0, 0, 1);
				TASK_PRIORITY_SET(bLocal_332, true);
			}
			if (IS_ACTOR_VALID(bLocal_523))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_523);
				ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_523, Global_34573, 25.0f, 10.0f, 20.0f);
				vLocal_553[03] = { -3.0f, 0.0f, 6.0f };
				bLocal_514 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 3.0f, 0, 0);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(false, Global_34573, 5.0f, 4);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_523, bLocal_514);
				TASK_SEQUENCE_RELEASE(bLocal_514, 1);
				TASK_PRIORITY_SET(bLocal_523, true);
			}
			if (iLocal_343[5] == 0)
			{
				Function_374();
			}
			Function_217(&vLocal_334);
			iLocal_329 = 7;
			break;
		
		case 0x00000007:
			if (Function_266(&vLocal_334) <= 5.0f)
			{
				Function_378("home02_son01_obj12", 7,5f, 1, 2, 0, 0, 0);
				Function_217(&vLocal_334);
				Function_217(&bLocal_337);
				Function_217(&bLocal_340);
				Function_373();
				iLocal_329 = 8;
			}
			break;
		
		case 0x00000008:
			GET_OBJECT_POSITION(Local_4.f_648, &vLocal_584);
			Function_368(StackVal, StackVal, "$/cutscene/son_01_end/son_01_end", &uLocal_619, vLocal_584, 82141, 0, 150.0f, 200.0f, 2, 1, 1, 2, 0, 1);
			Function_367();
			if (Function_358(&bLocal_340, 100.0f, bLocal_333, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_353, 0, bLocal_219, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_528))
				{
					REMOVE_BLIP(bLocal_528);
				}
				if (IS_OBJECT_VALID(bLocal_538))
				{
					Function_184();
					Function_357(bLocal_538);
				}
				if (Function_381(Global_34573, Local_4.f_648) < (Function_379(Local_4.f_648, (*&Local_4 + 504)[5]) + 75.0f))
				{
					Function_227("beechers_abandoned");
					bLocal_353 = true;
				}
			}
			else
			{
				if (!IS_BLIP_VALID(bLocal_528))
				{
					bLocal_528 = ADD_BLIP_FOR_OBJECT(Local_4.f_648, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(bLocal_528))
					{
					}
				}
				if (!IS_OBJECT_VALID(bLocal_538))
				{
					GET_OBJECT_POSITION(Local_4.f_648, &vLocal_572);
					GET_OBJECT_ORIENTATION(Local_4.f_648, &vLocal_575);
					bLocal_538 = Function_377(StackVal, StackVal, StackVal, StackVal, bLocal_219, "HOME02_SON01GATEWAY02", vLocal_572, vLocal_575, Global_34573, 2,5f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					if (IS_OBJECT_VALID(bLocal_538))
					{
					}
					GET_OBJECT_POSITION(Local_4.f_648, &vLocal_578);
					Function_375(StackVal, StackVal, vLocal_578, 0, 48, 1);
				}
				else if (!DECOR_CHECK_EXIST(bLocal_219, "FinalDistanceRemainder"))
				{
					if (Function_381(Global_34573, Local_4.f_648) < (Function_379(Local_4.f_648, (*&Local_4 + 504)[5]) + 25.0f))
					{
						DECOR_SET_BOOL(bLocal_219, "FinalDistanceRemainder", true);
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Beechers_return", 7,5f, 0, 2, true, 0, 0, 0);
					}
				}
				else if (Function_381(Global_34573, Local_4.f_648) > (Function_379(Local_4.f_648, (*&Local_4 + 504)[5]) + 0.0f))
				{
					DECOR_REMOVE(bLocal_219, "FinalDistanceRemainder");
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					PRINT_OBJECTIVE_B("home02_son01_obj12", 7,5f, 0, 2, true, 0, 0, 0);
				}
				else if (Function_381(Global_34573, Local_4.f_648) < (Function_379(Local_4.f_648, (*&Local_4 + 504)[5]) + 75.0f))
				{
					Function_227("beechers_abandoned");
					bLocal_353 = true;
				}
				Function_348();
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (IS_VOLUME_VALID(Local_4.f_288))
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_288))
						{
							if (IS_BLIP_VALID(bLocal_528))
							{
								REMOVE_BLIP(bLocal_528);
							}
							SET_PLAYER_CONTROL(0, 0, 0, 0);
							TASK_GO_TO_OBJECT(Global_34573, (*&Local_4 + 564)[5], 1, 0, 1);
							TASK_GO_TO_OBJECT(bLocal_332, (*&Local_4 + 564)[7], 1, 0, 1);
							ABORT_SCRIPTED_CONVERSATION(1);
							Function_184();
							Function_357(bLocal_538);
							Function_217(&vLocal_334);
							iLocal_329 = 105;
						}
					}
				}
			}
			break;
		
		case 0x00000069:
			GET_OBJECT_POSITION(Local_4.f_648, &vLocal_584);
			Function_368(StackVal, StackVal, "$/cutscene/son_01_end/son_01_end", &uLocal_619, vLocal_584, 82141, 0, 150.0f, 200.0f, 2, 1, 1, 2, 0, 1);
			if (Function_266(&vLocal_334) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_217(&vLocal_334);
				iLocal_329 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_343[6] = 1;
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_523);
				Function_217(&vLocal_334);
				bLocal_328 = 101;
				iLocal_329 = 0;
			}
			break;
	}
	return;
}

int Function_348() //Position: 0x12F2B / 77611
{
	Function_356();
	if (iLocal_613)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_332, 12.0f))
			{
				RESTART_SCRIPTED_CONVERSATION();
				iLocal_613 = 0;
				Function_355("Home02_s1_RidesBakJak", 0);
			}
		}
	}
	else if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_268(&bLocal_606))
		{
			Function_354(&bLocal_606);
		}
	}
	else
	{
		if (iLocal_612)
		{
			iLocal_612 = 0;
		}
		if (!Function_268(&bLocal_606))
		{
			Function_217(&bLocal_606);
		}
		if (Function_266(&bLocal_606) < 4.0f)
		{
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_332, 25.0f))
				{
					switch (iLocal_614)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_612 = 1;
								Function_353();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_614 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_612 = 1;
								Function_352();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_614 = 2;
								}
							}
							break;
						
						case 0x00000002:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_612 = 1;
								Function_349();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_614 = 3;
								}
							}
							break;
						
						case 0x00000063:
							return 1;
							break;
						
						default:
							iLocal_614 = 99;
							break;
						}
					}
				}
			}
	}
	return 0;
}

void Function_349() //Position: 0x13050 / 77904
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_BakHomeBant_v3_AA", "Home02_s1_BakHomeBant_v3_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_BakHomeBant_v3_AB", "Home02_s1_BakHomeBant_v3_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_BakHomeBant_v3_AC", "Home02_s1_BakHomeBant_v3_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_BakHomeBant_v3_AD", "Home02_s1_BakHomeBant_v3_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_BakHomeBant_v3_AE", "Home02_s1_BakHomeBant_v3_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_BakHomeBant_v3_AF", "Home02_s1_BakHomeBant_v3_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_BakHomeBant_v3_AG", "Home02_s1_BakHomeBant_v3_AG", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_BakHomeBant_v3_AH1", "Home02_s1_BakHomeBant_v3_AH1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_BakHomeBant_v3_AH2", "Home02_s1_BakHomeBant_v3_AH2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_BakHomeBant_v3_AI", "Home02_s1_BakHomeBant_v3_AI", true, 1, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_350(int iParam0) //Position: 0x13320 / 78624
{
	Function_351(0, Global_34573, iParam0, 0);
	Function_351(1, bLocal_332, iParam0, 0);
	return;
}

void Function_351(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x1333A / 78650
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_352() //Position: 0x1335F / 78687
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_BakHomeBant_v2_AA", "Home02_s1_BakHomeBant_v2_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_BakHomeBant_v2_AB", "Home02_s1_BakHomeBant_v2_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_BakHomeBant_v2_AC", "Home02_s1_BakHomeBant_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_BakHomeBant_v2_AD", "Home02_s1_BakHomeBant_v2_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_BakHomeBant_v2_AE", "Home02_s1_BakHomeBant_v2_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_BakHomeBant_v2_AF", "Home02_s1_BakHomeBant_v2_AF", true, 1, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_353() //Position: 0x13517 / 79127
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_BakHomeBant_v1_AA", "Home02_s1_BakHomeBant_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_BakHomeBant_v1_AB", "Home02_s1_BakHomeBant_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_BakHomeBant_v1_AC", "Home02_s1_BakHomeBant_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_BakHomeBant_v1_AD", "Home02_s1_BakHomeBant_v1_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_BakHomeBant_v1_AE", "Home02_s1_BakHomeBant_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_BakHomeBant_v1_AF", "Home02_s1_BakHomeBant_v1_AF", true, 1, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_354(bool bParam0) //Position: 0x136CF / 79567
{
	bParam0->f_4 = 0.0f;
	bParam0->f_8 = 0.0f;
	*bParam0 = 0;
	return;
}

void Function_355(bool bParam0, bool bParam1) //Position: 0x136E3 / 79587
{
	if (!iLocal_613 && IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_332, bParam0, Function_53(), false, 0, 1, 3, 1, 0, "MINOR_SHOCK", 1000, 0, 0);
	}
	else if (!bParam1)
	{
		SAY_SINGLE_LINE_SCRIPTED(bLocal_332, bParam0, Global_34573, 0, 0, 0, 1, 3);
	}
	else
	{
		SAY_SINGLE_LINE_SCRIPTED(bLocal_332, bParam0, bLocal_523, 0, 1, 0, 1, 3);
	}
	return;
}

void Function_356() //Position: 0x13745 / 79685
{
	if (!Function_268(&bLocal_603))
	{
		Function_217(&bLocal_603);
	}
	else if (Function_266(&bLocal_603) < 4.0f)
	{
		if (!iLocal_613)
		{
			if (!iLocal_536)
			{
				if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_584))
				{
					if (VMAG(vLocal_584) >= 1.0f)
					{
						if (!Function_268(&iLocal_609))
						{
							Function_217(&iLocal_609);
						}
						else if (Function_266(&iLocal_609) <= 2.0f)
						{
							iLocal_536 = 1;
							if (Function_268(&bLocal_606))
							{
								Function_354(&bLocal_606);
							}
							Function_355("Home02_s1_StopsHisHors", 0);
							Function_217(&bLocal_603);
							Function_354(&iLocal_609);
						}
					}
					else if (Function_268(&iLocal_609))
					{
						Function_354(&iLocal_609);
					}
				}
			}
		}
		else if (GET_ACTOR_VELOCITY(Global_34573, &vLocal_584))
		{
			if (VMAG(vLocal_584) <= 1.0f)
			{
				iLocal_536 = 0;
			}
		}
	}
	return;
}

void Function_357(bool bParam0) //Position: 0x1381C / 79900
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

bool Function_358(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x138A6 / 80038
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_ALIVE(bParam2))
	{
		if (!IS_ACTOR_ALIVE(GET_MOUNT(Global_34573)))
		{
			if (!Function_366(16))
			{
				if (bParam7)
				{
					Function_238();
				}
				if (!Function_365())
				{
					Function_378(bParam4, 7,5f, 0, 2, 0, 0, 0);
					Function_364(16);
				}
			}
			return 1;
		}
	}
	if (!ACTORS_IN_RANGE(Global_34573, bParam2, bParam1))
	{
		Function_227(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (GET_MOUNT(Global_34573) != bParam2)
	{
		if (!Function_366(8))
		{
			if (bParam7)
			{
				Function_238();
			}
			if (!Function_365())
			{
				Function_378(bParam3, 7,5f, 0, 2, 0, 0, 0);
				Function_364(8);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_363(bParam8, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_363(bParam9, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam2)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam2, bParam10, 0, 2, 0);
			}
		}
		return 1;
	}
	if (Function_366(8))
	{
		Function_362(8);
		if (!Function_361())
		{
			Function_360();
			Function_359();
		}
	}
	if (GET_MOUNT(Global_34573) == bParam2)
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam2));
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_363(bParam8, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_363(bParam9, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_359() //Position: 0x139FB / 80379
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

void Function_360() //Position: 0x13A26 / 80422
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_361() //Position: 0x13A32 / 80434
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

void Function_362(bool bParam0) //Position: 0x13A76 / 80502
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

void Function_363(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x13AD9 / 80601
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

void Function_364(bool bParam0) //Position: 0x13B7A / 80762
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

bool Function_365() //Position: 0x13BDD / 80861
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

bool Function_366(bool bParam0) //Position: 0x13BEA / 80874
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

void Function_367() //Position: 0x13C31 / 80945
{
	if (Function_382(1))
	{
		if (!IS_ACTOR_IN_VOLUME(bLocal_332, Local_4.f_332) && !IS_ACTOR_IN_VOLUME(bLocal_332, Local_4.f_336))
		{
			if (GET_TASK_STATUS(bLocal_332, 26) != 1)
			{
				ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332, Global_34573, 25.0f, 10.0f, 20.0f);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_332, 1);
				vLocal_584 = { -2.0f, 0.0f, 0.0f };
				TASK_FOLLOW_OBJECT(bLocal_332, Global_34573, &vLocal_584, 0, 0, 0, 0, 0, 0, 1);
				TASK_PRIORITY_SET(bLocal_332, true);
			}
		}
		else if (GET_TASK_STATUS(bLocal_332, 0) != 1)
		{
			DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_332, 1);
			bLocal_514 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_OBJECT(false, Local_4.f_648, 5.0f, 4, 0, 1);
			TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
			TASK_SEQUENCE_RELEASE(bLocal_514, 1);
			TASK_PRIORITY_SET(bLocal_332, true);
		}
	}
	else
	{
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332);
	}
	return;
}

int Function_368(bool bParam0, var uParam1, vector3 vParam2, int iParam5, bool bParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14) //Position: 0x13D0C / 81164
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_369(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_371()) * (fParam8 - fParam7)) * 0,5f))) || bParam13)
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
	else if ((!Function_369(StackVal, StackVal, Global_34573, vParam2, (fParam8 + ((IntToFloat(Function_371()) * (fParam8 - fParam7)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam13)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_369(StackVal, StackVal, Global_34573, vParam2, fParam7))
	{
	}
	return 0;
}

bool Function_369(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x13FC6 / 81862
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_370(bParam0);
		if (VDIST(Function_370(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_370(bool bParam0) //Position: 0x14064 / 82020
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

int Function_371() //Position: 0x140CE / 82126
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_372() //Position: 0x140DD / 82141
{
	if (IS_ACTOR_VALID(bLocal_333))
	{
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse01", bLocal_333);
	}
	if (IS_ACTOR_VALID(bLocal_527))
	{
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse02", bLocal_527);
	}
	return 1;
}

void Function_373() //Position: 0x14136 / 82230
{
	iLocal_612 = 0;
	Function_354(&bLocal_606);
	iLocal_614 = Function_401();
	return;
}

void Function_374() //Position: 0x1414C / 82252
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_RideHome", "Home02_s1_RideHome", true, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_375(vector3 vParam0, int iParam3, int iParam4, int iParam5) //Position: 0x14199 / 82329
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
		Function_376(Global_28185.f_12);
		CLEAN_OBJECTSET(Global_28185.f_12);
	}
	Global_28185.f_92 = 0;
	Global_28210.f_96 = iParam5;
}

void Function_376(bool bParam0) //Position: 0x14255 / 82517
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

bool Function_377(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x14295 / 82581
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

void Function_378(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x14360 / 82784
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

float Function_379(bool bParam0, bool bParam1) //Position: 0x143B3 / 82867
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_380(bParam0);
			vVar0 = { StackVal, StackVal, Function_380(bParam0) };
			Function_380(bParam1);
			vVar3 = { StackVal, StackVal, Function_380(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_380(bool bParam0) //Position: 0x1444E / 83022
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

float Function_381(bool bParam0, bool bParam1) //Position: 0x144BA / 83130
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_370(bParam0);
			vVar0 = { StackVal, StackVal, Function_370(bParam0) };
			Function_380(bParam1);
			vVar3 = { StackVal, StackVal, Function_380(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

bool Function_382(bool bParam0) //Position: 0x1455A / 83290
{
	if (IS_ACTOR_ALIVE(bLocal_333))
	{
		if (DECOR_GET_BOOL(bLocal_527, "DisallowPlayerRide"))
		{
			SET_ALLOW_RIDE_BY_PLAYER(bLocal_527, 1);
			DECOR_REMOVE(bLocal_527, "DisallowPlayerRide");
		}
		if (DECOR_GET_BOOL(bLocal_333, "DisallowPlayerRide"))
		{
			SET_ALLOW_RIDE_BY_PLAYER(bLocal_333, 1);
			DECOR_REMOVE(bLocal_333, "DisallowPlayerRide");
		}
		if (IS_ACTOR_RIDING(Global_34573))
		{
			if (GET_MOUNT(Global_34573) == bLocal_527)
			{
				bLocal_527 = bLocal_333;
				SET_MOST_RECENT_MOUNT(bLocal_332, bLocal_527);
				TASK_MOUNT(bLocal_332, bLocal_527, 0, 1, 2, 2147483647);
				bLocal_333 = GET_MOUNT(Global_34573);
				Function_383(bLocal_333, 0);
			}
			if (IS_ACTOR_RIDING(bLocal_332))
			{
				return 1;
			}
			if (GET_TASK_STATUS(bLocal_332, 11) != 1)
			{
				TASK_MOUNT(bLocal_332, bLocal_527, 0, 1, 2, 2147483647);
			}
		}
		else if (bParam0)
		{
			if (IS_ACTOR_RIDING(bLocal_332))
			{
				return 1;
			}
			if (GET_TASK_STATUS(bLocal_332, 11) != 1)
			{
				TASK_MOUNT(bLocal_332, bLocal_527, 0, 1, 2, 2147483647);
			}
		}
		else if (IS_ACTOR_RIDING(bLocal_332))
		{
			TASK_DISMOUNT(bLocal_332, 1);
			CLEAR_ACTOR_MAX_SPEED(bLocal_332);
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_332);
			MEMORY_PREFER_RIDING(bLocal_332, false);
		}
		else
		{
			return 1;
		}
	}
	if (!DECOR_GET_BOOL(bLocal_527, "DisallowPlayerRide"))
	{
		SET_ALLOW_RIDE_BY_PLAYER(bLocal_527, 0);
		DECOR_SET_BOOL(bLocal_527, "DisallowPlayerRide", true);
	}
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(bLocal_332))
		{
			return 1;
		}
		if (GET_TASK_STATUS(bLocal_332, 11) != 1)
		{
			TASK_MOUNT(bLocal_332, bLocal_527, 0, 1, 2, 2147483647);
		}
	}
	return 0;
}

void Function_383(bool bParam0, int iParam1) //Position: 0x14730 / 83760
{
	Function_384(iParam1);
	Global_12976.f_72 = bParam0;
	return;
}

void Function_384(bool bParam0) //Position: 0x14742 / 83778
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

void Function_385(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x148F8 / 84216
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
	if (iParam3 != Global_34165.f_48 && !Function_390())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_389(0);
	Function_388();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_387(uParam4, iVar0, iVar1);
	Function_386();
}

void Function_386() //Position: 0x14995 / 84373
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

void Function_387(int iParam0, bool bParam1, bool bParam2) //Position: 0x149D6 / 84438
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

void Function_388() //Position: 0x14B3C / 84796
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_389(bool bParam0) //Position: 0x14B60 / 84832
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

bool Function_390() //Position: 0x14B8F / 84879
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_391(int iParam0) //Position: 0x14BAA / 84906
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

void Function_392(int iParam0, int iParam1) //Position: 0x14C5E / 85086
{
	if (iParam1 != 100000000)
	{
		Function_395(iParam0, iParam1);
	}
	else
	{
		Function_393(iParam0, 1);
	}
	return;
}

void Function_393(int iParam0, bool bParam1) //Position: 0x14C7E / 85118
{
	iParam0->f_40 = 0;
	Function_394(iParam0, 2, bParam1);
	Function_394(iParam0, 4, bParam1);
	Function_394(iParam0, 8, bParam1);
	Function_394(iParam0, 16, bParam1);
	Function_394(iParam0, 32, bParam1);
	Function_394(iParam0, 64, bParam1);
	Function_394(iParam0, 128, bParam1);
	Function_394(iParam0, 256, bParam1);
	Function_394(iParam0, 512, bParam1);
	Function_394(iParam0, 1024, bParam1);
	return;
}

void Function_394(int iParam0, int iParam1, bool bParam2) //Position: 0x14CE4 / 85220
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

void Function_395(int iParam0, bool bParam1) //Position: 0x14D20 / 85280
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

int Function_396(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x14D4B / 85323
{
	if (!Function_400(iParam0, uParam1))
	{
		return 0;
	}
	if (!Function_399(iParam0, bParam2))
	{
		return 0;
	}
	Function_398(iParam0, iParam3);
	iParam0->f_40 = 0;
	Function_397(iParam0, iParam4, iParam5);
	return 1;
}

void Function_397(var uParam0, int iParam1, int iParam2) //Position: 0x14D87 / 85383
{
	if (iParam1 != 100000000)
	{
		Function_394(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_393(uParam0, iParam2);
	}
	return;
}

void Function_398(var uParam0, int iParam1) //Position: 0x14DAA / 85418
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_399(int iParam0, bool bParam1) //Position: 0x14DB6 / 85430
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

bool Function_400(int iParam0, bool bParam1) //Position: 0x14E3F / 85567
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

int Function_401() //Position: 0x14FCB / 85963
{
	return Global_34165.f_60;
}

bool Function_402() //Position: 0x14FD6 / 85974
{
	if (!SQUAD_IS_VALID(Local_4.f_104))
	{
		Function_330();
		if (SQUAD_IS_VALID(Local_4.f_104))
		{
			Function_329(Local_4.f_104, 0);
			Function_328(Local_4.f_104, 3);
			Function_327(Local_4.f_104, 0, 0, 0);
			bLocal_527 = (*&Local_4 + 92)[02];
			if (IS_ACTOR_VALID(bLocal_527))
			{
				Function_331(bLocal_527, (*&Local_4 + 536)[3], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_332, bLocal_527);
				SET_MOST_RECENT_MOUNT(bLocal_332, bLocal_527);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_104, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_523))
	{
		Function_331(bLocal_523, (*&Local_4 + 536)[4], 1, 1, 1);
		if (IS_ACTOR_VALID(bLocal_523))
		{
			SET_ACTOR_FACTION(bLocal_523, 20);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_523, false);
			Function_297(bLocal_523, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(bLocal_523, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_523, 0.0f);
			SET_ACTOR_INVULNERABILITY(bLocal_523, true);
			DECOR_SET_BOOL(bLocal_523, "Frank", true);
			TASK_STAND_STILL(bLocal_523, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_523, true);
		}
	}
	else if (!iLocal_343[5])
	{
		Function_331(bLocal_523, (*&Local_4 + 536)[4], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(bLocal_523) && SQUAD_IS_VALID(Local_4.f_104))
	{
		return 1;
	}
	return 0;
}

void Function_403(bool bParam0, bool bParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x15105 / 86277
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
				Function_404(StackVal, StackVal, StackVal, bParam0, vVar0, iParam2, bParam3, uParam4);
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

void Function_404(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0x1521C / 86556
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

void Function_405() //Position: 0x152D5 / 86741
{
	if (!Function_268(&bLocal_603))
	{
		Function_217(&bLocal_603);
	}
	else if (Function_266(&bLocal_603) <= 5.0f)
	{
		if (DECOR_GET_BOOL(Global_34573, "beingBucked"))
		{
			if (IS_ACTOR_VALID(bLocal_332))
			{
				if (ACTORS_IN_RANGE(bLocal_332, Global_34573, 20.0f))
				{
					Function_355("Home02_s1_JonThrownOffHors", 0);
					Function_217(&bLocal_603);
				}
			}
		}
		Function_407();
		if (IS_WEAPON_DRAWN(Global_34573))
		{
			if (Function_406(GET_WEAPON_IN_HAND(Global_34573)))
			{
				bLocal_526 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
				if (IS_ACTOR_VALID(bLocal_526))
				{
					if (IS_ACTOR_HUMAN(bLocal_526))
					{
						if (bLocal_526 == bLocal_332)
						{
							if (Function_268(&iLocal_600))
							{
								if (Function_266(&iLocal_600) < 0,25f)
								{
									Function_355("Home02_s1_GunOnJak", 0);
									Function_217(&bLocal_603);
								}
							}
							else
							{
								Function_217(&iLocal_600);
							}
						}
						else if (!AI_IS_HOSTILE_OR_ENEMY(Global_34573, bLocal_526))
						{
							if (Function_268(&iLocal_600))
							{
								if (Function_266(&iLocal_600) < 0,25f)
								{
									Function_355("Home02_s1_GunOnChar", 0);
									Function_217(&bLocal_603);
								}
							}
							else
							{
								Function_217(&iLocal_600);
							}
						}
						else if (Function_268(&iLocal_600))
						{
							Function_354(&iLocal_600);
						}
					}
					else if (Function_268(&iLocal_600))
					{
						Function_354(&iLocal_600);
					}
				}
				else if (Function_268(&iLocal_600))
				{
					Function_354(&iLocal_600);
				}
			}
			else if (Function_268(&iLocal_600))
			{
				Function_354(&iLocal_600);
			}
		}
		else if (Function_268(&iLocal_600))
		{
			Function_354(&iLocal_600);
		}
	}
	return;
}

bool Function_406(bool bParam0) //Position: 0x15479 / 87161
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

void Function_407() //Position: 0x154BF / 87231
{
	if (IS_WEAPON_DRAWN(Global_34573))
	{
		if (Function_406(GET_WEAPON_IN_HAND(Global_34573)))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					if (Function_266(&bLocal_603) <= 3.0f)
					{
						if (bLocal_328 <= 3)
						{
							Function_355("Home02_s1_ShootsGunRand", 0);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(bLocal_332, 61, Global_34573, 0, 0, 3, 60, 4294967295, 0, 1);
						}
						Function_217(&bLocal_603);
					}
				}
				else if (!AI_IS_HOSTILE_OR_ENEMY(GET_LAST_ATTACK_TARGET(Global_34573), Global_34573))
				{
					if (IS_ACTOR_HUMAN(GET_LAST_ATTACK_TARGET(Global_34573)))
					{
						Function_355("Home02_s1_ShootsOtherChar", 0);
						Function_217(&bLocal_603);
					}
					else if (SQUAD_IS_VALID(Local_4.f_152))
					{
						if (!SQUAD_GET(GET_LAST_ATTACK_TARGET(Global_34573)) != Local_4.f_152)
						{
							Function_355("Home02_s1_ShotsWrongAnim", 0);
							Function_217(&bLocal_603);
						}
					}
					else if (SQUAD_IS_VALID(Local_4.f_120))
					{
						if (!SQUAD_GET(GET_LAST_ATTACK_TARGET(Global_34573)) != Local_4.f_120)
						{
							Function_355("Home02_s1_ShotsWrongAnim", 0);
							Function_217(&bLocal_603);
						}
					}
					else
					{
						Function_355("Home02_s1_ShotsWrongAnim", 0);
						Function_217(&bLocal_603);
					}
				}
			}
		}
	}
	return;
}

void Function_408() //Position: 0x15631 / 87601
{
	Function_346(bLocal_219);
	if (iLocal_329 < 3 && iLocal_329 > 105)
	{
		Function_405();
	}
	switch (iLocal_329)
	{
		case 0x00000000:
			Function_342(0);
			SET_ACTOR_HEALTH(bLocal_332, GET_ACTOR_MAX_HEALTH(bLocal_332));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_343[4] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				bLocal_330 = Global_30723[1];
				if (!Function_333(bLocal_330))
				{
					Function_332(&Local_220);
				}
				Function_331(Global_34573, (*&Local_4 + 504)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_333))
				{
					TASK_STAND_STILL(bLocal_333, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_333, true);
				}
				if (IS_ACTOR_VALID(bLocal_332))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_332);
					MEMORY_PREFER_RIDING(bLocal_332, false);
					CLEAR_ACTOR_MAX_SPEED(bLocal_332);
					TASK_STAND_STILL(bLocal_332, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_332, true);
				}
				Function_217(&vLocal_334);
				iLocal_329 = 1;
			}
			else
			{
				Function_217(&vLocal_334);
				iLocal_329 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_333(bLocal_330) || bLocal_330 != 4294967295))
			{
				Function_217(&vLocal_334);
				iLocal_329 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_415())
			{
				Function_313(&uLocal_504, 3, 0, 4294967295, 4294967295);
				if (!DECOR_CHECK_EXIST(bLocal_219, "ManzanitaSetup"))
				{
					if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_292))
					{
						DECOR_SET_BOOL(bLocal_219, "ManzanitaSetup", true);
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 296)[1]);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 296)[1]);
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 296)[0]);
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 296)[0]);
					}
				}
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_520 = Function_401();
				Function_415();
				if (IS_ACTOR_VALID(bLocal_523))
				{
					SET_ACTOR_HEALTH(bLocal_523, GET_ACTOR_MAX_HEALTH(bLocal_523));
				}
				if (iLocal_343[4] == 0)
				{
					if (Function_66(540) == 0)
					{
						Function_85(540, 3, 0, 0);
					}
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_333))
						{
							Function_331(bLocal_333, (*&Local_4 + 504)[2], 1, 1, 1);
						}
					}
					if (IS_ACTOR_VALID(bLocal_332))
					{
						if (IS_ACTOR_VALID(bLocal_527))
						{
							Function_331(bLocal_527, (*&Local_4 + 504)[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_332) && !IS_ACTOR_MOUNTED(bLocal_527))
							{
								ACTOR_MOUNT_ACTOR(bLocal_332, bLocal_527);
							}
						}
					}
				}
				iLocal_355 = 0;
				Function_396(&(Local_396[017]), bLocal_332, "Son", 1, 0x5f5e100, 1);
				Function_396(&(Local_396[117]), bLocal_523, "Dog", 0, 0x5f5e100, 1);
				Function_392(&(Local_396[117]), 1024);
				Function_396(&(Local_396[217]), bLocal_525, "Uncle", 0, 0x5f5e100, 1);
				Function_396(&(Local_396[317]), bLocal_524, "Wife", 0, 0x5f5e100, 1);
				Function_396(&(Local_396[417]), bLocal_593, "ShopKeeper", 0, 0x5f5e100, 1);
				Function_391(&(Local_396[517]));
				Function_217(&vLocal_334);
				iLocal_329 = 6;
				Function_233(bLocal_328);
				Function_385(StackVal, StackVal, Function_233(bLocal_328), bLocal_328, Global_30637[1], Function_236(bLocal_328), 0);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_594))
				{
					if (IS_ACTOR_VALID(bLocal_523))
					{
						bLocal_594 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_219, "HOME02SON01_CAMERA_FOCUS", bLocal_523, 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_594))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_594, 0);
						}
					}
				}
				bLocal_528 = ADD_BLIP_FOR_OBJECT(bLocal_593, 330, 0f, 2, 0);
				if (IS_BLIP_VALID(bLocal_528))
				{
				}
				if (IS_ACTOR_VALID(bLocal_332))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_332, 1);
					CLEAR_ACTOR_MAX_SPEED(bLocal_332);
					CLEAR_ACTOR_MAX_SPEED(bLocal_527);
					Function_221(12, 0, 1);
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332);
					MEMORY_PREFER_RIDING(bLocal_332, false);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_332, 1);
					GET_OBJECT_POSITION((*&Local_4 + 504)[3], &vLocal_566);
					bLocal_514 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &vLocal_566, 2.0f, true);
					TASK_DISMOUNT(false, 1);
					TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_816), "UseCase1", 4294967295, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
					TASK_SEQUENCE_RELEASE(bLocal_514, 1);
					TASK_PRIORITY_SET(bLocal_332, true);
					SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_332, (*&Local_4 + 296)[1], 1, false);
				}
				if (IS_ACTOR_VALID(bLocal_523))
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_523);
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_523);
					GET_OBJECT_POSITION((*&Local_4 + 504)[4], &(vLocal_553[03]));
					bLocal_514 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &(vLocal_553[03]), 1.0f, true);
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_GO_NEAR_OBJECT(false, Local_4.f_820, 3.0f, 1, 0, 1);
					GET_OBJECT_POSITION(Local_4.f_820, &vLocal_584);
					TASK_FACE_COORD(false, &vLocal_584, 0);
					TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_820), "UseCase1", 4294967295, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_523, bLocal_514);
					TASK_SEQUENCE_RELEASE(bLocal_514, 1);
					TASK_PRIORITY_SET(bLocal_523, true);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_523, 8, "UNALRTD");
					SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_523, (*&Local_4 + 296)[2], 1, false);
				}
				SQUAD_GOALS_CLEAR(Local_4.f_104);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_527);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_333);
				TASK_CLEAR(bLocal_527);
				TASK_CLEAR(bLocal_333);
				CLEAR_ACTOR_MAX_SPEED(bLocal_527);
				CLEAR_ACTOR_MAX_SPEED(bLocal_333);
				CLEAR_ACTOR_MIN_SPEED(bLocal_527);
				CLEAR_ACTOR_MIN_SPEED(bLocal_333);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_527);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_333);
				ANIMAL_TUNING_SET_ATTRIB_BOOL(bLocal_527, 11, false);
				ANIMAL_TUNING_SET_ATTRIB_BOOL(bLocal_333, 11, false);
				SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_527, (*&Local_4 + 296)[0], 1, 2);
				SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_333, (*&Local_4 + 296)[0], 1, 2);
				GET_OBJECT_POSITION((*&Local_4 + 804)[0], &vLocal_584);
				GET_OBJECT_ORIENTATION((*&Local_4 + 804)[0], &Local_587);
				TASK_GO_TO_COORD_AND_STAY(StackVal, bLocal_333, &vLocal_584, true);
				TASK_PRIORITY_SET(bLocal_333, true);
				GET_OBJECT_POSITION((*&Local_4 + 804)[1], &vLocal_584);
				GET_OBJECT_ORIENTATION((*&Local_4 + 804)[1], &Local_587);
				TASK_GO_TO_COORD_AND_STAY(StackVal, bLocal_527, &vLocal_584, true);
				TASK_PRIORITY_SET(bLocal_527, true);
				if (GET_TASK_STATUS(bLocal_593, 19) != 1)
				{
					GET_OBJECT_POSITION((*&Local_4 + 504)[5], &vLocal_584);
					bLocal_599 = LOCATE_GRINGO_OF_NAME("tend_counter_and_patron", &vLocal_584, 5.0f, 1);
					if (IS_GRINGO_VALID(bLocal_599))
					{
						TASK_USE_GRINGO(bLocal_593, bLocal_599, "UseCase1", 4294967295, 1);
					}
				}
				Function_183(bLocal_593, 1);
				Function_414();
				Function_217(&vLocal_334);
				iLocal_329 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_266(&vLocal_334) <= 5.0f)
			{
				Function_378("home02_son01_obj10", 7,5f, 1, 2, 0, 0, 0);
				if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 296)[3]))
				{
					Function_413();
				}
				Function_217(&vLocal_334);
				Function_217(&bLocal_337);
				Function_217(&bLocal_340);
				iLocal_329 = 8;
			}
			break;
		
		case 0x00000008:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 296)[3]))
			{
				Function_313(&uLocal_504, 0, 0, 4294967295, 4294967295);
			}
			else
			{
				Function_313(&uLocal_504, 1, 0, 4294967295, 4294967295);
			}
			if (IS_ACTOR_VALID(bLocal_593))
			{
				if (!IS_ACTOR_IN_VOLUME(bLocal_593, (*&Local_4 + 296)[3]))
				{
					if (Function_412(bLocal_593))
					{
						Function_183(bLocal_593, 0);
					}
				}
				else if (!Function_412(bLocal_593))
				{
					Function_183(bLocal_593, 1);
				}
				if (!Function_410(&bLocal_340, 60.0f, 200.0f, bLocal_593, "ShopKeeper_return", "ShopKeeper_abandoned", &bLocal_353, 0, 0, 0, 325, 1))
				{
					if (!Function_409(bLocal_593))
					{
						Function_227("home02_son01_scare_shopkeeper");
						bLocal_353 = true;
					}
					else if (GET_TASK_STATUS(bLocal_593, 19) != 1)
					{
						GET_OBJECT_POSITION((*&Local_4 + 504)[5], &vLocal_584);
						bLocal_599 = LOCATE_GRINGO_OF_NAME("tend_counter_and_patron", &vLocal_584, 5.0f, 1);
						if (IS_GRINGO_VALID(bLocal_599))
						{
							TASK_USE_GRINGO(bLocal_593, bLocal_599, "UseCase1", 4294967295, 1);
						}
					}
				}
			}
			else
			{
				Function_227("ShopKeeper_abandoned");
				bLocal_353 = true;
			}
			if (IS_ACTOR_VALID(bLocal_332))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_332, 8.0f))
				{
				}
			}
			if (!Global_59353)
			{
				if (Function_66(540) < 0)
				{
					if (IS_BLIP_VALID(bLocal_528))
					{
						REMOVE_BLIP(bLocal_528);
					}
					if (DECOR_GET_BOOL(bLocal_219, "PlayerShopping"))
					{
						SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
						ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
						DECOR_SET_BOOL(bLocal_219, "PlayerShopping", false);
					}
					Function_217(&vLocal_334);
					iLocal_329 = 9;
				}
				else
				{
					if (DECOR_GET_BOOL(bLocal_219, "PlayerShopping"))
					{
						SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
						ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
						DECOR_SET_BOOL(bLocal_219, "PlayerShopping", false);
					}
					if (!IS_BLIP_VALID(bLocal_528))
					{
						bLocal_528 = ADD_BLIP_FOR_OBJECT(bLocal_593, 330, 0f, 2, 0);
						if (IS_BLIP_VALID(bLocal_528))
						{
						}
					}
				}
			}
			else
			{
				if (IS_BLIP_VALID(bLocal_528))
				{
					REMOVE_BLIP(bLocal_528);
				}
				if (!DECOR_GET_BOOL(bLocal_219, "PlayerShopping"))
				{
					DECOR_SET_BOOL(bLocal_219, "PlayerShopping", true);
					SHOP_SET_CURRENT_TAB(1);
					SNAP_ACTOR_TO_GRINGO(bLocal_332, Local_4.f_816, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(bLocal_523, GET_GRINGO_FROM_OBJECT(Local_4.f_820), "UseCase1", 4294967295, 1);
					SNAP_ACTOR_TO_GRINGO(bLocal_523, Local_4.f_820, "UseCase1", true, 0, 0);
				}
			}
			break;
		
		case 0x00000009:
			if (Function_266(&vLocal_334) <= 1.0f)
			{
				if (IS_ACTOR_VALID(bLocal_332))
				{
					Function_221(12, 1, 1);
				}
				Function_217(&vLocal_334);
				iLocal_329 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_378("home02_son01_obj11", 7,5f, 1, 2, 0, 0, 0);
			Function_217(&vLocal_334);
			Function_217(&bLocal_337);
			Function_217(&bLocal_340);
			iLocal_329 = 11;
			break;
		
		case 0x0000000B:
			Function_410(&bLocal_340, 60.0f, 200.0f, bLocal_332, "Son_return", "Son_abandoned", &bLocal_353, 0, 0, 0, 325, 1);
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 296)[3]))
			{
				Function_313(&uLocal_504, 0, 0, 4294967295, 4294967295);
			}
			else
			{
				Function_313(&uLocal_504, 1, 0, 4294967295, 4294967295);
			}
			if (IS_ACTOR_VALID(bLocal_332))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_332, 6.0f))
				{
					TASK_CLEAR(bLocal_332);
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_523);
					TASK_CLEAR(bLocal_523);
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					Function_374();
					Function_221(12, 0, 1);
					Function_217(&vLocal_334);
					iLocal_329 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			Function_313(&uLocal_504, 1, 0, 4294967295, 4294967295);
			iLocal_343[5] = 1;
			TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_523);
			Function_217(&vLocal_334);
			bLocal_328 = 6;
			iLocal_329 = 0;
			break;
	}
	return;
}

bool Function_409(bool bParam0) //Position: 0x16129 / 90409
{
	if (((((AI_IS_AGGROING(bParam0, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(bParam0, Global_34573)) || GET_LAST_ATTACKER(bParam0) != Global_34573) || IS_ACTOR_HANDSUP(bParam0)) || IS_AI_ACTOR_ENGAGED_IN_COMBAT(bParam0)) || FIRE_IS_ACTOR_ON_FIRE(bParam0))
	{
		return 0;
	}
	return 1;
}

bool Function_410(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x16162 / 90466
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_411(Global_34573, bParam3, bParam2))
	{
		Function_227(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_411(Global_34573, bParam3, bParam1))
	{
		if (!Function_366(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_378(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_364(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_363(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_363(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_366(2))
	{
		Function_362(2);
		if (!Function_361())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_359();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_214(bParam3);
				Function_222(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_363(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_363(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

bool Function_411(bool bParam0, bool bParam1, bool bParam2) //Position: 0x162F6 / 90870
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

bool Function_412(bool bParam0) //Position: 0x16407 / 91143
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("SK_SHOP_GET_ACTIVE_OVERRIDE: Actor not valid for SK_SHOP_GET_ACTIVE_WHEN_STOLEN, quitting.");
		return 0;
	}
	return DECOR_CHECK_EXIST(bParam0, "ACTIVE_WHEN_STOLEN");
}

void Function_413() //Position: 0x16492 / 91282
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_WaitOutside", "Home02_s1_WaitOutside", true, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_414() //Position: 0x164E5 / 91365
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_ArriveAtMp", "Home02_s1_ArriveAtMp", true, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_415() //Position: 0x16536 / 91446
{
	if (!SQUAD_IS_VALID(Local_4.f_104))
	{
		Function_330();
		if (SQUAD_IS_VALID(Local_4.f_104))
		{
			Function_329(Local_4.f_104, 0);
			Function_328(Local_4.f_104, 3);
			Function_327(Local_4.f_104, 0, 0, 0);
			bLocal_527 = (*&Local_4 + 92)[02];
			if (IS_ACTOR_VALID(bLocal_527))
			{
				Function_331(bLocal_527, (*&Local_4 + 504)[3], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_332, bLocal_527);
				SET_MOST_RECENT_MOUNT(bLocal_332, bLocal_527);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_104, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_523))
	{
		Function_331(bLocal_523, (*&Local_4 + 504)[4], 1, 1, 1);
		if (IS_ACTOR_VALID(bLocal_523))
		{
			SET_ACTOR_FACTION(bLocal_523, 20);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_523, false);
			Function_297(bLocal_523, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(bLocal_523, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_523, 0.0f);
			SET_ACTOR_INVULNERABILITY(bLocal_523, true);
			DECOR_SET_BOOL(bLocal_523, "Frank", true);
			TASK_STAND_STILL(bLocal_523, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_523, true);
		}
	}
	else if (!iLocal_343[4])
	{
		Function_331(bLocal_523, (*&Local_4 + 504)[4], 1, 1, 1);
	}
	if (!IS_ACTOR_VALID(bLocal_593))
	{
		Function_416();
		bLocal_593 = (*&Local_4 + 156)[02];
		if (IS_ACTOR_VALID(bLocal_593))
		{
			SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_593, (*&Local_4 + 296)[3], 1, true);
			Function_331(bLocal_593, (*&Local_4 + 504)[5], 1, 1, 1);
		}
	}
	if ((IS_ACTOR_VALID(bLocal_523) && SQUAD_IS_VALID(Local_4.f_104)) && IS_ACTOR_VALID(bLocal_593))
	{
		return 1;
	}
	return 0;
}

void Function_416() //Position: 0x166B3 / 91827
{
	(*&Local_4 + 156)[02] = Function_417(&Global_7148, &Global_8447, 0, -455,618f, 153,6423f, 1620,2f, 0.0f, -76,40603f, 0.0f, 1);
	return;
}

var Function_417(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9) //Position: 0x166E1 / 91873
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam2;
	bVar1 = Function_418(uParam0, uParam1, uVar0, uParam9, 0, 1);
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

var Function_418(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x167C8 / 92104
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_177(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_177(uParam0[iVar02], 2))
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
			if (!Function_177(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_174(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, false) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_420(StackVal, StackVal, StackVal, Global_6289, Function_53(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_177(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], true, false);
				Function_174(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_174(uParam0[iVar02], 1);
	Function_419(StackVal, 1);
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

int Function_419(bool bParam0, bool bParam1) //Position: 0x1695E / 92510
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

var Function_420(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x16A00 / 92672
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

void Function_421() //Position: 0x16B19 / 92953
{
	Function_346(bLocal_219);
	if (((iLocal_329 < 5 && iLocal_329 > 105) && !iLocal_329 != 104) && !iLocal_329 != 103)
	{
		Function_426();
		Function_405();
		if (!IS_ACTOR_VALID(bLocal_593) && Function_333(Global_30723[1]))
		{
			Function_416();
			bLocal_593 = (*&Local_4 + 156)[02];
			if (IS_ACTOR_VALID(bLocal_593))
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_593, (*&Local_4 + 296)[3], 1, true);
				Function_331(bLocal_593, (*&Local_4 + 504)[5], 1, 1, 1);
			}
		}
	}
	switch (iLocal_329)
	{
		case 0x00000000:
			Function_342(0);
			SET_ACTOR_HEALTH(bLocal_332, GET_ACTOR_MAX_HEALTH(bLocal_332));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_343[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				bLocal_330 = Global_30637[1];
				if (!Function_333(bLocal_330))
				{
					Function_332(&Local_220);
				}
				Function_331(Global_34573, (*&Local_4 + 476)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_333))
				{
					TASK_STAND_STILL(bLocal_333, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_333, true);
				}
				if (IS_ACTOR_VALID(bLocal_332))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_332);
					MEMORY_PREFER_RIDING(bLocal_332, false);
					CLEAR_ACTOR_MAX_SPEED(bLocal_332);
					TASK_STAND_STILL(bLocal_332, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_332, true);
				}
				Function_217(&vLocal_334);
				iLocal_329 = 1;
			}
			else
			{
				Function_217(&vLocal_334);
				iLocal_329 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_333(bLocal_330) || bLocal_330 != 4294967295))
			{
				Function_217(&vLocal_334);
				iLocal_329 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_425())
			{
				Function_313(&uLocal_504, 13, 0, 4294967295, 4294967295);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_520 = Function_401();
				iLocal_516 = 0;
				Function_425();
				if (IS_ACTOR_VALID(bLocal_523))
				{
					SET_ACTOR_HEALTH(bLocal_523, GET_ACTOR_MAX_HEALTH(bLocal_523));
				}
				if (iLocal_343[3] == 0)
				{
					if (Function_66(540) == 0)
					{
						Function_85(540, 3, 0, 0);
					}
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_333))
						{
							Function_331(bLocal_333, (*&Local_4 + 476)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_333))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_333);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_332))
					{
						if (!ACTOR_HAS_WEAPON(bLocal_332, 22))
						{
							GIVE_WEAPON_TO_ACTOR(bLocal_332, 22, false, 1, 1);
						}
						if (ACTOR_HAS_WEAPON(bLocal_332, 39))
						{
							DELETE_WEAPON_FROM_ACTOR(bLocal_332, 39);
						}
						if (!ACTOR_HAS_WEAPON(bLocal_332, 42))
						{
							GIVE_WEAPON_TO_ACTOR(bLocal_332, 42, false, 1, 1);
						}
						if (ACTOR_HAS_WEAPON(bLocal_332, 42))
						{
							if (!ACTOR_HAS_WEAPON_SET_AS_NEXT(bLocal_332, 42))
							{
								ACTOR_SET_NEXT_WEAPON(bLocal_332, 42);
							}
						}
						if (IS_ACTOR_VALID(bLocal_527))
						{
							Function_331(bLocal_527, (*&Local_4 + 476)[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_332) && !IS_ACTOR_MOUNTED(bLocal_527))
							{
								ACTOR_MOUNT_ACTOR(bLocal_332, bLocal_527);
							}
						}
					}
				}
				iLocal_355 = 0;
				Function_396(&(Local_396[017]), bLocal_332, "Son", 1, 0x5f5e100, 1);
				Function_396(&(Local_396[117]), bLocal_523, "Dog", 0, 0x5f5e100, 1);
				Function_392(&(Local_396[117]), 1024);
				Function_396(&(Local_396[217]), bLocal_525, "Uncle", 0, 0x5f5e100, 1);
				Function_396(&(Local_396[317]), bLocal_524, "Wife", 0, 0x5f5e100, 1);
				Function_391(&(Local_396[417]));
				Function_391(&(Local_396[517]));
				if (HUD_IS_FADED())
				{
					Function_217(&vLocal_334);
					iLocal_329 = 5;
				}
				else
				{
					Function_217(&vLocal_334);
					iLocal_329 = 6;
				}
				Function_233(bLocal_328);
				Function_385(StackVal, StackVal, Function_233(bLocal_328), bLocal_328, Global_30637[1], Function_236(bLocal_328), 2);
			}
			break;
		
		case 0x00000005:
			if (((IS_ACTOR_VALID(bLocal_332) && IS_ACTOR_VALID(bLocal_527)) && IS_ACTOR_VALID(bLocal_333)) && IS_ACTOR_VALID(bLocal_523))
			{
				if (((Function_424(bLocal_332, 1, 0x41700000) && Function_424(bLocal_527, 1, 0x41700000)) && Function_424(bLocal_333, 1, 0x41700000)) && Function_424(bLocal_523, 1, 0x41700000))
				{
					Function_217(&vLocal_334);
					iLocal_329 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (Function_266(&vLocal_334) <= 1,5f)
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_217(&vLocal_334);
				iLocal_329 = 103;
			}
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				Function_217(&vLocal_334);
				iLocal_329 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(bLocal_594))
				{
					if (IS_ACTOR_VALID(bLocal_523))
					{
						bLocal_594 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_219, "HOME02SON01_CAMERA_FOCUS", bLocal_523, 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_594))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_594, 0);
						}
					}
				}
				bLocal_528 = ADD_BLIP_FOR_OBJECT(Local_4.f_644, 330, 0f, 2, 0);
				if (IS_BLIP_VALID(bLocal_528))
				{
				}
				GET_OBJECT_POSITION(Local_4.f_644, &vLocal_572);
				GET_OBJECT_ORIENTATION(Local_4.f_644, &vLocal_575);
				bLocal_538 = Function_377(StackVal, StackVal, StackVal, StackVal, bLocal_219, "HOME02_SON01GATEWAY02", vLocal_572, vLocal_575, Global_34573, 2,5f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				if (IS_OBJECT_VALID(bLocal_538))
				{
				}
				GET_OBJECT_POSITION(Local_4.f_644, &vLocal_578);
				Function_375(StackVal, StackVal, vLocal_578, 0, 48, 1);
				if (IS_ACTOR_VALID(bLocal_523))
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_523);
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_523, Global_34573, 60.0f, 10.0f, 50.0f);
					vLocal_553[03] = { -3.0f, 0.0f, 6.0f };
					bLocal_514 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 5.0f, 0, 0);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(false, Global_34573, 5.0f, 4);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_523, bLocal_514);
					TASK_SEQUENCE_RELEASE(bLocal_514, 1);
					TASK_PRIORITY_SET(bLocal_523, true);
				}
				Function_423();
				Function_217(&vLocal_334);
				iLocal_329 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_266(&vLocal_334) <= 5.0f)
			{
				Function_157(Global_30723[1]);
				Function_378("home02_son01_obj09", 7,5f, 1, 2, 0, 0, 0);
				Function_217(&vLocal_334);
				Function_217(&bLocal_337);
				Function_217(&bLocal_340);
				if (iLocal_343[3] == 1)
				{
					ACTOR_END_FORCE_HOLSTER(bLocal_332);
				}
				iLocal_329 = 9;
			}
			break;
		
		case 0x00000009:
			if (!DECOR_CHECK_EXIST(bLocal_219, "ManzanitaBanter"))
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573) && IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_332))
				{
					DECOR_SET_BOOL(bLocal_219, "ManzanitaBanter", true);
					Function_422();
				}
			}
			if (!DECOR_CHECK_EXIST(bLocal_219, "ManzanitaSetup"))
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_292))
				{
					DECOR_SET_BOOL(bLocal_219, "ManzanitaSetup", true);
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 296)[1]);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 296)[1]);
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 296)[0]);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 296)[0]);
					CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 296)[0], 15);
					CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 296)[1], 15);
				}
			}
			if (Function_358(&bLocal_340, 100.0f, bLocal_333, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_353, 0, bLocal_219, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_528))
				{
					REMOVE_BLIP(bLocal_528);
					Function_184();
				}
			}
			else if (!IS_BLIP_VALID(bLocal_528))
			{
				bLocal_528 = ADD_BLIP_FOR_OBJECT(Local_4.f_644, 330, 0f, 2, 0);
				GET_OBJECT_POSITION(Local_4.f_644, &vLocal_578);
				Function_375(StackVal, StackVal, vLocal_578, 0, 48, 1);
				if (IS_BLIP_VALID(bLocal_528))
				{
				}
			}
			if (!IS_OBJECT_VALID(bLocal_538))
			{
				GET_OBJECT_POSITION(Local_4.f_644, &vLocal_572);
				GET_OBJECT_ORIENTATION(Local_4.f_644, &vLocal_575);
				bLocal_538 = Function_377(StackVal, StackVal, StackVal, StackVal, bLocal_219, "HOME02_SON01GATEWAY02", vLocal_572, vLocal_575, Global_34573, 2,5f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				if (IS_OBJECT_VALID(bLocal_538))
				{
				}
				GET_OBJECT_POSITION(Local_4.f_644, &vLocal_578);
				Function_375(StackVal, StackVal, vLocal_578, 0, 48, 1);
			}
			if (Function_381(Global_34573, bLocal_538) > 15.0f || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 296)[3]))
			{
				Function_184();
				if (IS_BLIP_VALID(bLocal_528))
				{
					REMOVE_BLIP(bLocal_528);
				}
				if (IS_OBJECT_VALID(bLocal_538))
				{
					Function_357(bLocal_538);
				}
				if (IS_ACTOR_VALID(bLocal_333))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_333)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_333));
					}
				}
				Function_214(bLocal_333);
				Function_238();
				Function_217(&vLocal_334);
				iLocal_329 = 106;
			}
			break;
		
		case 0x0000006A:
			TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_523);
			iLocal_343[4] = 1;
			Function_217(&vLocal_334);
			bLocal_328 = 5;
			iLocal_329 = 0;
			break;
	}
	return;
}

void Function_422() //Position: 0x173E3 / 95203
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_WayManzBant_v1_AA", "Home02_s1_WayManzBant_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_WayManzBant_v1_AB", "Home02_s1_WayManzBant_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_WayManzBant_v1_AC", "Home02_s1_WayManzBant_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_WayManzBant_v1_AD", "Home02_s1_WayManzBant_v1_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_WayManzBant_v1_AE", "Home02_s1_WayManzBant_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_WayManzBant_v1_AF", "Home02_s1_WayManzBant_v1_AF", true, 1, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_423() //Position: 0x1759B / 95643
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_TakeMeatMP", "Home02_s1_TakeMeatMP", true, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_424(bool bParam0, bool bParam1, float fParam2) //Position: 0x175EC / 95724
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

bool Function_425() //Position: 0x17689 / 95881
{
	if (!SQUAD_IS_VALID(Local_4.f_104))
	{
		Function_330();
		if (SQUAD_IS_VALID(Local_4.f_104))
		{
			Function_329(Local_4.f_104, 0);
			Function_328(Local_4.f_104, 3);
			Function_327(Local_4.f_104, 0, 0, 0);
			bLocal_527 = (*&Local_4 + 92)[02];
			if (IS_ACTOR_VALID(bLocal_527))
			{
				Function_331(bLocal_527, (*&Local_4 + 476)[3], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_332, bLocal_527);
				SET_MOST_RECENT_MOUNT(bLocal_332, bLocal_527);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_104, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_523))
	{
		Function_331(bLocal_523, (*&Local_4 + 476)[4], 1, 1, 1);
		if (IS_ACTOR_VALID(bLocal_523))
		{
			SET_ACTOR_FACTION(bLocal_523, 20);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_523, false);
			Function_297(bLocal_523, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(bLocal_523, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_523, 0.0f);
			SET_ACTOR_INVULNERABILITY(bLocal_523, true);
			DECOR_SET_BOOL(bLocal_523, "Frank", true);
			TASK_STAND_STILL(bLocal_523, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_523, true);
		}
	}
	else if (!iLocal_343[3])
	{
		Function_331(bLocal_523, (*&Local_4 + 476)[4], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(bLocal_523) && SQUAD_IS_VALID(Local_4.f_104))
	{
		return 1;
	}
	return 0;
}

void Function_426() //Position: 0x177B8 / 96184
{
	if (IS_ACTOR_VALID(bLocal_332))
	{
		switch (iLocal_516)
		{
			case 0x00000000:
				Function_427(0);
				iLocal_516++;
				break;
			
			case 0x00000001:
				Function_221(12, 0, 1);
				CLEAR_ACTOR_MAX_SPEED(bLocal_332);
				CLEAR_ACTOR_MAX_SPEED(bLocal_527);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_332, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_332, true);
				bLocal_514 = TASK_SEQUENCE_OPEN();
				if (!IS_ACTOR_RIDING(bLocal_332))
				{
					TASK_MOUNT(false, bLocal_527, 0, 1, 2, 2147483647);
				}
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
				TASK_SEQUENCE_RELEASE(bLocal_514, 1);
				TASK_PRIORITY_SET(bLocal_332, true);
				Function_217(&bLocal_544);
				iLocal_516++;
				break;
			
			case 0x00000002:
				if (Function_382(1))
				{
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332, Global_34573, 25.0f, 10.0f, 20.0f);
					MEMORY_PREFER_RIDING(bLocal_332, true);
					AI_RIDING_SET_ATTRIBUTE(bLocal_332, 2, 0,15f);
					vLocal_566 = { 3.0f, 0.0f, 1.0f };
					bLocal_514 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT(false, Global_34573, &vLocal_566, 0, 0, 0, 0, 0, 0, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
					TASK_SEQUENCE_RELEASE(bLocal_514, 1);
					TASK_PRIORITY_SET(bLocal_332, true);
					iLocal_516++;
				}
				break;
			
			case 0x00000003:
				if (IS_ACTOR_VALID(Global_34573))
				{
					if (IS_VOLUME_VALID(Local_4.f_292))
					{
						if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_292))
						{
							iLocal_516++;
						}
					}
				}
				break;
			
			case 0x00000004:
				bLocal_514 = TASK_SEQUENCE_OPEN();
				vLocal_584 = { -2.0f, 0.0f, 0.0f };
				TASK_FOLLOW_OBJECT(false, Global_34573, &vLocal_584, 0, 0, 0, 0, 0, 0, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
				TASK_SEQUENCE_RELEASE(bLocal_514, 1);
				TASK_PRIORITY_SET(bLocal_332, true);
				iLocal_516++;
				break;
			
			case 0x00000005:
				iLocal_516++;
				break;
			}
	}
	return;
}

void Function_427(bool bParam0) //Position: 0x17972 / 96626
{
	MEMORY_CLEAR_ALL(bLocal_332);
	if (bParam0)
	{
		if (SQUAD_IS_VALID(Local_4.f_120))
		{
			Function_428(Local_4.f_120, bLocal_332);
		}
		if (SQUAD_IS_VALID(Local_4.f_152))
		{
			Function_428(Local_4.f_152, bLocal_332);
		}
	}
	return;
}

void Function_428(bool bParam0, bool bParam1) //Position: 0x179AB / 96683
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (IS_ACTOR_ALIVE(bVar1))
					{
						MEMORY_CONSIDER_AS_ENEMY(bParam1, bVar1);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_429() //Position: 0x179FF / 96767
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	
	Function_346(bLocal_219);
	if (iLocal_329 < 3 && iLocal_329 > 105)
	{
		Function_405();
	}
	switch (iLocal_329)
	{
		case 0x00000000:
			Function_342(0);
			SET_ACTOR_HEALTH(bLocal_332, GET_ACTOR_MAX_HEALTH(bLocal_332));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Local_296 = bLocal_332;
			*(&Local_296 + 8) = { 0.0f, 0.0f, 0.0f };
			*(&Local_296 + 20) = { 0.0f, 0.0f, 0.0f };
			Local_296.f_32 = 7.0f;
			Local_296.f_36 = "";
			*(&Local_296 + 40) = { StackVal, StackVal, vLocal_334 };
			Local_296.f_52 = 2;
			Local_296.f_72 = 1;
			Local_296.f_76 = 1;
			Local_296.f_60 = 0;
			Local_296.f_64 = 0;
			Local_296.f_84 = iLocal_321;
			if (iLocal_343[2] == 0)
			{
				Function_313(&uLocal_504, 3, 0, 4294967295, 4294967295);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				bLocal_330 = Global_30637[1];
				if (!Function_333(bLocal_330))
				{
					Function_332(&Local_220);
				}
				Function_331(Global_34573, (*&Local_4 + 440)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_333))
				{
					TASK_STAND_STILL(bLocal_333, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_333, true);
				}
				if (IS_ACTOR_VALID(bLocal_332))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_332);
					MEMORY_PREFER_RIDING(bLocal_332, false);
					CLEAR_ACTOR_MAX_SPEED(bLocal_332);
					TASK_STAND_STILL(bLocal_332, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_332, true);
				}
				Function_217(&vLocal_334);
				iLocal_329 = 1;
			}
			else
			{
				Function_217(&vLocal_334);
				iLocal_329 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_333(bLocal_330) || bLocal_330 != 4294967295))
			{
				Function_217(&vLocal_334);
				iLocal_329 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_443())
			{
				iLocal_520 = Function_401();
				iLocal_516 = 0;
				iLocal_515 = 0;
				iLocal_517 = 0;
				bLocal_521 = false;
				iLocal_530 = 0;
				iLocal_532 = 0;
				iLocal_531 = 0;
				iLocal_533 = 0;
				iLocal_534 = 0;
				if (IS_ACTOR_VALID(bLocal_523))
				{
					SET_ACTOR_HEALTH(bLocal_523, GET_ACTOR_MAX_HEALTH(bLocal_523));
				}
				if (IS_ACTOR_VALID(bLocal_332))
				{
					Function_221(12, 0, 1);
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332);
					MEMORY_PREFER_RIDING(bLocal_332, false);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_332, 4294967295);
					AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bLocal_332, 1);
				}
				if (iLocal_343[2] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						Function_331(Global_34573, (*&Local_4 + 440)[0], 1, 1, 1);
						if (IS_ACTOR_VALID(bLocal_333))
						{
							Function_331(bLocal_333, (*&Local_4 + 440)[3], 1, 1, 1);
						}
					}
					if (IS_ACTOR_VALID(bLocal_332))
					{
						Function_331(bLocal_332, (*&Local_4 + 440)[1], 1, 1, 1);
						if (IS_ACTOR_VALID(bLocal_527))
						{
							Function_331(bLocal_527, (*&Local_4 + 440)[4], 1, 1, 1);
						}
					}
					if (Function_66(540) == 0)
					{
						Function_85(540, 1, 0, 0);
					}
				}
				DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_332);
				GIVE_WEAPON_TO_ACTOR(bLocal_332, 22, false, 1, 1);
				iLocal_355 = 0;
				Function_396(&(Local_396[017]), bLocal_332, "Son", 1, 0x5f5e100, 1);
				Function_396(&(Local_396[117]), bLocal_523, "Dog", 0, 0x5f5e100, 1);
				Function_392(&(Local_396[117]), 1024);
				Function_391(&(Local_396[217]));
				Function_391(&(Local_396[317]));
				Function_391(&(Local_396[417]));
				Function_391(&(Local_396[517]));
				if (HUD_IS_FADED())
				{
					Function_217(&vLocal_334);
					iLocal_329 = 104;
				}
				else
				{
					Function_217(&vLocal_334);
					iLocal_329 = 104;
				}
				Function_233(bLocal_328);
				Function_385(StackVal, StackVal, Function_233(bLocal_328), bLocal_328, Global_30637[1], Function_236(bLocal_328), 0);
			}
			break;
		
		case 0x00000068:
			if (Function_442())
			{
				if (IS_ACTOR_VALID(bLocal_332))
				{
					if (IS_OBJECT_VALID(bLocal_543))
					{
						if (GET_TASK_STATUS(bLocal_332, 83) == 2)
						{
							TASK_GO_NEAR_OBJECT(bLocal_332, bLocal_543, 2.0f, 1, 0, 1);
						}
						else if (Function_381(bLocal_332, bLocal_543) > 3.0f && !IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_332, "skinning"))
						{
							SET_PLAYER_CONTROL(0, 0, 0, 0);
							Function_440(bLocal_332, 0);
							SET_MOVER_FROZEN(bLocal_332, true);
							SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_332, 0);
							SET_ACTOR_CAN_PLAY_GESTURES(bLocal_332, false);
							if (!IS_ACTOR_RIDING(Global_34573))
							{
								if (ACTORS_IN_RANGE(Global_34573, bLocal_332, 5.0f))
								{
									vLocal_584 = { 3.0f, 0.0f, 3.0f };
									GET_OBJECT_RELATIVE_POSITION(bLocal_332, vLocal_584, &Local_587);
									FIND_GROUND_INTERSECTION(&Local_587, 5.0f, &vLocal_584, &uLocal_590);
									TELEPORT_ACTOR(Global_34573, &vLocal_584, 1, 0, 0);
									Function_437(Global_34573, bLocal_332);
								}
								if (ACTORS_IN_RANGE(bLocal_333, bLocal_332, 5.0f))
								{
									vLocal_584 = { -3.0f, 0.0f, -3.0f };
									GET_OBJECT_RELATIVE_POSITION(bLocal_332, vLocal_584, &Local_587);
									FIND_GROUND_INTERSECTION(&Local_587, 5.0f, &vLocal_584, &uLocal_590);
									TELEPORT_ACTOR(bLocal_333, &vLocal_584, 1, 0, 0);
									Function_437(bLocal_333, Global_34573);
								}
								if (ACTORS_IN_RANGE(bLocal_527, bLocal_332, 5.0f))
								{
									vLocal_584 = { 3.0f, 0.0f, -3.0f };
									GET_OBJECT_RELATIVE_POSITION(bLocal_332, vLocal_584, &Local_587);
									FIND_GROUND_INTERSECTION(&Local_587, 5.0f, &vLocal_584, &uLocal_590);
									TELEPORT_ACTOR(bLocal_527, &vLocal_584, 1, 0, 0);
									Function_437(bLocal_527, bLocal_333);
								}
							}
							else
							{
								if (ACTORS_IN_RANGE(Global_34573, bLocal_332, 5.0f))
								{
									bLocal_526 = GET_MOUNT(Global_34573);
									vLocal_584 = { 3.0f, 0.0f, 3.0f };
									GET_OBJECT_RELATIVE_POSITION(bLocal_332, vLocal_584, &Local_587);
									FIND_GROUND_INTERSECTION(&Local_587, 5.0f, &vLocal_584, &uLocal_590);
									TELEPORT_ACTOR(bLocal_526, &vLocal_584, 1, 0, 0);
									Function_437(bLocal_526, bLocal_332);
									ACTOR_MOUNT_ACTOR(Global_34573, bLocal_526);
								}
								if (GET_MOUNT(Global_34573) != bLocal_333)
								{
									if (ACTORS_IN_RANGE(bLocal_333, bLocal_332, 5.0f))
									{
										vLocal_584 = { -3.0f, 0.0f, -3.0f };
										GET_OBJECT_RELATIVE_POSITION(bLocal_332, vLocal_584, &Local_587);
										FIND_GROUND_INTERSECTION(&Local_587, 5.0f, &vLocal_584, &uLocal_590);
										TELEPORT_ACTOR(bLocal_333, &vLocal_584, 1, 0, 0);
										Function_437(bLocal_333, Global_34573);
									}
								}
								if (GET_MOUNT(Global_34573) != bLocal_527)
								{
									if (ACTORS_IN_RANGE(bLocal_527, bLocal_332, 5.0f))
									{
										vLocal_584 = { 3.0f, 0.0f, -3.0f };
										GET_OBJECT_RELATIVE_POSITION(bLocal_332, vLocal_584, &Local_587);
										FIND_GROUND_INTERSECTION(&Local_587, 5.0f, &vLocal_584, &uLocal_590);
										TELEPORT_ACTOR(bLocal_527, &vLocal_584, 1, 0, 0);
										Function_437(bLocal_527, bLocal_333);
									}
								}
							}
							TASK_STAND_STILL(bLocal_332, -1.0f, 0, 0);
							MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_332, 0);
							fLocal_506 = GET_CURRENT_GAME_TIME();
							DECOR_SET_INT(bLocal_332, "AnimalSize", 2);
							RESET_ANIM_SET_FOR_ACTOR(bLocal_332, 0);
							SET_ANIM_SET_FOR_ACTOR(bLocal_332, "skinning", 0);
							if (!SET_ACTION_NODE_FOR_ACTOR(bLocal_332, "skinning/Son/Skin"))
							{
								LOG_ERROR("Couldn't set node?");
							}
							bLocal_505 = Function_432(Local_4, 0, bLocal_332, 1, 0, 0);
							UI_PUSH("nCutscenes");
							if (IS_ACTOR_VALID(Global_34573))
							{
								TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
								TASK_PRIORITY_SET(Global_34573, true);
							}
							GET_OBJECT_POSITION(bLocal_543, &uLocal_508);
							DESTROY_OBJECT(GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(bLocal_543)));
							if (HUD_IS_FADED())
							{
								Function_217(&vLocal_334);
								iLocal_329 = 5;
							}
							else
							{
								Function_217(&vLocal_334);
								iLocal_329 = 3;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			Function_217(&vLocal_334);
			iLocal_329 = 3;
			break;
		
		case 0x00000003:
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_332, 0);
			if (Function_266(&vLocal_334) <= 3.0f && !DECOR_CHECK_EXIST(bLocal_332, "TriggeredCam1"))
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_505);
				DECOR_SET_BOOL(bLocal_332, "TriggeredCam1", true);
			}
			else if (Function_266(&vLocal_334) <= 33.0f && !DECOR_CHECK_EXIST(bLocal_332, "TriggeredCam2"))
			{
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(bLocal_505);
				DECOR_SET_BOOL(bLocal_332, "TriggeredCam2", true);
			}
			fVar0 = 14,75f;
			if (Function_266(&vLocal_334) < fVar0)
			{
				if ((GET_CURRENT_GAME_TIME() - fLocal_506) < 1,5f)
				{
					fLocal_506 = GET_CURRENT_GAME_TIME();
					if (iLocal_511 <= 2)
					{
						if (IS_OBJECT_VALID(bLocal_512))
						{
							UNK_0xE18028C1(bLocal_512);
							DESTROY_OBJECT(bLocal_512);
						}
						GET_ACTOR_AXIS(bLocal_332, &vVar1, 2);
						GET_POSITION(bLocal_332, &vVar4);
						vVar4 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar1, vVar4, StackVal) * Vector(-0,95f, -0,95f, -0,95f), StackVal, StackVal) };
						bLocal_512 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(Local_4, "SkinAnimal", "anim_chicken_chop", vVar4);
						UNK_0x6745191B(bLocal_512, 0.0f, 0.0f, 0.0f);
						bVar7 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vVar4, 2,5f, "melee_knife", 1);
						if (IS_PHYSINST_VALID(bVar7))
						{
							bVar8 = CREATE_OBJECT_LOCATOR(bVar7, Function_53());
							OBJECT_LOCATOR_ATTACH_TO_FRAGMENT_LOCATOR(bVar8, bVar7, "impact_impale_locator", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
							GET_OBJECT_POSITION(bVar8, &vVar9);
							GET_OBJECT_AXIS(bVar8, &vVar12, 0);
							vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar12, vVar9, StackVal) * Vector(1,1f, 1,1f, 1,1f), StackVal, StackVal) };
							vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar9, vVar12, StackVal) };
							VNORMALIZE(&vVar15);
							if (iLocal_507)
							{
								iLocal_507 = 0;
								CREATE_DECAL_WITH_NORMAL(2, vVar9, vVar15, 0.0f, 1.0f, 0.0f, 0,21f);
							}
							else
							{
								CREATE_DECAL_WITH_NORMAL(StackVal, StackVal, StackVal, StackVal, -Vector(vVar15, vVar9, 2), 0.0f, 1.0f, 0.0f, 0,21f);
							}
							DESTROY_OBJECT(bVar8);
						}
						UNK_0xD1C91A7F(RAND_FLOAT_RANGE(-1.0f, 1.0f), RAND_FLOAT_RANGE(-1.0f, 1.0f), 1.0f, RAND_FLOAT_RANGE(10.0f, 20.0f));
						iLocal_511++;
					}
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_332, "skinning"))
			{
				if (Function_266(&vLocal_334) > 10.0f)
				{
					DECOR_SET_INT(bLocal_332, "AnimalSize", 2);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_332, 0);
					SET_ANIM_SET_FOR_ACTOR(bLocal_332, "skinning", 0);
					if (!SET_ACTION_NODE_FOR_ACTOR(bLocal_332, "skinning/Son/Skin"))
					{
						LOG_ERROR("Couldn't set node?");
					}
				}
				else
				{
					if (!IS_OBJECT_VALID(bLocal_513))
					{
						GET_ACTOR_AXIS(bLocal_332, &vVar21, 2);
						GET_POSITION(bLocal_332, &vVar24);
						vVar24 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Vector(vVar21, vVar24, StackVal) * Vector(-0,95f, -0,95f, -0,95f), StackVal, StackVal) };
						vVar18 = { 0.0f, (GET_HEADING(bLocal_332) + 90.0f), 0.0f };
						bLocal_513 = CREATE_PROP_IN_LAYOUT(Local_4, Function_53(), "$/fragments/p_gen_carcassElk01x", vVar24, vVar18, 0);
						SNAP_OBJECT_TO_GROUND(bLocal_513, 1.0f, false, 1092616192);
					}
					DESTROY_OBJECT(bLocal_505);
					TASK_CLEAR(Global_34573);
					UI_POP("nCutscenes");
					AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(bLocal_332, 0);
					ACTOR_START_FORCE_HOLSTER(bLocal_332, 0, 0);
					Local_296 = Local_296;
					Function_217(&vLocal_334);
					iLocal_329 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_MOVER_FROZEN(bLocal_332, false);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_332, 1);
			SET_ACTOR_CAN_PLAY_GESTURES(bLocal_332, true);
			Function_217(&vLocal_334);
			iLocal_329 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_217(&vLocal_334);
				iLocal_329 = 7;
			}
			break;
		
		case 0x00000007:
			Function_217(&vLocal_334);
			iLocal_329 = 106;
			break;
		
		case 0x0000006A:
			if (IS_OBJECT_VALID(iLocal_539[0]))
			{
				GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(iLocal_539[0]), "UseCase", 1);
			}
			if (IS_OBJECT_VALID(iLocal_539[1]))
			{
				GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(iLocal_539[1]), "UseCase", 1);
			}
			if (IS_OBJECT_VALID(iLocal_539[2]))
			{
				GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(iLocal_539[2]), "UseCase", 1);
			}
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (DECOR_CHECK_EXIST(Global_34573, "Skin2"))
				{
					DECOR_REMOVE(Global_34573, "Skin2");
				}
				if (DECOR_CHECK_EXIST(Global_34573, "Skin3"))
				{
					DECOR_REMOVE(Global_34573, "Skin3");
				}
				if (DECOR_CHECK_EXIST(Global_34573, "Skin4"))
				{
					DECOR_REMOVE(Global_34573, "Skin4");
				}
			}
			TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_523);
			if (!ACTOR_HAS_WEAPON(bLocal_332, 42))
			{
				GIVE_WEAPON_TO_ACTOR(bLocal_332, 42, false, 1, 1);
			}
			if (ACTOR_HAS_WEAPON(bLocal_332, 42))
			{
				if (!ACTOR_HAS_WEAPON_SET_AS_NEXT(bLocal_332, 42))
				{
					ACTOR_SET_NEXT_WEAPON(bLocal_332, 42);
				}
			}
			Function_99(540, 1);
			Function_99(541, 1);
			Function_85(348, FLOOR((IntToFloat(Function_431(19)) * 0,4f)), 0, 0);
			Function_430();
			iLocal_343[3] = 1;
			Function_217(&vLocal_334);
			bLocal_328 = 4;
			iLocal_329 = 0;
			break;
	}
	return;
}

void Function_430() //Position: 0x185F6 / 99830
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_FinishesCollMeat", "Home02_s1_FinishesCollMeat", true, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_431(bool bParam0) //Position: 0x18653 / 99923
{
	switch (bParam0)
	{
		case 0x00000000:
			LOG_ERROR("GET_ANIMAL_WEIGHT_LBS called with a human actor!");
			return 0;
			break;
		
		case 0x00000001:
			return RAND_INT_RANGE(40, 70);
			break;
		
		case 0x00000002:
			return RAND_INT_RANGE(2, 3);
			break;
		
		case 0x00000003:
			return RAND_INT_RANGE(300, 850);
			break;
		
		case 0x00000005:
			return RAND_INT_RANGE(140, 300);
			break;
		
		case 0x00000004:
			return RAND_INT_RANGE(55, 65);
			break;
		
		case 0x00000006:
			return RAND_INT_RANGE(390, 490);
			break;
		
		case 0x00000007:
			return RAND_INT_RANGE(10, 28);
			break;
		
		case 0x00000008:
			return RAND_INT_RANGE(900, 2000);
			break;
		
		case 0x00000009:
		case 0x0000000C:
			return RAND_INT_RANGE(900, 1000);
			break;
		
		case 0x0000000A:
			return RAND_INT_RANGE(5, 7);
			break;
		
		case 0x0000000B:
			return RAND_INT_RANGE(115, 198);
			break;
		
		case 0x0000000D:
			return RAND_INT_RANGE(20, 50);
			break;
		
		case 0x0000000E:
			return 1;
			break;
		
		case 0x0000000F:
			return RAND_INT_RANGE(110, 300);
			break;
		
		case 0x00000021:
			return RAND_INT_RANGE(35, 55);
			break;
		
		case 0x00000010:
			return RAND_INT_RANGE(55, 80);
			break;
		
		case 0x00000011:
			return RAND_INT_RANGE(2, 3);
			break;
		
		case 0x00000012:
			return RAND_INT_RANGE(7, 14);
			break;
		
		case 0x00000013:
			return RAND_INT_RANGE(325, 1100);
			break;
		
		case 0x00000014:
			return RAND_INT_RANGE(7, 24);
			break;
		
		case 0x00000015:
			return RAND_INT_RANGE(100, 300);
			break;
		
		case 0x00000016:
			return RAND_INT_RANGE(2, 4);
			break;
		
		case 0x00000017:
			return RAND_INT_RANGE(928, 1392);
			break;
		
		case 0x00000018:
			return RAND_INT_RANGE(800, 1000);
			break;
		
		case 0x00000019:
			return RAND_INT_RANGE(2, 6);
			break;
		
		case 0x0000001A:
			return RAND_INT_RANGE(330, 550);
			break;
		
		case 0x0000001B:
			return RAND_INT_RANGE(2, 4);
			break;
		
		case 0x0000001C:
			return RAND_INT_RANGE(10, 18);
			break;
		
		case 0x0000001D:
			return RAND_INT_RANGE(100, 225);
			break;
		
		case 0x0000001E:
			return RAND_INT_RANGE(5, 14);
			break;
		
		case 0x0000001F:
			return RAND_INT_RANGE(4, 6);
			break;
		
		case 0x00000020:
			return 1;
			break;
		
		case 0x00000022:
			return RAND_INT_RANGE(6, 10);
			break;
		
		case 0x00000023:
			return RAND_INT_RANGE(100, 175);
			break;
	}
	return 0;
}

var Function_432(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x188D5 / 100565
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Skinning_High_NoKnife", 3, 1);
	}
	Function_433(&bVar0, uParam2);
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

void Function_433(var uParam0, int iParam1) //Position: 0x18958 / 100696
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_436(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_435(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_434(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(*uParam0, 1, 1);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 2, 2.0f, 2);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(bVar1, 1,5f, 1, 0);
	return;
}

void Function_434(var uParam0, bool bParam1) //Position: 0x189BE / 100798
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,183191f, 0,536072f, -1,508552f, 31,17652f, -176,2945f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,126681f, 1,064484f, -0,637045f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_435(var uParam0, bool bParam1) //Position: 0x18A4A / 100938
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, 0,492018f, 0,468582f, -1,210122f, 25,27425f, 142,346f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,026176f, 0,869156f, -0,538683f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_436(var uParam0, bool bParam1) //Position: 0x18AD6 / 101078
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0,82318f, 1,093231f, -0,813308f, 14,61724f, -134,8103f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, -0,243373f, 1,304413f, -0,23743f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_437(bool bParam0, bool bParam1) //Position: 0x18B62 / 101218
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_438(StackVal, StackVal, bParam0, vVar0);
	return;
}

void Function_438(bool bParam0, vector3 vParam1) //Position: 0x18B7C / 101244
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_439(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_439(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_439(bool bParam0, vector3 vParam1) //Position: 0x18BB4 / 101300
{
	vector3 vVar0;
	
	Function_325(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_325(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

void Function_440(bool bParam0, bool bParam1) //Position: 0x18C37 / 101431
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
	else if (!bParam1 || Function_441(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

float Function_441(bool bParam0, bool bParam1) //Position: 0x18C94 / 101524
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

bool Function_442() //Position: 0x18CB3 / 101555
{
	switch (bLocal_521)
	{
		case 0x00000000:
			if (!IS_OBJECT_VALID(bLocal_543))
			{
				bLocal_521++;
			}
			else
			{
				bLocal_521 = 4;
			}
			break;
		
		case 0x00000001:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_152) <= 3)
			{
				bLocal_521++;
			}
			break;
		
		case 0x00000002:
			GET_OBJECT_POSITION((*&Local_4 + 440)[6], &vLocal_569);
			bLocal_595 = LOCATE_GRINGO_OF_TYPE("Skin_Animal", &vLocal_569, 2.0f, 0);
			if (IS_GRINGO_VALID(bLocal_595))
			{
				bLocal_543 = GET_OBJECT_FROM_GRINGO(bLocal_595);
				bLocal_521++;
			}
			break;
		
		case 0x00000003:
			bLocal_521++;
			break;
		
		case 0x00000004:
			return 1;
			break;
	}
	return 0;
}

bool Function_443() //Position: 0x18D6A / 101738
{
	if (!SQUAD_IS_VALID(Local_4.f_104))
	{
		Function_330();
		if (SQUAD_IS_VALID(Local_4.f_104))
		{
			Function_329(Local_4.f_104, 0);
			Function_328(Local_4.f_104, 3);
			Function_327(Local_4.f_104, 0, 0, 0);
			bLocal_527 = (*&Local_4 + 92)[02];
			if (IS_ACTOR_VALID(bLocal_527))
			{
				Function_331(bLocal_527, (*&Local_4 + 440)[4], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_332, bLocal_527);
				SET_MOST_RECENT_MOUNT(bLocal_332, bLocal_527);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_104, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_523))
	{
		Function_331(bLocal_523, (*&Local_4 + 440)[5], 1, 1, 1);
		if (IS_ACTOR_VALID(bLocal_523))
		{
			SET_ACTOR_FACTION(bLocal_523, 20);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_523, false);
			Function_297(bLocal_523, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(bLocal_523, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_523, 0.0f);
			SET_ACTOR_INVULNERABILITY(bLocal_523, true);
			DECOR_SET_BOOL(bLocal_523, "Frank", true);
			TASK_STAND_STILL(bLocal_523, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_523, true);
		}
	}
	else if (!iLocal_343[2])
	{
		Function_331(bLocal_523, (*&Local_4 + 440)[5], 1, 1, 1);
	}
	if (!SQUAD_IS_VALID(Local_4.f_152))
	{
		Function_446();
		if (SQUAD_IS_VALID(Local_4.f_152))
		{
			Function_329(Local_4.f_152, 0);
			Function_445(Local_4.f_152, 1);
			Function_327(Local_4.f_152, 1, 1, 1);
			Function_428(Local_4.f_152, bLocal_332);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_152, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			Function_444(&Local_4 + 152);
		}
	}
	if ((IS_ACTOR_VALID(bLocal_523) && SQUAD_IS_VALID(Local_4.f_104)) && SQUAD_IS_VALID(Local_4.f_152))
	{
		return 1;
	}
	return 0;
}

void Function_444(int iParam0) //Position: 0x18EFC / 102140
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

void Function_445(bool bParam0, bool bParam1) //Position: 0x18F4B / 102219
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
				ANIMAL_ACTOR_SET_DOMESTICATION(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_446() //Position: 0x18F8C / 102284
{
	Local_4.f_152 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Elk02"));
	(*&Local_4 + 124)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nELK_02_01", 1109, -771,293f, 144,1899f, 1812,227f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 124)[02], Local_4.f_152);
	DECOR_SET_BOOL((*&Local_4 + 124)[02], "Home02_S1_Skin2", true);
	(*&Local_4 + 124)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nELK_02_02", 1110, -763,4006f, 144,5897f, 1812,298f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 124)[12], Local_4.f_152);
	DECOR_SET_BOOL((*&Local_4 + 124)[12], "Home02_S1_Skin3", true);
	(*&Local_4 + 124)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nELK_02_03", 1111, -763,8279f, 144,099f, 1820,071f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 124)[22], Local_4.f_152);
	DECOR_SET_BOOL((*&Local_4 + 124)[22], "Home02_S1_Skin4", true);
	return;
}

void Function_447() //Position: 0x190B1 / 102577
{
	Function_346(bLocal_219);
	if (iLocal_329 < 3 && iLocal_329 > 105)
	{
		Function_484();
		Function_483(&iLocal_539);
		Function_405();
		if (iLocal_329 < 16)
		{
		}
	}
	switch (iLocal_329)
	{
		case 0x00000000:
			Function_342(0);
			SET_ACTOR_HEALTH(bLocal_332, GET_ACTOR_MAX_HEALTH(bLocal_332));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			GET_OBJECT_POSITION(Local_4.f_616, &vLocal_581);
			STREAMING_LOAD_BOUNDS(vLocal_581, 50.0f, 1);
			if (iLocal_343[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				bLocal_330 = Global_30637[1];
				if (!Function_333(bLocal_330))
				{
					Function_332(&Local_220);
				}
				Function_331(Global_34573, (*&Local_4 + 412)[0], 1, 1, 1);
				if (IS_ACTOR_VALID(bLocal_333))
				{
					TASK_STAND_STILL(bLocal_333, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_333, true);
				}
				if (IS_ACTOR_VALID(bLocal_332))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_332);
					MEMORY_PREFER_RIDING(bLocal_332, false);
					CLEAR_ACTOR_MAX_SPEED(bLocal_332);
					TASK_STAND_STILL(bLocal_332, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_332, true);
				}
				Function_217(&vLocal_334);
				iLocal_329 = 1;
			}
			else
			{
				Function_217(&vLocal_334);
				iLocal_329 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_333(bLocal_330) || bLocal_330 != 4294967295))
			{
				Function_217(&vLocal_334);
				iLocal_329 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_481())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_520 = Function_401();
				iLocal_516 = 0;
				iLocal_515 = 0;
				iLocal_517 = 0;
				iLocal_530 = 0;
				iLocal_532 = 0;
				iLocal_531 = 0;
				iLocal_533 = 0;
				iLocal_534 = 0;
				if (IS_ACTOR_VALID(bLocal_523))
				{
					SET_ACTOR_HEALTH(bLocal_523, GET_ACTOR_MAX_HEALTH(bLocal_523));
				}
				if (iLocal_343[1] == 0)
				{
					Function_313(&uLocal_504, 12, 0, 4294967295, 4294967295);
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_333))
						{
							Function_331(bLocal_333, (*&Local_4 + 412)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_333))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_333);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_332))
					{
						if (IS_ACTOR_VALID(bLocal_527))
						{
							Function_331(bLocal_527, (*&Local_4 + 412)[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_332) && !IS_ACTOR_MOUNTED(bLocal_527))
							{
								ACTOR_MOUNT_ACTOR(bLocal_332, bLocal_527);
							}
						}
					}
					if (Function_66(540) == 0)
					{
						Function_85(540, 1, 0, 0);
					}
				}
				Function_427(1);
				CLEAR_ACTOR_MAX_SPEED(bLocal_332);
				CLEAR_ACTOR_MAX_SPEED(bLocal_527);
				Function_221(12, 0, 1);
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_332, true);
				PRINTFLOAT(COMBAT_CLASS_AI_GET_RANGE_ACCURACY(bLocal_332));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(bLocal_332, 53));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(bLocal_332, 54));
				PRINTNL();
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_332, 13, false);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_332, 70.0f);
				if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_332, "Rand_Idle_Sit_Ground"))
				{
					SET_ACTION_NODE_FOR_ACTOR(bLocal_332, "Rand_Idle_Sit_Ground/Ground/D/ground_quickexit/pst");
				}
				iLocal_355 = 0;
				Function_396(&(Local_396[017]), bLocal_332, "Son", 1, 0x5f5e100, 1);
				Function_396(&(Local_396[117]), bLocal_523, "Dog", 0, 0x5f5e100, 1);
				Function_392(&(Local_396[117]), 1024);
				Function_396(&(Local_396[217]), bLocal_525, "Uncle", 0, 0x5f5e100, 1);
				Function_396(&(Local_396[317]), bLocal_524, "Wife", 0, 0x5f5e100, 1);
				Function_391(&(Local_396[417]));
				Function_391(&(Local_396[517]));
				iLocal_614 = 0;
				Function_217(&vLocal_334);
				iLocal_329 = 6;
				Function_233(bLocal_328);
				Function_385(StackVal, StackVal, Function_233(bLocal_328), bLocal_328, Global_30637[1], Function_236(bLocal_328), 0);
			}
			break;
		
		case 0x00000006:
			Function_382(1);
			if (!HUD_IS_FADING())
			{
				iLocal_355 = 0;
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_523);
				if (!IS_OBJECT_VALID(bLocal_594))
				{
					if (IS_ACTOR_VALID(bLocal_523))
					{
						bLocal_594 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_219, "HOME02SON01_CAMERA_FOCUS", bLocal_523, 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_594))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_594, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(bLocal_528))
				{
					if (IS_ACTOR_VALID(bLocal_523))
					{
						bLocal_528 = ADD_BLIP_FOR_ACTOR(bLocal_523, 325, 0, 2, 0);
						SET_BLIP_NAME(bLocal_528, "BLIP_RUFUS");
						if (IS_BLIP_VALID(bLocal_528))
						{
						}
					}
				}
				Function_427(1);
				if (!iLocal_532)
				{
					Function_480();
				}
				else
				{
					Function_479();
				}
				Function_217(&vLocal_334);
				iLocal_329 = 7;
			}
			break;
		
		case 0x00000007:
			Function_382(1);
			if (iLocal_532)
			{
				Function_472();
			}
			if (iLocal_343[1] != 0 || iLocal_532)
			{
				Function_378("home02_son01_obj05", 7,5f, 1, 2, 0, 0, 0);
			}
			Function_217(&vLocal_334);
			Function_217(&bLocal_337);
			Function_217(&bLocal_340);
			iLocal_329 = 27;
			break;
		
		case 0x0000001B:
			if (ACTOR_HAS_ANIM_SET(bLocal_332, "Rand_Idle_Sit_Ground"))
			{
				RESET_ANIM_SET_FOR_ACTOR(bLocal_332, 0);
			}
			Function_382(1);
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (DECOR_GET_BOOL(bLocal_219, "FindingHorse"))
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					DECOR_REMOVE(bLocal_219, "FindingHorse");
				}
				if (IS_BLIP_VALID(bLocal_528))
				{
					REMOVE_BLIP(bLocal_528);
				}
				if (IS_ACTOR_RIDING(bLocal_332))
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					if (iLocal_343[1] && !iLocal_532)
					{
						Function_378("home02_son01_obj05", 7,5f, 1, 2, 0, 0, 0);
					}
					Function_313(&uLocal_504, 12, 0, 4294967295, 4294967295);
					Function_471();
					Function_217(&vLocal_334);
					Function_217(&bLocal_337);
					Function_217(&bLocal_340);
					iLocal_329 = 8;
				}
			}
			else
			{
				if (IS_ACTOR_RIDING(bLocal_332))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_332, 15.0f))
					{
						if (!Function_268(&bLocal_544))
						{
							Function_217(&bLocal_544);
						}
						else if (Function_266(&bLocal_544) < 5.0f)
						{
							Function_355("Home02_s1_NoGetOnHors", 0);
							Function_217(&bLocal_544);
						}
					}
				}
				if (IS_ACTOR_ALIVE(bLocal_333))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_333)))
					{
						if (IS_BLIP_VALID(bLocal_528))
						{
							REMOVE_BLIP(bLocal_528);
						}
						bLocal_528 = ADD_BLIP_FOR_ACTOR(bLocal_333, 334, 0, 2, 0);
						Function_378("Horse_return", 0x40f00000, 1, 2, 0, 0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(bLocal_528))
					{
						REMOVE_BLIP(bLocal_528);
					}
					if (!DECOR_GET_BOOL(bLocal_219, "FindingHorse"))
					{
						Function_378("Horse_find", 0x40f00000, 1, 2, 0, 0, 0);
						DECOR_SET_BOOL(bLocal_219, "FindingHorse", true);
					}
				}
			}
			break;
		
		case 0x00000008:
			if (Function_358(&bLocal_340, 100.0f, bLocal_333, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_353, 0, bLocal_219, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_528))
				{
					REMOVE_BLIP(bLocal_528);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(bLocal_528))
				{
					if (IS_ACTOR_VALID(bLocal_523))
					{
						bLocal_528 = ADD_BLIP_FOR_ACTOR(bLocal_523, 325, 0, 2, 0);
						SET_BLIP_NAME(bLocal_528, "BLIP_RUFUS");
						if (IS_BLIP_VALID(bLocal_528))
						{
						}
					}
				}
				Function_410(&bLocal_340, 60.0f, 200.0f, bLocal_523, "Dog_return", "Dog_abandoned", &bLocal_353, 0, 0, 0, 325, 1);
			}
			if (IS_ACTOR_VALID(bLocal_523) && IS_ACTOR_VALID(bLocal_332))
			{
				if (!iLocal_532)
				{
					Function_467(Local_4.f_632, Local_4.f_616);
					if (Function_464())
					{
						Function_463();
					}
				}
				else
				{
					Function_467(Local_4.f_636, Local_4.f_620);
					if (Function_464())
					{
						Function_463();
					}
				}
			}
			if (Function_382(0))
			{
				if (!DECOR_CHECK_EXIST(bLocal_219, "CompEmerTele"))
				{
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332, bLocal_523, 40.0f, 15.0f, 25.0f);
					DECOR_SET_BOOL(bLocal_219, "CompEmerTele", true);
				}
				if (GET_TASK_STATUS(bLocal_332, 0) != 1)
				{
					vLocal_566 = { 3.0f, 0.0f, 10.0f };
					bLocal_514 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT(false, bLocal_523, &vLocal_566, 0, 0, 0, 0, 0, 0, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
					TASK_SEQUENCE_RELEASE(bLocal_514, 1);
					TASK_PRIORITY_SET(bLocal_332, true);
				}
			}
			else if (DECOR_CHECK_EXIST(bLocal_219, "CompEmerTele"))
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332);
				DECOR_REMOVE(bLocal_219, "CompEmerTele");
			}
			if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_523, "Warn_Fight") || Function_461(Local_4.f_152, 1.0f, 120.0f, 1, 1))
			{
				if (iLocal_530)
				{
				}
				else
				{
					iLocal_530 = 1;
					iLocal_534 = 1;
				}
				if (IS_BLIP_VALID(bLocal_528))
				{
					REMOVE_BLIP(bLocal_528);
				}
				if (DECOR_CHECK_EXIST(bLocal_219, "CompEmerTele"))
				{
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332);
					DECOR_REMOVE(bLocal_219, "CompEmerTele");
				}
				Function_238();
				Function_217(&vLocal_334);
				iLocal_329 = 9;
			}
			break;
		
		case 0x00000009:
			iLocal_355 = 1;
			Function_313(&uLocal_504, 8, 0, 4294967295, 4294967295);
			TASK_CLEAR(bLocal_523);
			TASK_CLEAR(bLocal_332);
			bLocal_514 = TASK_SEQUENCE_OPEN();
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_152) >= 0)
			{
				bLocal_526 = Function_459(Local_4.f_152, bLocal_332, 1, 0);
				if (IS_ACTOR_ALIVE(bLocal_526))
				{
					TASK_KILL_CHAR(false, bLocal_526);
				}
				else if (IS_ACTOR_VALID(bLocal_526))
				{
					TASK_GO_NEAR_ACTOR(false, bLocal_526, 5.0f, 4);
				}
			}
			TASK_FOLLOW_OBJECT_AT_DISTANCE(false, Global_34573, 7.0f, 4);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
			TASK_SEQUENCE_RELEASE(bLocal_514, 1);
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332, Global_34573, 60.0f, 10.0f, 50.0f);
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_523, Global_34573, 60.0f, 10.0f, 50.0f);
			STREAMING_UNLOAD_BOUNDS();
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_523, 2);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_523, 1);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_523, Global_34573, 5.0f, 4);
			iLocal_515 = 0;
			if (!iLocal_532)
			{
				if (iLocal_534)
				{
					Function_458();
				}
				else
				{
					Function_457();
				}
			}
			else
			{
				Function_456();
			}
			Function_217(&vLocal_334);
			iLocal_329 = 10;
			break;
		
		case 0x0000000A:
			if (Function_266(&vLocal_334) <= 5.0f)
			{
				Function_378("home02_son01_obj06", 7,5f, 1, 2, 0, 0, 0);
				Function_217(&vLocal_334);
				Function_217(&bLocal_337);
				Function_217(&bLocal_340);
				iLocal_329 = 11;
			}
			else if (Function_266(&vLocal_334) <= 2.0f)
			{
				if (GET_TASK_STATUS(bLocal_332, 0) != 1)
				{
					bLocal_514 = TASK_SEQUENCE_OPEN();
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_152) >= 0)
					{
						bLocal_526 = Function_459(Local_4.f_152, bLocal_332, 1, 0);
						if (IS_ACTOR_ALIVE(bLocal_526))
						{
							TASK_KILL_CHAR(false, bLocal_526);
						}
						else if (IS_ACTOR_VALID(bLocal_526))
						{
							TASK_GO_NEAR_ACTOR(false, bLocal_526, 5.0f, 4);
						}
					}
					TASK_FOLLOW_OBJECT_AT_DISTANCE(false, Global_34573, 7.0f, 4);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
					TASK_SEQUENCE_RELEASE(bLocal_514, 1);
				}
			}
			break;
		
		case 0x0000000B:
			if (Function_382(0))
			{
				if (GET_TASK_STATUS(bLocal_332, 0) != 1)
				{
					bLocal_514 = TASK_SEQUENCE_OPEN();
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_152) >= 0)
					{
						bLocal_526 = Function_459(Local_4.f_152, bLocal_332, 1, 0);
						if (IS_ACTOR_ALIVE(bLocal_526))
						{
							TASK_KILL_CHAR(false, bLocal_526);
						}
						else if (IS_ACTOR_VALID(bLocal_526))
						{
							TASK_GO_NEAR_ACTOR(false, bLocal_526, 5.0f, 4);
						}
					}
					TASK_FOLLOW_OBJECT_AT_DISTANCE(false, Global_34573, 7.0f, 4);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
					TASK_SEQUENCE_RELEASE(bLocal_514, 1);
				}
			}
			if (!iLocal_532)
			{
				Function_453(0, 1);
			}
			else
			{
				Function_453(1, 1);
			}
			if (SQUAD_IS_VALID(Local_4.f_152))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_152) <= 3)
				{
					if ((IS_OBJECT_VALID(iLocal_539[0]) || IS_OBJECT_VALID(iLocal_539[1])) || IS_OBJECT_VALID(iLocal_539[2]))
					{
						Function_238();
						Function_217(&vLocal_334);
						iLocal_329 = 12;
					}
				}
				else if (iLocal_531)
				{
					Function_313(&uLocal_504, 43, 0, 4294967295, 4294967295);
					if (!Function_461(Local_4.f_152, 1.0f, 120.0f, 1, 1) && !Function_452(Global_34573, Local_4.f_152, 90.0f))
					{
						if (iLocal_532)
						{
							Function_313(&uLocal_504, 12, 0, 4294967295, 4294967295);
							iLocal_530 = 0;
							TASK_CLEAR(bLocal_523);
							iLocal_515 = 0;
							Function_451(Local_4.f_152);
							Function_238();
							Function_217(&vLocal_334);
							iLocal_329 = 20;
						}
						else
						{
							Function_313(&uLocal_504, 12, 0, 4294967295, 4294967295);
							STREAMING_UNLOAD_BOUNDS();
							TASK_CLEAR(bLocal_523);
							iLocal_515 = 0;
							iLocal_532 = 1;
							iLocal_531 = 0;
							iLocal_530 = 0;
							Function_472();
							if (DECOR_CHECK_EXIST(Global_34573, "Skin2"))
							{
								DECOR_REMOVE(Global_34573, "Skin2");
							}
							if (DECOR_CHECK_EXIST(Global_34573, "Skin3"))
							{
								DECOR_REMOVE(Global_34573, "Skin3");
							}
							if (DECOR_CHECK_EXIST(Global_34573, "Skin4"))
							{
								DECOR_REMOVE(Global_34573, "Skin4");
							}
							Function_451(Local_4.f_152);
							Function_238();
							Function_217(&vLocal_334);
							iLocal_329 = 6;
						}
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_152) != 0 || (!Function_461(Local_4.f_152, 1.0f, 120.0f, 1, 1) && !Function_452(Global_34573, Local_4.f_152, (90.0f + 10.0f))))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_152) == 0)
				{
				}
				Function_451(Local_4.f_152);
				Function_313(&uLocal_504, 3, 0, 4294967295, 4294967295);
				Function_238();
				Function_217(&vLocal_334);
				iLocal_329 = 13;
			}
			break;
		
		case 0x0000000D:
			if ((IS_OBJECT_VALID(iLocal_539[0]) || IS_OBJECT_VALID(iLocal_539[1])) || IS_OBJECT_VALID(iLocal_539[2]))
			{
				bLocal_543 = Function_450(&iLocal_539, Global_34573);
				if (IS_OBJECT_VALID(bLocal_543))
				{
					Function_427(0);
					GET_OBJECT_POSITION(bLocal_543, &vLocal_569);
					PRINTVECTOR(vLocal_569);
					PRINTNL();
					vLocal_566 = { StackVal, StackVal, Vector(vLocal_569, StackVal, StackVal) + Vector(-2.0f, 0.0f, 1.0f) };
					PRINTVECTOR(vLocal_566);
					PRINTNL();
					CLEAR_ACTOR_MAX_SPEED(bLocal_332);
					CLEAR_ACTOR_MAX_SPEED(bLocal_527);
					Function_221(12, 1, 1);
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332);
					MEMORY_PREFER_RIDING(bLocal_332, false);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_332, 1);
					bLocal_514 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &vLocal_566, 10.0f, 4);
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_DISMOUNT(false, 1);
					TASK_GO_NEAR_COORD(false, &vLocal_566, 1,5f, true);
					TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
					TASK_SEQUENCE_RELEASE(bLocal_514, 1);
					TASK_PRIORITY_SET(bLocal_332, true);
					iLocal_533 = 1;
					iLocal_530 = 0;
					Function_217(&vLocal_334);
					iLocal_329 = 14;
				}
				else if (Function_266(&vLocal_334) <= 10.0f)
				{
					LOG_ERROR("HOME02_SON01 - NO valid oCurrentGringo location was found!!!");
					Function_217(&vLocal_334);
					Function_449();
					iLocal_329 = 21;
				}
			}
			break;
		
		case 0x0000000E:
			iLocal_355 = 0;
			Function_449();
			Function_217(&vLocal_334);
			iLocal_329 = 15;
			break;
		
		case 0x0000000F:
			if (Function_266(&vLocal_334) <= 5.0f)
			{
				if (Function_381(bLocal_332, bLocal_543) < 20.0f)
				{
					Function_448();
				}
				Function_378("home02_son01_obj07", 7,5f, 1, 2, 0, 0, 0);
				Function_217(&vLocal_334);
				Function_217(&bLocal_337);
				Function_217(&bLocal_340);
				iLocal_329 = 16;
			}
			break;
		
		case 0x00000010:
			Function_410(&bLocal_340, 60.0f, 200.0f, bLocal_332, "Son_return", "Son_abandoned", &bLocal_353, 0, 0, 0, 325, 1);
			Function_221(12, 1, 1);
			if ((GET_TASK_STATUS(bLocal_332, 22) != 1 || GET_TASK_STATUS(bLocal_332, 0) == 1) || Function_266(&vLocal_334) <= 10.0f)
			{
				if (IS_ACTOR_VALID(bLocal_332))
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_332, (6.0f + 3.0f)))
					{
						if (IS_BLIP_VALID(bLocal_528))
						{
							REMOVE_BLIP(bLocal_528);
						}
						Function_221(12, 0, 1);
						Function_217(&vLocal_334);
						iLocal_329 = 106;
					}
				}
			}
			break;
		
		case 0x00000014:
			if (Function_266(&vLocal_334) <= 5.0f)
			{
				iLocal_355 = 0;
				if (SQUAD_IS_VALID(Local_4.f_152))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_152) == 3)
					{
						iLocal_529 = 1;
					}
				}
				Function_217(&vLocal_334);
				iLocal_329 = 106;
			}
			break;
		
		case 0x00000015:
			iLocal_355 = 0;
			Function_427(0);
			Function_217(&vLocal_334);
			iLocal_329 = 22;
			break;
		
		case 0x00000016:
			if (Function_266(&vLocal_334) <= 5.0f)
			{
				Function_217(&vLocal_334);
				iLocal_329 = 105;
			}
			break;
		
		case 0x00000069:
			if (Function_266(&vLocal_334) <= 0,5f)
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_217(&vLocal_334);
				iLocal_329 = 93;
			}
			break;
		
		case 0x0000005D:
			if (HUD_IS_FADED())
			{
				Function_219();
				iLocal_343[2] = 0;
				Function_217(&vLocal_334);
				bLocal_328 = 3;
				iLocal_329 = 0;
			}
			break;
		
		case 0x0000006A:
			STREAMING_UNLOAD_BOUNDS();
			bLocal_519 = false;
			while (bLocal_519 <= SQUAD_GET_SIZE(Local_4.f_152))
			{
				bLocal_526 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_152, bLocal_519);
				if (IS_ACTOR_ALIVE(bLocal_526))
				{
					SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_526, bLocal_332, false);
					SET_ACTOR_PERMANENT(bLocal_526, 1);
				}
				bLocal_519++;
			}
			TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_523);
			iLocal_343[2] = 1;
			Function_217(&vLocal_334);
			bLocal_328 = 3;
			iLocal_329 = 0;
			break;
	}
	return;
}

void Function_448() //Position: 0x1A1E4 / 106980
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_DeadAnimBant_v1_AA", "Home02_s1_DeadAnimBant_v1_AA", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_DeadAnimBant_v1_AB", "Home02_s1_DeadAnimBant_v1_AB", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_DeadAnimBant_v1_AC", "Home02_s1_DeadAnimBant_v1_AC", false, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_449() //Position: 0x1A2D3 / 107219
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_CollectElkMeatBoy", "Home02_s1_CollectElkMeatBoy", true, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_450(var uParam0, bool bParam1) //Position: 0x1A332 / 107314
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 4294967295;
	fVar2 = -1.0f;
	if (IS_ACTOR_VALID(bParam1))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (IS_OBJECT_VALID((*uParam0)[iVar0]))
			{
				fVar3 = Function_381(bParam1, (*uParam0)[iVar0]);
				if (fVar3 > fVar2 || iVar1 != 4294967295)
				{
					fVar2 = fVar3;
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 >= 4294967295)
	{
		return (*uParam0)[iVar1];
	}
	return "";
}

void Function_451(bool bParam0) //Position: 0x1A39B / 107419
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

bool Function_452(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1A3E8 / 107496
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
					if (Function_411(bParam0, bVar1, bParam2))
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

void Function_453(bool bParam0, bool bParam1) //Position: 0x1A43C / 107580
{
	if (!Function_268(&bLocal_603))
	{
		Function_217(&bLocal_603);
	}
	else
	{
		if (bLocal_615 < 7.0f || bLocal_615 > 3.0f)
		{
			bLocal_615 = RAND_FLOAT_RANGE(3.0f, 7.0f);
		}
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			if (Function_266(&bLocal_603) < bLocal_615)
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_332, 25.0f))
				{
					if (bParam0 && bParam1)
					{
						if (Function_455())
						{
							Function_454("Home02_s1_JonEncoJak", 1);
						}
						else
						{
							Function_355("Home02_s1_JackEncoJon", 1);
						}
					}
					else if (bParam0)
					{
						Function_355("Home02_s1_JackEncoJon", 1);
					}
					else if (bParam1)
					{
						Function_454("Home02_s1_JonEncoJak", 1);
					}
					Function_217(&bLocal_603);
					bLocal_615 = RAND_FLOAT_RANGE(3.0f, 7.0f);
				}
			}
		}
	}
	return;
}

void Function_454(bool bParam0, bool bParam1) //Position: 0x1A52D / 107821
{
	if (!iLocal_613 && IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(Global_34573, bParam0, Function_53(), false, 0, 1, 4, 1, 0, "MINOR_SHOCK", 1000, 0, 0);
	}
	else if (!bParam1)
	{
		SAY_SINGLE_LINE_SCRIPTED(Global_34573, bParam0, bLocal_332, 0, 0, 0, 1, 3);
	}
	else
	{
		SAY_SINGLE_LINE_SCRIPTED(Global_34573, bParam0, bLocal_523, 0, 1, 0, 1, 3);
	}
	return;
}

bool Function_455() //Position: 0x1A58F / 107919
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_456() //Position: 0x1A5A2 / 107938
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_MissedElk1stTime", "Home02_s1_MissedElk1stTime", false, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_457() //Position: 0x1A5FF / 108031
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_dogSpotsElk3", "Home02_s1_dogSpotsElk3", true, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_458() //Position: 0x1A654 / 108116
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_SpotsElkb4Dogdoes", "Home02_s1_SpotsElkb4Dogdoes", true, 2, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_459(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1A6B3 / 108211
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
			fVar3 = Function_460(bVar4, bParam1);
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

var Function_460(bool bParam0, bool bParam1) //Position: 0x1A76D / 108397
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

bool Function_461(bool bParam0, float fParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1A85E / 108638
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
				if (Function_462(bVar1, fParam1, fParam2, iParam3, iParam4, 0))
				{
					return 1;
				}
			}
			bVar0++;
		}
	}
	return 0;
}

bool Function_462(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1A8B0 / 108720
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_463() //Position: 0x1A8CA / 108746
{
	if (!Function_268(&bLocal_603))
	{
		Function_217(&bLocal_603);
	}
	else
	{
		if (bLocal_615 < 7.0f || bLocal_615 > 3.0f)
		{
			bLocal_615 = RAND_FLOAT_RANGE(3.0f, 7.0f);
		}
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			if (Function_266(&bLocal_603) < bLocal_615)
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_523, 25.0f))
				{
					if (Function_455())
					{
						bLocal_519 = RAND_INT_RANGE(true, 3);
						switch (bLocal_519)
						{
							case 0x00000001:
								Function_454("Home02_s1_ShoutsEncAtDog", 1);
								break;
							
							case 0x00000002:
								Function_454("Home02_s1_ShoutsEncAtDog2", 1);
								break;
							
							case 0x00000003:
								Function_454("Home02_s1_ShoutsEncoAtDog3", 1);
								break;
						}
					}
					else
					{
						bLocal_519 = RAND_INT_RANGE(true, 2);
						switch (bLocal_519)
						{
							case 0x00000001:
								Function_355("Home02_s1_JakShatsEncoDog1", 1);
								break;
							
							case 0x00000002:
								Function_355("Home02_s1_JakShoutsDog2", 1);
								break;
							}
					}
					Function_217(&bLocal_603);
					bLocal_615 = RAND_FLOAT_RANGE(3.0f, 7.0f);
				}
			}
		}
	}
	return;
}

bool Function_464() //Position: 0x1AA21 / 109089
{
	Function_356();
	if (iLocal_613)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_332, 12.0f))
			{
				RESTART_SCRIPTED_CONVERSATION();
				iLocal_613 = 0;
				Function_355("Home02_s1_RidesBakJak", 0);
			}
		}
	}
	else if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_268(&bLocal_606))
		{
			Function_354(&bLocal_606);
		}
	}
	else
	{
		if (iLocal_612)
		{
			iLocal_612 = 0;
		}
		if (!Function_268(&bLocal_606))
		{
			Function_217(&bLocal_606);
		}
		if (Function_266(&bLocal_606) < 4.0f)
		{
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_332, 15.0f))
				{
					switch (iLocal_614)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_612 = 1;
								Function_466();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_614 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_612 = 1;
								if (iLocal_532)
								{
									Function_465();
									if (IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_614 = 99;
									}
								}
								else
								{
									return 1;
								}
							}
							break;
						
						case 0x00000063:
							return 1;
							break;
						
						default:
							return 1;
							break;
						}
					}
				}
			}
	}
	return 0;
}

void Function_465() //Position: 0x1AB2E / 109358
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_2ndElkBant_v2_AA", "Home02_s1_2ndElkBant_v2_AA", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_2ndElkBant_v2_AB1", "Home02_s1_2ndElkBant_v2_AB1", true, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_2ndElkBant_v2_AB2", "Home02_s1_2ndElkBant_v2_AB2", true, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_2ndElkBant_v2_AC", "Home02_s1_2ndElkBant_v2_AC", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_2ndElkBant_v2_AD", "Home02_s1_2ndElkBant_v2_AD", true, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_466() //Position: 0x1AC9B / 109723
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_2ndElkBant_v1_AA", "Home02_s1_2ndElkBant_v1_AA", true, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_2ndElkBant_v1_AB", "Home02_s1_2ndElkBant_v1_AB", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_2ndElkBant_v1_AC", "Home02_s1_2ndElkBant_v1_AC", true, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_4440", "", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_2ndElkBant_v1_AD", "Home02_s1_2ndElkBant_v1_AD", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_2ndElkBant_v1_AE", "Home02_s1_2ndElkBant_v1_AE", true, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_467(bool bParam0, bool bParam1) //Position: 0x1AE23 / 110115
{
	if (IS_ACTOR_VALID(bLocal_523))
	{
		switch (iLocal_515)
		{
			case 0x00000000:
				GET_OBJECT_POSITION(bParam0, &(vLocal_553[03]));
				STREAMING_LOAD_BOUNDS(vLocal_553[03], 50.0f, 1);
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_523);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_523, 1);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_523);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_523, 2);
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_523);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_523);
				iLocal_515++;
				break;
			
			case 0x00000001:
				if (!Function_468(bLocal_523, Global_34573, 60.0f) || !IS_ACTOR_RIDING(Global_34573))
				{
					if (!GET_TASK_STATUS(bLocal_523, 22) != 1)
					{
						TASK_FACE_ACTOR(bLocal_523, Global_34573, 1, 3212836864);
					}
				}
				else if (GET_TASK_STATUS(bLocal_523, 0) != 1)
				{
					GET_OBJECT_POSITION(bParam0, &(vLocal_553[03]));
					GET_OBJECT_POSITION(bParam1, &uLocal_563);
					bLocal_514 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &(vLocal_553[03]), 6.0f, 3);
					TASK_FACE_COORD(false, &uLocal_563, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_523, bLocal_514);
					TASK_SEQUENCE_RELEASE(bLocal_514, 1);
					TASK_PRIORITY_SET(bLocal_523, true);
				}
				if (GET_TASK_STATUS(bLocal_523, 6) == 1)
				{
					if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_523, "Warn_Fight"))
					{
						TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_523, 8, "HUNT");
						SET_ACTION_NODE_FOR_ACTOR(bLocal_523, "Dog_Main/Warn/Warn_Fight");
					}
				}
				break;
			}
	}
	return;
}

bool Function_468(bool bParam0, var uParam1, float fParam2) //Position: 0x1AF81 / 110465
{
	float fVar0;
	
	fVar0 = Function_469(bParam0, uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_469(bool bParam0, bool bParam1) //Position: 0x1AF9E / 110494
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_470(&uVar0, &uVar3);
	return iVar6;
}

var Function_470(var uParam0, bool bParam1) //Position: 0x1AFBD / 110525
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_471() //Position: 0x1AFDB / 110555
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_JakShoutsDog2", "Home02_s1_JakShoutsDog2", false, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_472() //Position: 0x1B032 / 110642
{
	if (SQUAD_IS_VALID(Local_4.f_152))
	{
		if (!DECOR_GET_BOOL(Local_4.f_152, "ElkSquadTeleported2"))
		{
			Function_477(Local_4.f_152, Local_4.f_620, 1, 6.0f, 3.0f, 1);
			bLocal_519 = false;
			while (bLocal_519 <= SQUAD_GET_SIZE(Local_4.f_152))
			{
				bLocal_526 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_152, bLocal_519);
				if (IS_ACTOR_ALIVE(bLocal_526))
				{
					Function_476(bLocal_526, &vLocal_584);
					if (FIND_GROUND_INTERSECTION(&vLocal_584, 20.0f, &Local_587, &uLocal_590))
					{
						TELEPORT_ACTOR(bLocal_526, &Local_587, 1, 1, 1);
					}
				}
				bLocal_519++;
			}
			SQUAD_GOALS_CLEAR(Local_4.f_152);
			Function_475(Local_4.f_152);
			Function_474(Local_4.f_152);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_152, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_256, -1.0f);
			Function_473(Local_4.f_152, Local_4.f_256, 2, 0);
			DECOR_SET_BOOL(Local_4.f_152, "ElkSquadTeleported2", true);
		}
	}
	return;
}

void Function_473(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1B125 / 110885
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
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, bParam1, iParam2, bParam3);
			}
			bVar0++;
		}
	}
}

void Function_474(bool bParam0) //Position: 0x1B174 / 110964
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

void Function_475(bool bParam0) //Position: 0x1B1BB / 111035
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

void Function_476(bool bParam0, bool bParam1) //Position: 0x1B1ED / 111085
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_477(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, bool bParam5) //Position: 0x1B1FA / 111098
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	struct<5> Var9;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_234(bParam1);
			vVar3 = { StackVal, StackVal, Function_234(bParam1) };
			Function_478(bParam1);
			Var9 = { StackVal, StackVal, Function_478(bParam1) };
			vVar6 = { StackVal, StackVal, vVar3 };
			vVar6.f_4 = (vVar6.y + fParam4);
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (iVar1 > iParam2)
					{
						iVar1 = 0;
						vVar6.x = vVar3.x;
						vVar6.f_8 = (vVar6.z + fParam3);
					}
					if (bParam5)
					{
						Var9.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
					}
					Function_404(StackVal, StackVal, StackVal, bVar2, vVar6, 1, 1, 1);
					iVar1++;
					vVar6.x = (vVar6.x + fParam3);
				}
				bVar0++;
			}
		}
	}
}

vector3 Function_478(bool bParam0) //Position: 0x1B2AE / 111278
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

void Function_479() //Position: 0x1B2D5 / 111317
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_Miss2ndGoAfter", "Home02_s1_Miss2ndGoAfter", true, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_480() //Position: 0x1B32E / 111406
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_SearchMoreElk", "Home02_s1_SearchMoreElk", true, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_481() //Position: 0x1B385 / 111493
{
	if (!SQUAD_IS_VALID(Local_4.f_104))
	{
		Function_330();
		if (SQUAD_IS_VALID(Local_4.f_104))
		{
			Function_329(Local_4.f_104, 0);
			Function_328(Local_4.f_104, 3);
			Function_327(Local_4.f_104, 0, 0, 0);
			bLocal_527 = (*&Local_4 + 92)[02];
			if (IS_ACTOR_VALID(bLocal_527))
			{
				Function_331(bLocal_527, (*&Local_4 + 412)[3], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_332, bLocal_527);
				SET_MOST_RECENT_MOUNT(bLocal_332, bLocal_527);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_104, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_523))
	{
		Function_331(bLocal_523, (*&Local_4 + 412)[4], 1, 1, 1);
		if (IS_ACTOR_VALID(bLocal_523))
		{
			SET_ACTOR_FACTION(bLocal_523, 20);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_523, false);
			Function_297(bLocal_523, 0, 0, 0, 1, 0, 1);
			SET_ACTOR_INVULNERABILITY(bLocal_523, true);
			SET_CRIPPLE_ENABLE(bLocal_523, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_523, 0.0f);
			DECOR_SET_BOOL(bLocal_523, "Frank", true);
			TASK_STAND_STILL(bLocal_523, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_523, true);
		}
	}
	else if (!iLocal_343[1])
	{
		Function_331(bLocal_523, (*&Local_4 + 412)[4], 1, 1, 1);
	}
	if (!SQUAD_IS_VALID(Local_4.f_152))
	{
		Function_446();
		if (SQUAD_IS_VALID(Local_4.f_152))
		{
			Function_329(Local_4.f_152, 0);
			Function_445(Local_4.f_152, 1);
			Function_327(Local_4.f_152, 1, 1, 1);
			Function_428(Local_4.f_152, bLocal_332);
			Function_482(Local_4.f_152, "NonActiveGringo", 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_152, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_252, -1.0f);
		}
	}
	if ((IS_ACTOR_VALID(bLocal_523) && SQUAD_IS_VALID(Local_4.f_104)) && SQUAD_IS_VALID(Local_4.f_152))
	{
		return 1;
	}
	return 0;
}

void Function_482(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1B52C / 111916
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

void Function_483(var uParam0) //Position: 0x1B573 / 111987
{
	if (!IS_OBJECT_VALID((*uParam0)[0]))
	{
		(*uParam0)[0] = DECOR_GET_OBJECT(Global_34573, "Skin2");
		if (IS_OBJECT_VALID((*uParam0)[0]))
		{
		}
	}
	if (!IS_OBJECT_VALID((*uParam0)[1]))
	{
		(*uParam0)[1] = DECOR_GET_OBJECT(Global_34573, "Skin3");
		if (IS_OBJECT_VALID((*uParam0)[1]))
		{
		}
	}
	if (!IS_OBJECT_VALID((*uParam0)[2]))
	{
		(*uParam0)[2] = DECOR_GET_OBJECT(Global_34573, "Skin4");
		if (IS_OBJECT_VALID((*uParam0)[2]))
		{
		}
	}
	return;
}

void Function_484() //Position: 0x1B5F7 / 112119
{
	if (SQUAD_IS_VALID(Local_4.f_152))
	{
		Function_490(Local_4.f_152);
		switch (iLocal_517)
		{
			case 0x00000000:
				iLocal_517++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(Local_4.f_152);
				Function_475(Local_4.f_152);
				Function_474(Local_4.f_152);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_152, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, Local_4.f_252, -1.0f);
				bLocal_519 = false;
				while (bLocal_519 <= SQUAD_GET_SIZE(Local_4.f_152))
				{
					bLocal_526 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_152, bLocal_519);
					if (IS_ACTOR_ALIVE(bLocal_526))
					{
						SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_526, bLocal_332, false);
						SET_ACTOR_PERMANENT(bLocal_526, 1);
					}
					bLocal_519++;
				}
				iLocal_517++;
				break;
			
			case 0x00000002:
				if (iLocal_530)
				{
					iLocal_517++;
				}
				break;
			
			case 0x00000003:
				SQUAD_GOALS_CLEAR(Local_4.f_152);
				Function_475(Local_4.f_152);
				Function_474(Local_4.f_152);
				Function_488(Local_4.f_152, &Local_4 + 212);
				Function_487(Local_4.f_152, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				bLocal_519 = false;
				while (bLocal_519 <= SQUAD_GET_SIZE(Local_4.f_152))
				{
					bLocal_526 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_152, bLocal_519);
					if (IS_ACTOR_ALIVE(bLocal_526))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_526)))
						{
							SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_526), "H2S1_ElkBlip");
						}
					}
					bLocal_519++;
				}
				if (!iLocal_532)
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_152, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_252, -1.0f);
					Function_473(Local_4.f_152, Local_4.f_252, 2, 0);
				}
				else
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_152, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_256, -1.0f);
					Function_473(Local_4.f_152, Local_4.f_256, 2, 0);
				}
				Function_217(&bLocal_550);
				iLocal_517++;
				break;
			
			case 0x00000004:
				if (((IS_ACTOR_SHOOTING(Global_34573) || IS_ACTOR_SHOOTING(bLocal_332)) || Function_452(Global_34573, Local_4.f_152, 50.0f)) || Function_452(bLocal_332, Local_4.f_152, 50.0f))
				{
					Function_217(&bLocal_550);
					iLocal_517++;
				}
				break;
			
			case 0x00000005:
				if (iLocal_533)
				{
					iLocal_517++;
				}
				else if (!iLocal_530)
				{
					iLocal_517 = 2;
				}
				if (Function_266(&bLocal_550) <= 1.0f)
				{
					iLocal_531 = 1;
					if (!iLocal_532)
					{
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_840, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_844, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_848, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_852, 2);
						Function_76(&bLocal_518, Function_485(4));
						Function_76(&bLocal_518, Function_485(0));
						ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(19, bLocal_518, Local_4.f_848, 100.0f, 1065353216, 1065353216, 1082130432, 2);
						Function_474(Local_4.f_152);
						SQUAD_GOALS_CLEAR(Local_4.f_152);
						Function_475(Local_4.f_152);
						SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_152, false, 0, 4294967295);
						TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 1, 0);
					}
					else
					{
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_840, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_844, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_848, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_852, 2);
						Function_76(&bLocal_518, Function_485(4));
						Function_76(&bLocal_518, Function_485(0));
						ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(19, bLocal_518, Local_4.f_852, 100.0f, 1065353216, 1065353216, 1082130432, 2);
						Function_474(Local_4.f_152);
						SQUAD_GOALS_CLEAR(Local_4.f_152);
						Function_475(Local_4.f_152);
						SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_152, false, 0, 4294967295);
						TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 1, 0);
					}
					Function_217(&bLocal_550);
					iLocal_517++;
				}
				break;
			
			case 0x00000006:
				if (iLocal_533)
				{
					iLocal_517++;
				}
				else if (!iLocal_530)
				{
					iLocal_517 = 2;
				}
				break;
			
			case 0x00000007:
				iLocal_517++;
				break;
			}
	}
	return;
}

bool Function_485(int iParam0) //Position: 0x1B995 / 113045
{
	return Function_486(2, iParam0);
}

int Function_486(int iParam0, bool bParam1) //Position: 0x1B9A1 / 113057
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 1;
	while (iVar1 < bParam1)
	{
		iVar0 = (iVar0 * iParam0);
		iVar1++;
	}
	return iVar0;
}

void Function_487(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x1B9CE / 113102
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

void Function_488(bool bParam0, int iParam1) //Position: 0x1BAB8 / 113336
{
	int iVar0;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < (*iParam1 - 1))
		{
			if (IS_VOLUME_VALID((*iParam1)[iVar0]))
			{
				Function_489(bParam0, (*iParam1)[iVar0]);
			}
			iVar0++;
		}
	}
	return;
}

int Function_489(bool bParam0, bool bParam1) //Position: 0x1BAFA / 113402
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

void Function_490(bool bParam0) //Position: 0x1BB4F / 113487
{
	if (SQUAD_IS_VALID(bParam0))
	{
		if (!Function_268(&iLocal_616))
		{
			Function_217(&iLocal_616);
		}
		else if (Function_266(&iLocal_616) < 2.0f)
		{
			bLocal_519 = false;
			while (bLocal_519 <= SQUAD_GET_SIZE(bParam0))
			{
				bLocal_526 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bLocal_519);
				if (IS_ACTOR_ALIVE(bLocal_526))
				{
					if (!IS_ACTOR_ON_GROUND(bLocal_526))
					{
						Function_476(bLocal_526, &vLocal_584);
						if (FIND_GROUND_INTERSECTION(&vLocal_584, 20.0f, &Local_587, &uLocal_590))
						{
							if (!WOULD_ACTOR_BE_VISIBLE(1110, &Local_587, 3212836864))
							{
								TELEPORT_ACTOR(bLocal_526, &Local_587, 0, 1, 1);
							}
						}
					}
				}
				bLocal_519++;
			}
			Function_217(&iLocal_616);
		}
	}
	return;
}

void Function_491() //Position: 0x1BBF4 / 113652
{
	Function_346(bLocal_219);
	if (iLocal_329 < 3 && iLocal_329 > 105)
	{
		Function_512();
		Function_405();
	}
	switch (iLocal_329)
	{
		case 0x00000000:
			Function_342(0);
			SET_ACTOR_HEALTH(bLocal_332, GET_ACTOR_MAX_HEALTH(bLocal_332));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			GET_OBJECT_POSITION(Local_4.f_608, &vLocal_581);
			STREAMING_LOAD_BOUNDS(vLocal_581, 50.0f, 1);
			if (iLocal_343[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_334();
				bLocal_330 = Global_30637[1];
				if (!Function_333(bLocal_330))
				{
					Function_332(&Local_220);
				}
				Function_331(Global_34573, (*&Local_4 + 384)[0], 1, 1, 1);
				Function_373();
				if (IS_ACTOR_VALID(bLocal_333))
				{
					TASK_STAND_STILL(bLocal_333, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_333, true);
				}
				if (IS_ACTOR_VALID(bLocal_332))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_332);
					MEMORY_PREFER_RIDING(bLocal_332, false);
					CLEAR_ACTOR_MAX_SPEED(bLocal_332);
					TASK_STAND_STILL(bLocal_332, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_332, true);
				}
				Function_217(&vLocal_334);
				iLocal_329 = 1;
			}
			else
			{
				Function_217(&vLocal_334);
				iLocal_329 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_333(bLocal_330) || bLocal_330 != 4294967295))
			{
				Function_217(&vLocal_334);
				iLocal_329 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_510())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_520 = Function_401();
				iLocal_516 = 0;
				iLocal_515 = 0;
				iLocal_517 = 0;
				iLocal_530 = 0;
				iLocal_532 = 0;
				iLocal_531 = 0;
				iLocal_533 = 0;
				iLocal_534 = 0;
				if (IS_ACTOR_VALID(bLocal_523))
				{
					SET_ACTOR_HEALTH(bLocal_523, GET_ACTOR_MAX_HEALTH(bLocal_523));
				}
				if (iLocal_343[0] == 0)
				{
					if (IS_ACTOR_VALID(Global_34573))
					{
						if (IS_ACTOR_VALID(bLocal_333))
						{
							Function_331(bLocal_333, (*&Local_4 + 384)[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_MOUNTED(bLocal_333))
							{
								ACTOR_MOUNT_ACTOR(Global_34573, bLocal_333);
							}
						}
					}
					if (IS_ACTOR_VALID(bLocal_332))
					{
						if (IS_ACTOR_VALID(bLocal_527))
						{
							Function_331(bLocal_527, (*&Local_4 + 384)[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(bLocal_332) && !IS_ACTOR_MOUNTED(bLocal_527))
							{
								ACTOR_MOUNT_ACTOR(bLocal_332, bLocal_527);
							}
						}
					}
				}
				Function_221(12, 0, 1);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_332, 0);
				CLEAR_ACTOR_MAX_SPEED(bLocal_332);
				CLEAR_ACTOR_MAX_SPEED(bLocal_527);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_332, 2);
				AI_RIDING_SET_ATTRIBUTE(bLocal_332, 2, 0,15f);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_332, 4294967295);
				PRINTFLOAT(COMBAT_CLASS_AI_GET_RANGE_ACCURACY(bLocal_332));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(bLocal_332, 53));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(bLocal_332, 54));
				PRINTNL();
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_332, 13, true);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_332, 30.0f);
				iLocal_355 = 0;
				Function_396(&(Local_396[017]), bLocal_332, "Son", 1, 0x5f5e100, 1);
				Function_396(&(Local_396[117]), bLocal_523, "Dog", 0, 0x5f5e100, 1);
				Function_392(&(Local_396[117]), 1024);
				Function_396(&(Local_396[217]), bLocal_525, "Uncle", 0, 0x5f5e100, 1);
				Function_396(&(Local_396[317]), bLocal_524, "Wife", 0, 0x5f5e100, 1);
				Function_391(&(Local_396[417]));
				Function_391(&(Local_396[517]));
				Function_313(&uLocal_504, 12, 0, 4294967295, 4294967295);
				Function_217(&vLocal_334);
				iLocal_329 = 6;
				Function_233(bLocal_328);
				Function_385(StackVal, StackVal, Function_233(bLocal_328), bLocal_328, Global_30637[1], Function_236(bLocal_328), 2);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				iLocal_355 = 0;
				if (!IS_OBJECT_VALID(bLocal_594))
				{
					if (IS_ACTOR_VALID(bLocal_523))
					{
						bLocal_594 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_219, "HOME02SON01_CAMERA_FOCUS", bLocal_523, 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
						if (IS_OBJECT_VALID(bLocal_594))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_594, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(bLocal_528))
				{
					if (IS_ACTOR_VALID(bLocal_523))
					{
						bLocal_528 = ADD_BLIP_FOR_ACTOR(bLocal_523, 325, 0, 2, 0);
						SET_BLIP_NAME(bLocal_528, "BLIP_RUFUS");
						if (IS_BLIP_VALID(bLocal_528))
						{
						}
					}
				}
				if (!iLocal_532)
				{
					Function_454("Home02_s1_PiksUpScent", 0);
				}
				else
				{
					Function_454("Home02s1_PiksUpScent", 0);
				}
				Function_217(&vLocal_334);
				iLocal_329 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_266(&vLocal_334) <= 5.0f)
			{
				if (iLocal_532)
				{
					Function_509();
				}
				TASK_CLEAR(bLocal_523);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_523);
				if (iLocal_343[0] != 0 || iLocal_532)
				{
					Function_378("home02_son01_obj02", 7,5f, 1, 2, 0, 0, 0);
				}
				if (iLocal_532)
				{
					Function_508();
				}
				Function_217(&vLocal_334);
				Function_217(&bLocal_337);
				Function_217(&bLocal_340);
				iLocal_329 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_358(&bLocal_340, 100.0f, bLocal_333, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_353, 0, bLocal_219, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_528))
				{
					REMOVE_BLIP(bLocal_528);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(bLocal_528))
				{
					if (IS_ACTOR_VALID(bLocal_523))
					{
						bLocal_528 = ADD_BLIP_FOR_ACTOR(bLocal_523, 325, 0, 2, 0);
						SET_BLIP_NAME(bLocal_528, "BLIP_RUFUS");
						if (IS_BLIP_VALID(bLocal_528))
						{
						}
					}
				}
				Function_410(&bLocal_340, 60.0f, 200.0f, bLocal_523, "Dog_return", "Dog_abandoned", &bLocal_353, 0, 0, 0, 325, 1);
			}
			if (IS_ACTOR_VALID(bLocal_523) && IS_ACTOR_VALID(bLocal_332))
			{
				if (!iLocal_532)
				{
					Function_502();
				}
				else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_463();
				}
			}
			if (!iLocal_532)
			{
				Function_467(Local_4.f_624, Local_4.f_608);
			}
			else
			{
				Function_467(Local_4.f_628, Local_4.f_612);
			}
			if (Function_382(0))
			{
				if (!DECOR_CHECK_EXIST(bLocal_219, "CompEmerTele"))
				{
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332, bLocal_523, 40.0f, 15.0f, 25.0f);
					DECOR_SET_BOOL(bLocal_219, "CompEmerTele", true);
				}
				if (GET_TASK_STATUS(bLocal_332, 0) != 1)
				{
					vLocal_566 = { 3.0f, 0.0f, 10.0f };
					bLocal_514 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT(false, bLocal_523, &vLocal_566, 0, 0, 0, 0, 0, 0, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
					TASK_SEQUENCE_RELEASE(bLocal_514, 1);
					TASK_PRIORITY_SET(bLocal_332, true);
				}
			}
			else if (DECOR_CHECK_EXIST(bLocal_219, "CompEmerTele"))
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332);
				DECOR_REMOVE(bLocal_219, "CompEmerTele");
			}
			if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_523, "Warn_Fight") || Function_461(Local_4.f_120, 1.0f, 120.0f, 1, 1))
			{
				if (iLocal_530)
				{
				}
				else
				{
					iLocal_530 = 1;
					iLocal_534 = 1;
				}
				Function_313(&uLocal_504, 8, 0, 4294967295, 4294967295);
				if (IS_BLIP_VALID(bLocal_528))
				{
					REMOVE_BLIP(bLocal_528);
				}
				Function_238();
				Function_217(&vLocal_334);
				iLocal_329 = 9;
			}
			break;
		
		case 0x00000009:
			iLocal_355 = 1;
			if (!iLocal_532)
			{
				if (iLocal_534)
				{
					Function_501();
				}
				else
				{
					Function_500();
				}
			}
			else
			{
				Function_499();
			}
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_523, 2);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_523, 1);
			DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332);
			DECOR_REMOVE(bLocal_219, "CompEmerTele");
			vLocal_553[03] = { -3.0f, 0.0f, 6.0f };
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_523);
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_523, Global_34573, 60.0f, 10.0f, 50.0f);
			bLocal_514 = TASK_SEQUENCE_OPEN();
			TASK_STAND_STILL(false, 5.0f, 0, 0);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(false, Global_34573, 5.0f, 4);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_523, bLocal_514);
			TASK_SEQUENCE_RELEASE(bLocal_514, 1);
			TASK_PRIORITY_SET(bLocal_523, true);
			iLocal_515 = 0;
			Function_217(&vLocal_334);
			iLocal_329 = 10;
			break;
		
		case 0x0000000A:
			if (Function_266(&vLocal_334) <= 5.0f)
			{
				Function_378("home02_son01_obj03", 7,5f, 1, 2, 0, 0, 0);
				if (!iLocal_532)
				{
					MEMORY_ALLOW_SHOOTING(bLocal_332, false);
					ACTOR_START_FORCE_HOLSTER(bLocal_332, 1, 0);
					Function_498();
				}
				else
				{
					Function_497();
				}
				Function_217(&vLocal_334);
				Function_217(&bLocal_337);
				Function_217(&bLocal_340);
				iLocal_329 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_382(0))
			{
				if (GET_TASK_STATUS(bLocal_332, 67) != 1)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_332, Global_34573, 7.0f, 4);
				}
			}
			if (!iLocal_532)
			{
				if (iLocal_531)
				{
					Function_453(1, 0);
				}
			}
			else
			{
				Function_453(1, 1);
			}
			if (SQUAD_IS_VALID(Local_4.f_120))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_120) <= 1)
				{
					MEMORY_ALLOW_SHOOTING(bLocal_332, true);
					ACTOR_END_FORCE_HOLSTER(bLocal_332);
					Function_313(&uLocal_504, 3, 0, 4294967295, 4294967295);
					Function_238();
					Function_451(Local_4.f_120);
					Function_217(&vLocal_334);
					iLocal_329 = 12;
				}
				else if (iLocal_531)
				{
					Function_313(&uLocal_504, 27, 0, 4294967295, 4294967295);
					if (!Function_461(Local_4.f_120, 1.0f, 120.0f, 1, 1) && !Function_452(Global_34573, Local_4.f_120, 90.0f))
					{
						if (iLocal_532)
						{
							Function_313(&uLocal_504, 12, 0, 4294967295, 4294967295);
							iLocal_530 = 0;
							MEMORY_ALLOW_SHOOTING(bLocal_332, true);
							ACTOR_END_FORCE_HOLSTER(bLocal_332);
							Function_451(Local_4.f_120);
							Function_238();
							Function_217(&vLocal_334);
							iLocal_329 = 18;
						}
						else
						{
							Function_313(&uLocal_504, 12, 0, 4294967295, 4294967295);
							STREAMING_UNLOAD_BOUNDS();
							iLocal_532 = 1;
							iLocal_531 = 0;
							iLocal_530 = 0;
							Function_496();
							Function_509();
							MEMORY_ALLOW_SHOOTING(bLocal_332, true);
							ACTOR_END_FORCE_HOLSTER(bLocal_332);
							iLocal_515 = 0;
							Function_451(Local_4.f_120);
							Function_238();
							Function_217(&vLocal_334);
							iLocal_329 = 6;
						}
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (!IS_OBJECT_VALID(iLocal_539[0]))
			{
				iLocal_539[0] = DECOR_GET_OBJECT(Global_34573, "Skin1");
				if (IS_OBJECT_VALID(iLocal_539[0]))
				{
					bLocal_543 = iLocal_539[0];
					GET_OBJECT_POSITION(iLocal_539[0], &vLocal_569);
					PRINTVECTOR(vLocal_569);
					PRINTNL();
					vLocal_566 = { StackVal, StackVal, Vector(vLocal_569, StackVal, StackVal) + Vector(-2.0f, 0.0f, 1.0f) };
					PRINTVECTOR(vLocal_566);
					PRINTNL();
					CLEAR_ACTOR_MAX_SPEED(bLocal_332);
					CLEAR_ACTOR_MAX_SPEED(bLocal_527);
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_523);
					Function_427(0);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_332, 1);
					bLocal_514 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &vLocal_566, 7.0f, 4);
					TASK_DRAW_HOLSTER_WEAPON(false, 0);
					TASK_DISMOUNT(false, 1);
					TASK_GO_NEAR_COORD(false, &vLocal_566, 3.0f, true);
					TASK_FACE_COORD(false, &vLocal_569, 0);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
					TASK_SEQUENCE_RELEASE(bLocal_514, 1);
					TASK_PRIORITY_SET(bLocal_332, true);
					Function_217(&vLocal_334);
					iLocal_329 = 13;
				}
			}
			break;
		
		case 0x0000000D:
			iLocal_533 = 1;
			iLocal_530 = 0;
			iLocal_355 = 0;
			if (IS_OBJECT_VALID(bLocal_543))
			{
				ADD_BLIP_FOR_OBJECT(bLocal_543, 330, 0f, 2, 0);
			}
			Function_378("home02_son01_obj04", 7,5f, 1, 2, 0, 0, 0);
			Function_495();
			Function_217(&vLocal_334);
			iLocal_329 = 14;
			break;
		
		case 0x0000000E:
			if (GET_TASK_STATUS(bLocal_332, 6) == 1)
			{
				if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_332, "Rand_Idle_Sit_Ground"))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_332, 1);
					SET_ANIM_SET_FOR_ACTOR(bLocal_332, "Rand_Idle_Sit_Ground", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_332, "Rand_Idle_Sit_Ground/Ground/D/pre");
				}
			}
			else if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_332, "Rand_Idle_Sit_Ground/Ground/D/idleD"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bLocal_332, "Rand_Idle_Sit_Ground/Ground/D/ground_quickexit/pst");
			}
			if (Function_266(&vLocal_334) <= 5.0f)
			{
				GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(bLocal_543), "UseCase", 1);
				Function_494();
				Function_217(&vLocal_334);
				Function_217(&bLocal_337);
				Function_217(&bLocal_340);
				iLocal_329 = 15;
			}
			break;
		
		case 0x0000000F:
			Function_410(&bLocal_340, 60.0f, 200.0f, bLocal_332, "Son_return", "Son_abandoned", &bLocal_353, 0, 0, 0, 325, 1);
			if (GET_TASK_STATUS(bLocal_332, 6) == 1)
			{
				if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_332, "Rand_Idle_Sit_Ground"))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_332, 1);
					SET_ANIM_SET_FOR_ACTOR(bLocal_332, "Rand_Idle_Sit_Ground", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_332, "Rand_Idle_Sit_Ground/Ground/D/pre");
				}
			}
			else if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_332, "Rand_Idle_Sit_Ground/Ground/D/idleD"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bLocal_332, "Rand_Idle_Sit_Ground/Ground/D/ground_quickexit/pst");
			}
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
			{
				if (Function_493(GET_OBJECT_NAME(GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(Global_34573))), "skin_animal"))
				{
					Function_238();
					Function_272();
					Function_217(&vLocal_334);
					iLocal_329 = 16;
				}
			}
			break;
		
		case 0x00000010:
			if (Function_266(&vLocal_334) <= 2.0f)
			{
				Function_217(&vLocal_334);
				iLocal_329 = 17;
			}
			break;
		
		case 0x00000011:
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_332, "Rand_Idle_Sit_Ground/Ground/D/idleD"))
				{
					SET_ACTION_NODE_FOR_ACTOR(bLocal_332, "Rand_Idle_Sit_Ground/Ground/D/ground_quickexit/pst");
				}
				Function_492();
				Function_217(&vLocal_334);
				iLocal_329 = 18;
			}
			break;
		
		case 0x00000012:
			Function_382(1);
			if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_332, "Rand_Idle_Sit_Ground/Ground/D/idleD"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bLocal_332, "Rand_Idle_Sit_Ground/Ground/D/ground_quickexit/pst");
			}
			if (Function_266(&vLocal_334) <= 5.0f)
			{
				if (SQUAD_IS_VALID(Local_4.f_120))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_120) == 1)
					{
						iLocal_529 = 1;
					}
				}
				Function_217(&vLocal_334);
				iLocal_329 = 106;
			}
			break;
		
		case 0x0000006A:
			TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_523);
			TASK_CLEAR(bLocal_523);
			if (DECOR_CHECK_EXIST(Global_34573, "Skin1"))
			{
				DECOR_REMOVE(Global_34573, "Skin1");
			}
			bLocal_519 = false;
			while (bLocal_519 <= SQUAD_GET_SIZE(Local_4.f_120))
			{
				bLocal_526 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_120, bLocal_519);
				if (IS_ACTOR_ALIVE(bLocal_526))
				{
					SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_526, bLocal_332, true);
					SET_ACTOR_PERMANENT(bLocal_526, 0);
				}
				bLocal_519++;
			}
			if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_332, "Rand_Idle_Sit_Ground/Ground/D/idleD"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bLocal_332, "Rand_Idle_Sit_Ground/Ground/D/ground_quickexit/pst");
			}
			STREAMING_UNLOAD_BOUNDS();
			iLocal_343[1] = 1;
			Function_217(&vLocal_334);
			bLocal_328 = 2;
			iLocal_329 = 0;
			break;
	}
	return;
}

void Function_492() //Position: 0x1CBB3 / 117683
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_FinishCuttin", "Home02_s1_FinishCuttin", true, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_493(char* cParam0, char* cParam1) //Position: 0x1CC08 / 117768
{
	char* cVar0[64];
	char* cVar16[64];
	
	strcpy(&cVar0, cParam0, 64);
	strcpy(&cVar16, cParam1, 64);
	STRING_LOWER(&cVar0);
	STRING_LOWER(&cVar16);
	if (STRINGS_ARE_EQUAL(&cVar0, &cVar16))
	{
		return 1;
	}
	return 0;
}

void Function_494() //Position: 0x1CC33 / 117811
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_TalkApprochElk_v1_AA", "Home02_s1_TalkApprochElk_v1_AA", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_TalkApprochElk_v1_AB", "Home02_s1_TalkApprochElk_v1_AB", true, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_2470", "", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_TalkApprochElk_v1_AC", "Home02_s1_TalkApprochElk_v1_AC", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_TalkApprochElk_v1_AD", "Home02_s1_TalkApprochElk_v1_AD", true, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_495() //Position: 0x1CD98 / 118168
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_CollectMeat", "Home02_s1_CollectMeat", true, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_496() //Position: 0x1CDEB / 118251
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JonMisses1stElk", "Home02_s1_JonMisses1stElk", true, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_497() //Position: 0x1CE46 / 118342
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_RidesAfter2_v1_AA", "Home02_s1_RidesAfter2_v1_AA", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_RidesAfter2_v1_AB", "Home02_s1_RidesAfter2_v1_AB", true, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_498() //Position: 0x1CEEA / 118506
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_RidesOff1stElk_v1_AA", "Home02_s1_RidesOff1stElk_v1_AA", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_RidesOff1stElk_v1_AB", "Home02_s1_RidesOff1stElk_v1_AB", true, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_499() //Position: 0x1CF9A / 118682
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_FoundAnother", "Home02_s1_FoundAnother", false, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_500() //Position: 0x1CFEF / 118767
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_DogSignals", "Home02_s1_DogSignals", true, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_501() //Position: 0x1D040 / 118848
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_SpotsElkB4Dog", "Home02_s1_SpotsElkB4Dog", true, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_502() //Position: 0x1D097 / 118935
{
	Function_356();
	if (iLocal_613)
	{
		if (IS_ACTOR_RIDING(Global_34573))
		{
			if (ACTORS_IN_RANGE(Global_34573, bLocal_332, 12.0f))
			{
				RESTART_SCRIPTED_CONVERSATION();
				iLocal_613 = 0;
				Function_355("Home02_s1_RidesBakJak", 0);
			}
		}
	}
	else if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_268(&bLocal_606))
		{
			Function_354(&bLocal_606);
		}
	}
	else
	{
		if (iLocal_612)
		{
			iLocal_612 = 0;
		}
		if (!Function_268(&bLocal_606))
		{
			Function_217(&bLocal_606);
		}
		if (Function_266(&bLocal_606) < 4.0f)
		{
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_332, 12.0f))
				{
					switch (iLocal_614)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_612 = 1;
								Function_507();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_614 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_612 = 1;
								Function_506();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_614 = 2;
								}
							}
							break;
						
						case 0x00000002:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_612 = 1;
								Function_505();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_614 = 3;
								}
							}
							break;
						
						case 0x00000003:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_612 = 1;
								Function_504();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_614 = 5;
								}
							}
							break;
						
						case 0x00000063:
							return 1;
							break;
						
						default:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_503();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_614 = 99;
								}
							}
							break;
						}
					}
				}
			}
	}
	return 0;
}

void Function_503() //Position: 0x1D1ED / 119277
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjFollowDog_v1_AA", "Home02_s1_JjFollowDog_v1_AA", true, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_JjFollowDog_v1_AB", "Home02_s1_JjFollowDog_v1_AB", false, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_504() //Position: 0x1D291 / 119441
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjElkBanter_v4_AA1", "Home02_s1_JjElkBanter_v4_AA1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjElkBanter_v4_AA2", "Home02_s1_JjElkBanter_v4_AA2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_JjElkBanter_v4_AB1", "Home02_s1_JjElkBanter_v4_AB1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_JjElkBanter_v4_AB2", "Home02_s1_JjElkBanter_v4_AB2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjElkBanter_v4_AC", "Home02_s1_JjElkBanter_v4_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_JjElkBanter_v4_AD", "Home02_s1_JjElkBanter_v4_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjElkBanter_v4_AE", "Home02_s1_JjElkBanter_v4_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_JjElkBanter_v4_AF", "Home02_s1_JjElkBanter_v4_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjElkBanter_v4_AG", "Home02_s1_JjElkBanter_v4_AG", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_JjElkBanter_v4_AH", "Home02_s1_JjElkBanter_v4_AH", false, 1, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_505() //Position: 0x1D565 / 120165
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjElkBanter_v3_AA", "Home02_s1_JjElkBanter_v3_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_JjElkBanter_v3_AB", "Home02_s1_JjElkBanter_v3_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjElkBanter_v3_AC", "Home02_s1_JjElkBanter_v3_AC", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_JjElkBanter_v3_AD", "Home02_s1_JjElkBanter_v3_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjElkBanter_v3_AE", "Home02_s1_JjElkBanter_v3_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_JjElkBanter_v3_AF", "Home02_s1_JjElkBanter_v3_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjElkBanter_v3_AG", "Home02_s1_JjElkBanter_v3_AG", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_JjElkBanter_v3_AH", "Home02_s1_JjElkBanter_v3_AH", false, 1, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_506() //Position: 0x1D7A7 / 120743
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjElkBanter_v2_AA", "Home02_s1_JjElkBanter_v2_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_JjElkBanter_v2_AB", "Home02_s1_JjElkBanter_v2_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjElkBanter_v2_AC1", "Home02_s1_JjElkBanter_v2_AC1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjElkBanter_v2_AC2", "Home02_s1_JjElkBanter_v2_AC2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_JjElkBanter_v2_AD", "Home02_s1_JjElkBanter_v2_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjElkBanter_v2_AE", "Home02_s1_JjElkBanter_v2_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_JjElkBanter_v2_AF", "Home02_s1_JjElkBanter_v2_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjElkBanter_v2_AG1", "Home02_s1_JjElkBanter_v2_AG1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_JjElkBanter_v2_AG2", "Home02_s1_JjElkBanter_v2_AG2", true, 1, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_507() //Position: 0x1DA36 / 121398
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_TalkToElk_v1_AA", "Home02_s1_TalkToElk_v1_AA", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_TalkToElk_v1_AB", "Home02_s1_TalkToElk_v1_AB", false, 1, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_508() //Position: 0x1DAD2 / 121554
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_HuntOtherBant_v1_AA", "Home02_s1_HuntOtherBant_v1_AA", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_HuntOtherBant_v1_AB", "Home02_s1_HuntOtherBant_v1_AB", true, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_HuntOtherBant_v1_AC", "Home02_s1_HuntOtherBant_v1_AC", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_HuntOtherBant_v1_AD", "Home02_s1_HuntOtherBant_v1_AD", true, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Home02_s1_HuntOtherBant_v1_AE", "Home02_s1_HuntOtherBant_v1_AE", false, 2, 0, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_509() //Position: 0x1DC59 / 121945
{
	if (SQUAD_IS_VALID(Local_4.f_120))
	{
		if (!DECOR_GET_BOOL(Local_4.f_120, "ElkSquadTeleported1"))
		{
			Function_477(Local_4.f_120, Local_4.f_612, 1, 6.0f, 3.0f, 1);
			bLocal_519 = false;
			while (bLocal_519 <= SQUAD_GET_SIZE(Local_4.f_120))
			{
				bLocal_526 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_120, bLocal_519);
				if (IS_ACTOR_ALIVE(bLocal_526))
				{
					Function_476(bLocal_526, &vLocal_584);
					if (FIND_GROUND_INTERSECTION(&vLocal_584, 20.0f, &Local_587, &uLocal_590))
					{
						TELEPORT_ACTOR(bLocal_526, &Local_587, 1, 1, 1);
					}
				}
				bLocal_519++;
			}
			SQUAD_GOALS_CLEAR(Local_4.f_120);
			Function_475(Local_4.f_120);
			Function_474(Local_4.f_120);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_120, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_248, -1.0f);
			Function_473(Local_4.f_120, Local_4.f_248, 2, 0);
			DECOR_SET_BOOL(Local_4.f_120, "ElkSquadTeleported1", true);
		}
	}
	return;
}

bool Function_510() //Position: 0x1DD4A / 122186
{
	if (!SQUAD_IS_VALID(Local_4.f_104))
	{
		Function_330();
		if (SQUAD_IS_VALID(Local_4.f_104))
		{
			Function_329(Local_4.f_104, 0);
			Function_328(Local_4.f_104, 3);
			Function_327(Local_4.f_104, 0, 0, 0);
			bLocal_527 = (*&Local_4 + 92)[02];
			if (IS_ACTOR_VALID(bLocal_527))
			{
				Function_331(bLocal_527, (*&Local_4 + 384)[3], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_332, bLocal_527);
				SET_MOST_RECENT_MOUNT(bLocal_332, bLocal_527);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_104, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_523))
	{
		Function_331(bLocal_523, (*&Local_4 + 384)[4], 1, 1, 1);
		if (IS_ACTOR_VALID(bLocal_523))
		{
			SET_ACTOR_FACTION(bLocal_523, 20);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_523, false);
			Function_297(bLocal_523, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(bLocal_523, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_523, 0.0f);
			SET_ACTOR_INVULNERABILITY(bLocal_523, true);
			DECOR_SET_BOOL(bLocal_523, "Frank", true);
			TASK_STAND_STILL(bLocal_523, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_523, true);
		}
	}
	else if (!iLocal_343[0])
	{
		Function_331(bLocal_523, (*&Local_4 + 384)[4], 1, 1, 1);
	}
	if (!SQUAD_IS_VALID(Local_4.f_120))
	{
		Function_511();
		if (SQUAD_IS_VALID(Local_4.f_120))
		{
			Function_329(Local_4.f_120, 0);
			Function_445(Local_4.f_120, 1);
			Function_327(Local_4.f_120, 1, 1, 1);
			Function_428(Local_4.f_120, bLocal_332);
			Function_482(Local_4.f_120, "NonActiveGringo", 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_120, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, Local_4.f_244, -1.0f);
		}
	}
	if ((IS_ACTOR_VALID(bLocal_523) && SQUAD_IS_VALID(Local_4.f_104)) && SQUAD_IS_VALID(Local_4.f_120))
	{
		return 1;
	}
	return 0;
}

void Function_511() //Position: 0x1DEF1 / 122609
{
	Local_4.f_120 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Elk01"));
	(*&Local_4 + 108)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nELK_01_01", 1111, -851,9999f, 186,7455f, 1300f, 0.0f, 54,73498f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 108)[02], Local_4.f_120);
	DECOR_SET_BOOL((*&Local_4 + 108)[02], "Home02_S1_Skin1", true);
	return;
}

void Function_512() //Position: 0x1DF68 / 122728
{
	Function_490(Local_4.f_120);
	if (SQUAD_IS_VALID(Local_4.f_120))
	{
		switch (iLocal_517)
		{
			case 0x00000000:
				iLocal_517++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(Local_4.f_120);
				Function_475(Local_4.f_120);
				Function_474(Local_4.f_120);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_120, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, Local_4.f_244, -1.0f);
				Function_473(Local_4.f_120, Local_4.f_244, 2, 0);
				bLocal_519 = false;
				while (bLocal_519 <= SQUAD_GET_SIZE(Local_4.f_120))
				{
					bLocal_526 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_120, bLocal_519);
					if (IS_ACTOR_ALIVE(bLocal_526))
					{
						SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_526, bLocal_332, false);
						SET_ACTOR_PERMANENT(bLocal_526, 1);
					}
					bLocal_519++;
				}
				iLocal_517++;
				break;
			
			case 0x00000002:
				if (iLocal_530)
				{
					iLocal_517++;
				}
				break;
			
			case 0x00000003:
				SQUAD_GOALS_CLEAR(Local_4.f_120);
				Function_475(Local_4.f_120);
				Function_474(Local_4.f_120);
				Function_488(Local_4.f_120, &Local_4 + 188);
				Function_487(Local_4.f_120, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				bLocal_519 = false;
				while (bLocal_519 <= SQUAD_GET_SIZE(Local_4.f_120))
				{
					bLocal_526 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_120, bLocal_519);
					if (IS_ACTOR_ALIVE(bLocal_526))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_526)))
						{
							SET_BLIP_NAME(GET_BLIP_ON_ACTOR(bLocal_526), "H2S1_ElkBlip");
						}
					}
					bLocal_519++;
				}
				if (!iLocal_532)
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_120, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_244, -1.0f);
					Function_473(Local_4.f_120, Local_4.f_244, 2, 0);
				}
				else
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_120, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, Local_4.f_248, -1.0f);
					Function_473(Local_4.f_120, Local_4.f_248, 2, 0);
				}
				Function_217(&bLocal_550);
				iLocal_517++;
				break;
			
			case 0x00000004:
				if ((IS_ACTOR_SHOOTING(Global_34573) || IS_ACTOR_SHOOTING(bLocal_332)) || Function_452(Global_34573, Local_4.f_120, 50.0f))
				{
					Function_217(&bLocal_550);
					iLocal_517++;
				}
				break;
			
			case 0x00000005:
				if (iLocal_533)
				{
					iLocal_517++;
				}
				else if (!iLocal_530)
				{
					iLocal_517 = 2;
				}
				if (Function_266(&bLocal_550) <= 1.0f)
				{
					iLocal_531 = 1;
					if (!iLocal_532)
					{
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_840, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_844, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_848, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_852, 2);
						Function_76(&bLocal_518, Function_485(4));
						Function_76(&bLocal_518, Function_485(0));
						ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(19, bLocal_518, Local_4.f_840, 100.0f, 1065353216, 1065353216, 1082130432, 2);
						Function_474(Local_4.f_120);
						SQUAD_GOALS_CLEAR(Local_4.f_120);
						Function_475(Local_4.f_120);
						SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_120, false, 0, 4294967295);
						TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 1, 0);
					}
					else
					{
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_840, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_844, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_848, 2);
						ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(19, Local_4.f_852, 2);
						Function_76(&bLocal_518, Function_485(4));
						Function_76(&bLocal_518, Function_485(0));
						ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(19, bLocal_518, Local_4.f_844, 100.0f, 1065353216, 1065353216, 1082130432, 2);
						Function_474(Local_4.f_120);
						SQUAD_GOALS_CLEAR(Local_4.f_120);
						Function_475(Local_4.f_120);
						SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_120, false, 0, 4294967295);
						TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 1, 0);
					}
					Function_217(&bLocal_550);
					iLocal_517++;
				}
				break;
			
			case 0x00000006:
				if (iLocal_533)
				{
					iLocal_517++;
				}
				else if (!iLocal_530)
				{
					iLocal_517 = 2;
				}
				break;
			
			case 0x00000007:
				iLocal_517++;
				break;
			}
	}
	return;
}

void Function_513() //Position: 0x1E301 / 123649
{
	Function_346(bLocal_219);
	Function_517();
	if (((iLocal_329 < 5 && iLocal_329 > 105) && !iLocal_329 != 104) && !iLocal_329 != 103)
	{
		Function_405();
	}
	switch (iLocal_329)
	{
		case 0x00000000:
			Function_342(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_332, GET_ACTOR_MAX_HEALTH(bLocal_332));
			iLocal_522 = 0;
			if (IS_ACTOR_VALID(bLocal_333))
			{
				TASK_STAND_STILL(bLocal_333, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_333, true);
			}
			if (IS_ACTOR_VALID(bLocal_332))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(bLocal_332);
				MEMORY_PREFER_RIDING(bLocal_332, false);
				CLEAR_ACTOR_MAX_SPEED(bLocal_332);
				TASK_PRIORITY_SET(bLocal_332, true);
			}
			if (IS_ACTOR_VALID(bLocal_524))
			{
				TASK_STAND_STILL(bLocal_524, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_524, 2);
			}
			if (IS_ACTOR_VALID(bLocal_525))
			{
				TASK_STAND_STILL(bLocal_525, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_525, 2);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_334();
			bLocal_330 = Global_30717[1];
			if (!Function_333(bLocal_330))
			{
				Function_332(&Local_220);
			}
			Function_331(Global_34573, (*&Local_4 + 344)[0], 1, 1, 1);
			Function_217(&vLocal_334);
			iLocal_329 = 1;
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				if (STREAMING_IS_WORLD_LOADED() && (Function_333(bLocal_330) || bLocal_330 != 4294967295))
				{
					Function_217(&vLocal_334);
					iLocal_329 = 2;
				}
			}
			else
			{
				Function_217(&vLocal_334);
				iLocal_329 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_516())
			{
				iLocal_520 = Function_401();
				iLocal_516 = 0;
				iLocal_515 = 0;
				iLocal_517 = 0;
				iLocal_530 = 0;
				iLocal_532 = 0;
				iLocal_531 = 0;
				iLocal_533 = 0;
				Function_313(&uLocal_504, 3, 0, 4294967295, 4294967295);
				if (IS_ACTOR_VALID(bLocal_523))
				{
					SET_ACTOR_HEALTH(bLocal_523, GET_ACTOR_MAX_HEALTH(bLocal_523));
				}
				if (Function_278(&Local_220))
				{
					if (IS_ACTOR_VALID(bLocal_332))
					{
						Function_331(bLocal_332, (*&Local_4 + 344)[1], 0, 1, 1);
					}
				}
				if (IS_ACTOR_VALID(bLocal_333))
				{
					if (IS_GRINGO_VALID(bLocal_596[0]))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_333, GET_OBJECT_FROM_GRINGO(bLocal_596[0]), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(bLocal_333, bLocal_596[0], "UseCase1", true, 1);
						TASK_PRIORITY_SET(bLocal_333, true);
					}
					else
					{
						Function_331(bLocal_333, (*&Local_4 + 344)[2], 1, 1, 1);
					}
				}
				if (IS_ACTOR_VALID(bLocal_527))
				{
					if (IS_GRINGO_VALID(bLocal_596[1]))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_527, GET_OBJECT_FROM_GRINGO(bLocal_596[1]), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(bLocal_527, bLocal_596[1], "UseCase1", true, 1);
						TASK_PRIORITY_SET(bLocal_527, true);
					}
					else
					{
						Function_331(bLocal_527, (*&Local_4 + 344)[3], 1, 1, 1);
					}
				}
				if (IS_ACTOR_VALID(bLocal_523))
				{
					Function_331(bLocal_523, (*&Local_4 + 344)[4], 1, 1, 1);
					TASK_STAND_STILL(bLocal_523, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bLocal_523, true);
				}
				Function_221(12, 0, 1);
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_332, 1);
				MEMORY_PREFER_RIDING(bLocal_332, false);
				CLEAR_ACTOR_MAX_SPEED(bLocal_332);
				CLEAR_ACTOR_MAX_SPEED(bLocal_527);
				Function_217(&bLocal_544);
				iLocal_355 = 0;
				Function_396(&(Local_396[017]), bLocal_332, "Son", 1, 0x5f5e100, 1);
				SET_ACTORS_HORSE(bLocal_332, bLocal_527);
				SET_MOST_RECENT_MOUNT(bLocal_332, bLocal_527);
				Function_396(&(Local_396[117]), bLocal_523, "Dog", 0, 0x5f5e100, 1);
				Function_392(&(Local_396[117]), 1024);
				Function_396(&(Local_396[217]), bLocal_525, "Uncle", 0, 0x5f5e100, 1);
				Function_396(&(Local_396[317]), bLocal_524, "Wife", 0, 0x5f5e100, 1);
				Function_391(&(Local_396[417]));
				Function_391(&(Local_396[517]));
				Function_217(&vLocal_334);
				iLocal_329 = 4;
				Function_233(bLocal_328);
				Function_385(StackVal, StackVal, Function_233(bLocal_328), bLocal_328, Global_30637[0], Function_236(bLocal_328), 0);
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				GET_OBJECT_POSITION((*&Local_4 + 344)[2], &vLocal_584);
				SET_GAME_CAMERA_DRIFTZ(-2,5f);
				ENABLE_GAME_CAMERA_FOCUS(vLocal_584, -1.0f, 6, 1, 1, 0);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!iLocal_535)
			{
				TASK_STAND_STILL(bLocal_332, -1.0f, 0, 0);
				if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_332, "son_crouchGetup"))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_332, 0);
					SET_ANIM_SET_FOR_ACTOR(bLocal_332, "son_crouchGetup", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_332, "son_crouchGetup/getup");
				}
				iLocal_535 = 1;
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (IS_ACTOR_VALID(bLocal_333))
				{
					SET_ACTOR_HEALTH(bLocal_333, GET_ACTOR_MAX_HEALTH(bLocal_333));
				}
			}
			if (IS_ACTOR_VALID(bLocal_332))
			{
				if (iLocal_520 > 1)
				{
					Function_331(bLocal_332, (*&Local_4 + 344)[1], 0, 1, 1);
				}
			}
			if (IS_ACTOR_VALID(bLocal_523))
			{
				SET_ACTOR_HEALTH(bLocal_523, GET_ACTOR_MAX_HEALTH(bLocal_523));
				if (iLocal_520 > 1)
				{
					Function_331(bLocal_523, (*&Local_4 + 344)[4], 1, 1, 1);
				}
			}
			if (IS_ACTOR_VALID(bLocal_524))
			{
				SET_ACTOR_HEALTH(bLocal_524, 50.0f);
			}
			if (IS_ACTOR_VALID(bLocal_525))
			{
				SET_ACTOR_HEALTH(bLocal_525, 50.0f);
			}
			Function_217(&vLocal_334);
			iLocal_329 = 5;
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(bLocal_524))
			{
				TASK_CLEAR(bLocal_524);
			}
			TASK_OVERRIDE_SET_MOVETYPE(bLocal_332, true);
			if (IS_ACTOR_VALID(bLocal_525))
			{
				TASK_CLEAR(bLocal_525);
			}
			Function_217(&vLocal_334);
			iLocal_329 = 104;
			break;
		
		case 0x00000068:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_217(&vLocal_334);
			iLocal_329 = 103;
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				Function_217(&vLocal_334);
				iLocal_329 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_515())
			{
				Function_382(1);
			}
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(bLocal_333))
				{
					if (!IS_BLIP_VALID(bLocal_528))
					{
						bLocal_528 = ADD_BLIP_FOR_ACTOR(bLocal_333, 334, 0, 2, 0);
						if (IS_BLIP_VALID(bLocal_528))
						{
						}
					}
				}
				DECOR_REMOVE(bLocal_523, "Frank");
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_523);
				bLocal_514 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_523, bLocal_514);
				TASK_SEQUENCE_RELEASE(bLocal_514, 1);
				TASK_PRIORITY_SET(bLocal_523, true);
				Function_217(&vLocal_334);
				iLocal_329 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_515())
			{
				Function_382(1);
			}
			if (Function_266(&vLocal_334) <= 5.0f)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_332);
				Function_378("home02_son01_obj00", 7,5f, 1, 2, 0, 0, 0);
				Function_217(&vLocal_334);
				Function_217(&bLocal_337);
				Function_217(&bLocal_340);
				iLocal_329 = 8;
			}
			break;
		
		case 0x00000008:
			Function_410(&bLocal_340, 60.0f, 200.0f, bLocal_333, "Horse_return", "Horse_abandoned", &bLocal_353, 0, 0, 0, 325, 1);
			if (Function_515())
			{
				if (Function_382(1))
				{
					if (!IS_ACTOR_RIDING(Global_34573))
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_332, 15.0f))
						{
							if (Function_266(&bLocal_544) < 10.0f)
							{
								Function_355("Home02_s1_NoGetOnHors", 0);
								Function_217(&bLocal_544);
							}
						}
					}
					if (GET_TASK_STATUS(bLocal_332, 0) != 1)
					{
						AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_332, 2);
						AI_RIDING_SET_ATTRIBUTE(bLocal_332, 2, 0,15f);
						bLocal_514 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_COORD(false, &Local_4 + 728, 3.0f, 4);
						TASK_FOLLOW_OBJECT_AT_DISTANCE(false, Global_34573, 7.0f, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
						TASK_SEQUENCE_RELEASE(bLocal_514, 1);
						TASK_PRIORITY_SET(bLocal_332, true);
						FORCE_LOOK_AT_ACTOR(bLocal_332, Global_34573, 3212836864);
						Function_217(&bLocal_544);
					}
				}
			}
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (IS_ACTOR_RIDING(bLocal_332))
				{
					if (IS_BLIP_VALID(bLocal_528))
					{
						REMOVE_BLIP(bLocal_528);
					}
					STOP_FORCE_LOOK_AT_COORD(bLocal_332);
					TASK_CLEAR(bLocal_332);
					Function_238();
					Function_217(&vLocal_334);
					iLocal_329 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_OBJECT_VALID(bLocal_594))
			{
				if (IS_ACTOR_VALID(bLocal_523))
				{
					bLocal_594 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_219, "HOME02SON01_CAMERA_FOCUS", bLocal_523, 0.0f, 0.0f, 0.0f, 70.0f, 75.0f);
					if (IS_OBJECT_VALID(bLocal_594))
					{
						SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_594, 0);
					}
				}
			}
			if (!IS_BLIP_VALID(bLocal_528))
			{
				if (IS_ACTOR_VALID(bLocal_523))
				{
					bLocal_528 = ADD_BLIP_FOR_ACTOR(bLocal_523, 325, 0, 2, 0);
					SET_BLIP_NAME(bLocal_528, "BLIP_RUFUS");
					if (IS_BLIP_VALID(bLocal_528))
					{
					}
				}
			}
			bLocal_514 = TASK_SEQUENCE_OPEN();
			TASK_FACE_ACTOR(false, bLocal_523, 0, 3212836864);
			TASK_FOLLOW_OBJECT_ALONG_PATH(false, bLocal_523, Local_4.f_828, 8.0f, 1, 3.0f);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
			TASK_SEQUENCE_RELEASE(bLocal_514, 1);
			TASK_PRIORITY_SET(bLocal_332, true);
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_523);
			GET_OBJECT_POSITION(Local_4.f_676, &(vLocal_553[03]));
			bLocal_514 = TASK_SEQUENCE_OPEN();
			TASK_FACE_COORD(false, &(vLocal_553[03]), 0);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_828, 3, 0, 0, 1, false);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_523, bLocal_514);
			TASK_SEQUENCE_RELEASE(bLocal_514, 1);
			TASK_PRIORITY_SET(bLocal_523, true);
			Function_313(&uLocal_504, 11, 0, 4294967295, 4294967295);
			Function_373();
			Function_514();
			Function_217(&vLocal_334);
			iLocal_329 = 10;
			break;
		
		case 0x0000000A:
			if (Function_266(&vLocal_334) <= 5.0f)
			{
				DECOR_SET_BOOL(bLocal_523, "Frank", true);
				Function_378("home02_son01_obj01", 7,5f, 1, 2, 0, 0, 0);
				Function_217(&vLocal_334);
				Function_217(&bLocal_337);
				Function_217(&bLocal_340);
				iLocal_329 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_358(&bLocal_340, 100.0f, bLocal_333, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_353, 0, bLocal_219, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_528))
				{
					REMOVE_BLIP(bLocal_528);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(bLocal_528))
				{
					if (IS_ACTOR_VALID(bLocal_523))
					{
						bLocal_528 = ADD_BLIP_FOR_ACTOR(bLocal_523, 325, 0, 2, 0);
						SET_BLIP_NAME(bLocal_528, "BLIP_RUFUS");
						if (IS_BLIP_VALID(bLocal_528))
						{
						}
					}
				}
				Function_410(&bLocal_340, 60.0f, 200.0f, bLocal_523, "Dog_return", "Dog_abandoned", &bLocal_353, 0, 0, 0, 325, 1);
			}
			if (Function_382(1))
			{
				if (IS_VOLUME_VALID(Local_4.f_328))
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_332, Local_4.f_328))
					{
						HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(bLocal_527, 1);
						DESTROY_VOLUME(Local_4.f_328);
					}
				}
				if (GET_TASK_STATUS(bLocal_332, 0) != 1)
				{
					bLocal_514 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT_ALONG_PATH(false, bLocal_523, Local_4.f_828, 8.0f, 1, 3.0f);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
					TASK_SEQUENCE_RELEASE(bLocal_514, 1);
					TASK_PRIORITY_SET(bLocal_332, true);
				}
			}
			if (IS_ACTOR_VALID(bLocal_523) && IS_ACTOR_VALID(bLocal_332))
			{
				if (Function_502())
				{
					Function_463();
				}
			}
			if (!Function_468(bLocal_523, Global_34573, 60.0f) || !IS_ACTOR_RIDING(Global_34573))
			{
				if (!GET_TASK_STATUS(bLocal_523, 22) != 1)
				{
					TASK_FACE_ACTOR(bLocal_523, Global_34573, 1, 3212836864);
				}
			}
			else if (!GET_TASK_STATUS(bLocal_523, 0) != 1)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_523);
				bLocal_514 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_828, 3, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_523, bLocal_514);
				TASK_SEQUENCE_RELEASE(bLocal_514, 1);
				TASK_PRIORITY_SET(bLocal_523, true);
			}
			if (GET_TASK_STATUS(bLocal_523, 6) == 1)
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_523, 20.0f))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_454("Home02_s1_ShoutsEncAtDog", 0);
					}
					Function_238();
					Function_217(&vLocal_334);
					iLocal_329 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			TASK_CLEAR(bLocal_332);
			TASK_CLEAR(bLocal_523);
			Function_313(&uLocal_504, 12, 0, 4294967295, 4294967295);
			Function_217(&vLocal_334);
			iLocal_329 = 13;
			break;
		
		case 0x0000000D:
			if (Function_358(&bLocal_340, 100.0f, bLocal_333, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_353, 0, bLocal_219, 0, 334))
			{
				if (IS_BLIP_VALID(bLocal_528))
				{
					REMOVE_BLIP(bLocal_528);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(bLocal_528))
				{
					if (IS_ACTOR_VALID(bLocal_523))
					{
						bLocal_528 = ADD_BLIP_FOR_ACTOR(bLocal_523, 325, 0, 2, 0);
						SET_BLIP_NAME(bLocal_528, "BLIP_RUFUS");
						if (IS_BLIP_VALID(bLocal_528))
						{
						}
					}
				}
				Function_410(&bLocal_340, 60.0f, 200.0f, bLocal_523, "Dog_return", "Dog_abandoned", &bLocal_353, 0, 0, 0, 325, 1);
			}
			if (Function_382(1))
			{
				if (!DECOR_CHECK_EXIST(bLocal_219, "CompEmerTele"))
				{
					ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332, bLocal_523, 40.0f, 15.0f, 25.0f);
					DECOR_SET_BOOL(bLocal_219, "CompEmerTele", true);
				}
				if (GET_TASK_STATUS(bLocal_332, 0) != 1)
				{
					HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(bLocal_527, 0);
					vLocal_566 = { 5.0f, 0.0f, 8.0f };
					bLocal_514 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT(false, bLocal_523, &vLocal_566, 0, 0, 0, 0, 0, 0, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_332, bLocal_514);
					TASK_SEQUENCE_RELEASE(bLocal_514, 1);
					TASK_PRIORITY_SET(bLocal_332, true);
				}
			}
			else if (DECOR_CHECK_EXIST(bLocal_219, "CompEmerTele"))
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332);
				DECOR_REMOVE(bLocal_219, "CompEmerTele");
			}
			if (IS_ACTOR_VALID(bLocal_523) && IS_ACTOR_VALID(bLocal_332))
			{
				if (Function_502())
				{
					Function_463();
				}
			}
			if (IS_VOLUME_VALID(Local_4.f_320))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_523, Local_4.f_320))
				{
					Function_217(&iLocal_547);
					DESTROY_VOLUME(Local_4.f_320);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_523, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(Local_4.f_324))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_523, Local_4.f_324))
				{
					Function_217(&iLocal_547);
					DESTROY_VOLUME(Local_4.f_324);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_523, 8, "SNIFF");
				}
			}
			if (Function_268(&iLocal_547))
			{
				if (Function_266(&iLocal_547) < 5.0f)
				{
					Function_354(&iLocal_547);
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(bLocal_523);
				}
			}
			if (!Function_468(bLocal_523, Global_34573, 60.0f) || !IS_ACTOR_RIDING(Global_34573))
			{
				if (!GET_TASK_STATUS(bLocal_523, 22) != 1)
				{
					TASK_FACE_ACTOR(bLocal_523, Global_34573, 1, 3212836864);
				}
			}
			else if (!GET_TASK_STATUS(bLocal_523, 0) != 1)
			{
				bLocal_514 = TASK_SEQUENCE_OPEN();
				if (IS_VOLUME_VALID(Local_4.f_320))
				{
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 756)[0], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(Local_4.f_324))
				{
					TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 780)[0], 3.0f, 3, 1, 1);
				}
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_523, bLocal_514);
				TASK_SEQUENCE_RELEASE(bLocal_514, 1);
			}
			if (GET_TASK_STATUS(bLocal_523, 6) == 1)
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_523, 20.0f))
				{
					TASK_GO_NEAR_OBJECT(bLocal_523, Local_4.f_624, 5.0f, 4, 1, 1);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_523, 8, "SNIFF");
					Function_238();
					Function_217(&vLocal_334);
					if (DECOR_CHECK_EXIST(bLocal_219, "CompEmerTele"))
					{
						DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_332);
						DECOR_REMOVE(bLocal_219, "CompEmerTele");
					}
					iLocal_329 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_343[0] = 1;
			Function_217(&vLocal_334);
			bLocal_328 = true;
			iLocal_329 = 0;
			break;
	}
	return;
}

void Function_514() //Position: 0x1F268 / 127592
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Home02_s1_GoHunt", "Home02_s1_GoHunt", true, 1, 1, 0, 1);
		Function_350(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_515() //Position: 0x1F2B1 / 127665
{
	if (GET_TASK_STATUS(bLocal_332, 6) == 1)
	{
		if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_332, "son_crouchgetup"))
		{
			return 0;
		}
		return 1;
	}
	return 1;
	return 0;
}

bool Function_516() //Position: 0x1F2EA / 127722
{
	if (!SQUAD_IS_VALID(Local_4.f_104))
	{
		Function_330();
		if (SQUAD_IS_VALID(Local_4.f_104))
		{
			Function_329(Local_4.f_104, 0);
			Function_328(Local_4.f_104, 3);
			Function_327(Local_4.f_104, 0, 0, 0);
			bLocal_527 = (*&Local_4 + 92)[02];
			if (IS_ACTOR_VALID(bLocal_527))
			{
				Function_331(bLocal_527, (*&Local_4 + 344)[3], 1, 1, 1);
				SET_ACTORS_HORSE(bLocal_332, bLocal_527);
				SET_MOST_RECENT_MOUNT(bLocal_332, bLocal_527);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_104, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(bLocal_523))
	{
		Function_331(bLocal_523, (*&Local_4 + 344)[4], 1, 1, 1);
		if (IS_ACTOR_VALID(bLocal_523))
		{
			SET_ACTOR_FACTION(bLocal_523, 20);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_523, false);
			SET_CRIPPLE_ENABLE(bLocal_523, 0);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_523, 0.0f);
			SET_ACTOR_INVULNERABILITY(bLocal_523, true);
			Function_297(bLocal_523, 0, 0, 0, 1, 0, 1);
			DECOR_SET_BOOL(bLocal_523, "Frank", false);
			TASK_STAND_STILL(bLocal_523, -1.0f, 0, 0);
			TASK_PRIORITY_SET(bLocal_523, true);
		}
	}
	if (IS_ACTOR_VALID(bLocal_523) && SQUAD_IS_VALID(Local_4.f_104))
	{
		GET_OBJECT_POSITION((*&Local_4 + 344)[7], &vLocal_584);
		GET_OBJECT_ORIENTATION((*&Local_4 + 344)[7], &Local_587);
		CREATE_PROP_IN_LAYOUT(bLocal_219, "bookReading01x", "p_gen_bookReading01x", vLocal_584, Local_587, 1);
		return 1;
	}
	return 0;
}

void Function_517() //Position: 0x1F455 / 128085
{
	switch (iLocal_522)
	{
		case 0x00000000:
			iLocal_522++;
			break;
		
		case 0x00000001:
			if (!IS_GRINGO_VALID(bLocal_596[0]))
			{
				bLocal_596[0] = LOCATE_GRINGO_OF_TYPE("horsehitch", &Local_4 + 680, 1.0f, 0);
			}
			if (IS_GRINGO_VALID(bLocal_596[0]))
			{
				iLocal_522++;
			}
			break;
		
		case 0x00000002:
			if (!IS_GRINGO_VALID(bLocal_596[1]))
			{
				bLocal_596[1] = LOCATE_GRINGO_OF_TYPE("horsehitch", &Local_4 + 704, 1.0f, 0);
			}
			if (IS_GRINGO_VALID(bLocal_596[1]))
			{
				iLocal_522++;
			}
			break;
		
		case 0x00000003:
			Function_234(GET_OBJECT_FROM_GRINGO(bLocal_596[0]));
			Function_518(StackVal, StackVal, Function_234(GET_OBJECT_FROM_GRINGO(bLocal_596[0])), 0, 0);
			Function_234(GET_OBJECT_FROM_GRINGO(bLocal_596[1]));
			Function_518(StackVal, StackVal, Function_234(GET_OBJECT_FROM_GRINGO(bLocal_596[1])), 0, 0);
			iLocal_522++;
			break;
		
		case 0x00000004:
			if (bLocal_328 == 0)
			{
				if (IS_ACTOR_VALID(bLocal_333))
				{
					if (IS_GRINGO_VALID(bLocal_596[0]))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_333, GET_OBJECT_FROM_GRINGO(bLocal_596[0]), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(bLocal_333, bLocal_596[0], "UseCase1", true, 1);
						TASK_PRIORITY_SET(bLocal_333, true);
					}
				}
				if (IS_ACTOR_VALID(bLocal_527))
				{
					if (IS_GRINGO_VALID(bLocal_596[1]))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_527, GET_OBJECT_FROM_GRINGO(bLocal_596[1]), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(bLocal_527, bLocal_596[1], "UseCase1", true, 1);
						TASK_PRIORITY_SET(bLocal_527, true);
					}
				}
			}
			else if (bLocal_328 == 101)
			{
				if (IS_ACTOR_VALID(bLocal_333))
				{
					if (IS_GRINGO_VALID(bLocal_596[0]))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_333, GET_OBJECT_FROM_GRINGO(bLocal_596[0]), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(bLocal_333, bLocal_596[0], "UseCase1", true, 1);
						TASK_PRIORITY_SET(bLocal_333, true);
					}
				}
				if (IS_ACTOR_VALID(bLocal_527))
				{
					if (IS_GRINGO_VALID(bLocal_596[1]))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_527, GET_OBJECT_FROM_GRINGO(bLocal_596[1]), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(bLocal_527, bLocal_596[1], "UseCase1", true, 1);
						TASK_PRIORITY_SET(bLocal_527, true);
					}
				}
			}
			iLocal_522++;
			break;
		
		case 0x00000005:
			iLocal_522++;
			break;
	}
	return;
}

int Function_518(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x1F6B7 / 128695
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_520(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
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
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_519(uVar0[0], "UseCase1"));
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
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_519(uVar0[1], "UseCase1"));
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

var Function_519(bool bParam0, bool bParam1) //Position: 0x1F818 / 129048
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_520(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1F825 / 129061
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

void Function_521() //Position: 0x1F8CF / 129231
{
	switch (iLocal_329)
	{
		case 0x00000006:
			Function_532(&Local_220, 1);
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_03", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_219 = CREATE_LAYOUT("home02_son01_DynamicLayout");
			Function_531();
			iLocal_329 = 7;
			break;
		
		case 0x00000007:
			if (Function_529())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
				}
				iLocal_329 = 8;
			}
			break;
		
		case 0x00000008:
			Function_331(Global_34573, (*&Local_4 + 344)[0], 1, 1, 1);
			if (IS_ACTOR_VALID(bLocal_332))
			{
				TASK_CLEAR(bLocal_332);
				TASK_STAND_STILL(bLocal_332, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_332, true);
				Function_331(bLocal_332, (*&Local_4 + 344)[1], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_333))
			{
				TASK_CLEAR(bLocal_333);
				TASK_STAND_STILL(bLocal_333, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_333, true);
				Function_331(bLocal_333, (*&Local_4 + 344)[2], 1, 1, 1);
			}
			iLocal_329 = 9;
			break;
		
		case 0x00000009:
			if (Function_269("$/cutscene/son_01/son_01", &iLocal_321, &Local_220, &bLocal_328, 70596, 70424, 68300, 68018, 67688, 52206, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_329 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_331 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 168)[2]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 168)[2]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 168)[2], 15);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_221(12, 1, 1);
			SET_CRIPPLE_ENABLE(bLocal_332, 0);
			SET_ACTOR_FACTION(bLocal_332, 20);
			TASK_PRIORITY_SET(bLocal_332, true);
			AI_BEHAVIOR_SET_ALLOW(bLocal_332, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_332, 50.0f);
			SET_ACTOR_HEALTH(bLocal_332, GET_ACTOR_MAX_HEALTH(bLocal_332));
			if (!iLocal_537)
			{
				ACTOR_ENABLE_VARIABLE_MESH(bLocal_332, 23, true);
				ACTOR_FORCE_WEAPON_RENDER(bLocal_332, 0, 1);
				if (!ACTOR_HAS_WEAPON(bLocal_332, 22))
				{
					GIVE_WEAPON_TO_ACTOR(bLocal_332, 22, false, 1, 1);
				}
				if (!ACTOR_HAS_WEAPON(bLocal_332, 42))
				{
					GIVE_WEAPON_TO_ACTOR(bLocal_332, 42, false, 1, 1);
				}
				if (ACTOR_HAS_WEAPON(bLocal_332, 42))
				{
					if (!ACTOR_HAS_WEAPON_SET_AS_NEXT(bLocal_332, 42))
					{
						ACTOR_SET_NEXT_WEAPON(bLocal_332, 42);
					}
				}
				MAKE_ACTOR_READY_FOR_ACTION(bLocal_332, 1);
				iLocal_537 = 1;
			}
			RESET_ACTOR_GAITS(bLocal_333, 0);
			TASK_PRIORITY_SET(bLocal_333, true);
			TASK_STAND_STILL(bLocal_333, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_333, 50.0f);
			SET_ACTOR_HEALTH(bLocal_333, GET_ACTOR_MAX_HEALTH(bLocal_333));
			SET_ALLOW_RIDE_BY_AI(bLocal_333, 0);
			Function_528(&bLocal_544);
			Function_528(&iLocal_547);
			Function_528(&bLocal_550);
			Function_526(&uLocal_356, bLocal_219);
			Function_528(&vLocal_334);
			Function_528(&bLocal_337);
			Function_528(&bLocal_340);
			bLocal_328 = false;
			iLocal_329 = 0;
			Function_523(&Local_220, &bLocal_328, &iLocal_329);
			Function_522(StackVal, StackVal, StackVal, StackVal, StackVal, Function_283(), Local_220);
			switch (bLocal_328)
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

void Function_522(struct<25> Param0) //Position: 0x1FBF8 / 130040
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			bLocal_328 = false;
			break;
		
		case 0x00000002:
			bLocal_328 = true;
			break;
		
		case 0x00000003:
			bLocal_328 = 2;
			break;
		
		case 0x00000004:
			bLocal_328 = 3;
			break;
		
		case 0x00000005:
			bLocal_328 = 4;
			break;
		
		case 0x00000006:
			bLocal_328 = 5;
			break;
		
		case 0x00000007:
			bLocal_328 = 6;
			break;
		
		case 0x00000008:
			bLocal_328 = 7;
			break;
		
		case 0x00000009:
			bLocal_328 = 8;
			break;
		
		case 0x0000000A:
			bLocal_328 = 101;
			break;
	}
}

void Function_523(int iParam0, var uParam1, int iParam2) //Position: 0x1FC8D / 130189
{
	if (Function_278(iParam0))
	{
		*uParam1 = Function_525(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_524();
	}
	return;
}

void Function_524() //Position: 0x1FCC1 / 130241
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

var Function_525(int iParam0) //Position: 0x1FD12 / 130322
{
	if (Function_278(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

int Function_526(var uParam0, bool bParam1) //Position: 0x1FD2A / 130346
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_527(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_527(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_527(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_527(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_527(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_527(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_527(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_527(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_527(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_527(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_527(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_527(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_527(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_527(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x203D7 / 132055
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

void Function_528(int iParam0) //Position: 0x2049A / 132250
{
	if (!Function_268(iParam0))
	{
		Function_218(iParam0, 0.0f);
	}
	return;
}

bool Function_529() //Position: 0x204AF / 132271
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_530(0))
		{
			return 0;
		}
		if (!Function_315())
		{
			return 0;
		}
		if (!Function_303(&bLocal_252))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_332))
		{
			bLocal_332 = Function_287(12, 0, 1, -58,721f, 116,457f, 1388,914f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_332, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_524))
		{
			bLocal_524 = Function_287(11, 0, 1, -96.0f, 118,869f, 1368.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_524, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_525))
		{
			bLocal_525 = Function_287(13, 0, 1, -64.0f, 117,74f, 1360.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_525, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_523))
		{
			bLocal_523 = Function_287(14, 0, 1, -64.0f, 117,74f, 1360.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_523, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_333))
		{
			bLocal_333 = Function_296(1, 1, -77,288f, 116,861f, 1418,517f, -459,472f, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_333, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_530(bool bParam0) //Position: 0x205F5 / 132597
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

void Function_531() //Position: 0x20623 / 132643
{
	Function_316(&bLocal_252, "custom/son_crouchGetup", 8, 0);
	Function_316(&bLocal_252, "son_crouchGetup", 5, 0);
	Function_316(&bLocal_252, "custom/rand_idle_sit_ground", 8, 0);
	Function_316(&bLocal_252, "rand_idle_sit_ground", 5, 0);
	Function_316(&bLocal_252, "home02son01", 10, 0);
	Function_316(&bLocal_252, "p_gen_bookReading01x", 0, 0);
	Function_316(&bLocal_252, "custom/dog_sit", 8, 0);
	Function_316(&bLocal_252, "skinning", 5, 0);
	Function_316(&bLocal_252, "$/fragments/p_gen_carcassElk01x", 0, 0);
	Function_316(&bLocal_252, "custom/skinning", 8, 0);
	Function_316(&bLocal_252, "BeechersHope", 12, 0);
	Function_316(&bLocal_252, "ManzanitaPost", 12, 0);
	return;
}

void Function_532(int iParam0, bool bParam1) //Position: 0x20784 / 132996
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_538(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_278(iParam0))
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
	if (!Function_278(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_211();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_238();
	Function_272();
	Function_227("");
	Function_537(0);
	Function_536();
	Function_205();
	Function_204();
	ENABLE_JOURNAL_REPLAY(0);
	Function_535();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_343(0, 0x40400000);
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
	Function_534(13);
	Function_534(14);
	Function_534(25);
	Function_534(24);
	Function_534(12);
	Function_534(27);
	Function_534(26);
	Function_534(15);
	Function_533();
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

void Function_533() //Position: 0x20BA8 / 134056
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

void Function_534(int iParam0) //Position: 0x20C1C / 134172
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_535() //Position: 0x20C3C / 134204
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

void Function_536() //Position: 0x20C79 / 134265
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_537(int iParam0) //Position: 0x20C8D / 134285
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_208())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_538(int iParam0, int iParam1) //Position: 0x20CC2 / 134338
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

void Function_539(int iParam0) //Position: 0x20D44 / 134468
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

void Function_540() //Position: 0x20D92 / 134546
{
	return;
}

void Function_541(var uParam0, bool bParam1) //Position: 0x20D98 / 134552
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
					Function_383(*uParam0, 0);
				}
			}
			else
			{
				*uParam0 = bVar0;
				Function_383(*uParam0, 0);
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
						Function_383(*uParam0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(*uParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(*uParam0));
					}
					*uParam0 = bVar0;
					Function_383(*uParam0, 0);
				}
			}
		}
	}
	return;
}

bool Function_542(int iParam0) //Position: 0x20E5D / 134749
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_543(int iParam0) //Position: 0x20E7B / 134779
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
			Function_544(iParam0, 1);
			return 1;
		}
	}
	Function_544(iParam0, 0);
	return 0;
}

void Function_544(int iParam0, bool bParam1) //Position: 0x20F02 / 134914
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

bool Function_545(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x20F26 / 134950
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
		Function_544(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_564(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_563(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_563(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_549(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_544(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_548(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_547(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_548(&bVar17);
														strcpy(&Var18, "", 64);
														Function_546(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_227(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_547(StackVal, iParam2, bVar17);
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
	Function_544(iParam2, 0);
	return 0;
}

void Function_546(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x212BF / 135871
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

void Function_547(var uParam0, int iParam1, bool bParam2) //Position: 0x213AA / 136106
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

void Function_548(bool bParam0) //Position: 0x21420 / 136224
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_549(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x21442 / 136258
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
			return Function_560(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_553(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_560(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_550(iParam0, bVar2);
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
						bVar2 = Function_560(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_550(iParam0, bVar2);
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

var Function_550(int iParam0, bool bParam1) //Position: 0x2158C / 136588
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
				bParam1 = Function_552(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_551(16);
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
				bParam1 = Function_552(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_551(256);
			}
		}
	}
	return bParam1;
}

bool Function_551(int iParam0) //Position: 0x216BF / 136895
{
	return 2 | iParam0;
}

int Function_552(int iParam0) //Position: 0x216C9 / 136905
{
	return 4 | iParam0;
}

int Function_553(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x216D3 / 136915
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
				iParam3 = Function_559(iParam0, iParam1, bParam4);
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
			return Function_551(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_554(iParam0, iParam1, 0, bParam4);
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
			return Function_551(16);
		}
	}
	return 0;
}

int Function_554(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x21785 / 137093
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_558(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_557(iVar0, 3, 1, bParam3))
			{
				if (!Function_563(iParam0, 8, 1))
				{
					return Function_556(64, 1024, bParam2);
				}
			}
			return Function_555(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_557(iVar0, 2, 1, bParam3))
			{
				if (!Function_563(iParam0, 32, 1))
				{
					return Function_556(64, 1024, bParam2);
				}
			}
			return Function_555(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_557(iVar0, 1, 1, bParam3))
			{
				if (!Function_563(iParam0, 64, 1))
				{
					return Function_556(64, 1024, bParam2);
				}
			}
			return Function_555(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_557(iVar0, 3, 1, bParam3))
			{
				if (!Function_563(iParam0, 128, 1))
				{
					return Function_556(64, 1024, bParam2);
				}
			}
			return Function_555(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_557(iVar0, 1, 1, bParam3))
			{
				if (!Function_563(iParam0, 1024, 1))
				{
					return Function_556(64, 1024, bParam2);
				}
			}
			return Function_555(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_557(iVar0, 1, 1, bParam3))
			{
				if (!Function_563(iParam0, 1024, 1))
				{
					return Function_556(64, 1024, bParam2);
				}
			}
			return Function_555(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_555(int iParam0, int iParam1, bool bParam2) //Position: 0x2193F / 137535
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_556(int iParam0, int iParam1, bool bParam2) //Position: 0x21954 / 137556
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_557(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x21969 / 137577
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_558(int iParam0) //Position: 0x21986 / 137606
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

int Function_559(var uParam0, int iParam1, bool bParam2) //Position: 0x219F5 / 137717
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_558(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_557(iVar0, 3, 1, bParam2))
			{
				if (!Function_563(uParam0, 8, 1))
				{
					return Function_552(64);
				}
			}
			return Function_551(64);
			break;
		
		case 0x00000009:
			if (Function_557(iVar0, 3, 1, bParam2))
			{
				if (!Function_563(uParam0, 8, 1))
				{
					return Function_552(64);
				}
			}
			return Function_551(64);
			break;
		
		case 0x0000006E:
			if (Function_557(iVar0, 2, 1, bParam2))
			{
				if (!Function_563(uParam0, 16, 1))
				{
					return Function_552(64);
				}
			}
			return Function_551(64);
			break;
		
		case 0x0000005B:
			if (Function_557(iVar0, 2, 1, bParam2))
			{
				if (!Function_563(uParam0, 32, 1))
				{
					return Function_552(64);
				}
			}
			return Function_551(64);
			break;
		
		case 0x00000031:
			if (Function_557(iVar0, 1, 1, bParam2))
			{
				if (!Function_563(uParam0, 64, 1))
				{
					return Function_552(64);
				}
			}
			return Function_551(64);
			break;
		
		case 0x00000007:
			if (Function_557(iVar0, 3, 1, bParam2))
			{
				if (!Function_563(uParam0, 128, 1))
				{
					return Function_552(64);
				}
			}
			return Function_551(64);
			break;
		
		case 0x00000008:
			if (Function_557(iVar0, 2, 1, bParam2))
			{
				if (!Function_563(uParam0, 256, 1))
				{
					return Function_552(64);
				}
			}
			return Function_551(64);
			break;
		
		case 0x00000014:
			if (Function_557(iVar0, 1, 1, bParam2))
			{
				if (!Function_563(uParam0, 512, 1))
				{
					return Function_552(64);
				}
			}
			return Function_551(64);
			break;
		
		case 0x00000018:
			if (Function_557(iVar0, 1, 1, bParam2))
			{
				if (!Function_563(uParam0, 512, 1))
				{
					return Function_552(64);
				}
			}
			return Function_551(64);
			break;
		
		case 0x00000057:
			if (Function_557(iVar0, 1, 1, bParam2))
			{
				if (!Function_563(uParam0, 1024, 1))
				{
					return Function_552(64);
				}
			}
			return Function_551(64);
			break;
		
		case 0x00000058:
			if (Function_557(iVar0, 1, 1, bParam2))
			{
				if (!Function_563(uParam0, 1024, 1))
				{
					return Function_552(64);
				}
			}
			return Function_551(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_560(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x21C10 / 138256
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
						return Function_559(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_563(iParam0, 2, 1))
					{
						return Function_552(8);
					}
					return Function_551(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_563(iParam0, 4, 1))
					{
						return Function_552(16);
					}
					return Function_551(16);
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
							return Function_554(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_563(iParam0, 2, 1))
						{
							return Function_552(128);
						}
						return Function_551(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_563(iParam0, 4, 1))
						{
							return Function_552(256);
						}
						return Function_551(256);
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
						return Function_554(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_563(iParam0, 2, 1))
					{
						return Function_552(8);
					}
					return Function_551(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_563(iParam0, 4, 1))
					{
						return Function_552(16);
					}
					return Function_551(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_562(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_563(iParam0, 2, 1))
					{
						return Function_552(8);
					}
					return Function_551(8);
				}
				if (!Function_563(iParam0, 4, 1))
				{
					return Function_552(16);
				}
				return Function_551(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_554(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_561(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_551(128);
							}
							if (!Function_563(iParam0, 2, 1))
							{
								return Function_552(8);
							}
							return Function_551(8);
						}
						if (iParam4 == 2)
						{
							if (Function_561(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_551(256);
							}
							if (!Function_563(iParam0, 4, 1))
							{
								return Function_552(16);
							}
							return Function_551(16);
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

bool Function_561(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x21ECF / 138959
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

int Function_562(int iParam0, var uParam1, bool bParam2) //Position: 0x21F88 / 139144
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_558(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_557(iVar0, 2, 1, bParam2))
			{
				if (!Function_563(iParam0, 16, 1))
				{
					return Function_552(64);
				}
			}
			return Function_551(64);
			break;
		
		case 0x0000005B:
			if (Function_557(iVar0, 2, 1, bParam2))
			{
				if (!Function_563(iParam0, 32, 1))
				{
					return Function_552(64);
				}
			}
			return Function_551(64);
			break;
		
		case 0x00000057:
			if (Function_557(iVar0, 1, 1, bParam2))
			{
				if (!Function_563(iParam0, 1024, 1))
				{
					return Function_552(64);
				}
			}
			return Function_551(64);
			break;
		
		case 0x00000058:
			if (Function_557(iVar0, 1, 1, bParam2))
			{
				if (!Function_563(iParam0, 1024, 1))
				{
					return Function_552(64);
				}
			}
			return Function_551(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_563(int iParam0, bool bParam1, bool bParam2) //Position: 0x2209C / 139420
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

int Function_564(int iParam0) //Position: 0x220C4 / 139460
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

void Function_565(bool bParam0) //Position: 0x220F5 / 139509
{
	if (!GET_TIME_ACCELERATION() != 0.0f)
	{
		if ((Global_63399 && bParam0) >= 0)
		{
			SET_TIME_ACCELERATION(0.0f);
		}
	}
	else if ((Global_63399 && bParam0) == 0)
	{
		SET_TIME_ACCELERATION(Global_63398);
	}
	return;
}

void Function_566(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x22125 / 139557
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

