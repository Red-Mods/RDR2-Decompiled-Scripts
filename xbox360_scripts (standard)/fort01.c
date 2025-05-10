//Decompiled with MagicRDR v1.0
//Function Count : 621
//Statics Count : 1248
//Natives Count : 807
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<3145> Local_4 = { 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_804 = 0;
	Local_806 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_915 = 99;
	iLocal_916 = 6;
	Local_908 = 1000;
	while (Function_257())
	{
		Function_212();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x44 / 68
{
	ENABLE_CHILD_SECTOR("fom_guardTowerProps02x");
	ENABLE_CHILD_SECTOR("fom_corral01x");
	ENABLE_CHILD_SECTOR("fom_guardTower01x");
	ENABLE_CHILD_SECTOR("fom_guardTower02x");
	ENABLE_CHILD_SECTOR("fom_courtyardProps01x");
	ENABLE_CHILD_SECTOR("fom_leftWingProps01x");
	ENABLE_CHILD_SECTOR("fom_gallowsProps01x");
	ENABLE_CHILD_SECTOR("fom_guardTowerProps01x");
	ENABLE_CHILD_SECTOR("fom_gallows01x");
	ENABLE_CHILD_SECTOR("fom_corralProps01x");
	ENABLE_CHILD_SECTOR("fom_rightWing01x");
	ENABLE_CHILD_SECTOR("fom_rightWingProps01x");
	ENABLE_CHILD_SECTOR("fom_leftWing01x");
	if (IS_ACTOR_VALID((*&Local_4 + 744)[22]))
	{
		DESTROY_ACTOR((*&Local_4 + 744)[22]);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 712)[22]))
	{
		DESTROY_ACTOR((*&Local_4 + 712)[22]);
	}
	Function_211(1);
	SET_TIME_ACCELERATION(1.0f);
	if (iLocal_1172)
	{
		ENABLE_MOVER(Global_34573);
	}
	if (SQUAD_IS_VALID(Local_4.f_580))
	{
		Function_210(&Local_4 + 580);
		DESTROY_OBJECT(Local_4.f_580);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPreventCam"))
	{
		DECOR_SET_BOOL(Global_34573, "bPreventCam", true);
	}
	Function_209();
	Global_3418 = 0;
	if (!IS_HUD_MAP_VISIBLE())
	{
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	SET_WAGON_TO_WAGON_JACK_ENABLE(0, 0);
	if (IS_HUD_MAP_SCALE_OVERRIDE_SET())
	{
		ABORT_HUD_MAP_SCALE_OVERRIDE();
	}
	RESET_GAME_CAMERA_CURVE_OVERRIDES();
	if (DECOR_CHECK_EXIST(Global_34573, "MountCompleteFort01"))
	{
		DECOR_REMOVE(Global_34573, "MountCompleteFort01");
	}
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(bLocal_919);
	if (IS_ACTOR_VALID(bLocal_1127))
	{
		DESTROY_ACTOR(bLocal_1127);
		DESTROY_OBJECT(bLocal_1138);
		Function_208();
	}
	if (IS_LAYOUTREF_VALID(Local_1193))
	{
		DESTROY_LAYOUT_OBJECTS(Local_1193);
		Function_207();
	}
	if (IS_LAYOUTREF_VALID(Local_1217))
	{
		DESTROY_LAYOUT_OBJECTS(Local_1217);
		Function_206();
	}
	Function_203(2, 1, 0, 1, 1);
	Function_203(1, 1, 0, 1, 1);
	Function_203(4, 1, 0, 1, 1);
	Function_203(0, 1, 0, 1, 1);
	Function_202(bLocal_805);
	Function_202(Local_4);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_201();
	Function_175(bLocal_936, 0, 0, 1, 0, 0, 1, 1);
	Function_174();
	Function_170(&bLocal_813);
	Function_168();
	if (IS_ITERATOR_VALID(bLocal_918))
	{
		DESTROY_ITERATOR(bLocal_918);
	}
	RELEASE_LAYOUT_REF(bLocal_805);
	if (bLocal_935)
	{
		Function_24(Local_806, 1, 1, 1, 0);
	}
	else if (bLocal_936)
	{
		Function_20(Local_806);
	}
	else
	{
		Function_2(Local_806);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x34B / 843
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(bool bParam0) //Position: 0x36C / 876
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x387 / 903
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x3A8 / 936
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_6(bool bParam0) //Position: 0x3BE / 958
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

void Function_7(int iParam0) //Position: 0x45A / 1114
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(bool bParam0) //Position: 0x47B / 1147
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

void Function_9() //Position: 0x4C1 / 1217
{
	if (Global_76853)
	{
		UNK_0x1082715D();
		Global_34165.f_132 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x4DA / 1242
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

void Function_11(char* cParam0, bool bParam1) //Position: 0x52D / 1325
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

struct<16> Function_12(int iParam0) //Position: 0x651 / 1617
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_13(bool bParam0) //Position: 0x676 / 1654
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x696 / 1686
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(bool bParam0) //Position: 0x6AD / 1709
{
	if (!Function_14(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_16() //Position: 0x6C8 / 1736
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x90F / 2319
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_18(int iParam0) //Position: 0x938 / 2360
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

bool Function_19(int iParam0) //Position: 0x95C / 2396
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_20(int iParam0) //Position: 0x971 / 2417
{
	Function_21(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_21(bool bParam0) //Position: 0x98F / 2447
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

struct<16> Function_22(int iParam0) //Position: 0xA35 / 2613
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_23(char* cParam0) //Position: 0xA5F / 2655
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

void Function_24(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xCB5 / 3253
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

void Function_25() //Position: 0xDA2 / 3490
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

int Function_26(int iParam0, bool bParam1) //Position: 0xDD2 / 3538
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

int Function_27(int iParam0) //Position: 0xE0F / 3599
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xE29 / 3625
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xE3F / 3647
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

void Function_30(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1136 / 4406
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

void Function_31(char* cParam0, int iParam1) //Position: 0x11A2 / 4514
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

bool Function_32(bool bParam0, var uParam1, int iParam2) //Position: 0x11D9 / 4569
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

bool Function_33(var uParam0, int iParam1) //Position: 0x1251 / 4689
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_34(char* cParam0) //Position: 0x1264 / 4708
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

int Function_35(int iParam0) //Position: 0x1305 / 4869
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x1342 / 4930
{
	*bParam0 = (*bParam0 - (*bParam0 && bParam1));
	return;
}

void Function_37(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1355 / 4949
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

void Function_38(int iParam0, int iParam1) //Position: 0x1567 / 5479
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_39(bool bParam0, int iParam1) //Position: 0x15A1 / 5537
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

bool Function_40() //Position: 0x15E3 / 5603
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_41(bool bParam0) //Position: 0x15EC / 5612
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

void Function_42() //Position: 0x163D / 5693
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

void Function_43() //Position: 0x1670 / 5744
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

void Function_44() //Position: 0x1776 / 6006
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

void Function_45() //Position: 0x17A9 / 6057
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

void Function_46() //Position: 0x1937 / 6455
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

void Function_47() //Position: 0x1AEB / 6891
{
	Function_48(&Global_28260, 1, 0);
	return;
}

void Function_48(int iParam0, bool bParam1, var uParam2) //Position: 0x1AF9 / 6905
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

var Function_49() //Position: 0x1CEA / 7402
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_50() //Position: 0x1CFF / 7423
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

int Function_51(int iParam0, bool bParam1, bool bParam2) //Position: 0x1D9A / 7578
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

void Function_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2035 / 8245
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

bool Function_53() //Position: 0x2662 / 9826
{
	int iVar0;
	
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x266A / 9834
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_55(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x267B / 9851
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

struct<32> Function_56(char* cParam0, char* cParam1) //Position: 0x2770 / 10096
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_57(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2789 / 10121
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_59(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_58(Function_59(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_58(int iParam0, int iParam1) //Position: 0x27EE / 10222
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_59(int iParam0, bool bParam1) //Position: 0x2800 / 10240
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_60(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2812 / 10258
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

int Function_61(int iParam0) //Position: 0x2942 / 10562
{
	return Global_35278[iParam020].f_48;
}

float Function_62(int iParam0) //Position: 0x2951 / 10577
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_63(int iParam0) //Position: 0x298A / 10634
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_64(int iParam0) //Position: 0x29C7 / 10695
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

int Function_65(int iParam0, bool bParam1, bool bParam2) //Position: 0x2B61 / 11105
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

int Function_66(bool bParam0) //Position: 0x2D7B / 11643
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_67() //Position: 0x2DBC / 11708
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

struct<8> Function_68() //Position: 0x2E45 / 11845
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

struct<8> Function_69() //Position: 0x2EDC / 11996
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

void Function_70() //Position: 0x2F5B / 12123
{
	Function_71(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_51(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_71(int iParam0, bool bParam1, int iParam2) //Position: 0x2F81 / 12161
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

void Function_72() //Position: 0x318B / 12683
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

bool Function_73(vector3 vParam0) //Position: 0x322C / 12844
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_74(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3244 / 12868
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

vector3 Function_75() //Position: 0x332B / 13099
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x3334 / 13108
{
	*bParam0 = (*bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x3343 / 13123
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3359 / 13145
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

float Function_79(vector3 vParam0, vector3 vParam3) //Position: 0x3420 / 13344
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_80(bool bParam0) //Position: 0x343D / 13373
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

bool Function_81(int iParam0) //Position: 0x3919 / 14617
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0) //Position: 0x392F / 14639
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_83(bool bParam0) //Position: 0x394E / 14670
{
	if (!Function_14(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_84(int iParam0, bool bParam1) //Position: 0x3968 / 14696
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

int Function_85(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x39CF / 14799
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

void Function_86() //Position: 0x3BEF / 15343
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

int Function_87(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3C6F / 15471
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

void Function_88(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x3FC1 / 16321
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

int Function_89(int iParam0) //Position: 0x4046 / 16454
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_90() //Position: 0x4060 / 16480
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

void Function_91(int iParam0, int iParam1, bool bParam2) //Position: 0x408E / 16526
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

void Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x432A / 17194
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

void Function_93(int iParam0, int iParam1) //Position: 0x44ED / 17645
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

int Function_94(int iParam0, char* cParam1, bool bParam2) //Position: 0x474B / 18251
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

int Function_95() //Position: 0x48D0 / 18640
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

void Function_96() //Position: 0x496F / 18799
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

void Function_97(int iParam0) //Position: 0x4A1E / 18974
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

var Function_98(int iParam0) //Position: 0x4A7C / 19068
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

int Function_99(int iParam0, bool bParam1) //Position: 0x4B0B / 19211
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

var Function_100(int iParam0, int iParam1) //Position: 0x4CA8 / 19624
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

void Function_101() //Position: 0x4CE9 / 19689
{
	Function_103(3, 0.0f);
	Function_102(3, 10000.0f);
	return;
}

int Function_102(int iParam0, int iParam1) //Position: 0x4CFF / 19711
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_103(int iParam0, int iParam1) //Position: 0x4D3F / 19775
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_104(int iParam0) //Position: 0x4D7F / 19839
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_105(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x4D8E / 19854
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

int Function_106(int iParam0) //Position: 0x4F56 / 20310
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

var Function_107() //Position: 0x4FEB / 20459
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_108(int iParam0) //Position: 0x5010 / 20496
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

void Function_109(int iParam0, bool bParam1, bool bParam2) //Position: 0x54CB / 21707
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

var Function_110(int iParam0) //Position: 0x57E0 / 22496
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

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x5883 / 22659
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

int Function_112(int iParam0, bool bParam1) //Position: 0x5A7E / 23166
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

int Function_113(bool bParam0, bool bParam1) //Position: 0x5C1A / 23578
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

void Function_114(int iParam0, var uParam1, bool bParam2) //Position: 0x5CE5 / 23781
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

void Function_115(int iParam0) //Position: 0x65D5 / 26069
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

void Function_116(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6744 / 26436
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

bool Function_117(vector3 vParam0, vector3 vParam3) //Position: 0x684A / 26698
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_118(int iParam0) //Position: 0x6877 / 26743
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

var Function_119(vector3 vParam0) //Position: 0x68CE / 26830
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

void Function_120(bool bParam0, bool bParam1) //Position: 0x691C / 26908
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6970 / 26992
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

void Function_122() //Position: 0x6B0E / 27406
{
	return;
}

bool Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6B14 / 27412
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

void Function_124(bool bParam0, int iParam1) //Position: 0x6BB8 / 27576
{
	if (!Function_125(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_125(int iParam0) //Position: 0x6C0D / 27661
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x6C23 / 27683
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

bool Function_127(int iParam0, int iParam1) //Position: 0x6C74 / 27764
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

void Function_128(var uParam0, int iParam1) //Position: 0x6CA1 / 27809
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_129(var uParam0, int iParam1) //Position: 0x6CB0 / 27824
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_130(var uParam0, int iParam1) //Position: 0x6CC7 / 27847
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6CD6 / 27862
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

void Function_132(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x6E20 / 28192
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(iParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

bool Function_133() //Position: 0x6E6B / 28267
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_134(bool bParam0) //Position: 0x6E98 / 28312
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

int Function_135(int iParam0) //Position: 0x7048 / 28744
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

void Function_136(bool bParam0, bool bParam1) //Position: 0x709F / 28831
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

var Function_137(int iParam0) //Position: 0x70C4 / 28868
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

bool Function_138(bool bParam0, bool bParam1) //Position: 0x711A / 28954
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

bool Function_139(bool bParam0) //Position: 0x7179 / 29049
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_140(int iParam0) //Position: 0x7185 / 29061
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_141(int iParam0) //Position: 0x71A1 / 29089
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

int Function_142(int iParam0, int iParam1) //Position: 0x71F3 / 29171
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

int Function_143(int iParam0, int iParam1) //Position: 0x7266 / 29286
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_144(int iParam0, int iParam1) //Position: 0x72C2 / 29378
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

int Function_145(int iParam0, int iParam1) //Position: 0x7333 / 29491
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_146(int iParam0) //Position: 0x738D / 29581
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

void Function_147(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x7639 / 30265
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

void Function_148(int iParam0, bool bParam1) //Position: 0x78C8 / 30920
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

void Function_149() //Position: 0x7927 / 31015
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

var Function_150(int iParam0, int iParam1) //Position: 0x79A2 / 31138
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

int Function_151(int iParam0) //Position: 0x8595 / 34197
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x85AA / 34218
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

bool Function_153(bool bParam0, bool bParam1) //Position: 0x85F9 / 34297
{
	return (bParam0 && bParam1) == 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x8606 / 34310
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

void Function_155(bool bParam0, bool bParam1, int iParam2) //Position: 0x8657 / 34391
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

bool Function_156(int iParam0, int iParam1) //Position: 0x86C5 / 34501
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_157(int iParam0) //Position: 0x86D8 / 34520
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

var Function_158(int iParam0) //Position: 0x87D7 / 34775
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

bool Function_159(var uParam0, int iParam1) //Position: 0x882F / 34863
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x884B / 34891
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

bool Function_161(int iParam0) //Position: 0x88A2 / 34978
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_162(bool bParam0) //Position: 0x88B4 / 34996
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

void Function_163(int iParam0) //Position: 0x88E8 / 35048
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

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x894F / 35151
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

void Function_165(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8A2C / 35372
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

void Function_166() //Position: 0x8BA5 / 35749
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_167(int iParam0) //Position: 0x8BB1 / 35761
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

void Function_168() //Position: 0x8BF7 / 35831
{
	Function_169();
	return;
}

void Function_169() //Position: 0x8C00 / 35840
{
	Function_170(&Local_4 + 4);
	Function_170(&Local_4 + 188);
	Function_170(&Local_4 + 264);
	Function_170(&Local_4 + 436);
	Function_170(&Local_4 + 488);
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_170(bool bParam0) //Position: 0x8C31 / 35889
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		Function_171(bParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_171(var uParam0, int iParam1) //Position: 0x8C57 / 35927
{
	if (Function_173(uParam0[iParam13], 4))
	{
		if (Function_173(uParam0[iParam13], 1))
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
			Function_172(uParam0[iParam13], 1);
			Function_172(uParam0[iParam13], 2);
			Function_172(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_172(var uParam0, int iParam1) //Position: 0x8D85 / 36229
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_173(int iParam0, int iParam1) //Position: 0x8D9F / 36255
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_174() //Position: 0x8DBC / 36284
{
	if (IS_BLIP_VALID(bLocal_1136))
	{
		REMOVE_BLIP(bLocal_1136);
	}
	if (IS_OBJECT_ANIMATOR_VALID(bLocal_1138))
	{
		DESTROY_OBJECT_ANIMATOR(bLocal_1138);
	}
	if (IS_ACTOR_VALID(bLocal_1127))
	{
		RELEASE_ACTOR(bLocal_1127);
	}
	if (IS_POPSET_VALID(bLocal_1140))
	{
		DESTROY_POPULATION_SET(bLocal_1140);
	}
	if (IS_POPSET_VALID(bLocal_1141))
	{
		DESTROY_POPULATION_SET(bLocal_1141);
	}
	if (SQUAD_IS_VALID(Local_4.f_580))
	{
		if (IS_ACTOR_VALID(bLocal_1126))
		{
			SQUAD_LEAVE(bLocal_1126);
		}
		if (IS_ACTOR_VALID(bLocal_1125))
		{
			SQUAD_LEAVE(bLocal_1125);
		}
		if (IS_ACTOR_VALID(bLocal_919))
		{
			SQUAD_LEAVE(bLocal_919);
		}
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1139))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_1139);
	}
	if (IS_LAYOUTREF_VALID(Local_1182))
	{
		Function_208();
	}
	return;
}

void Function_175(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x8E60 / 36448
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_200());
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
	Function_199();
	CLEAR_PRINTED_OBJECTIVE();
	Function_209();
	Function_197(0);
	Function_196();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_195();
	Function_194();
	Function_199();
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

void Function_176() //Position: 0x9051 / 36945
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

void Function_177(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x90A7 / 37031
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_178((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_178(bool bParam0) //Position: 0x90ED / 37101
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_179() //Position: 0x9112 / 37138
{
	return Global_12976.f_156;
}

void Function_180() //Position: 0x911D / 37149
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

void Function_181(int iParam0, bool bParam1, int iParam2) //Position: 0x9147 / 37191
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

void Function_182(int iParam0) //Position: 0x9252 / 37458
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

bool Function_183() //Position: 0x92D1 / 37585
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

void Function_184() //Position: 0x932E / 37678
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

void Function_185() //Position: 0x9354 / 37716
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

void Function_186(int iParam0) //Position: 0x937A / 37754
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_187(int iParam0) //Position: 0x9397 / 37783
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_188(int iParam0) //Position: 0x93AA / 37802
{
	Function_189(&Global_28842, iParam0);
	return;
}

void Function_189(var uParam0, int iParam1) //Position: 0x93B8 / 37816
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_190(bool bParam0) //Position: 0x93D3 / 37843
{
	if (Function_153(bParam0, 1) && !Function_153(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_191(int iParam0) //Position: 0x9400 / 37888
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

void Function_192(bool bParam0) //Position: 0x94C7 / 38087
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

void Function_193(bool bParam0) //Position: 0x9543 / 38211
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

void Function_194() //Position: 0x95B7 / 38327
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

void Function_195() //Position: 0x95F8 / 38392
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

void Function_196() //Position: 0x9639 / 38457
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_197(int iParam0) //Position: 0x964D / 38477
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

bool Function_198() //Position: 0x9689 / 38537
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

void Function_199() //Position: 0x96AE / 38574
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

int Function_200() //Position: 0x96D9 / 38617
{
	bool bVar0;
	
	bVar0 = Function_49();
	if (IS_ACTOR_VALID(bVar0))
	{
		return GET_PLAYER_PADINDEX(bVar0);
	}
	return 0;
}

void Function_201() //Position: 0x96F3 / 38643
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_202(bool bParam0) //Position: 0x96FC / 38652
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

int Function_203(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9754 / 38740
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

void Function_204(bool bParam0) //Position: 0x9A72 / 39538
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

void Function_205(bool bParam0) //Position: 0x9A9E / 39582
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	return;
}

void Function_206() //Position: 0x9AB3 / 39603
{
	Function_170(&Local_1217 + 4);
	RELEASE_LAYOUT_REF(Local_1217);
	return;
}

void Function_207() //Position: 0x9AC7 / 39623
{
	Function_170(&Local_1193 + 4);
	RELEASE_LAYOUT_REF(Local_1193);
	return;
}

void Function_208() //Position: 0x9ADB / 39643
{
	Function_170(&Local_1182 + 4);
	RELEASE_LAYOUT_REF(Local_1182);
	return;
}

void Function_209() //Position: 0x9AEF / 39663
{
	Global_8722 = 0.0f;
	return;
}

void Function_210(int iParam0) //Position: 0x9AF9 / 39673
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

void Function_211(bool bParam0) //Position: 0x9B40 / 39744
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = START_CURVE_QUERY(bLocal_805, *(&Local_4 + 2040[66]), 2,802597E-45f, 0.0f, 1.0f, 0,1f, 0);
	iVar1 = GET_NUM_POINTS_IN_CURVE_QUERY(bVar0);
	if (IS_CURVE_QUERY_VALID(bVar0) && iVar1 < 0)
	{
		bVar2 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar0, false);
		if (!IS_OBJECT_VALID(bVar2))
		{
			bVar2 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar0, false);
			if (!IS_OBJECT_VALID(bVar2))
			{
			}
		}
		if (IS_OBJECT_VALID(bVar2))
		{
			SET_CURVE_ACTIVE(bVar2, bParam0);
		}
	}
	return;
}

void Function_212() //Position: 0x9BAC / 39852
{
	var uVar0[8];
	int iVar9;
	
	if (Function_256())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02: Machine Gun I";
		uVar0[4] = "Stage 03: Cover the Marshal";
		uVar0[5] = "Stage 04: Machine Gun II";
		uVar0[6] = "Last Stage";
		uVar0[7] = "Destroy Stage 2 baddies";
		iVar9 = Function_242(&uLocal_901, &uVar0, &Local_806 + 4, 1, 0);
		if (Function_241(&iVar9, &bLocal_915, &iLocal_916, &Local_908))
		{
			Function_234();
			Function_233();
		}
		if (iVar9 == 0)
		{
			Function_234();
			Function_233();
			Function_232(&bLocal_935, 8);
		}
		else if (iVar9 == 1)
		{
			Function_234();
			Function_233();
			Function_227(bLocal_915);
			Function_223(StackVal, StackVal, 5, &bLocal_936, &bLocal_915, Function_230(bLocal_915), Function_227(bLocal_915), 0);
		}
		else if (iVar9 == 2)
		{
			Function_234();
			Function_233();
			Function_218(&bLocal_937, 4);
		}
		else if (iVar9 == 3)
		{
			Function_216();
			Function_234();
			Function_233();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_214(&bLocal_920);
			bLocal_915 = true;
			iLocal_916 = 0;
			Local_908 = 1000;
		}
		else if (iVar9 == 4)
		{
			Function_216();
			Function_234();
			Function_233();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_214(&bLocal_920);
			bLocal_915 = 2;
			iLocal_916 = 0;
			Local_908 = 1000;
		}
		else if (iVar9 == 5)
		{
			Function_216();
			Function_234();
			Function_233();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_214(&bLocal_920);
			bLocal_915 = 3;
			iLocal_916 = 0;
			Local_908 = 1000;
		}
		else if (iVar9 == 6)
		{
			Function_216();
			Function_234();
			Function_233();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_214(&bLocal_920);
			bLocal_915 = 101;
			iLocal_916 = 0;
			Local_908 = 1000;
		}
		else if (iVar9 == 7)
		{
			Function_213(Local_4.f_628);
		}
	}
	return;
}

void Function_213(bool bParam0) //Position: 0x9DDD / 40413
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

void Function_214(bool bParam0) //Position: 0x9E21 / 40481
{
	Function_215(bParam0, 0.0f);
	return;
}

void Function_215(bool bParam0, float fParam1) //Position: 0x9E2D / 40493
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(bParam0, 1);
	Function_36(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

void Function_216() //Position: 0x9E4E / 40526
{
	Global_3418 = 0;
	DECOR_REMOVE(Global_34573, "iMountingGun");
	if (IS_BLIP_VALID(bLocal_1136))
	{
		REMOVE_BLIP(bLocal_1136);
	}
	if (IS_OBJECT_VALID(Local_1193.f_88))
	{
		DESTROY_OBJECT(Local_1193.f_88);
		Function_208();
	}
	if (IS_OBJECT_ANIMATOR_VALID(bLocal_1138))
	{
		DESTROY_OBJECT_ANIMATOR(bLocal_1138);
	}
	if (IS_ACTOR_VALID(bLocal_1127))
	{
		DESTROY_ACTOR(bLocal_1127);
	}
	Function_217(&uLocal_1130);
	if (IS_POPSET_VALID(bLocal_1140))
	{
		DESTROY_POPULATION_SET(bLocal_1140);
	}
	if (IS_POPSET_VALID(bLocal_1141))
	{
		DESTROY_POPULATION_SET(bLocal_1141);
	}
	if (SQUAD_IS_VALID(Local_4.f_580))
	{
		if (IS_ACTOR_VALID(bLocal_1126))
		{
			SQUAD_LEAVE(bLocal_1126);
		}
		if (IS_ACTOR_VALID(bLocal_1125))
		{
			SQUAD_LEAVE(bLocal_1125);
		}
		if (IS_ACTOR_VALID(bLocal_919))
		{
			SQUAD_LEAVE(bLocal_919);
		}
		Function_210(&Local_4 + 580);
		DESTROY_OBJECT(Local_4.f_580);
	}
	if (SQUAD_IS_VALID(Local_4.f_620))
	{
		Function_210(&Local_4 + 620);
		DESTROY_OBJECT(Local_4.f_620);
	}
	if (SQUAD_IS_VALID(Local_4.f_624))
	{
		Function_210(&Local_4 + 624);
		DESTROY_OBJECT(Local_4.f_624);
	}
	if (SQUAD_IS_VALID(Local_4.f_628))
	{
		Function_210(&Local_4 + 628);
		DESTROY_OBJECT(Local_4.f_628);
	}
	if (SQUAD_IS_VALID(Local_4.f_668))
	{
		Function_210(&Local_4 + 668);
		DESTROY_OBJECT(Local_4.f_668);
	}
	if (SQUAD_IS_VALID(Local_4.f_672))
	{
		Function_210(&Local_4 + 672);
		DESTROY_OBJECT(Local_4.f_672);
	}
	if (SQUAD_IS_VALID(Local_4.f_676))
	{
		Function_210(&Local_4 + 676);
		DESTROY_OBJECT(Local_4.f_676);
	}
	if (SQUAD_IS_VALID(Local_4.f_680))
	{
		Function_210(&Local_4 + 680);
		DESTROY_OBJECT(Local_4.f_680);
	}
	if (SQUAD_IS_VALID(Local_4.f_684))
	{
		Function_210(&Local_4 + 684);
		DESTROY_OBJECT(Local_4.f_684);
	}
	if (SQUAD_IS_VALID(Local_4.f_692))
	{
		Function_210(&Local_4 + 692);
		DESTROY_OBJECT(Local_4.f_692);
	}
	if (SQUAD_IS_VALID(Local_4.f_704))
	{
		Function_210(&Local_4 + 704);
		DESTROY_OBJECT(Local_4.f_704);
	}
	if (SQUAD_IS_VALID(Local_4.f_708))
	{
		Function_210(&Local_4 + 708);
		DESTROY_OBJECT(Local_4.f_708);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(bLocal_1139))
	{
		RELEASE_SCRIPT_USE_CONTEXT(bLocal_1139);
	}
	if (IS_LAYOUTREF_VALID(Local_1182))
	{
		Function_208();
	}
	return;
}

void Function_217(int iParam0) //Position: 0xA061 / 41057
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (IS_OBJECT_VALID((*iParam0)[iVar0]))
		{
			DESTROY_OBJECT((*iParam0)[iVar0]);
		}
		iVar0++;
	}
	return;
}

void Function_218(bool bParam0, int iParam1) //Position: 0xA092 / 41106
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_219(iParam1);
	*bParam0 = 1;
	return;
}

void Function_219(int iParam0) //Position: 0xA0B5 / 41141
{
	int iVar0;
	
	Global_6270 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_222("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_221(2) || Function_221(8)) || Function_221(9)) || Function_221(10))
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
		Function_222("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_222("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_222("");
	}
	else if (iParam0 == 8)
	{
		Function_220();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_220();
	}
	return;
}

void Function_220() //Position: 0xA1AC / 41388
{
	Global_34165.f_48 = 4294967295;
	return;
}

int Function_221(int iParam0) //Position: 0xA1B8 / 41400
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

void Function_222(bool bParam0) //Position: 0xA1EE / 41454
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(bParam0);
	PRINTNL();
	strcpy(&Global_6272, bParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_6272));
	return;
}

void Function_223(int iParam0, bool bParam1, bool bParam2, var uParam3, vector3 vParam4, int iParam7) //Position: 0xA258 / 41560
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (*bParam2 != 100)
	{
		Function_224(StackVal, StackVal, vParam4, uParam3, iParam7);
		Function_219(iParam0);
		*bParam1 = 1;
		*bParam2 = 100;
	}
}

void Function_224(vector3 vParam0, var uParam3, var uParam4) //Position: 0xA295 / 41621
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	*(&Var0 + 44) = { StackVal, StackVal, vParam0 };
	Var0.f_56 = uParam3;
	Var0.f_60 = uParam4;
	strcpy(&cVar44, "Jump position: ", 64);
	stradd(&cVar44, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_226(StackVal, StackVal, vParam0, 1);
	strcpy(&cVar44, "Jump region: ", 64);
	stradd(&cVar44, Function_225(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 44, 1);
}

var Function_225(int iParam0) //Position: 0xA318 / 41752
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

var Function_226(vector3 vParam0, bool bParam3) //Position: 0xA7C6 / 42950
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

vector3 Function_227(bool bParam0) //Position: 0xA831 / 43057
{
	Function_228(bParam0 + 1);
	return StackVal, StackVal, Function_228(bParam0 + 1);
}

vector3 Function_228(bool bParam0) //Position: 0xA83E / 43070
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_229((*&Local_4 + 964)[0]);
			return StackVal, StackVal, Function_229((*&Local_4 + 964)[0]);
			break;
		
		case 0x00000001:
			Function_229((*&Local_4 + 1028)[0]);
			return StackVal, StackVal, Function_229((*&Local_4 + 1028)[0]);
			break;
		
		case 0x00000002:
			Function_229((*&Local_4 + 1080)[0]);
			return StackVal, StackVal, Function_229((*&Local_4 + 1080)[0]);
			break;
		
		case 0x00000003:
			Function_229((*&Local_4 + 1156)[1]);
			return StackVal, StackVal, Function_229((*&Local_4 + 1156)[1]);
			break;
		
		default:
			Function_229((*&Local_4 + 1260)[0]);
			return StackVal, StackVal, Function_229((*&Local_4 + 1260)[0]);
			break;
	}
	Function_229((*&Local_4 + 1260)[0]);
	return StackVal, StackVal, Function_229((*&Local_4 + 1260)[0]);
}

vector3 Function_229(bool bParam0) //Position: 0xA8B9 / 43193
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

int Function_230(bool bParam0) //Position: 0xA8E0 / 43232
{
	return Function_231(bParam0 + 1);
}

int Function_231(bool bParam0) //Position: 0xA8ED / 43245
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING((*&Local_4 + 964)[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING((*&Local_4 + 1028)[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING((*&Local_4 + 1080)[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING((*&Local_4 + 1156)[1]);
			break;
		
		default:
			return GET_OBJECT_HEADING((*&Local_4 + 1260)[0]);
			break;
	}
	return GET_OBJECT_HEADING((*&Local_4 + 1260)[0]);
}

void Function_232(bool bParam0, int iParam1) //Position: 0xA968 / 43368
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_219(iParam1);
	*bParam0 = 1;
	return;
}

void Function_233() //Position: 0xA98B / 43403
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_234() //Position: 0xA9A0 / 43424
{
	Function_236();
	Function_235(10, 3);
	return;
}

void Function_235(int iParam0, int iParam1) //Position: 0xA9AF / 43439
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

void Function_236() //Position: 0xAAE6 / 43750
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_240())
	{
		Function_239(10, 3);
	}
	else
	{
		Function_237();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_49(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_49());
	UI_POP("nDebugMenu");
	return;
}

void Function_237() //Position: 0xAB31 / 43825
{
	Function_238(25, 2);
	return;
}

void Function_238(int iParam0, int iParam1) //Position: 0xAB3D / 43837
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

void Function_239(int iParam0, int iParam1) //Position: 0xAD3B / 44347
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

bool Function_240() //Position: 0xAE72 / 44658
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

bool Function_241(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xAED9 / 44761
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_63096 && IS_ACTOR_READY_FOR_ACTION(Global_34573)) && !Global_3369)
		{
			Function_234();
			Function_233();
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
		Function_222("missionFail_debug");
		*uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		*uParam0 = 2;
	}
	return 0;
}

var Function_242(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xAF7F / 44927
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = uParam4;
	Function_255(&Var15, &Var0);
	uVar20 = Function_254(*uParam1, &Var15);
	Function_253(uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_252(uParam0, uVar20);
	Function_250(StackVal, uParam0, Var15.f_12);
	Function_248(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_247(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_244(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_243(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_243(int iParam0, int iParam1, int iParam2) //Position: 0xB046 / 45126
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

bool Function_244(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xB0A2 / 45218
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
				Function_246(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_246(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_243(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_245(bParam1->f_32);
	}
	else
	{
		Function_245(bParam1->f_32);
	}
	return 0;
}

void Function_245(bool bParam0) //Position: 0xB228 / 45608
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

void Function_246(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xB262 / 45666
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

var Function_247(int iParam0, var uParam1, int iParam2) //Position: 0xB310 / 45840
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_248(var uParam0, int iParam1, int iParam2) //Position: 0xB334 / 45876
{
	switch (Function_249())
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

int Function_249() //Position: 0xB3D0 / 46032
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

void Function_250(var uParam0, int iParam1, int iParam2) //Position: 0xB40C / 46092
{
	switch (Function_251(uParam0))
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

int Function_251(bool bParam0) //Position: 0xB4A4 / 46244
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

var Function_252(var uParam0, int iParam1) //Position: 0xB5EF / 46575
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

void Function_253(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB73E / 46910
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

var Function_254(int iParam0, int iParam1) //Position: 0xB7D1 / 47057
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_255(var uParam0, var uParam1) //Position: 0xB7EB / 47083
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

bool Function_256() //Position: 0xB839 / 47161
{
	return Global_30920;
}

bool Function_257() //Position: 0xB842 / 47170
{
	if (IS_EXITFLAG_SET())
	{
		Function_227(bLocal_915);
		Function_223(StackVal, StackVal, 4, &bLocal_936, &bLocal_915, Function_230(bLocal_915), Function_227(bLocal_915), 0);
		return 0;
	}
	Function_620(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_806, bLocal_915, iLocal_916, &bLocal_937, &bLocal_935, &bLocal_936);
	if ((bLocal_915 == 99 && bLocal_915 == 100) && bLocal_915 == 101)
	{
		if (IS_ACTOR_DEAD(Global_34573))
		{
			Function_227(bLocal_915);
			Function_223(StackVal, StackVal, 1, &bLocal_936, &bLocal_915, Function_230(bLocal_915), Function_227(bLocal_915), 0);
			return 1;
		}
		Function_619();
		if ((bLocal_915 != 2 && (iLocal_916 > 8 || iLocal_916 < 14)) && iLocal_1123)
		{
			iLocal_1123 = 0;
		}
		else if (!iLocal_1123)
		{
			iLocal_1123 = 1;
		}
		if (Function_599(&Local_986, &uLocal_941, &uLocal_981, bLocal_918, iLocal_1123))
		{
			if (Function_597(&uLocal_981))
			{
				Function_227(bLocal_915);
				Function_223(StackVal, StackVal, 5, &bLocal_936, &bLocal_915, Function_230(bLocal_915), Function_227(bLocal_915), 0);
			}
		}
		if (bLocal_915 == 101 && bLocal_915 == 0)
		{
			if (iLocal_916 < 5 && iLocal_916 > 105)
			{
				Function_594();
			}
		}
		if (Function_593(2048))
		{
			Function_227(bLocal_915);
			Function_223(StackVal, StackVal, 3, &bLocal_936, &bLocal_915, Function_230(bLocal_915), Function_227(bLocal_915), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(bLocal_919))
		{
			Function_222("Merchant_dead");
			Function_227(bLocal_915);
			Function_223(StackVal, StackVal, 5, &bLocal_936, &bLocal_915, Function_230(bLocal_915), Function_227(bLocal_915), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(bLocal_1125))
		{
			Function_222("GraveRobber_dead");
			Function_227(bLocal_915);
			Function_223(StackVal, StackVal, 5, &bLocal_936, &bLocal_915, Function_230(bLocal_915), Function_227(bLocal_915), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(bLocal_1126))
		{
			Function_222("Marshal_dead");
			Function_227(bLocal_915);
			Function_223(StackVal, StackVal, 5, &bLocal_936, &bLocal_915, Function_230(bLocal_915), Function_227(bLocal_915), 0);
			return 1;
		}
		if (SQUAD_IS_VALID(Local_4.f_580))
		{
			if ((IS_ACTOR_DEAD((*&Local_4 + 552)[02]) || IS_ACTOR_DEAD((*&Local_4 + 552)[12])) || IS_ACTOR_DEAD((*&Local_4 + 552)[22]))
			{
				Function_222("fort01_Deputys_dead");
				Function_227(bLocal_915);
				Function_223(StackVal, StackVal, 5, &bLocal_936, &bLocal_915, Function_230(bLocal_915), Function_227(bLocal_915), 0);
				return 1;
			}
		}
		Function_592();
	}
	switch (bLocal_915)
	{
		case 0x00000063:
			Function_563();
			break;
		
		case 0x00000000:
			Function_553();
			break;
		
		case 0x00000001:
			Function_535();
			break;
		
		case 0x00000002:
			Function_458();
			break;
		
		case 0x00000003:
			Function_362();
			break;
		
		case 0x00000065:
			Function_260();
			break;
		
		case 0x00000064:
			if (Function_259(&bLocal_936))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_258(&bLocal_915, &iLocal_916, &Local_908))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_935)
	{
		Function_232(&bLocal_935, 8);
		Function_1();
		return 0;
	}
	if (bLocal_936 && bLocal_915 == 100)
	{
		Function_227(bLocal_915);
		Function_223(StackVal, StackVal, 5, &bLocal_936, &bLocal_915, Function_230(bLocal_915), Function_227(bLocal_915), 0);
	}
	if (bLocal_937)
	{
		Function_218(&bLocal_937, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_258(var uParam0, var uParam1, int iParam2) //Position: 0xBB2E / 47918
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

bool Function_259(int iParam0) //Position: 0xBB6E / 47982
{
	if (Global_3395)
	{
		*iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_260() //Position: 0xBB81 / 48001
{
	switch (iLocal_916)
	{
		case 0x00000000:
			Function_358(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			if (IS_ACTOR_VALID(bLocal_919))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_919);
				TASK_STAND_STILL(bLocal_919, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_919, true);
			}
			if (IS_ACTOR_VALID(bLocal_1126))
			{
				TASK_STAND_STILL(bLocal_1126, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_1126, true);
			}
			if (IS_ACTOR_VALID(bLocal_1125))
			{
				TASK_STAND_STILL(bLocal_1125, -1.0f, 0, 0);
				TASK_PRIORITY_SET(bLocal_1125, true);
			}
			SET_ACTOR_HEALTH(bLocal_919, GET_ACTOR_MAX_HEALTH(bLocal_919));
			SET_ACTOR_HEALTH(bLocal_1126, GET_ACTOR_MAX_HEALTH(bLocal_1126));
			SET_ACTOR_HEALTH(bLocal_1125, GET_ACTOR_MAX_HEALTH(bLocal_1125));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_355();
				Function_229((*&Local_4 + 1260)[0]);
				bLocal_917 = Function_354(StackVal, StackVal, Function_229((*&Local_4 + 1260)[0]), 0, 1, 1);
				if (!Function_353(bLocal_917))
				{
					Function_352(&Local_806);
				}
				Function_351(Global_34573, (*&Local_4 + 1260)[0], 1, 1, 1);
				Function_214(&bLocal_920);
				iLocal_916 = 1;
			}
			else
			{
				Function_214(&bLocal_920);
				iLocal_916 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_353(Global_30679[1]))
			{
				Function_214(&bLocal_920);
				iLocal_916 = 2;
			}
			break;
		
		case 0x00000002:
			SET_AUTO_CONVERSATION_LOOK(Global_34573, 1);
			Function_351(bLocal_1125, (*&Local_4 + 1260)[8], 1, 1, 1);
			Function_351(bLocal_1126, (*&Local_4 + 1260)[6], 1, 1, 1);
			if (IS_ACTOR_VALID(bLocal_1127))
			{
				Function_208();
				DESTROY_ACTOR(bLocal_1127);
			}
			if (IS_OBJECT_VALID(Local_1182.f_40))
			{
				DESTROY_OBJECT(Local_1182.f_40);
			}
			Function_214(&bLocal_920);
			iLocal_916 = 3;
			break;
		
		case 0x00000003:
			if (Function_261("$/cutscene/FORT_01_CS07_SEQ/FORT_01_CS07_SEQ", &Local_908, &Local_806, &bLocal_915, 65280, 64922, 64032, 57473, 54538, 51441, 0, 1, 1, 2, 2, 0, 1))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_214(&bLocal_920);
				iLocal_916 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_935 = true;
			}
			break;
	}
	return;
}

bool Function_261(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16) //Position: 0xBDAF / 48559
{
	if (!bParam15)
	{
		Function_274(iParam1, iParam10);
	}
	switch (*iParam1)
	{
		case 0x000003E8:
			if (*bParam3 != 99 && (Function_273(iParam2) || iParam2->f_24 < 1))
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
				Function_214(iParam1 + 4);
				*iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), bParam0) || !Function_272())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_271(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_63097 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_214(iParam1 + 4);
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
					Function_271(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_268(iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				*iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_268(iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(Global_34573, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_266(Global_63117, Global_6289);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, true, 0, 0, 0);
						Global_63097 = 0;
						Function_271(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_214(iParam1 + 4);
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
						Function_265(1.0f);
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
						Function_263();
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
					Function_262(1);
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
			if ((HUD_IS_FADED() && *bParam3 == 99) && !Function_273(iParam2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			*iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_262(bool bParam0) //Position: 0xC3C8 / 50120
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

void Function_263() //Position: 0xC46D / 50285
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_264();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_264() //Position: 0xC4B2 / 50354
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_265(bool bParam0) //Position: 0xC4C4 / 50372
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

void Function_266(bool bParam0, bool bParam1) //Position: 0xC4E1 / 50401
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
			if ((bVar3 == Global_34573 && !Function_267(bVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(bVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(bVar0);
	return;
}

bool Function_267(bool bParam0) //Position: 0xC561 / 50529
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

float Function_268(bool bParam0) //Position: 0xC590 / 50576
{
	if (Function_270(bParam0))
	{
		if (Function_269(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_269(int iParam0) //Position: 0xC658 / 50776
{
	return Function_153(*iParam0, 2);
}

bool Function_270(bool bParam0) //Position: 0xC665 / 50789
{
	return Function_153(*bParam0, 1);
}

int Function_271(bool bParam0) //Position: 0xC672 / 50802
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

bool Function_272() //Position: 0xC72A / 50986
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

bool Function_273(int iParam0) //Position: 0xC764 / 51044
{
	return iParam0->f_20;
}

void Function_274(var uParam0, int iParam1) //Position: 0xC76E / 51054
{
	Function_275(uParam0, iParam1, 0);
	return;
}

void Function_275(var uParam0, bool bParam1, bool bParam2) //Position: 0xC77C / 51068
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
			Function_276(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						Function_276(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_276(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xC8C8 / 51400
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

int Function_277() //Position: 0xC8F1 / 51441
{
	vector3 vVar0;
	
	switch (bLocal_915)
	{
		case 0x00000002:
			if (!DECOR_CHECK_EXIST(bLocal_805, "skippedthirdsatge"))
			{
				DECOR_SET_FLOAT(bLocal_805, "skippedthirdsatge", GET_CURRENT_GAME_TIME());
			}
			if (MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1))
			{
				return 1;
			}
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_805, "skippedthirdsatge")) < 5.0f)
			{
				return 1;
			}
			break;
		
		case 0x00000003:
			if (SQUAD_IS_VALID(Local_4.f_696))
			{
				SQUAD_GOALS_CLEAR(Local_4.f_696);
				Function_293(Local_4.f_696);
				Function_291(1, Local_4.f_696, 0, 0);
				Function_286(StackVal, StackVal, StackVal, StackVal, Local_4.f_696, *(&Local_4 + 2040[56]), *(&Local_4 + 2040[56] + 12), 1.0f, 3);
				Function_285(Local_4.f_696, 10.0f);
				Function_284(Local_4.f_696, 1);
			}
			if (SQUAD_IS_VALID(Local_4.f_704))
			{
				GET_PATH_POINT(Local_4.f_3108, (GET_NUM_PATH_POINTS(Local_4.f_3108) - 1), &vVar0);
				Function_283(StackVal, StackVal, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_704, false), vVar0, 1, 1, 1);
				Function_279(GET_MOUNT(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_704, false)), Global_34573);
				GET_PATH_POINT(Local_4.f_3108, (GET_NUM_PATH_POINTS(Local_4.f_3108) - 2), &vVar0);
				Function_283(StackVal, StackVal, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_704, true), vVar0, 1, 1, 1);
				Function_279(GET_MOUNT(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_704, true)), Global_34573);
				GET_PATH_POINT(Local_4.f_3108, (GET_NUM_PATH_POINTS(Local_4.f_3108) - 3), &vVar0);
				Function_283(StackVal, StackVal, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_704, 2), vVar0, 1, 1, 1);
				Function_279(GET_MOUNT(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_704, 2)), Global_34573);
				Function_278(Local_4.f_704, Local_4.f_3108, 0, 0);
			}
			TASK_CLEAR(Global_34573);
			if (!SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_1129, "GatlingShoot", true, 0, 1))
			{
			}
			if (!IS_OBJECT_VALID(bLocal_1129))
			{
			}
			Global_3418 = 1;
			return 1;
			break;
		
		case 0x00000065:
			if (!DECOR_CHECK_EXIST(bLocal_805, "skippedlastsatge"))
			{
				DECOR_SET_FLOAT(bLocal_805, "skippedlastsatge", GET_CURRENT_GAME_TIME());
			}
			if (MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1))
			{
				return 1;
			}
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_805, "skippedlastsatge")) < 5.0f)
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_278(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xCB56 / 52054
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iParam3 = iParam3;
	if (SQUAD_IS_VALID(bParam0))
	{
		if (!SQUAD_IS_VALID(bLocal_1177))
		{
			bLocal_1177 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_805, Function_53()));
		}
		SQUAD_GOALS_CLEAR(bParam0);
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (!GET_TASK_STATUS(bVar1, 0) != 1)
				{
					bVar2 = TASK_SEQUENCE_OPEN();
					if (IS_OBJECT_VALID(bParam2))
					{
						if (FLOOR((RAND_FLOAT_RANGE(0.0f, 200000.0f) / 100000.0f)) > 1)
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, bParam1, 4, 1, 0, 1, TO_FLOAT(bVar0));
						}
						else
						{
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, bParam2, 4, 1, 0, 1, TO_FLOAT(bVar0));
						}
						TASK_DISMOUNT(false, 1);
						TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
					}
					else
					{
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, bParam1, 4, 1, 0, 1, TO_FLOAT(bVar0));
						TASK_DISMOUNT(false, 1);
						TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
					}
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bVar1, bVar2);
					TASK_SEQUENCE_RELEASE(bVar2, 1);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar1, 0);
					SET_CRIPPLE_ENABLE(bVar1, 0);
					ADD_BLIP_FOR_ACTOR(bVar1, 322, 0, 2, 0);
					MEMORY_REPORT_POSITION_AUTO(bVar1, Global_34573, true);
					GIVE_WEAPON_TO_ACTOR(bVar1, 41, false, 1, 1);
					GIVE_WEAPON_TO_ACTOR(bVar1, 16, false, 1, 1);
					SET_ACTOR_FROZEN_AFTER_CORPSIFY(bVar1, 1);
					SET_ACTOR_FACTION(bVar1, 19);
					SET_ACTOR_VISION_XRAY(bVar1, true);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar1, (*&Local_4 + 916)[3], 2, 1);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar1, (*&Local_4 + 916)[6], 2, 1);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar1, false);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar1, 15, true);
					AI_GOAL_LOOK_AT_ACTOR(bVar1, Global_34573, 1, 1065353216, 3212836864, 3212836864, 0);
					SET_ACTOR_VISION_XRAY(bVar1, true);
					SET_ACTOR_UPDATE_PRIORITY(bVar1, true);
					SET_ACTOR_FROZEN_AFTER_CORPSIFY(bVar1, 1);
					bVar3 = GET_MOUNT(bVar1);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (!IS_ACTOR_IN_VOLUME(bVar3, Local_4.f_952))
						{
							TASK_GO_TO_COORD(bVar3, &Local_4 + 2820[66], 3);
						}
						else
						{
							TASK_GO_TO_COORD(bVar3, &Local_4 + 2820[76], 3);
						}
						SET_ACTOR_UPDATE_PRIORITY(bVar3, true);
						SQUAD_JOIN(bVar3, bLocal_1177);
						SET_ACTOR_FROZEN_AFTER_CORPSIFY(bVar3, 1);
					}
				}
			}
			bVar0++;
		}
	}
}

void Function_279(bool bParam0, bool bParam1) //Position: 0xCD29 / 52521
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bParam1), &vVar0);
	Function_280(StackVal, StackVal, bParam0, vVar0);
	return;
}

void Function_280(bool bParam0, vector3 vParam1) //Position: 0xCD43 / 52547
{
	if (!IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_281(StackVal, bParam0, bParam0, vParam1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_281(StackVal, GET_MOUNT(bParam0), bParam0, vParam1), 1);
	}
}

var Function_281(bool bParam0, vector3 vParam1) //Position: 0xCD7B / 52603
{
	vector3 vVar0;
	
	Function_282(bParam0);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_282(bParam0), vParam1, StackVal) };
	VNORMALIZE(&vVar0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(vVar0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&vVar0));
	PRINTNL();
	return UNK_0x9C40E671(&vVar0);
}

vector3 Function_282(bool bParam0) //Position: 0xCDFE / 52734
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_283(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6) //Position: 0xCE0F / 52751
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

void Function_284(bool bParam0, bool bParam1) //Position: 0xCE9E / 52894
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

void Function_285(bool bParam0, bool bParam1) //Position: 0xCEE6 / 52966
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

void Function_286(bool bParam0, vector3 vParam1, struct<5> Param4) //Position: 0xCF2E / 53038
{
	bool bVar0;
	vector3 vVar1;
	struct<2> Var4;
	bool bVar6;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	Function_290(fParam7, iParam8);
	Var4 = { StackVal, Function_290(fParam7, iParam8) };
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar6 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar6))
		{
			Function_288(&Var4, bVar0);
			vVar1 = { StackVal, StackVal, Function_288(&Var4, bVar0) };
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vParam1, vVar1, StackVal) };
			vVar1.f_4 = (vVar1.y + 2.0f);
			Function_287(StackVal, StackVal, StackVal, bVar6, vVar1, 1, 1, 1);
			PRINTSTRING("TELEPORT_SQUAD_IN_FORMATION - Teleporting squad actor ");
			PRINTINT(bVar0);
			PRINTSTRING(" to ");
			PRINTVECTOR(vVar1);
			PRINTNL();
			SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(bVar6), 5.0f, false, 1092616192);
		}
		bVar0++;
	}
}

void Function_287(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0xD00B / 53259
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

vector3 Function_288(var uParam0, bool bParam1) //Position: 0xD0C4 / 53444
{
	vector3 vVar0;
	
	if (!Function_289(uParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return 0.0f, 0.0f, 0.0f;
	}
	if (bParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return 0.0f, 0.0f, 0.0f;
	}
	if (bParam1 >= (GET_NUM_FORMATION_LOCATIONS(*uParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(*uParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(*uParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return 0.0f, 0.0f, 0.0f;
	}
	GET_FORMATION_LOCATION(*uParam0, bParam1, &vVar0);
	vVar0.x = (StackVal * vVar0.x);
	vVar0.f_4 = (StackVal * vVar0.y);
	vVar0.f_8 = (StackVal * vVar0.z);
	return StackVal, StackVal, vVar0;
}

bool Function_289(int iParam0) //Position: 0xD205 / 53765
{
	if (!IS_OBJECT_VALID(*iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(*iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_290(var uParam0, int iParam1) //Position: 0xD227 / 53799
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

void Function_291(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD240 / 53824
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam1))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				Function_292(bParam0, bVar1, bParam2, bParam3, TO_FLOAT(bVar0));
			}
			bVar0++;
		}
	}
}

void Function_292(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xD287 / 53895
{
	bool bVar0;
	char* cVar1[64];
	var uVar17;
	vector3 vVar20;
	var uVar23;
	vector3 vVar26;
	var uVar29;
	vector3 vVar32;
	bool bVar35;
	
	bVar0 = FLOOR((RAND_FLOAT_RANGE(0.0f, 200000.0f) / 100000.0f));
	strcpy(&cVar1, "Tasking Footsoldier to go to vol: ", 64);
	stradd(&cVar1, INT_TO_STRING(bVar0), 64);
	if (bParam0)
	{
		SET_ACTOR_STAY_WITHIN_VOLUME(bParam1, (*&Local_4 + 916)[2], 4, true);
		GET_VOLUME_CENTER((*&Local_4 + 916)[2], &uVar17);
		FIND_GROUND_INTERSECTION(&uVar17, 20.0f, &vVar20, &uVar23);
		if (bParam2)
		{
			vVar26.x = RAND_FLOAT_RANGE(-5.0f, 5.0f);
			vVar26.f_8 = RAND_FLOAT_RANGE(-5.0f, 5.0f);
			vVar32 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar26, vVar20, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar32, 10.0f, &uVar29, &uVar23);
			TELEPORT_ACTOR(bParam1, &uVar29, 1, 1, 1);
			Function_279(bParam1, Global_34573);
		}
	}
	else
	{
		SET_ACTOR_STAY_WITHIN_VOLUME(bParam1, (*&Local_4 + 916)[1], 4, true);
		GET_VOLUME_CENTER((*&Local_4 + 916)[1], &uVar17);
		FIND_GROUND_INTERSECTION(&uVar17, 20.0f, &vVar20, &uVar23);
		if (bParam2)
		{
			vVar26.x = RAND_FLOAT_RANGE(-5.0f, 5.0f);
			vVar26.f_8 = RAND_FLOAT_RANGE(-5.0f, 5.0f);
			vVar32 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar26, vVar20, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar32, 10.0f, &uVar29, &uVar23);
			TELEPORT_ACTOR(bParam1, &uVar29, 1, 1, 1);
			Function_279(bParam1, Global_34573);
		}
	}
	if (bParam2)
	{
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bParam1, -1.0f);
	}
	else
	{
		bVar35 = TASK_SEQUENCE_OPEN();
		TASK_DRAW_HOLSTER_WEAPON(false, 1);
		if (IS_OBJECT_VALID(bParam3))
		{
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bParam1, bParam3, 4, 1, 0, 0, bParam4);
		}
		vVar26.x = RAND_FLOAT_RANGE(-5.0f, 5.0f);
		vVar26.f_8 = RAND_FLOAT_RANGE(-5.0f, 5.0f);
		vVar32 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar26, vVar20, StackVal) };
		FIND_GROUND_INTERSECTION(&vVar32, 10.0f, &uVar29, &uVar23);
		TASK_GO_TO_COORD(false, &uVar29, 4);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bParam1, bVar35);
		TASK_SEQUENCE_RELEASE(bVar35, 1);
	}
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bParam1, 0);
	if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam1)))
	{
		ADD_BLIP_FOR_ACTOR(bParam1, 322, 0, 2, 0);
	}
	SET_CRIPPLE_ENABLE(bParam1, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam1, Global_34573, true);
	GIVE_WEAPON_TO_ACTOR(bParam1, 42, false, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bParam1, 41, false, 1, 1);
	SET_ACTOR_VISION_XRAY(bParam1, true);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam1, (*&Local_4 + 916)[3], 2, 1);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(bParam1, (*&Local_4 + 916)[6], 2, 1);
	DECOR_SET_BOOL(bParam1, "retasked", true);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam1, 15, true);
	SET_ACTOR_UPDATE_PRIORITY(bParam1, 2);
	SET_ACTOR_FROZEN_AFTER_CORPSIFY(bParam1, 1);
}

void Function_293(bool bParam0) //Position: 0xD4D8 / 54488
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

int Function_294() //Position: 0xD50A / 54538
{
	switch (bLocal_915)
	{
		case 0x00000000:
			if (IS_ACTOR_VALID(bLocal_1128))
			{
				DESTROY_ACTOR(bLocal_1128);
			}
			Function_303(2, 1, 0, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			if (!UI_ISACTIVE("nCutscenes"))
			{
				UI_PUSH("nCutscenes");
			}
			if (!Global_3418)
			{
			}
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && IS_OBJECT_VALID(bLocal_1129)) && !DECOR_CHECK_EXIST(bLocal_805, "snappedplayer02"))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_1129), true);
				SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_1129, "GatlingShoot", true, 0, 0);
				Global_3418 = 1;
				if (!SQUAD_IS_VALID(Local_4.f_628))
				{
					Function_302();
				}
				Function_297(Local_4.f_628, Local_4.f_2352);
				Function_284(Local_4.f_628, 0);
				Function_213(Local_4.f_660);
				DECOR_SET_BOOL(bLocal_805, "snappedplayer02", true);
			}
			if ((!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_908.f_16), false)) || HUD_IS_FADED())
			{
				if (IS_OBJECT_VALID(Local_908.f_16))
				{
					DECOR_REMOVE(Global_34573, "__CameraReady");
					DECOR_REMOVE(Global_34573, "__CameraGo");
					if (IS_OBJECT_VALID(Local_908.f_16))
					{
						DESTROY_OBJECT(Local_908.f_16);
					}
				}
				Function_213(Local_4.f_660);
				TASK_OVERRIDE_CLEAR_POSTURE(bLocal_919);
				GIVE_WEAPON_TO_ACTOR(bLocal_919, 4, false, 1, 1);
				SET_DRAW_ACTOR(bLocal_1127, true);
				AI_STOP_IGNORING_ACTORS();
				Function_303(2, 1, 0, 1, 1, 1, 0, 1, 1, 1);
				return 1;
			}
			break;
		
		case 0x00000002:
			AI_STOP_IGNORING_ACTORS();
			Function_303(2, 1, 0, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000003:
			if (!UI_ISACTIVE("nCutscenes"))
			{
				UI_PUSH("nCutscenes");
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !HUD_IS_FADED())
			{
				if (!DECOR_CHECK_EXIST(bLocal_805, "snappedplayer04"))
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					TASK_CLEAR(Global_34573);
					if (!SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_1129, "GatlingShoot", true, 0, 1))
					{
					}
					if (!IS_OBJECT_VALID(bLocal_1129))
					{
					}
					Global_3418 = 1;
					DECOR_SET_BOOL(bLocal_805, "snappedplayer04", true);
				}
				else if (!GET_CURRENT_GRINGO(Global_34573) != GET_GRINGO_FROM_OBJECT(bLocal_1129))
				{
					if (!SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_1129, "GatlingShoot", true, 0, 1))
					{
					}
				}
			}
			if ((!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_908.f_16), false)) || HUD_IS_FADED())
			{
				if (IS_OBJECT_VALID(Local_908.f_16))
				{
					DECOR_REMOVE(Global_34573, "__CameraReady");
					DECOR_REMOVE(Global_34573, "__CameraGo");
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(Local_908.f_16))
					{
						DESTROY_OBJECT(Local_908.f_16);
					}
				}
				bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "guardTowerProps", 7);
				if (IS_DOOR_VALID(bLocal_1175))
				{
					SET_DRAW_OBJECT(bLocal_1175, 1);
				}
				bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "guardTowerProps", 8);
				if (IS_DOOR_VALID(bLocal_1175))
				{
					SET_DRAW_OBJECT(bLocal_1175, 1);
				}
				if (SQUAD_IS_VALID(Local_4.f_696))
				{
					Function_295(Local_4.f_696, 0);
				}
				if (SQUAD_IS_VALID(Local_4.f_704))
				{
					Function_295(Local_4.f_704, 0);
				}
				AI_STOP_IGNORING_ACTORS();
				Function_303(2, 1, 0, 0, 1, 1, 0, 1, 1, 1);
				return 1;
			}
			break;
		
		case 0x00000065:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "guardTowerProps", 7);
			if (IS_DOOR_VALID(bLocal_1175))
			{
				SET_DRAW_OBJECT(bLocal_1175, 1);
			}
			bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "guardTowerProps", 8);
			if (IS_DOOR_VALID(bLocal_1175))
			{
				SET_DRAW_OBJECT(bLocal_1175, 1);
			}
			Function_303(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_303(2, 0, 1, 0, 1, 1, 0, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_295(bool bParam0, bool bParam1) //Position: 0xD966 / 55654
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
				}
				ACTOR_SET_GRABBED_BY_CUTSCENE(bVar1, bParam1);
				if (IS_ACTOR_VALID(GET_MOUNT(bVar1)))
				{
					ACTOR_SET_GRABBED_BY_CUTSCENE(GET_MOUNT(bVar1), bParam1);
				}
			}
			bVar0++;
		}
	}
	return;
}

bool Function_296(int iParam0, int iParam1, char* cParam2, int iParam3) //Position: 0xD9BF / 55743
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
	iParam1 = iParam1;
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

void Function_297(bool bParam0, bool bParam1) //Position: 0xDA5B / 55899
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				bVar2 = false;
				Function_282(bVar1);
				bVar3 = Function_301(StackVal, StackVal, bParam1, Function_282(bVar1), &bVar2);
				if (IS_OBJECT_VALID(bVar3))
				{
					Function_229(bVar3);
					vVar4 = { StackVal, StackVal, Function_229(bVar3) };
					bVar7 = GET_OBJECT_HEADING(bVar3);
					bVar8 = FIND_NEAREST_COVER_LOCATION(&vVar4, 2.0f, bVar7, 90.0f, 7);
					if (!IS_COVER_LOCATION_VALID(bVar8))
					{
						Function_300(bVar3);
						bVar8 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(bLocal_805, Function_53(), vVar4, Function_300(bVar3), 4));
					}
					SET_ACTOR_MAX_HEALTH(bVar1, 24.0f);
					Function_298(bVar1, &bParam0, bVar8, 0, 0, 0);
					DECOR_SET_INT(bVar1, "nindexused", bVar2);
					DECOR_SET_BOOL(bVar3, "bUsed", true);
					DECOR_SET_INT(bVar1, "iNumMovedUp", 3);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_298(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xDB44 / 56132
{
	bool bVar0;
	var uVar1;
	
	TASK_CLEAR(bParam0);
	SET_ACTOR_FACTION(bParam0, 19);
	GIVE_WEAPON_TO_ACTOR(bParam0, 40, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bParam0, 39, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bParam0, 42, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bParam0, 41, 0,5f, 1, 1);
	SET_CRIPPLE_ENABLE(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 15, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, false);
	SET_ACTOR_ALLOW_DISARM(bParam0, false);
	SET_ACTOR_ONE_SHOT_DEATH(bParam0, bParam3);
	SET_CRIPPLE_ENABLE(bParam0, 0);
	SET_ACTOR_ALLOW_DISARM(bParam0, false);
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, false);
	SET_ACTOR_VISION_XRAY(bParam0, true);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 50.0f, 1);
	SET_ACTOR_STAY_WITHIN_VOLUME(bParam0, (*&Local_4 + 868)[0], 2, true);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bParam0, 0);
	DECOR_SET_INT(bParam0, "AiCoverExpose", true);
	SET_ACTOR_UPDATE_PRIORITY(bParam0, false);
	MEMORY_CONSIDER_AS_ENEMY(bParam0, Global_34573);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, false);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_STAND_STILL(false, bParam5, 0, 0);
	if (IS_OBJECT_VALID(bParam4))
	{
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, bParam4, 3, 0, 0, 1, false);
	}
	GET_COVER_LOCATION_BASE_POSITION(bParam2, &uVar1);
	TASK_SHOOT_ENEMIES_FROM_COVER(false, bParam2, -1.0f, 1086324736);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	ADD_BLIP_FOR_ACTOR(bParam0, 322, 0, 2, 0);
	TASK_PRIORITY_SET(bParam0, true);
	if (SQUAD_IS_VALID(*uParam1))
	{
		if (!Function_299(bParam0, *uParam1, 1))
		{
			SQUAD_JOIN(bParam0, *uParam1);
		}
	}
}

bool Function_299(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDC9A / 56474
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

vector3 Function_300(bool bParam0) //Position: 0xDCDA / 56538
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

var Function_301(bool bParam0, vector3 vParam1, var uParam4) //Position: 0xDD01 / 56577
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	
	if (IS_OBJECTSET_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(bParam0))
		{
			bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0);
			if (IS_OBJECT_VALID(bVar2))
			{
				if (!DECOR_CHECK_EXIST(bVar2, "bUsed"))
				{
					Function_229(bVar2);
					vVar3 = { StackVal, StackVal, Function_229(bVar2) };
					if (!IS_OBJECT_VALID(bVar1))
					{
						bVar1 = bVar2;
						*uParam4 = bVar0;
					}
					else
					{
						Function_229(bVar1);
						Function_229(bVar2);
						if (VDIST(Function_229(bVar1), vParam1) < VDIST(Function_229(bVar2), vParam1))
						{
							bVar1 = bVar2;
							*uParam4 = bVar0;
						}
					}
				}
			}
			bVar0++;
		}
		return bVar1;
	}
	return "";
}

void Function_302() //Position: 0xDD93 / 56723
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_628 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Guards01"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_01_01", 672, -2696,401f, 67,26275f, 3500,725f, 0.0f, -132,2131f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_628);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_01_02", 670, -2696,715f, 67,26273f, 3492.0f, 0.0f, 228,7678f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_628);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_01_03", 481, -2692.0f, 67,26276f, 3492,381f, 0.0f, 188,026f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_628);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_01_04", 480, -2698,769f, 67,26274f, 3492,313f, -0,5629327f, 224,566f, 0,8072823f);
	SQUAD_JOIN(bVar0, Local_4.f_628);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_01_05", 399, -2704,89f, 67,26273f, 3496,655f, -172,6628f, -46,20323f, 169,7913f);
	SQUAD_JOIN(bVar0, Local_4.f_628);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_01_06", 397, -2702,819f, 67,26274f, 3494,484f, 179,4371f, -44,56599f, -179,1927f);
	SQUAD_JOIN(bVar0, Local_4.f_628);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_01_07", 668, -2703,088f, 67,26274f, 3487,658f, 0.0f, 223,9011f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_628);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_01_08", 673, -2696.0f, 67,26273f, 3484,999f, 0.0f, 207,3367f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_628);
	return;
}

void Function_303(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0xDF91 / 57233
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
		Function_233();
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
	Function_262(iParam9);
}

int Function_304() //Position: 0xE081 / 57473
{
	switch (bLocal_915)
	{
		case 0x00000000:
			SET_ACTOR_IN_VEHICLE(Global_34573, bLocal_1127, 2);
			SET_GAME_CAMERA_CURVE_OVERRIDE(4, "fort01_backofwagon");
			if (!IS_ACTOR_RIDING_VEHICLE(bLocal_919))
			{
				SET_ACTOR_IN_VEHICLE(bLocal_919, bLocal_1127, false);
			}
			HIDE_PHYSINST(GET_PHYSINST_FROM_ACTOR(bLocal_1128));
			return 1;
			break;
		
		case 0x00000001:
			if (IS_OBJECT_VALID(Local_908.f_16))
			{
				DESTROY_OBJECT(Local_908.f_16);
			}
			Local_908.f_16 = Function_340(Local_4, 0, 1, 0, 0);
			Global_3418 = 0;
			Function_351(bLocal_1125, (*&Local_4 + 1028)[5], 1, 1, 1);
			TASK_STAND_STILL(bLocal_1125, -1.0f, 0, 0);
			Function_351(bLocal_919, (*&Local_4 + 1388)[0], 1, 1, 1);
			ACTOR_START_FORCE_HOLSTER(bLocal_919, 0, 0);
			DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_919);
			TASK_OVERRIDE_SET_POSTURE(bLocal_919, true);
			TASK_CROUCH(bLocal_919, -1.0f);
			return 1;
			break;
		
		case 0x00000002:
			MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
			Function_351(Global_34573, (*&Local_4 + 1080)[1], 1, 1, 0);
			Function_351(bLocal_919, (*&Local_4 + 1080)[3], 0, 1, 1);
			Function_351(bLocal_1125, (*&Local_4 + 1080)[5], 0, 1, 1);
			Function_351(bLocal_1126, (*&Local_4 + 1080)[7], 1, 1, 1);
			Function_351((*&Local_4 + 552)[02], (*&Local_4 + 1080)[11], 0, 1, 1);
			Function_351((*&Local_4 + 552)[12], (*&Local_4 + 1080)[12], 0, 1, 1);
			Function_351((*&Local_4 + 552)[22], (*&Local_4 + 1080)[13], 0, 1, 1);
			if (IS_ACTOR_VALID(bLocal_1127))
			{
				CUTSCENE_MANAGER_SHOW_ACTOR(bLocal_1127);
			}
			if (IS_OBJECT_VALID(Local_1182.f_40))
			{
				SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_1182.f_40));
			}
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			SQUAD_MAKE_EMPTY(Local_4.f_580);
			SQUAD_JOIN(bLocal_1126, Local_4.f_580);
			SQUAD_JOIN((*&Local_4 + 552)[02], Local_4.f_580);
			SQUAD_JOIN((*&Local_4 + 552)[12], Local_4.f_580);
			SQUAD_JOIN((*&Local_4 + 552)[22], Local_4.f_580);
			SQUAD_JOIN(bLocal_1125, Local_4.f_580);
			Function_337(Local_4.f_580, &Local_4 + 1400, 2.0f, 75.0f, 7, Local_4.f_3040, 0);
			Function_336(Local_4.f_580, 1);
			Function_335(Local_4.f_660, 0);
			Function_334(Local_4.f_580, 16, 1);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_1125, 13, false);
			ACTOR_POP_NEXT_GAIT(bLocal_1125, 3, false);
			ACTOR_POP_NEXT_GAIT(bLocal_1126, 3, false);
			ACTOR_POP_NEXT_GAIT((*&Local_4 + 552)[02], 3, false);
			ACTOR_POP_NEXT_GAIT((*&Local_4 + 552)[12], 3, false);
			ACTOR_POP_NEXT_GAIT((*&Local_4 + 552)[22], 3, false);
			return 1;
			break;
		
		case 0x00000003:
			Local_908.f_16 = Function_323(Local_4, 0, Global_34573, 1, 0, 0);
			if (IS_OBJECT_VALID(Local_908.f_16))
			{
			}
			CUTSCENEOBJECT_SET_RECENTER_GAMECAM(Local_908.f_16, 1);
			DECOR_SET_BOOL(Global_34573, "__CameraReady", true);
			Function_351(bLocal_1125, (*&Local_4 + 1156)[8], 1, 1, 1);
			Function_305((*&Local_4 + 1948)[4]);
			STOP_VEHICLE(bLocal_1127);
			SET_OBJECT_ANIMATOR_NODE(bLocal_1138, "/global/close_wagon/wagon/open");
			Global_3418 = 0;
			if (SQUAD_IS_VALID(Local_4.f_696))
			{
				SQUAD_GOALS_CLEAR(Local_4.f_696);
				Function_293(Local_4.f_696);
				Function_291(1, Local_4.f_696, 0, 0);
				Function_285(Local_4.f_696, 10.0f);
				Function_284(Local_4.f_696, 0);
			}
			if (SQUAD_IS_VALID(Local_4.f_704))
			{
				Function_278(Local_4.f_704, Local_4.f_3108, 0, 1);
			}
			AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000065:
			MAKE_ACTOR_READY_FOR_ACTION(Global_34573, 1);
			Function_351(Global_34573, (*&Local_4 + 1260)[1], 1, 1, 1);
			ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_305(bool bParam0) //Position: 0xE42C / 58412
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bLocal_1127))
	{
		Function_322(bParam0);
		Function_300(bParam0);
		bLocal_1127 = Function_318(StackVal, StackVal, StackVal, StackVal, bLocal_805, "ASTAGECOACH01", 1198, 976, Function_322(bParam0), Function_300(bParam0), 1, 976, 976, 976, 4);
	}
	else
	{
		Function_351(bLocal_1127, bParam0, 1, 1, 1);
	}
	bVar0 = GET_DRAFT_ACTOR(false, bLocal_1127);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0.0f);
	}
	bVar0 = GET_DRAFT_ACTOR(true, bLocal_1127);
	if (IS_ACTOR_VALID(bVar0))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0.0f);
	}
	SET_ACTOR_UPDATE_PRIORITY(bLocal_1127, false);
	ENABLE_VEHICLE_SEAT(bLocal_1127, false, 0);
	ENABLE_VEHICLE_SEAT(bLocal_1127, true, 0);
	if (bLocal_915 == 0)
	{
		ENABLE_VEHICLE_SEAT(bLocal_1127, 2, 1);
	}
	else
	{
		ENABLE_VEHICLE_SEAT(bLocal_1127, 2, 0);
	}
	SET_ALLOW_JACK(bLocal_1127, 0);
	SET_WAGON_TO_WAGON_JACK_ENABLE(0, 0);
	Function_317(bLocal_1127);
	if (!IS_OBJECT_VALID(bLocal_1138))
	{
		bLocal_1138 = CREATE_OBJECT_ANIMATOR_ON_OBJECT(bLocal_1127, "close_wagon", "$close_wagon", "close_wagon/wagon/close");
	}
	if (bLocal_915 != 1 || bLocal_915 != 3)
	{
		SET_OBJECT_ANIMATOR_NODE(bLocal_1138, "/global/close_wagon/wagon/open");
	}
	if (!IS_OBJECT_VALID(Local_1182.f_40))
	{
		Function_306(bLocal_1127);
	}
	SET_OBJECT_COLLIDE_WITH_OBJECT(Local_1182.f_40, bLocal_1127, false);
	if (!IS_OBJECT_VALID(bLocal_1129))
	{
		bLocal_1129 = FIND_OBJECT_IN_OBJECT(Local_1182.f_40, "shootBabyShoot");
		SET_OBJECT_COLLIDE_WITH_OBJECT(Global_34573, Local_1182.f_40, false);
	}
	return;
}

int Function_306(int iParam0) //Position: 0xE5C4 / 58820
{
	var uVar0;
	
	Function_316(3, 2);
	uVar0 = uVar0;
	Function_314(&Local_1182 + 4, "p_gen_gatlingGun01x", 0, 0);
	Function_314(&Local_1182 + 4, "$/content/scripting/gringo/simplegringo/close_wagon", 1, 0);
	if (!Function_308(&Local_1182 + 4))
	{
		return 0;
	}
	Local_1182 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_53()));
	Local_1182.f_32 = CREATE_POINT_IN_LAYOUT(Local_1182, "point_objective", 0.0f, 1,778774f, 1,982979f, 0.0f, 0.0f, 0.0f);
	Local_1182.f_36 = CREATE_GRINGO_IN_LAYOUT(Local_1182, "gringo_close_wagon", "close_wagon", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	Local_1182.f_40 = CREATE_PROP_IN_LAYOUT(Local_1182, "gatlingGun01x0", "p_gen_gatlingGun01x", 0,0001175492f, 1,19679f, 0,5939018f, 0.0f, 180.0f, 0.0f, 1);
	Function_307(Local_1182, iParam0);
	return 1;
}

void Function_307(bool bParam0, bool bParam1) //Position: 0xE700 / 59136
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

bool Function_308(bool bParam0) //Position: 0xE742 / 59202
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_313();
	iVar1 = 0;
	if (!Function_173(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_312(bParam0[iVar03], 8);
		}
		else if (Function_311())
		{
			iVar1 = 1;
			Function_312(bParam0[iVar03], 8);
		}
		Function_312(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_173(bParam0[iVar03], 4))
		{
			if (!Function_173(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_173(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_173(bParam0[03], 8) || iVar1));
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
				Function_312(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_173(bParam0[iVar03], 4))
		{
			if (!Function_173(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_312(bParam0[iVar03], 2);
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
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_312(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_312(bParam0[iVar03], 2);
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
	Function_309();
	return 1;
}

void Function_309() //Position: 0xEABD / 60093
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

bool Function_310(int iParam0) //Position: 0xEAFD / 60157
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_311() //Position: 0xEB19 / 60185
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

void Function_312(var uParam0, int iParam1) //Position: 0xEB44 / 60228
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_313() //Position: 0xEB55 / 60245
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

var Function_314(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xEB97 / 60311
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_315(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_312(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_315(var uParam0, int iParam1, int iParam2) //Position: 0xEBCF / 60367
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_173(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_312(uParam0[iVar03], 4);
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

void Function_316(int iParam0, int iParam1) //Position: 0xEC93 / 60563
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

void Function_317(bool bParam0) //Position: 0xECDC / 60636
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

bool Function_318(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0xED4E / 60750
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
			if (Function_321(Global_30750[6], 4, 23, 0) && iParam10)
			{
				bVar16 = Function_320(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_319(bVar16, &iVar1))
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

bool Function_319(int iParam0, int iParam1) //Position: 0xEF82 / 61314
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

var Function_320(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0xEFB4 / 61364
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_321(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xEFCC / 61388
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

vector3 Function_322(bool bParam0) //Position: 0xEFF3 / 61427
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

var Function_323(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xF05F / 61535
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 9, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "fort01_cutscene04", 9, 1);
	}
	Function_324(&bVar0, uParam2);
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

void Function_324(var uParam0, char* cParam1) //Position: 0xF0E0 / 61664
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_333(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_332(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_331(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 3);
	Function_330(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 4);
	Function_329(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 5);
	Function_328(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 6);
	Function_327(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 7);
	Function_326(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 8);
	Function_325(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(*uParam0, 0, cParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*uParam0, 5, 6, 8.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*uParam0, 7, 8, 2.0f, 2, 0);
	return;
}

void Function_325(int iParam0) //Position: 0xF1AA / 61866
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 36,43893f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2638,33f, 69,69411f, 3407,017f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,018149f, 2,050266f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_326(int iParam0) //Position: 0xF20D / 61965
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 36,43893f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2637,923f, 69,70944f, 3406,802f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,051611f, 2,052002f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_327(int iParam0) //Position: 0xF270 / 62064
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 40,10753f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2656,635f, 73,10036f, 3413,487f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,071515f, -0,56514f, -3,1E-05f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_328(int iParam0) //Position: 0xF2D7 / 62167
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 40,10753f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2657,521f, 73,21847f, 3414,878f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,071515f, -0,56514f, -3,1E-05f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_329(int iParam0) //Position: 0xF33E / 62270
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 13f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2663,96f, 67,94399f, 3431,04f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,115979f, -0,727173f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_330(int iParam0) //Position: 0xF3A1 / 62369
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 14.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2659,938f, 67,8796f, 3427,54f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,19524f, 2,39214f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_331(int iParam0) //Position: 0xF404 / 62468
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 13f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2663,896f, 67,91018f, 3431,107f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,139338f, -0,640988f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_332(int iParam0) //Position: 0xF467 / 62567
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 14.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2659,938f, 67,8796f, 3427,54f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,19524f, 2,39214f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_333(int iParam0) //Position: 0xF4CA / 62666
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2658,992f, 68,52949f, 3426,915f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,578425f, 2,392665f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_334(bool bParam0, int iParam1, bool bParam2) //Position: 0xF52D / 62765
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

void Function_335(bool bParam0, int iParam1) //Position: 0xF577 / 62839
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
				SET_CRIPPLE_ENABLE(bVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_336(bool bParam0, bool bParam1) //Position: 0xF5BD / 62909
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

void Function_337(bool bParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6) //Position: 0xF5FE / 62974
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		SQUAD_GOALS_CLEAR(bParam0);
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam1);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam5 == Local_4.f_3040)
				{
					if (bVar1 != bLocal_1126 || bVar1 != (*&Local_4 + 552)[02])
					{
						Function_338(bVar1, bVar2, bParam2, bParam3, iParam4, bVar0, Local_4.f_3116, 0, 0);
					}
					else
					{
						Function_338(bVar1, bVar2, bParam2, bParam3, iParam4, bVar0, bParam5, 0, 0);
					}
				}
				else
				{
					Function_338(bVar1, bVar2, bParam2, bParam3, iParam4, bVar0, bParam5, 0, bParam6);
				}
			}
			bVar0++;
		}
	}
}

void Function_338(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0xF6AE / 63150
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar4;
	struct<9> Var7;
	
	bLocal_1137 = TASK_SEQUENCE_OPEN();
	if ((bParam0 != bLocal_1125 && iLocal_916 > 8) && !DECOR_CHECK_EXIST(bLocal_805, "cutscene03finish"))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_1125, 0);
		SET_ANIM_SET_FOR_ACTOR(bLocal_1125, "stand_rowdy", 0);
		Function_282(bLocal_1125);
		vVar0 = { StackVal, StackVal, Function_282(bLocal_1125) };
		uVar3 = Function_339(bLocal_1125);
		TASK_ACTION_PERFORM_AT_POSITION(0, "stand_rowdy", &vVar0, uVar3, 2.0f, 1, 3212836864);
		TASK_DRAW_HOLSTER_WEAPON(bParam0, 1);
		TASK_FOLLOW_OBJECT_ALONG_PATH(false, Global_34573, Local_4.f_3116, 3.0f, 1, 0);
	}
	else if (IS_OBJECT_VALID(bParam6))
	{
		ACTOR_PUT_WEAPON_IN_HAND(bParam0, 40, 1);
		if (bParam7)
		{
			TASK_FOLLOW_PATH(false, bParam6, 4, 1, 0, 1, false);
		}
		else
		{
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, bParam6, 4, 1, 0, 1, false);
		}
	}
	if (IS_OBJECT_VALID(bParam1))
	{
		if (bParam8)
		{
			Function_351(bParam0, bParam1, 1, 1, 1);
		}
		else
		{
			Function_229(bParam1);
			vVar4 = { StackVal, StackVal, Function_229(bParam1) };
			TASK_GO_NEAR_COORD(false, &vVar4, 2.0f, 4);
		}
		Function_229(bParam1);
		vVar7 = { StackVal, StackVal, Function_229(bParam1) };
		bVar10 = GET_OBJECT_HEADING(bParam1);
		bVar11 = FIND_NEAREST_COVER_LOCATION(&vVar7, bParam2, bVar10, bParam3, iParam4);
		if (IS_COVER_LOCATION_VALID(bVar11))
		{
			TASK_SHOOT_ENEMIES_FROM_COVER(false, bVar11, -1.0f, 1086324736);
		}
		else
		{
			Function_300(bParam1);
			bVar11 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(bLocal_805, Function_53(), vVar7, Function_300(bParam1), 4));
			TASK_SHOOT_ENEMIES_FROM_COVER(false, bVar11, -1.0f, 1086324736);
		}
		DECOR_SET_FLOAT(bParam0, "x_vector", vVar7.x);
		DECOR_SET_FLOAT(bParam0, "y_vector", vVar7.y);
		DECOR_SET_FLOAT(bParam0, "z_vector", vVar7.z);
		DECOR_SET_INT(bParam0, "ncoverused", bParam5);
		DECOR_SET_BOOL(bParam1, "used", true);
	}
	else
	{
		TASK_GO_NEAR_ACTOR(0, Global_34573, 3.0f, 2);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bParam0, bLocal_1137);
	TASK_SEQUENCE_RELEASE(bLocal_1137, 1);
	TASK_PRIORITY_SET(bParam0, true);
	GIVE_WEAPON_TO_ACTOR(bParam0, 40, false, 1, 1);
	GIVE_WEAPON_TO_ACTOR(bParam0, 41, false, 1, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bParam0, 0);
}

var Function_339(bool bParam0) //Position: 0xF89C / 63644
{
	return GET_HEADING(bParam0);
}

var Function_340(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xF8A7 / 63655
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Fort01_Seth", 2, 1);
	}
	Function_341(&bVar0);
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

void Function_341(int iParam0) //Position: 0xF91E / 63774
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_343(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_342(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 3.0f, 0, 0);
	return;
}

void Function_342(int iParam0) //Position: 0xF953 / 63827
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 37,32643f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2691,016f, 67,94894f, 3499,56f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,01283f, -1,907765f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_343(var uParam0) //Position: 0xF9BD / 63933
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 37,32576f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -2691,017f, 67,95568f, 3498,6f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, -0,012834f, -2,216056f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

int Function_344() //Position: 0xFA20 / 64032
{
	switch (bLocal_915)
	{
		case 0x00000000:
			if (!DECOR_CHECK_EXIST(bLocal_1127, "cs01hide") && (HUD_IS_FADING() || !HUD_IS_FADED()))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_1127);
				CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_919);
				DECOR_SET_BOOL(bLocal_1127, "cs01hide", true);
			}
			return 1;
			break;
		
		case 0x00000001:
			if (SQUAD_IS_VALID(Local_4.f_624))
			{
				Function_210(&Local_4 + 624);
				DESTROY_OBJECT(Local_4.f_624);
			}
			if (!DECOR_CHECK_EXIST(bLocal_1127, "cs02hide") && (HUD_IS_FADING() || !HUD_IS_FADED()))
			{
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(Global_34573));
				}
				if (IS_ACTOR_VALID(bLocal_1127))
				{
					SET_ACTOR_SPEED(bLocal_1127, 0.0f);
					ACTOR_RESET_ANIMS(bLocal_1127, 1);
					RESET_ACTOR_GAITS(bLocal_1127, 0);
					if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(false, bLocal_1127)))
					{
						SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, bLocal_1127), 0.0f);
						ACTOR_RESET_ANIMS(GET_DRAFT_ACTOR(false, bLocal_1127), 1);
						RESET_ACTOR_GAITS(GET_DRAFT_ACTOR(false, bLocal_1127), 0);
						AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(false, bLocal_1127), 5);
					}
					if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(true, bLocal_1127)))
					{
						SET_ACTOR_SPEED(GET_DRAFT_ACTOR(true, bLocal_1127), 0.0f);
						ACTOR_RESET_ANIMS(GET_DRAFT_ACTOR(true, bLocal_1127), 1);
						RESET_ACTOR_GAITS(GET_DRAFT_ACTOR(true, bLocal_1127), 0);
						AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(true, bLocal_1127), 5);
					}
					Function_351(bLocal_1127, (*&Local_4 + 1948)[2], 1, 1, 1);
					if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(false, bLocal_1127)))
					{
						CUTSCENE_MANAGER_HIDE_ACTOR(GET_DRAFT_ACTOR(false, bLocal_1127));
					}
					if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(true, bLocal_1127)))
					{
						CUTSCENE_MANAGER_HIDE_ACTOR(GET_DRAFT_ACTOR(true, bLocal_1127));
					}
					SET_OBJECT_ANIMATOR_NODE(bLocal_1138, "/global/close_wagon/wagon/open");
					STOP_VEHICLE(bLocal_1127);
					CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_1127);
				}
				CUTSCENE_MANAGER_HIDE_ACTOR(Global_34573);
				RESET_GAME_CAMERA_CURVE_OVERRIDES();
				DECOR_SET_BOOL(bLocal_1127, "cs02hide", true);
			}
			return 1;
			break;
		
		case 0x00000002:
			if (!DECOR_CHECK_EXIST(bLocal_805, "cs03hide") && (HUD_IS_FADING() || !HUD_IS_FADED()))
			{
				if (IS_ACTOR_VALID(bLocal_1127))
				{
					CUTSCENE_MANAGER_HIDE_ACTOR(bLocal_1127);
					SET_OBJECT_ANIMATOR_NODE(bLocal_1138, "/global/close_wagon/wagon/close");
					SET_OBJECT_ANIMATOR_PHASE(bLocal_1138, 1.0f);
					SET_OBJECT_ANIMATOR_RATE(bLocal_1138, 10.0f);
				}
				if (IS_OBJECT_VALID(Local_1182.f_40))
				{
					HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(Local_1182.f_40));
				}
				CUTSCENE_MANAGER_HIDE_ACTOR(Global_34573);
				DECOR_SET_BOOL(bLocal_805, "cs03hide", true);
			}
			return 1;
			break;
		
		case 0x00000003:
			if ((!DECOR_CHECK_EXIST(bLocal_805, "temp") && !HUD_IS_FADED()) && !HUD_IS_FADING())
			{
				bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "guardTowerProps", 7);
				if (IS_DOOR_VALID(bLocal_1175))
				{
					HIDE_PHYSINST(bLocal_1175);
					SET_DRAW_OBJECT(bLocal_1175, 0);
				}
				bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "guardTowerProps", 8);
				if (IS_DOOR_VALID(bLocal_1175))
				{
					HIDE_PHYSINST(bLocal_1175);
					SET_DRAW_OBJECT(bLocal_1175, 0);
				}
				DECOR_SET_BOOL(bLocal_805, "temp", true);
			}
			break;
		
		case 0x00000065:
			if (IS_ACTOR_VALID((*&Local_4 + 744)[22]))
			{
				DESTROY_ACTOR((*&Local_4 + 744)[22]);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 712)[22]))
			{
				DESTROY_ACTOR((*&Local_4 + 712)[22]);
			}
			return 1;
			break;
	}
	return 1;
}

int Function_345() //Position: 0xFD9A / 64922
{
	switch (bLocal_915)
	{
		case 0x00000000:
			SET_GAME_CAMERA_CURVE_OVERRIDE(4, "fort01_backofwagon");
			return 1;
			break;
		
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000002:
			RESET_GAME_CAMERA_CURVE_OVERRIDES();
			if (iLocal_1172)
			{
				ENABLE_MOVER(Global_34573);
				iLocal_1172 = 0;
				if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(Global_34573)))
				{
					GRINGO_DEACTIVATE(GET_CURRENT_GRINGO(Global_34573));
				}
			}
			Function_229((*&Local_4 + 1404)[4]);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Function_229((*&Local_4 + 1404)[4]), -3.0f, 0);
			return 1;
			break;
		
		case 0x00000003:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			if (SQUAD_IS_VALID(Local_4.f_696))
			{
				Function_295(Local_4.f_696, 1);
			}
			if (SQUAD_IS_VALID(Local_4.f_704))
			{
				Function_295(Local_4.f_704, 1);
			}
			if (IS_ACTOR_VALID(bLocal_1127))
			{
				Function_351(bLocal_1127, (*&Local_4 + 1948)[4], 1, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000065:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "guardTowerProps", 7);
			if (IS_DOOR_VALID(bLocal_1175))
			{
				SET_DRAW_OBJECT(bLocal_1175, 0);
			}
			bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "guardTowerProps", 8);
			if (IS_DOOR_VALID(bLocal_1175))
			{
				SET_DRAW_OBJECT(bLocal_1175, 0);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int Function_346() //Position: 0xFF00 / 65280
{
	switch (bLocal_915)
	{
		case 0x00000000:
			Function_349(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_229((*&Local_4 + 964)[0]);
			Function_347(StackVal, StackVal, bLocal_805, Function_229((*&Local_4 + 964)[0]), &Local_908 + 20, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000001:
			Function_349(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_229((*&Local_4 + 1028)[0]);
			Function_347(StackVal, StackVal, bLocal_805, Function_229((*&Local_4 + 1028)[0]), &Local_908 + 20, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000002:
			Function_349(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_229((*&Local_4 + 1080)[0]);
			Function_347(StackVal, StackVal, bLocal_805, Function_229((*&Local_4 + 1080)[0]), &Local_908 + 20, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000003:
			Function_349(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_229((*&Local_4 + 1156)[0]);
			Function_347(StackVal, StackVal, bLocal_805, Function_229((*&Local_4 + 1156)[0]), &Local_908 + 20, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_349(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_229((*&Local_4 + 1260)[0]);
			Function_347(StackVal, StackVal, bLocal_805, Function_229((*&Local_4 + 1260)[0]), &Local_908 + 20, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_349(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_347(StackVal, StackVal, bLocal_805, Global_34574, &Local_908 + 20, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_347(bool bParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10) //Position: 0x10049 / 65609
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
				Function_348(bVar1, bParam0);
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

void Function_348(bool bParam0, bool bParam1) //Position: 0x102B7 / 66231
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

void Function_349(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x1032C / 66348
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
	Function_233();
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
				Function_282(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_53(), 2, Function_282(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
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
	if ((IS_OBJECT_VALID(Function_350()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_350()));
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
	if (Function_310(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x4000000);
	}
	if (Function_310(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_162(0x8000000);
	}
}

var Function_350() //Position: 0x105D5 / 67029
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

void Function_351(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x10654 / 67156
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

void Function_352(int iParam0) //Position: 0x1075B / 67419
{
	if (!Function_273(iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_181(1, 0, 1);
		}
	}
	return;
}

bool Function_353(bool bParam0) //Position: 0x10776 / 67446
{
	if (!Function_81(bParam0))
	{
		return 1;
	}
	return Function_159(&(Global_29008[bParam0]), 4);
}

bool Function_354(vector3 vParam0, int iParam3, int iParam4, bool bParam5) //Position: 0x10792 / 67474
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

void Function_355() //Position: 0x10822 / 67618
{
	Function_186(47);
	Function_187(256);
	Function_162(2060);
	Function_356(9);
	return;
}

void Function_356(int iParam0) //Position: 0x1083E / 67646
{
	Function_357(&Global_28842, iParam0);
	return;
}

void Function_357(var uParam0, int iParam1) //Position: 0x1084C / 67660
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_358(bool bParam0) //Position: 0x1086F / 67695
{
	Function_359(0, 0x40400000);
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

void Function_359(bool bParam0, float fParam1) //Position: 0x108A3 / 67747
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
	Function_361();
	Function_360();
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

void Function_360() //Position: 0x109A1 / 68001
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_361() //Position: 0x109D3 / 68051
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

void Function_362() //Position: 0x10AD0 / 68304
{
	if (iLocal_916 < 4 && iLocal_916 > 105)
	{
		if (Function_268(&bLocal_1145) < 1.0f)
		{
			Function_456(Local_4.f_692);
			Function_456(Local_4.f_704);
			Function_456(Local_4.f_708);
			Function_455(Local_4.f_692);
			Function_455(Local_4.f_704);
			Function_455(Local_4.f_708);
			Function_455(Local_4.f_696);
			Function_455(Local_4.f_700);
			Function_454();
			Function_214(&bLocal_1145);
		}
		if (IS_OBJECT_VALID(bLocal_1178))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_1178))
			{
				Function_452((*&Local_4 + 712)[22], (*&Local_4 + 712)[02], (*&Local_4 + 712)[12], 1);
				DESTROY_OBJECT(bLocal_1178);
			}
		}
		if (IS_OBJECT_VALID(bLocal_1179))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(bLocal_1179))
			{
				Function_452((*&Local_4 + 744)[22], (*&Local_4 + 744)[02], (*&Local_4 + 744)[12], 2);
				DESTROY_OBJECT(bLocal_1179);
			}
		}
		if (Function_268(&bLocal_1151) < 0,5f)
		{
			if (SQUAD_IS_VALID(Local_4.f_772))
			{
				if (IS_ACTOR_VALID((*&Local_4 + 744)[22]))
				{
					if (DECOR_CHECK_EXIST((*&Local_4 + 744)[22], "ndestroyme"))
					{
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT((*&Local_4 + 744)[22], "ndestroyme")) < 5.0f)
						{
							DESTROY_OBJECT(Local_1217.f_88);
							DESTROY_ACTOR((*&Local_4 + 744)[22]);
						}
					}
					else
					{
						Function_445((*&Local_4 + 744)[22], (*&Local_4 + 744)[02], (*&Local_4 + 744)[12], Local_4.f_3084, &iLocal_1181);
					}
				}
			}
			if (SQUAD_IS_VALID(Local_4.f_740))
			{
				if (IS_ACTOR_VALID((*&Local_4 + 712)[22]))
				{
					if (DECOR_CHECK_EXIST((*&Local_4 + 712)[22], "ndestroyme"))
					{
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT((*&Local_4 + 712)[22], "ndestroyme")) < 5.0f)
						{
							DESTROY_OBJECT(Local_1193.f_88);
							DESTROY_ACTOR((*&Local_4 + 712)[22]);
						}
					}
					else
					{
						Function_445((*&Local_4 + 712)[22], (*&Local_4 + 712)[02], (*&Local_4 + 712)[12], Local_4.f_3088, &iLocal_1180);
					}
				}
			}
		}
		if (iLocal_916 > 10)
		{
			Function_229((*&Local_4 + 1156)[1]);
			Function_441(StackVal, StackVal, "$/cutscene/FORT_01_CS07_SEQ/FORT_01_CS07_SEQ", &uLocal_940, Function_229((*&Local_4 + 1156)[1]), 83850, 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1);
		}
		Function_438();
	}
	switch (iLocal_916)
	{
		case 0x00000000:
			Function_358(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_929[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_355();
				Function_229((*&Local_4 + 1156)[0]);
				bLocal_917 = Function_354(StackVal, StackVal, Function_229((*&Local_4 + 1156)[0]), 0, 1, 1);
				if (!Function_353(bLocal_917))
				{
					Function_352(&Local_806);
				}
				Function_351(Global_34573, (*&Local_4 + 1156)[1], 1, 1, 1);
			}
			Function_214(&bLocal_920);
			iLocal_916 = 1;
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_353(Global_30679[1])) && Function_436())
			{
				Function_214(&bLocal_920);
				iLocal_916 = 2;
			}
			break;
		
		case 0x00000002:
			SET_AUTO_CONVERSATION_LOOK(Global_34573, 0);
			Function_430();
			Function_214(&bLocal_920);
			if (Function_428(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_806, bLocal_915))
			{
				iLocal_916 = 3;
			}
			else
			{
				iLocal_916 = 4;
			}
			Function_228(bLocal_915);
			Function_422(StackVal, StackVal, Function_228(bLocal_915), bLocal_915, Global_30628[3], Function_231(bLocal_915), 3);
			break;
		
		case 0x00000003:
			if (Function_261("$/cutscene/FORT01_CS06/FORT01_CS06", &Local_908, &Local_806, &bLocal_915, 65280, 64922, 79733, 57473, 54538, 51441, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_214(&bLocal_920);
				iLocal_916 = 4;
			}
			break;
		
		case 0x00000004:
			Function_419();
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			if (!iLocal_929[2])
			{
				if (SQUAD_IS_VALID(Local_4.f_696))
				{
					SQUAD_GOALS_CLEAR(Local_4.f_696);
					Function_293(Local_4.f_696);
					Function_286(StackVal, StackVal, StackVal, StackVal, Local_4.f_696, *(&Local_4 + 2040[56]), *(&Local_4 + 2040[56] + 12), 3.0f, 3);
					Function_291(1, Local_4.f_696, 0, 0);
					Function_285(Local_4.f_696, 10.0f);
					Function_284(Local_4.f_696, 1);
				}
				if (SQUAD_IS_VALID(Local_4.f_704))
				{
					GET_PATH_POINT(Local_4.f_3108, (GET_NUM_PATH_POINTS(Local_4.f_3108) - 1), &vLocal_1169);
					Function_283(StackVal, StackVal, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_704, false), vLocal_1169, 1, 1, 1);
					Function_279(GET_MOUNT(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_704, false)), Global_34573);
					GET_PATH_POINT(Local_4.f_3108, (GET_NUM_PATH_POINTS(Local_4.f_3108) - 2), &vLocal_1169);
					Function_283(StackVal, StackVal, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_704, true), vLocal_1169, 1, 1, 1);
					Function_279(GET_MOUNT(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_704, true)), Global_34573);
					GET_PATH_POINT(Local_4.f_3108, (GET_NUM_PATH_POINTS(Local_4.f_3108) - 3), &vLocal_1169);
					Function_283(StackVal, StackVal, SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_704, 2), vLocal_1169, 1, 1, 1);
					Function_279(GET_MOUNT(SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_704, 2)), Global_34573);
					Function_278(Local_4.f_704, Local_4.f_3108, 0, 0);
				}
				Global_3418 = 0;
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_919)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_919));
			}
			if (HUD_IS_FADED())
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				TASK_CLEAR(Global_34573);
				if (!SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_1129, "GatlingShoot", true, 0, 1))
				{
				}
				Global_3418 = 1;
			}
			Function_415();
			DISABLE_CHILD_SECTOR("fom_rightWingProps01x");
			DISABLE_CHILD_SECTOR("fom_courtyardProps01x");
			DISABLE_CHILD_SECTOR("fom_gallowsProps01x");
			DISABLE_CHILD_SECTOR("fom_gallows01x");
			DISABLE_CHILD_SECTOR("fom_guardTowerProps02x");
			DISABLE_CHILD_SECTOR("fom_corral01x");
			DISABLE_CHILD_SECTOR("fom_leftWingProps01x");
			DISABLE_CHILD_SECTOR("fom_corralBreakProps01x");
			DISABLE_CHILD_SECTOR("fom_corralProps01x");
			DISABLE_CHILD_SECTOR("fom_leftWing01x");
			DISABLE_CHILD_SECTOR("fom_gallows01x");
			DISABLE_CHILD_SECTOR("fom_guardTower02x");
			Function_408(&(Local_986[017]), bLocal_919, "Merchant", 0, 0x5f5e100, 1);
			Function_408(&(Local_986[117]), bLocal_1126, "Marshal", 0, 0x5f5e100, 1);
			Function_408(&(Local_986[217]), bLocal_1125, "GraveRobber", 0, 0x5f5e100, 1);
			Function_407(&(Local_986[317]));
			Function_407(&(Local_986[417]));
			Function_407(&(Local_986[517]));
			Function_408(&(Local_986[617]), bLocal_1127, "Wagon", 0, 0x5f5e100, 1);
			Function_215(&bLocal_920, 2.0f);
			iLocal_916 = 5;
			break;
		
		case 0x00000005:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "attached"))
			{
				Global_3418 = 1;
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				AUDIO_MUSIC_SET_MOOD("CAR", 0, 4294967295, 4294967295);
				Function_214(&bLocal_920);
				iLocal_916 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_337(Local_4.f_580, &Local_4 + 1912, 2.0f, 360.0f, 7, 0, 1);
				Function_406(Local_4.f_580);
				Function_284(Local_4.f_580, 1);
				Function_284(Local_4.f_696, 1);
				Function_405();
				Function_214(&bLocal_920);
				iLocal_916 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_268(&bLocal_920) <= 5.0f)
			{
				Function_284(Local_4.f_696, 1);
				Function_404("Fort01_obj07", 7,5f, 1, 2, 0, 0, 0);
				Function_214(&bLocal_920);
				Function_214(&bLocal_923);
				Function_214(&bLocal_926);
				iLocal_916 = 8;
			}
			break;
		
		case 0x00000008:
			Function_395();
			Function_391();
			if (SQUAD_IS_VALID(Local_4.f_692))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_692) >= 0)
				{
					if (IS_ACTOR_VALID(Function_389(Local_4.f_692, Global_34573)))
					{
						Function_282(Function_389(Local_4.f_692, Global_34573));
						STREAMING_LOAD_BOUNDS_EXT(0, Function_282(Function_389(Local_4.f_692, Global_34573)), 20.0f, 1);
					}
				}
			}
			if (((SQUAD_IS_VALID(Local_4.f_692) && SQUAD_IS_VALID(Local_4.f_772)) && !SQUAD_IS_VALID(Local_4.f_700)) && (!IS_ACTOR_ALIVE((*&Local_4 + 744)[12]) || !IS_ACTOR_ALIVE((*&Local_4 + 744)[02])))
			{
				if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_704) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_692)) + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_696)) >= 2 || Function_268(&bLocal_920) <= 90.0f)
				{
					Function_386();
					Function_278(Local_4.f_708, Local_4.f_3112, 0, 1);
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_385())
						{
							Function_384();
						}
						else if (Function_385())
						{
							Function_383();
						}
						else
						{
							Function_382();
						}
					}
					Function_214(&bLocal_1142);
					Function_214(&bLocal_920);
					iLocal_916 = 9;
				}
			}
			break;
		
		case 0x00000009:
			Function_395();
			if (SQUAD_IS_VALID(Local_4.f_692))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_692) >= 0)
				{
					if (IS_ACTOR_VALID(Function_389(Local_4.f_692, Global_34573)))
					{
						Function_282(Function_389(Local_4.f_692, Global_34573));
						STREAMING_LOAD_BOUNDS_EXT(0, Function_282(Function_389(Local_4.f_692, Global_34573)), 20.0f, 1);
					}
				}
			}
			if (SQUAD_IS_VALID(Local_4.f_708))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_708) >= 0)
				{
					if (IS_ACTOR_VALID(Function_389(Local_4.f_708, Global_34573)))
					{
						Function_282(Function_389(Local_4.f_708, Global_34573));
						STREAMING_LOAD_BOUNDS_EXT(3, Function_282(Function_389(Local_4.f_708, Global_34573)), 20.0f, 1);
					}
				}
			}
			if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_708) >= 2 && Function_268(&bLocal_920) <= 15.0f) || Function_268(&bLocal_920) <= 30.0f) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_708) >= 0)
			{
				Function_381();
				SQUAD_GOALS_CLEAR(Local_4.f_700);
				Function_291(1, Local_4.f_700, 0, Local_4.f_3076);
				if (!SQUAD_IS_VALID(Local_4.f_740))
				{
					Function_378();
				}
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_385())
					{
						Function_384();
					}
					else if (Function_385())
					{
						Function_383();
					}
					else
					{
						Function_382();
					}
				}
				Function_214(&bLocal_1142);
				Function_214(&bLocal_920);
				iLocal_916 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_369(&bLocal_926, 60.0f, 200.0f, bLocal_919, "Merchant_return", "Merchant_abandoned", &bLocal_936, 0, 0, 0, 325, 1);
			Function_395();
			if (SQUAD_IS_VALID(Local_4.f_708))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_708) >= 0)
				{
					if (IS_ACTOR_VALID(Function_389(Local_4.f_708, Global_34573)))
					{
						Function_282(Function_389(Local_4.f_708, Global_34573));
						STREAMING_LOAD_BOUNDS_EXT(3, Function_282(Function_389(Local_4.f_708, Global_34573)), 20.0f, 1);
					}
				}
			}
			if (SQUAD_IS_VALID(Local_4.f_700))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_700) >= 0)
				{
					if (IS_ACTOR_VALID(Function_389(Local_4.f_700, Global_34573)))
					{
						Function_282(Function_389(Local_4.f_700, Global_34573));
						STREAMING_LOAD_BOUNDS_EXT(0, Function_282(Function_389(Local_4.f_700, Global_34573)), 20.0f, 1);
					}
				}
			}
			if (!DECOR_CHECK_EXIST(bLocal_805, "finish04"))
			{
				if (Function_367())
				{
					DECOR_SET_FLOAT(bLocal_805, "finish04", GET_CURRENT_GAME_TIME());
					Function_214(&bLocal_920);
				}
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_805, "finish04")) < 2.0f)
			{
				Function_364();
				Function_233();
				Function_214(&bLocal_920);
				iLocal_916 = 105;
			}
			break;
		
		case 0x00000069:
			if (Function_268(&bLocal_920) < 3.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
				Function_214(&bLocal_920);
				iLocal_916 = 106;
			}
			break;
		
		case 0x0000006A:
			if (HUD_IS_FADED())
			{
				Global_3418 = 0;
				if (SQUAD_IS_VALID(Local_4.f_580))
				{
					if (IS_ACTOR_VALID(bLocal_1126))
					{
						SQUAD_LEAVE(bLocal_1126);
					}
					if (IS_ACTOR_VALID(bLocal_1125))
					{
						SQUAD_LEAVE(bLocal_1125);
					}
					if (IS_ACTOR_VALID(bLocal_919))
					{
						SQUAD_LEAVE(bLocal_919);
					}
					Function_210(&Local_4 + 580);
					DESTROY_OBJECT(Local_4.f_580);
				}
				RESET_GAME_CAMERA_CURVE_OVERRIDES();
				STREAMING_UNLOAD_BOUNDS();
				ENABLE_CHILD_SECTOR("fom_corral01x");
				ENABLE_CHILD_SECTOR("fom_guardTower02x");
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				Function_363();
				iLocal_929[3] = 1;
				Function_214(&bLocal_920);
				bLocal_915 = 101;
				iLocal_916 = 0;
			}
			break;
	}
	return;
}

void Function_363() //Position: 0x116F5 / 71413
{
	Function_170(&Local_4 + 488);
	return;
}

void Function_364() //Position: 0x11703 / 71427
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_gatlingGun_AllEnemy", "Fort01_gatlingGun_AllEnemy", false, 1, 1, 0, 1);
		Function_365(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_365(int iParam0) //Position: 0x11760 / 71520
{
	Function_366(0, Global_34573, iParam0, 0);
	Function_366(1, bLocal_919, iParam0, 0);
	Function_366(2, bLocal_1126, iParam0, 0);
	Function_366(3, bLocal_1167, iParam0, 0);
	Function_366(4, bLocal_1168, iParam0, 0);
	Function_366(5, bLocal_1125, iParam0, 0);
	return;
}

void Function_366(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x117A2 / 71586
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_153(uParam2, Function_139(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

bool Function_367() //Position: 0x117C7 / 71623
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!Function_270(&bLocal_1157))
	{
		Function_368(&bLocal_1157);
	}
	else if (Function_268(&bLocal_1157) < 1.0f)
	{
		bVar0 = true;
		iVar1 = 0;
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_708) >= 0)
		{
			bVar0 = false;
			iVar1 = (iVar1 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_708));
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_708, false);
		}
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_692) >= 0)
		{
			bVar0 = false;
			iVar1 = (iVar1 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_692));
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_692, false);
		}
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_704) >= 0)
		{
			bVar0 = false;
			iVar1 = (iVar1 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_704));
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_704, false);
		}
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_696) >= 0)
		{
			bVar0 = false;
			iVar1 = (iVar1 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_696));
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_696, false);
		}
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_700) >= 0)
		{
			bVar0 = false;
			iVar1 = (iVar1 + SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_700));
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_700, false);
		}
		if (IS_ACTOR_ALIVE((*&Local_4 + 712)[02]) && !DECOR_CHECK_EXIST((*&Local_4 + 712)[02], "fleeing"))
		{
			iVar1++;
			bVar0 = false;
			bVar2 = (*&Local_4 + 712)[02];
		}
		if (IS_ACTOR_ALIVE((*&Local_4 + 744)[02]) && !DECOR_CHECK_EXIST((*&Local_4 + 744)[02], "fleeing"))
		{
			iVar1++;
			bVar0 = false;
			bVar2 = (*&Local_4 + 744)[02];
		}
		if (IS_ACTOR_ALIVE((*&Local_4 + 712)[12]) && !DECOR_CHECK_EXIST((*&Local_4 + 712)[12], "fleeing"))
		{
			iVar1++;
			bVar0 = false;
			bVar2 = (*&Local_4 + 712)[12];
		}
		if (IS_ACTOR_ALIVE((*&Local_4 + 744)[12]) && !DECOR_CHECK_EXIST((*&Local_4 + 744)[12], "fleeing"))
		{
			iVar1++;
			bVar0 = false;
			bVar2 = (*&Local_4 + 744)[12];
		}
		Function_214(&bLocal_1157);
		if (!bVar0)
		{
			if (iVar1 == 1)
			{
				if (!DECOR_CHECK_EXIST(bLocal_805, "iNumLeft"))
				{
					DECOR_SET_FLOAT(bLocal_805, "iNumLeft", GET_CURRENT_GAME_TIME());
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_805, "iNumLeft")) < 10.0f)
				{
					if (IS_ACTOR_VALID(bVar2))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar2)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar2));
						}
						TASK_FLEE_ACTOR(bVar2, Global_34573, 100.0f, -1.0f, 0, 0, 0);
						return 1;
					}
				}
			}
		}
		return bVar0;
	}
	return 0;
}

void Function_368(bool bParam0) //Position: 0x11A23 / 72227
{
	if (!Function_270(bParam0))
	{
		Function_215(bParam0, 0.0f);
	}
	return;
}

bool Function_369(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x11A38 / 72248
{
	*uParam0 = { StackVal, StackVal, *uParam0 };
	if (!IS_ACTOR_VALID(bParam3))
	{
		return 0;
	}
	if (!Function_377(Global_34573, bParam3, bParam2))
	{
		Function_222(bParam5);
		*uParam6 = 1;
		return 1;
	}
	if (!Function_377(Global_34573, bParam3, bParam1))
	{
		if (!Function_376(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(bParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_404(bParam4, 7,5f, 0, 2, bParam7, 0, 0);
				}
				Function_375(2);
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_374(bParam8, 0, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_374(bParam9, 0, 4294967295, 1, bParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9)))
			{
				ADD_BLIP_FOR_ACTOR(bParam3, bParam10, 0, 2, 0);
				DECOR_SET_BOOL(bParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_376(2))
	{
		Function_373(2);
		if (!Function_372())
		{
			if (bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_371();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(bParam3)))) && (IS_LAYOUTREF_VALID(bParam8) || IS_LAYOUTREF_VALID(bParam9))) && DECOR_CHECK_EXIST(bParam3, "MADR_addedblip"))
			{
				Function_204(bParam3);
				Function_370(GET_OBJECT_FROM_ACTOR(bParam3));
				DECOR_REMOVE(bParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(bParam8))
			{
				Function_374(bParam8, 1, 4294967295, 1, bParam3);
			}
			if (IS_LAYOUTREF_VALID(bParam9))
			{
				Function_374(bParam9, 1, 4294967295, 1, bParam3);
			}
		}
	}
	return 0;
}

void Function_370(bool bParam0) //Position: 0x11BCC / 72652
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

void Function_371() //Position: 0x11BF8 / 72696
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

bool Function_372() //Position: 0x11C23 / 72739
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

void Function_373(bool bParam0) //Position: 0x11C67 / 72807
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

void Function_374(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x11CCA / 72906
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

void Function_375(bool bParam0) //Position: 0x11D6B / 73067
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

bool Function_376(bool bParam0) //Position: 0x11DCE / 73166
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

bool Function_377(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11E15 / 73237
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

void Function_378() //Position: 0x11F26 / 73510
{
	Function_380();
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 712)[02], 2);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 712)[12], 2);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 712)[22], 2);
	Function_379((*&Local_4 + 712)[22]);
	STREAMING_LOAD_SCENE_EXT(Function_379((*&Local_4 + 712)[22]), 0.0f, 0.0f, 0.0f, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT((*&Local_4 + 712)[12], (*&Local_4 + 712)[22], false);
	SET_ACTOR_IN_VEHICLE((*&Local_4 + 712)[02], (*&Local_4 + 712)[22], false);
	TASK_STAND_STILL((*&Local_4 + 712)[02], -1.0f, 0, 0);
	TASK_STAND_STILL((*&Local_4 + 712)[12], -1.0f, 0, 0);
	MEMORY_REPORT_POSITION_AUTO((*&Local_4 + 712)[12], Global_34573, true);
	SET_ACTOR_FACTION((*&Local_4 + 712)[02], 19);
	SET_ACTOR_FACTION((*&Local_4 + 712)[12], 19);
	SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(false, (*&Local_4 + 712)[22]), 2);
	SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(true, (*&Local_4 + 712)[22]), 2);
	Function_368(&bLocal_1160);
	LOG_ERROR("creating wagon 02");
	iLocal_1180 = 0;
	return;
}

vector3 Function_379(bool bParam0) //Position: 0x12014 / 73748
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

void Function_380() //Position: 0x1207E / 73854
{
	Local_4.f_740 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "GatlingWagon01"));
	(*&Local_4 + 712)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "GatlingWagon01_Driver", 397, -2704,208f, 66,03459f, 3362,852f, 0.0f, 262,9543f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 712)[02], Local_4.f_740);
	(*&Local_4 + 712)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "GatlingWagon01_Gunner", 401, -2707,898f, 65,77737f, 3363,713f, 0.0f, 248,7768f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 712)[12], Local_4.f_740);
	(*&Local_4 + 712)[22] = Function_318(Local_4, "GatlingWagon01_Wagon", 1182, 976, -2700,734f, 66,33609f, 3358,256f, 1,453714f, -85,47672f, -0,09585846f, 1, 976, 976, 976, 4);
	SQUAD_JOIN((*&Local_4 + 712)[22], Local_4.f_740);
	return;
}

void Function_381() //Position: 0x121A1 / 74145
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_700 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "FootSoldiersWaveCenter02"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "FootSoldiersWave03_01", 397, -2590,195f, 70,54312f, 3325,727f, 0.0f, 176,1319f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_700);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "FootSoldiersWave03_02", 401, -2584,75f, 70,15592f, 3326,114f, 0.0f, 145,6651f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_700);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "FootSoldiersWave03_03", 397, -2592,018f, 70,42278f, 3324,866f, 0.0f, 176,1319f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_700);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "FootSoldiersWave03_04", 401, -2588,057f, 70,64392f, 3326,534f, 0.0f, 145,6651f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_700);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_382() //Position: 0x122FB / 74491
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_gatlingGun_SethMore", "Fort01_gatlingGun_SethMore", false, 2, 1, 0, 1);
		Function_365(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_383() //Position: 0x12359 / 74585
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_gatlingGun_Marshal_More", "Fort01_gatlingGun_Marshal_More", false, 2, 1, 0, 1);
		Function_365(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_384() //Position: 0x123BE / 74686
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort01_gatlingGun_killMore", "Fort01_gatlingGun_killMore", false, 2, 1, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_385() //Position: 0x1241B / 74779
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_386() //Position: 0x1242E / 74798
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_708 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "CalvaryWaveCenter02"));
	bVar0 = Function_387(Local_4, "CalvaryWaveCenter02_01", 397, Function_53(), 977, -2577,883f, 70,256f, 3329,968f, 0.0f, 157,6969f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_708);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = Function_387(Local_4, "CalvaryWaveCenter02_02", 401, Function_53(), 980, -2573,357f, 68,7939f, 3322,491f, 0.0f, 170,9846f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_708);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = Function_387(Local_4, "CalvaryWaveCenter02_03", 402, Function_53(), 981, -2569,76f, 67,29948f, 3316,636f, 0.0f, 152,7042f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_708);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

bool Function_387(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x1254F / 75087
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_388(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_388(bParam4))
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

bool Function_388(int iParam0) //Position: 0x12674 / 75380
{
	if (iParam0 > 0 || iParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

bool Function_389(bool bParam0, bool bParam1) //Position: 0x1268B / 75403
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
					fVar3 = Function_390(bParam1, bVar2);
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

var Function_390(bool bParam0, bool bParam1) //Position: 0x12707 / 75527
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_322(bParam0);
			vVar0 = { StackVal, StackVal, Function_322(bParam0) };
			Function_322(bParam1);
			vVar3 = { StackVal, StackVal, Function_322(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_391() //Position: 0x127A2 / 75682
{
	if (!SQUAD_IS_VALID(Local_4.f_692) && ((Function_268(&bLocal_920) <= 10.0f || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_696) >= 1) || !IS_ACTOR_ALIVE((*&Local_4 + 744)[12])))
	{
		Function_394();
		Function_278(Local_4.f_692, Local_4.f_3096, Local_4.f_3080, 1);
	}
	if (!SQUAD_IS_VALID(Local_4.f_772) && (Function_268(&bLocal_920) <= 30.0f || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_696) >= 2))
	{
		Function_392();
	}
	return;
}

void Function_392() //Position: 0x12816 / 75798
{
	Function_393();
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 744)[02], false);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 744)[12], false);
	SET_ACTOR_UPDATE_PRIORITY((*&Local_4 + 744)[22], false);
	Function_379((*&Local_4 + 744)[22]);
	STREAMING_LOAD_SCENE_EXT(Function_379((*&Local_4 + 744)[22]), 0.0f, 0.0f, 0.0f, 0);
	SET_OBJECT_COLLIDE_WITH_OBJECT((*&Local_4 + 744)[12], (*&Local_4 + 744)[22], false);
	SET_ACTOR_IN_VEHICLE((*&Local_4 + 744)[02], (*&Local_4 + 744)[22], false);
	TASK_STAND_STILL((*&Local_4 + 744)[02], -1.0f, 0, 0);
	TASK_STAND_STILL((*&Local_4 + 744)[12], -1.0f, 0, 0);
	MEMORY_REPORT_POSITION_AUTO((*&Local_4 + 744)[12], Global_34573, true);
	SET_ACTOR_FACTION((*&Local_4 + 744)[02], 19);
	SET_ACTOR_FACTION((*&Local_4 + 744)[12], 19);
	SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(false, (*&Local_4 + 744)[22]), 2);
	SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(true, (*&Local_4 + 744)[22]), 2);
	Function_368(&bLocal_1163);
	iLocal_1181 = 0;
	return;
}

void Function_393() //Position: 0x128ED / 76013
{
	Local_4.f_772 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "GatlingWagon02"));
	(*&Local_4 + 744)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "GatlingWagon02_Driver", 397, -2579,368f, 70,32078f, 3477,229f, 0.0f, 361,7977f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 744)[02], Local_4.f_772);
	(*&Local_4 + 744)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "GatlingWagon02_Gunner", 401, -2580,578f, 70,24747f, 3481,021f, 0.0f, 335,4494f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 744)[12], Local_4.f_772);
	(*&Local_4 + 744)[22] = Function_318(Local_4, "GatlingWagon02_Wagon", 1182, 976, -2576,896f, 70,32078f, 3478,302f, 0.0f, -19,50162f, 0.0f, 1, 976, 976, 976, 4);
	SQUAD_JOIN((*&Local_4 + 744)[22], Local_4.f_772);
	return;
}

void Function_394() //Position: 0x12A08 / 76296
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_692 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "CalvaryRight"));
	bVar0 = Function_387(Local_4, "CALVARY_02_01", 397, Function_53(), 981, -2588,298f, 69,33908f, 3503,036f, 0.0f, -30,8852f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_692);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = Function_387(Local_4, "CALVARY_02_02", 401, Function_53(), 977, -2588,709f, 69,10439f, 3507,462f, 0.0f, -42,32414f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_692);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = Function_387(Local_4, "CALVARY_02_03", 397, Function_53(), 981, -2590,885f, 69,11345f, 3505,501f, 0.0f, -30,8852f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_692);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_395() //Position: 0x12B07 / 76551
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_270(&bLocal_1142))
	{
		Function_368(&bLocal_1142);
	}
	if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_268(&bLocal_1142) < 15.0f)
	{
		if (IS_ACTOR_SHOOTING(Global_34573))
		{
			bVar0 = FLOOR(RAND_FLOAT_RANGE(0.0f, 4.0f));
			if (Function_385())
			{
				Function_403();
			}
			else
			{
				Function_402();
			}
		}
		else if (Function_399())
		{
			bVar1 = FLOOR(RAND_FLOAT_RANGE(0.0f, 3.0f));
			switch (bVar1)
			{
				case 0x00000001:
					Function_398();
					break;
				
				case 0x00000002:
					Function_397();
					break;
				
				default:
					Function_396();
					break;
				}
		}
		Function_214(&bLocal_1142);
	}
	return;
}

void Function_396() //Position: 0x12B91 / 76689
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort01_gatlingGun_shoot", "Fort01_gatlingGun_shoot", false, 2, 1, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_397() //Position: 0x12BE8 / 76776
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_gatlingGun_noShoot_Seth", "Fort01_gatlingGun_noShoot_Seth", false, 2, 1, 0, 1);
		Function_365(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_398() //Position: 0x12C4E / 76878
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_gatlingGun_noShoot_Mar", "Fort01_gatlingGun_noShoot_Mar", false, 2, 1, 0, 1);
		Function_365(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_399() //Position: 0x12CB1 / 76977
{
	if (SQUAD_IS_VALID(Local_4.f_704))
	{
		if (Function_400(Local_4.f_704, Global_34573, 50.0f, 1))
		{
			return 1;
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_692))
	{
		if (Function_400(Local_4.f_692, Global_34573, 50.0f, 1))
		{
			return 1;
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_708))
	{
		if (Function_400(Local_4.f_708, Global_34573, 50.0f, 1))
		{
			return 1;
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_696))
	{
		if (Function_400(Local_4.f_696, Global_34573, 50.0f, 1))
		{
			return 1;
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_700))
	{
		if (Function_400(Local_4.f_700, Global_34573, 50.0f, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_400(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x12D5D / 77149
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
					if (!Function_401(bVar1, 1) || iParam3)
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

bool Function_401(bool bParam0, int iParam1) //Position: 0x12DF6 / 77302
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

void Function_402() //Position: 0x12E40 / 77376
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_gatlingGun_Marshal", "Fort01_gatlingGun_Marshal", false, 2, 1, 0, 1);
		Function_365(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_403() //Position: 0x12E9B / 77467
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_gatlingGun_Seth", "Fort01_gatlingGun_Seth", false, 1, 1, 0, 1);
		Function_365(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_404(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x12EF1 / 77553
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

void Function_405() //Position: 0x12F44 / 77636
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort01_gatlingGun_killWave", "Fort01_gatlingGun_killWave", false, 1, 1, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_406(bool bParam0) //Position: 0x12FA1 / 77729
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
			AI_IGNORE_ACTOR(bVar1);
		}
		bVar0++;
	}
	return;
}

void Function_407(bool bParam0) //Position: 0x12FE0 / 77792
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

int Function_408(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x13094 / 77972
{
	if (!Function_414(uParam0, uParam1))
	{
		return 0;
	}
	if (!Function_413(uParam0, bParam2))
	{
		return 0;
	}
	Function_412(uParam0, iParam3);
	uParam0->f_40 = 0;
	Function_409(uParam0, iParam4, iParam5);
	return 1;
}

void Function_409(var uParam0, int iParam1, int iParam2) //Position: 0x130D0 / 78032
{
	if (iParam1 != 100000000)
	{
		Function_411(uParam0, iParam1, iParam2);
	}
	else
	{
		Function_410(uParam0, iParam2);
	}
	return;
}

void Function_410(int iParam0, bool bParam1) //Position: 0x130F3 / 78067
{
	iParam0->f_40 = 0;
	Function_411(iParam0, 2, bParam1);
	Function_411(iParam0, 4, bParam1);
	Function_411(iParam0, 8, bParam1);
	Function_411(iParam0, 16, bParam1);
	Function_411(iParam0, 32, bParam1);
	Function_411(iParam0, 64, bParam1);
	Function_411(iParam0, 128, bParam1);
	Function_411(iParam0, 256, bParam1);
	Function_411(iParam0, 512, bParam1);
	Function_411(iParam0, 1024, bParam1);
	return;
}

void Function_411(int iParam0, int iParam1, bool bParam2) //Position: 0x13159 / 78169
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

void Function_412(var uParam0, int iParam1) //Position: 0x13195 / 78229
{
	uParam0->f_36 = iParam1;
	return;
}

bool Function_413(int iParam0, bool bParam1) //Position: 0x131A1 / 78241
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

bool Function_414(int iParam0, bool bParam1) //Position: 0x1322A / 78378
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

void Function_415() //Position: 0x133B6 / 78774
{
	bool bVar0;
	
	Function_416(StackVal, StackVal, *(&Local_4 + 2040[16]), 0, 0);
	bVar0 = LOCATE_ACTOR_OF_TYPE(*(&Local_4 + 2040[16]), 2.0f, 23, 4294967295);
	if (IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar0);
	}
	Function_416(StackVal, StackVal, *(&Local_4 + 2040[26]), 0, 0);
	bVar0 = LOCATE_ACTOR_OF_TYPE(*(&Local_4 + 2040[26]), 2.0f, 23, 4294967295);
	if (IS_ACTOR_VALID(bVar0))
	{
		DESTROY_ACTOR(bVar0);
	}
	return;
}

int Function_416(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x1341C / 78876
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_418(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
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
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_417(uVar0[0], "UseCase1"));
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
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_417(uVar0[1], "UseCase1"));
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

var Function_417(bool bParam0, bool bParam1) //Position: 0x1357D / 79229
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_418(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1358A / 79242
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

void Function_419() //Position: 0x13634 / 79412
{
	bool bVar0;
	
	Function_351(bLocal_919, (*&Local_4 + 1156)[4], 1, 1, 1);
	SQUAD_GOALS_CLEAR(Local_4.f_580);
	Function_351(bLocal_1126, (*&Local_4 + 1156)[6], 1, 1, 1);
	Function_351(bLocal_1125, (*&Local_4 + 1156)[8], 1, 1, 1);
	DESTROY_ACTOR((*&Local_4 + 552)[02]);
	DESTROY_ACTOR((*&Local_4 + 552)[12]);
	DESTROY_ACTOR((*&Local_4 + 552)[22]);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_580, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_MAKE_EMPTY(Local_4.f_580);
	SQUAD_JOIN(bLocal_1126, Local_4.f_580);
	SQUAD_JOIN(bLocal_1125, Local_4.f_580);
	SQUAD_JOIN(bLocal_919, Local_4.f_580);
	Function_284(Local_4.f_580, 0);
	Function_420(Local_4.f_580, 2);
	bVar0 = GET_DRAFT_ACTOR(false, bLocal_1127);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
	SET_ACTOR_STOP_UPDATE(bVar0, 1);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bVar0), true);
	bVar0 = GET_DRAFT_ACTOR(true, bLocal_1127);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
	SET_ACTOR_STOP_UPDATE(bVar0, 1);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bVar0), true);
	ENABLE_VEHICLE_SEAT(bLocal_1127, 2, 0);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bLocal_1127), true);
	return;
}

void Function_420(bool bParam0, bool bParam1) //Position: 0x13734 / 79668
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

int Function_421() //Position: 0x13775 / 79733
{
	return 1;
}

void Function_422(vector3 vParam0, bool bParam3, var uParam4, int iParam5, int iParam6) //Position: 0x1377C / 79740
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
	if (bParam3 != Global_34165.f_48 && !Function_427())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_426(0);
	Function_425();
	Global_34165.f_48 = bParam3;
	Global_34165.f_20 = Global_6269;
	Global_34165 = { StackVal, StackVal, vParam0 };
	Global_34165.f_12 = iParam5;
	Global_34165.f_16 = iParam6;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Function_424(uParam4, iVar0, iVar1);
	Function_423();
}

void Function_423() //Position: 0x13819 / 79897
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

void Function_424(int iParam0, bool bParam1, bool bParam2) //Position: 0x1385A / 79962
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

void Function_425() //Position: 0x139C0 / 80320
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_148 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_426(bool bParam0) //Position: 0x139E4 / 80356
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

bool Function_427() //Position: 0x13A13 / 80403
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_68;
}

bool Function_428(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) //Position: 0x13A2E / 80430
{
	if (Function_429(&iParam0) == iParam7 || Function_427())
	{
		return 1;
	}
	return 0;
}

int Function_429(int iParam0) //Position: 0x13A4D / 80461
{
	if (Function_273(iParam0))
	{
		return Global_34165.f_48;
	}
	return 4294967295;
}

void Function_430() //Position: 0x13A65 / 80485
{
	if (!IS_HUD_MAP_VISIBLE())
	{
		SET_HUD_MAP_DRAW_ENABLED(1);
	}
	Function_305((*&Local_4 + 1948)[4]);
	ENABLE_VEHICLE_SEAT(bLocal_1127, 2, 1);
	GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_1129), true);
	SET_OBJECT_ANIMATOR_NODE(bLocal_1138, "/global/close_wagon/wagon/open");
	SET_OBJECT_ANIMATOR_RATE(bLocal_1138, 10.0f);
	STOP_VEHICLE(bLocal_1127);
	if (!SQUAD_IS_VALID(Local_4.f_580))
	{
		Function_435();
	}
	if (Function_299(bLocal_1126, Local_4.f_580, 1))
	{
		SQUAD_LEAVE(bLocal_1126);
	}
	bLocal_1167 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_580, false);
	bLocal_1168 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_580, true);
	SQUAD_JOIN(bLocal_1126, Local_4.f_580);
	SQUAD_GOALS_CLEAR(Local_4.f_580);
	Function_293(Local_4.f_580);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_580, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	Function_434(Local_4.f_580, 0);
	SQUAD_SET_FACTION(Local_4.f_580, 20);
	Function_433(Local_4.f_580, Global_34573, 0);
	if (SQUAD_IS_VALID(Local_4.f_620))
	{
		Function_213(Local_4.f_620);
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(Local_4.f_620));
	}
	if (!SQUAD_IS_VALID(Local_4.f_696))
	{
		Function_432();
	}
	SQUAD_SET_FACTION(Local_4.f_696, 19);
	Function_420(Local_4.f_696, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_696, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	if (!SQUAD_IS_VALID(Local_4.f_704))
	{
		Function_431();
	}
	SQUAD_SET_FACTION(Local_4.f_704, 19);
	Function_420(Local_4.f_704, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_704, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	return;
}

void Function_431() //Position: 0x13BDF / 80863
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_704 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "CalvaryWaveCenter01"));
	bVar0 = Function_387(Local_4, "CalvaryWaveCenter01_01", 397, Function_53(), 977, -2579,132f, 71,27841f, 3340,868f, 0.0f, 157,6969f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_704);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = Function_387(Local_4, "CalvaryWaveCenter01_02", 401, Function_53(), 980, -2583,374f, 71,51366f, 3337,041f, 0.0f, 170,9846f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_704);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = Function_387(Local_4, "CalvaryWaveCenter01_03", 402, Function_53(), 981, -2576.0f, 71,27841f, 3343,014f, 0.0f, 152,7042f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_704);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_432() //Position: 0x13D00 / 81152
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_696 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "FootSoldiersWaveCenter01"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "FootSoldiersWave01_01", 397, -2604.0f, 73,33077f, 3337,39f, 0.0f, 176,1319f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_696);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "FootSoldiersWave01_02", 398, -2613,909f, 72,62855f, 3336.0f, 0.0f, 173,9642f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_696);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "FootSoldiersWave01_03", 397, -2608.0f, 72,92206f, 3335,013f, 0.0f, 176,1319f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_696);
	SET_ACTOR_FACTION(bVar0, 19);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "FootSoldiersWave01_04", 398, -2610,464f, 73,22685f, 3338,464f, 0.0f, 173,9642f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_696);
	SET_ACTOR_FACTION(bVar0, 19);
	return;
}

void Function_433(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13E5A / 81498
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

void Function_434(bool bParam0, int iParam1) //Position: 0x13E9F / 81567
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

void Function_435() //Position: 0x13ED6 / 81622
{
	Local_4.f_580 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Deputy01"));
	(*&Local_4 + 552)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DEPUTY_01_01", 588, -2869,656f, 62,83144f, 3404.0f, 0.0f, -74,11799f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 552)[02], Local_4.f_580);
	TASK_STAND_STILL((*&Local_4 + 552)[02], -1.0f, 0, 0);
	(*&Local_4 + 552)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DEPUTY_01_02", 590, -2869,224f, 62,93977f, 3405,628f, 0.0f, -53,57393f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 552)[12], Local_4.f_580);
	TASK_STAND_STILL((*&Local_4 + 552)[12], -1.0f, 0, 0);
	(*&Local_4 + 552)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "DEPUTY_01_03", 592, -2865,601f, 63,49453f, 3408,298f, 0.0f, -50,89732f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 552)[22], Local_4.f_580);
	TASK_STAND_STILL((*&Local_4 + 552)[22], -1.0f, 0, 0);
	return;
}

int Function_436() //Position: 0x13FED / 81901
{
	Function_437(&Local_4 + 488, 397, 2, 0);
	Function_437(&Local_4 + 488, 401, 2, 0);
	Function_437(&Local_4 + 488, 398, 2, 0);
	Function_437(&Local_4 + 488, 402, 2, 0);
	Function_437(&Local_4 + 488, 1182, 2, 0);
	if (Function_308(&Local_4 + 488))
	{
		return 1;
	}
	return 0;
}

var Function_437(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x14048 / 81992
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_173(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_312(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_312(bParam0[iVar03], 8);
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

void Function_438() //Position: 0x14118 / 82200
{
	if (Function_353(Global_30679[1]))
	{
		bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "corralprops", 1);
		if (IS_DOOR_VALID(bLocal_1175))
		{
			if (bLocal_915 == 3)
			{
				Function_440(bLocal_1175);
			}
			else
			{
				Function_439(bLocal_1175, 0);
			}
		}
		bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "corralprops", 2);
		if (IS_DOOR_VALID(bLocal_1175))
		{
			if (bLocal_915 == 3)
			{
				Function_440(bLocal_1175);
			}
			else
			{
				Function_439(bLocal_1175, 1);
			}
		}
		bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "guardTowerProps", 7);
		if (IS_DOOR_VALID(bLocal_1175))
		{
			Function_440(bLocal_1175);
		}
		bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "guardTowerProps", 8);
		if (IS_DOOR_VALID(bLocal_1175))
		{
			Function_440(bLocal_1175);
		}
		bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "corralprops", 3);
		if (bLocal_915 == 1)
		{
			Function_439(bLocal_1175, 0);
		}
		else
		{
			Function_440(bLocal_1175);
		}
		bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "corralprops", 4);
		if (bLocal_915 == 1)
		{
			Function_439(bLocal_1175, 0);
		}
		else
		{
			Function_440(bLocal_1175);
		}
		bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "corralprops", 5);
		if (bLocal_915 == 1)
		{
			Function_439(bLocal_1175, 0);
		}
		else
		{
			Function_440(bLocal_1175);
		}
		bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "corralprops", 6);
		if (bLocal_915 == 1)
		{
			Function_439(bLocal_1175, 0);
		}
		else
		{
			Function_440(bLocal_1175);
		}
		bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "corralprops", 7);
		if (bLocal_915 == 1)
		{
			Function_439(bLocal_1175, 0);
		}
		else
		{
			Function_440(bLocal_1175);
		}
		bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "corralprops", 9);
		if (bLocal_915 == 1)
		{
			Function_439(bLocal_1175, 0);
		}
		else
		{
			Function_440(bLocal_1175);
		}
		bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "leftwingprops", 17);
		if (bLocal_915 == 1)
		{
			Function_439(bLocal_1175, 0);
		}
		else
		{
			Function_440(bLocal_1175);
		}
	}
	return;
}

void Function_439(bool bParam0, bool bParam1) //Position: 0x143F1 / 82929
{
	if (IS_DOOR_LOCKED(bParam0))
	{
		Function_154(bParam0, 0);
	}
	if (!IS_DOOR_OPENED(bParam0))
	{
		OPEN_DOOR_DIRECTION_FAST(bParam0, bParam1);
	}
	return;
}

void Function_440(bool bParam0) //Position: 0x14415 / 82965
{
	if (IS_DOOR_OPENED(bParam0))
	{
		CLOSE_DOOR_FAST(bParam0);
	}
	if (!IS_DOOR_LOCKED(bParam0))
	{
		Function_120(bParam0, 0);
	}
	return;
}

bool Function_441(bool bParam0, var uParam1, vector3 vParam2, int iParam5, bool bParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14) //Position: 0x14437 / 82999
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_442(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_443()) * (fParam8 - fParam7)) * 0,5f))) || bParam13)
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
	else if ((!Function_442(StackVal, StackVal, Global_34573, vParam2, (fParam8 + ((IntToFloat(Function_443()) * (fParam8 - fParam7)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam13)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_442(StackVal, StackVal, Global_34573, vParam2, fParam7))
	{
	}
	return 0;
}

bool Function_442(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x146F1 / 83697
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_379(bParam0);
		if (VDIST(Function_379(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_443() //Position: 0x1477B / 83835
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_444() //Position: 0x1478A / 83850
{
	var uVar0;
	var uVar3;
	bool bVar6;
	int iVar7;
	
	switch (bLocal_915)
	{
		case 0x00000000:
			Function_229((*&Local_4 + 964)[0]);
			Function_300((*&Local_4 + 964)[0]);
			bLocal_1128 = CREATE_ACTOR_IN_LAYOUT(bLocal_805, "tempmerchant", 546, Function_229((*&Local_4 + 964)[0]), Function_300((*&Local_4 + 964)[0]));
			bVar6 = false;
			while (bVar6 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar6, &uVar0, &uVar3))
				{
					iVar7 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar6);
					if (Function_388(iVar7))
					{
						if (iVar7 == 546)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), bLocal_1128);
						}
					}
				}
				bVar6++;
			}
			return 1;
			break;
		
		case 0x00000001:
			Function_229((*&Local_4 + 964)[0]);
			Function_300((*&Local_4 + 964)[0]);
			bLocal_1128 = CREATE_ACTOR_IN_LAYOUT(bLocal_805, "tempmerchant", 546, Function_229((*&Local_4 + 964)[0]), Function_300((*&Local_4 + 964)[0]));
			bVar6 = false;
			while (bVar6 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar6, &uVar0, &uVar3))
				{
					iVar7 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar6);
					if (Function_388(iVar7))
					{
						if (iVar7 == 398)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), (*&Local_4 + 632)[02]);
						}
						if (iVar7 == 405)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), (*&Local_4 + 632)[12]);
						}
						if (iVar7 == 401)
						{
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar6), (*&Local_4 + 632)[22]);
						}
					}
				}
				bVar6++;
			}
			return 1;
			break;
		
		case 0x00000003:
			ENABLE_CHILD_SECTOR("fom_gallowsProps01x");
			ENABLE_CHILD_SECTOR("fom_gallows01x");
			ENABLE_CHILD_SECTOR("fom_courtyardProps01x");
			ENABLE_CHILD_SECTOR("fom_rightWingProps01x");
			ENABLE_CHILD_SECTOR("fom_guardTowerProps02x");
			ENABLE_CHILD_SECTOR("fom_leftWing01x");
			ENABLE_CHILD_SECTOR("fom_leftWingProps01x");
			ENABLE_CHILD_SECTOR("fom_gallows01x");
			ENABLE_CHILD_SECTOR("fom_guardTower02x");
			return 1;
			break;
	}
	return 1;
}

void Function_445(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x149AE / 84398
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (DECOR_CHECK_EXIST(bParam0, "setup"))
	{
		if (bParam0 == (*&Local_4 + 744)[22])
		{
			if (!IS_OBJECT_VALID(Local_1217.f_92))
			{
				if (IS_ACTOR_ALIVE(bParam2))
				{
					KILL_ACTOR(bParam2);
				}
				if (IS_ACTOR_ALIVE(bParam1))
				{
					if (IS_ACTOR_INSIDE_VEHICLE(bParam1) || GET_ACTOR_IN_VEHICLE_SEAT(bParam0, false) != bParam1)
					{
						KILL_ACTOR(bParam1);
					}
				}
			}
		}
	}
	if (DECOR_CHECK_EXIST(bParam0, "setup"))
	{
		if (bParam0 == (*&Local_4 + 712)[22])
		{
			if (!IS_OBJECT_VALID(Local_1193.f_92))
			{
				if (IS_ACTOR_ALIVE(bParam2))
				{
					KILL_ACTOR(bParam2);
				}
				if (IS_ACTOR_ALIVE(bParam1))
				{
					if (IS_ACTOR_INSIDE_VEHICLE(bParam1) || GET_ACTOR_IN_VEHICLE_SEAT(bParam0, false) != bParam1)
					{
						KILL_ACTOR(bParam1);
					}
				}
			}
		}
	}
	if (bParam0 == (*&Local_4 + 744)[22])
	{
		Function_379((*&Local_4 + 744)[22]);
		STREAMING_LOAD_BOUNDS_EXT(1, Function_379((*&Local_4 + 744)[22]), 25.0f, 1);
	}
	else
	{
		Function_379((*&Local_4 + 712)[22]);
		STREAMING_LOAD_BOUNDS_EXT(2, Function_379((*&Local_4 + 712)[22]), 25.0f, 1);
	}
	if (*uParam4 >= 0)
	{
		if (IS_ACTOR_ALIVE(bParam2))
		{
			if (IS_USING_TURRET(bParam2))
			{
				Function_451(bParam2);
			}
		}
	}
	if (*uParam4 <= 4)
	{
		if (bParam0 != (*&Local_4 + 712)[22] && Function_270(&bLocal_1160))
		{
			if (Function_268(&bLocal_1160) < 15.0f)
			{
				*uParam4 = 7;
			}
		}
		else if (Function_270(&bLocal_1163))
		{
			if (Function_268(&bLocal_1163) < 15.0f)
			{
				*uParam4 = 7;
			}
		}
	}
	switch (*uParam4)
	{
		case 0x00000000:
			if (IS_ACTOR_ALIVE(bParam1))
			{
				Function_379(bParam0);
				bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_379(bParam0), 20.0f, "gatlinggun", 1);
				if (IS_PHYSINST_VALID(bVar0))
				{
					DESTROY_OBJECT(GET_OBJECT_FROM_PHYSINST(bVar0));
					DECOR_SET_BOOL(bParam0, "destroyedgun", true);
					*uParam4 = 1;
				}
			}
			else
			{
				*uParam4 = 7;
			}
			break;
		
		case 0x00000001:
			if (IS_ACTOR_ALIVE(bParam1))
			{
				if (bParam0 == (*&Local_4 + 712)[22])
				{
					Function_450(bParam0);
					bVar1 = Local_1193.f_88;
					SET_OBJECT_COLLIDE_WITH_OBJECT(Local_1193.f_92, (*&Local_4 + 712)[22], false);
					SET_OBJECT_COLLIDE_WITH_OBJECT(Local_1193.f_92, (*&Local_4 + 712)[12], false);
					DECOR_SET_BOOL(Local_1193.f_92, "nnoExplode", true);
					bLocal_1178 = CREATE_EVENT_TRAP("wagon01kersplode", 13, bLocal_805);
					EVENT_TRAP_ON_TARGET(bLocal_1178, Local_1193.f_92);
					EVENT_TRAP_STORE_EVENTS(bLocal_1178, 1);
				}
				else
				{
					Function_446(bParam0);
					bVar1 = Local_1217.f_88;
					SET_OBJECT_COLLIDE_WITH_OBJECT(Local_1217.f_92, (*&Local_4 + 744)[22], false);
					SET_OBJECT_COLLIDE_WITH_OBJECT(Local_1217.f_92, (*&Local_4 + 744)[12], false);
					DECOR_SET_BOOL(Local_1217.f_92, "nnoExplode", true);
					bLocal_1179 = CREATE_EVENT_TRAP("wagon02kersplode", 13, bLocal_805);
					EVENT_TRAP_ON_TARGET(bLocal_1179, Local_1217.f_92);
					EVENT_TRAP_STORE_EVENTS(bLocal_1179, 1);
				}
				DESTROY_ACTOR(GET_DRAFT_ACTOR(2, bParam0));
				DESTROY_ACTOR(GET_DRAFT_ACTOR(3, bParam0));
				SET_OBJECT_COLLIDE_WITH_OBJECT(bVar1, bParam0, false);
				SET_OBJECT_COLLIDE_WITH_OBJECT(bParam2, bVar1, false);
				DECOR_SET_BOOL(bParam0, "setup", true);
				*uParam4 = 2;
			}
			else
			{
				*uParam4 = 7;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_ALIVE(bParam1))
			{
				if (bParam0 == (*&Local_4 + 712)[22])
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bParam2, *(&Local_1193 + 32), 1, true, 1);
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, bParam2, *(&Local_1217 + 32), 1, true, 1);
				}
				TASK_STAND_STILL(bParam2, -1.0f, 0, 0);
				*uParam4 = 3;
			}
			else
			{
				*uParam4 = 7;
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_ALIVE(bParam1))
			{
				if (bParam0 == (*&Local_4 + 712)[22])
				{
					Function_229(Local_1193.f_88);
					vLocal_1169 = { StackVal, StackVal, Function_229(Local_1193.f_88) };
					bVar2 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("gatling_attach", &vLocal_1169, 5.0f, 1));
					if (IS_OBJECT_VALID(bVar2) && !GET_CURRENT_GRINGO(bParam2) != GET_GRINGO_FROM_OBJECT(bVar2))
					{
						SNAP_ACTOR_TO_GRINGO(bParam2, bVar2, "GatlingShoot", true, 0, 0);
					}
					TASK_USE_TURRET_AGAINST_OBJECT(bParam2, Local_1193.f_88, Global_34573, -1.0f);
				}
				else
				{
					Function_229(Local_1217.f_88);
					vLocal_1169 = { StackVal, StackVal, Function_229(Local_1217.f_88) };
					bVar2 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("gatling_attach", &vLocal_1169, 5.0f, 1));
					if (IS_OBJECT_VALID(bVar2) && !GET_CURRENT_GRINGO(bParam2) != GET_GRINGO_FROM_OBJECT(bVar2))
					{
						SNAP_ACTOR_TO_GRINGO(bParam2, bVar2, "GatlingShoot", true, 0, 0);
					}
					TASK_USE_TURRET_AGAINST_OBJECT(bParam2, Local_1217.f_88, Global_34573, -1.0f);
				}
				if (IS_USING_TURRET(bParam2))
				{
					*uParam4 = 4;
				}
				else if (!DECOR_CHECK_EXIST(bParam2, "puttingongun"))
				{
					DECOR_SET_FLOAT(bParam2, "puttingongun", GET_CURRENT_GAME_TIME());
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bParam2, "puttingongun")) < 15.0f)
				{
					DESTROY_ACTOR(bParam2);
					DESTROY_ACTOR(bParam1);
					DESTROY_ACTOR(bParam0);
					if (bParam0 == (*&Local_4 + 712)[22])
					{
						DECOR_SET_BOOL(bLocal_805, "destroywagon01", true);
					}
					else if (bParam0 == (*&Local_4 + 744)[22])
					{
						DECOR_SET_BOOL(bLocal_805, "destroywagon02", true);
					}
				}
			}
			else
			{
				*uParam4 = 7;
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_ALIVE(bParam1))
			{
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam2, 40.0f);
				AI_SET_RANGE_ACCURACY_MODIFIER(bParam2, Global_34573, 40.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam2, 53, 0.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam2, 54, 0.0f);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam2, 16, true);
				MEMORY_REPORT_POSITION_AUTO(bParam2, Global_34573, true);
				SET_ACTOR_FACTION(bParam2, 19);
				MEMORY_CONSIDER_AS_ENEMY(bParam2, Global_34573);
				SET_ACTOR_VISION_XRAY(bParam2, true);
				SET_ACTOR_VISION_MAX_RANGE(bParam2, 100.0f, 1);
				DECOR_SET_BOOL(bParam2, "setup", true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bParam1, bParam3, 4, 1, 0, 1, false);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bParam1, 8.0f);
				START_VEHICLE(bParam0);
				AI_ACTOR_FORCE_SPEED(bParam1, 4);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(false, bParam0), 4);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(true, bParam0), 4);
				SET_ACTOR_SPEED(bParam1, 8.0f);
				SET_ACTOR_SPEED(bParam0, 8.0f);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, bParam0), 8.0f);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, bParam0), 8.0f);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam1, true);
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bParam1, 0);
				ADD_BLIP_FOR_ACTOR(bParam1, 322, 0, 2, 0);
				ADD_BLIP_FOR_ACTOR(bParam2, 322, 0, 2, 0);
				MEMORY_ALLOW_SHOOTING(bParam1, false);
				*uParam4 = 5;
			}
			else
			{
				*uParam4 = 7;
			}
			break;
		
		case 0x00000005:
			if (IS_ACTOR_ALIVE(bParam1))
			{
				if (!GET_TASK_STATUS(bParam1, 0) != 1 && IS_ACTOR_IN_VOLUME(bParam0, (*&Local_4 + 916)[4]))
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(bParam1);
					bVar3 = TASK_SEQUENCE_OPEN();
					if (bParam0 == (*&Local_4 + 712)[22])
					{
						TASK_GO_TO_COORD_NONSTOP(false, &Local_4 + 2820[36], 2, 3212836864);
					}
					else
					{
						TASK_GO_TO_COORD_NONSTOP(false, &Local_4 + 2820[26], 2, 3212836864);
					}
					TASK_VEHICLE_LEAVE(false);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bParam1, bVar3);
					TASK_SEQUENCE_RELEASE(bVar3, 1);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bParam1);
					SQUAD_JOIN(bParam1, Local_4.f_696);
					SQUAD_JOIN(bParam2, Local_4.f_696);
					*uParam4 = 6;
				}
			}
			else
			{
				*uParam4 = 7;
			}
			break;
		
		case 0x00000006:
			if (IS_ACTOR_ALIVE(bParam1))
			{
				if (GET_TASK_STATUS(bParam1, 0) == 0)
				{
					Function_292(1, bParam1, 0, 0, 0);
					DECOR_SET_BOOL(bParam1, "staywithin", true);
					if (IS_ACTOR_VALID(bParam0))
					{
						SET_PROP_AI_OBSTACLE_ENABLED(bParam0, 1);
					}
					*uParam4 = 7;
				}
				else if (GET_TASK_SEQUENCE_CURRENT_TASK_INDEX(bParam1, 4294967295) >= 0)
				{
					MEMORY_ALLOW_SHOOTING(bParam1, true);
				}
			}
			else
			{
				*uParam4 = 7;
			}
			break;
		
		case 0x00000007:
			if (!IS_ACTOR_ALIVE(bParam1))
			{
				if (IS_ACTOR_VALID(bParam0))
				{
					if (IS_ACTOR_IN_VOLUME(bParam0, (*&Local_4 + 916)[4]))
					{
						if (bParam0 == (*&Local_4 + 712)[22])
						{
							TASK_GO_TO_COORD_NONSTOP(bParam0, &Local_4 + 2820[36], 2, 3212836864);
						}
						else
						{
							TASK_GO_TO_COORD_NONSTOP(bParam0, &Local_4 + 2820[26], 2, 3212836864);
						}
					}
					else if (!DECOR_CHECK_EXIST(bParam0, "stopped"))
					{
						TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
						DECOR_SET_BOOL(bParam0, "stopped", true);
					}
				}
				if (IS_ACTOR_ALIVE(bParam2))
				{
					if ((!IS_ACTOR_IN_VOLUME(bParam2, Local_4.f_956) && (!MEMORY_GET_IS_VISIBLE(bParam2, Global_34573) || GET_LAST_ATTACK_TIME(bParam2) < 5.0f)) && !DECOR_CHECK_EXIST(bParam2, "fleeing"))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam2)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam2));
						}
						TASK_FLEE_ACTOR(bParam2, Global_34573, -1.0f, -1.0f, 0, 0, 0);
						DECOR_SET_BOOL(bParam2, "fleeing", true);
						LOG_ERROR("telling gunner to flee!");
					}
				}
			}
			else if (!IS_ACTOR_DRIVING_VEHICLE(bParam1))
			{
				if (IS_ACTOR_VALID(bParam0))
				{
					if (IS_ACTOR_IN_VOLUME(bParam0, (*&Local_4 + 916)[4]))
					{
						if (bParam0 == (*&Local_4 + 712)[22])
						{
							TASK_GO_TO_COORD_NONSTOP(bParam0, &Local_4 + 2820[36], 2, 3212836864);
						}
						else
						{
							TASK_GO_TO_COORD_NONSTOP(bParam0, &Local_4 + 2820[26], 2, 3212836864);
						}
					}
					else if (!DECOR_CHECK_EXIST(bParam0, "stopped"))
					{
						TASK_STAND_STILL(bParam0, -1.0f, 0, 0);
						DECOR_SET_BOOL(bParam0, "stopped", true);
					}
				}
				else if (IS_ACTOR_ALIVE(bParam2))
				{
					if ((!IS_ACTOR_IN_VOLUME(bParam2, Local_4.f_956) && (!MEMORY_GET_IS_VISIBLE(bParam2, Global_34573) || GET_LAST_ATTACK_TIME(bParam2) < 5.0f)) && !DECOR_CHECK_EXIST(bParam2, "fleeing"))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam2)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam2));
						}
						TASK_FLEE_ACTOR(bParam2, Global_34573, -1.0f, -1.0f, 0, 0, 0);
						DECOR_SET_BOOL(bParam2, "fleeing", true);
						LOG_ERROR("telling gunner to flee!");
					}
				}
				if ((!IS_ACTOR_IN_VOLUME(bParam1, Local_4.f_956) && (!MEMORY_GET_IS_VISIBLE(bParam1, Global_34573) || GET_LAST_ATTACK_TIME(bParam1) < 5.0f)) && !DECOR_CHECK_EXIST(bParam1, "fleeing"))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam1)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam1));
					}
					TASK_FLEE_ACTOR(bParam1, Global_34573, -1.0f, -1.0f, 0, 0, 0);
					DECOR_SET_BOOL(bParam1, "fleeing", true);
				}
			}
			if (IS_ACTOR_ALIVE(bParam2))
			{
				Function_451(bParam2);
			}
			break;
	}
}

int Function_446(bool bParam0) //Position: 0x15387 / 86919
{
	var uVar0;
	
	Function_316(3, 2);
	uVar0 = uVar0;
	Function_314(&Local_1217 + 4, "p_gen_gatlingGun01x", 0, 0);
	Function_314(&Local_1217 + 4, "p_gen_crateTnt01x", 0, 0);
	if (!Function_308(&Local_1217 + 4))
	{
		return 0;
	}
	Local_1217 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_53()));
	*(&Local_1217 + 32) = { 0,3286236f, 1,171718f, 0,2749805f };
	*(&Local_1217 + 32 + 12) = { 0.0f, 179,0417f, 0.0f };
	Function_447(bParam0, &Local_1217 + 32);
	Local_1217.f_56 = CREATE_POINT_IN_LAYOUT(Local_1217, "TeleportGunner", 0,3286236f, 1,171718f, 0,2749805f, 0.0f, 179,0417f, 0.0f);
	*(&Local_1217 + 60) = { 0,1157726f, 0,3695362f, -0,04391552f };
	*(&Local_1217 + 60 + 12) = { 0.0f, 179,0417f, 0.0f };
	Function_447(bParam0, &Local_1217 + 60);
	Local_1217.f_84 = CREATE_POINT_IN_LAYOUT(Local_1217, "nExplosion", 0,1157726f, 0,3695362f, -0,04391552f, 0.0f, 179,0417f, 0.0f);
	Local_1217.f_88 = CREATE_PROP_IN_LAYOUT(Local_1217, "gatlingGun01x0", "p_gen_gatlingGun01x", -0,1998849f, 1,132385f, 1,592617f, 0.0f, -239,7721f, 0.0f, 1);
	Local_1217.f_92 = CREATE_PROP_IN_LAYOUT(Local_1217, "crateTnt01x0", "p_gen_crateTnt01x", 0,339658f, 1,155977f, 0,179589f, 0.0f, 90,51331f, 0.0f, 1);
	Function_307(Local_1217, bParam0);
	return 1;
}

void Function_447(var uParam0, int iParam1) //Position: 0x15546 / 87366
{
	Function_448(uParam0, 1, iParam1, iParam1 + 12);
	return;
}

void Function_448(bool bParam0, bool bParam1, int iParam2, var uParam3) //Position: 0x15558 / 87384
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (GET_OBJECT_RELATIVE_POSITION(bParam0, *iParam2, &vVar0))
	{
		if (bParam1)
		{
			if (!Function_449(&vVar0, iParam2))
			{
				*iParam2 = { StackVal, StackVal, vVar0 };
			}
		}
		else
		{
			*iParam2 = { StackVal, StackVal, vVar0 };
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(bParam0, *uParam3, &vVar0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		*uParam3 = { StackVal, StackVal, vVar0 };
	}
}

bool Function_449(int iParam0, int iParam1) //Position: 0x15680 / 87680
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

int Function_450(bool bParam0) //Position: 0x156EB / 87787
{
	var uVar0;
	
	Function_316(3, 2);
	uVar0 = uVar0;
	Function_314(&Local_1193 + 4, "p_gen_gatlingGun01x", 0, 0);
	Function_314(&Local_1193 + 4, "p_gen_crateTnt01x", 0, 0);
	if (!Function_308(&Local_1193 + 4))
	{
		return 0;
	}
	Local_1193 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_53()));
	*(&Local_1193 + 32) = { -0,02870048f, 1,177934f, 0,1923085f };
	*(&Local_1193 + 32 + 12) = { 0.0f, 185,4607f, 0.0f };
	Function_447(bParam0, &Local_1193 + 32);
	Local_1193.f_56 = CREATE_POINT_IN_LAYOUT(Local_1193, "TeleportGunner", -0,02870048f, 1,177934f, 0,1923085f, 0.0f, 185,4607f, 0.0f);
	*(&Local_1193 + 60) = { -0,04937503f, 0,4326947f, -0,05728117f };
	*(&Local_1193 + 60 + 12) = { 0.0f, 185,4607f, 0.0f };
	Function_447(bParam0, &Local_1193 + 60);
	Local_1193.f_84 = CREATE_POINT_IN_LAYOUT(Local_1193, "nExplosion", -0,04937503f, 0,4326947f, -0,05728117f, 0.0f, 185,4607f, 0.0f);
	Local_1193.f_88 = CREATE_PROP_IN_LAYOUT(Local_1193, "gatlingGun01x0", "p_gen_gatlingGun01x", 0,1797771f, 1,128213f, 1,584153f, 0.0f, -120,6607f, 0.0f, 1);
	Local_1193.f_92 = CREATE_PROP_IN_LAYOUT(Local_1193, "crateTnt01x0", "p_gen_crateTnt01x", -0,319578f, 1,110294f, -0,3084635f, 0.0f, -91,8523f, 0.0f, 1);
	Function_307(Local_1193, bParam0);
	return 1;
}

void Function_451(bool bParam0) //Position: 0x158AA / 88234
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	bool bVar17;
	
	if (IS_ACTOR_ALIVE(bParam0))
	{
		vVar0 = { 0.0f, 0.0f, 0.0f };
		vVar3 = { 0.0f, 0.0f, 0.0f };
		Function_282(bParam0);
		vVar6 = { StackVal, StackVal, Function_282(bParam0) };
		GET_RETICLE_TARGET_POINT(Global_34573, &vVar0);
		Function_282(Global_34573);
		vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_282(Global_34573), vVar6, StackVal) };
		Function_282(Global_34573);
		vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_282(Global_34573), vVar0, StackVal) };
		fVar15 = GET_ANGLE_BETWEEN_VECTORS_DEGS(&vVar9, &vVar12);
		bVar16 = CREATE_POINT_IN_LAYOUT(bLocal_805, Function_53(), vVar0, 0.0f, 0.0f, 0.0f);
		Function_379(bParam0);
		GET_OBJECT_RELATIVE_OFFSET(bVar16, Function_379(bParam0), &vVar3);
		DESTROY_OBJECT(bVar16);
		bVar17 = false;
		if (bVar17)
		{
		}
		if (fVar15 > 15.0f)
		{
			if (DECOR_CHECK_EXIST(bParam0, "onright"))
			{
				DECOR_REMOVE(bParam0, "onright");
			}
			if (DECOR_CHECK_EXIST(bParam0, "onleft"))
			{
				DECOR_REMOVE(bParam0, "onleft");
			}
			if (!DECOR_CHECK_EXIST(bParam0, "onhead"))
			{
				AI_SHOOT_TARGET_SET_BONE(bParam0, Global_34573, "head");
				AI_SET_RANGE_ACCURACY_MODIFIER(bParam0, Global_34573, 50.0f);
				DECOR_SET_BOOL(bParam0, "onhead", true);
				if (bVar17)
				{
				}
			}
		}
		else if (vVar3.x > 0.0f)
		{
			if (DECOR_CHECK_EXIST(bParam0, "onright"))
			{
				DECOR_REMOVE(bParam0, "onright");
			}
			if (DECOR_CHECK_EXIST(bParam0, "onhead"))
			{
				DECOR_REMOVE(bParam0, "onhead");
			}
			if (!DECOR_CHECK_EXIST(bParam0, "onleft"))
			{
				AI_SHOOT_TARGET_SET_BONE(bParam0, Global_34573, "elbow_l");
				AI_SET_RANGE_ACCURACY_MODIFIER(bParam0, Global_34573, 50.0f);
				DECOR_SET_BOOL(bParam0, "onleft", true);
				if (bVar17)
				{
				}
			}
		}
		else
		{
			if (DECOR_CHECK_EXIST(bParam0, "onleft"))
			{
				DECOR_REMOVE(bParam0, "onleft");
			}
			if (DECOR_CHECK_EXIST(bParam0, "onhead"))
			{
				DECOR_REMOVE(bParam0, "onhead");
			}
			if (!DECOR_CHECK_EXIST(bParam0, "onright"))
			{
				AI_SHOOT_TARGET_SET_BONE(bParam0, Global_34573, "elbow_r");
				AI_SET_RANGE_ACCURACY_MODIFIER(bParam0, Global_34573, 50.0f);
				DECOR_SET_BOOL(bParam0, "onright", false);
				if (bVar17)
				{
				}
			}
		}
	}
	return;
}

void Function_452(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x15AD7 / 88791
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar4;
	struct<5> Var7;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_379(bParam0);
		vLocal_1169 = { StackVal, StackVal, Function_379(bParam0) };
		Function_300(bParam0);
		vVar0 = { StackVal, StackVal, Function_300(bParam0) };
		if (IS_ACTOR_ALIVE(bParam2))
		{
			KILL_ACTOR(bParam2);
		}
		if (IS_ACTOR_ALIVE(bParam1))
		{
			if (IS_ACTOR_INSIDE_VEHICLE(bParam1) || GET_ACTOR_IN_VEHICLE_SEAT(bParam0, false) != bParam1)
			{
				KILL_ACTOR(bParam1);
			}
		}
		if (IS_ACTOR_ALIVE(GET_DRAFT_ACTOR(false, bParam0)))
		{
			KILL_ACTOR(GET_DRAFT_ACTOR(false, bParam0));
		}
		if (IS_ACTOR_ALIVE(GET_DRAFT_ACTOR(true, bParam0)))
		{
			KILL_ACTOR(GET_DRAFT_ACTOR(true, bParam0));
		}
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "kersploded", true);
		REMOVE_ALL_OBJECT_ATTACHMENTS(bParam0);
		uVar3 = GET_PHYSINST_FROM_ACTOR(bParam0);
		SET_DRAW_ACTOR(bParam0, false);
		Function_282(bParam0);
		Var7 = { StackVal, StackVal, Function_282(bParam0) };
		Var7.f_4 = (StackVal - 10.0f);
		TELEPORT_ACTOR(bParam0, &Var7, 1, 1, 1);
		DECOR_SET_FLOAT(bParam0, "ndestroyme", GET_CURRENT_GAME_TIME());
		switch (bParam3)
		{
			case 0x00000001:
				SET_PROP_FIXED(GET_PHYSINST_FROM_OBJECT(Local_1193.f_88), 0);
				CREATE_PROP_IN_LAYOUT(bLocal_805, "stagecoach003_fragment01x", "stagecoach003_fragment01x", vLocal_1169, vVar0, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_805, "stagecoach003_fragment02x", "stagecoach003_fragment02x", vLocal_1169, vVar0, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_805, "stagecoach003_fragment06x", "stagecoach003_fragment06x", vLocal_1169, vVar0, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_805, "stagecoach003_fragment08x", "stagecoach003_fragment08x", vLocal_1169, vVar0, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_805, "stagecoach003_fragment09x", "stagecoach003_fragment09x", vLocal_1169, vVar0, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_805, "stagecoach003_fragment10x", "stagecoach003_fragment10x", vLocal_1169, vVar0, 0);
				DESTROY_OBJECT(Local_1193.f_88);
				Function_229(Local_1193.f_84);
				vVar4 = { StackVal, StackVal, Function_229(Local_1193.f_84) };
				break;
			
			case 0x00000002:
				SET_PROP_FIXED(GET_PHYSINST_FROM_OBJECT(Local_1217.f_88), 0);
				CREATE_PROP_IN_LAYOUT(bLocal_805, "stagecoach003_fragment01x1", "stagecoach003_fragment01x", vLocal_1169, vVar0, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_805, "stagecoach003_fragment02x1", "stagecoach003_fragment02x", vLocal_1169, vVar0, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_805, "stagecoach003_fragment06x1", "stagecoach003_fragment06x", vLocal_1169, vVar0, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_805, "stagecoach003_fragment08x1", "stagecoach003_fragment08x", vLocal_1169, vVar0, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_805, "stagecoach003_fragment09x1", "stagecoach003_fragment09x", vLocal_1169, vVar0, 0);
				CREATE_PROP_IN_LAYOUT(bLocal_805, "stagecoach003_fragment10x1", "stagecoach003_fragment10x", vLocal_1169, vVar0, 0);
				DESTROY_OBJECT(Local_1217.f_88);
				Function_229(Local_1217.f_84);
				vVar4 = { StackVal, StackVal, Function_229(Local_1217.f_84) };
				break;
		}
		Function_453(&vVar4, "DynamiteExplosion", 0, 0);
	}
}

void Function_453(float fParam0, char* cParam1, bool bParam2, int iParam3) //Position: 0x15F95 / 90005
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	_CREATE_EXPLOSION(fParam0, cParam1, bParam2, &vVar0, iParam3);
}

void Function_454() //Position: 0x15FB1 / 90033
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bLocal_1177))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bLocal_1177))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bLocal_1177, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (GET_TASK_STATUS(bVar1, 1) == 0)
				{
					SQUAD_LEAVE(bVar1);
					DESTROY_ACTOR(bVar1);
					return;
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_455(bool bParam0) //Position: 0x15FFE / 90110
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_ALIVE(bVar1))
			{
				Function_451(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_456(bool bParam0) //Position: 0x16038 / 90168
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
				if (IS_ACTOR_RIDING(bVar1))
				{
					if (IS_ACTOR_IN_VOLUME(bVar1, (*&Local_4 + 916)[0]) && !DECOR_CHECK_EXIST(bVar1, "slowdown"))
					{
						TASK_OVERRIDE_SET_MOVETYPE(bVar1, true);
						DECOR_SET_BOOL(bVar1, "slowdown", true);
						ACTOR_MOUNTED_WEAPON_EVEN(bVar1, 16, 10.0f);
					}
					else if (!IS_ACTOR_IN_VOLUME(bVar1, (*&Local_4 + 916)[0]) && DECOR_CHECK_EXIST(bVar1, "slowdown"))
					{
						TASK_OVERRIDE_SET_MOVETYPE(bVar1, 4);
						DECOR_REMOVE(bVar1, "slowdown");
						ACTOR_MOUNTED_WEAPON_EVEN(bVar1, 16, 0,1f);
					}
				}
				else if (!DECOR_CHECK_EXIST(bVar1, "retasked"))
				{
					Function_457((*&Local_4 + 916)[1]);
					Function_282(bVar1);
					Function_457((*&Local_4 + 916)[2]);
					Function_282(bVar1);
					if (VDIST(Function_457((*&Local_4 + 916)[1]), Function_282(bVar1)) > VDIST(Function_457((*&Local_4 + 916)[2]), Function_282(bVar1)))
					{
						Function_292(0, bVar1, 0, 0, 0);
					}
					else
					{
						Function_292(1, bVar1, 0, 0, 0);
					}
				}
			}
			bVar0++;
		}
	}
	return;
}

vector3 Function_457(bool bParam0) //Position: 0x16159 / 90457
{
	vector3 vVar0;
	
	GET_VOLUME_CENTER(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_458() //Position: 0x1616A / 90474
{
	if (iLocal_916 < 4 && iLocal_916 > 105)
	{
		if (iLocal_916 >= 9)
		{
			Function_534(Function_369(&bLocal_926, (30.0f + 20.0f), 100.0f, bLocal_1126, "Marshal_return", "Marshal_abandoned", &bLocal_936, 0, Local_4, bLocal_805, 325, 1));
		}
		else
		{
			Function_534(Function_369(&bLocal_926, 30.0f, 100.0f, bLocal_1126, "Marshal_return", "Marshal_abandoned", &bLocal_936, 0, Local_4, bLocal_805, 325, 1));
		}
		if (Function_268(&bLocal_1145) < 1.0f)
		{
			Function_533(Local_4.f_672);
			Function_533(Local_4.f_676);
			Function_533(Local_4.f_680);
			Function_533(Local_4.f_684);
			Function_533(Local_4.f_688);
			if (!DECOR_CHECK_EXIST(bLocal_805, "GUNFIGHT_RUN"))
			{
				if (((IS_ACTOR_SHOOTING(Global_34573) || Function_532(Local_4.f_668)) || Function_532(Local_4.f_580)) || IS_ACTOR_SHOOTING(bLocal_919))
				{
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_RUN", 0, 4294967295, 4294967295);
					DECOR_SET_BOOL(bLocal_805, "GUNFIGHT_RUN", true);
				}
			}
			if (iLocal_916 <= 6 && iLocal_916 >= 12)
			{
				Function_530();
				Function_528();
				Function_526();
				Function_524();
				Function_522();
			}
			Function_214(&bLocal_1145);
		}
		Function_515();
		Function_438();
		if (iLocal_916 > 8)
		{
			Function_229((*&Local_4 + 1156)[0]);
			Function_512(StackVal, StackVal, "$/cutscene/FORT01_CS06/FORT01_CS06", &uLocal_940, Function_229((*&Local_4 + 1156)[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
		}
	}
	switch (iLocal_916)
	{
		case 0x00000000:
			Function_358(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_929[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_355();
				Function_229((*&Local_4 + 1080)[0]);
				bLocal_917 = Function_354(StackVal, StackVal, Function_229((*&Local_4 + 1080)[0]), 0, 1, 1);
				if (!Function_353(bLocal_917))
				{
					Function_352(&Local_806);
				}
				Function_351(Global_34573, (*&Local_4 + 1080)[0], 1, 1, 1);
				Function_214(&bLocal_920);
				iLocal_916 = 1;
			}
			else
			{
				Function_509();
				RESET_GAME_CAMERA_CURVE_OVERRIDES();
				Function_214(&bLocal_920);
				iLocal_916 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_353(Global_30679[1])) && Function_508())
			{
				Function_509();
				Function_214(&bLocal_920);
				iLocal_916 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_428(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_806, bLocal_915))
			{
				Function_228(bLocal_915);
				Function_422(StackVal, StackVal, Function_228(bLocal_915), bLocal_915, Global_30628[3], Function_231(bLocal_915), 0);
				Function_214(&bLocal_920);
				iLocal_916 = 3;
			}
			else if (Function_268(&bLocal_920) < 1.0f)
			{
				Function_228(bLocal_915);
				Function_422(StackVal, StackVal, Function_228(bLocal_915), bLocal_915, Global_30628[3], Function_231(bLocal_915), 0);
				Function_214(&bLocal_920);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_916 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_261("$/cutscene/FORT01_CS05_SEQ/FORT01_CS05_SEQ", &Local_908, &Local_806, &bLocal_915, 65280, 64922, 64032, 57473, 101721, 51441, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_214(&bLocal_920);
				iLocal_916 = 4;
			}
			break;
		
		case 0x00000004:
			Function_498();
			if (!iLocal_929[1])
			{
				Function_351(Global_34573, (*&Local_4 + 1080)[1], 0, 1, 1);
				Function_351(bLocal_1125, (*&Local_4 + 1080)[5], 0, 1, 1);
				Function_351(bLocal_1126, (*&Local_4 + 1080)[7], 1, 1, 1);
				Function_351((*&Local_4 + 552)[02], (*&Local_4 + 1080)[11], 0, 1, 1);
				Function_351((*&Local_4 + 552)[12], (*&Local_4 + 1080)[12], 0, 1, 1);
				Function_351((*&Local_4 + 552)[22], (*&Local_4 + 1080)[13], 0, 1, 1);
				Function_337(Local_4.f_580, &Local_4 + 1400, 2.0f, 75.0f, 7, Local_4.f_3040, 0);
				Function_336(Local_4.f_580, 1);
				Function_334(Local_4.f_580, 16, 1);
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_1125, 13, false);
				ACTOR_POP_NEXT_GAIT(Global_34573, 1, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
				ACTOR_POP_NEXT_GAIT(bLocal_1125, 2, false);
				ACTOR_POP_NEXT_GAIT(bLocal_1126, 2, false);
				TASK_OVERRIDE_SET_MOVETYPE((*&Local_4 + 552)[02], true);
				DECOR_SET_BOOL((*&Local_4 + 552)[02], "slowed", true);
				ACTOR_POP_NEXT_GAIT((*&Local_4 + 552)[02], 1, false);
				TASK_OVERRIDE_SET_MOVETYPE((*&Local_4 + 552)[12], true);
				DECOR_SET_BOOL((*&Local_4 + 552)[12], "slowed", true);
				ACTOR_POP_NEXT_GAIT((*&Local_4 + 552)[12], 1, false);
				TASK_OVERRIDE_SET_MOVETYPE((*&Local_4 + 552)[22], true);
				DECOR_SET_BOOL((*&Local_4 + 552)[22], "slowed", true);
				ACTOR_POP_NEXT_GAIT((*&Local_4 + 552)[22], 1, false);
			}
			else
			{
				Function_497();
				ACTOR_SET_NEXT_WEAPON(Global_34573, Function_496(Global_34573, 41));
				TASK_OVERRIDE_SET_MOVETYPE((*&Local_4 + 552)[02], true);
				DECOR_SET_BOOL((*&Local_4 + 552)[02], "slowed", true);
				TASK_OVERRIDE_SET_MOVETYPE((*&Local_4 + 552)[12], true);
				DECOR_SET_BOOL((*&Local_4 + 552)[12], "slowed", true);
				TASK_OVERRIDE_SET_MOVETYPE((*&Local_4 + 552)[22], true);
				DECOR_SET_BOOL((*&Local_4 + 552)[22], "slowed", true);
			}
			Function_495((*&Local_4 + 884)[5]);
			ENABLE_CHILD_SECTOR("fom_rightWingProps01x");
			ENABLE_CHILD_SECTOR("fom_rightWing01x");
			ENABLE_CHILD_SECTOR("fom_guardTower01x");
			ENABLE_CHILD_SECTOR("fom_guardTower02x");
			ENABLE_CHILD_SECTOR("fom_guardTowerProps02x");
			ENABLE_CHILD_SECTOR("fom_courtyardProps01x");
			ENABLE_CHILD_SECTOR("fom_gallowsProps01x");
			ENABLE_CHILD_SECTOR("fom_gallows01x");
			SET_ACTOR_CAN_PLAY_GESTURES(bLocal_1125, false);
			SET_ACTOR_CAN_PLAY_GESTURES(bLocal_1126, false);
			SET_ACTOR_CAN_PLAY_GESTURES((*&Local_4 + 552)[02], false);
			SET_ACTOR_CAN_PLAY_GESTURES((*&Local_4 + 552)[12], false);
			SET_ACTOR_CAN_PLAY_GESTURES((*&Local_4 + 552)[22], false);
			Function_494(Local_4.f_580, 0);
			if (DECOR_CHECK_EXIST(Global_34573, "GringoNoQuit"))
			{
				DECOR_REMOVE(Global_34573, "GringoNoQuit");
			}
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			SET_AUTO_CONVERSATION_LOOK(Global_34573, 1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ENABLE_VEHICLE_SEAT(bLocal_1127, 2, 0);
			Function_415();
			AUDIO_MUSIC_SET_MOOD("RUN", 0, 4294967295, 4294967295);
			bLocal_1124 = Function_493();
			Function_408(&(Local_986[017]), bLocal_919, "Merchant", 0, 0x5f5e100, 1);
			Function_408(&(Local_986[117]), bLocal_1126, "Marshal", 0, 0x5f5e100, 1);
			Function_408(&(Local_986[217]), bLocal_1125, "GraveRobber", 0, 0x5f5e100, 1);
			Function_408(&(Local_986[317]), (*&Local_4 + 552)[02], "Deputies", 0, 0x5f5e100, 1);
			Function_408(&(Local_986[417]), (*&Local_4 + 552)[12], "Deputies", 0, 0x5f5e100, 1);
			Function_408(&(Local_986[517]), (*&Local_4 + 552)[22], "Deputies", 0, 0x5f5e100, 1);
			Function_408(&(Local_986[617]), bLocal_1127, "Wagon", 0, 0x5f5e100, 1);
			Function_211(0);
			Function_214(&bLocal_920);
			iLocal_916 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_488();
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_1126);
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_4 + 552)[02]);
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_4 + 552)[12]);
				STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_4 + 552)[22]);
				RESET_GAME_CAMERA_CURVE_OVERRIDES();
				SET_ACTOR_CAN_PLAY_GESTURES(bLocal_919, false);
				Function_487();
				Function_214(&bLocal_920);
				iLocal_916 = 7;
			}
			break;
		
		case 0x00000007:
			if (DECOR_CHECK_EXIST((*&Local_4 + 552)[02], "slowed") && Function_268(&bLocal_920) <= 1.0f)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE((*&Local_4 + 552)[02]);
				DECOR_REMOVE((*&Local_4 + 552)[02], "slowed");
			}
			if (DECOR_CHECK_EXIST((*&Local_4 + 552)[12], "slowed") && Function_268(&bLocal_920) <= 0,5f)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE((*&Local_4 + 552)[12]);
				DECOR_REMOVE((*&Local_4 + 552)[12], "slowed");
			}
			if (DECOR_CHECK_EXIST((*&Local_4 + 552)[22], "slowed") && Function_268(&bLocal_920) <= 1,5f)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE((*&Local_4 + 552)[22]);
				DECOR_REMOVE((*&Local_4 + 552)[22], "slowed");
			}
			if (Function_268(&bLocal_920) <= 5.0f)
			{
				Function_404("Fort01_obj05", 7,5f, 1, 2, 0, 0, 0);
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bLocal_1126)))
				{
					ADD_BLIP_FOR_ACTOR(bLocal_1126, 325, 0, 2, 0);
				}
				SET_ACTOR_CAN_PLAY_GESTURES(bLocal_919, true);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_214(&bLocal_920);
				Function_214(&bLocal_923);
				Function_214(&bLocal_926);
				iLocal_916 = 8;
			}
			break;
		
		case 0x00000008:
			Function_480("guards2a", Local_4.f_668);
			if (Function_268(&bLocal_1148) < 1.0f)
			{
				Function_479(Local_4.f_580, Local_4.f_668);
				Function_479(Local_4.f_668, Local_4.f_580);
				Function_477(&Local_4 + 1400, 2.0f, 75.0f, 7);
				Function_214(&bLocal_1148);
			}
			Function_522();
			break;
		
		case 0x00000009:
			Function_480("guards2b", Local_4.f_672);
			if (Function_268(&bLocal_1148) < 1.0f)
			{
				Function_479(Local_4.f_580, Local_4.f_672);
				Function_479(Local_4.f_672, Local_4.f_580);
				Function_477(&Local_4 + 1432, 1.0f, 75.0f, 7);
				Function_214(&bLocal_1148);
			}
			Function_524();
			break;
		
		case 0x0000000A:
			Function_480("guards2c", Local_4.f_676);
			if (Function_268(&bLocal_1148) < 1.0f)
			{
				Function_479(Local_4.f_580, Local_4.f_676);
				Function_479(Local_4.f_676, Local_4.f_580);
				Function_477(&Local_4 + 1464, 1.0f, 75.0f, 7);
				Function_214(&bLocal_1148);
			}
			Function_526();
			break;
		
		case 0x0000000B:
			Function_480("guards2d", Local_4.f_680);
			if (Function_268(&bLocal_1148) < 1.0f)
			{
				Function_479(Local_4.f_580, Local_4.f_680);
				Function_479(Local_4.f_680, Local_4.f_580);
				Function_214(&bLocal_1148);
			}
			Function_528();
			break;
		
		case 0x0000000C:
			Function_480("guards2e", Local_4.f_684);
			if (SQUAD_IS_VALID(Local_4.f_684))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_684) >= 0)
				{
					if (Function_268(&bLocal_1148) < 1.0f)
					{
						Function_479(Local_4.f_580, Local_4.f_684);
						Function_479(Local_4.f_684, Local_4.f_580);
						Function_477(&Local_4 + 1528, 1.0f, 75.0f, 7);
						Function_214(&bLocal_1148);
					}
				}
				else if (SQUAD_IS_VALID(Local_4.f_688))
				{
					if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_688) >= 0)
					{
						if (Function_268(&bLocal_1148) < 1.0f)
						{
							Function_479(Local_4.f_580, Local_4.f_688);
							Function_479(Local_4.f_688, Local_4.f_580);
							Function_477(&Local_4 + 1528, 1.0f, 75.0f, 7);
							Function_214(&bLocal_1148);
						}
					}
				}
			}
			else if (SQUAD_IS_VALID(Local_4.f_688))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_688) >= 0)
				{
					if (Function_268(&bLocal_1148) < 1.0f)
					{
						Function_479(Local_4.f_580, Local_4.f_688);
						Function_479(Local_4.f_688, Local_4.f_580);
						Function_477(&Local_4 + 1528, 1.0f, 75.0f, 7);
						Function_214(&bLocal_1148);
					}
				}
			}
			if (SQUAD_IS_VALID(Local_4.f_684) && SQUAD_IS_VALID(Local_4.f_688))
			{
				if (((((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_668) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_672) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_676) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_680) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_684) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_688) >= 0)
				{
					Function_476(Local_4.f_580);
					Function_214(&bLocal_920);
					iLocal_916 = 13;
				}
			}
			break;
		
		case 0x0000000D:
			if (Function_268(&bLocal_920) <= 1.0f)
			{
				Function_475();
				Function_214(&bLocal_920);
				iLocal_916 = 14;
			}
			break;
		
		case 0x0000000E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_268(&bLocal_920) <= 3.0f)
			{
				SQUAD_GOALS_CLEAR(Local_4.f_580);
				Function_293(Local_4.f_580);
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_473();
				if (!IS_ACTOR_IN_VOLUME(bLocal_1126, (*&Local_4 + 884)[0]))
				{
					bLocal_1135 = Function_472(bLocal_805, Function_53(), (*&Local_4 + 808)[3], Global_34573, 1, 330, 4294967295, 0, 0, 1);
					Function_404("Fort01_obj06_yellow", 7,5f, 1, 2, 0, 0, 0);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1126)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_1126));
					}
				}
				else
				{
					Function_404("Fort01_obj06_blue", 7,5f, 1, 2, 0, 0, 0);
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_1126)))
					{
						ADD_BLIP_FOR_ACTOR(bLocal_1126, 325, 0, 2, 0);
					}
				}
				Function_214(&bLocal_920);
				iLocal_916 = 15;
			}
			break;
		
		case 0x0000000F:
			Function_464();
			if (IS_OBJECT_VALID(bLocal_1135))
			{
				if (Function_461(bLocal_1135, 0, 1, 0, 0, 0))
				{
					Function_460(bLocal_1135);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_919)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_919));
					}
					Function_233();
					Function_214(&bLocal_920);
					iLocal_916 = 106;
				}
			}
			else if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 808)[3]))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bLocal_919)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bLocal_919));
				}
				Function_233();
				Function_214(&bLocal_920);
				iLocal_916 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_268(&bLocal_920) < 3.0f)
			{
				AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
				if (SQUAD_IS_VALID(Local_4.f_668))
				{
					Function_210(&Local_4 + 668);
					DESTROY_OBJECT(Local_4.f_668);
				}
				if (SQUAD_IS_VALID(Local_4.f_672))
				{
					Function_210(&Local_4 + 672);
					DESTROY_OBJECT(Local_4.f_672);
				}
				if (SQUAD_IS_VALID(Local_4.f_676))
				{
					Function_210(&Local_4 + 676);
					DESTROY_OBJECT(Local_4.f_676);
				}
				if (SQUAD_IS_VALID(Local_4.f_680))
				{
					Function_210(&Local_4 + 680);
					DESTROY_OBJECT(Local_4.f_680);
				}
				if (SQUAD_IS_VALID(Local_4.f_684))
				{
					Function_210(&Local_4 + 684);
					DESTROY_OBJECT(Local_4.f_684);
				}
				ACTOR_END_FORCE_HOLSTER(bLocal_919);
				MEMORY_ALLOW_SHOOTING(bLocal_919, true);
				Function_351(bLocal_1127, (*&Local_4 + 1948)[4], 1, 1, 1);
				Function_459();
				iLocal_929[2] = 1;
				Function_214(&bLocal_920);
				bLocal_915 = 3;
				iLocal_916 = 2;
			}
			break;
	}
	return;
}

void Function_459() //Position: 0x17001 / 94209
{
	Function_170(&Local_4 + 436);
	return;
}

void Function_460(bool bParam0) //Position: 0x1700F / 94223
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

bool Function_461(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x17099 / 94361
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
				Function_463(bVar1, uParam5);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				if (Function_462(bVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(bVar1)))
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
				if (Function_462(bVar1, 0) < 12.0f)
				{
					vVar3 = { 0.0f, 0.0f, -4.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_449(&iVar6, &vVar3);
				}
				else
				{
					vVar3 = { 0.0f, 0.0f, -2.0f };
					UNK_0xB89CC342(bVar1, &vVar3, &iVar6);
					Function_449(&iVar6, &vVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &vVar3, 1);
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

float Function_462(bool bParam0, bool bParam1) //Position: 0x172AB / 94891
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_463(bool bParam0, bool bParam1) //Position: 0x172CA / 94922
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
	else if (!bParam1 || Function_462(bParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(bParam0, 1);
	}
	return;
}

void Function_464() //Position: 0x17327 / 95015
{
	bool bVar0;
	
	if (!Function_471(4, bLocal_1124))
	{
		if ((GET_TASK_STATUS(bLocal_1126, 0) != 0 || GET_TASK_STATUS(bLocal_1126, 6) != 0) || !GET_TASK_STATUS(bLocal_1126, 0) != 1)
		{
			if (!Function_468(bLocal_1126, Global_34573, 5.0f))
			{
				RESET_ANIM_SET_FOR_ACTOR(bLocal_1126, 1);
				SET_ANIM_SET_FOR_ACTOR(bLocal_1126, "one_handed_wave", 0);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
				TASK_ACTION_PERFORM(false, "one_handed_wave/wave");
				TASK_STAND_STILL(false, 15.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_1126, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				Function_282(bLocal_1126);
				AI_GOAL_STAND_AT_COORD(bLocal_1126, Function_282(bLocal_1126), 1);
			}
			else
			{
				TASK_STAND_STILL(bLocal_1126, 15.0f, 0, 0);
			}
			DECOR_SET_FLOAT(bLocal_1126, "taskedwave", GET_CURRENT_GAME_TIME());
			Function_467(4);
			bLocal_1124 = Function_493();
		}
	}
	else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_1126, "taskedwave")) < 20.0f)
	{
		DECOR_REMOVE(bLocal_1126, "taskedwave");
		Function_466(3);
		Function_466(4);
		bLocal_1124 = Function_493();
	}
	if ((IS_ACTION_NODE_PLAYING_PARTIAL(bLocal_1126, "wave") && !IS_SCRIPTED_CONVERSATION_ONGOING()) && !Function_471(3, bLocal_1124))
	{
		Function_465();
		Function_467(3);
		bLocal_1124 = Function_493();
	}
	return;
}

void Function_465() //Position: 0x1747F / 95359
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_farBehind_Marshal", "Fort01_farBehind_Marshal", false, 1, 1, 0, 1);
		Function_365(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_466(int iParam0) //Position: 0x174D8 / 95448
{
	int iVar0;
	
	*(&iVar0 + 80) = 3;
	RETRIEVE_GAME_STATE(&iVar0, 44, 1);
	Function_36(&iVar0 + 148, iParam0);
	STORE_GAME_STATE(&iVar0, 44, 1);
	return;
}

void Function_467(int iParam0) //Position: 0x17500 / 95488
{
	int iVar0;
	
	*(&iVar0 + 80) = 3;
	RETRIEVE_GAME_STATE(&iVar0, 44, 1);
	Function_76(&iVar0 + 148, iParam0);
	STORE_GAME_STATE(&iVar0, 44, 1);
	return;
}

bool Function_468(var uParam0, var uParam1, float fParam2) //Position: 0x17528 / 95528
{
	float fVar0;
	
	fVar0 = Function_469(uParam0, uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_469(bool bParam0, bool bParam1) //Position: 0x17545 / 95557
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_470(&uVar0, &uVar3);
	return iVar6;
}

var Function_470(var uParam0, int iParam1) //Position: 0x17564 / 95588
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

bool Function_471(bool bParam0, bool bParam1) //Position: 0x17582 / 95618
{
	return Function_153(bParam1, bParam0);
}

var Function_472(bool bParam0, bool bParam1, bool bParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, int iParam9) //Position: 0x1758F / 95631
{
	bool bVar0;
	
	bVar0 = CREATE_GATEWAY_IN_LAYOUT(bParam0, bParam1, bParam2, uParam3, iParam4, iParam6, iParam7, bParam8, iParam9, 1);
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

void Function_473() //Position: 0x1760C / 95756
{
	var uVar0;
	
	if (IS_ACTOR_VALID(bLocal_1126))
	{
		TASK_CLEAR(bLocal_1126);
		GET_OBJECT_POSITION((*&Local_4 + 1156)[5], &uVar0);
		bLocal_1137 = TASK_SEQUENCE_OPEN();
		if (Function_474(bLocal_1126, (*&Local_4 + 1532)[0], 2.0f))
		{
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_3136, 2, 1, 0, 1, false);
		}
		else if (IS_ACTOR_IN_VOLUME(bLocal_1126, (*&Local_4 + 884)[0]))
		{
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_3144, 2, 1, 0, 1, false);
		}
		TASK_GO_TO_COORD(false, &uVar0, 2);
		TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_1126, bLocal_1137);
		TASK_SEQUENCE_RELEASE(bLocal_1137, 1);
		TASK_PRIORITY_SET(bLocal_1126, true);
	}
	if (IS_ACTOR_VALID(bLocal_1125))
	{
		RESET_ANIM_SET_FOR_ACTOR(bLocal_1125, 0);
		GET_OBJECT_POSITION((*&Local_4 + 1156)[7], &uVar0);
		bLocal_1137 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(false, &uVar0, 2);
		TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_3036), "UseCase1", 4294967295, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_1125, bLocal_1137);
		TASK_SEQUENCE_RELEASE(bLocal_1137, 1);
		TASK_PRIORITY_SET(bLocal_1125, true);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 552)[02]))
	{
		GET_OBJECT_POSITION((*&Local_4 + 1156)[9], &uVar0);
		bLocal_1137 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(false, &uVar0, 2);
		TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_3016), "UseCase1", 4294967295, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM((*&Local_4 + 552)[02], bLocal_1137);
		TASK_SEQUENCE_RELEASE(bLocal_1137, 1);
		TASK_PRIORITY_SET((*&Local_4 + 552)[02], true);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 552)[12]))
	{
		GET_OBJECT_POSITION((*&Local_4 + 1156)[12], &uVar0);
		bLocal_1137 = TASK_SEQUENCE_OPEN();
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_3132, 2, 1, 0, 1, false);
		TASK_GO_TO_COORD(false, &uVar0, 2);
		TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_3020), "UseCase1", 4294967295, 1);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM((*&Local_4 + 552)[12], bLocal_1137);
		TASK_SEQUENCE_RELEASE(bLocal_1137, 1);
		TASK_PRIORITY_SET((*&Local_4 + 552)[12], true);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 552)[22]))
	{
		GET_OBJECT_POSITION((*&Local_4 + 1156)[14], &uVar0);
		bLocal_1137 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_COORD(false, &uVar0, 2);
		TASK_FACE_ACTOR(false, Global_34573, 0, 3212836864);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM((*&Local_4 + 552)[22], bLocal_1137);
		TASK_SEQUENCE_RELEASE(bLocal_1137, 1);
		TASK_PRIORITY_SET((*&Local_4 + 552)[22], true);
	}
	return;
}

bool Function_474(bool bParam0, bool bParam1, float fParam2) //Position: 0x17841 / 96321
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_379(bParam0);
			Function_322(bParam1);
			if (VDIST(Function_379(bParam0), Function_322(bParam1)) >= fParam2)
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

void Function_475() //Position: 0x1795B / 96603
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_regroup_Marshal", "Fort01_regroup_Marshal", false, 1, 1, 0, 1);
		Function_365(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_476(bool bParam0) //Position: 0x179B0 / 96688
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
				AI_GOAL_SHOOT_CLEAR(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_477(var uParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x179EA / 96746
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (SQUAD_IS_VALID(Local_4.f_580))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(Local_4.f_580))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_580, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if ((DECOR_CHECK_EXIST(bVar1, "x_vector") && DECOR_CHECK_EXIST(bVar1, "y_vector")) && DECOR_CHECK_EXIST(bVar1, "z_vector"))
				{
					vVar2 = { 0.0f, 0.0f, 0.0f };
					vVar2.x = DECOR_GET_FLOAT(bVar1, "x_vector");
					vVar2.f_4 = DECOR_GET_FLOAT(bVar1, "y_vector");
					vVar2.f_8 = DECOR_GET_FLOAT(bVar1, "z_vector");
					if (Function_442(StackVal, StackVal, Global_34573, vVar2, 2.0f))
					{
						bVar5 = Function_478(*uParam0);
						if (!DECOR_CHECK_EXIST(bVar5, "altused"))
						{
							if (DECOR_CHECK_EXIST(bVar1, "ncoverused"))
							{
								DECOR_REMOVE(GET_INDEXED_OBJECT_IN_OBJECTSET(DECOR_GET_INT(bVar1, "ncoverused"), *uParam0), "used");
							}
							Function_338(bVar1, bVar5, bParam1, bParam2, iParam3, bVar0, 0, 0, 0);
						}
						if (bVar1 == bLocal_1126)
						{
						}
					}
				}
				else if (bVar1 == bLocal_1126)
				{
				}
			}
			bVar0++;
		}
	}
}

var Function_478(bool bParam0) //Position: 0x17B24 / 97060
{
	bool bVar0;
	bool bVar1;
	
	if (IS_OBJECTSET_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(bParam0))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0);
			if (IS_OBJECT_VALID(bVar1))
			{
				if (!DECOR_CHECK_EXIST(bVar1, "used"))
				{
					return bVar1;
				}
			}
			bVar0++;
		}
	}
	return "";
}

void Function_479(bool bParam0, bool bParam1) //Position: 0x17B6E / 97134
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (SQUAD_IS_VALID(bParam0) && SQUAD_IS_VALID(bParam1))
	{
		iVar0 = SQUAD_GET_SIZE(bParam1);
		if (iVar0 > 1)
		{
			bVar1 = false;
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(bParam0))
			{
				bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, RAND_INT_RANGE(false, (iVar0 - 1)));
					if (IS_ACTOR_VALID(bVar3))
					{
						if ((DECOR_CHECK_EXIST(bVar3, "x_vector") && DECOR_CHECK_EXIST(bVar3, "y_vector")) && DECOR_CHECK_EXIST(bVar3, "z_vector"))
						{
							MEMORY_REPORT_POSITION_AUTO(bVar2, bVar3, true);
							vVar4 = { 0.0f, 0.0f, 0.0f };
							vVar4.x = DECOR_GET_FLOAT(bVar2, "x_vector");
							vVar4.f_4 = DECOR_GET_FLOAT(bVar2, "y_vector");
							vVar4.f_8 = DECOR_GET_FLOAT(bVar2, "z_vector");
							Function_379(bVar2);
							if (VDIST(Function_379(bVar2), vVar4) > 2.0f)
							{
								AI_GOAL_SHOOT_AT_OBJECT(bVar2, bVar3);
							}
							else
							{
								Function_379(bVar2);
								vVar7 = { StackVal, StackVal, Function_379(bVar2) };
							}
						}
					}
				}
				bVar1++;
			}
		}
		else
		{
			Function_476(bParam0);
		}
	}
	return;
}

void Function_480(bool bParam0, bool bParam1) //Position: 0x17C7A / 97402
{
	bool bVar0;
	
	if (!IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (!DECOR_CHECK_EXIST(bLocal_805, bParam0))
		{
			if (Function_385())
			{
				if (Function_486(bParam1, bLocal_1126))
				{
					Function_485();
				}
			}
			else if (Function_486(bParam1, bLocal_1125))
			{
				Function_484();
			}
			DECOR_SET_BOOL(bLocal_805, bParam0, true);
		}
		else if (Function_268(&bLocal_920) < (30.0f / 2.0f))
		{
			bVar0 = FLOOR(RAND_FLOAT_RANGE(0.0f, 3.0f));
			if (bVar0 != 2 && Function_486(bParam1, bLocal_1126))
			{
				Function_483();
				Function_214(&bLocal_920);
			}
			else if (bVar0 != 1 && Function_486(bParam1, bLocal_1125))
			{
				Function_482();
				Function_214(&bLocal_920);
			}
			else if (Function_486(bParam1, Global_34573))
			{
				Function_481();
				Function_214(&bLocal_920);
			}
		}
	}
	return;
}

void Function_481() //Position: 0x17D2C / 97580
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Fort01_JonTaunts", "Fort01_JonTaunts", 2, 1, 1, 0, 1);
		Function_365(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_482() //Position: 0x17D75 / 97653
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_SethTaunts", "Fort01_SethTaunts", false, 1, 1, 0, 1);
		Function_365(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_483() //Position: 0x17DC1 / 97729
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_MarshalTaunts", "Fort01_MarshalTaunts", false, 1, 1, 0, 1);
		Function_365(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_484() //Position: 0x17E12 / 97810
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_SethSpots_enemies", "Fort01_SethSpots_enemies", false, 1, 1, 0, 1);
		Function_365(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_485() //Position: 0x17E6C / 97900
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_MarshalSpots_enemies", "Fort01_MarshalSpots_enemies", false, 1, 1, 0, 1);
		Function_365(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_486(bool bParam0, bool bParam1) //Position: 0x17ECB / 97995
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

void Function_487() //Position: 0x17F21 / 98081
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_movesIn", "Fort01_movesIn", false, 1, 1, 0, 1);
		Function_365(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_488() //Position: 0x17F66 / 98150
{
	if (SQUAD_IS_VALID(Local_4.f_668))
	{
		SQUAD_GOALS_CLEAR(Local_4.f_668);
		Function_293(Local_4.f_668);
		SQUAD_SET_FACTION(Local_4.f_668, 19);
		Function_492(Local_4.f_668, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		DECOR_SET_BOOL(Local_4.f_668, "blipped", true);
		Function_491(Local_4.f_668, &Local_4 + 1560, 1.0f, 75.0f, 7, 0, &Local_4 + 1564, 0);
	}
	if (SQUAD_IS_VALID(Local_4.f_672))
	{
		SQUAD_GOALS_CLEAR(Local_4.f_672);
		Function_293(Local_4.f_672);
		SQUAD_SET_FACTION(Local_4.f_672, 19);
		Function_491(Local_4.f_672, &Local_4 + 1628, 1.0f, 75.0f, 7, 0, &Local_4 + 1632, 0);
	}
	if (SQUAD_IS_VALID(Local_4.f_676))
	{
		SQUAD_GOALS_CLEAR(Local_4.f_676);
		Function_293(Local_4.f_676);
		SQUAD_SET_FACTION(Local_4.f_676, 19);
		Function_491(Local_4.f_676, &Local_4 + 1696, 1.0f, 75.0f, 7, 0, &Local_4 + 1700, 0);
	}
	if (SQUAD_IS_VALID(Local_4.f_680))
	{
		SQUAD_GOALS_CLEAR(Local_4.f_680);
		Function_293(Local_4.f_680);
		SQUAD_SET_FACTION(Local_4.f_680, 19);
		Function_490(Local_4.f_680, 40, 0,5f);
		Function_490(Local_4.f_680, 41, 0,5f);
		Function_489(Local_4.f_680, 41, 1, 1);
		Function_491(Local_4.f_680, &Local_4 + 1736, 1.0f, 75.0f, 7, 0, &Local_4 + 1740, 0);
	}
	return;
}

void Function_489(bool bParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x180C6 / 98502
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

void Function_490(bool bParam0, bool bParam1, bool bParam2) //Position: 0x18136 / 98614
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

void Function_491(bool bParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x18182 / 98690
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<9> Var3;
	
	iParam5 = iParam5;
	if (SQUAD_IS_VALID(bParam0))
	{
		SQUAD_GOALS_CLEAR(bParam0);
		Function_293(bParam0);
		if (IS_OBJECTSET_VALID(*uParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam1);
					if (IS_OBJECT_VALID(bVar2))
					{
						Function_322(bVar2);
						vVar3 = { StackVal, StackVal, Function_322(bVar2) };
						bVar6 = GET_OBJECT_HEADING(bVar2);
						bLocal_1137 = TASK_SEQUENCE_OPEN();
						TASK_DRAW_HOLSTER_WEAPON(false, 1);
						if (IS_OBJECT_VALID(bParam7))
						{
							vVar7 = { 0.0f, 0.0f, 0.0f };
							GET_PATH_POINT(bParam7, false, &vVar7);
							TASK_GO_TO_COORD(false, &vVar7, 4);
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, bParam7, 4, 0, 0, 1, false);
						}
						TASK_GO_TO_COORD(false, &vVar3, 4);
						if (bLocal_915 == 1)
						{
							TASK_SHOOT_ENEMIES_FROM_ANY_COVER(false, -1.0f);
						}
						else
						{
							bVar10 = FIND_NEAREST_COVER_LOCATION(StackVal, uParam6[bVar06], bParam2, bParam3, iParam4);
							if (!IS_COVER_LOCATION_VALID(bVar10))
							{
								vVar11 = { 0.0f, 0.0f, 0.0f };
								UNK_0x44986367(&vVar11, bVar6);
								bVar10 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(bLocal_805, Function_53(), *uParam6[bVar06], *(uParam6[bVar06] + 12), 4));
							}
							TASK_SHOOT_ENEMIES_FROM_COVER(false, bVar10, -1.0f, 1086324736);
							DECOR_SET_FLOAT(bVar1, "x_vector", vVar3.x);
							DECOR_SET_FLOAT(bVar1, "y_vector", vVar3.y);
							DECOR_SET_FLOAT(bVar1, "z_vector", vVar3.z);
						}
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bVar1, bLocal_1137);
						TASK_SEQUENCE_RELEASE(bLocal_1137, 1);
					}
					else
					{
						TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar1, -1.0f);
					}
					TASK_PRIORITY_SET(bVar1, true);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar1, 0);
					SET_ACTOR_UPDATE_PRIORITY(bVar1, false);
					DECOR_SET_INT(bVar1, "AiCoverExpose", true);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar1, 2, false);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar1, 3, false);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar1, 16, true);
					SET_CRIPPLE_ENABLE(bVar1, 0);
				}
				bVar0++;
			}
		}
	}
}

void Function_492(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x1833D / 99133
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

bool Function_493() //Position: 0x18427 / 99367
{
	struct<149> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	return Var0.f_148;
}

void Function_494(bool bParam0, bool bParam1) //Position: 0x18442 / 99394
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_495(bool bParam0) //Position: 0x18481 / 99457
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (IS_VOLUME_VALID(bParam0))
	{
		bVar1 = CREATE_OBJECTSET_IN_LAYOUT("TempObjectSetForActors", Global_6288, 4294967295, 0);
		if (IS_OBJECTSET_VALID(bVar1))
		{
			LOCATE_ACTORS_IN_VOLUME(bParam0, bVar1, 0, 1);
			bVar0 = false;
			while (bVar0 < (GET_OBJECTSET_SIZE(bVar1) - 1))
			{
				bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bVar1);
				if (IS_OBJECT_VALID(bVar2))
				{
					bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (bVar3 != GET_PLAYER_ACTOR(0))
						{
							DESTROY_ACTOR(bVar3);
						}
					}
				}
				bVar0++;
			}
			DESTROY_OBJECTSET(bVar1);
		}
	}
	return;
}

var Function_496(bool bParam0, int iParam1) //Position: 0x1851E / 99614
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_497() //Position: 0x1852F / 99631
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_53(), bLocal_805, 4294967295, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(bVar0))
	{
		bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bVar0);
		if (IS_OBJECT_VALID(bVar2))
		{
			vVar3 = { 0.0f, 0.0f, 0.0f };
			if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bVar2), "p_gen_crateWeaponsBreak01x"))
			{
				Function_229(bVar2);
				if (VDIST(Function_229(bVar2), -2697,192f, 67,26273f, 3501,675f) > 5.0f)
				{
					DESTROY_OBJECT(bVar2);
				}
				else
				{
					GET_OBJECT_RELATIVE_POSITION(bVar2, 1,35f, 0,5f, -0,6f, &vVar3);
					Function_300(bVar2);
					vVar6 = { StackVal, StackVal, Function_300(bVar2) };
					ROTATE_VECTOR_XZ(&vVar6, 180.0f, 0);
					CREATE_OBSTACLE_ON_OBJECT(bVar2, Function_53(), vVar3, vVar6, 2,7f, 1.0f, 1,2f);
				}
			}
			else
			{
				Function_229(bVar2);
				Function_229((*&Local_4 + 1984)[0]);
				if (VDIST(Function_229(bVar2), Function_229((*&Local_4 + 1984)[0])) > 5.0f)
				{
					DESTROY_OBJECT(bVar2);
				}
				else
				{
					GET_OBJECT_RELATIVE_POSITION(bVar2, 0,8f, 0,5f, -0,6f, &vVar3);
					Function_300(bVar2);
					vVar6 = { StackVal, StackVal, Function_300(bVar2) };
					ROTATE_VECTOR_XZ(&vVar6, 180.0f, 0);
					CREATE_OBSTACLE_ON_OBJECT(bVar2, Function_53(), vVar3, vVar6, 1,6f, 1.0f, 1,2f);
				}
			}
		}
		bVar1++;
	}
	return;
}

void Function_498() //Position: 0x1866D / 99949
{
	vector3 vVar0;
	vector3 vVar3;
	
	Global_3418 = 0;
	Function_305((*&Local_4 + 1948)[2]);
	START_VEHICLE(bLocal_1127);
	ENABLE_VEHICLE_SEAT(bLocal_1127, true, 0);
	ENABLE_VEHICLE_SEAT(bLocal_1127, 2, 0);
	GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_1129), false);
	Function_351(bLocal_919, (*&Local_4 + 1080)[3], 0, 1, 1);
	SNAP_ACTOR_TO_GRINGO(bLocal_919, Local_4.f_3032, "UseCAse1", true, 0, 0);
	TASK_USE_GRINGO(bLocal_919, GET_GRINGO_FROM_OBJECT(Local_4.f_3032), "UseCAse1", 4294967295, 1);
	SQUAD_MAKE_EMPTY(Local_4.f_580);
	SQUAD_JOIN(bLocal_1126, Local_4.f_580);
	SQUAD_JOIN((*&Local_4 + 552)[02], Local_4.f_580);
	SQUAD_JOIN((*&Local_4 + 552)[12], Local_4.f_580);
	SQUAD_JOIN((*&Local_4 + 552)[22], Local_4.f_580);
	SQUAD_JOIN(bLocal_1125, Local_4.f_580);
	SQUAD_GOAL_ADD_STAY_OUTSIDE_OF_VOLUME(Local_4.f_580, 0, (*&Local_4 + 884)[4], 2, 1);
	GET_VOLUME_SCALE((*&Local_4 + 884)[4], &vVar0);
	GET_VOLUME_CENTER((*&Local_4 + 884)[4], &vVar3);
	Function_300((*&Local_4 + 884)[4]);
	CREATE_OBSTACLE_IN_LAYOUT(bLocal_805, Function_53(), vVar3, Function_300((*&Local_4 + 884)[4]), vVar0);
	if (!SQUAD_IS_VALID(Local_4.f_668))
	{
		Function_506();
	}
	SQUAD_SET_FACTION(Local_4.f_668, 19);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_668, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_668, 2048);
	if (!SQUAD_IS_VALID(Local_4.f_672))
	{
		Function_505();
	}
	SQUAD_SET_FACTION(Local_4.f_672, 19);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_672, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_672, 2048);
	if (!SQUAD_IS_VALID(Local_4.f_676))
	{
		Function_504();
	}
	SQUAD_SET_FACTION(Local_4.f_676, 19);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_676, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_676, 2048);
	if (!SQUAD_IS_VALID(Local_4.f_680))
	{
		Function_503();
	}
	SQUAD_SET_FACTION(Local_4.f_680, 19);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_680, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_680, 2048);
	if (!SQUAD_IS_VALID(Local_4.f_620))
	{
		Function_502();
	}
	Function_420(Local_4.f_620, 0);
	Function_501(Local_4.f_620, 3);
	Function_351((*&Local_4 + 584)[02], (*&Local_4 + 1080)[8], 1, 1, 1);
	Function_351((*&Local_4 + 584)[12], (*&Local_4 + 1080)[9], 1, 1, 1);
	Function_351((*&Local_4 + 584)[22], (*&Local_4 + 1080)[10], 1, 1, 1);
	Function_351((*&Local_4 + 584)[32], (*&Local_4 + 1080)[6], 1, 1, 1);
	Function_500(Local_4.f_620, 1.0f);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_620, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	SQUAD_GOALS_CLEAR(Local_4.f_620);
	Function_499(Local_4.f_620, Local_4.f_1360);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_620, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	return;
}

void Function_499(bool bParam0, bool bParam1) //Position: 0x1891F / 100639
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	struct<5> Var6;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_OBJECTSET_VALID(bParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
					if (IS_OBJECT_VALID(bVar2))
					{
						Function_229(bVar2);
						vVar3 = { StackVal, StackVal, Function_229(bVar2) };
						Function_300(bVar2);
						Var6 = { StackVal, StackVal, Function_300(bVar2) };
						if (!Function_73(StackVal, StackVal, vVar3))
						{
							if (!Function_73(StackVal, StackVal, Var6))
							{
								TELEPORT_ACTOR_WITH_HEADING(StackVal, bVar1, vVar3, 1, true, 1);
							}
						}
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_500(bool bParam0, float fParam1) //Position: 0x189B9 / 100793
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				AI_SET_NAV_ACTOR_WIDTH(bVar1, fParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_501(bool bParam0, bool bParam1) //Position: 0x189F8 / 100856
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

void Function_502() //Position: 0x18A3A / 100922
{
	Local_4.f_620 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Horse01"));
	(*&Local_4 + 584)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_01_01", 976, -2882,762f, 59,54217f, 3413,238f, 0.0f, -56,94253f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 584)[02], Local_4.f_620);
	(*&Local_4 + 584)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_01_02", 977, -2884.0f, 59,87371f, 3409,441f, 0.0f, -71,10464f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 584)[12], Local_4.f_620);
	(*&Local_4 + 584)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_01_03", 980, -2880.0f, 60,23529f, 3414,172f, 0.0f, -53,03073f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 584)[22], Local_4.f_620);
	(*&Local_4 + 584)[32] = CREATE_ACTOR_IN_LAYOUT(Local_4, "HORSE_01_04", 981, -2885,114f, 59,23135f, 3412.0f, 0.0f, -55,90071f, 0.0f);
	SQUAD_JOIN((*&Local_4 + 584)[32], Local_4.f_620);
	return;
}

void Function_503() //Position: 0x18B67 / 101223
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_680 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "nGuards02d"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_02D_01", 400, -2657,675f, 71,64566f, 3412,395f, 0.0f, 133,2612f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_680);
	return;
}

void Function_504() //Position: 0x18BC7 / 101319
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_676 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "nGuards02c"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_02C_03", 402, -2662,57f, 71,66015f, 3414,565f, 0.0f, 137,8481f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_676);
	return;
}

void Function_505() //Position: 0x18C27 / 101415
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_672 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "nGuards02b"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_02B_01", 400, -2675,966f, 71,65486f, 3429,128f, 0.0f, 139,9928f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_672);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_02B_02", 401, -2692,043f, 71,68845f, 3430,981f, 0.0f, 173,5133f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_672);
	return;
}

void Function_506() //Position: 0x18CC0 / 101568
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_668 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "nGuards02a"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_02A_01", 402, -2702,362f, 73,99786f, 3442,58f, 0.0f, 157,0074f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_668);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_02A_02", 397, -2696,372f, 75,79185f, 3445,864f, 0.0f, 136,6832f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_668);
	return;
}

int Function_507() //Position: 0x18D59 / 101721
{
	Function_303(2, 1, 1, 1, 1, 1, 0, 1, 1, 1);
	return 1;
}

int Function_508() //Position: 0x18D6D / 101741
{
	Function_437(&Local_4 + 436, 402, 2, 0);
	Function_437(&Local_4 + 436, 397, 2, 0);
	Function_437(&Local_4 + 436, 400, 2, 0);
	Function_437(&Local_4 + 436, 401, 2, 0);
	if (Function_308(&Local_4 + 436))
	{
		return 1;
	}
	return 0;
}

void Function_509() //Position: 0x18DB9 / 101817
{
	SET_HUD_MAP_DRAW_ENABLED(1);
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_919);
	Function_351(bLocal_919, (*&Local_4 + 1080)[2], 1, 1, 1);
	TASK_STAND_STILL(bLocal_919, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_919, true);
	SET_ACTOR_HEALTH(bLocal_919, GET_ACTOR_MAX_HEALTH(bLocal_919));
	Function_351(bLocal_1125, (*&Local_4 + 1080)[4], 1, 1, 1);
	bLocal_1137 = TASK_SEQUENCE_OPEN();
	TASK_DRAW_HOLSTER_WEAPON(false, 1);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(bLocal_1125, bLocal_1137);
	TASK_SEQUENCE_RELEASE(bLocal_1137, 1);
	TASK_PRIORITY_SET(bLocal_1125, true);
	SET_ACTOR_HEALTH(bLocal_1125, GET_ACTOR_MAX_HEALTH(bLocal_1125));
	Function_351(bLocal_1126, (*&Local_4 + 1080)[6], 1, 1, 1);
	TASK_STAND_STILL(bLocal_1126, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_1126, true);
	SET_ACTOR_HEALTH(bLocal_1126, GET_ACTOR_MAX_HEALTH(bLocal_1126));
	DELETE_ALL_WEAPONS_FROM_ACTOR(bLocal_1126);
	GIVE_WEAPON_TO_ACTOR(bLocal_1126, 4, false, 1, 1);
	MEMORY_ALLOW_PICKUP_WEAPONS(bLocal_1126, 0);
	SET_ACTOR_ALLOW_DISARM(bLocal_1126, false);
	if (!SQUAD_IS_VALID(Local_4.f_580))
	{
		Function_435();
	}
	SQUAD_SET_FACTION(Local_4.f_580, 20);
	Function_511(Local_4.f_580);
	Function_433(Local_4.f_580, Global_34573, 0);
	bLocal_1167 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_580, false);
	bLocal_1168 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_580, true);
	SQUAD_JOIN(bLocal_1126, Local_4.f_580);
	Function_510(Local_4.f_580, Local_4.f_620);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_580, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	Function_434(Local_4.f_580, 0);
	STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(bLocal_1126);
	STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_4 + 552)[02]);
	STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_4 + 552)[12]);
	STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD((*&Local_4 + 552)[22]);
	return;
}

void Function_510(bool bParam0, bool bParam1) //Position: 0x18F2A / 102186
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

void Function_511(bool bParam0) //Position: 0x18F94 / 102292
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_MAX_HEALTH(bVar1, 300.0f);
				SET_ACTOR_HEALTH(bVar1, 300.0f);
			}
			bVar0++;
		}
	}
	return;
}

int Function_512(bool bParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x18FE0 / 102368
{
	char* cVar0[64];
	vector3 vVar16;
	vector3 vVar19;
	
	if (Function_442(StackVal, StackVal, Global_34573, vParam2, (fParam6 + ((IntToFloat(Function_443()) * (fParam7 - fParam6)) * 0,5f))) || bParam12)
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
					Function_513();
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
	else if ((!Function_442(StackVal, StackVal, Global_34573, vParam2, (fParam7 + ((IntToFloat(Function_443()) * (fParam7 - fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		*uParam1 = 0;
	}
	else if (!Function_442(StackVal, StackVal, Global_34573, vParam2, fParam6))
	{
	}
	return 0;
}

void Function_513() //Position: 0x19226 / 102950
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
			Function_514(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (vVar1 + 180.0f), (vVar7 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_514(char* cParam0, vector3 vParam1) //Position: 0x1927A / 103034
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

void Function_515() //Position: 0x193A2 / 103330
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	if (!DECOR_CHECK_EXIST(bLocal_805, "cutscene03finish"))
	{
		if (!DECOR_CHECK_EXIST(bLocal_805, "cutscene03escape"))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 884)[3]) && iLocal_916 >= 8)
			{
				Local_908.f_16 = Function_518(bLocal_805, 0, 1, 0, 0);
				CUTSCENEOBJECT_SET_RECENTER_GAMECAM(Local_908.f_16, 1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(Local_908.f_16, 0);
				DECOR_SET_FLOAT(bLocal_805, "cutscene03escape", GET_CURRENT_GAME_TIME());
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				bLocal_1137 = TASK_SEQUENCE_OPEN();
				TASK_DRAW_HOLSTER_WEAPON(false, 1);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_3124, 2, 0, 0, 1, false);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(Global_34573, bLocal_1137);
				TASK_SEQUENCE_RELEASE(bLocal_1137, 1);
				AI_IGNORE_ACTOR(Global_34573);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_919);
				bLocal_1137 = TASK_SEQUENCE_OPEN();
				SET_ACTOR_IN_VEHICLE(bLocal_919, bLocal_1127, false);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_3048, 2, 0, 0, 1, false);
				TASK_STAND_STILL(false, 3.0f, 0, 0);
				TASK_VEHICLE_LEAVE(false);
				TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_3028), "UseCase1", 4294967295, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_919, bLocal_1137);
				TASK_SEQUENCE_RELEASE(bLocal_1137, 1);
				TASK_PRIORITY_SET(bLocal_919, true);
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_919, 0);
				ACTOR_START_FORCE_HOLSTER(bLocal_919, 0, 0);
				MEMORY_ALLOW_SHOOTING(bLocal_919, false);
				START_VEHICLE(bLocal_1127);
				DECOR_SET_FLOAT(bLocal_805, "escape", GET_CURRENT_GAME_TIME());
				if (iLocal_929[1] && GET_OBJECT_ANIMATOR_PHASE(bLocal_1138) > 1.0f)
				{
					SET_OBJECT_ANIMATOR_NODE(bLocal_1138, "/global/close_wagon/wagon/close");
					SET_OBJECT_ANIMATOR_PHASE(bLocal_1138, 1.0f);
					SET_OBJECT_ANIMATOR_RATE(bLocal_1138, 10.0f);
				}
			}
		}
		else
		{
			Function_229((*&Local_4 + 2284)[9]);
			Function_517(StackVal, StackVal, &vVar0, &vVar3, Function_229((*&Local_4 + 2284)[9]), GET_OBJECT_HEADING((*&Local_4 + 2284)[9]), 0);
			STREAMING_LOAD_SCENE_EXT(vVar0, vVar3, 1);
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (HUD_IS_SHOWING_OBJECTIVE())
				{
					HUD_CLEAR_OBJECTIVE();
				}
				Function_516();
			}
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(Local_908.f_16), false))
			{
				DECOR_SET_BOOL(bLocal_805, "cutscene03finish", true);
				TASK_CLEAR(Global_34573);
				Function_351(Global_34573, (*&Local_4 + 2284)[9], 1, 1, 1);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				AI_STOP_IGNORING_ACTOR(Global_34573);
				ACTOR_POP_NEXT_GAIT(Global_34573, 2, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 2, 1073741824, 0);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				bVar6 = false;
				while (bVar6 <= SQUAD_GET_SIZE(Local_4.f_580))
				{
					bVar7 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_580, bVar6);
					bVar8 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, Local_4.f_1400);
					if (IS_ACTOR_VALID(bVar7))
					{
						Function_351(bVar7, bVar8, 0, 1, 1);
					}
					bVar6++;
				}
				Function_337(Local_4.f_580, &Local_4 + 1400, 2.0f, 75.0f, 7, 0, 0);
				if (DECOR_CHECK_EXIST(bLocal_1125, "ncoverused") && iLocal_916 >= 8)
				{
					Function_338(bLocal_1125, (*&Local_4 + 1404)[4], 2.0f, 75.0f, 7, DECOR_GET_INT(bLocal_1125, "ncoverused"), 0, 0, 0);
				}
			}
		}
	}
	return;
}

void Function_516() //Position: 0x196AA / 104106
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort01_WestDick_Departure", "Fort01_WestDick_Departure", false, 3, 1, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_517(var uParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6) //Position: 0x19705 / 104197
{
	bool bVar0;
	
	bVar0 = "";
	switch (iParam6)
	{
		case 0x00000000:
			bVar0 = "roam";
			break;
		
		case 0x00000001:
			bVar0 = "interior";
			break;
		
		case 0x00000002:
			bVar0 = "horse";
			break;
		
		case 0x00000003:
			bVar0 = "wagonDefault";
			break;
		
		case 0x00000004:
			bVar0 = "wagonShotgun";
			break;
		
		case 0x00000005:
			bVar0 = "wagonShotgun";
			break;
	}
	PRINTSTRING("GET_GAME_CAMERA_RESET_POSITION_HELPER called with position ");
	PRINTVECTOR(vParam2);
	PRINTSTRING(" and heading ");
	PRINTFLOAT(bParam5);
	PRINTSTRING(" and with arc ");
	PRINTSTRING(bVar0);
	PRINTNL();
}

var Function_518(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1982C / 104492
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Fort01_MerchantEscape", 2, 1);
	}
	Function_519(&bVar0);
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

void Function_519(int iParam0) //Position: 0x198AD / 104621
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_521(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_520(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(*iParam0, 0, 1, 5.0f, 0, 0);
	return;
}

void Function_520(int iParam0) //Position: 0x198E2 / 104674
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 48,72546f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2677,648f, 68,19208f, 3516,797f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0,069356f, 1,488886f, -1E-06f, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_521(var uParam0) //Position: 0x19949 / 104777
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 48,72546f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -2678,87f, 68,23093f, 3518,662f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0,069356f, 1,12835f, -1E-06f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_522() //Position: 0x199B0 / 104880
{
	if (iLocal_916 <= 9)
	{
		if (SQUAD_IS_VALID(Local_4.f_668))
		{
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_668) < 0)
			{
				if (!DECOR_CHECK_EXIST(bLocal_805, "cutscene03escape"))
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_919);
					bLocal_1137 = TASK_SEQUENCE_OPEN();
					SET_ACTOR_IN_VEHICLE(bLocal_919, bLocal_1127, false);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, Local_4.f_3048, 2, 0, 0, 1, false);
					TASK_STAND_STILL(false, 3.0f, 0, 0);
					TASK_VEHICLE_LEAVE(false);
					TASK_USE_GRINGO(false, GET_GRINGO_FROM_OBJECT(Local_4.f_3028), "UseCase1", 4294967295, 1);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(bLocal_919, bLocal_1137);
					TASK_SEQUENCE_RELEASE(bLocal_1137, 1);
					TASK_PRIORITY_SET(bLocal_919, true);
					AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_919, 0);
					ACTOR_START_FORCE_HOLSTER(bLocal_919, 0, 0);
					MEMORY_ALLOW_SHOOTING(bLocal_919, false);
					START_VEHICLE(bLocal_1127);
				}
				Function_492(Local_4.f_672, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				DECOR_SET_BOOL(Local_4.f_672, "blipped", true);
				Function_492(Local_4.f_676, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				DECOR_SET_BOOL(Local_4.f_676, "blipped", true);
				Function_337(Local_4.f_580, &Local_4 + 1432, 1.0f, 75.0f, 7, 0, 0);
				Function_233();
				Function_523();
				Function_214(&bLocal_920);
				iLocal_916 = 9;
			}
		}
	}
	return;
}

void Function_523() //Position: 0x19AF7 / 105207
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_moveForward", "Fort01_moveForward", false, 1, 1, 0, 1);
		Function_365(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_524() //Position: 0x19B44 / 105284
{
	if (iLocal_916 <= 10)
	{
		if (SQUAD_IS_VALID(Local_4.f_672))
		{
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_672) < 0)
			{
				Function_337(Local_4.f_580, &Local_4 + 1464, 1.0f, 75.0f, 7, 0, 0);
				Function_233();
				Function_525();
				Function_214(&bLocal_920);
				iLocal_916 = 10;
			}
		}
	}
	return;
}

void Function_525() //Position: 0x19B90 / 105360
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Fort01_coverMarshal", "Fort01_coverMarshal", false, 1, 1, 0, 1);
		Function_365(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_526() //Position: 0x19BDF / 105439
{
	if (iLocal_916 <= 11)
	{
		if (SQUAD_IS_VALID(Local_4.f_676))
		{
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_676) < 0)
			{
				Function_492(Local_4.f_680, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				DECOR_SET_BOOL(Local_4.f_680, "blipped", true);
				Function_492(Local_4.f_684, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				DECOR_SET_BOOL(Local_4.f_684, "blipped", true);
				Function_527();
				Function_214(&bLocal_920);
				iLocal_916 = 11;
			}
		}
	}
	return;
}

void Function_527() //Position: 0x19C70 / 105584
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_coverSeth", "Fort01_coverSeth", false, 1, 1, 0, 1);
		Function_365(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_528() //Position: 0x19CBA / 105658
{
	if (iLocal_916 <= 12)
	{
		if (SQUAD_IS_VALID(Local_4.f_680))
		{
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_680) < 0)
			{
				Function_337(Local_4.f_580, &Local_4 + 1528, 1.0f, 75.0f, 7, 0, 0);
				if (!SQUAD_IS_VALID(Local_4.f_684))
				{
					Function_529();
					SQUAD_SET_FACTION(Local_4.f_684, 19);
					Function_492(Local_4.f_684, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUAD_GOALS_CLEAR(Local_4.f_684);
					Function_293(Local_4.f_684);
					Function_491(Local_4.f_684, &Local_4 + 1776, 2.0f, 75.0f, 7, 1, &Local_4 + 1780, 0);
					SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_684, 2048);
				}
				if (Function_385())
				{
					Function_485();
				}
				else
				{
					Function_484();
				}
				Function_436();
				Function_214(&bLocal_920);
				iLocal_916 = 12;
			}
		}
	}
	return;
}

void Function_529() //Position: 0x19D7D / 105853
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_684 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "nGuards02e"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_02E_01", 401, -2657,275f, 67,45486f, 3451,831f, 0.0f, 80,07938f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_684);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_02E_02", 400, -2655,962f, 67,45486f, 3452,851f, 0.0f, 72,90717f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_684);
	return;
}

void Function_530() //Position: 0x19E16 / 106006
{
	if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 884)[0]) || (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_668) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_672) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_676) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_680) >= 0))
	{
		if (!SQUAD_IS_VALID(Local_4.f_684))
		{
			Function_529();
			SQUAD_SET_FACTION(Local_4.f_684, 19);
			Function_492(Local_4.f_684, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			SQUAD_GOALS_CLEAR(Local_4.f_684);
			Function_293(Local_4.f_684);
			Function_491(Local_4.f_684, &Local_4 + 1776, 2.0f, 75.0f, 7, 1, &Local_4 + 1780, 0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_684, 2048);
		}
		if (!SQUAD_IS_VALID(Local_4.f_688))
		{
			Function_531();
			SQUAD_SET_FACTION(Local_4.f_688, 19);
			Function_492(Local_4.f_688, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			SQUAD_GOALS_CLEAR(Local_4.f_688);
			Function_293(Local_4.f_688);
			Function_491(Local_4.f_688, &Local_4 + 1844, 2.0f, 75.0f, 7, 1, &Local_4 + 1848, 0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_688, 2048);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_688))
	{
		if (IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 884)[1]) || IS_ACTOR_IN_VOLUME(Global_34573, (*&Local_4 + 884)[2]))
		{
			Function_531();
			SQUAD_SET_FACTION(Local_4.f_688, 19);
			Function_492(Local_4.f_688, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			SQUAD_GOALS_CLEAR(Local_4.f_688);
			Function_293(Local_4.f_688);
			Function_491(Local_4.f_688, &Local_4 + 1844, 2.0f, 75.0f, 7, 1, &Local_4 + 1848, 0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_688, 2048);
		}
	}
	if (!SQUAD_IS_VALID(Local_4.f_688) && SQUAD_IS_VALID(Local_4.f_684))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_684) < 0)
		{
			Function_531();
			SQUAD_SET_FACTION(Local_4.f_688, 19);
			Function_492(Local_4.f_688, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			SQUAD_GOALS_CLEAR(Local_4.f_688);
			Function_293(Local_4.f_688);
			Function_491(Local_4.f_688, &Local_4 + 1844, 2.0f, 75.0f, 7, 1, &Local_4 + 1848, 0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(Local_4.f_688, 2048);
		}
	}
	if (SQUAD_IS_VALID(Local_4.f_684) && SQUAD_IS_VALID(Local_4.f_688))
	{
		if (((((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_668) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_672) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_676) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_680) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_684) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_688) >= 0)
		{
			Function_476(Local_4.f_580);
			Function_214(&bLocal_920);
			iLocal_916 = 13;
		}
		else
		{
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_668) >= 0)
			{
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_672) >= 0)
			{
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_676) >= 0)
			{
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_680) >= 0)
			{
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_684) >= 0)
			{
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_688) >= 0)
			{
			}
		}
	}
	return;
}

void Function_531() //Position: 0x1A0EC / 106732
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_688 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "nGuards02f"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_02F_01", 400, -2653,941f, 71,72182f, 3454,655f, 0.0f, 49,65565f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_688);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_02F_02", 402, -2653,213f, 71,65486f, 3447,668f, 0.0f, -17,86923f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_688);
	return;
}

int Function_532(bool bParam0) //Position: 0x1A185 / 106885
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_SHOOTING(bVar1))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

void Function_533(bool bParam0) //Position: 0x1A1C5 / 106949
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (!DECOR_CHECK_EXIST(bParam0, "blipped"))
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(bParam0))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					if (MEMORY_GET_IS_VISIBLE(bVar1, Global_34573) || GET_LAST_ATTACKER(bVar1) != Global_34573)
					{
						DECOR_SET_BOOL(bParam0, "blipped", true);
					}
				}
				bVar0++;
			}
			if (DECOR_CHECK_EXIST(bParam0, "blipped"))
			{
				Function_492(bParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
		}
	}
	return;
}

void Function_534(bool bParam0) //Position: 0x1A25D / 107101
{
	if (!Function_270(&bLocal_1154))
	{
		Function_368(&bLocal_1154);
	}
	else if (Function_268(&bLocal_1154) < 1.0f)
	{
		if (IS_ACTOR_VALID(bLocal_919) && IS_ACTOR_VALID(bLocal_1125))
		{
			if (bParam0)
			{
				if (!DECOR_CHECK_EXIST(bLocal_805, "Fort01_farBehind_Marshal"))
				{
					Function_282(Global_34573);
					Function_229((*&Local_4 + 1080)[1]);
					Function_282(bLocal_1126);
					Function_229((*&Local_4 + 1080)[1]);
					if (VDIST(Function_282(Global_34573), Function_229((*&Local_4 + 1080)[1])) > VDIST(Function_282(bLocal_1126), Function_229((*&Local_4 + 1080)[1])))
					{
						Function_282(Global_34573);
						Function_282(bLocal_1126);
						Function_282(Global_34573);
						Function_282(bLocal_1125);
						if (VDIST(Function_282(Global_34573), Function_282(bLocal_1126)) > VDIST(Function_282(Global_34573), Function_282(bLocal_1125)) || !DECOR_CHECK_EXIST(bLocal_805, "cutscene03finish"))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_919, "Fort01_farBehind_Marshal", "Fort01_farBehind_Marshal", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
							DECOR_SET_FLOAT(bLocal_805, "Fort01_farBehind_Marshal", GET_CURRENT_GAME_TIME());
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_1125, "Fort01_farBehind_Seth", "Fort01_farBehind_Seth", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
							DECOR_SET_FLOAT(bLocal_805, "Fort01_farBehind_Seth", GET_CURRENT_GAME_TIME());
						}
					}
					else
					{
						Function_282(Global_34573);
						Function_282(bLocal_1126);
						Function_282(Global_34573);
						Function_282(bLocal_1125);
						if (VDIST(Function_282(Global_34573), Function_282(bLocal_1126)) > VDIST(Function_282(Global_34573), Function_282(bLocal_1125)) || !DECOR_CHECK_EXIST(bLocal_805, "cutscene03finish"))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_919, "Fort01_farAhead_Marshal", "Fort01_farAhead_Marshal", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
							DECOR_SET_FLOAT(bLocal_805, "Fort01_farAhead_Marshal", GET_CURRENT_GAME_TIME());
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_1125, "Fort01_farAhead_Seth", "Fort01_farAhead_Seth", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
							DECOR_SET_FLOAT(bLocal_805, "Fort01_farAhead_Seth", GET_CURRENT_GAME_TIME());
						}
					}
				}
			}
			else
			{
				if (DECOR_CHECK_EXIST(bLocal_805, "Fort01_farBehind_Marshal"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_805, "Fort01_farBehind_Marshal")) < 15.0f)
					{
						DECOR_REMOVE(bLocal_805, "Fort01_farBehind_Marshal");
					}
				}
				if (DECOR_CHECK_EXIST(bLocal_805, "Fort01_farBehind_Seth"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_805, "Fort01_farBehind_Seth")) < 15.0f)
					{
						DECOR_REMOVE(bLocal_805, "Fort01_farBehind_Seth");
					}
				}
				if (DECOR_CHECK_EXIST(bLocal_805, "Fort01_farAhead_Marshal"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_805, "Fort01_farAhead_Marshal")) < 15.0f)
					{
						DECOR_REMOVE(bLocal_805, "Fort01_farAhead_Marshal");
					}
				}
				if (DECOR_CHECK_EXIST(bLocal_805, "Fort01_farAhead_Seth"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_805, "Fort01_farAhead_Seth")) < 15.0f)
					{
						DECOR_REMOVE(bLocal_805, "Fort01_farAhead_Seth");
					}
				}
			}
		}
		Function_214(&bLocal_1154);
	}
	return;
}

void Function_535() //Position: 0x1A6CB / 108235
{
	if (iLocal_916 < 4 && iLocal_916 > 105)
	{
		if (iLocal_916 > 8)
		{
			Function_229((*&Local_4 + 1080)[0]);
			Function_441(StackVal, StackVal, "$/cutscene/FORT01_CS05_SEQ/FORT01_CS05_SEQ", &uLocal_940, Function_229((*&Local_4 + 1080)[0]), 83850, 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1);
		}
		Function_438();
	}
	switch (iLocal_916)
	{
		case 0x00000000:
			Function_358(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_919, GET_ACTOR_MAX_HEALTH(bLocal_919));
			SET_ACTOR_HEALTH(bLocal_1126, GET_ACTOR_MAX_HEALTH(bLocal_1126));
			SET_ACTOR_HEALTH(bLocal_1125, GET_ACTOR_MAX_HEALTH(bLocal_1125));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			if (iLocal_929[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_355();
				Function_229((*&Local_4 + 1028)[0]);
				bLocal_917 = Function_354(StackVal, StackVal, Function_229((*&Local_4 + 1028)[0]), 0, 1, 1);
				if (!Function_353(bLocal_917))
				{
					Function_352(&Local_806);
				}
				Function_351(Global_34573, (*&Local_4 + 1028)[0], 1, 1, 1);
			}
			Function_214(&bLocal_920);
			iLocal_916 = 1;
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_353(Global_30679[1])) && Function_552())
			{
				Function_214(&bLocal_920);
				iLocal_916 = 2;
			}
			break;
		
		case 0x00000002:
			if (!IS_OBJECT_VALID(bLocal_1127))
			{
				Function_305((*&Local_4 + 1948)[2]);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				STOP_VEHICLE(bLocal_1127);
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_1129), true);
			}
			DISABLE_CHILD_SECTOR("fom_rightWingProps01x");
			DISABLE_CHILD_SECTOR("fom_rightWing01x");
			DISABLE_CHILD_SECTOR("fom_guardTower01x");
			DISABLE_CHILD_SECTOR("fom_courtyardProps01x");
			DISABLE_CHILD_SECTOR("fom_gallowsProps01x");
			DISABLE_CHILD_SECTOR("fom_gallows01x");
			DISABLE_CHILD_SECTOR("fom_guardTowerProps02x");
			Function_551();
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_660, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			Function_214(&bLocal_920);
			if (Function_428(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_806, bLocal_915))
			{
				iLocal_916 = 3;
			}
			else
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				iLocal_916 = 4;
			}
			Function_228(bLocal_915);
			Function_422(StackVal, StackVal, Function_228(bLocal_915), bLocal_915, Global_30628[3], Function_231(bLocal_915), 3);
			break;
		
		case 0x00000003:
			if (Function_261("$/cutscene/FORT_01_CS03_seq/FORT_01_CS03_seq", &Local_908, &Local_806, &bLocal_915, 65280, 64922, 64032, 57473, 54538, 51441, 1, 1, 1, 2, 2, 0, 1))
			{
				Function_214(&bLocal_920);
				iLocal_916 = 4;
			}
			break;
		
		case 0x00000004:
			Function_550();
			if (IS_ACTOR_VALID(bLocal_919))
			{
				Function_351(bLocal_919, (*&Local_4 + 1028)[3], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(bLocal_1125))
			{
				Function_351(bLocal_1125, (*&Local_4 + 1028)[5], 1, 1, 1);
			}
			if (!iLocal_929[0])
			{
				if (!SQUAD_IS_VALID(Local_4.f_580))
				{
					Function_435();
				}
				Function_549(bLocal_1126, (*&Local_4 + 1028)[6], 1, 1, 1);
				TASK_STAND_STILL(bLocal_1126, -1.0f, 0, 0);
				Function_549((*&Local_4 + 552)[02], (*&Local_4 + 1028)[7], 1, 1, 1);
				Function_549((*&Local_4 + 552)[12], (*&Local_4 + 1028)[8], 1, 1, 1);
				Function_549((*&Local_4 + 552)[22], (*&Local_4 + 1028)[9], 1, 1, 1);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_1129), true);
				SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_1129, "GatlingShoot", true, 0, 0);
				FORCE_VEHICLE_CINEMATIC_CAMERA(0);
				DECOR_SET_BOOL(Global_34573, "GringoNoQuit", true);
				SET_OBJECT_ANIMATOR_NODE(bLocal_1138, "/global/close_wagon/wagon/open");
				SET_OBJECT_ANIMATOR_RATE(bLocal_1138, 10.0f);
				if (!SQUAD_IS_VALID(Local_4.f_628))
				{
					Function_302();
				}
				Function_297(Local_4.f_628, Local_4.f_2352);
				Function_284(Local_4.f_628, 0);
				SQUAD_GOALS_CLEAR(Local_4.f_660);
				SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_660, false, 1, 4294967295);
				TASK_CROUCH(false, -1.0f);
				Function_284(Local_4.f_660, 0);
			}
			if (IS_ACTOR_VALID(bLocal_1128))
			{
				DESTROY_ACTOR(bLocal_1128);
			}
			Function_415();
			bLocal_1124 = Function_493();
			Function_408(&(Local_986[017]), bLocal_919, "Merchant", 0, 0x5f5e100, 1);
			Function_408(&(Local_986[217]), bLocal_1125, "GraveRobber", 0, 0x5f5e100, 1);
			Function_408(&(Local_986[617]), bLocal_1127, "Wagon", 0, 0x5f5e100, 1);
			MEMORY_CONSIDER_AS(bLocal_919, Global_34573, false);
			MEMORY_CONSIDER_AS(bLocal_1125, Global_34573, false);
			AUDIO_MUSIC_SET_MOOD("MACHINE_GUN", 0, 4294967295, 4294967295);
			ACTOR_END_FORCE_HOLSTER(bLocal_919);
			ENABLE_VEHICLE_SEAT(bLocal_1127, 2, 0);
			Function_497();
			Function_214(&bLocal_920);
			iLocal_916 = 5;
			break;
		
		case 0x00000005:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "attached"))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_214(&bLocal_920);
				iLocal_916 = 6;
			}
			else
			{
				Function_214(&bLocal_920);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADED() && !HUD_IS_FADING())
			{
				Function_548();
				Function_547();
				Function_214(&bLocal_920);
				iLocal_916 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_268(&bLocal_920) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_404("Fort01_obj04", 7,5f, 1, 2, 0, 0, 0);
				Function_284(Local_4.f_628, 1);
				Function_546(Local_4.f_628, 1);
				Function_368(&bLocal_1142);
				if (!Function_270(&bLocal_1145))
				{
					Function_368(&bLocal_1145);
				}
				Function_508();
				Function_214(&bLocal_920);
				Function_214(&bLocal_923);
				Function_214(&bLocal_926);
				iLocal_916 = 8;
			}
			break;
		
		case 0x00000008:
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_268(&bLocal_1142) < 10.0f) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_628) < 0)
			{
				if (Function_385())
				{
					if (IS_ACTOR_SHOOTING(Global_34573) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 1, 1, 0))
					{
						Function_545();
					}
					else
					{
						Function_544();
					}
				}
				else if (IS_ACTOR_SHOOTING(Global_34573) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 1, 1, 0))
				{
					Function_543();
				}
				else
				{
					Function_542();
				}
				Function_214(&bLocal_1142);
			}
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && !Function_133()) && !DECOR_CHECK_EXIST(bLocal_805, "medshelp"))
			{
				Function_132("fort01_help_meds", 0x41200000, 1, 0, 2, 1, 0);
				DECOR_SET_BOOL(bLocal_805, "medshelp", true);
			}
			if (Function_268(&bLocal_1145) < 0,5f)
			{
				Function_455(Local_4.f_628);
				Function_540(Local_4.f_628, Local_4.f_2352);
				Function_539(Local_4.f_628);
			}
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_628) > 6 && !DECOR_CHECK_EXIST(bLocal_805, "sentramparts"))
			{
				Function_229((*&Local_4 + 2332)[3]);
				Function_300((*&Local_4 + 2332)[3]);
				Function_537(StackVal, StackVal, StackVal, StackVal, Local_4.f_2352, Function_229((*&Local_4 + 2332)[3]), Function_300((*&Local_4 + 2332)[3]), Local_4.f_3120, 0.0f);
				Function_229((*&Local_4 + 2332)[3]);
				Function_300((*&Local_4 + 2332)[3]);
				Function_537(StackVal, StackVal, StackVal, StackVal, Local_4.f_2352, Function_229((*&Local_4 + 2332)[3]), Function_300((*&Local_4 + 2332)[3]), Local_4.f_3120, 1.0f);
				Function_229((*&Local_4 + 2332)[3]);
				Function_300((*&Local_4 + 2332)[3]);
				Function_537(StackVal, StackVal, StackVal, StackVal, Local_4.f_2352, Function_229((*&Local_4 + 2332)[3]), Function_300((*&Local_4 + 2332)[3]), Local_4.f_3120, 2.0f);
				DECOR_SET_BOOL(bLocal_805, "sentramparts", true);
			}
			if (!DECOR_CHECK_EXIST(bLocal_805, "finish02mid"))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_628) >= 0 || (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_628) >= 2 && Function_268(&bLocal_920) < 30.0f))
				{
					DECOR_SET_BOOL(bLocal_805, "finish02mid", true);
					Function_214(&bLocal_920);
				}
			}
			else if (Function_268(&bLocal_920) < 1.0f)
			{
				Function_545();
				Function_214(&bLocal_920);
				iLocal_916 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_268(&bLocal_920) <= 5.0f)
			{
				Function_545();
				iLocal_1173 = 0;
				Function_229((*&Local_4 + 2332)[0]);
				Function_300((*&Local_4 + 2332)[0]);
				Function_537(StackVal, StackVal, StackVal, StackVal, Local_4.f_2352, Function_229((*&Local_4 + 2332)[0]), Function_300((*&Local_4 + 2332)[0]), Local_4.f_3064, 0);
				Function_229((*&Local_4 + 2332)[1]);
				Function_300((*&Local_4 + 2332)[1]);
				Function_537(StackVal, StackVal, StackVal, StackVal, Local_4.f_2352, Function_229((*&Local_4 + 2332)[1]), Function_300((*&Local_4 + 2332)[1]), Local_4.f_3068, 0);
				Function_229((*&Local_4 + 2332)[2]);
				Function_300((*&Local_4 + 2332)[2]);
				Function_537(StackVal, StackVal, StackVal, StackVal, Local_4.f_2352, Function_229((*&Local_4 + 2332)[2]), Function_300((*&Local_4 + 2332)[2]), Local_4.f_3072, 0);
				Function_229((*&Local_4 + 2332)[1]);
				Function_300((*&Local_4 + 2332)[1]);
				Function_537(StackVal, StackVal, StackVal, StackVal, Local_4.f_2352, Function_229((*&Local_4 + 2332)[1]), Function_300((*&Local_4 + 2332)[1]), Local_4.f_3068, 2.0f);
				Function_229((*&Local_4 + 2332)[2]);
				Function_300((*&Local_4 + 2332)[2]);
				Function_537(StackVal, StackVal, StackVal, StackVal, Local_4.f_2352, Function_229((*&Local_4 + 2332)[2]), Function_300((*&Local_4 + 2332)[2]), Local_4.f_3072, 2.0f);
				Function_214(&bLocal_920);
				Function_214(&bLocal_923);
				Function_214(&bLocal_926);
				iLocal_916 = 10;
			}
			break;
		
		case 0x0000000A:
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_268(&bLocal_1142) < 30.0f) && (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_628) < 0 || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_628) < 0))
			{
				if (Function_385())
				{
					if (IS_ACTOR_SHOOTING(Global_34573) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 1, 1, 0))
					{
						Function_545();
					}
					else
					{
						Function_544();
					}
				}
				else if (IS_ACTOR_SHOOTING(Global_34573) || IS_BUTTON_DOWN(GET_PLAYER_PADINDEX(Global_34573), 1, 1, 0))
				{
				}
				else
				{
					Function_542();
				}
				Function_214(&bLocal_1142);
			}
			if (Function_268(&bLocal_1145) < 0,5f)
			{
				Function_455(Local_4.f_628);
				Function_540(Local_4.f_628, Local_4.f_2352);
			}
			if ((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_628) > 3 || Function_268(&bLocal_920) < 30.0f) && iLocal_1173 > 12)
			{
				Function_229((*&Local_4 + 2332)[0]);
				Function_300((*&Local_4 + 2332)[0]);
				Function_229((*&Local_4 + 2332)[1]);
				Function_300((*&Local_4 + 2332)[1]);
				Function_229((*&Local_4 + 2332)[2]);
				Function_300((*&Local_4 + 2332)[2]);
				if (StackVal || Function_537(StackVal, StackVal, StackVal, (StackVal || Function_537(StackVal, StackVal, StackVal, Function_537(StackVal, StackVal, StackVal, StackVal, Local_4.f_2352, Function_229((*&Local_4 + 2332)[0]), Function_300((*&Local_4 + 2332)[0]), Local_4.f_3064, 0), Local_4.f_2352, Function_229((*&Local_4 + 2332)[1]), Function_300((*&Local_4 + 2332)[1]), Local_4.f_3068, 0)), Local_4.f_2352, Function_229((*&Local_4 + 2332)[2]), Function_300((*&Local_4 + 2332)[2]), Local_4.f_3072, 0))
				{
					Function_214(&bLocal_920);
				}
			}
			if (!DECOR_CHECK_EXIST(bLocal_805, "finish02"))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(Local_4.f_628) >= 0 && iLocal_1173 <= 12)
				{
					DECOR_SET_BOOL(bLocal_805, "finish02", true);
					Function_214(&bLocal_920);
				}
			}
			else if (Function_268(&bLocal_920) < 2.0f)
			{
				Function_233();
				Function_214(&bLocal_920);
				iLocal_916 = 106;
			}
			break;
		
		case 0x00000069:
			if (Function_268(&bLocal_920) <= 5.0f || !IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_214(&bLocal_920);
				iLocal_916 = 106;
			}
			break;
		
		case 0x0000006A:
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(false, bLocal_1127), true);
			SET_ACTOR_STOP_UPDATE(GET_DRAFT_ACTOR(false, bLocal_1127), 0);
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(GET_DRAFT_ACTOR(false, bLocal_1127)), false);
			SET_ACTOR_UPDATE_PRIORITY(GET_DRAFT_ACTOR(true, bLocal_1127), true);
			SET_ACTOR_STOP_UPDATE(GET_DRAFT_ACTOR(true, bLocal_1127), 0);
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(GET_DRAFT_ACTOR(true, bLocal_1127)), false);
			ENABLE_VEHICLE_SEAT(bLocal_1127, 2, 0);
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bLocal_1127), false);
			if (IS_ACTOR_VALID((*&Local_4 + 552)[02]))
			{
				SET_ACTOR_STOP_UPDATE((*&Local_4 + 552)[02], 0);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 552)[12]))
			{
				SET_ACTOR_STOP_UPDATE((*&Local_4 + 552)[12], 0);
			}
			if (IS_ACTOR_VALID((*&Local_4 + 552)[22]))
			{
				SET_ACTOR_STOP_UPDATE((*&Local_4 + 552)[22], 0);
			}
			SET_ACTOR_STOP_UPDATE(bLocal_1126, 0);
			Function_536();
			iLocal_929[1] = 1;
			Function_214(&bLocal_920);
			bLocal_915 = 2;
			iLocal_916 = 2;
			break;
	}
	return;
}

void Function_536() //Position: 0x1B260 / 111200
{
	Function_170(&Local_4 + 264);
	return;
}

int Function_537(bool bParam0, vector3 vParam1, vector3 vParam4, var uParam7, float fParam8) //Position: 0x1B26E / 111214
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	bVar1 = Function_301(StackVal, StackVal, bParam0, vParam1, &bVar0);
	if (IS_OBJECT_VALID(bVar1))
	{
		Function_229(bVar1);
		vVar2 = { StackVal, StackVal, Function_229(bVar1) };
		bVar5 = GET_OBJECT_HEADING(bVar1);
		bVar6 = FIND_NEAREST_COVER_LOCATION(&vVar2, 2.0f, bVar5, 90.0f, 7);
		if (!IS_COVER_LOCATION_VALID(bVar6))
		{
			Function_300(bVar1);
			bVar6 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(bLocal_805, Function_53(), vVar2, Function_300(bVar1), 4));
		}
		bVar7 = Function_538(StackVal, StackVal, StackVal, StackVal, &Local_4 + 628, bVar6, vParam1, vParam4, 1, uParam7, fParam8);
		DECOR_SET_INT(bVar7, "nindexused", bVar0);
		DECOR_SET_BOOL(bVar1, "bUsed", true);
		iLocal_1173++;
		return 1;
	}
	return 0;
}

var Function_538(var uParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, bool bParam9, bool bParam10) //Position: 0x1B315 / 111381
{
	bool bVar0;
	bool bVar1;
	
	if (IS_COVER_LOCATION_VALID(bParam1))
	{
		if (!IS_POPSET_VALID(bLocal_1140))
		{
			bLocal_1140 = CREATE_POPULATION_SET_IN_LAYOUT(bLocal_805, "pEnemyPopset01", 1);
			LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 397, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 398, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 399, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 400, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 401, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 402, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 403, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 404, 1.0f);
			LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 405, 1.0f);
		}
		bVar1 = Function_320(StackVal, StackVal, bLocal_1140, vParam2, 0, 0, 0);
		if (Function_388(bVar1))
		{
			bVar0 = CREATE_ACTOR_IN_LAYOUT(bLocal_805, Function_53(), bVar1, vParam2, vParam5);
			if (IS_ACTOR_VALID(bVar0))
			{
				Function_298(bVar0, uParam0, bParam1, bParam8, bParam9, bParam10);
			}
		}
	}
	return bVar0;
}

void Function_539(bool bParam0) //Position: 0x1B3E9 / 111593
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	if (bLocal_915 == 1)
	{
		iLocal_1174 = 0;
	}
	if (SQUAD_IS_VALID(bParam0))
	{
		iVar1 = 0;
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_ALIVE(bVar2))
			{
				bVar3 = COMBAT_CLASS_AI_GET_ATTRIB_BOOL(bVar2, 13);
				if (!bVar3)
				{
					iLocal_1174++;
				}
				if (GET_ACTOR_HEALTH(Global_34573) < (GET_ACTOR_MAX_HEALTH(Global_34573) / 2.0f))
				{
					if (iLocal_1174 <= 4 && !bVar3)
					{
						COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar2, 13, true);
					}
				}
				else if (iLocal_1174 <= 2 && !bVar3)
				{
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar2, 13, true);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_540(bool bParam0, bool bParam1) //Position: 0x1B480 / 111744
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	
	if (SQUAD_IS_VALID(bParam0) && IS_OBJECTSET_VALID(bParam1))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(bParam1))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam1);
			if (IS_OBJECT_VALID(bVar1))
			{
				if (DECOR_CHECK_EXIST(bVar1, "bUsed"))
				{
					bVar3 = false;
					bVar2 = false;
					while (bVar2 <= SQUAD_GET_SIZE(bParam0))
					{
						bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar2);
						if (IS_ACTOR_ALIVE(bVar4))
						{
							if (DECOR_CHECK_EXIST(bVar4, "nindexused"))
							{
								if (DECOR_GET_INT(bVar4, "nindexused") == bVar0)
								{
									bVar3 = true;
									if (Function_474(bVar4, bVar1, 1.0f) && IS_ACTOR_USING_COVER(bVar4))
									{
										if (!DECOR_CHECK_EXIST(bVar4, "timeincover"))
										{
											DECOR_SET_FLOAT(bVar4, "timeincover", GET_CURRENT_GAME_TIME());
										}
										else if (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bVar4, "timeincover")) < (RAND_FLOAT_RANGE(5000.0f, 10000.0f) / 1000.0f)
										{
											DECOR_REMOVE(bVar1, "bUsed");
											bVar3 = false;
											if (!DECOR_CHECK_EXIST(bVar4, "iNumMovedUp"))
											{
												DECOR_SET_INT(bVar4, "iNumMovedUp", true);
											}
											else
											{
												DECOR_SET_INT(bVar4, "iNumMovedUp", DECOR_GET_INT(bVar4, "iNumMovedUp") + 1);
											}
											if (DECOR_GET_INT(bVar4, "iNumMovedUp") <= 3)
											{
												bVar5 = 4294967295;
												Function_282(bVar4);
												bVar6 = Function_541(StackVal, StackVal, bParam1, Function_282(bVar4), &bVar5, bVar1);
												Function_229(bVar6);
												vVar7 = { StackVal, StackVal, Function_229(bVar6) };
												bVar10 = GET_OBJECT_HEADING(bVar6);
												bVar11 = FIND_NEAREST_COVER_LOCATION(&vVar7, 2.0f, bVar10, 90.0f, 7);
												if (!IS_COVER_LOCATION_VALID(bVar11))
												{
													Function_300(bVar6);
													bVar11 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(bLocal_805, Function_53(), vVar7, Function_300(bVar6), 4));
												}
												bLocal_1137 = TASK_SEQUENCE_OPEN();
												TASK_SHOOT_ENEMIES_FROM_COVER(false, bVar11, -1.0f, 1.0f);
												TASK_SEQUENCE_CLOSE();
												TASK_SEQUENCE_PERFORM(bVar4, bLocal_1137);
												TASK_SEQUENCE_RELEASE(bLocal_1137, 1);
												DECOR_SET_INT(bVar4, "nindexused", bVar5);
												DECOR_SET_BOOL(bVar6, "bUsed", true);
											}
											else
											{
												TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar4, -1.0f);
											}
											DECOR_REMOVE(bVar4, "timeincover");
										}
									}
								}
							}
						}
						bVar2++;
					}
					if (!bVar3)
					{
						DECOR_REMOVE(bVar1, "bUsed");
					}
				}
			}
			bVar0++;
		}
	}
	return;
}

var Function_541(bool bParam0, vector3 vParam1, var uParam4, int iParam5) //Position: 0x1B6DD / 112349
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	
	if (IS_OBJECTSET_VALID(bParam0))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(bParam0))
		{
			bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, bParam0);
			if (IS_OBJECT_VALID(bVar2))
			{
				if (bVar2 != iParam5)
				{
					if (!DECOR_CHECK_EXIST(bVar2, "bUsed"))
					{
						Function_229(bVar2);
						vVar3 = { StackVal, StackVal, Function_229(bVar2) };
						if (!IS_OBJECT_VALID(bVar1))
						{
							bVar1 = bVar2;
							*uParam4 = bVar0;
						}
						else
						{
							Function_229(bVar1);
							Function_229(bVar2);
							Function_282(Global_34573);
							Function_229(bVar2);
							Function_379(Global_34573);
							if (VDIST(Function_229(bVar1), vParam1) < VDIST(Function_229(bVar2), vParam1) && VDIST(vParam1, Function_282(Global_34573)) < VDIST(Function_229(bVar2), Function_379(Global_34573)))
							{
								bVar1 = bVar2;
								*uParam4 = bVar0;
							}
						}
					}
				}
			}
			bVar0++;
		}
		return bVar1;
	}
	return "";
}

void Function_542() //Position: 0x1B793 / 112531
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_jonNoFire_Seth", "Fort01_jonNoFire_Seth", false, 1, 1, 0, 1);
		Function_365(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_543() //Position: 0x1B7E7 / 112615
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(5, "Fort01_criesSeth", "Fort01_criesSeth", false, 2, 1, 0, 1);
		Function_365(33);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_544() //Position: 0x1B831 / 112689
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort01_jonNoFire", "Fort01_jonNoFire", false, 1, 1, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_545() //Position: 0x1B87A / 112762
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort01_criesWestDick", "Fort01_criesWestDick", false, 1, 1, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_546(bool bParam0, bool bParam1) //Position: 0x1B8CB / 112843
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

void Function_547() //Position: 0x1B914 / 112916
{
	bool bVar0;
	vector3 vVar1;
	
	if (IS_ACTOR_VALID(bLocal_919))
	{
		bLocal_1137 = TASK_SEQUENCE_OPEN();
		TASK_DRAW_HOLSTER_WEAPON(false, 1);
		Function_229((*&Local_4 + 1388)[0]);
		vVar1 = { StackVal, StackVal, Function_229((*&Local_4 + 1388)[0]) };
		bVar0 = FIND_NEAREST_COVER_LOCATION(&vVar1, 2.0f, GET_OBJECT_HEADING((*&Local_4 + 1388)[0]), 90.0f, 7);
		if (!IS_COVER_LOCATION_VALID(bVar0))
		{
			Function_300((*&Local_4 + 1388)[0]);
			bVar0 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(bLocal_805, Function_53(), vVar1, Function_300((*&Local_4 + 1388)[0]), 4));
		}
		TASK_SHOOT_ENEMIES_FROM_COVER(false, bVar0, -1.0f, 1.0f);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_919, bLocal_1137);
		TASK_SEQUENCE_RELEASE(bLocal_1137, 1);
		TASK_PRIORITY_SET(bLocal_919, true);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_919, 13, true);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_919, 1, true);
	}
	if (IS_ACTOR_VALID(bLocal_1125))
	{
		bLocal_1137 = TASK_SEQUENCE_OPEN();
		TASK_DRAW_HOLSTER_WEAPON(false, 1);
		Function_229((*&Local_4 + 1388)[1]);
		vVar1 = { StackVal, StackVal, Function_229((*&Local_4 + 1388)[1]) };
		bVar0 = FIND_NEAREST_COVER_LOCATION(&vVar1, 2.0f, GET_OBJECT_HEADING((*&Local_4 + 1388)[1]), 90.0f, 7);
		if (!IS_COVER_LOCATION_VALID(bVar0))
		{
			Function_300((*&Local_4 + 1388)[1]);
			bVar0 = GET_COVER_LOCATION_FROM_OBJECT(CREATE_COVER_LOCATION_IN_LAYOUT(bLocal_805, Function_53(), vVar1, Function_300((*&Local_4 + 1388)[1]), 4));
		}
		TASK_SHOOT_ENEMIES_FROM_COVER(false, bVar0, -1.0f, 1.0f);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bLocal_1125, bLocal_1137);
		TASK_SEQUENCE_RELEASE(bLocal_1137, 1);
		TASK_PRIORITY_SET(bLocal_1125, true);
		COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bLocal_1125, 13, true);
	}
	return;
}

void Function_548() //Position: 0x1BA4C / 113228
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort01_signal", "Fort01_signal", false, 1, 1, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_549(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1BA8F / 113295
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

void Function_550() //Position: 0x1BBA6 / 113574
{
	bool bVar0;
	
	if (IS_ACTOR_VALID((*&Local_4 + 552)[02]))
	{
		SET_ACTOR_STOP_UPDATE((*&Local_4 + 552)[02], 1);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 552)[12]))
	{
		SET_ACTOR_STOP_UPDATE((*&Local_4 + 552)[12], 1);
	}
	if (IS_ACTOR_VALID((*&Local_4 + 552)[22]))
	{
		SET_ACTOR_STOP_UPDATE((*&Local_4 + 552)[22], 1);
	}
	SET_HUD_MAP_DRAW_ENABLED(1);
	CAMERA_RESET(0);
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_919);
	TASK_STAND_STILL(bLocal_919, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_919, true);
	Function_351(bLocal_1126, (*&Local_4 + 1028)[6], 1, 1, 1);
	TASK_STAND_STILL(bLocal_1126, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_1126, true);
	SET_ACTOR_STOP_UPDATE(bLocal_1126, 1);
	SQUAD_LEAVE(bLocal_1126);
	TASK_STAND_STILL(bLocal_1125, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_1125, true);
	if (!IS_OBJECT_VALID(bLocal_1127))
	{
		Function_305((*&Local_4 + 1948)[2]);
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		STOP_VEHICLE(bLocal_1127);
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_1129), true);
	}
	bVar0 = GET_DRAFT_ACTOR(false, bLocal_1127);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
	SET_ACTOR_STOP_UPDATE(bVar0, 1);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bVar0), true);
	bVar0 = GET_DRAFT_ACTOR(true, bLocal_1127);
	SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
	SET_ACTOR_STOP_UPDATE(bVar0, 1);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bVar0), true);
	ENABLE_VEHICLE_SEAT(bLocal_1127, 2, 0);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(bLocal_1127), true);
	if (SQUAD_IS_VALID(Local_4.f_620))
	{
		Function_213(Local_4.f_620);
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(Local_4.f_620));
	}
	if (!SQUAD_IS_VALID(Local_4.f_628))
	{
		Function_302();
		SQUAD_SET_FACTION(Local_4.f_628, 21);
		SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_628, false, 1, 4294967295);
		TASK_STAND_STILL(false, -1.0f, 0, 0);
	}
	if (!IS_POPSET_VALID(bLocal_1140))
	{
		bLocal_1140 = CREATE_POPULATION_SET_IN_LAYOUT(bLocal_805, "pEnemyPopset01", 1);
		LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 397, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 398, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 399, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 400, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 401, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 402, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 403, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 404, 1.0f);
		LINK_ACTORENUM_TO_POPULATION(bLocal_1140, 405, 1.0f);
	}
	return;
}

void Function_551() //Position: 0x1BD9A / 114074
{
	Local_4.f_660 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Guards02RampartsCover"));
	(*&Local_4 + 632)[02] = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARDR_01_01", 398, -2726,229f, 71,35181f, 3473,138f, -172,6628f, -46,20323f, 169,7913f);
	SQUAD_JOIN((*&Local_4 + 632)[02], Local_4.f_660);
	(*&Local_4 + 632)[12] = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARDR_01_02", 405, -2723,361f, 71,39669f, 3470,037f, -172,6628f, -46,20323f, 169,7913f);
	SQUAD_JOIN((*&Local_4 + 632)[12], Local_4.f_660);
	(*&Local_4 + 632)[22] = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARDR_01_03", 401, -2721,874f, 71,45267f, 3468,646f, -172,6628f, -46,20323f, 169,7913f);
	SQUAD_JOIN((*&Local_4 + 632)[22], Local_4.f_660);
	return;
}

int Function_552() //Position: 0x1BEAC / 114348
{
	Function_437(&Local_4 + 264, 400, 2, 0);
	Function_437(&Local_4 + 264, 401, 2, 0);
	Function_437(&Local_4 + 264, 402, 2, 0);
	Function_437(&Local_4 + 264, 397, 2, 0);
	Function_437(&Local_4 + 264, 398, 2, 0);
	Function_437(&Local_4 + 264, 399, 2, 0);
	Function_437(&Local_4 + 264, 672, 2, 0);
	Function_437(&Local_4 + 264, 670, 2, 0);
	Function_437(&Local_4 + 264, 481, 2, 0);
	Function_437(&Local_4 + 264, 480, 2, 0);
	Function_437(&Local_4 + 264, 668, 2, 0);
	Function_437(&Local_4 + 264, 673, 2, 0);
	Function_437(&Local_4 + 264, 405, 2, 0);
	Function_437(&Local_4 + 264, 403, 2, 0);
	if (Function_308(&Local_4 + 264))
	{
		return 1;
	}
	return 0;
}

void Function_553() //Position: 0x1BF84 / 114564
{
	if (iLocal_916 < 4 && iLocal_916 > 105)
	{
		if (Function_353(Global_30679[1]) && !SQUAD_IS_VALID(Local_4.f_624))
		{
			Function_562();
			SQUAD_SET_FACTION(Local_4.f_624, 21);
			Function_420(Local_4.f_624, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_624, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			Function_490(Local_4.f_624, 41, 0.0f);
			Function_434(Local_4.f_624, 0);
			Function_295(Local_4.f_624, 1);
			Function_416(StackVal, StackVal, *(&Local_4 + 2040[16]), 0, 0);
			Function_416(StackVal, StackVal, *(&Local_4 + 2040[26]), 0, 0);
			bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "corralprops", 1);
			if (IS_DOOR_VALID(bLocal_1175))
			{
				if (IS_DOOR_OPENED(bLocal_1175))
				{
					CLOSE_DOOR_FAST(bLocal_1175);
				}
			}
			bLocal_1175 = Function_296(Global_30679[1], "fortmercer", "corralprops", 2);
			if (IS_DOOR_VALID(bLocal_1175))
			{
				if (IS_DOOR_OPENED(bLocal_1175))
				{
					CLOSE_DOOR_FAST(bLocal_1175);
				}
			}
		}
		if (iLocal_916 > 11)
		{
			Function_229((*&Local_4 + 1028)[0]);
			Function_512(StackVal, StackVal, "$/cutscene/FORT_01_CS03_seq/FORT_01_CS03_seq", &uLocal_940, Function_229((*&Local_4 + 1028)[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
		}
	}
	switch (iLocal_916)
	{
		case 0x00000000:
			Function_358(0);
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			SET_GAME_CAMERA_CURVE_OVERRIDE(false, "Fort01_backofwagon");
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(bLocal_919, GET_ACTOR_MAX_HEALTH(bLocal_919));
			SET_ACTOR_HEALTH(bLocal_1126, GET_ACTOR_MAX_HEALTH(bLocal_1126));
			SET_ACTOR_HEALTH(bLocal_1125, GET_ACTOR_MAX_HEALTH(bLocal_1125));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(32);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_355();
			Function_229((*&Local_4 + 964)[0]);
			bLocal_917 = Function_354(StackVal, StackVal, Function_229((*&Local_4 + 964)[0]), 0, 1, 1);
			if (!Function_353(bLocal_917))
			{
				Function_352(&Local_806);
			}
			Function_351(Global_34573, (*&Local_4 + 964)[0], 1, 1, 1);
			if (IS_ACTOR_VALID(bLocal_1127))
			{
				SET_ACTOR_IN_VEHICLE(Global_34573, bLocal_1127, 2);
			}
			SET_GAME_CAMERA_CURVE_OVERRIDE(4, "fort01_backofwagon");
			Function_214(&bLocal_920);
			iLocal_916 = 1;
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_353(bLocal_917) || bLocal_917 != 4294967295)) && Function_561())
			{
				Function_560();
				Function_214(&bLocal_920);
				iLocal_916 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_428(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_806, bLocal_915))
			{
				Function_229((*&Local_4 + 964)[0]);
				if (Function_441(StackVal, StackVal, "$/cutscene/FORT01_WARWAGON_CLIMB/FORT01_WARWAGON_CLIMB", &uLocal_940, Function_229((*&Local_4 + 964)[0]), 83850, 1, 75.0f, 160.0f, 2, 1, 2, 2, 1, 1))
				{
					Function_228(bLocal_915);
					Function_422(StackVal, StackVal, Function_228(bLocal_915), bLocal_915, Global_30628[3], Function_231(bLocal_915), 0);
					iLocal_916 = 3;
				}
			}
			else
			{
				Function_228(bLocal_915);
				Function_422(StackVal, StackVal, Function_228(bLocal_915), bLocal_915, Global_30628[3], Function_231(bLocal_915), 0);
				iLocal_916 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_261("$/cutscene/FORT01_WARWAGON_CLIMB/FORT01_WARWAGON_CLIMB", &Local_908, &Local_806, &bLocal_915, 65280, 64922, 64032, 57473, 54538, 51441, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_214(&bLocal_920);
				iLocal_916 = 4;
			}
			break;
		
		case 0x00000004:
			SET_PLAYER_CONTROL(0, 0, 1, 1);
			AUDIO_MUSIC_SET_MOOD("DRAMATIC", 0, 4294967295, 4294967295);
			Function_559();
			START_VEHICLE(bLocal_1127);
			if (!IS_ACTOR_RIDING_VEHICLE(bLocal_919))
			{
				SET_ACTOR_IN_VEHICLE(bLocal_919, bLocal_1127, false);
			}
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_919);
			AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_919, 0);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_919, Local_4.f_3044, 2, 0, 0, 1, false);
			TASK_PRIORITY_SET(bLocal_919, true);
			Function_552();
			Function_229((*&Local_4 + 964)[4]);
			bLocal_1176 = CREATE_CAMERA_FOCUS_POINT(bLocal_805, "camfoc", Function_229((*&Local_4 + 964)[4]), 250.0f, 350.0f);
			SET_CAMERA_FOCUS_PROMPT_ENABLED(bLocal_1176, 1);
			SET_CAMERA_FOCUS_PROMPT_TEXT(bLocal_1176, "fort01_look_at_fort_mercer");
			if (Function_273(&Local_806) || HUD_IS_FADED())
			{
				Function_214(&bLocal_920);
				iLocal_916 = 5;
			}
			else
			{
				Function_214(&bLocal_920);
				iLocal_916 = 11;
			}
			break;
		
		case 0x00000005:
			if (Function_268(&bLocal_920) < 1.0f)
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_214(&bLocal_920);
				iLocal_916 = 11;
			}
			break;
		
		case 0x0000000B:
			if (!IS_ACTOR_IN_VOLUME(bLocal_919, (*&Local_4 + 852)[0]) && !DECOR_CHECK_EXIST(bLocal_805, "spedwagonup"))
			{
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_919, 6,5f);
				DECOR_SET_BOOL(bLocal_805, "spedwagonup", true);
			}
			if (Function_442(StackVal, StackVal, Global_34573, *(&Local_4 + 2040[46]), 20.0f) && !DECOR_CHECK_EXIST(bLocal_805, "clearedtrees"))
			{
				CLEAR_AREA_OF_TREE_TYPE(*(&Local_4 + 2040[46]), 2,5f, "");
				DECOR_SET_BOOL(bLocal_805, "clearedtrees", true);
			}
			if (IS_ACTOR_IN_VOLUME(bLocal_1127, (*&Local_4 + 808)[1]) && !IS_OBJECT_VALID(Local_908.f_16))
			{
				Local_908.f_16 = Function_555(Local_4, 0, 1, 0, 0);
				if (IS_OBJECT_VALID(bLocal_1176))
				{
					DESTROY_OBJECT(bLocal_1176);
				}
				RESET_ANIM_SET_FOR_ACTOR(bLocal_1125, 0);
				SET_ANIM_SET_FOR_ACTOR(bLocal_1125, "one_handed_wave", 0);
				bLocal_1137 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_ACTION_PERFORM(false, "one_handed_wave/wave");
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(bLocal_1125, bLocal_1137);
				TASK_SEQUENCE_RELEASE(bLocal_1137, 1);
			}
			if (GET_TASK_STATUS(bLocal_919, 43) == 0)
			{
				TASK_STAND_STILL(bLocal_919, -1.0f, 0, 0);
				Function_233();
				Function_214(&bLocal_920);
				iLocal_916 = 106;
			}
			break;
		
		case 0x0000000C:
			if (HUD_IS_FADED())
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, bLocal_1127, *(&Local_4 + 2040[36]), 1, true, 1);
				TASK_STAND_STILL(bLocal_919, -1.0f, 0, 0);
				SET_ACTION_NODE_FOR_ACTOR(bLocal_919, "default_character_Main/Vehicle/Engaged/Driver/EngagedStopped/Reverse");
				Function_214(&bLocal_920);
				iLocal_916 = 13;
			}
			break;
		
		case 0x0000000D:
			if (STREAMING_IS_WORLD_LOADED())
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_919);
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(bLocal_919, 0);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(bLocal_919, Local_4.f_3044, 4, 0, 0, 1, false);
				TASK_PRIORITY_SET(bLocal_919, true);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(bLocal_919, 7.0f);
				DECOR_SET_BOOL(bLocal_805, "spedwagonup", true);
				AI_ACTOR_FORCE_SPEED(bLocal_919, 4);
				Function_214(&bLocal_920);
				iLocal_916 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_268(&bLocal_920) <= 2.0f)
			{
				HUD_FADE_IN(1.0f, 1065353216);
				Function_214(&bLocal_920);
				iLocal_916 = 11;
			}
			break;
		
		case 0x0000006A:
			TASK_OVERRIDE_SET_MOVETYPE(bLocal_919, 2);
			TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_919);
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			RESET_ANIM_SET_FOR_ACTOR(bLocal_1125, 1);
			Function_554();
			iLocal_929[0] = 1;
			Function_214(&bLocal_920);
			bLocal_915 = true;
			iLocal_916 = 2;
			break;
	}
	return;
}

void Function_554() //Position: 0x1C716 / 116502
{
	Function_170(&Local_4 + 188);
	return;
}

var Function_555(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1C723 / 116515
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_53(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Fort01_FortArrival", 2, 1);
	}
	Function_556(&bVar0);
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

void Function_556(int iParam0) //Position: 0x1C7A1 / 116641
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_558(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_557(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 0, 1, 10.0f, 0, 0);
	return;
}

void Function_557(int iParam0) //Position: 0x1C7DA / 116698
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 48,54745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2681,005f, 69,56496f, 3524,061f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0,009935f, 0,137086f, 0,019159f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_558(var uParam0) //Position: 0x1C848 / 116808
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 48,54745f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	SET_CAMERASHOT_POSITION(*uParam0, -2683,319f, 69,50622f, 3526,002f);
	SET_CAMERASHOT_ORIENTATION(*uParam0, 0,060584f, 0,474899f, 0,019193f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_559() //Position: 0x1C8AF / 116911
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Fort01_driveBanter_v1_AA", "Fort01_driveBanter_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort01_driveBanter_v1_AB", "Fort01_driveBanter_v1_AB", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort01_driveBanter_v1_AC", "Fort01_driveBanter_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort01_driveBanter_v1_AD", "Fort01_driveBanter_v1_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Fort01_driveBanter_v1_AE", "Fort01_driveBanter_v1_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort01_driveBanter_v1_AF", "Fort01_driveBanter_v1_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort01_driveBanter_v1_AG", "Fort01_driveBanter_v1_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort01_driveBanter_v1_AH", "Fort01_driveBanter_v1_AH", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort01_driveBanter_v1_AI", "Fort01_driveBanter_v1_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort01_driveBanter_v1_AJ", "Fort01_driveBanter_v1_AJ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort01_driveBanter_v1_AK", "Fort01_driveBanter_v1_AK", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Fort01_driveBanter_v1_AL", "Fort01_driveBanter_v1_AL", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Fort01_driveBanter_v1_AM", "Fort01_driveBanter_v1_AM", false, 1, 0, 0, 1);
		Function_365(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_560() //Position: 0x1CBFC / 117756
{
	Function_305((*&Local_4 + 1948)[0]);
	SET_OBJECT_ANIMATOR_NODE(bLocal_1138, "/global/close_wagon/wagon/close");
	SET_OBJECT_ANIMATOR_RATE(bLocal_1138, 10.0f);
	SET_OBJECT_ANIMATOR_PHASE(bLocal_1138, 1.0f);
	STOP_VEHICLE(bLocal_1127);
	GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bLocal_1129), false);
	TASK_PRIORITY_SET(bLocal_1126, true);
	Function_351(bLocal_919, (*&Local_4 + 964)[3], 1, 1, 1);
	TASK_OVERRIDE_CLEAR_MOVETYPE(bLocal_919);
	SET_ACTOR_IN_VEHICLE(bLocal_919, bLocal_1127, false);
	TASK_STAND_STILL(bLocal_919, -1.0f, 0, 0);
	ENABLE_VEHICLE_SEAT(bLocal_1127, 2, 1);
	DECOR_SET_BOOL(Global_34573, "bPreventCam", true);
	SET_ACTOR_IN_VEHICLE(Global_34573, bLocal_1127, 2);
	Function_502();
	Function_420(Local_4.f_620, 0);
	Function_501(Local_4.f_620, 3);
	SQUAD_GOAL_ADD_GENERAL_TASK(Local_4.f_620, false, 1, 4294967295);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	Function_351(bLocal_1126, (*&Local_4 + 964)[6], 1, 1, 1);
	TASK_USE_GRINGO(bLocal_1126, GET_GRINGO_FROM_OBJECT(Local_4.f_3024), "UseCase1", 4294967295, 1);
	Function_435();
	SQUAD_SET_FACTION(Local_4.f_580, 20);
	Function_351((*&Local_4 + 552)[02], (*&Local_4 + 964)[8], 1, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 552)[02], -1.0f, 0, 0);
	Function_351((*&Local_4 + 552)[12], (*&Local_4 + 964)[10], 1, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 552)[12], -1.0f, 0, 0);
	Function_351((*&Local_4 + 552)[22], (*&Local_4 + 964)[12], 1, 1, 1);
	TASK_STAND_STILL((*&Local_4 + 552)[22], -1.0f, 0, 0);
	Function_433(Local_4.f_580, Global_34573, 0);
	Function_351(bLocal_1125, (*&Local_4 + 964)[4], 1, 1, 1);
	TASK_STAND_STILL(bLocal_1125, -1.0f, 0, 0);
	TASK_PRIORITY_SET(bLocal_1125, true);
	bLocal_1167 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_580, false);
	bLocal_1168 = SQUAD_GET_ACTOR_BY_INDEX(Local_4.f_580, true);
	return;
}

int Function_561() //Position: 0x1CDCB / 118219
{
	Function_437(&Local_4 + 188, 400, 2, 0);
	Function_437(&Local_4 + 188, 401, 2, 0);
	Function_437(&Local_4 + 188, 402, 2, 0);
	Function_437(&Local_4 + 188, 397, 2, 0);
	Function_437(&Local_4 + 188, 398, 2, 0);
	Function_437(&Local_4 + 188, 399, 2, 0);
	if (Function_308(&Local_4 + 188))
	{
		return 1;
	}
	return 0;
}

void Function_562() //Position: 0x1CE2C / 118316
{
	bool bVar0;
	var uVar1;
	
	bVar0 = bVar0;
	uVar1 = uVar1;
	Local_4.f_624 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Local_4, "Guards00"));
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_00_01", 400, -2657,584f, 72,13779f, 3476,534f, 0.0f, 165,0264f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_624);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_00_02", 401, -2697,628f, 75,89033f, 3444,752f, 0.0f, 108,8646f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_624);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_00_03", 402, -2701,185f, 75,65486f, 3428,282f, 0.0f, 108,8646f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_624);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_00_04", 397, -2696,171f, 71,64413f, 3418,868f, 0.0f, 42,31024f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_624);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_00_05", 398, -2642,228f, 71,65485f, 3451,334f, 0.0f, -129,3837f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_624);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_00_06", 399, -2730,613f, 71,72044f, 3472,551f, 0.0f, 394,059f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_624);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(Local_4, "GUARD_00_07", 400, -2712,053f, 71,62858f, 3453,127f, 0.0f, 34,05901f, 0.0f);
	SQUAD_JOIN(bVar0, Local_4.f_624);
	return;
}

void Function_563() //Position: 0x1CFDA / 118746
{
	switch (iLocal_916)
	{
		case 0x00000006:
			SET_TIME_ACCELERATION(0.0f);
			Function_584(&Local_806, 1);
			bLocal_805 = CREATE_LAYOUT("Fort01_DynamicLayout");
			Function_583();
			Function_130(&(Global_29008[Global_30679[1]]), 256);
			if (iLocal_804 != 0)
			{
				Function_181(1, 0, 1);
			}
			if (!Function_273(&Local_806) && (Local_806.f_24 >= 1 && iLocal_804 != 0))
			{
				bLocal_938 = CREATE_VOLUME_IN_LAYOUT(bLocal_805, "Cutscene01Vol", 2, -2086,236f, 18,18687f, 2603,849f, 0.0f, 27,77918f, 0.0f, 25.0f, 50.0f, 25.0f);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_938);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bLocal_938);
				CLEAR_AMBIENT_OBJECTS_VOLUME(bLocal_938, 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(bLocal_938);
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/FORT_01/FORT_01", 0, 0, 0, 0, 0);
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2860,451f, 63,74861f, 3393,943f, 0.0f, 1, true, 1);
				Function_181(1, 0, 1);
				Global_63097 = 1;
				iLocal_916 = 7;
			}
			else
			{
				iLocal_916 = 9;
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_214(&bLocal_920);
				iLocal_916 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_582())
			{
				Function_214(&bLocal_920);
				iLocal_916 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_571())
			{
				iLocal_916 = 10;
				Function_570();
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(Local_4))
			{
				bLocal_918 = CREATE_OBJECT_ITERATOR(Local_4);
			}
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_07", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_162(13);
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_569(2, 0, 1);
			RESET_ACTOR_GAITS(bLocal_919, 0);
			SET_CRIPPLE_ENABLE(bLocal_919, 0);
			SET_ACTOR_FACTION(bLocal_919, 20);
			TASK_PRIORITY_SET(bLocal_919, true);
			TASK_STAND_STILL(bLocal_919, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_919, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_919, 50.0f);
			SET_ACTOR_HEALTH(bLocal_919, GET_ACTOR_MAX_HEALTH(bLocal_919));
			Function_569(1, 0, 1);
			RESET_ACTOR_GAITS(bLocal_1125, 0);
			SET_CRIPPLE_ENABLE(bLocal_1125, 0);
			SET_ACTOR_FACTION(bLocal_1125, 20);
			TASK_PRIORITY_SET(bLocal_1125, true);
			TASK_STAND_STILL(bLocal_1125, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_1125, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_1125, 50.0f);
			SET_ACTOR_HEALTH(bLocal_1125, GET_ACTOR_MAX_HEALTH(bLocal_1125));
			Function_569(4, 0, 1);
			RESET_ACTOR_GAITS(bLocal_1126, 0);
			SET_CRIPPLE_ENABLE(bLocal_1126, 0);
			SET_ACTOR_FACTION(bLocal_1126, 20);
			TASK_PRIORITY_SET(bLocal_1126, true);
			TASK_STAND_STILL(bLocal_1126, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(bLocal_1126, 0, 0);
			SET_ACTOR_MAX_HEALTH(bLocal_1126, 50.0f);
			SET_ACTOR_HEALTH(bLocal_1126, GET_ACTOR_MAX_HEALTH(bLocal_1126));
			Function_368(&bLocal_920);
			Function_368(&bLocal_923);
			Function_368(&bLocal_926);
			Function_368(&bLocal_1145);
			Function_368(&bLocal_1148);
			Function_368(&bLocal_1151);
			SET_TIME_ACCELERATION(0.0f);
			Function_157(Global_30679[1]);
			SET_DUST_LEVEL_MODIFIER(4294967294);
			ENABLE_CHILD_SECTOR("fom_corralBreakProps01x");
			Function_567(&uLocal_941, bLocal_805);
			bLocal_915 = iLocal_804;
			iLocal_916 = 0;
			Function_565(&Local_806, &bLocal_915, &iLocal_916);
			Function_564(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_806);
			switch (bLocal_915)
			{
				case 0x00000000:
				case 0x00000001:
					DISABLE_CHILD_SECTOR("fom_rightWingProps01x");
					DISABLE_CHILD_SECTOR("fom_courtyardProps01x");
					DISABLE_CHILD_SECTOR("fom_gallowsProps01x");
					DISABLE_CHILD_SECTOR("fom_gallows01x");
					DISABLE_CHILD_SECTOR("fom_guardTowerProps02x");
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000003:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_564(struct<25> Param0) //Position: 0x1D3A8 / 119720
{
	switch (Param0.f_24)
	{
		case 0x00000001:
			bLocal_915 = false;
			break;
		
		case 0x00000002:
			bLocal_915 = true;
			break;
		
		case 0x00000003:
			bLocal_915 = 2;
			break;
		
		case 0x00000004:
			bLocal_915 = 3;
			break;
		
		case 0x00000005:
			bLocal_915 = 101;
			break;
	}
}

void Function_565(int iParam0, var uParam1, int iParam2) //Position: 0x1D3FB / 119803
{
	if (Function_273(iParam0))
	{
		*uParam1 = Function_429(iParam0);
		if (*uParam1 == 4294967295)
		{
			*uParam1 = 0;
		}
		if (*uParam1 == 99)
		{
			*uParam1 = 0;
			*iParam2 = 0;
		}
		Function_566();
	}
	return;
}

void Function_566() //Position: 0x1D42F / 119855
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

int Function_567(var uParam0, bool bParam1) //Position: 0x1D480 / 119936
{
	if (!IS_LAYOUTREF_VALID(bParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_568(uParam0[03], bParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_568(uParam0[13], bParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[13], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_568(uParam0[23], bParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[23], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_568(uParam0[33], bParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[33], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_568(uParam0[43], bParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[43], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_568(uParam0[53], bParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[53], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_568(uParam0[63], bParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[63], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_568(uParam0[73], bParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[73], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_568(uParam0[83], bParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[83], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_568(uParam0[93], bParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[93], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_568(uParam0[103], bParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR((*uParam0)[103], Global_34573);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_568(uParam0[113], bParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_568(uParam0[123], bParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_568(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4) //Position: 0x1DB20 / 121632
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

void Function_569(int iParam0, bool bParam1, bool bParam2) //Position: 0x1DBE3 / 121827
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
				Function_370(bVar0);
			}
		}
	}
	return;
}

void Function_570() //Position: 0x1DCDA / 122074
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
	
	Function_316(4, 1);
	uVar0 = uVar0;
	Local_4 = CREATE_LAYOUT("Fort01_layout");
	Local_4.f_832 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "CutsceneVol_set");
	(*&Local_4 + 808)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene01Vol", 2, -2872.0f, 62,24313f, 3411,941f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_4.f_832, (*&Local_4 + 808)[0]);
	(*&Local_4 + 808)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene02Vol", 2, -2692,914f, 67,26273f, 3493,086f, 0.0f, -60,63634f, 0.0f, 60.0f, 20.0f, 40.0f);
	ADD_TO_VOLUME_SET(Local_4.f_832, (*&Local_4 + 808)[1]);
	(*&Local_4 + 808)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene03Vol", 2, -2712.0f, 67,26273f, 3508.0f, 0.0f, 0.0f, 0.0f, 6.0f, 6.0f, 4.0f);
	ADD_TO_VOLUME_SET(Local_4.f_832, (*&Local_4 + 808)[2]);
	(*&Local_4 + 808)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Cutscene04Vol", 2, -2656,676f, 68,26385f, 3424,723f, 0.0f, -46,15242f, 0.0f, 10,8006f, 6.0f, 9,922954f);
	ADD_TO_VOLUME_SET(Local_4.f_832, (*&Local_4 + 808)[3]);
	(*&Local_4 + 808)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CutsceneLastVol", 2, -2664.0f, 67,26275f, 3438,638f, 0.0f, 42,89478f, 0.0f, 37,45848f, 13,32184f, 32,49471f);
	ADD_TO_VOLUME_SET(Local_4.f_832, (*&Local_4 + 808)[4]);
	Local_4.f_836 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective01", 2, -2684.0f, 67,26276f, 3516.0f, 0.0f, 30,65824f, 0.0f, 15.0f, 20.0f, 15.0f);
	Local_4.f_840 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_objective03", 2, -2645,931f, 67,26276f, 3424,557f, 0.0f, 49,4478f, 0.0f, 3.0f, 6.0f, 5.0f);
	Local_4.f_844 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_left", 2, -2717,238f, 68,5312f, 3364,652f, 0.0f, 5,365824f, 0.0f, 100.0f, 20.0f, 130.0f);
	Local_4.f_848 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_trigger_right", 2, -2576,068f, 70,66935f, 3507,868f, 0.0f, 86,54026f, 0.0f, 150.0f, 20.0f, 140.0f);
	Local_4.f_864 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "StageOneVols_set");
	(*&Local_4 + 852)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WagonWarnVol", 2, -2863,652f, 63,72982f, 3405,272f, 0.0f, 0.0f, 0.0f, 66,23914f, 17,99555f, 61,1905f);
	ADD_TO_VOLUME_SET(Local_4.f_864, (*&Local_4 + 852)[0]);
	(*&Local_4 + 852)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WagonFailVol", 2, -2863,652f, 63,72982f, 3405,272f, 0.0f, 0.0f, 0.0f, 112,5227f, 17,99555f, 109,1866f);
	ADD_TO_VOLUME_SET(Local_4.f_864, (*&Local_4 + 852)[1]);
	Local_4.f_880 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "StageTwoVols_set");
	(*&Local_4 + 868)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CombatVol02", 2, -2696,6f, 68,67726f, 3487,083f, 0.0f, 44,32879f, 0.0f, 31,30718f, 9,454073f, 29,10532f);
	ADD_TO_VOLUME_SET(Local_4.f_880, (*&Local_4 + 868)[0]);
	(*&Local_4 + 868)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CombatRampartsVol02", 2, -2724,081f, 72,33966f, 3470,301f, 0.0f, 44,32879f, 0.0f, 14,63313f, 4,414308f, 5,10809f);
	ADD_TO_VOLUME_SET(Local_4.f_880, (*&Local_4 + 868)[1]);
	Local_4.f_912 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "StageThreeVols_set");
	(*&Local_4 + 884)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CourtyardVol", 2, -2664.0f, 67,26273f, 3438,995f, 0.0f, 60,06348f, 0.0f, 52,32473f, 6,771692f, 38,996f);
	ADD_TO_VOLUME_SET(Local_4.f_912, (*&Local_4 + 884)[0]);
	(*&Local_4 + 884)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Enemy03fAlert01", 2, -2650,193f, 73,17046f, 3452,049f, 0.0f, 60,88577f, 0.0f, 19,88601f, 4,268281f, 19,49997f);
	ADD_TO_VOLUME_SET(Local_4.f_912, (*&Local_4 + 884)[1]);
	(*&Local_4 + 884)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "Enemy03fAlert02", 2, -2671,216f, 74,81244f, 3466,268f, 0.0f, 60,88577f, 0.0f, 16,67282f, 4,268281f, 38,76835f);
	ADD_TO_VOLUME_SET(Local_4.f_912, (*&Local_4 + 884)[2]);
	(*&Local_4 + 884)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StairsCutsceneTrigger", 2, -2724,848f, 67,42574f, 3481,322f, 0.0f, 161,1456f, 0.0f, 5,582445f, 7,29354f, 3,806271f);
	ADD_TO_VOLUME_SET(Local_4.f_912, (*&Local_4 + 884)[3]);
	(*&Local_4 + 884)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "WalkwayObstacle", 2, -2698,735f, 75,85184f, 3434,93f, 0.0f, 154,6925f, 0.0f, 2,03129f, 3,35483f, 7,113015f);
	ADD_TO_VOLUME_SET(Local_4.f_912, (*&Local_4 + 884)[4]);
	(*&Local_4 + 884)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "ClearActorsInWay", 2, -2680,48f, 68,73964f, 3521,654f, 0.0f, 120,7191f, 0.0f, 24,75898f, 7,29354f, 3,806271f);
	ADD_TO_VOLUME_SET(Local_4.f_912, (*&Local_4 + 884)[5]);
	Local_4.f_948 = CREATE_VOLUME_SET_IN_LAYOUT(Local_4, "StageFourVols_set");
	(*&Local_4 + 916)[0] = CREATE_VOLUME_IN_LAYOUT(Local_4, "SlowDownVol", 2, -2631,639f, 68,69238f, 3400.0f, 0.0f, 45,50919f, 0.0f, 26,81543f, 9,212499f, 24,62779f);
	ADD_TO_VOLUME_SET(Local_4.f_948, (*&Local_4 + 916)[0]);
	(*&Local_4 + 916)[1] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CoverVolRight", 2, -2615,179f, 67,27757f, 3400,487f, 0.0f, 45,50919f, 0.0f, 5,485882f, 9,212499f, 10,26545f);
	ADD_TO_VOLUME_SET(Local_4.f_948, (*&Local_4 + 916)[1]);
	(*&Local_4 + 916)[2] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CoverVolLeft", 2, -2632,761f, 68,276f, 3390,376f, 0.0f, 45,50919f, 0.0f, 18,79527f, 9,212499f, 14,09775f);
	ADD_TO_VOLUME_SET(Local_4.f_948, (*&Local_4 + 916)[2]);
	(*&Local_4 + 916)[3] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CoverRestrictVol01", 2, -2620,234f, 69,20957f, 3380,312f, 1,162501f, 50,79906f, -0,5824705f, 6,443115f, 9,212499f, 6,789951f);
	ADD_TO_VOLUME_SET(Local_4.f_948, (*&Local_4 + 916)[3]);
	(*&Local_4 + 916)[4] = CREATE_VOLUME_IN_LAYOUT(Local_4, "StopWagons", 2, -2609,796f, 72,69597f, 3372,734f, 0.0f, 55,63082f, 0.0f, 35,52695f, 15,8733f, 29,17947f);
	ADD_TO_VOLUME_SET(Local_4.f_948, (*&Local_4 + 916)[4]);
	(*&Local_4 + 916)[5] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CheckWagons", 2, -2620,176f, 72,69597f, 3387,91f, 0.0f, 51,5552f, 0.0f, 53,72239f, 15,8733f, 121,647f);
	ADD_TO_VOLUME_SET(Local_4.f_948, (*&Local_4 + 916)[5]);
	(*&Local_4 + 916)[6] = CREATE_VOLUME_IN_LAYOUT(Local_4, "CoverRestrictVol02", 2, -2623,08f, 67,26273f, 3396,92f, 0,89974f, 35,25396f, -0,9640217f, 5,20354f, 9,212499f, 2,98046f);
	ADD_TO_VOLUME_SET(Local_4.f_948, (*&Local_4 + 916)[6]);
	Local_4.f_952 = CREATE_VOLUME_IN_LAYOUT(Local_4, "HorseFleeVol", 2, -2581,48f, 69,53617f, 3427,894f, 0.0f, 139,5579f, 0.0f, 117,3825f, 20.0f, 140.0f);
	Local_4.f_956 = CREATE_VOLUME_IN_LAYOUT(Local_4, "CombatVol04", 2, -2619,044f, 68,4581f, 3387,032f, 0.0f, 139,5579f, 0.0f, 141,8944f, 23,89495f, 94,11919f);
	Local_4.f_960 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", Local_4, 8, 0);
	(*&Local_4 + 964)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart01", -2865,611f, 63,48338f, 3405,611f, 0.0f, 289,9952f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 964)[0], Local_4.f_960);
	(*&Local_4 + 964)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd01", -2857,151f, 63,76876f, 3401,151f, 0.0f, 236,6619f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 964)[1], Local_4.f_960);
	(*&Local_4 + 964)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantStart01", -2859,016f, 63,7344f, 3397,329f, 0.0f, 25,13361f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 964)[2], Local_4.f_960);
	(*&Local_4 + 964)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantEnd01", -2846,096f, 63,72982f, 3402,096f, 0.0f, 243,3992f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 964)[3], Local_4.f_960);
	(*&Local_4 + 964)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "GraveRobberStart01", -2678,274f, 72,96165f, 3505,137f, 0.0f, 176,138f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 964)[4], Local_4.f_960);
	(*&Local_4 + 964)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "MarshalStart01", -2860,91f, 63,7344f, 3397,329f, 0.0f, -2,631643f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 964)[5], Local_4.f_960);
	(*&Local_4 + 964)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "MarshalEnd01", -2868.0f, 63,24704f, 3407,365f, 0.0f, -69,79194f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 964)[6], Local_4.f_960);
	(*&Local_4 + 964)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy01Start01", -2852.0f, 62,24313f, 3416.0f, 0.0f, -28,79f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 964)[7], Local_4.f_960);
	(*&Local_4 + 964)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy01End01", -2869,773f, 62,80204f, 3404.0f, -1,644377f, 1001,601f, 0,3918516f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 964)[8], Local_4.f_960);
	(*&Local_4 + 964)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy02Start01", -2852.0f, 63,24704f, 3412.0f, 0.0f, -36,513f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 964)[9], Local_4.f_960);
	(*&Local_4 + 964)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy02End01", -2868,987f, 62,9994f, 3405,632f, 0,8976003f, -67,35041f, -0,9675536f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 964)[10], Local_4.f_960);
	(*&Local_4 + 964)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy03Start01", -2848.0f, 62,24313f, 3416.0f, 0.0f, -38,51493f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 964)[11], Local_4.f_960);
	(*&Local_4 + 964)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy03End01", -2865,963f, 63,45712f, 3408,253f, 0.0f, -75,76511f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 964)[12], Local_4.f_960);
	(*&Local_4 + 964)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart01", -2861,594f, 63,72316f, 3392,04f, 0.0f, 229,6898f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 964)[13], Local_4.f_960);
	Local_4.f_1024 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", Local_4, 8, 0);
	(*&Local_4 + 1028)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart02", -2690,018f, 67,26274f, 3516.0f, 0.0f, -271,7662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1028)[0], Local_4.f_1024);
	(*&Local_4 + 1028)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd02", -2692.0f, 67,26273f, 3508.0f, 0.0f, -324,4327f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1028)[1], Local_4.f_1024);
	(*&Local_4 + 1028)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantStart02", -2687,822f, 67,26273f, 3500,378f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1028)[2], Local_4.f_1024);
	(*&Local_4 + 1028)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantEnd02", -2687,801f, 67,23531f, 3500,485f, 0.0f, 49,0811f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1028)[3], Local_4.f_1024);
	(*&Local_4 + 1028)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "GraveRobberStart02", -2678,274f, 72,96165f, 3505,137f, 0.0f, 176,366f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1028)[4], Local_4.f_1024);
	(*&Local_4 + 1028)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "GraveRobberEnd02", -2680,392f, 72,83021f, 3498,665f, 0.0f, 89,30868f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1028)[5], Local_4.f_1024);
	(*&Local_4 + 1028)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "MarshalEnd02", -2692.0f, 67,26276f, 3520.0f, 0.0f, -42,82462f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1028)[6], Local_4.f_1024);
	(*&Local_4 + 1028)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy01End02", -2692.0f, 67,26274f, 3524.0f, 0.0f, -44,44624f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1028)[7], Local_4.f_1024);
	(*&Local_4 + 1028)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy02End02", -2696.0f, 67,26273f, 3520.0f, 0.0f, -36,23001f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1028)[8], Local_4.f_1024);
	(*&Local_4 + 1028)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy03End02", -2696,137f, 67,2462f, 3523,618f, 0.0f, -30,95118f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1028)[9], Local_4.f_1024);
	(*&Local_4 + 1028)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd02", -2700.0f, 67,26273f, 3520.0f, 0.0f, -60,76933f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1028)[10], Local_4.f_1024);
	Local_4.f_1076 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", Local_4, 8, 0);
	(*&Local_4 + 1080)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart03", -2693,052f, 67,26275f, 3504.0f, 0.0f, -2,833623f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[0], Local_4.f_1076);
	(*&Local_4 + 1080)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd03", -2693,286f, 67,26273f, 3500,092f, 0.0f, 46,39815f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[1], Local_4.f_1076);
	(*&Local_4 + 1080)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantStart03", -2688.0f, 67,26273f, 3501,646f, -0,4626188f, 47,82355f, -0,9756708f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[2], Local_4.f_1076);
	(*&Local_4 + 1080)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantEnd03", -2688.0f, 67,26273f, 3501,606f, 0.0f, 51,56776f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[3], Local_4.f_1076);
	(*&Local_4 + 1080)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "GraveRobberStart03", -2687,705f, 67,42548f, 3497,218f, 0.0f, 47,86215f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[4], Local_4.f_1076);
	(*&Local_4 + 1080)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "GraveRobberEnd03", -2687,724f, 67,42548f, 3497,229f, 0.0f, 42,11629f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[5], Local_4.f_1076);
	(*&Local_4 + 1080)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "MarshalStart03", -2684,68f, 67,33083f, 3514,377f, 0.0f, 23,27995f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[6], Local_4.f_1076);
	(*&Local_4 + 1080)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "MarshalEnd03", -2697,824f, 67,26274f, 3496.0f, 0.0f, 54,54109f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[7], Local_4.f_1076);
	(*&Local_4 + 1080)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy01Start03", -2685,455f, 67,26273f, 3512,112f, 0.0f, 22,75547f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[8], Local_4.f_1076);
	(*&Local_4 + 1080)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy02Start03", -2684.0f, 67,26274f, 3524.0f, 0.0f, 16,29624f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[9], Local_4.f_1076);
	(*&Local_4 + 1080)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy03Start03", -2685,919f, 67,22498f, 3526,722f, 0.0f, 5,636109f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[10], Local_4.f_1076);
	(*&Local_4 + 1080)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy01End03", -2695,357f, 67,26274f, 3498,615f, 0.0f, 52,11643f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[11], Local_4.f_1076);
	(*&Local_4 + 1080)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy02End03", -2692,667f, 67,26273f, 3496,816f, 0.0f, 75,89851f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[12], Local_4.f_1076);
	(*&Local_4 + 1080)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy03End03", -2690,767f, 67,26273f, 3500.0f, 0.0f, 51,0082f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[13], Local_4.f_1076);
	(*&Local_4 + 1080)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart03", -2687,199f, 67,22352f, 3527,448f, 0.0f, -7,277934f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[14], Local_4.f_1076);
	(*&Local_4 + 1080)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseEnd03", -2693,602f, 67,26274f, 3518,398f, 0.0f, 315,2412f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[15], Local_4.f_1076);
	(*&Local_4 + 1080)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy01HorseStart03", -2686,083f, 67,26273f, 3504,971f, 0.0f, -59,26527f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1080)[16], Local_4.f_1076);
	Local_4.f_1152 = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", Local_4, 8, 0);
	(*&Local_4 + 1156)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStart04", -2657,43f, 67,26f, 3424,91f, 0.0f, 376,98f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[0], Local_4.f_1152);
	(*&Local_4 + 1156)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEnd04", -2645,608f, 67,26273f, 3416.0f, 0.0f, -45.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[1], Local_4.f_1152);
	(*&Local_4 + 1156)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantStart04", -2649,59f, 67,26f, 3415,88f, 0.0f, 405,19f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[2], Local_4.f_1152);
	(*&Local_4 + 1156)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantStart04a", -2650,605f, 67,22231f, 3418,554f, 0.0f, 130,287f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[3], Local_4.f_1152);
	(*&Local_4 + 1156)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantEnd04", -2659,219f, 67,26273f, 3426,369f, 0.0f, 130,287f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[4], Local_4.f_1152);
	(*&Local_4 + 1156)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "MarshalStart04", -2658,75f, 67,26f, 3421,71f, 0.0f, 394,77f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[5], Local_4.f_1152);
	(*&Local_4 + 1156)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "MarshalEnd04", -2662,62f, 67,26273f, 3430,17f, 0.0f, -46,37946f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[6], Local_4.f_1152);
	(*&Local_4 + 1156)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "GraveRobberStart04", -2657,996f, 67,26273f, 3429,07f, 0.0f, 49,51379f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[7], Local_4.f_1152);
	(*&Local_4 + 1156)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "GraveRobberEnd04", -2657,996f, 67,26273f, 3429,07f, 0.0f, 49,51379f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[8], Local_4.f_1152);
	(*&Local_4 + 1156)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy01Start04", -2655,96f, 67,26f, 3424,62f, 0.0f, 330,07f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[9], Local_4.f_1152);
	(*&Local_4 + 1156)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy01Start04a", -2654,911f, 67,26276f, 3421,058f, 0.0f, -44,39471f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[10], Local_4.f_1152);
	(*&Local_4 + 1156)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy01End04", -2657,438f, 67,26276f, 3423,449f, 0.0f, -214,3167f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[11], Local_4.f_1152);
	(*&Local_4 + 1156)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy02Start04", -2650,942f, 72,6483f, 3418,032f, 0.0f, -44,36398f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[12], Local_4.f_1152);
	(*&Local_4 + 1156)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy02End04", -2656,146f, 67,26276f, 3425,188f, 0.0f, 121,9506f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[13], Local_4.f_1152);
	(*&Local_4 + 1156)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy03Start04", -2645,25f, 72,66524f, 3423,36f, 0.0f, -13,87006f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[14], Local_4.f_1152);
	(*&Local_4 + 1156)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy03End04", -2645,25f, 72,66524f, 3423,36f, 0.0f, -13,87006f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[15], Local_4.f_1152);
	(*&Local_4 + 1156)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStart04", -2689,782f, 67,22352f, 3530,354f, 0.0f, -7,277934f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[16], Local_4.f_1152);
	(*&Local_4 + 1156)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "Enemy01End04", -2589,265f, 71,97211f, 3341,479f, 0.0f, 139,8033f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[17], Local_4.f_1152);
	(*&Local_4 + 1156)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "Enemy02End04", -2583,178f, 70,94917f, 3331,298f, 0.0f, 168,111f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[18], Local_4.f_1152);
	(*&Local_4 + 1156)[19] = CREATE_POINT_IN_LAYOUT(Local_4, "Enemy03End04", -2575,258f, 68,17435f, 3318,507f, 0.0f, 139,4567f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[19], Local_4.f_1152);
	(*&Local_4 + 1156)[20] = CREATE_POINT_IN_LAYOUT(Local_4, "Enemy04End04", -2604,036f, 72,28152f, 3327,882f, 0.0f, 177,2232f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[20], Local_4.f_1152);
	(*&Local_4 + 1156)[21] = CREATE_POINT_IN_LAYOUT(Local_4, "Enemy05End04", -2612.0f, 72,28235f, 3324.0f, 0.0f, 186,0924f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[21], Local_4.f_1152);
	(*&Local_4 + 1156)[22] = CREATE_POINT_IN_LAYOUT(Local_4, "Enemy06End04", -2620,058f, 70,58868f, 3319,891f, 0.0f, 187,1508f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[22], Local_4.f_1152);
	(*&Local_4 + 1156)[23] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerGotoEnd04", -2637,348f, 67,26274f, 3409,194f, 0.0f, -45.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1156)[23], Local_4.f_1152);
	Local_4.f_1256 = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", Local_4, 8, 0);
	(*&Local_4 + 1260)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerStartLast", -2660,888f, 67,26273f, 3426,739f, 0.0f, -200,8276f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[0], Local_4.f_1256);
	(*&Local_4 + 1260)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerEndLast", -2645,092f, 67,26274f, 3413,049f, 0.0f, -48,81252f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[1], Local_4.f_1256);
	(*&Local_4 + 1260)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantStartLast", -2657,155f, 67,26273f, 3427,086f, 0.0f, 90.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[2], Local_4.f_1256);
	(*&Local_4 + 1260)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantEndLast", -2658,184f, 67,26273f, 3428,335f, 0.0f, 54,17259f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[3], Local_4.f_1256);
	(*&Local_4 + 1260)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantEndLast1", -2659,736f, 67,26273f, 3427,462f, 0.0f, 76,49671f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[4], Local_4.f_1256);
	(*&Local_4 + 1260)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantEndLast2", -2646,95f, 67,26273f, 3414,875f, 0.0f, -42,57013f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[5], Local_4.f_1256);
	(*&Local_4 + 1260)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "MarshalStartLast", -2662,62f, 67,26273f, 3430,17f, 0.0f, -46,37946f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[6], Local_4.f_1256);
	(*&Local_4 + 1260)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "MarshalEndLast", -2662,62f, 67,26273f, 3430,17f, 0.0f, -46,37946f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[7], Local_4.f_1256);
	(*&Local_4 + 1260)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "GraveRobberStartLast", -2665,286f, 67,26273f, 3428,237f, 0.0f, -174,3413f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[8], Local_4.f_1256);
	(*&Local_4 + 1260)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "GraveRobberEndLast", -2662,833f, 67,28097f, 3424,375f, 0.0f, -117,7744f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[9], Local_4.f_1256);
	(*&Local_4 + 1260)[10] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy01StartLast", -2662,62f, 67,26273f, 3432,091f, 0.0f, -11,56318f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[10], Local_4.f_1256);
	(*&Local_4 + 1260)[11] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy01EndLast", -2662,62f, 67,26273f, 3432,091f, 0.0f, -11,56318f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[11], Local_4.f_1256);
	(*&Local_4 + 1260)[12] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy02StartLast", -2648.0f, 67,26273f, 3440.0f, 0.0f, -50,18544f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[12], Local_4.f_1256);
	(*&Local_4 + 1260)[13] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy02EndLast", -2648.0f, 67,26273f, 3440.0f, 0.0f, -50,18544f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[13], Local_4.f_1256);
	(*&Local_4 + 1260)[14] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy03StartLast", -2670,615f, 67,26273f, 3431,431f, 0.0f, -58,32727f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[14], Local_4.f_1256);
	(*&Local_4 + 1260)[15] = CREATE_POINT_IN_LAYOUT(Local_4, "Deputy03EndLast", -2667,391f, 67,26273f, 3429,712f, 0.0f, -58,32727f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[15], Local_4.f_1256);
	(*&Local_4 + 1260)[16] = CREATE_POINT_IN_LAYOUT(Local_4, "OutlawStartLast", -2651,033f, 67,26273f, 3420,029f, 0.0f, -229,6378f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[16], Local_4.f_1256);
	(*&Local_4 + 1260)[17] = CREATE_POINT_IN_LAYOUT(Local_4, "OutlawEndLast", -2659,969f, 67,26273f, 3426,783f, 0.0f, -222,6022f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[17], Local_4.f_1256);
	(*&Local_4 + 1260)[18] = CREATE_POINT_IN_LAYOUT(Local_4, "OutlawEndLast1", -2659,969f, 67,26273f, 3426,783f, 0.0f, -215,7498f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[18], Local_4.f_1256);
	(*&Local_4 + 1260)[19] = CREATE_POINT_IN_LAYOUT(Local_4, "PlayerHorseStartLast", -2642,923f, 67,26276f, 3413,077f, 0.0f, -7,277934f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[19], Local_4.f_1256);
	(*&Local_4 + 1260)[20] = CREATE_POINT_IN_LAYOUT(Local_4, "PrisonerStartLast", -2672,024f, 67,26273f, 3431,224f, 0.0f, -80,91577f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[20], Local_4.f_1256);
	(*&Local_4 + 1260)[21] = CREATE_POINT_IN_LAYOUT(Local_4, "PrisonerEndLast", -2668,799f, 67,26273f, 3429,227f, 0.0f, -77,44008f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[21], Local_4.f_1256);
	(*&Local_4 + 1260)[22] = CREATE_POINT_IN_LAYOUT(Local_4, "MarshalEndLast1", -2646,95f, 67,26273f, 3416,121f, 0.0f, -44,81846f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[22], Local_4.f_1256);
	(*&Local_4 + 1260)[23] = CREATE_POINT_IN_LAYOUT(Local_4, "GraveRobberEndLast1", -2648,115f, 67,26273f, 3414,62f, 0.0f, -44,11522f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1260)[23], Local_4.f_1256);
	Local_4.f_1360 = CREATE_OBJECTSET_IN_LAYOUT("HorseMove01Set", Local_4, 8, 0);
	(*&Local_4 + 1364)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_horse01_01", -2690,139f, 67,26274f, 3518,139f, 0.0f, 338,6316f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1364)[0], Local_4.f_1360);
	(*&Local_4 + 1364)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_horse01_02", -2688,379f, 67,26273f, 3516,379f, 0.0f, 338,1814f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1364)[1], Local_4.f_1360);
	(*&Local_4 + 1364)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_horse01_03", -2689,586f, 67,26276f, 3520f, 0.0f, -18,61553f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1364)[2], Local_4.f_1360);
	(*&Local_4 + 1364)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_horse01_04", -2690,465f, 67,26275f, 3521,535f, 0.0f, -4,007645f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1364)[3], Local_4.f_1360);
	Local_4.f_1384 = CREATE_OBJECTSET_IN_LAYOUT("CoverAlly02Set", Local_4, 8, 0);
	(*&Local_4 + 1388)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "MerchantCover02", -2687,812f, 67,25204f, 3500,448f, 0.0f, 52,35759f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1388)[0], Local_4.f_1384);
	(*&Local_4 + 1388)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "GraveRobberCover02", -2680,423f, 72,83021f, 3497,646f, 0.0f, 26,90582f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1388)[1], Local_4.f_1384);
	Local_4.f_1400 = CREATE_OBJECTSET_IN_LAYOUT("CoverAlly03aSet", Local_4, 8, 0);
	(*&Local_4 + 1404)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03a_Marshal", -2715,429f, 71,62858f, 3462,199f, 0.0f, -38,35629f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1404)[0], Local_4.f_1400);
	(*&Local_4 + 1404)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03a_Deputy01", -2718,257f, 71,45237f, 3465,055f, 0.0f, -45,91118f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1404)[1], Local_4.f_1400);
	(*&Local_4 + 1404)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03a_Deputy02", -2722,238f, 71,44849f, 3463,872f, 0.0f, -52,30455f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1404)[2], Local_4.f_1400);
	(*&Local_4 + 1404)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03a_Deputy03", -2712,578f, 71,44228f, 3459,661f, 0.0f, -42,72345f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1404)[3], Local_4.f_1400);
	(*&Local_4 + 1404)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03a_Seth", -2725,873f, 71,31695f, 3473,054f, 0.0f, -42,06234f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1404)[4], Local_4.f_1400);
	(*&Local_4 + 1404)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03a_Extra", -2715,714f, 71,44128f, 3456,714f, 0.0f, -42,06234f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1404)[5], Local_4.f_1400);
	Local_4.f_1432 = CREATE_OBJECTSET_IN_LAYOUT("CoverAlly03bSet", Local_4, 8, 0);
	(*&Local_4 + 1436)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03b_Marshal", -2694,643f, 73,85524f, 3441,76f, 0.0f, -27,40825f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1436)[0], Local_4.f_1432);
	(*&Local_4 + 1436)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03b_Deputy01", -2699,138f, 75,76976f, 3442,737f, 0.0f, -41,92825f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1436)[1], Local_4.f_1432);
	(*&Local_4 + 1436)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03b_Deputy02", -2694,654f, 75,78565f, 3444,83f, 0.0f, -22,00206f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1436)[2], Local_4.f_1432);
	(*&Local_4 + 1436)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03b_Deputy03", -2698,295f, 73,85524f, 3439,905f, 0.0f, -25,48923f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1436)[3], Local_4.f_1432);
	(*&Local_4 + 1436)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03b_Seth", -2695,191f, 73,85683f, 3449,335f, 0.0f, -31,23751f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1436)[4], Local_4.f_1432);
	(*&Local_4 + 1436)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03b_Extra", -2691,416f, 73,85525f, 3443,297f, 0,07382786f, -21,3548f, 0,5949711f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1436)[5], Local_4.f_1432);
	Local_4.f_1464 = CREATE_OBJECTSET_IN_LAYOUT("CoverAlly03cSet", Local_4, 8, 0);
	(*&Local_4 + 1468)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03c_Marshal", -2679,337f, 71,65485f, 3427,686f, 0.0f, -38,35629f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[0], Local_4.f_1464);
	(*&Local_4 + 1468)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03c_Deputy01", -2689,681f, 71,65552f, 3432,96f, 0.0f, -38,35629f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[1], Local_4.f_1464);
	(*&Local_4 + 1468)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03c_Deputy02", -2682,983f, 71,74915f, 3435,439f, 0.0f, -33,28273f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[2], Local_4.f_1464);
	(*&Local_4 + 1468)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03c_Deputy03", -2687,033f, 71,65839f, 3450,798f, 0.0f, -21,19123f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[3], Local_4.f_1464);
	(*&Local_4 + 1468)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03c_Seth", -2691,412f, 73,85527f, 3443,291f, 0.0f, -19,78155f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[4], Local_4.f_1464);
	(*&Local_4 + 1468)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03c_Extra", -2677,483f, 71,77161f, 3431,227f, 0.0f, -38,35629f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1468)[5], Local_4.f_1464);
	Local_4.f_1496 = CREATE_OBJECTSET_IN_LAYOUT("CoverAlly03dSet", Local_4, 8, 0);
	(*&Local_4 + 1500)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03d_Marshal", -2666,466f, 71,65486f, 3420,208f, 0.0f, -68,27863f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[0], Local_4.f_1496);
	(*&Local_4 + 1500)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03d_Deputy01", -2669,284f, 71,69891f, 3422,637f, 0.0f, -118,3604f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[1], Local_4.f_1496);
	(*&Local_4 + 1500)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03d_Deputy02", -2659,742f, 71,65427f, 3417,979f, 0.0f, -122,7962f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[2], Local_4.f_1496);
	(*&Local_4 + 1500)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03d_Deputy03", -2661,485f, 71,65427f, 3419,646f, 0.0f, 225,45f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[3], Local_4.f_1496);
	(*&Local_4 + 1500)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03d_Seth", -2672,345f, 71,61861f, 3425,856f, 0.0f, -129,5734f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[4], Local_4.f_1496);
	(*&Local_4 + 1500)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03d_Extra", -2656,782f, 72,8146f, 3419,03f, 0.0f, -225,1662f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1500)[5], Local_4.f_1496);
	Local_4.f_1528 = CREATE_OBJECTSET_IN_LAYOUT("CoverAlly03eSet", Local_4, 8, 0);
	(*&Local_4 + 1532)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03e_Marshal", -2653,68f, 67,25487f, 3439,243f, 0.0f, -229,1561f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1532)[0], Local_4.f_1528);
	(*&Local_4 + 1532)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03e_Deputy01", -2671,617f, 67,39581f, 3426,037f, 0.0f, -176,9978f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1532)[1], Local_4.f_1528);
	(*&Local_4 + 1532)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03e_Deputy02", -2652,982f, 72,65476f, 3422,88f, 0.0f, 134,0245f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1532)[2], Local_4.f_1528);
	(*&Local_4 + 1532)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03e_Deputy03", -2648,339f, 72,65478f, 3427,687f, 0.0f, -229,8939f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1532)[3], Local_4.f_1528);
	(*&Local_4 + 1532)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03e_Seth", -2664,948f, 67,22917f, 3425,506f, 0.0f, 491,4511f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1532)[4], Local_4.f_1528);
	(*&Local_4 + 1532)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "CoverAlly03e_Extra", -2667,022f, 67,43769f, 3428,849f, 0.0f, -163,8641f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1532)[5], Local_4.f_1528);
	Local_4.f_1560 = CREATE_OBJECTSET_IN_LAYOUT("CoverEnemy03aSet", Local_4, 8, 0);
	*(&Local_4 + 1564[06]) = { -2702,235f, 73,84142f, 3443,299f };
	*(&Local_4 + 1564[06] + 12) = { 0.0f, 157,3038f, 0.0f };
	(*&Local_4 + 1616)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_enemy_02A_01", -2702,235f, 73,84142f, 3443,299f, 0.0f, 157,3038f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1616)[0], Local_4.f_1560);
	*(&Local_4 + 1564[16]) = { -2696,724f, 75,79555f, 3446,038f };
	*(&Local_4 + 1564[16] + 12) = { 0.0f, 134,6333f, 0.0f };
	(*&Local_4 + 1616)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_enemy_02A_02", -2696,724f, 75,79555f, 3446,038f, 0.0f, 134,6333f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1616)[1], Local_4.f_1560);
	Local_4.f_1628 = CREATE_OBJECTSET_IN_LAYOUT("CoverEnemy03bSet", Local_4, 8, 0);
	*(&Local_4 + 1632[06]) = { -2676,073f, 71,64713f, 3429,556f };
	*(&Local_4 + 1632[06] + 12) = { 0.0f, 141,2341f, 0.0f };
	(*&Local_4 + 1684)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_enemy_02B_01", -2676,073f, 71,64713f, 3429,556f, 0.0f, 141,2341f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[0], Local_4.f_1628);
	*(&Local_4 + 1632[16]) = { -2692,095f, 71,64719f, 3431,016f };
	*(&Local_4 + 1632[16] + 12) = { 0.0f, 180,5328f, 0.0f };
	(*&Local_4 + 1684)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_enemy_02B_02", -2692,095f, 71,64719f, 3431,016f, 0.0f, 180,5328f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1684)[1], Local_4.f_1628);
	Local_4.f_1696 = CREATE_OBJECTSET_IN_LAYOUT("CoverEnemy03cSet", Local_4, 8, 0);
	*(&Local_4 + 1700[06]) = { -2662,491f, 72,13671f, 3414,696f };
	*(&Local_4 + 1700[06] + 12) = { 0.0f, 131,9133f, 0.0f };
	(*&Local_4 + 1728)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_enemy_02C_03", -2662,491f, 72,13671f, 3414,696f, 0.0f, 131,9133f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1728)[0], Local_4.f_1696);
	Local_4.f_1736 = CREATE_OBJECTSET_IN_LAYOUT("CoverEnemy03dSet", Local_4, 8, 0);
	*(&Local_4 + 1740[06]) = { -2657,595f, 71,64566f, 3412,475f };
	*(&Local_4 + 1740[06] + 12) = { 0.0f, 133,2243f, 0.0f };
	(*&Local_4 + 1768)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_enemy_02D_01", -2657,595f, 71,64566f, 3412,475f, 0.0f, 133,2243f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1768)[0], Local_4.f_1736);
	Local_4.f_1776 = CREATE_OBJECTSET_IN_LAYOUT("CoverEnemy03eSet", Local_4, 8, 0);
	*(&Local_4 + 1780[06]) = { -2677,769f, 67,24471f, 3441,914f };
	*(&Local_4 + 1780[06] + 12) = { 0.0f, -58,72967f, 0.0f };
	(*&Local_4 + 1832)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_enemy_02E_01", -2677,769f, 67,24471f, 3441,914f, 0.0f, -58,72967f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1832)[0], Local_4.f_1776);
	*(&Local_4 + 1780[16]) = { -2657,158f, 67,26275f, 3445,487f };
	*(&Local_4 + 1780[16] + 12) = { 0.0f, -24,46681f, 0.0f };
	(*&Local_4 + 1832)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_enemy_02E_02", -2657,158f, 67,26275f, 3445,487f, 0.0f, -24,46681f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1832)[1], Local_4.f_1776);
	Local_4.f_1844 = CREATE_OBJECTSET_IN_LAYOUT("CoverEnemy03fSet", Local_4, 8, 0);
	*(&Local_4 + 1848[06]) = { -2657,279f, 71,65486f, 3448,943f };
	*(&Local_4 + 1848[06] + 12) = { 0.0f, 52,95694f, 0.0f };
	(*&Local_4 + 1900)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_enemy_02F_01", -2657,279f, 71,65486f, 3448,943f, 0.0f, 52,95694f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1900)[0], Local_4.f_1844);
	*(&Local_4 + 1848[16]) = { -2653,964f, 71,65479f, 3440,849f };
	*(&Local_4 + 1848[16] + 12) = { 0.0f, 62,53495f, 0.0f };
	(*&Local_4 + 1900)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_enemy_02F_02", -2653,964f, 71,65479f, 3440,849f, 0.0f, 62,53495f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1900)[1], Local_4.f_1844);
	Local_4.f_1912 = CREATE_OBJECTSET_IN_LAYOUT("CoverAlly04Set", Local_4, 8, 0);
	(*&Local_4 + 1916)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_ally_04_01", -2635,543f, 72,65486f, 3421,243f, 0.0f, -37,45364f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1916)[0], Local_4.f_1912);
	(*&Local_4 + 1916)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_ally_04_02", -2634,206f, 72,65486f, 3423,01f, 0.0f, -35,31872f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1916)[1], Local_4.f_1912);
	(*&Local_4 + 1916)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_ally_04_03", -2631,636f, 72,65486f, 3426,614f, -0,7719588f, -392,6155f, -9,133805f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1916)[2], Local_4.f_1912);
	(*&Local_4 + 1916)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_ally_04_04", -2636,67f, 72,65486f, 3426,512f, 0.0f, 317,9547f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1916)[3], Local_4.f_1912);
	(*&Local_4 + 1916)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_ally_04_05", -2636,597f, 72,65486f, 3426,022f, 0.0f, 328,8183f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1916)[4], Local_4.f_1912);
	(*&Local_4 + 1916)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "point_cover_ally_04_06", -2637,564f, 72,65486f, 3426,821f, 0.0f, 328,8183f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1916)[5], Local_4.f_1912);
	Local_4.f_1944 = CREATE_OBJECTSET_IN_LAYOUT("WagonSpawnSet", Local_4, 8, 0);
	(*&Local_4 + 1948)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_spawn_wagon01", -2851,145f, 63,72f, 3402,94f, 0.0f, 248,8572f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1948)[0], Local_4.f_1944);
	(*&Local_4 + 1948)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_spawn_wagon02", -2681,641f, 67,26276f, 3519,817f, 0.0f, 30,1183f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1948)[1], Local_4.f_1944);
	(*&Local_4 + 1948)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_spawn_wagon03", -2691,635f, 67,26f, 3504,03f, 0.0f, 217,2104f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1948)[2], Local_4.f_1944);
	(*&Local_4 + 1948)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "point_spawn_wagon04", -2682,933f, 67,26273f, 3519,224f, 0.0f, 211,0539f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1948)[3], Local_4.f_1944);
	(*&Local_4 + 1948)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "point_spawn_wagon05", -2640.0f, 67,26276f, 3408.0f, 0.0f, 134,7962f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1948)[4], Local_4.f_1944);
	(*&Local_4 + 1948)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "point_spawn_wagon06", -2641,977f, 67,26273f, 3409,999f, 0.0f, 135,6804f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1948)[5], Local_4.f_1944);
	(*&Local_4 + 1948)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "point_spawn_wagon07", -2640.0f, 67,26276f, 3408.0f, 0.0f, 135,6804f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1948)[6], Local_4.f_1944);
	Local_4.f_1980 = CREATE_OBJECTSET_IN_LAYOUT("GuardsMove01Set", Local_4, 8, 0);
	(*&Local_4 + 1984)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_guard01_01", -2701,741f, 67,26276f, 3491,377f, 0.0f, -138,1414f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1984)[0], Local_4.f_1980);
	(*&Local_4 + 1984)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_guard01_02", -2701,059f, 67,26273f, 3489,6f, 0.0f, -147,9411f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1984)[1], Local_4.f_1980);
	(*&Local_4 + 1984)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_guard01_03", -2700,24f, 67,26273f, 3487,792f, 0.0f, -149,4766f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 1984)[2], Local_4.f_1980);
	Local_4.f_2000 = CREATE_OBJECTSET_IN_LAYOUT("FortGringosSet", Local_4, 8, 0);
	(*&Local_4 + 2004)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo_winch01", -2643,987f, 67,26276f, 3423,903f, 0.0f, -225,0778f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2004)[0], Local_4.f_2000);
	(*&Local_4 + 2004)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_gringo_winch02", -2654,31f, 67,76144f, 3412,083f, 0.0f, -225,0778f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2004)[1], Local_4.f_2000);
	Local_4.f_2016 = CREATE_OBJECTSET_IN_LAYOUT("DeputyStageOneGotosSet", Local_4, 8, 0);
	(*&Local_4 + 2020)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_deputy01_00", -2856.0f, 63,72982f, 3407,074f, -0,3304513f, -65,53627f, 0,09580173f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2020)[0], Local_4.f_2016);
	(*&Local_4 + 2020)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_deputy02_00", -2850,442f, 63,72982f, 3401,558f, 0.0f, -120,1343f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2020)[1], Local_4.f_2016);
	(*&Local_4 + 2020)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_deputy03_00", -2850,915f, 63,59885f, 3409,085f, 0.0f, 329,5341f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2020)[2], Local_4.f_2016);
	Local_4.f_2036 = CREATE_OBJECTSET_IN_LAYOUT("MiscSet", Local_4, 8, 0);
	*(&Local_4 + 2040[06]) = { -2685,341f, 69,91605f, 3501,361f };
	*(&Local_4 + 2040[06] + 12) = { 0.0f, -301,4992f, 0.0f };
	(*&Local_4 + 2284)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "point_move_graverobber01", -2685,341f, 69,91605f, 3501,361f, 0.0f, -301,4992f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[0], Local_4.f_2036);
	*(&Local_4 + 2040[16]) = { -2722,991f, 67,26275f, 3472f };
	*(&Local_4 + 2040[16] + 12) = { 0.0f, 36,44467f, 0.0f };
	(*&Local_4 + 2284)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "hitchingpost01", -2722,991f, 67,26275f, 3472f, 0.0f, 36,44467f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[1], Local_4.f_2036);
	*(&Local_4 + 2040[26]) = { -2720,803f, 67,53471f, 3469,728f };
	*(&Local_4 + 2040[26] + 12) = { 0.0f, 36,44467f, 0.0f };
	(*&Local_4 + 2284)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "hitchingpost02", -2720,803f, 67,53471f, 3469,728f, 0.0f, 36,44467f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[2], Local_4.f_2036);
	*(&Local_4 + 2040[36]) = { -2699,169f, 67,21678f, 3521,723f };
	*(&Local_4 + 2040[36] + 12) = { 0.0f, -83,19875f, 0.0f };
	(*&Local_4 + 2284)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "napskippoint", -2699,169f, 67,21678f, 3521,723f, 0.0f, -83,19875f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[3], Local_4.f_2036);
	*(&Local_4 + 2040[46]) = { -2692.0f, 67,26276f, 3520.0f };
	*(&Local_4 + 2040[46] + 12) = { 0.0f, -101,3578f, 0.0f };
	(*&Local_4 + 2284)[4] = CREATE_POINT_IN_LAYOUT(Local_4, "cleartrees", -2692.0f, 67,26276f, 3520.0f, 0.0f, -101,3578f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[4], Local_4.f_2036);
	*(&Local_4 + 2040[56]) = { -2614,092f, 68,99974f, 3380,68f };
	*(&Local_4 + 2040[56] + 12) = { 0.0f, -218,7067f, 0.0f };
	(*&Local_4 + 2284)[5] = CREATE_POINT_IN_LAYOUT(Local_4, "TeleportInfantry04", -2614,092f, 68,99974f, 3380,68f, 0.0f, -218,7067f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[5], Local_4.f_2036);
	*(&Local_4 + 2040[66]) = { -2677,552f, 74,77432f, 3468,953f };
	*(&Local_4 + 2040[66] + 12) = { 0.0f, -218,7067f, 0.0f };
	(*&Local_4 + 2284)[6] = CREATE_POINT_IN_LAYOUT(Local_4, "DisableCurve", -2677,552f, 74,77432f, 3468,953f, 0.0f, -218,7067f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[6], Local_4.f_2036);
	*(&Local_4 + 2040[76]) = { -2712,5f, 67,26276f, 3499,5f };
	*(&Local_4 + 2040[76] + 12) = { 0.0f, -218,7067f, 0.0f };
	(*&Local_4 + 2284)[7] = CREATE_POINT_IN_LAYOUT(Local_4, "CalcAngleStage02", -2712,5f, 67,26276f, 3499,5f, 0.0f, -218,7067f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[7], Local_4.f_2036);
	*(&Local_4 + 2040[86]) = { -2682,276f, 66,7188f, 3322,033f };
	*(&Local_4 + 2040[86] + 12) = { 0.0f, -218,7067f, 0.0f };
	(*&Local_4 + 2284)[8] = CREATE_POINT_IN_LAYOUT(Local_4, "CalcAngleStage04", -2682,276f, 66,7188f, 3322,033f, 0.0f, -218,7067f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[8], Local_4.f_2036);
	*(&Local_4 + 2040[96]) = { -2728,221f, 71,40936f, 3471,753f };
	*(&Local_4 + 2040[96] + 12) = { 0.0f, -411,6581f, 0.0f };
	(*&Local_4 + 2284)[9] = CREATE_POINT_IN_LAYOUT(Local_4, "TeleportPlayerCut03", -2728,221f, 71,40936f, 3471,753f, 0.0f, -411,6581f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2284)[9], Local_4.f_2036);
	Local_4.f_2328 = CREATE_OBJECTSET_IN_LAYOUT("StageTwo_WaveSpawnsSet", Local_4, 8, 0);
	(*&Local_4 + 2332)[0] = CREATE_POINT_IN_LAYOUT(Local_4, "SpawnPoint01", -2699,533f, 67,50015f, 3465,856f, 0.0f, 254,4175f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2332)[0], Local_4.f_2328);
	(*&Local_4 + 2332)[1] = CREATE_POINT_IN_LAYOUT(Local_4, "SpawnPoint03", -2690,013f, 67,26276f, 3457,987f, 0.0f, 156,7712f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2332)[1], Local_4.f_2328);
	(*&Local_4 + 2332)[2] = CREATE_POINT_IN_LAYOUT(Local_4, "SpawnPoint04", -2677,189f, 67,45486f, 3467,041f, 0.0f, 140,1511f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2332)[2], Local_4.f_2328);
	(*&Local_4 + 2332)[3] = CREATE_POINT_IN_LAYOUT(Local_4, "SpawnPoint05", -2716,209f, 71,53252f, 3460,162f, 0.0f, 140,1511f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_4 + 2332)[3], Local_4.f_2328);
	Local_4.f_2352 = CREATE_OBJECTSET_IN_LAYOUT("StageTwo_CoverLocsSet", Local_4, 8, 0);
	*(&Local_4 + 2356[06]) = { -2683,686f, 67,26273f, 3490,775f };
	*(&Local_4 + 2356[06] + 12) = { 0.0f, -227,898f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs01", -2683,686f, 67,26273f, 3490,775f, 0.0f, -227,898f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_4.f_2352);
	*(&Local_4 + 2356[16]) = { -2682,992f, 67,26273f, 3484,811f };
	*(&Local_4 + 2356[16] + 12) = { 0.0f, -232,6976f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs02", -2682,992f, 67,26273f, 3484,811f, 0.0f, -232,6976f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_4.f_2352);
	*(&Local_4 + 2356[26]) = { -2689,926f, 67,26276f, 3482,361f };
	*(&Local_4 + 2356[26] + 12) = { 0.0f, -218,9792f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs03", -2689,926f, 67,26276f, 3482,361f, 0.0f, -218,9792f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_4.f_2352);
	*(&Local_4 + 2356[36]) = { -2706,969f, 67,26273f, 3483,938f };
	*(&Local_4 + 2356[36] + 12) = { 0.0f, 223,0209f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs04", -2706,969f, 67,26273f, 3483,938f, 0.0f, 223,0209f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_4.f_2352);
	*(&Local_4 + 2356[46]) = { -2695,609f, 67,26274f, 3477,199f };
	*(&Local_4 + 2356[46] + 12) = { 0.0f, -213,369f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs06", -2695,609f, 67,26274f, 3477,199f, 0.0f, -213,369f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_4.f_2352);
	*(&Local_4 + 2356[56]) = { -2700,192f, 67,26273f, 3477,244f };
	*(&Local_4 + 2356[56] + 12) = { 0.0f, -144,5227f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs07", -2700,192f, 67,26273f, 3477,244f, 0.0f, -144,5227f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_4.f_2352);
	*(&Local_4 + 2356[66]) = { -2708,857f, 67,26274f, 3486,15f };
	*(&Local_4 + 2356[66] + 12) = { 0.0f, 222,8288f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs09", -2708,857f, 67,26274f, 3486,15f, 0.0f, 222,8288f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_4.f_2352);
	*(&Local_4 + 2356[76]) = { -2697,9f, 67,26275f, 3480,136f };
	*(&Local_4 + 2356[76] + 12) = { 0.0f, -163,6613f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs10", -2697,9f, 67,26275f, 3480,136f, 0.0f, -163,6613f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_4.f_2352);
	*(&Local_4 + 2356[86]) = { -2701,044f, 67,26275f, 3481,368f };
	*(&Local_4 + 2356[86] + 12) = { 0.0f, -128,8706f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs11", -2701,044f, 67,26275f, 3481,368f, 0.0f, -128,8706f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_4.f_2352);
	*(&Local_4 + 2356[96]) = { -2695,797f, 67,26274f, 3484,915f };
	*(&Local_4 + 2356[96] + 12) = { 0.0f, -156,6634f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs12", -2695,797f, 67,26274f, 3484,915f, 0.0f, -156,6634f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_4.f_2352);
	*(&Local_4 + 2356[106]) = { -2703,032f, 67,26274f, 3487,602f };
	*(&Local_4 + 2356[106] + 12) = { 0.0f, -132,6344f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs13", -2703,032f, 67,26274f, 3487,602f, 0.0f, -132,6344f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_4.f_2352);
	*(&Local_4 + 2356[116]) = { -2698,767f, 67,26275f, 3492,26f };
	*(&Local_4 + 2356[116] + 12) = { 0.0f, -132,9883f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs14", -2698,767f, 67,26275f, 3492,26f, 0.0f, -132,9883f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_4.f_2352);
	*(&Local_4 + 2356[126]) = { -2702,849f, 67,26274f, 3494,823f };
	*(&Local_4 + 2356[126] + 12) = { 0.0f, -132,9883f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs15", -2702,849f, 67,26274f, 3494,823f, 0.0f, -132,9883f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_4.f_2352);
	*(&Local_4 + 2356[136]) = { -2685,613f, 67,26273f, 3491,953f };
	*(&Local_4 + 2356[136] + 12) = { 0.0f, -234,1708f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs16", -2685,613f, 67,26273f, 3491,953f, 0.0f, -234,1708f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_4.f_2352);
	*(&Local_4 + 2356[146]) = { -2695,864f, 67,26273f, 3490,604f };
	*(&Local_4 + 2356[146] + 12) = { 0.0f, -149,6156f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs17", -2695,864f, 67,26273f, 3490,604f, 0.0f, -149,6156f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_4.f_2352);
	*(&Local_4 + 2356[156]) = { -2697,306f, 67,26273f, 3491,962f };
	*(&Local_4 + 2356[156] + 12) = { 0.0f, -141,9156f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs18", -2697,306f, 67,26273f, 3491,962f, 0.0f, -141,9156f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_4.f_2352);
	*(&Local_4 + 2356[166]) = { -2704,724f, 67,26273f, 3496,644f };
	*(&Local_4 + 2356[166] + 12) = { 0.0f, -133,9802f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs19", -2704,724f, 67,26273f, 3496,644f, 0.0f, -133,9802f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_4.f_2352);
	*(&Local_4 + 2356[176]) = { -2694,189f, 67,26276f, 3489,844f };
	*(&Local_4 + 2356[176] + 12) = { 0.0f, -162,934f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs21", -2694,189f, 67,26276f, 3489,844f, 0.0f, -162,934f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_4.f_2352);
	*(&Local_4 + 2356[186]) = { -2705,817f, 67,26276f, 3498,183f };
	*(&Local_4 + 2356[186] + 12) = { 0.0f, -133,9802f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_4, "CoverLocs22", -2705,817f, 67,26276f, 3498,183f, 0.0f, -133,9802f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_4.f_2352);
	Local_4.f_2816 = CREATE_OBJECTSET_IN_LAYOUT("StageFourSet", Local_4, 8, 0);
	*(&Local_4 + 2820[06]) = { -2704,44f, 66,03447f, 3361,031f };
	*(&Local_4 + 2820[06] + 12) = { 0.0f, 317,5318f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_4, "StreamWagon01", -2704,44f, 66,03447f, 3361,031f, 0.0f, 317,5318f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_4.f_2816);
	*(&Local_4 + 2820[16]) = { -2579,842f, 70,2523f, 3480,366f };
	*(&Local_4 + 2820[16] + 12) = { 0.0f, 317,5318f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_4, "StreamWagon02", -2579,842f, 70,2523f, 3480,366f, 0.0f, 317,5318f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_4.f_2816);
	*(&Local_4 + 2820[26]) = { -2628,125f, 69,7486f, 3370,597f };
	*(&Local_4 + 2820[26] + 12) = { 0.0f, 409,0646f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_4, "Wagon02Goto", -2628,125f, 69,7486f, 3370,597f, 0.0f, 409,0646f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_4.f_2816);
	*(&Local_4 + 2820[36]) = { -2600.0f, 69,60719f, 3375,377f };
	*(&Local_4 + 2820[36] + 12) = { 0.0f, 224,5567f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_4, "Wagon01Goto", -2600.0f, 69,60719f, 3375,377f, 0.0f, 224,5567f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_4.f_2816);
	*(&Local_4 + 2820[46]) = { -2570,093f, 66,26746f, 3310,743f };
	*(&Local_4 + 2820[46] + 12) = { 0.0f, 317,5318f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_4, "StreamWagon03", -2570,093f, 66,26746f, 3310,743f, 0.0f, 317,5318f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_4.f_2816);
	*(&Local_4 + 2820[56]) = { -2634,547f, 71,28917f, 3359,726f };
	*(&Local_4 + 2820[56] + 12) = { 0.0f, 441,0409f, 0.0f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_4, "Wagon03Goto", -2634,547f, 71,28917f, 3359,726f, 0.0f, 441,0409f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_4.f_2816);
	*(&Local_4 + 2820[66]) = { -2691,105f, 65,11156f, 3315,55f };
	*(&Local_4 + 2820[66] + 12) = { 0.0f, 409,0646f, 0.0f };
	bVar26 = CREATE_POINT_IN_LAYOUT(Local_4, "HorsesGoto04_01", -2691,105f, 65,11156f, 3315,55f, 0.0f, 409,0646f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar26, Local_4.f_2816);
	*(&Local_4 + 2820[76]) = { -2576.0f, 70,27451f, 3512.0f };
	*(&Local_4 + 2820[76] + 12) = { 0.0f, 409,0646f, 0.0f };
	bVar27 = CREATE_POINT_IN_LAYOUT(Local_4, "HorsesGoto04_02", -2576.0f, 70,27451f, 3512.0f, 0.0f, 409,0646f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar27, Local_4.f_2816);
	Local_4.f_3016 = CREATE_GRINGO_IN_LAYOUT(Local_4, "stand_guntricks_e_any", "stand_guntricks_e_any", -2656.0f, 67,26275f, 3424,644f, 0.0f, -41,17199f, 0.0f);
	Local_4.f_3020 = CREATE_GRINGO_IN_LAYOUT(Local_4, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -2650,094f, 72,63702f, 3417,571f, 0.0f, -48,11462f, 0.0f);
	Local_4.f_3024 = CREATE_GRINGO_IN_LAYOUT(Local_4, "smoking_stand_nospawn", "smoking_stand_nospawn", -2658,571f, 67,26273f, 3421,429f, 0.0f, -169,1498f, 0.0f);
	Local_4.f_3028 = CREATE_GRINGO_IN_LAYOUT(Local_4, "stand_lookdistance_merchant", "stand_lookdistance_w_any", -2633,2f, 67,26275f, 3408.0f, 0.0f, -38,31894f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_4.f_3028), 0);
	Local_4.f_3032 = CREATE_GRINGO_IN_LAYOUT(Local_4, "stand_wring_hand_merchant", "stand_wring_hands", -2687,214f, 67,26273f, 3504,786f, 0.0f, 35,00843f, 0.0f);
	Local_4.f_3036 = CREATE_GRINGO_IN_LAYOUT(Local_4, "smoking_stand_seth", "smoking_stand_nospawn", -2657,979f, 67,26274f, 3429,115f, 0.0f, -36,42729f, 0.0f);
}

bool Function_571() //Position: 0x23CDD / 146653
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_581(0))
		{
			return 0;
		}
		if (!Function_580())
		{
			return 0;
		}
		if (!Function_308(&bLocal_813))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_919))
		{
			bLocal_919 = Function_572(2, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_919, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_1125))
		{
			bLocal_1125 = Function_572(1, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_1125, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(bLocal_1126))
		{
			bLocal_1126 = Function_572(4, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(bLocal_1126, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_572(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x23D8B / 146827
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
		Function_569(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(Global_8492[iParam014], true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(Global_8492[iParam014]), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(Global_8492[iParam014]);
	}
	else
	{
		if (bParam6)
		{
			bVar1 = Function_579(StackVal, iParam7);
		}
		if (bParam8)
		{
			bVar1 = Function_575(StackVal, iParam7);
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
		Function_574(bVar1, 0, 0, 0, 0);
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
		Function_573(bVar1, 0);
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

void Function_573(bool bParam0, bool bParam1) //Position: 0x24277 / 148087
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

void Function_574(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x24297 / 148119
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

bool Function_575(int iParam0, bool bParam1) //Position: 0x242EB / 148203
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_388(iParam0))
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
						Function_576(bVar2, bParam1);
						return bVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_576(bool bParam0, bool bParam1) //Position: 0x2436B / 148331
{
	Function_578(bParam0);
	Function_577(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), bParam1);
	return;
}

void Function_577(bool bParam0) //Position: 0x24391 / 148369
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

void Function_578(bool bParam0) //Position: 0x243B5 / 148405
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

bool Function_579(int iParam0, bool bParam1) //Position: 0x24484 / 148612
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

bool Function_580() //Position: 0x24517 / 148759
{
	Function_437(&Local_4 + 4, 588, 2, 0);
	Function_437(&Local_4 + 4, 590, 2, 0);
	Function_437(&Local_4 + 4, 592, 2, 0);
	Function_437(&Local_4 + 4, 976, 2, 0);
	Function_437(&Local_4 + 4, 977, 2, 0);
	Function_437(&Local_4 + 4, 980, 2, 0);
	Function_437(&Local_4 + 4, 981, 2, 0);
	Function_314(&Local_4 + 4, "p_gen_crateTnt01x", 0, 0);
	Function_314(&Local_4 + 4, "p_gen_powderKeg01x", 0, 0);
	Function_314(&Local_4 + 4, "p_gen_lantern05x", 0, 0);
	Function_314(&Local_4 + 4, "p_gen_lantern04x", 0, 0);
	Function_314(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_314(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_314(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_314(&Local_4 + 4, "$/content/scripting/gringo/simplegringo/stand_wring_hands", 1, 0);
	if (Function_308(&Local_4 + 4))
	{
		return 1;
	}
	return 0;
}

bool Function_581(bool bParam0) //Position: 0x24723 / 149283
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

bool Function_582() //Position: 0x24751 / 149329
{
	Function_274(&Local_908, 0);
	switch (Local_908)
	{
		case 0x000003E8:
			if (bLocal_915 != 99 && (Function_273(&Local_806) || Local_806.f_24 < 1))
			{
				Local_908 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/FORT_01/FORT_01"))
			{
				LOG_ERROR("FORT_01/FORT_01 does not exist! No play...");
				Local_908 = 1106;
				return 0;
			}
			Function_349(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			Function_347(StackVal, StackVal, bLocal_805, *(&Global_3422[2440] + 52), &Local_908 + 20, 1, 0, 0, 0, 1, 1);
			Function_355();
			Global_63097 = 1;
			Function_214(&Local_908 + 4);
			Local_908 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_268(&Local_908 + 4) <= 50.0f)
			{
				LOG_ERROR("\FORT_01/FORT_01 either took too long to load or was missing assets (check TTY)! Skipping...");
				Local_908 = 1105;
			}
			if ((!HUD_IS_FADING() && STREAMING_IS_WORLD_LOADED()) && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Global_63097 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				Local_908 = 1004;
			}
			break;
		
		case 0x000003EC:
			Function_580();
			Function_308(&bLocal_813);
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Local_908 = 1104;
			}
			break;
		
		case 0x00000450:
			if ((!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_908.f_20);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_908.f_20);
				DESTROY_VOLUME(Local_908.f_20);
				Function_303(2, 0, 1, 0, 1, 1, 1, 1, 1, 1);
				Local_908 = 1000;
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
				Local_908 = 1104;
			}
			break;
		
		case 0x00000452:
			Local_908 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_583() //Position: 0x2497D / 149885
{
	Function_437(&bLocal_813, 1198, 2, 0);
	Function_437(&bLocal_813, 1182, 2, 0);
	Function_314(&bLocal_813, "close_wagon", 5, 0);
	Function_314(&bLocal_813, "custom/close_wagon", 8, 0);
	Function_314(&bLocal_813, "one_handed_wave", 5, 0);
	Function_314(&bLocal_813, "custom/one_handed_wave", 8, 0);
	Function_314(&bLocal_813, "p_gen_crateTnt01x", 0, 0);
	Function_314(&bLocal_813, "p_gen_gatlingGun01x", 0, 0);
	Function_314(&bLocal_813, "stand_rowdy", 5, 0);
	Function_314(&bLocal_813, "custom/stand_rowdy", 8, 0);
	Function_314(&bLocal_813, "one_handed_wave", 5, 0);
	Function_314(&bLocal_813, "custom/one_handed_wave", 8, 0);
	Function_314(&bLocal_813, "$/content/scripting/gringo/simplegringo/close_wagon", 1, 0);
	Function_314(&bLocal_813, "Fort01", 10, 0);
	Function_437(&bLocal_813, 397, 3, 0);
	Function_437(&bLocal_813, 398, 3, 0);
	Function_437(&bLocal_813, 399, 3, 0);
	Function_437(&bLocal_813, 400, 3, 0);
	Function_437(&bLocal_813, 401, 3, 0);
	Function_437(&bLocal_813, 402, 3, 0);
	Function_437(&bLocal_813, 403, 3, 0);
	Function_437(&bLocal_813, 404, 3, 0);
	Function_437(&bLocal_813, 405, 3, 0);
	Function_437(&bLocal_813, 546, 3, 0);
	Function_314(&bLocal_813, "stagecoach003_fragment01x", 0, 0);
	Function_314(&bLocal_813, "stagecoach003_fragment02x", 0, 0);
	Function_314(&bLocal_813, "stagecoach003_fragment06x", 0, 0);
	Function_314(&bLocal_813, "stagecoach003_fragment08x", 0, 0);
	Function_314(&bLocal_813, "stagecoach003_fragment09x", 0, 0);
	Function_314(&bLocal_813, "stagecoach003_fragment10x", 0, 0);
	return;
}

void Function_584(int iParam0, bool bParam1) //Position: 0x24C67 / 150631
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_590(0, 0);
	Global_27768 = 1;
	SET_TIME_ACCELERATION(Global_63398);
	if (!Function_273(iParam0))
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
	if (!Function_273(iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_201();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_233();
	Function_264();
	Function_222("");
	Function_589(0);
	Function_588();
	Function_195();
	Function_194();
	ENABLE_JOURNAL_REPLAY(0);
	Function_587();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(Global_34573);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(Global_34573, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	Function_359(0, 0x40400000);
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

void Function_585() //Position: 0x2508B / 151691
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

void Function_586(int iParam0) //Position: 0x250FF / 151807
{
	if (iParam0 >= 4294967295 && iParam0 < 32)
	{
		return;
	}
	Global_30804[iParam0] = 0;
	Global_30838 = 1;
	return;
}

void Function_587() //Position: 0x2511F / 151839
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

void Function_588() //Position: 0x2515C / 151900
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_589(int iParam0) //Position: 0x25170 / 151920
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

void Function_590(int iParam0, int iParam1) //Position: 0x251A5 / 151973
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

void Function_591(int iParam0) //Position: 0x25227 / 152103
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

void Function_592() //Position: 0x25275 / 152181
{
	return;
}

bool Function_593(int iParam0) //Position: 0x2527B / 152187
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_594() //Position: 0x25299 / 152217
{
	if (bLocal_915 != 2 && iLocal_916 != 15)
	{
		Function_464();
	}
	Function_596(bLocal_919, "Fort01_gunOnMerchant");
	Function_596(bLocal_1126, "Fort01_gunOnMarshal");
	Function_596((*&Local_4 + 552)[02], "Fort01_gunOnDeputy1");
	Function_596((*&Local_4 + 552)[12], "Fort01_gunOnDeputy2");
	Function_595(bLocal_919, "Fort01_assaultDickens_Fort");
	Function_595(bLocal_1126, "Fort01_assaultMarshal_combat");
	Function_595(bLocal_1125, "Fort01_assaultSeth_combat");
	Function_595((*&Local_4 + 552)[02], "Fort01_assaultDeputy1_combat");
	Function_595((*&Local_4 + 552)[12], "Fort01_assaultDeputy1_combat");
	return;
}

void Function_595(bool bParam0, bool bParam1) //Position: 0x253EA / 152554
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!Function_471(2, bLocal_1124))
		{
			if (!DECOR_CHECK_EXIST(bLocal_805, bParam1))
			{
				if (GET_LAST_ATTACK_TARGET(Global_34573) == bParam0)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_919, bParam1, bParam1, 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(bLocal_805, bParam1, GET_CURRENT_GAME_TIME());
					CLEAR_LAST_HIT(Global_34573);
					Function_467(2);
					bLocal_1124 = Function_493();
				}
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_805, bParam1)) < 20.0f)
		{
			DECOR_REMOVE(bLocal_805, bParam1);
			Function_466(2);
			bLocal_1124 = Function_493();
		}
	}
	return;
}

void Function_596(bool bParam0, bool bParam1) //Position: 0x25478 / 152696
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!Function_471(1, bLocal_1124))
		{
			if (GET_ACTOR_UNDER_RETICLE(Global_34573, 0) == bParam0)
			{
				if (!DECOR_CHECK_EXIST(bLocal_805, bParam1))
				{
					DECOR_SET_FLOAT(bLocal_805, bParam1, GET_CURRENT_GAME_TIME());
				}
				else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_805, bParam1)) < 0,5f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(bLocal_919, bParam1, bParam1, 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(bLocal_805, bParam1, -1.0f);
					Function_467(1);
					bLocal_1124 = Function_493();
				}
			}
		}
		else if (DECOR_CHECK_EXIST(bLocal_805, bParam1) && (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(bLocal_805, bParam1)) < 15.0f)
		{
			DECOR_REMOVE(bLocal_805, bParam1);
			Function_466(1);
			bLocal_1124 = Function_493();
		}
	}
	return;
}

bool Function_597(int iParam0) //Position: 0x2552C / 152876
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
			Function_598(iParam0, 1);
			return 1;
		}
	}
	Function_598(iParam0, 0);
	return 0;
}

void Function_598(int iParam0, bool bParam1) //Position: 0x255B3 / 153011
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

bool Function_599(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x255D7 / 153047
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
		Function_598(iParam2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID((*uParam1)[iVar03]))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP((*uParam1)[iVar03]))
			{
				Function_618(&bParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_617(uParam0[iVar1617], 2, 0))) || (iVar7 != 2 && Function_617(uParam0[iVar1617], 4, 0)))
											{
												bVar17 = Function_603(uParam0[iVar1617], uParam1[iVar03], bVar3, iVar7, uParam4);
												if (bVar17 >= 0)
												{
													if (Function_153(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														Function_598(iParam2, 0);
														return 0;
													}
													if (Function_153(bVar17, 2))
													{
														Function_602(&bVar17);
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_601(StackVal, iParam2, bVar17);
														EVENT_TRAP_CLEAR_TRAP_FLAG((*uParam1)[iVar03]);
														EVENT_TRAP_CLEAR_EVENTS((*uParam1)[iVar03]);
														return 1;
													}
													if (Function_153(bVar17, 4))
													{
														Function_602(&bVar17);
														strcpy(&Var18, "", 64);
														Function_600(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(uParam0[iVar1617] + 4));
														Function_222(&Var18);
														*iParam2 = 1;
														iParam2->f_4 = bVar3;
														iParam2->f_8 = iVar16;
														iParam2->f_12 = 0;
														Function_601(StackVal, iParam2, bVar17);
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
	Function_598(iParam2, 0);
	return 0;
}

void Function_600(char* cParam0, char* cParam1, struct<6> Param2) //Position: 0x25970 / 153968
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

void Function_601(var uParam0, int iParam1, bool bParam2) //Position: 0x25A5B / 154203
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

void Function_602(bool bParam0) //Position: 0x25AD1 / 154321
{
	int iVar0;
	
	iVar0 = *bParam0;
	Function_36(&iVar0, 1);
	Function_36(&iVar0, 2);
	Function_36(&iVar0, 4);
	*bParam0 = iVar0;
	return;
}

int Function_603(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x25AF3 / 154355
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
			return Function_614(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_607(iParam0, uParam1, bParam2, iParam3, bParam4);
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
					bVar2 = Function_614(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_604(iParam0, bVar2);
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
						bVar2 = Function_614(iParam0, uParam1, bVar1, bParam2, iParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_604(iParam0, bVar2);
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

var Function_604(int iParam0, bool bParam1) //Position: 0x25C3D / 154685
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
				bParam1 = Function_606(32);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_605(16);
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
				bParam1 = Function_606(512);
			}
			else
			{
				DECOR_SET_INT(*iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_605(256);
			}
		}
	}
	return bParam1;
}

bool Function_605(int iParam0) //Position: 0x25D70 / 154992
{
	return 2 | iParam0;
}

int Function_606(int iParam0) //Position: 0x25D7A / 155002
{
	return 4 | iParam0;
}

int Function_607(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x25D84 / 155012
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
				iParam3 = Function_613(iParam0, iParam1, bParam4);
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
			return Function_605(16);
		}
	}
	if (IS_ACTOR_HORSE(bParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(bParam2))
			{
				iParam3 = Function_608(iParam0, iParam1, 0, bParam4);
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
			return Function_605(16);
		}
	}
	return 0;
}

int Function_608(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x25E36 / 155190
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 9 != 110) != 49) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_612(iParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_611(iVar0, 3, 1, bParam3))
			{
				if (!Function_617(iParam0, 8, 1))
				{
					return Function_610(64, 1024, bParam2);
				}
			}
			return Function_609(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_611(iVar0, 2, 1, bParam3))
			{
				if (!Function_617(iParam0, 32, 1))
				{
					return Function_610(64, 1024, bParam2);
				}
			}
			return Function_609(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_611(iVar0, 1, 1, bParam3))
			{
				if (!Function_617(iParam0, 64, 1))
				{
					return Function_610(64, 1024, bParam2);
				}
			}
			return Function_609(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_611(iVar0, 3, 1, bParam3))
			{
				if (!Function_617(iParam0, 128, 1))
				{
					return Function_610(64, 1024, bParam2);
				}
			}
			return Function_609(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_611(iVar0, 1, 1, bParam3))
			{
				if (!Function_617(iParam0, 1024, 1))
				{
					return Function_610(64, 1024, bParam2);
				}
			}
			return Function_609(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_611(iVar0, 1, 1, bParam3))
			{
				if (!Function_617(iParam0, 1024, 1))
				{
					return Function_610(64, 1024, bParam2);
				}
			}
			return Function_609(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_609(int iParam0, int iParam1, bool bParam2) //Position: 0x25FF0 / 155632
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_610(int iParam0, int iParam1, bool bParam2) //Position: 0x26005 / 155653
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_611(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2601A / 155674
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_612(int iParam0) //Position: 0x26037 / 155703
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

int Function_613(var uParam0, int iParam1, bool bParam2) //Position: 0x260A6 / 155814
{
	int iVar0;
	
	if (StackVal == 47)
	{
		return 1;
	}
	iVar0 = Function_612(uParam0);
	switch (StackVal)
	{
		case 0x00000005:
			if (Function_611(iVar0, 3, 1, bParam2))
			{
				if (!Function_617(uParam0, 8, 1))
				{
					return Function_606(64);
				}
			}
			return Function_605(64);
			break;
		
		case 0x00000009:
			if (Function_611(iVar0, 3, 1, bParam2))
			{
				if (!Function_617(uParam0, 8, 1))
				{
					return Function_606(64);
				}
			}
			return Function_605(64);
			break;
		
		case 0x0000006E:
			if (Function_611(iVar0, 2, 1, bParam2))
			{
				if (!Function_617(uParam0, 16, 1))
				{
					return Function_606(64);
				}
			}
			return Function_605(64);
			break;
		
		case 0x0000005B:
			if (Function_611(iVar0, 2, 1, bParam2))
			{
				if (!Function_617(uParam0, 32, 1))
				{
					return Function_606(64);
				}
			}
			return Function_605(64);
			break;
		
		case 0x00000031:
			if (Function_611(iVar0, 1, 1, bParam2))
			{
				if (!Function_617(uParam0, 64, 1))
				{
					return Function_606(64);
				}
			}
			return Function_605(64);
			break;
		
		case 0x00000007:
			if (Function_611(iVar0, 3, 1, bParam2))
			{
				if (!Function_617(uParam0, 128, 1))
				{
					return Function_606(64);
				}
			}
			return Function_605(64);
			break;
		
		case 0x00000008:
			if (Function_611(iVar0, 2, 1, bParam2))
			{
				if (!Function_617(uParam0, 256, 1))
				{
					return Function_606(64);
				}
			}
			return Function_605(64);
			break;
		
		case 0x00000014:
			if (Function_611(iVar0, 1, 1, bParam2))
			{
				if (!Function_617(uParam0, 512, 1))
				{
					return Function_606(64);
				}
			}
			return Function_605(64);
			break;
		
		case 0x00000018:
			if (Function_611(iVar0, 1, 1, bParam2))
			{
				if (!Function_617(uParam0, 512, 1))
				{
					return Function_606(64);
				}
			}
			return Function_605(64);
			break;
		
		case 0x00000057:
			if (Function_611(iVar0, 1, 1, bParam2))
			{
				if (!Function_617(uParam0, 1024, 1))
				{
					return Function_606(64);
				}
			}
			return Function_605(64);
			break;
		
		case 0x00000058:
			if (Function_611(iVar0, 1, 1, bParam2))
			{
				if (!Function_617(uParam0, 1024, 1))
				{
					return Function_606(64);
				}
			}
			return Function_605(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_614(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x262C1 / 156353
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
						return Function_613(iParam0, uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_617(iParam0, 2, 1))
					{
						return Function_606(8);
					}
					return Function_605(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_617(iParam0, 4, 1))
					{
						return Function_606(16);
					}
					return Function_605(16);
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
							return Function_608(iParam0, uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_617(iParam0, 2, 1))
						{
							return Function_606(128);
						}
						return Function_605(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_617(iParam0, 4, 1))
						{
							return Function_606(256);
						}
						return Function_605(256);
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
						return Function_608(iParam0, uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_617(iParam0, 2, 1))
					{
						return Function_606(8);
					}
					return Function_605(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_617(iParam0, 4, 1))
					{
						return Function_606(16);
					}
					return Function_605(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_616(iParam0, uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(bParam2, false) != Global_34573)
				{
					if (!Function_617(iParam0, 2, 1))
					{
						return Function_606(8);
					}
					return Function_605(8);
				}
				if (!Function_617(iParam0, 4, 1))
				{
					return Function_606(16);
				}
				return Function_605(16);
			}
			if (iParam0->f_36)
			{
				if (IS_ACTOR_HORSE(bParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(bParam3) == bParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_608(iParam0, uParam1, 1, bParam5);
							if (Function_153(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_36(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_615(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_605(128);
							}
							if (!Function_617(iParam0, 2, 1))
							{
								return Function_606(8);
							}
							return Function_605(8);
						}
						if (iParam4 == 2)
						{
							if (Function_615(bParam2, 4294967295, 0, 4294967295))
							{
								return Function_605(256);
							}
							if (!Function_617(iParam0, 4, 1))
							{
								return Function_606(16);
							}
							return Function_605(16);
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

bool Function_615(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x26580 / 157056
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

int Function_616(int iParam0, var uParam1, bool bParam2) //Position: 0x26639 / 157241
{
	int iVar0;
	
	if (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 5 != 9) != 49) != 47) != 7) != 8) != 20) != 24)
	{
		return 1;
	}
	iVar0 = Function_612(iParam0);
	switch (StackVal)
	{
		case 0x0000006E:
			if (Function_611(iVar0, 2, 1, bParam2))
			{
				if (!Function_617(iParam0, 16, 1))
				{
					return Function_606(64);
				}
			}
			return Function_605(64);
			break;
		
		case 0x0000005B:
			if (Function_611(iVar0, 2, 1, bParam2))
			{
				if (!Function_617(iParam0, 32, 1))
				{
					return Function_606(64);
				}
			}
			return Function_605(64);
			break;
		
		case 0x00000057:
			if (Function_611(iVar0, 1, 1, bParam2))
			{
				if (!Function_617(iParam0, 1024, 1))
				{
					return Function_606(64);
				}
			}
			return Function_605(64);
			break;
		
		case 0x00000058:
			if (Function_611(iVar0, 1, 1, bParam2))
			{
				if (!Function_617(iParam0, 1024, 1))
				{
					return Function_606(64);
				}
			}
			return Function_605(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_617(int iParam0, bool bParam1, bool bParam2) //Position: 0x2674D / 157517
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

int Function_618(int iParam0) //Position: 0x26775 / 157557
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

void Function_619() //Position: 0x267A6 / 157606
{
	bool bVar0;
	bool bVar1;
	
	if (!DECOR_CHECK_EXIST(bLocal_805, "destroyedcrate"))
	{
		if (Function_353(Global_30679[1]))
		{
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(-2697,192f, 67,26273f, 3501,675f, 5.0f, "crateweaponsbreak", 1);
			if (IS_PHYSINST_VALID(bVar0))
			{
				bVar1 = GET_OBJECT_FROM_PHYSINST(bVar0);
				if (IS_OBJECT_VALID(bVar1))
				{
					DESTROY_OBJECT(bVar1);
					DECOR_SET_BOOL(bLocal_805, "destroyedcrate", true);
				}
			}
		}
	}
	return;
}

void Function_620(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, int iParam11) //Position: 0x26832 / 157746
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

