//Decompiled with MagicRDR v1.0
//Function Count : 637
//Statics Count : 1007
//Natives Count : 791
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1917> Local_4 = { 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_484 = 0;
	iLocal_623 = 0;
	iLocal_987 = 0;
	iLocal_988 = 0;
	iLocal_989 = 0;
	iLocal_990 = 0;
	iLocal_991 = 0;
	iLocal_992 = 0;
	iLocal_993 = 0;
	iLocal_994 = 0;
	iLocal_995 = 0;
	iLocal_996 = 0;
	iLocal_997 = 0;
	Local_486 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_532 = 99;
	iLocal_533 = 0;
	Local_525 = 1000;
	while (Function_263())
	{
		Function_218();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x74 / 116
{
	if (IS_ACTOR_VALID(bLocal_574))
	{
		CLEAR_LINKED_ANIM_TARGET(bLocal_574);
		RESET_ANIM_SET_FOR_ACTOR(bLocal_574, 1);
	}
	STREAMING_UNLOAD_BOUNDS();
	RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	if (DECOR_CHECK_EXIST(Global_34573, "herding"))
	{
		DECOR_REMOVE(Global_34573, "herding");
	}
	DECOR_REMOVE(Global_34573, "Ranch06DisablePrint");
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	Function_217(bLocal_575);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_574);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_575);
	if (!bLocal_597)
	{
		Function_215(3, 1, 0, 1, 1);
	}
	else
	{
		Function_215(3, 1, 0, 1, 1);
	}
	if (IS_ACTOR_VALID(bLocal_638))
	{
		DESTROY_ACTOR(bLocal_638);
		DESTROY_ACTOR(bLocal_639);
	}
	Function_214();
	Function_213();
	Function_212();
	Function_211();
	Function_210();
	Function_209();
	Function_208();
	Function_207();
	Function_202();
	Function_201(bLocal_485);
	Function_201(Local_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_200();
	Function_173(bLocal_598, 1, 0, 1, 1, 1, 1, 1);
	Function_169(&bLocal_493);
	Function_168();
	if (IS_ITERATOR_VALID(bLocal_573))
	{
		DESTROY_ITERATOR(bLocal_573);
	}
	RELEASE_LAYOUT_REF(bLocal_485);
	if (bLocal_597)
	{
		Function_24(Local_486, 1, 1, 1, 0);
	}
	else if (bLocal_598)
	{
		Function_20(Local_486);
	}
	else
	{
		Function_2(Local_486);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x1B0 / 432
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x1D1 / 465
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x1EC / 492
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x20D / 525
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x223 / 547
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

void Function_7(int iParam0) //Position: 0x2BF / 703
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x2E0 / 736
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

void Function_9() //Position: 0x326 / 806
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x33F / 831
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x392 / 914
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

struct<16> Function_12(int iParam0) //Position: 0x4B6 / 1206
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x4DB / 1243
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x4FB / 1275
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x512 / 1298
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x52D / 1325
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

void Function_17(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x774 / 1908
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x79D / 1949
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

bool Function_19(int iParam0) //Position: 0x7C1 / 1985
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x7D6 / 2006
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x7F4 / 2036
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

struct<16> Function_22(int iParam0) //Position: 0x89A / 2202
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x8C4 / 2244
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xB1A / 2842
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

void Function_25() //Position: 0xC07 / 3079
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

int Function_26(int iParam0, bool bParam1) //Position: 0xC37 / 3127
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

int Function_27(int iParam0) //Position: 0xC74 / 3188
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xC8E / 3214
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xCA4 / 3236
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF9B / 3995
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

void Function_31(char* cParam0, int iParam1) //Position: 0x1007 / 4103
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x103E / 4158
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

bool Function_33(var uParam0, int iParam1) //Position: 0x10B6 / 4278
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x10C9 / 4297
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

int Function_35(int iParam0) //Position: 0x116A / 4458
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x11A7 / 4519
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11BA / 4538
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

void Function_38(int iParam0, int iParam1) //Position: 0x13CC / 5068
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x1406 / 5126
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

bool Function_40() //Position: 0x1448 / 5192
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x1451 / 5201
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

void Function_42() //Position: 0x14A2 / 5282
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

void Function_43() //Position: 0x14D5 / 5333
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

void Function_44() //Position: 0x15DB / 5595
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

void Function_45() //Position: 0x160E / 5646
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

void Function_46() //Position: 0x179C / 6044
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

void Function_47() //Position: 0x1950 / 6480
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x195E / 6494
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

var Function_49() //Position: 0x1B4F / 6991
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1B64 / 7012
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1BFF / 7167
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1E9A / 7834
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

bool Function_53() //Position: 0x24C7 / 9415
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x24CF / 9423
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x24E0 / 9440
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x25D5 / 9685
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x25EE / 9710
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x2653 / 9811
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x2665 / 9829
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2677 / 9847
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

int Function_61(int iParam0) //Position: 0x27A7 / 10151
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x27B6 / 10166
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x27EF / 10223
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x282C / 10284
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x29C6 / 10694
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

int Function_66(bool bParam0) //Position: 0x2BE0 / 11232
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2C21 / 11297
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

struct<8> Function_68() //Position: 0x2CAA / 11434
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

struct<8> Function_69() //Position: 0x2D41 / 11585
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

void Function_70() //Position: 0x2DC0 / 11712
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2DE6 / 11750
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

void Function_72() //Position: 0x2FF0 / 12272
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

bool Function_73(vector3 vParam0) //Position: 0x3091 / 12433
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x30A9 / 12457
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

vector3 Function_75() //Position: 0x3190 / 12688
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x3199 / 12697
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x31A8 / 12712
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x31BE / 12734
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x3285 / 12933
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x32A2 / 12962
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

bool Function_81(int iParam0) //Position: 0x377E / 14206
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x3794 / 14228
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x37B3 / 14259
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x37CD / 14285
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3834 / 14388
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

void Function_86() //Position: 0x3A54 / 14932
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3AD4 / 15060
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3E26 / 15910
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

int Function_89(int iParam0) //Position: 0x3EA9 / 16041
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3EC3 / 16067
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3EF1 / 16113
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x4190 / 16784
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

void Function_93(int iParam0, int iParam1) //Position: 0x4353 / 17235
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x45B1 / 17841
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

int Function_95() //Position: 0x4736 / 18230
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

void Function_96() //Position: 0x47D5 / 18389
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

void Function_97(int iParam0) //Position: 0x4884 / 18564
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

var Function_98(int iParam0) //Position: 0x48E2 / 18658
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

int Function_99(int iParam0, bool bParam1) //Position: 0x4971 / 18801
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

var Function_100(int iParam0, int iParam1) //Position: 0x4B0E / 19214
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

void Function_101() //Position: 0x4B4F / 19279
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4B65 / 19301
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4BA5 / 19365
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4BE5 / 19429
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4BF4 / 19444
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

int Function_106(int iParam0) //Position: 0x4DBC / 19900
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

var Function_107() //Position: 0x4E51 / 20049
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4E76 / 20086
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x5331 / 21297
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

var Function_110(int iParam0) //Position: 0x5646 / 22086
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x56E9 / 22249
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

int Function_112(int iParam0, bool bParam1) //Position: 0x58E4 / 22756
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5A80 / 23168
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5B4B / 23371
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

void Function_115(int iParam0) //Position: 0x643B / 25659
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x65AA / 26026
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x66B0 / 26288
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(bool bParam0) //Position: 0x66DD / 26333
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

var Function_119(vector3 vParam0) //Position: 0x6734 / 26420
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x6782 / 26498
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x67D6 / 26582
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
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
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

void Function_122() //Position: 0x6974 / 26996
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x697A / 27002
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

void Function_124(bool bParam0, int iParam1) //Position: 0x6A1E / 27166
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x6A73 / 27251
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6A89 / 27273
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6ADA / 27354
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

void Function_128(var uParam0, int iParam1) //Position: 0x6B07 / 27399
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6B16 / 27414
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6B2D / 27437
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6B3C / 27452
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
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, 0, 0, 2, 0, 0, 0);
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

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6C86 / 27782
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

bool Function_133() //Position: 0x6CD1 / 27857
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6CFE / 27902
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

int Function_135(int iParam0) //Position: 0x6EAE / 28334
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6F05 / 28421
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

var Function_137(int iParam0) //Position: 0x6F2A / 28458
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x6F80 / 28544
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

bool Function_139(bool bParam0) //Position: 0x6FDF / 28639
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x6FEB / 28651
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x7007 / 28679
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

int Function_142(int iParam0, int iParam1) //Position: 0x7059 / 28761
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

int Function_143(int iParam0, int iParam1) //Position: 0x70CC / 28876
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x7128 / 28968
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

int Function_145(int iParam0, int iParam1) //Position: 0x7199 / 29081
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x71F3 / 29171
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x749F / 29855
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
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
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

void Function_148(int iParam0, bool bParam1) //Position: 0x772E / 30510
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

void Function_149() //Position: 0x778D / 30605
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

var Function_150(int iParam0, int iParam1) //Position: 0x7808 / 30728
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

int Function_151(int iParam0) //Position: 0x83FB / 33787
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x8410 / 33808
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x845F / 33887
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x846C / 33900
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x84BD / 33981
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

bool Function_156(int iParam0, int iParam1) //Position: 0x852B / 34091
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x853E / 34110
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

var Function_158(int iParam0) //Position: 0x863D / 34365
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

bool Function_159(var uParam0, int iParam1) //Position: 0x8695 / 34453
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x86B1 / 34481
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

bool Function_161(int iParam0) //Position: 0x8708 / 34568
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x871A / 34586
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

void Function_163(int iParam0) //Position: 0x874E / 34638
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x87B5 / 34741
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

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8892 / 34962
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

void Function_166() //Position: 0x8A0B / 35339
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x8A17 / 35351
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

void Function_168() //Position: 0x8A5D / 35421
{
	Function_214();
	Function_213();
	Function_212();
	Function_211();
	Function_210();
	Function_209();
	Function_208();
	return;
}

void Function_169(bool bParam0) //Position: 0x8A78 / 35448
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_170(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_170(var uParam0, int iParam1) //Position: 0x8A9E / 35486
{
	if (Function_172(uParam0[iParam13], 4))
	{
		if (Function_172(uParam0[iParam13], 1))
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
			Function_171(uParam0[iParam13], 1);
			Function_171(uParam0[iParam13], 2);
			Function_171(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_171(var uParam0, int iParam1) //Position: 0x8BCC / 35788
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_172(var uParam0, bool bParam1) //Position: 0x8BE6 / 35814
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_173(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8C03 / 35843
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_199());
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
	Function_198();
	CLEAR_PRINTED_OBJECTIVE();
	Function_197();
	Function_195(0);
	Function_194();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_193();
	Function_192();
	Function_198();
	ENABLE_JOURNAL_REPLAY(1);
	Function_191(1);
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
		Function_190(Global_34573);
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
	Function_189(Global_28178);
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
	Function_188(1178687);
	Function_186(33039);
	Function_185(0x218003f);
	Function_184(4194560);
	Function_183();
	Function_182();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_179(0, 1, 1);
	}
	else
	{
		Function_179(0, 1, 1);
	}
	Function_178();
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
	Function_174();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_174() //Position: 0x8DF4 / 36340
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
		if (Function_177() > 3)
		{
			bVar0 *= 2;
		}
		Function_175(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_175(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x8E4A / 36426
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_176((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_176(bool bParam0) //Position: 0x8E90 / 36496
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_177() //Position: 0x8EB5 / 36533
{
	return Global_12976.f_156;
}

void Function_178() //Position: 0x8EC0 / 36544
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

void Function_179(int iParam0, bool bParam1, int iParam2) //Position: 0x8EEA / 36586
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
			Function_180(Global_29006);
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

void Function_180(int iParam0) //Position: 0x8FF5 / 36853
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_181())
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

bool Function_181() //Position: 0x9074 / 36980
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

void Function_182() //Position: 0x90D1 / 37073
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

void Function_183() //Position: 0x90F7 / 37111
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

void Function_184(int iParam0) //Position: 0x911D / 37149
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_185(int iParam0) //Position: 0x913A / 37178
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_186(int iParam0) //Position: 0x914D / 37197
{
	Function_187(&Global_28842, iParam0);
	return;
}

void Function_187(var uParam0, int iParam1) //Position: 0x915B / 37211
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_188(bool bParam0) //Position: 0x9176 / 37238
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_189(int iParam0) //Position: 0x91A3 / 37283
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

void Function_190(bool bParam0) //Position: 0x926A / 37482
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

void Function_191(bool bParam0) //Position: 0x92E6 / 37606
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

void Function_192() //Position: 0x935A / 37722
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

void Function_193() //Position: 0x939B / 37787
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

void Function_194() //Position: 0x93DC / 37852
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_195(int iParam0) //Position: 0x93F0 / 37872
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_196())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_196() //Position: 0x942C / 37932
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

void Function_197() //Position: 0x9451 / 37969
{
	Global_8722 = 0.0f;
	return;
}

void Function_198() //Position: 0x945B / 37979
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

int Function_199() //Position: 0x9486 / 38022
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_200() //Position: 0x94A0 / 38048
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_201(bool bParam0) //Position: 0x94A9 / 38057
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

void Function_202() //Position: 0x9501 / 38145
{
	Function_206(bLocal_664);
	Function_206(bLocal_665);
	Function_204(3, 0, 1);
	if (IS_BLIP_VALID(bLocal_745))
	{
		REMOVE_BLIP(bLocal_745);
	}
	if (IS_OBJECT_VALID(bLocal_667))
	{
		Function_203(bLocal_667);
		Function_198();
	}
	if (IS_BLIP_VALID(bLocal_746))
	{
		REMOVE_BLIP(bLocal_746);
	}
	if (IS_BLIP_VALID(bLocal_747))
	{
		REMOVE_BLIP(bLocal_747);
	}
	return;
}

void Function_203(bool bParam0) //Position: 0x9558 / 38232
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

void Function_204(int iParam0, bool bParam1, bool bParam2) //Position: 0x95E2 / 38370
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
						Function_217(bVar1);
					}
				}
				Function_205(bVar0);
			}
		}
	}
	return;
}

void Function_205(bool bParam0) //Position: 0x96D9 / 38617
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

void Function_206(bool bParam0) //Position: 0x9705 / 38661
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
			Function_217(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_207() //Position: 0x973C / 38716
{
	Global_12976.f_72 = "";
	return;
}

void Function_208() //Position: 0x9749 / 38729
{
	Function_169(&Local_4 + 556);
	return;
}

void Function_209() //Position: 0x9757 / 38743
{
	Function_169(&Local_4 + 444);
	return;
}

void Function_210() //Position: 0x9765 / 38757
{
	Function_169(&Local_4 + 332);
	return;
}

void Function_211() //Position: 0x9773 / 38771
{
	Function_169(&Local_4 + 232);
	return;
}

void Function_212() //Position: 0x9780 / 38784
{
	Function_169(&Local_4 + 192);
	return;
}

void Function_213() //Position: 0x978D / 38797
{
	Function_169(&Local_4 + 152);
	return;
}

void Function_214() //Position: 0x979A / 38810
{
	Function_169(&Local_4 + 4);
	Function_169(&Local_4 + 152);
	Function_169(&Local_4 + 192);
	Function_169(&Local_4 + 232);
	Function_169(&Local_4 + 332);
	Function_169(&Local_4 + 444);
	Function_169(&Local_4 + 556);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

int Function_215(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x97D9 / 38873
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
		Function_216(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_217(StackVal);
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

void Function_216(bool bParam0) //Position: 0x9AF7 / 39671
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_217(bool bParam0) //Position: 0x9B0C / 39692
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

void Function_218() //Position: 0x9B38 / 39736
{
	var uVar0[9];
	int iVar10;
	
	if (Function_262())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Wrangle with Bonnie";
		uVar0[4] = "Ride to Armadillo plains";
		uVar0[5] = "nTrap Herd";
		uVar0[6] = "Wrangle Stallion";
		uVar0[7] = "Last Stage";
		uVar0[8] = "Restart Banter";
		iVar10 = Function_248(&uLocal_518, &uVar0, &Local_486 + 4, 1, 0);
		if (Function_247(&iVar10, &iLocal_532, &iLocal_533, &Local_525))
		{
			Function_240();
			Function_239();
		}
		if (iVar10 == 0)
		{
			Function_240();
			Function_239();
			if (IS_ACTOR_VALID((*&Local_4 + 736)[02]))
			{
				DESTROY_ACTOR((*&Local_4 + 736)[02]);
			}
			Function_238(&bLocal_597, 8);
		}
		else if (iVar10 == 1)
		{
			Function_240();
			Function_239();
			if (IS_ACTOR_VALID((*&Local_4 + 736)[02]))
			{
				DESTROY_ACTOR((*&Local_4 + 736)[02]);
			}
			Function_233(iLocal_532);
			Function_229(StackVal, StackVal, 5, &bLocal_598, &iLocal_532, Function_236(iLocal_532), Function_233(iLocal_532), 0);
		}
		else if (iVar10 == 2)
		{
			Function_240();
			Function_239();
			if (IS_ACTOR_VALID((*&Local_4 + 736)[02]))
			{
				DESTROY_ACTOR((*&Local_4 + 736)[02]);
			}
			Function_224(&bLocal_599, 4);
		}
		else if (iVar10 == 3)
		{
			Function_240();
			Function_239();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			Function_223(&(Local_845[017]), 0);
			Function_223(&(Local_845[217]), 0);
			Function_221(&iLocal_577);
			iLocal_532 = 1;
			iLocal_533 = 0;
			Local_525 = 1000;
		}
		else if (iVar10 == 4)
		{
			Function_240();
			Function_239();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			Function_223(&(Local_845[017]), 0);
			Function_223(&(Local_845[217]), 0);
			Function_221(&iLocal_577);
			iLocal_532 = 2;
			iLocal_533 = 0;
			Local_525 = 1000;
		}
		else if (iVar10 == 5)
		{
			Function_240();
			Function_239();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			Function_223(&(Local_845[017]), 0);
			Function_223(&(Local_845[217]), 0);
			Function_221(&iLocal_577);
			iLocal_532 = 3;
			iLocal_533 = 0;
			Local_525 = 1000;
		}
		else if (iVar10 == 6)
		{
			Function_240();
			Function_239();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			Function_223(&(Local_845[017]), 0);
			Function_223(&(Local_845[217]), 0);
			Function_221(&iLocal_577);
			iLocal_532 = 4;
			iLocal_533 = 0;
			Local_525 = 1000;
		}
		else if (iVar10 == 7)
		{
			Function_240();
			Function_239();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			Function_223(&(Local_845[017]), 0);
			Function_223(&(Local_845[217]), 0);
			Function_221(&iLocal_577);
			iLocal_532 = 101;
			iLocal_533 = 0;
			Local_525 = 1000;
		}
		else if (iVar10 == 8)
		{
			Function_240();
			Function_239();
			Function_219();
		}
	}
	return;
}

void Function_219() //Position: 0x9E5F / 40543
{
	iLocal_621 = 0;
	Function_220(&iLocal_611);
	iLocal_620 = 0;
	return;
}

void Function_220(int iParam0) //Position: 0x9E73 / 40563
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_221(int iParam0) //Position: 0x9E87 / 40583
{
	Function_222(iParam0, 0.0f);
	return;
}

void Function_222(int iParam0, float fParam1) //Position: 0x9E93 / 40595
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_223(var uParam0, int iParam1) //Position: 0x9EB4 / 40628
{
	uParam0->f_36 = iParam1;
	return;
}

void Function_224(bool bParam0, int iParam1) //Position: 0x9EC0 / 40640
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_225(iParam1);
	*bParam0 = 1;
	return;
}

void Function_225(int iParam0) //Position: 0x9EE3 / 40675
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_228("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_227(2) || Function_227(8)) || Function_227(9)) || Function_227(10))
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
		Function_228("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_228("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_228("");
	}
	else if (iParam0 == 8)
	{
		Function_226();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_226();
	}
	return;
}

void Function_226() //Position: 0x9FDA / 40922
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_227(int iParam0) //Position: 0x9FE6 / 40934
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

void Function_228(bool bParam0) //Position: 0xA01C / 40988
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_229(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA086 / 41094
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_230(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_225(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_230(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA0C3 / 41155
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_232(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_231(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_231(int iParam0) //Position: 0xA146 / 41286
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

var Function_232(vector3 vParam0, bool bParam3) //Position: 0xA5F4 / 42484
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

vector3 Function_233(int iParam0) //Position: 0xA65F / 42591
{
	Function_234(iParam0 + 1);
	return StackVal, StackVal, Function_234(iParam0 + 1);
}

vector3 Function_234(int iParam0) //Position: 0xA66C / 42604
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_235((*&Local_4 + 1112)[0]);
			return StackVal, StackVal, Function_235((*&Local_4 + 1112)[0]);
			break;
		
		case 0x00000001:
			Function_235((*&Local_4 + 1184)[0]);
			return StackVal, StackVal, Function_235((*&Local_4 + 1184)[0]);
			break;
		
		case 0x00000002:
			Function_235((*&Local_4 + 1224)[0]);
			return StackVal, StackVal, Function_235((*&Local_4 + 1224)[0]);
			break;
		
		case 0x00000003:
			Function_235((*&Local_4 + 1284)[0]);
			return StackVal, StackVal, Function_235((*&Local_4 + 1284)[0]);
			break;
		
		case 0x00000004:
			Function_235((*&Local_4 + 1416)[0]);
			return StackVal, StackVal, Function_235((*&Local_4 + 1416)[0]);
			break;
		
		default:
			Function_235((*&Local_4 + 1684)[0]);
			return StackVal, StackVal, Function_235((*&Local_4 + 1684)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_235((*&Local_4 + 1112)[0]);
	return StackVal, StackVal, Function_235((*&Local_4 + 1112)[0]);
}

vector3 Function_235(bool bParam0) //Position: 0xA760 / 42848
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

int Function_236(int iParam0) //Position: 0xA787 / 42887
{
	return Function_237(iParam0 + 1);
}

int Function_237(int iParam0) //Position: 0xA794 / 42900
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 1112)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 1184)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 1224)[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 1284)[1]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING((*&Local_4 + 1416)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 1684)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_4 + 1112)[0]);
}

void Function_238(bool bParam0, int iParam1) //Position: 0xA888 / 43144
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_225(iParam1);
	*bParam0 = 1;
	return;
}

void Function_239() //Position: 0xA8AB / 43179
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_240() //Position: 0xA8C0 / 43200
{
	Function_242();
	Function_241(10, 3);
	return;
}

void Function_241(int iParam0, int iParam1) //Position: 0xA8CF / 43215
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

void Function_242() //Position: 0xAA06 / 43526
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_246())
	{
		Function_245(10, 3);
	}
	else
	{
		Function_243();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_243() //Position: 0xAA51 / 43601
{
	Function_244(25, 2);
	return;
}

void Function_244(int iParam0, int iParam1) //Position: 0xAA5D / 43613
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

void Function_245(int iParam0, int iParam1) //Position: 0xAC5B / 44123
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

bool Function_246() //Position: 0xAD92 / 44434
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

bool Function_247(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xADF9 / 44537
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_240();
			Function_239();
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
		Function_228("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_248(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xAE9F / 44703
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_261(&Var15, &Var0);
	uVar20 = Function_260(*uParam1, &Var15);
	Function_259(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_258(uParam0, uVar20);
	Function_256(StackVal, uParam0, Var15.f_12);
	Function_254(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_253(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_250(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_249(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_249(int iParam0, int iParam1, int iParam2) //Position: 0xAF66 / 44902
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

bool Function_250(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xAFC2 / 44994
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
				Function_252(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_252(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_249(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_251(bParam1->f_32);
	}
	else
	{
		Function_251(bParam1->f_32);
	}
	return 0;
}

void Function_251(bool bParam0) //Position: 0xB148 / 45384
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

void Function_252(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB182 / 45442
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

var Function_253(int iParam0, var uParam1, int iParam2) //Position: 0xB230 / 45616
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_254(var uParam0, int iParam1, int iParam2) //Position: 0xB254 / 45652
{
	switch (Function_255())
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

int Function_255() //Position: 0xB2F0 / 45808
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

void Function_256(var uParam0, int iParam1, int iParam2) //Position: 0xB32C / 45868
{
	switch (Function_257(uParam0))
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

int Function_257(bool bParam0) //Position: 0xB3C4 / 46020
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

var Function_258(var uParam0, int iParam1) //Position: 0xB50F / 46351
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

void Function_259(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB65E / 46686
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

var Function_260(int iParam0, int iParam1) //Position: 0xB6F1 / 46833
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_261(var uParam0, var uParam1) //Position: 0xB70B / 46859
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

bool Function_262() //Position: 0xB759 / 46937
{
	return Global_30920;
}

bool Function_263() //Position: 0xB762 / 46946
{
	if (IS_EXITFLAG_SET())
	{
		Function_233(iLocal_532);
		Function_229(StackVal, StackVal, 4, &bLocal_598, &iLocal_532, Function_236(iLocal_532), Function_233(iLocal_532), 0);
		return 0;
	}
	Function_636(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_486, iLocal_532, iLocal_533, &bLocal_599, &bLocal_597, &bLocal_598);
	Function_632();
	if (iLocal_532 == 99 && iLocal_532 == 100)
	{
		Function_631();
		Function_630();
		Function_623(&uLocal_730, &uLocal_686, &uLocal_658, uLocal_659, 1.0f, uLocal_673);
		if (Function_603(&Local_845, &uLocal_805, &uLocal_982, bLocal_573, uLocal_804))
		{
			if (Function_594(&uLocal_982))
			{
				Function_233(iLocal_532);
				Function_229(StackVal, StackVal, 5, &bLocal_598, &iLocal_532, Function_236(iLocal_532), Function_233(iLocal_532), 0);
				return 1;
			}
		}
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_233(iLocal_532);
			Function_229(StackVal, StackVal, 1, &bLocal_598, &iLocal_532, Function_236(iLocal_532), Function_233(iLocal_532), 0);
			return 1;
		}
		if (Global_3403 || Global_3404)
		{
			Function_233(iLocal_532);
			Function_229(StackVal, StackVal, 2, &bLocal_598, &iLocal_532, Function_236(iLocal_532), Function_233(iLocal_532), 0);
			return 1;
		}
		Function_593();
	}
	switch (iLocal_532)
	{
		case 0x00000063:
			Function_571();
			break;
		
		case 0x00000000:
			Function_542();
			break;
		
		case 0x00000001:
			Function_509();
			break;
		
		case 0x00000002:
			Function_489();
			break;
		
		case 0x00000003:
			Function_448();
			break;
		
		case 0x00000004:
			Function_369();
			break;
		
		case 0x00000065:
			Function_266();
			break;
		
		case 0x00000064:
			if (Function_265(&bLocal_598))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_264(&iLocal_532, &iLocal_533, &Local_525))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_597)
	{
		Function_238(&bLocal_597, 8);
		Function_1();
		return 0;
	}
	if (bLocal_598 && iLocal_532 == 100)
	{
		Function_233(iLocal_532);
		Function_229(StackVal, StackVal, 5, &bLocal_598, &iLocal_532, Function_236(iLocal_532), Function_233(iLocal_532), 0);
	}
	if (bLocal_599)
	{
		Function_224(&bLocal_599, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_264(var uParam0, var uParam1, int iParam2) //Position: 0xB91F / 47391
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

bool Function_265(int iParam0) //Position: 0xB95F / 47455
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_266() //Position: 0xB972 / 47474
{
	switch (iLocal_533)
	{
		case 0x00000000:
			if (Function_367(iLocal_532))
			{
				Function_365();
				Function_221(&iLocal_577);
				iLocal_533 = 1;
				iLocal_788 = 6;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_364(iLocal_572) || iLocal_572 != 4294967295)) && Function_363())
			{
				Function_361(&iLocal_622, 0, 0, 4294967295, 4294967295);
				Function_357();
				Function_221(&iLocal_577);
				iLocal_533 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_349())
			{
				Function_221(&iLocal_577);
				iLocal_533 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_267("$/cutscene/RANCH06_CS05/RANCH06_CS05", &Local_525, &Local_486, &iLocal_532, 82051, 59123, 56914, 56301, 50811, 50729, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_221(&iLocal_577);
				iLocal_533 = 4;
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			SET_ACTOR_INVULNERABILITY(bLocal_575, false);
			SET_ACTOR_RIDEABLE(bLocal_575, 1);
			SET_ALLOW_RIDE_BY_PLAYER(bLocal_575, 1);
			Function_221(&iLocal_577);
			iLocal_533 = 106;
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_208();
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
				Function_132("Ranch06_stallion_broken_help", 0x41200000, 1, 0, 2, 1, 0);
				Function_85(356, 6, 1, 0);
				bLocal_597 = true;
			}
			break;
	}
	return;
}

bool Function_267(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xBAEA / 47850
{
	if (!bParam15)
	{
		Function_280(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_279(iParam2) || iParam2->f_24 < 1))
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
				Function_221(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_278())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_277(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_221(iParam1 + 4);
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
					Function_277(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_274(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_274(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_272(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_277(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_221(iParam1 + 4);
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
						Function_269();
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
					Function_268(1);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_279(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_268(bool bParam0) //Position: 0xC100 / 49408
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

void Function_269() //Position: 0xC1A5 / 49573
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_270();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_270() //Position: 0xC1EA / 49642
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_271(bool bParam0) //Position: 0xC1FC / 49660
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

void Function_272(bool bParam0, bool bParam1) //Position: 0xC219 / 49689
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
			if ((bVar3 == Global_34573 && !Function_273(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_273(bool bParam0) //Position: 0xC299 / 49817
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

float Function_274(int iParam0) //Position: 0xC2C8 / 49864
{
	if (Function_276(iParam0))
	{
		if (Function_275(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_275(int iParam0) //Position: 0xC390 / 50064
{
	return Function_153(*iParam0, 2);
}

bool Function_276(int iParam0) //Position: 0xC39D / 50077
{
	return Function_153(*iParam0, 1);
}

int Function_277(bool bParam0) //Position: 0xC3AA / 50090
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

bool Function_278() //Position: 0xC462 / 50274
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

bool Function_279(int iParam0) //Position: 0xC49C / 50332
{
	return iParam0->f_20;
}

void Function_280(var uParam0, int iParam1) //Position: 0xC4A6 / 50342
{
	Function_281(uParam0, iParam1, 0);
	return;
}

void Function_281(int iParam0, bool bParam1, bool bParam2) //Position: 0xC4B4 / 50356
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
			Function_282(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_282(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_282(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC600 / 50688
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

int Function_283() //Position: 0xC629 / 50729
{
	switch (iLocal_532)
	{
		case 0x00000063:
			if (Function_320())
			{
				if (Function_309())
				{
					iLocal_685 = 1;
					return 1;
				}
				return 0;
			}
			return 0;
			break;
		
		case 0x00000002:
			iLocal_685 = 1;
			return 1;
			break;
		
		case 0x00000065:
			iLocal_685 = 1;
			return 1;
			break;
	}
	return 0;
}

int Function_284() //Position: 0xC67B / 50811
{
	switch (iLocal_532)
	{
		case 0x00000063:
			if (!iLocal_684)
			{
				Function_307(Global_34573, (*&Local_4 + 1112)[11], 0, 0, 0);
				Function_307(bLocal_576, (*&Local_4 + 1112)[15], 1, 1, 1);
				Function_307(bLocal_574, (*&Local_4 + 1112)[13], 1, 1, 1);
				TASK_PRIORITY_SET(bLocal_574, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_574, 2);
				TASK_MOUNT(bLocal_576, bLocal_625, 0, 1, 2, 2147483647);
				TASK_PRIORITY_SET(bLocal_576, true);
				SET_ACTOR_MAX_SPEED(bLocal_576, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_576, 2);
				ACTOR_POP_NEXT_GAIT(bLocal_576, 1, false);
				TASK_CLEAR(Global_34573);
				ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				TASK_STAND_STILL(bLocal_575, -1.0f, 0, 0);
				Function_307(bLocal_575, (*&Local_4 + 1112)[6], 1, 1, 1);
				iLocal_684 = 1;
			}
			Function_306(1, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			Function_299();
			iLocal_532 = 0;
			iLocal_533 = 2;
			Function_296(&Local_486, &iLocal_532, &iLocal_533);
			Function_295(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_486);
			iLocal_783 = 6;
			return 1;
			break;
		
		case 0x00000002:
			if (!iLocal_684)
			{
				Function_294();
				TASK_PRIORITY_SET(bLocal_576, 2);
				SET_ACTOR_FACTION(bLocal_576, 20);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_576, true);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_576, 1);
				TASK_STAND_STILL(bLocal_575, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_624, -1.0f, 0, 0);
				Function_307(bLocal_575, (*&Local_4 + 1224)[1], 1, 1, 1);
				if (!IS_ACTOR_RIDING(Global_34573))
				{
					ACTOR_MOUNT_ACTOR(Global_34573, bLocal_575);
				}
				SIMULATE_PLAYER_INPUT_GAIT(0, 2, 1073741824, 0);
				ACTOR_POP_NEXT_GAIT(Global_34573, 2, false);
				Function_307(bLocal_624, (*&Local_4 + 1224)[3], 1, 1, 1);
				if (!IS_ACTOR_RIDING(bLocal_574))
				{
					ACTOR_MOUNT_ACTOR(bLocal_574, bLocal_624);
				}
				ACTOR_POP_NEXT_GAIT(bLocal_574, 2, false);
				iLocal_684 = 1;
				return 1;
			}
			Function_306(1, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			if (Function_285())
			{
				if (!iLocal_684)
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_575);
					TASK_CLEAR(bLocal_575);
					TASK_CLEAR(Global_34573);
					ANIMAL_ACTOR_SET_DOCILE(bLocal_575, 1);
					ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_575, false);
					TELEPORT_OBJECT_TO_OBJECT(Global_34573, (*&Local_4 + 1684)[1], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
					TELEPORT_OBJECT_TO_OBJECT(bLocal_575, (*&Local_4 + 1684)[1], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
					if (IS_ACTOR_VALID(bLocal_624))
					{
						DESTROY_ACTOR(bLocal_624);
					}
					if (IS_ACTOR_VALID(bLocal_574))
					{
						Function_215(3, 1, 0, 1, 1);
					}
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					ACTOR_MOUNT_ACTOR(Global_34573, bLocal_575);
					iLocal_684 = 1;
				}
				Function_306(1, 0, 1, 0, 1, 1, 0, 1, 1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_285() //Position: 0xC8E7 / 51431
{
	if (iLocal_685)
	{
		return 1;
	}
	switch (iLocal_623)
	{
		case 0x00000000:
			if (UNK_0xCDA6BB6C())
			{
				CANCEL_CUTSCENE_TUNER_PLAYBACK();
			}
			if (IS_OBJECT_VALID(Local_525.f_16))
			{
				DESTROY_OBJECT(Local_525.f_16);
			}
			Local_525.f_16 = Function_290(Local_4, 0, 1, 0, 0);
			Function_289(Global_34573, 1, 1);
			Function_307(bLocal_575, (*&Local_4 + 1684)[0], 1, 1, 1);
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				ACTOR_MOUNT_ACTOR(Global_34573, bLocal_575);
			}
			TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
			if (!IS_ACTOR_VALID(bLocal_624))
			{
				GET_OBJECT_POSITION((*&Local_4 + 1684)[21], &vLocal_762);
				bLocal_624 = CREATE_ACTOR_IN_LAYOUT(bLocal_485, "lastscenehorse", 980, vLocal_762, 0.0f, 50,44261f, 0.0f);
				SET_ACTOR_FACTION(bLocal_624, 20);
				ACCESSORIZE_HORSE(bLocal_624, false);
				DECOR_SET_BOOL(bLocal_624, "CanBeLasso", false);
				AI_SET_NAV_ACTOR_WIDTH(bLocal_624, 0,5f);
			}
			else if (!IS_ACTOR_ALIVE(bLocal_624))
			{
				DESTROY_ACTOR(bLocal_624);
				GET_OBJECT_POSITION((*&Local_4 + 1684)[21], &vLocal_762);
				bLocal_624 = CREATE_ACTOR_IN_LAYOUT(bLocal_485, "lastscenehorse", 980, vLocal_762, 0.0f, 50,44261f, 0.0f);
				SET_ACTOR_FACTION(bLocal_624, 20);
				ACCESSORIZE_HORSE(bLocal_624, false);
				DECOR_SET_BOOL(bLocal_624, "CanBeLasso", false);
				AI_SET_NAV_ACTOR_WIDTH(bLocal_624, 0,5f);
			}
			Function_289(bLocal_574, 1, 1);
			Function_307(bLocal_624, (*&Local_4 + 1684)[21], 1, 1, 1);
			if (!IS_ACTOR_RIDING(bLocal_574) || GET_MOUNT(bLocal_574) == bLocal_624)
			{
				ACTOR_MOUNT_ACTOR(bLocal_574, bLocal_624);
			}
			TASK_FOLLOW_PATH(bLocal_574, Local_4.f_1880, 3, 1, 0, 1, false);
			AI_ACTOR_FORCE_SPEED(bLocal_574, 3);
			AI_ACTOR_FORCE_SPEED(bLocal_624, 3);
			ACTOR_POP_NEXT_GAIT(bLocal_574, 4, false);
			ACTOR_POP_NEXT_GAIT(bLocal_624, 4, false);
			iLocal_623 = 6;
			Function_221(&iLocal_577);
			return 0;
			break;
		
		case 0x00000006:
			if (Function_274(&iLocal_577) < 5.0f)
			{
				Function_286();
				iLocal_623 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_274(&iLocal_577) < 7.0f)
			{
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				if (IS_OBJECT_VALID(Local_525.f_16))
				{
					DESTROY_OBJECT(Local_525.f_16);
				}
				Function_289(Global_34573, 0, 1);
				Function_289(bLocal_574, 0, 1);
				Function_215(3, 1, 0, 1, 1);
				if (IS_ACTOR_VALID(bLocal_624))
				{
					DESTROY_ACTOR(bLocal_624);
				}
				iLocal_623 = 106;
				Function_221(&iLocal_577);
				return 1;
			}
			break;
		
		case 0x0000006A:
			return 1;
			break;
	}
	return 0;
}

void Function_286() //Position: 0xCB57 / 52055
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_bonShoutsHerd", "Ranch06_bonShoutsHerd", false, 2, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_287(int iParam0) //Position: 0xCBAA / 52138
{
	Function_288(0, Global_34573, iParam0, 0);
	Function_288(1, bLocal_574, iParam0, 0);
	Function_288(2, bLocal_576, iParam0, 0);
	Function_288(3, bLocal_638, iParam0, 0);
	Function_288(4, bLocal_638, iParam0, 0);
	return;
}

void Function_288(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xCBE2 / 52194
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

void Function_289(bool bParam0, bool bParam1, bool bParam2) //Position: 0xCC07 / 52231
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

var Function_290(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xCCA1 / 52385
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Ranch06_Depart", 2, 1);
	}
	Function_291(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_291(int iParam0) //Position: 0xCD1B / 52507
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_293(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_292(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 7,5f, 0, 0);
	return;
}

void Function_292(int iParam0) //Position: 0xCD54 / 52564
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1882,322f, 25,2635f, 2176,62f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,020996f, 0,097065f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 200.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 60.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_293(var uParam0) //Position: 0xCDFA / 52730
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 22.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -1888,529f, 25,14956f, 2175,966f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0,053896f, 0,256147f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 200.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 60.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_294() //Position: 0xCEA0 / 52896
{
	TASK_STAND_STILL(bLocal_576, -1.0f, 0, 0);
	Function_307(bLocal_576, (*&Local_4 + 1224)[8], 1, 1, 1);
	RESET_ANIM_SET_FOR_ACTOR(bLocal_576, 0);
	SET_ANIM_SET_FOR_ACTOR(bLocal_576, "ranch06_drew_idle", 0);
	SET_ACTION_NODE_FOR_ACTOR(bLocal_576, "ranch06_drew_idle/drew_walk");
	return;
}

void Function_295(struct<25> Param0) //Position: 0xCF09 / 53001
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			iLocal_532 = 0;
			break;
		
		case 0x00000002:
			iLocal_532 = 1;
			break;
		
		case 0x00000003:
			iLocal_532 = 2;
			break;
		
		case 0x00000004:
			iLocal_532 = 3;
			break;
		
		case 0x00000005:
			iLocal_532 = 4;
			break;
		
		case 0x00000006:
			iLocal_532 = 101;
			break;
	}
}

void Function_296(int iParam0, int iParam1, int iParam2) //Position: 0xCF69 / 53097
{
	if (Function_279(iParam0))
	{
		*iParam1 = Function_298(iParam0);
		if (*iParam1 == 4294967295)
		{
			*iParam1 = 0;
		}
		if (*iParam1 == 99)
		{
			*iParam1 = 0;
			*iParam2 = 0;
		}
		Function_297();
	}
	return;
}

void Function_297() //Position: 0xCF9D / 53149
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

int Function_298(int iParam0) //Position: 0xCFEE / 53230
{
	if (Function_279(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_299() //Position: 0xD006 / 53254
{
	if (IS_LAYOUTREF_VALID(Local_4))
	{
		bLocal_573 = CREATE_OBJECT_ITERATOR(Local_4);
	}
	Function_303();
	Function_204(3, 1, 1);
	SET_CRIPPLE_ENABLE(bLocal_574, 0);
	SET_ACTOR_FACTION(bLocal_574, 20);
	TASK_PRIORITY_SET(bLocal_574, true);
	AI_BEHAVIOR_SET_ALLOW(bLocal_574, 0, 0);
	SET_ACTOR_MAX_HEALTH(bLocal_574, 50.0f);
	SET_ACTOR_HEALTH(bLocal_574, GET_ACTOR_MAX_HEALTH(bLocal_574));
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_574, 100.0f);
	GIVE_WEAPON_TO_ACTOR(bLocal_574, 21, false, 1, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_574, true);
	RESET_ACTOR_GAITS(bLocal_575, 0);
	TASK_PRIORITY_SET(bLocal_575, 2);
	TASK_STAND_STILL(bLocal_575, -1.0f, 0, 0);
	SET_ACTOR_MAX_HEALTH(bLocal_575, 50.0f);
	SET_ACTOR_HEALTH(bLocal_575, GET_ACTOR_MAX_HEALTH(bLocal_575));
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_575, true);
	DECOR_SET_BOOL(Global_34573, "Ranch06DisablePrint", true);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1049);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1050);
	Local_600 = { 0.0f, 0.0f, 0.0f };
	ATTACH_OBJECTS((*&Local_4 + 1012)[0], Global_34573, Function_53(), Local_600, Local_600, 4294967295);
	ATTACH_OBJECTS((*&Local_4 + 1012)[1], Global_34573, Function_53(), Local_600, Local_600, 4294967295);
	ATTACH_OBJECTS((*&Local_4 + 1012)[2], bLocal_574, Function_53(), Local_600, Local_600, 4294967295);
	bLocal_789 = CREATE_POINT_IN_LAYOUT(bLocal_485, "oHerdCenter", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	Function_301(&uLocal_805, bLocal_485);
	if (iLocal_683)
	{
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1884));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1888));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1892));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1896));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1900));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1904));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1908));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1912));
		SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1916));
	}
	GET_OBJECT_POSITION((*&Local_4 + 1112)[9], &Local_600);
	Function_300(StackVal, StackVal, "p_gen_glass04x", Local_600, 1.0f);
	DESTROY_OBJECT(Local_4.f_1792);
	Function_221(&iLocal_577);
	Function_221(&iLocal_580);
	Function_221(&iLocal_583);
	Function_221(&iLocal_649);
	Function_221(&iLocal_646);
	return;
}

void Function_300(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xD215 / 53781
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		bVar0 = GET_OBJECT_FROM_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(vParam1, fParam4, bParam0, 1));
		if (IS_OBJECT_VALID(bVar0))
		{
			DESTROY_OBJECT(bVar0);
		}
		iVar1++;
	}
}

int Function_301(var uParam0, bool bParam1) //Position: 0xD250 / 53840
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_302(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_302(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_302(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_302(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_302(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_302(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_302(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_302(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_302(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_302(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_302(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_302(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_302(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_302(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0xD8F0 / 55536
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

void Function_303() //Position: 0xD9B3 / 55731
{
	Function_162(51212);
	Function_304(9);
	return;
}

void Function_304(int iParam0) //Position: 0xD9C5 / 55749
{
	Function_305(&Global_28842, iParam0);
	return;
}

void Function_305(var uParam0, bool bParam1) //Position: 0xD9D3 / 55763
{
	int iVar0;
	
	iVar0 = (*uParam0 && bParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_306(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xD9F6 / 55798
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
		Function_239();
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
	Function_268(bParam9);
}

void Function_307(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xDAE6 / 56038
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

int Function_308() //Position: 0xDBED / 56301
{
	switch (iLocal_532)
	{
		case 0x00000063:
			Function_307(Global_34573, (*&Local_4 + 1112)[11], 0, 0, 0);
			Function_307(bLocal_576, (*&Local_4 + 1112)[15], 1, 1, 1);
			Function_307(bLocal_574, (*&Local_4 + 1112)[13], 1, 1, 1);
			TASK_PRIORITY_SET(bLocal_574, true);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_574, 2);
			TASK_MOUNT(bLocal_576, bLocal_625, 0, 1, 2, 2147483647);
			TASK_PRIORITY_SET(bLocal_576, true);
			SET_ACTOR_MAX_SPEED(bLocal_576, true);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_576, 2);
			ACTOR_POP_NEXT_GAIT(bLocal_576, 1, false);
			TASK_CLEAR(Global_34573);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			TASK_STAND_STILL(bLocal_575, -1.0f, 0, 0);
			Function_307(bLocal_575, (*&Local_4 + 1112)[6], 1, 1, 1);
			iLocal_684 = 1;
			return 1;
			break;
		
		case 0x00000002:
			Function_294();
			TASK_PRIORITY_SET(bLocal_576, 2);
			SET_ACTOR_FACTION(bLocal_576, 20);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_576, true);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_576, 1);
			TASK_STAND_STILL(bLocal_575, -1.0f, 0, 0);
			TASK_STAND_STILL(bLocal_624, -1.0f, 0, 0);
			TASK_FOLLOW_PATH(bLocal_574, Local_4.f_1808, 4, 0, 0, 1, false);
			TASK_FOLLOW_PATH(Global_34573, Local_4.f_1808, 4, 0, 0, 1, false);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_307(bLocal_575, (*&Local_4 + 1224)[1], 1, 1, 1);
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				ACTOR_MOUNT_ACTOR(Global_34573, bLocal_575);
			}
			AI_ACTOR_FORCE_SPEED(Global_34573, 4);
			AI_ACTOR_FORCE_SPEED(bLocal_575, 4);
			SIMULATE_PLAYER_INPUT_GAIT(0, 3, 1073741824, 0);
			ACTOR_POP_NEXT_GAIT(Global_34573, 3, false);
			ACTOR_POP_NEXT_GAIT(bLocal_575, 3, false);
			Function_307(bLocal_624, (*&Local_4 + 1224)[3], 1, 1, 1);
			if (!IS_ACTOR_RIDING(bLocal_574))
			{
				ACTOR_MOUNT_ACTOR(bLocal_574, bLocal_624);
			}
			AI_ACTOR_FORCE_SPEED(bLocal_574, 4);
			AI_ACTOR_FORCE_SPEED(bLocal_624, 4);
			ACTOR_POP_NEXT_GAIT(bLocal_574, 3, false);
			ACTOR_POP_NEXT_GAIT(bLocal_624, 3, false);
			iLocal_684 = 1;
			return 1;
			break;
		
		case 0x00000065:
			if (Function_285())
			{
				if (!iLocal_684)
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_575);
					TASK_CLEAR(bLocal_575);
					TASK_CLEAR(Global_34573);
					ANIMAL_ACTOR_SET_DOCILE(bLocal_575, 1);
					ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_575, false);
					TELEPORT_OBJECT_TO_OBJECT(Global_34573, (*&Local_4 + 1684)[1], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
					TELEPORT_OBJECT_TO_OBJECT(bLocal_575, (*&Local_4 + 1684)[1], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
					if (IS_ACTOR_VALID(bLocal_624))
					{
						DESTROY_ACTOR(bLocal_624);
					}
					if (IS_ACTOR_VALID(bLocal_574))
					{
						Function_215(3, 1, 0, 1, 1);
					}
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					ACTOR_MOUNT_ACTOR(Global_34573, bLocal_575);
					iLocal_684 = 1;
				}
			}
			return 1;
			break;
	}
	return 0;
}

bool Function_309() //Position: 0xDE52 / 56914
{
	switch (iLocal_532)
	{
		case 0x00000063:
			if (!Function_316())
			{
			}
			if (!Function_310(&bLocal_493))
			{
			}
			if (Function_316() && Function_310(&bLocal_493))
			{
				return 1;
			}
			return 0;
			break;
		
		case 0x00000002:
			Function_316();
			Function_310(&bLocal_493);
			return 1;
			break;
		
		case 0x00000065:
			Function_316();
			Function_310(&bLocal_493);
			return 1;
			break;
	}
	return 0;
}

bool Function_310(bool bParam0) //Position: 0xDEB8 / 57016
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_315();
	iVar1 = 0;
	if (!Function_172(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_314(bParam0[iVar03], 8);
		}
		else if (Function_313())
		{
			iVar1 = 1;
			Function_314(bParam0[iVar03], 8);
		}
		Function_314(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_172(bParam0[iVar03], 4))
		{
			if (!Function_172(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_172(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_172(bParam0[03], 8) || iVar1));
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
				Function_314(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_172(bParam0[iVar03], 4))
		{
			if (!Function_172(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_314(bParam0[iVar03], 2);
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
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_314(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_314(bParam0[iVar03], 2);
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
	Function_311();
	return 1;
}

void Function_311() //Position: 0xE233 / 57907
{
	if (!Function_312(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_312(int iParam0) //Position: 0xE273 / 57971
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_313() //Position: 0xE28F / 57999
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

void Function_314(var uParam0, int iParam1) //Position: 0xE2BA / 58042
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_315() //Position: 0xE2CB / 58059
{
	if (!Function_312(128))
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

bool Function_316() //Position: 0xE30D / 58125
{
	Function_319(&Local_4 + 4, 980, 2, 0);
	Function_319(&Local_4 + 4, 981, 2, 0);
	Function_317(&Local_4 + 4, "p_gen_saucer01x", 0, 0);
	Function_317(&Local_4 + 4, "p_gen_teaCup01x", 0, 0);
	Function_317(&Local_4 + 4, "p_gen_book03x", 0, 0);
	Function_317(&Local_4 + 4, "p_gen_teaPot02x", 0, 0);
	Function_317(&Local_4 + 4, "p_gen_teaTray01x", 0, 0);
	Function_317(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke_pipe", 1, 0);
	Function_317(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_317(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_eat_fruit", 1, 0);
	Function_317(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_317(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/give_lasso", 1, 0);
	if (Function_310(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_317(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xE527 / 58663
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_318(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_314(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_318(var uParam0, int iParam1, int iParam2) //Position: 0xE55F / 58719
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_172(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_314(uParam0[iVar03], 4);
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

var Function_319(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xE623 / 58915
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_172(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_314(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_314(uParam0[iVar03], 8);
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

bool Function_320() //Position: 0xE6F3 / 59123
{
	switch (iLocal_532)
	{
		case 0x00000063:
			if (!Function_316())
			{
			}
			else if (!Function_338())
			{
			}
			else if (!IS_LAYOUTREF_VALID(Local_4))
			{
				Function_334();
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Local_4.f_1792), false);
			}
			else if (!IS_ACTOR_VALID(bLocal_575))
			{
				if (Function_333())
				{
					bLocal_575 = Function_327(1, 1, 0, 0, 0, 0, 1, 0);
				}
				return 0;
			}
			if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_575, 1))
			{
				return 0;
			}
			if (!IS_ACTOR_VALID(bLocal_624))
			{
				Function_326();
				bLocal_624 = (*&Local_4 + 668)[02];
				bLocal_625 = (*&Local_4 + 668)[12];
			}
			else if (!IS_ACTOR_VALID(bLocal_576))
			{
				Function_325();
				bLocal_576 = (*&Local_4 + 864)[02];
				SET_CRIPPLE_ENABLE(bLocal_576, 0);
				SET_ACTOR_FACTION(bLocal_576, 20);
				TASK_PRIORITY_SET(bLocal_576, true);
				TASK_STAND_STILL(bLocal_576, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_576, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_576, 50.0f);
				SET_ACTOR_HEALTH(bLocal_576, GET_ACTOR_MAX_HEALTH(bLocal_576));
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_576, 100.0f);
				GIVE_WEAPON_TO_ACTOR(bLocal_576, 21, false, 1, 1);
			}
			else if (!iLocal_683)
			{
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1884));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1888));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1892));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1896));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1900));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1904));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1908));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1912));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_4.f_1916));
				TASK_STAND_STILL(bLocal_575, -1.0f, 0, 0);
				Function_307(Global_34573, (*&Local_4 + 1112)[1], 1, 1, 1);
				Function_307(bLocal_575, (*&Local_4 + 1112)[6], 1, 1, 1);
				Function_307(bLocal_576, (*&Local_4 + 1112)[5], 1, 1, 1);
				Function_307(bLocal_624, (*&Local_4 + 1112)[8], 1, 1, 1);
				Function_307(bLocal_625, (*&Local_4 + 1112)[7], 1, 1, 1);
				iLocal_683 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000002:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			return 1;
			break;
		
		case 0x00000065:
			Function_324();
			Function_321();
			return 1;
			break;
	}
	return 0;
}

void Function_321() //Position: 0xE8F6 / 59638
{
	SET_ACTOR_INVULNERABILITY(bLocal_630, false);
	SET_ACTOR_INVULNERABILITY(bLocal_632, false);
	SET_ACTOR_INVULNERABILITY(bLocal_634, false);
	SET_ACTOR_INVULNERABILITY(bLocal_636, false);
	SET_ACTOR_INVULNERABILITY(bLocal_640, false);
	SET_ACTOR_INVULNERABILITY(bLocal_639, false);
	SET_ACTOR_INVULNERABILITY(bLocal_629, false);
	SET_ACTOR_INVULNERABILITY(bLocal_631, false);
	SET_ACTOR_INVULNERABILITY(bLocal_633, false);
	SET_ACTOR_INVULNERABILITY(bLocal_635, false);
	SET_ACTOR_INVULNERABILITY(bLocal_637, false);
	SET_ACTOR_INVULNERABILITY(bLocal_638, false);
	if (IS_ACTOR_VALID(bLocal_629))
	{
		if (!SQUAD_GET(bLocal_629) != Local_4.f_860)
		{
			SQUAD_JOIN(bLocal_629, Local_4.f_860);
		}
	}
	if (IS_ACTOR_VALID(bLocal_631))
	{
		if (!SQUAD_GET(bLocal_631) != Local_4.f_860)
		{
			SQUAD_JOIN(bLocal_631, Local_4.f_860);
		}
	}
	if (IS_ACTOR_VALID(bLocal_633))
	{
		if (!SQUAD_GET(bLocal_633) != Local_4.f_860)
		{
			SQUAD_JOIN(bLocal_633, Local_4.f_860);
		}
	}
	if (IS_ACTOR_VALID(bLocal_635))
	{
		if (!SQUAD_GET(bLocal_635) != Local_4.f_860)
		{
			SQUAD_JOIN(bLocal_635, Local_4.f_860);
		}
	}
	if (IS_ACTOR_VALID(bLocal_637))
	{
		if (!SQUAD_GET(bLocal_637) != Local_4.f_860)
		{
			SQUAD_JOIN(bLocal_637, Local_4.f_860);
		}
	}
	if (IS_ACTOR_VALID(bLocal_638))
	{
		if (!SQUAD_GET(bLocal_638) != Local_4.f_860)
		{
			SQUAD_JOIN(bLocal_638, Local_4.f_860);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_860))
	{
		Function_323(&Local_4 + 860);
		DESTROY_OBJECT(Local_4.f_860);
	}
	if (SQUAD_IS_VALID(bLocal_664))
	{
		Function_322(&bLocal_664);
		DESTROY_OBJECT(bLocal_664);
	}
	if (SQUAD_IS_VALID(bLocal_665))
	{
		Function_322(&bLocal_665);
		DESTROY_OBJECT(bLocal_665);
	}
	return;
}

void Function_322(bool bParam0) //Position: 0xEA6D / 60013
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

void Function_323(var uParam0) //Position: 0xEAB4 / 60084
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

int Function_324() //Position: 0xEB33 / 60211
{
	if (IS_ACTOR_VALID(GET_MOUNT(bLocal_574)))
	{
		bLocal_624 = GET_MOUNT(bLocal_574);
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse05", bLocal_624);
	}
	else if (IS_ACTOR_VALID(bLocal_624))
	{
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse05", bLocal_624);
	}
	if (IS_ACTOR_VALID(bLocal_575))
	{
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse03", bLocal_575);
	}
	else if (IS_ACTOR_VALID(bLocal_641))
	{
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse03", bLocal_641);
	}
	else if (IS_ACTOR_VALID((*&Local_4 + 736)[02]))
	{
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse03", (*&Local_4 + 736)[02]);
	}
	return 1;
}

void Function_325() //Position: 0xEC26 / 60454
{
	(*&Local_4 + 864)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "MISC_Drew_MacFarlane", 608, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_FACTION((*&Local_4 + 864)[02], 20);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 864)[02], true);
	return;
}

void Function_326() //Position: 0xEC72 / 60530
{
	(*&Local_4 + 668)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "companionHorse", 980, -812,2147f, 93,36469f, 2427,071f, 0.0f, 50,44261f, 0.0f);
	TASK_STAND_STILL((*&Local_4 + 668)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 668)[02], 20);
	ACCESSORIZE_HORSE((*&Local_4 + 668)[02], false);
	DECOR_SET_BOOL((*&Local_4 + 668)[02], "CanBeLasso", false);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 668)[02], 0,5f);
	(*&Local_4 + 668)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "ndrewHorse", 981, -811,9912f, 93,06895f, 2430,392f, 0.0f, 90,77387f, 0.0f);
	TASK_STAND_STILL((*&Local_4 + 668)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 668)[12], 20);
	ACCESSORIZE_HORSE((*&Local_4 + 668)[12], false);
	DECOR_SET_BOOL((*&Local_4 + 668)[12], "CanBeLasso", false);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 668)[12], 0,5f);
	return;
}

bool Function_327(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xED85 / 60805
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
	if (Global_3381 || Function_227(1))
	{
		Function_332(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_333())
		{
			return "";
		}
	}
	if (!Function_330())
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
		Function_235(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_235(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_235(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_235(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_329(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_329(StackVal, StackVal, vVar5, 0, 1, 1);
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

void Function_328(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xF0DD / 61661
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

var Function_329(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xF11A / 61722
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

bool Function_330() //Position: 0xF1B5 / 61877
{
	if (Function_331() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_331() //Position: 0xF1CB / 61899
{
	return Global_12976.f_152;
}

void Function_332(var uParam0, bool bParam1, bool bParam2) //Position: 0xF1D6 / 61910
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

bool Function_333() //Position: 0xF203 / 61955
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

struct<8> Function_334() //Position: 0xF223 / 61987
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	Function_337(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Ranch06_layout");
	Local_4.f_908 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 876)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -792,9257f, 93,313f, 2411,716f, 0.0f, 55,77376f, 0.0f, 32,59972f, 18,00742f, 24,15807f);
	ADD_TO_VOLUME_SET(Local_4.f_908, (*&Local_4 + 876)[0]);
	(*&Local_4 + 876)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -1117,623f, 101,8034f, 2700.0f, 0.0f, 0.0f, 0.0f, 10.0f, 6.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_908, (*&Local_4 + 876)[1]);
	(*&Local_4 + 876)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -882,1529f, 91,35687f, 2405,048f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_4.f_908, (*&Local_4 + 876)[2]);
	(*&Local_4 + 876)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene04Vol", 2, -882,1529f, 91,35687f, 2405,048f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_4.f_908, (*&Local_4 + 876)[3]);
	(*&Local_4 + 876)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene05Vol", 2, -882,1466f, 91,35687f, 2404,981f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_4.f_908, (*&Local_4 + 876)[4]);
	(*&Local_4 + 876)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene06Vol", 2, -884,8926f, 91,35687f, 2379,127f, 0.0f, 0.0f, 0.0f, 23,31192f, 7,200333f, 52,45055f);
	ADD_TO_VOLUME_SET(Local_4.f_908, (*&Local_4 + 876)[5]);
	(*&Local_4 + 876)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVol", 2, -884,8926f, 91,35687f, 2379,127f, 0.0f, 0.0f, 0.0f, 23,31192f, 7,200333f, 52,45055f);
	ADD_TO_VOLUME_SET(Local_4.f_908, (*&Local_4 + 876)[6]);
	Local_4.f_968 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "StayoutVol_set");
	(*&Local_4 + 912)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "henniganSide01", 2, -1015,343f, 101,3961f, 2904,656f, 0.0f, 45.0f, 0.0f, 187,9258f, 100.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 912)[0]);
	(*&Local_4 + 912)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "henniganSide02", 2, -1143,453f, 101,2674f, 2423,791f, 0.0f, 45.0f, 0.0f, 204,4703f, 100.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 912)[1]);
	(*&Local_4 + 912)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "henniganSide03", 2, -970,4504f, 100,3922f, 2698,22f, 0.0f, 90.0f, 0.0f, 277,6032f, 100.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 912)[2]);
	(*&Local_4 + 912)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "henniganSide04", 2, -1037,133f, 100,3922f, 2480,48f, 0.0f, 135.0f, 0.0f, 182,0945f, 100.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 912)[3]);
	(*&Local_4 + 912)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "henniganSide05", 2, -1212,05f, 91,49343f, 2746,837f, 0.0f, 90.0f, 0.0f, 516,4927f, 100.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 912)[4]);
	(*&Local_4 + 912)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "henniganSide06", 2, -1116,241f, 97,03271f, 2963,037f, 0.0f, 0.0f, 0.0f, 123,1054f, 100.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 912)[5]);
	(*&Local_4 + 912)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "plainsBorder01", 2, -1726,639f, 49,64859f, 2280,728f, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 436,0822f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 912)[6]);
	(*&Local_4 + 912)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "plainsBorder02", 2, -2138,501f, 49,64859f, 2050,675f, 0.0f, 90,2328f, 0.0f, 91,25451f, 100.0f, 475.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 912)[7]);
	(*&Local_4 + 912)[8] = CREATE_VOLUME_IN_LAYOUT(Local_4, "plainsBorder03", 2, -2210,629f, 49,64859f, 2176,199f, 0.0f, -9,406216f, 0.0f, 100.0f, 100.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 912)[8]);
	(*&Local_4 + 912)[9] = CREATE_VOLUME_IN_LAYOUT(Local_4, "plainsBorder04", 2, -2049,417f, 49,64859f, 2586,29f, 0.0f, 70.0f, 0.0f, 100.0f, 100.0f, 397,4682f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 912)[9]);
	(*&Local_4 + 912)[10] = CREATE_VOLUME_IN_LAYOUT(Local_4, "plainsBorder05", 2, -1839,675f, 30,93591f, 2573,283f, 0.0f, 136,6737f, 0.0f, 100.0f, 100.0f, 306,7363f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 912)[10]);
	(*&Local_4 + 912)[11] = CREATE_VOLUME_IN_LAYOUT(Local_4, "plainsBorder06", 2, -2232,908f, 49,64859f, 2410,143f, 0.0f, 6,742026f, 0.0f, 100.0f, 100.0f, 300.0f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 912)[11]);
	(*&Local_4 + 912)[12] = CREATE_VOLUME_IN_LAYOUT(Local_4, "plainsBorder07", 2, -1766,417f, 41,16077f, 2141,86f, 0.0f, 40,20626f, 0.0f, 100.0f, 100.0f, 159,2307f);
	ADD_TO_VOLUME_SET(Local_4.f_968, (*&Local_4 + 912)[12]);
	Local_4.f_1008 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "roundupVol_set");
	(*&Local_4 + 972)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "basinEntrance", 2, -1874,411f, 25,45407f, 2079,854f, 0.0f, 69,34929f, 0.0f, 48,2873f, 25.0f, 74,19438f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[0]);
	(*&Local_4 + 972)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "tempCorral", 2, -1819,26f, 24,9136f, 2025,608f, 0.0f, -44,90702f, 0.0f, 30,95195f, 22.0f, 53,92882f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[1]);
	(*&Local_4 + 972)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "stallionEscape", 2, -1964f, 27,1059f, 2126,027f, 0.0f, 0.0f, 0.0f, 50.0f, 25.0f, 50.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[2]);
	(*&Local_4 + 972)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "lookout", 2, -1852f, 35,13725f, 2076.0f, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 15.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[3]);
	(*&Local_4 + 972)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "herdEntranceObjective", 2, -1878,807f, 28,45662f, 2085,32f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[4]);
	(*&Local_4 + 972)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseBreaking_StayOutVolume", 2, -1960,473f, 28,1098f, 2081,119f, 0.0f, -32,94701f, 0.0f, 78,20216f, 58,59838f, 90,4452f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[5]);
	(*&Local_4 + 972)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StallionClearVol", 2, -1799,487f, 24,9136f, 2002,48f, 0.0f, -29,96945f, 0.0f, 4,05956f, 22.0f, 40,31588f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[6]);
	(*&Local_4 + 972)[7] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StallionClearVol1", 2, -1797,276f, 25,46958f, 2006,447f, 0.0f, -43,62702f, 0.0f, 48,54346f, 115,7446f, 122,4483f);
	ADD_TO_VOLUME_SET(Local_4.f_1008, (*&Local_4 + 972)[7]);
	Local_4.f_1032 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "ActorAttachedVolumes_set");
	(*&Local_4 + 1012)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerSmall", 2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1032, (*&Local_4 + 1012)[0]);
	(*&Local_4 + 1012)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nPlayerMed", 2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 20.0f, 20.0f, 20.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1032, (*&Local_4 + 1012)[1]);
	(*&Local_4 + 1012)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CompanionSmall", 2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1032, (*&Local_4 + 1012)[2]);
	(*&Local_4 + 1012)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "GoodHerdPos", 2, 0.0f, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f, 25.0f, 50.0f, 30.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1032, (*&Local_4 + 1012)[3]);
	Local_4.f_1052 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "Gateways_set");
	(*&Local_4 + 1036)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "gw_ArmadilloPlains", 2, -1704,604f, 38,903f, 2602,412f, 0.0f, 0.0f, 0.0f, 25.0f, 15.0f, 25.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1052, (*&Local_4 + 1036)[0]);
	(*&Local_4 + 1036)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "v_BonnieAtArmadillo", 2, -1703,927f, 38,34473f, 2600,79f, 0.0f, 0.0f, 0.0f, 25.0f, 15.0f, 25.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1052, (*&Local_4 + 1036)[1]);
	(*&Local_4 + 1036)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "gw_Last", 2, -1882,504f, 24,41415f, 2124,219f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1052, (*&Local_4 + 1036)[2]);
	Local_4.f_1068 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "VolumeStage01_set");
	(*&Local_4 + 1056)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "createSmallWildHerd", 2, -1047,169f, 100,9823f, 2510,391f, 0.0f, 116,6054f, 0.0f, 605,6017f, 100.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1068, (*&Local_4 + 1056)[0]);
	(*&Local_4 + 1056)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "AmbientKiller", 2, -813,5923f, 93,43295f, 2432f, 0.0f, 77,20818f, 0.0f, 14,18331f, 12,74408f, 8,644003f);
	ADD_TO_VOLUME_SET(Local_4.f_1068, (*&Local_4 + 1056)[1]);
	Local_4.f_1096 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "VolumeStage03_set");
	(*&Local_4 + 1072)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "createCowboys", 2, -1047,169f, 100,9823f, 2510,391f, 0.0f, 116,6054f, 0.0f, 605,6017f, 100.0f, 100.0f);
	ADD_TO_VOLUME_SET(Local_4.f_1096, (*&Local_4 + 1072)[0]);
	(*&Local_4 + 1072)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CowboyTrigger1", 2, -1571,683f, 50,33349f, 2656,292f, 1,767708f, 29,11302f, 0,8602584f, 181,0275f, 19,90147f, 17,01476f);
	ADD_TO_VOLUME_SET(Local_4.f_1096, (*&Local_4 + 1072)[1]);
	(*&Local_4 + 1072)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CowboyTrigger2", 2, -1602,717f, 42,39232f, 2621,942f, -6,390999f, -116,1065f, 3,180882f, 188,8489f, 20,76132f, 17,74989f);
	ADD_TO_VOLUME_SET(Local_4.f_1096, (*&Local_4 + 1072)[2]);
	(*&Local_4 + 1072)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CowboyTrigger3", 2, -1608,634f, 41,65779f, 2620,834f, -3,917096f, -113,2355f, 3,600258f, 188,8489f, 43,54361f, 17,74989f);
	ADD_TO_VOLUME_SET(Local_4.f_1096, (*&Local_4 + 1072)[3]);
	(*&Local_4 + 1072)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CowboyTrigger4", 2, -1624,965f, 39,65584f, 2609,654f, -85,57989f, -91,54893f, 85,57828f, 188,8489f, 43,54361f, 17,74989f);
	ADD_TO_VOLUME_SET(Local_4.f_1096, (*&Local_4 + 1072)[4]);
	Local_4.f_1100 = CREATE_VOLUME_IN_LAYOUT(Local_4, "FirstHerdStayWithin", 2, -1084f, 100,3922f, 2749,416f, 0.0f, 0.0f, 0.0f, 186,6131f, 128,7477f, 309,1529f);
	Local_4.f_1104 = CREATE_VOLUME_IN_LAYOUT(Local_4, "HenSlowVol", 2, -870,7624f, 90,10292f, 2430,515f, 0.0f, 20,39046f, 0.0f, 190,507f, 44,31432f, 85,65087f);
	Local_4.f_1108 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 1112)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -794,0436f, 92,20637f, 2418,532f, 0.0f, 142,9135f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[0], Local_4.f_1108);
	(*&Local_4 + 1112)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd01", -794,0536f, 92,20635f, 2418,546f, 0.0f, 142,9135f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[1], Local_4.f_1108);
	(*&Local_4 + 1112)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart01", -789,0842f, 93,34946f, 2411,897f, 0.0f, -221,6629f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[2], Local_4.f_1108);
	(*&Local_4 + 1112)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd01", -789,0438f, 93,34946f, 2411,931f, 0.0f, -578,801f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[3], Local_4.f_1108);
	(*&Local_4 + 1112)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DrewStart01", -795,9257f, 92,19131f, 2419,149f, 0.0f, -217,7596f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[4], Local_4.f_1108);
	(*&Local_4 + 1112)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "nDrewEnd01", -795,9257f, 92,19131f, 2419,149f, 0.0f, -217,7596f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[5], Local_4.f_1108);
	(*&Local_4 + 1112)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -813,9315f, 93,42333f, 2434,447f, 0.0f, 68,4753f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[6], Local_4.f_1108);
	(*&Local_4 + 1112)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "DrewHorseStart01", -811,9912f, 93,06895f, 2430,392f, 0.0f, 90,77387f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[7], Local_4.f_1108);
	(*&Local_4 + 1112)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "BonnieHorseStart01", -812,2147f, 93,36469f, 2427,071f, 0.0f, 50,44261f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[8], Local_4.f_1108);
	(*&Local_4 + 1112)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "GlassRemoveFlag", -791,7506f, 94,2957f, 2399,758f, 0.0f, 50,44261f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[9], Local_4.f_1108);
	(*&Local_4 + 1112)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerWalkOutStart", -787,0349f, 93,62809f, 2408,852f, 0.0f, 142,9135f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[10], Local_4.f_1108);
	(*&Local_4 + 1112)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerWalkOutEnd", -794,0437f, 92,20637f, 2418,532f, 0.0f, 142,9135f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[11], Local_4.f_1108);
	(*&Local_4 + 1112)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionWalkOutStart", -786,4108f, 93,62809f, 2407,964f, 0.0f, -221,6629f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[12], Local_4.f_1108);
	(*&Local_4 + 1112)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionWalkOutEnd", -795,8934f, 92,20295f, 2421,408f, 0.0f, -578,801f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[13], Local_4.f_1108);
	(*&Local_4 + 1112)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "DrewWalkOutStart", -788,2632f, 93,45126f, 2410,632f, 0.0f, -217,7596f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[14], Local_4.f_1108);
	(*&Local_4 + 1112)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "DrewWalkOutEnd", -800,0776f, 92,27276f, 2423,61f, 0.0f, -227,2474f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[15], Local_4.f_1108);
	Local_4.f_1180 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 1184)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -1117,705f, 101,8242f, 2701,706f, 0.0f, 54,19597f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[0], Local_4.f_1180);
	(*&Local_4 + 1184)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd02", -1117,741f, 101,8331f, 2701,741f, 0.0f, -15,80709f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[1], Local_4.f_1180);
	(*&Local_4 + 1184)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -1120,978f, 102,5396f, 2699,021f, 0.0f, -87,97518f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[2], Local_4.f_1180);
	(*&Local_4 + 1184)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd02", -1120,922f, 102,5315f, 2699,078f, 0.0f, -47,64799f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[3], Local_4.f_1180);
	(*&Local_4 + 1184)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "DrewStart02", -1116f, 101,3961f, 2698,364f, 0.0f, -265,6383f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[4], Local_4.f_1180);
	(*&Local_4 + 1184)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "nDrewEnd02", -883,6484f, 91,27023f, 2403,87f, 0.0f, -265,6383f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[5], Local_4.f_1180);
	(*&Local_4 + 1184)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "BrokeHorseStart02", -1113,549f, 101,3961f, 2700.0f, 0.0f, -300,4377f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[6], Local_4.f_1180);
	(*&Local_4 + 1184)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "BrokeHorseEnd02", -891,094f, 91,35687f, 2391,094f, 0.0f, -300,4377f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1184)[7], Local_4.f_1180);
	Local_4.f_1220 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 1224)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -883,5587f, 91,07737f, 2407,334f, 0.0f, 2,010403f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[0], Local_4.f_1220);
	(*&Local_4 + 1224)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd03", -870,496f, 91,28965f, 2406,694f, 0.0f, 167,4846f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[1], Local_4.f_1220);
	(*&Local_4 + 1224)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -881,2505f, 91,14787f, 2405,549f, 0.0f, 30,03304f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[2], Local_4.f_1220);
	(*&Local_4 + 1224)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd03", -871,6049f, 90,77592f, 2410,153f, 0.0f, 146,0152f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[3], Local_4.f_1220);
	(*&Local_4 + 1224)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "HERDSTART03", -1780f, 35,13724f, 2672.0f, 0.0f, 11,61801f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[4], Local_4.f_1220);
	(*&Local_4 + 1224)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "nHERDEND03", -1828,785f, 32,98904f, 2484,184f, 0.0f, 11,61801f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[5], Local_4.f_1220);
	(*&Local_4 + 1224)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "RIDGEWOODEND03", -1816f, 30,11763f, 2576.0f, 0.0f, 11,61801f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[6], Local_4.f_1220);
	(*&Local_4 + 1224)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "DrewStart03", -884,8414f, 91,33109f, 2400,612f, 0.0f, 395,9993f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[7], Local_4.f_1220);
	(*&Local_4 + 1224)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "nDrewEnd03", -884,8414f, 91,33109f, 2400,612f, 0.0f, 33,4291f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[8], Local_4.f_1220);
	(*&Local_4 + 1224)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "BrokeHorseStart03", -883,1021f, 91,30711f, 2401,92f, 0.0f, 164,2104f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[9], Local_4.f_1220);
	(*&Local_4 + 1224)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "BrokeHorseEnd03", -883,1021f, 91,30711f, 2401,92f, 0.0f, 164,2104f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[10], Local_4.f_1220);
	(*&Local_4 + 1224)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "DrewDoorLeft03", -887,2318f, 91,33109f, 2401,356f, 0.0f, 395,9993f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[11], Local_4.f_1220);
	(*&Local_4 + 1224)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "DrewDoorRight03", -882,9f, 91,33109f, 2398,786f, 0.0f, 395,9993f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1224)[12], Local_4.f_1220);
	Local_4.f_1280 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	(*&Local_4 + 1284)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -1708,034f, 38,05449f, 2608,568f, 0.0f, 123,3466f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[0], Local_4.f_1280);
	(*&Local_4 + 1284)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd04", -1795,801f, 28,10635f, 2644,133f, 0.0f, 92,77558f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[1], Local_4.f_1280);
	(*&Local_4 + 1284)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart04", -1708,518f, 37,92393f, 2607,836f, 0.0f, 117,2255f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[2], Local_4.f_1280);
	(*&Local_4 + 1284)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd04", -1793,654f, 28,3938f, 2640,974f, 0.0f, 91,43393f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[3], Local_4.f_1280);
	(*&Local_4 + 1284)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "HerdStart04", -1956.0f, 17,06666f, 2524.0f, -2,158328f, 246,0727f, 0,5248157f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[4], Local_4.f_1280);
	(*&Local_4 + 1284)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "HerdGoal04", -1895,964f, 24,50791f, 2448,022f, 46,66745f, -88,79675f, -48,10932f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[5], Local_4.f_1280);
	(*&Local_4 + 1284)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowEnd01", -1788,269f, 28,97482f, 2640,404f, 0.0f, -228,5982f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[6], Local_4.f_1280);
	(*&Local_4 + 1284)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowEnd02", -1780,543f, 30,00591f, 2642,318f, 0.0f, 111,2132f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[7], Local_4.f_1280);
	(*&Local_4 + 1284)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowEnd03", -1783,764f, 29,64814f, 2643,629f, 0.0f, -237,392f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[8], Local_4.f_1280);
	(*&Local_4 + 1284)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowEnd04", -1787,828f, 28,98965f, 2643,773f, 0.0f, 121,7085f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[9], Local_4.f_1280);
	(*&Local_4 + 1284)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowEnd05", -1784,357f, 29,64814f, 2639,032f, 0.0f, 122,9342f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[10], Local_4.f_1280);
	(*&Local_4 + 1284)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowEnd06", -1780,261f, 30,10578f, 2639,298f, 0.0f, 116,537f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[11], Local_4.f_1280);
	(*&Local_4 + 1284)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "HerdEnd0401", -1964.0f, 17,06666f, 2524.0f, 0.0f, 45.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[12], Local_4.f_1280);
	(*&Local_4 + 1284)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "HerdEnd0402", -1960.0f, 17,22752f, 2520.0f, 0.0f, 45.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[13], Local_4.f_1280);
	(*&Local_4 + 1284)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "HerdEnd0403", -1960.0f, 17,06666f, 2524.0f, 0.0f, 45.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[14], Local_4.f_1280);
	(*&Local_4 + 1284)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "HerdEnd0404", -1960.0f, 17,06666f, 2528.0f, 0.0f, 45.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[15], Local_4.f_1280);
	(*&Local_4 + 1284)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "HerdEnd0405", -1964.0f, 17,06666f, 2528.0f, 0.0f, 45.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[16], Local_4.f_1280);
	(*&Local_4 + 1284)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "HerdEnd0406", -1956.0f, 17,06666f, 2528.0f, 0.0f, 45.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[17], Local_4.f_1280);
	(*&Local_4 + 1284)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowGoal", -1708f, 38,14902f, 2624.0f, 0.0f, 249,4697f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[18], Local_4.f_1280);
	(*&Local_4 + 1284)[19] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowEndEnd01", -1788,269f, 28,97482f, 2640,404f, 0.0f, -265,0558f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[19], Local_4.f_1280);
	(*&Local_4 + 1284)[20] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowEndEnd02", -1784,357f, 29,64814f, 2639,032f, 0.0f, -265,0558f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[20], Local_4.f_1280);
	(*&Local_4 + 1284)[21] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowEndEnd03", -1780,261f, 30,10578f, 2639,298f, 0.0f, -265,0558f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[21], Local_4.f_1280);
	(*&Local_4 + 1284)[22] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowEndEnd04", -1787,828f, 28,98965f, 2643,773f, 0.0f, -265,0558f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[22], Local_4.f_1280);
	(*&Local_4 + 1284)[23] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowEndEnd05", -1783,764f, 29,64814f, 2643,629f, 0.0f, -265,0558f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[23], Local_4.f_1280);
	(*&Local_4 + 1284)[24] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowEndEnd06", -1780,543f, 30,00591f, 2642,318f, 0.0f, -265,0558f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[24], Local_4.f_1280);
	(*&Local_4 + 1284)[25] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowStart01", -1667,745f, 39,15346f, 2587,919f, 0.0f, -228,5982f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[25], Local_4.f_1280);
	(*&Local_4 + 1284)[26] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowStart02", -1669,481f, 39,15664f, 2585,263f, 0.0f, -228,5982f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[26], Local_4.f_1280);
	(*&Local_4 + 1284)[27] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowStart03", -1654,874f, 40,02052f, 2610,874f, 0.0f, -284,0618f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[27], Local_4.f_1280);
	(*&Local_4 + 1284)[28] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowStart04", -1654,164f, 39,15292f, 2608.0f, -1,391641f, -285,6248f, -2,239668f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[28], Local_4.f_1280);
	(*&Local_4 + 1284)[29] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowStart05", -1664f, 41,22569f, 2608.0f, -1,391641f, -285,6248f, -2,239668f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[29], Local_4.f_1280);
	(*&Local_4 + 1284)[30] = CREATE_POINT_IN_LAYOUT(Local_4, "HenCowStart06", -1664f, 40,71531f, 2604.0f, -1,391641f, -285,6248f, -2,239668f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1284)[30], Local_4.f_1280);
	Local_4.f_1412 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene05Set", Local_4, 8, 0);
	(*&Local_4 + 1416)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart05", -1854,329f, 24,63155f, 2056,999f, 0.0f, -41,18964f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[0], Local_4.f_1412);
	(*&Local_4 + 1416)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerMid05", -1842,749f, 24,95713f, 2044,531f, 0.0f, -54,96458f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[1], Local_4.f_1412);
	(*&Local_4 + 1416)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd05", -1823,377f, 24,84795f, 2027,847f, 0.0f, -38,21621f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[2], Local_4.f_1412);
	(*&Local_4 + 1416)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart05", -1855,809f, 24,44505f, 2055,001f, 0.0f, -10,64959f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[3], Local_4.f_1412);
	(*&Local_4 + 1416)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionMid05", -1841,965f, 24,99035f, 2045,234f, -4,814044f, -48,726f, 2,09958f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[4], Local_4.f_1412);
	(*&Local_4 + 1416)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd05", -1822,372f, 24,85507f, 2028,563f, 0.0f, -54,18762f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[5], Local_4.f_1412);
	(*&Local_4 + 1416)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "HenniganCowboyStart01", -1803,485f, 25,1771f, 2002,489f, 0.0f, 290,7244f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[6], Local_4.f_1412);
	(*&Local_4 + 1416)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "HenniganCowboyStart02", -1798,97f, 25,09655f, 1993,416f, 0.0f, 182,105f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[7], Local_4.f_1412);
	(*&Local_4 + 1416)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "HenniganCowboyStart03", -1795,448f, 25,78157f, 2000,365f, 0.0f, 118,2913f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[8], Local_4.f_1412);
	(*&Local_4 + 1416)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "HenniganCowboyStart04", -1794,914f, 25,78991f, 2004,483f, -2,647841f, 114,8673f, -2,180698f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[9], Local_4.f_1412);
	(*&Local_4 + 1416)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "HenniganCowboyStart05", -1793,881f, 25,25726f, 1997,619f, 0.0f, 135,121f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[10], Local_4.f_1412);
	(*&Local_4 + 1416)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "HenniganCowboyStart06", -1791,531f, 25,52722f, 1996,423f, 0.0f, 115,9662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[11], Local_4.f_1412);
	(*&Local_4 + 1416)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "HerdStart0401", -1805,628f, 25,04616f, 2016,437f, 0.0f, 108,4979f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[12], Local_4.f_1412);
	(*&Local_4 + 1416)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "HerdStart0402", -1808,037f, 25,01494f, 2009,817f, 0.0f, -169,2195f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[13], Local_4.f_1412);
	(*&Local_4 + 1416)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "HerdStart0403", -1801,643f, 25,23266f, 2011,429f, 0.0f, 16,42324f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[14], Local_4.f_1412);
	(*&Local_4 + 1416)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "HerdStart0404", -1806,699f, 25,15426f, 2007,334f, 0.0f, -45,91245f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[15], Local_4.f_1412);
	(*&Local_4 + 1416)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "HerdStart0405", -1803,879f, 25,1062f, 2014,857f, 0.0f, -25,4872f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[16], Local_4.f_1412);
	(*&Local_4 + 1416)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "HerdStart0406", -1808,79f, 24,81205f, 2014,584f, 0.0f, -39,2089f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[17], Local_4.f_1412);
	(*&Local_4 + 1416)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "StallionEnd05", -1792,066f, 24,44232f, 1982,987f, 0.0f, -19,16742f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[18], Local_4.f_1412);
	(*&Local_4 + 1416)[19] = CREATE_POINT_IN_LAYOUT(Local_4, "HenniganCowboyStart07", -1864,584f, 31,73415f, 2086,785f, 0.0f, 88,5146f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[19], Local_4.f_1412);
	(*&Local_4 + 1416)[20] = CREATE_POINT_IN_LAYOUT(Local_4, "HenniganCowboyStart08", -1883,861f, 28,93203f, 2062,141f, 0.0f, 182,2251f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[20], Local_4.f_1412);
	(*&Local_4 + 1416)[21] = CREATE_POINT_IN_LAYOUT(Local_4, "StallionStart05", -1799,746f, 25,04407f, 2003,091f, 0.0f, -19,16742f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[21], Local_4.f_1412);
	(*&Local_4 + 1416)[22] = CREATE_POINT_IN_LAYOUT(Local_4, "Stallion04CutStart", -1845,798f, 25,07938f, 2047,074f, 0.0f, -56,62883f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[22], Local_4.f_1412);
	(*&Local_4 + 1416)[23] = CREATE_POINT_IN_LAYOUT(Local_4, "Herd04CutStart1", -1846,52f, 24,93593f, 2049,428f, 0.0f, -56,62883f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[23], Local_4.f_1412);
	(*&Local_4 + 1416)[24] = CREATE_POINT_IN_LAYOUT(Local_4, "Herd04CutStart2", -1847,938f, 25,08555f, 2047,568f, 0.0f, -56,62883f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[24], Local_4.f_1412);
	(*&Local_4 + 1416)[25] = CREATE_POINT_IN_LAYOUT(Local_4, "Herd04CutStart3", -1849,01f, 24,8107f, 2050,401f, 0.0f, -56,62883f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[25], Local_4.f_1412);
	(*&Local_4 + 1416)[26] = CREATE_POINT_IN_LAYOUT(Local_4, "Herd04CutStart4", -1850,477f, 24,86396f, 2049,837f, 0.0f, -56,62883f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[26], Local_4.f_1412);
	(*&Local_4 + 1416)[27] = CREATE_POINT_IN_LAYOUT(Local_4, "Herd04CutStart5", -1849,56f, 24,69223f, 2052,129f, 0.0f, -56,62883f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1416)[27], Local_4.f_1412);
	Local_4.f_1532 = CREATE_OBJECTSET_IN_LAYOUT("Stage03FlagsSet", Local_4, 8, 0);
	*(&Local_4 + 1536[06]) = { -1885,48f, 24,28943f, 2131,324f };
	*(&Local_4 + 1536[06] + 12) = { 0.0f, 147,9673f, 0.0f };
	(*&Local_4 + 1588)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Moira", -1885,48f, 24,28943f, 2131,324f, 0.0f, 147,9673f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1588)[0], Local_4.f_1532);
	*(&Local_4 + 1536[16]) = { -1808.0f, 23,09019f, 1936f };
	*(&Local_4 + 1536[16] + 12) = { 0.0f, 0.0f, 0.0f };
	(*&Local_4 + 1588)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Cowboys", -1808.0f, 23,09019f, 1936f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1588)[1], Local_4.f_1532);
	Local_4.f_1600 = CREATE_OBJECTSET_IN_LAYOUT("PlayerSquadPosSet", Local_4, 8, 0);
	*(&Local_4 + 1604[06]) = { 3.0f, 0.0f, 1,8f };
	*(&Local_4 + 1604[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerSquadSlot02", 3.0f, 0.0f, 1,8f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_1600);
	*(&Local_4 + 1604[16]) = { 0.0f, 0.0f, 3.0f };
	*(&Local_4 + 1604[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerSquadSlot03", 0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_1600);
	*(&Local_4 + 1604[26]) = { -3.0f, 0.0f, 1,8f };
	*(&Local_4 + 1604[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerSquadSlot04", -3.0f, 0.0f, 1,8f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_1600);
	Local_4.f_1680 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	(*&Local_4 + 1684)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartLast", -1883,266f, 24,30063f, 2116,666f, 0.0f, -186,6825f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[0], Local_4.f_1680);
	(*&Local_4 + 1684)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEndLast", -1883,145f, 24,30477f, 2116,302f, 0.0f, -193,5071f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[1], Local_4.f_1680);
	(*&Local_4 + 1684)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStartLast", -1880,592f, 24,44632f, 2117,32f, 0.0f, 66,80524f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[2], Local_4.f_1680);
	(*&Local_4 + 1684)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEndLast", -1883,043f, 24,26879f, 2118,579f, 0.0f, -20,14292f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[3], Local_4.f_1680);
	(*&Local_4 + 1684)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CowboyEndLast1", -1858,937f, 24,38991f, 2057,462f, 0.0f, -230,1409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[4], Local_4.f_1680);
	(*&Local_4 + 1684)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CowboyEndLast2", -1859,708f, 24,38991f, 2056,175f, 0.0f, -230,1409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[5], Local_4.f_1680);
	(*&Local_4 + 1684)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CowboyEndLast3", -1851,893f, 24,57966f, 2053,899f, 0.0f, -230,1409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[6], Local_4.f_1680);
	(*&Local_4 + 1684)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CowboyEndLast4", -1852,816f, 24,57966f, 2052,129f, 0.0f, -230,1409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[7], Local_4.f_1680);
	(*&Local_4 + 1684)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "CowboyEndLast5", -1845,075f, 25,08248f, 2047,959f, 0.0f, -230,1409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[8], Local_4.f_1680);
	(*&Local_4 + 1684)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "CowboyEndLast6", -1846,364f, 25,07695f, 2046,38f, 0.0f, -230,1409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[9], Local_4.f_1680);
	(*&Local_4 + 1684)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "HorseEndLast1", -1855,413f, 24,44505f, 2055,978f, 0.0f, -230,1409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[10], Local_4.f_1680);
	(*&Local_4 + 1684)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "HorseEndLast2", -1856,118f, 24,44505f, 2054,242f, 0.0f, -230,1409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[11], Local_4.f_1680);
	(*&Local_4 + 1684)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "HorseEndLast3", -1848,469f, 24,75199f, 2051,2f, 0.0f, -230,1409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[12], Local_4.f_1680);
	(*&Local_4 + 1684)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "HorseEndLast4", -1849,345f, 24,84705f, 2049,907f, 0.0f, -230,1409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[13], Local_4.f_1680);
	(*&Local_4 + 1684)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "HorseEndLast5", -1842,749f, 24,95713f, 2044,531f, 0.0f, -230,1409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[14], Local_4.f_1680);
	(*&Local_4 + 1684)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "CowboyGotoLast1", -1886,677f, 24,11441f, 2151,479f, 0.0f, 66,80524f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[15], Local_4.f_1680);
	(*&Local_4 + 1684)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "CowboyGotoLast2", -1882,646f, 24,30276f, 2149,091f, 0.0f, 66,80524f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[16], Local_4.f_1680);
	(*&Local_4 + 1684)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "CowboyGotoLast3", -1887,928f, 24,28957f, 2146,269f, 0.0f, 66,80524f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[17], Local_4.f_1680);
	(*&Local_4 + 1684)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "CowboyGotoLast4", -1887,641f, 24,20528f, 2142,191f, 0.0f, 66,80524f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[18], Local_4.f_1680);
	(*&Local_4 + 1684)[19] = CREATE_POINT_IN_LAYOUT(Local_4, "CowboyGotoLast5", -1885,896f, 24,08564f, 2159,586f, 0.0f, 66,80524f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[19], Local_4.f_1680);
	(*&Local_4 + 1684)[20] = CREATE_POINT_IN_LAYOUT(Local_4, "CowboyGotoLast6", -1885,947f, 24,11824f, 2163,418f, 0.0f, 66,80524f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[20], Local_4.f_1680);
	(*&Local_4 + 1684)[21] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionDepartsLast", -1885,312f, 24,27216f, 2134,89f, 0.0f, -178,4098f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[21], Local_4.f_1680);
	Local_4.f_1776 = CREATE_GRINGO_IN_LAYOUT(Local_4, "GCowboy4", "Sit_Ground_Smoke_Pipe", -1657,778f, 40,0746f, 2608.0f, 0.0f, 150,2448f, 0.0f);
	Local_4.f_1780 = CREATE_GRINGO_IN_LAYOUT(Local_4, "GCowboy3", "sit_ground_play_harmonica", -1660f, 40,7295f, 2606,023f, 0.0f, 142,0114f, 0.0f);
	Local_4.f_1784 = CREATE_GRINGO_IN_LAYOUT(Local_4, "GCowboy2", "stand_eat_fruit", -1652f, 39,72658f, 2590,424f, 0.0f, -159,7037f, 0.0f);
	Local_4.f_1788 = CREATE_GRINGO_IN_LAYOUT(Local_4, "GCowboy1", "stand_peeing_b_any", -1656.0f, 39,72988f, 2586,647f, 0.0f, -13,37707f, 0.0f);
	Local_4.f_1792 = CREATE_GRINGO_IN_LAYOUT(Local_4, "give_lasso", "give_lasso", -794,2725f, 92,20924f, 2418,455f, 0.0f, -43,93177f, 0.0f);
}

void ÌE+ÄÄ(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24) //Position: 0x128A2 / 75938
{
	int iVar169;
	
	PatchTrapF();
	return;
	return StackVal, StackVal != StackVal - 12864 * 10795;
	((StackVal - StackVal))->f_66 = StackVal;
	PatchTrap1();
	*(-Vector(StackVal, StackVal, StackVal) != 1 * 10668 - 15228 - 12678) = StackVal;
}

vector3 ÿDúïu,Gþ:D,;ocs_04_Horse5Path   p   ÄàÉõAÌ¸(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69) //Position: 0x13696 / 79510
{
	int iVar124;
	
	return StackVal, StackVal, StackVal;
	StackVal->f_64199 = StackVal;
	return StackVal;
	4294953815->f_64107 = 4;
	Global_4311617 = 0.0f;
	(StackVal != StackVal)->f_64066 = StackVal;
	PatchTrap3();
	4294953008->f_64036 = 3;
	return;
	Unknown_Function();
	4294953001->f_63975 = 4294953001;
	PatchTrapD();
}

void Function_337(int iParam0, int iParam1) //Position: 0x14000 / 81920
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

bool Function_338() //Position: 0x14049 / 81993
{
	Function_319(&Local_4 + 152, 976, 2, 0);
	Function_319(&Local_4 + 152, 977, 2, 0);
	Function_319(&Local_4 + 152, 608, 2, 0);
	if (Function_310(&Local_4 + 152))
	{
		return 1;
	}
	return 0;
}

int Function_339() //Position: 0x14083 / 82051
{
	switch (iLocal_532)
	{
		case 0x00000063:
			Function_345(0);
			Function_342(1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			uLocal_801 = (*&Local_4 + 876)[0];
			GET_OBJECT_POSITION((*&Local_4 + 1112)[0], &vLocal_762);
			Function_340(StackVal, StackVal, bLocal_485, vLocal_762, &uLocal_801, 0, 0, 0, 0, 1, 1);
			Function_361(&iLocal_622, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000002:
			iLocal_685 = 0;
			iLocal_684 = 0;
			Function_342(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			TASK_STAND_STILL(bLocal_624, -1.0f, 0, 0);
			TASK_STAND_STILL(bLocal_575, -1.0f, 0, 0);
			GET_OBJECT_POSITION((*&Local_4 + 1224)[0], &vLocal_762);
			Function_340(StackVal, StackVal, bLocal_485, vLocal_762, &uLocal_801, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			RESET_ACTOR_GAITS(Global_34573, 0);
			RESET_ACTOR_GAITS(GET_MOUNT(Global_34573), 0);
			Function_342(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			iLocal_685 = 0;
			iLocal_623 = 0;
			iLocal_684 = 0;
			GET_OBJECT_POSITION((*&Local_4 + 1684)[0], &vLocal_762);
			Function_340(StackVal, StackVal, bLocal_485, vLocal_762, &uLocal_801, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_340(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x14199 / 82329
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
				Function_341(bVar1, bParam0);
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

void Function_341(bool bParam0, bool bParam1) //Position: 0x14407 / 82951
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

void Function_342(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x1447C / 83068
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
	Function_239();
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
	if (Function_312(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_312(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

var Function_343() //Position: 0x14725 / 83749
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

vector3 Function_344(bool bParam0) //Position: 0x147A4 / 83876
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_345(bool bParam0) //Position: 0x147B5 / 83893
{
	Function_346(0, 0x40400000);
	Function_193();
	Function_192();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_346(bool bParam0, float fParam1) //Position: 0x147E9 / 83945
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
	Function_348();
	Function_347();
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

void Function_347() //Position: 0x148E7 / 84199
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_348() //Position: 0x14919 / 84249
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

bool Function_349() //Position: 0x14A16 / 84502
{
	switch (iLocal_788)
	{
		case 0x00000006:
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_575)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_575));
			}
			if (!IS_ACTOR_VALID(bLocal_624))
			{
				Function_326();
				bLocal_624 = (*&Local_4 + 668)[02];
				DECOR_SET_BOOL(bLocal_624, "bNoInjuryEjection", true);
				SET_ALLOW_RIDE_BY_PLAYER(bLocal_624, 0);
				TASK_PRIORITY_SET(bLocal_624, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_624, true);
				SET_ACTOR_FACTION(bLocal_624, 21);
				bLocal_625 = (*&Local_4 + 668)[12];
				TASK_PRIORITY_SET(bLocal_625, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_625, true);
				SET_ACTOR_FACTION(bLocal_625, 21);
			}
			if (!iLocal_586[4])
			{
				Function_307(bLocal_575, (*&Local_4 + 1684)[0], 1, 1, 1);
				Function_307(bLocal_574, (*&Local_4 + 1684)[2], 1, 1, 1);
				Function_307(bLocal_624, (*&Local_4 + 1684)[2], 1, 1, 1);
			}
			iLocal_788 = 7;
			break;
		
		case 0x00000007:
			if (!IS_ACTOR_VALID((*&Local_4 + 736)[02]))
			{
				Function_355();
				if (IS_ACTOR_VALID(bLocal_575))
				{
					DESTROY_ACTOR(bLocal_575);
				}
				bLocal_575 = (*&Local_4 + 736)[02];
				Function_353(bLocal_575, 0);
				if (!GET_ACTOR_ENUM(bLocal_575) != 992)
				{
					Function_76(&Global_12976 + 36 + 20, 2);
					Function_352(bLocal_575, 0);
				}
				Function_307(bLocal_575, (*&Local_4 + 1684)[0], 1, 1, 1);
				ANIMAL_ACTOR_SET_DOCILE(bLocal_575, 1);
				ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_575, false);
			}
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				ACTOR_MOUNT_ACTOR(Global_34573, bLocal_575);
			}
			if (!IS_ACTOR_RIDING(bLocal_574))
			{
				ACTOR_MOUNT_ACTOR(bLocal_574, bLocal_624);
			}
			iLocal_788 = 8;
			break;
		
		case 0x00000008:
			if (!iLocal_586[4])
			{
				Function_350(Global_34573, (*&Local_4 + 1684)[0], 1, 1, 1);
				Function_350(bLocal_574, (*&Local_4 + 1684)[2], 1, 1, 1);
			}
			TASK_STAND_STILL(bLocal_574, -1.0f, 0, 0);
			iLocal_788 = 9;
			break;
		
		case 0x00000009:
			iLocal_788 = 104;
			return 1;
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

void Function_350(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x14BFC / 84988
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
				Function_351(StackVal, StackVal, StackVal, bParam0, vVar0, iParam2, iParam3, iParam4);
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

void Function_351(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0x14D13 / 85267
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

void Function_352(bool bParam0, bool bParam1) //Position: 0x14DCC / 85452
{
	DECOR_SET_OBJECT(Global_34573, "SettingPlayerHorse", bParam0);
	DECOR_SET_BOOL(Global_34573, "NewPlayerHorse_Wipe", bParam1);
	return;
}

void Function_353(bool bParam0, int iParam1) //Position: 0x14E0F / 85519
{
	Function_354(iParam1);
	Global_12976.f_72 = bParam0;
	return;
}

void Function_354(bool bParam0) //Position: 0x14E21 / 85537
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

void Function_355() //Position: 0x14FD7 / 85975
{
	Local_4.f_748 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "herdHorseWild02set", 0);
	Local_4.f_752 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "herdHorseWild02"));
	(*&Local_4 + 736)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "stallion", 978, -1832f, 26,10194f, 2676.0f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_748, (*&Local_4 + 736)[02]);
	SQUAD_JOIN((*&Local_4 + 736)[02], Local_4.f_752);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 736)[02], false);
	SET_ACTOR_RIDEABLE((*&Local_4 + 736)[02], 0);
	DECOR_SET_FLOAT((*&Local_4 + 736)[02], "HorseCaptureBoltTime", 1000.0f);
	TASK_STAND_STILL((*&Local_4 + 736)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 736)[02], 1);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 736)[02], true);
	Function_356((*&Local_4 + 736)[02]);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 736)[02], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 736)[02], true);
	return;
}

void Function_356(bool bParam0) //Position: 0x150F7 / 86263
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

int Function_357() //Position: 0x1512B / 86315
{
	switch (iLocal_532)
	{
		case 0x00000063:
			Function_360(&iLocal_534);
			if (IS_ACTOR_VALID(bLocal_574))
			{
				Function_358(bLocal_574, &iLocal_534);
			}
			Function_358(Global_34573, &iLocal_534);
			return 1;
			break;
		
		case 0x00000001:
			Function_360(&iLocal_534);
			if (IS_ACTOR_VALID(bLocal_574))
			{
				Function_358(bLocal_574, &iLocal_534);
			}
			if (IS_ACTOR_VALID(bLocal_624))
			{
				Function_358(bLocal_624, &iLocal_534);
			}
			if (IS_ACTOR_VALID(bLocal_575))
			{
				Function_358(bLocal_575, &iLocal_534);
				ANIMAL_ACTOR_SET_DOCILE(bLocal_575, 1);
				ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_575, false);
			}
			if (IS_ACTOR_VALID(bLocal_656))
			{
				Function_358(bLocal_656, &iLocal_534);
				ANIMAL_ACTOR_SET_DOCILE(bLocal_656, 1);
				ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_656, false);
			}
			Function_358(Global_34573, &iLocal_534);
			break;
	}
	return 0;
}

void Function_358(bool bParam0, int iParam1) //Position: 0x151E2 / 86498
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = Function_359(bParam0, iParam1);
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

int Function_359(int iParam0, int iParam1) //Position: 0x15228 / 86568
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

void Function_360(int iParam0) //Position: 0x1525C / 86620
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

void Function_361(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x152AA / 86698
{
	if (*iParam0 != iParam1)
	{
		*iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_362(*iParam0), iParam2, iParam3, iParam4);
	}
}

var Function_362(int iParam0) //Position: 0x152CE / 86734
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

int Function_363() //Position: 0x1580B / 88075
{
	Function_319(&Local_4 + 556, 978, 2, 0);
	Function_319(&Local_4 + 556, 976, 2, 0);
	Function_319(&Local_4 + 556, 977, 2, 0);
	Function_319(&Local_4 + 556, 170, 2, 0);
	Function_319(&Local_4 + 556, 171, 2, 0);
	Function_319(&Local_4 + 556, 172, 2, 0);
	Function_319(&Local_4 + 556, 173, 2, 0);
	Function_319(&Local_4 + 556, 174, 2, 0);
	Function_319(&Local_4 + 556, 175, 2, 0);
	if (Function_310(&Local_4 + 556))
	{
		return 1;
	}
	return 0;
}

bool Function_364(int iParam0) //Position: 0x15897 / 88215
{
	if (!Function_81(iParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[iParam0]), 4);
}

void Function_365() //Position: 0x158B3 / 88243
{
	Function_366(&(Local_845[017]));
	Function_366(&(Local_845[117]));
	Function_366(&(Local_845[217]));
	Function_366(&(Local_845[317]));
	Function_366(&(Local_845[417]));
	Function_366(&(Local_845[517]));
	return;
}

void Function_366(int iParam0) //Position: 0x158EF / 88303
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

bool Function_367(int iParam0) //Position: 0x159A3 / 88483
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_345(0);
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
			}
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_574, GET_ACTOR_MAX_HEALTH(bLocal_574));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_303();
			iLocal_572 = Global_30628[2];
			if (!Function_364(iLocal_572))
			{
				Function_368(&Local_486);
			}
			Function_307(Global_34573, (*&Local_4 + 1112)[0], 1, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			if (!iLocal_586[0])
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				iLocal_572 = Global_30628[2];
				if (!Function_364(iLocal_572))
				{
					Function_368(&Local_486);
				}
				Function_307(Global_34573, (*&Local_4 + 1184)[1], 1, 1, 1);
			}
			Function_345(0);
			SET_ACTOR_HEALTH(bLocal_574, GET_ACTOR_MAX_HEALTH(bLocal_574));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_303();
			return 1;
			break;
		
		case 0x00000002:
			if (!iLocal_586[1])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				iLocal_572 = Global_30628[2];
				if (!Function_364(iLocal_572))
				{
					Function_368(&Local_486);
				}
				Function_307(Global_34573, (*&Local_4 + 1224)[0], 1, 1, 1);
			}
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_574, GET_ACTOR_MAX_HEALTH(bLocal_574));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_303();
			return 1;
			break;
		
		case 0x00000003:
			SET_ACTOR_HEALTH(bLocal_574, GET_ACTOR_MAX_HEALTH(bLocal_574));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Function_303();
			iLocal_572 = Global_30628[0];
			if (!Function_364(iLocal_572))
			{
				Function_368(&Local_486);
			}
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			if (!iLocal_586[2])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_307(Global_34573, (*&Local_4 + 1284)[0], 1, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000004:
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_574, GET_ACTOR_MAX_HEALTH(bLocal_574));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			iLocal_572 = Global_30628[0];
			if (!Function_364(iLocal_572))
			{
				Function_368(&Local_486);
			}
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_303();
			if (!iLocal_586[3])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				Function_350(Global_34573, (*&Local_4 + 1416)[2], 1, 1, 1);
			}
			Function_221(&iLocal_577);
			iLocal_533 = 1;
			return 1;
			break;
		
		case 0x00000065:
			Function_345(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_574, GET_ACTOR_MAX_HEALTH(bLocal_574));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_303();
			iLocal_572 = Global_30628[0];
			if (!Function_364(iLocal_572))
			{
				Function_368(&Local_486);
			}
			if (!iLocal_586[4])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(1.0f, 1f, 1);
				}
				Function_350(Global_34573, (*&Local_4 + 1684)[0], 1, 1, 1);
			}
			Function_221(&iLocal_577);
			iLocal_533 = 1;
			return 1;
			break;
		
		case 0x00000062:
			return 0;
			break;
	}
	return 0;
}

void Function_368(int iParam0) //Position: 0x15CBB / 89275
{
	if (!Function_279(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_179(1, 0, 1);
		}
	}
	return;
}

void Function_369() //Position: 0x15CD6 / 89302
{
	if (iLocal_533 < 3 && iLocal_533 > 105)
	{
		Function_439(&iLocal_583, 100.0f, 180.0f, bLocal_641, "Stallion_return", "Stallion_abandoned", &bLocal_598, 0, 0, 0, 325, 1);
		if (iLocal_771)
		{
			Function_437();
		}
		Function_436();
		if (iLocal_533 >= 7)
		{
			Function_435();
		}
	}
	switch (iLocal_533)
	{
		case 0x00000000:
			if (Function_367(iLocal_532))
			{
				Function_361(&iLocal_622, 56, 0, 4294967295, 4294967295);
				Function_221(&iLocal_577);
				iLocal_780 = 0;
				Function_220(&iLocal_790);
				iLocal_533 = 1;
				iLocal_787 = 6;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_586[3])
			{
				if ((STREAMING_IS_WORLD_LOADED() && (Function_364(iLocal_572) || iLocal_572 != 4294967295)) && Function_434())
				{
					Function_221(&iLocal_577);
					iLocal_533 = 2;
				}
			}
			else if (Function_434())
			{
				Function_221(&iLocal_577);
				iLocal_533 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_424())
			{
				if (Function_423(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_486, iLocal_532))
				{
					Function_221(&iLocal_577);
					iLocal_533 = 3;
				}
				else
				{
					bLocal_661 = false;
					while (bLocal_661 <= SQUAD_GET_SIZE(Local_4.f_860))
					{
						bLocal_657 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_860, bLocal_661);
						if (IS_ACTOR_RIDING(bLocal_657))
						{
							RESET_ANIM_SET_FOR_ACTOR(bLocal_657, 1);
							SET_ANIM_SET_FOR_ACTOR(bLocal_657, "Ranch06_stop_horses", 0);
							bLocal_609 = TASK_SEQUENCE_OPEN();
							TASK_STAND_STILL(false, RAND_FLOAT_RANGE(0,25f, 1.0f), 0, 0);
							if (Function_422())
							{
								TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_B");
							}
							else
							{
								TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_A");
							}
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_657, bLocal_609);
							TASK_SEQUENCE_RELEASE(bLocal_609, 1);
							TASK_PRIORITY_SET(bLocal_657, true);
						}
						bLocal_661++;
					}
					RESET_ANIM_SET_FOR_ACTOR(bLocal_633, 0);
					SET_CRIPPLE_FLAG(bLocal_633, 2);
					TASK_MOUNT(bLocal_633, bLocal_634, 0, 1, 2, 2147483647);
					if (IS_ACTOR_RIDING(bLocal_633))
					{
						ACTOR_DISMOUNT_NOW(bLocal_633);
					}
					Function_361(&iLocal_622, 17, 0, 4294967295, 4294967295);
					Function_221(&iLocal_577);
					iLocal_533 = 4;
				}
				Function_234(iLocal_532);
				Function_416(StackVal, StackVal, Function_234(iLocal_532), iLocal_532, Global_30628[0], Function_237(iLocal_532), 2);
			}
			break;
		
		case 0x00000003:
			Function_415();
			if (Function_397())
			{
				RESET_ANIM_SET_FOR_ACTOR(bLocal_633, 0);
				SET_CRIPPLE_FLAG(bLocal_633, 2);
				TASK_MOUNT(bLocal_633, bLocal_634, 0, 1, 2, 2147483647);
				Function_221(&iLocal_577);
				iLocal_533 = 4;
			}
			break;
		
		case 0x00000004:
			Function_361(&iLocal_622, 17, 0, 4294967295, 4294967295);
			if (!IS_ACTOR_VALID(bLocal_641))
			{
				if (IS_ACTOR_ALIVE((*&Local_4 + 736)[02]))
				{
					bLocal_641 = (*&Local_4 + 736)[02];
				}
				else
				{
					if (IS_ACTOR_VALID((*&Local_4 + 736)[02]))
					{
						DESTROY_ACTOR((*&Local_4 + 736)[02]);
					}
					Function_355();
					bLocal_641 = (*&Local_4 + 736)[02];
				}
			}
			SQUAD_LEAVE(bLocal_641);
			if (!ARE_USE_CONTEXTS_ENABLED())
			{
				ENABLE_USE_CONTEXTS(1);
			}
			DECOR_SET_FLOAT(bLocal_641, "HorseCaptureBoltTime", 3,5f);
			DECOR_SET_BOOL(bLocal_641, "BeLassoBounceOff", true);
			DECOR_SET_BOOL(bLocal_641, "CanBeLasso", true);
			CLEAR_ACTOR_MAX_SPEED(bLocal_641);
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_641);
			TASK_STAND_STILL(bLocal_641, -1.0f, 0, 0);
			RESET_ACTOR_GAITS(bLocal_641, 0);
			Function_307(bLocal_641, (*&Local_4 + 1416)[18], 1, 1, 1);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_641, 2);
			MEMORY_REPORT_POSITION_AUTO(bLocal_641, Global_34573, true);
			DECOR_SET_FLOAT(bLocal_641, "fHowLong", 30.0f);
			Function_396(Local_4.f_752);
			Function_204(3, 0, 1);
			Function_202();
			if (!HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
			else
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
			}
			iLocal_774 = 0;
			Function_387();
			Function_385();
			SET_ACTOR_INVULNERABILITY(Global_34573, false);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_641, Local_4.f_1816, 2, 0, 0, 1, false);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_641, true);
			AI_AVOID_IGNORE_ACTOR(bLocal_641, Global_34573);
			Function_221(&iLocal_577);
			iLocal_533 = 6;
			break;
		
		case 0x00000006:
			if (Function_274(&iLocal_577) < 2.0f)
			{
				if (HUD_IS_FADED())
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					HUD_FADE_IN(1.0f, 1065353216);
				}
				if (!HUD_IS_FADING())
				{
					DECOR_SET_FLOAT(bLocal_641, "HorseCaptureBoltTime", 3,5f);
					CLEAR_ACTOR_MAX_SPEED(bLocal_641);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_641);
					Function_307(bLocal_641, (*&Local_4 + 1416)[18], 1, 1, 1);
					MEMORY_REPORT_POSITION_AUTO(bLocal_641, Global_34573, true);
					DECOR_SET_FLOAT(bLocal_641, "fHowLong", 30.0f);
					Function_396(Local_4.f_752);
					Function_204(3, 0, 1);
					Function_202();
					bLocal_745 = ADD_BLIP_FOR_ACTOR(bLocal_641, 418, 0, 2, 0);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_641, Local_4.f_1816, 3, 0, 0, 1, false);
					DECOR_SET_BOOL(bLocal_641, "CanBeLasso", false);
					SQUAD_GOALS_CLEAR(Local_4.f_752);
					SET_ACTOR_MAX_SPEED(bLocal_641, 3);
					SET_ACTOR_INVULNERABILITY(bLocal_641, true);
					SET_ACTOR_MIN_SPEED(bLocal_641, 2);
					DECOR_SET_BOOL(bLocal_641, "DisableBuckOff", true);
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_574);
					if (!IS_ACTOR_RIDEABLE(bLocal_641))
					{
						SET_ACTOR_RIDEABLE(bLocal_641, 1);
					}
					Function_384();
					if (SQUAD_IS_VALID(Local_4.f_804))
					{
						bLocal_661 = false;
						while (bLocal_661 <= SQUAD_GET_SIZE(Local_4.f_804))
						{
							bLocal_657 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_804, bLocal_661);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_657);
							ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_657, (*&Local_4 + 972)[6]);
							ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_657, (*&Local_4 + 972)[7]);
							SET_ACTOR_VOLUME_PARAMETERS(bLocal_657, 4, 1);
							bLocal_661++;
						}
					}
					if (SQUAD_IS_VALID(bLocal_664))
					{
						bLocal_661 = false;
						while (bLocal_661 <= SQUAD_GET_SIZE(bLocal_664))
						{
							bLocal_657 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_664, bLocal_661);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_657);
							ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_657, (*&Local_4 + 972)[6]);
							ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_657, (*&Local_4 + 972)[7]);
							SET_ACTOR_VOLUME_PARAMETERS(bLocal_657, 4, 1);
							bLocal_661++;
						}
					}
					if (SQUAD_IS_VALID(bLocal_665))
					{
						bLocal_661 = false;
						while (bLocal_661 <= SQUAD_GET_SIZE(bLocal_665))
						{
							bLocal_657 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_665, bLocal_661);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_657);
							ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_657, (*&Local_4 + 972)[6]);
							ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_657, (*&Local_4 + 972)[7]);
							SET_ACTOR_VOLUME_PARAMETERS(bLocal_657, 4, 1);
							bLocal_661++;
						}
					}
					if (SQUAD_IS_VALID(Local_4.f_860))
					{
						bLocal_661 = false;
						while (bLocal_661 <= SQUAD_GET_SIZE(Local_4.f_860))
						{
							bLocal_657 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_860, bLocal_661);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_657);
							ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_657, (*&Local_4 + 972)[6]);
							ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_657, (*&Local_4 + 972)[7]);
							SET_ACTOR_VOLUME_PARAMETERS(bLocal_657, 4, 1);
							bLocal_661++;
						}
					}
					if (Function_276(&iLocal_643))
					{
						Function_220(&iLocal_643);
					}
					iLocal_662 = 0;
					Function_383();
					Function_221(&iLocal_577);
					iLocal_533 = 7;
				}
			}
			break;
		
		case 0x00000007:
			Function_382();
			Function_221(&iLocal_577);
			Function_221(&iLocal_580);
			Function_221(&iLocal_583);
			iLocal_533 = 8;
			break;
		
		case 0x00000008:
			Function_382();
			Function_380();
			if (Function_274(&iLocal_577) <= 4.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_379("Ranch06_obj04a");
				Function_221(&iLocal_577);
				Function_221(&iLocal_580);
				Function_221(&iLocal_583);
				iLocal_533 = 9;
			}
			if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
			{
				if (GET_LASSO_TARGET(Global_34573) == bLocal_641)
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_575);
					TASK_STAND_STILL(bLocal_575, -1.0f, 0, 0);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_575, (*&Local_4 + 1012)[0], 4, 1);
					Function_378();
					Function_361(&iLocal_622, 11, 0, 4294967295, 4294967295);
					Function_221(&iLocal_577);
					Function_221(&iLocal_580);
					Function_221(&iLocal_583);
					iLocal_533 = 10;
				}
			}
			break;
		
		case 0x00000024:
			Function_382();
			Function_380();
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_379("Ranch06_obj04a");
			Function_221(&iLocal_577);
			Function_221(&iLocal_580);
			Function_221(&iLocal_583);
			iLocal_533 = 9;
			break;
		
		case 0x00000009:
			Function_382();
			Function_380();
			if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
			{
				if (GET_LASSO_TARGET(Global_34573) == bLocal_641)
				{
					Function_361(&iLocal_622, 11, 0, 4294967295, 4294967295);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_575);
					TASK_STAND_STILL(bLocal_575, -1.0f, 0, 0);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_575, (*&Local_4 + 1012)[0], 4, 1);
					Function_221(&iLocal_577);
					Function_221(&iLocal_580);
					Function_221(&iLocal_583);
					iLocal_533 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			Function_382();
			Function_380();
			if (!IS_ACTOR_RIDEABLE(bLocal_641))
			{
				SET_ACTOR_RIDEABLE(bLocal_641, 1);
			}
			if (!Function_133())
			{
				if (!iLocal_770)
				{
					Function_132("Ranch06_stallion_help_02", 10.0f, 1, 0, 2, 1, 0);
					iLocal_770 = 1;
				}
				Function_221(&iLocal_577);
				Function_221(&iLocal_580);
				Function_221(&iLocal_583);
				iLocal_533 = 11;
			}
			if (!IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				TASK_CLEAR(bLocal_575);
				Function_221(&iLocal_577);
				Function_221(&iLocal_580);
				Function_221(&iLocal_583);
				iLocal_533 = 36;
			}
			if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
			{
				GET_ACTOR_VELOCITY(GET_LASSO_TARGET(Global_34573), &vLocal_753);
				bLocal_765 = VMAG(vLocal_753);
				if (bLocal_765 >= 6.0f)
				{
					Function_221(&iLocal_577);
					Function_221(&iLocal_580);
					Function_221(&iLocal_583);
					iLocal_533 = 13;
				}
			}
			break;
		
		case 0x0000000B:
			Function_382();
			Function_380();
			if (!Function_133())
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_379("Ranch06_obj04b");
				Function_221(&iLocal_577);
				Function_221(&iLocal_580);
				Function_221(&iLocal_583);
				iLocal_533 = 12;
			}
			if (!IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				TASK_CLEAR(bLocal_575);
				Function_221(&iLocal_577);
				Function_221(&iLocal_580);
				Function_221(&iLocal_583);
				iLocal_533 = 36;
			}
			if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
			{
				GET_ACTOR_VELOCITY(GET_LASSO_TARGET(Global_34573), &vLocal_753);
				bLocal_765 = VMAG(vLocal_753);
				if (bLocal_765 >= 4.0f)
				{
					Function_221(&iLocal_577);
					Function_221(&iLocal_580);
					Function_221(&iLocal_583);
					iLocal_533 = 13;
				}
			}
			break;
		
		case 0x0000000C:
			Function_382();
			Function_380();
			if (!IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
			{
				Function_361(&iLocal_622, 17, 0, 4294967295, 4294967295);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				TASK_CLEAR(bLocal_575);
				Function_221(&iLocal_577);
				Function_221(&iLocal_580);
				Function_221(&iLocal_583);
				iLocal_533 = 8;
			}
			if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
			{
				GET_ACTOR_VELOCITY(GET_LASSO_TARGET(Global_34573), &vLocal_753);
				bLocal_765 = VMAG(vLocal_753);
				if (bLocal_765 >= 6.0f)
				{
					if (!iLocal_769)
					{
						Function_132("Ranch06_stallion_help_03", 10.0f, 1, 0, 2, 1, 0);
						iLocal_769 = 1;
					}
					Function_221(&iLocal_577);
					Function_221(&iLocal_580);
					Function_221(&iLocal_583);
					iLocal_533 = 13;
				}
			}
			break;
		
		case 0x0000000D:
			Function_382();
			Function_380();
			Function_379("Ranch06_obj04c");
			if (!IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
			{
				Function_361(&iLocal_622, 17, 0, 4294967295, 4294967295);
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				TASK_CLEAR(bLocal_575);
				Function_221(&iLocal_577);
				Function_221(&iLocal_580);
				Function_221(&iLocal_583);
				iLocal_533 = 8;
			}
			if (!Function_133())
			{
				if (!iLocal_769)
				{
					Function_132("Ranch06_stallion_help_03", 10.0f, 1, 0, 2, 1, 0);
					iLocal_769 = 1;
					Function_221(&iLocal_577);
					Function_221(&iLocal_580);
					Function_221(&iLocal_583);
				}
			}
			break;
		
		case 0x0000000E:
			Function_377();
			Function_379("Ranch06_obj04c");
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (!iLocal_780)
				{
					iLocal_780 = 1;
					Function_221(&iLocal_790);
				}
				else if (Function_274(&iLocal_790) > 3.0f)
				{
				}
				else
				{
					Function_361(&iLocal_622, 3, 0, 4294967295, 4294967295);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_641)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_641));
					}
					ANIMAL_ACTOR_SET_DOCILE(bLocal_641, 1);
					ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_641, false);
					CLEAR_ACTOR_MAX_SPEED(bLocal_641);
					CLEAR_ACTOR_MIN_SPEED(bLocal_641);
					SQUAD_LEAVE(bLocal_641);
					Function_353(bLocal_641, 0);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_575);
					TASK_FOLLOW_ACTOR(bLocal_575, Global_34573);
					Function_221(&iLocal_577);
					Function_221(&iLocal_580);
					Function_221(&iLocal_583);
					iLocal_533 = 16;
				}
			}
			else
			{
				DECOR_SET_BOOL(bLocal_641, "DisableBuckOff", true);
				Function_221(&iLocal_577);
				Function_221(&iLocal_580);
				Function_221(&iLocal_583);
				Function_361(&iLocal_622, 17, 0, 4294967295, 4294967295);
				iLocal_780 = 0;
				Function_220(&iLocal_790);
				iLocal_533 = 8;
			}
			if (Global_3384)
			{
				Function_357();
				Function_221(&iLocal_577);
				Function_221(&iLocal_580);
				Function_221(&iLocal_583);
				Function_361(&iLocal_622, 11, 0, 4294967295, 4294967295);
				iLocal_533 = 15;
			}
			break;
		
		case 0x0000000F:
			Function_377();
			Function_373(StackVal, StackVal, "$/cutscene/RANCH06_CS05/RANCH06_CS05", &uLocal_571, vLocal_762, 60211, 1, 0x42c80000, 0x43160000, 2, 1, 2, 2, 0, 1);
			if (ANIMAL_ACTOR_GET_DOMESTICATION(bLocal_641) == 0)
			{
				Function_361(&iLocal_622, 3, 0, 4294967295, 4294967295);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_641)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_641));
				}
				CLEAR_ACTOR_MAX_SPEED(bLocal_641);
				CLEAR_ACTOR_MIN_SPEED(bLocal_641);
				SQUAD_LEAVE(bLocal_641);
				Function_353(bLocal_641, 0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_575);
				TASK_FOLLOW_ACTOR(bLocal_575, Global_34573);
				Function_221(&iLocal_577);
				Function_221(&iLocal_580);
				Function_221(&iLocal_583);
				iLocal_533 = 16;
			}
			else if (!IS_ACTOR_RIDING(Global_34573))
			{
				DECOR_SET_BOOL(bLocal_641, "DisableBuckOff", true);
				Function_221(&iLocal_577);
				Function_221(&iLocal_580);
				Function_221(&iLocal_583);
				iLocal_780 = 0;
				Function_220(&iLocal_790);
				Function_361(&iLocal_622, 17, 0, 4294967295, 4294967295);
				iLocal_533 = 8;
			}
			break;
		
		case 0x00000010:
			if (!iLocal_771)
			{
				iLocal_771 = 1;
				iLocal_682 = 1;
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_638);
			}
			iLocal_777 = 0;
			Function_379("Ranch06_go_to_Bonnie");
			Function_372();
			AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bLocal_574, false);
			bLocal_766 = (Function_371(Global_34573, bLocal_574) + 10.0f);
			bLocal_767 = (bLocal_766 + 50.0f);
			Function_221(&iLocal_577);
			Function_221(&iLocal_580);
			Function_221(&iLocal_583);
			iLocal_533 = 17;
			break;
		
		case 0x00000011:
			GET_OBJECT_POSITION((*&Local_4 + 1684)[1], &vLocal_762);
			Function_373(StackVal, StackVal, "$/cutscene/RANCH06_CS05/RANCH06_CS05", &uLocal_571, vLocal_762, 60211, 1, 150.0f, 250.0f, 2, 1, 2, 2, 0, 1);
			if (!iLocal_771)
			{
				iLocal_771 = 1;
				iLocal_682 = 1;
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_638);
			}
			Function_439(&iLocal_583, bLocal_766, bLocal_767, bLocal_574, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_598, 0, 0, 0, 325, 1);
			Function_370();
			if (!iLocal_777)
			{
				if (!IS_ACTOR_MOUNTED(Global_34573) && !GET_MOUNT(Global_34573) != bLocal_641)
				{
					Function_379("Stallion_mount");
					Function_202();
					bLocal_745 = ADD_BLIP_FOR_ACTOR(bLocal_641, 418, 0, 2, 0);
					iLocal_777 = 1;
				}
			}
			else
			{
				if (!IS_BLIP_VALID(bLocal_745))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_641)))
					{
						bLocal_745 = GET_BLIP_ON_ACTOR(bLocal_641);
					}
					else
					{
						bLocal_745 = ADD_BLIP_FOR_ACTOR(bLocal_641, 418, 0, 2, 0);
					}
				}
				if (IS_ACTOR_RIDING(Global_34573) && GET_MOUNT(Global_34573) != bLocal_641)
				{
					Function_379("Ranch06_go_to_Bonnie");
					Function_202();
					iLocal_777 = 0;
					Function_372();
				}
			}
			if (ACTORS_IN_RANGE(Global_34573, bLocal_574, 15.0f))
			{
				if (IS_ACTOR_RIDING(Global_34573) && GET_MOUNT(Global_34573) != bLocal_641)
				{
					bLocal_609 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_OBJECT(false, (*&Local_4 + 1684)[1], 2, 0, 1);
					TASK_FACE_ACTOR(false, bLocal_574, 0, 3212836864);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(Global_34573, bLocal_609);
					TASK_SEQUENCE_RELEASE(bLocal_609, 1);
					TASK_PRIORITY_SET(Global_34573, true);
					bLocal_609 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_OBJECT(false, (*&Local_4 + 1684)[3], 2, 0, 1);
					TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_574, bLocal_609);
					TASK_SEQUENCE_RELEASE(bLocal_609, 1);
					TASK_PRIORITY_SET(bLocal_574, true);
					AI_AVOID_IGNORE_ACTOR(bLocal_574, Global_34573);
					TASK_STAND_STILL(bLocal_641, -1.0f, 0, 0);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_641);
					DESTROY_ACTOR(bLocal_575);
					SET_ACTOR_RIDEABLE(bLocal_575, 1);
					bLocal_575 = bLocal_641;
					Function_353(bLocal_575, 0);
					if (!GET_ACTOR_ENUM(bLocal_575) != 992)
					{
						Function_76(&Global_12976 + 36 + 20, 2);
						Function_352(bLocal_575, 0);
					}
					Function_221(&iLocal_577);
					SET_ACTOR_INVULNERABILITY(bLocal_575, false);
					iLocal_533 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			GET_OBJECT_POSITION((*&Local_4 + 1684)[1], &vLocal_762);
			Function_373(StackVal, StackVal, "$/cutscene/RANCH06_CS05/RANCH06_CS05", &uLocal_571, vLocal_762, 60211, 1, 150.0f, 250.0f, 2, 1, 2, 2, 0, 1);
			if (Function_274(&iLocal_577) < 3.0f || ACTORS_IN_RANGE(Global_34573, bLocal_574, 3.0f))
			{
				AI_AVOID_CLEAR_IGNORE_ACTOR(bLocal_574);
				Function_365();
				Function_209();
				iLocal_586[4] = 1;
				Function_221(&iLocal_577);
				iLocal_532 = 101;
				iLocal_533 = 0;
			}
			break;
	}
	return;
}

void Function_370() //Position: 0x16E00 / 93696
{
	if (!iLocal_679)
	{
		Function_307(bLocal_629, (*&Local_4 + 1684)[4], 1, 1, 1);
		Function_307(bLocal_630, (*&Local_4 + 1684)[4], 1, 1, 1);
		MEMORY_PREFER_RIDING(bLocal_629, true);
		Function_307(bLocal_631, (*&Local_4 + 1684)[5], 1, 1, 1);
		Function_307(bLocal_632, (*&Local_4 + 1684)[5], 1, 1, 1);
		MEMORY_PREFER_RIDING(bLocal_631, true);
		Function_307(bLocal_633, (*&Local_4 + 1684)[6], 1, 1, 1);
		Function_307(bLocal_634, (*&Local_4 + 1684)[6], 1, 1, 1);
		MEMORY_PREFER_RIDING(bLocal_633, true);
		Function_307(bLocal_635, (*&Local_4 + 1684)[7], 1, 1, 1);
		Function_307(bLocal_636, (*&Local_4 + 1684)[7], 1, 1, 1);
		MEMORY_PREFER_RIDING(bLocal_635, true);
		Function_307(bLocal_637, (*&Local_4 + 1684)[8], 1, 1, 1);
		Function_307(bLocal_640, (*&Local_4 + 1684)[8], 1, 1, 1);
		MEMORY_PREFER_RIDING(bLocal_637, true);
		iLocal_679 = 1;
	}
	if (iLocal_679 && !iLocal_680)
	{
		ACTOR_MOUNT_ACTOR(bLocal_629, bLocal_630);
		ACTOR_MOUNT_ACTOR(bLocal_631, bLocal_632);
		ACTOR_MOUNT_ACTOR(bLocal_633, bLocal_634);
		ACTOR_MOUNT_ACTOR(bLocal_635, bLocal_636);
		ACTOR_MOUNT_ACTOR(bLocal_637, bLocal_640);
		Function_307((*&Local_4 + 756)[02], (*&Local_4 + 1684)[10], 1, 1, 1);
		Function_307((*&Local_4 + 756)[12], (*&Local_4 + 1684)[11], 1, 1, 1);
		Function_307((*&Local_4 + 756)[22], (*&Local_4 + 1684)[12], 1, 1, 1);
		Function_307((*&Local_4 + 756)[32], (*&Local_4 + 1684)[13], 1, 1, 1);
		Function_307((*&Local_4 + 756)[42], (*&Local_4 + 1684)[14], 1, 1, 1);
		ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 756)[02], false);
		ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 756)[12], false);
		ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 756)[22], false);
		ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 756)[32], false);
		ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 756)[42], false);
		iLocal_680 = 1;
	}
	if (iLocal_680 && !bLocal_681)
	{
		if (IS_ACTOR_ALIVE((*&Local_4 + 756)[02]))
		{
			if (!IS_OBJECT_VALID(bLocal_748))
			{
				bLocal_748 = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR((*&Local_4 + 756)[02]), Function_53(), 1092616192, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
				if (IS_OBJECT_VALID(bLocal_748))
				{
					LEASH_ATTACH_TO_OBJECT_BONE(bLocal_748, (*&Local_4 + 756)[02], "LowLip1", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 1);
					LEASH_ATTACH_TO_OBJECT_BONE(bLocal_748, bLocal_629, "wrist_r", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1, 1);
					LEASH_CONSTRAIN(bLocal_748);
					LEASH_RESTART(bLocal_748);
					LEASH_SET_CONSTRAINT_LENGTH(bLocal_748, 12.0f);
					LEASH_SET_LEASH_LENGTH(bLocal_748, 9.0f);
				}
			}
		}
		if (IS_ACTOR_ALIVE((*&Local_4 + 756)[12]))
		{
			if (!IS_OBJECT_VALID(bLocal_749))
			{
				bLocal_749 = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR((*&Local_4 + 756)[12]), Function_53(), 1092616192, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
				if (IS_OBJECT_VALID(bLocal_749))
				{
					LEASH_ATTACH_TO_OBJECT_BONE(bLocal_749, (*&Local_4 + 756)[12], "LowLip1", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 1);
					LEASH_ATTACH_TO_OBJECT_BONE(bLocal_749, bLocal_631, "wrist_r", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1, 1);
					LEASH_CONSTRAIN(bLocal_749);
					LEASH_RESTART(bLocal_749);
					LEASH_SET_CONSTRAINT_LENGTH(bLocal_749, 12.0f);
					LEASH_SET_LEASH_LENGTH(bLocal_749, 9.0f);
				}
			}
		}
		if (IS_ACTOR_ALIVE((*&Local_4 + 756)[22]))
		{
			if (!IS_OBJECT_VALID(bLocal_750))
			{
				bLocal_750 = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR((*&Local_4 + 756)[22]), Function_53(), 1092616192, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
				if (IS_OBJECT_VALID(bLocal_750))
				{
					LEASH_ATTACH_TO_OBJECT_BONE(bLocal_750, (*&Local_4 + 756)[22], "LowLip1", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 1);
					LEASH_ATTACH_TO_OBJECT_BONE(bLocal_750, bLocal_633, "wrist_r", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1, 1);
					LEASH_CONSTRAIN(bLocal_750);
					LEASH_RESTART(bLocal_750);
					LEASH_SET_CONSTRAINT_LENGTH(bLocal_750, 12.0f);
					LEASH_SET_LEASH_LENGTH(bLocal_750, 9.0f);
				}
			}
		}
		if (IS_ACTOR_ALIVE((*&Local_4 + 756)[32]))
		{
			if (!IS_OBJECT_VALID(bLocal_751))
			{
				bLocal_751 = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR((*&Local_4 + 756)[32]), Function_53(), 1092616192, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
				if (IS_OBJECT_VALID(bLocal_751))
				{
					LEASH_ATTACH_TO_OBJECT_BONE(bLocal_751, (*&Local_4 + 756)[32], "LowLip1", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 1);
					LEASH_ATTACH_TO_OBJECT_BONE(bLocal_751, bLocal_635, "wrist_r", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1, 1);
					LEASH_CONSTRAIN(bLocal_751);
					LEASH_RESTART(bLocal_751);
					LEASH_SET_CONSTRAINT_LENGTH(bLocal_751, 12.0f);
					LEASH_SET_LEASH_LENGTH(bLocal_751, 9.0f);
				}
			}
		}
		if (IS_ACTOR_ALIVE((*&Local_4 + 756)[42]))
		{
			if (!IS_OBJECT_VALID(bLocal_752))
			{
				bLocal_752 = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR((*&Local_4 + 756)[42]), Function_53(), 1092616192, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
				if (IS_OBJECT_VALID(bLocal_752))
				{
					LEASH_ATTACH_TO_OBJECT_BONE(bLocal_752, (*&Local_4 + 756)[42], "LowLip1", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 1);
					LEASH_ATTACH_TO_OBJECT_BONE(bLocal_752, bLocal_637, "wrist_r", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1, 1, 1);
					LEASH_CONSTRAIN(bLocal_752);
					LEASH_RESTART(bLocal_752);
					LEASH_SET_CONSTRAINT_LENGTH(bLocal_752, 12.0f);
					LEASH_SET_LEASH_LENGTH(bLocal_752, 9.0f);
				}
			}
		}
		GET_OBJECT_POSITION((*&Local_4 + 1684)[15], &Local_600);
		bLocal_609 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(false, &Local_600, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_629, bLocal_609);
		TASK_SEQUENCE_RELEASE(bLocal_609, 1);
		TASK_PRIORITY_SET(bLocal_629, true);
		GET_OBJECT_POSITION((*&Local_4 + 1684)[16], &Local_600);
		bLocal_609 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(false, &Local_600, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_631, bLocal_609);
		TASK_SEQUENCE_RELEASE(bLocal_609, 1);
		TASK_PRIORITY_SET(bLocal_631, true);
		GET_OBJECT_POSITION((*&Local_4 + 1684)[17], &Local_600);
		bLocal_609 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(false, &Local_600, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_633, bLocal_609);
		TASK_SEQUENCE_RELEASE(bLocal_609, 1);
		TASK_PRIORITY_SET(bLocal_633, true);
		GET_OBJECT_POSITION((*&Local_4 + 1684)[18], &Local_600);
		bLocal_609 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(false, &Local_600, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_635, bLocal_609);
		TASK_SEQUENCE_RELEASE(bLocal_609, 1);
		TASK_PRIORITY_SET(bLocal_635, true);
		GET_OBJECT_POSITION((*&Local_4 + 1684)[19], &Local_600);
		bLocal_609 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(false, &Local_600, 4);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_637, bLocal_609);
		TASK_SEQUENCE_RELEASE(bLocal_609, 1);
		TASK_PRIORITY_SET(bLocal_637, true);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_629);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_631);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_633);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_635);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_637);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 756)[02]);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 756)[12]);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 756)[22]);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 756)[32]);
		CLEAR_ACTOR_STAY_WITHIN_VOLUME((*&Local_4 + 756)[42]);
		Function_385();
		bLocal_681 = true;
	}
	if (bLocal_681)
	{
		if (IS_ACTOR_VALID(bLocal_629))
		{
			if (GET_TASK_STATUS(bLocal_629, 0) != 1)
			{
				if (GET_TASK_STATUS(bLocal_629, 83) != 1)
				{
					SET_ACTOR_INVULNERABILITY(bLocal_629, false);
					SET_ACTOR_INVULNERABILITY((*&Local_4 + 756)[02], false);
					TASK_GO_NEAR_OBJECT(bLocal_629, (*&Local_4 + 1284)[1], 5.0f, 4, 1, 1);
					TASK_FOLLOW_ACTOR((*&Local_4 + 756)[02], bLocal_629);
				}
			}
		}
		if (IS_ACTOR_VALID(bLocal_631))
		{
			if (GET_TASK_STATUS(bLocal_631, 0) != 1)
			{
				if (GET_TASK_STATUS(bLocal_631, 83) != 1)
				{
					SET_ACTOR_INVULNERABILITY(bLocal_631, false);
					SET_ACTOR_INVULNERABILITY((*&Local_4 + 756)[12], false);
					TASK_GO_NEAR_OBJECT(bLocal_631, (*&Local_4 + 1284)[1], 5.0f, 4, 1, 1);
					TASK_FOLLOW_ACTOR((*&Local_4 + 756)[12], bLocal_631);
				}
			}
		}
		if (IS_ACTOR_VALID(bLocal_633))
		{
			if (GET_TASK_STATUS(bLocal_633, 0) != 1)
			{
				if (GET_TASK_STATUS(bLocal_633, 83) != 1)
				{
					SET_ACTOR_INVULNERABILITY(bLocal_633, false);
					SET_ACTOR_INVULNERABILITY((*&Local_4 + 756)[22], false);
					TASK_GO_NEAR_OBJECT(bLocal_633, (*&Local_4 + 1284)[1], 5.0f, 4, 1, 1);
					TASK_FOLLOW_ACTOR((*&Local_4 + 756)[22], bLocal_633);
				}
			}
		}
		if (IS_ACTOR_VALID(bLocal_635))
		{
			if (GET_TASK_STATUS(bLocal_635, 0) != 1)
			{
				if (GET_TASK_STATUS(bLocal_635, 83) != 1)
				{
					SET_ACTOR_INVULNERABILITY(bLocal_635, false);
					SET_ACTOR_INVULNERABILITY((*&Local_4 + 756)[32], false);
					TASK_GO_NEAR_OBJECT(bLocal_635, (*&Local_4 + 1284)[1], 5.0f, 4, 1, 1);
					TASK_FOLLOW_ACTOR((*&Local_4 + 756)[32], bLocal_635);
				}
			}
		}
		if (IS_ACTOR_VALID(bLocal_637))
		{
			if (GET_TASK_STATUS(bLocal_637, 0) != 1)
			{
				if (GET_TASK_STATUS(bLocal_637, 83) != 1)
				{
					SET_ACTOR_INVULNERABILITY(bLocal_637, false);
					SET_ACTOR_INVULNERABILITY((*&Local_4 + 756)[42], false);
					TASK_GO_NEAR_OBJECT(bLocal_637, (*&Local_4 + 1284)[1], 5.0f, 4, 1, 1);
					TASK_FOLLOW_ACTOR((*&Local_4 + 756)[42], bLocal_637);
				}
			}
		}
	}
	return;
}

float Function_371(bool bParam0, bool bParam1) //Position: 0x176FA / 95994
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

void Function_372() //Position: 0x177EB / 96235
{
	Function_204(3, 1, 1);
	if (IS_BLIP_VALID(bLocal_745))
	{
		REMOVE_BLIP(bLocal_745);
	}
	if (IS_OBJECT_VALID(bLocal_667))
	{
		Function_203(bLocal_667);
		Function_198();
	}
	if (IS_BLIP_VALID(bLocal_747))
	{
		REMOVE_BLIP(bLocal_747);
	}
	if (IS_BLIP_VALID(bLocal_746))
	{
		REMOVE_BLIP(bLocal_746);
	}
	return;
}

int Function_373(bool bParam0, var uParam1, vector3 vParam2, int iParam5, bool bParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14) //Position: 0x17836 / 96310
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_374(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_376()) * (fParam8 - fParam7)) * 0,5f))) || bParam13)
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
	else if ((!Function_374(StackVal, StackVal, Global_34573, vParam2, (fParam8 + ((IntToFloat(Function_376()) * (fParam8 - fParam7)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam13)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_374(StackVal, StackVal, Global_34573, vParam2, fParam7))
	{
	}
	return 0;
}

bool Function_374(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x17AF0 / 97008
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_375(bParam0);
		if (VDIST(Function_375(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

vector3 Function_375(bool bParam0) //Position: 0x17B7A / 97146
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

int Function_376() //Position: 0x17BE4 / 97252
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_377() //Position: 0x17BF3 / 97267
{
	if (IS_CAMERA_FOCUS_ENABLED(bLocal_803))
	{
		SET_CAMERA_FOCUS_ENABLED(bLocal_803, 0);
	}
	return;
}

void Function_378() //Position: 0x17C09 / 97289
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_LassoStallion", "Ranch06_LassoStallion", true, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_379(bool bParam0) //Position: 0x17C5C / 97372
{
	if (!IS_STRING_VALID(bLocal_729))
	{
		if (!Function_276(&iLocal_733))
		{
			Function_221(&iLocal_733);
		}
		bLocal_729 = bParam0;
	}
	else if (!STRINGS_ARE_EQUAL(bLocal_729, bParam0))
	{
		if (!Function_276(&iLocal_733))
		{
			Function_221(&iLocal_733);
		}
		bLocal_729 = bParam0;
	}
	return;
}

void Function_380() //Position: 0x17CA5 / 97445
{
	if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
	{
		if (GET_MOUNT(Global_34573) == bLocal_641)
		{
			DECOR_SET_BOOL(bLocal_641, "DisableBuckOff", true);
			iLocal_780 = 0;
			Function_381();
			Function_221(&iLocal_577);
			Function_221(&iLocal_580);
			Function_221(&iLocal_583);
			bLocal_609 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(false, (*&Local_4 + 1684)[2], 4, 0, 1);
			TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_574, bLocal_609);
			TASK_SEQUENCE_RELEASE(bLocal_609, 1);
			Function_361(&iLocal_622, 11, 0, 4294967295, 4294967295);
			iLocal_533 = 14;
		}
	}
	return;
}

void Function_381() //Position: 0x17D41 / 97601
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_restrainStallion", "Ranch06_restrainStallion", true, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_382() //Position: 0x17D9A / 97690
{
	if (!IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
	{
		if (!IS_CAMERA_FOCUS_ENABLED(bLocal_803))
		{
			Function_75();
			SET_CAMERA_FOCUS_OBJECT(bLocal_803, bLocal_641, Function_75(), 1.0f);
			SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_803, "Ranch06_FocusPrompt_Stallion");
			SET_CAMERA_FOCUS_ENABLED(bLocal_803, 1);
		}
	}
	else if (IS_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_803))
	{
		SET_CAMERA_FOCUS_ENABLED(bLocal_803, 0);
	}
	return;
}

void Function_383() //Position: 0x17E03 / 97795
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_getStallion", "Ranch06_getStallion", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_384() //Position: 0x17E52 / 97874
{
	if (!IS_OBJECT_VALID(bLocal_803))
	{
		Function_75();
		bLocal_803 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_485, "cFocus", bLocal_641, Function_75(), 100.0f, 200.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_803, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_803, "Ranch06_FocusPrompt_Stallion");
	}
	else
	{
		Function_75();
		SET_CAMERA_FOCUS_OBJECT(bLocal_803, bLocal_641, Function_75(), 1.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_803, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_803, "Ranch06_FocusPrompt_Stallion");
	}
	return;
}

void Function_385() //Position: 0x17EEC / 98028
{
	TASK_PRIORITY_SET(bLocal_629, 2);
	TASK_PRIORITY_SET(bLocal_631, 2);
	TASK_PRIORITY_SET(bLocal_633, 2);
	TASK_PRIORITY_SET(bLocal_635, 2);
	TASK_PRIORITY_SET(bLocal_637, 2);
	TASK_PRIORITY_SET(bLocal_638, 2);
	TASK_PRIORITY_SET(bLocal_630, 2);
	TASK_PRIORITY_SET(bLocal_632, 2);
	TASK_PRIORITY_SET(bLocal_634, 2);
	TASK_PRIORITY_SET(bLocal_636, 2);
	TASK_PRIORITY_SET(bLocal_640, 2);
	TASK_PRIORITY_SET(bLocal_639, 2);
	Function_386(Local_4.f_804, 2);
	return;
}

void Function_386(bool bParam0, bool bParam1) //Position: 0x17F4F / 98127
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_PRIORITY_SET(bVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_387() //Position: 0x17F8A / 98186
{
	Function_365();
	if (IS_ACTOR_VALID(bLocal_574))
	{
		Function_392(&(Local_845[017]), bLocal_574, "RanchersDaughter", 1, 0x5f5e100, 1);
		if (IS_ACTOR_VALID(bLocal_624))
		{
			SET_MOST_RECENT_MOUNT(bLocal_574, bLocal_624);
			SET_ACTORS_HORSE(bLocal_574, bLocal_624);
		}
	}
	if (IS_ACTOR_VALID(bLocal_576))
	{
		Function_392(&(Local_845[117]), bLocal_576, "Drew", 1, 0x5f5e100, 1);
		if (IS_ACTOR_VALID(bLocal_625))
		{
			SET_MOST_RECENT_MOUNT(bLocal_576, bLocal_625);
			SET_ACTORS_HORSE(bLocal_576, bLocal_625);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_860))
	{
		Function_392(&(Local_845[217]), Local_4.f_860, "Cowhand", 1, 0x5f5e100, 1);
		Function_388(&(Local_845[217]), 2);
	}
	if (SQUAD_IS_VALID(bLocal_664))
	{
		Function_392(&(Local_845[317]), bLocal_664, "Ranch06_horse", 0, 0x5f5e100, 1);
		Function_388(&(Local_845[317]), 64);
		Function_388(&(Local_845[317]), 2);
		Function_388(&(Local_845[317]), 128);
		Function_388(&(Local_845[317]), 8);
	}
	if (IS_ACTOR_VALID(bLocal_641))
	{
		Function_392(&(Local_845[417]), bLocal_641, "Stallion", 0, 0x5f5e100, 1);
		Function_388(&(Local_845[417]), 64);
	}
	else if (IS_ACTOR_VALID(bLocal_627))
	{
		Function_392(&(Local_845[417]), bLocal_627, "Ranch06_horse", 0, 0x5f5e100, 1);
		Function_388(&(Local_845[417]), 64);
		Function_388(&(Local_845[417]), 128);
		Function_388(&(Local_845[417]), 8);
	}
	if (SQUAD_IS_VALID(bLocal_665))
	{
		Function_392(&(Local_845[517]), bLocal_665, "Ranch06_Horse", 0, 0x5f5e100, 1);
		Function_388(&(Local_845[517]), 64);
		Function_388(&(Local_845[517]), 2);
		Function_388(&(Local_845[517]), 128);
		Function_388(&(Local_845[517]), 8);
	}
	else if (IS_ACTOR_VALID(bLocal_656))
	{
		Function_392(&(Local_845[517]), bLocal_656, "Ranch06_horse", 0, 0x5f5e100, 1);
		Function_388(&(Local_845[517]), 64);
		Function_388(&(Local_845[517]), 128);
		Function_388(&(Local_845[517]), 8);
	}
	return;
}

void Function_388(int iParam0, int iParam1) //Position: 0x181D7 / 98775
{
	if (iParam1 != 100000000)
	{
		Function_391(iParam0, iParam1);
	}
	else
	{
		Function_389(iParam0, 1);
	}
	return;
}

void Function_389(int iParam0, bool bParam1) //Position: 0x181F7 / 98807
{
	iParam0->f_40 = 0;
	Function_390(iParam0, 2, bParam1);
	Function_390(iParam0, 4, bParam1);
	Function_390(iParam0, 8, bParam1);
	Function_390(iParam0, 16, bParam1);
	Function_390(iParam0, 32, bParam1);
	Function_390(iParam0, 64, bParam1);
	Function_390(iParam0, 128, bParam1);
	Function_390(iParam0, 256, bParam1);
	Function_390(iParam0, 512, bParam1);
	Function_390(iParam0, 1024, bParam1);
	return;
}

void Function_390(int iParam0, int iParam1, bool bParam2) //Position: 0x1825D / 98909
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

void Function_391(int iParam0, bool bParam1) //Position: 0x18299 / 98969
{
	bool bVar0;
	
	Function_36(iParam0 + 40, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_36(iParam0 + 40, bVar0);
	return;
}

int Function_392(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x182C4 / 99012
{
	if (!Function_395(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_394(uParam0, bParam2))
	{
		return 0;
	}
	Function_223(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_393(uParam0, iParam4, iParam5);
	return 1;
}

void Function_393(var uParam0, int iParam1, int iParam2) //Position: 0x18300 / 99072
{
	if (iParam1 != 100000000)
	{
		Function_390(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_389(uParam0, iParam2);
	}
	return;
}

bool Function_394(int iParam0, bool bParam1) //Position: 0x18323 / 99107
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

bool Function_395(var uParam0, bool bParam1) //Position: 0x183AC / 99244
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

void Function_396(bool bParam0) //Position: 0x18538 / 99640
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

bool Function_397() //Position: 0x18585 / 99717
{
	var uVar0;
	
	if (Local_525 >= 1001)
	{
		if (Function_274(&Local_525 + 4) < 2.0f)
		{
			Function_281(&Local_525, 1, 0);
		}
	}
	switch (Local_525)
	{
		case 0x000003E8:
			Function_342(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_350(bLocal_574, (*&Local_4 + 1416)[3], 1, 1, 1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				SET_CUTSCENEINPUTS_TARGET_GUID(uVar0, 6, bLocal_574);
				SET_CUTSCENEINPUTS_TARGET_GUID(uVar0, 7, bLocal_641);
				Local_525.f_16 = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else
			{
				if (IS_OBJECT_VALID(Local_525.f_16))
				{
					if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(Local_525.f_16), "Ranch06_CS04_v2"))
					{
						PLAY_CUTSCENEOBJECT(Local_525.f_16, false, 0f, 0,5f, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						DESTROY_OBJECT(Local_525.f_16);
					}
				}
				if (!IS_OBJECT_VALID(Local_525.f_16))
				{
					Local_525.f_16 = Function_402(Local_4, 0, Global_34573, bLocal_575, bLocal_624, 0, 0, 0);
					if (IS_OBJECT_VALID(Local_525.f_16))
					{
					}
					else
					{
						LOG_ERROR("Ranch06_CS04 - Failed to create Ranch06_CS04_cutscene");
					}
				}
			}
			Function_401();
			Local_525 = 1001;
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_525.f_16), false))
			{
				Function_289(Global_34573, 1, 1);
				Function_289(bLocal_574, 1, 1);
				Function_221(&Local_525 + 4);
				Local_525 = 1002;
			}
			break;
		
		case 0x000003EA:
			Local_525 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				if (Function_274(&Local_525 + 4) < 0.0f)
				{
					DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
					Function_221(&Local_525 + 4);
					iLocal_998 = 15;
					iLocal_999 = 15;
					Local_525 = 1004;
				}
			}
			else
			{
				Function_221(&Local_525 + 4);
			}
			break;
		
		case 0x000003EC:
			if (Function_399() && Function_398())
			{
				Function_221(&Local_525 + 4);
				Local_525 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_289(Global_34573, 0, 1);
				Function_289(bLocal_574, 0, 1);
				SET_MOVER_FROZEN((*&Local_4 + 756)[32], false);
				SET_MOST_RECENT_MOUNT(bLocal_633, bLocal_634);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_306(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_525.f_16))
				{
					DESTROY_OBJECT(Local_525.f_16);
				}
				CAMERA_RESET(0);
				Local_525 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Function_350(Global_34573, (*&Local_4 + 1416)[2], 1, 1, 1);
				Function_350(bLocal_574, (*&Local_4 + 1416)[5], 1, 1, 1);
				TASK_STAND_STILL(bLocal_641, -1.0f, 0, 0);
				Function_307(bLocal_641, (*&Local_4 + 1416)[22], 1, 1, 1);
				RESET_ACTOR_GAITS(bLocal_641, 0);
				Local_525 = 1104;
			}
			break;
	}
	return 0;
}

int Function_398() //Position: 0x18871 / 100465
{
	switch (iLocal_999)
	{
		case 0x0000000F:
			if (Function_274(&Local_525 + 4) < 0.0f)
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(0,5f, 1065353216);
				}
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, Local_4.f_1872, 4, 1, 0, 0, 3.0f);
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[12], 1.0f, 4, 0, 1);
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_HORSE_ACTION(false, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 756)[02], bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET((*&Local_4 + 756)[02], true);
				AI_ACTOR_FORCE_SPEED((*&Local_4 + 756)[02], 4);
				ACTOR_POP_NEXT_GAIT((*&Local_4 + 756)[02], 3, false);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, Local_4.f_1872, 4, 1, 0, 0, -1.0f);
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[13], 1.0f, 4, 0, 1);
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_HORSE_ACTION(false, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 756)[12], bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET((*&Local_4 + 756)[12], true);
				AI_ACTOR_FORCE_SPEED((*&Local_4 + 756)[12], 4);
				ACTOR_POP_NEXT_GAIT((*&Local_4 + 756)[12], 3, false);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, Local_4.f_1872, 4, 1, 0, 0, false);
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[14], 1.0f, 4, 0, 1);
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_HORSE_ACTION(false, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 756)[22], bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET((*&Local_4 + 756)[22], true);
				AI_ACTOR_FORCE_SPEED((*&Local_4 + 756)[22], 4);
				ACTOR_POP_NEXT_GAIT((*&Local_4 + 756)[22], 3, false);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, Local_4.f_1872, 4, 1, 0, 0, 1.0f);
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[15], 1.0f, 4, 0, 1);
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_HORSE_ACTION(false, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 756)[32], bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET((*&Local_4 + 756)[32], true);
				AI_ACTOR_FORCE_SPEED((*&Local_4 + 756)[32], 4);
				ACTOR_POP_NEXT_GAIT((*&Local_4 + 756)[32], 3, false);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, Local_4.f_1872, 4, 1, 0, 0, -3.0f);
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[16], 1.0f, 4, 0, 1);
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_HORSE_ACTION(false, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM((*&Local_4 + 756)[42], bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET((*&Local_4 + 756)[42], true);
				AI_ACTOR_FORCE_SPEED((*&Local_4 + 756)[42], 4);
				ACTOR_POP_NEXT_GAIT((*&Local_4 + 756)[42], 3, false);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, Local_4.f_1872, 3, 1, 0, 0, false);
				TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[21], 2.0f, 4, 0, 1);
				TASK_STAND_STILL(false, 0,1f, 0, 0);
				TASK_HORSE_ACTION(false, 0);
				TASK_HORSE_ACTION(false, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_641, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET(bLocal_641, true);
				AI_ACTOR_FORCE_SPEED(bLocal_641, 4);
				ACTOR_POP_NEXT_GAIT(bLocal_641, 3, false);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_641, true);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_641, 15.0f);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_629, 1);
				SET_ANIM_SET_FOR_ACTOR(bLocal_629, "Ranch06_stop_horses", 0);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 0,1f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_A");
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_B");
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_A");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_629, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET(bLocal_629, true);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_631, 1);
				SET_ANIM_SET_FOR_ACTOR(bLocal_631, "Ranch06_stop_horses", 0);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_B");
				TASK_STAND_STILL(false, 0,7f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_A");
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_B");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_631, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET(bLocal_631, true);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_637, 1);
				SET_ANIM_SET_FOR_ACTOR(bLocal_637, "Ranch06_stop_horses", 0);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_A");
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_B");
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_A");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_637, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET(bLocal_637, true);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_638, 1);
				SET_ANIM_SET_FOR_ACTOR(bLocal_638, "Ranch06_stop_horses", 0);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 0,2f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_B");
				TASK_STAND_STILL(false, 0,75f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_B");
				TASK_STAND_STILL(false, 0,5f, 0, 0);
				TASK_ACTION_PERFORM(false, "Ranch06_stop_horses/Stopherd_A");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_638, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET(bLocal_638, true);
				iLocal_999 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_274(&Local_525 + 4) < 3.0f)
			{
				Function_307(bLocal_575, (*&Local_4 + 1416)[1], 1, 1, 1);
				if (!IS_ACTOR_RIDING(Global_34573))
				{
					ACTOR_MOUNT_ACTOR(Global_34573, bLocal_575);
				}
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, Local_4.f_1824, 1, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET(Global_34573, true);
				Function_307(bLocal_624, (*&Local_4 + 1416)[4], 1, 1, 1);
				if (!IS_ACTOR_RIDING(bLocal_574))
				{
					ACTOR_MOUNT_ACTOR(bLocal_574, bLocal_624);
				}
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_OBJECT_ALONG_PATH(false, Global_34573, Local_4.f_1824, -1.0f, 0, 2.0f);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_574, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET(bLocal_574, true);
				iLocal_999 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_274(&Local_525 + 4) < 8.0f)
			{
				iLocal_999 = 45;
			}
			break;
		
		case 0x0000002D:
			if (Function_274(&Local_525 + 4) < 16.0f)
			{
				Function_307(bLocal_641, (*&Local_4 + 1416)[21], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(bLocal_633, bLocal_641);
				Function_307(bLocal_634, (*&Local_4 + 1416)[12], 1, 1, 1);
				TASK_STAND_STILL(bLocal_634, -1.0f, 0, 0);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, Local_4.f_1816, 4, 1, 0, 0, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_641, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET(bLocal_641, true);
				Function_307((*&Local_4 + 756)[02], (*&Local_4 + 1416)[12], 0, 1, 1);
				Function_307((*&Local_4 + 756)[12], (*&Local_4 + 1416)[13], 0, 1, 1);
				Function_307((*&Local_4 + 756)[22], (*&Local_4 + 1416)[14], 0, 1, 1);
				Function_307((*&Local_4 + 756)[32], (*&Local_4 + 1416)[15], 0, 1, 1);
				Function_307((*&Local_4 + 756)[42], (*&Local_4 + 1416)[16], 0, 1, 1);
				iLocal_999 = 55;
			}
			break;
		
		case 0x00000037:
			if (Function_274(&Local_525 + 4) < 19.0f)
			{
				RESET_ANIM_SET_FOR_ACTOR(bLocal_641, 0);
				RESET_ACTOR_GAITS(bLocal_641, 0);
				AI_ACTOR_FORCE_SPEED(bLocal_641, 3);
				ACTOR_POP_NEXT_GAIT(bLocal_641, 4, false);
				RESET_ANIM_SET_FOR_ACTOR(bLocal_633, 0);
				SET_CRIPPLE_FLAG(bLocal_633, 2);
				TASK_MOUNT(bLocal_633, bLocal_634, 0, 1, 2, 2147483647);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH(false, Local_4.f_1816, 4, 1, 0, 0, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_641, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET(bLocal_641, true);
				iLocal_999 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_274(&Local_525 + 4) < 22.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int Function_399() //Position: 0x1A1EC / 106988
{
	switch (iLocal_998)
	{
		case 0x0000000F:
			if (Function_274(&Local_525 + 4) < 11.0f)
			{
				Function_400();
				iLocal_998 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_274(&Local_525 + 4) < 22.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_400() //Position: 0x1A239 / 107065
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_CS04_v1_AA", "Ranch06_CS04_v1_AA", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_1700", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_CS04_v1_AB", "Ranch06_CS04_v1_AB", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_CS04_v1_AC", "Ranch06_CS04_v1_AC", false, 4, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_401() //Position: 0x1A309 / 107273
{
	TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_574, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_629, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_631, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_633, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_635, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_637, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_638, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_629, true);
	TASK_PRIORITY_SET(bLocal_631, true);
	TASK_PRIORITY_SET(bLocal_633, true);
	TASK_PRIORITY_SET(bLocal_635, true);
	TASK_PRIORITY_SET(bLocal_637, true);
	TASK_PRIORITY_SET(bLocal_638, true);
	TASK_STAND_STILL(bLocal_630, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_632, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_634, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_636, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_640, -1.0f, 0, 0);
	TASK_STAND_STILL(bLocal_639, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_630, true);
	TASK_PRIORITY_SET(bLocal_632, true);
	TASK_PRIORITY_SET(bLocal_634, true);
	TASK_PRIORITY_SET(bLocal_636, true);
	TASK_PRIORITY_SET(bLocal_640, true);
	TASK_PRIORITY_SET(bLocal_639, true);
	bLocal_657 = bLocal_630;
	TASK_STAND_STILL(bLocal_629, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(bLocal_629, 0);
	TASK_STAND_STILL(bLocal_657, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(bLocal_657, 0);
	Function_307(bLocal_657, (*&Local_4 + 1416)[6], 1, 1, 1);
	ACTOR_MOUNT_ACTOR(bLocal_629, bLocal_657);
	bLocal_657 = bLocal_632;
	TASK_STAND_STILL(bLocal_631, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(bLocal_631, 0);
	TASK_STAND_STILL(bLocal_657, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(bLocal_657, 0);
	Function_307(bLocal_657, (*&Local_4 + 1416)[7], 1, 1, 1);
	ACTOR_MOUNT_ACTOR(bLocal_631, bLocal_657);
	bLocal_657 = bLocal_634;
	TASK_STAND_STILL(bLocal_633, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(bLocal_633, 0);
	TASK_STAND_STILL(bLocal_657, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(bLocal_657, 0);
	Function_307(bLocal_657, (*&Local_4 + 1416)[8], 1, 1, 1);
	ACTOR_MOUNT_ACTOR(bLocal_633, bLocal_657);
	bLocal_657 = bLocal_640;
	TASK_STAND_STILL(bLocal_637, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(bLocal_637, 0);
	TASK_STAND_STILL(bLocal_657, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(bLocal_657, 0);
	Function_307(bLocal_657, (*&Local_4 + 1416)[10], 1, 1, 1);
	ACTOR_MOUNT_ACTOR(bLocal_637, bLocal_657);
	bLocal_657 = bLocal_639;
	TASK_STAND_STILL(bLocal_638, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(bLocal_638, 0);
	TASK_STAND_STILL(bLocal_657, -1.0f, 0, 0);
	RESET_ACTOR_GAITS(bLocal_657, 0);
	Function_307(bLocal_657, (*&Local_4 + 1416)[11], 1, 1, 1);
	ACTOR_MOUNT_ACTOR(bLocal_638, bLocal_657);
	Function_350(Global_34573, (*&Local_4 + 1416)[0], 1, 1, 1);
	Function_350(bLocal_574, (*&Local_4 + 1416)[3], 1, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 756)[02], -1.0f, 0, 0);
	Function_307((*&Local_4 + 756)[02], (*&Local_4 + 1416)[23], 1, 1, 1);
	RESET_ACTOR_GAITS((*&Local_4 + 756)[02], 0);
	TASK_STAND_STILL((*&Local_4 + 756)[12], -1.0f, 0, 0);
	Function_307((*&Local_4 + 756)[12], (*&Local_4 + 1416)[24], 1, 1, 1);
	RESET_ACTOR_GAITS((*&Local_4 + 756)[12], 0);
	TASK_STAND_STILL((*&Local_4 + 756)[22], -1.0f, 0, 0);
	Function_307((*&Local_4 + 756)[22], (*&Local_4 + 1416)[25], 1, 1, 1);
	RESET_ACTOR_GAITS((*&Local_4 + 756)[22], 0);
	TASK_STAND_STILL((*&Local_4 + 756)[32], -1.0f, 0, 0);
	Function_307((*&Local_4 + 756)[32], (*&Local_4 + 1416)[26], 1, 1, 1);
	RESET_ACTOR_GAITS((*&Local_4 + 756)[32], 0);
	TASK_STAND_STILL((*&Local_4 + 756)[42], -1.0f, 0, 0);
	Function_307((*&Local_4 + 756)[42], (*&Local_4 + 1416)[27], 1, 1, 1);
	RESET_ACTOR_GAITS((*&Local_4 + 756)[42], 0);
	TASK_STAND_STILL(bLocal_641, -1.0f, 0, 0);
	Function_307(bLocal_641, (*&Local_4 + 1416)[22], 1, 1, 1);
	RESET_ACTOR_GAITS(bLocal_641, 0);
	CLEAR_ACTOR_MAX_SPEED(bLocal_641);
	Function_307(bLocal_636, (*&Local_4 + 1684)[7], 1, 1, 1);
	Function_307(bLocal_635, (*&Local_4 + 1416)[9], 1, 1, 1);
	MEMORY_PREFER_WALKING(bLocal_635, true);
	SET_MOVER_FROZEN((*&Local_4 + 756)[32], true);
	return;
}

var Function_402(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7) //Position: 0x1A69E / 108190
{
	bool bVar0;
	
	if (bParam5)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 11, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Ranch06_CS04_v2", 11, 1);
	}
	Function_403(&bVar0, uParam2, bParam3, bParam4);
	if (iParam7 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_403(var uParam0, char* cParam1, var uParam2, var uParam3) //Position: 0x1A721 / 108321
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_414(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_413(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_412(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_411(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_410(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_409(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 6);
	Function_408(&bVar0, uParam2, uParam3);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 7);
	Function_407(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 8);
	Function_406(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 9);
	Function_405(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 10);
	Function_404(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 0, 1, 6.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 7, 8, 5.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 2, 3, 5.0f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 9, 10, 3.0f, 4, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 4, 5, 6.0f, 5, 0);
}

void Function_404(int iParam0) //Position: 0x1A830 / 108592
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 21,21346f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1804,914f, 27,60277f, 2006,326f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,143058f, -0,803729f, 7,7E-05f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_405(int iParam0) //Position: 0x1A89E / 108702
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 21,21346f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1800,72f, 26,64337f, 2009,771f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,056719f, -0,204421f, 7,6E-05f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_406(int iParam0) //Position: 0x1A90C / 108812
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1791,922f, 27,36373f, 1994,517f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,053249f, 2,626746f, 0,005386f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_407(int iParam0) //Position: 0x1A97A / 108922
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1790,927f, 27,42102f, 1994,441f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,135918f, 2,49469f, 0,005428f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_408(var uParam0, bool bParam1, bool bParam2) //Position: 0x1A9E8 / 109032
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 24.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -2,27667f, 2,304085f, -1,947047f, -8,758289f, -116,4565f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0,133085f, 1,610517f, 0,315723f, 0.0f, 0.0f, 0.0f, 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(*uParam0, 0.0f);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*uParam0, 100.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*uParam0, 55.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*uParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*uParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*uParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*uParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*uParam0, 16.0f);
	return;
}

void Function_409(int iParam0) //Position: 0x1AAB7 / 109239
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 52,1169f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1805,636f, 26,65559f, 2015,636f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,012323f, -0,397974f, 0,005378f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_410(int iParam0) //Position: 0x1AB25 / 109349
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 52,1169f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1807,776f, 26,64947f, 2014,552f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,012323f, -0,776699f, 0,005378f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_411(int iParam0) //Position: 0x1AB93 / 109459
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 52,1169f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1829,41f, 26,68877f, 2031,96f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,079443f, -1,186447f, 0,005395f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 200.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_412(int iParam0) //Position: 0x1AC39 / 109625
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 52,1169f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1834,447f, 26,86067f, 2036,284f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,068374f, -1,284227f, 0,00539f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(*iParam0, 200.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(*iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(*iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(*iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(*iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(*iParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(*iParam0, 16.0f);
	return;
}

void Function_413(int iParam0) //Position: 0x1ACDF / 109791
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1822,611f, 27,46034f, 2026,617f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,001232f, -0,885517f, 0,005378f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_414(var uParam0) //Position: 0x1AD4D / 109901
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -1828,563f, 27,53035f, 2033,77f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0,039245f, -0,861182f, 0,005382f, 1);
	RESET_CAMERASHOT_TARGET(*uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_415() //Position: 0x1ADBB / 110011
{
	if (!Function_276(&iLocal_793))
	{
		Function_221(&iLocal_793);
	}
	if (bLocal_796 > 0.0f || bLocal_796 < 5.0f)
	{
		bLocal_796 = RAND_FLOAT_RANGE(0,5f, 2.0f);
	}
	if (Function_274(&iLocal_793) <= bLocal_796)
	{
		bLocal_661 = RAND_INT_RANGE(true, 6);
		switch (bLocal_661)
		{
			case 0x00000001:
				bLocal_657 = bLocal_629;
				break;
			
			case 0x00000002:
				bLocal_657 = bLocal_631;
				break;
			
			case 0x00000003:
				bLocal_657 = bLocal_633;
				break;
			
			case 0x00000004:
				bLocal_657 = bLocal_635;
				break;
			
			case 0x00000005:
				bLocal_657 = bLocal_637;
				break;
			
			case 0x00000006:
				bLocal_657 = bLocal_638;
				break;
		}
		if (IS_ACTOR_VALID(bLocal_657))
		{
			if (!IS_ANY_SPEECH_PLAYING(bLocal_657))
			{
				if (Function_422())
				{
					SAY_SINGLE_LINE_CONTEXT(bLocal_657, 111, bLocal_641, 1, 1, 3, 4294967295, 4294967295, 0, 1);
				}
				else
				{
					SAY_SINGLE_LINE_CONTEXT(bLocal_657, 61, bLocal_641, 1, 1, 3, 4294967295, 4294967295, 0, 1);
				}
				PRINTSTRING(GET_ACTOR_ENUM_STRING(bLocal_657));
				PRINTSTRING(" saying WHOA!");
				PRINTNL();
				SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(bLocal_657), "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				Function_221(&iLocal_793);
				bLocal_796 = RAND_FLOAT_RANGE(0,5f, 2.0f);
			}
		}
	}
	return;
}

void Function_416(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x1AF1F / 110367
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
	if (iParam3 != Global_34165.f_48 && !Function_421())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_420(0);
	Function_419();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_418(uParam4, iVar0, iVar1);
	Function_417();
}

void Function_417() //Position: 0x1AFBC / 110524
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

void Function_418(int iParam0, bool bParam1, bool bParam2) //Position: 0x1AFFD / 110589
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

void Function_419() //Position: 0x1B163 / 110947
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_420(bool bParam0) //Position: 0x1B187 / 110983
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

bool Function_421() //Position: 0x1B1B6 / 111030
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

bool Function_422() //Position: 0x1B1D1 / 111057
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

bool Function_423(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x1B1E4 / 111076
{
	if (Function_298(&iParam0) == iParam7 || Function_421())
	{
		return 1;
	}
	return 0;
}

bool Function_424() //Position: 0x1B203 / 111107
{
	switch (iLocal_787)
	{
		case 0x00000006:
			if (!IS_ACTOR_VALID(bLocal_575))
			{
				if (Function_333())
				{
					bLocal_575 = Function_327(1, 0, 0, 0, 0, 0, 1, 0);
				}
			}
			else
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_575)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_575));
				}
				if (SQUAD_IS_VALID(Local_4.f_732))
				{
					Function_432(&Local_4 + 732, 0, 0);
					DESTROY_OBJECT(Local_4.f_732);
				}
				if (!SQUAD_IS_VALID(bLocal_663))
				{
					bLocal_663 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sMoiraSquad"));
					SQUAD_JOIN(bLocal_574, bLocal_663);
				}
				if (!iLocal_586[3])
				{
					if (SQUAD_IS_VALID(Local_4.f_860))
					{
						Function_323(&Local_4 + 860);
						DESTROY_OBJECT(Local_4.f_860);
					}
					if (!SQUAD_IS_VALID(Local_4.f_860))
					{
						Function_428();
					}
					if (SQUAD_IS_VALID(bLocal_664))
					{
						Function_322(&bLocal_664);
						DESTROY_OBJECT(bLocal_664);
					}
					if (SQUAD_IS_VALID(Local_4.f_752))
					{
						Function_322(&Local_4 + 752);
						DESTROY_OBJECT(Local_4.f_752);
					}
					if (SQUAD_IS_VALID(Local_4.f_804))
					{
						Function_322(&Local_4 + 804);
						DESTROY_OBJECT(Local_4.f_804);
					}
					if (!SQUAD_IS_VALID(bLocal_664))
					{
						bLocal_664 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sWildSquad"));
					}
					if (!SQUAD_IS_VALID(Local_4.f_752))
					{
						Function_355();
						bLocal_641 = (*&Local_4 + 736)[02];
					}
					if (!SQUAD_IS_VALID(Local_4.f_804))
					{
						Function_427();
						bLocal_664 = Local_4.f_804;
					}
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					Function_307(bLocal_575, (*&Local_4 + 1416)[2], 1, 1, 1);
					Function_307(bLocal_574, (*&Local_4 + 1416)[3], 1, 1, 1);
					Function_307((*&Local_4 + 668)[02], (*&Local_4 + 1416)[3], 1, 1, 1);
				}
				if (!IS_ACTOR_VALID(bLocal_624))
				{
					Function_326();
					bLocal_624 = (*&Local_4 + 668)[02];
					DECOR_SET_BOOL(bLocal_624, "bNoInjuryEjection", true);
					SET_ALLOW_RIDE_BY_PLAYER(bLocal_624, 0);
					TASK_PRIORITY_SET(bLocal_624, true);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_624, true);
					SET_ACTOR_FACTION(bLocal_624, 21);
					bLocal_625 = (*&Local_4 + 668)[12];
					TASK_PRIORITY_SET(bLocal_625, true);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_625, true);
					SET_ACTOR_FACTION(bLocal_625, 21);
				}
				if (!IS_ACTOR_VALID(bLocal_641))
				{
					if (IS_ACTOR_ALIVE((*&Local_4 + 736)[02]))
					{
						bLocal_641 = (*&Local_4 + 736)[02];
					}
					else
					{
						Function_355();
						bLocal_641 = (*&Local_4 + 736)[02];
					}
				}
				SET_ACTOR_INVULNERABILITY(bLocal_641, true);
				DECOR_REMOVE(bLocal_641, "CanBeLasso");
				SET_ACTOR_CAN_BE_HARDLOCKED(bLocal_641, 1);
				iLocal_787 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_ACTOR_RIDING(bLocal_629))
			{
				ACTOR_MOUNT_ACTOR(bLocal_629, bLocal_630);
			}
			if (!IS_ACTOR_RIDING(bLocal_631))
			{
				ACTOR_MOUNT_ACTOR(bLocal_631, bLocal_632);
			}
			if (!IS_ACTOR_RIDING(bLocal_633))
			{
				ACTOR_MOUNT_ACTOR(bLocal_633, bLocal_634);
			}
			if (!IS_ACTOR_RIDING(bLocal_635))
			{
				ACTOR_MOUNT_ACTOR(bLocal_635, bLocal_636);
			}
			if (!IS_ACTOR_RIDING(bLocal_637))
			{
				ACTOR_MOUNT_ACTOR(bLocal_637, bLocal_640);
			}
			if (!IS_ACTOR_RIDING(bLocal_638))
			{
				ACTOR_MOUNT_ACTOR(bLocal_638, bLocal_639);
			}
			Function_426();
			if (!iLocal_586[3])
			{
				Function_350(bLocal_629, (*&Local_4 + 1416)[6], 1, 1, 1);
				Function_350(bLocal_631, (*&Local_4 + 1416)[7], 1, 1, 1);
				Function_350(bLocal_633, (*&Local_4 + 1416)[8], 1, 1, 1);
				Function_350(bLocal_635, (*&Local_4 + 1416)[9], 1, 1, 1);
				Function_350(bLocal_637, (*&Local_4 + 1416)[10], 1, 1, 1);
				Function_350(bLocal_638, (*&Local_4 + 1416)[11], 1, 1, 1);
				Function_307(bLocal_641, (*&Local_4 + 1416)[21], 1, 1, 1);
				Function_307((*&Local_4 + 756)[02], (*&Local_4 + 1416)[12], 1, 1, 1);
				Function_307((*&Local_4 + 756)[12], (*&Local_4 + 1416)[13], 1, 1, 1);
				Function_307((*&Local_4 + 756)[22], (*&Local_4 + 1416)[14], 1, 1, 1);
				Function_307((*&Local_4 + 756)[32], (*&Local_4 + 1416)[15], 1, 1, 1);
				Function_307((*&Local_4 + 756)[42], (*&Local_4 + 1416)[16], 1, 1, 1);
			}
			SQUAD_GOALS_CLEAR(bLocal_664);
			Function_425(bLocal_664);
			TASK_STAND_STILL((*&Local_4 + 736)[02], -1.0f, 0, 0);
			TASK_STAND_STILL((*&Local_4 + 756)[02], -1.0f, 0, 0);
			TASK_STAND_STILL((*&Local_4 + 756)[12], -1.0f, 0, 0);
			TASK_STAND_STILL((*&Local_4 + 756)[22], -1.0f, 0, 0);
			TASK_STAND_STILL((*&Local_4 + 756)[32], -1.0f, 0, 0);
			TASK_STAND_STILL((*&Local_4 + 756)[42], -1.0f, 0, 0);
			SET_ACTOR_RIDEABLE((*&Local_4 + 736)[02], 1);
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				ACTOR_MOUNT_ACTOR(Global_34573, bLocal_575);
			}
			if (!IS_ACTOR_RIDING(bLocal_574))
			{
				ACTOR_MOUNT_ACTOR(bLocal_574, bLocal_624);
			}
			iLocal_787 = 8;
			break;
		
		case 0x00000008:
			if (!iLocal_586[3])
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_350(Global_34573, (*&Local_4 + 1416)[2], 1, 1, 1);
				Function_350(bLocal_574, (*&Local_4 + 1416)[3], 1, 1, 1);
				ACTOR_SET_NEXT_WEAPON(Global_34573, 21);
			}
			TASK_STAND_STILL(bLocal_574, -1.0f, 0, 0);
			DECOR_REMOVE(Global_34573, "HorseBreak");
			if (ACTOR_HAS_WEAPON(GET_PLAYER_ACTOR(0), 21))
			{
				ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), 21, 1);
			}
			else if (!ACTOR_HAS_WEAPON(GET_PLAYER_ACTOR(0), 21))
			{
				GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 21, false, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), 21, 1);
			}
			DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_574);
			CLEAR_LINKED_ANIM_TARGET(bLocal_574);
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_574, 1);
			iLocal_787 = 9;
			break;
		
		case 0x00000009:
			iLocal_787 = 104;
			return 1;
			break;
		
		case 0x00000068:
			return 0;
			break;
	}
	return 0;
}

void Function_425(bool bParam0) //Position: 0x1B768 / 112488
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

void Function_426() //Position: 0x1B79A / 112538
{
	if (IS_ACTOR_RIDING(bLocal_629))
	{
		bLocal_630 = GET_MOUNT(bLocal_629);
		SET_ACTOR_INVULNERABILITY(bLocal_630, true);
		TASK_PRIORITY_SET(bLocal_630, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_630, true);
		SET_ACTOR_FACTION(bLocal_630, 21);
	}
	if (IS_ACTOR_RIDING(bLocal_631))
	{
		bLocal_632 = GET_MOUNT(bLocal_631);
		SET_ACTOR_INVULNERABILITY(bLocal_632, true);
		TASK_PRIORITY_SET(bLocal_632, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_632, true);
		SET_ACTOR_FACTION(bLocal_632, 21);
	}
	if (IS_ACTOR_RIDING(bLocal_633))
	{
		bLocal_634 = GET_MOUNT(bLocal_633);
		SET_ACTOR_INVULNERABILITY(bLocal_634, true);
		TASK_PRIORITY_SET(bLocal_634, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_634, true);
		SET_ACTOR_FACTION(bLocal_634, 21);
	}
	if (IS_ACTOR_RIDING(bLocal_635))
	{
		bLocal_636 = GET_MOUNT(bLocal_635);
		SET_ACTOR_INVULNERABILITY(bLocal_636, true);
		TASK_PRIORITY_SET(bLocal_636, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_636, true);
		SET_ACTOR_FACTION(bLocal_636, 21);
	}
	if (IS_ACTOR_RIDING(bLocal_637))
	{
		bLocal_640 = GET_MOUNT(bLocal_637);
		SET_ACTOR_INVULNERABILITY(bLocal_640, true);
		TASK_PRIORITY_SET(bLocal_640, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_640, true);
		SET_ACTOR_FACTION(bLocal_640, 21);
	}
	if (IS_ACTOR_RIDING(bLocal_638))
	{
		bLocal_639 = GET_MOUNT(bLocal_638);
		SET_ACTOR_INVULNERABILITY(bLocal_639, true);
		TASK_PRIORITY_SET(bLocal_639, true);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_639, true);
		SET_ACTOR_FACTION(bLocal_639, 21);
	}
	return;
}

void Function_427() //Position: 0x1B8CC / 112844
{
	Local_4.f_800 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "herdHorseWild03set", 0);
	Local_4.f_804 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "herdHorseWild03"));
	(*&Local_4 + 756)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "wildHorse01", 976, -1828f, 26,10194f, 2680.0f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_800, (*&Local_4 + 756)[02]);
	SQUAD_JOIN((*&Local_4 + 756)[02], Local_4.f_804);
	SET_ACTOR_RIDEABLE((*&Local_4 + 756)[02], 0);
	DECOR_SET_FLOAT((*&Local_4 + 756)[02], "HorseCaptureBoltTime", 1000.0f);
	TASK_STAND_STILL((*&Local_4 + 756)[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 756)[02], 1);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 756)[02], true);
	Function_356((*&Local_4 + 756)[02]);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 756)[02], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 756)[02], true);
	(*&Local_4 + 756)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "wildHorse02", 977, -1824f, 27,10587f, 2680.0f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_800, (*&Local_4 + 756)[12]);
	SQUAD_JOIN((*&Local_4 + 756)[12], Local_4.f_804);
	SET_ACTOR_RIDEABLE((*&Local_4 + 756)[12], 0);
	DECOR_SET_FLOAT((*&Local_4 + 756)[12], "HorseCaptureBoltTime", 1000.0f);
	TASK_STAND_STILL((*&Local_4 + 756)[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 756)[12], 1);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 756)[12], true);
	Function_356((*&Local_4 + 756)[12]);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 756)[12], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 756)[12], true);
	(*&Local_4 + 756)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "wildHorse03", 980, -1832f, 25,09802f, 2680.0f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_800, (*&Local_4 + 756)[22]);
	SQUAD_JOIN((*&Local_4 + 756)[22], Local_4.f_804);
	SET_ACTOR_RIDEABLE((*&Local_4 + 756)[22], 0);
	DECOR_SET_FLOAT((*&Local_4 + 756)[22], "HorseCaptureBoltTime", 1000.0f);
	TASK_STAND_STILL((*&Local_4 + 756)[22], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 756)[22], 1);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 756)[22], true);
	Function_356((*&Local_4 + 756)[22]);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 756)[22], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 756)[22], true);
	(*&Local_4 + 756)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "wildHorse04", 981, -1836f, 25,09802f, 2680.0f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_800, (*&Local_4 + 756)[32]);
	SQUAD_JOIN((*&Local_4 + 756)[32], Local_4.f_804);
	SET_ACTOR_RIDEABLE((*&Local_4 + 756)[32], 0);
	DECOR_SET_FLOAT((*&Local_4 + 756)[32], "HorseCaptureBoltTime", 1000.0f);
	TASK_STAND_STILL((*&Local_4 + 756)[32], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 756)[32], 1);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 756)[32], true);
	Function_356((*&Local_4 + 756)[32]);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 756)[32], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 756)[32], true);
	(*&Local_4 + 756)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "wildHorse05", 976, -1828f, 26,10194f, 2684.0f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_800, (*&Local_4 + 756)[42]);
	SQUAD_JOIN((*&Local_4 + 756)[42], Local_4.f_804);
	SET_ACTOR_RIDEABLE((*&Local_4 + 756)[42], 0);
	DECOR_SET_FLOAT((*&Local_4 + 756)[42], "HorseCaptureBoltTime", 1000.0f);
	TASK_STAND_STILL((*&Local_4 + 756)[42], -1.0f, 0, 0);
	SET_ACTOR_FACTION((*&Local_4 + 756)[42], 1);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 756)[42], true);
	Function_356((*&Local_4 + 756)[42]);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 756)[42], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 756)[42], true);
	return;
}

void Function_428() //Position: 0x1BD2B / 113963
{
	if (!SQUAD_IS_VALID(Local_4.f_860))
	{
		Function_429();
		Function_387();
	}
	bLocal_629 = (*&Local_4 + 808)[02];
	GIVE_WEAPON_TO_ACTOR(bLocal_629, 21, 1.0f, 1, 1);
	SET_ACTOR_INVULNERABILITY(bLocal_629, true);
	SET_ACTOR_UPDATE_PRIORITY(bLocal_629, false);
	TASK_PRIORITY_SET(bLocal_629, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_629, true);
	SET_ACTOR_FACTION(bLocal_629, 21);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_629, 2);
	bLocal_631 = (*&Local_4 + 808)[12];
	GIVE_WEAPON_TO_ACTOR(bLocal_631, 21, 1.0f, 1, 1);
	SET_ACTOR_INVULNERABILITY(bLocal_631, true);
	SET_ACTOR_UPDATE_PRIORITY(bLocal_631, false);
	TASK_PRIORITY_SET(bLocal_631, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_631, true);
	SET_ACTOR_FACTION(bLocal_631, 21);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_631, 2);
	bLocal_633 = (*&Local_4 + 808)[22];
	GIVE_WEAPON_TO_ACTOR(bLocal_633, 21, 1.0f, 1, 1);
	SET_ACTOR_INVULNERABILITY(bLocal_633, true);
	SET_ACTOR_UPDATE_PRIORITY(bLocal_633, false);
	TASK_PRIORITY_SET(bLocal_633, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_633, true);
	SET_ACTOR_FACTION(bLocal_633, 21);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_633, 2);
	bLocal_635 = (*&Local_4 + 808)[32];
	GIVE_WEAPON_TO_ACTOR(bLocal_635, 21, 1.0f, 1, 1);
	SET_ACTOR_INVULNERABILITY(bLocal_635, true);
	SET_ACTOR_UPDATE_PRIORITY(bLocal_635, false);
	TASK_PRIORITY_SET(bLocal_635, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_635, true);
	SET_ACTOR_FACTION(bLocal_635, 21);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_635, 2);
	bLocal_637 = (*&Local_4 + 808)[42];
	GIVE_WEAPON_TO_ACTOR(bLocal_637, 21, 1.0f, 1, 1);
	SET_ACTOR_INVULNERABILITY(bLocal_637, true);
	SET_ACTOR_UPDATE_PRIORITY(bLocal_637, false);
	TASK_PRIORITY_SET(bLocal_637, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_637, true);
	SET_ACTOR_FACTION(bLocal_637, 21);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_637, 2);
	bLocal_638 = (*&Local_4 + 808)[52];
	GIVE_WEAPON_TO_ACTOR(bLocal_638, 21, 1.0f, 1, 1);
	SET_ACTOR_INVULNERABILITY(bLocal_638, true);
	SET_ACTOR_UPDATE_PRIORITY(bLocal_638, false);
	TASK_PRIORITY_SET(bLocal_638, true);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_638, true);
	SET_ACTOR_FACTION(bLocal_638, 21);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_638, 2);
	iLocal_992 = 0;
	iLocal_993 = 0;
	iLocal_994 = 0;
	iLocal_995 = 0;
	iLocal_996 = 0;
	iLocal_997 = 0;
	return;
}

void Function_429() //Position: 0x1BEE1 / 114401
{
	Local_4.f_860 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "henniganCowboys"));
	(*&Local_4 + 808)[02] = Function_430(Local_4, "cowboy04", 170, Function_53(), 976, -1668f, 39,15292f, 2584.0f, 0.0f, 33,56617f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 808)[02], Local_4.f_860);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 808)[02], 21, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 808)[02], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 808)[02]);
	SET_ACTOR_FACTION((*&Local_4 + 808)[02], 20);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 808)[02], false);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 808)[02], true);
	(*&Local_4 + 808)[12] = Function_430(Local_4, "cowboy05", 171, Function_53(), 976, -1670,79f, 39,15992f, 2586,379f, 0.0f, 54,31911f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 808)[12], Local_4.f_860);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 808)[12], 21, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 808)[12], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 808)[12]);
	SET_ACTOR_FACTION((*&Local_4 + 808)[12], 20);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 808)[12], false);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 808)[12], true);
	(*&Local_4 + 808)[22] = Function_430(Local_4, "cowboy06", 172, Function_53(), 976, -1652f, 39,15292f, 2608.0f, 0.0f, 192,4064f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 808)[22], Local_4.f_860);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 808)[22], 21, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 808)[22], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 808)[22]);
	SET_ACTOR_FACTION((*&Local_4 + 808)[22], 20);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 808)[22], false);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 808)[22], true);
	(*&Local_4 + 808)[32] = Function_430(Local_4, "cowboy07", 173, Function_53(), 976, -1652f, 40,64886f, 2612.0f, 0.0f, 217,2159f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 808)[32], Local_4.f_860);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 808)[32], 21, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 808)[32], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 808)[32]);
	SET_ACTOR_FACTION((*&Local_4 + 808)[32], 20);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 808)[32], false);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 808)[32], true);
	(*&Local_4 + 808)[42] = Function_430(Local_4, "cowboy08", 174, Function_53(), 976, -1664f, 40,71531f, 2604.0f, 0.0f, 90,62232f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 808)[42], Local_4.f_860);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 808)[42], 21, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 808)[42], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 808)[42]);
	SET_ACTOR_FACTION((*&Local_4 + 808)[42], 20);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 808)[42], false);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 808)[42], true);
	(*&Local_4 + 808)[52] = Function_430(Local_4, "cowboy09", 175, Function_53(), 976, -1664f, 41,22569f, 2608.0f, 0.0f, 95,7112f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 808)[52], Local_4.f_860);
	GIVE_WEAPON_TO_ACTOR((*&Local_4 + 808)[52], 21, 0,5f, 1, 1);
	SET_ACTOR_INVULNERABILITY((*&Local_4 + 808)[52], true);
	DELETE_ALL_WEAPONS_FROM_ACTOR((*&Local_4 + 808)[52]);
	SET_ACTOR_FACTION((*&Local_4 + 808)[52], 20);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 808)[52], false);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 808)[52], true);
	return;
}

var Function_430(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x1C28C / 115340
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_431(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_431(bParam4))
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

bool Function_431(int iParam0) //Position: 0x1C3B1 / 115633
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_432(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1C3C8 / 115656
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
			if (bParam2)
			{
				if (!Function_433(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_433(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1C444 / 115780
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

bool Function_434() //Position: 0x1C45E / 115806
{
	Function_319(&Local_4 + 444, 978, 2, 0);
	Function_319(&Local_4 + 444, 976, 2, 0);
	Function_319(&Local_4 + 444, 977, 2, 0);
	Function_319(&Local_4 + 444, 170, 2, 0);
	Function_319(&Local_4 + 444, 171, 2, 0);
	Function_319(&Local_4 + 444, 172, 2, 0);
	Function_319(&Local_4 + 444, 173, 2, 0);
	Function_319(&Local_4 + 444, 174, 2, 0);
	Function_319(&Local_4 + 444, 175, 2, 0);
	if (Function_310(&Local_4 + 444))
	{
		return 1;
	}
	return 0;
}

void Function_435() //Position: 0x1C4EA / 115946
{
	if (!IS_VOLUME_VALID((*&Local_4 + 972)[5]))
	{
		(*&Local_4 + 972)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseBreaking_StayOutVolume", 2, -1960,473f, 28,1098f, 2081,119f, 0.0f, -32,94701f, 0.0f, 78,20216f, 58,59838f, 90,4452f);
	}
	if (ANIMAL_ACTOR_GET_DOMESTICATION(bLocal_641) != 0)
	{
		if (!GET_MOUNT(Global_34573) != bLocal_641)
		{
			if (!IS_BLIP_VALID(bLocal_745))
			{
				bLocal_745 = ADD_BLIP_FOR_ACTOR(bLocal_641, 418, 0, 2, 0);
			}
			else if (!IS_BLIP_VISIBLE(bLocal_745))
			{
				SET_BLIP_VISIBLE(bLocal_745, true);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_641)))
			{
				REMOVE_BLIP(bLocal_745);
				bLocal_745 = ADD_BLIP_FOR_ACTOR(bLocal_641, 418, 0, 2, 0);
			}
		}
		if (IS_ACTOR_MOUNTED(bLocal_641))
		{
			if (iLocal_774)
			{
				if (GET_TASK_STATUS(bLocal_641, 25) == 1)
				{
					TASK_CLEAR(bLocal_641);
					iLocal_774 = 0;
				}
			}
		}
		else if (GET_LASSO_TARGET(Global_34573) == bLocal_641)
		{
			if (GET_TASK_STATUS(bLocal_641, 0) != 1)
			{
				CLEAR_ACTOR_MIN_SPEED(bLocal_641);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_HORSE_ACTION(false, 0);
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_641, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				iLocal_774 = 0;
			}
		}
		else
		{
			if (ACTOR_HAS_ANIM_SET(bLocal_641, "horse_breaking"))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_641, "standing"))
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_641, 0);
				}
			}
			if (IS_ACTOR_IN_VOLUME(bLocal_641, (*&Local_4 + 972)[5]))
			{
				if (!Function_276(&iLocal_643))
				{
					Function_221(&iLocal_643);
				}
				else if (Function_274(&iLocal_643) < 15.0f)
				{
					TASK_CLEAR(bLocal_641);
					iLocal_774 = 0;
					Function_221(&iLocal_643);
					switch (iLocal_662)
					{
						case 0x00000001:
							iLocal_662++;
							TASK_OVERRIDE_SET_MOVETYPE(bLocal_641, 4);
							break;
						
						case 0x00000003:
							iLocal_662++;
							TASK_OVERRIDE_SET_MOVETYPE(bLocal_641, 2);
							break;
						
						default:
							if (iLocal_662 < 3)
							{
								iLocal_662++;
							}
							break;
						}
				}
				if (DECOR_GET_BOOL(bLocal_641, "BeLassoBounceOff"))
				{
					DECOR_SET_BOOL(bLocal_641, "BeLassoBounceOff", false);
				}
				if (!iLocal_774)
				{
					if (Function_422())
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_641, Local_4.f_1848, 3, 0, 0, 1, false);
					}
					else
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_641, Local_4.f_1852, 3, 0, 0, 1, false);
					}
					CLEAR_ACTOR_MAX_SPEED(bLocal_641);
					SET_ACTOR_MIN_SPEED(bLocal_641, 2);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_641);
					ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_641, (*&Local_4 + 972)[5]);
					DECOR_SET_BOOL(bLocal_641, "CanBeLasso", true);
					DECOR_SET_BOOL(bLocal_641, "BeLassoBounceOff", false);
					iLocal_774 = 1;
				}
			}
			else
			{
				Function_415();
				if (iLocal_774)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_641, Local_4.f_1816, 3, 0, 0, 1, false);
					iLocal_774 = 0;
				}
				if (GET_TASK_STATUS(bLocal_641, 43) != 1)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_641, Local_4.f_1816, 3, 0, 0, 1, false);
				}
				if (DECOR_GET_BOOL(bLocal_641, "BeLassoBounceOff"))
				{
					if (!ACTORS_IN_RANGE(Global_34573, bLocal_641, 20.0f))
					{
						if (GET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_641) == 17.0f)
						{
							SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_641, 17.0f);
							TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_641, 17.0f);
						}
					}
					else
					{
						TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_641, 22.0f);
						SET_ACTOR_SPEED(bLocal_641, 22.0f);
						if (GET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_641) == 22.0f)
						{
							SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_641, 22.0f);
							TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_641, 22.0f);
						}
					}
				}
			}
		}
	}
	else if (GET_TASK_STATUS(bLocal_641, 43) != 1 || GET_TASK_STATUS(bLocal_641, 37) != 1)
	{
		TASK_CLEAR(bLocal_641);
	}
	return;
}

void Function_436() //Position: 0x1CBDC / 117724
{
	if (IS_ACTOR_RIDING(Global_34573))
	{
		if (GET_MOUNT(Global_34573) != bLocal_575)
		{
			bLocal_657 = GET_MOUNT(Global_34573);
			if (ANIMAL_ACTOR_GET_DOMESTICATION(bLocal_657) == 0)
			{
				bLocal_678 = true;
				if (IS_ACTOR_VALID(bLocal_627))
				{
					if (bLocal_657 == bLocal_627)
					{
						bLocal_678 = false;
					}
				}
				if (IS_ACTOR_VALID(bLocal_656))
				{
					if (bLocal_657 == bLocal_656)
					{
						bLocal_678 = false;
					}
				}
				if (IS_ACTOR_VALID(bLocal_641))
				{
					if (bLocal_657 == bLocal_641)
					{
						bLocal_678 = false;
					}
				}
				if (IS_ACTOR_VALID(bLocal_624))
				{
					if (bLocal_657 == bLocal_624)
					{
						bLocal_678 = false;
						SET_ALLOW_RIDE_BY_PLAYER(bLocal_624, 0);
						if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "Buck_eject"))
						{
							SET_ACTION_NODE_FOR_ACTOR(Global_34573, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
						}
					}
				}
				if (IS_ACTOR_VALID(bLocal_625))
				{
					if (bLocal_657 == bLocal_625)
					{
						bLocal_678 = false;
						SET_ALLOW_RIDE_BY_PLAYER(bLocal_625, 0);
						if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "Buck_eject"))
						{
							SET_ACTION_NODE_FOR_ACTOR(Global_34573, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
						}
					}
				}
				if (bLocal_678)
				{
					if (IS_ACTOR_VALID(bLocal_575))
					{
						Function_217(bLocal_575);
						TASK_CLEAR(bLocal_575);
					}
					bLocal_575 = bLocal_657;
					Function_353(bLocal_575, 0);
				}
			}
		}
	}
	return;
}

void Function_437() //Position: 0x1CD7C / 118140
{
	if (iLocal_682)
	{
		if (ACTORS_IN_RANGE(Global_34573, bLocal_638, 10.0f))
		{
			Function_438();
			iLocal_682 = 0;
		}
	}
	if (IS_ACTOR_RIDING(bLocal_638) && GET_MOUNT(bLocal_638) != bLocal_639)
	{
		if (IS_ACTOR_VALID(bLocal_642))
		{
			if (IS_ACTOR_RIDEABLE(bLocal_642))
			{
				if (GET_LASSO_TARGET(bLocal_638) == bLocal_642)
				{
					SET_ACTOR_RIDEABLE(bLocal_642, 0);
				}
			}
			else if (!GET_LASSO_TARGET(bLocal_638) != bLocal_642)
			{
				SET_ACTOR_RIDEABLE(bLocal_642, 1);
			}
		}
		if (GET_LASSO_TARGET(Global_34573) == bLocal_641)
		{
			if (!GET_TASK_STATUS(bLocal_638, 67) != 1)
			{
				if (!IS_ACTOR_VALID(bLocal_642))
				{
					bLocal_642 = bLocal_575;
				}
				TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_638, bLocal_642, 10.0f, 4);
				ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_638, bLocal_642, 25.0f, 10.0f, 20.0f);
			}
		}
		else if (GET_MOUNT(Global_34573) == bLocal_641)
		{
			if (!GET_TASK_STATUS(bLocal_638, 0) != 1)
			{
				if (!IS_ACTOR_VALID(bLocal_642))
				{
					bLocal_642 = bLocal_575;
				}
				GET_OBJECT_POSITION((*&Local_4 + 1684)[20], &Local_600);
				GIVE_WEAPON_TO_ACTOR(bLocal_638, 21, false, 1, 1);
				MEMORY_PREFER_RIDING(bLocal_638, true);
				ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_638, bLocal_642, 25.0f, 10.0f, 20.0f);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_ACTOR(false, bLocal_642, 10.0f, 4);
				TASK_USE_LASSO(false, bLocal_642, 1.0f, 2.0f, 1, 2);
				TASK_GO_TO_COORD(false, &Local_600, 4);
				TASK_FACE_ACTOR(false, bLocal_574, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_638, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
			}
		}
		else if (GET_TASK_STATUS(bLocal_638, 0) == 1)
		{
			if (!ANIMAL_ACTOR_GET_DOMESTICATION(bLocal_641) != 0)
			{
				DETACH_LASSO(bLocal_638);
				TASK_CLEAR(bLocal_638);
			}
		}
	}
	else if (!GET_TASK_STATUS(bLocal_638, 11) != 1)
	{
		TASK_MOUNT(bLocal_638, bLocal_639, 0, 1, 2, 2147483647);
	}
	return;
}

void Function_438() //Position: 0x1CF38 / 118584
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Ranch06_TakesHorse", "Ranch06_TakesHorse", false, 1, 1, 0, 1);
		Function_287(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_439(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x1CF86 / 118662
{
	*iParam0 = { StackVal, StackVal, *iParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_447(Global_34573, bParam3, iParam2))
	{
		Function_228(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_447(Global_34573, bParam3, bParam1))
	{
		if (!Function_446(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_445(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_444(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_443(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_443(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_446(2))
	{
		Function_442(2);
		if (!Function_441())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_440();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_217(bParam3);
				Function_205(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_443(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_443(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_440() //Position: 0x1D11A / 119066
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

bool Function_441() //Position: 0x1D145 / 119109
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

void Function_442(bool bParam0) //Position: 0x1D189 / 119177
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

void Function_443(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x1D1EC / 119276
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

void Function_444(bool bParam0) //Position: 0x1D28D / 119437
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

void Function_445(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x1D2F0 / 119536
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

bool Function_446(bool bParam0) //Position: 0x1D343 / 119619
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

bool Function_447(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1D38A / 119690
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

void Function_448() //Position: 0x1D49B / 119963
{
	if (iLocal_533 <= 6 && iLocal_533 > 105)
	{
		Function_436();
		Function_486(bLocal_664, &bLocal_789);
		if (!iLocal_677)
		{
			if (SQUAD_IS_VALID(bLocal_665))
			{
				Function_484(bLocal_664, bLocal_665, bLocal_641);
			}
			else
			{
				bLocal_665 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sWildStraggle"));
				Function_387();
			}
			if (IS_ACTOR_VALID(bLocal_641))
			{
				Function_482(bLocal_664, bLocal_641);
				if (!iLocal_799)
				{
					if (Function_480(bLocal_641, (*&Local_4 + 1416)[22]) > 100.0f || Function_480(Global_34573, (*&Local_4 + 1416)[22]) > 100.0f)
					{
						Function_479();
						iLocal_799 = 1;
					}
				}
			}
			else
			{
				bLocal_641 = (*&Local_4 + 736)[02];
				Function_387();
				SET_ACTOR_INVULNERABILITY(bLocal_641, true);
			}
		}
	}
	switch (iLocal_533)
	{
		case 0x00000000:
			if (Function_367(iLocal_532))
			{
				Function_221(&iLocal_577);
				iLocal_533 = 1;
				iLocal_786 = 6;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_586[2])
			{
				if ((STREAMING_IS_WORLD_LOADED() && (Function_364(iLocal_572) || iLocal_572 != 4294967295)) && Function_478())
				{
					Function_221(&iLocal_577);
					iLocal_533 = 2;
				}
			}
			else if (Function_478())
			{
				Function_221(&iLocal_577);
				iLocal_533 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_477())
			{
				Function_221(&iLocal_577);
				iLocal_533 = 4;
				Function_234(iLocal_532);
				Function_416(StackVal, StackVal, Function_234(iLocal_532), iLocal_532, Global_30628[0], Function_237(iLocal_532), 2);
				Function_361(&iLocal_622, 6, 0, 4294967295, 4294967295);
				if (!SQUAD_IS_VALID(bLocal_663))
				{
					bLocal_663 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sMoiraSquad"));
				}
				if (SQUAD_GET(bLocal_574) != bLocal_663)
				{
					SQUAD_JOIN(bLocal_574, bLocal_663);
				}
				if (!SQUAD_GOAL_IS_VALID(bLocal_666))
				{
					SQUAD_GOALS_CLEAR(bLocal_663);
					bLocal_666 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(bLocal_663, 0, 4294967295, Local_4.f_1812, 2, 1, 1);
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(bLocal_663, bLocal_666, 8, 1);
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(bLocal_663, bLocal_666, 1, 0);
				}
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_663, bLocal_666, 4);
				if (SQUAD_GET(bLocal_629) != bLocal_663)
				{
					SQUAD_JOIN(bLocal_629, bLocal_663);
				}
				if (SQUAD_GET(bLocal_631) != bLocal_663)
				{
					SQUAD_JOIN(bLocal_631, bLocal_663);
				}
				if (SQUAD_GET(bLocal_633) != bLocal_663)
				{
					SQUAD_JOIN(bLocal_633, bLocal_663);
				}
				if (SQUAD_GET(bLocal_635) != bLocal_663)
				{
					SQUAD_JOIN(bLocal_635, bLocal_663);
				}
				if (SQUAD_GET(bLocal_637) != bLocal_663)
				{
					SQUAD_JOIN(bLocal_637, bLocal_663);
				}
				if (SQUAD_GET(bLocal_638) != bLocal_663)
				{
					SQUAD_JOIN(bLocal_638, bLocal_663);
				}
				Function_425(bLocal_663);
				if (!HUD_IS_FADED())
				{
					SET_ACTOR_INVULNERABILITY(Global_34573, true);
					Function_223(&(Local_845[017]), 0);
					Function_223(&(Local_845[217]), 0);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				TASK_CLEAR(Global_34573);
			}
			break;
		
		case 0x00000004:
			Function_361(&iLocal_622, 6, 0, 4294967295, 4294967295);
			iLocal_781 = 6;
			iLocal_782 = 6;
			Function_307((*&Local_4 + 736)[02], (*&Local_4 + 1284)[12], 1, 1, 1);
			Function_307((*&Local_4 + 756)[02], (*&Local_4 + 1284)[13], 1, 1, 1);
			Function_307((*&Local_4 + 756)[12], (*&Local_4 + 1284)[14], 1, 1, 1);
			Function_307((*&Local_4 + 756)[22], (*&Local_4 + 1284)[15], 1, 1, 1);
			Function_307((*&Local_4 + 756)[32], (*&Local_4 + 1284)[16], 1, 1, 1);
			Function_307((*&Local_4 + 756)[42], (*&Local_4 + 1284)[17], 1, 1, 1);
			Function_476(bLocal_664, 4, 1);
			bLocal_641 = (*&Local_4 + 736)[02];
			SET_ACTOR_INVULNERABILITY(bLocal_641, true);
			SQUAD_GOALS_CLEAR(Local_4.f_752);
			Function_425(Local_4.f_752);
			ADD_BLIP_FOR_ACTOR(bLocal_641, 418, 0, 2, 0);
			SQUAD_JOIN((*&Local_4 + 736)[02], bLocal_664);
			iLocal_655 = UNK_0x48588CCB(bLocal_664, 0, 4294967295, 1);
			Function_475(bLocal_664, iLocal_655);
			Function_425(bLocal_664);
			Function_474(bLocal_664, (*&Local_4 + 912)[6]);
			Function_474(bLocal_664, (*&Local_4 + 912)[7]);
			Function_474(bLocal_664, (*&Local_4 + 912)[8]);
			Function_474(bLocal_664, (*&Local_4 + 912)[9]);
			Function_474(bLocal_664, (*&Local_4 + 912)[10]);
			Function_474(bLocal_664, (*&Local_4 + 912)[11]);
			if (IS_BLIP_VALID(Function_473(3)))
			{
				Function_204(3, 0, 1);
			}
			else if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_574)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_574));
			}
			Function_379("Ranch06_obj03b");
			MEMORY_PREFER_RIDING(bLocal_574, true);
			Function_221(&iLocal_736);
			iLocal_671 = 0;
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_387();
			if (HUD_IS_FADED())
			{
				Function_350(Global_34573, (*&Local_4 + 1284)[1], 1, 1, 1);
				Function_350(bLocal_574, (*&Local_4 + 1284)[3], 1, 1, 1);
				Function_307(bLocal_630, (*&Local_4 + 1284)[19], 1, 1, 1);
				Function_307(bLocal_632, (*&Local_4 + 1284)[20], 1, 1, 1);
				Function_307(bLocal_634, (*&Local_4 + 1284)[21], 1, 1, 1);
				Function_307(bLocal_636, (*&Local_4 + 1416)[11], 1, 1, 1);
				Function_307(bLocal_640, (*&Local_4 + 1416)[19], 1, 1, 1);
				Function_307(bLocal_639, (*&Local_4 + 1416)[20], 1, 1, 1);
				if (!IS_ACTOR_RIDING(bLocal_629))
				{
					ACTOR_MOUNT_ACTOR(bLocal_629, bLocal_630);
				}
				if (!IS_ACTOR_RIDING(bLocal_631))
				{
					ACTOR_MOUNT_ACTOR(bLocal_631, bLocal_632);
				}
				if (!IS_ACTOR_RIDING(bLocal_633))
				{
					ACTOR_MOUNT_ACTOR(bLocal_633, bLocal_634);
				}
				if (!IS_ACTOR_RIDING(bLocal_635))
				{
					ACTOR_MOUNT_ACTOR(bLocal_635, bLocal_636);
				}
				if (!IS_ACTOR_RIDING(bLocal_637))
				{
					ACTOR_MOUNT_ACTOR(bLocal_637, bLocal_640);
				}
				if (!IS_ACTOR_RIDING(bLocal_638))
				{
					ACTOR_MOUNT_ACTOR(bLocal_638, bLocal_639);
				}
				TASK_STAND_STILL(bLocal_635, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_637, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_638, -1.0f, 0, 0);
			}
			Function_221(&iLocal_577);
			iLocal_533 = 6;
			break;
		
		case 0x00000006:
			if (Function_274(&iLocal_577) < 3.0f)
			{
				if (Function_472(Local_4.f_860) && Function_470(Local_4.f_860, 1))
				{
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
						SET_ACTOR_INVULNERABILITY(Global_34573, false);
					}
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_663, bLocal_666, 4);
					Function_469();
					Function_468();
					Function_221(&iLocal_577);
					iLocal_533 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (Function_449())
			{
				if (IS_ACTOR_VALID(bLocal_800))
				{
					DETACH_LASSO(Global_34573);
					TASK_CLEAR(bLocal_800);
					bLocal_800 = "";
				}
				Function_361(&iLocal_622, 56, 0, 4294967295, 4294967295);
				SET_ACTOR_INVULNERABILITY(Global_34573, true);
				Function_223(&(Local_845[017]), 0);
				Function_223(&(Local_845[217]), 0);
				Function_221(&iLocal_577);
				Function_221(&iLocal_580);
				Function_221(&iLocal_583);
				iLocal_533 = 106;
			}
			break;
		
		case 0x0000006A:
			if (DECOR_CHECK_EXIST(Global_34573, "herding"))
			{
				DECOR_REMOVE(Global_34573, "herding");
			}
			Function_365();
			STREAMING_UNLOAD_BOUNDS();
			Function_210();
			iLocal_586[3] = 1;
			Function_221(&iLocal_577);
			iLocal_532 = 4;
			iLocal_533 = 0;
			break;
	}
	return;
}

bool Function_449() //Position: 0x1DB36 / 121654
{
	Function_467();
	switch (iLocal_991)
	{
		case 0x00000000:
			Function_466();
			if (!iLocal_674)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_274(&iLocal_577) < 8.0f)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE())
					{
						Function_202();
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_641)))
						{
							ADD_BLIP_FOR_ACTOR(bLocal_641, 418, 0, 2, 0);
							Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						iLocal_674 = 1;
						MEMORY_PREFER_RIDING(bLocal_629, true);
						MEMORY_PREFER_RIDING(bLocal_631, true);
						MEMORY_PREFER_RIDING(bLocal_633, true);
						MEMORY_PREFER_RIDING(bLocal_635, true);
						MEMORY_PREFER_RIDING(bLocal_637, true);
						MEMORY_PREFER_RIDING(bLocal_638, true);
						Function_221(&iLocal_577);
					}
				}
			}
			if (!iLocal_675 && iLocal_674)
			{
				if (Function_464(bLocal_574, Local_4.f_1812) > 10.0f)
				{
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_574);
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(bLocal_663, bLocal_666, 0, 0);
					Function_221(&iLocal_577);
					Function_463();
					iLocal_675 = 1;
				}
			}
			if (iLocal_675)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_274(&iLocal_577) < 8.0f)
				{
					Function_462();
					iLocal_991 = 1;
					Function_221(&iLocal_736);
					Function_221(&iLocal_577);
					bLocal_660 = RAND_INT_RANGE(3, 7);
					Function_379("Ranch06_obj03b");
					if (!iLocal_773)
					{
						Function_132("Ranch06_wild_blip_help", 0x41200000, 1, 0, 2, 1, 0);
						iLocal_773 = 1;
					}
					bLocal_766 = (Function_371(Global_34573, bLocal_641) + 20.0f);
					bLocal_767 = (bLocal_766 + 75.0f);
					iLocal_674 = 0;
					iLocal_675 = 0;
					iLocal_676 = 0;
					Function_221(&iLocal_577);
				}
			}
			break;
		
		case 0x00000001:
			Function_461();
			Function_460();
			Function_466();
			Function_439(&iLocal_583, bLocal_766, bLocal_767, bLocal_641, "Ranch06_herd_return", "Herd_abandoned", &bLocal_598, 0, 0, 0, 325, 1);
			Function_458();
			Function_457();
			if (Function_274(&iLocal_577) <= IntToFloat(bLocal_660))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_480(Global_34573, bLocal_789) > 20.0f)
					{
						if (!HUD_IS_SHOWING_OBJECTIVE())
						{
							Function_456();
							Function_221(&iLocal_577);
							bLocal_660 = RAND_INT_RANGE(3, 7);
						}
					}
				}
			}
			if (Function_455(bLocal_664, (*&Local_4 + 972)[0]) || Function_455(Local_4.f_752, (*&Local_4 + 972)[0]))
			{
				iLocal_677 = 1;
				_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(bLocal_664, iLocal_655);
				_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(Local_4.f_752, iLocal_654);
				SQUAD_GOALS_CLEAR(bLocal_664);
				SQUAD_GOALS_CLEAR(Local_4.f_752);
				SQUAD_GOALS_CLEAR(bLocal_665);
				bLocal_609 = false;
				while (bLocal_609 <= SQUAD_GET_SIZE(bLocal_664))
				{
					bLocal_610 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_664, bLocal_609);
					if (IS_ACTOR_VALID(bLocal_610))
					{
						if (IS_ACTOR_ALIVE(bLocal_610))
						{
							SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_610, 22.0f);
						}
					}
					bLocal_609++;
				}
				GET_OBJECT_POSITION((*&Local_4 + 1416)[13], &Local_600);
				TASK_GO_TO_COORD_AND_STAY(StackVal, (*&Local_4 + 756)[02], &Local_600, 3);
				TASK_PRIORITY_SET((*&Local_4 + 756)[02], true);
				GET_OBJECT_POSITION((*&Local_4 + 1416)[14], &Local_600);
				TASK_GO_TO_COORD_AND_STAY(StackVal, (*&Local_4 + 756)[12], &Local_600, 3);
				TASK_PRIORITY_SET((*&Local_4 + 756)[12], true);
				GET_OBJECT_POSITION((*&Local_4 + 1416)[15], &Local_600);
				TASK_GO_TO_COORD_AND_STAY(StackVal, (*&Local_4 + 756)[22], &Local_600, 3);
				TASK_PRIORITY_SET((*&Local_4 + 756)[22], true);
				GET_OBJECT_POSITION((*&Local_4 + 1416)[16], &Local_600);
				TASK_GO_TO_COORD_AND_STAY(StackVal, (*&Local_4 + 756)[32], &Local_600, 3);
				TASK_PRIORITY_SET((*&Local_4 + 756)[32], true);
				GET_OBJECT_POSITION((*&Local_4 + 1416)[17], &Local_600);
				TASK_GO_TO_COORD_AND_STAY(StackVal, (*&Local_4 + 756)[42], &Local_600, 3);
				TASK_PRIORITY_SET((*&Local_4 + 756)[42], true);
				bLocal_641 = (*&Local_4 + 736)[02];
				Function_387();
				SET_ACTOR_INVULNERABILITY(bLocal_641, true);
				TASK_CLEAR(bLocal_641);
				GET_OBJECT_POSITION((*&Local_4 + 1416)[21], &Local_600);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &Local_600, 3.0f, 3);
				TASK_HORSE_ACTION(false, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_641, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET(bLocal_641, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_641, false);
				if (IS_BLIP_VALID(bLocal_745))
				{
					REMOVE_BLIP(bLocal_745);
				}
				Function_202();
				Function_206(bLocal_664);
				Function_453();
				iLocal_677 = 1;
				Function_452();
				Function_379("Ranch06_obj03c");
				Function_221(&iLocal_577);
				iLocal_991 = 3;
				return 1;
			}
			break;
		
		case 0x00000002:
			Function_460();
			Function_466();
			Function_457();
			Function_439(&iLocal_583, bLocal_766, bLocal_767, bLocal_641, "Ranch06_herd_return", "Herd_abandoned", &bLocal_598, 0, 0, 0, 325, 1);
			if (!iLocal_674)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_274(&iLocal_577) < 8.0f)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE())
					{
						Function_451();
						Function_361(&iLocal_622, 56, 0, 4294967295, 4294967295);
						iLocal_674 = 1;
						Function_221(&iLocal_577);
					}
				}
			}
			if (!iLocal_675 && iLocal_674)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_274(&iLocal_577) < 8.0f)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE())
					{
						iLocal_675 = 1;
						Function_286();
						Function_221(&iLocal_577);
					}
				}
			}
			if (iLocal_675 && !iLocal_676)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_274(&iLocal_577) < 8.0f)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !HUD_IS_SHOWING_HELP_TEXT())
					{
						Function_456();
						iLocal_676 = 1;
						Function_221(&iLocal_577);
					}
				}
			}
			if (!iLocal_677)
			{
				Function_460();
				if (Function_455(bLocal_664, (*&Local_4 + 972)[0]) || Function_455(Local_4.f_752, (*&Local_4 + 972)[0]))
				{
					iLocal_677 = 1;
					_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(bLocal_664, iLocal_655);
					_SQUAD_FLOCK_CLEAR_EXTERNAL_INFLUENCES(Local_4.f_752, iLocal_654);
					SQUAD_GOALS_CLEAR(bLocal_664);
					SQUAD_GOALS_CLEAR(Local_4.f_752);
					SQUAD_GOALS_CLEAR(bLocal_665);
					bLocal_609 = false;
					while (bLocal_609 <= SQUAD_GET_SIZE(bLocal_664))
					{
						bLocal_610 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_664, bLocal_609);
						if (IS_ACTOR_VALID(bLocal_610))
						{
							if (IS_ACTOR_ALIVE(bLocal_610))
							{
								SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_610, 22.0f);
							}
						}
						bLocal_609++;
					}
					GET_OBJECT_POSITION((*&Local_4 + 1416)[13], &Local_600);
					TASK_GO_TO_COORD_AND_STAY(StackVal, (*&Local_4 + 756)[02], &Local_600, 3);
					TASK_PRIORITY_SET((*&Local_4 + 756)[02], true);
					GET_OBJECT_POSITION((*&Local_4 + 1416)[14], &Local_600);
					TASK_GO_TO_COORD_AND_STAY(StackVal, (*&Local_4 + 756)[12], &Local_600, 3);
					TASK_PRIORITY_SET((*&Local_4 + 756)[12], true);
					GET_OBJECT_POSITION((*&Local_4 + 1416)[15], &Local_600);
					TASK_GO_TO_COORD_AND_STAY(StackVal, (*&Local_4 + 756)[22], &Local_600, 3);
					TASK_PRIORITY_SET((*&Local_4 + 756)[22], true);
					GET_OBJECT_POSITION((*&Local_4 + 1416)[16], &Local_600);
					TASK_GO_TO_COORD_AND_STAY(StackVal, (*&Local_4 + 756)[32], &Local_600, 3);
					TASK_PRIORITY_SET((*&Local_4 + 756)[32], true);
					GET_OBJECT_POSITION((*&Local_4 + 1416)[17], &Local_600);
					TASK_GO_TO_COORD_AND_STAY(StackVal, (*&Local_4 + 756)[42], &Local_600, 3);
					TASK_PRIORITY_SET((*&Local_4 + 756)[42], true);
					bLocal_641 = (*&Local_4 + 736)[02];
					Function_387();
					SET_ACTOR_INVULNERABILITY(bLocal_641, true);
					TASK_CLEAR(bLocal_641);
					GET_OBJECT_POSITION((*&Local_4 + 1416)[21], &Local_600);
					bLocal_609 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &Local_600, 3.0f, 3);
					TASK_HORSE_ACTION(false, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_641, bLocal_609);
					TASK_SEQUENCE_RELEASE(bLocal_609, 1);
					TASK_PRIORITY_SET(bLocal_641, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_641, false);
					GET_OBJECT_POSITION((*&Local_4 + 1416)[5], &Local_600);
					bLocal_609 = TASK_SEQUENCE_OPEN();
					TASK_GO_TO_COORD(false, &Local_600, 4);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_574, bLocal_609);
					TASK_SEQUENCE_RELEASE(bLocal_609, 1);
					TASK_PRIORITY_SET(bLocal_574, true);
					if (IS_BLIP_VALID(bLocal_745))
					{
						REMOVE_BLIP(bLocal_745);
					}
					Function_202();
					Function_206(bLocal_664);
					Function_453();
					iLocal_677 = 1;
					Function_452();
					Function_379("Ranch06_obj03c");
					Function_221(&iLocal_577);
					iLocal_991 = 3;
					return 1;
				}
			}
			if (IS_OBJECT_VALID(bLocal_667))
			{
				if (GATEWAY_UPDATE(bLocal_667))
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
					return 1;
				}
			}
			if (Function_274(&iLocal_577) <= IntToFloat(bLocal_660))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!Function_133())
					{
						if (Function_480(Global_34573, bLocal_789) > 20.0f)
						{
							Function_456();
							Function_221(&iLocal_577);
							bLocal_660 = RAND_INT_RANGE(3, 7);
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			Function_460();
			Function_450();
			if (!Function_439(&iLocal_583, bLocal_766, bLocal_767, bLocal_641, "Ranch06_obj03c", "Herd_abandoned", &bLocal_598, 0, 0, 0, 325, 1))
			{
				Function_379("Ranch06_obj03c");
			}
			if (Function_274(&iLocal_577) <= IntToFloat(bLocal_660))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!Function_133())
					{
						if (Function_480(Global_34573, bLocal_789) > 20.0f)
						{
							Function_456();
							Function_221(&iLocal_577);
							bLocal_660 = RAND_INT_RANGE(3, 7);
						}
					}
				}
			}
			if (IS_OBJECT_VALID(bLocal_667))
			{
				if (GATEWAY_UPDATE(bLocal_667))
				{
					Function_203(bLocal_667);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
					return 1;
				}
			}
			if (GET_TASK_STATUS(bLocal_641, 0) == 0)
			{
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_HORSE_ACTION(false, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_641, bLocal_609, 4294967295);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET(bLocal_641, true);
				iLocal_991 = 3;
			}
			return 0;
			break;
	}
	return 0;
}

void Function_450() //Position: 0x1E454 / 123988
{
	if (IS_CAMERA_FOCUS_ENABLED(bLocal_803))
	{
		SET_CAMERA_FOCUS_ENABLED(bLocal_803, 0);
	}
	return;
}

void Function_451() //Position: 0x1E46A / 124010
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_herdIntoTrap", "Ranch06_herdIntoTrap", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_452() //Position: 0x1E4BB / 124091
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_approachCanyon", "Ranch06_approachCanyon", true, 2, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_453() //Position: 0x1E510 / 124176
{
	Function_204(3, 0, 1);
	if (IS_BLIP_VALID(bLocal_747))
	{
		REMOVE_BLIP(bLocal_747);
	}
	if (IS_BLIP_VALID(bLocal_746))
	{
		REMOVE_BLIP(bLocal_746);
	}
	if (!IS_BLIP_VALID(bLocal_745))
	{
		bLocal_745 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 1416)[0], 330, 0f, 2, 0);
		if (IS_BLIP_VALID(bLocal_745))
		{
		}
	}
	if (!IS_OBJECT_VALID(bLocal_667))
	{
		GET_OBJECT_POSITION((*&Local_4 + 1416)[0], &vLocal_756);
		GET_OBJECT_ORIENTATION((*&Local_4 + 1416)[0], &vLocal_759);
		bLocal_667 = Function_454(StackVal, StackVal, StackVal, StackVal, bLocal_485, "HOME02_RANCH03GATEWAY01", vLocal_756, vLocal_759, Global_34573, 7.0f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
		if (IS_OBJECT_VALID(bLocal_667))
		{
		}
	}
	if (IS_BLIP_VALID(bLocal_746))
	{
		REMOVE_BLIP(bLocal_746);
	}
	return;
}

bool Function_454(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, var uParam9, int iParam10, int iParam11, bool bParam12, int iParam13, var uParam14, float fParam15, float fParam16, var uParam17) //Position: 0x1E5EA / 124394
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, bParam8, iParam10, iParam13, 0, uParam14, uParam17);
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

int Function_455(bool bParam0, bool bParam1) //Position: 0x1E6B5 / 124597
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
	if (!IS_VOLUME_VALID(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_VEHICLE(bVar1))
			{
				if (IS_ACTOR_ALIVE(bVar1))
				{
					if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_456() //Position: 0x1E737 / 124727
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_yellAtHorse", "Ranch06_yellAtHorse", true, 2, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_457() //Position: 0x1E786 / 124806
{
	if (ACTORS_IN_RANGE(Global_34573, bLocal_641, 50.0f))
	{
		if (!DECOR_CHECK_EXIST(Global_34573, "herding"))
		{
			DECOR_SET_BOOL(Global_34573, "herding", true);
		}
		if (!IS_BLIP_VALID(bLocal_745))
		{
			bLocal_745 = ADD_BLIP_FOR_OBJECT((*&Local_4 + 972)[0], 330, 0f, 2, 0);
		}
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_641)))
		{
			ADD_BLIP_FOR_ACTOR(bLocal_641, 418, 0, 2, 0);
			Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		}
		if (iLocal_991 <= 2)
		{
			Function_379("Ranch06_obj03ca");
		}
		else
		{
			Function_379("Ranch06_obj03c");
		}
	}
	else if (!ACTORS_IN_RANGE(Global_34573, bLocal_641, 75.0f))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "herding"))
		{
			DECOR_REMOVE(Global_34573, "herding");
		}
		if (IS_BLIP_VALID(bLocal_745))
		{
			REMOVE_BLIP(bLocal_745);
		}
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_641)))
		{
			ADD_BLIP_FOR_ACTOR(bLocal_641, 418, 0, 2, 0);
			Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		}
		Function_379("Ranch06_obj03b");
	}
	return;
}

void Function_458() //Position: 0x1E8D6 / 125142
{
	if (!iLocal_671)
	{
		STREAMING_LOAD_BOUNDS(*(&Local_4 + 1536[06]), 50.0f, 1);
		if (ACTORS_IN_RANGE(Global_34573, bLocal_641, 100.0f))
		{
			if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_574, 1.0f, 200.0f, 0, 1, 0) && !ACTORS_IN_RANGE(Global_34573, bLocal_574, 50.0f))
			{
				SET_ACTOR_UPDATE_PRIORITY(bLocal_574, false);
				MEMORY_REPORT_POSITION_AUTO(bLocal_574, Global_34573, true);
				Function_350(bLocal_574, (*&Local_4 + 1588)[0], 1, 1, 1);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1844, 3, 1, 0, 1, false);
				TASK_GO_NEAR_ACTOR(false, Global_34573, 15.0f, 3);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_574, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_574);
				GET_OBJECT_POSITION(bLocal_789, &Local_600);
				vLocal_603 = { 20.0f, 20.0f, 20.0f };
				Function_75();
				bLocal_802 = CREATE_VOLUME_IN_LAYOUT(bLocal_485, "BonnieAvoid", 2, Local_600, Function_75(), vLocal_603);
				Function_75();
				Function_75();
				ATTACH_OBJECTS(bLocal_802, bLocal_789, Function_53(), Function_75(), Function_75(), 4294967295);
				SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_574, bLocal_802, 4, 1);
				Function_221(&iLocal_736);
				iLocal_671 = 1;
			}
		}
	}
	else
	{
		Function_344(bLocal_574);
		STREAMING_LOAD_BOUNDS(Function_344(bLocal_574), 50.0f, 1);
		if (ACTORS_IN_RANGE(bLocal_574, Global_34573, 30.0f))
		{
			Function_361(&iLocal_622, 56, 0, 4294967295, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, Global_34573, 10.0f, 4);
			Function_459();
			if (Function_371(Global_34573, bLocal_641) < 150.0f)
			{
				bLocal_766 = (Function_371(Global_34573, bLocal_641) + 20.0f);
				bLocal_767 = (bLocal_766 + 75.0f);
			}
			else
			{
				bLocal_766 = 150.0f;
				bLocal_767 = (bLocal_766 + 75.0f);
			}
			Function_221(&iLocal_577);
			iLocal_991 = 2;
		}
	}
	return;
}

void Function_459() //Position: 0x1EA86 / 125574
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_trapReady", "Ranch06_trapReady", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_460() //Position: 0x1EAD1 / 125649
{
	if (!DECOR_CHECK_EXIST(bLocal_629, "CowboyTeleported"))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_629, 1.0f, 200.0f, 0, 1, 0) && !ACTORS_IN_RANGE(Global_34573, bLocal_629, 50.0f))
		{
			GET_OBJECT_POSITION((*&Local_4 + 1416)[6], &vLocal_762);
			if (!WOULD_ACTOR_BE_VISIBLE(976, &vLocal_762, 200.0f))
			{
				bLocal_657 = GET_MOUNT(bLocal_629);
				TASK_STAND_STILL(bLocal_629, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(bLocal_629, 0);
				TASK_STAND_STILL(bLocal_657, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(bLocal_657, 0);
				Function_307(bLocal_657, (*&Local_4 + 1416)[6], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(bLocal_629, bLocal_657);
				DECOR_SET_BOOL(bLocal_629, "CowboyTeleported", true);
			}
		}
	}
	if (!DECOR_CHECK_EXIST(bLocal_631, "CowboyTeleported"))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_631, 1.0f, 200.0f, 0, 1, 0) && !ACTORS_IN_RANGE(Global_34573, bLocal_631, 50.0f))
		{
			GET_OBJECT_POSITION((*&Local_4 + 1416)[9], &vLocal_762);
			if (!WOULD_ACTOR_BE_VISIBLE(976, &vLocal_762, 200.0f))
			{
				bLocal_657 = GET_MOUNT(bLocal_631);
				TASK_STAND_STILL(bLocal_631, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(bLocal_631, 0);
				TASK_STAND_STILL(bLocal_657, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(bLocal_657, 0);
				Function_307(bLocal_657, (*&Local_4 + 1416)[9], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(bLocal_631, bLocal_657);
				DECOR_SET_BOOL(bLocal_631, "CowboyTeleported", true);
			}
		}
	}
	if (!DECOR_CHECK_EXIST(bLocal_633, "CowboyTeleported"))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_633, 1.0f, 200.0f, 0, 1, 0) && !ACTORS_IN_RANGE(Global_34573, bLocal_633, 50.0f))
		{
			GET_OBJECT_POSITION((*&Local_4 + 1416)[10], &vLocal_762);
			if (!WOULD_ACTOR_BE_VISIBLE(976, &vLocal_762, 200.0f))
			{
				bLocal_657 = GET_MOUNT(bLocal_633);
				TASK_STAND_STILL(bLocal_633, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(bLocal_633, 0);
				TASK_STAND_STILL(bLocal_657, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(bLocal_657, 0);
				Function_307(bLocal_657, (*&Local_4 + 1416)[10], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(bLocal_633, bLocal_657);
				DECOR_SET_BOOL(bLocal_633, "CowboyTeleported", true);
			}
		}
	}
	if (!DECOR_CHECK_EXIST(bLocal_635, "CowboyTeleported"))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_635, 1.0f, 200.0f, 0, 1, 0) && !ACTORS_IN_RANGE(Global_34573, bLocal_635, 50.0f))
		{
			GET_OBJECT_POSITION((*&Local_4 + 1416)[11], &vLocal_762);
			if (!WOULD_ACTOR_BE_VISIBLE(976, &vLocal_762, 200.0f))
			{
				bLocal_657 = GET_MOUNT(bLocal_635);
				TASK_STAND_STILL(bLocal_635, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(bLocal_635, 0);
				TASK_STAND_STILL(bLocal_657, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(bLocal_657, 0);
				Function_307(bLocal_657, (*&Local_4 + 1416)[11], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(bLocal_635, bLocal_657);
				DECOR_SET_BOOL(bLocal_635, "CowboyTeleported", true);
			}
		}
	}
	if (!DECOR_CHECK_EXIST(bLocal_637, "CowboyTeleported"))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_637, 1.0f, 200.0f, 0, 1, 0) && !ACTORS_IN_RANGE(Global_34573, bLocal_637, 50.0f))
		{
			GET_OBJECT_POSITION((*&Local_4 + 1416)[19], &vLocal_762);
			if (!WOULD_ACTOR_BE_VISIBLE(976, &vLocal_762, 200.0f))
			{
				bLocal_657 = GET_MOUNT(bLocal_637);
				TASK_STAND_STILL(bLocal_637, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(bLocal_637, 0);
				TASK_STAND_STILL(bLocal_657, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(bLocal_657, 0);
				Function_307(bLocal_657, (*&Local_4 + 1416)[19], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(bLocal_637, bLocal_657);
				DECOR_SET_BOOL(bLocal_637, "CowboyTeleported", true);
			}
		}
	}
	if (!DECOR_CHECK_EXIST(bLocal_638, "CowboyTeleported"))
	{
		if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_638, 1.0f, 200.0f, 0, 1, 0) && !ACTORS_IN_RANGE(Global_34573, bLocal_638, 50.0f))
		{
			GET_OBJECT_POSITION((*&Local_4 + 1416)[20], &vLocal_762);
			if (!WOULD_ACTOR_BE_VISIBLE(976, &vLocal_762, 200.0f))
			{
				bLocal_657 = GET_MOUNT(bLocal_638);
				TASK_STAND_STILL(bLocal_638, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(bLocal_638, 0);
				TASK_STAND_STILL(bLocal_657, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(bLocal_657, 0);
				Function_307(bLocal_657, (*&Local_4 + 1416)[20], 1, 1, 1);
				ACTOR_MOUNT_ACTOR(bLocal_638, bLocal_657);
				DECOR_SET_BOOL(bLocal_638, "CowboyTeleported", true);
			}
		}
	}
	return;
}

void Function_461() //Position: 0x1EF73 / 126835
{
	if (!GET_TASK_STATUS(bLocal_629, 0) != 1)
	{
		bLocal_661 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[21], 5.0f, 3, 1, 1);
		TASK_STAND_STILL(false, -1.0f, 1, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_629, bLocal_661);
		TASK_SEQUENCE_RELEASE(bLocal_661, 1);
		ACTOR_POP_NEXT_GAIT(bLocal_629, 3, false);
	}
	if (!GET_TASK_STATUS(bLocal_631, 0) != 1)
	{
		bLocal_661 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[21], 5.0f, 3, 1, 1);
		TASK_STAND_STILL(false, -1.0f, 1, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_631, bLocal_661);
		TASK_SEQUENCE_RELEASE(bLocal_661, 1);
		ACTOR_POP_NEXT_GAIT(bLocal_631, 3, false);
	}
	if (!GET_TASK_STATUS(bLocal_633, 0) != 1)
	{
		bLocal_661 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[21], 5.0f, 3, 1, 1);
		TASK_STAND_STILL(false, -1.0f, 1, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_633, bLocal_661);
		TASK_SEQUENCE_RELEASE(bLocal_661, 1);
		ACTOR_POP_NEXT_GAIT(bLocal_633, 3, false);
	}
	if (!GET_TASK_STATUS(bLocal_635, 0) != 1)
	{
		bLocal_661 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[21], 5.0f, 3, 1, 1);
		TASK_STAND_STILL(false, -1.0f, 1, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_635, bLocal_661);
		TASK_SEQUENCE_RELEASE(bLocal_661, 1);
		ACTOR_POP_NEXT_GAIT(bLocal_635, 3, false);
	}
	if (!GET_TASK_STATUS(bLocal_637, 0) != 1)
	{
		bLocal_661 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[21], 5.0f, 3, 1, 1);
		TASK_STAND_STILL(false, -1.0f, 1, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_637, bLocal_661);
		TASK_SEQUENCE_RELEASE(bLocal_661, 1);
		ACTOR_POP_NEXT_GAIT(bLocal_637, 3, false);
	}
	if (!GET_TASK_STATUS(bLocal_638, 0) != 1)
	{
		bLocal_661 = TASK_SEQUENCE_OPEN();
		TASK_GO_NEAR_OBJECT(false, (*&Local_4 + 1416)[21], 5.0f, 3, 1, 1);
		TASK_STAND_STILL(false, -1.0f, 1, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_638, bLocal_661);
		TASK_SEQUENCE_RELEASE(bLocal_661, 1);
		ACTOR_POP_NEXT_GAIT(bLocal_638, 3, false);
	}
	GET_OBJECT_POSITION((*&Local_4 + 1416)[5], &Local_600);
	bLocal_609 = TASK_SEQUENCE_OPEN();
	TASK_GO_TO_COORD(false, &Local_600, 4);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_574, bLocal_609);
	TASK_SEQUENCE_RELEASE(bLocal_609, 1);
	TASK_PRIORITY_SET(bLocal_574, true);
	return;
}

void Function_462() //Position: 0x1F15B / 127323
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_rideAfterHorse", "Ranch06_rideAfterHorse", true, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_463() //Position: 0x1F1B0 / 127408
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_herdTrap", "Ranch06_herdTrap", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_464(bool bParam0, bool bParam1) //Position: 0x1F1F9 / 127481
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = (GET_PATH_NUM_POINTS(bParam1) - 1);
	GET_PATH_POINT(bParam1, bVar3, &vVar0);
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_375(bParam0);
		vVar4 = { StackVal, StackVal, Function_375(bParam0) };
		return VDIST(vVar4, vVar0);
	}
	LOG_ERROR("Attempting to get distance from an INVALID actor to a path end. Returning 0.0!");
	return 0.0f;
}

void Function_465(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x1F286 / 127622
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

void Function_466() //Position: 0x1F370 / 127856
{
	if (!IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
	{
		if (!IS_CAMERA_FOCUS_ENABLED(bLocal_803))
		{
			Function_75();
			SET_CAMERA_FOCUS_OBJECT(bLocal_803, bLocal_641, Function_75(), 1.0f);
			SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_803, "Ranch06_FocusPrompt_Herd");
			SET_CAMERA_FOCUS_ENABLED(bLocal_803, 1);
		}
	}
	else if (IS_CAMERA_FOCUS_ENABLED(bLocal_803))
	{
		SET_CAMERA_FOCUS_ENABLED(bLocal_803, 0);
	}
	return;
}

void Function_467() //Position: 0x1F3D5 / 127957
{
	if (!IS_ACTOR_VALID(bLocal_800))
	{
		if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
		{
			if (IS_ACTOR_HORSE(GET_LASSO_TARGET(Global_34573)))
			{
				bLocal_800 = GET_LASSO_TARGET(Global_34573);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_HORSE_ACTION(false, 0);
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
				TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_800, bLocal_609, 4294967295);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
			}
		}
	}
	else if (GET_LASSO_USER(bLocal_800) != Global_34573)
	{
		TASK_CLEAR(bLocal_800);
		bLocal_800 = "";
	}
	return;
}

void Function_468() //Position: 0x1F78E / 128910
{
	if (!IS_OBJECT_VALID(bLocal_803))
	{
		Function_75();
		bLocal_803 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_485, "cFocus", bLocal_641, Function_75(), 100.0f, 200.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_803, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_803, "Ranch06_FocusPrompt_Herd");
	}
	else
	{
		Function_75();
		SET_CAMERA_FOCUS_OBJECT(bLocal_803, bLocal_641, Function_75(), 1.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_803, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_803, "Ranch06_FocusPrompt_Herd");
	}
	return;
}

void Function_469() //Position: 0x1F820 / 129056
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_CS03_v1_AA", "Ranch06_CS03_v1_AA", false, 4, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_470(bool bParam0, int iParam1) //Position: 0x1F86D / 129133
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
				if (!Function_471(bVar1, iParam1, 0x41700000))
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

bool Function_471(bool bParam0, bool bParam1, float fParam2) //Position: 0x1F8CC / 129228
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

int Function_472(bool bParam0) //Position: 0x1F969 / 129385
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (!IS_ACTOR_RIDING(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

var Function_473(int iParam0) //Position: 0x1F9A6 / 129446
{
	return Global_8492[iParam014].f_52;
}

int Function_474(bool bParam0, bool bParam1) //Position: 0x1F9B5 / 129461
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

void Function_475(bool bParam0, int iParam1) //Position: 0x1FA0A / 129546
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (iParam1 == "")
	{
		return;
	}
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 8, 0,75f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 19, 45.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 24, 360.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 25, 1.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 0, 2.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 1, 2.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 2, 2.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 15, 0,25f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 16, 12.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 17, 1.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 18, 50.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 21, 3.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 20, 9,352f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 27, 0,1f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 28, 0,25f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 1, 29, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 8, 2.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 19, 65.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 24, 360.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 25, 2.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 0, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 1, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 2, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 15, 0,25f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 16, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 17, 1.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 18, 40.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 21, 6,5f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 20, 12.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 27, 0.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 28, 0,5f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(bParam0, iParam1, 0, 29, 15.0f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(bParam0, iParam1, 0, 10, 0,1f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(bParam0, iParam1, 0, 11, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(bParam0, iParam1, 0, 12, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(bParam0, iParam1, 1, 10, 0,1f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(bParam0, iParam1, 1, 11, 0,5f);
	_SQUAD_FLOCK_GET_FLOCKING_PARAMETER_2(bParam0, iParam1, 1, 12, 0,5f);
	SQUAD_FLOCK_SET_EXTERNAL_MOVEMENT_TUNING(bParam0, iParam1, 1, 0,5f, 0,7f);
	SQUAD_FLOCK_ADD_EXTERNAL_ALERT(bParam0, iParam1, Global_34573, 20.0f, 5.0f, 0);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(bParam0, iParam1, Global_34573, 33.0f, 4.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(bParam0, iParam1, Global_34573, 33.0f, 1,5f, 33.0f, 10.0f, 1.0f);
	SQUAD_FLOCK_ADD_EXTERNAL_REPULSION(bParam0, iParam1, bLocal_574, 20.0f, 1.0f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_WHISTLE_BOOST_SET_ENABLED(bParam0, iParam1, 1);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(bParam0, iParam1, 1);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		SET_ACTOR_UPDATE_PRIORITY(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), false);
		SET_ACTOR_BASE_SCORE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), 10000.0f, 1);
		SET_ACTOR_BASE_SCORE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), 10000.0f, 0);
		SET_ACTOR_CAN_BUMP(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), 0);
		bVar0++;
	}
	return;
}

int Function_476(bool bParam0, bool bParam1, int iParam2) //Position: 0x1FD02 / 130306
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

bool Function_477() //Position: 0x1FD44 / 130372
{
	switch (iLocal_786)
	{
		case 0x00000006:
			if (!IS_ACTOR_VALID(bLocal_575))
			{
				if (Function_333())
				{
					bLocal_575 = Function_327(1, 0, 0, 0, 0, 0, 1, 0);
				}
			}
			else
			{
				Function_202();
				if (!iLocal_586[2])
				{
					Function_428();
				}
				Function_355();
				Function_427();
				bLocal_641 = (*&Local_4 + 736)[02];
				SET_ACTOR_INVULNERABILITY(bLocal_641, true);
				if (!SQUAD_IS_VALID(bLocal_664))
				{
					bLocal_664 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sWildSquad"));
				}
				bLocal_664 = Local_4.f_804;
				if (!IS_ACTOR_VALID(bLocal_624))
				{
					Function_326();
					bLocal_624 = (*&Local_4 + 668)[02];
					DECOR_SET_BOOL(bLocal_624, "bNoInjuryEjection", true);
					SET_ALLOW_RIDE_BY_PLAYER(bLocal_624, 0);
					TASK_PRIORITY_SET(bLocal_624, true);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_624, true);
					SET_ACTOR_FACTION(bLocal_624, 21);
					bLocal_625 = (*&Local_4 + 668)[12];
					TASK_PRIORITY_SET(bLocal_625, true);
					SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_625, true);
					SET_ACTOR_FACTION(bLocal_625, 21);
				}
				if (!iLocal_586[2])
				{
					TASK_STAND_STILL(bLocal_574, -1.0f, 0, 0);
					Function_307(bLocal_575, (*&Local_4 + 1284)[1], 1, 1, 1);
					Function_307(bLocal_574, (*&Local_4 + 1284)[3], 1, 1, 1);
					Function_307(bLocal_624, (*&Local_4 + 1284)[3], 1, 1, 1);
					ACTOR_MOUNT_ACTOR(Global_34573, bLocal_575);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					TASK_CLEAR(Global_34573);
				}
				if (SQUAD_IS_VALID(Local_4.f_732))
				{
					Function_432(&Local_4 + 732, 0, 0);
					DESTROY_OBJECT(Local_4.f_732);
				}
				if (!SQUAD_IS_VALID(bLocal_663))
				{
					bLocal_663 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sMoiraSquad"));
					SQUAD_JOIN(bLocal_574, bLocal_663);
				}
				Function_221(&iLocal_649);
				iLocal_786 = 7;
			}
			break;
		
		case 0x00000007:
			if (!iLocal_586[2])
			{
				if (!IS_ACTOR_RIDING(Global_34573))
				{
					ACTOR_MOUNT_ACTOR(Global_34573, bLocal_575);
				}
				if (!IS_ACTOR_RIDING(bLocal_574))
				{
					ACTOR_MOUNT_ACTOR(bLocal_574, bLocal_624);
				}
			}
			Function_426();
			Function_221(&iLocal_649);
			iLocal_786 = 8;
			break;
		
		case 0x00000008:
			if (!iLocal_586[2])
			{
				Function_350(Global_34573, (*&Local_4 + 1284)[1], 1, 1, 1);
				Function_350(bLocal_574, (*&Local_4 + 1284)[3], 1, 1, 1);
				TASK_STAND_STILL(bLocal_574, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_629, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_631, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_633, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_635, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_637, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_638, -1.0f, 0, 0);
				ACTOR_SET_NEXT_WEAPON(Global_34573, 21);
			}
			CLEAR_LINKED_ANIM_TARGET(bLocal_574);
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_574, 1);
			Function_221(&iLocal_649);
			iLocal_786 = 9;
			break;
		
		case 0x00000009:
			Function_221(&iLocal_649);
			iLocal_786 = 104;
			return 1;
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

bool Function_478() //Position: 0x1FFF7 / 131063
{
	Function_319(&Local_4 + 332, 978, 2, 0);
	Function_319(&Local_4 + 332, 976, 2, 0);
	Function_319(&Local_4 + 332, 977, 2, 0);
	Function_319(&Local_4 + 332, 170, 2, 0);
	Function_319(&Local_4 + 332, 171, 2, 0);
	Function_319(&Local_4 + 332, 172, 2, 0);
	Function_319(&Local_4 + 332, 173, 2, 0);
	Function_319(&Local_4 + 332, 174, 2, 0);
	Function_319(&Local_4 + 332, 175, 2, 0);
	if (Function_310(&Local_4 + 332))
	{
		return 1;
	}
	return 0;
}

void Function_479() //Position: 0x20085 / 131205
{
	if (IS_OBJECT_VALID(Local_525.f_16))
	{
		if (!STRINGS_ARE_EQUAL(GET_OBJECT_NAME(Local_525.f_16), "Ranch06_CS04_v2"))
		{
			DESTROY_OBJECT(Local_525.f_16);
			Local_525.f_16 = Function_402(Local_4, 0, Global_34573, bLocal_575, bLocal_624, 0, 1, 0);
		}
	}
	else
	{
		Function_402(Local_4, 0, Global_34573, bLocal_575, bLocal_624, 0, 1, 0);
	}
	return;
}

float Function_480(bool bParam0, bool bParam1) //Position: 0x200EC / 131308
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_375(bParam0);
			vVar0 = { StackVal, StackVal, Function_375(bParam0) };
			Function_481(bParam1);
			vVar3 = { StackVal, StackVal, Function_481(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_481(bool bParam0) //Position: 0x2018C / 131468
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

void Function_482(bool bParam0, int iParam1) //Position: 0x201F8 / 131576
{
	bool bVar0;
	bool bVar1;
	
	switch (iLocal_781)
	{
		case 0x00000006:
			if (SQUAD_GET_SIZE(bParam0) > 3)
			{
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(bParam0))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						if (!bVar1 != bLocal_641)
						{
							if (Function_483(iParam1, bVar1) < 80.0f)
							{
								TASK_CLEAR(bVar1);
								SQUAD_LEAVE(bVar1);
								SQUAD_JOIN(bVar1, bLocal_665);
								SET_ACTOR_MAX_SPEED(bVar1, 4);
							}
						}
					}
					bVar0++;
				}
			}
			break;
	}
	return;
}

float Function_483(bool bParam0, bool bParam1) //Position: 0x20271 / 131697
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_481(bParam0);
			vVar0 = { StackVal, StackVal, Function_481(bParam0) };
			Function_481(bParam1);
			vVar3 = { StackVal, StackVal, Function_481(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_484(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2030C / 131852
{
	bool bVar0;
	bool bVar1;
	
	switch (iLocal_782)
	{
		case 0x00000006:
			SQUAD_GOAL_ADD_GENERAL_TASK(bParam1, true, 1, 4294967295);
			Local_600 = { 0.0f, 0.0f, 0.0f };
			TASK_FOLLOW_OBJECT(false, bParam2, &Local_600, 0, 0, 0, 0, 0, 0, 1);
			iLocal_782 = 7;
			break;
		
		case 0x00000007:
			if (SQUAD_GET_SIZE(bParam1) >= 0)
			{
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(bParam1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
					if (IS_ACTOR_VALID(bVar1))
					{
						if (Function_485(bVar1, bParam2, 5.0f))
						{
							if (!IS_ACTOR_IN_VOLUME(bVar1, Local_4.f_968))
							{
								TASK_CLEAR(bVar1);
								SQUAD_LEAVE(bVar1);
								SQUAD_JOIN(bVar1, bParam0);
								CLEAR_ACTOR_MAX_SPEED(bVar1);
							}
						}
					}
					bVar0++;
				}
			}
			break;
		
		case 0x00000068:
			break;
	}
	return;
}

bool Function_485(bool bParam0, bool bParam1, float fParam2) //Position: 0x203B9 / 132025
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_375(bParam0);
			Function_481(bParam1);
			if (VDIST(Function_375(bParam0), Function_481(bParam1)) >= fParam2)
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

void Function_486(bool bParam0, bool bParam1) //Position: 0x204D3 / 132307
{
	vector3 vVar0;
	vector3 vVar3;
	struct<5> Var6;
	
	Var6 = { 0.0f, 0.0f, 0.0f };
	if (SQUAD_GET_SIZE(bParam0) > 1)
	{
		SQUAD_COMPUTE_CENTROID(bParam0, &vVar0);
		STREAMING_LOAD_BOUNDS(vVar0, 200.0f, 0);
		Function_487(bParam0);
		vVar3 = { StackVal, StackVal, Function_487(bParam0) };
		Var6 = { StackVal, StackVal, Var6 };
		Var6.f_4 = UNK_0x9C40E671(&vVar3);
		SET_OBJECT_POSITION(*bParam1, vVar0);
		SET_OBJECT_ORIENTATION(*bParam1, vVar3);
		Local_600 = { 0.0f, 0.0f, 0.0f };
	}
	return;
}

vector3 Function_487(bool bParam0) //Position: 0x20536 / 132406
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		UNK_0x44986367(&vVar2, Function_488(bVar1));
		vVar5 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar2, vVar5, StackVal) };
		bVar0++;
	}
	vVar5.x = (vVar5.x / IntToFloat(SQUAD_GET_SIZE(bParam0)));
	vVar5.f_4 = 0.0f;
	vVar5.f_8 = (vVar5.z / IntToFloat(SQUAD_GET_SIZE(bParam0)));
	return StackVal, StackVal, vVar5;
}

var Function_488(bool bParam0) //Position: 0x2059A / 132506
{
	return GET_HEADING(bParam0);
}

void Function_489() //Position: 0x205A5 / 132517
{
	float fVar0;
	
	if (iLocal_533 < 3 && iLocal_533 > 105)
	{
		Function_507();
		Function_436();
	}
	switch (iLocal_533)
	{
		case 0x00000000:
			if (Function_367(iLocal_532))
			{
				Function_221(&iLocal_577);
				iLocal_533 = 1;
				iLocal_785 = 6;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_586[1])
			{
				if ((STREAMING_IS_WORLD_LOADED() && (Function_364(iLocal_572) || iLocal_572 != 4294967295)) && Function_506())
				{
					Function_221(&iLocal_577);
					iLocal_533 = 2;
				}
			}
			else if (Function_506())
			{
				Function_221(&iLocal_577);
				iLocal_533 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_504())
			{
				if (Function_423(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_486, iLocal_532))
				{
					Function_361(&iLocal_622, 0, 0, 4294967295, 4294967295);
					Function_221(&iLocal_577);
					iLocal_533 = 3;
				}
				else
				{
					TASK_STAND_STILL(bLocal_575, -1.0f, 0, 0);
					TASK_STAND_STILL(bLocal_624, -1.0f, 0, 0);
					TASK_FOLLOW_PATH(bLocal_574, Local_4.f_1808, 4, 0, 0, 1, false);
					TASK_FOLLOW_PATH(Global_34573, Local_4.f_1808, 4, 0, 0, 1, false);
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					Function_307(bLocal_575, (*&Local_4 + 1224)[1], 1, 1, 1);
					if (!IS_ACTOR_RIDING(Global_34573))
					{
						ACTOR_MOUNT_ACTOR(Global_34573, bLocal_575);
					}
					AI_ACTOR_FORCE_SPEED(Global_34573, 4);
					AI_ACTOR_FORCE_SPEED(bLocal_575, 4);
					SIMULATE_PLAYER_INPUT_GAIT(0, 3, 1073741824, 0);
					ACTOR_POP_NEXT_GAIT(Global_34573, 3, false);
					ACTOR_POP_NEXT_GAIT(bLocal_575, 3, false);
					Function_307(bLocal_624, (*&Local_4 + 1224)[3], 1, 1, 1);
					if (!IS_ACTOR_RIDING(bLocal_574))
					{
						ACTOR_MOUNT_ACTOR(bLocal_574, bLocal_624);
					}
					AI_ACTOR_FORCE_SPEED(bLocal_574, 4);
					AI_ACTOR_FORCE_SPEED(bLocal_624, 4);
					ACTOR_POP_NEXT_GAIT(bLocal_574, 3, false);
					ACTOR_POP_NEXT_GAIT(bLocal_624, 3, false);
					Function_221(&iLocal_577);
					iLocal_533 = 4;
				}
				Function_234(iLocal_532);
				Function_416(StackVal, StackVal, Function_234(iLocal_532), iLocal_532, Global_30628[2], Function_237(iLocal_532), 2);
			}
			break;
		
		case 0x00000003:
			if (Function_267("$/cutscene/RANCH_06_CS03/RANCH_06_CS03", &Local_525, &Local_486, &iLocal_532, 82051, 59123, 56914, 56301, 50811, 50729, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_221(&iLocal_577);
				iLocal_533 = 4;
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				CAMERA_RESET(0);
				HUD_FADE_IN(1.0f, 1065353216);
				SET_ACTOR_INVULNERABILITY(Global_34573, false);
			}
			if (IS_ACTOR_VALID(bLocal_576))
			{
				DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_576);
				GIVE_WEAPON_TO_ACTOR(bLocal_576, 40, false, 1, 1);
				if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_576, "ranch06_drew_idle"))
				{
					Function_294();
				}
				TASK_PRIORITY_SET(bLocal_576, 2);
				SET_ACTOR_FACTION(bLocal_576, 20);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_576, true);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_576, 1);
				RELEASE_ACTOR_AS_AMBIENT(bLocal_576);
			}
			if (IS_ACTOR_VALID(bLocal_656))
			{
				DESTROY_ACTOR(bLocal_656);
			}
			Function_361(&iLocal_622, 23, 0, 4294967295, 4294967295);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			TASK_CLEAR(Global_34573);
			ACTOR_START_FORCE_HOLSTER(bLocal_574, 1, 0);
			AI_ACTOR_FORCE_SPEED(bLocal_574, 4);
			Function_387();
			Function_221(&iLocal_577);
			iLocal_533 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING() && !HUD_IS_FADED())
			{
				AI_ACTOR_FORCE_SPEED(bLocal_574, 4);
				TASK_PRIORITY_SET(bLocal_574, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_574, 2);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_574);
				DECOR_SET_BOOL(bLocal_485, "PlayerControlStolen", true);
				Function_503();
				AI_RIDING_SET_ENABLED(bLocal_574, 0);
				if (!SQUAD_IS_VALID(bLocal_663))
				{
					bLocal_663 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sMoiraSquad"));
				}
				if (SQUAD_GET(bLocal_574) == bLocal_663)
				{
					SQUAD_LEAVE(bLocal_574);
				}
				TASK_CLEAR(bLocal_574);
				SQUAD_JOIN(bLocal_574, bLocal_663);
				SQUAD_GOALS_CLEAR(bLocal_663);
				bLocal_666 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(bLocal_663, 0, 4294967295, Local_4.f_1808, 2, 1, 1);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(bLocal_663, bLocal_666, 8, 0);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(bLocal_663, bLocal_666, 1, 0);
				Function_204(3, 1, 1);
				Function_221(&iLocal_577);
				iLocal_533 = 7;
			}
			break;
		
		case 0x00000007:
			AI_ACTOR_FORCE_SPEED(bLocal_574, 4);
			Function_501();
			Function_379("Ranch06_obj02");
			Function_221(&iLocal_577);
			Function_221(&iLocal_580);
			Function_221(&iLocal_583);
			iLocal_778 = 0;
			iLocal_533 = 9;
			break;
		
		case 0x00000009:
			if (DECOR_GET_BOOL(bLocal_485, "PlayerControlStolen"))
			{
				if (GET_TASK_STATUS(Global_34573, 0) != 2 || Function_274(&iLocal_577) <= 5.0f)
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					TASK_CLEAR(Global_34573);
					DECOR_SET_BOOL(bLocal_485, "PlayerControlStolen", false);
				}
			}
			Function_439(&iLocal_583, 120.0f, 200.0f, bLocal_574, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_598, 0, 0, 0, 325, 1);
			fVar0 = Function_371(Global_34573, bLocal_574);
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				if (GET_TASK_STATUS(bLocal_574, 6) != 1)
				{
					TASK_STAND_STILL(bLocal_574, -1.0f, 0, 0);
					ABORT_SCRIPTED_CONVERSATION(1);
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_575)))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_575, 325, 0.0f, 2, 0);
				}
				Function_204(3, 0, 1);
				if (IS_ACTOR_ALIVE(bLocal_575))
				{
					Function_379("Horse_return");
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_575)))
					{
						ADD_BLIP_FOR_ACTOR(bLocal_575, 325, 0.0f, 2, 0);
					}
				}
				else
				{
					Function_379("Horse_find");
				}
			}
			else if (fVar0 < 30.0f)
			{
				if (!Function_499(Global_34573, bLocal_574, Local_4.f_1808))
				{
					if (GET_TASK_STATUS(bLocal_574, 6) != 1)
					{
						TASK_STAND_STILL(bLocal_574, -1.0f, 0, 0);
						Function_217(bLocal_575);
						ABORT_SCRIPTED_CONVERSATION(1);
					}
				}
				else if (GET_TASK_STATUS(bLocal_574, 6) == 1)
				{
					TASK_CLEAR(bLocal_574);
				}
				Function_204(3, 1, 1);
			}
			else
			{
				if (GET_TASK_STATUS(bLocal_574, 6) == 1)
				{
					TASK_CLEAR(bLocal_574);
				}
				if (IS_VOLUME_VALID((*&Local_4 + 1072)[1]))
				{
					Function_493();
				}
				Function_217(bLocal_575);
				Function_204(3, 1, 1);
			}
			if (IS_ACTOR_IN_VOLUME(bLocal_574, Local_4.f_1104))
			{
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_663, bLocal_666, 4);
			}
			else if (IS_VOLUME_VALID((*&Local_4 + 1072)[4]))
			{
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_663, bLocal_666, 3);
			}
			else
			{
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_SPEED(bLocal_663, bLocal_666, 4);
			}
			Function_490();
			if (Function_485(bLocal_574, (*&Local_4 + 1284)[0], 15.0f))
			{
				if (Function_485(Global_34573, (*&Local_4 + 1284)[0], 15.0f))
				{
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_PATH(bLocal_663, bLocal_666, Local_4.f_1812);
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(bLocal_663, bLocal_666, 8, 1);
					Function_203(bLocal_667);
					DESTROY_VOLUME((*&Local_4 + 1036)[1]);
					Function_202();
					Function_221(&iLocal_577);
					iLocal_533 = 106;
					if (!HUD_IS_FADED())
					{
						SET_ACTOR_INVULNERABILITY(Global_34573, true);
						Function_223(&(Local_845[017]), 0);
						Function_223(&(Local_845[217]), 0);
					}
				}
			}
			break;
		
		case 0x0000006A:
			Function_365();
			Function_211();
			iLocal_586[2] = 1;
			Function_221(&iLocal_577);
			iLocal_532 = 3;
			iLocal_533 = 0;
			break;
	}
	return;
}

void Function_490() //Position: 0x20C6D / 134253
{
	if (IS_VOLUME_VALID((*&Local_4 + 1072)[0]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 1072)[0]))
		{
			Function_428();
			DESTROY_VOLUME((*&Local_4 + 1072)[0]);
		}
	}
	if ((((((IS_ACTOR_VALID(GET_MOUNT(bLocal_629)) && IS_ACTOR_VALID(GET_MOUNT(bLocal_631))) && IS_ACTOR_VALID(GET_MOUNT(bLocal_633))) && IS_ACTOR_VALID(GET_MOUNT(bLocal_635))) && IS_ACTOR_VALID(GET_MOUNT(bLocal_637))) && IS_ACTOR_VALID(GET_MOUNT(bLocal_638))) && iLocal_992 != 0)
	{
		Function_426();
		Function_492();
		TASK_STAND_STILL(bLocal_630, -1.0f, 0, 0);
		TASK_STAND_STILL(bLocal_632, -1.0f, 0, 0);
		TASK_STAND_STILL(bLocal_634, -1.0f, 0, 0);
		TASK_STAND_STILL(bLocal_636, -1.0f, 0, 0);
		TASK_STAND_STILL(bLocal_640, -1.0f, 0, 0);
		TASK_STAND_STILL(bLocal_639, -1.0f, 0, 0);
		iLocal_992 = 1;
		iLocal_993 = 1;
		iLocal_994 = 1;
		iLocal_995 = 1;
		iLocal_996 = 1;
		iLocal_997 = 1;
	}
	if (iLocal_992 == 1)
	{
		if (IS_VOLUME_VALID((*&Local_4 + 1072)[1]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 1072)[1]))
			{
				TASK_CLEAR(bLocal_629);
				SQUAD_JOIN(bLocal_629, bLocal_663);
				TASK_PRIORITY_SET(bLocal_629, true);
				DESTROY_VOLUME((*&Local_4 + 1072)[1]);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(bLocal_629, 1.0f);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_629, 30.0f);
				Function_491();
				iLocal_992 = 2;
			}
		}
	}
	if (iLocal_993 == 1)
	{
		if (IS_VOLUME_VALID((*&Local_4 + 1072)[2]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 1072)[2]))
			{
				TASK_CLEAR(bLocal_631);
				SQUAD_JOIN(bLocal_631, bLocal_663);
				TASK_PRIORITY_SET(bLocal_631, true);
				DESTROY_VOLUME((*&Local_4 + 1072)[2]);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(bLocal_631, 1.0f);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_631, 30.0f);
				iLocal_993 = 2;
			}
		}
	}
	if (iLocal_994 != 1 && iLocal_995 != 1)
	{
		if (IS_VOLUME_VALID((*&Local_4 + 1072)[3]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 1072)[3]))
			{
				TASK_CLEAR(bLocal_633);
				SQUAD_JOIN(bLocal_633, bLocal_663);
				TASK_PRIORITY_SET(bLocal_633, true);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(bLocal_633, 1.0f);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_633, 30.0f);
				DESTROY_VOLUME((*&Local_4 + 1072)[3]);
				iLocal_994 = 2;
				iLocal_995 = 2;
			}
		}
	}
	if (iLocal_996 != 1 && iLocal_997 != 1)
	{
		if (IS_VOLUME_VALID((*&Local_4 + 1072)[4]))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 1072)[4]))
			{
				DESTROY_VOLUME((*&Local_4 + 1072)[4]);
				iLocal_996 = 3;
				iLocal_997 = 3;
			}
		}
	}
	if (iLocal_992 == 2)
	{
		if (IS_ACTOR_RIDING(bLocal_629))
		{
			MEMORY_PREFER_RIDING(bLocal_629, true);
			iLocal_992 = 3;
		}
	}
	if (iLocal_993 == 2)
	{
		if (IS_ACTOR_RIDING(bLocal_631))
		{
			MEMORY_PREFER_RIDING(bLocal_631, true);
			iLocal_993 = 3;
		}
	}
	if (iLocal_994 == 2)
	{
		if (IS_ACTOR_RIDING(bLocal_633))
		{
			MEMORY_PREFER_RIDING(bLocal_633, true);
			iLocal_994 = 3;
		}
	}
	if (iLocal_995 == 2)
	{
		if (IS_ACTOR_RIDING(bLocal_635))
		{
			MEMORY_PREFER_RIDING(bLocal_635, true);
			iLocal_995 = 3;
		}
	}
	return;
}

void Function_491() //Position: 0x20F09 / 134921
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_seeRanchhands", "Ranch06_seeRanchhands", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_492() //Position: 0x20F5C / 135004
{
	TASK_STAND_STILL(bLocal_629, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_629, true);
	Function_307(bLocal_630, (*&Local_4 + 1284)[25], 1, 1, 1);
	if (!IS_ACTOR_RIDING(bLocal_629))
	{
		ACTOR_MOUNT_ACTOR(bLocal_629, bLocal_630);
	}
	TASK_STAND_STILL(bLocal_631, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_631, true);
	Function_307(bLocal_632, (*&Local_4 + 1284)[26], 1, 1, 1);
	if (!IS_ACTOR_RIDING(bLocal_631))
	{
		ACTOR_MOUNT_ACTOR(bLocal_631, bLocal_632);
	}
	TASK_STAND_STILL(bLocal_633, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_633, true);
	Function_307(bLocal_634, (*&Local_4 + 1284)[27], 1, 1, 1);
	if (!IS_ACTOR_RIDING(bLocal_633))
	{
		ACTOR_MOUNT_ACTOR(bLocal_633, bLocal_634);
	}
	TASK_STAND_STILL(bLocal_635, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_635, true);
	Function_307(bLocal_636, (*&Local_4 + 1416)[11], 1, 1, 1);
	if (!IS_ACTOR_RIDING(bLocal_635))
	{
		ACTOR_MOUNT_ACTOR(bLocal_635, bLocal_636);
	}
	TASK_STAND_STILL(bLocal_637, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_637, true);
	Function_307(bLocal_640, (*&Local_4 + 1416)[19], 1, 1, 1);
	if (!IS_ACTOR_RIDING(bLocal_637))
	{
		ACTOR_MOUNT_ACTOR(bLocal_637, bLocal_640);
	}
	TASK_STAND_STILL(bLocal_638, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_638, true);
	Function_307(bLocal_639, (*&Local_4 + 1416)[20], 1, 1, 1);
	if (!IS_ACTOR_RIDING(bLocal_638))
	{
		ACTOR_MOUNT_ACTOR(bLocal_638, bLocal_639);
	}
	return;
}

void Function_493() //Position: 0x210A6 / 135334
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_276(&iLocal_611))
		{
			Function_220(&iLocal_611);
		}
	}
	else
	{
		if (iLocal_621)
		{
			iLocal_621 = 0;
		}
		if (!Function_276(&iLocal_611))
		{
			Function_221(&iLocal_611);
		}
		if (ACTORS_IN_RANGE(Global_34573, bLocal_574, 15.0f))
		{
			if (Function_274(&iLocal_611) < 4.0f)
			{
				if (!Function_276(&iLocal_733))
				{
					switch (iLocal_620)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_621 = 1;
								Function_498();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_620 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_621 = 1;
								Function_497();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_620 = 2;
								}
							}
							break;
						
						case 0x00000002:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_621 = 1;
								Function_496();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_620 = 3;
								}
							}
							break;
						
						case 0x00000063:
							break;
						
						case 0x00000003:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (Function_422())
								{
									Function_495();
								}
								else
								{
									Function_494();
								}
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_620 = 99;
								}
							}
							break;
						}
					}
				}
			}
	}
	return;
}

void Function_494() //Position: 0x211A2 / 135586
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_noTalk3", "Ranch06_noTalk3", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_495() //Position: 0x211E9 / 135657
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_noTalk2", "Ranch06_noTalk2", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_496() //Position: 0x21230 / 135728
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v3_AA", "Ranch06_meetRanchhands_v3_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v3_AB", "Ranch06_meetRanchhands_v3_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_090", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v3_AC1", "Ranch06_meetRanchhands_v3_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v3_AC2", "Ranch06_meetRanchhands_v3_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_110", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v3_AC3", "Ranch06_meetRanchhands_v3_AC3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v3_AD", "Ranch06_meetRanchhands_v3_AD", true, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_497() //Position: 0x21432 / 136242
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v2_AA", "Ranch06_meetRanchhands_v2_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v2_AB", "Ranch06_meetRanchhands_v2_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v2_AC", "Ranch06_meetRanchhands_v2_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_110", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v2_AD", "Ranch06_meetRanchhands_v2_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_080", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v2_AE", "Ranch06_meetRanchhands_v2_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v2_AF", "Ranch06_meetRanchhands_v2_AF", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_110", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v2_AG1", "Ranch06_meetRanchhands_v2_AG1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_100", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v2_AG2", "Ranch06_meetRanchhands_v2_AG2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v2_AG3", "Ranch06_meetRanchhands_v2_AG3", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_110", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v2_AH", "Ranch06_meetRanchhands_v2_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v2_AI", "Ranch06_meetRanchhands_v2_AI", true, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_498() //Position: 0x217EB / 137195
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v1_AA", "Ranch06_meetRanchhands_v1_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AB", "Ranch06_meetRanchhands_v1_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v1_AC", "Ranch06_meetRanchhands_v1_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_110", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AD", "Ranch06_meetRanchhands_v1_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v1_AE", "Ranch06_meetRanchhands_v1_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_080", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AF1", "Ranch06_meetRanchhands_v1_AF1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_170", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AF2", "Ranch06_meetRanchhands_v1_AF2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_070", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AF3", "Ranch06_meetRanchhands_v1_AF3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_090", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v1_AG", "Ranch06_meetRanchhands_v1_AG", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AH1", "Ranch06_meetRanchhands_v1_AH1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_080", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AH2", "Ranch06_meetRanchhands_v1_AH2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_150", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AH3", "Ranch06_meetRanchhands_v1_AH3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AH4", "Ranch06_meetRanchhands_v1_AH4", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_meetRanchhands_v1_AI", "Ranch06_meetRanchhands_v1_AI", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_110", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_meetRanchhands_v1_AJ", "Ranch06_meetRanchhands_v1_AJ", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_499(var uParam0, bool bParam1, bool bParam2) //Position: 0x21D1C / 138524
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_500(uParam0, bParam2);
	iVar1 = Function_500(bParam1, bParam2);
	if (iVar0 >= iVar1)
	{
		return 1;
	}
	return 0;
	return 0;
}

var Function_500(bool bParam0, bool bParam1) //Position: 0x21D43 / 138563
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = false;
	bVar4 = 4294967295;
	bVar5 = 99999,9f;
	bVar0 = false;
	while (bVar0 < (GET_NUM_PATH_POINTS(bParam1) - 1))
	{
		GET_PATH_POINT(bParam1, bVar0, &vVar1);
		Function_344(bParam0);
		bVar6 = VDIST(Function_344(bParam0), vVar1);
		if (bVar6 > bVar5)
		{
			bVar4 = bVar0;
			bVar5 = bVar6;
		}
		bVar0++;
	}
	return bVar4;
}

void Function_501() //Position: 0x21D97 / 138647
{
	iLocal_621 = 0;
	Function_220(&iLocal_611);
	iLocal_620 = Function_502();
	return;
}

var Function_502() //Position: 0x21DAD / 138669
{
	return Global_34165.f_60;
}

void Function_503() //Position: 0x21DB8 / 138680
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_otherHerd", "Ranch06_otherHerd", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_504() //Position: 0x21E03 / 138755
{
	switch (iLocal_785)
	{
		case 0x00000006:
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_575)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_575));
			}
			if (!IS_ACTOR_VALID(bLocal_624))
			{
				Function_326();
				bLocal_624 = (*&Local_4 + 668)[02];
				DECOR_SET_BOOL(bLocal_624, "bNoInjuryEjection", true);
				SET_ALLOW_RIDE_BY_PLAYER(bLocal_624, 0);
				TASK_PRIORITY_SET(bLocal_624, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_624, true);
				SET_ACTOR_FACTION(bLocal_624, 21);
				bLocal_625 = (*&Local_4 + 668)[12];
				TASK_PRIORITY_SET(bLocal_625, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_625, true);
				SET_ACTOR_FACTION(bLocal_625, 21);
			}
			if (!IS_ACTOR_VALID(bLocal_576))
			{
				Function_325();
				bLocal_576 = (*&Local_4 + 864)[02];
				SET_CRIPPLE_ENABLE(bLocal_576, 0);
				SET_ACTOR_FACTION(bLocal_576, 20);
				TASK_PRIORITY_SET(bLocal_576, true);
				TASK_STAND_STILL(bLocal_576, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_576, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_576, 50.0f);
				SET_ACTOR_HEALTH(bLocal_576, GET_ACTOR_MAX_HEALTH(bLocal_576));
			}
			else
			{
				Function_217(bLocal_576);
			}
			TASK_STAND_STILL(bLocal_576, -1.0f, 0, 0);
			if (!SQUAD_IS_VALID(bLocal_664))
			{
				Function_505();
				if (!SQUAD_IS_VALID(bLocal_664))
				{
					bLocal_664 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sWildSquad"));
				}
				if (SQUAD_IS_VALID(Local_4.f_732))
				{
					bLocal_664 = Local_4.f_732;
				}
				SQUAD_GOALS_CLEAR(bLocal_664);
				Function_425(bLocal_664);
				bLocal_626 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_664, true);
				SQUAD_LEAVE(bLocal_626);
				Function_396(bLocal_664);
				Function_432(&bLocal_664, 0, 0);
				DESTROY_OBJECT(bLocal_664);
			}
			else
			{
				Function_396(bLocal_664);
				SQUAD_GOALS_CLEAR(bLocal_664);
				Function_425(bLocal_664);
				Function_432(&bLocal_664, 0, 0);
				DESTROY_OBJECT(bLocal_664);
			}
			ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_626, false);
			if (SQUAD_IS_VALID(Local_4.f_732))
			{
				Function_432(&Local_4 + 732, 0, 0);
				DESTROY_OBJECT(Local_4.f_732);
			}
			if (!SQUAD_IS_VALID(bLocal_663))
			{
				bLocal_663 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sMoiraSquad"));
				SQUAD_JOIN(bLocal_574, bLocal_663);
			}
			SET_CAMERA_FOCUS_ENABLED(bLocal_803, 0);
			iLocal_785 = 7;
			break;
		
		case 0x00000007:
			if (!IS_ACTOR_VALID(bLocal_575))
			{
				if (Function_333())
				{
					bLocal_575 = Function_327(1, 0, 0, 0, 0, 0, 1, 0);
				}
			}
			else
			{
				if (!iLocal_586[1])
				{
					Function_307(Global_34573, (*&Local_4 + 1224)[1], 1, 1, 1);
					Function_307(bLocal_575, (*&Local_4 + 1224)[1], 1, 1, 1);
					Function_307(bLocal_574, (*&Local_4 + 1224)[3], 1, 1, 1);
					Function_307(bLocal_624, (*&Local_4 + 1224)[3], 1, 1, 1);
					Function_307(bLocal_576, (*&Local_4 + 1224)[7], 1, 1, 1);
				}
				TASK_STAND_STILL(bLocal_576, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_576, true);
				iLocal_785 = 8;
			}
			break;
		
		case 0x00000008:
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				ACTOR_MOUNT_ACTOR(Global_34573, bLocal_575);
			}
			if (!IS_ACTOR_RIDING(bLocal_574))
			{
				ACTOR_MOUNT_ACTOR(bLocal_574, bLocal_624);
				MEMORY_PREFER_RIDING(bLocal_574, true);
			}
			iLocal_785 = 9;
			break;
		
		case 0x00000009:
			if (!iLocal_586[1])
			{
				Function_350(Global_34573, (*&Local_4 + 1224)[1], 1, 1, 1);
				Function_350(bLocal_574, (*&Local_4 + 1224)[3], 1, 1, 1);
				ACTOR_SET_NEXT_WEAPON(Global_34573, 21);
			}
			TASK_STAND_STILL(bLocal_574, -1.0f, 0, 0);
			CLEAR_LINKED_ANIM_TARGET(bLocal_574);
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_574, 1);
			iLocal_785 = 10;
			break;
		
		case 0x0000000A:
			iLocal_785 = 104;
			return 1;
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

void Function_505() //Position: 0x22150 / 139600
{
	Local_4.f_732 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "herdHorseWild01"));
	(*&Local_4 + 688)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "wildHorse010", 976, -1100f, 99,38824f, 2668.0f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 688)[02], Local_4.f_732);
	SET_ACTOR_FACTION((*&Local_4 + 688)[02], 1);
	DECOR_SET_INT((*&Local_4 + 688)[02], "iStartingDifficulty", 7);
	DECOR_SET_INT((*&Local_4 + 688)[02], "iDiffStepSize", 2);
	DECOR_SET_INT((*&Local_4 + 688)[02], "iNumOfSets", true);
	DECOR_SET_INT((*&Local_4 + 688)[02], "iMovesPerSet", true);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 688)[02], true);
	Function_356((*&Local_4 + 688)[02]);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 688)[02], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 688)[02], true);
	(*&Local_4 + 688)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "wildHorse011", 977, -1104.0f, 99,38824f, 2672.0f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 688)[12], Local_4.f_732);
	SET_ACTOR_FACTION((*&Local_4 + 688)[12], 1);
	DECOR_SET_INT((*&Local_4 + 688)[12], "iStartingDifficulty", 7);
	DECOR_SET_INT((*&Local_4 + 688)[12], "iDiffStepSize", 2);
	DECOR_SET_INT((*&Local_4 + 688)[12], "iNumOfSets", true);
	DECOR_SET_INT((*&Local_4 + 688)[12], "iMovesPerSet", true);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 688)[12], true);
	Function_356((*&Local_4 + 688)[12]);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 688)[12], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 688)[12], true);
	(*&Local_4 + 688)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "wildHorse012", 980, -1108f, 99,96338f, 2668.0f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 688)[22], Local_4.f_732);
	SET_ACTOR_FACTION((*&Local_4 + 688)[22], 1);
	DECOR_SET_INT((*&Local_4 + 688)[22], "iStartingDifficulty", 7);
	DECOR_SET_INT((*&Local_4 + 688)[22], "iDiffStepSize", 2);
	DECOR_SET_INT((*&Local_4 + 688)[22], "iNumOfSets", true);
	DECOR_SET_INT((*&Local_4 + 688)[22], "iMovesPerSet", true);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 688)[22], true);
	Function_356((*&Local_4 + 688)[22]);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 688)[22], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 688)[22], true);
	(*&Local_4 + 688)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "wildHorse013", 981, -1104f, 99,38824f, 2668.0f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 688)[32], Local_4.f_732);
	SET_ACTOR_FACTION((*&Local_4 + 688)[32], 1);
	DECOR_SET_INT((*&Local_4 + 688)[32], "iStartingDifficulty", 7);
	DECOR_SET_INT((*&Local_4 + 688)[32], "iDiffStepSize", 2);
	DECOR_SET_INT((*&Local_4 + 688)[32], "iNumOfSets", true);
	DECOR_SET_INT((*&Local_4 + 688)[32], "iMovesPerSet", true);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 688)[32], true);
	Function_356((*&Local_4 + 688)[32]);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 688)[32], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 688)[32], true);
	(*&Local_4 + 688)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "wildHorse014", 976, -1108f, 99,38824f, 2672.0f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 688)[42], Local_4.f_732);
	SET_ACTOR_FACTION((*&Local_4 + 688)[42], 1);
	DECOR_SET_INT((*&Local_4 + 688)[42], "iStartingDifficulty", 7);
	DECOR_SET_INT((*&Local_4 + 688)[42], "iDiffStepSize", 2);
	DECOR_SET_INT((*&Local_4 + 688)[42], "iNumOfSets", true);
	DECOR_SET_INT((*&Local_4 + 688)[42], "iMovesPerSet", true);
	ANIMAL_ACTOR_SET_DOMESTICATION((*&Local_4 + 688)[42], true);
	Function_356((*&Local_4 + 688)[42]);
	AI_SET_NAV_ACTOR_WIDTH((*&Local_4 + 688)[42], 0,5f);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 688)[42], true);
	return;
}

bool Function_506() //Position: 0x22657 / 140887
{
	Function_319(&Local_4 + 232, 170, 2, 0);
	Function_319(&Local_4 + 232, 976, 2, 0);
	Function_319(&Local_4 + 232, 171, 2, 0);
	Function_319(&Local_4 + 232, 172, 2, 0);
	Function_319(&Local_4 + 232, 173, 2, 0);
	Function_319(&Local_4 + 232, 174, 2, 0);
	Function_319(&Local_4 + 232, 175, 2, 0);
	Function_319(&Local_4 + 232, 608, 2, 0);
	if (Function_310(&Local_4 + 232))
	{
		return 1;
	}
	return 0;
}

void Function_507() //Position: 0x226CC / 141004
{
	if (iLocal_532 == 1)
	{
		if (IS_ACTOR_VALID(bLocal_576))
		{
			if (GET_TASK_STATUS(bLocal_576, 0) == 0)
			{
				TASK_FACE_ACTOR(bLocal_576, Global_34573, 1, 3212836864);
				if (IS_ACTOR_VALID(bLocal_625))
				{
					DESTROY_ACTOR(bLocal_625);
				}
				if (IS_ACTOR_VALID(bLocal_627))
				{
					DESTROY_ACTOR(bLocal_627);
				}
				return;
			}
			if (IS_ACTOR_VALID(bLocal_627))
			{
				if (GET_MOUNT(Global_34573) != bLocal_627 && GET_TASK_STATUS(bLocal_576, 0) != 1)
				{
					DETACH_LASSO(bLocal_576);
					TASK_FOLLOW_ACTOR(bLocal_576, Global_34573);
				}
				else if (Function_508(bLocal_576, bLocal_627))
				{
					AI_GOAL_LOOK_CLEAR(bLocal_576);
					bLocal_609 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1800, 4, 0, 0, 1, false);
					TASK_DISMOUNT(false, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_576, bLocal_609);
					TASK_SEQUENCE_RELEASE(bLocal_609, 1);
					TASK_PRIORITY_SET(bLocal_576, true);
				}
			}
		}
	}
	if (iLocal_532 > 2)
	{
		if (iLocal_533 > 6)
		{
			if (!iLocal_775)
			{
				if (IS_ACTOR_VALID(bLocal_576))
				{
					if (!ACTORS_IN_RANGE(Global_34573, bLocal_576, 75.0f))
					{
						if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bLocal_576, 1.0f, 200.0f, 1, 1, 0))
						{
							RELEASE_ACTOR(bLocal_576);
							iLocal_775 = 1;
						}
					}
				}
				else
				{
					iLocal_775 = 1;
				}
			}
		}
	}
	return;
}

bool Function_508(bool bParam0, bool bParam1) //Position: 0x227E9 / 141289
{
	if (GET_LASSO_TARGET(Global_34573) == bParam1)
	{
		return 1;
	}
	if (GET_LASSO_TARGET(bParam0) == bParam1)
	{
		if (GET_TASK_STATUS(bParam0, 68) == 1)
		{
			return 0;
		}
		DECOR_SET_BOOL(bParam1, "CanHaveMultipleLassoAttached", false);
		return 1;
	}
	if (GET_TASK_STATUS(bParam0, 68) == 1)
	{
		if (Function_276(&iLocal_643))
		{
			if (Function_274(&iLocal_643) <= 10.0f)
			{
				TASK_CLEAR(bParam0);
				TASK_GO_NEAR_ACTOR(bParam1, bParam0, 10.0f, 1);
				return 0;
			}
		}
		return 0;
	}
	TASK_CLEAR(bParam0);
	AI_GOAL_LOOK_CLEAR(bParam0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, bParam1, true);
	TASK_USE_LASSO(bParam0, bParam1, 1.0f, 1.0f, 1, 2);
	Function_221(&iLocal_643);
	return 0;
	return 0;
}

void Function_509() //Position: 0x228A3 / 141475
{
	if (iLocal_533 < 3 && iLocal_533 > 105)
	{
		Function_507();
		if (SQUAD_IS_VALID(bLocal_664))
		{
			Function_486(bLocal_664, &bLocal_789);
		}
	}
	switch (iLocal_533)
	{
		case 0x00000000:
			if (Function_367(iLocal_532))
			{
				iLocal_784 = 6;
				iLocal_780 = 0;
				Function_220(&iLocal_790);
				Function_221(&iLocal_577);
				iLocal_533 = 1;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_586[0])
			{
				if ((STREAMING_IS_WORLD_LOADED() && (Function_364(Global_30628[2]) || iLocal_572 != 4294967295)) && Function_541())
				{
					Function_221(&iLocal_577);
					iLocal_533 = 2;
				}
			}
			else if (Function_541())
			{
				Function_221(&iLocal_577);
				iLocal_533 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_538())
			{
				Function_221(&iLocal_577);
				iLocal_533 = 4;
				Function_234(iLocal_532);
				Function_416(StackVal, StackVal, Function_234(iLocal_532), iLocal_532, Global_30628[2], Function_237(iLocal_532), 2);
				if (HUD_IS_FADED())
				{
					CAMERA_RESET(0);
					HUD_FADE_IN(1.0f, 1065353216);
					SET_ACTOR_INVULNERABILITY(Global_34573, false);
				}
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_574);
				iLocal_776 = 0;
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_537();
				iLocal_782 = 6;
				Function_387();
			}
			break;
		
		case 0x00000004:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			if (HUD_IS_FADED())
			{
				CAMERA_RESET(0);
				HUD_FADE_IN(1.0f, 1065353216);
				SET_ACTOR_INVULNERABILITY(Global_34573, false);
			}
			Function_387();
			Function_220(&iLocal_742);
			Function_221(&iLocal_577);
			iLocal_533 = 6;
			break;
		
		case 0x00000006:
			if (IS_ACTOR_VALID(bLocal_576))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_576, 20.0f) && !ACTORS_IN_RANGE(Global_34573, bLocal_574, 20.0f))
				{
					if (!Function_276(&iLocal_742))
					{
						Function_221(&iLocal_742);
					}
					else if (Function_275(&iLocal_742))
					{
						Function_536(&iLocal_742);
					}
					else if (Function_274(&iLocal_742) < 6.0f)
					{
						Function_535();
						Function_221(&iLocal_742);
					}
				}
				else if (Function_276(&iLocal_742))
				{
					if (!Function_275(&iLocal_742))
					{
						Function_534(&iLocal_742);
					}
				}
			}
			if (Function_511())
			{
				Function_221(&iLocal_577);
				iLocal_533 = 105;
			}
			break;
		
		case 0x00000069:
			GET_OBJECT_POSITION((*&Local_4 + 1224)[0], &vLocal_762);
			Function_373(StackVal, StackVal, "$/cutscene/RANCH_06_CS03/RANCH_06_CS03", &uLocal_571, vLocal_762, 142236, 1, 200.0f, 300.0f, 2, 1, 2, 2, 0, 1);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
			Function_223(&(Local_845[017]), 0);
			Function_223(&(Local_845[217]), 0);
			Function_221(&iLocal_577);
			iLocal_533 = 106;
			break;
		
		case 0x0000006A:
			GET_OBJECT_POSITION((*&Local_4 + 1224)[0], &vLocal_762);
			Function_373(StackVal, StackVal, "$/cutscene/RANCH_06_CS03/RANCH_06_CS03", &uLocal_571, vLocal_762, 142236, 1, 200.0f, 300.0f, 2, 1, 2, 2, 0, 1);
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				Function_365();
				Function_212();
				iLocal_586[1] = 1;
				Function_221(&iLocal_577);
				iLocal_532 = 2;
				iLocal_533 = 0;
			}
			break;
	}
	return;
}

int Function_510() //Position: 0x22B9C / 142236
{
	if (IS_ACTOR_VALID(bLocal_656))
	{
		CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse03", bLocal_656);
	}
	return 1;
}

bool Function_511() //Position: 0x22BCC / 142284
{
	Function_436();
	switch (iLocal_990)
	{
		case 0x00000000:
			Function_533();
			if (Function_531())
			{
				return 0;
			}
			Function_439(&iLocal_583, 75.0f, 125.0f, bLocal_574, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_598, 0, 0, 0, 325, 1);
			if (!Function_276(&iLocal_733))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_274(&iLocal_577) < 8.0f)
				{
					Function_530();
					Function_204(3, 0, 1);
					Function_206(bLocal_664);
					Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_379("Ranch06_lasso_horse_obj2");
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, bLocal_789, 7.0f, 4);
					TASK_PRIORITY_SET(bLocal_574, true);
					SET_ACTOR_MAX_SPEED(bLocal_574, 3);
					HUD_CLEAR_OBJECTIVE();
					Function_221(&iLocal_577);
					if (!iLocal_773)
					{
						Function_132("Ranch06_wild_blip_help", 0x41200000, 1, 0, 2, 1, 0);
						iLocal_773 = 1;
					}
					iLocal_772 = 0;
					Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
					iLocal_990 = 2;
				}
			}
			break;
		
		case 0x00000002:
			Function_533();
			if (Function_531())
			{
				return 0;
			}
			Function_529(&iLocal_583, 150.0f, 200.0f, bLocal_789, "Ranch06_herd_return", "Herd_abandoned", &bLocal_598, 0, 0, 0, 4294967295, 1);
			if (Function_276(&iLocal_577))
			{
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					if (!DECOR_CHECK_EXIST(bLocal_485, "LassoInvHelp"))
					{
						if (!DECOR_CHECK_EXIST(bLocal_485, "LassoInvHelp"))
						{
							if (!GET_WEAPON_IN_HAND(Global_34573) != 21)
							{
								if (ACTOR_GET_NEXT_EQUIP_SLOT(Global_34573) == 3)
								{
									HUD_CLEAR_HELP();
									HUD_CLEAR_HELP_QUEUE();
									Function_132("Ranch06_lasso_inv_hlp_1", 0x41200000, 1, 0, 2, 1, 0);
									DECOR_SET_BOOL(bLocal_485, "LassoInvHelp", true);
									Function_221(&iLocal_577);
								}
							}
						}
					}
					else if (Function_274(&iLocal_577) <= 25.0f)
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
						Function_132("Ranch06_lasso_horse_help_01", 0x41200000, 1, 0, 2, 1, 0);
						Function_221(&iLocal_577);
					}
				}
			}
			if (!Function_276(&iLocal_739))
			{
				Function_221(&iLocal_739);
			}
			else if (Function_274(&iLocal_739) < 7.0f)
			{
				SAY_SINGLE_LINE_SCRIPTED(bLocal_574, "Ranch06_tooLongBon", Global_34573, 0, 0, 0, 1, 3);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_574, Global_34573, 3.0f, 1);
				Function_221(&iLocal_739);
				Function_222(&iLocal_742, 1.0f);
			}
			bLocal_656 = GET_LASSO_TARGET(Global_34573);
			if (IS_ACTOR_VALID(bLocal_656))
			{
				if (Function_528(bLocal_656, bLocal_664, 0))
				{
					Function_206(bLocal_664);
					SET_MINIGAME_SCRIPT_OVERRIDE(1);
					Function_527();
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_656)))
					{
						bLocal_745 = ADD_BLIP_FOR_ACTOR(bLocal_656, 418, 0, 2, 0);
					}
					bLocal_609 = TASK_SEQUENCE_OPEN();
					TASK_HORSE_ACTION(false, 0);
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_656, bLocal_609, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_609, 1);
					TASK_PRIORITY_SET(bLocal_656, true);
					DECOR_SET_BOOL(bLocal_656, "CanHaveMultipleLassoAttached", true);
					Function_221(&iLocal_646);
					Function_221(&iLocal_577);
					iLocal_990 = 3;
					iLocal_988 = 0;
					TASK_USE_LASSO(bLocal_574, bLocal_656, 1.0f, 1.0f, 1, 2);
					TASK_PRIORITY_SET(bLocal_574, true);
					DECOR_SET_BOOL(bLocal_656, "DisableBuckOff", true);
					DECOR_SET_FLOAT(bLocal_656, "fHowLong", 25.0f);
				}
			}
			break;
		
		case 0x00000003:
			Function_526();
			if (Function_531())
			{
				return 0;
			}
			if (Function_439(&iLocal_583, 75.0f, 125.0f, bLocal_574, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_598, 0, 0, 0, 325, 1))
			{
				if (!iLocal_778)
				{
					iLocal_778 = 1;
				}
			}
			else
			{
				if (GET_LASSO_TARGET(bLocal_574) == bLocal_656)
				{
					Function_379("Ranch06_mount_drews_target");
				}
				else
				{
					Function_379("Ranch06_hold_lassoed_horse_obj");
				}
				iLocal_778 = 0;
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_656)))
				{
					bLocal_745 = ADD_BLIP_FOR_ACTOR(bLocal_656, 418, 0, 2, 0);
				}
			}
			if (!iLocal_776)
			{
				if (!GET_MOUNT(Global_34573) != bLocal_627)
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					Function_132("Ranch06_MountWildHorseTutorial", 10.0f, 1, 0, 2, 1, 0);
					iLocal_776 = 1;
				}
			}
			if (GET_LASSO_TARGET(bLocal_574) == bLocal_656)
			{
				if (!iLocal_776)
				{
					if (!GET_MOUNT(Global_34573) != bLocal_656)
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
						Function_132("Ranch06_MountWildHorseTutorial", 10.0f, 1, 0, 2, 1, 0);
						iLocal_776 = 1;
					}
				}
			}
			if (GET_TASK_STATUS(bLocal_574, 6) == 1)
			{
				if (!Function_276(&iLocal_739))
				{
					Function_221(&iLocal_739);
				}
				else if (Function_274(&iLocal_739) < 7.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(bLocal_574, "Ranch06_closeEnoughBon", Global_34573, 0, 0, 0, 1, 3);
					AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_574, Global_34573, 3.0f, 1);
					Function_221(&iLocal_739);
				}
			}
			Function_525();
			if (!GET_LASSO_TARGET(Global_34573) != bLocal_656 && !GET_LASSO_TARGET(bLocal_574) != bLocal_656)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_221(&iLocal_577);
				DETACH_LASSO(bLocal_574);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, bLocal_789, 15.0f, 4);
				TASK_PRIORITY_SET(bLocal_574, true);
				Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
				iLocal_990 = 2;
				TASK_CLEAR(bLocal_656);
				Function_524(bLocal_664, Global_34573, 15.0f, 2.0f, 0, 0);
				DECOR_SET_BOOL(bLocal_656, "DisableBuckOff", true);
				Function_206(bLocal_664);
				Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_523();
				return 0;
			}
			if (GET_TASK_STATUS(bLocal_574, 68) == 0)
			{
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_FLEE_ACTOR(false, bLocal_656, 10.0f, 3.0f, 0, 0, 0);
				TASK_FACE_ACTOR(false, bLocal_656, 0, 3212836864);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_574, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET(bLocal_574, true);
				Function_522();
				iLocal_776 = 0;
			}
			if (IS_ACTOR_VALID(bLocal_656) && GET_RIDER(bLocal_656) != Global_34573)
			{
				TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, bLocal_656, 15.0f, true);
				TASK_PRIORITY_SET(bLocal_574, true);
				Function_202();
				if (!Global_3384)
				{
					if (!iLocal_780)
					{
						TASK_CLEAR(bLocal_574);
						iLocal_780 = 1;
						Function_221(&iLocal_790);
						return 0;
					}
					if (Function_274(&iLocal_790) > 3.0f)
					{
						return 0;
					}
					Function_221(&iLocal_577);
					Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
					iLocal_990 = 5;
					iLocal_778 = 0;
					DECOR_SET_BOOL(bLocal_656, "CanHaveMultipleLassoAttached", false);
					SQUAD_LEAVE(bLocal_656);
					TASK_CLEAR(bLocal_656);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_656);
					ANIMAL_TUNING_SET_ATTRIB_BOOL(bLocal_656, 11, false);
					ANIMAL_ACTOR_SET_DOCILE(bLocal_656, 1);
					ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_656, false);
					SET_ACTOR_MAX_SPEED(bLocal_656, true);
					SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_656, 3.0f);
					Function_432(&bLocal_664, 1, 0);
					DESTROY_OBJECT(bLocal_664);
					Function_387();
					Function_521();
					if (IS_ACTOR_ALIVE(bLocal_575))
					{
						Function_379("Horse_return");
					}
					else
					{
						Function_379("Horse_find");
					}
					Function_520();
					return 0;
				}
				Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
				iLocal_990 = 4;
				iLocal_780 = 0;
				iLocal_778 = 0;
				Function_519();
				HUD_CLEAR_OBJECTIVE();
				TASK_CLEAR(bLocal_574);
				DETACH_LASSO(bLocal_574);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, bLocal_656, 15.0f, 2);
				TASK_PRIORITY_SET(bLocal_574, true);
				SET_ACTOR_MAX_SPEED(bLocal_574, 3);
				return 0;
			}
			if (iLocal_780)
			{
				iLocal_780 = 0;
				Function_220(&iLocal_790);
			}
			break;
		
		case 0x00000004:
			Function_526();
			if (GET_TASK_STATUS(bLocal_574, 68) == 1)
			{
				TASK_CLEAR(bLocal_574);
			}
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (ANIMAL_ACTOR_GET_DOMESTICATION(bLocal_656) == 0)
				{
					Function_221(&iLocal_577);
					iLocal_780 = 0;
					Function_220(&iLocal_790);
					Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
					iLocal_990 = 5;
					iLocal_778 = 0;
					DECOR_SET_BOOL(bLocal_656, "CanHaveMultipleLassoAttached", false);
					SQUAD_LEAVE(bLocal_656);
					TASK_CLEAR(bLocal_656);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_656);
					ANIMAL_TUNING_SET_ATTRIB_BOOL(bLocal_656, 11, false);
					ANIMAL_ACTOR_SET_DOCILE(bLocal_656, 1);
					ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_656, false);
					SET_ACTOR_MAX_SPEED(bLocal_656, true);
					SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_656, 3.0f);
					Function_432(&bLocal_664, 1, 0);
					DESTROY_OBJECT(bLocal_664);
					Function_387();
					Function_521();
					if (IS_ACTOR_ALIVE(bLocal_575))
					{
						Function_379("Horse_return");
					}
					else
					{
						Function_379("Horse_find");
					}
					Function_520();
					return 0;
				}
				if (ACTORS_IN_RANGE(bLocal_574, Global_34573, 10.0f))
				{
					if (GET_TASK_STATUS(bLocal_574, 25) != 1)
					{
						TASK_FLEE_ACTOR(bLocal_574, Global_34573, 20.0f, 2.0f, 0, 1, 0);
					}
				}
				else if (!ACTORS_IN_RANGE(bLocal_574, Global_34573, 30.0f))
				{
					if (GET_TASK_STATUS(bLocal_574, 83) != 1)
					{
						TASK_GO_NEAR_ACTOR(bLocal_574, Global_34573, 25.0f, 4);
					}
				}
				else if (GET_TASK_STATUS(bLocal_574, 22) != 1)
				{
					TASK_FACE_ACTOR(bLocal_574, Global_34573, 1, 3212836864);
				}
				else if (!Function_276(&iLocal_739))
				{
					Function_221(&iLocal_739);
				}
				else if (Function_274(&iLocal_739) < 5.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(bLocal_574, "Ranch06_BonEncourage", Global_34573, 0, 0, 0, 1, 3);
					Function_221(&iLocal_739);
				}
			}
			else
			{
				HUD_CLEAR_OBJECTIVE();
				Function_221(&iLocal_577);
				iLocal_778 = 0;
				iLocal_780 = 0;
				Function_220(&iLocal_790);
				iLocal_990 = 6;
				DETACH_LASSO(bLocal_574);
				TASK_CLEAR(bLocal_574);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, bLocal_656, 15.0f, 2);
				TASK_PRIORITY_SET(bLocal_574, true);
				SET_ACTOR_MAX_SPEED(bLocal_574, 3);
				TASK_CLEAR(bLocal_656);
				DECOR_SET_BOOL(bLocal_656, "DisableBuckOff", true);
				TASK_FLEE_ACTOR(bLocal_656, Global_34573, 20.0f, 10.0f, 0, 1, 0);
				Function_524(bLocal_664, Global_34573, 15.0f, 2.0f, 0, 0);
				Function_221(&iLocal_646);
				TASK_FOLLOW_ACTOR(bLocal_574, Global_34573);
				TASK_PRIORITY_SET(bLocal_574, true);
				SAY_SINGLE_LINE_SCRIPTED(bLocal_574, "Ranch06_buckHorseBon", Global_34573, 0, 0, 0, 1, 3);
				Function_520();
			}
			break;
		
		case 0x00000005:
			Function_526();
			if (Function_439(&iLocal_583, 75.0f, 125.0f, bLocal_574, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_598, 0, 0, 0, 325, 1))
			{
				if (!iLocal_778)
				{
					iLocal_778 = 1;
				}
			}
			else
			{
				iLocal_778 = 0;
			}
			if (Function_518())
			{
				Function_517();
				Function_221(&iLocal_580);
			}
			if (DECOR_GET_BOOL(Global_34573, "CanBeLasso"))
			{
				DECOR_SET_BOOL(Global_34573, "CanBeLasso", false);
			}
			if (!DECOR_GET_BOOL(bLocal_656, "CanBeLasso"))
			{
				DECOR_SET_BOOL(bLocal_656, "CanBeLasso", true);
			}
			if (!DECOR_GET_BOOL(bLocal_656, "CanLassoIfPlayerRiding"))
			{
				DECOR_SET_BOOL(bLocal_656, "CanLassoIfPlayerRiding", true);
			}
			if (GET_ALLOW_RIDE(bLocal_656))
			{
				SET_ALLOW_RIDE(bLocal_656, 0);
			}
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (GET_LASSO_TARGET(bLocal_574) == bLocal_656)
				{
					if (GET_TASK_STATUS(Global_34573, 12) != 1)
					{
						MEMORY_CLEAR_EVENTS(bLocal_656, 1);
						TASK_DISMOUNT(Global_34573, 1);
					}
				}
				else if (GET_TASK_STATUS(bLocal_574, 68) != 1)
				{
					TASK_USE_LASSO(bLocal_574, bLocal_656, 1.0f, 1.0f, 1, 2);
				}
			}
			else
			{
				HUD_CLEAR_OBJECTIVE();
				Function_221(&iLocal_577);
				Function_516();
				MEMORY_CLEAR_EVENTS(bLocal_656, 1);
				Function_501();
				iLocal_778 = 0;
				Function_202();
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_574, -1.0f, -1.0f, 1, 1, 0);
				iLocal_988 = 0;
				TASK_CLEAR(bLocal_656);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_656);
				ANIMAL_TUNING_SET_ATTRIB_BOOL(bLocal_656, 11, false);
				ANIMAL_ACTOR_SET_DOCILE(bLocal_656, 1);
				ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_656, false);
				CLEAR_ACTOR_MAX_SPEED(bLocal_656);
				CLEAR_ACTOR_MIN_SPEED(bLocal_574);
				CLEAR_ACTOR_MAX_SPEED(bLocal_574);
				if (!GET_LASSO_TARGET(bLocal_574) != bLocal_656)
				{
					TASK_USE_LASSO(bLocal_574, bLocal_656, 1.0f, 1.0f, 1, 2);
				}
				if (!SQUAD_IS_VALID(bLocal_663))
				{
					bLocal_663 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sMoiraSquad"));
				}
				if (SQUAD_GET(bLocal_574) != bLocal_663)
				{
					SQUAD_JOIN(bLocal_574, bLocal_663);
				}
				SQUAD_GOALS_CLEAR(bLocal_663);
				bLocal_666 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(bLocal_663, 0, 4294967295, Local_4.f_1800, 4, 1, 0);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(bLocal_663, bLocal_666, 8, 0);
				SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(bLocal_663, bLocal_666, 1, 0);
				if (IS_ACTOR_VALID(bLocal_627))
				{
					DESTROY_ACTOR(bLocal_627);
				}
				TASK_CLEAR(bLocal_576);
				MEMORY_CLEAR_RIDING_PREFERENCE(bLocal_576);
				ACTOR_DISMOUNT_NOW(bLocal_576);
				Function_294();
				ACTOR_START_FORCE_HOLSTER(bLocal_576, 0, 0);
				DESTROY_ACTOR(bLocal_625);
				Function_357();
				iLocal_990 = 8;
				Function_221(&iLocal_643);
			}
			break;
		
		case 0x00000006:
			Function_526();
			if (Function_531())
			{
				return 0;
			}
			if (Function_439(&iLocal_583, 75.0f, 125.0f, bLocal_574, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_598, 0, 0, 0, 325, 1))
			{
				if (!iLocal_778)
				{
					iLocal_778 = 1;
				}
			}
			else
			{
				if (IS_ACTOR_ALIVE(bLocal_575))
				{
					Function_379("Horse_return");
				}
				else
				{
					Function_379("Horse_find");
				}
				iLocal_778 = 0;
			}
			if (IS_ACTOR_VALID(bLocal_656))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_656, 15.0f))
				{
					if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_656, "standing"))
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_656, 1);
					}
					if (GET_TASK_STATUS(bLocal_656, 25) != 1)
					{
						TASK_FLEE_ACTOR(bLocal_656, Global_34573, 20.0f, 10.0f, 0, 1, 0);
					}
					AI_ACTOR_FORCE_SPEED(bLocal_656, 4);
				}
			}
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (ANIMAL_ACTOR_GET_DOMESTICATION(GET_MOUNT(Global_34573)) == 0)
				{
					Function_202();
					HUD_CLEAR_OBJECTIVE();
					Function_221(&iLocal_577);
					Function_379("Ranch06_lasso_horse_obj2");
					Function_206(bLocal_664);
					Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
					iLocal_990 = 2;
				}
			}
			break;
		
		case 0x00000008:
			GET_OBJECT_POSITION((*&Local_4 + 1224)[0], &vLocal_762);
			Function_373(StackVal, StackVal, "$/cutscene/RANCH_06_CS03/RANCH_06_CS03", &uLocal_571, vLocal_762, 142236, 1, 200.0f, 300.0f, 2, 1, 2, 2, 0, 1);
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (!Function_439(&iLocal_583, 100.0f, 200.0f, bLocal_574, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_598, 0, 0, 0, 325, 1))
				{
					Function_204(3, 1, 1);
					Function_379("Ranch06_follow_bonnie_obj");
				}
				else
				{
					Function_204(3, 1, 1);
				}
			}
			else
			{
				if (!ACTORS_IN_RANGE(Global_34573, bLocal_574, 100.0f))
				{
					Function_439(&iLocal_583, 75.0f, 100.0f, bLocal_574, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_598, 0, 0, 0, 325, 1);
				}
				if (IS_ACTOR_ALIVE(bLocal_575))
				{
					Function_379("Horse_return");
					Function_520();
				}
				else
				{
					Function_379("Horse_find");
					if (IS_ACTOR_VALID(bLocal_575))
					{
						if (IS_BLIP_VALID(bLocal_747))
						{
							REMOVE_BLIP(bLocal_747);
						}
					}
				}
			}
			Function_526();
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (!GET_MOUNT(Global_34573) != bLocal_656)
				{
					Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
				}
			}
			if (GET_MOUNT(Global_34573) == bLocal_656)
			{
				DETACH_LASSO(bLocal_574);
				TASK_STAND_STILL(bLocal_574, -1.0f, 0, 0);
				Function_520();
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_656);
				Function_221(&iLocal_577);
				iLocal_778 = 0;
				Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
				SET_ACTOR_MAX_SPEED(bLocal_656, true);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_656, 3.0f);
				iLocal_990 = 5;
			}
			else
			{
				Function_515();
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
				{
					Function_512();
				}
				if (Function_464(Global_34573, Local_4.f_1800) > 25.0f && IS_ACTOR_RIDING(Global_34573))
				{
					Function_202();
					SQUAD_GOALS_CLEAR(bLocal_663);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void Function_512() //Position: 0x2404B / 147531
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_276(&iLocal_611))
		{
			Function_220(&iLocal_611);
		}
	}
	else
	{
		if (iLocal_621)
		{
			iLocal_621 = 0;
		}
		if (!Function_276(&iLocal_611))
		{
			Function_221(&iLocal_611);
		}
		if (ACTORS_IN_RANGE(Global_34573, bLocal_574, 15.0f))
		{
			if (Function_274(&iLocal_611) < 4.0f)
			{
				if (!Function_276(&iLocal_733))
				{
					switch (iLocal_620)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_621 = 1;
								Function_514();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_620 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_621 = 1;
								Function_513();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_620 = 2;
								}
							}
							break;
						
						case 0x00000063:
							break;
						
						case 0x00000003:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_620 = 99;
							}
							break;
						}
					}
				}
			}
	}
	return;
}

void Function_513() //Position: 0x24111 / 147729
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_backToRanch_v2_AA", "Ranch06_backToRanch_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_backToRanch_v2_AB", "Ranch06_backToRanch_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_100", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_backToRanch_v2_AC", "Ranch06_backToRanch_v2_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_backToRanch_v2_AD", "Ranch06_backToRanch_v2_AD", true, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_514() //Position: 0x2424B / 148043
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_backToRanch_v1_AA", "Ranch06_backToRanch_v1_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_060", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_backToRanch_v1_AB", "Ranch06_backToRanch_v1_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_160", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_backToRanch_v1_AC", "Ranch06_backToRanch_v1_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_backToRanch_v1_AD", "Ranch06_backToRanch_v1_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_backToRanch_v1_AE", "Ranch06_backToRanch_v1_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_130", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_backToRanch_v1_AF", "Ranch06_backToRanch_v1_AF", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_140", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_backToRanch_v1_AG", "Ranch06_backToRanch_v1_AG", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_backToRanch_v1_AH", "Ranch06_backToRanch_v1_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_120", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_backToRanch_v1_AI", "Ranch06_backToRanch_v1_AI", true, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_515() //Position: 0x2453A / 148794
{
	float fVar0;
	
	fVar0 = Function_371(Global_34573, bLocal_574);
	if (fVar0 < 200.0f)
	{
		if (!Function_499(Global_34573, bLocal_574, Local_4.f_1800))
		{
			Function_228("RanchersDaughter_abandoned");
			bLocal_598 = true;
		}
	}
	else if (fVar0 < 30.0f)
	{
		if (Function_508(bLocal_574, bLocal_656))
		{
			if (!Function_499(Global_34573, bLocal_574, Local_4.f_1800))
			{
				if (GET_TASK_STATUS(bLocal_574, 4294967295) == 1)
				{
					TASK_CLEAR(bLocal_574);
					CLEAR_ACTOR_MIN_SPEED(bLocal_574);
					CLEAR_ACTOR_MAX_SPEED(bLocal_574);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_574);
				}
			}
		}
	}
	else if (!IS_ACTOR_RIDING(Global_34573))
	{
		if (Function_508(bLocal_574, bLocal_656))
		{
			if (GET_TASK_STATUS(bLocal_574, 4294967295) == 1)
			{
				TASK_CLEAR(bLocal_574);
				CLEAR_ACTOR_MIN_SPEED(bLocal_574);
				CLEAR_ACTOR_MAX_SPEED(bLocal_574);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_574);
			}
		}
		Function_204(3, 0, 1);
		if (IS_ACTOR_ALIVE(bLocal_575))
		{
			Function_379("Horse_return");
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_575)))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_575, 334, 0.0f, 2, 0);
			}
		}
		else
		{
			Function_379("Horse_find");
		}
	}
	else
	{
		if (Function_508(bLocal_574, bLocal_656))
		{
			if (GET_TASK_STATUS(bLocal_574, 4294967295) == 1)
			{
				TASK_CLEAR(bLocal_574);
				CLEAR_ACTOR_MIN_SPEED(bLocal_574);
				CLEAR_ACTOR_MAX_SPEED(bLocal_574);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_574);
			}
		}
		Function_217(bLocal_575);
		Function_204(3, 1, 1);
	}
	return;
}

void Function_516() //Position: 0x246A3 / 149155
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_2HorseBon", "Ranch06_2HorseBon", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_517() //Position: 0x246EE / 149230
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_backOnHorseBon", "Ranch06_backOnHorseBon", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_518() //Position: 0x24743 / 149315
{
	if (Function_276(&iLocal_580))
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				if (Function_274(&iLocal_580) <= 15.0f)
				{
					return 1;
				}
			}
		}
	}
	Function_221(&iLocal_580);
	return 0;
}

void Function_519() //Position: 0x2477B / 149371
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_mountBreakBon", "Ranch06_mountBreakBon", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_520() //Position: 0x247CE / 149454
{
	Function_204(3, 0, 1);
	if (IS_BLIP_VALID(bLocal_745))
	{
		REMOVE_BLIP(bLocal_745);
	}
	if (IS_OBJECT_VALID(bLocal_667))
	{
		Function_203(bLocal_667);
		Function_198();
	}
	if (IS_BLIP_VALID(bLocal_746))
	{
		REMOVE_BLIP(bLocal_746);
	}
	if (IS_ACTOR_VALID(bLocal_575))
	{
		if (!IS_BLIP_VALID(bLocal_747))
		{
			bLocal_747 = ADD_BLIP_FOR_ACTOR(bLocal_575, 334, 0, 2, 0);
			if (IS_BLIP_VALID(bLocal_747))
			{
			}
		}
	}
	Function_206(bLocal_664);
	return;
}

void Function_521() //Position: 0x2483E / 149566
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_breakHorseBon", "Ranch06_breakHorseBon", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_522() //Position: 0x24891 / 149649
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_bonlassoSameHorse_v2", "Ranch06_bonlassoSameHorse_v2", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_523() //Position: 0x248F2 / 149746
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_horseBreaksBonLass", "Ranch06_horseBreaksBonLass", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_524(bool bParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2494F / 149839
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
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, bParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, bParam5);
		}
		bVar0++;
	}
}

void Function_525() //Position: 0x249BD / 149949
{
	switch (iLocal_988)
	{
		case 0x00000000:
			if (!ACTORS_IN_RANGE(bLocal_574, Global_34573, 10.0f))
			{
				CLEAR_ACTOR_MIN_SPEED(bLocal_574);
				CLEAR_ACTOR_MAX_SPEED(bLocal_574);
				SET_ACTOR_MIN_SPEED(bLocal_574, 4);
				SET_ACTOR_MAX_SPEED(bLocal_574, 3);
				iLocal_988 = 1;
			}
			break;
		
		case 0x00000001:
			if (ACTORS_IN_RANGE(Global_34573, bLocal_574, 10.0f))
			{
				CLEAR_ACTOR_MIN_SPEED(bLocal_574);
				CLEAR_ACTOR_MAX_SPEED(bLocal_574);
				iLocal_988 = 0;
			}
			break;
	}
	return;
}

void Function_526() //Position: 0x24A2E / 150062
{
	if (IS_CAMERA_FOCUS_ENABLED(bLocal_803))
	{
		SET_CAMERA_FOCUS_ENABLED(bLocal_803, 0);
	}
	return;
}

void Function_527() //Position: 0x24A44 / 150084
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_lassoHorseBon", "Ranch06_lassoHorseBon", false, 2, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_528(bool bParam0, bool bParam1, bool bParam2) //Position: 0x24A97 / 150167
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

int Function_529(var uParam0, float fParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x24AD7 / 150231
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_OBJECT_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_485(Global_34573, bParam3, uParam2))
	{
		Function_228(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_485(Global_34573, bParam3, fParam1))
	{
		if (!Function_446(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_445(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				Function_444(1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_443(bParam8, 0, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_443(bParam9, 0, 15, 1, bParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam3, bParam10, 0f, 2, 0);
				DECOR_SET_BOOL(bParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_446(1))
	{
		Function_442(1);
		if (!Function_441())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_440();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam3));
				DECOR_REMOVE(bParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_443(bParam8, 1, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_443(bParam9, 1, 15, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_530() //Position: 0x24C45 / 150597
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_1moreHorseBon", "Ranch06_1moreHorseBon", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_531() //Position: 0x24C98 / 150680
{
	if (!iLocal_990 != 4)
	{
		bLocal_628 = GET_MOUNT(Global_34573);
		if (Function_528(bLocal_628, bLocal_664, 0))
		{
			if (Global_3384)
			{
				bLocal_656 = bLocal_628;
				HUD_CLEAR_OBJECTIVE();
				Function_221(&iLocal_577);
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_576);
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_574);
				Function_519();
				Function_361(&iLocal_622, 11, 0, 4294967295, 4294967295);
				iLocal_990 = 4;
				HUD_CLEAR_OBJECTIVE();
				iLocal_778 = 0;
				TASK_CLEAR(bLocal_574);
				DETACH_LASSO(bLocal_574);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, bLocal_656, 7.0f, 4);
				TASK_PRIORITY_SET(bLocal_574, true);
				SET_ACTOR_MAX_SPEED(bLocal_574, 3);
				return 1;
			}
			if (ANIMAL_ACTOR_GET_DOMESTICATION(bLocal_628) == 0)
			{
				Function_221(&iLocal_577);
				Function_361(&iLocal_622, 3, 0, 4294967295, 4294967295);
				iLocal_990 = 5;
				iLocal_778 = 0;
				DECOR_SET_BOOL(bLocal_628, "CanHaveMultipleLassoAttached", false);
				SQUAD_LEAVE(bLocal_628);
				TASK_CLEAR(bLocal_628);
				bLocal_656 = bLocal_628;
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_656);
				ANIMAL_TUNING_SET_ATTRIB_BOOL(bLocal_656, 11, false);
				ANIMAL_ACTOR_SET_DOCILE(bLocal_656, 1);
				ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_656, false);
				SET_ACTOR_MAX_SPEED(bLocal_656, true);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_656, 3.0f);
				Function_521();
				return 0;
			}
			if (!iLocal_780)
			{
				iLocal_780 = 1;
				Function_221(&iLocal_790);
				return 0;
			}
			if (Function_274(&iLocal_790) > 3.0f)
			{
				return 0;
			}
			Function_221(&iLocal_577);
			Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
			iLocal_990 = 5;
			iLocal_778 = 0;
			DECOR_SET_BOOL(bLocal_656, "CanHaveMultipleLassoAttached", false);
			SQUAD_LEAVE(bLocal_656);
			TASK_CLEAR(bLocal_656);
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_656);
			ANIMAL_TUNING_SET_ATTRIB_BOOL(bLocal_656, 11, false);
			ANIMAL_ACTOR_SET_DOCILE(bLocal_656, 1);
			ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_656, false);
			SET_ACTOR_MAX_SPEED(bLocal_656, true);
			SET_ACTOR_MAX_SPEED_ABSOLUTE(bLocal_656, 3.0f);
			Function_432(&bLocal_664, 1, 0);
			DESTROY_OBJECT(bLocal_664);
			Function_387();
			Function_521();
			if (IS_ACTOR_ALIVE(bLocal_575))
			{
				Function_379("Horse_return");
			}
			else
			{
				Function_379("Horse_find");
			}
			Function_520();
			return 0;
		}
		if (iLocal_780)
		{
			iLocal_780 = 0;
			Function_220(&iLocal_790);
		}
	}
	if (IS_ACTOR_VALID(bLocal_656))
	{
		bLocal_628 = GET_LASSO_TARGET(Global_34573);
		if (Function_528(bLocal_628, bLocal_664, 0) && !bLocal_628 != bLocal_656)
		{
			DETACH_LASSO(bLocal_574);
			TASK_CLEAR(bLocal_656);
			Function_524(bLocal_664, Global_34573, 15.0f, 2.0f, 0, 0);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, Global_34573, 7.0f, 4);
			TASK_PRIORITY_SET(bLocal_574, true);
			SET_ACTOR_MAX_SPEED(bLocal_574, 3);
			Function_532();
			HUD_CLEAR_OBJECTIVE();
			Function_221(&iLocal_577);
			iLocal_778 = 0;
			Function_202();
			Function_206(bLocal_664);
			Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_361(&iLocal_622, 25, 0, 4294967295, 4294967295);
			iLocal_990 = 2;
			return 1;
		}
		if (!IS_ACTOR_ALIVE(bLocal_656))
		{
			bLocal_656 = "";
			TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, Global_34573, 7.0f, 4);
			TASK_PRIORITY_SET(bLocal_574, true);
			SET_ACTOR_MAX_SPEED(bLocal_574, 3);
			HUD_CLEAR_OBJECTIVE();
			Function_221(&iLocal_577);
			iLocal_778 = 0;
			Function_202();
			Function_206(bLocal_664);
			Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_361(&iLocal_622, 25, 0, 4294967295, 4294967295);
			iLocal_990 = 2;
			return 1;
		}
	}
	return 0;
}

void Function_532() //Position: 0x24FB2 / 151474
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_BonEncourage", "Ranch06_BonEncourage", false, 2, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_533() //Position: 0x25003 / 151555
{
	if (!IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
	{
		if (!IS_CAMERA_FOCUS_ENABLED(bLocal_803))
		{
			Function_75();
			SET_CAMERA_FOCUS_OBJECT(bLocal_803, SQUAD_GET_ACTOR_BY_INDEX(bLocal_664, true), Function_75(), 1.0f);
			SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_803, "Ranch06_FocusPrompt_Herd");
			SET_CAMERA_FOCUS_ENABLED(bLocal_803, 1);
		}
	}
	else if (IS_CAMERA_FOCUS_ENABLED(bLocal_803))
	{
		SET_CAMERA_FOCUS_ENABLED(bLocal_803, 0);
	}
	return;
}

void Function_534(bool bParam0) //Position: 0x2506C / 151660
{
	if (Function_276(bParam0))
	{
		if (!Function_275(bParam0))
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

void Function_535() //Position: 0x2512B / 151851
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_jonFollowsDrew", "Ranch06_jonFollowsDrew", false, 1, 1, 0, 1);
		Function_287(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_536(bool bParam0) //Position: 0x25180 / 151936
{
	if (Function_276(bParam0))
	{
		if (Function_275(bParam0))
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

void Function_537() //Position: 0x25247 / 152135
{
	if (!IS_OBJECT_VALID(bLocal_803))
	{
		Function_75();
		bLocal_803 = CREATE_CAMERA_FOCUS_POINT_OBJECT(bLocal_485, "cFocus", SQUAD_GET_ACTOR_BY_INDEX(bLocal_664, true), Function_75(), 100.0f, 200.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_803, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_803, "Ranch06_FocusPrompt_Herd");
	}
	else
	{
		Function_75();
		SET_CAMERA_FOCUS_OBJECT(bLocal_803, bLocal_789, Function_75(), 1.0f);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_803, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_803, "Ranch06_FocusPrompt_Herd");
	}
	return;
}

bool Function_538() //Position: 0x252DD / 152285
{
	switch (iLocal_784)
	{
		case 0x00000006:
			if (!SQUAD_IS_VALID(bLocal_664))
			{
				Function_505();
				if (!SQUAD_IS_VALID(bLocal_664))
				{
					bLocal_664 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sWildSquad"));
				}
				if (SQUAD_IS_VALID(Local_4.f_732))
				{
					bLocal_664 = Local_4.f_732;
					bLocal_609 = false;
					while (bLocal_609 <= SQUAD_GET_SIZE(bLocal_664))
					{
						bLocal_610 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_664, bLocal_609);
						if (IS_ACTOR_VALID(bLocal_610))
						{
							if (IS_ACTOR_ALIVE(bLocal_610))
							{
								DECOR_SET_FLOAT(bLocal_610, "fHowLong", 25.0f);
								SET_ALLOW_LASSO_MINI_GAME(bLocal_610, 0);
								SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_610, true);
								SET_ACTOR_FACTION(bLocal_610, 21);
								DECOR_SET_BOOL(bLocal_610, "DisableBuckOff", true);
							}
						}
						bLocal_609++;
					}
				}
				Function_540(bLocal_664);
				Function_539(bLocal_664, Local_4.f_1100, 4, 1);
				iLocal_653 = UNK_0x48588CCB(bLocal_664, 0, 4294967295, 1);
				Function_475(bLocal_664, iLocal_653);
			}
			if (!IS_ACTOR_VALID(bLocal_627))
			{
				bLocal_627 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_664, false);
				SQUAD_LEAVE(bLocal_627);
				TASK_CLEAR(bLocal_627);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_627);
				ANIMAL_TUNING_SET_ATTRIB_BOOL(bLocal_627, 11, false);
				ANIMAL_ACTOR_SET_DOCILE(bLocal_627, 1);
				ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_627, false);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_627, true);
				SET_ACTOR_FACTION(bLocal_627, 21);
				TASK_PRIORITY_SET(bLocal_627, 2);
			}
			if (!IS_ACTOR_VALID(bLocal_624))
			{
				Function_326();
				bLocal_624 = (*&Local_4 + 668)[02];
				DECOR_SET_BOOL(bLocal_624, "bNoInjuryEjection", true);
				SET_ALLOW_RIDE_BY_PLAYER(bLocal_624, 0);
				TASK_PRIORITY_SET(bLocal_624, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_624, true);
				SET_ACTOR_FACTION(bLocal_624, 21);
				bLocal_625 = (*&Local_4 + 668)[12];
				DECOR_SET_BOOL(bLocal_625, "bNoInjuryEjection", true);
				SET_ALLOW_RIDE_BY_PLAYER(bLocal_625, 0);
				TASK_PRIORITY_SET(bLocal_625, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_625, true);
				SET_ACTOR_FACTION(bLocal_625, 21);
			}
			if (!SQUAD_IS_VALID(bLocal_663))
			{
				bLocal_663 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sMoiraSquad"));
				SQUAD_JOIN(bLocal_574, bLocal_663);
			}
			if (!IS_ACTOR_VALID(bLocal_576))
			{
				Function_325();
				bLocal_576 = (*&Local_4 + 864)[02];
				SET_CRIPPLE_ENABLE(bLocal_576, 0);
				SET_ACTOR_FACTION(bLocal_576, 20);
				TASK_PRIORITY_SET(bLocal_576, true);
				TASK_STAND_STILL(bLocal_576, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(bLocal_576, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_576, 50.0f);
				SET_ACTOR_HEALTH(bLocal_576, GET_ACTOR_MAX_HEALTH(bLocal_576));
				TASK_STAND_STILL(bLocal_576, -1.0f, 0, 0);
				GIVE_WEAPON_TO_ACTOR(bLocal_576, 21, false, 1, 1);
			}
			else
			{
				Function_217(bLocal_576);
			}
			if (!SQUAD_IS_VALID(bLocal_652))
			{
				bLocal_652 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_485, "sbrokenHorseSquad"));
			}
			TASK_CLEAR(bLocal_574);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_575)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_575));
			}
			DECOR_SET_BOOL(Global_34573, "CanBeLasso", false);
			if (!ACTOR_HAS_WEAPON(Global_34573, 21))
			{
				GIVE_WEAPON_TO_ACTOR(Global_34573, 21, false, 1, 1);
			}
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_574, 2);
			if (!iLocal_586[0] || Function_279(&Local_486))
			{
				Function_221(&iLocal_649);
				iLocal_784 = 7;
			}
			else
			{
				Function_221(&iLocal_649);
				iLocal_784 = 104;
			}
			break;
		
		case 0x00000007:
			if (!IS_ACTOR_VALID(bLocal_575))
			{
				if (Function_333())
				{
					bLocal_575 = Function_327(1, 0, 0, 0, 0, 0, 1, 0);
				}
			}
			else
			{
				if (!iLocal_586[0])
				{
					Function_307(bLocal_575, (*&Local_4 + 1184)[0], 1, 1, 1);
					Function_307(bLocal_574, (*&Local_4 + 1184)[3], 1, 1, 1);
					Function_307(bLocal_624, (*&Local_4 + 1184)[3], 1, 1, 1);
				}
				Function_221(&iLocal_649);
				iLocal_784 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_274(&iLocal_649) < 1.0f)
			{
				if (!iLocal_586[0])
				{
					if (!IS_ACTOR_RIDING(Global_34573))
					{
						ACTOR_MOUNT_ACTOR(Global_34573, bLocal_575);
					}
					if (!IS_ACTOR_RIDING(bLocal_574))
					{
						ACTOR_MOUNT_ACTOR(bLocal_574, bLocal_624);
						MEMORY_PREFER_RIDING(bLocal_574, true);
					}
				}
				Function_221(&iLocal_649);
				iLocal_784 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_274(&iLocal_649) < 1.0f)
			{
				if (!iLocal_586[0])
				{
					Function_350(Global_34573, (*&Local_4 + 1184)[1], 1, 1, 1);
					Function_350(bLocal_574, (*&Local_4 + 1184)[3], 1, 1, 1);
					TASK_STAND_STILL(bLocal_574, -1.0f, 0, 0);
					CLEAR_LINKED_ANIM_TARGET(bLocal_574);
					RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_574, 1);
					ACTOR_SET_NEXT_WEAPON(Global_34573, 21);
				}
				iLocal_784 = 104;
				return 1;
			}
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

void Function_539(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x25748 / 153416
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

void Function_540(bool bParam0) //Position: 0x25797 / 153495
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

bool Function_541() //Position: 0x257DE / 153566
{
	Function_319(&Local_4 + 192, 976, 2, 0);
	Function_319(&Local_4 + 192, 977, 2, 0);
	Function_319(&Local_4 + 192, 608, 2, 0);
	if (Function_310(&Local_4 + 192))
	{
		return 1;
	}
	return 0;
}

void Function_542() //Position: 0x25818 / 153624
{
	if (iLocal_533 < 3 && iLocal_533 > 105)
	{
		if (SQUAD_IS_VALID(bLocal_664))
		{
			Function_486(bLocal_664, &bLocal_789);
		}
	}
	switch (iLocal_533)
	{
		case 0x00000000:
			if (Function_367(iLocal_532))
			{
				iLocal_783 = 6;
				iLocal_780 = 0;
				Function_220(&iLocal_790);
				Function_221(&iLocal_577);
				iLocal_533 = 1;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_364(iLocal_572) || iLocal_572 != 4294967295)) && Function_338())
			{
				Function_221(&iLocal_577);
				TASK_CLEAR(Global_34573);
				ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_533 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_338())
			{
				if (Function_570())
				{
					Function_221(&iLocal_577);
					iLocal_533 = 7;
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 1056)[1]);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_4 + 1056)[1]);
					CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_4 + 1056)[1], 15);
					Function_234(iLocal_532);
					Function_416(StackVal, StackVal, Function_234(iLocal_532), iLocal_532, Global_30628[2], Function_237(iLocal_532), 0);
				}
			}
			break;
		
		case 0x00000003:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_574)))
			{
				Function_221(&iLocal_577);
				iLocal_533 = 4;
			}
			break;
		
		case 0x00000004:
			TASK_STAND_STILL(bLocal_575, -1.0f, 0, 0);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
				SET_ACTOR_INVULNERABILITY(Global_34573, false);
			}
			Function_221(&iLocal_577);
			Function_387();
			iLocal_533 = 6;
			break;
		
		case 0x00000006:
			if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)) || Function_274(&iLocal_577) < 3.0f)
			{
				Function_221(&iLocal_577);
				iLocal_533 = 7;
			}
			break;
		
		case 0x00000007:
			if (IS_ACTOR_INITED(bLocal_574) && IS_ACTOR_INITED(bLocal_576))
			{
				if (ACTOR_HAS_WEAPON(Global_34573, 21))
				{
					ACTOR_SET_NEXT_WEAPON(Global_34573, 21);
				}
				else if (!ACTOR_HAS_WEAPON(Global_34573, 21))
				{
					GIVE_WEAPON_TO_ACTOR(Global_34573, 21, false, 1, 1);
					ACTOR_SET_NEXT_WEAPON(Global_34573, 21);
				}
				Function_569();
				Function_520();
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_574, 2);
				AI_SET_NAV_PATHFINDING_ENABLED(bLocal_574, true);
				bLocal_661 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1876, true, 1, 0, 1, false);
				TASK_MOUNT(false, bLocal_624, 0, 1, true, 2147483647);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_574, bLocal_661);
				TASK_SEQUENCE_RELEASE(bLocal_661, 1);
				TASK_PRIORITY_SET(bLocal_574, true);
				Function_221(&iLocal_577);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
					SET_ACTOR_INVULNERABILITY(Global_34573, false);
				}
				Function_387();
				Function_501();
				iLocal_533 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_543())
			{
				Function_221(&iLocal_577);
				iLocal_533 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_365();
			Function_213();
			iLocal_586[0] = 1;
			Function_221(&iLocal_577);
			iLocal_532 = 1;
			iLocal_533 = 0;
			break;
	}
	return;
}

bool Function_543() //Position: 0x25AA0 / 154272
{
	switch (iLocal_989)
	{
		case 0x00000000:
			if (Function_439(&iLocal_583, 100.0f, 200.0f, bLocal_576, "Drew_return", "Drew_abandoned", &bLocal_598, 1, bLocal_485, Local_4, 325, 1))
			{
				if (!iLocal_778)
				{
					iLocal_778 = 1;
				}
			}
			if (!iLocal_778)
			{
				if (!IS_ACTOR_RIDING(Global_34573))
				{
					if (IS_ACTOR_ALIVE(bLocal_575))
					{
						Function_379("Ranch06_mount_up_obj");
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_575)))
						{
							Function_202();
							Function_520();
						}
					}
					else
					{
						Function_379("Horse_find");
					}
				}
			}
			else if (ACTORS_IN_RANGE(Global_34573, bLocal_576, 15.0f))
			{
				Function_568();
				iLocal_778 = 0;
			}
			if (IS_ACTOR_RIDING(bLocal_574))
			{
				MEMORY_PREFER_RIDING(bLocal_574, true);
			}
			if (IS_ACTOR_RIDING(bLocal_576))
			{
				MEMORY_PREFER_RIDING(bLocal_576, true);
			}
			if (!bLocal_672)
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_574))
				{
					if (GET_TASK_STATUS(bLocal_574, 23) != 1)
					{
						AI_SET_NAV_PATHFINDING_ENABLED(bLocal_574, true);
						GET_OBJECT_POSITION((*&Local_4 + 1112)[5], &Local_600);
						TASK_FACE_COORD(bLocal_574, &Local_600, 1);
						AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_574, Global_34573, -1.0f, 1);
						DECOR_SET_BOOL(GET_MOUNT(bLocal_574), "bNoInjuryEjection", true);
						SET_ALLOW_RIDE_BY_PLAYER(GET_MOUNT(bLocal_574), 0);
					}
				}
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_576))
				{
					if (GET_TASK_STATUS(bLocal_574, 22) != 1)
					{
						TASK_FACE_ACTOR(bLocal_576, Global_34573, 1, 3212836864);
						DECOR_SET_BOOL(GET_MOUNT(bLocal_576), "bNoInjuryEjection", true);
						SET_ALLOW_RIDE_BY_PLAYER(GET_MOUNT(bLocal_574), 0);
					}
				}
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_574))
				{
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_576))
					{
						bLocal_625 = GET_MOUNT(bLocal_576);
						DECOR_SET_BOOL(bLocal_625, "bNoInjuryEjection", true);
						SET_ALLOW_RIDE_BY_PLAYER(bLocal_625, 0);
						bLocal_624 = GET_MOUNT(bLocal_574);
						DECOR_SET_BOOL(bLocal_624, "bNoInjuryEjection", true);
						SET_ALLOW_RIDE_BY_PLAYER(bLocal_624, 0);
						CLEAR_ACTOR_MAX_SPEED(bLocal_576);
						bLocal_672 = true;
						TASK_FACE_ACTOR(bLocal_576, Global_34573, 1, 3212836864);
						GET_OBJECT_POSITION((*&Local_4 + 1112)[5], &Local_600);
						TASK_FACE_COORD(bLocal_574, &Local_600, 1);
						AI_SET_NAV_PATHFINDING_ENABLED(bLocal_574, true);
						ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_574, bLocal_576, 60.0f, 10.0f, 50.0f);
						if (!IS_ACTOR_RIDING(Global_34573))
						{
							Function_567();
						}
					}
				}
			}
			if (IS_ACTOR_RIDING(Global_34573) && !bLocal_672)
			{
				if (Function_276(&iLocal_577))
				{
					Function_202();
					Function_220(&iLocal_577);
					HUD_CLEAR_OBJECTIVE();
				}
				if (GET_MOUNT(Global_34573) == bLocal_624)
				{
					bLocal_624 = bLocal_575;
					MEMORY_REPORT_POSITION_AUTO(bLocal_574, bLocal_624, true);
					TASK_MOUNT(bLocal_574, bLocal_624, 0, 1, 2, 2147483647);
					bLocal_575 = GET_MOUNT(Global_34573);
					Function_353(bLocal_575, 0);
					TASK_PRIORITY_SET(bLocal_575, 2);
					TASK_PRIORITY_SET(bLocal_624, true);
					Function_202();
					Function_387();
					AI_SET_NAV_PATHFINDING_ENABLED(bLocal_574, true);
				}
				if (GET_MOUNT(Global_34573) == bLocal_625)
				{
					bLocal_625 = bLocal_575;
					MEMORY_REPORT_POSITION_AUTO(bLocal_576, bLocal_625, true);
					TASK_MOUNT(bLocal_576, bLocal_625, 0, 1, 2, 2147483647);
					bLocal_575 = GET_MOUNT(Global_34573);
					Function_353(bLocal_575, 0);
					TASK_PRIORITY_SET(bLocal_575, 2);
					TASK_PRIORITY_SET(bLocal_625, true);
					Function_202();
					Function_387();
				}
				if (GET_TASK_STATUS(bLocal_574, 0) == 1)
				{
					AI_SET_NAV_PATHFINDING_ENABLED(bLocal_574, true);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_574);
					TASK_CLEAR(bLocal_574);
					TASK_MOUNT(bLocal_574, bLocal_624, 0, 1, 4, 2147483647);
					AI_ACTOR_FORCE_SPEED(bLocal_574, 4);
					TASK_PRIORITY_SET(bLocal_574, true);
				}
			}
			else if (!IS_ACTOR_ALIVE(bLocal_575))
			{
				if (GET_ALLOW_RIDE_BY_PLAYER(bLocal_625))
				{
					SET_ALLOW_RIDE_BY_PLAYER(bLocal_625, 0);
				}
				if (GET_ALLOW_RIDE_BY_PLAYER(bLocal_624))
				{
					SET_ALLOW_RIDE_BY_PLAYER(bLocal_624, 0);
				}
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_574, 2);
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_576, 2);
			}
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (bLocal_672)
				{
					AI_SET_NAV_PATHFINDING_ENABLED(bLocal_574, true);
					bLocal_575 = GET_MOUNT(Global_34573);
					Function_353(bLocal_575, 0);
					HUD_CLEAR_OBJECTIVE();
					Function_202();
					SET_ALLOW_RIDE_BY_PLAYER(bLocal_624, 0);
					SET_ALLOW_RIDE_BY_PLAYER(bLocal_625, 0);
					AI_RIDING_SET_ENABLED(bLocal_576, 0);
					if (!SQUAD_IS_VALID(bLocal_663))
					{
						bLocal_663 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sMoiraSquad"));
					}
					if (SQUAD_GET(bLocal_574) == bLocal_663)
					{
						SQUAD_LEAVE(bLocal_574);
					}
					SQUAD_JOIN(bLocal_576, bLocal_663);
					SQUAD_JOIN(bLocal_574, bLocal_663);
					bLocal_666 = SQUAD_GOAL_ADD_FOLLOW_PATH_IN_FORMATION(bLocal_663, 0, 4294967295, Local_4.f_1796, 2, 1, 1);
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_BEHAVIOR_FLAG(bLocal_663, bLocal_666, 8, 1);
					SQUAD_FOLLOW_PATH_IN_FORMATION_SET_ALLOW_PLAYER_JOIN(bLocal_663, bLocal_666, 1, 0);
					TASK_CLEAR(bLocal_574);
					AI_GOAL_LOOK_CLEAR(bLocal_574);
					MEMORY_PREFER_RIDING(bLocal_574, true);
					TASK_PRIORITY_SET(bLocal_574, true);
					SET_ACTOR_MAX_SPEED(bLocal_574, 3);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_574, 2);
					bLocal_609 = TASK_SEQUENCE_OPEN();
					TASK_FACE_ACTOR(false, bLocal_576, 0, 3212836864);
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_574, bLocal_609);
					TASK_SEQUENCE_RELEASE(bLocal_609, 1);
					TASK_CLEAR(bLocal_576);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_576, 2);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_574, 2);
					GET_OBJECT_POSITION((*&Local_4 + 1112)[5], &Local_600);
					TASK_PRIORITY_SET(bLocal_576, true);
					HUD_CLEAR_OBJECTIVE();
					Function_379("Ranch06_follow_drew_obj");
					Function_221(&iLocal_577);
					Function_501();
					Function_361(&iLocal_622, 3, 0, 4294967295, 4294967295);
					iLocal_989 = 1;
					iLocal_778 = 0;
					iLocal_778 = 0;
					Function_566();
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_574);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_576);
				}
				else
				{
					Function_379("Ranch06_follow_drew_obj");
					Function_566();
				}
			}
			break;
		
		case 0x00000001:
			Function_436();
			Function_565();
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (iLocal_777)
				{
					iLocal_777 = 0;
				}
				if (Function_439(&iLocal_583, 100.0f, 200.0f, bLocal_576, "Drew_return", "Drew_abandoned", &bLocal_598, 1, bLocal_485, Local_4, 325, 1))
				{
					if (!iLocal_778)
					{
						iLocal_778 = 0;
					}
				}
				else
				{
					Function_566();
					Function_379("Ranch06_follow_drew_obj");
				}
			}
			else
			{
				if (!ACTORS_IN_RANGE(Global_34573, bLocal_576, 100.0f))
				{
					Function_439(&iLocal_583, 75.0f, 100.0f, bLocal_576, "Drew_return", "Drew_abandoned", &bLocal_598, 1, bLocal_485, Local_4, 325, 1);
				}
				if (!iLocal_777)
				{
					Function_564();
					iLocal_777 = 1;
				}
				if (IS_ACTOR_ALIVE(bLocal_575))
				{
					Function_379("Horse_return");
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_575)))
					{
						Function_202();
						Function_520();
					}
				}
				else
				{
					Function_379("Horse_find");
				}
			}
			Function_563();
			Function_562();
			if (IS_VOLUME_VALID((*&Local_4 + 1056)[0]))
			{
				if (IS_ACTOR_IN_VOLUME(bLocal_576, (*&Local_4 + 1056)[0]))
				{
					DESTROY_VOLUME((*&Local_4 + 1056)[0]);
					if (!SQUAD_IS_VALID(bLocal_664))
					{
						Function_505();
						if (!SQUAD_IS_VALID(bLocal_664))
						{
							bLocal_664 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sWildSquad"));
						}
						if (SQUAD_IS_VALID(Local_4.f_732))
						{
							bLocal_664 = Local_4.f_732;
						}
						bLocal_609 = false;
						while (bLocal_609 <= SQUAD_GET_SIZE(bLocal_664))
						{
							bLocal_610 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_664, bLocal_609);
							if (IS_ACTOR_VALID(bLocal_610))
							{
								if (IS_ACTOR_ALIVE(bLocal_610))
								{
									DECOR_SET_FLOAT(bLocal_610, "fHowLong", 25.0f);
									SET_ALLOW_LASSO_MINI_GAME(bLocal_610, 0);
									DECOR_SET_BOOL(bLocal_610, "DisableBuckOff", true);
								}
							}
							bLocal_609++;
						}
						Function_387();
						Function_537();
						Function_540(bLocal_664);
						Function_539(bLocal_664, Local_4.f_1100, 4, 1);
						iLocal_653 = UNK_0x48588CCB(bLocal_664, 0, 4294967295, 1);
						Function_475(bLocal_664, iLocal_653);
					}
				}
			}
			if (SQUAD_IS_VALID(bLocal_664) && !iLocal_987 != 2)
			{
				if (Function_561(bLocal_664, 0x3f800000, 0x42960000, 1, 1))
				{
					Function_221(&iLocal_577);
					Function_560();
					Function_559();
					Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
					Function_202();
					Function_206(bLocal_664);
					Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					if (!iLocal_773)
					{
						Function_132("Ranch06_wild_blip_help", 0x41200000, 1, 0, 2, 1, 0);
						iLocal_773 = 1;
					}
					iLocal_987 = 2;
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_576, bLocal_789, 5.0f, 4);
					TASK_PRIORITY_SET(bLocal_576, true);
					SET_ACTOR_MAX_SPEED(bLocal_576, 3);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, bLocal_789, 7.0f, 4);
					TASK_PRIORITY_SET(bLocal_574, true);
					SET_ACTOR_MAX_SPEED(bLocal_574, 3);
					SQUAD_GOALS_CLEAR(bLocal_663);
				}
			}
			if (Function_464(bLocal_576, Local_4.f_1796) > 10.0f)
			{
				if (iLocal_987 != 2)
				{
					iLocal_987 = 2;
					Function_221(&iLocal_577);
					Function_560();
					Function_559();
					Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
					Function_202();
					Function_206(bLocal_664);
					Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					if (!iLocal_773)
					{
						Function_132("Ranch06_wild_blip_help", 0x41200000, 1, 0, 2, 1, 0);
						iLocal_773 = 1;
					}
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_576, bLocal_789, 5.0f, 4);
					TASK_PRIORITY_SET(bLocal_576, true);
					SET_ACTOR_MAX_SPEED(bLocal_576, 3);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, bLocal_789, 7.0f, 4);
					TASK_PRIORITY_SET(bLocal_574, true);
					SET_ACTOR_MAX_SPEED(bLocal_574, 3);
					SQUAD_GOALS_CLEAR(bLocal_663);
				}
			}
			if (iLocal_987 == 2)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_274(&iLocal_577) < 8.0f)
				{
					AI_GOAL_LOOK_CLEAR(bLocal_576);
					Function_558();
					SQUAD_GOALS_CLEAR(bLocal_663);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_576, bLocal_789, 5.0f, 4);
					TASK_PRIORITY_SET(bLocal_576, true);
					SET_ACTOR_MAX_SPEED(bLocal_576, 3);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, bLocal_789, 7.0f, 4);
					TASK_PRIORITY_SET(bLocal_574, true);
					SET_ACTOR_MAX_SPEED(bLocal_574, 3);
					HUD_CLEAR_OBJECTIVE();
					Function_221(&iLocal_577);
					iLocal_778 = 0;
					Function_202();
					Function_206(bLocal_664);
					Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_574);
					iLocal_772 = 0;
					iLocal_989 = 2;
				}
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
			{
				if (!iLocal_778)
				{
					Function_554();
				}
				else if (ACTORS_IN_RANGE(Global_34573, bLocal_576, 15.0f))
				{
					Function_568();
					iLocal_778 = 0;
				}
			}
			break;
		
		case 0x00000002:
			Function_436();
			Function_533();
			Function_565();
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (iLocal_777)
				{
					Function_202();
					HUD_CLEAR_OBJECTIVE();
					Function_206(bLocal_664);
					Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					iLocal_777 = 0;
				}
				if (Function_439(&iLocal_583, 100.0f, 200.0f, bLocal_576, "Drew_return", "Drew_abandoned", &bLocal_598, 1, bLocal_485, Local_4, 325, 1))
				{
					if (!iLocal_778)
					{
						iLocal_778 = 1;
					}
				}
				else
				{
					Function_379("Ranch06_lasso_horse_obj");
					if (iLocal_778)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_576, 15.0f))
						{
							Function_568();
							iLocal_778 = 0;
						}
					}
				}
			}
			else
			{
				if (!ACTORS_IN_RANGE(Global_34573, bLocal_576, 100.0f))
				{
					Function_439(&iLocal_583, 75.0f, 100.0f, bLocal_576, "Drew_return", "Drew_abandoned", &bLocal_598, 1, bLocal_485, Local_4, 325, 1);
				}
				if (!iLocal_777)
				{
					ABORT_SCRIPTED_CONVERSATION(1);
					iLocal_777 = 1;
				}
				if (IS_ACTOR_ALIVE(bLocal_575))
				{
					Function_379("Horse_return");
					Function_520();
				}
				else
				{
					Function_379("Horse_find");
				}
			}
			if (!iLocal_772)
			{
				if (!DECOR_CHECK_EXIST(bLocal_485, "LassoInvHelp"))
				{
					if (!GET_WEAPON_IN_HAND(Global_34573) != 21)
					{
						if (ACTOR_GET_NEXT_EQUIP_SLOT(Global_34573) == 3)
						{
							HUD_CLEAR_HELP();
							HUD_CLEAR_HELP_QUEUE();
							Function_132("Ranch06_lasso_inv_hlp_1", 0x41200000, 1, 0, 2, 1, 0);
							DECOR_SET_BOOL(bLocal_485, "LassoInvHelp", true);
						}
					}
				}
				else if (GET_WEAPON_IN_HAND(Global_34573) == 21)
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					Function_132("Ranch06_lasso_horse_help_01", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_772 = 1;
				}
			}
			if (!Function_276(&iLocal_742))
			{
				Function_221(&iLocal_742);
			}
			else if (Function_274(&iLocal_742) < 7.0f)
			{
				SAY_SINGLE_LINE_SCRIPTED(bLocal_576, "Ranch06_tooLongDrew", Global_34573, 0, 0, 0, 1, 3);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_576, Global_34573, 3.0f, 1);
				Function_221(&iLocal_742);
				Function_222(&iLocal_739, 1.0f);
			}
			if (!Function_276(&iLocal_739))
			{
				Function_221(&iLocal_739);
			}
			else if (Function_274(&iLocal_739) < 7.0f)
			{
				SAY_SINGLE_LINE_SCRIPTED(bLocal_574, "Ranch06_tooLongDrew", Global_34573, 0, 0, 0, 1, 3);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_574, Global_34573, 3.0f, 1);
				Function_221(&iLocal_739);
				Function_222(&iLocal_742, 1.0f);
			}
			bLocal_628 = GET_LASSO_TARGET(Global_34573);
			if (IS_ACTOR_VALID(bLocal_628))
			{
				if (Function_528(bLocal_628, bLocal_664, 0))
				{
					bLocal_627 = bLocal_628;
					SET_MINIGAME_SCRIPT_OVERRIDE(1);
					DECOR_SET_BOOL(bLocal_627, "CanHaveMultipleLassoAttached", true);
					DECOR_SET_FLOAT(bLocal_627, "fHowLong", 25.0f);
					Function_202();
					bLocal_745 = ADD_BLIP_FOR_OBJECT(bLocal_627, 418, 0f, 2, 0);
					bLocal_609 = TASK_SEQUENCE_OPEN();
					TASK_HORSE_ACTION(false, 0);
					TASK_STAND_STILL(false, 1.0f, 0, 0);
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
					TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM_REPEATEDLY(bLocal_627, bLocal_609, 4294967295);
					TASK_SEQUENCE_RELEASE(bLocal_609, 1);
					TASK_PRIORITY_SET(bLocal_627, true);
					TASK_CLEAR(bLocal_574);
					AI_GOAL_LOOK_CLEAR(bLocal_574);
					MEMORY_REPORT_POSITION_AUTO(bLocal_574, bLocal_627, true);
					GET_OBJECT_RELATIVE_POSITION(bLocal_627, 10.0f, 0.0f, 0.0f, &Local_600);
					bLocal_609 = TASK_SEQUENCE_OPEN();
					if (FIND_GROUND_INTERSECTION(&Local_600, 20.0f, &vLocal_603, &uLocal_606))
					{
						TASK_GO_NEAR_COORD(false, &vLocal_603, 1.0f, 3);
					}
					TASK_USE_LASSO(false, bLocal_627, 1.0f, 1.0f, 1, 2);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_574, bLocal_609);
					TASK_SEQUENCE_RELEASE(bLocal_609, 1);
					TASK_PRIORITY_SET(bLocal_574, true);
					SET_ACTOR_MIN_SPEED(bLocal_574, 4);
					TASK_CLEAR(bLocal_576);
					AI_GOAL_LOOK_CLEAR(bLocal_576);
					MEMORY_REPORT_POSITION_AUTO(bLocal_576, bLocal_627, true);
					GET_OBJECT_RELATIVE_POSITION(bLocal_627, -10.0f, 0.0f, 0.0f, &Local_600);
					bLocal_609 = TASK_SEQUENCE_OPEN();
					if (FIND_GROUND_INTERSECTION(&Local_600, 20.0f, &vLocal_603, &uLocal_606))
					{
						TASK_GO_NEAR_COORD(false, &vLocal_603, 1.0f, 3);
					}
					TASK_USE_LASSO(false, bLocal_627, 1.0f, 1.0f, 1, 2);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_576, bLocal_609);
					TASK_SEQUENCE_RELEASE(bLocal_609, 1);
					TASK_PRIORITY_SET(bLocal_576, true);
					SET_ACTOR_MIN_SPEED(bLocal_576, 4);
					Function_553();
					Function_221(&iLocal_577);
					iLocal_778 = 0;
					iLocal_989 = 3;
				}
			}
			break;
		
		case 0x00000003:
			Function_436();
			Function_526();
			Function_565();
			if (Function_439(&iLocal_583, 100.0f, 200.0f, bLocal_576, "Drew_return", "Drew_abandoned", &bLocal_598, 1, bLocal_485, Local_4, 325, 1))
			{
				if (!iLocal_778)
				{
					iLocal_778 = 1;
				}
			}
			else
			{
				if (!ACTORS_IN_RANGE(Global_34573, bLocal_576, 100.0f))
				{
					Function_439(&iLocal_583, 75.0f, 100.0f, bLocal_576, "Drew_return", "Drew_abandoned", &bLocal_598, 1, bLocal_485, Local_4, 325, 1);
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_627)))
				{
					bLocal_745 = ADD_BLIP_FOR_ACTOR(bLocal_627, 418, 0, 2, 0);
				}
				if (GET_LASSO_TARGET(bLocal_574) != bLocal_627 || GET_LASSO_TARGET(bLocal_576) != bLocal_627)
				{
					Function_379("Ranch06_mount_drews_target");
				}
				else
				{
					Function_379("Ranch06_hold_lassoed_horse_obj");
				}
				if (iLocal_778)
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_576, 15.0f))
					{
						Function_568();
						iLocal_778 = 0;
					}
				}
			}
			if (!iLocal_776)
			{
				if (!GET_MOUNT(Global_34573) != bLocal_627)
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					Function_132("Ranch06_MountWildHorseTutorial", 10.0f, 1, 0, 2, 1, 0);
					iLocal_776 = 1;
				}
			}
			if ((!IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)) && !IS_ACTOR_VALID(GET_LASSO_TARGET(bLocal_576))) && !IS_ACTOR_VALID(GET_LASSO_TARGET(bLocal_574)))
			{
				TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_576, Global_34573, 15.0f, 4);
				TASK_PRIORITY_SET(bLocal_576, true);
				SET_ACTOR_MAX_SPEED(bLocal_576, 3);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, Global_34573, 15.0f, 4);
				TASK_PRIORITY_SET(bLocal_574, true);
				SET_ACTOR_MAX_SPEED(bLocal_574, 3);
				TASK_CLEAR(bLocal_627);
				HUD_CLEAR_OBJECTIVE();
				Function_221(&iLocal_577);
				iLocal_778 = 0;
				Function_202();
				Function_206(bLocal_664);
				Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				iLocal_772 = 0;
				iLocal_989 = 2;
				Function_552();
				return 0;
			}
			Function_549();
			if (GET_TASK_STATUS(bLocal_576, 6) == 1)
			{
				if (!Function_276(&iLocal_742))
				{
					Function_221(&iLocal_742);
				}
				else if (Function_274(&iLocal_742) < 7.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(bLocal_576, "Ranch06_closeEnoughDrew", Global_34573, 0, 0, 0, 1, 3);
					AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_576, Global_34573, 3.0f, 1);
					Function_221(&iLocal_742);
					Function_222(&iLocal_739, 1.0f);
				}
			}
			if (GET_TASK_STATUS(bLocal_574, 6) == 1)
			{
				if (!Function_276(&iLocal_739))
				{
					Function_221(&iLocal_739);
				}
				else if (Function_274(&iLocal_739) < 7.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(bLocal_574, "Ranch06_closeEnoughBon", Global_34573, 0, 0, 0, 1, 3);
					AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_574, Global_34573, 3.0f, 1);
					Function_221(&iLocal_739);
					Function_222(&iLocal_742, 1.0f);
				}
			}
			if ((GET_LASSO_TARGET(bLocal_574) != bLocal_627 && GET_LASSO_TARGET(bLocal_576) != bLocal_627) && GET_LASSO_TARGET(Global_34573) != bLocal_627)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_221(&iLocal_577);
				Function_379("Ranch06_mount_drews_target");
				Function_548();
				iLocal_989 = 4;
				iLocal_778 = 0;
			}
			break;
		
		case 0x00000004:
			Function_526();
			Function_565();
			if (iLocal_779)
			{
				if (IS_ACTOR_RIDING(Global_34573))
				{
					if (ANIMAL_ACTOR_GET_DOMESTICATION(bLocal_627) == 0)
					{
						iLocal_778 = 0;
						SQUAD_LEAVE(bLocal_627);
						TASK_CLEAR(bLocal_627);
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_627);
						ANIMAL_TUNING_SET_ATTRIB_BOOL(bLocal_627, 11, false);
						ANIMAL_ACTOR_SET_DOCILE(bLocal_627, 1);
						ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_627, false);
						iLocal_780 = 0;
						Function_220(&iLocal_790);
						Function_387();
						DECOR_SET_BOOL(bLocal_627, "CanHaveMultipleLassoAttached", false);
						Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
						iLocal_989 = 5;
						Function_202();
						Function_520();
						iLocal_779 = 0;
						Function_547();
						Function_221(&iLocal_577);
						if (IS_ACTOR_ALIVE(bLocal_575))
						{
							Function_379("Horse_return");
						}
						else
						{
							Function_379("Horse_find");
						}
						DETACH_LASSO(bLocal_574);
						DETACH_LASSO(bLocal_576);
						TASK_CLEAR(bLocal_576);
						TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_576, bLocal_627, 5.0f, 2);
						TASK_PRIORITY_SET(bLocal_576, true);
						TASK_CLEAR(bLocal_574);
						TASK_FACE_ACTOR(bLocal_574, bLocal_627, 1, 3212836864);
						TASK_PRIORITY_SET(bLocal_574, true);
						return 0;
					}
					if (ACTORS_IN_RANGE(bLocal_576, Global_34573, 10.0f))
					{
						if (GET_TASK_STATUS(bLocal_576, 25) != 1)
						{
							TASK_FLEE_ACTOR(bLocal_576, Global_34573, 20.0f, 2.0f, 0, 1, 0);
						}
					}
					else if (!ACTORS_IN_RANGE(bLocal_576, Global_34573, 30.0f))
					{
						if (GET_TASK_STATUS(bLocal_576, 83) != 1)
						{
							TASK_GO_NEAR_ACTOR(bLocal_576, Global_34573, 25.0f, 4);
						}
					}
					else if (GET_TASK_STATUS(bLocal_576, 22) != 1)
					{
						TASK_FACE_ACTOR(bLocal_576, Global_34573, 1, 3212836864);
					}
					else if (!Function_276(&iLocal_742))
					{
						Function_221(&iLocal_742);
					}
					else if (Function_274(&iLocal_742) < 3.0f)
					{
						SAY_SINGLE_LINE_SCRIPTED(bLocal_576, "Ranch06_DrewEncourage", Global_34573, 0, 0, 0, 1, 3);
						Function_221(&iLocal_742);
					}
					if (ACTORS_IN_RANGE(bLocal_574, Global_34573, 10.0f))
					{
						if (GET_TASK_STATUS(bLocal_574, 25) != 1)
						{
							TASK_FLEE_ACTOR(bLocal_574, Global_34573, 20.0f, 2.0f, 0, 1, 0);
						}
					}
					else if (!ACTORS_IN_RANGE(bLocal_574, Global_34573, 30.0f))
					{
						if (GET_TASK_STATUS(bLocal_574, 83) != 1)
						{
							TASK_GO_NEAR_ACTOR(bLocal_574, Global_34573, 25.0f, 4);
						}
					}
					else if (GET_TASK_STATUS(bLocal_574, 22) != 1)
					{
						TASK_FACE_ACTOR(bLocal_574, Global_34573, 1, 3212836864);
					}
					else if (!Function_276(&iLocal_739))
					{
						Function_221(&iLocal_739);
					}
					else if (Function_274(&iLocal_739) < 5.0f)
					{
						SAY_SINGLE_LINE_SCRIPTED(bLocal_574, "Ranch06_BonEncourage", Global_34573, 0, 0, 0, 1, 3);
						Function_221(&iLocal_739);
					}
				}
				else
				{
					iLocal_989 = 6;
					iLocal_778 = 0;
					Function_202();
					Function_520();
					iLocal_780 = 0;
					Function_220(&iLocal_790);
					iLocal_779 = 0;
					SAY_SINGLE_LINE_SCRIPTED(bLocal_576, "Ranch06_buckHorseDrew", Global_34573, 0, 0, 0, 1, 3);
					DETACH_LASSO(bLocal_574);
					DETACH_LASSO(bLocal_576);
					TASK_CLEAR(bLocal_576);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_576, bLocal_627, 15.0f, 2);
					TASK_PRIORITY_SET(bLocal_576, true);
					TASK_CLEAR(bLocal_574);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, bLocal_627, 15.0f, 2);
					TASK_PRIORITY_SET(bLocal_574, true);
					TASK_CLEAR(bLocal_627);
					TASK_FLEE_ACTOR(bLocal_627, Global_34573, 20.0f, 10.0f, 0, 1, 0);
					Function_524(bLocal_664, Global_34573, 15.0f, 2.0f, 0, 0);
					Function_221(&iLocal_646);
					return 0;
				}
			}
			if (!iLocal_779)
			{
				Function_436();
				if (Function_439(&iLocal_583, 100.0f, 150.0f, bLocal_576, "Drew_return", "Drew_abandoned", &bLocal_598, 1, bLocal_485, Local_4, 325, 1))
				{
					if (!iLocal_778)
					{
						iLocal_778 = 1;
					}
				}
				else
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_627)))
					{
						bLocal_745 = ADD_BLIP_FOR_ACTOR(bLocal_627, 418, 0, 2, 0);
					}
					Function_379("Ranch06_mount_drews_target");
					if (iLocal_778)
					{
						if (ACTORS_IN_RANGE(Global_34573, bLocal_576, 15.0f))
						{
							Function_568();
							iLocal_778 = 0;
						}
					}
				}
				if (!iLocal_776)
				{
					if (!GET_MOUNT(Global_34573) != bLocal_627)
					{
						HUD_CLEAR_HELP();
						HUD_CLEAR_HELP_QUEUE();
						Function_132("Ranch06_MountWildHorseTutorial", 10.0f, 1, 0, 2, 1, 0);
						iLocal_776 = 1;
					}
				}
				Function_549();
				if (GET_TASK_STATUS(bLocal_576, 6) == 1)
				{
					if (!Function_276(&iLocal_742))
					{
						Function_221(&iLocal_742);
					}
					else if (Function_274(&iLocal_742) < 7.0f)
					{
						SAY_SINGLE_LINE_SCRIPTED(bLocal_576, "Ranch06_closeEnoughDrew", Global_34573, 0, 0, 0, 1, 3);
						AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_576, Global_34573, 3.0f, 1);
						Function_221(&iLocal_742);
						Function_222(&iLocal_739, 1.0f);
					}
				}
				if (GET_TASK_STATUS(bLocal_574, 6) == 1)
				{
					if (!Function_276(&iLocal_739))
					{
						Function_221(&iLocal_739);
					}
					else if (Function_274(&iLocal_739) < 7.0f)
					{
						SAY_SINGLE_LINE_SCRIPTED(bLocal_574, "Ranch06_closeEnoughBon", Global_34573, 0, 0, 0, 1, 3);
						AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_574, Global_34573, 3.0f, 1);
						Function_221(&iLocal_739);
						Function_222(&iLocal_742, 1.0f);
					}
				}
				if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
				{
					if (ANIMAL_ACTOR_GET_DOMESTICATION(GET_MOUNT(Global_34573)) != 0)
					{
						bLocal_627 = GET_MOUNT(Global_34573);
					}
				}
				if (!GET_MOUNT(Global_34573) != bLocal_627)
				{
					if ((!GET_LASSO_TARGET(bLocal_574) != bLocal_627 && !GET_LASSO_TARGET(bLocal_576) != bLocal_627) && !GET_LASSO_TARGET(Global_34573) != bLocal_627)
					{
						TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_576, Global_34573, 15.0f, 4);
						TASK_PRIORITY_SET(bLocal_576, true);
						SET_ACTOR_MAX_SPEED(bLocal_576, 3);
						TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, Global_34573, 10.0f, 4);
						TASK_PRIORITY_SET(bLocal_574, true);
						SET_ACTOR_MAX_SPEED(bLocal_574, 3);
						HUD_CLEAR_OBJECTIVE();
						Function_221(&iLocal_577);
						iLocal_778 = 0;
						Function_202();
						Function_206(bLocal_664);
						Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						iLocal_772 = 0;
						iLocal_989 = 2;
					}
				}
			}
			if (!iLocal_779)
			{
				if (Global_3384)
				{
					Function_546();
					Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
					iLocal_779 = 1;
					iLocal_780 = 0;
					DETACH_LASSO(bLocal_574);
					DETACH_LASSO(bLocal_576);
					TASK_CLEAR(bLocal_576);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_576, bLocal_627, 7.0f, 2);
					TASK_PRIORITY_SET(bLocal_576, true);
					TASK_CLEAR(bLocal_574);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, bLocal_627, 15.0f, 2);
					TASK_PRIORITY_SET(bLocal_574, true);
					return 0;
				}
				if (GET_MOUNT(Global_34573) == bLocal_627)
				{
					if (!iLocal_780)
					{
						iLocal_780 = 1;
						Function_221(&iLocal_790);
					}
					else if (Function_274(&iLocal_790) > 3.0f)
					{
						return 0;
					}
					iLocal_778 = 0;
					SQUAD_LEAVE(bLocal_627);
					TASK_CLEAR(bLocal_627);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_627);
					ANIMAL_TUNING_SET_ATTRIB_BOOL(bLocal_627, 11, false);
					ANIMAL_ACTOR_SET_DOCILE(bLocal_627, 1);
					ANIMAL_ACTOR_SET_DOMESTICATION(bLocal_627, false);
					Function_387();
					DECOR_SET_BOOL(bLocal_627, "CanHaveMultipleLassoAttached", false);
					Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
					iLocal_989 = 5;
					Function_202();
					Function_520();
					iLocal_779 = 0;
					Function_547();
					Function_221(&iLocal_577);
					if (IS_ACTOR_ALIVE(bLocal_575))
					{
						Function_379("Horse_return");
					}
					else
					{
						Function_379("Horse_find");
					}
					DETACH_LASSO(bLocal_574);
					DETACH_LASSO(bLocal_576);
					TASK_CLEAR(bLocal_576);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_576, bLocal_627, 5.0f, 2);
					TASK_PRIORITY_SET(bLocal_576, true);
					TASK_CLEAR(bLocal_574);
					TASK_FACE_ACTOR(bLocal_574, bLocal_627, 1, 3212836864);
					TASK_PRIORITY_SET(bLocal_574, true);
					return 0;
				}
				if (iLocal_780)
				{
					iLocal_780 = 0;
					Function_220(&iLocal_790);
				}
			}
			break;
		
		case 0x00000005:
			Function_526();
			bLocal_626 = GET_LASSO_TARGET(bLocal_574);
			if (IS_ACTOR_VALID(bLocal_626))
			{
				DETACH_LASSO(bLocal_574);
			}
			if (Function_439(&iLocal_583, 100.0f, 200.0f, bLocal_576, "Drew_return", "Drew_abandoned", &bLocal_598, 1, bLocal_485, Local_4, 325, 1))
			{
				if (!iLocal_778)
				{
					iLocal_778 = 1;
				}
			}
			else
			{
				if (IS_ACTOR_ALIVE(bLocal_575))
				{
					Function_379("Ranch06_mount_up_obj");
				}
				else
				{
					Function_379("Horse_find");
				}
				if (iLocal_778)
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_576, 15.0f))
					{
						Function_568();
						iLocal_778 = 0;
					}
				}
			}
			if (Function_518())
			{
				if (!IS_ACTOR_RIDING(Global_34573) || GET_MOUNT(Global_34573) != bLocal_627)
				{
					Function_545();
					Function_221(&iLocal_580);
				}
			}
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				TASK_GO_NEAR_ACTOR(bLocal_627, bLocal_576, 7.0f, 2);
				TASK_PRIORITY_SET(bLocal_627, false);
				TASK_CLEAR(bLocal_576);
				AI_GOAL_LOOK_CLEAR(bLocal_576);
				MEMORY_REPORT_POSITION_AUTO(bLocal_576, bLocal_627, true);
				TASK_USE_LASSO(bLocal_576, bLocal_627, 1.0f, 1.0f, 1, 2);
				TASK_PRIORITY_SET(bLocal_576, true);
				Function_217(bLocal_627);
				Function_221(&iLocal_577);
				HUD_CLEAR_OBJECTIVE();
				iLocal_778 = 0;
				iLocal_989 = 7;
			}
			break;
		
		case 0x00000006:
			Function_526();
			Function_565();
			if (Function_439(&iLocal_583, 100.0f, 200.0f, bLocal_576, "Drew_return", "Drew_abandoned", &bLocal_598, 1, bLocal_485, Local_4, 325, 1))
			{
				if (!iLocal_778)
				{
					iLocal_778 = 1;
				}
			}
			else
			{
				if (IS_ACTOR_ALIVE(bLocal_575))
				{
					Function_379("Horse_return");
				}
				else
				{
					Function_379("Horse_find");
				}
				if (iLocal_778)
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_576, 15.0f))
					{
						Function_568();
						iLocal_778 = 0;
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_627))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_627, 15.0f))
				{
					if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_627, "standing"))
					{
						RESET_ANIM_SET_FOR_ACTOR(bLocal_627, 1);
					}
					if (GET_TASK_STATUS(bLocal_627, 25) != 1)
					{
						TASK_FLEE_ACTOR(bLocal_627, Global_34573, 20.0f, 10.0f, 0, 1, 0);
					}
					AI_ACTOR_FORCE_SPEED(bLocal_627, 4);
				}
			}
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (ANIMAL_ACTOR_GET_DOMESTICATION(GET_MOUNT(Global_34573)) == 0)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_576, Global_34573, 15.0f, 4);
					TASK_PRIORITY_SET(bLocal_576, true);
					SET_ACTOR_MAX_SPEED(bLocal_576, 3);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, Global_34573, 10.0f, 4);
					TASK_PRIORITY_SET(bLocal_574, true);
					SET_ACTOR_MAX_SPEED(bLocal_574, 3);
					HUD_CLEAR_OBJECTIVE();
					Function_221(&iLocal_577);
					iLocal_778 = 0;
					Function_202();
					Function_206(bLocal_664);
					Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					iLocal_772 = 0;
					iLocal_989 = 2;
				}
			}
			break;
		
		case 0x00000007:
			Function_436();
			Function_526();
			if (Function_518())
			{
				if (!GET_LASSO_TARGET(bLocal_576) != bLocal_627)
				{
					Function_545();
					Function_221(&iLocal_580);
				}
			}
			if (GET_MOUNT(Global_34573) == bLocal_627)
			{
				DETACH_LASSO(bLocal_576);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_576, bLocal_627, 10.0f, 4);
				Function_221(&iLocal_577);
				iLocal_778 = 0;
				Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
				iLocal_989 = 5;
				return 0;
			}
			if (GET_LASSO_TARGET(Global_34573) == bLocal_627)
			{
				if (GET_TASK_STATUS(bLocal_576, 68) == 1)
				{
					DETACH_LASSO(bLocal_576);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_576, bLocal_627, 10.0f, 4);
				}
			}
			else if (!GET_LASSO_TARGET(bLocal_576) != bLocal_627 && !GET_TASK_STATUS(bLocal_576, 68) != 1)
			{
				TASK_CLEAR(bLocal_576);
				AI_GOAL_LOOK_CLEAR(bLocal_576);
				MEMORY_CLEAR_EVENTS(bLocal_627, 1);
				MEMORY_REPORT_POSITION_AUTO(bLocal_576, bLocal_627, true);
				TASK_USE_LASSO(bLocal_576, bLocal_627, 1.0f, 1.0f, 1, 2);
				TASK_PRIORITY_SET(bLocal_576, true);
				Function_221(&iLocal_643);
			}
			else if (GET_LASSO_TARGET(bLocal_576) != bLocal_627 && !GET_TASK_STATUS(bLocal_576, 68) != 1)
			{
				if (GET_TASK_STATUS(bLocal_576, 43) != 1)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_576, Local_4.f_1800, 4, 0, 0, 1, false);
					if (!DECOR_CHECK_EXIST(bLocal_485, "DrewDepartLine"))
					{
						Function_544();
						MEMORY_CLEAR_EVENTS(bLocal_627, 1);
						DECOR_SET_BOOL(bLocal_485, "DrewDepartLine", true);
					}
				}
			}
			if (Function_439(&iLocal_583, 100.0f, 200.0f, bLocal_576, "Drew_return", "Drew_abandoned", &bLocal_598, 1, bLocal_485, Local_4, 325, 1))
			{
				if (!iLocal_778)
				{
					iLocal_778 = 1;
				}
			}
			else
			{
				if (GET_LASSO_TARGET(Global_34573) == bLocal_627)
				{
					Function_379("Ranch06_lasso_release");
				}
				else if (!IS_ACTOR_RIDING(Global_34573))
				{
					if (IS_ACTOR_ALIVE(bLocal_575))
					{
						Function_379("Horse_return");
					}
					else
					{
						Function_379("Horse_find");
					}
				}
				else if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
				{
					if (!ANIMAL_ACTOR_GET_DOMESTICATION(GET_MOUNT(Global_34573)) != 0)
					{
						Function_379("Horse_return");
					}
					else
					{
						Function_379("Ranch06_follow_bonnie_obj");
					}
				}
				if (iLocal_778)
				{
					if (ACTORS_IN_RANGE(Global_34573, bLocal_576, 15.0f))
					{
						Function_568();
						iLocal_778 = 0;
					}
				}
			}
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (ANIMAL_ACTOR_GET_DOMESTICATION(GET_MOUNT(Global_34573)) == 0)
				{
					if (GET_LASSO_TARGET(Global_34573) == bLocal_627)
					{
						if (GET_TASK_STATUS(bLocal_576, 68) == 1)
						{
							TASK_FOLLOW_ACTOR(bLocal_576, bLocal_627);
						}
					}
					else
					{
						Function_204(3, 1, 1);
						Function_379("Ranch06_follow_bonnie_obj");
						if (Function_508(bLocal_576, bLocal_627))
						{
							HUD_CLEAR_OBJECTIVE();
							Function_221(&iLocal_577);
							iLocal_778 = 0;
							iLocal_989 = 8;
							GET_OBJECT_POSITION((*&Local_4 + 1184)[2], &vLocal_762);
							bLocal_609 = TASK_SEQUENCE_OPEN();
							TASK_GO_NEAR_ACTOR(false, bLocal_574, 10.0f, 4);
							TASK_FACE_COORD(false, &vLocal_762, 1);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_576, bLocal_609);
							TASK_SEQUENCE_RELEASE(bLocal_609, 1);
							TASK_PRIORITY_SET(bLocal_576, true);
							GET_OBJECT_POSITION((*&Local_4 + 1184)[4], &vLocal_762);
							bLocal_609 = TASK_SEQUENCE_OPEN();
							TASK_GO_NEAR_ACTOR(false, bLocal_576, 10.0f, 4);
							TASK_FACE_COORD(false, &vLocal_762, 1);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(bLocal_574, bLocal_609);
							TASK_SEQUENCE_RELEASE(bLocal_609, 1);
							TASK_PRIORITY_SET(bLocal_574, true);
						}
					}
				}
				else if (GET_MOUNT(Global_34573) == bLocal_627)
				{
					DETACH_LASSO(bLocal_576);
					TASK_STAND_STILL(bLocal_576, -1.0f, 0, 0);
					Function_221(&iLocal_577);
					iLocal_778 = 0;
					Function_361(&iLocal_622, 55, 0, 4294967295, 4294967295);
					iLocal_989 = 5;
				}
			}
			break;
		
		case 0x00000008:
			Function_436();
			Function_526();
			Function_439(&iLocal_583, 100.0f, 200.0f, bLocal_574, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_598, 1, bLocal_485, Local_4, 325, 1);
			Function_204(3, 1, 1);
			Function_379("Ranch06_follow_bonnie_obj");
			if (ACTORS_IN_RANGE(bLocal_574, bLocal_576, 15.0f))
			{
				Function_221(&iLocal_577);
				iLocal_778 = 0;
				iLocal_989 = 9;
				if (!DECOR_CHECK_EXIST(bLocal_485, "DrewDepartLine"))
				{
					Function_544();
					MEMORY_CLEAR_EVENTS(bLocal_627, 1);
					DECOR_SET_BOOL(bLocal_485, "DrewDepartLine", true);
				}
			}
			break;
		
		case 0x00000009:
			Function_436();
			Function_526();
			Function_439(&iLocal_583, 100.0f, 200.0f, bLocal_574, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_598, 1, bLocal_485, Local_4, 325, 1);
			if (GET_LASSO_TARGET(bLocal_576) == bLocal_627)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_274(&iLocal_577) < 8.0f)
				{
					bLocal_609 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1800, 4, 0, 0, 1, false);
					TASK_DISMOUNT(false, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_576, bLocal_609);
					TASK_SEQUENCE_RELEASE(bLocal_609, 1);
					TASK_PRIORITY_SET(bLocal_576, true);
					Function_202();
					return 1;
				}
			}
			if (Function_508(bLocal_576, bLocal_627))
			{
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1800, 4, 0, 0, 1, false);
				TASK_DISMOUNT(false, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_576, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				TASK_PRIORITY_SET(bLocal_576, true);
				Function_202();
				return 1;
			}
			return 1;
			break;
	}
	return 0;
}

void Function_544() //Position: 0x28000 / 163840
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_drewGoesBack", "Ranch06_drewGoesBack", false, 1, 1, 0, 1);
		Function_287(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_545() //Position: 0x28051 / 163921
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_backOnHorseDrew", "Ranch06_backOnHorseDrew", false, 1, 1, 0, 1);
		Function_287(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_546() //Position: 0x280A8 / 164008
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_firstTimeMount", "Ranch06_firstTimeMount", false, 1, 1, 0, 1);
		Function_287(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_547() //Position: 0x280FD / 164093
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_breakHorseDrew", "Ranch06_breakHorseDrew", false, 1, 1, 0, 1);
		Function_287(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_548() //Position: 0x28152 / 164178
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_drewlassoSameHorse_v2", "Ranch06_drewlassoSameHorse_v2", false, 1, 1, 0, 1);
		Function_287(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_549() //Position: 0x281B5 / 164277
{
	if (GET_TASK_STATUS(bLocal_576, 0) == 0)
	{
		if (GET_LASSO_TARGET(bLocal_576) == bLocal_627)
		{
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_551();
				CLEAR_ACTOR_MIN_SPEED(bLocal_576);
				CLEAR_ACTOR_MAX_SPEED(bLocal_576);
				TASK_CLEAR(bLocal_576);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_FLEE_ACTOR(false, bLocal_627, 10.0f, 3.0f, 0, 0, 0);
				TASK_FACE_ACTOR(false, bLocal_627, 0, 3212836864);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_576, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_576, Global_34573, 3.0f, 1);
				TASK_PRIORITY_SET(bLocal_576, true);
			}
		}
		else
		{
			TASK_CLEAR(bLocal_576);
			AI_GOAL_LOOK_CLEAR(bLocal_576);
			MEMORY_REPORT_POSITION_AUTO(bLocal_576, bLocal_627, true);
			GET_OBJECT_RELATIVE_POSITION(bLocal_627, -10.0f, 0.0f, 0.0f, &Local_600);
			bLocal_609 = TASK_SEQUENCE_OPEN();
			if (FIND_GROUND_INTERSECTION(&Local_600, 20.0f, &vLocal_603, &uLocal_606))
			{
				TASK_GO_NEAR_COORD(false, &vLocal_603, 1.0f, 3);
			}
			TASK_USE_LASSO(false, bLocal_627, 1.0f, 1.0f, 1, 2);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_576, bLocal_609);
			TASK_SEQUENCE_RELEASE(bLocal_609, 1);
			TASK_PRIORITY_SET(bLocal_576, true);
			SET_ACTOR_MIN_SPEED(bLocal_576, 4);
		}
	}
	else if (GET_TASK_STATUS(bLocal_576, 6) == 1)
	{
		if (!GET_LASSO_TARGET(bLocal_576) != bLocal_627)
		{
			TASK_CLEAR(bLocal_576);
			AI_GOAL_LOOK_CLEAR(bLocal_576);
			MEMORY_REPORT_POSITION_AUTO(bLocal_576, bLocal_627, true);
			GET_OBJECT_RELATIVE_POSITION(bLocal_627, -10.0f, 0.0f, 0.0f, &Local_600);
			bLocal_609 = TASK_SEQUENCE_OPEN();
			if (FIND_GROUND_INTERSECTION(&Local_600, 20.0f, &vLocal_603, &uLocal_606))
			{
				TASK_GO_NEAR_COORD(false, &vLocal_603, 1.0f, 3);
			}
			TASK_USE_LASSO(false, bLocal_627, 1.0f, 1.0f, 1, 2);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_576, bLocal_609);
			TASK_SEQUENCE_RELEASE(bLocal_609, 1);
			TASK_PRIORITY_SET(bLocal_576, true);
			SET_ACTOR_MIN_SPEED(bLocal_576, 4);
		}
	}
	if (GET_TASK_STATUS(bLocal_574, 0) == 0)
	{
		if (GET_LASSO_TARGET(bLocal_574) == bLocal_627)
		{
			if (!HUD_IS_SHOWING_OBJECTIVE())
			{
				Function_550();
				CLEAR_ACTOR_MIN_SPEED(bLocal_574);
				CLEAR_ACTOR_MAX_SPEED(bLocal_574);
				TASK_CLEAR(bLocal_574);
				bLocal_609 = TASK_SEQUENCE_OPEN();
				TASK_FLEE_ACTOR(false, bLocal_627, 10.0f, 3.0f, 0, 0, 0);
				TASK_FACE_ACTOR(false, bLocal_627, 0, 3212836864);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_574, bLocal_609);
				TASK_SEQUENCE_RELEASE(bLocal_609, 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bLocal_574, Global_34573, 3.0f, 1);
				TASK_PRIORITY_SET(bLocal_574, true);
			}
		}
		else
		{
			TASK_CLEAR(bLocal_574);
			AI_GOAL_LOOK_CLEAR(bLocal_574);
			MEMORY_REPORT_POSITION_AUTO(bLocal_574, bLocal_627, true);
			GET_OBJECT_RELATIVE_POSITION(bLocal_627, 10.0f, 0.0f, 0.0f, &Local_600);
			bLocal_609 = TASK_SEQUENCE_OPEN();
			if (FIND_GROUND_INTERSECTION(&Local_600, 20.0f, &vLocal_603, &uLocal_606))
			{
				TASK_GO_NEAR_COORD(false, &vLocal_603, 1.0f, 3);
			}
			TASK_USE_LASSO(false, bLocal_627, 1.0f, 1.0f, 1, 2);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_574, bLocal_609);
			TASK_SEQUENCE_RELEASE(bLocal_609, 1);
			TASK_PRIORITY_SET(bLocal_574, true);
			SET_ACTOR_MIN_SPEED(bLocal_574, 4);
		}
	}
	else if (GET_TASK_STATUS(bLocal_574, 6) == 1)
	{
		if (!GET_LASSO_TARGET(bLocal_574) != bLocal_627)
		{
			TASK_CLEAR(bLocal_574);
			AI_GOAL_LOOK_CLEAR(bLocal_574);
			MEMORY_REPORT_POSITION_AUTO(bLocal_574, bLocal_627, true);
			GET_OBJECT_RELATIVE_POSITION(bLocal_627, 10.0f, 0.0f, 0.0f, &Local_600);
			bLocal_609 = TASK_SEQUENCE_OPEN();
			if (FIND_GROUND_INTERSECTION(&Local_600, 20.0f, &vLocal_603, &uLocal_606))
			{
				TASK_GO_NEAR_COORD(false, &vLocal_603, 1.0f, 3);
			}
			TASK_USE_LASSO(false, bLocal_627, 1.0f, 1.0f, 1, 2);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_574, bLocal_609);
			TASK_SEQUENCE_RELEASE(bLocal_609, 1);
			TASK_PRIORITY_SET(bLocal_574, true);
			SET_ACTOR_MIN_SPEED(bLocal_574, 4);
		}
	}
	return;
}

void Function_550() //Position: 0x284D5 / 165077
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_bonlassoSameHorse", "Ranch06_bonlassoSameHorse", false, 2, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_551() //Position: 0x28530 / 165168
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_drewlassoSameHorse", "Ranch06_drewlassoSameHorse", false, 1, 1, 0, 1);
		Function_287(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_552() //Position: 0x2858D / 165261
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_horseBreaksDrewLass", "Ranch06_horseBreaksDrewLass", false, 1, 1, 0, 1);
		Function_287(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_553() //Position: 0x285EC / 165356
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_lassoHorseDrew", "Ranch06_lassoHorseDrew", false, 2, 1, 0, 1);
		Function_287(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_554() //Position: 0x28641 / 165441
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_276(&iLocal_611))
		{
			Function_220(&iLocal_611);
		}
	}
	else
	{
		if (iLocal_621)
		{
			iLocal_621 = 0;
		}
		if (!Function_276(&iLocal_611))
		{
			Function_221(&iLocal_611);
		}
		if (ACTORS_IN_RANGE(Global_34573, bLocal_576, 15.0f) && IS_ACTOR_IN_VOLUME(bLocal_576, Local_4.f_1104))
		{
			if (Function_274(&iLocal_611) < 10.0f)
			{
				if (!Function_276(&iLocal_733))
				{
					switch (iLocal_620)
					{
						case 0x00000000:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_621 = 1;
								Function_557();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_620 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_621 = 1;
								Function_556();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_620 = 2;
								}
							}
							break;
						
						case 0x00000063:
							break;
						
						default:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_555();
								if (IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_620 = 99;
								}
							}
							break;
						}
					}
				}
			}
	}
	return;
}

void Function_555() //Position: 0x2871A / 165658
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_noTalk1", "Ranch06_noTalk1", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_556() //Position: 0x28761 / 165729
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v2_AA", "Ranch06_rideBanter_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v2_AB", "Ranch06_rideBanter_v2_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_rideBanter_v2_AC", "Ranch06_rideBanter_v2_AC", 2, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_100", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v2_AD", "Ranch06_rideBanter_v2_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v2_AE1", "Ranch06_rideBanter_v2_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v2_AE2", "Ranch06_rideBanter_v2_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v2_AF1", "Ranch06_rideBanter_v2_AF1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_090", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v2_AF2", "Ranch06_rideBanter_v2_AF2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v2_AG1", "Ranch06_rideBanter_v2_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v2_AG2", "Ranch06_rideBanter_v2_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_2930", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v2_AH1", "Ranch06_rideBanter_v2_AH1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v2_AH2", "Ranch06_rideBanter_v2_AH2", false, 1, 1, 0, 1);
		Function_287(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_557() //Position: 0x28AD6 / 166614
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_rideBanter_v1_AA", "Ranch06_rideBanter_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v1_AB1", "Ranch06_rideBanter_v1_AB1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_090", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v1_AB2", "Ranch06_rideBanter_v1_AB2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v1_AD", "Ranch06_rideBanter_v1_AD", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_rideBanter_v1_AE", "Ranch06_rideBanter_v1_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v1_AF", "Ranch06_rideBanter_v1_AF", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v1_AG", "Ranch06_rideBanter_v1_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v1_AH", "Ranch06_rideBanter_v1_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_1170", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v1_AI", "Ranch06_rideBanter_v1_AI", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_040", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_rideBanter_v1_AJ", "Ranch06_rideBanter_v1_AJ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_rideBanter_v1_AK", "Ranch06_rideBanter_v1_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch06_rideBanter_v1_AL", "Ranch06_rideBanter_v1_AL", true, 1, 1, 0, 1);
		Function_287(7);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_558() //Position: 0x28E3F / 167487
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_chaseWildHorses", "Ranch06_chaseWildHorses", false, 2, 1, 0, 1);
		Function_287(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_559() //Position: 0x28E96 / 167574
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_spotWildHorses", "Ranch06_spotWildHorses", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_560() //Position: 0x28EEB / 167659
{
	iLocal_621 = 0;
	Function_220(&iLocal_611);
	ABORT_SCRIPTED_CONVERSATION(1);
	return;
}

bool Function_561(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x28F00 / 167680
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
				if (Function_433(bVar1, uParam1, uParam2, uParam3, uParam4, 0))
				{
					return 1;
				}
			}
			bVar0++;
		}
	}
	return 0;
}

void Function_562() //Position: 0x28F52 / 167762
{
	switch (iLocal_988)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING(bLocal_574))
			{
			}
			else if (!GET_TASK_STATUS(bLocal_574, 11) != 1 || !GET_TASK_STATUS(bLocal_574, 11) != 3)
			{
				TASK_MOUNT(bLocal_574, bLocal_624, 0, 1, 2, 2147483647);
				iLocal_988 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_RIDING(bLocal_574))
			{
			}
			else if (!GET_TASK_STATUS(bLocal_574, 11) != 1 || !GET_TASK_STATUS(bLocal_574, 11) != 3)
			{
				TASK_MOUNT(bLocal_574, bLocal_624, 0, 1, 2, 2147483647);
			}
			break;
	}
	return;
}

void Function_563() //Position: 0x28FE4 / 167908
{
	switch (iLocal_987)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING(bLocal_576))
			{
				if (!ACTORS_IN_RANGE(Global_34573, bLocal_576, 25.0f))
				{
					TASK_OVERRIDE_SET_MOVETYPE(bLocal_576, 3);
					iLocal_987 = 1;
				}
				else if (IS_ACTOR_IN_VOLUME(bLocal_576, Local_4.f_1104))
				{
					TASK_OVERRIDE_SET_MOVETYPE(bLocal_576, 2);
				}
				else
				{
					TASK_OVERRIDE_SET_MOVETYPE(bLocal_576, 4);
				}
			}
			else if (!GET_TASK_STATUS(bLocal_576, 11) != 1 || !GET_TASK_STATUS(bLocal_576, 11) != 3)
			{
				TASK_MOUNT(bLocal_576, bLocal_625, 0, 1, 2, 2147483647);
				iLocal_987 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_RIDING(bLocal_576))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_576, 25.0f))
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_576);
					iLocal_987 = 0;
				}
			}
			else if (!GET_TASK_STATUS(bLocal_576, 11) != 1 || !GET_TASK_STATUS(bLocal_576, 11) != 3)
			{
				TASK_MOUNT(bLocal_576, bLocal_625, 0, 1, 2, 2147483647);
			}
			break;
	}
	return;
}

void Function_564() //Position: 0x290D0 / 168144
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_GetsOffHorse", "Ranch06_GetsOffHorse", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_565() //Position: 0x29121 / 168225
{
	if (!iLocal_989 != 4)
	{
		bLocal_628 = GET_MOUNT(Global_34573);
		if (Function_528(bLocal_628, bLocal_664, 0))
		{
			bLocal_627 = bLocal_628;
			HUD_CLEAR_OBJECTIVE();
			Function_221(&iLocal_577);
			iLocal_778 = 0;
			iLocal_989 = 4;
			return;
		}
	}
	if (IS_ACTOR_VALID(bLocal_627))
	{
		bLocal_628 = GET_LASSO_TARGET(Global_34573);
		if (Function_528(bLocal_628, bLocal_664, 0) && !bLocal_628 != bLocal_627)
		{
			DETACH_LASSO(bLocal_574);
			DETACH_LASSO(bLocal_576);
			TASK_CLEAR(bLocal_627);
			Function_524(bLocal_664, Global_34573, 15.0f, 2.0f, 0, 0);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_576, Global_34573, 5.0f, 4);
			TASK_PRIORITY_SET(bLocal_576, true);
			SET_ACTOR_MAX_SPEED(bLocal_576, 3);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, Global_34573, 7.0f, 4);
			TASK_PRIORITY_SET(bLocal_574, true);
			SET_ACTOR_MAX_SPEED(bLocal_574, 3);
			HUD_CLEAR_OBJECTIVE();
			Function_221(&iLocal_577);
			iLocal_778 = 0;
			Function_202();
			Function_206(bLocal_664);
			Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			iLocal_772 = 0;
			iLocal_989 = 2;
			return;
		}
		if (!IS_ACTOR_ALIVE(bLocal_627))
		{
			bLocal_627 = "";
			TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_576, Global_34573, 5.0f, 4);
			TASK_PRIORITY_SET(bLocal_576, true);
			SET_ACTOR_MAX_SPEED(bLocal_576, 3);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(bLocal_574, Global_34573, 7.0f, 4);
			TASK_PRIORITY_SET(bLocal_574, true);
			SET_ACTOR_MAX_SPEED(bLocal_574, 3);
			HUD_CLEAR_OBJECTIVE();
			Function_221(&iLocal_577);
			iLocal_778 = 0;
			Function_202();
			Function_206(bLocal_664);
			Function_465(bLocal_664, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			iLocal_772 = 0;
			iLocal_989 = 2;
			return;
		}
	}
	return;
}

void Function_566() //Position: 0x2928C / 168588
{
	Function_204(3, 0, 1);
	if (IS_BLIP_VALID(bLocal_745))
	{
		REMOVE_BLIP(bLocal_745);
	}
	if (!IS_BLIP_VALID(bLocal_745))
	{
		bLocal_745 = ADD_BLIP_FOR_OBJECT(bLocal_576, 325, 0f, 2, 0);
	}
	if (IS_OBJECT_VALID(bLocal_667))
	{
		Function_203(bLocal_667);
		Function_198();
	}
	if (IS_BLIP_VALID(bLocal_747))
	{
		REMOVE_BLIP(bLocal_747);
	}
	if (IS_BLIP_VALID(bLocal_746))
	{
		REMOVE_BLIP(bLocal_746);
	}
	return;
}

void Function_567() //Position: 0x292F0 / 168688
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_jonNoFollow", "Ranch06_jonNoFollow", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_568() //Position: 0x2933F / 168767
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_comesBack", "Ranch06_comesBack", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_569() //Position: 0x2938A / 168842
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_findWildHorses", "Ranch06_findWildHorses", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_570() //Position: 0x293DF / 168927
{
	switch (iLocal_783)
	{
		case 0x00000006:
			if (!IS_ACTOR_VALID(bLocal_624))
			{
				Function_326();
				bLocal_624 = (*&Local_4 + 668)[02];
				TASK_PRIORITY_SET(bLocal_624, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_624, true);
				SET_ACTOR_FACTION(bLocal_624, 21);
				bLocal_625 = (*&Local_4 + 668)[12];
				TASK_PRIORITY_SET(bLocal_625, true);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_625, true);
				SET_ACTOR_FACTION(bLocal_625, 21);
			}
			if (!IS_ACTOR_VALID(bLocal_576))
			{
				Function_325();
				bLocal_576 = (*&Local_4 + 864)[02];
				SET_CRIPPLE_ENABLE(bLocal_576, 0);
				SET_ACTOR_FACTION(bLocal_576, 20);
				TASK_PRIORITY_SET(bLocal_576, true);
				TASK_MOUNT(bLocal_576, bLocal_625, 0, 1, 2, 2147483647);
				TASK_PRIORITY_SET(bLocal_576, true);
				SET_ACTOR_MAX_SPEED(bLocal_576, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_576, 2);
				AI_BEHAVIOR_SET_ALLOW(bLocal_576, 0, 0);
				SET_ACTOR_MAX_HEALTH(bLocal_576, 50.0f);
				SET_ACTOR_HEALTH(bLocal_576, GET_ACTOR_MAX_HEALTH(bLocal_576));
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bLocal_576, 100.0f);
				GIVE_WEAPON_TO_ACTOR(bLocal_576, 21, false, 1, 1);
			}
			DECOR_SET_BOOL(Global_34573, "CanBeLasso", false);
			Function_361(&iLocal_622, 1, 0, 4294967295, 4294967295);
			if (!SQUAD_IS_VALID(bLocal_663))
			{
				bLocal_663 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "sMoiraSquad"));
				SQUAD_JOIN(bLocal_574, bLocal_663);
			}
			Function_221(&iLocal_649);
			iLocal_783 = 7;
			break;
		
		case 0x00000007:
			if (bLocal_575 != bLocal_624 || bLocal_575 != bLocal_625)
			{
				bLocal_575 = "";
			}
			if (Function_333())
			{
				bLocal_575 = Function_327(1, 0, 0, 0, 0, 0, 1, 0);
				if (HUD_IS_FADED())
				{
					Function_307(bLocal_575, (*&Local_4 + 1112)[6], 1, 1, 1);
					Function_307(bLocal_576, (*&Local_4 + 1112)[5], 1, 1, 1);
					Function_307(bLocal_624, (*&Local_4 + 1112)[8], 1, 1, 1);
					Function_307(bLocal_625, (*&Local_4 + 1112)[7], 1, 1, 1);
					Function_307(bLocal_576, (*&Local_4 + 1112)[15], 1, 1, 1);
					Function_307(bLocal_574, (*&Local_4 + 1112)[13], 1, 1, 1);
					TASK_MOUNT(bLocal_576, bLocal_625, 0, 1, 2, 2147483647);
					TASK_PRIORITY_SET(bLocal_576, true);
					SET_ACTOR_MAX_SPEED(bLocal_576, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_576, 2);
					ACTOR_POP_NEXT_GAIT(bLocal_576, 1, false);
				}
				TASK_STAND_STILL(bLocal_624, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_624, true);
				TASK_STAND_STILL(bLocal_575, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_575, 2);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_575, true);
				SET_ACTOR_FACTION(bLocal_575, 21);
				TASK_STAND_STILL(bLocal_625, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_625, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_574, 2);
				iLocal_783 = 8;
			}
			break;
		
		case 0x00000008:
			iLocal_783 = 9;
			return 1;
			break;
		
		case 0x00000009:
			return 1;
			break;
	}
	return 0;
}

void Function_571() //Position: 0x2965B / 169563
{
	switch (iLocal_533)
	{
		case 0x00000000:
			Function_304(9);
			Function_592();
			Function_584(&Local_486, 1);
			if (!IS_LAYOUTREF_VALID(bLocal_485))
			{
				bLocal_485 = CREATE_LAYOUT("ranch06_DynamicLayout");
			}
			Function_583("FTR_SONG_02", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_622 = 0;
			Function_582();
			if (!IS_ACTOR_VALID(bLocal_574))
			{
				bLocal_574 = Function_574(3, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			else if (!Function_279(&Local_486) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/R6_SEQ/R6_SEQ"))
			{
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, -840,0001f, 91,77865f, 2401,022f, -131,7449f, 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(bLocal_574, -839,9487f, 91,73472f, 2399,405f, 213,6059f, 1, true, 1);
				TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_574, -1.0f, 0, 0);
				Function_357();
				Global_63097 = 1;
				iLocal_533 = 6;
			}
			else
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/R6_SEQ/R6_SEQ"))
				{
					LOG_ERROR("R6/R6 cutscene does not exist");
				}
				iLocal_533 = 8;
			}
			break;
		
		case 0x00000006:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_221(&iLocal_577);
				iLocal_533 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_267("$/cutscene/R6_SEQ/R6_SEQ", &Local_525, &Local_486, &iLocal_532, 82051, 59123, 56914, 56301, 50811, 50729, 0, 1, 1, 2, 2, 0, 1))
			{
			}
			break;
		
		case 0x00000008:
			if (Function_572())
			{
				iLocal_533 = 9;
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_334();
					GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Local_4.f_1792), false);
				}
			}
			break;
		
		case 0x00000009:
			Function_299();
			iLocal_532 = iLocal_484;
			iLocal_533 = 0;
			Function_296(&Local_486, &iLocal_532, &iLocal_533);
			Function_295(StackVal, StackVal, StackVal, StackVal, StackVal, Function_334(), Local_486);
			switch (iLocal_532)
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
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

bool Function_572() //Position: 0x298B7 / 170167
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_573(0))
		{
			return 0;
		}
		if (!Function_316())
		{
			return 0;
		}
		if (!Function_310(&bLocal_493))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_574))
		{
			bLocal_574 = Function_574(3, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_575))
		{
			if (Function_333())
			{
				bLocal_575 = Function_327(1, 1, 0, 0, 0, 0, 1, 0);
			}
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_575, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_573(bool bParam0) //Position: 0x2992F / 170287
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

bool Function_574(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x2995D / 170333
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
		Function_204(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_581(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_577(StackVal, iParam7);
		}
		if (!IS_ACTOR_VALID(bVar1))
		{
			vVar3.x = iParam3;
			vVar3.y = iParam4;
			vVar3.z = iParam5;
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
		Function_576(bVar1, 0, 0, 0, 0);
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
		Function_575(bVar1, 0);
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

void Function_575(bool bParam0, bool bParam1) //Position: 0x29E47 / 171591
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_576(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x29E67 / 171623
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

bool Function_577(int iParam0, bool bParam1) //Position: 0x29EBB / 171707
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_431(iParam0))
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
						Function_578(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_578(bool bParam0, bool bParam1) //Position: 0x29F3B / 171835
{
	Function_580(bParam0);
	Function_579(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_579(bool bParam0) //Position: 0x29F61 / 171873
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_580(bool bParam0) //Position: 0x29F85 / 171909
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

bool Function_581(int iParam0, bool bParam1) //Position: 0x2A054 / 172116
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

void Function_582() //Position: 0x2A0E7 / 172263
{
	Function_317(&bLocal_493, "Ranch06_stop_horses", 5, 0);
	Function_317(&bLocal_493, "custom/Ranch06_stop_horses", 8, 0);
	Function_317(&bLocal_493, "handoff", 5, 0);
	Function_317(&bLocal_493, "custom/handoff", 8, 0);
	Function_317(&bLocal_493, "ranch06_drew_idle", 5, 0);
	Function_317(&bLocal_493, "custom/ranch06_drew_idle", 8, 0);
	Function_317(&bLocal_493, "ranch06", 10, 0);
	Function_317(&bLocal_493, "nminigames", 10, 0);
	return;
}

void Function_583(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2A1CD / 172493
{
	AUDIO_MUSIC_FORCE_TRACK(uParam0, Function_362(uParam1), iParam2, iParam3, iParam4, iParam5, iParam6);
}

void Function_584(int iParam0, bool bParam1) //Position: 0x2A1E9 / 172521
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_590(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_279(iParam0))
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
	if (!Function_279(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_200();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_239();
	Function_270();
	Function_228("");
	Function_589(0);
	Function_588();
	Function_193();
	Function_192();
	ENABLE_JOURNAL_REPLAY(0);
	Function_587();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_346(0, 0x40400000);
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
	Function_586(13);
	Function_586(14);
	Function_586(25);
	Function_586(24);
	Function_586(12);
	Function_586(27);
	Function_586(26);
	Function_586(15);
	Function_585();
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

void Function_585() //Position: 0x2A60D / 173581
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

void Function_586(int iParam0) //Position: 0x2A681 / 173697
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_587() //Position: 0x2A6A1 / 173729
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

void Function_588() //Position: 0x2A6DE / 173790
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_589(int iParam0) //Position: 0x2A6F2 / 173810
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_196())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_590(int iParam0, int iParam1) //Position: 0x2A727 / 173863
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
			Function_591(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_591(int iParam0) //Position: 0x2A7A9 / 173993
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

void Function_592() //Position: 0x2A7F7 / 174071
{
	bool bVar0;
	
	bVar0 = 976;
	while (bVar0 < 1007)
	{
		if (GET_ACTORENUM_SPECIES(bVar0) == 23)
		{
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bVar0);
		}
		bVar0++;
	}
	return;
}

void Function_593() //Position: 0x2A822 / 174114
{
	return;
}

bool Function_594(int iParam0) //Position: 0x2A828 / 174120
{
	switch (iParam0->f_16)
	{
		case 0x00000002:
			switch (StackVal)
			{
				case 0x00000000:
					if (!iParam0->f_12)
					{
					}
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
					}
					break;
			}
			break;
		
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000000:
					if (!iParam0->f_12)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_602();
					}
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_602();
					}
					break;
				
				case 0x00000002:
					if (!iParam0->f_12)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_602();
					}
					break;
			}
			break;
		
		case 0x00000008:
			switch (StackVal)
			{
				case 0x00000000:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_601();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_602();
					}
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_600();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_602();
					}
					break;
				
				case 0x00000002:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_599();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_602();
					}
					break;
			}
			break;
		
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			switch (StackVal)
			{
				case 0x00000000:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_598();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_602();
					}
					break;
				
				case 0x00000001:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_597();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_602();
					}
					break;
				
				case 0x00000002:
					if (!iParam0->f_12)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_596();
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_602();
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
		Function_595(iParam0, 1);
		return 1;
	}
	Function_595(iParam0, 0);
	return 0;
}

void Function_595(int iParam0, bool bParam1) //Position: 0x2AA1A / 174618
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

void Function_596() //Position: 0x2AA3E / 174654
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_assaultChar", "Ranch06_assaultChar", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_597() //Position: 0x2AA8D / 174733
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_assaultDrew", "Ranch06_assaultDrew", false, 1, 1, 0, 1);
		Function_287(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_598() //Position: 0x2AADC / 174812
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_assaultBon", "Ranch06_assaultBon", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_599() //Position: 0x2AB29 / 174889
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_shootChar", "Ranch06_shootChar", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_600() //Position: 0x2AB74 / 174964
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Ranch06_shootDrew", "Ranch06_shootDrew", false, 1, 1, 0, 1);
		Function_287(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_601() //Position: 0x2ABBF / 175039
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_shootBon", "Ranch06_shootBon", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_602() //Position: 0x2AC08 / 175112
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch06_shootBonHorse", "Ranch06_shootBonHorse", false, 1, 1, 0, 1);
		Function_287(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_603(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x2AC5B / 175195
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
		Function_595(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_622(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_621(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_621(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_607(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_595(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_606(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_605(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_606(&bVar17);
														strcpy(&Var18, "", 64);
														Function_604(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_228(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_605(StackVal, iParam2, bVar17);
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
	Function_595(iParam2, 0);
	return 0;
}

void Function_604(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x2AFF4 / 176116
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

void Function_605(var uParam0, int iParam1, bool bParam2) //Position: 0x2B0DF / 176351
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

void Function_606(bool bParam0) //Position: 0x2B155 / 176469
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_607(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x2B177 / 176503
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
			return Function_618(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_611(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_618(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_608(iParam0, bVar2);
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
						bVar2 = Function_618(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_608(iParam0, bVar2);
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

var Function_608(int iParam0, bool bParam1) //Position: 0x2B2C1 / 176833
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
				bParam1 = Function_610(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_609(16);
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
				bParam1 = Function_610(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_609(256);
			}
		}
	}
	return bParam1;
}

bool Function_609(int iParam0) //Position: 0x2B3F4 / 177140
{
	return 2 | iParam0;
}

int Function_610(int iParam0) //Position: 0x2B3FE / 177150
{
	return 4 | iParam0;
}

int Function_611(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x2B408 / 177160
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
				iParam3 = Function_617(iParam0, iParam1, bParam4);
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
			return Function_609(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_612(iParam0, iParam1, 0, bParam4);
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
			return Function_609(16);
		}
	}
	return 0;
}

int Function_612(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2B4BA / 177338
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_616(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_615(iVar0, 3, 1, bParam3))
			{
				if (!Function_621(iParam0, 8, 1))
				{
					return Function_614(64, 1024, bParam2);
				}
			}
			return Function_613(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_615(iVar0, 2, 1, bParam3))
			{
				if (!Function_621(iParam0, 32, 1))
				{
					return Function_614(64, 1024, bParam2);
				}
			}
			return Function_613(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_615(iVar0, 1, 1, bParam3))
			{
				if (!Function_621(iParam0, 64, 1))
				{
					return Function_614(64, 1024, bParam2);
				}
			}
			return Function_613(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_615(iVar0, 3, 1, bParam3))
			{
				if (!Function_621(iParam0, 128, 1))
				{
					return Function_614(64, 1024, bParam2);
				}
			}
			return Function_613(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_615(iVar0, 1, 1, bParam3))
			{
				if (!Function_621(iParam0, 1024, 1))
				{
					return Function_614(64, 1024, bParam2);
				}
			}
			return Function_613(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_615(iVar0, 1, 1, bParam3))
			{
				if (!Function_621(iParam0, 1024, 1))
				{
					return Function_614(64, 1024, bParam2);
				}
			}
			return Function_613(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_613(int iParam0, int iParam1, bool bParam2) //Position: 0x2B674 / 177780
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_614(int iParam0, int iParam1, bool bParam2) //Position: 0x2B689 / 177801
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_615(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2B69E / 177822
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_616(int iParam0) //Position: 0x2B6BB / 177851
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

int Function_617(var uParam0, int iParam1, bool bParam2) //Position: 0x2B72A / 177962
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_616(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_615(iVar0, 3, 1, bParam2))
			{
				if (!Function_621(uParam0, 8, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000009:
			if (Function_615(iVar0, 3, 1, bParam2))
			{
				if (!Function_621(uParam0, 8, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x0000006E:
			if (Function_615(iVar0, 2, 1, bParam2))
			{
				if (!Function_621(uParam0, 16, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x0000005B:
			if (Function_615(iVar0, 2, 1, bParam2))
			{
				if (!Function_621(uParam0, 32, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000031:
			if (Function_615(iVar0, 1, 1, bParam2))
			{
				if (!Function_621(uParam0, 64, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000007:
			if (Function_615(iVar0, 3, 1, bParam2))
			{
				if (!Function_621(uParam0, 128, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000008:
			if (Function_615(iVar0, 2, 1, bParam2))
			{
				if (!Function_621(uParam0, 256, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000014:
			if (Function_615(iVar0, 1, 1, bParam2))
			{
				if (!Function_621(uParam0, 512, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000018:
			if (Function_615(iVar0, 1, 1, bParam2))
			{
				if (!Function_621(uParam0, 512, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000057:
			if (Function_615(iVar0, 1, 1, bParam2))
			{
				if (!Function_621(uParam0, 1024, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000058:
			if (Function_615(iVar0, 1, 1, bParam2))
			{
				if (!Function_621(uParam0, 1024, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_618(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2B945 / 178501
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
						return Function_617(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_621(iParam0, 2, 1))
					{
						return Function_610(8);
					}
					return Function_609(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_621(iParam0, 4, 1))
					{
						return Function_610(16);
					}
					return Function_609(16);
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
							return Function_612(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_621(iParam0, 2, 1))
						{
							return Function_610(128);
						}
						return Function_609(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_621(iParam0, 4, 1))
						{
							return Function_610(256);
						}
						return Function_609(256);
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
						return Function_612(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_621(iParam0, 2, 1))
					{
						return Function_610(8);
					}
					return Function_609(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_621(iParam0, 4, 1))
					{
						return Function_610(16);
					}
					return Function_609(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_620(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_621(iParam0, 2, 1))
					{
						return Function_610(8);
					}
					return Function_609(8);
				}
				if (!Function_621(iParam0, 4, 1))
				{
					return Function_610(16);
				}
				return Function_609(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_612(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_619(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_609(128);
							}
							if (!Function_621(iParam0, 2, 1))
							{
								return Function_610(8);
							}
							return Function_609(8);
						}
						if (iParam4 == 2)
						{
							if (Function_619(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_609(256);
							}
							if (!Function_621(iParam0, 4, 1))
							{
								return Function_610(16);
							}
							return Function_609(16);
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

bool Function_619(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2BC04 / 179204
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

int Function_620(int iParam0, var uParam1, bool bParam2) //Position: 0x2BCBD / 179389
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_616(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_615(iVar0, 2, 1, bParam2))
			{
				if (!Function_621(iParam0, 16, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x0000005B:
			if (Function_615(iVar0, 2, 1, bParam2))
			{
				if (!Function_621(iParam0, 32, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000057:
			if (Function_615(iVar0, 1, 1, bParam2))
			{
				if (!Function_621(iParam0, 1024, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		case 0x00000058:
			if (Function_615(iVar0, 1, 1, bParam2))
			{
				if (!Function_621(iParam0, 1024, 1))
				{
					return Function_610(64);
				}
			}
			return Function_609(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_621(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BDD1 / 179665
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

int Function_622(bool bParam0) //Position: 0x2BDF9 / 179705
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

void Function_623(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4, bool bParam5) //Position: 0x2BE2A / 179754
{
	float fVar0;
	
	if (!Function_276(iParam0))
	{
		Function_629(iParam0);
	}
	if (iParam3 <= 0)
	{
		iParam3 = *uParam1;
	}
	if (*uParam2 <= iParam3)
	{
		if (*uParam2 == 0)
		{
			fVar0 = 0.0f;
		}
		else
		{
			fVar0 = (StackVal + fParam4);
		}
		if (Function_274(iParam0) <= fVar0)
		{
			if (!Function_133() || uParam1[*uParam27]->f_24)
			{
				while (uParam1[*uParam27]->f_20)
				{
					*uParam2++;
					if (*uParam2 > *uParam1)
					{
						return;
					}
					PRINTSTRING((*uParam1)[*uParam27]);
					PRINTSTRING(" has been turned off, so we're not going to show it");
					PRINTNL();
				}
				if (IS_ACTOR_VALID(uParam1[*uParam27]->f_12))
				{
					if (Function_626(Global_34573, uParam1[*uParam27]->f_12, uParam1[*uParam27]->f_16))
					{
						Function_624(StackVal, StackVal, (*uParam1)[*uParam27]);
					}
					else
					{
						PRINTSTRING("Player is ");
						Function_344(Global_34573);
						Function_344(uParam1[*uParam27]->f_12);
						PRINTFLOAT(VDIST(Function_344(Global_34573), Function_344(uParam1[*uParam27]->f_12)));
						PRINTSTRING("m away from sepaker. It's too far. Don't print the line: ");
						PRINTSTRING((*uParam1)[*uParam27]);
						PRINTNL();
					}
				}
				else
				{
					Function_624(StackVal, StackVal, (*uParam1)[*uParam27]);
				}
				Function_221(iParam0);
				if (bParam5)
				{
					uParam1[*uParam27]->f_20 = 1;
				}
				*uParam2++;
			}
		}
	}
}

void Function_624(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2BFED / 180205
{
	switch (bParam2)
	{
		case 0x00000000:
			Function_625(bParam0, bParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_132(bParam0, bParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_445(bParam0, bParam1, 1, 2, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(bParam0, bParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_625(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2C057 / 180311
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

bool Function_626(var uParam0, var uParam1, float fParam2) //Position: 0x2C09E / 180382
{
	float fVar0;
	
	fVar0 = Function_627(uParam0, uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_627(bool bParam0, bool bParam1) //Position: 0x2C0BB / 180411
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_628(&uVar0, &uVar3);
	return iVar6;
}

var Function_628(var uParam0, int iParam1) //Position: 0x2C0DA / 180442
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_629(int iParam0) //Position: 0x2C0F8 / 180472
{
	if (!Function_276(iParam0))
	{
		Function_222(iParam0, 0.0f);
	}
	return;
}

void Function_630() //Position: 0x2C10D / 180493
{
	if (Function_364(Global_30628[2]))
	{
		if (!IS_DOOR_VALID(bLocal_797))
		{
			GET_OBJECT_POSITION((*&Local_4 + 1224)[11], &vLocal_762);
			bLocal_797 = FIND_NEAREST_DOOR(&vLocal_762, 4.0f);
		}
		else if (!IS_DOOR_CLOSED(bLocal_797))
		{
			CLOSE_DOOR_FAST(bLocal_797);
			Function_120(bLocal_797, 1);
		}
		if (!IS_DOOR_VALID(bLocal_798))
		{
			GET_OBJECT_POSITION((*&Local_4 + 1224)[12], &vLocal_762);
			bLocal_798 = FIND_NEAREST_DOOR(&vLocal_762, 4.0f);
		}
		else if (!IS_DOOR_CLOSED(bLocal_798))
		{
			CLOSE_DOOR_FAST(bLocal_798);
			Function_120(bLocal_798, 1);
		}
	}
	return;
}

int Function_631() //Position: 0x2C19B / 180635
{
	if (IS_STRING_VALID(bLocal_729))
	{
		if (Function_276(&iLocal_733))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_220(&iLocal_733);
				Function_445(bLocal_729, 0x40f00000, 1, 2, 0, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

void Function_632() //Position: 0x2C1D9 / 180697
{
	if (!Function_276(&iLocal_617))
	{
		Function_221(&iLocal_617);
	}
	else if (Function_274(&iLocal_617) <= 5.0f)
	{
		if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
		{
			if (IS_ACTOR_VALID(bLocal_576))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_576, 1.0f))
				{
					if (Function_635(Global_34573, bLocal_576) < 8.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_576, "Ranch06_rideIntoDrewHorse", Function_53(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_221(&iLocal_617);
					}
				}
			}
			if (IS_ACTOR_VALID(bLocal_574))
			{
				if (ACTORS_IN_RANGE(Global_34573, bLocal_574, 1.0f))
				{
					if (Function_635(Global_34573, bLocal_574) < 8.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_574, "Ranch06_rideIntoBon", Function_53(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_221(&iLocal_617);
					}
				}
			}
		}
		if (DECOR_GET_BOOL(Global_34573, "beingBucked"))
		{
			if (IS_ACTOR_VALID(bLocal_574))
			{
				if (ACTORS_IN_RANGE(bLocal_574, Global_34573, 20.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_574, "Ranch06_thrownOffHorse", Function_53(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
					Function_221(&iLocal_617);
				}
			}
		}
		Function_634();
		if (IS_WEAPON_DRAWN(Global_34573))
		{
			if (Function_633(GET_WEAPON_IN_HAND(Global_34573)))
			{
				bLocal_610 = GET_ACTOR_UNDER_RETICLE(Global_34573, 0);
				if (IS_ACTOR_VALID(bLocal_610))
				{
					if (IS_ACTOR_HUMAN(bLocal_610))
					{
						if (bLocal_610 == bLocal_574)
						{
							if (Function_276(&iLocal_614))
							{
								if (Function_274(&iLocal_614) < 1.0f)
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_574, "Ranch06_guinOnBon", Function_53(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
									Function_221(&iLocal_617);
								}
							}
							else
							{
								Function_221(&iLocal_614);
							}
						}
						else if (bLocal_610 == bLocal_576)
						{
							if (Function_276(&iLocal_614))
							{
								if (Function_274(&iLocal_614) < 1.0f)
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_576, "Ranch06_gunOnDrew", Function_53(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
									Function_221(&iLocal_617);
								}
							}
							else
							{
								Function_221(&iLocal_614);
							}
						}
						else if (!AI_IS_HOSTILE_OR_ENEMY(Global_34573, bLocal_610))
						{
							if (Function_276(&iLocal_614))
							{
								if (Function_274(&iLocal_614) < 1.0f)
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_574, "Ranch06_gunChar", Function_53(), false, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
									Function_221(&iLocal_617);
								}
							}
							else
							{
								Function_221(&iLocal_614);
							}
						}
						else if (Function_276(&iLocal_614))
						{
							Function_220(&iLocal_614);
						}
					}
					else if (Function_276(&iLocal_614))
					{
						Function_220(&iLocal_614);
					}
				}
				else if (Function_276(&iLocal_614))
				{
					Function_220(&iLocal_614);
				}
			}
			else if (Function_276(&iLocal_614))
			{
				Function_220(&iLocal_614);
			}
		}
		else if (Function_276(&iLocal_614))
		{
			Function_220(&iLocal_614);
		}
	}
	return;
}

bool Function_633(bool bParam0) //Position: 0x2C4BE / 181438
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

void Function_634() //Position: 0x2C504 / 181508
{
	if (IS_WEAPON_DRAWN(Global_34573))
	{
		if (Function_633(GET_WEAPON_IN_HAND(Global_34573)))
		{
			if (IS_ACTOR_SHOOTING(Global_34573))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
				{
					if (Function_274(&iLocal_617) <= 5.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_574, "Ranch06_shootRandom", Function_53(), false, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_221(&iLocal_617);
					}
				}
			}
		}
	}
	return;
}

float Function_635(bool bParam0, bool bParam1) //Position: 0x2C572 / 181618
{
	vector3 vVar0;
	vector3 vVar3;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	GET_ACTOR_VELOCITY(bParam1, &vVar3);
	return VMAG(Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vVar0, StackVal));
}

void Function_636(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x2C594 / 181652
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

