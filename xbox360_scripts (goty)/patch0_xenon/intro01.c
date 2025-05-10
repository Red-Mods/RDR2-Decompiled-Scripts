//Decompiled with MagicRDR v1.0
//Function Count : 574
//Statics Count : 1267
//Natives Count : 790
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<1289> Local_4 = { 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, 5, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, 5, 0, 0, 0, 0, 0, 0, 1, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 2, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_509 = 0;
	bLocal_854 = false;
	vLocal_857 = { 736.489f, 90.334f, 1199.335f };
	vLocal_860 = { -2208.91f, 16.5062f, 2605.41f };
	fLocal_863 = 259.75f;
	iLocal_943 = 4294967295;
	iLocal_1060 = 2;
	iLocal_1174 = 3;
	iLocal_1175 = 2;
	iLocal_1176 = 2;
	iLocal_1177 = 3;
	iLocal_1178 = 4;
	iLocal_1179 = 5;
	iLocal_1180 = 5;
	iLocal_1183 = 7;
	iLocal_1184 = 3;
	iLocal_1185 = 7;
	iLocal_1186 = 4;
	iLocal_1187 = 2;
	iLocal_1188 = 3;
	iLocal_1189 = 8;
	iLocal_1200 = 4;
	iLocal_1201 = 18;
	Local_511 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_739 = 99;
	iLocal_740 = 6;
	Local_732 = 1000;
	Function_573(0);
	while (Function_276())
	{
		Function_229();
		WAIT(0);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0xC6 / 198
{
	Global_30842[3] = 0;
	if (IS_SOUND_ID_VALID(uLocal_947))
	{
		RELEASE_SOUND_ID(uLocal_947);
	}
	if (!iLocal_942)
	{
		Function_228(1);
		iLocal_942 = 1;
	}
	ENABLE_CHILD_SECTOR("arm_trainstation01props02x");
	if (UI_ISACTIVE("IntroCredits"))
	{
		UI_EXIT("IntroCredits");
	}
	if (iLocal_939)
	{
		STREAMING_ENABLE_BOUNDS(1);
		iLocal_939 = 0;
	}
	if (iLocal_943 == 4294967295 || IS_OBJECT_VALID(bLocal_928))
	{
		TRAIN_DESTROY_TRAIN(iLocal_943);
	}
	DESTROY_OBJECT(bLocal_948);
	_SET_SKY_IS_INTRO_RUNNING(0);
	Function_223();
	Function_222(0x4000000);
	Function_221(bLocal_510);
	Function_221(Local_4);
	Function_220();
	Function_192(iLocal_852, 1, 1, 1, 1, 1, 1, 1);
	Function_188(&iLocal_518);
	Function_188(&iLocal_597);
	Function_188(&iLocal_703);
	Function_188(&iLocal_604);
	Function_188(&iLocal_626);
	Function_188(&iLocal_663);
	Function_176();
	if (IS_ITERATOR_VALID(iLocal_741))
	{
		DESTROY_ITERATOR(iLocal_741);
	}
	RELEASE_LAYOUT_REF(bLocal_510);
	if (bLocal_851)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
		TELEPORT_ACTOR_WITH_HEADING(Global_34573, -842.66f, 93.936f, 2365.025f, -143.816f, 1, 1, 1);
		Function_27(Local_511, 1, 0, 1, 0);
	}
	else if (iLocal_852)
	{
		Function_23(Local_511);
	}
	else
	{
		Function_4(Local_511);
	}
	Global_30842[3] = 0;
	if (Global_62478)
	{
		Global_63096 = 0;
		Global_63097 = 0;
		Function_2(114688);
		STREAMING_SET_CUTSCENE_MODE(1);
		TELEPORT_ACTOR_WITH_HEADING(Global_34573, -842.66f, 93.936f, 2365.025f, -143.816f, 1, 1, 1);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(bool bParam0) //Position: 0x251 / 593
{
	if (Function_3(bParam0, 1) && !Function_3(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_3(bool bParam0, bool bParam1) //Position: 0x27E / 638
{
	return (bParam0 && bParam1) == 0;
}

void Function_4(int iParam0) //Position: 0x28B / 651
{
	Function_12(iParam0);
	Function_11();
	Function_8(2);
	Function_6((15 - Function_7(105)));
	Function_5(12);
	return;
}

void Function_5(int iParam0) //Position: 0x2AC / 684
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, iParam0, 0);
	return;
}

void Function_6(int iParam0) //Position: 0x2C7 / 711
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_7(105)), 0);
	return;
}

int Function_7(int iParam0) //Position: 0x2E8 / 744
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_8(int iParam0) //Position: 0x2FE / 766
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_10(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_10(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_10(Global_12976.f_24);
	PRINTNL();
	Function_9(iParam0);
	return;
}

void Function_9(int iParam0) //Position: 0x39A / 922
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_7(90)), 0);
	return;
}

void Function_10(int iParam0) //Position: 0x3BB / 955
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(iParam0));
	return;
}

void Function_11() //Position: 0x401 / 1025
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_12(int iParam0) //Position: 0x41A / 1050
{
	int iVar0;
	
	if (!Function_21(iParam0))
	{
		Function_19();
		return;
	}
	iVar0 = Function_18(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_13("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x46D / 1133
{
	struct<4> Var0;
	
	if (!Function_21(iParam1))
	{
		return;
	}
	switch (Function_18(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_14(Function_16(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, uParam0, &Var0, Function_18(iParam1), Function_16(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, uParam0, "PROCEDURAL", Function_18(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, uParam0, "LOCATION", Function_18(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, uParam0, "MINIGAME", Function_18(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, uParam0, "ACTIONAREA_EVENT", Function_18(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, uParam0, "JOB", Function_18(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_14(int iParam0) //Position: 0x591 / 1425
{
	char* cVar0[16];
	
	if (!Function_15())
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

bool Function_15() //Position: 0x5CB / 1483
{
	if (Function_3(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_16(int iParam0) //Position: 0x5E6 / 1510
{
	if (!Function_17(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

bool Function_17(int iParam0) //Position: 0x606 / 1542
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_18(int iParam0) //Position: 0x61D / 1565
{
	if (!Function_17(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_19() //Position: 0x638 / 1592
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
			Function_20(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_20(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x87F / 2175
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_21(int iParam0) //Position: 0x8A8 / 2216
{
	if (!Function_17(iParam0))
	{
		return 0;
	}
	if (!Function_22(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_22(int iParam0) //Position: 0x8CC / 2252
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_23(int iParam0) //Position: 0x8E1 / 2273
{
	Function_24(iParam0);
	Function_8(2);
	Function_5(12);
	Function_6((15 - Function_7(105)));
	return;
}

void Function_24(int iParam0) //Position: 0x8FF / 2303
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_21(iParam0))
	{
		return;
	}
	iVar0 = Function_18(iParam0);
	if (StackVal == 2)
	{
		Function_13("nDEED_FAIL", iParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[iParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_26(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_25(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_25(int iParam0) //Position: 0x9A5 / 2469
{
	char* cVar0[16];
	
	if (!Function_15())
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

struct<24> Function_26(char* cParam0) //Position: 0x9E4 / 2532
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

void Function_27(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xC3A / 3130
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_5(12);
	Function_8(2);
	Function_6((15 - Function_7(105)));
	if (Function_18(iParam0) == 1)
	{
		iVar2 = Function_16(iParam0);
		Function_171(&(Global_3422[iVar240]));
		Function_170(4194304);
		if (bParam3)
		{
			Function_122(iVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_116(iVar2);
			}
		}
		else if (bParam4)
		{
			Function_122(iVar2, &uVar0, 0);
		}
		bVar1 = Function_115();
		if (bParam1)
		{
			Function_99(iVar2, iParam0, bVar1);
			Function_98();
		}
	}
	Function_40(iParam0, bParam1, uParam2, bVar1);
	if (Function_18(iParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_32(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_18(iParam0) == 1)
		{
			iVar2 = Function_16(iParam0);
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
	Function_28();
}

void Function_28() //Position: 0xD27 / 3367
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_29(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

int Function_29(int iParam0, bool bParam1) //Position: 0xD57 / 3415
{
	int iVar0;
	
	iVar0 = Function_30(iParam0);
	if (!Function_17(iVar0))
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

int Function_30(int iParam0) //Position: 0xD94 / 3476
{
	if (!Function_31(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_31(int iParam0) //Position: 0xDAE / 3502
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_32(int iParam0, bool bParam1) //Position: 0xDC4 / 3524
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
							Function_33(Global_34573, 0x1000000, 3, 0);
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
							Function_33(Global_34573, 0x1000000, 3, 0);
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
							Function_33(Global_34573, 0x1000000, 3, 0);
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
							Function_33(Global_34573, 0x1000000, 3, 0);
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
							Function_33(Global_34573, 0x1000000, 3, 0);
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
							Function_33(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_32(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_32(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_32(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_32(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_32(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_32(57, 0);
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

void Function_33(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10BB / 4283
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_35(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_34(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_34(char* cParam0, int iParam1) //Position: 0x1127 / 4391
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

bool Function_35(bool bParam0, var uParam1, int iParam2) //Position: 0x115E / 4446
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
		if (Function_38(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_37(uVar0))
		{
			case 0x00000002:
				if (!Function_36(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_36(var uParam0, int iParam1) //Position: 0x11D6 / 4566
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_37(char* cParam0) //Position: 0x11E9 / 4585
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

int Function_38(int iParam0) //Position: 0x128A / 4746
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_39(&bVar1, 2147483648);
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

void Function_39(bool bParam0, bool bParam1) //Position: 0x12C7 / 4807
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_40(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12DA / 4826
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_21(iParam0))
	{
		Function_19();
		return;
	}
	iVar0 = Function_18(iParam0);
	if (!iVar0 != 1)
	{
		Global_13172[iParam011].f_12++;
		if (Function_97())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", iVar0);
		}
	}
	else
	{
		Global_6269 = Function_16(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_26(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_25(Global_6269) };
		}
		if (Function_97())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_93();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_97())
	{
		Function_92();
	}
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_13("DEED_COMPLETE", iParam0);
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
			Function_86(iParam0);
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
						switch (Function_16(iParam0))
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
			Function_44(1);
			Function_42(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_41(iParam0, &Var14);
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

void Function_41(int iParam0, int iParam1) //Position: 0x152E / 5422
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_42(bool bParam0, int iParam1) //Position: 0x1568 / 5480
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_43())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

bool Function_43() //Position: 0x15AA / 5546
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_44(bool bParam0) //Position: 0x15B3 / 5555
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_75();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_45();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_39(&Global_63095, 1);
		Function_39(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_45() //Position: 0x1604 / 5636
{
	Function_73();
	Function_72();
	Function_72();
	Function_71();
	Function_71();
	Function_70();
	Function_70();
	Function_53(0);
	Function_53(0);
	if (!Function_43())
	{
		Function_50();
		Function_49();
		Function_48();
		Function_47();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_46();
	return;
}

void Function_46() //Position: 0x1656 / 5718
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

void Function_47() //Position: 0x175C / 5980
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

void Function_48() //Position: 0x178F / 6031
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

void Function_49() //Position: 0x191D / 6429
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

void Function_50() //Position: 0x1AD1 / 6865
{
	Function_51(&Global_28260, 1, 0);
	return;
}

void Function_51(int iParam0, bool bParam1, var uParam2) //Position: 0x1ADF / 6879
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	bVar0 = Function_52();
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
			iVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, iVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
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
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (iVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, iVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (iVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, iVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		iVar5 = 0;
		while (iVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[iVar5] = IS_WEAPONENUM_LOCKED(iVar5);
			iVar5++;
		}
	}
	return;
}

var Function_52() //Position: 0x1CD0 / 7376
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_53(int iParam0) //Position: 0x1CE5 / 7397
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
					iVar2 = ((Function_69((50 + iVar4)) + Function_69((183 + iVar4))) + Function_69((90 + iVar4)));
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
	Function_54(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_54(int iParam0, bool bParam1, bool bParam2) //Position: 0x1D8B / 7563
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
		Function_68(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_67(iParam0);
	if (bParam2)
	{
		Function_55(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_55(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x2026 / 8230
{
	char* cVar0;
	char* cVar1[32];
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3.28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_66(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_65(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_65(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_63(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_60(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_57(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_56(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_56() //Position: 0x2653 / 9811
{
	int iVar0;
	
	return iVar0;
}

var Function_57(int iParam0) //Position: 0x265B / 9819
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_58(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x266C / 9836
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_59(char* cParam0, char* cParam1) //Position: 0x2761 / 10081
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_60(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x277A / 10106
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_62(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_61(Function_62(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_61(int iParam0, int iParam1) //Position: 0x27DF / 10207
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_62(int iParam0, int iParam1) //Position: 0x27F1 / 10225
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_63(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2803 / 10243
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
	if (((Function_64(iParam0) != 19 || Function_64(iParam0) != 17) || Function_64(iParam0) != 10) || Function_64(iParam0) != 9)
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

int Function_64(int iParam0) //Position: 0x2933 / 10547
{
	return Global_35278[iParam020].f_48;
}

float Function_65(int iParam0) //Position: 0x2942 / 10562
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_66(int iParam0) //Position: 0x297B / 10619
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_67(int iParam0) //Position: 0x29B8 / 10680
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

int Function_68(int iParam0, float fParam1, bool bParam2) //Position: 0x2B52 / 11090
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
			Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = fParam1;
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

int Function_69(int iParam0) //Position: 0x2D96 / 11670
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
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
	while (iVar3 <= 4)
	{
		iVar2 = ((Function_69((50 + iVar3) + 15) + Function_69((183 + iVar3) + 15)) + Function_69((90 + iVar3) + 15));
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
	Function_54(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_71() //Position: 0x2E60 / 11872
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
			iVar2 = ((Function_69((50 + iVar3) + 8) + Function_69((183 + iVar3) + 8)) + Function_69((90 + iVar3) + 8));
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
	Function_54(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_72() //Position: 0x2EF7 / 12023
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
		iVar2 = ((Function_69((50 + iVar3)) + Function_69((183 + iVar3))) + Function_69((90 + iVar3)));
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
	Function_54(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_73() //Position: 0x2F76 / 12150
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_74(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_54(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_74(int iParam0, float fParam1, int iParam2) //Position: 0x2FAF / 12207
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
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + fParam1);
	Function_68(iParam0, fParam1, 1);
	Function_67(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_55(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_75() //Position: 0x31B9 / 12729
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_15())
	{
		Function_83(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_83(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_77(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_77(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_76(StackVal, StackVal, vVar0))
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

bool Function_76(vector3 vParam0) //Position: 0x3274 / 12916
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_77(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x328C / 12940
{
	int iVar0;
	
	iVar0 = Function_81(uParam2, uParam3);
	if (Function_80(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_79(&Global_63095, 1);
			Function_39(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_79(&Global_63095, 2);
			Function_39(&Global_63095, 1);
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
		Function_79(&Global_63095, 2);
		Function_39(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_78();
	return StackVal, StackVal, Function_78();
}

vector3 Function_78() //Position: 0x3373 / 13171
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_79(bool bParam0, bool bParam1) //Position: 0x337C / 13180
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_80(int iParam0) //Position: 0x338B / 13195
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_81(bool bParam0, bool bParam1) //Position: 0x33A1 / 13217
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
				fVar2 = Function_82(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_82(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_80(bVar0) && !bParam1)
	{
		bVar0 = Function_81(bParam0, 1);
	}
	return bVar0;
}

float Function_82(vector3 vParam0, vector3 vParam3) //Position: 0x3468 / 13416
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_83(var uParam0, int iParam1) //Position: 0x3485 / 13445
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_85(Global_34573, &vVar4);
	if (!Function_84(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_84(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_79(&Global_63095, 2);
	Function_39(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_76(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_84(int iParam0) //Position: 0x3CAA / 15530
{
	bool bVar0;
	
	bVar0 = Global_29008[iParam0];
	return (((Function_3(bVar0, 0x1000000) || Function_3(bVar0, 0x2000000)) || Function_3(bVar0, 0x4000000)) || !Function_3(bVar0, 0x10000000));
}

void Function_85(bool bParam0, int iParam1) //Position: 0x3CE5 / 15589
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_86(int iParam0) //Position: 0x3CF2 / 15602
{
	int iVar0;
	int iVar1;
	
	if (!Function_17(iParam0))
	{
		return;
	}
	switch (Function_18(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_16(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_91(12, 1, 0, 0);
				Function_90(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_91(13, 1, 0, 0);
				Function_90(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_91(14, 1, 0, 0);
				Function_90(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_91(15, 1, 0, 0);
				Function_90(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_91(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_16(iParam0))
			{
				case 0x00000000:
					if (Function_89(iParam0) == 1)
					{
						iVar0 = Function_88(iParam0);
						if (Function_87(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_90(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_90(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_90(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_90(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_90(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_90(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_90(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_90(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_90(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_90(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_90(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_90(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_90(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_90(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_90(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_90(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_90(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_90(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_90(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_90(4, 19);
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
								Function_91(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_91(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_91(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_88(iParam0) == 0)
			{
				if (Function_89(iParam0) == 1)
				{
					Function_91(458, 1, 0, 0);
					iVar0 = Function_16(iParam0);
					if (Function_87(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_90(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_90(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_90(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_90(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_90(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_90(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_90(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_90(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_89(iParam0) == 1)
			{
				Function_91(400, 1, 0, 0);
			}
			switch (Function_16(iParam0))
			{
				case 0x00000001:
					Function_91(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_90(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_90(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_90(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_91(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_90(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_90(6, 9);
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

bool Function_87(int iParam0) //Position: 0x41D1 / 16849
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_88(int iParam0) //Position: 0x41E7 / 16871
{
	if (!Function_17(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 4) & 255;
}

int Function_89(int iParam0) //Position: 0x4206 / 16902
{
	if (!Function_17(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_90(int iParam0, bool bParam1) //Position: 0x4220 / 16928
{
	int iVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	iVar0 = SHIFT_LEFT(true, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || iVar0);
	return;
	return;
}

int Function_91(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4287 / 17031
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
	Function_68(iParam0, TO_FLOAT(bParam1), 1);
	Function_67(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_55(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_92() //Position: 0x44A7 / 17575
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
	PLAYSTAT_INT("HC_MONEY", Function_69(0));
	PLAYSTAT_INT("HC_FAME", Function_69(3));
	PLAYSTAT_INT("HC_HONOR", Function_69(1));
	return;
}

void Function_93() //Position: 0x45FF / 17919
{
	int iVar0;
	int iVar1;
	
	if (!Function_31(Global_6269))
	{
		return;
	}
	iVar0 = Function_69(24);
	iVar1 = Function_30(Global_6269);
	if (!Function_31(iVar0) && Function_96(iVar1) < 0)
	{
		Function_54(24, Global_6269, 0);
		Function_94(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_96(Function_30(iVar0)))
	{
		Function_54(24, Global_6269, 0);
		Function_94(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_94(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x467F / 18047
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
		Function_95(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_95(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, bool bParam10) //Position: 0x49D1 / 18897
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), iParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

int Function_96(int iParam0) //Position: 0x4A54 / 19028
{
	if (!Function_21(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_97() //Position: 0x4A6E / 19054
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_98() //Position: 0x4A99 / 19097
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

void Function_99(int iParam0, int iParam1, bool bParam2) //Position: 0x4AC7 / 19143
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_31(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_114(iParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_14(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_69(42) - Global_34165.f_116);
				bVar1 = (Function_69(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_14(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_66(49)) - Global_34165.f_124);
				bVar3 = (Function_69(49) - Global_34165.f_128);
				fVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (fVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = fVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_14(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, fVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_69(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				fVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_14(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (fVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = fVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_14(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, fVar9, 1);
				}
				fVar8 = fVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_113(iParam0, iVar14, Global_34165.f_140, fVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_100(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_25(iParam0) };
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

void Function_100(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D63 / 19811
{
	int iVar0;
	bool bVar1;
	
	if (Function_112(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_97())
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
	iVar0 = Function_69(3);
	Function_109();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_107(3, bVar1);
		if (!bParam2)
		{
			if (!Function_36(Global_76848, 4))
			{
				Function_33(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_91(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_65(3));
	iVar0 = Function_69(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_102(4, Function_106(Global_12976.f_156), 1);
				Function_101(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_102(4, Function_106(Global_12976.f_156), 1);
				Function_101(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_102(4, Function_106(Global_12976.f_156), 1);
				Function_101(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_102(4, Function_106(Global_12976.f_156), 1);
				Function_101(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_102(4, Function_106(Global_12976.f_156), 1);
				Function_101(Global_12976.f_152, Global_12976.f_156);
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

void Function_101(int iParam0, int iParam1) //Position: 0x4F32 / 20274
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

int Function_102(int iParam0, char* cParam1, bool bParam2) //Position: 0x5190 / 20880
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
	Function_94(iParam0, cParam1, 0, 1);
	iVar1 = Function_103();
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

int Function_103() //Position: 0x5315 / 21269
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
	Function_104();
	return 0;
}

void Function_104() //Position: 0x53B4 / 21428
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
		Function_105(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_105(int iParam0) //Position: 0x5463 / 21603
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

var Function_106(int iParam0) //Position: 0x54C1 / 21697
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

int Function_107(int iParam0, bool bParam1) //Position: 0x5550 / 21840
{
	bool bVar0;
	int iVar1;
	
	Function_91(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_108(iParam0, 4294967295);
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
	iVar1 = Function_103();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_108(int iParam0, int iParam1) //Position: 0x56ED / 22253
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

void Function_109() //Position: 0x572E / 22318
{
	Function_111(3, 0.0f);
	Function_110(3, 10000.0f);
	return;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5744 / 22340
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_111(int iParam0, int iParam1) //Position: 0x5784 / 22404
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_112(int iParam0) //Position: 0x57C4 / 22468
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_113(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x57D3 / 22483
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

int Function_114(int iParam0) //Position: 0x599B / 22939
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

var Function_115() //Position: 0x5A30 / 23088
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_116(int iParam0) //Position: 0x5A55 / 23125
{
	if (!Function_31(iParam0))
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
			Function_100(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_100(25, 1, 0);
			Function_121(1, 1);
			break;
		
		case 0x00000015:
			Function_121(50, 1);
			Function_100(250, 1, 0);
			Function_117(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_100(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_100(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_121(50, 1);
			Function_100(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_121(5, 1);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_100(75, 1, 0);
			Function_117(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_121(5, 1);
			Function_100(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_100(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_121(25, 1);
			Function_100(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_121(10, 1);
			Function_100(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_100(50, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_100(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_100(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_117(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_121(20, 1);
			Function_100(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_121(25, 1);
			Function_100(150, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_121(10, 1);
			Function_100(150, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_100(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_117(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_117(100, 1, 0);
			Function_121(5, 1);
			break;
		
		case 0x0000000F:
			Function_121(3, 1);
			Function_100(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_117(125, 1, 0);
			Function_100(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_121(50, 1);
			Function_100(100, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_121(50, 1);
			Function_100(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_121(75, 1);
			Function_100(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_100(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_100(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_100(250, 1, 0);
			Function_117(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_100(75, 1, 0);
			Function_117(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_100(200, 1, 0);
			Function_117(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_100(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_100(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_121(50, 1);
			Function_100(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_121(100, 1);
			Function_100(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_100(200, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_100(300, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_100(300, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_100(300, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_100(500, 1, 0);
			Function_117(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_100(150, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_117(25, 1, 0);
			Function_121(100, 1);
			break;
		
		case 0x0000002A:
			Function_100(150, 1, 0);
			Function_117(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_117(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_117(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_117(150, 1, 0);
			Function_121(100, 1);
			break;
		
		case 0x00000035:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_117(150, 1, 0);
			Function_121(100, 1);
			break;
		
		case 0x00000032:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_117(int iParam0, bool bParam1, bool bParam2) //Position: 0x5F10 / 24336
{
	int iVar0;
	bool bVar1;
	
	if (Function_112(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_97())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_69(1);
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
			Function_107(1, bVar1);
			if (!bParam2)
			{
				if (!Function_36(Global_76848, 1))
				{
					Function_33(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_120(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_36(Global_76848, 2))
				{
					Function_33(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_91(1, bVar1, 0, 0);
	}
	else
	{
		Function_119(1, (4294967295 * bVar1), 0);
	}
	if (Function_69(1) <= 4294962296)
	{
		Function_54(1, 4294962296, 0);
	}
	else if (Function_69(1) >= 5000)
	{
		Function_54(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_65(1));
	iVar0 = Function_69(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_102(2, Function_118(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_102(2, Function_118(Global_12976.f_152), 0);
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
				Function_102(2, Function_118(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_102(2, Function_118(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_102(2, Function_118(Global_12976.f_152), 1);
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
				Function_102(2, Function_118(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_102(2, Function_118(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_102(2, Function_118(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_102(2, Function_118(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_102(2, Function_118(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_102(2, Function_118(Global_12976.f_152), 1);
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
				Function_102(2, Function_118(Global_12976.f_152), 0);
			}
			break;
	}
	Function_101(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_118(int iParam0) //Position: 0x6231 / 25137
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

int Function_119(int iParam0, bool bParam1, int iParam2) //Position: 0x62D4 / 25300
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
	Function_67(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_55(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_120(int iParam0, bool bParam1) //Position: 0x64CF / 25807
{
	bool bVar0;
	int iVar1;
	
	Function_119(iParam0, bParam1, 0);
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
	iVar1 = Function_108(iParam0, 4294967295);
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
	iVar1 = Function_103();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_121(bool bParam0, bool bParam1) //Position: 0x666B / 26219
{
	int iVar0;
	
	iVar0 = Function_69(0);
	if ((Function_69(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - iVar0);
	}
	if (bParam0 >= 0)
	{
		Function_91(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_69(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), iVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_91(597, bParam0, 0, 0);
	}
	if ((Function_69(597) + Function_69(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_122(int iParam0, var uParam1, bool bParam2) //Position: 0x6736 / 26422
{
	struct<4> Var0;
	
	if (!Function_31(iParam0))
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
			Function_168(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_165(Global_30640[0]);
			Function_165(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_163(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_165(Global_30668[0]);
			Function_155(0);
			Function_153(2, 1);
			Function_153(0, 1);
			Function_153(1, 1);
			break;
		
		case 0x00000003:
			Function_165(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_165(Global_30668[0]);
			Function_165(Global_30640[0]);
			Function_151(0, 1);
			Function_151(15, 1);
			Function_151(9, 1);
			Function_151(12, 1);
			Function_151(16, 1);
			Function_153(3, 1);
			break;
		
		case 0x00000005:
			Function_165(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_163(21, bParam2, 4);
			Function_165(Global_30668[0]);
			Function_153(39, 1);
			break;
		
		case 0x00000007:
			Function_165(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_165(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_150())
				{
					if (!Function_149(4))
					{
						Function_139(4, 0, 0, 1, 0);
					}
				}
			}
			Function_165(Global_30640[0]);
			Function_165(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_165(Global_30640[0]);
			Function_165(Global_30668[2]);
			Function_138(&(Global_29008[Global_30668[2]]), 32768);
			Function_137(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_163(9, bParam2, 4);
			Function_165(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_165(Global_30640[0]);
			Function_165(Global_30658[0]);
			Function_138(&(Global_29008[Global_30658[0]]), 32768);
			Function_137(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_165(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_165(Global_30640[0]);
			Function_165(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_165(Global_30640[1]);
			Function_165(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_165(Global_30679[0]);
			Function_165(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_165(Global_30658[5]);
			Function_165(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_163(21, bParam2, 4);
			Function_165(Global_30640[4]);
			Function_165(Global_30658[4]);
			Function_136(&Global_76847, 0x2000000);
			Function_136(&Global_76847, 0x4000000);
			Function_136(&Global_76847, 4096);
			Function_136(&Global_76847, 8);
			Function_136(&Global_76847, 8388608);
			Function_136(&Global_76847, 524288);
			Function_136(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_165(Global_30640[4]);
			Function_165(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_137(&(Global_29008[Global_30640[4]]), 256);
			Function_165(Global_30640[4]);
			Function_165(Global_30658[0]);
			Function_138(&(Global_29008[Global_30658[0]]), 32768);
			Function_137(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_165(Global_30640[0]);
			Function_165(Global_30640[5]);
			Function_163(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_165(Global_30658[3]);
			Function_138(&(Global_29008[Global_30658[3]]), 32768);
			Function_137(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_163(9, bParam2, 4);
			Function_165(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_138(&(Global_29008[Global_30679[1]]), 32768);
			Function_165(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_163(12, bParam2, 4);
			Function_137(&(Global_29008[Global_30679[1]]), 256);
			Function_165(Global_30668[3]);
			Function_165(Global_30693[0]);
			Function_165(Global_30685[0]);
			Function_155(4);
			Function_151(13, 1);
			Function_151(1, 1);
			Function_151(18, 1);
			Function_153(34, 1);
			Function_153(44, 1);
			Function_153(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_163(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_165(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_165(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_165(Global_30693[0]);
			Function_165(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_165(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_165(Global_30685[0]);
			Function_165(Global_30693[0]);
			Function_165(Global_30693[1]);
			Function_165(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_163(23, bParam2, 3);
			Function_151(23, 1);
			Function_165(Global_30685[0]);
			Function_165(Global_30685[2]);
			Function_138(&(Global_29008[Global_30685[2]]), 32768);
			Function_137(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_163(19, bParam2, 4);
			Function_165(Global_30685[0]);
			Function_165(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_163(24, bParam2, 3);
			Function_151(24, 1);
			Function_165(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_165(Global_30685[0]);
			Function_165(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_165(Global_30693[12]);
			Function_165(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_165(Global_30693[12]);
			Function_165(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_163(25, bParam2, 10);
			Function_165(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_165(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_165(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_163(13, bParam2, 4);
			Function_165(Global_30693[2]);
			Function_165(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_149(8))
				{
					Function_139(8, 0, 0, 1, 0);
				}
			}
			Function_165(Global_30685[0]);
			Function_155(9);
			Function_151(7, 1);
			Function_151(11, 1);
			Function_151(3, 1);
			Function_151(20, 1);
			Function_153(57, 1);
			break;
		
		case 0x0000002A:
			Function_163(2, bParam2, 4);
			Function_165(Global_30717[0]);
			Function_165(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_165(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_165(Global_30717[0]);
			Function_165(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_165(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_165(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_165(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_163(17, bParam2, 4);
			Function_165(Global_30723[0]);
			Function_165(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_134(15))
				{
					Function_129(15, 0, 1);
				}
			}
			Function_90(2, 26);
			Function_137(&(Global_29008[Global_30717[1]]), 256);
			Function_155(11);
			Function_165(Global_30717[1]);
			Function_165(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_165(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_165(Global_30717[1]);
			Function_165(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_165(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_165(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_165(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_165(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_165(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_165(Global_30717[1]);
			Function_123(11);
			Function_155(12);
			Global_16537[1121].f_40 = 0;
			Function_153(56, 1);
			if (!bParam2)
			{
				if (!Function_149(9))
				{
					Function_139(9, 0, 0, 0, 0);
				}
				if (!Function_149(10))
				{
					Function_139(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_14(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_123(int iParam0) //Position: 0x7034 / 28724
{
	bool bVar0;
	
	if (!Function_80(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_128(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_128(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), 0);
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
			Function_124(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_124(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x71A3 / 29091
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
		Function_126(Function_127(iParam2, 0.0f, iParam3));
		vVar4 = { StackVal, StackVal, Function_126(Function_127(iParam2, 0.0f, iParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_126(StackVal);
				vVar1 = { StackVal, StackVal, Function_126(StackVal) };
				if (Function_125(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_125(vector3 vParam0, vector3 vParam3) //Position: 0x72A9 / 29353
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_126(int iParam0) //Position: 0x72D6 / 29398
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

var Function_127(vector3 vParam0) //Position: 0x732D / 29485
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

void Function_128(bool bParam0, int iParam1) //Position: 0x737B / 29563
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

void Function_129(bool bParam0, bool bParam1, bool bParam2) //Position: 0x73CF / 29647
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_134(bParam0))
	{
		if (!Function_149(bParam0))
		{
			Function_139(bParam0, 1, 0, 0, 1);
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
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, 0, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_91(457, 1, 0, 0);
		Function_132(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_44(1);
				Function_42(1, 0);
			}
			else
			{
				Function_130();
			}
		}
	}
	return;
}

void Function_130() //Position: 0x756E / 30062
{
	return;
}

bool Function_131(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7574 / 30068
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

void Function_132(bool bParam0, int iParam1) //Position: 0x7618 / 30232
{
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_133(int iParam0) //Position: 0x766D / 30317
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_134(int iParam0) //Position: 0x7683 / 30339
{
	if (!Function_133(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_135(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_135(int iParam0, int iParam1) //Position: 0x76D4 / 30420
{
	int iVar0;
	
	if (!Function_133(iParam0))
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

void Function_136(var uParam0, int iParam1) //Position: 0x7701 / 30465
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7710 / 30480
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_138(var uParam0, int iParam1) //Position: 0x7727 / 30503
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_139(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7736 / 30518
{
	struct<8> Var0;
	
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_148(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_149(bParam0))
	{
		Function_91(456, 1, 0, 0);
		Function_132(bParam0, 2);
		if (bParam2)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_44(1);
				Function_42(1, 5);
			}
			else
			{
				Function_130();
			}
		}
		Function_142(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_141() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_141() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_140(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_15())
		{
			if (!Function_36(Global_76846, 2))
			{
				Function_33(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x788B / 30859
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_25(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

bool Function_141() //Position: 0x7906 / 30982
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_142(bool bParam0) //Position: 0x7933 / 31027
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[iParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[iParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[iParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[iParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, iParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_146(bParam0, Function_147(bVar24)))
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
			if (Function_146(bParam0, Function_147(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_145(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_144(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_143(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_143(int iParam0) //Position: 0x7AE3 / 31459
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_133(iParam0))
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

void Function_144(var uParam0, int iParam1) //Position: 0x7B3A / 31546
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

var Function_145(int iParam0) //Position: 0x7B5F / 31583
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_133(iParam0))
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

bool Function_146(int iParam0, bool bParam1) //Position: 0x7BB5 / 31669
{
	int iVar0;
	
	if (!Function_133(iParam0))
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

bool Function_147(bool bParam0) //Position: 0x7C14 / 31764
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_148(int iParam0) //Position: 0x7C20 / 31776
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_149(int iParam0) //Position: 0x7C3C / 31804
{
	if (!Function_133(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_135(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_150() //Position: 0x7C8E / 31886
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_3(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_151(int iParam0, int iParam1) //Position: 0x7CBE / 31934
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_152(iParam0, iParam1);
	Function_33(Global_34573, 1, 4, 1);
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7D31 / 32049
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x7D8D / 32141
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_154(iParam0, iParam1);
	Function_33(Global_34573, 1, 4, 1);
	return 1;
}

int Function_154(int iParam0, int iParam1) //Position: 0x7DFE / 32254
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_155(int iParam0) //Position: 0x7E58 / 32344
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_80(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_162(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_162(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), 1);
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
			Function_91(468, 1, 0, 0);
			Function_90(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_140("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_124(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_139(14, 1, 0, 0, 0);
				Function_156(14, 1, 0, 0, 0);
			}
			if (!Function_131(0, 0, 1, 1))
			{
				Function_44(1);
				Function_42(1, 6);
			}
			else
			{
				Function_130();
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
			Function_140("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_91(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_90(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_156(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x8113 / 33043
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_148(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_135(bParam0, 2))
	{
		Function_91(456, 1, 0, 0);
		Function_132(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_140(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_146(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_132(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_44(1);
				Function_42(1, 0);
			}
			else
			{
				Function_130();
			}
		}
		Function_142(bParam0);
		if (StackVal && !Function_3(((((!Function_141() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_3((((Function_141() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_15())
		{
			if (!Function_36(Global_76846, 2))
			{
				Function_33(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_158();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_157(3, bParam1);
				break;
			
			case 0x00000005:
				Function_157(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_157(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_157(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_157(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_157(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_90(2, 24);
				break;
			
			case 0x00000003:
				Function_90(2, 25);
				break;
			
			case 0x0000000F:
				Function_90(2, 26);
				break;
			
			case 0x0000000D:
				Function_90(2, 27);
				break;
			
			case 0x0000000E:
				Function_90(2, 28);
				break;
			}
	}
}

void Function_157(int iParam0, int iParam1) //Position: 0x83A9 / 33705
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

void Function_158() //Position: 0x8414 / 33812
{
	if (Function_133(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_161(Global_28180);
			Global_28180.f_8 = Function_159(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_161(Global_28180);
			Global_28180.f_8 = Function_159(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_159(int iParam0, int iParam1) //Position: 0x848F / 33935
{
	vector3 vVar0;
	struct<9> Var3;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	
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
					if (Function_29(6, 0) || Function_29(12, 0))
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
					if (Function_160(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_29(5, 0))
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
					if (Function_160(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_160(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_160(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_160(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_29(26, 0))
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
					if (Function_160(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_160(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_160(27) && iVar18)
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
					if (Function_160(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_160(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_160(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_160(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_29(17, 0) && iVar15)
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
					if (Function_160(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_29(6, 0) && Function_160(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_160(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_29(9, 0) && Function_160(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_160(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_29(8, 0) && iVar19)
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
	if (Function_76(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_76(StackVal, StackVal, vVar3))
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
	if (!Function_76(StackVal, StackVal, vVar3))
	{
		fVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(fVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(fVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(fVar20, 3);
		SET_BLIP_NAME(fVar20, &cVar7);
		return fVar20;
	}
	return "";
}

int Function_160(int iParam0) //Position: 0x9080 / 36992
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_161(int iParam0) //Position: 0x9095 / 37013
{
	int iVar0;
	int iVar1;
	
	if (!Function_133(iParam0))
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

void Function_162(bool bParam0, int iParam1) //Position: 0x90E4 / 37092
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

void Function_163(bool bParam0, bool bParam1, int iParam2) //Position: 0x9135 / 37173
{
	float fVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		fVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_164(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), fVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_168(bParam0, 0, 0);
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

bool Function_164(int iParam0, int iParam1) //Position: 0x91A3 / 37283
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_165(int iParam0) //Position: 0x91B6 / 37302
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_167(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_138(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_91(473, 1, 0, 0);
		iVar0 = Function_166(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_91(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_91(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_91(476, 1, 0, 0);
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
		Function_90(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_90(7, 30);
	}
	if (Function_65(473) <= Function_66(473))
	{
		if (!Function_43())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_166(int iParam0) //Position: 0x92B5 / 37557
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_87(iParam0))
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

bool Function_167(var uParam0, int iParam1) //Position: 0x930D / 37645
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_168(bool bParam0, bool bParam1, int iParam2) //Position: 0x9329 / 37673
{
	if (!Function_169(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_52(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_52(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_52(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_169(int iParam0) //Position: 0x9380 / 37760
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_170(bool bParam0) //Position: 0x9392 / 37778
{
	bool bVar0;
	
	if (Function_3(bParam0, 1) && Function_3(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_171(int iParam0) //Position: 0x93C6 / 37830
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
			Function_172(4, 0, 0);
		}
	}
	return;
}

void Function_172(int iParam0, int iParam1, int iParam2) //Position: 0x942D / 37933
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
		Function_173(Global_16524, iVar0, 1);
	}
	return;
}

void Function_173(int iParam0, int iParam1, bool bParam2) //Position: 0x9513 / 38163
{
	int iVar0;
	
	Function_175(iParam0);
	Function_10(iParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, iParam1);
	Function_174();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(iParam1), 0);
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

void Function_174() //Position: 0x968C / 38540
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_175(int iParam0) //Position: 0x9698 / 38552
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

void Function_176() //Position: 0x96DE / 38622
{
	Function_179();
	Function_178();
	if (IS_LAYOUTREF_VALID(Local_473))
	{
		Function_177();
	}
	return;
}

void Function_177() //Position: 0x96F6 / 38646
{
	Function_188(&Local_473 + 4);
	RELEASE_LAYOUT_REF(Local_473);
	return;
}

void Function_178() //Position: 0x970A / 38666
{
	Function_188(&Local_327 + 4);
	RELEASE_LAYOUT_REF(Local_327);
	return;
}

void Function_179() //Position: 0x971E / 38686
{
	Function_188(&Local_4 + 4);
	Function_188(&Local_4 + 272);
	Function_180(&Global_6298, &Global_7189, 2, 0);
	Function_180(&Global_6298, &Global_7189, 8, 0);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_180(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x974F / 38735
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_187(uParam0[iVar02], 1))
	{
		return;
	}
	if (!Function_187(uParam0[iVar02], 2))
	{
		return;
	}
	if (Function_187(uParam0[iVar02], 8))
	{
		STREAMING_EVICT_ACTOR((*uParam1)[iVar03], 4294967295);
		Function_186(uParam0[iVar02], 8);
	}
	Function_186(uParam0[iVar02], 1);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return;
	}
	Function_185(StackVal);
	if (bParam3)
	{
		Function_181(uParam0, uParam1, iParam2, 0);
	}
}

void Function_181(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x97E9 / 38889
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_184(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_183(Global_29007), Function_182(Global_29007), 0, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_187(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_187(uParam0[iParam22], 1) && !bParam3)
	{
		Function_184(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_183(Global_29007), Function_182(Global_29007), 0, 0);
	}
}

int Function_182(int iParam0) //Position: 0x9938 / 39224
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

int Function_183(bool bParam0) //Position: 0x9963 / 39267
{
	switch (bParam0)
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

void Function_184(var uParam0, int iParam1) //Position: 0x9997 / 39319
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_185(int iParam0) //Position: 0x99A6 / 39334
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(iParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(iParam0, 0);
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(iParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			DEREFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, 1);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_186(var uParam0, int iParam1) //Position: 0x9A40 / 39488
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_187(var uParam0, int iParam1) //Position: 0x9A57 / 39511
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_188(int iParam0) //Position: 0x9A73 / 39539
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_189(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_189(var uParam0, int iParam1) //Position: 0x9A99 / 39577
{
	if (Function_191(uParam0[iParam13], 4))
	{
		if (Function_191(uParam0[iParam13], 1))
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
			Function_190(uParam0[iParam13], 1);
			Function_190(uParam0[iParam13], 2);
			Function_190(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_190(var uParam0, int iParam1) //Position: 0x9BC7 / 39879
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_191(var uParam0, bool bParam1) //Position: 0x9BE1 / 39905
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_192(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9BFE / 39934
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_219());
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
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	Global_30842[2] = 0;
	if (bParam6)
	{
		HUD_ENABLE(1);
	}
	Function_218();
	CLEAR_PRINTED_OBJECTIVE();
	Function_217();
	Function_215(0);
	Function_214();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_213();
	Function_212();
	Function_218();
	ENABLE_JOURNAL_REPLAY(1);
	Function_211(1);
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
		SET_ACTOR_INVULNERABILITY(Global_34573, 0);
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
		Function_210(Global_34573);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	}
	if (IS_ACTOR_VALID(Global_34573))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	if (IS_ACTOR_VALID(Global_34573) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 0);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(Global_34573, 1.0f);
	Function_207(Global_28178);
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
	Function_206();
	Function_2(1178687);
	Function_204(33039);
	Function_203(0x218003f);
	Function_222(4194560);
	Function_202();
	Function_201();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_198(0, 1, 1);
	}
	else
	{
		Function_198(0, 1, 1);
	}
	Function_197();
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
	Function_193();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_39(&Global_12976 + 36 + 20, 16);
}

void Function_193() //Position: 0x9DF2 / 40434
{
	int iVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[StackVal], 0))
		{
			iVar0 = RAND_INT_RANGE(210, 270);
		}
		else
		{
			return;
		}
		if (Function_196() > 3)
		{
			iVar0 *= 2;
		}
		Function_194(StackVal, 0, 0, Function_7(iVar0), 0);
	}
	return;
}

void Function_194(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x9E48 / 40520
{
	int iVar0;
	
	iVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&iVar0, iParam1, iParam2, iParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], iVar0) || Function_195((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = iVar0;
	}
}

var Function_195(bool bParam0) //Position: 0x9E8E / 40590
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_196() //Position: 0x9EB3 / 40627
{
	return Global_12976.f_156;
}

void Function_197() //Position: 0x9EBE / 40638
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_137(&(Global_29008[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_198(int iParam0, bool bParam1, int iParam2) //Position: 0x9EE8 / 40680
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
		if (Function_87(Global_29006))
		{
			Function_138(&(Global_29008[Global_29006]), 131072);
			Function_137(&(Global_29008[Global_29006]), 2097152);
			Function_199(Global_29006);
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
				if (Function_167(&(Global_29008[iVar0]), 4) || Function_167(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_137(&(Global_29008[iVar0]), 2097155);
					Function_138(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_43())
			{
			}
			WAIT(0);
		}
		if (iParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(0);
	}
	return;
}

void Function_199(int iParam0) //Position: 0x9FF3 / 40947
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_200())
			{
				return;
			}
		}
		if (!Function_167(&(Global_29008[iParam0]), 2048))
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

bool Function_200() //Position: 0xA072 / 41074
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_167(&(Global_29008[iVar0]), 4) || Function_167(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_201() //Position: 0xA0DB / 41179
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

void Function_202() //Position: 0xA101 / 41217
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

void Function_203(int iParam0) //Position: 0xA127 / 41255
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_204(int iParam0) //Position: 0xA13A / 41274
{
	Function_205(&Global_28842, iParam0);
	return;
}

void Function_205(var uParam0, var uParam1) //Position: 0xA148 / 41288
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_206() //Position: 0xA163 / 41315
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, iVar0);
		}
	}
	return;
}

void Function_207(int iParam0) //Position: 0xA1D5 / 41429
{
	var uVar0;
	var uVar1;
	
	if (!Function_133(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_27774[iParam013].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_27774[iParam013].f_16, 1);
		uVar0 = GET_ACTOR_FACTION(Global_34573);
	}
	if (Global_27774[iParam013].f_12 & 2 >= 0)
	{
		Function_208(78, 1, 1);
		if (!Function_36(Global_76847, 64))
		{
			Function_33(Global_34573, 64, 2, 0);
		}
	}
	if (Global_27774[iParam013].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_27774[iParam013].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_27774[iParam013].f_16, 3);
		uVar1 = GET_ACTOR_FACTION(Global_34573);
		DECOR_SET_BOOL(Global_34573, "zMarston", 1);
		DECOR_SET_BOOL(Global_34573, "zombie", 1);
		RESET_ACTIONTREE_FOR_ACTOR(Global_34573);
	}
	if (Global_27774[iParam013].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, 1);
		ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, 1);
	}
	return;
}

int Function_208(int iParam0, bool bParam1, int iParam2) //Position: 0xA303 / 41731
{
	if (iParam0 >= 4294967295 || iParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_209(iParam0), Function_52()) == 0)
		{
			ADD_ITEM(Function_209(iParam0), Function_52(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_209(iParam0), Function_52(), iParam2);
	return 1;
}

var Function_209(int iParam0) //Position: 0xA34E / 41806
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, iParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(iParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

void Function_210(bool bParam0) //Position: 0xA43F / 42047
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

void Function_211(bool bParam0) //Position: 0xA4BB / 42171
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
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_212() //Position: 0xA52F / 42287
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

void Function_213() //Position: 0xA570 / 42352
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

void Function_214() //Position: 0xA5B1 / 42417
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_215(int iParam0) //Position: 0xA5C5 / 42437
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_216())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_216() //Position: 0xA601 / 42497
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

void Function_217() //Position: 0xA626 / 42534
{
	Global_8722 = 0.0f;
	return;
}

void Function_218() //Position: 0xA630 / 42544
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

int Function_219() //Position: 0xA65B / 42587
{
	bool bVar0;
	
	bVar0 = Function_52();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_220() //Position: 0xA675 / 42613
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_221(bool bParam0) //Position: 0xA67E / 42622
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	iVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_LAYOUT(iVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(iVar0);
	if (IS_OBJECT_VALID(bVar1))
	{
		while (IS_OBJECT_VALID(bVar1))
		{
			uVar2 = GET_BLIP_ON_OBJECT(bVar1);
			if (IS_BLIP_VALID(uVar2))
			{
				REMOVE_BLIP(uVar2);
			}
			bVar1 = OBJECT_ITERATOR_NEXT(iVar0);
		}
	}
	DESTROY_ITERATOR(iVar0);
	return;
}

void Function_222(int iParam0) //Position: 0xA6D6 / 42710
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_223() //Position: 0xA6F3 / 42739
{
	SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
	Function_172(0, 60, 0);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	Function_2(12);
	Function_204(9);
	Function_227((*&Local_4 + 984)[2]);
	Function_224(StackVal, StackVal, Function_227((*&Local_4 + 984)[2]), 1, 0);
	iLocal_864 = 976;
	while (iLocal_864 < 1007)
	{
		CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(iLocal_864);
		iLocal_864++;
	}
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1049);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1050);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1051);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1052);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1088);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1089);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1090);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1060);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1061);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1062);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1063);
	return;
}

int Function_224(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0xA787 / 42887
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_226(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
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
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_225(uVar0[0], "UseCase1"));
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
				GRINGO_ALLOW_ACTIVATION(uVar0[0], 0);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_225(uVar0[1], "UseCase1"));
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
				GRINGO_ALLOW_ACTIVATION(uVar0[1], 0);
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

var Function_225(var uParam0, int iParam1) //Position: 0xA8E8 / 43240
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(uParam0, iParam1);
}

void Function_226(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA8F5 / 43253
{
	int iVar0;
	
	iVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(iVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(iVar0), &uParam0);
		if (!Function_15())
		{
			*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
			*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
		}
		else
		{
			*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch", &uParam0, 2.0f, 0);
			*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch2", &uParam0, 2.0f, 0);
		}
	}
}

vector3 Function_227(bool bParam0) //Position: 0xAA38 / 43576
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

void Function_228(bool bParam0) //Position: 0xAA5F / 43615
{
	if (!bParam0)
	{
		ENABLE_WORLD_SECTOR("morningStar");
		ENABLE_CHILD_SECTOR("blk_barge01Props01x");
		ENABLE_CHILD_SECTOR("blk_barge01x");
		DISABLE_WORLD_SECTOR("tannersSpanBefore");
		ENABLE_WORLD_SECTOR("tannersSpanAfter");
		DISABLE_WORLD_SECTOR("unionPacific");
		DISABLE_WORLD_SECTOR("ntwinRocks");
		DISABLE_WORLD_SECTOR("hennigansRanch");
		DISABLE_CHILD_SECTOR("blk_saloon_int_01x");
		DISABLE_CHILD_SECTOR("blk_theatre_int_01x");
		DISABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
		DISABLE_CHILD_SECTOR("mor_morningStar_int_01x");
		DISABLE_CHILD_SECTOR("mor_morningStar01_int_Props01x");
		DISABLE_CHILD_SECTOR("blk_forgeMill_int_01x");
		DISABLE_CHILD_SECTOR("blk_sawMill_int_01x");
		DISABLE_CHILD_SECTOR("blk_bank_int_01x");
		DISABLE_CHILD_SECTOR("blk_gunshop_int_Props01x");
		DISABLE_CHILD_SECTOR("blk_church_int_01x");
		DISABLE_CHILD_SECTOR("blk_policeStation_int_01x");
		DISABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
		DISABLE_CHILD_SECTOR("blk_trainstation_int_01x");
		DISABLE_CHILD_SECTOR("blk_bank_int_shade_02x");
		DISABLE_CHILD_SECTOR("blk_forgeMill01_int_Props01x");
		DISABLE_CHILD_SECTOR("blk_blacksmith01x");
		DISABLE_CHILD_SECTOR("blk_blacksmith01Props01x");
		DISABLE_CHILD_SECTOR("blk_bank01x");
		DISABLE_CHILD_SECTOR("blk_bank_int_01x");
		DISABLE_CHILD_SECTOR("blk_cemetary01x");
		DISABLE_CHILD_SECTOR("blk_corral01x");
		DISABLE_CHILD_SECTOR("blk_slumHouse04x");
		DISABLE_CHILD_SECTOR("blk_slumHouse08x");
		DISABLE_CHILD_SECTOR("blk_bank_int_02x");
		DISABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
		DISABLE_CHILD_SECTOR("blk_bank01Props01x");
		DISABLE_CHILD_SECTOR("blk_bank01_int_Props01x");
		DISABLE_CHILD_SECTOR("blk_bank01_int_Props02x");
		DISABLE_CHILD_SECTOR("blk_underConstruction01x");
		DISABLE_CHILD_SECTOR("blk_underConstruction01Props01x");
		DISABLE_CHILD_SECTOR("blk_generalBuilding17x");
		DISABLE_CHILD_SECTOR("blk_generalBuilding17Props01x");
		DISABLE_CHILD_SECTOR("blk_underConstruction04x");
		DISABLE_CHILD_SECTOR("blk_underConstruction04Props01x");
		DISABLE_CHILD_SECTOR("blk_underConstruction05x");
		DISABLE_CHILD_SECTOR("blk_underConstruction05Props01x");
		DISABLE_CHILD_SECTOR("blk_alleyClotheslines01x");
		DISABLE_CHILD_SECTOR("blk_photography01x");
		DISABLE_CHILD_SECTOR("blk_photography01Props01x");
		DISABLE_CHILD_SECTOR("blk_generalBuilding07Props01x");
		DISABLE_CHILD_SECTOR("blk_generalBuilding08x");
		DISABLE_CHILD_SECTOR("blk_generalBuilding08Props01x");
		DISABLE_CHILD_SECTOR("blk_underConstruction03x");
		DISABLE_CHILD_SECTOR("blk_underConstruction03Props01x");
		DISABLE_CHILD_SECTOR("blk_slumHouse02x");
		DISABLE_CHILD_SECTOR("blk_slumHouse02Props01x");
		DISABLE_CHILD_SECTOR("blk_slumHouse04Props01x");
		DISABLE_CHILD_SECTOR("blk_slumHouse06x");
		DISABLE_CHILD_SECTOR("blk_slumHouse06Props01x");
		DISABLE_CHILD_SECTOR("blk_slumHouse07x");
		DISABLE_CHILD_SECTOR("blk_slumHouse07Props01x");
		DISABLE_CHILD_SECTOR("blk_slumHouse08Props01x");
		DISABLE_CHILD_SECTOR("blk_freightstation01Props01x");
		DISABLE_CHILD_SECTOR("blk_furnitureStore01x");
		DISABLE_CHILD_SECTOR("blk_furnitureStore01Props01x");
		DISABLE_CHILD_SECTOR("blk_barn01Props01x");
		DISABLE_CHILD_SECTOR("blk_cemetary01Props01x");
	}
	else
	{
		ENABLE_CHILD_SECTOR("morningStar");
		ENABLE_CHILD_SECTOR("blk_barge01Props01x");
		ENABLE_CHILD_SECTOR("blk_barge01x");
		ENABLE_WORLD_SECTOR("tannersSpanBefore");
		DISABLE_WORLD_SECTOR("tannersSpanAfter");
		ENABLE_WORLD_SECTOR("unionPacific");
		ENABLE_WORLD_SECTOR("ntwinRocks");
		ENABLE_WORLD_SECTOR("hennigansRanch");
		ENABLE_CHILD_SECTOR("blk_saloon_int_01x");
		ENABLE_CHILD_SECTOR("blk_theatre_int_01x");
		ENABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
		ENABLE_CHILD_SECTOR("mor_morningStar_int_01x");
		ENABLE_CHILD_SECTOR("mor_morningStar01_int_Props01x");
		ENABLE_CHILD_SECTOR("blk_forgeMill_int_01x");
		ENABLE_CHILD_SECTOR("blk_sawMill_int_01x");
		ENABLE_CHILD_SECTOR("blk_bank_int_01x");
		ENABLE_CHILD_SECTOR("blk_gunshop_int_Props01x");
		ENABLE_CHILD_SECTOR("blk_church_int_01x");
		ENABLE_CHILD_SECTOR("blk_policeStation_int_01x");
		ENABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
		ENABLE_CHILD_SECTOR("blk_trainstation_int_01x");
		ENABLE_CHILD_SECTOR("blk_bank_int_shade_02x");
		ENABLE_CHILD_SECTOR("blk_forgeMill01_int_Props01x");
		ENABLE_CHILD_SECTOR("blk_blacksmith01x");
		ENABLE_CHILD_SECTOR("blk_blacksmith01Props01x");
		ENABLE_CHILD_SECTOR("blk_bank01x");
		ENABLE_CHILD_SECTOR("blk_bank_int_01x");
		ENABLE_CHILD_SECTOR("blk_cemetary01x");
		ENABLE_CHILD_SECTOR("blk_corral01x");
		ENABLE_CHILD_SECTOR("blk_slumHouse04x");
		ENABLE_CHILD_SECTOR("blk_slumHouse08x");
		ENABLE_CHILD_SECTOR("blk_bank_int_02x");
		ENABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
		ENABLE_CHILD_SECTOR("blk_bank01Props01x");
		ENABLE_CHILD_SECTOR("blk_bank01_int_Props01x");
		ENABLE_CHILD_SECTOR("blk_bank01_int_Props02x");
		ENABLE_CHILD_SECTOR("blk_underConstruction01x");
		ENABLE_CHILD_SECTOR("blk_underConstruction01Props01x");
		ENABLE_CHILD_SECTOR("blk_generalBuilding17x");
		ENABLE_CHILD_SECTOR("blk_generalBuilding17Props01x");
		ENABLE_CHILD_SECTOR("blk_underConstruction04x");
		ENABLE_CHILD_SECTOR("blk_underConstruction04Props01x");
		ENABLE_CHILD_SECTOR("blk_underConstruction05x");
		ENABLE_CHILD_SECTOR("blk_underConstruction05Props01x");
		ENABLE_CHILD_SECTOR("blk_alleyClotheslines01x");
		ENABLE_CHILD_SECTOR("blk_photography01x");
		ENABLE_CHILD_SECTOR("blk_photography01Props01x");
		ENABLE_CHILD_SECTOR("blk_generalBuilding07Props01x");
		ENABLE_CHILD_SECTOR("blk_generalBuilding08x");
		ENABLE_CHILD_SECTOR("blk_generalBuilding08Props01x");
		ENABLE_CHILD_SECTOR("blk_underConstruction03x");
		ENABLE_CHILD_SECTOR("blk_underConstruction03Props01x");
		ENABLE_CHILD_SECTOR("blk_slumHouse02x");
		ENABLE_CHILD_SECTOR("blk_slumHouse02Props01x");
		ENABLE_CHILD_SECTOR("blk_slumHouse04Props01x");
		ENABLE_CHILD_SECTOR("blk_slumHouse06x");
		ENABLE_CHILD_SECTOR("blk_slumHouse06Props01x");
		ENABLE_CHILD_SECTOR("blk_slumHouse07x");
		ENABLE_CHILD_SECTOR("blk_slumHouse07Props01x");
		ENABLE_CHILD_SECTOR("blk_slumHouse08Props01x");
		ENABLE_CHILD_SECTOR("blk_freightstation01Props01x");
		ENABLE_CHILD_SECTOR("blk_furnitureStore01x");
		ENABLE_CHILD_SECTOR("blk_furnitureStore01Props01x");
		ENABLE_CHILD_SECTOR("blk_barn01Props01x");
		ENABLE_CHILD_SECTOR("blk_cemetary01Props01x");
		ENABLE_CHILD_SECTOR("Blk_swTrainstation_east01x");
		ENABLE_CHILD_SECTOR("Blk_watertower01x");
		ENABLE_CHILD_SECTOR("Blk_hotel01x");
		ENABLE_CHILD_SECTOR("Blk_theatre01x");
		ENABLE_CHILD_SECTOR("Blk_saloon01x");
		ENABLE_CHILD_SECTOR("Blk_cityHall01x");
		ENABLE_CHILD_SECTOR("Blk_policestation01x");
		ENABLE_CHILD_SECTOR("blk_theatre01Props01x");
		ENABLE_CHILD_SECTOR("blk_archeologist01x");
		ENABLE_CHILD_SECTOR("blk_swBlacksmith_south01x");
		ENABLE_CHILD_SECTOR("blk_generalBuilding05x");
		ENABLE_CHILD_SECTOR("blk_inn01x");
	}
	iLocal_942 = bParam0;
	return;
}

void Function_229() //Position: 0xB957 / 47447
{
	var uVar0[6];
	int iVar7;
	
	if (Function_275())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Saloon";
		uVar0[3] = "Hilltop";
		uVar0[4] = "Fort Mercer";
		uVar0[5] = "Force Stage 2 fail";
		iVar7 = Function_261(&uLocal_725, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_260(&iVar7, &bLocal_739, &iLocal_740, &Local_732))
		{
			Function_253();
			Function_252();
		}
		if (iVar7 == 0)
		{
			Function_253();
			Function_252();
			Function_251(&bLocal_851, 8);
		}
		else if (iVar7 == 1)
		{
			Function_253();
			Function_252();
			Function_249(bLocal_739);
			Function_241(StackVal, StackVal, 5, &iLocal_852, &bLocal_739, Function_250(bLocal_739), Function_249(bLocal_739), 0);
		}
		else if (iVar7 == 2)
		{
			Function_253();
			Function_252();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_739 = true;
			iLocal_740 = 0;
			Local_732 = 1000;
		}
		else if (iVar7 == 3)
		{
			Function_253();
			Function_252();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_739 = 2;
			iLocal_740 = 0;
			Local_732 = 1000;
		}
		else if (iVar7 == 4)
		{
			Function_253();
			Function_252();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_739 = 101;
			iLocal_740 = 0;
			Local_732 = 1000;
		}
		else if (iVar7 == 5)
		{
			Function_253();
			Function_252();
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_739 = true;
			iLocal_740 = 0;
			Local_732 = 1000;
			Function_239(bLocal_739);
			Function_230(StackVal, StackVal, Function_239(bLocal_739), bLocal_739, Global_30628[3], Function_238(bLocal_739), 0);
			iLocal_852 = 1;
		}
	}
	return;
}

void Function_230(vector3 vParam0, bool bParam3, var uParam4, int iParam5, int iParam6) //Position: 0xBAF0 / 47856
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
	if (bParam3 != Global_34165.f_48 && !Function_237())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_236(0);
	Function_235();
	Global_34165.f_48 = bParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	if (Function_97())
	{
		Function_233(bParam3);
	}
	Function_232(uParam4, iVar0, iVar1);
	Function_231();
}

void Function_231() //Position: 0xBB98 / 48024
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

void Function_232(int iParam0, bool bParam1, bool bParam2) //Position: 0xBBD9 / 48089
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
	if (Function_87(Global_29005))
	{
	}
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_45();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_233(int iParam0) //Position: 0xBD3F / 48447
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_234() };
	PLAYSTAT_STRING("HC_MISSION_NAME", &Var0);
	PLAYSTAT_INT("HC_MISSION_STAGE", uParam0);
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
	PLAYSTAT_INT("HC_MONEY", Function_69(0));
	PLAYSTAT_INT("HC_FAME", Function_69(3));
	PLAYSTAT_INT("HC_HONOR", Function_69(1));
	return;
}

struct<16> Function_234() //Position: 0xBECD / 48845
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 <= Global_3422)
	{
		if (IS_SCRIPT_VALID(Global_3422[iVar040].f_108))
		{
			Var1 = { StackVal, StackVal, StackVal, *(&Global_3422[iVar040] + 12) };
			return StackVal, StackVal, StackVal, Var1;
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, Var1;
}

void Function_235() //Position: 0xBF12 / 48914
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_236(bool bParam0) //Position: 0xBF36 / 48950
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

bool Function_237() //Position: 0xBF65 / 48997
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

int Function_238(bool bParam0) //Position: 0xBF80 / 49024
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 848)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 848)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 848)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 848)[0]);
			break;
	}
	return GET_OBJECT_HEADING((*&Local_4 + 932)[0]);
}

vector3 Function_239(bool bParam0) //Position: 0xBFE6 / 49126
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_227((*&Local_4 + 848)[0]);
			return StackVal, StackVal, Function_227((*&Local_4 + 848)[0]);
			break;
		
		case 0x00000001:
			Function_227((*&Local_4 + 848)[0]);
			return StackVal, StackVal, Function_227((*&Local_4 + 848)[0]);
			break;
		
		case 0x00000002:
			Function_227((*&Local_4 + 848)[0]);
			return StackVal, StackVal, Function_227((*&Local_4 + 848)[0]);
			break;
		
		case 0x00000065:
			Function_227((*&Local_4 + 848)[1]);
			return StackVal, StackVal, Function_227((*&Local_4 + 848)[1]);
			break;
	}
	Function_227((*&Local_4 + 848)[0]);
	return StackVal, StackVal, Function_227((*&Local_4 + 848)[0]);
}

void Function_240(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC065 / 49253
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

void Function_241(int iParam0, bool bParam1, bool bParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xC08E / 49294
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*bParam2 != 100)
	{
		Function_246(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_242(iParam0);
		*bParam1 = 1;
		*bParam2 = 100;
	}
}

void Function_242(int iParam0) //Position: 0xC0CB / 49355
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_245("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_244(2) || Function_244(8)) || Function_244(9)) || Function_244(10))
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
		Function_245("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_245("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_245("");
	}
	else if (iParam0 == 8)
	{
		Function_243();
		Function_11();
	}
	else if (iParam0 == 4)
	{
		Function_243();
	}
	return;
}

void Function_243() //Position: 0xC1C2 / 49602
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_244(int iParam0) //Position: 0xC1CE / 49614
{
	int iVar0;
	
	if (!Function_31(iParam0))
	{
		return 0;
	}
	iVar0 = Function_30(iParam0);
	if (!Function_21(Function_30(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_245(char* cParam0) //Position: 0xC204 / 49668
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(cParam0);
	PRINTNL();
	strcpy(&Global_6272, cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_246(vector3 vParam0, var uParam3, var uParam4) //Position: 0xC26E / 49774
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_248(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_247(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_247(int iParam0) //Position: 0xC2F1 / 49905
{
	if (!Function_87(iParam0))
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

var Function_248(vector3 vParam0, bool bParam3) //Position: 0xC79F / 51103
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

vector3 Function_249(bool bParam0) //Position: 0xC80A / 51210
{
	Function_239(bParam0 + 1);
	return StackVal, StackVal, Function_239(bParam0 + 1);
}

int Function_250(bool bParam0) //Position: 0xC817 / 51223
{
	return Function_238(bParam0 + 1);
}

void Function_251(bool bParam0, int iParam1) //Position: 0xC824 / 51236
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_242(iParam1);
	*bParam0 = 1;
	return;
}

void Function_252() //Position: 0xC847 / 51271
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_253() //Position: 0xC85C / 51292
{
	Function_255();
	Function_254(10, 3);
	return;
}

void Function_254(int iParam0, int iParam1) //Position: 0xC86B / 51307
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

void Function_255() //Position: 0xC9A2 / 51618
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_259())
	{
		Function_258(10, 3);
	}
	else
	{
		Function_256();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_52(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_52());
	UI_POP("nDebugMenu");
	return;
}

void Function_256() //Position: 0xC9ED / 51693
{
	Function_257(25, 2);
	return;
}

void Function_257(int iParam0, int iParam1) //Position: 0xC9F9 / 51705
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

void Function_258(int iParam0, int iParam1) //Position: 0xCBF7 / 52215
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

bool Function_259() //Position: 0xCD2E / 52526
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
				if (!Function_3(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_260(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xCD95 / 52629
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_253();
			Function_252();
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
		Function_245("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_261(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xCE3B / 52795
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_274(&Var15, &Var0);
	uVar20 = Function_273(*uParam1, &Var15);
	Function_272(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_271(uParam0, uVar20);
	Function_269(StackVal, uParam0, Var15.f_12);
	Function_267(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_266(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_263(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_262(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_262(int iParam0, int iParam1, int iParam2) //Position: 0xCF02 / 52994
{
	var uVar0;
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
			uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(uVar0))
			{
				GUI_SET_TEXT(uVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_263(var uParam0, bool bParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xCF5E / 53086
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
				Function_265(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
				bParam1->f_32++;
				if ((IS_BUTTON_PRESSED(uParam2->f_12, iParam3, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, iParam3, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam5))
				{
					uParam2->f_24 = iParam3;
					return 1;
				}
				if ((IS_BUTTON_PRESSED(uParam2->f_12, iParam4, 1, 0) || IS_BUTTON_PRESSED(uParam2->f_16, iParam4, 1, 0)) || IS_DEBUGKEY_PRESSED(iParam6))
				{
					uParam2->f_24 = iParam4;
					return 1;
				}
			}
			Function_265(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_262(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_264(bParam1->f_32);
	}
	else
	{
		Function_264(bParam1->f_32);
	}
	return 0;
}

void Function_264(bool bParam0) //Position: 0xD0E4 / 53476
{
	var uVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	uVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(uVar0))
	{
		GUI_SET_TEXT(uVar0, " ");
	}
	return;
}

void Function_265(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xD11E / 53534
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
		uVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
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
	GUI_SET_TEXT(uVar4, &cVar13);
	GUI_SET_TEXT_COLOR(uVar4, &Var5);
}

var Function_266(int iParam0, var uParam1, int iParam2) //Position: 0xD1CC / 53708
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_267(var uParam0, int iParam1, int iParam2) //Position: 0xD1F0 / 53744
{
	switch (Function_268())
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

int Function_268() //Position: 0xD28C / 53900
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

void Function_269(var uParam0, int iParam1, int iParam2) //Position: 0xD2C8 / 53960
{
	switch (Function_270(uParam0))
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

int Function_270(bool bParam0) //Position: 0xD360 / 54112
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_52()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 12, 1, 0))
	{
		if (!Function_3(*bParam0, 0x40000000))
		{
			Function_79(bParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 14, 1, 0))
	{
		if (!Function_3(*bParam0, 0x40000000))
		{
			Function_79(bParam0, 0x40000000);
			return 2;
		}
	}
	Function_39(bParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_52()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 15, 1, 0))
	{
		if (!Function_3(*bParam0, 0x20000000))
		{
			Function_79(bParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(bParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(bParam0->f_16, 13, 1, 0))
	{
		if (!Function_3(*bParam0, 0x20000000))
		{
			Function_79(bParam0, 0x20000000);
			return 4;
		}
	}
	Function_39(bParam0, 0x20000000);
	return 0;
}

var Function_271(var uParam0, int iParam1) //Position: 0xD4AB / 54443
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

void Function_272(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xD5FA / 54778
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
		uVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(uVar4, uParam0);
	GUI_SET_TEXT_COLOR(uVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(uVar4, 1);
}

var Function_273(int iParam0, int iParam1) //Position: 0xD68D / 54925
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_274(var uParam0, var uParam1) //Position: 0xD6A7 / 54951
{
	uParam1->f_36 = 100.0f;
	uParam1->f_40 = 110.0f;
	uParam1->f_44 = 1.0f;
	uParam1->f_48 = 1.0f;
	uParam1->f_52 = 1.0f;
	uParam1->f_56 = 1.6f;
	uParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_275() //Position: 0xD6F5 / 55029
{
	return Global_30920;
}

bool Function_276() //Position: 0xD6FE / 55038
{
	if (IS_EXITFLAG_SET())
	{
		Function_249(bLocal_739);
		Function_241(StackVal, StackVal, 4, &iLocal_852, &bLocal_739, Function_250(bLocal_739), Function_249(bLocal_739), 0);
		return 0;
	}
	Function_572(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_511, bLocal_739, iLocal_740, &bLocal_853, &bLocal_851, &iLocal_852);
	if (bLocal_739 == 99 && bLocal_739 == 100)
	{
		if (Function_571(Global_30640[0]))
		{
			Function_570();
		}
		if (!SQUAD_IS_VALID(Local_4.f_560))
		{
			if (bLocal_739 != 0 || bLocal_739 != 1)
			{
				if (IS_OBJECT_VALID(TRAIN_GET_CAR(iLocal_943, 0)))
				{
					if (Function_569(TRAIN_GET_CAR(iLocal_943, 0)))
					{
						Function_568();
					}
				}
			}
		}
		else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO((*&Local_4 + 548)[02])))
		{
			SNAP_ACTOR_TO_GRINGO((*&Local_4 + 548)[02], Local_473.f_140, "UseCase1", 1, 0, 0);
			TASK_USE_GRINGO((*&Local_4 + 548)[02], GET_GRINGO_FROM_OBJECT(Local_473.f_140), "UseCase1", 1, 1);
		}
		if (Function_548(&Local_783, &uLocal_743, &uLocal_835, iLocal_741, uLocal_742))
		{
			if (Function_546(&uLocal_835))
			{
				Function_249(bLocal_739);
				Function_241(StackVal, StackVal, 5, &iLocal_852, &bLocal_739, Function_250(bLocal_739), Function_249(bLocal_739), 0);
				return 1;
			}
		}
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_249(bLocal_739);
			Function_241(StackVal, StackVal, 1, &iLocal_852, &bLocal_739, Function_250(bLocal_739), Function_249(bLocal_739), 0);
			return 1;
		}
		if (Global_3403 || Global_3404)
		{
			Function_249(bLocal_739);
			Function_241(StackVal, StackVal, 2, &iLocal_852, &bLocal_739, Function_250(bLocal_739), Function_249(bLocal_739), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(bLocal_904))
		{
			Function_245("INTRO01_COMPANION_DEAD");
			Function_249(bLocal_739);
			Function_241(StackVal, StackVal, 5, &iLocal_852, &bLocal_739, Function_250(bLocal_739), Function_249(bLocal_739), 0);
			return 1;
		}
		Function_545();
	}
	switch (bLocal_739)
	{
		case 0x00000063:
			Function_481();
			break;
		
		case 0x00000000:
			Function_453();
			break;
		
		case 0x00000001:
			Function_365();
			break;
		
		case 0x00000002:
			Function_317();
			break;
		
		case 0x00000065:
			Function_280();
			break;
		
		case 0x00000064:
			if (Function_279(&iLocal_852))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_278(&bLocal_739, &iLocal_740, &Local_732))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_851)
	{
		Function_251(&bLocal_851, 8);
		Function_1();
		return 0;
	}
	if (iLocal_852 && bLocal_739 == 100)
	{
		Function_249(bLocal_739);
		Function_241(StackVal, StackVal, 5, &iLocal_852, &bLocal_739, Function_250(bLocal_739), Function_249(bLocal_739), 0);
	}
	if (bLocal_853)
	{
		Function_277(&bLocal_853, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_277(var uParam0, int iParam1) //Position: 0xD95E / 55646
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_242(iParam1);
	*uParam0 = 1;
	return;
}

bool Function_278(var uParam0, var uParam1, int iParam2) //Position: 0xD981 / 55681
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

bool Function_279(int iParam0) //Position: 0xD9C1 / 55745
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_280() //Position: 0xD9D4 / 55764
{
	switch (iLocal_740)
	{
		case 0x00000000:
			Function_313(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
			if (HUD_IS_FADED())
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_227((*&Local_4 + 932)[1]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 932)[1]) };
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_915, GET_OBJECT_HEADING((*&Local_4 + 932)[1]), 1, 1, 1);
				iLocal_740 = 1;
			}
			else
			{
				iLocal_740 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_571(Global_30679[1]))
			{
				iLocal_740 = 2;
			}
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			iLocal_740 = 3;
			break;
		
		case 0x00000003:
			if (Function_281("$/cutscene/INTRO_B_seq/INTRO_B_seq", &Local_732, &Local_511, &bLocal_739, 60847, 60748, 60058, 59236, 58976, 58969, 0, 1, 1, 2, 2, 0, 1))
			{
				if (!HUD_IS_FADED() && !HUD_IS_FADING())
				{
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				iLocal_740 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADED() && !HUD_IS_FADING())
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			if (HUD_IS_FADED())
			{
				bLocal_851 = true;
			}
			break;
	}
	return;
}

bool Function_281(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xDB0E / 56078
{
	if (!bParam15)
	{
		Function_296(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*bParam3 != 99 && (Function_295(iParam2) || iParam2->f_24 < 1))
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
				Function_293(iParam1 + 4);
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
						Function_293(iParam1 + 4);
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
						PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0.1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_291(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_293(iParam1 + 4);
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
							HUD_ENABLE(1);
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
			if ((HUD_IS_FADED() && *bParam3 == 99) && !Function_295(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_282(int iParam0) //Position: 0xE122 / 57634
{
	iParam0 = iParam0;
	HUD_ENABLE(iParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_206();
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

void Function_283() //Position: 0xE1D1 / 57809
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_284();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	return;
}

void Function_284() //Position: 0xE216 / 57878
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_285(float fParam0) //Position: 0xE228 / 57896
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(fParam0, 1065353216);
		}
	}
	return;
}

void Function_286(bool bParam0, bool bParam1) //Position: 0xE245 / 57925
{
	int iVar0;
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
	iVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_56(), bParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(bParam0, iVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(iVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, iVar0);
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
	DESTROY_OBJECTSET(iVar0);
	return;
}

bool Function_287(bool bParam0) //Position: 0xE2C5 / 58053
{
	int iVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0) == bParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

float Function_288(int iParam0) //Position: 0xE2F4 / 58100
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

bool Function_289(int iParam0) //Position: 0xE3BC / 58300
{
	return Function_3(*iParam0, 2);
}

bool Function_290(int iParam0) //Position: 0xE3C9 / 58313
{
	return Function_3(*iParam0, 1);
}

int Function_291(bool bParam0) //Position: 0xE3D6 / 58326
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (bParam0)
				{
					if (!DECOR_CHECK_EXIST(bVar1, "refdbycutscene"))
					{
						REFERENCE_ACTOR(bVar1);
						DECOR_SET_BOOL(bVar1, "refdbycutscene", 1);
					}
					if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(bVar1)))
					{
						SET_MOST_RECENT_MOUNT(bVar1, 0);
					}
				}
				else if (DECOR_CHECK_EXIST(bVar1, "refdbycutscene"))
				{
					DEREFERENCE_ACTOR(bVar1);
					DECOR_REMOVE(bVar1, "refdbycutscene");
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool Function_292() //Position: 0xE48E / 58510
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		bVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_ALIVE(bVar1))
			{
				return 0;
			}
		}
		return 0;
		iVar0++;
	}
	return 1;
}

void Function_293(int iParam0) //Position: 0xE4C8 / 58568
{
	Function_294(iParam0, 0.0f);
	return;
}

void Function_294(int iParam0, float fParam1) //Position: 0xE4D4 / 58580
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_79(iParam0, 1);
	Function_39(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

bool Function_295(int iParam0) //Position: 0xE4F5 / 58613
{
	return iParam0->f_20;
}

void Function_296(var uParam0, bool bParam1) //Position: 0xE4FF / 58623
{
	Function_297(uParam0, bParam1, 0);
	return;
}

void Function_297(var uParam0, bool bParam1, bool bParam2) //Position: 0xE50D / 58637
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
			Function_240(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_91(20, 1, 0, 0);
		*uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1.5f)
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
						Function_240(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
					}
					else if (!HUD_IS_FADED())
					{
						if (!HUD_IS_FADING())
						{
							HUD_FADE_TO_LOADING_SCREEN();
						}
					}
				}
				Function_91(20, 1, 0, 0);
				*uParam0 = 1105;
			}
		}
	}
	return;
}

int Function_298() //Position: 0xE659 / 58969
{
	return 1;
}

int Function_299() //Position: 0xE660 / 58976
{
	Function_300(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

void Function_300(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xE674 / 58996
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
		bVar0 = Function_52();
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
			if (Function_43())
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
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_91(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_252();
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
	Function_282(iParam9);
}

int Function_301() //Position: 0xE764 / 59236
{
	switch (bLocal_739)
	{
		case 0x00000063:
			TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2208.86f, 16.5063f, 2605.4f, 276.8049f, 1, 1, 1);
			CAMERA_RESET(0);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			iLocal_864 = 4;
			while (iLocal_864 < 5)
			{
				ACTOR_POP_NEXT_GAIT((*&Local_327 + 92)[iLocal_8642], 1, 0);
				AI_ACTOR_FORCE_SPEED((*&Local_327 + 92)[iLocal_8642], 1);
				iLocal_864++;
			}
			return 1;
			break;
		
		case 0x00000000:
			RESET_ANIM_SET_FOR_ACTOR(bLocal_908, 1);
			Function_227((*&Local_4 + 848)[7]);
			TELEPORT_ACTOR_WITH_HEADING(bLocal_908, Function_227((*&Local_4 + 848)[7]), GET_OBJECT_HEADING((*&Local_4 + 848)[7]), 1, 1, 1);
			Function_227((*&Local_4 + 1120)[0]);
			vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1120)[0]) };
			iLocal_944 = LOCATE_GRINGO_OF_TYPE("lie_sleep_on_bed_l", &vLocal_915, 1.0f, 1);
			if (IS_GRINGO_VALID(iLocal_944))
			{
				TASK_USE_GRINGO(bLocal_908, iLocal_944, "usecase1", 4294967295, 1);
			}
			ACTOR_POP_NEXT_GAIT(bLocal_908, 1, 0);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_908, 1);
			iLocal_1174 = 1;
			Function_227((*&Local_4 + 848)[4]);
			TELEPORT_ACTOR_WITH_HEADING(Global_34573, Function_227((*&Local_4 + 848)[4]), GET_OBJECT_HEADING((*&Local_4 + 848)[4]), 1, 1, 1);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1.0f, 0);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_911, 1);
			TELEPORT_ACTOR_WITH_HEADING(bLocal_911, -2181.611f, 16.4f, 2608.968f, 0.0f, 1, 1, 1);
			TASK_WANDER_IN_VOLUME(bLocal_911, (*&Local_4 + 784)[1], 3212836864);
			SET_ACTOR_DRUNK(bLocal_911, 1);
			iLocal_1177 = 2;
			if (IS_PHYSINST_VALID(uLocal_866))
			{
				SHOW_PHYSINST(uLocal_866);
			}
			if (IS_PHYSINST_VALID(uLocal_867))
			{
				SHOW_PHYSINST(uLocal_867);
			}
			Function_227((*&Local_4 + 848)[5]);
			TELEPORT_ACTOR_WITH_HEADING(bLocal_904, Function_227((*&Local_4 + 848)[5]), GET_OBJECT_HEADING((*&Local_4 + 848)[5]), 1, 1, 1);
			SET_ACTOR_MAX_SPEED(bLocal_904, 1);
			iLocal_864 = TASK_SEQUENCE_OPEN();
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_904, (*&Local_4 + 812)[5], 1, 1);
			AI_SET_NAV_SUBGRID_CELL_SIZE(bLocal_904, 0.5f);
			GET_PATH_POINT(Local_4.f_1288, 0, &vLocal_915);
			TASK_GO_NEAR_OBJECT(0, (*&Local_4 + 952)[1], 1.0f, 1, 1, 0);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1288, 1, 0, 0, 1, 0);
			TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_904, iLocal_864);
			TASK_SEQUENCE_RELEASE(iLocal_864, 1);
			ACTOR_POP_NEXT_GAIT(bLocal_904, 1, 0);
			SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(17, 30, 0));
			return 1;
			break;
		
		case 0x00000002:
			Function_227((*&Local_4 + 904)[3]);
			Function_302(StackVal, StackVal, bLocal_904, Function_227((*&Local_4 + 904)[3]), GET_OBJECT_HEADING((*&Local_4 + 904)[3]), 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			return 1;
			break;
	}
	return 1;
}

void Function_302(bool bParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7) //Position: 0xE9E1 / 59873
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, fParam4, iParam5, iParam6, iParam7);
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
				TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, fParam4, iParam5, iParam6, iParam7);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(bParam0, vParam1, fParam4, iParam5, iParam6, iParam7);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

int Function_303() //Position: 0xEA9A / 60058
{
	switch (bLocal_739)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME(bLocal_911, (*&Local_4 + 800)[0]) && !DECOR_CHECK_EXIST(bLocal_911, "cs01hidden"))
			{
				TELEPORT_ACTOR_WITH_HEADING(bLocal_911, -2181.611f, 16.4f, 2608.968f, GET_OBJECT_HEADING((*&Local_4 + 1196)[0]), 1, 1, 1);
				CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_911);
				DECOR_SET_BOOL(bLocal_911, "cs01hidden", 1);
			}
			if (!DECOR_CHECK_EXIST(bLocal_510, "hideswingingdoors"))
			{
				if (IS_PHYSINST_VALID(uLocal_866))
				{
					HIDE_PHYSINST(uLocal_866);
				}
				if (IS_PHYSINST_VALID(uLocal_867))
				{
					HIDE_PHYSINST(uLocal_867);
				}
				DECOR_SET_BOOL(bLocal_510, "hideswingingdoors", 1);
			}
			return 1;
			break;
		
		case 0x00000002:
			if (!DECOR_CHECK_EXIST(bLocal_510, "cs03pastoral"))
			{
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				DECOR_SET_BOOL(bLocal_510, "cs03pastoral", 1);
			}
			return 1;
			break;
		
		case 0x00000065:
			if (IS_ACTOR_VALID((*&Local_4 + 636)[02]))
			{
				if (!DECOR_CHECK_EXIST(bLocal_510, "lastcutscenefade"))
				{
					if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
					{
						AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
						if (IS_ACTOR_VALID((*&Local_4 + 636)[02]))
						{
							CUTSCENE_MANAGER_SHOW_ACTOR((*&Local_4 + 636)[02]);
						}
						Function_252();
						SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(6, 0, 0));
						ACTOR_RESET_ANIMS((*&Local_4 + 636)[02], 1);
						SNAP_ACTOR_TO_GRINGO((*&Local_4 + 636)[02], Local_4.f_1280, "UseCase1", 0, 1, 0);
						TASK_USE_GRINGO((*&Local_4 + 636)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_1280), "UseCase1", 1, 1);
						DECOR_SET_FLOAT(bLocal_510, "lastcutscenefade", GET_CURRENT_GAME_TIME());
						CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
					}
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_510, "lastcutscenefade")) < 20.0f)
				{
					CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_4 + 636)[02]);
					DESTROY_ACTOR((*&Local_4 + 636)[02]);
					DECOR_REMOVE(bLocal_510, "lastcutscenefade");
				}
			}
			if (IS_ACTOR_VALID(bLocal_905))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_905);
				DESTROY_ACTOR(bLocal_905);
			}
			if (!DECOR_CHECK_EXIST(bLocal_510, "hidevulture"))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_4 + 636)[02]);
				DECOR_SET_BOOL(bLocal_510, "hidevulture", 1);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_304() //Position: 0xED4C / 60748
{
	switch (bLocal_739)
	{
		case 0x00000000:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0f, 0);
			return 1;
			break;
		
		case 0x00000002:
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(-2612.067f, 73.87f, 3355.972f, -2.979f, -175.569f, 0.0f);
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0f, 0);
			return 1;
			break;
		
		case 0x00000065:
			CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_4 + 636)[02]);
			return 1;
			break;
	}
	return 1;
}

int Function_305() //Position: 0xEDAF / 60847
{
	Function_309(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	switch (bLocal_739)
	{
		case 0x00000000:
			Function_227((*&Local_4 + 848)[1]);
			Function_307(StackVal, StackVal, bLocal_510, Function_227((*&Local_4 + 848)[1]), &Local_4 + 736[3], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000002:
			Function_227((*&Local_4 + 904)[0]);
			Function_307(StackVal, StackVal, bLocal_510, Function_227((*&Local_4 + 904)[0]), &Local_4 + 760[0], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_227((*&Local_4 + 932)[1]);
			Function_307(StackVal, StackVal, bLocal_510, Function_227((*&Local_4 + 932)[1]), &Local_4 + 760[0], 0, 0, 0, 0, 1, 1);
			Function_306();
			SET_MOVER_FROZEN((*&Local_4 + 636)[02], 1);
			return 1;
			break;
		
		default:
			Function_309(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			break;
	}
	return 1;
}

void Function_306() //Position: 0xEE6C / 61036
{
	Local_4.f_648 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "Vulturesset", 0);
	(*&Local_4 + 636)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nVulture01", 1128, -2612.571f, 71.86781f, 3385.739f, 0.0f, 79.95864f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_648, (*&Local_4 + 636)[02]);
	TASK_STAND_STILL((*&Local_4 + 636)[02], -1.0f, 0, 0);
	return;
}

void Function_307(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0xEEDC / 61148
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
				Function_308(bVar1, bParam0);
			}
		}
		if (!Function_76(StackVal, StackVal, vVar2))
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

void Function_308(bool bParam0, bool bParam1) //Position: 0xF14A / 61770
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(bParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(bParam0);
	iVar2 = 0;
	while (iVar2 <= iVar0)
	{
		bVar4 = GET_DRAFT_ACTOR(iVar2, bParam0);
		if (IS_ACTOR_VALID(bVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(bVar4, bParam1);
		}
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 <= iVar1)
	{
		bVar5 = GET_ACTOR_IN_VEHICLE_SEAT(bParam0, iVar3);
		if (IS_ACTOR_VALID(bVar5))
		{
			if (!IS_ACTOR_PLAYER(bVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(bVar5, bParam1);
			}
		}
		iVar3++;
	}
	return;
}

void Function_309(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0xF1BF / 61887
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
	HUD_ENABLE(0);
	Function_252();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_52();
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
			if (Function_43())
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
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
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
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
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
				Function_312(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_56(), 2, Function_312(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_91(19, 1, 0, 0);
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
	if (iParam10 && !Function_15())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_311()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_311()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, 1);
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
	if (Function_310(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_170(0x4000000);
	}
	if (Function_310(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_170(0x8000000);
	}
}

bool Function_310(int iParam0) //Position: 0xF46D / 62573
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_311() //Position: 0xF489 / 62601
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		iVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(iVar1);
		ITERATE_ON_OBJECT_TYPE(iVar1, 42);
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
				bVar2 = OBJECT_ITERATOR_NEXT(iVar1);
			}
		}
		DESTROY_ITERATOR(iVar1);
	}
	return "";
}

vector3 Function_312(bool bParam0) //Position: 0xF508 / 62728
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_313(bool bParam0) //Position: 0xF519 / 62745
{
	Function_314(0, 0x40400000);
	Function_213();
	Function_212();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_314(float fParam0, float fParam1) //Position: 0xF54D / 62797
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
		{
			TASK_CLEAR(Global_12976.f_36);
		}
		if (fParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, 1);
			TASK_STAND_STILL(Global_12976.f_36, fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	Function_316();
	Function_315();
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

void Function_315() //Position: 0xF64B / 63051
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_316() //Position: 0xF67D / 63101
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

void Function_317() //Position: 0xF77A / 63354
{
	if (iLocal_740 < 5 && iLocal_740 > 105)
	{
		Function_364(18, 15, 0, 23, 59, 59);
		Function_363();
		Function_362();
		Function_349();
		if (Function_346(Global_34573, bLocal_904, 30.0f))
		{
			Function_344();
		}
	}
	switch (iLocal_740)
	{
		case 0x00000000:
			if (Function_342())
			{
				if (!iLocal_840[1])
				{
					iLocal_740 = 1;
				}
				else
				{
					iLocal_740 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_335())
				{
					Function_333();
					iLocal_740 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_330())
			{
				if (Function_328(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_511, bLocal_739))
				{
					iLocal_740 = 3;
				}
				else
				{
					iLocal_740 = 4;
				}
				Function_239(bLocal_739);
				Function_230(StackVal, StackVal, Function_239(bLocal_739), bLocal_739, Global_30628[3], Function_238(bLocal_739), 2);
			}
			break;
		
		case 0x00000003:
			if (Function_281("$/cutscene/intro01_cs02/intro01_cs02", &Local_732, &Local_511, &bLocal_739, 60847, 60748, 60058, 59236, 66500, 58969, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_740 = 4;
			}
			break;
		
		case 0x00000004:
			Function_285(1.0f);
			Function_165(Global_30679[1]);
			Function_326(&(Local_783[217]));
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			HUD_ENABLE(1);
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_904)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_904));
			}
			iLocal_740 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADED())
			{
				iLocal_1188 = 0;
				iLocal_1187 = 0;
				iLocal_740 = 7;
			}
			break;
		
		case 0x00000007:
			Function_227((*&Local_4 + 904)[2]);
			Function_318(StackVal, StackVal, "$/cutscene/INTRO_B_seq/INTRO_B_seq", &uLocal_855, Function_227((*&Local_4 + 904)[2]), 64897, 0, 100.0f, 150.0f, 2, 2, 1, 2, 0, 1);
			if (iLocal_931 == 1)
			{
				Function_293(&iLocal_877);
				iLocal_740 = 106;
			}
			break;
		
		case 0x0000006A:
			if (GET_TASK_STATUS(Global_34573, 12) != 1)
			{
				Function_293(&iLocal_877);
			}
			if (Function_288(&iLocal_877) < 0.5f || !IS_ACTOR_RIDING(Global_34573))
			{
				RESET_ACTOR_GAITS(GET_MOST_RECENT_MOUNT(Global_34573), 1);
				Function_326(&(Local_783[217]));
				iLocal_840[2] = 1;
				bLocal_739 = 101;
				iLocal_740 = 2;
			}
			break;
	}
	return;
}

bool Function_318(bool bParam0, var uParam1, vector3 vParam2, int iParam5, bool bParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14) //Position: 0xF9C4 / 63940
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_319(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_321()) * (fParam8 - fParam7)) * 0.5f))) || bParam13)
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
				if (!Function_76(StackVal, StackVal, vVar16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&vVar19, (360.0f / 6.28f));
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
	else if ((!Function_319(StackVal, StackVal, Global_34573, vParam2, (fParam8 + ((IntToFloat(Function_321()) * (fParam8 - fParam7)) * 0.5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam13)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_319(StackVal, StackVal, Global_34573, vParam2, fParam7))
	{
	}
	return 0;
}

bool Function_319(bool bParam0, vector3 vParam1, float fParam4) //Position: 0xFC7E / 64638
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

vector3 Function_320(bool bParam0) //Position: 0xFD08 / 64776
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

int Function_321() //Position: 0xFD72 / 64882
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_322() //Position: 0xFD81 / 64897
{
	vector3 vVar0;
	struct<5> Var3;
	struct<5> Var9;
	
	switch (bLocal_739)
	{
		case 0x00000063:
			iLocal_864 = 0;
			while (iLocal_864 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(iLocal_864, &vVar0, &Var3))
				{
					iVar12 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(iLocal_864);
					if (Function_325(iVar12))
					{
						if (iVar12 == 717)
						{
							TELEPORT_ACTOR_WITH_HEADING(StackVal, StackVal, StackVal, (*&Local_327 + 92)[42], (vVar0 + 180.0f), 1, 1, 1);
							TASK_STAND_STILL((*&Local_327 + 92)[42], -1.0f, 0, 0);
						}
						if (iVar12 == 719)
						{
							TELEPORT_ACTOR_WITH_HEADING(StackVal, StackVal, StackVal, (*&Local_327 + 92)[52], (vVar0 + 180.0f), 1, 1, 1);
							TASK_STAND_STILL((*&Local_327 + 92)[52], -1.0f, 0, 0);
						}
					}
					Function_324(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iLocal_864), (vVar6 + 180.0f), (vVar0 + 180.0f));
				}
				iLocal_864++;
			}
			return 1;
			break;
		
		case 0x00000001:
			Function_323();
			iLocal_864 = 0;
			while (iLocal_864 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iLocal_864, &vVar0, &Var3))
				{
					iVar12 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(iLocal_864);
					if (Function_325(iVar12))
					{
						if (iVar12 == GET_ACTOR_ENUM(bLocal_904))
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iLocal_864), (*&Local_4 + 652)[02]);
						}
						if (iVar12 == 976)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iLocal_864), bLocal_905);
						}
						if (iVar12 == 979)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iLocal_864), (*&Local_4 + 652)[12]);
						}
					}
				}
				Function_324(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iLocal_864), (vVar6 + 180.0f), (vVar0 + 180.0f));
				iLocal_864++;
			}
			return 1;
			break;
		
		case 0x00000002:
			if (!SQUAD_IS_VALID(Local_4.f_680))
			{
				Function_323();
			}
			iLocal_864 = 0;
			while (iLocal_864 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iLocal_864, &vVar0, &Var3))
				{
					iVar12 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(iLocal_864);
					if (Function_325(iVar12))
					{
						if (iVar12 == 980)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iLocal_864), (*&Local_4 + 652)[22]);
						}
						if (iVar12 == 976)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iLocal_864), (*&Local_4 + 652)[12]);
						}
					}
				}
				Function_324(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iLocal_864), (vVar6 + 180.0f), (vVar0 + 180.0f));
				iLocal_864++;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

void Function_323() //Position: 0xFFB3 / 65459
{
	Local_4.f_680 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "GuideGroupCloned"));
	(*&Local_4 + 652)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nJakeClone", 600, -2660.0f, 67.26273f, 3425.747f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 652)[02], Local_4.f_680);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 652)[02], 0);
	SET_ACTOR_FACTION((*&Local_4 + 652)[02], 20);
	RESET_ACTOR_GAITS((*&Local_4 + 652)[02], 0);
	SET_ACTOR_IS_COMPANION((*&Local_4 + 652)[02], 1);
	SET_ACTOR_MAX_HEALTH((*&Local_4 + 652)[02], 50.0f);
	SET_ACTOR_HEALTH((*&Local_4 + 652)[02], GET_ACTOR_MAX_HEALTH((*&Local_4 + 652)[02]));
	SET_CRIPPLE_ENABLE((*&Local_4 + 652)[02], 0);
	AI_BEHAVIOR_SET_ALLOW((*&Local_4 + 652)[02], 0, 0);
	UNK_0x99AFD2D1((*&Local_4 + 652)[02], 1, 0);
	TASK_STAND_STILL((*&Local_4 + 652)[02], -1.0f, 0, 0);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 652)[02], 2);
	(*&Local_4 + 652)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "JakesHorseClone", 976, -2660.0f, 67.26273f, 3429.333f, 0.0f, -5.74953f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 652)[12], Local_4.f_680);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 652)[12], 0);
	SET_ACTOR_FACTION((*&Local_4 + 652)[12], 20);
	SET_ALLOW_RIDE_BY_AI((*&Local_4 + 652)[12], 0);
	ACCESSORIZE_HORSE((*&Local_4 + 652)[12], 3);
	TASK_STAND_STILL((*&Local_4 + 652)[12], -1.0f, 0, 0);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 652)[12], 2);
	(*&Local_4 + 652)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PlayersHorseClone", 981, -2662.736f, 67.26273f, 3429.264f, 0.0f, 28.5028f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 652)[22], Local_4.f_680);
	SET_ACTOR_FACTION((*&Local_4 + 652)[22], 20);
	SET_ALLOW_RIDE_BY_AI((*&Local_4 + 652)[22], 0);
	ACCESSORIZE_HORSE((*&Local_4 + 652)[22], 3);
	TASK_STAND_STILL((*&Local_4 + 652)[22], -1.0f, 0, 0);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 652)[22], 2);
	return;
}

void Function_324(char* cParam0, vector3 vParam1) //Position: 0x101D1 / 66001
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
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(fParam4, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam5.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(fParam8, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

bool Function_325(int iParam0) //Position: 0x102F9 / 66297
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_326(int iParam0) //Position: 0x10310 / 66320
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

int Function_327() //Position: 0x103C4 / 66500
{
	Function_300(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

bool Function_328(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x103D8 / 66520
{
	if (Function_329(&iParam0) == iParam7 || Function_237())
	{
		return 1;
	}
	return 0;
}

int Function_329(int iParam0) //Position: 0x103F7 / 66551
{
	if (Function_295(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

bool Function_330() //Position: 0x1040F / 66575
{
	switch (iLocal_1182)
	{
		case 0x00000000:
			if (iLocal_840[1] == 0)
			{
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_904);
				iLocal_1182 = 1;
			}
			else
			{
				iLocal_1182 = 2;
			}
			break;
		
		case 0x00000001:
			iLocal_864 = 0;
			while (iLocal_864 < 1)
			{
				SET_ALLOW_RIDE_BY_PLAYER(Local_950[iLocal_8645], 1);
				iLocal_864++;
			}
			if (iLocal_840[1] == 0)
			{
				Function_227((*&Local_4 + 904)[0]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 904)[0]) };
				TELEPORT_ACTOR_WITH_HEADING(bLocal_905, vLocal_915, GET_OBJECT_HEADING((*&Local_4 + 904)[0]), 1, 1, 1);
				Function_227((*&Local_4 + 904)[3]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 904)[3]) };
				TELEPORT_ACTOR_WITH_HEADING(bLocal_906, vLocal_915, GET_OBJECT_HEADING((*&Local_4 + 904)[3]), 1, 1, 1);
				if (!IS_ACTOR_RIDING(Global_34573))
				{
					ACTOR_MOUNT_ACTOR(Global_34573, bLocal_905);
				}
				if (!IS_ACTOR_RIDING(bLocal_904))
				{
					ACTOR_MOUNT_ACTOR(bLocal_904, bLocal_906);
				}
				if (!SQUAD_IS_VALID(Local_4.f_632))
				{
					Function_332();
					Function_331((*&Local_4 + 596)[02], (*&Local_4 + 1212)[0]);
					Function_331((*&Local_4 + 596)[12], (*&Local_4 + 1212)[1]);
					Function_331((*&Local_4 + 596)[22], (*&Local_4 + 1212)[2]);
					Function_331((*&Local_4 + 596)[32], (*&Local_4 + 1212)[3]);
				}
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
			iLocal_1182 = 2;
			break;
		
		case 0x00000002:
			return 1;
			break;
	}
	return 0;
}

void Function_331(bool bParam0, bool bParam1) //Position: 0x10574 / 66932
{
	vector3 vVar0;
	int iVar3;
	
	Function_227(bParam1);
	vVar0 = { StackVal, StackVal, Function_227(bParam1) };
	iVar3 = TASK_SEQUENCE_OPEN();
	TASK_BIRD_LAND_AT_COORD(0, &vVar0);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, iVar3);
	TASK_SEQUENCE_RELEASE(iVar3, 1);
	TASK_PRIORITY_SET(bParam0, 2);
	return;
}

void Function_332() //Position: 0x105AB / 66987
{
	Local_4.f_632 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Crows"));
	(*&Local_4 + 596)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Crow01", 1132, -2648.278f, 82.86061f, 3418.383f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 596)[02], Local_4.f_632);
	(*&Local_4 + 596)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Crow02", 1133, -2649.356f, 82.74908f, 3417.092f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 596)[12], Local_4.f_632);
	(*&Local_4 + 596)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Crow03", 1131, -2650.333f, 82.65009f, 3416.226f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 596)[22], Local_4.f_632);
	(*&Local_4 + 596)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Crow04", 1132, -2650.987f, 82.52263f, 3415.634f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 596)[32], Local_4.f_632);
	return;
}

void Function_333() //Position: 0x106B2 / 67250
{
	Function_334();
	bLocal_904 = (*&Local_4 + 360)[02];
	SET_ACTOR_CAN_PLAY_GESTURES(bLocal_904, 0);
	AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bLocal_904, 1);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(bLocal_904, 8, "FASTWALK");
	TASK_STAND_STILL(bLocal_904, -1.0f, 0, 0);
	bLocal_905 = (*&Local_4 + 360)[22];
	Local_950[15] = (*&Local_4 + 360)[22];
	Function_227((*&Local_4 + 984)[4]);
	*(&Local_950[15] + 4) = { StackVal, StackVal, Function_227((*&Local_4 + 984)[4]) };
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bLocal_905, 0.0f);
	bLocal_906 = (*&Local_4 + 360)[12];
	Local_950[05] = (*&Local_4 + 360)[12];
	Function_227((*&Local_4 + 984)[3]);
	*(&Local_950[05] + 4) = { StackVal, StackVal, Function_227((*&Local_4 + 984)[3]) };
	DECOR_SET_BOOL(bLocal_906, "bNoInjuryEjection", 1);
	iLocal_864 = 0;
	while (iLocal_864 < 1)
	{
		SET_ALLOW_RIDE_BY_PLAYER(Local_950[iLocal_8645], 0);
		TASK_STAND_STILL(Local_950[iLocal_8645], -1.0f, 0, 0);
		Local_950[iLocal_8645].f_16 = 1;
		iLocal_864++;
	}
	return;
}

void Function_334() //Position: 0x107AA / 67498
{
	Local_4.f_388 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "GuideGroup"));
	(*&Local_4 + 360)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Jake", 600, -2165.607f, 16.90563f, 2588.965f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 360)[02], Local_4.f_388);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 360)[02], 0);
	SET_ACTOR_FACTION((*&Local_4 + 360)[02], 20);
	RESET_ACTOR_GAITS((*&Local_4 + 360)[02], 0);
	SET_ACTOR_IS_COMPANION((*&Local_4 + 360)[02], 1);
	SET_ACTOR_MAX_HEALTH((*&Local_4 + 360)[02], 50.0f);
	SET_ACTOR_HEALTH((*&Local_4 + 360)[02], GET_ACTOR_MAX_HEALTH((*&Local_4 + 360)[02]));
	SET_CRIPPLE_ENABLE((*&Local_4 + 360)[02], 0);
	AI_BEHAVIOR_SET_ALLOW((*&Local_4 + 360)[02], 0, 0);
	UNK_0x99AFD2D1((*&Local_4 + 360)[02], 1, 0);
	TASK_STAND_STILL((*&Local_4 + 360)[02], -1.0f, 0, 0);
	(*&Local_4 + 360)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "JakesHorse", 976, -2162.2f, 16.368f, 2608.313f, 0.0f, -5.74953f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 360)[12], Local_4.f_388);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 360)[12], 1);
	SET_ACTOR_FACTION((*&Local_4 + 360)[12], 20);
	SET_ALLOW_RIDE_BY_AI((*&Local_4 + 360)[12], 0);
	ACCESSORIZE_HORSE((*&Local_4 + 360)[12], 3);
	TASK_STAND_STILL((*&Local_4 + 360)[12], -1.0f, 0, 0);
	(*&Local_4 + 360)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PlayersHorse", 981, -2159.783f, 16.35791f, 2608.148f, 0.0f, 28.5028f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 360)[22], Local_4.f_388);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 360)[22], 1);
	SET_ACTOR_FACTION((*&Local_4 + 360)[22], 20);
	SET_ALLOW_RIDE_BY_AI((*&Local_4 + 360)[22], 0);
	ACCESSORIZE_HORSE((*&Local_4 + 360)[22], 3);
	TASK_STAND_STILL((*&Local_4 + 360)[22], -1.0f, 0, 0);
	return;
}

bool Function_335() //Position: 0x1099A / 67994
{
	Function_341(&Local_4 + 272, 1050, 2, 0);
	Function_341(&Local_4 + 272, 1052, 2, 0);
	Function_341(&Local_4 + 272, 1051, 2, 0);
	Function_341(&Local_4 + 272, 1132, 2, 0);
	Function_341(&Local_4 + 272, 1133, 2, 0);
	Function_341(&Local_4 + 272, 1131, 2, 0);
	Function_341(&Local_4 + 272, 1128, 2, 0);
	if (Function_336(&Local_4 + 272))
	{
		return 1;
	}
	return 0;
}

bool Function_336(int iParam0) //Position: 0x10A10 / 68112
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_340();
	iVar1 = 0;
	if (!Function_191(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_339(iParam0[iVar03], 8);
		}
		else if (Function_338())
		{
			iVar1 = 1;
			Function_339(iParam0[iVar03], 8);
		}
		Function_339(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_191(iParam0[iVar03], 4))
		{
			if (!Function_191(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_191(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_191(iParam0[03], 8) || iVar1));
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
				Function_339(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_191(iParam0[iVar03], 4))
		{
			if (!Function_191(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_339(iParam0[iVar03], 2);
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
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_339(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_339(iParam0[iVar03], 2);
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

void Function_337() //Position: 0x10D8B / 69003
{
	if (!Function_310(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_338() //Position: 0x10DCB / 69067
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

void Function_339(var uParam0, int iParam1) //Position: 0x10DF6 / 69110
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_340() //Position: 0x10E07 / 69127
{
	if (!Function_310(128))
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

var Function_341(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10E49 / 69193
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_191(uParam0[iVar03], 4))
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

bool Function_342() //Position: 0x10F19 / 69401
{
	Function_313(0);
	SET_ACTOR_HEALTH(bLocal_904, GET_ACTOR_MAX_HEALTH(bLocal_904));
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
	if (iLocal_840[1] == 0)
	{
		Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
		FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
		Function_227((*&Local_4 + 904)[0]);
		vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 904)[0]) };
		TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_915, GET_OBJECT_HEADING((*&Local_4 + 904)[0]), 1, 1, 1);
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(18, 0, 0));
		Function_343(bLocal_904);
	}
	return 1;
}

void Function_343(bool bParam0) //Position: 0x10F85 / 69509
{
	var uVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		uVar0 = GET_BLIP_ON_ACTOR(bParam0);
		while (IS_BLIP_VALID(uVar0))
		{
			REMOVE_BLIP(uVar0);
			uVar0 = GET_BLIP_ON_ACTOR(bParam0);
		}
	}
	return;
}

void Function_344() //Position: 0x10FB1 / 69553
{
	if (!DECOR_CHECK_EXIST(bLocal_510, "saidsomething"))
	{
		if (GET_ACTOR_UNDER_RETICLE(Global_34573, 0) == bLocal_904)
		{
			if (!DECOR_CHECK_EXIST(bLocal_510, "Intro01_gunJake_V1"))
			{
				DECOR_SET_FLOAT(bLocal_510, "Intro01_gunJake_V1", GET_CURRENT_GAME_TIME());
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_510, "Intro01_gunJake_V1")) < 1.0f)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_gunJake_V1", "Intro01_gunJake_V1", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(bLocal_510, "Intro01_gunJake_V1", -1.0f);
				DECOR_SET_FLOAT(bLocal_510, "saidsomething", GET_CURRENT_GAME_TIME());
			}
		}
		else if (DECOR_CHECK_EXIST(bLocal_510, "Intro01_gunJake_V1"))
		{
			DECOR_REMOVE(bLocal_510, "Intro01_gunJake_V1");
		}
		if (!DECOR_CHECK_EXIST(bLocal_510, "Intro01_gunChar"))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(Global_34573, 0)))
			{
				if (GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bLocal_904)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_gunChar", "Intro01_gunChar", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(bLocal_510, "saidsomething", GET_CURRENT_GAME_TIME());
					DECOR_SET_FLOAT(bLocal_510, "Intro01_gunChar", GET_CURRENT_GAME_TIME());
				}
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_510, "Intro01_gunChar")) < 15.0f)
		{
			DECOR_REMOVE(bLocal_510, "Intro01_gunChar");
		}
		if (!DECOR_CHECK_EXIST(bLocal_510, "Intro01_assaultChar"))
		{
			if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
			{
				if (GET_LAST_ATTACK_TARGET(Global_34573) != bLocal_904)
				{
					if (!IS_WEAPON_DRAWN(Global_34573))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_assaultChar", "Intro01_assaultChar", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					else if (Function_345(GET_WEAPON_IN_HAND(Global_34573)))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_shootChar", "Intro01_shootChar", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					DECOR_SET_FLOAT(bLocal_510, "Intro01_assaultChar", GET_CURRENT_GAME_TIME());
					DECOR_SET_FLOAT(bLocal_510, "saidsomething", GET_CURRENT_GAME_TIME());
					CLEAR_LAST_ATTACK(Global_34573);
				}
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_510, "Intro01_assaultChar")) < 15.0f)
		{
			DECOR_REMOVE(bLocal_510, "Intro01_assaultChar");
		}
		if (!DECOR_CHECK_EXIST(bLocal_510, "Intro01_shootRand"))
		{
			if (IS_ACTOR_SHOOTING(Global_34573) && !IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(Global_34573, 0)))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_shootRand", "Intro01_shootRand", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(bLocal_510, "Intro01_shootRand", GET_CURRENT_GAME_TIME());
				DECOR_SET_FLOAT(bLocal_510, "saidsomething", GET_CURRENT_GAME_TIME());
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_510, "Intro01_shootRand")) < 15.0f)
		{
			DECOR_REMOVE(bLocal_510, "Intro01_shootRand");
		}
		if (!DECOR_CHECK_EXIST(bLocal_510, "Intro01_shootJakeHorse"))
		{
			if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)) && Function_345(GET_WEAPON_IN_HAND(Global_34573)))
			{
				if (GET_LAST_ATTACK_TARGET(Global_34573) == bLocal_906)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_shootJakeHorse", "Intro01_shootJakeHorse", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(bLocal_510, "Intro01_shootJakeHorse", GET_CURRENT_GAME_TIME());
					DECOR_SET_FLOAT(bLocal_510, "saidsomething", GET_CURRENT_GAME_TIME());
					CLEAR_LAST_ATTACK(Global_34573);
				}
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_510, "Intro01_shootJakeHorse")) < 15.0f)
		{
			DECOR_REMOVE(bLocal_510, "Intro01_shootJakeHorse");
		}
		if (!DECOR_CHECK_EXIST(bLocal_510, "Intro01_assaultJake_V1"))
		{
			if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(Global_34573)))
			{
				if (!IS_WEAPON_DRAWN(Global_34573))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_assaultJake_V1", "Intro01_assaultJake_V1", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
				}
				else if (Function_345(GET_WEAPON_IN_HAND(Global_34573)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_shootJake_V1", "Intro01_shootJake_V1", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
				}
				DECOR_SET_FLOAT(bLocal_510, "Intro01_assaultJake_V1", GET_CURRENT_GAME_TIME());
				DECOR_SET_FLOAT(bLocal_510, "saidsomething", GET_CURRENT_GAME_TIME());
				CLEAR_LAST_HIT(Global_34573);
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_510, "Intro01_assaultJake_V1")) < 15.0f)
		{
			DECOR_REMOVE(bLocal_510, "Intro01_assaultJake_V1");
		}
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 812)[2]))
		{
			if (!DECOR_CHECK_EXIST(bLocal_510, "Intro01_weapon_V1"))
			{
				if (IS_WEAPON_DRAWN(Global_34573) || IS_ACTOR_VALID(GET_LAST_ATTACKER(Global_34573)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_weapon_V1", "Intro01_weapon_V1", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(bLocal_510, "Intro01_weapon_V1", GET_CURRENT_GAME_TIME());
					DECOR_SET_FLOAT(bLocal_510, "saidsomething", GET_CURRENT_GAME_TIME());
					CLEAR_LAST_ATTACK(Global_34573);
				}
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_510, "Intro01_weapon_V1")) < 15.0f)
			{
				DECOR_REMOVE(bLocal_510, "Intro01_weapon_V1");
			}
		}
	}
	else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_510, "saidsomething")) < 15.0f)
	{
		DECOR_REMOVE(bLocal_510, "saidsomething");
	}
	return;
}

bool Function_345(int iParam0) //Position: 0x117D0 / 71632
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	iParam0 = UNK_0xDB679ED9(iParam0);
	switch (iParam0)
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

bool Function_346(bool bParam0, bool bParam1, float fParam2) //Position: 0x11816 / 71702
{
	float fVar0;
	
	fVar0 = Function_347(bParam0, bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_347(bool bParam0, bool bParam1) //Position: 0x11833 / 71731
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_348(&uVar0, &uVar3);
	return iVar6;
}

var Function_348(var uParam0, int iParam1) //Position: 0x11852 / 71762
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	iVar3 = VMAG(vVar0);
	return iVar3;
}

void Function_349() //Position: 0x11870 / 71792
{
	switch (iLocal_1188)
	{
		case 0x00000000:
			Function_361("INTRO01_OBJ06", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_227((*&Local_4 + 904)[2]);
			vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 904)[2]) };
			bLocal_922 = Function_360(StackVal, StackVal, bLocal_510, Function_56(), vLocal_915, 0.0f, 0.0f, 0.0f, Global_34573, 0x40200000, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
			SET_BLIP_BLINK(GET_BLIP_ON_OBJECT(bLocal_922), 1, 1, 7.0f);
			iLocal_1188 = 1;
			break;
		
		case 0x00000001:
			Function_351(&iLocal_868, 100.0f, 250.0f, bLocal_922, "INTRO01_RETURN_TO_GATE", "INTRO01_ABANDONEDFORT", &iLocal_852, 1, 0, 0, 4294967295, 1, 0);
			if (GATEWAY_UPDATE(bLocal_922) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 760)[1]))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (IS_ACTOR_IN_VOLUME((*&Local_4 + 596)[02], (*&Local_4 + 760)[1]))
				{
					TASK_BIRD_SOAR((*&Local_4 + 596)[02], -1.0f, 1106247680);
				}
				if (IS_ACTOR_IN_VOLUME((*&Local_4 + 596)[12], (*&Local_4 + 760)[1]))
				{
					TASK_BIRD_SOAR((*&Local_4 + 596)[12], -1.0f, 1106247680);
				}
				if (IS_ACTOR_IN_VOLUME((*&Local_4 + 596)[22], (*&Local_4 + 760)[1]))
				{
					TASK_BIRD_SOAR((*&Local_4 + 596)[22], -1.0f, 1106247680);
				}
				if (IS_ACTOR_IN_VOLUME((*&Local_4 + 596)[32], (*&Local_4 + 760)[1]))
				{
					TASK_BIRD_SOAR((*&Local_4 + 596)[32], -1.0f, 1106247680);
				}
				if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
				{
					bLocal_905 = GET_MOUNT(Global_34573);
				}
				if (Function_350(Global_34573, 0) < 12.0f && IS_ACTOR_RIDING(Global_34573))
				{
					DECOR_SET_BOOL(bLocal_905, "hideme", 1);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_905, "horse_Main/Melee/RearUp/scripted/canned_rear_up");
					iLocal_1188 = 2;
				}
				else
				{
					iLocal_864 = TASK_SEQUENCE_OPEN();
					TASK_DISMOUNT(0, 1);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(Global_34573, iLocal_864);
					TASK_SEQUENCE_RELEASE(iLocal_864, 1);
					iLocal_931 = 1;
					iLocal_1188 = 3;
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_905, "canned_rear_up"))
			{
				iLocal_864 = TASK_SEQUENCE_OPEN();
				TASK_DISMOUNT(0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, iLocal_864);
				TASK_SEQUENCE_RELEASE(iLocal_864, 1);
				iLocal_931 = 1;
				iLocal_1188 = 3;
			}
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

float Function_350(bool bParam0, bool bParam1) //Position: 0x11B09 / 72457
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

int Function_351(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12) //Position: 0x11B28 / 72488
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_OBJECT_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_358(Global_34573, bParam3, iParam2))
	{
		Function_245(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_358(Global_34573, bParam3, fParam1))
	{
		if (!Function_357(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_361(bParam4, 7.5f, 0, 2, bParam7, 0, 0, 0);
				Function_356(1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_355(bParam8, 0, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_355(bParam9, 0, 15, 1, bParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_OBJECT(bParam3, iParam10, 0, 2, 0);
				if (IS_STRING_VALID(bParam12))
				{
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(bParam3), bParam12);
				}
				DECOR_SET_BOOL(bParam3, "MODR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_357(1))
	{
		Function_354(1);
		if (!Function_353())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_352();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam3)) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam3));
				DECOR_REMOVE(bParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_355(bParam8, 1, 15, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_355(bParam9, 1, 15, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_352() //Position: 0x11CA9 / 72873
{
	var uVar0;
	bool bVar1;
	
	uVar0 = GET_LAST_NOTE_OBJECTIVE();
	bVar1 = UI_GET_STRING_BY_HASH(uVar0);
	if (STRING_LENGTH(bVar1) >= 0)
	{
		PRINT_OBJECTIVE_B(bVar1, 7.5f, 1, 2, false, 0, 0, 0);
	}
	return;
}

bool Function_353() //Position: 0x11CD4 / 72916
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

void Function_354(bool bParam0) //Position: 0x11D18 / 72984
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
			Function_39(&bVar0, bParam0);
			DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_355(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x11D7B / 73083
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	iVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_LAYOUT(iVar0, bParam0);
	bVar1 = START_OBJECT_ITERATOR(iVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (((GET_OBJECT_TYPE(bVar1) != iParam2 || iParam2 != 4294967295) || ((iParam2 != 15 && GET_OBJECT_TYPE(bVar1) != 24) && iParam3)) && bVar1 == bParam4)
		{
			uVar2 = GET_BLIP_ON_OBJECT(bVar1);
			if (IS_BLIP_VALID(uVar2))
			{
				if ((GET_BLIP_ICON(uVar2) == 322 && GET_BLIP_ICON(uVar2) == 323) && GET_BLIP_ICON(uVar2) == 324)
				{
					SET_BLIP_VISIBLE(uVar2, iParam1);
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(iVar0);
	}
	DESTROY_ITERATOR(iVar0);
}

void Function_356(bool bParam0) //Position: 0x11E1C / 73244
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(Global_34573, "missionFailRmd");
		}
		Function_79(&bVar0, bParam0);
		DECOR_SET_INT(Global_34573, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_357(bool bParam0) //Position: 0x11E7F / 73343
{
	if (IS_ACTOR_VALID(Global_34573))
	{
		if (DECOR_CHECK_EXIST(Global_34573, "missionFailRmd"))
		{
			return Function_3(DECOR_GET_INT(Global_34573, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

bool Function_358(bool bParam0, bool bParam1, float fParam2) //Position: 0x11EC6 / 73414
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_320(bParam0);
			Function_359(bParam1);
			if (VDIST(Function_320(bParam0), Function_359(bParam1)) >= fParam2)
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

vector3 Function_359(bool bParam0) //Position: 0x11FE0 / 73696
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

var Function_360(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, var uParam13, var uParam14, float fParam15, float fParam16, var uParam17) //Position: 0x1204C / 73804
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	var uVar13;
	
	vVar0 = { uParam9, 2.0f, uParam9 };
	vParam2.f_4 = (vParam2.y + 0.75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(cParam0, bParam1, vParam2, vParam5, vVar0, uParam11, uParam8, uParam10, uParam13, 0, uParam14, uParam17);
	if (IS_OBJECT_VALID(bVar3))
	{
		strcpy(&cVar4, bParam1, 32);
		if (IS_STRING_VALID(bParam1))
		{
			stradd(&cVar4, "restrict", 32);
		}
		bVar12 = CREATE_VOLUME_IN_LAYOUT(cParam0, &cVar4, 2, vParam2, vParam5, 5.0f, 5.0f, 5.0f);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		if (iParam12 != 4294967295)
		{
			uVar13 = ADD_BLIP_FOR_OBJECT(bVar3, iParam12, 0.0f, 2, 0);
		}
		if (fParam15 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(uVar13, fParam15);
		}
		if (fParam16 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(uVar13, fParam16);
		}
		DECOR_SET_OBJECT(bVar3, "volrestrict", bVar12);
	}
	return bVar3;
}

void Function_361(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x12117 / 74007
{
	struct<4> Var0;
	int iVar4;
	
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
			Var0 = { StackVal, StackVal, StackVal, Function_25(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_362() //Position: 0x1219C / 74140
{
	switch (iLocal_1187)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(bLocal_904))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_904);
				iLocal_864 = TASK_SEQUENCE_OPEN();
				Function_227((*&Local_4 + 1012)[0]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1012)[0]) };
				TASK_FACE_COORD(0, &vLocal_915, 0);
				Function_227((*&Local_4 + 1012)[0]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1012)[0]) };
				TASK_GO_TO_COORD_USING_MATERIAL(0, &vLocal_915, 4, 32, 0);
				Function_227((*&Local_4 + 1012)[1]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1012)[1]) };
				TASK_GO_TO_COORD_USING_MATERIAL(0, &vLocal_915, 4, 32, 0);
				Function_227((*&Local_4 + 1012)[2]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1012)[2]) };
				TASK_GO_TO_COORD_USING_MATERIAL(0, &vLocal_915, 4, 32, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_904, iLocal_864);
				TASK_SEQUENCE_RELEASE(iLocal_864, 1);
				iLocal_1187 = 1;
			}
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(bLocal_904, 6) == 1)
			{
				RELEASE_ACTOR(bLocal_904);
				iLocal_1187 = 2;
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

void Function_363() //Position: 0x12276 / 74358
{
	if (!iLocal_932)
	{
		if (Function_571(Global_30679[1]))
		{
			Function_227((*&Local_4 + 1032)[0]);
			uLocal_865 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_227((*&Local_4 + 1032)[0]), 5.0f, "RIGHTWING01_CRATE", 1);
			if (IS_PHYSINST_VALID(uLocal_865))
			{
				bLocal_923 = GET_OBJECT_FROM_PHYSINST(uLocal_865);
				if (IS_OBJECT_VALID(bLocal_923))
				{
					DESTROY_OBJECT(bLocal_923);
					iLocal_932 = 1;
				}
			}
		}
	}
	return;
}

int Function_364(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x122DB / 74459
{
	var uVar0;
	var uVar1;
	
	if (((((iParam0 > 0 || iParam1 > 0) || iParam2 > 0) || iParam3 > 0) || iParam4 > 0) || iParam5 > 0)
	{
		return 0;
	}
	uVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
	uVar1 = MAKE_TIME_OF_DAY(iParam3, iParam4, iParam5);
	if (!GET_TIME_ACCELERATION() != 0.0f)
	{
		if (IS_LATER_THAN(GET_TIME_OF_DAY(), uVar0) && IS_EARLIER_THAN(GET_TIME_OF_DAY(), uVar1))
		{
			SET_TIME_ACCELERATION(0.0f);
			return 1;
		}
	}
	if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), uVar0) || IS_LATER_THAN(GET_TIME_OF_DAY(), iVar1))
	{
		SET_TIME_ACCELERATION(Global_63398);
	}
	return 0;
}

void Function_365() //Position: 0x12360 / 74592
{
	vector3 vVar0;
	int iVar3;
	
	if (iLocal_740 < 5 && iLocal_740 > 105)
	{
		Function_364(18, 0, 0, 23, 59, 59);
		Function_451();
		Function_446();
		Function_423();
		if (Function_571(Global_30640[0]))
		{
			Function_421();
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 812)[2]))
			{
				if (Function_288(&iLocal_895) < 1.0f)
				{
					if (!DECOR_CHECK_EXIST(bLocal_510, "disabledstacker"))
					{
						if (Function_571(Global_30640[0]))
						{
							vVar0 = { -2204.577f, 16.58f, 2602.359f };
							iVar3 = LOCATE_GRINGO_OF_TYPE("factory_lumber_stacker", &vVar0, 2.0f, 1);
							if (IS_GRINGO_VALID(iVar3))
							{
								GRINGO_ALLOW_ACTIVATION(iVar3, 0);
								DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(iVar3));
								DECOR_SET_BOOL(bLocal_510, "disabledstacker", 1);
							}
						}
					}
					iLocal_864 = 0;
					while (iLocal_864 < 6)
					{
						Function_420(&(Local_1061[iLocal_86416]));
						iLocal_864++;
					}
					iLocal_864 = 0;
					while (iLocal_864 < 1)
					{
						Function_419(&(Local_950[iLocal_8645]));
						iLocal_864++;
					}
					Function_418();
					Function_417();
					Function_416();
					Function_363();
					Function_409();
					Function_293(&iLocal_895);
				}
			}
		}
		else if (Function_571(Global_30679[1]))
		{
			if (Function_288(&iLocal_895) < 1.0f)
			{
				Function_407();
				Function_293(&iLocal_895);
			}
		}
		else if (Function_288(&iLocal_895) < 1.0f)
		{
			if (!IS_ACTOR_ALIVE(bLocal_905))
			{
				Function_245("Horse_dead");
				iLocal_852 = 1;
			}
			Function_293(&iLocal_895);
		}
		if (DECOR_CHECK_EXIST(Global_34573, "beingbucked"))
		{
			iLocal_938 = 1;
		}
		if (Function_346(Global_34573, bLocal_904, 30.0f))
		{
			Function_344();
		}
	}
	switch (iLocal_740)
	{
		case 0x00000000:
			if (Function_406())
			{
				Function_239(bLocal_739);
				Function_230(StackVal, StackVal, Function_239(bLocal_739), bLocal_739, Global_30628[3], Function_238(bLocal_739), 0);
				if (!iLocal_840[0])
				{
					iLocal_740 = 1;
				}
				else
				{
					iLocal_740 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_571(Global_30640[0]))
			{
				Function_333();
				Function_383();
				iLocal_740 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_369())
			{
				iLocal_740 = 5;
			}
			break;
		
		case 0x00000005:
			Function_285(1.0f);
			iLocal_1185 = 0;
			iLocal_1186 = 0;
			iLocal_1201 = 0;
			iLocal_1200 = 4;
			if (!iLocal_840[0])
			{
				iLocal_1180 = 0;
			}
			if (iLocal_509 == 1)
			{
			}
			TASK_STAND_STILL(bLocal_905, -1.0f, 0, 0);
			Function_293(&iLocal_877);
			iLocal_740 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADED())
			{
				iLocal_740 = 7;
			}
			break;
		
		case 0x00000007:
			Function_227((*&Local_4 + 904)[1]);
			Function_367(StackVal, StackVal, "$/cutscene/intro01_cs02/intro01_cs02", &uLocal_855, Function_227((*&Local_4 + 904)[1]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
			if (iLocal_930 == 1)
			{
				if (IS_OBJECT_VALID(bLocal_946))
				{
					DESTROY_OBJECT(bLocal_946);
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_904)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_904));
				}
				MEMORY_PREFER_RIDING(bLocal_904, 1);
				iLocal_864 = TASK_SEQUENCE_OPEN();
				Function_227((*&Local_4 + 904)[1]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 904)[1]) };
				TASK_GO_NEAR_COORD(0, &vLocal_915, 2.0f, 2);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_904, iLocal_864);
				TASK_SEQUENCE_RELEASE(iLocal_864, 1);
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_904);
				HUD_ENABLE(0);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				iLocal_864 = TASK_SEQUENCE_OPEN();
				if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 760)[0]))
				{
					if (!Function_366())
					{
						Function_227((*&Local_4 + 904)[0]);
						vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 904)[0]) };
						TASK_GO_TO_COORD(0, &vLocal_915, 2);
					}
					else
					{
						Function_227((*&Local_4 + 904)[4]);
						vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 904)[4]) };
						TASK_GO_TO_COORD(0, &vLocal_915, 2);
					}
				}
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, iLocal_864);
				TASK_SEQUENCE_RELEASE(iLocal_864, 1);
				Function_331((*&Local_4 + 596)[02], (*&Local_4 + 1212)[0]);
				Function_331((*&Local_4 + 596)[12], (*&Local_4 + 1212)[1]);
				Function_331((*&Local_4 + 596)[22], (*&Local_4 + 1212)[2]);
				Function_331((*&Local_4 + 596)[32], (*&Local_4 + 1212)[3]);
				Function_293(&iLocal_877);
				iLocal_740 = 8;
			}
			break;
		
		case 0x00000008:
			Function_227((*&Local_4 + 904)[1]);
			if ((StackVal || Function_319(StackVal, GET_TASK_STATUS(bLocal_904, 6) != 1, bLocal_904, Function_227((*&Local_4 + 904)[1]), 1.0f)) || Function_288(&iLocal_877) < 10.0f)
			{
				iLocal_740 = 106;
			}
			break;
		
		case 0x0000006A:
			iLocal_840[1] = 1;
			bLocal_739 = 2;
			iLocal_740 = 2;
			break;
	}
	return;
}

bool Function_366() //Position: 0x127D9 / 75737
{
	float fVar0;
	
	Function_320(Global_34573);
	GET_OBJECT_RELATIVE_OFFSET(bLocal_904, Function_320(Global_34573), &fVar0);
	if (fVar0 > 0.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_367(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x127F8 / 75768
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_319(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_321()) * (fParam7 - fParam6)) * 0.5f))) || bParam12)
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
				if (!Function_76(StackVal, StackVal, vVar16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&vVar19, (360.0f / 6.28f));
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
					Function_368();
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
	else if ((!Function_319(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_321()) * (fParam7 - fParam6)) * 0.5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_319(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_368() //Position: 0x12A3E / 76350
{
	int iVar0;
	vector3 vVar1;
	struct<5> Var4;
	struct<5> Var10;
	
	iVar0 = 0;
	while (iVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(iVar0, &vVar1, &Var4))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(iVar0, &vVar7, &Var10);
			Function_324(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(iVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		iVar0++;
	}
	return;
}

bool Function_369() //Position: 0x12A92 / 76434
{
	switch (iLocal_1181)
	{
		case 0x00000000:
			if (iLocal_840[0] == 0)
			{
				vLocal_915 = { StackVal, StackVal, *(&Local_327 + 388[26]) };
				Function_382(StackVal, StackVal, StackVal, vLocal_915);
				Function_370();
				iLocal_1178 = 0;
				iLocal_1181 = 1;
			}
			else
			{
				iLocal_1181 = 2;
			}
			break;
		
		case 0x00000001:
			Function_227((*&Local_4 + 888)[0]);
			vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 888)[0]) };
			TELEPORT_ACTOR_WITH_HEADING(bLocal_905, vLocal_915, GET_OBJECT_HEADING((*&Local_4 + 888)[0]), 1, 1, 1);
			Function_227((*&Local_4 + 888)[1]);
			vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 888)[1]) };
			TELEPORT_ACTOR_WITH_HEADING(bLocal_906, vLocal_915, GET_OBJECT_HEADING((*&Local_4 + 888)[1]), 1, 1, 1);
			iLocal_864 = 0;
			while (iLocal_864 < 1)
			{
				SET_ALLOW_RIDE_BY_PLAYER(Local_950[iLocal_8645], 1);
				iLocal_864++;
			}
			if (!IS_ACTOR_RIDING(Global_34573))
			{
				ACTOR_MOUNT_ACTOR(Global_34573, bLocal_905);
			}
			if (!IS_ACTOR_RIDING(bLocal_904))
			{
				ACTOR_MOUNT_ACTOR(bLocal_904, bLocal_906);
			}
			MEMORY_PREFER_RIDING(bLocal_904, 1);
			iLocal_1181 = 2;
			break;
		
		case 0x00000002:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_370() //Position: 0x12BAD / 76717
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if (iLocal_943 < 4294967295 && Function_381(Global_30750[1], 0, 4294967295, 0))
	{
		bVar0 = Function_379(iLocal_943);
		if (IS_ACTOR_VALID(bVar0))
		{
			ENABLE_VEHICLE_SEAT(bVar0, 14, 0);
			ENABLE_VEHICLE_SEAT(bVar0, 15, 0);
			ENABLE_VEHICLE_SEAT(bVar0, 16, 0);
			ENABLE_VEHICLE_SEAT(bVar0, 17, 0);
			ENABLE_VEHICLE_SEAT(bVar0, 18, 0);
			ENABLE_VEHICLE_SEAT(bVar0, 19, 0);
			ENABLE_VEHICLE_SEAT(bVar0, 20, 0);
			ENABLE_VEHICLE_SEAT(bVar0, 21, 0);
			iLocal_864 = 0;
			while (iLocal_864 <= 3)
			{
				iVar1 = Function_372(Global_30750[1], 1, 0, 4294967295, 0);
				if (Function_325(iVar1))
				{
					Function_227(bVar0);
					Function_371(bVar0);
					bVar2 = CREATE_ACTOR_IN_LAYOUT(bLocal_510, Function_56(), iVar1, Function_227(bVar0), Function_371(bVar0));
					if (IS_ACTOR_VALID(bVar2))
					{
						TASK_STAND_STILL(bVar2, -1.0f, 0, 0);
						SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar2, 1);
						TASK_PRIORITY_SET(bVar2, 2);
						iVar3 = RAND_INT_RANGE(false, 13);
						while (IS_ACTOR_VALID(GET_ACTOR_IN_VEHICLE_SEAT(bVar0, iVar3)))
						{
							iVar3 = RAND_INT_RANGE(false, 13);
						}
						SET_ACTOR_IN_VEHICLE(bVar2, bVar0, iVar3);
						SET_ACTOR_UPDATE_PRIORITY(bVar2, 2);
					}
				}
				iLocal_864++;
			}
		}
	}
	return;
}

vector3 Function_371(bool bParam0) //Position: 0x12CB0 / 76976
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

var Function_372(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x12CD7 / 77015
{
	return Function_373(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_373(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, var uParam5, vector3 vParam6) //Position: 0x12CF0 / 77040
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(uParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_378();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(uParam0, iParam2, iParam3, bParam4, uParam5, vParam6);
	if (!Function_325(iVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_377(uParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_377(uParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_376(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(uParam0, iParam2, iParam3, false, uParam5, vParam6);
				if (Function_325(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_376(iVar0))
				{
					Function_375();
				}
				Function_374(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(uParam0, iParam2, iParam3, false, uParam5, vParam6);
				if (Function_325(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar0))
	{
		if (iParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return iVar0;
}

void Function_374(int iParam0) //Position: 0x12FE3 / 77795
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

void Function_375() //Position: 0x13097 / 77975
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

bool Function_376(int iParam0) //Position: 0x130D1 / 78033
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if ((*&Global_30742 + 8)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_377(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x130FE / 78078
{
	int iVar0;
	
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
	PRINTINT(iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(iParam3);
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
	if (IS_POPULATION_SET_READY(uParam0, iParam2, iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(uParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

void Function_378() //Position: 0x1324F / 78415
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_375();
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
	Function_375();
	return;
}

var Function_379(int iParam0) //Position: 0x1329A / 78490
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam0 == 4294967295)
	{
		return "";
	}
	iVar0 = 1;
	iVar1 = TRAIN_GET_NUM_CARS(iParam0);
	if (iVar1 > 1)
	{
		iVar0 = 1;
		while (iVar0 < (iVar1 - 1))
		{
			bVar2 = TRAIN_GET_CAR(iParam0, iVar0);
			if (IS_OBJECT_VALID(bVar2))
			{
				if (Function_380(bVar2) != 1165 || Function_380(bVar2) != 1168)
				{
					return GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iParam0, iVar0));
				}
			}
			iVar0++;
		}
	}
	return "";
}

int Function_380(bool bParam0) //Position: 0x13302 / 78594
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

int Function_381(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1331D / 78621
{
	if (!IS_POPSET_VALID(uParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(uParam0, uParam1, uParam2);
}

void Function_382(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x13344 / 78660
{
	var uVar0;
	
	UNK_0x44986367(&uVar0, uParam3);
	TRAIN_SET_POSITION_DIRECTION(iLocal_943, &uParam0, &uVar0);
	TRAIN_SET_TARGET_POS(iLocal_943, &uParam0);
	TRAIN_SET_AUTOPILOT_ENABLE(iLocal_943, 0);
	TRAIN_SET_SPEED(iLocal_943, 0.0f);
	TRAIN_SET_TARGET_SPEED(iLocal_943, 0.0f);
}

void Function_383() //Position: 0x1337A / 78714
{
	Function_2(9);
	Function_204(1);
	if (!SQUAD_IS_VALID(Local_327.f_152))
	{
		Function_405();
		Function_404();
		Function_403();
	}
	Function_402();
	if (Function_295(&Local_511) || HUD_IS_FADED())
	{
		vLocal_915 = { StackVal, StackVal, *(&Local_327 + 388[16]) };
		Function_382(StackVal, StackVal, StackVal, vLocal_915);
	}
	SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 0);
	Function_401();
	Function_400();
	Function_399();
	Function_398();
	Function_397();
	bLocal_908 = (*&Local_4 + 392)[02];
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bLocal_908, 0);
	bLocal_907 = (*&Local_4 + 404)[02];
	iLocal_864 = 0;
	while (iLocal_864 < 6)
	{
		Local_1061[iLocal_86416] = (*&Local_4 + 416)[iLocal_8642];
		Function_227((*&Local_4 + 1084)[iLocal_864]);
		*(&Local_1061[iLocal_86416] + 36) = { StackVal, StackVal, Function_227((*&Local_4 + 1084)[iLocal_864]) };
		TASK_STAND_STILL(Local_1061[iLocal_86416], -1.0f, 0, 0);
		Local_1061[iLocal_86416].f_48 = 2;
		iLocal_864++;
	}
	strcpy(&Local_1061[016] + 4, "chair_sit_table_attach", 32);
	strcpy(&Local_1061[116] + 4, "chair_sit_table_attach", 32);
	strcpy(&Local_1061[216] + 4, "mex_drunk_sittable", 32);
	strcpy(&Local_1061[316] + 4, "leaning_stand", 32);
	strcpy(&Local_1061[416] + 4, "bar_drink_serve", 32);
	strcpy(&Local_1061[516] + 4, "chair_sit_table_attach", 32);
	strcpy(&Local_1061[616] + 4, "mex_drunk_sittable", 32);
	bLocal_909 = (*&Local_4 + 480)[02];
	bLocal_910 = (*&Local_4 + 492)[02];
	Function_170(12);
	Function_395(9);
	Function_227((*&Local_4 + 984)[2]);
	Function_224(StackVal, StackVal, Function_227((*&Local_4 + 984)[2]), 0, 0);
	iLocal_864 = 976;
	while (iLocal_864 < 1007)
	{
		ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(iLocal_864);
		iLocal_864++;
	}
	iLocal_864 = 0;
	while (iLocal_864 < 15)
	{
		Function_394(iLocal_864, 0);
		iLocal_864++;
	}
	Function_211(0);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1049);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1050);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1051);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1052);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1088);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1089);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1090);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1060);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1061);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1062);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1063);
	Function_392(&uLocal_743, bLocal_510);
	Function_388(&(Local_783[017]), bLocal_904, "guide", 0, 0x5f5e100, 1);
	Function_388(&(Local_783[117]), bLocal_906, "guide_horse", 0, 0x5f5e100, 1);
	Function_385(&(Local_783[117]), 256, 1);
	Function_388(&(Local_783[217]), bLocal_905, "Horse", 0, 0x5f5e100, 1);
	Function_384(&iLocal_877);
	Function_384(&iLocal_895);
	return;
}

void Function_384(int iParam0) //Position: 0x1366F / 79471
{
	if (!Function_290(iParam0))
	{
		Function_294(iParam0, 0.0f);
	}
	return;
}

void Function_385(var uParam0, int iParam1, int iParam2) //Position: 0x13684 / 79492
{
	if (iParam1 != 100000000)
	{
		Function_387(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_386(uParam0, iParam2);
	}
	return;
}

void Function_386(int iParam0, bool bParam1) //Position: 0x136A7 / 79527
{
	iParam0->f_40 = 0;
	Function_387(iParam0, 2, bParam1);
	Function_387(iParam0, 4, bParam1);
	Function_387(iParam0, 8, bParam1);
	Function_387(iParam0, 16, bParam1);
	Function_387(iParam0, 32, bParam1);
	Function_387(iParam0, 64, bParam1);
	Function_387(iParam0, 128, bParam1);
	Function_387(iParam0, 256, bParam1);
	Function_387(iParam0, 512, bParam1);
	Function_387(iParam0, 1024, bParam1);
	return;
}

void Function_387(int iParam0, int iParam1, bool bParam2) //Position: 0x1370D / 79629
{
	bool bVar0;
	
	Function_79(iParam0 + 40, iParam1);
	bVar0 = false;
	Function_79(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_39(iParam0 + 40, bVar0);
	}
	else
	{
		Function_79(iParam0 + 40, bVar0);
	}
	return;
}

int Function_388(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x13749 / 79689
{
	if (!Function_391(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_390(uParam0, bParam2))
	{
		return 0;
	}
	Function_389(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_385(uParam0, iParam4, iParam5);
	return 1;
}

void Function_389(var uParam0, int iParam1) //Position: 0x13785 / 79749
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_390(int iParam0, bool bParam1) //Position: 0x13791 / 79761
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

bool Function_391(var uParam0, bool bParam1) //Position: 0x1381A / 79898
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
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
			uVar1 = GET_SQUAD_FROM_OBJECT(*uParam0);
			if (SQUAD_IS_VALID(uVar1))
			{
				if (SQUAD_GET_SIZE(uVar1) >= 0)
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(uVar1, 0);
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
			iVar3 = GET_OBJECTSET_FROM_OBJECT(*uParam0);
			if (IS_OBJECTSET_VALID(iVar3))
			{
				if (GET_OBJECTSET_SIZE(iVar3) >= 0)
				{
					bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iVar3);
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

int Function_392(var uParam0, bool bParam1) //Position: 0x139A6 / 80294
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_393(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_393(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_393(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_393(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_393(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_393(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_393(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_393(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_393(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_393(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_393(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_393(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_393(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_393(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x14052 / 82002
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
	Function_79(iParam0 + 8, iParam4);
	return 1;
}

void Function_394(int iParam0, int iParam1) //Position: 0x14115 / 82197
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_25986[iParam0] = iParam1;
	return;
}

void Function_395(int iParam0) //Position: 0x14132 / 82226
{
	Function_396(&Global_28842, iParam0);
	return;
}

void Function_396(var uParam0, var uParam1) //Position: 0x14140 / 82240
{
	int iVar0;
	
	iVar0 = (*uParam0 && uParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_397() //Position: 0x14163 / 82275
{
	(*&Local_4 + 492)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "OnThePhone", 60, -2172.653f, 16.877f, 2597.869f, 0.0f, 135.0f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 492)[02], 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 492)[02], 1);
	TASK_PRIORITY_SET((*&Local_4 + 492)[02], 2);
	TASK_STAND_STILL((*&Local_4 + 492)[02], -1.0f, 0, 0);
	TASK_STAND_STILL((*&Local_4 + 492)[02], -1.0f, 0, 0);
	return;
}

void Function_398() //Position: 0x141DB / 82395
{
	(*&Local_4 + 480)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "StairsWhore", 65, -2172.807f, 17.77728f, 2586.491f, 0.0f, 0.0f, 0.0f);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 480)[02], 1);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 480)[02], 1);
	TASK_PRIORITY_SET((*&Local_4 + 480)[02], 2);
	TASK_STAND_STILL((*&Local_4 + 480)[02], -1.0f, 0, 0);
	return;
}

void Function_399() //Position: 0x14242 / 82498
{
	Local_4.f_476 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "GringoDrinkers"));
	(*&Local_4 + 416)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDrinker01", 235, -2166.646f, 16.877f, 2594.049f, 0.0f, 70.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 416)[02], Local_4.f_476);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 416)[02], 1);
	TASK_PRIORITY_SET((*&Local_4 + 416)[02], 2);
	TASK_STAND_STILL((*&Local_4 + 416)[02], -1.0f, 0, 0);
	(*&Local_4 + 416)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDrinker02", 206, -2169.563f, 16.877f, 2592.759f, 0.0f, 247.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 416)[12], Local_4.f_476);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 416)[12], 1);
	TASK_PRIORITY_SET((*&Local_4 + 416)[12], 2);
	TASK_STAND_STILL((*&Local_4 + 416)[12], -1.0f, 0, 0);
	(*&Local_4 + 416)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDrinker03", 36, -2172.576f, 16.88545f, 2595.087f, 0.0f, 215.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 416)[22], Local_4.f_476);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 416)[22], 1);
	TASK_PRIORITY_SET((*&Local_4 + 416)[22], 2);
	TASK_STAND_STILL((*&Local_4 + 416)[22], -1.0f, 0, 0);
	(*&Local_4 + 416)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDrinker04", 311, -2166.186f, 16.877f, 2598.138f, 0.0f, 90.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 416)[32], Local_4.f_476);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 416)[32], 1);
	TASK_PRIORITY_SET((*&Local_4 + 416)[32], 2);
	TASK_STAND_STILL((*&Local_4 + 416)[32], -1.0f, 0, 0);
	(*&Local_4 + 416)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDrinker05", 204, -2166.186f, 16.877f, 2596.007f, 0.0f, 90.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 416)[42], Local_4.f_476);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 416)[42], 1);
	TASK_PRIORITY_SET((*&Local_4 + 416)[42], 2);
	TASK_STAND_STILL((*&Local_4 + 416)[42], -1.0f, 0, 0);
	(*&Local_4 + 416)[52] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDrinker06", 34, -2166.186f, 16.877f, 2600.637f, 0.0f, 90.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 416)[52], Local_4.f_476);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 416)[52], 1);
	TASK_PRIORITY_SET((*&Local_4 + 416)[52], 2);
	TASK_STAND_STILL((*&Local_4 + 416)[52], -1.0f, 0, 0);
	(*&Local_4 + 416)[62] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nDrinker07", 140, -2169.028f, 16.877f, 2600.741f, 0.0f, 271.4224f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 416)[62], Local_4.f_476);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 416)[62], 1);
	TASK_PRIORITY_SET((*&Local_4 + 416)[62], 2);
	TASK_STAND_STILL((*&Local_4 + 416)[62], -1.0f, 0, 0);
	return;
}

void Function_400() //Position: 0x14538 / 83256
{
	(*&Local_4 + 404)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "PianoPlayer", 180, -2170.383f, 16.877f, 2589.803f, 0.0f, 0.0f, 0.0f);
	TASK_STAND_STILL((*&Local_4 + 404)[02], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 404)[02], 1);
	TASK_PRIORITY_SET((*&Local_4 + 404)[02], 2);
	return;
}

void Function_401() //Position: 0x14593 / 83347
{
	(*&Local_4 + 392)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "JakesWhore", 697, -2167.272f, 16.87653f, 2588.965f, 0.0f, 180.0f, 0.0f);
	SET_ACTOR_FACTION((*&Local_4 + 392)[02], 20);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 392)[02], 1);
	TASK_PRIORITY_SET((*&Local_4 + 392)[02], 2);
	TASK_STAND_STILL((*&Local_4 + 392)[02], -1.0f, 0, 0);
	SET_AMBIENT_VOICE_NAME((*&Local_4 + 392)[02], "CAUCASIAN_FEMALE_Prostitute01");
	return;
}

void Function_402() //Position: 0x1462A / 83498
{
	iLocal_864 = 0;
	while (iLocal_864 < 12)
	{
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST((*&Local_327 + 156)[iLocal_864]))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_327 + 156)[iLocal_864]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME((*&Local_327 + 156)[iLocal_864]);
			CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_327 + 156)[iLocal_864], 15);
		}
		iLocal_864++;
	}
	return;
}

void Function_403() //Position: 0x14681 / 83585
{
	int iVar0;
	
	SET_AMBIENT_VOICE_NAME((*&Local_327 + 92)[42], "CAUCASIAN_MALE_Traveler05");
	SET_AMBIENT_VOICE_NAME((*&Local_327 + 92)[52], "CAUCASIAN_MALE_Traveler06");
	iLocal_864 = 0;
	while (iLocal_864 < 5)
	{
		iVar0 = LOCATE_GRINGO_OF_TYPE(&Local_961[iLocal_86414] + 4, &Local_961[iLocal_86414] + 36, 1.0f, 1);
		if (IS_GRINGO_VALID(iVar0))
		{
			if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(Local_961[iLocal_86414])))
			{
				if (iLocal_864 == 4 && iLocal_864 == 5)
				{
					SNAP_ACTOR_TO_GRINGO(Local_961[iLocal_86414], GET_OBJECT_FROM_GRINGO(iVar0), "usecase1", 1, 0, 0);
					TASK_USE_GRINGO(Local_961[iLocal_86414], iVar0, "usecase1", 4294967295, 1);
				}
				else
				{
					AI_ACTOR_FORCE_SPEED((*&Local_327 + 92)[iLocal_8642], 1);
					TASK_USE_GRINGO(Local_961[iLocal_86414], bVar0, "usecase1", 4294967295, 1);
				}
			}
		}
		iLocal_864++;
	}
	return;
}

void Function_404() //Position: 0x14798 / 83864
{
	iLocal_864 = 0;
	while (iLocal_864 < 6)
	{
		Local_961[iLocal_86414] = (*&Local_327 + 92)[iLocal_8642];
		*(&Local_961[iLocal_86414] + 36) = { StackVal, StackVal, *(&Local_327 + 216[iLocal_8646]) };
		Local_961[iLocal_86414].f_48 = 0;
		Local_961[iLocal_86414].f_52 = 3;
		TASK_STAND_STILL(Local_961[iLocal_86414], -1.0f, 0, 0);
		iLocal_864++;
	}
	strcpy(&Local_961[014] + 4, "chair_sit_newspaper", 32);
	strcpy(&Local_961[114] + 4, "bench_chair", 32);
	strcpy(&Local_961[214] + 4, "look_distance_binocs", 32);
	strcpy(&Local_961[314] + 4, "nsit_docks", 32);
	strcpy(&Local_961[414] + 4, "bench_chair", 32);
	strcpy(&Local_961[514] + 4, "nlean_rail", 32);
	strcpy(&Local_961[614] + 4, "rand_idle_nearwall", 32);
	Local_961[414].f_48 = 1;
	Local_961[514].f_48 = 1;
	iLocal_864 = 0;
	while (iLocal_864 < 6)
	{
		if (Local_961[iLocal_86414].f_48 == 0)
		{
			Local_961[iLocal_86414].f_52 = 1;
		}
		else
		{
			Local_961[iLocal_86414].f_52 = 0;
		}
		iLocal_864++;
	}
	return;
}

void Function_405() //Position: 0x1490D / 84237
{
	Local_327.f_152 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_327, "GringoTrainStation"));
	(*&Local_327 + 92)[02] = CREATE_ACTOR_IN_LAYOUT(Local_327, "Sitting01wf", 87, -2198.367f, 16.9556f, 2610.512f, 0.0f, 90.0f, 0.0f);
	SQUAD_JOIN((*&Local_327 + 92)[02], Local_327.f_152);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_327 + 92)[02], 1);
	TASK_STAND_STILL((*&Local_327 + 92)[02], -1.0f, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_327 + 92)[02], 0);
	TASK_STAND_STILL((*&Local_327 + 92)[02], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_327 + 92)[02], 1);
	TASK_PRIORITY_SET((*&Local_327 + 92)[02], 2);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_327 + 92)[02], 2);
	(*&Local_327 + 92)[12] = CREATE_ACTOR_IN_LAYOUT(Local_327, "nSitting02", 79, -2192.573f, 16.96881f, 2608.164f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_327 + 92)[12], Local_327.f_152);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_327 + 92)[12], 1);
	TASK_STAND_STILL((*&Local_327 + 92)[12], -1.0f, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_327 + 92)[12], 0);
	TASK_STAND_STILL((*&Local_327 + 92)[12], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_327 + 92)[12], 1);
	TASK_PRIORITY_SET((*&Local_327 + 92)[12], 2);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_327 + 92)[12], 2);
	(*&Local_327 + 92)[22] = CREATE_ACTOR_IN_LAYOUT(Local_327, "UsingBinoculars", 195, -2208.033f, 19.75f, 2616.455f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_327 + 92)[22], Local_327.f_152);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_327 + 92)[22], 1);
	TASK_STAND_STILL((*&Local_327 + 92)[22], -1.0f, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_327 + 92)[22], 0);
	TASK_STAND_STILL((*&Local_327 + 92)[22], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_327 + 92)[22], 1);
	TASK_PRIORITY_SET((*&Local_327 + 92)[22], 2);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_327 + 92)[22], 2);
	(*&Local_327 + 92)[32] = CREATE_ACTOR_IN_LAYOUT(Local_327, "SittingOnLedge", 308, -2205.345f, 19.75f, 2619.271f, 0.0f, 270.0f, 0.0f);
	SQUAD_JOIN((*&Local_327 + 92)[32], Local_327.f_152);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_327 + 92)[32], 1);
	TASK_STAND_STILL((*&Local_327 + 92)[32], -1.0f, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_327 + 92)[32], 0);
	TASK_STAND_STILL((*&Local_327 + 92)[32], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_327 + 92)[32], 1);
	TASK_PRIORITY_SET((*&Local_327 + 92)[32], 2);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_327 + 92)[32], 2);
	(*&Local_327 + 92)[42] = CREATE_ACTOR_IN_LAYOUT(Local_327, "OffTrain01", 705, -2203.758f, 16.52159f, 2607.877f, 0.0f, 270.0f, 0.0f);
	SQUAD_JOIN((*&Local_327 + 92)[42], Local_327.f_152);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_327 + 92)[42], 1);
	TASK_STAND_STILL((*&Local_327 + 92)[42], -1.0f, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_327 + 92)[42], 0);
	TASK_STAND_STILL((*&Local_327 + 92)[42], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_327 + 92)[42], 1);
	TASK_PRIORITY_SET((*&Local_327 + 92)[42], 2);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_327 + 92)[42], 2);
	(*&Local_327 + 92)[52] = CREATE_ACTOR_IN_LAYOUT(Local_327, "OffTrain02", 714, -2200.303f, 16.506f, 2614.713f, 0.0f, 260.0f, 0.0f);
	SQUAD_JOIN((*&Local_327 + 92)[52], Local_327.f_152);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_327 + 92)[52], 1);
	TASK_STAND_STILL((*&Local_327 + 92)[52], -1.0f, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_327 + 92)[52], 0);
	TASK_STAND_STILL((*&Local_327 + 92)[52], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_327 + 92)[52], 1);
	TASK_PRIORITY_SET((*&Local_327 + 92)[52], 2);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_327 + 92)[52], 2);
	(*&Local_327 + 92)[62] = CREATE_ACTOR_IN_LAYOUT(Local_327, "LeaningLeft", 95, -2198.367f, 16.9556f, 2610.512f, 0.0f, 90.0f, 0.0f);
	SQUAD_JOIN((*&Local_327 + 92)[62], Local_327.f_152);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_327 + 92)[62], 1);
	TASK_STAND_STILL((*&Local_327 + 92)[62], -1.0f, 0, 0);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE((*&Local_327 + 92)[62], 0);
	TASK_STAND_STILL((*&Local_327 + 92)[62], -1.0f, 0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_327 + 92)[62], 1);
	TASK_PRIORITY_SET((*&Local_327 + 92)[62], 2);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_327 + 92)[62], 2);
	return;
}

bool Function_406() //Position: 0x14D78 / 85368
{
	Function_313(0);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
	Function_335();
	if (iLocal_840[0] == 0)
	{
		Function_240(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
		SET_ACTOR_HEALTH(bLocal_904, GET_ACTOR_MAX_HEALTH(bLocal_904));
		FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
		Function_227((*&Local_4 + 888)[0]);
		vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 888)[0]) };
		TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_915, GET_OBJECT_HEADING((*&Local_4 + 888)[0]), 1, 1, 1);
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(17, 30, 0));
	}
	return 1;
}

void Function_407() //Position: 0x14DE2 / 85474
{
	bool bVar0;
	
	bVar0 = Function_408(Global_30679[1], "fortmercer", "corralprops", 1);
	if (IS_DOOR_VALID(bVar0))
	{
		if (IS_DOOR_OPENED(bVar0))
		{
			CLOSE_DOOR_FAST(bVar0);
		}
		if (!IS_DOOR_LOCKED(bVar0))
		{
			Function_128(bVar0, 1);
		}
	}
	bVar0 = Function_408(Global_30679[1], "fortmercer", "corralprops", 2);
	if (IS_DOOR_VALID(bVar0))
	{
		if (IS_DOOR_OPENED(bVar0))
		{
			CLOSE_DOOR_FAST(bVar0);
		}
		if (!IS_DOOR_LOCKED(bVar0))
		{
			Function_128(bVar0, 1);
		}
	}
	bVar0 = Function_408(Global_30679[1], "fortmercer", "guardTowerProps", 7);
	if (IS_DOOR_VALID(bVar0))
	{
		if (IS_DOOR_OPENED(bVar0))
		{
			CLOSE_DOOR_FAST(bVar0);
		}
		if (!IS_DOOR_LOCKED(bVar0))
		{
			Function_128(bVar0, 1);
		}
	}
	bVar0 = Function_408(Global_30679[1], "fortmercer", "guardTowerProps", 8);
	if (IS_DOOR_VALID(bVar0))
	{
		if (IS_DOOR_OPENED(bVar0))
		{
			CLOSE_DOOR_FAST(bVar0);
		}
		if (!IS_DOOR_LOCKED(bVar0))
		{
			Function_128(bVar0, 1);
		}
	}
	return;
}

bool Function_408(int iParam0, var uParam1, char* cParam2, int iParam3) //Position: 0x14F29 / 85801
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_87(iParam0))
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
	uVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(Global_29155[iParam010].f_32, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(uVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(uVar10);
}

void Function_409() //Position: 0x14FC5 / 85957
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (Function_571(Global_30640[0]) && IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 812)[2]))
	{
		if (!SQUAD_IS_VALID(Local_4.f_544))
		{
			Function_411();
			Function_410(Local_4.f_544, 2);
		}
		else
		{
			if (IS_ACTOR_VALID((*&Local_4 + 520)[02]))
			{
				Function_227((*&Local_4 + 1172)[2]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1172)[2]) };
				iVar0 = LOCATE_GRINGO_OF_TYPE("nuse_shelf", &vLocal_915, 1.0f, 1);
				Function_227((*&Local_4 + 1172)[3]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1172)[3]) };
				iVar1 = LOCATE_GRINGO_OF_TYPE("nbartender", &vLocal_915, 1.0f, 1);
				if (GET_TASK_STATUS((*&Local_4 + 520)[02], 0) != 1)
				{
					iVar2 = TASK_SEQUENCE_OPEN();
					if (IS_GRINGO_VALID(iVar0))
					{
						TASK_USE_GRINGO(false, iVar0, "UseCase1", 1, 1);
					}
					if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Local_1061[416])))
					{
						TASK_USE_GRINGO(false, GET_CURRENT_GRINGO(Local_1061[416]), "Barman", 1, 1);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 520)[02], iVar2);
					TASK_SEQUENCE_RELEASE(iVar2, 1);
				}
			}
			if (IS_ACTOR_VALID((*&Local_4 + 520)[12]))
			{
				Function_227((*&Local_4 + 1172)[1]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1172)[1]) };
				bVar0 = LOCATE_GRINGO_OF_TYPE("browse_table", &vLocal_915, 1.0f, 1);
				Function_227((*&Local_4 + 1172)[0]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1172)[0]) };
				iVar1 = LOCATE_GRINGO_OF_TYPE("cooking", &vLocal_915, 1.0f, 1);
				if (GET_TASK_STATUS((*&Local_4 + 520)[12], 0) != 1)
				{
					iVar3 = TASK_SEQUENCE_OPEN();
					if (IS_GRINGO_VALID(iVar1))
					{
						TASK_USE_GRINGO(false, iVar1, "UseCase1", 1, 1);
					}
					if (IS_GRINGO_VALID(bVar0))
					{
						TASK_USE_GRINGO(false, bVar0, "UseCase1", 1, 1);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM((*&Local_4 + 520)[12], iVar3);
					TASK_SEQUENCE_RELEASE(iVar3, 1);
				}
			}
		}
	}
	return;
}

void Function_410(var uParam0, int iParam1) //Position: 0x1518D / 86413
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(uParam0))
	{
		return;
	}
	while (iVar0 <= SQUAD_GET_SIZE(uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(uParam0, iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_PRIORITY_SET(bVar1, iParam1);
		}
		iVar0++;
	}
	return;
}

void Function_411() //Position: 0x151C8 / 86472
{
	Local_4.f_540 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "BehindTheBarset", 0);
	Local_4.f_544 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "BehindTheBar"));
	(*&Local_4 + 520)[02] = Function_412(&Global_6298, &Global_7189, 2, -2162.888f, 16.44941f, 2596.0f, 0.0f, 0.0f, 0.0f, 1);
	ADD_ACTORSET_MEMBER(Local_4.f_540, (*&Local_4 + 520)[02]);
	SQUAD_JOIN((*&Local_4 + 520)[02], Local_4.f_544);
	TASK_STAND_STILL((*&Local_4 + 520)[02], -1.0f, 0, 0);
	TASK_STAND_STILL((*&Local_4 + 520)[02], -1.0f, 0, 0);
	(*&Local_4 + 520)[12] = Function_412(&Global_6298, &Global_7189, 8, -2162.639f, 16.87441f, 2599.806f, 0.0f, 0.0f, 0.0f, 1);
	ADD_ACTORSET_MEMBER(Local_4.f_540, (*&Local_4 + 520)[12]);
	SQUAD_JOIN((*&Local_4 + 520)[12], Local_4.f_544);
	TASK_STAND_STILL((*&Local_4 + 520)[12], -1.0f, 0, 0);
	TASK_STAND_STILL((*&Local_4 + 520)[12], -1.0f, 0, 0);
	return;
}

var Function_412(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0x152CC / 86732
{
	var uVar0;
	bool bVar1;
	
	uVar0 = iParam2;
	bVar1 = Function_413(uParam0, uParam1, uVar0, iParam9, 0, 1);
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

var Function_413(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0x153B3 / 86963
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	
	iVar0 = uParam2;
	if (!iVar0 > *uParam0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_187(uParam0[iVar02], 1))
	{
		return "";
	}
	if (!Function_187(uParam0[iVar02], 2))
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
			if (!Function_187(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 1, false);
				Function_184(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	else if (IS_EARLIER_THAN(StackVal, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &vVar2);
		uParam1[iVar03]->f_8 = Function_415(StackVal, StackVal, StackVal, Global_6289, Function_56(), (*uParam1)[iVar03], vVar2, 0x42700000);
		if (IS_PERS_CHAR_VALID(StackVal))
		{
			if (!Function_187(uParam0[iVar02], 8))
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 1, false);
				Function_184(uParam0[iVar02], 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
			bVar1 = GET_ACTOR_FROM_PERS_CHAR(StackVal);
		}
	}
	if (!IS_ACTOR_VALID(bVar1))
	{
		return "";
	}
	Function_184(uParam0[iVar02], 1);
	Function_414(StackVal, 1);
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

int Function_414(int iParam0, bool bParam1) //Position: 0x15549 / 87369
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(uParam0))
	{
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(iParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			REFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 1);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 0);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
			if (bParam1)
			{
				if (IS_ACTOR_HOGTIED(bVar0))
				{
					FREE_FROM_HOGTIE(bVar0);
				}
			}
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(iParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(iParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_415(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x155EB / 87531
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
	uVar3 = CREATE_PERS_CHAR_IN_LAYOUT(uParam0, uParam1, uParam2, vParam4, fParam7);
	if (!IS_PERS_CHAR_VALID(uVar3))
	{
		return "";
	}
	bVar4 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(iVar3), "Persistent_Char_Brain", uParam3, vVar0, vVar0);
	if (IS_OBJECT_VALID(bVar4))
	{
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(iVar3), Function_56(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(iVar3);
		return "";
	}
	*(&Var5 + 36) = { StackVal, StackVal, vParam4 };
	Var5 = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 12) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 24) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 48) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 60) = { StackVal, StackVal, *(&Var5 + 36) };
	Var5.f_72 = uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar4), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &Var5, 20);
	return iVar3;
}

void Function_416() //Position: 0x15704 / 87812
{
	int iVar0;
	
	switch (iLocal_1176)
	{
		case 0x00000000:
			if (GET_TASK_STATUS(bLocal_910, 19) != 1)
			{
				Function_227((*&Local_4 + 1144)[0]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1144)[0]) };
				iVar0 = LOCATE_GRINGO_OF_TYPE("wall_phone", &vLocal_915, 2.0f, 1);
				if (IS_GRINGO_VALID(iVar0))
				{
					SNAP_ACTOR_TO_GRINGO(bLocal_910, GET_OBJECT_FROM_GRINGO(bVar0), "usecase1", 1, 1, 1);
					TASK_USE_GRINGO(bLocal_910, bVar0, "usecase1", 4294967295, 1);
				}
			}
			else
			{
				iLocal_1176 = 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(bLocal_910)))
			{
				if (iLocal_1183 >= 2 || bLocal_739 == 0)
				{
					if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_910)))
					{
						if (!DECOR_CHECK_EXIST(bLocal_910, "lowpriority"))
						{
							SET_ACTOR_UPDATE_PRIORITY(bLocal_910, 2);
							DECOR_SET_BOOL(bLocal_910, "lowpriority", 1);
						}
					}
					else
					{
						if (DECOR_CHECK_EXIST(bLocal_910, "lowpriority"))
						{
							DECOR_REMOVE(bLocal_910, "lowpriority");
							SET_ACTOR_UPDATE_PRIORITY(bLocal_910, 1);
						}
						iLocal_1176 = 0;
					}
				}
				else if (GET_TASK_STATUS(bLocal_910, 10) != 1)
				{
					TASK_WANDER(bLocal_910, -1.0f);
					iLocal_1176 = 2;
				}
			}
			else
			{
				TASK_CLEAR(bLocal_910);
				TASK_FLEE_ACTOR(bLocal_910, GET_LAST_ATTACKER(bLocal_910), -1.0f, -1.0f, 0, 0, 0);
				iLocal_1176 = 2;
			}
			break;
		
		case 0x00000002:
			if (iLocal_1183 < 2 || bLocal_739 == 0)
			{
				if (GET_TASK_STATUS(bLocal_910, 10) != 1)
				{
					TASK_WANDER(bLocal_910, -1.0f);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_910, (*&Local_327 + 156)[1], 1, 2);
					RELEASE_ACTOR(bLocal_910);
				}
			}
			break;
	}
	return;
}

void Function_417() //Position: 0x158A3 / 88227
{
	switch (iLocal_1175)
	{
		case 0x00000000:
			if (GET_TASK_STATUS(bLocal_909, 19) != 1)
			{
				SNAP_ACTOR_TO_GRINGO(bLocal_909, Local_4.f_1272, "usecase1", 1, 1, 1);
				TASK_USE_GRINGO(bLocal_909, GET_GRINGO_FROM_OBJECT(Local_4.f_1272), "usecase1", 4294967295, 1);
			}
			else
			{
				iLocal_1175 = 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(bLocal_909)))
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_909)))
				{
					if (!DECOR_CHECK_EXIST(bLocal_909, "lowpriority"))
					{
						SET_ACTOR_UPDATE_PRIORITY(bLocal_909, 2);
						DECOR_SET_BOOL(bLocal_909, "lowpriority", 1);
					}
				}
				else
				{
					if (DECOR_CHECK_EXIST(bLocal_909, "lowpriority"))
					{
						DECOR_REMOVE(bLocal_909, "lowpriority");
						SET_ACTOR_UPDATE_PRIORITY(bLocal_909, 1);
					}
					iLocal_1175 = 0;
				}
			}
			else
			{
				TASK_CLEAR(bLocal_909);
				TASK_FLEE_ACTOR(bLocal_909, GET_LAST_ATTACKER(bLocal_909), -1.0f, -1.0f, 0, 0, 0);
				iLocal_1175 = 2;
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

void Function_418() //Position: 0x159BA / 88506
{
	int iVar0;
	
	if (bLocal_739 != 0 || (iLocal_1178 >= 0 && bLocal_739 != 1))
	{
		switch (iLocal_1060)
		{
			case 0x00000000:
				if (GET_TASK_STATUS(bLocal_907, 19) != 1)
				{
					Function_227((*&Local_4 + 1072)[0]);
					vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1072)[0]) };
					iVar0 = LOCATE_GRINGO_OF_TYPE("sit_piano_w_piano", &vLocal_915, 1.0f, 1);
					if (IS_GRINGO_VALID(iVar0))
					{
						SNAP_ACTOR_TO_GRINGO(bLocal_907, GET_OBJECT_FROM_GRINGO(bVar0), "usecase1", 1, 1, 1);
						TASK_USE_GRINGO(bLocal_907, bVar0, "usecase1", 4294967295, 1);
					}
				}
				else
				{
					iLocal_1060 = 1;
				}
				break;
			
			case 0x00000001:
				if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(bLocal_907)))
				{
					if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_907)))
					{
						iLocal_1060 = 0;
					}
				}
				else
				{
					TASK_CLEAR(bLocal_907);
					TASK_FLEE_ACTOR(bLocal_907, GET_LAST_ATTACKER(bLocal_907), -1.0f, -1.0f, 0, 0, 0);
					iLocal_1060 = 2;
				}
				break;
			
			case 0x00000002:
				break;
		}
	}
	else if ((iLocal_1178 < 0 && bLocal_739 != 1) && !DECOR_CHECK_EXIST(bLocal_907, "taskcleared"))
	{
		TASK_CLEAR(bLocal_907);
		DECOR_SET_BOOL(bLocal_907, "taskcleared", 1);
	}
	return;
}

void Function_419(int iParam0) //Position: 0x15AEE / 88814
{
	bool bVar0;
	
	bVar0 = LOCATE_ACTOR_OF_TYPE(*(iParam0 + 4), 5.0f, 23, 4294967295);
	if ((((IS_ACTOR_VALID(bVar0) && bVar0 == bLocal_905) && bVar0 == bLocal_906) && GET_MOUNT(Global_34573) == bVar0) && GET_MOST_RECENT_MOUNT(Global_34573) == bVar0)
	{
		DESTROY_ACTOR(bVar0);
	}
	return;
}

void Function_420(int iParam0) //Position: 0x15B32 / 88882
{
	int iVar0;
	
	if (!IS_ACTOR_VALID(*iParam0))
	{
		return;
	}
	switch (iParam0->f_48)
	{
		case 0x00000000:
			if (GET_TASK_STATUS(*iParam0, 19) != 1)
			{
				iVar0 = LOCATE_GRINGO_OF_TYPE(iParam0 + 4, iParam0 + 36, 2.0f, 1);
				if (IS_GRINGO_VALID(iVar0))
				{
					SNAP_ACTOR_TO_GRINGO(*iParam0, GET_OBJECT_FROM_GRINGO(bVar0), "usecase1", 1, 1, 1);
					TASK_USE_GRINGO(*iParam0, bVar0, "usecase1", 4294967295, 1);
				}
				else if (!Function_290(iParam0 + 52))
				{
					Function_384(iParam0 + 52);
				}
				else if (Function_288(iParam0 + 52) < 6.0f)
				{
					DESTROY_ACTOR(*iParam0);
				}
			}
			else
			{
				iParam0->f_48 = 1;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(GET_LAST_ATTACKER(*iParam0)))
			{
				TASK_CLEAR(*iParam0);
				TASK_FLEE_ACTOR(*iParam0, GET_LAST_ATTACKER(*iParam0), -1.0f, -1.0f, 0, 0, 0);
				iParam0->f_48 = 2;
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

void Function_421() //Position: 0x15C13 / 89107
{
	switch (iLocal_1178)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING(Global_34573) && GET_RIDER(bLocal_905) != Global_34573)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, Local_4.f_716))
				{
					HUD_CLEAR_HELP_QUEUE();
					Function_140("Intro01_Stop_Horse_v2", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_1178 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_290(&iLocal_874))
			{
				Function_384(&iLocal_874);
			}
			if (Function_288(&iLocal_874) < 3.0f)
			{
				TRAIN_SET_MAX_ACCEL(iLocal_943, 3.5f);
				TRAIN_SET_TARGET_SPEED(iLocal_943, 8.75f);
				TRAIN_SET_AUTOPILOT_ENABLE(iLocal_943, 1);
				TRAIN_SET_TARGET_POS(iLocal_943, &Local_327 + 388[46]);
				Function_293(&iLocal_877);
				Function_293(&iLocal_874);
				iLocal_1178 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_288(&iLocal_874) < 2.0f)
			{
				if (Function_422(StackVal, StackVal, bLocal_904, *(&Local_327 + 388[56])) > 20.0f)
				{
					SET_ACTION_NODE_FOR_ACTOR(bLocal_906, "horse_main/melee/rearup");
				}
				Function_293(&iLocal_874);
				iLocal_1178 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_288(&iLocal_874) < 7.0f)
			{
				Function_293(&iLocal_874);
				iLocal_933 = 1;
				AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_07", "PASTORAL", 0f, 4294967295, 4294967295, 3212836864, 0);
				iLocal_1201 = 12;
				iLocal_1180 = 2;
				iLocal_1185 = 0;
				iLocal_1178 = 4;
				Function_293(&iLocal_874);
			}
			break;
		
		case 0x00000004:
			break;
	}
	return;
}

float Function_422(bool bParam0, vector3 vParam1) //Position: 0x15D94 / 89492
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_320(bParam0);
		vVar0 = { StackVal, StackVal, Function_320(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_423() //Position: 0x15E0E / 89614
{
	switch (iLocal_1200)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME(bLocal_904, (*&Local_4 + 736)[3]))
			{
				iLocal_1201 = 10;
				iLocal_1200 = 1;
			}
			break;
		
		case 0x00000001:
			Function_227((*&Local_4 + 1044)[3]);
			vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1044)[3]) };
			STREAMING_LOAD_BOUNDS_EXT(0, vLocal_915, 5.0f, 1);
			if (IS_ACTOR_RIDING(Global_34573) && GET_RIDER(bLocal_905) != Global_34573)
			{
				if (STREAMING_ARE_BOUNDS_LOADED(vLocal_915, 5.0f))
				{
					Function_227((*&Local_4 + 1044)[4]);
					vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1044)[4]) };
					if (Function_319(StackVal, StackVal, Global_34573, vLocal_915, 100.0f))
					{
						Function_227((*&Local_4 + 1044)[3]);
						vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1044)[3]) };
						Function_371((*&Local_4 + 1044)[3]);
						vLocal_918 = { StackVal, StackVal, Function_371((*&Local_4 + 1044)[3]) };
						CREATE_CORPSE_IN_LAYOUT_RANDOM(bLocal_510, "Deer", 1118, vLocal_915, vLocal_918, "dead_ground_deer");
						CLEAR_AREA_OF_GRASS(vLocal_915, 2.0f);
						CREATE_DECAL(0, vLocal_915, 1.0f, 1, 1);
						Function_445();
						iLocal_864 = 0;
						while (iLocal_864 < 2)
						{
							Function_227((*&Local_4 + 1044)[iLocal_864]);
							vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1044)[iLocal_864]) };
							Function_371((*&Local_4 + 1044)[iLocal_864]);
							vLocal_915 = { StackVal, StackVal, Function_371((*&Local_4 + 1044)[iLocal_864]) };
							uLocal_924[iLocal_864] = CREATE_GRINGO_IN_LAYOUT(bLocal_510, Function_56(), "coyote_eating", vLocal_915, vLocal_918);
							GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(uLocal_924[iLocal_864]), 0);
							TASK_USE_GRINGO((*&Local_4 + 564)[iLocal_8642], GET_GRINGO_FROM_OBJECT(uLocal_924[iLocal_864]), "usecase1", 4294967295, 1);
							iLocal_864++;
						}
						iLocal_1200 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_227((*&Local_4 + 1044)[3]);
			vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1044)[3]) };
			if (Function_319(StackVal, StackVal, Global_34573, vLocal_915, 25.0f) && !DECOR_CHECK_EXIST(bLocal_510, "bark"))
			{
				uLocal_947 = GET_SOUND_ID();
				PLAY_SOUND_FROM_ACTOR((*&Local_4 + 564)[02], "COYOTE_BARK_MASTER", Global_34573);
				DECOR_SET_BOOL(bLocal_510, "bark", 1);
			}
			if ((IS_ACTOR_RIDING(Global_34573) && GET_RIDER(bLocal_905) != Global_34573) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_592) < 0)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 736)[0]) || IS_ACTOR_IN_VOLUME(bLocal_904, (*&Local_4 + 736)[0]))
				{
					if (!DECOR_CHECK_EXIST(bLocal_510, "bark"))
					{
						uLocal_947 = GET_SOUND_ID();
						PLAY_SOUND_FROM_ACTOR((*&Local_4 + 564)[02], "COYOTE_BARK_MASTER", Global_34573);
					}
					STREAMING_UNLOAD_BOUNDS();
					Function_140("help_poi_focus", 0x41200000, 1, 0, 2, 1, 0);
					Function_227((*&Local_4 + 1044)[4]);
					vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1044)[4]) };
					bLocal_946 = CREATE_CAMERA_FOCUS_POINT(bLocal_510, "camfoc", vLocal_915, 50.0f, 60.0f);
					SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_946, 1);
					SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_946, "Intro01_look_coyotes");
					Function_332();
					Function_227((*&Local_4 + 1212)[4]);
					vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1212)[4]) };
					TASK_BIRD_SOAR_AT_COORD((*&Local_4 + 596)[02], &vLocal_915, -1.0f, 60.0f);
					Function_227((*&Local_4 + 1212)[5]);
					vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1212)[5]) };
					TASK_BIRD_SOAR_AT_COORD((*&Local_4 + 596)[12], &vLocal_915, -1.0f, 60.0f);
					Function_227((*&Local_4 + 1212)[6]);
					vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1212)[6]) };
					TASK_BIRD_SOAR_AT_COORD((*&Local_4 + 596)[22], &vLocal_915, -1.0f, 60.0f);
					Function_227((*&Local_4 + 1212)[7]);
					vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1212)[7]) };
					TASK_BIRD_SOAR_AT_COORD((*&Local_4 + 596)[32], &vLocal_915, -1.0f, 60.0f);
					iLocal_1200 = 3;
					iLocal_1201 = 16;
				}
			}
			else
			{
				iLocal_1200 = 3;
				iLocal_1201 = 18;
			}
			break;
		
		case 0x00000003:
			if (!DECOR_CHECK_EXIST(Local_4.f_592, "fleeing"))
			{
				if (Function_443(Local_4.f_592, Global_34573, 20.0f, 1))
				{
					iLocal_864 = 0;
					while (iLocal_864 < 2)
					{
						if (IS_ACTOR_VALID((*&Local_4 + 564)[iLocal_8642]))
						{
							if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 736)[0]))
							{
								TASK_FLEE_ACTOR((*&Local_4 + 564)[iLocal_8642], Global_34573, 100.0f, -1.0f, 0, 0, 0);
							}
							else
							{
								TASK_FLEE_ACTOR((*&Local_4 + 564)[iLocal_8642], bLocal_904, 100.0f, -1.0f, 0, 0, 0);
							}
							RELEASE_ACTOR((*&Local_4 + 564)[iLocal_8642]);
						}
						iLocal_864++;
					}
					DECOR_SET_BOOL(Local_4.f_592, "fleeing", 1);
				}
			}
			if (IS_ACTOR_RIDING(Global_34573) && GET_RIDER(bLocal_905) != Global_34573)
			{
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 736)[1]))
				{
					iLocal_1200 = 4;
					iLocal_1201 = 14;
				}
			}
			break;
		
		case 0x00000004:
			break;
	}
	switch (iLocal_1201)
	{
		case 0x00000000:
			switch (Function_442())
			{
				case 0x00000000:
					Function_441();
					break;
				
				default:
					Function_441();
					break;
			}
			iLocal_1180 = 0;
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_904)))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_904, 325, 0, 2, 0);
			}
			iLocal_1201 = 1;
			break;
		
		case 0x00000001:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_510, "horsecontroltut")) < 4.0f)
			{
				iLocal_1190[0] = 1;
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				Function_361("INTRO01_OBJ04", 0x40f00000, 1, 2, 0, 0, 0, 0);
				DECOR_REMOVE(bLocal_510, "horsecontroltut");
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_904)))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_904, 325, 0, 2, 0);
				}
				iLocal_1201 = 18;
			}
			break;
		
		case 0x00000002:
			if (iLocal_938 == 0)
			{
				switch (Function_442())
				{
					case 0x00000000:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_offHorse_v1", "Intro01_offHorse_v1", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						break;
					
					case 0x00000001:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_offHorse_v2", "Intro01_offHorse_v2", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						break;
					
					default:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_offHorse_v1", "Intro01_offHorse_v1", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						break;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_thrownHorse", "Intro01_thrownHorse", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
				iLocal_938 = 0;
			}
			iLocal_1201 = 3;
			break;
		
		case 0x00000003:
			iLocal_1202[2] = 1;
			if (iLocal_1202[14] == 0)
			{
				if (!IS_ACTOR_RIDING(Global_34573))
				{
				}
			}
			iLocal_1201 = 18;
			break;
		
		case 0x00000004:
			if (iLocal_935 == 0)
			{
				switch (Function_442())
				{
					case 0x00000000:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_FarAhead", "Intro01_FarAhead", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						break;
					
					default:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_FarAhead", "Intro01_FarAhead", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						break;
					}
			}
			iLocal_1201 = 5;
			break;
		
		case 0x00000005:
			iLocal_1202[4] = 1;
			if (iLocal_934 == 0)
			{
				Function_252();
				Function_361("GUIDE_RETURN", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			iLocal_1201 = 18;
			break;
		
		case 0x00000006:
			if (iLocal_935 == 0)
			{
				switch (Function_442())
				{
					case 0x00000000:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_FarBehind", "Intro01_FarBehind", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						break;
					
					default:
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_FarBehind", "Intro01_FarBehind", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						break;
					}
			}
			iLocal_1201 = 7;
			break;
		
		case 0x00000007:
			iLocal_1202[6] = 1;
			if (iLocal_934 == 0)
			{
				Function_252();
				Function_361("GUIDE_RETURN", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			iLocal_1201 = 18;
			break;
		
		case 0x00000008:
			switch (Function_442())
			{
				case 0x00000000:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_ComesBack", "Intro01_ComesBack", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
					break;
				
				default:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_904, "Intro01_ComesBack", "Intro01_ComesBack", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
					break;
			}
			iLocal_1201 = 9;
			break;
		
		case 0x00000009:
			iLocal_1202[8] = 1;
			if (iLocal_934 == 0)
			{
				if (Function_440(Global_34573, bLocal_904, 60.0f))
				{
					Function_252();
					Function_361("INTRO01_OBJ04", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
			}
			iLocal_1201 = 10;
			break;
		
		case 0x0000000C:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_288(&iLocal_877) < 5.0f)
			{
				if (!iLocal_936)
				{
					if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_longbanter_v1_AA"))
					{
						Function_439();
					}
					else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_ride_V1_AA"))
					{
						Function_438();
					}
					else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_ride_V2_AA"))
					{
						Function_437();
					}
					else
					{
						Function_436();
						DECOR_SET_BOOL(bLocal_510, "playednotalk", 1);
					}
				}
				iLocal_936 = 1;
				iLocal_1200 = 0;
				iLocal_1201 = 13;
			}
			break;
		
		case 0x0000000D:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1202[12] = 1;
				iLocal_1201 = 10;
			}
			break;
		
		case 0x0000000A:
			if (!Function_290(&iLocal_901))
			{
				Function_384(&iLocal_901);
			}
			Function_227((*&Local_4 + 1044)[4]);
			vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1044)[4]) };
			if (!Function_319(StackVal, StackVal, Global_34573, vLocal_915, 100.0f))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_288(&iLocal_901) < 10.0f)
					{
						if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_shortbanter_V5_AA"))
						{
							Function_435();
						}
						else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_shortbanter_V1_AA"))
						{
							Function_434();
						}
						else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_shortbanter_V2_AA"))
						{
							Function_433();
						}
						else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_shortbanter_V3_AA"))
						{
							Function_432();
						}
						else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_shortbanter_V4_AA"))
						{
							Function_431();
						}
						else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Intro01_shortbanter_V6_AA"))
						{
							Function_430();
						}
						else if (!DECOR_CHECK_EXIST(bLocal_510, "playednotalk"))
						{
							Function_436();
							iLocal_937 = 1;
							iLocal_1201 = 11;
						}
						else
						{
							iLocal_937 = 1;
							iLocal_1201 = 11;
						}
					}
				}
				else
				{
					Function_293(&iLocal_901);
				}
			}
			else
			{
				iLocal_937 = 1;
				iLocal_1201 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_937 = 0;
				iLocal_1202[10] = 1;
				iLocal_1201 = 18;
			}
			break;
		
		case 0x00000010:
			switch (Function_442())
			{
				case 0x00000000:
					Function_429();
					break;
				
				case 0x00000001:
					Function_428();
					break;
				
				default:
					Function_429();
					break;
			}
			STOP_SOUND(uLocal_947);
			iLocal_1201 = 17;
			break;
		
		case 0x00000011:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1202[16] = 1;
				iLocal_1201 = 18;
			}
			break;
		
		case 0x0000000E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				switch (Function_442())
				{
					case 0x00000001:
						Function_427();
						break;
					
					default:
						Function_424();
						break;
				}
				iLocal_935 = 1;
				iLocal_1201 = 15;
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1202[14] = 1;
				iLocal_1201 = 18;
			}
			break;
		
		case 0x00000012:
			break;
	}
	return;
}

void Function_424() //Position: 0x16AB2 / 92850
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_near_V1", "Intro01_near_V1", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_425(int iParam0) //Position: 0x16AF9 / 92921
{
	Function_426(0, Global_34573, iParam0, 0);
	Function_426(1, bLocal_904, iParam0, 0);
	return;
}

void Function_426(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x16B13 / 92947
{
	var uVar0;
	
	iParam3 = iParam3;
	if (Function_3(uParam2, Function_147(iParam0)))
	{
		uVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(uVar0, bParam1, 0);
	}
}

void Function_427() //Position: 0x16B38 / 92984
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_near_V2", "Intro01_near_V2", 0, 2, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_428() //Position: 0x16B7F / 93055
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_deadbody_V1", "Intro01_deadbody_V1", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_429() //Position: 0x16BCE / 93134
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_deaddeer_V1", "Intro01_deaddeer_V1", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_430() //Position: 0x16C1D / 93213
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V6_AA", "Intro01_shortbanter_V6_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V6_AB", "Intro01_shortbanter_V6_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V6_AC", "Intro01_shortbanter_V6_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V6_AD", "Intro01_shortbanter_V6_AD", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V6_AE", "Intro01_shortbanter_V6_AE", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_431() //Position: 0x16D7C / 93564
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V4_AA", "Intro01_shortbanter_V4_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V4_AB", "Intro01_shortbanter_V4_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V4_AC", "Intro01_shortbanter_V4_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V4_AD", "Intro01_shortbanter_V4_AD", 1, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_432() //Position: 0x16E9A / 93850
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V3_AA", "Intro01_shortbanter_V3_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V3_AB", "Intro01_shortbanter_V3_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V3_AC", "Intro01_shortbanter_V3_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V3_AD", "Intro01_shortbanter_V3_AD", 1, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_433() //Position: 0x16FB8 / 94136
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V2_AA", "Intro01_shortbanter_V2_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V2_AB", "Intro01_shortbanter_V2_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V2_AC", "Intro01_shortbanter_V2_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V2_AD", "Intro01_shortbanter_V2_AD", 1, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_434() //Position: 0x170D6 / 94422
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V1_AA", "Intro01_shortbanter_V1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V1_AB", "Intro01_shortbanter_V1_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V1_AC", "Intro01_shortbanter_V1_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V1_AD", "Intro01_shortbanter_V1_AD", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V1_AE", "Intro01_shortbanter_V1_AE", 1, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_435() //Position: 0x17235 / 94773
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V5_AA", "Intro01_shortbanter_V5_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V5_AB", "Intro01_shortbanter_V5_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V5_AC1", "Intro01_shortbanter_V5_AC1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V5_AC2", "Intro01_shortbanter_V5_AC2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V5_AD", "Intro01_shortbanter_V5_AD", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_shortbanter_V5_AE", "Intro01_shortbanter_V5_AE", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_shortbanter_V5_AF", "Intro01_shortbanter_V5_AF", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_436() //Position: 0x1741A / 95258
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_notalk_V1", "Intro01_notalk_V1", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_437() //Position: 0x17465 / 95333
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_ride_V2_AA", "Intro01_ride_V2_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_ride_V2_AB", "Intro01_ride_V2_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_ride_V2_AC", "Intro01_ride_V2_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_ride_V2_AD", "Intro01_ride_V2_AD", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_ride_V2_AE", "Intro01_ride_V2_AE", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_438() //Position: 0x1757E / 95614
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_ride_V1_AA", "Intro01_ride_V1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_ride_V1_AB", "Intro01_ride_V1_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_ride_V1_AC", "Intro01_ride_V1_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_ride_V1_AD", "Intro01_ride_V1_AD", 1, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_439() //Position: 0x17664 / 95844
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AA", "Intro01_longbanter_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_longbanter_v1_AB", "Intro01_longbanter_v1_AB", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AC1", "Intro01_longbanter_v1_AC1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AC2", "Intro01_longbanter_v1_AC2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_longbanter_v1_AD", "Intro01_longbanter_v1_AD", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AE1", "Intro01_longbanter_v1_AE1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AE2", "Intro01_longbanter_v1_AE2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_longbanter_v1_AF", "Intro01_longbanter_v1_AF", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AG1", "Intro01_longbanter_v1_AG1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AG2", "Intro01_longbanter_v1_AG2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_PAUSE_1200", "", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AH", "Intro01_longbanter_v1_AH", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_longbanter_v1_AI", "Intro01_longbanter_v1_AI", 1, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AJ1", "Intro01_longbanter_v1_AJ1", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AJ2", "Intro01_longbanter_v1_AJ2", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Intro01_longbanter_v1_AJ3", "Intro01_longbanter_v1_AJ3", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_3760", "", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Intro01_longbanter_v1_AK", "Intro01_longbanter_v1_AK", 1, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

bool Function_440(bool bParam0, bool bParam1, int iParam2) //Position: 0x17ABC / 96956
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, iParam2))
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

void Function_441() //Position: 0x17BCD / 97229
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_leave", "Intro01_leave", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

int Function_442() //Position: 0x17C10 / 97296
{
	return Global_34165.f_60;
}

bool Function_443(var uParam0, bool bParam1, float fParam2, var uParam3) //Position: 0x17C1B / 97307
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(uParam0))
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
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(uParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(uParam0, iVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (ACTORS_IN_RANGE(bVar1, bParam1, fParam2))
				{
					if (!Function_444(bVar1, 1) || uParam3)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_444(bool bParam0, int iParam1) //Position: 0x17CB4 / 97460
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

void Function_445() //Position: 0x17CFE / 97534
{
	Local_4.f_592 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Coyotes"));
	(*&Local_4 + 564)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Coyote01", 1050, -2578.598f, 60.63029f, 3254.588f, 0.0f, 0.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 564)[02], Local_4.f_592);
	CREATE_GRINGO_ON_OBJECT(GET_OBJECT_FROM_ACTOR((*&Local_4 + 564)[02]), "Coyote01gringo", "$/content/scripting/gringo/SimpleGringo/coyote_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	TASK_STAND_STILL((*&Local_4 + 564)[02], -1.0f, 0, 0);
	(*&Local_4 + 564)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Coyote02", 1052, -2576.053f, 60.45244f, 3253.12f, 0.0f, 90.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 564)[12], Local_4.f_592);
	CREATE_GRINGO_ON_OBJECT(GET_OBJECT_FROM_ACTOR((*&Local_4 + 564)[12]), "Coyote02gringo", "$/content/scripting/gringo/SimpleGringo/coyote_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	TASK_STAND_STILL((*&Local_4 + 564)[12], -1.0f, 0, 0);
	(*&Local_4 + 564)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Coyote03", 1051, -2579.852f, 60.35077f, 3252.134f, 0.0f, -90.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 564)[22], Local_4.f_592);
	CREATE_GRINGO_ON_OBJECT(GET_OBJECT_FROM_ACTOR((*&Local_4 + 564)[22]), "Coyote03gringo", "$/content/scripting/gringo/SimpleGringo/coyote_eating", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	TASK_STAND_STILL((*&Local_4 + 564)[22], -1.0f, 0, 0);
	return;
}

void Function_446() //Position: 0x17F1E / 98078
{
	Function_450();
	switch (iLocal_1186)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (Function_448(&iLocal_868, 36.0f, 200.0f, bLocal_904, "", "GUIDE_ABANDONED", &iLocal_852, 0, 0, 0, 325, 1))
				{
					GET_OBJECT_POSITION(Global_34573, &vLocal_915);
					GET_OBJECT_POSITION(bLocal_904, &vLocal_918);
					ESTIMATE_TWO_DISTANCES_ALONG_PATH(Local_4.f_1284, &vLocal_915, &vLocal_918, &fLocal_912, &fLocal_913, &uLocal_914);
					if (fLocal_912 <= fLocal_913)
					{
						iLocal_1201 = 4;
					}
					else
					{
						iLocal_1201 = 6;
					}
					if (iLocal_934 == 1)
					{
						Function_252();
						Function_361("GUIDE_RETURN", 0x40f00000, 1, 2, 0, 0, 0, 0);
					}
					iLocal_1186 = 1;
				}
				if (iLocal_1202[14] != 1)
				{
					if (!Function_440(Global_34573, bLocal_904, 15.0f))
					{
						if (iLocal_934 == 0)
						{
							if (GET_TASK_STATUS(bLocal_904, 6) == 1)
							{
								Function_252();
								Function_361("INTRO01_STOP_NEXT_TO_JAKE", 0x40f00000, 1, 2, 0, 0, 0, 0);
								iLocal_934 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_1186 = 2;
			}
			break;
		
		case 0x00000001:
			Function_448(&iLocal_868, 36.0f, 200.0f, bLocal_904, "", "GUIDE_ABANDONED", &iLocal_852, 0, 0, 0, 325, 1);
			if (IS_ACTOR_RIDING(Global_34573))
			{
				if (Function_440(Global_34573, bLocal_904, 24.0f))
				{
					if (iLocal_1202[14] == 0)
					{
						if (iLocal_935 == 0)
						{
							iLocal_1201 = 8;
						}
					}
					else
					{
						iLocal_934 = 0;
					}
					iLocal_1186 = 0;
				}
			}
			else
			{
				iLocal_1186 = 2;
			}
			break;
		
		case 0x00000002:
			if (iLocal_935 == 0)
			{
				iLocal_1201 = 2;
			}
			iLocal_1186 = 3;
			break;
		
		case 0x00000003:
			if (!Function_447(&iLocal_868, 200.0f, bLocal_905, "INTRO01_RETURN_TO_HORSE", "INTRO01_ABANDONED_HORSE", &iLocal_852, 1, 0, 0, 334, 1))
			{
				if (iLocal_935 == 0)
				{
					if (!iLocal_936)
					{
						if (iLocal_1202[12] == 0)
						{
							iLocal_1201 = 12;
						}
					}
					if (iLocal_936)
					{
						if (iLocal_1202[12] == 0)
						{
							iLocal_1201 = 12;
						}
					}
					if (iLocal_937)
					{
						if (iLocal_1202[10] == 0)
						{
							iLocal_1201 = 10;
							LOG_ERROR("going back to short banter");
						}
					}
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_904)))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_904, 325, 0, 2, 0);
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_905)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_905));
				}
				iLocal_1186 = 0;
			}
			else
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_904)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_904));
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_905)))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_905, 334, 0, 2, 0);
				}
			}
			break;
		
		case 0x00000004:
			break;
	}
	return;
}

bool Function_447(var uParam0, float fParam1, bool bParam2, bool bParam3, char* cParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x18213 / 98835
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam2))
	{
		return 0;
	}
	if (!ACTORS_IN_RANGE(Global_34573, bParam2, fParam1))
	{
		Function_245(cParam4);
		*uParam5 = 1;
		return 1;
	}
	if (GET_MOUNT(Global_34573) != bParam2)
	{
		if (!Function_357(8))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_361(bParam3, 7.5f, 0, 2, bParam6, 0, 0, 0);
				Function_356(8);
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_355(bParam7, 0, 4294967295, 0, bParam2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_355(bParam8, 0, 4294967295, 0, bParam2);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				ADD_BLIP_FOR_OBJECT(bParam2, iParam9, 0, 2, 0);
				DECOR_SET_BOOL(bParam2, "MHDR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_357(8))
	{
		Function_354(8);
		if (!Function_353())
		{
			if (bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_352();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8))) && DECOR_CHECK_EXIST(bParam2, "MHDR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam2));
				DECOR_REMOVE(bParam2, "MHDR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_355(bParam7, 1, 4294967295, 0, bParam2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_355(bParam8, 1, 4294967295, 0, bParam2);
			}
		}
	}
	return 0;
}

bool Function_448(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x1837F / 99199
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_440(Global_34573, bParam3, iParam2))
	{
		Function_245(bParam5);
		*iParam6 = 1;
		return 1;
	}
	if (!Function_440(Global_34573, bParam3, iParam1))
	{
		if (!Function_357(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_361(bParam4, 7.5f, 0, 2, bParam7, 0, 0, 0);
				}
				Function_356(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_355(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_355(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, iParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_357(2))
	{
		Function_354(2);
		if (!Function_353())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_352();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_343(bParam3);
				Function_449(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_355(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_355(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_449(bool bParam0) //Position: 0x18514 / 99604
{
	var uVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		uVar0 = GET_BLIP_ON_OBJECT(bParam0);
		while (IS_BLIP_VALID(uVar0))
		{
			REMOVE_BLIP(uVar0);
			uVar0 = GET_BLIP_ON_OBJECT(bParam0);
		}
	}
	return;
}

void Function_450() //Position: 0x18540 / 99648
{
	if (((IS_ACTOR_RIDING(bLocal_904) && IS_ACTOR_RIDING(Global_34573)) && !DECOR_CHECK_EXIST(bLocal_510, "horsefollow")) && iLocal_933)
	{
		ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bLocal_904, -1.0f, -1.0f, 4, 1, 0);
		DECOR_SET_BOOL(bLocal_510, "horsefollow", 1);
	}
	if (!Function_290(&iLocal_871))
	{
		Function_384(&iLocal_871);
	}
	if (IS_ACTOR_RIDING(Global_34573))
	{
		if (IS_ACTOR_HORSE(GET_MOUNT(Global_34573)))
		{
			switch (iLocal_1180)
			{
				case 0x00000000:
					DECOR_SET_FLOAT(bLocal_510, "horsecontroltut", GET_CURRENT_GAME_TIME());
					Function_140("Intro01_horse_walk_tut_1", 6.0f, 1, 0, 2, 1, 0);
					Function_293(&iLocal_871);
					iLocal_1180 = 1;
					break;
				
				case 0x00000001:
					if ((Function_288(&iLocal_871) < 6.0f && !HUD_IS_SHOWING_OBJECTIVE()) && !DECOR_CHECK_EXIST(bLocal_510, "horsecontroltut"))
					{
						Function_140("INTRO01_HORSE_RUN_TUT_1", 0x41200000, 1, 0, 2, 1, 0);
						Function_293(&iLocal_871);
						iLocal_1180 = 5;
					}
					break;
				
				case 0x00000002:
					Function_140("horse_help_matchspeed", 0x41200000, 1, 0, 2, 1, 0);
					Function_293(&iLocal_871);
					iLocal_1180 = 4;
					break;
				
				case 0x00000004:
					if (Function_288(&iLocal_871) < 6.0f)
					{
						Function_140("INTRO01_HORSE_RUN_TUT_3", 0x41200000, 1, 0, 2, 1, 0);
						Function_293(&iLocal_871);
						iLocal_1180 = 3;
					}
					break;
				
				case 0x00000003:
					if (Function_288(&iLocal_871) < 6.0f)
					{
						SET_STAMINA_BLINK(7.0f);
						Function_140("INTRO01_HORSE_RUN_TUT_4", 0x41200000, 1, 0, 2, 1, 0);
						Function_293(&iLocal_871);
						iLocal_1180 = 5;
					}
					break;
				
				case 0x00000005:
					break;
				}
			}
	}
	return;
}

void Function_451() //Position: 0x18745 / 100165
{
	switch (iLocal_1185)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING(Global_34573) && GET_RIDER(bLocal_905) != Global_34573)
			{
				TASK_CLEAR(bLocal_904);
				CLEAR_ACTOR_MAX_SPEED(bLocal_904);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_904, Local_4.f_1284, 4, 0, 0, 1, 0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_904, 1);
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_904)))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_904, 325, 0, 2, 0);
				}
				iLocal_1185 = 1;
			}
			break;
		
		case 0x00000001:
			GET_OBJECT_POSITION(Global_34573, &vLocal_915);
			GET_OBJECT_POSITION(bLocal_904, &vLocal_918);
			ESTIMATE_TWO_DISTANCES_ALONG_PATH(Local_4.f_1284, &vLocal_915, &vLocal_918, &fLocal_912, &fLocal_913, &uLocal_914);
			if (!IS_ACTOR_RIDING(bLocal_904))
			{
				TASK_MOUNT(bLocal_904, bLocal_906, 0, 1, 2, 2147483647);
			}
			else if (!GET_TASK_STATUS(bLocal_904, 43) != 1)
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_904, Local_4.f_1284, 4, 0, 0, 1, 0);
			}
			if (iLocal_933 == 0)
			{
				if (IS_ACTOR_RIDING(Global_34573) && GET_RIDER(bLocal_905) != Global_34573)
				{
					if (IS_ACTOR_IN_VOLUME(bLocal_904, (*&Local_4 + 696)[0]))
					{
						TASK_CLEAR(bLocal_904);
						TASK_STAND_STILL(bLocal_904, -1.0f, 0, 0);
						iLocal_1185 = 7;
					}
				}
			}
			if (!Function_440(Global_34573, bLocal_904, 30.0f) && fLocal_913 < fLocal_912)
			{
				iLocal_1185 = 2;
			}
			if (Function_452(bLocal_904, Local_4.f_1284) > 10.0f)
			{
				iLocal_1185 = 4;
			}
			break;
		
		case 0x00000002:
			TASK_CLEAR(bLocal_904);
			TASK_STAND_STILL(bLocal_904, -1.0f, 0, 0);
			TASK_FACE_ACTOR(bLocal_904, Global_34573, 1, 3212836864);
			iLocal_1185 = 3;
			break;
		
		case 0x00000003:
			if (ACTORS_IN_RANGE(Global_34573, bLocal_904, 24.0f))
			{
				iLocal_1185 = 0;
			}
			break;
		
		case 0x00000004:
			iLocal_864 = TASK_SEQUENCE_OPEN();
			Function_227((*&Local_4 + 904)[1]);
			vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 904)[1]) };
			TASK_GO_NEAR_COORD(0, &vLocal_915, 2.0f, 2);
			Function_227((*&Local_4 + 904)[2]);
			vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 904)[2]) };
			TASK_FACE_COORD(0, &vLocal_915, 0);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_904, iLocal_864);
			TASK_SEQUENCE_RELEASE(iLocal_864, 1);
			Function_384(&iLocal_880);
			iLocal_1185 = 5;
			break;
		
		case 0x00000005:
			if (iLocal_1202[14] == 1)
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573) && GET_RIDER(bLocal_905) != Global_34573)
				{
					if (Function_440(Global_34573, bLocal_904, 15.0f))
					{
						Function_252();
						iLocal_1185 = 7;
						iLocal_930 = 1;
					}
					else
					{
						if (iLocal_934 == 0)
						{
							Function_252();
							Function_361("INTRO01_STOP_NEXT_TO_JAKE", 0x40f00000, 1, 2, 0, 0, 0, 0);
							iLocal_934 = 1;
						}
						iLocal_1185 = 6;
					}
				}
			}
			else if (iLocal_935 != 1 && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1185 = 6;
			}
			else if (Function_288(&iLocal_880) < 20.0f)
			{
				Function_252();
				iLocal_1185 = 7;
				iLocal_930 = 1;
			}
			break;
		
		case 0x00000006:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573) && GET_RIDER(bLocal_905) != Global_34573)
			{
				if (Function_440(Global_34573, bLocal_904, 8.0f))
				{
					Function_252();
					iLocal_1185 = 7;
					iLocal_930 = 1;
				}
			}
			break;
		
		case 0x00000007:
			break;
	}
	return;
}

float Function_452(bool bParam0, float fParam1) //Position: 0x18A39 / 100921
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	
	iVar3 = (GET_PATH_NUM_POINTS(fParam1) - 1);
	GET_PATH_POINT(fParam1, iVar3, &vVar0);
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_320(bParam0);
		vVar4 = { StackVal, StackVal, Function_320(bParam0) };
		return VDIST(vVar4, vVar0);
	}
	LOG_ERROR("Attempting to get distance from an INVALID actor to a path end. Returning 0.0!");
	return 0.0f;
}

void Function_453() //Position: 0x18AC6 / 101062
{
	if (iLocal_740 < 2 && iLocal_740 > 105)
	{
		iLocal_864 = 0;
		while (iLocal_864 < 6)
		{
			Function_480(&(Local_961[iLocal_86414]));
			iLocal_864++;
		}
	}
	if (iLocal_740 < 5 && iLocal_740 > 105)
	{
		Function_364(17, 30, 0, 23, 59, 59);
		Function_473();
		Function_469();
		Function_465();
		if (iLocal_1184 != 0 && iLocal_1183 > 2)
		{
			Function_464((*&Local_4 + 800)[0]);
			Function_367(StackVal, StackVal, "$/cutscene/INTRO_01/INTRO_01", &uLocal_855, Function_464((*&Local_4 + 800)[0]), 0, 75.0f, 150.0f, 2, 2, 2, 2, 0, 1);
		}
		if (Function_288(&iLocal_895) < 1.0f)
		{
			iLocal_864 = 0;
			while (iLocal_864 < 1)
			{
				Function_462(&(Local_950[iLocal_8645]));
				Function_419(&(Local_950[iLocal_8645]));
				iLocal_864++;
			}
			iLocal_864 = 0;
			while (iLocal_864 < 6)
			{
				Function_420(&(Local_1061[iLocal_86416]));
				iLocal_864++;
			}
			if (!IS_ACTOR_ALIVE(bLocal_905))
			{
				Function_245("Horse_dead");
				iLocal_852 = 1;
			}
			Function_461();
			Function_418();
			Function_417();
			Function_416();
			Function_459();
			Function_409();
			Function_293(&iLocal_895);
		}
	}
	switch (iLocal_740)
	{
		case 0x00000000:
			Function_313(0);
			SET_ACTOR_HEALTH(bLocal_904, GET_ACTOR_MAX_HEALTH(bLocal_904));
			GET_VOLUME_CENTER((*&Local_4 + 812)[3], &vLocal_915);
			STREAMING_LOAD_BOUNDS_EXT(0, vLocal_915, 75.0f, 1);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_239(bLocal_739);
			Function_230(StackVal, StackVal, Function_239(bLocal_739), bLocal_739, Global_30628[0], Function_238(bLocal_739), 0);
			Function_293(&iLocal_877);
			if (HUD_IS_FADED())
			{
				iLocal_740 = 1;
			}
			else
			{
				iLocal_740 = 4;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_295(&Local_511) || iLocal_940)
				{
					Function_333();
					Function_383();
				}
				Function_293(&iLocal_877);
				Function_384(&iLocal_898);
				iLocal_740 = 4;
			}
			break;
		
		case 0x00000004:
			if (!Function_458() && !Function_288(&iLocal_898) < 4.0f)
			{
				Function_293(&iLocal_877);
			}
			else if (Function_288(&iLocal_877) < 1.0f || !HUD_IS_FADED())
			{
				Function_285(1.0f);
				STREAMING_UNLOAD_BOUNDS();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_227((*&Local_4 + 1252)[1]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1252)[1]) };
				uLocal_866 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vLocal_915, 0.5f, "doorSaloon01x", 1);
				if (IS_PHYSINST_VALID(uLocal_866))
				{
				}
				Function_227((*&Local_4 + 1252)[2]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1252)[2]) };
				uLocal_867 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(vLocal_915, 0.5f, "doorSaloon01x", 1);
				if (IS_PHYSINST_VALID(uLocal_867))
				{
				}
				Function_457();
				bLocal_911 = (*&Local_4 + 504)[02];
				TASK_STAND_STILL(bLocal_911, -1.0f, 0, 0);
				iLocal_864 = 0;
				while (iLocal_864 < 1)
				{
					Local_950[iLocal_8645].f_16 = 0;
					iLocal_864++;
				}
				iLocal_864 = 0;
				while (iLocal_864 < 6)
				{
					Local_1061[iLocal_86416].f_48 = 0;
					iLocal_864++;
				}
				Function_370();
				Function_456(2);
				Function_454();
				iLocal_1060 = 0;
				iLocal_1174 = 0;
				iLocal_1175 = 0;
				iLocal_1176 = 0;
				iLocal_1177 = 0;
				iLocal_1183 = 0;
				iLocal_1184 = 0;
				iLocal_740 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_252();
				Function_361("INTRO01_OBJ00", 7.5f, 1, 2, 0, 0, 0, 0);
				iLocal_1179 = 0;
				DECOR_SET_FLOAT(bLocal_510, "movementtuttime", GET_CURRENT_GAME_TIME());
				iLocal_740 = 7;
			}
			break;
		
		case 0x00000007:
			if (bLocal_929)
			{
				iLocal_740 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				iLocal_840[0] = 1;
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_906)))
				{
					if (DECOR_CHECK_EXIST(bLocal_906, "HorseLeash"))
					{
						DESTROY_OBJECT(DECOR_GET_OBJECT(bLocal_906, "HorseLeash"));
						DECOR_REMOVE(bLocal_906, "HorseLeash");
					}
					MAKE_ACTOR_READY_FOR_ACTION(bLocal_906, 1);
				}
				TASK_STAND_STILL(bLocal_906, -1.0f, 0, 0);
				TASK_STAND_STILL(bLocal_905, -1.0f, 0, 0);
				bLocal_739 = true;
				iLocal_740 = 0;
			}
			break;
	}
	return;
}

void Function_454() //Position: 0x18ED9 / 102105
{
	Function_455(&(Global_6298[182]), &(Global_7189[183]), 1);
	Function_181(&Global_6298, &Global_7189, 18, 1);
	Function_455(&(Global_6298[02]), &(Global_7189[03]), 1);
	Function_181(&Global_6298, &Global_7189, 0, 1);
	Function_455(&(Global_6298[12]), &(Global_7189[13]), 1);
	Function_181(&Global_6298, &Global_7189, 1, 1);
	Function_455(&(Global_6298[32]), &(Global_7189[33]), 1);
	Function_181(&Global_6298, &Global_7189, 3, 1);
	Function_455(&(Global_6298[42]), &(Global_7189[43]), 1);
	Function_181(&Global_6298, &Global_7189, 4, 1);
	Function_455(&(Global_6298[52]), &(Global_7189[53]), 1);
	Function_181(&Global_6298, &Global_7189, 5, 1);
	Function_455(&(Global_6298[132]), &(Global_7189[133]), 1);
	Function_181(&Global_6298, &Global_7189, 13, 1);
	Function_455(&(Global_6298[132]), &(Global_7189[153]), 1);
	Function_181(&Global_6298, &Global_7189, 15, 1);
	Function_455(&(Global_6298[132]), &(Global_7189[63]), 1);
	Function_181(&Global_6298, &Global_7189, 6, 1);
	Function_455(&(Global_6298[132]), &(Global_7189[103]), 1);
	Function_181(&Global_6298, &Global_7189, 10, 1);
	return;
}

void Function_455(var uParam0, var uParam1, int iParam2) //Position: 0x18FFA / 102394
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	if (iParam2 == 0)
	{
		ADD_TIME(&uVar0, Function_183(Global_29007), 0, 0, 0);
	}
	else
	{
		ADD_TIME(&uVar0, iParam2, 0, 0, 0);
	}
	uParam0->f_4 = uVar0;
	Function_184(uParam0, 4);
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal))
		{
			DESTROY_OBJECT(StackVal);
		}
	}
	return;
}

void Function_456(int iParam0) //Position: 0x1904D / 102477
{
	if (iLocal_943 >= 4294967295)
	{
		SET_ACTOR_UPDATE_PRIORITY(GET_ACTOR_FROM_OBJECT(bLocal_928), iParam0);
		SET_ACTOR_UPDATE_PRIORITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_943, 1)), iParam0);
		SET_ACTOR_UPDATE_PRIORITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_943, 2)), iParam0);
		SET_ACTOR_UPDATE_PRIORITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_943, 3)), iParam0);
		SET_ACTOR_UPDATE_PRIORITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_943, 4)), iParam0);
		SET_ACTOR_UPDATE_PRIORITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_943, 5)), iParam0);
		SET_ACTOR_UPDATE_PRIORITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_943, 6)), iParam0);
	}
	return;
}

void Function_457() //Position: 0x190BF / 102591
{
	Local_4.f_516 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "GringoDrunk"));
	(*&Local_4 + 504)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "Drunk", 236, -2157.888f, 19.89145f, 2597.504f, 0.0f, 135.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 504)[02], Local_4.f_516);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS((*&Local_4 + 504)[02], 1);
	TASK_PRIORITY_SET((*&Local_4 + 504)[02], 2);
	TASK_STAND_STILL((*&Local_4 + 504)[02], -1.0f, 0, 0);
	return;
}

bool Function_458() //Position: 0x19143 / 102723
{
	iLocal_864 = 0;
	while (iLocal_864 < 3)
	{
		if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(Local_961[iLocal_86414])))
		{
			return 0;
		}
		iLocal_864++;
	}
	return 1;
}

void Function_459() //Position: 0x19174 / 102772
{
	switch (iLocal_1177)
	{
		case 0x00000000:
			if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(bLocal_911)))
			{
				if (Function_460(Global_34573, bLocal_911) > 10.0f || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 784)[0]))
				{
					Function_227((*&Local_4 + 1196)[0]);
					TELEPORT_ACTOR_WITH_HEADING(bLocal_911, Function_227((*&Local_4 + 1196)[0]), GET_OBJECT_HEADING((*&Local_4 + 1196)[0]), 1, 1, 1);
					ADD_ACTOR_STAY_WITHIN_VOLUME(bLocal_911, (*&Local_4 + 784)[0]);
					RESET_ANIM_SET_FOR_ACTOR(bLocal_911, 1);
					SET_ANIM_SET_FOR_ACTOR(bLocal_911, "Intro01_drunk_jake_falls", 0);
					SET_ACTION_NODE_FOR_ACTOR(bLocal_911, "Intro01_drunk_jake_falls/Falls_down");
					SET_AMBIENT_VOICE_NAME(bLocal_911, "GANG_CRAZYMINER_MEDIUM03");
					SAY_SINGLE_LINE_CONTEXT(bLocal_911, 20, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					iLocal_1177 = 1;
				}
			}
			else
			{
				TASK_CLEAR(bLocal_911);
				TASK_FLEE_ACTOR(bLocal_911, GET_LAST_ATTACKER(bLocal_911), -1.0f, -1.0f, 0, 0, 0);
				iLocal_1177 = 3;
			}
			break;
		
		case 0x00000001:
			if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(bLocal_911)))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_911, "fallen"))
				{
					TASK_WANDER_IN_VOLUME(bLocal_911, (*&Local_4 + 784)[1], 3212836864);
					SET_ACTOR_DRUNK(bLocal_911, 1);
					iLocal_1177 = 2;
				}
			}
			else
			{
				TASK_CLEAR(bLocal_911);
				TASK_FLEE_ACTOR(bLocal_911, GET_LAST_ATTACKER(bLocal_911), -1.0f, -1.0f, 0, 0, 0);
				iLocal_1177 = 3;
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(bLocal_911)))
			{
				if (((!DECOR_CHECK_EXIST(bLocal_911, "drunkcontext") && Function_346(bLocal_911, Global_34573, 15.0f)) && !IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_911, "Falls_down")) && !IS_ACTOR_RAGDOLL(bLocal_911))
				{
					SAY_SINGLE_LINE_CONTEXT(bLocal_911, 20, Global_34573, 1, 0, 0, 4294967295, 4294967295, 0, 1);
					DECOR_SET_BOOL(bLocal_911, "drunkcontext", 1);
				}
				if (GET_TASK_STATUS(bLocal_911, 57) == 0)
				{
					TASK_WANDER_IN_VOLUME(bLocal_911, (*&Local_4 + 784)[1], 3212836864);
					iLocal_1177 = 3;
				}
			}
			else
			{
				TASK_CLEAR(bLocal_911);
				TASK_FLEE_ACTOR(bLocal_911, GET_LAST_ATTACKER(bLocal_911), -1.0f, -1.0f, 0, 0, 0);
				iLocal_1177 = 3;
			}
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

float Function_460(bool bParam0, bool bParam1) //Position: 0x193C4 / 103364
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

void Function_461() //Position: 0x194B5 / 103605
{
	int iVar0;
	
	switch (iLocal_1174)
	{
		case 0x00000000:
			if (GET_TASK_STATUS(bLocal_908, 19) != 1)
			{
				SNAP_ACTOR_TO_GRINGO(bLocal_908, Local_4.f_1268, "usecase1", 1, 1, 1);
				TASK_USE_GRINGO(bLocal_908, GET_GRINGO_FROM_OBJECT(Local_4.f_1268), "usecase1", 4294967295, 1);
			}
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(bLocal_908, 19) != 1)
			{
				Function_227((*&Local_4 + 1120)[0]);
				vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1120)[0]) };
				iVar0 = LOCATE_GRINGO_OF_TYPE("lie_sleep_on_bed_l", &vLocal_915, 1.0f, 1);
				if (IS_GRINGO_VALID(iVar0))
				{
					TASK_USE_GRINGO(bLocal_908, bVar0, "usecase1", 4294967295, 1);
				}
			}
			else
			{
				iLocal_1174 = 2;
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(bLocal_908)))
			{
				if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bLocal_908)))
				{
					iLocal_1174 = 1;
				}
			}
			else
			{
				TASK_CLEAR(bLocal_908);
				TASK_FLEE_ACTOR(bLocal_908, GET_LAST_ATTACKER(bLocal_908), -1.0f, -1.0f, 0, 0, 0);
				iLocal_1174 = 3;
			}
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

void Function_462(int iParam0) //Position: 0x195C3 / 103875
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	
	switch (iParam0->f_16)
	{
		case 0x00000000:
			if (GET_TASK_STATUS(*iParam0, 19) != 1)
			{
				Function_224(StackVal, StackVal, *(iParam0 + 4), 0, 0);
				iVar9 = LOCATE_GRINGO_OF_NAME("horsehitch", iParam0 + 4, 1.0f, 1);
				if (*iParam0 == bLocal_905)
				{
					if (!IS_GRINGO_VALID(iLocal_945))
					{
						GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(iVar9), &vVar0);
						GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_GRINGO(bVar9), &vVar6);
						bLocal_945 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(bLocal_510, "turnlefthitch", "horseHitchTurnLeft", vVar0, vVar6));
						GRINGO_ALLOW_ACTIVATION(bVar9, 0);
					}
					bVar9 = bLocal_945;
				}
				if (IS_GRINGO_VALID(bVar9))
				{
					TASK_USE_GRINGO(*iParam0, bVar9, "usecase1", 4294967295, 1);
				}
			}
			else
			{
				iParam0->f_16 = 1;
			}
			break;
		
		case 0x00000001:
			if (*iParam0 == bLocal_905)
			{
				iVar10 = bLocal_945;
			}
			else
			{
				iVar10 = LOCATE_GRINGO_OF_NAME("horsehitch", iParam0 + 4, 1.0f, 1);
			}
			if (IS_GRINGO_VALID(iVar10))
			{
				GRINGO_GET_USE_COMPONENT_POSITION_EXT(bVar10, "usecase1", &vVar3);
				Function_312(*iParam0);
				if (VDIST(vVar3, Function_312(*iParam0)) < 1.0f && !IS_ACTOR_VALID(GET_RIDER(*iParam0)))
				{
					if (*iParam0 == bLocal_905 && GET_TASK_STATUS(bLocal_904, 11) == 1)
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, StackVal, StackVal, StackVal, Function_463(*iParam0, vVar3, *iParam0, *(iParam0 + 4)), 1, 1, 1);
					}
					if (GET_TASK_STATUS(*iParam0, 19) != 1)
					{
						if (*iParam0 == bLocal_905)
						{
							TASK_USE_GRINGO(*iParam0, bLocal_945, "usecase1", 4294967295, 1);
						}
						else
						{
							TASK_USE_GRINGO(*iParam0, bVar10, "usecase1", 4294967295, 1);
						}
					}
				}
			}
			break;
	}
	return;
}

var Function_463(bool bParam0, vector3 vParam1) //Position: 0x1977B / 104315
{
	vector3 vVar0;
	
	Function_312(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_312(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

vector3 Function_464(bool bParam0) //Position: 0x197FE / 104446
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_465() //Position: 0x1980F / 104463
{
	switch (iLocal_1189)
	{
		case 0x00000000:
			Function_468(&iLocal_886);
			iLocal_1189 = 1;
			break;
		
		case 0x00000001:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_288(&iLocal_886) < 3.0f)
			{
				iLocal_1190[0] = 1;
				iLocal_1189 = 2;
			}
			break;
		
		case 0x00000002:
			Function_468(&iLocal_886);
			iLocal_1189 = 3;
			break;
		
		case 0x00000003:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_288(&iLocal_886) < 3.0f)
			{
				iLocal_1190[2] = 1;
				iLocal_1189 = 8;
			}
			break;
		
		case 0x00000004:
			if (!Function_440(Global_34573, bLocal_904, 22.5f))
			{
				Function_467();
			}
			iLocal_1189 = 5;
			break;
		
		case 0x00000005:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1189 = 8;
			}
			break;
		
		case 0x00000006:
			switch (Function_442())
			{
				case 0x00000000:
					Function_466();
					break;
				
				default:
					Function_466();
					break;
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_905)))
			{
				ADD_BLIP_FOR_ACTOR(bLocal_905, 334, 0, 2, 0);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_904)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_904));
			}
			SET_ALLOW_RIDE_BY_PLAYER(bLocal_905, 1);
			iLocal_1189 = 7;
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1190[6] = 1;
				Function_252();
				if (!IS_ACTOR_RIDING(Global_34573))
				{
					Function_361("INTRO01_OBJ03", 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				iLocal_1189 = 8;
			}
			break;
		
		case 0x00000008:
			break;
	}
	return;
}

void Function_466() //Position: 0x19970 / 104816
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_mount", "Intro01_mount", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_467() //Position: 0x199B3 / 104883
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_wondersOff", "Intro01_wondersOff", 0, 2, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

void Function_468(int iParam0) //Position: 0x19A00 / 104960
{
	if (!Function_290(iParam0))
	{
		Function_384(iParam0);
	}
	else
	{
		Function_293(iParam0);
	}
	return;
}

void Function_469() //Position: 0x19A1C / 104988
{
	if (iLocal_1183 != 2)
	{
		Function_471();
	}
	if (bLocal_929 == 0)
	{
		switch (iLocal_1184)
		{
			case 0x00000000:
				Function_470(&iLocal_868, (*&Local_4 + 812)[1], (*&Local_4 + 812)[2], "Intro01_obj00_return", "Intro01_obj00_fail", &iLocal_852, 1, 0, 0, 330, 1);
				break;
			
			case 0x00000001:
				Function_448(&iLocal_868, 60.0f, 200.0f, bLocal_904, "GUIDE_RETURN", "GUIDE_ABANDONED", &iLocal_852, 1, 0, 0, 325, 1);
				break;
			
			case 0x00000002:
				Function_351(&iLocal_868, 60.0f, 200.0f, bLocal_905, "INTRO01_RETURN_TO_HORSE", "INTRO01_ABANDONED_HORSE", &iLocal_852, 1, 0, 0, 4294967295, 1, 0);
				break;
			
			case 0x00000003:
				break;
		}
	}
	else
	{
		iLocal_1184 = 3;
	}
	return;
}

int Function_470(var uParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x19B43 / 105283
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_VOLUME_VALID(bParam1) || !IS_VOLUME_VALID(bParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam2))
	{
		Function_245(cParam4);
		*uParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam1))
	{
		if (!Function_357(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_361(iParam3, 7.5f, 0, 2, bParam6, 0, 0, 0);
				Function_356(64);
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_355(bParam7, 0, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_355(bParam8, 0, 4294967295, 0, bParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				ADD_BLIP_FOR_OBJECT(bParam1, iParam9, 0, 2, 0);
				DECOR_SET_BOOL(bParam1, "MVODR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_357(64))
	{
		Function_354(64);
		if (!Function_353())
		{
			if (bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_352();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8))) && DECOR_CHECK_EXIST(bParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam1));
				DECOR_REMOVE(bParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_355(bParam7, 1, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_355(bParam8, 1, 4294967295, 0, bParam1);
			}
		}
	}
	return 0;
}

void Function_471() //Position: 0x19CB8 / 105656
{
	if (!Function_290(&iLocal_871))
	{
		Function_472(&iLocal_871, 10.5f);
	}
	if (DECOR_CHECK_EXIST(bLocal_510, "movementtuttime"))
	{
		if (((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_510, "movementtuttime")) < 2.0f && Function_288(&iLocal_871) < 10.5f) && !Global_63096)
		{
			switch (iLocal_1179)
			{
				case 0x00000000:
					Function_140("help_move_look", 0x41200000, 1, 0, 2, 1, 0);
					Function_293(&iLocal_871);
					iLocal_1179 = 3;
					break;
				
				case 0x00000003:
					Function_140("INTRO01_FIRST_TUT_2", 0x41200000, 1, 0, 2, 1, 0);
					Function_293(&iLocal_871);
					iLocal_1179 = 1;
					break;
				
				case 0x00000001:
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_921)))
					{
						SET_BLIP_BLINK(GET_BLIP_ON_OBJECT(bLocal_921), 1, 1, 7.0f);
						Function_140("Intro01_Gateway_Help", 0x41200000, 1, 0, 2, 1, 0);
						Function_293(&iLocal_871);
						iLocal_1179 = 2;
					}
					break;
				
				case 0x00000005:
					break;
				}
			}
	}
	return;
}

void Function_472(int iParam0, float fParam1) //Position: 0x19DE8 / 105960
{
	if (!Function_290(iParam0))
	{
		Function_294(iParam0, fParam1);
	}
	return;
}

void Function_473() //Position: 0x19DFE / 105982
{
	var uVar0;
	
	if (iLocal_1183 < 2 && Function_346(Global_34573, bLocal_904, 30.0f))
	{
		Function_344();
	}
	switch (iLocal_1183)
	{
		case 0x00000000:
			SNAP_ACTOR_TO_GRINGO(bLocal_904, Local_4.f_1268, "jake", 1, 1, 1);
			TASK_USE_GRINGO(bLocal_904, GET_GRINGO_FROM_OBJECT(Local_4.f_1268), "jake", 4294967295, 1);
			bLocal_921 = Function_479(bLocal_510, Function_56(), (*&Local_4 + 800)[0], Global_34573, 1, 330, 1, 0, 0, 1);
			iLocal_1183 = 1;
			break;
		
		case 0x00000001:
			if (GATEWAY_UPDATE(bLocal_921))
			{
				Function_478(bLocal_921);
				AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
				TRAIN_SET_MAX_ACCEL(iLocal_943, 3.5f);
				TRAIN_SET_TARGET_SPEED(iLocal_943, 8.75f);
				TRAIN_SET_AUTOPILOT_ENABLE(iLocal_943, 1);
				TRAIN_SET_TARGET_POS(iLocal_943, &Local_327 + 388[26]);
				Function_252();
				iLocal_1183 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_281("$/cutscene/intro_01/intro_01", &Local_732, &Local_511, &bLocal_739, 60847, 60748, 60058, 59236, 58976, 107563, 0, 1, 1, 2, 2, 0, 1))
			{
				if (!GET_TASK_STATUS(bLocal_904, 0) != 1)
				{
					iLocal_864 = TASK_SEQUENCE_OPEN();
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bLocal_904, (*&Local_4 + 812)[5], 1, 1);
					AI_SET_NAV_SUBGRID_CELL_SIZE(bLocal_904, 0.5f);
					GET_PATH_POINT(Local_4.f_1288, 0, &vLocal_915);
					TASK_GO_NEAR_OBJECT(0, (*&Local_4 + 952)[1], 1.0f, 1, 1, 0);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_1288, 1, 0, 0, 1, 0);
					TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_904, iLocal_864);
					TASK_SEQUENCE_RELEASE(iLocal_864, 1);
				}
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
				}
				if (HUD_IS_SHOWING_HELP_TEXT())
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
				}
				Function_343(bLocal_904);
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_904)))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_904, 325, 0, 2, 0);
				}
				if (IS_ACTOR_VALID(bLocal_906) && !IS_ACTOR_IN_VOLUME(bLocal_906, (*&Local_4 + 684)[0]))
				{
					Function_227((*&Local_4 + 984)[0]);
					TELEPORT_ACTOR_WITH_HEADING(bLocal_906, Function_227((*&Local_4 + 984)[0]), 354.25f, 1, 0, 1);
				}
				if (IS_ACTOR_VALID(bLocal_905) && !IS_ACTOR_IN_VOLUME(bLocal_905, (*&Local_4 + 684)[0]))
				{
					Function_227((*&Local_4 + 984)[1]);
					TELEPORT_ACTOR_WITH_HEADING(bLocal_905, Function_227((*&Local_4 + 984)[1]), 358.5f, 1, 0, 1);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_1189 = 2;
				iLocal_1183 = 3;
			}
			break;
		
		case 0x00000003:
			if (iLocal_1190[2] == 1)
			{
				if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_904)))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_904, 325, 0, 2, 0);
				}
				Function_361("INTRO01_OBJ02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_1184 = 1;
				iLocal_1183 = 4;
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 684)[0]))
			{
				if (GET_TASK_STATUS(bLocal_904, 43) != 0 || GET_TASK_STATUS(bLocal_904, 0) != 1)
				{
					SET_ALLOW_RIDE_BY_AI(bLocal_906, 1);
					GET_PATH_POINT(Local_4.f_1284, 0, &uVar0);
					iLocal_864 = TASK_SEQUENCE_OPEN();
					TASK_CLEAR(false);
					TASK_MOUNT(false, bLocal_906, 0, 1, 1, 2);
					TASK_GO_TO_COORD_NONSTOP(0, &uVar0, 1, 3212836864);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_904, iLocal_864);
					TASK_SEQUENCE_RELEASE(iLocal_864, 1);
					MEMORY_PREFER_RIDING(bLocal_904, 1);
					iLocal_1184 = 2;
					iLocal_1189 = 6;
					iLocal_1183 = 5;
				}
			}
			else if (iLocal_1190[4] == 0)
			{
				if (GET_TASK_STATUS(bLocal_904, 22) == 1)
				{
					iLocal_1190[4] = 1;
					iLocal_1189 = 4;
				}
			}
			else
			{
				iLocal_940 = 0;
				if (DECOR_CHECK_EXIST(bLocal_510, "jakewaittime"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_510, "jakewaittime")) <= 30.0f)
					{
						iLocal_940 = 1;
					}
				}
				else
				{
					iLocal_940 = 1;
				}
				if ((MEMORY_GET_IS_VISIBLE(bLocal_904, Global_34573) && Function_440(Global_34573, bLocal_904, 22.5f)) && iLocal_940)
				{
					RESET_ANIM_SET_FOR_ACTOR(bLocal_904, 1);
					SET_ANIM_SET_FOR_ACTOR(bLocal_904, "one_handed_wave", 0);
					iLocal_864 = TASK_SEQUENCE_OPEN();
					TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
					TASK_ACTION_PERFORM(false, "one_handed_wave/wave");
					TASK_FACE_ACTOR(false, Global_34573, 1, 3212836864);
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_904, iLocal_864);
					TASK_SEQUENCE_RELEASE(iLocal_864, 1);
					DECOR_SET_FLOAT(bLocal_510, "jakewaittime", GET_CURRENT_GAME_TIME());
					DECOR_SET_BOOL(bLocal_510, "jakeshouldwave", 1);
				}
				if ((IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_904, "wave") && !IS_SCRIPTED_CONVERSATION_ONGOING()) && DECOR_CHECK_EXIST(bLocal_510, "jakeshouldwave"))
				{
					Function_475();
					DECOR_REMOVE(bLocal_510, "jakeshouldwave");
				}
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573) && GET_RIDER(bLocal_905) != Global_34573)
			{
				Function_252();
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_905)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_905));
				}
				iLocal_1178 = 0;
				iLocal_1183 = 7;
				bLocal_929 = true;
			}
			else if (GET_TASK_STATUS(bLocal_904, 6) == 1)
			{
				if (!Function_290(&iLocal_883))
				{
					Function_384(&iLocal_883);
				}
				if (Function_288(&iLocal_883) < 15.0f)
				{
					TASK_FACE_ACTOR(bLocal_904, Global_34573, 0, 3212836864);
					Function_474(&iLocal_883);
					iLocal_1183 = 6;
				}
			}
			break;
		
		case 0x00000006:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573) && GET_RIDER(bLocal_905) != Global_34573)
			{
				Function_252();
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_905)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_905));
				}
				TASK_STAND_STILL(bLocal_905, -1.0f, 0, 0);
				iLocal_1178 = 0;
				iLocal_1183 = 7;
				iLocal_1180 = 0;
				bLocal_929 = true;
			}
			else if (GET_TASK_STATUS(bLocal_904, 22) == 0)
			{
				if (MEMORY_GET_IS_VISIBLE(bLocal_904, Global_34573))
				{
					Function_475();
					iLocal_1183 = 5;
				}
			}
			break;
		
		case 0x00000007:
			break;
	}
	return;
}

void Function_474(var uParam0) //Position: 0x1A3D0 / 107472
{
	uParam0->f_4 = 0.0f;
	uParam0->f_8 = 0.0f;
	*uParam0 = 0;
	return;
}

void Function_475() //Position: 0x1A3E4 / 107492
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Intro01_noHorse", "Intro01_noHorse", 0, 1, 1, 0, 1);
		Function_425(3);
		START_SCRIPT_CONVERSATION(1, 1);
	}
	return;
}

int Function_476() //Position: 0x1A42B / 107563
{
	switch (bLocal_739)
	{
		case 0x00000000:
			Function_477(bLocal_904, (*&Local_4 + 848)[5], 1, 1, 1);
			Function_227((*&Local_4 + 848)[4]);
			TELEPORT_ACTOR_WITH_HEADING(Global_34573, Function_227((*&Local_4 + 848)[4]), GET_OBJECT_HEADING((*&Local_4 + 848)[4]), 1, 1, 0);
			return 1;
			break;
	}
	return 1;
}

void Function_477(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1A475 / 107637
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
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bParam0, vVar0, iParam2, iParam3, iParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The actor is NOT valid!!!");
	}
}

void Function_478(bool bParam0) //Position: 0x1A57C / 107900
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

var Function_479(var uParam0, char* cParam1, bool bParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) //Position: 0x1A606 / 108038
{
	bool bVar0;
	
	bVar0 = CREATE_GATEWAY_IN_LAYOUT(uParam0, cParam1, bParam2, uParam3, iParam4, iParam6, iParam7, iParam8, iParam9, 1);
	if (IS_OBJECT_VALID(bVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam2));
		}
		ADD_BLIP_FOR_OBJECT(bVar0, iParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(bVar0, "volrestrict", bParam2);
		DECOR_SET_BOOL(bVar0, "voldestroy", iParam8);
	}
	return bVar0;
}

void Function_480(int iParam0) //Position: 0x1A683 / 108163
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (Function_571(Global_30640[0]))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 812)[3]) && !DECOR_CHECK_EXIST((*&Local_4 + 812)[3], "nsaidhowdy"))
		{
			Function_227((*&Local_4 + 1252)[0]);
			vLocal_915 = { StackVal, StackVal, Function_227((*&Local_4 + 1252)[0]) };
			iVar0 = LOCATE_GRINGO_OF_TYPE("counter", &vLocal_915, 1.0f, 1);
			if (IS_GRINGO_VALID(iVar0))
			{
				bVar1 = Function_225(bVar0, "UseCase1");
				if (IS_OBJECT_VALID(bVar1))
				{
					bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
					if (IS_ACTOR_VALID(bVar2))
					{
						SAY_SINGLE_LINE_CONTEXT(bVar2, 43, Global_34573, 1, 0, 0, 4294967295, 4294967295, 0, 1);
						DECOR_SET_BOOL((*&Local_4 + 812)[3], "nsaidhowdy", 1);
					}
				}
			}
		}
		if (!DECOR_CHECK_EXIST(bLocal_510, "disabledstacker"))
		{
			vVar3 = { -2204.577f, 16.58f, 2602.359f };
			iVar6 = LOCATE_GRINGO_OF_TYPE("factory_lumber_stacker", &vVar3, 2.0f, 1);
			if (IS_GRINGO_VALID(iVar6))
			{
				GRINGO_ALLOW_ACTIVATION(bVar6, 0);
				DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(bVar6));
				DECOR_SET_BOOL(bLocal_510, "disabledstacker", 1);
			}
		}
		switch (iParam0->f_52)
		{
			case 0x00000000:
				if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(*iParam0)))
				{
					if (GET_TASK_STATUS(*iParam0, 19) != 1)
					{
						iVar7 = LOCATE_GRINGO_OF_TYPE(iParam0 + 4, iParam0 + 36, 1.0f, 1);
						if (IS_GRINGO_VALID(iVar7))
						{
							TASK_USE_GRINGO(*iParam0, bVar7, "usecase1", 4294967295, 1);
						}
					}
					else
					{
						iParam0->f_52 = 2;
					}
				}
				else
				{
					TASK_CLEAR(*iParam0);
					TASK_FLEE_ACTOR(*iParam0, GET_LAST_ATTACKER(*iParam0), -1.0f, -1.0f, 0, 0, 0);
					iParam0->f_52 = 3;
				}
				break;
			
			case 0x00000001:
				if (GET_TASK_STATUS(*iParam0, 19) != 1)
				{
					iVar8 = LOCATE_GRINGO_OF_TYPE(iParam0 + 4, iParam0 + 36, 10.0f, 1);
					if (IS_GRINGO_VALID(iVar8))
					{
						if (IS_ACTOR_ANIMAL(*iParam0))
						{
							SNAP_ACTOR_TO_GRINGO(*iParam0, GET_OBJECT_FROM_GRINGO(bVar8), "usecase1", 1, 1, 1);
							TASK_USE_GRINGO(*iParam0, bVar8, "usecase1", 1, 1);
						}
						else
						{
							SNAP_ACTOR_TO_GRINGO(*iParam0, GET_OBJECT_FROM_GRINGO(bVar8), "usecase1", 1, 1, 1);
							TASK_USE_GRINGO(*iParam0, bVar8, "usecase1", 4294967295, 1);
						}
					}
				}
				else
				{
					iParam0->f_52 = 2;
				}
				break;
			
			case 0x00000002:
				if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(*iParam0)))
				{
					if (GET_TASK_STATUS(*iParam0, 19) != 1)
					{
						RELEASE_ACTOR(*iParam0);
						iParam0->f_52 = 3;
					}
				}
				else
				{
					TASK_CLEAR(*iParam0);
					TASK_FLEE_ACTOR(*iParam0, GET_LAST_ATTACKER(*iParam0), -1.0f, -1.0f, 0, 0, 0);
					iParam0->f_52 = 3;
				}
				break;
			
			case 0x00000003:
				break;
			}
	}
	return;
}

void Function_481() //Position: 0x1A934 / 108852
{
	switch (iLocal_740)
	{
		case 0x00000006:
			if (!Function_295(&Local_511))
			{
				STREAMING_ENABLE_BOUNDS(0);
				iLocal_939 = 1;
				_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 7, 24.0f, 1);
				TELEPORT_ACTOR(Global_34573, &vLocal_857, 1, 1, 1);
				Global_63097 = 1;
				Function_198(1, 0, 1);
			}
			Function_537(&Local_511, 1);
			_SET_SKY_IS_INTRO_RUNNING(1);
			bLocal_510 = CREATE_LAYOUT("INTRO01_DYNAMICLAYOUT");
			Function_203(0x4000000);
			Function_170(114696);
			Function_395(1);
			Function_165(Global_30640[0]);
			DISABLE_CHILD_SECTOR("arm_trainstation01props02x");
			Function_536();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			SWITCH_ACTOR_ENUM_VARIATION(Global_34573, 12);
			Function_535(20, 0);
			Function_534(1, 0);
			Function_534(3, 0);
			Function_533(0, 0);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 4, 0.0f, 0, 1);
			GIVE_WEAPON_TO_ACTOR(Global_34573, 22, 0.0f, 0, 1);
			Function_208(15, 1, 0);
			Function_211(0);
			iLocal_740 = 7;
			break;
		
		case 0x00000007:
			if (((!Function_295(&Local_511) || bLocal_854) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/CUTSCENE/INTRO_Sequence_1/INTRO_Sequence_1")) && iLocal_509 != 0)
			{
				if (!UI_ISACTIVE("IntroCredits"))
				{
					UI_ACTIVATE("IntroCredits");
				}
				Function_228(0);
				iLocal_740 = 8;
			}
			else if (Function_524() && Function_521())
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/CUTSCENE/INTRO_Sequence_1/INTRO_Sequence_1"))
				{
					LOG_ERROR("intro_sequence does not exist!!!");
				}
				if (iLocal_939)
				{
					STREAMING_ENABLE_BOUNDS(1);
					iLocal_939 = 0;
				}
				Global_63097 = 0;
				Function_518();
				Function_517();
				iLocal_741 = CREATE_OBJECT_ITERATOR(Local_4);
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_860, fLocal_863, 1, 1, 1);
				STREAMING_RELEASE_MAIN_POI();
				STREAMING_SET_CUTSCENE_MODE(0);
				iLocal_740 = 9;
			}
			break;
		
		case 0x00000008:
			if (Function_487())
			{
				Function_228(1);
				UI_DEACTIVATE("IntroCredits");
				if (iLocal_939)
				{
					STREAMING_ENABLE_BOUNDS(1);
					iLocal_939 = 0;
				}
				if (!iLocal_940)
				{
					Function_333();
					Function_383();
					iLocal_740 = 10;
				}
				else
				{
					iLocal_740 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (Function_524() && Function_521())
			{
				iLocal_740 = 10;
			}
			break;
		
		case 0x0000000A:
			if (iLocal_939)
			{
				STREAMING_ENABLE_BOUNDS(1);
				iLocal_939 = 0;
			}
			if (!IS_LAYOUTREF_VALID(Local_4))
			{
				Function_518();
			}
			if (!IS_LAYOUTREF_VALID(Local_327))
			{
				Function_517();
			}
			bLocal_739 = iLocal_509;
			iLocal_740 = 0;
			Function_485(&Local_511, &bLocal_739, &iLocal_740);
			Function_484(StackVal, StackVal, StackVal, StackVal, Function_518(), Function_518(), Local_511);
			switch (bLocal_739)
			{
				case 0x00000000:
					if (Function_295(&Local_511) || HUD_IS_FADED())
					{
						SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(17, 0, 0));
						Function_482(2, 1);
					}
					break;
				
				case 0x00000001:
					SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(17, 30, 0));
					Function_482(2, 1);
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_07", "SILENT", 0f, 4294967295, 4294967295, 3212836864, 0);
					break;
				
				case 0x00000002:
					SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(18, 0, 0));
					Function_482(2, 1);
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_07", "SILENT", 0f, 4294967295, 4294967295, 3212836864, 0);
					break;
				
				case 0x00000065:
					AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_07", "SILENT", 0f, 4294967295, 4294967295, 3212836864, 0);
					break;
			}
			break;
	}
	return;
}

void Function_482(int iParam0, int iParam1) //Position: 0x1ACE1 / 109793
{
	Function_175(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_483(StackVal, iParam1);
	}
	return;
}

void Function_483(int iParam0, int iParam1) //Position: 0x1AD12 / 109842
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_175(iParam0);
	Function_10(uVar0);
	PRINTNL();
	Function_173(iParam0, uVar0, iParam1);
	return;
}

void Function_484(struct<25> Param0) //Position: 0x1AD37 / 109879
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			bLocal_739 = false;
			break;
		
		case 0x00000002:
			bLocal_739 = true;
			break;
		
		case 0x00000003:
			bLocal_739 = 2;
			break;
		
		case 0x00000004:
			bLocal_739 = 101;
			break;
	}
}

void Function_485(int iParam0, var uParam1, var uParam2) //Position: 0x1AD7D / 109949
{
	if (Function_295(iParam0))
	{
		*uParam1 = Function_329(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*uParam2 = 0;
		}
		Function_486();
	}
	return;
}

void Function_486() //Position: 0x1ADB1 / 110001
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

bool Function_487() //Position: 0x1AE02 / 110082
{
	Function_297(&Local_732, 1, "Intro01");
	switch (Local_732)
	{
		case 0x000003E8:
			Function_227(Global_34573);
			Function_367(StackVal, StackVal, "$/cutscene/INTRO_Sequence_1/INTRO_Sequence_1", &uLocal_855, Function_227(Global_34573), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 0);
			if ((bLocal_739 != 99 && (Function_295(&Local_511) || Local_511.f_24 < 1)) && !bLocal_854)
			{
				Local_732 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/INTRO_Sequence_1/INTRO_Sequence_1"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				Local_732 = 1106;
				return 0;
			}
			Function_515(&iLocal_703, "dockWorker_signaling", 5, 0);
			Function_515(&iLocal_703, "custom/dockWorker_signaling", 8, 0);
			Function_515(&iLocal_703, "p_gen_craneDockCutscene01x", 0, 0);
			Function_341(&iLocal_703, 96, 2, 0);
			Function_515(&iLocal_703, "intro01_crane_worker", 5, 0);
			Function_515(&iLocal_703, "custom/intro01_crane_worker", 8, 0);
			Function_341(&iLocal_703, 97, 2, 0);
			Function_341(&iLocal_626, 2, 2, 1);
			Function_341(&iLocal_626, 576, 2, 1);
			Function_341(&iLocal_626, 642, 2, 1);
			Function_341(&iLocal_626, 605, 2, 1);
			Function_341(&iLocal_626, 75, 2, 1);
			Function_341(&iLocal_626, 87, 2, 1);
			Function_341(&iLocal_626, 716, 2, 1);
			Function_341(&iLocal_626, 718, 2, 1);
			Function_341(&iLocal_626, 720, 2, 1);
			Function_341(&iLocal_626, 726, 2, 1);
			Function_341(&iLocal_626, 728, 2, 1);
			Function_341(&iLocal_626, 730, 2, 1);
			Function_515(&iLocal_663, "p_blk_cityhall_clock01x", 0, 0);
			Function_341(&iLocal_663, 2, 2, 1);
			Function_341(&iLocal_663, 637, 2, 1);
			Function_341(&iLocal_663, 635, 2, 1);
			Function_341(&iLocal_663, 632, 2, 1);
			Function_341(&iLocal_663, 649, 2, 1);
			Function_341(&iLocal_663, 570, 2, 1);
			Function_341(&iLocal_663, 706, 2, 1);
			Function_341(&iLocal_663, 708, 2, 1);
			Function_341(&iLocal_663, 709, 2, 1);
			Function_341(&iLocal_663, 710, 2, 1);
			Function_341(&iLocal_663, 714, 2, 1);
			Function_341(&iLocal_663, 712, 2, 1);
			Function_573(1);
			AUDIO_MUSIC_ONE_SHOT("CUTSCENE_INTRO_SEQUENCE_MUSIC_01", "IDLE", 0.0f, 0.0f, 1, 0);
			SET_SCRIPT_CUTSCENE_ACTIVE(1);
			SET_RADAR_STREAMING(0);
			STREAMING_SET_CUTSCENE_MODE(1);
			Function_293(&Local_732 + 4);
			Local_732 = 1002;
			break;
		
		case 0x000003EA:
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/INTRO_Sequence_1/INTRO_Sequence_1"))
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				Local_732 = 1105;
				return 0;
			}
			Function_227(Global_34573);
			Function_367(StackVal, StackVal, "$/cutscene/INTRO_Sequence_1/INTRO_Sequence_1", &uLocal_855, Function_227(Global_34573), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 0);
			Function_336(&iLocal_703);
			Function_336(&iLocal_626);
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (AUDIO_MUSIC_IS_PREPARED())
				{
					Function_227(Global_34573);
					if (StackVal && Function_367(StackVal, Function_288(&Local_732 + 4) < 2.5f, "$/cutscene/INTRO_Sequence_1/INTRO_Sequence_1", &uLocal_855, Function_227(Global_34573), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1))
					{
						Function_309(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
						Global_63097 = 1;
						STREAMING_RELEASE_MAIN_POI();
						Local_732.f_16 = Function_511(bLocal_510, 0, Global_34573, 1, 0, 0);
						if (IS_OBJECT_VALID(Local_732.f_16))
						{
						}
						else
						{
							LOG_ERROR("Marshal01_Outro - Failed to CREATE_INTRO01_CS01_SHIP_CUTSCENE Marshal01_Outro_cutscene");
						}
						CUTSCENEOBJECT_SET_RECENTER_GAMECAM(Local_732.f_16, 1);
						DECOR_SET_BOOL(Global_34573, "__CameraReady", 1);
						SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_732.f_16, 0);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_ACTIVATE("nCutscenes");
						}
						SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(10, 0, 0));
						Function_482(1, 1);
						HUD_FADE_IN(1.0f, 1065353216);
						AUDIO_MUSIC_PLAY_PREPARED();
						fLocal_1259 = GET_CURRENT_GAME_TIME();
						Function_293(&Local_732 + 4);
						Local_732 = 1004;
					}
				}
			}
			break;
		
		case 0x000003EC:
			if (!Function_336(&iLocal_626))
			{
			}
			if (Function_336(&iLocal_703))
			{
				if (!IS_PHYSINST_VALID(uLocal_1244))
				{
					uLocal_1244 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(813.31f, 78.466f, 1280.793f, 20.0f, "ncranedock", 1);
				}
				else if (!IS_OBJECT_VALID(bLocal_1245))
				{
					Function_504();
				}
			}
			if (!HUD_IS_FADING() && !HUD_IS_FADED())
			{
				if ((GET_CURRENT_GAME_TIME() - fLocal_1259) <= 6.0f)
				{
					CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(825.026f, 80.742f, 1287.21f, 2.396f, 75.979f, 0.001f);
					if (IS_OBJECT_VALID(bLocal_1258))
					{
						UNK_0x6745191B(bLocal_1258, 0.0f, 0.0f, 0.0f);
					}
					else
					{
						LOG_ERROR("Crane smoke emitter couldn't be created!");
					}
					CUTSCENE_MANAGER_PLAY_CUTSCENE();
					iLocal_1237 = 1;
					Function_293(&Local_732 + 4);
					Local_732 = 1005;
				}
			}
			break;
		
		case 0x000003ED:
			if (Function_336(&iLocal_703))
			{
				if (!IS_PHYSINST_VALID(uLocal_1244))
				{
					uLocal_1244 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(813.31f, 78.466f, 1280.793f, 20.0f, "ncranedock", 1);
				}
				else if (!IS_OBJECT_VALID(bLocal_1245))
				{
					Function_504();
				}
			}
			if (!Function_336(&iLocal_626))
			{
			}
			if (iLocal_1237 && CUTSCENE_MANAGER_GET_CURRENT_TIME() < 0.5f)
			{
				SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_732.f_16, 0);
				DESTROY_OBJECT(Local_732.f_16);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				iLocal_1237 = 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Function_293(&Local_732 + 4);
				Local_732 = 1006;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				Local_732.f_16 = Function_498(bLocal_510, 0, Global_34573, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_732.f_16))
				{
				}
				else
				{
					LOG_ERROR("Marshal01_Outro - Failed to CREATE_INTRO01_CS01_DOCKS_CUTSCENE Marshal01_Outro_cutscene");
				}
				CUTSCENEOBJECT_SET_RECENTER_GAMECAM(Local_732.f_16, 1);
				DECOR_SET_BOOL(Global_34573, "__CameraReady", 1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_732.f_16, 0);
				PLAY_SIMPLE_PROP_ANIMATION(bLocal_1245, "p_gen_craneDockCutscene01x_swing", 0, 0, 1065353216, 0);
				fLocal_1259 = GET_CURRENT_GAME_TIME();
				iLocal_1240 = 0;
			}
			break;
		
		case 0x000003EE:
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/INTRO_Sequence_2/INTRO_Sequence_2"))
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				Local_732 = 1105;
				return 0;
			}
			Function_227(Global_34573);
			Function_367(StackVal, StackVal, "$/cutscene/INTRO_Sequence_2/INTRO_Sequence_2", &uLocal_855, Function_227(Global_34573), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1);
			Function_521();
			Function_497();
			if (!UI_ISACTIVE("nCutscenes") && !iLocal_1240)
			{
				UI_PUSH("nCutscenes");
				iLocal_1240 = 1;
			}
			if (!IS_LAYOUTREF_VALID(Local_327))
			{
				if (Function_521())
				{
					Function_517();
				}
			}
			else if (iLocal_943 == 4294967295)
			{
				if (Function_497())
				{
					Function_496(StackVal, StackVal, StackVal, *(&Local_327 + 388[66]));
				}
			}
			else
			{
				Function_227(Global_34573);
				if (Function_367(StackVal, StackVal, "$/cutscene/INTRO_Sequence_2/INTRO_Sequence_2", &uLocal_855, Function_227(Global_34573), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - fLocal_1259) <= 10.0f)
					{
						CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(659.3299f, 87.63741f, 1277.209f, -14.076f, 158.827f, 0.0f);
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						iLocal_1237 = 1;
						Function_293(&Local_732 + 4);
						Local_732 = 1007;
					}
				}
			}
			break;
		
		case 0x000003EF:
			if (!Function_336(&iLocal_663))
			{
			}
			if (iLocal_1237 && CUTSCENE_MANAGER_GET_CURRENT_TIME() < 0.5f)
			{
				SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_732.f_16, 0);
				DESTROY_OBJECT(Local_732.f_16);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				iLocal_1237 = 0;
			}
			if (!iLocal_1241 && CUTSCENE_MANAGER_GET_CURRENT_FRAME() < 0)
			{
				UI_ENTER("IntroCredits");
				iLocal_1241 = 1;
			}
			if (CUTSCENE_MANAGER_GET_CURRENT_TIME() < 10.0f && IS_OBJECT_VALID(bLocal_1245))
			{
				DESTROY_ACTOR(bLocal_1246);
				DESTROY_ACTOR(bLocal_1247);
				DESTROY_OBJECT(bLocal_1245);
				SHOW_PHYSINST(uLocal_1244);
				DESTROY_OBJECT(bLocal_1258);
				Function_188(&iLocal_703);
				Function_188(&iLocal_626);
			}
			if (CUTSCENE_MANAGER_GET_CURRENT_TIME() < 20.0f)
			{
				if (!IS_OBJECT_VALID(bLocal_1249))
				{
					bLocal_1249 = GET_OBJECT_FROM_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(736.905f, 92.989f, 1205.097f, 10.0f, "p_blk_cityhall_clock01x", 1));
					STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_1249);
				}
				else if (!IS_OBJECT_ANIMATOR_VALID(uLocal_1250))
				{
					uLocal_1250 = CREATE_OBJECT_ANIMATOR(bLocal_1249, bLocal_510, Function_56(), Function_56(), Function_56());
					uLocal_1251 = CREATE_OBJECT_ANIMATOR(bLocal_1249, bLocal_510, Function_56(), Function_56(), Function_56());
					fLocal_1256 = GET_CURRENT_GAME_TIME();
				}
				else if (IS_OBJECT_ANIMATOR_READY(uLocal_1250) && IS_OBJECT_ANIMATOR_READY(uLocal_1251))
				{
					if (!DECOR_CHECK_EXIST(bLocal_510, "clocksetup"))
					{
						if ((GET_CURRENT_GAME_TIME() - fLocal_1256) < 1.0f)
						{
							SET_OBJECT_ANIMATOR_BONE_RANGE(uLocal_1250, 2, 2, 4, 4);
							SET_OBJECT_ANIMATOR_BONE_RANGE(uLocal_1251, 1, 1, 3, 3);
							SET_OBJECT_ANIMATOR_ANIMATION(uLocal_1250, "clock_time", 1);
							SET_OBJECT_ANIMATOR_ANIMATION(uLocal_1251, "clock_time", 1);
							SET_OBJECT_ANIMATOR_RATE(uLocal_1250, 0.0f);
							SET_OBJECT_ANIMATOR_RATE(uLocal_1251, 0.0f);
							DECOR_SET_BOOL(bLocal_510, "clocksetup", 1);
						}
					}
					else
					{
						iLocal_1252 = GET_HOUR(false);
						iLocal_1253 = GET_MINUTE(false);
						fLocal_1254 = (TO_FLOAT(iLocal_1252) / 12.0f);
						fLocal_1255 = (TO_FLOAT(iLocal_1253) / 60.0f);
						SET_OBJECT_ANIMATOR_PHASE(uLocal_1250, (fLocal_1254 + (fLocal_1255 / 12.0f)));
						SET_OBJECT_ANIMATOR_PHASE(uLocal_1251, fLocal_1255);
					}
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Function_293(&Local_732 + 4);
				Local_732 = 1009;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				Local_732.f_16 = Function_490(bLocal_510, 0, Global_34573, 1, 0, 0);
				if (IS_OBJECT_VALID(Local_732.f_16))
				{
				}
				else
				{
					LOG_ERROR("Marshal01_Outro - Failed to CREATE_INTRO01_CS01_TRAIN_CUTSCENE Marshal01_Outro_cutscene");
				}
				fLocal_1259 = GET_CURRENT_GAME_TIME();
				DISABLE_CHILD_SECTOR("Blk_swTrainstation_east01x");
				DISABLE_CHILD_SECTOR("Blk_watertower01x");
				DISABLE_CHILD_SECTOR("Blk_hotel01x");
				DISABLE_CHILD_SECTOR("Blk_theatre01x");
				DISABLE_CHILD_SECTOR("Blk_saloon01x");
				DISABLE_CHILD_SECTOR("Blk_cityHall01x");
				DISABLE_CHILD_SECTOR("Blk_policestation01x");
				DISABLE_CHILD_SECTOR("blk_theatre01Props01x");
				DISABLE_CHILD_SECTOR("blk_archeologist01x");
				DISABLE_CHILD_SECTOR("blk_swBlacksmith_south01x");
				DISABLE_CHILD_SECTOR("blk_generalBuilding05x");
				DISABLE_CHILD_SECTOR("blk_inn01x");
				CUTSCENEOBJECT_SET_RECENTER_GAMECAM(Local_732.f_16, 1);
				DECOR_SET_BOOL(Global_34573, "__CameraReady", 1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_732.f_16, 0);
				TRAIN_SET_SPEED(iLocal_943, 1.0f);
				TRAIN_SET_TARGET_SPEED(iLocal_943, 10.0f);
				TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iLocal_943, 4294967295, 1);
				TRAIN_SET_AUTOPILOT_ENABLE(iLocal_943, 0);
				iLocal_1240 = 0;
				if (IS_OBJECT_VALID(bLocal_1245))
				{
					DESTROY_ACTOR(bLocal_1246);
					DESTROY_OBJECT(bLocal_1245);
					SHOW_PHYSINST(uLocal_1244);
					Function_188(&iLocal_703);
				}
			}
			break;
		
		case 0x000003F1:
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/INTRO_Sequence_3/INTRO_Sequence_3"))
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				Local_732 = 1105;
				return 0;
			}
			if (!UI_ISACTIVE("nCutscenes") && !iLocal_1240)
			{
				UI_PUSH("nCutscenes");
				iLocal_1240 = 1;
			}
			Function_227(Global_34573);
			if (Function_318(StackVal, StackVal, "$/cutscene/INTRO_Sequence_3/INTRO_Sequence_3", &uLocal_855, Function_227(Global_34573), 64897, 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1))
			{
				if ((GET_CURRENT_GAME_TIME() - fLocal_1259) <= 12.0f)
				{
					CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(-2209.534f, 18.137f, 2605.5f, -2.98f, -100.136f, 0.0f);
					CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(-3.0f, 0);
					CUTSCENE_MANAGER_PLAY_CUTSCENE();
					iLocal_1237 = 1;
					iLocal_1242 = 0;
					Function_293(&Local_732 + 4);
					Local_732 = 1010;
				}
			}
			break;
		
		case 0x000003F2:
			if (iLocal_1237 && CUTSCENE_MANAGER_GET_CURRENT_TIME() < 5.0f)
			{
				Function_456(2);
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_928);
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_943, 1));
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_943, 2));
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_943, 3));
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_943, 4));
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_943, 5));
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_943, 6));
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_860, fLocal_863, 1, 1, 0);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_732.f_16, 0);
				DESTROY_OBJECT(Local_732.f_16);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				iLocal_1237 = 0;
			}
			if (!iLocal_1242)
			{
				Function_489(2, 7, 0, 0, 1);
				iLocal_1242 = 1;
				iLocal_1243 = 0;
				bLocal_1257 = (CUTSCENE_MANAGER_GET_TOTAL_FRAMES() - CUTSCENE_MANAGER_GET_CURRENT_FRAME());
			}
			else if (!iLocal_1243)
			{
				fLocal_1256 = (TO_FLOAT(CUTSCENE_MANAGER_GET_CURRENT_FRAME()) / TO_FLOAT(bLocal_1257));
				bLocal_1252 = false;
				bLocal_1253 = FLOOR((((TO_FLOAT(17) - TO_FLOAT(10)) * 60.0f) * fLocal_1256));
				while (bLocal_1253 >= 60)
				{
					bLocal_1252++;
					bLocal_1253 = (bLocal_1253 - 60);
				}
				bLocal_1252 += 10;
				if (bLocal_1252 <= 0 && bLocal_1253 <= 0)
				{
					SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(bLocal_1252, bLocal_1253, 0));
				}
			}
			if ((CUTSCENE_MANAGER_GET_TOTAL_FRAMES() - CUTSCENE_MANAGER_GET_CURRENT_FRAME()) <= 900)
			{
				if (Global_63097)
				{
					Global_63097 = 0;
					SET_RADAR_STREAMING(1);
				}
				GET_VOLUME_CENTER((*&Local_4 + 812)[3], &vLocal_915);
				STREAMING_LOAD_BOUNDS_EXT(0, vLocal_915, 150.0f, 1);
			}
			else if (!Global_63097)
			{
				Global_63097 = 1;
			}
			if (Function_571(Global_30640[0]))
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					if (Function_524())
					{
						Global_63097 = 0;
						if (iLocal_939)
						{
							STREAMING_ENABLE_BOUNDS(1);
							iLocal_939 = 0;
						}
						Function_518();
						Function_2(1);
						Function_402();
						Function_404();
						if (IS_LAYOUTREF_VALID(Local_4))
						{
							iLocal_741 = CREATE_OBJECT_ITERATOR(Local_4);
						}
						vLocal_915 = { StackVal, Function_518(), *(&Local_327 + 388[06]) };
						Function_382(StackVal, StackVal, StackVal, vLocal_915);
					}
				}
				else if (!SQUAD_IS_VALID(Local_327.f_152))
				{
					if (Function_521())
					{
						GET_VOLUME_CENTER((*&Local_4 + 812)[3], &vLocal_915);
						STREAMING_LOAD_BOUNDS_EXT(0, vLocal_915, 40.0f, 1);
						if (!DECOR_CHECK_EXIST((*&Local_4 + 812)[3], "oneframe"))
						{
							DECOR_SET_BOOL((*&Local_4 + 812)[3], "oneframe", 1);
						}
						else if (STREAMING_ARE_BOUNDS_LOADED(vLocal_915, 30.0f))
						{
							if (!IS_LAYOUTREF_VALID(Local_327))
							{
								Function_517();
							}
							Function_405();
							Function_404();
							Function_488(1);
						}
					}
				}
				else if (!Function_290(&iLocal_892))
				{
					Function_384(&iLocal_892);
				}
				else if (Function_288(&iLocal_892) < 1.0f)
				{
					iLocal_864 = 0;
					while (iLocal_864 < 6)
					{
						Function_480(&(Local_961[iLocal_86414]));
						iLocal_864 = (iLocal_864 + 1);
					}
					Function_293(&iLocal_892);
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(0.0f, 1f, 1);
						LOG_ERROR("Cutscene was missing assets (check TTY)! Skipping...");
					}
					Function_293(&Local_732 + 4);
					Local_732 = 1105;
				}
				else
				{
					Function_293(&Local_732 + 4);
					Local_732 = 1104;
				}
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				Function_403();
				vLocal_915 = { StackVal, StackVal, *(&Local_327 + 388[16]) };
				Function_382(StackVal, StackVal, StackVal, vLocal_915);
				iLocal_1243 = 1;
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				AI_STOP_IGNORING_ACTORS();
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_732.f_20);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_732.f_20);
				DESTROY_VOLUME(Local_732.f_20);
				Function_488(0);
				STREAMING_SET_CUTSCENE_MODE(0);
				Function_188(&iLocal_604);
				Function_188(&iLocal_626);
				Function_188(&iLocal_663);
				Function_188(&iLocal_703);
				Function_300(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
				if (UI_ISACTIVE("nCutscenes"))
				{
					UI_POP("nCutscenes");
				}
				UI_DEACTIVATE("IntroCredits");
				UI_EXIT("IntroCredits");
				if (IS_OBJECT_VALID(bLocal_1248))
				{
					DESTROY_OBJECT(bLocal_1248);
				}
				ENABLE_WORLD_SECTOR("hennigansRanch");
				ENABLE_WORLD_SECTOR("ntwinRocks");
				SET_SCRIPT_CUTSCENE_ACTIVE(0);
				SET_RADAR_STREAMING(1);
				Global_63097 = 0;
				Local_732 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!iLocal_1238)
			{
				AUDIO_MUSIC_SUSPEND(500);
				UI_DEACTIVATE("IntroCredits");
				UI_EXIT("IntroCredits");
				iLocal_1238 = 1;
			}
			if (!iLocal_1239 && HUD_IS_FADED())
			{
				Function_188(&iLocal_703);
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, vLocal_860, fLocal_863, 1, 1, 1);
				if (iLocal_939)
				{
					STREAMING_ENABLE_BOUNDS(1);
					iLocal_939 = 0;
				}
				Function_482(2, 1);
				iLocal_1239 = 1;
			}
			if (!HUD_IS_FADING())
			{
				if (IS_OBJECT_VALID(Local_732.f_16))
				{
					DESTROY_OBJECT(Local_732.f_16);
					if (DECOR_CHECK_EXIST(Global_34573, "__CameraReady"))
					{
						DECOR_REMOVE(Global_34573, "__CameraReady");
					}
				}
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else if (IS_LAYOUTREF_VALID(Local_4))
				{
					Global_63097 = 0;
					Local_732 = 1104;
				}
				else if (Function_524() && Function_521())
				{
					if (!IS_LAYOUTREF_VALID(Local_327))
					{
						Function_517();
					}
					if (!IS_LAYOUTREF_VALID(Local_4))
					{
						Function_518();
					}
					Function_402();
					if (IS_LAYOUTREF_VALID(Local_4))
					{
						iLocal_741 = CREATE_OBJECT_ITERATOR(Local_4);
					}
					if (iLocal_939)
					{
						STREAMING_ENABLE_BOUNDS(1);
						iLocal_939 = 0;
					}
					STREAMING_SET_CUTSCENE_MODE(0);
					Function_2(1);
					iLocal_940 = 1;
					Function_188(&iLocal_703);
					CAMERA_RESET(-3.0f);
					Global_63097 = 0;
					Local_732 = 1104;
				}
			}
			break;
		
		case 0x00000452:
			Local_732 = 1105;
			return 0;
			break;
	}
	return 0;
}

void Function_488(int iParam0) //Position: 0x1C30C / 115468
{
	iLocal_864 = 0;
	while (iLocal_864 < 5)
	{
		if (IS_ACTOR_VALID(Local_961[iLocal_86414]))
		{
			ACTOR_SET_GRABBED_BY_CUTSCENE(Local_961[iLocal_86414], iParam0);
		}
		iLocal_864++;
	}
	return;
}

void Function_489(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x1C343 / 115523
{
	int iVar0;
	int iVar1;
	
	Function_175(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_483(StackVal, bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_173(StackVal, iVar1, bParam4);
		}
	}
}

var Function_490(char* cParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1C3B5 / 115637
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_56(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "Intro01_CS01_Train", 4, 1);
	}
	Function_491(&bVar0, uParam2);
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

void Function_491(var uParam0, char* cParam1) //Position: 0x1C435 / 115765
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_495(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_494(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_493(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_492(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 2, 3, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 8.5f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 3);
	return;
}

void Function_492(int iParam0) //Position: 0x1C4C1 / 115905
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.2837f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 655.5104f, 79.75709f, 1327.081f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.19627f, 1.00351f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_493(int iParam0) //Position: 0x1C52B / 116011
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55.2837f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 655.9943f, 79.76595f, 1326.426f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.042318f, 0.674965f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_494(int iParam0) //Position: 0x1C595 / 116117
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49.16f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 657.5083f, 87.62548f, 1282.128f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.005485f, 2.747144f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_495(int iParam0) //Position: 0x1C5F8 / 116216
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49.16f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 659.7367f, 85.23819f, 1282.028f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.106558f, 2.808608f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_496(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1C65B / 116315
{
	var uVar0;
	
	if (!iLocal_949)
	{
		bLocal_948 = CREATE_WORLD_SECTOR(bLocal_510, "swRailRoad");
		iLocal_949 = 1;
	}
	else if (IS_WORLD_SECTOR_LOADED(bLocal_948))
	{
		if (iLocal_943 == 4294967295)
		{
			iLocal_943 = TRAIN_CREATE_NEW_TRAIN(8, "rail__rrtrack_02x", 0);
			TRAIN_SET_MAX_ACCEL(iLocal_943, 1.25f);
			TRAIN_SET_MAX_DECEL(iLocal_943, -0.75f);
			TRAIN_SET_TARGET_SPEED(iLocal_943, 0.0f);
			UNK_0x44986367(&uVar0, uParam3);
			TRAIN_SET_POSITION_DIRECTION_PRECISELY(iLocal_943, &uParam0, &uVar0, 16);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_943, 1166);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_943, 1167);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_943, 1165);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_943, 1156);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_943, 1157);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_943, 1158);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_943, 1162);
			bLocal_928 = TRAIN_GET_CAR(iLocal_943, 0);
			if (bLocal_739 == 99)
			{
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_928);
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_943, 1));
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_943, 2));
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_943, 3));
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_943, 4));
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_943, 5));
				STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(TRAIN_GET_CAR(iLocal_943, 6));
			}
		}
	}
}

bool Function_497() //Position: 0x1C777 / 116599
{
	if (Function_336(&iLocal_604))
	{
		return 1;
	}
	return 0;
}

var Function_498(char* cParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1C789 / 116617
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_56(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "Intro01_CS01_Docks", 4, 1);
	}
	Function_499(&bVar0, uParam2);
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

void Function_499(var uParam0, char* cParam1) //Position: 0x1C809 / 116745
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_503(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_502(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_501(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_500(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 3.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 2, 3, 7.5f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 3, 1.0f, 3);
	return;
}

void Function_500(int iParam0) //Position: 0x1C895 / 116885
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 39.46078f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 824.9392f, 84.40737f, 1285.706f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.491826f, 1.797878f, -0.004677f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_501(int iParam0) //Position: 0x1C903 / 116995
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 39.46078f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 826.1029f, 84.97172f, 1285.981f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.554804f, 1.113171f, -0.00485f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_502(int iParam0) //Position: 0x1C971 / 117105
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 47.38179f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 811.5414f, 79.89253f, 1285.677f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.312616f, -0.410258f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_503(var uParam0) //Position: 0x1C9D4 / 117204
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 47.38179f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, 810.8913f, 79.81506f, 1285.717f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0.304031f, -0.328468f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_504() //Position: 0x1CA37 / 117303
{
	var uVar0;
	
	HIDE_PHYSINST(uLocal_1244);
	Function_227(GET_OBJECT_FROM_PHYSINST(uLocal_1244));
	bLocal_1245 = CREATE_PROP_IN_LAYOUT(bLocal_510, Function_56(), "p_gen_craneDockCutscene01x", Function_227(GET_OBJECT_FROM_PHYSINST(uLocal_1244)), 0.0f, -90.0f, 0.0f, 1);
	bLocal_1246 = CREATE_ACTOR_IN_LAYOUT(bLocal_510, Function_56(), 96, 804.4845f, 78.21268f, 1286.207f, 0.0f, -90.0f, 0.0f);
	SUSPEND_MOVER(bLocal_1246);
	SET_OBJECT_POSITION(bLocal_1246, 804.4845f, 78.475f, 1286.207f);
	SET_OBJECT_ORIENTATION(bLocal_1246, 0.0f, -90.0f, 0.0f);
	SET_ANIM_SET_FOR_ACTOR(bLocal_1246, "dockWorker_signaling", 0);
	SET_ACTION_NODE_FOR_ACTOR(bLocal_1246, "dockWorker_signaling");
	Function_505(bLocal_1245);
	bLocal_1247 = CREATE_ACTOR_IN_LAYOUT(bLocal_510, Function_56(), 97, 806.4845f, 78.21268f, 1286.207f, 0.0f, 0.0f, 0.0f);
	SET_OBJECT_COLLIDE_WITH_OBJECT(bLocal_1245, bLocal_1247, 0);
	Function_477(StackVal, GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_1247, 0), 1, 1, 1);
	uVar0 = ATTACH_OBJECTS_USING_LOCATOR(bLocal_1247, bLocal_1245, Function_56(), "attach", 4294967295);
	SET_ATTACHMENT_LOCAL_ROTATION(uVar0, 0.0f, 180.0f, 0.0f);
	SET_ANIM_SET_FOR_ACTOR(bLocal_1247, "intro01_crane_worker", 0);
	SET_ACTION_NODE_FOR_ACTOR(bLocal_1247, "intro01_crane_worker/crane_worker");
	bLocal_1258 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_510, Function_56(), "amb_industrial_smoke_01", *(&Local_1222 + 8[16]));
	return;
}

int Function_505(bool bParam0) //Position: 0x1CBE9 / 117737
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	Function_510(3, 2);
	uVar0 = uVar0;
	Local_1222 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_56()));
	Local_1222.f_4 = CREATE_OBJECTSET_IN_LAYOUT("CraneSet", Local_1222, 8, 0);
	*(&Local_1222 + 8[06]) = { -0.1578306f, 1.614221f, 1.937101f };
	*(&Local_1222 + 8[06] + 12) = { 0.0f, 132.282f, 0.0f };
	Function_507(bParam0, &Local_1222 + 8[06]);
	iVar1 = CREATE_POINT_IN_LAYOUT(Local_1222, "Worker", -0.1578306f, 1.614221f, 1.937101f, 0.0f, 132.282f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, iVar1);
	*(&Local_1222 + 8[16]) = { -0.002865702f, 4.939071f, -0.003954853f };
	*(&Local_1222 + 8[16] + 12) = { 0.0f, 132.282f, 0.0f };
	Function_507(bParam0, &Local_1222 + 8[16]);
	iVar2 = CREATE_POINT_IN_LAYOUT(Local_1222, "Smoke", -0.002865702f, 4.939071f, -0.003954853f, 0.0f, 132.282f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(StackVal, iVar2);
	Function_506(Local_1222, bParam0);
	return 1;
}

void Function_506(bool bParam0, bool bParam1) //Position: 0x1CCFB / 118011
{
	var uVar0;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 13)
		{
			uVar0 = ATTACH_OBJECTS(bParam0, bParam1, Function_56(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			if (IS_ATTACHMENT_VALID(uVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(bParam0));
			}
		}
	}
	return;
}

void Function_507(var uParam0, int iParam1) //Position: 0x1CD3D / 118077
{
	Function_508(uParam0, 1, iParam1, iParam1 + 12);
	return;
}

void Function_508(var uParam0, bool bParam1, var uParam2, var uParam3) //Position: 0x1CD4F / 118095
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(uParam0, *uParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_509(&vVar0, uParam2))
			{
				*uParam2 = { StackVal, StackVal, vVar0 };
			}
		}
		else
		{
			*uParam2 = { StackVal, StackVal, vVar0 };
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(uParam0, *uParam3, &vVar0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		*uParam3 = { StackVal, StackVal, vVar0 };
	}
}

bool Function_509(var uParam0, int iParam1) //Position: 0x1CE77 / 118391
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_76(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	*uParam0 = (*uParam0 + 0.01f);
	uParam0->f_8 = (StackVal + 0.01f);
	if (FIND_GROUND_INTERSECTION(uParam0, 50.0f, iParam1, &uVar0))
	{
		if (!Function_76(StackVal, StackVal, *iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_510(int iParam0, bool bParam1) //Position: 0x1CEE2 / 118498
{
	switch (bParam1)
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

var Function_511(char* cParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1CF2B / 118571
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_56(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "Intro01_CS01_Ship", 2, 1);
	}
	Function_512(&bVar0, uParam2);
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

void Function_512(var uParam0, char* cParam1) //Position: 0x1CFAA / 118698
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_514(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_513(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 6.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 1, 1.0f, 2);
	return;
}

void Function_513(int iParam0) //Position: 0x1D00E / 118798
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 47.30683f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 916.0314f, 82.4565f, 1328.127f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.055416f, 1.00069f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_514(int iParam0) //Position: 0x1D071 / 118897
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 47.30683f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 917.5576f, 81.94563f, 1347.476f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.041732f, 0.900774f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

var Function_515(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x1D0D4 / 118996
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(uParam1, iParam2);
	iVar0 = Function_516(iParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_339(iParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_516(var uParam0, int iParam1, int iParam2) //Position: 0x1D10C / 119052
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_191(uParam0[iVar03], 4))
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

void Function_517() //Position: 0x1D1D0 / 119248
{
	var uVar0;
	
	Function_510(4, 1);
	uVar0 = uVar0;
	Local_327 = CREATE_LAYOUT("Intro01Pre_layout");
	Local_327.f_212 = CREATE_VOLUME_SET_IN_LAYOUT(Local_327, "RestrictVolumes_set");
	(*&Local_327 + 156)[0] = CREATE_VOLUME_IN_LAYOUT(Local_327, "JakeRestrict", 2, -2166.8f, 16.8768f, 2587.21f, 0.0f, 0.0f, 0.0f, 4.930397f, 3.899989f, 3.792048f);
	ADD_TO_VOLUME_SET(Local_327.f_212, (*&Local_327 + 156)[0]);
	(*&Local_327 + 156)[1] = CREATE_VOLUME_IN_LAYOUT(Local_327, "SaloonRestrict", 2, -2169.482f, 16.8768f, 2594.096f, 0.0f, 0.0f, 0.0f, 8.95f, 6.05f, 17.7f);
	ADD_TO_VOLUME_SET(Local_327.f_212, (*&Local_327 + 156)[1]);
	(*&Local_327 + 156)[2] = CREATE_VOLUME_IN_LAYOUT(Local_327, "HorseSpotRestrict", 2, -2163.072f, 17.68633f, 2608.857f, 0.0f, 0.0f, 0.0f, 13.08077f, 3.400629f, 5.382564f);
	ADD_TO_VOLUME_SET(Local_327.f_212, (*&Local_327 + 156)[2]);
	(*&Local_327 + 156)[3] = CREATE_VOLUME_IN_LAYOUT(Local_327, "FortMercerAmbientRestrict", 2, -2669.671f, 68.74281f, 3404.42f, 0.0f, 14.25149f, 0.0f, 400.0f, 100.0f, 400.0f);
	ADD_TO_VOLUME_SET(Local_327.f_212, (*&Local_327 + 156)[3]);
	(*&Local_327 + 156)[4] = CREATE_VOLUME_IN_LAYOUT(Local_327, "TrainStationRestrict01", 2, -2191.38f, 17.68633f, 2607.735f, 0.0f, 0.0f, 0.0f, 11.76965f, 3.400629f, 2.856029f);
	ADD_TO_VOLUME_SET(Local_327.f_212, (*&Local_327 + 156)[4]);
	(*&Local_327 + 156)[5] = CREATE_VOLUME_IN_LAYOUT(Local_327, "TrainStationRestrict02", 2, -2199.611f, 17.68633f, 2607.179f, 0.0f, 0.0f, 0.0f, 4.85f, 3.400629f, 10.25f);
	ADD_TO_VOLUME_SET(Local_327.f_212, (*&Local_327 + 156)[5]);
	(*&Local_327 + 156)[6] = CREATE_VOLUME_IN_LAYOUT(Local_327, "TrainStationRestrict03", 2, -2206.898f, 20.86679f, 2618.092f, 0.0f, 0.0f, 0.0f, 7.0142f, 3.400629f, 6.308893f);
	ADD_TO_VOLUME_SET(Local_327.f_212, (*&Local_327 + 156)[6]);
	(*&Local_327 + 156)[7] = CREATE_VOLUME_IN_LAYOUT(Local_327, "TrainStationRestrict04", 2, -2205.59f, 17.68633f, 2607.437f, 0.0f, 0.0f, 0.0f, 7.1f, 3.400629f, 5.8f);
	ADD_TO_VOLUME_SET(Local_327.f_212, (*&Local_327 + 156)[7]);
	(*&Local_327 + 156)[8] = CREATE_VOLUME_IN_LAYOUT(Local_327, "TrainStationRestrict05", 2, -2190.832f, 17.71783f, 2607.471f, 0.0f, 0.0f, 0.0f, 2.391382f, 3.400629f, 11.5f);
	ADD_TO_VOLUME_SET(Local_327.f_212, (*&Local_327 + 156)[8]);
	(*&Local_327 + 156)[9] = CREATE_VOLUME_IN_LAYOUT(Local_327, "TrainStationRestrict06", 2, -2198.068f, 17.90025f, 2611.72f, 0.0f, 0.0f, 0.0f, 3.163388f, 3.400629f, 5.144849f);
	ADD_TO_VOLUME_SET(Local_327.f_212, (*&Local_327 + 156)[9]);
	(*&Local_327 + 156)[10] = CREATE_VOLUME_IN_LAYOUT(Local_327, "TrainStationRestrict07", 2, -2155.607f, 16.449f, 2621.12f, 0.0f, 0.0f, 0.0f, 2.0f, 3.400629f, 2.0f);
	ADD_TO_VOLUME_SET(Local_327.f_212, (*&Local_327 + 156)[10]);
	(*&Local_327 + 156)[11] = CREATE_VOLUME_IN_LAYOUT(Local_327, "DrunkRestrict", 2, -2176.535f, 16.38058f, 2605.471f, 0.0f, 135.0f, 0.0f, 2.21704f, 4.464825f, 2.677096f);
	ADD_TO_VOLUME_SET(Local_327.f_212, (*&Local_327 + 156)[11]);
	(*&Local_327 + 156)[12] = CREATE_VOLUME_IN_LAYOUT(Local_327, "SaloonStepsRestrict", 2, -2175.313f, 16.38058f, 2603.93f, 0.0f, 135.0f, 0.0f, 5.3f, 4.464825f, 1.238037f);
	ADD_TO_VOLUME_SET(Local_327.f_212, (*&Local_327 + 156)[12]);
	*(&Local_327 + 216[06]) = { -2198.075f, 16.951f, 2610.127f };
	*(&Local_327 + 216[06] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_327 + 216[16]) = { -2192.178f, 16.951f, 2608.433f };
	*(&Local_327 + 216[16] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_327 + 216[26]) = { -2208.025f, 19.789f, 2616.235f };
	*(&Local_327 + 216[26] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_327 + 216[36]) = { -2204.946f, 19.652f, 2619.306f };
	*(&Local_327 + 216[36] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_327 + 216[46]) = { -2190.529f, 16.972f, 2603.487f };
	*(&Local_327 + 216[46] + 12) = { 0.0f, 90.0f, 0.0f };
	*(&Local_327 + 216[56]) = { -2187.582f, 17.067f, 2611.432f };
	*(&Local_327 + 216[56] + 12) = { 0.0f, 270.0f, 0.0f };
	*(&Local_327 + 216[66]) = { -2196.893f, 16.573f, 2595.137f };
	*(&Local_327 + 216[66] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_327 + 388[06]) = { -2263.896f, 15.84019f, 2817.863f };
	*(&Local_327 + 388[06] + 12) = { 0.0f, 113.7974f, 0.0f };
	*(&Local_327 + 388[16]) = { -2213.25f, 16.33f, 2634.993f };
	*(&Local_327 + 388[16] + 12) = { 0.0f, 180.6443f, 0.0f };
	*(&Local_327 + 388[26]) = { -2213.25f, 16.33f, 2695.965f };
	*(&Local_327 + 388[26] + 12) = { 0.0f, 180.0f, 0.0f };
	*(&Local_327 + 388[36]) = { -2213.25f, 16.33f, 2708.261f };
	*(&Local_327 + 388[36] + 12) = { 0.0f, 180.0f, 0.0f };
	*(&Local_327 + 388[46]) = { -3700.739f, 9.199f, 3494.81f };
	*(&Local_327 + 388[46] + 12) = { 0.0f, 0.0f, 0.0f };
	*(&Local_327 + 388[56]) = { -2213.25f, 16.33f, 2678.059f };
	*(&Local_327 + 388[56] + 12) = { 0.0f, 180.0f, 0.0f };
	*(&Local_327 + 388[66]) = { 651.8801f, 77.95693f, 1318.641f };
	*(&Local_327 + 388[66] + 12) = { 0.0f, 186.4897f, 0.0f };
	*(&Local_327 + 388[76]) = { 651.8801f, 77.95693f, 1319.3f };
	*(&Local_327 + 388[76] + 12) = { 0.0f, 186.4897f, 0.0f };
	return;
}

vector3 Function_518() //Position: 0x1D919 / 121113
{
	var uVar0;
	
	Function_510(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Intro01_layout");
	Local_4.f_692 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "HorseSpotVolume_set");
	(*&Local_4 + 684)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nHorseSpot", 2, -2161.441f, 16.36596f, 2609.225f, 0.0f, 90.49566f, 0.0f, 8.556637f, 6.447287f, 16.02413f);
	ADD_TO_VOLUME_SET(Local_4.f_692, (*&Local_4 + 684)[0]);
	Local_4.f_716 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "TrainStopVolumes_set");
	(*&Local_4 + 696)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "JakeTrainStop", 2, -2201.793f, 18.57967f, 2661.567f, 0.0f, 146.778f, 0.0f, 19.75f, 14.16018f, 2.228138f);
	ADD_TO_VOLUME_SET(Local_4.f_716, (*&Local_4 + 696)[0]);
	(*&Local_4 + 696)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerStop01", 2, -2203.847f, 15.66608f, 2661.894f, 0.0f, 146.778f, 0.0f, 19.75f, 14.16018f, 14.33333f);
	ADD_TO_VOLUME_SET(Local_4.f_716, (*&Local_4 + 696)[1]);
	(*&Local_4 + 696)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerStop02", 2, -2205.439f, 18.604f, 2667.014f, 0.0f, 146.7781f, 0.0f, 10.0f, 14.16018f, 9.387523f);
	ADD_TO_VOLUME_SET(Local_4.f_716, (*&Local_4 + 696)[2]);
	(*&Local_4 + 696)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "PlayerStop03", 2, -2208.054f, 18.604f, 2679.766f, 0.0f, 146.788f, 0.0f, 0.42f, 14.16018f, 14.8f);
	ADD_TO_VOLUME_SET(Local_4.f_716, (*&Local_4 + 696)[3]);
	Local_4.f_732 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "WaitForJakeVolumes_set");
	(*&Local_4 + 720)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WaitForJake01", 2, -2223.487f, 18.60445f, 2688.345f, 0.0f, 131.8192f, 0.0f, 9.682468f, 14.16018f, 15.66878f);
	ADD_TO_VOLUME_SET(Local_4.f_732, (*&Local_4 + 720)[0]);
	(*&Local_4 + 720)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WaitForJake02", 2, -2217.629f, 18.53156f, 2676.888f, 0.0f, 131.819f, 0.0f, 0.42f, 14.16018f, 8.4f);
	ADD_TO_VOLUME_SET(Local_4.f_732, (*&Local_4 + 720)[1]);
	Local_4.f_756 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "ConversationVolumes_set");
	(*&Local_4 + 736)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Coyote", 2, -2598.479f, 59.89162f, 3243.048f, 0.0f, -29.21338f, 0.0f, 5.0f, 27.72563f, 86.03275f);
	ADD_TO_VOLUME_SET(Local_4.f_756, (*&Local_4 + 736)[0]);
	(*&Local_4 + 736)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "JakeOnHill", 2, -2568.517f, 62.14413f, 3273.919f, 0.0f, 11.11793f, 0.0f, 24.34595f, 23.91672f, 34.17891f);
	ADD_TO_VOLUME_SET(Local_4.f_756, (*&Local_4 + 736)[1]);
	(*&Local_4 + 736)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ShortBanter02", 2, -2743.597f, 23.48523f, 3113.356f, 0.0f, -66.23711f, 0.0f, 44.11405f, 23.21768f, 5.0f);
	ADD_TO_VOLUME_SET(Local_4.f_756, (*&Local_4 + 736)[2]);
	(*&Local_4 + 736)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ShortBanter01", 2, -2476.728f, 19.92163f, 3104.504f, 0.0f, -66.23711f, 0.0f, 44.11405f, 23.21768f, 5.0f);
	ADD_TO_VOLUME_SET(Local_4.f_756, (*&Local_4 + 736)[3]);
	Local_4.f_780 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVols_set");
	(*&Local_4 + 760)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneVolLast", 2, -2620.0f, 71.60936f, 3382.943f, 0.0f, -36.12581f, 0.0f, 41.55433f, 14.44347f, 45.19946f);
	ADD_TO_VOLUME_SET(Local_4.f_780, (*&Local_4 + 760)[0]);
	(*&Local_4 + 760)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneVolLastTrigger", 2, -2645.154f, 69.71942f, 3414.846f, 0.0f, -50.00912f, 0.0f, 20.44689f, 16.77609f, 15.56556f);
	ADD_TO_VOLUME_SET(Local_4.f_780, (*&Local_4 + 760)[1]);
	(*&Local_4 + 760)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneVolLastTriggerFast", 2, -2638.996f, 69.71942f, 3409.516f, 0.0f, -50.00912f, 0.0f, 20.44689f, 14.44347f, 31.23452f);
	ADD_TO_VOLUME_SET(Local_4.f_780, (*&Local_4 + 760)[2]);
	(*&Local_4 + 760)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneVolLastHideHorse", 2, -2645.991f, 67.26273f, 3415.07f, 0.0f, -50.00912f, 0.0f, 20.44689f, 14.44347f, 15.14331f);
	ADD_TO_VOLUME_SET(Local_4.f_780, (*&Local_4 + 760)[3]);
	Local_4.f_796 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "DrunkTriggerVols_set");
	(*&Local_4 + 784)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "DrunkTrigger", 2, -2176.45f, 16.38194f, 2606.884f, 0.0f, 0.0f, 0.0f, 27.25332f, 11.68009f, 23.84996f);
	ADD_TO_VOLUME_SET(Local_4.f_796, (*&Local_4 + 784)[0]);
	(*&Local_4 + 784)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "DrunkWander", 2, -2182.243f, 16.38194f, 2606.884f, 0.0f, 0.0f, 0.0f, 13.66703f, 11.68009f, 16.70909f);
	ADD_TO_VOLUME_SET(Local_4.f_796, (*&Local_4 + 784)[1]);
	Local_4.f_808 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "SaloonDoorway_set");
	(*&Local_4 + 800)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Front", 2, -2172.831f, 17.78759f, 2602.064f, 0.0f, 45.0f, 0.0f, 3.93354f, 3.825849f, 2.520841f);
	ADD_TO_VOLUME_SET(Local_4.f_808, (*&Local_4 + 800)[0]);
	Local_4.f_840 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "MiscVols_set");
	(*&Local_4 + 812)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BehindTheBarVol", 2, -2163.156f, 17.79894f, 2596.748f, 0.0f, 0.0f, 0.0f, 3.252607f, 3.955355f, 12.45832f);
	ADD_TO_VOLUME_SET(Local_4.f_840, (*&Local_4 + 812)[0]);
	(*&Local_4 + 812)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WarnBarVol", 2, -2182.884f, 16.30968f, 2607.419f, 0.0f, 0.0f, 0.0f, 69.72227f, 23.57924f, 60.54882f);
	ADD_TO_VOLUME_SET(Local_4.f_840, (*&Local_4 + 812)[1]);
	(*&Local_4 + 812)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "FailBarVol", 2, -2181.182f, 16.30968f, 2607.419f, 0.0f, 0.0f, 0.0f, 139.5159f, 45.67779f, 117.2954f);
	ADD_TO_VOLUME_SET(Local_4.f_840, (*&Local_4 + 812)[2]);
	(*&Local_4 + 812)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "TrainHowdyVol", 2, -2193.342f, 18.28693f, 2607.193f, 0.0f, 0.0f, 0.0f, 3.113077f, 3.174761f, 11.55778f);
	ADD_TO_VOLUME_SET(Local_4.f_840, (*&Local_4 + 812)[3]);
	(*&Local_4 + 812)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "BarVol", 2, -2165.902f, 16.56468f, 2593.829f, 0.0f, -90.35257f, 0.0f, 17.84109f, 6.196088f, 16.79249f);
	ADD_TO_VOLUME_SET(Local_4.f_840, (*&Local_4 + 812)[4]);
	(*&Local_4 + 812)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nJakeAvoid", 2, -2165.405f, 17.795f, 2602.898f, 0.0f, -90.35257f, 0.0f, 2.274983f, 3.24213f, 2.497485f);
	ADD_TO_VOLUME_SET(Local_4.f_840, (*&Local_4 + 812)[5]);
	Local_4.f_844 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 848)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -2208.0f, 16.5f, 2607.17f, 0.0f, 270.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[0], Local_4.f_844);
	(*&Local_4 + 848)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartMiniCut01", -2172.214f, 16.89265f, 2601.401f, 0.0f, 315.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[1], Local_4.f_844);
	(*&Local_4 + 848)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerGoToMiniCut01", -2170.698f, 16.87441f, 2599.808f, 0.0f, 315.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[2], Local_4.f_844);
	(*&Local_4 + 848)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartMiniCut02", -2166.514f, 16.98164f, 2590.69f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[3], Local_4.f_844);
	(*&Local_4 + 848)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd01", -2168.982f, 16.56472f, 2596.703f, 0.0f, -210.7744f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[4], Local_4.f_844);
	(*&Local_4 + 848)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd01", -2169.528f, 16.78111f, 2598.747f, -1.033538f, -224.6039f, -0.2710724f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[5], Local_4.f_844);
	(*&Local_4 + 848)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerFacePos01", -2197.25f, 16.9986f, 2607.523f, 0.0f, -222.7606f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[6], Local_4.f_844);
	(*&Local_4 + 848)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "WhoreEnd01", -2166.01f, 16.88f, 2596.82f, 0.0f, 371.45f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 848)[7], Local_4.f_844);
	Local_4.f_884 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 888)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -2160f, 16.22081f, 2610.73f, 0.0f, -258.3431f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 888)[0], Local_4.f_884);
	(*&Local_4 + 888)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -2165.369f, 16.21359f, 2610.584f, 0.0f, 100.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 888)[1], Local_4.f_884);
	Local_4.f_900 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 904)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -2611.966f, 71.22f, 3360.083f, 0.0f, 139.4734f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 904)[0], Local_4.f_900);
	(*&Local_4 + 904)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -2610.28f, 71.29f, 3361.24f, 0.0f, 139.701f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 904)[1], Local_4.f_900);
	(*&Local_4 + 904)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "FortMercerGateway", -2639.019f, 67.2146f, 3407.012f, 0.0f, 124.2737f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 904)[2], Local_4.f_900);
	(*&Local_4 + 904)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd03", -2601.644f, 71.77907f, 3357.897f, -1.928587f, 320.2861f, 1.758398f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 904)[3], Local_4.f_900);
	(*&Local_4 + 904)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03Left", -2608.669f, 71.35213f, 3362.751f, 0.0f, 149.0257f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 904)[4], Local_4.f_900);
	Local_4.f_928 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	(*&Local_4 + 932)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerGoToLast", -2644.732f, 67.254f, 3411.034f, 0.0f, 136.5f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 932)[0], Local_4.f_928);
	(*&Local_4 + 932)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartLast", -2648.605f, 67.25536f, 3416.891f, 0.0f, 136.5f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 932)[1], Local_4.f_928);
	(*&Local_4 + 932)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseGotoLast", -2656.0f, 67.26274f, 3397.599f, 0.0f, 41.22108f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 932)[2], Local_4.f_928);
	Local_4.f_948 = CREATE_OBJECTSET_IN_LAYOUT("JakeGoToSet", Local_4, 8, 0);
	(*&Local_4 + 952)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "nJakeStart", -2166.388f, 16.89768f, 2588.769f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 952)[0], Local_4.f_948);
	(*&Local_4 + 952)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "JakeLeaveSaloon", -2173.79f, 16.89265f, 2602.745f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 952)[1], Local_4.f_948);
	(*&Local_4 + 952)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "JakeGoToHorses", -2163.777f, 16.214f, 2608.544f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 952)[2], Local_4.f_948);
	Local_4.f_968 = CREATE_OBJECTSET_IN_LAYOUT("WhoreGoToSet", Local_4, 8, 0);
	(*&Local_4 + 972)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "WhoreWalkAway", -2156.845f, 16.877f, 2589.68f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 972)[0], Local_4.f_968);
	Local_4.f_980 = CREATE_OBJECTSET_IN_LAYOUT("HorseRespotSet", Local_4, 8, 0);
	(*&Local_4 + 984)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "HorseRespot01", -2162.2f, 16.368f, 2608.313f, 0.0f, 354.25f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[0], Local_4.f_980);
	(*&Local_4 + 984)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "HorseRespot02", -2159.768f, 16.35543f, 2608.174f, 0.0f, 24.46354f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[1], Local_4.f_980);
	(*&Local_4 + 984)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "HitchingPost", -2161.084f, 16.32751f, 2606.363f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[2], Local_4.f_980);
	(*&Local_4 + 984)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Hitch01", -2162.05f, 17.11981f, 2606.2f, 0.0f, -1.516f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[3], Local_4.f_980);
	(*&Local_4 + 984)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "Hitch02", -2160.255f, 17.11981f, 2606.2f, 0.0f, -1.516f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 984)[4], Local_4.f_980);
	Local_4.f_1008 = CREATE_OBJECTSET_IN_LAYOUT("JakeReturnPathSet", Local_4, 8, 0);
	(*&Local_4 + 1012)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Path01", -2591.871f, 72.02518f, 3342.656f, 0.0f, 168.399f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1012)[0], Local_4.f_1008);
	(*&Local_4 + 1012)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Path02", -2731.621f, 50.99201f, 3229.624f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1012)[1], Local_4.f_1008);
	(*&Local_4 + 1012)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Path03", -2749.767f, 26.62626f, 3106.26f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1012)[2], Local_4.f_1008);
	Local_4.f_1028 = CREATE_OBJECTSET_IN_LAYOUT("FortMercerSet", Local_4, 8, 0);
	(*&Local_4 + 1032)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "FortMercerCrates", -2653.55f, 67.25705f, 3408.5f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1032)[0], Local_4.f_1028);
	Local_4.f_1040 = CREATE_OBJECTSET_IN_LAYOUT("CoyoteFlagsSet", Local_4, 8, 0);
	(*&Local_4 + 1044)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CoyoteEating03", -2578.369f, 60.39521f, 3252.177f, 0.0f, 234.295f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1044)[0], Local_4.f_1040);
	(*&Local_4 + 1044)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CoyoteEating02", -2578.001f, 60.38816f, 3252.334f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1044)[1], Local_4.f_1040);
	(*&Local_4 + 1044)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CoyoteEating01", -2578.345f, 60.403f, 3252.864f, 0.0f, -36.963f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1044)[2], Local_4.f_1040);
	(*&Local_4 + 1044)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "DeadObj", -2578.32f, 60.3936f, 3252.916f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1044)[3], Local_4.f_1040);
	(*&Local_4 + 1044)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "nBloodPool", -2578.433f, 60.42074f, 3252.238f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1044)[4], Local_4.f_1040);
	Local_4.f_1068 = CREATE_OBJECTSET_IN_LAYOUT("GringoFlagsPianoSet", Local_4, 8, 0);
	(*&Local_4 + 1072)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Piano", -2170.367f, 16.877f, 2589.145f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1072)[0], Local_4.f_1068);
	Local_4.f_1080 = CREATE_OBJECTSET_IN_LAYOUT("GringoFlagsDrinkersSet", Local_4, 8, 0);
	(*&Local_4 + 1084)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Chair01", -2168.029f, 16.95497f, 2593.55f, 0.0f, 250.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1084)[0], Local_4.f_1080);
	(*&Local_4 + 1084)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "Chair02", -2167.368f, 16.9353f, 2592.859f, 0.0f, 65.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1084)[1], Local_4.f_1080);
	(*&Local_4 + 1084)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "Chair03", -2172.095f, 16.8792f, 2595.644f, 0.0f, 40.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1084)[2], Local_4.f_1080);
	(*&Local_4 + 1084)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "Chair04", -2165.326f, 16.877f, 2598.138f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1084)[3], Local_4.f_1080);
	(*&Local_4 + 1084)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "Chair05", -2165.326f, 16.877f, 2596.007f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1084)[4], Local_4.f_1080);
	(*&Local_4 + 1084)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "Chair06", -2166.66f, 16.877f, 2600.631f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1084)[5], Local_4.f_1080);
	(*&Local_4 + 1084)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "Chair07", -2168.328f, 16.877f, 2600.731f, 0.0f, 270.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1084)[6], Local_4.f_1080);
	Local_4.f_1116 = CREATE_OBJECTSET_IN_LAYOUT("GringoFlagsJakesWhoreSet", Local_4, 8, 0);
	(*&Local_4 + 1120)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Bed", -2156.453f, 16.893f, 2590.499f, 0.0f, 270.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1120)[0], Local_4.f_1116);
	Local_4.f_1128 = CREATE_OBJECTSET_IN_LAYOUT("GringoFlagsStairsWhoreSet", Local_4, 8, 0);
	(*&Local_4 + 1132)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Banister", -2171.945f, 17.76849f, 2588.207f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1132)[0], Local_4.f_1128);
	Local_4.f_1140 = CREATE_OBJECTSET_IN_LAYOUT("GringoFlagsOnThePhoneSet", Local_4, 8, 0);
	(*&Local_4 + 1144)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Phone", -2173.401f, 18.036f, 2598.594f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1144)[0], Local_4.f_1140);
	Local_4.f_1152 = CREATE_OBJECTSET_IN_LAYOUT("DebugSkipsSet", Local_4, 8, 0);
	(*&Local_4 + 1156)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "JakeFortMercer", -2709.759f, 53.24397f, 3251.42f, 0.0f, 290.7965f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[0], Local_4.f_1152);
	(*&Local_4 + 1156)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerFortMercer", -2717.637f, 52.61207f, 3248.181f, 0.0f, 300.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[1], Local_4.f_1152);
	Local_4.f_1168 = CREATE_OBJECTSET_IN_LAYOUT("BehindTheBarFlagsSet", Local_4, 8, 0);
	(*&Local_4 + 1172)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "Cooking", -2161.636f, 16.875f, 2601.622f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1172)[0], Local_4.f_1168);
	(*&Local_4 + 1172)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "BrowseTable", -2162.418f, 16.875f, 2599.709f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1172)[1], Local_4.f_1168);
	(*&Local_4 + 1172)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "UseShelf", -2162.571f, 16.88017f, 2596.271f, 0.0f, -89.02268f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1172)[2], Local_4.f_1168);
	(*&Local_4 + 1172)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "StandBartend", -2163.639f, 16.875f, 2595.229f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1172)[3], Local_4.f_1168);
	Local_4.f_1192 = CREATE_OBJECTSET_IN_LAYOUT("DrunkFlagsSet", Local_4, 8, 0);
	(*&Local_4 + 1196)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "TeleportDrunk", -2171.131f, 16.85605f, 2599.614f, 0.0f, 136.1084f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1196)[0], Local_4.f_1192);
	(*&Local_4 + 1196)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "TeleportDrunkCS", -2173.948f, 16.89265f, 2603.088f, 0.0f, 128.6331f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1196)[1], Local_4.f_1192);
	Local_4.f_1208 = CREATE_OBJECTSET_IN_LAYOUT("CrowFlagsSet", Local_4, 8, 0);
	(*&Local_4 + 1212)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowLand01", -2647.647f, 75.50234f, 3419.166f, 0.0f, -52.15945f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[0], Local_4.f_1208);
	(*&Local_4 + 1212)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowLand02", -2648.627f, 76.46051f, 3417.97f, 0.0f, 82.95956f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[1], Local_4.f_1208);
	(*&Local_4 + 1212)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowLand03", -2650.297f, 76.41579f, 3415.985f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[2], Local_4.f_1208);
	(*&Local_4 + 1212)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowLand04", -2649.669f, 76.49114f, 3416.726f, 0.0f, -82.33784f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[3], Local_4.f_1208);
	(*&Local_4 + 1212)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowSoar01", -2653.268f, 83.27417f, 3423.819f, 0.0f, -82.33784f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[4], Local_4.f_1208);
	(*&Local_4 + 1212)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowSoar02", -2649.057f, 81.94878f, 3417.406f, 0.0f, -82.33784f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[5], Local_4.f_1208);
	(*&Local_4 + 1212)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowSoar03", -2655.75f, 81.05624f, 3411.925f, 0.0f, -82.33784f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[6], Local_4.f_1208);
	(*&Local_4 + 1212)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CrowSoar04", -2655.102f, 83.48977f, 3418.762f, 0.0f, -82.33784f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1212)[7], Local_4.f_1208);
	Local_4.f_1248 = CREATE_OBJECTSET_IN_LAYOUT("MiscFlagsSet", Local_4, 8, 0);
	(*&Local_4 + 1252)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "TendCounterLocate", -2193.059f, 18.02892f, 2601.667f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1252)[0], Local_4.f_1248);
	(*&Local_4 + 1252)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "SaloonDoorLocate01", -2172.16f, 16.87441f, 2600.29f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1252)[1], Local_4.f_1248);
	(*&Local_4 + 1252)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "SaloonDoorLocate02", -2170.931f, 16.87441f, 2601.335f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1252)[2], Local_4.f_1248);
	Local_4.f_1268 = CREATE_GRINGO_IN_LAYOUT(Local_4, "JakeFlirting", "jake_flirting", -2167.2f, 16.8744f, 2588.364f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_4.f_1268), 0);
	Local_4.f_1272 = CREATE_GRINGO_IN_LAYOUT(Local_4, "OnStairs", "mex_flirt_stand_link", -2172.811f, 17.78f, 2585.968f, 0.0f, 180.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_4.f_1272), 0);
	Local_4.f_1276 = CREATE_GRINGO_IN_LAYOUT(Local_4, "DogSleeping", "dog_sleeping", -2201.296f, 16.9f, 2605.847f, 0.0f, 0.0f, 0.0f);
	Local_4.f_1280 = CREATE_GRINGO_IN_LAYOUT(Local_4, "nIntro01_v", "nIntro01_v", -2612.64f, 71.91824f, 3385.733f, 0.0f, 73.73223f, 0.0f);
}

vector3 E)Ò>ÅÒAfÚ¬E*N4ÅAd§E*ÏÅ·AfP°E+\4ÅXºAdèçE,1ØÅºÿAdèäE,ø ÅÜ.AdèãE-½ÅâAdèùE.Åâ>AdèùE/?ÌÅâBAãÑE0yÂÅäSAwE1Åì(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64) //Position: 0x1F6DF / 128735
{
	int iVar130;
	
	Unknown_Function();
	return StackVal, StackVal, (StackVal - (StackVal * 28860 * 12757)) * 13116;
	Unknown_Function();
	return;
	(((StackVal - (StackVal * (StackVal * StackVal) - 4543 * 13499)) * 23776 * 13815))->f_65 = StackVal;
	Unknown_Function();
	straddi("SoA`×E7‚³Å©GA^[óE7°rÅ†FA\\ààE7ì@Å„KA\\ààE8#ÅI·A\\ààE8gŽÅÌA\\ààE8™Å`1A\\ààE8ü¥Å¼ŒA\\ààE9P«Åò,A]P°E9¶…ÅHŽAxÏáE;{ÝÅ’AŠÀE=9¨ÅðäAŒÒE>„Å†ëAŽåsE?ÉÅú$A.E@‘ëÅ|1A–³ EA%fÅ,QAš‚EA«×ÅÎHA", &uParam45, 181);
}

var ¿Å ØuBMEOW~Å!vBSEPN¯Å"BãBWÈEQ9\Å#ÍBAEQüÇ,ä:D;oJakePathToHitchingPost p   `ÅÊÀA$(E"(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, int iParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166) //Position: 0x1FB02 / 129794
{
	float fVar17530;
	
	PatchTrap3();
	PatchTrap8();
	Unknown_Function();
	itos(4294935522, Stack.Peek(), 69);
	Unknown_Function();
	return 6 != 4294935375 * 8964;
	Unknown_Function();
	return StackVal, StackVal, -Vector(StackVal, StackVal, -IntToFloat(-StackVal < Vector(StackVal, StackVal, StackVal) - Vector(4294936029, 3305627058, StackVal) * 8880 < 4294935664 * 8902)) >= 4294935443 * 8944;
	Local_4.f_1288 = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, -(StackVal && (StackVal - &fVar17530)), (iParam42 * (4294934987 + &Global_17699)));
	return;
}

bool Function_521() //Position: 0x1FBC9 / 129993
{
	int iVar0;
	
	iVar0 = 1;
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_523(0))
		{
			iVar0 = 0;
		}
		if (!Function_522())
		{
			iVar0 = 0;
		}
		if (!Function_336(&iLocal_597))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool Function_522() //Position: 0x1FBFD / 130045
{
	Function_341(&Local_327 + 4, 87, 2, 0);
	Function_341(&Local_327 + 4, 79, 2, 0);
	Function_341(&Local_327 + 4, 195, 2, 0);
	Function_341(&Local_327 + 4, 308, 2, 0);
	Function_341(&Local_327 + 4, 705, 2, 0);
	Function_341(&Local_327 + 4, 714, 2, 0);
	Function_341(&Local_327 + 4, 95, 2, 0);
	if (Function_336(&Local_327 + 4))
	{
		return 1;
	}
	return 0;
}

bool Function_523(bool bParam0) //Position: 0x1FC6F / 130159
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

bool Function_524() //Position: 0x1FC9D / 130205
{
	int iVar0;
	
	iVar0 = 1;
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_532())
		{
			iVar0 = 0;
		}
		if (!Function_336(&iLocal_518))
		{
			iVar0 = 0;
		}
		else if (iLocal_943 == 4294967295)
		{
			Function_496(StackVal, StackVal, StackVal, *(&Local_327 + 388[16]));
			iVar0 = 0;
		}
		else if (!IS_OBJECT_VALID(bLocal_928))
		{
			iVar0 = 0;
		}
		if (!Global_3365)
		{
			if (!iLocal_941)
			{
				if (!IS_ACTOR_VALID(bLocal_905))
				{
					bLocal_905 = Function_525(1, 1, 0, 0, 0, 0, 1, 0);
					iVar0 = 0;
					iLocal_941 = 0;
				}
				else
				{
					DESTROY_ACTOR(bLocal_905);
					iLocal_941 = 1;
				}
			}
		}
	}
	return iVar0;
}

bool Function_525(int iParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x1FD38 / 130360
{
	int iVar0;
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
	iVar0 = (StackVal + 976);
	if (Global_3381)
	{
		Function_531(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_530())
		{
			return "";
		}
	}
	if (!Function_528())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_206();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_227(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_227(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_227(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_227(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_527(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_527(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_43() || NET_IS_IN_SESSION())
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
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_56(), iVar0, fParam2, fParam3, fParam4, 0.0f, fParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, 1, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_56(), 993, fParam2, fParam3, fParam4, 0.0f, fParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, 1, 1092616192);
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
				vVar10 = { fParam2, fParam3, fParam4 };
				if (!Function_76(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (iParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_56(), iVar0, fParam2, fParam3, fParam4, 0.0f, fParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, 1, 1092616192);
		}
		else
		{
			if (iVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (iVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_56(), 993, fParam2, fParam3, fParam4, 0.0f, fParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, 1, 1092616192);
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
		Function_526(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_43() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_526(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x20090 / 131216
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, uParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, uParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, uParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, uParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, uParam4);
	}
}

var Function_527(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x200CD / 131277
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

bool Function_528() //Position: 0x20168 / 131432
{
	if (Function_529() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_529() //Position: 0x2017E / 131454
{
	return Global_12976.f_152;
}

bool Function_530() //Position: 0x20189 / 131465
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_531(var uParam0, bool bParam1, bool bParam2) //Position: 0x201A9 / 131497
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_79(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_79(&Global_12976 + 36 + 20, 64);
	}
	return;
}

bool Function_532() //Position: 0x201D6 / 131542
{
	Function_341(&Local_4 + 4, 600, 2, 0);
	Function_341(&Local_4 + 4, 976, 2, 0);
	Function_341(&Local_4 + 4, 981, 2, 0);
	Function_341(&Local_4 + 4, 697, 2, 0);
	Function_341(&Local_4 + 4, 180, 2, 0);
	Function_341(&Local_4 + 4, 235, 2, 0);
	Function_341(&Local_4 + 4, 206, 2, 0);
	Function_341(&Local_4 + 4, 36, 2, 0);
	Function_341(&Local_4 + 4, 311, 2, 0);
	Function_341(&Local_4 + 4, 204, 2, 0);
	Function_341(&Local_4 + 4, 34, 2, 0);
	Function_341(&Local_4 + 4, 140, 2, 0);
	Function_341(&Local_4 + 4, 65, 2, 0);
	Function_341(&Local_4 + 4, 60, 2, 0);
	Function_341(&Local_4 + 4, 236, 2, 0);
	Function_341(&Local_4 + 4, 201, 2, 0);
	Function_341(&Local_4 + 4, Global_7189[23], 2, 0);
	Function_341(&Local_4 + 4, Global_7189[83], 2, 0);
	Function_515(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/jake_flirting", 1, 0);
	Function_515(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/mex_flirt_stand_link", 1, 0);
	Function_515(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/dog_sleeping", 1, 0);
	Function_515(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/intro01_v", 1, 0);
	if (Function_336(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

void Function_533(int iParam0, bool bParam1) //Position: 0x203D9 / 132057
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = GET_PLAYER_ACTOR(iParam0);
	if (IS_ACTOR_VALID(bVar1))
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bVar1);
		iVar0 = 0;
		while (iVar0 < (7 - 1))
		{
			DELETE_WEAPON_FROM_ACTOR(bVar1, GET_WEAPON_EQUIPPED(bVar1, iVar0));
			iVar0++;
		}
		PRINTSTRING("REMOVE_WEAPONS_FROM_PLAYER: Took away player weapons");
		PRINTNL();
		if (bParam1)
		{
			DELETE_ALL_INVENTORY_FROM_ACTOR(bVar1);
			PRINTSTRING("REMOVE_WEAPONS_FROM_PLAYER: Took away player inventory");
			PRINTNL();
		}
	}
	else
	{
		PRINTSTRING("REMOVE_WEAPONS_FROM_PLAYER: Player actor not valid!");
	}
	return;
}

void Function_534(int iParam0, bool bParam1) //Position: 0x204D8 / 132312
{
	switch (iParam0)
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

int Function_535(int iParam0, bool bParam1) //Position: 0x2064B / 132683
{
	if (iParam0 >= 4294967295 || iParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_209(iParam0), Function_52()) >= 0)
		{
			DELETE_ITEM(Function_209(iParam0), Function_52(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_209(iParam0), Function_52(), 1);
	return 1;
}

void Function_536() //Position: 0x20692 / 132754
{
	Function_515(&iLocal_518, "jake_flirting", 5, 0);
	Function_515(&iLocal_518, "custom/jake_flirting", 8, 0);
	Function_515(&iLocal_518, "one_handed_wave", 5, 0);
	Function_515(&iLocal_518, "custom/one_handed_wave", 8, 0);
	Function_515(&iLocal_518, "Intro01_drunk_jake_falls", 5, 0);
	Function_515(&iLocal_518, "custom/Intro01_drunk_jake_falls", 8, 0);
	Function_515(&iLocal_518, "dead_ground_deer", 5, 0);
	Function_515(&iLocal_518, "intro01", 10, 0);
	Function_515(&iLocal_518, "$/content/scripting/gringo/simplegringo/coyote_eating", 1, 0);
	Function_515(&iLocal_518, "$/content/scripting/gringo/simplegringo/horseHitchTurnLeft", 1, 0);
	Function_341(&iLocal_518, 1118, 2, 0);
	Function_341(&iLocal_518, 1166, 2, 1);
	Function_341(&iLocal_518, 1167, 2, 1);
	Function_341(&iLocal_518, 1156, 2, 1);
	Function_341(&iLocal_518, 1165, 2, 1);
	Function_341(&iLocal_518, 1157, 2, 1);
	Function_341(&iLocal_518, 1158, 2, 1);
	Function_341(&iLocal_518, 1162, 2, 1);
	Function_341(&iLocal_597, 12, 2, 0);
	Function_341(&iLocal_604, 1166, 2, 1);
	Function_341(&iLocal_604, 1167, 2, 1);
	Function_341(&iLocal_604, 1156, 2, 1);
	Function_341(&iLocal_604, 1165, 2, 1);
	Function_341(&iLocal_604, 1157, 2, 1);
	Function_341(&iLocal_604, 1158, 2, 1);
	Function_341(&iLocal_604, 1162, 2, 1);
	return;
}

void Function_537(int iParam0, bool bParam1) //Position: 0x208D6 / 133334
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_543(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_295(iParam0))
	{
		Global_34165.f_56 = 0;
		Global_34165.f_48 = 99;
		Function_98();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_30842[2] = 1;
	cVar0 = Function_16(*iParam0);
	Var1 = { StackVal, StackVal, StackVal, *(&Global_3422[cVar040] + 12) };
	if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_25(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_295(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_220();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_252();
	Function_284();
	Function_245("");
	Function_542(0);
	Function_541();
	Function_213();
	Function_212();
	ENABLE_JOURNAL_REPLAY(0);
	Function_540();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_525(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_314(0, 0x40400000);
	}
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
	Function_539(13);
	Function_539(14);
	Function_539(25);
	Function_539(24);
	Function_539(12);
	Function_539(27);
	Function_539(26);
	Function_539(15);
	Function_538();
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
	Var1 = { StackVal, StackVal, StackVal, Function_14(cVar0) };
	SET_MISSION_INFO(UI_GET_STRING(&Var1), &cVar5);
	return;
}

void Function_538() //Position: 0x20D0E / 134414
{
	int iVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		return;
	}
	iVar0 = CREATE_OBJECT_ITERATOR(Global_6290);
	ITERATE_IN_LAYOUT(iVar0, Global_6290);
	bVar1 = START_OBJECT_ITERATOR(iVar0);
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
		bVar1 = OBJECT_ITERATOR_NEXT(iVar0);
	}
	DESTROY_ITERATOR(iVar0);
	return;
}

void Function_539(int iParam0) //Position: 0x20D82 / 134530
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_540() //Position: 0x20DA2 / 134562
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

void Function_541() //Position: 0x20DDF / 134623
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_542(int iParam0) //Position: 0x20DF3 / 134643
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_216())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_543(int iParam0, int iParam1) //Position: 0x20E28 / 134696
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
			Function_544(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_544(int iParam0) //Position: 0x20EAA / 134826
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

void Function_545() //Position: 0x20EF8 / 134904
{
	return;
}

bool Function_546(int iParam0) //Position: 0x20EFE / 134910
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
			Function_547(iParam0, 1);
			return 1;
		}
	}
	Function_547(iParam0, 0);
	return 0;
}

void Function_547(int iParam0, bool bParam1) //Position: 0x20F85 / 135045
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

bool Function_548(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4) //Position: 0x20FA9 / 135081
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
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
	if (!IS_ITERATOR_VALID(iParam3))
	{
		Function_547(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_567(&iParam3);
				ITERATE_IN_EVENT_TRAP(iParam3, (*uParam1)[iVar03]);
				bVar1 = START_OBJECT_ITERATOR(iParam3);
				while (IS_OBJECT_VALID(bVar1))
				{
					uVar2 = GET_EVENT_FROM_OBJECT(bVar1);
					if (IS_EVENT_VALID(uVar2))
					{
						if (StackVal && (StackVal && StackVal == 5 == 91) == 110)
						{
							bVar4 = GET_EVENT_TARGET_AS_OBJECT(uVar2);
							if (IS_OBJECT_VALID(bVar4))
							{
								bVar3 = GET_ACTOR_FROM_OBJECT(bVar4);
							}
						}
						else
						{
							uVar5 = GET_EVENT_TARGET_AS_PHYSINST(uVar2);
							if (IS_PHYSINST_VALID(uVar5))
							{
								bVar6 = GET_OBJECT_FROM_PHYSINST(uVar5);
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
								bVar8 = GET_EVENT_PERPETRATOR(uVar2);
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
								bVar11 = GET_EVENT_PERPETRATOR(uVar2);
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
								bVar14 = GET_EVENT_PERPETRATOR(uVar2);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_566(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_566(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_552(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_3(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_547(iParam2, 0);
														return 0;
													}
													if (Function_3(bVar17, 2))
													{
														Function_551(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_550(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_3(bVar17, 4))
													{
														Function_551(&bVar17);
														strcpy(&Var18, "", 64);
														Function_549(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_245(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_550(StackVal, iParam2, bVar17);
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
						bVar1 = OBJECT_ITERATOR_NEXT(iParam3);
					}
				}
				EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
				EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
			}
		}
		iVar0++;
	}
	Function_547(iParam2, 0);
	return 0;
}

void Function_549(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x21342 / 136002
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

void Function_550(var uParam0, int iParam1, bool bParam2) //Position: 0x2142D / 136237
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
			Function_39(&bParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_39(&bParam2, 2);
			break;
	}
	Function_39(&bParam2, 1);
	uParam0->f_16 = bParam2;
	return;
}

void Function_551(bool bParam0) //Position: 0x214A3 / 136355
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_39(&iVar0, 1);
	Function_39(&iVar0, 2);
	Function_39(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_552(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x214C5 / 136389
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
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
			return Function_563(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_556(iParam0, uParam1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000019:
			uVar3 = GET_SQUAD_FROM_OBJECT(*iParam0);
			if (!SQUAD_IS_VALID(uVar3))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= SQUAD_GET_SIZE(uVar3))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(uVar3, iVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					bVar2 = Function_563(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_553(iParam0, bVar2);
					}
				}
				iVar0++;
			}
			break;
		
		case 0x00000002:
			iVar4 = GET_OBJECTSET_FROM_OBJECT(*iParam0);
			if (!IS_OBJECTSET_VALID(iVar4))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= GET_OBJECTSET_SIZE(iVar4))
			{
				bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, iVar4);
				if (IS_OBJECT_VALID(bVar5))
				{
					bVar1 = GET_ACTOR_FROM_OBJECT(bVar5);
					if (IS_ACTOR_VALID(bVar1))
					{
						bVar2 = Function_563(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_553(iParam0, bVar2);
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

var Function_553(int iParam0, bool bParam1) //Position: 0x2160F / 136719
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return bParam1;
	}
	if (Function_3(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(*iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHuman");
				bParam1 = Function_555(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_554(16);
			}
		}
	}
	else if (Function_3(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(*iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(*iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(*iParam0, "MFT_LimitHorse");
				bParam1 = Function_555(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_554(256);
			}
		}
	}
	return bParam1;
}

bool Function_554(int iParam0) //Position: 0x21742 / 137026
{
	return 2 | iParam0;
}

int Function_555(int iParam0) //Position: 0x2174C / 137036
{
	return 4 | iParam0;
}

int Function_556(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x21756 / 137046
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
				iParam3 = Function_562(iParam0, iParam1, bParam4);
				if (Function_3(iParam3, 4))
				{
					Function_79(&iParam3, 2);
					Function_39(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_554(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_557(iParam0, iParam1, 0, bParam4);
				if (Function_3(iParam3, 4))
				{
					Function_79(&iParam3, 2);
					Function_39(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_554(16);
		}
	}
	return 0;
}

int Function_557(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x21808 / 137224
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_561(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_560(iVar0, 3, 1, bParam3))
			{
				if (!Function_566(iParam0, 8, 1))
				{
					return Function_559(64, 1024, bParam2);
				}
			}
			return Function_558(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_560(iVar0, 2, 1, bParam3))
			{
				if (!Function_566(iParam0, 32, 1))
				{
					return Function_559(64, 1024, bParam2);
				}
			}
			return Function_558(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_560(iVar0, 1, 1, bParam3))
			{
				if (!Function_566(iParam0, 64, 1))
				{
					return Function_559(64, 1024, bParam2);
				}
			}
			return Function_558(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_560(iVar0, 3, 1, bParam3))
			{
				if (!Function_566(iParam0, 128, 1))
				{
					return Function_559(64, 1024, bParam2);
				}
			}
			return Function_558(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_560(iVar0, 1, 1, bParam3))
			{
				if (!Function_566(iParam0, 1024, 1))
				{
					return Function_559(64, 1024, bParam2);
				}
			}
			return Function_558(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_560(iVar0, 1, 1, bParam3))
			{
				if (!Function_566(iParam0, 1024, 1))
				{
					return Function_559(64, 1024, bParam2);
				}
			}
			return Function_558(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_558(int iParam0, int iParam1, bool bParam2) //Position: 0x219C2 / 137666
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_559(int iParam0, int iParam1, bool bParam2) //Position: 0x219D7 / 137687
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_560(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x219EC / 137708
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_561(int iParam0) //Position: 0x21A09 / 137737
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

int Function_562(var uParam0, int iParam1, bool bParam2) //Position: 0x21A78 / 137848
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_561(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_560(iVar0, 3, 1, bParam2))
			{
				if (!Function_566(uParam0, 8, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000009:
			if (Function_560(iVar0, 3, 1, bParam2))
			{
				if (!Function_566(uParam0, 8, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x0000006E:
			if (Function_560(iVar0, 2, 1, bParam2))
			{
				if (!Function_566(uParam0, 16, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x0000005B:
			if (Function_560(iVar0, 2, 1, bParam2))
			{
				if (!Function_566(uParam0, 32, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000031:
			if (Function_560(iVar0, 1, 1, bParam2))
			{
				if (!Function_566(uParam0, 64, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000007:
			if (Function_560(iVar0, 3, 1, bParam2))
			{
				if (!Function_566(uParam0, 128, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000008:
			if (Function_560(iVar0, 2, 1, bParam2))
			{
				if (!Function_566(uParam0, 256, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000014:
			if (Function_560(iVar0, 1, 1, bParam2))
			{
				if (!Function_566(uParam0, 512, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000018:
			if (Function_560(iVar0, 1, 1, bParam2))
			{
				if (!Function_566(uParam0, 512, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000057:
			if (Function_560(iVar0, 1, 1, bParam2))
			{
				if (!Function_566(uParam0, 1024, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000058:
			if (Function_560(iVar0, 1, 1, bParam2))
			{
				if (!Function_566(uParam0, 1024, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_563(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x21C93 / 138387
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
						return Function_562(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_566(iParam0, 2, 1))
					{
						return Function_555(8);
					}
					return Function_554(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_566(iParam0, 4, 1))
					{
						return Function_555(16);
					}
					return Function_554(16);
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
							return Function_557(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_566(iParam0, 2, 1))
						{
							return Function_555(128);
						}
						return Function_554(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_566(iParam0, 4, 1))
						{
							return Function_555(256);
						}
						return Function_554(256);
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
						return Function_557(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_566(iParam0, 2, 1))
					{
						return Function_555(8);
					}
					return Function_554(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_566(iParam0, 4, 1))
					{
						return Function_555(16);
					}
					return Function_554(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_565(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, 0) != Global_34573)
				{
					if (!Function_566(iParam0, 2, 1))
					{
						return Function_555(8);
					}
					return Function_554(8);
				}
				if (!Function_566(iParam0, 4, 1))
				{
					return Function_555(16);
				}
				return Function_554(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_557(iParam0, uParam1, 1, bParam5);
							if (Function_3(iParam4, 4))
							{
								Function_79(&iParam4, 2);
								Function_39(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_564(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_554(128);
							}
							if (!Function_566(iParam0, 2, 1))
							{
								return Function_555(8);
							}
							return Function_554(8);
						}
						if (iParam4 == 2)
						{
							if (Function_564(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_554(256);
							}
							if (!Function_566(iParam0, 4, 1))
							{
								return Function_555(16);
							}
							return Function_554(16);
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

bool Function_564(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x21F52 / 139090
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

int Function_565(int iParam0, var uParam1, bool bParam2) //Position: 0x2200B / 139275
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_561(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_560(iVar0, 2, 1, bParam2))
			{
				if (!Function_566(iParam0, 16, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x0000005B:
			if (Function_560(iVar0, 2, 1, bParam2))
			{
				if (!Function_566(iParam0, 32, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000057:
			if (Function_560(iVar0, 1, 1, bParam2))
			{
				if (!Function_566(iParam0, 1024, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		case 0x00000058:
			if (Function_560(iVar0, 1, 1, bParam2))
			{
				if (!Function_566(iParam0, 1024, 1))
				{
					return Function_555(64);
				}
			}
			return Function_554(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_566(int iParam0, bool bParam1, bool bParam2) //Position: 0x2211F / 139551
{
	if (bParam2)
	{
		if (!Function_3(iParam0->f_40, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_3(iParam0->f_40, bParam1);
}

int Function_567(int iParam0) //Position: 0x22147 / 139591
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_56());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_56());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_568() //Position: 0x22178 / 139640
{
	Local_4.f_560 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "TrainEngiGroup"));
	(*&Local_4 + 548)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "nTrainEngi", 201, -2165.607f, 16.90563f, 2588.965f, 0.0f, 180.0f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 548)[02], Local_4.f_560);
	SET_ACTOR_FACTION((*&Local_4 + 548)[02], 20);
	TASK_STAND_STILL((*&Local_4 + 548)[02], -1.0f, 0, 0);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 548)[02], 2);
	return;
}

bool Function_569(int iParam0) //Position: 0x22204 / 139780
{
	var uVar0;
	
	Function_510(3, 2);
	uVar0 = uVar0;
	Function_515(&Local_473 + 4, "$/content/scripting/gringo/simplegringo/train_engineer", 1, 0);
	if (!Function_336(&Local_473 + 4))
	{
		return 0;
	}
	Local_473 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_56()));
	Local_473.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_473, "TrainCarSteamer_pop", 2, 0.0f, 2.07893f, 4.06201f, 0.0f, 0.0f, 0.0f, 1.751237f, 1.956251f, 2.196033f);
	Local_473.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_473, "v_collision", 2, 0.0f, 0.7040083f, -4.30831f, 0.0f, 0.0f, 0.0f, 2.061226f, 1.0f, 1.432657f);
	Local_473.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_473, "v_body", 3, 0.0f, 2.058589f, -0.6215568f, 90.0f, 0.0f, 0.0f, 0.8470065f, 3.11252f, 0.8470065f);
	*(&Local_473 + 32) = { 0.0f, 2.809686f, -0.540985f };
	*(&Local_473 + 32 + 12) = { 0.0f, 0.0f, 0.0f };
	Function_507(iParam0, &Local_473 + 32);
	Local_473.f_56 = CREATE_POINT_IN_LAYOUT(Local_473, "f_explodeCenter", 0.0f, 2.809686f, -0.540985f, 0.0f, 0.0f, 0.0f);
	*(&Local_473 + 60) = { 0.9049232f, 3.265046f, -2.436195f };
	*(&Local_473 + 60 + 12) = { 0.0f, 0.0f, 0.0f };
	Function_507(iParam0, &Local_473 + 60);
	Local_473.f_84 = CREATE_POINT_IN_LAYOUT(Local_473, "f_frontcamerapos", 0.9049232f, 3.265046f, -2.436195f, 0.0f, 0.0f, 0.0f);
	*(&Local_473 + 88) = { 0.0f, 0.323201f, -9.766208f };
	*(&Local_473 + 88 + 12) = { 0.0f, 0.0f, 0.0f };
	Function_507(iParam0, &Local_473 + 88);
	*(&Local_473 + 112) = { -1.593886f, 3.654323f, -0.705147f };
	*(&Local_473 + 112 + 12) = { 0.0f, 0.0f, 0.0f };
	Function_507(iParam0, &Local_473 + 112);
	Local_473.f_136 = CREATE_POINT_IN_LAYOUT(Local_473, "f_frontcamerapos1", -1.593886f, 3.654323f, -0.705147f, 0.0f, 0.0f, 0.0f);
	Local_473.f_140 = CREATE_GRINGO_IN_LAYOUT(Local_473, "train_engineer", "train_engineer", -0.374f, 1.143f, 3.992f, 0.0f, 0.0f, 0.0f);
	Function_506(Local_473, iParam0);
	return 1;
}

void Function_570() //Position: 0x22495 / 140437
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_290(&uLocal_889))
	{
		Function_384(&uLocal_889);
	}
	if (Function_288(&uLocal_889) < 1.0f)
	{
		if (bLocal_739 != 0 && iLocal_1183 > 2)
		{
			bVar0 = Function_408(Global_30640[0], "narmadillo", "saloon01", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				if (!DECOR_CHECK_EXIST(bVar0, "intro01locked"))
				{
					if (IS_DOOR_OPENED(bVar0))
					{
						CLOSE_DOOR_FAST(bVar0);
					}
					if (!IS_DOOR_LOCKED(bVar0))
					{
						Function_128(bVar0, 1);
						DECOR_SET_BOOL(bVar0, "intro01locked", 1);
					}
				}
				else if (!IS_DOOR_LOCKED(bVar0))
				{
					DECOR_REMOVE(bVar0, "intro01locked");
				}
			}
			bVar0 = Function_408(Global_30640[0], "narmadillo", "saloon01", 3);
			if (IS_OBJECT_VALID(bVar0))
			{
				if (!DECOR_CHECK_EXIST(bVar0, "intro01locked"))
				{
					if (IS_DOOR_OPENED(bVar0))
					{
						CLOSE_DOOR_FAST(bVar0);
					}
					if (!IS_DOOR_LOCKED(bVar0))
					{
						Function_128(bVar0, 1);
						DECOR_SET_BOOL(bVar0, "intro01locked", 1);
					}
				}
				else if (!IS_DOOR_LOCKED(bVar0))
				{
					DECOR_REMOVE(bVar0, "intro01locked");
				}
			}
			bVar0 = Function_408(Global_30640[0], "narmadillo", "saloon01", 4);
			if (IS_OBJECT_VALID(bVar0))
			{
				if (!DECOR_CHECK_EXIST(bVar0, "intro01locked"))
				{
					if (IS_DOOR_OPENED(bVar0))
					{
						CLOSE_DOOR_FAST(bVar0);
					}
					if (!IS_DOOR_LOCKED(bVar0))
					{
						Function_128(bVar0, 1);
						DECOR_SET_BOOL(bVar0, "intro01locked", 1);
					}
				}
				else if (!IS_DOOR_LOCKED(bVar0))
				{
					DECOR_REMOVE(bVar0, "intro01locked");
				}
			}
			bVar0 = Function_408(Global_30640[0], "narmadillo", "saloon01", 5);
			if (IS_OBJECT_VALID(bVar0))
			{
				if (!DECOR_CHECK_EXIST(bVar0, "intro01locked"))
				{
					if (IS_DOOR_OPENED(bVar0))
					{
						CLOSE_DOOR_FAST(bVar0);
					}
					if (!IS_DOOR_LOCKED(bVar0))
					{
						Function_128(bVar0, 1);
						DECOR_SET_BOOL(bVar0, "intro01locked", 1);
					}
				}
				else if (!IS_DOOR_LOCKED(bVar0))
				{
					DECOR_REMOVE(bVar0, "intro01locked");
				}
			}
		}
		else if (IS_ACTOR_VALID(bLocal_904))
		{
			if (!IS_ACTOR_IN_VOLUME(bLocal_904, (*&Local_4 + 812)[4]))
			{
				bVar1 = Function_408(Global_30640[0], "narmadillo", "saloon01", 1);
				if (IS_OBJECT_VALID(bVar1))
				{
					if (DECOR_CHECK_EXIST(bVar1, "intro01locked"))
					{
						if (IS_DOOR_LOCKED(bVar1))
						{
							Function_162(bVar1, 0);
						}
						DECOR_REMOVE(bVar1, "intro01locked");
					}
				}
				bVar1 = Function_408(Global_30640[0], "narmadillo", "saloon01", 3);
				if (IS_OBJECT_VALID(bVar1))
				{
					if (DECOR_CHECK_EXIST(bVar1, "intro01locked"))
					{
						if (IS_DOOR_LOCKED(bVar1))
						{
							Function_162(bVar1, 0);
						}
						DECOR_REMOVE(bVar1, "intro01locked");
					}
				}
				bVar1 = Function_408(Global_30640[0], "narmadillo", "saloon01", 4);
				if (IS_OBJECT_VALID(bVar1))
				{
					if (DECOR_CHECK_EXIST(bVar1, "intro01locked"))
					{
						if (IS_DOOR_LOCKED(bVar1))
						{
							Function_162(bVar1, 0);
						}
						DECOR_REMOVE(bVar1, "intro01locked");
					}
				}
				bVar1 = Function_408(Global_30640[0], "narmadillo", "saloon01", 5);
				if (IS_OBJECT_VALID(bVar1))
				{
					if (DECOR_CHECK_EXIST(bVar1, "intro01locked"))
					{
						if (IS_DOOR_LOCKED(bVar1))
						{
							Function_162(bVar1, 0);
						}
						DECOR_REMOVE(bVar1, "intro01locked");
					}
				}
			}
		}
	}
	return;
}

bool Function_571(bool bParam0) //Position: 0x228E2 / 141538
{
	if (!Function_87(bParam0))
	{
		return 1;
	}
	return Function_167(&(Global_29008[bParam0]), 4);
}

void Function_572(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x228FE / 141566
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam8 = uParam8;
	if (Function_43())
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

void Function_573(int iParam0) //Position: 0x2293C / 141628
{
	switch (iParam0)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_STATE("SILENT");
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_SET_STATE("SCRIPTED");
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_STATE("UNSCRIPTED");
			break;
	}
	return;
}

