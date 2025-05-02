//Decompiled with MagicRDR v1.0
//Function Count : 50
//Statics Count : 73
//Natives Count : 58
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	struct<6> Local_7 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 3;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 2;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	struct<6> ScriptParam_0 = { 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	Local_7 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_40();
	while (Function_15())
	{
		WAIT(0);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x21 / 33
{
	Function_12();
	if (IS_ACTOR_VALID(&uLocal_31))
	{
		SET_INDICATOR_DRAW(&uLocal_31, 0);
		RELEASE_ACTOR(&uLocal_31);
	}
	if (IS_BLIP_VALID(&uLocal_33))
	{
		REMOVE_BLIP(&uLocal_33);
	}
	Function_11();
	RELEASE_LAYOUT_REF(&uLocal_5);
	if (Function_10(Local_7))
	{
		Function_2(Local_7);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x68 / 104
{
	Function_3(iParam0);
	return;
}

void Function_3(int iParam0) //Position: 0x73 / 115
{
	var uVar0;
	
	if (!Function_8(iParam0))
	{
		Function_6();
		return;
	}
	uVar0 = Function_4(iParam0);
	Global_21684[iParam07].f_4 = 0;
	return;
}

int Function_4(int iParam0) //Position: 0x97 / 151
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

bool Function_5(int iParam0) //Position: 0xB2 / 178
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0xC9 / 201
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
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
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_7(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_7(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x310 / 784
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_8(int iParam0) //Position: 0x33C / 828
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	if (!Function_9(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_9(int iParam0) //Position: 0x360 / 864
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_10(int iParam0) //Position: 0x375 / 885
{
	if (!Function_8(iParam0))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_11() //Position: 0x396 / 918
{
	return;
}

void Function_12() //Position: 0x39C / 924
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	CAMERA_RESET(0);
	SATCHEL_SET_ENABLED(1);
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_14(), 1);
	Function_13(1);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_99471);
	RESET_FACTIONS();
	HUD_ENABLE(1);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	return;
}

void Function_13(var uParam0) //Position: 0x3E9 / 1001
{
	Global_39922.f_88 = (Global_39922.f_88 || uParam0);
	return;
}

var Function_14() //Position: 0x3FC / 1020
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_15() //Position: 0x411 / 1041
{
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_39();
		return 0;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_39();
		return 0;
	}
	bLocal_2 = false;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			break;
		
		case 0x00000000:
			if (Function_36(Global_46866[2]))
			{
				iLocal_4 = Function_35(Local_7);
				if (iLocal_4 <= 1)
				{
					iLocal_4 = 1;
				}
				if (Function_34(0) > IntToFloat(iLocal_4))
				{
					Function_30("ArmWrestling_NotEnoughMoney", 4.0f, 0, 2, 1, 0);
					bLocal_3 = true;
				}
				else
				{
					iLocal_0 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_24(Global_46866[2], &iLocal_35 + 4, &iLocal_35 + 40, &iLocal_35 + 48))
			{
				Function_23(&iLocal_35 + 4);
				Function_22(Global_46866[2]);
				(&iLocal_35 + 64[02]) = Function_22(Global_46866[2]);
				Function_21(Global_46866[2]);
				*(&iLocal_35 + 64[12]) = Function_21(Global_46866[2]);
				Function_20(Global_46866[2]);
				*(&iLocal_35 + 52) = Function_20(Global_46866[2]);
				iLocal_35 = Local_7;
				Function_19(Local_7, 0);
				LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/ArmWrestling/ArmWrestling", &iLocal_35, 26, 0);
				iLocal_0 = 2;
			}
			else
			{
				bLocal_3 = true;
			}
			break;
		
		case 0x00000002:
			if (!Function_10(Local_7))
			{
				iLocal_0 = 101;
			}
			break;
		
		case 0x00000065:
			if (Function_18(Local_7, 0))
			{
				bLocal_2 = true;
			}
			else if (Function_17(Local_7))
			{
				bLocal_3 = true;
			}
			else
			{
				bLocal_3 = true;
			}
			break;
		
		default:
			return 0;
			break;
	}
	if (bLocal_2)
	{
		Function_16();
		return 0;
	}
	if (bLocal_3)
	{
		Function_39();
		return 0;
	}
	return 1;
}

void Function_16() //Position: 0x5A2 / 1442
{
	Function_1();
	return;
}

bool Function_17(int iParam0) //Position: 0x5AB / 1451
{
	if (!Function_8(iParam0))
	{
		return 0;
	}
	if (StackVal == 5)
	{
		return 1;
	}
	return 0;
}

bool Function_18(int iParam0, bool bParam1) //Position: 0x5CC / 1484
{
	if (!Function_8(iParam0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

void Function_19(int iParam0, int iParam1) //Position: 0x603 / 1539
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

struct<8> Function_20(int iParam0) //Position: 0x61E / 1566
{
	if (iParam0 == Global_46866[2])
	{
		return StackVal, Vector(-1471,355f, 17,35498f, 3948,152f);
	}
	if (iParam0 == Global_46838[0])
	{
		return StackVal, Vector(-3143,715f, 43,97864f, 3720,561f);
	}
	if (iParam0 == Global_46894[0])
	{
		return StackVal, Vector(-466,3501f, 21,78646f, 3882,198f);
	}
	if (iParam0 == Global_46926[2])
	{
		return StackVal, Vector(-262,8833f, 85,92777f, 2119,187f);
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_21(int iParam0) //Position: 0x6CE / 1742
{
	if (iParam0 == Global_46866[2])
	{
		return StackVal, Vector(-1471,656f, 16,56962f, 3948,088f);
	}
	if (iParam0 == Global_46838[0])
	{
		return StackVal, Vector(-3143,743f, 43,17878f, 3720,288f);
	}
	if (iParam0 == Global_46894[0])
	{
		return StackVal, Vector(-466,16f, 20,97986f, 3881,796f);
	}
	if (iParam0 == Global_46926[2])
	{
		return StackVal, Vector(-262,9332f, 85,11941f, 2118,893f);
	}
	LOG_ERROR("Returning invalid arm wrestling player seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_22(int iParam0) //Position: 0x782 / 1922
{
	if (iParam0 == Global_46866[2])
	{
		return StackVal, Vector(-1471,104f, 16,52992f, 3948,271f);
	}
	if (iParam0 == Global_46838[0])
	{
		return StackVal, Vector(-3143,721f, 43,17878f, 3720,842f);
	}
	if (iParam0 == Global_46894[0])
	{
		return StackVal, Vector(-466,5623f, 20,97986f, 3882,657f);
	}
	if (iParam0 == Global_46926[2])
	{
		return StackVal, Vector(-262,932f, 85,11941f, 2119,438f);
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_23(int[] iParam0) //Position: 0x832 / 2098
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		uVar1 = &iParam0[iVar0];
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!AI_IGNORE_ACTOR(&uVar1))
			{
				LOG_ERROR("AI_IGNORE_ACTOR failed");
			}
			SET_ACTOR_FACTION(&uVar1, 1);
		}
		iVar0++;
	}
	return;
}

bool Function_24(var uParam0, var[] uParam1, var uParam2, var uParam3) //Position: 0x88E / 2190
{
	var uVar0;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar7;
	
	Function_22(uParam0);
	uVar0 = Function_22(uParam0);
	uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_arm_wrestling", &uVar0, 1.0f, 0);
	uParam1[0] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar2, "UseCase1"));
	if (!IS_ACTOR_VALID(&(uParam1[0])))
	{
		return 0;
	}
	iVar3 = 1;
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		Function_29(uParam0, iVar4);
		uVar0 = Function_29(uParam0, iVar4);
		uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/arm_wrestling_spectate", &uVar0, 0,1f, 0);
		if (!IS_GRINGO_VALID(&uVar2))
		{
			uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate", &uVar0, 0,1f, 0);
		}
		if (!IS_GRINGO_VALID(&uVar2))
		{
			uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_B", &uVar0, 0,1f, 0);
		}
		if (!IS_GRINGO_VALID(&uVar2))
		{
			uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_C", &uVar0, 0,1f, 0);
		}
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar2, "UseCase1"))))
		{
			uParam1[iVar3] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar2, "UseCase1"));
			iVar3++;
		}
		iVar4++;
	}
	uParam3 = iVar3;
	Function_21(uParam0);
	uVar5 = Function_21(uParam0);
	uVar7 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_arm_wrestling", &uVar5, 1.0f, 0);
	uParam2 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar7, "UseCase1"));
	if (IS_ACTOR_VALID(&uParam2))
	{
		return 0;
	}
	uParam2 = GET_PLAYER_ACTOR(0);
	if (Function_25(&uParam2, 1, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_25(int iParam0, bool bParam1, bool bParam2) //Position: 0xB70 / 2928
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_28(&iParam0))
	{
		return 1;
	}
	if (Function_27(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_26())
	{
		return 1;
	}
	return 0;
}

bool Function_26() //Position: 0xC34 / 3124
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_27(int iParam0) //Position: 0xC4B / 3147
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_28(int iParam0) //Position: 0xC57 / 3159
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

struct<8> Function_29(int iParam0, bool bParam1) //Position: 0xC66 / 3174
{
	if (iParam0 == Global_46866[2])
	{
		if (bParam1 == 0)
		{
			return StackVal, Vector(-1470,917f, 16,54662f, 3950,254f);
		}
		if (bParam1 == 1)
		{
			return StackVal, Vector(-1473,098f, 16,54662f, 3949,357f);
		}
	}
	if (iParam0 == Global_46838[0])
	{
		if (bParam1 == 0)
		{
			return StackVal, Vector(-3145,761f, 43,17878f, 3722,624f);
		}
		if (bParam1 == 1)
		{
			return StackVal, Vector(-3145,761f, 43,17878f, 3718,675f);
		}
	}
	if (iParam0 == Global_46894[0])
	{
		if (bParam1 == 0)
		{
			return StackVal, Vector(-467,4124f, 20,97995f, 3884,092f);
		}
		if (bParam1 == 1)
		{
			return StackVal, Vector(-465,9765f, 20,97995f, 3884,092f);
		}
	}
	if (iParam0 == Global_46926[2])
	{
		if (bParam1 == 0)
		{
			return StackVal, Vector(-264,6337f, 85,11941f, 2120,304f);
		}
		if (bParam1 == 1)
		{
			return StackVal, Vector(-264,6337f, 85,11941f, 2118,317f);
		}
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xD96 / 3478
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_31(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

struct<16> Function_31(int iParam0) //Position: 0xE1B / 3611
{
	char* cVar0[16];
	
	if (!Function_32())
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

bool Function_32() //Position: 0xE5A / 3674
{
	if (Function_33(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_33(var uParam0, int iParam1) //Position: 0xE75 / 3701
{
	return (uParam0 && iParam1) == 0;
}

float Function_34(int iParam0) //Position: 0xE82 / 3714
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_35(int iParam0) //Position: 0xEBB / 3771
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

bool Function_36(int iParam0) //Position: 0xED5 / 3797
{
	if (!Function_38(iParam0))
	{
		return 1;
	}
	return Function_37(&(Global_43791[iParam0]), 4);
}

int Function_37(var uParam0, int iParam1) //Position: 0xEF1 / 3825
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_38(int iParam0) //Position: 0xF0E / 3854
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_39() //Position: 0xF24 / 3876
{
	Function_1();
	return;
}

void Function_40() //Position: 0xF2D / 3885
{
	uLocal_5 = CREATE_LAYOUT(Function_49());
	Function_47(0, 1);
	Function_46();
	Function_41(&uLocal_19);
	Function_41(&iLocal_27);
	Function_41(&iLocal_23);
	iLocal_0 = 0;
	iLocal_1 = 0;
	if (!iLocal_1 != 0)
	{
		LOG_ERROR("m_goal is messed up");
	}
	return;
}

void Function_41(int iParam0) //Position: 0xF7A / 3962
{
	if (!Function_45(&iParam0))
	{
		Function_42(&iParam0, 0.0f);
	}
	return;
}

void Function_42(vector3 vParam0) //Position: 0xF91 / 3985
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_44(&vParam0, 1);
	Function_43(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_43(var uParam0, int iParam1) //Position: 0xFB6 / 4022
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_44(var uParam0, int iParam1) //Position: 0xFCC / 4044
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_45(var uParam0) //Position: 0xFDD / 4061
{
	return Function_33(uParam0, 1);
}

void Function_46() //Position: 0xFEB / 4075
{
	return;
}

void Function_47(bool bParam0, bool bParam1) //Position: 0xFF1 / 4081
{
	var uVar0;
	
	SATCHEL_SET_ENABLED(0);
	uVar0 = Function_14();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(&uVar0);
	Function_48(1);
	SET_ACTOR_POSTURE(&uVar0, 0);
	FIRE_STOP_ALL_FIRES();
	if (&bParam0)
	{
		ACTOR_START_FORCE_HOLSTER(&uVar0, 0, 0);
	}
	else
	{
		ACTOR_END_FORCE_HOLSTER(&uVar0);
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
		CANCEL_TIME_WARP(0);
	}
	SET_ACTOR_UPDATE_PRIORITY(&uVar0, 0);
	if (&bParam1)
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	return;
}

void Function_48(var uParam0) //Position: 0x1050 / 4176
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_49() //Position: 0x106D / 4205
{
	var uVar0;
	
	return &uVar0;
}

