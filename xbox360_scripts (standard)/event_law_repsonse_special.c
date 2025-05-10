//Decompiled with MagicRDR v1.0
//Function Count : 293
//Statics Count : 221
//Natives Count : 509
//Parameters Count : 23

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	bool bLocal_9 = false;
	int iLocal_10 = 0;
	struct<725> Local_11 = { 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	
	bLocal_9 = false;
	bVar1 = 250;
	Function_279(&Local_11, &ScriptParam_0);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(Global_34573, false, "red_wanted");
	if (Function_278(0x1000000))
	{
		Function_277(0x1000000);
	}
	fVar3 = GET_CURRENT_GAME_TIME();
	Global_3403 = 1;
	SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 6);
	Global_13111 = 2;
	iLocal_10 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bVar1 = 250;
		if (Global_3378)
		{
			if (iLocal_10 != 4)
			{
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
			}
		}
		if ((!IS_ACTOR_VALID(ScriptParam_0.f_48) && !iLocal_10 != 3) && !iLocal_10 != 4)
		{
			Function_275(Local_11.f_576, "special_forces_criminal_dead", 5.0f, ScriptParam_0.f_64, 20.0f, 1, 1);
			iLocal_10 = 3;
			bVar1 = false;
		}
		else if ((!IS_ACTOR_ALIVE(ScriptParam_0.f_48) && !iLocal_10 != 3) && !iLocal_10 != 4)
		{
			Function_275(Local_11.f_576, "special_forces_criminal_dead", 5.0f, ScriptParam_0.f_64, 20.0f, 1, 1);
			iLocal_10 = 3;
			bVar1 = false;
		}
		Function_274(&Local_11);
		if (IS_ACTOR_VALID(ScriptParam_0.f_48))
		{
			GET_POSITION(ScriptParam_0.f_48, &Local_11 + 416);
		}
		Global_26316.f_152 = SQUAD_GET_SIZE(Local_11.f_576);
		switch (iLocal_10)
		{
			case 0x00000000:
				if (GET_CURRENT_GAME_TIME() <= (Local_11.f_476 + 10.0f))
				{
					iLocal_10 = 3;
				}
				if (Function_269(&Local_11 + 8) && Function_269(&Local_11 + 60))
				{
					Local_11.f_476 = GET_CURRENT_GAME_TIME();
					iLocal_10 = 1;
					bVar1 = false;
				}
				Function_267(&Local_11, &ScriptParam_0);
				break;
				break;
			
			case 0x00000001:
				if (Function_231(&Local_11, &ScriptParam_0))
				{
					Local_11.f_476 = GET_CURRENT_GAME_TIME();
					Function_230(1);
					PLAYER_RUMBLE("RUMBLE_MED", 4294967295, 0);
					if (Function_229())
					{
						if (ScriptParam_0.f_64 == 0)
						{
							Function_228("tutorial_law_marshal_spawn", 0x41200000, 1, 0, 2, 1, 0);
						}
						else
						{
							Function_228("tutorial_law_army_spawn", 0x41200000, 1, 0, 2, 1, 0);
						}
						Function_206();
					}
					Local_11.f_648 = 0;
					iLocal_10 = 2;
					bVar1 = false;
				}
				else
				{
					if (Local_11.f_648 == 24)
					{
						iLocal_10 = 3;
					}
					bVar1 = 50;
				}
				Function_189(&Local_11);
				if (GET_CURRENT_GAME_TIME() <= (Local_11.f_476 + 10.0f))
				{
					iLocal_10 = 3;
				}
				break;
			
			case 0x00000002:
				if (Function_229())
				{
					Function_185(&Local_11);
				}
				bVar2 = Function_183(Local_11.f_576, ScriptParam_0.f_48, 1, 0);
				if (IS_ACTOR_VALID(bVar2))
				{
					GET_POSITION(bVar2, &Local_11 + 428);
				}
				else
				{
					*(&Local_11 + 428) = { 0.0f, 0.0f, 0.0f };
				}
				Function_182(&Local_11, &ScriptParam_0);
				Function_174(&Local_11, &ScriptParam_0);
				Function_172(&Local_11, &ScriptParam_0);
				Function_171(&Local_11);
				Function_166();
				if (Function_160(&Local_11, &ScriptParam_0, 1))
				{
					Local_11.f_648 = 24;
					iLocal_10 = 3;
					bVar1 = false;
				}
				bVar1 = Function_101(bVar1, Function_102(&Local_11, &ScriptParam_0));
				Function_96(&Local_11, &ScriptParam_0);
				Function_83(&Local_11, &ScriptParam_0);
				Function_72(&Local_11);
				Function_70(&Local_11, &ScriptParam_0);
				Function_69(&Local_11);
				if (Local_11.f_720)
				{
					iLocal_10 = 3;
				}
				if (Local_11.f_564)
				{
					iLocal_10 = 3;
				}
				bVar4 = false;
				if (Function_68(&Local_11, 1) == 0)
				{
					if (Local_11.f_364 != 0.0f)
					{
						Local_11.f_364 = (GET_CURRENT_GAME_TIME() + 1,5f);
					}
					else if (GET_CURRENT_GAME_TIME() <= Local_11.f_364)
					{
						bVar4 = true;
					}
				}
				else
				{
					Local_11.f_364 = 0.0f;
				}
				if (bVar4)
				{
					Local_11.f_364 = GET_CURRENT_GAME_TIME();
					if (Function_68(&Local_11, 0) == 0)
					{
						Local_11.f_556 = 1;
					}
					bVar1 = false;
					iLocal_10 = 3;
				}
				Function_67(&Local_11);
				if (!Function_229())
				{
					bLocal_197 = false;
					if (IS_ACTOR_VALID(Function_66()))
					{
						bVar5 = GET_LAST_ATTACKER(Function_66());
						if (IS_ACTOR_VALID(bVar5))
						{
							if (Function_65(bVar5, Local_11.f_576, 0))
							{
								bLocal_197 = true;
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				if (IS_SCRIPT_USE_CONTEXT_VALID(Local_11.f_712))
				{
					RELEASE_SCRIPT_USE_CONTEXT(Local_11.f_712);
				}
				if (IS_BLIP_VALID(Local_11.f_384))
				{
					REMOVE_BLIP(Local_11.f_384);
				}
				bVar1 = Function_102(&Local_11, &ScriptParam_0);
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(Local_11.f_576))
				{
					if (Function_229())
					{
						RELEASE_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar0));
					}
					else if ((!Function_64(SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar0), 1.0f, 75.0f, 1, 1, 0) || HUD_IS_FADED()) && !IS_ACTOR_HOGTIED(SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar0)))
					{
						DESTROY_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar0));
					}
					else
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar0))))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar0)));
						}
						RELEASE_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_11.f_576, bVar0));
					}
					bVar0++;
				}
				Function_63(Local_11.f_576);
				bVar1 = false;
				iLocal_10 = 4;
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar1 = false;
				break;
			
			default:
				break;
		}
		if (GET_CURRENT_GAME_TIME() - fVar3) < IntToFloat(Function_62(259))
		{
			Function_48(259, ROUND((GET_CURRENT_GAME_TIME() - fVar3)), 0);
		}
		WAIT(bVar1);
	}
	if (SQUAD_GET_SIZE(Local_11.f_576) < 0 && !Local_11.f_552)
	{
		Function_42(&Local_11 + 576, 0, 0, 0);
	}
	else if (Local_11.f_552)
	{
		Function_42(&Local_11 + 576, 0, 0, 1);
	}
	if (!Local_11.f_556)
	{
		Function_40();
	}
	Function_38(&Local_11, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_11.f_712))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_11.f_712);
	}
	if (IS_BLIP_VALID(Local_11.f_384))
	{
		REMOVE_BLIP(Local_11.f_384);
	}
	if (!Function_229())
	{
		if (bLocal_197)
		{
			if (IS_ACTOR_VALID(Function_66()))
			{
				if (!IS_ACTOR_ALIVE(Function_66()))
				{
					Function_37(2048);
					Global_26401.f_2216 = ScriptParam_0.f_64;
					Function_33(Function_36(Global_26316[Local_11.f_724]), Function_34(Local_11.f_724), Local_11.f_724);
				}
			}
		}
	}
	Function_29(&Local_11 + 8);
	Function_27(0);
	Function_37(1024);
	Global_13094 = 1.0f;
	if (Local_11.f_540 || Local_11.f_548)
	{
		Function_37(2048);
		Global_26401.f_2216 = ScriptParam_0.f_64;
	}
	else if (IS_ACTOR_ALIVE(Global_34573))
	{
		if (!Function_23(25, 0))
		{
			if (!Function_22(Global_76847, 2097152))
			{
				if (IS_ACTOR_ALIVE(Function_66()))
				{
					Function_18(Global_34573, 2097152, 2, 0);
				}
			}
		}
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(34))
		{
			if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
			{
				if (GET_ACTOR_ENUM(GET_MOUNT(Global_34573)) == 982)
				{
					AWARD_ACHIEVEMENT(34);
				}
			}
		}
	}
	Function_16(32768);
	Function_11(ScriptParam_0.f_64, 0);
	Global_13111 = 4294967295;
	if (((!Local_11.f_540 && !Local_11.f_548) && !Global_3395) && !HUD_IS_FADED())
	{
		PLAYER_RUMBLE("RUMBLE_MED", 4294967295, 0);
	}
	ABORT_HUD_MAP_SCALE_OVERRIDE();
	Function_9(1);
	TOGGLE_ACTOR_ACTION_SIGNAL_OFF(Global_34573);
	Function_29(&Local_11 + 60);
	if (IS_POPSET_VALID(Local_11.f_332))
	{
		DESTROY_POPULATION_SET(Local_11.f_332);
	}
	Global_3406 = 1;
	Global_26316.f_176 = 1;
	if (!Function_22(Global_76847, 256))
	{
		Function_7(Global_34573, 256, 2);
	}
	if (!Function_22(Global_76847, 1024))
	{
		Function_7(Global_34573, 1024, 2);
	}
	if (!Function_22(Global_76848, 32768))
	{
		Function_7(Function_66(), 32768, 3);
	}
	SET_AMBIENT_STREAMING_REQUIRED_POP_ACTOR_SCALE(1.0f);
	if (!Function_229())
	{
		RELEASE_LAYOUT_REF(Local_11.f_336);
	}
	else
	{
		Function_1(&Local_11);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x6FB / 1787
{
	Function_2();
	if (IS_OBJECT_VALID(iParam0->f_664))
	{
		DESTROY_OBJECT(iParam0->f_664);
	}
	if (IS_OBJECT_VALID(iParam0->f_676))
	{
		DESTROY_OBJECT(iParam0->f_676);
	}
	RELEASE_OBJECT_REF(iParam0->f_576);
	RELEASE_OBJECT_REF(iParam0->f_580);
	RELEASE_OBJECT_REF(iParam0->f_412);
	return;
}

void Function_2() //Position: 0x742 / 1858
{
	if (!Function_6())
	{
		Function_3(4096);
		UI_EXIT("XpHud");
	}
	return;
}

void Function_3(int iParam0) //Position: 0x760 / 1888
{
	Function_4(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x799 / 1945
{
	Function_5(uParam0, iParam1);
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x7A6 / 1958
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

bool Function_6() //Position: 0x7B9 / 1977
{
	return Global_78480.f_24 == 4294967294;
}

void Function_7(bool bParam0, int iParam1, int iParam2) //Position: 0x7C9 / 1993
{
	var uVar0;
	struct<4> Var1;
	bool bVar5;
	
	uVar0 = iParam1;
	strcpy(&Var1, "tutorial", 16);
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	Function_8(&Var1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &Var1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(bParam0, &Var1);
	DECOR_SET_INT(bParam0, &Var1, (bVar5 - (bVar5 && uVar0)));
	return;
}

void Function_8(char* cParam0, int iParam1) //Position: 0x818 / 2072
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

void Function_9(int iParam0) //Position: 0x84F / 2127
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_10())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_10() //Position: 0x88B / 2187
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

void Function_11(int iParam0, bool bParam1) //Position: 0x8B0 / 2224
{
	bool bVar0;
	
	if (bParam1)
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], false))
		{
			bVar0 = RAND_INT_RANGE(60, 180);
		}
		else
		{
			return;
		}
	}
	bVar0 = RAND_INT_RANGE(1800, 2400);
	if (Function_15() > 3)
	{
		bVar0 *= 2;
	}
	if (Function_229() && !bParam1)
	{
		Function_13(iParam0, 0, 0, 300, 0);
	}
	else
	{
		Function_13(iParam0, 0, 0, Function_12(bVar0), 0);
	}
	return;
}

bool Function_12(int iParam0) //Position: 0x917 / 2327
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_13(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x92D / 2349
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_14((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_14(bool bParam0) //Position: 0x973 / 2419
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_15() //Position: 0x998 / 2456
{
	return Global_12976.f_156;
}

void Function_16(int iParam0) //Position: 0x9A3 / 2467
{
	Function_17(&Global_28842, iParam0);
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0x9B1 / 2481
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_18(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x9CC / 2508
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_19(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_8(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

bool Function_19(bool bParam0, var uParam1, int iParam2) //Position: 0xA38 / 2616
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
		if (Function_21(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_20(uVar0))
		{
			case 0x00000002:
				if (!Function_22(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_20(char* cParam0) //Position: 0xAB0 / 2736
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

int Function_21(int iParam0) //Position: 0xB51 / 2897
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_5(&iVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 >= 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

bool Function_22(var uParam0, int iParam1) //Position: 0xB8E / 2958
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_23(int iParam0, bool bParam1) //Position: 0xBA1 / 2977
{
	int iVar0;
	
	iVar0 = Function_25(iParam0);
	if (!Function_24(iVar0))
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

bool Function_24(int iParam0) //Position: 0xBDE / 3038
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_25(int iParam0) //Position: 0xBF5 / 3061
{
	if (!Function_26(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_26(int iParam0) //Position: 0xC0F / 3087
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_27(bool bParam0) //Position: 0xC25 / 3109
{
	if (Global_3403 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_3403 = 1;
		if (!Global_27759)
		{
			if (IS_FACTION_VALID(Global_26361))
			{
				SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 6);
			}
		}
		Global_13111 = 0;
	}
	else
	{
		Global_3403 = 0;
		Global_3405 = 0;
		Function_28();
		if (IS_FACTION_VALID(Global_26361))
		{
			SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 2);
		}
		SET_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
		SET_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
		if (IS_SCRIPT_VALID(Global_26316.f_60))
		{
			TERMINATE_SCRIPT(Global_26316.f_60);
		}
		if (IS_SCRIPT_VALID(Global_26316.f_64))
		{
			TERMINATE_SCRIPT(Global_26316.f_64);
		}
		Global_13111 = 4294967295;
	}
	return;
}

void Function_28() //Position: 0xCB0 / 3248
{
	int iVar0;
	
	Global_26960 = Function_34(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

void Function_29(int iParam0) //Position: 0xCFE / 3326
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_30(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_30(var uParam0, int iParam1) //Position: 0xD24 / 3364
{
	if (Function_32(uParam0[iParam13], 4))
	{
		if (Function_32(uParam0[iParam13], 1))
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
			Function_31(uParam0[iParam13], 1);
			Function_31(uParam0[iParam13], 2);
			Function_31(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_31(var uParam0, int iParam1) //Position: 0xE52 / 3666
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_32(var uParam0, int iParam1) //Position: 0xE6C / 3692
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_33(var uParam0, var uParam1, int iParam2) //Position: 0xE89 / 3721
{
	struct<169> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	Var0.f_168 = 1;
	Var0.f_156 = uParam0;
	Var0.f_160 = uParam1;
	Var0.f_164 = iParam2;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

int Function_34(int iParam0) //Position: 0xEBF / 3775
{
	if (!Function_35(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_35(int iParam0) //Position: 0xED7 / 3799
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

int Function_36(int iParam0) //Position: 0xEEC / 3820
{
	if (iParam0 == Global_30668[0])
	{
		return 1;
	}
	if (iParam0 == Global_30640[0])
	{
		return 2;
	}
	if (iParam0 == Global_30717[0])
	{
		return 3;
	}
	if (iParam0 == Global_30693[0])
	{
		return 4;
	}
	if (iParam0 == Global_30707[1])
	{
		return 5;
	}
	if (iParam0 == Global_30685[0])
	{
		return 6;
	}
	return 0;
}

void Function_37(int iParam0) //Position: 0xF50 / 3920
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_38(var uParam0, bool bParam1) //Position: 0xF63 / 3939
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	if (SQUAD_IS_VALID(uParam0->f_576))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(uParam0->f_336);
		ITERATE_IN_LAYOUT(bVar0, uParam0->f_336);
		ITERATE_ON_OBJECT_TYPE(bVar0, 15);
		if (!bParam1)
		{
			ITERATE_ON_PARTIAL_NAME(bVar0, "lawHorse");
		}
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar1 = GET_NUM_ITERATOR_MATCHES(bVar0);
		iVar4 = (iVar1 - SQUAD_GET_SIZE(uParam0->f_576));
		if (iVar4 >= 0)
		{
			iVar3 = 1;
		}
		if (iVar3 || bParam1)
		{
			bVar5 = START_OBJECT_ITERATOR(bVar0);
			while (IS_OBJECT_VALID(bVar5))
			{
				if (iVar2 <= iVar4)
				{
					bVar6 = GET_ACTOR_FROM_OBJECT(bVar5);
					if (IS_ACTOR_VALID(bVar6))
					{
						if (IS_ACTOR_HORSE(bVar6))
						{
							if (IS_ACTOR_ALIVE(bVar6))
							{
								if (GET_RIDER(bVar6) == "")
								{
									iVar7 = GET_TASK_STATUS(bVar6, 25);
									if ((iVar7 == 1 || Function_229()) || bParam1)
									{
										Function_39(bVar6, Function_66(), -1.0f, -1.0f, 0, 0);
										RELEASE_ACTOR(bVar6);
										iVar2++;
									}
								}
							}
							else
							{
								RELEASE_ACTOR(bVar6);
								iVar2++;
							}
						}
					}
				}
				bVar5 = OBJECT_ITERATOR_NEXT(bVar0);
			}
		}
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_39(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x105D / 4189
{
	if (Function_229())
	{
		MEMORY_REPORT_POSITION_AUTO(bParam0, Global_34573, false);
		MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
		TASK_FLEE_ACTORSET(bParam0, Global_78576, fParam2, fParam3, iParam4, iParam5, 0);
	}
	else if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		TASK_FLEE_ACTOR(bParam0, bParam1, fParam2, fParam3, iParam4, iParam5, 0);
	}
}

void Function_40() //Position: 0x10B0 / 4272
{
	AI_GLOBAL_CLEAR_ALL_DANGER();
	Function_41(GET_AMBIENT_LAYOUT());
	Function_41(GET_GC_LAYOUT());
	Function_41(Global_6289);
	Function_41(Global_6288);
	Function_41(Global_28841);
	Function_41(Global_6290);
	Function_41(Global_63535);
	return;
}

void Function_41(bool bParam0) //Position: 0x10E3 / 4323
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_IN_LAYOUT(bVar0, bParam0);
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		if (IS_ACTOR_VALID(Function_66()))
		{
			while (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = "";
				if (GET_OBJECT_TYPE(bVar1) == 15)
				{
					bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				}
				else if (GET_OBJECT_TYPE(bVar1) == 24)
				{
					bVar2 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar1));
				}
				if (IS_ACTOR_VALID(bVar2))
				{
					if (GET_ACTOR_FACTION(bVar2) != 4 || GET_ACTOR_FACTION(bVar2) != 6)
					{
						TASK_CLEAR(bVar2);
						MEMORY_CONSIDER_AS(bVar2, Function_66(), 2);
						MEMORY_CLEAR_ALL(bVar2);
					}
				}
				bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
			}
		}
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_42(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x117F / 4479
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	if (SQUAD_GET_SIZE(*uParam0) >= 0)
	{
		Function_47(*uParam0);
		Function_46(*uParam0, 0);
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
				}
				DECOR_SET_BOOL(bVar1, "CanBeLasso", true);
				MEMORY_REPORT_POSITION_AUTO(bVar1, Global_34573, false);
				MEMORY_CONSIDER_AS(bVar1, Global_34573, 2);
				TASK_CLEAR(bVar1);
				if (!bParam3)
				{
					Function_39(bVar1, Global_34573, -1.0f, -1.0f, 0, 0);
				}
				else
				{
					TASK_WANDER(bVar1, -1.0f);
				}
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SQUAD_LEAVE(bVar1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
				}
				if (Function_45(bVar1))
				{
					Function_44(bVar1, 0);
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bVar1)))
					{
						Function_43(GET_PERS_CHAR_FROM_ACTOR(bVar1));
						DEREFERENCE_ACTOR(bVar1);
					}
					else
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
				}
				else
				{
					TASK_PRIORITY_SET(bVar1, 2);
					if (iParam2 == 1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar1);
					}
					else if (bParam1)
					{
						DESTROY_ACTOR(bVar1);
					}
					else
					{
						RELEASE_ACTOR(bVar1);
					}
				}
			}
			bVar0++;
		}
	}
}

int Function_43(bool bParam0) //Position: 0x12C6 / 4806
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			DEREFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, true);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_44(bool bParam0, int iParam1) //Position: 0x1360 / 4960
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (iParam1 == 1)
	{
		DECOR_SET_BOOL(bParam0, "nsharedlaw", true);
	}
	else
	{
		DECOR_REMOVE(bParam0, "nsharedlaw");
	}
	return;
}

bool Function_45(bool bParam0) //Position: 0x139E / 5022
{
	return DECOR_CHECK_EXIST(bParam0, "nsharedlaw");
}

void Function_46(bool bParam0, bool bParam1) //Position: 0x13B5 / 5045
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

void Function_47(bool bParam0) //Position: 0x13FE / 5118
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
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

int Function_48(int iParam0, bool bParam1, bool bParam2) //Position: 0x1433 / 5171
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
		Function_61(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_60(iParam0);
	if (bParam2)
	{
		Function_49(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_49(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x16CE / 5838
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_59(390))), 32);
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
					bVar19 = (Function_58(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_58(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_56(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_54(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_51(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_50(), &Var9);
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

var Function_50() //Position: 0x1CFB / 7419
{
	int iVar0;
	
	return iVar0;
}

var Function_51(int iParam0) //Position: 0x1D03 / 7427
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_52(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1D14 / 7444
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_53(char* cParam0, char* cParam1) //Position: 0x1E09 / 7689
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_54(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1E22 / 7714
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_101(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_55(Function_101(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_55(int iParam0, int iParam1) //Position: 0x1E87 / 7815
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_56(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1E99 / 7833
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
	if (((Function_57(iParam0) != 19 || Function_57(iParam0) != 17) || Function_57(iParam0) != 10) || Function_57(iParam0) != 9)
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

int Function_57(int iParam0) //Position: 0x1FC9 / 8137
{
	return Global_35278[iParam020].f_48;
}

float Function_58(int iParam0) //Position: 0x1FD8 / 8152
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_59(int iParam0) //Position: 0x2011 / 8209
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_60(int iParam0) //Position: 0x204E / 8270
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

int Function_61(int iParam0, bool bParam1, bool bParam2) //Position: 0x21E8 / 8680
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

int Function_62(int iParam0) //Position: 0x2402 / 9218
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

void Function_63(bool bParam0) //Position: 0x2443 / 9283
{
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	SQUAD_MAKE_EMPTY(bParam0);
	return;
}

bool Function_64(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2458 / 9304
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

bool Function_65(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2472 / 9330
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

bool Function_66() //Position: 0x24B2 / 9394
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_67(int iParam0) //Position: 0x24C7 / 9415
{
	return;
}

int Function_68(int iParam0, bool bParam1) //Position: 0x24CD / 9421
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(iParam0->f_576))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(iParam0->f_576) < 0)
	{
		return 0;
	}
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_576))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (!IS_ACTOR_HOGTIED(bVar2) || !bParam1)
			{
				if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar2), SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(iParam0->f_576)))
				{
					iVar0++;
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

void Function_69(int iParam0) //Position: 0x2547 / 9543
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_576))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_NUM_WEAPONS_IN_INVENTORY(bVar1) == 0)
			{
				if (IS_ACTOR_CRIPPLED(bVar1, 5) && !IS_ACTOR_HOGTIED(bVar1))
				{
					if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bVar1), "CrippledLawFleeTime"))
					{
						if (GET_CURRENT_GAME_TIME() <= DECOR_GET_FLOAT(GET_OBJECT_FROM_ACTOR(bVar1), "CrippledLawFleeTime"))
						{
							MEMORY_CLEAR_ALL(bVar1);
							SET_ACTOR_VISION_XRAY(bVar1, false);
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
							}
							MEMORY_REPORT_POSITION_AUTO(bVar1, Global_34573, false);
							MEMORY_CONSIDER_AS(bVar1, Global_34573, 2);
							TASK_CLEAR(bVar1);
							SQUAD_LEAVE(bVar1);
							if (Function_45(bVar1))
							{
								Function_44(bVar1, 0);
								if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bVar1)))
								{
									Function_43(GET_PERS_CHAR_FROM_ACTOR(bVar1));
									Function_39(bVar1, Global_34573, -1.0f, -1.0f, 0, 0);
									DEREFERENCE_ACTOR(bVar1);
								}
								else
								{
									Function_39(bVar1, Global_34573, -1.0f, -1.0f, 0, 0);
									RELEASE_ACTOR(bVar1);
								}
							}
							else
							{
								Function_39(bVar1, Global_34573, -1.0f, -1.0f, 0, 0);
								TASK_PRIORITY_SET(bVar1, true);
								RELEASE_ACTOR(bVar1);
							}
						}
					}
					else
					{
						DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(bVar1), "CrippledLawFleeTime", (GET_CURRENT_GAME_TIME() + 8.0f));
					}
				}
			}
			else if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bVar1), "CrippledLawFleeTime"))
			{
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bVar1), "CrippledLawFleeTime");
			}
		}
		bVar0++;
	}
	return;
}

void Function_70(var uParam0, int iParam1) //Position: 0x26E3 / 9955
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	if (!DECOR_CHECK_EXIST(uParam0->f_576, "nextspeech") || !DECOR_CHECK_EXIST(uParam0->f_576, "nextspeechtarget"))
	{
		if (uParam0->f_452 + 15.0f) > GET_CURRENT_GAME_TIME()
		{
			bVar0 = RAND_INT_RANGE(false, 10000);
			if (bVar0 <= 3333)
			{
				Function_71(uParam0->f_576, 109, iParam1->f_48);
			}
			else if (bVar0 <= 6666)
			{
				Function_71(uParam0->f_576, 58, iParam1->f_48);
			}
			else
			{
				Function_71(uParam0->f_576, 105, iParam1->f_48);
			}
		}
		return;
	}
	bVar1 = DECOR_GET_INT(uParam0->f_576, "nextspeechtarget");
	if (!IS_ACTOR_VALID(bVar1))
	{
		return;
	}
	GET_POSITION(bVar1, &vVar6);
	bVar2 = false;
	while (bVar2 <= SQUAD_GET_SIZE(uParam0->f_576))
	{
		GET_POSITION(SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar2), &vVar3);
		if (VDIST(vVar3, vVar6) > 20.0f)
		{
			bVar9 = DECOR_GET_INT(uParam0->f_576, "nextspeech");
			if (Global_29007 == 3)
			{
				bVar10 = GET_ACTOR_ENUM(SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar2));
				if ((bVar10 != 460 || bVar10 != 428) || bVar10 != 429)
				{
					if (RAND_INT_RANGE(false, true) == 0)
					{
						bVar9 = 110;
					}
				}
				else if ((((bVar10 != 184 || bVar10 != 185) || bVar10 != 186) || bVar10 != 187) || bVar10 != 188)
				{
					if (RAND_INT_RANGE(false, 3) == 0)
					{
						bVar9 = 110;
					}
				}
			}
			if (((uParam0->f_648 > 15 && !uParam0->f_568) && !uParam0->f_552) && !uParam0->f_540)
			{
				SAY_SINGLE_LINE_CONTEXT(SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar2), bVar9, bVar1, 1, 1, 2, 4294967295, 4294967295, 0, 1);
			}
			DECOR_REMOVE(uParam0->f_576, "nextspeechtarget");
			DECOR_REMOVE(uParam0->f_576, "nextspeech");
			uParam0->f_452 = GET_CURRENT_GAME_TIME();
		}
		bVar2++;
	}
	return;
}

bool Function_71(bool bParam0, bool bParam1, bool bParam2) //Position: 0x28DB / 10459
{
	DECOR_SET_INT(bParam0, "nextspeech", bParam1);
	DECOR_SET_INT(bParam0, "nextspeechtarget", bParam2);
	return 1;
}

void Function_72(int iParam0) //Position: 0x2912 / 10514
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_576))
	{
		Function_78(iParam0, SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar0));
		bVar0++;
	}
	Function_73(iParam0);
	return;
}

void Function_73(int iParam0) //Position: 0x2945 / 10565
{
	struct<9> Var0;
	
	if (Global_3386)
	{
		if (!IS_OBJECT_VALID(iParam0->f_728) || GET_CURRENT_GAME_TIME() <= iParam0->f_732)
		{
			iParam0->f_728 = Function_75(Global_34573, 4);
			iParam0->f_732 = (GET_CURRENT_GAME_TIME() + 3.0f);
		}
	}
	else
	{
		iParam0->f_728 = "";
		iParam0->f_732 = GET_CURRENT_GAME_TIME();
	}
	if (!IS_BLIP_VALID(iParam0->f_384))
	{
		if ((Global_3386 && Function_74()) && IS_OBJECT_VALID(iParam0->f_728))
		{
			GET_OBJECT_POSITION(iParam0->f_728, iParam0 + 388);
			iParam0->f_384 = ADD_BLIP_FOR_COORD(iParam0 + 388, 440, 0, 2, 0);
		}
		else
		{
			iParam0->f_384 = ADD_BLIP_FOR_COORD(iParam0 + 428, 440, 0, 2, 0);
		}
	}
	if ((Global_3386 && Function_74()) && IS_OBJECT_VALID(iParam0->f_728))
	{
		GET_OBJECT_POSITION(iParam0->f_728, iParam0 + 388);
		SET_BLIP_POS(iParam0->f_384, iParam0 + 388);
		GET_VOLUME_SCALE(GET_VOLUME_FROM_OBJECT(iParam0->f_728), &vVar0);
		SET_BLIP_SCALE(iParam0->f_384, ((vVar0.x + vVar0.z) / 2.0f));
	}
	else
	{
		SET_BLIP_POS(iParam0->f_384, iParam0 + 428);
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(iParam0->f_580) >= 0)
		{
			SET_BLIP_SCALE(iParam0->f_384, 225.0f);
		}
		else
		{
			SET_BLIP_SCALE(iParam0->f_384, 100.0f);
		}
	}
	if (Global_3405)
	{
		SET_BLIP_COLOR(iParam0->f_384, 0,1f, 0,1f, 0,1f, 0,5f);
	}
	else
	{
		SET_BLIP_COLOR(iParam0->f_384, 0,64f, 0,22f, 0,26f, 0,5f);
	}
	return;
}

int Function_74() //Position: 0x2AAB / 10923
{
	if (StackVal != 5 || Global_29006 != Global_30707[3])
	{
		return 0;
	}
	return 1;
}

var Function_75(bool bParam0, int iParam1) //Position: 0x2ACE / 10958
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	
	bVar0 = 99999.0f;
	bVar7 = "";
	bVar8 = "";
	bVar9 = "";
	if (!IS_OBJECT_VALID(bParam0))
	{
		return "";
	}
	GET_OBJECT_POSITION(bParam0, &vVar1);
	bVar10 = CREATE_OBJECT_ITERATOR(Global_28841);
	bVar11 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_IN_LAYOUT(bVar10, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar10, 9);
	bVar8 = START_OBJECT_ITERATOR(bVar10);
	while (IS_OBJECT_VALID(bVar8))
	{
		if (DECOR_CHECK_EXIST(bVar8, "locflag"))
		{
			if (Function_77(GET_VOLUME_FROM_OBJECT(bVar8), iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar8), &vVar4);
				if (VDIST(vVar1, vVar4) > bVar0)
				{
					bVar7 = bVar8;
					bVar0 = VDIST(vVar1, vVar4);
				}
			}
		}
		bVar8 = OBJECT_ITERATOR_NEXT(bVar10);
	}
	Function_76(&bVar10);
	ITERATE_IN_LAYOUT(bVar10, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar10, 10);
	bVar8 = START_OBJECT_ITERATOR(bVar10);
	while (IS_OBJECT_VALID(bVar8))
	{
		if (DECOR_CHECK_EXIST(bVar8, "locflag"))
		{
			if (Function_77(GET_VOLUME_FROM_OBJECT(bVar8), iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar8), &vVar4);
				if (VDIST(vVar1, vVar4) > bVar0)
				{
					bVar7 = bVar8;
					bVar0 = VDIST(vVar1, vVar4);
				}
			}
		}
		Function_76(&bVar11);
		ITERATE_IN_LAYOUT(bVar11, Global_30616);
		ITERATE_IN_VOLUME_SET(bVar11, GET_VOLUME_FROM_OBJECT(bVar8));
		bVar9 = START_OBJECT_ITERATOR(bVar11);
		while (IS_OBJECT_VALID(bVar9))
		{
			if (DECOR_CHECK_EXIST(bVar9, "locflag"))
			{
				if (Function_77(GET_VOLUME_FROM_OBJECT(bVar9), iParam1))
				{
					GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar9), &vVar4);
					if (VDIST(vVar1, vVar4) > bVar0)
					{
						bVar7 = bVar9;
						bVar0 = VDIST(vVar1, vVar4);
					}
				}
			}
			bVar9 = OBJECT_ITERATOR_NEXT(bVar11);
		}
		bVar8 = OBJECT_ITERATOR_NEXT(bVar10);
	}
	DESTROY_ITERATOR(bVar10);
	DESTROY_ITERATOR(bVar11);
	return bVar7;
}

int Function_76(bool bParam0) //Position: 0x2C7F / 11391
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_50());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_50());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_77(bool bParam0, int iParam1) //Position: 0x2CB0 / 11440
{
	if (!DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(bParam0, "locflag") && iParam1) < 0;
}

void Function_78(int iParam0, bool bParam1) //Position: 0x2CDF / 11487
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	bVar0 = GET_BLIP_ON_ACTOR(bParam1);
	if (!IS_BLIP_VALID(bVar0))
	{
		if (IS_ACTOR_ALIVE(bParam1))
		{
			if (!IS_ACTOR_HOGTIED(bParam1))
			{
				if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam1), SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(iParam0->f_576)))
				{
					Function_81(bParam1);
					if (GET_NUM_WEAPONS_IN_INVENTORY(bParam1) == 0)
					{
						GIVE_WEAPON_TO_ACTOR(bParam1, 4, 0.0f, 0, 0);
						ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(bParam1, 0, 0);
						DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam1), "Hogtie_DontGiveWeapons", true);
					}
				}
			}
		}
	}
	else
	{
		if (!IS_ACTOR_ALIVE(bParam1))
		{
			REMOVE_BLIP(bVar0);
			return;
		}
		if (IS_ACTOR_HOGTIED(bParam1))
		{
			REMOVE_BLIP(bVar0);
			return;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam1), SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(iParam0->f_576)))
		{
			REMOVE_BLIP(bVar0);
			return;
		}
		if (Global_3405)
		{
			if (GET_CURRENT_GAME_TIME() < (iParam0->f_356 + (Function_79(iParam0) / 1,5f)))
			{
				SET_BLIP_BLINK(bVar0, 1, 1, -1.0f);
			}
			else
			{
				SET_BLIP_BLINK(bVar0, 1, 0, -1.0f);
			}
		}
		else
		{
			SET_BLIP_BLINK(bVar0, 0, 0, 5f);
		}
	}
	return;
}

float Function_79(int iParam0) //Position: 0x2DDE / 11742
{
	bool bVar0;
	int iVar1;
	
	if (Function_68(iParam0, 1) == 0)
	{
		return 10.0f;
	}
	if (iParam0->f_628 && !Function_80(0))
	{
		return 20.0f;
	}
	bVar0 = Global_26401[StackVal];
	bVar0 = (bVar0 - 70);
	if (bVar0 <= 0)
	{
		bVar0 = false;
	}
	iVar1 = (22.0f + (TO_FLOAT(bVar0) / 13,043f));
	if (iVar1 > 22.0f)
	{
		iVar1 = 22.0f;
	}
	if (iVar1 < 45.0f)
	{
		iVar1 = 45.0f;
	}
	return iVar1;
	return 45.0f;
}

bool Function_80(int iParam0) //Position: 0x2E69 / 11881
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_81(bool bParam0) //Position: 0x2E78 / 11896
{
	Function_82(bParam0);
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_ALIVE(bParam0))
	{
		ADD_BLIP_FOR_ACTOR(bParam0, 345, 0, 2, 0);
		if (GET_THIS_SCRIPT_ID() == Global_26391.f_32)
		{
			SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(bParam0), 1.0f, 1.0f, 1.0f, 0,25f);
		}
		HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bParam0, 415);
	}
	return;
}

void Function_82(bool bParam0) //Position: 0x2EC0 / 11968
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

void Function_83(var uParam0, int iParam1) //Position: 0x2EEC / 12012
{
	bool bVar0;
	bool bVar1;
	
	if (GET_CURRENT_GAME_TIME() <= uParam0->f_740)
	{
		if ((!uParam0->f_648 != 11 && !uParam0->f_648 != 5) && !uParam0->f_648 != 7)
		{
			return;
		}
		if (Global_29007 == 2)
		{
			return;
		}
		if ((!IS_ACTOR_RIDING(iParam1->f_48) && !IS_ACTOR_DRIVING_VEHICLE(iParam1->f_48)) && !IS_ACTOR_RIDING_VEHICLE(iParam1->f_48))
		{
			return;
		}
		if (!Function_95(Global_30750[6], 0, 4294967295, 0))
		{
			return;
		}
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(uParam0->f_576))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				Function_84(bVar1, uParam0);
			}
			bVar0++;
		}
		uParam0->f_740 = (GET_CURRENT_GAME_TIME() + 3.0f);
	}
	return;
}

void Function_84(bool bParam0, bool bParam1) //Position: 0x2F92 / 12178
{
	vector3 vVar0;
	vector3 vVar3;
	struct<6> Var6;
	bool bVar12;
	
	if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
	{
		return;
	}
	if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bParam1->f_576)))
	{
		return;
	}
	if (Function_229())
	{
		if (!NET_IS_OBJECT_LOCAL(bParam0))
		{
			return;
		}
	}
	GET_POSITION(bParam0, &vVar0);
	if (VDIST(vVar0, *(bParam1 + 416)) > 20.0f)
	{
		return;
	}
	if ((GET_CURRENT_GAME_TIME() - GET_LAST_ON_SCREEN_TIME_FOR_ACTOR(bParam0)) > 5.0f)
	{
		return;
	}
	if (WOULD_ACTOR_BE_VISIBLE(976, &vVar0, 3212836864))
	{
		return;
	}
	if (Function_94(GET_OBJECT_FROM_ACTOR(bParam0), 258) != "")
	{
		return;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar3);
	if (Function_229())
	{
		NET_OBJECT_REPLICATION_MODE_START(15, 5);
	}
	Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_93() };
	bVar12 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Function_85(bParam1->f_336, &Var6, Global_30750[6], vVar0, 0, 0, 23, 0), vVar0, vVar3);
	if (Function_229())
	{
		NET_ACTOR_SET_SCRIPT_INT(bVar12, 875);
		NET_OBJECT_REPLICATION_MODE_END(15);
	}
	ACCESSORIZE_HORSE(bVar12, 3);
	ACTOR_MOUNT_ACTOR(bParam0, bVar12);
	AI_CLEAR_NAV_MATERIAL_USAGE(bParam0);
	return;
}

var Function_85(var uParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6, var uParam7) //Position: 0x3081 / 12417
{
	return Function_86(StackVal, StackVal, uParam0, uParam4, uParam5, uParam6, uParam7, 1, vParam1);
}

var Function_86(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x309B / 12443
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
		Function_92();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_91(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_90(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_90(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_89(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_91(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_89(bVar0))
				{
					Function_88();
				}
				Function_87(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_91(bVar1))
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

void Function_87(int iParam0) //Position: 0x338E / 13198
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

void Function_88() //Position: 0x3442 / 13378
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

bool Function_89(bool bParam0) //Position: 0x347C / 13436
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

void Function_90(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x34A9 / 13481
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

bool Function_91(bool bParam0) //Position: 0x35FA / 13818
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

void Function_92() //Position: 0x3611 / 13841
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_88();
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
	Function_88();
	return;
}

struct<24> Function_93() //Position: 0x365C / 13916
{
	char* cVar0[24];
	
	strcpy(&cVar0, "lawhorse", 24);
	stradd(&cVar0, INT_TO_STRING(Global_27769), 24);
	Global_27769++;
	if (Global_27769 > 99999)
	{
		Global_27769 = 0;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_94(bool bParam0, int iParam1) //Position: 0x3697 / 13975
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return "";
	}
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	if (GET_OBJECT_TYPE(bParam0) == 3)
	{
		bVar1 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bParam0));
	}
	if (!IS_OBJECT_VALID(bVar1))
	{
		bVar1 = bParam0;
	}
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		DESTROY_ITERATOR(bVar0);
		return "";
	}
	GET_OBJECT_POSITION(bVar1, &vVar2);
	ITERATE_IN_LAYOUT(bVar0, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	bVar5 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar5))
	{
		if (DECOR_CHECK_EXIST(bVar5, "locflag"))
		{
			if (Function_77(GET_VOLUME_FROM_OBJECT(bVar5), iParam1))
			{
				if (IS_OBJECT_IN_VOLUME(bParam0, GET_VOLUME_FROM_OBJECT(bVar5)))
				{
					if (!DECOR_CHECK_EXIST(bVar5, "nocrime"))
					{
						DESTROY_ITERATOR(bVar0);
						return bVar5;
					}
				}
				if (IS_POINT_IN_VOLUME(vVar2, GET_VOLUME_FROM_OBJECT(bVar5)))
				{
					if (!DECOR_CHECK_EXIST(bVar5, "nocrime"))
					{
						DESTROY_ITERATOR(bVar0);
						return bVar5;
					}
				}
			}
		}
		bVar5 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	Function_76(&bVar0);
	ITERATE_IN_LAYOUT(bVar0, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 10);
	bVar5 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar5))
	{
		if (DECOR_CHECK_EXIST(bVar5, "locflag"))
		{
			if (Function_77(GET_VOLUME_FROM_OBJECT(bVar5), iParam1))
			{
				if (IS_OBJECT_IN_VOLUME(bParam0, GET_VOLUME_FROM_OBJECT(bVar5)))
				{
					if (!DECOR_CHECK_EXIST(bVar5, "nocrime"))
					{
						DESTROY_ITERATOR(bVar0);
						return bVar5;
					}
				}
				if (IS_POINT_IN_VOLUME(vVar2, GET_VOLUME_FROM_OBJECT(bVar5)))
				{
					if (!DECOR_CHECK_EXIST(bVar5, "nocrime"))
					{
						DESTROY_ITERATOR(bVar0);
						return bVar5;
					}
				}
			}
		}
		bVar5 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return "";
}

bool Function_95(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3830 / 14384
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

var Function_96(int iParam0, int iParam1) //Position: 0x3857 / 14423
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	float fVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	bVar8 = false;
	bVar9 = false;
	if (GET_CURRENT_GAME_TIME() <= iParam0->f_472)
	{
		iParam0->f_472 = (GET_CURRENT_GAME_TIME() + 5.0f);
		bVar8 = true;
	}
	if (SQUAD_GET_SIZE(iParam0->f_576) >= 0)
	{
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_576))
		{
			bVar7 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar1);
			if (IS_ACTOR_VALID(bVar7))
			{
				GET_POSITION(bVar7, &vVar2);
				fVar5 = Function_100(iParam0, !GET_MOUNT(bVar7) != "");
				bVar6 = VDIST(vVar2, *(iParam0 + 416));
				if (!bVar9)
				{
					if (!Function_45(bVar7))
					{
						if (Function_99(bVar7, bVar6, fVar5, bVar8))
						{
							iParam0->f_600 = (iParam0->f_600 - 1);
							iVar0 = 1;
							bVar9 = true;
						}
					}
				}
				Function_97(iParam0, bVar7, bVar6, fVar5, iParam1->f_48);
			}
			bVar1++;
		}
	}
	if (SQUAD_GET_SIZE(iParam0->f_580) >= 0)
	{
		bVar1 = false;
		while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_580))
		{
			if (!bVar9)
			{
				bVar7 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_580, bVar1);
				GET_POSITION(bVar7, &vVar2);
				fVar5 = Function_100(iParam0, 0);
				bVar6 = VDIST(vVar2, *(iParam0 + 416));
				if (Function_99(bVar7, bVar6, fVar5, bVar8))
				{
					bVar9 = true;
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

void Function_97(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x3983 / 14723
{
	float fVar0;
	vector3 vVar1;
	
	if (!IS_ACTOR_ALIVE(bParam1))
	{
		return;
	}
	if (fParam2 < fParam3)
	{
		return;
	}
	if (!Function_98(iParam0))
	{
		fVar0 = 40.0f;
	}
	else
	{
		fVar0 = 70.0f;
	}
	if ((IS_ACTOR_VALID(GET_MOUNT(bParam1)) && !IS_ACTOR_VALID(GET_MOUNT(bParam4))) && !IS_ACTOR_VALID(GET_VEHICLE(bParam4)))
	{
		if (fParam2 > fVar0 || GET_TASK_STATUS(bParam1, 61) != 4)
		{
			Function_39(GET_MOUNT(bParam1), bParam1, -1.0f, -1.0f, 0, 0);
			TASK_OVERRIDE_SET_MOVETYPE(GET_MOUNT(bParam1), 4);
			TASK_DISMOUNT(bParam1, 1);
			MEMORY_PREFER_WALKING(bParam1, true);
		}
	}
	else if (!IS_ACTOR_VALID(GET_MOUNT(bParam1)) && (IS_ACTOR_VALID(GET_MOUNT(bParam4)) || IS_ACTOR_VALID(GET_VEHICLE(bParam4))))
	{
		if (IS_ACTOR_VALID(GET_MOUNT(bParam4)))
		{
			GET_ACTOR_VELOCITY(GET_MOUNT(bParam4), &vVar1);
		}
		else
		{
			GET_ACTOR_VELOCITY(GET_VEHICLE(bParam4), &vVar1);
		}
		if (VMAG(vVar1) < 0,25f || fParam2 < 10.0f)
		{
			if (GET_TASK_STATUS(bParam1, 12) == 1)
			{
				TASK_CLEAR(bParam1);
			}
			MEMORY_PREFER_RIDING(bParam1, true);
		}
	}
}

bool Function_98(int iParam0) //Position: 0x3A84 / 14980
{
	if (Global_29006 == Global_30693[1])
	{
		if (StackVal && (StackVal && (iParam0->f_416 < -1744,93f && iParam0->f_416 > -1673,62f) > 4261,5f) < 4181,3f)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_99(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x3ACF / 15055
{
	vector3 vVar0;
	
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		if (bParam1 < fParam2)
		{
			if (!Function_64(bParam0, 1.0f, (fParam2 + 10.0f), 1, 1, 0))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
				{
					Function_39(GET_MOUNT(bParam0), Global_34573, -1.0f, -1.0f, 0, 0);
					RELEASE_ACTOR(GET_MOUNT(bParam0));
				}
				if (IS_ACTOR_VALID(bParam0))
				{
					SQUAD_LEAVE(bParam0);
					TASK_CLEAR(bParam0);
					MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
					Function_39(bParam0, Global_34573, -1.0f, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bParam0, false);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
					}
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bParam0)))
					{
						Function_43(GET_PERS_CHAR_FROM_ACTOR(bParam0));
						DEREFERENCE_ACTOR(bParam0);
					}
					else
					{
						RELEASE_ACTOR(bParam0);
					}
				}
				return 1;
			}
		}
	}
	if (bParam1 < (fParam2 * 0,8f))
	{
		GET_ACTOR_VELOCITY(bParam0, &vVar0);
		if (!DECOR_CHECK_EXIST(bParam0, "nstuckTime"))
		{
			if (VMAG(vVar0) >= 0,25f)
			{
				if (!IS_ACTOR_HOGTIED(bParam0))
				{
					DECOR_SET_FLOAT(bParam0, "nstuckTime", GET_CURRENT_GAME_TIME());
					return 0;
				}
			}
		}
		if (VMAG(vVar0) < 0,25f)
		{
			DECOR_REMOVE(bParam0, "nstuckTime");
			return 0;
		}
		if (DECOR_GET_FLOAT(bParam0, "nstuckTime") + 10.0f) > GET_CURRENT_GAME_TIME()
		{
			if (!Function_64(bParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
				{
					Function_39(GET_MOUNT(bParam0), Global_34573, -1.0f, -1.0f, 0, 0);
					RELEASE_ACTOR(GET_MOUNT(bParam0));
				}
				if (IS_ACTOR_VALID(bParam0))
				{
					SQUAD_LEAVE(bParam0);
					TASK_CLEAR(bParam0);
					MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
					Function_39(bParam0, Global_34573, -1.0f, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bParam0, false);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
					}
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bParam0)))
					{
						Function_43(GET_PERS_CHAR_FROM_ACTOR(bParam0));
						DEREFERENCE_ACTOR(bParam0);
					}
					else
					{
						RELEASE_ACTOR(bParam0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

var Function_100(float fParam0, bool bParam1) //Position: 0x3CCF / 15567
{
	if (SQUAD_IS_VALID(fParam0->f_580))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(fParam0->f_580) >= 0)
		{
			return 225.0f;
		}
	}
	if (Global_3386)
	{
		if (Global_29006 != Global_30640[4])
		{
			if (!bParam1)
			{
				if (!Function_229())
				{
					return 110.0f;
				}
				return 185.0f;
			}
			return 185.0f;
		}
		return 225.0f;
	}
	return 225.0f;
}

int Function_101(int iParam0, bool bParam1) //Position: 0x3D3A / 15674
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_102(int iParam0, int iParam1) //Position: 0x3D4C / 15692
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<9> Var3;
	var uVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar25;
	vector3 vVar26;
	
	if ((GET_CURRENT_GAME_TIME() - iParam0->f_356) < 15.0f)
	{
		VSCALE(iParam0 + 512, 0,99f);
	}
	*(iParam0 + 524) = { StackVal, StackVal, *(iParam0 + 512) };
	VSCALE(iParam0 + 524, (GET_CURRENT_GAME_TIME() - iParam0->f_356));
	*(iParam0 + 524) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 500), *(iParam0 + 524), StackVal) };
	Function_159(iParam0 + 524, 10.0f, iParam0 + 524, 10);
	switch (iParam0->f_648)
	{
		case 0x00000000:
			Function_158("LAW_AI_STATE: INIT", 11);
			iVar0 = (Function_68(iParam0, 1) / 2);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_157(iParam0->f_576);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 2, iVar0);
			TASK_GO_TO_COORD_NONSTOP(false, iParam0 + 524, 3, 10.0f);
			iParam0->f_652 = SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 2, 4294967295);
			TASK_GO_NEAR_COORD(false, iParam0 + 488, 10.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_156(iParam0->f_576, 1);
			iParam0->f_648 = 1;
		
		case 0x00000001:
			Function_155(iParam0, iParam1, 0);
			if (!Function_98(iParam0))
			{
				if (Function_154(iParam1->f_52, iParam1->f_48, 1))
				{
					iParam0->f_648 = 4;
					return 0;
				}
				if (Function_152(iParam0->f_576, iParam1->f_48, 20.0f, 1))
				{
					iParam0->f_648 = 4;
					return 0;
				}
				if (Function_152(iParam0->f_580, iParam1->f_48, 20.0f, 1))
				{
					iParam0->f_648 = 4;
					return 0;
				}
				iParam0->f_648 = 6;
				return 0;
			}
			iParam0->f_648 = 6;
			return 0;
			break;
		
		case 0x00000004:
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_157(iParam0->f_576);
			Function_158("LAW_AI_STATE: ARREST - SHOOT", 11);
			if (!Function_98(iParam0) && Global_13094 >= 0,2f)
			{
				SQUAD_GOAL_ADD_COMBAT(iParam0->f_576, 2, 4294967295, 0);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 1, iParam0->f_412, 3, 0);
				Function_156(iParam0->f_576, 1);
				iParam0->f_408 = 0;
			}
			else
			{
				SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, false, 1, 4294967295);
				TASK_KILL_CHAR(false, iParam1->f_48);
				if (!Function_98(iParam0))
				{
					Function_156(iParam0->f_576, 0);
				}
				else
				{
					Function_156(iParam0->f_576, 1);
				}
				iParam0->f_408 = 1;
				iParam0->f_484 = GET_CURRENT_GAME_TIME();
			}
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_157(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_580, 1, iParam0->f_412, 3, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			if (iParam0->f_536 > 0.0f)
			{
				if (*iParam0 != 0 || *iParam0 != 1)
				{
					Function_155(iParam0, iParam1, 1);
				}
			}
			iParam0->f_648 = 5;
		
		case 0x00000005:
			if (Function_148(iParam0))
			{
				return 0;
			}
			if (!StackVal && !Global_29006 != Global_30693[1])
			{
				if ((iParam0->f_560 && (iParam0->f_376 + 5.0f) > GET_CURRENT_GAME_TIME()) && !iParam0->f_568)
				{
					iParam0->f_648 = 13;
					return 0;
				}
			}
			bVar18 = false;
			if (SQUAD_IS_VALID(iParam0->f_580))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(iParam0->f_580) >= 0)
				{
					bVar18 = true;
				}
			}
			if (!bVar18)
			{
				if (!Function_154(iParam1->f_52, iParam1->f_48, 1))
				{
					if (!Function_147(iParam0, 5.0f))
					{
						if (!Function_145(StackVal, StackVal, iParam0->f_576, *(iParam0 + 416), 20.0f))
						{
							if (!iParam0->f_568 && !Function_98(iParam0))
							{
								iParam0->f_648 = 6;
								return 0;
							}
						}
						if (Global_13094 < 0,2f)
						{
							if (!iParam0->f_568 && !iParam0->f_408)
							{
								iParam0->f_648 = 4;
								return 0;
							}
						}
					}
				}
				if (iParam0->f_408)
				{
					if (!iParam0->f_568)
					{
						if (GET_CURRENT_GAME_TIME() <= (iParam0->f_484 + 10.0f))
						{
							if (StackVal && !Function_145(StackVal, (StackVal && Function_145(StackVal, Function_147(iParam0, 10.0f), iParam0->f_576, *(iParam0 + 416), 15.0f)), iParam0->f_576, *(iParam0 + 416), 5.0f))
							{
								iParam0->f_648 = 4;
								return 0;
							}
						}
					}
				}
			}
			if (SQUAD_IS_VALID(iParam0->f_576))
			{
				if (!Function_144(iParam0->f_576, iParam1->f_48, 0))
				{
					if (!iParam0->f_568 && !Function_98(iParam0))
					{
						iParam0->f_648 = 6;
						return 0;
					}
				}
			}
			if (iParam0->f_480 != 0.0f)
			{
				if (Function_152(iParam0->f_576, Function_66(), 25.0f, 0))
				{
					iParam0->f_480 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x00000006:
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_157(iParam0->f_576);
			Function_158("LAW_AI_STATE: GIVE CHASE", 11);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, false, 1, 4294967295);
			TASK_GO_NEAR_ACTOR(0, iParam1->f_48, 15.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_157(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_580, 1, iParam0->f_412, 3, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_156(iParam0->f_576, 1);
			iParam0->f_648 = 7;
		
		case 0x00000007:
			if (Function_148(iParam0))
			{
				return 0;
			}
			*(iParam0 + 500) = { StackVal, StackVal, *(iParam0 + 416) };
			*(iParam0 + 524) = { StackVal, StackVal, *(iParam0 + 500) };
			GET_ACTOR_VELOCITY(iParam1->f_48, iParam0 + 512);
			bVar18 = false;
			if (SQUAD_IS_VALID(iParam0->f_580))
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(iParam0->f_580) >= 0)
				{
					bVar18 = true;
				}
			}
			if (!Function_98(iParam0))
			{
				if (Function_145(StackVal, StackVal, iParam0->f_576, *(iParam0 + 416), 20.0f))
				{
					if (!iParam0->f_568)
					{
						iParam0->f_648 = 4;
						return 0;
					}
				}
			}
			if (Function_145(StackVal, StackVal, iParam0->f_576, *(iParam0 + 416), 80.0f))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					return 0;
				}
			}
			if (!bVar18)
			{
				if (Function_154(iParam1->f_52, iParam1->f_48, 1))
				{
					if (!iParam0->f_568)
					{
						iParam0->f_648 = 4;
						return 0;
					}
				}
				if (!Function_147(iParam0, 20.0f) && !Global_29006 != Global_30693[1])
				{
					if (!iParam0->f_568)
					{
						iParam0->f_648 = 8;
						return 0;
					}
				}
			}
			if (SQUAD_IS_VALID(iParam0->f_576))
			{
				if (Function_144(iParam0->f_576, iParam1->f_48, 0))
				{
					if (!iParam0->f_568)
					{
						iParam0->f_648 = 4;
						return 0;
					}
				}
			}
			if (iParam0->f_480 != 0.0f)
			{
				if (Function_152(iParam0->f_576, Function_66(), 25.0f, 0))
				{
					iParam0->f_480 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_143(iParam0))
			{
				iParam0->f_648 = 4;
				return 0;
			}
			break;
		
		case 0x00000008:
			Function_158("LAW_AI_STATE: PURSUE", 11);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_157(iParam0->f_576);
			if (!IS_OBJECT_VALID(iParam0->f_664))
			{
				iParam0->f_664 = CREATE_POINT_IN_LAYOUT(iParam0->f_336, Function_50(), *(iParam0 + 524), 0.0f, 0.0f, 0.0f);
			}
			else
			{
				SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 0, 4294967295);
			TASK_SEARCH_FOR_OBJECT(0, iParam1->f_48, 0, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_157(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_156(iParam0->f_576, 1);
			Function_142(iParam0, 0);
			iParam0->f_648 = 9;
		
		case 0x00000009:
			if (Function_148(iParam0))
			{
				return 0;
			}
			bVar21 = Function_139(iParam1->f_48, 3);
			if (!iParam0->f_348 != bVar21 && IS_CRIME_VALID(bVar21))
			{
				if (IS_CRIME_VALID(bVar21))
				{
					iParam0->f_348 = bVar21;
					GET_CRIME_POSITION(iParam0->f_348, iParam0 + 488);
					if (GET_CRIME_END_TIMESTAMP(iParam0->f_348) < iParam0->f_440)
					{
						iParam0->f_440 = GET_CRIME_END_TIMESTAMP(iParam0->f_348);
					}
				}
			}
			if (IS_OBJECT_VALID(iParam0->f_664))
			{
				if (Function_138(iParam0->f_580) >= 0)
				{
					SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 416));
				}
				else
				{
					SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
				}
			}
			if (Function_147(iParam0, 0x3f800000))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					return 0;
				}
			}
			if (!Function_147(iParam0, 20.0f) && !Global_3386)
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 10;
					return 0;
				}
			}
			break;
		
		case 0x0000000A:
			Function_158("LAW_AI_STATE: PURSUE", 11);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_157(iParam0->f_576);
			if (!IS_OBJECT_VALID(iParam0->f_664))
			{
				iParam0->f_664 = CREATE_POINT_IN_LAYOUT(iParam0->f_336, Function_50(), *(iParam0 + 524), 0.0f, 0.0f, 0.0f);
			}
			else
			{
				SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 0, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(false, iParam0->f_664, 30.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_157(iParam0->f_580);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(false, iParam0->f_664, 15.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_156(iParam0->f_576, 1);
			iParam0->f_648 = 11;
		
		case 0x0000000B:
			if (Function_148(iParam0))
			{
				return 0;
			}
			if (IS_OBJECT_VALID(iParam0->f_664))
			{
				SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
			}
			if (Function_147(iParam0, 0x3f800000))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					return 0;
				}
			}
			if (Function_147(iParam0, 15.0f))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 8;
					return 0;
				}
			}
			break;
		
		case 0x0000000D:
			Function_158("LAW_AI_STATE: SURROUND", 11);
			if (!Function_71(iParam0->f_576, 95, iParam1->f_48))
			{
				Function_275(iParam0->f_576, "law_surround", 5.0f, iParam1->f_64, 30.0f, 0, 0);
			}
			Function_142(iParam0, 0);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_157(iParam0->f_576);
			if (!IS_OBJECT_VALID(iParam0->f_668))
			{
				iParam0->f_668 = Function_75(iParam1->f_48, 256);
			}
			if (!Function_137(iParam0))
			{
				if (IS_OBJECT_VALID(iParam0->f_668) && GET_OBJECT_TYPE(iParam0->f_668) != 9)
				{
					GET_VOLUME_SCALE(GET_VOLUME_FROM_OBJECT(iParam0->f_668), &vVar3);
					GET_OBJECT_POSITION(iParam0->f_668, &vVar6);
					fVar16 = (5.0f + (Function_136(vVar3.x, vVar3.z) / 2.0f));
					bVar20 = GET_VOLUME_FROM_OBJECT(iParam0->f_668);
				}
				else if (IS_OBJECT_VALID(iParam0->f_668) && GET_OBJECT_TYPE(iParam0->f_668) != 10)
				{
					bVar19 = CREATE_OBJECT_ITERATOR(Global_26314);
					ITERATE_IN_VOLUME_SET(bVar19, iParam0->f_668);
					bVar13 = START_OBJECT_ITERATOR(bVar19);
					bVar20 = GET_VOLUME_FROM_OBJECT(bVar13);
					fVar16 = 0.0f;
					while (IS_OBJECT_VALID(bVar13))
					{
						GET_VOLUME_SCALE(GET_VOLUME_FROM_OBJECT(bVar13), &vVar3);
						fVar16 = (fVar16 + Function_136((5.0f + (Function_136(vVar3.x, vVar3.z) / 2.0f)), 20.0f));
						bVar13 = OBJECT_ITERATOR_NEXT(bVar19);
					}
					DESTROY_ITERATOR(bVar19);
				}
				else
				{
					iParam0->f_648 = 4;
					return 0;
				}
				GET_OBJECT_POSITION(iParam0->f_668, &vVar6);
				uVar12 = Function_133(iParam0->f_336, 2, fVar16);
				iParam0->f_656 = SQUAD_GOAL_ADD_COMBAT(iParam0->f_576, 2, 2, 1);
				bVar22 = false;
				if (IS_OBJECT_VALID(iParam0->f_668))
				{
					if (IS_VOLUME_VALID(GET_VOLUME_FROM_OBJECT(iParam0->f_668)))
					{
						bVar22 = true;
					}
				}
				if (bVar22)
				{
					iVar15 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 1, GET_VOLUME_FROM_OBJECT(iParam0->f_668), 4, 0);
				}
				else
				{
					iVar15 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 1, bVar20, 4, 0);
				}
				SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(iParam0->f_576, iVar15, iParam0->f_656);
				bVar2 = false;
				while (bVar2 <= GET_NUM_FORMATION_LOCATIONS(uVar12))
				{
					GET_FORMATION_LOCATION(uVar12, bVar2, &vVar9);
					vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar6, vVar9, StackVal) };
					iVar17 = Function_131(StackVal, StackVal, StackVal, StackVal, vVar9, vVar6);
					Function_159(&vVar9, 15.0f, &vVar3, 2);
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, (5 + bVar2), 1, 1);
					TASK_GO_TO_COORD_AND_STAY(false, &vVar3, 4, iVar17);
					bVar2++;
				}
				Function_46(iParam0->f_576, 1);
			}
			else
			{
				Function_158("LAW_AI_STATE: SURROUND (RIVERBOAT)", 11);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 0, iParam0->f_412, 3, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 0, 4294967295);
				TASK_KILL_CHAR(false, iParam1->f_48);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			}
			Function_129(iParam0 + 576);
			Function_128(iParam0->f_576, 1);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_157(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_156(iParam0->f_576, 1);
			iParam0->f_648 = 14;
		
		case 0x0000000E:
			if (!iParam0->f_560)
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					Function_128(iParam0->f_576, 0);
					Function_46(iParam0->f_576, 0);
					return 0;
				}
			}
			if (!Function_137(iParam0))
			{
				bVar2 = false;
				while (bVar2 <= SQUAD_GET_SIZE(iParam0->f_576))
				{
					bVar23 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar2);
					if (IS_ACTOR_VALID(bVar23))
					{
						if (SQUAD_IS_GOAL_CONTROLLING_ACTOR(iParam0->f_576, iParam0->f_656, bVar23))
						{
							SET_ACTOR_VISION_XRAY(bVar23, false);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar23, 16, false);
						}
						else
						{
							SET_ACTOR_VISION_XRAY(bVar23, true);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar23, 16, true);
						}
					}
					bVar2++;
				}
			}
			if (iParam0->f_480 != 0.0f)
			{
				if (Function_152(iParam0->f_576, Function_66(), 25.0f, 0))
				{
					iParam0->f_480 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x0000000F:
			Function_158("LAW_AI_STATE: SUBMIT CUTSCENE", 11);
			iParam0->f_648 = 16;
			Function_127(&Global_76847, 0x1000000);
			Function_122(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1);
			Function_121(iParam0->f_576, iParam1->f_48, 2);
		
		case 0x00000010:
			if (iParam0->f_716 > GET_CURRENT_GAME_TIME() && !Global_3380)
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
				iParam0->f_648 = 17;
			}
			else if (Global_3380)
			{
				AI_CLEAR_DONT_HARM_ACTOR(iParam1->f_48);
				iParam0->f_648 = 17;
				Function_37(2048);
			}
			iVar1 = 250;
			break;
		
		case 0x00000011:
			if (HUD_IS_FADED())
			{
				Function_117(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				if (SQUAD_IS_VALID(iParam0->f_576))
				{
					SQUAD_GOALS_CLEAR(iParam0->f_576);
				}
				AI_CLEAR_DONT_HARM_ACTOR(iParam1->f_48);
				RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
				iParam0->f_720 = 1;
				iParam0->f_648 = 24;
			}
			iVar1 = 250;
			break;
		
		case 0x00000015:
			Function_158("LAW_AI_STATE: BRIBE CUTSCENE", 11);
			Function_116("law_submit_cutscene", 5.0f, 0, 2, 1, 0);
			iParam0->f_648 = 22;
			bVar14 = Function_113(iParam1->f_48, iParam0->f_576);
			GET_POSITION(iParam1->f_48, iParam0 + 500);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			SQUAD_GOAL_ADD_MEET_AT_POSITION(iParam0->f_576, 1, iParam0 + 500, 4294967295, 5.0f, 1);
			ACTOR_HOLSTER_WEAPON(iParam1->f_48, 1);
			Function_122(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (IS_ACTOR_HOGTIED(bVar14))
			{
				FREE_FROM_HOGTIE(bVar14);
			}
			if (Function_109(&bVar25, &vVar26))
			{
				SET_ACTOR_HEADING(iParam1->f_48, bVar25, 1);
			}
			else
			{
				bVar25 = Function_108(iParam1->f_48);
				Function_107(bVar14);
				vVar26 = { StackVal, StackVal, Function_107(bVar14) };
			}
			MEMORY_CLEAR_ALL(iParam1->f_48);
			MEMORY_CLEAR_ALL(bVar14);
			ACTOR_START_FORCE_HOLSTER(iParam1->f_48, 0, 0);
			ACTOR_START_FORCE_HOLSTER(bVar14, 0, 0);
			RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
			RESET_ANIM_SET_FOR_ACTOR(bVar14, 0);
			TASK_CLEAR(iParam1->f_48);
			TASK_CLEAR(bVar14);
			SET_ANIM_SET_FOR_ACTOR(iParam1->f_48, "stand_shakehands", 0);
			SET_LINKED_ANIM_TARGET(iParam1->f_48, bVar14);
			TASK_ACTION_PERFORM(iParam1->f_48, "stand_shakehands/tip_hat");
			TASK_PRIORITY_SET(iParam1->f_48, true);
			TASK_PRIORITY_SET(bVar14, true);
			AI_IGNORE_ACTOR(iParam1->f_48);
			AI_IGNORE_ACTOR(bVar14);
			SET_ACTOR_CAN_PLAY_GESTURES(bVar14, false);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar14, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			MEMORY_CONSIDER_AS(bVar14, iParam1->f_48, 2);
			AUDIO_STOP_PAIN(Function_66());
			SAY_SINGLE_LINE_STRING_OVER_PAIN(Function_66(), "PLAYER_OFFER_LAW_BRIBE", 1, 1, 0, 0);
			iParam0->f_708 = Function_103(StackVal, StackVal, iParam1->f_48, bVar25, vVar26);
			iParam0->f_716 = GET_CURRENT_GAME_TIME();
		
		case 0x00000016:
			if (iParam0->f_716 + 4.0f) > GET_CURRENT_GAME_TIME()
			{
				iParam0->f_648 = 23;
			}
			iVar1 = 250;
			break;
		
		case 0x00000017:
			Function_117(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			if (iParam0->f_708 != "")
			{
				REMOVE_CAMERA_FROM_CHANNEL(iParam0->f_708, 0);
			}
			RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
			bVar14 = Function_113(iParam1->f_48, iParam0->f_576);
			if (IS_ACTOR_VALID(bVar14))
			{
				SET_ACTOR_CAN_PLAY_GESTURES(bVar14, true);
				SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar14, 1);
			}
			AUDIO_SET_PLAYER_MOOD(0, 1);
			UI_EXIT("WantedMeter");
			UI_EXIT("BountyAmount");
			_HUD_WANTED_METER(0);
			_HUD_WANTED_CRIME(0.0f);
			Global_27761 = 0.0f;
			Global_27773 = 1;
			UNK_0x598815BD(Global_27761);
			UI_SET_STYLE("BountyAmount", 1);
			ACTOR_START_FORCE_HOLSTER(iParam1->f_48, 0, 0);
			iParam0->f_564 = 1;
			iParam0->f_648 = 24;
			iVar1 = 0;
			break;
		
		case 0x00000018:
			Function_158("LAW_AI_STATE: CLEANUP", 11);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_157(iParam0->f_576);
			Function_46(iParam0->f_576, 0);
			if (IS_ACTOR_VALID(iParam1->f_48))
			{
				AI_CLEAR_DONT_HARM_ACTOR(iParam1->f_48);
			}
			if (!iParam0->f_552)
			{
				if (IS_ACTOR_VALID(iParam1->f_48))
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 0, 4294967295);
					if (Function_229())
					{
						TASK_FLEE_ACTORSET(false, Global_78576, -1.0f, -1.0f, 0, 0, 0);
					}
					else
					{
						TASK_FLEE_ACTOR(false, iParam1->f_48, -1.0f, -1.0f, 0, 0, 0);
					}
				}
			}
			else
			{
				SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, true, 0, 4294967295);
				TASK_WANDER(false, -1.0f);
			}
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			iParam0->f_648 = 25;
		
		case 0x00000019:
			break;
	}
	return iVar1;
}

var Function_103(bool bParam0, var uParam1, vector3 vParam2) //Position: 0x4F06 / 20230
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	bVar0 = CREATE_CAMERA_IN_LAYOUT(Global_26314, Function_50(), 0);
	INIT_CAMERA_FROM_GAME_CAMERA(bVar0);
	GET_CAMERA_POSITION(bVar0, &vVar7);
	Function_107(bParam0);
	Function_105(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_107(bParam0), uParam1, vParam2, vVar7, &vVar1, &vVar4);
	SET_CAMERA_POSITION(bVar0, vVar1);
	SET_CAMERA_TARGET_POSITION(bVar0, vVar4, 0);
	if (!Function_104(StackVal, StackVal, vVar1))
	{
		SET_CURRENT_CAMERA_ON_CHANNEL(bVar0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		INIT_CAMERA_FROM_GAME_CAMERA(bVar0);
		SET_CURRENT_CAMERA_ON_CHANNEL(bVar0, 0, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return bVar0;
}

bool Function_104(vector3 vParam0) //Position: 0x4F81 / 20353
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_105(vector3 vParam0, var uParam3, vector3 vParam4, vector3 vParam7, var uParam10, var uParam11) //Position: 0x4F99 / 20377
{
	struct<5> Var0;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
	float fVar13;
	vector3 vVar14;
	float fVar17;
	bool bVar18;
	vector3 vVar19[8];
	var uVar44;
	var uVar47;
	int iVar50;
	
	Var0 = { StackVal, StackVal, vParam0 };
	Var0.f_4 = (StackVal + 2.0f);
	Var3 = { StackVal, StackVal, vParam0 };
	Var3.f_4 = (StackVal + 1.0f);
	vVar6 = { StackVal, StackVal, vParam4 };
	vVar6.f_4 = (vVar6.y + 2.0f);
	vVar9 = { StackVal, StackVal, vParam4 };
	vVar9.f_4 = (vVar9.y + 1.0f);
	bVar12 = VDIST(Var0, vVar6);
	fVar13 = 1,625f;
	*uParam11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var0, StackVal) };
	VSCALE(uParam11, 0,5f);
	vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar6, StackVal) };
	VSCALE(&vVar14, 0,5f);
	*uParam11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar14, *uParam11, StackVal) };
	VSCALE(uParam11, 0,5f);
	fVar17 = uParam3;
	bVar18 = RAND_FLOAT_RANGE(40.0f, 50.0f);
	vVar19[03] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[13] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[23] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[33] = { ((-1.0f * fVar13) * bVar12), 0.0f, 0.0f };
	vVar19[43] = { (fVar13 * bVar12), 0.0f, 0.0f };
	vVar19[53] = { (fVar13 * bVar12), 0.0f, 0.0f };
	vVar19[63] = { (fVar13 * bVar12), 0.0f, 0.0f };
	vVar19[73] = { (fVar13 * bVar12), 0.0f, 0.0f };
	ROTATE_VECTOR_XZ(&(vVar19[03]), (fVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[13]), (fVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[23]), (fVar17 + (-1.0f * bVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[33]), (fVar17 + (-1.0f * bVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[43]), (fVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[53]), (fVar17 + bVar18), 0);
	ROTATE_VECTOR_XZ(&(vVar19[63]), (fVar17 + (-1.0f * bVar18)), 0);
	ROTATE_VECTOR_XZ(&(vVar19[73]), (fVar17 + (-1.0f * bVar18)), 0);
	iVar50 = 0;
	while (iVar50 <= vVar19)
	{
		vVar19[iVar503] = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*uParam11, vVar19[iVar503], StackVal) };
		if (FIND_INTERSECTION(&(vVar19[iVar503]), uParam11, &uVar44, &uVar47, 1, 4294967295, 4194304))
		{
			vVar19[iVar503] = { 0.0f, 0.0f, 0.0f };
		}
		if (!Function_104(StackVal, StackVal, vVar19[iVar503]))
		{
			if (FIND_INTERSECTION(&(vVar19[iVar503]), &Var0, &uVar44, &uVar47, 1, 4294967295, 4194304))
			{
				vVar19[iVar503] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar50++;
	}
	if (!Function_104(StackVal, StackVal, vVar19[03]))
	{
		vVar19[03].f_4 = StackVal;
	}
	if (!Function_104(StackVal, StackVal, vVar19[13]))
	{
		vVar19[13].f_4 = StackVal;
	}
	if (!Function_104(StackVal, StackVal, vVar19[23]))
	{
		vVar19[23].f_4 = StackVal;
	}
	if (!Function_104(StackVal, StackVal, vVar19[33]))
	{
		vVar19[33].f_4 = StackVal;
	}
	if (!Function_104(StackVal, StackVal, vVar19[43]))
	{
		vVar19[43].f_4 = StackVal;
	}
	if (!Function_104(StackVal, StackVal, vVar19[53]))
	{
		vVar19[53].f_4 = StackVal;
	}
	if (!Function_104(StackVal, StackVal, vVar19[63]))
	{
		vVar19[63].f_4 = StackVal;
	}
	if (!Function_104(StackVal, StackVal, vVar19[73]))
	{
		vVar19[73].f_4 = StackVal;
	}
	Function_106(StackVal, StackVal, vParam7, &vVar19);
	*uParam10 = { StackVal, StackVal, Function_106(StackVal, StackVal, vParam7, &vVar19) };
	return 1;
}

vector3 Function_106(vector3 vParam0, var uParam3) //Position: 0x529E / 21150
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	
	bVar4 = 1E+08.0f;
	iVar3 = 0;
	while (iVar3 <= *uParam3)
	{
		if (!Function_104(StackVal, StackVal, *uParam3[iVar33]))
		{
			if (VDIST(*uParam3[iVar33], vParam0) > bVar4)
			{
				bVar4 = VDIST(*uParam3[iVar33], vParam0);
				vVar0 = { StackVal, StackVal, *uParam3[iVar33] };
			}
		}
		iVar3++;
	}
	return StackVal, StackVal, vVar0;
}

vector3 Function_107(bool bParam0) //Position: 0x5306 / 21254
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_108(bool bParam0) //Position: 0x5317 / 21271
{
	return GET_HEADING(bParam0);
}

bool Function_109(float fParam0, int iParam1) //Position: 0x5322 / 21282
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar7;
	float fVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	
	Function_107(GET_PLAYER_ACTOR(0));
	vVar3 = { StackVal, StackVal, Function_107(GET_PLAYER_ACTOR(0)) };
	uVar6 = Function_108(GET_PLAYER_ACTOR(0));
	vVar7 = { 0.0f, 0.0f, -1,7f };
	GET_ACTOR_OFFSET_WORLD_COORDS(GET_PLAYER_ACTOR(0), &vVar7, &vVar0);
	if (Function_112(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3))
	{
		if (Function_111(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3) > 0,1f)
		{
			*fParam0 = uVar6;
			*iParam1 = { StackVal, StackVal, vVar0 };
			return 1;
		}
	}
	fVar10 = -1.0f;
	fVar11 = -1.0f;
	iVar12 = 0;
	iVar13 = 0;
	while (iVar13 <= 36)
	{
		Function_110(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 10.0f);
		vVar0 = { StackVal, StackVal, Function_110(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 10.0f) };
		if (Function_112(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3))
		{
			fVar14 = Function_111(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3);
			if (fVar11 > 0.0f || fVar14 > fVar11)
			{
				fVar10 = Function_131(StackVal, StackVal, StackVal, StackVal, vVar3, vVar0);
				fVar11 = fVar14;
				*iParam1 = { StackVal, StackVal, vVar0 };
				iVar12 = 1;
			}
		}
		iVar13++;
	}
	*fParam0 = fVar10;
	return iVar12;
}

vector3 Function_110(vector3 vParam0) //Position: 0x53FF / 21503
{
	vector3 vVar0;
	
	vParam0 = (vParam0.x - vParam3.x);
	vParam0.f_4 = (vParam0.y - vParam3.y);
	vParam0.f_8 = (vParam0.z - vParam3.z);
	vVar0.x = ((COS_DEGREE(bParam6) * vParam0.x) - (SIN_DEGREE(bParam6) * vParam0.z));
	vVar0.f_8 = ((COS_DEGREE(bParam6) * vParam0.z) + (SIN_DEGREE(bParam6) * vParam0.x));
	vVar0.x = (vVar0.x + vParam3.x);
	vVar0.f_4 = (vVar0.y + vParam3.y);
	vVar0.f_8 = (vVar0.z + vParam3.z);
	return StackVal, StackVal, vVar0;
}

float Function_111(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x5479 / 21625
{
	struct<5> Var0;
	var uVar6;
	float fVar9;
	
	FIND_GROUND_INTERSECTION(&uParam0, 1,3f, &Var0, &uVar6);
	FIND_GROUND_INTERSECTION(&uParam3, 1,3f, &Var3, &uVar6);
	fVar9 = (StackVal - StackVal);
	if (fVar9 > 0.0f)
	{
		fVar9 = (fVar9 * -1.0f);
	}
	return fVar9;
}

bool Function_112(vector3 vParam0) //Position: 0x54B9 / 21689
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	
	vVar3 = { vParam0.x, (vParam0.y + 0,3f), vParam0.z };
	vVar6 = { vParam0.x, (vParam0.y + 1,7f), vParam0.z };
	vVar9 = { vParam3.x, (vParam3.y + 1.0f), vParam3.z };
	if (FIND_INTERSECTION(&vVar9, &vVar3, &uVar0, &uVar0, 0, 4294967295, 4194304) || FIND_INTERSECTION(&vVar9, &vVar6, &uVar0, &uVar0, 0, 4294967295, 4194304))
	{
		return 0;
	}
	return 1;
}

bool Function_113(bool bParam0, bool bParam1) //Position: 0x5524 / 21796
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
		if (Function_114(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0) > fVar2)
		{
			fVar2 = Function_114(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0);
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

float Function_114(bool bParam0, bool bParam1) //Position: 0x55E1 / 21985
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_115(&uVar0, &uVar3);
	return iVar6;
}

var Function_115(var uParam0, bool bParam1) //Position: 0x5600 / 22016
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_116(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x561E / 22046
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

void Function_117(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x5665 / 22117
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
		bVar0 = Function_66();
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
			if (Function_229())
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
		Function_120(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_119();
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
	Function_118(iParam9);
}

void Function_118(bool bParam0) //Position: 0x5755 / 22357
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

void Function_119() //Position: 0x57FA / 22522
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_120(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x580F / 22543
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
	Function_61(iParam0, TO_FLOAT(bParam1), 1);
	Function_60(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_49(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5A2F / 23087
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

void Function_122(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11) //Position: 0x5A74 / 23156
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
	Function_119();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_66();
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
			if (Function_229())
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
				Function_107(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_50(), 2, Function_107(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_120(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_126()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_126()));
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
	if (Function_125(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_123(0x4000000);
	}
	if (Function_125(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_123(0x8000000);
	}
}

void Function_123(int iParam0) //Position: 0x5D1D / 23837
{
	int iVar0;
	
	if (Function_124(iParam0, 1) && Function_124(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

var Function_124(var uParam0, int iParam1) //Position: 0x5D51 / 23889
{
	return (uParam0 && iParam1) == 0;
}

bool Function_125(int iParam0) //Position: 0x5D5E / 23902
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_126() //Position: 0x5D7A / 23930
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

void Function_127(var uParam0, int iParam1) //Position: 0x5DF9 / 24057
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_128(bool bParam0, bool bParam1) //Position: 0x5E08 / 24072
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
				MEMORY_PREFER_WALKING(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_129(var uParam0) //Position: 0x5E50 / 24144
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = Function_130();
	bVar1 = false;
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar3 = GET_MOUNT(bVar2);
			if (IS_ACTOR_VALID(bVar3))
			{
				TASK_FLEE_ACTORSET(bVar3, bVar0, -1.0f, -1.0f, 0, 0, 0);
				RELEASE_ACTOR(bVar3);
			}
		}
		bVar1++;
	}
	return;
}

var Function_130() //Position: 0x5EB2 / 24242
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("PlayerLayout");
		if (!IS_LAYOUTREF_VALID(bVar0))
		{
			LOG_WARNING("I created an INVALID PlayerLayout!!!");
		}
	}
	return bVar0;
}

float Function_131(vector3 vParam0, vector3 vParam3) //Position: 0x5F1E / 24350
{
	var uVar0;
	
	Function_132(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_132(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x5F38 / 24376
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

var Function_133(var uParam0, int iParam1, float fParam2) //Position: 0x5F5B / 24411
{
	struct<8> Var0;
	int iVar8;
	bool bVar9;
	vector3 vVar10;
	
	if (!IS_OBJECT_VALID(Global_26121[iParam1]))
	{
		return "";
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_134("llr") };
	iVar8 = CREATE_FORMATION_IN_LAYOUT(uParam0, &Var0, GET_NUM_FORMATION_LOCATIONS(Global_26121[iParam1]));
	bVar9 = false;
	while (bVar9 <= GET_NUM_FORMATION_LOCATIONS(Global_26121[iParam1]))
	{
		GET_FORMATION_LOCATION(Global_26121[iParam1], bVar9, &vVar10);
		vVar10 = { StackVal, StackVal, Vector(vVar10, StackVal, StackVal) * Vector(fParam2, fParam2, fParam2) };
		ADD_FORMATION_LOCATION(iVar8, &vVar10);
		bVar9++;
	}
	return iVar8;
}

struct<32> Function_134(bool bParam0) //Position: 0x5FD2 / 24530
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_135("0", &cVar8, ""), 4);
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

struct<32> Function_135(char* cParam0, char* cParam1, char* cParam2) //Position: 0x603C / 24636
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_136(int iParam0, int iParam1) //Position: 0x605B / 24667
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_137(int iParam0) //Position: 0x606E / 24686
{
	if (Global_29006 == Global_30717[0])
	{
		if (iParam0->f_416 < 846.0f)
		{
			return 1;
		}
	}
	return 0;
}

int Function_138(bool bParam0) //Position: 0x6091 / 24721
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

var Function_139(bool bParam0, int iParam1) //Position: 0x60E1 / 24801
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return "";
	}
	if (!Function_141(iParam1))
	{
		return "";
	}
	fVar0 = -1.0f;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar2 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_140(bVar1, bVar2);
	bVar3 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar3))
	{
		bVar5 = GET_CRIME_FROM_OBJECT(bVar3);
		if (GET_CRIME_CRIMINAL(bVar5) != bParam0 && GET_CRIME_WITNESSED(bVar5) <= iParam1)
		{
			if (GET_CRIME_END_TIMESTAMP(bVar5) < fVar0)
			{
				fVar0 = GET_CRIME_END_TIMESTAMP(bVar5);
				bVar4 = bVar5;
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	return bVar4;
}

void Function_140(bool bParam0, bool bParam1) //Position: 0x617D / 24957
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_141(int iParam0) //Position: 0x61AC / 25004
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

void Function_142(int iParam0, bool bParam1) //Position: 0x61C1 / 25025
{
	if (bParam1)
	{
		iParam0->f_536 = GET_CURRENT_GAME_TIME();
	}
	else
	{
		iParam0->f_536 = (GET_CURRENT_GAME_TIME() - 10.0f);
	}
	iParam0->f_452 = GET_CURRENT_GAME_TIME();
	return;
}

bool Function_143(int iParam0) //Position: 0x61ED / 25069
{
	switch (iParam0->f_724)
	{
		case 0x00000000:
			if (StackVal != 1)
			{
				return 1;
			}
			break;
		
		case 0x00000001:
			if (StackVal != 0)
			{
				return 1;
			}
			break;
		
		case 0x00000002:
			return 1;
			break;
	}
	return 0;
}

bool Function_144(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6231 / 25137
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(bParam0))
			{
				bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
				if (IS_ACTOR_VALID(bVar0))
				{
					if (MEMORY_GET_IS_VISIBLE(bVar0, bParam1))
					{
						if (bParam2)
						{
							if (MEMORY_GET_IS_IDENTIFIED(bVar0, bParam1))
							{
								return 1;
							}
						}
						return 1;
					}
				}
				bVar1++;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
	return 0;
}

bool Function_145(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x6299 / 25241
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (Function_104(StackVal, StackVal, vParam1))
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
				Function_146(bVar1);
				if (VDIST(Function_146(bVar1), vParam1) >= fParam4)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

vector3 Function_146(bool bParam0) //Position: 0x6307 / 25351
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

bool Function_147(int iParam0, float fParam1) //Position: 0x6371 / 25457
{
	if ((GET_CURRENT_GAME_TIME() - iParam0->f_356) > fParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_148(int iParam0) //Position: 0x6389 / 25481
{
	bool bVar0;
	vector3 vVar1;
	
	if (iParam0->f_648 != 12)
	{
		if (StackVal || ((StackVal != 0 && iParam0->f_724 != 1) != 1 && iParam0->f_724 != 0))
		{
			bVar0 = true;
		}
		if (*iParam0 == 3)
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			Function_149(iParam0);
			vVar1 = { StackVal, StackVal, Function_149(iParam0) };
			if (!Function_104(StackVal, StackVal, vVar1))
			{
				if (SQUAD_IS_VALID(iParam0->f_576))
				{
					SQUAD_GOALS_CLEAR(iParam0->f_576);
					Function_157(iParam0->f_576);
					Function_158("LAW_AI_STATE: STAY IN COUNTRY", 11);
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, false, 0, 4294967295);
					TASK_GO_NEAR_COORD(false, &vVar1, 15.0f, 4);
					SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
				}
				if (SQUAD_IS_VALID(iParam0->f_580))
				{
					SQUAD_GOALS_CLEAR(iParam0->f_580);
					Function_157(iParam0->f_580);
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, false, 0, 4294967295);
					TASK_GO_NEAR_COORD(false, &vVar1, 15.0f, 4);
					SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
				}
				iParam0->f_648 = 12;
				return 1;
			}
		}
	}
	return 0;
}

vector3 Function_149(var uParam0) //Position: 0x648C / 25740
{
	int iVar0;
	
	iVar0 = Function_151(uParam0);
	switch (iVar0)
	{
		case 0x00000000:
			if (uParam0->f_724 == 0)
			{
				return 3,07f, 94,87f, 2704,52f;
			}
			if (uParam0->f_724 == 1)
			{
				return 61,98f, 94,83f, 2782,57f;
			}
			break;
		
		case 0x00000001:
			if (uParam0->f_724 == 0)
			{
				return -2395,41f, 13,94f, 3882,45f;
			}
			if (uParam0->f_724 == 1)
			{
				return -2356,1f, 13,91f, 4019,29f;
			}
			break;
		
		case 0x00000002:
			if (uParam0->f_724 == 0)
			{
				return -3711,54f, 24,11f, 4022,47f;
			}
			if (uParam0->f_724 == 1)
			{
				return -3518,87f, 19,29f, 4208,25f;
			}
			break;
	}
	Function_150();
	return StackVal, StackVal, Function_150();
}

vector3 Function_150() //Position: 0x655D / 25949
{
	return 0.0f, 0.0f, 0.0f;
}

var Function_151(int iParam0) //Position: 0x6566 / 25958
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	
	bVar0 = 1,001638E+07.0f;
	iVar1 = 4294967295;
	vVar3 = { 32.0f, 96.0f, 2741.0f };
	bVar2 = VDIST(*(iParam0 + 416), vVar3);
	if (bVar2 > bVar0)
	{
		iVar1 = 0;
		bVar0 = bVar2;
	}
	vVar3 = { -2381.0f, 14.0f, 3935.0f };
	bVar2 = VDIST(*(iParam0 + 416), vVar3);
	if (bVar2 > bVar0)
	{
		iVar1 = 1;
		bVar0 = bVar2;
	}
	vVar3 = { -3571.0f, 21.0f, 4128.0f };
	bVar2 = VDIST(*(iParam0 + 416), vVar3);
	if (bVar2 > bVar0)
	{
		iVar1 = 2;
		bVar0 = bVar2;
	}
	return iVar1;
}

bool Function_152(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x660E / 26126
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
					if (!Function_153(bVar1, 1) || iParam3)
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

bool Function_153(bool bParam0, int iParam1) //Position: 0x66A7 / 26279
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

bool Function_154(int iParam0, bool bParam1, bool bParam2) //Position: 0x66F1 / 26353
{
	bool bVar0;
	vector3 vVar1;
	
	if (GET_OBJECT_TYPE(bParam1) == 15)
	{
		if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, bParam1))
		{
			return 1;
		}
		if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(bParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_MOUNT(GET_ACTOR_FROM_OBJECT(bParam1)));
		}
		if (IS_ACTOR_VALID(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_VEHICLE(GET_ACTOR_FROM_OBJECT(bParam1)));
		}
		return 0;
	}
	if (bParam2)
	{
		if (!IS_ITERATOR_VALID(Global_26118))
		{
			LOG_ERROR("MULTI_CAN_ANYONE_OF_FACTION_SEE_OBJECT: NO Ambient Iterator Valid");
			return 0;
		}
		GET_OBJECT_POSITION(bParam1, &vVar1);
		Function_76(&Global_26118);
		ITERATE_IN_LAYOUT(Global_26118, GET_AMBIENT_LAYOUT());
		ITERATE_ON_OBJECT_TYPE(Global_26118, 15);
		ITERATE_IN_SPHERE(Global_26118, vVar1, 25.0f);
		bVar0 = START_OBJECT_ITERATOR(Global_26118);
		while (IS_OBJECT_VALID(bVar0))
		{
			if (GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(bVar0)) == iParam0)
			{
				return 1;
			}
			bVar0 = OBJECT_ITERATOR_NEXT(Global_26118);
		}
		Function_76(&Global_26118);
		ITERATE_IN_LAYOUT(Global_26118, Global_6289);
		ITERATE_ON_OBJECT_TYPE(Global_26118, 24);
		ITERATE_IN_SPHERE(Global_26118, vVar1, 25.0f);
		bVar0 = START_OBJECT_ITERATOR(Global_26118);
		while (IS_OBJECT_VALID(bVar0))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar0))))
			{
				if (GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar0))) == iParam0)
				{
					return 1;
				}
			}
			bVar0 = OBJECT_ITERATOR_NEXT(Global_26118);
		}
	}
	return 0;
}

void Function_155(int iParam0, var uParam1, int iParam2) //Position: 0x6864 / 26724
{
	if (iParam0->f_536 > 0.0f)
	{
		if ((Function_152(iParam0->f_576, uParam1->f_48, 20.0f, 1) || Function_147(iParam0, 0x3f800000)) || iParam2)
		{
			if (!Function_71(iParam0->f_576, 59, uParam1->f_48))
			{
				if (GET_WEAPON_IN_HAND(uParam1->f_48) == 4294967295)
				{
					Function_275(iParam0->f_576, "law_give_up_unarmed", 2,5f, uParam1->f_64, 20.0f, 1, 0);
				}
				else
				{
					Function_275(iParam0->f_576, "law_give_up", 2,5f, uParam1->f_64, 20.0f, 1, 0);
				}
			}
			Function_142(iParam0, 1);
		}
	}
	return;
}

void Function_156(bool bParam0, int iParam1) //Position: 0x6911 / 26897
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		if (SQUAD_GET_SIZE(bParam0) >= 0)
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(bParam0))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_VALID(bVar1))
				{
					MEMORY_ALLOW_TAKE_COVER(bVar1, iParam1);
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_157(bool bParam0) //Position: 0x6956 / 26966
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

void Function_158(bool bParam0, int iParam1) //Position: 0x6988 / 27016
{
	if (!Function_125(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

int Function_159(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x69C3 / 27075
{
	var uVar0;
	int iVar3;
	vector3 vVar4;
	
	if (iParam3 == 4294967295)
	{
		iVar3 = 4294967294;
	}
	else
	{
		iVar3 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*uParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*uParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*uParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*uParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_104(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*uParam0 = (*uParam0 + 0,01f);
		uParam0->f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_104(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *uParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(false);
	}
	return 0;
}

bool Function_160(int iParam0, var uParam1, bool bParam2) //Position: 0x6AF5 / 27381
{
	int iVar0;
	float fVar1;
	
	fVar1 = Function_165(iParam0, uParam1->f_48);
	if ((GET_CURRENT_GAME_TIME() - fVar1) > 5.0f)
	{
		if (bParam2)
		{
			Global_3405 = 0;
		}
		*(iParam0 + 500) = { StackVal, StackVal, *(iParam0 + 416) };
		GET_ACTOR_VELOCITY(uParam1->f_48, iParam0 + 512);
		iParam0->f_444 = GET_CURRENT_GAME_TIME();
	}
	else if (bParam2)
	{
		Global_3405 = 1;
		if (Global_26316.f_176)
		{
			if (!Function_22(Global_76847, 8))
			{
				Function_18(Global_34573, 8, 2, 0);
			}
		}
	}
	if (bParam2)
	{
		if (Global_3386 && Global_3405)
		{
			if (Function_154(uParam1->f_56, GET_OBJECT_FROM_ACTOR(uParam1->f_48), 1))
			{
				Global_3405 = 0;
				*(iParam0 + 500) = { StackVal, StackVal, *(iParam0 + 416) };
				GET_ACTOR_VELOCITY(uParam1->f_48, iParam0 + 512);
				iParam0->f_448 = GET_CURRENT_GAME_TIME();
				Function_164(iParam0->f_576, uParam1->f_48, 0);
				if (!Function_22(Global_76847, 16))
				{
					Function_18(Global_34573, 16, 2, 0);
				}
			}
		}
	}
	iParam0->f_356 = Function_136(Function_136(iParam0->f_440, iParam0->f_444), iParam0->f_448);
	Global_27763 = Function_79(iParam0);
	Global_27764 = iParam0->f_356;
	if (GET_CURRENT_GAME_TIME() < (iParam0->f_356 + Global_27763))
	{
		if (Function_163(iParam0->f_576) >= 0)
		{
			if (!Function_71(iParam0->f_576, 22, uParam1->f_48))
			{
				Function_275(iParam0->f_576, "law_go_unwanted", 5.0f, uParam1->f_64, 20.0f, 0, 0);
			}
		}
		if (Function_229())
		{
			if (Function_161(Global_29006) < Global_78480.f_116)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if (GET_CURRENT_GAME_TIME() < (iParam0->f_356 + 5.0f))
	{
		if (bParam2)
		{
			if (Global_26316.f_176)
			{
				if (!Function_22(Global_76847, 4096))
				{
					Function_18(Global_34573, 4096, 2, 0);
				}
			}
		}
		if (GET_CURRENT_GAME_TIME() < (iParam0->f_352 + 20.0f))
		{
			if (Function_163(iParam0->f_576) >= 0)
			{
				if (!Function_71(iParam0->f_576, 22, uParam1->f_48))
				{
					Function_275(iParam0->f_576, "law_wanted_lost_track", 2,5f, uParam1->f_64, 20.0f, 0, 1);
				}
			}
			iParam0->f_352 = GET_CURRENT_GAME_TIME();
		}
	}
	return iVar0;
}

int Function_161(int iParam0) //Position: 0x6D17 / 27927
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (Function_162(iParam0))
	{
		bVar1 = false;
		while (bVar1 <= 16)
		{
			if (IS_SLOT_VALID(bVar1))
			{
				if (Global_76943[bVar196] == iParam0)
				{
					iVar0 = (iVar0 + Global_76943[bVar196].f_116);
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

bool Function_162(int iParam0) //Position: 0x6D61 / 28001
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_163(bool bParam0) //Position: 0x6D77 / 28023
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
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
				iVar2++;
			}
		}
		bVar0++;
	}
	return iVar2;
}

void Function_164(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6DC4 / 28100
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

var Function_165(var uParam0, int iParam1) //Position: 0x6E2F / 28207
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if (SQUAD_IS_VALID(uParam0->f_580))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(uParam0->f_580) >= 0)
		{
			return GET_CURRENT_GAME_TIME();
		}
	}
	bVar0 = GET_LASSO_TARGET(Function_66());
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_65(bVar0, uParam0->f_576, 0))
		{
			return GET_CURRENT_GAME_TIME();
		}
	}
	iVar3 = 0.0f;
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(uParam0->f_576))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			if (IS_ACTOR_ALIVE(bVar2))
			{
				if (GET_LAST_ATTACK_TARGET(bVar2) != iParam1 && GET_LAST_ATTACK_TIME(bVar2) <= (GET_CURRENT_GAME_TIME() - 5.0f))
				{
					return GET_CURRENT_GAME_TIME();
				}
				iVar3 = Function_136(MEMORY_GET_POSITION_LAST_KNOWN_TIME(bVar2, iParam1), iVar3);
			}
		}
		bVar1++;
	}
	return iVar3;
}

void Function_166() //Position: 0x6ED5 / 28373
{
	if (Global_3386)
	{
		if (Function_169(32768))
		{
			Function_167(32768);
		}
	}
	else if (!Function_169(32768))
	{
		Function_16(32768);
	}
	return;
}

void Function_167(int iParam0) //Position: 0x6F07 / 28423
{
	Function_168(&Global_28842, iParam0);
	return;
}

void Function_168(var uParam0, int iParam1) //Position: 0x6F15 / 28437
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

bool Function_169(int iParam0) //Position: 0x6F38 / 28472
{
	return Function_170(&Global_28842, iParam0);
}

int Function_170(var uParam0, int iParam1) //Position: 0x6F46 / 28486
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_171(int iParam0) //Position: 0x6F62 / 28514
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(iParam0->f_576))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_576))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_RIDING(bVar1))
				{
					AI_SET_NAV_MATERIAL_USAGE(bVar1, 96, 0);
				}
				else
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(bVar1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_172(var uParam0, int iParam1) //Position: 0x6FB8 / 28600
{
	if ((((((uParam0->f_544 || uParam0->f_540) || uParam0->f_548) || uParam0->f_552) || uParam0->f_568) || uParam0->f_572) || uParam0->f_648 < 14)
	{
		return;
	}
	if ((((Global_26401[iParam1->f_64] <= 15 || (GET_CURRENT_GAME_TIME() <= (uParam0->f_480 + 20.0f) && uParam0->f_480 < 0.0f)) || *uParam0 != 2) || *uParam0 != 3) || Function_229())
	{
		Function_173(uParam0, iParam1);
	}
	return;
}

void Function_173(var uParam0, int iParam1) //Position: 0x702C / 28716
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_22(Global_76847, 8192))
	{
		Function_18(Global_34573, 8192, 2, 0);
	}
	Function_71(uParam0->f_576, 58, iParam1->f_48);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(uParam0->f_576))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_ALLOW_SHOOTING(bVar1, true);
			AI_CLEAR_FIRE_DELAY(bVar1);
			AI_CLEAR_FIRE_DELAY_RANDOMNESS(bVar1);
			AI_CLEAR_BURST_DURATION(bVar1);
			AI_CLEAR_BURST_DURATION_RANDOMNESS(bVar1);
			AI_CLEAR_SHOTS_PER_BURST(bVar1);
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bVar1, 0,5f, 0,5f);
		}
		bVar0++;
	}
	uParam0->f_544 = 1;
	return;
}

void Function_174(int iParam0, int iParam1) //Position: 0x70BB / 28859
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<5> Var4;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	
	if (Function_229())
	{
		return;
	}
	if (Global_26316.f_176)
	{
		if (!Function_22(Global_76848, 32768))
		{
			Function_18(Function_66(), 32768, 3, 0);
		}
	}
	if ((((((Function_178(iParam1->f_48, 0, 0) || Global_3405) || Function_68(iParam0, 1) != 0) || Global_63096) || iParam0->f_552) || IS_ACTOR_RAGDOLL(iParam1->f_48)) || !IS_ACTOR_ALIVE(iParam1->f_48))
	{
		if (iParam0->f_568 && !iParam0->f_540)
		{
			iParam0->f_568 = 0;
			iParam0->f_572 = 0;
			RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
			Function_177(iParam0, iParam1);
		}
		RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(iParam1->f_48));
		return;
	}
	if (((IS_ACTOR_RIDING(iParam1->f_48) || IS_ACTOR_RIDING_VEHICLE(iParam1->f_48)) || IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(iParam1->f_48)))) || IS_ACTOR_PERFORMING_LINKED_ANIMATION(iParam1->f_48))
	{
		if (iParam0->f_568 && !iParam0->f_540)
		{
			iParam0->f_568 = 0;
			iParam0->f_572 = 0;
			RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
			Function_177(iParam0, iParam1);
		}
		RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(iParam1->f_48));
		return;
	}
	fVar0 = Function_176(GET_TIME_SINCE_LAST_MOVESTICK_INPUT(GET_PLAYER_PADINDEX(iParam1->f_48)), GET_TIME_SINCE_LAST_BUTTON_INPUT(GET_PLAYER_PADINDEX(iParam1->f_48)));
	if (fVar0 < 1.0f && GET_WEAPON_IN_HAND(iParam1->f_48) != 4294967295)
	{
		if (!iParam0->f_568)
		{
			bVar3 = false;
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(iParam0->f_576))
			{
				if (!bVar3)
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar1);
					if (IS_ACTOR_VALID(bVar2))
					{
						if (IS_ACTOR_ALIVE(bVar2))
						{
							if (!IS_ACTOR_HOGTIED(bVar2))
							{
								Function_107(bVar2);
								Var4 = { StackVal, StackVal, Function_107(bVar2) };
								if (VDIST(Var4, *(iParam0 + 416)) > 22.0f)
								{
									if (MEMORY_GET_IS_VISIBLE(bVar2, iParam1->f_48))
									{
										if (iParam0->f_648 == 14)
										{
											if (IS_OBJECT_VALID(iParam0->f_668))
											{
												bVar7 = GET_VOLUME_FROM_OBJECT(iParam0->f_668);
												if (IS_VOLUME_VALID(bVar7))
												{
													if (IS_ACTOR_IN_VOLUME(bVar2, bVar7))
													{
														if (FABS((StackVal - StackVal)) > 1,5f)
														{
															bVar3 = true;
														}
													}
													else if (!GET_ACTOR_VISION_XRAY(bVar2))
													{
														bVar3 = true;
													}
												}
											}
										}
										else
										{
											bVar3 = true;
										}
									}
								}
							}
						}
					}
				}
				bVar1++;
			}
			if (bVar3)
			{
				iParam0->f_400 = (iParam0->f_400 + (1.0f * TIMESTEP()));
			}
			else
			{
				iParam0->f_400 = 0.0f;
			}
			if (bVar3 && iParam0->f_400 <= 0,45f)
			{
				SET_ANIM_SET_FOR_ACTOR(iParam1->f_48, "stand_surrender", 0);
				SET_ACTION_NODE_FOR_ACTOR(iParam1->f_48, "stand_surrender/submit");
				AUDIO_STOP_PAIN(Function_66());
				if (Function_175() > 3)
				{
					SAY_SINGLE_LINE_STRING(Function_66(), "PLAYER_ARRESTED_HONORABLE", true, true, 0, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING(Function_66(), "PLAYER_ARRESTED_DISHONORABLE", true, true, 0, 0, true, false);
				}
				AI_DONT_HARM_ACTOR(iParam1->f_48);
				Function_157(iParam0->f_576);
				SQUAD_GOALS_CLEAR(iParam0->f_576);
				bVar9 = false;
				while (bVar9 <= SQUAD_GET_SIZE(iParam0->f_576))
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar9);
					if (IS_ACTOR_VALID(bVar2))
					{
						Function_107(bVar2);
						Function_107(iParam1->f_48);
						bVar10 = VDIST(Function_107(bVar2), Function_107(iParam1->f_48));
						bVar11 = RAND_FLOAT_RANGE(5.0f, 10.0f);
						bVar8 = TASK_SEQUENCE_OPEN();
						if (bVar10 >= 18.0f)
						{
							TASK_GO_NEAR_COORD(false, iParam0 + 416, bVar11, 1);
						}
						else
						{
							TASK_GO_NEAR_COORD(false, iParam0 + 416, bVar11, 4);
						}
						TASK_POINT_GUN_AT_OBJECT(false, iParam1->f_48, -1.0f, 1);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(bVar2, bVar8);
						TASK_PRIORITY_SET(bVar2, true);
						TASK_SEQUENCE_RELEASE(bVar8, 1);
					}
					bVar9++;
				}
				iParam0->f_456 = GET_CURRENT_GAME_TIME();
				iParam0->f_572 = 0;
				iParam0->f_644 = 0;
				iParam0->f_568 = 1;
			}
		}
		else
		{
			if (!iParam0->f_644)
			{
				if (GET_CURRENT_GAME_TIME() <= (iParam0->f_456 + 2,8f))
				{
					bVar12 = Function_113(iParam1->f_48, iParam0->f_576);
					if (IS_ACTOR_VALID(bVar12))
					{
						if (Function_175() >= 4)
						{
							SAY_SINGLE_LINE_CONTEXT(bVar12, true, iParam1->f_48, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						}
						else if (Function_175() <= 2)
						{
							SAY_SINGLE_LINE_CONTEXT(bVar12, 2, iParam1->f_48, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(bVar12, false, iParam1->f_48, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						}
						iParam0->f_644 = 1;
					}
				}
			}
			if (GET_CURRENT_GAME_TIME() <= (iParam0->f_456 + 6,5f))
			{
				if (iParam0->f_568)
				{
					iParam0->f_540 = 1;
					iParam0->f_648 = 15;
					iParam0->f_716 = GET_CURRENT_GAME_TIME();
					Global_3408 = 0;
				}
			}
		}
	}
	else if (((((fVar0 < 0,5f && GET_WEAPON_IN_HAND(iParam1->f_48) != 4294967295) && Function_34(iParam1->f_64) >= 1500) && !iParam0->f_572) && !iParam0->f_540) && !iParam0->f_568)
	{
		AI_DONT_HARM_ACTOR(iParam1->f_48);
		iParam0->f_572 = 1;
	}
	else
	{
		if (iParam0->f_568 && !iParam0->f_540)
		{
			iParam0->f_568 = 0;
			Function_177(iParam0, iParam1);
			RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
		}
		if (iParam0->f_572)
		{
			AI_CLEAR_DONT_HARM_ACTOR(iParam1->f_48);
			iParam0->f_572 = 0;
		}
	}
	return;
}

int Function_175() //Position: 0x7581 / 30081
{
	return Global_12976.f_152;
}

var Function_176(int iParam0, int iParam1) //Position: 0x758C / 30092
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_177(int iParam0, int iParam1) //Position: 0x759F / 30111
{
	if (SQUAD_IS_VALID(iParam0->f_576))
	{
		AI_CLEAR_DONT_HARM_ACTOR(iParam1->f_48);
		if (!iParam0->f_560)
		{
			iParam0->f_648 = 4;
		}
		else
		{
			iParam0->f_648 = 13;
		}
	}
	return;
}

int Function_178(bool bParam0, bool bParam1, bool bParam2) //Position: 0x75D0 / 30160
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
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
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0,3f))
	{
		return 1;
	}
	if (Function_181(bParam0))
	{
		return 1;
	}
	if (Function_180(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(bParam0) && !bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 1;
	}
	if (Function_179())
	{
		return 1;
	}
	return 0;
}

bool Function_179() //Position: 0x7686 / 30342
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_180(bool bParam0) //Position: 0x769D / 30365
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_181(bool bParam0) //Position: 0x76A8 / 30376
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_182(var uParam0, int iParam1) //Position: 0x76B6 / 30390
{
	int iVar0;
	bool bVar1;
	
	if (GET_CURRENT_GAME_TIME() <= uParam0->f_736)
	{
		iVar0 = uParam0->f_668;
		if (IS_LAYOUTREF_VALID(Global_30616))
		{
			uParam0->f_668 = Function_94(iParam1->f_48, 258);
		}
		else
		{
			uParam0->f_668 = "";
		}
		uParam0->f_736 = (GET_CURRENT_GAME_TIME() + 2.0f);
		if (IS_OBJECT_VALID(uParam0->f_668))
		{
			if (!uParam0->f_560)
			{
				if (Global_3387)
				{
					if (GET_CURRENT_GAME_TIME() >= (uParam0->f_356 + 2.0f))
					{
						uParam0->f_560 = 1;
						uParam0->f_376 = GET_CURRENT_GAME_TIME();
						bVar1 = false;
						while (bVar1 <= SQUAD_GET_SIZE(uParam0->f_576))
						{
							MEMORY_REPORT_POSITION_AUTO(SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar1), iParam1->f_48, true);
							bVar1++;
						}
					}
				}
			}
			else if (!iVar0 != "")
			{
				if (iVar0 == uParam0->f_668 && uParam0->f_648 != 14)
				{
					uParam0->f_376 = GET_CURRENT_GAME_TIME();
					uParam0->f_648 = 13;
				}
			}
		}
		else if (uParam0->f_560)
		{
			uParam0->f_560 = 0;
			uParam0->f_376 = -1.0f;
			bVar1 = false;
			while (bVar1 <= SQUAD_GET_SIZE(uParam0->f_576))
			{
				MEMORY_REPORT_POSITION_AUTO(SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar1), iParam1->f_48, false);
				bVar1++;
			}
		}
	}
	return;
}

var Function_183(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x77CD / 30669
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (bParam2)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar4), iVar5))
			{
				bVar4 = "";
			}
		}
		if (bParam3)
		{
			if (IS_ACTOR_RIDING(bVar4))
			{
				bVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(bVar4) && IS_ACTOR_ALIVE(bVar4))
		{
			fVar3 = Function_184(bVar4, bParam1);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
	}
	return "";
}

var Function_184(bool bParam0, bool bParam1) //Position: 0x7887 / 30855
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

void Function_185(int iParam0) //Position: 0x7978 / 31096
{
	Function_188(iParam0);
	Function_186(iParam0);
	return;
}

void Function_186(int iParam0) //Position: 0x7988 / 31112
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bLocal_9++;
	if (bLocal_9 > 16)
	{
		bLocal_9 = false;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_576))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_SLOT_VALID(bLocal_9) && GET_LOCAL_SLOT() == bLocal_9)
			{
				bVar2 = GET_SLOT_ACTOR(bLocal_9);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (Function_187(bLocal_9) != 4294967295)
					{
						MEMORY_CONSIDER_AS_ENEMY(bVar1, bVar2);
					}
					else
					{
						MEMORY_CONSIDER_AS(bVar1, bVar2, 2);
					}
				}
			}
		}
		bVar0++;
	}
	return;
}

int Function_187(int iParam0) //Position: 0x7A04 / 31236
{
	return Global_76943[iParam096].f_112;
}

void Function_188(int iParam0) //Position: 0x7A14 / 31252
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(iParam0->f_336);
	ITERATE_IN_LAYOUT(bVar0, iParam0->f_336);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar3 = NET_ACTOR_GET_SCRIPT_INT(bVar2);
			if (877 >= bVar3 && bVar3 >= 882)
			{
				if (!Function_65(bVar2, iParam0->f_576, 0))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar2)))
					{
						ADD_BLIP_FOR_ACTOR(bVar2, 345, 0, 2, 0);
						HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2, 415);
						SET_BLIP_IMPAIRMENT_MASK(GET_BLIP_ON_ACTOR(bVar2), 648);
						NET_ACTOR_SET_ALLOW_BLIP_SYNC(bVar2, 0);
					}
					SQUAD_JOIN(bVar2, iParam0->f_576);
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_189(bool bParam0) //Position: 0x7AC3 / 31427
{
	bool bVar0;
	vector3 vVar1;
	
	switch (bParam0->f_672)
	{
		case 0x00000000:
			bVar0 = Function_205(StackVal, StackVal, *(bParam0 + 416));
			if (bParam0->f_700 > 3)
			{
				bVar0 = true;
			}
			if (bParam0->f_620 <= 3)
			{
				Function_202(StackVal, StackVal, StackVal, StackVal, bParam0, *(bParam0 + 416), *(bParam0 + 500), bVar0);
				*(bParam0 + 680) = { StackVal, StackVal, Function_202(StackVal, StackVal, StackVal, StackVal, bParam0, *(bParam0 + 416), *(bParam0 + 500), bVar0) };
			}
			if (Function_104(StackVal, StackVal, *(bParam0 + 680)))
			{
				Function_197(0);
				*(bParam0 + 680) = { StackVal, StackVal, Function_197(0) };
			}
			if (Function_104(StackVal, StackVal, *(bParam0 + 680)))
			{
				*(bParam0 + 680) = { 0.0f, 0.0f, 0.0f };
				return;
			}
			if (!STREAMING_ARE_BOUNDS_LOADED(*(bParam0 + 680), 1.0f))
			{
				bParam0->f_620++;
				*(bParam0 + 680) = { 0.0f, 0.0f, 0.0f };
				return;
			}
			if (IS_OBJECT_VALID(bParam0->f_676))
			{
				DESTROY_OBJECT(bParam0->f_676);
			}
			bParam0->f_676 = CREATE_NAV_QUERY(bParam0->f_336, Function_50());
			if (!bVar0)
			{
				vVar1 = { StackVal, StackVal, *(bParam0 + 416) };
			}
			else if (Global_29006 != Global_30693[0])
			{
				if (Function_191(StackVal, StackVal, *(bParam0 + 416), 2096, 0.0f, 150.0f, &vVar1, 0) != "")
				{
				}
				else
				{
					vVar1 = { StackVal, StackVal, *(bParam0 + 416) };
				}
			}
			else
			{
				vVar1 = { -2759,01f, 32,06f, 4269,67f };
			}
			if ((Global_3387 || Global_29006 != Global_30693[1]) || bVar0)
			{
				NAV_QUERY_START_CAN_PATH_TO_POINT(bParam0->f_676, *(bParam0 + 680), vVar1, 0);
			}
			else
			{
				NAV_QUERY_START_CAN_PATH_TO_POINT(bParam0->f_676, *(bParam0 + 680), vVar1, 976);
			}
			bParam0->f_696 = GET_CURRENT_GAME_TIME();
			bParam0->f_672 = 1;
			break;
		
		case 0x00000001:
			if (!NAV_QUERY_IS_DONE(bParam0->f_676))
			{
				if (bParam0->f_696 + 2.0f) > GET_CURRENT_GAME_TIME()
				{
					bParam0->f_672 = 0;
					NAV_QUERY_STOP(bParam0->f_676);
					DESTROY_OBJECT(bParam0->f_676);
				}
				return;
			}
			if (!NAV_QUERY_CAN_PATH_TO_POINT(bParam0->f_676))
			{
				bParam0->f_700++;
				bParam0->f_672 = 3;
				NAV_QUERY_STOP(bParam0->f_676);
				DESTROY_OBJECT(bParam0->f_676);
				return;
			}
			NAV_QUERY_STOP(bParam0->f_676);
			DESTROY_OBJECT(bParam0->f_676);
			bParam0->f_672 = 2;
			break;
		
		case 0x00000002:
			bParam0->f_700 = 0;
			if (VDIST(*(bParam0 + 680), *(bParam0 + 416)) > 30.0f)
			{
				bParam0->f_672 = 0;
				return;
			}
			if (Function_190(StackVal, StackVal, *(bParam0 + 680), 1.0f, 75.0f, 1, 1, 0))
			{
				bParam0->f_672 = 0;
			}
			break;
	}
	return;
}

bool Function_190(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x7D0B / 32011
{
}

var Function_191(vector3 vParam0, int iParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x7D27 / 32039
{
	vector3 vVar0;
	bool bVar3;
	struct<9> Var4;
	
	bVar10 = -1.0f;
	Function_150();
	*uParam6 = { StackVal, StackVal, Function_150() };
	bVar3 = START_CURVE_QUERY(Global_28841, vParam0, iParam3, fParam4, fParam5, Function_176(((fParam5 - fParam4) / 5.0f), 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar3) < 0)
	{
		Function_193(StackVal, StackVal, bVar3, vParam0, iParam3, fParam4, fParam5, Function_176(((fParam5 - fParam4) / 5.0f), 20.0f));
	}
	else
	{
		bVar11 = false;
		while (bVar11 < (GET_NUM_POINTS_IN_CURVE_QUERY(bVar3) - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(bVar3, bVar11, &vVar4);
			if (!bParam7 || !Function_192(&vVar4))
			{
				vVar0.x = vVar4.x;
				vVar0.f_4 = vVar4.y;
				vVar0.f_8 = vVar4.z;
				if (bVar10 > 0.0f || bVar10 < VDIST(vParam0, vVar0))
				{
					bVar10 = VDIST(vParam0, vVar0);
					*uParam6 = { StackVal, StackVal, vVar0 };
					bVar12 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar3, bVar11);
				}
			}
			bVar11++;
		}
	}
	UNK_0xDF93BD7C(bVar3);
	return bVar12;
}

bool Function_192(bool bParam0) //Position: 0x7E05 / 32261
{
	if (bParam0->f_12 > 0,001f || bParam0->f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_193(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x7E26 / 32294
{
	PRINTSTRING("Curve Query Report: NumCurves-");
	PRINTINT(GET_NUM_CURVES_IN_CURVE_QUERY(bParam0));
	PRINTSTRING(" NumPoints-");
	PRINTINT(GET_NUM_POINTS_IN_CURVE_QUERY(bParam0));
	PRINTSTRING(" SearchCenter-");
	PRINTVECTOR(vParam1);
	PRINTSTRING(" curveMask-");
	PRINTINT(bParam4);
	PRINTSTRING(" min/max/freq-");
	PRINTFLOAT(bParam5);
	PRINTSTRING("/");
	PRINTFLOAT(bParam6);
	PRINTSTRING("/");
	PRINTFLOAT(bParam7);
	PRINTNL();
	Function_194(bParam0);
}

void Function_194(bool bParam0) //Position: 0x7EDD / 32477
{
	bool bVar0;
	struct<6> Var1;
	
	bVar0 = false;
	while (bVar0 <= GET_NUM_CURVES_IN_CURVE_QUERY(bParam0))
	{
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bParam0, bVar0)));
		PRINTNL();
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_POINTS_IN_CURVE_QUERY(bParam0))
	{
		GET_POINT_FROM_CURVE_QUERY(bParam0, bVar0, &Var1);
		Function_195(StackVal, StackVal, StackVal, StackVal, StackVal, Var1);
		PRINTSTRING(" from ");
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bParam0, bVar0)));
		PRINTNL();
		bVar0++;
	}
	return;
}

void Function_195(struct<17> Param0) //Position: 0x7F4C / 32588
{
	Function_196(&Param0);
	PRINTVECTOR(Function_196(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
}

vector3 Function_196(bool bParam0) //Position: 0x7F81 / 32641
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

vector3 Function_197(int iParam0) //Position: 0x7FA0 / 32672
{
	vector3 vVar0;
	
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	Function_200();
	Function_199(0);
	Function_198(iParam0);
	UNK_0x0AC99007(5.0f, 5.0f);
	UNK_0x30C67D05(1);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	Function_150();
	return StackVal, StackVal, Function_150();
}

void Function_198(bool bParam0) //Position: 0x7FDB / 32731
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

void Function_199(bool bParam0) //Position: 0x80AC / 32940
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

void Function_200() //Position: 0x80F0 / 33008
{
	float fVar0;
	bool bVar1;
	
	Function_201(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_201(var uParam0, bool bParam1) //Position: 0x8104 / 33028
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*uParam0 = 65.0f;
		*bParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*uParam0 = 115.0f;
		*bParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*uParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
		else
		{
			*uParam0 = 130.0f;
			*bParam1 = 190.0f;
		}
	}
	return;
}

vector3 Function_202(int iParam0, vector3 vParam1, vector3 vParam4, bool bParam7) //Position: 0x818D / 33165
{
	bool bVar0;
	bool bVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	vector3 vVar12;
	
	if (Function_229())
	{
		Function_150();
		return StackVal, StackVal, Function_150();
	}
	fVar7 = 100.0f;
	fVar8 = 75.0f;
	if (*iParam0 == 1)
	{
		fVar7 = 175.0f;
		fVar8 = 125.0f;
	}
	bVar11 = 4294967295;
	while (!bVar6 && iVar9 > 10)
	{
		bVar10 = START_CURVE_QUERY(iParam0->f_336, vParam1, 6,726233E-44f, fVar8, fVar7, 5.0f, 0);
		if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar10) < 0)
		{
			UNK_0xDF93BD7C(bVar10);
			fVar8 = fVar7;
			fVar7 = (fVar7 + 25.0f);
		}
		else
		{
			if (!bParam7)
			{
				bVar11 = Function_203(StackVal, StackVal, bVar10, vParam4, 4.0f, 0);
			}
			else
			{
				bVar11 = Function_203(StackVal, StackVal, bVar10, vParam4, 18.0f, 0);
			}
			if (bVar11 == 4294967295)
			{
				UNK_0xDF93BD7C(bVar10);
				fVar8 = fVar7;
				fVar7 = (fVar7 + 25.0f);
			}
			else
			{
				bVar6 = true;
			}
		}
		iVar9++;
	}
	if (iVar9 > 10)
	{
		bVar11 = 4294967295;
	}
	if (bVar11 != 4294967295)
	{
		GET_POINT_FROM_CURVE_QUERY(bVar10, bVar11, &bVar0);
	}
	UNK_0xDF93BD7C(bVar10);
	Function_196(&bVar0);
	vVar12 = { StackVal, StackVal, Function_196(&bVar0) };
	return StackVal, StackVal, vVar12;
}

int Function_203(bool bParam0, vector3 vParam1, float fParam4, int iParam5) //Position: 0x8285 / 33413
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<6> Var3;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	vector3 vVar18;
	
	if (!IS_CURVE_QUERY_VALID(bParam0))
	{
		LOG_ERROR("Invalid Curve Query");
		return 4294967295;
	}
	switch (iParam5)
	{
		case 0x00000000:
			while ((StackVal || !(StackVal || FABS(((Function_192(&Var3) || !bVar9) - fParam4 != -1.0f)) > fParam4)) && iVar1 > 10)
			{
				bVar0 = RAND_INT_RANGE(false, (GET_NUM_POINTS_IN_CURVE_QUERY(bParam0) - 1));
				GET_POINT_FROM_CURVE_QUERY(bParam0, bVar0, &Var3);
				iVar1++;
				bVar9 = true;
			}
			if (iVar1 < 9 || !bVar9)
			{
				return 4294967295;
			}
			break;
		
		case 0x00000001:
			bVar10 = 1,001638E+07.0f;
			bVar0 = 4294967295;
			bVar2 = false;
			while (bVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(bParam0))
			{
				GET_POINT_FROM_CURVE_QUERY(bParam0, bVar2, &Var3);
				Function_196(&Var3);
				bVar11 = VDIST(Function_196(&Var3), vParam1);
				if (StackVal && (StackVal || FABS((((bVar11 > bVar10 && !Function_192(&Var3)) && !Function_204(&Var3)) - fParam4 != -1.0f)) > fParam4))
				{
					Function_195(StackVal, StackVal, StackVal, StackVal, StackVal, Var3);
					PRINTNL();
					bVar10 = bVar11;
					bVar0 = bVar2;
				}
				else
				{
					Function_195(StackVal, StackVal, StackVal, StackVal, StackVal, Var3);
					PRINTNL();
					if (bVar11 < bVar10)
					{
					}
					else if (Function_192(&Var3))
					{
					}
					else if (Function_204(&Var3))
					{
					}
					else if (StackVal && FABS((StackVal - fParam4 == -1.0f)) < fParam4)
					{
					}
					else if (fParam4 != -1.0f)
					{
					}
				}
				bVar2++;
			}
			GET_POINT_FROM_CURVE_QUERY(bParam0, bVar0, &Var3);
			break;
		
		case 0x00000002:
			bVar10 = 0.0f;
			bVar0 = 4294967295;
			bVar2 = false;
			while (bVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(bParam0))
			{
				GET_POINT_FROM_CURVE_QUERY(bParam0, bVar2, &Var3);
				Function_196(&Var3);
				bVar11 = VDIST(Function_196(&Var3), vParam1);
				if (StackVal && (StackVal || FABS((((bVar11 < bVar10 && !Function_192(&Var3)) && !Function_204(&Var3)) - fParam4 != -1.0f)) > fParam4))
				{
					bVar10 = bVar11;
					bVar0 = bVar2;
				}
				bVar2++;
			}
			GET_POINT_FROM_CURVE_QUERY(bParam0, bVar0, &Var3);
			break;
		
		case 0x00000003:
			return 4294967295;
			break;
		
		case 0x00000004:
			break;
		
		default:
			return 4294967295;
			break;
	}
	if (Function_192(&Var3))
	{
		return 4294967295;
	}
	if (Function_204(&Var3))
	{
		return 4294967295;
	}
	if (Global_30900[1])
	{
		bVar2 = false;
		bVar2 = false;
		while (bVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(bParam0))
		{
			GET_POINT_FROM_CURVE_QUERY(bParam0, bVar2, &iVar12);
			Function_196(&iVar12);
			vVar18 = { StackVal, StackVal, Function_196(&iVar12) };
			bVar2++;
		}
		Function_196(&Var3);
		vVar18 = { StackVal, StackVal, Function_196(&Var3) };
	}
	return bVar0;
}

bool Function_204(bool bParam0) //Position: 0x84E8 / 34024
{
	return ((((StackVal && (StackVal && *bParam0 != 0.0f != 0.0f) != 0.0f) && bParam0->f_12 != 0.0f) && bParam0->f_16 != 0.0f) && bParam0->f_20 != 4294967295);
}

int Function_205(vector3 vParam0) //Position: 0x8516 / 34070
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { vParam0.x, (vParam0.y + 0,5f), vParam0.z };
	iVar3 = GET_MATERIAL_AT_VECTOR(&vVar0);
	if (iVar3 >= 0 || Function_124(iVar3, 1024))
	{
		return 1;
	}
	return 0;
}

void Function_206() //Position: 0x854A / 34122
{
	Function_210(0);
	UNK_0xA6403262(4294967295, UI_GET_STRING("Common_Null"));
	Function_207(4096);
	return;
}

void Function_207(int iParam0) //Position: 0x856F / 34159
{
	Function_208(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_208(var uParam0, int iParam1) //Position: 0x85C8 / 34248
{
	Function_209(uParam0, iParam1);
	return;
}

void Function_209(var uParam0, int iParam1) //Position: 0x85D5 / 34261
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_210(int iParam0) //Position: 0x85E4 / 34276
{
	UNK_0xA6403262(0, UI_GET_STRING("Common_Null"));
	if (iParam0 != 0)
	{
		if (iParam0 == 1)
		{
			UI_ENTER("XpHud");
			UI_EXIT("XpMultiplier");
		}
		else
		{
			UI_EXIT("XpHud");
		}
		UI_SET_STRING("mp_killchain_header", UI_GET_STRING("sn_kc"));
	}
	Function_227();
	Function_221();
	switch (iParam0)
	{
		case 0x00000001:
			Function_207(12288);
			Function_3(16384);
			break;
		
		case 0x00000002:
			Function_207(20480);
			Function_3(8192);
			break;
		
		default:
			Function_3(28672);
			break;
	}
	Function_3(2048);
	Function_212(0, 0);
	Function_211();
	return;
}

void Function_211() //Position: 0x86A8 / 34472
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_212(bool bParam0, bool bParam1) //Position: 0x86C1 / 34497
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_220(&Global_78480);
	Function_219(&Global_78480);
	uVar0 = Function_218(37);
	Function_216();
	if (!bParam0)
	{
		Function_215(37, uVar0);
	}
	Function_214(18264, 0);
	Function_213();
	return;
}

void Function_213() //Position: 0x870D / 34573
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_214(int iParam0, bool bParam1) //Position: 0x872C / 34604
{
	if (bParam1)
	{
		Function_209(&Global_78480 + 124, iParam0);
	}
	else
	{
		Function_5(&Global_78480 + 124, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_124 = Global_78480.f_124;
	}
	return;
}

void Function_215(int iParam0, var uParam1) //Position: 0x8767 / 34663
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = uParam1;
	return;
}

void Function_216() //Position: 0x8781 / 34689
{
	Function_217(&Global_78480 + 220);
	return;
}

void Function_217(int iParam0) //Position: 0x8790 / 34704
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
	return;
}

int Function_218(int iParam0) //Position: 0x87B1 / 34737
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

void Function_219(int iParam0) //Position: 0x87CA / 34762
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 132)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_220(int iParam0) //Position: 0x87EE / 34798
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*iParam0 + 176)[iVar0] = 0.0f;
		iVar0++;
	}
	return;
}

void Function_221() //Position: 0x8812 / 34834
{
	Function_222(&(Global_50170[522]));
	Function_222(&(Global_50170[622]));
	Function_222(&(Global_50170[722]));
	Function_222(&(Global_50170[822]));
	Function_222(&(Global_50170[922]));
	Function_222(&(Global_50170[1022]));
	Function_222(&(Global_50170[1122]));
	return;
}

void Function_222(bool bParam0) //Position: 0x885B / 34907
{
	Global_56092[*bParam0] = 0;
	Function_223(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_223(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x8875 / 34933
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_226(iParam0), fParam1, true, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_225(iParam0), 6);
		stradd(&cVar0, "_info", 24);
		memcpy(&cVar6, StackVal, *(&Global_50170[iParam022] + 16), 6);
		stradd(&cVar6, "_num", 24);
		if (bParam3 >= 4294967295)
		{
			UI_SET_STRING(&cVar6, INT_TO_STRING(bParam3));
		}
		if (bParam4 >= 4294967295)
		{
			strcpy(&cVar12, "PVP_num2", 16);
			UI_SET_STRING(&cVar12, INT_TO_STRING(bParam4));
		}
		if (bParam5 >= 4294967295)
		{
			strcpy(&cVar16, "PVP_num3", 16);
			UI_SET_STRING(&cVar16, INT_TO_STRING(bParam5));
		}
		APPEND_JOURNAL_ENTRY_DETAIL(Function_226(iParam0), &cVar0, 2, 2, true);
		Function_224(Function_226(iParam0), 0);
	}
}

void Function_224(bool bParam0, bool bParam1) //Position: 0x8923 / 35107
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

struct<16> Function_225(int iParam0) //Position: 0x8948 / 35144
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_226(int iParam0) //Position: 0x897C / 35196
{
	return Global_50170[iParam022].f_24;
}

void Function_227() //Position: 0x898B / 35211
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 259)
	{
		Global_56092[iVar0] = 0;
		Global_56352[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

void Function_228(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x89B5 / 35253
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

bool Function_229() //Position: 0x8A00 / 35328
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_230(int iParam0) //Position: 0x8A09 / 35337
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_10())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

bool Function_231(int iParam0, int iParam1) //Position: 0x8A3E / 35390
{
	struct<2> Var0;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	bool bVar14;
	var uVar15;
	
	if (!SQUAD_IS_VALID(iParam0->f_576))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(iParam0->f_336))
	{
		return 0;
	}
	if (!iParam0->f_672 != 2 && !iParam0->f_672 != 3)
	{
		return 0;
	}
	if (iParam0->f_672 == 3)
	{
		iParam0->f_672 = 0;
		return 0;
	}
	if (!IS_PLAYER_CONTROLLABLE(0))
	{
		return 0;
	}
	Function_266(5.0f, 8);
	Var0 = { StackVal, Function_266(5.0f, 8) };
	Function_159(iParam0 + 500, 40.0f, &vVar5, 10);
	uVar15 = 16;
	while (iParam0->f_600 <= iParam0->f_596)
	{
		Function_264(&Var0, iParam0->f_600);
		vVar8 = { StackVal, StackVal, Function_264(&Var0, iParam0->f_600) };
		vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 680), vVar8, StackVal) };
		Function_159(&vVar8, 40.0f, &vVar2, 10);
		vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar5, StackVal) };
		vVar11 = { 0.0f, UNK_0x9C40E671(&vVar11), 0.0f };
		if (!Function_104(StackVal, StackVal, vVar2))
		{
			bVar14 = Function_249(StackVal, StackVal, StackVal, StackVal, iParam0, iParam0->f_336, vVar2, vVar11, &uVar15, iParam0->f_600, 0, 1, 1);
		}
		if (IS_ACTOR_VALID(bVar14))
		{
			if (IS_ACTOR_ALIVE(bVar14))
			{
				Function_232(iParam0, bVar14, iParam1->f_48);
			}
		}
		iParam0->f_600++;
	}
	iParam0->f_672 = 0;
	iParam0->f_344 = GET_CURRENT_GAME_TIME();
	if (!Function_71(iParam0->f_576, 58, iParam1->f_48))
	{
		if (GET_WEAPON_IN_HAND(iParam1->f_48) == 4294967295)
		{
			Function_275(iParam0->f_576, "law_go_wanted_unarmed", 5.0f, iParam1->f_64, 20.0f, 1, 0);
		}
		else
		{
			Function_275(iParam0->f_576, "law_go_wanted", 5.0f, iParam1->f_64, 20.0f, 1, 0);
		}
	}
	return 1;
}

void Function_232(int iParam0, bool bParam1, bool bParam2) //Position: 0x8BD7 / 35799
{
	int iVar0;
	bool bVar1;
	
	Function_234(bParam1, Function_248(Function_34(iParam0->f_724), *iParam0));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam1, 31, -1.0f);
	if (Function_229())
	{
		iVar0 = 878;
		switch (*iParam0)
		{
			case 0x00000000:
				iVar0 = 878;
				break;
			
			case 0x00000002:
				iVar0 = 879;
				break;
			
			case 0x00000003:
				iVar0 = 880;
				break;
			
			case 0x00000001:
				iVar0 = 881;
				break;
		}
		NET_ACTOR_SET_SCRIPT_INT(bParam1, iVar0);
		NET_ACTOR_SET_ALLOW_BLIP_SYNC(bParam1, 0);
		bVar1 = Function_233(bParam1);
		if (IS_LAYOUTREF_VALID(bVar1))
		{
			if (bVar1 != iParam0->f_336)
			{
				GIVE_OBJECT_TO_LAYOUT(bParam1, iParam0->f_336);
			}
		}
	}
	SQUAD_JOIN(bParam1, iParam0->f_576);
	SET_ACTOR_UPDATE_PRIORITY(bParam1, false);
	if (!Global_27759)
	{
		MEMORY_CONSIDER_AS_ENEMY(bParam1, bParam2);
	}
	MEMORY_IDENTIFY(bParam1, bParam2);
	MEMORY_REPORT_POSITION_AUTO(bParam1, Global_34573, false);
	MEMORY_REPORT_POSITION(bParam1, bParam2, iParam0 + 500);
	SET_ACTOR_VISION_XRAY(bParam1, false);
	ACTOR_DRAW_LAST_WEAPON(bParam1, 0);
	AI_BEHAVIOR_SET_ALLOW(bParam1, 0, 0);
	TASK_PRIORITY_SET(bParam1, 2);
	SET_TOUGH_ACTOR(bParam1, 1);
	if (*iParam0 == 2 && *iParam0 == 3)
	{
		AI_SET_RANGE_ACCURACY_MODIFIER(bParam1, bParam2, -8.0f);
	}
	AI_SET_NAV_ACTOR_WIDTH(GET_MOUNT(bParam1), 1,5f);
	if (iParam0->f_404)
	{
		DECOR_SET_BOOL(bParam1, "CanBeLasso", false);
	}
	if (Function_278(0x4000000))
	{
		SET_ACTOR_VISION_MAX_RANGE(bParam1, 45.0f, 1);
	}
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam1, 235.0f);
	if (iParam0->f_648 != 14)
	{
		if (!Global_27759 && Global_29006 == Global_30693[1])
		{
		}
	}
	else
	{
		if (IS_ACTOR_VALID(GET_MOUNT(bParam1)))
		{
			Function_39(GET_MOUNT(bParam1), Global_34573, -1.0f, -1.0f, 0, 0);
			RELEASE_ACTOR(GET_MOUNT(bParam1));
		}
		MEMORY_PREFER_WALKING(bParam1, true);
		SET_ACTOR_VISION_XRAY(bParam1, true);
	}
	if (GET_NUM_WEAPONS_IN_INVENTORY(bParam1) == 0)
	{
		if (!DECOR_CHECK_EXIST(bParam1, "lawSetSpawnParams"))
		{
			GIVE_WEAPON_TO_ACTOR(bParam1, 4, false, 1, 1);
		}
	}
	MEMORY_PREFER_MELEE(bParam1, 0);
	MEMORY_ALLOW_SHOOTING(bParam1, true);
	if (!iParam0->f_544)
	{
		AI_SET_SHOTS_PER_BURST(bParam1, 1);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam1, 5.0f, 2.0f);
		AI_SET_BURST_DURATION(bParam1, 0,1f);
		AI_SET_BURST_DURATION_RANDOMNESS(bParam1, 0.0f);
		AI_SET_FIRE_DELAY(bParam1, 2.0f);
		AI_SET_FIRE_DELAY_RANDOMNESS(bParam1, 2.0f);
	}
	DECOR_SET_BOOL(bParam1, "lawSetSpawnParams", true);
	return;
}

var Function_233(bool bParam0) //Position: 0x8E0A / 36362
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 1)
		{
			bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
		}
		while (!IS_LAYOUTREF_VALID(bVar0) && IS_OBJECT_VALID(bParam0))
		{
			bParam0 = GET_OBJECT_OWNER(bParam0);
			if (GET_OBJECT_TYPE(bParam0) == 1)
			{
				bVar0 = GET_LAYOUT_FROM_OBJECT(bParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(bVar0))
		{
			return bVar0;
		}
	}
	return "";
}

void Function_234(bool bParam0, int iParam1) //Position: 0x8E64 / 36452
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_247(bParam0);
			break;
		
		case 0x00000001:
			Function_246(bParam0);
			break;
		
		case 0x00000002:
			Function_245(bParam0);
			break;
		
		case 0x00000005:
			Function_244(bParam0);
			break;
		
		case 0x00000004:
			Function_243(bParam0);
			break;
		
		case 0x00000003:
			Function_242(bParam0);
			break;
		
		case 0x00000006:
			Function_241(bParam0);
			break;
		
		case 0x00000007:
			Function_240(bParam0);
			break;
		
		case 0x00000008:
			Function_239(bParam0);
			break;
		
		case 0x00000009:
			Function_237(bParam0);
			break;
		
		default:
			Function_235(bParam0);
			break;
	}
	if (GET_ACTORENUM_SPECIES(GET_ACTOR_ENUM(bParam0)) == 12)
	{
		if (RAND_INT_RANGE(false, 10000) <= 3000)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bParam0, 6, true);
		}
	}
	return;
}

void Function_235(bool bParam0) //Position: 0x8F30 / 36656
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0,75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_236(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_236(var uParam0, bool bParam1) //Position: 0x9294 / 37524
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

void Function_237(bool bParam0) //Position: 0x92B6 / 37558
{
	Function_235(bParam0);
	Function_238(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 90.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 180.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, true);
	return;
}

void Function_238(bool bParam0, int iParam1) //Position: 0x9453 / 37971
{
	int iVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	iVar0 = AI_PREDICATE_FIND_NAMED("Guard", 0);
	if (AI_PREDICATE_IS_VALID(iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar0, iParam1);
	}
	return;
}

void Function_239(bool bParam0) //Position: 0x9486 / 38022
{
	Function_235(bParam0);
	Function_238(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 85.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,65f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 150.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2,25f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, true);
	return;
}

void Function_240(bool bParam0) //Position: 0x962F / 38447
{
	Function_235(bParam0);
	Function_238(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 135.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, true);
	return;
}

void Function_241(bool bParam0) //Position: 0x97C0 / 38848
{
	Function_235(bParam0);
	Function_238(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, false);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 240.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_242(bool bParam0) //Position: 0x98F2 / 39154
{
	Function_235(bParam0);
	Function_238(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 70.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0,5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1,5f);
	return;
}

void Function_243(bool bParam0) //Position: 0x9A7A / 39546
{
	Function_235(bParam0);
	Function_238(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2,25f);
	return;
}

void Function_244(bool bParam0) //Position: 0x9BD4 / 39892
{
	Function_235(bParam0);
	Function_238(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_245(bool bParam0) //Position: 0x9D12 / 40210
{
	Function_235(bParam0);
	Function_238(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, false);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

void Function_246(bool bParam0) //Position: 0x9D35 / 40245
{
	Function_235(bParam0);
	Function_238(bParam0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0,4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0,5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,25f);
	return;
}

void Function_247(bool bParam0) //Position: 0x9E9F / 40607
{
	Function_235(bParam0);
	Function_238(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0,01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0,85f);
	return;
}

int Function_248(int iParam0, bool bParam1) //Position: 0x9EDA / 40666
{
	if (bParam1 != 2 || iParam0 <= 800)
	{
		return 9;
	}
	if (bParam1 != 3 || iParam0 <= 400)
	{
		return 8;
	}
	return 7;
}

var Function_249(int iParam0, bool bParam1, vector3 vParam2, vector3 vParam5, var uParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12) //Position: 0x9F03 / 40707
{
	bool bVar0;
	char* cVar1[32];
	int iVar9;
	struct<6> Var10;
	bool bVar16;
	
	if (Function_229())
	{
		NET_OBJECT_REPLICATION_MODE_START(15, 5);
	}
	if (bParam10)
	{
		bVar0 = Function_262(iParam0);
	}
	if (!IS_ACTOR_VALID(bVar0) && !(bParam10 && !bParam12))
	{
		Function_257(iParam0);
		if (iParam0->f_588 > 0)
		{
			if (Function_229())
			{
				cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_255("mplaw", uParam1) };
			}
			else
			{
				strcpy(&cVar1, Function_50(), 32);
			}
			if (!bParam11)
			{
				bVar0 = CREATE_ACTOR_IN_LAYOUT(uParam1, &cVar1, Function_254(iParam0), vParam2, vParam5);
			}
			else
			{
				iVar9 = Function_253(StackVal, StackVal, Global_30750[6], vParam2, 4, 23, 0);
				if (Function_252(iVar9, uParam8))
				{
					iVar9 = 976;
				}
				(*uParam8)[iParam9] = iVar9;
				Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_93() };
				bVar0 = Function_251(StackVal, StackVal, StackVal, StackVal, bParam1, &cVar1, Function_254(iParam0), &Var10, iVar9, vParam2, vParam5);
			}
		}
		if (IS_ACTOR_VALID(bVar0))
		{
			Function_250(iParam0);
		}
	}
	if (Function_229())
	{
		bVar16 = GET_MOUNT(bVar0);
		if (IS_ACTOR_VALID(bVar16))
		{
			NET_ACTOR_SET_SCRIPT_INT(bVar16, 875);
		}
		NET_OBJECT_REPLICATION_MODE_END(15);
	}
	return bVar0;
}

void Function_250(bool bParam0) //Position: 0xA002 / 40962
{
	if (bParam0->f_588 > 0)
	{
		bParam0->f_616++;
		(*bParam0 + 208)[bParam0->f_588] = bParam0->f_616;
	}
	return;
}

bool Function_251(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0xA02D / 41005
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_91(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_91(bParam4))
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

bool Function_252(int iParam0, int iParam1) //Position: 0xA152 / 41298
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

var Function_253(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0xA184 / 41348
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

var Function_254(int iParam0) //Position: 0xA19C / 41372
{
	int iVar0;
	
	iVar0 = (*iParam0 + 60)[iParam0->f_5883];
	if (Function_91(iVar0))
	{
		return iVar0;
	}
	return 4294967295;
}

struct<32> Function_255(bool bParam0, bool bParam1) //Position: 0xA1BB / 41403
{
	struct<8> Var0;
	bool bVar8;
	
	if (!IS_STRING_VALID(bParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_256(bParam0) };
	bVar8 = FIND_OBJECT_IN_LAYOUT(bParam1, &Var0);
	while (IS_OBJECT_VALID(bVar8))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_256(bParam0) };
		bVar8 = FIND_OBJECT_IN_LAYOUT(bParam1, &Var0);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

struct<32> Function_256(bool bParam0) //Position: 0xA20A / 41482
{
	char* cVar0[32];
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_229())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_134(bParam0);
	}
	if (!IS_STRING_VALID(bParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&Var8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&Var8) <= 4)
		{
			memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_135("0", &Var8, ""), 4);
		}
		bVar12 = GET_LOCAL_SLOT();
		memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_135(I2STR(bVar12), &Var8, ""), 4);
		while (STRING_LENGTH(&Var8) <= 6)
		{
			memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_135("0", &Var8, ""), 4);
		}
		if (IS_STRING_VALID(&Var8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &Var8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_257(int iParam0) //Position: 0xA2B9 / 41657
{
	iParam0->f_588 = Function_258(iParam0, 1);
	return;
}

int Function_258(int iParam0, bool bParam1) //Position: 0xA2CA / 41674
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = RAND_INT_RANGE(false, 11);
	bVar0 = bVar1;
	while (bVar0 < 11)
	{
		if (Function_261(iParam0, bVar0))
		{
			if (!Function_260(iParam0, bVar0))
			{
				return bVar0;
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < bVar1)
	{
		if (Function_261(iParam0, bVar0))
		{
			if (!Function_260(iParam0, bVar0))
			{
				return bVar0;
			}
		}
		bVar0++;
	}
	if (bParam1)
	{
		Function_259(iParam0);
		return Function_258(iParam0, 0);
	}
	return 4294967295;
}

void Function_259(int iParam0) //Position: 0xA341 / 41793
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = (iParam0->f_612 - 4);
	if (iVar1 >= 8)
	{
		iVar1 = 8;
	}
	iVar2 = (iParam0->f_616 - iVar1);
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((*iParam0 + 208)[iVar0] <= iVar2)
		{
			(*iParam0 + 208)[iVar0] = 0;
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 <= 3)
	{
		iVar0 = 0;
		while (iVar0 < 11)
		{
			(*iParam0 + 208)[iVar0] = 0;
			iVar0++;
		}
	}
	return;
}

bool Function_260(int iParam0, bool bParam1) //Position: 0xA3B9 / 41913
{
	if ((*iParam0 + 208)[bParam1] >= 0)
	{
		return 1;
	}
	return 0;
}

bool Function_261(int iParam0, bool bParam1) //Position: 0xA3CE / 41934
{
	bool bVar0;
	
	bVar0 = (*iParam0 + 60)[bParam13];
	if (bVar0 != 0)
	{
		if (STREAMING_IS_ACTOR_LOADED(bVar0, 4294967295))
		{
			return 1;
		}
	}
	return 0;
}

var Function_262(int iParam0) //Position: 0xA3F0 / 41968
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (iParam0->f_372 > iParam0->f_368)
	{
		return "";
	}
	if (GET_OBJECTSET_SIZE(Global_62999) < iParam0->f_372)
	{
		return "";
	}
	if (GET_OBJECT_TYPE(GET_INDEXED_OBJECT_IN_OBJECTSET(iParam0->f_372, Global_62999)) == 15)
	{
		bVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iParam0->f_372, Global_62999));
		if (IS_ACTOR_VALID(bVar0))
		{
			if (IS_ACTOR_ALIVE(bVar0))
			{
				REFERENCE_ACTOR(bVar0);
				TASK_CLEAR(bVar0);
				MEMORY_REPORT_POSITION_AUTO(bVar0, Global_34573, false);
				TASK_OVERRIDE_CLEAR_MOVETYPE(bVar0);
				iParam0->f_372++;
			}
			else
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar0, Global_62999);
				iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
			}
		}
		else
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, Global_62999);
			iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
		}
	}
	else if (GET_OBJECT_TYPE(GET_INDEXED_OBJECT_IN_OBJECTSET(iParam0->f_372, Global_62999)) == 24)
	{
		bVar1 = GET_PERS_CHAR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iParam0->f_372, Global_62999));
		GET_OBJECT_POSITION(bVar1, &uVar2);
		if (!WOULD_ACTOR_BE_VISIBLE(false, &uVar2, 3212836864) || IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(bVar1)))
		{
			ACTIVATE_ACTOR_FOR_PERS_CHAR(bVar1);
			bVar0 = GET_ACTOR_FROM_PERS_CHAR(bVar1);
			if (IS_ACTOR_VALID(bVar0))
			{
				if (IS_ACTOR_ALIVE(bVar0))
				{
					REFERENCE_ACTOR(bVar0);
					TASK_CLEAR(bVar0);
					MEMORY_REPORT_POSITION_AUTO(bVar0, Global_34573, false);
					iParam0->f_372++;
					Function_263(bVar1, 1);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bVar0);
				}
				else
				{
					REMOVE_OBJECT_FROM_OBJECTSET(bVar1, Global_62999);
					iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
				}
			}
			else if (!IS_PERS_CHAR_ALIVE(bVar1))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar1, Global_62999);
				iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
			}
			else
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_PERS_CHAR(bVar1), "lateSharedLaw", true);
				iParam0->f_372++;
			}
		}
	}
	Function_44(bVar0, 1);
	return bVar0;
}

int Function_263(bool bParam0, bool bParam1) //Position: 0xA58E / 42382
{
	bool bVar0;
	bool bVar1;
	
	if (IS_PERS_CHAR_VALID(bParam0))
	{
		bVar0 = GET_ACTOR_FROM_PERS_CHAR(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			TASK_CLEAR(bVar0);
			REFERENCE_ACTOR(bVar0);
			TASK_PRIORITY_SET(bVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(bVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(bVar0, 1);
			if (bParam1)
			{
				if (IS_ACTOR_HOGTIED(bVar0))
				{
					FREE_FROM_HOGTIE(bVar0);
				}
			}
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 1);
			return 1;
		}
	}
	return 0;
}

vector3 Function_264(var uParam0, bool bParam1) //Position: 0xA630 / 42544
{
	vector3 vVar0;
	
	if (!Function_265(uParam0))
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

bool Function_265(int iParam0) //Position: 0xA771 / 42865
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

struct<8> Function_266(var uParam0, int iParam1) //Position: 0xA793 / 42899
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

void Function_267(int iParam0, int iParam1) //Position: 0xA7AC / 42924
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	struct<9> Var6;
	
	switch (iParam0->f_672)
	{
		case 0x00000000:
			bVar2 = Function_205(StackVal, StackVal, *(iParam0 + 416));
			if (iParam0->f_700 > 3)
			{
				bVar2 = true;
			}
			if (GET_MOUNT(iParam1->f_48) != "" && GET_VEHICLE(iParam1->f_48) != "")
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			if (Function_278(0x1000000) && Global_13111 == 1)
			{
				Function_277(0x1000000);
				Function_150();
				*(&Global_26316 + 156) = { StackVal, StackVal, Function_150() };
			}
			if (StackVal && !Function_104(StackVal, Function_278(0x1000000), *(&Global_26316 + 156)))
			{
				if (StackVal <= 1000.0f)
				{
					(&Global_26316 + 156)->f_4 = (StackVal - 1000.0f);
				}
				if (STREAMING_ARE_BOUNDS_LOADED(*(&Global_26316 + 156), 1.0f))
				{
					*(iParam0 + 680) = { StackVal, StackVal, *(&Global_26316 + 156) };
				}
			}
			else if ((!bVar0 && IS_LAYOUTREF_VALID(iParam0->f_340)) && !*iParam0 != 1)
			{
				bVar1 = Function_268(iParam0, "nlaw_spawn");
				if (IS_OBJECT_VALID(bVar1))
				{
					GET_OBJECT_POSITION(bVar1, iParam0 + 680);
					iParam0->f_692 = 1;
					if (Function_104(StackVal, StackVal, *(iParam0 + 680)) || VDIST(*(iParam0 + 680), *(iParam0 + 416)) < (110.0f * 0,75f))
					{
						Function_197(0);
						*(iParam0 + 680) = { StackVal, StackVal, Function_197(0) };
					}
				}
			}
			else if (*iParam0 == 3)
			{
				Function_197(0);
				*(iParam0 + 680) = { StackVal, StackVal, Function_197(0) };
			}
			else
			{
				Function_202(StackVal, StackVal, StackVal, StackVal, iParam0, *(iParam0 + 416), *(iParam0 + 500), bVar2);
				*(iParam0 + 680) = { StackVal, StackVal, Function_202(StackVal, StackVal, StackVal, StackVal, iParam0, *(iParam0 + 416), *(iParam0 + 500), bVar2) };
			}
			Function_150();
			*(&Global_26316 + 156) = { StackVal, StackVal, Function_150() };
			if (Function_104(StackVal, StackVal, *(iParam0 + 680)))
			{
				Function_197(0);
				*(iParam0 + 680) = { StackVal, StackVal, Function_197(0) };
			}
			if (Function_104(StackVal, StackVal, *(iParam0 + 680)))
			{
				*(iParam0 + 680) = { 0.0f, 0.0f, 0.0f };
				return;
			}
			if (!bVar2)
			{
				if (StackVal < (StackVal + 10.0f) && !bVar0)
				{
					*(iParam0 + 680) = { 0.0f, 0.0f, 0.0f };
					return;
				}
				if (StackVal > (StackVal - 10.0f) && !bVar0)
				{
					*(iParam0 + 680) = { 0.0f, 0.0f, 0.0f };
					return;
				}
			}
			if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 680), 1.0f))
			{
				*(iParam0 + 680) = { 0.0f, 0.0f, 0.0f };
				return;
			}
			if (IS_ACTOR_VALID(iParam1->f_48))
			{
				if ((*iParam0 != 1 || *iParam0 != 3) || *iParam0 != 2)
				{
					Function_107(iParam1->f_48);
					vVar3 = { StackVal, StackVal, Function_107(iParam1->f_48) };
					vVar6 = { 32.0f, 96.0f, 2741.0f };
					if (VDIST(vVar3, vVar6) >= 70.0f)
					{
						if (iParam0->f_724 == 1)
						{
							if (StackVal > vVar6.z)
							{
								*(iParam0 + 680) = { 0.0f, 0.0f, 0.0f };
								return;
							}
						}
						if (StackVal < vVar6.z)
						{
							*(iParam0 + 680) = { 0.0f, 0.0f, 0.0f };
							return;
						}
					}
				}
			}
			iParam0->f_676 = CREATE_NAV_QUERY(iParam0->f_336, Function_50());
			if (!bVar2)
			{
				vVar9 = { StackVal, StackVal, *(iParam0 + 416) };
			}
			else if (Global_29006 != Global_30693[0])
			{
				if (Function_191(StackVal, StackVal, *(iParam0 + 416), 2096, 0.0f, 150.0f, &vVar9, 0) != "")
				{
				}
				else
				{
					vVar9 = { StackVal, StackVal, *(iParam0 + 416) };
				}
			}
			else
			{
				vVar9 = { -2759,01f, 32,06f, 4269,67f };
			}
			if (bVar0 && !bVar2)
			{
				NAV_QUERY_START_CAN_PATH_TO_POINT(iParam0->f_676, *(iParam0 + 680), vVar9, 976);
			}
			else
			{
				NAV_QUERY_START_CAN_PATH_TO_POINT(iParam0->f_676, *(iParam0 + 680), vVar9, 0);
			}
			iParam0->f_696 = GET_CURRENT_GAME_TIME();
			iParam0->f_672 = 1;
			break;
		
		case 0x00000001:
			if (!NAV_QUERY_IS_DONE(iParam0->f_676))
			{
				if (iParam0->f_696 + 3.0f) > GET_CURRENT_GAME_TIME()
				{
					iParam0->f_672 = 0;
					NAV_QUERY_STOP(iParam0->f_676);
					DESTROY_OBJECT(iParam0->f_676);
				}
				return;
			}
			if (!NAV_QUERY_CAN_PATH_TO_POINT(iParam0->f_676))
			{
				iParam0->f_700++;
				NAV_QUERY_STOP(iParam0->f_676);
				DESTROY_OBJECT(iParam0->f_676);
				iParam0->f_672 = 3;
				return;
			}
			NAV_QUERY_STOP(iParam0->f_676);
			iParam0->f_672 = 2;
			break;
		
		case 0x00000002:
			iParam0->f_700 = 0;
			if (VDIST(*(iParam0 + 680), *(iParam0 + 416)) > 30.0f)
			{
				iParam0->f_672 = 0;
				return;
			}
			if (Function_190(StackVal, StackVal, *(iParam0 + 680), 1.0f, 50.0f, 1, 1, 0))
			{
				iParam0->f_672 = 0;
			}
			break;
	}
	return;
}

var Function_268(var uParam0, bool bParam1) //Position: 0xABD5 / 43989
{
	bool bVar0;
	bool bVar1;
	
	if (Function_229())
	{
		return "";
	}
	bVar1 = CREATE_OBJECT_ITERATOR(uParam0->f_336);
	ITERATE_IN_LAYOUT(bVar1, uParam0->f_340);
	ITERATE_ON_OBJECT_TYPE(bVar1, 8);
	ITERATE_ON_PARTIAL_NAME(bVar1, bParam1);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	if (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar1);
		return bVar0;
	}
	DESTROY_ITERATOR(bVar1);
	return "";
}

int Function_269(int iParam0) //Position: 0xAC24 / 44068
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_273();
	iVar1 = 0;
	if (!Function_32(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_272(iParam0[iVar03], 8);
		}
		else if (Function_271())
		{
			iVar1 = 1;
			Function_272(iParam0[iVar03], 8);
		}
		Function_272(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_32(iParam0[iVar03], 4))
		{
			if (!Function_32(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_32(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_32(iParam0[03], 8) || iVar1));
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
				Function_272(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_32(iParam0[iVar03], 4))
		{
			if (!Function_32(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_272(iParam0[iVar03], 2);
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
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_272(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_272(iParam0[iVar03], 2);
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
	Function_270();
	return 1;
}

void Function_270() //Position: 0xAF9F / 44959
{
	if (!Function_125(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_271() //Position: 0xAFDF / 45023
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

void Function_272(var uParam0, int iParam1) //Position: 0xB00A / 45066
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_273() //Position: 0xB01B / 45083
{
	if (!Function_125(128))
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

void Function_274(int iParam0) //Position: 0xB05D / 45149
{
	if (!IS_LAYOUTREF_VALID(iParam0->f_340))
	{
		iParam0->f_340 = Global_30616;
	}
	return;
}

void Function_275(int iParam0, char* cParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6) //Position: 0xB077 / 45175
{
	int iVar0;
	
	iVar0 = Function_276();
	if (iVar0 == 4294967295)
	{
		return;
	}
	strcpy(&(Global_27647[iVar022]), cParam1, 64);
	Global_27647[iVar022].f_64 = fParam2;
	Global_27647[iVar022].f_84 = uParam3;
	Global_27647[iVar022].f_68 = fParam4;
	Global_27647[iVar022].f_72 = iParam5;
	Global_27647[iVar022].f_80 = iParam0;
	Global_27647[iVar022].f_76 = iParam6;
}

var Function_276() //Position: 0xB0DA / 45274
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_27647)
	{
		if (Global_27647[iVar022].f_64 > 0,5f)
		{
			return iVar0;
		}
		if (Global_27647[iVar022].f_76)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_277(int iParam0) //Position: 0xB119 / 45337
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

bool Function_278(int iParam0) //Position: 0xB136 / 45366
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_279(int iParam0, int iParam1) //Position: 0xB154 / 45396
{
	iParam0->f_476 = GET_CURRENT_GAME_TIME();
	*iParam0 = 2;
	iParam0->f_724 = StackVal;
	Global_13094 = 0,01f;
	iParam0->f_336 = Function_292("SpecialForcesLawResponse");
	Function_289(iParam0);
	if (iParam1->f_68 == 0)
	{
		iParam1->f_68 = Function_288(iParam1->f_64, iParam1->f_44);
	}
	iParam0->f_596 = iParam1->f_68;
	Function_284(iParam0, iParam0->f_596, 0);
	iParam0->f_604 = 0;
	iParam0->f_576 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_336, "lawSquad"));
	iParam0->f_580 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_336, "dogSquad"));
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(iParam0->f_576, 648);
	SQUAD_SET_FACTION(iParam0->f_576, iParam1->f_52);
	iParam0->f_348 = Function_283(iParam1->f_48, 3, 0);
	if (IS_CRIME_VALID(iParam0->f_348))
	{
		GET_CRIME_POSITION(iParam0->f_348, iParam0 + 488);
		iParam0->f_440 = Function_136(GET_CURRENT_GAME_TIME(), Function_136(GET_CRIME_BEGIN_TIMESTAMP(iParam0->f_348), GET_CRIME_END_TIMESTAMP(iParam0->f_348)));
	}
	else
	{
		GET_POSITION(iParam1->f_48, iParam0 + 488);
		iParam0->f_440 = GET_CURRENT_GAME_TIME();
	}
	GET_POSITION(iParam1->f_48, iParam0 + 416);
	*(iParam0 + 500) = { StackVal, StackVal, *(iParam0 + 416) };
	iParam0->f_360 = GET_CURRENT_GAME_TIME();
	iParam0->f_444 = iParam0->f_440;
	iParam0->f_448 = iParam0->f_440;
	iParam0->f_412 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_336, Function_50(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 30.0f, 20.0f, 30.0f);
	ATTACH_OBJECTS(iParam0->f_412, iParam1->f_48, Function_50(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	iParam0->f_340 = Global_26361.f_16;
	Function_282(iParam0, iParam1);
	if (IS_OBJECTSET_VALID(Global_62999))
	{
		CLEAN_OBJECTSET(Global_62999);
		iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
		PRINTINT(iParam0->f_368);
		PRINTNL();
	}
	if (iParam1->f_64 == 0)
	{
		if (!Function_22(Global_76847, 256))
		{
			Function_18(Global_34573, 256, 2, 0);
		}
	}
	else if (!Function_22(Global_76847, 1024))
	{
		Function_18(Global_34573, 1024, 2, 0);
	}
	Function_280();
	return;
}

void Function_280() //Position: 0xB366 / 45926
{
	if (!Function_23(25, 0))
	{
		if (!Function_22(Global_76847, 0x1000000))
		{
			Function_281(&Global_76848, 32768);
		}
	}
	return;
}

void Function_281(var uParam0, int iParam1) //Position: 0xB391 / 45969
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_282(var uParam0, int iParam1) //Position: 0xB3A8 / 45992
{
	uParam0->f_332 = CREATE_POPULATION_SET_IN_LAYOUT(uParam0->f_336, "law_dogs", 1);
	if (iParam1->f_64 == 0)
	{
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1033, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1034, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1035, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1036, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1042, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1043, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1041, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1044, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1037, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1038, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1039, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1040, 10.0f);
		if (Global_29004 == 2)
		{
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1045, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1046, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1047, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1048, 10.0f);
		}
		else
		{
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1042, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1043, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1041, 10.0f);
			LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1044, 10.0f);
		}
	}
	else
	{
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1030, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1031, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1032, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1037, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1038, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1039, 10.0f);
		LINK_ACTORENUM_TO_POPULATION(uParam0->f_332, 1040, 10.0f);
	}
	return;
}

var Function_283(bool bParam0, int iParam1, int iParam2) //Position: 0xB58C / 46476
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return "";
	}
	if (!Function_141(iParam1))
	{
		return "";
	}
	fVar0 = -1.0f;
	iVar1 = 0;
	bVar2 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar3 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_140(bVar2, iVar3);
	bVar4 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar4))
	{
		bVar6 = GET_CRIME_FROM_OBJECT(bVar4);
		if (GET_CRIME_CRIMINAL(bVar6) != bParam0 && GET_CRIME_WITNESSED(bVar6) <= iParam1)
		{
			if (Global_26998[GET_CRIME_TYPE(bVar6)18].f_24 < iVar1 && Global_26998[GET_CRIME_TYPE(bVar6)18].f_24 < iParam2)
			{
				fVar0 = GET_CRIME_END_TIMESTAMP(bVar6);
				bVar5 = bVar6;
				iVar1 = Global_26998[GET_CRIME_TYPE(bVar6)18].f_24;
			}
			else if (Global_26998[GET_CRIME_TYPE(bVar6)18].f_24 != iVar1 && Global_26998[GET_CRIME_TYPE(bVar6)18].f_24 < iParam2)
			{
				if (GET_CRIME_END_TIMESTAMP(bVar6) < fVar0)
				{
					fVar0 = GET_CRIME_END_TIMESTAMP(bVar6);
					bVar5 = bVar6;
					iVar1 = Global_26998[GET_CRIME_TYPE(bVar6)18].f_24;
				}
			}
		}
		bVar4 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	DESTROY_ITERATOR(bVar2);
	return bVar5;
}

void Function_284(int iParam0, int iParam1, bool bParam2) //Position: 0xB699 / 46745
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = true;
	iVar1 = iParam1;
	iVar2 = 0;
	if (!bParam2)
	{
		iVar3 = Function_287(iParam0->f_724, *iParam0);
	}
	else
	{
		iVar3 = Function_287(iParam0->f_724, 5);
	}
	if (iVar3 > 0)
	{
		iVar4 = 0;
		while (iVar4 <= iParam0->f_260)
		{
			(*iParam0 + 260)[iVar4] = 0;
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= iParam0->f_208)
		{
			(*iParam0 + 208)[iVar4] = 0;
			iVar4++;
		}
		if (iVar1 >= iVar3)
		{
			iVar1 = iVar3;
		}
		while (bVar0)
		{
			bVar5 = RAND_INT_RANGE(false, (iVar3 - 1));
			bVar6 = false;
			while (!bVar6)
			{
				if (!(*iParam0 + 260)[bVar5])
				{
					bVar6 = true;
				}
				else
				{
					bVar5++;
					if (bVar5 > iVar3)
					{
						bVar5 = false;
					}
				}
			}
			if (!bParam2)
			{
				Function_285(iParam0, bVar5, 0);
			}
			else
			{
				Function_285(iParam0, bVar5, 1);
			}
			iVar2++;
			(*iParam0 + 260)[bVar5] = 1;
			if (iVar2 == iVar1)
			{
				bVar0 = false;
			}
		}
		iParam0->f_612 = iParam1;
	}
	return;
}

void Function_285(int iParam0, bool bParam1, bool bParam2) //Position: 0xB794 / 46996
{
	if (!bParam2)
	{
		switch (*iParam0)
		{
			case 0x00000000:
			case 0x00000001:
				if (iParam0->f_724 == 0)
				{
					if (Global_29006 == Global_30717[0])
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_286(iParam0 + 60, 184, 3, 0);
								break;
							
							case 0x00000001:
								Function_286(iParam0 + 60, 185, 3, 0);
								break;
							
							case 0x00000002:
								Function_286(iParam0 + 60, 186, 3, 0);
								break;
							
							case 0x00000003:
								Function_286(iParam0 + 60, 187, 3, 0);
								break;
							
							case 0x00000004:
								Function_286(iParam0 + 60, 188, 3, 0);
								break;
						}
					}
					else if (Global_29004 == 2)
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_286(iParam0 + 60, 438, 3, 0);
								break;
							
							case 0x00000001:
								Function_286(iParam0 + 60, 424, 3, 0);
								break;
							
							case 0x00000002:
								Function_286(iParam0 + 60, 426, 3, 0);
								break;
							
							case 0x00000003:
								Function_286(iParam0 + 60, 434, 3, 0);
								break;
							
							case 0x00000004:
								Function_286(iParam0 + 60, 435, 3, 0);
								break;
							
							case 0x00000005:
								Function_286(iParam0 + 60, 447, 3, 0);
								break;
							
							case 0x00000006:
								Function_286(iParam0 + 60, 448, 3, 0);
								break;
							
							case 0x00000007:
								Function_286(iParam0 + 60, 184, 3, 0);
								break;
							
							case 0x00000008:
								Function_286(iParam0 + 60, 185, 3, 0);
								break;
							
							case 0x00000009:
								Function_286(iParam0 + 60, 186, 3, 0);
								break;
							
							case 0x0000000A:
								Function_286(iParam0 + 60, 187, 3, 0);
								break;
							
							case 0x0000000B:
								Function_286(iParam0 + 60, 188, 3, 0);
								break;
						}
					}
					else if (Global_29004 == 0)
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_286(iParam0 + 60, 436, 3, 0);
								break;
							
							case 0x00000001:
								Function_286(iParam0 + 60, 437, 3, 0);
								break;
							
							case 0x00000002:
								Function_286(iParam0 + 60, 440, 3, 0);
								break;
							
							case 0x00000003:
								Function_286(iParam0 + 60, 441, 3, 0);
								break;
							
							case 0x00000004:
								Function_286(iParam0 + 60, 442, 3, 0);
								break;
							
							case 0x00000005:
								Function_286(iParam0 + 60, 443, 3, 0);
								break;
							
							case 0x00000006:
								Function_286(iParam0 + 60, 444, 3, 0);
								break;
							
							case 0x00000007:
								Function_286(iParam0 + 60, 445, 3, 0);
								break;
							
							case 0x00000008:
								Function_286(iParam0 + 60, 446, 3, 0);
								break;
							
							case 0x00000009:
								Function_286(iParam0 + 60, 425, 3, 0);
								break;
							
							case 0x0000000A:
								Function_286(iParam0 + 60, 427, 3, 0);
								break;
							
							case 0x0000000B:
								Function_286(iParam0 + 60, 428, 3, 0);
								break;
							
							case 0x0000000C:
								Function_286(iParam0 + 60, 429, 3, 0);
								break;
							
							case 0x0000000D:
								Function_286(iParam0 + 60, 430, 3, 0);
								break;
							
							case 0x0000000E:
								Function_286(iParam0 + 60, 431, 3, 0);
								break;
							
							case 0x0000000F:
								Function_286(iParam0 + 60, 432, 3, 0);
								break;
							
							case 0x00000010:
								Function_286(iParam0 + 60, 433, 3, 0);
								break;
							}
					}
				}
				else if (iParam0->f_724 == 1)
				{
					if (Global_30619 > 3)
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_286(iParam0 + 60, 521, 3, 0);
								break;
							
							case 0x00000001:
								Function_286(iParam0 + 60, 522, 3, 0);
								break;
							
							case 0x00000002:
								Function_286(iParam0 + 60, 523, 3, 0);
								break;
							
							case 0x00000003:
								Function_286(iParam0 + 60, 529, 3, 0);
								break;
							
							case 0x00000004:
								Function_286(iParam0 + 60, 530, 3, 0);
								break;
							
							case 0x00000005:
								Function_286(iParam0 + 60, 531, 3, 0);
								break;
						}
					}
					else if (Global_29006 == Global_30685[0])
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_286(iParam0 + 60, 461, 3, 0);
								break;
							
							case 0x00000001:
								Function_286(iParam0 + 60, 462, 3, 0);
								break;
							
							case 0x00000002:
								Function_286(iParam0 + 60, 463, 3, 0);
								break;
							
							case 0x00000003:
								Function_286(iParam0 + 60, 464, 3, 0);
								break;
							
							case 0x00000004:
								Function_286(iParam0 + 60, 465, 3, 0);
								break;
							
							case 0x00000005:
								Function_286(iParam0 + 60, 466, 3, 0);
								break;
						}
					}
					else
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_286(iParam0 + 60, 455, 3, 0);
								break;
							
							case 0x00000001:
								Function_286(iParam0 + 60, 456, 3, 0);
								break;
							
							case 0x00000002:
								Function_286(iParam0 + 60, 457, 3, 0);
								break;
							
							case 0x00000003:
								Function_286(iParam0 + 60, 458, 3, 0);
								break;
							
							case 0x00000004:
								Function_286(iParam0 + 60, 459, 3, 0);
								break;
							
							case 0x00000005:
								Function_286(iParam0 + 60, 460, 3, 0);
								break;
							}
						}
				}
				break;
			
			case 0x00000002:
				if (iParam0->f_724 == 0)
				{
					switch (bParam1)
					{
						case 0x00000000:
							Function_286(iParam0 + 60, 449, 3, 0);
							break;
						
						case 0x00000001:
							Function_286(iParam0 + 60, 450, 3, 0);
							break;
						
						case 0x00000002:
							Function_286(iParam0 + 60, 451, 3, 0);
							break;
						
						case 0x00000003:
							Function_286(iParam0 + 60, 452, 3, 0);
							break;
						
						case 0x00000004:
							Function_286(iParam0 + 60, 453, 3, 0);
							break;
						
						case 0x00000005:
							Function_286(iParam0 + 60, 454, 3, 0);
							break;
					}
				}
				else if (iParam0->f_724 == 1)
				{
					switch (bParam1)
					{
						case 0x00000000:
							Function_286(iParam0 + 60, 379, 3, 0);
							break;
						
						case 0x00000001:
							Function_286(iParam0 + 60, 380, 3, 0);
							break;
						
						case 0x00000002:
							Function_286(iParam0 + 60, 381, 3, 0);
							break;
						
						case 0x00000003:
							Function_286(iParam0 + 60, 391, 3, 0);
							break;
						
						case 0x00000004:
							Function_286(iParam0 + 60, 392, 3, 0);
							break;
						
						case 0x00000005:
							Function_286(iParam0 + 60, 393, 3, 0);
							break;
						}
				}
				break;
			
			case 0x00000003:
				switch (Global_29004)
				{
					case 0x00000000:
						switch (bParam1)
						{
							case 0x00000000:
								Function_286(iParam0 + 60, 397, 3, 0);
								break;
							
							case 0x00000001:
								Function_286(iParam0 + 60, 398, 3, 0);
								break;
							
							case 0x00000002:
								Function_286(iParam0 + 60, 399, 3, 0);
								break;
							
							case 0x00000003:
								Function_286(iParam0 + 60, 400, 3, 0);
								break;
							
							case 0x00000004:
								Function_286(iParam0 + 60, 401, 3, 0);
								break;
							
							case 0x00000005:
								Function_286(iParam0 + 60, 402, 3, 0);
								break;
							
							case 0x00000006:
								Function_286(iParam0 + 60, 403, 3, 0);
								break;
							
							case 0x00000007:
								Function_286(iParam0 + 60, 404, 3, 0);
								break;
							
							case 0x00000008:
								Function_286(iParam0 + 60, 405, 3, 0);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bParam1)
						{
							case 0x00000000:
								Function_286(iParam0 + 60, 415, 3, 0);
								break;
							
							case 0x00000001:
								Function_286(iParam0 + 60, 416, 3, 0);
								break;
							
							case 0x00000002:
								Function_286(iParam0 + 60, 417, 3, 0);
								break;
							
							case 0x00000003:
								Function_286(iParam0 + 60, 418, 3, 0);
								break;
							
							case 0x00000004:
								Function_286(iParam0 + 60, 419, 3, 0);
								break;
							
							case 0x00000005:
								Function_286(iParam0 + 60, 420, 3, 0);
								break;
							
							case 0x00000006:
								Function_286(iParam0 + 60, 421, 3, 0);
								break;
							
							case 0x00000007:
								Function_286(iParam0 + 60, 422, 3, 0);
								break;
							
							case 0x00000008:
								Function_286(iParam0 + 60, 423, 3, 0);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bParam1)
						{
							case 0x00000000:
								Function_286(iParam0 + 60, 406, 3, 0);
								break;
							
							case 0x00000001:
								Function_286(iParam0 + 60, 407, 3, 0);
								break;
							
							case 0x00000002:
								Function_286(iParam0 + 60, 408, 3, 0);
								break;
							
							case 0x00000003:
								Function_286(iParam0 + 60, 409, 3, 0);
								break;
							
							case 0x00000004:
								Function_286(iParam0 + 60, 410, 3, 0);
								break;
							
							case 0x00000005:
								Function_286(iParam0 + 60, 411, 3, 0);
								break;
							
							case 0x00000006:
								Function_286(iParam0 + 60, 412, 3, 0);
								break;
							
							case 0x00000007:
								Function_286(iParam0 + 60, 413, 3, 0);
								break;
							
							case 0x00000008:
								Function_286(iParam0 + 60, 414, 3, 0);
								break;
						}
						break;
				}
				break;
		}
	}
	else if (iParam0->f_724 == 0)
	{
		if (Global_29006 == Global_30717[0])
		{
			switch (bParam1)
			{
				case 0x00000000:
					Function_286(iParam0 + 60, 184, 3, 0);
					break;
				
				case 0x00000001:
					Function_286(iParam0 + 60, 185, 3, 0);
					break;
				
				case 0x00000002:
					Function_286(iParam0 + 60, 186, 3, 0);
					break;
				
				case 0x00000003:
					Function_286(iParam0 + 60, 187, 3, 0);
					break;
				
				case 0x00000004:
					Function_286(iParam0 + 60, 188, 3, 0);
					break;
			}
		}
		else if (Global_29004 == 2)
		{
			switch (bParam1)
			{
				case 0x00000000:
					Function_286(iParam0 + 60, 436, 3, 0);
					break;
				
				case 0x00000001:
					Function_286(iParam0 + 60, 437, 3, 0);
					break;
				
				case 0x00000002:
					Function_286(iParam0 + 60, 438, 3, 0);
					break;
				
				case 0x00000003:
					Function_286(iParam0 + 60, 441, 3, 0);
					break;
				
				case 0x00000004:
					Function_286(iParam0 + 60, 443, 3, 0);
					break;
				
				case 0x00000005:
					Function_286(iParam0 + 60, 447, 3, 0);
					break;
				
				case 0x00000006:
					Function_286(iParam0 + 60, 448, 3, 0);
					break;
				
				case 0x00000007:
					Function_286(iParam0 + 60, 184, 3, 0);
					break;
				
				case 0x00000008:
					Function_286(iParam0 + 60, 185, 3, 0);
					break;
				
				case 0x00000009:
					Function_286(iParam0 + 60, 186, 3, 0);
					break;
				
				case 0x0000000A:
					Function_286(iParam0 + 60, 187, 3, 0);
					break;
				
				case 0x0000000B:
					Function_286(iParam0 + 60, 188, 3, 0);
					break;
			}
		}
		else if (Global_29004 == 0)
		{
			switch (bParam1)
			{
				case 0x00000000:
					Function_286(iParam0 + 60, 436, 3, 0);
					break;
				
				case 0x00000001:
					Function_286(iParam0 + 60, 437, 3, 0);
					break;
				
				case 0x00000002:
					Function_286(iParam0 + 60, 440, 3, 0);
					break;
				
				case 0x00000003:
					Function_286(iParam0 + 60, 441, 3, 0);
					break;
				
				case 0x00000004:
					Function_286(iParam0 + 60, 442, 3, 0);
					break;
				
				case 0x00000005:
					Function_286(iParam0 + 60, 443, 3, 0);
					break;
				
				case 0x00000006:
					Function_286(iParam0 + 60, 444, 3, 0);
					break;
				
				case 0x00000007:
					Function_286(iParam0 + 60, 445, 3, 0);
					break;
				
				case 0x00000008:
					Function_286(iParam0 + 60, 446, 3, 0);
					break;
				
				case 0x00000009:
					Function_286(iParam0 + 60, 425, 3, 0);
					break;
				
				case 0x0000000A:
					Function_286(iParam0 + 60, 427, 3, 0);
					break;
				
				case 0x0000000B:
					Function_286(iParam0 + 60, 428, 3, 0);
					break;
				}
		}
	}
	else if (iParam0->f_724 == 1)
	{
		switch (bParam1)
		{
			case 0x00000000:
				Function_286(iParam0 + 60, 379, 3, 0);
				break;
			
			case 0x00000001:
				Function_286(iParam0 + 60, 380, 3, 0);
				break;
			
			case 0x00000002:
				Function_286(iParam0 + 60, 381, 3, 0);
				break;
			
			case 0x00000003:
				Function_286(iParam0 + 60, 391, 3, 0);
				break;
			
			case 0x00000004:
				Function_286(iParam0 + 60, 392, 3, 0);
				break;
			
			case 0x00000005:
				Function_286(iParam0 + 60, 393, 3, 0);
				break;
			
			case 0x00000006:
				Function_286(iParam0 + 60, 395, 3, 0);
				break;
			
			case 0x00000007:
				Function_286(iParam0 + 60, 396, 3, 0);
				break;
			}
	}
	return;
}

var Function_286(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xC3DD / 50141
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_32(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_272(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_272(uParam0[iVar03], 8);
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

int Function_287(int iParam0, int iParam1) //Position: 0xC4AD / 50349
{
	switch (iParam1)
	{
		case 0x00000000:
		case 0x00000001:
			if (iParam0 == 0)
			{
				if (Global_29006 == Global_30717[0])
				{
					return 5;
				}
				if (Global_29004 == 2)
				{
					return 12;
				}
				if (Global_29004 == 0)
				{
					return 17;
				}
			}
			if (iParam0 == 1)
			{
				if (Global_30619 > 3)
				{
					return 6;
				}
				if (Global_29006 == Global_30685[0])
				{
					return 6;
				}
				return 6;
			}
			break;
		
		case 0x00000002:
			if (iParam0 == 0)
			{
				return 6;
			}
			if (iParam0 == 1)
			{
				return 6;
			}
			break;
		
		case 0x00000005:
			if (iParam0 == 0)
			{
				if (Global_29006 == Global_30717[0])
				{
					return 5;
				}
				if (Global_29004 == 2)
				{
					return 12;
				}
				if (Global_29004 == 0)
				{
					return 12;
				}
			}
			if (iParam0 == 1)
			{
				return 8;
			}
			break;
		
		case 0x00000003:
			switch (Global_29004)
			{
				case 0x00000000:
					return 9;
					break;
				
				case 0x00000002:
					return 9;
					break;
				
				case 0x00000001:
					return 9;
					break;
			}
			break;
	}
	return 4294967295;
}

int Function_288(var uParam0, int iParam1) //Position: 0xC5B4 / 50612
{
	iParam1 = iParam1;
	uParam0 = uParam0;
	return 4;
}

void Function_289(int iParam0) //Position: 0xC5C3 / 50627
{
	Function_290(iParam0 + 8, "stand_surrender", 5, 0);
	Function_290(iParam0 + 8, "custom/stand_surrender", 8, 0);
	Function_290(iParam0 + 8, "stand_shakehands", 5, 0);
	Function_290(iParam0 + 8, "custom/stand_shakehands", 8, 0);
	return;
}

var Function_290(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xC64B / 50763
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_291(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_272(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_291(var uParam0, int iParam1, int iParam2) //Position: 0xC683 / 50819
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_32(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_272(uParam0[iVar03], 4);
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

var Function_292(bool bParam0) //Position: 0xC747 / 51015
{
	bool bVar0;
	
	if (Function_229())
	{
		if (!IS_LAYOUTREF_VALID(Global_79341))
		{
			Global_79341 = CREATE_LAYOUT("gMP_MPLAW_Layout");
		}
		bVar0 = Global_79341;
	}
	else
	{
		bVar0 = CREATE_LAYOUT(bParam0);
	}
	return bVar0;
}

