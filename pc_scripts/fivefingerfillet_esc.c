//Decompiled with MagicRDR v1.0
//Function Count : 50
//Statics Count : 105
//Natives Count : 49
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	struct<6> Local_6 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
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
	var uLocal_36 = 4;
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
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 4;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
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
	var uLocal_81 = 0;
	var uLocal_82 = 2;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
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
	Local_6 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_39();
	while (Function_21())
	{
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x21 / 33
{
	Function_17(&(Global_46850[0]));
	Function_14();
	if (IS_ACTOR_VALID(&uLocal_31))
	{
		SET_INDICATOR_DRAW(&uLocal_31, 0);
		RELEASE_ACTOR(&uLocal_31);
	}
	Function_12(1);
	Function_12(2);
	if (IS_BLIP_VALID(&uLocal_33))
	{
		REMOVE_BLIP(&uLocal_33);
	}
	Function_11();
	RELEASE_LAYOUT_REF(&uLocal_4);
	if (Function_10(Local_6))
	{
		Function_2(Local_6);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x79 / 121
{
	Function_3(iParam0);
	return;
}

void Function_3(int iParam0) //Position: 0x84 / 132
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

int Function_4(int iParam0) //Position: 0xA8 / 168
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

bool Function_5(int iParam0) //Position: 0xC3 / 195
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0xDA / 218
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

void Function_7(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x321 / 801
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_8(int iParam0) //Position: 0x34D / 845
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

bool Function_9(int iParam0) //Position: 0x371 / 881
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_10(int iParam0) //Position: 0x386 / 902
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

void Function_11() //Position: 0x3A7 / 935
{
	return;
}

void Function_12(int iParam0) //Position: 0x3AD / 941
{
	if (Function_13(iParam0, 1) && !Function_13(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_13(var uParam0, bool bParam1) //Position: 0x3DA / 986
{
	return (uParam0 && bParam1) == 0;
}

void Function_14() //Position: 0x3E7 / 999
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	CAMERA_RESET(0);
	SATCHEL_SET_ENABLED(1);
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_16(), true);
	Function_15(1);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_TIME_ACCELERATION(Global_99471);
	RESET_FACTIONS();
	HUD_ENABLE(1);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	return;
}

void Function_15(var uParam0) //Position: 0x434 / 1076
{
	Global_39922.f_88 = (Global_39922.f_88 || uParam0);
	return;
}

var Function_16() //Position: 0x447 / 1095
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_17(int iParam0) //Position: 0x45C / 1116
{
	var uVar0;
	var uVar2;
	int iVar3;
	
	Function_20(iParam0);
	uVar0 = Function_20(iParam0);
	uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &uVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(&uVar2))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_GRINGO(&uVar2), "ForceAllowRain");
	}
	Function_19(iParam0);
	uVar0 = Function_19(iParam0);
	uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &uVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(&uVar2))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_GRINGO(&uVar2), "ForceAllowRain");
	}
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		Function_18(iParam0, iVar3);
		uVar0 = Function_18(iParam0, iVar3);
		uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate", &uVar0, 0,25f, 0);
		if (!IS_GRINGO_VALID(&uVar2))
		{
			uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_B", &uVar0, 0,25f, 0);
		}
		if (!IS_GRINGO_VALID(&uVar2))
		{
			uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_C", &uVar0, 0,25f, 0);
		}
		if (IS_GRINGO_VALID(&uVar2))
		{
			DECOR_REMOVE(GET_OBJECT_FROM_GRINGO(&uVar2), "ForceAllowRain");
		}
		iVar3++;
	}
	return;
}

struct<8> Function_18(int iParam0, int iParam1) //Position: 0x6A4 / 1700
{
	if (iParam0 == Global_46760[0])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(-2192,956f, 16,5768f, 2591,536f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(-2193,327f, 16,5768f, 2593,874f);
		}
		if (iParam1 == 2)
		{
			return StackVal, Vector(-2192,68f, 16,5768f, 2592,817f);
		}
	}
	if (iParam0 == Global_46816[1])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(163,185f, 73,837f, 2293,025f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(163,4155f, 73,837f, 2293,8f);
		}
		if (iParam1 == 2)
		{
			return StackVal, Vector(163,604f, 73,837f, 2294,628f);
		}
	}
	if (iParam0 == Global_46850[0])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(-4276,273f, 18,09486f, 4452,201f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(-4275,895f, 18,09486f, 4451,213f);
		}
		if (iParam1 == 2)
		{
			return StackVal, Vector(-4274,775f, 18,09486f, 4452,317f);
		}
	}
	if (iParam0 == Global_46894[3])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(356,5144f, 76,29012f, 3446,935f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(356,5144f, 76,29012f, 3448,271f);
		}
		if (iParam1 == 2)
		{
			return StackVal, Vector(357,207f, 76,29012f, 3448,271f);
		}
	}
	if (iParam0 == Global_46926[1])
	{
		if (iParam1 == 0)
		{
			return StackVal, Vector(-463,5462f, 152,3519f, 1598,171f);
		}
		if (iParam1 == 1)
		{
			return StackVal, Vector(-464,753f, 152,3517f, 1598,612f);
		}
		if (iParam1 == 2)
		{
			return StackVal, Vector(-462,8687f, 152,352f, 1597,15f);
		}
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_19(int iParam0) //Position: 0x89A / 2202
{
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2194,299f, 16,57026f, 2593,136f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(161,0631f, 73,82803f, 2294,619f);
	}
	if (iParam0 == Global_46850[0])
	{
		return StackVal, Vector(-4274,766f, 18,07059f, 4453,27f);
	}
	if (iParam0 == Global_46894[3])
	{
		return StackVal, Vector(354,6982f, 76,28821f, 3447,546f);
	}
	if (iParam0 == Global_46926[1])
	{
		return StackVal, Vector(-465,0943f, 152,3517f, 1596,716f);
	}
	LOG_ERROR("Returning invalid five finger fillet player seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_20(int iParam0) //Position: 0x972 / 2418
{
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2194,388f, 16,57687f, 2592,54f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(161,1002f, 73,83751f, 2294,133f);
	}
	if (iParam0 == Global_46850[0])
	{
		return StackVal, Vector(-4274,772f, 18,07059f, 4453,844f);
	}
	if (iParam0 == Global_46894[3])
	{
		return StackVal, Vector(354,5946f, 76,28807f, 3448,024f);
	}
	if (iParam0 == Global_46926[1])
	{
		return StackVal, Vector(-464,3469f, 152,3559f, 1596,59f);
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_21() //Position: 0xA46 / 2630
{
	if (IS_ACTOR_DEAD(GET_PLAYER_ACTOR(0)))
	{
		Function_38();
		return 0;
	}
	if (IS_EXITFLAG_SET())
	{
		Function_38();
		return 0;
	}
	bLocal_2 = false;
	bLocal_3 = false;
	switch (iLocal_0)
	{
		case 0x00000063:
			break;
		
		case 0x00000000:
			if (Function_35(Global_46850[0]))
			{
				iLocal_18 = Function_34(Local_6);
				if (iLocal_18 <= 1)
				{
					iLocal_18 = 1;
				}
				if (Function_32() <= iLocal_18)
				{
					Function_29("FiveFingerFillet_NotEnoughMoney", 4.0f, 0, 2, 1, 0);
					bLocal_3 = true;
				}
				else
				{
					iLocal_0 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_28(Global_46850[0], &iLocal_35 + 4, &iLocal_35 + 48, &iLocal_35 + 56))
			{
				Function_27(&(Global_46850[0]));
				Function_26(&iLocal_35 + 4);
				Function_20(Global_46850[0]);
				(&iLocal_35 + 188[02]) = Function_20(Global_46850[0]);
				Function_19(Global_46850[0]);
				*(&iLocal_35 + 188[12]) = Function_19(Global_46850[0]);
				iLocal_35 = Local_6;
				Function_25(Local_6, 0);
				LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/FiveFingerFillet/FiveFingerFillet", &iLocal_35, 58, 0);
				iLocal_0 = 2;
			}
			else
			{
				bLocal_3 = true;
			}
			break;
		
		case 0x00000002:
			if (!Function_10(Local_6))
			{
				iLocal_0 = 101;
			}
			break;
		
		case 0x00000065:
			if (Function_24(Local_6, 0))
			{
				bLocal_2 = true;
			}
			else if (Function_23(Local_6))
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
		Function_22();
		return 0;
	}
	if (bLocal_3)
	{
		Function_38();
		return 0;
	}
	return 1;
}

void Function_22() //Position: 0xBDB / 3035
{
	Function_1();
	return;
}

bool Function_23(int iParam0) //Position: 0xBE4 / 3044
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

bool Function_24(int iParam0, bool bParam1) //Position: 0xC05 / 3077
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

void Function_25(int iParam0, int iParam1) //Position: 0xC3C / 3132
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

void Function_26(int[] iParam0) //Position: 0xC57 / 3159
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

void Function_27(int iParam0) //Position: 0xCB3 / 3251
{
	var uVar0;
	var uVar2;
	int iVar3;
	
	Function_20(iParam0);
	uVar0 = Function_20(iParam0);
	uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &uVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(&uVar2))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar2), "ForceAllowRain", 1);
	}
	Function_19(iParam0);
	uVar0 = Function_19(iParam0);
	uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &uVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(&uVar2))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar2), "ForceAllowRain", 1);
	}
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		Function_18(iParam0, iVar3);
		uVar0 = Function_18(iParam0, iVar3);
		uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate", &uVar0, 0,25f, 0);
		if (!IS_GRINGO_VALID(&uVar2))
		{
			uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_B", &uVar0, 0,25f, 0);
		}
		if (!IS_GRINGO_VALID(&uVar2))
		{
			uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_C", &uVar0, 0,25f, 0);
		}
		if (IS_GRINGO_VALID(&uVar2))
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar2), "ForceAllowRain", 1);
		}
		iVar3++;
	}
	return;
}

bool Function_28(int iParam0, bool[] bParam1, bool bParam2, var uParam3) //Position: 0xEFE / 3838
{
	var uVar0;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar7;
	
	Function_20(iParam0);
	uVar0 = Function_20(iParam0);
	uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &uVar0, 1.0f, 0);
	if (!IS_GRINGO_VALID(&uVar2))
	{
		return 0;
	}
	bParam1[0] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar2, "UseCase1"));
	if (!IS_ACTOR_VALID(&(bParam1[0])))
	{
		return 0;
	}
	if (IS_ACTION_NODE_PLAYING_PARTIAL(&(bParam1[0]), "fivefingerfillet/Fake"))
	{
		if (IS_ACTION_NODE_PLAYING_PARTIAL(&(bParam1[0]), "fivefingerfillet/Fake/sit") || IS_ACTION_NODE_PLAYING_PARTIAL(&(bParam1[0]), "fivefingerfillet/Fake/leave_game"))
		{
			return 0;
		}
	}
	return 0;
	iVar3 = 1;
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		Function_18(iParam0, iVar4);
		uVar0 = Function_18(iParam0, iVar4);
		uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate", &uVar0, 0,1f, 0);
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
			bParam1[iVar3] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar2, "UseCase1"));
			iVar3++;
		}
		iVar4++;
	}
	uParam3 = iVar3;
	Function_19(iParam0);
	uVar5 = Function_19(iParam0);
	uVar7 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &uVar5, 1.0f, 0);
	if (!IS_GRINGO_VALID(&uVar7))
	{
		return 0;
	}
	bParam2 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar7, "UseCase1"));
	if (IS_ACTOR_VALID(&bParam2))
	{
		LOG_ERROR("Drinking Player Seat is NOT empty");
		return 0;
	}
	bParam2 = GET_PLAYER_ACTOR(0);
	return 1;
}

void Function_29(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1244 / 4676
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_30(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

struct<16> Function_30(int iParam0) //Position: 0x12C9 / 4809
{
	char* cVar0[16];
	
	if (!Function_31())
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

bool Function_31() //Position: 0x1308 / 4872
{
	if (Function_13(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_32() //Position: 0x1323 / 4899
{
	return Function_33(0);
}

int Function_33(int iParam0) //Position: 0x132D / 4909
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

var Function_34(int iParam0) //Position: 0x136E / 4974
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

bool Function_35(int iParam0) //Position: 0x1388 / 5000
{
	if (!Function_37(iParam0))
	{
		return 1;
	}
	return Function_36(&(Global_43791[iParam0]), 4);
}

int Function_36(var uParam0, int iParam1) //Position: 0x13A4 / 5028
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_37(int iParam0) //Position: 0x13C1 / 5057
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_38() //Position: 0x13D7 / 5079
{
	Function_1();
	return;
}

void Function_39() //Position: 0x13E0 / 5088
{
	uLocal_4 = CREATE_LAYOUT(Function_49());
	Function_48(1);
	Function_48(2);
	Function_46(0, 1);
	Function_45();
	Function_40(&uLocal_19);
	Function_40(&iLocal_27);
	Function_40(&iLocal_23);
	iLocal_0 = 0;
	iLocal_1 = 0;
	if (!iLocal_1 != 0)
	{
		LOG_ERROR("m_goal is messed up");
	}
	return;
}

void Function_40(int iParam0) //Position: 0x1435 / 5173
{
	if (!Function_44(&iParam0))
	{
		Function_41(&iParam0, 0.0f);
	}
	return;
}

void Function_41(vector3 vParam0) //Position: 0x144C / 5196
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_43(&vParam0, 1);
	Function_42(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_42(var uParam0, int iParam1) //Position: 0x1471 / 5233
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_43(var uParam0, int iParam1) //Position: 0x1487 / 5255
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_44(var uParam0) //Position: 0x1498 / 5272
{
	return Function_13(uParam0, 1);
}

void Function_45() //Position: 0x14A6 / 5286
{
	return;
}

void Function_46(bool bParam0, bool bParam1) //Position: 0x14AC / 5292
{
	var uVar0;
	
	SATCHEL_SET_ENABLED(0);
	uVar0 = Function_16();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(&uVar0);
	Function_47(1);
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
	SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
	if (&bParam1)
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	return;
}

void Function_47(int iParam0) //Position: 0x150B / 5387
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_48(int iParam0) //Position: 0x1528 / 5416
{
	int iVar0;
	
	if (Function_13(iParam0, 1) && Function_13(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

var Function_49() //Position: 0x155C / 5468
{
	var uVar0;
	
	return &uVar0;
}

