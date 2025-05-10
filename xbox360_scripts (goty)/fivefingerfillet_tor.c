//Decompiled with MagicRDR v1.0
//Function Count : 49
//Statics Count : 77
//Natives Count : 50
//Parameters Count : 7

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	bool bLocal_2 = false;
	bool bLocal_3 = false;
	bool bLocal_4 = false;
	struct<7> Local_5 = { 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	bool bLocal_22 = false;
	bool bLocal_23 = false;
	int iLocal_24 = 0;
	var uLocal_25 = 4;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 4;
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
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 2;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	struct<7> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	Local_5 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	Function_39();
	while (Function_20())
	{
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x21 / 33
{
	Function_16(&(Global_30707[3]));
	Function_12();
	if (IS_ACTOR_VALID(bLocal_22))
	{
		SET_INDICATOR_DRAW(bLocal_22, 0);
		RELEASE_ACTOR(bLocal_22);
	}
	if (IS_BLIP_VALID(bLocal_23))
	{
		REMOVE_BLIP(bLocal_23);
	}
	Function_11();
	RELEASE_LAYOUT_REF(bLocal_4);
	if (Function_10(Local_5))
	{
		Function_2(Local_5);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x6B / 107
{
	Function_3(iParam0);
	return;
}

void Function_3(int iParam0) //Position: 0x76 / 118
{
	var uVar0;
	
	if (!Function_8(iParam0))
	{
		Function_6();
		return;
	}
	uVar0 = Function_4(iParam0);
	Global_13172[iParam011].f_4 = 0;
	return;
}

int Function_4(int iParam0) //Position: 0x9A / 154
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

bool Function_5(int iParam0) //Position: 0xB5 / 181
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0xCC / 204
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
			Function_7(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_7(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x313 / 787
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
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
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(false);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_ACTOR_UPDATE_PRIORITY(Function_15(), true);
	Function_14(1);
	if (!Function_13())
	{
		SET_POP_DENSITY_MULTIPLIER(1.0f);
	}
	SET_TIME_ACCELERATION(Global_63398);
	RESET_FACTIONS();
	HUD_ENABLE(1);
	ACTOR_END_FORCE_HOLSTER(GET_PLAYER_ACTOR(0));
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 0);
	AI_STOP_IGNORING_ACTORS();
	return;
}

bool Function_13() //Position: 0x3EF / 1007
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_14(var uParam0) //Position: 0x3F8 / 1016
{
	Global_26316.f_56 = (Global_26316.f_56 || uParam0);
	return;
}

var Function_15() //Position: 0x40B / 1035
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_16(int iParam0) //Position: 0x420 / 1056
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	
	Function_19(*iParam0);
	vVar0 = { StackVal, StackVal, Function_19(*iParam0) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &vVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(bVar3))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_GRINGO(bVar3), "ForceAllowRain");
	}
	Function_18(*iParam0);
	vVar0 = { StackVal, StackVal, Function_18(*iParam0) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &vVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(bVar3))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_GRINGO(bVar3), "ForceAllowRain");
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		Function_17(*iParam0, iVar4);
		vVar0 = { StackVal, StackVal, Function_17(*iParam0, iVar4) };
		bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate", &vVar0, 0.25f, 0);
		if (!IS_GRINGO_VALID(bVar3))
		{
			bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_B", &vVar0, 0.25f, 0);
		}
		if (!IS_GRINGO_VALID(bVar3))
		{
			bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_C", &vVar0, 0.25f, 0);
		}
		if (IS_GRINGO_VALID(bVar3))
		{
			DECOR_REMOVE(GET_OBJECT_FROM_GRINGO(bVar3), "ForceAllowRain");
		}
		iVar4++;
	}
	return;
}

vector3 Function_17(int iParam0, int iParam1) //Position: 0x65B / 1627
{
	if (iParam0 == Global_30640[0])
	{
		if (iParam1 == 0)
		{
			return -2192.956f, 16.5768f, 2591.536f;
		}
		if (iParam1 == 1)
		{
			return -2193.327f, 16.5768f, 2593.874f;
		}
		if (iParam1 == 2)
		{
			return -2192.68f, 16.5768f, 2592.817f;
		}
	}
	if (iParam0 == Global_30668[1])
	{
		if (iParam1 == 0)
		{
			return 163.185f, 73.837f, 2293.025f;
		}
		if (iParam1 == 1)
		{
			return 163.4155f, 73.837f, 2293.8f;
		}
		if (iParam1 == 2)
		{
			return 163.604f, 73.837f, 2294.628f;
		}
	}
	if (iParam0 == Global_30685[0])
	{
		if (iParam1 == 0)
		{
			return -4276.273f, 18.09486f, 4452.201f;
		}
		if (iParam1 == 1)
		{
			return -4275.895f, 18.09486f, 4451.213f;
		}
		if (iParam1 == 2)
		{
			return -4274.775f, 18.09486f, 4452.317f;
		}
	}
	if (iParam0 == Global_30707[3])
	{
		if (iParam1 == 0)
		{
			return 356.5144f, 76.29012f, 3446.935f;
		}
		if (iParam1 == 1)
		{
			return 356.5144f, 76.29012f, 3448.271f;
		}
		if (iParam1 == 2)
		{
			return 357.207f, 76.29012f, 3448.271f;
		}
	}
	if (iParam0 == Global_30723[1])
	{
		if (iParam1 == 0)
		{
			return -463.5462f, 152.3519f, 1598.171f;
		}
		if (iParam1 == 1)
		{
			return -464.753f, 152.3517f, 1598.612f;
		}
		if (iParam1 == 2)
		{
			return -462.8687f, 152.352f, 1597.15f;
		}
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_18(int iParam0) //Position: 0x841 / 2113
{
	if (iParam0 == Global_30640[0])
	{
		return -2194.299f, 16.57026f, 2593.136f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161.0631f, 73.82803f, 2294.619f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274.766f, 18.07059f, 4453.27f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354.6982f, 76.28821f, 3447.546f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -465.0943f, 152.3517f, 1596.716f;
	}
	LOG_ERROR("Returning invalid five finger fillet player seat");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_19(int iParam0) //Position: 0x913 / 2323
{
	if (iParam0 == Global_30640[0])
	{
		return -2194.388f, 16.57687f, 2592.54f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161.1002f, 73.83751f, 2294.133f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274.772f, 18.07059f, 4453.844f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354.5946f, 76.28807f, 3448.024f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -464.3469f, 152.3559f, 1596.59f;
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_20() //Position: 0x9E1 / 2529
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
			if (Function_35(Global_30707[3]))
			{
				iLocal_12 = Function_34(Local_5);
				if (iLocal_12 <= 1)
				{
					iLocal_12 = 1;
				}
				if (Function_32() <= iLocal_12)
				{
					Function_28("FiveFingerFillet_NotEnoughMoney", 4.0f, 0, 2, 1, 0);
					bLocal_3 = true;
				}
				else
				{
					iLocal_0 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_27(Global_30707[3], &iLocal_24 + 4, &iLocal_24 + 24, &iLocal_24 + 28))
			{
				Function_26(&(Global_30707[3]));
				Function_25(&iLocal_24 + 4);
				Function_19(Global_30707[3]);
				*(&iLocal_24 + 156[03]) = { StackVal, StackVal, Function_19(Global_30707[3]) };
				Function_18(Global_30707[3]);
				*(&iLocal_24 + 156[13]) = { StackVal, StackVal, Function_18(Global_30707[3]) };
				iLocal_24 = Local_5;
				Function_24(Local_5, 0);
				LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/FiveFingerFillet/FiveFingerFillet", &iLocal_24, 46, 0);
				iLocal_0 = 2;
			}
			else
			{
				bLocal_3 = true;
			}
			break;
		
		case 0x00000002:
			if (!Function_10(Local_5))
			{
				iLocal_0 = 101;
			}
			break;
		
		case 0x00000065:
			if (Function_23(Local_5, 0))
			{
				bLocal_2 = true;
			}
			else if (Function_22(Local_5))
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
		Function_21();
		return 0;
	}
	if (bLocal_3)
	{
		Function_38();
		return 0;
	}
	return 1;
}

void Function_21() //Position: 0xB78 / 2936
{
	Function_1();
	return;
}

bool Function_22(int iParam0) //Position: 0xB81 / 2945
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

bool Function_23(int iParam0, bool bParam1) //Position: 0xBA2 / 2978
{
	if (!Function_8(iParam0))
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

void Function_24(int iParam0, int iParam1) //Position: 0xBD8 / 3032
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

void Function_25(int iParam0) //Position: 0xBF3 / 3059
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		bVar1 = (*iParam0)[iVar0];
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!AI_IGNORE_ACTOR(bVar1))
			{
				LOG_ERROR("AI_IGNORE_ACTOR failed");
			}
			SET_ACTOR_FACTION(bVar1, 1);
		}
		iVar0++;
	}
	return;
}

void Function_26(int iParam0) //Position: 0xC48 / 3144
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	
	Function_19(*iParam0);
	vVar0 = { StackVal, StackVal, Function_19(*iParam0) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &vVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(bVar3))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar3), "ForceAllowRain", true);
	}
	Function_18(*iParam0);
	vVar0 = { StackVal, StackVal, Function_18(*iParam0) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &vVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(bVar3))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar3), "ForceAllowRain", true);
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		Function_17(*iParam0, iVar4);
		vVar0 = { StackVal, StackVal, Function_17(*iParam0, iVar4) };
		bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate", &vVar0, 0.25f, 0);
		if (!IS_GRINGO_VALID(bVar3))
		{
			bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_B", &vVar0, 0.25f, 0);
		}
		if (!IS_GRINGO_VALID(bVar3))
		{
			bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_C", &vVar0, 0.25f, 0);
		}
		if (IS_GRINGO_VALID(bVar3))
		{
			DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar3), "ForceAllowRain", true);
		}
		iVar4++;
	}
	return;
}

bool Function_27(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xE86 / 3718
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	bool bVar9;
	
	Function_19(iParam0);
	vVar0 = { StackVal, StackVal, Function_19(iParam0) };
	bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &vVar0, 1.0f, 0);
	if (!IS_GRINGO_VALID(bVar3))
	{
		return 0;
	}
	(*uParam1)[0] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar3, "UseCase1"));
	if (!IS_ACTOR_VALID((*uParam1)[0]))
	{
		return 0;
	}
	if (IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[0], "fivefingerfillet/Fake"))
	{
		if (IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[0], "fivefingerfillet/Fake/sit") || IS_ACTION_NODE_PLAYING_PARTIAL((*uParam1)[0], "fivefingerfillet/Fake/leave_game"))
		{
			return 0;
		}
	}
	return 0;
	iVar4 = 1;
	iVar5 = 0;
	while (iVar5 <= 3)
	{
		Function_17(iParam0, iVar5);
		vVar0 = { StackVal, StackVal, Function_17(iParam0, iVar5) };
		bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate", &vVar0, 0.1f, 0);
		if (!IS_GRINGO_VALID(bVar3))
		{
			bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_B", &vVar0, 0.1f, 0);
		}
		if (!IS_GRINGO_VALID(bVar3))
		{
			bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_C", &vVar0, 0.1f, 0);
		}
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar3, "UseCase1"))))
		{
			(*uParam1)[iVar4] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar3, "UseCase1"));
			iVar4++;
		}
		iVar5++;
	}
	*uParam3 = iVar4;
	Function_18(iParam0);
	vVar6 = { StackVal, StackVal, Function_18(iParam0) };
	bVar9 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &vVar6, 1.0f, 0);
	if (!IS_GRINGO_VALID(bVar9))
	{
		return 0;
	}
	*uParam2 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar9, "UseCase1"));
	if (IS_ACTOR_VALID(*uParam2))
	{
		LOG_ERROR("Drinking Player Seat is NOT empty");
		return 0;
	}
	*uParam2 = GET_PLAYER_ACTOR(0);
	return 1;
}

void Function_28(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x11B2 / 4530
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_29(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_29(int iParam0) //Position: 0x1229 / 4649
{
	char* cVar0[16];
	
	if (!Function_30())
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

bool Function_30() //Position: 0x1268 / 4712
{
	if (Function_31(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_31(var uParam0, bool bParam1) //Position: 0x1283 / 4739
{
	return (uParam0 && bParam1) == 0;
}

int Function_32() //Position: 0x1290 / 4752
{
	return Function_33(0);
}

int Function_33(int iParam0) //Position: 0x129A / 4762
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

var Function_34(int iParam0) //Position: 0x12DB / 4827
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

bool Function_35(int iParam0) //Position: 0x12F5 / 4853
{
	if (!Function_37(iParam0))
	{
		return 1;
	}
	return Function_36(&(Global_29008[iParam0]), 4);
}

int Function_36(var uParam0, int iParam1) //Position: 0x1311 / 4881
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_37(int iParam0) //Position: 0x132D / 4909
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_38() //Position: 0x1343 / 4931
{
	Function_1();
	return;
}

void Function_39() //Position: 0x134C / 4940
{
	bLocal_4 = CREATE_LAYOUT(Function_48());
	Function_46(0, 1);
	Function_45();
	Function_40(&uLocal_13);
	Function_40(&iLocal_19);
	Function_40(&iLocal_16);
	iLocal_0 = 0;
	iLocal_1 = 0;
	if (!iLocal_1 != 0)
	{
		LOG_ERROR("m_goal is messed up");
	}
	return;
}

void Function_40(int iParam0) //Position: 0x1398 / 5016
{
	if (!Function_44(iParam0))
	{
		Function_41(iParam0, 0.0f);
	}
	return;
}

void Function_41(var uParam0, float fParam1) //Position: 0x13AD / 5037
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_43(uParam0, 1);
	Function_42(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_42(var uParam0, int iParam1) //Position: 0x13CE / 5070
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_43(var uParam0, int iParam1) //Position: 0x13E1 / 5089
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_44(var uParam0) //Position: 0x13F0 / 5104
{
	return Function_31(*uParam0, 1);
}

void Function_45() //Position: 0x13FD / 5117
{
	return;
}

void Function_46(bool bParam0, bool bParam1) //Position: 0x1403 / 5123
{
	bool bVar0;
	
	SATCHEL_SET_ENABLED(0);
	bVar0 = Function_15();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(bVar0);
	Function_47(1);
	SET_ACTOR_POSTURE(bVar0, 0);
	FIRE_STOP_ALL_FIRES();
	if (bParam0)
	{
		ACTOR_START_FORCE_HOLSTER(bVar0, 0, 0);
	}
	else
	{
		ACTOR_END_FORCE_HOLSTER(bVar0);
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		CANCEL_DEADEYE();
		CANCEL_TIME_WARP(0);
	}
	SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
	if (bParam1)
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	return;
}

void Function_47(var uParam0) //Position: 0x145A / 5210
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_48() //Position: 0x1477 / 5239
{
	var uVar0;
	
	return uVar0;
}

