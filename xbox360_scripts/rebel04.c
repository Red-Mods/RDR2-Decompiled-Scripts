//Decompiled with MagicRDR v1.0
//Function Count : 649
//Statics Count : 1220
//Natives Count : 820
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<2561> Local_4 = { 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_706 = 0;
	Local_679 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_686 = 99;
	iLocal_687 = 6;
	Local_688 = 1000;
	while (Function_265())
	{
		Function_215();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x44 / 68
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1064))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_1064);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1066))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_1066);
	}
	DYNAMICMIXER_DETRIGGERSTATE(uLocal_1203, 1);
	UI_EXIT("Rebel04_Detonator");
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1067))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_1067);
	}
	if (IS_OBJECT_VALID(bLocal_1127))
	{
		Function_214(bLocal_1127);
	}
	if (IS_ACTOR_VALID(Local_1046))
	{
	}
	ACTOR_END_FORCE_HOLSTER(Global_34573);
	if (DECOR_CHECK_EXIST(Global_34573, "wagoncutfinished"))
	{
		DECOR_REMOVE(Global_34573, "wagoncutfinished");
	}
	STREAMING_UNLOAD_BOUNDS();
	if (FLASH_GET_BOOL("help", "nShowBombs"))
	{
		FLASH_SET_BOOL("help", "nShowBombs", false);
	}
	Function_213();
	if (IS_BLIP_VALID(bLocal_1101))
	{
		REMOVE_BLIP(bLocal_1101);
	}
	if (IS_BLIP_VALID(bLocal_1102))
	{
		REMOVE_BLIP(bLocal_1102);
	}
	if (IS_BLIP_VALID(bLocal_1103))
	{
		REMOVE_BLIP(bLocal_1103);
	}
	if (IS_BLIP_VALID(bLocal_1104))
	{
		REMOVE_BLIP(bLocal_1104);
	}
	if (IS_BLIP_VALID(bLocal_1105))
	{
		REMOVE_BLIP(bLocal_1105);
	}
	if (IS_BLIP_VALID(bLocal_1058))
	{
		REMOVE_BLIP(bLocal_1058);
	}
	Function_212();
	if (iLocal_709[0] || iLocal_709[1])
	{
		Function_211();
	}
	if (iLocal_709[1] || iLocal_709[2])
	{
		Function_210();
	}
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_707);
	Function_209(bLocal_678);
	Function_209(Local_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	if (HUD_IS_FADED() && !HUD_IS_FADED())
	{
		HUD_FADE_IN(1.0f, 1065353216);
	}
	if (Function_206(8))
	{
		Function_203(8, 1, 0, 1, 1);
	}
	else if (IS_ACTOR_VALID(bLocal_707))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_707, 0);
	}
	Function_202();
	if (IS_ACTOR_VALID(Local_1046))
	{
		DESTROY_ACTOR(Local_1046);
	}
	Function_175(bLocal_696, 1, 0, 1, 1, 1, 1, 1);
	Function_171(&bLocal_713);
	Function_171(&bLocal_765);
	Function_168();
	if (IS_ITERATOR_VALID(bLocal_856))
	{
		DESTROY_ITERATOR(bLocal_856);
	}
	RELEASE_LAYOUT_REF(bLocal_678);
	if (bLocal_695)
	{
		Function_24(Local_679, 1, 1, 1, 0);
	}
	else if (bLocal_696)
	{
		Function_20(Local_679);
		CLEAR_DECALS();
	}
	else
	{
		Function_2(Local_679);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x275 / 629
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x296 / 662
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x2B1 / 689
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x2D2 / 722
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x2E8 / 744
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

void Function_7(int iParam0) //Position: 0x384 / 900
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x3A5 / 933
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

void Function_9() //Position: 0x3EB / 1003
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x404 / 1028
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x457 / 1111
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

struct<16> Function_12(int iParam0) //Position: 0x57B / 1403
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x5A0 / 1440
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x5C0 / 1472
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x5D7 / 1495
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x5F2 / 1522
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

void Function_17(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x839 / 2105
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = SHIFT_RIGHT(bParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(bParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x862 / 2146
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

bool Function_19(int iParam0) //Position: 0x886 / 2182
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x89B / 2203
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x8B9 / 2233
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

struct<16> Function_22(int iParam0) //Position: 0x95F / 2399
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0x989 / 2441
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xBDF / 3039
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

void Function_25() //Position: 0xCCC / 3276
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

int Function_26(int iParam0, bool bParam1) //Position: 0xCFC / 3324
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

int Function_27(int iParam0) //Position: 0xD39 / 3385
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xD53 / 3411
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xD69 / 3433
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1060 / 4192
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

void Function_31(char* cParam0, int iParam1) //Position: 0x10CC / 4300
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x1103 / 4355
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

bool Function_33(var uParam0, int iParam1) //Position: 0x117B / 4475
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x118E / 4494
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

int Function_35(int iParam0) //Position: 0x122F / 4655
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x126C / 4716
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x127F / 4735
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

void Function_38(int iParam0, int iParam1) //Position: 0x1491 / 5265
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x14CB / 5323
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

bool Function_40() //Position: 0x150D / 5389
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x1516 / 5398
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

void Function_42() //Position: 0x1567 / 5479
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

void Function_43() //Position: 0x159A / 5530
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

void Function_44() //Position: 0x16A0 / 5792
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

void Function_45() //Position: 0x16D3 / 5843
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

void Function_46() //Position: 0x1861 / 6241
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

void Function_47() //Position: 0x1A15 / 6677
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x1A23 / 6691
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

var Function_49() //Position: 0x1C14 / 7188
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1C29 / 7209
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1CC4 / 7364
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1F5F / 8031
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

bool Function_53() //Position: 0x258C / 9612
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x2594 / 9620
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x25A5 / 9637
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x269A / 9882
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x26B3 / 9907
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x2718 / 10008
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x272A / 10026
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x273C / 10044
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

int Function_61(int iParam0) //Position: 0x286C / 10348
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x287B / 10363
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x28B4 / 10420
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x28F1 / 10481
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A8B / 10891
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

int Function_66(bool bParam0) //Position: 0x2CA5 / 11429
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2CE6 / 11494
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

struct<8> Function_68() //Position: 0x2D6F / 11631
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

struct<8> Function_69() //Position: 0x2E06 / 11782
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

void Function_70() //Position: 0x2E85 / 11909
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2EAB / 11947
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

void Function_72() //Position: 0x30B5 / 12469
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

bool Function_73(vector3 vParam0) //Position: 0x3156 / 12630
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x316E / 12654
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

vector3 Function_75() //Position: 0x3255 / 12885
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x325E / 12894
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x326D / 12909
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3283 / 12931
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x334A / 13130
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x3367 / 13159
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

bool Function_81(int iParam0) //Position: 0x3843 / 14403
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x3859 / 14425
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x3878 / 14456
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3892 / 14482
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x38F9 / 14585
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

void Function_86() //Position: 0x3B19 / 15129
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3B99 / 15257
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3EEB / 16107
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

int Function_89(int iParam0) //Position: 0x3F6E / 16238
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x3F88 / 16264
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x3FB6 / 16310
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x4253 / 16979
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

void Function_93(int iParam0, int iParam1) //Position: 0x4416 / 17430
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x4674 / 18036
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

int Function_95() //Position: 0x47F9 / 18425
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

void Function_96() //Position: 0x4898 / 18584
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

void Function_97(int iParam0) //Position: 0x4947 / 18759
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

var Function_98(int iParam0) //Position: 0x49A5 / 18853
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

int Function_99(int iParam0, bool bParam1) //Position: 0x4A34 / 18996
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

var Function_100(int iParam0, int iParam1) //Position: 0x4BD1 / 19409
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

void Function_101() //Position: 0x4C12 / 19474
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4C28 / 19496
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4C68 / 19560
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4CA8 / 19624
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4CB7 / 19639
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

int Function_106(int iParam0) //Position: 0x4E7F / 20095
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

var Function_107() //Position: 0x4F14 / 20244
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x4F39 / 20281
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x53F4 / 21492
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

var Function_110(int iParam0) //Position: 0x5709 / 22281
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x57AC / 22444
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

int Function_112(int iParam0, bool bParam1) //Position: 0x59A7 / 22951
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5B43 / 23363
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5C0E / 23566
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

void Function_115(int iParam0) //Position: 0x64FE / 25854
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x666D / 26221
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x6773 / 26483
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(bool bParam0) //Position: 0x67A0 / 26528
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

var Function_119(vector3 vParam0) //Position: 0x67F7 / 26615
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x6845 / 26693
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6899 / 26777
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

void Function_122() //Position: 0x6A37 / 27191
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6A3D / 27197
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

void Function_124(bool bParam0, int iParam1) //Position: 0x6AE1 / 27361
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x6B36 / 27446
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6B4C / 27468
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6B9D / 27549
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

void Function_128(var uParam0, int iParam1) //Position: 0x6BCA / 27594
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6BD9 / 27609
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6BF0 / 27632
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6BFF / 27647
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

void Function_132(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6D49 / 27977
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

bool Function_133() //Position: 0x6D94 / 28052
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6DC1 / 28097
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

int Function_135(int iParam0) //Position: 0x6F71 / 28529
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x6FC8 / 28616
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

var Function_137(int iParam0) //Position: 0x6FED / 28653
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x7043 / 28739
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

bool Function_139(bool bParam0) //Position: 0x70A2 / 28834
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x70AE / 28846
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x70CA / 28874
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

int Function_142(int iParam0, int iParam1) //Position: 0x711C / 28956
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

int Function_143(int iParam0, int iParam1) //Position: 0x718F / 29071
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x71EB / 29163
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

int Function_145(int iParam0, int iParam1) //Position: 0x725C / 29276
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x72B6 / 29366
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x7562 / 30050
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

void Function_148(int iParam0, bool bParam1) //Position: 0x77F1 / 30705
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

void Function_149() //Position: 0x7850 / 30800
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

var Function_150(int iParam0, int iParam1) //Position: 0x78CB / 30923
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

int Function_151(int iParam0) //Position: 0x84C1 / 33985
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x84D6 / 34006
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x8525 / 34085
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x8532 / 34098
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x8583 / 34179
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

bool Function_156(int iParam0, int iParam1) //Position: 0x85F1 / 34289
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x8604 / 34308
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

var Function_158(int iParam0) //Position: 0x8703 / 34563
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

bool Function_159(var uParam0, int iParam1) //Position: 0x875B / 34651
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x8777 / 34679
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

bool Function_161(int iParam0) //Position: 0x87CE / 34766
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x87E0 / 34784
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

void Function_163(int iParam0) //Position: 0x8814 / 34836
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x887B / 34939
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

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8958 / 35160
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

void Function_166() //Position: 0x8AD1 / 35537
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x8ADD / 35549
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

void Function_168() //Position: 0x8B23 / 35619
{
	Function_170();
	Function_169();
	return;
}

void Function_169() //Position: 0x8B2F / 35631
{
	Function_171(&Local_645 + 4);
	RELEASE_LAYOUT_REF(Local_645);
	return;
}

void Function_170() //Position: 0x8B43 / 35651
{
	Function_171(&Local_4 + 4);
	Function_171(&Local_4 + 164);
	Function_171(&Local_4 + 264);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_171(bool bParam0) //Position: 0x8B64 / 35684
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_172(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_172(var uParam0, int iParam1) //Position: 0x8B8A / 35722
{
	if (Function_174(uParam0[iParam13], 4))
	{
		if (Function_174(uParam0[iParam13], 1))
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
			Function_173(uParam0[iParam13], 1);
			Function_173(uParam0[iParam13], 2);
			Function_173(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_173(var uParam0, int iParam1) //Position: 0x8CB8 / 36024
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_174(var uParam0, bool bParam1) //Position: 0x8CD2 / 36050
{
	int iVar0;
	
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_175(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8CEF / 36079
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_201());
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
	Function_200();
	CLEAR_PRINTED_OBJECTIVE();
	Function_199();
	Function_197(0);
	Function_196();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_195();
	Function_194();
	Function_200();
	ENABLE_JOURNAL_REPLAY(1);
	Function_193(1);
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
		Function_192(Global_34573);
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
	Function_191(Global_28178);
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
	Function_190(1178687);
	Function_188(33039);
	Function_187(0x218003f);
	Function_186(4194560);
	Function_185();
	Function_184();
	Global_25266 = GET_CURRENT_GAME_TIME();
	Global_63097 = 0;
	if (bParam3)
	{
		Function_181(0, 1, 1);
	}
	else
	{
		Function_181(0, 1, 1);
	}
	Function_180();
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
	Function_176();
	if (bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_36(&Global_12976 + 36 + 20, 16);
}

void Function_176() //Position: 0x8EE0 / 36576
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
		if (Function_179() > 3)
		{
			bVar0 *= 2;
		}
		Function_177(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_177(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x8F36 / 36662
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_178((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_178(bool bParam0) //Position: 0x8F7C / 36732
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_179() //Position: 0x8FA1 / 36769
{
	return Global_12976.f_156;
}

void Function_180() //Position: 0x8FAC / 36780
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

void Function_181(int iParam0, bool bParam1, int iParam2) //Position: 0x8FD6 / 36822
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
			Function_182(Global_29006);
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

void Function_182(int iParam0) //Position: 0x90E1 / 37089
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_183())
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

bool Function_183() //Position: 0x9160 / 37216
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

void Function_184() //Position: 0x91BD / 37309
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

void Function_185() //Position: 0x91E3 / 37347
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

void Function_186(int iParam0) //Position: 0x9209 / 37385
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_187(int iParam0) //Position: 0x9226 / 37414
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_188(int iParam0) //Position: 0x9239 / 37433
{
	Function_189(&Global_28842, iParam0);
	return;
}

void Function_189(var uParam0, int iParam1) //Position: 0x9247 / 37447
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_190(bool bParam0) //Position: 0x9262 / 37474
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_191(int iParam0) //Position: 0x928F / 37519
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

void Function_192(bool bParam0) //Position: 0x9356 / 37718
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

void Function_193(bool bParam0) //Position: 0x93D2 / 37842
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

void Function_194() //Position: 0x9446 / 37958
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

void Function_195() //Position: 0x9487 / 38023
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

void Function_196() //Position: 0x94C8 / 38088
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_197(int iParam0) //Position: 0x94DC / 38108
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_198())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_198() //Position: 0x9518 / 38168
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

void Function_199() //Position: 0x953D / 38205
{
	Global_8722 = 0.0f;
	return;
}

void Function_200() //Position: 0x9547 / 38215
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

int Function_201() //Position: 0x9572 / 38258
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_202() //Position: 0x958C / 38284
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

int Function_203(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x96A6 / 38566
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
		Function_205(StackVal);
		UNK_0x99AFD2D1(StackVal, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(StackVal, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(StackVal);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(StackVal, true);
		LIMIT_BLOOD_ON_ACTOR(StackVal, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(StackVal, 0);
		Function_204(StackVal);
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

void Function_204(bool bParam0) //Position: 0x99C4 / 39364
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

void Function_205(bool bParam0) //Position: 0x99F0 / 39408
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

bool Function_206(int iParam0) //Position: 0x9A05 / 39429
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_IS_REGISTERED_AND_VALID: CompanionsList out of bounds.");
		return 0;
	}
	if (IS_PERS_CHAR_VALID(Global_8492[iParam014]))
	{
		if (Function_208(iParam0))
		{
			return 1;
		}
	}
	if (Function_207(StackVal))
	{
		return 1;
	}
	return 0;
}

bool Function_207(bool bParam0) //Position: 0x9A8A / 39562
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_208(int iParam0) //Position: 0x9AA1 / 39585
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_IS_STREAMED: CompanionsList out of bounds.");
		return 0;
	}
	if (STREAMING_IS_ACTOR_LOADED(StackVal, 4294967295))
	{
		return 1;
	}
	return 0;
}

void Function_209(bool bParam0) //Position: 0x9B04 / 39684
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

void Function_210() //Position: 0x9B5C / 39772
{
	Function_171(&Local_4 + 264);
	return;
}

void Function_211() //Position: 0x9B6A / 39786
{
	Function_171(&Local_4 + 164);
	return;
}

void Function_212() //Position: 0x9B77 / 39799
{
	if (IS_OBJECT_VALID(bLocal_1164))
	{
		REMOVE_CAMERA_FROM_CHANNEL(bLocal_1164, 0);
		DESTROY_CAMERA(bLocal_1164);
		DESTROY_CAMERA_SHOT(bLocal_1172);
		DESTROY_CAMERA_SHOT(bLocal_1173);
		CAMERA_RESET(0);
		DESTROY_OBJECT(bLocal_1165);
		AI_STOP_IGNORING_ACTORS();
		AI_GOAL_LOOK_CLEAR(Global_34573);
		STREAMING_UNLOAD_SCENE();
	}
	return;
}

void Function_213() //Position: 0x9BB5 / 39861
{
	if (IS_OBJECT_VALID(bLocal_1059))
	{
		DESTROY_OBJECT_GLOW(bLocal_1059);
	}
	if (IS_OBJECT_VALID(bLocal_1060))
	{
		DESTROY_OBJECT_GLOW(bLocal_1060);
	}
	if (IS_OBJECT_VALID(bLocal_1061))
	{
		DESTROY_OBJECT_GLOW(bLocal_1061);
	}
	if (IS_OBJECT_VALID(bLocal_1062))
	{
		DESTROY_OBJECT_GLOW(bLocal_1062);
	}
	if (IS_OBJECT_VALID(bLocal_1063))
	{
		DESTROY_OBJECT_GLOW(bLocal_1063);
	}
	return;
}

void Function_214(bool bParam0) //Position: 0x9C06 / 39942
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

void Function_215() //Position: 0x9C90 / 40080
{
	var uVar0[7];
	int iVar8;
	
	if (Function_264())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "2 - Set Explosives";
		uVar0[4] = "3 - Ambush (no checkpoint)";
		uVar0[5] = "kill all baddies";
		uVar0[6] = "Last Stage";
		iVar8 = Function_250(&uLocal_699, &uVar0, &Local_679 + 4, GET_DEBUG_PADINDEX(), 0);
		if (iVar8 == 0)
		{
			Function_243();
			Function_242();
			Function_241(&bLocal_695, 8);
			Local_688 = 1000;
		}
		else if (iVar8 == 1)
		{
			Function_243();
			Function_242();
			Function_236(bLocal_686);
			Function_232(StackVal, StackVal, 5, &bLocal_696, &bLocal_686, Function_239(bLocal_686), Function_236(bLocal_686), 0);
			Local_688 = 1000;
		}
		else if (iVar8 == 2)
		{
			Function_243();
			Function_242();
			Function_227(&bLocal_697, 4);
		}
		else if (iVar8 == 3)
		{
			Function_226();
			Function_221();
			SET_ACTOR_INVULNERABILITY(Local_1046, true);
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_243();
			Function_242();
			iLocal_687 = 0;
			bLocal_686 = true;
			Local_688 = 1000;
		}
		else if (iVar8 == 4)
		{
			Function_226();
			Function_221();
			SET_ACTOR_INVULNERABILITY(Local_1046, true);
			Function_220();
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1067))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_1067);
			}
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_243();
			Function_242();
			bLocal_686 = 2;
			iLocal_687 = 0;
			Local_688 = 1000;
		}
		else if (iVar8 == 5)
		{
			Function_219(bLocal_1052);
			Function_219(bLocal_1053);
			Function_218(bLocal_1054);
		}
		else if (iVar8 == 6)
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_243();
			Function_242();
			Function_216(&iLocal_857);
			iLocal_687 = 0;
			bLocal_686 = 101;
			Local_688 = 1000;
		}
	}
	return;
}

void Function_216(int iParam0) //Position: 0x9E74 / 40564
{
	Function_217(iParam0, 0.0f);
	return;
}

void Function_217(int iParam0, float fParam1) //Position: 0x9E80 / 40576
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(iParam0, 1);
	Function_36(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_218(bool bParam0) //Position: 0x9EA1 / 40609
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

void Function_219(bool bParam0) //Position: 0x9EE5 / 40677
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

void Function_220() //Position: 0x9F2A / 40746
{
	vLocal_1106 = { StackVal, StackVal, *(&Local_4 + 1844[06]) };
	vLocal_1109 = { StackVal, StackVal, *(&Local_4 + 1844[46]) };
	vLocal_1112 = { StackVal, StackVal, *(&Local_4 + 1844[16]) };
	vLocal_1115 = { StackVal, StackVal, *(&Local_4 + 1844[36]) };
	bLocal_1129 = true;
	bLocal_1056 = 4;
	iLocal_1057 = 0;
	return;
}

void Function_221() //Position: 0x9F78 / 40824
{
	if (!IS_ACTOR_VALID(Local_1046))
	{
		vLocal_1030 = { StackVal, StackVal, *(&Local_4 + 892[46]) };
		vLocal_1033 = { StackVal, StackVal, *(&Local_4 + 892[46] + 12) };
		Local_1046 = Function_222(StackVal, StackVal, StackVal, StackVal, Local_4, "player_wagon", 1199, 976, vLocal_1030, vLocal_1033, 1, 976, 976, 976, 4);
		ADD_ACTORSET_MEMBER(Local_645.f_80, Local_1046);
	}
	return;
}

bool Function_222(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x9FE6 / 40934
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
			if (Function_225(Global_30750[6], 4, 23, 0) && iParam10)
			{
				bVar16 = Function_224(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_223(bVar16, &iVar1))
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

bool Function_223(int iParam0, int iParam1) //Position: 0xA21A / 41498
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

var Function_224(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0xA24C / 41548
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

bool Function_225(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xA264 / 41572
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

void Function_226() //Position: 0xA28B / 41611
{
	if (IS_ACTOR_VALID(Local_1046))
	{
		DESTROY_ACTOR(Local_1046);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (IS_OBJECT_VALID(Local_1046.f_12))
	{
		DESTROY_OBJECT(Local_1046.f_12);
	}
	if (IS_OBJECT_VALID(Local_1046.f_16))
	{
		DESTROY_OBJECT(Local_1046.f_16);
	}
	return;
}

void Function_227(bool bParam0, int iParam1) //Position: 0xA2D9 / 41689
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_228(iParam1);
	*bParam0 = 1;
	return;
}

void Function_228(int iParam0) //Position: 0xA2FC / 41724
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_231("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_230(2) || Function_230(8)) || Function_230(9)) || Function_230(10))
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
		Function_231("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_231("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_231("");
	}
	else if (iParam0 == 8)
	{
		Function_229();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_229();
	}
	return;
}

void Function_229() //Position: 0xA3F3 / 41971
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_230(int iParam0) //Position: 0xA3FF / 41983
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

void Function_231(bool bParam0) //Position: 0xA435 / 42037
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_232(int iParam0, bool bParam1, int iParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA49F / 42143
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*iParam2 != 100)
	{
		Function_233(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_228(iParam0);
		*bParam1 = 1;
		*iParam2 = 100;
	}
}

void Function_233(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA4DC / 42204
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_235(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_234(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_234(int iParam0) //Position: 0xA55F / 42335
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

var Function_235(vector3 vParam0, bool bParam3) //Position: 0xAA0D / 43533
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

vector3 Function_236(int iParam0) //Position: 0xAA78 / 43640
{
	Function_237(iParam0 + 1);
	return StackVal, StackVal, Function_237(iParam0 + 1);
}

vector3 Function_237(int iParam0) //Position: 0xAA85 / 43653
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_238((*&Local_4 + 872)[0]);
			return StackVal, StackVal, Function_238((*&Local_4 + 872)[0]);
			break;
		
		case 0x00000001:
			Function_238((*&Local_4 + 1112)[0]);
			return StackVal, StackVal, Function_238((*&Local_4 + 1112)[0]);
			break;
		
		case 0x00000002:
			Function_238((*&Local_4 + 1280)[0]);
			return StackVal, StackVal, Function_238((*&Local_4 + 1280)[0]);
			break;
		
		default:
			Function_238((*&Local_4 + 1432)[0]);
			return StackVal, StackVal, Function_238((*&Local_4 + 1432)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_238((*&Local_4 + 872)[0]);
	return StackVal, StackVal, Function_238((*&Local_4 + 872)[0]);
}

vector3 Function_238(bool bParam0) //Position: 0xAB4F / 43855
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

int Function_239(int iParam0) //Position: 0xAB76 / 43894
{
	return Function_240(iParam0 + 1);
}

int Function_240(int iParam0) //Position: 0xAB83 / 43907
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 872)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 1112)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 1280)[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 1432)[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING((*&Local_4 + 872)[0]);
}

void Function_241(bool bParam0, int iParam1) //Position: 0xAC4D / 44109
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_228(iParam1);
	*bParam0 = 1;
	return;
}

void Function_242() //Position: 0xAC70 / 44144
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_243() //Position: 0xAC85 / 44165
{
	Function_245();
	Function_244(10, 3);
	return;
}

void Function_244(int iParam0, int iParam1) //Position: 0xAC94 / 44180
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

void Function_245() //Position: 0xADCB / 44491
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

void Function_246() //Position: 0xAE16 / 44566
{
	Function_247(25, 2);
	return;
}

void Function_247(int iParam0, int iParam1) //Position: 0xAE22 / 44578
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

void Function_248(int iParam0, int iParam1) //Position: 0xB020 / 45088
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

bool Function_249() //Position: 0xB157 / 45399
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

var Function_250(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB1BE / 45502
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_263(&Var15, &Var0);
	uVar20 = Function_262(*uParam1, &Var15);
	Function_261(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_260(uParam0, uVar20);
	Function_258(StackVal, uParam0, Var15.f_12);
	Function_256(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_255(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_252(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_251(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_251(int iParam0, int iParam1, int iParam2) //Position: 0xB285 / 45701
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

bool Function_252(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB2E1 / 45793
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
				Function_254(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_254(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_251(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_253(bParam1->f_32);
	}
	else
	{
		Function_253(bParam1->f_32);
	}
	return 0;
}

void Function_253(bool bParam0) //Position: 0xB467 / 46183
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

void Function_254(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB4A1 / 46241
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

var Function_255(int iParam0, var uParam1, int iParam2) //Position: 0xB54F / 46415
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_256(var uParam0, int iParam1, int iParam2) //Position: 0xB573 / 46451
{
	switch (Function_257())
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

int Function_257() //Position: 0xB60F / 46607
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

void Function_258(var uParam0, int iParam1, int iParam2) //Position: 0xB64B / 46667
{
	switch (Function_259(uParam0))
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

int Function_259(bool bParam0) //Position: 0xB6E3 / 46819
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

var Function_260(var uParam0, int iParam1) //Position: 0xB82E / 47150
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

void Function_261(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB97D / 47485
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

var Function_262(int iParam0, int iParam1) //Position: 0xBA10 / 47632
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_263(var uParam0, var uParam1) //Position: 0xBA2A / 47658
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

bool Function_264() //Position: 0xBA78 / 47736
{
	return Global_30920;
}

bool Function_265() //Position: 0xBA81 / 47745
{
	if (IS_EXITFLAG_SET())
	{
		Function_236(bLocal_686);
		Function_232(StackVal, StackVal, 4, &bLocal_696, &bLocal_686, Function_239(bLocal_686), Function_236(bLocal_686), 0);
		return 0;
	}
	Function_648(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_679, bLocal_686, iLocal_687, &bLocal_697, &bLocal_695, &bLocal_696);
	if (bLocal_686 == 99 && bLocal_686 == 100)
	{
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_236(bLocal_686);
			Function_232(StackVal, StackVal, 1, &bLocal_696, &bLocal_686, Function_239(bLocal_686), Function_236(bLocal_686), 0);
			return 1;
		}
		if (iLocal_687 < 4 && iLocal_687 > 105)
		{
			if (Function_629(&Local_927, &uLocal_882, &uLocal_922, bLocal_856, bLocal_686 != 2))
			{
				if (Function_627(&uLocal_922))
				{
					Function_236(bLocal_686);
					Function_232(StackVal, StackVal, 5, &bLocal_696, &bLocal_686, Function_239(bLocal_686), Function_236(bLocal_686), 0);
				}
				return 1;
			}
		}
		if (bLocal_686 != 101)
		{
			if (iLocal_687 < 5 && iLocal_687 > 105)
			{
				Function_626();
			}
		}
		if (Function_625(2048))
		{
			Function_236(bLocal_686);
			Function_232(StackVal, StackVal, 3, &bLocal_696, &bLocal_686, Function_239(bLocal_686), Function_236(bLocal_686), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(bLocal_707))
		{
			Function_231("Rebel04_companion_dead");
			Function_236(bLocal_686);
			Function_232(StackVal, StackVal, 5, &bLocal_696, &bLocal_686, Function_239(bLocal_686), Function_236(bLocal_686), 0);
			return 1;
		}
		Function_624();
	}
	switch (bLocal_686)
	{
		case 0x00000063:
			Function_591();
			break;
		
		case 0x00000000:
			Function_560();
			break;
		
		case 0x00000001:
			Function_502();
			break;
		
		case 0x00000002:
			Function_338();
			break;
		
		case 0x00000065:
			Function_268();
			break;
		
		case 0x00000064:
			if (Function_267(&bLocal_696))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_266(&bLocal_686, &iLocal_687, &Local_688))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_697)
	{
		Function_227(&bLocal_697, 4);
		Function_1();
		return 0;
	}
	if (bLocal_695)
	{
		Function_241(&bLocal_695, 8);
		Function_1();
		return 0;
	}
	if (bLocal_696 && bLocal_686 == 100)
	{
		Function_236(bLocal_686);
		Function_232(StackVal, StackVal, 5, &bLocal_696, &bLocal_686, Function_239(bLocal_686), Function_236(bLocal_686), 0);
	}
	return 1;
}

bool Function_266(var uParam0, var uParam1, int iParam2) //Position: 0xBC71 / 48241
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

bool Function_267(int iParam0) //Position: 0xBCB1 / 48305
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_268() //Position: 0xBCC4 / 48324
{
	switch (iLocal_687)
	{
		case 0x00000000:
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_707, GET_ACTOR_MAX_HEALTH(bLocal_707));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			if (!iLocal_709[2])
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1308[06]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_707, *(&Local_4 + 1308[26]), 1, true, 1);
				Function_337();
				Local_1046 = (*&Local_645 + 68)[02];
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Local_1046, *(&Local_4 + 1156[46]), 1, true, 1);
				SET_ACTOR_IN_VEHICLE(bLocal_707, Local_1046, false);
			}
			else
			{
				Function_336(Local_4.f_624);
			}
			TASK_STAND_STILL(bLocal_707, -1.0f, 0, 0);
			Function_216(&iLocal_857);
			iLocal_687 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_216(&iLocal_857);
				iLocal_687 = 2;
			}
			break;
		
		case 0x00000002:
			Function_216(&iLocal_857);
			iLocal_687 = 3;
			break;
		
		case 0x00000003:
			if (Function_269("$/cutscene/REBEL04_END/REBEL04_END", &Local_688, &Local_679, &bLocal_686, 72635, 72578, 56588, 52035, 51617, 51610, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_216(&iLocal_857);
				iLocal_687 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_695 = true;
			}
			break;
	}
	return;
}

bool Function_269(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xBE5C / 48732
{
	if (!bParam15)
	{
		Function_282(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*iParam3 != 99 && (Function_281(iParam2) || iParam2->f_24 < 1))
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
				Function_216(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_280())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_279(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_216(iParam1 + 4);
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
					Function_279(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_276(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_276(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_279(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_216(iParam1 + 4);
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
			if ((HUD_IS_FADED() && *iParam3 == 99) && !Function_281(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_270(bool bParam0) //Position: 0xC471 / 50289
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

void Function_271() //Position: 0xC516 / 50454
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_272();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_272() //Position: 0xC55B / 50523
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_273(bool bParam0) //Position: 0xC56D / 50541
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

void Function_274(bool bParam0, bool bParam1) //Position: 0xC58A / 50570
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

bool Function_275(bool bParam0) //Position: 0xC60A / 50698
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

float Function_276(int iParam0) //Position: 0xC639 / 50745
{
	if (Function_278(iParam0))
	{
		if (Function_277(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_277(int iParam0) //Position: 0xC701 / 50945
{
	return Function_153(*iParam0, 2);
}

bool Function_278(int iParam0) //Position: 0xC70E / 50958
{
	return Function_153(*iParam0, 1);
}

int Function_279(bool bParam0) //Position: 0xC71B / 50971
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

bool Function_280() //Position: 0xC7D3 / 51155
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

bool Function_281(int iParam0) //Position: 0xC80D / 51213
{
	return iParam0->f_20;
}

void Function_282(var uParam0, int iParam1) //Position: 0xC817 / 51223
{
	Function_283(uParam0, iParam1, 0);
	return;
}

void Function_283(int iParam0, bool bParam1, bool bParam2) //Position: 0xC825 / 51237
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
			Function_284(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_284(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_284(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC971 / 51569
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

int Function_285() //Position: 0xC99A / 51610
{
	return 1;
}

int Function_286() //Position: 0xC9A1 / 51617
{
	switch (bLocal_686)
	{
		case 0x00000063:
			Function_287(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_688.f_16), false))
			{
				if (IS_OBJECT_VALID(Local_688.f_16))
				{
					DECOR_REMOVE(Global_34573, "__CameraReady");
					DECOR_REMOVE(Global_34573, "__CameraGo");
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(Local_688.f_16))
					{
						DESTROY_OBJECT(Local_688.f_16);
					}
				}
				AI_STOP_IGNORING_ACTORS();
				Function_287(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_287(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9) //Position: 0xCA53 / 51795
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
		Function_242();
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

int Function_288() //Position: 0xCB43 / 52035
{
	bool bVar0;
	
	switch (bLocal_686)
	{
		case 0x00000063:
			TELEPORT_ACTOR_WITH_HEADING((*&Local_645 + 88)[12], -2293,83f, 21,84f, 4963,32f, 324,4f, 1, true, 1);
			TELEPORT_ACTOR_WITH_HEADING((*&Local_645 + 88)[02], -2291,46f, 21,84f, 4961,65f, 389,17f, 1, true, 1);
			TELEPORT_ACTOR_WITH_HEADING((*&Local_645 + 88)[22], -2294,88f, 21,84f, 4962,58f, 298,47f, 1, true, 1);
			bVar0 = Function_307(1, 0, 0, 0, 0, 0, 1, 0);
			if (IS_ACTOR_VALID(bVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bVar0, *(&Local_4 + 796[26]), 1, true, 1);
				TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
			}
			RESET_ANIM_SET_FOR_ACTOR(bLocal_707, 0);
			RESET_ACTOR_GAITS(bLocal_707, 0);
			ACTOR_RESET_ANIMS(bLocal_707, 1);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_707, *(&Local_4 + 796[16]), 1, true, 1);
			Local_1046 = (*&Local_645 + 68)[02];
			bLocal_1130 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2548, 2, 1, 0, 1, false);
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, Local_1046, 0, 2, 0);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_707, bLocal_1130);
			TASK_SEQUENCE_RELEASE(bLocal_1130, 1);
			ENABLE_VEHICLE_SEAT(Local_1046, false, 0);
			ACTOR_POP_NEXT_GAIT(bLocal_707, 2, false);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 796[06]), 1, true, 1);
			Function_304(Global_34573, Local_1046);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			return 1;
			break;
		
		case 0x00000065:
			Local_688.f_16 = Function_300(Local_4, 0, Global_34573, 1, 0, 0);
			if (IS_OBJECT_VALID(Local_688.f_16))
			{
			}
			else
			{
				LOG_ERROR("Rebel04 - Outro - Failed to create Marshal01_Outro_cutscene");
			}
			CUTSCENEOBJECT_SET_RECENTER_GAMECAM(Local_688.f_16, 1);
			DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1308[16]), 1, true, 1);
			if (!GET_ACTOR_IN_VEHICLE_SEAT(Local_1046, false) != bLocal_707)
			{
				SET_ACTOR_IN_VEHICLE(bLocal_707, Local_1046, false);
			}
			TELEPORT_ACTOR_WITH_HEADING(StackVal, Local_1046, *(&Local_4 + 1308[36]), 1, true, 1);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_707, Local_4.f_2536, 4, 1, 0, 1, false);
			AI_ACTOR_FORCE_SPEED(bLocal_707, 4);
			AI_ACTOR_FORCE_SPEED(Local_1046, 4);
			AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(false, Local_1046), 4);
			AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(true, Local_1046), 4);
			SET_ACTOR_SPEED(bLocal_707, 10.0f);
			SET_ACTOR_SPEED(Local_1046, 10.0f);
			SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, Local_1046), 10.0f);
			SET_ACTOR_SPEED(GET_DRAFT_ACTOR(true, Local_1046), 10.0f);
			Function_289();
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

void Function_289() //Position: 0xCE16 / 52758
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (SQUAD_IS_VALID(Local_4.f_676) && SQUAD_IS_VALID(Local_4.f_624))
	{
		SQUADS_MERGE(Local_4.f_676, Local_4.f_624);
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_624))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_624, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (Function_225(Global_30750[6], 0, 4294967295, 0))
			{
				bVar3 = Function_293(Global_30750[6], 1, 0, 4294967295, 0);
				if (Function_207(bVar3))
				{
					Function_292(bVar1);
					Function_291(bVar1);
					bVar2 = CREATE_ACTOR_IN_LAYOUT(Local_4, Function_53(), bVar3, Function_292(bVar1), Function_291(bVar1));
					ACCESSORIZE_HORSE(bVar2, 3);
				}
			}
			if (IS_ACTOR_VALID(bVar2))
			{
				ACTOR_MOUNT_ACTOR(bVar1, bVar2);
			}
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar1, 1.0f);
			SET_ACTOR_FACTION(bVar1, 21);
			MEMORY_CONSIDER_AS(bVar1, Global_34573, 2);
			MEMORY_PREFER_WALKING(bVar1, false);
			MEMORY_PREFER_RIDING(bVar1, true);
			Function_290(StackVal, StackVal, bVar1, *(&Local_4 + 796[16]), 0, 3, 2, 1);
		}
		bVar0++;
	}
	return;
}

void Function_290(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0xCEF2 / 52978
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

vector3 Function_291(bool bParam0) //Position: 0xCFFA / 53242
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

vector3 Function_292(bool bParam0) //Position: 0xD021 / 53281
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_293(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xD032 / 53298
{
	return Function_294(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_294(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0xD04B / 53323
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
		Function_299();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_207(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_298(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_298(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_297(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_207(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_297(bVar0))
				{
					Function_296();
				}
				Function_295(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_207(bVar1))
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

void Function_295(int iParam0) //Position: 0xD33E / 54078
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

void Function_296() //Position: 0xD3F2 / 54258
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

bool Function_297(bool bParam0) //Position: 0xD42C / 54316
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

void Function_298(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xD459 / 54361
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

void Function_299() //Position: 0xD5AA / 54698
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_296();
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
	Function_296();
	return;
}

var Function_300(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xD5F5 / 54773
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Rebel04_Cutscene03", 2, 1);
	}
	Function_301(&bVar0, uParam2);
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
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 10.0f, 4294967295, 6, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_301(var uParam0, char* cParam1) //Position: 0xD679 / 54905
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_303(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_302(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 10.0f, 1, 0);
	return;
}

void Function_302(int iParam0) //Position: 0xD6D3 / 54995
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 43,5089f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3530,343f, 9,637941f, 4253,42f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,064207f, -1,369979f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_303(int iParam0) //Position: 0xD736 / 55094
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3522,858f, 8,261075f, 4251,708f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,04299f, -1,927168f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_304(var uParam0, bool bParam1) //Position: 0xD799 / 55193
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_305(StackVal, StackVal, uParam0, vVar0);
	return;
}

void Function_305(bool bParam0, vector3 vParam1) //Position: 0xD7B3 / 55219
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_306(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_306(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_306(bool bParam0, vector3 vParam1) //Position: 0xD7EB / 55275
{
	vector3 vVar0;
	
	Function_292(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_292(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

var Function_307(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, bool bParam7) //Position: 0xD86E / 55406
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
	if (Global_3381 || Function_230(1))
	{
		Function_313(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_312())
		{
			return "";
		}
	}
	if (!Function_310())
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
		Function_238(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_238(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_238(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_238(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_309(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_309(StackVal, StackVal, vVar5, 0, 1, 1);
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
		Function_308(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
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

void Function_308(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0xDBC6 / 56262
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

var Function_309(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xDC03 / 56323
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

bool Function_310() //Position: 0xDC9E / 56478
{
	if (Function_311() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_311() //Position: 0xDCB4 / 56500
{
	return Global_12976.f_152;
}

bool Function_312() //Position: 0xDCBF / 56511
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_313(var uParam0, bool bParam1, bool bParam2) //Position: 0xDCDF / 56543
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

int Function_314() //Position: 0xDD0C / 56588
{
	switch (bLocal_686)
	{
		case 0x00000063:
			if (Function_319())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_315();
				}
			}
			if (!DECOR_CHECK_EXIST(bLocal_678, "cs01silent"))
			{
				DECOR_SET_BOOL(bLocal_678, "cs01silent", true);
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(Global_34573)))
				{
					CUTSCENE_MANAGER_HIDE_ACTOR(GET_MOST_RECENT_MOUNT(Global_34573));
				}
			}
			return 1;
			break;
		
		case 0x00000065:
			if (!DECOR_CHECK_EXIST(bLocal_678, "cslastsilent"))
			{
				DECOR_SET_BOOL(bLocal_678, "cslastsilent", true);
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

vector3 Function_315() //Position: 0xDDD8 / 56792
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	
	Function_318(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Rebel04_layout");
	Local_4.f_696 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 680)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -3478,223f, 9,899163f, 4216.0f, 0.0f, 20,67522f, 0.0f, 22,20163f, 19,75863f, 23,16461f);
	ADD_TO_VOLUME_SET(Local_4.f_696, (*&Local_4 + 680)[0]);
	(*&Local_4 + 680)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -3493,655f, 21,0144f, 4198,411f, 0.0f, 20,67522f, 0.0f, 22,20163f, 19,75863f, 23,16461f);
	ADD_TO_VOLUME_SET(Local_4.f_696, (*&Local_4 + 680)[1]);
	(*&Local_4 + 680)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene04Vol", 2, -3505,822f, 9,697827f, 4249,806f, 0,1421043f, -71,63804f, 0,6657096f, 29,17327f, 9,981334f, 41,35008f);
	ADD_TO_VOLUME_SET(Local_4.f_696, (*&Local_4 + 680)[2]);
	Local_4.f_712 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "StageOneVols_set");
	(*&Local_4 + 700)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StageOneFinishVol", 2, -3440,083f, 6,240331f, 4202,592f, 0.0f, -48,95423f, 0.0f, 33,87334f, 11,08996f, 11,08529f);
	ADD_TO_VOLUME_SET(Local_4.f_712, (*&Local_4 + 700)[0]);
	(*&Local_4 + 700)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "NearFinish", 2, -3134,154f, 15,55758f, 4175,182f, 0.0f, 62,46721f, 0.0f, 74,17829f, 22,43092f, 34,09418f);
	ADD_TO_VOLUME_SET(Local_4.f_712, (*&Local_4 + 700)[1]);
	Local_4.f_740 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "StageTwoVols_set");
	(*&Local_4 + 716)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "bridgeArea", 2, -3457,875f, 17,31899f, 4219,458f, 0.0f, 47,81974f, 0.0f, 112,1611f, 53,66011f, 57,85305f);
	ADD_TO_VOLUME_SET(Local_4.f_740, (*&Local_4 + 716)[0]);
	(*&Local_4 + 716)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "explosiveArea", 2, -3457,896f, 5,383966f, 4221,612f, 0.0f, 44,13973f, 0.0f, 98,00983f, 10,61445f, 10,87446f);
	ADD_TO_VOLUME_SET(Local_4.f_740, (*&Local_4 + 716)[1]);
	(*&Local_4 + 716)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "tooFar", 2, -3409,58f, 6,834368f, 4177,324f, 0.0f, 43,89208f, 0.0f, 32,73331f, 32,73331f, 40,21665f);
	ADD_TO_VOLUME_SET(Local_4.f_740, (*&Local_4 + 716)[2]);
	(*&Local_4 + 716)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "detonatorVol", 2, -3495,605f, 21,46531f, 4198,609f, 0.0f, -57,82624f, 0.0f, 5,337294f, 7,314745f, 9,896396f);
	ADD_TO_VOLUME_SET(Local_4.f_740, (*&Local_4 + 716)[3]);
	(*&Local_4 + 716)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "underBridgeVol", 2, -3501,084f, 10,1386f, 4257,165f, 0.0f, 44,13973f, 0.0f, 14,71267f, 10,61445f, 15,05843f);
	ADD_TO_VOLUME_SET(Local_4.f_740, (*&Local_4 + 716)[4]);
	Local_4.f_776 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "StageThreeVols_set");
	(*&Local_4 + 744)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SniperVol01", 2, -3454,943f, 11,61692f, 4246,938f, 0.0f, 4,064569f, 0.0f, 9,044948f, 6,596849f, 11,61352f);
	ADD_TO_VOLUME_SET(Local_4.f_776, (*&Local_4 + 744)[0]);
	(*&Local_4 + 744)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SniperVol02", 2, -3399,42f, 19,17843f, 4219,42f, 0.0f, 42,45923f, 0.0f, 12,35134f, 7,59664f, 17,54981f);
	ADD_TO_VOLUME_SET(Local_4.f_776, (*&Local_4 + 744)[1]);
	(*&Local_4 + 744)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SniperVol03", 2, -3459,725f, 12,14528f, 4187,109f, 0.0f, 63,24902f, 0.0f, 9,686968f, 9,350043f, 15,44036f);
	ADD_TO_VOLUME_SET(Local_4.f_776, (*&Local_4 + 744)[2]);
	(*&Local_4 + 744)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "fightVol", 2, -3458,604f, 7,237561f, 4229,296f, 0.0f, 44,13973f, 0.0f, 119,009f, 35,47148f, 90,85659f);
	ADD_TO_VOLUME_SET(Local_4.f_776, (*&Local_4 + 744)[3]);
	(*&Local_4 + 744)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "nescapeVol", 2, -3673,915f, 11,1994f, 4261,455f, 0.0f, 21,78712f, 0.0f, 130,9475f, 34,27554f, 65,42599f);
	ADD_TO_VOLUME_SET(Local_4.f_776, (*&Local_4 + 744)[4]);
	(*&Local_4 + 744)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "gunfightmusictrigger", 2, -3458,604f, 4,913518f, 4229,296f, 0.0f, 44,13973f, 0.0f, 119,009f, 18,71213f, 80,44033f);
	ADD_TO_VOLUME_SET(Local_4.f_776, (*&Local_4 + 744)[5]);
	(*&Local_4 + 744)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "TriggerEscapeVol", 2, -3472,726f, 7,822988f, 4235,19f, 0.0f, -48,95423f, 0.0f, 33,87334f, 11,08996f, 11,08529f);
	ADD_TO_VOLUME_SET(Local_4.f_776, (*&Local_4 + 744)[6]);
	Local_4.f_780 = CREATE_VOLUME_IN_LAYOUT(Local_4, "AmbientRestriction", 2, -3472f, 21,30707f, 4227,768f, 0.0f, 19,10628f, 0.0f, 337,2555f, 53,66011f, 180,5423f);
	Local_4.f_784 = CREATE_VOLUME_IN_LAYOUT(Local_4, "WarningVol", 2, -3472,649f, 21,30707f, 4226,859f, 0.0f, 35,52295f, 0.0f, 198,8159f, 53,66011f, 128,1099f);
	Local_4.f_788 = CREATE_VOLUME_IN_LAYOUT(Local_4, "FailVol", 2, -3472f, 21,30707f, 4227,768f, 0.0f, 19,10628f, 0.0f, 386,3022f, 53,66011f, 268,6572f);
	Local_4.f_792 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	*(&Local_4 + 796[06]) = { -2288.0f, 21,83827f, 4958,324f };
	*(&Local_4 + 796[06] + 12) = { 0.0f, 315,7922f, 0.0f };
	(*&Local_4 + 872)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd01", -2288.0f, 21,83827f, 4958,324f, 0.0f, 315,7922f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 872)[0], Local_4.f_792);
	*(&Local_4 + 796[16]) = { -2284,874f, 21,83827f, 4957,886f };
	*(&Local_4 + 796[16] + 12) = { 0.0f, -42,54397f, 0.0f };
	(*&Local_4 + 872)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd01", -2284,874f, 21,83827f, 4957,886f, 0.0f, -42,54397f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 872)[1], Local_4.f_792);
	*(&Local_4 + 796[26]) = { -2253,501f, 20,081f, 4927,012f };
	*(&Local_4 + 796[26] + 12) = { 0.0f, -78,94791f, 0.0f };
	(*&Local_4 + 872)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd01", -2253,501f, 20,081f, 4927,012f, 0.0f, -78,94791f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 872)[2], Local_4.f_792);
	Local_4.f_888 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	*(&Local_4 + 892[06]) = { -3446,319f, 6,227793f, 4205,253f };
	*(&Local_4 + 892[06] + 12) = { 0.0f, -228,2806f, 0.0f };
	(*&Local_4 + 1112)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -3446,319f, 6,227793f, 4205,253f, 0.0f, -228,2806f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[0], Local_4.f_888);
	*(&Local_4 + 892[16]) = { -3472,854f, 6,023544f, 4228.0f };
	*(&Local_4 + 892[16] + 12) = { 0.0f, -122,1057f, 0.0f };
	(*&Local_4 + 1112)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd02", -3472,854f, 6,023544f, 4228.0f, 0.0f, -122,1057f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[1], Local_4.f_888);
	*(&Local_4 + 892[26]) = { -3461,606f, 5,89426f, 4230,812f };
	*(&Local_4 + 892[26] + 12) = { 0.0f, -225,954f, 0.0f };
	(*&Local_4 + 1112)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart02", -3461,606f, 5,89426f, 4230,812f, 0.0f, -225,954f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[2], Local_4.f_888);
	*(&Local_4 + 892[36]) = { -3461,687f, 5,869079f, 4230,73f };
	*(&Local_4 + 892[36] + 12) = { 0.0f, -226,0139f, 0.0f };
	(*&Local_4 + 1112)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd02", -3461,687f, 5,869079f, 4230,73f, 0.0f, -226,0139f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[3], Local_4.f_888);
	*(&Local_4 + 892[46]) = { -3447,984f, 6,019631f, 4211,933f };
	*(&Local_4 + 892[46] + 12) = { 0.0f, 135,599f, 0.0f };
	(*&Local_4 + 1112)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "WagonStart", -3447,984f, 6,019631f, 4211,933f, 0.0f, 135,599f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[4], Local_4.f_888);
	*(&Local_4 + 892[56]) = { -3570,319f, 7,832234f, 4206,185f };
	*(&Local_4 + 892[56] + 12) = { 0.0f, 236,9912f, 0.0f };
	(*&Local_4 + 1112)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd02", -3570,319f, 7,832234f, 4206,185f, 0.0f, 236,9912f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[5], Local_4.f_888);
	*(&Local_4 + 892[66]) = { -3470,076f, 5,805079f, 4232,632f };
	*(&Local_4 + 892[66] + 12) = { 0.0f, 134,6294f, 0.0f };
	(*&Local_4 + 1112)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "WagonEnd", -3470,076f, 5,805079f, 4232,632f, 0.0f, 134,6294f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[6], Local_4.f_888);
	*(&Local_4 + 892[76]) = { -3449,711f, 6,157222f, 4225,932f };
	*(&Local_4 + 892[76] + 12) = { 0.0f, 134,6294f, 0.0f };
	(*&Local_4 + 1112)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "RiggerVol01Flag", -3449,711f, 6,157222f, 4225,932f, 0.0f, 134,6294f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[7], Local_4.f_888);
	*(&Local_4 + 892[86]) = { -3462,813f, 6,023614f, 4216,274f };
	*(&Local_4 + 892[86] + 12) = { 0.0f, 134,6294f, 0.0f };
	(*&Local_4 + 1112)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "RiggerVol02Flag", -3462,813f, 6,023614f, 4216,274f, 0.0f, 134,6294f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1112)[8], Local_4.f_888);
	Local_4.f_1152 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	*(&Local_4 + 1156[06]) = { -3494,347f, 20,5002f, 4198,715f };
	*(&Local_4 + 1156[06] + 12) = { 0.0f, -79,46883f, 0.0f };
	(*&Local_4 + 1280)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -3494,347f, 20,5002f, 4198,715f, 0.0f, -79,46883f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1280)[0], Local_4.f_1152);
	*(&Local_4 + 1156[16]) = { -3494,345f, 20,5002f, 4198,72f };
	*(&Local_4 + 1156[16] + 12) = { 0.0f, -79,05909f, 0.0f };
	(*&Local_4 + 1280)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd03", -3494,345f, 20,5002f, 4198,72f, 0.0f, -79,05909f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1280)[1], Local_4.f_1152);
	*(&Local_4 + 1156[26]) = { -3494,438f, 20,50184f, 4197,164f };
	*(&Local_4 + 1156[26] + 12) = { 0.0f, 288,4482f, 0.0f };
	(*&Local_4 + 1280)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart03", -3494,438f, 20,50184f, 4197,164f, 0.0f, 288,4482f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1280)[2], Local_4.f_1152);
	*(&Local_4 + 1156[36]) = { -3509,62f, 19,35814f, 4213,18f };
	*(&Local_4 + 1156[36] + 12) = { 0.0f, 263,379f, 0.0f };
	(*&Local_4 + 1280)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd03", -3509,62f, 19,35814f, 4213,18f, 0.0f, 263,379f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1280)[3], Local_4.f_1152);
	*(&Local_4 + 1156[46]) = { -3526,445f, 7,642694f, 4248,589f };
	*(&Local_4 + 1156[46] + 12) = { 0.0f, 206,5065f, 0.0f };
	(*&Local_4 + 1280)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "WagonEnd03", -3526,445f, 7,642694f, 4248,589f, 0.0f, 206,5065f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1280)[4], Local_4.f_1152);
	Local_4.f_1304 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	*(&Local_4 + 1308[06]) = { -3518,309f, 7,211717f, 4246,309f };
	*(&Local_4 + 1308[06] + 12) = { 178,4563f, -362,5666f, 179,9376f };
	(*&Local_4 + 1432)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -3518,309f, 7,211717f, 4246,309f, 178,4563f, -362,5666f, 179,9376f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1432)[0], Local_4.f_1304);
	*(&Local_4 + 1308[16]) = { -3517,798f, 6,904f, 4248,294f };
	*(&Local_4 + 1308[16] + 12) = { 0.0f, 270,754f, 0.0f };
	(*&Local_4 + 1432)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd04", -3517,798f, 6,904f, 4248,294f, 0.0f, 270,754f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1432)[1], Local_4.f_1304);
	*(&Local_4 + 1308[26]) = { -3522,221f, 6,903199f, 4248.0f };
	*(&Local_4 + 1308[26] + 12) = { 0.0f, 117,8508f, 0.0f };
	(*&Local_4 + 1432)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionStart04", -3522,221f, 6,903199f, 4248.0f, 0.0f, 117,8508f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1432)[2], Local_4.f_1304);
	*(&Local_4 + 1308[36]) = { -3525,057f, 5,789245f, 4261,845f };
	*(&Local_4 + 1308[36] + 12) = { 0.0f, 282,5563f, 0.0f };
	(*&Local_4 + 1432)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CompanionEnd04", -3525,057f, 5,789245f, 4261,845f, 0.0f, 282,5563f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1432)[3], Local_4.f_1304);
	*(&Local_4 + 1308[46]) = { -3468f, 6,023544f, 4224.0f };
	*(&Local_4 + 1308[46] + 12) = { 0.0f, -134,8073f, 0.0f };
	(*&Local_4 + 1432)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart04", -3468f, 6,023544f, 4224.0f, 0.0f, -134,8073f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1432)[4], Local_4.f_1304);
	Local_4.f_1456 = CREATE_OBJECTSET_IN_LAYOUT("StageOneSet", Local_4, 8, 0);
	*(&Local_4 + 1460[06]) = { -3440,371f, 6,24046f, 4203,224f };
	*(&Local_4 + 1460[06] + 12) = { -0,7655898f, -601,5338f, -0,7378737f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "Finish01", -3440,371f, 6,24046f, 4203,224f, -0,7655898f, -601,5338f, -0,7378737f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_1456);
	*(&Local_4 + 1460[16]) = { -3110,352f, 12,14097f, 4128,871f };
	*(&Local_4 + 1460[16] + 12) = { -0,3945088f, -562,3384f, -0,2147815f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "Teleport01", -3110,352f, 12,14097f, 4128,871f, -0,3945088f, -562,3384f, -0,2147815f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_1456);
	Local_4.f_1512 = CREATE_OBJECTSET_IN_LAYOUT("StageTwoSet", Local_4, 8, 0);
	*(&Local_4 + 1516[06]) = { -3493,518f, 20,56432f, 4198,519f };
	*(&Local_4 + 1516[06] + 12) = { 0.0f, -101,6852f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "DetonatorFlag", -3493,518f, 20,56432f, 4198,519f, 0.0f, -101,6852f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_1512);
	*(&Local_4 + 1516[16]) = { -3493,537f, 20,56468f, 4198,513f };
	*(&Local_4 + 1516[16] + 12) = { 0.0f, -94,27619f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "NearDetonatorFlag", -3493,537f, 20,56468f, 4198,513f, 0.0f, -94,27619f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_1512);
	*(&Local_4 + 1516[26]) = { -3519,637f, 19,1565f, 4212,744f };
	*(&Local_4 + 1516[26] + 12) = { 0.0f, -101,6852f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "nRebelGoto", -3519,637f, 19,1565f, 4212,744f, 0.0f, -101,6852f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_1512);
	*(&Local_4 + 1516[36]) = { -3366,313f, 7,027457f, 4180.0f };
	*(&Local_4 + 1516[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "BinoFace", -3366,313f, 7,027457f, 4180.0f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_1512);
	*(&Local_4 + 1516[46]) = { -3474,787f, 6,023544f, 4231,663f };
	*(&Local_4 + 1516[46] + 12) = { 0.0f, -317,0349f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "CrateCrouch01", -3474,787f, 6,023544f, 4231,663f, 0.0f, -317,0349f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_1512);
	*(&Local_4 + 1516[56]) = { -3438,487f, 6,798185f, 4209,191f };
	*(&Local_4 + 1516[56] + 12) = { 0.0f, -135,0243f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "CrateCrouch02", -3438,487f, 6,798185f, 4209,191f, 0.0f, -135,0243f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_4.f_1512);
	*(&Local_4 + 1516[66]) = { -3493,518f, 20,56483f, 4198,503f };
	*(&Local_4 + 1516[66] + 12) = { 0.0f, -673,3619f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "Finish02", -3493,518f, 20,56483f, 4198,503f, 0.0f, -673,3619f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_4.f_1512);
	Local_4.f_1688 = CREATE_OBJECTSET_IN_LAYOUT("StageThreeSet", Local_4, 8, 0);
	*(&Local_4 + 1692[06]) = { -3716,61f, 7,78138f, 4303,355f };
	*(&Local_4 + 1692[06] + 12) = { 0.0f, 131,5584f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_4, "FailFlag", -3716,61f, 7,78138f, 4303,355f, 0.0f, 131,5584f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_4.f_1688);
	*(&Local_4 + 1692[16]) = { -3419,208f, 6,360153f, 4185,171f };
	*(&Local_4 + 1692[16] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_4, "East", -3419,208f, 6,360153f, 4185,171f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_4.f_1688);
	*(&Local_4 + 1692[26]) = { -3497,284f, 6,084147f, 4261,284f };
	*(&Local_4 + 1692[26] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_4, "West", -3497,284f, 6,084147f, 4261,284f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_4.f_1688);
	*(&Local_4 + 1692[36]) = { -3232,955f, 6,777454f, 4213,678f };
	*(&Local_4 + 1692[36] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_4, "nLoadScene", -3232,955f, 6,777454f, 4213,678f, 0.0f, 0.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_4.f_1688);
	*(&Local_4 + 1692[46]) = { -3315,356f, 6,641346f, 4173,79f };
	*(&Local_4 + 1692[46] + 12) = { 0.0f, 85,6515f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_4, "VGFindPath", -3315,356f, 6,641346f, 4173,79f, 0.0f, 85,6515f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_4.f_1688);
	*(&Local_4 + 1692[56]) = { -3525,056f, 7,601974f, 4252.0f };
	*(&Local_4 + 1692[56] + 12) = { 0.0f, 85,6515f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_4, "Finish03", -3525,056f, 7,601974f, 4252.0f, 0.0f, 85,6515f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_4.f_1688);
	Local_4.f_1840 = CREATE_OBJECTSET_IN_LAYOUT("DebugDynamiteLocsSet", Local_4, 8, 0);
	*(&Local_4 + 1844[06]) = { -3422,89f, 6,226702f, 4188,39f };
	*(&Local_4 + 1844[06] + 12) = { 0.0f, -54,73079f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_4, "Dynamite01", -3422,89f, 6,226702f, 4188,39f, 0.0f, -54,73079f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_4.f_1840);
	*(&Local_4 + 1844[16]) = { -3444,717f, 6,227793f, 4206,946f };
	*(&Local_4 + 1844[16] + 12) = { 0.0f, -54,73079f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_4, "Dynamite02", -3444,717f, 6,227793f, 4206,946f, 0.0f, -54,73079f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_4.f_1840);
	*(&Local_4 + 1844[26]) = { -3464,716f, 5,773548f, 4227,501f };
	*(&Local_4 + 1844[26] + 12) = { 0.0f, -54,73079f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_4, "Dynamite03", -3464,716f, 5,773548f, 4227,501f, 0.0f, -54,73079f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_4.f_1840);
	*(&Local_4 + 1844[36]) = { -3478,33f, 5,773551f, 4241,468f };
	*(&Local_4 + 1844[36] + 12) = { 0.0f, -54,73079f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_4, "Dynamite04", -3478,33f, 5,773551f, 4241,468f, 0.0f, -54,73079f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_4.f_1840);
	*(&Local_4 + 1844[46]) = { -3494,834f, 5,773544f, 4255,136f };
	*(&Local_4 + 1844[46] + 12) = { 0.0f, -54,73079f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_4, "Dynamite05", -3494,834f, 5,773544f, 4255,136f, 0.0f, -54,73079f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_4.f_1840);
	Local_4.f_1968 = CREATE_OBJECTSET_IN_LAYOUT("FootCoverLocsSet", Local_4, 8, 0);
	*(&Local_4 + 1972[06]) = { -3431,033f, 7,121822f, 4211,033f };
	*(&Local_4 + 1972[06] + 12) = { 0.0f, 102,3986f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_4, "FootCoverLoc01", -3431,033f, 7,121822f, 4211,033f, 0.0f, 102,3986f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_4.f_1968);
	*(&Local_4 + 1972[16]) = { -3451,131f, 6,128746f, 4202,108f };
	*(&Local_4 + 1972[16] + 12) = { 0.0f, 118,4351f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_4, "FootCoverLoc02", -3451,131f, 6,128746f, 4202,108f, 0.0f, 118,4351f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_4.f_1968);
	*(&Local_4 + 1972[26]) = { -3425,889f, 6,898062f, 4202,111f };
	*(&Local_4 + 1972[26] + 12) = { 0.0f, 102,3986f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_4, "FootCoverLoc03", -3425,889f, 6,898062f, 4202,111f, 0.0f, 102,3986f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_4.f_1968);
	*(&Local_4 + 1972[36]) = { -3427,064f, 7,0265f, 4204,668f };
	*(&Local_4 + 1972[36] + 12) = { 0.0f, 102,3986f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_4, "FootCoverLoc04", -3427,064f, 7,0265f, 4204,668f, 0.0f, 102,3986f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_4.f_1968);
	*(&Local_4 + 1972[46]) = { -3456,896f, 6,337747f, 4200,078f };
	*(&Local_4 + 1972[46] + 12) = { 0.0f, 137,7577f, 0.0f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_4, "FootCoverLoc05", -3456,896f, 6,337747f, 4200,078f, 0.0f, 137,7577f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_4.f_1968);
	*(&Local_4 + 1972[56]) = { -3455,514f, 6,127533f, 4203,144f };
	*(&Local_4 + 1972[56] + 12) = { 0.0f, 137,7577f, 0.0f };
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_4, "FootCoverLoc06", -3455,514f, 6,127533f, 4203,144f, 0.0f, 137,7577f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_4.f_1968);
	*(&Local_4 + 1972[66]) = { -3423,495f, 7,027458f, 4204,06f };
	*(&Local_4 + 1972[66] + 12) = { 0.0f, 107,5301f, 0.0f };
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_4, "FootCoverLoc07", -3423,495f, 7,027458f, 4204,06f, 0.0f, 107,5301f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_4.f_1968);
	*(&Local_4 + 2144[06]) = { -3473,849f, 6,023546f, 4226,151f };
	*(&Local_4 + 2144[06] + 12) = { 0.0f, 305,2458f, 0.0f };
	*(&Local_4 + 2144[16]) = { -3473,497f, 6,144435f, 4216.0f };
	*(&Local_4 + 2144[16] + 12) = { 0.0f, 282,8385f, 0.0f };
	*(&Local_4 + 2144[26]) = { -3439,497f, 6,454012f, 4233,746f };
	*(&Local_4 + 2144[26] + 12) = { 0.0f, 376,6348f, 0.0f };
	*(&Local_4 + 2144[36]) = { -3451,282f, 6,838257f, 4232.0f };
	*(&Local_4 + 2144[36] + 12) = { 0.0f, 357,0682f, 0.0f };
	*(&Local_4 + 2144[46]) = { -3456,811f, 6,884021f, 4236,165f };
	*(&Local_4 + 2144[46] + 12) = { 0.0f, 352,4969f, 0.0f };
	*(&Local_4 + 2268[06]) = { -3453,649f, 11,96084f, 4244.0f };
	*(&Local_4 + 2268[06] + 12) = { 0.0f, 357,3806f, 0.0f };
	*(&Local_4 + 2268[16]) = { -3400f, 19,07452f, 4218,59f };
	*(&Local_4 + 2268[16] + 12) = { 0.0f, 376,3231f, 0.0f };
	*(&Local_4 + 2268[26]) = { -3457,331f, 12,20574f, 4186,751f };
	*(&Local_4 + 2268[26] + 12) = { 0.0f, 230,0295f, 0.0f };
	*(&Local_4 + 2344[06]) = { -3482,928f, 6,407366f, 4222,287f };
	*(&Local_4 + 2344[06] + 12) = { 0.0f, 278,0139f, 0.0f };
	*(&Local_4 + 2344[16]) = { -3479,569f, 6,833453f, 4208,6f };
	*(&Local_4 + 2344[16] + 12) = { 0.0f, 261,6193f, 0.0f };
	*(&Local_4 + 2344[26]) = { -3438,603f, 6,336581f, 4245,519f };
	*(&Local_4 + 2344[26] + 12) = { 0.0f, 358,8501f, 0.0f };
	*(&Local_4 + 2344[36]) = { -3446,154f, 7,894483f, 4239,659f };
	*(&Local_4 + 2344[36] + 12) = { 0.0f, 352,4969f, 0.0f };
	*(&Local_4 + 2344[46]) = { -3453,19f, 6,983214f, 4235,223f };
	*(&Local_4 + 2344[46] + 12) = { 0.0f, 352,4969f, 0.0f };
	Local_4.f_2468 = CREATE_GRINGO_IN_LAYOUT(Local_4, "look_distance_binocs", "look_distance_binocs", -3494,158f, 20,50282f, 4197,097f, 0.0f, 287,1017f, 0.0f);
	Local_4.f_2472 = CREATE_GRINGO_IN_LAYOUT(Local_4, "smoking_stand_camp", "smoking_stand", -2287,199f, 21,83827f, 4960.0f, 0.0f, -268,6504f, 0.0f);
	Local_4.f_2476 = CREATE_GRINGO_IN_LAYOUT(Local_4, "stand_guntricks_camp", "stand_guntricks_e_any", -2291,692f, 21,83827f, 4955,316f, 0.0f, 185,6202f, 0.0f);
	Local_4.f_2480 = CREATE_GRINGO_IN_LAYOUT(Local_4, "stand_worried_camp", "stand_worried_n_any", -2292.0f, 21,83827f, 4962,009f, 0.0f, -46,17404f, 0.0f);
	Local_4.f_2484 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_4, "LuisaLowCover", -3512,75f, 7,443497f, 4250,293f, 0.0f, -65,65489f, 0.0f, 4);
}

int HÅ 
A!tEzñCÅ!A0ðEzÓ~Å"©A4*EzÖÅ#.A3.sEzâòÅ#ò×A,¥íE{/2Å$×RA"/(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100) //Position: 0x104FE / 66814
{
	var uVar17688;
	
	return 4265310;
	Unknown_Function();
}

void riEê/Å.Ö5@¸VòEê/Å/ÍÖ@¸,EúÓÅ0¿P@¸"E&Å1¢¾@¸B±E[Å2Ú@¸E¶AÅ3E"@¸¿E\Å3Øj@¸ÈÙE|ÇÅ4*@¸ÁEêÅ4G@¸½ERMÅ5b¡@¸Á½EñÅ6-@¸Â|E4ïÅ7 %@¸ÀEUkÅ8T«@¸¾¸EÅ9Ò@¸ÅGEÏÜÅ9¯@¸Â÷E(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218) //Position: 0x105DD / 67037
{
	var uVar18212;
	int iVar23316;
	int iVar27184;
	
	straddi(StackVal, StackVal, 111);
	*(5.0f * 184) = &iLocal_27;
	return;
	(iLocal_101 * 204)->f_32325 = Global_4555272 <= &fLocal_185 * 192 * -32363;
	return 184, 219 * -32127, &iLocal_135 * 186;
	iLocal_31 = ((StackVal * StackVal) * -32004 % (&uLocal_106 * 64));
	return StackVal, StackVal * 224;
	Unknown_Function();
	(Vector(StackVal, StackVal, StackVal) * Vector(4126, 69 < 128->f_53, IntToFloat(StackVal * -32602 + 65) * 253) * -32706)->f_48 = StackVal;
	PatchTrap7();
	stradd(14063[380317792], 11832 * -32688, 51);
	Unknown_Function();
	Unknown_Function();
	uParam197 = 2 * -32456;
	PatchRet();
	return;
	return uParam69;
	9301->f_21380 = (Global_12927631.f_6405 > 11432 * -32279)->f_43423;
	PatchTrapA();
	PatchRet();
	*(Local_197[1397 * -3183032832] * 250) = 2 * -31884[331943800];
	(*(*(*5365)[Vector(8383 * -32706 * 39, -StackVal, StackVal) + Vector(7450, 14593, 4294958334) * -32021 * 237617795])[StackVal188] * -11299 * -31806)[StackVal33220] = StackVal;
	PatchTrap8();
	*(GET_MOST_RECENT_MOUNT(StackVal, StackVal * 237)) = StackVal;
	return 69;
	return Vector(StackVal, StackVal, &iVar27184 * 231 & 211 >= iVar23316 * 224) * -31848;
	uVar18212 = StackVal;
	return StackVal * 219;
	PatchRet();
	PatchRet();
	Unknown_Function();
}

void Function_318(int iParam0, int iParam1) //Position: 0x1131F / 70431
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

bool Function_319() //Position: 0x11368 / 70504
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_326())
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_320(&bLocal_713))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_320(bool bParam0) //Position: 0x11394 / 70548
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_325();
	iVar1 = 0;
	if (!Function_174(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_324(bParam0[iVar03], 8);
		}
		else if (Function_323())
		{
			iVar1 = 1;
			Function_324(bParam0[iVar03], 8);
		}
		Function_324(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_174(bParam0[iVar03], 4))
		{
			if (!Function_174(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_174(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_174(bParam0[03], 8) || iVar1));
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
				Function_324(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_174(bParam0[iVar03], 4))
		{
			if (!Function_174(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_324(bParam0[iVar03], 2);
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
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_324(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_324(bParam0[iVar03], 2);
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
	Function_321();
	return 1;
}

void Function_321() //Position: 0x1170F / 71439
{
	if (!Function_322(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_322(int iParam0) //Position: 0x1174F / 71503
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_323() //Position: 0x1176B / 71531
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

void Function_324(var uParam0, int iParam1) //Position: 0x11796 / 71574
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_325() //Position: 0x117A7 / 71591
{
	if (!Function_322(128))
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

bool Function_326() //Position: 0x117E9 / 71657
{
	Function_329(&Local_4 + 4, 1200, 2, 0);
	Function_329(&Local_4 + 4, 977, 2, 0);
	Function_329(&Local_4 + 4, 379, 2, 0);
	Function_329(&Local_4 + 4, 981, 2, 0);
	Function_329(&Local_4 + 4, 380, 2, 0);
	Function_329(&Local_4 + 4, 1199, 2, 0);
	Function_329(&Local_4 + 4, 976, 2, 0);
	Function_327(&Local_4 + 4, "p_gen_detonator01x", 0, 0);
	Function_327(&Local_4 + 4, "p_gen_dynamiteCrate01x", 0, 0);
	Function_327(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_327(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_327(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_327(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_worried_n_any", 1, 0);
	if (Function_320(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

var Function_327(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x119B6 / 72118
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_328(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_324(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_328(var uParam0, int iParam1, int iParam2) //Position: 0x119EE / 72174
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_174(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_324(uParam0[iVar03], 4);
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

var Function_329(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x11AB2 / 72370
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_174(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_324(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_324(uParam0[iVar03], 8);
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

int Function_330() //Position: 0x11B82 / 72578
{
	switch (bLocal_686)
	{
		case 0x00000065:
			if (IS_ACTOR_VALID((*&Local_645 + 68)[02]))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR((*&Local_645 + 68)[02]);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_331() //Position: 0x11BBB / 72635
{
	switch (bLocal_686)
	{
		case 0x00000063:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_332(bLocal_678, -2291,93f, 21,84f, 4960,02f, &Local_645 + 124, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_332(StackVal, StackVal, bLocal_678, *(&Local_4 + 1308[16]), &Local_4 + 680[2], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_334(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_292(Global_34573);
			Function_332(StackVal, StackVal, bLocal_678, Function_292(Global_34573), &Local_688 + 20, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 1;
}

void Function_332(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x11C67 / 72807
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
				Function_333(bVar1, bParam0);
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

void Function_333(bool bParam0, bool bParam1) //Position: 0x11ED5 / 73429
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

void Function_334(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x11F4A / 73546
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
	Function_242();
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
				Function_292(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_292(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_335()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_335()));
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
	if (Function_322(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_322(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

var Function_335() //Position: 0x121F3 / 74227
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

void Function_336(bool bParam0) //Position: 0x12272 / 74354
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

void Function_337() //Position: 0x122B9 / 74425
{
	Local_645.f_80 = CREATE_ACTORSET_IN_LAYOUT(Local_645, "startingActorsset", 0);
	Local_645.f_84 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_645, "startingActors"));
	(*&Local_645 + 68)[02] = Function_222(Local_645, "player_wagon", 1199, 976, -2271,176f, 21,696f, 4935,798f, -3,812975f, -49,11642f, 2,950455f, 1, 976, 976, 976, 4);
	ADD_ACTORSET_MEMBER(Local_645.f_80, (*&Local_645 + 68)[02]);
	SQUAD_JOIN((*&Local_645 + 68)[02], Local_645.f_84);
	TASK_STAND_STILL((*&Local_645 + 68)[02], -1.0f, 0, 0);
	return;
}

void Function_338() //Position: 0x12379 / 74617
{
	if (iLocal_687 < 4 && iLocal_687 > 105)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "wagoncutfinished"))
		{
			Function_476();
			Function_471(StackVal, StackVal, "$/cutscene/REBEL04_END/REBEL04_END", &uLocal_881, *(&Global_3422[3840] + 52), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 0);
		}
		if (iLocal_687 <= 9)
		{
			STREAMING_LOAD_SCENE_EXT(-3290,108f, 7,545845f, 4176,784f, 2,954f, -137,38f, 0,005f, 1);
		}
		if (IS_OBJECT_VALID(bLocal_1164))
		{
			Function_470();
		}
		Function_468();
		Function_461(&bLocal_863, Local_4.f_784, Local_4.f_788, "Rebel04_vol_warning", "Rebel04_vol_fail", &bLocal_696, 1, bLocal_678, Local_4, 330, 1);
		if (!Function_460((*&Local_645 + 68)[02], 1, 1, 4294967295))
		{
			Function_231("Rebel04_fail_wagon_broke");
			bLocal_696 = true;
		}
		Function_458();
		if (iLocal_687 >= 11)
		{
			Function_471(StackVal, StackVal, "$/cutscene/REBEL04_END/REBEL04_END", &uLocal_881, *(&Local_4 + 1308[06]), 0, 75.0f, 150.0f, 2, 1, 1, 2, 0, 1);
		}
	}
	switch (iLocal_687)
	{
		case 0x00000000:
			Function_454(0);
			SET_ACTOR_HEALTH(bLocal_707, GET_ACTOR_MAX_HEALTH(bLocal_707));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_709[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				bLocal_708 = Function_453(StackVal, StackVal, *(&Local_4 + 1156[06]), 0, 1, 1);
				if (!Function_452(bLocal_708))
				{
					Function_451(&Local_679);
				}
				Function_449(9);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1156[06]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_707, *(&Local_4 + 1156[26]), 1, true, 1);
				Function_216(&iLocal_857);
				iLocal_687 = 1;
			}
			else
			{
				Function_216(&iLocal_857);
				iLocal_687 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_452(bLocal_708) || bLocal_708 != 4294967295)) && Function_448())
			{
				if (!IS_ACTORSET_VALID(Local_4.f_620))
				{
					Function_447();
				}
				Function_446(Local_4.f_620, -1.0f);
				Function_216(&iLocal_857);
				iLocal_687 = 2;
			}
			break;
		
		case 0x00000002:
			SET_DUST_LEVEL_MODIFIER(4294967295);
			if (iLocal_709[1])
			{
				if (IS_OBJECT_VALID(bLocal_1127))
				{
					Function_214(bLocal_1127);
				}
				ENABLE_VEHICLE_SEAT((*&Local_645 + 68)[02], false, 1);
				ENABLE_VEHICLE_SEAT((*&Local_645 + 68)[02], true, 1);
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1067))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_1067);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1064))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_1064);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1066))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_1066);
				}
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 1156[06]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_707, *(&Local_4 + 1156[26]), 1, true, 1);
				TASK_CLEAR(bLocal_707);
				TASK_STAND_STILL(bLocal_707, -1.0f, 0, 0);
				Function_337();
				Local_1046 = (*&Local_645 + 68)[02];
				Function_445((*&Local_645 + 68)[02]);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_645 + 68)[02], *(&Local_4 + 1156[46]), 1, true, 1);
				CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_784, 15);
				CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_784, 24);
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
			}
			Function_237(1);
			Function_439(StackVal, StackVal, Function_237(1), 1, Global_30633[2], Function_240(bLocal_686), 0);
			Function_216(&iLocal_857);
			iLocal_687 = 4;
			break;
		
		case 0x00000004:
			STREAMING_LOAD_BOUNDS(*(&Local_4 + 1692[36]), 200.0f, 0);
			if (!IS_OBJECT_VALID(bLocal_1070))
			{
				bLocal_1070 = Local_4.f_2552;
			}
			GET_OBJECT_POSITION(bLocal_1070, &vLocal_1030);
			if (!IS_GRINGO_VALID(bLocal_1131))
			{
				bLocal_1131 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_detonator", &vLocal_1030, 1.0f, 0);
			}
			GRINGO_ALLOW_ACTIVATION(bLocal_1131, true);
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
			GIVE_WEAPON_TO_ACTOR(bLocal_707, 19, false, 1, 1);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bLocal_707, 0);
			SET_ACTOR_VISION_MAX_RANGE(bLocal_707, 100.0f, 1);
			SET_ACTOR_VISION_FIELD_OF_VIEW(bLocal_707, 180.0f);
			SET_ACTOR_FACE_STYLE(bLocal_707, 2);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_707, 1);
			Function_437(8, 0, 1);
			bLocal_1130 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD_PRECISELY(StackVal, 0, &Local_4 + 1156[26], 4, 0, 0, 0, 1);
			TASK_DRAW_HOLSTER_WEAPON(false, 1);
			TASK_CROUCH(false, -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_707, bLocal_1130);
			TASK_SEQUENCE_RELEASE(bLocal_1130, 1);
			MEMORY_ALLOW_SHOOTING(bLocal_707, false);
			AI_GOAL_LOOK_CLEAR(bLocal_707);
			bLocal_1128 = false;
			Function_418();
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
			Function_417(1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
			Function_416(&iLocal_1083);
			Function_416(&iLocal_1132);
			Function_416(&iLocal_1135);
			Function_416(&iLocal_1138);
			Function_416(&iLocal_1141);
			Function_416(&iLocal_1147);
			Function_415(&(Local_927[317]));
			Function_216(&iLocal_857);
			iLocal_687 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_414();
				ADD_BLIP_FOR_OBJECT(Local_4.f_2552, 330, 0f, 2, 0);
				DECOR_SET_INT(Global_34573, "NumTNT", bLocal_1056);
				DECOR_SET_BOOL(Global_34573, "NoGringoCamera", true);
				Function_216(&iLocal_857);
				iLocal_687 = 8;
			}
			break;
		
		case 0x00000008:
			if (!DECOR_CHECK_EXIST(bLocal_678, "obj03"))
			{
				if (Function_276(&iLocal_857) < 10,5f || !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_413("Rebel04_obj03", 0x40f00000, 1, 2, 0, 0, 0);
					STOP_FORCE_LOOK_AT_COORD(bLocal_707);
					DECOR_SET_BOOL(bLocal_678, "obj03", true);
				}
			}
			else if (!HUD_IS_SHOWING_OBJECTIVE() && !DECOR_CHECK_EXIST(bLocal_678, "fillerlines"))
			{
				Function_412();
				DECOR_SET_BOOL(bLocal_678, "fillerlines", true);
			}
			if ((GET_CURRENT_GRINGO(Global_34573) != bLocal_1131 || Function_276(&iLocal_857) < 30.0f) || !Function_410(Global_34573, Local_4.f_2552, 15.0f))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_645 + 68)[02], *(&Local_4 + 1156[46]), 1, true, 1);
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_4.f_2552));
				if (!DECOR_CHECK_EXIST(bLocal_678, "fillerlines") && !IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_412();
					DECOR_SET_BOOL(bLocal_678, "fillerlines", true);
				}
				iLocal_1160 = 0;
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(StackVal, Local_4.f_2488, 2, 1, 1, 1, false);
				AI_ACTOR_FORCE_SPEED(StackVal, 2);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(false, Local_1036), 2);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(true, Local_1036), 2);
				SET_ACTOR_SPEED(StackVal, 6.0f);
				SET_ACTOR_SPEED(Local_1036, 6.0f);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, Local_1036), 6.0f);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(true, Local_1036), 6.0f);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(StackVal, Local_4.f_2496, 2, 1, 1, 1, false);
				AI_ACTOR_FORCE_SPEED(StackVal, 2);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(false, Local_1041), 2);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(true, Local_1041), 2);
				SET_ACTOR_SPEED(StackVal, 6.0f);
				SET_ACTOR_SPEED(Local_1041, 6.0f);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, Local_1041), 6.0f);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(true, Local_1041), 6.0f);
				AI_ACTOR_FORCE_SPEED((*&Local_4 + 552)[02], 2);
				AI_ACTOR_FORCE_SPEED((*&Local_4 + 552)[12], 2);
				AI_ACTOR_FORCE_SPEED((*&Local_4 + 488)[02], 2);
				AI_ACTOR_FORCE_SPEED((*&Local_4 + 488)[12], 2);
				AI_ACTOR_FORCE_SPEED((*&Local_4 + 512)[02], 2);
				AI_ACTOR_FORCE_SPEED((*&Local_4 + 512)[12], 2);
				AI_ACTOR_FORCE_SPEED((*&Local_4 + 512)[22], 2);
				AI_ACTOR_FORCE_SPEED((*&Local_4 + 512)[32], 2);
				SET_ACTOR_SPEED((*&Local_4 + 552)[02], 6.0f);
				SET_ACTOR_SPEED((*&Local_4 + 552)[12], 6.0f);
				SET_ACTOR_SPEED((*&Local_4 + 488)[02], 6.0f);
				SET_ACTOR_SPEED((*&Local_4 + 488)[12], 6.0f);
				SET_ACTOR_SPEED((*&Local_4 + 512)[02], 6.0f);
				SET_ACTOR_SPEED((*&Local_4 + 512)[12], 6.0f);
				SET_ACTOR_SPEED((*&Local_4 + 512)[22], 6.0f);
				SET_ACTOR_SPEED((*&Local_4 + 512)[32], 6.0f);
				Function_406(0, 1);
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_REBEL04", &uLocal_1203);
				Function_334(0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1);
				Local_688.f_16 = Function_402(bLocal_678, 0, 1, 0, 0);
				if (!IS_OBJECT_VALID(Local_688.f_16))
				{
					LOG_ERROR("Marshal01_Outro - Failed to CREATE_REBEL04_CONVOYREVEAL_CUTSCENE Marshal01_Outro_cutscene");
				}
				CUTSCENEOBJECT_SET_RECENTER_GAMECAM(Local_688.f_16, 1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_688.f_16, 0);
				DECOR_SET_FLOAT(bLocal_678, "createdconvoycamera", GET_CURRENT_GAME_TIME());
				STREAMING_UNLOAD_SCENE();
				Function_292(Global_34573);
				STREAMING_LOAD_BOUNDS_EXT(1, Function_292(Global_34573), 5.0f, 1);
				Function_216(&iLocal_857);
				iLocal_687 = 9;
			}
			break;
		
		case 0x00000009:
			if (!DECOR_CHECK_EXIST(Global_34573, "wagoncutfinished"))
			{
				if (Function_276(&iLocal_857) < 1.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "createdconvoycamera")) < 4,9f)
					{
						Function_401();
						AI_STOP_IGNORING_ACTORS();
						ADD_BLIP_FOR_ACTOR(Local_1036, 322, 0, 2, 0);
						ADD_BLIP_FOR_ACTOR(Local_1041, 322, 0, 2, 0);
						Function_400();
						DECOR_SET_BOOL(Global_34573, "wagoncutfinished", true);
						Function_287(2, 1, 0, 1, 1, 1, 1, 1, 1, 1);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
						TASK_FOLLOW_OBJECT_ALONG_PATH(StackVal, StackVal, Local_4.f_2488, 40.0f, 1, 0);
						TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_4 + 512)[02], Local_1041, Local_4.f_2488, -20.0f, 1, -2.0f);
						TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_4 + 512)[12], Local_1041, Local_4.f_2488, -20.0f, 1, 2.0f);
					}
					else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "createdconvoycamera")) < 5,5f && IS_OBJECT_VALID(Local_688.f_16))
					{
						DESTROY_OBJECT(Local_688.f_16);
					}
					else if (IS_ACTION_NODE_PLAYING(Global_34573, "dynamite/Detonator/idle_high"))
					{
						Function_292(Global_34573);
						STREAMING_LOAD_BOUNDS_EXT(1, Function_292(Global_34573), 5.0f, 1);
						Function_396();
					}
				}
			}
			else if (!DECOR_CHECK_EXIST(bLocal_678, "obj03b"))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !Function_133())
				{
					Function_413("Rebel04_obj03b", 0x40f00000, 1, 2, 0, 0, 0);
					DECOR_SET_FLOAT(bLocal_678, "obj03b", GET_CURRENT_GAME_TIME());
				}
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "obj03b")) < 1.0f && !DECOR_CHECK_EXIST(bLocal_678, "ndetonhelp"))
			{
				Function_132("Rebel04_obj03_help_detonator", 10.0f, 1, 0, 2, 1, 0);
				DECOR_SET_BOOL(bLocal_678, "ndetonhelp", true);
			}
			Function_386();
			Function_458();
			if (bLocal_1128)
			{
				if (iLocal_1057 >= 0)
				{
					if ((!IS_OBJECT_VALID(FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon01_piece07")) && !IS_OBJECT_VALID(FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon02_piece07"))) && !IS_OBJECT_VALID(FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon03_piece07")))
					{
						Function_385();
						LOG_ERROR("MANAGE_CARAVAN_PRE_ATTACK");
					}
					else
					{
						Function_384();
					}
				}
				else
				{
					Function_383();
				}
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_707);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_707, 0);
				bLocal_1130 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2532, 4, 0, 0, 1, false);
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_707, bLocal_1130);
				TASK_SEQUENCE_RELEASE(bLocal_1130, 1);
				SET_ACTOR_STAY_WITHIN_VOLUME(bLocal_707, (*&Local_4 + 744)[3], 2, true);
				Function_437(8, 0, 1);
				Function_216(&iLocal_857);
				iLocal_687 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_374();
			Function_458();
			Function_367(5.0f);
			if (Function_366())
			{
				Function_365();
				DYNAMICMIXER_DETRIGGERSTATE(uLocal_1203, 1);
				Function_364(bLocal_1052, 322, 100.0f, 0);
				if (Function_363(bLocal_1054, 1, 1, 1, 1, 0) >= 0)
				{
					SQUAD_GOALS_CLEAR(bLocal_1054);
					Function_362(bLocal_1054);
					SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1054, true, 1, 4294967295);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
					Function_361(bLocal_1054, 322, 1,25f);
				}
				Function_216(&iLocal_857);
				iLocal_687 = 11;
			}
			break;
		
		case 0x0000000B:
			if ((IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 744)[5]) || IS_ACTOR_SHOOTING(Global_34573)) && !DECOR_CHECK_EXIST(bLocal_678, "gunfightmusictrigger"))
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
				DECOR_SET_BOOL(bLocal_678, "gunfightmusictrigger", true);
			}
			if (Function_360(bLocal_1052, 1, 1, 1, 1, 0) != 1 && !DECOR_CHECK_EXIST(bLocal_678, "gunfightlowmusictrigger"))
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
				DECOR_SET_BOOL(bLocal_678, "gunfightlowmusictrigger", true);
			}
			Function_367(5.0f);
			if (Function_360(bLocal_1052, 1, 1, 1, 1, 0) >= 2 && !DECOR_CHECK_EXIST(bLocal_678, "gunfight_low"))
			{
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
				DECOR_SET_BOOL(bLocal_678, "gunfight_low", true);
			}
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!Function_278(&iLocal_1098))
				{
					Function_416(&iLocal_1098);
					if (Function_359())
					{
						Function_365();
					}
					else
					{
						Function_358();
					}
				}
				else if (Function_276(&iLocal_1098) < 15.0f)
				{
					if (Function_359())
					{
						Function_365();
					}
					else
					{
						Function_358();
					}
					Function_216(&iLocal_1098);
				}
			}
			if (Function_353())
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
				DECOR_REMOVE(Global_34573, "NumTNT");
				Function_352();
				if (IS_GRINGO_VALID(bLocal_1131))
				{
					GRINGO_ALLOW_ACTIVATION(bLocal_1131, false);
				}
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_345(&(Local_927[317]), Local_4.f_624, "RebelSoldier", 0, 0x5f5e100, 1);
				Function_342();
				Function_437(8, 1, 1);
				ACTOR_START_FORCE_HOLSTER(bLocal_707, 0, 0);
				Function_216(&iLocal_857);
				iLocal_687 = 105;
			}
			break;
		
		case 0x00000069:
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_276(&iLocal_857) < 3.0f) || Function_276(&iLocal_857) < 5.0f)
			{
				Function_216(&iLocal_857);
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				iLocal_687 = 106;
			}
			break;
		
		case 0x0000006A:
			if (HUD_IS_FADED())
			{
				TASK_STAND_STILL(bLocal_707, -1.0f, 0, 0);
				Function_437(8, 0, 1);
				Function_340(Local_4.f_620);
				if (IS_OBJECTSET_VALID(bLocal_1052))
				{
					Function_339(bLocal_1052);
				}
				if (IS_OBJECTSET_VALID(bLocal_1053))
				{
					Function_339(bLocal_1053);
				}
				iLocal_709[2] = 1;
				ACTOR_START_FORCE_HOLSTER(Global_34573, 0, 0);
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				if (IS_OBJECT_VALID(bLocal_1164))
				{
					END_CURRENT_CAMERA_SHOT_TRANSITION(bLocal_1164);
					DESTROY_OBJECT(bLocal_1164);
				}
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bLocal_707);
				STREAMING_UNLOAD_SCENE();
				Function_216(&iLocal_857);
				bLocal_686 = 101;
				iLocal_687 = 2;
			}
			break;
	}
	return;
}

void Function_339(bool bParam0) //Position: 0x13365 / 78693
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(bParam0) - 1))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0);
		if (IS_OBJECT_VALID(bVar1))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_340(bool bParam0) //Position: 0x133AA / 78762
{
	bool bVar0;
	
	Function_341(&bParam0);
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
			{
				RELEASE_ACTOR(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_341(var uParam0) //Position: 0x133F2 / 78834
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*uParam0) - 1))
		{
			if (!IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*uParam0, bVar0)) || !IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(*uParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(*uParam0, GET_ACTOR_FROM_ACTORSET(*uParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_342() //Position: 0x1344B / 78923
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_AllDefeated", "Rebel04_AllDefeated", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_343(int iParam0) //Position: 0x1349A / 79002
{
	Function_344(0, Global_34573, iParam0, 0);
	Function_344(1, bLocal_707, iParam0, 0);
	Function_344(2, (*&Local_4 + 576)[02], iParam0, 0);
	return;
}

void Function_344(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x134C3 / 79043
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

int Function_345(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x134E8 / 79080
{
	if (!Function_351(iParam0, uParam1))
	{
		return 0;
	}
	if (!Function_350(iParam0, bParam2))
	{
		return 0;
	}
	Function_349(iParam0, iParam3);
	iParam0->f_40 = 0;
	Function_346(iParam0, iParam4, iParam5);
	return 1;
}

void Function_346(var uParam0, int iParam1, int iParam2) //Position: 0x13524 / 79140
{
	if (iParam1 != 100000000)
	{
		Function_348(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_347(uParam0, iParam2);
	}
	return;
}

void Function_347(int iParam0, bool bParam1) //Position: 0x13547 / 79175
{
	iParam0->f_40 = 0;
	Function_348(iParam0, 2, bParam1);
	Function_348(iParam0, 4, bParam1);
	Function_348(iParam0, 8, bParam1);
	Function_348(iParam0, 16, bParam1);
	Function_348(iParam0, 32, bParam1);
	Function_348(iParam0, 64, bParam1);
	Function_348(iParam0, 128, bParam1);
	Function_348(iParam0, 256, bParam1);
	Function_348(iParam0, 512, bParam1);
	Function_348(iParam0, 1024, bParam1);
	return;
}

void Function_348(int iParam0, int iParam1, bool bParam2) //Position: 0x135AD / 79277
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

void Function_349(var uParam0, int iParam1) //Position: 0x135E9 / 79337
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_350(int iParam0, bool bParam1) //Position: 0x135F5 / 79349
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

bool Function_351(int iParam0, bool bParam1) //Position: 0x1367E / 79486
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

void Function_352() //Position: 0x1380A / 79882
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1065))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_1065);
	}
	if (IS_BLIP_VALID(bLocal_1101))
	{
		REMOVE_BLIP(bLocal_1101);
	}
	if (IS_BLIP_VALID(bLocal_1102))
	{
		REMOVE_BLIP(bLocal_1102);
	}
	if (IS_BLIP_VALID(bLocal_1103))
	{
		REMOVE_BLIP(bLocal_1103);
	}
	if (IS_BLIP_VALID(bLocal_1104))
	{
		REMOVE_BLIP(bLocal_1104);
	}
	if (IS_BLIP_VALID(bLocal_1105))
	{
		REMOVE_BLIP(bLocal_1105);
	}
	if (IS_OBJECT_VALID(bLocal_1059))
	{
		DESTROY_OBJECT(bLocal_1059);
	}
	if (IS_OBJECT_VALID(bLocal_1060))
	{
		DESTROY_OBJECT(bLocal_1060);
	}
	if (IS_OBJECT_VALID(bLocal_1061))
	{
		DESTROY_OBJECT(bLocal_1061);
	}
	if (IS_OBJECT_VALID(bLocal_1062))
	{
		DESTROY_OBJECT(bLocal_1062);
	}
	if (IS_OBJECT_VALID(bLocal_1063))
	{
		DESTROY_OBJECT(bLocal_1063);
	}
	return;
}

bool Function_353() //Position: 0x138B5 / 80053
{
	if (!Function_366())
	{
		return 0;
	}
	if (Function_354((*&Local_4 + 488)[02], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_354((*&Local_4 + 488)[12], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_354((*&Local_4 + 512)[02], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_354((*&Local_4 + 512)[12], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_354((*&Local_4 + 512)[22], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_354((*&Local_4 + 512)[32], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_354((*&Local_4 + 552)[02], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_354((*&Local_4 + 552)[12], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool Function_354(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x13985 / 80261
{
	bool bVar0;
	
	if (bParam1)
	{
		Function_357(&bVar0, 1);
	}
	if (bParam2)
	{
		Function_357(&bVar0, 2);
	}
	if (bParam3)
	{
		Function_357(&bVar0, 4);
	}
	if (bParam4)
	{
		Function_357(&bVar0, 8);
	}
	if (bParam5)
	{
		Function_357(&bVar0, 1024);
	}
	if (bParam7)
	{
		Function_357(&bVar0, 16);
	}
	if (bParam8)
	{
		Function_357(&bVar0, 32);
	}
	if (bParam6)
	{
		Function_357(&bVar0, 1048576);
	}
	return Function_355(uParam0, bVar0);
}

int Function_355(bool bParam0, int iParam1) //Position: 0x139F4 / 80372
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (Function_356(iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(bParam0, 3) || IS_ACTOR_CRIPPLED(bParam0, 4))
				{
					return 0;
				}
			}
			if (Function_356(iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					return 0;
				}
			}
			if (Function_356(iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(bParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_356(iParam1, 8))
			{
				if (UNK_0x7A207FFE(bParam0))
				{
					return 0;
				}
			}
			if (Function_356(iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(bParam0) && !IS_ACTOR_RIDING_VEHICLE(bParam0))
				{
					return 0;
				}
			}
			if (Function_356(iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(bParam0))
				{
					return 0;
				}
			}
			if (Function_356(iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
				{
					return 0;
				}
			}
			if (Function_356(iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(bParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_356(var uParam0, int iParam1) //Position: 0x13ACD / 80589
{
	return (uParam0 && iParam1) == 0;
}

void Function_357(bool bParam0, bool bParam1) //Position: 0x13ADA / 80602
{
	Function_76(bParam0, bParam1);
	return;
}

void Function_358() //Position: 0x13AE7 / 80615
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_LuisaTaunts", "Rebel04_LuisaTaunts", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_359() //Position: 0x13B36 / 80694
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

int Function_360(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x13B49 / 80713
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	if (IS_OBJECTSET_VALID(bParam0))
	{
		bVar3 = false;
		while (bVar3 < (GET_OBJECTSET_SIZE(bParam0) - 1))
		{
			bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bParam0);
			if (IS_OBJECT_VALID(bVar2))
			{
				if (GET_OBJECT_TYPE(bVar2) == 15)
				{
					bVar1 = GET_ACTOR_FROM_OBJECT(bVar2);
					if (IS_ACTOR_VALID(bVar1))
					{
						if (IS_ACTOR_ALIVE(bVar1))
						{
							bVar4 = true;
							if (bParam1)
							{
								if (IS_ACTOR_CRIPPLED(bVar1, 3) || IS_ACTOR_CRIPPLED(bVar1, 4))
								{
									bVar4 = false;
								}
							}
							if (bParam2)
							{
								if (IS_ACTOR_HOGTIED(bVar1))
								{
									bVar4 = false;
								}
							}
							if (bParam3)
							{
								if (IS_ACTOR_BEING_DRAGGED(bVar1, 1.0f))
								{
									bVar4 = false;
								}
							}
							if (bParam4)
							{
								bParam4 = bParam4;
							}
							if (bParam5)
							{
								if (!IS_ACTOR_RIDING(bVar1) && !IS_ACTOR_RIDING_VEHICLE(bVar1))
								{
									bVar4 = false;
								}
							}
							if (bVar4)
							{
								iVar0++;
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	return iVar0;
}

void Function_361(bool bParam0, bool bParam1, float fParam2) //Position: 0x13C10 / 80912
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0))))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)));
			}
			SET_BLIP_MAX_DISTANCE(ADD_BLIP_FOR_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), bParam1, 0, 2, 0), fParam2);
		}
		bVar0++;
	}
	return;
}

void Function_362(bool bParam0) //Position: 0x13C74 / 81012
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

int Function_363(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x13CA6 / 81062
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	iVar3 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				bVar2 = true;
				if (bParam1)
				{
					if (IS_ACTOR_CRIPPLED(bVar1, 3) || IS_ACTOR_CRIPPLED(bVar1, 4))
					{
						bVar2 = false;
					}
				}
				if (bParam2)
				{
					if (IS_ACTOR_HOGTIED(bVar1))
					{
						bVar2 = false;
					}
				}
				if (bParam3)
				{
					if (IS_ACTOR_BEING_DRAGGED(bVar1, 1.0f))
					{
						bVar2 = false;
					}
				}
				if (bParam4)
				{
					if (UNK_0x7A207FFE(bVar1))
					{
						bVar2 = false;
					}
				}
				if (bParam5)
				{
					if (!IS_ACTOR_RIDING(bVar1) && !IS_ACTOR_RIDING_VEHICLE(bVar1))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					iVar3++;
				}
			}
		}
		bVar0++;
	}
	return iVar3;
}

void Function_364(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x13D60 / 81248
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(bParam0))
	{
		bVar1 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0));
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_HUMAN(bVar1))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
				}
				if (bParam3)
				{
					SET_BLIP_MAX_DISTANCE(ADD_BLIP_FOR_ACTOR(bVar1, bParam1, 0, 2, 0), fParam2);
				}
				else
				{
					ADD_BLIP_FOR_ACTOR(bVar1, bParam1, 0, 2, 0);
				}
			}
		}
		bVar0++;
	}
}

void Function_365() //Position: 0x13DDB / 81371
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_LuisaShoutsEnc", "Rebel04_LuisaShoutsEnc", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_366() //Position: 0x13E30 / 81456
{
	if (Function_354((*&Local_4 + 448)[12], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	if (Function_354((*&Local_4 + 448)[32], 1, 1, 1, 1, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

void Function_367(float fParam0) //Position: 0x13E67 / 81511
{
	Function_369(StackVal, StackVal, StackVal, StackVal, Local_1036, &bLocal_1124, fParam0);
	Function_369(StackVal, StackVal, StackVal, StackVal, Local_1041, &bLocal_1125, fParam0);
	if (IS_ACTOR_VALID(Local_1036))
	{
		if ((StackVal || !IS_ACTOR_ALIVE(StackVal) == GET_ACTOR_IN_VEHICLE_SEAT(Local_1036, false)) && Function_368(Local_1036, bLocal_1054, 1))
		{
			SQUAD_LEAVE(Local_1036);
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(Local_1036)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(Local_1036));
		}
	}
	if (IS_ACTOR_VALID(Local_1041))
	{
		if ((StackVal || !IS_ACTOR_ALIVE(StackVal) == GET_ACTOR_IN_VEHICLE_SEAT(Local_1041, false)) && Function_368(Local_1041, bLocal_1054, 1))
		{
			SQUAD_LEAVE(Local_1041);
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(Local_1041)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(Local_1041));
		}
	}
	return;
}

int Function_368(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13F19 / 81689
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

void Function_369(struct<17> Param0) //Position: 0x13F59 / 81753
{
	struct<5> Var0;
	
	if (!*bParam5)
	{
		if (IS_ACTOR_VALID(Param0))
		{
			if (DECOR_CHECK_EXIST(Param0, "kersploded"))
			{
				if (DECOR_CHECK_EXIST(Param0, "teleported"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Param0, "kersploded")) < fParam6)
					{
						if (IS_OBJECT_VALID(StackVal))
						{
							DESTROY_OBJECT(StackVal);
						}
						if (IS_OBJECT_VALID(Param0.f_12))
						{
							DESTROY_OBJECT(Param0.f_12);
						}
						if (IS_OBJECT_VALID(Param0.f_16))
						{
							DESTROY_OBJECT(Param0.f_16);
						}
						KILL_ACTOR(Param0);
						*bParam5 = 1;
						if (!bLocal_1124 || !bLocal_1125)
						{
							if (Function_359())
							{
								Function_373();
							}
							else
							{
								Function_372();
							}
						}
					}
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Param0, "kersploded")) < 0,1f)
				{
					Function_371(Param0);
					Var0 = { StackVal, StackVal, Function_371(Param0) };
					Var0.f_4 = (StackVal - 10.0f);
					TELEPORT_ACTOR(Param0, &Var0, 1, 1, 1);
					DECOR_SET_BOOL(Param0, "teleported", true);
				}
				else
				{
					if (!IS_ACTOR_ALIVE(StackVal))
					{
						*bParam5 = 1;
					}
					else if (StackVal != GET_ACTOR_IN_VEHICLE_SEAT(Param0, false))
					{
						*bParam5 = 1;
					}
					if (*bParam5)
					{
						if (!bLocal_1124 && !bLocal_1125)
						{
							Function_370();
						}
					}
				}
			}
		}
		else
		{
			*bParam5 = 1;
		}
	}
}

void Function_370() //Position: 0x140A8 / 82088
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_SoldAband3Wag", "Rebel04_SoldAband3Wag", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

vector3 Function_371(bool bParam0) //Position: 0x140FB / 82171
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

void Function_372() //Position: 0x14165 / 82277
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_DestroysSubsWags", "Rebel04_DestroysSubsWags", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_373() //Position: 0x141BE / 82366
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_1WagRemains", "Rebel04_1WagRemains", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_374() //Position: 0x1420D / 82445
{
	if (bLocal_1128)
	{
		if (!Function_278(&iLocal_1089))
		{
			Function_416(&iLocal_1089);
		}
		if (Function_276(&iLocal_1089) < 1.0f)
		{
			Function_382(Local_4.f_572);
			Function_382(Local_4.f_508);
			Function_382(Local_4.f_548);
			if (!iLocal_1160 && (Function_360(bLocal_1052, 1, 1, 1, 1, 0) >= 5 || (GET_CURRENT_GRINGO(Global_34573) == bLocal_1131 && (Function_380(bLocal_1053, Global_34573, 100.0f) || Function_380(bLocal_1052, Global_34573, 100.0f)))))
			{
				Function_364(bLocal_1052, 322, 100.0f, 0);
				Function_364(bLocal_1053, 322, 100.0f, 0);
				iLocal_1160 = 1;
			}
			Function_216(&iLocal_1089);
		}
		Function_377();
		Function_375();
	}
	if (!DECOR_CHECK_EXIST(bLocal_678, "gunfighttrigger"))
	{
	}
	if (IS_ACTOR_VALID(Local_1036))
	{
		if (IS_ACTOR_VALID(Local_1036) && IS_ACTOR_IN_VOLUME(Local_1036, (*&Local_4 + 744)[4]))
		{
			Function_231("Rebel04_fail_wagons_escaped");
			bLocal_696 = true;
		}
	}
	if (IS_ACTOR_VALID(Local_1041))
	{
		if (IS_ACTOR_IN_VOLUME(Local_1041, (*&Local_4 + 744)[4]))
		{
			Function_231("Rebel04_fail_wagons_escaped");
			bLocal_696 = true;
		}
	}
	return;
}

void Function_375() //Position: 0x14359 / 82777
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 2.0f, 0.0f };
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon01_piece01"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon01_piece02"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon01_piece03"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon01_piece04"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon01_piece05"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon01_piece06"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon02_piece01"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon02_piece02"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon02_piece03"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon02_piece04"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon02_piece05"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon02_piece06"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon03_piece01"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon03_piece02"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon03_piece03"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon03_piece04"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon03_piece05"), vVar0);
	Function_376(StackVal, StackVal, FIND_OBJECT_IN_LAYOUT(bLocal_678, "wagon03_piece06"), vVar0);
	return;
}

void Function_376(bool bParam0, struct<5> Param1) //Position: 0x14594 / 83348
{
	bool bVar0;
	vector3 vVar1;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (!DECOR_CHECK_EXIST(bParam0, "nactivated"))
		{
			bVar0 = GET_PHYSINST_FROM_OBJECT(bParam0);
			if (IS_PHYSINST_VALID(bVar0))
			{
				if (IS_PHYSINST_IN_LEVEL(bVar0) && !IS_PHYSINST_ACTIVE(bVar0))
				{
					ACTIVATE_PHYSINST(bVar0);
					DECOR_SET_BOOL(bParam0, "nactivated", true);
					GET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(bParam0), &vVar1);
					vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Param1, vVar1, StackVal) };
					if (Param1 < 0.0f)
					{
						SET_PROP_VELOCITY_ON_AXIS(GET_PHYSINST_FROM_OBJECT(bParam0), &vVar1, 0);
					}
					else if (StackVal < 0.0f)
					{
						SET_PROP_VELOCITY_ON_AXIS(GET_PHYSINST_FROM_OBJECT(bParam0), &vVar1, 2);
					}
				}
			}
		}
	}
}

void Function_377() //Position: 0x14632 / 83506
{
	if (ACTORS_IN_RANGE(Global_34573, bLocal_707, 30.0f) && !Function_133())
	{
		if (IS_ACTOR_VALID(Local_1036) && !bLocal_1124)
		{
			if (!Function_460(Local_1036, 1, 1, 4294967295))
			{
				Function_378(StackVal, Local_1036);
				bLocal_1124 = true;
			}
		}
		if (IS_ACTOR_VALID(Local_1041) && !bLocal_1125)
		{
			if (!Function_460(Local_1041, 1, 1, 4294967295))
			{
				Function_378(StackVal, Local_1041);
				bLocal_1125 = true;
			}
		}
	}
	return;
}

void Function_378(bool bParam0, bool bParam1) //Position: 0x146A2 / 83618
{
	REMOVE_OBJECT_FROM_OBJECTSET(bParam0, bLocal_1053);
	if (IS_ACTOR_ALIVE(bParam1))
	{
		if (IS_ACTOR_RIDING_VEHICLE(bParam1))
		{
			TASK_VEHICLE_LEAVE(bParam1);
		}
		ADD_OBJECT_TO_OBJECTSET(bParam1, bLocal_1052);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bParam1, -1.0f);
	}
	switch (GET_OBJECTSET_SIZE(bLocal_1053))
	{
		case 0x00000002:
			Function_373();
			break;
		
		case 0x00000001:
			Function_379();
			break;
	}
	return;
}

void Function_379() //Position: 0x146F7 / 83703
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_2WagsRemain", "Rebel04_2WagsRemain", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_380(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14746 / 83782
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(bParam0) - 1))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0);
		if (IS_OBJECT_VALID(bVar1))
		{
			if (GET_OBJECT_TYPE(bVar1) == 15)
			{
				bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (!IS_ACTOR_VEHICLE(bVar2))
					{
						if (IS_ACTOR_ALIVE(bVar2) && Function_381(bVar2, bParam1, bParam2))
						{
							return 1;
						}
					}
					if (Function_381(bVar2, bParam1, bParam2))
					{
						return 1;
					}
				}
			}
			if (Function_410(bParam1, bVar1, bParam2))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_381(bool bParam0, bool bParam1, bool bParam2) //Position: 0x147CE / 83918
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

void Function_382(bool bParam0) //Position: 0x148DF / 84191
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (((IS_ACTOR_VALID(bVar1) && !IS_ACTOR_RIDING(bVar1)) && !GET_TASK_STATUS(bVar1, 50) != 1) && DECOR_CHECK_EXIST(bVar1, "calvary"))
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar1, -1.0f);
			}
			bVar0++;
		}
	}
	return;
}

void Function_383() //Position: 0x1493C / 84284
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_WagonOverDynamit", "Rebel04_WagonOverDynamit", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_384() //Position: 0x14995 / 84373
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BlowsUp1Wag", "Rebel04_BlowsUp1Wag", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_385() //Position: 0x149E4 / 84452
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_DetonatesEarly", "Rebel04_DetonatesEarly", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_386() //Position: 0x14A39 / 84537
{
	int iVar0;
	bool bVar1;
	
	if (!bLocal_1128)
	{
		if (!Function_278(&iLocal_1089))
		{
			Function_416(&iLocal_1089);
		}
		iVar0 = 0;
		if (Function_276(&iLocal_1089) < 1.0f)
		{
			if (Function_395(bLocal_1053, &Local_4 + 744[6]))
			{
				iVar0 = 1;
			}
			if (Function_380(bLocal_1053, Global_34573, 25.0f) && Function_394(Local_4.f_572, Global_34573, 3212836864))
			{
				iVar0 = 1;
			}
			Function_216(&iLocal_1089);
		}
		if ((iLocal_1057 < 0 || Function_393(Global_34573, 1)) || iVar0)
		{
			AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(1);
			AI_SET_ALLOW_HOSTILE_ATTACK_AI(1);
			MEMORY_ALLOW_SHOOTING(bLocal_707, true);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bLocal_707, &Local_4 + 1156[26], 3212836864);
			Function_406(1, 0);
			SET_PATH_LOOPING(Local_4.f_2508, 1);
			SET_PATH_LOOPING(Local_4.f_2512, 1);
			SET_PATH_LOOPING(Local_4.f_2516, 1);
			Function_387(Local_4.f_572, 1);
			Function_387(Local_4.f_508, 1);
			Function_387(Local_4.f_548, 1);
			MEMORY_ATTACK_ON_SIGHT(StackVal, 0);
			MEMORY_ATTACK_ON_SIGHT(StackVal, 0);
			if (!Function_354(StackVal, 1, 1, 1, 1, 0, 0, 0, 0))
			{
				if (Function_354(StackVal, 1, 1, 1, 1, 0, 0, 0, 0))
				{
					bVar1 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, 5.0f, 0, 0);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2496, 4, 1, 0, 1, false);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(StackVal, bVar1);
					TASK_SEQUENCE_RELEASE(bVar1, 1);
				}
			}
			else
			{
				if (Function_354(StackVal, 1, 1, 1, 1, 0, 0, 0, 0))
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(StackVal, Local_4.f_2488, 4, 1, 1, 1, false);
				}
				if (Function_354(StackVal, 1, 1, 1, 1, 0, 0, 0, 0))
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(StackVal, Local_4.f_2496, 4, 1, 1, 1, false);
				}
			}
			bLocal_1128 = true;
		}
	}
	return;
}

void Function_387(bool bParam0, bool bParam1) //Position: 0x14BD6 / 84950
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		SQUAD_GOALS_CLEAR(bParam0);
		Function_362(bParam0);
		SQUAD_SET_FACTION(bParam0, 19);
		Function_391(bParam0, Local_4.f_624, 4);
		Function_390(bParam0, Global_34573, 4);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(bParam0, 0);
		Function_361(bParam0, 322, 1,25f);
		Function_389(bParam0, 1);
		Function_388(bParam0, 150.0f, 180.0f);
		if (bParam1)
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (IS_ACTOR_RIDING(bVar1))
					{
						if (RAND_INT_RANGE(false, 300000) >= 200000)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bVar1, Local_4.f_2508, 4, 0, 0, 1, false);
						}
						else if (RAND_INT_RANGE(false, 300000) >= 100000)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bVar1, Local_4.f_2512, 4, 0, 0, 1, false);
						}
						else
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bVar1, Local_4.f_2516, 4, 0, 0, 1, false);
						}
						DECOR_SET_BOOL(bVar1, "calvary", true);
					}
					else
					{
						SQUAD_LEAVE(bVar1);
						ADD_OBJECT_TO_OBJECTSET(bVar1, bLocal_1052);
						TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar1, -1.0f);
					}
				}
				bVar0++;
			}
		}
		else
		{
			SQUAD_GOAL_ADD_COMBAT(bParam0, 0, 4294967295, 0);
			bVar2 = false;
			while (bVar2 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar2);
				if (IS_ACTOR_VALID(bVar3))
				{
					if (!IS_ACTOR_RIDING(bVar3))
					{
						bVar4 = FIND_NEAREST_COVER_LOCATION(StackVal, &Local_4 + 1972[bVar26], 2.0f, 90.0f, 7);
						bVar5 = TASK_SEQUENCE_OPEN();
						if (!IS_ACTOR_IN_VOLUME(bVar3, (*&Local_4 + 744)[3]))
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2520, 4, 0, 0, 1, false);
						}
						if (IS_COVER_LOCATION_VALID(bVar4))
						{
							TASK_SHOOT_ENEMIES_FROM_COVER(false, bVar4, -1.0f, 1086324736);
						}
						else
						{
							bVar4 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(bLocal_678, Function_53(), *(&Local_4 + 1972[bVar26]), *(&Local_4 + 1972[bVar26] + 12), 4));
							TASK_SHOOT_ENEMIES_FROM_COVER(false, bVar4, -1.0f, 1086324736);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar3, 1, false);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar3, 2, false);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar3, 3, false);
						}
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bVar3, bVar5);
						TASK_SEQUENCE_RELEASE(bVar5, 1);
						SET_ACTOR_UPDATE_PRIORITY(bVar3, false);
						TASK_PRIORITY_SET(bVar3, true);
					}
				}
				bVar2++;
			}
		}
	}
	return;
}

void Function_388(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14DE0 / 85472
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
			if (bParam1 <= 0.0f)
			{
				SET_ACTOR_VISION_MAX_RANGE(bVar1, bParam1, 1);
			}
			if (bParam2 <= 0.0f)
			{
				SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_389(bool bParam0, bool bParam1) //Position: 0x14E3B / 85563
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

void Function_390(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14E83 / 85635
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

void Function_391(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14EC8 / 85704
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
			Function_392(bVar1, bParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_392(bool bParam0, bool bParam1, bool bParam2) //Position: 0x14F17 / 85783
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

var Function_393(bool bParam0, bool bParam1) //Position: 0x14F61 / 85857
{
	int iVar0;
	
	iVar0 = 0;
	if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(bParam0)) > 1.0f)
	{
		switch (UNK_0xDB679ED9(GET_WEAPON_IN_HAND(bParam0)))
		{
			case 0x0000002F:
				if (bParam1)
				{
					iVar0 = 1;
				}
				break;
			
			case 0x00000029:
				iVar0 = 1;
				break;
			
			case 0x00000027:
				iVar0 = 1;
				break;
			
			case 0x00000028:
				iVar0 = 1;
				break;
			
			case 0x0000002A:
				iVar0 = 1;
				break;
			
			case 0x0000002B:
				iVar0 = 1;
				break;
			
			case 0x0000002C:
				iVar0 = 1;
				break;
			
			case 0x00000031:
				iVar0 = 1;
				break;
			}
	}
	return iVar0;
}

int Function_394(bool bParam0, bool bParam1, float fParam2) //Position: 0x14FEC / 85996
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	bVar6 = false;
	bVar6 = false;
	while (bVar6 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (fParam2 >= 0.0f)
		{
			if (MEMORY_GET_IS_VISIBLE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar6), bParam1))
			{
				return 1;
			}
		}
		GET_POSITION(bParam1, &vVar0);
		GET_POSITION(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar6), &vVar3);
		if (VDIST(vVar0, vVar3) > fParam2)
		{
			if (MEMORY_GET_IS_VISIBLE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar6), bParam1))
			{
				return 1;
			}
		}
		bVar6++;
	}
	return 0;
}

bool Function_395(bool bParam0, int iParam1) //Position: 0x15074 / 86132
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(bParam0) - 1))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0);
		if (IS_OBJECT_VALID(bVar1))
		{
			if (GET_OBJECT_TYPE(bVar1) == 15)
			{
				bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (!IS_ACTOR_VEHICLE(bVar2))
					{
						if (IS_ACTOR_ALIVE(bVar2) && IS_ACTOR_IN_VOLUME(bVar2, *iParam1))
						{
							return 1;
						}
					}
					if (IS_ACTOR_IN_VOLUME(bVar2, *iParam1))
					{
						return 1;
					}
				}
			}
			if (IS_OBJECT_IN_VOLUME(bVar1, *iParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_396() //Position: 0x150F9 / 86265
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar7;
	
	Function_399();
	vLocal_1166 = { StackVal, StackVal, Function_399() };
	GET_OBJECT_RELATIVE_POSITION(Local_4.f_2552, vLocal_1169, &vLocal_1030);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vLocal_1030, vLocal_1166, StackVal) };
	VNORMALIZE(&vVar0);
	vLocal_1030 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar0, vLocal_1030, StackVal) * Vector(1,4f, 1,4f, 1,4f), StackVal, StackVal) };
	Function_399();
	vVar3 = { StackVal, StackVal, Function_399() };
	uVar6 = Function_397(StackVal, StackVal, StackVal, StackVal, vLocal_1030, vVar3);
	vVar7.y = uVar6;
	STREAMING_LOAD_SCENE_EXT(vLocal_1030, vVar7, 1);
	return;
}

var Function_397(vector3 vParam0, vector3 vParam3) //Position: 0x1516A / 86378
{
	var uVar0;
	
	Function_398(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_398(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x15184 / 86404
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

vector3 Function_399() //Position: 0x151A7 / 86439
{
	switch (bLocal_1129)
	{
		case 0x00000001:
			return StackVal, StackVal, vLocal_1106;
			break;
		
		case 0x00000002:
			return StackVal, StackVal, vLocal_1109;
			break;
		
		case 0x00000003:
			return StackVal, StackVal, vLocal_1112;
			break;
		
		case 0x00000004:
			return StackVal, StackVal, vLocal_1115;
			break;
		
		case 0x00000005:
			return StackVal, StackVal, vLocal_1118;
			break;
	}
	return 0.0f, 0.0f, 0.0f;
}

void Function_400() //Position: 0x15203 / 86531
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_ConvoyArrives", "Rebel04_ConvoyArrives", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_401() //Position: 0x15256 / 86614
{
	vector3 vVar0;
	vector3 vVar3;
	
	bLocal_1164 = CREATE_CAMERA_IN_LAYOUT(bLocal_678, "bombCam", 2);
	bLocal_1165 = CREATE_AIMRAMP_IN_LAYOUT(bLocal_678, "bombCam_AR");
	Function_399();
	vLocal_1166 = { StackVal, StackVal, Function_399() };
	GET_OBJECT_RELATIVE_POSITION(Local_4.f_2552, vLocal_1169, &vLocal_1030);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vLocal_1030, vLocal_1166, StackVal) };
	VNORMALIZE(&vVar0);
	vLocal_1030 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar0, vLocal_1030, StackVal) * Vector(1,4f, 1,4f, 1,4f), StackVal, StackVal) };
	SET_CAMERA_POSITION(bLocal_1164, vLocal_1030);
	SET_CAMERA_ORIENTATION(bLocal_1164, 0,968f, -0,208f, -0,141f, 0);
	SET_CAMERA_TARGET_POSITION(bLocal_1164, vLocal_1166, 0);
	SET_CAMERA_FOV(bLocal_1164, 25,8f);
	CAMERA_RESET(0);
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_1164, false))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_1164, false, 0f, 0f, 0, 0, 0, 0, 0, 0);
	}
	bLocal_1172 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_678, Function_53());
	bLocal_1173 = CREATE_CAMERASHOT_IN_LAYOUT(bLocal_678, Function_53());
	GET_CAMERA_POSITION(bLocal_1164, &vVar3);
	SET_CAMERASHOT_POSITION(bLocal_1172, vVar3);
	SET_CAMERASHOT_TARGET_POSITION(bLocal_1172, vLocal_1166, 0);
	SET_CAMERASHOT_FOV(bLocal_1172, 25,8f);
	SET_CAMERASHOT_POSITION(bLocal_1173, vVar3);
	SET_CAMERASHOT_TARGET_POSITION(bLocal_1173, vLocal_1166, 0);
	SET_CAMERASHOT_FOV(bLocal_1173, 25,8f);
	ADD_CAMERA_SHOT_TRANSITION_EASE_OUT(bLocal_1164, bLocal_1172, bLocal_1173, 0,1f, 4294967295, 0);
	SET_CAMERA_TARGET_POSITION(bLocal_1164, vLocal_1166, 0);
	AI_IGNORE_ACTOR(Global_34573);
	AI_GOAL_LOOK_AT_COORD(Global_34573, &vLocal_1166, 1, 0, 3212836864, 3212836864);
	return;
}

var Function_402(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x153BD / 86973
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Rebel04_ConvoyReveal", 2, 1);
	}
	Function_403(&bVar0);
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

void Function_403(int iParam0) //Position: 0x1543D / 87101
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_405(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_404(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 5.0f, 0, 0);
	return;
}

void Function_404(int iParam0) //Position: 0x15472 / 87154
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29,9297f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3285,544f, 7,71453f, 4179,534f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,039536f, -2,373571f, -4,9E-05f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_405(int iParam0) //Position: 0x154D9 / 87257
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 31,96167f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3290,108f, 7,545845f, 4176,784f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,0622f, -2,419138f, -4,9E-05f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_406(bool bParam0, bool bParam1) //Position: 0x15540 / 87360
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!IS_ACTORSET_VALID(Local_4.f_620))
	{
		Function_447();
	}
	if (!IS_ACTORSET_VALID(Local_4.f_672))
	{
		Function_409();
	}
	bVar0 = false;
	if (!bParam0)
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_676))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_676, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam1)
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bVar1, *(&Local_4 + 2268[bVar06]), 1, true, 1);
				}
				GIVE_WEAPON_TO_ACTOR(bVar1, 19, false, 1, 1);
				TASK_CROUCH(bVar1, -1.0f);
				Function_392(bVar1, bLocal_1054, 2);
				MEMORY_ALLOW_SHOOTING(bVar1, false);
				MEMORY_ATTACK_ON_SIGHT(bVar1, 0);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar1, 75.0f);
				SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, 270.0f);
				SET_ACTOR_VISION_MAX_RANGE(bVar1, 200.0f, 1);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
				ADD_ACTOR_STAY_WITHIN_VOLUME(bVar1, (*&Local_4 + 744)[bVar0]);
				AI_SET_NAV_PATHFINDING_ENABLED(bVar1, false);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar1, 0);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_624))
		{
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_624, bVar0);
			if (IS_ACTOR_VALID(bVar2))
			{
				if (bParam1)
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bVar2, *(&Local_4 + 2344[bVar06]), 1, true, 1);
				}
				GIVE_WEAPON_TO_ACTOR(bVar2, 41, 0,5f, 1, 1);
				ACTOR_PUT_WEAPON_IN_HAND(bVar2, 41, 1);
				bLocal_1130 = TASK_SEQUENCE_OPEN();
				TASK_DRAW_HOLSTER_WEAPON(false, 1);
				TASK_CROUCH(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bVar2, bLocal_1130);
				TASK_SEQUENCE_RELEASE(bLocal_1130, 1);
				Function_392(bVar2, bLocal_1054, 2);
				MEMORY_ALLOW_SHOOTING(bVar2, false);
				MEMORY_ATTACK_ON_SIGHT(bVar2, 0);
				AI_GOAL_STAND_CLEAR(bVar2);
			}
			bVar0++;
		}
	}
	else
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_676))
		{
			bVar3 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_676, bVar0);
			if (IS_ACTOR_VALID(bVar3))
			{
				if (!ACTOR_HAS_WEAPON(bVar3, 19))
				{
					LOG_ERROR("sniper doesn't have a rolling block, wtf!?!");
				}
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar3, &Local_4 + 2268[bVar06], -1.0f);
				TASK_PRIORITY_SET(bVar3, true);
			}
			bVar0++;
		}
		SQUAD_GOALS_CLEAR(Local_4.f_624);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(Local_4.f_624, 0);
		SQUAD_SET_FACTION(Local_4.f_624, 20);
		Function_391(Local_4.f_624, Local_4.f_508, 4);
		Function_391(Local_4.f_624, Local_4.f_548, 4);
		Function_391(Local_4.f_624, Local_4.f_572, 4);
		Function_408(Local_4.f_624, Local_4.f_508, 1);
		Function_408(Local_4.f_624, Local_4.f_548, 1);
		Function_408(Local_4.f_624, Local_4.f_572, 1);
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_624))
		{
			bVar4 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_624, bVar0);
			if (IS_ACTOR_VALID(bVar4))
			{
				TASK_CLEAR(bVar4);
				MEMORY_CLEAR_ALL(bVar4);
				Function_392(bVar4, Local_4.f_508, 4);
				Function_392(bVar4, Local_4.f_548, 4);
				Function_392(bVar4, Local_4.f_572, 4);
				Function_407(bVar4, Local_4.f_508);
				Function_407(bVar4, Local_4.f_548);
				Function_407(bVar4, Local_4.f_572);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar4, &Local_4 + 2144[bVar06], -1.0f);
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar4, 0,25f);
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar4, (*&Local_4 + 744)[3], 2, true);
				SET_ACTOR_VISION_MAX_RANGE(bVar4, 150.0f, 1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_407(bool bParam0, bool bParam1) //Position: 0x1587E / 88190
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(bParam0) && SQUAD_IS_VALID(bParam1))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				MEMORY_REPORT_POSITION_AUTO(bParam0, bVar1, true);
			}
			bVar0++;
		}
	}
	return;
}

void Function_408(bool bParam0, bool bParam1, bool bParam2) //Position: 0x158C1 / 88257
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

void Function_409() //Position: 0x15946 / 88390
{
	Local_4.f_672 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "BridgeRebelSnipersset", 0);
	Local_4.f_676 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "BridgeRebelSnipers"));
	(*&Local_4 + 644)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BridgeRebelSnipers01", 536, -3453,863f, 11,94966f, 4244.0f, 0.0f, 365,809f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_672, (*&Local_4 + 644)[02]);
	SQUAD_JOIN((*&Local_4 + 644)[02], Local_4.f_676);
	TASK_CROUCH((*&Local_4 + 644)[02], -1.0f);
	TASK_PRIORITY_SET((*&Local_4 + 644)[02], true);
	SET_ACTOR_FACTION((*&Local_4 + 644)[02], 20);
	SET_ACTOR_FACTION((*&Local_4 + 644)[02], 20);
	(*&Local_4 + 644)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BridgeRebelSnipers02", 537, -3400f, 19,07452f, 4218,535f, 0.0f, 356,7866f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_672, (*&Local_4 + 644)[12]);
	SQUAD_JOIN((*&Local_4 + 644)[12], Local_4.f_676);
	TASK_CROUCH((*&Local_4 + 644)[12], -1.0f);
	TASK_PRIORITY_SET((*&Local_4 + 644)[12], true);
	SET_ACTOR_FACTION((*&Local_4 + 644)[12], 20);
	SET_ACTOR_FACTION((*&Local_4 + 644)[12], 20);
	(*&Local_4 + 644)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BridgeRebelSnipers03", 538, -3457,323f, 12,20619f, 4186,745f, 0.0f, 233,6512f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_672, (*&Local_4 + 644)[22]);
	SQUAD_JOIN((*&Local_4 + 644)[22], Local_4.f_676);
	TASK_CROUCH((*&Local_4 + 644)[22], -1.0f);
	TASK_PRIORITY_SET((*&Local_4 + 644)[22], true);
	SET_ACTOR_FACTION((*&Local_4 + 644)[22], 20);
	SET_ACTOR_FACTION((*&Local_4 + 644)[22], 20);
	return;
}

bool Function_410(bool bParam0, bool bParam1, bool bParam2) //Position: 0x15B41 / 88897
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_371(bParam0);
			Function_411(bParam1);
			if (VDIST(Function_371(bParam0), Function_411(bParam1)) >= bParam2)
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

vector3 Function_411(bool bParam0) //Position: 0x15C5B / 89179
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

void Function_412() //Position: 0x15CC7 / 89287
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_FillerLinesLuisa", "Rebel04_FillerLinesLuisa", false, 4, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_413(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x15D20 / 89376
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

void Function_414() //Position: 0x15D73 / 89459
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_CS03_v1_AA", "Rebel04_CS03_v1_AA", false, 4, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_415(int iParam0) //Position: 0x15DC0 / 89536
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

void Function_416(int iParam0) //Position: 0x15E74 / 89716
{
	if (!Function_278(iParam0))
	{
		Function_217(iParam0, 0.0f);
	}
	return;
}

void Function_417(bool bParam0) //Position: 0x15E89 / 89737
{
	bool bVar0;
	
	bVar0 = FIND_OBJECT_IN_OBJECT(Local_4.f_2556, "pickup_tnt");
	if (IS_OBJECT_VALID(bVar0))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bVar0), bParam0);
	}
	else
	{
		LOG_ERROR("couldn't find TNT gringo in 01x");
	}
	bVar0 = FIND_OBJECT_IN_OBJECT(Local_4.f_2560, "pickup_tnt");
	if (IS_OBJECT_VALID(bVar0))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bVar0), bParam0);
	}
	else
	{
		LOG_ERROR("couldn't find TNT gringo in 01x1");
	}
	return;
}

void Function_418() //Position: 0x15F32 / 89906
{
	AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(0);
	AI_SET_ALLOW_HOSTILE_ATTACK_AI(0);
	Function_436();
	Function_434(Local_4.f_484);
	Function_432(Local_4.f_484, 0);
	if (!IS_OBJECTSET_VALID(bLocal_1053))
	{
		bLocal_1053 = CREATE_OBJECTSET_IN_LAYOUT("wagonSet", bLocal_678, 15, 1);
	}
	else
	{
		Function_431(&bLocal_1053);
	}
	if (!SQUAD_IS_VALID(bLocal_1054))
	{
		bLocal_1054 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_678, "wagonSquad"));
	}
	else
	{
		Function_218(bLocal_1054);
	}
	Function_430(Local_4.f_484, bLocal_1053);
	Local_1036 = (*&Local_4 + 448)[02];
	SET_ACTOR_UPDATE_PRIORITY(Local_1036, false);
	SQUAD_LEAVE(Local_1036);
	SET_ACTOR_INVULNERABILITY(Local_1036, true);
	Local_1036.f_4 = (*&Local_4 + 448)[12];
	SQUAD_JOIN(StackVal, bLocal_1054);
	SET_ACTOR_UPDATE_PRIORITY(StackVal, false);
	SET_ACTOR_IN_VEHICLE(StackVal, Local_1036, false);
	Local_1041 = (*&Local_4 + 448)[22];
	SET_ACTOR_UPDATE_PRIORITY(Local_1041, false);
	SQUAD_LEAVE(Local_1041);
	Local_1041.f_4 = (*&Local_4 + 448)[32];
	SQUAD_JOIN(StackVal, bLocal_1054);
	SET_ACTOR_UPDATE_PRIORITY(StackVal, false);
	SET_ACTOR_IN_VEHICLE(StackVal, Local_1041, false);
	TASK_STAND_STILL(StackVal, -1.0f, 0, 0);
	TASK_PRIORITY_SET(StackVal, true);
	TASK_STAND_STILL(StackVal, -1.0f, 0, 0);
	TASK_PRIORITY_SET(StackVal, true);
	if (!IS_OBJECTSET_VALID(bLocal_1052))
	{
		bLocal_1052 = CREATE_OBJECTSET_IN_LAYOUT("nescortSet", bLocal_678, 15, 1);
	}
	else
	{
		Function_431(&bLocal_1052);
	}
	Function_429();
	Function_424(Local_4.f_572);
	SQUAD_GOALS_CLEAR(Local_4.f_572);
	TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_4 + 552)[02], Local_1036, Local_4.f_2488, -15.0f, 1, -3.0f);
	TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_4 + 552)[12], Local_1036, Local_4.f_2488, -15.0f, 1, 3.0f);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_572, 2048);
	Function_423();
	Function_424(Local_4.f_508);
	Function_362(Local_4.f_508);
	SQUAD_GOALS_CLEAR(Local_4.f_508);
	TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_4 + 488)[02], Local_1036, Local_4.f_2492, 2.0f, 1, 0);
	TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_4 + 488)[12], Local_1036, Local_4.f_2496, 2.0f, 1, 0);
	Function_422(Local_4.f_508, Local_1036, 0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_508, 2048);
	Function_420();
	Function_424(Local_4.f_548);
	Function_362(Local_4.f_548);
	SQUAD_GOALS_CLEAR(Local_4.f_548);
	TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_4 + 512)[02], Local_1041, Local_4.f_2488, -7.0f, 1, -2.0f);
	TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_4 + 512)[12], Local_1041, Local_4.f_2488, -7.0f, 1, 2.0f);
	TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_4 + 512)[22], Local_1041, Local_4.f_2492, 7.0f, 1, 0);
	TASK_FOLLOW_OBJECT_ALONG_PATH((*&Local_4 + 512)[32], Local_1041, Local_4.f_2496, 7.0f, 1, 0);
	Function_422(Local_4.f_548, Local_1041, 0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_548, 2048);
	Function_419(Local_4.f_508, 0);
	Function_419(Local_4.f_548, 0);
	Function_419(Local_4.f_572, 0);
	Function_419(bLocal_1054, 0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1.0f);
	Function_391(Local_4.f_624, Local_4.f_508, 2);
	Function_391(Local_4.f_624, Local_4.f_548, 2);
	Function_391(Local_4.f_624, Local_4.f_572, 2);
	Function_389(Local_4.f_624, 0);
	return;
}

void Function_419(bool bParam0, bool bParam1) //Position: 0x1623F / 90687
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar1 = false;
		while (bVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
			if (IS_ACTOR_VALID(bVar0))
			{
				HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(bVar0, bParam1);
			}
			bVar1++;
		}
	}
	else
	{
		LOG_ERROR("HUD_SET_SHOOT_BLIP_ENABLED_FOR_SQUAD got invalid squad");
	}
	return;
}

void Function_420() //Position: 0x162BC / 90812
{
	Local_4.f_548 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "BridgeEscortRearCalvary"));
	(*&Local_4 + 512)[02] = Function_421(Local_4, "Calvary_Rear01", 393, Function_53(), 976, -3247,541f, 6,77746f, 4208,313f, 0.0f, 67,67883f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 512)[02], Local_4.f_548);
	SET_ACTOR_FACTION((*&Local_4 + 512)[02], 21);
	(*&Local_4 + 512)[12] = Function_421(Local_4, "Calvary_Rear02", 391, Function_53(), 980, -3245,387f, 6,77746f, 4204,227f, 0.0f, 65,36708f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 512)[12], Local_4.f_548);
	SET_ACTOR_FACTION((*&Local_4 + 512)[12], 21);
	(*&Local_4 + 512)[22] = Function_421(Local_4, "Calvary_Rear03", 380, Function_53(), 989, -3207,493f, 7,476081f, 4221,615f, 0.0f, 68,84789f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 512)[22], Local_4.f_548);
	SET_ACTOR_FACTION((*&Local_4 + 512)[22], 21);
	(*&Local_4 + 512)[32] = Function_421(Local_4, "Calvary_Rear04", 380, Function_53(), 990, -3207,34f, 7,476081f, 4214,766f, 0,3678465f, 70,2737f, 1,84267f);
	SQUAD_JOIN((*&Local_4 + 512)[32], Local_4.f_548);
	SET_ACTOR_FACTION((*&Local_4 + 512)[32], 21);
	return;
}

var Function_421(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x16459 / 91225
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_207(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_207(bParam4))
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

void Function_422(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1657E / 91518
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

void Function_423() //Position: 0x165E9 / 91625
{
	Local_4.f_508 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "BridgeEscortFrontCalvary"));
	(*&Local_4 + 488)[02] = Function_421(Local_4, "Calvary_Front01", 391, Function_53(), 977, -3272,069f, 6,777458f, 4194,177f, 0.0f, 61,04684f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 488)[02], Local_4.f_508);
	SET_ACTOR_FACTION((*&Local_4 + 488)[02], 21);
	(*&Local_4 + 488)[12] = Function_421(Local_4, "Calvary_Front02", 392, Function_53(), 977, -3267,926f, 6,777459f, 4190,048f, 0.0f, 54,99287f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 488)[12], Local_4.f_508);
	SET_ACTOR_FACTION((*&Local_4 + 488)[12], 21);
	return;
}

void Function_424(bool bParam0) //Position: 0x166CD / 91853
{
	Function_430(bParam0, bLocal_1052);
	Function_428(bParam0, 0);
	Function_427(bParam0, 41, 0,5f);
	Function_426(bParam0, 41, 1, 1);
	Function_389(bParam0, 0);
	Function_390(bParam0, Global_34573, 2);
	Function_391(bParam0, Local_4.f_624, 2);
	Function_425(bParam0, 1);
	Function_434(bParam0);
	Function_432(bParam0, 0);
	return;
}

void Function_425(bool bParam0, bool bParam1) //Position: 0x16722 / 91938
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

void Function_426(bool bParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x1675D / 91997
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
			if (IS_ACTOR_ALIVE(bVar1))
			{
				if (uParam2 || !ACTOR_HAS_WEAPON(bVar1, bParam1))
				{
					GIVE_WEAPON_TO_ACTOR(bVar1, bParam1, false, 1, 1);
				}
				if (!ACTOR_HAS_WEAPON_IN_HAND(bVar1, bParam1))
				{
					ACTOR_PUT_WEAPON_IN_HAND(bVar1, bParam1, iParam3);
				}
			}
		}
		bVar0++;
	}
}

void Function_427(bool bParam0, bool bParam1, bool bParam2) //Position: 0x167CD / 92109
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

void Function_428(bool bParam0, bool bParam1) //Position: 0x16819 / 92185
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

void Function_429() //Position: 0x1685A / 92250
{
	Local_4.f_572 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "BridgeEscortVanguard"));
	(*&Local_4 + 552)[02] = Function_421(Local_4, "BridgeCalvary_VG01", 391, Function_53(), 977, -3288,087f, 7,02842f, 4187,143f, 0.0f, 48,76455f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 552)[02], Local_4.f_572);
	SET_ACTOR_FACTION((*&Local_4 + 552)[02], 21);
	(*&Local_4 + 552)[12] = Function_421(Local_4, "BridgeCalvary_VG02", 392, Function_53(), 980, -3284,559f, 7,035625f, 4179,185f, 0.0f, 53,86485f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 552)[12], Local_4.f_572);
	SET_ACTOR_FACTION((*&Local_4 + 552)[12], 21);
	return;
}

int Function_430(bool bParam0, bool bParam1) //Position: 0x16940 / 92480
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_OBJECTSET_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			ADD_OBJECT_TO_OBJECTSET(bVar1, bParam1);
		}
		bVar0++;
	}
	return 1;
}

void Function_431(bool bParam0) //Position: 0x16991 / 92561
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(*bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(*bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(*bParam0, bVar0)))
			{
				DESTROY_ACTOR(GET_ACTOR_FROM_ACTORSET(*bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_432(bool bParam0, bool bParam1) //Position: 0x169D8 / 92632
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
				Function_433(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_433(bool bParam0, bool bParam1) //Position: 0x16A14 / 92692
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_434(bool bParam0) //Position: 0x16A34 / 92724
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
				Function_435(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_435(bool bParam0) //Position: 0x16A6E / 92782
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

void Function_436() //Position: 0x16AA2 / 92834
{
	Local_4.f_484 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "BridgeWagonTrain"));
	(*&Local_4 + 448)[02] = Function_222(Local_4, "BridgeWagon01", 1200, 977, -3280,48f, 6,77746f, 4187,8f, 0.0f, 72,22764f, 0.0f, 1, 976, 976, 976, 4);
	SQUAD_JOIN((*&Local_4 + 448)[02], Local_4.f_484);
	(*&Local_4 + 448)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BridgeDriver01", 379, -3282,342f, 7,027462f, 4192.0f, 0.0f, 72,94138f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 448)[12], Local_4.f_484);
	(*&Local_4 + 448)[22] = Function_222(Local_4, "BridgeWagon03", 1200, 981, -3228,164f, 6,777454f, 4214,927f, 0.0f, 69,47726f, 0.0f, 1, 976, 976, 976, 4);
	SQUAD_JOIN((*&Local_4 + 448)[22], Local_4.f_484);
	(*&Local_4 + 448)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BridgeDriver03", 380, -3231,709f, 7,027454f, 4217,522f, 0.0f, 58,68979f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 448)[32], Local_4.f_484);
	return;
}

void Function_437(int iParam0, bool bParam1, bool bParam2) //Position: 0x16BFE / 93182
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
						Function_204(bVar1);
					}
				}
				Function_438(bVar0);
			}
		}
	}
	return;
}

void Function_438(bool bParam0) //Position: 0x16CF5 / 93429
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

void Function_439(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6) //Position: 0x16D21 / 93473
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
	if (iParam3 != Global_34165.f_48 && !Function_444())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_443(0);
	Function_442();
	Global_34165.f_48 = iParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_441(uParam4, iVar0, iVar1);
	Function_440();
}

void Function_440() //Position: 0x16DBE / 93630
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

void Function_441(int iParam0, bool bParam1, bool bParam2) //Position: 0x16DFF / 93695
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

void Function_442() //Position: 0x16F65 / 94053
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_443(bool bParam0) //Position: 0x16F89 / 94089
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

bool Function_444() //Position: 0x16FB8 / 94136
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

void Function_445(bool bParam0) //Position: 0x16FD3 / 94163
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

void Function_446(bool bParam0, bool bParam1) //Position: 0x17045 / 94277
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar1 = false;
		bVar1 = false;
		while (bVar1 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			bVar0 = GET_ACTOR_FROM_ACTORSET(bParam0, bVar1);
			if (IS_ACTOR_VALID(bVar0))
			{
				TASK_STAND_STILL(bVar0, bParam1, 0, 0);
			}
			bVar1++;
		}
	}
	return;
}

void Function_447() //Position: 0x1708B / 94347
{
	Local_4.f_620 = CREATE_ACTORSET_IN_LAYOUT(Local_4, "BridgeRebelsset", 0);
	Local_4.f_624 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "BridgeRebels"));
	(*&Local_4 + 576)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BridgeRebel01", 521, -3454,242f, 6,031963f, 4204.0f, 0.0f, 285,0161f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_620, (*&Local_4 + 576)[02]);
	SQUAD_JOIN((*&Local_4 + 576)[02], Local_4.f_624);
	TASK_CROUCH((*&Local_4 + 576)[02], -1.0f);
	TASK_PRIORITY_SET((*&Local_4 + 576)[02], true);
	SET_ACTOR_FACTION((*&Local_4 + 576)[02], 20);
	SET_ACTOR_FACTION((*&Local_4 + 576)[02], 20);
	(*&Local_4 + 576)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BridgeRebel02", 539, -3434,24f, 6,721986f, 4218,46f, 0.0f, 26,35292f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_620, (*&Local_4 + 576)[12]);
	SQUAD_JOIN((*&Local_4 + 576)[12], Local_4.f_624);
	TASK_CROUCH((*&Local_4 + 576)[12], -1.0f);
	TASK_PRIORITY_SET((*&Local_4 + 576)[12], true);
	SET_ACTOR_FACTION((*&Local_4 + 576)[12], 20);
	SET_ACTOR_FACTION((*&Local_4 + 576)[12], 20);
	(*&Local_4 + 576)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BridgeRebel03", 540, -3450,091f, 7,241815f, 4233,91f, 0.0f, 7,313087f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_620, (*&Local_4 + 576)[22]);
	SQUAD_JOIN((*&Local_4 + 576)[22], Local_4.f_624);
	TASK_CROUCH((*&Local_4 + 576)[22], -1.0f);
	TASK_PRIORITY_SET((*&Local_4 + 576)[22], true);
	SET_ACTOR_FACTION((*&Local_4 + 576)[22], 20);
	SET_ACTOR_FACTION((*&Local_4 + 576)[22], 20);
	(*&Local_4 + 576)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BridgeRebel04", 533, -3477,745f, 6,023548f, 4224.0f, 0.0f, -67,80376f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_620, (*&Local_4 + 576)[32]);
	SQUAD_JOIN((*&Local_4 + 576)[32], Local_4.f_624);
	TASK_CROUCH((*&Local_4 + 576)[32], -1.0f);
	TASK_PRIORITY_SET((*&Local_4 + 576)[32], true);
	SET_ACTOR_FACTION((*&Local_4 + 576)[32], 20);
	SET_ACTOR_FACTION((*&Local_4 + 576)[32], 20);
	(*&Local_4 + 576)[42] = CREATE_ACTOR_IN_LAYOUT(Local_4, "BridgeRebel05", 534, -3477,745f, 6,023548f, 4224.0f, 0.0f, -67,80376f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_4.f_620, (*&Local_4 + 576)[42]);
	SQUAD_JOIN((*&Local_4 + 576)[42], Local_4.f_624);
	TASK_CROUCH((*&Local_4 + 576)[42], -1.0f);
	TASK_PRIORITY_SET((*&Local_4 + 576)[42], true);
	SET_ACTOR_FACTION((*&Local_4 + 576)[42], 20);
	SET_ACTOR_FACTION((*&Local_4 + 576)[42], 20);
	return;
}

int Function_448() //Position: 0x17377 / 95095
{
	Function_329(&Local_4 + 264, 391, 2, 0);
	Function_329(&Local_4 + 264, 392, 2, 0);
	Function_329(&Local_4 + 264, 393, 2, 0);
	Function_329(&Local_4 + 264, 976, 2, 0);
	Function_329(&Local_4 + 264, 980, 2, 0);
	Function_329(&Local_4 + 264, 989, 2, 0);
	Function_329(&Local_4 + 264, 990, 2, 0);
	Function_329(&Local_4 + 264, 521, 2, 0);
	Function_329(&Local_4 + 264, 539, 2, 0);
	Function_329(&Local_4 + 264, 540, 2, 0);
	Function_329(&Local_4 + 264, 533, 2, 0);
	Function_329(&Local_4 + 264, 534, 2, 0);
	Function_329(&Local_4 + 264, 536, 2, 0);
	Function_329(&Local_4 + 264, 537, 2, 0);
	Function_329(&Local_4 + 264, 538, 2, 0);
	if (Function_320(&Local_4 + 264))
	{
		return 1;
	}
	return 0;
}

void Function_449(int iParam0) //Position: 0x1745D / 95325
{
	Function_450(&Global_28842, iParam0);
	return;
}

void Function_450(var uParam0, int iParam1) //Position: 0x1746B / 95339
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_451(int iParam0) //Position: 0x1748E / 95374
{
	if (!Function_281(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_181(1, 0, 1);
		}
	}
	return;
}

bool Function_452(bool bParam0) //Position: 0x174A9 / 95401
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

var Function_453(vector3 vParam0, int iParam3, int iParam4, bool bParam5) //Position: 0x174C5 / 95429
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

void Function_454(bool bParam0) //Position: 0x17555 / 95573
{
	Function_455(0, 0x40400000);
	Function_195();
	Function_194();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_455(bool bParam0, float fParam1) //Position: 0x17589 / 95625
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
	Function_457();
	Function_456();
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

void Function_456() //Position: 0x17687 / 95879
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_457() //Position: 0x176B9 / 95929
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

void Function_458() //Position: 0x177B6 / 96182
{
	bool bVar0;
	
	if (!Function_278(&iLocal_1086))
	{
		Function_416(&iLocal_1086);
	}
	if (Function_276(&iLocal_1086) < 0,5f)
	{
		if (StackVal && IS_ACTOR_ALIVE(IS_ACTOR_VALID(Local_1041)))
		{
			Function_371(Local_1041);
			STREAMING_LOAD_BOUNDS_EXT(0, Function_371(Local_1041), 100.0f, 1);
		}
		if (StackVal && IS_ACTOR_ALIVE(IS_ACTOR_VALID(Local_1036)))
		{
			Function_371(Local_1036);
			STREAMING_LOAD_BOUNDS_EXT(2, Function_371(Local_1036), 100.0f, 1);
		}
		bVar0 = Function_459(Global_34573, bLocal_1052);
		if (IS_OBJECT_VALID(bVar0))
		{
			Function_238(bVar0);
			STREAMING_LOAD_BOUNDS_EXT(3, Function_238(bVar0), 50.0f, 1);
		}
		Function_216(&iLocal_1086);
	}
	return;
}

var Function_459(bool bParam0, bool bParam1) //Position: 0x17847 / 96327
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	if (IS_OBJECT_VALID(bParam0) && IS_OBJECTSET_VALID(bParam1))
	{
		bVar6 = 0.0f;
		bVar7 = 4294967295;
		GET_OBJECT_POSITION(bParam0, &vVar0);
		bVar8 = false;
		while (bVar8 <= GET_OBJECTSET_SIZE(bParam1))
		{
			bVar9 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar8, bParam1);
			if (IS_OBJECT_VALID(bVar9))
			{
				GET_OBJECT_POSITION(bVar9, &vVar3);
				if (VDIST(vVar3, vVar0) < bVar6)
				{
					bVar6 = VDIST(vVar3, vVar0);
					bVar7 = bVar8;
				}
			}
			bVar8++;
		}
		if (bVar7 >= 4294967295)
		{
			return GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, bParam1);
		}
	}
	return "";
}

bool Function_460(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x178CA / 96458
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

bool Function_461(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10) //Position: 0x17983 / 96643
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_VOLUME_VALID(bParam1) || !IS_VOLUME_VALID(bParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam2))
	{
		Function_231(bParam4);
		*iParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(Global_34573, bParam1))
	{
		if (!Function_467(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_413(bParam3, 7,5f, 0, 2, bParam6, 0, 0);
				Function_466(64);
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_465(bParam7, 0, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_465(bParam8, 0, 4294967295, 0, bParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8)))
			{
				ADD_BLIP_FOR_OBJECT(bParam1, bParam9, 0f, 2, 0);
				DECOR_SET_BOOL(bParam1, "MVODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_467(64))
	{
		Function_464(64);
		if (!Function_463())
		{
			if (bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_462();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bParam1)) && (IS_LAYOUTREF_VALID(bParam7) || IS_LAYOUTREF_VALID(bParam8))) && DECOR_CHECK_EXIST(bParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bParam1));
				DECOR_REMOVE(bParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam7))
			{
				Function_465(bParam7, 1, 4294967295, 0, bParam1);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_465(bParam8, 1, 4294967295, 0, bParam1);
			}
		}
	}
	return 0;
}

void Function_462() //Position: 0x17AF7 / 97015
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

bool Function_463() //Position: 0x17B22 / 97058
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

void Function_464(bool bParam0) //Position: 0x17B66 / 97126
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

void Function_465(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x17BC9 / 97225
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

void Function_466(bool bParam0) //Position: 0x17C6A / 97386
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

bool Function_467(bool bParam0) //Position: 0x17CCD / 97485
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

void Function_468() //Position: 0x17D14 / 97556
{
	if (!bLocal_1128)
	{
		if ((!Function_469(bLocal_1054, Local_4.f_780) && !Function_469(Local_4.f_572, Local_4.f_780)) && iLocal_1057 < 0)
		{
			Function_231("Rebel04_fail_convoy_alerted");
			bLocal_696 = true;
			Function_385();
			LOG_ERROR("MANAGE_PREMATURE_DETONATION");
			GET_PATH_POINT(Local_4.f_2488, false, &vLocal_1030);
			SQUAD_GOALS_CLEAR(bLocal_1054);
			Function_362(bLocal_1054);
			SQUAD_GOAL_ADD_GENERAL_TASK(bLocal_1054, false, 1, 4294967295);
			TASK_GO_TO_COORD(false, &vLocal_1030, 4);
			SQUAD_GOALS_CLEAR(Local_4.f_572);
			Function_362(Local_4.f_572);
			SQUAD_GOAL_ADD_COMBAT(Local_4.f_572, 0, 4294967295, 0);
			Function_362(Local_4.f_508);
			SQUAD_GOALS_CLEAR(Local_4.f_508);
			SQUAD_GOAL_ADD_COMBAT(Local_4.f_508, 0, 4294967295, 0);
			Function_362(Local_4.f_548);
			SQUAD_GOALS_CLEAR(Local_4.f_548);
			SQUAD_GOAL_ADD_COMBAT(Local_4.f_548, 0, 4294967295, 0);
		}
	}
	return;
}

bool Function_469(bool bParam0, bool bParam1) //Position: 0x17E0C / 97804
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

void Function_470() //Position: 0x17E8E / 97934
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar7;
	
	Function_399();
	vVar3 = { StackVal, StackVal, Function_399() };
	GET_CAMERA_POSITION(bLocal_1164, &vVar0);
	uVar6 = Function_397(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3);
	vVar7.y = uVar6;
	STREAMING_LOAD_SCENE_EXT(vVar0, vVar7, 1);
	return;
}

int Function_471(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x17EC2 / 97986
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_474(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_475()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
					Function_472();
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
	else if ((!Function_474(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_475()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_474(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_472() //Position: 0x18138 / 98616
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
			Function_473(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_473(char* cParam0, vector3 vParam1) //Position: 0x1818C / 98700
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

bool Function_474(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x182B4 / 98996
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_371(bParam0);
		if (VDIST(Function_371(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_475() //Position: 0x1833E / 99134
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_476() //Position: 0x1834D / 99149
{
	if ((iLocal_1057 <= bLocal_1056 && iLocal_1057 < 0) && !bLocal_1159)
	{
		if (!DECOR_CHECK_EXIST(bLocal_1164, "ndestroyme"))
		{
			if (!DECOR_CHECK_EXIST(bLocal_678, "removepushdetonator"))
			{
				DECOR_SET_BOOL(bLocal_678, "removepushdetonator", true);
			}
			if (FLASH_GET_BOOL("help", "nShowBombs"))
			{
				FLASH_SET_BOOL("help", "nShowBombs", false);
			}
			DECOR_SET_FLOAT(bLocal_1164, "ndestroyme", GET_CURRENT_GAME_TIME());
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_1164, "ndestroyme")) < 0,5f)
		{
			if (DECOR_CHECK_EXIST(Global_34573, "NumTNT"))
			{
				DECOR_REMOVE(Global_34573, "NumTNT");
			}
			if (IS_GRINGO_VALID(bLocal_1131))
			{
				GRINGO_ALLOW_ACTIVATION(bLocal_1131, false);
			}
			Function_501();
			Function_437(8, 0, 1);
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
			Function_212();
			bLocal_1159 = true;
		}
	}
	if (!bLocal_1159)
	{
		if (GET_CURRENT_GRINGO(Global_34573) == bLocal_1131)
		{
			if (!DECOR_CHECK_EXIST(bLocal_678, "firstime"))
			{
				Function_498();
				Function_497();
				DECOR_SET_BOOL(bLocal_678, "firstime", true);
			}
			if (!IS_OBJECT_VALID(bLocal_1164) && IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "nidle_high"))
			{
				Function_401();
			}
			if ((!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_1164, false) || DECOR_CHECK_EXIST(Global_34573, "wagoncutfinished")) && !DECOR_CHECK_EXIST(bLocal_678, "nsetupglow"))
			{
				DECOR_SET_BOOL(bLocal_678, "nsetupglow", true);
				Function_496();
				Function_495();
				Function_437(8, 0, 1);
				Function_216(&iLocal_1083);
			}
			if (IS_OBJECT_VALID(bLocal_1164))
			{
				if (!IS_CAMERA_ACTIVE_ON_CHANNEL(bLocal_1164, false))
				{
					SET_CURRENT_CAMERA_ON_CHANNEL(bLocal_1164, false, 0f, 0f, 0, 0, 0, 0, 0, 0);
				}
				if (!IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_1164))
				{
					Function_399();
					Function_493(StackVal, StackVal, Function_399());
				}
			}
			Function_492();
			if (iLocal_1057 <= bLocal_1056)
			{
				if (DECOR_CHECK_EXIST(Global_34573, "UsedDetonator"))
				{
					Function_487();
					DECOR_REMOVE(Global_34573, "UsedDetonator");
					Function_216(&bLocal_863);
				}
				if (Function_276(&iLocal_1147) <= 5.0f)
				{
					Function_399();
					if (Function_486(StackVal, StackVal, Function_399(), 7,5f) && !Function_133())
					{
						Function_485();
						Function_216(&iLocal_1147);
					}
				}
				if (DECOR_CHECK_EXIST(bLocal_678, "stickdelay"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "stickdelay")) < 0,2f)
					{
						DECOR_REMOVE(bLocal_678, "stickdelay");
					}
				}
				if (!DECOR_CHECK_EXIST(Global_34573, "UsedDetonator") && !DECOR_CHECK_EXIST(bLocal_678, "stickdelay"))
				{
					if (GET_STICK_X(Function_201(), 0, 1) > -0,25f)
					{
						DECOR_SET_FLOAT(bLocal_678, "stickdelay", GET_CURRENT_GAME_TIME());
						Function_478(1, 0, 0);
					}
					if (GET_STICK_X(Function_201(), 0, 1) < 0,25f)
					{
						DECOR_SET_FLOAT(bLocal_678, "stickdelay", GET_CURRENT_GAME_TIME());
						Function_478(0, 0, 0);
					}
				}
			}
		}
		else
		{
			if (IS_OBJECT_VALID(bLocal_1164))
			{
				if (DECOR_CHECK_EXIST(bLocal_678, "nsetupglow"))
				{
					DECOR_REMOVE(bLocal_678, "nsetupglow");
				}
				Function_212();
				Function_213();
				Function_477(0);
				Function_437(8, 0, 1);
			}
			if (UI_ISACTIVE("Rebel04_Detonator"))
			{
				UI_EXIT("Rebel04_Detonator");
			}
		}
	}
	return;
}

void Function_477(bool bParam0) //Position: 0x18724 / 100132
{
	if (bParam0)
	{
		if (IS_BLIP_VALID(bLocal_1101))
		{
			REMOVE_BLIP(bLocal_1101);
		}
		if (IS_OBJECT_VALID(bLocal_1059))
		{
			bLocal_1101 = ADD_BLIP_FOR_OBJECT(bLocal_1059, 404, 0f, 2, 0);
			SET_BLIP_BLINK(bLocal_1101, 0, 0, 5f);
			SET_BLIP_SCALE(bLocal_1101, 0,75f);
		}
		if (IS_BLIP_VALID(bLocal_1102))
		{
			REMOVE_BLIP(bLocal_1102);
		}
		if (IS_OBJECT_VALID(bLocal_1060))
		{
			bLocal_1102 = ADD_BLIP_FOR_OBJECT(bLocal_1060, 404, 0f, 2, 0);
			SET_BLIP_BLINK(bLocal_1102, 0, 0, 5f);
			SET_BLIP_SCALE(bLocal_1102, 0,75f);
		}
		if (IS_BLIP_VALID(bLocal_1103))
		{
			REMOVE_BLIP(bLocal_1103);
		}
		if (IS_OBJECT_VALID(bLocal_1061))
		{
			bLocal_1103 = ADD_BLIP_FOR_OBJECT(bLocal_1061, 404, 0f, 2, 0);
			SET_BLIP_BLINK(bLocal_1103, 0, 0, 5f);
			SET_BLIP_SCALE(bLocal_1103, 0,75f);
		}
		if (IS_BLIP_VALID(bLocal_1104))
		{
			REMOVE_BLIP(bLocal_1104);
		}
		if (IS_OBJECT_VALID(bLocal_1062))
		{
			bLocal_1104 = ADD_BLIP_FOR_OBJECT(bLocal_1062, 404, 0f, 2, 0);
			SET_BLIP_BLINK(bLocal_1104, 0, 0, 5f);
			SET_BLIP_SCALE(bLocal_1104, 0,75f);
		}
		if (IS_BLIP_VALID(bLocal_1105))
		{
			REMOVE_BLIP(bLocal_1105);
		}
		if (IS_OBJECT_VALID(bLocal_1063))
		{
			bLocal_1105 = ADD_BLIP_FOR_OBJECT(bLocal_1063, 404, 0f, 2, 0);
			SET_BLIP_BLINK(bLocal_1105, 0, 0, 5f);
			SET_BLIP_SCALE(bLocal_1105, 0,75f);
		}
	}
	else
	{
		if (IS_BLIP_VALID(bLocal_1101))
		{
			REMOVE_BLIP(bLocal_1101);
		}
		if (IS_BLIP_VALID(bLocal_1102))
		{
			REMOVE_BLIP(bLocal_1102);
		}
		if (IS_BLIP_VALID(bLocal_1103))
		{
			REMOVE_BLIP(bLocal_1103);
		}
		if (IS_BLIP_VALID(bLocal_1104))
		{
			REMOVE_BLIP(bLocal_1104);
		}
		if (IS_BLIP_VALID(bLocal_1105))
		{
			REMOVE_BLIP(bLocal_1105);
		}
	}
	return;
}

void Function_478(int iParam0, int iParam1, float fParam2) //Position: 0x188B8 / 100536
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 1;
	if (IS_BLIP_VALID(bLocal_1101))
	{
		SET_BLIP_BLINK(bLocal_1101, 0, 0, 5f);
		SET_BLIP_SCALE(bLocal_1101, 0,75f);
	}
	if (IS_BLIP_VALID(bLocal_1102))
	{
		SET_BLIP_BLINK(bLocal_1102, 0, 0, 5f);
		SET_BLIP_SCALE(bLocal_1102, 0,75f);
	}
	if (IS_BLIP_VALID(bLocal_1103))
	{
		SET_BLIP_BLINK(bLocal_1103, 0, 0, 5f);
		SET_BLIP_SCALE(bLocal_1103, 0,75f);
	}
	if (IS_BLIP_VALID(bLocal_1104))
	{
		SET_BLIP_BLINK(bLocal_1104, 0, 0, 5f);
		SET_BLIP_SCALE(bLocal_1104, 0,75f);
	}
	if (IS_BLIP_VALID(bLocal_1105))
	{
		SET_BLIP_BLINK(bLocal_1105, 0, 0, 5f);
		SET_BLIP_SCALE(bLocal_1105, 0,75f);
	}
	bVar1 = bLocal_1129;
	Function_483(iParam0, iParam1);
	FLASH_SET_INT("help", "nactiveNum", bLocal_1129);
	switch (bLocal_1129)
	{
		case 0x00000001:
			if (IS_BLIP_VALID(bLocal_1101))
			{
				SET_BLIP_BLINK(bLocal_1101, 1, iVar0, -1.0f);
				SET_BLIP_SCALE(bLocal_1101, 1,25f);
			}
			if (Function_482(5, 1, 0))
			{
				Function_480();
			}
			else if (bVar1 == bLocal_1129 && !bLocal_1129 != 4294967295)
			{
				Function_479(StackVal, StackVal, vLocal_1106, fParam2);
			}
			break;
		
		case 0x00000002:
			if (IS_BLIP_VALID(bLocal_1102))
			{
				SET_BLIP_BLINK(bLocal_1102, 1, iVar0, -1.0f);
				SET_BLIP_SCALE(bLocal_1102, 1,25f);
			}
			if (Function_482(5, 1, 0))
			{
				Function_480();
			}
			else if (bVar1 == bLocal_1129 && !bLocal_1129 != 4294967295)
			{
				Function_479(StackVal, StackVal, vLocal_1109, fParam2);
			}
			break;
		
		case 0x00000003:
			if (IS_BLIP_VALID(bLocal_1103))
			{
				SET_BLIP_BLINK(bLocal_1103, 1, iVar0, -1.0f);
				SET_BLIP_SCALE(bLocal_1103, 1,25f);
			}
			if (Function_482(5, 1, 0))
			{
				Function_480();
			}
			else if (bVar1 == bLocal_1129 && !bLocal_1129 != 4294967295)
			{
				Function_479(StackVal, StackVal, vLocal_1112, fParam2);
			}
			break;
		
		case 0x00000004:
			if (IS_BLIP_VALID(bLocal_1104))
			{
				SET_BLIP_BLINK(bLocal_1104, 1, iVar0, -1.0f);
				SET_BLIP_SCALE(bLocal_1104, 1,25f);
			}
			if (Function_482(5, 1, 0))
			{
				Function_480();
			}
			else if (bVar1 == bLocal_1129 && !bLocal_1129 != 4294967295)
			{
				Function_479(StackVal, StackVal, vLocal_1115, fParam2);
			}
			break;
		
		case 0x00000005:
			if (IS_BLIP_VALID(bLocal_1105))
			{
				SET_BLIP_BLINK(bLocal_1105, 1, iVar0, -1.0f);
				SET_BLIP_SCALE(bLocal_1105, 1,25f);
			}
			if (Function_482(5, 1, 0))
			{
				Function_480();
			}
			else if (bVar1 == bLocal_1129 && !bLocal_1129 != 4294967295)
			{
				Function_479(StackVal, StackVal, vLocal_1118, fParam2);
			}
			break;
	}
	if (bVar1 == bLocal_1129 && !bLocal_1129 != 4294967295)
	{
		Function_496();
	}
	return;
}

void Function_479(vector3 vParam0, float fParam3) //Position: 0x18B37 / 101175
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	UPDATE_AIMRAMP(&uVar0, &uVar1, bLocal_1165, "roamNew", 1);
	if (!Function_73(StackVal, StackVal, vParam0))
	{
		GET_CAMERA_POSITION(bLocal_1164, &vVar2);
		GET_CAMERA_DIRECTION(bLocal_1164, &vVar5);
		RESET_CAMERASHOT_TARGET(bLocal_1172, 0);
		SET_CAMERASHOT_POSITION(bLocal_1172, vVar2);
		SET_CAMERASHOT_DIRECTION(StackVal, -Vector(vVar5, bLocal_1172, StackVal), 1);
		SET_CAMERASHOT_FOV(bLocal_1172, 25,8f);
		GET_OBJECT_RELATIVE_POSITION(Local_4.f_2552, vLocal_1169, &vLocal_1030);
		vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vLocal_1030, vParam0, StackVal) };
		VNORMALIZE(&vVar8);
		vLocal_1030 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar8, vLocal_1030, StackVal) * Vector(1,4f, 1,4f, 1,4f), StackVal, StackVal) };
		RESET_CAMERASHOT_TARGET(bLocal_1173, 0);
		SET_CAMERASHOT_POSITION(bLocal_1173, vLocal_1030);
		SET_CAMERASHOT_TARGET_POSITION(bLocal_1173, vParam0, 0);
		SET_CAMERASHOT_FOV(bLocal_1173, 25,8f);
		if (IS_PROCESSING_CAMERA_SHOT_TRANSITION(bLocal_1164))
		{
			END_CURRENT_CAMERA_SHOT_TRANSITION(bLocal_1164);
		}
		if (fParam3 < 0.0f)
		{
			ADD_CAMERA_SHOT_TRANSITION_HOLD(bLocal_1164, bLocal_1172, fParam3, 4294967295);
		}
		ADD_CAMERA_SHOT_TRANSITION_EASE_OUT(bLocal_1164, bLocal_1172, bLocal_1173, 1.0f, 4294967295, 0);
		SET_CAMERA_TARGET_POSITION(bLocal_1164, vParam0, 0);
		vLocal_1166 = { StackVal, StackVal, vParam0 };
		FORCE_LOOK_AT_COORD(Global_34573, &vLocal_1166, 3212836864);
	}
}

void Function_480() //Position: 0x18C4E / 101454
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	bVar6 = Function_481();
	if (IS_ACTOR_VALID(bVar6))
	{
		if (bVar6 != bLocal_1051)
		{
			bLocal_1051 = bVar6;
			END_CURRENT_CAMERA_SHOT_TRANSITION(bLocal_1164);
			RESET_CAMERA_TARGET(bLocal_1164, 0);
			GET_CAMERA_POSITION(bLocal_1164, &vVar0);
			GET_CAMERA_DIRECTION(bLocal_1164, &vVar3);
			SET_CAMERASHOT_POSITION(bLocal_1172, vVar0);
			SET_CAMERASHOT_DIRECTION(StackVal, -Vector(vVar3, bLocal_1172, StackVal), 1);
			SET_CAMERASHOT_FOV(bLocal_1172, 25,8f);
			SET_CAMERASHOT_POSITION(bLocal_1173, vVar0);
			SET_CAMERASHOT_TARGET_OBJECT(bLocal_1173, bLocal_1051, 0);
			SET_CAMERASHOT_FOV(bLocal_1173, 25,8f);
			ADD_CAMERA_SHOT_TRANSITION_EASE_OUT(bLocal_1164, bLocal_1172, bLocal_1173, 1.0f, 4294967295, 0);
			SET_CAMERA_TARGET_OBJECT(bLocal_1164, bLocal_1051, 0);
		}
	}
	return;
}

var Function_481() //Position: 0x18CE5 / 101605
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	
	if (((StackVal && IS_ACTOR_ALIVE(IS_ACTOR_VALID(Local_1036))) && !DECOR_CHECK_EXIST(Local_1036, "kersploded")) && !DECOR_CHECK_EXIST(Local_1036, "teleported"))
	{
		Function_292(Local_1036);
		vVar0 = { StackVal, StackVal, Function_292(Local_1036) };
		bVar6 = true;
	}
	if (((StackVal && IS_ACTOR_ALIVE(IS_ACTOR_VALID(Local_1041))) && !DECOR_CHECK_EXIST(Local_1041, "kersploded")) && !DECOR_CHECK_EXIST(Local_1041, "teleported"))
	{
		Function_292(Local_1041);
		vVar3 = { StackVal, StackVal, Function_292(Local_1041) };
		bVar7 = true;
	}
	if (bVar6 && bVar7)
	{
		Function_399();
		Function_399();
		if (VDIST(vVar0, Function_399()) > VDIST(vVar3, Function_399()))
		{
			return Local_1036;
		}
		return Local_1041;
	}
	if (bVar6)
	{
		return Local_1036;
	}
	if (bVar7)
	{
		return Local_1041;
	}
	return "";
}

bool Function_482(int iParam0, int iParam1, bool bParam2) //Position: 0x18DC2 / 101826
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_DOWN(iVar0, iParam0, iParam1, bParam2);
	if (bVar1)
	{
		switch (iParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_DOWN(iVar0, 15, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 13, iParam1, bParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_DOWN(iVar0, 14, iParam1, bParam2) || IS_BUTTON_DOWN(iVar0, 12, iParam1, bParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

void Function_483(bool bParam0, bool bParam1) //Position: 0x18E3F / 101951
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	bVar3 = false;
	if (IS_OBJECT_VALID(bLocal_1059))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bLocal_1059, bLocal_1163))
		{
			ADD_OBJECT_TO_OBJECTSET(bLocal_1059, bLocal_1163);
		}
	}
	if (IS_OBJECT_VALID(bLocal_1060))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bLocal_1060, bLocal_1163))
		{
			ADD_OBJECT_TO_OBJECTSET(bLocal_1060, bLocal_1163);
		}
	}
	if (IS_OBJECT_VALID(bLocal_1061))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bLocal_1061, bLocal_1163))
		{
			ADD_OBJECT_TO_OBJECTSET(bLocal_1061, bLocal_1163);
		}
	}
	if (IS_OBJECT_VALID(bLocal_1062))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bLocal_1062, bLocal_1163))
		{
			ADD_OBJECT_TO_OBJECTSET(bLocal_1062, bLocal_1163);
		}
	}
	if (IS_OBJECT_VALID(bLocal_1063))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bLocal_1063, bLocal_1163))
		{
			ADD_OBJECT_TO_OBJECTSET(bLocal_1063, bLocal_1163);
		}
	}
	switch (bLocal_1129)
	{
		case 0x00000001:
			bVar5 = bLocal_1059;
			vVar0 = { StackVal, StackVal, vLocal_1106 };
			break;
		
		case 0x00000002:
			bVar5 = bLocal_1060;
			vVar0 = { StackVal, StackVal, vLocal_1109 };
			break;
		
		case 0x00000003:
			bVar5 = bLocal_1061;
			vVar0 = { StackVal, StackVal, vLocal_1112 };
			break;
		
		case 0x00000004:
			bVar5 = bLocal_1062;
			vVar0 = { StackVal, StackVal, vLocal_1115 };
			break;
		
		case 0x00000005:
			bVar5 = bLocal_1063;
			vVar0 = { StackVal, StackVal, vLocal_1118 };
			break;
		
		default:
			bLocal_1129 = 4294967295;
			break;
	}
	if (!bLocal_1129 != 4294967295)
	{
		if (!bParam1)
		{
			if (bParam0)
			{
				while (bVar3 < (GET_OBJECTSET_SIZE(bLocal_1163) - 1))
				{
					bVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bLocal_1163);
					Function_411(bVar6);
					if (VDIST(Function_411(bVar6), *(&Local_4 + 1692[16])) < VDIST(vVar0, *(&Local_4 + 1692[16])))
					{
						REMOVE_OBJECT_FROM_OBJECTSET(bVar6, bLocal_1163);
					}
					else
					{
						bVar3++;
					}
				}
			}
			else
			{
				while (bVar3 < (GET_OBJECTSET_SIZE(bLocal_1163) - 1))
				{
					bVar7 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bLocal_1163);
					Function_411(bVar7);
					if (VDIST(Function_411(bVar7), *(&Local_4 + 1692[26])) < VDIST(vVar0, *(&Local_4 + 1692[26])))
					{
						REMOVE_OBJECT_FROM_OBJECTSET(bVar7, bLocal_1163);
					}
					else
					{
						bVar3++;
					}
				}
			}
		}
		if (GET_OBJECTSET_SIZE(bLocal_1163) < 1 && IS_OBJECT_VALID(bVar5))
		{
			if (IS_OBJECT_IN_OBJECTSET(bVar5, bLocal_1163))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar5, bLocal_1163);
			}
		}
		iVar4 = Function_484(StackVal, StackVal, &bLocal_1163, vVar0, 0, 0x42960000);
		if (bLocal_1059 == iVar4)
		{
			bLocal_1129 = true;
		}
		else if (bLocal_1060 == iVar4)
		{
			bLocal_1129 = 2;
		}
		else if (bLocal_1061 == iVar4)
		{
			bLocal_1129 = 3;
		}
		else if (bLocal_1062 == iVar4)
		{
			bLocal_1129 = 4;
		}
		else if (bLocal_1063 == iVar4)
		{
			bLocal_1129 = 5;
		}
	}
	return;
}

var Function_484(bool bParam0, vector3 vParam1, float fParam4, float fParam5) //Position: 0x190AD / 102573
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	
	bVar3 = 999999.0f;
	if (!IS_OBJECTSET_VALID(*bParam0))
	{
		return "";
	}
	if (GET_OBJECTSET_SIZE(*bParam0) < 0)
	{
		return "";
	}
	bVar7 = false;
	while (bVar7 < (GET_OBJECTSET_SIZE(*bParam0) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, *bParam0);
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vParam1, vVar4);
		if ((bVar2 >= bVar3 && bVar2 <= fParam4) && bVar2 >= fParam5)
		{
			bVar3 = bVar2;
			bVar1 = bVar0;
		}
		bVar7++;
	}
	return bVar1;
}

void Function_485() //Position: 0x19130 / 102704
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_WagonInRange", "Rebel04_WagonInRange", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_486(vector3 vParam0, float fParam3) //Position: 0x19181 / 102785
{
	if (IS_ACTOR_VALID(Local_1036))
	{
		if (Function_474(StackVal, StackVal, Local_1036, vParam0, fParam3))
		{
			return 1;
		}
	}
	if (IS_ACTOR_VALID(Local_1041))
	{
		if (Function_474(StackVal, StackVal, Local_1041, vParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

void Function_487() //Position: 0x191C2 / 102850
{
	switch (bLocal_1129)
	{
		case 0x00000001:
			if (IS_BLIP_VALID(bLocal_1101))
			{
				REMOVE_BLIP(bLocal_1101);
			}
			if (IS_OBJECT_VALID(bLocal_1059))
			{
				Function_489(StackVal, StackVal, bLocal_1059, vLocal_1106, 1);
				Function_488(StackVal, StackVal, bLocal_1059, vLocal_1106);
			}
			break;
		
		case 0x00000002:
			if (IS_BLIP_VALID(bLocal_1102))
			{
				REMOVE_BLIP(bLocal_1102);
			}
			if (IS_OBJECT_VALID(bLocal_1060))
			{
				Function_489(StackVal, StackVal, bLocal_1060, vLocal_1109, 2);
				Function_488(StackVal, StackVal, bLocal_1060, vLocal_1109);
			}
			break;
		
		case 0x00000003:
			if (IS_BLIP_VALID(bLocal_1103))
			{
				REMOVE_BLIP(bLocal_1103);
			}
			if (IS_OBJECT_VALID(bLocal_1061))
			{
				Function_489(StackVal, StackVal, bLocal_1061, vLocal_1112, 3);
				Function_488(StackVal, StackVal, bLocal_1062, vLocal_1112);
			}
			break;
		
		case 0x00000004:
			if (IS_BLIP_VALID(bLocal_1104))
			{
				REMOVE_BLIP(bLocal_1104);
			}
			if (IS_OBJECT_VALID(bLocal_1062))
			{
				Function_489(StackVal, StackVal, bLocal_1062, vLocal_1115, 4);
				Function_488(StackVal, StackVal, bLocal_1062, vLocal_1115);
			}
			break;
		
		case 0x00000005:
			if (IS_BLIP_VALID(bLocal_1105))
			{
				REMOVE_BLIP(bLocal_1105);
			}
			if (IS_OBJECT_VALID(bLocal_1063))
			{
				Function_489(StackVal, StackVal, bLocal_1063, vLocal_1118, 5);
				Function_488(StackVal, StackVal, bLocal_1063, vLocal_1118);
			}
			break;
	}
	if (IS_OBJECT_VALID(bLocal_1059))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bLocal_1059, bLocal_1163))
		{
			ADD_OBJECT_TO_OBJECTSET(bLocal_1059, bLocal_1163);
		}
	}
	if (IS_OBJECT_VALID(bLocal_1060))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bLocal_1060, bLocal_1163))
		{
			ADD_OBJECT_TO_OBJECTSET(bLocal_1060, bLocal_1163);
		}
	}
	if (IS_OBJECT_VALID(bLocal_1061))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bLocal_1061, bLocal_1163))
		{
			ADD_OBJECT_TO_OBJECTSET(bLocal_1061, bLocal_1163);
		}
	}
	if (IS_OBJECT_VALID(bLocal_1062))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bLocal_1062, bLocal_1163))
		{
			ADD_OBJECT_TO_OBJECTSET(bLocal_1062, bLocal_1163);
		}
	}
	if (IS_OBJECT_VALID(bLocal_1063))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bLocal_1063, bLocal_1163))
		{
			ADD_OBJECT_TO_OBJECTSET(bLocal_1063, bLocal_1163);
		}
	}
	Function_478(1, 1, 1.0f);
	return;
}

void Function_488(bool bParam0, vector3 vParam1) //Position: 0x1938E / 103310
{
	if (IS_OBJECT_VALID(bLocal_1059))
	{
		if (VDIST(vParam1, vLocal_1106) >= 5.0f && bLocal_1059 == bParam0)
		{
			if (IS_BLIP_VALID(bLocal_1101))
			{
				REMOVE_BLIP(bLocal_1101);
			}
			Function_489(StackVal, StackVal, bLocal_1059, vLocal_1106, 1);
		}
	}
	if (IS_OBJECT_VALID(bLocal_1060))
	{
		if (VDIST(vParam1, vLocal_1109) >= 5.0f && bLocal_1060 == bParam0)
		{
			if (IS_BLIP_VALID(bLocal_1102))
			{
				REMOVE_BLIP(bLocal_1102);
			}
			Function_489(StackVal, StackVal, bLocal_1060, vLocal_1109, 2);
		}
	}
	if (IS_OBJECT_VALID(bLocal_1061))
	{
		if (VDIST(vParam1, vLocal_1112) >= 5.0f && bLocal_1061 == bParam0)
		{
			if (IS_BLIP_VALID(bLocal_1103))
			{
				REMOVE_BLIP(bLocal_1103);
			}
			Function_489(StackVal, StackVal, bLocal_1061, vLocal_1112, 3);
		}
	}
	if (IS_OBJECT_VALID(bLocal_1062))
	{
		if (VDIST(vParam1, vLocal_1115) >= 5.0f && bLocal_1062 == bParam0)
		{
			if (IS_BLIP_VALID(bLocal_1104))
			{
				REMOVE_BLIP(bLocal_1104);
			}
			Function_489(StackVal, StackVal, bLocal_1062, vLocal_1115, 4);
		}
	}
	if (IS_OBJECT_VALID(bLocal_1063))
	{
		if (VDIST(vParam1, vLocal_1118) >= 5.0f && bLocal_1063 == bParam0)
		{
			if (IS_BLIP_VALID(bLocal_1105))
			{
				REMOVE_BLIP(bLocal_1105);
			}
			Function_489(StackVal, StackVal, bLocal_1063, vLocal_1118, 5);
		}
	}
}

void Function_489(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0x194C2 / 103618
{
	Function_491(StackVal, StackVal, Local_1036, vParam1);
	Function_491(StackVal, StackVal, Local_1041, vParam1);
	Function_216(&iLocal_1083);
	Function_490(&vParam1, "BuriedDynamiteExplosion", 0, 1);
	DESTROY_OBJECT(bParam0);
	FLASH_SET_INT("help", "explodedNum", bParam4);
	iLocal_1057++;
}

void Function_490(float fParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0x1952D / 103725
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(fParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_491(bool bParam0, vector3 vParam1) //Position: 0x19549 / 103753
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	struct<5> Var11;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_474(StackVal, StackVal, bParam0, vParam1, 7,5f) && !DECOR_CHECK_EXIST(bParam0, "kersploded"))
		{
			bVar2 = GET_ACTOR_IN_VEHICLE_SEAT(bParam0, false);
			if (IS_ACTOR_VALID(bVar2))
			{
				KILL_ACTOR(bVar2);
				ENABLE_VEHICLE_SEAT(bParam0, false, 0);
			}
			bVar2 = GET_ACTOR_IN_VEHICLE_SEAT(bParam0, true);
			if (IS_ACTOR_VALID(bVar2))
			{
				KILL_ACTOR(bVar2);
				ENABLE_VEHICLE_SEAT(bParam0, true, 0);
			}
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					bVar3 = GET_ACTOR_ENUM(bVar1);
					Function_292(bVar1);
					vVar4 = { StackVal, StackVal, Function_292(bVar1) };
					Function_291(bVar1);
					vVar7 = { StackVal, StackVal, Function_291(bVar1) };
					DETACH_DRAFT_FROM_VEHICLE_BY_ACTOR(bVar1, bParam0);
				}
				bVar0++;
			}
			DECOR_SET_FLOAT(bParam0, "kersploded", GET_CURRENT_GAME_TIME());
			REMOVE_ALL_OBJECT_ATTACHMENTS(bParam0);
			bVar10 = GET_PHYSINST_FROM_ACTOR(bParam0);
			if (bParam0 == Local_1041)
			{
				Function_371(bParam0);
				vLocal_1030 = { StackVal, StackVal, Function_371(bParam0) };
				Function_291(bParam0);
				vLocal_1033 = { StackVal, StackVal, Function_291(bParam0) };
				CREATE_PROP_IN_LAYOUT(bLocal_678, "wagon03_piece01", "p_gen_wagonExplode01ax", vLocal_1030, vLocal_1033, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_678, "wagon03_piece02", "p_gen_wagonExplode01bx", vLocal_1030, vLocal_1033, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_678, "wagon03_piece03", "p_gen_wagonExplode01cx", vLocal_1030, vLocal_1033, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_678, "wagon03_piece04", "p_gen_wagonExplode01dx", vLocal_1030, vLocal_1033, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_678, "wagon03_piece05", "p_gen_wagonExplode01ex", vLocal_1030, vLocal_1033, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_678, "wagon03_piece06", "p_gen_wagonExplode01fx", vLocal_1030, vLocal_1033, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_678, "wagon03_piece07", "p_gen_wagonExplodeYoke01x", vLocal_1030, vLocal_1033, 0);
			}
			else if (bParam0 == Local_1036)
			{
				Function_371(bParam0);
				vLocal_1030 = { StackVal, StackVal, Function_371(bParam0) };
				Function_291(bParam0);
				vLocal_1033 = { StackVal, StackVal, Function_291(bParam0) };
				CREATE_PROP_IN_LAYOUT(bLocal_678, "wagon01_piece01", "p_gen_wagonExplode01ax", vLocal_1030, vLocal_1033, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_678, "wagon01_piece02", "p_gen_wagonExplode01bx", vLocal_1030, vLocal_1033, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_678, "wagon01_piece03", "p_gen_wagonExplode01cx", vLocal_1030, vLocal_1033, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_678, "wagon01_piece04", "p_gen_wagonExplode01dx", vLocal_1030, vLocal_1033, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_678, "wagon01_piece05", "p_gen_wagonExplode01ex", vLocal_1030, vLocal_1033, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_678, "wagon01_piece06", "p_gen_wagonExplode01fx", vLocal_1030, vLocal_1033, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_678, "wagon01_piece07", "p_gen_wagonExplodeYoke01x", vLocal_1030, vLocal_1033, 0);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
			}
			HIDE_PHYSINST(GET_PHYSINST_FROM_ACTOR(bParam0));
			Function_371(bParam0);
			Var11 = { StackVal, StackVal, Function_371(bParam0) };
			Var11.f_4 = (StackVal - 10.0f);
			TELEPORT_ACTOR(bParam0, &Var11, 1, 1, 1);
			DECOR_SET_BOOL(bParam0, "teleported", true);
		}
	}
}

void Function_492() //Position: 0x19A0B / 104971
{
	if (IS_BLIP_VALID(bLocal_1101) && !IS_OBJECT_VALID(bLocal_1059))
	{
		REMOVE_BLIP(bLocal_1101);
	}
	if (IS_BLIP_VALID(bLocal_1102) && !IS_OBJECT_VALID(bLocal_1060))
	{
		REMOVE_BLIP(bLocal_1102);
	}
	if (IS_BLIP_VALID(bLocal_1103) && !IS_OBJECT_VALID(bLocal_1061))
	{
		REMOVE_BLIP(bLocal_1103);
	}
	if (IS_BLIP_VALID(bLocal_1104) && !IS_OBJECT_VALID(bLocal_1062))
	{
		REMOVE_BLIP(bLocal_1104);
	}
	if (IS_BLIP_VALID(bLocal_1105) && !IS_OBJECT_VALID(bLocal_1063))
	{
		REMOVE_BLIP(bLocal_1105);
	}
	return;
}

void Function_493(vector3 vParam0) //Position: 0x19A84 / 105092
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	
	UPDATE_AIMRAMP(&fVar6, &fVar7, bLocal_1165, "roamNew", 1);
	if (!Function_482(5, 1, 0))
	{
		if (IS_ACTOR_VALID(bLocal_1051))
		{
			bLocal_1051 = "";
			RESET_CAMERA_TARGET(bLocal_1164, 0);
			END_CURRENT_CAMERA_SHOT_TRANSITION(bLocal_1164);
			RESET_CAMERA_TARGET(bLocal_1164, 0);
			RESET_CAMERASHOT_TARGET(bLocal_1172, 0);
			RESET_CAMERASHOT_TARGET(bLocal_1173, 0);
			GET_CAMERA_POSITION(bLocal_1164, &vVar0);
			GET_CAMERA_DIRECTION(bLocal_1164, &vVar3);
			SET_CAMERASHOT_POSITION(bLocal_1172, vVar0);
			SET_CAMERASHOT_DIRECTION(StackVal, -Vector(vVar3, bLocal_1172, StackVal), 1);
			SET_CAMERASHOT_FOV(bLocal_1172, 25,8f);
			SET_CAMERASHOT_POSITION(bLocal_1173, vVar0);
			SET_CAMERASHOT_TARGET_POSITION(bLocal_1173, vParam0, 0);
			SET_CAMERASHOT_FOV(bLocal_1173, 25,8f);
			ADD_CAMERA_SHOT_TRANSITION_EASE_OUT(bLocal_1164, bLocal_1172, bLocal_1173, 1.0f, 4294967295, 0);
			vLocal_1166 = { StackVal, StackVal, vParam0 };
			SET_CAMERA_TARGET_POSITION(bLocal_1164, vLocal_1166, 0);
		}
		else if (!Function_73(StackVal, StackVal, vParam0))
		{
			if (fVar6 == 0.0f || fVar7 == 0.0f)
			{
				Function_411(bLocal_1164);
				vVar0 = { StackVal, StackVal, Function_411(bLocal_1164) };
				vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vLocal_1166, StackVal) };
				fVar14 = (TAN_DEGREE(GET_CAMERA_FOV(bLocal_1164)) * 57,2958f);
				Function_494(&vVar11, (fVar7 * fVar14));
				vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Function_494(&vVar11, (fVar7 * fVar14)), vVar0, StackVal) };
				vVar8.f_4 = (vVar8.y + (fVar6 * fVar14));
				if (VDIST(vVar8, vParam0) >= 40.0f)
				{
					vLocal_1166 = { StackVal, StackVal, vVar8 };
					RESET_CAMERASHOT_TARGET(bLocal_1172, 0);
					RESET_CAMERASHOT_TARGET(bLocal_1173, 0);
					SET_CAMERA_TARGET_POSITION(bLocal_1164, vVar8, 0);
					bLocal_1051 = "";
				}
			}
			else if (VMAG(Vector(StackVal, StackVal, StackVal) - Vector(vLocal_1166, vParam0, StackVal)) < 0,002f)
			{
				END_CURRENT_CAMERA_SHOT_TRANSITION(bLocal_1164);
				RESET_CAMERA_TARGET(bLocal_1164, 0);
				RESET_CAMERASHOT_TARGET(bLocal_1172, 0);
				RESET_CAMERASHOT_TARGET(bLocal_1173, 0);
				GET_CAMERA_POSITION(bLocal_1164, &vVar0);
				GET_CAMERA_DIRECTION(bLocal_1164, &vVar3);
				SET_CAMERASHOT_POSITION(bLocal_1172, vVar0);
				SET_CAMERASHOT_DIRECTION(StackVal, -Vector(vVar3, bLocal_1172, StackVal), 1);
				SET_CAMERASHOT_FOV(bLocal_1172, 25,8f);
				SET_CAMERASHOT_POSITION(bLocal_1173, vVar0);
				SET_CAMERASHOT_TARGET_POSITION(bLocal_1173, vParam0, 0);
				SET_CAMERASHOT_FOV(bLocal_1173, 25,8f);
				ADD_CAMERA_SHOT_TRANSITION_EASE_OUT(bLocal_1164, bLocal_1172, bLocal_1173, 1.0f, 4294967295, 0);
				vLocal_1166 = { StackVal, StackVal, vParam0 };
				SET_CAMERA_TARGET_POSITION(bLocal_1164, vLocal_1166, 0);
			}
		}
	}
	else
	{
		Function_480();
	}
	return;
}

vector3 Function_494(var uParam0, bool bParam1) //Position: 0x19C9E / 105630
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, *uParam0 };
	ROTATE_VECTOR_XZ(&vVar0, bParam1, 0);
	return StackVal, StackVal, vVar0;
}

void Function_495() //Position: 0x19CB8 / 105656
{
	FLASH_SET_INT("help", "explodedNum", false);
	FLASH_SET_INT("help", "totalBombs", false);
	FLASH_SET_INT("help", "nactiveNum", false);
	if (!FLASH_GET_BOOL("help", "nShowBombs"))
	{
		FLASH_SET_BOOL("help", "nShowBombs", true);
	}
	if (FLASH_GET_INT("help", "totalBombs") != bLocal_1056)
	{
		FLASH_SET_INT("help", "totalBombs", bLocal_1056);
	}
	if (FLASH_GET_INT("help", "nactiveNum") != bLocal_1129)
	{
		FLASH_SET_INT("help", "nactiveNum", bLocal_1129);
	}
	if (!IS_OBJECT_VALID(bLocal_1059))
	{
		FLASH_SET_INT("help", "explodedNum", true);
	}
	if (!IS_OBJECT_VALID(bLocal_1060) && bLocal_1056 < 1)
	{
		FLASH_SET_INT("help", "explodedNum", 2);
	}
	if (!IS_OBJECT_VALID(bLocal_1061) && bLocal_1056 < 2)
	{
		FLASH_SET_INT("help", "explodedNum", 3);
	}
	if (!IS_OBJECT_VALID(bLocal_1062) && bLocal_1056 < 3)
	{
		FLASH_SET_INT("help", "explodedNum", 4);
	}
	if (!IS_OBJECT_VALID(bLocal_1063) && bLocal_1056 < 4)
	{
		FLASH_SET_INT("help", "explodedNum", 5);
	}
	return;
}

void Function_496() //Position: 0x19E75 / 106101
{
	Function_213();
	switch (bLocal_1129)
	{
		case 0x00000001:
			if (IS_OBJECT_VALID(bLocal_1059))
			{
				CREATE_OBJECT_GLOW(bLocal_1059, 2, 0.0f, 0.0f, 0.0f, 1);
			}
			break;
		
		case 0x00000002:
			if (IS_OBJECT_VALID(bLocal_1060))
			{
				CREATE_OBJECT_GLOW(bLocal_1060, 2, 0.0f, 0.0f, 0.0f, 1);
			}
			break;
		
		case 0x00000003:
			if (IS_OBJECT_VALID(bLocal_1061))
			{
				CREATE_OBJECT_GLOW(bLocal_1061, 2, 0.0f, 0.0f, 0.0f, 1);
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(bLocal_1062))
			{
				CREATE_OBJECT_GLOW(bLocal_1062, 2, 0.0f, 0.0f, 0.0f, 1);
			}
			break;
		
		case 0x00000005:
			if (IS_OBJECT_VALID(bLocal_1063))
			{
				CREATE_OBJECT_GLOW(bLocal_1063, 2, 0.0f, 0.0f, 0.0f, 1);
			}
			break;
	}
	return;
}

void Function_497() //Position: 0x19F17 / 106263
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Function_492();
	bLocal_1056 = false;
	if (IS_OBJECT_VALID(bLocal_1059))
	{
		ADD_OBJECT_TO_OBJECTSET(bLocal_1059, bLocal_1163);
		bLocal_1056++;
	}
	if (IS_OBJECT_VALID(bLocal_1060))
	{
		ADD_OBJECT_TO_OBJECTSET(bLocal_1060, bLocal_1163);
		bLocal_1056++;
	}
	if (IS_OBJECT_VALID(bLocal_1061))
	{
		ADD_OBJECT_TO_OBJECTSET(bLocal_1061, bLocal_1163);
		bLocal_1056++;
	}
	if (IS_OBJECT_VALID(bLocal_1062))
	{
		ADD_OBJECT_TO_OBJECTSET(bLocal_1062, bLocal_1163);
		bLocal_1056++;
	}
	if (IS_OBJECT_VALID(bLocal_1063))
	{
		ADD_OBJECT_TO_OBJECTSET(bLocal_1063, bLocal_1163);
		bLocal_1056++;
	}
	bVar1 = 0.0f;
	bVar2 = 0.0f;
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(bLocal_1163) - 1))
	{
		GET_OBJECT_POSITION(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bLocal_1163), &vLocal_1030);
		bVar1 = VDIST(*(&Local_4 + 1692[16]), vLocal_1030);
		if (bVar1 > bVar2 || bVar2 != 0.0f)
		{
			bVar2 = bVar1;
			bLocal_1129 = bVar0 + 1;
		}
		bVar0++;
	}
	return;
}

void Function_498() //Position: 0x1A005 / 106501
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4[5];
	int iVar20;
	vector3 vVar21;
	
	if (IS_OBJECT_VALID(bLocal_1059))
	{
		DESTROY_OBJECT(bLocal_1059);
	}
	if (IS_OBJECT_VALID(bLocal_1060))
	{
		DESTROY_OBJECT(bLocal_1060);
	}
	if (IS_OBJECT_VALID(bLocal_1061))
	{
		DESTROY_OBJECT(bLocal_1061);
	}
	if (IS_OBJECT_VALID(bLocal_1062))
	{
		DESTROY_OBJECT(bLocal_1062);
	}
	if (IS_OBJECT_VALID(bLocal_1063))
	{
		DESTROY_OBJECT(bLocal_1063);
	}
	if (IS_BLIP_VALID(bLocal_1101))
	{
		REMOVE_BLIP(bLocal_1101);
	}
	if (IS_BLIP_VALID(bLocal_1102))
	{
		REMOVE_BLIP(bLocal_1102);
	}
	if (IS_BLIP_VALID(bLocal_1103))
	{
		REMOVE_BLIP(bLocal_1103);
	}
	if (IS_BLIP_VALID(bLocal_1104))
	{
		REMOVE_BLIP(bLocal_1104);
	}
	if (IS_BLIP_VALID(bLocal_1105))
	{
		REMOVE_BLIP(bLocal_1105);
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_624))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_624, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			bVar2 = Function_500(bVar1);
			if (IS_OBJECT_VALID(bVar2))
			{
				DESTROY_OBJECT(bVar2);
			}
			bVar2 = Function_499(bVar1);
			if (IS_OBJECT_VALID(bVar2))
			{
				DESTROY_OBJECT(bVar2);
			}
		}
		bVar0++;
	}
	iVar3 = 0;
	if (!Function_73(StackVal, StackVal, vLocal_1106))
	{
		vVar4[03] = { StackVal, StackVal, vLocal_1106 };
		iVar3++;
	}
	if (!Function_73(StackVal, StackVal, vLocal_1109))
	{
		vVar4[13] = { StackVal, StackVal, vLocal_1109 };
		iVar3++;
	}
	if (!Function_73(StackVal, StackVal, vLocal_1112))
	{
		vVar4[23] = { StackVal, StackVal, vLocal_1112 };
		iVar3++;
	}
	if (!Function_73(StackVal, StackVal, vLocal_1115))
	{
		vVar4[33] = { StackVal, StackVal, vLocal_1115 };
		iVar3++;
	}
	if (!Function_73(StackVal, StackVal, vLocal_1118))
	{
		vVar4[43] = { StackVal, StackVal, vLocal_1118 };
		iVar3++;
	}
	bVar0 = false;
	while (bVar0 < (iVar3 - 1))
	{
		iVar20 = bVar0 + 1;
		while (iVar20 < (iVar3 - 1))
		{
			if (StackVal && !Function_73(StackVal, (StackVal && !Function_73(StackVal, VDIST(vVar4[iVar203], *(&Local_4 + 1692[16])) > VDIST(vVar4[bVar03], *(&Local_4 + 1692[16])), vVar4[bVar03])), vVar4[iVar203]))
			{
				vVar21 = { StackVal, StackVal, vVar4[bVar03] };
				vVar4[bVar03] = { StackVal, StackVal, vVar4[iVar203] };
				vVar4[iVar203] = { StackVal, StackVal, vVar21 };
			}
			iVar20++;
		}
		bVar0++;
	}
	vLocal_1106 = { StackVal, StackVal, vVar4[03] };
	vLocal_1109 = { StackVal, StackVal, vVar4[13] };
	vLocal_1112 = { StackVal, StackVal, vVar4[23] };
	vLocal_1115 = { StackVal, StackVal, vVar4[33] };
	vLocal_1118 = { StackVal, StackVal, vVar4[43] };
	if (!Function_73(StackVal, StackVal, vLocal_1106) && !IS_OBJECT_VALID(bLocal_1059))
	{
		bLocal_1059 = CREATE_PROP_IN_LAYOUT(bLocal_678, Function_53(), "$/fragments/p_gen_dynamite04x", vLocal_1106, vLocal_1033, 1);
		SNAP_OBJECT_TO_GROUND(bLocal_1059, 2.0f, true, 1092616192);
		bLocal_1101 = ADD_BLIP_FOR_OBJECT(bLocal_1059, 404, 0f, 2, 0);
	}
	if (!Function_73(StackVal, StackVal, vLocal_1109) && !IS_OBJECT_VALID(bLocal_1060))
	{
		bLocal_1060 = CREATE_PROP_IN_LAYOUT(bLocal_678, Function_53(), "$/fragments/p_gen_dynamite04x", vLocal_1109, vLocal_1033, 1);
		SNAP_OBJECT_TO_GROUND(bLocal_1060, 2.0f, true, 1092616192);
		bLocal_1102 = ADD_BLIP_FOR_OBJECT(bLocal_1060, 404, 0f, 2, 0);
	}
	if (!Function_73(StackVal, StackVal, vLocal_1112) && !IS_OBJECT_VALID(bLocal_1061))
	{
		bLocal_1061 = CREATE_PROP_IN_LAYOUT(bLocal_678, Function_53(), "$/fragments/p_gen_dynamite04x", vLocal_1112, vLocal_1033, 1);
		SNAP_OBJECT_TO_GROUND(bLocal_1061, 2.0f, true, 1092616192);
		bLocal_1103 = ADD_BLIP_FOR_OBJECT(bLocal_1061, 404, 0f, 2, 0);
	}
	if (!Function_73(StackVal, StackVal, vLocal_1115) && !IS_OBJECT_VALID(bLocal_1062))
	{
		bLocal_1062 = CREATE_PROP_IN_LAYOUT(bLocal_678, Function_53(), "$/fragments/p_gen_dynamite04x", vLocal_1115, vLocal_1033, 1);
		SNAP_OBJECT_TO_GROUND(bLocal_1062, 2.0f, true, 1092616192);
		bLocal_1104 = ADD_BLIP_FOR_OBJECT(bLocal_1062, 404, 0f, 2, 0);
	}
	if (!Function_73(StackVal, StackVal, vLocal_1118) && !IS_OBJECT_VALID(bLocal_1063))
	{
		bLocal_1063 = CREATE_PROP_IN_LAYOUT(bLocal_678, Function_53(), "$/fragments/p_gen_dynamite04x", vLocal_1118, vLocal_1033, 1);
		SNAP_OBJECT_TO_GROUND(bLocal_1063, 2.0f, true, 1092616192);
		bLocal_1105 = ADD_BLIP_FOR_OBJECT(bLocal_1063, 404, 0f, 2, 0);
	}
	if (IS_BLIP_VALID(bLocal_1101))
	{
		SET_BLIP_BLINK(bLocal_1101, 1, 0, 5f);
		SET_BLIP_SCALE(bLocal_1101, 1,25f);
	}
	if (IS_BLIP_VALID(bLocal_1102))
	{
		SET_BLIP_SCALE(bLocal_1102, 0,75f);
	}
	if (IS_BLIP_VALID(bLocal_1103))
	{
		SET_BLIP_SCALE(bLocal_1103, 0,75f);
	}
	if (IS_BLIP_VALID(bLocal_1104))
	{
		SET_BLIP_SCALE(bLocal_1104, 0,75f);
	}
	if (IS_BLIP_VALID(bLocal_1105))
	{
		SET_BLIP_SCALE(bLocal_1105, 0,75f);
	}
	return;
}

bool Function_499(bool bParam0) //Position: 0x1A4E6 / 107750
{
	int iVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (vLocal_1182[iVar03] == bParam0)
			{
				return vLocal_1182[iVar03].z;
			}
			iVar0++;
		}
	}
	return "";
}

var Function_500(bool bParam0) //Position: 0x1A51E / 107806
{
	int iVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (vLocal_1182[iVar03] == bParam0)
			{
				return vLocal_1182[iVar03].y;
			}
			iVar0++;
		}
	}
	return "";
}

void Function_501() //Position: 0x1A556 / 107862
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_AllDetonated", "Rebel04_AllDetonated", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_502() //Position: 0x1A5A7 / 107943
{
	if (iLocal_687 < 3 && iLocal_687 > 105)
	{
		Function_554();
		Function_553();
		if (iLocal_687 > 9)
		{
			Function_550();
		}
	}
	switch (iLocal_687)
	{
		case 0x00000000:
			CLEAR_AMBIENT_OBJECTS_VOLUME(Local_4.f_780, 15);
			Function_454(0);
			Function_449(9);
			SET_ACTOR_HEALTH(bLocal_707, GET_ACTOR_MAX_HEALTH(bLocal_707));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_709[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				bLocal_708 = Function_453(StackVal, StackVal, *(&Local_4 + 892[06]), 0, 1, 1);
				if (!Function_452(bLocal_708))
				{
					Function_451(&Local_679);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 892[06]), 1, true, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_707, *(&Local_4 + 892[26]), 1, true, 1);
				Function_216(&iLocal_857);
				iLocal_687 = 1;
			}
			else
			{
				Function_216(&iLocal_857);
				iLocal_687 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_452(Global_30633[0])) && Function_549())
			{
				Function_216(&iLocal_857);
				iLocal_687 = 2;
			}
			break;
		
		case 0x00000002:
			if (!iLocal_709[0])
			{
				Function_337();
				Local_1046 = (*&Local_645 + 68)[02];
				Function_445((*&Local_645 + 68)[02]);
				Function_345(&(Local_927[117]), Local_1046, "Wagon", 0, 0x5f5e100, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_645 + 68)[02], *(&Local_4 + 892[66]), 1, true, 1);
				TASK_STAND_STILL(bLocal_707, -1.0f, 0, 0);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 892[16]), 1, true, 1);
			}
			if (IS_OBJECT_VALID(bLocal_1127))
			{
				Function_214(bLocal_1127);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1067))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_1067);
			}
			if (!IS_ACTORSET_VALID(Local_4.f_672))
			{
				Function_409();
				Function_548();
			}
			if (!IS_ACTORSET_VALID(Local_4.f_620))
			{
				Function_447();
			}
			Function_544();
			SET_DUST_LEVEL_MODIFIER(4294967295);
			if (Function_542(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_679, bLocal_686))
			{
				Function_216(&iLocal_857);
				iLocal_687 = 3;
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_216(&iLocal_857);
				iLocal_687 = 4;
			}
			Function_237(bLocal_686);
			Function_439(StackVal, StackVal, Function_237(bLocal_686), bLocal_686, Global_30633[2], Function_240(bLocal_686), 0);
			break;
		
		case 0x00000003:
			if (Function_527())
			{
				Function_216(&iLocal_857);
				iLocal_687 = 4;
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			FORCE_VEHICLE_CINEMATIC_CAMERA(0);
			if (!SQUAD_IS_VALID(bLocal_1055))
			{
				bLocal_1055 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_678, Function_53()));
			}
			if (!IS_OBJECT_VALID(bLocal_1070))
			{
				bLocal_1070 = Local_4.f_2552;
			}
			GET_OBJECT_POSITION(bLocal_1070, &vLocal_1030);
			if (!IS_GRINGO_VALID(bLocal_1131))
			{
				bLocal_1131 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_detonator", &vLocal_1030, 1.0f, 0);
			}
			GRINGO_ALLOW_ACTIVATION(bLocal_1131, false);
			RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
			SET_ANIM_SET_FOR_ACTOR(Global_34573, "pointing", 0);
			if (!GET_ACTOR_IN_VEHICLE_SEAT((*&Local_645 + 68)[02], false) != bLocal_707)
			{
				if (!SET_ACTOR_IN_VEHICLE(bLocal_707, (*&Local_645 + 68)[02], false))
				{
					LOG_ERROR("couldn't set the mexgirl in the wagon");
				}
			}
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_707);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(bLocal_707, 0);
			bLocal_1130 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2524, 2, 0, 0, 1, false);
			TASK_VEHICLE_LEAVE(false);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2528, 2, 0, 0, 1, false);
			TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_2468), "UseCase1", 4294967295, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(bLocal_707, bLocal_1130);
			TASK_SEQUENCE_RELEASE(bLocal_1130, 1);
			Function_437(8, 0, 1);
			ENABLE_VEHICLE_SEAT((*&Local_645 + 68)[02], false, 0);
			ENABLE_VEHICLE_SEAT((*&Local_645 + 68)[02], true, 0);
			AI_ACTOR_FORCE_SPEED(bLocal_707, 4);
			AI_SET_NAV_PATHFINDING_ENABLED(bLocal_707, false);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_707, true);
			bLocal_1069 = false;
			bLocal_1068 = false;
			bLocal_1056 = false;
			Function_416(&iLocal_1071);
			Function_157(Global_30679[2]);
			AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
			Function_417(0);
			Function_345(&(Local_927[317]), Local_4.f_624, "RebelSoldier", 0, 0x5f5e100, 1);
			Function_216(&iLocal_857);
			iLocal_687 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_526();
				Function_216(&iLocal_857);
				iLocal_687 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_276(&iLocal_857) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_413("Rebel04_obj02", 0x40f00000, 1, 2, 0, 0, 0);
				Function_216(&iLocal_857);
				Function_216(&bLocal_863);
				Function_216(&iLocal_866);
				iLocal_687 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_276(&iLocal_857) <= 8.0f)
			{
				Function_132("Rebel04_obj02_help_plant_dyn", 0x41200000, 1, 0, 2, 1, 0);
				DECOR_SET_INT(bLocal_678, "nhelpstate", false);
				Function_416(&iLocal_1092);
				Function_416(&iLocal_1153);
				Function_216(&iLocal_857);
				Function_216(&bLocal_863);
				Function_216(&iLocal_866);
				iLocal_687 = 9;
			}
			break;
		
		case 0x00000009:
			if (((bLocal_1056 >= 0 && !DECOR_CHECK_EXIST(bLocal_678, "waitingforinstr")) && !IS_SCRIPTED_CONVERSATION_ONGOING()) && Function_276(&iLocal_857) < 10.0f)
			{
				Function_525();
				DECOR_SET_BOOL(bLocal_678, "waitingforinstr", true);
			}
			if (!DECOR_CHECK_EXIST(bLocal_678, "alertedconvoy"))
			{
				Function_510();
				Function_509();
				Function_506();
			}
			if ((bLocal_1056 < 0 && !HUD_IS_SHOWING_SMALL_TEXT()) && !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (bLocal_1068)
				{
					Function_448();
					Function_505();
					AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
					Function_216(&iLocal_857);
					iLocal_687 = 106;
				}
				else if (bLocal_1069)
				{
					SNAP_ACTOR_TO_GRINGO(bLocal_707, Local_4.f_2468, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(bLocal_707, GET_GRINGO_FROM_OBJECT(Local_4.f_2468), "UseCase1", 4294967295, 1);
					ADD_BLIP_FOR_OBJECT(Local_4.f_2552, 330, 0f, 2, 0);
					Function_448();
					Function_504();
					Function_216(&iLocal_857);
					iLocal_687 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_276(&iLocal_857) <= 5.0f)
			{
				Function_413("Rebel04_obj02b", 0x40f00000, 1, 2, 0, 0, 0);
				Function_216(&iLocal_857);
				iLocal_687 = 11;
			}
			break;
		
		case 0x0000000B:
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 716)[3]))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Local_4.f_2552)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_4.f_2552));
				}
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
				}
				if (HUD_IS_SHOWING_SMALL_TEXT())
				{
					HUD_CLEAR_SMALL_TEXT();
					HUD_CLEAR_SMALL_TEXT_QUEUE();
				}
				Function_505();
				Function_216(&iLocal_857);
				iLocal_687 = 106;
			}
			break;
		
		case 0x00000069:
			if (Function_276(&iLocal_857) <= 4.0f)
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_216(&iLocal_857);
				iLocal_687 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING() && Function_448())
			{
				RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
				if (!IS_OBJECTSET_VALID(bLocal_1174))
				{
					bLocal_1174 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bLocal_678, 4294967295, 1);
				}
				while (SQUAD_GET_SIZE(bLocal_1055) >= 0)
				{
					bLocal_1180 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1055, false);
					if (IS_ACTOR_VALID(bLocal_1180))
					{
						if (!IS_OBJECT_IN_OBJECTSET(bLocal_1180, bLocal_1174))
						{
							ADD_OBJECT_TO_OBJECTSET(bLocal_1180, bLocal_1174);
						}
						SQUAD_LEAVE(bLocal_1180);
					}
				}
				if (IS_OBJECTSET_VALID(bLocal_1174))
				{
					if (GET_OBJECTSET_SIZE(bLocal_1174) >= 0)
					{
						Function_503(bLocal_1174, &Local_4 + 624);
					}
					DESTROY_OBJECTSET(bLocal_1174);
				}
				if (FLASH_GET_BOOL("help", "nShowBombs"))
				{
					FLASH_SET_BOOL("help", "nShowBombs", false);
				}
				Function_211();
				iLocal_709[1] = 1;
				Function_216(&iLocal_857);
				bLocal_686 = 2;
				iLocal_687 = 2;
			}
			break;
	}
	return;
}

void Function_503(bool bParam0, var uParam1) //Position: 0x1ADCB / 110027
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (SQUAD_IS_VALID(*uParam1) && IS_OBJECTSET_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(bParam0))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					SQUAD_JOIN(bVar2, *uParam1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_504() //Position: 0x1AE1E / 110110
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_AllPlacedWaiting", "Rebel04_AllPlacedWaiting", false, 2, 1, 0, 1);
		Function_343(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_505() //Position: 0x1AE77 / 110199
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_PlantsChargesMeetsUp", "Rebel04_PlantsChargesMeetsUp", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_506() //Position: 0x1AED8 / 110296
{
	if (!Function_278(&iLocal_1150))
	{
		Function_416(&iLocal_1150);
		DECOR_SET_INT(bLocal_678, "burrystage", false);
	}
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_276(&iLocal_1150) < 300.0f && DECOR_GET_INT(bLocal_678, "burrystage") != 4)
		{
			Function_508();
			Function_231("Rebel04_fail_convoy_arrived");
			bLocal_696 = true;
		}
		else if (Function_276(&iLocal_1150) < 240.0f && DECOR_GET_INT(bLocal_678, "burrystage") != 3)
		{
			Function_507();
			DECOR_SET_INT(bLocal_678, "burrystage", 4);
		}
		else if (Function_276(&iLocal_1150) < 180.0f && DECOR_GET_INT(bLocal_678, "burrystage") != 2)
		{
			Function_507();
			DECOR_SET_INT(bLocal_678, "burrystage", 3);
		}
		else if (Function_276(&iLocal_1150) < 120.0f && DECOR_GET_INT(bLocal_678, "burrystage") != 1)
		{
			Function_525();
			DECOR_SET_INT(bLocal_678, "burrystage", 2);
		}
		else if (Function_276(&iLocal_1150) < 60.0f && DECOR_GET_INT(bLocal_678, "burrystage") != 0)
		{
			Function_525();
			DECOR_SET_INT(bLocal_678, "burrystage", true);
		}
	}
	return;
}

void Function_507() //Position: 0x1B057 / 110679
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_RuningOutOfTime", "Rebel04_RuningOutOfTime", false, 2, 1, 0, 1);
		Function_343(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_508() //Position: 0x1B0AE / 110766
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_OutOfTime", "Rebel04_OutOfTime", false, 2, 1, 0, 1);
		Function_343(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_509() //Position: 0x1B0F9 / 110841
{
	bool bVar0;
	
	bVar0 = false;
	if (DECOR_CHECK_EXIST(bLocal_678, "printedobjsmall"))
	{
		if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "printedobjsmall")) < 1.0f)
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (DECOR_CHECK_EXIST(bLocal_678, "nsaidsmall"))
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "nsaidsmall")) > 1.0f)
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0 && DECOR_CHECK_EXIST(bLocal_678, "nhelpstate"))
	{
		switch (DECOR_GET_INT(bLocal_678, "nhelpstate"))
		{
			case 0x00000000:
				Function_132("Rebel04_obj02_help_plant_dyn_road", -1.0f, 1, 0, 2, 1, 0);
				DECOR_SET_INT(bLocal_678, "nhelpstate", true);
				DECOR_SET_FLOAT(bLocal_678, "helpstatetime", GET_CURRENT_GAME_TIME());
				break;
			
			case 0x00000001:
				if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 716)[1]) && (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "helpstatetime")) < 5.0f)
				{
					HUD_CLEAR_HELP();
					HUD_CLEAR_HELP_QUEUE();
					Function_132("Rebel04_obj02_help_plant_dyn_distance", 0x41200000, 1, 0, 2, 1, 0);
					DECOR_SET_INT(bLocal_678, "nhelpstate", 4294967295);
				}
				break;
			
			default:
				if (!HUD_IS_SHOWING_HELP_TEXT())
				{
					if (!DECOR_CHECK_EXIST(bLocal_678, "dynamite_help_bridge") && IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 716)[4]))
					{
						Function_132("Rebel04_obj02_help_plant_dyn_bridge", 0x41200000, 1, 0, 2, 1, 0);
						DECOR_SET_FLOAT(bLocal_678, "dynamite_help_bridge", GET_CURRENT_GAME_TIME());
					}
					else if (!DECOR_CHECK_EXIST(bLocal_678, "dynamite_help_tooclose") && bLocal_1056 < 0)
					{
						Function_132("Rebel04_obj02_help_plant_dyn_tooclose", 0x41200000, 1, 0, 2, 1, 0);
						DECOR_SET_BOOL(bLocal_678, "dynamite_help_tooclose", true);
					}
					else
					{
						if (!DECOR_CHECK_EXIST(bLocal_678, "inumplanted"))
						{
							DECOR_SET_INT(bLocal_678, "inumplanted", false);
						}
						switch (bLocal_1056)
						{
							case 0x00000000:
								if (!DECOR_GET_INT(bLocal_678, "inumplanted") != bLocal_1056)
								{
									Function_132("Rebel04_obj02_help_charges_left_5", 5.0f, 1, 0, 1, 1, 0);
									DECOR_SET_INT(bLocal_678, "inumplanted", bLocal_1056);
								}
								break;
							
							case 0x00000001:
								if (!DECOR_GET_INT(bLocal_678, "inumplanted") != bLocal_1056)
								{
									Function_132("Rebel04_obj02_help_charges_left_4", 5.0f, 1, 0, 1, 1, 0);
									DECOR_SET_INT(bLocal_678, "inumplanted", bLocal_1056);
								}
								break;
							
							case 0x00000002:
								if (!DECOR_GET_INT(bLocal_678, "inumplanted") != bLocal_1056)
								{
									Function_132("Rebel04_obj02_help_charges_left_3", 5.0f, 1, 0, 1, 1, 0);
									DECOR_SET_INT(bLocal_678, "inumplanted", bLocal_1056);
								}
								break;
							
							case 0x00000003:
								if (!DECOR_GET_INT(bLocal_678, "inumplanted") != bLocal_1056)
								{
									Function_132("Rebel04_obj02_help_charges_left_2", 5.0f, 1, 0, 1, 1, 0);
									DECOR_SET_INT(bLocal_678, "inumplanted", bLocal_1056);
								}
								break;
							
							case 0x00000004:
								if (!DECOR_GET_INT(bLocal_678, "inumplanted") != bLocal_1056)
								{
									Function_132("Rebel04_obj02_help_charges_left_1", 5.0f, 1, 0, 1, 1, 0);
									DECOR_SET_INT(bLocal_678, "inumplanted", bLocal_1056);
								}
								break;
							
							case 0x00000005:
								break;
							}
						}
				}
				break;
			}
	}
	return;
}

void Function_510() //Position: 0x1B5FC / 112124
{
	if (bLocal_1056 > 5)
	{
		if (!bLocal_1069)
		{
			bLocal_1069 = true;
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1064))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_1064);
			}
		}
	}
	else if (!bLocal_1069 && !bLocal_1068)
	{
		if ((((IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "pointing") || IS_ACTOR_RIDING(Global_34573)) || IS_ACTOR_RIDING_VEHICLE(Global_34573)) || IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "jump")) || !IS_ACTOR_ON_GROUND(Global_34573))
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1064))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_1064);
			}
		}
		else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 716)[3]) && IS_ACTOR_IN_VOLUME(bLocal_707, (*&Local_4 + 716)[3]))
		{
			if (bLocal_1056 >= 0)
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1066))
				{
					bLocal_1066 = ADD_SCRIPT_USE_CONTEXT("Rebel04_obj02_use_context_skip", 100, 4, false, 0, 0, 0, 4294967295, 0);
					if (!DECOR_CHECK_EXIST(bLocal_678, "saidskip"))
					{
						Function_524();
						DECOR_SET_BOOL(bLocal_678, "saidskip", true);
					}
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1066))
				{
					if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_1066))
					{
						if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1066))
						{
							RELEASE_SCRIPT_USE_CONTEXT(bLocal_1066);
						}
						bLocal_1068 = true;
					}
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1064))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_1064);
				}
			}
			else if (!DECOR_CHECK_EXIST(bLocal_678, "Rebel04_GoesToLuisaB4Dyn"))
			{
				Function_523();
				DECOR_SET_FLOAT(bLocal_678, "Rebel04_GoesToLuisaB4Dyn", GET_CURRENT_GAME_TIME());
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "Rebel04_GoesToLuisaB4Dyn")) < 15.0f)
			{
				DECOR_REMOVE(bLocal_678, "Rebel04_GoesToLuisaB4Dyn");
			}
		}
		else if (!IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 716)[3]))
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1066))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_1066);
			}
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 716)[1]))
			{
				if (DECOR_CHECK_EXIST(bLocal_678, "outexplosivearea"))
				{
					DECOR_REMOVE(Global_34573, "outexplosivearea");
				}
				if (!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1064))
				{
					bLocal_1064 = ADD_SCRIPT_USE_CONTEXT("Rebel04_obj02_use_context_bury", 100, 4, false, 0, 0, 0, 4294967295, 0);
				}
				Function_512();
				if (DECOR_CHECK_EXIST(bLocal_678, "Rebel04_PLAY_LeavesRoad"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "Rebel04_PLAY_LeavesRoad")) < 15.0f)
					{
						DECOR_REMOVE(bLocal_678, "Rebel04_PLAY_LeavesRoad");
					}
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1064))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_1064);
				if (!DECOR_CHECK_EXIST(bLocal_678, "Rebel04_PLAY_LeavesRoad"))
				{
					Function_511();
					DECOR_SET_FLOAT(bLocal_678, "Rebel04_PLAY_LeavesRoad", GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	return;
}

void Function_511() //Position: 0x1B955 / 112981
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_LeavesRoad", "Rebel04_LeavesRoad", false, 2, 1, 0, 1);
		Function_343(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_512() //Position: 0x1B9A2 / 113058
{
	bool bVar0;
	
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1064))
	{
		if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_1064))
		{
			bLocal_1056++;
			switch (bLocal_1056)
			{
				case 0x00000000:
					bLocal_1056 = bLocal_1056;
					break;
				
				case 0x00000001:
					Function_522();
					DECOR_SET_FLOAT(bLocal_678, "nsaidsmall", GET_CURRENT_GAME_TIME());
					GET_POSITION(Global_34573, &vLocal_1030);
					vLocal_1030 = { StackVal, StackVal, Vector(vLocal_1030, StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f) };
					FIND_GROUND_INTERSECTION(&vLocal_1030, 5.0f, &vLocal_1106, &vLocal_1033);
					if (!IS_BLIP_VALID(bLocal_1101))
					{
						bLocal_1101 = ADD_BLIP_FOR_COORD(&vLocal_1106, 404, 0, 2, 0);
					}
					if (!ACTOR_HAS_ANIM_SET(Global_34573, "pointing"))
					{
						RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
						SET_ANIM_SET_FOR_ACTOR(Global_34573, "pointing", 0);
					}
					SET_ACTION_NODE_FOR_ACTOR(Global_34573, "pointing/down");
					Function_216(&iLocal_1092);
					bVar0 = Function_519(Global_34573, Local_4.f_624);
					if (IS_ACTOR_VALID(bVar0))
					{
						Function_518(bVar0, bLocal_1056);
					}
					break;
				
				case 0x00000002:
					GET_POSITION(Global_34573, &vLocal_1030);
					vLocal_1030 = { StackVal, StackVal, Vector(vLocal_1030, StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f) };
					FIND_GROUND_INTERSECTION(&vLocal_1030, 5.0f, &vLocal_1109, &vLocal_1033);
					if (VDIST(vLocal_1030, vLocal_1106) >= 5.0f)
					{
						if (DECOR_CHECK_EXIST(bLocal_678, "tooclosewarn"))
						{
							Function_517();
						}
						else
						{
							DECOR_SET_BOOL(bLocal_678, "tooclosewarn", true);
							Function_516();
						}
					}
					else
					{
						Function_517();
					}
					DECOR_SET_FLOAT(bLocal_678, "nsaidsmall", GET_CURRENT_GAME_TIME());
					if (!IS_BLIP_VALID(bLocal_1102))
					{
						bLocal_1102 = ADD_BLIP_FOR_COORD(&vLocal_1109, 404, 0, 2, 0);
					}
					if (!ACTOR_HAS_ANIM_SET(Global_34573, "pointing"))
					{
						RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
						SET_ANIM_SET_FOR_ACTOR(Global_34573, "pointing", 0);
					}
					SET_ACTION_NODE_FOR_ACTOR(Global_34573, "pointing/down");
					Function_216(&iLocal_1092);
					bVar0 = Function_519(Global_34573, Local_4.f_624);
					if (IS_ACTOR_VALID(bVar0))
					{
						Function_518(bVar0, bLocal_1056);
					}
					break;
				
				case 0x00000003:
					GET_POSITION(Global_34573, &vLocal_1030);
					vLocal_1030 = { StackVal, StackVal, Vector(vLocal_1030, StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f) };
					FIND_GROUND_INTERSECTION(&vLocal_1030, 5.0f, &vLocal_1112, &vLocal_1033);
					if (VDIST(vLocal_1030, vLocal_1106) >= 5.0f || VDIST(vLocal_1030, vLocal_1109) >= 5.0f)
					{
						if (DECOR_CHECK_EXIST(bLocal_678, "tooclosewarn"))
						{
							Function_515();
						}
						else
						{
							DECOR_SET_BOOL(bLocal_678, "tooclosewarn", true);
							Function_516();
						}
					}
					else
					{
						Function_515();
					}
					DECOR_SET_FLOAT(bLocal_678, "nsaidsmall", GET_CURRENT_GAME_TIME());
					if (!IS_BLIP_VALID(bLocal_1103))
					{
						bLocal_1103 = ADD_BLIP_FOR_COORD(&vLocal_1112, 404, 0, 2, 0);
						SET_BLIP_BLINK(bLocal_1103, 0, 0, 5f);
					}
					if (!ACTOR_HAS_ANIM_SET(Global_34573, "pointing"))
					{
						RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
						SET_ANIM_SET_FOR_ACTOR(Global_34573, "pointing", 0);
					}
					SET_ACTION_NODE_FOR_ACTOR(Global_34573, "pointing/down");
					Function_216(&iLocal_1092);
					bVar0 = Function_519(Global_34573, Local_4.f_624);
					if (IS_ACTOR_VALID(bVar0))
					{
						Function_518(bVar0, bLocal_1056);
					}
					break;
				
				case 0x00000004:
					GET_POSITION(Global_34573, &vLocal_1030);
					vLocal_1030 = { StackVal, StackVal, Vector(vLocal_1030, StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f) };
					FIND_GROUND_INTERSECTION(&vLocal_1030, 5.0f, &vLocal_1115, &vLocal_1033);
					if ((VDIST(vLocal_1030, vLocal_1106) >= 5.0f || VDIST(vLocal_1030, vLocal_1109) >= 5.0f) || VDIST(vLocal_1030, vLocal_1112) >= 5.0f)
					{
						if (DECOR_CHECK_EXIST(bLocal_678, "tooclosewarn"))
						{
							Function_514();
						}
						else
						{
							DECOR_SET_BOOL(bLocal_678, "tooclosewarn", true);
							Function_516();
						}
					}
					else
					{
						Function_514();
					}
					DECOR_SET_FLOAT(bLocal_678, "nsaidsmall", GET_CURRENT_GAME_TIME());
					if (!IS_BLIP_VALID(bLocal_1104))
					{
						bLocal_1104 = ADD_BLIP_FOR_COORD(&vLocal_1115, 404, 0, 2, 0);
						SET_BLIP_BLINK(bLocal_1104, 0, 0, 5f);
					}
					if (!ACTOR_HAS_ANIM_SET(Global_34573, "pointing"))
					{
						RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
						SET_ANIM_SET_FOR_ACTOR(Global_34573, "pointing", 0);
					}
					SET_ACTION_NODE_FOR_ACTOR(Global_34573, "pointing/down");
					Function_216(&iLocal_1092);
					bVar0 = Function_519(Global_34573, Local_4.f_624);
					if (IS_ACTOR_VALID(bVar0))
					{
						Function_518(bVar0, bLocal_1056);
					}
					break;
				
				case 0x00000005:
					GET_POSITION(Global_34573, &vLocal_1030);
					vLocal_1030 = { StackVal, StackVal, Vector(vLocal_1030, StackVal, StackVal) + Vector(0.0f, 1.0f, 0.0f) };
					FIND_GROUND_INTERSECTION(&vLocal_1030, 5.0f, &vLocal_1118, &vLocal_1033);
					if (((VDIST(vLocal_1030, vLocal_1106) >= 5.0f || VDIST(vLocal_1030, vLocal_1109) >= 5.0f) || VDIST(vLocal_1030, vLocal_1112) >= 5.0f) || VDIST(vLocal_1030, vLocal_1115) >= 5.0f)
					{
						if (DECOR_CHECK_EXIST(bLocal_678, "tooclosewarn"))
						{
							Function_513();
						}
						else
						{
							DECOR_SET_BOOL(bLocal_678, "tooclosewarn", true);
							Function_516();
						}
					}
					else
					{
						Function_513();
					}
					DECOR_SET_FLOAT(bLocal_678, "nsaidsmall", GET_CURRENT_GAME_TIME());
					if (!IS_BLIP_VALID(bLocal_1105))
					{
						bLocal_1105 = ADD_BLIP_FOR_COORD(&vLocal_1118, 404, 0, 2, 0);
						SET_BLIP_BLINK(bLocal_1105, 0, 0, 5f);
					}
					if (!ACTOR_HAS_ANIM_SET(Global_34573, "pointing"))
					{
						RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
						SET_ANIM_SET_FOR_ACTOR(Global_34573, "pointing", 0);
					}
					SET_ACTION_NODE_FOR_ACTOR(Global_34573, "pointing/down");
					Function_216(&iLocal_1092);
					bVar0 = Function_519(Global_34573, Local_4.f_624);
					if (IS_ACTOR_VALID(bVar0))
					{
						Function_518(bVar0, bLocal_1056);
					}
					break;
				
				default:
					break;
				}
			}
	}
	return;
}

void Function_513() //Position: 0x1BF84 / 114564
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_Place5Here", "Rebel04_Place5Here", 2, 2, 1, 0, 1);
		Function_343(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_514() //Position: 0x1BFD1 / 114641
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_Place4Here", "Rebel04_Place4Here", 2, 2, 1, 0, 1);
		Function_343(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_515() //Position: 0x1C027 / 114727
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_Place3Here", "Rebel04_Place3Here", 2, 2, 1, 0, 1);
		Function_343(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_516() //Position: 0x1C074 / 114804
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_2Close2EachOther", "Rebel04_2Close2EachOther", false, 2, 1, 0, 1);
		Function_343(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_517() //Position: 0x1C0CD / 114893
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_Place2Here", "Rebel04_Place2Here", 2, 2, 1, 0, 1);
		Function_343(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_518(bool bParam0, bool bParam1) //Position: 0x1C11A / 114970
{
	struct<9> Var0;
	
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	TASK_CLEAR(bParam0);
	Function_371(bParam0);
	vVar0 = { StackVal, StackVal, Function_371(bParam0) };
	DECOR_SET_FLOAT(bParam0, "original_x", vVar0.x);
	DECOR_SET_FLOAT(bParam0, "original_y", vVar0.y);
	DECOR_SET_FLOAT(bParam0, "original_z", vVar0.z);
	TASK_CLEAR(bParam0);
	TASK_PRIORITY_SET(bParam0, true);
	SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
	SET_ACTOR_FACE_STYLE(bParam0, 2);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
	SQUAD_JOIN(bParam0, bLocal_1055);
	AI_GOAL_LOOK_AT_ACTOR_NEW(bParam0, Global_34573, -1f, 0);
	DECOR_SET_INT(bParam0, "riggerindex", bParam1);
	return;
}

bool Function_519(bool bParam0, bool bParam1) //Position: 0x1C1BF / 115135
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+14.0f;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		if (Function_520(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0) > fVar2)
		{
			fVar2 = Function_520(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER!");
	return "";
}

float Function_520(bool bParam0, bool bParam1) //Position: 0x1C27C / 115324
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_521(&uVar0, &uVar3);
	return iVar6;
}

var Function_521(var uParam0, bool bParam1) //Position: 0x1C29B / 115355
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_522() //Position: 0x1C2B9 / 115385
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_Place1Here", "Rebel04_Place1Here", 2, 2, 1, 0, 1);
		Function_343(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_523() //Position: 0x1C306 / 115462
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_GoesToLuisaB4Dyn", "Rebel04_GoesToLuisaB4Dyn", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_524() //Position: 0x1C35F / 115551
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_MeetsLuisaEarly", "Rebel04_MeetsLuisaEarly", false, 2, 1, 0, 1);
		Function_343(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_525() //Position: 0x1C3B6 / 115638
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_WaitingForInstr", "Rebel04_WaitingForInstr", false, 2, 1, 0, 1);
		Function_343(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_526() //Position: 0x1C40D / 115725
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Rebel04_WhereAt", "Rebel04_WhereAt", false, 1, 1, 0, 1);
		Function_343(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_527() //Position: 0x1C454 / 115796
{
	Function_283(&Local_688, 1, 0);
	switch (Local_688)
	{
		case 0x000003E8:
			Function_334(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			FORCE_VEHICLE_CINEMATIC_CAMERA(0);
			Local_688.f_16 = Function_534(Local_4, 0, Global_34573, 1, 0, 0);
			if (IS_OBJECT_VALID(Local_688.f_16))
			{
			}
			else
			{
				LOG_ERROR("Rebel04_Cutscene02 - Failed to create Rebel04_Cutscene02_cutscene");
			}
			if (HUD_IS_FADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_IN(1.0f, 1065353216);
			}
			DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
			iLocal_1204 = 15;
			iLocal_1205 = 15;
			Function_216(&Local_688 + 4);
			Local_688 = 1004;
			break;
		
		case 0x000003EC:
			if (Function_532() && Function_529())
			{
				Function_216(&Local_688 + 4);
				Local_688 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_528(Global_34573, 0, 1);
				Function_528(bLocal_707, 0, 1);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_287(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(Global_34573, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(Local_688.f_16))
				{
					DESTROY_OBJECT(Local_688.f_16);
				}
				Local_688 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_645 + 68)[02], *(&Local_4 + 892[66]), 1, true, 1);
				if (!GET_ACTOR_IN_VEHICLE_SEAT((*&Local_645 + 68)[02], false) != bLocal_707)
				{
					SET_ACTOR_IN_VEHICLE(bLocal_707, (*&Local_645 + 68)[02], false);
				}
				TASK_STAND_STILL(bLocal_707, -1.0f, 0, 0);
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(0);
				}
				if (IS_ACTOR_RIDING_VEHICLE(Global_34573))
				{
					ACTOR_DISMOUNT_NOW(Global_34573);
				}
				else if (IS_ACTOR_RIDING(Global_34573))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, GET_MOUNT(Global_34573), *(&Local_4 + 892[56]), 1, true, 1);
					ACTOR_DISMOUNT_NOW(Global_34573);
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 892[16]), 1, true, 1);
				RESET_ACTOR_GAITS(Global_34573, 0);
				Local_688 = 1104;
			}
			break;
	}
	return 0;
}

void Function_528(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1C6A4 / 116388
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

int Function_529() //Position: 0x1C73E / 116542
{
	switch (iLocal_1205)
	{
		case 0x0000000F:
			if (Function_276(&Local_688 + 4) < 0.0f)
			{
				if (GET_ACTOR_IN_VEHICLE_SEAT((*&Local_645 + 68)[02], true) == Global_34573)
				{
					iLocal_1212 = 1;
				}
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_707, false);
				if (!GET_ACTOR_IN_VEHICLE_SEAT((*&Local_645 + 68)[02], false) != bLocal_707)
				{
					if (!SET_ACTOR_IN_VEHICLE(bLocal_707, (*&Local_645 + 68)[02], false))
					{
						LOG_ERROR("couldn't set the mexgirl in the wagon");
					}
				}
				if (!GET_ACTOR_IN_VEHICLE_SEAT((*&Local_645 + 68)[02], true) != Global_34573 && iLocal_1212)
				{
					if (!SET_ACTOR_IN_VEHICLE(Global_34573, (*&Local_645 + 68)[02], true))
					{
						LOG_ERROR("couldn't set the player in the wagon");
					}
				}
				AI_ACTOR_FORCE_SPEED(bLocal_707, 2);
				TASK_GO_TO_COORD_AND_STAY(StackVal, bLocal_707, &Local_4 + 892[66], 2);
				if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
				{
					if (IS_ACTOR_RIDING(Global_34573))
					{
						Function_531(StackVal, StackVal, StackVal, Global_34573, *(&Local_4 + 892[06]), 1, 1, 1);
					}
					else if (!IS_ACTOR_RIDING(Global_34573))
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, *(&Local_4 + 892[06]), 1, true, 1);
					}
					TASK_FOLLOW_OBJECT_ALONG_PATH(Global_34573, bLocal_707, Local_4.f_2496, 0.0f, 1, 0);
					AI_ACTOR_FORCE_SPEED(bLocal_707, 2);
				}
				iLocal_1205 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_276(&Local_688 + 4) < 2.0f)
			{
				TASK_OVERRIDE_SET_MOVETYPE(bLocal_707, 5);
				iLocal_1205 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_276(&Local_688 + 4) < 10.0f)
			{
				SET_ACTOR_FACE_STYLE(Global_34573, 2);
				if (IS_ACTOR_RIDING_VEHICLE(Global_34573))
				{
					bLocal_1130 = TASK_SEQUENCE_OPEN();
					TASK_VEHICLE_LEAVE(false);
					TASK_FACE_ACTOR(false, Function_530(Global_34573, Local_4.f_620), 0, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(Global_34573, bLocal_1130);
					TASK_SEQUENCE_RELEASE(bLocal_1130, 1);
				}
				else if (IS_ACTOR_RIDING(Global_34573))
				{
					vLocal_1206 = { 10.0f, 0.0f, 2.0f };
					UNK_0xB89CC342(Global_34573, &vLocal_1206, &uLocal_1209);
					TASK_GO_TO_COORD(GET_MOUNT(Global_34573), &uLocal_1209, true);
					bLocal_1130 = TASK_SEQUENCE_OPEN();
					TASK_DISMOUNT(false, 0);
					TASK_FACE_ACTOR(false, Function_530(Global_34573, Local_4.f_620), 0, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(Global_34573, bLocal_1130);
					TASK_SEQUENCE_RELEASE(bLocal_1130, 1);
				}
				else
				{
					TASK_FACE_ACTOR(Global_34573, bLocal_707, 0, 3212836864);
				}
				iLocal_1205 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_276(&Local_688 + 4) < 13.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

var Function_530(bool bParam0, bool bParam1) //Position: 0x1C9DA / 117210
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+14.0f;
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(bParam1) - 1))
	{
		if (Function_520(GET_ACTOR_FROM_ACTORSET(bParam1, bVar0), bParam0) > fVar2)
		{
			fVar2 = Function_520(GET_ACTOR_FROM_ACTORSET(bParam1, bVar0), bParam0);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return GET_ACTOR_FROM_ACTORSET(bParam1, bVar1);
	}
	LOG_WARNING("\Couldn't find a closest actorset member from 'Them' to 'Me' in GET_CLOSEST_ACTORSET_MEMBER!");
	return "";
}

void Function_531(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, var uParam7) //Position: 0x1CA9D / 117405
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

int Function_532() //Position: 0x1CB56 / 117590
{
	switch (iLocal_1204)
	{
		case 0x0000000F:
			if (Function_276(&Local_688 + 4) < 2.0f)
			{
				Function_533();
				iLocal_1204 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_276(&Local_688 + 4) < 13.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_533() //Position: 0x1CB9F / 117663
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_CS02_v1_AA1", "Rebel04_CS02_v1_AA1", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_CS02_v1_AA2", "Rebel04_CS02_v1_AA2", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_CS02_v1_AB", "Rebel04_CS02_v1_AB", true, 4, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_534(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1CC56 / 117846
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 6, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Rebel04_Cutscene02", 6, 1);
	}
	Function_535(&bVar0, uParam2);
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

void Function_535(var uParam0, char* cParam1) //Position: 0x1CCD6 / 117974
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_541(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_540(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_539(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_538(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_537(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_536(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*uParam0, 0, 1, 7.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 2, 3, 3.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*uParam0, 5, 4.0f, 3);
	return;
}

void Function_536(int iParam0) //Position: 0x1CD7A / 118138
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 40,85547f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3451,146f, 7,055765f, 4209,637f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,181064f, -1,367817f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_537(int iParam0) //Position: 0x1CDE4 / 118244
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3446,145f, 7,02662f, 4205,365f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,200557f, 2,957253f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_538(int iParam0) //Position: 0x1CE4E / 118350
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 36,63659f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3446,863f, 7,148807f, 4222,19f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,010582f, 1,416742f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_539(int iParam0) //Position: 0x1CEB8 / 118456
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 36,63659f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3446,128f, 7,154627f, 4220,092f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,010582f, 1,511308f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_540(int iParam0) //Position: 0x1CF22 / 118562
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 51,16827f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3442,194f, 7,502315f, 4210,917f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,066688f, 2,089116f, 0,000634f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_541(bool bParam0) //Position: 0x1CF90 / 118672
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 50,8671f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, -3438,417f, 7,38152f, 4206,363f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0,073068f, 1,970953f, 0,000634f, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

bool Function_542(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x1CFF7 / 118775
{
	if (Function_543(&iParam0) == iParam7 || Function_444())
	{
		return 1;
	}
	return 0;
}

int Function_543(int iParam0) //Position: 0x1D016 / 118806
{
	if (Function_281(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_544() //Position: 0x1D02E / 118830
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	if (SQUAD_IS_VALID(Local_4.f_624))
	{
		if (!iLocal_709[0])
		{
			bVar0 = Function_547(Global_34573, Local_4.f_2544);
		}
		else
		{
			bVar0 = Function_546(StackVal, StackVal, *(&Local_4 + 892[76]), Local_4.f_2544);
		}
		if (!IS_OBJECTSET_VALID(bVar1))
		{
			bVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bLocal_678, 9, 1);
		}
		GET_PATH_POINT(Local_4.f_2544, bVar0, &vVar2);
		bLocal_1198 = CREATE_VOLUME_IN_LAYOUT(bLocal_678, Function_53(), 2, vVar2, 0.0f, 0.0f, 0.0f, 2.0f, 10.0f, 2.0f);
		DECOR_SET_INT(bLocal_1198, "npathpoint", bVar0);
		ADD_OBJECT_TO_OBJECTSET(bLocal_1198, bVar1);
		if (bVar0 >= 0)
		{
			GET_PATH_POINT(Local_4.f_2544, (bVar0 - 1), &vVar2);
		}
		bLocal_1199 = CREATE_VOLUME_IN_LAYOUT(bLocal_678, Function_53(), 2, vVar2, 0.0f, 0.0f, 0.0f, 2.0f, 10.0f, 2.0f);
		DECOR_SET_INT(bLocal_1199, "npathpoint", bVar0);
		ADD_OBJECT_TO_OBJECTSET(bLocal_1199, bVar1);
		if (!iLocal_709[0])
		{
			bVar0 = Function_547(Global_34573, Local_4.f_2540);
		}
		else
		{
			bVar0 = Function_546(StackVal, StackVal, *(&Local_4 + 892[86]), Local_4.f_2540);
		}
		GET_PATH_POINT(Local_4.f_2540, bVar0, &vVar2);
		bLocal_1200 = CREATE_VOLUME_IN_LAYOUT(bLocal_678, Function_53(), 2, vVar2, 0.0f, 0.0f, 0.0f, 2.0f, 10.0f, 2.0f);
		DECOR_SET_INT(bLocal_1200, "npathpoint", bVar0);
		ADD_OBJECT_TO_OBJECTSET(bLocal_1200, bVar1);
		if (bVar0 >= 0)
		{
			GET_PATH_POINT(Local_4.f_2540, (bVar0 - 1), &vVar2);
		}
		bLocal_1201 = CREATE_VOLUME_IN_LAYOUT(bLocal_678, Function_53(), 2, vVar2, 0.0f, 0.0f, 0.0f, 2.0f, 10.0f, 2.0f);
		DECOR_SET_INT(bLocal_1201, "npathpoint", bVar0);
		ADD_OBJECT_TO_OBJECTSET(bLocal_1201, bVar1);
		if (bVar0 <= (GET_NUM_PATH_POINTS(Local_4.f_2540) - 2))
		{
			GET_PATH_POINT(Local_4.f_2540, bVar0 + 1, &vVar2);
		}
		bLocal_1202 = CREATE_VOLUME_IN_LAYOUT(bLocal_678, Function_53(), 2, vVar2, 0.0f, 0.0f, 0.0f, 2.0f, 10.0f, 2.0f);
		DECOR_SET_INT(bLocal_1202, "npathpoint", bVar0);
		ADD_OBJECT_TO_OBJECTSET(bLocal_1202, bVar1);
		bVar5 = false;
		while (bVar5 <= SQUAD_GET_SIZE(Local_4.f_624))
		{
			bVar6 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_624, bVar5);
			if (IS_ACTOR_VALID(bVar6))
			{
				Function_545(bVar6, bVar5);
				Function_292(bVar6);
				bVar7 = Function_484(StackVal, StackVal, &bVar1, Function_292(bVar6), 0.0f, 200.0f);
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar6, GET_VOLUME_FROM_OBJECT(bVar7), 1, true);
				SET_ACTOR_FACE_STYLE(bVar6, 0);
				TASK_FACE_ACTOR(bVar6, Global_34573, 1, 3212836864);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar6, Global_34573, -1f, 0);
				REMOVE_OBJECT_FROM_OBJECTSET(bVar7, bVar1);
			}
			bVar5++;
		}
		DESTROY_OBJECTSET(bVar1);
	}
	return;
}

void Function_545(bool bParam0, bool bParam1) //Position: 0x1D2AD / 119469
{
	char* cVar0[64];
	
	if (IS_ACTOR_VALID(bParam0))
	{
		vLocal_1182[bParam13] = bParam0;
		strcpy(&cVar0, "leftdyna", 64);
		stradd(&cVar0, INT_TO_STRING(bParam1), 64);
		vLocal_1182[bParam13].f_4 = CREATE_PROP_IN_LAYOUT(bLocal_678, &cVar0, "p_gen_dynamite02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
		SET_OBJECT_COLLIDE_WITH_OBJECT(vLocal_1182[bParam13].y, bParam0, false);
		SET_OBJECT_COLLIDE_WITH_MOVABLES(vLocal_1182[bParam13].y, 0);
		SET_OBJECT_COLLIDE_WITH_WORLD(vLocal_1182[bParam13].y, 0);
		ATTACH_OBJECTS_USING_LOCATOR(vLocal_1182[bParam13].y, bParam0, "wrist_l_Attachment", "grab", 4294967295);
		strcpy(&cVar0, "nrightdyna", 64);
		stradd(&cVar0, INT_TO_STRING(bParam1), 64);
		vLocal_1182[bParam13].f_8 = CREATE_PROP_IN_LAYOUT(bLocal_678, &cVar0, "p_gen_dynamite02x", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
		SET_OBJECT_COLLIDE_WITH_OBJECT(vLocal_1182[bParam13].z, Global_34573, false);
		SET_OBJECT_COLLIDE_WITH_MOVABLES(vLocal_1182[bParam13].z, 0);
		SET_OBJECT_COLLIDE_WITH_WORLD(vLocal_1182[bParam13].z, 0);
		ATTACH_OBJECTS_USING_LOCATOR(vLocal_1182[bParam13].z, bParam0, "wrist_r_Attachment", "grab", 4294967295);
		RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
		SET_ANIM_SET_FOR_ACTOR(bParam0, "dynamite", 0);
		SET_ACTION_NODE_FOR_ACTOR(bParam0, "dynamite/Mex_Hold");
		SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	}
	return;
}

bool Function_546(vector3 vParam0, bool bParam3) //Position: 0x1D430 / 119856
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
	while (bVar0 < (GET_NUM_PATH_POINTS(bParam3) - 1))
	{
		GET_PATH_POINT(bParam3, bVar0, &vVar1);
		bVar6 = VDIST(vParam0, vVar1);
		if (bVar6 > bVar5)
		{
			bVar4 = bVar0;
			bVar5 = bVar6;
		}
		bVar0++;
	}
	return bVar4;
}

bool Function_547(bool bParam0, bool bParam1) //Position: 0x1D485 / 119941
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
		Function_292(bParam0);
		bVar6 = VDIST(Function_292(bParam0), vVar1);
		if (bVar6 > bVar5)
		{
			bVar4 = bVar0;
			bVar5 = bVar6;
		}
		bVar0++;
	}
	return bVar4;
}

void Function_548() //Position: 0x1D4D9 / 120025
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_ACTORSET_VALID(Local_4.f_672))
	{
		Function_409();
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_676))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_676, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TELEPORT_ACTOR_WITH_HEADING(StackVal, bVar1, *(&Local_4 + 2268[bVar06]), 1, true, 1);
			GIVE_WEAPON_TO_ACTOR(bVar1, 19, false, 1, 1);
			TASK_CROUCH(bVar1, -1.0f);
			Function_392(bVar1, bLocal_1054, 2);
			MEMORY_ALLOW_SHOOTING(bVar1, false);
			MEMORY_ATTACK_ON_SIGHT(bVar1, 0);
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bVar1, 75.0f);
			SET_ACTOR_VISION_FIELD_OF_VIEW(bVar1, 270.0f);
			SET_ACTOR_VISION_MAX_RANGE(bVar1, 200.0f, 1);
			ADD_ACTOR_STAY_WITHIN_VOLUME(bVar1, (*&Local_4 + 744)[bVar0]);
			AI_SET_NAV_PATHFINDING_ENABLED(bVar1, false);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar1, 0);
		}
		bVar0++;
	}
	return;
}

int Function_549() //Position: 0x1D59B / 120219
{
	Function_329(&Local_4 + 164, 521, 2, 0);
	Function_329(&Local_4 + 164, 539, 2, 0);
	Function_329(&Local_4 + 164, 540, 2, 0);
	Function_329(&Local_4 + 164, 533, 2, 0);
	Function_329(&Local_4 + 164, 534, 2, 0);
	Function_329(&Local_4 + 164, 536, 2, 0);
	Function_329(&Local_4 + 164, 537, 2, 0);
	Function_329(&Local_4 + 164, 538, 2, 0);
	if (Function_320(&Local_4 + 164))
	{
		return 1;
	}
	return 0;
}

void Function_550() //Position: 0x1D616 / 120342
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (SQUAD_IS_VALID(bLocal_1055))
	{
		if (SQUAD_GET_SIZE(bLocal_1055) >= 0)
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(bLocal_1055))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1055, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (DECOR_CHECK_EXIST(bVar1, "riggerindex"))
					{
						bVar2 = DECOR_GET_INT(bVar1, "riggerindex");
						switch (bVar2)
						{
							case 0x00000001:
								Function_551(bVar1, &uLocal_1175, &bLocal_1059, &vLocal_1106);
								break;
							
							case 0x00000002:
								Function_551(bVar1, &uLocal_1176, &bLocal_1060, &vLocal_1109);
								break;
							
							case 0x00000003:
								Function_551(bVar1, &uLocal_1177, &bLocal_1061, &vLocal_1112);
								break;
							
							case 0x00000004:
								Function_551(bVar1, &uLocal_1178, &bLocal_1062, &vLocal_1115);
								break;
							
							case 0x00000005:
								Function_551(bVar1, &uLocal_1179, &bLocal_1063, &vLocal_1118);
								break;
							}
						}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_551(bool bParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x1D6FD / 120573
{
	struct<9> Var0;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	
	*bParam2 = *bParam2;
	if (IS_ACTOR_VALID(bParam0) && DECOR_CHECK_EXIST(bParam0, "riggerindex"))
	{
		*uParam1 = *uParam1;
		vVar0 = { 0.0f, 0.0f, 0.0f };
		vVar0 = DECOR_GET_FLOAT(bParam0, "original_x");
		vVar0.f_4 = DECOR_GET_FLOAT(bParam0, "original_y");
		vVar0.f_8 = DECOR_GET_FLOAT(bParam0, "original_z");
		vVar3 = { 0.0f, 0.0f, 0.0f };
		if (!DECOR_CHECK_EXIST(bParam0, "rigtaskseq01"))
		{
			DECOR_SET_BOOL(bParam0, "rigtaskseq01", true);
		}
		else if (!DECOR_CHECK_EXIST(bParam0, "rigtaskseq02") && DECOR_CHECK_EXIST(bParam0, "rigtaskseq01"))
		{
			if (StackVal && !Function_474(StackVal, !Function_552(StackVal, StackVal, bLocal_1055, *bParam3, 2.0f), Global_34573, *bParam3, 1.0f))
			{
				Function_292(bParam0);
				if (VDIST(Function_292(bParam0), *bParam3) < 10.0f)
				{
					TASK_GO_TO_COORD(bParam0, bParam3, 2);
				}
				else
				{
					TASK_GO_TO_COORD(bParam0, bParam3, true);
				}
				AI_GOAL_LOOK_CLEAR(bParam0);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bParam0);
				DECOR_SET_BOOL(bParam0, "rigtaskseq02", true);
			}
			else if (!GET_TASK_STATUS(bParam0, 66) != 1)
			{
				Function_292(bParam0);
				vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_292(bParam0), *bParam3, StackVal) };
				vVar6 = { StackVal, StackVal, Vector(vVar6, StackVal, StackVal) / Vector(2.0f, 2.0f, 2.0f) };
				Function_292(bParam0);
				vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar6, Function_292(bParam0), StackVal) };
				TASK_GO_TO_COORD_AND_STAY(StackVal, StackVal, bParam0, Function_306(&vVar9, 1, bParam0, vVar9));
			}
		}
		else if (DECOR_CHECK_EXIST(bParam0, "rigtaskseq02") && !DECOR_CHECK_EXIST(bParam0, "rigtaskseq03"))
		{
			if (GET_TASK_STATUS(bParam0, 13) == 1 && GET_TASK_STATUS(bParam0, 1) != 0)
			{
				RESET_ANIM_SET_FOR_ACTOR(bParam0, 1);
				SET_ANIM_SET_FOR_ACTOR(bParam0, "dynamite", 0);
				TASK_ACTION_PERFORM(bParam0, "dynamite/Mex_Burry");
				SET_MOVER_FROZEN(bParam0, true);
			}
			else if (GET_TASK_STATUS(bParam0, 13) == 1)
			{
				if (GET_CURR_ACTION_NODE_PLAY_TIME(bParam0) < 10.0f && IS_ACTION_NODE_PLAYING_PARTIAL(bParam0, "nmex_burry"))
				{
					REMOVE_ALL_OBJECT_ATTACHMENTS(bParam0);
					DECOR_SET_BOOL(bParam0, "rigtaskseq03", true);
				}
			}
		}
		else if (DECOR_CHECK_EXIST(bParam0, "rigtaskseq03") && !DECOR_CHECK_EXIST(bParam0, "rigtaskcomplete"))
		{
			if (GET_TASK_STATUS(bParam0, 13) == 0)
			{
				SET_MOVER_FROZEN(bParam0, false);
				bVar12 = Function_500(bParam0);
				bVar13 = Function_499(bParam0);
				Function_238(bVar12);
				GET_OBJECT_RELATIVE_OFFSET(bParam0, Function_238(bVar12), &vVar14);
				Function_238(bVar13);
				GET_OBJECT_RELATIVE_OFFSET(bParam0, Function_238(bVar13), &vVar20);
				vVar23 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar20, vVar14, StackVal) };
				vVar23 = { StackVal, StackVal, Vector(vVar23, StackVal, StackVal) / Vector(2.0f, 2.0f, 2.0f) };
				GET_OBJECT_RELATIVE_POSITION(bParam0, vVar23, &vVar17);
				*bParam3 = { StackVal, StackVal, vVar17 };
				bLocal_1130 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD_PRECISELY(StackVal, 0, &Local_4 + 2344[(DECOR_GET_INT(bParam0, "riggerindex") - 1)6], 4, 0,5f, 20.0f, 0, 1);
				TASK_CROUCH(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bParam0, bLocal_1130);
				TASK_SEQUENCE_RELEASE(bLocal_1130, 1);
				AI_GOAL_STAND_AT_COORD(bParam0, *(&Local_4 + 2344[(DECOR_GET_INT(bParam0, "riggerindex") - 1)6]), 1);
				AI_GOAL_LOOK_CLEAR(bParam0);
				DECOR_SET_BOOL(bParam0, "rigtaskcomplete", true);
				DECOR_REMOVE_ALL(bParam0);
			}
		}
	}
}

bool Function_552(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x1DA95 / 121493
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (Function_73(StackVal, StackVal, vParam1))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				Function_371(bVar1);
				if (VDIST(Function_371(bVar1), vParam1) >= fParam4)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

void Function_553() //Position: 0x1DB03 / 121603
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	
	if (IS_VOLUME_VALID(bLocal_1198))
	{
		bVar0 = Function_547(Global_34573, Local_4.f_2544);
		GET_PATH_POINT(Local_4.f_2544, bVar0, &vVar1);
		if (DECOR_GET_INT(bLocal_1198, "npathpoint") != bVar0)
		{
			SET_OBJECT_POSITION_ON_GROUND(bLocal_1198, vVar1);
			DECOR_SET_INT(bLocal_1198, "npathpoint", bVar0);
		}
		if (bVar0 >= 0)
		{
			GET_PATH_POINT(Local_4.f_2544, (bVar0 - 1), &vVar1);
		}
		if (DECOR_GET_INT(bLocal_1199, "npathpoint") != (bVar0 - 1))
		{
			SET_OBJECT_POSITION_ON_GROUND(bLocal_1199, vVar1);
			DECOR_SET_INT(bLocal_1199, "npathpoint", (bVar0 - 1));
		}
	}
	if (IS_VOLUME_VALID(bLocal_1199))
	{
		bVar4 = Function_547(Global_34573, Local_4.f_2540);
		GET_PATH_POINT(Local_4.f_2540, bVar4, &vVar5);
		if (DECOR_GET_INT(bLocal_1200, "npathpoint") != bVar4)
		{
			SET_OBJECT_POSITION_ON_GROUND(bLocal_1200, vVar5);
			DECOR_SET_INT(bLocal_1200, "npathpoint", bVar4);
		}
		if (bVar4 >= 0)
		{
			GET_PATH_POINT(Local_4.f_2540, (bVar4 - 1), &vVar5);
		}
		if (DECOR_GET_INT(bLocal_1201, "npathpoint") != (bVar4 - 1))
		{
			SET_OBJECT_POSITION_ON_GROUND(bLocal_1201, vVar5);
			DECOR_SET_INT(bLocal_1201, "npathpoint", (bVar4 - 1));
		}
		if (bVar4 <= (GET_NUM_PATH_POINTS(Local_4.f_2540) - 2))
		{
			GET_PATH_POINT(Local_4.f_2540, bVar4 + 1, &vVar5);
		}
		if (DECOR_GET_INT(bLocal_1202, "npathpoint") != bVar4 + 1)
		{
			SET_OBJECT_POSITION_ON_GROUND(bLocal_1202, vVar5);
			DECOR_SET_INT(bLocal_1202, "npathpoint", bVar4 + 1);
		}
	}
	return;
}

void Function_554() //Position: 0x1DCB1 / 122033
{
	if (!DECOR_CHECK_EXIST(bLocal_678, "alertedconvoy"))
	{
		if (iLocal_687 >= 9)
		{
			Function_550();
		}
		if (!Function_460((*&Local_645 + 68)[02], 1, 1, 4294967295))
		{
			Function_231("Rebel04_fail_wagon_broke");
			bLocal_696 = true;
			return;
		}
		if (Function_559() && !GET_WEAPON_IN_HAND(Global_34573) != 23)
		{
			DECOR_SET_FLOAT(bLocal_678, "alertedconvoy", GET_CURRENT_GAME_TIME());
			return;
		}
		if (Function_461(&bLocal_863, Local_4.f_784, Local_4.f_788, "Rebel04_vol_warning", "Rebel04_vol_fail", &bLocal_696, 1, bLocal_678, Local_4, 330, 1))
		{
			return;
		}
		if (Function_557(bLocal_707, "Rebel04_assaulted_luisa", &uLocal_869, &bLocal_696, 1, 0x41200000, 1, 0, 1))
		{
			return;
		}
		if (Function_556(Local_4.f_624, "Rebel04_assaulted_rebels", &uLocal_869, &bLocal_696, 1, 0x41200000, 1, 0, 1))
		{
			return;
		}
		if (SQUAD_IS_VALID(bLocal_1055))
		{
			if (Function_556(bLocal_1055, "Rebel04_assaulted_rebels", &uLocal_869, &bLocal_696, 1, 0x41200000, 1, 0, 1))
			{
				return;
			}
		}
		if (IS_OBJECTSET_VALID(bLocal_1174))
		{
			if (Function_555(bLocal_1174, "Rebel04_assaulted_rebels", &uLocal_869, &bLocal_696, 1, 0x41200000, 1, 0, 1))
			{
				return;
			}
		}
	}
	if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "alertedconvoy")) < 1.0f)
	{
		Function_231("Rebel04_fail_convoy_alerted");
		bLocal_696 = true;
	}
	return;
}

bool Function_555(bool bParam0, char* cParam1, var uParam2, var uParam3, int iParam4, float fParam5, var uParam6, bool bParam7, bool bParam8) //Position: 0x1DEB1 / 122545
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(bParam0))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (Function_557(bVar2, cParam1, uParam2, uParam3, iParam4, fParam5, uParam6, bParam7, bParam8))
					{
						return 1;
					}
				}
			}
			bVar0++;
		}
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool Function_556(bool bParam0, bool bParam1, var uParam2, int iParam3, int iParam4, float fParam5, int iParam6, bool bParam7, bool bParam8) //Position: 0x1DF1C / 122652
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
				if (Function_557(bVar1, bParam1, uParam2, iParam3, iParam4, fParam5, iParam6, bParam7, bParam8))
				{
					return 1;
				}
			}
			bVar0++;
		}
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool Function_557(bool bParam0, char* cParam1, var uParam2, var uParam3, int iParam4, float fParam5, var uParam6, bool bParam7, bool bParam8) //Position: 0x1DF78 / 122744
{
	if (*uParam3 == 1)
	{
		return 1;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_558(bParam0, cParam1, uParam2, uParam3, iParam4, fParam5, uParam6, 0);
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
			Function_558(GET_ACTORS_HORSE(bParam0), cParam1, uParam2, uParam3, iParam4, fParam5, uParam6, 1);
		}
		else if (bParam7)
		{
		}
	}
	return *uParam3;
}

void Function_558(bool bParam0, char* cParam1, var uParam2, var uParam3, int iParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x1E00C / 122892
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
			Function_231(cParam1);
		}
		else
		{
			strcpy(&Var0, cParam1, 32);
			stradd(&Var0, "_horse", 32);
			Function_231(&Var0);
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
				Function_231(cParam1);
			}
			else
			{
				strcpy(&Var8, cParam1, 32);
				stradd(&Var8, "_horse", 32);
				Function_231(&Var8);
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
				Function_231(cParam1);
			}
			else
			{
				strcpy(&Var29, cParam1, 32);
				stradd(&Var29, "_horse", 32);
				Function_231(&Var29);
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
					Function_231(cParam1);
				}
				else
				{
					strcpy(&Var50, cParam1, 32);
					stradd(&Var50, "_horse", 32);
					Function_231(&Var50);
				}
			}
		}
	}
}

int Function_559() //Position: 0x1E25F / 123487
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_LAYOUTREF_VALID(bLocal_678))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bLocal_678);
		ITERATE_IN_LAYOUT(bVar0, GET_EVENT_LAYOUT());
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		while (IS_OBJECT_VALID(bVar1))
		{
			bVar2 = GET_EVENT_FROM_OBJECT(bVar1);
			if (IS_EVENT_VALID(bVar2))
			{
				if (GET_EVENT_TYPE(bVar2) != 17 || GET_EVENT_TYPE(bVar2) != 91)
				{
					DESTROY_ITERATOR(bVar0);
					return 1;
				}
			}
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
	}
	return 0;
}

void Function_560() //Position: 0x1E2C7 / 123591
{
	if (iLocal_687 < 6 && iLocal_687 > 105)
	{
		if (iLocal_687 < 8)
		{
			Function_588();
			if (bLocal_1161 && !iLocal_1162)
			{
				iLocal_1162 = 1;
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_216(&iLocal_857);
				iLocal_687 = 9;
			}
		}
		Function_582();
		Function_581(&bLocal_863, 100.0f, 200.0f, bLocal_707, "Rebel04_obj_return", "Rebel04_too_far", &bLocal_696, 0, Local_4, bLocal_678, 325, 1);
	}
	switch (iLocal_687)
	{
		case 0x00000000:
			Function_454(0);
			SET_ACTOR_HEALTH(bLocal_707, GET_ACTOR_MAX_HEALTH(bLocal_707));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			if (Function_281(&Local_679))
			{
				TELEPORT_OBJECT_TO_OBJECT(Global_34573, (*&Local_4 + 872)[0], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
				TELEPORT_OBJECT_TO_OBJECT(bLocal_707, (*&Local_4 + 872)[1], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1065353216);
				Function_216(&iLocal_857);
				iLocal_687 = 1;
			}
			else
			{
				Function_216(&iLocal_857);
				iLocal_687 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_216(&iLocal_857);
				iLocal_687 = 2;
			}
			break;
		
		case 0x00000002:
			Function_237(bLocal_686);
			Function_439(StackVal, StackVal, Function_237(bLocal_686), bLocal_686, Global_30633[2], Function_240(bLocal_686), 0);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!IS_ACTORSET_VALID(Local_645.f_80))
			{
				Function_337();
			}
			Local_1046 = (*&Local_645 + 68)[02];
			Function_445(Local_1046);
			Function_345(&(Local_927[117]), Local_1046, "Wagon", 0, 0x5f5e100, 1);
			Function_352();
			Function_580();
			if (IS_ACTOR_VALID(Local_1046))
			{
			}
			if (!GET_TASK_STATUS(bLocal_707, 0) != 1)
			{
				bLocal_1130 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_2548, 2, 1, 0, 1, false);
				TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(false, Local_1046, 0, 2, 0);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_707, bLocal_1130);
				TASK_SEQUENCE_RELEASE(bLocal_1130, 1);
				ENABLE_VEHICLE_SEAT(Local_1046, false, 0);
			}
			Function_437(8, 1, 1);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_707, true);
			FORCE_LOOK_AT_ACTOR(bLocal_707, Global_34573, 3212836864);
			ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, Local_1046, -1.0f, -1.0f, 1, 1, 1);
			Function_578();
			bLocal_1127 = Function_577(bLocal_678, Function_53(), (*&Local_4 + 700)[0], Global_34573, 1, 330, 4294967295, 0, 0, 1);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_1127)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_1127));
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			bLocal_1161 = false;
			AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
			Function_216(&iLocal_857);
			iLocal_687 = 6;
			break;
		
		case 0x00000003:
			if (IS_ACTOR_RIDING_VEHICLE(bLocal_707))
			{
				Function_216(&iLocal_857);
				iLocal_687 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING() && !HUD_IS_FADED())
			{
				Function_576();
				Function_216(&iLocal_857);
				iLocal_687 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_276(&iLocal_857) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!HUD_IS_SHOWING_OBJECTIVE())
				{
					if (IS_ACTOR_RIDING(Global_34573))
					{
						Function_413("Rebel04_obj01c", 7,5f, 1, 2, 0, 0, 0);
					}
					else if (IS_ACTOR_RIDING_VEHICLE(Global_34573))
					{
						Function_413("Rebel04_obj01b", 7,5f, 1, 2, 0, 0, 0);
					}
					else
					{
						Function_413("Rebel04_obj01", 7,5f, 1, 2, 0, 0, 0);
					}
				}
				Function_217(&iLocal_1156, 20.0f);
				Function_216(&iLocal_857);
				Function_216(&bLocal_863);
				Function_216(&iLocal_866);
				iLocal_687 = 8;
			}
			break;
		
		case 0x00000008:
			Function_565();
			Function_562();
			if (GATEWAY_UPDATE(bLocal_1127))
			{
				Function_214(bLocal_1127);
				if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(Global_34573)))
				{
					bLocal_1180 = GET_ATTACHED_HOGTIE_VICTIM(Global_34573);
					FREE_FROM_HOGTIE(bLocal_1180);
					TELEPORT_ACTOR(bLocal_1180, &Local_4 + 892[46], 1, 1, 1);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1067))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_1067);
				}
				Function_216(&iLocal_857);
				iLocal_687 = 105;
			}
			break;
		
		case 0x00000009:
			if (HUD_IS_FADED())
			{
				FORCE_VEHICLE_CINEMATIC_CAMERA(0);
				AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
				Function_371(Global_34573);
				Function_411((*&Local_4 + 700)[0]);
				Function_561(VDIST(Function_371(Global_34573), Function_411((*&Local_4 + 700)[0])));
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_SMALL_TEXT();
				SET_ACTOR_SPEED(bLocal_707, 0.0f);
				TASK_STAND_STILL(bLocal_707, -1.0f, 0, 0);
				RESET_ACTOR_GAITS(bLocal_707, 0);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_645 + 68)[02], *(&Local_4 + 1460[16]), 1, true, 1);
				if (!GET_ACTOR_IN_VEHICLE_SEAT((*&Local_645 + 68)[02], false) != bLocal_707)
				{
					SET_ACTOR_IN_VEHICLE(bLocal_707, (*&Local_645 + 68)[02], false);
				}
				if (!GET_ACTOR_IN_VEHICLE_SEAT((*&Local_645 + 68)[02], true) != Global_34573)
				{
					SET_ACTOR_IN_VEHICLE(Global_34573, (*&Local_645 + 68)[02], true);
				}
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				HUD_ENABLE(false);
				Function_181(1, 0, 1);
				Function_449(9);
				Function_216(&iLocal_857);
				iLocal_687 = 10;
			}
			break;
		
		case 0x0000000A:
			if (STREAMING_IS_WORLD_LOADED())
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_707, Local_4.f_2500, 4, 0, 0, 1, false);
				AI_ACTOR_FORCE_SPEED(bLocal_707, 4);
				Function_216(&iLocal_857);
				iLocal_687 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_276(&iLocal_857) < 1.0f)
			{
				HUD_FADE_IN(1.0f, 1065353216);
				FORCE_VEHICLE_CINEMATIC_CAMERA(1);
				AUDIO_ATTACH_MICROPHONE_TO_ACTOR(Global_34573);
				Function_216(&iLocal_857);
				iLocal_687 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!HUD_IS_FADED() && !HUD_IS_FADING())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				HUD_ENABLE(true);
				Function_216(&iLocal_857);
				iLocal_687 = 8;
			}
			break;
		
		case 0x00000069:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_276(&iLocal_857) < 5.0f)
			{
				Function_216(&iLocal_857);
				iLocal_687 = 106;
			}
			break;
		
		case 0x0000006A:
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bLocal_707, 2);
			CLEAR_PLAYER_CONTROL_HORSE_FOLLOW(0);
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			iLocal_709[0] = 1;
			Function_216(&iLocal_857);
			bLocal_686 = true;
			iLocal_687 = 2;
			break;
	}
	return;
}

void Function_561(bool bParam0) //Position: 0x1E86C / 125036
{
	FEED_CODE_WARP_DIST(bParam0);
	ADVANCE_TIME_HOURS(((bParam0 * 4.0f) / 3600.0f));
	return;
}

void Function_562() //Position: 0x1E884 / 125060
{
	bool bVar0;
	bool bVar1;
	
	if ((StackVal || Function_474(StackVal, IS_ACTOR_IN_VOLUME(bLocal_707, (*&Local_4 + 700)[1]), Global_34573, *(&Local_4 + 1460[06]), 200.0f)) && Function_549())
	{
		if (!IS_ACTORSET_VALID(Local_4.f_672))
		{
			Function_409();
			Function_548();
			Function_449(9);
		}
		if (!SQUAD_IS_VALID(Local_4.f_624))
		{
			Function_447();
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_624))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_624, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					TASK_CROUCH(bVar1, -1.0f);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar1, 1);
				}
				bVar0++;
			}
			Function_345(&(Local_927[317]), Local_4.f_624, "RebelSoldier", 0, 0x5f5e100, 1);
		}
	}
	if ((((Function_474(StackVal, StackVal, Global_34573, *(&Local_4 + 1460[06]), 50.0f) && (IS_ACTOR_RIDING(Global_34573) || IS_ACTOR_RIDING_VEHICLE(Global_34573))) && Function_564(Global_34573, bLocal_707, 20.0f)) && !DECOR_CHECK_EXIST(bLocal_678, "arrivespot")) && !IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Function_563();
		AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
		FORCE_VEHICLE_CINEMATIC_CAMERA(0);
		DECOR_SET_BOOL(bLocal_678, "arrivespot", true);
	}
	return;
}

void Function_563() //Position: 0x1E9A8 / 125352
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_ArriveSpot", "Rebel04_ArriveSpot", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_564(var uParam0, bool bParam1, float fParam2) //Position: 0x1E9F5 / 125429
{
	float fVar0;
	
	fVar0 = Function_520(uParam0, bParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

void Function_565() //Position: 0x1EA12 / 125458
{
	var uVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	var uVar8;
	
	if (IS_ACTOR_RIDING(Global_34573) || IS_ACTOR_RIDING_VEHICLE(Global_34573))
	{
		if (Function_381(Global_34573, bLocal_707, 25.0f) && !Function_133())
		{
			if (!Function_278(&iLocal_1095))
			{
				Function_416(&iLocal_1095);
			}
			if (!DECOR_CHECK_EXIST(bLocal_678, "nearfinishbanter"))
			{
				GET_VOLUME_CENTER((*&Local_4 + 700)[1], &uVar0);
				Function_292(bLocal_707);
				vVar3 = { StackVal, StackVal, Function_292(bLocal_707) };
				ESTIMATE_TWO_DISTANCES_ALONG_PATH(Local_4.f_2500, &uVar0, &vVar3, &fVar6, &fVar7, &uVar8);
				if (fVar7 < fVar6 && Function_381(Global_34573, bLocal_707, 25.0f))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_276(&iLocal_1095) < 5.0f)
						{
							Function_575();
							DECOR_SET_BOOL(bLocal_678, "nearfinishbanter", true);
						}
					}
					else if (!DECOR_CHECK_EXIST(bLocal_678, "nearfinishbanter"))
					{
						Function_216(&iLocal_1095);
						ABORT_SCRIPTED_CONVERSATION(1);
					}
				}
				if (!bLocal_1161)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_276(&iLocal_1095) < 10.0f)
						{
							if (!DECOR_CHECK_EXIST(bLocal_678, "firstbanter") && !AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Rebel04_BanterBush_V1_AA"))
							{
								Function_574();
								DECOR_SET_BOOL(bLocal_678, "firstbanter", true);
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Rebel04_BanterBush_v2_AA") && !DECOR_CHECK_EXIST(bLocal_678, "secondbanter"))
							{
								Function_573();
								DECOR_SET_BOOL(bLocal_678, "secondbanter", true);
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Rebel04_BanterBush_v4_AA") && !DECOR_CHECK_EXIST(bLocal_678, "fourthbanter"))
							{
								Function_572();
								DECOR_SET_BOOL(bLocal_678, "fourthbanter", true);
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Rebel04_BanterBush_v3_AA") && !DECOR_CHECK_EXIST(bLocal_678, "thirdbanter"))
							{
								Function_571();
								DECOR_SET_BOOL(bLocal_678, "thirdbanter", true);
							}
							else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Rebel04_NoTalkAnymore"))
							{
							}
							else if (!DECOR_CHECK_EXIST(bLocal_678, "notalk"))
							{
								Function_570();
								DECOR_SET_BOOL(bLocal_678, "notalk", true);
							}
						}
					}
					else
					{
						Function_216(&iLocal_1095);
					}
				}
			}
		}
	}
	else if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE())
	{
		if (!Function_564(Global_34573, bLocal_707, 25.0f))
		{
			if (!DECOR_CHECK_EXIST(bLocal_678, "ranoff") && !DECOR_CHECK_EXIST(bLocal_678, "inwagononce"))
			{
				Function_569();
				DECOR_SET_BOOL(bLocal_678, "ranoff", true);
			}
		}
		else if (Function_276(&iLocal_1156) < 20.0f)
		{
			if (!DECOR_CHECK_EXIST(bLocal_678, "thisorthat") && !DECOR_CHECK_EXIST(bLocal_678, "inwagononce"))
			{
				Function_568();
				DECOR_SET_BOOL(bLocal_678, "thisorthat", true);
				Function_216(&iLocal_1156);
			}
			else if (DECOR_CHECK_EXIST(bLocal_678, "inwagononce"))
			{
				Function_567();
				Function_216(&iLocal_1156);
			}
			else
			{
				Function_566();
				Function_216(&iLocal_1156);
			}
		}
	}
	else if (Function_276(&iLocal_1156) < 5.0f)
	{
		ABORT_SCRIPTED_CONVERSATION(1);
	}
	return;
}

void Function_566() //Position: 0x1EDC9 / 126409
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_waitingForGetOn", "Rebel04_waitingForGetOn", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_567() //Position: 0x1EE20 / 126496
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_WaitingOnJonChoice", "Rebel04_WaitingOnJonChoice", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_568() //Position: 0x1EE7D / 126589
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_ThisOrThat", "Rebel04_ThisOrThat", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_569() //Position: 0x1EECA / 126666
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_JonWalkOff", "Rebel04_JonWalkOff", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_570() //Position: 0x1EF17 / 126743
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_NoTalkAnymore", "Rebel04_NoTalkAnymore", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_571() //Position: 0x1EF6A / 126826
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AA", "Rebel04_BanterBush_v3_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AB", "Rebel04_BanterBush_v3_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AC", "Rebel04_BanterBush_v3_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AD", "Rebel04_BanterBush_v3_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AE", "Rebel04_BanterBush_v3_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AF", "Rebel04_BanterBush_v3_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AG", "Rebel04_BanterBush_v3_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AH1", "Rebel04_BanterBush_v3_AH1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AH2", "Rebel04_BanterBush_v3_AH2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AI1", "Rebel04_BanterBush_v3_AI1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AI2", "Rebel04_BanterBush_v3_AI2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AI3", "Rebel04_BanterBush_v3_AI3", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AJ", "Rebel04_BanterBush_v3_AJ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AK1", "Rebel04_BanterBush_v3_AK1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AK2", "Rebel04_BanterBush_v3_AK2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AK3", "Rebel04_BanterBush_v3_AK3", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AL", "Rebel04_BanterBush_v3_AL", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AM", "Rebel04_BanterBush_v3_AM", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AN1", "Rebel04_BanterBush_v3_AN1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AN2", "Rebel04_BanterBush_v3_AN2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AO", "Rebel04_BanterBush_v3_AO", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AP1", "Rebel04_BanterBush_v3_AP1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AP2", "Rebel04_BanterBush_v3_AP2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v3_AQ", "Rebel04_BanterBush_v3_AQ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AR1", "Rebel04_BanterBush_v3_AR1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v3_AR2", "Rebel04_BanterBush_v3_AR2", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_572() //Position: 0x1F606 / 128518
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AA", "Rebel04_BanterBush_v4_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AB", "Rebel04_BanterBush_v4_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AC1", "Rebel04_BanterBush_v4_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AC2", "Rebel04_BanterBush_v4_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AD", "Rebel04_BanterBush_v4_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AE1", "Rebel04_BanterBush_v4_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AE2", "Rebel04_BanterBush_v4_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AF", "Rebel04_BanterBush_v4_AF", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AG", "Rebel04_BanterBush_v4_AG", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AH", "Rebel04_BanterBush_v4_AH", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AI1", "Rebel04_BanterBush_v4_AI1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AI2", "Rebel04_BanterBush_v4_AI2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AI3", "Rebel04_BanterBush_v4_AI3", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AJ", "Rebel04_BanterBush_v4_AJ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AK", "Rebel04_BanterBush_v4_AK", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AL1", "Rebel04_BanterBush_v4_AL1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AL2", "Rebel04_BanterBush_v4_AL2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v4_AM", "Rebel04_BanterBush_v4_AM", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v4_AN", "Rebel04_BanterBush_v4_AN", true, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_573() //Position: 0x1FADF / 129759
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v2_AA", "Rebel04_BanterBush_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AB", "Rebel04_BanterBush_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v2_AC", "Rebel04_BanterBush_v2_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AD", "Rebel04_BanterBush_v2_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v2_AE", "Rebel04_BanterBush_v2_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AF", "Rebel04_BanterBush_v2_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v2_AG", "Rebel04_BanterBush_v2_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AH1", "Rebel04_BanterBush_v2_AH1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AH2", "Rebel04_BanterBush_v2_AH2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v2_AI", "Rebel04_BanterBush_v2_AI", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AJ", "Rebel04_BanterBush_v2_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v2_AK", "Rebel04_BanterBush_v2_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AL", "Rebel04_BanterBush_v2_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_v2_AM", "Rebel04_BanterBush_v2_AM", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_v2_AN", "Rebel04_BanterBush_v2_AN", true, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_574() //Position: 0x1FEAE / 130734
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AA", "Rebel04_BanterBush_V1_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AB", "Rebel04_BanterBush_V1_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AC", "Rebel04_BanterBush_V1_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AD1", "Rebel04_BanterBush_V1_AD1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AD2", "Rebel04_BanterBush_V1_AD2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AD3", "Rebel04_BanterBush_V1_AD3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AE", "Rebel04_BanterBush_V1_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AF", "Rebel04_BanterBush_V1_AF", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AG", "Rebel04_BanterBush_V1_AG", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AH1", "Rebel04_BanterBush_V1_AH1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AH2", "Rebel04_BanterBush_V1_AH2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AI1", "Rebel04_BanterBush_V1_AI1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AI2", "Rebel04_BanterBush_V1_AI2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AJ", "Rebel04_BanterBush_V1_AJ", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AK", "Rebel04_BanterBush_V1_AK", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AL", "Rebel04_BanterBush_V1_AL", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AM", "Rebel04_BanterBush_V1_AM", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AN", "Rebel04_BanterBush_V1_AN", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AO", "Rebel04_BanterBush_V1_AO", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AP1", "Rebel04_BanterBush_V1_AP1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AP2", "Rebel04_BanterBush_V1_AP2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AQ1", "Rebel04_BanterBush_V1_AQ1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AQ2", "Rebel04_BanterBush_V1_AQ2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AR1", "Rebel04_BanterBush_V1_AR1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AR2", "Rebel04_BanterBush_V1_AR2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_BanterBush_V1_AS", "Rebel04_BanterBush_V1_AS", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AT1", "Rebel04_BanterBush_V1_AT1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_BanterBush_V1_AT2", "Rebel04_BanterBush_V1_AT2", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_575() //Position: 0x205CC / 132556
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_NearBushBanter_v1_AA", "Rebel04_NearBushBanter_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_NearBushBanter_v1_AB", "Rebel04_NearBushBanter_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_NearBushBanter_v1_AC1", "Rebel04_NearBushBanter_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_NearBushBanter_v1_AC2", "Rebel04_NearBushBanter_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_NearBushBanter_v1_AD", "Rebel04_NearBushBanter_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_NearBushBanter_v1_AE1", "Rebel04_NearBushBanter_v1_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_NearBushBanter_v1_AE2", "Rebel04_NearBushBanter_v1_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Rebel04_NearBushBanter_v1_AF", "Rebel04_NearBushBanter_v1_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_NearBushBanter_v1_AG", "Rebel04_NearBushBanter_v1_AG", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_576() //Position: 0x2086D / 133229
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_Ready2Leave", "Rebel04_Ready2Leave", false, 1, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_577(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, int iParam9) //Position: 0x208BC / 133308
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

void Function_578() //Position: 0x20939 / 133433
{
	if (!IS_ACTORSET_VALID(Local_645.f_116))
	{
		Function_579();
	}
	TASK_USE_GRINGO((*&Local_645 + 88)[02], GET_GRINGO_FROM_OBJECT(Local_4.f_2472), "UseCase1", 4294967295, 1);
	TASK_USE_GRINGO((*&Local_645 + 88)[22], GET_GRINGO_FROM_OBJECT(Local_4.f_2476), "UseCase1", 4294967295, 1);
	TASK_USE_GRINGO((*&Local_645 + 88)[12], GET_GRINGO_FROM_OBJECT(Local_4.f_2480), "UseCase1", 4294967295, 1);
	Function_345(&(Local_927[217]), Local_645.f_120, "RebelSoldier", 0, 0x5f5e100, 1);
	return;
}

void Function_579() //Position: 0x209D3 / 133587
{
	Local_645.f_116 = CREATE_ACTORSET_IN_LAYOUT(Local_645, "CutsceneActorsset", 0);
	Local_645.f_120 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_645, "CutsceneActors"));
	(*&Local_645 + 88)[02] = CREATE_ACTOR_IN_LAYOUT(Local_645, "GuardSitting", 535, -2291,46f, 21,84f, 4961,65f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_645.f_116, (*&Local_645 + 88)[02]);
	SQUAD_JOIN((*&Local_645 + 88)[02], Local_645.f_120);
	(*&Local_645 + 88)[12] = CREATE_ACTOR_IN_LAYOUT(Local_645, "Guard02", 537, -2293,83f, 21,84f, 4963,32f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_645.f_116, (*&Local_645 + 88)[12]);
	SQUAD_JOIN((*&Local_645 + 88)[12], Local_645.f_120);
	(*&Local_645 + 88)[22] = CREATE_ACTOR_IN_LAYOUT(Local_645, "Guard01", 533, -2294,88f, 21,84f, 4962,58f, 0.0f, 0.0f, 0.0f);
	ADD_ACTORSET_MEMBER(Local_645.f_116, (*&Local_645 + 88)[22]);
	SQUAD_JOIN((*&Local_645 + 88)[22], Local_645.f_120);
	return;
}

void Function_580() //Position: 0x20B07 / 133895
{
	if (IS_OBJECTSET_VALID(bLocal_1052))
	{
		Function_431(&bLocal_1052);
		DESTROY_OBJECTSET(bLocal_1052);
	}
	if (IS_OBJECTSET_VALID(bLocal_1053))
	{
		Function_431(&bLocal_1053);
		DESTROY_OBJECTSET(bLocal_1053);
	}
	if (IS_ACTOR_VALID(StackVal))
	{
		DESTROY_ACTOR(StackVal);
	}
	if (IS_ACTOR_VALID(StackVal))
	{
		DESTROY_ACTOR(StackVal);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (IS_OBJECT_VALID(Local_1036.f_12))
	{
		DESTROY_OBJECT(Local_1036.f_12);
	}
	if (IS_OBJECT_VALID(Local_1036.f_16))
	{
		DESTROY_OBJECT(Local_1036.f_16);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
	}
	if (IS_OBJECT_VALID(Local_1041.f_12))
	{
		DESTROY_OBJECT(Local_1041.f_12);
	}
	return;
}

int Function_581(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x20BBC / 134076
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_381(Global_34573, bParam3, uParam2))
	{
		Function_231(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_381(Global_34573, bParam3, bParam1))
	{
		if (!Function_467(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_413(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_466(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_465(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_465(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_467(2))
	{
		Function_464(2);
		if (!Function_463())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_462();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_204(bParam3);
				Function_438(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_465(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_465(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_582() //Position: 0x20D50 / 134480
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_VALID(Local_1046))
	{
		if (GET_NUM_DRAFTED_ACTORS(Local_1046) >= 0)
		{
			bVar0 = false;
			while (bVar0 <= GET_NUM_DRAFT_POSITIONS(Local_1046))
			{
				bVar1 = GET_DRAFT_ACTOR(bVar0, Local_1046);
				if ((IS_ACTOR_VALID(bVar1) && !HUD_IS_SHOWING_SMALL_TEXT()) && !HUD_IS_SHOWING_OBJECTIVE())
				{
					if (Function_587(bVar1, Global_34573))
					{
						if (GET_NUM_DRAFTED_ACTORS(Local_1046) == 2)
						{
							Function_586();
						}
					}
					else if (GET_LAST_ATTACKER(bVar1) != Global_34573 && GET_NUM_DRAFTED_ACTORS(Local_1046) != 2)
					{
						if (Function_585(GET_WEAPON_IN_HAND(Global_34573)))
						{
							Function_584();
						}
						CLEAR_LAST_ATTACK(bVar1);
					}
				}
				bVar0++;
			}
		}
		else
		{
			Function_583();
			Function_231("Rebel04_fail_wagon_broke");
			bLocal_696 = true;
		}
		if (!DECOR_CHECK_EXIST(bLocal_707, "ninvehicle"))
		{
			if (IS_ACTOR_RIDING_VEHICLE(bLocal_707))
			{
				DECOR_SET_BOOL(bLocal_707, "ninvehicle", true);
			}
		}
		else if (!IS_ACTOR_RIDING_VEHICLE(bLocal_707) && !GET_TASK_STATUS(bLocal_707, 54) != 1)
		{
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bLocal_707, Local_1046, 0, 2, 0);
		}
	}
	else
	{
		Function_231("Rebel04_fail_wagon_destroyed");
		bLocal_696 = true;
	}
	return;
}

void Function_583() //Position: 0x20E89 / 134793
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_KillsHorsesFails", "Rebel04_KillsHorsesFails", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_584() //Position: 0x20EE2 / 134882
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_Shoots1WagHors", "Rebel04_Shoots1WagHors", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_585(bool bParam0) //Position: 0x20F37 / 134967
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

void Function_586() //Position: 0x20F7D / 135037
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_Kills1WagHors", "Rebel04_Kills1WagHors", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_587(bool bParam0, bool bParam1) //Position: 0x20FD0 / 135120
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(bParam0) == bParam1)
	{
		if (IS_ACTOR_DEAD(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_588() //Position: 0x21001 / 135169
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	var uVar10;
	
	if (!DECOR_CHECK_EXIST(bLocal_707, "runmovetype"))
	{
		DECOR_SET_BOOL(bLocal_707, "runmovetype", false);
	}
	iVar0 = 1;
	GET_ACTOR_VEHICLE_STATE(Global_34573, &iVar0, &iVar1);
	if ((GET_ACTOR_IN_VEHICLE_SEAT(Local_1046, true) != Global_34573 || iVar1 != 2) || iVar1 != 1)
	{
		if (!DECOR_CHECK_EXIST(bLocal_678, "inwagon"))
		{
			Function_437(8, 0, 1);
			DECOR_SET_BOOL(bLocal_678, "inwagon", true);
			DECOR_SET_BOOL(bLocal_678, "inwagononce", true);
			AUDIO_MUSIC_SET_MOOD("JOURNEY", 0, 4294967295, 4294967295);
			STOP_FORCE_LOOK_AT_COORD(bLocal_707);
			FORCE_VEHICLE_CINEMATIC_CAMERA(1);
			AUDIO_ATTACH_MICROPHONE_TO_ACTOR(Global_34573);
		}
		if (IS_OBJECT_VALID(bLocal_1127))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_1127)))
			{
				ADD_BLIP_FOR_OBJECT(bLocal_1127, 330, 0f, 2, 0);
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_OBJECTIVE();
				if (iLocal_687 <= 8)
				{
					Function_590();
				}
			}
		}
	}
	else
	{
		if (DECOR_CHECK_EXIST(bLocal_678, "inwagon"))
		{
			Function_437(8, 1, 1);
			DECOR_REMOVE(bLocal_678, "inwagon");
			FORCE_VEHICLE_CINEMATIC_CAMERA(0);
			AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
		}
		if (IS_OBJECT_VALID(bLocal_1127))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_1127)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bLocal_1127));
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
				HUD_CLEAR_OBJECTIVE();
				Function_413("Rebel04_obj01b", 7,5f, 1, 2, 0, 0, 0);
			}
		}
	}
	if (((IS_ACTOR_RIDING(Global_34573) || IS_ACTOR_RIDING_VEHICLE(Global_34573)) && IS_ACTOR_RIDING_VEHICLE(bLocal_707)) && DECOR_CHECK_EXIST(bLocal_678, "luisastopped"))
	{
		if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_564(Global_34573, bLocal_707, 25.0f)) && DECOR_CHECK_EXIST(bLocal_678, "inwagononce"))
		{
			if (IS_ACTOR_RIDING_VEHICLE(Global_34573))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_707, "Rebel04_GetsBakOnWags", "Rebel04_GetsBakOnWags", false, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
				LOG_ERROR("Rebel04_GetsBakOnWags");
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_707, "Rebel04_GetsBakOnHors", "Rebel04_GetsBakOnHors", false, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
				LOG_ERROR("Rebel04_GetsBakOnHors");
			}
		}
		STOP_FORCE_LOOK_AT_COORD(bLocal_707);
		TASK_OVERRIDE_SET_MOVETYPE(bLocal_707, 4);
		DECOR_REMOVE(bLocal_678, "luisastopped");
	}
	if (DECOR_CHECK_EXIST(bLocal_678, "Rebel04_GetsBakOnWags"))
	{
		if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "Rebel04_GetsBakOnWags")) < 15.0f)
		{
			DECOR_REMOVE(bLocal_678, "Rebel04_GetsBakOnWags");
		}
	}
	if (DECOR_CHECK_EXIST(bLocal_678, "Rebel04_GetsBakOnHors"))
	{
		if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "Rebel04_GetsBakOnHors")) < 15.0f)
		{
			DECOR_REMOVE(bLocal_678, "Rebel04_GetsBakOnHors");
		}
	}
	if (DECOR_CHECK_EXIST(bLocal_678, "inwagon"))
	{
		if ((GET_ACTOR_IN_VEHICLE_SEAT(Local_1046, true) != Global_34573 && !GET_TASK_STATUS(bLocal_707, 43) != 1) && IS_ACTOR_RIDING_VEHICLE(bLocal_707))
		{
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_707, Local_4.f_2500, 4, 0, 0, 1, false);
		}
		if (!bLocal_1161)
		{
			if (((StackVal && !Function_474(StackVal, ((((!IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1067) && IS_ACTOR_RIDING_VEHICLE(Global_34573)) && GET_TASK_STATUS(bLocal_707, 43) != 1) && iVar1 != 1) && !IS_ACTOR_IN_VOLUME(bLocal_707, (*&Local_4 + 700)[1])), Global_34573, *(&Local_4 + 1460[06]), 200.0f)) && IS_ACTOR_RIDING_VEHICLE(bLocal_707)) && !DECOR_CHECK_EXIST(bLocal_678, "nearfinishbanter"))
			{
				bLocal_1067 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", false, 6, false, 0, 0, 0, 4294967295, 0);
			}
			else if ((StackVal && (StackVal || Function_474(IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1067), ((!IS_ACTOR_RIDING_VEHICLE(Global_34573) || iVar1 != 3) || GET_LAST_ATTACK_TARGET(Global_34573) != Local_1046), Global_34573, *(&Local_4 + 1460[06]), 200.0f))) || DECOR_CHECK_EXIST(bLocal_678, "nearfinishbanter"))
			{
				RELEASE_SCRIPT_USE_CONTEXT(bLocal_1067);
			}
			if ((((IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1067) && iVar1 != 1) && !bLocal_696) && !Function_482(4, 1, 0)) && !Function_589(4, 1, 0))
			{
				if (IS_SCRIPT_USE_CONTEXT_PRESSED(bLocal_1067))
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
					bLocal_1161 = true;
					Function_85(17, 1, 0, 0);
					RELEASE_SCRIPT_USE_CONTEXT(bLocal_1067);
				}
			}
		}
	}
	else
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1067))
		{
			RELEASE_SCRIPT_USE_CONTEXT(bLocal_1067);
		}
		if ((!GET_TASK_STATUS(bLocal_707, 43) != 1 && IS_ACTOR_RIDING_VEHICLE(bLocal_707)) && IS_ACTOR_RIDING(Global_34573))
		{
			if (!IS_ACTOR_RIDING_VEHICLE(Global_34573) && Function_564(Global_34573, bLocal_707, 25.0f))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_707, "Rebel04_JonMounts", "Rebel04_JonMounts", false, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(bLocal_678, "Rebel04_JonMounts", GET_CURRENT_GAME_TIME());
			}
			AUDIO_MUSIC_SET_MOOD("JOURNEY", 0, 4294967295, 4294967295);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_707, Local_4.f_2500, 4, 0, 0, 1, false);
		}
		if (DECOR_CHECK_EXIST(bLocal_678, "Rebel04_JonMounts"))
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "Rebel04_JonMounts")) < 15.0f)
			{
				DECOR_REMOVE(bLocal_678, "Rebel04_JonMounts");
			}
		}
		if ((((!IS_ACTOR_RIDING(Global_34573) && !IS_ACTOR_RIDING_VEHICLE(Global_34573)) && !DECOR_CHECK_EXIST(bLocal_678, "luisastopped")) && IS_ACTOR_RIDING_VEHICLE(bLocal_707)) && DECOR_CHECK_EXIST(bLocal_678, "inwagononce"))
		{
			DECOR_SET_BOOL(bLocal_678, "luisastopped", false);
			TASK_OVERRIDE_SET_MOVETYPE(bLocal_707, 5);
			if (DECOR_CHECK_EXIST(bLocal_678, "inwagononce"))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_707, "Rebel04_JonJumpsOffWag", "Rebel04_JonJumpsOffWag", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
			}
		}
		if (DECOR_CHECK_EXIST(bLocal_678, "Rebel04_JonJumpsOffWag"))
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "Rebel04_JonJumpsOffWag")) < 15.0f)
			{
				DECOR_REMOVE(bLocal_678, "Rebel04_JonJumpsOffWag");
			}
		}
		Function_292(Global_34573);
		vVar2 = { StackVal, StackVal, Function_292(Global_34573) };
		Function_292(Local_1046);
		vVar5 = { StackVal, StackVal, Function_292(Local_1046) };
		ESTIMATE_TWO_DISTANCES_ALONG_PATH(Local_4.f_2500, &vVar2, &vVar5, &fVar8, &fVar9, &uVar10);
		if (!DECOR_CHECK_EXIST(Local_1046, "Rebel04_2FarAhead"))
		{
			if (fVar8 < (fVar9 + 30.0f))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_707, "Rebel04_2FarAhead", "Rebel04_2FarAhead", false, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(Local_1046, "Rebel04_2FarAhead", GET_CURRENT_GAME_TIME());
				LOG_ERROR("Rebel04_2FarAhead");
			}
		}
		else if ((fVar8 - fVar9) > 10.0f || (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Local_1046, "Rebel04_2FarAhead")) < 20.0f)
		{
			DECOR_REMOVE(Local_1046, "Rebel04_2FarAhead");
		}
		if (!DECOR_CHECK_EXIST(Local_1046, "Rebel04_WrongDir"))
		{
			if ((fVar8 + 30.0f) > fVar9)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_707, "Rebel04_WrongDir", "Rebel04_WrongDir", false, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(Local_1046, "Rebel04_WrongDir", GET_CURRENT_GAME_TIME());
				LOG_ERROR("Rebel04_WrongDir");
			}
		}
		else if ((fVar9 - fVar8) > 10.0f || (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Local_1046, "Rebel04_WrongDir")) < 20.0f)
		{
			DECOR_REMOVE(Local_1046, "Rebel04_WrongDir");
		}
		if (!DECOR_CHECK_EXIST(Local_1046, "Rebel04_WrongDir") && !DECOR_CHECK_EXIST(Local_1046, "Rebel04_2FarAhead"))
		{
			if (!DECOR_CHECK_EXIST(Local_1046, "playergotclose"))
			{
				if ((Function_564(Global_34573, Local_1046, 10.0f) && !IS_ACTOR_RIDING(Global_34573)) && !IS_ACTOR_RIDING_VEHICLE(Global_34573))
				{
					DECOR_SET_BOOL(Local_1046, "playergotclose", true);
				}
			}
			else if (!Function_564(Global_34573, Local_1046, 25.0f))
			{
				if (!DECOR_CHECK_EXIST(Local_1046, "Rebel04_RunsOffInstead"))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_707, "Rebel04_RunsOffInstead", "Rebel04_RunsOffInstead", false, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(Local_1046, "Rebel04_RunsOffInstead", GET_CURRENT_GAME_TIME());
					LOG_ERROR("Rebel04_RunsOffInstead");
				}
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Local_1046, "Rebel04_RunsOffInstead")) < 20.0f || Function_564(Global_34573, Local_1046, 10.0f))
			{
				DECOR_REMOVE(Local_1046, "Rebel04_RunsOffInstead");
			}
		}
	}
	return;
}

bool Function_589(bool bParam0, int iParam1, bool bParam2) //Position: 0x21AEE / 137966
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_PLAYER_PADINDEX_NO_ACTOR(0);
	bVar1 = IS_BUTTON_PRESSED(iVar0, bParam0, iParam1, bParam2);
	if (bVar1)
	{
		switch (bParam0)
		{
			case 0x0000000E:
			case 0x0000000C:
				if (IS_BUTTON_PRESSED(iVar0, 15, iParam1, bParam2) || IS_BUTTON_PRESSED(iVar0, 13, iParam1, bParam2))
				{
					return 0;
				}
				break;
			
			case 0x0000000F:
			case 0x0000000D:
				if (IS_BUTTON_PRESSED(iVar0, 14, iParam1, bParam2) || IS_BUTTON_PRESSED(iVar0, 12, iParam1, bParam2))
				{
					return 0;
				}
				break;
			}
	}
	return bVar1;
}

void Function_590() //Position: 0x21B6B / 138091
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Rebel04_OnWagon", "Rebel04_OnWagon", false, 2, 1, 0, 1);
		Function_343(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_591() //Position: 0x21BB2 / 138162
{
	switch (iLocal_687)
	{
		case 0x00000006:
			Function_615(&Local_679, 1);
			if (!Function_281(&Local_679))
			{
				(*&Global_34165 + 68)[0] = 0;
			}
			bLocal_678 = CREATE_LAYOUT(Function_53());
			Function_449(9);
			Function_614();
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_04", "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
			if ((!Function_281(&Local_679) && (Local_679.f_24 >= 1 && iLocal_706 != 0)) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/REBEL_04/REBEL_04"))
			{
				bLocal_880 = CREATE_VOLUME_IN_LAYOUT(bLocal_678, "Cutscene01Vol", 2, -2092.0f, 16,44941f, 2604.0f, 0.0f, 0.0f, 0.0f, 25.0f, 50.0f, 25.0f);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_880);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_880);
				CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_880, 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(bLocal_880);
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2291,93f, 21,84f, 4960,02f, 0.0f, 1, true, 1);
				Global_63097 = 1;
				iLocal_687 = 7;
			}
			else
			{
				iLocal_687 = 9;
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_604())
				{
					if (!IS_LAYOUTREF_VALID(Local_645))
					{
						Function_603();
						Function_337();
						Function_579();
					}
					else if (Function_600(StackVal, StackVal, "$/cutscene/REBEL_04/REBEL_04", &uLocal_881, *(&Global_3422[3840] + 52), 141992, 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1))
					{
						iLocal_687 = 8;
					}
				}
			}
			break;
		
		case 0x00000008:
			if (Function_269("$/cutscene/REBEL_04/REBEL_04", &Local_688, &Local_679, &bLocal_686, 72635, 141287, 56588, 52035, 51617, 141238, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_597(&uLocal_1181, 1);
				Function_216(&iLocal_857);
				iLocal_687 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_604())
			{
				if (!IS_LAYOUTREF_VALID(Local_645))
				{
					Function_603();
				}
				else if (Function_319())
				{
					if (!IS_LAYOUTREF_VALID(Local_4))
					{
						Function_315();
					}
					iLocal_687 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_856 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			SET_CRIPPLE_ENABLE(bLocal_707, 0);
			SET_ACTOR_FACTION(bLocal_707, 20);
			TASK_PRIORITY_SET(bLocal_707, true);
			AI_BEHAVIOR_SET_ALLOW(bLocal_707, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_707, 50.0f);
			SET_ACTOR_HEALTH(bLocal_707, GET_ACTOR_MAX_HEALTH(bLocal_707));
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_780);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_4.f_780);
			bLocal_1056 = false;
			bLocal_1068 = false;
			bLocal_1069 = false;
			vLocal_1121 = { StackVal, Function_315(), vLocal_1121 };
			vLocal_1121 = { 0.0f, 0,4f, 0.0f };
			vLocal_1169 = { 0,3f, 1.0f, 0,25f };
			bLocal_1163 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bLocal_678, 17, 1);
			Function_416(&uLocal_1144);
			Function_416(&iLocal_857);
			Function_416(&iLocal_860);
			Function_416(&bLocal_863);
			Function_416(&iLocal_866);
			Function_416(&iLocal_1074);
			Function_416(&iLocal_1077);
			Function_416(&iLocal_1080);
			Function_416(&iLocal_1156);
			CLEAR_DECALS();
			Function_595(&uLocal_882, bLocal_678);
			Function_345(&(Local_927[017]), bLocal_707, "MexGirl", 0, 0x5f5e100, 1);
			Function_157(Global_30693[12]);
			if (iLocal_706 == 2)
			{
				Function_220();
			}
			bLocal_686 = iLocal_706;
			iLocal_687 = 0;
			Function_593(&Local_679, &bLocal_686, &iLocal_687);
			Function_592(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_679);
			if (bLocal_686 != 2 && iLocal_706 == 2)
			{
				bLocal_686 = 101;
			}
			break;
	}
	return;
}

void Function_592(struct<25> Param0) //Position: 0x21F2F / 139055
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			bLocal_686 = false;
			break;
		
		case 0x00000002:
			bLocal_686 = true;
			break;
		
		case 0x00000003:
			bLocal_686 = 2;
			break;
		
		case 0x00000004:
			bLocal_686 = 101;
			break;
	}
}

void Function_593(int iParam0, var uParam1, int iParam2) //Position: 0x21F75 / 139125
{
	if (Function_281(iParam0))
	{
		*uParam1 = Function_543(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_594();
	}
	return;
}

void Function_594() //Position: 0x21FA9 / 139177
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

int Function_595(var uParam0, bool bParam1) //Position: 0x21FFA / 139258
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_596(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_596(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_596(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_596(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_596(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x2269A / 140954
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

void Function_597(var uParam0, bool bParam1) //Position: 0x2275D / 141149
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!IS_OBJECTSET_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(*uParam0))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0);
		if (IS_OBJECT_VALID(bVar1))
		{
			bVar2 = GET_PHYSINST_FROM_OBJECT(bVar1);
			if (IS_PHYSINST_VALID(bVar2))
			{
				SHOW_PHYSINST(bVar2);
			}
		}
		bVar0++;
	}
	if (bParam1)
	{
		DESTROY_OBJECTSET(*uParam0);
	}
	return;
}

int Function_598() //Position: 0x227B6 / 141238
{
	switch (bLocal_686)
	{
		case 0x00000063:
			if (Function_319())
			{
				if (!IS_LAYOUTREF_VALID(Local_4))
				{
					Function_315();
				}
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_599() //Position: 0x227E7 / 141287
{
	return 1;
}

bool Function_600(bool bParam0, var uParam1, vector3 vParam2, var uParam5, bool bParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, var uParam14) //Position: 0x227EE / 141294
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_474(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_475()) * (fParam8 - fParam7)) * 0,5f))) || bParam13)
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
		if ((uParam14 && Global_3380) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
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
				Call_Loc(uParam5);
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
	else if ((!Function_474(StackVal, StackVal, Global_34573, vParam2, (fParam8 + ((IntToFloat(Function_475()) * (fParam8 - fParam7)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam13)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_474(StackVal, StackVal, Global_34573, vParam2, fParam7))
	{
	}
	return 0;
}

int Function_601() //Position: 0x22AA8 / 141992
{
	vector3 vVar0;
	struct<5> Var3;
	struct<5> Var9;
	
	if (Function_602(bLocal_678, &uLocal_1181, &bLocal_765))
	{
		bVar12 = false;
		while (bVar12 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar12, &vVar0, &Var3))
			{
				bVar13 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar12);
				if (Function_207(bVar13))
				{
					if (bVar13 == 830)
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_645 + 88)[22], vVar0, 1, true, 1);
						TASK_STAND_STILL((*&Local_645 + 88)[22], -1.0f, 0, 0);
					}
					if (bVar13 == 833)
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_645 + 88)[12], vVar0, 1, true, 1);
						TASK_STAND_STILL((*&Local_645 + 88)[12], -1.0f, 0, 0);
					}
					if (bVar13 == 834)
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, (*&Local_645 + 88)[02], vVar0, 1, true, 1);
						TASK_STAND_STILL((*&Local_645 + 88)[02], -1.0f, 0, 0);
					}
					if (bVar13 == 573)
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_707, vVar0, 1, true, 1);
						TASK_STAND_STILL(bLocal_707, -1.0f, 0, 0);
					}
					if (bVar13 == 2)
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, Global_34573, vVar0, 1, true, 1);
						TASK_STAND_STILL(Global_34573, -1.0f, 0, 0);
					}
					Function_473(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar12), (vVar6 + 180.0f), (vVar0 + 180.0f));
				}
			}
			bVar12++;
		}
		return 1;
	}
	return 0;
}

bool Function_602(bool bParam0, int iParam1, bool bParam2) //Position: 0x22BD9 / 142297
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	char* cVar7[64];
	bool bVar23;
	bool bVar24;
	
	if (!IS_OBJECTSET_VALID(*iParam1))
	{
		*iParam1 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bParam0, 4294967295, 1);
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_PROPS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_PROP_BY_INDEX_END_ORIENT(bVar0, &vVar1, &vVar4))
			{
				bVar23 = CUTSCENE_MANAGER_GET_CUTSCENE_PROP_NAME(bVar0);
				if (!STRING_CONTAINS_STRING(bVar23, "x_"))
				{
					Function_327(bParam2, CUTSCENE_MANAGER_GET_CUTSCENE_PROP_NAME(bVar0), 0, 0);
					strcpy(&cVar7, "CUTSCENE_PROP: ", 64);
					stradd(&cVar7, bVar23, 64);
				}
			}
			bVar0++;
		}
		return 0;
	}
	if (Function_320(bParam2))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_PROPS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_PROP_BY_INDEX_END_ORIENT(bVar0, &vVar1, &vVar4))
			{
				bVar23 = CUTSCENE_MANAGER_GET_CUTSCENE_PROP_NAME(bVar0);
				if (!STRING_CONTAINS_STRING(bVar23, "x_"))
				{
					bVar24 = CREATE_PROP_IN_LAYOUT(bParam0, Function_53(), bVar23, vVar1, vVar4, 1);
					ADD_OBJECT_TO_OBJECTSET(bVar24, *iParam1);
					HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(bVar24));
				}
			}
			bVar0++;
		}
		return 1;
	}
	return 0;
}

void Function_603() //Position: 0x22CBF / 142527
{
	var uVar0;
	
	Function_318(4, 1);
	uVar0 = uVar0;
	Local_645 = CREATE_LAYOUT("Rebel04Pre_layout");
	Local_645.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_645, "Cutscene01Vol", 2, -2258,333f, 24,41583f, 4922,302f, 0.0f, 43,52164f, 0.0f, 156,9209f, 15,29848f, 57,87912f);
	Local_645.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_645, "nWanderVol", 2, -2293,979f, 21,83827f, 4962,021f, 0.0f, 43,52164f, 0.0f, 23,87516f, 15,29848f, 21,41901f);
	return;
}

bool Function_604() //Position: 0x22D66 / 142694
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_613(0))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_707))
		{
			bLocal_707 = Function_606(8, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!Function_605())
		{
			return 0;
		}
	}
	return 1;
}

bool Function_605() //Position: 0x22DA3 / 142755
{
	Function_329(&Local_645 + 4, 1199, 2, 0);
	Function_329(&Local_645 + 4, 976, 2, 0);
	Function_329(&Local_645 + 4, 535, 2, 0);
	Function_329(&Local_645 + 4, 537, 2, 0);
	Function_329(&Local_645 + 4, 533, 2, 0);
	if (Function_320(&Local_645 + 4))
	{
		return 1;
	}
	return 0;
}

bool Function_606(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x22DFD / 142845
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
		Function_437(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_612(StackVal, uParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_608(StackVal, uParam7);
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
		Function_607(bVar1, 0, 0, 0, 0);
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
		Function_433(bVar1, 0);
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

void Function_607(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x232E7 / 144103
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

bool Function_608(int iParam0, bool bParam1) //Position: 0x2333B / 144187
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_207(iParam0))
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
						Function_609(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_609(bool bParam0, bool bParam1) //Position: 0x233BB / 144315
{
	Function_611(bParam0);
	Function_610(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_610(bool bParam0) //Position: 0x233E1 / 144353
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_611(bool bParam0) //Position: 0x23405 / 144389
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

bool Function_612(int iParam0, bool bParam1) //Position: 0x234D4 / 144596
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

bool Function_613(bool bParam0) //Position: 0x23567 / 144743
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

void Function_614() //Position: 0x23595 / 144789
{
	Function_327(&bLocal_713, "dynamite", 5, 0);
	Function_327(&bLocal_713, "custom/dynamite", 8, 0);
	Function_327(&bLocal_713, "pointing", 5, 0);
	Function_327(&bLocal_713, "custom/pointing", 8, 0);
	Function_327(&bLocal_713, "pickup_dynamite", 5, 0);
	Function_327(&bLocal_713, "custom/pickup_dynamite", 8, 0);
	Function_327(&bLocal_713, "p_gen_wagonExplode01ax", 0, 0);
	Function_327(&bLocal_713, "p_gen_wagonExplode01bx", 0, 0);
	Function_327(&bLocal_713, "p_gen_wagonExplode01cx", 0, 0);
	Function_327(&bLocal_713, "p_gen_wagonExplode01dx", 0, 0);
	Function_327(&bLocal_713, "p_gen_wagonExplode01ex", 0, 0);
	Function_327(&bLocal_713, "p_gen_wagonExplode01fx", 0, 0);
	Function_327(&bLocal_713, "p_gen_wagonExplodeYoke01x", 0, 0);
	Function_327(&bLocal_713, "Rebel04", 10, 0);
	Function_327(&bLocal_713, "nminigames", 10, 0);
	Function_329(&bLocal_713, 242, 3, 0);
	return;
}

void Function_615(int iParam0, bool bParam1) //Position: 0x2375F / 145247
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_622(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_281(iParam0))
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
	if (!Function_281(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_621();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_242();
	Function_272();
	Function_231("");
	Function_620(0);
	Function_619();
	Function_195();
	Function_194();
	ENABLE_JOURNAL_REPLAY(0);
	Function_618();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_455(0, 0x40400000);
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
	Function_617(13);
	Function_617(14);
	Function_617(25);
	Function_617(24);
	Function_617(12);
	Function_617(27);
	Function_617(26);
	Function_617(15);
	Function_616();
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

void Function_616() //Position: 0x23B83 / 146307
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

void Function_617(int iParam0) //Position: 0x23BF7 / 146423
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_618() //Position: 0x23C17 / 146455
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

void Function_619() //Position: 0x23C54 / 146516
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_620(int iParam0) //Position: 0x23C68 / 146536
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_198())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_621() //Position: 0x23C9D / 146589
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_622(int iParam0, int iParam1) //Position: 0x23CA6 / 146598
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
			Function_623(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_623(int iParam0) //Position: 0x23D28 / 146728
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

void Function_624() //Position: 0x23D76 / 146806
{
	return;
}

bool Function_625(int iParam0) //Position: 0x23D7C / 146812
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_626() //Position: 0x23D9A / 146842
{
	if (!DECOR_CHECK_EXIST(bLocal_678, "Rebel04_ShootsRand"))
	{
		if (IS_ACTOR_SHOOTING(Global_34573) && !IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(Global_34573, 0)))
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_707, "Rebel04_ShootsRand", "Rebel04_ShootsRand", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
			DECOR_SET_FLOAT(bLocal_678, "Rebel04_ShootsRand", GET_CURRENT_GAME_TIME());
		}
	}
	else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "Rebel04_ShootsRand")) < 20.0f)
	{
		DECOR_REMOVE(bLocal_678, "Rebel04_ShootsRand");
	}
	if (!DECOR_CHECK_EXIST(bLocal_678, "Rebel04_GunOnAmb"))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(Global_34573, 0)))
		{
			if (GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bLocal_707)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_707, "Rebel04_GunOnAmb", "Rebel04_GunOnAmb", false, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_707, "Rebel04_GunOnLuisaAmbu", "Rebel04_GunOnLuisaAmbu", false, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
			}
			DECOR_SET_FLOAT(bLocal_678, "Rebel04_GunOnAmb", GET_CURRENT_GAME_TIME());
		}
	}
	else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_678, "Rebel04_GunOnAmb")) < 20.0f)
	{
		DECOR_REMOVE(bLocal_678, "Rebel04_GunOnAmb");
	}
	return;
}

bool Function_627(int iParam0) //Position: 0x23F8F / 147343
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
			Function_628(iParam0, 1);
			return 1;
		}
	}
	Function_628(iParam0, 0);
	return 0;
}

void Function_628(int iParam0, bool bParam1) //Position: 0x24017 / 147479
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

bool Function_629(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x2403B / 147515
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
		Function_628(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_647(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_646(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_646(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_633(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_628(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_632(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_631(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_632(&bVar17);
														strcpy(&Var18, "", 64);
														Function_630(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_231(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_631(StackVal, iParam2, bVar17);
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
	Function_628(iParam2, 0);
	return 0;
}

void Function_630(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x243D4 / 148436
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

void Function_631(var uParam0, int iParam1, bool bParam2) //Position: 0x244BF / 148671
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

void Function_632(bool bParam0) //Position: 0x24535 / 148789
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_633(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x24557 / 148823
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
			return Function_644(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_637(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_644(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_634(iParam0, bVar2);
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
						bVar2 = Function_644(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_634(iParam0, bVar2);
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

var Function_634(int iParam0, bool bParam1) //Position: 0x246A1 / 149153
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
				bParam1 = Function_636(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_635(16);
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
				bParam1 = Function_636(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_635(256);
			}
		}
	}
	return bParam1;
}

bool Function_635(int iParam0) //Position: 0x247D4 / 149460
{
	return 2 | iParam0;
}

int Function_636(int iParam0) //Position: 0x247DE / 149470
{
	return 4 | iParam0;
}

int Function_637(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x247E8 / 149480
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
				iParam3 = Function_643(iParam0, iParam1, bParam4);
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
			return Function_635(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_638(iParam0, iParam1, 0, bParam4);
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
			return Function_635(16);
		}
	}
	return 0;
}

int Function_638(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2489A / 149658
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_642(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_641(iVar0, 3, 1, bParam3))
			{
				if (!Function_646(iParam0, 8, 1))
				{
					return Function_640(64, 1024, bParam2);
				}
			}
			return Function_639(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_641(iVar0, 2, 1, bParam3))
			{
				if (!Function_646(iParam0, 32, 1))
				{
					return Function_640(64, 1024, bParam2);
				}
			}
			return Function_639(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_641(iVar0, 1, 1, bParam3))
			{
				if (!Function_646(iParam0, 64, 1))
				{
					return Function_640(64, 1024, bParam2);
				}
			}
			return Function_639(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_641(iVar0, 3, 1, bParam3))
			{
				if (!Function_646(iParam0, 128, 1))
				{
					return Function_640(64, 1024, bParam2);
				}
			}
			return Function_639(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_641(iVar0, 1, 1, bParam3))
			{
				if (!Function_646(iParam0, 1024, 1))
				{
					return Function_640(64, 1024, bParam2);
				}
			}
			return Function_639(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_641(iVar0, 1, 1, bParam3))
			{
				if (!Function_646(iParam0, 1024, 1))
				{
					return Function_640(64, 1024, bParam2);
				}
			}
			return Function_639(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_639(int iParam0, int iParam1, bool bParam2) //Position: 0x24A54 / 150100
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_640(int iParam0, int iParam1, bool bParam2) //Position: 0x24A69 / 150121
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_641(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x24A7E / 150142
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_642(int iParam0) //Position: 0x24A9B / 150171
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

int Function_643(var uParam0, int iParam1, bool bParam2) //Position: 0x24B0A / 150282
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_642(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_641(iVar0, 3, 1, bParam2))
			{
				if (!Function_646(uParam0, 8, 1))
				{
					return Function_636(64);
				}
			}
			return Function_635(64);
			break;
		
		case 0x00000009:
			if (Function_641(iVar0, 3, 1, bParam2))
			{
				if (!Function_646(uParam0, 8, 1))
				{
					return Function_636(64);
				}
			}
			return Function_635(64);
			break;
		
		case 0x0000006E:
			if (Function_641(iVar0, 2, 1, bParam2))
			{
				if (!Function_646(uParam0, 16, 1))
				{
					return Function_636(64);
				}
			}
			return Function_635(64);
			break;
		
		case 0x0000005B:
			if (Function_641(iVar0, 2, 1, bParam2))
			{
				if (!Function_646(uParam0, 32, 1))
				{
					return Function_636(64);
				}
			}
			return Function_635(64);
			break;
		
		case 0x00000031:
			if (Function_641(iVar0, 1, 1, bParam2))
			{
				if (!Function_646(uParam0, 64, 1))
				{
					return Function_636(64);
				}
			}
			return Function_635(64);
			break;
		
		case 0x00000007:
			if (Function_641(iVar0, 3, 1, bParam2))
			{
				if (!Function_646(uParam0, 128, 1))
				{
					return Function_636(64);
				}
			}
			return Function_635(64);
			break;
		
		case 0x00000008:
			if (Function_641(iVar0, 2, 1, bParam2))
			{
				if (!Function_646(uParam0, 256, 1))
				{
					return Function_636(64);
				}
			}
			return Function_635(64);
			break;
		
		case 0x00000014:
			if (Function_641(iVar0, 1, 1, bParam2))
			{
				if (!Function_646(uParam0, 512, 1))
				{
					return Function_636(64);
				}
			}
			return Function_635(64);
			break;
		
		case 0x00000018:
			if (Function_641(iVar0, 1, 1, bParam2))
			{
				if (!Function_646(uParam0, 512, 1))
				{
					return Function_636(64);
				}
			}
			return Function_635(64);
			break;
		
		case 0x00000057:
			if (Function_641(iVar0, 1, 1, bParam2))
			{
				if (!Function_646(uParam0, 1024, 1))
				{
					return Function_636(64);
				}
			}
			return Function_635(64);
			break;
		
		case 0x00000058:
			if (Function_641(iVar0, 1, 1, bParam2))
			{
				if (!Function_646(uParam0, 1024, 1))
				{
					return Function_636(64);
				}
			}
			return Function_635(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_644(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x24D25 / 150821
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
						return Function_643(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_646(iParam0, 2, 1))
					{
						return Function_636(8);
					}
					return Function_635(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_646(iParam0, 4, 1))
					{
						return Function_636(16);
					}
					return Function_635(16);
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
							return Function_638(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_646(iParam0, 2, 1))
						{
							return Function_636(128);
						}
						return Function_635(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_646(iParam0, 4, 1))
						{
							return Function_636(256);
						}
						return Function_635(256);
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
						return Function_638(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_646(iParam0, 2, 1))
					{
						return Function_636(8);
					}
					return Function_635(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_646(iParam0, 4, 1))
					{
						return Function_636(16);
					}
					return Function_635(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_645(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_646(iParam0, 2, 1))
					{
						return Function_636(8);
					}
					return Function_635(8);
				}
				if (!Function_646(iParam0, 4, 1))
				{
					return Function_636(16);
				}
				return Function_635(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_638(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_460(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_635(128);
							}
							if (!Function_646(iParam0, 2, 1))
							{
								return Function_636(8);
							}
							return Function_635(8);
						}
						if (iParam4 == 2)
						{
							if (Function_460(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_635(256);
							}
							if (!Function_646(iParam0, 4, 1))
							{
								return Function_636(16);
							}
							return Function_635(16);
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

int Function_645(int iParam0, var uParam1, bool bParam2) //Position: 0x24FE4 / 151524
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_642(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_641(iVar0, 2, 1, bParam2))
			{
				if (!Function_646(iParam0, 16, 1))
				{
					return Function_636(64);
				}
			}
			return Function_635(64);
			break;
		
		case 0x0000005B:
			if (Function_641(iVar0, 2, 1, bParam2))
			{
				if (!Function_646(iParam0, 32, 1))
				{
					return Function_636(64);
				}
			}
			return Function_635(64);
			break;
		
		case 0x00000057:
			if (Function_641(iVar0, 1, 1, bParam2))
			{
				if (!Function_646(iParam0, 1024, 1))
				{
					return Function_636(64);
				}
			}
			return Function_635(64);
			break;
		
		case 0x00000058:
			if (Function_641(iVar0, 1, 1, bParam2))
			{
				if (!Function_646(iParam0, 1024, 1))
				{
					return Function_636(64);
				}
			}
			return Function_635(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_646(int iParam0, bool bParam1, bool bParam2) //Position: 0x250F8 / 151800
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

int Function_647(bool bParam0) //Position: 0x25120 / 151840
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

void Function_648(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x25151 / 151889
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

