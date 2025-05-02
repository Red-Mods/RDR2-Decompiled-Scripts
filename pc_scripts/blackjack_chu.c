//Decompiled with MagicRDR v1.0
//Function Count : 51
//Statics Count : 95
//Natives Count : 69
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
	struct<185> Local_35 = { 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	SET_ACTOR_UPDATE_PRIORITY(Function_14(), true);
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
	int iVar0;
	
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
			if (Function_36(Global_46866[0]))
			{
				iLocal_4 = Function_35(Local_7);
				if (Function_34())
				{
					if (iLocal_4 <= 15)
					{
						iLocal_4 = 15;
					}
				}
				else if (iLocal_4 <= 30)
				{
					iLocal_4 = 30;
				}
				if (Function_32() <= iLocal_4)
				{
					bLocal_3 = true;
				}
				else
				{
					iLocal_0 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_26(Global_46866[0], &Local_35 + 16, GET_PLAYER_ACTOR(0)) && Function_25(Global_46866[0], &Local_35 + 8))
			{
				Local_35 = Local_7;
				Function_24(&Local_35 + 16);
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					(*&Local_35 + 116)[iVar0] = iLocal_4 * 10;
					Function_23(Global_46866[0], iVar0);
					(&Local_35 + 48[iVar02]) = Function_23(Global_46866[0], iVar0);
					iVar0++;
				}
				Function_22(Global_46866[0]);
				*(&Local_35 + 104) = Function_22(Global_46866[0]);
				if (Function_34())
				{
					Local_35.f_180 = 1;
					Local_35.f_176 = 10;
					Local_35.f_184 = 500;
				}
				else
				{
					Local_35.f_180 = 2;
					Local_35.f_176 = 20;
					Local_35.f_184 = 1000;
				}
				Function_21(Global_46866[0]);
				*(&Local_35 + 148) = Function_21(Global_46866[0]);
				Function_20(Global_46866[0]);
				*(&Local_35 + 160) = Function_20(Global_46866[0]);
				Local_35.f_172 = 0;
				Function_19(Local_35, 0);
				LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Mini_Games/BlackJack01/BlackJack01", &Local_35, 48, 0);
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

void Function_16() //Position: 0x5F5 / 1525
{
	Function_1();
	return;
}

bool Function_17(int iParam0) //Position: 0x5FE / 1534
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

bool Function_18(int iParam0, bool bParam1) //Position: 0x61F / 1567
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

void Function_19(int iParam0, int iParam1) //Position: 0x656 / 1622
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

struct<8> Function_20(int iParam0) //Position: 0x671 / 1649
{
	if (iParam0 == Global_46866[0])
	{
		return StackVal, Vector(0.0f, 264,9963f, 0.0f);
	}
	if (iParam0 == Global_46796[1])
	{
		return StackVal, Vector(0.0f, 43,961f, 0.0f);
	}
	if (iParam0 == Global_46914[0])
	{
		return StackVal, Vector(0.0f, 270,264f, 0.0f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(0.0f, 239,6534f, 0.0f);
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_21(int iParam0) //Position: 0x6F6 / 1782
{
	if (iParam0 == Global_46866[0])
	{
		return StackVal, Vector(-2686,031f, 32,16603f, 4283,713f);
	}
	if (iParam0 == Global_46796[1])
	{
		return StackVal, Vector(-3640,833f, 43,5787f, 2105,209f);
	}
	if (iParam0 == Global_46914[0])
	{
		return StackVal, Vector(719,21f, 79,273f, 1311,627f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(171,742f, 74,56f, 2223,706f);
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_22(int iParam0) //Position: 0x79B / 1947
{
	if (iParam0 == Global_46866[0])
	{
		return StackVal, Vector(-2685,988f, 31,35322f, 4283,588f);
	}
	if (iParam0 == Global_46796[1])
	{
		return StackVal, Vector(-3640,397f, 42,77086f, 2104,753f);
	}
	if (iParam0 == Global_46914[0])
	{
		return StackVal, Vector(719,2065f, 78,4736f, 1312,102f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(171,4703f, 73,74976f, 2224,109f);
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_23(int iParam0, int iParam1) //Position: 0x840 / 2112
{
	if (iParam0 == Global_46866[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-2685,328f, 31,35269f, 4284,425f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-2686,254f, 31,35269f, 4284,686f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-2686,982f, 31,35269f, 4284,026f);
				break;
		}
	}
	else if (iParam0 == Global_46796[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(-3640,897f, 42,76801f, 2104,235f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(-3640,023f, 42,76801f, 2104,636f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(-3639,895f, 42,76801f, 2105,61f);
				break;
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(719,9783f, 78,4736f, 1312,265f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(719,0787f, 78,4736f, 1312,605f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(718,2963f, 78,4736f, 1312,011f);
				break;
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return StackVal, Vector(172,2084f, 73,75179f, 2224,902f);
				break;
			
			case 0x00000001:
				return StackVal, Vector(170,9445f, 73,75179f, 2224,73f);
				break;
			
			case 0x00000002:
				return StackVal, Vector(170,7396f, 73,74976f, 2223,559f);
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_24(int[] iParam0) //Position: 0x9F5 / 2549
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

int Function_25(int iParam0, int iParam1) //Position: 0xA51 / 2641
{
	var uVar0;
	var uVar2;
	
	Function_22(iParam0);
	uVar0 = Function_22(iParam0);
	uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack_dealer", &uVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(&uVar2))
	{
		if (GRINGO_IS_ACTIVATION_ALLOWED(&uVar2))
		{
			iParam1 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&uVar2, "UseCase1"));
			if (!IS_ACTOR_VALID(&iParam1))
			{
				LOG_ERROR("No Dealer on dealing gringo");
				return 0;
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&iParam1, "Dealer"))
			{
				return 0;
			}
		}
		return 0;
	}
	LOG_ERROR("fake_blackjack_dealer is NOT valid");
	return 0;
	return 1;
}

int Function_26(var uParam0, var[] uParam1, int iParam2) //Position: 0xB4D / 2893
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	bool bVar5;
	int iVar6;
	var uVar7[3];
	int iVar11;
	int iVar12;
	bool bVar13;
	
	bVar5 = -1.0f;
	iVar6 = 4294967295;
	bVar4 = false;
	while (bVar4 <= uParam1)
	{
		Function_23(uParam0, bVar4);
		Var2 = Function_23(uParam0, bVar4);
		iVar11 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack", &Var2, 1.0f, 0);
		uVar7[bVar4] = &iVar11;
		iVar12 = 0;
		while (iVar12 <= bVar4)
		{
			if (&uVar7[iVar12] == &iVar11)
			{
				iVar11 = "";
				return 0;
			}
			iVar12++;
		}
		if (IS_GRINGO_VALID(&iVar11))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(&iVar11))
			{
				uParam1[bVar4] = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(&iVar11, "UseCase1"));
				if (!IS_ACTOR_VALID(&(uParam1[bVar4])))
				{
					Function_31(&iParam2, &Var0);
					GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&iVar11), &Var2);
					bVar13 = VDIST(Var0, Var2);
					if (bVar5 != -1.0f || bVar13 > bVar5)
					{
						bVar5 = bVar13;
						iVar6 = bVar4;
					}
				}
				else if (IS_ACTION_NODE_PLAYING_PARTIAL(&(uParam1[bVar4]), "idle"))
				{
					PRINTSTRING("Found blackjack player in seat ");
					PRINTINT(bVar4);
					PRINTNL();
				}
				else
				{
					return 0;
				}
			}
			return 0;
		}
		LOG_ERROR("Fake_Liars_Dice is NOT valid");
		return 0;
		bVar4++;
	}
	if (iVar6 == 4294967295)
	{
		LOG_ERROR("No Human Seat Available");
		return 0;
	}
	uParam1[iVar6] = &iParam2;
	if (Function_27(&iParam2, 1, 1))
	{
		return 0;
	}
	return 1;
}

bool Function_27(int iParam0, bool bParam1, bool bParam2) //Position: 0xD1E / 3358
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
	if (Function_30(&iParam0))
	{
		return 1;
	}
	if (Function_29(&iParam0))
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
	if (Function_28())
	{
		return 1;
	}
	return 0;
}

bool Function_28() //Position: 0xDE2 / 3554
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_29(int iParam0) //Position: 0xDF9 / 3577
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_30(int iParam0) //Position: 0xE05 / 3589
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_31(var uParam0, var uParam1) //Position: 0xE14 / 3604
{
	GET_POSITION(&uParam0, &uParam1);
	return;
}

int Function_32() //Position: 0xE23 / 3619
{
	return Function_33(0);
}

int Function_33(int iParam0) //Position: 0xE2D / 3629
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

bool Function_34() //Position: 0xE6E / 3694
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_35(int iParam0) //Position: 0xE99 / 3737
{
	if (!Function_8(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

bool Function_36(int iParam0) //Position: 0xEB3 / 3763
{
	if (!Function_38(iParam0))
	{
		return 1;
	}
	return Function_37(&(Global_43791[iParam0]), 4);
}

int Function_37(var uParam0, int iParam1) //Position: 0xECF / 3791
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_38(int iParam0) //Position: 0xEEC / 3820
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_39() //Position: 0xF02 / 3842
{
	Function_1();
	return;
}

void Function_40() //Position: 0xF0B / 3851
{
	uLocal_5 = CREATE_LAYOUT(Function_50());
	Function_48(0, 1);
	Function_47();
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

void Function_41(int iParam0) //Position: 0xF58 / 3928
{
	if (!Function_45(&iParam0))
	{
		Function_42(&iParam0, 0.0f);
	}
	return;
}

void Function_42(vector3 vParam0) //Position: 0xF6F / 3951
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_44(&vParam0, 1);
	Function_43(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_43(var uParam0, int iParam1) //Position: 0xF94 / 3988
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_44(var uParam0, int iParam1) //Position: 0xFAA / 4010
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_45(int iParam0) //Position: 0xFBB / 4027
{
	return Function_46(iParam0, 1);
}

int Function_46(var uParam0, bool bParam1) //Position: 0xFC9 / 4041
{
	return (uParam0 && bParam1) == 0;
}

void Function_47() //Position: 0xFD6 / 4054
{
	return;
}

void Function_48(bool bParam0, bool bParam1) //Position: 0xFDC / 4060
{
	var uVar0;
	
	SATCHEL_SET_ENABLED(0);
	uVar0 = Function_14();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(&uVar0);
	Function_49(1);
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

void Function_49(var uParam0) //Position: 0x103B / 4155
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && uParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

var Function_50() //Position: 0x1058 / 4184
{
	var uVar0;
	
	return &uVar0;
}

