//Decompiled with MagicRDR v1.0
//Function Count : 66
//Statics Count : 107
//Natives Count : 107
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
	Function_65();
	while (Function_13())
	{
		WAIT(100);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x2A / 42
{
	if (Function_11(uLocal_56))
	{
		Function_3(uLocal_56);
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

void Function_3(int iParam0) //Position: 0xE6 / 230
{
	var uVar0;
	
	if (!Function_11(iParam0))
	{
		Function_9();
		return;
	}
	uVar0 = Function_8(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_4("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_4(char* cParam0, bool bParam1) //Position: 0x139 / 313
{
	struct<4> Var0;
	
	if (!Function_11(bParam1))
	{
		return;
	}
	switch (Function_8(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_5(Function_6(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_8(bParam1), Function_6(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_8(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_8(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_8(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_8(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_8(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_5(int iParam0) //Position: 0x25D / 605
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_6(int iParam0) //Position: 0x282 / 642
{
	if (!Function_7(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[iParam011], 12) & 255;
}

bool Function_7(int iParam0) //Position: 0x2A2 / 674
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_8(bool bParam0) //Position: 0x2B9 / 697
{
	if (!Function_7(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_9() //Position: 0x2D4 / 724
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
			Function_10(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_10(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x51B / 1307
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_11(int iParam0) //Position: 0x544 / 1348
{
	if (!Function_7(iParam0))
	{
		return 0;
	}
	if (!Function_12(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_12(int iParam0) //Position: 0x568 / 1384
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_13() //Position: 0x57D / 1405
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
		Function_64(&uLocal_57);
		PRINT_BIG("Wait for it...loading wilderness campfire locations", 1084227584, 0, 2, 0);
		iLocal_93 = 1;
	}
	if (!Function_59(&uLocal_57, 4.0f))
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
			Function_64(&uLocal_60);
			Function_56(&uLocal_63, 9.0f);
			Function_55(&Local_66, 1, 1.0f, 1, 752);
			Function_54(&Local_66, 30.0f);
			Function_53(&Local_66, 1.0f);
			Function_52(StackVal, StackVal, &Local_81, 0, Global_34574, 0.0f, 0,1f, 500.0f, 3.0f, 5.0f, 0);
			iLocal_2 = 1;
			Function_2("Trying to run Dead Poster Camp", 10.0f, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			iVar0 = 0;
			while (StackVal && Function_51(StackVal, iVar0 > 20, vVar1))
			{
				Function_50();
				vVar7 = { StackVal, StackVal, Function_50() };
				Function_50();
				vVar1 = { StackVal, StackVal, Function_50() };
				Function_52(StackVal, StackVal, &Local_81, 0, Global_34574, 0.0f, 0,1f, 30.0f, 3.0f, 5.0f, 0);
				Function_43(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_81, Local_66);
				vVar1 = { StackVal, StackVal, Function_43(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_81, Local_66) };
				bVar13 = Function_36();
				if (IS_OBJECT_VALID(bVar13))
				{
					GET_OBJECT_POSITION(bVar13, &vVar7);
				}
				if (Function_51(StackVal, StackVal, vVar7))
				{
					if (Function_59(&uLocal_63, 8.0f))
					{
						if (Function_51(StackVal, StackVal, vVar7))
						{
							PRINT_BIG("No campfires in the area", 6.0f, 0, 2, 0);
						}
						else
						{
							PRINT_BIG("Look for a campfire in a decently flat and open space", 5.0f, 0, 2, 0);
						}
						Function_64(&uLocal_63);
						Function_2("Trying to run the closest dead poster camp", 10.0f, 0, 2, 1, 0);
					}
					if (Function_59(&uLocal_60, 120.0f))
					{
						PRINT_BIG("Giving up on dead poster camp close. Try launching somewhere else", 8.0f, 0, 2, 0);
						Function_56(&uLocal_63, 200.0f);
						Function_1();
						return 0;
					}
				}
				iVar0++;
			}
			if (!Function_51(StackVal, StackVal, vVar7))
			{
				Local_4.f_44 = Global_29005;
				Local_4.f_36 = 1;
				*(&Local_4 + 8) = { StackVal, StackVal, vVar7 };
				Local_4.f_52 = 50.0f;
				Local_4.f_48 = bVar13;
				PRINT_BIG("Dead Poster Camp is Ready. Finding A Teleport Location.", 1084227584, 0, 2, 0);
				Function_35(StackVal, StackVal, Global_34573, vVar7, 0.0f, 1, 1, 1);
				Function_27(1, 0, 1);
				WAIT(500);
				if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
				{
					SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(GET_MOUNT(Global_34573)), 50.0f, false, 1092616192);
				}
				else
				{
					SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(Global_34573), 50.0f, false, 1092616192);
				}
				Function_52(StackVal, StackVal, &Local_81, 0, vVar7, 0.0f, 10.0f, 15.0f, 0, 0x40a00000, 0);
				Function_43(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_81, Local_66);
				vVar1 = { StackVal, StackVal, Function_43(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_81, Local_66) };
				while (Function_51(StackVal, StackVal, vVar1))
				{
					WAIT(1000);
					Function_43(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_81, Local_66);
					vVar1 = { StackVal, StackVal, Function_43(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_81, Local_66) };
				}
				vVar10 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar1, vVar7, StackVal) };
				VNORMALIZE(&vVar10);
				Function_35(StackVal, StackVal, Global_34573, vVar1, UNK_0x9C40E671(&vVar10), 1, 1, 1);
				Function_27(1, 0, 1);
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
					Function_25(&Local_96);
					bLocal_92 = CREATE_ACTOR_IN_LAYOUT(GET_AMBIENT_LAYOUT(), &Local_96, Function_14(64, 0, 0, 4294967295, 0), vVar1, 0.0f, 148,253f, 0.0f);
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

var Function_14(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA96 / 2710
{
	return Function_15(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_15(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0xAAF / 2735
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_18(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_18(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_18(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_18(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_18(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_18(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_18(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_18(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_18(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_18(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_18(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_18(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_18(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_18(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_16(StackVal, StackVal, iParam0, bParam1, bParam2, fParam5, vParam6);
}

var Function_16(var uParam0, bool bParam1, bool bParam2, float fParam3, vector3 vParam4) //Position: 0xD04 / 3332
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_17(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_17(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_17(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_17(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_17(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_17(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_17(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_17(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_17(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_17(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_17(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_17(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_17(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_17(Global_30750[13], bVar0);
	}
	return Function_18(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, fParam3, vParam4);
}

void Function_17(bool bParam0, bool bParam1) //Position: 0xE55 / 3669
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

var Function_18(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0xF13 / 3859
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
		Function_24();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_23(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_22(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_22(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_21(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_23(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_21(bVar0))
				{
					Function_20();
				}
				Function_19(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_23(bVar1))
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

void Function_19(int iParam0) //Position: 0x1206 / 4614
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

void Function_20() //Position: 0x12BA / 4794
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

bool Function_21(bool bParam0) //Position: 0x12F4 / 4852
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

void Function_22(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1321 / 4897
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

bool Function_23(bool bParam0) //Position: 0x1472 / 5234
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_24() //Position: 0x1489 / 5257
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_20();
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
	Function_20();
	return;
}

struct<32> Function_25(bool bParam0) //Position: 0x14D4 / 5332
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_26("0", &cVar8, ""), 4);
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

struct<32> Function_26(char* cParam0, char* cParam1, char* cParam2) //Position: 0x153E / 5438
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_27(int iParam0, bool bParam1, int iParam2) //Position: 0x155D / 5469
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
		if (Function_34(Global_29006))
		{
			Function_33(&(Global_29008[Global_29006]), 131072);
			Function_32(&(Global_29008[Global_29006]), 2097152);
			Function_30(Global_29006);
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
				if (Function_29(&(Global_29008[iVar0]), 4) || Function_29(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_32(&(Global_29008[iVar0]), 2097155);
					Function_33(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_28())
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

bool Function_28() //Position: 0x1668 / 5736
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_29(var uParam0, int iParam1) //Position: 0x1671 / 5745
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_30(int iParam0) //Position: 0x168D / 5773
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_31())
			{
				return;
			}
		}
		if (!Function_29(&(Global_29008[iParam0]), 2048))
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

bool Function_31() //Position: 0x170C / 5900
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && StackVal == 2 == 1) == 6)
		{
			if (Function_29(&(Global_29008[iVar0]), 4) || Function_29(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_32(var uParam0, int iParam1) //Position: 0x1769 / 5993
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_33(var uParam0, int iParam1) //Position: 0x1780 / 6016
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_34(bool bParam0) //Position: 0x178F / 6031
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_35(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x17A5 / 6053
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		bVar0 = GET_MOUNT(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
		}
	}
}

bool Function_36() //Position: 0x185E / 6238
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = false;
	if (!IS_ITERATOR_VALID(bLocal_95))
	{
		bLocal_95 = CREATE_OBJECT_ITERATOR(GET_AMBIENT_LAYOUT());
	}
	Function_41(&bLocal_95);
	ITERATE_IN_LAYOUT(bLocal_95, Global_30616);
	ITERATE_IN_SPHERE(bLocal_95, Global_34574, 500.0f);
	ITERATE_ON_PARTIAL_NAME(bLocal_95, "campfir");
	Function_40(bLocal_94);
	bVar4 = START_OBJECT_ITERATOR(bLocal_95);
	while (IS_OBJECT_VALID(bVar4))
	{
		Function_39(bVar4);
		vVar0 = { StackVal, StackVal, Function_39(bVar4) };
		if (Function_38(StackVal, StackVal, vVar0))
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
	return Function_37(StackVal, StackVal, &bLocal_94, Global_34574, 0, 0x42960000);
}

bool Function_37(var uParam0, vector3 vParam1, float fParam4, float fParam5) //Position: 0x1978 / 6520
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

bool Function_38(vector3 vParam0) //Position: 0x19FB / 6651
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || (StackVal || (StackVal || StackVal != 3 != 4) != 5) != 6)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

vector3 Function_39(bool bParam0) //Position: 0x1A6C / 6764
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

void Function_40(bool bParam0) //Position: 0x1A93 / 6803
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

int Function_41(int iParam0) //Position: 0x1AD8 / 6872
{
	if (IS_ITERATOR_VALID(*iParam0))
	{
		ITERATE_EVERYWHERE(*iParam0);
		ITERATE_ON_PARTIAL_NAME(*iParam0, Function_42());
		ITERATE_ON_PARTIAL_MODEL_NAME(*iParam0, Function_42());
		ITERATE_ON_OBJECT_TYPE(*iParam0, 4294967295);
		return 1;
	}
	return 0;
}

var Function_42() //Position: 0x1B09 / 6921
{
	var uVar0;
	
	return uVar0;
}

vector3 Function_43(struct<37> Param0) //Position: 0x1B11 / 6929
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
	else if (!Function_51(StackVal, StackVal, *(&Param0 + 4)))
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
	Function_49(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_47();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_46(Param0.f_20);
	Function_45(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_44(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
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
	Function_50();
	return StackVal, StackVal, Function_50();
}

void Function_44(struct<33> Param0) //Position: 0x1C43 / 7235
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
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(StackVal, 1,43493E-42f, 1);
}

void Function_45(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x1D6F / 7535
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

void Function_46(bool bParam0) //Position: 0x1DC0 / 7616
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

void Function_47() //Position: 0x1E73 / 7795
{
	float fVar0;
	bool bVar1;
	
	Function_48(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_48(var uParam0, int iParam1) //Position: 0x1E87 / 7815
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

void Function_49(bool bParam0) //Position: 0x1F10 / 7952
{
	if (bParam0 < 0,1f)
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

vector3 Function_50() //Position: 0x1F54 / 8020
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_51(vector3 vParam0) //Position: 0x1F5D / 8029
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_52(int iParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, int iParam10) //Position: 0x1F75 / 8053
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

void Function_53(var uParam0, int iParam1) //Position: 0x1FB1 / 8113
{
	uParam0->f_28 = iParam1;
	return;
}

void Function_54(var uParam0, int iParam1) //Position: 0x1FBD / 8125
{
	uParam0->f_20 = iParam1;
	return;
}

void Function_55(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1FC9 / 8137
{
	*uParam0 = uParam1;
	uParam0->f_4 = uParam2;
	uParam0->f_8 = uParam3;
	uParam0->f_16 = uParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

void Function_56(var uParam0, float fParam1) //Position: 0x1FF2 / 8178
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_58(uParam0, 1);
	Function_57(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_57(var uParam0, int iParam1) //Position: 0x2013 / 8211
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_58(var uParam0, int iParam1) //Position: 0x2026 / 8230
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_59(var uParam0, float fParam1) //Position: 0x2035 / 8245
{
	if (Function_63(uParam0))
	{
		if (Function_60(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_60(int iParam0) //Position: 0x2051 / 8273
{
	if (Function_63(iParam0))
	{
		if (Function_61(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_61(int iParam0) //Position: 0x2119 / 8473
{
	return Function_62(*iParam0, 2);
}

int Function_62(var uParam0, int iParam1) //Position: 0x2126 / 8486
{
	return (uParam0 && iParam1) == 0;
}

bool Function_63(int iParam0) //Position: 0x2133 / 8499
{
	return Function_62(*iParam0, 1);
}

void Function_64(var uParam0) //Position: 0x2140 / 8512
{
	Function_56(uParam0, 0.0f);
	return;
}

void Function_65() //Position: 0x214C / 8524
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	memcpy(&Local_96, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25("nnearbyset"), 4);
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

