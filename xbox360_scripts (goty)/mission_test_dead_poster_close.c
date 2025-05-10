//Decompiled with MagicRDR v1.0
//Function Count : 68
//Statics Count : 107
//Natives Count : 108
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	struct<65> Local_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<11> Local_81 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_92 = false;
	int iLocal_93 = 0;
	bool bLocal_94 = false;
	bool bLocal_95 = false;
	struct<4> Local_96 = { 0, 0, 0, 0 } ;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = iLocal_0;
	*(&iScriptParam_0 + 4) = { StackVal, StackVal, StackVal, *(&iScriptParam_0 + 4) };
	Function_67();
	while (Function_16())
	{
		WAIT(100);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x2A / 42
{
	if (Function_14(uLocal_56))
	{
		Function_6(uLocal_56);
	}
	if (IS_OBJECTSET_VALID(bLocal_94))
	{
		DESTROY_OBJECTSET(bLocal_94);
	}
	if (IS_OBJECT_VALID(bLocal_95))
	{
		DESTROY_ITERATOR(bLocal_95);
	}
	Function_2("Stopped debug launch for dead poster camp", 6.0f, 0, 2, 1, 0);
	Global_3399 = 0;
	if (IS_SCRIPT_VALID(bLocal_55))
	{
		TERMINATE_SCRIPT(bLocal_55);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x9F / 159
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_3(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_3(int iParam0) //Position: 0x116 / 278
{
	char* cVar0[16];
	
	if (!Function_4())
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

bool Function_4() //Position: 0x155 / 341
{
	if (Function_5(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_5(var uParam0, int iParam1) //Position: 0x170 / 368
{
	return (uParam0 && iParam1) == 0;
}

void Function_6(int iParam0) //Position: 0x17D / 381
{
	var uVar0;
	
	if (!Function_14(iParam0))
	{
		Function_12();
		return;
	}
	uVar0 = Function_11(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_7("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_7(char* cParam0, bool bParam1) //Position: 0x1D0 / 464
{
	struct<4> Var0;
	
	if (!Function_14(bParam1))
	{
		return;
	}
	switch (Function_11(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_8(Function_9(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_11(bParam1), Function_9(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_11(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_11(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_11(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_11(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_11(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_8(int iParam0) //Position: 0x2F4 / 756
{
	char* cVar0[16];
	
	if (!Function_4())
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

var Function_9(int iParam0) //Position: 0x32E / 814
{
	if (!Function_10(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 12) && 255);
}

bool Function_10(int iParam0) //Position: 0x34E / 846
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_11(bool bParam0) //Position: 0x365 / 869
{
	if (!Function_10(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_12() //Position: 0x380 / 896
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
			Function_13(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_13(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x5C7 / 1479
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

bool Function_14(int iParam0) //Position: 0x5F0 / 1520
{
	if (!Function_10(iParam0))
	{
		return 0;
	}
	if (!Function_15(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_15(int iParam0) //Position: 0x614 / 1556
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_16() //Position: 0x629 / 1577
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	vector3 vVar7;
	vector3 vVar10;
	bool bVar13;
	
	if (!STREAMING_IS_WORLD_LOADED())
	{
		return 1;
	}
	if (IS_PLAYER_TELEPORTING())
	{
		return 1;
	}
	if (!iLocal_93)
	{
		Function_66(&uLocal_57);
		PRINT_BIG("Wait for it...loading wilderness campfire locations", 5f, 0, 2, 0);
		iLocal_93 = 1;
	}
	if (!Function_62(&uLocal_57, 4.0f))
	{
		return 1;
	}
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_1();
		return 0;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_1();
		return 0;
	}
	iLocal_0 = 0;
	bLocal_1 = false;
	Local_4.f_36 = 1;
	Local_4.f_64 = 1;
	switch (iLocal_2)
	{
		case 0x00000000:
			SET_DEBUG_DRAW(1);
			Function_66(&uLocal_60);
			Function_59(&uLocal_63, 9.0f);
			Function_58(&Local_66, 1, 1.0f, 1, 752);
			Function_57(&Local_66, 30.0f);
			Function_56(&Local_66, 1.0f);
			Function_55(StackVal, StackVal, &Local_81, 0, Global_34574, 0.0f, 0.1f, 500.0f, 3.0f, 5.0f, 0);
			iLocal_2 = 1;
			Function_2("Trying to run Dead Poster Camp", 10.0f, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (StackVal && Function_54(StackVal, iVar0 > 20, vVar1))
			{
				Function_53();
				vVar7 = { StackVal, StackVal, Function_53() };
				Function_53();
				vVar1 = { StackVal, StackVal, Function_53() };
				Function_55(StackVal, StackVal, &Local_81, 0, Global_34574, 0.0f, 0.1f, 30.0f, 3.0f, 5.0f, 0);
				Function_46(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_81, Local_66);
				vVar1 = { StackVal, StackVal, Function_46(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_81, Local_66) };
				bVar13 = Function_39();
				if (IS_OBJECT_VALID(bVar13))
				{
					GET_OBJECT_POSITION(bVar13, &vVar7);
				}
				if (Function_54(StackVal, StackVal, vVar7))
				{
					if (Function_62(&uLocal_63, 8.0f))
					{
						if (Function_54(StackVal, StackVal, vVar7))
						{
							PRINT_BIG("No campfires in the area", 6.0f, 0, 2, 0);
						}
						else
						{
							PRINT_BIG("Look for a campfire in a decently flat and open space", 5.0f, 0, 2, 0);
						}
						Function_66(&uLocal_63);
						Function_2("Trying to run the closest dead poster camp", 10.0f, 0, 2, 1, 0);
					}
					if (Function_62(&uLocal_60, 120.0f))
					{
						PRINT_BIG("Giving up on dead poster camp close. Try launching somewhere else", 8.0f, 0, 2, 0);
						Function_59(&uLocal_63, 200.0f);
						Function_1();
						return 0;
					}
				}
				iVar0++;
			}
			if (!Function_54(StackVal, StackVal, vVar7))
			{
				Local_4.f_44 = Global_29005;
				Local_4.f_36 = 1;
				*(&Local_4 + 8) = { StackVal, StackVal, vVar7 };
				Local_4.f_52 = 50.0f;
				Local_4.f_48 = bVar13;
				PRINT_BIG("Dead Poster Camp is Ready. Finding A Teleport Location.", 5f, 0, 2, 0);
				Function_38(StackVal, StackVal, Global_34573, vVar7, 0.0f, 1, 1, 1);
				Function_30(1, 0, 1);
				WAIT(500);
				if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
				{
					SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(GET_MOUNT(Global_34573)), 50.0f, false, 1092616192);
				}
				else
				{
					SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(Global_34573), 50.0f, false, 1092616192);
				}
				Function_55(StackVal, StackVal, &Local_81, 0, vVar7, 0.0f, 10.0f, 15.0f, 0, 0x40a00000, 0);
				Function_46(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_81, Local_66);
				vVar1 = { StackVal, StackVal, Function_46(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_81, Local_66) };
				while (Function_54(StackVal, StackVal, vVar1))
				{
					WAIT(1000);
					Function_46(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_81, Local_66);
					vVar1 = { StackVal, StackVal, Function_46(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_81, Local_66) };
				}
				vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar7, StackVal) };
				VNORMALIZE(&vVar10);
				Function_38(StackVal, StackVal, Global_34573, vVar1, UNK_0x9C40E671(&vVar10), 1, 1, 1);
				Function_30(1, 0, 1);
				PRINTSTRING("cfire telePos");
				PRINTVECTOR(vVar1);
				PRINTNL();
				PRINTSTRING("cfire campfirePos");
				PRINTVECTOR(vVar7);
				PRINTNL();
				if (!IS_ACTOR_RIDING(Global_34573))
				{
					GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)), 0.0f, 0.0f, -2.0f, &vVar1);
					FIND_GROUND_INTERSECTION(&vVar1, 50.0f, &vVar1, &uVar4);
					strcpy(&Local_96, "bhHorse", 16);
					Function_28(&Local_96);
					bLocal_92 = CREATE_ACTOR_IN_LAYOUT(GET_AMBIENT_LAYOUT(), &Local_96, Function_17(64, 0, 0, 4294967295, 0), vVar1, 0.0f, 148.253f, 0.0f);
					if (!IS_ACTOR_VALID(bLocal_92))
					{
					}
				}
				bLocal_55 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/Roaming/event_dead_poster", &Local_4, 51, 0);
				iLocal_2 = 101;
			}
			break;
		
		case 0x00000065:
			if (!IS_SCRIPT_VALID(bLocal_55))
			{
				return 0;
				bLocal_1 = true;
			}
			break;
		
		default:
			return 0;
			break;
	}
	if (bLocal_1)
	{
		Function_1();
		return 0;
	}
	return 1;
}

var Function_17(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB42 / 2882
{
	return Function_18(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_18(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0xB5B / 2907
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_21(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_21(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_21(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_21(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_21(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_21(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_21(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_21(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_21(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_21(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_21(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_21(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_21(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_21(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_19(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_19(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0xDB0 / 3504
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_20(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_20(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_20(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_20(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_20(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_20(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_20(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_20(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_20(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_20(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_20(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_20(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_20(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_20(Global_30750[13], bVar0);
	}
	return Function_21(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_20(bool bParam0, bool bParam1) //Position: 0xF01 / 3841
{
	bool bVar0;
	
	if (!IS_POPSET_VALID(bParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(bParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(bParam1, GET_ACTORENUM_IN_POPULATION(bParam0, bVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(bParam0, bVar0));
		bVar0++;
	}
	return;
}

var Function_21(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0xFBF / 4031
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
		Function_27();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_26(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_25(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_25(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_24(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_26(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_24(bVar0))
				{
					Function_23();
				}
				Function_22(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_26(bVar1))
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

void Function_22(int iParam0) //Position: 0x12B2 / 4786
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

void Function_23() //Position: 0x1366 / 4966
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

bool Function_24(bool bParam0) //Position: 0x13A0 / 5024
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

void Function_25(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x13CD / 5069
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

bool Function_26(bool bParam0) //Position: 0x151E / 5406
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_27() //Position: 0x1535 / 5429
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_23();
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
	Function_23();
	return;
}

struct<32> Function_28(bool bParam0) //Position: 0x1580 / 5504
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_29(char* cParam0, char* cParam1, char* cParam2) //Position: 0x15EA / 5610
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(int iParam0, bool bParam1, int iParam2) //Position: 0x1609 / 5641
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
		if (Function_37(Global_29006))
		{
			Function_36(&(Global_29008[Global_29006]), 131072);
			Function_35(&(Global_29008[Global_29006]), 2097152);
			Function_33(Global_29006);
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
				if (Function_32(&(Global_29008[iVar0]), 4) || Function_32(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_35(&(Global_29008[iVar0]), 2097155);
					Function_36(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_31())
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

bool Function_31() //Position: 0x1714 / 5908
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_32(var uParam0, int iParam1) //Position: 0x171D / 5917
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_33(int iParam0) //Position: 0x1739 / 5945
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_34())
			{
				return;
			}
		}
		if (!Function_32(&(Global_29008[iParam0]), 2048))
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

bool Function_34() //Position: 0x17B8 / 6072
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_32(&(Global_29008[iVar0]), 4) || Function_32(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_35(var uParam0, int iParam1) //Position: 0x1821 / 6177
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_36(var uParam0, int iParam1) //Position: 0x1838 / 6200
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_37(bool bParam0) //Position: 0x1847 / 6215
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_38(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x185D / 6237
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, iParam6, iParam7);
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
				TELEPORT_ACTOR_WITH_HEADING(bVar0, vParam1, bParam4, iParam5, iParam6, iParam7);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(bParam0, vParam1, bParam4, iParam5, iParam6, iParam7);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

bool Function_39() //Position: 0x1916 / 6422
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = false;
	if (!IS_ITERATOR_VALID(bLocal_95))
	{
		bLocal_95 = CREATE_OBJECT_ITERATOR(GET_AMBIENT_LAYOUT());
	}
	Function_44(&bLocal_95);
	ITERATE_IN_LAYOUT(bLocal_95, Global_30616);
	ITERATE_IN_SPHERE(bLocal_95, Global_34574, 500.0f);
	ITERATE_ON_PARTIAL_NAME(bLocal_95, "campfir");
	Function_43(bLocal_94);
	bVar4 = START_OBJECT_ITERATOR(bLocal_95);
	while (IS_OBJECT_VALID(bVar4))
	{
		Function_42(bVar4);
		vVar0 = { StackVal, StackVal, Function_42(bVar4) };
		if (Function_41(StackVal, StackVal, vVar0))
		{
			bVar3++;
			ADD_OBJECT_TO_OBJECTSET(bVar4, bLocal_94);
			PRINTSTRING("ADDED CAMPFIRE OBJECT: ");
			PRINTSTRING(GET_OBJECT_NAME(bVar4));
			PRINTNL();
		}
		bVar4 = OBJECT_ITERATOR_NEXT(bLocal_95);
	}
	PRINTSTRING("Number of campfires added: ");
	PRINTINT(bVar3);
	PRINTNL();
	PRINTSTRING("Number of campfires in object set: ");
	PRINTINT(GET_OBJECTSET_SIZE(bLocal_94));
	PRINTNL();
	return Function_40(StackVal, StackVal, &bLocal_94, Global_34574, 0, 0x42960000);
}

bool Function_40(var uParam0, vector3 vParam1, float fParam4, float fParam5) //Position: 0x1A30 / 6704
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	
	bVar3 = 999999.0f;
	if (!IS_OBJECTSET_VALID(*uParam0))
	{
		return "";
	}
	if (GET_OBJECTSET_SIZE(*uParam0) < 0)
	{
		return "";
	}
	bVar7 = false;
	while (bVar7 < (GET_OBJECTSET_SIZE(*uParam0) - 1))
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, *uParam0);
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

bool Function_41(vector3 vParam0) //Position: 0x1AB3 / 6835
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6) != 7)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

vector3 Function_42(bool bParam0) //Position: 0x1B30 / 6960
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

void Function_43(bool bParam0) //Position: 0x1B57 / 6999
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
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

int Function_44(int iParam0) //Position: 0x1B9C / 7068
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_45());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_45());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

var Function_45() //Position: 0x1BCD / 7117
{
	var uVar0;
	
	return uVar0;
}

vector3 Function_46(struct<37> Param0) //Position: 0x1BD5 / 7125
{
	vector3 vVar0;
	
	AMBIENT_RESET_FILTER(0);
	if (IS_OBJECT_VALID(Param0))
	{
		GET_OBJECT_POSITION(Param0, &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_ACTOR(GET_ACTOR_FROM_OBJECT(Param0));
	}
	else if (!Function_54(StackVal, StackVal, *(&Param0 + 4)))
	{
		if (Global_30842[34])
		{
			PRINTVECTOR(*(&Param0 + 4));
			PRINTNL();
		}
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER(*(&Param0 + 4));
	}
	else
	{
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
		if (Global_30842[34])
		{
			PRINTVECTOR(vVar0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_PLAYER();
	}
	Function_52(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_50();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_49(Param0.f_20);
	Function_48(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_47(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	if (Param0.f_32)
	{
		AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	}
	if (Param11.f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, Param11.f_28);
	}
	if (Param11.f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER(Param11.f_36, Param11.f_40);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	Function_53();
	return StackVal, StackVal, Function_53();
}

void Function_47(struct<33> Param0) //Position: 0x1D07 / 7431
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_30842[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTSTRING("n, Radius ");
				PRINTFLOAT(Param0.f_20);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(StackVal, Param0.f_20, 0);
		}
	}
	if (!Param0.f_12 != 4294967295 && !Param0.f_12 != 0)
	{
		AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(Param0.f_12, Param0.f_24, 1);
	}
	if (!Param0.f_16 != 4294967295 && !Param0.f_16 != 0)
	{
		if (Global_30842[34])
		{
			PRINTSTRING("Material NoMatch: ");
			PRINTINT(Param0.f_16);
			PRINTSTRING("n, Radius ");
			PRINTFLOAT(Param0.f_32);
			PRINTNL();
		}
		AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(Param0.f_16, Param0.f_32, 0);
	}
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1.43493E-42f, 1);
}

void Function_48(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x1E33 / 7731
{
	if (Param0 == 0)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 1)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 2)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
	else if (Param0 == 3)
	{
		AMBIENT_SET_SLOPE_FILTER(StackVal, 0, Param0);
	}
}

void Function_49(bool bParam0) //Position: 0x1E84 / 7812
{
	switch (bParam0)
	{
		case 0x00000004:
		case 0x00000001:
			AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
			break;
		
		case 0x00000007:
		case 0x00000002:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 0);
			break;
		
		case 0x00000006:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 0, 0);
			break;
		
		case 0x00000005:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 1, 0);
			break;
		
		case 0x00000008:
		case 0x00000003:
			AMBIENT_SET_QUADRANT_FILTER(0, 0, 0, 1);
			AMBIENT_SET_DISTANCE_FILTER(5.0f, 25.0f);
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000009:
			AMBIENT_SET_QUADRANT_FILTER(0, 1, 1, 1);
			break;
		
		default:
			LOG_ERROR("No point type filter set!");
			break;
	}
	return;
}

void Function_50() //Position: 0x1F37 / 7991
{
	float fVar0;
	bool bVar1;
	
	Function_51(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_51(var uParam0, int iParam1) //Position: 0x1F4B / 8011
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*uParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*uParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*uParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

void Function_52(bool bParam0) //Position: 0x1FD4 / 8148
{
	if (bParam0 < 0.1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * bParam0), bParam0);
	}
	else if (Global_3386)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

vector3 Function_53() //Position: 0x2018 / 8216
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_54(vector3 vParam0) //Position: 0x2021 / 8225
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_55(int iParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, int iParam10) //Position: 0x2039 / 8249
{
	iParam0->f_20 = iParam1;
	*(iParam0 + 4) = { StackVal, StackVal, vParam2 };
	iParam0->f_16 = fParam5;
	iParam0->f_24 = fParam6;
	iParam0->f_28 = fParam7;
	iParam0->f_32 = iParam10;
	iParam0->f_36 = fParam8;
	iParam0->f_40 = fParam9;
}

void Function_56(var uParam0, int iParam1) //Position: 0x2075 / 8309
{
	uParam0->f_28 = iParam1;
	return;
}

void Function_57(var uParam0, int iParam1) //Position: 0x2081 / 8321
{
	uParam0->f_20 = iParam1;
	return;
}

void Function_58(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x208D / 8333
{
	*uParam0 = uParam1;
	uParam0->f_4 = uParam2;
	uParam0->f_8 = uParam3;
	uParam0->f_16 = uParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

void Function_59(var uParam0, float fParam1) //Position: 0x20B6 / 8374
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_61(uParam0, 1);
	Function_60(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_60(var uParam0, int iParam1) //Position: 0x20D7 / 8407
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_61(var uParam0, int iParam1) //Position: 0x20EA / 8426
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_62(var uParam0, float fParam1) //Position: 0x20F9 / 8441
{
	if (Function_65(uParam0))
	{
		if (Function_63(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_63(int iParam0) //Position: 0x2115 / 8469
{
	if (Function_65(iParam0))
	{
		if (Function_64(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_64(int iParam0) //Position: 0x21DD / 8669
{
	return Function_5(*iParam0, 2);
}

bool Function_65(int iParam0) //Position: 0x21EA / 8682
{
	return Function_5(*iParam0, 1);
}

void Function_66(var uParam0) //Position: 0x21F7 / 8695
{
	Function_59(uParam0, 0.0f);
	return;
}

void Function_67() //Position: 0x2203 / 8707
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	memcpy(&Local_96, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28("nnearbyset"), 4);
	bLocal_94 = CREATE_OBJECTSET_IN_LAYOUT(&Local_96, GET_AMBIENT_LAYOUT(), 4294967295, 0);
	if (!iLocal_3 != 0)
	{
	}
	while (!STREAMING_IS_WORLD_LOADED_PRIORITY(4) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (HUD_IS_FADED())
	{
		HUD_FADE_IN(1.0f, 1065353216);
	}
	Global_3399 = 1;
	iLocal_2 = 0;
	return;
}

