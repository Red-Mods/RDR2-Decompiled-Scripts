//Decompiled with MagicRDR v1.0
//Function Count : 37
//Statics Count : 107
//Natives Count : 70
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
	vector3 vLocal_92 = { 0.0f, 0.0f, 0.0f };
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	bool bLocal_98 = false;
	int iLocal_99 = 0;
	struct<7> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	
	iLocal_99 = 0;
	Function_36();
	vVar0 = { StackVal, StackVal, Function_36() };
	uVar3 = Function_35();
	bLocal_56 = CREATE_LAYOUT(Function_34());
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_0 = iLocal_0;
	if (!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)))
	{
		GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(Global_34573), 0.0f, 0.0f, -2.0f, &vLocal_92);
		FIND_GROUND_INTERSECTION(&vLocal_92, 50.0f, &vLocal_92, &uLocal_95);
		memcpy(&uVar4, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("stageHrs"), 4);
		bLocal_98 = CREATE_ACTOR_IN_LAYOUT(bLocal_56, &uVar4, 976, vLocal_92, 0.0f, 148.253f, 0.0f);
		WAIT(1000);
		if (IS_ACTOR_VALID(bLocal_98))
		{
			ACTOR_MOUNT_ACTOR(Global_34573, bLocal_98);
		}
	}
	Function_31(StackVal, StackVal, Global_34573, vVar0, uVar3, 1, 1, 1);
	Function_30();
	while (Function_6())
	{
		WAIT(100);
	}
	if (HUD_IS_SHOWING_BIG_TEXT())
	{
		HUD_CLEAR_BIG_TEXT();
	}
	Function_2("Stopped StageCoach Attack. If it didn't run, try again", 6.0f, 0, 2, 1, 0);
	Function_1();
	return;
}

void Function_1() //Position: 0x108 / 264
{
	if (IS_ACTOR_VALID(bLocal_98))
	{
		RELEASE_ACTOR(bLocal_98);
	}
	if (IS_LAYOUTREF_VALID(bLocal_56))
	{
		RELEASE_LAYOUT_OBJECTS(bLocal_56);
		DESTROY_LAYOUT(bLocal_56);
	}
	if (HUD_IS_FADED())
	{
		HUD_FADE_IN(1.0f, 1065353216);
	}
	if (IS_SCRIPT_VALID(bLocal_55))
	{
		TERMINATE_SCRIPT(bLocal_55);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x14C / 332
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

struct<16> Function_3(int iParam0) //Position: 0x1C3 / 451
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

bool Function_4() //Position: 0x202 / 514
{
	if (Function_5(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_5(var uParam0, bool bParam1) //Position: 0x21D / 541
{
	return (uParam0 && bParam1) == 0;
}

bool Function_6() //Position: 0x22A / 554
{
	int iVar0;
	
	if (IS_PLAYER_TELEPORTING())
	{
		return 1;
	}
	if (iLocal_99 == 0)
	{
		Function_29(&uLocal_63);
		iLocal_99 = 1;
	}
	if (!Function_25(&uLocal_63, 4.0f))
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
			if (HUD_IS_SHOWING_BIG_TEXT())
			{
				HUD_CLEAR_BIG_TEXT();
			}
			PRINT_BIG("Trying to launch StageCoach Attack. Move around and prepare for a teleport.", 6.0f, 0, 2, 0);
			Function_29(&uLocal_57);
			Function_22(&uLocal_60, 9.0f);
			Function_21(&Local_66, 2, 6.0f, 64, 720);
			Function_20(&Local_66, 10.0f);
			Function_19(&Local_4 + 64, 1.2f, 6.0f);
			Function_18(&Local_4 + 64, -4.0f, 4);
			Function_17(StackVal, StackVal, &Local_81, 0, Global_34574, 0.0f, 0.1f, 500.0f, 3.0f, 5.0f, 0);
			iLocal_2 = 1;
			break;
		
		case 0x00000001:
			iVar0 = 0;
			vLocal_92 = { 0.0f, 0.0f, 0.0f };
			while (StackVal && Function_16(StackVal, iVar0 > 20, vLocal_92))
			{
				Function_8(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_81, Local_66);
				vLocal_92 = { StackVal, StackVal, Function_8(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_81, Local_66) };
				if (Function_16(StackVal, StackVal, vLocal_92))
				{
					if (Function_25(&uLocal_60, 8.0f))
					{
						Function_29(&uLocal_60);
						Function_2("Trying to run StageCoach Attack", 10.0f, 0, 2, 1, 0);
					}
					if (Function_25(&uLocal_57, 20.0f))
					{
						PRINT_BIG("Giving up on StageCoach Attack. Go somewhere else and launch", 6.0f, 0, 2, 0);
						Function_22(&uLocal_60, 200.0f);
						Function_1();
						return 0;
					}
				}
				iVar0++;
			}
			if (StackVal && Function_7(StackVal, !Function_16(StackVal, StackVal, vLocal_92), vLocal_92))
			{
				Local_4.f_44 = Global_29005;
				Local_4.f_36 = 1;
				*(&Local_4 + 8) = { StackVal, StackVal, vLocal_92 };
				Local_4.f_52 = 50.0f;
				if (HUD_IS_SHOWING_BIG_TEXT())
				{
					HUD_CLEAR_BIG_TEXT();
				}
				PRINT_BIG("Wait for it...loading teleportation location.", 6.0f, 0, 2, 0);
				vLocal_92.x = (vLocal_92.x - 75.0f);
				Function_31(StackVal, StackVal, Global_34573, vLocal_92, 0.0f, 1, 1, 1);
				WAIT(500);
				if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
				{
					SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(GET_MOUNT(Global_34573)), 50.0f, false, 1092616192);
				}
				else
				{
					SNAP_OBJECT_TO_GROUND(GET_OBJECT_FROM_ACTOR(Global_34573), 50.0f, false, 1092616192);
				}
				bLocal_55 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/Roaming/event_proc_matkdef", &Local_4, 51, 0);
				iLocal_2 = 101;
			}
			break;
		
		case 0x00000065:
			if (HUD_IS_SHOWING_BIG_TEXT())
			{
				HUD_CLEAR_BIG_TEXT();
			}
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

int Function_7(vector3 vParam0) //Position: 0x56B / 1387
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

vector3 Function_8(struct<37> Param0) //Position: 0x5E8 / 1512
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
	else if (!Function_16(StackVal, StackVal, *(&Param0 + 4)))
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
	Function_15(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_13();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_12(Param0.f_20);
	Function_11(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_10(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
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
	Function_9();
	return StackVal, StackVal, Function_9();
}

vector3 Function_9() //Position: 0x71A / 1818
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_10(struct<33> Param0) //Position: 0x723 / 1827
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

void Function_11(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x84F / 2127
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

void Function_12(bool bParam0) //Position: 0x8A0 / 2208
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

void Function_13() //Position: 0x953 / 2387
{
	float fVar0;
	bool bVar1;
	
	Function_14(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x967 / 2407
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

void Function_15(bool bParam0) //Position: 0x9F0 / 2544
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

bool Function_16(vector3 vParam0) //Position: 0xA34 / 2612
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_17(int iParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0xA4C / 2636
{
	iParam0->f_20 = uParam1;
	*(iParam0 + 4) = { StackVal, StackVal, vParam2 };
	iParam0->f_16 = uParam5;
	iParam0->f_24 = uParam6;
	iParam0->f_28 = uParam7;
	iParam0->f_32 = uParam10;
	iParam0->f_36 = uParam8;
	iParam0->f_40 = uParam9;
}

void Function_18(int iParam0, var uParam1, int iParam2) //Position: 0xA88 / 2696
{
	(iParam0 + 60)->f_24 = uParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

void Function_19(int iParam0, var uParam1, int iParam2) //Position: 0xA9E / 2718
{
	(iParam0 + 60)->f_36 = uParam1;
	(iParam0 + 60)->f_40 = iParam2;
	return;
}

void Function_20(var uParam0, int iParam1) //Position: 0xAB4 / 2740
{
	uParam0->f_20 = iParam1;
	return;
}

void Function_21(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xAC0 / 2752
{
	*uParam0 = uParam1;
	uParam0->f_4 = uParam2;
	uParam0->f_8 = uParam3;
	uParam0->f_16 = uParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

void Function_22(var uParam0, float fParam1) //Position: 0xAE9 / 2793
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_24(uParam0, 1);
	Function_23(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0xB0A / 2826
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_24(var uParam0, int iParam1) //Position: 0xB1D / 2845
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_25(var uParam0, float fParam1) //Position: 0xB2C / 2860
{
	if (Function_28(uParam0))
	{
		if (Function_26(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_26(int iParam0) //Position: 0xB48 / 2888
{
	if (Function_28(iParam0))
	{
		if (Function_27(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_27(int iParam0) //Position: 0xC10 / 3088
{
	return Function_5(*iParam0, 2);
}

bool Function_28(int iParam0) //Position: 0xC1D / 3101
{
	return Function_5(*iParam0, 1);
}

void Function_29(var uParam0) //Position: 0xC2A / 3114
{
	Function_22(uParam0, 0.0f);
	return;
}

void Function_30() //Position: 0xC36 / 3126
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	if (!iLocal_3 != 0)
	{
	}
	while (!STREAMING_IS_WORLD_LOADED_PRIORITY(4) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!HUD_IS_FADING() || HUD_IS_FADED())
	{
		HUD_FADE_IN(1.0f, 1065353216);
	}
	iLocal_2 = 0;
	return;
}

void Function_31(bool bParam0, vector3 vParam1, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xC76 / 3190
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

struct<32> Function_32(bool bParam0) //Position: 0xD2F / 3375
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_33("0", &cVar8, ""), 4);
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

struct<32> Function_33(char* cParam0, char* cParam1, char* cParam2) //Position: 0xD99 / 3481
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_34() //Position: 0xDB8 / 3512
{
	var uVar0;
	
	return uVar0;
}

var Function_35() //Position: 0xDC0 / 3520
{
	float fVar0;
	
	fVar0 = 0.0f;
	if (Global_29005 == Global_30628[0])
	{
		fVar0 = 347.707f;
	}
	else if (Global_29005 == Global_30628[1])
	{
		fVar0 = 130.382f;
	}
	else if (Global_29005 == Global_30628[3])
	{
		fVar0 = 115.177f;
	}
	else if (Global_29005 == Global_30628[2])
	{
		fVar0 = 53.2f;
	}
	else if (Global_29005 == Global_30633[0])
	{
		fVar0 = 22.12f;
	}
	else if (Global_29005 == Global_30633[2])
	{
		fVar0 = 299.123f;
	}
	else if (Global_29005 == Global_30633[1])
	{
		fVar0 = 133.891f;
	}
	else if (Global_29005 == Global_30637[1])
	{
		fVar0 = 115.729f;
	}
	else if (Global_29005 == Global_30637[0])
	{
		fVar0 = 31.963f;
	}
	return fVar0;
}

vector3 Function_36() //Position: 0xE8E / 3726
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (Global_29005 == Global_30628[0])
	{
		vVar0 = { -2413.813f, 18.528f, 3026.665f };
	}
	else if (Global_29005 == Global_30628[1])
	{
		vVar0 = { -3960.096f, 8.032f, 3305.501f };
	}
	else if (Global_29005 == Global_30628[3])
	{
		vVar0 = { -3207.075f, 43.169f, 3619.989f };
	}
	else if (Global_29005 == Global_30628[2])
	{
		vVar0 = { -1018.062f, 101.326f, 2848.392f };
	}
	else if (Global_29005 == Global_30633[0])
	{
		vVar0 = { -4286.379f, 20.189f, 4659.143f };
	}
	else if (Global_29005 == Global_30633[2])
	{
		vVar0 = { -2138.985f, 8.3f, 4459.45f };
	}
	else if (Global_29005 == Global_30633[1])
	{
		vVar0 = { 177.652f, 33.002f, 3367.475f };
	}
	else if (Global_29005 == Global_30637[1])
	{
		vVar0 = { -220.645f, 130.21f, 1716.09f };
	}
	else if (Global_29005 == Global_30637[0])
	{
		vVar0 = { 395.379f, 108.513f, 1661.926f };
	}
	else
	{
		vVar0 = { -2369.597f, 15.059f, 2898.9f };
	}
	return StackVal, StackVal, vVar0;
}

